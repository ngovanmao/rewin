#include <Timer.h>
#include "BlinkToRadio.h"
#include "printf.h"
//#define ACK_MSG = 0xAAAA;	// set wheather a packet is a ACK packet
#define EXPERIMENT_LENGHT=1000

module BlinkToRadioC{
	uses interface Boot;
	uses interface Leds;
	uses interface Timer<TMilli> as Timer0;
	uses interface Packet;
	uses interface AMPacket;
	uses interface AMSend;
	uses interface SplitControl as AMControl;  // AMControl is used as name for SPlitControl here
	uses interface Receive;		//interface to Receive
	uses interface CC2420Packet;
	uses interface CC2420Config;
	}
	
implementation {
	uint16_t counter = 0;
	uint16_t counter_coord;

	bool busy = FALSE;
	message_t pkt;
	uint8_t out_pow = 11;
	uint16_t  DestAdd = AM_BROADCAST_ADDR;
	int8_t rssi_A=-100, rssi_B=-100;		//rssi of last session's ACK and this session's beacon
	uint8_t alpha=5;
      // global variablesfor channel characterization
     		int8_t i, TX_power;
		uint8_t sensitivity = 92;
		uint8_t   a_plus, a_minus,  d=1, N=32, a=16;
		uint16_t rssi_ack[4]={85, 85, 85, 85},  k=0;
		uint16_t chan=85, chan_minus,chan_plus,chan_0;
		uint16_t ch[4]={85, 85, 85, 85}, ch_plus[4]={85, 85, 85, 85}, ch_minus[4]={85, 85, 85, 85};
		uint16_t mse=0, mse_plus=0 ,mse_minus=0 ;
		uint8_t margin=5,ch_error,reduce_thr=30;
		uint8_t min_thr=7;

	void margin_estimator();
	void channel_characterization(uint8_t, uint8_t);
	void channel_characterization_xiao(uint8_t, uint8_t);
	uint8_t dBmToPA_LEVEL(int8_t);
	uint8_t SquareRoot( uint16_t);
	 int8_t poweradj(int8_t);

	/*void sendAM (void){
		BlinkToRadioMsg* btrpkt = (BlinkToRadioMsg*)(call Packet.getPayload(&pkt, sizeof (BlinkToRadioMsg)));
		btrpkt -> nodeid = TOS_NODE_ID;
		btrpkt -> counter = counter;
		printf("\n Local counter : %u\n",counter);
		printf("\n Local nodeid :  %u\n",TOS_NODE_ID);
		if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(BlinkToRadioMsg)) == SUCCESS){
			busy = TRUE;
		}
	}*/
	
	
	event void Boot.booted(){
	//	call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
		call AMControl.start();	
		call Leds.led1Toggle();
	//	printf("\n A");
	//	printfflush();
	}
		
	// event after a AMCONTROL start finished	
	event void AMControl.startDone(error_t err){
	//	if (err == SUCESS) call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
	//	else call AMControl.start();
	if (err == FAIL) call AMControl.start();
	//	printf("\n B");
	//	printfflush();
	}
	
	
  event void AMControl.stopDone(error_t err) {
	//	printf("\n C");
	//	printfflush();
  }
  

	
	
	//event void sendDone(message_t* msg, error_t error){}
	
	event void AMSend.sendDone(message_t* msg, error_t error) {
		if (&pkt == msg){
				busy = FALSE;
			}
	//	printf("\n D");
		call Leds.led0Toggle();
			
	//	printfflush();
	}
	
	event void CC2420Config.syncDone( error_t error ){
	
	//	printf("\n E");
	//	printfflush();
	}
	
	
	event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
		
		// uint8_t tx_power;
	
		if ( len == sizeof (BlinkToRadioMsg)) {
			BlinkToRadioMsg* btrpkt = (BlinkToRadioMsg*)payload;
			// tx_power = call CC2420Packet.getPower(msg);
			
			DestAdd = btrpkt -> nodeid;

			if (DestAdd != ACK_MSG)   
			{
				rssi_B = call CC2420Packet.getRssi(msg) - 45;
				counter_coord= btrpkt -> seq_number_coord;
				
				if (counter_coord<400)
					channel_characterization((-1)*rssi_B, (-1)* rssi_A) ;
				else if (counter_coord<800)
						channel_characterization_xiao((-1)*rssi_B, (-1)* rssi_A) ;
				else if (counter_coord<1200)
						out_pow=dBmToPA_LEVEL(0);
				else if (counter_coord<1600)
						out_pow=dBmToPA_LEVEL(-10);
				else if (counter_coord<2000)
						out_pow=dBmToPA_LEVEL(-15);
				else if (counter_coord<2400)
						out_pow=dBmToPA_LEVEL(-25);
				else if (counter_coord<2800)
					channel_characterization((-1)*rssi_B, (-1)* rssi_A) ;
				else if (counter_coord<3200)
					channel_characterization_xiao((-1)*rssi_B, (-1)* rssi_A) ;
				else if (counter_coord<3600)
					channel_characterization((-1)*rssi_B, (-1)* rssi_A) ;
				else {printf("error");
						return; }

				call Timer0.startOneShot(DEVICE_DELAY * (TOS_NODE_ID-1));
				call Leds.led0Toggle();
				}
			else {rssi_A = call CC2420Packet.getRssi(msg) - 45;
				 call Leds.led2Toggle();}
		//	printf("\n %u %u %d %d %u %u",btrpkt -> nodeid, btrpkt -> seq_number, rssi_B, rssi_A, btrpkt -> pow_val, btrpkt -> alpha );
		
			//printf("\n getShortAddr() is : %u", call CC2420Config.getShortAddr());
		//	printfflush();
			

		}
		
		return msg;
	}

	event void Timer0.fired(){
	//	printf("\n G");
	//	printfflush();
		counter++;
      
		if(!busy)	{
			BlinkToRadioMsg* btrpkt;
			btrpkt = (BlinkToRadioMsg*)(call Packet.getPayload(&pkt, sizeof (BlinkToRadioMsg)));
			btrpkt -> nodeid = TOS_NODE_ID;
			btrpkt -> seq_number_coord=counter_coord;
			btrpkt -> seq_number = counter;
			btrpkt -> pow_val = out_pow;
			btrpkt -> chan_0 = chan_0;
			btrpkt -> rssi_B = rssi_B;		//rssi value of this session's beacon
			btrpkt -> rssi_A = rssi_A;		//rssi value of last session's ACK
	//		btrpkt -> alpha = alpha;
	//		btrpkt -> margin= margin;
	//		btrpkt -> ch_error=ch_error;

			call CC2420Packet.setPower( &pkt, out_pow );
//			strcpy (btrpkt->msg,"\nIt's a test.\n");
//			printf("\n Local counter : %u \n",counter);
//			printf("\n Local nodeid :  %u \n",TOS_NODE_ID);
			if (call AMSend.send(DestAdd, &pkt, sizeof(BlinkToRadioMsg)) == SUCCESS){
				busy = TRUE;
			//	printf("\n DEVICE SENT MESSAGE");
			//	printfflush();

			}
			rssi_A=-100; //inizialited again the rssi of the ack
		}
	}
	
	void channel_characterization(uint8_t rssi_beacon, uint8_t rssi_val) 
	{	uint16_t tmp;
		/*nt8_t i;
		uint8_t sensitivity = 95;
		uint8_t   a_plus, a_minus,  d=1, N=10, a=5;
		uint16_t rssi_ack[4]={85, 85, 85, 85},  k=0;
		uint16_t chan=85, chan_minus,chan_plus,chan_0;
		uint16_t ch[4]={85, 85, 85, 85}, ch_plus[4]={85, 85, 85, 85}, ch_minus[4]={85, 85, 85, 85};
		int8_t mse=0, mse_plus=0 ,mse_minus=0 , ch_error, TX_power;
		uint8_t margin=3;
*/


		a_plus=a+d;
		a_minus=a-d;
	
		//call Leds.led2Toggle();
		chan_0= (a * rssi_beacon + (N-a)*chan)/N;
		chan_plus= (a_plus * rssi_beacon + (N-a_plus)*chan)/N;
		chan_minus= (a_minus * rssi_beacon + (N-a_minus)*chan)/N;

		
		// calculation TX power after beacon is received
		
		//if (rssi_val<100)
		{
			TX_power=sensitivity-chan_0-margin;
				//printf("\n TX_b=%d margin_b=%d \t", TX_power, margin); 
			if (TX_power <0) TX_power=0;
			else if (TX_power >25) 
				{TX_power=25;
				margin=sensitivity-TX_power-chan_0;
				}
				//printf("TX_a=%d margin_a=%d \t", TX_power, margin); 
			out_pow=dBmToPA_LEVEL(TX_power*(-1));
		}
		
		// after ack received
		//printf("\t");			printfflush();
		
		if (rssi_val<100)
			{	mse =mse_plus=mse_minus =0;
				ch[k]=(int) chan_0;
				ch_plus[k]=(int) chan_plus;
				ch_minus[k]=(int) chan_minus;
		
				rssi_ack[k]=rssi_val;
				
				//printf("\t %d ",rssi_ack[k]);
				
				k++;
				if (k == 4)  k=0;
				

			
			for (i = 0; i < 4; i++)
	{ //if (ch[i]>rssi_ack[i])
		//printf("\n ch[i]=%d rssi=%d mse=%d mse_plus=%d", ch[i], rssi_ack[i], mse, mse_plus);
		mse = (((ch[i]-rssi_ack[i])*(ch[i]-rssi_ack[i])) + mse);
	//else mse = (rssi_ack[i]-ch[i])*(rssi_ack[i]-ch[i]) + mse;
	//if (ch_plus[i]>=rssi_ack[i]) 
		mse_plus = (((ch_plus[i]-rssi_ack[i])*(ch_plus[i]-rssi_ack[i])) + mse_plus);
	//else mse_plus = rssi_ack[i]-ch_plus[i] + mse_plus;
	//if (ch_minus[i]>=rssi_ack[i])
		mse_minus = (((ch_minus[i]-rssi_ack[i])*(ch_minus[i]-rssi_ack[i])) + mse_minus);

		

	}
			
					
					if ((mse_plus<mse) 	& (mse_plus<mse_minus))
					{ 
						if (a_plus<=N)			a=a_plus;
						chan=chan_plus;
		 			}
					else if ((mse_minus<mse) & (mse_minus<mse_plus))
					{ 	if (a_minus>0)			a=a_minus;
					chan=chan_minus;
					}else 	chan=chan_0;

					alpha=a;
					tmp = mse / 4;
					ch_error= SquareRoot(tmp);
					margin_estimator();
			}
			else { if (TX_power>21)
				margin=margin+6;
				else if (TX_power>16)
				margin=margin+4;
				else margin=margin+3;
				if (mse<2)
				reduce_thr+=20;
				else if (mse<4)
				reduce_thr+=10;
				else reduce_thr++;
					printf(" thr=%d red_in=%d", min_thr,reduce_thr); 
					}

				

	//	call Leds.led2Toggle();
		//printf("\t %d %d %d",mse, mse_plus,mse_minus);	
		printf("\n %u %u; %u chan0=%u %u; %u a=%u ch_err=%d mse=%d marg=%u; %d %u",rssi_beacon,rssi_val,chan_0,chan_plus,chan_minus,  chan, a,  ch_error ,mse, margin, TX_power*(-1), out_pow);
		printfflush();
			 return;
	}

	// margin estimator calculated after the ack is received
	void margin_estimator( )
	{	
		uint8_t low_thr=2;
		uint8_t up_thr=4;
		
		uint8_t delta=1;

	//printf("\n %d", margin); printfflush();
		if (margin<(ch_error+low_thr))
			margin=margin+delta;
		else if ((margin>min_thr) && (margin>(ch_error+up_thr)))
			margin=margin-delta;


		if ((mse<2)&&(min_thr>4))
			reduce_thr--;
		if ((reduce_thr<10)&&(min_thr>3))
			{min_thr--; 
			 reduce_thr+=20;}
		else if ((reduce_thr>50)&&(min_thr<10))
			{min_thr++; 
			 reduce_thr-=20;} 
			 else if (reduce_thr>50) reduce_thr=50;
	printf(" thr=%d red_de=%d", min_thr,reduce_thr); 
	

	//	if (rssi_A==-100)
	//	margin=margin+3*delta;

	}

