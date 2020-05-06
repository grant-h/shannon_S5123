Line 209: sms_SendForcedCbListUpdReqMsg in %s state
Line 213: ETWS Activated along with CBS
Line 221: GAPI Requesting to Activate All or Some Cell Broadcast Messages in sms_DecodeSmsCbListUpdReqMsg
Line 265: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 270: SMS is not-initialised. Send Failure Response to AP for SMS_CB_LIST_UPD_REQ
Line 275: ListPtr is freed
Line 286: DecodeSmsCbListUpdReqMsg in %s state, ListReqType->0x%x, Cell Broadcast List Size -> %d
Line 303: Cell Broadcast List Data  -> ...
Line 369: CBS is disabled based on registry value
Line 398: ETWS Activated along with CBS
Line 441: Need to keep CBS as enabled
Line 494: Need to keep CBS as disabled
Line 504: Unknown ListReqType: %d
Line 511: Rejecting GAPI's MO Req in sms_DecodeSmsCbListUpdReqMsg ! RAT Change in progress !!
Line 537: ListPtr is freed
Line 577: CBS is enabled in non-commerial plmn
Line 601: CB disabled from AP,don't activate for EF_CBMID
Line 607: CBS is enabled in NO SIM state
Line 612: sms_CbRegVals: %d
Line 613: hfcn result: %d
Line 642: There is no pending activation request
Line 655: sms_HandleEtwsConfigReq ENTRY nReqType =%d nRatmode = %d
Line 656: sms_EtwsUserEnable =%d sms_EtwsActiveMode = %d sms_EtwsActivateAll = %d
Line 673: nRatmode = %d
Line 693: nRatmode = %d
Line 717: sms_EtwsActiveMode = %d
Line 726: nReqType = %d
Line 730: sms_EtwsUserEnable = %d
Line 743: sms_SendSmsCbListUpdRspMsg in state %s, SmsCbListUpdRsp.Result -> %02x
Line 775: sms_PtrBodySnd->SmsCbListUpdRsp.CBListSize -> %d, sms_PtrBodySnd->SmsCbListUpdRsp.CBServiceState -> %d 
Line 802: Displaying Message Contents: %s Activate Status -> %s
Line 831: Displaying Message Contents: %s Activate Status -> %s
Line 859: Displaying Message Contents: %s Activate Status -> %s
Line 879: sms_DecodePhDataIndBlockMsg in %s state
Line 882: sms_DecodePhDataIndBlockMsg LteDataActiveStatus %d, SMS_CB_DYNAMIC_DISABLR_FLAG = %d
Line 902: LastBlock indicator = %d,BlockType = %d
Line 951: Received FILL block, which means NULL message. Discarding CBS message
Line 1012: Incorrect Channel Number. IT should be CHN_CBCH
Line 1028: sms_DecodeGrrETWSDataIndMsg sms_EtwsActiveMode = %d GrrSmsEtwsInd = %d
Line 1037: sms_DecodeGrrETWSDataIndMsg nMsgID = %d
Line 1064: sms_DecodeGrrETWSDataIndMsg ETWS Message without Security
Line 1067: sms_DecodeGrrETWSDataIndMsg SerialNumber = %d warningType = %d
Line 1089: sms_DecodeRrcETWSDataIndMsg sms_EtwsActiveMode = %d
Line 1099: sms_DecodeRrcETWSDataIndMsg nMsgID = %d
Line 1108: UrrcSmsEtwsInd.Payload.etwsInfo.warningType
Line 1110: UrrcSmsEtwsInd.Payload.etwsInfo.slNo
Line 1115: UrrcSmsEtwsInd.etwsSecurityInfo
Line 1150: sms_DecodeRrcETWSDataIndMsg ETWS Message without Security
Line 1152: sms_DecodeRrcETWSDataIndMsg SerialNumber = %d sms_DecodeRrcETWSDataIndMsg warningType = %d
Line 1157: 
Line 1199: sms_DecodePhDataIndMsgBlock1Msg in %s state
Line 1206: All zeros received in First block
Line 1248: Memory of scheduled MsgId is FREED
Line 1255: New Message ID %d Not Matched with schedule message
Line 1265: First Block Received, Correct Language and Msg Identifier
Line 1287: First Block Does Not indicate that it is Block 1, Ignoring Message
Line 1306: sms_DecodePhDataIndSchedBlock1Msg in %s state
Line 1314: Msg Received in Wrong State in sms_DecodePhDataIndSchedBlock1Msg
Line 1346: sms_DecodePhDataIndBlock2Msg in %s state
Line 1361: Time elapsed: %d 
Line 1364: Receiving Block 2 in sms_DecodePhDataIndSchedBlock2Msg
Line 1384: Receiving Block 2 in Incorrect State in sms_DecodePhDataIndSchedBlock2Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1400: sms_DecodePhDataIndBlock3Msg in %s state
Line 1415: Time elapsed: %d 
Line 1418: Receiving Block 3 in sms_DecodePhDataIndSchedBlock3Msg
Line 1438: Receiving Block 3 in Incorrect State in sms_DecodePhDataIndSchedBlock3Msg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1481: Duplicate CBS received, returning, sms_CbBlock1Type %d
Line 1489: New CBS is received..Add to DB and send CB_IND
Line 1496: Length Error,can't send CB Msg
Line 1521: Duplicate CBS received, returning
Line 1526: New CBS is received..Add to DB and sed CB_IND
Line 1536: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 1537: MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d 
Line 1538: sms_ProcessUbmcDataIndMsg in %s state, CbStr -> 
Line 1563: Wrong RAT in sms_SendCbInd
Line 1582: sms_ProcessPhDataIndLastBlockMsg in %s state
Line 1600: Time elapsed: %d 
Line 1603: CBS reception time Elapsed. Discarding CBS msg
Line 1609: Receiving last block in sms_ProcessPhDataIndLastBlockMsg
Line 1616: PageNumber =TotalPages,Re-Seting the TotalPages
Line 1637: CB: Schedule (%d,%d)
Line 1647: Receiving Block 3 in Incorrect State in sms_ProcessPhDataIndLastBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1667: Bad Block Received in sms_DecodePhDataIndBadBlockMsg in %s state
Line 1672: Receiving Bad Block in Incorrect State in sms_ProcessPhDataIndBadBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1679: Receiving Bad Block in sms_ProcessPhDataIndBadBlockMsg...Requesting L1 to Stop Sending Any More Data on this Channel till Next Time Round....
Line 1702: sms_SendGsmSmsCbInd in %s state
Line 1728:  Length of Broadcast Data Sent : %d
Line 1741: Memory allocation fails for sms_PtrBodySnd->SmsLcsmAsstdata.buf_ptr 
Line 1784: - MsgRatMode -> %02x
Line 1785: - MsgCode -> %02x
Line 1786: - MsgId -> %02x
Line 1787: - GeographicalArea -> %02x
Line 1788: - UpdateNumber -> %02x
Line 1789: - DataCodingScheme -> %02x
Line 1790: - TotalPages -> %02x
Line 1791: - PageNumber -> %02x
Line 1792: - CbStrLength -> %02x
Line 1793: - Language -> %02x
Line 1794: - CbMsgType -> %02x
Line 1823: sms_ProcessSmsCbLangReqMsg in %s state, ReqType -> %d, List Size -> %d
Line 1826: Language list  -> ...
Line 1850: sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Line 1872: Language ID (%x) not found in List sms_ProcessSmsCbLangReqMsg - Language Out of Bounds
Line 1882: Rejecting GAPI's MO Req in sms_ProcessSmsCbLangReqMsg ! RAT Change in progress !!
Line 1923: CB: SetB %d
Line 1934: CB: SetE %d
Line 1954: CB: SetNew %d, %d
Line 1962: CB: SetRepeatReadingAdv %d
Line 1967: CB: Skip InvalidSlot %d
Line 1984: CB: Set for ATT %d
Line 1997: CB: Skip OptionalFreeSlot %d
Line 2001: CB: Skip UndefinedFreeSlot %d
Line 2031: SendL1cPhCbChStopReq in %s state, Displaying Message Contents: %s STOP Status -> %s
Line 2038: 
Line 2102: Either ETWS Msg Ids are configured or All CBS Msgs are activated
Line 2128: Cell Broadcast List Size -> %d
Line 2132: Cell Broadcast List Data  -> ...
Line 2165: Cell Broadcast List Size -> %d
Line 2169: Cell Broadcast List Data  -> ...
Line 2229: pCbsData=%x, CbsTotalPages=%d
Line 2231: MessageIdentifer=%d, SerialNumber=%d, DataCodingScheme=%d, DataSize=%d, Data addr=%d
Line 2242: Number Of Page is Zero. Making it One.
Line 2260: Memory Allocation Failure
Line 2266: Warning Area Co-Ordinates Not Recevied
Line 2286:  Message NOT found in List or Incorrect Language/MsgId, Ignoring Message.
Line 2353: Unknown OperatorType: %d
Line 2395: For UQM Operator, do not apply KDDI Specific CB Requirements
Line 2460: Only Test Purpose, Ignore later!!
Line 2489: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 2493: FOR KDDI Operator in PLMN ID 440 50/51, always forward all broadcast messages to AP
Line 2500: DecodeSmsCbListUpdReqMsg : sms_CbOperator : %d
Line 2504: FOR Czech in PLMN ID 230 03/99, ignore all broadcast messages
Line 2510: Incorrect MsgId, Ignoring Message!!
Line 2577: DecodeUbmcData41IndMsg in %s state, Cell Broadcast Address ->....
Line 2585: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 2587: MessageIdentifer -> %04d
Line 2588: SerialNumber -> %02d
Line 2589: DataCodingScheme -> %02d
Line 2590: DataSize -> %d
Line 2592: CbStr -> .....
Line 2638: sms_SendUmtsSmsCbInd in %s state
Line 2689: Data Type -> SMS_CB_UBMC_DATA_MODE
Line 2691: MessageIdentifer -> %04d, SerialNumber -> %02d, DataCodingScheme -> %02d, GeographicalArea -> %d
Line 2693: TotalPages -> %d, PageNumber -> %d, DataSize -> %d WACLen -> %d
Line 2694: CbStr -> .....
Line 2696: WACInfo -> .....
Line 2720: CbStr -> .....
Line 2723: CbStr -> .....
Line 2724: BroadcastAddress Size -> %d
Line 2725: DataSize -> %d
Line 2727: BroadcastAddress -> .....
Line 3783: CB: sched messageID = %d
Line 3798: CB: scheduled item stored at location = %d
Line 3897: Page Number->%d, TotalPages->%d, Message ID->%d, Coding Scheme->%d
Line 3900: SerialNumber->%d, Message Code->%d, Update Number->%d, Message Class->%d
Line 3921: Invalid BlockNumber (%02x) in sms_SaveCbMsgBlock.
Line 4022: Cell Broadcast Msg Block (%02x) -> 
Line 4030: Array index exceed in sms_DisplayCbMsgBlockTable
Line 4061: sms_CellBroadcast InitType:%d
Line 4123: Need to keep CBS as disabled
Line 4194: Unknown Initialisation Type (%x) in sms_InitialiseCellBroadcast
Line 4209: sms_CellBroadcast InitType:%d ActiveMode: %d
Line 4294: Unknown Initialisation Type (%x) in sms_InitialiseEtws
Line 4354: Geaographical Area Info -> %s
Line 4366: Network Language -> %s
Line 4521: Saved info: PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
Line 4522: new PLMN ID=%x:%x:%x, TAC = %x:%x, CELL ID=0x%x
Line 4534: SMS MsgId: 0x%x is ignored
Line 4623: Duplicate CBS received, returning
Line 4631: sms_DecodeEtwsPrimaryInd MsgID = 0x%04X
Line 4656: sms_DecodeEtwsPrimaryInd ETWS Message without Security
Line 4660: sms_DecodeEtwsPrimaryInd SerialNumber = %d warningType = %d
Line 4683: sms_DecodeEtwsSecondaryInd MsgID = 0x%04X
Line 4887: TimerId %d is expired
Line 4903: 
Line 4907: SMS_RR_ACT_MODE_FLAG -> TRUE
Line 4912: SMS_CB_ACT_ALL_FLAG -> TRUE
Line 4917: SMS_CB_ANY_LANG_FLAG -> TRUE
Line 4922: SMS_CMAS_ACT_ALL_FLAG -> TRUE
Line 4927: SMS_CB_USER_ENABLE_FLAG -> TRUE
Line 4931: SMS_ETWS_USER_ENABLE_FLAG -> TRUE
Line 4936: SMS_ETWS_ACT_ALL_FLAG -> TRUE
Line 4941: SMS_CB_DYNAMIC_ENABLE_FLAG -> TRUE
Line 4946: SMS_CB_DYNAMIC_DISABLR_FLAG -> TRUE
Line 4956: sms_HandleGmmCbsConfigInd: CbConfigType = %s
Line 4980: Don't send Activation/Deactivation due to the state is same with previous one.
Line 5013: ETWS Activated along with CBS
Line 5066: Improper CbConfigType, Ignoring Msg
Line 5071: Rejecting Req from MM in sms_HandleGmmCbsConfigInd ! RAT Change in progress !!
Line 5081: sms_DecodeGmmCbsConfigInd: CbConfigType = %s
Line 5122: sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
Line 5123: sms_PlmnTripletToString sms_MccMnc : from (0x%X 0x%X 0x%X)
Line 5124: sms_PlmnTripletToString sms_MccMnc : from (0x%X)
Line 5137: sms_PlmnTripletToString : Invaild PLMN
Line 5162: sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
Line 5163: sms_PlmnTripletToString sms_MccMnc : to (0x%X 0x%X 0x%X)
Line 5164: sms_PlmnTripletToString sms_MccMnc : to (0x%X)
