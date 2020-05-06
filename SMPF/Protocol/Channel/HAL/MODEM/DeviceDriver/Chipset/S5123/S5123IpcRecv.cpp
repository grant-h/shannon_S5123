Line 192: NrRcvIpcHndlr_LcpuInitCnf: Result(%d) coreID(%d)
Line 222: NrRcvIpcHndlr_LcpuReleaseCnf: Cmd(%d), coreID(0x%x)
Line 228: NrRcvIpcHndlr_CinrStatusInd: cc(%d)
Line 234: NrRcvIpcHndlr_ConfirmDrxInd: cc(%d)
Line 246: ###[NR_MEAS] MeasCompleteCnf IPC!!, cc(%d)
Line 254: ###[NR_DEMOD] ScellConfigCnf IPC:: demod_cc(%d)
Line 261: ###[NR_MEAS] PhyPcellConfigCnf IPC!!, result(%d)
Line 268: ###[NR_MEAS] PhyCommonConfigCnf IPC!!, result(%d)
Line 274: ###[NR_RXF] RxModeChangeCnf IPC!! Result(%d)
Line 281: ###[NR_RXF] RxModeChangeInd IPC!! cc(%d) rx_mode(0x%x)
Line 287: NrRcvIpcHndlr_BwpChgInd
Line 294: NrRcvIpcHndlr_SysParamChgCnf
Line 301: ###[NR_AIT] AitDumpInd IPC !!
Line 308: ###[NR_SLEEP_PROC] DrxConfirmInd IPC !!
Line 315: ###[NR_SLEEP_PROC] WakeupConfirmInd IPC !!
Line 321: ###[NR_MTM] NrRcvIpcHndlr_NtmMeasDoneInd IPC !!
Line 328: ###[NR_MTM] NrRcvIpcHndlr_RmsUpdateInd IPC !!
Line 348: ###[NR_MEAS] NrRcvIpcHndlr_Sib1PcellConfigCnf IPC!!, result(%d)
Line 354: [CMD LOG] : NrRcvIpcHndlr_Common_Dump
Line 361: [CMD LOG] : NrRcvIpcHndlr_QsleepCtrlCnf
Line 369: NrRcvIpcHndlr_GapCtrlCnf, state: %d
Line 375: ###[NR_DEMOD] NrRcvIpcHndlr_ScellActDeactCnf
Line 383: NrRcvIpcHndlr_StorePhyConfigCnf
Line 390: NrRcvIpcHndlr_RestorePcellPhyConfigCnf
Line 397: ###[NR_TX] AbnormalTxPwrInd IPC
Line 404: ###[NR_TX] TxSuspendCnf IPC
Line 413: [CMD LOG] : L2_PHY_TIMER_EXPIRE_IND Lisr
Line 420: [CMD LOG] : L2_PHY_RACH_CONTROL_IND Lisr
Line 427: [CMD LOG] : L2_PHY_UL_GRANT_IND Lisr [%d]
Line 435: [CMD LOG] : L2_PHY_DSR_FAIL_IND Lisr
Line 442: [CMD LOG] : L2_PHY_DCI_INFO_IND Lisr
Line 449: [CMD LOG] : L2_PHY_SCELL_DEACT_IND Lisr
Line 456: [CMD LOG] : L2_PHY_BEAM_FAIL_IND Lisr
Line 467: [CMD LOG] : L1C_PHY_TEST1_IND Lisr
Line 474: [CMD LOG] : L1C_PHY_TEST2_IND Lisr
Line 491: [CMD LOG] : L1C_PHY_LCPU_INIT_CNF Hisr
Line 497: [CMD LOG] : L1C_PHY_MIB_ACQ_CNF Hisr
Line 503: [CMD LOG] : L1C_PHY_RXMODE_CHANGE_IND Hisr
Line 508: [CMD LOG] : [ERROR] Msg Alloc fail : L1C_PHY_RX_MODE_CHANGE_IND 
Line 519: [CMD LOG] : [ERROR] Msg Send fail : L1C_PHY_RXMODE_CHANGE_IND 
Line 527: L1C_PHY_BWP_ID_UPDATE_IND Hisr demod_cc(%d), BwpIdx(%d)
Line 531: [CMD LOG] : [ERROR] Msg Alloc fail : L1C_PHY_RX_MODE_CHANGE_IND 
Line 542: [CMD LOG] : [ERROR] Msg Send fail : L1C_PHY_BWP_ID_UPDATE_IND_T 
Line 549: L1C_PHY_SYS_PARAM_CHG_CNF Hisr
Line 555: [CMD LOG] : L1C_PHY_AIT_DUMP_IND Hisr
Line 576: [CMD LOG] : L1C_PHY_DRX_CONFIRM_IND Hisr
Line 581: [CMD LOG] : [ERROR] Msg Alloc fail : L2_PHY_DRX_CONFIRM_IND 
Line 591: [CMD LOG] : [ERROR] Msg Send fail : L2_PHY_DRX_CONFIRM_IND
Line 597: [CMD LOG] : L1C_PHY_DRX_WAKEUP_INIT_CNF Hisr
Line 604: [CMD LOG] : L1C_PHY_FER_MEASURE_IND Hisr
Line 610: [CMD LOG] : L1C_PHY_RMS_UPDATE_IND Hisr
Line 617: ###[NR_RXF] L1C_PHY_RMS_UPDATE_IND Hisr:: (PriPath)rf_path(%d) rms(0x%04x)
Line 624: L1C_PHY_RMS_UPDATE_IND Hisr:: (DivPath)rf_path(%d) rms(%04x)
Line 666: [CMD LOG] : L1C_PHY_DSP2RFD_COMMON_IND Hisr
Line 727: ###[NR_DEMOD] L1C_PHY_SCELL_ACTDEACT_CNF:: demod_cc(%d), cnf_type(%d)
Line 754: [CMD LOG] : L1C_PHY_TX_SUSPEND_CNF Hisr
Line 762: [CMD LOG] : L2_PHY_TIMER_EXPIRE_IND Hisr
Line 767: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_TIMER_EXPIRE_IND 
Line 776: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_TIMER_EXPIRE_IND 
Line 809: [CMD LOG] : L2_PHY_RACH_CONTROL_IND Hisr
Line 814: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_RACH_CONTROL_IND 
Line 823: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_RACH_CONTROL_IND 
Line 836: [CMD LOG] : L2_PHY_UL_GRANT_IND Hisr [%d]
Line 841: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACTX_PHY_UL_GRANT_IND 
Line 851: [CMD LOG] : [ERROR] Msg Send fail : L2LMACTX_PHY_UL_GRANT_IND 
Line 857: [CMD LOG] : L2_PHY_DSR_FAIL_IND Hisr
Line 862: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_DSR_FAIL_IND 
Line 871: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_DSR_FAIL_IND 
Line 877: [CMD LOG] : L2_PHY_DCI_INFO_IND Hisr
Line 882: [CMD LOG] : [ERROR] Msg Alloc fail : RRC_L2_DCI_INFO_IND 
Line 893: [CMD LOG] : [ERROR] Msg Send fail : RRC_L2_DCI_INFO_IND 
Line 899: [CMD LOG] : L2_PHY_SCELL_DEACT_IND Hisr
Line 904: [CMD LOG] : [ERROR] Msg Alloc fail : RRM_L2_SCELL_STATUS_IND 
Line 914: [CMD LOG] : [ERROR] Msg Send fail : RRM_L2_SCELL_STATUS_IND 
Line 920: [CMD LOG] : L2_PHY_BEAM_FAIL_IND Hisr
Line 925: [CMD LOG] : [ERROR] Msg Alloc fail : L2LMACRACH_PHY_BEAM_FAIL_IND 
Line 934: [CMD LOG] : [ERROR] Msg Send fail : L2LMACRACH_PHY_BEAM_FAIL_IND 
Line 942: [CMD LOG] : L1C_PHY_TEST1_IND Hisr
Line 948: [CMD LOG] : L1C_PHY_TEST2_IND Hisr
Line 954: [CMD LOG] : L1C_PHY_TEST3_IND Hisr
