Line 145: Error: Null Pointer
Line 175: Error: Null Pointer
Line 219: RemainStopStatus (Cur=%d, New=%d), ModeChange=%d
Line 233: StopByModeSelChanged : %d
Line 238: New Mode change started while previous one is ongoing, stop the timer
Line 283: Stack is not initialized. Sending RSP...
Line 300: Stop request comes before finishing previous Service Domain Change request, Send failure response
Line 325: StopNetwork by FM
Line 328: Error: Null Pointer
Line 336: NS sending flight mode on trigger to BDA
Line 348: Stoppingis in progress by SIM EF RAT chane - (NsRestartCause=%d)
Line 413: Icon handling during mode change (SaveCsStatus=%d) (SavedAccessTech=%x) (CellId=%d)
Line 460: (NsStackState=%d, FullService=%d, RestartCause=%d, NsStopNetworkWithoutDetach=%d)
Line 544: In non-LTE mode, CNS doesn't trigger stopping procedure for EMM
Line 645: CsServicesSupport=%d, UEMode=%d, VoiceDomainPref=%d, MtCallIndToUser=%d
Line 672: CsServicesSupport=%d, UEMode=%d, VoiceDomainPref=%d, MtCallIndToUser=%d
Line 712: EmergencyFlag=%d, operationMode=%d, RequiredDomain=%d, ModeSelChanged=%d, DualSimStatus%d
Line 725: Ignore NS_START, stack is stopping or RemainStopNetwork is TRUE
Line 739: Ignore NS_START, stack already initialized
Line 869: IMSI change restart (RequiredDomain=%d)
Line 886: Unexpected domain:%d
Line 894: StartAllStackServices (EnableFullService =%d, NsStackState= %d, RefreshStart=%d isCdmaStarted=%d)
Line 934: (SelectedMode=%d)
Line 1001: Error: Null Pointer
Line 1027: NetworkLockStatus :%d
Line 1086:  RestartCausePsDet is True
Line 1093:  RegSAP_GeneralData.NetModeSel %d 
Line 1104:  DDS %d, ImsDDS %d 
Line 1111: Error: Null Pointer
Line 1222: Error: Null Pointer
Line 1243: Error: Null Pointer
Line 1419: ReStartAllStackServices (NsStackState=%d)
Line 1494: Preferred Attach=%d, PBMControl=%d
Line 1523: Exceptional case
Line 1529: NOT Valid SIM State curSimState = %d
Line 1540: Error: Null Pointer
Line 1563: Error: Null Pointer
Line 1574: Error: Null Pointer
Line 1612: NS sending Power-off trigger to BDA
Line 1622: Error: Null Pointer
Line 1645: Error: Null Pointer
Line 1674: In non-LTE mode, CNS doesn't trigger stopping procedure for EMM
Line 1726: Error: Null Pointer
Line 1755: HandleStackTermination (StackState=%x, StackModuleState=%x, RestartCause=%d)
Line 1894: Error: Null Pointer
Line 1918: Error: Null Pointer
Line 1986: sendStopNetworkRsp=%d, sendPowerOffCnf =%d
Line 1999: Error: Null Pointer
Line 2011: Waiting for PS session clearance
Line 2041: During mode change, plmn id is not updated
Line 2099: PerformModeSelectionProcedure (RestartCause=%d), isManualNetModeEnabled %d, isENS_EnabledinReg %d
Line 2126: ENS EPD Mode %d
Line 2169: SimEFData is null
Line 2176: Reading EF_RAT Failed
Line 2191: Set to DualMode manually as exception
Line 2205: Follow selectedMode(%d) from AP (manualReg:%d, Ens:%d, Forced:%d)
Line 2223: SIM is not found. so Triple mode can't be allowed
Line 2233: IsChnOpen(%d), Allow mode set by AP
Line 2263: Selected Mode=%d, applCoverage=%d, simCardType=%d
Line 2329: AlpssCfg.Ens_enabled : %d
Line 2463: ns_ChangetoNonLteMode (from : %d to %d)
Line 2525: ns_PerformModeCompliance (from : %d to %d)
Line 2553: ns_ChangeGsmDisableMode (from : %d to %d)
Line 2567: Error: Null Pointer
Line 2586: SIM START IND (SimPresent=%d, SimState=%d, Pin1Status=%d, Pin2Status=%d)
Line 2589: Error: Null Pointer
Line 2631: Sim stop cnf, stackState(%d)
Line 2647: NetnameChangeReq
Line 2654: Error: Null Pointer
Line 2665: SimVerfiyCompleteInd
Line 2676: SmsRead State will be updated by SMS_DATA_START_IND
Line 2704: IMSI ChangeInd handling!
Line 2737: CS call is active or Stack is stopping, Stack REFRESH is not happened
Line 2747: Stack is not initialised, skip stack restart
Line 2758: selectedMode changed to : %d
Line 2840: Icon handling during mode change (SaveCsStatus=%d) (SavedAccessTech=%x) (CellId=%d)
Line 2872: Mode Update Request received when Stack is not initialized
Line 2877: NS current operating Mode: %d, New Mode: %d
Line 2904: New Mode Update request started while previous one is ongoing, Stop the timer
Line 2925: Received Domain = %d
Line 2942: Unexpected domain:%d
Line 2989: Error: Null Pointer
Line 2993: Error: Null Pointer
Line 3043: Unexpected domain:%d
Line 3049: attachType = %d attachCs = %d, attachPs = %d)
Line 3068: Received Mode = %d, New Mode = %d
Line 3072: Current mode is same as new mode update request, Trigger Mode update response
Line 3076: Exception case : For CDMA<->CDMA Trigger Mode Update to CDMA
Line 3087: Received Mode updated as %d
Line 3103: Selected Mode will be updated when NS gets RSP(Saved: mode=%d)
Line 3253: Unexpected domain:%d
Line 3312: Error: Null Pointer
Line 3324: Error: Null Pointer
Line 3357: Error: Null Pointer
Line 3385: DualSimStatus %d
Line 3388: Error: Null Pointer
Line 3413: PsmStatus %d, T3412Ext 0x%x T3324 0x%x
Line 3415: Error: Null Pointer
Line 3680: ns_sendGnssNotificationMsg: type=%d, sub_id=0x%x
Line 3683: Error: Null Pointer
Line 3706: ns_checkGnssTimeAidValid: NSstate=%d, RAT=%d
Line 3741: ns_Handle_ns_NsGpsFreqAidSetReq: NSstate=%d
Line 3743: UE registration info: CS Rat=%S, CS Reg Status=0x%X, PS Rat=%d, PS Reg Status=0x%X
Line 3766: No RAT Case
Line 3790: Error: Null Pointer
Line 3803: Error: Null Pointer
Line 3815: UE is not registered %d
Line 3818: Error: Null Pointer
Line 3851: ns_Handle_ns_NsGpsTimeAidSetReq: NSstate=%d, RAT=%d
Line 3857: Error: Null Pointer
Line 3870: UE registration info: CS Rat=%S, CS Reg Status=0x%X, PS Rat=%d, PS Reg Status=0x%X
Line 3893: No RAT Case
Line 3913: Error: Null Pointer
Line 3919: Not a valid RAT %d
Line 3922: Error: Null Pointer
Line 3947: DDSChange %d IntDDSMode %d
Line 3949: Error: Null Pointer
Line 3958: Main.PS.Stack: %d Main.IMS.Stack: %d
Line 4089: Error: Null Pointer
Line 4090: triggering stop to SRIF
Line 4096: Error: Null Pointer
Line 4097: triggering start to SRIF
