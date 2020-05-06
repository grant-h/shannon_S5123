Line 148: Received length value in Mode A parameter is %d
Line 168: Mode A is received: Number of BIts received is Out of Range by SS, ignoring DRB[%d] and Continuing with nxt DRB
Line 174: Mode A is received: Number of BIts received is not multiple of 8 DRB ID %d received, Value: %d
Line 196: Mode A is received: DRB ID %d received in LBSetup IE is not configured by SS, ignoring DRB and Continuing with nxt DRB
Line 201: Mode A is received: Scaling configured for DRB ID %d,Scaled UL SDU size %d 
Line 270: Mode B received: T Delay timer value changed from %d -> %d 
Line 292: T Delay Timer stopped and re-started in state %d  
Line 296: TDelay Timer cannot be stopped in state %d 
Line 311: TDelay Timer stopped in state %d 
Line 324: TDelay Timer cannot be stopped in state %d 
Line 333: Cannot Delete the T Delay timer in state %d;  
Line 347: Mode B received: T Delay timer got configured with value %d;buffer the received data till timer expiry
Line 359: Mode B received : T Delay Timer got created successfully
Line 366: pal_TmCreateMsgTimer did not return PAL_SUCCESS while creating T Delay Timer
Line 375: Mode B received :T Delay timer not configured; Timer value : 0;fwd the received data directly in UL
Line 501: IsEpsPresentInRelBuff(LBID:%d)) == TRUE: RBID:%d, EPSbearedID:%d, TempEPSBearedID:%d
Line 505: LBID:%d, RBID:%d, EPSbearerID:%d, DrbState of LB ModeB is set to be ENABLED in TLP_ACTIVE.
Line 537: MAX DRB's are already configured in Test Loop Mode, ignore the msg
Line 687: LTE_EMM_LB_DATA_REQ malloc error
Line 712: LTE_EMM_LB_DATA_REQ : MBMS_PACKET_COUNTER_RSP malloc error
Line 729: Posting the PKT CNT to EMM as case %d
Line 737: The Packet Counter which is send to EMM equals to %d
Line 852: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 870: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 888: LTE_EMM_LB_DATA_REQ : ss_complete malloc error
Line 902: Posting the message %d to DS_EMM
Line 906: Posting the message %d to EMM
Line 918: LTE_EMM_LB_DATA_REQ : Msg Sending error
Line 940: Tlp_SendMessageToLPP Malloc error
Line 956: Posting the message %d to LPP
Line 961: Tlp_SendMessageToLPP : MsgSendTo Fail
Line 988: Tlp_SendMessageToRRC Malloc error
Line 1001: Posting the message %d to RRC_DS
Line 1006: Posting the message %d to RRC
Line 1061: [ERROR] pal_Malloc Fail!
Line 1089: Send NRPDCP_LTETLP_CONFIG_SYNC_IND to NR L2
Line 1094: pal_MsgSendToNrL2 fail! rst(%d)
Line 1109: [ERROR] pal_Malloc Fail!
Line 1123: Send NRPDCP_LTETLP_CONFIG_MSG_IND to NR TMC. u32MsgType(%d) u8Data(%d)
Line 1128: pal_MsgSendToNrL2 fail! rst(%d)
Line 1157: Tlp_ProcActivateTestMode : Data is NULL
Line 1178: Received Invalid Mode Value %d in Activate Test Mode Message
Line 1192: Received valid Mode Value %d in Activate Test Mode Message
Line 1200: TLP Configured in Mode %d in Activate Test Mode Message
Line 1201: Posting the message LTE_TLP_ACTIVATE_TEST_MODE_COMPLETE to EMM
Line 1215: Received Invalid SI Value in Activate Test Mode Message
Line 1315: Tlp_ProcModeCPktCountReq : Data is NULL
Line 1321: TLP-MBSFN PCT - Processing MBSFN mode C packet counter request  Message
Line 1325: [ERROR] MODE-C is not active 
Line 1335: TLP-MBSFN PCT - Received Invalid SI Value in MBSFN mode C packet counter request  Message
Line 1366: Tlp_ProcDeActivateTestMode : Data is NULL
Line 1372: Resetting the TLP Context struct: Tlp_ResetTlp() called from De-Activate Test Mode Message
Line 1375: Posting the message LTE_TLP_DEACTIVATE_TEST_MODE_COMPLETE to EMM
Line 1384: Received Invalid SI Value in De-Activate Test Mode Message
Line 1464: Tlp_ProcOpenUeTestLoop : Data is NULL
Line 1470: Resetting the TLP Context struct: Tlp_ResetTlp() called from Open UE Test Loop Message
Line 1473: Posting the message LTE_TLP_OPEN_UE_TEST_LOOP_COMPLETE to EMM
Line 1481: Received Invalid SI Value in Open UE Test Loop Message
Line 1583: Case UNIDIRECTIONAL: Reconfig of DRB ID %d; DRB has got reconfigured from Bi-Directional to UNI-Directional. 
Line 1590: Case UNIDIRECTIONAL: Establishment of DRB ID %d;Ignore the Drb Id,  going to process next DRb. 
Line 1616: Case BIDIRECTIONAL: Establishment of DRB ID %d, EPS ID: %d;
Line 1624: Case BIDIRECTIONAL: Reconfig of DRB ID %d; No need to update, going to process next DRb. 
Line 1636: Case BIDIRECTIONAL: DRB ID %d requested to release, Not found in LB array; Ignoring and going to process next DRB
Line 1644: Case BIDIRECTIONAL: DRB ID %d requested to release,found in LB array; Going to release the DRB
Line 1653: Invalid Case: Received Invalid ReconfigType Value in LTE_RRC_LB_DRB_IND Message
Line 1662: ALL DRB's in LB functional Mode got released
Line 1706: Resetting the TLP Context struct: Tlp_ResetTlp() called from RRC DRB IND Message
Line 1728: There exist EPS bearer in established state, So not resetting the Context Struct.
Line 1735: Total Num of DRB's configured: %d
Line 1737: Num DRB's in LB Mode: %d, Num DRB's Not in LB Mode %d
Line 1784: Loop Back Functon already Active, ignore the msg 
Line 1815: This is an error condition; TLP should be in INIT state 
Line 1822: Loop Back Functon already Active, ignore the msg 
Line 1827: Loop Back Functon already Active, ignore the msg 
Line 1859: Tlp_ProcCloseUeTestLoop : Data is NULL
Line 1879: Mode A is received: Bi-dir DRB est. going to configure Mode A params received
Line 1891: Mode A got configured: LB setup list IE is not included;i.e. No scaling configured
Line 1896: Mode A is received: LB setup list IE included 
Line 1901: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 1908: Mode A is received: Invalid total Msg Length; Length IE value %d
Line 1916: Mode A is received: No bi-dir DRB est. ignore the msg
Line 1929: Mode B is received: Going to Check whether atleast one EPS bearer is in established state or not
Line 1936: Mode B is received: Going to configure Mode B params received
Line 1940: Posting the message LTE_TLP_CLOSE_UE_TEST_LOOP_COMPLETE to EMM
Line 1947: Mode B is received: No bi-dir EPS Bearer est. ignore the msg
Line 2080: Received Mode value(%d) in Close Ue Test Loop != Mode value received in Activate Test Loop Message
Line 2088: Received Invalid SI Value in Close UE Test Loop Message
Line 2183: Tlp_ProcResetUePositioingStoredInfo : Data is NULL
Line 2187: Tlp_ProcResetUePositioingStoredInfo in state %d
Line 2188: PI_SI %x, PosTech %x
Line 2208: Received Invalid SI Value inReset UE Positioning Stored Information message 
Line 2246: Tlp_ProcUpdateUeLocationInfo : Data is NULL
Line 2250: Tlp_ProcUpdateUeLocationInfo in state %d
Line 2262: Received Invalid SI Value inReset Tlp_ProcUpdateUeLocationInfo message 
Line 2327: [ERROR] Tlp_ProcActivateBeamLock : Data is NULL
Line 2336: [ERROR] Received Invalid SI Value
Line 2340: [ERROR] UBF is already running!
Line 2344: [ERROR] not support FrType(%d)!
Line 2350: Posting the message LTE_TLP_ACTIVATE_BEAMLOCK_COMPLETE to EMM
Line 2372: [ERROR] Tlp_ProcDeActivateBeamLock : Data is NULL
Line 2381: [ERROR] Received Invalid SI Value
Line 2385: [ERROR] UBF is already off!
Line 2391: Posting the message LTE_TLP_DEACTIVATE_BEAMLOCK_COMPLETE to EMM
Line 2413: Posting the message LTE_TLP_DEACTIVATE_BEAMLOCK_COMPLETE to EMM
Line 2420: UBF is not running. Ignore LTE_EMM_UBF_FORCE_UNLOCK_IND.
