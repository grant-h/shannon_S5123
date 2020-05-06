Line 94: Entering cc_DecodeCcDisconnectReqMsg....[24.008]-5.4.3
Line 111: TransactionId -> %d
Line 114: User triggers disconnection. CallDropType should be reset(old value Type=%d, Cause=%d
Line 371: Disc Req  Received in CC_RELEASE_REQUESTED...!!!
Line 378: Disc Req  Received in CC_DISCON_REQUESTED...!!!
Line 386: Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
Line 396: CallSession %d is NOT Active in cc_DecodeCcDisconnectReqMsg. Response to Upper layers for state Sync.
Line 405: DataPresent (Must be TRUE) -> %s
Line 411: No Session Found to contain the given TI in cc_DecodeCcDisconnectReqMsg, Response to upper layer for state Sync.
Line 417: Dummy CallSessionNumber in cc_DecodeCcDisconnectReqMsg -> %d
Line 427: Message not expectecd in cc_DecodeCcDisconnectReqMsg. Send Response to upper layers for state Sync
Line 479: Unable to Allocate Memory to Send %s Message in cc_SendDisconnectReqMsg
Line 530: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
Line 535: [OSS]: Oss Encoding Failed
Line 540: [OSS]: Oss Encoding Failed
Line 575: Entering cc_DecodeReleaseIndMsg....[24.008]-5.4.3
Line 591: TransactionId -> %d
Line 607: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 616: CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
Line 620: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 667: FacilityIe not available in cc_DecodeReleaseIndMsg
Line 674: [OSS]: MPTY active in cc_DecodeReleaseIndMsg
Line 703: Don't Release VCG: Number of call sessions = %d
Line 737: Retrying call establishment
Line 755: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 756: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 832: Ect not Active in cc_DecodeReleaseIndMsg
Line 837: Releasing Data Call Type in cc_DecodeReleaseIndMsg
Line 861: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 889: Detected a Collision. Network releasing a Call at the same time as User in cc_DecodeReleaseIndMsg
Line 918: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 951: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeReleaseIndMsg
Line 970: No Session Found to contain the given TI in cc_DecodeReleaseIndMsg, send Rel_comp_req to the network.
Line 991: No Session Found to contain the given TI in cc_DecodeReleaseIndMsg, Message Ignored.
Line 1084: Unable to Allocate Memory to Send %s Message in cc_SendReleaseCompleteReqMsg
Line 1114: Unable to Find CallSession %d in cc_SendCcReleaseIndMsg
Line 1123: 2nd release_ind for session %d is discared in cc_SendCcReleaseIndMsg
Line 1148: This call is rejected so stop retry timer if it is running. 
Line 1173: Configure CallDrop. Saved: Type=%d, Cause=%d, Recv: Type=%d, Cause=%d
Line 1176: REESTABLISHMENT fail=%d
Line 1235: Unable to Allocate Memory for CalledPartyNumberPtr in %s Message in cc_SendCcReleaseIndMsg
Line 1260: Unable to Allocate Memory for CalledPartySubAddPtr in %s Message in cc_SendCcReleaseIndMsg
Line 1343: Displaying Message Contents: %s
Line 1347: Cause.DataPresent  -> %s
Line 1355: CcbsRsp.DataPresent  -> %s
Line 1356: CcbsRsp.CcbsIndex                -> %d
Line 1357: CcbsRsp.Result                   -> %d
Line 1358: CcbsRsp.ErrorCode                -> %d
Line 1359: CcbsRsp.BasicServiceCode         -> %d
Line 1363: CcbsRsp.CalledPartyNumberLength  -> %d
Line 1364: CcbsRsp.CalledPartyNumberPtr  -> 
Line 1369: CcbsRsp.CalledPartyNumberLength  -> %d
Line 1375: CcbsRsp.DataPresent  -> %s
Line 1378: CallBarringInd.DataPresent -> %s
Line 1389: Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Line 1439: Entering cc_DecodeDisconnectIndMsg....[24.008]-5.4.3
Line 1469: TransactionId -> %d
Line 1492: ERROR: CauseIePtrLen (%d)is greater than CC_CAUSE_LEN
Line 1514: MO call establishment fail because of Network Issue: UE will try Redial without notifying to User
Line 1529: MO call establishment fail because of Network Issue: UE will try Redial without notifying to User
Line 1555: ProgressIndicatorIe not available in cc_DecodeDisconnectIndMsg
Line 1574: CcbsActionsIe not available in cc_DecodeDisconnectIndMsg
Line 1596: [OSS]:  OSS Decodign Failed
Line 1601: FacilityIe not available in cc_DecodeDisconnectIndMsg
Line 1608: [OSS]: MPTY active in cc_DecodeDisconnectIndMsg
Line 1638: Reset MPTY state session No.%d State %d
Line 1668: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 1677: Preparing for Redialing
Line 1846: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeDisconnectIndMsg
Line 1864: CauseIe not available in cc_DecodeDisconnectIndMsg
Line 1884: No Session Found to contain the given TI in cc_DecodeDisconnectIndMsg send Release Complete.
Line 2000: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_SendSetupReqMsg
Line 2005: [OSS]: Failed to encode Facility IE message
Line 2010: [OSS]: Failed to encode Facility IE message
Line 2034: Unable to Allocate Memory to Send %s Message in cc_SendReleaseReqMsg
Line 2064: Entering cc_DecodeCcRelReqMsg [24.008]-5.4.4.2.2.1 
Line 2084: TransactionId -> %d
Line 2262: CC_RELEASE_REQUESTED: Message ignored in cc_DecodeCcRelReqMsg
Line 2268: Message ignored in cc_DecodeCcRelReqMsg
Line 2275: CallSession %d is NOT Active in cc_DecodeCcRelReqMsg
Line 2281: No Session Found to contain the given TI in cc_DecodeCcRelReqMsg, Message Ignored.
Line 2329: Entering cc_DecodeRelCompleteIndMsg
Line 2349: TransactionId -> %d
Line 2382: Memory Allocation Failed
Line 2392: CauseIe not available in cc_DecodeRelCompleteIndMsg, Fetched from Disconnect_Ind message
Line 2453: [OSS]: Oss Decoding got Failed
Line 2459: FacilityIe not available in cc_DecodeRelCompleteIndMsg
Line 2466: [OSS]: MPTY active in cc_DecodeRelCompleteIndMsg
Line 2483: Ignoring cc_DecodeRelCompleteIndMsg received in CC_MM_CON_PEND_WAIT_MM_CMRQ or CC_MM_CONNECTION_PENDING state
Line 2533: Ect not Active in cc_DecodeRelCompleteIndMsg
Line 2538: Releasing Data Call Type in cc_DecodeRelCompleteIndMsg
Line 2555: Retrying call establishment
Line 2573: Performing normal call clearing, and Auto Re-Dial may be aborted 
Line 2574: due to either AP triggered Call clearing or NW cause may not be matched to Auto redial cause list or Num of auto-redial attempts >1
Line 2583: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2608: DecodeRelCompleteIndMsg in CallState : %s
Line 2630: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2648: CallSession %d is NOT Active, in cc_DecodeRelCompleteIndMsg
Line 2654: No Session Found to contain the given TI in cc_DecodeRelCompleteIndMsg, Message Ignored.
Line 2711: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcDisconnectIndMsg
Line 2848: Displaying Message Contents: %s
Line 2854: Cause.DataPresent  -> %s
Line 2856: Cause.CallDropCause  -> %s
Line 2858: Cause.CallDropType  -> %d
Line 2865: CallBarringInd.DataPresent -> %s
Line 2872: CcbsPossibleInd.DataPresent -> %s
Line 2882: Unable to Allocate Memory to Send %s Message in cc_SendCcDisconnectIndMsg
Line 2923: This call is rejected so stop retry timer if it is running. 
Line 2959: Displaying Message Contents: %s
Line 2964: Cause.DataPresent  -> %s
Line 2976: Unable to Allocate Memory to Send %s Message in cc_SendCcRejectIndMsg
Line 3061: CC Cause Location -> %s
Line 3246: CC Cause  -> %s  0x%x
Line 3341: CC Cause Diagnostics -> %s
Line 3357: NORMAL Initialisation of <Call Clear Management>
Line 3363: GSM to UMTS Initialisation of <Call Clear Management>
Line 3369: UMTS to GSM Initialisation of <Call Clear Management>
Line 3377: Unknown Initialisation Type (%d) in cc_InitialiseCallClear
Line 3428: Unable to Allocate Memory to Send %s Message in cc_SendCcReleaseIndMsg
Line 3466: Function - cc_DecodeCcStopNetworkReq  Active call clearing as a result of Flight mode ON
Line 3511: New CallSessionNumber %d
Line 3525: [OSS]: MPTY active in cc_DecodeCcStopNetworkReq
Line 3542: StopNetworkReq received in CC_NULL state after SETUP REQ is received, sending REL_IND to upper layers
Line 3548: StopNetworkReq received in CC_NULL state
Line 3572:  STOP Network due to SIM error or Power down
Line 3603: STOP Network due to SIM error or Power down
Line 3617: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 3629: Message not expectecd or ignored in cc_DecodeCcStopNetworkReq
Line 3637: CallSession %d is NOT Active,  in cc_DecodeCcStopNetworkReq
Line 3645: Rejecting User's Call Clear Req in cc_DecodeCcStopNetworkReq ! RAT Change in progress !!
