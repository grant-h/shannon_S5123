Line 303: ERROR: Check that SW_Interrupt_Mode %d is correct.
Line 365: PD_READ[%d]: GPADC_Data=%d ILPC->PDValue=%d RFIC_version=%d
Line 381: Int0_Start=%d Int0_Mid=%d Int0_End=%d
Line 386: ERROR: Check that SW_Interrupt_Mode %d is correct.
Line 405: start_Int: Chip_time_start = %d time_table_index=%d
Line 478: CL_AIT: update_key = %d, X_GND_update_key = %d, X_GND_2ndCH_update_key=%d
Line 518: FBRX PD Skip AMR Slot_Dec_Flag=%d pd_SPI_StatusFlag=%d
Line 636: N=%d Weight=%d Input=%d OffsetB=%d Offset_A=%d OffsetB_M=%d Offset_A_M=%d
Line 685: pd_trans_low_check=%d pd_trans_low=%d pd_trans_high_check=%d pd_trans_high=%d dsp_rf_ctrl_2=%d Range_ctrl_en=%d Extension_SW=%d
Line 758: Bypass DGC setting : m_bHSDTXOn_DSP=%d iDTX_DPCCH
Line 783: PD mode is %d and AMR slot mode enabled, Use current PD_DGC
Line 822: DGC_3: PD_ERROR=%d PD_DGC=%d SUM_DGC=%d DGC_Check=%d PD_HS_OFFSET=%d ByPass=%d Opmax=%d
Line 823: Detector: pdPower=%d Tx_Pow_CL=%d Compared_Pow=%d PD_CTRL=%d pdValue=%d ChipVer=0x%x
Line 824: Detector: CM gap=%d,CFN=%d,slot number=%d RCVD length=%d ILPC skip cnt=%d
Line 887: PD_MEASURE[FBRX_CL_AIT]: [DO_NOT_MEASUREMENT_PD] FBRX_MODE %d
Line 906: PD_MEASURE[FBRX]: Slot_Dec_Flag %d PD_Enable %d pd_SPI_StatusFlag=%d
Line 990: PD_MEASURE[FBRX_PD]: READ_PD_LIN %d READ_PD_dB %d Cal_PD_Pow %d PDPower %d RFIC_version=%d
Line 1405: RFIC_version=%d FBRX DCR HOLD I=%d Q=%d
Line 1439: RFIC_version=%d FBRX DCR RESUME I=%d Q=%d
Line 1510: FBRX_PD_On_Off: On_Size=%d Off_Size=%d PD_On0=0x%08X PD_On1=0x%08X PD_Off0=0x%08X PD_Off1=0x%08X SwitcH=%d
Line 1512: FBRX_PD_On_Off Addr: PD_On0_addr=0x%08X PD_On1_addr=0x%08X PD_Off0_addr=0x%08X PD_Off1_addr=0x%08X
Line 2017: RFIC_Phase: RFIC_Phase_En=%d Pow_HPM=%d Pow_MPM=%d Pow_LPM=%d H2L_Val=%d L2H_Val=%d
Line 2171: ILPC_Init: DspRfCtl=0x%08X PdOffsetPAHigh=0x%08X PdOffsetPAMid=0x%08X PdOffsetPALow=0x%08X PAM_ON_CTRL_MODE=%d PAM_ON_CTRL_OFFSET=%d RfCtlSeq=0x%08X
Line 2443: ilpc_init_count=%d
Line 2480: apply_slot=%d CL_ILPC_time=%d Cal_Point==%d
Line 2508: TPC_Step_Dbg: TPC_step_SHM=%d RCV_TPC_step_SHM=%d TPC_step=%d TPC_step_check=%d
Line 2694: TPC_Final: Mode_On = %d
Line 2729: TPC_Sw Test: ILPC->SwTestMode = %d TPC=%d max=%d min=%d maxAdj=%d 
Line 2869: INIT power %d
Line 2882: DELTA_PILOT=%d InnerLpAdj=%d ILPC->apply_slot=%d ILPC->DeltaPilotUpdSlot=%d
Line 2946:  Tx_ILPC_Power_Set DesiredPow set =%d InnerLpAdj=%d
Line 2955:  DesiredPow set =%d testmode=%d
Line 2963:  DesiredPow set =%d
Line 3095: (RF_Set_SwHispd) (Caller:RF_Control_2) data=0x%08X, addr=0x%X
Line 3192: ET Active: ET_Ctrl=%d ET_HSUPA=%d HSUPA_En=%d ET_HSDPA=%d HSDPA_En=%d RF_CTRL_4=%d ET_Active=%d
Line 3854: Phase discontinuity: Phase_Comp_Val 0x%08X ETAPT_mode_prv %d et_active %d et_enable %d Phase_Comp_Val_A2E 0x%08X Phase_Comp_Val_E2A 0x%08X Phase_Discont_A2E 0x%08X
Line 3884: Phase discontinuity: Phase_Comp_Val 0x%08X pa_mode_prv %d pa_mode %d
Line 3951: RFIC_Phase: RFIC_Phase_State=%d Prev_RFIC_Phase_State=%d RFIC_Phase_Comp_Init=%d Ceil_Desired_Pow = %d
Line 3959: No_RFIC_Phase: RFIC_Phase_Comp_Val=%d
Line 3979: PAM_Phase_En=%d PAM_Phase_Val=%d RFIC_Phase_En=%d RFIC_Phase_Val=%d Sum_Phase_Val=%d
Line 4010: RF_Set_MIPI_Word: Type=%d Data_Num=%d SM_Delay=%d 
Line 4016: Maximum 8 words supported for MIPI write SM_Delay=%d
Line 4112: MIPI WORD:W=0x%x W=0x%x W=0x%x W=0x%x W=0x%x W=0x%x W=0x%x
Line 4113: SEC MIPI WORD:W=0x%x W=0x%x W=0x%x
Line 4151: Number of MIPI words=%d 
Line 4183: (RF_Set_SwHispd) Caller: RF_Set_Transmission_Gap data=0x%08X, addr=0x%X
Line 4415: (W) SW SPI Num Overflow!! data_num[%d]
Line 4434: (W) Hispd SW WR in not ready. sub6_hispd_sw_wr_ready_flag[%d]
Line 4464: (RF_Write_HispdMem) RFIC_data=0x%08X, RFIC_addr=0x%X, mem_addr=0x%X
Line 4498: (Warning-RFCTRL) SPI Read FIFO not Cleared!! addr[0x%X] step[%d]
Line 4523: (Warning-RFCTRL) RFIC not response mem_addr[0x%X]
Line 4544: Main1: Tx_Pow=%d TPC=%d Pow_Off_Adj=%d Max=%d Min=%d ulpc_time=%d APT_Act=%d
Line 4545: Main1: Tx_Pow=%d TPC=%d Pow_Off_Adj=%d Max=%d Min=%d ulpc_time=%d APT_Act=%d
Line 4546: Main2: UL_CH=%d DSP_STOP=%d Tx_Off=%d Tx_Init=%d ILPC_status=%d time_slot=%d slot0_End_Time=%d
Line 4547: CM: CM_GAP=%d TG_START=%d TG_END=%d Resume_slot=%d RCV_PRD=%d CM_TYPE=%d CM_RF_CTRL=%d
Line 4548: ET: ET_Active=%d ET_Active_SHM =%d ET_Enable=%d TPC_FIANL=%d et_add_offset=%d
Line 4549: PA: PA_MODE=%d HR=%d HF=%d LR=%d LF=%d slot=%d
Line 4550: Index: Integer=%d APT_Index=%d ET_Index=%d St_H=%d St_M=%d St_L=%d MAX_OFFSET=%d
Line 4551: DPD: DPD_SHM=0x%08X DPD_IN=0x%08X DPD_OUT=0x%08X DPD_SEL=0x%08X DPD_Index=%d DPD_INT_Index=%d DPD_DEC_Index=%d
Line 4552: SF: Gain=0x%08X SEL=0x%08X Offset=0x%08X SF_Index=%d
Line 4553: CFR: Val=0x%08X ul_ch_info=%d ul_ch_info_mon=%d slot_cnt=%d
Line 4554: DAC: DAC=0x%08X DAC_index=%d MIPI_SEL_SM=%d
Line 4555: DGC_1: DGC_SHM=%d DGC_SHM_Index=%d PD_DGC=%d SUM_DGC=%d DGC_idx=%d DGC=%d
Line 4556: DGC_2: OP_MAX=%d OP_MAX_OFFSET=%d DEC_dB=%d
Line 4557: RFIC: RFIC_Gain=0x%08X RFIC_index=%d RFIC_Gain_addr=0x%08X
Line 4558: PAM: PA_MODE=0x%08X PA_BIAS=0x%08X PA_BIAS1=0x%08X PA_BIAS_INDEX=%d PA_TRIGGER=0x%08X  MIPI_SEL_PAM=%d
Line 4559: ET_DAC: ET_CTRL=0x%08X INNER_LP_EN=%d
Line 5247: UL0_DGC_GAIN0=%d UL0_DGC_GAIN1=%d UL0_DGC_SHIFT=%d DAC_RMS_DA0=%d
Line 5248: Log DTX_DPCCH=%d txpow=%d pdPow=%d
Line 5672: SlotDecFlag = %d SlotDecOpFlag = %d SlotDecRegVal = %d
Line 5718: Mutex[%d]: Input Error. p0=%d p1=%d
Line 5740: DSP_Mutex[%d]: wait_cnt=%d turn=%d owner_flag[0]=%d owner_flag[1]=%d p0=%d p1=%d
Line 5791: SAR_dBm2Lin: t_pow=%d hs_off=%d r_power=%d
Line 5805: SAR: SAR_Slot=%d Power_Lin=%d
Line 5840: [Hal_Set_RFD_Mar_Sync] old_MARSYNC_CONFIG 0x%x, slot %d, old_SEL_MCW_SYNC_SRC 0x%x, cur_MARSYNC_CONFIG 0x%x
