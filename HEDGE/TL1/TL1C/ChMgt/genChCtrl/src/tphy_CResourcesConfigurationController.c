Line 367: [TL1HIST] Cnt=%4d::*Storage::0x%8x::0x%8x::0x%8x::0x%8x::0x%8x::0x%8x
Line 448: [TL1HIST] Null message in HistoryType=%d...
Line 490: [TL1HIST] No transceiver in HistoryType=%d...
Line 604: [TL1HIST] Wrong HistoryType=%d...
Line 649: T_Configuration[%d, %d], State: INIT, Event = 0
Line 654: T_Configuration[%d, %d], State: INIT, Event = %d
Line 670: ST%d T_DSDS: Event config received from controller %d 
Line 698:  ST%d T_DSDS:received Rf use response event from controller= %d with grant/reject= %d
Line 706: ST%d T_DSDS:Grant response from DSL1RC message interface
Line 723: ST%d T_DSDS: Send immediate Config cancel to URRC since other side is signaling 
Line 733: ST%d T_DSDS:resourcesConfigurationController_ptr->RfReqRetry= %d Max Retry %d retryPeriod %d
Line 739: retryPeriodinms %d
Line 750: ST%d T_DSDS:resourcesConfigurationController_ptr->RfReqRetry= %d Max Retry %d retryPeriod %d
Line 765: ST%d T_DSDS:ETphyResourcesConfigurationEventId_RfUsePauseReq requested in init 
Line 777: ST%d T_DSDS: Reconfiguration requested from controller
Line 811: ST%d T_Configuration[%d, %d], Some channel configured at campingDlUarfcn = %d but new channel at another uarfcn = %d
Line 815: T_Configuration[%d, %d], Explicit release off all channels at the previous uarfcn must take place first
Line 828: actionFun = requestDlUarfcnAccess, targetState = DlUarfcnAccessRequested
Line 835: actionFun = 0, targetState = TryToLockConfigurationForConfig
Line 879: ListenArfcnTranAck late - meanwhile Release or timeout expired
Line 897: new TryLocking event sent[%d,%d] - meanwhile locking timeout expired or release or new config request
Line 910: init_processEventFn -Thal Config Callback in Init state
Line 914: init_processEventFn -Thal Config Callback in Init state
Line 921: About to map - meanwhile Release
Line 929: About to start - meanwhile Release
Line 937: racing: URRC Transceiver sends release or config before StartStopDecoding object sends startDecoding
Line 980: ST%d T_DSDS:Release is received in init state
Line 988: Configuration: Release in init state - probably timeout expired or interratcoordinator release
Line 998: Timeout happened in Init state
Line 1019: Abort/Timeout in Init state
Line 1027: init_processEventFn -Imposible
Line 1035: Recv RfSettled Done:on Init
Line 1041: init_processEventFn -Unknown event
Line 1075: T_Configuration[%d, %d], State: DL_UARFCN_ACCESS_REQUESTED, Event = 0
Line 1082: T_Configuration[%d, %d], State: DL_UARFCN_ACCESS_REQUESTED, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 1092: config canceled by new config[%d,%d]
Line 1100: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 1111: Change State to CellTrackingRequested on ControllerId = %d
Line 1129: Change State to CellTrackingRequested on ControllerId = %d
Line 1138: Cannot happen RfSettled event!!![%d,%d] 
Line 1148: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in dlUarfcnAccess
Line 1164: HHO CFN time info = %d
Line 1201: Waiting for RF to settle - currentDlUarfcn = %d, uarfcn = %d, ControllerId = %d, is BG PCH = %d
Line 1212: Waiting for RF to settle - currentDlUarfcn = %d, uarfcn = %d, ControllerId = %d
Line 1241: ETphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1247: dlUarfcnAccessRequested_processEventFn -Thal Config Callback in dlUarfcnAccessRequested state
Line 1252: About to map and assign fingers - meanwhile Release
Line 1257: About to start - meanwhile Release
Line 1260: dlUarfcnAccessRequested_processEventFn -Imposible
Line 1267: release in DlUarfcnAccessRequest state
Line 1274: timeout in DlUarfcnAccessRequest state
Line 1290: dlUarfcnAccessRequested_processEventFn -Imposible
Line 1294: dlUarfcnAccessRequested_processEventFn -Unknown event
Line 1322: T_Configuration[%d, %d], State: CELL_TRACKING_REQUESTED, Event = 0
Line 1328: T_Configuration[%d, %d], State: CELL_TRACKING_REQUESTED, Event = %d, uarfcn=%d, primaryScrCode=%d
Line 1339: config canceled by new config[%d,%d]
Line 1350: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 1362: ListenArfcnTranAck in  ETphyResourcesConfigurationFSMStates_CellTrackingRequested
Line 1407: CellTrackingInd in cellTrackingRequested state, DCH state Cell tracking failed
Line 1424: config canceled[%d,%d] - tracking failed
Line 1429: config canceled[%d,%d] - tracking failed
Line 1441: CellTrackingInd in cellTrackingRequested state, N Freq Release
Line 1449: config canceled[%d,%d] - tracking failed
Line 1454: config canceled[%d,%d] - tracking failed
Line 1468: RfUsePauseReq requested incellTracking 
Line 1483: RF paused max number of times CellTrackingRequested state
Line 1489: ETphyResourcesConfigurationEventId_TryLocking in cellTrackingRequested state
Line 1495: cellTrackingRequested_processEventFn -Thal Config Callback in CellTrackingRequested state
Line 1500: About to map the database - meanwhile Release
Line 1505: About to start - meanwhile Release
Line 1508: cellTrackingRequested_processEventFn -Imposible!!!
Line 1518: release in CellTrackingRequested state
Line 1533: timeout in CellTrackingRequested state
Line 1547: cellTrackingRequested_processEventFn -Imposible!!!
Line 1551: cellTrackingRequested_processEventFn -Unknown event
Line 1588: T_Configuration[%d, %d], State: TRY_TO_LOCK_CONFIGURATION_FOR_CONFIG, Event = 0
Line 1596: T_Configuration[%d, %d], State: TRY_TO_LOCK_CONFIGURATION_FOR_CONFIG, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 1606: config canceled by new config[%d,%d]
Line 1614: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 1620: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForConfig state!!!
Line 1630: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in tryToLockConfigurationForConfig 
Line 1691: config canceled[%d][%d]
Line 1697: tryToLockConfigurationForConfig_processEventFn -Thal Config Callback in TryToLockConfigurationForConfig state
Line 1702: About to map the database - meanwhile Release
Line 1707: About to start - meanwhile Release
Line 1710: tryToLockConfigurationForConfig_processEventFn -Imposible
Line 1717: release in TryToLockConfigurationForConfig state
Line 1722: timeout in TryToLockConfigurationForConfig state
Line 1736: tryToLockConfigurationForConfig_processEventFn -Imposible
Line 1740: tryToLockConfigurationForConfig_processEventFn -Unknown Event
Line 1768: T_Configuration[%d, %d], State: THAL_CONFIGURATION, Event = 0
Line 1776: T_Configuration[%d, %d], State: THAL_CONFIGURATION, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 1787: config canceled by new config[%d,%d]
Line 1795: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 1801: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in thalConfiguration state!!!
Line 1811: ETphyResourcesConfigurationEventId_TryLocking in thalConfiguration state!!!
Line 1814: configThalInstances
Line 1833: ST%d HPlus T_DSDS : ETphyResourcesConfigurationEventId_RfUsePauseReq requested in  thalConfiguration 
Line 1840: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in thalConfiguration 
Line 1862: ETphyResourcesConfigurationEventId_RefRlSetMap in thalConfiguration state!!!
Line 1867: ETphyResourcesConfigurationEventId_Start in thalConfiguration state!!!
Line 1870: thalConfiguration_processEventFn -Impossible !!!
Line 1890: release in ThalConfiguration state
Line 1895: timeout in ThalConfiguration state
Line 1909: thalConfiguration_processEventFn -Impossible !!!
Line 1913: thalConfiguration_processEventFn -Unknown Event
Line 1934: T_Configuration[%d, %d], State: REF_RL_SET_MAP, Event = 0
Line 1941: T_Configuration[%d, %d], State: REF_RL_SET_MAP, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 1951: config canceled by new config[%d,%d]
Line 1959: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 1965: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in refRlSetMap state!!!
Line 1971: ETphyResourcesConfigurationEventId_CellTrackingInd in  refRlSetMap state!!!
Line 1976: ETphyResourcesConfigurationEventId_TryLocking in refRlSetMap state!!!
Line 1980: refRlSetMap_processEventFn -Thal Config Callback in refRlSetMap state
Line 2032: Hplus: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in  refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2039: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2048: ETphyResourcesConfigurationEventId_Start in refRlSetMap state!!!
Line 2052: refRlSetMap_processEventFn -Impossible!!!
Line 2067: release in refRlSetMap state
Line 2072: timeout in refRlSetMap state
Line 2086: refRlSetMap_processEventFn -Impossible!!!
Line 2089: refRlSetMap_processEventFn -Unknown Event!!!
Line 2109: T_Configuration[%d, %d], State: START, Event = 0
Line 2115: T_Configuration[%d, %d], State: START, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 2125: config canceled by new config[%d,%d]
Line 2133: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 2139: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in start state!!!
Line 2149: ETphyResourcesConfigurationEventId_TryLocking in start state!!!
Line 2153: start_processEventFn -Thal Config Callback in Start state
Line 2158: ETphyResourcesConfigurationEventId_RefRlSetMap in start state!!!
Line 2188: start
Line 2205: start_processEventFn ETphyResourcesConfigurationEventId_Start START will be done in DRX CYCLE
Line 2236: ST%d Hplus T_DSDS : ETphyResourcesConfigurationEventId_RfUsePauseReq requested in  start 
Line 2243: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in start 
Line 2251: start_processEventFn -Impossible !!!
Line 2266: release in start state
Line 2271: timeout in start state
Line 2276: start_processEventFn -Impossible !!!
Line 2279: start_processEventFn -Unknown Event
Line 2295: T_Configuration[%d, %d], State: AFC_CHECK, Event = 0
Line 2301: T_Configuration[%d, %d], State: AFC_CHECK, Event = %d
Line 2309: new config in afcCheckState
Line 2316: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 2322: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in afcCheck state!!!
Line 2330: ETphyResourcesConfigurationEventId_TryLocking in AfcCheck state
Line 2339: Hplus : ETphyResourcesConfigurationEventId_RfUsePauseReq requested in  AfcCheck 
Line 2346: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in AfcCheck 
Line 2354: afcCheck_processEventFn -Imposible
Line 2357: afcCheck_processEventFn -Imposible
Line 2360: afcCheck_processEventFn -Imposible
Line 2364: afcCheck_processEventFn -Imposible
Line 2381: afcCheck_processEventFn -Imposible
Line 2389: AFC Check Failed
Line 2399: afcCheck_processEventFn -Unknown Event
Line 2425: T_Configuration[%d, %d]: State - TRY_TO_LOCK_CONFIGURATION_FOR_RELEASE, Event = 0
Line 2432: T_Configuration[%d, %d]: State - TRY_TO_LOCK_CONFIGURATION_FOR_RELEASE, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 2441: new config in TryToLockConfigurationForRelease
Line 2448: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 2454: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForRelease state!!!
Line 2492: Config: Releasing RL configuration and fingers, and returning to idle
Line 2499: Config: Trying to lock during release.
Line 2506: Config: ConfigModification for release failed
Line 2514: tryToLockConfigurationForRelease_processEventFn -Thal Config Callback
Line 2519: About to map and assign fingers - meanwhile Release
Line 2524: About to start - meanwhile Release
Line 2527: tryToLockConfigurationForRelease_processEventFn -Impossible
Line 2536: release overides waiting config msg
Line 2540: tryToLockConfigurationForRelease_processEventFn -two consequtive release_EVT - illegal
Line 2548: timeout[%d,%d] in TryToLockConfigurationForRelease state - release have not done
Line 2554: tryToLockConfigurationForRelease_processEventFn -Impossible
Line 2557: tryToLockConfigurationForRelease_processEventFn -Impossible
Line 2578: T_Configuration[%d, %d], State: CONFIG_DONE, Event = 0
Line 2584: T_Configuration[%d, %d], State: CONFIG_DONE, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 2592: new config in configDoneState
Line 2599: rejected non camping configuration because camping T_Configuration[%d,%d] is taking place
Line 2605: ETphyResourcesConfigurationEventId_RfUsePauseReq requested in ConfigDone 
Line 2614: ETphyResourcesConfigurationEventId_ListenArfcnTranAck in configDone state!!!
Line 2622: TryLocking in ConfigDone state
Line 2628: configDone_processEventFn -Impossible
Line 2631: configDone_processEventFn -Impossible
Line 2634: configDone_processEventFn -Impossible
Line 2649: configDone_processEventFn -Impossible
Line 2654: configDone_processEventFn -Impossible
Line 2658: configDone_processEventFn -Unknown Event
Line 2677: T_Configuration[%d, %d]: State: ENDECODING_ENABLED, Event = 0
Line 2683: T_Configuration[%d, %d]: State: ENDECODING_ENABLED, Event = %d, uarfcn = %d, primaryScrCode = %d
Line 2697: Config: Rejected non-camping configuration because camping configuration is taking place
Line 2704: Config: Event ListenArfcnTranAck received in EnDecodingEnabled state
Line 2719: Config: Event TryLocking received in EnDecodingEnabled state
Line 2727: enDecodingEnabled_processEventFn -ENDECODING_ENABLED, Unexpected event
Line 2737: Config: Event Release received in EnDecodingEnabled state
Line 2744: enDecodingEnabled_processEventFn -Unexpected event received in EnDecodingEnabled state
Line 2748: RfUsePauseReq requested in  enDecodingEnabled 
Line 2756: enDecodingEnabled_processEventFn -ENDECODING_ENABLED, Unknown event
Line 2771: enDecodingEnabled_processEventFn : event=0
Line 2776: ST%d HPlus T_DSDS : dsSuspend_processEventFn():transceiverId=%d, eventId=%d, rfState=%d
Line 2781: ST%d HPlus T_DSDS : Config Message received in dsSuspend State
Line 2804: ST%d Hplus T_DSDS : RfUseResume received in dsSuspend State
Line 2812: ST%d HPlusT_DSDS : PCH Channel Release in dsSuspend State: Clear isDsRelease
Line 2817: ST%d HPlusT_DSDS : DCH Channel Release in dsSuspend State: Clear isDsRelease
Line 2826: ST%d Hplus T_DSDS : Channel Release received in dsSuspend State
Line 2831: Unknown event
Line 2877: configurationFsm == NULL
Line 2921: resourcesConfigurationController_ptr->configMsgDeadlineInfo.msg == NULL
Line 2924: initEntry srcId = %d, transceiverId = %d, RfPauseEnabled = %d
Line 2970: T_Configuration[%d, %d], State: INIT, Entry() delaying the HHO time or NFreq Release time config
Line 3024: ST%d T_DSDS:Deleted saved config message from resources configuration controller since message is not from URRC
Line 3050: init_STF entered
Line 3121: tphy_CResourcesConfigurationController_GetFirstMaxTTIAlignedCfn -Unknown TTI
Line 3139: ResCfgController: currentCFN = %d, firstMaxTTIAlignedCfn = %d, TTIMod = %d
Line 3169: tphy_CResourcesConfigurationController_getMaxTTIFrames -Unknown TTI
Line 3191: ResCfgController: New CFN for TDM =%d, Rep_Length =%d
Line 3218: ResCfgController: New CFN for TDM =%d, Rep_Length =%d
Line 3253: tphy_CResourcesConfigurationController_getDlDataStreamRelativeDeadline -Unknown TTI
Line 3317: ST%d T_DSDS:requestDsl1rcRfAccess : event=0
Line 3341: ST%d T_DSDS: Unable to send RF request message to DSL1RC
Line 3347: ST%d T_DSDS: requestDsl1rcRfAccess sent to DSL1RC interface from %d with cause %d and time %d
Line 3375: T_Configuration[%d, %d], Event = 0
Line 3380: T_Configuration[%d, %d], Event = %d
Line 3425: send
Line 3444: ResourceConfigController: getDlUarfcn(), ConfigMsg = 0
Line 3473: ResourceConfigController: getDlUarfcn(), isCampingDlUarfcn = FALSE
Line 3481: ResourceConfigController: getDlUarfcn(), isCampingDlUarfcn = FALSE
Line 3486: tphy_CResourcesConfigurationController_getDlUarfcn -Unknown controller type
Line 3500: ResourceConfigController: getDlUarfcn(), ConfigMsg = 0
Line 3515: tphy_CResourcesConfigurationController_getDlUarfcn -Non DedicatedModeControllerId
Line 3538: getPrimaryScrCode : configMsg=0
Line 3570: controllerId=%d
Line 3572: controllerId error
Line 3623: Resource config controller getRepPeriod: REP Length =%d,rep period =%d,offset = %d,current CFN =%d 
Line 3629: Resource config controller getRepPeriod missed the boundary
Line 3637: Resource config: get REP period TDMgap(), tdmstart = %d, repLength = %d,offset = %d,current CFN =%d
Line 3654: Resource config controller: Current SFN  =%d, REP Period =%d
Line 3676: controllerId=%d
Line 3678: controllerId error
Line 3715: controllerId=%d
Line 3717: controllerId error
Line 3748: uphy_CResourcesConfigurationController_getDSL1RCresponse : configMsg=0
Line 3760: tphy_CResourcesConfigurationController_getDSL1RCresponse : BchResourcesControllerId
Line 3765: tphy_CResourcesConfigurationController_getDSL1RCresponse : RachResourcesControllerId
Line 3770: tphy_CResourcesConfigurationController_getDSL1RCresponse : PchAndDrxResourcesControllerId
Line 3775: tphy_CResourcesConfigurationController_getDSL1RCresponse : FachResourcesControllerId
Line 3780: tphy_CResourcesConfigurationController_getDSL1RCresponse : DedicatedModeControllerId
Line 3784: Error in getDsl1rcResponse
Line 3833: controller type
Line 3873: controller type
Line 3947: configCanceled -event==0: uarfcn=%d, scrCode=%d
Line 3956: configCanceled[%d,%d]: uarfcn=%d, scrCode=%d
Line 3963: configCanceled[%d,%d]: uarfcn=%d, scrCode=%d
Line 3979: send
Line 4127: configCanceledByNewConfig : event=0
Line 4133: configCanceledByNewConfig -event->msg==0
Line 4139: configCanceledByNewConfig[%d,%d]: uarfcn=%d, scrCode=%d
Line 4155: send
Line 4195: unlockReleaseThalAndConfigCanceledByNewConfig -event->msg==0
Line 4223: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 4230: event->msg==0
Line 4265: unlockUnmapReleaseThalAndConfigCanceledByRelease -event->msg==0
Line 4295: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 4302: event->msg==0
Line 4333: unlockUnmapReleaseThalAndConfigCanceledByNewConfig : event=0
Line 4339: unlockUnmapReleaseThalAndConfigCanceledByNewConfig -event->msg==0
Line 4368: unlockReleaseThalAndConfigCanceledByRelease : event=0
Line 4374: unlockReleaseThalAndConfigCanceledByRelease -event->msg==0
Line 4422: configCanceledByRelease : event=0
Line 4428: configCanceledByRelease : event->msg==0
Line 4434: configCanceledByRelease[%d,%d]: uarfcn=%d, scrCode=%d SrcId=%d
Line 4451: send
Line 4546: T_Configuration[%d, %d]: State: THAL_CONFIGURATION_ENTRY state:  uarfcn=%d, scrCode=%d  isDsReconfig=%d
Line 4574: ConfigThalStf: isDsSuspend=%d, isDsReconfig=%d
Line 4588: tphy_CResourcesConfigurationController_ConfigThalStf skipped as FSM is in DsSuspend State
Line 4691: Dedi_Mod_Cont: configureDlPhyCh(), DlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 4786: afcCheckExit:this->afcTestToken cancel failed
Line 4906: Config[%d,%d]: Start Physical channel, UARFCN = %d, primaryScrCode = %d, isDsReconfig =%d, maxNrOfDlPhyCh %d
Line 5147: [SIC TEST][Warning] cDbPtr in NULL
Line 5150: [SIC TEST]NumberOfIntCells=%d, InterferenceCellId_0=%d, InterferenceCellId_1=%d
Line 5183: phyChArray index = %d, dlPhyChPtr = %d, PhyChState %d
Line 5198: rlStartCommand thal command exec failed: Err Code %d AddErrCode %d
Line 5234: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 5271: Config[%d,%d]: subscribeToMdbAndMap(), UARFCN=%d, primaryScrCode=%d, isDsReconfig =%d, isRelease=%d
Line 5275: ChangeInfo->(UARFCN=%d, numOfRls=%d, numOfDlTrChs=%d, numOfUlTrChs=%d)
Line 5288: ChangeInfo - pScrCode = %d
Line 5305: Map failed - (RlNr, UARFCN, pScrCode) = (%d, %d, %d)
Line 5313: Mapped RL = %d to pScrCode = %d
Line 5322: ChangeInfo - isRlChanged = %d, doNotMapRl = %d
Line 5341: Unmap failed because (RlNr, UARFCN, pScrCode) = (%d, %d, %d) not found in MappingDatabase
Line 5343: Check if already unmapped
Line 5352: Unmap successful for (RlNr, UARFCN, pScrCode) = (%d, %d, %d) from MappingDatabase
Line 5361: pScrCode seek failed (RlNr, UARFCN, pScrCode) = (%d, %d, %d) not found in MappingDatabase
Line 5363: Check if already unmapped
Line 5372: ChangeInfo - isRlChanged = %d, doNotMapRl = %d
Line 5389: DlTrCh MapDb - Mapping Error
Line 5395: DlTrCh MapDb - isRelease = %d, trChNr = %d, urrcTrchId = %d, thalTrchId = %d
Line 5405: DlTrCh MapDb - Mapping Error
Line 5412: DlTrCh MapDb - Unmap TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, thalTrchId=%d
Line 5427: Mapping error - UlTrChMappingDatabase, urrcTrchId = %d, thalTrchId = %d
Line 5435: Mapping successful - UlTrChMappingDatabase, urrcTrchId = %d, thalTrchId = %d
Line 5445: UnMapping error - Unmap UlTrChMappingDatabase, thalTrchId = %d
Line 5452: Unmap successful - UlTrChMappingDatabase, thalTrchId = %d
Line 5475: IfDedicatedConfigHasHigherSfnDiff prevSfnSfnDiff= %d, is pre sync = %d
Line 5520: Hplus T_Configuration[%d,%d] - configDoneEntry state: uarfcn=%d primaryScrCode=%d isDsReconfig =%d
Line 5529: Problem in logical configuration modification
Line 5643: Hplus T_Configuration[%d,%d] - DS_SUSPEND_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5892: T_Configuration[%d, %d], Channel Release, uarfcn=%d, scrCode=%d
Line 5905: releaseUpdateVerifierAndUnlock : LogicalConfigurationModification
Line 5929: Config: Failure in sending message
Line 5960: Token is submitted to postpone Sending ReleaseCnf =%p 
Line 6067: Channel RELEASED[%d,%d], uarfcn=%d, scrCode=%d
Line 6083: send
Line 6103: Token is submitted to postpone Sending ReleaseCnf =%p 
Line 6148: T_Configuration[%d,%d] - DS_SUSPEND_EXIT state:isDsSuspend=%d, isDsReconfig=%d
Line 6157: enableEnDecodingTransition(), Event == NULL
Line 6231: releaseDlThalInstances: nPhychToRelease = %d, PhyChStr = 0x%x
Line 6247: Release PhyCh - thal_CCmd_exec
Line 6273: Release CcTrCh - thal_CCmd_exec
Line 6322: Release TrCh - thal_CCmd_exec
Line 6340: Release Cctrch - thal_CCmd_exec
Line 6362: T_Configuration[%d, %d], State: DL_UARFCN_ACCESS_REQUESTED, Exit(), Timer was not started
Line 6387: tphy_CResourceConfigurationController_N Freq release
Line 6401: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 6428: cellTrackingRequestedExitNFreqRelease entered
Line 6607: tphy_CResourcesConfigurationController_deleteMsg : event->msg==0
Line 6681: Timing Indication Controller Index %d in Abnormal State %d
Line 6766: RfSettledHandler Is BCH =%d, is BG PCH = %d, tddRfSettledRequested = %d
Line 6785: !!!!tphy_CResourcesController_RfSettledHandler Do nothing !!!!
Line 6842: ST%d T_DSDS: Unable to send RF request message to DSL1RC
Line 6848: ST%d T_DSDS: sendRfRelease sent to DSL1RC interface with %d
Line 6867: ST%d T_DSDS: Unable to send RF request message to DSL1RC
Line 6873: ST%d T_DSDS: sendRfUsePauseDone sent to DSL1RC interface with %d
Line 6882: ST%d Hplus T_DSDS: Stop DL CcTrCh since pause received 
Line 6885: ST%d Hplus T_DSDS: No CcTrCh associated with Transceiver %d
Line 6895: ST%d Hplus T_DSDS: Stop CcTrCh - uhal_Cmd_exec
Line 6900: ST%d Hplus T_DSDS: Stop DLCcTrCh since pause received from DSL1RC
Line 6915: ST%d Hplus T_DSDS: pause DlPhych since pause received from other 3G client phyChStr %d
Line 6922: ST%d Hplus T_DSDS pauseDlPhych: PhyCH release: phych_nr = %d, copyphyChStr %d
Line 6933: ST%d Hplus T_DSDS: Release RakePhyCh - uhal_Cmd_exec
