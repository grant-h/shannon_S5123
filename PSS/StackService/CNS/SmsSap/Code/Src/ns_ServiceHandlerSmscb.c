Line 167:  ns_SmsFreeMoSMSReq
Line 177:  FREEING memory for MO SMS REQ
Line 200: Error: Null Pointer
Line 202:  SendMode=%d SR=%d 
Line 214:  Length too long for memcpy: %d
Line 223:  Length too long for memcpy: %d
Line 232: Length too long for memcpy
Line 255: No Status Report
Line 295:  Send Mode %d
Line 305: Failed to allocate TID resources: result %d
Line 320:  buffer length error[%d]
Line 390: Error: Null Pointer
Line 440: Built NS_SMS_SEND_REQ_REJ: Cause %d, SubCause %d, MsgRef %d
Line 485: Error: Null Pointer
Line 514: Build SMS_REL_REQ (Ti=%d, MoreMessagesToFollow=%d)
Line 524: More SMS to be sent /PS DET not needed
Line 563: Error: Null Pointer
Line 609: NS_SMS_SEND_RSP(Tid %d): Result=%x, Cause=0x%x, SimRecord=%d, MsgRef=%d, SId=%d, DiagInfo=%d
Line 738: Error: Null Pointer
Line 770: [DialNumPresent] TP-MR : %x
Line 775: TP-MR : %x
Line 778: Usat-Send-Sms -> Tid = 0x%02x
Line 781: TPDU-->
Line 837: Error: Null Pointer
Line 872: Test Sim card is used. Do not modify DataBearer received from AP
Line 896: DataBearer %d
Line 916: Built SMS_MO_REQ: Ti = %d DataBearer %d
Line 922: Result(%d), MO SMS encoding failed for message type %d
Line 927: Result(%d), MO SMS PDU preparation failed
Line 934: SMS MO REQ[TPDU]: 
Line 940:  Message encoding failed: result = %d
Line 997: Previous [ConcatMsgRef %d, ConcatMsgSeq %d, ConcatTotMsg %d, ConcatType %d ]
Line 1003: [SMS_SAP] SMS Transaction type: Concatenated, [Page: %d/%d, KeepLinkOpen: %d], New concatenated SMS
Line 1018: [SMS_SAP] SMS Transaction type: Concatenated, [Page: %d/%d, KeepLinkOpen: %d], part of previous concatenated SMS
Line 1065: Current- [ConcatMsgRef %d, ConcatMsgSeq %d, ConcatTotMsg %d, ConcatType %d ]
Line 1069: SmsTransactionInfo: TransactionType=Normal, KeepLinkOpen=%d
Line 1102:  Failed to allocate TID resources: result %d
Line 1116: Error: Null Pointer
Line 1127: SCAddr: ton = %d npi = %d
Line 1128: SCAddr: 
Line 1133: DestAddr: ton = %d npi = %d
Line 1134: DestAddr: 
Line 1139: Rcvd Rsp from SYNC MBX
Line 1168: MO SMS Control by USIM enabled. Result : %d
Line 1180: Changed SCAddr: 
Line 1187: Changed DestAddr: 
Line 1213: Error: Null Pointer
Line 1219: Error: Null Pointer
Line 1235: Error: Null Pointer
Line 1259: Call control result modified by USAT
Line 1263: Serialized SC Address: 
Line 1266: Serialized Destination Address: 
Line 1275: Received RPUserdata : %d, mtibit: %d, TP-MR: %d, DestAddrLen: %d
Line 1292: Received TP-Pid : %d, TPDcs: %d, TPUserDataLen: %d newAddrLen :%d
Line 1299: Error: Null Pointer
Line 1329: Generated tppid : %d, tpdcs: %d, tpUserdatalen: %d
Line 1330: Generated TPDU: 
Line 1337: Error: Null Pointer
Line 1355: SmsUpdated usatReq: 
Line 1365: SMS not allowed by USAT
Line 1370: Call allowed without any modification
Line 1406: Stack not initialised!Rejecting the USAT SMS request
Line 1411: Rx  SMS:
Line 1413: Packing Reqd: %d
Line 1414: Recevied TPDU: 
Line 1418: Packing Reqd changed to : %d
Line 1419: Recevied TPDU: 
Line 1472:  Stored Usat SID = 0x%02x PackingRequired : %d
Line 1483: Failed to allocate SMS TID resources for ns_UsatSmsAllocateMoReqTidResources
Line 1510: BuildMoSmsReq Failed to Build MO SMS Message encoding failed: result = %d
Line 1517: Free Tid Failed
Line 1555: ns_MoSmsPreHandler: NsStackState=%d, KeepLinkOpenTid=%d
Line 1569: Stack not initialised!
Line 1578: ns_KeepLinkOpenTid(%d) is valid one. Stop Timer
Line 1588: SId not found for TId %d
Line 1598: Operator requirement ! Dont Check FDN
Line 1603: TCO requirement ! Dont Check FDN
Line 1630: FDN check Passed for calledPartyNum
Line 1634: FDN check Failed for calledPartyNum
Line 1647: FDN check Passed for serviceCenterNum
Line 1651: FDN check Failed for serviceCenterNum
Line 1665: MO SMS Rejected by UICC!
Line 1702:  Failed to allocate TID resources: result %d
Line 1715: Build SMS_MO_REQ Error!
Line 1734: Failed to store SMS_MO_REQ!
Line 1778: [NS_SMS_SEND_REQ] MsgType=%d, SendMode=%d, Status Report=%d, optMask=0x%02x, KeepLinkOpen=%d, 
Line 1780: + PresentFlag (MsgRef=%d, DestAddr=%d, SCAddr=%d, PID=%d, DCS=%d, VP=%d)
Line 1791: Failed to load default SMS parameters from SIM!
Line 1834: Send SMS_MO_REQ (Ti=%d, SmsType=%d, DataLength=%d)
Line 1859: Error: Null Pointer
Line 1860: [NS_MEM_STATUS_REQ] MemStatus = %d
Line 1883: MO SMS Control by USIM enabled. Result : %d
Line 1896: Changed SCAddr: 
Line 1903: Changed DestAddr: 
Line 1943: Error: Null Pointer
Line 1955: SCAddr: ton = %d npi = %d
Line 1956: SCAddr: 
Line 1963: DestAddr: ton = %d npi = %d
Line 1964: DestAddr: 
Line 1972: Rcvd Rsp from SYNC MBX
Line 2021: Error: Null Pointer
Line 2093: TID is out of range (%d)
Line 2099: TID=%d, Previous info was not set
Line 2125: TID is out of range (%d)
Line 2131: TID=%d, Previous info was not cleared (MsgRef:%d, KeepLinkOpen:%d)
Line 2194: Error: Null Pointer
Line 2261: Error: Null Pointer
Line 2268: Built SMS_ABORT_REQ Ti = %d
Line 2297: Error: Null Pointer
Line 2307: Unknown ReqType: %d
Line 2330: Error: Null Pointer
Line 2333: Error: Null Pointer
Line 2352: CbmidListCount is too many %d
Line 2376: Error: Null Pointer
Line 2404: [SMS_SERV_RSP] Ti=%d, Cause=%d, DiagInfo=%d, Result=%d, ns_KeepLinkOpenTid= %d
Line 2458: BuildMoSmsReq Failed to Build MO SMS Message encoding failed: result = %d
Line 2470: Free Tid Failed
Line 2491: Info in SMS_MO_REQ -> Ref=%d, LinkOpen=%d
Line 2533: Fail to find SIdFromTid - TID=%d
Line 2875: Error: Null Pointer
Line 2882: Tx Data to SIM SAP :
Line 2904: Expired: Keep Link Open Timer - KeepLinkOpenTid(%d)
Line 2915: SId not found for TId %d
Line 2920: Error: Null Pointer
Line 2952: SmsPpEnabled = %d
Line 2969: SmsPpEnabled = %d
Line 2978: offset1= %d TpOaLen = %d mtSMS_ptr[offset] = %d
Line 2983: offset= %d Pid = %d Class = %d
Line 3055: MemAlloc Fail
Line 3064: [SMS_SAP] SMS_MT_IND: PID=%d, SId=%d (Ti=%d), MsgRef = %d
Line 3083: WAP-PUSH (port 8 / port 16 ID found
Line 3135: Skipping Message Storage to SIM As port 8/16 addressing found
Line 3211: Error: Null Pointer
Line 3213: [SMS_MT_IND] Ti %d, DataLength %d
Line 3231: AT&T Requirement,Not saving in SIM
Line 3244: Error: Null Pointer
Line 3275: Error: Null Pointer
Line 3312: Error: Null Pointer
Line 3336: USIM  scalen %d ton npi 0x%x , ns_SmsPpEnabled Npi = 0x%x Ton = 0x%x NoLen = 0x%x TpduLen = 0x%x pRxSmsMsg->Ti = 0x%x
Line 3337: SCA NUM 
Line 3338: TPDU 
Line 3398: Error: Null Pointer
Line 3448: Error: Null Pointer
Line 3463: Error: Null Pointer
Line 3497: Error: Null Pointer
Line 3528: Error: Null Pointer
Line 3553: RSP by CBMID update. Don't send forward it to HIU..
Line 3558: Error: Null Pointer
Line 3590: Error: Null Pointer
Line 3594: Error: Null Pointer
Line 3631: Stop network Request:ns_KeepLinkOpenTid(%d) != NS_SMS_INVALID_TID, Stop Timer 
Line 3641: SId not found for TId %d
Line 3652: SmsSAP_ServiceLockTable [Status(%d), Tid(%d)]
