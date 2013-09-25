#include <Timer.h>
#include "BlinkToRadio.h"
#include "printf.h"

configuration BlinkToRadioAppC{}

implementation{
	components MainC;
	components LedsC;
	components BlinkToRadioC as App;
	components new TimerMilliC() as Timer0;
	components PrintfC;
	components SerialStartC;
	components ActiveMessageC;
	components CC2420PacketC;
	components CC2420ControlC;	
	components new AMSenderC(AM_BLINKTORADIO);
	components new AMReceiverC(AM_BLINKTORADIO);
	App.Boot -> MainC;
	App.Leds -> LedsC;
	App.Timer0 -> Timer0;
	App.Packet -> AMSenderC;
	App.AMPacket -> AMSenderC;
	App.AMSend -> AMSenderC;
	App.AMControl -> ActiveMessageC;
	App.Receive -> AMReceiverC;
	App.CC2420Packet -> CC2420PacketC;	
	App.CC2420Config ->	CC2420ControlC;
	}
