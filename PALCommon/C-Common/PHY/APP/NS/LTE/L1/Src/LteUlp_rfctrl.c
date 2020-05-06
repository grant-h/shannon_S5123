Line 310: (W)[RF-CRTL] [DSPTX_ReadSub6Hispd]. Read_HISPEEDY: FIFO NOT CLEARED!!! step[%d], cnt[%d], Addr[0x%x]
Line 331: (W)[RF-CRTL] [DSPTX_ReadSub6Hispd]. Read_HISPEEDY: read wait time out!!! cnt[%d], Addr[0x%x]
Line 403: (W)[RF-CRTL] [DSPTX_SetSwSub6Hispd]. Hispd SW WR in not ready. sub6_hispd_sw_wr_ready_flag[%d], ul_cc_idx[%d]
Line 413: [RF-CRTL] [DSPTX_SetSwSub6Hispd]. data_num[%d], data0~2[0x%x][0x%x][0x%x], addr0~2[0x%x][0x%x][0x%x], ul_cc_idx[%d], count[%d]
Line 432: (W)[RF-CRTL] [DSPTX_ReadRfdReg] Wrong addr. addr[0x%x]
Line 454: (W)[RF-CRTL] [DSPTX_WriteRfdReg] Wrong addr. addr[0x%x], data[0x%x], ul_cc_idx[%d]
Line 655: [RF-CRTL] [DSPTX_SetHwSub6Hispd]. mem_idx[%d], data_num[%d], data0~2[0x%x][0x%x][0x%x], addr0~2[0x%x][0x%x][0x%x], ul_cc_idx[%d]
Line 659: [RF-CRTL] [DSPTX_SetHwSub6Hispd]. sub6_hispd_trig_mask0~2[0x%x][0x%x][0x%x], sub6_hispd_src_num0~3[0x%x][0x%x][0x%x][0x%x], sub6_hispd0_flg_mask0~1[0x%x][0x%x], sub6_hispd_blk_en[0x%x]
Line 823: UL_PWR2=> pwr:%d, TX_SPI[%d]:0x%x, comp_pwrx10:%d, et_en:%d, srs_on:%d, ul_cc_idx:%d
Line 912: (W) wrong num_tx_path_on. direct_spi_word_num:%d
Line 928: [TX on]. TX_on_SPI[0x%x][0x%x][0x%x][0x%x][0x%x], hispd_tx_path_on_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
Line 937: (F) TX on FAIL. tx_on_fail[%d], TX_on_SPI[0x%x][0x%x][0x%x][0x%x], hispd_tx_path_on_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
Line 1217: (W) wrong num_tx_path_off. direct_spi_word_num:%d
Line 1241: [TX off]. tx_off_spi[0x%x][0x%x][0x%x][0x%x][0x%x], hispd_tx_path_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
Line 1252: (F) TX off FAIL. tx_off_fail[%d], tx_off_spi[0x%x][0x%x][0x%x][0x%x], hispd_tx_path_addr[0x%x][0x%x][0x%x], direct_spi_word_num[%d], ul_cc_idx[%d]
Line 1405: (W) Invalid MIPI word number. ul_cc_idx:%d, debug_id:%d, val:%d, min_val:%d, max_val:%d
Line 1495: [MipiAitControl] ARBIT_TR_NUM0[0x%x], TICKGEN_MIPI_RFFE_PA[0x%x], ON0_CNT[0x%x], OFF0_CNT[0x%x], REG_FEMSIF_ARBIT_CTL0[0x%x], REG_FEMSIF_ARBIT_ENABLE0[0x%x], mipi_reg_idx[%d]
Line 2059: PA_MODE=> et_en:%d, srs_en:%d, main_word_idx(num1/num2):0x%x, arbitor(add1/add2):0x%x, last_mipi_word:0x%x, pm_trig_word:0x%x, reg_arbit_tr_num0:0x%x
Line 2148: PA_2ndOFF=> main_word_idx:%d, arbitor_add:%d, pa_off_word:0x%x, index_error:%d, ul_cc_idx:%d
Line 2345: [ON0][OFF0] Block HW tick. ul_cc_idx:%d
Line 2386: [ON0][OFF0] Block HW tick. TWO-ANT mode
Line 2559: [ON1][OFF1] Block HW tick. ul_cc_idx:%d
Line 2592: [ON1][OFF1] Block HW tick. TWO-ANT mode
Line 2716: PA_Con=> tx0_tx1_word_idx[0x%x], sample_cnt_on0[%d], sample_cnt_off0[%d], sample_cnt_on1[%d], sample_cnt_off1[%d], next_srs_on/next_empty_on[%02d], pa_on_delay[%d], PA_ON1_CNT[0x%x], PA_OFF1_CNT[0x%x]
Line 2751: (W) Invalid pa gain. pa_gain[%d], pwr_val[%d], arbitor_addr[%d], mipi_ch_for_sm_only[%d]
Line 3084: DSPTX_MipiSmControl => pwr_val[%d], sample_cnt[%d], next_srs_pwr_val[%d], srs_sample_cnt[%d], next_srs_on[%d], et_en(PUSCH/SRS)[%02d], mipi_source_en[0x%x]
Line 3209: DSPTX_DisableControlSm !!  reg_tickgen_main_ctl1 : 0x%x reg_tickgen_mipi_rffe : 0x%x, mipi_reg_idx : %d, ul_cc_idx : %d
Line 3257: DSPTX_DisableControlMIPInGPIO !! pa_control_mode : %d, tickgen_main_ctl0_reg : 0x%x, tickgen_main_ctl0_reg1 : 0x%x, reg_tickgen_mipi_rffe : 0x%x, ul_cc_idx : %d, mipi_reg_idx : %d
Line 3360: DSPTX_BlockRfTickSet. block_mipi_ch[0x%x], block_spi_idx[0x%x], RFD_TXF_EN[0x%x]
Line 3444: GPIO Init=>ireg_tickgen_main_ctrl:0x%x, tti_con:0x%x, REG_TICKGEN_TX_PA_ON_ON0_CNT[0x%x], REG_TICKGEN_TX_PA_MODE_ON0_CNT[0x%x]
Line 4185: PM_module[On]=> spi write fail [0x%x]
Line 4209: PM_module[On]=> pm_module_set_fail. spi write fail [0x%x]
Line 4240: PM_module[Off]=> pm_module_set_fail. spi write fail [0x%x]
Line 4260: PM_module[Off]=> spi write fail [0x%x]
Line 4335: PM_Module=> ul_cc_idx/dl_cc_idx:%02d, UL_CH:0x%x, pwr:%d, scaledPwr:%d, PM_val = %d, mod:%d, pm_addr:0x%x
Line 4341: PM_Module=> FBRX report skip / ul_cc_idx/dl_cc_idx:%02d, CL-AIT:%d, SKIP:%d
Line 4346: [PM_DEBUG] There is no detect channel (ul_cc_idx : %d)
Line 4352: PM_Module=> Tx TTI config was set, but FBRX Module is not ready (detect_ch : 0x%x, target Pwr : %d)
Line 4441: [PM_DEBUG] NTPD set=> power_val:%d, ul_tti_conf:0x%x, pm_module[tti:%d]:0x%x
Line 4487: FBRX read skipped. ul_cc_idx : %d, skip_cnt : %d