//do the square root
uint8_t SquareRoot( uint16_t value )
       {
        uint8_t result;
        if (value>196)
       		 result = 16;
        else if (value>169)
       		 result = 15;
         else if (value>144)
       		 result = 14;
         else if (value>121)
         	result = 13;
         else if (value>100)
         	result = 11;
         else if (value>81)
         	result = 10;
         else if (value>64)
         	result = 9;
         else if (value>49)
         	result = 8;
         else if (value>36)
         	result = 7;
         else if (value>25)
         	result = 6;
         else if (value>16)
         	result = 5;
         else if (value>9)
         	result = 4;
         else if (value>4)
         	result = 3;
         else if (value>=2)
         	result = 2;
         else result = 1;
           return result;
       
       }

	// input: power in dBm bvut positive, output: PA_LEVEL parameter for cc2420 TXCTRL register
  
uint8_t dBmToPA_LEVEL(int8_t dB)
  { uint8_t result;
    int8_t dBm= poweradj(dB);
    
    if (dBm >= 0)
      result = 31;
    else if (dBm > -1)
      result = 29;
      else if (dBm > -2)
      result = 27;
    else if (dBm > -3)
      result = 25;
      else if (dBm > -4)
      result = 23;
    else if (dBm > -5)
      result = 21;
     else if (dBm > -6)
      result = 19;
    else if (dBm > -7)
      result = 17;
     else if (dBm > -8)
      result = 15;
       else if (dBm > -9)
      result = 13;
    else if (dBm > -11)
      result = 11;
    else if (dBm > -13)
      result = 9;
      else if (dBm > -16)
      result = 7;
  	else if (dBm> -20)
  	 result = 5;	
    else result = 3;
    return result;
  }

