Line 121: LMS: l1x_LmsPtm() !!
Line 128: LMS: lte_meas_in_ptm flag is disabled!! G2L in PTM will not run
Line 140: LMS: measIndex (%d) LteMeasState (%d) MeasFlag (%d)
Line 144: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 151: LMS: PTM mode measurement manager called occassion length(%d)
Line 178: l1x_LmsFillCommon()
Line 224: DUR (%d %d) START (%d %d)
Line 247: l1x_LmsBuildSrchMeasReq()
Line 255: LMS: srch&meas request made on EARFCN(%d), priority(%d)
Line 274: LMS: no available resource for priority object
Line 299: LMS: l1x_LmsBuildSrchReq()
Line 315: LMS: START(F %d, QB %d) DUR (F %d, QB %d)
Line 319: LMS: l1x_LmsBuildSrchReq on EARFCN(%d), priority(%d), Type (%d) Start(%d,%d) Dur(%d,%d)
Line 326: LMS: no available resource for priority object
Line 352: l1x_LmsBuildMeasReq()
Line 368: ERROR!!! OUT OF BOUND in CELL MEAS CNT. Need to check the Functino Again!
Line 391: ### [%d] LTE CELL (%d) FrPos (%d) cpType (%d)
Line 398: LMS: l1x_LmsBuildMeasReq on EARFCN(%d), priority(%d), numOfCells(%d), Type(%d)
Line 405: LMS: no available resource for priority object
Line 438: LMS: L1X_BuildMeasurements - %d (0:Idle, 1: PTM, 2: TCH, 3:SDCCH)
Line 441: LMS:Avoid IRAT during BG pwr Scan
Line 447: Skip Ums Measurement build-PCH/BCH in PTM ongoing
Line 453: LMS: IRAT Meas Disabled
Line 461: LMS: IRAT Reselection triggered avoid Meas
Line 469: LMS:Avoid IRAT in 2nd Window of SYNC NCELL Job
Line 475: Skip Lms Measurement build-DSL1RC Pause nearby
Line 493: LMS: found ARFCN
Line 496:  +++ 1) LMS: EARFCN (%d) deltaTime = %d
Line 523: LMS: LTE Search and Measure Svc is generated
Line 529: LMS: Warning - measNeeded is FALSE!!
Line 534: [GL1 Error] EARFCN object is not found in l1x_LmmGetEarfcnInfo
Line 551: LMS: Skip the measurement generation due to delay from TBF timer !!
Line 569:  ++ 1-1) LMS_PTM_SRCH: deltaTime (%d) lastSrch(%d) EARFCN(%d)
Line 573: [GL1 Error] wrong state index for building measurement
Line 596:  ++ 1-2) LMS_PTM_SRCH:  Giving Boost Priority (%d)
Line 601: ++ 1-2) LMS_PTM_SRCH: delta is not enough to target time!!
Line 608: ++ 1-3) LMS_PTM_SRCH: deltaTime (%d) lastSrch(%d) EARFCN(%d) priority(%d) simno(%d)
Line 626:  ++ 2-1) LMS_PTM_MEAS: deltaTime (%d) lastMeas(%d) Cell[%d, %d] / totalCell (%d)
Line 630: [GL1 Error] Cell is not found
Line 643:  ++ 2-2) LMS_PTM_MEAS: targetTime(%d) priority(%d)
Line 648: ++ 2-2) LMS_PTM_MEAS: delta is not enough to target time!!
Line 658: ++ 2-3) LMS_PTM_MEAS: LTE Measure Svc is Stored (%d)
Line 663: ++ 2-4) LMS_PTM_MEAS: LTE Measure Svc is Generated for 4 Cells
Line 666: ++ 2-4) LMS_PTM_MEAS: MeasReq[%d] - %d
Line 677: ++ 2-5) LMS_PTM_MEAS: LTE Measure Svc is Generated for %d Cells 
Line 680: ++ 2-4) LMS_PTM_MEAS: MeasReq[%d] - %d
Line 687: ++ 2-0) LMS_PTM_MEAS: Do Nothin => NumOfCell is (%d) in EARFCN (%d) ptmSrchDone(%d)
Line 703: LMS: wrong state index for building measurement !!
Line 731: LMS: l1x_LmsIdle() !!
Line 741: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 742: LMS: LTE measurement generation - DENIED(busy for:%d, enabled:%d)
Line 747: LMS: idle mode measurement manager called occassion length(%d)
Line 775: LMS: l1x_LmmMeasPending() !!
Line 789: LMS: found ARFCN on simno:%d
Line 794:  +++ 1) LMS: EARFCN (%d) deltaTime = %d
Line 810: [GL1 Error] EARFCN object is not found in l1x_LmmGetEarfcnInfo
Line 835: LMS: l1x_LmmMeasurementReport() !!
Line 885: GsmLatchTime - gFrameCount=%d, gQbit=%d 
