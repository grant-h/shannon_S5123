Line 185: pFreqInfo is NULL
Line 196: UpdateReselPriority(Preserved): earfcn(%d) priority(%d).(%d)
Line 203: UpdateReselPriority(CSG): earfcn(%d) priority(%d)
Line 212: UpdateReselPriority(de&dedi): earfcn(%d) priority(%d).(%d)
Line 218: UpdateReselPriority(de_priority): earfcn(%d) priority(%d)
Line 225: UpdateReselPriority(mbms): earfcn(%d) priority(%d)
Line 232: UpdateReselPriority(Dedicated): earfcn(%d) priority(%d).(%d)
Line 239: UpdateReselPriority(sib): earfcn(%d) priority(%d).(%d)
Line 245: - ReselPriority changed: %d -> %d
Line 358: LteRrmIdle_UpdateReselPriorityForAllFreq
Line 426: Priority state error(%d)
Line 457: freq_timer(T320):%d
Line 491: Setting Dedicate priority is not acceptable in any cell state.
Line 498: return LteRrmIdle_SetDedicatedPriority(num_freq:%d)
Line 503: LteRrmIdle_SetDedicatedPriority(num_freq:%d)
Line 529: Invalid rat_type = %d
Line 541: dedi_priority:earfcn(%d), priority(%d).(%d)
Line 555: intra no_priority:earfcn(%d), priority(%d)
Line 571: LteRrmIdle_DeleteDedicatedPriority
Line 608: LteRrmIdle_AddToDePriorityList(earfcn:%d, freq_timer:%d)
Line 623: same earfcn is already in the MbmsPriorityList
Line 640: DePriorityList.num_freq:%d) >= LTERRM_DEPRIORITY_LIST_SIZE
Line 644: DePriorityList.num_freq:%d)
Line 646: freq_timer(T325):%d
Line 679: Setting Depriority is not acceptable in any cell state.
Line 686: return LteRrmIdle_SetDePriority(num_freq:%d)
Line 691: LteRrmIdle_SetDePriority(num_freq:%d)
Line 734: de_priority:earfcn(%d), priority(%d)
Line 741: DePriorityList->num_freq(%d) is overflow
Line 759: LteRrmIdle_DeleteDePriority
Line 788: LteRrmIdle_AddToMbmsPriorityList(earfcn:%d)
Line 796: same earfcn is already in the MbmsPriorityList
Line 811: MbmsPriorityList.num_freq:%d) >= LTERRM_MBMS_PRIORITY_LIST_SIZE
Line 814: MbmsPriorityList.num_freq:%d)
Line 837: Setting MBMS priority is not acceptable in any cell state.
Line 842: LteRrmIdle_SetMbmsPriority(num_freq:%d)
Line 847: return MbmsPriorityList(num_freq:%d)
Line 864: mbms_priority:earfcn(%d), priority(%d)
Line 871: MbmsPriorityList->num_freq(%d) is overflow
Line 893: LteRrmIdle_DeleteMbmsPriority(earfcn:%d)
Line 898: MbmsPriorityList.num_freq(%d) is zero
Line 905: MbmsPriorityList.num_freq(%d) is overflow
Line 936: mbms_priority:earfcn(%d), priority(%d)
Line 997: Init Mobility Controller
Line 1004: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 1007: LteRrm_AllocCellInfoBuf: TargetCell
Line 1011: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 1208: ListSearchEnable disable(%d)
Line 1212: BplmnMruList.listNum(%d)
Line 1247: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1270: MRU EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1292: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1309: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1316: removeCnt(%d)
Line 1353: New Detected Earfcn:%d (index:%d)
Line 1394: New Detected Earfcn:%d (index:%d)
Line 1401: New Detected Earfcn:%d (index:%d)
Line 1445: Max PSCH Energy Detected, FreqScanEnergyLevel = %d
Line 1455: energy_window_cnt = %d, FreqScanEnergyLevel = %d
Line 1462: Remove Detected Earfcn:%d (index:%d)
Line 1508: Remove Detected Earfcn:%d (index:%d)
Line 1518: (DETECT)EARFCN: %d  (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d), EnergyLevel = %d, WindowCnt = %d
Line 1532: (DROP)EARFCN: %d  (Max: %d, PeakRate: %d, PowVal: %d, max_sum_value:%d) EnergyLevel = %d, WindowCnt = %d
Line 1541: Reset Energy window
Line 1569: ACC_2 Scan Result(%d)
Line 1584: (ACC_2 DETECT)EARFCN: %d, max_energy: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1605: [%d](ACC_2 DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1630: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1647: [%d](ACC_2 DETECT)EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1662: Invalid gLteRrm_FreqScanState (%d)
Line 1745: FreqScanState ERROR (%d)
Line 1751: FreqScan.Cnt ERROR (FreqScan.Cnt = %d)
Line 1798: Remove EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1838: LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Line 1847: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 1869: [RRM TEST][SCAN] Found Target Earfcn(earfcn:%d, index:%d)
Line 1875: [RRM TEST][SCAN] NOT Found Target Earfcn(earfcn:%d, index:%d)
Line 1881: [RRM TEST][SCAN] Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 1962: LteRrmIdle_ProcOneFreqScanResult, PSS invalid, peak_rate : %d
Line 1988: Too short remain time (%d), Just wait and Try at next time
Line 1993: Enough remain time (%d), Try cell change now
Line 1997: Start LTERRM_SRCHMODE_BPLMN_SRCH(earfcn:%d)
Line 2003: LteRrm_AllocCellInfoBuf: TargetCell
Line 2007: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 2063: Invalid Bplmn State(%d)
Line 2072: ERROR: Invalid LteRrm idleproc(%s)
Line 2102: CheckRcvdPwr success (Psch_max_energy = %d, peak_rate = %d)
Line 2108: LteRrm_AllocCellInfoBuf: TargetCell
Line 2111:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 2137: CheckRcvdPwr failure (Psch_max_energy = %d, Peak_rate = %d)
Line 2145: ERROR: Invalid IdleProc
Line 2168: MTM 8960 - RSRP measure start
Line 2185: [MTM] MtmDelayTimer <Timer Start !!> - FA_SEL Delay : 100 ms
Line 2202: CheckRcvdPwr success
Line 2207: LteRrm_AllocCellInfoBuf: TargetCell
Line 2210: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 2233: ERROR: Invalid LteRrm idleproc
Line 2250: LteRrmIdle_BackupBplmnState
Line 2268: LteRrmIdle_ReStoreBplmnState
Line 2290: Receive LTE_CPHY_FREQ_SCAN_REQ Req (blind scan from %d)(mode:%d)
Line 2309: Send LTE_CPHY_FREQ_SCAN_CNF (Discrete Scan Failure)
Line 2319: Changed FreqScan mode from LTE_FPLMN_SCAN to LTE_FPLMN_SCAN_IRAT for discrete scan mode (%d+20ms)
Line 2332: abnormal(LTE_RRC_STORED_SCAN) BPLMN continue -> Stop
Line 2342: BPLMN RESTART!! (%d)
Line 2359: abnormal(SavedBplmnTargetEarfcn == NULL) BPLMN continue -> new
Line 2387: BplmnMruList.listNum:%d, BplmnScanType:%d
Line 2403: CSG Freq Scan Mode : %d
Line 2407: Freq Scan Mode : %d
Line 2414: Send LTE_CPHY_FREQ_SCAN_CNF (NOT support blind scan)
Line 2427: Send LTE_CPHY_FREQ_SCAN_CNF: NOT Test Band(%d:%d) Target(%d:%d)
Line 2440: LTERRM_INIT_STATE(from %s)
Line 2454: Send LTE_CPHY_FREQ_SCAN_CNF (NOT support this frequency)
Line 2475: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 2536: Invalid Scan mode (%d)
Line 2547: BplmnMruList.listNum is 0
Line 2590: Send LTE_CPHY_FREQ_SCAN_CNF (BPLMN disable)
Line 2607: BPLMN SCAN REQ, BplmnTargetEarfcn = %d
Line 2614: Invalid Scan mode (%d)
Line 2674: total black cell num [%d]
Line 2683: List should have been removed via reset_forbidden_list when ANY CS
Line 2729: Received EARFCN in CellSelReq [%d]
Line 2740: Added EARFCN in CellSelReq [%d]
Line 2752: ERROR: Unsuitable category(%d)
Line 2764: No freq list in CS REQ !!
Line 2807: Received EARFCN in CellSelReq [%d]
Line 2820: Added EARFCN in CellSelReq [%d]
Line 2866: ERROR: BPLMN scan is not avail in CONN
Line 2905: Received EARFCN in CellSelReq [%d]
Line 2915: Added EARFCN in CellSelReq [%d]
Line 2945: [OsloPatch] debug print for CellSelReq with Acceptable
Line 2965: Received EARFCN in CellSelReq [%d]
Line 2975: Added EARFCN in CellSelReq [%d]
Line 3044: Redirection : No freq list in CS REQ !!!
Line 3059: Received EARFCN in CellSelReq [%d]
Line 3069: Added EARFCN in CellSelReq [%d]
Line 3085: ERROR: Invalid category
Line 3109: Receive LTE_CPHY_CELL_SEL_REQ (category: %d)
Line 3184: Both commands are activated: IRAT Resel & CCO
Line 3263: is_redirect_scan: TRUE
Line 3270: Unsuitable/Barred Freq(%d) Exist!
Line 3291: Unsuitable and Barred List Removed!
Line 3297: Reset forbidden list [%d]
Line 3301: Unsuitable category
Line 3350: ENDC capa Freq : %d
Line 3354: ENDC capa Freq : %d - removed
Line 3367: Power On Cell Selection Mode On(init:%d, oos:%d, Endc:%d->%d, th:%d)
Line 3391: Invalid LteRrm state(%s)
Line 3487: cell (%d) in earfcn (%d) is NOT barred (time:%d)
Line 3571: LteRrmIdle_CheckInfCellFromBarredList(earfcn:%d)-> exists
Line 3633: cell (%d) in earfcn (%d) is barred (time:%d)
Line 3669: BarredCell is listed already(cell ID %d, earfcn %d)
Line 3673: WARNING!! (duration == 0) in LteRrmIdle_AddCellToBarredList(cell ID %d, earfcn %d)
Line 3691: pNewElem->time_offset:%d)
Line 3707: ERROR: Elem of cellbarred list is not linked
Line 3719: Cell ID in CellBarredList(%d, %d) in LteRrmIdle_ProcCellSelectReq()
Line 3723: - time_offset(%d)
Line 3738: ERROR in CellBarredList
Line 3774: cellList is NULL!!
Line 3782: Error!! NumSrchWithBarredCellCanx(%d)
Line 3791: Trial[%d] Perform normal cell search
Line 3806: Trial[%d].[%d] IC cell: Earfcn(%d) pci(%d) time_offset(%d)
Line 3830: Trial[%d]. Barred cell with earfcn(%d) is not found in barred-list!!
Line 3831: - Perform normal search
Line 3861: LteRrmIdle_DeleteCellFromBarredList Started: RAT Type(%d), Cell_ID(%d), EARFCN(%d)
Line 3865:  CellBarredList is Empty!!
Line 3883: The 1st cell deleted: BarredTimerUpdate!!
Line 3903: LteRrmIdle_DeleteCellFromBarredList Finished
Line 3938: LteRrmIdle_DeleteAllFromBarredList Started
Line 3955: CellBarredList / FreqBarredList / UnsuitableList are Empty!!
Line 3972: CellBarredList deleted
Line 4001: FreqBarredList deleted
Line 4029: UnsuitableList deleted
Line 4075: TCellBarrdDiff(%d), TCellBarredDurationDiff(%d), IsReverted(%d)
Line 4079: New element added from Cell barred list
Line 4086: pNewElem becomes the first element among the CellBarredList
Line 4159: BarredFreq is already listed (earfcn %d)
Line 4163: WARNING!! (duration == 0) in LteRrmIdle_AddFreqToBarredList(earfcn %d)
Line 4192: ERROR: Elem of Freqbarred list is not linked
Line 4204: EARFCN in FreqBarredList(%d) in LteRrmIdle_ProcCellSelectReq()
Line 4218: ERROR in FreqBarredList
Line 4261: TFreqBarrdDiff(%d), TFreqBarredDurationDiff(%d), IsReverted(%d)
Line 4265: New element added from Freq barred list
Line 4272: pNewElem becomes the first element among the FreqBarredList
Line 4341: This Freq is unsuitable already(earfcn %d)
Line 4345: WARNING!! (duration == 0) in LteRrmIdle_AddFreqToUnsuitableList(earfcn %d)
Line 4373: ERROR: Elem of Unsuitable list is not linked
Line 4386: EARFCN in UnsuitableList(%d) in LteRrmIdle_ProcCellSelectReq()
Line 4400: ERROR in UnsuitableList
Line 4443: TUnsuitableDiff(%d), TUnsuitableDurationDiff(%d), IsReverted(%d)
Line 4447: New element added from Unsuitable list
Line 4454: pNewElem becomes the first element among the UnsuitableList
Line 4497: Barred Cell[%d]: Earfcn(%d), Cell Id(%d)
Line 4521: Barred Freq[%d]: Earfcn(%d)
Line 4545: Unsuitable Freq[%d]: Earfcn(%d)
Line 4579: LteRrmIdle_GetPdm_step_value(step&value)carrier_freq:%d dl_earfcn:%d
Line 4581: LteRrmIdle_GetPdm_step_value(step&value)pdm_control_value:%d
Line 4583: LteRrmIdle_GetPdm_step_value(step&value)one_side_pdm_value:%d
Line 4585: LteRrmIdle_GetPdm_step_value(step&value)pdm_step_cnt:%d
Line 4619: NEXT FREQ SELECT :  CellSelInfo.Idx = %d,  CellSelInfo.NumFreq = %d
Line 4625: BlindCellSel(%d) SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 4665: SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 4686: SearchRepeatMode(%d)  CellSelInfo.Idx(%d)
Line 4688: LteRrmIdle_ProcCellSelectionNextFreq(FH mode)SearchRepeatMode(%d) CellSelInfo.Idx(%d)
Line 4743: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 4748: LteRrm_AllocCellInfoBuf: TargetCell
Line 4752:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 4776: All Freq is Barred
Line 4784:  CellSelInfo.Idx(%d) >=  CellSelInfo.NumFreq(%d)
Line 4840: Sorting frequency based on measurement (ENDC:%d, TH:%d)
Line 4863: [Pre_Result_%2d][Earfcn(%d) = %5d_%3d][RSRP=%d]
Line 4900: [Result_%2d][Earfcn=%5d_%3d][RSRP=%d]
Line 4914: == complete Freq. Selection based on measurement(FreqNum:%d->%d)
Line 4959: LteRrm_AllocCellInfoBuf: TargetCell
Line 4963:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 4969: NEXT CELL SELECT :  CellSelInfo.CellIdx = %d,  CellSelInfo.NumCell = %d
Line 5043: LTERRM_LAST_CELL_SELECT
Line 5060: LteRrm_AllocCellInfoBuf: TargetCell
Line 5065:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5090: please check: PrimaryCell is NULL!!
Line 5126: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5171: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5176: LteRrm_AllocCellInfoBuf: TargetCell
Line 5180:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5210: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5235: LTERRM_SPECIFIC_CELL_SELECT:  TargetCell->earfcn=%d, TargetCell->cell_ID=%d
Line 5257: LteRrmIdle_ProcCellSelection(NextCandidate=(%d))
Line 5262: ERROR: Unsuitable IdleProc
Line 5286: ERROR: Invalid next CS cand
Line 5319: [OsloKPI] CellReselSuccess(%d) / CellReselFail(%d)
Line 5336: Receive LTE_CPHY_CELL_RESEL_REQ Msg
Line 5451: LteRrmIdle_ProcCellReselection from RRC
Line 5456: ERROR: Invalid IdleProc
Line 5471: pSelectedCell is NULL
Line 5480: Try Reselection(next Ncell)
Line 5485: LteRrm_AllocCellInfoBuf: TargetCell
Line 5489: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5501: please check: PrimaryCell is NULL!!
Line 5562: Failure of returning back to the old serving cell
Line 5580: LteRrm_AllocCellInfoBuf: TargetCell
Line 5584:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 5602: please check: ServingCell is NULL!!
Line 5606: Try Reselection(Return to Pcell)
Line 5659: Stop Reselection
Line 5666: LTE_CPHY_CELL_RESEL_CNF with FAIL to RRC
Line 5673: NO REMAINING CANDIDATE CELL !!!
Line 5753: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5778: Repeat reselection for IRAT( CellSelInfo.Idx :%d)
Line 5794: ConnToIdleLastCell: TRUE to FALSE
Line 5801: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 5811: InitSrchCanx fails
Line 5829: Try Cell selection to next cell (idx:%d)
Line 5839: ERROR: Invalid fail_cause
Line 5859: ProcCellSrchCnf: IdleProc(%s), PCID(%d), earfcn(%d)
Line 5864: ERROR: Invalid LteRrm state: %s
Line 5872: bBackupCellStatusNtf
Line 5984: ERROR: Invalid fail_cause
Line 6015: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 6029: ERROR: Invalid IdleProc: %d
Line 6053: ERROR: Invalid case
Line 6106: Simulate sending LTE_CPHY_ACQ_IND to RRC(MTM)
Line 6133: ERROR: Invalid LteRrm idleproc
Line 6187: LteRrmIdle_EvalCellSelection - band7(manual): Srxlev=%d.%ddB, qRxLevMin=%ddBm
Line 6250: SrxLev = %d.%ddB, Squal = %d.%ddB, q_QualMin = %ddB
Line 6294: Warning!! earfcn of pFreqInfo(%u), pCellInfo(%d) different in LteRrmIdle_IsSuitableCellFound
Line 6343: - Suitable Ncell (%u/%d) found
Line 6478: rat(%d), arfcn(%d), Pmax(SIB)(%d), Pmax(PowerClass)(%d), Pcompansation(%d)
Line 6498: CellID(%d):Srxlev Calculation: min_RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Line 6503: CellID(%d):Srxlev Calculation: RSRP(%d)- qRxLevMin(%d)-PCompensation(%d) = Srxlev(%d)
Line 6554: Cell_ID(%d):Squal Calculation: min_RSRQ(%d)- qQualMin(%d)= Squal(%d)
Line 6559: Cell_ID(%d):Squal Calculation: RSRQ(%d)- qQualMin(%d)= Squal(%d)
Line 6608: LteRrmIdle_CheckThreshHigherInterFreq is called
Line 6625: CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d, q_QualMin:%d
Line 6629: CSG : Success reselection condition
Line 6634: CSG : Fail reselection condition(neighbor)
Line 6642: CSG : RAT:%d, CellID:%d, RSRP:%d, q_RxlevMin:%d
Line 6650: CSG : Success reselection condition : UTRA FDD
Line 6655: CSG : Fail reselection condition : UTRA FDD
Line 6662: CSG : Success reselection condition : EUTRA
Line 6668: CSG : Fail reselection condition(neighbor)
Line 6677: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high_P:%d, thresh_X_high_Q:%d
Line 6688: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6693: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6702: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high_P:%d
Line 6710: Success reselection condition : UTRA FDD
Line 6715: Fail reselection condition : UTRA FDD
Line 6722: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6728: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6738: CSG : Reselection is not supported for GERAN
Line 6744: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_high:%d
Line 6746: RSRQ:%d, q_QualMin:%d
Line 6750: Success reselection condition : GSM(%d)
Line 6755: Fail reselection condition(neighbor) : GSM(%d)
Line 6764: CSG : Reselection is not supported for CDMA2000
Line 6770: RAT:%d, RSRP:%d, thresh_X_high:%d
Line 6774: Success reselection condition : CDMA(%d), Freq(%d)
Line 6779: Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
Line 6784: ERROR: Invalid RAT_type
Line 6816: LteRrmIdle_CheckThreshLowerInterFreq: IntraFreq is NULL
Line 6823: LteRrmIdle_CheckThreshLowerInterFreq: PrimaryCell is NULL
Line 6840: LteRrmIdle_CheckThreshLowerInterFreq(CSG Srxlev_Serv:%d, RAT_Type:%d, ThreshServLow_P:%ddB, ThreshServLow_Q:%ddB)
Line 6845: LteRrmIdle_CheckThreshLowerInterFreq(Srxlev_Serv:%d, RAT_Type:%d, SIB3.ThreshServLow_P:%ddB, SIB3.ThreshServLow_Q:%ddB)
Line 6864: CSG : RSRQ:%d, q_QualMin:%d, thresh_X_low_Q:%d
Line 6870: CSG : Success reselection condition: RAT type(%d)
Line 6875: CSG : Fail reselection condition(neighbor)
Line 6883: CSG : RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Line 6892: CSG : Success reselection condition : UTRA FDD
Line 6898: CSG : Fail reselection condition : UTRA FDD
Line 6906: CSG : Success reselection condition : EUTRA
Line 6913: CSG : Fail reselection condition(neighbor)
Line 6922: RSRQ:%d, SIBx.q_QualMin:%d, SIBx.thresh_X_low_Q:%d
Line 6932: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6937: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6945: RAT:%d, RSRP:%d, SIBx.q_RxlevMin:%d, SIBx.thresh_X_low_P:%d
Line 6957: Success reselection condition : UTRA FDD(%d)
Line 6962: Fail reselection condition : UTRA FDD(%d)
Line 6969: Success reselection condition : RAT type(%d), Freq(%d), PCI(%d)
Line 6975: Fail reselection condition(neighbor): RAT type(%d), Freq(%d), PCI(%d)
Line 6985: CSG : Reselection is not supported for GERAN
Line 6992: RAT:%d, RSRP:%d, q_RxlevMin:%d, thresh_X_low_P:%d
Line 7000: Success reselection condition : GSM(%d)
Line 7005: Fail reselection condition(neighbor) : GSM(%d)
Line 7013: CSG : Reselection is not supported for CDMA2000
Line 7020: RAT:%d, RSRP:%d, thresh_X_low:%d
Line 7024: Success reselection condition : CDMA(%d), Freq(%d)
Line 7029: Fail reselection condition(neighbor) : CDMA(%d), Freq(%d)
Line 7034: ERROR: Invalid RAT_type
Line 7041: Fail reselection condition(serving)
Line 7091: BARRED FREQ
Line 7227: [HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection Zero
Line 7239: [HF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started, Eval Results:%d, TReselectionStart:%d
Line 7245: HigherPrioCRTriggered++(%d)
Line 7250: Error: IsTreselectionTrig(%d) HigherPrioCRTriggered(%d)
Line 7278: [HF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
Line 7285: [HF] S value of Cell(%d)(Freq:%d) > threshold But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7293: [HF] S value of Cell(%d)(Freq:%d) > threshold but Treselection not passed yet (CurrentTime:%d)
Line 7304: [HF] S value of Cell(%d)(Freq:%d) <= threshold
Line 7306: q_RxlevMin(%d), thresh_X_high(%d)
Line 7317: HigherPrioCRTriggered--(%d)
Line 7335: [HF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 7363: [HF] Add new CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 7373: CellReselInfo.ppCCellList NULL
Line 7410: PrimaryCell is gpHighestRankCell
Line 7416: PrimaryCell is NULL
Line 7439: Highest Ranked Cell is changed => Remove Cell/FreqBarredList
Line 7453: CellBarred Tmr STOP
Line 7516: PrimaryCell is NULL
Line 7529: BARRED FREQ
Line 7634: [NR DRDS OPT] TpClk(%d, %d) Qhyst = %d
Line 7679: RValueDiff(%d) = nRsrp(%d) - Qoffset(%d) - sRsrp(%d) - Qhyst(%d), RValueDiffMax(%d)
Line 7683: RsrqDiff(%d) = nRsrq(%d) - Qoffset(%d) - sRsrq(%d) - Qhyst(%d), ReturnRValueDiff(%d)
Line 7690: [IF] R value of Cell(%d) > 0 and Treselection Zero
Line 7698: Fast Reselection(cinr:%d, RValueDiffMax:%d), Treselection(%d)
Line 7708: [IF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
Line 7714: IntraFreqCRTriggered++(%d)
Line 7719: Error: IsTreselectionTrig(%d) IntraFreqCRTriggered(%d)
Line 7747: [IF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
Line 7752: [IF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 7758: [IF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
Line 7765: [IF] R value of Cell(%d)(Freq:%d) <= 0
Line 7776: IntraFreqCRTriggered--(%d)
Line 7797: [IF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 7816: CellReselInfo.ppCCellList NULL
Line 7846: LTERRM.Set.pHighestRankCell is NULL
Line 7852: PrimaryCell is NULL
Line 7872: Highest Ranked Cell is changed => Remove Cell/FreqBarredList
Line 7944: BARRED FREQ
Line 8017: [R value] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
Line 8020: [R value_Inst] Rs(%d) Rn(%d) Qhyst(%d) Qoffset(%d)
Line 8052: [EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection Zero
Line 8064: [EF] R value of Cell(%d)(Freq:%d) > 0, Treselection started (TReselectionStart:%d)
Line 8070: EqualPrioCRTriggered++(%d)
Line 8075: Error: IsTreselectionTrig(%d) EqualPrioCRTriggered(%d)
Line 8104: [EF] R value of Cell(%d)(Freq:%d) > 0 and Treselection passed (CurrentTime:%d)
Line 8111: [EF] R value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 8117: [EF] R value of Cell(%d)(Freq:%d) > 0 but Treselection failed (CurrentTime:%d)
Line 8124: [EF] R value of Cell(%d)(Freq:%d) <= 0
Line 8135: EqualPrioCRTriggered--(%d)
Line 8157: [EF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 8185: [EF] Add New CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 8194: CellReselInfo.ppCCellList NULL
Line 8247: BARRED FREQ
Line 8253: LteRrmIdle_EvalLowerInterFreq: PrimaryCell is NULL
Line 8355: (RAT:%d, Earfcn:%d, PCI:%d) time_diff_meas(%d), time_diff_nonintra(%d)
Line 8360: No reselection candidate(RAT:%d, earfcn:%d, id:%d). Measurement and Evaluation didn't happen at the same DRX cycle
Line 8381: Fast Reselection(cinr:%d), Treselection(%d)
Line 8395: [LF] S value of Cell(%d)(Freq:%d) and Treselection Zero
Line 8400: [LF] S value of Cell(%d)(Freq:%d) and Treselection Zero
Line 8401: But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
Line 8403: - HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
Line 8405: - other low prio. cell (but higher than serv) triggered:(%d)
Line 8418: Earfcn(%d), CellID(%d), Set IsTreselectionTrig(%d)
Line 8423: Error: IsTreselectionTrig(%d)
Line 8429: [LF] S value of Cell(%d)(Freq:%d) > threshold, Treselection started (TReselectionStart:%d)
Line 8459: [LF] S value of Cell(%d)(Freq:%d) > threshold and Treselection passed (CurrentTime:%d)
Line 8466: [LF] S value of Cell(%d)(Freq:%d) > 0 But Treselection failed (CellID(%d) != StrongestNcellID(%d))
Line 8475: [LF] S value of Cell(%d)(Freq:%d) > threshold but Treselection passed (CurrentTime:%d)
Line 8477: But Cell Reselection to IRAT lower-priority cell is suspended (other priority cell is waiting for CR).
Line 8479: - HigherPrioCRTriggered(%d) EqualPrioCRTriggered(%d) IntraFreqCRTriggered(%d)
Line 8481: - other low prio. cell (but higher than serv) triggered:(%d)
Line 8488: [LF] S value of Cell(%d)(Freq:%d) > threshold but Treselection failed (CurrentTime:%d)
Line 8496: [LF] S value of Cell(%d)(Freq:%d) <= threshold
Line 8498: Srxlev_Serv(%d), ThreshServLow(%ddB), q_RxlevMin(%ddB), thresh_X_low(%ddB)
Line 8527: [LF] NumCandidateCell:%d, ElapsedTimeInPCell:%d
Line 8555: [LF] Add new CellResel.ppCCellList[%d] Earfcn:%d, Cell id:%d
Line 8565: CellReselInfo.ppCCellList NULL
Line 8605: Resel Ranking List::
Line 8615: [%d] Earfcn:%d, Cell id:%d, RSRP:%d
Line 8671: [Eval] freq (%d) Higher (%d).(%d)>(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8690: [Eval] freq (%d) Equal (%d).(%d)=(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8703: Equal Priorities for IRAT are not SUPPORTED!-> Low Priority Evaluation
Line 8725: [Eval] freq (%d) Lower (%d).(%d)<(%d).(%d) or isCsgCell(%d)/CsgMeasReq(%d)
Line 8785: Proc CELL_RESELECTION_EVALUATION
Line 8969: UtraMeasCnt(%d) reset to 0
Line 8974: UtraMeasCnt(%d)
Line 9002: CellStatusNtf cell is selected
Line 9020: Simulate sending LTE_CPHY_CELL_SEL_CNF to RRC(MTM)
Line 9049: Simulate sending LTE_CPHY_CELL_SEL_CNF to RRC
Line 9055: Simulate sending LTE_CPHY_CELL_RESEL_CNF to RRC
Line 9068: Camp-on success.
Line 9135: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 9145: InitSrchCanx fails
Line 9165: Try cell selection to next cell (idx:%d)
Line 9194: Try Cell selection to next cell (idx:%d)
Line 9205: ERROR: Invalid category
Line 9238: (CellReselInfo.ppCCellList == NULL) or CellReselInfo.NumCCell == 0
Line 9269: BARRED FREQ: No Cell to Reselect !!!
Line 9325: CellBarred CANCEL (%d, %d) in low RSRP(%d)
Line 9329:  TargetCell is NULL
Line 9337: Csr_Inf: LTE_CELL_BARRED
Line 9376: LTE_SELECT_NEW_SUIT_CELL
Line 9393: Unsuitable category !!!
Line 9399: LTE_SCAN_NEXT_FREQ with Category: %d
Line 9411: Unsuitable category !!!
Line 9416: LTE_STOP_SCAN with Category %d
Line 9438: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d)	, q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 9453: EARFCN(%d), isCsgCell(%d)
Line 9504: LteRrmIdle_EvalCellSelection FAIL!!(%d, %d)
Line 9515: ERROR: different category cell selection/reselection
Line 9528: ERROR: Invalid category
Line 9545: CellStatusNtf cell is not selected
Line 9561: InitSrchCanx condition satisfied: RSRP(%d)>(%d), RSRQ(%d)>(%d)
Line 9568: InitSrchCanx condition not satisfied. RSRP(%d)<=(%d), RSRQ(%d)<=(%d)
Line 9573: out of range: num_cell is larger than 3. (%d)
Line 9578: Camp-on fails and no interference detected.
Line 9612: ERROR: invalid idlemode proc
Line 9646: LteRrm_AllocCellInfoBuf: TargetCell
Line 9650:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 9667: Copy TargetCell(%d), PrimaryCell is NULL
Line 9678: please check: PrimaryCell is NULL!!
Line 9684: INVALID TargetCell!!!!!!
Line 9705: EARFCN(%d), isCsgCell(%d)
Line 9751: SIB1: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 9802: SI update error: S-criteria fail
Line 9807: Stop read SIB (IPC)
Line 9848: [OsloPatch] debug print for Category change to suitable cell
Line 9849: Category change Acceptable to Suitable cell (%s State)
Line 9857: NULL ServCell when SI update or ConnRel or Category change to suitable cell(Please check primitive from other layer)
Line 9867: SameCellSelect:%d
Line 9939: BARRED FREQ: No Cell to Reselect !!!
Line 10015: SI update error: Invalid Category
Line 10028: LTE_CELL_BARRED or FREQ_BARRED: Stop measurement and Wait CellSelectReq from RRC
Line 10055: LTE_CPHY_CELL_STATUS_NTF Msg is NULL(%s State)
Line 10061: MFBI Enabled(earfcn:%d)
Line 10080: PrimaryCell is NULL
Line 10084: please check: PrimaryCell is already NULL!!
Line 10097: IntraFreq is NULL
Line 10101: please check: IntraFreq is already NULL!!
Line 10133: Receive LTE_CPHY_CELL_STATUS_NTF Msg(categoty=%d in %s State)
Line 10153: GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
Line 10157: GCID:%8x, TAC:%4x, MCC:%6d, MNC:%6d
Line 10162: Cell selection to CMCC PLMN
Line 10193: LTE_CPHY_CELL_STATUS_NTF Msg for PMAX (%d)
Line 10218: No cell for barring cell of LTE_SELECT_NEW_SUIT_CELL
Line 10262: EARFCN(%d), isCsgCell(%d)
Line 10266: BPLMN target Camp On Complete !
Line 10274: ERROR: Invalid IdleProc(%d)
Line 10303: LTE_CONT_CURRENT_FREQ will be started at next sleep time
Line 10336: LteRrm_AllocCellInfoBuf: TargetCell
Line 10340:  TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 10398: LTE_CONT_CURRENT_FREQ will be started at next sleep time
Line 10437: Earfcn is last(%d)
Line 10460: Invalid Scan mode (%d)
Line 10480: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 10482: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10494: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10557: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10600: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 10608: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 10640: LteRrm_AllocCellInfoBuf: TargetCell
Line 10644: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 10656: please check: PrimaryCell is NULL!!
Line 10719: LteRrm_SendMsgToRrc(LTE_CPHY_FREQ_SCAN_CNF)
Line 10740: Invalid LTE_STOP_SCANNING (%s State)
Line 10805: [%d] sibEarfcn[%d] sibBw[%d]
Line 10847: LTE_SIB1_READ_FAIL & Spare timer expired: CellSel.CellIdx(%d)
Line 10858: skip LTE_CPHY_FREQ_SCAN_DONE_NTF(%d) in PLMN_SCAN_STOP state
Line 10870: ERROR: Invalid scan done ntf
Line 10893: LteRrmIdle_ProcFreqScanDoneNtf(scan_update = %d)
Line 10934: Invalid gLteRrm_BplmnState = %d
Line 10987: [%d] EARFCN: %d, value: %d, peak rate: %d, pow_val:%d, psch_max_sum:%d
Line 11011: [RRM TEST][SCAN] Found Target Earfcn(earfcn:%d, index:%d)
Line 11016: [RRM TEST][SCAN] NOT Found Target Earfcn(earfcn:%d, index:%d)
Line 11021: [RRM TEST][SCAN] Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 11086: Earfcn is last(%d)
Line 11109: Invalid Scan mode (%d)
Line 11131: LTE_STOP_BPLMN_SCAN: DrxSpareTmr is NOT running
Line 11133: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 11145: Sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 11161: BPLMN start (BplmnTargetEarfcn=%d)
Line 11178: Invalid BPLMN state (%d)
Line 11199: pFreqInfo==NULL in LteRrmIdle_ResetCrTrigFlag
Line 11214: - earfcn(%d) cell_id(%d): reset IsTreselectionTrig(%d)
Line 11224: - earfcn(%d) cell_id(%d): reset IsTReselStarted(%d), TReselectionStart(%d), MeasureRetriedBeforeReselection(%d)
Line 11252: pFreqList==NULL in LteRrmIdle_ResetFreqCrTrigFlag
Line 11288: LteRrmIdle_ResetHighEqualFreqCrTrigFlag
Line 11351: InitSrchCanx: (%d)Update cell: cp_type(%d), cell_id(%d), time_offset(%d)
Line 11354: - RSRP(%d), ant_num(%d), dl_bw(%d)
Line 11358:  TargetCell is NULL. No update for InitSrchCanx
Line 11389: Reset csr Inf_cell set for InitSrchCanx
Line 11426: sorting inf cells with rsrp
Line 11444: Cells larger than (%d)-th place deleted
Line 11463: Mode change to LTERRM_INF1TOL1LC. Not overlapped. Timing diff(%d)
Line 11467: Mode change to LTERRM_INF2TOL1LC. Overlapped. Timing diff(%d)
Line 11475: Try InitSrchCanx -> Mode change to LTERRM_INF1TOL1LC
Line 11481: num_cell == out of range
Line 11510: Save Prev INF Info and Init InfCellset
Line 11605: InitSrchCanx: InfMode == LTERRM_INFDEFAULT
Line 11612: InitSrchCanx: InfMode == LTERRM_INF1TOL1LC
Line 11616: InitSrchCanx: Sync Ncell detected once again
Line 11628: InitSrchCanx: InfMode == LTERRM_INF2TOL1LC
Line 11633: InitSrchCanx: Wrong LTERRM.Set.InfMode
Line 11638: InitSrchCanx: No INF-suspected cell exists
Line 11672: LteRrmIdle_ResetTempQoffsetList
Line 11703: LteRrmIdle_StartTempQoffsetTimer
Line 11729: - No cells to run temp Qoffset timer
Line 11737: temporary Qoffset Tmr START(%d ms)
Line 11765: No running timer found for temp Qoffset -> Need to check
Line 11789: Temp Qoffset exist(%d)
Line 11797: - Temp Qoffset number error. pList == NULL -> Not applied
Line 11812: - %d. duration is too large(%d) -> Not applied
Line 11837: - LTE:rat(%d) earfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 11844: - UMTS:rat(%d) arfcn(%d) pci(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 11852: - GSM:rat(%d) arfcn(%d) BSIC(%d) qtemp_offset(%d) timestamp(%d ms) duration(%d s) -> expireTime(%d us)
Line 11856: - rat(%d) out of range
Line 11868: Warning!! Temp Qoffset OffsetNum(%d) out of range -> Not applied
Line 11952: Applying temp Qoffset to earfcn(%d) pci(%d)
Line 11956: - TempQoffset(%d): Srxlev or RSRP (%d->%d)
Line 11962: - TempQoffset(%d): Squal or RSRQ (%d->%d)
Line 11989: - Dropped cell was in T_reselection
Line 11993: - HigherPrioCRTriggered-- (%d -> %d)
Line 11998: - IntraFreqCRTriggered-- (%d -> %d)
Line 12004: - EqualPrioCRTriggered-- (%d -> %d)
Line 12035: ERROR: pTargetFreq == NULL
Line 12051: - Check Compared Freq (Earfcn(%d),Pci(%d) priority(%d), IsTreselectionTrig(%d)
Line 12054: - Check Target Freq (RAT Type:(%d), Earfcn(%d), priority(%d)
Line 12060: - Reselection to lower-prio. suspended (Earfcn(%d),Pci(%d) has higher priority(%d)>(%d))
Line 12096: ERROR: pTargetFreq == NULL
Line 12101: Monitor any cells under reselection (higher priority than earfcn:%d)