int8_t poweradj(int8_t dBm)
  {
    int8_t result;
	if (dBm > -11)
		result=dBm;
	   else if (dBm > -14)
      result = dBm++;
  		else if (dBm > -18)
  			result = dBm+2;
  		else if (dBm > -21)
  			result = dBm+3;
  		else if (dBm > -23)
  			result = dBm+4;
  		else result = dBm+5;
  		return result;
	}

void channel_characterization_xiao(uint8_t rssi_beacon, uint8_t rssi_val) 
	{	/*nt8_t i;
		uint8_t sensitivity = 95;
		uint8_t   a_plus, a_minus,  d=1, N=10, a=5;
		uint16_t rssi_ack[4]={85, 85, 85, 85},  k=0;
		uint16_t chan=85, chan_minus,chan_plus,chan_0;
		uint16_t ch[4]={85, 85, 85, 85}, ch_plus[4]={85, 85, 85, 85}, ch_minus[4]={85, 85, 85, 85};
		int8_t mse=0, mse_plus=0 ,mse_minus=0 , ch_error, TX_power;
		uint8_t margin=3;
*/


		a_plus=a+d;
		a_minus=a-d;
	
		//call Leds.led2Toggle();
		chan_0= (a * rssi_beacon + (N-a)*chan)/N;
		chan_plus= (a_plus * rssi_beacon + (N-a_plus)*chan)/N;
		chan_minus= (a_minus * rssi_beacon + (N-a_minus)*chan)/N;

		
		// calculation TX power after beacon is received
		
		//if (rssi_val<100)
		{ 	a=25;
			if ((chan_0-poweradj(TX_power))<80)
			TX_power--;
			else if ((chan_0-poweradj(TX_power))>85)
					TX_power+=3;
			if (TX_power >0) TX_power=0;
			else if (TX_power <(-25) )
				{TX_power=(-25);
				margin=sensitivity-TX_power-chan_0;
				}
				//printf("TX_a=%d margin_a=%d \t", TX_power, margin); 
			out_pow=dBmToPA_LEVEL(TX_power);
		}
		
		// after ack received
		//printf("\t");			printfflush();
		chan=chan_0;
		alpha=a;
		if (rssi_val<100)
			{

	
			/*
					
					if ((mse_plus<mse) 	& (mse_plus<mse_minus))
					{ 
						if (a_plus<=N)			a=a_plus;
						chan=chan_plus;
		 			}
					else if ((mse_minus<mse) & (mse_minus<mse_plus))
					{ 	if (a_minus>0)			a=a_minus;
					chan=chan_minus;
					}else 	chan=chan_0;

					alpha=a;
					tmp = mse / 4;
					ch_error= SquareRoot(tmp);					margin_estimator();
					*/
				chan=chan_0;
				alpha=a;
			}
			else { TX_power=TX_power+3;
					}


				

	//	call Leds.led2Toggle();
		//printf("\t %d %d %d",mse, mse_plus,mse_minus);	
		printf("\n %u %u; chan0=%u  %u  Tx=%d pow=%u",rssi_beacon,rssi_val,chan_0, chan, TX_power, out_pow);
		printfflush();
			 return;
	}


}