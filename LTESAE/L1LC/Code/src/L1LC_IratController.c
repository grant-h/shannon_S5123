Line 481: [L1LC] GAP Time is too short. IRAT MEAS is not triggered
Line 485: [L1LC] IRAT MEAS SUCCESS: measure result - numOfCells:%d
Line 548: CELL[%d] with rsrp[%d], rsrq[%d], best_rsrp[%d], rsrp_diff[%d] - removed...
Line 556: CELL[%d] - cell_id:%d, rsrp:%d, rsrq:%d, rs_sinr:%d(Only NR)
Line 570: CELL[%d] with rsrp[%d], rsrq[%d], best_rsrp[%d], rsrp_diff[%d] - removed...
Line 578: CELL[%d] - cell_id:%d, rsrp:%d, rsrq:%d, rs_sinr:%d(Only NR)
Line 618: No Suspend for Test
Line 632: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 662: [U2L TEST] Found Target Cell (earfcn:%d, cell id:%d, index:%d)
Line 668: [U2L TEST] Found Target Cell but not best (earfcn:%d, cell id:%d, index:%d)
Line 675: [U2L TEST] NOT Found Target Cell (earfcn:%d, cell id:%d, index:%d)
Line 678: [U2L TEST] U2L Cell Search Success Rate: %d%% (Total Cnt:%d, Fail Cnt:%d)
Line 706: IRAT CELL is not valid.
Line 710: GAP Time is too short. IRAT CELL Srch is not triggered.
Line 715: IRAT CELL SRCH SUCCESS
Line 724: search_result->Num ERROR (search_result->Num = %d)
Line 747: IRAT Cell Search[cell id:%d]
Line 788: No Suspend for Test
Line 802: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 826: IRAT CELL SRCH SUCCESS
Line 864: [L1LC] L1LC_IratSrchReq (earfcn = %d)
Line 907: [L1LC] L1LC_IratMeasReq (earfcn = %d, measBw = %d)
Line 937: [L1LC] Invalid IRAT meas req
Line 956: [L1LC] L1LC_IratProcLteTimingLatchReq is skip
Line 965: [L1LC] LATCH~~!
Line 983: Skip GSM Timing Latch due to Emodem off
Line 986: gL1LC_IratlatchedTime sfn = %d, subframe num = %d, offset = %d
Line 1013: [L1LC] L1LC_IratProcLteAgcInitReq is skip
Line 1017: [L1LC] L1LC_IratProcLteAgcInitReq
Line 1059: [L1LC] L1LC_IratProcLteCellSearchReq is skip
Line 1084: Post AGC0 %d, AGC1 %d
Line 1100: Post AGC0 %d, AGC1 %d
Line 1113: [L1LC] L1LC_IratProcLteCellSearchReq
Line 1121: [L1LC] This earfcn(%d) is not support
Line 1149: [L1LC] GAP Timing ERROR!!(Gap Start SFN:%d TTI:%d Offset:%d) (Cur SFN:%d TTI:%d Offset:%d)
Line 1192: [L1LC] L1LC_IratProcLteMeasReq is skip
Line 1204: LTE cell list is NULL... Please do the cell search!!!
Line 1239: Irat_FaInfo.AgcOvrAnt0:%d, Irat_FaInfo.AgcOvrAnt1:%d
Line 1247: Num Of Cell exceeds the Max Count
Line 1260: Post AGC0 %d, AGC1 %d
Line 1268: [L1LC] L1LC_IratProcLteMeasReq(gL1LC_MeasInfo.curMode(%d), meas_bw(%d), AGC_3G(%d,%d), numOfCell(%d)
Line 1304: [L1LC] This earfcn(%d) is not support
Line 1331: [L1LC] GAP Timing ERROR!!(Gap Start SFN:%d TTI:%d Offset:%d) (Cur SFN:%d TTI:%d Offset:%d)
Line 1386: numOfFreqs is 0xff,  DrxState is: %d ! isabnormal (%d)
Line 1398: [L1LC] L1LC_IratProcLteSearchMeasureReq is skip
Line 1404: [L1LC] L1LC_IratProcLteSearchMeasureReq(Source RAT:%d) - numOfFreqs:(%d) gL1LC_IratNumOfFreqs (%d)
Line 1408: [L1LC] L1LC_IratProcLteSearchMeasureReq : Num Freq is Out of range (%d) 
Line 1417: [L1LC] Freq is mismatched between before(%d) and after(%d)
Line 1424: [L1LC] Freq is mismatched between before(%d) and after(%d)
Line 1458: [L1LC] freq num is matched (matchcnt %d gL1LC_IratTotalNumOfFreqs %d)
Line 1463: [L1LC] Freq num is same but, List is changed (matchcnt %d gL1LC_IratTotalNumOfFreqs %d)
Line 1476: [L1LC] gL1LC_IratTotalNumOfFreqs is zero : 1st try
Line 1530: [L1LC] gL1LC_IratSupportedBandSortedEarfcnCnt %d gL1LC_IratUnsupportedBandSortedEarfcnCnt %d req_count %d
Line 1557: gBplmStartPending is TRUE, so Don't suspend in srch/meas req
Line 1568: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 1592: [L1LC] previous LTE earfcn %d gL1LC_MeasuredCnt %d
Line 1596: [L1LC] SIB is changed or 1st time!!
Line 1606: [L1LC] 1st list is previous LTE earfcn %d
Line 1632: [L1LC] ==== Received IRAT Earfcn list ====
Line 1637: [L1LC] Earfcn[%d]: %d
Line 1640: [L1LC] ==========================
Line 1657: [L1LC] Already measured earfcn(%d): %d 
Line 1670: [L1LC] ====  IRAT Earfcn list to be measured soon ====
Line 1675: [L1LC] Earfcn[%d]: %d
Line 1678: [L1LC] ==========================
Line 1727: [L1LC] L1LC_IratProcLteSearchMeasureReq is skip by illegal EARFCN
Line 1736: gBplmStartPending is TRUE, so Don't suspend in srch/meas req
Line 1747: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 1776: [L1LC] L1LC_IratProcLteMeasReselReq is skip
Line 1781: [L1LC] L1LC_IratProcLteReselectReq measPeriod:(%d), source_rat:(%d), gsmServingRssi:(%d), umtsServingRscp:(%d), umtsServingEcno:(%d), Plmn[0]:(0x%x), Plmn[1]:(0x%x)
Line 1816: [L1LC] ==== IRAT Earfcn list ====
Line 1821: [L1LC] Earfcn[%d]: %d
Line 1824: [L1LC] ==========================
Line 1853: [L1LC] L1LC_IratProcLteMeasReselReq is skip by illegal EARFCN
Line 1876: [L1LC] L1LC_IratProcLteSrchReq
Line 1928: [L1LC] L1LC_IratProcLteMeasReq
Line 1991: [L1LC] L1LC_IratProcLteSrchResult(gL1LC_IratLteMeasState(%d))
Line 2000: IRAT CELL SRCH Failure(NO cell identified)
Line 2006: [U2L TEST] NOT Found Target Cell (earfcn:%d, cell id:%d, index:%d)
Line 2007: [U2L TEST] U2L Cell Search Success Rate: %d%% (Total Cnt:%d, Fail Cnt:%d)
Line 2010: IRAT CELL SRCH Failure(NO cell identified)
Line 2033: gBplmStartPending is TRUE, so Don't suspend in IratSrchResult
Line 2046: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2063: search_result->Num ERROR (search_result->Num = %d)
Line 2091: IRAT Cell Search[cell id:%d]
Line 2121: IRAT CELL SRCH Failure(NO cell identified)(%d)
Line 2141: gBplmStartPending is TRUE, so Don't suspend in IratSrchResult
Line 2153: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2182: [L1LC] L1LC_IratProcLteMeasResult(Num.MeasResult:%d)
Line 2198: Measure result: cell id(%d), rsrp(%3d), rsrq(%3d), rs_sinr(%3d)(Only NR)
Line 2245: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2258: gBplmStartPending is TRUE, so Don't suspend in IratMeasResult
Line 2269: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2302: gBplmStartPending is TRUE, so Don't suspend in IratMeasResult
Line 2313: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2341: L1LC_IratSortReselecCand ERROR (gL1LC_IratNumOfCell = %d)
Line 2388: [L1LC] L1LC_IratProcLteEvaluation
Line 2401: Reselection cell info: earfcn:(%d), cell id(%d), rsrp(%d)> (%d)(resel Threshold)
Line 2434: [L1LC] L1LC_IratProcLteConEvalLegacy
Line 2443: Reselection cell info: earfcn:(%d), cell id(%d), rsrp(%d)> (%d)(resel Threshold)
Line 2483: Earfcn:(%d), Number of Cells:(%d)
Line 2504: Barred Cell:Earfcn:(%d), CellId:(%d)
Line 2536: [L1LC] Measurement Report: earfcn(%d), cell id(%d), rsrp(%d), rsrq(%d), rs_sinr(%d)(Only NR)
Line 2537: Measurement Report: earfcn(%d), cell id(%d), rsrp(%d), rsrq(%d), rs_sinr(%d)(Only NR)
Line 2552: [L1LC] LTEL1_MMC_LTE_SEARCH_MEASURE_CNF to MMC(rat:%d, cell num:%d, AGC(%d/%d))
Line 2568: gBplmnStartPendingStartTime: %d gBplmnStartPendingEndTime: %d time_diff: %d  gBplmnStartPendingRcvdAvailTime: %d
Line 2585: BPLMN start pending time is not enough
Line 2625: [L1LC] L1LC_IratProcLteMeasStopReq
Line 2633: GSM measure stop!
Line 2639: [L1LC] L1LC_IratProcLteMeasStopReq : gL1LC_IratNrMeasState(%d)
Line 2663: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 2688: L1LC_IratNcellTimingInfoUpdate(ratType:%d, afcPdm:%d)
Line 2694: umts timing difference(delta_offset:%d) comparision with LTE umts ref. timing
Line 2702: UTRAN NCELL[%d] (time_offset:%d) -> (time_offset:%d)
Line 2709: gsm timing difference(delta_Qbit:0x%X) comparision with LTE gsm ref. timing
Line 2722: GERAN NCELL[%d] (frameNumber:%d, Qb:%d) -> (frameNumber:%d, Qb:%d)
Line 2860: Current LTE Timing(SFN:%d, TTI:%d, Offset:%d), gap_lastEndTime:%d, gap_interval:%d, margin:%d
Line 2867: The difference between current time and paging timing is %dms by TTI unit
Line 2886: The timing for AGAP(SFN:%d, TTI:%d, Offset:%d) is calculated.
Line 2904: IRAT LATCH REQ(LTE Current Time): SFN(%d), TTI(%d), OFFSET(%d)
Line 2958: Latch Fail:diffRtg(%d) diffLatch(%d)
Line 2966: Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Send UMTS SrchMeasReq with Wrong timning latch info
Line 2971: Latch Success:diffRtg(%d) diffLatch(%d)
Line 2978: IRAT LATCH CNF(UMTS Side): SFN(%d), SLOT(%d), CHIP(%d)
Line 3040: %d times Latch fail, Send UMTS Timing Latch Again!!! 
Line 3083: [L1LC] L1LC_IratUmtsCellSearchMeasureDone Called: Info.(Num of Freq:%d, Arfcn:%d, numOfRscpEcNoInfo:%d)
Line 3104: L2U measurement has been already stopped.
Line 3122: [L1LC] Num Freq = 0 :Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3147: pMeasList[i].numOfRscpEcNoInfo(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 3177: (UMTS_RESULT %i) SRC code:%d, RSCP:%d, Ec/No:%d, RSSI:%d, FrameOffset:%d
Line 3183: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3220: [L1LC] L1LC_IratUmtsTddCellSearchMeasureDone Called: Info.(Num of Freq:%d, Arfcn:%d, numOfRscpEcNoInfo:%d)
Line 3258: [L1LC] Num Freq = 0, Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3283: pMeasList[i].numOfRscpEcNoInfo(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 3296: (UMTS_RESULT %i) SRC code:%d, RSCP:%d, RSSI:%d, FrameOffset:%d
Line 3302: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 3367: TDSCDMA Cell Gap Start time: (sfn:%d, slot:%d, chip:%d)
Line 3394: LTEL1_MMC_UMTS_CELL_SEARCH_REQ(arfch:%d)
Line 3549: [L1LC] ProcUmtsPartialSearchReq(arfcn:%d, phase:%d)
Line 3572: pathList[%d] - offset(umts:%d, lte:%d)
Line 3638: [L1LC] UmtsTddPartialSearchReq(phase:%d, DominantSyncDlId:%d, frameOffset:%d)
Line 3656: [L1LC] UmtsTddPartialSearchReq(Cell Id[%d]:%d)
Line 3661: Abnormal phase state(%d): Try Phase0 !!!
Line 3669: [L1LC] numOfFrequencies(%d) arfcn(%d) numOfRscpEcNoInfo(%d)
Line 3681: [L1LC] Cell Id(%d)
Line 3704: measurement GAP length for L2T is adjusted from 5.5ms to 6.5 ms!!!
Line 3740: TDSCDMA Cell Gap Start time: (sfn:%d, slot:%d, chip:%d) gamma[%d] isUarfcnOnly[%d]
Line 3803: [L1LC] L1LC_IratProcUmtsPartialSearchDone Called: Info.(phase:%d, numOfPathes:%d, numOfRscpEcNoInfo:%d)
Line 3817: pathList[%d] - offset(umts:%d, lte:%d)
Line 3822: UmtsPartialSearch phase0 fail!!!
Line 3841: the step value of Phase(%d) is wrong!!!
Line 3927: [L1LC] L1LC_IratProcUmtsTddPartialSearchDone Called: Info.(phase:%d, Success:%d, numOfRscpEcNoInfo:%d, isUarfcnOnly:%d)
Line 3937: DominantSyncDlId[%d] frameOffset[%d]
Line 3941: Phase0 fail!!!
Line 3956: Phase 1 : Num of Cell[%d -> %d]
Line 3979: [L1LC] UmtsTddPartialSearchDone(Cell Id[%d]:%d)
Line 3984: Phase1 fail!!!
Line 4007: the step value of Phase(%d) is wrong!!!
Line 4093: UMTS Measure Setting - earfcn:%d, numOfCell:%d
Line 4293: TDSCDMA Cell Gap Start time: (sfn:%d, slot:%d, chip:%d)
Line 4311: LTEL1_MMC_UMTS_MEASURE_REQ(arfch:%d)
Line 4356: UMTS Measure Setting - earfcn:%d, numOfCell:%d
Line 4359: UMTS MeasureList[%d]
Line 4369: UMTS Cell Timing Offset: %d(LTE Side) to %d(UMTS Side) cell ID:%d, TimingOffset(sfn:%d, slot:%d, chip:%d)
Line 4464: Base for UmtsSiAcq timing(SFN:%d, TTI:%d, Offset:%d), Current LTE Timing(SFN:%d, TTI:%d, Offset:%d)
Line 4467: gap_lastEndTime:%d, gap_interval:%d, margin:%d
Line 4472: The difference between current time and UmtsSiAcq timing is %dms by TTI unit(marginForlastGap:%d)
Line 4506: The difference between UmtsSiAcq timing and Paging timing is %dms by TTI unit
Line 4513: Timing for UmtsSiAcq(period:%dms) shall be updated, due to the collision with Paging(period:%dms).
Line 4524: UmtsSiAcq(period:%dms) will be tried instead of the reception for PAGING(period:%dms), due to the collision.
Line 4530: The timing for AGAP(SFN:%d, TTI:%d, Offset:%d) is calculated.
Line 4550: Proc SelectTargetSibTypeForUmtsCgiAcq(SIB1:%d, SIB3:%d)
Line 4559: Difference with current time(SIB1:%dms, SIB3:%dms)
Line 4568: UtranSiAcquisitionMode(%d) for SIB is selected.
Line 4589: L1LC_IratUpdateTimingForUmtsCgiAcq Called(PagingInfo(period:%d, PF:%d, PO%d), UtraSiAcquisitionMode:%d)
Line 4595: UMTS CGI Cell Timing Offset: %d(LTE Side) to %d(UMTS Side)
Line 4627: The update for UmtsSiAcq timing is finished.(UtraSiAcquisitionMode:%d - SFN:%d, TTI:%d, Offset:%d)
Line 4652: The timing for SIB has been not updated yet.
Line 4729: UmtsCgiAcqReq Setting - measMode:%d, cellTimingOffset:%d, gapDuration:%d
Line 4796: L1LC_IratProcUmtsCgiAcquisitionDone Called(measModeInCnfMessage:%d, currMeasMode:%d, isSuccess:%d)
Line 4804: LteTimingInfo in LATCH procedure - sfn:%d, tti:%d, offset:%d)
Line 4806: UmtsTimingInfo in LATCH procedure - sfn:%d, slot:%d, chip:%d)
Line 4810: UmtsCgiAcquisitionCnf Info. - neededDuration[0]:%d, period[0]:%d, UmtsTimingInfo[0](sfn:%d, slot:%d, chip:%d)
Line 4813: UmtsCgiAcquisitionCnf Info. - neededDuration[1]:%d, period[1]:%d, UmtsTimingInfo[1](sfn:%d, slot:%d, chip:%d)
Line 4829: NextUmtsCgiAcquisition information for MIB - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
Line 4840: NextUmtsCgiAcquisition information for SIB1 - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
Line 4854: NextUmtsCgiAcquisition information for SIB3 - delta_rtg:%d, LteTimingInfo(sfn:%d, tti:%d, offset:%d)
Line 4882: utran_SI_AcquisitionForHO is finished as a success.
Line 4898: utra_SI_AcquisitionForHO(measMode:%d) was failed and will be retried.
Line 5008: utra_SI_AcquisitionForHO operation has been stopped.
Line 5015: utra_SI_AcquisitionForHO is suspended(UtraSiAcquisitionMode:%d, gL1LC_MeasSuspendForTxFlag:%d)
Line 5039: utra_SI_AcquisitionForHO operation is started.
Line 5076: Invalid UMTS meas_state(%d)
Line 5166: [GSM SCH TIMING CHECK] Update and Check GSM(arfcn:%d) cell time position
Line 5176: Post GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d, delta_Qbit:%d)
Line 5198: Update GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d)
Line 5203: Remain GSM cell time position(FrameNum:%d, Qb:%d, NetFrameNum:%d)
Line 5206: Gap start position: frame(%d), Qb(%d)
Line 5216: Gap end position: frame(%d), Qb(%d)
Line 5220: (MATCH!!!) SCH_ACQ_REQ will be transmitted
Line 5227: (NO MATCH) SCH_ACQ_REQ is delayed.
Line 5275: Set ratMode(%d) is invalid!!!
Line 5286: Required PreTime is insufficient.(ratMode:%d, spare RTG:%d, required RTG:%d)
Line 5317: L1LC_IratCheckGsmCellForRssi - numOfCell(0), return(%d)
Line 5348: L1LC_IratCheckGsmCellForRssi - needRssiMeas:%d
Line 5379: [GSM_FCH_ACQ] start the GsmFchAcquisition(arfcn:%d, rssi:%d)
Line 5438: GsmPauseProcedure for other IRAT measurement
Line 5447: GsmPauseProcedure for Inter E-UTRA measurement
Line 5493: [GSM_SCH_ACQ] NextSchFrameNum:%d, FrameNumForPreGAP:%d
Line 5499: [GSM_SCH_ACQ] NextSchFrameNum(%d) should be postponed to %d GSM Frame!!!
Line 5610: [%s] LTEL1_MMC_GSM_TIMING_LATCH_REQ LTE LATCH: SFN(%d), TTI(%d), OFFSET(%d)
Line 5618: Skip RF Power down
Line 5675: Latch Fail:diffRtg(%d) diffLatch(%d)
Line 5683: Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Proceed GSM SrchMeas w/ wrong timning latch info
Line 5688: Latch Success:diffRtg(%d) diffLatch(%d)
Line 5694: IRAT LATCH(GSM): FRAME(%d), QBIT(%d)
Line 5781: Invalid IratGsmMeasState(%d)
Line 5797: GsmPauseProcedure for other IRAT measurement
Line 5830: Invalid IratGsmMeasState(%d)
Line 5871: [L1LC] L1LC_IratSendGsmMeasCnf: Arfcn(%d)
Line 5883: gL1LC GSM numOfCell > L1LC_MAX_MEAS_CNT
Line 5913: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 5943: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 5975: Start next IRAT measurement after processing GERAN measurement
Line 5999: L1LC_IratReturnToLTE: L1LC task sleep time(%d)
Line 6055: L1LC_IratGsmMeasPostProcessing: IratGsmMeasState (%d) IratGsmVerifyState (%d)
Line 6092: [DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX as FCH or SCH done (reset IsDuringGsmMeas:%d)
Line 6123: GSM_RSSI_MEAS_REQ or GSM_FCH_ACQ_REQ or GSM_SCH_ACQ_REQ was hold!!!
Line 6136: In GSM_RSSI_MEASURE_REQ, numOfFrequencies are abnormal!!!
Line 6212: LTEL1_MMC_GSM_RSSI_MEASURE_REQ(FreqNum:%d, start(frame:%d, Qb:%d), delta_rtg:%d)
Line 6340: (IRAT_GSM_bandIndicator:%d) LTEL1_MMC_GSM_RSSI_MEASURE_REQ(FreqNum:%d, start(frame:%d, Qb:%d), delta_rtg:%d)
Line 6394: gL1LC_GsmCellInfo.cell[%d].arfcn(%d) != pMsg->frequencyList[%d].arfcn(%d)
Line 6400: [L1LC] GSM RSSI: arfcn(%d), rssi(%d dBm)(level: %d)  GSM State: (%d
Line 6486: LTEL1_MMC_GSM_FCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_rtg:%d)
Line 6578: LTEL1_MMC_GSM_FCH_ACQ_REQ(FchAcqTryNum:%d, arfcn:%d, start(frame:%d, Qb:%d), ref(fram:%d, Qb:%d), delta_rtg:%d)
Line 6609: LTEL1_MMC_GSM_FCH_ACQ_REQ_FOR_POWER_DOWN
Line 6669: L1LC_IratProcGsmFchAcqDone: FCH ACQ SUCCESS (arfcn:%d, ref-frame((%d), timeOffset(%d)) (recv:%d))!!!
Line 6673: L1LC_IratProcGsmFchAcqDone: FCH ACQ FAIL (arfcn:%d maxFbAcqTryNum:%d)!!!
Line 6684: NONEXISTENT GSM FCH!!! (maxFbAcqTryNum:%d)
Line 6737: L1LC_IratProcPreSCHAcqReq: arfcn(%d) frame_number is for SCH position! (%d) => (%d)
Line 6750: L1LC_IratProcPreSCHAcqReq: arfcn(%d) frame_number is for FCH position! (%d) => (%d)
Line 6796: LteRrmIdle_ScheduleNextSchPos fail!!
Line 6856: LTEL1_MMC_GSM_SCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_qbit:%d, delta_rtg:%d)
Line 6928: Gap Start Position Ref(frame:%d, Qb:%d)
Line 6935: Gap End Position Ref(frame:%d, Qb:%d) -> Sch Start Position Ref(frame:%d, Qb:%d)
Line 6986: GSM_SCH_ACQ_TIME: %d
Line 7007: LTEL1_MMC_GSM_SCH_ACQ_REQ(arfcn:%d, start(frame:%d, Qb:%d), ref(frame:%d, Qb:%d), delta_qbit:%d)
Line 7074: GsmSchAcqInd timingOffset(%d) is invalid!!!
Line 7132: L1LC_IratProcGsmSchAcqDone: SCH ACQ SUCCESS (BSIC:%d, timeOffset:%d(%d), frameNumber:%d(net:%d), arfcn:%d, count:%d)!!!
Line 7193: L1LC_IratProcGsmSchAcqDone: SCH ACQ FAIL (arfcn:%d)(count:%d)!!!
Line 7215: IRAT LATCH REQ(LTE Current Time): SFN(%d), TTI(%d), OFFSET(%d)
Line 7224: CDMA_TIMING_LATCH_REQ to EVDO
Line 7229: CDMA_TIMING_LATCH_REQ to 1xRTT
Line 7271: Latch Fail:diffRtg(%d) diffLatch(%d)
Line 7279: Latch fail#(%d) >= L1LC_MAX_LATCH_COUNT(%d), Send CDMA SrchMeasReq with Wrong timning latch info
Line 7284: Latch Success:diffRtg(%d) diffLatch(%d)
Line 7292: IRAT LATCH CNF(EVDO Side): latched evdo rtg (High: 0x%x  Low: 0x%x)
Line 7301: IRAT LATCH CNF(1xRTT Side): latched 1xRTT rtg (High: 0x%x  Low: 0x%x)
Line 7368: %d times Latch fail, Send CDMA Timing Latch Again!!! 
Line 7427: [L1LC] L1LC_IratSendCdmaMeasReq (%s)
Line 7441: [L1LC]  msgToMmc.searchwindowSize is absent(set 15)
Line 7455: [L1LC] msgToMmc.neigh_cell_list[%d].phyCellIdCDMA2000[%d](%d)
Line 7458: [L1LC] bandClass(%d) arfcnCDMA2000(%d) numPhyCellIdCDMA2000(%d)
Line 7463: [L1LC][IDLE] gHAL_IratLatchTime.lteTime - current_time : deltaRtg(%d)
Line 7478: [L1LC] L1LC_IratSendCdmaMeasReq : deltaRtg(%d)
Line 7484: current sfn(%d), tti(%d), offset(%d) ipc delay(%d)
Line 7489: current sfn(%d), tti(%d), offset(%d) ipc delay(%d)
Line 7520: CDMA Gap Start time(IDLE): systemTime in chip high(0x%x) low(0x%x)
Line 7522: CDMA Gap duration time(IDLE): systemTime in chip high(0x%x) low(0x%x)
Line 7530: [L1LC] LTEL1_MMC_CDMA_MEAS_REQ to MMC(curIratMode:%d)
Line 7575: [L1LC] L1LC_IratSendCdmaMeasReqInConnGap (%s)
Line 7600: CDMA Measure Setting Cell list[%d] - bandClass:%d, arfcnCDMA2000:%d numPhyCellIdCDMA2000:%d
Line 7605: [CONN] phyCellIdCDMA2000[%d](%d)
Line 7629: [L1LC][CONN] gHAL_IratLatchTime.lteTime - HALSC_MeasSche.GapStartSfn/tti : deltaRtg(%d)
Line 7636: [L1LC] L1LC_IratSendCdmaMeasReqInConnGap : deltaRtg(%d)
Line 7652: CDMA Gap Start time(CONN): systemTime in chip high(0x%x) low(0x%x)
Line 7654: CDMA Gap duration time(CONN): systemTime in chip high(0x%x) low(0x%x)
Line 7721: L2D measurement has been already stopped.
Line 7743: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7759: [L1LC][CDMA] Num Freq ==0 : Send RrmMesureCnf and Return with FAILED measResult
Line 7771: Support num freq is 1
Line 7777: pMeasList[i].numNeighCellInfo(%d) > MMC_MAX_CDMA_MEAS_CELL
Line 7793: CDMA_MEAS_DONE: arfcn(%d), cell_id(%d), rsrp(%d), pnPhase(%d)
Line 7849: [L1LC] L1LC_IratSendNrResumeSusPendReq : abnormal type(%d)
Line 7860: IRAT NR RESUME/SUSPEND REQ: Type(%d), (LTE Current Time : SFN(%d), TTI(%d), OFFSET(%d))
Line 7883: IRAT LATCH(NR): latchTime(%d), sfn(%d), subframe(%d), offset(%d)
Line 7912: [L1LC] L1LC_IratProcNrResumeSuspendCnf: type(%d)/*0:suspend, 1:resume, 2:L2N meas config release*/, result(%d)
Line 7942: [L1LC] Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 7973: [L1LC] L1LC_IratProcNrResumeSuspendCnf: skip ResumeCnf procedure in gL1LC_IratNrMeasState(%d)
Line 7984: [L1LC] L1LC_IratProcNrResumeSuspendCnf: skip SuspendCnf procedure in gL1LC_IratNrMeasState(%d)
Line 8005: [L1LC] L1LC_IratSendNrSrchMeasPbchReq: measMode(%d)
Line 8016: LTERRM_MEASMODE_NR_SYNC: Timer length=%d
Line 8031: [L1LC] L1LC_IratSendNrSrchMeasPbchReq : unexpected measMode(%d)
Line 8075: LTEL1_MMC_LEGACY_MEASURE_REQ(arfcn: %d)
Line 8100: [L1LC] L1LC_IratLegacyUmtsMeasureDone Called: Arfcn(%d)
Line 8115: pMeasList->NumOfCell(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 8123: Max Neighbour cell number is over (%d)
Line 8135: UMTS MEAS DONE: Arfcn(%d), Cell id(%d)
Line 8138: UMTS MEAS DONE: ECNO:%d(%d), RSCP:%d(%d), RSSI:%d(%d)
Line 8145: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8199: LTEL1_MMC_LEGACY_MEASURE_REQ(arfcn: %d)
Line 8225: [L1LC] L1LC_IratLegacyGsmMeasureDone Called: Arfcn(%d)
Line 8239: pMeasList->NumOfCell(%d) > L1LC_RRM_MAX_MEAS_CNT
Line 8247: Max Neighbour cell number is over (%d)
Line 8257: [L1LC] GSM RSSI: arfcn(%d), rssi(%d dBm)(level: %d)
Line 8263: Delete MeasElem (measMode:%d, earfcn:%d, numOfCell:%d)
Line 8307: Not supported source RAT
Line 8336: [L1LC] L1LC_IratProcHedgeModeInd Invalid LTE MODE(%d)
Line 8389: L1LC_IratProcLteL1StartDrxInfoShareInd ====> gDrx_BplmnSrchStartLteActive = TRUE-> SrchOnRat == %s;
Line 8438: L1LC_IratProcHedgeLteL1BplmnSrchStartInd
Line 8447: BPLMN Start (Don't Sleep)
Line 8462: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 8550: Invalid UMTS meas_state(%d)
Line 8556: Invalid gL1LC_DualRat(%d)
Line 8625: Invalid UMTS meas_state(%d)
Line 8631: Invalid gL1LC_DualRat(%d)
Line 8718: Invalid GSM curMeasIdx(%d)
Line 8748: Invalid GSM meas_state(%d)
Line 8754: Invalid gL1LC_DualRat(%d)
Line 8795: GsmPauseProcedure for other IRAT measurement
Line 8863: Invalid GSM curMeasIdx(%d)
Line 8883: GsmPauseProcedure for other IRAT measurement
Line 8930: GsmPauseProcedure for other IRAT measurement
Line 8974: Invalid GSM meas_state(%d)
Line 8980: Invalid gL1LC_DualRat(%d)
Line 9027: Invalid GSM curMeasIdx(%d)
Line 9060: Invalid GSM meas_state(%d)gL1LC_MeasInfo.prevMode(%d)gL1LC_MeasInfo.curIratMode(%d) 
Line 9066: Invalid gL1LC_DualRat(%d)
Line 9105: GsmPauseProcedure_IRAT_L1LC_StartMeas
Line 9130: GsmResumeProcedure for FB/SB identity
Line 9146: GsmPauseProcedure for other IRAT measurement
Line 9161: Invalid GSM curMeasIdx(%d)
Line 9167: Invalid GSM meas_state(%d)
Line 9174: Invalid gL1LC_DualRat(%d)
Line 9231: Invalid CDMA meas_state(%d)
Line 9237: Invalid gL1LC_DualRat(%d)
Line 9254: L1LC_IratProcNrMeas: gL1LC_IratNrMeasState(%d)
Line 9270: Invalid NR meas_state(%d)
Line 9308: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 9324: L1LC_IratProcIratSrchMeas(curMode:%d, curIratMode:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
Line 9346: Do not start IratUmtsMeas since latch confirmation is pending from UMTS
Line 9353: Do not start IratUmtsMeas due to PauseFlag
Line 9358: [LTE_DSDS] Do not select UMTS measurement object since the previous UMTS activity is not completed
Line 9368: Do not start IratGsmMeas due to PauseFlag
Line 9373: [LTE_DSDS] Set FchAcqTryNum as 0
Line 9379: Do not start IratGsmMeas since latch confirmation is pending from GSM
Line 9388: Do not start IratGsmMeas due to PauseFlag
Line 9393: Do not start IratGsmMeas since latch confirmation is pending from GSM
Line 9402: Do not start IratGsmMeas since latch confirmation is pending from GSM
Line 9412: Do not start IratCdmaMeas due to PauseFlag
Line 9423: Do not start IratNrMeas due to PauseFlag
Line 9429: meas_mode is invalid(%d)
Line 9454: Previous UMTS activity is not completed, do not release RF
Line 9483: L1LC_IratProcIratSrchMeas(curMode:%d, curIratMode:%d, SearchConfiguredflag:0x%x, MeasureConfiguredflag:0x%x)
Line 9504: remain time to other stack WakeupIntrTimer (%d)
Line 9517: remain time to other stack PagingReqTimer (%d)
Line 9552: [LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
Line 9609: [LTE_DSDS] Set FchAcqTryNum as 0
Line 9654: [LTE_DSDS] %s(max_irat_meas_time %d)
Line 9699: [LTE_DSDS] Do not start IRAT Meas mode: (%d) due to nearby e.p.t or nearby paging
Line 9728: [LTE_DSDS] Do not start IRAT Meas mode: (%d) due to nearby e.p.t or nearby paging
Line 9757: [LTE_DSDS] Do not start IRAT Meas mode: (%d) due to nearby e.p.t or nearby paging
Line 9768: meas_mode is invalid(%d)
Line 9793: Do not select UMTS measurement object since the previous UMTS activity is not completed
Line 9804: Do not select GSM measurement object since the latch confirmation is pending from GSM
Line 9870: meas_mode is invalid(%d)
Line 9917: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 10052: [IRAT] L1LC_IratSetNrMeasPara: mode(%d)
Line 10056: [IRAT] L1LC_IratSetNrMeasPara: mode(%d)
Line 10133: numOfCell is NULL
Line 10177: IratSetGsmMeas(Arfcn:%d, BSIC:%d, NetFrameNum:%d, RefFrameNum:%d, timingOffset:%d, GsmCellState:%d)
Line 10201: numOfCell is NULL
Line 10238: IratSetGsmVerify(Arfcn:%d, BSIC:%d, NetFrameNum:%d, RefFrameNum:%d, timingOffset:%d, GsmCellState:%d)
Line 10341: [LTE_DSDS] Do not start IRAT Meas mode: (%d) due to nearby e.p.t or nearby paging
Line 10355: L1LC_IratCheckGsmMeasFeasibility (meas_mode : %d)
Line 10365: Send GSM_MEAS_CNF as nothing is pending
Line 10377: Send GSM_MEAS_CNF as nothing is pending
Line 10389: Send GSM_MEAS_CNF as nothing is pending
Line 10395: gL1LC_IratGsmMeasState is invalid(%d)
Line 10413: L1LC_IratCheckGsmVerifyFeasibility (meas_mode : %d)
Line 10423: Send GSM_MEAS_CNF as nothing is pending
Line 10438: Send GSM_MEAS_CNF as nothing is pending
Line 10444: gL1LC_IratGsmMeasState is invalid(%d)
Line 10534: [LTE_DSDS] IratUmtsMeasState: %d, RAT_type: %d, MinRequiredTime: %d
Line 10585: [LTE_DSDS] IratGsmMeasState: %d, MinRequiredTime: %d
Line 10631: [L1LC] L1LC_ReturnToLtePartialSearchDone
