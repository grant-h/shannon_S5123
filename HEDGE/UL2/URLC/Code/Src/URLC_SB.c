Line 164: urlc_SbPurgeSduBuffer() : MUI %d, RbId %d
Line 177: urlc_SbPurgePdcpSduBuffer(1) : Null pointer
Line 207: urlc_SbPurgePdcpSduBuffer(2) : Null pointer
Line 265: urlc_SbCancelSdu : RbId=%d, Mode=%d, Mui=%d
Line 272: DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Line 339: urlc_SbCancelSdu: RbId %d, SduId %d
Line 361: SDUBuff_Modif_in_Progress(TM)
Line 373: DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Line 381: urlc_SbGetSdu() - No SDU: Mode %d
Line 409: SduBuffer mismatch with ListRoot: Mode %d, SduBufferSize %d
Line 432: urlc_SbGetSdu (Delete timer): Mode %d, SduBufferSize %d, SduIdentifier %d, DiscardTimerId %x
Line 479: DEBUG_CODE(SDUBuffVars is NULL): Mode %d
Line 489: Discard UL SDU(NewSDUHandle is NULL): RbId %d, Mode %d
Line 520: Error: not supported Mode %d
Line 581: [SEC] Security Mode Complete received in URLC : RbId %d, Mode %d
Line 636: AM Mode: New SDU being submitted for segmentation  New Buffer Occupancy %d, New SDU Size %d, RbId %d, Mui %d, SduIdentifier %d, SIMInstance %d
Line 645: Previously unrecoverrable error happened: RbId %d
Line 649: AM Mode: New SDU being submitted for segmentation  New Buffer Occupancy -%d, New SDU Size - %d, RbId %d, Mui %d, SduIdentifier %d, SIMInstance %d
Line 663: UM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d
Line 668: UM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d
Line 720: TM Mode: BufferOccupancy %d, SDU Size %d, RbId %d, SduIdentifier %d, TtiCount %d SIMInstance %d
Line 723: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d SIMInstance %d
Line 728: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d SIMInstance %d
Line 748: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d
Line 753: TM Mode: New Buffer Occupancy - %d, New SDU Size - %d, RbId - %d, SduIdentifier - %d, SDU TtiCount - %d
Line 789: Error: not supported Mode %d
Line 829: DEBUG_CODE (EUrlcurlc_SegCreatePduB): RbId %d, Mui %d
Line 837: urlc_SbMarkPduDelivered() : MUI %d, RbId %d
Line 841: urlc_SbMarkPduDelivered: RbId %d, SduId %d
Line 873: DEBUG_CODE(EUrlcurlc_SegCreatePduB): State %d, Mode %d, SduIdentifier %d
Line 964: DEBUG_CODE(SduHandle is NULL): Mode=%d, SduIdentifier=%d
Line 990: urlc_SbSduListDeleteSdu (SduHandle is NULL): Mode %d
Line 1006: urlc_SbSduListDeleteSdu(TM) - Already deleted. SduIdentifier=%d, SduListRoot=0x%X, SduDeleteCnt=%d
Line 1026: Mismatch ListRoot & BO - Mode=%d, SduIdentifier=%d
Line 1050: urlc_SbSduListDeleteSdu (SDU DiscardTimer Stop): RbId=%d, Mode=%d, SduIdentifier=%d, DiscardTimerId=0x%x
Line 1065: Discarded ReTxSrbSdu: Mui %d, ReTxSrbSdu %x
Line 1083: Restore SDU: SduId %d, StartSeg %d, iDataP %x, NasuBuffDesPtr %x
Line 1090: Not from Upperlayer SDU : iDataP %x, NasubuffDesPtr %x
Line 1151: urlc_SbDiscardSdu - SduBuffVars is NULL 
Line 1163: urlc_SbDiscardSdu - Invalid SDU Identifier RbId=%d
Line 1174: AM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1179: AM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1217: UM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1222: UM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1251: TM Mode: SDU being discarded RbId %d, Mui %d, SduIdentifier %d
Line 1256: TM Mode: SDU being discarded RbId -%d, Mui -%d, SduIdentifier -%d
Line 1262: Just delete TimerId: RbId %d, SduIdentifier %d, State %d, DiscardTimerId %x
Line 1276: urlc_SbDiscardSdu(): MUI %d, RbId %d
Line 1279: urlc_SbDiscardSdu: RbId %d, SduId %d
Line 1316: Error: not supported Mode %d
Line 1333: urlc_SbDiscardTxedSdus() : MUI %d, RbId %d
Line 1338:  urlc_SbDiscardTxedSdus : RbId=%d, Mui=%d, InstId=%d(Txed=%d, StartSeg=%d)
Line 1369: Restore SRB data: RbId %d, Mui %d, InstanceId %d, SduData %X, ReestInd %d
Line 1379:  urlc_SbDiscardTxedSdus : RbId=%d, Mui=%d, InstId=%d(Txed=%d, StartSeg=%d)
Line 1405: urlc_SbResubmitSdus(Begin): RbId %d, SduListRoot %X, SegmentationFlowCntrlFifo %X, TCPSegmentationFlowCntrlFifo %X, TCPAckSduSegmentationFlowCntrlFifo %X, SduHandleList %X
Line 1431: urlc_SbResubmitSdus() : RbId %d, SduState %d, Mui %d, SduData %X, SduDataCopy %X
Line 1435: urlc_SbResubmitSdus() : RbId %d, SduData %X, SduId %d, Mui %d, SduState %d, StartSeg %d
Line 1462: urlc_SbResubmitSdus() : RbId %d, SduCnt %d, SduBufferOccupancy %d
Line 1494: urlc_SbSduTimerDiscardExpiry: RbId=%d
Line 1515: Unsafe to process or IIM failure: urlc_SbSduTimerDiscardExpiry RbId=%d, sdu_exp_timerId %x
Line 1543: SDU's discard timer not matching with Expired timer RbId=%d, Sdu->DiscardTimer = %x, sdu_exp_timer=%x
Line 1560: Inconsistant state of SDU discard timer RbId=%d, Sdu->DiscardTimer = %x, State=%d
Line 1629: SDU Discard mui=%d, Token= 0x%x
Line 1671: TM Mode: SDU Discard SDU TtiCount - %d, Current TtiCount - %d, RbId - %d, SduIdentifier - %d
Line 1676: TM Mode: SDU Discard SDU TtiCount - %d, Current TtiCount - %d, RbId - %d, SduIdentifier - %d
Line 1688: urlc_SbDiscardSdusTtiCnt Purge all SDUs in the segmentation buffer in TM mode
Line 1816: Error: not supported Mode %d
Line 1837: urlc_SbStartTimerDiscardTimer: RbId %d, SduIdentifier %d, DiscardTimerId %x, TimerDiscardExp %d
