Line 127: Enter urlc_IndLowerSap: Tokens %d, TokensMax %d, Handles %d, HandlesMax %d
Line 146: TimerStatusProhibitToken makes NULLL: RbId %d
Line 157: TimerPollToken makes NULLL: RbId %d
Line 183: TimerPollProhibitToken makes NULLL: RbId %d, PduListRoot %X
Line 190: Exit urlc_IndLowerSap: Tokens %d, TokensMax %d, Handles %d, HandlesMax %d
Line 233: Error detected: Invalid message - %X
Line 260: DataReq() : DataReqPtr %x, InstanceId %x, NumResponses %d
Line 303: urlc_LshUmacDataReq - Instance not found
Line 357: U-RLC Discard DL Data: RbId=%d, Mode:MODE_TM, Reason: Size is 0
Line 416: U-RLC Discard DL Data: RbId=%d, Mode:MODE_TM, Reason: Size is 0
Line 479: MAC asking for data on %d Rbs > MaxNoRbs not handling this request
Line 489: Error detected: new UMAC data request list creation failed.
Line 508: MAC asking for More than URLC_MAX_NUM_UL_PDUS: RbId %d, ReqPdus %d, InstanceId %x
Line 539: UlMaxBuffer was updated(TDD): RbId %d, UlMaxBuffer %d
Line 553: UlMaxBuffer was changed(EDCH): RbId %d, Prev %d -> 130
Line 578: UlMaxBuffer was changed(RbId %d, UlTrchType %d): Prev %d -> Curr %d
Line 584: Max TrBk Nums is 0(RbId %d, UlTrchType %d): 24
Line 610: StatusInd has strange value(RbId %d, Pdusize=0)
Line 628: StatusInd() : RbId %d, DataReqPtr %x, NumOfRb %d, ReqPdus %d, InstanceId %x
Line 649: Error: not supported Mode(%d)
Line 658: Exit urlc_LshHandleStatusInd(): didn't make any requests
Line 757: Error: not supported Mode(%d)
Line 765: Exit urlc_LshHandleStatusInd(): RbId %d, UmacDataReqListPtr %x, RespExpected %d, NumEntries %d
Line 810: VR_R or VR_H is not Zero: RbId %d, VR_R %d, VR_H %d
Line 914: Error detected: UMAC_DATA_REQ creation failed.
Line 931: Error detected: *NewListEntry is NULL.
Line 1124: Forcefully triggering status prohibit timer if stopped VR_R %d VR_H %d gTActualPauseDuration %d
Line 1134: urlc_LshAmTxIndProcedures: RbId=%d sending URLC_TIMER_START to UL (timer value=%d)
Line 1198: Unsafe to process the msg or IIM failure: ul2ul_LshAmTxIndProcedures RbId=%d
Line 1222: ul2ul_LshAmTxIndProcedures: RbId=%d starting STATUS_TIMER_PROHIBIT (timer value=%d)
Line 1278: urlc_LshTraceInterrpretDlMob: RbId=%d did not have AmEis Entity!!
Line 1289: urlc_LshTraceInterrpretDlMob: RbId=%d did not have UmEis Entity!!
Line 1303: urlc_LshTraceInterrpretDlMob: RbId = %d AM PDU ->iSegBitSize = %d, Discarded
Line 1317: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, PollBit=%d, VR_R=%d, VR_H=%d, Sn=%d:
Line 1323: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, PollBit=%d, VR_R=%d, VR_H=%d, Sn=%d:
Line 1324: Data: 
Line 1331: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1332: Data: 
Line 1336: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1337: Data: 
Line 1344: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset:
Line 1345: Data: 
Line 1349: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset:
Line 1350: Data: 
Line 1357: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset Ack:
Line 1358: Data: 
Line 1362: URLC DL Data: RbId=%d, MODE_AM, BitSize=%d, Reset Ack:
Line 1363: Data: 
Line 1370: URLC DL Data: RbId = %d, MODE_AM, BitSize = %d, Unknown Packet Type:
Line 1380: URLC DL Data: RbId=%d, MODE_UM, BitSize=%d, VR_US=%d, Sn=%d
Line 1384: URLC DL Data: RbId=%d, MODE_UM, BitSize=%d, VR_US=%d, Sn=%d
Line 1385: Data: 
Line 1394: URLC DL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1398: URLC DL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1399: Data: 
Line 1404: URLC DL Data: RbId = %d, MODE_TM, BitSize = %d:
Line 1443: urlc_LshTraceInterrpretUlMob: RbId=%d did not have AmEis Entity!!
Line 1454: urlc_LshTraceInterrpretUlMob: RbId=%d did not have UmEis Entity!!
Line 1482: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1483: Data: 
Line 1487: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Status Report:
Line 1488: Data: 
Line 1495: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Reset:
Line 1499: URLC UL Data: RbId = %d, MODE_AM, BitSize = %d, Reset:
Line 1500: Data: 
Line 1508: URLC UL Data: RbId=%d, MODE_AM, BitSize=%d, Reset Ack:
Line 1512: URLC UL Data: RbId = %d, MODE_AM, BitSize = %d, Reset Ack:
Line 1513: Data: 
Line 1519: URLC UL Data: RbId = %d, MODE_AM, BitSize = %d, Unknown Packet Type:
Line 1540: URLC UL Data: RbId %d, MODE_AM, RlcH %x, Bits %d, Poll %d, VT_A %d, VT_S %d, SN %d:
Line 1545: URLC UL Data: RbId=%d, MODE_AM, RlcH=%x, BitSize=%d, PollBit=%d, VT_A=%d, VT_S=%d, Sn=%d:
Line 1546: Data: 
Line 1564: URLC UL Data: RbId=%d, RlcH=%x, MODE_UM, BitSize=%d, Sn=%d:
Line 1568: URLC UL Data: RbId=%d, RlcH=%x, MODE_UM, BitSize=%d, Sn=%d:
Line 1569: Data: 
Line 1582: URLC UL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1586: URLC UL Data: RbId=%d, MODE_TM, BitSize=%d:
Line 1587: Data: 
Line 1594: URLC UL Data: RbId %d, Invalid Mode
Line 1685: MAC-hs reset: Configuration check(RbId %d, Mode %d)
Line 1691: MAC-hs reset: RbId %d, VR_R %d, VR_H %d
Line 1694: MAC-hs reset: No poll bit trigger in RX for RbId %d 
