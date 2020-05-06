Line 145: Entering cc_DecodeSetupIndMsg....[24.008] - 5.2.2...
Line 181: TransactionId -> %d
Line 190: MT call released because CS call is blocked
Line 202: MT call released with cause User busy. Reason: CSVT call is in progress
Line 210: MT call released with cause User busy. Reason: cc_MtCallBlockStatus(%d)
Line 224: Discarding Saved MmSyncIndMsg
Line 259: MT VT call released with cause User busy. Reason: CS call is in progress
Line 268: MT call released with cause User busy. Reason: CS call is in progress
Line 292: 2nd MT call is disconnected with cause User busy. Reason: Call waiting is disabled in AP IMS
Line 305: Terminal Based Call Waiting Enabled is %d
Line 319: MT call released with cause User busy. Reason: MO call establishment is in progress
Line 327: Release previous MO call with cause Normal Clearing. Reason: MT call establishment is in progress and still MM connection is not established for MO call
Line 366: Accept MT call, Call Session Number -> %d
Line 375: Ti -> %d
Line 377: cc_CsvtCallSupport = %d, GapiData.CallType1 = %d
Line 383: Video Call is Allowed
Line 423: No Bearer 2 Capabilities in cc_DecodeSetupIndMsg
Line 448: Low Layer Compatibility 1->
Line 454: No Low Layer Compatibility 1 in cc_DecodeSetupIndMsg
Line 465: Low Layer Compatibility 2->
Line 471: No Low Layer Compatibility 2 in cc_DecodeSetupIndMsg
Line 482: High Layer Compatibility 1->
Line 488: No High Layer Compatibility 1 in cc_DecodeSetupIndMsg
Line 499: High Layer Compatibility 2->
Line 505: No High Layer Compatibility 2 in cc_DecodeSetupIndMsg
Line 533: Signal Ind Present -> %s
Line 549: Network Supports Multi Calll -> %s
Line 560: Calling Party Number ....->
Line 572: Calling Party Sub Address ....->
Line 581: No Valid Calling Party Sub address Given in cc_DecodeSetupIndMsg
Line 586: No Valid Calling Party Number in cc_DecodeSetupIndMsg
Line 602: Called Party Number ....->
Line 610: No Valid Called Party Number in cc_DecodeSetupIndMsg
Line 627: Called Party Sub Address ....->
Line 636: No Valid Called Party Sub address Given in cc_DecodeSetupIndMsg
Line 651: Cause of No CLI -> %d
Line 669: No Valid Facility Message sent in cc_DecodeSetupIndMsg
Line 694: Number PLUS recieved from NW
Line 700: Redirecting Party Number ....->
Line 712: Redirecting Party Sub Address ....->
Line 721: No Valid Redirecting Party Sub Address Given in cc_SendCcSetupIndMsg
Line 731: No Valid Redirecting Party Number In cc_DecodeSetupIndMsg
Line 748: No Priority Given in cc_DecodeSetupIndMsg
Line 759: Progress Indicator ....->
Line 768: No Progress Indicator Given in cc_DecodeSetupIndMsg
Line 782: Alerting Pattern -> %d
Line 910: Insufficient resource , Aborting Operations in cc_DecodeSetupIndMsg !
Line 935: TransactionId already in use !
Line 941: Invalid TransactionId Flag received from Network !
Line 965: Unable to Allocate Memory to Send %s Message in cc_SendCcCallConfirmRspMsg
Line 978: Entering cc_DecodeCallConfirmReqMsg....
Line 1014: Wrong State in cc_DecodeCallConfirmReqMsg !!!.
Line 1022: No Session is Assigned  in cc_DecodeCallConfirmReqMsg, Message Ignored.
Line 1028: No Session Found to contain the given TI in cc_DecodeCallConfirmReqMsg, Message Ignored.
Line 1051: Unable to Allocate Memory to Send %s Message in cc_SendCallListUpdateMsg
Line 1111: Memory Allocation Failed
Line 1119: Facility : LoopCount %d CurrentStartPos %d CurrLen %d
Line 1139: Facility : SS Code = %d, SS Notification = %d, CUG ind = %d, CNAP = %d
Line 1226: [OSS]: Invalid SscodeIE received
Line 1244: SS notification (0x%02X) and CallForwardingIndication (0x%02X) in cc_HandleFacilityIEInSetupInd
Line 1246: [CNAP]%d 
Line 1261: Memory Free : LoopCount %d
Line 1302: Entering cc_CheckBearerCompatibility function
Line 1315: pal_MemAlloc() failure
Line 1342: Invalid RAT Mode
Line 1345: CcRatMode = %d
Line 1352: Received InfoTransferCapabilty = %d
Line 1363: Updated InfoTransferCapabilty = %d
Line 1418: cc_CheckBearerCompatibility: Bearer capability 1 is not filled
Line 1505: WbAmrEnabled = %d
Line 1566: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1575: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1580: No Valid Calling Party Number in cc_SendCcSetupIndMsg
Line 1619: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1624: CalledPartyNumber is absent!!
Line 1655: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1703: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1735: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1766: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1784: CUG Data Not Available in cc_SendCcSetupIndMsg
Line 1820: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcSetupIndMsg
Line 1891: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupIndMsg
Line 1937: cc_PerformBearerNegotiation
Line 1942: Unable to Allocate Memory
Line 2000: RetValue = %d
Line 2004: Received Null Bearer cap1 params
Line 2016: BC Reading Failed
Line 2081: Bearer ID is negative
Line 2090:  pal_MemAlloc() failure
Line 2101: Bearer Capability Error
Line 2112: Bearer ID is negative
Line 2119: BC1 Length -> %d
Line 2123: Session Not assigned
Line 2266: Displaying Message Contents: %s
Line 2305: Bearer Capability 1 -->
Line 2321: Bearer Capability 2 -->
Line 2395: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 2408: Suported Codec List Not Available
Line 2416: Network Does Not Support Multi Call
Line 2449: Voice Call Already Present
Line 2523: Unable to Allocate Memory to Send %s Message in cc_SendCallConfReqMsg
Line 2546: Session not assigned
Line 2588: Entering cc_DecodeCcRejReqMsg, GAPI Rejecting the MT Call......
Line 2602: TransactionId  -> %d
Line 2692: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 2725: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 2773: Message not expected OR Ignored in cc_DecodeCcRejReqMsg
Line 2782: CallSession %d is NOT Active in cc_DecodeCcRejReqMsg
Line 2788: No Session Found to contain the given TI in cc_DecodeCcRejReqMsg, Message Ignored.
Line 2813: Entering cc_SendAlertReqMsg 
Line 2815: TransactionId  -> %d
Line 2841: Unable to Allocate Memory to Send %s Message in cc_SendAlertReqMsg
Line 2855: Message not expected OR Ignored in cc_SendAlertReqMsg
Line 2864: Session Not Assigned in cc_SendAlertReqMsg, Message Ignored
Line 2890: Entering cc_DecodeCcConnectReqMsg....
Line 2898: TransactionId  -> %d
Line 2982: RatMode: %d, callType1: %d 
Line 2989: Determining VCG action for Early User Connection
Line 3040: CONN_CNF for CSVT
Line 3047: Early User Connection invalid for non voice calls
Line 3067: Message not expected OR Ignored in cc_DecodeCcConnectReqMsg
Line 3076: CallSession %d is NOT Active in cc_DecodeCcConnectReqMsg
Line 3082: No Session Found to contain the given TI in cc_DecodeCcConnectReqMsg, Message Ignored.
Line 3158: CugReqDataPresent   = %d in cc_SendConnectReqMsg
Line 3170: Displaying Message Contents: %s
Line 3179: Unable to Allocate Memory to Send %s Message in cc_SendConnectReqMsg
Line 3205: Entering cc_DecodeConnAckIndMsg....
Line 3223: TransactionId  -> %d
Line 3276: VCG already activated
Line 3281: VCG need to activate for Voice call only
Line 3335: Connect_Ack_Ind received in unexpected State %d
Line 3350: CallSession %d is NOT Active in cc_DecodeConnAckIndMsg
Line 3356: No Session Found to contain the given TI in cc_DecodeConnAckIndMsg, Message Ignored.
Line 3387: Displaying Message Contents: %s
Line 3388: Ti     -> %d
Line 3389: RabId  -> 0x%02X
Line 3396: Unable to Allocate Memory to Send %s Message in cc_SendCcConnectCnfMsg
Line 3462: Network Transfer Capability Before -> %d
Line 3472: Updated Network Transfer Capability to -> %d
Line 3474: Network Transfer Capability After -> %d
Line 3508: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_create_bearer
Line 3518: cc_GetNsCallTypefromNtwkCallType(): bc_put_bearer, BcStatus -> %d
Line 3524: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
Line 3542: cc_GetNsCallTypefromNtwkCallType(): Cannot bc_get_bearer_element
Line 3600: NORMAL Initialisation of <MT Call Establishment>
Line 3609: GSM to UMTS Initialisation of <MT Call Establishment>
Line 3616: UMTS to GSM Initialisation of <MT Call Establishment>
Line 3625: Unknown Initialisation Type (%d) in cc_InitialiseMtCallEstablishment
