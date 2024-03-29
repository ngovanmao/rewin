README for ATPC_flash
Author: Fabio Di Franco 

Description:
The coordinator transmits a beacon frame at max power and each node  determines the actual TXpower based on the RSSI and transmits a packet back to the coordinator. The coordinator receiving the packet records the packet data in the flash and send an ACK at max power. 

Each packet contains these data:
   nx_uint8_t nodeid;
   nx_uint16_t seq_number_coord; //seq number for coordinator
   nx_uint16_t seq_number;  //seq number for device
   nx_uint8_t pow_val;    //power output level of this packet
   nx_uint16_t chan_0; //estimation of the channel
   nx_int8_t rssi_B;    //rssi of Beacon received of current session
   nx_int8_t rssi_A;    //rssi of ACK of last session

ATPC_flash has 3 applications:
1. Coordinator_Flash: The coordinator will transmit a beacon frame every 250ms with a progressive sequence number and then goes in receiving mode (i.e wait packets from the nodes). Each packet from the node will include the fields as above described and these data will be saved in the memory flash. After the reception of a node's packet, an ack will be sent (in this case btrpkt -> nodeid = ACK_MSG). 

2. Node_merged_Me_Xiao: Each node will transmit a packet after the reception of a beacon. Each node is configured to send only 3600 packets in total. To compare different power control algorithms the first 400 packets will be transmitted using the output power calculated by my algorithm; the second 400 packets using the algorithm developed by Xiao; the 3rd, 4th, 5th and 6th 400 packets respectively at 0dBm,-10dBm,-15dBm,-25dBm. 

3.Erase: This app will delete whatever is in the memory flash. The coordinator must be flashed with this code and afterwards, it can be flashed with Coordinator_Flash.

Practical info: The coordinator must be flashed with NodeId=0. The nodes must be flashed with progressive NodeId starting from 1.

Note: These applications are originally derived from the BlinkToRadio example in TinyOS.