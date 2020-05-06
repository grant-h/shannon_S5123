Line 173: IU_MODE_VALID_CONTEXT Valid For UMTS.
Line 179: AGB_MODE_VALID CONTEXT Valid For GSM.
Line 183: State = %d/Valid =%d /AgbLuFlag 0x%x
Line 187: Progress Local deactivation for NSAPI = %d
Line 334: Send Cnf to Gapi This is the Case we does not send PDP ACT REQ to Network (%d) 
Line 337: Rejecting GAPI's PDP Deactivation Req Due To Incorrect SM State
Line 342: Unknown Nsapi (%d) Given By GAPI in sm_DecodeSmRegPdpDeactivationReqMsg
Line 707: Wrong State.
Line 714: Incorrect TI (%x) sent by the Network, Message Ignored...... [24.008]-8.3.2
Line 911: SM Timed out. 
Line 980: All Instances Are Used Up (1); in sm_DecodeRabmSmDeactivationRspMsg
Line 995: Unknown Deactivation Cause in sm_DecodeRabmSmDeactivationRspMsg
Line 1021: Msg received in invalid state . Message Ignored
Line 1028: Unknown NSAPI Given By RABM ! in sm_DecodeRabmSmDeactivationRspMsg. Message Ignored
Line 1489: SM Timed out. 
Line 1553: All Instances Are Used Up (1); in sm_DecodeSnSmDeactivationRspMsg
Line 1587: Msg received in invalid state . Message Ignored
Line 1594: Unknown NSAPI Given By SNDCP ! in sm_DecodeSnSmDeactivationRspMsg
Line 1870: Using network cause to send GAPI (%d)...
Line 1876: Using GMM cause to send GAPI (%d)...
Line 1896: kny Flag  (%d) /State %d...
Line 1945:  SendDeactCnf->  %d /IsNormalDeactivation %d / No.PDP %d
Line 2190:  SMLocalDeactFlag->  %d
Line 2206:  Linked NSAPI->  %d
Line 2210: Protocol Config. Options -> ...
Line 2223: Sending GS18 - PDP Context End
Line 2224: GS18.dwContextId -> %d
Line 2225: GS18.wTermCode -> %d
Line 2226: GS18.ucInitiator -> %d
Line 2404:  Linked NSAPI->  %d
Line 2415: Sending GS18 - PDP Context End
Line 2416: GS18.dwContextId -> %d
Line 2417: GS18.wTermCode -> %d
Line 2418: GS18.ucInitiator -> %d
Line 2592: Collision Detected: MS & NEtwork both Requesting Deactivation. Both shall send Deactivation Acc Msg in sm_DecodeNetworkPdpDeactivationReqMsg. [24.008]-6.1.3.4.3 (b)
Line 2601: sm_CheckCauseIe err
Line 2615: Awaiting Deactivate Acc from the Network...
Line 2676: sm_CheckCauseIe err
Line 2753: Collision Detected: MS Trying to Modify QoS & Network Requesting Deactivation. MS shall send Deactivation Acc Msg in sm_DecodeNetworkPdpDeactivationReqMsg. 
Line 2768: sm_CheckCauseIe err
Line 2823: Rejecting Network's PDP Deactivation Req Due To Incorrect SM State
Line 2832: Unknown PdTi (%x)  in sm_DecodeNetworkPdpDeactivationReqMsg, Sending Status Msg
Line 2919: Tear Down Indicator -> %s
Line 2957: Deactivation Cause -> %s
