Line 135: uhal_CHmcpHsdpaDlEqualizerConfig_free: SettleTImeToken set to NULL
Line 245: HicDataDescrambler: scr_pn_state=0x%x, eq_sinr_bit_sel=0x%x, mjt_gain_comp_off=0x%x iai_scal_comp_off=0x%x cross_ant_ic=0x%x addback_bitsel=0x%x maj_tap_gain_shift=0x%x
Line 258: HicPNState: PriServingScrCodeGenInitState 0x%x SecServingScrCodeGenInitState 0x%x
Line 346: activeStackId %d ##### HIC_enable %d #####
Line 355: [EQconfig] RxDiv=%d TxDiv=%d Reconfig=%d eqMode=%d SCscr=%d hsdpaDlRlNr=%d
Line 357: [EQconfig] PHY eq_init_flag=%d
Line 386: activeStackId %d [RxDiv][DSP] rxDivOn=%d preRxDiv=%d secondRfOffIndicator=0x%x
Line 391: activeStackId %d [RxDiv][DSP] Rx div off -> on secondRfOffIndicator=0x%x
Line 403: activeStackId %d [RxDiv][UHAL] Rf Settle Time Token start
Line 415: activeStackId %d [RxDiv][UHAL] Release in RF paused state, Don't launch RF settle Time Token
Line 424: activeStackId %d [RxDiv][DSP] Rx div on -> off secondRfOffIndicator=0x%x
Line 431: activeStackId %d [RxDiv][UHAL] RxDiv on ---->>>>> RxDiv off
Line 446: activeStackId %d [RxDiv][DSP] rxDivOn=%d preRxDiv=%d secondRfOffIndicator=0x%x
Line 451: activeStackId %d [RxDiv][DSP] Rx div off -> on secondRfOffIndicator=0x%x
Line 463: activeStackId %d [RxDiv][UHAL] Rf Settle Time Token start
Line 475: activeStackId %d [RxDiv][UHAL] Release in RF paused state, Don't launch RF settle Time Token
Line 485: activeStackId %d [RxDiv][DSP] Rx div on -> off secondRfOffIndicator=0x%x
Line 492: activeStackId %d [RxDiv][UHAL] RxDiv on ---->>>>> RxDiv off
Line 508: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] fingersStr 0x%x, lockStatus 0x%x, UPHY eq_init_flag %d
Line 515: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] fingersStr 0x%x, lockStatus 0x%x, UPHY eq_init_flag %d
Line 585: activeStackId %d [uhal_CHmcpHsdpaDlEqualizerConfig_request] rxDivEnable %d, only 2nd antenna fingers are locked : fingersStr 0x%x, lockStatus 0x%x
Line 749: activeStackId %d Adjust EQ position: eq_ref_postion = %d
Line 760: activeStackId %d eq_init_flag: %d
Line 1138: activeStackId %d eqType =  %d
Line 1152: [Type-3i] serving cell changed(prvServingCellScrCode=%d, servingCellScrCode=%d
Line 1163: ### HIC pri_scr_code_state %d pri_scr_code %d
Line 1170: pri_scr_code_state %d pri_scr_code %d sec_scr_code_state %d sec_scr_code %d
Line 1209: updateCnt=%d prvServingCellScrCode=%d servingCellScrCode=%d eq_init_flag=%d
Line 1236: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 1251: FA2 SCH-IC is not yet measured: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 1261: txDivRscp=%d txDivMetric=%d txDivRscpForDc=%d txDivMetricForDc=%d isSecondaryCell=%d
Line 1289: hsdpaEqualizerNr : %d, hclp_serving_pn_packp[%d]=0x%x, hclp_serving_pn_packp[%d]=0x%x 
Line 1316: hclp_serving_pn_packp[0]=0x%x hclp_serving_pn_packp[1]=0x%x hclp_serving_pn_packp[2]=0x%x hclp_serving_pn_packp[3]=0x%x
Line 1389: [IPC:IPC_CONSUMER_ACTION_ID_HS_DL_EQUALIZER_CONFIG_REQUEST] execution=%d
Line 1402: prvServingCellScrCode=%d, servingCellScrCode=%d, eq_init_flag=%d, dpchFrameOffset (256 chipset unit) = %d
Line 1553: [RxDiv][UHAL] RxDiv off ---->>>>> RxDiv on after RF Settle
Line 1575: activeStackId %d finger_update_flag = %d eq_init_flag %d So finger position is not transfered to DSP
Line 1648: fingersStr %d fingerInx=%d fingerEnergy=%d, fingerInfoPack=%d lockStatus=%d sceIdx=%d fingerPos=%d
Line 1810: SetEqCellInfo:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1817: SetEqCellInfo:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 1875: SetEqCellInfo FA2:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1882: SetEqCellInfo FA2:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 1940: SetEqCellInfo:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 1947: SetEqCellInfo:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 2016: SetEqCellInfo FA2:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 2023: SetEqCellInfo FA2:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 2080: SetEqCellInfo FA3:  %d, isValidCell=%d, PscrCode=%d, cpichRscp=%d
Line 2087: SetEqCellInfo FA3:  %d, isValidOffset=%d, mpOffset=%d, mpEng=%d
Line 2433: Invalid Configuration with configuredEqNum =  %d
Line 2702: Invalid Configuration with configuredEqNum =  %d
Line 2705: eqType =  %d
Line 2748: activeStackId %d ServingScrCodeGenInitState %d, ServingScrCodeGroup[index %d] = 0x%x, psc code %d
Line 2796: ### HIC [index %d] ServingScrCodeGenInitState 0x%x, psc code %d, hclp_serving_pn_pack[%d] 0x%x,hclp_serving_pn_pack[%d] 0x%x 
Line 2807: activeStackId %d ### hclp_dc_div_config %d, hclp_4c_div_config %d, hclp_schic_config %d
Line 2851: [index %d, ordered index %d] txDivRscp=%d txDivMetric=%d tempCpichSchPwr %d
Line 2865: [To consider rollback procedure]  PrimaryEqualizerConfig_ptr 0x%x
Line 2879: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	f_execution =	%d
Line 2880: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	f_group =	%d
Line 2926: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	cpc_drx_tau_dpch	=	%d
Line 2927: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_eq_init_release	=	%d
Line 2928: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_dc_div_config	=	%d
Line 2933: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_serving_pn_pack[NUM_SERVING_PN]	=	%d
Line 2936: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_schic_config	=	%d
Line 2937: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_fa0_schic_measure	=	%d
Line 2938: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	hclp_fa1_schic_measure	=	%d
Line 2943: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	cqi_gamma	=	%d
Line 2944: [EQconfig]	dspRegHsDlEqualizerConfigReq	->	loopbackMode	=	%d
