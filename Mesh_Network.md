# Full Mesh Network #

This set of applications is used to create a mesh networks and record the RSSI values between all the nodes. By using these RSSI values we estimated the distance between each pair of nodes and mapped the nodes in the body.

There are 2 applications were developed for this project:

> - Node: it will receive all the transmission from the other nodes and

\item the device ID of the transmitting device
\item the monotonic increasing sequence number associated with that  device ID
\item the last sequence number received by the other on-body devices with NodeID
\item the last RSSI received from from each device id

# Program Flow #

The trigger starts data transmission in the network.
All the other nodes will wait the trigger transmission to start their own transmission.
CSMA/CA was disabled in Tinyos changing CC2420CsmaP code and setting the backoff to 0 (setInitialBackoff =0).



## Order of transmission ##
1. Trigger Node ID=1
2. Node ID=2 will transmit immediately after completely the reception of Node ID =1
3. Node ID=3 will transmit after TIMER\_PERIOD\_MILLI Node ID 1 reception or immediately after the reception of Node 2 is complete.
4. Node ID=4 will transmit after 2xTIMER\_PERIOD\_MILLI that Node ID 1 reception


After first packet created in the network all the nodes, which received that packet, adjust their timer according to the arrived packet's owner ID and their own ID. There will be always TIMER\_PERIOD\_MILLI waiting after receiving packet which is just before the current one. If there is less waiting time, nodes may not be able to catch up their turns. Each transmission packet include RSSI\_MSG structure type which details are given in the below.


# Details #

Add your content here.  Format your content with:
  * Text in **bold** or _italic_
  * Headings, paragraphs, and lists
  * Automatic links to other wiki pages