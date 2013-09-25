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
//	bool readWait = TRUE;
	BlinkToRadioMsg ReadLogMsg;

//******************************************************************************************
//******************************************************************************************
//************function/ task prototype


	task  void AMSendTask();
//	void ReadFlash();	
	task void EraseFlash();
	void WriteFlash(BlinkToRadioMsg*);

//******************************************************************************************
//******************************************************************************************
//************starting

	event void Boot.booted(){
	//	call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
		printf("\n Start to earse");
		printfflush();
		
		call Leds.led1On();
		call BlockWrite.erase();
//		call BlockRead.read(ReadLogAddrs, &ReadLogMsg, sizeof(BlinkToRadioMsg));
//		ReadFlash();
//		while(readWait);
//		printf("\n Readed Flash Poosted");
//		call AMControl.start();
//		printfflush();
    //		call MLME_SET.macRxOnWhenIdle(TRUE);
//		printf("\n A");
//		printfflush();
	}
		
	// event after a AMCONTROL start finished	
	event void AMControl.startDone(error_t err){
		if (err == SUCCESS) call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
		else call AMControl.start();
		printf("\n B");
		printfflush();
		
	}
	
	
       event void AMControl.stopDone(error_t err) {
		printf("\n C");
		printfflush();
	  }

	event void CC2420Config.syncDone( error_t error ){
		printf("\n D");
		printfflush();
	}  
	
	event void Timer0.fired(){
		printf("\n E");
		printfflush();
		
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
	//event void sendDone(message_t* msg, error_t error){}


	event void Timer1.fired(){
//			printf("\nTimer1 fired");
//			printfflush();
			
			if (ReadLogAddrs<MAX_FLASH_ADDR) 	call BlockRead.read(ReadLogAddrs, &ReadLogMsg, sizeof(BlinkToRadioMsg));
//			else readWait=FALSE;
			else	{
					call BlockWrite.erase();	
					printf("\Erase Started");			
					printfflush();
				}
//			readWait=FALSE;
	
		}



	event void BlockWrite.eraseDone(error_t error){
	
			call Leds.led0On();
			call AMControl.start();
			printf("\nAMControl Started");			
			printfflush();
		
	}
		
	event void AMSend.sendDone(message_t* msg, error_t error) {
		if (&pkt == msg){
				busy = FALSE;
			}
		//printf("\n F");
		//printfflush();
		call Leds.led0Toggle();
//		call Leds.led1Toggle();
//		call Leds.led2Toggle();
	}


	event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
		uint8_t tx_power;
		uint8_t channel;
		call Leds.led2Toggle();

		if ( len == sizeof (BlinkToRadioMsg)) {
			BlinkToRadioMsg* btrpkt = (BlinkToRadioMsg*)payload;

			DestAdd = btrpkt -> nodeid;	//assign the address to send


//***********************************************************************************************
//**********printf debugging message
			printf("\n Write %u %u %d %d %u ",DestAdd, btrpkt -> seq_number, btrpkt -> rssi_B,btrpkt -> rssi_A, btrpkt -> pow_val );
			printf("\n Write address : %lu ",WriteLogAddrs);
			printfflush();
//***********************************************************************************************
//**********store debugging message in onboard flash memory
			WriteFlash(btrpkt);
			ack = TRUE;
			post AMSendTask();
		}
		
		return msg;
	}

task  void AMSendTask(){
	if(!busy)	{
			BlinkToRadioMsg* btrpkt;
			btrpkt = (BlinkToRadioMsg*)(call Packet.getPayload(&pkt, sizeof (BlinkToRadioMsg)));
			if (!ack)	   btrpkt -> nodeid = TOS_NODE_ID;
			else btrpkt -> nodeid = ACK_MSG;
			btrpkt -> seq_number = counter;
			btrpkt -> pow_val = pow;
		
			call CC2420Packet.setPower( &pkt, pow );
			if (call AMSend.send(DestAdd, &pkt, sizeof(BlinkToRadioMsg)) == SUCCESS){
				busy = TRUE;
			
			}
		}
		}


//command error_t read(storage_addr_t addr, void* buf, storage_len_t len);


//task to read all flash and transmit out by UART
/*void ReadFlash(){
//		BlinkToRadioMsg msg;
		storage_addr_t addrs=0;
		
//		while(1){		
			
			call BlockRead.read(addrs, &ReadLogMsg, sizeof(BlinkToRadioMsg));
//			addrs += sizeof(BlinkToRadioMsg);
//			printf("\n %u %u %d %d %u ",msg.nodeid, msg.seq_number, msg.rssi_B,msg.rssi_A, msg.pow_val );			printf("\n %u %u %d %d %u ",msg.nodeid, msg.seq_number, msg.rssi_B,msg.rssi_A, msg.pow_val );
			
			printf("\nRF");
			printfflush();
//		}
		
	}*/

event void BlockRead.readDone(storage_addr_t addr, void* buf, storage_len_t len, 
		      error_t error){
			if(error == SUCCESS){
				BlinkToRadioMsg* msg = (BlinkToRadioMsg*) buf;
//				uint32_t addrs_v = (uint32_t) addr;
//				printf("\nreadDone");
				printf("\n %u %u %d %d %u %lu ", msg->nodeid, msg->seq_number, msg->rssi_B, msg->rssi_A, msg->pow_val, addr);
//				printf("\n Flash Address is : %lu ", addrs_v );
				if(msg->nodeid ==65535) 	ReadLogAddrs = MAX_FLASH_ADDR;
			}
			else printf("\n Error when reading");
			printfflush();
			ReadLogAddrs+=sizeof(BlinkToRadioMsg);
			call Timer1.startOneShot(10);
//			readWait=TRUE;
//			while(readWait);
//			if (addr<MAX_FLASH_ADDR) 	call BlockRead.read(addr, buf, sizeof(BlinkToRadioMsg));
		      }	

		      
//task to erase all flash data
task void EraseFlash(){
		uint8_t buffer[256];
		storage_addr_t addrs=0;
		strcpy (buffer,"");
		while(1){
			if(addrs>=MAX_FLASH_ADDR) break;
			call BlockWrite.write(addrs,&buffer, 256);
			addrs += 256;
		}

	}


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
	
			printf("\nWD");
			printfflush();
	}


event void BlockRead.computeCrcDone(storage_addr_t addr, storage_len_t len,
			    uint16_t crc, error_t error){}
			    
 event void BlockWrite.syncDone(error_t error){}
//event void BlockWrite.eraseDone(error_t error){}

/*command error_t write(storage_addr_t addr, void* buf, storage_len_t len);

  *
   * Signals the completion of a write operation. However, data is not
   * guaranteed to survive a power-cycle unless a sync operation has
   * been completed.
   *
   * @param addr starting address of write.
   * @param 'void* COUNT(len) buf' buffer that written data was read from.
   * @param len number of bytes written.
   * @param error SUCCESS if the operation was successful, FAIL if
   *   it failed
   

  event void writeDone(storage_addr_t addr, void* buf, storage_len_t len, */

	
	/*event message_t* Receive.receive(message_t* msg, void* payload, unit8_t len){
		if ( len == sizeof (BlinkToRadioMsg)) {
			BlinkToRadioMsg* btrpkt = (BlinkToRadioMsg*)payload;
			call Leds.set(btrpkt->counter);
		}
		return msg;
	}*/
}
	
