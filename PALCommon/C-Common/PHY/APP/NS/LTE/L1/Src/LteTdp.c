Line 282: DEMOD_SUB disabled - waiting DEMOD_CORE
Line 446: [CDRX_QS][interrupt][before] quick_sleep_status(0x%x), sync_int_time_18(0x%x)
Line 452: [CDRX_QS] PHY CDRX handler has sent higher layer the CDRX sleep IPC for fast sleep !!!
Line 459: [CDRX_QS][interrupt][after] quick_sleep_status(0x%x), sync_int_time_18(0x%x)
Line 487: D2dSync_Isr:%d
Line 531: IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [AGC][0][1][2][3][4] : %d, %d, %d, %d, %d
Line 582: IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [AFC][0][1][2][3][4] : %d, %d, %d, %d, %d [Path Info] : 0x%03x
Line 606: IPC: IPC_ACTION_ID_TDP_CONFIG [Act CC Num : %d] [STR][0][1][2][3][4] : %d, %d, %d, %d, %d
Line 618: IPC: IPC_ACTION_ID_TDP_CONFIG [RficVer : %d][Act CC Num : %d] GAIN_UPDATE_MODE : 0x%x, ACTIVE_RAT : 0x%x, cell_group(%d)
Line 707: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT, config_ind[%d], config_pair_num[%d], config_cc[%d][%d][%d][%d], dmxr_freq_value[%d][%d][%d][%d]
Line 736: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT, config_ind[%d], release_pair_num[%d], release_cc[%d][%d][%d][%d], set(Config Ind)[%d][%d][%d][%d]
Line 769: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT, config_ind[%d], config_pair_num[%d], config_cc[%d][%d][%d][%d], dmxr_freq_value[%d][%d][%d][%d]
Line 795: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT, config_ind[%d], release_pair_num[%d], release_cc[%d][%d][%d][%d], set(Config Ind)[%d][%d][%d][%d]
Line 818: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT,[BEFORE] config_ind[%d], release_pair_num[%d], release_cc[%d][%d][%d][%d], set(Config Ind)[%d][%d][%d][%d]
Line 836: IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT,[AFTER] config_ind[%d], release_pair_num[%d], release_cc[%d][%d][%d][%d], set(Config Ind)[%d][%d][%d][%d]
Line 852: (F)IPC: IPC_ACTION_ID_SET_DMXR_FREQ_INIT -> Invalid SLO config indication [%d] !!!
Line 919: Invalid PA,PB value[%d](%d, %d)[%d]
Line 943: Invalid PA,PB value[%d](%d, %d)[%d]
Line 959: Invalid PA,PB value[%d](%d, %d)[%d]
Line 979: [LTEPHY][CC : %d]Pa: %d, Pb : %d, n_antP : %d, flag_mode : 0x%x
Line 980: [LTEPHY][CC : %d]Pa_dB: %d, Pb_dB : %d, n_antP : %d
Line 981: [LTEPHY][CC : %d]Rho_a_rx: %d, Rho_b_rx : %d, n_antP : %d
Line 982: [LTEPHY][CC : %d]pa(%d), pb(%d), enbant(%d), RMS[Ctrl_dB : %d](RMS : %d, Pa_offset : %d)
Line 1041: [FD_AGC][PATH_INFO](0/1/2/3) : %08d, (4/5/6/7) : %08d, (8/9/10/11) : %08d, [Pa/Pb/TxAnt] : (CC0/1/2) : %09d, (3/4) : %09d, eCSAT/LAA[0x%08x]
Line 1056: [FD_AGC][LAA][En|Ind|Prv|Cur|AgcBy|AfcBy] 0x%6x, 0x%6x, 0x%6x, 0x%6x, 0x%6x, 0x%5x, 0x%5x [SLO pair : CC0~CC4] : 0x%x [CompT] : 0x%x
Line 1149: [FD_AGC][IDX/FD/TD/MarTD](0-9) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 1167: [FD_AGC][IDX/FD/TD/MarTD](10-19) : (0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 1182: [FD_AGC][IDX/FD/TD/MarTD](20-23) : (0x%08x, 0x%08x, 0x%08x, 0x%08x)
Line 1190: [FD_AGC][RMS](CC0-3) : 0x%08x, (CC4-7) : 0x%08x, [QS](CC0-7) : 0x%08x, [FLAG] : (0x%08x), AGC_Cfg_Bypass : 0x%08x
Line 1286: [FD_AFC][AngleDiff](CC0-3) : (%d, %d, %d, %d), [Mxr(DL)](CC0-3) : (%d, %d, %d, %d), [AngleOut](0/1) : %08d, (2/3) : %08d
Line 1309: [FD_AFC][Mxr(UL)] : (%d, %d, %d), [UL_FREQ] : (%d, %d, %d), [MPLL/FPLL/MWPLL(delta)] : (%d/%d/%d), [TCXO_FREQ_OFFSET] : %d
Line 1322: [FD_AFC][Real](CC0-3) : (%d, %d, %d, %d) [Imag](CC0-3) : (%d, %d, %d, %d)
Line 1337: [FD_AFC][AngleDiff](CC4-7) : (%d, %d, %d, %d), [Mxr(DL)](CC4-7) : (%d, %d, %d, %d), [AngleOut](4/5) : %08d, (6/7) : %08d
Line 1350: [FD_AFC][Real](CC4-7) : (%d, %d, %d, %d), [Imag](CC4-7) : (%d, %d, %d, %d)
Line 1493: [TC]CC0_CTE:%09d,SCTE:%09d,LCTE:%09d,type:0x%08x,mode:0x%08x,Corr:0x%08x,Reg:0x%08x
Line 1518: [TC]CC1234_CTE:%09d/%09d/%09d/%09d,info_CC12:0x%08x, info_CC34:0x%08x
Line 1534: [TC][CTE][Sel/S/L](%09d,%09d,%09d,%09d,%09d),[SInst/SIIR/LInst](%09d),[dop_start(1)/init(1)/sel_type(2)/cal_cnt]:0x%08x, Scorr03/P0+P3 %09d , Lcorr/Lpow %09d 
Line 1554: [TC][CTE][Sel/S/L](%09d,%09d,%09d),[dop_start(1)/init(1)/sel_type(2)]:0x%08x
Line 1761: [AGAP : Pre]gapRrcState : %d, gap_in : %d, RXF_FREQ_x_VALUE : 0x%x
Line 1984: [FD_AFC][CC%d][SLO][Afc_Upt_En]:%d, [Afc_Ctrl_En]:%d, [slo_afc_upt]:%d
Line 2171: [FD_AGC] AGC Hold by QS(%d)
Line 2329: CC%d:: [cc_rx_path %d][Adc_Path : %d]FD_AGC gain change %d[LoopFilterOut] with %d[Current read], Comp_Idx : %d
Line 2339: initialize compen previous value when agc gain changed  cc:%d tti:%d rxk:%d 
Line 2497: [FD_AFC] AdcPath is not valid [cc : %d][adc_path : %d]
Line 2508: [FD_AFC][CC%d][BEFORE]p_AFC_data->InOrder_BufIdx_Afc: %d
Line 2516: [FD_AFC][CC%d][BEFORE]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d
Line 2533: [FD_AFC][CC%d][AFTER]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d
Line 2543: [FD_AFC][CC%d][BEFORE]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d, Config_Ind(%d)
Line 2578: [FD_AFC][CC%d][AFTER]TimeCorr_LOG :: Register value : %d, loop value(loop only + bw_norm) : %d, SLO_offset : %d, bw_norm : %d, mixer_init_value : %d, Config_Ind(%d)
Line 2592: [FD_AFC][CC%d][AFTER]p_AFC_data->InOrder_BufIdx_Afc: %d
Line 2599: [FD_AFC][CC%d] Afc_En : %d, Afc_ctrl_En : %d, Register value : %d, Cotrol value : %d, loop_mem(w/o scale) : %d, mixer_init_value : %d 
Line 2627: [FD_AFC][CC%d] gapRunState : %d, gapRrcState : %d, first_ind_agap : %d, mixer_init_value_agap : %d, dl_dmxr_scale : %d
Line 2641: [FD_AFC] Invalid AFC Mode : %d
Line 2816: [LTETDP_Laa_Dci_Detection] wrong Cck!
Line 2856: [LTETDP_Laa_1st_Dci_Detection][Before]CC(%d)_LAA_SLEEP_STATE(0x%x), current_dci_result(%d), Ind : %d
Line 2859: [LTETDP_Laa_1st_Dci_Detection][After]CC(%d)_LAA_SLEEP_STATE(0x%x), current_dci_result(%d), Ind : %d
Line 2910: [TDP][LAA][CC%d][CG : %d] Current subframe is end one of this burst !!! => sf_type[TTI_PRV2] : %d, sf_type[TTI_PRV1] : %d, sf_type[TTI_CUR] : %d, sf_type[TTI_NXT] : %d
Line 2940: [TDP][LAA][CC%d] Init. subframe detection is running  !!!
Line 2948: [TDP][LAA][CC%d]Init. subframe detection success, Normal TDP operation is going to run at next suframe !!!
Line 2952: [TDP][LAA][CC%d] Init. subframe detection is running  !!!
Line 2984: (Warning-RFCTRL) SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
Line 3017: (Warning-RFCTRL) SPI Read FIFO not Cleared!! swSpiAddr[0x%X] step[%d]
Line 3041: (Warning-RFCTRL) RFIC not response swSpiAddr[0x%X]
Line 3077: (Warning-RFCTRL) CenterChip SW SPI Num Overflow!! wordNum[%d]
Line 3096: (Warning-RFCTRL) CenterChip SPI Write FIFO not Cleared!! swSpiAddr[0x%X]
Line 3147: (Warning-RFCTRL) Center SPI Read FIFO not Cleared!! swSpiAddr[0x%X] step[%d]
Line 3170: (Warning-RFCTRL) Center RFIC not response swSpiAddr[0x%X]
