Line 138: [USAT_%d] TimerVal=%d s
Line 146: [USAT_%d] error in HandleTimerManagmentCmdReq !!
Line 168: [USAT_%d] error in HandleMoreTimeCmdReq !!
Line 237: [USAT_%d] Refresh in progress, Store SetupEventListCmd
Line 263: [USAT_%d] Event [%d] is not supported at modem 
Line 301: [USAT_%d] Unexpected client Mode 0x%X
Line 315: [USAT_%d] error in Handling SetupEventList 
Line 359: [USAT_%d] timeUnit = %d, timeInterval = %d
Line 371: [USAT_%d] error in Handling PollingIntervalCmd  !!
Line 404: [USAT_%d] error in Handling PollingOffCmd !!
Line 424: [USAT_%d] OPEN_MODE: Directly Send PLI TR with result 0x30H
Line 516: [USAT_%d] error in HandleProvideLocalInformationCmdReq !!
Line 616: [USAT_%d] Reg.IMEI Value:
Line 620: [USAT_%d]  Converted IMEI Value:
Line 641: [USAT_%d] Reg.IMEI Value:
Line 658: [USAT_%d] IMEI SV Value:
Line 688: [USAT_%d] NULL buffer addr. received!!! (Dest- 0x%X, Src- 0x%X
Line 733: [USAT_%d] MeIdFromReg Value:
Line 739: [USAT_%d] Meid Value:
Line 750: [USAT_%d]  Esn Value:
Line 803: [USAT_%d] usat_ProcessCSGList
Line 850: [USAT_%d] Unable to process CSG List,CSG List absent in Terminal response
Line 871: [USAT_%d] Decoding CsgList
Line 896: [USAT_%d]  PlmnId = %d %d %d, CurrentCsgID= %d ,csgcount =%d
Line 902: [USAT_%d] Current Active RAT : USAT ACCESS TECH NOT HANDLED
Line 908: [USAT_%d] Null Msg
Line 929: [USAT_%d] HandleprovideLocalInfoRsp: LocalinfoType %d
Line 1014: [USAT_%d] Location Status: USAT_LIMITED_SERVICE
Line 1088: [USAT_%d] No Valid LocInfo:sending NO_SERVICE in Terminal Response
Line 1156: [USAT_%d] NO AID in REFRESH CMD, USIM APP is Assumed
Line 1184: [USAT_%d] Refresh App is not active
Line 1220: [USAT_%d] AID is in REFRESH CMD, AppType=%d
Line 1249: [USAT_%d] Invalid Client Register format
Line 1311: [USAT_%d] DownloadType=%d
Line 1398: [USAT_%d] SmsPpDownloadStatus : %s
Line 1707: [USAT_%d] Stored Refresh Command is processed, Terminal Response not to be sent
Line 1714: [USAT_%d] Dummy Refresh Command is processed, TR not to be sent
Line 1727: [USAT_%d] usat_SendRefreshTerminalRsp. Result-->
Line 1756: [USAT_%d] SendTimerExpiryEnvelope: Time Remain %d
Line 1812: [USAT_%d] usat_SendTimerMgntTR: timeremain %d sec
Line 1855: [USAT_%d] getTimerInBCD: Hr: %x Min %x Sec %x
Line 1967: [USAT_%d] usat_CurrentCmdDetails[0],[1],[2]  %x,%x,%x
Line 2033: [USAT_%d] clear Eventlist, Len = 0
Line 2203: [USAT_%d] IMSI NOT CHANGED : Refresh Type 0x%02X
Line 2217: [USAT_%d] IMSI IS CHANGED : Refresh Type 0x%02X
Line 3183: [USAT_%d] GetEnvelopeTag for envCmd 0x%X
Line 3268: [USAT_%d] Invalid EnvCmd
Line 3470: [USAT_%d] NULL pointer received!!! (formattedString- 0x%X, sourceString- 0x%X
Line 3542: [USAT_%d] CreateAndSendTerminalResponse: TR len= 0x%x
Line 3593: [USAT_%d] usat_CreateAndSendEnvelopeCmdReq: EnvCmd %d, Length %d
Line 3630: [USAT_%d] EnvelopeCmd Coder Error= 0x%x
Line 3697: [USAT_%d] HandleRefreshRspFromUSIM: Rsp= 0x%x
Line 3796: [USAT_%d] usat_AllClientRspRcvd  set to true 
Line 3866: [USAT_%d] DisplayRefreshCmdType: %s
Line 4097: [USAT_%d] SetupLocalEventList: Event [%d], Status %d
Line 4148: [USAT_%d] DisplayEventList: Event %d Enabled
Line 4252: [USAT_%d] CreateAndSendEutranNMRReq: Entry
Line 4256: [USAT_%d] *FreqMeasQualifier: %d 
Line 4263: [USAT_%d] Memory alloc fails
Line 4309: [USAT_%d] DecodeEutranNmrRsp Entry:
Line 4388: [USAT_%d] DecodeEutranNMRRsp: NmrLen %d,  Length %d
Line 4564: [USAT_%d] DecodeNMRRsp: Encoded BCCHChannelList
Line 4603: [USAT_%d] DecodeNsSafetyModeReq : SafetyMode = %d
Line 4627: [USAT_%d] usat_CheckSafetyMode: CmdType = 0x%02X
Line 4669: [USAT_%d] [SETUP CALL] >> usat_HandleSetpCallCmdReqLocal
Line 4693: [USAT_%d] Mandatory TLV missing1
Line 4704: [USAT_%d] Mandatory TLV missing 2
Line 4715: [USAT_%d] Alpha Identifier TLV missing 3 (Optional)
Line 4727: [USAT_%d] Mandatory TLV missing 4
Line 4754: [USAT_%d] Duration  TLV present
Line 4760: [USAT_%d] timeUnit: 0x%x, timeInterval: 0x%x
Line 4772: [USAT_%d] Mandatory TLV 4 ADDR Present after duration
Line 4822: [USAT_%d] [SETUP CALL] >> usat_GetCallingNumberAndType
Line 4829: [USAT_%d] [SETUP CALL] Found P in dialling Number , break
Line 4852: [USAT_%d] [SETUP CALL] Usat_SendDtmfDigits.DtmfDigitsLen : %x ,DialNumLen: %x
Line 4861: [USAT_%d] [SETUP CALL] UsatTriggerOutgoingCall->NumType : 0x%x UsatTriggerOutgoingCall->NumPlanId: 0x%x
Line 4879: [USAT_%d] [SETUP CALL] >> usat_SendTRForLocalSetupCall Result: 0x%x
Line 4936: [USAT_%d] [SETUP CALL] >> usat_DecodeSetupCallUserRsp Result: 0x%x
Line 4973: [USAT_%d] [CP STK] [SET]ProactiveCmd  : 0x%x
Line 4986: [USAT_%d] [CP STK] [GET]ProactiveCmd  : 0x%x
Line 5014: [USAT_%d] User Response not handled for this cmnd
Line 5034: [USAT_%d] [SETUP CALL] >> usat_SendTriggerOutgoingCallReq
Line 5053: [USAT_%d] [SETUP CALL] Num Len: 0x%x Num Dump: 
Line 5062: [USAT_%d] MemAlloc Fail
Line 5081: [USAT_%d] [SETUP CALL] >> usat_DecodeSetupCallEventInfo Result: 0x%x
Line 5100: [USAT_%d] [SETUP CALL] >> STK Call timer stopped remainingTime: 0x%x
Line 5109: [USAT_%d] [SETUP CALL/DTMF] >> usat_CreateandSendDtmfDigitsInd [DUMP->]
Line 5112: [USAT_%d] [ DTMF] Rx Len: %x
Line 5116: [USAT_%d] [ DTMF] index: %x  ,Count : %x
Line 5134: [USAT_%d] [SEND DTMF] Usat_SendDtmfDigits.DtmfDigitsLen : %x
Line 5149: [USAT_%d] Error in starting timer %s
Line 5196: [USAT_%d] [SETUP CALL] EventInfoResult: 0x%x, TRResult: 0x%x, * AdditionalInfo: 0x%x
Line 5217: [USAT_%d] [SETUP CALL] >> usat_SendDtmfDigitsInd
Line 5227: [USAT_%d] [SETUP CALL] Dtmf Len: 0x%x Num Dump: 
Line 5236: [USAT_%d] MemAlloc Fail
Line 5240: [USAT_%d] Usat_SendDtmfDigits cleared
Line 5261: [USAT_%d] [SETUP CALL] >> usat_SendDtmfDigitsInd
Line 5271: [USAT_%d] MemAlloc Fail
Line 5334: [USAT_%d] HandleSendSmsLocalRsp: RP-Error N/w Cause = 0x%02x
Line 5340: [USAT_%d] HandleSendSmsLocalRsp: RP-Error N/w Cause = 0x%02x
Line 5373: [USAT_%d] HandleSendSmsLocalRsp Error = 0x%02x RetVal = 0x%02x
Line 5413: [USAT_%d] CreateAndSendSmsLocalReq: Additional Memory 0x%02X, TpduLen 0x%02X,DialingNumPresent: %x
Line 5457: [USAT_%d] usat_Pack8BitTo7Bit
Line 5543: [USAT_%d] Sms packing not required
Line 5550: [USAT_%d] Sms packing required messageCoding: 0x%x,messageCodingIndex:%x
Line 5559: [USAT_%d] VFpresent(0x) : %x
Line 5586: [USAT_%d] Len8bit : %x
Line 5591: [USAT_%d] Len7bit : %x
Line 5598: [USAT_%d] Final TPDU len Len8bit : %x
Line 5612: [USAT_%d] sendSms->address.diallingNumberLen : %x
Line 5618: [USAT_%d] sendSms->tpduDataLen : %x
Line 5629: [USAT_%d] Icon data Present in SEND SMS - Not handling Currently
Line 5637: [USAT_%d] ERROR IN PROCESSING SEND SMS REQUEST
Line 5643: [USAT_%d] HandleSendSMSCmdReq: Malloc fail
Line 5663: [USAT_%d] Len : %x
Line 5673: [USAT_%d] [SEND SMS] EF_SMSP successfully read DataLen: 0x%x
Line 5679: [USAT_%d] Len : %x
Line 5684: [USAT_%d] [SEND SMS]EF_SMSP Data len is less than 28
Line 5689: [USAT_%d] [SEND SMS] Error in reading EF_SMSP
Line 5714: [USAT_%d] [STK_CP]usat_HandleSendDTMFCmdReqLocal
Line 5770: [USAT_%d] [STK_CP]usat_HandleSendUSSDCmdReqLocal
Line 5834: [USAT_%d] MemAlloc Fail
Line 5915: [USAT_%d] [STK_CP]usat_HandleSendSSCmdReqLocal
Line 5970: [USAT_%d] [SEND SS]usat_DecodeSSString
Line 6208: [USAT_%d] [SS CALL FRWD]usat_CreateAndSendSSCallForwardingReq
Line 6210: [USAT_%d] [SS CALL FRWD] CallForwardReason:%d , OperationType: %d,CallForwardTOA:%d,ServiceClass:%d,TimeToWait:%d,PhoneNumberlength:%d
Line 6212: [USAT_%d] [SS CALL FRWD]PhoneNumber is:
Line 6216: [USAT_%d] [SS CALL FRWD]PhoneNumber[%d]=%d
Line 6233: [USAT_%d] [SS CALL FRWD]PhoneNumber[%d]=%d
Line 6239: [USAT_%d] MemAlloc Fail
Line 6251: [USAT_%d] [SS CLIR]usat_CreateAndSendSSCLIRGetReq
Line 6261: [USAT_%d] MemAlloc Fail
Line 6283: [USAT_%d] [SS CALL FRWD]usat_DecodeLocalSend SS: Result:%d
Line 6319: [USAT_%d] [SS CALL FRWD]Additonal length set in IE :%d
Line 6345: [USAT_%d] [SEND DTMF]usat_DecodeLocalSendDtmfDigitsRsp: Result:%d
Line 6392: [USAT_%d] DTMF timer stopped remainingTime: 0x%x
Line 6408: [USAT_%d] Store Proact Cmd, stored=%d
Line 6481: [USAT_%d] Processing Stored Proact Cmd
Line 6488: [USAT_%d] cmdLen > USAT_PROACTIVE_CMD_MAX_LENGTH
