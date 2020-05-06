Line 200: dlDchProcessor == NULL
Line 216: CurrentCtfcInfo == NULL
Line 240: theActivationTimeQueue== NULL
Line 252: theActivationTimeQueue== NULL
Line 269: blerCallbacksMidMap== NULL
Line 273: Mem allocation failed for blerCallbacksMidMap
Line 428: DCH Release subframeCnt %d bNfreqRel %d
Line 459: tphy_CDedicatedModeController_process: isNfreqConfig =%d
Line 472: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 564: Processing hho request with activationTimeTokenPtr set
Line 570: Processing hho request with isHHOTakingPlace set
Line 575: Processing hho request with hhoMsg set
Line 650: Boundary Rsn %d Current Rsn %d Boundary Cfn %d ActivationTime %d submitted to framework to process hho msg at Rsn %d
Line 665: isRollBack %d iRatHoFlag %d
Line 707: Serving cell disable for dedicated mode release
Line 713: Release time info CurrentCfn = %d, CurrentCfnToActDiff %d, activationTime %d, CurrentRsn %d, activationTimeRsn %d
Line 716: Release Mem info dedicatedModeController_ptr %d, message = %d
Line 800: Unknown subid for Cell Synchro Ind
Line 802: Cell Synchro Rejected
Line 814: Unknown subid for Cell Sfn Ind
Line 816: Cell Sfn Rejected
Line 832: Invalid MsgId=%d
Line 1053: tphy_CUlDchProcessor_isUlEstablished == TRUE
Line 1061: ST%d T_DSDS:DCH controller receives Rf Use Response from DSL1RC Message interface
Line 1067: ST%d T_DSDS:tphy_CDedicatedModeController_process: RF pause received from DSL1RC interface
Line 1075: ST%d T_DSDS: tphy_CDedicatedModeController_process: Reset DCH configuration to init
Line 1092: Freeing up AllowSIRUpdateToken in pause
Line 1100: ST%d T_DSDS: tphy_CDedicatedModeController_process: DCH Endecoing State
Line 1107: ST%d T_DSDS:uphy_CDedicatedModeController_process: RF not in use
Line 1117: ST%d T_DSDS:tphy_CDedicatedModeController_process: RF resume received from DSL1RC interface isDsSuspend %d 
Line 1121: ST%d T_DSDS: tphy_CDedicatedModeController_process: Restart DCH configuration
Line 1132: ST%d Hplus T_DSDS: tphy_CDedicatedModeController_process: Resume received
Line 1137: ST%d T_DSDS: tphy_CDedicatedModeController_process: Enable DCH decoding
Line 1150: Freeing up AllowSIRUpdateToken before issuing a new one
Line 1163: ST%d Hplus T_DSDS: tphy_CDedicatedModeController_process: Resume Received
Line 1175: Freeing up AllowSIRUpdateToken before issuing a new one
Line 1193: ST%d T_DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 1203: Invalid MsgId=%d
Line 1213: Send CellTrackingInd
Line 1262: Measurement Utility :requestOneCellSynchro:cellSynchroReqMsg == NULL pointer
Line 1277: DCH controller: Problem in sending RcellSynchroReqMsg req message to SearcherController
Line 1299: CellSfnReqMsg == NULL pointer
Line 1319: Cant Request SFN
Line 1455:  DCH configThalInstancesStf: isDsReconfig %d state %d
Line 1459: DCH  configThalInstancesStf in DsSuspend State: Returning Token
Line 1473: DlSlotInfoArray==NULL
Line 1505: Insufficient Phychs
Line 1560: DedModeController: configTHAL(), DPCH config failed
Line 1568: DPCH configured for UARFCN = %d, cellParamId = %d
Line 1588: Not enough free Trch-s
Line 1624: trCh config failed
Line 1654: Not enough free Cctrch-s
Line 1671: DpchController: configTHAL(), Engaged TRCH str[0x%x] for (%d) CCTRCH
Line 1678: DpchController: configTHAL(), cctrchNr = %d, freeCctrchsBitStream = %d
Line 1726: DlCcTrCh config failed
Line 1756: tphy_CDedicatedModeController_ConfigThalStf: isCellTrackingRequired =%d
Line 1773: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 1786: tphy_CDedicatedModeController_ConfigThalStf: isCellTrackingRequired =%d
Line 1800: TPHY UlTrchConfig
Line 1826: Not enough free UlTrChs
Line 1831: UlTrch Id %d Mapped Id %d
Line 1839: UlTrCh config failed
Line 1860: TPHY UlPhychConfig
Line 1863: UlPhych config failed
Line 1880: Dedi_Mod_Cont: configureDlPhyCh(), DlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 1896: TPHY StateCompleting
Line 1938: DedModeController: configTHAL(), qualityTarget = %d, qualityTargetTrChId = %d
Line 1943: DedModeController: configTHAL(), Initial target SIR = %d
Line 1958: Unknown state %d
Line 1964: DedicatedModeController: THAL config failed
Line 2053: Release UlTrCh - thal_CCmd_exec
Line 2100: TPHY UL Dpch Release
Line 2114: Corrupt Ul TrChMappingTable
Line 2123: Release UlTrCh - uhal_CCmd_exec
Line 2136: nUlTrChs %d Array Index Out of bound
Line 2175: Dch releaseNotification: isDsReconfig %d  isDsRelease %d
Line 2187: tphy_CDedicatedModeController_releaseNotification: isNfreqConfig =%d
Line 2201: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 2212: tphy_CDedicatedModeController_releaseNotification: NFreq already release due to release message or not configured
Line 2274: Release PhyCh - thal_CCmd_exec
Line 2297: tphy_CDedicatedModeController_releaseNotification, Rx Diversity disable command failure
Line 2405: RSN=%d:tphy_CDchResourcesController_startThalInstances: startDchSfn=%d : startDchRsn=%d
Line 2415: Enable CcTrCh - thal_CCmd_exec
Line 2457: cancelMsg == NULL pointer
Line 2476: Cant Cancel SFN
Line 2487: tphy_CDedicatedModeController_DpchReleaseStf dedicatedModeController_ptr %d, message = %d, currentRsn %d
Line 2509: Freeing up AllowSIRUpdateToken in pause while DPCH release
Line 2516: Freeing up stopTfciBasedProtectionTimer while DPCH release
Line 2536: DCH Release isNfreqConfig %d isBplmn %d
Line 2540: DCH Release Immediately
Line 2550: DCH Release Token Submit (1 subframe delay) Current CFN %d
Line 2576: Activation Time STF without isHHOTakingPlace
Line 2611: Purge HHO
Line 2645: tphy_CDedicatedModeController_SendReleaseCnf: issendRfUseRelease = %d relMsgDeadlineInfo.msg = %p
Line 2651: tphy_CDedicatedModeController_SendReleaseCnf: relMsgDeadlineInfo.msg is NULL !!!
Line 2723: DedicatedMode CNF message: MsId=%d
Line 2732: cnfMsg == NULL pointer
Line 2747: Invalid MsgId=%d
Line 2755: cnfMsg send failure
Line 2821: serving cell enable for DCH config in sendConfirmationMsg
Line 2840: Only Config and release need confirm
Line 2860: confirmMsg send failure
Line 2887: CNF HHO msg failure
Line 2892: CNF HHO msg without isHHOTakingPlace set
Line 2897: HHO CNF with activation time token set
Line 2926: DchRelCnfDelayStf
Line 2930: confirmMsg send failure
Line 2978: ***************Release EDCH forcely
Line 3008: ***************Release HSDSCH forcely
Line 3058: SpecialBurstGenerationPeriod %d
Line 3101: SBGP %d
Line 3127: UlDpchRelease - thal_CCmd_exec
Line 3177: Unable to set MaxUlTxPower
Line 3185: No MaxUlTxPower available
Line 3209: SS Frequency %d
Line 3231: SynchInfoHO
Line 3238: PresynchHO
Line 3267: Tar Cell RSCP -120. Tar pathLoss made same as Src
Line 3272: [HHO]Serving Cell CPI %d Uarfcn %d Pathloss %d
Line 3273: [HHO]Target Cell CPI %d Uarfcn %d Pathloss %d sfnSfnDiff %d
Line 3305: [IRAT_HO] Target Cell CPI %d Uarfcn %d Pathloss %d
Line 3338: Not enough free UlTrChs
Line 3451: Dedi_Mod_Cont: configureUlPhyCh(), UlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 3512: SynchInfoHO:PRACH CONFIG:prxUpPCHdes%d 
Line 3516: prachConfigCmd exec() failed errCode %d addErrCode %d
Line 3526: SynchInfoHO: PRACH START
Line 3533: prachStartCmd == 0
Line 3544: prachStartCmd exec() failed errCode %d addErrCode %d
Line 3552: RSN=%d:RachStart cmd[%d %d] QUEUED
Line 3570: Dedi_Mod_Cont: configureDlPhyCh(), DlPhychConfigCmd exec failed - Err Code = %d, Addl Err Code = %d
Line 3654:  sendAckMessage msg = %d, dedicatedModeController_ptr = %d, MsgId = %d
Line 3674:  sendAckMessage msg = %d, dedicatedModeController_ptr = %d, MsgId = %d
Line 3722: serving cell enable for DCH config in sendAckMessage
Line 3865: Invalid MsgId=%d
Line 3876: confirmMsg send failure
Line 3945: [ActTimeQ]DetermineActTime():New ActTime!!=%d
Line 3986: [WARN]Invalid TTI=%d
Line 4000: [ActTimeQ]curCfn=%d, CfnOffset=%d, ttiMod=%d, UrrcActTime=%3d, TTIActTime=%3d, ActTime=%3d
Line 4086: theConfigMsg == NULL pointer
Line 4123: Failed Configuration Notification Yet To Be Written
Line 4160: IndicationMsg == NULL pointer
Line 4175: IndicationMsg send failure
Line 4404: tphy_CDedicatedModeController_processModifyRlReq: isNfreqConfig =%d
Line 4421: ETHalRfRxUarfcnCmd - thal_CCmd_exec FAILED
Line 4492: SNPL NCells %d, minNCellPathloss %d
Line 4497: SNPL No NCells
Line 4519: RemainingFrames = %d and ongoingDCHReason = %d
Line 4526: Freeing up stopTfciBasedProtectionTimer Thread = %d 
Line 4531: stopTfciBasedProtectionTimer Token %d _before attaching to Thread = %d
Line 4537: stopTfciBasedProtectionTimer Token_ %d after attaching to Thread = %d
Line 4541: stopTfciBasedProtectionTimer Token_0 %d  Thread  = %d
Line 4548: stopTfciBasedProtectionTimer Token_1 %d  Thread  = %d
Line 4553: ongoingDCHReason = %d and Token Thread = %d
