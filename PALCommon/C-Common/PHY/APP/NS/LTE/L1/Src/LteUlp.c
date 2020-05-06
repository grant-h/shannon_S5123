Line 1438: [ScgUlp_Isr] TX0_RX_TX_SAMPLE_CNT[0X%X] TX1_RX_TX_SAMPLE_CNT[0X%X], TX1_INT_N[0X%X], TX1_SYSTEM_INFO[0X%X]
Line 1528: LTE ULP Disabled
Line 1664: RACH triggered CellGrIdx: %d
Line 2040: IPC: IPC_ACTION_ID_RF_DUMP.
Line 2061: Re-init TX channel
Line 2167: UL0_TTI_CONFIG[0x%x], UL1_TTI_CONFIG[0x%x], rtg_cnt(DL/UL)[0x%x], rfd_rtg_cnt_TX0~1(DL/UL)[0x%x][0x%x], UL/DL_RTG_diff[%d], ULP_ISR_time[%d(us)], et_en/pre_rach_check[%05d], ul_user_mpr[0x%x], RFD_TXF_MPR_AVG_ACC[0x%x]
Line 2225: (F) TX0_SYSTEM_INFO : 0x%x TX0_SYSTEM_INFO : 0x%x !!
Line 2302: DSPTX_ULP_ISR(Tx0)=> ul_sfn+ul_tti(%d), ta_acc=%d, cell_id:%d, ue_id:0x%x, tx_sys_info:0x%x, rtg_cnt(DL/UL):0x%x, SINGLE_GEN_MASK:0x%x
Line 2308: DSPTX_ULP_ISR(Tx1)=> ul_sfn+ul_tti(%d), ta_acc_tx1=%d, cell_id:%d, rtg_cnt(DL/UL):0x%x, Tx1_diff:%d, UL0_SLCA_MIXER_FREQ_OFFSET:0x%x, ul_cc_idx:%d
Line 2325: UL_SFN Mismatch!!! (UL_TTI:%d, UL_SFN:%d, DL_SFN:%d, ul_cc_idx:%d)
Line 2349: [fmt3_tpc]  tpc_acc_pusch:%d, tpc_acc_pucch:%d, fmt3_tpc_val:0x%x, dci_tpc_exist:0x%x, ul_cc_idx:%d
Line 2447: ul_cc_idx : %d, RAR Timer Expired
Line 2498: RACH=>t_tti:%d, tti_con:0x%x, DAC:%d, timer:%d, ra_sr:%d, ra_type:%d, ul_sfn:%d
Line 2571: UL=>DL/UL timing diff is negative, TA set zero : ul_cc_idx:%d, DL/UL RTG:0x%x
Line 2595: DRX&CQI cqi_mask(%d), ODT_state(%d)
Line 2626: DRX&CQI return(%d), CC(%d)
Line 2773: pusch_cqi: conc/idx/cc/proc/set/rank(%d), len_r1/org(%d,%d), data(0x%x,0x%x,0x%x,0x%x)
Line 2786: CC(%d), ACQI=>t_tti:%d, request:%d, meas_set_r10:0x%x, cqi_size:%d, ri_size:%d, ri_on:%d
Line 2794: CQI_Err=>%d 
Line 2815: RI on Pusch, pusch_ri_size: %d, pusch_ri_info: %d, cqi_type: %d
Line 2846: CC(%d), PCQI=>t_tti:%d, cqi_type:%d, cqi_size:%d, cqi_info:0x%x, ri_on:%d
Line 2852: (f) false alarm for CQI size(%d)!!
Line 2858: (F) CQI_SIZE error: %d
Line 2932: (F) false ack size (%d)
Line 3247: (f) ul_cc_idx(%d) is INVALID for LMAC
Line 3262: (F) harq_buf.SWHarqBufAddress[0]:0x%x 
Line 3280: Zero-Padding PUSCH Skipped. cell_group:%d, ul_cc_idx:%d, ul_reg_index:%d, ul_h_id:%d
Line 3284: (F) sw_harq_buf_status:0x%x, ul_h_id:%d, ant_idx:%d, ul_trans_sfn_tti:%d, length_pusch:%d
Line 3373: PUCCH_rach Check %d, %d, 0x%x
Line 3508: ACK&SRI=>ACK[0x%x]Idx[Ant0:%d, 1:%d]SIZE[%d]
Line 3566: PUCCH_TPC=>t_tti:%d, TPC[0]:%d, TPC[1]:%d, TPC[4]:%d, TPC[5]:%d, TPC[6]:%d, TPC[9]:%d
Line 3627: [simul_pucch] PUCCH=>t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, rsc_idx:%d, an_cw:%d, ul_sfn:%d
Line 3709: SRI drop=>sri_trans_count:%d, cell_group: %d
Line 3861: ACK&SRI=>ACK[0x%x]Idx[Ant0:%d,1:%d]SIZE[%d] cell_group[%d]
Line 3880: CQI&ACK->Format_2B:ACK[0x%x]AckNum[%d] cell_group[%d]
Line 3936: PUCCH_TPC=>t_tti:%d, TPC[0/1]:%d, TPC[2/3]:%d, TPC[4/5]:%d, TPC[6/7]:%d, TPC[8/9]:%d
Line 3986: PUCCH=>cell_group/t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, rsc_idx:%d, an_size:%d, ul_sfn:%d
Line 3991: PUCCH=>cell_group/t_tti:%d, fmt:%d, tti_con:0x%x, ack_val:0x%x, an_size:%d, cqi_size:%d, rsc_idx2:%d
Line 3994: PUCCH=>format: %d, rsc index : %d, pcc index : %d
Line 4320: Ant switching [Hard_AS Done]. TAS_status:%02d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Line 4332: Ant switching [Done]. TAS_status:%02d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Line 4364: Ant switching [Hard_AS Waiting]. <FORCED UL REMOVE!!> TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Line 4376: Ant switching [Hard_AS Waiting]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Line 4391: Ant switching [Hard_AS Checking]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, hard_ant_sw_timer:%d, TAS_HardSw_Time:%d
Line 4406: Ant switching [Waiting]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Line 4423: Ant switching [N/A]. TAS_status:%d, tx_pwr:%d, txpwr_th[%d, %d], rsrp_diff:%d, rsrp_th[%d, %d]
Line 4483: [AIT_4x4MIMO] average pusch power(%d)
Line 4803: GAP UL remove
Line 4812: Measurement GAP UL0 remove, flag:%d
Line 4819: Measurement GAP UL1 remove, flag:%d
Line 4829: TX Block UL remove, timer:%d
Line 4952: TX FuncClk RESET. [Com], [Enc], [4GModTx0_Clk0], [4GModTx0_Clk1], [4GModTx1_Clk0], [4GModTx1_Clk1]. ul_rtg_cnt:0x%x
Line 4984: IPC: IPC_ACTION_ID_TX_WAKEUP.
Line 5340: [PowerClass] et_en : %d, pwr_val : %d, pwr_indx : %d, srs_pwr_val : %d, srs_pwr_idx : %d, shift_gain_idx : %d
Line 5380: DPD/ET=> et_en:%d, pwr_idx:%d, sum_comp_val(x10):%d, srs_et_en:%d, srs_pwr_idx:%d, srs_on:%d
Line 5620: sum_comp_val[%d], mod_val[%d], setting_apt_cfr_clipping_limit[0x%x], apt_cfr_clipping_limit0~3[0x%x][0x%x][0x%x][0x%x]
Line 6086: UL_PWR=>pwr:%d, tx_analog_gain:0x%x, ifft(/srs):0x%x, tx_gain_comp_val(x10):%d, ul_cc_idx/pa gain(/srs):0x%x, comp_val:%d, tx_gain_table_comp_val:%d, tx_gain_table_srs_comp_val:%d, srs_d_gain_correct:%d
Line 8215: A-MPR=> A-MPR:%d, rf_band:%d, start_rb_slot0:%d, ns_val(ori/cvt):%d, ns15_1_en:%d, tx_freq_100khz:%d, ul_cc_idx/ul_bw:%02d
Line 9489: large_a has abnormal value. large_n_rb_alloc:%d, large_n_rb_agg:%d
Line 9563: large_a has abnormal value. large_n_rb_alloc:%d, large_n_rb_agg:%d
Line 9611: ca_ns_val:%d, Tx_pcc_scc:%d, max_pwr:%d, p_e_max_c:%d, mpr/a_mpr:%d, ca_user_mpr:%d, mod_val/simul/revers/ctg_rb_alloc/nctg_flag:0x%x
Line 9723: Abnormal BW configuration. CA BW Class can not be A! (CC0/CC1 : %d/%d)
Line 10341: DSPTX_GenPseudoSeq. cell_id : %d, ue_id : %d, ul_cc_idx : %d, cell_group : %d
Line 10417: DSPTX_GenPseudoVirtualCell. cell_id[0] : %d, dmrs_setup_r11 : %d, pusch_id : %d, csh_dmrs_id : %d, nPucch_param_r11_setup : %d, pucch_id : %d, ul_cc_idx : %d
Line 10570: [Modify TA] Change Small TA value. ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], err_correct_drx[%d], modi_relative_ta_val[%d], ul_cc_idx[%d]
Line 10577: (W) [Modify TA] Out of small TA value range => Set Big TA. modi_relative_ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], ul_cc_idx[%d]
Line 10591: [RFD_Modify TA] Change Small TA value. ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], err_correct_drx[%d], modi_relative_ta_val[%d], ul_cc_idx[%d]
Line 10600: (W) [RFD_Modify TA] Out of small TA value range => Set Big TA. modi_relative_ta_val[%d], ul_dl_timing_diff[%d], ul_rtg_cnt[0x%x], dl_rtg_cnt[0x%x], ul_cc_idx[%d]
Line 10678: UL_TA=> TA_mode[%d], TA_val[%d], REG_TA_acc0~1[0x%x][0x%x], han_ta_acc[%d], ul_cc_idx[%d]
Line 10738: UL_STR=> err_corr[Ts]:%d, str_val:%d, str_accum[Ts]:%d, ul_sfn:%d, rx_cnt:%d, tx_cnt:%d, ul_cc_idx:%d
Line 10748: UL_STR=> [for MIMO, PUCCH diversity, SRS 2ports]. err_corr[Ts]:%d
Line 10761: UL_STR=> [for same TAG]. err_corr[Ts]:%d. ref_cell_ul_cc_idx:%d, set_ul_cc_idx:%d, tag_id:%d
Line 10795: TxTimingDiff. rtg_cnt[0x%x, 0x%x], TA_acc[%d, %d]
Line 10911: IPC:UL_SIB!! cell_group: %d, rs_sib.valid:%d, pwr_ctrl_sib.valid:%d, pwr_ctrl_r10_sib.valid:%d, pucch_sib.valid:%d, pusch_sib.valid/srs_sib.valid:%d, pucch_sib.n1_pucch_an:%d
Line 10938: Dedi para ul_pwr_ctrl.valid : 0x%x, pusch.valid : 0x%x, pucch.valid : 0x%x, cell_group : %d
Line 10950: TPC_PUSCH reset : tpc_acc : %d, p0_old : %d, p0_new : %d, cell_group : %d 
Line 11040: copy start msg_pucch.valid = %d
Line 11048: pucch_r10 valid  : %d format3 setup:%d pucch_format4_setup: %d, pucch_format5_setup:%d
Line 11054: copy start pucch_r11.valid = %d
Line 11088: pucch_r13 spatial bundling PUCCH : %d PUSCH:%d, format4 setup: %d, format5 setup: %d, format3 setup: %d, cs setup : %d 
Line 11126: 1370 copy start n3_pucch_an_list_cnt : %d, n3_pucch_an_list_p1_cnt : %d, n3_pucch_an_list[i_list] : %d %d %d %d
Line 11134: 1370 copy start n3_pucch_an_list_p1[i_list] : %d %d %d %d
Line 11230: UL_ERR=> SRI parameter error, sr_Configuration_Index : %d, cell_group 
Line 11249: IPC:UL_SR=>SrValid:%d SrRscIndex:%d, SrConfigIdx:%d, DsrMax:%d, P1valid:%d, rscindexP1:%d, cell_group:%d
Line 11259: UL=> sr_ProhibitTimer : %d, cell_group : %d
Line 11265: UL=> skip_zeropadding_pusch : %d, cell_group : %d
Line 11295: rach_sib : c_i:%d, r_i:%d, z_c:%d, h_f:%d, f_o:%d, cell_group:%d 
Line 11415: UL(F)=> Wrong srs_Configuration_Index : %d 
Line 11419: srs_periodicity:%d, srs_sub_offset:%d, ul_cc_idx:%d
Line 11492: UL(F)=> Wrong ap_srs_Configuration_Index : %d 
Line 11520: IPC:UL_SRS=>[0x%x] ConfigIdx:%d, srs_bandwidth:%d ul_srs_r10.valid:%d, ul_srs_ap_r10.valid:%d, cell_group: %d
Line 11557: ul_srs_req.valid %d, val: %d, cell_group: %d 
Line 11710: TX power time trigger => tx_level_num[%d], Period[%d] power_index0[0x%x] 1[0x%x] 2[0x%x] 3[0x%x] 4[0x%x]
Line 11826: IPC:UL_Common. msg_ul_bw.valid[%d], msg_ul_bw.ul_common_bw[%d], msg_ul_bw.ul_common_cp_type[%d], [FEM: 0x%x, %d, 0x%x], cell_group/dulplex[%02d], ULcoreID[%d]
Line 11831: IPC:UL_Common. MIPI_CH => PA[0x%x], SM[0x%x], AIT[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SPI_ON[%d], SPI_OFF[%d]
Line 11858: IPC: SRI ON !!  ipc_sri_on : %d, SRI_INFO_arm.on_cnt : %d, cell_group: %d
Line 11863: DRX&SRI(%d)
Line 11898: [Modify TA] Skipped because Absolute TA is already pending for next tti
Line 11922: [Modify TA] Skipped because Absolute TA was applied at last tti only
Line 11926: IPC:UL_TA0[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
Line 11938: [Modify TA] Skipped because Absolute TA is already pending for next tti
Line 11960: [Modify TA] Skipped because Absolute TA was applied at last tti only
Line 11964: IPC:UL_TA1[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
Line 11978: [Modify TA] Skipped because Absolute TA is already pending for next tti
Line 12002: [Modify TA] Skipped because Absolute TA was applied at last tti only
Line 12006: IPC:UL_TA_PScell[M:%d, V:%d, acc:%d, ta_abs_set_on:%d, cc_bitmap:0x%x]
Line 12037: IPC: GAP info[en:%d, patern:%d, offset:%d]
Line 12076: IPC: HoTempSfn:%d, cell_id[UL_ANT0]:%d, Ul_ActiveCC:%d
Line 12097: IPC: ReleaseSrsCqi : Cell Group[%d]
Line 12152: IPC: ReleaseScellSrs !!  cc_bitmap : 0x%x, cell_group(%d)
Line 12208: IPC: PowerEMax[%d], power_c_max[%d], cell_group[%d], cc_idx[dl/ul:%d], ipcFirstCome:%d
Line 12241: IPC: PowerEMax[ul_cc_idx : %d] : %d, powerClass(ulca/nonUlCa) : %d, max_pwr_ue_support : %d, cd_ofs(PC3/PC2) : %d / %d, ltmSet : %d
Line 12254: (W) Invalid max power value [%d]
Line 12289: (f) [UL CA][UL DC] Invalid ul_cc_idx for RACH. cell_group:%d, scell_idx:%d
Line 12323: IPC:Rachinfo rar_t:%d, p_cnt:%d, p_id:%d, cmd:%d, ul_cc_idx:%d, m_id:%d, cell_group/ra_sr:%d
Line 12451: ULP_rec=> ul_tti0(%d), ul_sfn0:%d, han_ta_acc0=%d, ul_tti1(%d), ul_sfn1:%d, han_ta_acc1=%d
Line 12517: IPC: ChangeLTMode : LTM_MODE_ENABLE[SHM] : 0x%x, DSP_LTM_MODE_ENABLE : 0x%x, DSP_AFC_CAL_ENABLE : 0x%x, TX_SCC_MODE : 0x%x, CL_DELAY_CAL_MODE : 0x%x
Line 12618: TDD pusch_trans=> rb_size:%d, trans_tti:%d, duplex:%d sf_assign:%d, ul_dl :%d
Line 12668: WARNING REMOVAL TRACE : %d
Line 12669: WARNING REMOVAL TRACE : %d
Line 12703: LTM_PUSCH=> ltm_ch:%d, rb_size:%d, start_rb:%d, mcs:%d(1:QPSK, 2:16QAM), ul_bw:%d, ant_sel:%d, ltm_pwr_set_enable:%d
Line 12772: LTM_PRACH=> config_index:%d, offset:%d, ul_bw:%d
Line 12853: UL_LTM=> final_pwr:%d, rcv_pwr:%d, mpr_v:%d, max_power:%d
Line 12942: TDD pusch_trans=> rb_size:%d, trans_tti:%d, duplex:%d sf_assign:%d, ul_dl :%d
Line 12991: LTM_PUSCH=> ltm_ch:%d, rb_size:%d, start_rb:%d, mcs:%d(1:QPSK, 2:16QAM), ul_bw:%d, ant_sel:%d, ltm_pwr_set_enable:%d
Line 13177: IPC: IPC_LTM_SET - cell_group(%d)
Line 13491: IPC: LtmSet %d , tti_con %d, TX0_bw:%d, TX1_bw:%d, ltm_2tx_on:%d, ul_cc_idx:%d, FEMSIF_MAIN_CTL:0x%x
Line 13557: in IPC Tx Freq = %d, shared = %d, tx_path_off_block : %d, ul_cc_idx:%d
Line 13578: IPC: GetHWVer   hw_version[0] : %d, hw_version[1] : %d, hw_version[2] : %d
Line 13668: ULP_MSG2=>r_tti:%d, sfn:%d, tti:%d, ul_delay:%d
Line 13695: ULP_MSG2_DLY=>add_s:%d, sfn:%d, sub_f:%d
Line 14309: gain_table_update_flag set. stop_ipc_timer[%d], ul_cc_idx[%d]
Line 14334: [Abnormal TX power] UL_CH[%d], Target_power[%d], PM_val[%d], sfn_tti[%d], ul_cc_idx[%d]
Line 14345: [Abnormal TX power] UL_CH[%d], Target_power[%d], gpadc_value[%d], sfn_tti[%d], ul_cc_idx[%d]
Line 14359: IPC: IPC_ACTION_ID_ABNORMAL_PWR
Line 14523: AIT=> Enable:%d, status:%d, ait_cnt:%d, pwr_threshold:%d, interval:%d, max_dump_num:%d, ait_end:%d
Line 14572: IPC:AIT MIPI[num:%d, [0]:0x%x, [1]:0x%x, [last]:0x%x, X-GND en:%d, type:%d, set_val:0x%x
Line 14596: AIT=> Send AIT dump End, ait_end_trigger:%d
Line 14646: out of range power : %d
Line 15006: Reduce PUSCH power : limit_type:%d, limit_pwr:%d   UL_ANT0[%d => %d], UL_ANT1[%d => %d]
Line 15043: Reduce SRS power   UL_ANT0[%d => %d], UL_ANT1[%d => %d], max_linear_val:%d, total_linear_val:%d
Line 15069: [DSPTX_CheckULSingleLo]. ul_single_lo_scc_idx:%d, dl_cc_idx:%d, slo_cc_idx:%d, dmxr_freq_value:%d
Line 15212: Single LO=> total_pwr:%d, single_lo_digital_gain_comp[0x%x, 0x%x], total_last_sym_pwr:%d, single_lo_last_sym_digital_gain_comp[0x%x, 0x%x]
Line 15304: Out of range!! gain_atten_val:%d
Line 15365: num_ul_cc[MCG]:%d, num_ul_cc[SCG]:%d
Line 15554: Set [Modify-TA] for ul_pcc_idx[%d]
Line 15673: [UL CA] DSPTX_SetScell. MIXER_FREQ_OFFSET CC0[0x%x] CC1[0x%x], diff_freqeuency1:%d, diff_freq2:%d, comp_100khz[%d], ul_slca_in_config.rate[%d], O_frq:%d, O_frq2:%d single-LO/revers_flag:%02d
Line 15701: [UL CA] IPC: DSPTX_GetIpcScell. srs_comm.valid:%d, pusch_comm.valid:%d, pusch_ulrs.valid:%d, prach_scell_setup:%d, pusch.valid:%d, srs.valid:%d, srs_ap.valid:%d
Line 15745: IPC: SCELL_TX_CONFIG Power: %d, cell_group : %d, cc_idx : %d
Line 15817: [UL CA] update Scell_TxComm. prach_comm_setup:%d, peamble_init_power:%d, power_ramp_step:%d, delta_preamble_Msg3:%d, idx:%d
Line 15823: [UL CA] updaete Scell_TxComm. root_seq_index:%d, prach_cfg_index:%d, high_speed_flag:%d, zero_correlation_zone_cfg:%d, prach_freq_offset:%d, tag_id:%d, ref_flag_for_stag:%d
Line 15944: [UL CA] updaete Scell_TxDedi. idx:%d, ul_cc_idx:%d, dl_cc_idx:%d, cell_group:%d, ul_srs_ap_r10_valid:%d, ul_srs_ap_r10_setup:%d, gDb[srs_req_on]:%d
Line 16034: [AS] Backup: ant_sw_en:%d, ant_sw_txpwr_en:%d, ant_sw_maxtxpwr_en:%d, rsrp_diff:%d, gAntSWStop:%d
Line 16046: UL=>BackupTXdb. TA_ACC[%d, %d], PUCCH_TPC_ACC:%d, PUSCH_TPC_ACC[%d, %d], absolute_init_pwr[%d], tag_id[%03d]
Line 16081: [AS] Restore: ant_sw_en:%d, ant_sw_txpwr_en:%d, ant_sw_maxtxpwr_en:%d, rsrp_diff:%d, gAntSWStop:%d
Line 16091: UL=>RestoreTXdb. TA_ACC[%d, %d], PUCCH_TPC_ACC:%d, PUSCH_TPC_ACC[%d, %d], tx_freq_100khz[%d], tag_id[%03d]
Line 16108: IPC: TXBackupCommand
Line 16313: [RFD_DAC_CTL] ADDR[0x%x] DATA[0x%x], [RFD_DAC_DIGI_IN] ADDR[0x%x] DATA[0x%x], cmd[%d], dac_idx[%d], ul_cc_idx[%d]
Line 16409: [ETDAC] [RFD_DAC_CTL] ADDR[0x%x] DATA[0x%x], [RFD_DAC_DIGI_IN] ADDR[0x%x] DATA[0x%x], cmd[%d], dac_idx[%d], ul_cc_idx[%d]
Line 16594: [DSPTX_TXFOnOffControl] RFD_TXF_EN[0x%x], RFD_TXF_DVALID_CLK[0x%x], ulX_valid_clk[0x%x], MCW_PLL_CLK_EN[0x%x], PHY_CTRL[0x%x], cmd[%d], filter_idx[%d], ul_cc_idx[%d], NrOnStatus[%d], rf_ver[%d]
Line 16721: final_ul_64qam_enable:%d, enable_64_Qam:%d, enable_64_Qam_r12:%d, UECategory:%d, UECategory_UL:%d, UECategory_DL:%d, ul_cc_idx:%d
Line 16763: final_ul_256qam_enable:%d, enable_256_Qam_r14:%d, UECategory:%d, UECategory_UL:%d, UECategory_DL:%d, ul_cc_idx:%d
Line 16804: PUCCH_TPC_CAL=>pucch_tpc_sum:%d, tpc_acc_pucch:%d, cell_group %d
Line 16863: ULP_MCW_UL_Mutex=> wait_cnt[%d], id[%d], set_enable[%d]
Line 16956: DSPTX_SetProcessTime. chip_name[0x%x], ifft_value[0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x]
Line 17031: [DSPTX_RFD_SLO_Init] ul_slca_in_config.rate[%d], RFD_REG_TXF_CFG[0x%x], RFD_TXF_EN[0x%x], RFD_REG_INTP_ON[0x%x], RFD_REG_DAC_CFG[0x%x], RFD_REG_MAIN_BIT_SEL[0x%x], RFD_REG_ET_DAC_CFG[0x%x], RFD_REG_ET_BIT_SELECT[0x%x], RFD_REG_TXF_DVALID_CLK[0x%x]
Line 17084: [DSPTX_RFD_Init] RFD_DROOP_COMP_A~J[0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x][0x%x]
Line 17087: [DSPTX_RFD_Init] RFD_DROOP_COMP_A~J[0x%x], RFD_DROOP_COMP_BS[0x%x], filter_idx[%d], et_idx[%d]
Line 17155: [DSPTX_RFD_Init] RFD_REG_TXF_CFG[0x%x], RFD_TXF_EN[0x%x], RFD_REG_INTP_ON[0x%x], RFD_REG_DAC_CFG[0x%x], RFD_REG_MAIN_BIT_SEL[0x%x], RFD_REG_ET_DAC_CFG[0x%x], RFD_REG_ET_BIT_SELECT[0x%x], RFD_REG_TXF_DVALID_CLK[0x%x]
Line 17267: Init TX. rf_board_type:0x%x, ul_user_mpr_en:0x%x, mipi_FEMSIF_ch:0x%x, mipi_SM_ch:0x%x, mc_apt_only_en:0x%x, mipi_ait_ch:%d, rfd_filter_idx[%d][%d], rfd_et_idx[%d][%d]
Line 17296: Data move dl_cc_idx:%d, tti:0x%x,_tti:0x%x, dl_ack_info:0x%x, dl_ack_info_next : %d
Line 17419: IPC TX Power Time Report => 0[%X] 1[%X] 2[%X] 3[%X] 4[%X]
Line 17507: IPC:TX_SWAP=> swap_tx_path:0x%x, rfic_tx_path_off[1/0]:0x%02x, mipi_FEMSIF_ch[%d], mipi_SM_ch[%d]
Line 17510: IPC:TX_SWAP. MIPI_CH => PA[0x%x], SM[0x%x], AIT[0x%x]. DELAY => PA_ON[%d], PA_OFF[%d], PA_GAIN[%d], SM_ON[%d], SM_OFF[%d], SPI_ON[%d], SPI_OFF[%d]
Line 17536: IPC:TX_BLOCK
Line 17557: IPC:TX_BLOCK_DONE
Line 17595: DSPTX_Gnss_GeneratePaenSig_Init. TICKGEN_TX0_MAIN_CTL0[0x%x], IRAT_MUX_MAIN_CTL_RD[0x%x]
Line 17770: DSPTX_Gnss_GeneratePaenSig_Control. cp_type[%d], gnss_ctrl_en_ttim[%d], reg_ul_tti_config[0x%x], gnss_tick_cnt[0x%x][0x%x][0x%x][0x%x]
Line 17795: DSPTX_Gnss_GeneratePaenSig_SWmode. gps_pa_en[%d], IRAT_MUX_GPS_SEL[0x%x]
Line 17834: DSPTX_Gnss_GeneratePaenSig_HWmode. IRAT_MUX_GPS_SEL[0x%x], TICKGEN_TX0_MAIN_CTL0[0x%x], ON0_CNT[0x%x], OFF0_CNT[0x%x], ON1_CNT[0x%x], OFF1_CNT[0x%x], IRAT_MUX_MAIN_CTL_RD[0x%x]
Line 19092: [PowerClass] activeCcNum : %d, powerClass : %d, p_e_max : %d, DSP_LTM_MODE_ENABLE : %d, max_pwr_ue_support : %d
Line 19126: [PowerClass] ulca_onoff : %d, powerClass : %d, max_pwr_ue_support : %d, non_ulCa_p_e_max : %d, p_e_max_scell : %d
Line 19362: PHY_CTRL
Line 19414: [RF-CRTL] [DSPTX_Init_MCW_Sub6G_UL_USER_CH] init_fail[0x%x]
Line 19562: [MARCONI_UL] FILT_STATUS_CH1~4[0x%x][0x%x][0x%x][0x%x], INTR_STATUS[0x%x], CH_INTR_STATUS[0x%x], EOT_ERROR_COUNT[0x%x], CRC_ERROR_COUNT[0x%x], CH_ENABLE[0x%x]
Line 19573: [MARCONI_UL] RFD_TXF_EN[0x%x], RFD_TXF_DVALID_CLK[0x%x][0x%x], ulX_valid_clk[0x%x][0x%x], PHY_CTRL[0x%x], RFD_UL_TXF_CFG[0x%x][0x%x], NrOnStatus[%d]
Line 19823: (f) ul_cc_idx(%d) is INVALID
