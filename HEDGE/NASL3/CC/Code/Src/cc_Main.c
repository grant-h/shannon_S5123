Line 216: [OSS]: Attempting to Read SsInvokeId Using Invalid CallSessionNumber(%d) in SsInvokeId
Line 238: [OSS]: Attempting to Read SsLocalCode Using Invalid CallSessionNumber(%d) in cc_SetSsLocalCode
Line 401: ------------------------- CC TASK ----------------------------
Line 429: [OSS]: Oss Init Success
Line 433: [OSS]: Oss Init Failed
Line 441: ------------------------- CC TASK ----------------------------
Line 464: pal_MsgReceiveMbx Retruned Un-Supported Class - %d
Line 472: pal_MsgReceiveMbx Retruned %d instead of PAL_SUCCESS
Line 529: cc_UpdStackId :CcCurrentStackId: %d
Line 568: cc_ParseMsg aborted - cc_PtrMsgRec is NULL
Line 580: cc_ParseMsg - Msg received before CC_INIT_REQ message
Line 610: cc_ParseMsg in Unknown Msg Received :MsgGroup = 0x%x, MsgNum = 0x%x
Line 619: cc_ParseMsg in Unknown group : 0x%x
Line 631: [StackNo] %d
Line 636: cc_ParseMsg - short - cc_Header.Length = %i < cc_PtrDscMsgRec->BodySize = %i
Line 643: cc_ParseMsg - cc_PtrBodyRec->CcVariable.Length = %d
Line 650: %s
Line 661: PRIVACY! MT message : SETUP
Line 668: PRIVACY! MT message : CC-ESTABLISHMENT
Line 676: PRIVACY! MT message : START DTMF ACKNOWLEDGE
Line 688: Displaying Received Message Contents
Line 696: Displaying Received Message Contents
Line 783: cc_ParseMsg - Wrong TI Value received OR CC_INIT_REQ not received OR Wrong MsgType Received
Line 786: Displaying Received Message Contents
Line 841: cc_DetermineMmBaseMsgType - Wrong Ti Received and ignor the message
Line 855: cc_DetermineMmBaseMsgType - CC_MESSAGE_TYPE_NOT_IMPLEMENTED
Line 920: Initialising CC ...in cc_Initialise.
Line 1008: NUMBER_PLUS_FEATURE(Enable=1/Disable=0) = %d
Line 1012: CSVT_FEATURE(Enable=1/Disable=0) = %d
Line 1064: [CC_INIT]CBST Defaults = { %d,%d,%d }
Line 1080: BearerType %d
Line 1086: Unable to Allocate Memory to Send %s Message in cc_Initialise
Line 1100: Re-Initialising CC ....
Line 1167: cc_DecodeCcStopReqMsg : [StackNo] %d
Line 1191: Entering cc_DecodeCcSysInfoUpdateReqMsg - Received GAPI message
Line 1203: AocSupportedIndication   -> %s
Line 1207: AoC not supported by UE, not processing cc_SysInfoUpdateReq
Line 1212: No data in cc_DecodeCcSysInfoUpdateReqMsg!!!
Line 1232: cc_DecodeCcHDVoiceSettingReqMsg : HDVoiceCallSetting = %d
Line 1237: cc_DecodeCcHDVoiceSettingReqMsg : INVALID HDVoiceCallSetting = %d
Line 1247: MtCallBlockStatus = %d
Line 1260: CC Message Count -> %d
Line 1288: Processing CC Saved Message....
Line 1333: Msg not expected in this direction:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1347: Storage table too short:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1348: When a message is received that is too short to contain a complete message type information element, that message shall be ignored,
Line 1355: Mandatory param Absent:  ERROR -> Msg %d[%d] cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1381: TLV param not expected:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1398: TLV Parameter out of sequence:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1405: IE unknown in msg:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1406: When a message is received that IE unknown element, that message shall be ignored,
Line 1413: cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1417: TLV parameter unknown in msg:  ERROR -> Msg %d cc_DetermineErrorDecodeRadioMsg - cc_CodecResult[CcCurrentStackId] = %d !!!
Line 1489: Unable to Save READ ALL MMCC_DATA_IND(Connect_Ind) Msg in cc_SaveConnectIndMsg, cc_PtrMsgRec NULL Or cc_PtrConnectIndCopy Non-Zero
Line 1565: Unable to Save READ ALL MM_SYNC_IND Msg in cc_SaveMmSyncIndMsg, cc_PtrMsgRec NULL Or cc_PtrMmSyncIndCopy Non-Zero
Line 1581: saved after discard....cc_SaveMmSyncIndMsg
Line 1665: INVALID session umber = %d
Line 1690: INVALID session umber = %d
Line 1711: Msg saved in MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg
Line 1715: Unable to Save Msg MMCC_SRVCC_HO_CNF in cc_SaveMmSrvccHoCnfMsg, cc_PtrMsgRec NULL Or cc_PtrMmSrvccHoCnfCopy Non-Zero
Line 1793: Unable to Save READ ALL MMCC_DATA_IND(Facility) Msg in cc_SaveFacilityIndMsg, cc_PtrMsgRec NULL Or cc_PtrCcFacilityIndCopy Non-Zero
Line 1851: Unable to Save READ ALL MMCC_DATA_REQ(Disconnect) Msg in cc_SaveDiscReqMsg, cc_PtrMsgRec NULL Or cc_PtrDisconnectReqCopy Non-Zero
Line 2000: cc_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Line 2039: Sending Message ...... 
Line 2165: Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_SetState
Line 2185: Suported Codec List ->.....
Line 2191: Suported Codec List Not Available
Line 2204: StreamId -> 0x%02X
Line 2223:             ------- Displaying DTMF Data - Session Number (%d) -------
Line 2229: Current Dtmf Index -> %d
Line 2231: Last    Dtmf Index -> %d
Line 2247: Error: Dtmf Index = %d
Line 2253: Data For Dtmf Index -> %d
Line 2257: Timer Duration -> %d ms
Line 2258: Stop Req       -> %s
Line 2276: Resetting MT Call Data
Line 2298: cc_SetAutoRedial: SessionNumber = %d Autoredial =0x%x
Line 2311: cc_GetAutoRedial: SessionNumber = %d, Autoredial =0x%x
Line 2325: cc_SetNetworkIssueRedialAttempts: SessionNumber = %d NumOfAutoRedialAttempt = 0x%02X
Line 2338: cc_GetNetworkIssueRedialAttempts: SessionNumber = %d, NumOfAutoRedAttempt =0x%02X
Line 2352: cc_SetMmIssueRedialAttempts: SessionNumber = %d NumOfAutoRedialAttempt = 0x%02X
Line 2365: cc_GetMmIssueRedialAttempts: SessionNumber = %d, NumOfAutoRedialAttempt =0x%02X
Line 2416: Resetting Call Data
Line 2645: Attempting To Read Cuurent Dtmf Using Invalid CallSessionNumber(%d) in cc_GetCurrentDtmfIndex
Line 2682: Attempting to Set CurrentDtmf Using Invalid DtmfIndex(%d) in cc_SetCurrentDtmfIndex
Line 2690: Attempting to Set CurrentDtmf Using Invalid CallSessionNumber(%d) in cc_SetCurrentDtmfIndex
Line 4181: cc_SessionData[%d].AuxState -> %s
Line 4187: Invalid SessionNumber (0x%02X) in cc_DisplaySessionAuxState
Line 4368: cc_SessionData[%d].MultiPartyState -> %s
Line 4374: Invalid SessionNumber (0x%02X) in cc_DisplaySessionMultiPartyState
Line 4555: Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_GetState
Line 4583: Attempting to Read State Using Invalid CallSessionNumber(%d) in cc_API_GetState
Line 4610: Attempting to Read RabId Using Invalid CallSessionNumber(%d) in cc_GetRabId
Line 4640: Attempting to Write to RabId Using Invalid CallSessionNumber(%d) in cc_SetRabId
Line 4774: Attempting to Read Flags Using Invalid CallSessionNumber(%d) in cc_ClearFlag
Line 4804: Attempting to Read Flags Using Invalid CallSessionNumber(%d) in cc_SetFlag
Line 4840: Attempting to Read SessionData using Invalid CallSessionNumber (%d) in cc_GetFlag
Line 4875: No Active Calls Found !!!!
Line 4889: -------------- Displaying Session Data For CC Session Number -> %d ---------------------
Line 4891: Transaction Id     -> %d 
Line 4892: StreamId           -> %d 
Line 4893: RabId              -> %d 
Line 4894: PriorityLevel      -> %d 
Line 4895: CcbsRequest        -> %d 
Line 4896: CallType1 -> %s 
Line 4897: CallType2 -> %s 
Line 4905: AuxState        -> %s 
Line 4906: MultiPartyState -> %s 
Line 4907: CcbsState       -> %s 
Line 4909: CfxIndex          -> %d 
Line 4910: ReleaseMsgCount   -> %d 
Line 4914: 
Line 4930: 
Line 4948: Session[%d]: Ti -> %d, State -> %s, Call Type 1 -> %s, AuxState -> %s, M.Party State -> %s, Dtmf State -> %s
Line 4956: No Active Calls Found !!!!
Line 5002: 
Line 5120: No Flags are Set !
Line 5134: ------------------------- CC Global Flags ----------------------------
Line 5150: ------------------------- CC Redial Global Flags ----------------------------
Line 5168: CC_SESSION_ASSIGNED_FLAG -> %s
Line 5185: CC_PROGRESS_DESCRIPTION_1_OR_2_OR_64_FLAG -> %s
Line 5202: CC_MM_CONECTION_ESTABLISHED_FLAG -> %s
Line 5219: CC_CALL_WAITING_TONE_ON_FLAG -> %s
Line 5236: CC_INTERNAL_ALERT_FLAG -> %s
Line 5253: CC_PROGRESS_INDICATION_FLAG -> %s
Line 5270: CC_MM_REST_CONF_FLAG -> %s
Line 5287: CC_ECT_REQ_FLAG -> %s
Line 5304: CC_VCG_CALL_EST_CNF_FLAG -> %s
Line 5321: CC_VCG_CALL_EST_REQ_FLAG -> %s
Line 5338: CC_VCG_ALTER_CODEC_REQ_FLAG -> %s
Line 5355: CC_MPTY_ACTIVE_FLAG -> %s
Line 5372: CC_EARLY_USER_CONNECTION_FLAG -> %s
Line 5389: CC_CC_REL_IND_SENT_FLAG -> %s
Line 5985: CC Initialisation State -> CC_NOT_INITIALISED -> All Messages except CC_INIT_REQ will be Ignored.in cc_CheckInitialisationState. 
Line 6005: Entering cc_CheckEarlyUserConnectionStatus()
Line 6015: Early Connection Requested -> TRUE
Line 6019: This is a Voice Call -> TRUE
Line 6023: VCG has not been activated -> Begin VCG activation...
Line 6057: Early User Connection Check Aborted -> VCG has been activated
Line 6062: Early User Connection Check Aborted -> This is not a Voice Call
Line 6067: Early User Connection Check Aborted -> Early User Connection NOT requested
Line 6080: Transaction Id -> %d
Line 6106: -------------  Active Sessions are  -----------
Line 6111: Session (%d), Ti -> %d
Line 6165: Bearer 1 Capability ->.....
Line 6171: Bearer 1 Capability Not Available
Line 6263: Bearer 2 Capability ->.....
Line 6269: Bearer 2 Capability Not Available
Line 6285: Backup Bearer Capability ->.....
Line 6291: Backup Bearer Capability Not Available
Line 6305: Connected Party Number Length -> %d
Line 6306: Connected Party Number        -> ....
Line 6321: Connected Sub Address Length -> %d
Line 6322: Connected Sub Address      -> ....
Line 6377: Network Transfer Capability -> %s
Line 6389: CUG Index[0] -> 0x%02X
Line 6390: CUG Index[1] -> 0x%02X
Line 6461: Network Priroity -> %s
Line 6532: GAPI Priroity -> %s
Line 6573: Call Divert Indication -> %s
Line 6590: cc_SessionData[%d].State -> %s
Line 6597: Attempting to Read State using Invalid SessionNumber (%d) in cc_DisplaySessionState
Line 6643: 
Line 6654: %d. %s
Line 6664: %d. %s
Line 6715: CalledPartyNumber-->
Line 6992: State=%d,LoopCount=%d
Line 6999: [cc_CheckPossibleAction]No.of Call=%d,Result=%d
Line 7052: Unable to Save READ ALL MMCC_DATA_REQ(Setup) Msg in cc_SaveSetupReqMsg, cc_PtrMsgRec NULL Or cc_PtrCcSetupReqCopy Non-Zero
Line 7085: cc_DecodeCcCallBlockSetReqMsg : Call Block Status = TRUE
Line 7090: cc_DecodeCcCallBlockSetReqMsg : Call Block Status = FALSE
Line 7126: CHINA : matched for ONESKU
Line 7140: DOCOMO : matched for ONESKU
Line 7150: cc_SetOptCarrier : cc_CurrentOptCarrier(%d)
Line 7182: cc_CheckOptCarrier : Stack ID(%d) OptCarrier(0x%x)
Line 7191: cc_CheckOptCarrier : Stack ID(%d) OptCarrier(0x%x)
Line 7216: cc_CheckOptColorForONESKU : Stack ID(%d) OptColor(0x%x)
Line 7225: cc_CheckOptColorForONESKU : Stack ID(%d) OptColor(0x%x)
