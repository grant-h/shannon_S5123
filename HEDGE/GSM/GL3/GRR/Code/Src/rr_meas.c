Line 34: rr_NbNear(%d) rr_NbFar(%d)
Line 48: SERV_CELL 
Line 82: RRsync 
Line 88: --------------------------------
Line 133: Best Far Cell(%d), RxL(%d)
Line 216: NoOfIdleMeas(%d)
Line 249: N->F:%d
Line 309: F->N:%d
Line 353: N->F:%d
Line 364: F->N:%d
Line 368: CtxCount  val(%d) > 65 , ERROR:%d
Line 386: CtxCnt(%d)
Line 416: PendedArfcnByLteMeas:%d
Line 445: Avoid SI read BCCH Read of NCell after Resel Failure in Progress
Line 512: NcellRxLevInd : No samples for NearCell(%d)
Line 564: Trigger PickNextBestCell after NCELL_RXLEV_IND Processing
Line 610: SoftSumVal(%d) Improved! Avoid ImmResel
Line 634: Resel in Progress (%d) || PostResel(%d): Cannot rr_CheckFor Resel due to softsum,
Line 641: Target Cell Bcch Read Already Ongoing on %d BcchReadCauseImmResel %d
Line 664: 1. SoftSum Bad in NON-DRX mode Go for Resel
Line 669: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 681: 1.1 SoftSum in Danger Zone (less than 850) Check for BCCH read on Suitable Cell (%d) (%d)
Line 692: 1.2 SoftSum in Danger Zone (less than 850) :No Cell with Valid C1 C2 so Find one
Line 705: 1.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 719: SoftSum is Bad (%d) (less than 900 but bigger than 850)  Tick (%d)
Line 734: 2 NON-DRX mode in BAD channel Go for Resel
Line 739: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 749:  Two times  SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) 
Line 751: 2.1 Check for BCCH read on Suitable Cell (%d) (%d)
Line 761: SoftSum in Danger Zone:Trigger Resel (less than 900 but bigger than 850) : No C1 C2 availableCells
Line 764: Check  If there is N Cell with Valid BSIC : BcchReadCause(%d)
Line 774: 2.3 Found N Cell ,Add rr_TargetCellForBcchRead CellToSIQHead (%d) Rxlev (%d)
Line 799: PCH BLER (%d) Improved! Avoid ImmResel
Line 817: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 859: NON-DRX mode in BAD channel
Line 864: NON-DRX mode in BAD channel, No SuitableCell with RxLev>10
Line 874: PCH BLER in Danger Zone
Line 886: PCH BLER in Danger Zone: No avialble C1 C2 Cells
Line 887: Try to find valid BSIC cells
Line 896: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 947: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 957: SoftSum in Danger Zone (less than 850)
Line 967: SoftSum in Danger Zone (less than 850) :  No C1 C2 availableCells
Line 968: Try to find valid BSIC cells
Line 976: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 994: Resel in Progress: Cannot rr_CheckForImmediateResel
Line 1003: PCH BLER in Danger Zone
Line 1012: PCH BLER in Danger Zone: No avialble C1 C2 Cells
Line 1013: Try to find valid BSIC cells
Line 1020: AddCellToSIQHead Try BCCH_READ for (%d) Rxlev (%d)
Line 1121: SCell RxL(%d) Bsic(0x%x)  SoftSum (%d)  PCH BLER (%d)
Line 1130: SOFTSUM (%d) is low on Scell (%d) Check for Imm Resel
Line 1145: Immedieate Resel trigger option : PCH BLER
Line 1198: rr_DetectAbnormalRRState: RR_RAT_RESUME_NULL and got SCELL_RXLEV_IND
Line 1201: State mismatch btw GRR and other stack
Line 1225: MPH_SCELL_RXLEV_IND
Line 1234: rr_ServCell is NULL! Ignore MPH_SCELL_RXLEV_IND
Line 1255: [G2U][PRIO] rr_ScellRxlevInd: IgnoreLowPriority:%d is changed(prev:%d) and NumLowPrioUarfcn:%d, Update3GScanAndMonitorList
Line 1285: (CIQ)## CIQ_REPORT in IDLE MODE State : %d , ARFCN :%d, CIQ_BSIC : %d, REAL_BSIC : 0x%x, BandIND : 0x%x
Line 1332: UpdatePccnMeas: Subst for NCell(%d)
Line 1346: SCell(%d) is out of band
Line 1392: rr_ServCell is NULL! Ignore MPH_NCELL_RXLEV_IND
Line 1398: MPH_NCELL_RXLEV_IND -> NoOfMeas(%d)
Line 1424: No measurement samples for ARFCN(%d)
Line 1479:  CIQ[53-Idle] ucNumGsmMeas(%d) ucNumInterRatMeas(%d) ucBandInd(%d)
Line 1484:  CIQ[53-GSMmeas] wArfcn(%d) ucBsic(%x) ucRxlev(%d)
Line 1489:  CIQ[53-InterRatmeas] wUarfcn(%d) wScramblingCode(%d) ucRssi(%d) ucEcN0(%d) ucRscp(%d)
Line 1737: IdleStatic: NCellAvg: Arfcn:%d RxLev:%d
Line 1768: IdleStatic: NCellRxLevChange:%d Avg:Arfcn:%d RxLev:%d Current:Arfcn:%d RxLev:%d
Line 1807: Keep RR_FULLY_STATIONARY, RxLev (%d) during LTE TP
Line 1826: IdleStatic:%d Stationary:%d TopNCell:(%d) (%d) 
Line 1832: IdleStatic: Decide FULLY_STATIONARY according to peer stack (3G : %d, 4G : %d) condition
Line 1838: LteDataOngoing
Line 1880: IdleStatic: Reset
