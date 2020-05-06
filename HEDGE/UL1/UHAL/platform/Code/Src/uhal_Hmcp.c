Line 333: uhal_CHmcp_GetRfRATState rfState %d
Line 347: DSP SHM mapped
Line 353: DSP SHM unmapped
Line 389: activeStackId %d uhal_CHmcp_LoopBackMode1. LoopBackMode1: %d
Line 400: activeStackId %d uhal_CHmcp_LoopBackMode2. LoopBackMode2: %d
Line 407: uhal_Hmcp_SetRbTestMode. RbTestmode: %d, RbTestmode is set but IPC not sent to DSP
Line 576: activeStackId %d [CGI ACQUISITION] uhal_Hmcp_SetCgiAcq CgiAcquisition %d
Line 630: activeStackId %d Skip Initial configuration.
Line 641: [3GF SLP] uhal_HmcpInitialDecoderBlockReset (SW_RESETn.SymbProc_CS_ApbClk, SW_RESETn.SymbProc_CS_FuncClk, SP_CS_SW_RESET)
Line 651: uhal_HmcpInfraGenClockSet
Line 868: activeStackId %d Failed to allocate U-HAL DL debug storage. Storing is disabled!
Line 915: activeStackId %d Store REG_CK_REG0[%d] = 0x%x
Line 919: activeStackId %d Store uhal_CHmcpChipsetData[activeStackId].REG_CK_REG1[%d] = 0x%x
Line 925: activeStackId %d Store uhal_CHmcpChipsetData[activeStackId].RX_MODE_INDICATOR = 0x%x
Line 929: activeStackId %d Store uhal_CHmcpChipsetData[activeStackId].TSN14Bit_Mode = 0x%x
Line 970: activeStackId %d isResume %d isTDDActive %d HW destination control(3GRATSel). BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 981: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].REG_CK_REG0[%d] = 0x%x
Line 990: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].REG_CK_REG1[%d] = 0x%x
Line 1001: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].RX_MODE_INDICATOR(R7) = 0x%x
Line 1005: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].TSN14Bit_Mode = 0x%x
Line 1009: activeStackId %d Restore uhal_CHmcpChipsetData[activeStackId].RX_MODE_INDICATOR(R6) = 0x%x
Line 1071: uhal_HmcpCpichFrame_LISR
Line 1078: CPICH_FRAME_HISR execution failure
Line 1291: REG TUNING WRITE: cnt%d val0x%08X
Line 1434: [PRACH debugging log] int_status_aich_lisr 0x%x
Line 1450: [DPCH debugging log] int_status_TxFr2E_lisr 0x%x, int_status_TxFr10E_lisr 0x%x
Line 1459: [TxRx Timing Check] Ref RL No %d :: DL SFN %d, Slot %d, TxTmSlot %d, TxTmChip %d, Tx_tm_time_r %d, TxtimeDIff(URTG-TxTM) %d
Line 1490: Enable CPICH int. However, modem is off
Line 1509: uhal_Hmcp_EnableInterrupt stack %d 
Line 1537: [CGI ACQUISITION] refFrame %d refSlot %d refChip %d cellkFrame %d cellkSlot %d cellkChip %d
Line 1571: activeStackId %d uhal_HmcpCPI_HISR: sysvalid %d dspPowStatus %d lapTime %d
Line 1588: activeStackId %d uhal_HmcpCPI_HISR Return
Line 1681: isFrameIntAfterWakeUp = %d, cpichFrameIntCount = %d, index = %d
Line 1726: activeStackId %d ***Don't send signal to SMC: diffRsn = %d
Line 1762: cellRtgSlot=%d cellRtgChip=%d boundary RSN %d current RSN %d boundarySFN %d currentSFN %d
Line 1771: activeStackId %d uhal_HmcpCPI_HISR: hw_sfn %d hw_slot %d hw_chip %d
Line 1812: activeStackId %d ***uhal_CHmcpChipsetData[activeStackId].FrameIntCnt %d isUphyInitialized %d 
Line 1817: activeStackId %d ***uhal_CHmcpChipsetData[activeStackId].FrameIntCnt %d isUphyInitialized %d 
Line 1835: Disable Aux CPICH int.
Line 1853: Enable Aux CPICH int.
Line 1857: Enable Aux CPICH int. However, modem is off
Line 1870: uhal_HmcpUCpuAux_LISR
Line 1877: uhal_HmcpRakeAux HISR execution failure
Line 1887: activeStackId %d MainSubInfo %d uhal_HmcpUCpuAux_HISR Return
Line 1931: uhal_HmcpPamPowerControl
Line 2036: isFirstTimeLogging = %d, index = %d, isRfrejectByDsl1rc = %d
Line 2056: uhal_AGCFingerFreezeDSDS - AGCFingerFreeze == TRUE - Freezing all the fingers and AGC, fn_frz_frc=0x3fffffff
Line 2065: uhal_AGCFingerFreezeDSDS - AGCFingerFreeze == FALSE - Unfreezing all the fingers and AGC, fn_frz_frc=0x0
Line 2071: uhal_AGCFingerFreezeDSDS - UHAL_AllowAGCFingerFreeze == FALSE
Line 2112: uhal_IsAGCFingerFreeze, fn_frz_frc=0x%x, result = %d
Line 2118: activeStackId %d uhal_hmcpDLPCRegisterStatusDump - Start
Line 2122: activeStackId %d uhal_hmcpDLPCRegisterStatusDump - End
