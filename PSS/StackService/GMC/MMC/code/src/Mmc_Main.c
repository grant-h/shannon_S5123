Line 372:    pMmc_GeneralData->SimPresent : %d -> %d 
Line 395:    pMmc_GeneralData->SysMode : %d -> %d 
Line 418:    pMmc_GeneralData->EPDmode : %d -> %d 
Line 441:    pMmc_GeneralData->StartFullService : %d -> %d 
Line 464:    pMmc_GeneralData->RefreshRequired : %d -> %d 
Line 487:    pMmc_GeneralData->UEMode : %d -> %d 
Line 510:    pMmc_GeneralData->CsServicesSupport : %d -> %d 
Line 533:    pMmc_GeneralData->VoiceDomainPref : %d -> %d 
Line 556:    pMmc_GeneralData->MtCallIndToUser : %d -> %d 
Line 579:    pMmc_GeneralData->NetModeSel : %d -> %d 
Line 604:    pMmc_GeneralData->DualSimStatus : %d -> %d 
Line 628:    pMmc_GeneralData->ServiceDomain : %d -> %d 
Line 680:    pMmc_GeneralData->DDS : %d -> %d 
Line 703:    pMmc_GeneralData->ImsDDS : %d -> %d 
Line 729:    pMmc_GeneralData->StartByModeSelChanged : %d -> %d 
Line 752:    pMmc_GeneralData->NetworkLockStatus : %d -> %d 
Line 897:    pMmc_GeneralData->hVolteSupport : %d -> %d 
Line 908:    pMmc_GeneralData->CTChVoLTEFlag : %d -> %d 
Line 918:    pMmc_GeneralData->RestartCausePsDet : %d -> %d 
Line 941:    pMmc_GeneralData->RoamPref : %d -> %d 
Line 989:    pMmc_GeneralData->Is2GDisabled : %d -> %d 
Line 1012:    pMmc_GeneralData->IsCdmaStarted : %d -> %d 
Line 1032:    EmcSupportedRat : %s -> %s
Line 1073:    pMmc_GeneralData->nsSelectedMode : %d -> %d 
Line 1096:    pMmc_GeneralData->NrImsSupported : %d -> %d 
Line 1112: [I]===================== MMC General Data Display =====================
Line 1113: [I][SysMode] 		: %s
Line 1114: [I][NsSelectedMode] : %s
Line 1115: [I][EPDMode] 		: %s
Line 1116: [I][EmcSupportedRat] : %s
Line 1117: [I][Is2GDisabled] : %s
Line 1118: [I]-
Line 1119: [I][SIM Present] 	: %s
Line 1120: [I][StartFullService]: %s
Line 1121: [I][NetModeSel]		: %d
Line 1122: [I][StartByModeSelChanged] : %d
Line 1124: [I]-
Line 1126: [I][DualSimStatus]	: %d
Line 1128: [I][ServiceDomain]	: %d
Line 1132: [I][DDS] 			: %d
Line 1133: [I][ImsDDS]			: %d
Line 1135: [I]-
Line 1143: [I][RoamPref]		: %d
Line 1144: [I][VoiceDomainPref]   : %d
Line 1146: [I][hVolteSupport]	  : %d
Line 1148: [I][CTChVoLTEFlag]	  : %d
Line 1149: [I][RestartCausePsDet] : %d
Line 1150: [I]-
Line 1152: [I][NetworkLockStatus] : 0x%x
Line 1153: [I][RefreshRequired	  : %d
Line 1154: [I][UEMode]			  : 0x%x
Line 1155: [I][CsServicesSupport] : %d
Line 1156: [I][MtCallIndToUser]   : %d
Line 1160: [I][[CdmaStarted]] : %d
Line 1161: [I]=================================================================
Line 1240:    %s : 
Line 1357: [W]Invalid Mode Received !! , selected mode=%d
Line 1458: [W]Invalid Mode Received !! , selected mode=%d
Line 1477:    %s : Initialising MMC data 
Line 1570: %s : 
Line 1720:    #4. Send MM/EMM init Req and EMM Mode Update Requests
Line 1742: %s:: Entry
Line 1743:    StartByModeSelChanged value read from registry: %d
Line 1759:    StartByModeSelChanged from NS: %d
Line 1768:    StartByModeSelChanged = FALSE from NS, value from registry : %d
Line 1773:    Final value of StartByModeSelChanged : %d
Line 1791:    #1.1 StartFullService : %s, Sim Present : %s
Line 1793: [W]Check IMEI certi fail or SIM card existence
Line 1798: [W]Check PIN lock 
Line 1816:    EPDmode from NS: %s (%d)
Line 1822:    User Disable 2G feature: %d
Line 1845: [!]Changing EPD mode for TMO requirement!!
Line 1861: [!]EPD mode : %s, EmcSupportedRat : %s
Line 1865: [!]Invalid Selection Mode !!
Line 1876:    #2. MMC Operating mode : %s (NS Selected-%s)
Line 1877:    #   StartForRefresh : %d, StartByModeSelChanged : %d 
Line 1893:    ServiceDomain from NS: %d
Line 1913:    # Received From NS IntDds: %d, ImsDds : %d 
Line 1914:    # Current stack values IntDds: %d, ImsDds : %d 
Line 1918:    #3. DualSimStatus : %d 
Line 1936:    StartNwData CTChVoLTE Flag : %d RestartCausePsDet : %d
Line 1945:    GMC_GMSS_VOLTE_ON_OFF: %d
Line 1958:    CTChVoLTE Flag : %d
Line 2009:    #5. Send USIM Start Req and SIM Read Req
Line 2012: %s:: Exit
Line 2030: %s : 
Line 2356: %s : IRAT to LTE is allowed ? %s 
Line 2357:    EUTRA Status - %d, CsfbIratToLteState - %d 
Line 2365:    BLOCK PLMN Selection on LTE - MO/MT Call at HEDGE in progress;
Line 2397:    UNBLOCK PLMN Selection on LTE - Re-Setting CSFB Flag and re-enable EUTRA if diabled due to Call
