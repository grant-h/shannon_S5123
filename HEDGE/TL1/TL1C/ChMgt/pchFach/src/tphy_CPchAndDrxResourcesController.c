Line 273: [PchAndDrx] tphy_CSleepManager_InitDone
Line 286: registeredList==NULL
Line 385: InitDone: send failed
Line 389: InitDone: : send succeeded
Line 419: registeredInfo == NULL pointer
Line 426: [PchAndDrx] registerServer: serverId=%d
Line 431: [PchAndDrx] registerServer: serverId=%d listed already
Line 456: [PchAndDrx] deregisterServer: serverId=%d
Line 460: [PchAndDrx] deregisterServer: serverId=%d not found
Line 491: [SKIP]RfbackProcessing_stf : Already Power off
Line 517: [SKIP]RfbackProcessing : Already started Rf back
Line 529: [Warning][PchAndDrx] RfbackProcessing : UE did not camp to any frequency(%d)
Line 548: [PchAndDrx] RfbackProcessing : Try to next subframe, currentSlot=%d
Line 578: [ST%d T_DSDS] PchAndDrx RfConfigDone
Line 607: [PchAndDrx] RfbackFinished: RF back to TDS: at sfn = %d, Sleep type %d
Line 621: current sfn = %d, target StartStopDecodingFsmEventId=%d(RfBackFinished)
Line 647: tphy_CSleepManager_InitDone
Line 663: InitDone: send failed
Line 723: [PchAndDrx] check_left_to_sleep (NextEvent_PCH): pch_sfn=%d, currentSfn=%d, diff_sfn=%d, isSleepPossible=%d
Line 740: [PchAndDrx] check_left_to_sleep (NextEvent_PICH): Pich_Sfn=%d, currentSfn=%d, diff_sfn=%d, isSleepPossible=%d
Line 808: [PchAndDrx] intraFCellReselMeasDone: StartTime %d, CurrentTime %d, OverAllTimeTakeForIntra %d, IntraMeasHistoryAvgTime %d, IntraMeasHistoryCount %d, DetectSpikeInIntraTime %d
Line 821: [PchAndDrx] intraFCellReselMeasDone: pich_done %d, isMarginEnough = %d . meas manager state %d
Line 890: [PchAndDrx] intraFCellReselMeasDone: current sfn = %d, NextEventID=%d
Line 924: [PchAndDrx] interFrequencyCellReselectionMeasDone: current sfn = %d, target StartStopDecodingFsmEventId=%d(interFrequencyCellReselectionMeasDone)
Line 939: Send GSM resel meas done indication delayCount %d
Line 1006: [Warning][PchAndDrx] gsmCellReselectionMeasDone: Not In Proper state to handle!
Line 1014: [PchAndDrx] gsmCellReselectionMeasDone: current sfn = %d, target StartStopDecodingFsmEventId=%d(gsmCellReselectionMeasDone)
Line 1062: ST%d T_DSDS: !!!GSM OFF for DSDS!!!
Line 1076: [PchAndDrx] ST%d HPlus T_DSDS: triggerInternalPauseReq: send MsgId_RfUsePauseReq and suspend PCH configuration
Line 1106: [PchAndDrx] ST%d HPlus T_DSDS: triggerInternalResumeReq: sending eventId (%d)
Line 1133: [PchAndDrx] process: MsgId=%d
Line 1139: [PchAndDrx] Event = ETphyStartStopDecodingFsmEventId_Release
Line 1145: [Warning][PchAndDrx] process: Config Msg received not in idle state
Line 1149: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_Config
Line 1160: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_CellTrackingInd
Line 1167: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_CellTrackingInd
Line 1176: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_ListenArfcnTranAck
Line 1183: [Warning][PchAndDrx] ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 1198: [PchAndDrx] Event = ETphyStartStopDecodingFsmEventId_Release srl1rcRoundRobinSkip: %d srl1rcForcedRoundRobinSkip: %d srl1rcIsFirstPICHReject: %d
Line 1204: [Warning][PchAndDrx] process: Rel Msg received not in idle state
Line 1216: [PchAndDrx] Event = ETphyResourcesConfigurationEventId_Release
Line 1248: [PchAndDrx] ST%d T_DSDS: receives Rf Use Response from DSL1RC Message interface
Line 1263: [PchAndDrx] ST%d T_DSDS process: RF pause received from DSL1RC interface
Line 1270: [PchAndDrx] ST%d T_DSDS process: Reset PCH configuration to init
Line 1276: [PchAndDrx] ST%d T_DSDS process: Send RF pause received from DSL1RC interface to StartstopFSM
Line 1283: [Warning][PchAndDrx] ST%d T_DSDS process: RF not in use
Line 1292: [PchAndDrx] ST%d T_DSDS process: RF resume received from DSL1RC interface
Line 1295: [PchAndDrx] ST%d T_DSDS process: Restart PCH configuration
Line 1302: [PchAndDrx] ST%d T_DSDS process: Enable PCH decoding
Line 1313: [PchAndDrx] ST%d T_DSDS process: Send RF resume received from DSL1RC interface to StartstopFSM
Line 1320: ST%d T_DSDS: EUphyPchAndDrxResourcesControllerMsgId_RfUseResumeReq Rf resumed for BGPCH
Line 1327: [Warning][PchAndDrx] ST%d T_DSDS process: MsgId_RfUseResumeReq Rf not Paused, probably released from URRC
Line 1353: [Warning][PchAndDrx] process: Unknown MsgId=%d
Line 1455: [Warning][PchAndDrx] requestCellTracking: cellSfnReqMsg send failure
Line 1461: [PchAndDrx] requestCellTracking: Sfn=%d, TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 1485: [PchAndDrx] isCellTrackingCompleted: cellTrackingTransactId=%d
Line 1491: [PchAndDrx] isCellTrackingCompleted: Unrecognized cellTrackingTransactId=%d
Line 1531: [Warning][PchAndDrx] cancelCellTracking: cellSfnCancelReqMsg send failure
Line 1538: [PchAndDrx] cancelCellTracking: TransactId=%d, uarfcn=%d, primaryScrCode=%d
Line 1598: delaySleepForTimingAdjust is active before scheduling token
Line 1601: Delay sleep by 3 frame for timing adjustment settling
Line 1619: [PchAndDrx] enableEnDecoding: enters into StartStopDecodingController, target StartStopDecodingFsmEventId=%d(Start)
Line 1692: [Warning][PchAndDrx] sendConfirmationMsg: doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1702: [Warning][PchAndDrx] sendConfirmationMsg: send failed
Line 1706: [PchAndDrx] sendConfirmationMsg: send succeeded
Line 1755: [Warning][PchAndDrx] sendConfirmationMsg: Wrong MsgId=%d received. Only config and release need confirm
Line 1773: [Warning][PchAndDrx] sendConfirmationMsg: send failed
Line 1777: [PchAndDrx] sendConfirmationMsg: send succeeded
Line 1808: [PchAndDrx] configThalInstances: launch configThalInstancesStf
Line 1893: [PchAndDrx] configThalInstancesStf: isDsReconfig %d state %d
Line 1908: [Warning] DlSlotInfoArray==NULL
Line 1931: [Warning] Insufficient Phychs
Line 1982: [Warning][PchAndDrx] configTHAL(), PICH config failed
Line 1988: [PchAndDrx] configTHAL(), PICH configured for UARFCN = %d, cellParamId = %d
Line 1999: [Warning] Insufficient Phychs
Line 2044: [Warning][PchAndDrx] configTHAL(), SCCPCH config failed
Line 2050: [PchAndDrx] configTHAL(), SCCPCH configured for UARFCN = %d, cellParamId = %d
Line 2063: [Warning][PchAndDrx] configThalInstancesStf: Not enough free Trch-s
Line 2076: [Warning][PchAndDrx] configThalInstancesStf: trCh config failed
Line 2095: [Warning][PchAndDrx] configThalInstancesStf: trCh config failed
Line 2119: [Warning][PchAndDrx] configThalInstancesStf: Not enough free Cctrch-s
Line 2127: [PchAndDrx] configTHAL(), cctrchNr = %d, freeCctrchsBitStream = %d
Line 2168: [Warning][PchAndDrx] configThalInstancesStf: DlCcTrCh config failed
Line 2186: [PchAndDrx] configThalInstancesStf: Invalid state=%d
Line 2205: [Warning][PchAndDrx] configThalInstancesStf: Unknown state=%d
Line 2212: [Warning][PchAndDrx] configThalInstancesStf: ThalCfg Failed
Line 2283: [PchAndDrx] releasePchAndDrxThalInstances
Line 2296: [Warning][PchAndDrx] releasePchAndDrxThalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 2338: Free : TphyTimingAdjustTimer
Line 2345: Free : delaySleepForTimingAdjust
Line 2390: PCH decoding is done
Line 2412: [Warning] PCH Done ISR is arrived late
Line 2464: [Warning] PchAndDrx getDrxCycleLength: configMsg==NULL
Line 2494: [Warning][PchAndDrx] getDrxCycleLength: Unknown enum drxCycleLength=%d
Line 2500: [PchAndDrx] getDrxCycleLength: drxCycleLength=%d, PBP = %d
Line 2523: [Warning][PchAndDrx] getDrxCycleLength: configMsg==NULL
Line 2539: [Warning][PchAndDrx] getNGap: Unknown enum NGap=%d
Line 2546: [PchAndDrx] getNgapFrames to cal pch_sfn: nGap= %d from URRC, converted NGap= %d in TPHY
Line 2597: [Warning][PchAndDrx][PCH] SCCPCH (PCH) CONFIG FAIL
Line 2602: [PchAndDrx][PCH] SCCPCH (PCH) CONFIG PASS
Line 2635: [PchAndDrx][PCH] startThalInstances: pichStatus=%d(Dormant/NoSig/Nack/Ack), primaryScrCode = %d
Line 2651: [Warning] DlPhyChStartCommand thal command exec failed: Err Code %d AddErrCode %d
Line 2672: CCTRCH already running
Line 2682: [Warning][PchAndDrx] startThalInstances: DlCctrchEnableCmd exec failed
Line 2720: [PchAndDrx] stopThalInstances
Line 2730: [Warning][PchAndDrx] stopThalInstances: ThalDlPhChStopCommand exec failed
Line 2749: [Warning][PchAndDrx] stopThalInstances: DlCctrchStopCmd exec failed
Line 2757: [PchAndDrx] stopThalInstances: CCTrCH not running
Line 2779: unhandled input
Line 2815: [PchAndDrx] calculatePq Lpi = %08d, Npi = %08d, Np = %08d, Pi = %08d, pich_offset_sfn = %08d
Line 2853: Free : PalTimer_PchDone
Line 2858: Free : PalTimer_PchConfig
Line 2876: [PchAndDrx][PCH] SetPchStartTimer: PchSfn= %d currentSFN= %d diffSfn= %d, startAfter= %dslot
Line 2987: PCH cell ID = %d, BCH cell ID = %d, adjustChips = %d, timingAdjustCmd = %d isTimingAdjustedForServing = %d
Line 3004: TimingAdjustTimer is active before scheduling token
Line 3010: TimingAdjustTimer timeto_timingAdjust (RSNs) = %d, this_Sfn = %d, pagingReceptionSfn = %d, current_RSN = %d 
Line 3063: [PchAndDrx][PICH] start: PhyCh config, start and Pich Enable
Line 3102: [Warning][PchAndDrx] DL Phych Config (PICH) FAIL
Line 3122: [Warning][PchAndDrx] DL Phych (PICH) Start FAIL
Line 3146: [Warning][PchAndDrx] startPICH: DlPichEnableCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 3163: [SKIP][PchAndDrx][PICH] BCH ONGOING SO PICH RECEPTION IS SKIPPED
Line 3184: [PchAndDrx][PICH] Release: pichRakeNr=%d
Line 3195: [Warning][PchAndDrx][PICH] releasePICH: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 3264: [PchAndDrx][PICH] Start after %dslot: currSlot= %d, PiPosition= %dslot, currSfn= %d, pi_Sfn= %d, diff_Sfn= %d
Line 3309: [PchAndDrx][PCH] scheduleGap: this->decodingStopTimer!=0 before sumbit new token
Line 3316: [Warning][PCH] WAKEUP DELAYED
Line 3326: [PchAndDrx][PCH] scheduleGap: pagingReceptionSfn=%d, currentSfn=%d, pch_tti_end_gap=%d, cctrchNr=%d, cctrchState=%d
Line 3387: [BPLMN]AvialableSleepTime(): currentSFN = %d, nextPICHSFN=%d, NextPchTime=%d, PchToPichSfnDiff=%d, BPLMN PICH=%d, BPLMN PCH=%d
Line 3420: [BPLMN]tdd_isBPLMN=%d, BPLMNavailableTime=%d, StartTime=%d, SleepType=%d, bplmn_available_sfn=%d
Line 3426: [BPLMN]bplmn_available_sfn is less
Line 3468: UpdateNextRFGrantRequestTimeNonSleepCase():currentRSN=%d, WakeUpRsn=%d, currentTime = %d, nextEventStartTime = %d
Line 3557: [PichSkip]UpdateNextRFGrantReqTime(): RemainWakeupOtherSim=%d, RemainWakeup3GT=%d, AbsDiff=[%d < %d], CollisionCnt=%d, NoneCollisionCnt=%d
Line 3562: [PichSkip]UpdateNextRFGrantReqTime(): CheckTriggerPichSkippedWhenWaking=%d
Line 3578: UpdateNextRFGrantReqTime(): currentTime=%d, nextEventStartTime=%d
Line 3600: UpdateTimeToDsL1rc: wakeup indicated to dsl1rc=%d microS, currenttime=%d microUS
Line 3669: [PchAndDrx] CalPichAndPchSfn: pich_Sfn = %d,PagingReceptionSfn =%d, drxCycleLength = %d
Line 3702: [PchAndDrx] CalPichAndPchSfn: NextPagingOccasionSfn = %d,timeToGo  =%d,.this->maxTTI =%d
Line 3709: [PchAndDrx] CalPichAndPchSfn: timeToGo is minus and adjust: reSyncTime=%d but timeToGo=%d.this->maxTTI =%d
Line 3753: [PchAndDrx] CalPichAndPchSfn: drxCycleLength=%d, Ngap=%d, Npch=%d, RepLength=%d
Line 3762: [PchAndDrx] CalPichAndPchSfn: primary Code=%d, primary Code=%d, IMSI(H)=%x, IMSI(L)=%x
Line 3770: [PchAndDrx] CalPichAndPchSfn: currentSfn[%d],initPoSfn[%d],timeToGo[%d],pichSfn[%d],pchSfn[%d],reSyncTime[%d]
Line 3821: [PchAndDrx] scheduleWakeup[DRX]: late for resync because required reSyncTime=%d but timeToGo=%d
Line 3848: [PchAndDrx] scheduleWakeup[DRX]: WakeUpRSN[%d+%d+%d+1=%d], pichFrameBoundaryRsn[%d]
Line 3855: [PchAndDrx] scheduleWakeup[DRX]: this->wakeUpTimer != NULL before submit new token
Line 3870: [PchAndDrx] scheduleWakeup[DRX]: tokenTimestampRsn=%d
Line 3878: [PchAndDrx] scheduleWakeup[NAP]: tokenTimestampRsn=%d
Line 3936: [PchAndDrx] scheduleSleeping: RSN=%d
Line 3971: [PchAndDrx] cancelTokens
Line 3975: Free : PalTimer_PichConfig
Line 3980: Free : PalTimer_PchDone
Line 3985: Free : PalTimer_PchConfig
Line 3990: Free : TphyTimingAdjustTimer
Line 3997: Free : TphyDelayForTimingAdjust
Line 4019: [Warning] message creation failed in RequestMultipathMgmtStopUpdating
Line 4032: [Warning][PchAndDrx] RequestMultipathMgmtStopUpdating: msg send failed
Line 4037: RequestMultipathMgmtStopUpdating
Line 4055: [Warning] message creation failed in RequestMultipathMgmtStartUpdating
Line 4068: [Warning][PchAndDrx] RequestMultipathMgmtStartUpdating: msg send failed
Line 4073: [PchAndDrx] RequestMultipathMgmtStartUpdating: msg send succeeded
Line 4103: [PchAndDrx] eutraCellReselMeasDone at current sfn = %d
Line 4116: [Warning] cdbUpdatingUtility is NULL
Line 4151: [PchAndDrx] triggerMeasurements: startStopFsmState=%d
Line 4160: cdbUpdatingUtility==NULL
Line 4210: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 4260: mgm==NULL
Line 4267: [PchAndDrx] triggerMeasurements: isSparseMeasuremenMode=%d, uPeriodCounterInSparseMeasMode=%d
Line 4301: [PchAndDrx] triggerMeasurements: fddMeasurementController=%d, numOfFddMidServer=%d
Line 4320: [PchAndDrx] triggerMeasurements: isInterFreqMsmtTriggered=%d, isInterFreqMsmtTriggeringConditionMet=%d
Line 4323: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4424: [IRAT U2G][PchAndDrx] triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4452: [IRAT U2G][PchAndDrx] triggerMeasurements: numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 4457: [IRAT U2G][PchAndDrx] triggerMeasurements: can't find out registeredInfo with gsmMid=%d
Line 4482: [IRAT U2G][PchAndDrx] triggerMeasurements: no GSM mid server to trigger
Line 4488: [IRAT U2G][PchAndDrx] triggerMeasurements: don't trigger GSM measurement in case interFreq is on going
Line 4518: [IRAT U2L][PchAndDrx] triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalEutraMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4545: [IRAT T2L][PchAndDrx] triggerMeasurements: numOfTriggeredMidServer %d is different from numOfEutraMidServer %d
Line 4550: [IRAT T2L][PchAndDrx] triggerMeasurements: can't find out registeredInfo with eutraMid=%d
Line 4569: [IRAT T2L][PchAndDrx] triggerMeasurements: no E-UTRA mid server to trigger
Line 4576: [IRAT T2L][PchAndDrx] triggerMeasurements: don't trigger E-UTRA measurement in case interFreq or gsm Meas are on going
Line 4599: Interevene Meas intra done SFN %d, Inter Done SFN %d, Current SFN %d LastIntraMeasToCurrentSfn %d, LastInterMeasToCurrentSfn %d, CurrentSfnToPichDiff %d
Line 4601: [IRAT T2L][PchAndDrx] triggerMeasurements: no E-UTRA mid server to trigger
Line 4630: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 4672: mgm==NULL
Line 4707: [PchAndDrx] triggerMeasurements: fddMeasurementController=%d, numOfFddMidServer=%d
Line 4726: [PchAndDrx] triggerMeasurements: isInterFreqMsmtTriggered=%d, isInterFreqMsmtTriggeringConditionMet=%d
Line 4728: [PchAndDrx] triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 4806: [PchAndDrx] triggerMeasurements: Unexpected startStopFsmState=%d(I/D/S/W/R/No)
Line 4993: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - handleSleeping called
Line 5013: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - HandleStarting called
Line 5025: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No)
Line 5043: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - handleSleeping called
Line 5050: [Warning][PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No)
Line 5061: [PchAndDrx][PICH] pich_Status: %d, srl1rcRoundRobinSkip: %d
Line 5091: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - handleSleeping called
Line 5098: [PchAndDrx][PICH] PichIndIsr: currRSN=%d, PichStatus=%d(D/No/N/A)[%s], startStopFsmState=%d(I/D/S/W/R/No) - HandleStarting called
Line 5103: [Warning][PchAndDrx][PICH] pichIndIsr: pichStatus=%d(ACK:3), in startStopFsmState=%d(I/D/S/W/R)
Line 5110: [Warning][PchAndDrx][PICH] pichIndIsr: PICH IRQ handler called when PCHAndDRX not configured
Line 5127: [PchAndDrx][PICH] Pich position = %d (even=0, odd=1)
Line 5290: SetIsPchRelease=%d
Line 5306: RejectByDsl1rcStf()
Line 5387: [ST%d T_DSDS] Grant by DSL1RC when waking up 3G
Line 5426: [ST%d T_DSDS][PichSkip] Reject by DSL1RC when waking up 3G: PichWakingRejectCnt %d, PchWakingRejectCnt %d, GrantRcvdInDrx %d
Line 5443: [PichSkip]Set TriggerPichSkiped as %d
Line 5495: [ST%d T_DSDS] PCHrequeststatus: scheduled(%d) requested(%d) deviation from scheduled %d Reject/Grant(0/1)-(%d), uphydsl1rcRFState %d, MeasRetryAfterTheseSfns %d
Line 5539: [ST%d T_DSDS] requestDsl1rcRfAccess sent to DSL1RC interface from %d with cause %d and time %d, result %d
Line 5559: [BPLMN]Irat BPLMN Ind is sent to DSL1RC
Line 5564: [Warning][BPLMN]Unable to send Irat BPLMN Ind to DSL1RC!!
Line 5585: [Warning][ST%d T_DSDS] Unable to send RF release done message to DSL1RC
Line 5595: [ST%d T_DSDS] sendRfReleaseDone sent to DSL1RC interface with %d
Line 5619: [Warning][ST%d T_DSDS] Unable to send RF release done message to DSL1RC
Line 5629: [ST%d T_DSDS] SendRfPauseeCnf sent to DSL1RC interface with %d
