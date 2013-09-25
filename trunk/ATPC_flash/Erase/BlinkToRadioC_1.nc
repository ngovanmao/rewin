#include <Timer.h>
#include "BlinkToRadio.h"
#include "printf.h"

module BLinkToRadioC{
	uses interface Boot;
	uses interface Leds;
	uses interface Timer<TMilli> as Timer0;
	uses interface Packet;
	uses interface AMPacket;
	uses interface AMSend;
	uses interface SplitControl as AMControl;  // AMControl is used as name for SPlitControl here
	uses interface Receive;		//interface to Receive
	}
	
implementation {
	uint16_t counter = 0;
	bool busy = FALSE;
	message_t pkt;
	BlinkToRadioMsg* btrpkt;
	
	void sendAM (void){
		btrpkt = (BlinkToRadioMsg*)(call Packet.getPayload(&pkt, sizeof (BlinkToRadioMsg)));
		btrpkt -> nodeid = TOS_NODE_ID;
		btrpkt -> counter = counter;
		printf("\n Local counter : %u\n",counter);
		printf("\n Local nodeid :  %u\n",TOS_NODE_ID);
		if (call AMSend.send(AM_BROADCAST-ADDR, &pkt, sizeof(BlinkToRadioMsg)) == SUCCESS){
			busy = TRUE;
		}
	}
	event void Boot.booted(){
	//	call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
		call AMControl.start();
	}
		
	// event after a AMCONTROL start finished	
	event void AMControl.startDone(error_t err){
		if (err == SUCESS) call Timer0.startPeriodic(TIMER_PERIOD_MILLI);
		else call AMControl.start();
	}
	event void Timer0.fired(){
		counter++;
		call Leds.set(counter);
		
		if(!busy)	sendAM();	//send a AMPacket	
	}
	event void sendDone(message_t* msg, error_t error);
	
	event void AMSend.sendDone(message_t* msg, error_t error) {
		if (&pkt == msg){
				busy = FALSE;
			}
	}
	
	/*event message_t* Receive.receive(message_t* msg, void* payload, unit8_t len){
		if ( len == sizeof (BlinkToRadioMsg)) {
			BlinkToRadioMsg* btrpkt = (BlinkToRadioMsg*)payload;
			call Leds.set(btrpkt->counter);
		}
		return msg;
	}*/
}
	