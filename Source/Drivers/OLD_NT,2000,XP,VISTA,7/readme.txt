These are the old Windows USB CDC drivers.

Starting with CCS C Compiler 5.013, the USB examples started using CCS's own VID.  The Windows drivers were then updated with the new VID/PID combinations.  Since the new drivers were sent to Microsoft WHQL to be put on Windows Update, those new drivers removed the old VID/PID combinations since they were random and not assigned to CCS.

Therefore if you need Windows drivers that use the old VID/PID combinations from the USB examples prior to 5.013, they can be found here.