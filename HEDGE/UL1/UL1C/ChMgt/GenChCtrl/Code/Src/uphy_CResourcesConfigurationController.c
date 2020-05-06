Line 520: init_processEventFn: event=0
Line 520: init_processEventFn: event=0
Line 528: init_processEventFn: transceiverId is %d, myIndex is %d
Line 528: init_processEventFn: transceiverId is %d, myIndex is %d
Line 534: [BCH for RefCell]: init_processEventFn: EUphyResourcesConfigurationEventId_Config received
Line 534: [BCH for RefCell]: init_processEventFn: EUphyResourcesConfigurationEventId_Config received
Line 541: DSDS: Event config received from controller %d 
Line 541: DSDS: Event config received from controller %d 
Line 592: received Rf use response event from controller= %d with grant/reject= %d
Line 592: received Rf use response event from controller= %d with grant/reject= %d
Line 599: Grant response from DSLRC message interface
Line 599: Grant response from DSLRC message interface
Line 614: Start MPDB update,Grant is received for transceiver %d
Line 614: Start MPDB update,Grant is received for transceiver %d
Line 618: MPDB update not started as BPLMN is ongoing.
Line 618: MPDB update not started as BPLMN is ongoing.
Line 654: token submit when modem off
Line 654: token submit when modem off
Line 666: Fach Retry timestamp=%d 
Line 666: Fach Retry timestamp=%d 
Line 670: resourcesConfigurationController_ptr->RfReqRetry= %d Max Retry %d  retryPeriod=%d timeSlotsToWait=%d rfRetryTimestamp=%d 
Line 670: resourcesConfigurationController_ptr->RfReqRetry= %d Max Retry %d  retryPeriod=%d timeSlotsToWait=%d rfRetryTimestamp=%d 
Line 701: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in init 
Line 701: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in init 
Line 717: Unexpected Pause request received in Init state(may be due to race condition btw release and pause) 
Line 717: Unexpected Pause request received in Init state(may be due to race condition btw release and pause) 
Line 722: RfPauseEnabled %d isrfrequested %d
Line 722: RfPauseEnabled %d isrfrequested %d
Line 731: DSDS: Reconfiguration requested from controller
Line 731: DSDS: Reconfiguration requested from controller
Line 788: Some channel configured at campingDlUarfcn=%d but new channel at another uarfcn=%d				- explicit release off all channels at the previous uarfcn must take place first
Line 788: Some channel configured at campingDlUarfcn=%d but new channel at another uarfcn=%d				- explicit release off all channels at the previous uarfcn must take place first
Line 842: ECF: requestDlUarfcnAccess function called and FSM set to DlUarfcnAccessRequested 
Line 842: ECF: requestDlUarfcnAccess function called and FSM set to DlUarfcnAccessRequested 
Line 858: 2nd Carrier: init_processEventFn, Primary carrier not configured, thus secondary carrier will not be configured.
Line 858: 2nd Carrier: init_processEventFn, Primary carrier not configured, thus secondary carrier will not be configured.
Line 869: [DC/3C-HSDPA] (init_processEventFn)  primary carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d
Line 869: [DC/3C-HSDPA] (init_processEventFn)  primary carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d
Line 877: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is TRUE
Line 877: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is TRUE
Line 882: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is FALSE
Line 882: [3C-HSDPA] (init_processEventFn)  st sec carrier:   prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, st sec. carrier IsDlSecondaryCellPresent is FALSE
Line 889: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is TRUE
Line 889: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is TRUE
Line 894: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is FALSE
Line 894: [3C-HSDPA] (init_processEventFn)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, 2nd sec. carrier IsDlSecondaryCellPresent is FALSE
Line 919: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn,   Primary carrier has changed from UARFCN %d to UARFCN %d.
Line 919: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn,   Primary carrier has changed from UARFCN %d to UARFCN %d.
Line 920: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn, Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 920: [DC/3C-HSDPA] 2nd Carrier: init_processEventFn, Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 924: [DC/3C-HSDPA] Additional 2nd Carrier: init_processEventFn, Additional Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 924: [DC/3C-HSDPA] Additional 2nd Carrier: init_processEventFn, Additional Secondary carrier has changed from UARFCN %d to UARFCN %d.
Line 949: 2nd Carrier: init_processEventFn,  Secondary carrier change failed.
Line 949: 2nd Carrier: init_processEventFn,  Secondary carrier change failed.
Line 1012: ListenArfcnTranAck late - meanwhile Release or timeout expired
Line 1012: ListenArfcnTranAck late - meanwhile Release or timeout expired
Line 1019: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1019: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1035: new TryLocking event sent[%d,%d] - meanwhile locking timeout expired or release or new config request
Line 1035: new TryLocking event sent[%d,%d] - meanwhile locking timeout expired or release or new config request
Line 1041: Uhal Config Callback in Init state
Line 1041: Uhal Config Callback in Init state
Line 1046: About to map and assign fingers - meanwhile Release
Line 1046: About to map and assign fingers - meanwhile Release
Line 1051: About to start - meanwhile Release
Line 1051: About to start - meanwhile Release
Line 1056: racing: URRCTransceiver sends release or config before StartStopDecoding object sends startDecoding
Line 1056: racing: URRCTransceiver sends release or config before StartStopDecoding object sends startDecoding
Line 1121: DSDS:Set isRfRequested to False  for TransId %d
Line 1121: DSDS:Set isRfRequested to False  for TransId %d
Line 1123: DSDS:Release is received in init state
Line 1123: DSDS:Release is received in init state
Line 1129: Reset isRfRequested flag for BCH controller 
Line 1129: Reset isRfRequested flag for BCH controller 
Line 1155: Release in init state - probably timeout expired or interratcoordinator release
Line 1155: Release in init state - probably timeout expired or interratcoordinator release
Line 1160: Probably some timeout did not stopped. See how you stop timeouts
Line 1160: Probably some timeout did not stopped. See how you stop timeouts
Line 1165: Imposible!!!
Line 1165: Imposible!!!
Line 1170: Recv Sttd detection Done:on Init
Line 1170: Recv Sttd detection Done:on Init
Line 1179: Unknown event
Line 1179: Unknown event
Line 1208: sttdDetectionRequested_processEventFn : event=0
Line 1208: sttdDetectionRequested_processEventFn : event=0
Line 1212: sttdDetectionRequested_processEventFn : eventId =%d
Line 1212: sttdDetectionRequested_processEventFn : eventId =%d
Line 1222: config canceled by new config[%d,%d]
Line 1222: config canceled by new config[%d,%d]
Line 1230: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1230: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1236: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in sttdDetection (ControllerId = %d)
Line 1236: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in sttdDetection (ControllerId = %d)
Line 1254: DSDS: RF use pause Requested in STTD state sttdTimeoutToken cancelled
Line 1254: DSDS: RF use pause Requested in STTD state sttdTimeoutToken cancelled
Line 1267: ListenArfcnTranAck - sttdDetectionRequested
Line 1267: ListenArfcnTranAck - sttdDetectionRequested
Line 1274: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1274: ListenArfcnTranScConfigAck late - meanwhile Release or timeout expired
Line 1283: CellTrackingInd - sttdDetectionRequested
Line 1283: CellTrackingInd - sttdDetectionRequested
Line 1290: TryLocking event sent[%d,%d] - - sttdDetectionRequested
Line 1290: TryLocking event sent[%d,%d] - - sttdDetectionRequested
Line 1299: sttdDetectionRequested: Imposible!!!
Line 1299: sttdDetectionRequested: Imposible!!!
Line 1308: Not Released by interRatCoordinator
Line 1308: Not Released by interRatCoordinator
Line 1314: Released by interRatCoordinator
Line 1314: Released by interRatCoordinator
Line 1322: timeout in sttdDetectionRequested state
Line 1322: timeout in sttdDetectionRequested state
Line 1327: SttdDetectionRequested:Imposible!!!
Line 1327: SttdDetectionRequested:Imposible!!!
Line 1336: Unknown event
Line 1336: Unknown event
Line 1356: dlUarfcnAccessRequested_processEventFn : event=0
Line 1356: dlUarfcnAccessRequested_processEventFn : event=0
Line 1368: config canceled by new config[%d,%d]
Line 1368: config canceled by new config[%d,%d]
Line 1376: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1376: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1384: Change State to CellTrackingRequested on ControllerId = %d
Line 1384: Change State to CellTrackingRequested on ControllerId = %d
Line 1403: Cannot happen RfSettled event!!![%d,%d] 
Line 1403: Cannot happen RfSettled event!!![%d,%d] 
Line 1411: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in dlUarfcnAccess. rfSettledRequested = %d
Line 1411: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in dlUarfcnAccess. rfSettledRequested = %d
Line 1441: ECF: FSM set to Cell Tracking requested
Line 1441: ECF: FSM set to Cell Tracking requested
Line 1468: Waiting RF settle: currentDlUarfcn =%d, uarfcn=%d, ControllerId = %d
Line 1468: Waiting RF settle: currentDlUarfcn =%d, uarfcn=%d, ControllerId = %d
Line 1486: Remove the cell info [%d, %d]
Line 1486: Remove the cell info [%d, %d]
Line 1524: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1524: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1531: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1531: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1536: About to map and assign fingers - meanwhile Release
Line 1536: About to map and assign fingers - meanwhile Release
Line 1541: About to start - meanwhile Release
Line 1541: About to start - meanwhile Release
Line 1545: Imposible!!!
Line 1545: Imposible!!!
Line 1559: timeout in DlUarfcnAccessRequest state
Line 1559: timeout in DlUarfcnAccessRequest state
Line 1564: Imposible!!!
Line 1564: Imposible!!!
Line 1570: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1570: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1575: Unknown event
Line 1575: Unknown event
Line 1591: dlUarfcnAccessRequested_processEventFn : event=0
Line 1591: dlUarfcnAccessRequested_processEventFn : event=0
Line 1603: config canceled by new config[%d,%d]
Line 1603: config canceled by new config[%d,%d]
Line 1611: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1611: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1619: Change State to CellTrackingRequested on ControllerId = %d
Line 1619: Change State to CellTrackingRequested on ControllerId = %d
Line 1637: Cannot happen RfSettled event!!![%d,%d] 
Line 1637: Cannot happen RfSettled event!!![%d,%d] 
Line 1650: EUphyResourcesConfigurationEventId_ScUafcnSettled
Line 1650: EUphyResourcesConfigurationEventId_ScUafcnSettled
Line 1660: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1660: EUphyResourcesConfigurationEventId_TryLocking in DlUarfcnAccessRequested state
Line 1667: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1667: Uhal Config Callback in dlUarfcnAccessRequested state
Line 1672: About to map and assign fingers - meanwhile Release
Line 1672: About to map and assign fingers - meanwhile Release
Line 1677: About to start - meanwhile Release
Line 1677: About to start - meanwhile Release
Line 1681: Imposible!!!
Line 1681: Imposible!!!
Line 1695: timeout rcvd in dlScUarfcnAccessRequested_processEventFn
Line 1695: timeout rcvd in dlScUarfcnAccessRequested_processEventFn
Line 1700: Imposible!!!
Line 1700: Imposible!!!
Line 1706: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1706: Recv Sttd detection Done:on DlUarfcnAccessRequested
Line 1711: Unknown event
Line 1711: Unknown event
Line 1743: enDecodingEnabled_processEventFn : event=0
Line 1743: enDecodingEnabled_processEventFn : event=0
Line 1759: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1759: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1765: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 1765: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 1775: TryLocking in EnDecodingEnabled state
Line 1775: TryLocking in EnDecodingEnabled state
Line 1782: Imposible!!!
Line 1782: Imposible!!!
Line 1786: Imposible!!!
Line 1786: Imposible!!!
Line 1790: Imposible!!!
Line 1790: Imposible!!!
Line 1794: Imposible!!!
Line 1794: Imposible!!!
Line 1817: Imposible!!!
Line 1817: Imposible!!!
Line 1833: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) uarfcn(%d) is not valid!! or isRfReconfigured %d: skip cell tracking...
Line 1833: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) uarfcn(%d) is not valid!! or isRfReconfigured %d: skip cell tracking...
Line 1841: In dlScUarfcnReleaseRequested_processEventFn: NON_UMTS_RAT_MODE = %d
Line 1841: In dlScUarfcnReleaseRequested_processEventFn: NON_UMTS_RAT_MODE = %d
Line 1852: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) cell tracking called
Line 1852: [3C-HSDPA] (dlScUarfcnReleaseRequested_processEventFn) cell tracking called
Line 1864: timeout rcvd in dlScUarfcnReleaseRequested_processEventFn
Line 1864: timeout rcvd in dlScUarfcnReleaseRequested_processEventFn
Line 1871: Imposible!!!
Line 1871: Imposible!!!
Line 1876: Recv Sttd detection Done:on EnDecodingEnabled
Line 1876: Recv Sttd detection Done:on EnDecodingEnabled
Line 1880: Unknown event
Line 1880: Unknown event
Line 1907: cellTrackingRequested_processEventFn : event=0
Line 1907: cellTrackingRequested_processEventFn : event=0
Line 1919: config canceled by new config[%d,%d]
Line 1919: config canceled by new config[%d,%d]
Line 1927: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1927: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 1933: ListenArfcnTranAck in  EUphyResourcesConfigurationFSMStates_CellTrackingRequested
Line 1933: ListenArfcnTranAck in  EUphyResourcesConfigurationFSMStates_CellTrackingRequested
Line 1948: S0 requestCellTracking  freqHypoCnt %d  isFreqHypo=TRUE
Line 1953: S0 requestCellTracking  freqHypoCnt %d, isFreqHypo %d
Line 1959: S0, requestCellTracking  freqHypoCnt %d
Line 1968: cellTrackingRequested_processEventFn, isFailed %d, isCompleted %d
Line 1968: cellTrackingRequested_processEventFn, isFailed %d, isCompleted %d
Line 1982: [HSDPA] Warning !! Warning !! cellTrackingRequested_processEventFn, cell tracking not completed. isReleaseWhenSecCarrierIsConfigured %d
Line 1982: [HSDPA] Warning !! Warning !! cellTrackingRequested_processEventFn, cell tracking not completed. isReleaseWhenSecCarrierIsConfigured %d
Line 1992: [3C-HSDPA]  cellTrackingRequested_processEventFn, isReleaseWhenSecCarrierIsConfigured %d
Line 1992: [3C-HSDPA]  cellTrackingRequested_processEventFn, isReleaseWhenSecCarrierIsConfigured %d
Line 2068: uphy_CCellSFNServer is NULL
Line 2068: uphy_CCellSFNServer is NULL
Line 2087: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Failed !! during secondary carrier configuration
Line 2087: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Failed !! during secondary carrier configuration
Line 2094: [HSDPA] Warning !! 2nd Carrier: cellTrackingRequested_processEventFn, cell traking fail during config, cellTrackForScRelease is FALSE, secondaryCampingUarfcn is %d
Line 2094: [HSDPA] Warning !! 2nd Carrier: cellTrackingRequested_processEventFn, cell traking fail during config, cellTrackForScRelease is FALSE, secondaryCampingUarfcn is %d
Line 2107: [3C-HSDPA] Warning !! Despite cell tracking failure, we boldly go for secondary carrier release !!
Line 2107: [3C-HSDPA] Warning !! Despite cell tracking failure, we boldly go for secondary carrier release !!
Line 2114: [HSDPA] 2nd Carrier: cellTrackingRequested_processEventFn, cellTrackForScRelease is TRUE, secondaryCampingUarfcn is %d
Line 2114: [HSDPA] 2nd Carrier: cellTrackingRequested_processEventFn, cellTrackForScRelease is TRUE, secondaryCampingUarfcn is %d
Line 2129: config canceled[%d,%d] - tracking failed
Line 2129: config canceled[%d,%d] - tracking failed
Line 2132: config canceled[%d,%d] - tracking failed, cellTrackForScRelease %d
Line 2132: config canceled[%d,%d] - tracking failed, cellTrackForScRelease %d
Line 2144: EUphyResourcesConfigurationEventId_RfUsePauseReq requested incellTracking 
Line 2144: EUphyResourcesConfigurationEventId_RfUsePauseReq requested incellTracking 
Line 2155: EUphyResourcesConfigurationEventId_TryLocking in cellTrackingRequested state
Line 2155: EUphyResourcesConfigurationEventId_TryLocking in cellTrackingRequested state
Line 2162: Uhal Config Callback in CellTrackingRequested state
Line 2162: Uhal Config Callback in CellTrackingRequested state
Line 2167: About to map and assign fingers - meanwhile Release
Line 2167: About to map and assign fingers - meanwhile Release
Line 2172: About to start - meanwhile Release
Line 2172: About to start - meanwhile Release
Line 2176: Imposible!!!
Line 2176: Imposible!!!
Line 2206: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Timeout !!
Line 2206: [3C-HSDPA]  Warning !! Warning !! Cell Tracking Timeout !!
Line 2215: [3C-HSDPA] Warning !! Despite cell tracking failure due to timeout, we boldly go for secondary carrier release !!
Line 2215: [3C-HSDPA] Warning !! Despite cell tracking failure due to timeout, we boldly go for secondary carrier release !!
Line 2223: [3C-HSDPA]  Timeout for cell tracking : cell tracking during secondary carrier configuration
Line 2223: [3C-HSDPA]  Timeout for cell tracking : cell tracking during secondary carrier configuration
Line 2253: [HSDPA] 2nd Carrier: cellTrackingRequested_processEventFn, cellTrackForScRelease is TRUE, secondaryCampingUarfcn is %d
Line 2253: [HSDPA] 2nd Carrier: cellTrackingRequested_processEventFn, cellTrackForScRelease is TRUE, secondaryCampingUarfcn is %d
Line 2262: timeout in CellTrackingRequested state
Line 2262: timeout in CellTrackingRequested state
Line 2268: Imposible!!!
Line 2268: Imposible!!!
Line 2273: Recv Sttd detection Done:on CellTrackingRequested
Line 2273: Recv Sttd detection Done:on CellTrackingRequested
Line 2277: Unknown event
Line 2277: Unknown event
Line 2296: tryToLockConfigurationForConfig_processEventFn : event=0
Line 2296: tryToLockConfigurationForConfig_processEventFn : event=0
Line 2308: config canceled by new config[%d,%d]
Line 2308: config canceled by new config[%d,%d]
Line 2316: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2316: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2322: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForConfig state!!!
Line 2322: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForConfig state!!!
Line 2340: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in tryToLockConfigurationForConfig 
Line 2340: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in tryToLockConfigurationForConfig 
Line 2389: Not in dedicated mode, so cancel cofig
Line 2389: Not in dedicated mode, so cancel cofig
Line 2404: config canceled[%d][%d]
Line 2404: config canceled[%d][%d]
Line 2410: Uhal Config Callback in TryToLockConfigurationForConfig state
Line 2410: Uhal Config Callback in TryToLockConfigurationForConfig state
Line 2415: About to map and assign fingers - meanwhile Release
Line 2415: About to map and assign fingers - meanwhile Release
Line 2420: About to start - meanwhile Release
Line 2420: About to start - meanwhile Release
Line 2424: Imposible!!!
Line 2424: Imposible!!!
Line 2431: release in TryToLockConfigurationForConfig state
Line 2431: release in TryToLockConfigurationForConfig state
Line 2436: timeout in TryToLockConfigurationForConfig state
Line 2436: timeout in TryToLockConfigurationForConfig state
Line 2441: Imposible!!!
Line 2441: Imposible!!!
Line 2446: Recv Sttd detection Done:on TryToLockConfigurationForConfig
Line 2446: Recv Sttd detection Done:on TryToLockConfigurationForConfig
Line 2450: Unknown event
Line 2450: Unknown event
Line 2465: uhalConfiguration_processEventFn : event=0
Line 2465: uhalConfiguration_processEventFn : event=0
Line 2477: config canceled by new config[%d,%d]
Line 2477: config canceled by new config[%d,%d]
Line 2485: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2485: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2491: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in uhalConfiguration state!!!
Line 2491: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in uhalConfiguration state!!!
Line 2511: EUphyResourcesConfigurationEventId_TryLocking in uhalConfiguration state!!!
Line 2511: EUphyResourcesConfigurationEventId_TryLocking in uhalConfiguration state!!!
Line 2514: configUhalInstances
Line 2514: configUhalInstances
Line 2533: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  uhalConfiguration 
Line 2533: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  uhalConfiguration 
Line 2540: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in uhalConfiguration 
Line 2540: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in uhalConfiguration 
Line 2570: RefOrNeighbourRlSetMappingsAndFingerAllocation is TRUE
Line 2570: RefOrNeighbourRlSetMappingsAndFingerAllocation is TRUE
Line 2587: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in uhalConfiguration state!!!
Line 2587: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in uhalConfiguration state!!!
Line 2592: EUphyResourcesConfigurationEventId_Start in uhalConfiguration state!!!
Line 2592: EUphyResourcesConfigurationEventId_Start in uhalConfiguration state!!!
Line 2596: Imposible!!!
Line 2596: Imposible!!!
Line 2613: release in UhalConfiguration state
Line 2613: release in UhalConfiguration state
Line 2624: release in UhalConfiguration state
Line 2624: release in UhalConfiguration state
Line 2631: timeout in UhalConfiguration state
Line 2631: timeout in UhalConfiguration state
Line 2636: Imposible!!!
Line 2636: Imposible!!!
Line 2641: Recv Sttd detection Done:on UhalConfiguration
Line 2641: Recv Sttd detection Done:on UhalConfiguration
Line 2645: Unknown event
Line 2645: Unknown event
Line 2661: refOrNeighbourRlSetMappingsAndFingerAllocation_processEventFn : event=0
Line 2661: refOrNeighbourRlSetMappingsAndFingerAllocation_processEventFn : event=0
Line 2673: config canceled by new config[%d,%d]
Line 2673: config canceled by new config[%d,%d]
Line 2681: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2681: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2687: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2687: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2703: EUphyResourcesConfigurationEventId_CellTrackingInd in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2703: EUphyResourcesConfigurationEventId_CellTrackingInd in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2708: EUphyResourcesConfigurationEventId_TryLocking in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2708: EUphyResourcesConfigurationEventId_TryLocking in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2713: Uhal Config Callback in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2713: Uhal Config Callback in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2736: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2736: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2748: setReferenceOrNeighbourRl [%d %d]
Line 2748: setReferenceOrNeighbourRl [%d %d]
Line 2773: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2773: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2798: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2798: map and assign fingers [%d %d] - legal for oustanding BCH for SFN_CFN after DCH is released
Line 2810: setReferenceOrNeighbourRl [%d %d]
Line 2810: setReferenceOrNeighbourRl [%d %d]
Line 2824: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2824: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2831: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2831: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in refOrNeighbourRlSetMappingsAndFingerAllocation 
Line 2840: EUphyResourcesConfigurationEventId_Start in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2840: EUphyResourcesConfigurationEventId_Start in refOrNeighbourRlSetMappingsAndFingerAllocation state!!!
Line 2846: Imposible!!!
Line 2846: Imposible!!!
Line 2861: release in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2861: release in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2866: timeout in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2866: timeout in refOrNeighbourRlSetMappingsAndFingerAllocation state
Line 2871: Imposible!!!
Line 2871: Imposible!!!
Line 2876: Recv Sttd detection Done:on RefOrNeighbourRlSetMappingsAndFingerAllocation
Line 2876: Recv Sttd detection Done:on RefOrNeighbourRlSetMappingsAndFingerAllocation
Line 2880: Unknown event
Line 2880: Unknown event
Line 2896: start_processEventFn : event=0
Line 2896: start_processEventFn : event=0
Line 2907: config canceled by new config[%d,%d]
Line 2907: config canceled by new config[%d,%d]
Line 2915: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2915: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 2921: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in start state!!!
Line 2921: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in start state!!!
Line 2941: EUphyResourcesConfigurationEventId_TryLocking in start state!!!
Line 2941: EUphyResourcesConfigurationEventId_TryLocking in start state!!!
Line 2946: Uhal Config Callback in Start state
Line 2946: Uhal Config Callback in Start state
Line 2951: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in start state!!!
Line 2951: EUphyResourcesConfigurationEventId_RefOrNeighbourRlSetMapAndAssignFingers in start state!!!
Line 2960: hsupa_start
Line 2960: hsupa_start
Line 2980: hsupa_start
Line 2980: hsupa_start
Line 3009: start
Line 3009: start
Line 3041: start_processEventFn: transceiverId is %d, myIndex is %d
Line 3041: start_processEventFn: transceiverId is %d, myIndex is %d
Line 3047: [BCH for RefCell]: start_processEventFn, going to ConfigDone state
Line 3047: [BCH for RefCell]: start_processEventFn, going to ConfigDone state
Line 3068: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  start 
Line 3068: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  start 
Line 3075: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in start 
Line 3075: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in start 
Line 3083: Imposible!!!
Line 3083: Imposible!!!
Line 3098: release in start state
Line 3098: release in start state
Line 3103: timeout in start state
Line 3103: timeout in start state
Line 3108: Imposible!!!
Line 3108: Imposible!!!
Line 3113: Recv Sttd detection Done:on Start
Line 3113: Recv Sttd detection Done:on Start
Line 3117: Unknown event
Line 3117: Unknown event
Line 3132: afcCheck_processEventF : event=0
Line 3132: afcCheck_processEventF : event=0
Line 3148: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3148: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3154: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in afcCheck state!!!
Line 3154: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in afcCheck state!!!
Line 3171: EUphyResourcesConfigurationEventId_TryLocking in AfcCheck state
Line 3171: EUphyResourcesConfigurationEventId_TryLocking in AfcCheck state
Line 3179: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  AfcCheck 
Line 3179: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  AfcCheck 
Line 3186: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in AfcCheck 
Line 3186: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in AfcCheck 
Line 3195: Imposible!!!
Line 3195: Imposible!!!
Line 3199: Imposible!!!
Line 3199: Imposible!!!
Line 3203: Imposible!!!
Line 3203: Imposible!!!
Line 3207: Imposible!!!
Line 3207: Imposible!!!
Line 3225: Imposible!!!
Line 3225: Imposible!!!
Line 3233: AFC Check Failed
Line 3233: AFC Check Failed
Line 3246: Recv Sttd detection Done:on AfcCheck
Line 3246: Recv Sttd detection Done:on AfcCheck
Line 3250: Unknown event
Line 3250: Unknown event
Line 3272: tryToLockConfigurationForRelease_processEventFn : event=0
Line 3272: tryToLockConfigurationForRelease_processEventFn : event=0
Line 3282: new config in TryToLockConfigurationForRelease
Line 3282: new config in TryToLockConfigurationForRelease
Line 3289: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3289: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3295: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForRelease state!!!
Line 3295: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in tryToLockConfigurationForRelease state!!!
Line 3356: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) isReleaseWhenSecCarrierIsConfigure : FALSE
Line 3356: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) isReleaseWhenSecCarrierIsConfigure : FALSE
Line 3361: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) only one secondary carrier release, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3361: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) only one secondary carrier release, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3366: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) secondary carrier config, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3366: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) secondary carrier config, secodaryCarrierReleaseMode=%d, next state is EnDecodingEnabled
Line 3371: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) All the secondary carriers release, secodaryCarrierReleaseMode=%d, next state is EUphyResourcesConfigurationFSMStates_Init
Line 3371: [3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) All the secondary carriers release, secodaryCarrierReleaseMode=%d, next state is EUphyResourcesConfigurationFSMStates_Init
Line 3389: testLogicModification = %d, isLocked = %d
Line 3389: testLogicModification = %d, isLocked = %d
Line 3397: testLogicModification [%d %d] [%d %d] for release failed - EUphyResourcesConfigurationEventId_TryLocking
Line 3397: testLogicModification [%d %d] [%d %d] for release failed - EUphyResourcesConfigurationEventId_TryLocking
Line 3405: Uhal Config Callback in TryToLockConfigurationForRelease state
Line 3405: Uhal Config Callback in TryToLockConfigurationForRelease state
Line 3410: About to map and assign fingers - meanwhile Release
Line 3410: About to map and assign fingers - meanwhile Release
Line 3415: About to start - meanwhile Release
Line 3415: About to start - meanwhile Release
Line 3419: Imposible!!!
Line 3419: Imposible!!!
Line 3428: release overides waiting config msg
Line 3428: release overides waiting config msg
Line 3434: Abnormal Release in tryToLockConfigurationForRelease state: source ID=%d
Line 3434: Abnormal Release in tryToLockConfigurationForRelease state: source ID=%d
Line 3457: Abnormal Release in tryToLockConfigurationForRelease state: two consequtive release_EVT. Do nothing
Line 3457: Abnormal Release in tryToLockConfigurationForRelease state: two consequtive release_EVT. Do nothing
Line 3466: timeout[%d,%d] in TryToLockConfigurationForRelease state - release have not done
Line 3466: timeout[%d,%d] in TryToLockConfigurationForRelease state - release have not done
Line 3472: Imposible!!!
Line 3472: Imposible!!!
Line 3477: Recv Sttd detection Done:on TryToLockConfigurationForRelease
Line 3477: Recv Sttd detection Done:on TryToLockConfigurationForRelease
Line 3481: Unknown event
Line 3481: Unknown event
Line 3495: configDone_processEventFn : event=0
Line 3495: configDone_processEventFn : event=0
Line 3504: New config request recieved in configDoneState
Line 3504: New config request recieved in configDoneState
Line 3511: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3511: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3522: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3522: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3528: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3528: DCHPauseReq requested in ConfigDone is3gHwRelReqd %d
Line 3536: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in ConfigDone 
Line 3536: 3G3G DSDS : EUphyResourcesConfigurationEventId_RfUsePauseReq requested in ConfigDone 
Line 3546: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in configDone state!!!
Line 3546: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in configDone state!!!
Line 3563: TryLocking in ConfigDone state
Line 3563: TryLocking in ConfigDone state
Line 3570: Imposible!!!
Line 3570: Imposible!!!
Line 3574: Imposible!!!
Line 3574: Imposible!!!
Line 3578: Imposible!!!
Line 3578: Imposible!!!
Line 3593: Imposible!!!
Line 3593: Imposible!!!
Line 3598: Imposible!!!
Line 3598: Imposible!!!
Line 3603: Recv Sttd detection Done:on ConfigDone
Line 3603: Recv Sttd detection Done:on ConfigDone
Line 3608: Unknown event
Line 3608: Unknown event
Line 3630: enDecodingEnabled_processEventFn : event=0
Line 3630: enDecodingEnabled_processEventFn : event=0
Line 3645: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3645: rejected non camping configuration because camping configuration[%d,%d] is taking place
Line 3651: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 3651: EUphyResourcesConfigurationEventId_ListenArfcnTranAck in EnDecodingEnabled state!!!
Line 3661: TryLocking in EnDecodingEnabled state
Line 3661: TryLocking in EnDecodingEnabled state
Line 3668: Imposible!!!
Line 3668: Imposible!!!
Line 3672: Imposible!!!
Line 3672: Imposible!!!
Line 3676: Imposible!!!
Line 3676: Imposible!!!
Line 3681: Imposible!!!
Line 3681: Imposible!!!
Line 3695: uhal command exec failed
Line 3695: uhal command exec failed
Line 3716: Skipping CcTrCh Enable Since there is no valid TrCh
Line 3716: Skipping CcTrCh Enable Since there is no valid TrCh
Line 3752: In enDecodingEnabled_processEventFn: NON_UMTS_RAT_MODE = %d
Line 3752: In enDecodingEnabled_processEventFn: NON_UMTS_RAT_MODE = %d
Line 3778: [3C-HSDPA] before: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d, isReleaseWhenSecCarrierIsConfigured=%d
Line 3778: [3C-HSDPA] before: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d, isReleaseWhenSecCarrierIsConfigured=%d
Line 3807: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting done    : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3807: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting done    : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3811: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting skipped : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3811: [3C-HSDPA]  (enDecodingEnabled_processEventFn) UARCFN setting skipped : primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3820: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  st sec. release only
Line 3820: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  st sec. release only
Line 3827: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  2nd sec. release only
Line 3827: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  2nd sec. release only
Line 3836: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  All 2nd sec. release
Line 3836: [3C-HSDPA] (enDecodingEnabled_processEventFn) DcHsdpaPrvState=%d,  DcHsdpaCurrentState=%d,  All 2nd sec. release
Line 3840: [3C-HSDPA] secodaryCarrierReleaseMode=%d :config
Line 3840: [3C-HSDPA] secodaryCarrierReleaseMode=%d :config
Line 3843: [3C-HSDPA] after: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3843: [3C-HSDPA] after: primaryCarrierUarfcn=%d, firstSecondaryUarfcn=%d, secondSecondaryUarfcn=%d
Line 3988: Imposible!!!
Line 3988: Imposible!!!
Line 3993: Imposible!!!
Line 3993: Imposible!!!
Line 3998: Recv Sttd detection Done:on EnDecodingEnabled
Line 3998: Recv Sttd detection Done:on EnDecodingEnabled
Line 4002: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  enDecodingEnabled 
Line 4002: EUphyResourcesConfigurationEventId_RfUsePauseReq requested in  enDecodingEnabled 
Line 4009: Unknown event
Line 4009: Unknown event
Line 4020: isChangeOfDRToDSOrDSToDR: transceiverId %d currentMainSubSIMInfo %d, newMainSubSIMInfo %d (NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 4020: isChangeOfDRToDSOrDSToDR: transceiverId %d currentMainSubSIMInfo %d, newMainSubSIMInfo %d (NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 4063: enDecodingEnabled_processEventFn : event=0
Line 4063: enDecodingEnabled_processEventFn : event=0
Line 4069: S 3G3G DSDS : Config Message received in dsSuspend State
Line 4069: S 3G3G DSDS : Config Message received in dsSuspend State
Line 4120: 3G3G DSDS : RfUseResume received in dsSuspend State
Line 4120: 3G3G DSDS : RfUseResume received in dsSuspend State
Line 4138: 3G3G DSDS : TrasceiverId %d Channel Release in dsSuspend State although RF is available: Clear isDsRelease
Line 4138: 3G3G DSDS : TrasceiverId %d Channel Release in dsSuspend State although RF is available: Clear isDsRelease
Line 4148: 3G3G DSDS : Channel Release received in dsSuspend State
Line 4148: 3G3G DSDS : Channel Release received in dsSuspend State
Line 4152: Unknown event
Line 4152: Unknown event
Line 4171: dsReconfReq_processEventFn : event=0
Line 4171: dsReconfReq_processEventFn : event=0
Line 4189: dsReconfReq_processEventFn: currentMainSubSIMInfo %d, cctrchNr %d
Line 4189: dsReconfReq_processEventFn: currentMainSubSIMInfo %d, cctrchNr %d
Line 4209: Wrong SIM Information %d !!!
Line 4209: Wrong SIM Information %d !!!
Line 4244: dsReconfReq_processEventFn : BGPCH should not happen here
Line 4244: dsReconfReq_processEventFn : BGPCH should not happen here
Line 4255: dsReconfReq_processEventFn : currentMainSubSIMInfo %d, cctrchNr %d
Line 4255: dsReconfReq_processEventFn : currentMainSubSIMInfo %d, cctrchNr %d
Line 4275: Wrong SIM Information %d !!!
Line 4275: Wrong SIM Information %d !!!
Line 4289: Release Cctrch - uhal_Cmd_exec
Line 4289: Release Cctrch - uhal_Cmd_exec
Line 4300: Unknown event
Line 4300: Unknown event
Line 4434: resourcesConfigurationController_ptr->configMsgDeadlineInfo.msg == NULL
Line 4434: resourcesConfigurationController_ptr->configMsgDeadlineInfo.msg == NULL
Line 4437: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - INIT_ENTRY state
Line 4437: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - INIT_ENTRY state
Line 4498: [3C-HSDPA] initEntry, config Msg deallocated
Line 4498: [3C-HSDPA] initEntry, config Msg deallocated
Line 4501: DSDS:Deleted saved config message from resources configuration controller since RF pause is not enabled
Line 4501: DSDS:Deleted saved config message from resources configuration controller since RF pause is not enabled
Line 4514: DSDS:Deleted saved config message from resources configuration controller since message is not from URRC
Line 4514: DSDS:Deleted saved config message from resources configuration controller since message is not from URRC
Line 4542: Waiting config for preventing Tx Max Power
Line 4542: Waiting config for preventing Tx Max Power
Line 4608: DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 4608: DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 4650: isSfnServerConfigured was TRUE, now FALSE
Line 4650: isSfnServerConfigured was TRUE, now FALSE
Line 4778: unknown TTI
Line 4778: unknown TTI
Line 4795: l2uCandiCellInfo.numOfCells is %d,  ttiMod is %d
Line 4795: l2uCandiCellInfo.numOfCells is %d,  ttiMod is %d
Line 4801: CgiAcquisition detected,  ttiMod is %d
Line 4801: CgiAcquisition detected,  ttiMod is %d
Line 4816: Launch Endecoding Token Immediately: diffRSN=%d
Line 4816: Launch Endecoding Token Immediately: diffRSN=%d
Line 4818: Max_TTI is %d, isImmediateLaunch = %d, diffRSN=%d, firstMaxTTIAlignedCfn = %d
Line 4818: Max_TTI is %d, isImmediateLaunch = %d, diffRSN=%d, firstMaxTTIAlignedCfn = %d
Line 4879: unknown TTI
Line 4879: unknown TTI
Line 4924: getEndecodingEnableAbsoluteTimeStamp: firstMaxTTIAlignedCfn %d phychOffsetToCpich %d currentRSN=%d absoluteTimeStampRSN =%d
Line 4924: getEndecodingEnableAbsoluteTimeStamp: firstMaxTTIAlignedCfn %d phychOffsetToCpich %d currentRSN=%d absoluteTimeStampRSN =%d
Line 4956: unknown TTI
Line 4956: unknown TTI
Line 4994: launchRequestDsl1rcRfAccessforCTCHConfiguration: start FACH for CTCH configuration
Line 4994: launchRequestDsl1rcRfAccessforCTCHConfiguration: start FACH for CTCH configuration
Line 5039: DSDS:requestDslrcRfAccess : event=0
Line 5039: DSDS:requestDslrcRfAccess : event=0
Line 5080: DSDS: Unable to send RF request message to DSLRC
Line 5080: DSDS: Unable to send RF request message to DSLRC
Line 5085: DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 5085: DSDS: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d
Line 5110: requestDlUarfcnAccess : event=0
Line 5110: requestDlUarfcnAccess : event=0
Line 5131: send
Line 5131: send
Line 5164: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5164: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5198: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5198: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_ACCESS_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 5241: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_RELEASE_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d isDcSttdDetTried %d 
Line 5241: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DL_SC_UARFCN_RELEASE_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d isDcSttdDetTried %d 
Line 5271: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5271: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5275: uphy_CResourcesConfigurationController_getDlUarfcn : Primary DL Uarfcn is returned
Line 5275: uphy_CResourcesConfigurationController_getDlUarfcn : Primary DL Uarfcn is returned
Line 5280: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg=0 for secondary HSDSCH controller
Line 5280: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg=0 for secondary HSDSCH controller
Line 5285: uphy_CResourcesConfigurationController_getDlUarfcn : messageTransceiverId is not HsdschResourcesControllerId and configMsg=0
Line 5285: uphy_CResourcesConfigurationController_getDlUarfcn : messageTransceiverId is not HsdschResourcesControllerId and configMsg=0
Line 5316: uphy_CResourcesConfigurationController_getDlUarfcn - dlUarfcn = %d
Line 5316: uphy_CResourcesConfigurationController_getDlUarfcn - dlUarfcn = %d
Line 5324: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5324: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5328: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg is %x, Primary DL Uarfcn is returned
Line 5328: uphy_CResourcesConfigurationController_getDlUarfcn : configMsg is %x, Primary DL Uarfcn is returned
Line 5357: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5357: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 5363: controller type
Line 5363: controller type
Line 5403: getPrimaryScrCode : configMsg=0
Line 5403: getPrimaryScrCode : configMsg=0
Line 5484: controllerId=%d
Line 5484: controllerId=%d
Line 5521: controllerId=%d
Line 5521: controllerId=%d
Line 5540: uphy_CResourcesConfigurationController_getDSLRCresponse : configMsg=0
Line 5540: uphy_CResourcesConfigurationController_getDSLRCresponse : configMsg=0
Line 5554: uphy_CResourcesConfigurationController_getDSLRCresponse : BchResourcesControllerId
Line 5554: uphy_CResourcesConfigurationController_getDSLRCresponse : BchResourcesControllerId
Line 5562: uphy_CResourcesConfigurationController_getDSLRCresponse : RachResourcesControllerId
Line 5562: uphy_CResourcesConfigurationController_getDSLRCresponse : RachResourcesControllerId
Line 5570: uphy_CResourcesConfigurationController_getDSLRCresponse : PchAndDrxResourcesControllerId
Line 5570: uphy_CResourcesConfigurationController_getDSLRCresponse : PchAndDrxResourcesControllerId
Line 5578: uphy_CResourcesConfigurationController_getDSLRCresponse : FachResourcesControllerId
Line 5578: uphy_CResourcesConfigurationController_getDSLRCresponse : FachResourcesControllerId
Line 5586: uphy_CResourcesConfigurationController_getDSLRCresponse : HsdschResourcesControllerId
Line 5586: uphy_CResourcesConfigurationController_getDSLRCresponse : HsdschResourcesControllerId
Line 5594: uphy_CResourcesConfigurationController_getDSLRCresponse : DedicatedModeControllerId
Line 5594: uphy_CResourcesConfigurationController_getDSLRCresponse : DedicatedModeControllerId
Line 5598: Error in getDslrcResponse
Line 5598: Error in getDslrcResponse
Line 5604: uphy_CResourcesConfigurationController_getDSLRCresponse: currentMainSubSIMInfo %d newMainSubSIMInfo %d(NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 5604: uphy_CResourcesConfigurationController_getDSLRCresponse: currentMainSubSIMInfo %d newMainSubSIMInfo %d(NO_SIM/MAIN_SIM/SUB_SIM/MAX_SIM_STATUS)
Line 5701: controller type
Line 5701: controller type
Line 5755: controller type
Line 5755: controller type
Line 5789: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Timeout: uarfcn=%d primaryScrCode=%d
Line 5789: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Timeout: uarfcn=%d primaryScrCode=%d
Line 5821: event==0: uarfcn=%d, scrCode=%d
Line 5821: event==0: uarfcn=%d, scrCode=%d
Line 5829: configCanceled[%d,%d]: uarfcn=%d, scrCode=%d
Line 5829: configCanceled[%d,%d]: uarfcn=%d, scrCode=%d
Line 5853: send
Line 5853: send
Line 5865: [DC-HSDPA]releaseCanceled[%d,%d]: uarfcn=%d, scrCode=%d cellTrackForScRelease=%d
Line 5865: [DC-HSDPA]releaseCanceled[%d,%d]: uarfcn=%d, scrCode=%d cellTrackForScRelease=%d
Line 6009: configCanceledAndDeleteMsg : event=0
Line 6009: configCanceledAndDeleteMsg : event=0
Line 6021: msg is NULL
Line 6021: msg is NULL
Line 6043: configCanceledAndDeleteMsgWithReInit : event=0
Line 6043: configCanceledAndDeleteMsgWithReInit : event=0
Line 6055: msg is NULL
Line 6055: msg is NULL
Line 6083: sendConfirmationMsgAndDeleteMsgToConfirm : event=0
Line 6083: sendConfirmationMsgAndDeleteMsgToConfirm : event=0
Line 6096: msg is NULL
Line 6096: msg is NULL
Line 6131: configCanceledByNewConfig : event=0
Line 6131: configCanceledByNewConfig : event=0
Line 6138: event->msg==0
Line 6138: event->msg==0
Line 6141: configCanceledByNewConfig[%d,%d]: uarfcn=%d, scrCode=%d
Line 6141: configCanceledByNewConfig[%d,%d]: uarfcn=%d, scrCode=%d
Line 6160: send
Line 6160: send
Line 6165: controllerReleasedTransitionMsg is NULL
Line 6165: controllerReleasedTransitionMsg is NULL
Line 6182: send
Line 6182: send
Line 6188: controllerReleasedTransitionMsg is NULL
Line 6188: controllerReleasedTransitionMsg is NULL
Line 6225: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6225: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6232: event->msg==0
Line 6232: event->msg==0
Line 6260: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6260: unlockReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6266: event->msg==0
Line 6266: event->msg==0
Line 6296: unlockUnmapReleaseUhalAndConfigCanceledByRelease : event=0
Line 6296: unlockUnmapReleaseUhalAndConfigCanceledByRelease : event=0
Line 6303: event->msg==0
Line 6303: event->msg==0
Line 6333: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6333: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6340: event->msg==0
Line 6340: event->msg==0
Line 6370: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6370: unlockUnmapReleaseUhalAndConfigCanceledByNewConfig : event=0
Line 6376: event->msg==0
Line 6376: event->msg==0
Line 6408: unlockReleaseUhalAndConfigCanceledByRelease : event=0
Line 6408: unlockReleaseUhalAndConfigCanceledByRelease : event=0
Line 6415: event->msg==0
Line 6415: event->msg==0
Line 6469: Remove mpDB for CBS -uarfcn=%d primaryScrCode=%d
Line 6469: Remove mpDB for CBS -uarfcn=%d primaryScrCode=%d
Line 6497: Fingers already allocated Rl %d Finger %d
Line 6497: Fingers already allocated Rl %d Finger %d
Line 6544: configCanceledByRelease : event=0
Line 6544: configCanceledByRelease : event=0
Line 6550: configCanceledByRelease : event->msg==0
Line 6550: configCanceledByRelease : event->msg==0
Line 6557: configCanceledByRelease[%d,%d]: uarfcn=%d, scrCode=%d SrcId=%d
Line 6557: configCanceledByRelease[%d,%d]: uarfcn=%d, scrCode=%d SrcId=%d
Line 6577: send
Line 6577: send
Line 6582: controllerReleasedTransitionMsg is NULL
Line 6582: controllerReleasedTransitionMsg is NULL
Line 6599: send
Line 6599: send
Line 6604: controllerReleasedTransitionMsg is NULL
Line 6604: controllerReleasedTransitionMsg is NULL
Line 6802: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Tx Div setting: uarfcn=%d DivStatus  %d msgId %d
Line 6802: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - Tx Div setting: uarfcn=%d DivStatus  %d msgId %d
Line 6808: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CELL_TRACKING_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6808: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CELL_TRACKING_REQUESTED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6862: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_CONGIG_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6862: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_CONGIG_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 6900: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - UHAL_CONFIGURATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 6900: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - UHAL_CONFIGURATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 6986: uphy_CResourcesConfigurationController_ConfigUhalStf skipped as FSM is in DsSuspend State
Line 6986: uphy_CResourcesConfigurationController_ConfigUhalStf skipped as FSM is in DsSuspend State
Line 7033: rlInfoCommand uhal cmd exec failed
Line 7033: rlInfoCommand uhal cmd exec failed
Line 7071: Rl=%d number not changed but ref Rl=%d found as invalid(gotRefRl=FALSE) - probably DCH removed Rl and reconfigured again becuase modify is not supported yet : Configuration[%d %d] [%d %d]
Line 7071: Rl=%d number not changed but ref Rl=%d found as invalid(gotRefRl=FALSE) - probably DCH removed Rl and reconfigured again becuase modify is not supported yet : Configuration[%d %d] [%d %d]
Line 7100:  resourcesConfigurationController_ptr->configChangeInfo.numOfRls==0
Line 7100:  resourcesConfigurationController_ptr->configChangeInfo.numOfRls==0
Line 7116: Reference cell not set: neighbour Rl=%d has to be reused(gotNeighRl=%d), but ref and neigh scrCodes don't match
Line 7116: Reference cell not set: neighbour Rl=%d has to be reused(gotNeighRl=%d), but ref and neigh scrCodes don't match
Line 7122: Set neighbor RL(multi RL): uhalRlNr=%d currentNeighbourRl=%d
Line 7122: Set neighbor RL(multi RL): uhalRlNr=%d currentNeighbourRl=%d
Line 7127: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7127: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7143: Set neighbor RL: uhalRlNr=%d currentNeighbourRl=%d
Line 7143: Set neighbor RL: uhalRlNr=%d currentNeighbourRl=%d
Line 7148: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7148: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7158: [BCH for RefCell] Skip neighbor RL set, myIndex (%d)
Line 7158: [BCH for RefCell] Skip neighbor RL set, myIndex (%d)
Line 7171: uhal_Cmd_exec
Line 7171: uhal_Cmd_exec
Line 7183: Unable to set reference cell in multipath database
Line 7183: Unable to set reference cell in multipath database
Line 7196: Reference Rl=%d should be reused(gotRefRl=%d) as neighbour(ignored stays reference), but ref and neigh scrCodes don't match
Line 7196: Reference Rl=%d should be reused(gotRefRl=%d) as neighbour(ignored stays reference), but ref and neigh scrCodes don't match
Line 7210: uhal_Cmd_exec
Line 7210: uhal_Cmd_exec
Line 7227: Set neighbor RL: currentRefRl=%d currentNeighbourRl=%d
Line 7227: Set neighbor RL: currentRefRl=%d currentNeighbourRl=%d
Line 7231: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7231: neighbourRlConfigCmd - uhal_Cmd_exec
Line 7242: uhal_Cmd_exec
Line 7242: uhal_Cmd_exec
Line 7256: uhal_Cmd_exec
Line 7256: uhal_Cmd_exec
Line 7363: [SW WA] Pass due to HICH release Ind
Line 7363: [SW WA] Pass due to HICH release Ind
Line 7411: [SW WA] [Index %d] found %d, ecNo %d, rscp %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7411: [SW WA] [Index %d] found %d, ecNo %d, rscp %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7418: [SW WA ERROR] MinEcNo[0] %d, MinEcNo[] %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7418: [SW WA ERROR] MinEcNo[0] %d, MinEcNo[] %d, CandidateIndex[0] %d, CandidateIndex[] %d
Line 7441: HSUPA RlNr %d, PSC %d does not belong to WCDMA RL
Line 7441: HSUPA RlNr %d, PSC %d does not belong to WCDMA RL
Line 7458: [SW WA] [index %d] CandidateIndex[0] %d, CandidateIndex[] %d HsupaRlNr %d, isExisting %d, psc %d
Line 7458: [SW WA] [index %d] CandidateIndex[0] %d, CandidateIndex[] %d HsupaRlNr %d, isExisting %d, psc %d
Line 7465: [SW WA] WA_MoreEdchActiveSets buffer is full.. it shall not happen!!! B[0] = %d, B[] = %d, B[2] = %d, B[3] = %d
Line 7465: [SW WA] WA_MoreEdchActiveSets buffer is full.. it shall not happen!!! B[0] = %d, B[] = %d, B[2] = %d, B[3] = %d
Line 7471: [SW WA] Condition Met(i %d) psc %d will be stored in WA_MoreEdchActiveSets  & [index %d, isTRUE %d & psc[%d] ]
Line 7471: [SW WA] Condition Met(i %d) psc %d will be stored in WA_MoreEdchActiveSets  & [index %d, isTRUE %d & psc[%d] ]
Line 7480: [SW WA ERROR] This should not be happen 
Line 7480: [SW WA ERROR] This should not be happen 
Line 7492: No Free Rl for E-DCH Remaining Active Set On E-DCH Active Set
Line 7492: No Free Rl for E-DCH Remaining Active Set On E-DCH Active Set
Line 7508: wcdma RL %d, hsupa RL %d is still running
Line 7508: wcdma RL %d, hsupa RL %d is still running
Line 7517: GetPhychNum failed: returnedPhychNr(%d) should be greater than -
Line 7517: GetPhychNum failed: returnedPhychNr(%d) should be greater than -
Line 7532: wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 7532: wcdmaRlNr %d, hsupaRlNr %d, PSC %d, ErgchOffsetToCpich %d[chips], dpchOffsetToCpich %d, TTI %d
Line 7552: E-HICH Phych Config Failed
Line 7552: E-HICH Phych Config Failed
Line 7573: E-HICH Rake Rl Phych Config Failed
Line 7573: E-HICH Rake Rl Phych Config Failed
Line 7590: Non Serving RLS: PSC %d, reset ErgchOffsetToCpich %d[chips], ServRlsRgCombInx %d, NonServRlsRgCombInx %d
Line 7590: Non Serving RLS: PSC %d, reset ErgchOffsetToCpich %d[chips], ServRlsRgCombInx %d, NonServRlsRgCombInx %d
Line 7606: E-RGCH Phych Config Failed
Line 7606: E-RGCH Phych Config Failed
Line 7627: E-RGCH Rake Rl Phych Config Failed
Line 7627: E-RGCH Rake Rl Phych Config Failed
Line 7641: UE get the E-RGCH release indicator on the radio link having no E-RGCH 
Line 7641: UE get the E-RGCH release indicator on the radio link having no E-RGCH 
Line 7646: UE get the E-RGCH release indicator on HSUPA NBR Configuration 
Line 7646: UE get the E-RGCH release indicator on HSUPA NBR Configuration 
Line 7651: UE get the E-HICH release indicator on the radio link when UE has no E-HICH, so Do Nothing!!! 
Line 7651: UE get the E-HICH release indicator on the radio link when UE has no E-HICH, so Do Nothing!!! 
Line 7664: UE have wrong configuration with nonzero NumOfSwActiveSet(%d)
Line 7664: UE have wrong configuration with nonzero NumOfSwActiveSet(%d)
Line 7700: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - REF_OR_NEIGHBOUR_RL_SET_MAPPINGS_AND_FINGER_ALLOCATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7700: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - REF_OR_NEIGHBOUR_RL_SET_MAPPINGS_AND_FINGER_ALLOCATION_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7811: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - START_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7811: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - START_ENTRY state: uarfcn=%d primaryScrCode=%d, isDsReconfig=%d
Line 7913: AFC enable successfully.
Line 7913: AFC enable successfully.
Line 7918: AFC enable failed
Line 7918: AFC enable failed
Line 7947: [FH] afcCheckEntry: DLA enable rlStr=0x%x nRl=%d
Line 7947: [FH] afcCheckEntry: DLA enable rlStr=0x%x nRl=%d
Line 7953: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - AFC_CHECK_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 7953: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - AFC_CHECK_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8039: [3C-HSDPA] (enDecodingEnabled_processEventFn) tryToLockConfigurationForReleaseEntry, Nothing done in terms of 2nd Carriers
Line 8039: [3C-HSDPA] (enDecodingEnabled_processEventFn) tryToLockConfigurationForReleaseEntry, Nothing done in terms of 2nd Carriers
Line 8059: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_RELEASE_ENTRY state: uarfcn=%d primaryScrCode=%d isDsReconfig=%d
Line 8059: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - TRY_TO_LOCK_CONFIGURATION_FOR_RELEASE_ENTRY state: uarfcn=%d primaryScrCode=%d isDsReconfig=%d
Line 8108: uphy_CCellSFNServer is NULL
Line 8108: uphy_CCellSFNServer is NULL
Line 8129: Request disabling All Configured TGPS, Release in progress
Line 8129: Request disabling All Configured TGPS, Release in progress
Line 8153: Request disabling All Configured TGPS 
Line 8153: Request disabling All Configured TGPS 
Line 8241: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8241: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8284: Fingers already Running Rl %d Fingerstr %d
Line 8284: Fingers already Running Rl %d Fingerstr %d
Line 8321: Fingers already Configured Rl %d Fingerstr %d
Line 8321: Fingers already Configured Rl %d Fingerstr %d
Line 8327: Fingers already Idle Rl %d Fingerstr %d
Line 8327: Fingers already Idle Rl %d Fingerstr %d
Line 8354: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 8354: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 8360: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8360: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8383: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8383: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8400: start: DlPhych start failed 
Line 8400: start: DlPhych start failed 
Line 8408: start: CcTrch start failed
Line 8408: start: CcTrch start failed
Line 8450: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 8450: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 8473: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8473: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8494: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8494: PhyChNr=%d: HsupaDlPhychStartCmd exec failed: ErrCode %d AddErrCode %d
Line 8538: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8538: rlStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 8551: Allocate Rake finger Success
Line 8551: Allocate Rake finger Success
Line 8606: Map failed because (RlNr, UARFCN, PSC)=(%d, %d, %d)
Line 8606: Map failed because (RlNr, UARFCN, PSC)=(%d, %d, %d)
Line 8611: mapped RL %d to PSC %d
Line 8611: mapped RL %d to PSC %d
Line 8637: Unmap failed because (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8637: Unmap failed because (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8643: Unmap successful for (RlNr, UARFCN, PSC)=(%d, %d, %d) from MappingDatabase
Line 8643: Unmap successful for (RlNr, UARFCN, PSC)=(%d, %d, %d) from MappingDatabase
Line 8649: PSC seek failed (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8649: PSC seek failed (RlNr, UARFCN, PSC)=(%d, %d, %d) not found in MappingDatabase. Check if already unmapped
Line 8672: uphy_CMappingDatabase_mapC
Line 8672: uphy_CMappingDatabase_mapC
Line 8678: Map TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8678: Map TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8686: uphy_CMappingDatabase_unmapE
Line 8686: uphy_CMappingDatabase_unmapE
Line 8692: Unmap TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8692: Unmap TrCH ID to MappingDatabase: isRelease=%d, trChNr=%d, urrcTrchId=%d, uhalTrchId=%d
Line 8706: ####Error: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8706: ####Error: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8712: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8712: Map UlTrChMappingDatabase: urrcTrchId %d, uhalTrchId %d
Line 8721: ####Error:Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8721: ####Error:Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8727: Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8727: Unmap UlTrChMappingDatabase: , uhalTrchId %d
Line 8774: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CONFIG_DONE_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8774: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - CONFIG_DONE_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 8781: configDoneEntry: transceiverId is %d, myIndex is %d
Line 8781: configDoneEntry: transceiverId is %d, myIndex is %d
Line 8785: configDoneEntry: skip  uphy_CConfigurationVerifier_LogicalConfigurationModification
Line 8785: configDoneEntry: skip  uphy_CConfigurationVerifier_LogicalConfigurationModification
Line 8797: LogicalConfigurationModification
Line 8797: LogicalConfigurationModification
Line 8822: configDoneEntry: transceiverId is %d, myIndex is %d, isBchConfigSfnRead is %d 
Line 8822: configDoneEntry: transceiverId is %d, myIndex is %d, isBchConfigSfnRead is %d 
Line 8842: DC-HSDPA : endecoding is delayed by 2 slots for secondary carrier
Line 8842: DC-HSDPA : endecoding is delayed by 2 slots for secondary carrier
Line 8855: Hsdsch enabling event sended at CFN %d
Line 8855: Hsdsch enabling event sended at CFN %d
Line 8859: BCH and NbrRl is configured => No need to be matched with TTI boundary
Line 8859: BCH and NbrRl is configured => No need to be matched with TTI boundary
Line 8893: BCH index %d is being configured, cg=%d
Line 8893: BCH index %d is being configured, cg=%d
Line 8906: DCH is configured => No need to be matched with TTI boundary
Line 8906: DCH is configured => No need to be matched with TTI boundary
Line 8910: BCH is configured => No need to be matched with TTI boundary
Line 8910: BCH is configured => No need to be matched with TTI boundary
Line 8921: Move to enDecoding immediately for FACH for CTCH
Line 8921: Move to enDecoding immediately for FACH for CTCH
Line 8931: BCH and CGI Mode Configured, enDecodingEnabled_processEventFn will be executed
Line 8931: BCH and CGI Mode Configured, enDecodingEnabled_processEventFn will be executed
Line 8963: Invalid maxTTI when trying to enable cctrch
Line 8963: Invalid maxTTI when trying to enable cctrch
Line 9016: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier released, skipEndecoding=%d
Line 9016: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier released, skipEndecoding=%d
Line 9021: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier configured, skipEndecoding=%d
Line 9021: [3C-HSDPA] ENDECODING_ENABLED_ENTRY,  %dst secondary carrier configured, skipEndecoding=%d
Line 9035: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9035: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9044: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9044: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9071: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 9071: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 9092: enDecodingEnabledEntry: for Nbr BCH
Line 9092: enDecodingEnabledEntry: for Nbr BCH
Line 9109: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9109: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - ENDECODING_ENABLED_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9140: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 9140: DLA: enDecodingEnabledEntry: rlStr=0x%x nRl=%d
Line 9161: enDecodingEnabledEntry: for Nbr BCH
Line 9161: enDecodingEnabledEntry: for Nbr BCH
Line 9223: Invalid maxTTI when trying to enable cctrch
Line 9223: Invalid maxTTI when trying to enable cctrch
Line 9259: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_SUSPEND_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9259: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_SUSPEND_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9279: rlInfoCmd exec failed: Err Code %d Add Err Code %d
Line 9279: rlInfoCmd exec failed: Err Code %d Add Err Code %d
Line 9297: No pause done for DBCH
Line 9297: No pause done for DBCH
Line 9374: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_RECONF_REQ_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9374: Stack(%d) Main/Sub(%d) Configuration[%d,%d] - DS_RECONF_REQ_ENTRY state: uarfcn=%d primaryScrCode=%d
Line 9450: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  st secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9450: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  st secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9456: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  2nd secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9456: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  2nd secondary carrier IsDlSecondaryCellPresent is set as FALSE
Line 9459: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  Release Msg is saved
Line 9459: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_release,  Release Msg is saved
Line 9514: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_config,  Config Msg is saved
Line 9514: [3C-HSDPA] (enDecodingEnabled_processEventFn) Action function: enDecodingEnabledState_config,  Config Msg is saved
Line 9666: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release done
Line 9666: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release done
Line 9764: send
Line 9764: send
Line 9770: controllerReleasedTransitionMsg is NULL
Line 9770: controllerReleasedTransitionMsg is NULL
Line 9802: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release msg sent and deallocated
Line 9802: [DC/3C-HSDPA] (tryToLockConfigurationForRelease_processEventFn) Action function: releaseUpdateVerifierAndUnlock,  release msg sent and deallocated
Line 9831: clean rlNr=%d
Line 9831: clean rlNr=%d
Line 9839: RlReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9839: RlReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9861: clean phyChNr=%d
Line 9861: clean phyChNr=%d
Line 9869: PhyChReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9869: PhyChReleaseCmd failure: errCode=%d, addErrCode=%d
Line 9984: send
Line 9984: send
Line 9989: controllerReleasedTransitionMsg is NULL
Line 9989: controllerReleasedTransitionMsg is NULL
Line 10004: send
Line 10004: send
Line 10009: controllerReleasedTransitionMsg is NULL
Line 10009: controllerReleasedTransitionMsg is NULL
Line 10056: [3C-HSDPA] (enDecodingEnabled_processEventFn) Exit function: enDecodingEnabledExit,  Nothing done in this function
Line 10056: [3C-HSDPA] (enDecodingEnabled_processEventFn) Exit function: enDecodingEnabledExit,  Nothing done in this function
Line 10111: enableEnDecodingTransition : event == NULL
Line 10111: enableEnDecodingTransition : event == NULL
Line 10122: enableEnDecodingTransition : BCH configuration
Line 10122: enableEnDecodingTransition : BCH configuration
Line 10140: enableEnDecodingTransition: enableEnDecoding is called directly after configDone state, transceiverId is %d
Line 10140: enableEnDecodingTransition: enableEnDecoding is called directly after configDone state, transceiverId is %d
Line 10193: Corrupt Hal: nPhyCh=0
Line 10193: Corrupt Hal: nPhyCh=0
Line 10203: Neighbor BCH CFG: phyChStr=0x%x, rlStr=0x%x. timingReset is not needed for neighbor.
Line 10203: Neighbor BCH CFG: phyChStr=0x%x, rlStr=0x%x. timingReset is not needed for neighbor.
Line 10208: Corrupt Hal: nRl=0
Line 10208: Corrupt Hal: nRl=0
Line 10217: uhal Cmd exec - UhalRlInfoCommand
Line 10217: uhal Cmd exec - UhalRlInfoCommand
Line 10228: RlTimingReset gotRefRl=FALSE
Line 10228: RlTimingReset gotRefRl=FALSE
Line 10247: uhal Cmd exec - RlTimingReset gotRefRl=%d refRl=%d
Line 10247: uhal Cmd exec - RlTimingReset gotRefRl=%d refRl=%d
Line 10324: refRlCellInfo is NULL
Line 10324: refRlCellInfo is NULL
Line 10377: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 10377: [BCH for RefCell]: MyIndex(0 : BCH, 1 : BCH_FOR_REFCELL) %d
Line 10396: Release RakePhyCh - uhal_Cmd_exec
Line 10396: Release RakePhyCh - uhal_Cmd_exec
Line 10424: ResourcesConfigurationController: EHalDlRlReleaseCmd exec failed. rlNr=%d, phyChStr=%d, errCode=%d, addErrCode=%d
Line 10424: ResourcesConfigurationController: EHalDlRlReleaseCmd exec failed. rlNr=%d, phyChStr=%d, errCode=%d, addErrCode=%d
Line 10431: ResourcesConfigurationController: SFN reset due to RlRelease. Be careful of SFN reset. rlNr=%d. transceiverId=%d
Line 10431: ResourcesConfigurationController: SFN reset due to RlRelease. Be careful of SFN reset. rlNr=%d. transceiverId=%d
Line 10448: Neigbour RL released =%d
Line 10448: Neigbour RL released =%d
Line 10480: AFC disable successfully isHHOTakingPlace %d
Line 10480: AFC disable successfully isHHOTakingPlace %d
Line 10486: AFC disable failed
Line 10486: AFC disable failed
Line 10518: Release Cctrch - uhal_Cmd_exec
Line 10518: Release Cctrch - uhal_Cmd_exec
Line 10587: Release RakePhyCh - uhal_Cmd_exec
Line 10587: Release RakePhyCh - uhal_Cmd_exec
Line 10604: Release RakePhyCh - uhal_Cmd_exec
Line 10604: Release RakePhyCh - uhal_Cmd_exec
Line 10626: rlPhyCh release failed
Line 10626: rlPhyCh release failed
Line 10640: Release TrCh - uhal_Cmd_exec
Line 10640: Release TrCh - uhal_Cmd_exec
Line 10657: Release Cctrch - uhal_Cmd_exec
Line 10657: Release Cctrch - uhal_Cmd_exec
Line 10685: dlUarfcn timeout was not started
Line 10685: dlUarfcn timeout was not started
Line 10715: dl Sc Uarfcn timeout was not started
Line 10715: dl Sc Uarfcn timeout was not started
Line 10743: dlUarfcn timeout was not started
Line 10743: dlUarfcn timeout was not started
Line 10782: cellTracking timeout was not started
Line 10782: cellTracking timeout was not started
Line 10809: locking timeout was not started
Line 10809: locking timeout was not started
Line 10838: locking timeout was not started
Line 10838: locking timeout was not started
Line 10849: [3C-HSDPA] (tryToLockConfigurationForReleaseEventFn) Exit function: tryToLockConfigurationForReleaseExit,  Nothing done in terms of 3C-HSDPA
Line 10849: [3C-HSDPA] (tryToLockConfigurationForReleaseEventFn) Exit function: tryToLockConfigurationForReleaseExit,  Nothing done in terms of 3C-HSDPA
Line 10979: launchSendEnableEndecodingEvt: currentRsnSubmit: %d, deadlineRsn: %d, timestampRsn: %d, maxTtiInSlots %d
Line 10979: launchSendEnableEndecodingEvt: currentRsnSubmit: %d, deadlineRsn: %d, timestampRsn: %d, maxTtiInSlots %d
Line 11035: sendEnableEndecodingEvtSTF: currentRsn: %d, deadlineRsn: %d, timestampRsn: %d, Rsn Diff: %d
Line 11035: sendEnableEndecodingEvtSTF: currentRsn: %d, deadlineRsn: %d, timestampRsn: %d, Rsn Diff: %d
Line 11076: event->msg==0
Line 11076: event->msg==0
Line 11283: Timing Indication Controller Index %d in Abnormal State %d
Line 11283: Timing Indication Controller Index %d in Abnormal State %d
Line 11364: DSDS: RF released not required HHO taking place DCH 
Line 11364: DSDS: RF released not required HHO taking place DCH 
Line 11378: DSDS: Unable to send RF request message to DSLRC
Line 11378: DSDS: Unable to send RF request message to DSLRC
Line 11391: DSDS: sendRfRelease sent to DSLRC interface with %d
Line 11391: DSDS: sendRfRelease sent to DSLRC interface with %d
Line 11410: DSDS: Unable to send RF request message to DSLRC
Line 11410: DSDS: Unable to send RF request message to DSLRC
Line 11414: DSDS: sendRfUsePauseDone sent to DSLRC interface with %d
Line 11414: DSDS: sendRfUsePauseDone sent to DSLRC interface with %d
Line 11422: 3G3G DSDS: Stop DLCcTrCh since pause received from other 3G client
Line 11422: 3G3G DSDS: Stop DLCcTrCh since pause received from other 3G client
Line 11425: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11425: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11435: Stop CcTrCh - uhal_Cmd_exec
Line 11435: Stop CcTrCh - uhal_Cmd_exec
Line 11440: DSDS: Stop DLCcTrCh since pause received from DSLRC
Line 11440: DSDS: Stop DLCcTrCh since pause received from DSLRC
Line 11464: 3G3G DSDS: pause DlPhych since pause received from other 3G client
Line 11464: 3G3G DSDS: pause DlPhych since pause received from other 3G client
Line 11470: 3G3G DSDS pauseDlPhych: PhyCH release: phych_nr = %d
Line 11470: 3G3G DSDS pauseDlPhych: PhyCH release: phych_nr = %d
Line 11477: Release RakePhyCh - uhal_Cmd_exec
Line 11477: Release RakePhyCh - uhal_Cmd_exec
Line 11492: Release AICH RakePhyCh
Line 11492: Release AICH RakePhyCh
Line 11496: Release AICH RakePhyCh - uhal_Cmd_exec
Line 11496: Release AICH RakePhyCh - uhal_Cmd_exec
Line 11513: 3G3G DSDS: startCctrch for DS reconfig
Line 11513: 3G3G DSDS: startCctrch for DS reconfig
Line 11517: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11517: 3G+3G DSDS: No CcTrCh associated with Transceiver %d
Line 11533: 3G3G DSDS startCctrch: cctrchNr = %d
Line 11533: 3G3G DSDS startCctrch: cctrchNr = %d
Line 11538: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11538: cctrchStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11550: 3G3G DSDS: CcTrch %d is not in proper state %d
Line 11550: 3G3G DSDS: CcTrch %d is not in proper state %d
Line 11563: 3G3G DSDS: startDlPhych in DS reconfig
Line 11563: 3G3G DSDS: startDlPhych in DS reconfig
Line 11567: 3G3G DSDS: startDlPhych, AICH will be started later for RACH
Line 11567: 3G3G DSDS: startDlPhych, AICH will be started later for RACH
Line 11586: 3G3G DSDS startDlPhych: phych_nr = %d
Line 11586: 3G3G DSDS startDlPhych: phych_nr = %d
Line 11598: 3G3G DSDS startDlPhych MyIndex(0 : BCH,  : BCH_FOR_REFCELL) %d
Line 11598: 3G3G DSDS startDlPhych MyIndex(0 : BCH,  : BCH_FOR_REFCELL) %d
Line 11604: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11604: rakeStartCommand uhal command exec failed: Err Code %d AddErrCode %d
Line 11617: 3G3G DSDS: DlPhych %d is not in proper state %d
Line 11617: 3G3G DSDS: DlPhych %d is not in proper state %d
Line 11690: mapChannelInfo : This is an error case
Line 11690: mapChannelInfo : This is an error case
Line 11736: mapChannelInfoToController : This is an error case
Line 11736: mapChannelInfoToController : This is an error case
Line 11769: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB Unable to send UpdateDrDb message to DSL1RC
Line 11769: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB Unable to send UpdateDrDb message to DSL1RC
Line 11773: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB: isDRImpossible %d transceiverId %d
Line 11773: DR-DSDS: uphy_CResourcesConfigurationController_updateDRDB: isDRImpossible %d transceiverId %d
Line 11791: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11791: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11801: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11801: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11806: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11806: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11813: stopRfIntAndClearUarfcnCmd: sendResponseToUphyToken did not get time to run, so clear it
Line 11813: stopRfIntAndClearUarfcnCmd: sendResponseToUphyToken did not get time to run, so clear it
Line 11850: [3C-HSDPA] (init_processEventFn) Entry function: st secondary info copied from previous msg to new msg
Line 11850: [3C-HSDPA] (init_processEventFn) Entry function: st secondary info copied from previous msg to new msg
Line 11875: [3C-HSDPA] (init_processEventFn) Entry function: 2nd secondary info copied from previous msg to new msg
Line 11875: [3C-HSDPA] (init_processEventFn) Entry function: 2nd secondary info copied from previous msg to new msg
Line 11879: [3C-HSDPA] (init_processEventFn) Entry function:No info copy need from previous msg to new msg
Line 11879: [3C-HSDPA] (init_processEventFn) Entry function:No info copy need from previous msg to new msg
Line 11901: uphy_CResourcesConfigurationController_updateDrImpBitMask  transceiverId = %d PrevStatus = %d, CurrentStatus = %d, bitpos = %d bitmask = %d bitStatus = %d
Line 11901: uphy_CResourcesConfigurationController_updateDrImpBitMask  transceiverId = %d PrevStatus = %d, CurrentStatus = %d, bitpos = %d bitmask = %d bitStatus = %d
Line 11923: uphy_CResourcesConfigurationController_sendDirectSearcherRequest: rValue %d transceiverId %d
Line 11923: uphy_CResourcesConfigurationController_sendDirectSearcherRequest: rValue %d transceiverId %d
Line 11937: [DR-DSDS]  Sending Searcher Use Release done  to DR mngr Interface transceiverId %d
Line 11937: [DR-DSDS]  Sending Searcher Use Release done  to DR mngr Interface transceiverId %d
Line 11950:   [DR-DSDS]- Failed to send RF Request
Line 11950:   [DR-DSDS]- Failed to send RF Request
Line 11986: DR-DSDS: uphy_CResourcesConfigurationController_initDrImpBitMask for transceived %d
Line 11986: DR-DSDS: uphy_CResourcesConfigurationController_initDrImpBitMask for transceived %d
Line 12020: dsReconfReq_processEventFn: currentMainSubSIMInfo %d, cctrchNr %d
Line 12020: dsReconfReq_processEventFn: currentMainSubSIMInfo %d, cctrchNr %d
Line 12040: Wrong SIM Information %d !!!
Line 12040: Wrong SIM Information %d !!!
Line 12073: dsReconfReq_processEventFn : BGPCH should not happen here
Line 12073: dsReconfReq_processEventFn : BGPCH should not happen here
Line 12084: dsReconfReq_processEventFn : currentMainSubSIMInfo %d, cctrchNr %d
Line 12084: dsReconfReq_processEventFn : currentMainSubSIMInfo %d, cctrchNr %d
Line 12104: Wrong SIM Information %d !!!
Line 12104: Wrong SIM Information %d !!!
Line 12117: Release Cctrch - uhal_Cmd_exec
Line 12117: Release Cctrch - uhal_Cmd_exec
