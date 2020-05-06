Line 354: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 395: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 507: [L1LC] Tune EARFCN : %d, Freq : %d
Line 603: [L1LC] Unknown SyncMode(%d)
Line 618: [4G_DRDS] Update AbnormalCheckTimer: %d(current) + %d(sync_t) -> %d [ms] due to SCG srch
Line 694: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d)
Line 703: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_SUB(%d)
Line 714: [L1LC] RSSISCAN RESULT: BAND(%d),EARFCN(%d),RXMODE(%d),RSSI_MAIN(%d),RSSI_SUB(%d)
Line 775: Invalid SrchMode:%d
Line 839: SearchConfiguredflag(0x%x)!!!
Line 847: Search Already Started by another Controller(SearchConfiguredflag:0x%02x)!!!
Line 875: [MTM: AFC PDM CAL] Skip Sync timer setting
Line 922: Disable Cdrx as handover is on-going
Line 947: Invalid pMsg->srchMode:%d
Line 1033: [%4d] SRCH_RESULT[%d] Sl_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
Line 1052: [%4d] SRCH_RESULT[%d] Sl_id(%3d) CFO[%d] (pos:%d) (cp:%d)
Line 1069: [%4d] SRCH_RESULT[%d] Cell_id(%3d) M0M1[%3d %3d] (pos:%d) (cp:%d)
Line 1106: (offset : %d serving_rtg_offset: %d, frame_position:%d)
Line 1138: (offset : %d serving_rtg_offset: %d, frame_position:%d)
Line 1166: (offset : %d str: %d, cinr:%d)
Line 1177: L1LC_ProcSyncDoneInd(no cell detection)
Line 1182: no cell detection
Line 1193:  SLAM DONE!!!(slam_cnt:%d str:%d)
Line 1203: L1LC_ProcSyncDoneInd(FS offset large)(offset : %d str: %d)
Line 1209:  repeater detection but serving not detected(init serving_m0m1_pwr:%d)
Line 1215:  repeater detection but srch_offset different(rpt_srch_diff:%d)
Line 1220:  repeater detection but repeater pwr lower(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
Line 1226:  repeater detection(offset:%d rpt_detect_cnt:%d)(rpt_srch_diff:%d)(rpt_m0m1_pwr:%d serving_m0m1_pwr:%d)
Line 1237:  SLAM START!!!(rpt_detect_cnt:%d)(cinr:%d)(slam_time_offset:%d rpt_srch_pos:%d)
Line 1239: (offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater detection)
Line 1250: L1LC_ProcSyncDoneInd(FS offset small)(str: %d)
Line 1252: (offset:%d str:%d rpt_srch_pos:%d)(slam_cnt:%d)(repeater no detection)
Line 1263: L1LC_ProcSyncDoneInd(serving cell is not detected)
Line 1265: repeater&serving cell no detection
Line 1445: SearchConfiguredflag(0x%02x)!!!
Line 1453: [RSTD] Ignore the Dummy Sync Results
Line 1464: search_result is NULL
Line 1470: Dummy Sync
Line 1481: [MTM: AFC PDM CAL] Skip ProcSyncDoneInd
Line 1517: Invalid syncResult.Num(%d)
Line 1561: Invalid syncResult.Num(%d)
Line 1619: SRCH DIV : ConnSrchCnt:%d
Line 1665: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 1678: Invalid gL1LC_MeasInfo.curMode(%d)
Line 1706: Invalid syncResult.Num(%d)
Line 1749: Pcell is not detected!!
Line 1772: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 1791: syncResult[%d] Num(%d)(%d)
Line 2065: Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
Line 2092: ProcSyncTimerExpired - gL1LC_SrchMode(%d), HALSC_SyncMode(%d), curMode(%d)
Line 2102: SearchConfiguredflag(0x%02x)!!!
Line 2113: L1LC_ProcSyncTimerExpired(Stop FS)
Line 2201: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 2207: Invalid gL1LC_MeasInfo.curMode(%d)
Line 2224: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 2338: Invalid mode(gL1LC_SrchMode:%d, gL1LC_MeasInfo.curMode:%d, HALSC_GetSyncMode()(%d)
Line 2418: MeasureConfiguredflag(0x%02x)!!!
Line 2434: Do not set IsDuringMeas
Line 2439: IsDuringMeas is set as TRUE
Line 2448: IsDuringMeas is set as FALSE 
Line 2492: measCnt is 0 (mode:%d, earfcn:%d, numOfCell:%d, measCnt:%d, nextMeasIndex:%d) - Enable(%d)
Line 2535: measCnt is 0 (earfcn:%d, numOfCell:%d)
Line 2556: Irat measure is ongoing(%d), prepared(%d) (IratMeasState: %d, %d, %d)
Line 2566: UMTS measure stop!
Line 2571: GSM measure stop!
Line 2590: Measure_Stop_Req is pending, wait measure result from other RAT
Line 2596: During Inter GAP, IratMeasState (%d, %d, %d)
Line 2633: L1LC_StopAll
Line 2658: L1LC_StopAll(Stop FS)
Line 2682: [DRX, 4GDS] AllStop case (reset IsDuringGsmMeas:%d)
Line 2755: Invalid NeighCellConfig(%d)
Line 2805: L1LC_CheckNrRscFlag: mode(%d), is_allowed(%d), MeasureConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
Line 2867: Invalid pMeasElem->mode(%d)
Line 2895: [PWR_OPT] SINR value (%d), SavedSINR(%d)
Line 2955: Start IntraMeas after STR stable duration
Line 3007: Do not start IntraMeas during STR stable duration
Line 3168: Invalid pMeasElem->mode(%d)
Line 3217: Start IntraMeas after STR stable duration
Line 3225: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 3244: [PWR_OPT] SINR value (%d), SavedSINR (%d)
Line 3288: Do not start IntraMeas during STR stable duration
Line 3295: IntraMeas was already started!
Line 3302: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 3407: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 3434: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 3456: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 3499: L1LC_StartMeasElemInConnDrx: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 3530: LTERRM_MEASMODE_UMTS_CGI_CELL_SEARCH is postponed because UMTS modem is ongoing!
Line 3544: Invalid pMeasElem->mode(%d)
Line 3587: Start IntraMeas after STR stable duration
Line 3603: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 3622: [PWR_OPT] SINR value (%d), SavedSINR (%d)
Line 3677: Do not start IntraMeas during STR stable duration
Line 3682: IntraMeas was already started!
Line 3688: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 3775: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 3804: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 3874: L1LC_StartMeasElemInConnNormal: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 3892: Invalid pMeasElem->mode(%d)
Line 3931: Start IntraMeas after STR stable duration
Line 3940: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 3959: [PWR_OPT] SINR value (%d), SavedSINR (%d)
Line 3990: nextGapBoundary(%d) is small. wait next time
Line 4018: gL1LC_MeasInfo.curMode(%d) is invalid!
Line 4026: Do not start IntraMeas during STR stable duration
Line 4053: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 4056: IntraMeas was already started!
Line 4096: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4121: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTRA_BOTH
Line 4137: Inter-freq and IRAT can not be triggered concurrently, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
Line 4144: GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET
Line 4178: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 4193: Inter-freq and IRAT can not be triggered concurrently, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), SearchConfiguredflag(0x%x)
Line 4200: GAP Stop!! nextGapBoundary <= GAP_READY_HW_OFFSET
Line 4216: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4239: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_INTER_BOTH
Line 4251: GAP Stop!! nextGapBoundary > GAP_READY_HW_OFFSET
Line 4274: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 4286: Irat meas is running, so SCell sync is delayed (curIratMode:%d)
Line 4313: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 4337: GAP Stop!! nextGapBoundary <= GAP_READY_HW_OFFSET
Line 4354: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4365: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 4377: Irat meas is running, so SCell meas is delayed (curIratMode:%d)
Line 4420: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4437: L1LC_StartMeasElemInGap: MEASMODE not changed to LTERRM_MEASMODE_SCELL_BOTH
Line 4464: Invalid pMeasElem->mode(%d)
Line 4496: [DEBUG] L1LC_ReleaseSearchMeasureResource: Search resource is under use by LTE for IRAT, Do not give resource to NR, SearchConfiguredflag(0x%x)
Line 4505: [L1LC] NR Search is pended as DR-DSDS is active gHALSC_SearchConfiguredflag(%d) gHALSC_MeasureConfiguredflag(%d)
Line 4528: [DEBUG] L1LC_ReleaseSearchMeasureResource: Measure resource is under use by LTE for IRAT, Do not give resource to NR, MeasureConfiguredflag(0x%x)
Line 4537: [L1LC] NR Meas is pended as DR-DSDS is active gHALSC_SearchConfiguredflag(%d) gHALSC_MeasureConfiguredflag(%d)
Line 4591: [DEBUG] L1LC_ReleaseSearchMeasureResource: mode(%d), resource(%d), status(SearchConfiguredflag:0x%02x, MeasureConfiguredflag:0x%02x)
Line 4630: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd: DR-DSDS is active, hence SCG measurement is started
Line 4695: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd (mode:%d, numOfCell:%d, earfcn:%d)
Line 4727: [DEBUG] L1LC_GetNextMeasElemFromResourceUpdateInd IRAT(mode:%d, numOfCell:%d, earfcn:%d)
Line 4760: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 4782: L1LC_GetNextMeasElemFromMeasDone(DEBUG) (prevMeasMode(%d), curMode(%d), measNrCnt(%d), measNrWrPtr(%d), measNrRdPtr(%d))
Line 4803: Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 4816: Add MeasElem(DeQueue) (measMode:%d, earfcn:%d, numOfCell:%d, gL1LC_IratNrMeasState:%d, measNrCnt:%d, measNrWrPtr:%d, measNrRdPtr:%d)
Line 4828: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 4841: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4854: IRAT measuure is ongoing, Do not start any measurement (prevMeasMode:%d, curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4867: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4887: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4906: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4927: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 4992: Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5002: Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5017: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 5040: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 5051: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5072: [DEBUG] L1LC_GetNextMeasElemFromMeasDone (mode:%d, numOfCell:%d, earfcn:%d)
Line 5081: [4G_DRDS] SCG cannot process next measelem (measmode : %d, PagingState : %d) RF will be requested at paging done
Line 5085: [4G_DRDS] SCG cannot process next measelem (measmode : %d, PagingState : %d) Request RF first
Line 5125: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5146: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5160: (gL1LC_IratUmtsMeasState(%d)
Line 5170: (L1LC_GetNextIratMeasElemFromInterSyncDone.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 5176: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5179: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5190: Gap is not finished (prevMeasMode:%d), curIratMode(%d)
Line 5218: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5261: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5290: Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5304: (L1LC_GetNextMeasElemFromGapStart.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 5310: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5314: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5324: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5343: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5384: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5414: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5433: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5453: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5493: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5514: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5528: (gL1LC_IratUmtsMeasState(%d)
Line 5538: (L1LC_GetNextIratMeasElemFromGapEnd.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 5544: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5548: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5563: Inter Synch is running (curMode:%d, curIratMode:%d)
Line 5593: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5635: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5656: Irat Meas is suspended (gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5723: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5743: [PWR_OPT] Current:%d, Intra_meas:Enabled, Is_Drx_check_ind:%d, Is_Conn_Drx_Wakeup_onging:%d
Line 5748: No need to trigger next measurement because some measurement is ongoing (not a wakeup case), curMode(%d)
Line 5756: (L1LC_GetNextMeasElemFromMeasReq) Meas skip due to Short mode 
Line 5771: IRAT Measure/Sync is running (curMode:%d, curIratMode:%d)
Line 5787: Inter Meas is suspended (MeasMode:%d, gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5797: Irat Meas is suspended (MeasMode:%d, gL1LC_WaitingIratMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5812: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 5852: nextDmtcBoundary not checked (meas_elem : %d, numOfCell:%d, curMode:%d, curIratMode:%d)
Line 5858: Scell sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5868: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d)
Line 5880: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d)
Line 5895: Intra sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5907: nextGapBoundary(%d) is small.. (curMode:%d, curIratMode:%d)
Line 5918: nextGapBoundary(%d) is small.. (numOfCell:%d, curMode:%d, curIratMode:%d)
Line 5935: NR IRAT measure can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5949: Inter Meas is suspended (gL1LC_WaitingInterMeasDone:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5964: (gL1LC_IratUmtsMeasState(%d)
Line 5975: (L1LC_GetNextMeasElemFromMeasReq.PAUSE REQ pending. Do not start IRAT simultaneous process 
Line 5982: (GAP Intr was already set. Don't do SIMULTANEOUS PROCESS. (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5987: IRAT SIMULTANEOUS PROCESS is possible(curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 5999: Inter sync can't be scheduled (curMode:%d, curIratMode:%d, lastIratMode:%d)
Line 6009: [RSTD] Gap Available Immediately (curMode:%d, earfcn:%d), gL1LC_RstdDB.MeasTriggerOffset[%d]
Line 6022: Invalid gL1LC_MeasInfo.config(%d)
Line 6028: (L1LC_GetNextMeasElemFromMeasReq) Selected MeasElem: %d 
Line 6046: [PWR_OPT] Current:%d, Next:%d, Intra_meas:Enabled, Is_Drx_check_ind:%d, Is_Conn_Drx_Wakeup_onging:%d
Line 6050: [PWR_OPT] No need to trigger next measurement because some measurement is ongoing (not a wakeup case)
Line 6061: [PWR_OPT] Next measure element(%d): INTRA_MEAS(9), INTRA_SYNC(8) (Wakeup case)
Line 6066: [PWR_OPT] No need to trigger another measurement(%d), except for INTRA_MEAS and INTRA_SYNC (Wakeup case). Set IsMeasReqPending TRUE
Line 6120: Set IsMeasReqPending = TRUE as CheckFeasibility failed, curMode(%d), curIratMode(%d), SearchConfiguredflag(0x%x), MeasureConfiguredflag(0x%x)
Line 6155: L1LC_StartMeasElem(measConfig:%d, mode:%d, measCnt:%d, nextMeasIndex:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
Line 6160: L1LC_StartMeasElem => Skip to start NR measurement & return(measmode:%d)
Line 6191: Invalid gL1LC_MeasInfo.config(%d)
Line 6220: [4G_DRDS] (Check_Feasibility) During 4G_DRDS(eDV_active : %d, eDV_available : %d)
Line 6223: [4G_DRDS] (Check_Feasibility) During 4G_DRDS, MCG can't start meas!
Line 6230: [4G_DRDS] (Check_Feasibility) Meas (%d) of MCG Stack is not finished yet!!
Line 6235: [4G_DRDS] (Check_Feasibility) start intra meas! 
Line 6240: [4G_DRDS] (Check_Feasibility) Waiting for pagingrcvintr, SCG can't start non-intra meas!
Line 6252: [LTE_DSDS] (Check_Feasibility)Initial Search/ measure hence not doing pause even Early timer expired
Line 6259: PauseFlag (%d),  IsWaitResponse (%d), HandoverStartSig (%d)
Line 6278: Pauseflag is set as TRUE, but Meas (%d) is ongoing, therefore, do not pend Meas
Line 6283: Do not start Meas (%d) due to PauseFlag (%d)/ IsWaitResponse(%d) 
Line 6300: Do not start Search (%d) due to PauseFlag (%d)/ IsWaitResponse(%d)
Line 6322: IRAT MeasMode(%d) feasibility will be checked later!
Line 6327: Unknown MeasMode(%d)
Line 6401: Start MeasElem (%d) after resync
Line 6426: Do not start Meas (%d) due to nearby e.p.t
Line 6441: Do not start InterMeas due to nearby e.p.t
Line 6456: Do not start InterMeas due to nearby e.p.t
Line 6480: Do not start ScellMeas due to nearby e.p.t
Line 6500: Do not start IntraSync due to nearby e.p.t
Line 6516: Do not start IntraSync due to nearby e.p.t
Line 6532: Do not start IntraSync due to nearby e.p.t
Line 6548: Do not start IntraSync due to nearby e.p.t
Line 6571: Do not start InterSync due to nearby e.p.t
Line 6588: Do not start InterSync due to nearby e.p.t
Line 6618: Do not start ScellSync due to nearby e.p.t
Line 6630: Unknown MeasMode(%d)
Line 6651: Do not start InterMeas due to nearby paging timing of current stack
Line 6676: Do not start InterSync due to nearby paging timing of current stack
Line 6744: Unknown pMeasElem->mode(%d)
Line 6776: GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
Line 6804: GapLevelState(%d) AgcOvrAnt0(%d) AgcOvrAnt1(%d) PschPwr0(%d) PschPwr1(%d) PschPwr2(%d), SrchResultValid(%d)
Line 6853: L1LC_ProcMeasureReq during power down state
Line 6870: pCurMeasElem is NULL (pMsg->measMode:%d)
Line 6887: (DEBUG) (pMsg->measMode(%d), gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_NR_SYNC].isEnable(%d), gL1LC_MeasInfo.measElem[LTERRM_MEASMODE_NR_MEAS].isEnable(%d)
Line 6933: Add MeasElem(InQueue) (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Line 6952: Add MeasElem(InQueue) (numOfCell#%d => ssb_index(%d), timing_offset(%d), rxbeam_index(%d))
Line 6965: Add MeasElem(InQueue) (measMode(%d), subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Line 6968: Add MeasElem(InQueue) (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x), measNrCnt(%d), measNrWrPtr(%d), measNrRdPtr(%d))
Line 6988: Same measInfo is already exist (curMode:%d, curIratMode:%d, measMode:%d, arfcn:%d)
Line 7012: SCC configuration check for measure using GAP(%d) (earfcn:%d %d)
Line 7022: GAP configured, SCC measure using GAP (earfcn:%d)
Line 7061: Not supported band for SCC(earfcn:%d)
Line 7099: Wrong numOfCell:(%d) -> Skip GSM ALL MEAS
Line 7141: Not expected measMode(%d) - Turn off ALL MEAS
Line 7152: Triggered measure needs [%d ms] - but DRX T[%d ms] duration is not enough
Line 7185: short of Sparetime(%d) - spareTime(:%d, withOffset -%d) < minTrigTime(:%d)
Line 7195: Trigger measMode(%d) for ALL MEAS - spareTime(:%d, withOffset -%d) > minTrigTime(:%d)
Line 7201: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d, dmtc:%d, laa:%d, csi-rs:%d)
Line 7233: [DMTC] Disable Current Measurement for DMTC measure: curr_measMode(%d)
Line 7243: [DMTC] Disable Current Search for DMTC measure: curr_measMode(%d)
Line 7275: Add MeasElem (subcarrierSpacing(%d), periodicity(%d), smtc.duration(%d), smtc.offset(%d), smtc_included(%d))
Line 7278: Add MeasElem (NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x))
Line 7298: Add MeasElem (numOfCell#%d => measMode(%d) earfcn(%d) cell_Id(%d) framePos from Serving Cell Timing(%d))
Line 7336: Add MeasElem (numOfCell#%d => ssb_index(%d), timing_offset(%d), rxbeam_index(%d))
Line 7387: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d, numOfInfCell: %d)
Line 7394: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7400: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7417: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7427: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7434: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7440: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7450: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7457: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7463: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7473: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7480: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7485: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7495: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7502: Add MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7508: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7529: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 7569: Delete MeasElem (measMode:%d, earfcn:%d, measNum:%d)
Line 7627: MeasureConfiguredflag(0x%02x)!!!
Line 7692: MeasDoneInd - gL1LC_MeasInfo.curMode(%d), curIratMode(%d)
Line 7696: Invalid gL1LC_MeasInfo.curMode(%d)
Line 7704: IRAT Measurement done
Line 7750: Invalid measCnt(%d)
Line 7759: pCurMeasElem->measCnt:%d, pCurMeasElem->nextMeasIndex:%d, pCurMeasElem->numOfCell:%d
Line 7770: MEAS_CNF is delayed because remaining Cells for inter frequency(%d) should be measured.
Line 7870: [DMTC] CNT(%d) AGC0(%d) AGC1(%d)!!!
Line 7879: Measure[%4d]: cell id(%d) is removed!!!
Line 7951: Invalid RSRQ(%d)
Line 7999: Invalid RSRP(%d,%d,%d,%d)
Line 8006: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8052: Set default value (earfcn:%d, Cell ID:%d, RSRP:-204dBm, RSRQ:-40dBm for sub-antenna) due to invalid sub antenna
Line 8063: Abnormal intra-measurement case (AGC: 127)
Line 8207: ProcMeasTimerExpired - curMode(%d)
Line 8216: MeasureConfiguredflag(0x%02x)!!!
Line 8246: Invalid gL1LC_MeasInfo.curMode(%d)
Line 8320: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8334: [MTM] ProcMeasTimerExpired --> Skip sending Measure CNF!!!
Line 8383: ProcIratTimerExpired - curIratMode(%d)
Line 8412: ret_val!!
Line 8436: RF parameter not saved. Skip Return to LTE
Line 8449: [DRX, 4GDS] IratMeasTimer expired case (reset IsDuringGsmMeas:%d)
Line 8593: NCELL PBCH decoding is NOT used ANYMORE!!!
Line 8603: Not found available CC for earfcn(%d)
Line 8667: [A-GAP]: PBCH of CSG Cell Decoded Successfully
Line 8771: [4G_DRDS] Retrigger 4G_DRDS!
Line 8861: [4G_DRDS] Retrigger wakeupintr which was ignored before!
Line 9164: [RSTD] No Serving Cell Found in Assistance Data
Line 9179: Handover ul_freq(%d) time_diff(%d) beforeSFN(%d) afterSFN(%d)
Line 9219: Disable Cdrx as handover is on-going
Line 9256: (L1LC_ProcCellChangeReq)HALSC_SavedAfcValue:%d
Line 9301: Time diff(%d), old SFN(%d) restored SFN(%d)
Line 9363: RSRP(PC) = %d, gHALSC_PathLoss = %d
Line 9455: [RLM] OutSyncCnt (%d)
Line 9468: [LTE L1LC DSDS] RF Unavailable!!!!OOS Indication from L1 Ignored!!!
Line 9485: [RLM] InSyncCnt (%d)
Line 9492: [RLM] RLF Recovery
Line 9529: [RLM] RLMonitorCnt Reset
Line 9560: [RLM] RL result error
Line 9642: [LTE_L1LC] RFBand of SCG STACK should be removed
Line 9659: gRACHflag is initialized
Line 9695: [RLM] N310(%d), N311(%d)
Line 9707: IDLE -> Conn
Line 9716: IDLE -> Conn
Line 9810: ERROR: curUeState(%d) invalid
Line 9829: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 9838: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 9865: [Debug] Is_Conn_Drx_Wakeup_onging = %d
Line 9905: L1LC_ProcUeStateNtf(IPC_ACTION_ID_PHY_RX_SIB_PDSCH)Pb:%d
Line 9927: [RLM] N310(%d), N311(%d)
Line 9955: [Debug] Is_Drx_check_ind = %d Is_Conn_Drx_Wakeup_onging = %d
Line 10033: Idle -> UE_RACHING, Stop Measurement
Line 10049: Disable SIB-DRX when RACH procedure is started
Line 10142: ERROR: Invalid UE State in NTF
Line 10167: L1LC_ProcL1txTxReq: TxReqType(%d), CurUeState(%d),CurMode(%d),CurIratMode(%d)
Line 10200: [IDLE state] curIratMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
Line 10207: [IDLE state] curMode: LTERRM_MEASMODE_NONE: 
Line 10216: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10236: [IDLE state] curMode:INIT Measure, BPLMN Measure or CGI Measure(CurMode:%d)
Line 10246: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10262: [IDLE state] curMode:INTRA Freq Srch/meas
Line 10272: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10292: [IDLE state] curMode: INTER:Pending L1LC_L1TX_TX_CNF
Line 10303: Current State:DRX(Idle): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10322: UnExpected gL1LC_MeasInfo.curMode(%D)
Line 10333: (CONN State) SONANR: Pending L1LC_L1TX_TX_CNF
Line 10353: (CONN state) curMode: IRAT(UMTS/GSM):Pending L1LC_L1TX_TX_CNF
Line 10366: (CONN state) RACH (curMode: LTERRM_MEASMODE_NONE)
Line 10376: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10393: (CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
Line 10403: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10422: (CONN state) curMode:NONE or NORMAL:Send L1LC_L1TX_TX_CNF directly without L1LC-RRM interface
Line 10432: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10452: (CONN state) curMode: INTER:Pending L1LC_L1TX_TX_CNF
Line 10463: Current State:DRX(Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10470: (CONN state) curMode: INTER:Send L1LC_L1TX_TX_CNF
Line 10484: UnExpected gL1LC_MeasInfo.curMode(%D)
Line 10492: SET gRand_Acc_Tx_Cnf_Nop to TRUE
Line 10504: (CONN State) SONANR: Pending L1LC_L1TX_TX_CNF
Line 10511: (TxType:SR) Send L1LC_SendL1txTxCnf to L1TX without any action
Line 10524: Current State:DRX(Idle or Connected): Wakeup Modem and Send L1LC_L1TX_TX_CNF
Line 10537: Invalid TxReqType:%d
Line 10554: L1LC_ProcL2txTxReq
Line 10559: gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 10572: (CONN State) SONANR: Pending L1LC_L2TX_TX_CNF
Line 10576: Current State:DRX(Idle or Connected): Wakeup Modem and Send L1LC_L2TX_TX_CNF
Line 10600: L1LC_ProcL2rxRxReq
Line 10606: gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 10615: Current State:DRX(Idle or Connected): Wakeup Modem and Send L1LC_L2TX_TX_CNF
Line 10644: gRACHflag is initialized
Line 10651: Invalid Msg(L1TX_L1LC_DONE_IND)from L1TX(TxReqType:%d)
Line 10705: No Need to update SI info again
Line 10716: L1LC_UpdateSibSchedulingInfo: valid[%d] sfn[%d] tti[%d] periodicity[%d] si_bitmap[0x%x -> 0x%x]
Line 10864: Timer started for SIB12:  Occassion[%d], Updated SIB Window [%d]
Line 10869: Timer started for other SIBs:  Occassion[%d], Updated SIB Window[%d]
Line 10875: Timer started for %d ms
Line 10880: SIB occassion is nearby, take immediate action
Line 10892: No SIB scheduled: Invalid scenario
Line 10929: Sib_index[%d] siPeriodicity[%d] current_sfn_tti[%d] sfn_tti[%d] siWindow[%d]
Line 10933: temp_sfn_tti[%d]
Line 10944: 1: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d 
Line 10960: 2: Next SIB Occassion: Index : %d, Occassion: %d, Sib Window : %d
Line 10985: Next SIB Occassion: Index : %d, Occassion: %d, Updated Sib Window : %d
Line 11013: Wakeup Modem and Execute L1LC_ProcSiReadReq
Line 11093: SI update triggered by paging (ModPeriod: %d)
Line 11100: SI Update Timer Start (Current SFN : %d, si_update_sfn : %d, timer : %d)
Line 11116: Improper value of update_immediate
Line 11197: Improper value of update_immediate
Line 11310: is_filled[%d] siPeriodicity[%d] sibBitmap[0x%x]
Line 11381: Process RRM_L1LC_MBSFN_SI_START_READ_REQ earfcn[%d] cc[%d]
Line 11385: Invalid cc[%d]
Line 11395: Wakeup Modem and Execute L1LC_ProcSiReadReq
Line 11488: Process RRM_L1LC_MBSFN_SI_STOP_READ_REQ earfcn[%d] cc[%d]
Line 11495: Invalid cc[%d]
Line 11535: ProcPendingForGap %d ms(offset:2 ms, preTimeInMs:%d ms)
Line 11536: L1LC pending <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
Line 11561: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> L1LC resume
Line 11562: ProcPendingForGap finish(curTimeInMs:%d ms)
Line 11568: ProcPendingForGap IratMeasTmr %d ms delay
Line 11598: Invalid gL1lc_BarredList.numOfbarredCell(%d)
Line 11606: Match BarredCell[%d] earfcn:%d, cell id:%d
Line 11613: Invalid gL1lc_BarredList.numOfbarredFreq(%d)
Line 11621: Match BarredFreq[%d] earfcn:%d
Line 11629: Invalid gL1lc_BarredList.numOfUnsuitableFreq(%d)
Line 11637: Match Unsuitable Freq[%d] earfcn:%d
Line 11712: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 11764: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 11787: measMode(%d) is not related with the scheduling for LTE search!!!
Line 11817: 3G IRAT response awaited.(gL1LC_IratUmtsMeasState=%d)
Line 11822: No 3G IRAT response pending
Line 11837: 2G IRAT response awaited.(gL1LC_IratGsmMeasState=%d)
Line 11847: 2G IRAT response awaited.(gL1LC_IratGsmVerifyState=%d)
Line 11852: No 2G IRAT response pending
Line 11863: CDMA IRAT response awaited.(gL1LC_IratCdmaMeasState=%d)
Line 11868: No CDMA IRAT response pending
Line 11932: NR response awaited.(gL1LC_IratNrMeasState=%d)
Line 11950: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 11970: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 12013: L1LC_CheckMeasPending: MeasMode(%d)
Line 12041: Tx Path Recovery ON(Count(%d))
Line 12086: TM1 -> Change to 1Rx
Line 12096: gL1LC_DataActivityStatus(%d), l2_data_inact(%d), gL1LC_SinrStatus(%d), rx mode(%d)
Line 12106: ProcRxModeChange: Unknown event type(%d)
Line 12121: [EDRDS] ProcRxModeChange: rx_mode(%d)
Line 12140: ProcRxModeChange: cc(%d), type(%d), rx_mode(%x, %x)
Line 12162: L1LC_ProcSetSfninfoNtf: time(%d), Sfn(%d)
Line 12210: [L1LC] L1LC_ReturnToLteMeasStop
