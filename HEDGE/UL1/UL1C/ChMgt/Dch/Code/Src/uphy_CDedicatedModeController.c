Line 371: uphy_DedicatedModeController_RfSettleWaitSTF - dedicatedModeController is NULL
Line 371: uphy_DedicatedModeController_RfSettleWaitSTF - dedicatedModeController is NULL
Line 395: DSDS: RelsasePostponeUphyFsmStf - dedicatedModeController is NULL
Line 395: DSDS: RelsasePostponeUphyFsmStf - dedicatedModeController is NULL
Line 417: DSDS: RelsasePostponeUphyFsmStf - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 417: DSDS: RelsasePostponeUphyFsmStf - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 440: [Compressed Mode] postponeUphyFsmStf runs at Rsn %d releaseforInterRatHandover %d
Line 440: [Compressed Mode] postponeUphyFsmStf runs at Rsn %d releaseforInterRatHandover %d
Line 471: DSDS:uphy_CDedicatedModeController_TgpsReleased - dedicatedModeController is NULL
Line 471: DSDS:uphy_CDedicatedModeController_TgpsReleased - dedicatedModeController is NULL
Line 503: Cancel UphyRelPostPoneToken
Line 503: Cancel UphyRelPostPoneToken
Line 528: **uphy_CDedicatedModeController_TgpsReleased
Line 528: **uphy_CDedicatedModeController_TgpsReleased
Line 550: SendPauseStf:releaseTriggered false,pause was already sent
Line 550: SendPauseStf:releaseTriggered false,pause was already sent
Line 559: Message NULL
Line 559: Message NULL
Line 572: Message sending failed
Line 572: Message sending failed
Line 577: Pause Req after TGPS Release is3gHwRelReqd %d
Line 577: Pause Req after TGPS Release is3gHwRelReqd %d
Line 604: Message NULL
Line 604: Message NULL
Line 617: Message sending failed
Line 617: Message sending failed
Line 622: Pause Req after IRAT measurement is3gHwRelReqd %d
Line 622: Pause Req after IRAT measurement is3gHwRelReqd %d
Line 655: Message sending failed
Line 655: Message sending failed
Line 660: IRAT Measurement complete Trigger DCH release  
Line 660: IRAT Measurement complete Trigger DCH release  
Line 696: **TgpsReleased_DuringPause
Line 696: **TgpsReleased_DuringPause
Line 706: TgpsReleased_DuringPause releaseTriggered set FALSE
Line 706: TgpsReleased_DuringPause releaseTriggered set FALSE
Line 709: TgpsReleased_DuringPause pause enable false
Line 709: TgpsReleased_DuringPause pause enable false
Line 738: **uphy_CDedicatedModeController_FdpchReleased
Line 738: **uphy_CDedicatedModeController_FdpchReleased
Line 1017: Instance created for stackId %d
Line 1017: Instance created for stackId %d
Line 1075: Clear HHOMsg pointer %x
Line 1075: Clear HHOMsg pointer %x
Line 1121: Process pending RlModify msg with a negative CNF
Line 1121: Process pending RlModify msg with a negative CNF
Line 1125: Process pending RlModify msg with a positive CNF
Line 1125: Process pending RlModify msg with a positive CNF
Line 1135: Process pending RlModify msg with a negative CNF
Line 1135: Process pending RlModify msg with a negative CNF
Line 1163: DedicatedModeController timesout DCH release during IRAT
Line 1163: DedicatedModeController timesout DCH release during IRAT
Line 1316: [HHO] uphy_CDedicatedModeController_process: HHO = %d
Line 1316: [HHO] uphy_CDedicatedModeController_process: HHO = %d
Line 1318: Received l2uCandiCellinfo.numOfCells %d
Line 1318: Received l2uCandiCellinfo.numOfCells %d
Line 1335: Update MPDB for [%d %d] frameOffset %d
Line 1335: Update MPDB for [%d %d] frameOffset %d
Line 1339: failed to allocate multipathInfo for [%d %d]
Line 1339: failed to allocate multipathInfo for [%d %d]
Line 1355: No uplinkDpchPowerControlInfo
Line 1355: No uplinkDpchPowerControlInfo
Line 1364: Processing hho request with activationTimeTokenPtr set
Line 1364: Processing hho request with activationTimeTokenPtr set
Line 1371: Processing hho request with isHHOTakingPlace set
Line 1371: Processing hho request with isHHOTakingPlace set
Line 1376: Processing hho request with hhoMsg set
Line 1376: Processing hho request with hhoMsg set
Line 1403: currentRefRl - refCellInformation=0
Line 1403: currentRefRl - refCellInformation=0
Line 1415: Problems processing HHO request as cant locate cpich of current ref RL, replacing it to the old one (%d)
Line 1415: Problems processing HHO request as cant locate cpich of current ref RL, replacing it to the old one (%d)
Line 1419: Problems processing HHO request as cant locate cpich of current ref RL
Line 1419: Problems processing HHO request as cant locate cpich of current ref RL
Line 1444: Cfn %d Dedicated Mode Controller receives InterFreqTimingReinit HHO request
Line 1444: Cfn %d Dedicated Mode Controller receives InterFreqTimingReinit HHO request
Line 1451: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintain HHO request
Line 1451: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintain HHO request
Line 1458: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintainNoSync HHO request
Line 1458: Cfn %d Dedicated Mode Controller receives InterFreqTimingMaintainNoSync HHO request
Line 1466: Cfn %d Dedicated Mode Controller receives IntraFreqTimingReinit HHO request
Line 1466: Cfn %d Dedicated Mode Controller receives IntraFreqTimingReinit HHO request
Line 1473: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintain HHO request
Line 1473: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintain HHO request
Line 1480: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintainNoSync HHO request
Line 1480: Cfn %d Dedicated Mode Controller receives IntraFreqTimingMaintainNoSync HHO request
Line 1513: Cancel compModeScheduleStopToken while processing DCH HHO
Line 1513: Cancel compModeScheduleStopToken while processing DCH HHO
Line 1529: Schedule Comp Mode Stop Token for processing DCH HHO compModeGapStopMarginSlots %d compModeScheduleStopRSN %d
Line 1529: Schedule Comp Mode Stop Token for processing DCH HHO compModeGapStopMarginSlots %d compModeScheduleStopRSN %d
Line 1539: Stop scheduling compressed mode immediately and adjust activationRSN to %d while processing DCH HHO
Line 1539: Stop scheduling compressed mode immediately and adjust activationRSN to %d while processing DCH HHO
Line 1572: Boundary Rsn %d Current Rsn %d Boundary Cfn %d ActivationTime %d submitted to framework to process hho msg at Rsn %d
Line 1572: Boundary Rsn %d Current Rsn %d Boundary Cfn %d ActivationTime %d submitted to framework to process hho msg at Rsn %d
Line 1603: After cellSfnServer release, AdvanceCellSynchroRequests will be submitted
Line 1603: After cellSfnServer release, AdvanceCellSynchroRequests will be submitted
Line 1659: Before HHO:Cell: SFN %d SLOT %d CHIP %d Channel: CFN %d, SLOT %d, CHIP %d: PalTime: beforeHHOTime %d
Line 1659: Before HHO:Cell: SFN %d SLOT %d CHIP %d Channel: CFN %d, SLOT %d, CHIP %d: PalTime: beforeHHOTime %d
Line 1673: Pending DCH release till IRAT measurements completes
Line 1673: Pending DCH release till IRAT measurements completes
Line 1704: Delay resetting of UHAL_DSDS_PAUSE as CM sequence is running
Line 1704: Delay resetting of UHAL_DSDS_PAUSE as CM sequence is running
Line 1715: S0 Freeing up INNERLPENUpdateToken at DCH release
Line 1715: S0 Freeing up INNERLPENUpdateToken at DCH release
Line 1721: Freeing AllowSIRUpdateToken at DCH release
Line 1721: Freeing AllowSIRUpdateToken at DCH release
Line 1759: Pending DCH release till IRAT measurements completes
Line 1759: Pending DCH release till IRAT measurements completes
Line 1842: Soft Handover failed to process ReplaceRL Msg
Line 1842: Soft Handover failed to process ReplaceRL Msg
Line 1847: Dedicated Mode Controller rejected ReplaceRl Msg as already processing one
Line 1847: Dedicated Mode Controller rejected ReplaceRl Msg as already processing one
Line 1924: RlModify Msg pending due to RL REPLACE
Line 1924: RlModify Msg pending due to RL REPLACE
Line 2163: Soft handover rejected Cell Synchro Ind
Line 2163: Soft handover rejected Cell Synchro Ind
Line 2168: Unknown subid for Cell Synchro Ind
Line 2168: Unknown subid for Cell Synchro Ind
Line 2170: Cell Synchro Rejected
Line 2170: Cell Synchro Rejected
Line 2182: Unknown subid for Cell Sfn Ind
Line 2182: Unknown subid for Cell Sfn Ind
Line 2184: Cell Sfn Rejected
Line 2184: Cell Sfn Rejected
Line 2206: Invalid MsgId=%d
Line 2206: Invalid MsgId=%d
Line 2222: DedicatedModeController receives tgpsCfgCnf with destSubid!=0
Line 2222: DedicatedModeController receives tgpsCfgCnf with destSubid!=0
Line 2244: RL[freq(%d), scr(%d) try to add on HSUPA RL
Line 2244: RL[freq(%d), scr(%d) try to add on HSUPA RL
Line 2266: uphy_CUlDchProcessor_isUlEstablished == TRUE
Line 2266: uphy_CUlDchProcessor_isUlEstablished == TRUE
Line 2271: uphy_CUlDchProcessor_isUlEstablished == FALSE
Line 2271: uphy_CUlDchProcessor_isUlEstablished == FALSE
Line 2289: DSDS:DCH controller receives Rf Use Response from DSLRC Message interface
Line 2289: DSDS:DCH controller receives Rf Use Response from DSLRC Message interface
Line 2295: DSDS:uphy_CDedicatedModeController_process: RF pause received from DSLRC interface is3gHwRelReqd %d
Line 2295: DSDS:uphy_CDedicatedModeController_process: RF pause received from DSLRC interface is3gHwRelReqd %d
Line 2310: DSDS: uphy_CDedicatedModeController_process: maxTGPSLengthBackup %d isCmSeqRunning %d 
Line 2310: DSDS: uphy_CDedicatedModeController_process: maxTGPSLengthBackup %d isCmSeqRunning %d 
Line 2314: IRAT ongoing,process pause after IRAT meas
Line 2314: IRAT ongoing,process pause after IRAT meas
Line 2325: TGPS running return
Line 2325: TGPS running return
Line 2334: DSDS: uphy_CDedicatedModeController_process: Reset DCH configuration to init
Line 2334: DSDS: uphy_CDedicatedModeController_process: Reset DCH configuration to init
Line 2411: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUsePauseReq, DedModePauseCurTime: %d, Pause2Pause: %d ms, ActualResumeDuration: %d, PauseDutyCycle :%d 
Line 2411: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUsePauseReq, DedModePauseCurTime: %d, Pause2Pause: %d ms, ActualResumeDuration: %d, PauseDutyCycle :%d 
Line 2416: [TX-OFF]Pause - uphy_CDedicatedModeController_TurnOffTxSTF isDsConfig %d
Line 2416: [TX-OFF]Pause - uphy_CDedicatedModeController_TurnOffTxSTF isDsConfig %d
Line 2420: Freeing up INNERLPENUpdateToken in pause
Line 2420: Freeing up INNERLPENUpdateToken in pause
Line 2431: Freeing up AllowSIRUpdateToken in pause
Line 2431: Freeing up AllowSIRUpdateToken in pause
Line 2473: DSDS:uphy_CDedicatedModeController_process: Pause IPC issued
Line 2473: DSDS:uphy_CDedicatedModeController_process: Pause IPC issued
Line 2478: [IPC:IPC_CONSUMER_ACTION_ID_SET_DSP_OPERATION_MODE] execution=%d
Line 2488: DSDS:uphy_CDedicatedModeController_process: TIMEOUT
Line 2488: DSDS:uphy_CDedicatedModeController_process: TIMEOUT
Line 2493: DSDS:uphy_CDedicatedModeController_process: Pause IPC handling completed
Line 2493: DSDS:uphy_CDedicatedModeController_process: Pause IPC handling completed
Line 2503: S%  DSDS:uphy_CDedicatedModeController_process: Data mover pause
Line 2507: DSDS:uphy_CDedicatedModeController_process: Aready DSP was in pause state.
Line 2507: DSDS:uphy_CDedicatedModeController_process: Aready DSP was in pause state.
Line 2512: S0 Send Release IPC to DSP during pause
Line 2512: S0 Send Release IPC to DSP during pause
Line 2532: 3G3G DSDS: uphy_CDedicatedModeController_process:Pause received
Line 2532: 3G3G DSDS: uphy_CDedicatedModeController_process:Pause received
Line 2554: DSDS:uphy_CDedicatedModeController_process: RF not in use
Line 2554: DSDS:uphy_CDedicatedModeController_process: RF not in use
Line 2576: DSDS:uphy_CDedicatedModeController_process: RF resume received from DSLRC interface
Line 2576: DSDS:uphy_CDedicatedModeController_process: RF resume received from DSLRC interface
Line 2580: DSDS: uphy_CDedicatedModeController_process: Restart DCH configuration
Line 2580: DSDS: uphy_CDedicatedModeController_process: Restart DCH configuration
Line 2590: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2590: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2595: DSDS: uphy_CDedicatedModeController_process: Enable DCH decoding
Line 2595: DSDS: uphy_CDedicatedModeController_process: Enable DCH decoding
Line 2609: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2609: 3G3G DSDS: uphy_CDedicatedModeController_process: Resume Received
Line 2624: DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 2624: DSDS:EDedicatedModeControllerMsgId_RfUseResumeReq Rf Pause not enabled, probably released by URRC
Line 2632: Invalid MsgId=%d
Line 2632: Invalid MsgId=%d
Line 2733: CellSfnReqMsg == NULL pointer
Line 2733: CellSfnReqMsg == NULL pointer
Line 2756: Cant Request SFN
Line 2756: Cant Request SFN
Line 2792: CellSynchroReqMsg == NULL pointer
Line 2792: CellSynchroReqMsg == NULL pointer
Line 2825: Sending Cell Synchro request failed.
Line 2825: Sending Cell Synchro request failed.
Line 2862: CellSynchroIndMsg == NULL pointer
Line 2862: CellSynchroIndMsg == NULL pointer
Line 2881: Dedicated Mode RequestCellTiming exits with no outstanding requests - generating artificial trigger
Line 2881: Dedicated Mode RequestCellTiming exits with no outstanding requests - generating artificial trigger
Line 2887: requestCellTiming: outstandingRlToSynchronise=%d isSentReqForGetSFN=%d isHHOTakingPlace=%d hhotype=%d
Line 2887: requestCellTiming: outstandingRlToSynchronise=%d isSentReqForGetSFN=%d isHHOTakingPlace=%d hhotype=%d
Line 2909: CellSynchroIndMsg == NULL pointer
Line 2909: CellSynchroIndMsg == NULL pointer
Line 3031: [Rollback Fix] Processing failed cellSyncInd as passed (rollback:%d, TransId:%d(PSC%d), msgid:%d)
Line 3031: [Rollback Fix] Processing failed cellSyncInd as passed (rollback:%d, TransId:%d(PSC%d), msgid:%d)
Line 3056: Problems processing HHO request as cant locate cpich of new ref RL
Line 3056: Problems processing HHO request as cant locate cpich of new ref RL
Line 3073: DedicatedModeController receives duplicate CellSfnInd Tid %d
Line 3073: DedicatedModeController receives duplicate CellSfnInd Tid %d
Line 3080: Dedicated Mode isCellTimingCompleted processes artificial trigger
Line 3080: Dedicated Mode isCellTimingCompleted processes artificial trigger
Line 3097: Problems processing HHO request as cant locate cpich of new ref RL
Line 3097: Problems processing HHO request as cant locate cpich of new ref RL
Line 3113: DedicatedModeController receives duplicate Cell Synchro Ind Tid %d
Line 3113: DedicatedModeController receives duplicate Cell Synchro Ind Tid %d
Line 3120: DedicatedModeController receives unknown msg id %d in isCellTimingCompleted
Line 3120: DedicatedModeController receives unknown msg id %d in isCellTimingCompleted
Line 3133: DedicatedModeController: outstandingRlToSynchronise = %d
Line 3133: DedicatedModeController: outstandingRlToSynchronise = %d
Line 3267: UhalConfig in DsSuspend State: Returning Token
Line 3267: UhalConfig in DsSuspend State: Returning Token
Line 3292: engagedRlPhychLinksArray == NULL pointer
Line 3292: engagedRlPhychLinksArray == NULL pointer
Line 3300: S0  Send Init IPC during resume
Line 3300: S0  Send Init IPC during resume
Line 3326: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 3326: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 3339: Dedicated Mode Config Msg omits DlPowerControlMode - Asn_singleTPC assumed
Line 3339: Dedicated Mode Config Msg omits DlPowerControlMode - Asn_singleTPC assumed
Line 3359: Initial Target SIR is set %d
Line 3359: Initial Target SIR is set %d
Line 3366: DedicatedCommonConfig - uhal_Cmd_exec
Line 3366: DedicatedCommonConfig - uhal_Cmd_exec
Line 3379: DpchSyncModify - uhal_Cmd_exec
Line 3379: DpchSyncModify - uhal_Cmd_exec
Line 3449: refRlIndex %d should be less than nRl %d
Line 3449: refRlIndex %d should be less than nRl %d
Line 3483: No reference Rl in place
Line 3483: No reference Rl in place
Line 3490: Insufficient Rls
Line 3490: Insufficient Rls
Line 3516: Modifying Exisitng Fdpch RL has failed
Line 3516: Modifying Exisitng Fdpch RL has failed
Line 3523: RlRelease - uhal_Cmd_exec
Line 3523: RlRelease - uhal_Cmd_exec
Line 3535: Modifying Exisitng Dpch RL has failed
Line 3535: Modifying Exisitng Dpch RL has failed
Line 3542: RlRelease - uhal_Cmd_exec
Line 3542: RlRelease - uhal_Cmd_exec
Line 3556: Dedicated mode:configureRL
Line 3556: Dedicated mode:configureRL
Line 3573: Configure RL Fdpch failed
Line 3573: Configure RL Fdpch failed
Line 3587: Failed to map RL %d to PSC %d
Line 3587: Failed to map RL %d to PSC %d
Line 3595: Mapped RL %d to PSC %d
Line 3595: Mapped RL %d to PSC %d
Line 3606: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3606: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3635: Configure RL Dpch failed
Line 3635: Configure RL Dpch failed
Line 3648: Failed to map RL %d to PSC %d
Line 3648: Failed to map RL %d to PSC %d
Line 3655: Mapped RL %d to PSC %d
Line 3655: Mapped RL %d to PSC %d
Line 3666: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3666: EHalDlRlStartCmd - uhal_Cmd_exec
Line 3725: Insufficient Phychs
Line 3725: Insufficient Phychs
Line 3742: Phych Config Failed
Line 3742: Phych Config Failed
Line 3760: Insufficient Phychs
Line 3760: Insufficient Phychs
Line 3770: Unexpected numOfDlDpchPerRl %d
Line 3770: Unexpected numOfDlDpchPerRl %d
Line 3784: Phych Config Failed
Line 3784: Phych Config Failed
Line 3805: No free RL for a dummy rollback RL
Line 3805: No free RL for a dummy rollback RL
Line 3852: rlPhyCh config failed
Line 3852: rlPhyCh config failed
Line 3900: rlPhyCh config failed
Line 3900: rlPhyCh config failed
Line 3922: Not enough free Trch-s
Line 3922: Not enough free Trch-s
Line 3958: trCh config failed
Line 3958: trCh config failed
Line 3980: Not enough free Cctrch-s
Line 3980: Not enough free Cctrch-s
Line 4008: DlCcTrCh config failed
Line 4008: DlCcTrCh config failed
Line 4043: UlUarfcn config failed
Line 4043: UlUarfcn config failed
Line 4056: UlPhych config failed
Line 4056: UlPhych config failed
Line 4095: Not enough free UlTrChs
Line 4095: Not enough free UlTrChs
Line 4107: UlTrCh config failed
Line 4107: UlTrCh config failed
Line 4184: refRlIndex %d should be less than nRl %d
Line 4184: refRlIndex %d should be less than nRl %d
Line 4206: Dedicated Mode Config Msg with no Ul PowerControlInfo
Line 4206: Dedicated Mode Config Msg with no Ul PowerControlInfo
Line 4238: Cant map Dpch Id
Line 4238: Cant map Dpch Id
Line 4250: [IRAT U2G] No GSM Mid server to trigger
Line 4250: [IRAT U2G] No GSM Mid server to trigger
Line 4287: Unknown state %d
Line 4287: Unknown state %d
Line 4293: Dedicated Mode UhalCfg Failed
Line 4293: Dedicated Mode UhalCfg Failed
Line 4423: Release UlTrCh - uhal_Cmd_exec
Line 4423: Release UlTrCh - uhal_Cmd_exec
Line 4464: DpchSyncModify - uhal_Cmd_exec
Line 4464: DpchSyncModify - uhal_Cmd_exec
Line 4472: DSDS:DCH processRfUseResume: syncPhase %d isRfEnabled %d
Line 4472: DSDS:DCH processRfUseResume: syncPhase %d isRfEnabled %d
Line 4491: DSDS:DCH processRfUseResume: Enable SYNC reporting for FDPCH
Line 4491: DSDS:DCH processRfUseResume: Enable SYNC reporting for FDPCH
Line 4504: Freeing up INNERLPENUpdateToken before issuing a new one
Line 4504: Freeing up INNERLPENUpdateToken before issuing a new one
Line 4523: DSDS:DCH processRfUseResume: Data mover resume
Line 4523: DSDS:DCH processRfUseResume: Data mover resume
Line 4549: [IPC:IPC_CONSUMER_ACTION_ID_SET_DSP_OPERATION_MODE] execution=%d
Line 4648: Freeing up AllowSIRUpdateToken before issuing a new one
Line 4648: Freeing up AllowSIRUpdateToken before issuing a new one
Line 4666: WARNING: Too Big a pause for Agilent to handle. ActualPauseDuration: %d 
Line 4666: WARNING: Too Big a pause for Agilent to handle. ActualPauseDuration: %d 
Line 4672: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUseResumeReq ActualPauseDuration : %dms
Line 4672: uphy_CDedicatedModeController_process EDedicatedModeControllerMsgId_RfUseResumeReq ActualPauseDuration : %dms
Line 4716: Corrupt Ul TrChMappingTable
Line 4716: Corrupt Ul TrChMappingTable
Line 4725: Release UlTrCh - uhal_Cmd_exec
Line 4725: Release UlTrCh - uhal_Cmd_exec
Line 4738: nUlTrChs=%d Array Index Out of bound
Line 4738: nUlTrChs=%d Array Index Out of bound
Line 4804: Cancel UphyRelPostPoneToken
Line 4804: Cancel UphyRelPostPoneToken
Line 4811: Cancel compModeScheduleStopToken while releasing DCH
Line 4811: Cancel compModeScheduleStopToken while releasing DCH
Line 4831: [RX DIV] RF ANT #2 Turn OFF forcely
Line 4831: [RX DIV] RF ANT #2 Turn OFF forcely
Line 4845: commonCfgCmd exec failure: ErrCode %d, AddErrCode %d
Line 4845: commonCfgCmd exec failure: ErrCode %d, AddErrCode %d
Line 4856: [RX DIV] Adaptive Control
Line 4856: [RX DIV] Adaptive Control
Line 4976: Set CFN: palSwCfn=%d, palSwSlot=%d, palSwChip=%d, timeDiff =%d us
Line 4976: Set CFN: palSwCfn=%d, palSwSlot=%d, palSwChip=%d, timeDiff =%d us
Line 5011: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5011: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5015: Rl Set Sfn - uhal cmd exec
Line 5015: Rl Set Sfn - uhal cmd exec
Line 5038: UE did not camp to any frequency.
Line 5038: UE did not camp to any frequency.
Line 5044: S0 uphy_CDedicatedModeController_UpdateAfcGain is going on
Line 5044: S0 uphy_CDedicatedModeController_UpdateAfcGain is going on
Line 5066: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 5066: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 5089: afcGainUpdatingToken = NULL
Line 5089: afcGainUpdatingToken = NULL
Line 5102: [AFC] Cancel afcGainUpdatingToken
Line 5102: [AFC] Cancel afcGainUpdatingToken
Line 5194: currentRefRl - refCellInformation=0
Line 5194: currentRefRl - refCellInformation=0
Line 5201: currentRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 5201: currentRl==UPHY_MAPPING_DATABASE_VALUE_NOT_FOUND
Line 5228: [CPC]uphy_CDedicatedModeController_enableDecoding-Enabling Delay started at CFN: %d for  HHO 
Line 5228: [CPC]uphy_CDedicatedModeController_enableDecoding-Enabling Delay started at CFN: %d for  HHO 
Line 5247: Set CFN: rlNr=%d, hwSfn=%d, fwkSfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5247: Set CFN: rlNr=%d, hwSfn=%d, fwkSfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5251: Rl Set Sfn - uhal cmd exec
Line 5251: Rl Set Sfn - uhal cmd exec
Line 5270: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5270: Set CFN STF: rlNr=%d, hwSfn=%d, palSwCfn=%d, DOFF=%d, hwChipTiming=%d, DFO=%d
Line 5291: Rl Set Sfn - uhal cmd exec
Line 5291: Rl Set Sfn - uhal cmd exec
Line 5340: uhal command exec failed
Line 5340: uhal command exec failed
Line 5353: uphy_CDedicatedModeController_sendDpchConfiDoneIndMessage To E-DCH Controller
Line 5353: uphy_CDedicatedModeController_sendDpchConfiDoneIndMessage To E-DCH Controller
Line 5398: Freeing up SetFwkCfnAndRlSfnToken
Line 5398: Freeing up SetFwkCfnAndRlSfnToken
Line 5416: Framework Cfn %d slot %d Dedicated Mode Controller enables cctrch %d
Line 5416: Framework Cfn %d slot %d Dedicated Mode Controller enables cctrch %d
Line 5444: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 5444: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 5501: Set initial DPCCH Power - uhal_Cmd_exec
Line 5501: Set initial DPCCH Power - uhal_Cmd_exec
Line 5517: EHalEDpchConfigCmd fail
Line 5517: EHalEDpchConfigCmd fail
Line 5530: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 5530: edpchStartCommand exec failed: Err Code %d AddErrCode %d
Line 5550: No pending Advance cell synchro
Line 5550: No pending Advance cell synchro
Line 5556: Dedicated mode controller ReSubmit AdvanceCellSynchroRequests: isHHOProcessing %d
Line 5556: Dedicated mode controller ReSubmit AdvanceCellSynchroRequests: isHHOProcessing %d
Line 5598: Cant Request CellSfnServer Release
Line 5598: Cant Request CellSfnServer Release
Line 5603: Dedicated mode controller requests CellSfnServer release
Line 5603: Dedicated mode controller requests CellSfnServer release
Line 5608: UphyCellSfnServerReleaseAllMsg_t msg is Null
Line 5608: UphyCellSfnServerReleaseAllMsg_t msg is Null
Line 5641: cancelMsg == NULL pointer
Line 5641: cancelMsg == NULL pointer
Line 5649: configMessage == NULL pointer
Line 5649: configMessage == NULL pointer
Line 5679: Cant Cancel SFN
Line 5679: Cant Cancel SFN
Line 5729: uphy_CHsdschResources_t is NULL.
Line 5729: uphy_CHsdschResources_t is NULL.
Line 5739: uphy_CCpcResources is NULL.
Line 5739: uphy_CCpcResources is NULL.
Line 5825: DedicatedMode CNF message: MsId=%d
Line 5825: DedicatedMode CNF message: MsId=%d
Line 5838: cnfMsg == NULL pointer
Line 5838: cnfMsg == NULL pointer
Line 5856: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5856: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5863: Invalid MsgId=%d
Line 5863: Invalid MsgId=%d
Line 5873: cnfMsg send failure
Line 5873: cnfMsg send failure
Line 5905: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5905: DSDS: sendConfirmationMsg - UHAL_DSDS_PAUSE reset got postponed due to CM sequence. Reset Now
Line 5915: Only Config and release need confirm
Line 5915: Only Config and release need confirm
Line 5945: confirmMsg send failure
Line 5945: confirmMsg send failure
Line 5985: RlRelease - uhal_Cmd_exec
Line 5985: RlRelease - uhal_Cmd_exec
Line 5996: [HHO] Unmap successful for RlNr=%d from MappingDatabase
Line 5996: [HHO] Unmap successful for RlNr=%d from MappingDatabase
Line 6000: [HHO] Failed to unmap RlNr=%d from MappingDatabase
Line 6000: [HHO] Failed to unmap RlNr=%d from MappingDatabase
Line 6010: CNF HHO msg without isHHOTakingPlace set
Line 6010: CNF HHO msg without isHHOTakingPlace set
Line 6015: HHO CNF with activationTimeToken is canceled
Line 6015: HHO CNF with activationTimeToken is canceled
Line 6022: HHO CNF with configDelayToken is canceled
Line 6022: HHO CNF with configDelayToken is canceled
Line 6048: uphy_CDedicatedModeController_sendConfirmationMsg: CUPHY_NON_UMTS_RAT_MODE_REQ (%x)
Line 6048: uphy_CDedicatedModeController_sendConfirmationMsg: CUPHY_NON_UMTS_RAT_MODE_REQ (%x)
Line 6059: [CPC] CPCModeRelease: CFN=%d
Line 6059: [CPC] CPCModeRelease: CFN=%d
Line 6126: Rf Info - uhal_Cmd_exec
Line 6126: Rf Info - uhal_Cmd_exec
Line 6191: Set initial DPCCH Power - uhal_Cmd_exec
Line 6191: Set initial DPCCH Power - uhal_Cmd_exec
Line 6219: start Encoding - uhal_Cmd_exec
Line 6219: start Encoding - uhal_Cmd_exec
Line 6249: UlDpchRelease - uhal_Cmd_exec
Line 6249: UlDpchRelease - uhal_Cmd_exec
Line 6288: Unable to set MaxUlTxPower
Line 6288: Unable to set MaxUlTxPower
Line 6294: maxUlTxPowerControllerInstance is Null
Line 6294: maxUlTxPowerControllerInstance is Null
Line 6305: No MaxUlTxPower available
Line 6305: No MaxUlTxPower available
Line 6321: Unable to set MaxUlTxPower
Line 6321: Unable to set MaxUlTxPower
Line 6327: No MaxUlTxPower available
Line 6327: No MaxUlTxPower available
Line 6333: maxUlTxPowerControllerInstance is Null
Line 6333: maxUlTxPowerControllerInstance is Null
Line 6353: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 6353: Dedicated Mode Config Msg omits DlFdpchPowerControlMode - Asn_singleTPC assumed
Line 6366: Dedicated Mode Config Msg omits DlDpchPowerControlMode - Asn_singleTPC assumed
Line 6366: Dedicated Mode Config Msg omits DlDpchPowerControlMode - Asn_singleTPC assumed
Line 6527: [CPC]uphy_CDedicatedModeController_CPCSetEnablingDelayStartCfn, MsgId=%d,IsDedConfigDoneBeforeCPC =%d,DedConfigDoneCfn=%d
Line 6527: [CPC]uphy_CDedicatedModeController_CPCSetEnablingDelayStartCfn, MsgId=%d,IsDedConfigDoneBeforeCPC =%d,DedConfigDoneCfn=%d
Line 6657: Invalid MsgId=%d
Line 6657: Invalid MsgId=%d
Line 6668: confirmMsg send failure
Line 6668: confirmMsg send failure
Line 6838: Invalid TTI=%d
Line 6838: Invalid TTI=%d
Line 6850: Urrc/Uphy activation time disagreement rrc:%d phy:%d
Line 6850: Urrc/Uphy activation time disagreement rrc:%d phy:%d
Line 6863: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 6863: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 6877: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 6877: At cfn %d desired offset %d from activation time %d cannot be used, use activation time %d instead
Line 6919: rlInfoCommand uhal cmd exec failed
Line 6919: rlInfoCommand uhal cmd exec failed
Line 6946: rlInfoCommand uhal cmd exec failed
Line 6946: rlInfoCommand uhal cmd exec failed
Line 6967: Dedicated Mode Controller unable to reset chipset sfn to be cfn as slot %d too close to frame boundary, retry next frame
Line 6967: Dedicated Mode Controller unable to reset chipset sfn to be cfn as slot %d too close to frame boundary, retry next frame
Line 6982: Don't change SW SFN-CFN in case of timing maintained IFHHO
Line 6982: Don't change SW SFN-CFN in case of timing maintained IFHHO
Line 6997: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 6997: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7007: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7007: Framework Sfn and Cfn Setup: OldSfn %d NewSfn %d New Cfn %d
Line 7038: blerCallbacksMidMapInfo == NULL pointer
Line 7038: blerCallbacksMidMapInfo == NULL pointer
Line 7067: blerCallbacksMidMapInfo == NULL pointer
Line 7067: blerCallbacksMidMapInfo == NULL pointer
Line 7101: theConfigMsg == NULL pointer
Line 7101: theConfigMsg == NULL pointer
Line 7143: Failed Configuration Notification Yet To Be Written
Line 7143: Failed Configuration Notification Yet To Be Written
Line 7184: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Assign RlAndFingers for pScrCode %d
Line 7184: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Assign RlAndFingers for pScrCode %d
Line 7202: Problems processing HHO request as cant locate cpich of new ref RL
Line 7202: Problems processing HHO request as cant locate cpich of new ref RL
Line 7243: HHO Cfg failed: outstandingRlToSynchronise=%d, hasHhoActivationTimeOccured=%d, isHHOTakingPlace=%d
Line 7243: HHO Cfg failed: outstandingRlToSynchronise=%d, hasHhoActivationTimeOccured=%d, isHHOTakingPlace=%d
Line 7251: Duplicate Advance Cell Synchro Ind
Line 7251: Duplicate Advance Cell Synchro Ind
Line 7267: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Sfn obtained for pScrCode %d Inheriting Rl %d
Line 7267: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Sfn obtained for pScrCode %d Inheriting Rl %d
Line 7284: Problems processing HHO request as cant locate cpich of new ref RL
Line 7284: Problems processing HHO request as cant locate cpich of new ref RL
Line 7294: Duplicate Advance Cell Sfn Ind
Line 7294: Duplicate Advance Cell Sfn Ind
Line 7318: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Failed AdvanceCellSynchro for pScrCode %d
Line 7318: Sfn %d Cfn %d: cellTimingIndInAbnormalState. Failed AdvanceCellSynchro for pScrCode %d
Line 7348: HHO Cfg failed: outstandingRlToSynchronise=%d, hasHhoActivationTimeOccured=%d, isHHOTakingPlace=%d
Line 7348: HHO Cfg failed: outstandingRlToSynchronise=%d, hasHhoActivationTimeOccured=%d, isHHOTakingPlace=%d
Line 7357: uphy_CDedicatedModeController_cellTimingIndInAbnormalState: TransactId is out of range
Line 7357: uphy_CDedicatedModeController_cellTimingIndInAbnormalState: TransactId is out of range
Line 7380: Send config event to HHO
Line 7380: Send config event to HHO
Line 7384:  uphy_CDedicatedModeController_ProcessConfig hhoMsg=%d activationTimeTokenPtr=%d hhoStarted=%d
Line 7384:  uphy_CDedicatedModeController_ProcessConfig hhoMsg=%d activationTimeTokenPtr=%d hhoStarted=%d
Line 7404: uphy_CDedicatedModeController_activationTimeStf[%d] 
Line 7404: uphy_CDedicatedModeController_activationTimeStf[%d] 
Line 7410: Activation Time STF without isHHOTakingPlace
Line 7410: Activation Time STF without isHHOTakingPlace
Line 7432: rlInfoCommand uhal cmd exec failed
Line 7432: rlInfoCommand uhal cmd exec failed
Line 7447: rlInfoCommand uhal cmd exec failed
Line 7447: rlInfoCommand uhal cmd exec failed
Line 7472: Rf Info - uhal_Cmd_exec
Line 7472: Rf Info - uhal_Cmd_exec
Line 7497: Pening Dedicated mode config due to advance cell synchro
Line 7497: Pening Dedicated mode config due to advance cell synchro
Line 7511: Rf Info - uhal_Cmd_exec
Line 7511: Rf Info - uhal_Cmd_exec
Line 7539: Pening Dedicated mode config due to advance cell synchro
Line 7539: Pening Dedicated mode config due to advance cell synchro
Line 7549: ActivationTimeStf with unknown hho type
Line 7549: ActivationTimeStf with unknown hho type
Line 7606: HHO CNF with configDelayToken is canceled
Line 7606: HHO CNF with configDelayToken is canceled
Line 7673: uphy_CCellSFNServer is NULL
Line 7673: uphy_CCellSFNServer is NULL
Line 7683: CellSfnReqMsg == NULL pointer
Line 7683: CellSfnReqMsg == NULL pointer
Line 7687: Send SFN request to cell SFN server
Line 7687: Send SFN request to cell SFN server
Line 7708: Cant Request Cell Sfn
Line 7708: Cant Request Cell Sfn
Line 7721: Pending HHO flag
Line 7721: Pending HHO flag
Line 7728: hho Triggered already, so cell tracking is needed
Line 7728: hho Triggered already, so cell tracking is needed
Line 7746: CellSynchroReqMsg == NULL pointer
Line 7746: CellSynchroReqMsg == NULL pointer
Line 7779: Sending Cell Synchro request failed.
Line 7779: Sending Cell Synchro request failed.
Line 7837: hhoMsg becomes NULL pointer when cfgFsmState is %d
Line 7837: hhoMsg becomes NULL pointer when cfgFsmState is %d
Line 7862: HHO configure RL failed
Line 7862: HHO configure RL failed
Line 7868: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7868: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7876: [HHO] Failed to map RL %d to PSC %d
Line 7876: [HHO] Failed to map RL %d to PSC %d
Line 7880: [HHO] Mapped RL %d to PSC %d
Line 7880: [HHO] Mapped RL %d to PSC %d
Line 7903: HHO configure RL failed
Line 7903: HHO configure RL failed
Line 7909: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7909: Sfn %d Cfn %d: HhoAssignRlAndFingers rlNr %d pScrCode %d
Line 7917: [HHO] Failed to map RL %d to PSC %d
Line 7917: [HHO] Failed to map RL %d to PSC %d
Line 7921: [HHO] Mapped RL %d to PSC %d
Line 7921: [HHO] Mapped RL %d to PSC %d
Line 7938: EHalDlRlStartCmd - uhal_Cmd_exec
Line 7938: EHalDlRlStartCmd - uhal_Cmd_exec
Line 7944: RlRelease - uhal_Cmd_exec
Line 7944: RlRelease - uhal_Cmd_exec
Line 7957: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7957: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7963: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7963: [HHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7971: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7971: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7977: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 7977: [HHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 8013: rlInfoCommand uhal cmd exec failed
Line 8013: rlInfoCommand uhal cmd exec failed
Line 8040: cannot find off for [%d %d]
Line 8040: cannot find off for [%d %d]
Line 8049: cannot find old off for [%d %d]
Line 8049: cannot find old off for [%d %d]
Line 8071: rlFdpchInfoArray is NULL pointer
Line 8071: rlFdpchInfoArray is NULL pointer
Line 8081: rlInfoArray is NULL pointer
Line 8081: rlInfoArray is NULL pointer
Line 8097: cannot find off for [%d %d]
Line 8097: cannot find off for [%d %d]
Line 8106: cannot find old off for [%d %d]
Line 8106: cannot find old off for [%d %d]
Line 8174: AttachRl(%d): oldRefCpich %d newRefCpich %d targetCellTm %d refTimeToSetSfn %d
Line 8174: AttachRl(%d): oldRefCpich %d newRefCpich %d targetCellTm %d refTimeToSetSfn %d
Line 8177: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d off %d refOff %d refRlSfn %d chs_tm_chip %d
Line 8177: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d off %d refOff %d refRlSfn %d chs_tm_chip %d
Line 8205: EHalDlRlSfnConfigCmd - uhal_Cmd_exec
Line 8205: EHalDlRlSfnConfigCmd - uhal_Cmd_exec
Line 8239: getDlDpchFrameOffset finds no phych connected to Rl
Line 8239: getDlDpchFrameOffset finds no phych connected to Rl
Line 8257: getDlDpchFrameOffset finds no dpch connected to Rl %d
Line 8257: getDlDpchFrameOffset finds no dpch connected to Rl %d
Line 8284: getDlDpchFrameOffset finds refCellInformation=0
Line 8284: getDlDpchFrameOffset finds refCellInformation=0
Line 8293: getDlDpchFrameOffset cannot look up reference Rl
Line 8293: getDlDpchFrameOffset cannot look up reference Rl
Line 8313: DedicatedModeController timesout configuring tgps info
Line 8313: DedicatedModeController timesout configuring tgps info
Line 8348: DedicatedModeController receives negative cnf from CompressedModeManager when configuring TGPS info
Line 8348: DedicatedModeController receives negative cnf from CompressedModeManager when configuring TGPS info
Line 8362: DedicatedModeController processTgpsIndMsg without timeout set
Line 8362: DedicatedModeController processTgpsIndMsg without timeout set
Line 8435: reqMsg send failure
Line 8435: reqMsg send failure
Line 8500: Dedicated mode re-used the Dpch RL with new modification
Line 8500: Dedicated mode re-used the Dpch RL with new modification
Line 8557: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8557: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8566: uphy_CDedicatedModeController_ConfigureExistingDpchRL: NO CHANGE
Line 8566: uphy_CDedicatedModeController_ConfigureExistingDpchRL: NO CHANGE
Line 8574: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Dpch RL %d
Line 8574: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Dpch RL %d
Line 8611: Dedicated mode re-used the Fdpch RL with new modification
Line 8611: Dedicated mode re-used the Fdpch RL with new modification
Line 8644: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8644: uhal EHalDlRlModifyCmd Failed for DEDI Existing RL %d
Line 8653: uphy_CDedicatedModeController_ConfigureExistingFdpchRL: NO CHANGE
Line 8653: uphy_CDedicatedModeController_ConfigureExistingFdpchRL: NO CHANGE
Line 8661: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Fdpch RL %d
Line 8661: uhal EHalDlRlModifyCmd command instance allocation failure for Existing Fdpch RL %d
Line 8688: confirmMsg == NULL pointer
Line 8688: confirmMsg == NULL pointer
Line 8717: confirmMsg send failure
Line 8717: confirmMsg send failure
Line 8745: IndicationMsg == NULL pointer
Line 8745: IndicationMsg == NULL pointer
Line 8764: IndicationMsg send failure
Line 8764: IndicationMsg send failure
Line 8789: Cannot create RefCellIndMsg
Line 8789: Cannot create RefCellIndMsg
Line 8809: Cannot send RefCellIndMsg
Line 8809: Cannot send RefCellIndMsg
Line 8813: [BCH for RefCell]: SendRefCellInd (%d %d)
Line 8813: [BCH for RefCell]: SendRefCellInd (%d %d)
Line 8817: [BCH for RefCell]: Ref. Cell Indication not supported
Line 8817: [BCH for RefCell]: Ref. Cell Indication not supported
Line 8847: DSDS: Unable to send RF pause done message to DSLRC
Line 8847: DSDS: Unable to send RF pause done message to DSLRC
Line 8851: DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 8851: DSDS: sendRfPauseDone sent to DSLRC interface with %d
Line 8873: 3G3G DSDS: uphy_CDedicatedModeController_forcedOOSIndStf
Line 8873: 3G3G DSDS: uphy_CDedicatedModeController_forcedOOSIndStf
Line 8901: 3G3G DSDS: DCH is paused, start sending forced Out of Syncs to RRC
Line 8901: 3G3G DSDS: DCH is paused, start sending forced Out of Syncs to RRC
Line 8946: RemainingFrames = %d
Line 8946: RemainingFrames = %d
Line 8953: Freeing up stopTfciBasedProtectionTimer
Line 8953: Freeing up stopTfciBasedProtectionTimer
Line 8972: ongoingDCHReason = %d
Line 8972: ongoingDCHReason = %d
Line 8992: txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 8992: txTimingCommand uhal command exec failed: Err Code %d Add Err Code %d
Line 9000: rollbackTxTmDpcPos: %d
Line 9000: rollbackTxTmDpcPos: %d
Line 9049: uhal EHalDlRlModifyCmd command exec failed for Fdpch RL %d
Line 9049: uhal EHalDlRlModifyCmd command exec failed for Fdpch RL %d
Line 9112: uhal EHalDlRlModifyCmd command exec failed for RL %d
Line 9112: uhal EHalDlRlModifyCmd command exec failed for RL %d
Line 9157: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing EDCH
Line 9157: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing EDCH
Line 9182: uphy_CDedicatedModeController_preprocessConfigMsg: UphyEdchReleaseReqMsg is Null
Line 9182: uphy_CDedicatedModeController_preprocessConfigMsg: UphyEdchReleaseReqMsg is Null
Line 9193: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing SC HSDSCH
Line 9193: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing SC HSDSCH
Line 9219: uphy_CDedicatedModeController_preprocessConfigMsg: UphySecHsdschReleaseReqMsg is Null
Line 9219: uphy_CDedicatedModeController_preprocessConfigMsg: UphySecHsdschReleaseReqMsg is Null
Line 9230: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing HSDSCH
Line 9230: uphy_CDedicatedModeController_preprocessConfigMsg: Releasing HSDSCH
Line 9256: uphy_CDedicatedModeController_preprocessConfigMsg: UphyHsdschReleaseReqMsg is Null
Line 9256: uphy_CDedicatedModeController_preprocessConfigMsg: UphyHsdschReleaseReqMsg is Null
Line 9259: uphy_CDedicatedModeController_preprocessConfigMsg: isRelForPreProcessinProgress=%d 
Line 9259: uphy_CDedicatedModeController_preprocessConfigMsg: isRelForPreProcessinProgress=%d 
Line 9285: uphy_CDedicatedModeController_processConfigMsg, isEdchConfigured = %d, isScHsdschConfigured = %d, isHsdschConfigured = %d
Line 9285: uphy_CDedicatedModeController_processConfigMsg, isEdchConfigured = %d, isScHsdschConfigured = %d, isHsdschConfigured = %d
Line 9299: uphy_CDedicatedModeController_processConfigMsg
Line 9299: uphy_CDedicatedModeController_processConfigMsg
Line 9304: uphy_CDedicatedModeController_processConfigMsg HHO message NULL
Line 9304: uphy_CDedicatedModeController_processConfigMsg HHO message NULL
Line 9352: uphy_CCpcResources is NULL.
Line 9352: uphy_CCpcResources is NULL.
Line 9382: UrrcCPCReleaseReqMsg is Null
Line 9382: UrrcCPCReleaseReqMsg is Null
Line 9402: **Release EDCH forcely
Line 9402: **Release EDCH forcely
Line 9406: Cancel pendingEdchRelease token
Line 9406: Cancel pendingEdchRelease token
Line 9413: Clearing EdchResourcesController->activationTimeTokenPtr
Line 9413: Clearing EdchResourcesController->activationTimeTokenPtr
Line 9423: edchResourceController_ptr->UlModifyTokenPtr = TRUE, So, it's cleared.
Line 9423: edchResourceController_ptr->UlModifyTokenPtr = TRUE, So, it's cleared.
Line 9433: edchResourceController_ptr->DlModifyTokenPtr = TRUE, So, it's cleared.
Line 9433: edchResourceController_ptr->DlModifyTokenPtr = TRUE, So, it's cleared.
Line 9458: UphyEdchReleaseReqMsg is Null
Line 9458: UphyEdchReleaseReqMsg is Null
Line 9463: **Condition check not satisfied to release EDCH forcely
Line 9463: **Condition check not satisfied to release EDCH forcely
Line 9466: Clearing EdchResourcesController->activationTimeTokenPtr
Line 9466: Clearing EdchResourcesController->activationTimeTokenPtr
Line 9496: **Release SC HSDSCH forcely
Line 9496: **Release SC HSDSCH forcely
Line 9500: Cancel pendingSecHsDschRelease token
Line 9500: Cancel pendingSecHsDschRelease token
Line 9528: UphySecHsdschReleaseReqMsg is Null
Line 9528: UphySecHsdschReleaseReqMsg is Null
Line 9533: **Condition check not satisfied to release SC HSDSCH forcely
Line 9533: **Condition check not satisfied to release SC HSDSCH forcely
Line 9552: **Release HSDSCH forcely
Line 9552: **Release HSDSCH forcely
Line 9556: Cancel pendingSecHsDschRelease token
Line 9556: Cancel pendingSecHsDschRelease token
Line 9584: UphyHsdschReleaseReqMsg is Null
Line 9584: UphyHsdschReleaseReqMsg is Null
Line 9589: **Condition check not satisfied to release HSDSCH forcely
Line 9589: **Condition check not satisfied to release HSDSCH forcely
Line 9609: uphy_CDedicatedModeController_updateSfnCfnDiff: Not in dedicated mode
Line 9609: uphy_CDedicatedModeController_updateSfnCfnDiff: Not in dedicated mode
Line 9622: compModeScheduleStopForHhOStf runs in currentRSN %d to stop scheduling compressed mode GAP for DCH HHO
Line 9622: compModeScheduleStopForHhOStf runs in currentRSN %d to stop scheduling compressed mode GAP for DCH HHO
Line 9652: uphy_CDedicatedModeController_compModeScheduleStopStf runs in currentRSN %d to stop scheduling compressed mode GAP for DCH HHO
Line 9652: uphy_CDedicatedModeController_compModeScheduleStopStf runs in currentRSN %d to stop scheduling compressed mode GAP for DCH HHO
Line 9698: Cancel compModeScheduleStopToken while processing DCH HHO
Line 9698: Cancel compModeScheduleStopToken while processing DCH HHO
Line 9713: Schedule Comp Mode Stop Token for processing DCH HHO/Secondary(primary) HS Rel/Config compModeGapStopMarginSlots %d compModeScheduleStopRSN %d
Line 9713: Schedule Comp Mode Stop Token for processing DCH HHO/Secondary(primary) HS Rel/Config compModeGapStopMarginSlots %d compModeScheduleStopRSN %d
Line 9720: Stop scheduling compressed mode for processing DCH HHO/Secondary(primary) HS Rel/Config
Line 9720: Stop scheduling compressed mode for processing DCH HHO/Secondary(primary) HS Rel/Config
Line 9775: IRAT Measurement complete Trigger DCH HHO
Line 9775: IRAT Measurement complete Trigger DCH HHO
