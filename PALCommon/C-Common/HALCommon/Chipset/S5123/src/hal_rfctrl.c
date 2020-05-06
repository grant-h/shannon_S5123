Line 1032: [RFCTRL] HAL_SetRfCtrl_Clock
Line 1119: [RFCTRL] InitRfCtrl
Line 1201: [RFCTRL] InitRfCtrl
Line 1255: [RFCTRL] rat(%d)
Line 1262: [start] HAL_RFCTRL_Data_Clear
Line 1281: [end] HAL_RFCTRL_Data_Clear
Line 1289: [HAL_GetSPIRatStatus] SINGLE_GEN_MASK: 0x%x, ARB0_MASK_(A/B): 0x%x 0x%x ARB0_PRIORITY8: 0x%x, ARB1_MASK_(A/B): 0x%x 0x%x, ARB1_PRIORITY8: 0x%x
Line 1296: There is no [IRAT_MUX_RXADC_CTL_RD] register
Line 1328: [FrSyncStartMarconi] Call STARTMARCONI Task
Line 1544: [RFCTRL] SetRfIratMux: RAT(%d -> %d)
Line 1680: HAL_CfgSet2GIratMuxtds index %d
Line 1811: Already Marconi turn off
Line 1921: [RFCTRL] HAL_Clear_Speedy_Mem : done! cnt[%d]
Line 2006: [RFCTRL] HAL_SetRxUpdateCmd: mmWave cc(%d), mode(%d), addr(0x%X), data(0x%X)
Line 2081: [RFCTRL] HAL_SetRxUpdateCmd: Not supported CC(%d)
Line 2148: [RFCTRL] HAL_SetRxUpdateCmd: update_mode_A(%x) word(0x%X, 0x%X) read_word(0x%X, 0x%X)
Line 2164: [RFCTRL] HAL_SetRxUpdateCmd: CC%d mode(%d) read_word(CC5 0x%X, 0x%X) / (CC6 0x%X, 0x%X)
Line 2173: [RFCTRL] HAL_SetRxUpdateCmd: (CC7 0x%X, 0x%X) / (CC8 0x%X, 0x%X)
Line 2191: [RFCTRL] HAL_SetRxUpdateCmd: CC%d mode(%d) read_word(CC0 0x%X, 0x%X) / (CC1 0x%X, 0x%X)
Line 2197: [RFCTRL] HAL_SetRxUpdateCmd: (CC2 0x%X, 0x%X) / (CC3 0x%X, 0x%X) / (CC4 0x%X, 0x%X)
Line 2450: [RFCTRL] SetRfUpdateMode: mmWave cc(%d), mode(%x), addr(0x%X), data(0x%X, 0x%X)
Line 2460: [RFCTRL] SetRfUpdateMode: Not supported CC(%d)
Line 2546: [RFCTRL] Error - HAL_SetRxUpdateMode: wrong CC info.
Line 2560: [RFCTRL] SetRfUpdateMode: rat(%d), cc(%d), mode(%x), addr(0x%X), data(0x%X)
Line 2598: [RFCTRL] SetAfcPdmValue: PDM(%d), REG(0x%x -> 0x%x)
Line 2662: [RFCTRL] SetGpRfioGenMode: idx(%d), mode(%d)
Line 2716: [RFCTRL] HAL_SetRfQuickSleepCmd: not support !!! rf_path(%d)
Line 2747: [RFCTRL] SetRfQuickSleepCmd: rf(%d) need to config SUB6_HISPD_SRC_NUM for QS on
Line 2771: [RFCTRL] SetRfQuickSleepCmd: rf(%d) need to config SUB6_HISPD_SRC_NUM for QS off
Line 2788: [RFCTRL] SetRfQuickSleepCmd: rf(%d), on_addr(%d, %d), rfic_on_cmd(0x%X:0x%X, 0x%X:0x%X) 
Line 2794: [RFCTRL] SetRfQuickSleepCmd: off_addr(%d, %d), rfic_off_cmd(0x%X:0x%X, 0x%X:0x%X)
Line 3038: [RFCTRL] HAL_GetAdcClock: bandwidth(%d) adc_clk(%d)
Line 3079: [RFCTRL] HAL_GetAdcClock_Fbrx: bandwidth(%d) adc_clk(%d)
Line 3120: [ADC] Not supported RF(ADC) index(%d)
Line 3133: [ADC] adc_en(0x%x), adc_mode(0x%x), adc_vc(0x%x), adc_on(0x%x), ChipName(0x%x)
Line 3297: [ADC] Unknown ADC mode(%d)
Line 3312: [ADC] SetAdcMode: rf(%d), mode(%d), sel(%d -> %d), rat(%d)
Line 3404: [HAL] ConfigAdcOutput(%d): adc_path(%d), dcr_path(%d), ant_swap_en(%d), SEL(0x%x), DSEL(0x%x)
Line 3434: [ADC] GetAdcStatus: adc_path(%d), SAR_ADC_MODE(0x%x), RXADC_PD_EN(0x%x), RXADC_PCM_LDO(0x%x)
Line 3514: [RFCTRL] HAL_SetNumOfRFIF maxNumOfDIF(%d) maxNumOfAIF(%d)
Line 3601: [RFCTRL] HAL_ClearPgcRamTable is started
Line 3654: [RFCTRL] HAL_ClearPgcRamTable is finished !!
Line 3782: [RFCTRL] Clear_FEM_SIF_Arbit
Line 3816: [RFCTRL] rat(%d)
Line 3957: RFIF_RFCtrl_FEM_SIF_Arbit_WriteData : Wrong Source ID[%d] 
Line 3962: RFIF_RFCtrl_FEM_SIF_Arbit_WriteData : Source ID[%d], arbit[%d], addr[%x]
Line 4017: [RFCTRL] RFIF_RFCtrl_FEM_SIF_MemAddr_Calculator : %d,%d,%d,%d,%d,%d,%d
Line 4024: [RFCTRL] RFIF_RFCtrl_FEM_SIF_MemAddr_Calculator :  Building address table has already Done 
Line 4039: [RFCTRL] RFIF_RFCtrl_FEM_SIF_MemAddr_Calculator : Currently unsupported return mode 
Line 4079: pREG_RFCTRL0->FEMSIF_ARBIT0_TX0_CTL0:0x%x
Line 4080: pREG_RFCTRL0->FEMSIF_ARBIT0_TR_NUM0:0x%x
Line 4081: pREG_RFCTRL0->FEMSIF_ARBIT0_ENABLE0:0x%x
Line 4082: pREG_RFCTRL0->FEMSIF_ARBIT0_ENABLE1:0x%x
Line 4083: pREG_RFCTRL0->FEMSIF_F0_TX0_MAIN_CTL0:0x%x
Line 4086: pREG_RFCTRL0->FEMSIF_ARBIT1_TX0_CTL0:0x%x
Line 4087: pREG_RFCTRL0->FEMSIF_ARBIT1_TR_NUM0:0x%x
Line 4088: pREG_RFCTRL0->FEMSIF_ARBIT1_ENABLE0:0x%x
Line 4089: pREG_RFCTRL0->FEMSIF_ARBIT1_ENABLE1:0x%x
Line 4090: pREG_RFCTRL0->FEMSIF_F1_TX0_MAIN_CTL0:0x%x
Line 4093: pREG_RFCTRL0->FEMSIF_ARBIT2_TX1_CTL0:0x%x
Line 4094: pREG_RFCTRL0->FEMSIF_ARBIT2_TR_NUM0:0x%x
Line 4095: pREG_RFCTRL0->FEMSIF_ARBIT2_ENABLE0:0x%x
Line 4096: pREG_RFCTRL0->FEMSIF_ARBIT2_ENABLE1:0x%x
Line 4097: pREG_RFCTRL0->FEMSIF_F2_TX1_MAIN_CTL0:0x%x
Line 4100: pREG_RFCTRL0->FEMSIF_ARBIT3_TX1_CTL0:0x%x
Line 4101: pREG_RFCTRL0->FEMSIF_ARBIT3_TR_NUM0:0x%x
Line 4102: pREG_RFCTRL0->FEMSIF_ARBIT3_ENABLE0:0x%x
Line 4103: pREG_RFCTRL0->FEMSIF_ARBIT3_ENABLE1:0x%x
Line 4104: pREG_RFCTRL0->FEMSIF_F3_TX1_MAIN_CTL0:0x%x
Line 4107: pREG_RFCTRL0->FEMSIF_ARBIT4_TX2_CTL0:0x%x
Line 4108: pREG_RFCTRL0->FEMSIF_ARBIT4_TR_NUM0:0x%x
Line 4109: pREG_RFCTRL0->FEMSIF_ARBIT4_ENABLE0:0x%x
Line 4110: pREG_RFCTRL0->FEMSIF_ARBIT4_ENABLE1:0x%x
Line 4111: pREG_RFCTRL0->FEMSIF_F4_TX2_MAIN_CTL0:0x%x
Line 4115: pREG_RFCTRL0->FEMSIF_MAIN_CTL :0x%x
Line 4116: pREG_RFCTRL0->FEMSIF_RAM_SW0_ADDR:0x%x
Line 4117: pREG_RFCTRL0->FEMSIF_RAM_SW0_WR_DATA:0x%x
Line 4154: [RFCTRL] DEBUG C-SPEEDY : INFRA SW_RESETn 0xC1001000 = 0x%x
Line 4155: [RFCTRL] DEBUG C-SPEEDY : RFCTRL SINGLE_GEN_MASK = 0x%x
Line 4156: [RFCTRL] DEBUG C-SPEEDY : RFCTRL SW_FIFO_MODE0 = 0x%x
Line 4157: [RFCTRL] DEBUG C-SPEEDY : RFCTRL SW_DATA_FIFO_WR_POINT0 = 0x%x
Line 4158: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_REQ_STATUS_A = 0x%x
Line 4159: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_SELECT_STATUS_A = 0x%x
Line 4160: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_MASK_(A/B) = 0x%x, 0x%x
Line 4161: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_PRIORITY0 = 0x%x
Line 4162: [RFCTRL] DEBUG C-SPEEDY : RFCTRL ARB0_PRIORITY1 = 0x%x
Line 4373: [RFCTRL] RFIF_Clear_Femsif_Memory : done! cnt[%d]
Line 5126: RFIF_Check_SpeedyWakeupSeq_flag fWakeUpSeq: %d , ov:%d , flag%d
Line 5217: RFIF_Check_SpeedyWakeupSeq_flag 
Line 5240: [RFCTRL] CtrlSWSpi0 CSpeedy Parity En fail [%d] trial !!!
Line 5280: ReadSWFemsif0 read fail 
Line 5293: ReadSWFemsif0 read fail 
Line 5310: ReadSWFemsif0 read fail 
Line 5326: ReadSWFemsif0 read fail 
Line 5367: ReadSWSm0 read fail 
Line 5381: ReadSWSm0 read fail 
Line 5398: ReadSWFemsif1 read fail 
Line 5414: ReadSWFemsif1 read fail 
Line 5455: ReadSWFemsif1 read fail 
Line 5469: ReadSWFemsif1 read fail 
Line 5486: ReadSWFemsif2 read fail 
Line 5502: ReadSWFemsif2 read fail 
Line 5543: ReadSWSm1 read fail 
Line 5557: ReadSWSm1 read fail 
Line 5573: ReadSWFemsif3 read fail 
Line 5589: ReadSWFemsif3 read fail 
Line 5630: ReadSWSm1 read fail 
Line 5644: ReadSWSm1 read fail 
Line 5660: ReadSWFemsif3 read fail 
Line 5676: ReadSWFemsif3 read fail 
Line 5710: ReadSWExtendedSm0 read fail 
Line 5724: ReadSWExtendedSm0 read fail 
Line 5741: ReadSWExtendedSm0 read fail 
Line 5757: ReadSWFemsif0 read fail 
Line 5801: ReadSWExtendedSm0 read fail 
Line 5816: ReadSWExtendedSm0 read fail 
Line 5833: ReadSWExtendedSm0 read fail 
Line 5849: ReadSWFemsif1 read fail 
Line 5887: ReadSWExtendedFemsif2 read fail 
Line 5901: ReadSWExtendedFemsif2 read fail 
Line 5919: ReadSWExtendedSm2 read fail 
Line 5935: ReadSWFemsif2 read fail 
Line 5981: ReadExtendedSWSm1 read write fail 
Line 5995: ReadExtendedSWSm1 read write fail 
Line 6013: ReadSWExtendedSm3 read fail 
Line 6029: ReadSWFemsif3 read fail 
Line 6075: ReadExtendedSWSm1 read write fail 
Line 6089: ReadExtendedSWSm1 read write fail 
Line 6107: ReadSWExtendedSm3 read fail 
Line 6123: ReadSWFemsif3 read fail 
Line 6216: [RFCTRL] ReadSWSpi0: check1, EXCEPTION CASE FIFO NOT CLEARED (spiGenWrPtr=%d)!!!!!!!
Line 6234: [RFCTRL] ReadSWSpi0: check2, EXCEPTION CASE FIFO NOT CLEARED (spiGenWrPtr=%d spiGenStatusFld=%d)!!!!!!!
Line 6257: [RFCTRL] ReadSWSpi0: SPEEDY Parity Error (Read Data 0x%x [0x%x])
Line 6408: WriteSWFemsif0 write fail 
Line 6426: WriteSWFemsif0 write fail 
Line 6462: WriteSWFemsif0 write fail 
Line 6480: RFIF_WriteSWFemsif0_t write fail 
Line 6522: WriteSWSm0 write fail 
Line 6542: WriteSWFemsif1 write fail 
Line 6581: WriteSWSm0 write fail 
Line 6600: WriteSWFemsif1 write fail 
Line 6641: WriteSWFemsif1 write fail 
Line 6660: WriteSWFemsif2 write fail 
Line 6699: WriteSWFemsif1 write fail 
Line 6717: WriteSWFemsif2 write fail 
Line 6761: WriteSWSm1 write fail 
Line 6780: WriteSWFemsif3 write fail 
Line 6818: WriteSWSm1 write fail 
Line 6837: WriteSWFemsif3_t write fail 
Line 6879: WriteSWSm1 write fail 
Line 6898: WriteSWFemsif3 write fail 
Line 6935: WriteSWSm1 write fail 
Line 6954: WriteSWFemsif3_t write fail 
Line 6989: ReadSWExtentedFemsif0 fail 
Line 7008: WriteSWFemsif0 write fail 
Line 7052: WriteSWExtentedSm0 write fail 
Line 7070: WriteSWFemsif1 write fail 
Line 7115: WriteSWExtentedSm1 write fail 
Line 7133: WriteSWFemsif2 write fail 
Line 7178: WriteSWExtentedSm1 write fail 
Line 7195: WriteSWFemsif3 write fail 
Line 7239: WriteSWExtentedSm1 write fail 
Line 7256: WriteSWFemsif3 write fail 
Line 7300: ReadSWExtentedDataFemsif0 fail 
Line 7315: ReadSWExtentedDataFemsif1 fail 
Line 7330: ReadSWExtentedDataFemsif2 fail 
Line 7345: ReadSWExtentedDataFemsif0 fail 
Line 7360: ReadSWExtentedDataFemsif0 fail 
Line 7383: ReadSWExtentedDataFemsif0 fail 
Line 7404: ReadSWExtentedDataFemsif1 fail 
Line 7426: ReadSWExtentedDataFemsif2 fail 
Line 7449: ReadSWExtentedDataFemsif3 fail 
Line 7472: ReadSWExtentedDataFemsif3 fail 
Line 7585: [RFCTRL] RFIF_WriteSWSpi0_t: Addr:0x%x Data:0x%x
Line 7594: [RFCTRL] RFIF_WriteSWSpi0_t: nBuffer[%d] of  spi_cnt exceeded the limit !!!!!!!
Line 7605: [RFCTRL] WriteSWSpi0_t: EXCEPTION CASE FIFO NOT CLEARED (spiGenStatusFld=%d)!!!!!!! cnt %d
Line 7733: [RFCTRL] RFIF_WriteSWSpi0_t: EXCEPTION CASE FIFO NOT CLEARED (spiGenStatusFld=%d)!!!!!!!
Line 7743: [RFCTRL] RFIF_FlushSWSpi0_t : pal_cpu_busy_wait_us[%d] 
Line 7846: RFIF_StartRfInterupter 0x%x pllLockTime %d agcLargeTime %d  agcSmallTime %d 
Line 8111: RFIF_Enable3GRachOnTick %d 
Line 8134: onTick read  TICKGEN_TX0_MAIN_OUT 0x%x  
Line 8135: on Tick read FEMSIF_ARBIT0_CTL_RD1 0x%x  
Line 8140: onTick read	TICKGEN_TX0_MAIN_OUT 0x%x  
Line 8141: on Tick read FEMSIF_ARBIT1_CTL_RD1 0x%x	
Line 8146: on Tick read  TICKGEN_MIPI_RFFE2_CTL 0x%x	
Line 8147: on Tick read FEMSIF_ARBIT2_CTL_RD1 0x%x	
Line 8152: on Tick read  TICKGEN_MIPI_RFFE3_CTL 0x%x	
Line 8153: on Tick read FEMSIF_ARBIT3_CTL_RD1 0x%x	
Line 8158: on Tick read  TICKGEN_MIPI_RFFE4_CTL 0x%x	
Line 8159: on Tick read FEMSIF_ARBIT4_CTL_RD1 0x%x	
Line 8329: RFIF_Enable3GRachOffTick %d 
Line 8335: off Tick read FEMSIF_ARBIT0_CTL_RD1 0x%x  
Line 8340: off Tick read FEMSIF_ARBIT1_CTL_RD1 0x%x  
Line 8345: off Tick read FEMSIF_ARBIT2_CTL_RD1 0x%x  
Line 8350: off Tick read FEMSIF_ARBIT3_CTL_RD1 0x%x  
Line 8355: off Tick read FEMSIF_ARBIT4_CTL_RD1 0x%x  
Line 8416: [RFCTRL] Invaild RFFE NUMBER !! %d
Line 8420: RFIF_Set3GRachTickSPI %d 
Line 8435: RachTickSPI PA on 0x%x PA mode 0x%x read reg %x
Line 8444: RachTickSPI PA on size %d not support
Line 8452: RachTickSPI MIPI on %d 0x%x 0x%x
Line 8470: RachTickSPI PA off 0x%x PA mode 0x%x read reg %x
Line 8480: RachTickSPI PA off size %d not support
Line 8488: RachTickSPI mipi off %d 0x%x 0x%x
Line 8493: RFIF_Set3GRachTickSPI power %d tx_gain 0x%x tx_falling_gain 0x%x paMode %d 
Line 8506: RachOnTick onSlot %d onChip %d onChipx8 %d
Line 8522: RachOnTick not support mipi_path %d
Line 8555: Set3GRachOffTickTiming %d 
Line 8558: RachOffTick offSlot %d offChip %d offChipx8 %d type %d
Line 8574: RachOffTick not support mipi_path %d
Line 8621: RFIF_OvPowerDetector %d 
Line 8640: CDMA_DGC Lin_Val %d
Line 8719: RFIF_IOPAM_ovEnable %d , %x
Line 8748: [RF D2D] %s D2D gain feedback
Line 8763: [RF BDA] mipi device fail count %d
Line 8785: [RF BDA] pam device count : %d
Line 8802: [RF BDA] rfic device count : %d, rfic : %d, pam : %d, rf device check done : %d
Line 8955: [RFCTRL] RFIF_HI_SPEEDY_Clear_TrigMask
Line 9006: [RFCTRL] RFIF_HI_SPEEDY_Init: done >>> mask[trig0:0x%08X flag0:0x%08X]
Line 9308: [RFCTRL] RFIF_HI_SPEEDY_Debug_Log: BLK_EN[0x%X] TRIG_MASK[0x%X/0x%X/0x%X/0x%X]
Line 9317: [RFCTRL] RFIF_HI_SPEEDY_Debug_Log: REQ_STATUS[0x%X/0x%X] SELECT_STATUS[0x%X/0x%X] FLAG_MASK[0x%X/0x%X]
Line 9324: [RFCTRL] RFIF_HI_SPEEDY_Debug_Log: FORMATGEN => CTRL[0x%X] WR[0x%X] RD[0x%X] CLK_RATE[0x%X] SIG_CTRL[0x%X]
Line 9331: [RFCTRL] RFIF_HI_SPEEDY_Debug_Log: FORMATGEN => BOOT_MODE_EN[0x%X] TIMEOUT[0x%X] TIMEOUT_RD[0x%X] STATE_RD[0x%X] READ0_DONE[0x%X]
Line 9339: [RFCTRL] RFIF_HI_SPEEDY_SW_Write_One: address error !! 0x%X
Line 9373: [RFCTRL] RFIF_HI_SPEEDY_SW_Write: SW WR READY FAIL !!! step: %d cnt: %d
Line 9416: [RFCTRL] RFIF_HI_SPEEDY_SW_Read: write fifo check fail!! addr[0x%x]
Line 9436: [RFCTRL] RFIF_HI_SPEEDY_SW_Read: [addr: 0x%X] : READ0 DONE FAIL !!! step: %d cnt: %d
Line 9456: [RFCTRL] RFIF_HI_SPEEDY_SW_Read: [addr: 0x%X] : read wait time out
Line 9480: [RFCTRL] RFIF_HI_SPEEDY_Buffer_Write: nBuffer[%d] of spi_cnt exceeded the limit !!!!!!!
Line 9498: [RFCTRL] RFIF_HI_SPEEDY_Flush_Write: pal_cpu_busy_wait_us[%d]
Line 9652: [RFCTRL] RFIF_HI_SPEEDY_MEM_Clear: done! cnt[%d]
