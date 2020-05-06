Line 200: S_IntraSearch value exists!  S_ServingCell > S_IntraSearch
Line 203: S_IntraSearchP_Ind(%d) Srxlev(%d.%ddB) S_IntraSearchP(%ddB)
Line 209: S_IntraSearchQ_Ind(%d) Squal(%d.%ddB) S_IntraSearchQ(%ddB) 
Line 218: S_RSRP(%d.%ddB) S_RSRQ(%d.%ddB) q_RxlevMin(%ddB) q_QualMin(%ddB) pMax(%ddBm)
Line 223: Check Intra Search: run(%d) not-run(%d)
Line 254: Srxlev(%d.%ddB) S_NonIntraSearchP_Ind(%d) S_NonIntraSearchP(%ddB) LTERRM_S_NONINTRASEARCH_OFFSET(%ddB)
Line 260: Squal(%d.%ddB) S_NonIntraSearchQ_Ind(%d) S_NonIntraSearchQ(%ddB)
Line 271: S_NonIntraSearch value exists!  S_ServingCell > S_NonIntraSearch
Line 278: S_RSRP(%d.%ddB) S_RSRQ(%d.%ddB) q_RxlevMin(%ddB) q_QualMin(%ddB) pMax(%ddBm)
Line 283: However S_CINR(%d) is too low !! Try Inter/I-RAT measurement regardless of Snonintrasearch condition
Line 292: Check Non-intra search: run(%d) not-run(%d)
Line 327: LteRrmIdle_CheckThreshLowerInterFreq(Srxlev_Serv:%d.%ddB, Squal_Serv:%d.%ddB, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB, SServingLowOffset:%ddB)
Line 483: HighPriority Cell(%d): HP_meas_cnt(%d) > 3+ Max_HP_MeasCnt(%d)=Treselection(%d)/IdleMeasPeriod(%d ms): Don't measure again
Line 509: HighPriority Cell(%d): Continuous_HP_meas_cnt(%d)<= 3+Max_HP_MeasCnt(%d)
Line 599: WARNING: NOT Supported DL_EARFCN %d!!!
Line 684: WARNING: NOT Supported DL_EARFCN %d!!!
Line 770: - threshSservingLow[%d] cinr[%d]
Line 779: WARNING:NOT Supported DL_EARFCN %d!!!
Line 902: measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
Line 932: IntraFreq == NULL
Line 963: CheckMeasCycle: IntraFreq Search
Line 971: srchCycle set to (%d) (max cinr:%d)
Line 976: srchCycle set to (%d) (max cinr:%d)
Line 1003: CheckMeasCycle: IntraFreq Measure
Line 1021: ALL MEAS cycle - Intra-Freq bFirstCycle(%d)
Line 1028: MeasOnly(%d) - cinr(%d) srchTriggered(%d)
Line 1033: SearchOnly(%d) - measTriggered(%d)
Line 1043: IntraFreq Measure will start after search
Line 1076: IntraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1083: IntraFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1089: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1114: InterFreq(HIGH) is Empty
Line 1121: High Priority InterFreq is Empty
Line 1126: CheckMeasCycle: High InterFreq Search
Line 1135: CheckMeasCycle: High InterFreq Measure
Line 1153: pCurInterFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1157: LTERRM.Meas.IdleScheduleInfo.pCurInterFreq == NULL
Line 1178: Skip IdleAllMeas in higher inter
Line 1182: ALL MEAS cycle - High-Inter(%d) bFirstCycle(%d)
Line 1208: HighInterFreqMeas(%d) Already measured at current DRX cycle: Skip measurement
Line 1214: HighInterFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1224: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1250: UtraFreq(HIGH) is Empty
Line 1257: High Priority Utra Freq is Empty
Line 1262: CheckMeasCycle: High Utra Search
Line 1271: CheckMeasCycle: High Utra Measure
Line 1289: pCurUtraFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1293: LTERRM.Meas.IdleScheduleInfo.pCurUtraFreq == NULL
Line 1314: Skip IdleAllMeas in higher UTRAN
Line 1318: ALL MEAS cycle - High-Utra(%d) bFirstCycle(%d)
Line 1345: HighUtraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1351: HighUtraFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1361: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1387: GeranFreq(HIGH) is Empty
Line 1416: CheckMeasCycle: High Geran Measure(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 1424: CheckMeasCycle: High Geran Verify(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 1442: pCurGeranFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 1446: LTERRM.Meas.IdleScheduleInfo.pCurGeranFreq == NULL
Line 1461: Skip IdleAllMeas in higher GERAN
Line 1465: ALL MEAS cycle - High-Geran(%d) bFirstCycle(%d)
Line 1493: HighGeranFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 1499: HighGeranFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1510: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1532: CdmaSystemTimeFlag(%d)0 is not valid, Not schedule CDMA meas.
Line 1545: CdmaFreq(HIGH) is Empty
Line 1559: High Priority Cdma Freq is Empty
Line 1564: CheckMeasCycle: High Cdma Measure
Line 1581: pCurCdmaFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 1585: IdleScheduleInfo.pCurCdmaFreq == NULL
Line 1598: Skip IdleAllMeas in higher CDMA
Line 1602: ALL MEAS cycle - High-Cdma(%d) bFirstCycle(%d)
Line 1620: HighCdmaFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 1626: HighCdmaFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1637: Mode(%d) - measTriggered(%d)
Line 1660: pNrFreq(HIGH) is Empty
Line 1667: High Priority NrFreq is Empty
Line 1672: CheckMeasCycle: High NrFreq Search(current total count:%d)
Line 1676: CheckMeasCycle: High NrFreq Measure(current total count:%d)
Line 1695: Skip IdleAllMeas in higher NR
Line 1699: ALL MEAS cycle - High-NR(%d) bFirstCycle(%d)
Line 1725: HighNrFreqMeas(%d) Already measured at current DRX cycle: Skip measurement
Line 1731: HighNrFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 1736: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1761: InterFreq(LOW) is Empty
Line 1765: Highest Ranking Start
Line 1771: LteRrmIdle_CheckInterFreqMeas
Line 1780: CheckMeasCycle: InterFreq Search
Line 1786: srchCycle set to IdleMeasPeriod(%d)*2
Line 1809: CheckMeasCycle: InterFreq Measure
Line 1828: pCurInterFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 1832: IdleScheduleInfo.pCurInterFreq == NULL
Line 1853: Skip IdleAllMeas in inter
Line 1857: ALL MEAS cycle - Inter-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 1864: Inter Freq Measure will start after search
Line 1891: InterFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 1897: InterFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 1902: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 1929: UtraFreq(LOW) is Empty
Line 1933: LteRrmIdle_CheckUtraFreqMeas
Line 1947: CheckMeasCycle: Utra Search
Line 1979: CheckMeasCycle: Utra Measure
Line 1998: pCurUtraFreq->earfcn(%d), SrchAllMeasDone(%d), MeasAllMeasDone(%d)
Line 2002: LTERRM.Meas.IdleScheduleInfo.pCurUtraFreq == NULL
Line 2023: Skip IdleAllMeas in UTRAN
Line 2027: ALL MEAS cycle - Utra-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2034: Utra Freq Measure will start after search
Line 2062: UtraFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2068: UtraFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2073: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 2099: GeranFreq(LOW) is Empty
Line 2103: LteRrmIdle_CheckGeranFreqMeas
Line 2134: CheckMeasCycle: Geran Measure(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 2141: CheckMeasCycle: Geran Verify(cycle:%d, freqNum:%d, conversion_cycle:%d)
Line 2160: pCurGeranFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 2164: IdleSchedule.pCurGeranFreq == NULL
Line 2179: Skip IdleAllMeas in GERAN
Line 2183: ALL MEAS cycle - Geran-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2209: GeranFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2215: GeranFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2220: Mode(%d) - Measure_Trig(%d), Verify_Trig(%d)
Line 2242: CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
Line 2251: CdmaFreq(LOW) is Empty
Line 2258: LteRrmIdle_CheckCdmaFreqMeas
Line 2266: CheckMeasCycle: Cdma Measure
Line 2285: pCurCdmaFreq->earfcn(%d), MeasAllMeasDone(%d)
Line 2289: IdleSchedule.pCurCdmaFreq == NULL
Line 2303: Skip IdleAllMeas in CDMA
Line 2307: ALL MEAS cycle - Cdma-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2322: CdmaFreqMeas(%d) Already triggered during current DRX cycle: Skip measurement
Line 2327: CdmaFreqMeas(%d) for Reselection scheduled: LastMeasFreq(%d), LastMeasTime(%d), curTimeMs(%d)
Line 2332: Mode(%d) - measTriggered(%d)
Line 2356: NrFreq(LOW) is Empty
Line 2360: LteRrmIdle_CheckNrFreqMeas
Line 2369: CheckMeasCycle: NrFreq Search(current total count:%d)
Line 2387: CheckMeasCycle: NrFreq Measure(current total count:%d)
Line 2406: Skip IdleAllMeas in NR
Line 2410: ALL MEAS cycle - NR-Freq(%d) bFirstCycle(%d) TrigEqualLowPrioAllMeas(%d)
Line 2417: Nr Freq Measure will start after search
Line 2436: NrFreqMeas(%d) Already triggered at current DRX cycle: Skip measurement
Line 2442: NrFreqMeas(%d) for Reselection scheduled: LastMeasTime(%d), curTimeMs(%d)
Line 2447: Mode(%d) - srchTriggered(%d), measTriggered(%d)
Line 2513: curMeasType is not idle. other measurement(%d) is running...
Line 2522: Start Measurement: Serving Freq (earfcn:%d)
Line 2544: SCellFreq is NULL for MTM
Line 2557: SecondaryCell is NULL for MTM
Line 2626: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 2654: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 2659: Start Measurement: Intra Frequency (earfcn:%d, mode:%d)
Line 2681: MeasMode is invalid(%d)
Line 2689: measMode=%d, num_of_meas_cell = %d
Line 2702: SCellFreq is NULL for MTM
Line 2714: SecondaryCell is NULL for MTM
Line 2786: IdleScheduleInfo.pCurSrchHighInterFreq NULL
Line 2825: IdleSchedule.pCurMeasHighInterFreq NULL
Line 2861: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 2889: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 2895: Start Measurement: High Priority Inter Frequency (earfcn:%d, mode:%d)
Line 2916: MeasMode is invalid(%d)
Line 2980: IdleSchedule.pCurSrchHighUtraFreq NULL
Line 3019: IdleSchedule.pCurSrchHighUtraFreq NULL
Line 3056: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 3084: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 3090: Start Measurement: High Priority Utra Frequency (earfcn:%d, mode:%d)
Line 3109: MeasMode is invalid(%d)
Line 3146: [NR DSDS OPT] Skip GERAN schedule (%s, %d)
Line 3176: IdleSchedule.pCurMeasHighGeranFreq NULL
Line 3214: IdleSchedule.pCurVerifyHighGeranFreq NULL
Line 3242: Start Measurement: High Priority Geran Frequency (earfcn:%d, mode:%d)
Line 3261: MeasMode is invalid(%d)
Line 3338: IdleSchedule.pCurMeasHighCdmaFreq NULL
Line 3346: MeasMode is invalid(%d)
Line 3353: Start Measurement: High Priority Cdma Frequency (earfcn:%d, mode:%d)
Line 3362: MeasMode is invalid(%d)
Line 3400: NR srch/meas scheduling count is full(cnt:%d)
Line 3408: pNrFreq is Empty(%d | %d)
Line 3420: Idle High NR-Selected Mode(%d), SrchCycle(%d), MeasCycle(%d)
Line 3427: NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Line 3463: Start Measurement: High Priority NR Frequency (earfcn:%d, mode:%d)
Line 3485: MeasMode is invalid(%d)
Line 3570: IdleSchedule.pCurSrchInterFreq NULL
Line 3578: Highest Ranking NOT Start yet(First earfcn:%d)
Line 3583: Highest Ranking Start
Line 3587: Highest Ranking NOT Start yet(earfcn:%d)
Line 3621: IdleSchedule.pCurMeasInterFreq NULL
Line 3657: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 3731: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 3737: Start Measurement: Inter Frequency (earfcn:%d, mode:%d)
Line 3759: MeasMode is invalid(%d)
Line 3834: IdleSchedule.pCurSrchUtraFreq NULL
Line 3868: IdleSchedule.pCurMeasUtraFreq NULL
Line 3903: cmmo: cmmo is not applied (serving cell cinr(%d) <= -3)
Line 3969: cmmo: cmmo is not applied (earfcn=%d, num_csg_cells=%d)
Line 3974: Start Measurement: Utra Frequency (earfcn:%d, mode:%d)
Line 3995: MeasMode is invalid(%d)
Line 4031: [NR DSDS OPT] Skip GERAN schedule (%s, %d)
Line 4072: IdleSchedule.pCurMeasGeranFreq NULL
Line 4106: IdleSchedule.pCurVerifyGeranFreq NULL
Line 4133: Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Line 4152: MeasMode is invalid(%d)
Line 4222: IdleSchedule.pCurMeasCdmaFreq NULL
Line 4230: MeasMode is invalid(%d)
Line 4236: Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
Line 4245: MeasMode is invalid(%d)
Line 4282: NR srch/meas scheduling count is full(cnt:%d)
Line 4290: pNrFreq is Empty(%d | %d)
Line 4306: NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Line 4338: Start Measurement: NR Frequency (earfcn:%d, mode:%d)
Line 4363: MeasMode is invalid(%d)
Line 4401: LteRrmIdle_ResetSfailStatus
Line 4431: LteRrmIdle_UpdateContSfailCnt - band7(manual) : Srxlev = %d (%d)
Line 4442: curContSfailDrxCnt: reset
Line 4457: curContSfailDrxCnt: %d
Line 4490: [NR DRDS OPT] opposite stack(%s_%d) set ENDC/SCriteria(%x)(%d), TpClk(%d, %d)
Line 4503: No Evaluation: IdleProc(%s) cinr(%d)
Line 4539: Suspend reselection (Not paging done yet)
Line 4553: reselection triggered: From(LTE/%d/%d) -> To(%d/%d/%d)
Line 4557: reselection triggered
Line 4562: Idle OOS triggered
Line 4661: L2N reselection - SCS:%d smtc_included:%d periodicity:%d offset:%d duration:%d)
Line 4702: LTE_CPHY_CELL_RESEL_EVAL_IND (SUCCESS) to RRC
Line 4706: LTE_CPHY_CELL_RESEL_EVAL_IND (FAILURE) to RRC - reset CdmaSystemTimeFlag
Line 4771: minSrchCycle:%d, srchCycleLevel:%d(%d), maxSrchCycleLevel:%d, prevPcellRsrp:%d, IdleMeasPeriod:%d
Line 4798: curContSfailDrxCnt(%d) >= Nserv(%d)
Line 4801: Serving Cell not Suitable(DRX cnt:%d)
Line 4807: Cell LOST !!!  <-  (noAnySuitCellDrxCnt(%d) > cntDrxForIdleOos(%d))
Line 4875: -> All meas starts from intra srch
Line 4915: IdleSleepAfterIntraMeas is TRUE
Line 4924: IdleAllowNonIntraMeas is FALSE
Line 4935: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 4940: Equal/Low priority All measure is suspended
Line 4988: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 5086: -> All meas starts from intra srch
Line 5123: IdleSleepAfterIntraMeas is TRUE
Line 5132: IdleAllowNonIntraMeas is FALSE
Line 5155: [NR DRDS OPT] opposite stack(%s_%d) set ENDC/SCriteria(%x)(%d), TpClk(%d, %d)
Line 5162: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 5167: Equal/Low priority All measure is suspended
Line 5213: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 5287: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5347: pFreqInfo NULL
Line 5364: NR current Search/Measure ongoing: %d / %d total count: %d
Line 5423: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5484: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5564: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5623: pFreqInfo NULL
Line 5640: NR current Search/Measure ongoing: %d / %d total count: %d
Line 5699: [NR DRDS OPT] opposite stack(%s_%d) set ENDC(%d), TpClk(%d, %d)
Line 5805: LteRrmIdle_ProcMeasResult:curMeasType(%d), isLastMeas(%d)
Line 5809: IdleMeasSuspendForTx is TRUE -> Idle Measurement is suspended
Line 5930: LteRrmIdle_ProcMeasSchedule
Line 5945: Meas Can't start: MeasType is not Idle(%d)
Line 5976: IdleAllowNonIntraMeas is FALSE
Line 6000: [NR DRDS OPT] opposite stack(%s_%d) set ENDC/SCriteria(%x)(%d), TpClk(%d, %d)
Line 6006: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 6011: Equal/Low priority All measure is suspended
Line 6053: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 6116: IdleSchedule.basicCycleCnt : %d
Line 6147: LteRrmIdle_StartNonIntraMeas
Line 6166: [NR DRDS OPT] opposite stack(%s_%d) set ENDC/SCriteria(%x)(%d), TpClk(%d, %d)
Line 6173: S_ServingCell > S_nonintrasearch: Only High priority search/measurement scheduled
Line 6178: Equal/Low priority All measure is suspended
Line 6217: Equal/Low priority All measure is suspended (Srxlev >= ThreshServLow)
Line 6552: Invalid DrxConfig(%d)
Line 6566: highSpeedFlag(%d) or bHST_MeasFlag_R14(%d) is TRUE: Change intraFreqSrchCycle(%d), intraFreqMeasCycle(%d)
Line 6570: highSpeedFlag && HST_Meas flag are all FALSE
Line 6665: AlpssCfg.RrmIdleFilterLength(%d), gLteRrm_IdleServL1FilterLength(%d)
Line 6680: LteRrmIdle_InitMeasScheduler
Line 6768: [DRX] CHECK LteRrm STATE (%s)
Line 6774: [DRX] LteRrmIdle_Sleep No MEAS_IDLE
Line 6778: [DRX] bDrxStopforReselection
Line 6782: [DRX] bSiStartReadReqFlag == TRUE
Line 6811: dmMakeLRrcNeighborList
Line 6828: [%10d] dmMakeLRrcMeasurement
Line 6846: [%10d] dmMakeLRrcInterRatMeasurement
Line 6867: LteRrmIdle_GoToSleep, but cannot sleep(State:%s)
Line 6906: MEAS is working, cannot sleep. IdleMeasSuspendForTx(%d)
Line 6945: LteRrm_AllocCellInfoBuf: TargetCell
Line 6949: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 6980: please check: PrimaryCell is NULL!!
Line 6997: BPLMN suspend, Return ! (earfcn=%d, cell id=%d, BplmnTargetEarfcn=%d)
Line 7011: BPLMN stop, Return ! (earfcn=%d, cell id=%d, BplmnTargetEarfcn=%d)
Line 7057: saved serving BW(%d)
Line 7092: Checking Idle All meas done in earfcn(%d)
Line 7099: - SrchAllMeasDone(%d), MeasAllMeasDone(%d): Need to run rest of First All Meas
Line 7106: - MeasAllMeasDone(%d): Need to run rest of First All Meas
Line 7111: - SrchAllMeasDone(%d), MeasAllMeasDone(%d): All-done
Line 7145: Trigger All Measure for Equal/Lower priority
Line 7170: Finish Equal/Lower priority All Measure
Line 7209: pFreqInfo==NULL in LteRrmIdle_CheckMeasureBeforeReselectionFromSortedList
Line 7232: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 7250: - earfcn(%d) : Not required to measure at the current DRX cycle(Reset waitDrxForMeas = FALSE) 
Line 7273: LteRrmIdle_CheckMeasureBeforeReselection
Line 7277: pFreqList==NULL in LteRrmIdle_CheckMeasureBeforeReselection
Line 7285: High Priority InterFreq is Empty
Line 7309: pFreqInfo is NULL: return FALSE
Line 7333: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 7351: pFreqInfo is Last: Measurement for Reselection is not required. return FALSE
Line 7369: pFreqList is empty: return FALSE
Line 7413: LteRrmIdle_CheckNrMeasureBeforeReselection
Line 7419: pFreqInfo is NULL: return FALSE
Line 7442: - earfcn(%d) cell_id(%d) will be measured at the current DRX cycle before Reselection(MeasureRetried(%d)) 
Line 7458: Measurement for Reselection is not required. return FALSE
