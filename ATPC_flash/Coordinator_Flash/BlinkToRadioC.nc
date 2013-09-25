#include <Timer.h>
#include "BlinkToRadio.h"
#include <printf.h>
#include <string.h>

module BlinkToRadioC{
	uses interface Boot;
	uses interface Leds;
	uses interface Timer<TMilli> as Timer0;
	uses interface Timer<TMilli> as Timer1;
	uses interface Packet;
	uses interface AMPacket;
	uses interface AMSend;
	uses interface SplitControl as AMControl;  // AMControl is used as name for SPlitControl here
	uses interface Receive;		//interface to Receive
	uses interface CC2420Packet;
	uses interface CC2420Config;
	uses interface BlockWrite;
	uses interface BlockRead;
	}
	
implementation {
	uint16_t counter = 0;
	bool busy = FALSE;
	bool ack = FALSE;			//indicate whether the packet is a ACK
	message_t pkt;
	uint8_t pow = 31;
	uint16_t  DestAdd = AM_BROADCAST_ADDR;
	int8_t rssi;
	storage_addr_t WriteLogAddrs=0;
	storage_addr_t ReadLogAddrs=0;
	BlinkToRadioMsg ReadLogMsg;

	task  void AMSendTask();
	task void EraseFlash();
	void WriteFlash(BlinkToRadioMsg*);
	
	event void Boot.booted(){
		call Leds.led0On();
		call BlockRead.read(ReadLogAddrs, &ReadLogMsg, sizeof(BlinkToRadioMsg));	
		//call AMControl.start();

	}
		
	// event after a AMCONTROL start finished	
	event void AMControl.startDone(error_t err){
		if (err == SUCCESS) 
			{ 		call Leds.led0Off();
					call Leds.led1On();
				call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
	}
		else call AMControl.start();
//		printf("\n B");
//		printfflush();
		
	}
	
	
       event void AMControl.stopDone(error_t err) {
//		printf("\n C");
//		printfflush();
	  }

	event void CC2420Config.syncDone( error_t error ){
//		printf("\n D");
	//	printfflush();
	}  
	
	event void Timer0.fired(){
		//printf("\n E");
		//printfflush();
		
		counter++;
		
//			if (pow <31)			pow=pow+1;
//			else pow = 10;

		DestAdd = AM_BROADCAST_ADDR;
		ack = FALSE;			//indicate whether the packet is a ACK
		post AMSendTask();
		/*if(!busy)	{
			BlinkToRadioMsg* btrpkt;
			btrpkt = (BlinkToRadioMsg*)(call Packet.getPayload(&pkt, sizeof (BlinkToRadioMsg)));
			btrpkt -> nodeid = TOS_NODE_ID;
			btrpkt -> counter = counter;
			btrpkt -> pow_val = pow;
		
			call CC2420Packet.setPower( &pkt, pow );
//			strcpy (btrpkt->msg,"\nIt's a test.\n");
//			printf("\n Local counter : %u \n",counter);
//			printf("\n Local nodeid :  %u \n",TOS_NODE_ID);
			if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(BlinkToRadioMsg)) == SUCCESS){
				busy = TRUE;
			
			}
		}*/
	}

	
	event void AMSend.sendDone(message_t* msg, error_t error) {
		if (&pkt == msg){
				busy = FALSE;
			}
		//printf("\n F");
		//printfflush();
		call Leds.led0Toggle();
	}


	event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
//		uint8_t tx_power;
//		uint8_t channel;
		call Leds.led2Toggle();

        //printf("\n G");         //printfflush();         if ( len == sizeof
	if ( len == sizeof (BlinkToRadioMsg)) {
			BlinkToRadioMsg* btrpkt = (BlinkToRadioMsg*)payload;
			//tx_power = call CC2420Packet.getPower(msg);
//			channel =  call CC2420Config.getChannel();
			btrpkt-> rssi_reception = call CC2420Packet.getRssi(msg) - 45;
			DestAdd = btrpkt -> nodeid;	//assign the address to send
			WriteFlash(btrpkt); //for FLASH
				printf("\n %u %u %u %u %d %d %d %d",btrpkt -> nodeid,  btrpkt -> seq_number_coord, btrpkt -> seq_number, btrpkt -> pow_val, btrpkt-> rssi_reception, btrpkt -> chan_0, btrpkt -> rssi_B,btrpkt -> rssi_A  );
			printf(" %lu",WriteLogAddrs); //for FLASH address space
			printfflush();
			ack = TRUE;
			post AMSendTask();
		}
		
		return msg;
	}

task  void AMSendTask(){
	if(!busy)	{
			BlinkToRadioMsg* btrpkt;
			btrpkt = (BlinkToRadioMsg*)(call Packet.getPayload(&pkt, sizeof (BlinkToRadioMsg)));
			if (!ack)	   {
				btrpkt -> nodeid = TOS_NODE_ID;
				call Leds.led1Toggle();}
			else btrpkt -> nodeid = ACK_MSG;
			btrpkt -> seq_number_coord = counter;
			//btrpkt -> pow_val = pow;
		
			//call CC2420Packet.setPower( &pkt, pow );
			if (call AMSend.send(DestAdd, &pkt, sizeof(BlinkToRadioMsg)) == SUCCESS){
				busy = TRUE;
			
			}
		}
		}
event void Timer1.fired(){
						
			if (ReadLogAddrs<MAX_FLASH_ADDR) 	call BlockRead.read(ReadLogAddrs, &ReadLogMsg, sizeof(BlinkToRadioMsg));
				else		call AMControl.start();
				
		}

		event void BlockRead.readDone(storage_addr_t addr, void* buf, storage_len_t len,  error_t error){
			if(error == SUCCESS){
				BlinkToRadioMsg* msg = (BlinkToRadioMsg*) buf;


				printf("\n %u %u %u %u %d %d %d %d %lu ", msg -> nodeid,
				msg -> seq_number_coord, msg -> seq_number, msg -> pow_val,
				msg->rssi_reception, msg -> chan_0, msg -> rssi_B,msg ->
				rssi_A ,  addr);

				if ((msg->nodeid ==255) && (msg->seq_number_coord==65535))	ReadLogAddrs = MAX_FLASH_ADDR;
			}
			else printf("\n Error when reading");
			printfflush();
			ReadLogAddrs+=sizeof(BlinkToRadioMsg);

			call Timer1.startOneShot(10); //Timer to read the Flash depends on the user

		      }	
		      task void EraseFlash(){		}
		      
		     void WriteFlash(BlinkToRadioMsg* btrpkt){

				if(WriteLogAddrs <= (MAX_FLASH_ADDR - sizeof(BlinkToRadioMsg))){
				call BlockWrite.write(WriteLogAddrs,btrpkt, sizeof(BlinkToRadioMsg));
				WriteLogAddrs += sizeof(BlinkToRadioMsg);
			}
			else {
				printf("\nflash memory full!!!");
				printfflush();
				}
			}

			event void BlockWrite.writeDone(storage_addr_t addr, void* buf, storage_len_t len, error_t error){
	       call Leds.led2Toggle();
			//printf("\nWD");
			//printfflush();
			}
			event void BlockRead.computeCrcDone(storage_addr_t addr, storage_len_t len,    uint16_t crc, error_t error){}
			    
 			event void BlockWrite.syncDone(error_t error){}
 			event void BlockWrite.eraseDone(error_t error){
	
		
	}
}
	