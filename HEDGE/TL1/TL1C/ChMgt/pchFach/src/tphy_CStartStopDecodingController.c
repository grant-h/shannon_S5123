Line 271: startStopFsm==NULL
Line 349: Free : PalTimer_PchDone
Line 354: Free : PalTimer_PchConfig
Line 363: [StartStopD] handleStopping()
Line 381: [Warning][StartStopD] handleStopping(), Unexpected transceiverId = %d
Line 413: [StartStopD] handleSleeping: SleepingController is not turned ON
Line 436: [StartStopD] handleSleeping: target StartStopDecodingFsmEventId=%d(SleepingReq)
Line 440: [Warning][StartStopD] handleSleeping: Unexpected transceiverId=%d
Line 475: handleWaking: !!!!!!-[SKIP TDS OFF]-!!!!!!
Line 482: handleWaking: SleepingController is not turned ON
Line 508: [Warning]handleWaking: Unexpected transceiverId=%d
Line 571: [StartStopD] SwitchRF: currentDlUarfcn = %d,Target_uarfcn = %d
Line 600: TARGET UARFCN IS ZERO 
Line 620: Free : PalTimer_PchDone
Line 625: Free : PalTimer_PchConfig
Line 686: [StartStopD][PCH] Start after %dslot: currSlot= %d, currSfn= %d, pch_Sfn= %d, diff_Sfn= %d
Line 725: [StartStopD] HandleStarting token: BCH Active= %d
Line 754: [Warning][StartStopD] handleStarting: Unexpected transceiverId=%d
Line 775: HandleStarting debug , eventList = %d, list_ptr = %d, isFSMIdle = %d, numOfObjects =%d, head = %d
Line 829: [Warning]PCHANDDRX Waking: SleepingController is not turned ON
Line 896: [StartStopD] TDD IDLE_ENTRY state
Line 1043: [StartStopD] ETphyStartStopDecodingFsmEventId_BgPchStart event
Line 1065: [StartStopD] processIdleEvent(), Timeout in idle state
Line 1078: [Warning][StartStopD] processIdleEvent(), Unknown event
Line 1084: [Warning][StartStopD] processIdleEvent(), event = NULL
Line 1107: [StartStopD] TDD IDLE_EXIT state
Line 1152: [IRAT U2G] Cancel token before entering idle state
Line 1181: !!!GSM Still ON and force OFF!!!
Line 1190: ST%d T_DSDS: !!!GSM Still ON and force OFF!!!
Line 1209: [Warning][StartStopD] IdleExit: Unexpected transceiverId=%d
Line 1246: [StartStopD] TDD SLEEPING_ENTRY state: bchCofingToken = %d
Line 1280: [Warning][StartStopD] SLEEPING_ENTRY state. Unexpected transceiverId=%d.
Line 1319: [Warning][StartStopD] SleepingEntry: SleepingController is not turned ON
Line 1367: [Warning][StartStopD] processSleepingEvent: SleepingController is not turned ON
Line 1375: [StartStopD] PROCESS SLEEP EVENT state
Line 1384: ETphyStartStopDecodingFsmEventId_Release in sleep state
Line 1395: [StartStopD] processSleepingEvent: Timeout in sleeping state
Line 1545: [Warning][StartStopD] processSleepingEvent: Unknown event in sleeping state - eventId=%d
Line 1551: [Warning][StartStopD] processSleepingEvent: event = NULL in sleeping state
Line 1575: [StartStopD] TDD SLEEPING_EXIT state: PCH configured = %d
Line 1594: UE did not camp to any frequency
Line 1634: [Warning][StartStopD] SleepingExit: SleepingController is not turned ON
Line 1664: [StartStopD] TDD WAKING_ENTRY state
Line 1705: [Warning][StartStopD] Can not happen when FACH is configured
Line 1709: [Warning][StartStopD] WakingEntry: Unexpected transceiverId=%d
Line 1715: [Warning][StartStopD] WakingEntry: but SleepingController is not turned ON
Line 1732: [Warning][StartStopD] WakingEntry: AFC HOLD due to low deltaRSCP
Line 1773: [Warning][StartStopD] processWakingEvent: SleepingController is not turned ON
Line 1781: [StartStopD] PROCESS WAKING EVENT state: Event id = %d
Line 1786: [StartStopD] processWakingEvent: Timeout in waking state
Line 1866: [Warning][StartStopD] processWakingEvent: Unknown event in waking state - eventId=%d
Line 1872: [Warning][StartStopD] processWakingEvent: event = NULL in waking state
Line 1893: [StartStopD] TDD WAKING_EXIT state
Line 1897: [Warning][StartStopD] WakingExit: SleepingController is not turned ON
Line 1921: [StartStopD] TDD DECODING_ENTRY state
Line 1959: [Warning][StartStopD] DecodingEntry: AFC HOLD due to low deltaRSCP
Line 1984: [StartStopD] intra done SFN %d, current Sfn %d LastMeasToCurrentSfn %d, pich_Status %d, PchToPichSfnDiff %d
Line 2029: [Warning][StartStopD] DecodingEntry():isPchRelease is TRUE
Line 2059: [StartStopD] launchScheduleGap(): scheduleGapToken != NULL
Line 2081: [StartStopD] LaunchScheduleGap(): scheduleGap() will be run after %d slots
Line 2116: [Warning] LaunchSynchroListen: this->synchroListenToken != NULL 
Line 2133: LaunchSynchroListen: RSN=%d, synchroListenUarfcnSTF will run at timeStamp=%d
Line 2137: LaunchSynchroListen: currentRSN=%d, listenRSN=%d in the past
Line 2159: SynchroListen run
Line 2383: [Warning][StartStopD] processDecodingEvent(): Unknown event
Line 2390: [Warning][StartStopD] processDecodingEvent(), event = NULL
Line 2417: [StartStopD] enterRetiring_5DRXcycles = %d drxCycleNumber = %d compulsoryRetiring %d
Line 2452: [StartStopD] TDD DECODING_EXIT state
Line 2457: mgm==NULL
Line 2468: [StartStopD] decodingExit(), Decoding state timeout was not started
Line 2482: DecodingExit: srl1rcRoundRobinSkip: %d
Line 2503: cdbUpdatingUtility==NULL
Line 2602: [StartStopD] TDD RETIRING_ENTRY state
Line 2615: pich_Sfn %d, NumberOfRsnToPich %d
Line 2664: Retiring Entry: Autopause timer check 
Line 2673: assert check RF not available go back to sleep
Line 2753: [StartStopD] TDD RETIRING_EXIT state
Line 2759: [StartStopD] RetiringExit(), Retiring state timeout was not started
Line 2779: !!!GSM Still ON and force OFF!!!
Line 2790: RetiringExit(), UE has not camped on any frequency
Line 2831: [StartStopD] PROCESS RETIRING EVENT state: RF WITH US =%d
Line 2849: UE did not camp to any frequency
Line 2877: [Warning][StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Sleeping , RF WITH US %d
Line 2884: [Warning][StartStopD] processRetiringEvent: SleepingController isn't turned ON, Target state = Retiring
Line 2893: [StartStopD] processRetiringEvent(), target state = Decoding
Line 2899: [Warning][StartStopD] processRetiringEvent(), StartDecodingReq received but isSleepingController is TRUE, target state = Retiring
Line 2912: [StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), target StartStopDecodingFsmStates=Sleeping
Line 2926: [Warning][StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), Wrong event
Line 2932: assert check RF not available go back to sleep
Line 2950: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Retiring
Line 2957: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause) during U2L meas, dealy sending Pause done, target StartStopDecodingFsmStates=Retiring
Line 2964: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Sleeping
Line 2978: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Retiring
Line 2988: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause) during U2L meas, target StartStopDecodingFsmStates=Retiring
Line 2997: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Pause), target StartStopDecodingFsmStates=Sleeping
Line 3007: ST%d T_DSDS [StartStopD] processRetiringEvent receives eventId=%d(Resume), target StartStopDecodingFsmStates=Retiring
Line 3139: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Idle
Line 3146: [StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), target StartStopDecodingFsmStates=Sleeping
Line 3154: [Warning][StartStopD] processRetiringEvent receives eventId=%d(RfBackFinished), Wrong event
Line 3166: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3172: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3180: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3193: interFrequencyCellReselectionMeasDone isAutoPauseTimerSet = %d, pauseTimeForGsmOrEutra = %d
Line 3202: [StartStopD] processRetiringEvent, timeToPich %d
Line 3364: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3370: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3502: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3508: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3528: [Warning][StartStopD] processRetiringEvent: Unexpected transceiverId=%d
Line 3534: [StartStopD] processRetiringEvent, Target state = ETphyTphyStartStopDecodingFsmStates_Retiring
Line 3583: [Warning][StartStopD] processRetiringEvent(), Unexpected event in retiring state
Line 3589: [Warning][StartStopD] processRetiringEvent: event = NULL in retiring state
Line 3609: [StartStopD] BGPCH_BCH_DECODING ENTRY state
Line 3634: [StartStopD] BGPCH_BCH_DECODING EXIT state
Line 3643: [Warning][StartStopD] BgPchDecodeBchExit BCH timeout not set
Line 3668: [StartStopD] BGPCH_BCH_DECODING PROCESS state: Event ID=%d, Is BCH Prio = %d
Line 3715: [Warning][StartStopD] UNKNOWN event in processBgPchDecodeBchEvent event->eventId = %d
Line 3744: [StartStopD] BGPCH_PCH_DECODING ENTRY state
Line 3769: [StartStopD] BGPCH_PCH_DECODING EXIT state
Line 3778: [Warning][StartStopD] BgPchDecodeBchExit PCH timeout not set
Line 3803: [StartStopD] BGPCH_PCH_DECODING PROCESS state: Event ID=%d
Line 3852: [Warning][StartStopD] UNKNOWN event in processBgPchDecodePchEvent eventId = %d
Line 3869: [StartStopD] TDD INTERVENE ENTRY state
Line 3887: [StartStopD] INTERVENE PROCESS state: Event ID=%d
Line 3975: 
Line 3993: [StartStopD] TDD INTERVENE EXIT state
Line 4030: 
Line 4037: SwitchFreq  eventId= %d,Target_uarfcn = %d
Line 4057: [StartStopD] TDD WakingDuring: begins
Line 4065: [Warning][StartStopD] TDD WakingDuring: SleepingController is not turned ON
Line 4103: SendTimeoutEvent: target StartStopDecodingFsmEventId=%d
Line 4132: TriggerMeasurementsSTF: launched at RSN=%d, (sfn, slot)=(%d, %d), stateId=%d(should be DRX)
Line 4174: DrxState = %d
