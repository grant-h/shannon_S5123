Line 108: pal_MemAlloc() failure
Line 131: GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF Sending Fail
Line 135: Failed to free the memory
Line 139: GL1 => MMC :: HEDGEL1_MMC_GSM_TIMING_LATCH_CNF [SIM &D] 
Line 163: [GL1 Error] No Memory Allocated
Line 182: GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) simno:%d
Line 187: GL1 => MMC :: HEDGEL1_MMC_LTE_SEARCHMEASURE_STOP_REQ (PWR DOWN) Sending Fail
Line 191: pal_MemFree failure
Line 225: [G2L] LMM: l1x_LmmCellSearch_Adapter (FN %d) simno:%d
Line 234: LMM: LTE_CELL_SEARCH canceled due to LTE measurement disabled / Invalid Latch State[simno %d] :%d
Line 245: LMM: LTE_CELL_SEARCH canceled due to BCCH/PCH Read in PTM
Line 253: [GL1 Error] No Memory Allocated
Line 270: [G2L] LMS_PTM_INDEX => Cell Search
Line 283: [G2L] EARFCN %d not in List
Line 299: [G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Line 307: Target EARFCN not found
Line 321: Target EARFCN not found
Line 337: [G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
Line 347: [G2L] L Offset = (%d)
Line 349: [G2L] == LTE TIME CALCULATION for Frame Position
Line 354: [G2L] Result (%d)L_Offset  = B-(A+a) 
Line 356: [G2L] Result (%d)L_Offset = mod 614400
Line 367: [G2L] cellPtr->framePos(%d) LteDeltaFramePos(%d)
Line 373: Cell ptr not found
Line 391: [G2L] Warning! Latch Diff 1FN!, Meas Length is reduced as 1 FN.
Line 397: [G2L] Warning! Latch TIme Diff too long, ignore measurement! ReqFn(%d) CnfFn(%d)
Line 401: [G2L] == LTE TIME CALCULATION for GAP Start Position
Line 408: [G2L] 2G DELTA GAP (%d)Qb (%d)us LatchedSrchTime(%d) added_compensation (%d)
Line 428: [G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
Line 476: [G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)> 
Line 491: LMS: LTE_CELL_SEARCH - DEFAULT AGC/AFC is updated
Line 496: [G2L] LTE_CELL_SEARCH [%d] AGC1/2 (%d, %d) AFC (%d)
Line 540: GL1 => MMC :: HEDGE_MMC_LTE_CELL_SEARCH_REQ Sending Fail
Line 544: pal_MemFree failure
Line 556: pal_MemFree failure
Line 596: LMM: l1x_LmmCellMeasure_Adapter for Earfcn[%d] simno:%d
Line 605: LMM: LTE_CELL_MEASURE canceled due to LTE measurement disabled / Invalid Latch State[simno %d] :%d
Line 616: LMM: LTE_CELL_MEASURE canceled due to BCCH/PCH Read in PTM
Line 624: [GL1 Error] No Memory Allocated
Line 640: [G2L] LMS_PTM_INDEX => Cell Measure
Line 652: [G2L] Adapt TIme :: DUR (%d %d) START (%d %d)
Line 659: [G2L] EARFCN %d not in List
Line 674: [GL1 Error] EARFCN object is not found
Line 683: ########## GSM TIME CALCULATION for Frame Position
Line 695: [G2L] 2G DELTA Latch Time Qb(%d) - mod 614400 x 6 (60ms) will be set.
Line 704: [G2L] QB -> MicroSec(%d)
Line 706: [G2L] mod 10ms = (%d)
Line 709: [G2L] L Offset = (%d)
Line 711: ########## LTE TIME CALCULATION for Frame Position
Line 714: [G2L] LTE Original Diff OFFSET (%d)  = A+a 
Line 716: [G2L] LTE Original Diff (%d)L_Offset = mod 614400
Line 719: [G2L] Result (%d)L_Offset = B-(A+a) 
Line 721: [G2L] Result (%d)L_Offset = mod 614400
Line 741: [G2L] Warning! Latch Diff 1FN!, Meas Length is reduced as 1 FN.
Line 747: [G2L] Warning! Latch TIme Diff too long, ignore measurement! ReqFn(%d) CnfFn(%d)
Line 756: [G2L] 2G DELTA GAP (%d)Qb (%d)us
Line 763: [G2L] LTE_CELL_MEAS : Searching Frame Position Information
Line 767: [G2L] LTE_CELL_MEAS : Target Cell ID (%d)
Line 776: [G2L] LTE_CELL_MEAS : cellCounterMMC (%d)
Line 783: [G2L] LTE_CELL_MEAS : Only Updating FrPos, not Meas Req element
Line 789: [G2L] LTE_CELL_MEAS : Updating all values to to be included in MEAS REQ
Line 795: [G2L] LTE_CELL_MEAS(lastTime %d) CellId (%d) FramePos Ori (%d) => New (%d) measBW(%d)
Line 802: [GL1 Error] Cell object is not found
Line 839: [G2L] LTE 1st Offset before Checking Roll-Back for Max Num (%d, %d, %d)
Line 867: [G2L] CONVERTED TIME Delta to START Pos (G->L)  SFN(%d) TTI(%d) Offset(%d) 			-> [Result Start Pos TTI(%d) Offset(%d)]
Line 884: [G2L] CONVERTED TIME LTE START <SFN(%d) TTI(%d) Offset(%d)> DUR <TTI (%d) Offset(%d)> 
Line 887: [G2L] LTE_CELL_MEASURE EARFCN [%d] numOfCell (%d)
Line 922: GL1 => MMC :: HEDGE_MMC_LTE_CELL_MEASURE_REQ Sending Fail
Line 926: pal_MemFree failure
Line 938: pal_MemFree failure
Line 969: LMS: Earfcn(%d) is not found in DB so TimingLatch not build
Line 973: LMS: l1x_LmmBuildTimingLatchReq  TYPE (%d -<11:SRCH 12: MEAS>) LatchSim:%d
Line 986: [GL1 Error] No Memory Allocated
Line 1007: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ (CUR_FN %d)
Line 1015: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1019: pal_MemFree failure
Line 1049: LMS: l1x_LmmCellSrchMeas_Adapter for Earfcn[%d] simno:%d
Line 1059: LMS: LTE_CELL_SEARCH_MEASURE canceled as No EARFCN or LTE measurement disabled or L1C_WAIT l1x_toggle_pending %d
Line 1069: [GL1 Error] No Memory Allocated
Line 1085: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ
Line 1093: GL1 => MMC :: HEDGE_MMC_LTE_TIMING_LATCH_REQ Sending Fail
Line 1097: pal_MemFree failure
Line 1114: LMS: [SIM1] last search&meas time is %d for EARFCN(%d)
Line 1122: LMS:[SIM2] last search&meas time is %d for EARFCN(%d)
Line 1148: LMS: Abort meas as Latch cnf %u is delayed, diff %u currTime %u
Line 1156: [GL1 Error] No Memory Allocated
Line 1165: [G2L] TimingLatchCnf -  LMS_IDLE_INDEX => Cell Search Measure
Line 1196: GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ
Line 1198: GL1 => MMC / G2L Measurement:: EARFCN (%d), MeasBandwidth (%d)
Line 1210: GL1 => MMC :: HEDGE_MMC_LTE_SEARCHMEASURE_REQ Sending Fail
Line 1214: pal_MemFree failure
Line 1220: LMS: last search&meas time is %d for EARFCN(%d)
Line 1227: LMS: EARFCN (%d) Not in Lmm DB
Line 1232: pal_MemFree failure
Line 1251: [G2L] Need to check SEARCHMEASURE scheduling
