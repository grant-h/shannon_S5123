Line 130: Reset not allowed 4G Cell List
Line 144: Release All 3 Prio List 
Line 184:   4GHighPrioReselList (%d) 4GLowPrioReselList (%d) 4GReselGSMList(%d)
Line 216: ResetLteInfoOnScell
Line 233: Free ALL EARFCNS and corresponding PCIDS 
Line 244: DEL for EARFCN (%d) Cell ID  (%d)  
Line 257: DEL EARFCN (%d) 
Line 305: Update 4G Cell List -NbInst:%d
Line 345:  Total Earfcn Count from index: %d , From instance (%d)
Line 365: Index (%d) Earfcn (%d) measBW(%d) priority(%d) ThreshEUTRANHigh (%d) ThreshEUTRANLow (%d) ThreshEUTRANQRxlevMin (%d) 
Line 367:  Process Available Earfcn Information  
Line 396: Update 4G Not Allowed Cell List - NbSI2QInst:%d, Nbofjinstance:%d 
Line 413: Freq index count(%d) Freqindex(%d) Putting @ new Static index(%d) Earfcn(%d)
Line 419: Freqindex(%d)  Earfcn(%d) PCID(%d)
Line 434: EUTRAN Index obtained from NA structure is out of bound%d 
Line 444: No of EARFCN in not allowed list (%d)
Line 451: EARFCN (%d) PCID (%d) BitMapGroup (%d) IsNotAllowed?(%d)
Line 464: QRB: Pending to send NotAllowedCellList
Line 477: Total Number of EARFCN Sent as Not Allowed (%d) 
Line 484:  (%d) Not allowed EARFCN (%d) at index(%d)
Line 490:  For EARFCN (%d) : Not allowed PCID (%d)
Line 494:  For EARFCN (%d) : Count of not allowed cell (%d)
Line 498:  MPH_EUTRAN_NOT_ALLOWED_CELL_IND sent  
Line 508:  NO EARFN available in Not allowed list (%d) Or Not suitable state(%d) 
Line 535: ERROR  RtkGetMemory returned NULL  in rr_NewLteEarfcnElem
Line 555: NewLteEarfcnElem: Index (%d) Earfcn (%d) measBW(%d) priority(%d) 
Line 618: LteElem found (0x%x) Earfcn (%d) Index (%d)
Line 636: MISMATCH in  INDEX . Earfcn (%d) Index (%d) NewIndex (%d)
Line 644: Queue Full. Earfcn (%d) Index (%d)
Line 668: Deleting all Cells for EARFCN %d 
Line 699: Deleting  EARFCN ITSELF %d
Line 783: ERROR RtkGetMemory returned NULL
Line 843: Number of Earfcn to be deleted %d
Line 893: STOP Monitoring : Earfcn (%d) measBW(%d) PriHighOrLow(%d) 
Line 897:  GRR => MPH_EUTRAN_STOP_EARFCN_REQ for EARFCN 
Line 930: GeranPriorityParaPresent=%d NoHprioEarfcn=%d IgnoreLowPriority=%d(ThreshPrioritySearch=%d RxLev=%d)
Line 941:  Since High priority EARFCN are there, Mode is set to EUTRAN_MEAS_REQ_START
Line 949:  Since no High priority EARFCN are there and IgnoreLowPriority is TRUE, Mode is set to EUTRAN_MEAS_REQ_STOP
Line 955:  Since IgnoreLowPriority is FALSE, Mode is set to EUTRAN_MEAS_REQ_START
Line 962:  Since GeranPriorityParam is not present, Mode is set to EUTRAN_MEAS_REQ_STOP
Line 967:  Eutran Measurement Mode is MEAS_REQ_STOP %d
Line 1044: rr_EutranMeasTrigger : rr_EutranMeasState = %d, rr_FDDLteSupported = %d
Line 1053: rr_EutranMeasTrigger : 4G measurement is disabled by LTE RAT
Line 1087: ERROR : Measurement not triggered in Dedi mode
Line 1106: ERROR : Measurement not triggered in NC2 mode
Line 1111: ERROR : Measurement not triggered in PTM mode
Line 1139: Stopping EIRAT measurements in rr_PlmnState: %d
Line 1146: Stopping EIRAT measurements in rr_InterRatStatus: %d
Line 1151: rr_FDDLteSupported  %d
Line 1186: rr_EarfcnScanlistGen : rr_FDDLteSupported (%d) , rr_EutranMeasState(%d) 
Line 1189:  ServCell RxLev (%d) , ThreshPrioritySearch(%d) IgnoreLowPriority(%d)
Line 1194: rr_EarfcnScanlistGen : rr_FDDSupported (%d) , rr_EutranMeasState(%d) 
Line 1212: EARFCN (%d) is NOT barred
Line 1216: EARFCN (%d) is barred
Line 1222: EARFCN (%d) Skipped for SCAN as priority is invalid (%d) 
Line 1243: EARFCN (%d) Skipped for SCAN as Scan Status is (%d) 
Line 1265: EARFCN (%d) is NOT barred
Line 1269: EARFCN (%d) is barred
Line 1275: EARFCN (%d) Skipped for SCAN as priority is invalid (%d) 
Line 1342: Total no of EARFCN (%d) NoEarfcnToScan (%d)
Line 1350: EARFCN SCAN List not Gen as No EARFCNS avilable(%d)
Line 1375: Sending MPH_EUTRAN_MEAS_REQ %d
Line 1380: EUTRAN_MEAS_REQ_START
Line 1384: EUTRAN_MEAS_REQ_STOP
Line 1408: rr_RegistryItem.G2LPtmOn  (%d) 
Line 1419: State is not suitable for EARFCN SCAN in PTM [Access(%d) REORG_MODE(%d) GMMReady(%d) NC_Order(%d) RR State(%d) G2LPtmOn(%d)
Line 1430: State is not suitable for EARFCN SCAN [Access(%d) REORG_MODE(%d) GMMReady(%d) NC_Order(%d) RR State(%d)]
Line 1445: 4G EARFCN SCAN List##Total Number of EARFCN to SCAN (%d) 
Line 1464: EARFCN (%d) SCAN STATUS Changed to REQUESTED  (%d)
Line 1468: SCAN_EARFCN : Earfcn (%d) measBW(%d) priority(%d), searchOrder(%d)
Line 1472: GRR => MPH_EUTRAN_SCAN_EARFCN_REQ
Line 1480: QRB: rr_QrbEutranSacnStatus (%d)
Line 1484: No EARFCNS to SCAN (%d)
Line 1511: EARFCN (%d)  Scan Status is (%d) 
Line 1550: FATAL ERROR: Trying to add EARFCN for Unknown EARFCN %d
Line 1556: Finding Cell (%d) in EUTRAN LIST:
Line 1589: FATAL ERROR: Trying to add EARFCN for Unknown EARFCN %d
Line 1642: ERROR RtkGetMemory returned NULL
Line 1661:  Add Cell(%d)  in EUTRAN LIST: NewMeasRxd(%d) MeasAge(%d)
Line 1674: Cell(%d) Found in EUTRAN LIST: NewMeasRxd(%d) MeasAge(%d)
Line 1702: FATAL ERROR: Trying to DEL PCID  for Unknown EARFCN %d
Line 1717: DelCell(%d)From EARFCN Q List
Line 1761: FATAL ERROR: Trying to DEL Unknown EARFCN %d
Line 1773: Cell Not found in Meas Report , New Meas age (%d) for Cell (%d):
Line 1779: Cell to be deleted from List (%d):
Line 1786: Cell found in Q , New Meas age (%d) for Cell (%d):
Line 1802: Resetting NewMeas Flag for cell (%d):
Line 1837: [G2L][MEAS] From Meas Result EARFCN and No Of Cells , Earfcn (%d) NumOfCells(%d)
Line 1842: [G2L][MEAS] 4G NCELL [%d,%d] RSRP(%d) RSRQ(%d) NewMeas(%d)
Line 1887: MPH_EUTRAN_MEAS_REPORT_IND(NumOfEarfcns = %d)
Line 1895: EARFCN:%d found in measurement at Meas report 
Line 1913: [G2L][SCAN] Number of PCID reported is 0 for EARFCN:%d
Line 1929: [G2L][SCAN] 4G NCELL [%d,%d] RSRP(%d) RSRQ(%d)
Line 1937: AddCellCnt %d
Line 1945: ERROR! EARFCN:%d:received in Meas not in EutranInfo
Line 1949: EutranMeasData->NbMeas:%d
Line 1953: Total  NbMeas (%d) 
Line 1960: [G2L][MEAS] MeasIndex:%d FreqIndex:%d Earfcn:%d PCID:%d RSRP(%d) RSRQ(%d)
Line 2003: Finding  Freq and Cell in Prio IRAT  LIST: F(%d) Cell (%d)  Elem(%d)
Line 2008: Elem (%d) CellId (%d)  : F(%d) 
Line 2011: Address of Elem returned is (%d):
Line 2043: Adding  in Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2063: Start list with  %d
Line 2130: ERROR RtkGetMemory returned NULL
Line 2147: Meas already in  Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2157:   Reselection Q Freq  (%d) Cell (%d)  Prio (%d) SNonServ(%d) 
Line 2220: rr_sortQueueForG2LReselection: numEutranCell(%d)
Line 2242:  Before sorting 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2261:  After sorting on Priority 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2283:  After sorting on Snonserving 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2296: rr_sortQueueForG2LReselection: numEutranCell(%d)
Line 2317:  Before sorting 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2330:  After sorting on Snonserving 4G NCELL [%d,%d] [Priority(%d) SNONserving(%d)]
Line 2354: rr_Update4GReselCounter : Hprio EARFCN (%d)
Line 2358: [G2L][PRIO][EVAL] 2G SCELL [%d,%d] [C1:%d GERAN_PRIORITY:%d THRESH_GSM_low:%d H_PRIO:%d]
Line 2374:  Evaluating Earfcn (%d)  EARFCNPrio(%d)  Geran Prio (%d)
Line 2382: EARFCNPrio(%d) is invalid or duplicated with GERAN(%d) or UTRAN
Line 2392:  No Meas received for Earfcn (%d)  Prio(%d)
Line 2408: 4G NCELL [%d,%d] %s Priority:%d S_EUTRAN:%d RSRP:%d
Line 2411:  QRXLEVMIN:%d THRESH_EUTRAN_high:%d THRESH_EUTRAN_low:%d
Line 2420:  Earfcn is High Priority EARFCN (%d) 
Line 2423:  Check First Resel Criteria for EARFCN with PCID , E (%d)  PCID (%d)
Line 2428: 4G NCELL [%d,%d] [%c][RSRP (%d) > THRESH_EUTRAN_high + EUTRAN_QRXLEVMIN (%d)]
Line 2436:  For PCID  (%d)  RSRP - Qrxlevmin (%d) >  ThreshEutranHigh(%d)
Line 2446: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2456:   T_resel_High (%d) , Should be more than (%d) sec 
Line 2467: LTE Cell (%d)  Num4GCellThreshEUTRANHigh %d
Line 2478:  1st Resel Cond not satisfied (H), RSRP  - Qrxlevmin (%d) is less than  ThreshEUTRANHigh : (%d) 
Line 2488:  Check  2nd Criteria for EARFCN with PCID , E (%d)  PCID (%d)
Line 2496: 4G NCELL [%d,%d] [%c][RSRP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 2503:  For PCID  (%d)  S_EUTRAN , RSRP-Qrxlevmin = (%d)   >  C1+H_PRIO=(%d) 
Line 2509:   T_resel_GSM (%d) , Should be more than (%d) sec 
Line 2516: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2533: LTE Cell (%d)  Num4GCellThreshEUTRANHigh %d
Line 2543:  2nd  Resel Condition not satisfied (H) , RSRP - Qrxlevmin (%d) is less C1+HPRIO (%d) 
Line 2552: 4G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 2572:   Earfcn is Low  Priority EARFCN (%d)  
Line 2582: Check First Resel Criteria for LP EARFCN with PCID , E (%d)  PCID (%d)
Line 2587: 4G NCELL [%d,%d] [%c][RSRP (%d) > THRESH_EUTRAN_low + EUTRAN_QRXLEVMIN (%d)]
Line 2596: For PCID  (%d)  RSRP - Qrxlevmin (%d) >  ThreshEUTRANLow(%d) 
Line 2603:     T_resel_Low (%d) , Should be more than (%d) sec 
Line 2611: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2626: LTE Cell (%d)  Num4GCellThreshEUTRANLow %d
Line 2638:  1st Resel Condition not satisfied (L), RSRP (%d)  Qrxlevmin (%d) ThreshEUTRANLow(%d) 
Line 2646: 4G NCELL [%d,%d] [%c][RSRP (%d) > C1 + H_PRIO + QRXLEVMIN (%d)]
Line 2659: For PCID  (%d)  S_EUTRAN , RSRP-Qrxlevmin = (%d)   >  C1+H_PRIO=(%d)
Line 2665:  T_resel_GSM (%d) , Should be more than (%d) sec 
Line 2672: There is higher priority cell satisfying reselection criteria than Cell(%d,%d). Hold reselection!!
Line 2690:  LTE Cell (%d)  Num4GCellThreshEUTRANGSM %d
Line 2702:  2nd  Resel Condition not satisfied , RSRP - Qrxlevmin (%d) is less C1+HPRIO (%d)
Line 2710: 4G NCELL [%d,%d] [X][SCELL+NCELL C1 < THRESH_GSM_low (%d)]
Line 2726: [G2L][PRIO][EVAL] 4G NCELL [%d,%d] HIGH(%d) LOW(%d) GSM(%d) TRESEL(%d)
Line 2742: Num4GCellThreshEUTRANGSM %d Num4GCellThreshEUTRANHigh %d Num4GCellThreshEUTRANLow %d
Line 2748: LTE Cells available for Reselection in ThreshEUTRANHigh Q (%d)
Line 2758:  NO LTE Cells available  in ThreshEUTRANHigh Q (%d)
Line 2767: LTE Cells available for Reselection in ThreshEUTRANLow Q (%d)
Line 2779:  NO LTE Cells available  in ThreshEUTRANLow Q (%d)
Line 2786: LTE Cells available for Reselection in ThreshEUTRANGSM Q (%d)
Line 2797:  NO  LTE Cells available in ThreshEUTRANGSM Q (%d)
Line 2825: Find Suitable 4G Cell
Line 2840: LTE  Cell Suitable EARFCN %d PCID %d Priority %d SnonServ (%d) from Queue High
Line 2848: PRIO Element NULL: No Cell found in rr_4GHighPrioReselList
Line 2863: rr_Is4GcellSuitableToReselect: fdd(%d) state(%d) Emrg(%d) 
Line 2870: [G2L][PRIO] 4G Cell Found but hold on
Line 2880: [G2L][PRIO] -----> SELECT 4G Cell <------
Line 2904: No Suitable 4G Cell
Line 2954: Sending : GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 2976: Sending : GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 2997: Filled Eutan Info for EARFCN(%d) Cell id(%d)
Line 2999: GRR => GRR_MM_CELL_RESELECTION_TO_EUTRAN
Line 3002: Number of Earfcns %d
Line 3005: Earfcns %d
Line 3031: Filled PCCO Eutan Info for EARFCN(%d) Cell id(%d) MeasBw(%d)
Line 3034: GRR PCCO => GRR_MM_CELL_CHANGE_TO_EUTRAN
Line 3038: CELL Change not enabled
Line 3051: GRR <= GRR_MM_CELL_RESELECTION_TO_EUTRAN_COMPLETE
Line 3110: ERROR RtkGetMemory returned NULL
Line 3115:  rr_Handicap4GEarfcn Update Earfcn (%d) and BarTimeValue(%d) 
Line 3153:  LTE EARFCN BARRED for 20 Min (%d) 
Line 3158:  Invalid Cause (%d) 
Line 3178: RESELECTION TO EUTRAN FAILED:: Cause for Resel Failure is : %d BarTimerValue (%d) 
Line 3217: PCCO RESEL TO EUTRAN FAILED:: Cause for Resel Failure is : %d
Line 3233: CELL Change not enabled
Line 3267: Error possible: IndUtranParam is more than (%d)
Line 3276: 3G Individual Priority Parameters Description not Present 
Line 3300: Error possible: IndEutranparam is more than (%d)
Line 3309: E-UTRAN Individual Priority Parameters Description  not Present 
Line 3318: T3230 timeout value  not Present 
Line 3340: Error possible: max FDDArfcn in Utran cannot be more than (%d)
Line 3363: Error possible: max FDDArfcn in Eutran cannot be more than (%d)
Line 3398:  Converting RSRP into 6 bit Report Quant , RSRP(%d) RepQuant(%d)
Line 3421:  Converting RSRQ into 6 bit Report Quant , RSRQ(%d) RepQuant(%d)
Line 3452:  Check for 4G Cells with RSRP/RSRQ , RepQuant (%d) EutranMeasData->NbMeas:%d, NoOfCellsReqd:%d
Line 3460:   4G  Measurement EARFCN (%ld) discarded - LTE MRU
Line 3471:  Meas:%d FreqIndex:%d Earfcn:%d PCID:%d
Line 3499:   4G  Measurement discarded - Report below threshold
Line 3516:  Eutranfreqindex : %d reportquantity :%d, pcid : %d, fourgcell : %d, Noofmeas %d)
Line 3526:  Num 4G Cells selected for Measurement Report: %d in Type (%d)
Line 3574: EutranThreshold:%d Offset:%d EUTRANRepThresh2:%d ,ReportQuantity :%d, NonReportQuantity:%d
Line 3591: 	discarding this measurement, LteThresholdConversion[EutranThreshold]:%d ,ReportQuantity :%d, NonReportQuantity:%d, EUTRANRepThresh2:%d
Line 3599: LteOffsetConversion[Offset]:%d ,ReportQuantity :%d
Line 3621: QRB: QRB type (%d)
Line 3643: QRB: No valid 4G cell in the list %d
Line 3648: QRB: Gen Eutran Meas list - CurMesState: %d
Line 3658: QRB: index (%d) EARFCN (%d)
Line 3681: QRB: 4G EARFCN SCAN List##Total Number of EARFCN to SCAN (%d) 
Line 3693: QRB: EARFCN (%d) SearchOrder (%d) SCAN STAS Changed to REQUESTED  (%d)
Line 3696: QRB: rr_QrbEutranSacnStatus (%d)
Line 3697: GRR => MPH_EUTRAN_SCAN_EARFCN_REQ
Line 3711: -----> QRB -- SELECT 4G Cell <------
Line 3721: QRB: Invalid QRB type %d
Line 3747: QRB: MPH_EUTRAN_MEAS_REPORT_IND(NumOfEarfcns = %d)
Line 3756: QRB: EARFCN:%d found in measurement at Meas report 
Line 3774: QRB: Number of PCID reported is 0 for EARFCN:%d
Line 3787: QRB: EARFCN:%d:PCID:%d RSRP %d RSRQ %d
Line 3789: QRB: EutranToScanInfo->NbMeas:%d
Line 3795: QRB: ERROR! EARFCN:%d:received in Meas not in EutranInfo
Line 3810: [G2L][QRB] -----> SELECT 4G Cell <------
Line 3818: QRB: Wait for the next MeasReport
Line 3824: QRB: Wait for the next MeasReport - Scan for 1st MRU is not done %d
Line 3852: QRB: rr_EvaluateLteCellForReselDuringQrb
Line 3864: QRB: Check First Resel Criteria of QRB for EARFCN with PCID , E (%d) PCID (%d)
Line 3874: QRB: Candidate! For PCID (%d) - RSRP(%d) > Thr(%d), RSRQ(%d) > Thr(%d)
Line 3894: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3908: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3916: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3930: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3946: QRB: Found!! For PCID (%d) - RSRP(%d) RSRQ(%d)
Line 3977: QRB: bestIdx (%d)
Line 4009: QRB: STOP Monitoring : Earfcn (%d) measBW(%d) priority(%d) 
Line 4013: QRB: GRR => MPH_EUTRAN_STOP_EARFCN_REQ for EARFCN 
