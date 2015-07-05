# BAN Characterization based on Mesh Network measurements #

The wireless on-body channel experiences significant temporal variation due to body movements and the use of multi hops is necessary if the transmit output power is limited for energy efficiency and safety issue.
In source I provided the RSSI values of the 10 sensors who forms a mesh network. The on-body channel measurements were carried out in time domain.

The test setup consists of ten Micaz devices; seven devices are placed on the body and three devices around the body (called off-body in the remainder of the paper) .
The seven on-body devices broadcasts **a frame every 8.5ms at max output power (0~dBm) in a round-robin manner. They form a full-mesh network.** The other three devices around the body will only receive the frame sent by each on-body device and store each received data frame and the associated Received Signal Strength Indicator (RSSI) for subsequent analysis.

When the on-body device does not transmit, it goes in listen mode and records the sequential number and the Received Signal Strength Indicator (RSSI)  associated with the node.

Each frame sent by each on-body device includes:

  * the device ID of the transmitting device
  * the monotonic increasing sequence number associated with that transmitting device ID
  * the last sequence number received by the other on-body transmitting devices
  * the last RSSI received from from each device id


The experimental evaluation were done in the new Medical Body Area Networks band that it is recently released by the Federal Communications Commission with a centre frequency of 2390~MHz.
The seven on-body devices were placed on:
  * left ankle~(1)
  * right arm~(2)
  * left wrist~(3)
  * waist~(4)
  * right ankle~(5)
  * low centred back~(6)
  * high centred back~(7).

The on-body positions represent suitable locations for healthcare monitoring sensors e.g. motion sensor in (1), blood pressure in (2), SpO\_2 in (3), fall detector in (4) and~(5), EMG in (6) or (7).

The off-body devices were placed on the tables located near the wall of a office building room (6mx4mx2.3m).

<img src='http://rewin.googlecode.com/svn/wiki/pics/Sensor_locations.png'>

The variable CIJ_w contains a matrix with 7x10x56183 elements.<br>
7 are the transmitters and 10 the receiving nodes.<br>
The 7 on-body nodes in my applications both transmit and receives in round robin manner, instead the off-body nodes only listens.<br>
56183 is the number of time instant which were measured. The resolution is 60ms. At each instant you have a characterization of the BAN propation at that instant in the BAN mesh network.<br>
The total duration of this experiments is 56183x60ms= 56minutes.<br>
<br>
<br>
<b>DOWNLOAD THE ZIP FILE WITH THE RSSI VALUES FOR EACH NODE IN MATLAB WORKSPACE FORMAT AT <a href='http://code.google.com/p/rewin/source/browse/trunk/Results/10nodes_60ms.zip'>http://code.google.com/p/rewin/source/browse/trunk/Results/10nodes_60ms.zip</a>. You can freely use them, but please acknowledge the source.</b>