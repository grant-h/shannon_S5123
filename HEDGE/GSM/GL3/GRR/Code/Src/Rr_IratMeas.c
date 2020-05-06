Line 174: 3G NCell list:
Line 184:  Index:%d Uarfcn:%d SCD:%d FDD:%d RSCP:%d Ec_No:%d
Line 209: ***********************************************************************
Line 211: Utran Monitor List - NumOfArfcn (%d)
Line 217:   (%d):uarfcn(%d):#SCD(%d):SCD(%d) / isBAList (%d)
Line 226:   (%d):TDD uarfcn(%d):#SCD(%d):SCD(%d) / isBAList (%d)
Line 231: Utran Neighbout Cell list 
Line 232: Utran Prev Neighbout Cell list 
Line 234: UtranReselUarfcn (%d)
Line 235:    %d %d %d %d
Line 236:    %d %d %d %d
Line 238:    %d %d %d %d
Line 239:    %d %d %d %d
Line 241: UtranReselUarfcnToScan (%d)
Line 242:  uarfcn  %d %d %d %d
Line 243:  scd  %d %d %d %d
Line 244: ***********************************************************************
Line 304: Invalid number of max band for 3G !!!! %d
Line 311: uarfcnIndex %d
Line 339: TDD Uarfcn %d found
Line 352: UARFCN range is OK %d - is3GBAList (TRUE)
Line 360: CELL SELECTION ON CHN REL -->> UTRAN TDD CELLS, %d
Line 367: Change DuplexMode to prev one -> %d
Line 378: CELL SELECTION ON CHN REL -->> UTRAN FDD CELLS, %d
Line 385: Change DuplexMode to prev one -> %d
Line 393: UARFCN range is INVALID !!! %d
Line 430: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) List1->NumUarfcns_TDD=%d 
Line 437: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) List2->NumUarfcns_TDD=%d
Line 446: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) 
Line 453: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) 
Line 487:  Uarfcn:%d SCD:%d isBaList %d
Line 517:  Uarfcn:%d SCD:%d isBaList %d
Line 561:  TDD Uarfcn:%d SCD:%d isBaList %d
Line 591:  TDD Uarfcn:%d SCD:%d isBaList %d
Line 663: [G2U][PRIO] rr_UtranConvertNcell: skip 3G ncell[%d,%d] which has invalid or lower priority:%d
Line 676:  Uarfcn=%d is 3GBA(%d)
Line 701:  SCD=%d
Line 746:  TDD Uarfcn=%d is3GBA(%d)
Line 774:  SCD=%d
Line 842: rr_AddUtranReselUarfcns: skip UARFCN:%d which is handicapped
Line 856: [G2U][PRIO] rr_AddUtranReselUarfcns: skip UARFCN:%d which has invalid or lower priority:%d
Line 868:  Resel UARFCN=%d is already in 3G monitoring list - check SCD
Line 876: rr_AddUtranReselUarfcns: skip 3G ncell [%d,%d] which is handicapped
Line 887:   Resel 3G ncell [%d,%d] is already in list - look for another SCD
Line 902:   Resel 3G ncell [%d,%d] is copied into MonList->UtranList[%d].ScramblingCodeList[%d]
Line 931:   Resel 3G ncell [%d,%d] is overwritten on MonList->UtranList[%d].ScramblingCodeList[%d]
Line 938:   Resel 3G ncell [%d,%d] is not added into 3G Monitor List
Line 955:  Resel Uarfcn=%d isBaList %d
Line 968:   SCD=%d
Line 1000: [TDD] rr_AddUtranReselUarfcns: skip UARFCN:%d which is handicapped
Line 1011: [TDD] Resel UARFCN=%d is already in 3G monitoring list - check SCD
Line 1019: [TDD] rr_AddUtranReselUarfcns: skip 3G ncell [%d,%d] which is handicapped
Line 1030: [TDD]  Resel 3G ncell [%d,%d] is already in list - look for another SCD
Line 1045: [TDD]  Resel 3G ncell [%d,%d] is copied into MonList->UtranList_TDD[%d].ScramblingCodeList[%d]
Line 1075: [TDD]  Resel 3G ncell [%d,%d] is overwritten on MonList->UtranList_TDD[%d].ScramblingCodeList[%d]
Line 1082: [TDD]  Resel 3G ncell [%d,%d] is not added into 3G Monitor List
Line 1099:  Resel TDD Uarfcn=%d isBaList %d
Line 1109:   SCD=%d
Line 1155: Update 3G Monitor List (UtranListSent=%d)
Line 1191: Only QFRUarfcn %d is added for measurement
Line 1216: QFRUarfcn %d is added for measurement
Line 1225: NumUarfcn_TDD reached max value!!
Line 1233: NumUarfcn_TDD (%d) Num Cell(%d)
Line 1237: TotalNumCells(%d)
Line 1267: Only QFRUarfcn is already added for measurement
Line 1278: Check for deletions:
Line 1297: Check for additions:
Line 1313: Check for deletions: UtranMonitorListPrevNCL
Line 1342: UtranMonitorList Updated
Line 1350: 	(%d):uarfcn(%d):#SCD(%d):SCD(%d) isBaList (%d) 
Line 1358: 	(%d):TDD uarfcn(%d):#SCD(%d):SCD(%d) isBaList (%d) 
Line 1369: Monitor List is corrupted (rr_ServSupp.UtranMonitorList.NumUarfcns=%d)
Line 1376: Monitor List is corrupted (rr_ServSupp.UtranMonitorList.NumUarfcns_TDD=%d)
Line 1381: Monitor List contains:
Line 1386:  Uarfcn %d with %d Scrambling Codes
Line 1391: Monitor List contains:
Line 1396:  TDD Uarfcn %d with %d Scrambling Codes
Line 1401: Monitor List is empty
Line 1404: Utran Prev Neighbout Cell list before remve duplicates 
Line 1423: Utran Prev Neighbout Cell list after remove duplicates 
Line 1457: Update Prev 3G Monitor List (UtranListSent=%d)
Line 1460: rr_FDDSupported(%d) rr_UtranMeasState(%d) AUTONOMOUS_RESELECTION(%s)
Line 1478: Check for additions: UtranMonitorListPrevNCL
Line 1486: UtranMonitorListPrevNCL Updated
Line 1502: Previous 3GMonitor List is corrupted (rr_ServSupp.UtranMonitorListPrevNCL.NumUarfcns=%d)
Line 1511: Previous 3GMonitor List is corrupted (rr_ServSupp.UtranMonitorListPrevNCL.NumUarfcns_TDD=%d)
Line 1521: Previous 3G Monitor List contains:
Line 1526:  Uarfcn %d with %d Scrambling Codes
Line 1532: TDD Uarfcn %d with %d Scrambling Codes
Line 1537: Previous 3G Monitor List is empty
Line 1562: UARFCN ScanReq: Fdd(%d),MeasState(%d),RR_IDLE(%d),RR_PKT(%d)
Line 1563: UARFCN ScanReq:AccessInPrg(%d),Reorg(%d),NCo(%d),GmmRdy(%d)
Line 1564: UARFCN ScanReq: rr_PostCsNonDrxPeriod(%d),rr_PostPsNonDrxPeriod(%d)
Line 1565: UARFCN ScanReq: RR_STATE_IS_CELL_SELECTION(%d),rr_ServSupp.page_mode(%d),CS_PAGING_ON_PCH(%d)
Line 1566: UARFCN ScanReq: rr_ServSupp.packet_page_mode(%d),rr_ServCell->OnPBCCH(%d)
Line 1567: UARFCN ScanReq: NbUtranReselUarfcnsToScan(%d),rr_MmDuplexMode(%d / 0:FDD 1:TDD 2:FDD&TDD)
Line 1571: Partial Search will be performed in PTM
Line 1580: ScanRequired(%d)
Line 1624: Request scan of UARFCN %d, FDD %d
Line 1626: UARFCN_SCAN_TRIGGERED
Line 1636: ScanNeeded(%d)
Line 1637: rr_MmDuplexMode(%d / 0:FDD 1:TDD 2:FDD&TDD)
Line 1643: UARFCN_SCAN_HOLD 2
Line 1681: UARFCN SCAN ABORT from GL1, Set UARFCN_SCAN_HOLD
Line 1697: MPH_UARFCN_SCAN_RSP for UARFCN %d, FDD %d
Line 1718:  TDD Scrambling Codes changed
Line 1726:  Number of TDD Scrambling Codes changed
Line 1740:  Scrambling Codes changed
Line 1748:  Number of Scrambling Codes changed
Line 1765: ERROR RtkGetMemory returned NULL
Line 1772:   SCD:%d
Line 1777: [TDD][G2U][SCAN] 3G NCELL [%d,%d]
Line 1784:    FOUND from the UtranReselUarfcnToScan list, preserve it
Line 1816: [G2U][SCAN] 3G NCELL [%d,%d]
Line 1823:    FOUND from the UtranReselUarfcnToScan list, preserve it
Line 1861:  rr_HandleUarfcnScanRsp: Set the FddRscpThreshold:%d
Line 1891:   No Scrambling Codes!
Line 1915:   Too many Scrambling Codes in message - %d !!!
Line 1957:  Max UARFCNs being monitored
Line 1975:   Remove UARFCN %d from scan list
Line 1980:   ERROR Scenario NbUtranReselUarfcnsToScan (%d)  
Line 2007: rr_HandleUarfcnScanRsp: ScanRequred(%d). ScanTimer(%d)
Line 2082: Update 3G Resel UARFCN List
Line 2094:  3G MRU FDD : [%d] [%d] [%d] [%d] [%d] [%d]
Line 2097:  3G MRU FDD : [%d] [%d] [%d] [%d] [%d] [%d]
Line 2102:  3G MRU FDD is empty
Line 2109:  3G MRU TDD : [%d] [%d] [%d] [%d] [%d] [%d]
Line 2112:  3G MRU TDD : [%d] [%d] [%d] [%d] [%d] [%d]
Line 2117:  3G MRU TDD is empty
Line 2167:  Don't handle Resel UARFCNs
Line 2246:  Remove UARFCN %d from scan list
Line 2251:   ERROR Scenario NbUtranReselUarfcnsToScan (%d)  
Line 2310:  Add Resel UARFCN %d to scan list
Line 2329:  Can't add Resel UARFCN %d to scan list as it's already full
Line 2365:  Add Resel TDD UARFCN %d to scan list
Line 2376:  Can't add Resel TDD UARFCN %d to scan list as it's already full
Line 2408:  Add NCell UARFCN %d to scan list
Line 2427:  Can't add NCell UARFCN %d to scan list as it's already full
Line 2454:  Add NCell TDD UARFCN %d to scan list
Line 2465:  Can't add NCell UARFCN %d to scan list as it's already full
Line 2490:  3G MRU UARFCN %d is already in scan list [%d]
Line 2513:  Add 3G MRU UARFCN[%d] %d to scan list[%d]
Line 2531:  Can't add 3G MRU UARFCN[%d] %d to scan list(num:%d) as it's already full or invalid
Line 2551:  3G MRU TDD UARFCN %d is already in scan list [%d]
Line 2574:  Add 3G MRU TDD UARFCN[%d] %d to scan list[%d]
Line 2584:  Can't add 3G MRU TDD UARFCN[%d] %d to scan list(num:%d) as it's already full or invalid
Line 2673: AbsIndexStartEmr(%d)/ Nb 3G Meas(%d)
Line 2674: Check UtranMeasData in UtranNeighbourCellList
Line 2679: Meas Uarfcn:%d SCD:%d FDD:%d
Line 2710:   Cell found - Index %d
Line 2717: ReportType:%d, AbsIndEmr:%d,  Cell found - Index:%d
Line 2725: 3G cell Index:%d
Line 2762:    RepIdx:%d RSSI:%d RSCP:%d Ec_No:%d ValidMeasAge %d
Line 2788:   ReselUarfcn found
Line 2823:    RSCP:%d Ec_No:%d, ValidMeasAge %d
Line 2837:  TDD ReselUarfcn found
Line 2872:    RSCP:%d Ec_No:%d, ValidMeasAge %d
Line 2883:  Measurment not found in list
Line 2890:  Adding Partial list  of TDD cell: UARFCN:%d
Line 2894:  Adding Partial list  of TDD cell: index:%d
Line 2895:  Adding Partial list  of TDD cell: CPI:%d
Line 2917:  Adding Partial list  of TDD cell: NumScramblingCodes_TDD:%d
Line 2929: Check UtranMeasData in UtranPrevNeighbourCellList
Line 2938: Meas Uarfcn:%d SCD:%d FDD:%d
Line 2989:  Prev  RepIdx:%d RSSI:%d RSCP %d Ec_No:%d ValidMeasAge %d
Line 3027: MPH_UTRAN_MEAS_REPORT_IND(%d)
Line 3031: Ignore MPH_UTRAN_MEAS_REPORT_IND, rr_UtranMeasState %d
Line 3037: Ignore MPH_UTRAN_MEAS_REPORT_IND, rr_InterRatStatus = %d
Line 3051: [G2U][MEAS] 3G UARFCN [%d] RSSI = %ddBm / UtranMeasData->NbMeas:%d
Line 3072: [G2U][MEAS] 3G NCELL [%d,%d] RSCP = %ddBm, Ec/No = %ddB / UtranMeasData->NbMeas:%d
Line 3124: QFR: j-%d MeasResultList UARFCN:%d SCD:%d RSCP:%d
Line 3151: [TDD][G2U][MEAS] 3G UARFCN [%d] RSSI = %ddBm / UtranMeasData->NbMeas:%d
Line 3171: [TDD][G2U][MEAS] 3G NCELL [%d,%d] RSCP = %ddBm / UtranMeasData->NbMeas:%d
Line 3210: UtranNeighbourCellList:
Line 3213: UtranPrevNeighbourCellList:
Line 3252:   Check for 3G Cells with RSSI, UtranMeasData->NbMeas:%d, NoOfCellsReqd:%d, rr_3GCellAllowedToReport:%d
Line 3257:   Check for 3G Cells with RSCP/Ec_No, UtranMeasData->NbMeas:%d, NoOfCellsReqd:%d, rr_3GCellAllowedToReport:%d
Line 3263:   rr_3GCellAllowedToReport: FALSE
Line 3279:    Meas:%d Index:%d Uarfcn:%d SCD:%d RSCP:%d EcNo:%d
Line 3306:     Measurement discarded - Report below threshold
Line 3317:     Measurement discarded - Report below threshold
Line 3326: Forcing MR instead of EMR as rr_ForceNormalReporting
Line 3333:     Measurement discarded - Duplicate GSM Index
Line 3344:     Measurement discarded - Duplicate Index %d 
Line 3360:   Report  Index:%d ReportQuantity:%d NbMeas:%d
Line 3373: 3G Cells RSSI: %d,SCD: %d, transfer: %d 
Line 3378: 3G Cells no measurements 
Line 3382:    3G Cells selected: %d
Line 3406: rr_SelectUtranMeasReqMode: QSearch=%d RxLev=%d
Line 3428:  3G Neighbour Cell list is not empty. Set mode to %d
Line 3462: [G2U][PRIO] rr_SelectUtranMeasReqMode: CurrentMode:%d ThreshPrioritySearch:%d, NumHighPrioUarfcn:%d
Line 3468: [G2U][PRIO] Since High priority UARFCN are there, keep CurrentMode:%d
Line 3476: [G2U][PRIO] Since no High priority UARFCN are there and IgnoreLowPriority is TRUE, Mode is set to UTRAN_MEAS_REQ_STOP
Line 3480: [G2U][PRIO] Since IgnoreLowPriority is FALSE, keep CurrentMode:%d
Line 3490: Triggering measurements only for QFR
Line 3494: rr_SelectUtranMeasReqMode End: Mode=%d 
Line 3522: UTRAN_MEAS_REQ_STOP after IRAT Resel
Line 3527: No Need to Stop IRAT Meas %d %d 
Line 3557: rr_UtranMeasTrigger: FDD not Supported && rr_UtranMeasState == UTRAN_MEAS_REQ_STOP  
Line 3561: MODE_UPDATED_TDD(StackId) is true , rr_FDDSupported force set to TRUE
Line 3566: MODE_UPDATED_TDD is false
Line 3573: rr_UtranMeasTrigger: rr_InterRatStatus %d,  rr_State%d
Line 3575:  QSearchP %d,  QSearchI %d, rr_UtranMeasState %d
Line 3577: QSearchP_PMO_PCCO (%d)
Line 3582: rr_UtranMeasTrigger: QSearchI will be used for QSearchP (%d)
Line 3587: rr_UtranMeasTrigger: QSearchP_PMO_PCCO will be used for QSearchP (%d)
Line 3628: 3G measurement is blocked due to none of 3G cells in 3G NCL
Line 3640: 3G measurement is blocked by Qsearch_P(%d). Use Qsearch_I(%d)
Line 3677: Stopping IRAT measurements in rr_PlmnState: %d
Line 3684: Stopping IRAT measurements in rr_InterRatStatus: %d
Line 3692: rr_FDDSupported %d
Line 3705: UTRAN_MEAS_REQ_START
Line 3709: UTRAN_MEAS_REQ_STOP
Line 3775: Error!!! Out Of Range(Type:%d,Val:%d)
Line 4092: Error!!! Out Of Range rr_ConvertToMeasuredValue(Type:%d,Val:%d)
Line 4204: Error!!! Invalid Type rr_ConvertToReportedValue(Type:%d,Val:%d)
Line 4263: [TDD] UtranNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell_Tdd[%d]
Line 4278: [FDD] UtranNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell[%d]
Line 4314: [FDD] UtranReselUarfcnToScan[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell[%d]
Line 4342: [TDD] UtranReselUarfcnToScan[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell_Tdd[%d]
Line 4382: [FDD] UtranPrevNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell[%d]
Line 4397: [TDD] UtranPrevNeighbourCellList[%d] assign 3G NCELL [%d,%d] into UtranReselList.Cell_Tdd[%d]
Line 4421: NoOfCells == UtranReselList.NoOfCells
Line 4427:  UtranReselList.NoOfCells FDD:%d, TDD:%d
Line 4458: All 3G Resel Params Cleared
Line 4562: Release All 3G Prio Lists 
Line 4602:   3GHighPrioReselList (%d) 3GLowPrioReselList (%d) 3GReselGSMList(%d)
Line 4653: Finding Freq and SCD in Prio IRAT LIST: F(%d) SCD (%d)  Elem(%d)
Line 4657: Elem (%d) SCD (%d)  : F(%d) 
Line 4660: Address of Elem returned is (%d):
Line 4718: Adding  in Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 4738: Start list with  %d
Line 4753: ERROR RtkGetMemory returned NULL
Line 4771: Meas already in  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 4779:  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 4837: rr_sortQueueForG2UReselection: numEutranCell(%d)
Line 4859:  Before sorting 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4875:  After sorting on Priority 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4895:  After sorting on Snonserving 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4905: rr_sortQueueForG2UReselectionGSM: numUtranCell(%d)
Line 4928:  Before sorting 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4940:  After sorting on Snonserving 3G NCELL [%d,%d] [Priority(%d) SNONserving(%d) ReselIndex(%d)]
Line 4977: [G2U][PRIO][EVAL] 2G SCELL [%d,%d] [C1:%d GERAN_PRIORITY:%d THRESH_GSM_low:%d H_PRIO:%d]
Line 4992: 3G NCELL [%d,%d] Reset T_ReselCount to zero, UtranMeasAge:%d
Line 5024: 3G NCELL [%d,%d] no valid priority or threshold is provided
Line 5037: 3G NCELL [%d,%d] %s Priority:%d S_UTRAN:%d RSCP:%d
Line 5042:  QRXLEVMIN:%d(%d) THRESH_UTRAN_high:%d(%d) THRESH_UTRAN_low:%d(%d)
Line 5049: 3G NCELL [%d,%d] Utran_priority(%d) is invalid or duplicated with GERAN or E-UTRAN
Line 5058: 3G NCELL [%d,%d] [%c][Ec_No (%d) >= FDD_Qmin - FDD_Qmin_Offset (%d)]
Line 5066: Utran_priority(%d) is greater than GeranPriority (%d)
Line 5069: Check for 1st Resel criteria for Uarfcn (%d) SCD (%d) SNonServMeas (%d)
Line 5074: 3G NCELL [%d,%d] [%c][RSCP (%d) > THRESH_UTRAN_high + UTRAN_QRXLEVMIN (%d)]
Line 5082: SNonServMeas(%d) > ConvertedThreshUtranHigh(%d)
Line 5092: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 5103: T_ReselCountHigh (%d) should be more than (%d) sec
Line 5111: Add Uarfcn(%d) to PriorityQ T_ReselCountHigh (%d)
Line 5120: 1st Resel criteria not satisfied SNonServMeas (%d) < ConvertedThreshUtranHigh (%d)
Line 5126: Check for 2nd Resel criteria for Uarfcn (%d) SCD (%d) SNonServMeas (%d)
Line 5137: 3G NCELL [%d,%d] [%c][RSCP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 5142: 1-SNonServMeas (%d) >  C1+H_PRIO=(%d) 
Line 5151: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 5162: 1-T_ReselCountGSM (%d) should be more than (%d) sec
Line 5170: Add Uarfcn(%d) to PriorityQ T_ReselCountGSM (%d)
Line 5180: 2nd Resel criteria not satisfied SNonServMeas (%d) is less than C1+HPRIO (%d)
Line 5189: 3G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 5204: Utran_priority(%d) is less than GeranPriority (%d)
Line 5209: Check 1st Resel Criteria for low priority UARFCN (%d)  SCD(%d)
Line 5214: 3G NCELL [%d,%d] [%c][RSCP (%d) > THRESH_UTRAN_low + UTRAN_QRXLEVMIN (%d)]
Line 5228: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 5244: Add Uarfcn(%d) to PriorityQ T_ReselCountLow (%d)
Line 5251: 1st Resel criteria not satisfied for LP cells SNonServMeas (%d) < ConvertedThreshUtranLow (%d)
Line 5257: Check 2nd Resel Criteria for low priority UARFCN (%d)  SCD(%d)
Line 5263: 3G NCELL [%d,%d] [%c][RSCP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 5271: 2-SNonServMeas (%d) >  C1+H_PRIO=(%d)
Line 5280: Higher priority 3G cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 5291: 2-T_ReselCountGSM (%d) should be more than (%d) sec
Line 5299: Add Uarfcn(%d) to PriorityQ T_ReselCountGSM (%d)
Line 5305: 2nd Resel criteria not satisfied SNonServMeas (%d) is less than C1+HPRIO (%d)
Line 5314: 3G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 5329: [G2U][PRIO][EVAL] 3G NCELL [%d,%d] HIGH(%d) LOW(%d) GSM(%d) TRESEL(%d)
Line 5334: 3G Cell Handicapped Uarfcn (%d) SCD (%d)
Line 5341: Num3GCellThreshUTRANHigh (%d) Num3GCellThreshUTRANLow (%d) Num3GCellThreshUTRANGSM (%d)
Line 5345: High Priority 3G cell avaliable for reselection in rr_3GHighPrioReselList
Line 5354: NO High Priority 3G cell avaliable in rr_3GHighPrioReselList
Line 5359: Low Priority 3G cell avaliable for reselection in rr_3GLowPrioReselList
Line 5368: NO Low Priority 3G cell avaliable in rr_3GLowPrioReselList
Line 5373: 3G cell avaliable for reselection in rr_3GReselGSMList
Line 5382: NO GSM Priority 3G cell avaliable in rr_3GReselGSMList
Line 5445: Tdd_Qoffset_in_dB %d
Line 5471: InBand panalty is added due to signal drop !!!!
Line 5490: [G2U][RANK][EVAL][INDIA] 3G NCELL [%d,%d] RSCP = %ddBm, Ec/No = %ddB, count:%d
Line 5512: [G2U][RANK][EVAL] 3G NCELL [%d,%d] RSCP = %ddBm, Ec/No = %ddB, count:%d, ValidMeasAge:%d
Line 5520:  Reset RscpAboveGsmCellCount to zero, UtranMeasAge:%d
Line 5540:  FDD_RSCPmin_in_dBm:%d, minValue:%d, FDD_RSCP_threshold_in_dBm:%d
Line 5552:  FDD_RSCP_threshold_in_dBm:%d
Line 5562:  Rscp(%d) > (RxLev(%d)+Qoffset(%d)
Line 5567:      Rscp(%d) >= FDD_RSCP_threshold_in_dBm(%d)
Line 5588:      Ec_No(%d) >= FDD_Qmin(%d) - FDD_Qmin_Offset(%d) - InBandPenalty(%d) for Count:%d
Line 5599:      Ec_No(%d) < FDD_Qmin(%d) - FDD_Qmin_Offset(%d) - InBandPenalty(%d)
Line 5611:  Rscp(%d) < FDD_RSCP_threshold_in_dBm(%d)
Line 5622:  Rscp(%d) <= (RxLev(%d)+Qoffset(%d))
Line 5634: No 3G Signal Uarfcn:%d SCD:%d RSCP:%d EcNo:%d
Line 5659: [TDD][G2U][RANK][EVAL] 3G NCELL [%d,%d] RSCP = %ddBm, count:%d, ValidMeasAge:%d
Line 5668:  Reset RscpAboveTddQoffsetCount to zero, UtranMeasAge:%d
Line 5688:  RSCP_in_dBm(%d) >= Tdd_Qoffset_in_dB(%d) for RscpAboveTddQoffsetCount:%d
Line 5698:  RSCP_in_dBm(%d) < Tdd_Qoffset_in_dB(%d) for RscpAboveTddQoffsetCount:%d
Line 5710: No 3G Signal Uarfcn:%d SCD:%d RSCP:%d EcNo:%d
Line 5793: Wrong uarfcn. couldn't find right frequency BAND. default set to high band
Line 5878: Fast resel for 3G
Line 5882: InBand checking for gARFCN(%d) bandInd(%d), uARFCN(%d)
Line 5887: converted Freq : 2G(%d), 3G(%d)
Line 5891: Wrong ARFCNs for Inband checking
Line 5907: InBand detector is working !!!!
Line 5912: Normal evaluation !!!!
Line 5969: Find Suitable 3G Cell ,rr_InterRatStatus %d rr_ReselectionReason=%d rr_RlcSuspensionState =%d
Line 5975: 3G Cell Reselection is already going on
Line 5997: rr_3GPriorityParaPresent (%d) and  rr_GeranPriorityParaPresent (%d) present
Line 6015: rr_3GPriorityParaPresent (%d) and  rr_GeranPriorityParaPresent (%d) Not present..Use Rank based Algo
Line 6062: InBand panalty is added due to signal drop !!!!
Line 6096: 3G Cell or UARFCN Handicapped
Line 6118: [G2U][IMM][EVAL] Best 3G Cell Selected - [%d,%d]
Line 6124: Tdd_Qoffset %d Due to choosing best UTRAN TDD Cell
Line 6141: isInBand %d
Line 6156: [TDD][G2U][IMM][EVAL] 3G Cell Selected - [%d,%d]
Line 6173: 3G Cell or UARFCN Handicapped
Line 6191: [G2U][PRIO][EVAL] 3G NCELL is not selected
Line 6200: [G2U][PRIO][EVAL] Both UtranPrioReselCell[%d,%d] and UtranReselList[%d][%d,%d] should be equal
Line 6206: [G2U][PRIO][EVAL] 3G NCELL [%d,%d] is Handicapped
Line 6213: [G2U][PRIO][EVAL] 3G NCELL [%d,%d] T_ReselType(%d) T_ReselCount(%d) should be higher then TReselection(%d)
Line 6222: [G2U][PRIO][EVAL] 3G Cell Selected - [%d,%d] T_ReselType(%d) T_ReselCount(%d) TRESEL(%d)
Line 6257:  3G Cell check if Barred - Uarfcn:%d SCD:%d
Line 6264: 3G Cell Handicapped not checked for suitability
Line 6282: [G2U][RANK][EVAL] 3G Cell Selected - [%d,%d] count:%d durationForResel:%d NewMeasRxd:%d
Line 6291: [G2U][RANK][EVAL] 3G NCELL [%d,%d] Handicapped
Line 6334: [TDD][G2U][RANK][EVAL] 3G Cell Selected - [%d,%d] count:%d durationForResel:%d NewMeasRxd:%d
Line 6341: [TDD][G2U][RANK][EVAL] 3G NCELL [%d,%d] Handicapped
Line 6373: BPLMN: RET rr_Is3GcellSuitableToReselect as Manual Ongoing & C1: %d > %d
Line 6380: Abort 3G Evaluation by candidate cell in 4G
Line 6390: [G2U][PRIO] 3G Cell Found but hold on
Line 6410: [G2U][RANK] -----> SELECT 3G Cell <------
Line 6432: Avoid Reselection to 3G Cell as Wait timer is still Active
Line 6503: Reset Prev3GHistory
Line 6632: b4 Sort => Prev3GHistory: (%d) (%d)
Line 6682: Utran Prev Neighbout Cell list 
Line 6688: Index=%d,Uarfcn=%d,SCD=%d,FDD=%d,ValidMeasAge=%d
Line 6729: FDD Present
Line 6733: TDD Present, set 3GPriorityParaPresent to FALSE
Line 6750: UTRAN NCELL  Arfcn %d
Line 6775: Indice0=%d,NrOfCells=%d,NrOfCellsBits=%d
Line 6786: DecodeType == DECODE_3GNCELL_FOR_PSI3QUATER && NrOfCells == 0x1F
Line 6799: Too many Reselection UARFCNs in PSI3q!!!
Line 6806: NrOfCells == 0 || NrOfCells >= IndexMax
Line 6851: Arfcn %d NbCells %d isBAList %d isFDD %d
Line 6855: Error possible :- Max INSTANCE of UTRAN cell is (%d)
Line 6897: ArfcnList: UARFCN
Line 6923: CellInfoF[0] %d, CellInfoF[1] %d,CellInfoF[2] %d,CellInfoF[3] %d, NrOfCellsBits %d 
Line 6925: ArfcnList: UARFCN
Line 6932: Indice0 (%d): SCD 0 is part of the set
Line 6936: Indice0 (%d): SCD 0 is not part of the set
Line 6987: UARFCN %d, SCD %d
Line 6991: Error possible :- Max INSTANCE of UTRAN cell is (%d)
Line 7015: Error possible :- Max INSTANCE of UTRAN cell is (%d)
Line 7232: rr_Store3GNcellDesc: StartIndex %d
Line 7251: FDD Not Present
Line 7261: TDD Not Present
Line 7287: Default case: Do nothing
Line 7316: Update 3G Priority Param List - 3G priority Parameter Description
Line 7321:  Reconstruct 3G Priority Param List
Line 7336: Repeated UTRAN Priority Parameters[%d] of '3G Priority Parameters Description' in SI2Q[%d]
Line 7401: [PRIO] rr_Update3GPriorityParam: UARFCN:%d FreqIndex:%d UTRAN_PRIORITY:%d THRESH_UTRAN_high:%d THRESH_UTRAN_low:%d UTRAN_QRXLEVMIN:%d
Line 7424: Repeated UTRAN Priority Param is not present, NumHighPrioUarfcn(%d), NumLowPrioUarfcn(%d)
Line 7432: [PRIO] rr_Update3GPriorityParam: UtranTddExist, set 3GPriorityParaPresent to %d
Line 7439: [PRIO] rr_Update3GPriorityParam: 3GPriorityParameter present, set 3GPriorityParaPresent to %d
Line 7464: Update 3G Freq List
Line 7483:  1) 3G NCL / FreqIndex:%d Uarfcn:%d
Line 7501:  2) SI2Q / FreqIndex:%d Uarfcn:%d
Line 7507: 3G Frequency List generation completed for SI2Q
Line 7511: 3G Frequency List generation with SI2Q is already completed in this cell
Line 7521: 3G Frequency List generation completed including SI2T
Line 7555: rr_ConvertToUtranFreqIndex Uarfcn:%d is matched with FreqIndex:%d
Line 7565: rr_ConvertToUtranFreqIndex DEFAULT_FREQ_INDEX will be used for Uarfcn:%d
Line 7592: Update 3G Cell List - NbInst:%d, NbCells:%d
Line 7607:  Reconstruct 3G Cell List
Line 7632:  2 - Index:%d
Line 7664:   Existing Index:%d Uarfcn:%d, Scd:%d, isBAList %d, FDD:%d
Line 7682:  3 - Index empty at :%d
Line 7709:   New Index:%d Uarfcn:%d, Scd:%d, isBaList:%d, is3gRssi:%d
Line 7723:  rr_Update3GCellList: Set the FddRscpThreshold:%d
Line 7740:   Invalid Index %d
Line 7792: rr_3GCellFddThresholdList: Increase Age, Uarfcn(%d),SCD(%d),FddRscpAge(%d)
Line 7817: Del 3GCellFddThresholdList
Line 7838: rr_GetTReselCountType: Uarfcn:%d SCD:%d TReselType:%d
Line 7843: rr_UtranReselList: Uarfcn:%d SCD:%d
Line 7850:  UARFCN and SCD matched, Index %d, High %d, Low %d, GSM %d
Line 7866: Invalid TReselType %d
Line 7874: rr_GetTReselCountType: Uarfcn:%d SCD:%d not found
Line 7896: Abort Resel to Better 3G Cell
Line 7902: Filtering 3G Reselection during IRAT measurement in L1
Line 7909: EST msg is pended. Abort Resel to Better 3G Cell
Line 7915: QRB is running. Abort Resel to Better 3G Cell
Line 7922: CellLocking: Abort Resel to Better 3G Cell
Line 7930: BPLMN: Abort Resel to Better 4G Cell
Line 7936: Filtering 4G Reselection during IRAT measurement in L1
Line 7943: EST msg is pended. Abort Resel to Better 4G Cell
Line 7950: CellLocking: Abort Resel to Better 4G Cell
Line 7956: IratType(%d) is invalid
Line 7991: rr_CheckAllNcellC1LowerThen: 2G NCELL [%d,%d] C1:%d is not lower then threshHold:%d
Line 8047: rr_GetPrioParamForUarfcn: UARFCN:%d no valid priority or threshold is provided
Line 8072: rr_GetPrioParamForUarfcn: UARFCN:%d Type:%d ret:%d
Line 8131: rr_GetUarfcnTypeInfo ret FDD_MODE
Line 8139: rr_GetUarfcnTypeInfo ret TDD_MODE
Line 8154: rr_GetUarfcnTypeInfo(3G MRU) FDD_MODE
Line 8163: rr_GetUarfcnTypeInfo(3G MRU) TDD_MODE
Line 8170: rr_GetUarfcnTypeInfo ret %d
Line 8227: UTRANTDDMODE: NbMonFddUarfcns:%d NbMonTddUarfcns:%d RxMode:%d
Line 8245: UTRANTDDMODE: NewReq:%d Prev:%d
Line 8275: UTRANTDDMODE: New:%d Prev:%d
Line 8331: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) List1->NumUarfcns_TDD=%d 
Line 8338: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) List2->NumUarfcns_TDD=%d
Line 8347: UTRAN_MEAS_CELLS_IND List 1 is corrupted (List1->NumUarfcns=%d) 
Line 8354: UTRAN_MEAS_CELLS_IND List 2 is corrupted (List2->NumUarfcns=%d) 
Line 8371:  Total NumScramblingCodes(%d) > MAX_UMTS_MONITORED_CELLS(%d)
Line 8386:  UARFCN(%d) NumScramblingCodes(%d+%d) > MAX_UMTS_SCRAMBLING_CODE(%d)
Line 8404:  [TDD] Total NumScramblingCodes(%d) > MAX_UMTS_MONITORED_CELLS(%d)
Line 8419:  [TDD] UARFCN(%d) NumScramblingCodes(%d+%d) > MAX_UMTS_SCRAMBLING_CODE(%d)
Line 8455: Check 3G cells for reporting
Line 8482:  QFR is activated
Line 8506:  FDD UARFCN %d with %d cells found
Line 8516:  TDD UARFCN %d with %d cells found
Line 8523:  None of 3G cells found for reporting
Line 8547: FindUtranNcell [%d,%d]
Line 8562:  Found, Index:%d Uarfcn:%d SCD:%d FDD:%d RSCP:%d Ec_No:%d
Line 8571:  Not Found
Line 8597: GetMruUarfcnList
