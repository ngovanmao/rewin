README for MappingSensorsUsingRSSI

Author: Abdullah AYDEGER

**Description**:
![http://www.aydeger.com/logo.png](http://www.aydeger.com/logo.png)

This set of applications is used to create a mesh networks and record the all RSSI values between the all nodes. By using these RSSI values we estimated the distance between each pair of nodes and mapped the nodes in the body.

There are 3 kinds of applications were developed for this project as explained with detail below.

Program Flow

The trigger starts data transmission in the network, after first packet created in the network all the nodes, which received that packet, adjust their timer according to the arrived packet's owner ID and their own ID. There will be always TIMER\_PERIOD\_MILLI waiting after receiving packet
which is just before the current one. If there is less waiting time, nodes may not be able to catch up their turns. Each
transmission packet include RSSI\_MSG structure type which details are given in the below.

RSSI\_MSG
> nx\_uint8\_t ownerid;								//packet owner ID

> nx\_uint16\_t seq\_counter[TOTAL\_NUM\_OF\_NODES](TOTAL_NUM_OF_NODES.md); 	//counter series from all nodes in the network

> nx\_int8\_t rssi\_value[TOTAL\_NUM\_OF\_NODES](TOTAL_NUM_OF_NODES.md); 		//rssi values from all nodes in the network

TOTAL\_NUM\_OF\_NODES is defined in the BlinkToRadio.h file in Network-Trigger and Network-Nodes applications and should be
assigned in the beginning. It shows maximum probability of number of nodes in the network.

MAPPING-SENSORS-USING-RSSI has 3 applications:

1. Network-Trigger: The trigger will transmit first packet to let the other nodes transmit. Working phases of trigger node is explained by figure in below.

<img src='http://rewin.googlecode.com/svn/wiki/pics/Slayt3.PNG' width='500' height='300'>

2. Network-Tx/Rx-Node: Each node installed with this project firstly will wait a packet from trigger. After getting first packet each node will adjust its timer and will send packet in its own order. Working phases of Tx/Rx node is explained by figure in below.<br>
<br>
<img src='http://rewin.googlecode.com/svn/wiki/pics/Slayt2.PNG' width='500' height='300'>

3. Network-Rx-Node: Each node has been installed this code will receive all RSSI_MSG packets and will output the received packets by printf. Working phases of Rx node is explained by figure in below.<br>
<br>
<img src='http://rewin.googlecode.com/svn/wiki/pics/Slayt4.PNG' width='500' height='300'>

WARNING WHILE TESTING THIS PROJECT<br>
<br>
1. All nodes have to have unique and successive id numbers(from 0 to TOTAL_NUM_OF_NODES-1)to  for proper working.<br>
<br>
2. All the nodes must be turned on before the trigger node, which will be send the first packet. Otherwise transmission never starts.<br>
<br>
<br>
Note: These applications are originally derived from the BlinkToRadio example in TinyOS.