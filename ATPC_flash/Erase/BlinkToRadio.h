 #ifndef BLINKTORADIO_H
 #define BLINKTORADIO_H
 
 enum {
   TIMER_PERIOD_MILLI = 250,
   AM_BLINKTORADIO = 6,
   DEVICE_DELAY = 30,
   ACK_MSG = 0xAA,
   ACK_NON_RECEIVED = -100,   //IF LAST ACK NOT RECEIVED, rssi_ack = 100
   MAX_FLASH_ADDR = 262143 //MAXIMUM ADDRESS OF FLASH WRITE

 };
 
 //nx means external type
 typedef nx_struct BlinkToRadioMsg {
   nx_uint8_t nodeid;
   nx_uint16_t seq_number_coord; //seq number for coordinator
   nx_uint16_t seq_number;  //seq number for device
   nx_uint8_t pow_val;    //power output level of this packet
   nx_uint16_t chan_0; //estimation of the channel
   nx_int8_t rssi_B;    //rssi of Beacon received of current session
   nx_int8_t rssi_A;    //rssi of ACK of last session
   nx_int8_t rssi_reception; 
   //  nx_uint8_t msg[20];
  } BlinkToRadioMsg;

  #endif
