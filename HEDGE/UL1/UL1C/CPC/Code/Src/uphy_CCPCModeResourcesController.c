Line 132: Instance created for stackId %d
Line 132: Instance created for stackId %d
Line 240: [CPC] Config received: SMC CFN=%d, isActivationTime=%d, activationTime=%d
Line 240: [CPC] Config received: SMC CFN=%d, isActivationTime=%d, activationTime=%d
Line 245: S0 [CPC] Release received: CFN=%d
Line 245: S0 [CPC] Release received: CFN=%d
Line 260: S0 [CPC] Deactivate received: CFN=%d
Line 260: S0 [CPC] Deactivate received: CFN=%d
Line 277: S0 process - unknown msgId
Line 277: S0 process - unknown msgId
Line 306: S0 [CPC] activation time[CFN %d, RSN %d] current[CFN %d, RSN %d]
Line 306: S0 [CPC] activation time[CFN %d, RSN %d] current[CFN %d, RSN %d]
Line 372: S0 [CPC]Negative CNF for CPC config Req RSN seems stuck.
Line 372: S0 [CPC]Negative CNF for CPC config Req RSN seems stuck.
Line 389: S0 [CPC] activationTimeSTF: CFN=%d, Boundary RSN=%d, Current RSN=%d, UrrcState=%d, StfRsnDiff= %d, RsnProbCounter= %d, PrvStfRsn=%d
Line 389: S0 [CPC] activationTimeSTF: CFN=%d, Boundary RSN=%d, Current RSN=%d, UrrcState=%d, StfRsnDiff= %d, RsnProbCounter= %d, PrvStfRsn=%d
Line 461: S0 STF triggered after UL_ESTABLISHEMENT for CPC DTX configuration 
Line 461: S0 STF triggered after UL_ESTABLISHEMENT for CPC DTX configuration 
Line 469: S0 CPC Configured at H/W CFN=%d, S/W CFN=%d
Line 469: S0 CPC Configured at H/W CFN=%d, S/W CFN=%d
Line 489: S0 [CPC] Waiting for UL establishment DTXSync ActEnablingDelay = %d, ActualActivationCFN = %d, ueDtxCycle1_10ms = %d, ueDtxCycle2_10ms= %d, DtxStartSync = %d  
Line 489: S0 [CPC] Waiting for UL establishment DTXSync ActEnablingDelay = %d, ActualActivationCFN = %d, ueDtxCycle1_10ms = %d, ueDtxCycle2_10ms= %d, DtxStartSync = %d  
Line 521: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d, AddDelayCounter=%d
Line 521: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d, AddDelayCounter=%d
Line 531: S0  Negative CNF for CPC config Req as DCH/EDCH/HSDSCH config failed during HHO
Line 531: S0  Negative CNF for CPC config Req as DCH/EDCH/HSDSCH config failed during HHO
Line 571: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d
Line 571: S0 [CPC] Resubmitting activationTimeSTF: DchCellChanging=%d, HsDschCellChanging=%d, isUlEstablished=%d, H/W CFN=%d, S/W CFN=%d
Line 587: S0 process - unknown msgId
Line 587: S0 process - unknown msgId
Line 596: S0 [CPC] Exiting the old STF STFNumber=%d LatestSTFNumber=%d
Line 596: S0 [CPC] Exiting the old STF STFNumber=%d LatestSTFNumber=%d
Line 611: S0 [CPC] uphy_CCPCModeResourcesController_TriggerWaitingConfig
Line 611: S0 [CPC] uphy_CCPCModeResourcesController_TriggerWaitingConfig
Line 636: S0 [CPC]Malfunction* uphy_CCPCModeResourcesController_TriggerWaitingConfig called when IsCpcConfigWaiting was false.
Line 636: S0 [CPC]Malfunction* uphy_CCPCModeResourcesController_TriggerWaitingConfig called when IsCpcConfigWaiting was false.
Line 652: S0 [CPC] WaitAfterUlEstablishedSTF: CFN=%d, RSN=%d 
Line 652: S0 [CPC] WaitAfterUlEstablishedSTF: CFN=%d, RSN=%d 
Line 700: S0 [CPC] uphy_CCPCModeResourcesController_CalcActualActivationCFN: CurrentCFN=%d, EnablingDelayStartCfn=%d CurrentAndActDiff=%d, ActEnablingDelay = %d, ActualActivationCfnDtxDrx = %d
Line 700: S0 [CPC] uphy_CCPCModeResourcesController_CalcActualActivationCFN: CurrentCFN=%d, EnablingDelayStartCfn=%d CurrentAndActDiff=%d, ActEnablingDelay = %d, ActualActivationCfnDtxDrx = %d
Line 710: S0 [CPC] CPCModeConfig: CFN=%d
Line 710: S0 [CPC] CPCModeConfig: CFN=%d
Line 718: S0 [CPC] CPC ILM mesasge cleared
Line 718: S0 [CPC] CPC ILM mesasge cleared
Line 731: S0  FATAL ERROR: DTX must be enabled in every CPC DTX/DRX CONFIG REQ
Line 731: S0  FATAL ERROR: DTX must be enabled in every CPC DTX/DRX CONFIG REQ
Line 762: S0 [CPC] CPC ILM mesasge cleared
Line 762: S0 [CPC] CPC ILM mesasge cleared
Line 776: S0 [CPC] CPCModeDeactivate: CFN=%d
Line 776: S0 [CPC] CPCModeDeactivate: CFN=%d
Line 797: S0 [CPC] CPCModeRelease: CFN=%d
Line 797: S0 [CPC] CPCModeRelease: CFN=%d
Line 824: S0 [CPC] sendConfirmationMsg: CFN=%d
Line 824: S0 [CPC] sendConfirmationMsg: CFN=%d
Line 850: S0 only Config,Release and Deactivate need confirm
Line 850: S0 only Config,Release and Deactivate need confirm
Line 855: S0 [CPC] sendConfirmationMsg-Failure[%d] 
Line 855: S0 [CPC] sendConfirmationMsg-Failure[%d] 
Line 861: S0 sendConfirmationMsg-Success[%d] 
Line 861: S0 sendConfirmationMsg-Success[%d] 
Line 868: S0 send
Line 868: S0 send
Line 874: S0 [CPC] CPC ILM mesasge cleared
Line 874: S0 [CPC] CPC ILM mesasge cleared
Line 894: S0 S0  ActualDtxMsg pointer is null
Line 894: S0 S0  ActualDtxMsg pointer is null
Line 898: S0 [CPC] CpcDtxAsnToAct: CFN=%d
Line 898: S0 [CPC] CpcDtxAsnToAct: CFN=%d
Line 949: S0 [CPC] processUeDtxInfo: CFN=%d, UrrcState=%d
Line 949: S0 [CPC] processUeDtxInfo: CFN=%d, UrrcState=%d
Line 961: S0  ActualDtxMsg pointer is null
Line 961: S0  ActualDtxMsg pointer is null
Line 1068: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1068: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1090: S0 [CPC] DTX MODEM configuration done: CFN:%d, Slot:%d -- ActualActivationCFN:%d, activationTime:%d, EnablingDelay:%d
Line 1090: S0 [CPC] DTX MODEM configuration done: CFN:%d, Slot:%d -- ActualActivationCFN:%d, activationTime:%d, EnablingDelay:%d
Line 1100: S0 [CPC] DTX MODEM configuration Parameters: ueDtxDrxOffset:%d edchTti:%d DtxCycle1:%d DtxCycle2:%d Start1:%d Start2:%d ueDtxCycle2InactivityThreshold:%d
Line 1100: S0 [CPC] DTX MODEM configuration Parameters: ueDtxDrxOffset:%d edchTti:%d DtxCycle1:%d DtxCycle2:%d Start1:%d Start2:%d ueDtxCycle2InactivityThreshold:%d
Line 1109: S0 [CPC] DTX MODEM configuration Parameters: ueDtxLongPreambleLength:%d cqiDtxTimer:%d UeDpcchBurst1:%d UeDpcchBurst2:%d UlDpcchSlotFormatInfo:%d 
Line 1109: S0 [CPC] DTX MODEM configuration Parameters: ueDtxLongPreambleLength:%d cqiDtxTimer:%d UeDpcchBurst1:%d UeDpcchBurst2:%d UlDpcchSlotFormatInfo:%d 
Line 1115: S0  FATAL ERROR: CPCConfigMsg is NULL
Line 1115: S0  FATAL ERROR: CPCConfigMsg is NULL
Line 1137: S0  FATAL ERROR: EDCH not configured
Line 1137: S0  FATAL ERROR: EDCH not configured
Line 1145: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1145: S0  EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1153: [CPC] DTX DSP configuration done: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d
Line 1153: [CPC] DTX DSP configuration done: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d
Line 1181: S0  FATAL ERROR: HSDSCH not configured.
Line 1181: S0  FATAL ERROR: HSDSCH not configured.
Line 1188: S0 [CPC] DRXEnDelayConfig: CFN=%d, UrrcState=%d
Line 1188: S0 [CPC] DRXEnDelayConfig: CFN=%d, UrrcState=%d
Line 1227: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1227: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1235: S0 CPC DRX configuration done CFN:%d Slot:%d SubFr:%d
Line 1235: S0 CPC DRX configuration done CFN:%d Slot:%d SubFr:%d
Line 1242: S0 [CPC] DRX configuration Paramters: DRX cycle=%d, Inactivity TH=%d, tauDpch=%d, tauDrxReg=%d
Line 1242: S0 [CPC] DRX configuration Paramters: DRX cycle=%d, Inactivity TH=%d, tauDpch=%d, tauDrxReg=%d
Line 1244: S0 [CPC] CPC ILM mesasge cleared
Line 1244: S0 [CPC] CPC ILM mesasge cleared
Line 1268: S0 [CPC] processUeDrxInfo: CFN=%d
Line 1268: S0 [CPC] processUeDrxInfo: CFN=%d
Line 1309: [CPC] ProcessDtxModeRelease: CFN=%d isDsRelease %d
Line 1309: [CPC] ProcessDtxModeRelease: CFN=%d isDsRelease %d
Line 1313: [CPC] ProcessDtxModeRelease: clear TokenDTXDSPConfig
Line 1313: [CPC] ProcessDtxModeRelease: clear TokenDTXDSPConfig
Line 1332: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1332: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1343: [CPC] DTX released: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d, isDsRelease=%d
Line 1343: [CPC] DTX released: SMC CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d, isDsRelease=%d
Line 1369: [CPC] ProcessDrxModeRelease: CFN=%d isDsRelease %d
Line 1369: [CPC] ProcessDrxModeRelease: CFN=%d isDsRelease %d
Line 1373: [CPC] ProcessDtxModeRelease: clear TokenDRXEnDelayConfig
Line 1373: [CPC] ProcessDtxModeRelease: clear TokenDRXEnDelayConfig
Line 1383: S0  EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1383: S0  EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1392: [CPC] DRX released: SW CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d isDsRelease=%d
Line 1392: [CPC] DRX released: SW CFN=%d, HW CFN=%d, Slot=%d, SubFr=%d, activationTime=%d isDsRelease=%d
Line 1413: S0 [CPC] ProcessHsscchLessModeInfo: CFN=%d
Line 1413: S0 [CPC] ProcessHsscchLessModeInfo: CFN=%d
Line 1440: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1440: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1462: S0 [CPC] ProcessHsscchLessModeRelease: CFN=%d isDsRelease %d
Line 1462: S0 [CPC] ProcessHsscchLessModeRelease: CFN=%d isDsRelease %d
Line 1472: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1472: S0  EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1479: S0 uphy_CCPCModeResourcesController_CheckandFreeAllTokens to check all the attribute Tokens.
Line 1479: S0 uphy_CCPCModeResourcesController_CheckandFreeAllTokens to check all the attribute Tokens.
Line 1482: S0 Freeing up.TokenactivationTimeSTF
Line 1482: S0 Freeing up.TokenactivationTimeSTF
Line 1488: S0 Freeing up.TokenDTXDSPConfig
Line 1488: S0 Freeing up.TokenDTXDSPConfig
Line 1494: S0 Freeing up.TokenDRXEnDelayConfig
Line 1494: S0 Freeing up.TokenDRXEnDelayConfig
Line 1500: S0 Freeing up.TokenWaitAfterUlEstablished
Line 1500: S0 Freeing up.TokenWaitAfterUlEstablished
Line 1530: uphy_CCPCModeResourcesController_configDuringResume DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1530: uphy_CCPCModeResourcesController_configDuringResume DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1539: EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 1539: EHalHsPdschHarqConfigCmd fail - uhal_Cmd_exec
Line 1550: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1550: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1573: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1573: EHalUeDtxConfigCmd fail - uhal_Cmd_exec
Line 1604: EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1604: EHalUeDrxConfigCmd fail - uhal_Cmd_exec
Line 1617: uphy_CCPCModeResourcesController_releaseDuringPause DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1617: uphy_CCPCModeResourcesController_releaseDuringPause DRXEnabled %d, DTXEnabled %d, LessEnabled %d
Line 1621: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDTXDSPConfig token
Line 1621: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDTXDSPConfig token
Line 1628: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDRXEnDelayConfig token
Line 1628: uphy_CCPCModeResourcesController_releaseDuringPause: Cancel TokenDRXEnDelayConfig token
Line 1643: EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1643: EHalUeDrxReleaseCmd fail - uhal_Cmd_exec
Line 1656: EHalUeDtxReleaseCmd fail - uhal_Cmd_exec
Line 1656: EHalUeDtxReleaseCmd fail - uhal_Cmd_exec
Line 1669: EHalHsPdschHarqReleaseCmd fail - uhal_Cmd_exec
Line 1669: EHalHsPdschHarqReleaseCmd fail - uhal_Cmd_exec
