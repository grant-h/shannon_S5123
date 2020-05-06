Line 92: Ignore serving cell(%d,%d) from reporting
Line 162: Hack: Freq(%d) with RxLev(%d) DISCARDED as not suitable cell for reporting
Line 213:   ServCellBand 2G cells: %d
Line 217:   MultiBand 2G cells: %d
Line 222:   Remaining 2G cells: %d
Line 252: rr_MeasSearchAndAssignIndex(%d)
Line 278:  Found in BaList(%d) %d 
Line 306:  BSIC received  (%d) for Arfcn Match (%d) 
Line 317:  Invalid BSIC (%d) for Arfcn (%d) 
Line 340:  NcRemove Index %d
Line 357:  Freq(%d) with Bsic(%x) reported is in BA list, but SI 5 not acquired
Line 369:  Freq(%d) with Bsic(%x) reported is in BA list, but SI 5bis not acquired
Line 381:  Freq(%d) with Bsic(%x) reported is in BA list, but SI 5ter not acquired
Line 400:  Freq(%d) with Bsic(%x) reported is not in BA list
Line 417:  Index(%d) Freq(%d) Bsic(%x) RxLev(%d) ValidBsic(%d) Xfer(%d)
Line 425: Best 1 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 430: Best 2 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 435: Best 3 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 440: Best 4 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 445: Best 5 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 450: Best 6 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 477: rr_SortStronggestCell
Line 496:  Exclude  ServCell - BccFreq(%d) Bsic(%x) RxLev(%d)
Line 575: Invalid Band in function:rr_NoOfNonServingBands
Line 667: Ncell with Other Band %d Freq %d RemNbFreq %d
Line 675:  NeedNormalRep %d (NumArfcnRcvd %d NbFreq %d NbFreqFromSi5 %d)
Line 722: *** rr_ForceNormalReporting instead of EMR rr_NumOfBsicRcvd(%d) rr_NumOfArfcnRcvd(%d) NbFreq in BA(%d)
Line 873: CellLocking: Make MesaReport as Invalid %d
Line 959: !!!Wrong 900MHz band comp (%x:%x)
Line 977: !!!Wrong 1800 MHz band comp (%x:%x)
Line 995: !!!Wrong 1900 MHz band comp (%x:%x)
Line 1018: !!! Freq Band is not valid (%x:%x)
Line 1068: ERROR RtkGetMemory returned NULL
Line 1073: !!!MeasMsg not allocated not null(0x%x)
Line 1081: (NbMeas=%d)
Line 1087: Index=%d,RxLev=%d,Bsic=%x
Line 1094: TX:>>>:MeasReporting
Line 1108: Meas Report NOT valid
Line 1117: Meas NOT valid during handover
Line 1149: rr_Encode_ENHANCE_MEASUREMENT_REPORT : BSIC Rcvd %d  NeighbourCellList.nb_neighb =%d
Line 1157: Enhance Ind still NORMAL_MEASUREMENT_REPORT ReportType%d  BSIC Rcvd =%d  NeighbourCellList.nb_neighb =%d BaFreqList.NbFreq=%d
Line 1202: SuitableToKeepInNear
Line 1424:  rr_DediFindWorstNear
Line 1440:   Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount:%d - OtherBand
Line 1475:   Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount:%d - SameBand 
Line 1509: ncells_with_valid_bsic_SameBand %d, ncells_with_valid_bsic_OtherBand %d MultiBand_Rep %d
Line 1518: RxLev Worst SameBand Cell  Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1526: BSIC Worst SameBand Cell  Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1575: RxLev Worst CellOtherBand Cell   Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1581: BSIC Worst CellOtherBand Cell  Arfcn:%d Bsic:%x RxLev:%d BsicWaitCount %d
Line 1653: rr_DediSyncList
Line 1658:  Best Far: SameBand Arfcn:%d,RxLev:%d  OtherBand Arfcn:%d,RxLev:%d
Line 1669:  NCells: SameBand:%d  OtherBand:%d  (Multiband_Rep:%d)
Line 1674:  Worst SameBand NCell: Arfcn:%d,RxLev:%d
Line 1679:  Worst OtherBand NCell: Arfcn:%d,RxLev:%d
Line 1796: rr_NbNear:%d,rr_dedicatedSyncListSize:%d, rr_NbFar:%d
Line 1847:  WorstNear.CellOtherBand is NULL 
Line 2008:  Best Far: SameBand Arfcn:%d,RxLev:%d  OtherBand Arfcn:%d,RxLev:%d
Line 2195:  Meas Sub values less than the calculated value %d
Line 2282: MPH_MEAS_REPORT:
Line 2286: Dtx ON
Line 2290: Dtx OFF
Line 2422: SCell
Line 2520:  GL1 report Hacked Rxlev Full(%d), Sub(%d) GRR 1st filtered FullRxL:%d SubRxL:%d 
Line 2558:  Hack FullRxL:%d SubRxL:%d FullRxQ:%d SubRxQ:%d RxLev_val: %d SoftSumFull %d  SoftSumSub %d
Line 2569:  ### No Sample for SUB : RXLEV_SUB (%d), RXQUAL_SUB(%d)
Line 2572:  NoOfNear:%d NoOfFar:%d
Line 2606:  MMR: Arfcn(%d) RxL(%d) Bsic(%x) FarCell
Line 2616:  MMR: Arfcn(%d) RxL(%d) Bsic(%x) SCell
Line 2621:  MMR: Arfcn(%d) RxL(%d) Bsic(%x) NearCell BsicWaitCount(%d)
Line 2634: BestFar 1 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 2639: BestFar 2 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 2644: BestFar 3 Arfcn(%d) Bsic(%x) RxLev(%d)
Line 2726: SCell(%d) is out of band
Line 2741: Too many N(%d)+F(%d)
Line 2763: DL_DATA_REQ(MEAS_REPORT)
Line 2836: During HO Don't Update SyncCellL
Line 2873:  CIQ[52-1] wDedArfcn(%d) ucMAIO(%d) ucHSN(%d) ucTimeSlot(%d) ucRxLevFull(%d)
Line 2874:  CIQ[52-2] ucRxLevSub(%d) ucRxQualFull(%d) ucRxQualSub(%d) ucFERFull(%d) ucFERSub(%d)
Line 2875:  CIQ[52-3] ucCodec(%d) ucTimingAdv(%d) ucPowerLevel(%d) ucDedConfig(%d) ucBandInd(%d)
Line 2886:  CIQ[53-Dedi] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
Line 2891:  CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
Line 2896:  CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
