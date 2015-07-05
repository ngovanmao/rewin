# Introduction #

I propose a transmit power control scheme suitable for IEEE 802.15.6 narrowband scheduled access networks, in which the transmission power is modulated frame by frame according to a run-time estimation of the channel propagation conditions. The idea is to estimate the channel link based on the signal power received from the hub, and adding an opportunistic fading margin built on the basis of power fluctuations. The approach allows tracking the highly variable propagation conditions due the body mobility and the presence of the sensors close to the the human body skin.


# Implementation Details #

The proposed ATPC for IEEE~802.15.6 scheduled access networks consists of tree steps:

  1. the adaptive channel gain predictor C(n) is computed based on the historical RSSIs received from the devices;
  1. the fade margin estimator mu(n) is determined based on the channel stability;
  1. the instantaneous transmit output power TX\_Power(n) is calculated as TX\_Power(n)=C(n)+mu(n)-sensitivity

where sensitivity is the nominal sensitivity value defined by the radio used.


We assume that the communications between the hub and each device happen during an up-link scheduled access communication. At the beginning of the superframe, the hub transmits beacon frames at maximum power. Then each device transmits the data frame in the assigned scheduled allocation with transmit power TX\_Power(n) computed by the proposed ATPC. Following the successful reception of the data frame, the hub sent an acknowledgement at maximum power, considering that the hub is not energy constrained as the devices.