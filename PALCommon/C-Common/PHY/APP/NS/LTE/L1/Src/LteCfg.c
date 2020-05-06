Line 326: (I)LTE_Block_Initialize
Line 341: S%x EVT%x ExtHBUF base:0x%x
Line 614: (SCG) Default Setting: pscell_idx:%d nAnt:%d, bw:%d, tm:%d, ng:%d, sf:%d, ssf:%d
Line 798: (F) #_config CC:%d
Line 801: (I) Cfg_SetPUCCHconfig cfg_num(%d), large_A (%d), reverse(%d), ack0(0x%x), ack1(0x%x), ack2(0x%x) 
Line 844: Cfg_SetPaPb: cc:(%d), PA (%d), PB(%d)
Line 865: FDP_Para: cc:(%d), sf_assign (%d), ssf_pattern(%d)
Line 870: (F) wrong ul/dl subframe config.(%d)
Line 881: (F) wrong special subframe config.(%d)
Line 966: (I)Update ack size of pcell: Group(MCG)/CC(0)/TM(%d)/acksize(%d)
Line 979: (I)Update ack size of pcell: Group(SCG)/CC(%d)/PCellIdx(%d)/TM(%d)/acksize(%d)
Line 1020: Disable PP ClockGating: DEMOD_4G_CG_OFF(0x%x,0x%x)
Line 1165: (F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
Line 1174: CC0_SYSTEM_INFO(0x%x), dw(%d), cell(%d), dl_earfcn(%d), CC0_SYSTEM_INFO_SYSTIME4G(0x%x), SysInfoUpdate_type(%d)
Line 1178: CC0_SYSTEM_INFO(0x%x), CC0_SYSTEM_INFO_SYSTIME4G(0x%x)
Line 1192: IPC: SysInfoUpdate, cellid(%d), n_antP,ue_ant(%04X), cp/dl_bw(%03d), ng(%d), dur(%d), duplex(%d), uldl/sp(%04d)
Line 1218: [TDP_CFG]SI init state : Pcell_cc_idx: %d, Ue_ant_num[CC0] = %d, n_ue_ant = %d, rfd_path_idx: %d
Line 1268: Update_MIB
Line 1301: SysInfoUpdate(MIB): reset condition @ TRPRST_STATE_ACT_WAIT: sys_info(0x%x,0x%x), diff(0x%x), earfcn(%d,%d)
Line 1329: (I)Ignore sw_reset (SYSTEM_INFO:0x%x, dl_earfcn:%d)
Line 1338: (I)Received SysInfoUpdate.type = %d
Line 1355: ==================================================================
Line 1356: FFT_EN=0x%X, FFT_STATUS=0x%X, TD_BUF_EN=0x%X, TD_BUF_CC0CONF=0x%X
Line 1399: (F)cmd type(%d) is invalid
Line 1408: (F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
Line 1416: SCG-CC%d_SYSTEM_INFO(0x%x), dw(%d), cell(%d), dl_earfcn(%d), CCx_SYSTEM_INFO_SYSTIME4G(0x%x), SysInfoUpdate_type(%d)
Line 1433: SCG-CC%d_SYSTEM_INFO(0x%x), CCx_SYSTEM_INFO_SYSTIME4G(0x%x)
Line 1470: IPC: SCG-SysInfoUpdate(SCG), cellid(%d), n_antP,ue_ant(%04X), cp/dl_bw(%03d), ng(%d), dur(%d), duplex(%d), uldl/sp(%04d)
Line 1491: [TDP_CFG] SI SCG state(CC%d) : Ue_ant_num = %d, n_ue_ant = %d
Line 1552: IPC: PhyRxConfig,cif_valid:%d,cif_pres:%d,pa:%d, alttbsidx1(r12valid/v1280valid/enum):%03d, alttbsidx2(r14valid/v1430valid/enum):%03d
Line 1711: cc_idx (%d) is INVALID!
Line 2038: (F) Cfg_SCell_DB_Update ERROR (%d)
Line 2045: (F)SYSTEM_INFO_ST register mismatch: IPC(0x%08x), Register(0x%08x)
Line 2052: (F) Wrong System Information
Line 2062: DEMOD CC%d_SYSTEM_INFO (0x%x), bw(%d), cell(%d), antenna(tx/rx)(%02d), RxMode/div_cc(0x%02x), isMCG(%d)
Line 2092: (F) CA info mismatch Cellid(%d)(%d), BW(%d)(%d)
Line 2264: CC:%d, pdsch_r12 valid:%d ,config :%d 
Line 2280: CC:%d pdsch_r14 valid:%d ,config :%d 
Line 2342: [CA_ACT : TDP][before][CC%d], Agc/Afc/Str[%3d]
Line 2432: [CA_ACT : TDP][after][CC%d], Agc/Afc/Str[%3d]
Line 2436: [CA_ACT : TDP][RXF_MIXER_FREQ][0/1/2/3/4/5] : %5d / %5d / %5d / %5d / %5d / %5d
Line 2443: [CA_ACT : TDP][RXF_MIXER_FREQ][6/7/8/9/10/11] : %5d / %5d / %5d / %5d / %5d / %5d
Line 2457: [CA_ACT : TDP][REG] GAIN_UPDATE_MODE : 0x%x, ACTIVE_RAT : 0x%x
Line 2508: [CA_DEACT : TDP][before][CC%d], Agc/Afc/Str[%3d]
Line 2512: [CA_DEACT : TDP][before][TC_SERV_CONFIG_CC][0/1/2/3/4/5] : 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Line 2585: [CA_ACT] AdcPath is not valid [cc : %d][adc_path : %d]
Line 2646: [CA_DEACT : TDP][after][CC%d], Agc/Afc/Str[%3d]
Line 2650: [CA_DEACT : TDP][after][TC_SERV_CONFIG_CC][0/1/2/3/4/5] : 0x%x / 0x%x / 0x%x / 0x%x / 0x%x / 0x%x
Line 2706: Cfg_BackupDB cell_group(%d) ta_s(%d), rlf_s(%d), ca_deact_time(%d)(%d)(%d)(%d)
Line 2747: Cfg_RestoreDB ta_s(%d), rlf_s(%d), deact(%d)(%d),CA_SFN_backup(%d)
Line 2771: Cfg_Read_UECategory(%d)
Line 2789: Cfg_Read_ULMulticluster(%d)
Line 2839: Cfg_Read_UECategory_DL(%d)
Line 2889: Cfg_Read_UECategory_UL(%d)
Line 2923: Cfg_Update_UE_Carrier(%d)
Line 2957: Cfg_Read_noResourceRestrictionForTTIBundling_r12(%d)
