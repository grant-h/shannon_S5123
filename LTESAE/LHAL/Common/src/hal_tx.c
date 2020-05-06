Line 402: ul_srs : srs_bandwidth = %d, freq_domin_position = %d, hopping_bw = %d, duration = %d, trans_comb = %d, cyclic_shift = %d, srs_Configuration_Index = %d
Line 407: srs config : Release
Line 503: cqi : reporting_mode_aperiodic = %x
Line 540: cqi : pdsch_offset = %d, cqi_reporting_periodic_enable = %d, cqi_PUCCH_Resource_Index = %d, cqi_Format_Indicator_type = %d, pmi_Config_Index = %d
Line 545: cqi : cqi_Format_Indicator_Periodic.wide_band_cqi = %d
Line 551: cqi : cqi_Format_Indicator_Periodic.subband_cqi = %d
Line 558: cqi : ri_Config_Index = %d
Line 563: cqi : simultaneous_AckNack_And_CQI = %d
Line 601: cqi config : Release
Line 836: PCELL cqi_report_config_v1310_setup:%d, cqi_report_aperiodic_v1310_setup:%d
Line 895: scheduling_req_config : sr_PUCCH_ResourceIndex = %d, sr_Configuration_Index = %d, dsr_trans_max = %d
Line 907: scheduling_req_config : Release
Line 915: scheduling_req_r10_config : sr_PUCCH_ResourceIndexP1 = %d
Line 961: HALTX_SetULBandWidth(CC%d): gDrx_ActiveRat(%d)
Line 1006: Change UL BW : %d -> %d, Cell_info(%d, %d)
Line 1015: Change UL CP Type : %d -> %d, Cell_info(%d, %d)
Line 1072: assert condition : ph_ind is NULL
Line 1132: more than 2 UL grant, but at most 2 UL grants can be processed.
Line 1211: Pending GRANT [ID:%d, %d],[0x%X]%d/%d/%d/%d
Line 1212: Interrupt New UCI, before Complete Prev UCI, LMAC Busy(%d)
Line 1222: UL Grnat Error : num[%d], num_cell[%d], type1_ph_num[%d]
Line 1230: GRANT [ID:%d, %d],[0x%X]%d/%d/%d/%d
Line 1263: Pending UCI Trigger, After Prev UCI Complete
Line 1367: ul_rs_sib : group_hopping_enable = %d, group_assign_pusch = %d, seq_hopping_enable = %d, cyclic_shift = %d
Line 1394: ul_pwr_ctrl : p0_nominal_pusch = %d, alpha = %d, p0_nominal_pucch = %d, ul_cyclic_prefix_length = %d
Line 1402: ul_pwr_ctrl : delta_tp_pucch = {%d, %d, %d, %d, %d}, delta_Preamble_Msg3 = %d
Line 1437: pucch_sib : delta_shift = %d, n_cqi_rb = %d, n_an_cs = %d, n1_pucch_an = %d
Line 1452: pusch_sib : n_SB = %d, hopping_mode = %d, pusch_Hopping_Offset = %d, enable_64_Qam = %d, enable_64_Qam_r12 = %d
Line 1472: ul_srs_sib : srs_bandwidth_config = %d, srs_subframe_config = %d, simultaneous_ack_srs = %d, srs_maxUpPts = %d
Line 1477: ul_srs_sib : NULL
Line 1530: ul_rs_sib : group_hopping_enable = %d, group_assign_pusch = %d, seq_hopping_enable = %d, cyclic_shift = %d
Line 1545: pusch_sib : n_SB = %d, hopping_mode = %d, pusch_Hopping_Offset = %d, enable_64_Qam = %d, enable_64_Qam_r12 = %d
Line 1563: sounding_rs_ul : srs_bandwidth_config = %d, srs_subframe_config = %d
Line 1568: sounding_rs_ul : simultaneous_ack_srs = %d, srs_maxUpPts = %d
Line 1573: ul_srs_sib : NULL
Line 1581: antenna_config : antenna_ports_count = %d
Line 1624: ul_pwr_ctrl : p0_nominal_pusch = %d, alpha = %d, p0_nominal_pucch = %d, ul_cyclic_prefix_length = %d
Line 1632: ul_pwr_ctrl : delta_tp_pucch = {%d, %d, %d, %d, %d}, delta_Preamble_Msg3 = %d
Line 1646: ul_pwr_ctrl_sib : NULL
Line 1679: pucch_config : delta_shift = %d, n_cqi_rb = %d, n_an_cs = %d, n1_pucch_an = %d
Line 1685: pucch_config : NULL
Line 1699: uplink_pwr_ctrl_common_v1310 : NULL
Line 1773: msg_ul_pwr_ctrl : p0_ue_pusch = %d
Line 1775: ul_pwr_ctrl : delta_mcs_enable = %d, accumulation_enable = %d
Line 1777: ul_pwr_ctrl : p0_ue_pucch = %d, p_srs_offset = %d, filter_coefficient = %d
Line 1782: ul_pwr_ctrl : NULL
Line 1796: pusch_config : deltaOffset_Ack_Index = %d, deltaOffset_RI_Index = %d, deltaOffset_CQI_Index = %d
Line 1802: pusch_config : NULL
Line 1836: antenna_config : codebook_subset_restriction_type = %d, codebook_subset_restriction = 0x%X
Line 2067: antenna_config : transmission_mode = %d
Line 2072: antenna_config : NULL
Line 2134: pucch_config : tdd_AckNack_Feedback_Mode_present = %d, tddAckNackFeedbackMode = %d
Line 2136: pucch_config : enable_ack_Nack_repetition = %d, repetiton_factor = %d, n1PUCCH_AN_Rep = %d
Line 2142: pucch_config : NULL
Line 2215: hal_tx :pucch_formatR10.format3_enable = %d , dsp_pucch_r10.pucch_format3_setup = %d
Line 2514: hal_tx : dsp_pucch_r13.pucch_format3_setup = %d
Line 2543: hal_tx : dsp_pucch_r13.n1_pucch_an_cs_setup = %d
Line 2569: hal_tx : dsp_pucch_r13.pucch_format4_setup = %d
Line 2587: hal_tx : dsp_pucch_r13.pucch_format5_setup = %d
Line 2620: hal_tx : dsp_pucch_r13.pucch_r8.valid = %d
Line 2647: hal_tx : dsp_pucch_r13.pucch_r11.valid = %d
Line 2664: hal_tx : dsp_pucch_r13.pucch_r12.valid = %d
Line 2683: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13.valid = %d
Line 2688: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13.valid = %d
Line 2707: hal_tx : dsp_pucch_v1370.valid = %d
Line 2768: dsp_pusch_r14.valid:%d, enable_256qam_r14_setup:%d , enable_256qam_r14.choice:%d 
Line 2921: scell info config : num_seccell = %d, num_dsp_scell = %d, NumofScellConfig = %d
Line 3516: hal_tx : dsp_pucch_r13.pucch_format3_setup = %d
Line 3545: hal_tx : dsp_pucch_r13.n1_pucch_an_cs_setup = %d
Line 3571: hal_tx : dsp_pucch_r13.pucch_format4_setup = %d
Line 3589: hal_tx : dsp_pucch_r13.pucch_format5_setup = %d
Line 3622: hal_tx : dsp_pucch_r13.pucch_r8.valid = %d
Line 3649: hal_tx : dsp_pucch_r13.pucch_r11.valid = %d
Line 3666: hal_tx : dsp_pucch_r13.pucch_r12.valid = %d
Line 3685: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13.valid = %d
Line 3690: hal_tx : pucch_config_r13_setup = %d , dsp_pucch_r13.valid = %d
Line 3731: hal_tx : dsp_pucch_v1370.valid = %d
Line 3765: SCELL Scell_TxDedi.pusch_r14.valid:%d, enable_256qam_r14.choice:%d
