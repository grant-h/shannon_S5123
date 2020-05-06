Line 357: pTempRBSchedInfo==NULL !!!
Line 363: LogCH using this LCID has been already setup !!!
Line 431: pTempRBSchedInfo==NULL !!!
Line 454: No RB with this LCID: %d
Line 460: pal_ListIsEmpty !!!
Line 491: pTempRBSchedInfo==NULL !!!
Line 516: pTempRBSchedInfo==NULL !!!
Line 539: No RB with this LCID: %d
Line 561: Searching Error in RB info DB !!!
Line 596: RB Setup Info malloc failed !!!
Line 681: RB Reconfig Info malloc failed !!!
Line 700: RB Reconfig Error: No RB has been established !!!
Line 803: RB Release Error: No RB has been established !!!!
Line 953: pTempRBSchedInfo==NULL !!!
Line 985: equalPriGroupInx error[%d] !!!
Line 1014: equalPriGroupInx error[%d] !!!
Line 1070: MacEntity[%d]: MAC Timer : PBSR(%d), RTBSR(%d), TATMR(%d)
Line 1084: MacEntity[%d]: PHR configured & triggered : Periodic PHR(%d), Prohibit PHR(%d), dl-pathloss(%d)
Line 1095: MacEntity[%d]: PHR released
Line 1138: MacEntity[%d]: EBSR(%d), EPHR(%d), sCellDeactivationTimer(%d)
Line 1153: MacEntity[%d]: DCPHR(%d), phrModeOtherCG(%d), endcState(%d), nrSpCellIndex(%d)
Line 1200: sTAG (ID:%d) is released, but sCell(s) (bitmap:%d) still belong to the sTAG!!! Their sTAG need to be handled properly if it is temporal situation.
Line 1236: PUCCH SR cancelled(RA-SR is on-going)
Line 1246: PUCCH SR (sleeping)
Line 1253: PUCCH SR (awake)
Line 1270: Trigger RA-SR: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
Line 1276: SR triggered already!!: MacEntity[%d], gDSR_Configured(%d) gCurrentMACStatus(%d)
Line 1321: MacEntity[%d]: SR not triggered or SR config(%d)/UL sync status(%d) changed
Line 1327: MacEntity[%d]: SR canceled
Line 1420: MacEntity[%d]: BSR Reserved LONG -> SHORT due to Grant(%d)
Line 1681: info->bufferedRbCnt == 0!!!
Line 1696: info->lcgCnt == 0!!!
Line 2185: gMsg3Info.size==0 at the L2LTXMAC_ScheduleCCCH !!!
Line 2266: pTempRBSchedInfo==NULL!!!
Line 2293: last 1RB rescheduling. buffered RB does not exist!!!
Line 2302: gpSchedList[%d] is empty!!!
Line 2322: BSR cancellation for 1RB(unreserved, This RB is behind the last RB)
Line 2333: BSR not canceled (new last RB is scheduled, but bsrReservedSize is not used)
Line 2341: BSR not caceled (bsrReservedSize is used, but buffer is not empty)
Line 2352: change new last scheduled RB (grant reserve including LF)
Line 2358: keep last scheduled RB
Line 2364: change new last scheduled RB (grant reserve including BSR+LF)
Line 2381: BSR not caceled (reserved grant 0, given grant:%d, remained buffer:%d)
Line 2419: BSR not caceled (bsrReservedSize is not used, given grant:%d, remained buffer:%d)
Line 2425: BSR not caceled (buffer is not empty with bsrReservedSize)
Line 2461: reschedule for status pdu (reserved 1RB case)
Line 2481: BSR not caceled
Line 2635: pTempRBSchedInfo==NULL!!!
Line 2832: Long BSR + RLC Status ACK Only Case
Line 2861: BSR cancellation for 2RB(both unreserved)
Line 2899: BSR not caceled, #2 RB buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 2964: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 3047: BSR cancellation for 2RB(1 reserved, 1 unreserved)
Line 3085: BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 3111: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 3179: BSR cancellation for 2RB(1 unreserved, 1 reserved)
Line 3219: BSR not caceled, #2 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 3255: BSR not caceled, #1 RB[%d] buffer is not empty(reserved grant:%d, remained buffer:%d)
Line 3459: reschedule for status pdu (more than 2 reserved RB)
Line 3471: pTempRBSchedInfo==NULL!!!
Line 3543: BSR not caceled
Line 3636: BSR cancel for status pdu
Line 3646: BSR not caceled
Line 3726: schedResult.bufferSize[%d] < schedResult.remainedStatus[%d] 
Line 3739: tempBufferSize[%d] < schedResult.bufferSize[%d] 
Line 3794: RLC reserved 0, Received Grant(%d)
Line 3936: pTempRBSchedInfo==NULL!!!
Line 3976: tempBufferSize[%d] < schedResult.bufferSize[%d]
Line 4013: pTempRBSchedInfo==NULL!!!
Line 4052: tempBufferSize[%d] < schedResult.bufferSize[%d] !!!
Line 4138: pTempRBSchedInfo==NULL!!!
Line 4164: schedResult.bufferSize < schedResult.remainedStatus[%d] !!!
Line 4217: pTempRBSchedInfo==NULL!!!
Line 4333: pTempRBSchedInfo==NULL!!!
Line 4429: PHR triggered by PCell pathloss: current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
Line 4453: PHR triggered by an SCell pathloss (sCellIndex:%d): current pathloss(%d[0.01dB]), reported pathloss(%d[0.01dB]), dl-PathlossChange(%d[0.01dB])
Line 4477: PHR: Stack[%d], SCell pathloss change update (sCellIndex:%d) of pathloss:%d[0.01dB]
Line 4486: PHR: Stack[%d], PCell pathloss change update of pathloss:%d[0.01dB]
Line 4595: pTempRBSchedInfo==NULL!!!
Line 4666: grant size<MIN_UL_GRANT_SIZE !!!
Line 4672: msg3 grant_size>MAX_TB_SIZE !!!
Line 4679: Stack[%d], MacEntity[%d]: UL Grant, but UL UNSYNC!!!
Line 4687: MacEntity[%d]: L2LTXMAC_ULScheduling, but gL1TxRxCommonDB.RACause is %d
Line 4694: MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
Line 4701: MacEntity[%d]: received NORMAL_GRANT, but gL1TxRxCommonDB.RACause is %d
Line 4710: |UE -> eNB|  MSG3 Entity[%d] %d, %d, %d M3_GrantSize: %d
Line 4716: M3 Grant[%d] too small
Line 4733: Entity[%d]: init grant(%d), current grant(%d)
Line 4770: Entity[%d]: init grant(%d), current grant(%d)
Line 4820: Entity[%d]: UL SPS grant configured, implicitReleaseAfter(%d))
Line 4972: gSchedListPrev is not NULL
Line 4979: gSchedListPrev Remove LCID %d %d
Line 5011: gSchedListPrev Insert LCID[%d] RBID[%d] QCnt[%d]
Line 5578: Element==NULL !!
Line 5606: SCG Element==NULL !!
Line 5641: gpSchedList SCG Element==NULL !!
Line 5727: pTempRBSchedInfo==NULL !!
Line 5747: Retx BSR Timer expired & regular BSR triggered
Line 5762: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 5828: Periodic PHR Timer expired & Preiodic PHR triggered
Line 5857: Prohibit PHR Timer Expired
Line 5874: Logical Channel SR Prohibit Timer[%d] Expired!!! (0:MCG, 1:SCG)
Line 5901: L2LTXMAC_VOICEBitRateQuery_ProhibitTimerExpired[%d] Expired!!!
Line 5928: StackId %d, L2LTXMAC_VIDEOBitRateQuery_ProhibitTimerExpired[%d] Expired!!!
Line 6234: L2LTXMAC_DisplaySRRequestInfo : ST/ENTITY[%d/%d], gBSRTriggered[%d], gCurrentMACStatus[%d], SrTxCnfWait[%d], RACause[%d]
