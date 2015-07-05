# Introduction #

It describes the applications created for testing the [ATPC](ATPC.md) algorithm in TinyOS 2.x It is designed and tested for Micaz boards.


# Description #

The coordinator transmits a beacon frame at max power and each node determines the actual TXpower based on the RSSI and transmits a packet back to the coordinator. The coordinator receiving the packet records the packet data in the flash memory and sends an ACK at max power.

Each packet contains these data:
  1. nx\_uint8\_t nodeid;
  1. nx\_uint16\_t seq\_number\_coord; //seq number for coordinator
  1. nx\_uint16\_t seq\_number; //seq number for device
  1. nx\_uint8\_t pow\_val; //power output level of this packet
  1. nx\_uint16\_t chan\_0; //estimation of the channel
  1. nx\_int8\_t rssi\_B; //rssi of Beacon received of current session
  1. nx\_int8\_t rssi\_A; //rssi of ACK of last session

ATPC\_flash has 3 applications:

1. Coordinator\_Flash: The coordinator will transmit a beacon frame every 250ms with a progressive sequence number and then goes in receiving mode (i.e wait packets from the nodes). Each packet from the node will include the fields as above described and these data will be saved in the memory flash. After the reception of a node's packet, an ack will be sent (in this case btrpkt -> nodeid = ACK\_MSG).

2. `Node_merged_Me_Xiao`: Each node will transmit a packet after the reception of a beacon. Each node is configured to send only 3600 packets in total. To compare different power control algorithms, the first 400 packets will be transmitted using the output power calculated by [my algorithm](ATPC.md); the second 400 packets using the algorithm developed by [Xiao](http://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=4740884&isnumber=4740877); the 3rd, 4th, 5th and 6th 400 packets respectively at 0dBm, -10dBm, -15dBm and -25dBm.

3.Erase: This app will delete whatever is in the memory flash. The coordinator must be flashed with this code and afterwards, it can be flashed with Coordinator\_Flash.

Practical info: The coordinator must be flashed with NodeId=0. The nodes must be flashed with progressive NodeId starting from 1.

Note: These applications are originally derived from the BlinkToRadio example in TinyOS.