Line 125: 3G3G: CommonSleepControllerRequestSleep: Invalid ClientID = %d
Line 131: 3G3G: CommonSleepControllerRequestSleep: Raw Wakeup = %d, clientId = %d
Line 147: 3G3G: CommonSleepControllerRequestSleep: SW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
Line 155: 3G3G: CommonSleepControllerRequestSleep: HW Sleep Requested By ClientID = %d, HWStatus = 0x%x, CurrentRSN=%d, WakeupRSN=%d
Line 197: 3G3G: CommonSleepControllerRequestSleep: WARNING!Wrong HW Status 
Line 238: 3G3G: CommonSleepControllerRequestWakeup: ClientID = %d, HWStatus = 0x%x, isSw=%d isEarly = %d isForced = %d
Line 304: 3G3G: FEE start: iteration=%d. FEE running at rsn=%d
Line 314: 3G3G: FEE start: igoreFeeDrag =%d, clientID=%d
Line 321: 3G3G: EHalSleepFeeEnableCmd exec failure
Line 343: 3G3G: CommonSleepControllerStopFee Client ID= %d
Line 347: 3G3G: EHalSleepFeeDisableCmd exec failure
Line 365: 3G3G: setHWusage Client ID= %d
Line 376: 3G3G: clearHWusage Client ID= %d
Line 386: 3G3G: RegisterClient Client ID= %d
Line 401: 3G3G: DeregisterClient Client ID= %d
Line 424: 3G3G:  Client ID= %d isClientRegistered = %d
Line 441: 3G3G: IsGreaterRsn Rsn1 %d Rsn2 %d returnval %d diff %d
Line 447: 3G3G:isModemSleeping= %d
Line 453: 3G3G:CommonSleepControllerGetWakeupRSN= %d
Line 459: 3G3G:CommonSleepControllerGetHWUsageStatus= %d
Line 470: 3G3G:CommonSleepControllerIsSleepIssued issueSleepToken = %d result = %d
Line 476: 3G3G:CommonSleepControllerGetRegisteredClientStatus= %d
Line 482: 3G3G:CommonSleepControllerSetRescheduleStatus status= %d pichRSN = %d, clientId = %d
Line 492: 3G3G:CommonSleepControllerGetRescheduleStatus status= %d clientId = %d
Line 498: 3G3G:CommonSleepControllerSetPICHSkipStatus status= %d  clientId = %d
Line 504: 3G3G:CommonSleepControllerGetPICHSkipStatus status= %d clientId = %d
Line 510: 3G3G:CommonSleepControllerSetEarlyWakeupTimeInSlots slots= %d  clientId = %d
Line 516: 3G3G:CommonSleepControllerGetEarlyWakeupTimeInSlots slots= %d clientId = %d
Line 522: 3G3G:CommonSleepControllerGetPichRSN status= %d clientId = %d
Line 529: 3G3G:CommonSleepControllerSetPichRSN pichRSN= %d clientId = %d
Line 534: 3G3G:CommonSleepControllerGetCollisionStatus isCollisionStatus %d
Line 582: CommonSleepController: All stacks not in sleep, StackSleepReqStatus %d
Line 606: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 632: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn by %d slots pichRSN %d wakeupRSN %d
Line 639: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by +PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 650: 3G3G: CommonSleepControllerRequestSleep: Shifting WakeupRSn of other client by -PREPOND_WAKEUP_IN_SLOTS slots wakeupRSN %d
Line 665: 3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: I/P  RSN %d
Line 690: 3G3G: CommonSleepControllerHWAdjustSleepSlotCorrection: O/P  RSN %d
Line 723: CommonSleepController: All stacks not in sleep, StackSleepReqStatus %d
Line 736: 3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
Line 776: 3G3G: CommonSleepControllerRequestSleep: Conflict identified reset optimization %d
Line 849: 3G3G: scheduleSwWakeup: ClientID = %d, wakeupRSN = %d, currentRSN = %d
Line 934: 3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
Line 946: 3G3G: checkNearestWakeup Collision Detected and WakeupTiming Adjusted: targetRSN = %d, targetClient = %d
Line 956: 3G3G: checkNearestWakeup: targetRSN = %d, targetClient = %d
Line 971: 3G3G: IssueSleepCmd Client ID= %d, WakeUpRSN = %d
Line 988: sleepStart - uhal_Cmd_exec
Line 1001: 3G3G: CancelAllSwWakeupTokens Client ID= %d
Line 1018: 3G3G: WakeUpCallBack: isPCHConfiguredForWakeupClient= %d
Line 1041: SMC Correction for client = %d,HwSfn = %d SwSfn = %d
Line 1042: SMC Correction for client = %d,HwSlot = %d PreviousSwSlot = %d
Line 1049: SMC Correction for client = %d,NewSwSlot = %d
Line 1076: 3G3G: SleepStartCallBack: isPCHConfiguredForWakeupClient= %d
Line 1109: 3G3G: EHalSleepStartCmd exec failed: errCode=%d addErrCode=%d
Line 1117: 3G3G: CFEE_EnableCallBack
Line 1130: 3G3G: CommonSleepController_CPchAndDrxResourcesController_InitDone
Line 1147: 3G3G: CommonSleepControllerProcessUrrcQueue
Line 1167: 3G3G:CommonSleepControllerSetIsDRImpossible isDRImpossible= %d clientId = %d bitMask %d
Line 1182: 3G3G:CommonSleepControllerSetRescheduleStatusforDR status= %d  clientId = %d
Line 1188: 3G3G:CommonSleepControllerGetRescheduleStatusforDR status= %d clientId = %d
Line 1217: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client not Registered
Line 1225: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Other Client Not Updated Yet
Line 1231: 3G3G:CommonSleepControllerCheckOverlappedWakingDuration: Client registered although wakeuptime not updated yet
Line 1258: firstClient %d firstWakeRsn %d secondClient %d secondWakeRsn %d
Line 1268: CommonSleepControllerCheckOverlappedWakingDuration: Insufficient Margin to prepond, Setting isDrImpossible
Line 1306: 3G3G:CommonSleepControllerSetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
Line 1311: 3G3G:CommonSleepControllerGetDrNotAvailableDuringScheduling isDRImpossible= %d clientId = %d
Line 1324: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Client not Registered
Line 1332: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: Other Client PICH Rsn Not Updated Yet
Line 1338: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: PichRsn other client is second
Line 1343: 3G3G:CommonSleepControllerCheckandReturnPichRsnDifference: ClientId %d WakeRsn is first although PICH Rsn is second, retval = %d
Line 1352: 3G3G:CommonSleepControllerSetDrPichRsn: ClientId %d PichRsn %d
Line 1368: 3G3G:CommonSleepControllerCheckandClearRescheduleStatusforDR: Postpone other client (%d) wakeup, OtherClientWakeupRSN %d
