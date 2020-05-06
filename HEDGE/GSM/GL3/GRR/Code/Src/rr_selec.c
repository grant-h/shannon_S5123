Line 91: CbchState:ON=>REQUIRED due to removing serv cell
Line 127: MPH_INIT_REQ : rr_PurgeSyncRequired(%d)
Line 160: invalid FreqPosition + rr_FreqPos_offset : %d
Line 177: Parallel ARFCN: %d, SYNC_REQ_SENT
Line 187: ARFCN: %d, sync_status(%d)!=SYNC_REQ_PENDING, max_arfcn_try:%d 
Line 196: Parallel ARFCN: %d, CELL_NOT_SUITABLE_FOR_SYNC_REQ
Line 244: Pause cell selection. rr_State(%d)
Line 339: Abort PLMN List Req Done: Received Power Rsp
Line 366: New Plmn Search Handle: Received Power Rsp
Line 390: DSDS busy Stop CELL SEL:Exit 
Line 395: Abort Received Power Rsp...
Line 400: rr_TriggerRxlevReqCounter(%d) 
Line 406: rr_MaxPlmnSearchFailCounter(%d) 
Line 414: Trigger rr_NoCellToMM 
Line 423: Start Trigger RXLEV REQ AGAIN timer
Line 432: DSDS BUSY: During Discrete Cell Search
Line 458: rr_band_type_local=%s
Line 462: CellSelec:ERROR: Invalid rr_band_type_local
Line 470: BPLMN: MPH_RXLEV_CON came for Background: rr_band_type_local %s
Line 474: BPLMN:Error: Invalid rr_band_type_local
Line 485: BPLMN RSSI SCAN Reject, RssiRetryTime(%d), rem_time(%d) 
Line 505: (rem_time < (MIN_BPLMN_SLEEP_TIME_REQUIRED_FOR_POWER + MIN_GRR_GL1_ILM_DELAY))
Line 512: BPLMN:Error: Rxd MPH_RXLEV_CON in wrong BPLMN state
Line 546: BPLMN:Error: MPH_RXLEV_CON in Unexpected State
Line 557: ERROR RtkGetMemory returned NULL
Line 578: CellSelec: Warning Memory Leak: rr_PowerMsg:%x
Line 585: ERROR RtkGetMemory returned NULL
Line 686: Idx %d: Arfcn %d, RxLev %d, LowPrio %d 
Line 709: BPLMN: Foreground BCCH made as not ongoing for ARFCN %d
Line 757: SIDatabase: Matched Arfcn is the best %d
Line 763: SIDatabase(%d): Matched Arfcn (%d) Rxlev (%d) within %d of BestRxLev
Line 770: SIDatabase(%d): Matched Arfcn (%d) Rxlev (%d) ignored since more than %ddB less than BestRxLev
Line 816: cell_idx:%d ARFCN:%d RxLev:%d
Line 827: Try Arfcn %d
Line 867: Skip ARFCN(%d) after Immediate Reselection
Line 913: Resume CellSelection from last cell position mode(%d)
Line 918: Wrong FreqPos in CellSelection %d
Line 923: Last Serv Cell %d, rr_LastServArfcn.Cnt %d, rr_TryCampingToLastServCell %d
Line 937: Cell available (%d), Rxlev cell (%d)
Line 942: Last Serv Cell is in best cell %d
Line 949: Best Cell available (%d), RxlevLast best cell (%d)> CellSrchThresholdRssi (%d)
Line 951: Last registered Serv Cell (%d), Rxlev (%d)
Line 955: Last Reg Serv Cell rxlev is very less compared to best cell available
Line 959: Last Serv Cell is in best cell %d
Line 965: Last Serv Cell weak cell %d, rxlev %d
Line 976: Total %d ARFCNs tried, MaxAllowed %d
Line 986: BAND Not Supported by Operator : ARFCN(%d)
Line 1021: Arfcn %d not tried, Total (%d) ARFCNs , RxlevOk(%d), LowPrio (%d),InBA (%d), HC (%d)
Line 1050: Wait timer is still active : Restart Selection (%d)
Line 1066: L2G Redir Failed
Line 1167: CellSelec:ERROR: Invalid State Change  %s => %s
Line 1217: CellSelec:Warning: OngoingBand %s, but rr_BandInd %d changed! Restart
Line 1340: CellSelec: Wait for Suspend Cnf
Line 1405: rr_QuickSearch %d: PlmnSearchReq again with Full scan
Line 1429: rr_CellSelection: Mode %d
Line 1437: Avoid SRRC check in cell Sel
Line 1445: Cell Selection can not be proceed
Line 1483: ---> START CELL SELECTION <---
Line 1493: CellSelec: SRCH CMPLTD
Line 1496: Trigger MCC SRCH Fail to MM
Line 1536: CellSelec: SRCH CMPLTD
Line 1569: CellSelec: SRCH CMPLTD
Line 1612: CellSelec: SRCH CMPLTD
Line 1634: CellSelec: Try ImmReselCell Camp
Line 1662: CellSelec: SRCH CMPLTD
Line 1691: PLMN re-selection
Line 1766: CellSelec:ERROR: Invalid request
Line 1797: CellLocking: rr_BandInd %d
Line 1799: CellLocking: %d %d
Line 1895: CellSelec: Band switched
Line 1907: rr_BandInd is changed to %d at 2nd stage
Line 1979: CellSelec: Try to select a low priority cell
Line 1996: CellSelec: No low priority cell to search
Line 2002: CellSelec:ERROR: Invalid state
Line 2024: TMOUSA: Make 900 Band Low Priority than 1900, 850
Line 2072: CellLocking: Add BA for %d
Line 2087: rr_FullBa, rr_FirstPLMNSelection %d rr_SimPresent[StackId] %d
Line 2100: Take SIM BA list(USIM):
Line 2115: Take SIM BA list:(SIM)
Line 2134: Take Last Registered BA list:
Line 2155: Take full BA list
Line 2163: Take stored PLMN BA list:
Line 2166: rr_FirstPLMNSelection %d rr_SimPresent %d
Line 2178: Take SIM BA list(USIM):
Line 2189: Add SIM BA list:
Line 2207: Take Last Registered BA list:
Line 2230: rr_FullBa
Line 2235: MRU: Add MRU[0]: %d
Line 2255: MRU: rr_LastServArfcn Fce(%d)
Line 2264: MRU: Stored Cell Search Error, rr_LastServArfcn.Cnt is %d 
Line 2280: STORED_CELL_SEARCH: There's no Stored Ba for both stage
Line 2286: STORED_CELL_SEARCH: There's no Stored Ba for 1st stage
Line 2292: STORED_CELL_SEARCH: There's no Stored Ba for 2nd stage
Line 2298: STORED_CELL_SEARCH: There's no Stored Ba
Line 2306: FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH: There's no stored Ba to inverse
Line 2310: FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH: Inversing Stored BA mode
Line 2334: MRU: rr_UpdateLastServArfcn
Line 2351: MRU: rr_UpdateLastServArfcn Remove it from the list
Line 2370: MRU: rr_LastServArfcn.Cnt = %d
Line 2390: MRU: rr_UpdateLastServArfcnForHplmn
Line 2407: MRU: rr_UpdateLastServArfcn Remove it from the list
Line 2426: MRU: rr_LastServArfcn.Cnt = %d
Line 2529: CellSelec:ERROR: Invalid request
Line 2594: CellSelec:ERROR: Invalid TryCellPriority %d
Line 2604: CellSelec:ERROR: Invalid NbLowCell %d
Line 2613: CellSelec:ERROR: Invalid Index %d
Line 2694: CellSelec:rr_State %s rr_CellSelState %s Mode %d 
Line 2712: CellSelec: InverseBa(%d) PlmnListReq(%d)
Line 2714: CellSelec: OngoingBand(%s) SwitchBand(%s) BandInd(%d)
Line 2736: AddLowPrioCell:%d
Line 2752: LowPrioCell:%d
Line 2860: EqPlmn --> LowPriority !!
Line 2923: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)micro s
Line 2930: BPLMN: Sleep Time %d less than MIN_BPLMN_SLEEP_TIME_REQUIRED_FOR_BCCH %d
Line 2953: BPLMN: reset: FrgrndBcchOngoing ARFCN %d
Line 2964: BPLMN: ServCell SI 2Q read later, to allow BPLMN
Line 2970: BPLMN: rr_BPlmnNextBcchReq: ret: FrgrndBcchOngoing ARFCN %d
Line 2999: ResumeFromLastArfcnIndex: %d
Line 3012: Retry Same Band Again for missed BCCH: AttemptNum(%d)
Line 3040: ResumeFromLastArfcnIndex: %d
Line 3086: BPLMN: RR_BPLMN_MAX_ARFCN_TRY %d tried!
Line 3094: BPLMN: CurrentIndex:%d > NbFreq:%d !
Line 3111: BPLMN: Try Arfcn %d Rxlev %d, total tried:%d
Line 3134: BPLMN: Ignored because not in Search List: ARFCN %d!
Line 3138: BPLMN: Ignore Arfcn %d Rxlev %d
Line 3214: PLMN ID:%x %x %x Missing! Add ARFCN:%d in band:%d into List
Line 3271: BPLMN: FB-SB Failed in ARFCN %d with sleep time %d ms
Line 3279: BPLMN: ARFCN %d SYNC NOT acquired: %d 
Line 3284: BPLMN: ARFCN %d SYNC ACQUIRED: %d 
Line 3300: BPLMN: ARFCN SYNC FOUND. Retry to maximum 5 times. %d has been stopped %d times
Line 3308: BPLMN: SYNC ARFCN %d has been stopped %d times, attmepting next 
Line 3333: Function: rr_FilteringNon2GCell num Cells %d
Line 3340: CELL(ARFCN %d, %ddBm) => isValid2G(%d), isValid3G(%d)
Line 3349: CELL(ARFCN %d, %ddBm) => Non 2G signal
Line 3360: CELL(ARFCN %d, %ddBm) => Non 2G signal
Line 3369: Filtered cell is exist. Sorting again!!
Line 3393: FilteringAdjacentArfcnSideLobe num Cells %d
Line 3402: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3412: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3418: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3428: CELL(ARFCN %d, %ddBm) => SideLobe of CELL(ARFCN %d, %ddBm)
Line 3455: Function: rr_UseBandModeGsm900
Line 3508: Function:rr_UseBandModeGsm850
Line 3551: Function:rr_UseBandModeDcs1800
Line 3594: Function:rr_UseBandModePcs1900
Line 3638: Function:rr_UseBandModeGsm900_1800
Line 3744: Function:rr_UseBandModeGsm900_850
Line 3849: Function:rr_UseBandModeGsm900_1900
Line 3953: Function:rr_UseBandModeGsm850_1800
Line 4048: Function:rr_UseBandModeGsm850_1900
Line 4143: Function:rr_UseBandModeGsm900_850_1800
Line 4284: Function:rr_UseBandModeGsm900_850_1900
Line 4357: TMOUSA: Make 900 Band Low Priority than 1900, 850
Line 4467: 3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): ARFCNs are not consecutive, exit filtering process
Line 4500: 3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): mean %d , exit filtering process
Line 4524: 3G filtering Index(%d ~ %d) ARFCN(%d ~ %d): mean %d, variance %d
Line 4550: Idx %d: Arfcn %d, RxLev %d
Line 4583: rr_PlmnState %d
Line 4584: Mark 3G filtering result for BPLMN searching
Line 4640: ResumeFromLastArfcnIndex: %d->Reset CurrentIndex:%d
Line 4681: BPLMN: Delete Arfcn %d from rr_BPlmnCurrentBaList[StackId]
Line 4693: Idx %d: Arfcn %d, RxLev %d, rr_IsFceInBa %d
Line 4708: BPLMN: Trying all Failed Cells in current Band Again
Line 4728: BPLMN: CurrentIndex%d, Sorted %d frequencies using ARFCN
Line 4735: BPLMN: Try Same ARFCN: with index:%d cause:%d
Line 4887: BPLMN: CurrentIndex:%d, MinWindowIndex:%d MaxWindowIndex:%d IsDirectionForward:%d
Line 4908: rr_ReArrangePowerScanResults: Arfcn (%d)
Line 4922: rr_ReArrangePowerScanResults: Re-arrange RSSI SCAN results not required
