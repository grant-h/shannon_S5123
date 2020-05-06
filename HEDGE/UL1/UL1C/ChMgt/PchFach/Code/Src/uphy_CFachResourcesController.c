Line 269: Instance created for stackId %d
Line 269: Instance created for stackId %d
Line 441: S0  FACH for CTCH config
Line 441: S0  FACH for CTCH config
Line 449: S0  uphy_CFachResourcesController_process: Config without the preceding release
Line 449: S0  uphy_CFachResourcesController_process: Config without the preceding release
Line 469: DSDS:FACH controller receives Rf Use Response from DSLRC Message interface
Line 469: DSDS:FACH controller receives Rf Use Response from DSLRC Message interface
Line 475: S0  DSDS:uphy_CFachResourcesController_process: RF pause received from DSLRC interface
Line 475: S0  DSDS:uphy_CFachResourcesController_process: RF pause received from DSLRC interface
Line 481: S0  DSDS: uphy_CFachResourcesController_process: Reset FACH configuration to init
Line 481: S0  DSDS: uphy_CFachResourcesController_process: Reset FACH configuration to init
Line 503: S0  uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 503: S0  uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 507: S0  3G3G DSDS: uphy_CFachResourcesController_process: Pause received in endecoding state
Line 507: S0  3G3G DSDS: uphy_CFachResourcesController_process: Pause received in endecoding state
Line 516: S0  DSDS:uphy_CFachResourcesController_process: RF not in use
Line 516: S0  DSDS:uphy_CFachResourcesController_process: RF not in use
Line 526: S0  DSDS:uphy_CFachResourcesController_process: RF resume received from DSLRC interface
Line 526: S0  DSDS:uphy_CFachResourcesController_process: RF resume received from DSLRC interface
Line 529: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH configuration
Line 529: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH configuration
Line 535: S0  DSDS: uphy_CFachResourcesController_process: Enable FACH decoding
Line 535: S0  DSDS: uphy_CFachResourcesController_process: Enable FACH decoding
Line 554: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH decoding
Line 554: S0  DSDS: uphy_CFachResourcesController_process: Restart FACH decoding
Line 571: S0  DSDS: EUphyFachResourcesControllerMsgId_RfUseResumeReq Rf Pause not enabled probably released from URRC
Line 571: S0  DSDS: EUphyFachResourcesControllerMsgId_RfUseResumeReq Rf Pause not enabled probably released from URRC
Line 583: S0  probably oustanding transaction Id :FachResourcesController_ptr-> configMsg=0 probably oustanding transaction Id
Line 583: S0  probably oustanding transaction Id :FachResourcesController_ptr-> configMsg=0 probably oustanding transaction Id
Line 606: S0  ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 606: S0  ListenArfcnTransitionAck not expected for Gap Pattern Utilities
Line 642: S0  gphy_IratGsmOff() called as no OutstandingGsmCellReselMeasRequests are present
Line 642: S0  gphy_IratGsmOff() called as no OutstandingGsmCellReselMeasRequests are present
Line 654: S0  No: Of OutstandingGsmCellReselMeasRequests = %d
Line 654: S0  No: Of OutstandingGsmCellReselMeasRequests = %d
Line 665: process - unknown msgId
Line 665: process - unknown msgId
Line 745: FachController: previous [UARFCN PSC]=[%d %d], new [UARFCN PSC]=[%d %d]
Line 745: FachController: previous [UARFCN PSC]=[%d %d], new [UARFCN PSC]=[%d %d]
Line 748: FachController: isRrcConfigBchExist %d
Line 748: FachController: isRrcConfigBchExist %d
Line 766: S0  Reference cell changed to rlNr=%d, PSC=%d
Line 766: S0  Reference cell changed to rlNr=%d, PSC=%d
Line 777: S0  RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 777: S0  RlReferenceConfigCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 793: S0  Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 793: S0  Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 810: S0  Update Framework SFN: oldSfn=%d, newSfn=%d
Line 810: S0  Update Framework SFN: oldSfn=%d, newSfn=%d
Line 839: S0  cellSfnReqMsg send failure
Line 839: S0  cellSfnReqMsg send failure
Line 845: S0  ### Critical Error cnfMsg = NULL (%d)
Line 845: S0  ### Critical Error cnfMsg = NULL (%d)
Line 965: send
Line 965: send
Line 971: S0  ### Critical Error cellSfnCancelReqMsg = NULL (%d)
Line 971: S0  ### Critical Error cellSfnCancelReqMsg = NULL (%d)
Line 1004: RSN=%d:FachController enableEnDecoding: Sfn=%d
Line 1004: RSN=%d:FachController enableEnDecoding: Sfn=%d
Line 1027: uphy_CFachResourcesController_enableEnDecoding: change to wakeup SFN  = %d
Line 1027: uphy_CFachResourcesController_enableEnDecoding: change to wakeup SFN  = %d
Line 1042: uphy_CFachResourcesController_enableEnDecoding: start level-1 scheduling in wakingDuring
Line 1042: uphy_CFachResourcesController_enableEnDecoding: start level-1 scheduling in wakingDuring
Line 1071: uphy_CFachResourcesController_enableEnDecoding: No short CTCHPeriod, CTCH decoding token to be scheduled in schedulewakeup
Line 1071: uphy_CFachResourcesController_enableEnDecoding: No short CTCHPeriod, CTCH decoding token to be scheduled in schedulewakeup
Line 1139: S0  DSDS: Reject received while updating reason to PS for FACH :: isRfInUseStatus %d
Line 1139: S0  DSDS: Reject received while updating reason to PS for FACH :: isRfInUseStatus %d
Line 1214: RSN=%d:FachController Send success: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1214: RSN=%d:FachController Send success: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1231: RSN=%d:FachController SendFail: Sfn=%d
Line 1231: RSN=%d:FachController SendFail: Sfn=%d
Line 1243: S0  uphy_CFachResourcesController_sendConfirmationMsg: processing CUPHY_BG_PCH_RESOURCES_CONFIG_REQ (%x)
Line 1243: S0  uphy_CFachResourcesController_sendConfirmationMsg: processing CUPHY_BG_PCH_RESOURCES_CONFIG_REQ (%x)
Line 1258: RSN=%d:FachController Released: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1258: RSN=%d:FachController Released: Sfn=%d, Uarfcn=%d, scrCode=%d
Line 1297: S0  FACH for CTCH release by inter RAT coordinator
Line 1297: S0  FACH for CTCH release by inter RAT coordinator
Line 1311: Fach controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1311: Fach controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1321: send
Line 1321: send
Line 1326: S0  ### Critical Error cnfMsg = NULL (%d)
Line 1326: S0  ### Critical Error cnfMsg = NULL (%d)
Line 1335: confirmMsg is NULL in sendConfirmationMsg
Line 1335: confirmMsg is NULL in sendConfirmationMsg
Line 1350: S0  FACH for CTCH config CNF(cctrchNr =%d)
Line 1350: S0  FACH for CTCH config CNF(cctrchNr =%d)
Line 1378: S0  Stop CcTrCh - uhal_Cmd_exec
Line 1378: S0  Stop CcTrCh - uhal_Cmd_exec
Line 1396: S0  FACH for CTCH release CNF
Line 1396: S0  FACH for CTCH release CNF
Line 1415: only Config and release need confirm
Line 1415: only Config and release need confirm
Line 1430: send
Line 1430: send
Line 1594: S0  UhalConfig in DsSuspend State: Returning Token
Line 1594: S0  UhalConfig in DsSuspend State: Returning Token
Line 1637: S0  engagedRlPhychLinksArray == NULL pointer
Line 1637: S0  engagedRlPhychLinksArray == NULL pointer
Line 1649: S0  No more free RL-s
Line 1649: S0  No more free RL-s
Line 1670: S0  rakeRl config failed
Line 1670: S0  rakeRl config failed
Line 1701: S0  Not enough free Rake-s
Line 1701: S0  Not enough free Rake-s
Line 1704: FachController: release phychannnel[0], current freeRakesBitStream 0x%x 
Line 1704: FachController: release phychannnel[0], current freeRakesBitStream 0x%x 
Line 1719: S0  PchAndDrx releasePchAndDrxUhalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 1719: S0  PchAndDrx releasePchAndDrxUhalInstances: DlPhychReleaseCmd exec failed. ErrCode=%d, AddErrCode=%d
Line 1754: S0  rakePhyCh config failed
Line 1754: S0  rakePhyCh config failed
Line 1773: S0  Not enough free Rake-s
Line 1773: S0  Not enough free Rake-s
Line 1790: S0  rakePhyCh config failed
Line 1790: S0  rakePhyCh config failed
Line 1823: S0  rlPhyCh config failed
Line 1823: S0  rlPhyCh config failed
Line 1853: S0  Not enough free Trch-s
Line 1853: S0  Not enough free Trch-s
Line 1882: S0  trCh config failed
Line 1882: S0  trCh config failed
Line 1895: S0  trCh config CurrentTrChIndex = %d
Line 1895: S0  trCh config CurrentTrChIndex = %d
Line 1899: S0  ***trCh config trchNr = %d freeTrchsBitStream %x
Line 1899: S0  ***trCh config trchNr = %d freeTrchsBitStream %x
Line 1908: S0  trCh config failed
Line 1908: S0  trCh config failed
Line 1931: S0  Not enough free Cctrch-s
Line 1931: S0  Not enough free Cctrch-s
Line 1983: S0  DlCcTrCh config failed
Line 1983: S0  DlCcTrCh config failed
Line 2000: S0  Config Uhal - invalid state %d
Line 2000: S0  Config Uhal - invalid state %d
Line 2021: S0  Config Uhal - invalid state %d
Line 2021: S0  Config Uhal - invalid state %d
Line 2029: S0  Fach UhalCfg Failed
Line 2029: S0  Fach UhalCfg Failed
Line 2125: RSN=%d:uphy_CFachResourcesController_startUhalInstances: startFachSfn=%d : startFachRsn=%d
Line 2125: RSN=%d:uphy_CFachResourcesController_startUhalInstances: startFachSfn=%d : startFachRsn=%d
Line 2135: S0  Enable CcTrCh - uhal_Cmd_exec
Line 2135: S0  Enable CcTrCh - uhal_Cmd_exec
Line 2217: FachController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 2217: FachController scheduleDecodingPreparation: currentRSN=%d: FACH decode will prepared at timeStampRsn=%d and Sfn=%d, decode start at listenSfn=%d
Line 2278: FachController scheduleGap: C_RNTI(High 32bits)=0x%08x, C_RNTI(Low 32bits)=0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 2278: FachController scheduleGap: C_RNTI(High 32bits)=0x%08x, C_RNTI(Low 32bits)=0x%08x, M_REP=%d, maxTTI=%d, init FMO=%d, FMO cycle=%d
Line 2289: FachController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, timingOffsetSlots=%d, decodePreparation=%d
Line 2289: FachController scheduleGap: RSN=%d, gapSfn(FMO)=%d, gapRsn=%d, timeToGo=%d, Fach Occasion=%d, timingOffsetSlots=%d, decodePreparation=%d
Line 2309: S0  uphy_CFachResourcesController_scheduleWakeup
Line 2309: S0  uphy_CFachResourcesController_scheduleWakeup
Line 2326: S0  uphy_CFachResourcesController_scheduleSleeping
Line 2326: S0  uphy_CFachResourcesController_scheduleSleeping
Line 2342: S0  uphy_CFachResourcesController_resynch
Line 2342: S0  uphy_CFachResourcesController_resynch
Line 2437: FachController VGMNotification: slotsUntil=%d, current RSN=%d, FMO RSN=%d
Line 2437: FachController VGMNotification: slotsUntil=%d, current RSN=%d, FMO RSN=%d
Line 2510: FachController vgmFachOccasionGap: current RSN=%d, current sfn=%d, FMO sfn=%d, FMO cfn=%d
Line 2510: FachController vgmFachOccasionGap: current RSN=%d, current sfn=%d, FMO sfn=%d, FMO cfn=%d
Line 2645: S0  uphy_CFachResourcesController triggerMeasurements
Line 2645: S0  uphy_CFachResourcesController triggerMeasurements
Line 2672: S0  DSDS:Resume CcTrCh - uhal_Cmd_exec failed
Line 2672: S0  DSDS:Resume CcTrCh - uhal_Cmd_exec failed
Line 2677: S0  DSDS: Resume CcTrCh since Resume received from DSLRC
Line 2677: S0  DSDS: Resume CcTrCh since Resume received from DSLRC
Line 2687: [Fach Release] SendFachReleaseAfterIratMeas
Line 2687: [Fach Release] SendFachReleaseAfterIratMeas
Line 2705: S0  uphy_CFachResourcesController_triggerInternalPauseReq: triggering EUphyResourcesConfigurationEventId_RfUsePauseReq
Line 2705: S0  uphy_CFachResourcesController_triggerInternalPauseReq: triggering EUphyResourcesConfigurationEventId_RfUsePauseReq
Line 2722: S0  uphy_CFachResourcesController_triggerInternalResumeReq: triggering EUphyResourcesConfigurationEventId_RfUseResume
Line 2722: S0  uphy_CFachResourcesController_triggerInternalResumeReq: triggering EUphyResourcesConfigurationEventId_RfUseResume
