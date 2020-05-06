Line 93: cc_CheckEmergenyNum
Line 94: Emergency Number!!!  -> %x%x
Line 116: cc_ProcessUsatUsatCcCallCtrlCfmMsg
Line 126: USAT (Call Control) - Rejected the call
Line 195: USAT Call Control request is success- No change in params
Line 222: Entering cc_DecodeCcSetupReqMsg....[24.008] - 5.2.1...
Line 237: cc_FlightMode is On!!
Line 255: Already call is in progess with this TID, Call Rejected in cc_DecodeCcSetupReqMsg !
Line 408: Invalid CallType 
Line 435: This is the First Call ....
Line 442: Discarding Saved MmSyncIndMsg
Line 453: AudioHoldOff()
Line 455: All Voice Calls are Held .....
Line 459: This is NOT a Multi Media Call .....
Line 463: This is a Multi Media Call .....
Line 470: Voice Calls are NOT Held...
Line 479: Call Accepted....
Line 494: New Allocated CallSessionNumber in cc_DecodeCcSetupReqMsg -> %d
Line 516: USAT Call control not enabled
Line 561: CalledPartyNumberLength -> %d
Line 562: Called Party Number is too long!!, Call Rejected in cc_DecodeCcSetupReqMsg !
Line 584: Call Rejected....
Line 601: Insufficient resource , Call Rejected in cc_DecodeCcSetupReqMsg !
Line 625: Rejecting User's Req in cc_DecodeCcSetupReqMsg ! RAT Change in progress !!
Line 669: Entering cc_DecodeCcBearerCapSetReqMsg function
Line 677: Handle CBST command
Line 685: Encode CBST success
Line 690: Encode CBST command fail
Line 699: Handle CTM command
Line 707: Invalid command received
Line 735: CBST Bearer Cap DataPresent  -> %s
Line 736: CBST Bearer Cap Length  -> %d
Line 737: CBST Bearer Cap Ptr  ->
Line 743: CBST Bearer Cap param are not set
Line 775: cc_PerformBearerService:CcCallType = %d
Line 783: CC RAT = %d
Line 798: pal_MemAlloc() failure
Line 810: CC Call type = CC_VOICE_CALL_TYPE or CC_EMERG_CALL_TYPE
Line 820: CC Call type = CC_VIDEO_CALL_TYPE
Line 840: CC Call type = CC_DATA_CALL_TYPE
Line 843: MO Call: Set Bearer Capabilities recieved through AT+CBST cmd
Line 851: MO Call: Set Default Bearer Capabilities
Line 870: Invalid call type received. So bearer capabilities IE is not filled
Line 884: Not able to retrieve Bearer Capability params
Line 895: Invalid Session
Line 918: CallType1 -> %s
Line 920: CallType2 -> %s
Line 923: Restriction Indicator -> %s
Line 926: Calling Party Sub Address ....->
Line 932: No Calling Party Sub Address Sent
Line 937: User To User Data ....->
Line 943: No User To User Data Sent
Line 946: Priority -> %d
Line 1010: Entering cc_DecodeMmCmrqIndMsg Indicating that RR Connection is Established....
Line 1014: TransactionId  -> %d
Line 1042: Message not expected in cc_DecodeMmCmrqIndMsg
Line 1050: CallSession %d is NOT Active,  in cc_DecodeMmCmrqIndMsg
Line 1056: No Session Found to contain the given TI in cc_DecodeMmCmrqIndMsg, Message Ignored.
Line 1077: Entering cc_DecodeMmEstCnfMsg Indicating that MM Connection is Established....
Line 1081: TransactionId -> %d
Line 1090: CC_RETRY_DELAY_TIMER stop timer
Line 1135: Message not expected in cc_DecodeMmEstCnfMsg
Line 1143: CallSession %d is NOT Active,  in cc_DecodeMmEstCnfMsg
Line 1149: No Session Found to contain the given TI in cc_DecodeMmEstCnfMsg, Message Ignored.
Line 1186: Entering cc_SendSetupReqMsg....
Line 1308: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 1372: Invalid Rat Mode selcted to extract Sup Codec List from Regis: %d
Line 1496: CugReqDataPresent   = %d in cc_SendSetupReqMsg
Line 1510: 
Line 1523: Fail to Encode the message and Call Rejected....
Line 1553: Unable to Allocate Memory to Send %s Message in cc_SendSetupReqMsg
Line 1662: Unable to Allocate Memory for FacilityForwardCugInfoPtr in cc_HandleCugData
Line 1667: [OSS]: Oss Encoding Failed
Line 1672: [OSS]: Oss Encoding Failed
Line 1702: Bearer1CapabilitiesLength  -> %d
Line 1704: Bearer1CapabilitiesPtr  -> 
Line 1711: Bearer1CapabilitiesLength  -> %d
Line 1722: SupportedCodecListLength  -> %d
Line 1724: SupportedCodecListPtr  -> 
Line 1733: SupportedCodecListLength  -> %d
Line 1738: CLIdPresentationDataPresent  -> %s
Line 1740: CallingPartySubAddressLength  -> %d
Line 1742: CallingPartySubAddressPtr  -> 
Line 1749: CLIdPresentationDataPresent  -> %s
Line 1754: CalledPartyNumberDataPresent  -> %s
Line 1756: CalledPartyNumberLength  -> %d
Line 1760: CalledPartyNumberPtr  -> 
Line 1765: CalledPartySubAddressLength  -> %d
Line 1769: CalledPartySubAddressPtr  -> 
Line 1780: CalledPartyNumberDataPresent  -> %s
Line 1785: EmlppReqDataPresent  -> %s
Line 1787: EmlppPriorityLevel  -> %d
Line 1792: EmlppReqDataPresent  -> %s
Line 1797: CugReqDataPresent  -> %s
Line 1799: SuppressPreferentialIndicator  -> %d
Line 1800: CugIndex1                      -> %d
Line 1801: CugIndex2                      -> %d
Line 1802: SuppressOaIndicator            -> %d
Line 1807: CugReqDataPresent  -> %s
Line 1810: RestrictionIndicator  -> %d
Line 1847: Entering cc_DecodeProgressIndMsg [24.008] - 5.2.1.4.2....
Line 1860: TransactionId -> %d
Line 1946: Message not expected in cc_DecodeProgressIndMsg
Line 1973: CallSession %d is NOT Active,  in cc_DecodeProgressIndMsg
Line 1979: No Session Found to contain the given TI in cc_DecodeProgressIndMsg, Message Ignored.
Line 2034: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcProgressIndMsg
Line 2045: Displaying Message Contents: %s
Line 2049: Progress Indicator Byte 0 -> 0x%02X
Line 2055: No Progress Indicator Sent
Line 2063: Unable to Allocate Memory to Send %s Message in cc_SendCcProgressIndMsg
Line 2108: Entering cc_DecodeCallProceedingIndMsg....[24.008]-5.2.1.3
Line 2110: TransactionId -> %d
Line 2188: Network Supports Multi Call -> %s
Line 2201: No Bearer 1 Capabilities in cc_DecodeCallProceedingIndMsg
Line 2217: No Bearer 2 Capabilities in cc_DecodeCallProceedingIndMsg
Line 2231: No Repeat Indicator Available in cc_DecodeCallProceedingIndMsg
Line 2254: [OSS]: Oss Decoding Failed
Line 2259: CUG Data Not Available in cc_DecodeCallProceedingIndMsg
Line 2280: No Priority Given in cc_DecodeCallProceedingIndMsg
Line 2305:  Ignoring cc_DecodeCallProceedingInd message received in CC_Disconnect_requested State: call will be released
Line 2313: Message not expected in cc_DecodeCallProceedingIndMsg
Line 2340: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeCallProceedingIndMsg
Line 2364: No Session Found to contain the given TI in cc_DecodeCallProceedingIndMsg, Message Ignored.
Line 2431: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcCallProcIndMsg
Line 2452: CUG Data Not Available in cc_SendCcCallProcIndMsg
Line 2472: WbAmrEnabled = %d
Line 2479: Unable to Allocate Memory to Send %s Message in cc_SendCcCallProcIndMsg
Line 2516: Entering cc_DecodeAlertIndMsg....[24.008]-5.2.1.5
Line 2518: TransactionId -> %d
Line 2599:  For Data Calls, CC does not need to inform VCG or RABM
Line 2641: Internal Alerting -> %s
Line 2680: Session State  is NOT valid for this message !! in cc_DecodeAlertIndMsg
Line 2699: Message not expected in cc_DecodeAlertIndMsg
Line 2726: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeAlertIndMsg
Line 2774: No Session Found to contain the given TI in cc_DecodeAlertIndMsg, Message Ignored.
Line 2819: Internal Alerting -> %s
Line 2849: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcCallProcIndMsg
Line 2865: Call Waiting Indication-> %s
Line 2874: CallForwardingStatus == %d
Line 2876: Call Divert Indication-> %s
Line 2883: Unable to Allocate Memory to Send %s Message in cc_SendCcAlertIndMsg
Line 2926: Entering cc_DecodeConnectIndMsg....[24.008]-5.2.1.6
Line 2928: TransactionId -> %d
Line 2944: Session State  is NOT valid for this message !! in cc_DecodeConnectIndMsg
Line 2993: MultiCallUsed -> TRUE
Line 2999: This is a Voice Call
Line 3008: VCG Cnf already received -> Accept Connect Ind Msg
Line 3013: Must Wait For VCG Cnf. This Msg is Saved Until then...
Line 3019: This is a Data Call
Line 3021: Sync Ind has arrived -> Accept Connect Ind Msg
Line 3027: In Multi Call, Every Call Must Have a Sync Ind. Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Line 3033: MultiCallUsed -> FALSE
Line 3037: This is a Voice Call
Line 3042: Either Sync Ind has arrived or this is a second voice call and VCG already activated. VCG CNF already received -> Accept Connect Ind Msg
Line 3047: GCF test USAT 27.22.4.27.2
Line 3052: Must Wait Until Sync Ind &/or VCG Cnf Arrives. This Msg is Saved Until then...
Line 3058: This is a Data Call
Line 3062: Either Sync Ind has arrived or this is a second call. For a single bearer, no more Sync Ind will arrive -> Accept Connect Ind Msg
Line 3067: Must Wait Until Sync Ind Arrives. This Msg is Saved Until then...
Line 3128:  For Data Calls, CC does not need to inform VCG or RABM
Line 3226: No Valid  Connected Sub Address in cc_DecodeConnectIndMsg
Line 3232: No Valid  Connected Sub Address in cc_DecodeConnectIndMsg
Line 3238: No Valid Connected Number in cc_DecodeConnectIndMsg
Line 3244: No Valid Connected Number in cc_DecodeConnectIndMsg
Line 3292: Message ignored in cc_DecodeConnectIndMsg
Line 3318: SessionStatus is NOT active for this CallSessionNumber !! in cc_DecodeConnectIndMsg
Line 3373: No Session Found to contain the given TI in cc_DecodeConnectIndMsg, Message Ignored.
Line 3404: [OSS]: Oss Decoding got faield
Line 3443: TransactionId -> %d
Line 3450: Internal Alerting -> %s
Line 3457: RabId -> 0x%02X
Line 3487: Unable to Allocate Memory for ProgressIndicator in  %s Message in cc_SendCcSetupCnfMsg
Line 3552: Error In cc_AllocateMemoryForSeparateBuffer for ConnectedSubAddressPtr in cc_SendCcSetupCnfMsg
Line 3564: Unable to Allocate Memory for ConnectedLineIdPresentation in  %s Message in cc_SendCcSetupCnfMsg
Line 3598: Unable to Allocate Memory to Send %s Message in cc_SendCcSetupCnfMsg
Line 3617: Entering cc_SendCcBearerCapSetRspMsg
Line 3629: BearerCommandType: %d
Line 3630: BearerType: %d
Line 3631: Result: %d
Line 3637: Unable to Allocate Memory to Send %s Message in cc_SendCcBearerCapSetRspMsg
Line 3670: Unable to Allocate Memory to Send %s Message in cc_SendConnAckReqMsg
Line 3692: Entering cc_DecodeCcModifyReqMsg....[24.008]-5.2.1.6
Line 3695: TransactionId -> %d
Line 3776: Unable to Allocate Memory to Send %s Message in cc_SendModifyReqMsg
Line 3809: Entering cc_DecodeModifyCompIndMsg Indicating that MM Connection is Established....
Line 3811: TransactionId -> %d
Line 3884: No Session Found to contain the given TI in cc_DecodeModifyCompIndMsg, Message Ignored.
Line 3914: Displaying Message Contents: %s
Line 3924: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyCnfIndMsg
Line 3958: Entering cc_DecodeModifyRejIndMsg Indicating that MM Connection is Established....
Line 3960: TransactionId -> %d
Line 3994: CauseIe not available in cc_DecodeModifyRejIndMsg
Line 4055: No Session Found to contain the given TI in cc_DecodeModifyRejIndMsg, Message Ignored.
Line 4101: Displaying Modify Rej Ind Message Contents: %s
Line 4115: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyRejIndMsg
Line 4148: Entering cc_DecodeModifyIndMsg Indicating that MM Connection is Established....
Line 4150: TransactionId -> %d
Line 4222: No Session Found to contain the given TI in cc_DecodeModifyIndMsg, Message Ignored.
Line 4254: Displaying Modify Ind Message Contents: %s
Line 4264: Unable to Allocate Memory to Send %s Message in cc_SendCcModifyIndMsg
Line 4288: Entering cc_DecodeCcModifyCompReqMsg....[24.008]-5.2.1.6
Line 4290: TransactionId -> %d
Line 4366: Unable to Allocate Memory to Send %s Message in cc_SendModifyCompReqMsg
Line 4405: Entering cc_DecodeCcModifyRejReqMsg....[24.008]-5.2.1.6
Line 4407: TransactionId -> %d
Line 4529: Unable to Allocate Memory to Send %s Message in cc_SendModifyRejReqMsg
Line 4551: Entering cc_DecodeCcNotifyReqMsg [24.008] - 5.2.1.4.2....
Line 4553: TransactionId -> %d
Line 4582: Notify lost in re-establish in cc_DecodeCcNotifyReqMsg
Line 4589: Message ignored in cc_DecodeCcNotifyReqMsg
Line 4598: No Session Found to contain the given TI in cc_DecodeCcNotifyReqMsg, Message Ignored.
Line 4685: cc_MapNsToCcCallState INVALID SRVCC NscallState =%d
Line 4712: Entering cc_DecodeCcSrvccHoCallSetupReqMsg
Line 4713: Number of Active Call Sessions =%d
Line 4725: Already call is in progess with this TID, Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Line 4745: Invalid CallType 
Line 4752: Call Accepted....
Line 4781: Call Rejected....
Line 4791: Insufficient resource , Call Rejected in cc_DecodeCcSrvccHoCallSetupReqMsg !
Line 4797: cc_SrvccCallCntxtSetupFinished ==%d
Line 4815: Entering cc_DecodeCcRetrieveSrvccHoCnfReqMsg
Line 4816: cc_SrvccCallCntxtSetupFinished ==%d,Number of Active Call Sessions =%d
Line 4829: cc_CheckMmSrvccHoCnfMsgSaveStatus is TRUE in cc_DecodeCcRetrieveSrvccHoCnfReqMsg !
Line 5062: Unable to Allocate Memory to Send %s Message in cc_SendNotifyReqMsg
Line 5102: Other Calls Already Acitve
Line 5106: User Requests Multi Call
Line 5110: Mobile Supports Multi Call
Line 5114: Network Supports Multi Call
Line 5118: Unable To Find an Available Stream Identifier
Line 5127: Network Does NOT Supports Multi Call
Line 5132: Mobile Does NOT Supports Multi Call
Line 5137: User Does NOT Request Multi Call
Line 5234: cc_GetSetupReqSend: cc_SetupReqSend[CcCurrentStackId] =0x%x
Line 5247: cc_SetSetupReqSend: SetupReqSend =0x%x
Line 5502: Emergency Call Category -> %s
Line 5573: Progress Indicator -> %s
Line 5624: NORMAL Initialisation of <MO Call Establishment>
Line 5639: GSM to UMTS Initialisation of <MO Call Establishment>
Line 5645: UMTS to GSM Initialisation of <MO Call Establishment>
Line 5653: Unknown Initialisation Type (%d) in cc_InitialiseMoCallEstablishment
