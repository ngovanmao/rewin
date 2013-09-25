#include <Timer.h>
#include "BlinkToRadio.h"
#include "printf.h"
#include "StorageVolumes.h"

configuration BlinkToRadioAppC{}

implementation{
	components MainC;
	components LedsC;
	components BlinkToRadioC as App;
	components new TimerMilliC() as Timer0;
	components new TimerMilliC() as Timer1;

	components PrintfC;
	components SerialStartC;
	components ActiveMessageC;
	components CC2420PacketC;
	components CC2420ControlC;
	components new BlockStorageC(VOLUME_BLOCKTEST);
//	components new BlockStorageC(BLOCKTEST);

	components new AMSenderC(AM_BLINKTORADIO);
	components new AMReceiverC(AM_BLINKTORADIO);
//	components BlockWriterC;
//	components BlockReaderC;
	
	App.Boot -> MainC;
	App.Leds -> LedsC;
	App.Timer0 -> Timer0;
	App.Timer1 -> Timer1;
	App.Packet -> AMSenderC;
	App.AMPacket -> AMSenderC;
	App.AMSend -> AMSenderC;
	App.AMControl -> ActiveMessageC;
	App.Receive -> AMReceiverC;
	App.CC2420Config ->	CC2420ControlC;
	App.CC2420Packet -> CC2420PacketC;
//	App.BlockWrite -> BlockWriterC;
//	App.BlockRead -> BlockReaderC;
	App.BlockRead -> BlockStorageC.BlockRead;	
	App.BlockWrite -> BlockStorageC.BlockWrite;
	}
