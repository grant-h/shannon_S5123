Line 256: BCHController:ARRAY FREED sib_array_ptr = %d
Line 284: FachController: CheckAndSelectMeasGap RepLength = %d, RepPeriod = %d, isFachOccasion = %d
Line 320: FachController: process(), Received message = %d
Line 331: FachController: process(), Stopping MGM FACH Occasions
Line 337: FachController: process(), Config received without the preceding release
Line 354: [IRAT U2G]  FACH GSM GAP NOT STARTED
Line 364: ST%d T_DSDS:FACH controller receives Rf Use Response from DSL1RC Message interface
Line 370: ST%d T_DSDS:uphy_CFachResourcesController_process: RF pause received from DSL1RC interface
Line 376: ST%d T_DSDS: tphy_CFachResourcesController_process: Reset FACH configuration to init
Line 389: tphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 391: ST%d HPlus T_DSDS: tphy_CFachResourcesController_process:Pause received in endecoding state
Line 398: ST%d T_DSDS:tphy_CFachResourcesController_process: RF not in use
Line 408: ST%d T_DSDS:tphy_CFachResourcesController_process: RF resume received from DSL1RC interface
Line 411: ST%d T_DSDS: tphy_CFachResourcesController_process: Restart FACH configuration
Line 421: ST%d Hplus T_DSDS: tphy_CFachResourcesController_process.Resume received
Line 426: ST%d T_DSDS: tphy_CFachResourcesController_process: Enable FACH decoding
Line 434: ST%d T_DSDS: uphy_CFachResourcesController_process: Restart FACH decoding
Line 441: ST%d Hplus T_DSDS: tphy_CFachResourcesController_process.Resume received
Line 452: ST%d T_DSDS: ETphyFachResourcesControllerMsgId_RfUseResumeReq Rf Pause not enabled probably released from URRC
Line 464: FachController: process(), CellTrackingInd, Error reading config message
Line 475: FachController: process(), FACH Measurement Occasion is configured
Line 481: FachController: process(), FACH Measurement Occasion is not configured
Line 495: FachController: process(), ListenArfcnTransitionAck not expected for gap pattern utilities
Line 506: Activation time received in Fach Release, activation time = %d
Line 550: FachController: process(), Release, FMO is configured
Line 556: FachController: process(), Release, FMO is not configured
Line 559: FachController: process(), Stopping MGM FACH Occasions
Line 572: [IRAT U2G]  FACH GSM GAP NOT STARTED
Line 580: FachController: process(), Unknown message
Line 664: FachController: requestCellTracking(), current DL UARFCN = %d, configured UARFCN = %d, current DL pScrcode = %d, configured pScrCode = %d
Line 683: FachController: requestCellTracking(), Error sending message to CellSFNServer
Line 752: send
Line 775: FachController: enableEnDecoding(), RSN = %d, SFN = %d
Line 795: [IRAT U2G] GSM midserver available
Line 801: [IRAT U2G] No GSM midserver or already Started
Line 820: FachController: enableEnDecoding(), M_REP = %d, C-RNTI(H) = %x, C-RNTI(L) = %x, Max TTI = %d
Line 833: FachController: enableEnDecoding(), FACH Measurement Occasion is not configured
Line 868: ST%d T_DSDS:Reject received while updating reason to PS for FACH :: isRfInUseStatus %d
Line 926: FachController: uSfnIdx %d bIsgapAvailable %d matched count %d sfn_index_to_read 0x%x
Line 930: FachController: TDMgapOccasion(), currentCfn= %d ,writing to buffer value %d ,StartFrame
Line 934: FachController: TDMgapOccasion(), currentCfn= %d ,writing to buffer value %d ,MiddleFrame
Line 937: FachController: TDMgapOccasion(), currentCfn= %d ,writing to buffer value %d ,EndFrameFrame
Line 975: FachController: TDMgapOccasionCalc(), RSN = %d, TDMgap RSN = %d,tdmGapStart =%d,currentCfn= %d
Line 1022: INFO tphy_IsUlRachReadyForData %08d, isRachReady %d
Line 1071: FachController: sendConfirmationMsg(), Config success, RSN = %d, SFN = %d, UARFCN = %d, scrCode = %d
Line 1092: FachController: sendConfirmationMsg(),  Config failure, RSN = %d, SFN = %d
Line 1105: FachController: sendConfirmationMsg(), Release, RSN = %d, SFN = %d, UARFCN = %d, scrCode = %d
Line 1134: Fach controller doesn't expect to send anything other than release Cnf to interRatCoordinator
Line 1143: send
Line 1154: confirmMsg is NULL in sendConfirmationMsg
Line 1184: only Config and release need confirm
Line 1200: send
Line 1371: FACH configThalInstancesStf state %d, isDsReconfig %d
Line 1388: DlSlotInfoArray==NULL
Line 1408: Insufficient Phychs
Line 1455: FachController: configTHAL(), SCCPCH config failed
Line 1461: FachController: configTHAL(), SCCPCH configured for UARFCN = %d, cellParamId = %d
Line 1481: Not enough free Trch-s
Line 1511: trCh config failed
Line 1534: trCh config failed
Line 1556: Not enough free Cctrch-s
Line 1564: DpchController: configTHAL(), cctrchNr = %d, freeCctrchsBitStream = %d
Line 1604: DlCcTrCh config failed
Line 1622: Config Thal - invalid state %d
Line 1624: Config Thal - invalid state
Line 1646: Config Thal - unknown state %d
Line 1648: Config Thal - unknown state
Line 1658: FachController: THAL config failed
Line 1759: FachController: startThalInstances(), RSN = %d, SFN = %d, slot = %d
Line 1769: Enable CcTrCh - thal_CCmd_exec
Line 1847: FachController: scheduleDecodingPreparation(), RSN = %d, FACH decoder will be prepared at RSN = %d
Line 1850: FachController: scheduleDecodingPreparation(), SFN = %d, FACH decoding will start at SFN = %d
Line 1853: FachController: scheduleDecodingPreparation(), FACH decoding preparation will start at SFN = %d
Line 1899: FachController: scheduleGap(), RSN = %d, FMO RSN = %d, SFN = %d, FMO SFN = %d
Line 1917: FachController: scheduleWakeup()
Line 1935: tphy_CFachResourcesController_scheduleSleeping
Line 1995: FachController: MGMNotification(), RSN = %d, FMO RSN = %d
Line 1997: FachController: MGMNotification(), slotsUntil = %d
Line 2017: FachController: MGMNotification(), MGMFachOccasionGap() will be called at RSN = %d
Line 2050: FachController: mgmFachOccasionGap(), RSN = %d, FMO RSN = %d, SFN =%d, FMO SFN = %d
Line 2101: FachController: mgmFachOccasionGap(), FMO CFN = %d, Max TTI = %d ms bIsgapAvailable %d uSfnIdx %d uFrameIdx %d sfn_index_to_read 0x%x
Line 2220: tphy_CFachResourcesController triggerMeasurements
Line 2232: FachController: getFachGapSFN(), FMO SFN = %d
Line 2250: FachController: TDMgapOccasionSTF(), tdmGapStart = %d, repLength = %d,repPeriod =%d,currentCfn= %d
Line 2341: Fach release acted upon at time = %d
Line 2359: FachController: process(), Release, FMO is configured
Line 2368: FachController: process(), Release, FMO is not configured
Line 2371: FachController: process(), Stopping MGM FACH Occasions
Line 2384: [IRAT U2G]  FACH GSM GAP NOT STARTED
Line 2416: ST%d T_DSDS:Resume CcTrCh - thal_Cmd_exec failed
Line 2421: ST%d T_DSDS: Resume CcTrCh since Resume received from DSL1RC
