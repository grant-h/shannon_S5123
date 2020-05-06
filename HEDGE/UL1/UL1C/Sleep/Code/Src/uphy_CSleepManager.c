Line 126: uphySleepWaitingTimer Created!
Line 126: uphySleepWaitingTimer Created!
Line 130: uphySleepWaitingTimer Timing set OK!
Line 130: uphySleepWaitingTimer Timing set OK!
Line 134: uphySleepWaitingTimer Timing set Failed!
Line 134: uphySleepWaitingTimer Timing set Failed!
Line 139: uphySleepWaitingTimer Creation Failed!
Line 139: uphySleepWaitingTimer Creation Failed!
Line 163: Get_Emodem_Irat_Activity: emodeStatusForIrat : %d
Line 201: Instance created for stackId %d
Line 201: Instance created for stackId %d
Line 244: SleepManager IsBchActive: BCH[%d] active, bchUsed %d
Line 244: SleepManager IsBchActive: BCH[%d] active, bchUsed %d
Line 281: SleepManager uphySleepStartCallBack run at rsn=%d sfn=%d reason=%d
Line 281: SleepManager uphySleepStartCallBack run at rsn=%d sfn=%d reason=%d
Line 333: Not enough time for sleep: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 333: Not enough time for sleep: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 339: Cancel Sleeping: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 339: Cancel Sleeping: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 347: uphySleepStartCallBack:Clean for Measurement
Line 347: uphySleepStartCallBack:Clean for Measurement
Line 386: Relasing PCH so cancel Umts Power off
Line 386: Relasing PCH so cancel Umts Power off
Line 398: uphy_CSleepManager_IssueSleepCmd:Clean for Measurement
Line 398: uphy_CSleepManager_IssueSleepCmd:Clean for Measurement
Line 468: S0  %s: wasHwSleep is TRUE
Line 468: S0  %s: wasHwSleep is TRUE
Line 476: uphy_CSleepManager_startSleepSTF:uphy_CSleepManager_startSleep sleepStopSignalValue=%d
Line 476: uphy_CSleepManager_startSleepSTF:uphy_CSleepManager_startSleep sleepStopSignalValue=%d
Line 480: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 480: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 491: Cancel startSleep timer
Line 491: Cancel startSleep timer
Line 530: uphySleepWaitingTimer_TimerCallback
Line 530: uphySleepWaitingTimer_TimerCallback
Line 534: Relasing PCH and cancel Umts Power off
Line 534: Relasing PCH and cancel Umts Power off
Line 548: CellReselection wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 548: CellReselection wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d
Line 563: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 563: S0  Sleep NOT allowed -pchReleaseFlag %d
Line 569: S0  Wrong timer handle expire
Line 569: S0  Wrong timer handle expire
Line 726: Cant issue the SleepStart Command to UHAL
Line 726: Cant issue the SleepStart Command to UHAL
Line 736: Cancel sleeping: pchReleaseFlag %d bchUsed %d, cancelSleeping %d, isCBS %d
Line 736: Cancel sleeping: pchReleaseFlag %d bchUsed %d, cancelSleeping %d, isCBS %d
Line 769: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap
Line 769: Forcing adjustedWakeUpAfter to a frame to avoid DRX overlap
Line 776: Schedule wake up: bchUsed %d, cancelSleeping %d, isCbs %d 
Line 776: Schedule wake up: bchUsed %d, cancelSleeping %d, isCbs %d 
Line 786: uphy_CSleepManager_startSleep(%d) run at rsn = %d sfn = %d slot = %d no gapEnd
Line 786: uphy_CSleepManager_startSleep(%d) run at rsn = %d sfn = %d slot = %d no gapEnd
Line 821: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 821: S0  StartStopDecodingController handleWaking: SleepingController is not turned ON
Line 828: S0  StartStopDecodingController handleWaking: Waking without Power On
Line 828: S0  StartStopDecodingController handleWaking: Waking without Power On
Line 859: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 859: StartStopDecodingController handleWaking: target StartStopDecodingFsmEventId=%d(WakeUpReq) run at rsn=%d sfn=%d,deadline=%d
Line 865: S0  StartStopDecodingController handleWaking: Unexpected transceiverId=%d
Line 865: S0  StartStopDecodingController handleWaking: Unexpected transceiverId=%d
Line 872: DSDS: autopause handler expiry with out start or after stop
Line 872: DSDS: autopause handler expiry with out start or after stop
Line 884: Stack Suspended, Return
Line 884: Stack Suspended, Return
Line 895: During reselection: cellReselection = %d
Line 895: During reselection: cellReselection = %d
Line 924: S0  uphy_CSleepManager_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 924: S0  uphy_CSleepManager_getListenRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  PICH SFN = %d
Line 959: S0  uphy_CSleepManager_GsmPowerOffInd: gsmPowerOffWaitCnt %d
Line 959: S0  uphy_CSleepManager_GsmPowerOffInd: gsmPowerOffWaitCnt %d
Line 1007: Introduction of registry to enable/disable Sleep from UL. SleepENABLE status - %d
Line 1007: Introduction of registry to enable/disable Sleep from UL. SleepENABLE status - %d
Line 1018: DSDS_CBS uphy_CSleepManager_tryToSleep: Don't allow sleep till FACH for CTCH configuration completes 
Line 1018: DSDS_CBS uphy_CSleepManager_tryToSleep: Don't allow sleep till FACH for CTCH configuration completes 
Line 1054: S0  cancel sleep due to not enough time for sleep (current SFN : %d, wakesfn : %d)
Line 1054: S0  cancel sleep due to not enough time for sleep (current SFN : %d, wakesfn : %d)
Line 1082: SleepManager tryToSleep[1]: Can StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1082: SleepManager tryToSleep[1]: Can StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1086: SleepManager tryToSleep[2]: Can StartSleep, startStopAsleep=%d(1) bchUsed=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0),cancelSleeping = %d(0)
Line 1086: SleepManager tryToSleep[2]: Can StartSleep, startStopAsleep=%d(1) bchUsed=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0),cancelSleeping = %d(0)
Line 1091: SleepManager tryToSleep[3]: Can StartSleep, cbsReleaseFlag = %d(0),sleepNotAllowed=%d, rfRelByDsL1Rc = %d(0), prevBPLMNStatus=%d(0)
Line 1091: SleepManager tryToSleep[3]: Can StartSleep, cbsReleaseFlag = %d(0),sleepNotAllowed=%d, rfRelByDsL1Rc = %d(0), prevBPLMNStatus=%d(0)
Line 1122: S0  !!!!!!!!!!!!!!!!!!Measurement Pending in sleep state!!!
Line 1122: S0  !!!!!!!!!!!!!!!!!!Measurement Pending in sleep state!!!
Line 1172: Can't StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1172: Can't StartSleep, SleepInProgress=%d(0), measurementPending=%d(0), vgmBusy=%d(0), fingersPending=%d(0), startStopAsleep=%d(1) isGsmOn=%d(0), isBPLMN=%d(0)
Line 1175: Can't StartSleep, startStopAsleep=%d(1) isGsmOn=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0)
Line 1175: Can't StartSleep, startStopAsleep=%d(1) isGsmOn=%d(0), feeRunning =%d(0), cellReselFlag =%d(0), isBchAcitve =%d(0)
Line 1178: Can't StartSleep, cancelSleeping = %d(0), sleepNotAllowed=%d,cbsReleaseFlag = %d(0), prevBPLMNStatus=%d(0)
Line 1178: Can't StartSleep, cancelSleeping = %d(0), sleepNotAllowed=%d,cbsReleaseFlag = %d(0), prevBPLMNStatus=%d(0)
Line 1229: Reschedule wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d,isBPLMN =%d ,wakeUpTimer 0x%x wakeUpAfter %d,
Line 1229: Reschedule wake up: gapEndSfn %d, currentRSN %d, pichFrameBoundaryRsn %d,isBPLMN =%d ,wakeUpTimer 0x%x wakeUpAfter %d,
Line 1232: Reschedule wake up: prevBPLMNStatus %d isCBS %d, isWakingForCtchDecoding %d shortCtchPeriod %d
Line 1232: Reschedule wake up: prevBPLMNStatus %d isCBS %d, isWakingForCtchDecoding %d shortCtchPeriod %d
Line 1254: uphy_CSleepManager_wakeup run at rsn = %d sfn = %d
Line 1254: uphy_CSleepManager_wakeup run at rsn = %d sfn = %d
Line 1283: S0  3G3G: uphy_IssueSleep: gapendSFN=%d
Line 1283: S0  3G3G: uphy_IssueSleep: gapendSFN=%d
Line 1377: S0  3G3G: uphy_ScheduleWakeupToken wakeUpAfter %d current time  %d WakeReqPalTime %d
Line 1377: S0  3G3G: uphy_ScheduleWakeupToken wakeUpAfter %d current time  %d WakeReqPalTime %d
Line 1396: wakeUpTimer set Failed!
Line 1396: wakeUpTimer set Failed!
Line 1414: S0  DSDS:uphy_CSleepManager_tryToSleep: wakeup indicated to dslrc=%u microseconds
Line 1414: S0  DSDS:uphy_CSleepManager_tryToSleep: wakeup indicated to dslrc=%u microseconds
Line 1458: S0  uphy_CSleepManager_getCTCHRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  sfnToDecodeFachForCtch = %d
Line 1458: S0  uphy_CSleepManager_getCTCHRSN, this_Sfn=%d, this_slot = %d, diffSfn=%d, diffRsn=%d  sfnToDecodeFachForCtch = %d
Line 1491: adjustWakeupRSN for CTCH : wakeUpSfn %d, currentRSN %d, DecodeFachForCtchRsn %d, wakeUpAfter %d
Line 1491: adjustWakeupRSN for CTCH : wakeUpSfn %d, currentRSN %d, DecodeFachForCtchRsn %d, wakeUpAfter %d
Line 1505: adjustWakeupRSN for PICH : wakeUpSfn %d, currentRSN %d, pichFrameBoundaryRsn %d, wakeUpAfter %d
Line 1505: adjustWakeupRSN for PICH : wakeUpSfn %d, currentRSN %d, pichFrameBoundaryRsn %d, wakeUpAfter %d
Line 1512: S0  adjustWakeupRSN: adjustWakeupRSN %d after adjustment
Line 1512: S0  adjustWakeupRSN: adjustWakeupRSN %d after adjustment
