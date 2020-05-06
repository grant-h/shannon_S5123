Line 62: RrmBlkIdleEvalNr::RrmBlkIdleEvalNr()
Line 69: RrmBlkIdleEvalNr::~RrmBlkIdleEvalNr()
Line 76: RrmBlkIdleEvalNr::Init
Line 78: Clear ReselectionList
Line 84: RrmBlkIdleEvalNr::PerformEval
Line 98: pIntraFreq or pServingCell is nullptr - pIntraFreq:0x%08x pServingCell:0x%08x
Line 102: Update PCELL meas result
Line 105: Clear ReselectionList
Line 117: Configure NR freqList
Line 121: Configure LTE freqList
Line 124: Configured freqList - size:%d
Line 133: NR_FIXED_ARFCN Enable! All arfcn will be removed except Fixed arfcn : %d
Line 138: NR_FIXED_ARFCN disable
Line 141: SORT PRIORITY - freqList
Line 144: Sorted freqList - size:%d
Line 147: EVALUATE freqList - size:%d
Line 151: ReselectionList.size:%d
Line 163: RrmBlkIdleEvalNr::ConfigureReselEvalInd
Line 181:    >>ReselectionList is empty
Line 206:    >>Unexpected RatType:%s(%d)
Line 238:    >>Unexpected RatType:%s(%d)
Line 258: reselFreq_index:%d exceed NR_RESEL_FREQ_MAX_NUM:%d
Line 274: RRC_RRM_RESEL_EVAL_IND - ReselFreq[%d] RatType:%s(%d) Arfcn:%d Priority:%d Scs:(enum)%d Pcid:%d
Line 280: reselCell_index:%d exceed NR_RESEL_CELL_MAX_NUM:%d
Line 297: RrmBlkIdleEvalNr::GetFirstNrCellEqualPriority() - NR Arfcn:%d
Line 304:    >>Priority is not found for NR Arfcn:%d
Line 317:    >>FOUND NR CELL - Arfcn:%d CellId:%d Priority:%d
Line 326:    >>NOT FOUND NR CELL with priority:%d
Line 332: RrmBlkIdleEvalNr::GetNextNrCellEqualPriority()
Line 338:    >>pCellNr is nullptr
Line 343:    >>FIND NEXT equal priority NR CELL - Arfcn:%d CellId:%d
Line 357:    >>FOUND NR CELL - Arfcn:%d CellId:%d Priority:%d
Line 362:      ::END OF LIST - no more cell in ReselectionList
Line 374:      ::FOUND NEXT NR CELL - Arfcn:%d CellId:%d Priority:%d
Line 386:    >>NOT FOUND in ReselectionList
Line 393: RrmBlkIdleEvalNr::UpdateNcellMeasResult() - rCellList.size:%d
Line 404:    >>NR - CellPtr or FreqPtr is nullptr
Line 417:    >>LTE Arfcn:%d CellId:%d - isValid:(bool)%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] Sinr:%d[/100dB]
Line 428: RrmBlkIdleEvalNr::UpdateCellMeasResultNr() - ARFCN:%d PCID:%d eFilterCellType:(enum)%d
Line 451:    >>NrofSSBlocksToAveragePresent:(bool)%d NrofSSBlocksToAverage:%d
Line 457:    >>AbsThreshSSBPresent:(bool)%d - RSRP:(bool)%d(%d[/100dBm]) RSRQ:(bool)%d(%d[/100dB]) SINR:(bool)%d(%d[/100dB])
Line 461:    >>IntraFreq is nullptr
Line 467:    >>ServingCell is nullptr
Line 529:    >>SSB_RSRP:%d[/100dBm] - highest L1Filtered RSIndex:%d
Line 535:    >>SSB_RSRP:%d[/100dBm] - no L1FilteredResult
Line 555:    >>SSB_RSRQ:%d[/100dB] - highest L1Filtered RSIndex:%d
Line 560:    >>SSB_RSRQ:%d[/100dB] - no L1FilteredResult
Line 578:    >>SSB_RSSINR:%d[/100dB] - highest L1Filtered RSIndex:%d
Line 583:    >>SSB_RSSINR:%d[/100dBm] - no L1FilteredResult
Line 593:    >>SSB_RSSI:%d[/100dB] - highest L1Filtered RSIndex:%d
Line 598:    >>SSB_RSSI:%d[/100dBm] - no L1FilteredResult
Line 630: RrmBlkIdleEvalNr::GetSSBlocksParam() - ARFCN:%d PCID:%d
Line 640:    >>pIntraFreq is nullptr
Line 647:    >>INTRA FREQ - GetSibCellReselectionInfoCommon
Line 651:    >>failed to GetSibCellReselectionInfoCommon
Line 665:    >>INTER FREQ - GetSibCarrierFreqInfo
Line 669:    >>failed to GetSibCarrierFreqInfo
Line 688: RrmBlkIdleEvalNr::DeriveCellMeasQuantityNr() - AntIndex:%d ARFCN:%d PCID:%d eMeasQuantity:%s(%d) Threshold:%d NrofSSBlocksToAverage:%d
Line 699:    >>Unexpected eMeasQuantity:%s(%d)
Line 766:    >>%s:%d[/100dBm] - linear power scale average result - rNrOfBeamsAboveThresh:%d
Line 775:    >>%s:%d[/100dBm] - no L1FilteredResult
Line 784: RrmBlkIdleEvalNr::GetPriorityFromReselList() - RatType:%s(%d) Arfcn:%d
Line 801:    >>FOUND NR CELL - Arfcn:%d CellId:%d Priority:%d
Line 814:    >>FOUND LTE CELL - Arfcn:%d CellId:%d Priority:%d
Line 821:    >>Unexpected RatType:%s(%d)
Line 829:    >>NOT FOUND in ReselectionList - RatType:%s(%d) Arfcn:%d
Line 836: RrmBlkIdleEvalNr::PerformEvalFreqList - size:%d
Line 848: pIntraFreq is nullptr - pIntraFreq:0x%08x
Line 852: Start iteration - Configure and evalute cellList with same priority
Line 861:    >>Configure NR cellList with ID_LISTED ID_DETECTED cellset
Line 867:    >>Configure LTE cellList with ID_LISTED ID_DETECTED cellset
Line 873:    >>Unexpected RatType:%s(%d)
Line 876:    >>cellList - priority:%d size:%d
Line 883:    >>Update neighbour cell meas result
Line 913: RrmBlkIdleEvalNr::PerformEvalCellList - size:%d PriorityType:%s(%d) RatType:%s(%d)
Line 930: Unexpected type:%s(%d)
Line 935: Evaluated cellList
Line 940: Configure ReselectionList
Line 945: cellList is empty
Line 953: RrmBlkIdleEvalNr::RemoveCellsInBlackCellList - size:%d
Line 967:    >>NR CELL - Arfcn:%d CellId:%d
Line 976:    >>LTE CELL - Arfcn:%d CellId:%d
Line 985:      ::REMOVED
Line 993:    >>RemoveCellsInBlackCellList is done - size:%d
Line 1001: RrmBlkIdleEvalNr::RemoveCellsToBeDropped - size:%d
Line 1018:    >>NR CELL - Arfcn:%d CellId:%d
Line 1030:      ::REMOVED in ID DETECTED CELLSET
Line 1044:      ::MOVED to UNID LISTED CELLSET
Line 1048:      ::UNEXPECTED case
Line 1059:      ::REMOVED in CELL LIST
Line 1067:    >>RemoveCellsToBeDropped is done - size:%d
Line 1075: RrmBlkIdleEvalNr::RemoveCellsOfEqualPriorityBetweenRat - size:%d
Line 1079: SORT RAT - cellList
Line 1087:    >>removeCellsExceptRatType:%s(%d)
Line 1098:    >>NR CELL - Arfcn:%d CellId:%d
Line 1106:    >>LTE CELL - Arfcn:%d CellId:%d
Line 1113:      ::REMOVED
Line 1120:    >>RemoveCellsOfEqualPriorityBetweenRat is done - size:%d
Line 1128: RrmBlkIdleEvalNr::CheckReselCriteriaEqual - bCheckReselCriteriaEqual:(bool)%d
Line 1141: CheckReselCriteriaEqual - Start iteration, size:%d
Line 1173: Unexpected RatType:%s(%d)
Line 1193: %s ARFCN:%d PCID:%d - Srxlev:%d Squal:%d Rcriterion:%d pcell_Rcriterion:%d
Line 1200:    >>TRESEL START - %s CellId:%d Equal:(Srxlev(%d) > 0) AND (Squal(%d) > 0) AND (Rcriterion(%d) > pcell_Rcriterion(%d))
Line 1206:    >>TRESEL STOP - %s CellId:%d Equal:(Srxlev(%d) <= 0) OR (Squal(%d) <= 0) OR (Rcriterion(%d) <= pcell_Rcriterion(%d))
Line 1212:    >>TRESEL PASS - expired
Line 1216:    >>TRESEL FAIL - not expired
Line 1229: EQUAL_PRIORITY - Sort cell-ranking R criterion
Line 1239: CheckReselCriteriaEqual done - %s cellList.size:%d
Line 1247: RrmBlkIdleEvalNr::CheckReselCriteriaHigher size(%d)
Line 1267:    >>pIntraFreq is nullptr or Failed GetSibCellReselectionServingFreqInfo
Line 1271: CheckReselCriteriaHigher - Start iteration, size:%d
Line 1312: Unexpected RatType:%s(%d)
Line 1323: %s ARFCN:%d PCID:%d - Srxlev:%d Squal:%d
Line 1325:    >>ThreshServingLowQPresent:(bool)%d ThreshX_HighQPresent:(bool)%d HighQ:%d HighP:%d
Line 1331:    >>TRESEL START - %s CellId:%d HighQ:(Squal(%d) > threshX_HighQ(%d))
Line 1336:    >>TRESEL STOP - %s CellId:%d HighQ:(Squal(%d) <= threshX_HighQ(%d))
Line 1344:    >>TRESEL START - %s CellId:%d HighP:(Srxlev(%d) > threshX_HighP(%d))
Line 1349:    >>TRESEL STOP - %s CellId:%d HighP:(Srxlev(%d) <= threshX_HighP(%d))
Line 1356:    >>TRESEL PASS - expired
Line 1360:    >>TRESEL FAIL - not expired
Line 1368: CheckReselCriteriaHigher done - %s cellList.size:%d
Line 1374: %s - Ranking for higher priority cells
Line 1383: RrmBlkIdleEvalNr::CheckReselCriteriaLower size(%d)
Line 1405:    >>pIntraFreq is nullptr or Failed GetSibCellReselectionServingFreqInfo
Line 1413:    >>ThreshServingLowQPresent:(bool)%d Pcell_Srxlev:%d[/100] Pcell_Squal:%d[/100]
Line 1415: CheckReselCriteriaLower - Start iteration, size:%d
Line 1455: Unexpected RatType:%s(%d)
Line 1465: %s ARFCN:%d PCID:%d - ncell_Srxlev:%d ncell_Squal:%d
Line 1467:    >>ThreshServingLowQPresent:(bool)%d threshX_LowQPresent:(bool)%d LowQ:%d LowP:%d
Line 1476:    >>TRESEL START - %s CellId:%d LowQ(pcell_Squal(%d) < ThreshServingLowQ(%d)) AND (ncell_Squal(%d) > threshX_LowQ(%d))
Line 1482:    >>TRESEL STOP - %s CellId:%d LowQ:(pcell_Squal(%d) < ThreshServingLowQ(%d)) BUT (ncell_Squal(%d) <= threshX_LowQ(%d))
Line 1489:    >>TRESEL STOP - %s CellId:%d LowQ:(pcell_Squal(%d) >= ThreshServingLowQ(%d))
Line 1500:    >>TRESEL START - %s CellId:%d LowP:(pcell_Srxlev(%d) < ThreshServingLowP(%d)) AND (ncell_Srxlev(%d) > threshX_LowP(%d))
Line 1506:    >>TRESEL STOP - %s CellId:%d LowP:(pcell_Srxlev(%d) < ThreshServingLowP(%d)) BUT (ncell_Srxlev(%d) <= threshX_LowP(%d))
Line 1513:    >>TRESEL STOP - %s CellId:%d LowP:(pcell_Srxlev(%d) >= ThreshServingLowP(%d))
Line 1520:    >>TRESEL PASS - expired
Line 1524:    >>TRESEL FAIL - not expired
Line 1532: CheckReselCriteriaLower done - %s cellList.size:%d
Line 1538: %s - Ranking for lower priority cells
Line 1547: RrmBlkIdleEvalNr::ApplyRangeToBestCell
Line 1562: pIntraFreq:nullptr
Line 1568: Failed GetSibCellReselectionInfoCommon
Line 1575: bRangeToBestCellPresent:(bool)%d
Line 1581: rCellList:EMPTY
Line 1591: RangeToBestCell:%d, range_min:%d range_max:%d
Line 1598:    >>NR - Arfcn:%d CellId:%d Rcriterion:%d NrOfBeamsAboveThresh:%d
Line 1602:    >>Erase invalid cell in cellList
Line 1609:      ::Erase cell in cellList - OUT OF RANGE
Line 1617: RANGE TO BEST CELL - Evaluated cellList - size:%d
Line 1625: RrmBlkIdleEvalNr::ConfigureReselectionList() - size:%d
Line 1636:    >>Push NR Cell ARFCN:%d PCID:%d PRIOIRTY:%d into ReselectionList
Line 1647:    >>Push LTE Cell ARFCN:%d PCID:%d PRIOIRTY:%d into ReselectionList
Line 1654:    >>Unexpected RatType:%s(%d)
Line 1660:    >>ReselectionList is configured - size:%d
Line 1668: RrmBlkIdleEvalNr::AppendFreqListNr - size:%d eFreqType:%d(INTRA:%d INTER:%d) bUpdatePriority:(bool)%d bDedicatedPriorityProvided:(bool)%d
Line 1674: AppendFreqListNr - RRM_FREQ_TYPE_INTRA
Line 1681:    >>IntraFreqPtr is nullptr
Line 1699:    >>Skip IntraFreq Arfcn:%d Priority:%d - Priority is less than 0
Line 1704:    >>Push IntraFreq Arfcn:%d Priority:%d into freqList
Line 1711: AppendFreqListNr - RRM_FREQ_TYPE_INTER
Line 1732:    >>Skip InterFreq Arfcn:%d Priority:%d - Priority is less than 0
Line 1737:    >>Push InterFreq Arfcn:%d Priority:%d into freqList
Line 1748: AppendFreqListNr - Unexpected eFreqType:%d(INTRA:%d INTER:%d)
Line 1751: AppendFreqListNr is done - size:%d
Line 1758: RrmBlkIdleEvalNr::AppendCellListNr - size:%d
Line 1765: Unexpected rFreqResel.RatType:%s(%d)
Line 1771: rFreqResel.FreqPtr is nullptr
Line 1779: AppendCellListNr - ARFCN:%d MO:%d CellSet:%d(IDLISTED:%d IDDETECTED:%d)
Line 1789:    >>Push NR Cell ARFCN:%d PCID:%d into cellList
Line 1796: AppendCellListNr is done - size:%d
Line 1803: RrmBlkIdleEvalNr::AppendFreqListEutra - size:%d bUpdatePriority:(bool)%d bDedicatedPriorityProvided:(bool)%d
Line 1826:    >>Skip LTE Freq Arfcn:%d Priority:%d - Priority is less than 0
Line 1831:    >>Push LTE Freq Arfcn:%d Priority:%d into freqList
Line 1839: AppendFreqListEutra is done - size:%d
Line 1846: AppendCellListEutra::AppendCellListEutra - size:%d
Line 1853: Unexpected rFreqResel.RatType:%s(%d)
Line 1859: rFreqResel.Rat.LTE.FreqPtr is nullptr
Line 1866: AppendCellListEutra - ARFCN:%d MO:%d eSetType:%s(%d)
Line 1876:    >>Push LTE Cell ARFCN:%d PCID:%d into cellList
Line 1883: AppendCellListEutra is done - size:%d
Line 1890: RrmBlkIdleEvalNr::GetReselPriority - bDedicatedPriorityProvided:(bool)%d
Line 1972: RrmBlkIdleEvalNr::CompareReselPriority - Target:%d Base:%d
Line 1978:    >>INVALID_PRIORITY:%d - Target:%d == (NULL:%d or LOWEST:%d)
Line 1986:    >>HIGHER_PRIORITY(%d) - (Target:%d > Base:%d)
Line 1992:    >>LOWER_PRIORITY(%d) - (Target:%d < Base:%d)
Line 1998:    >>EQUAL_PRIORITY(%d) - (Target:%d == Base:%d)
Line 2008:    >>RrmBlkIdleEvalNr::TraceFreqList == Refer to below FREQ LIST ==
Line 2016:    >>NR FREQ - Arfcn:%d Priority:%d
Line 2024:    >>LTE FREQ - Arfcn:%d Priority:%d
Line 2041:    >>RrmBlkIdleEvalNr::TraceCellList == Refer to below CELL LIST ==
Line 2061:    >>NR CELL - Arfcn:%d CellId:%d Priority:%d bTreselStarted:(bool)%d TreselTimeStamp:%d elapsedMs:%d
Line 2078:    >>LTE CELL - Arfcn:%d CellId:%d Priority:%d bTreselStarted:(bool)%d TreselTimeStamp:%d elapsedMs:%d
Line 2117:    >>pServingCellInfo is nullptr
Line 2125:    >>cellSelectionInfo is not present
Line 2133:    >>cellMeasResult is invalid
Line 2158: SERV(PCID:%d) Squal:%d[/100] = (Rsrq:%d - (QqualMin:%d + QqualMinOffset:%d) - QoffsetTemp:%d)[/100]
Line 2193:    >>pServingCellInfo is nullptr
Line 2198: GetPcellSrxlev - ARFCN:%d PCID:%d
Line 2203:    >>cellSelectionInfo or servingCellConfigCommonSIB is not present
Line 2211:    >>cellMeasResult is invalid
Line 2238: SERV(PCID:%d) Srxlev:%d[/100] = (Rsrp:%d - (QrxLevMin:%d + QrxLevMinOffset:%d + Pcompensation:%d) - QoffsetTemp:%d)[/100]
Line 2259:    >>pIntraFreq:nullptr
Line 2265:    >>pServingCellInfo:nullptr
Line 2273:    >>failed to GetSibCellReselectionInfoCommon
Line 2281:    >>cellMeasResult is invalid
Line 2300:    >>SpeedStateReselectionParsPresent is not valid
Line 2311:    >>SpeedStateReselectionParsPresent is not valid
Line 2316:    >>MobilityStatus is not valid
Line 2338: SERV(PCID:%d) Rcriterion:%d[/100] = (Rsrp:%d + QhystSIB:%d + QhystSf:%d - QoffsetTemp:%d)[/100]
Line 2355: GetCellSqual - Unexpected RatType:%s(%d)
Line 2375:    >>rCell.RatType is invalid
Line 2382:    >>NR FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 2403:    >>failed to GetSibServFreqInfo
Line 2412:    >>failed to GetSibCarrierFreqInfo
Line 2421:    >>cellMeasResult is invalid
Line 2445: NR(PCID:%d) Squal:%d[/100] = (Rsrq:%d - (QqualMin:%d + QqualMinOffset:%d) - QoffsetTemp:%d)[/100]
Line 2460:    >>rCell.RatType is invalid
Line 2467:    >>LTE FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 2486:    >>failed to GetSibCarrierFreqInfo
Line 2494:    >>cellMeasResult is invalid
Line 2502: LTE(PCID:%d) Squal:%d[/100] = (Rsrq:%d - (QqualMin:%d + QqualMinOffset:%d))[/100]
Line 2519: GetCellSrxlev - Unexpected RatType:%s(%d)
Line 2539:    >>rCell.RatType is invalid
Line 2546:    >>NR FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 2567:    >>failed to GetSibIntraFreqCellReselectionInfo
Line 2578:    >>failed to GetSibCarrierFreqInfo
Line 2589:    >>cellMeasResult is invalid
Line 2613: NR(PCID:%d) Srxlev:%d[/100] = (Rsrp:%d - (QrxLevMin:%d + QrxLevMinOffset:%d + Pcompensation:%d) - QoffsetTemp:%d)[/100]
Line 2628:    >>rCell.RatType is invalid
Line 2635:    >>LTE FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 2654:    >>failed to GetSibCarrierFreqInfo
Line 2664:    >>cellMeasResult is invalid
Line 2672: LTE(PCID:%d) Srxlev:%d[/100] = (Rsrp:%d - (QrxLevMin:%d + QrxLevMinOffset:%d + Pcompensation:%d))[/100]
Line 2689: GetCellRcriterion - Unexpected RatType:%s(%d)
Line 2709:    >>rCell.RatType is invalid
Line 2716:    >>NR FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 2741:    >>failed to GetSibCarrierFreqInfo
Line 2751:    >>cellMeasResult is invalid
Line 2773: NR(PCID:%d) Rcriterion:%d[/100] = (Rsrp:%d - (qOffsetFreq:%d + qOffsetCell:%d) - QoffsetTemp:%d)[/100]
Line 2788:    >>rCell.RatType is invalid
Line 2795:    >>LTE FreqPtr or CellPtr is nullptr - FreqPtr:0x%08x CellPtr:0x%08x
Line 2800: GetCellRcriterionNr - ARFCN:%d PCID:%d
Line 2817:    >>cellMeasResult is invalid
Line 2825: LTE(PCID:%d) Rcriterion:%d[/100] = (Rsrp:%d - qOffsetCell:%d)[/100]
Line 2839:    >>rCell.Rat.NR.CellPtr is nullptr
Line 2852:    >>already started
Line 2855:    >>bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms]
Line 2864:    >>rCell.Rat.LTE.CellPtr is nullptr
Line 2877:    >>already started
Line 2880:    >>bStart:(bool)%d StartMs:%d[ms] curTimeMs:%d[ms]
Line 2887:    >>Unexpected RatType:%s(%d)
Line 2901:    >>rCell.Rat.NR.CellPtr is nullptr
Line 2914:    >>rCell.Rat.LTE.CellPtr is nullptr
Line 2925:    >>Unexpected RatType:%s(%d)
Line 2942:    >>rCell.Rat.NR.CellPtr is nullptr
Line 2961:    >>Compare elapsedMs:%d[ms] with tReselectionMs:%d[ms]*(SpeedStateScaleFactors:%d/100)
Line 2979:    >>rCell.Rat.LTE.CellPtr is nullptr
Line 2998:    >>Compare elapsedMs:%d[ms] with tReselectionMs:%d[ms]*(SpeedStateScaleFactors:%d/100)
Line 3014:    >>Unexpected RatType:%s(%d)
Line 3027:    >>pFreqInfo is nullptr
Line 3043:    >>sfMedium is empty
Line 3052:    >>sfHigh is empty
Line 3058:    >>MobilityStatus is not valid
Line 3075:    >>pFreqInfo is nullptr
Line 3105:    >>MobilityStatus is not valid
Line 3207: RrmBlkIdleEvalNr::CheckReselCriteriaHigherNr
Line 3212: CheckReselCriteriaHigherNr - Start iteration, size:%d
Line 3219: Erase abnormal cell in reselList
Line 3225: NR CellPtr - ARFCN:%d PCID:%d
Line 3245: RrmBlkIdleEvalNr::PerformEvalCellList - size:%d
Line 3258:    >>Unexpected RatType:%s(%d)
Line 3265: RrmBlkIdleEvalNr::PerformEvalFreqList - size:%d
Line 3278:    >>Configure NR cellList with IDLISTED IDDETECTED cellset
Line 3284:    >>Configure LTE cellList with IDLISTED IDDETECTED cellset
Line 3290:    >>Unexpected RatType:%s(%d)
Line 3299:    >>There is no cell that satisfy critera. OOS ongoing. _oos_
Line 3304:    >>There is cell that satisfy criteria. stop OOS _oos_
Line 3310:    >>There is no candidateCell for checking OOS _oos_
Line 3325: RrmBlkIdleEvalNr::CheckChangePLMN
Line 3342: RrmBlkIdleEvalNr::CheckChangePLMN There is no Candidate FREQ for checking criteria. Trigger OOS for 10 sec. _oos_ 
Line 3352: 	>>(Not apply)TimerExpiredFor10Sec is Expired. _oos_
Line 3361: RrmBlkIdleEvalNr::CheckServCriterionS
Line 3372:    >>CheckTimerExpired::ServingCell has NULL ptr. Return false _oos_
Line 3375:    >>CheckTimerExpired::SIB1 is invalid. Return false _oos_
Line 3393: 	>>(Expired OOS timer)ServingCell does not fulFil the Cell selection Criterion S during %d(DrxCycle %d, Nserv %d) ms _oos_
Line 3398: 	>>(Waiting OOS timer)ServingCell does not fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d _oos_
Line 3399: 	>>Keep state untill TimerExpired
Line 3407: 	>>(Start OOS timer)ServingCell does not fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d _oos_
Line 3408: 	>>Set current OOC Time %d
Line 3415:    >>(Not Apply)ServingCell fulFil the Cell selection Criterion S Pcell_Squal: %d, Pcell_Srxlev : %d Release OOS time_oos_
Line 3446: TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 3453: TravelListedCells:: ProcCellCriteria #%d complete
Line 3457: TravelListedCells:: try to find next Cellinfo
Line 3463: RrmBlkIdleEvalNr::ProcCellCriteriaEutra
Line 3475: ProcCellCriteria - GetCellMeasResultNrL3Filtered
Line 3530: L3Filtered cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
Line 3547:    >>REMOVE NR FREQ - Arfcn:%d Priority:%d
