Line 265: uphy_CHsdschResourcesController_RfSettledHandler: scUarfcnRequest is FALSE 
Line 265: uphy_CHsdschResourcesController_RfSettledHandler: scUarfcnRequest is FALSE 
Line 719: Instance created for stackId %d controllerIndex %d
Line 719: Instance created for stackId %d controllerIndex %d
Line 910: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaActivationTimeTokenPtr is executed
Line 910: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaActivationTimeTokenPtr is executed
Line 920: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaRelActivationTimeTokenPtr is executed
Line 920: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaRelActivationTimeTokenPtr is executed
Line 930: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaModifyTokenPtr is executed
Line 930: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaModifyTokenPtr is executed
Line 940: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaHarqReplaceTokenPtr is executed
Line 940: S0  uphy_CHsdschResources_activationTimeSTF: hsdpaHarqReplaceTokenPtr is executed
Line 979: S0  HS-DSCH config message is pended at %d
Line 979: S0  HS-DSCH config message is pended at %d
Line 1008: Cancel HS-DSCH configuration: CFN=%d
Line 1008: Cancel HS-DSCH configuration: CFN=%d
Line 1014: HS-DSCH config is failed and send nagative CNF
Line 1014: HS-DSCH config is failed and send nagative CNF
Line 1024: S0  Waiting Hsdsch activationTimeSTF[currentCfn = %d]
Line 1024: S0  Waiting Hsdsch activationTimeSTF[currentCfn = %d]
Line 1047: S0  HS-DSCH config is failed and send nagative CNF
Line 1047: S0  HS-DSCH config is failed and send nagative CNF
Line 1088: S0  secondary HS-DSCH config message is pended at %d
Line 1088: S0  secondary HS-DSCH config message is pended at %d
Line 1108: S0  Waiting secondary Hsdsch activationTimeSTF[currentCfn = %d
Line 1108: S0  Waiting secondary Hsdsch activationTimeSTF[currentCfn = %d
Line 1131: S0  Secondary HS-DSCH config is failed and send nagative CNF
Line 1131: S0  Secondary HS-DSCH config is failed and send nagative CNF
Line 1173: S0  HSDSCH Common Config Event starts ResourceController FSM 
Line 1173: S0  HSDSCH Common Config Event starts ResourceController FSM 
Line 1231: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaActivationTimeTokenPtr is not executed
Line 1231: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaActivationTimeTokenPtr is not executed
Line 1247: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaRelActivationTimeTokenPtr is not executed
Line 1247: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaRelActivationTimeTokenPtr is not executed
Line 1263: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaModifyTokenPtr is not executed
Line 1263: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaModifyTokenPtr is not executed
Line 1279: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaHarqReplaceTokenPtr is not executed
Line 1279: S0  uphy_CHsdschResourcesController_SetActTime: previous hsdpaHarqReplaceTokenPtr is not executed
Line 1459: S0  Hsdsch[%d] Release msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 1459: S0  Hsdsch[%d] Release msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 1510: S0  Hsdsch[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1510: S0  Hsdsch[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1524: S0  ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 1524: S0  ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 1571: S0, Event ID is set as EUphyResourcesConfigurationEventId_CellTrackingInd %d 
Line 1571: S0, Event ID is set as EUphyResourcesConfigurationEventId_CellTrackingInd %d 
Line 1582: S0 isActivationTime = %d; activationTime=%d; dlUarfcn=%d; primaryScrCode=%d; sttdIndicator=%d; 
Line 1582: S0 isActivationTime = %d; activationTime=%d; dlUarfcn=%d; primaryScrCode=%d; sttdIndicator=%d; 
Line 1586: S0 isHrnti = %d; hrnti=%d; commonHrnti=%d; bcchSpecificHrnti=%d;
Line 1586: S0 isHrnti = %d; hrnti=%d; commonHrnti=%d; bcchSpecificHrnti=%d;
Line 1593: S0 dlScramblingCode=%d; numOfHsscchCodes=%d; chanCodeList: %d %d %d %d
Line 1593: S0 dlScramblingCode=%d; numOfHsscchCodes=%d; chanCodeList: %d %d %d %d
Line 1601: S0 harqInfo: numOfHarqProcesses = %d
Line 1601: S0 harqInfo: numOfHarqProcesses = %d
Line 1606: S0  harqInfo:processMemorySize[%d]:%d;
Line 1606: S0  harqInfo:processMemorySize[%d]:%d;
Line 1620: S0 harqFlushIndicator = %d; isMACEhsConfigured=%d; hsdschTableSize =%d; isFachOccasion =%d; fachOccasionCycleLengthCoef =%d; hsdschL1CategoryExt =%d;
Line 1620: S0 harqFlushIndicator = %d; isMACEhsConfigured=%d; hsdschTableSize =%d; isFachOccasion =%d; fachOccasionCycleLengthCoef =%d; hsdschL1CategoryExt =%d;
Line 1675: S0  DSDS: EUphyHsdschResourcesControllerMsgId_CommonRelease cancelling dspPollToken
Line 1675: S0  DSDS: EUphyHsdschResourcesControllerMsgId_CommonRelease cancelling dspPollToken
Line 1702: S0  Hsdsch[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1702: S0  Hsdsch[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 1735: DSDS:HS-DCH controller receives Rf Use Response from DSLRC Message interface
Line 1735: DSDS:HS-DCH controller receives Rf Use Response from DSLRC Message interface
Line 1745: DSDS:HS-DCH controller receives Rf Use Response from DSLRC Message interface in Dedicated state
Line 1745: DSDS:HS-DCH controller receives Rf Use Response from DSLRC Message interface in Dedicated state
Line 1755: DSDS:HS-DSCH Controller: RF pause received from DSLRC interface
Line 1755: DSDS:HS-DSCH Controller: RF pause received from DSLRC interface
Line 1763: DSDS: HS-DSCH Controller: Reset HS-DSCH configuration to init
Line 1763: DSDS: HS-DSCH Controller: Reset HS-DSCH configuration to init
Line 1772: DSDS: HS-DSCH Controller: Send RF pause received from DSLRC interface to StartstopFSM
Line 1772: DSDS: HS-DSCH Controller: Send RF pause received from DSLRC interface to StartstopFSM
Line 1803: DSDS:[TX-OFF]Pause - To HsDSCH: RF not in use
Line 1803: DSDS:[TX-OFF]Pause - To HsDSCH: RF not in use
Line 1810: DSDS:[TX-OFF]Pause - To Common HsDSCH:in dedicated state
Line 1810: DSDS:[TX-OFF]Pause - To Common HsDSCH:in dedicated state
Line 1823: DSDS:HsDSCH: RF resume received from DSLRC interface
Line 1823: DSDS:HsDSCH: RF resume received from DSLRC interface
Line 1827: DSDS: HsDSCH: Restart HsDSCH configuration
Line 1827: DSDS: HsDSCH: Restart HsDSCH configuration
Line 1835: DSDS: HsDSCH: Enable HsDSCH decoding
Line 1835: DSDS: HsDSCH: Enable HsDSCH decoding
Line 1844: DSDS: HsDSCH: Resume HSDSCH decoding
Line 1844: DSDS: HsDSCH: Resume HSDSCH decoding
Line 1852: DSDS: HsDSCH: Resume HSDSCH decoding
Line 1852: DSDS: HsDSCH: Resume HSDSCH decoding
Line 1866: DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 1866: DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 1898: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_process)  st sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, hsDschServingScrCode is %d
Line 1898: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_process)  st sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, hsDschServingScrCode is %d
Line 1910: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_process)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, hsDschServingScrCode is %d
Line 1910: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_process)  2nd sec carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, hsDschServingScrCode is %d
Line 2032: S0  Secondary Hsdsch[%d] Release msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 2032: S0  Secondary Hsdsch[%d] Release msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 2057: S0  Secondary Hsdsch[%d] Release msg received
Line 2057: S0  Secondary Hsdsch[%d] Release msg received
Line 2083: S0  Secondary Hsdsch[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 2083: S0  Secondary Hsdsch[%d] Release msg received for ScrId=%d NOTHING TO RELEASE - automatic positive release CNF
Line 2124: S0  process - unknown msgId
Line 2124: S0  process - unknown msgId
Line 2202: S0 Invalid Camping Uarfcn :     UARFCN=%d
Line 2202: S0 Invalid Camping Uarfcn :     UARFCN=%d
Line 2219: S0  RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 2219: S0  RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 2225: S0  RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 2225: S0  RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 2230: S0  RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 2230: S0  RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 2238: S0  uphy_CHsdschResourcesController_SecUarfcn: sendResponseToUphyToken did not get time to run, so clear it
Line 2238: S0  uphy_CHsdschResourcesController_SecUarfcn: sendResponseToUphyToken did not get time to run, so clear it
Line 2258: S0  [HSDPA] (uphy_CHsdschResourcesController_SecUarfcn)  primaryCarrierUarfcn %d,   firstSecondaryUarfcn %d,  secondSecondaryUarfcn %d
Line 2258: S0  [HSDPA] (uphy_CHsdschResourcesController_SecUarfcn)  primaryCarrierUarfcn %d,   firstSecondaryUarfcn %d,  secondSecondaryUarfcn %d
Line 2268: S0  [HSDPA] (uphy_CHsdschResourcesController_SecUarfcn)  primaryCarrierUarfcn %d,   firstSecondaryUarfcn %d,  secondSecondaryUarfcn %d
Line 2268: S0  [HSDPA] (uphy_CHsdschResourcesController_SecUarfcn)  primaryCarrierUarfcn %d,   firstSecondaryUarfcn %d,  secondSecondaryUarfcn %d
Line 2281: S0  uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 2281: S0  uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 2293: :Sc Uarfcn Release :  primary UARFCN=%d, secondary UARFCN=%d
Line 2293: :Sc Uarfcn Release :  primary UARFCN=%d, secondary UARFCN=%d
Line 2298: :Sc Uarfcn Config :  primary UARFCN=%d, secondary UARFCN=%d
Line 2298: :Sc Uarfcn Config :  primary UARFCN=%d, secondary UARFCN=%d
Line 2305: uarfcnCmd is null
Line 2305: uarfcnCmd is null
Line 2340: S0  CellSynchroReqMsg == NULL pointer
Line 2340: S0  CellSynchroReqMsg == NULL pointer
Line 2362: S0  FA2: uarfcn=%d, primaryScrCode=%d
Line 2362: S0  FA2: uarfcn=%d, primaryScrCode=%d
Line 2369: S0  Sending Cell Synchro request failed.
Line 2369: S0  Sending Cell Synchro request failed.
Line 2376: S0  theConfigurationController is NULL.
Line 2376: S0  theConfigurationController is NULL.
Line 2461: S0  cpichMultiPathReqMessage == NULL pointer
Line 2461: S0  cpichMultiPathReqMessage == NULL pointer
Line 2486: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_SubmitCpichMultipathRequest), primary uarfcn=%d, primary scr. code=%d
Line 2486: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_SubmitCpichMultipathRequest), primary uarfcn=%d, primary scr. code=%d
Line 2501: S0  no multipath information [%d %d]
Line 2501: S0  no multipath information [%d %d]
Line 2508: S0  no cell information [%d %d]
Line 2508: S0  no cell information [%d %d]
Line 2537: S0  unable to send cpichMultiPathReqMessage
Line 2537: S0  unable to send cpichMultiPathReqMessage
Line 2543: SubmitCpichMultipathRequest: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2543: SubmitCpichMultipathRequest: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2579: S0  requestCellTracking -  RL %d for PSC: %d is found in MPDB
Line 2579: S0  requestCellTracking -  RL %d for PSC: %d is found in MPDB
Line 2583: S0  Reference cell changed to rlNr=%d, PSC=%d
Line 2583: S0  Reference cell changed to rlNr=%d, PSC=%d
Line 2590: S0  RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 2590: S0  RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 2604: S0  Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 2604: S0  Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 2621: S0  Update Framework SFN: oldSfn=%d, newSfn=%d
Line 2621: S0  Update Framework SFN: oldSfn=%d, newSfn=%d
Line 2629: S0   requestCellTracking -  currentDlUarfcn=%d, hsdschRefUarfcn=%d
Line 2629: S0   requestCellTracking -  currentDlUarfcn=%d, hsdschRefUarfcn=%d
Line 2650: S0  cellSfnReqMsg send failure
Line 2650: S0  cellSfnReqMsg send failure
Line 2726: isCellTrackingCompleted: FAILED for uarfcn=%d primaryScrCode=%d
Line 2726: isCellTrackingCompleted: FAILED for uarfcn=%d primaryScrCode=%d
Line 2795: S0  fingerInfoCmd failed
Line 2795: S0  fingerInfoCmd failed
Line 2823: S0  Estimated group delay %d
Line 2823: S0  Estimated group delay %d
Line 2827: S0  no multipath information [%d %d]
Line 2827: S0  no multipath information [%d %d]
Line 2855: S0  [HSDPA] uphy_CRakeFingerMgmtUtility_PerformImmediateMoving called, DcHsdpaPrvState %d, DcHsdpaCurrentState %d
Line 2855: S0  [HSDPA] uphy_CRakeFingerMgmtUtility_PerformImmediateMoving called, DcHsdpaPrvState %d, DcHsdpaCurrentState %d
Line 2864: S0  [HSDPA] uphy_CRakeFingerMgmtUtility_PerformImmediateMoving called, DcHsdpaPrvState %d, DcHsdpaCurrentState %d
Line 2864: S0  [HSDPA] uphy_CRakeFingerMgmtUtility_PerformImmediateMoving called, DcHsdpaPrvState %d, DcHsdpaCurrentState %d
Line 2869: S0  no cell information [%d %d]
Line 2869: S0  no cell information [%d %d]
Line 2938: S0  getDlDpchFrameOffset finds no phych connected to Rl
Line 2938: S0  getDlDpchFrameOffset finds no phych connected to Rl
Line 2954: S0  getDlDpchFrameOffset finds no dpch connected to Rl %d
Line 2954: S0  getDlDpchFrameOffset finds no dpch connected to Rl %d
Line 2979: S0  [HSDPA] hsdschServingRl is %d, dpchFrameOffset is %d, servingCellFrameOffset (dpchFrameOffset/256) is %d
Line 2979: S0  [HSDPA] hsdschServingRl is %d, dpchFrameOffset is %d, servingCellFrameOffset (dpchFrameOffset/256) is %d
Line 2983: S0  [HSDPA] Hsdpa RL is not find
Line 2983: S0  [HSDPA] Hsdpa RL is not find
Line 3028: [3C-HSDPA]  primary : uphy_configUhalInstancesStf called 
Line 3028: [3C-HSDPA]  primary : uphy_configUhalInstancesStf called 
Line 3062: S0  engagedRlPhychLinksArray == NULL pointer
Line 3062: S0  engagedRlPhychLinksArray == NULL pointer
Line 3074: S0  No more free RL-s
Line 3074: S0  No more free RL-s
Line 3095: S0  rakeRl config failed
Line 3095: S0  rakeRl config failed
Line 3102: S0 uphy_configUhalInstancesStf - uphy_CChannelsConfigurationUtility_configureRL(rlNr:%d primaryScrCode:%d...) success
Line 3102: S0 uphy_configUhalInstancesStf - uphy_CChannelsConfigurationUtility_configureRL(rlNr:%d primaryScrCode:%d...) success
Line 3189: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3189: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3203: S0 uphy_configUhalInstancesStf - EHalHsScchConfigCmd(hrnti=%d,commonHrnti=%d,bcchSpecificHrnti=%d,numOfHsscchChannelisationCode=%d)
Line 3203: S0 uphy_configUhalInstancesStf - EHalHsScchConfigCmd(hrnti=%d,commonHrnti=%d,bcchSpecificHrnti=%d,numOfHsscchChannelisationCode=%d)
Line 3208: uphy_configUhalInstancesStf - No HsscchInfo!
Line 3208: uphy_configUhalInstancesStf - No HsscchInfo!
Line 3240: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3240: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3247: S0 uphy_configUhalInstancesStf - EHalHsPdschHarqConfigCmd(numOfHarqProcesses =%d) success
Line 3247: S0 uphy_configUhalInstancesStf - EHalHsPdschHarqConfigCmd(numOfHarqProcesses =%d) success
Line 3290: S0 [3C-HSDPA] primary uphy_configUhalInstancesStf - is64QAMConfigured=%d
Line 3290: S0 [3C-HSDPA] primary uphy_configUhalInstancesStf - is64QAMConfigured=%d
Line 3341: S0  [3C-HSDPA] hrnti %d,  numOfHsscchCodes %d, chanCodeList[0] %d 
Line 3341: S0  [3C-HSDPA] hrnti %d,  numOfHsscchCodes %d, chanCodeList[0] %d 
Line 3350: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3350: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3355: S0  [3C-HSDPA] EHalHsScchConfigCmd called
Line 3355: S0  [3C-HSDPA] EHalHsScchConfigCmd called
Line 3387: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3387: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3392: S0  [3C-HSDPA] EHalHsPdschHarqConfigCmd called
Line 3392: S0  [3C-HSDPA] EHalHsPdschHarqConfigCmd called
Line 3453: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 3453: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 3458: S0  [3C-HSDPA] EHalHsDpcchConfigCmd called
Line 3458: S0  [3C-HSDPA] EHalHsDpcchConfigCmd called
Line 3484: EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 3492: S0  Hsdsch UhalCfg Failed
Line 3492: S0  Hsdsch UhalCfg Failed
Line 3555: S0  Primary serving cell only
Line 3555: S0  Primary serving cell only
Line 3605: [3C-HSDPA] secondary carrier : configUhalInstancesStf_SC called 
Line 3605: [3C-HSDPA] secondary carrier : configUhalInstancesStf_SC called 
Line 3621: S0  [3C-HSDPA]  is1stSecondary Config %d,  is2ndSecondary Config %d 
Line 3621: S0  [3C-HSDPA]  is1stSecondary Config %d,  is2ndSecondary Config %d 
Line 3703: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3703: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3708: S0  [3C-HSDPA] st sec. carrier : EHalHsScchConfigCmd called
Line 3708: S0  [3C-HSDPA] st sec. carrier : EHalHsScchConfigCmd called
Line 3745: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3745: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3750: S0  [3C-HSDPA] st sec. carrier : EHalHsPdschHarqConfigCmd called
Line 3750: S0  [3C-HSDPA] st sec. carrier : EHalHsPdschHarqConfigCmd called
Line 3808: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3808: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 3813: S0  [3C-HSDPA] 2nd sec. carrier : EHalHsScchConfigCmd called
Line 3813: S0  [3C-HSDPA] 2nd sec. carrier : EHalHsScchConfigCmd called
Line 3831: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3831: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 3836: S0  [3C-HSDPA] 2nd sec. carrier : EHalHsPdschHarqConfigCmd called
Line 3836: S0  [3C-HSDPA] 2nd sec. carrier : EHalHsPdschHarqConfigCmd called
Line 3872: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 3872: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 3877: S0  [3C-HSDPA]  sec. carrier : EHalHsDpcchConfigCmd called
Line 3877: S0  [3C-HSDPA]  sec. carrier : EHalHsDpcchConfigCmd called
Line 3893: S0  Hsdsch UhalCfg Failed
Line 3893: S0  Hsdsch UhalCfg Failed
Line 4030: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 4030: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 4049: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 4049: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 4064: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 4064: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 4110: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 4110: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 4117: HS-DSCH config fail due to no MPDB info: currentRefRl %d 
Line 4117: HS-DSCH config fail due to no MPDB info: currentRefRl %d 
Line 4151: uphy_CHsdschResources_primaryEqConfigSTF, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 4151: uphy_CHsdschResources_primaryEqConfigSTF, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 4169: Enabling Primary Cell HS-DSCH at CFN=%d
Line 4169: Enabling Primary Cell HS-DSCH at CFN=%d
Line 4216: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 4216: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 4232: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 4232: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 4269: enableEnDecoding: prvServingCellEcIo=%d ecNo=%d, diffEcIo=%d
Line 4269: enableEnDecoding: prvServingCellEcIo=%d ecNo=%d, diffEcIo=%d
Line 4276: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 4276: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 4285: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d 
Line 4285: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d 
Line 4330: S0  uphy_CHsdschResources_primaryEqConfigSTF, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 4330: S0  uphy_CHsdschResources_primaryEqConfigSTF, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 4335: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_CCmd_exec
Line 4335: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_CCmd_exec
Line 4357: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 4357: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 4377: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 4377: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 4384: Enabling Primary Cell HS-DSCH at CFN=%d
Line 4384: Enabling Primary Cell HS-DSCH at CFN=%d
Line 4390: HSDSCH release ILM received befor uphy_CHsdschResources_primaryConfig is triggered
Line 4390: HSDSCH release ILM received befor uphy_CHsdschResources_primaryConfig is triggered
Line 4435: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d
Line 4435: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d
Line 4516: S0  enableEnDecodingSc, secondary HS-DSCH config again, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 4516: S0  enableEnDecodingSc, secondary HS-DSCH config again, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 4542: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 4542: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 4567: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 4567: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 4586: S0 DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 4586: S0 DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 4609: S0  enableEnDecodingSc, secondary HS-DSCH config again, eq_init_flag=%d
Line 4609: S0  enableEnDecodingSc, secondary HS-DSCH config again, eq_init_flag=%d
Line 4634: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 4634: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 4650: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 4650: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 4705: S0  send
Line 4705: S0  send
Line 4745: S0  Cant Request CellSfnServer Release
Line 4745: S0  Cant Request CellSfnServer Release
Line 4750: S0  HSDSCH mode controller requests CellSfnServer release
Line 4750: S0  HSDSCH mode controller requests CellSfnServer release
Line 4755: S0  UphyCellSfnServerReleaseAllMsg is NULL
Line 4755: S0  UphyCellSfnServerReleaseAllMsg is NULL
Line 4785: S0  In uphy_CHsdschResourcesController_CancelTokenForSttdDetFA2, diversitydetection command is still active
Line 4785: S0  In uphy_CHsdschResourcesController_CancelTokenForSttdDetFA2, diversitydetection command is still active
Line 4852: [SCH-IC] sttd counter [%d,%d,%d]
Line 4852: [SCH-IC] sttd counter [%d,%d,%d]
Line 4871: isSttdDectetionRequested [%d %d]
Line 4871: isSttdDectetionRequested [%d %d]
Line 4875: isSttdDectetionRequested [%d %d]: REQ failed
Line 4875: isSttdDectetionRequested [%d %d]: REQ failed
Line 4917: TriggerSttdDetForFA2STF: isUtranCommercialPlmnId=%d numOfRls=%d isHsDschSTTD=%d isScHsDschConfig=%d sttdDetCnt=%d
Line 4917: TriggerSttdDetForFA2STF: isUtranCommercialPlmnId=%d numOfRls=%d isHsDschSTTD=%d isScHsDschConfig=%d sttdDetCnt=%d
Line 4953: Periodic STTD det for DC [%d %d] result %d
Line 4953: Periodic STTD det for DC [%d %d] result %d
Line 4962: isSttdDetectionRequestedForDC [%d %d]
Line 4962: isSttdDetectionRequestedForDC [%d %d]
Line 4966: isSttdDetectionRequestedForDC [%d %d]: REQ failed
Line 4966: isSttdDetectionRequestedForDC [%d %d]: REQ failed
Line 4994: Periodic STTD det for DC [%d %d] result %d
Line 4994: Periodic STTD det for DC [%d %d] result %d
Line 5000: isSttdDetectionRequestedForDC [%d %d]
Line 5000: isSttdDetectionRequestedForDC [%d %d]
Line 5016: isSttdDetectionRequestedForDC [%d %d]: REQ failed
Line 5016: isSttdDetectionRequestedForDC [%d %d]: REQ failed
Line 5042: uphy_CHsdschResourcesController_TriggerSttdDetForFA3STF: is3cSttdDetTried %d isCommercialPlmnId %d
Line 5042: uphy_CHsdschResourcesController_TriggerSttdDetForFA3STF: is3cSttdDetTried %d isCommercialPlmnId %d
Line 5053: Periodic STTD det for 3C [%d %d] result %d
Line 5053: Periodic STTD det for 3C [%d %d] result %d
Line 5059: isSttdDetectionRequestedFor3C [%d %d]
Line 5059: isSttdDetectionRequestedFor3C [%d %d]
Line 5075: isSttdDetectionRequestedFor3C [%d %d]: REQ failed
Line 5075: isSttdDetectionRequestedFor3C [%d %d]: REQ failed
Line 5205: S0  There is no ref RL in DB and return token
Line 5205: S0  There is no ref RL in DB and return token
Line 5228: [HSDPA] uphy_CHsdschResourcesController_SetRefPosConfigSTF at CFN=%d currentRefRl=%d refFingerNr=%d ref_fing_pos=%d hsDschServingScrCode=%d
Line 5228: [HSDPA] uphy_CHsdschResourcesController_SetRefPosConfigSTF at CFN=%d currentRefRl=%d refFingerNr=%d ref_fing_pos=%d hsDschServingScrCode=%d
Line 5250: S0  needToSendDpchFrameOffset %d, dpchFrameOffset (256 chipset unit) %d, primary servingCellFrameOffset (256 chipset unit) %d 
Line 5250: S0  needToSendDpchFrameOffset %d, dpchFrameOffset (256 chipset unit) %d, primary servingCellFrameOffset (256 chipset unit) %d 
Line 5258: S0  needToSendDpchFrameOffset %d, dpchFrameOffset (256 chipset unit) %d, secondary servingCellFrameOffset (256 chipset unit) %d 
Line 5258: S0  needToSendDpchFrameOffset %d, dpchFrameOffset (256 chipset unit) %d, secondary servingCellFrameOffset (256 chipset unit) %d 
Line 5332: [HSDPA] [FA0] SetRefPosConfigSTF: Seek to mpInfo from DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA0
Line 5332: [HSDPA] [FA0] SetRefPosConfigSTF: Seek to mpInfo from DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA0
Line 5337: [HSDPA] [FA0] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d  from uarfcn=%d, psc=%d of FA0
Line 5337: [HSDPA] [FA0] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d  from uarfcn=%d, psc=%d of FA0
Line 5342: S0  [HSDPA] [FA0] uphy_CMultiPathDatabase_SeekCellInfo, no path found from uarfcn=%d, psc=%d of FA0
Line 5342: S0  [HSDPA] [FA0] uphy_CMultiPathDatabase_SeekCellInfo, no path found from uarfcn=%d, psc=%d of FA0
Line 5359: [HSDPA] [FA1] SetRefPosConfigSTF: Seek to mpInfo from DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA1
Line 5359: [HSDPA] [FA1] SetRefPosConfigSTF: Seek to mpInfo from DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA1
Line 5364: [HSDPA] [FA1] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA1
Line 5364: [HSDPA] [FA1] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA1
Line 5379: [HSDPA] [FA1] SetRefPosConfigSTF: Overwrite ref_fing_pos=%d from uarfcn=%d, psc=%d of FA1
Line 5379: [HSDPA] [FA1] SetRefPosConfigSTF: Overwrite ref_fing_pos=%d from uarfcn=%d, psc=%d of FA1
Line 5396: [HSDPA] [FA1] SetRefPosConfigSTF: Overwrite ref_fing_pos=%d from uarfcn=%d, psc=%d of FA1
Line 5396: [HSDPA] [FA1] SetRefPosConfigSTF: Overwrite ref_fing_pos=%d from uarfcn=%d, psc=%d of FA1
Line 5416: [HSDPA] [FA2] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA2
Line 5416: [HSDPA] [FA2] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA2
Line 5421: [HSDPA] [FA2] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA2
Line 5421: [HSDPA] [FA2] SetRefPosConfigSTF: Seek to mpInfo from old DB: ref_fing_pos = %d from uarfcn=%d, psc=%d of FA2
Line 5436: [HSDPA] [FA2] SetRefPosConfigSTF: Overwrite ref_fing_pos_fa3=%d from uarfcn=%d, psc=%d of FA2
Line 5436: [HSDPA] [FA2] SetRefPosConfigSTF: Overwrite ref_fing_pos_fa3=%d from uarfcn=%d, psc=%d of FA2
Line 5453: [HSDPA] [FA2] SetRefPosConfigSTF: Overwrite ref_fing_pos_fa3=%d from uarfcn=%d, psc=%d of FA2
Line 5453: [HSDPA] [FA2] SetRefPosConfigSTF: Overwrite ref_fing_pos_fa3=%d from uarfcn=%d, psc=%d of FA2
Line 5583: [RxDiv][UPHY] RxDiv off (%d) ---->>>>> RxDiv on
Line 5583: [RxDiv][UPHY] RxDiv off (%d) ---->>>>> RxDiv on
Line 5594: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 5594: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 5646: SetRefPosConfigSTF: currRefRl=%d refFingerNr=%d hsDschServingScrCode=%d [SCH-IC %d] txDivRscp=%d txDivMetric=%d
Line 5646: SetRefPosConfigSTF: currRefRl=%d refFingerNr=%d hsDschServingScrCode=%d [SCH-IC %d] txDivRscp=%d txDivMetric=%d
Line 5789: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  primary carrier eq release
Line 5789: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  primary carrier eq release
Line 5797: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d
Line 5797: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d
Line 5873: uphy_CHsdschResourcesController_enableEnDecoding: prvServingCellEcIo=%d ecNo=%d, diffEcIo=%d, intraFreqOtherCellKeep=%d
Line 5873: uphy_CHsdschResourcesController_enableEnDecoding: prvServingCellEcIo=%d ecNo=%d, diffEcIo=%d, intraFreqOtherCellKeep=%d
Line 5921: S0  [HSDPA] uphy_CHsdschResourcesController_enableEnDecoding, primary HS-DSCH config, eq_init_flag=%d, dpchFrameOffset=%d
Line 5921: S0  [HSDPA] uphy_CHsdschResourcesController_enableEnDecoding, primary HS-DSCH config, eq_init_flag=%d, dpchFrameOffset=%d
Line 5928: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 5928: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 5965: S0  checkRollBackFlag %d, restore_order_primary_scr %d, restore_order_uarfcn %d
Line 5965: S0  checkRollBackFlag %d, restore_order_primary_scr %d, restore_order_uarfcn %d
Line 5984: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 5984: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6010: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6010: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6023: Enabling Primary Cell HS-DSCH at CFN=%d currentRefRl=%d refFingerNr=%d, ref_fing_pose=%d hsDschServingScrCode=%d
Line 6023: Enabling Primary Cell HS-DSCH at CFN=%d currentRefRl=%d refFingerNr=%d, ref_fing_pose=%d hsDschServingScrCode=%d
Line 6144: S0  Primary serving cell only
Line 6144: S0  Primary serving cell only
Line 6180: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d
Line 6180: S0  HS-DSCH config fail due to no MPDB info: currentRefRl %d
Line 6199: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6199: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6216: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  primary carrier eq release
Line 6216: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  primary carrier eq release
Line 6225: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  st secondary carrier eq release
Line 6225: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  st secondary carrier eq release
Line 6235: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  2nd secondary carrier eq release
Line 6235: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_enableEnDecoding)  2nd secondary carrier eq release
Line 6294: S0  uphy_CHsdschResourcesController_enableEnDecoding, primary HS-DSCH config, tauDpch=%d, eq_init_flag=%d
Line 6294: S0  uphy_CHsdschResourcesController_enableEnDecoding, primary HS-DSCH config, tauDpch=%d, eq_init_flag=%d
Line 6301: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 6301: [SCH-IC] enableEnDecoding: txDivRscp=%d txDivMetric=%d 
Line 6368: S0  uphy_CHsdschResourcesController_enableEnDecoding, secondary HS-DSCH config, eq_init_flag=%d, dpchFrameOffset=%d
Line 6368: S0  uphy_CHsdschResourcesController_enableEnDecoding, secondary HS-DSCH config, eq_init_flag=%d, dpchFrameOffset=%d
Line 6404: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6404: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6435: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 6435: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 6445: FA2 enableEnDecoding: ref_fing_pos=%d hsDschServingScrCode=%d servingCellChanging=%d
Line 6445: FA2 enableEnDecoding: ref_fing_pos=%d hsDschServingScrCode=%d servingCellChanging=%d
Line 6459: S0 DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 6459: S0 DlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 6525:  isSecondaryServingChange made %d
Line 6525:  isSecondaryServingChange made %d
Line 6544: S0  uphy_CHsdschResourcesController_enableEnDecoding, secondary HS-DSCH config, eq_init_flag=%d
Line 6544: S0  uphy_CHsdschResourcesController_enableEnDecoding, secondary HS-DSCH config, eq_init_flag=%d
Line 6572: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6572: S0  EHalHsdpaDlEqualizerConfigCmd fail - uhal_Cmd_exec
Line 6588: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 6588: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 6597: FA2 enableEnDecoding: ref_fing_pos=%d hsDschServingScrCode=%d servingCellChanging=%d
Line 6597: FA2 enableEnDecoding: ref_fing_pos=%d hsDschServingScrCode=%d servingCellChanging=%d
Line 6661:  isSecondaryServingChange made %d
Line 6661:  isSecondaryServingChange made %d
Line 6668: S0  uphy_CHsdschResourcesController_enableEnDecoding: Warning!! configMsg is NULL !!
Line 6668: S0  uphy_CHsdschResourcesController_enableEnDecoding: Warning!! configMsg is NULL !!
Line 6696: S0  [HSDPA] uphy_CHsDschResourcesController_adjustRefFingerPosition called, DcHsdpaPrvState %d, DcHsdpaCurrentState %d
Line 6696: S0  [HSDPA] uphy_CHsDschResourcesController_adjustRefFingerPosition called, DcHsdpaPrvState %d, DcHsdpaCurrentState %d
Line 6725: multipathInfoFA2 == NULL pointer
Line 6725: multipathInfoFA2 == NULL pointer
Line 6732: FA2 enableEnDecoding: update frameOffset = %d
Line 6732: FA2 enableEnDecoding: update frameOffset = %d
Line 6741: Cannot find multiPathInfo (%d %d)
Line 6741: Cannot find multiPathInfo (%d %d)
Line 6746: Cannot find CellInfo (%d %d)
Line 6746: Cannot find CellInfo (%d %d)
Line 6866: S0  uphy_CCpcResources is Null
Line 6866: S0  uphy_CCpcResources is Null
Line 6892: HS-DSCH send CNF message: isPositive %d compressedModeStop %d, Target cfn_eutra(%d), cfn_gsm(%d)->NoGap, isIFHHOongoing %d
Line 6892: HS-DSCH send CNF message: isPositive %d compressedModeStop %d, Target cfn_eutra(%d), cfn_gsm(%d)->NoGap, isIFHHOongoing %d
Line 6912: [HSDPA] uphy_CHsdschResourcesController_sendConfirmationMsg, uphy_CHsdschResourcesController_SetRefPosConfigSTF canceled
Line 6912: [HSDPA] uphy_CHsdschResourcesController_sendConfirmationMsg, uphy_CHsdschResourcesController_SetRefPosConfigSTF canceled
Line 6924:  isScHsdschConfiguring %d
Line 6924:  isScHsdschConfiguring %d
Line 6929: ScHsDsCh released when scUarfcnRequest was requested
Line 6929: ScHsDsCh released when scUarfcnRequest was requested
Line 6988: S0   UphyInterRatCoordinatorReleaseCompleteMsg is NULL
Line 6988: S0   UphyInterRatCoordinatorReleaseCompleteMsg is NULL
Line 7102: S0  HS-DSCH release REQ not requiring CNF. Init hsDschRelease
Line 7102: S0  HS-DSCH release REQ not requiring CNF. Init hsDschRelease
Line 7255: S0  uphy_CHsdschResourcesController_process: hsdpaPrimaryEqConfigTokenPtr cancelled
Line 7255: S0  uphy_CHsdschResourcesController_process: hsdpaPrimaryEqConfigTokenPtr cancelled
Line 7261: S0  uphy_CHsdschResourcesController_releaseDlUhalInstances: Release STTD
Line 7261: S0  uphy_CHsdschResourcesController_releaseDlUhalInstances: Release STTD
Line 7321: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7321: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7336: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7336: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7348: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7348: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7377: S0  [3C-HSDPA] releaseDlUhalInstances : is1stSecondaryRelease %d, is2ndSecondaryRelease %d
Line 7377: S0  [3C-HSDPA] releaseDlUhalInstances : is1stSecondaryRelease %d, is2ndSecondaryRelease %d
Line 7393: S0 UhalDlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 7393: S0 UhalDlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 7462: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7462: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7474: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7474: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7486: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7486: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7534: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7534: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7546: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7546: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7558: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7558: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7572: S0  Warning !! Warning !! isstSecondaryRelease and is2ndSecondaryRelease are FALSE
Line 7572: S0  Warning !! Warning !! isstSecondaryRelease and is2ndSecondaryRelease are FALSE
Line 7580: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7580: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7592: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7592: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7604: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7604: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7634: S0  uphy_CHsdschResourcesController_releaseDlUhalInstances:  hsdpaPrimaryEqConfigTokenPtr cancelled
Line 7634: S0  uphy_CHsdschResourcesController_releaseDlUhalInstances:  hsdpaPrimaryEqConfigTokenPtr cancelled
Line 7642: isDsRelease is FALSE uphy_CHsdschResources_primaryConfig cancelled
Line 7642: isDsRelease is FALSE uphy_CHsdschResources_primaryConfig cancelled
Line 7697: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7697: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7702: S0  [3C-HSDPA] primary carrier UhalHsScchReleaseCmd called
Line 7702: S0  [3C-HSDPA] primary carrier UhalHsScchReleaseCmd called
Line 7712: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7712: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7724: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7724: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7745: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7745: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7770: S0  [3C-HSDPA] releaseDlUhalInstances : is1stSecondaryConfig %d, is2ndSecondaryConfig %d
Line 7770: S0  [3C-HSDPA] releaseDlUhalInstances : is1stSecondaryConfig %d, is2ndSecondaryConfig %d
Line 7786: S0 UhalDlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 7786: S0 UhalDlCommonConfigCmd exec failure: ErrCode %d, AddErrCode %d
Line 7844: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7844: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7856: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7856: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7867: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7867: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7917: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7917: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7922: S0  [3C-HSDPA] 2nd sec. carrier UhalHsScchReleaseCmd called
Line 7922: S0  [3C-HSDPA] 2nd sec. carrier UhalHsScchReleaseCmd called
Line 7930: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7930: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7942: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7942: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7955: S0  Warning !! Warning !! isstSecondaryConfig and is2ndSecondaryConfig are FALSE
Line 7955: S0  Warning !! Warning !! isstSecondaryConfig and is2ndSecondaryConfig are FALSE
Line 7962: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7962: S0  Release HS-SCCH command for Secondary Cell - uhal_Cmd_exec
Line 7967: S0  [3C-HSDPA] 2nd sec. carrier : UhalHsScchReleaseCmd called
Line 7967: S0  [3C-HSDPA] 2nd sec. carrier : UhalHsScchReleaseCmd called
Line 7973: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7973: S0  Release HS-PDSCH equalizer command - uhal_Cmd_exec
Line 7978: S0  [3C-HSDPA]  2nd sec. carrier :  UhalHsdpaDlEqualizerReleaseCmd called
Line 7978: S0  [3C-HSDPA]  2nd sec. carrier :  UhalHsdpaDlEqualizerReleaseCmd called
Line 7984: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7984: S0  Release HS-PDSCH release command - uhal_Cmd_exec
Line 7989: S0  [3C-HSDPA]  2nd sec. carrier : UhalHsPdschDisableCmd called
Line 7989: S0  [3C-HSDPA]  2nd sec. carrier : UhalHsPdschDisableCmd called
Line 8129: S0  ResourcesConfigurationController: EHalDlRlReleaseCmd exec failed. rlNr=%d, phyChStr=%d, errCode=%d, addErrCode=%d
Line 8129: S0  ResourcesConfigurationController: EHalDlRlReleaseCmd exec failed. rlNr=%d, phyChStr=%d, errCode=%d, addErrCode=%d
Line 8136: S0  ResourcesConfigurationController: SFN reset due to RlRelease. Be careful of SFN reset. rlNr=%d. transceiverId=%d
Line 8136: S0  ResourcesConfigurationController: SFN reset due to RlRelease. Be careful of SFN reset. rlNr=%d. transceiverId=%d
Line 8298: [E-DRX Measurement] HsDschController scheduleGap
Line 8298: [E-DRX Measurement] HsDschController scheduleGap
Line 8337: S0 HsDschController scheduleGap: H_RNTI =0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 8337: S0 HsDschController scheduleGap: H_RNTI =0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 8347: S0 HsDschController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, decodePreparation=%d
Line 8347: S0 HsDschController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, decodePreparation=%d
Line 8391: S0 HsDschController scheduleGap: H_RNTI =0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 8391: S0 HsDschController scheduleGap: H_RNTI =0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 8401: S0 HsDschController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, decodePreparation=%d
Line 8401: S0 HsDschController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, decodePreparation=%d
Line 8483: S0 HsDschController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 8483: S0 HsDschController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 8497: S0 [E-DRX Measurement] HsDschController scheduleDecodingPreparation: hsdschResourcesController_ptr->decodingSFN %d smc_TimeCurrentSFN(GlobalStackId_t, UMTS_FDD_RAT)stackId  %d schedule handle starting
Line 8497: S0 [E-DRX Measurement] HsDschController scheduleDecodingPreparation: hsdschResourcesController_ptr->decodingSFN %d smc_TimeCurrentSFN(GlobalStackId_t, UMTS_FDD_RAT)stackId  %d schedule handle starting
Line 8564: S0 HsDschController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 8564: S0 HsDschController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 8590: S0 uphy_CHsdschResourcesController_scheduleSleeping: RFbackprocessing called
Line 8590: S0 uphy_CHsdschResourcesController_scheduleSleeping: RFbackprocessing called
Line 8598: S0 uphy_CHsdschResourcesController_scheduleSleeping: enablePowerSaving_Edrx is TRUE current RSN %d DecodingSFN in RSN %d
Line 8598: S0 uphy_CHsdschResourcesController_scheduleSleeping: enablePowerSaving_Edrx is TRUE current RSN %d DecodingSFN in RSN %d
Line 8618: S0 uphy_CHsdschResourcesController_scheduleSleeping: Decoding is preponed by 16 slots to come out of actual sleep.
Line 8618: S0 uphy_CHsdschResourcesController_scheduleSleeping: Decoding is preponed by 16 slots to come out of actual sleep.
Line 8686: [E-DRX Measurement] CHsdschResourcesController_resync: RSN=%d, Sfn=%d, Slot=%d
Line 8686: [E-DRX Measurement] CHsdschResourcesController_resync: RSN=%d, Sfn=%d, Slot=%d
Line 8754: S0 HsDschController vgmFachOccasionGap: current RSN=%d, current sfn=%d, FMO sfn=%d, FMO cfn=%d
Line 8754: S0 HsDschController vgmFachOccasionGap: current RSN=%d, current sfn=%d, FMO sfn=%d, FMO cfn=%d
Line 8819: S0 HsDschController VGMNotification: slotsUntil=%d, current RSN=%d, FMO RSN=%d
Line 8819: S0 HsDschController VGMNotification: slotsUntil=%d, current RSN=%d, FMO RSN=%d
Line 8906: S0 [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: startStopFsmState=%d, (sfn, slot)=(%d, %d)
Line 8906: S0 [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: startStopFsmState=%d, (sfn, slot)=(%d, %d)
Line 8921: S0  uphy_CHsdschResourcesController_triggerMeasurements (startStopFsmState == EUphyUphyStartStopDecodingFsmStates_Decoding)
Line 8921: S0  uphy_CHsdschResourcesController_triggerMeasurements (startStopFsmState == EUphyUphyStartStopDecodingFsmStates_Decoding)
Line 8940: [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 8940: [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: serverId=%d, startStopFsmState=%d(Waking), numOfTotalMidServerInDrx=%d, numOfInraFeqMidServer=%d, mid=%d
Line 8946: S0  [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: Intrafrequency cell measurement triggering failed. intraFreqMid=%d
Line 8946: S0  [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: Intrafrequency cell measurement triggering failed. intraFreqMid=%d
Line 8952: S0  [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: No intrafrequency cell measurement MidServer
Line 8952: S0  [E-DRX Measurement] uphy_CHsdschResourcesController_triggerMeasurements: No intrafrequency cell measurement MidServer
Line 8986: S0  uphy_CHsdschResourcesController_triggerMeasurements (startStopFsmState == EUphyUphyStartStopDecodingFsmStates_Retiring)
Line 8986: S0  uphy_CHsdschResourcesController_triggerMeasurements (startStopFsmState == EUphyUphyStartStopDecodingFsmStates_Retiring)
Line 8989: S0  uphy_CHsdschResourcesController_triggerMeasurements (fddMidServerCount > 0)
Line 8989: S0  uphy_CHsdschResourcesController_triggerMeasurements (fddMidServerCount > 0)
Line 9011: uphy_CHsdschResourcesController_triggerMeasurements: isInterFreqMsmtTriggeringConditionMet=%d
Line 9011: uphy_CHsdschResourcesController_triggerMeasurements: isInterFreqMsmtTriggeringConditionMet=%d
Line 9015: [E-DRX Measurement] triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 9015: [E-DRX Measurement] triggerMeasurements: serverId=%d, startStopFsmState=%d(Retiring), numOfTotalFddMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 9045: uphy_CHsdschResourcesController_triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 9045: uphy_CHsdschResourcesController_triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 9052: S0  [IRAT U2G] uphy_CHsdschResourcesController_triggerMeasurements: numOfTriggeredMidServer %d is different from numOfGsmMidServer %d
Line 9052: S0  [IRAT U2G] uphy_CHsdschResourcesController_triggerMeasurements: numOfTriggeredMidServer %d is different from numOfGsmMidServer %d
Line 9058: S0  [IRAT U2G] uphy_CHsdschResourcesController_triggerMeasurements: isInterFreqMsmtTriggeringConditionMet == FALSE
Line 9058: S0  [IRAT U2G] uphy_CHsdschResourcesController_triggerMeasurements: isInterFreqMsmtTriggeringConditionMet == FALSE
Line 9063: S0  [E-DRX Measurement]  triggerMeasurements: can't find out registeredInfo with fddMid=%d
Line 9063: S0  [E-DRX Measurement]  triggerMeasurements: can't find out registeredInfo with fddMid=%d
Line 9073: S0  uphy_CHsdschResourcesController_triggerMeasurements (isAvailableInterfreqCellReselctionMgmt == TRUE)
Line 9073: S0  uphy_CHsdschResourcesController_triggerMeasurements (isAvailableInterfreqCellReselctionMgmt == TRUE)
Line 9099: S0  uphy_CHsdschResourcesController_triggerMeasurements (gsmMidServerCount > 0)
Line 9099: S0  uphy_CHsdschResourcesController_triggerMeasurements (gsmMidServerCount > 0)
Line 9120: [IRAT U2G]  uphy_CHsdschResourcesController_triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 9120: [IRAT U2G]  uphy_CHsdschResourcesController_triggerMeasurements: serverId=0x%x, startStopFsmState=%d(Retiring), numOfTotalGsmMidServer=%d, numOfTriggeredMidServer=%d, mid=%d
Line 9150: Hsdsch triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 9150: Hsdsch triggerMeasurements: requestType = %d, startStopTriggerCount = %d, startStopTriggerInterval = %d
Line 9156: S0  [IRAT U2G] Hsdsch triggerMeasurements: numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 9156: S0  [IRAT U2G] Hsdsch triggerMeasurements: numOfTriggeredMidServer %d is different from numOfFddMidServer %d
Line 9161: S0  [IRAT U2G] PchAndDrx triggerMeasurements: can't find out registeredInfo with gsmMid=%d
Line 9161: S0  [IRAT U2G] PchAndDrx triggerMeasurements: can't find out registeredInfo with gsmMid=%d
Line 9168: S0  [IRAT U2G] HSdsch  triggerMeasurements:(isAvailableGsmCellReselctionMgmt == TRUE)
Line 9168: S0  [IRAT U2G] HSdsch  triggerMeasurements:(isAvailableGsmCellReselctionMgmt == TRUE)
Line 9187: S0  [IRAT U2G] Hsdsch triggerMeasurements: no GSM mid server to trigger
Line 9187: S0  [IRAT U2G] Hsdsch triggerMeasurements: no GSM mid server to trigger
Line 9196: S0  [IRAT U2G] PchAndDrx triggerMeasurements: don't trigger GSM measurement in case interFreq is on going
Line 9196: S0  [IRAT U2G] PchAndDrx triggerMeasurements: don't trigger GSM measurement in case interFreq is on going
Line 9210: [EDRX] uphy_CHsdschResourcesController_getDrxCycleLength: hs_dsch_DrxCycleFach=%d
Line 9210: [EDRX] uphy_CHsdschResourcesController_getDrxCycleLength: hs_dsch_DrxCycleFach=%d
Line 9245: S0  uphy_CHsdschResourcesController_RfbackProcessing
Line 9245: S0  uphy_CHsdschResourcesController_RfbackProcessing
Line 9249: S0  uphy_CHsdschResourcesController_RfbackProcessing ( startStopDecodingController_ptr->isRfChangedForIrat == TRUE)
Line 9249: S0  uphy_CHsdschResourcesController_RfbackProcessing ( startStopDecodingController_ptr->isRfChangedForIrat == TRUE)
Line 9260: S0  uphy_CHsdschResourcesController_RfbackProcessing: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 9260: S0  uphy_CHsdschResourcesController_RfbackProcessing: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 9266: uphy_CHsdschResourcesController_RfbackProcessing: Antenna switched from EUTRA to UMTS
Line 9266: uphy_CHsdschResourcesController_RfbackProcessing: Antenna switched from EUTRA to UMTS
Line 9284: S0  uphy_CPchAndDrxResourcesController_RfbackProcessingg: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 9284: S0  uphy_CPchAndDrxResourcesController_RfbackProcessingg: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 9296: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing : UE did not camp to any frequency
Line 9296: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing : UE did not camp to any frequency
Line 9311: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing: RF Rx ON command exec failure Error %d, Additional Error %d
Line 9311: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing: RF Rx ON command exec failure Error %d, Additional Error %d
Line 9318: uphy_CPchAndDrxResourcesController_RfbackProcessing: RfRxOn
Line 9318: uphy_CPchAndDrxResourcesController_RfbackProcessing: RfRxOn
Line 9332: S0  RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9332: S0  RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9338: S0  RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 9338: S0  RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 9343: S0  RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 9343: S0  RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 9351: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing: sendResponseToUphyToken did not get time to run, so clear it
Line 9351: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing: sendResponseToUphyToken did not get time to run, so clear it
Line 9374: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing: RF UARFCN Error %d, Additional Error %d
Line 9374: S0  uphy_CPchAndDrxResourcesController_RfbackProcessing: RF UARFCN Error %d, Additional Error %d
Line 9417: PchAndDrx eutraCellReselectionMeasDone and finished RF back to UMTS: current (sfn)=(%d, %d), target StartStopDecodingFsmEventId=%d(eutraCellReselectionMeasDone)
Line 9417: PchAndDrx eutraCellReselectionMeasDone and finished RF back to UMTS: current (sfn)=(%d, %d), target StartStopDecodingFsmEventId=%d(eutraCellReselectionMeasDone)
Line 9425: PchAndDrx finished RF back to UMTS: current (sfn)=(%d), target StartStopDecodingFsmEventId=%d(RfBackFinished)
Line 9425: PchAndDrx finished RF back to UMTS: current (sfn)=(%d), target StartStopDecodingFsmEventId=%d(RfBackFinished)
Line 9504: uphy_CHsdschResourcesController_: Sfn=%d, Slot=%d, target StartStopDecodingFsmEventId=%d(fingerAllocationDone)
Line 9504: uphy_CHsdschResourcesController_: Sfn=%d, Slot=%d, target StartStopDecodingFsmEventId=%d(fingerAllocationDone)
Line 9525: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartSingleUpdate
Line 9525: S0  message creation failed in uphy_CPchAndDrxResourcesController_RequestMultipathMgmtStartSingleUpdate
Line 9540: S0  PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send failed
Line 9540: S0  PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send failed
Line 9554: PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send succeeded. Sfn=%d, Slot=%d
Line 9554: PchAndDrx RequestMultipathMgmtStartSingleUpdate: msg send succeeded. Sfn=%d, Slot=%d
Line 9574: S0  registeredInfo == NULL pointer
Line 9574: S0  registeredInfo == NULL pointer
Line 9581: [E-DRX Measurement]  registerServer: serverId=%d
Line 9581: [E-DRX Measurement]  registerServer: serverId=%d
Line 9585: [E-DRX Measurement]  registerServer: serverId=%d listed already
Line 9585: [E-DRX Measurement]  registerServer: serverId=%d listed already
Line 9598: uphy_CHsdschResourcesController_deregisterServer: serverId=%d
Line 9598: uphy_CHsdschResourcesController_deregisterServer: serverId=%d
Line 9602: uphy_CHsdschResourcesController_deregisterServer: serverId=%d not found
Line 9602: uphy_CHsdschResourcesController_deregisterServer: serverId=%d not found
Line 9740: setEqOtherCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9740: setEqOtherCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9787: setEqOtherCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9787: setEqOtherCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9836: setEqOtherCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9836: setEqOtherCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9971: setEqOtherCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 9971: setEqOtherCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10019: setEqOtherCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10019: setEqOtherCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10153: setEqServingCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10153: setEqServingCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10158: Cannot find multiPathInfo(%d, %d) from MPDB
Line 10158: Cannot find multiPathInfo(%d, %d) from MPDB
Line 10163: Cannot find cell(%d, %d) from MPDB
Line 10163: Cannot find cell(%d, %d) from MPDB
Line 10193: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10193: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10215: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10215: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10220: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10220: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10228: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10228: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10251: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10251: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10273: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10273: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10278: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10278: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10283: Cannot find Primary and Secondary serving cell from MPDB
Line 10283: Cannot find Primary and Secondary serving cell from MPDB
Line 10316: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10316: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10338: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10338: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10343: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10343: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10351: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10351: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10374: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10374: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10396: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10396: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10401: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10401: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10406: Cannot find Primary and Secondary serving cell from MPDB
Line 10406: Cannot find Primary and Secondary serving cell from MPDB
Line 10534: setEqServingCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10534: setEqServingCellInfo: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d
Line 10539: Cannot find multiPathInfo(%d, %d) from MPDB
Line 10539: Cannot find multiPathInfo(%d, %d) from MPDB
Line 10544: Cannot find cell(%d, %d) from MPDB
Line 10544: Cannot find cell(%d, %d) from MPDB
Line 10575: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10575: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10597: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10597: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10602: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10602: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10610: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10610: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10633: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10633: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10655: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10655: setEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10660: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10660: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10665: Cannot find Primary and Secondary serving cell from MPDB
Line 10665: Cannot find Primary and Secondary serving cell from MPDB
Line 10699: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10699: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10721: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10721: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10726: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10726: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10734: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10734: Cannot find Secondary serving cell from MPDB, so we will use Primary serving cell from MPDB
Line 10757: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10757: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10779: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10779: setEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10784: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10784: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10789: Cannot find Primary and Secondary serving cell from MPDB
Line 10789: Cannot find Primary and Secondary serving cell from MPDB
Line 10900: InitEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10900: InitEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 10919: InitEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10919: InitEqServingCellInfo FA2: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 10923: InitEqServingCellInfo FA2: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10923: InitEqServingCellInfo FA2: Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 10928: InitEqServingCellInfo FA2: Cannot find cell Infomation(%d, %d) from MPDB
Line 10928: InitEqServingCellInfo FA2: Cannot find cell Infomation(%d, %d) from MPDB
Line 10986: DSDS: Unable to send RF pause done message to DSLRC
Line 10986: DSDS: Unable to send RF pause done message to DSLRC
Line 10990: DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 10990: DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 11043: InitEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 11043: InitEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from multiPathInfo
Line 11062: InitEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 11062: InitEqServingCellInfo FA3: PscrCode=%d cpichRscp=%d mpOffset[0]=%d mpEng[0]=%d mpOffset[1]=%d mpEng[1]=%d from oldMultiPathInfo
Line 11066: InitEqServingCellInfo FA3 Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 11066: InitEqServingCellInfo FA3 Cannot find multiPathInfo and oldMultiPathInfo(%d, %d) from MPDB
Line 11071: InitEqServingCellInfo FA3 Cannot find cell Infomation(%d, %d) from MPDB
Line 11071: InitEqServingCellInfo FA3 Cannot find cell Infomation(%d, %d) from MPDB
Line 11116: S0  E_DRX: In uphy_CHsdschResources_isDecodingDone_EDrx isEdrxDecodingComplete %d
Line 11116: S0  E_DRX: In uphy_CHsdschResources_isDecodingDone_EDrx isEdrxDecodingComplete %d
Line 11119: S0  E_DRX: DSP decoding done call handle stopping to move to retiring state after one slot.
Line 11119: S0  E_DRX: DSP decoding done call handle stopping to move to retiring state after one slot.
Line 11131: S0  E_DRX: DSP decoding done wait for intrameasurement completion
Line 11131: S0  E_DRX: DSP decoding done wait for intrameasurement completion
Line 11136: S0  E_DRX: Resumbitting Decoding done indicator token
Line 11136: S0  E_DRX: Resumbitting Decoding done indicator token
Line 11167: [E-DRX Measurement] intraFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(intraFrequencyCellReselectionMeasDone)
Line 11167: [E-DRX Measurement] intraFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(intraFrequencyCellReselectionMeasDone)
Line 11191: S0 [E-DRX Measurement]  interFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(interFrequencyCellReselectionMeasDone)
Line 11191: S0 [E-DRX Measurement]  interFrequencyCellReselectionMeasDone: current (sfn, slot)=(%d, %d), target StartStopDecodingFsmEventId=%d(interFrequencyCellReselectionMeasDone)
Line 11213: uphy_CPchAndDrxResourcesController_gsmCellReselectionMeasDone: Not In Proper state to handle!
Line 11213: uphy_CPchAndDrxResourcesController_gsmCellReselectionMeasDone: Not In Proper state to handle!
Line 11225: PchAndDrx gsmCellReselectionMeasDone: current (sfn)=(%d), target StartStopDecodingFsmEventId=%d(gsmCellReselectionMeasDone)
Line 11225: PchAndDrx gsmCellReselectionMeasDone: current (sfn)=(%d), target StartStopDecodingFsmEventId=%d(gsmCellReselectionMeasDone)
Line 11255: S0  [%d] Carrier Release: HS release requested before HS CONFIG activation time
Line 11255: S0  [%d] Carrier Release: HS release requested before HS CONFIG activation time
Line 11263: S0  [%d] Carrier Release: HS release requested before HS MODIFY activation time
Line 11263: S0  [%d] Carrier Release: HS release requested before HS MODIFY activation time
Line 11271: S0  [%d] Carrier Release: HS release requested before HS HARQ REPLACE activation time
Line 11271: S0  [%d] Carrier Release: HS release requested before HS HARQ REPLACE activation time
Line 11289:  [%d] Clear the ongoing config/release
Line 11289:  [%d] Clear the ongoing config/release
Line 11333: uphy_CHsDschResourcesController_DebugPrint: cmdHandler %x cmdPool %x cmdId %d fbId %d numOfCmdIdInstances %d uhalCmd %x
Line 11380: S0  [3C-HSDPA] uphy_CHsdschResourcesController_SetSecondaryCarrierConfigBitString, st sec. carrier IsDlSecondaryCellPresent is now FALSE
Line 11380: S0  [3C-HSDPA] uphy_CHsdschResourcesController_SetSecondaryCarrierConfigBitString, st sec. carrier IsDlSecondaryCellPresent is now FALSE
Line 11386: S0  [3C-HSDPA] uphy_CHsdschResourcesController_SetSecondaryCarrierConfigBitString, 2nd sec. carrier IsDlSecondaryCellPresent is now FALSE
Line 11386: S0  [3C-HSDPA] uphy_CHsdschResourcesController_SetSecondaryCarrierConfigBitString, 2nd sec. carrier IsDlSecondaryCellPresent is now FALSE
Line 11391: S0  [3C-HSDPA] hsdschConfigMsgDeadlineInfo.msg is NULL
Line 11391: S0  [3C-HSDPA] hsdschConfigMsgDeadlineInfo.msg is NULL
Line 11477: S0  Send GSM resel meas done indication delayCount %d
Line 11477: S0  Send GSM resel meas done indication delayCount %d
Line 11555: S0  uphy_CHsdschResourcesController_configDuringResume isEfach = %d
Line 11555: S0  uphy_CHsdschResourcesController_configDuringResume isEfach = %d
Line 11565: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 11565: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 11569: S0  [3C-HSDPA] EHalHsScchConfigCmd called
Line 11569: S0  [3C-HSDPA] EHalHsScchConfigCmd called
Line 11576: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 11576: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 11580: S0  [3C-HSDPA] EHalHsPdschHarqConfigCmd called
Line 11580: S0  [3C-HSDPA] EHalHsPdschHarqConfigCmd called
Line 11591: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 11591: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 11595: S0  [3C-HSDPA] EHalHsDpcchConfigCmd called
Line 11595: S0  [3C-HSDPA] EHalHsDpcchConfigCmd called
Line 11605: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 11605: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 11609: S0  [3C-HSDPA] EHalHsPdschEnableCmd called
Line 11609: S0  [3C-HSDPA] EHalHsPdschEnableCmd called
Line 11616: S0  uphy_CHsdschResourcesController_configDuringResume: HSDPA is not configured
Line 11616: S0  uphy_CHsdschResourcesController_configDuringResume: HSDPA is not configured
Line 11628: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 11628: S0  EHalHsScchConfigCmd fail - uhal_Cmd_exec
Line 11632: S0  [3C-HSDPA] EHalHsScchConfigCmd called
Line 11632: S0  [3C-HSDPA] EHalHsScchConfigCmd called
Line 11639: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 11639: S0  EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 11643: S0  [3C-HSDPA] EHalHsPdschHarqConfigCmd called
Line 11643: S0  [3C-HSDPA] EHalHsPdschHarqConfigCmd called
Line 11652: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 11652: S0  EHalHsDpcchConfigCmd fail - uhal_Cmd_exec
Line 11656: S0  [3C-HSDPA] EHalHsDpcchConfigCmd called
Line 11656: S0  [3C-HSDPA] EHalHsDpcchConfigCmd called
Line 11666: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 11666: S0  EHalHsPdschEnableCmd fail - uhal_Cmd_exec
Line 11670: S0  [3C-HSDPA] EHalHsPdschEnableCmd called
Line 11670: S0  [3C-HSDPA] EHalHsPdschEnableCmd called
Line 11681: S0  uphy_CHsdschResourcesController_configDuringResume: DC HSDPA is not configured
Line 11681: S0  uphy_CHsdschResourcesController_configDuringResume: DC HSDPA is not configured
Line 11708: S0  uphy_CHsdschResourcesController_releaseDuringPause
Line 11708: S0  uphy_CHsdschResourcesController_releaseDuringPause
Line 11721: S0  EHalHsDpcchReleaseCmd failed
Line 11721: S0  EHalHsDpcchReleaseCmd failed
Line 11745: S0 EHalHsdpaDlEqualizerReleaseCmd failed
Line 11745: S0 EHalHsdpaDlEqualizerReleaseCmd failed
Line 11760: S0 EHalHsPdschDisableCmd failed
Line 11760: S0 EHalHsPdschDisableCmd failed
Line 11772: S0  uphy_CHsdschResourcesController_releaseDuringPause: HSDPA is not configured
Line 11772: S0  uphy_CHsdschResourcesController_releaseDuringPause: HSDPA is not configured
Line 11783: S0 EHalHsScchReleaseCmd failed
Line 11783: S0 EHalHsScchReleaseCmd failed
Line 11807: S0 EHalHsdpaDlEqualizerReleaseCmd failed
Line 11807: S0 EHalHsdpaDlEqualizerReleaseCmd failed
Line 11822: S0 EHalHsPdschDisableCmd failed
Line 11822: S0 EHalHsPdschDisableCmd failed
Line 11838: S0  uphy_CHsdschResourcesController_releaseDuringPause: DC HSDPA is not configured
Line 11838: S0  uphy_CHsdschResourcesController_releaseDuringPause: DC HSDPA is not configured
Line 11857: S0 EHalHsdpaDlEqualizerReleaseCmd failed
Line 11857: S0 EHalHsdpaDlEqualizerReleaseCmd failed
Line 11883: DSDS: HSDSCHResourcesController Unable to send RF release done message to DSLRC
Line 11883: DSDS: HSDSCHResourcesController Unable to send RF release done message to DSLRC
Line 11890: DSDS: HSDSCHResourcesController sendRfReleaseDone sent to DSLRC interface with %d
Line 11890: DSDS: HSDSCHResourcesController sendRfReleaseDone sent to DSLRC interface with %d
Line 11899: DSDS: HS-DSCH Controller: Send RF RESUME received from DSLRC interface to StartstopFSM
Line 11899: DSDS: HS-DSCH Controller: Send RF RESUME received from DSLRC interface to StartstopFSM
Line 11956: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_process)  primary carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, hsDschServingScrCode is %d
Line 11956: S0  [3C-HSDPA] (uphy_CHsdschResourcesController_process)  primary carrier:  prevHsdschRefUarfcn is %d, hsdschRefUarfcn is %d, hsDschServingScrCode is %d
Line 11978: EUphyHsdschResourcesControllerMsgId_Config prevMessage =%d intraFreqOtherCellKeep=%d pre_uarfcn=%d uarfcn=%d
Line 11978: EUphyHsdschResourcesControllerMsgId_Config prevMessage =%d intraFreqOtherCellKeep=%d pre_uarfcn=%d uarfcn=%d
Line 12061: SendHSDSCHConfigOrReleaseAfterIratMeas: hdschresourcecontroller pointer
Line 12061: SendHSDSCHConfigOrReleaseAfterIratMeas: hdschresourcecontroller pointer
Line 12154: IRAT Measurement complete Trigger Primary/Secondary HS config/release:  isCfgRelWaitingForIRATCompltetion(primary) : %d, isCfgRelWaitingForIRATCompltetion(Secondary) : %d
Line 12154: IRAT Measurement complete Trigger Primary/Secondary HS config/release:  isCfgRelWaitingForIRATCompltetion(primary) : %d, isCfgRelWaitingForIRATCompltetion(Secondary) : %d
Line 12192: uphy_CHsDschResourcesController_sendDirectRfRequest: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d; Result: %d
Line 12192: uphy_CHsDschResourcesController_sendDirectRfRequest: requestDslrcRfAccess sent to DSLRC interface from %d with cause %d and time %d; Result: %d
