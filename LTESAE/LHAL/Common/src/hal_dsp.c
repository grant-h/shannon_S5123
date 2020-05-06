Line 523: [DSP] IPC_ACTION_ID_LTE_DEMOD_REL_REQ: flag(%d), wait(%d)
Line 559: [DSP] Modem Status: %d  RF available: %d, SKIP IPC_ACTION_ID_SI_UPDATE 
Line 634: [DSP] IPC_ACTION_ID_SI_UPDATE: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 640: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[MCG], mode(%d)
Line 780: [DSP] Modem Status: % d	RF available: %d
Line 792: [DSP] command PENDING:[%d]IPC_ACTION_ID_UL_BW
Line 796: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_UL_BW
Line 829: [DSP] IPC_ACTION_ID_UL_BW: cell_group(%d), cc(%d), bw(%d), cp_type(%d)
Line 911: [DSP] Modem Status: % d  RF available: %d
Line 916: [DSP] command PENDING:[%d]IPC_ACTION_ID_RXMODE_CHANGE
Line 920: [DSP] command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RXMODE_CHANGE
Line 971: [DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 975: [DSP] IPC_ACTION_ID_RXMODE_CHANGE: cc(%02x), rx_mode(%x)
Line 1012: stackID[%d] LTE_SHM_Address[0x%x], DS_LTE_SHM_Address[0x%x], L1Dsp_SHM[0x%x]
Line 1029: [RACH] CarrierInd(%x) RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
Line 1082: HALDSP_SetRACHCmd: gRACHflag is SET!preamble_cnt(%d)
Line 1101: During 4G_DRDS ativated, RACH can't be triggered
Line 1102: IsRfAvailable is changed to FALSE!!, HALDRX_DisablePagingRcvIntr
Line 1110: [DSP] RF unavailable
Line 1116: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 1120: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 1138: [DRX, 4GDS] RACH is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
Line 1143: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 1147: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 1166: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_RACH
Line 1170: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_RACH
Line 1190: [DSP] For RACH, MACMain Config should be sent!
Line 1234: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 1243: [DSP] gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 1285: gRACHflag is initialized
Line 1290: gRACHflag is initialized
Line 1323: [DSP] IPC_ACTION_ID_MAC_RACH: cell_group(%d), cmd(%d)
Line 1367: (CONN State) SONANR: Pending SRI
Line 1395: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1399: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1411: [DSP] RF unavailable, IPC_ACTION_ID_SRI_ON
Line 1426: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1430: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1448: [DRX, 4GDS] SR is triggered in CDRX MeasConfig with gHALSC_PrepareGapMeas
Line 1453: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SRI_ON
Line 1457: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SRI_ON
Line 1464: [DRX, 4GDS] Set measconfig as PreMeasConfig: %d
Line 1474: [DSP] gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 1485: [DSP] IPC_ACTION_ID_SRI_ON: cell_group(%d),  sri_count(%d)
Line 1526: assert condition : Wrong MacCE command ID
Line 1533: [DSP] Modem Status: % d  RF available: %d
Line 1539: [DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CMD
Line 1543: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CMD
Line 1554: [DSP] IPC_ACTION_ID_DRX_CMD [MacCE:%d]
Line 1652: [DSP] Modem Status: % d  RF available: %d
Line 1661: [DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_CONTROL
Line 1665: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_CONTROL
Line 1722: [DSP] IPC_ACTION_ID_GAP_CONTROL [0x%x]
Line 1781: [DSP] Modem Status: % d  RF available: %d
Line 1786: [DSP] Command PENDING:[%d]IPC_ACTION_ID_GAP_INFO
Line 1790: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_GAP_INFO
Line 1798: [DSP] IPC_ACTION_ID_GAP_INFO (gap_en:%d, gap_pattern:%d, gapinfo_offset:%d)
Line 1889: [DSP] Modem Status: % d  RF available: %d
Line 1898: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 1902: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 1913: [DSP] SetPmaxBackoffCmd: Sensor(%d), Max Power(%d, %d)
Line 1917: [DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
Line 1935: [DSP] SetPmaxBackoffCmd: ulca_backoff(%d) Pmax(%d) PMaxLimit(%d) gHal_maxPower(%d)
Line 1967: [DSP] SCell_Pmax(%d), nvLimitedPmax(%d)
Line 1987: [DSP] IPC_ACTION_ID_PMAX [%d/%d] num_CC[%d] SLO_CC[%d] UlCaStatus[%d] 
Line 2056: [DSP] SetPmaxCmd Backoff(%d)
Line 2100: [DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
Line 2116: [DSP] Modem Status: % d  RF available: %d, SKIP IPC_ACTION_ID_PMAX
Line 2149: [DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), maxPower(%d)
Line 2196: [DSP] No Max Tx Pwr Limit on MTM/FCC! : %ddBm
Line 2205: [DSP] Invalid Tx Power level cfg : %ddBm
Line 2233: [DSP] Modem Status: % d  RF available: %d
Line 2238: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
Line 2242: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX(LimitPmaxCmd)
Line 2283: [DSP] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), Max Tx Pwr Limit = %ddBm
Line 2328: [DSP] Modem Status: % d  RF available: %d
Line 2338: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
Line 2342: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG
Line 2358: [DSP] IPC_ACTION_ID_PHY_RX_SIB_TDD_CFG [%d, %d, %d]
Line 2416: [DSP] SI is decoded, hence deactivate 4G_DRDS
Line 2421: [DSP] do nothing, because pagingrcvintr timer will be expired
Line 2436: [DSP] Modem Status: % d  RF available: %d
Line 2445: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SI_SCHED
Line 2449: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SI_SCHED
Line 2485: [DSP] IPC_ACTION_ID_SI_SCHED: cell_group(%d), withSIB1(%d),CC(%d),Sib_drx(%d)
Line 2489: [DSP] SI WindowLength[%d], Number of SI [%d], sib_drx[%d]
Line 2492: [DSP] SI valid[%d], Periodicity[%d]
Line 2536: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_PCH
Line 2548: [DSP] IPC_ACTION_ID_CONFIG_PCH
Line 2550: [DSP] PCH Config drx_T[%d], PF[%d], PO[%d], nB[%d]
Line 2640: [DSP] Modem Status: % d  RF available: %d , SKIP IPC_ACTION_ID_CONFIG_SCELL_PCH
Line 2654: [DSP] IPC_ACTION_ID_CONFIG_SCELL_PCH cc[%d] command[%d] drx_T[%d PF[%d] PO[%d]
Line 2756: [DSP] RF unavailable, skip HALDSP_SetRNTICmd(SI_RNTI case)
Line 2776: [DSP] No need of pending IPC_ACTION_ID_RNTI_MANAGE for SI decode, value=0x%x
Line 2785: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RNTI_MANAGE
Line 2789: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RNTI_MANAGE
Line 2796: [DSP] SI is completely decoded, deactivate 4G_DRDS, set eDV_pend_SIRNTI = TRUE
Line 2845: [DSP] IPC_ACTION_ID_RNTI_MANAGE: cell_group(%d), RNTI[%d] = 0x%04X
Line 2899: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
Line 2903: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RNTI_MANAGE
Line 2942: [DSP] IPC_ACTION_ID_SCELL_RNTI_MANAGE: CC[%d] RNTI[%d] = 0x%04X
Line 3023: During 4G_DRDS ativated, state can't be changed
Line 3024: IsRfAvailable is changed to FALSE!! DisablePagingRcvIntr
Line 3036: [DSP] Modem Status: % d, RF available: %d
Line 3046: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
Line 3050: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MAC_MAIN_CFG
Line 3110: [DSP] Max HARQ TX Nun(%d), SPS C-RNTI(0x%x), TTI bundling(%d)
Line 3113: [DSP] sr_ProhibitTimer(%d)
Line 3116: [DSP] sCellDeactivationTimer(%d)
Line 3137: [DSP] pPRACHCfg(%d):(rs:%d)(Config:%d)(hs_f:%d)(zcor:%d)(fo:%d)
Line 3138: [DSP] pPRACHCfg(init_p:%d)(p_step:%d)(delta:%d)
Line 3143: pHARQCfg(%d) cr_timer(%d)
Line 3155: HALDSP_SetMACMain: gRACHflag is SET!
Line 3163: [DSP] IPC_ACTION_ID_MAC_MAIN_CFG: cell_group(%d)
Line 3218: [DSP] Modem Status: % d
Line 3229: [DSP] Command PENDING:[%d]IPC_ACTION_ID_DRX_CONFIG
Line 3233: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_DRX_CONFIG
Line 3243: [DSP] RF unavailable, IPC_ACTION_ID_DRX_CONFIG
Line 3255: [DSP] ConnDrx On: on_dur(%d) inact(%d) retx(%d) long cycle(%d) offset(%d)
Line 3268: [DSP] Short drx On: short cycle(%d) timer(%d)
Line 3284: [DSP] skip_IAT (%d)
Line 3291: [DSP] skip_Paging (%d)
Line 3295: [DSP] ConnDrx Off
Line 3303: [DSP] IPC_ACTION_ID_DRX_CONFIG: cell_group(%d)
Line 3368: [DSP] Modem Status: % d  RF available: %d
Line 3377: [DSP] Command PENDING:[%d]IPC_ACTION_ID_M3_GRANT
Line 3381: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_M3_GRANT
Line 3400: [DSP] IPC_ACTION_ID_M3_GRANT [RAR TTI:%d]
Line 3403: [DSP] M3_GRANT : hop_flag[%d], rb_asn[%d], trun_mcs[%d], tpc[%d], ul_delay[%d], cqi_req[%d], temp_crnti[%X]
Line 3452: [DSP] Modem Status: % d, RF available: %d
Line 3463: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 3467: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 3475: [DSP] SFA pt0(0x%x) pt1(0x%x) pt2(0x%x) pt3(0x%x) 
Line 3476: [DSP] SFA  pt4 (0x%x) pt5(0x%x) pt6(0x%x) pt7(0x%x)
Line 3478: [DSP] SFA pt8(0x%x) pt9(0x%x) pt10(0x%x) pt11(0x%x) 
Line 3479: [DSP] SFA pt12(0x%x) pt13(0x%x) pt14(0x%x) pt15(0x%x)
Line 3484: [DSP] IPC_ACTION_ID_MBSFN_SF_ASSIGN
Line 3533: [DSP] Modem Status: % d, RF available: %d
Line 3543: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3547: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3558: [DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3612: [DSP]Modem/Rf Status: % d, RF available: %d
Line 3621: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 3625: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 3636: [DSP] IPC_ACTION_ID_MBMS_NOTIFICATION_CONFIG
Line 3684: [DSP] Modem Status: % d, RF available: %d
Line 3693: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
Line 3697: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_AREA_SCHED
Line 3708: [DSP] IPC_ACTION_ID_MBMS_AREA_SCHED
Line 3756: [DSP] Modem Status: % d, RF available: %d
Line 3765: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
Line 3769: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_PMCH_SCHED
Line 3789: [DSP] IPC_ACTION_ID_MBMS_PMCH_SCHED: %d, %d, %d, %d, %d, %d, %d
Line 3836: [DSP] Modem Status: % d, RF available: %d
Line 3845: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
Line 3849: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MSI_SCHED
Line 3860: [DSP] IPC_ACTION_ID_MBMS_MSI_SCHED
Line 3898: [DSP] Modem Status: % d, RF available: %d
Line 3903: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3907: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3938: [DSP] IPC_ACTION_ID_MBMS_MCCH_SCHED
Line 3942: [DSP] RestoreMbmsMcchSched: Addr(0x%x), SF CC[%d]:PT0(%x)
Line 3943: [DSP] n_MCCH[%d] n_AreaSched[%d] n_PMCH[%d] n_Msi[%d]
Line 3994: [DSP] Modem Status: % d, RF available: %d
Line 4004: [DSP] Command PENDING:[%d]IPC_ACTION_ID_MBSFN_CONFIG
Line 4008: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_MBSFN_CONFIG
Line 4018: [DSP] num_mbsfn_cfg >= LTE_RRC_MAX_MBSFN_CONFIG (%d)
Line 4040: [DSP] IPC_ACTION_ID_MBSFN_CONFIG
Line 4086: [DSP] Modem Status: % d, RF available: %d
Line 4095: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PRS_INFO_INIT
Line 4099: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PRS_INFO_INIT
Line 4110: [DSP] IPC_ACTION_ID_PRS_INFO_INIT
Line 4161: [DSP] Modem Status: % d, RF available: %d
Line 4170: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
Line 4174: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
Line 4185: [DSP] IPC_ACTION_ID_PHY_PRS_FFT_CONFIG_REQ
Line 4232: [DSP] Modem Status: % d, RF available: %d
Line 4246: [DSP] SetPATHLOSS: cc(%d), value(%d)
Line 4279: [DSP] HALDSP_SetRPDetect: slam_en(%d), time_diff(%d)
Line 4340: [DSP] Modem Status: % d, RF available: %d
Line 4349: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_TIMER
Line 4353: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_TIMER
Line 4377: [DSP] IPC_ACTION_ID_TA_TIMER [cell_group : %d][state : %d][CCs_bitmap: %d][input_CCs_bitmap: %d]
Line 4435: [DSP] Modem Status: % d, RF available: %d
Line 4440: [DSP] Command PENDING:[%d]IPC_ACTION_ID_HO_TSFN
Line 4444: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_HO_TSFN
Line 4468: [DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 0
Line 4478: [DSP] IPC_ACTION_ID_HO_TSFN: cell_group(%d), ho_tsfn.tsfn = 1
Line 4532: [DSP]Modem/Rf Status: % d, RF available: %d
Line 4541: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RLF_SIGNAL
Line 4545: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RLF_SIGNAL
Line 4561: [DSP] IPC_ACTION_ID_RLF_SIGNAL: cell_group(%d)
Line 4638: [DSP] Modem Status: % d, RF available: %d
Line 4648: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TA_AD
Line 4652: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TA_AD
Line 4682: [DSP] IPC_ACTION_ID_TA_AD [TA : %d](mode:%d)(CCs_bitmap: %d)(input_CCs_bitmap: %d)
Line 4741: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 4744: [DSP] SKIP IPC_ACTION_ID_SCELL_TX_CONFIG
Line 4752: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
Line 4756: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_TX_CONFIG
Line 4788: [DSP] SCell_Pmax(%d), nvLimitedPmax(%d)
Line 5236: (HAL)SCELL cqi_report_config_v1310_setup:%d, cqi_report_aperiodic_v1310_setup:%d
Line 5254: [DSP](C) Pucch_r13 copyng .r10_valid:%d, format3 setup:%d
Line 5406: [DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
Line 5429: [DSP]Pucch_v1370  dsp_pucch_v1370->valid = %d
Line 5434: hal_tx : dsp_pucch_v1370->valid = %d
Line 5476: [DSP] IPC_ACTION_ID_SCELL_TX_CONFIG: cell_group(%d), Cmd[%d]
Line 6247: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 6250: [DSP] SKIP IPC_ACTION_ID_SCELL_RX_CONFIG
Line 6258: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
Line 6262: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_RX_CONFIG
Line 6627: [DSP] IPC_ACTION_ID_SCELL_RX_CONFIG: cell_group(%d), Cmd[%d]
Line 7064: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7073: [DSP] Command SKIP: IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 7084: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 7088: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL
Line 7117: [DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_PCELL: Type[%d]
Line 7164: [DSP] Modem Status: % d, RF available: %d 
Line 7173: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
Line 7177: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH
Line 7204: [DSP] IPC_ACTION_ID_PHY_MEAS_SF_PATTERN_NEIGH: Type[%x]
Line 7518: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7523: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
Line 7527: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SRS
Line 7580: [DSP] IPC_ACTION_ID_PHY_DEDI_UL_SRS: cell_group(%d)
Line 7819: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 7824: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 7828: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_CONFIGURE
Line 7947: [DSP](C) Pucch_r10 copyng .r10_valid:%d, format3 setup:%d
Line 8004: [DSP](C) Pucch_r10 invalid .
Line 8186: [DSP](C) Pucch_r13 copying .r10_valid:%d, format3 setup:%d
Line 8212: [DSP](C) pucch_format3_setup:%d, list_cnt:%d
Line 8238: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 8257: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 8276: [DSP](C) pucch_an_cs_setup:%d, list_cnt:%d
Line 8346: [DSP]Pucch_r13 spatial bundling : % d,r13 valid : %d format3 setup: %d, codebook_size_determination_r13_setup: %d, max_payload_coderate_r13_setup: %d
Line 8370: [DSP]Pucch_v1370  dsp_pucch_v1370->valid = %d
Line 8375: hal_tx : dsp_pucch_v1370->valid = %d
Line 8419: [DSP][DEBUG] IPC_ACTION_ID_PHY_CONFIGURE: MIMOsetup(%d), maxLayer(%d)
Line 8431: [DSP] IPC_ACTION_ID_PHY_CONFIGURE: cell_group(%d)
Line 8517: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8522: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
Line 8526: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_CQI
Line 8587: [DSP] IPC_ACTION_ID_PHY_DEDI_CQI: cell_group(%d)
Line 8660: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 8666: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
Line 8670: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_DEDI_UL_SR
Line 8693: [DSP] DSR_Config.valid(TRUE), DSR_PUCCH_ResourceIndex(%d), DSR_Configuration_Index(%d), DSR_Trans_max(%d)
Line 8710: [DSP] IPC_ACTION_ID_PHY_DEDI_UL_SR: cell_group(%d)
Line 8858: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_SIB
Line 8875: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_SIB
Line 8879: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_SIB
Line 8886: [DSP] RF unavailable, IPC_ACTION_ID_PHY_SIB
Line 9013: [DSP] IPC_ACTION_ID_PHY_SIB: cell_group(%d)
Line 9070: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_PHY_RX_SIB_PDSCH 
Line 9087: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 9091: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 9099: [DSP] RF unavailable, IPC_ACTION_ID_PHY_RX_SIB_PDSCH
Line 9119: [DSP] IPC_ACTION_ID_PHY_RX_SIB_PDSCH: cell_group(%d)
Line 9301: [DSP] Modem Status: % d, RF available: %d IdleGapOnGoing = %d
Line 9307: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
Line 9311: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PHY_RX_CONFIG
Line 9632: [DSP] IPC_ACTION_ID_PHY_RX_CONFIG: cell_group(%d)
Line 9664: [DSP] msg_ltm_ul_bw.t_ul_bw = %d
Line 9701: [DSP] msg_ltm_ul_bw.t_tti_con = %d
Line 9728: [DSP] msg_ltm_tx_pwr.valid = %d
Line 9752: [DSP] msg_ltm_tx_pwr.t_tx_pwr = %d
Line 9776: [DSP] msg_ltm_pusch.t_rb_size = %d
Line 9800: [DSP] msg_ltm_pusch.t_mc_rb_size = %d
Line 9824: [DSP] msg_ltm_pusch.t_rb_offset = %d
Line 9848: [DSP] msg_ltm_pusch.t_mc_rb_offset = %d
Line 9872: [DSP] msg_ltm_pusch.t_mcs = %d
Line 9896: [DSP] msg_ltm_ul_bw.t_fix_data = %d
Line 9921: [DSP] msg_ltm_pucch.t_format = %d
Line 9945: [DSP] msg_ltm_pucch.t_cqi_size = %d
Line 9969: [DSP] msg_ltm_pucch.ackNackValue = %d
Line 9993: [DSP] msg_ltm_prach.t_config_index = %d
Line 10017: [DSP] msg_ltm_prach.t_rb_offset = %d
Line 10041: [DSP] msg_ltm_srs.t_rb_size = %d
Line 10065: [DSP] msg_ltm_srs.t_rb_offset = %d
Line 10089: [DSP] msg_ltm_srs.t_period = %d
Line 10114: [DSP] IPC_ACTION_ID_LTM_SET: PUCCH
Line 10121: [DSP] IPC_ACTION_ID_LTM_SET: PUSCH
Line 10128: [DSP] IPC_ACTION_ID_LTM_SET: PRACH
Line 10135: [DSP] IPC_ACTION_ID_LTM_SET: SRS
Line 10142: [DSP] IPC_ACTION_ID_LTM_SET: MC-PUSCH
Line 10147: [DSP] IPC_ACTION_ID_LTM_SET: D2D
Line 10153: [DSP] IPC_ACTION_ID_LTM_SET: Tx channel reset
Line 10225: [DSP] IPC_ACTION_ID_LTM_MEAS_FER (duration:%d)
Line 10325: [DSP] Modem Status: % d, RF available: %d 
Line 10335: [DSP] SetRestorePendingEvent(num:%d)
Line 10802: [DSP] 1ms delay for DSP scheduling
Line 10811: [DSP] 1ms delay for DSP scheduling
Line 10972: [DSP] Invalid PendingEvent
Line 11009: [DSP] GetHWVersion: gDrx_ActiveRat(%d)
Line 11027: [DSP] IPC_ACTION_ID_HW_VERSION
Line 11056: [DSP] GetULFrequency: gDrx_ActiveRat(%d)
Line 11074: [DSP] IPC_ACTION_ID_RF_FREQ [%d, %d]
Line 11120: [DSP] IPC_ACTION_ID_LTE_DSP_INIT(%d) initType(%d)
Line 11148: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT: cc(%d), div_cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 11179: [DSP] IPC_ACTION_ID_LTE_DSP_MEAS_INIT(%d)
Line 11217: [DSP] IPC_ACTION_ID_LTE_RELEASE_DONE. initType(%d)
Line 11224: [DSP] power : wrong state(%d), Ready(0x%x)
Line 11229: [DSP] DSP RELEASE DONE. Check LVD status.
Line 11239: [DSP] CC%d: set gScellErrorState_cc as FALSE
Line 11266: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 11289: [DSP] SetActiveRatInfo: rat(%d)
Line 11398: [DSP] GetConnSleepSCT(SCT:%d)
Line 11425: [DSP] SetConnSleepSCT(SCT:%d)
Line 11455: [DSP] Modem Status: % d, RF available: %d
Line 11461: [DSP] IPC_ACTION_ID_RELEASE Pending(gHALSC_IdleGapOnGoing(%d))
Line 11466: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RELEASE
Line 11470: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RELEASE
Line 11485: Skip Sending IPC_ACTION_ID_RELEASE(RF not available)
Line 11500: [DSP] IPC_ACTION_ID_RELEASE
Line 11544: [DSP] Modem Status: % d, RF available: %d
Line 11550: [DSP] IPC_ACTION_ID_RESET Pending(gHALSC_IdleGapOnGoing(%d))
Line 11562: [DSP] Command PENDING:[%d]IPC_ACTION_ID_RESET
Line 11566: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_RESET
Line 11596: [DSP] IPC_ACTION_ID_RESET: cell_group(%d), cause(%d)
Line 11649: [DSP] Modem Status: % d, RF available: %d
Line 11655: DSP Command PENDING:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
Line 11659: DSP Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_SRS_RELEASE
Line 11721: [DSP] IPC_ACTION_ID_SCELL_SRS_RELEASE: cell_group(%d), carrier_bitmap(%x)
Line 11762: [DSP] Modem Status: % d, RF available: %d
Line 11772: [DSP] Command PENDING:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11776: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11834: [DSP] IPC_ACTION_ID_PUCCH_SRS_CQI_RELEASE
Line 11872: [DSP] Modem Status: % d, RF available: %d
Line 11882: [DSP] Command PENDING:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11886: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11897: [DSP] IPC_ACTION_ID_LOOPBACK_CONTROL
Line 11935: [DSP] Modem Status: % d, RF available: %d
Line 11944: [DSP] Command PENDING:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11948: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 11958: [DSP] IPC_ACTION_ID_ULSPS_IMPLICIT_RELEASE
Line 12063: [DSP] IPC_ACTION_ID_SI_UPDATE: cell_group[SCG], cc(%d), td_buf_idx(%d), td_buf_idx_div(%d), pathMap.size(%d) 
Line 12073: [DSP] IPC_ACTION_ID_RELEASE(%d)
Line 12119: [DSP] RF unavailable
Line 12124: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
Line 12128: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SCELL_ACT_DEACT
Line 12167: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d), td_buf_idx(%x) td_buf_idx_div(%x), td_buf_size(%d)
Line 12176: [DSP] IPC_ACTION_ID_SCELL_ACT_DEACT: cc(%d) cmd(%d), earfcn(%d), tti(%d)
Line 12205: [DSP] IPC_ACTION_ID_SCELL_ONOFF: cc(%d), cmd(%d), earfcn(%d)
Line 12253: [DSP] RF unavailable
Line 12258: [DSP] Command PENDING:[%d]IPC_ACTION_ID_SIDELINK_RX_ACT_DEACT
Line 12262: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_SIDELINK_RX_ACT_DEACT
Line 12313: [DSP] IPC_ACTION_ID_SIDELINK_RX_ACT_DEACT: cc(%d), cmd(%d), sync_offset(%d), in_coverage(%d)
Line 14795: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_ACTIVATE_EICIC
Line 14847: [DSP] IPC_ACTION_ID_ACTIVATE_EICIC: mode(%d), num(%d, %d)
Line 14897: [DSP] HALDSP_SetInactivityStatus(skip), RF unavailable
Line 14909: [DSP] IPC_ACTION_ID_QSLEEP_CONTROL: status(%d) dynamicDisable(%d) gVolteStatus(%d)
Line 14952: [DSP] HALDSP_SetDynamicQsDisable(skip): TdpState(%d)
Line 14968: [DSP] HALDSP_SetDynamicQsDisable(%d -> %d) DataActivityStatus(%d) rx_mode(%d) scell_start(%d) scell_status(%d) gVolteStatus(%d)
Line 14995: [DSP] DuringWakeup(%d)
Line 15031: QS Disable(%d us delay) for scell_start(%d)
Line 15111: [DSP] IPC_ACTION_ID_REDEMAP_CONTROL: cc(%d), cmd(%d)
Line 15148: [DSP] Modem Status: % d, RF available: %d
Line 15149: [DSP] Skip sending IPC: IPC_ACTION_ID_TDP_CONFIG
Line 15231: [DSP] IPC_ACTION_ID_TDP_CONFIG: cc(%d), tdp_enable(%06x), lastTdpConfig(%06x)
Line 15275: [DSP] Modem Status: % d, RF available: %d
Line 15284: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TIMING_UPDATE
Line 15288: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TIMING_UPDATE
Line 15304: [DSP] IPC_ACTION_ID_TIMING_UPDATE: cc(%d), cp(%d), time_diff(%d)
Line 15345: [DSP] Modem Status: %d
Line 15360: [DSP] RF unavailable
Line 15366: [DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 15370: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 15381: [DSP] IPC_ACTION_ID_CQI_INT_CONTROL: on(%d)
Line 15413: [DSP] Modem Status: % d, RF available: %d, SKIP IPC_ACTION_ID_WAKEUP_DRX
Line 15424: [DSP] IPC_ACTION_ID_WAKEUP_DRX, han_ta_acc[0](%d)
Line 15463: [DSP] Modem Status: % d, RF available: %d
Line 15468: [DSP] Command PENDING:[%d]IPC_ACTION_ID_TXBACKUP_DRX
Line 15472: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_TXBACKUP_DRX
Line 15495: [DSP] IPC_ACTION_ID_TXBACKUP_DRX
Line 15605: [DSP] IPC_ACTION_ID_PHY_MEAS_REQUEST: meas_cnt(%d), dur(%x)
Line 15656: [DSP][DEBUG] GetMeasResult: NOT SAME!! gHal_DrsPositionIdx(%d), max_idx(%d)
Line 15992: [DSP] SetRsrpValue(CC%d): srv(%d,%d), nbr(%d)
Line 16081: [DSP] DRDS ongoing and ScgStack. not return here.
Line 16085: [DSP] Check UeState(%d)
Line 16111: [DEBUG_MIF] MIMOsetup(%d), maxLayer(%d), mifLEV(%d), power(%d)
Line 16117: [DEBUG_MIF] MIF CLK change to base, power off sequence OwnerMask [%d/%d]
Line 16126: [DEBUG_MIF] MIF CLK change to 1.0 Ghz for LTE nonCA 4*4 MIMO, OwnerMask [%d/%d]
Line 16132: [DEBUG_MIF] MIF CLK change to base, 4x4 MIMO is released, OwnerMask [%d/%d]
Line 16136: [DEBUG_MIF] MIF CLK is same as before
Line 16141: [DEBUG_MIF] ownermask is not created
Line 16181: [DEBUG_MIF] CA is activated ScellBitmap(%d)
Line 16211: [DSP] DRDS ongoing and ScgStack. not return here.
Line 16215: [DSP] Check UeState(%d)
Line 16245: MIF CLK change to BASE, OwnerMask [%d/%d]
Line 16254: CPU CLK change to CLK_DFS_SVC_4G_REL11 OwnerMask [%d/%d]
Line 16260: CPU CLK change to SVC_NO_SVC OwnerMask [%d/%d]
Line 16287: MIF CLK change to BASE, OwnerMask [%d/%d]
Line 16296: CPU CLK change to CLK_DFS_SVC_4G_REL11 OwnerMask [%d/%d]
Line 16302: CPU CLK change to CLK_DFS_SVC_NO_SVC OwnerMask [%d/%d]
Line 16376: MIF CLK change to MIF_L[%d] OwnerMask [%d/%d], ActivatedCC: %d
Line 16392: CPU CLK change to OD OwnerMask, ActivatedCC: %d
Line 16400: CPU CLK change to SVC_4G_REL12 OwnerMask [%d/%d]
Line 16442: [DSP] CC%d: SCELL_ACT_CNF, and gScellErrorState_cc is TRUE
Line 16444: [DSP] Set gScellErrorState_cc as FALSE
Line 16492: [DSP] CC%d: SCELL_DEACT_ERROR_IND, set gScellErrorState_cc as TRUE 
Line 16624: [MTM] LMT: FER(%d)
Line 16675: gRACHflag is initialized
Line 16805: [DSP] ConfigurePhyTest
Line 16836: [DSP] Modem Status: % d  RF available: %d
Line 16842: [DSP] Command PENDING:[%d]IPC_ACTION_ID_CQI_LIMIT
Line 16846: [DSP] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_CQI_LIMIT
Line 16855: [DSP] IPC_ACTION_ID_CQI_LIMIT
Line 16906: HALDSP_Set_LT12, Start [%d] Timer
Line 16937: [DSP] IPC_ACTION_ID_LTE_BLK_ENABLE
Line 16959: [DSP] IPC_ACTION_ID_LTE_BLK_RELEASE(%d)
Line 16978: DSP_RELEASE(%d, %d)
Line 16997: HALDSP_SetDSPInitRelease: [DSDS]Do not release DSP again as it is already released
Line 17002: DSP_INIT
Line 17054: [4RxD] HALDSP_Set4RxEnable: MTM running... so skip!!!
Line 17130: [DSP] Set4RxEnable: enable(%d), thres(%d,%d,%d), hys(%d,%d)
Line 17138: [DSP] Set4RxEnable: Mid enable(%d), thres(%d,%d,%d,%d)
Line 17148: [DSP] Set4RxEnable: DCI rate(%d,%d,%d,%d), DCR period(%d), Monitor thres(%d, %d)
Line 17159: [DSP] Set4RxEnable: cc(%d), enable(%d), bitmap(%x), 4Rx_RB_SIZE(%d)
Line 17185: [AS] SetAsEnable: SISO Test mode (0x%X) and AS TEST RxMode (NO), Disable AS
Line 17197: [AS] SetAsEnable: MTM mode. Disable AS
Line 17210: [AS] SetAsEnable: mcc(0x%x) Disable AS
Line 17217: [AS] SetAsEnable: DPDT only works in LB, Disable AS (%d)
Line 17224: [AS] SetAsEnable: C-DRX config, Disable AS
Line 17230: [AS] SetAsEnable: Recv ON, Disable AS
Line 17239: [AS] SetAsEnable: CA config, Disable AS
Line 17286: [AS] Command PENDING:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 17290: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_ANTSW_STOP
Line 17304: [AS] IPC_ACTION_ID_ANTSW_STOP
Line 17341: [AS] HALDSP_SetAsEnableForSIT SelectedANT[%d]
Line 17356: [AS] Modem power down state
Line 17430: [AS] SetAsEnable: Immediate switch is not done. Switch will done later 
Line 17442: [AS] SetAsEnable: Fixed Antenna Mode (%d)
Line 17464: [AS] SetAsEnable: Not support AS (%d)
Line 17481: [AS] SetAsEnable: AS Test Mode OFF for current band (%d)
Line 17494: [AS] SetAsEnable: TestMode ON (Band:%d, Operation:%d)
Line 17498: [AS] SetAsEnable: TX ANT switch Test Operation Mode(%d)
Line 17568: [AS] SetAsEnable: TPC Max Time(%d), RSRP(%d %d %d %d) HardSW(%d,%d)
Line 17577: [AS] SetAsEnable: RSRP Threshold(%d %d), Tx Power Threshold(%d %d), RSRP Offset(%d %d)
Line 17608: [AS] 3P3T: Antenna(%d) TRP(%d), TIS(%d)
Line 17614: [AS] 3P3T: SwapType(%d) Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
Line 17643: [AS] DPDT: Antenna(%d) TRP(%d), TIS(%d)
Line 17647: [AS] DPDT: Main_RxRsrpOffset(%d), Sub_RxRsrpOffset(%d)
Line 17660: [AS] SetAsEnable: Enabled, AsMode(%d)
Line 17673: [AS] SetAsEnable: Disabled
Line 17677: [AS] SetAsEnable: State is not changed (%d)
Line 17718: [AS] HALDSP_SetAsEnable_EXP: Proximity Backoff Enabled
Line 17732: [AS] HALDSP_SetAsEnable_EXP: Proximity detected -> No change AS
Line 17737: [AS] HALDSP_SetAsEnable_EXP: No Proximity detected -> Enable AS
Line 17769: [AS] HALDSP_ControlAsforCA: SCell Configured -> Disable AS
Line 17779: [AS] HALDSP_ControlAsforCA: SCell Released -> Enable AS
Line 17811: [AS] HALDSP_GetCurrentAsStatus (%d)
Line 17897: [DSP] PCell_Pmax(%d), nvLimitedPmax(%d)
Line 17915: [AS] Pending HALDSP_SetPmaxLimitCmd_AS: Modem power(%d), RF unavailable(%d)
Line 17925: [AS] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 17929: [AS] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 17937: [AS] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
Line 17959: [AS] IPC_ACTION_ID_PMAX: cell_group(%d), cc(%d), maxPower(%d)
Line 18028: [B8B7] Command PENDING:[%d]IPC_ACTION_ID_PMAX
Line 18032: [B8B7] Command PENDING Q FULL!!:[%d]IPC_ACTION_ID_PMAX
Line 18040: [B8B7] HALDSP_SetPmaxLimitCmd_AS: Switch Status(%d), Max Power(%d)
Line 18047: [B8B7] IPC_ACTION_ID_PMAX: cell_group(%d), maxPower(%d)
Line 18077: [CL-AIT] HALDSP_GetClAitEnable: status (%d)
Line 18140: [CL-AIT] SetAitEnable: Not supported RF band
Line 18145: [CL-AIT] SetAitEnable: Disabled due to AitEn2 and no VoLTE
Line 18150: [CL-AIT] SetAitEnable: Disabled due to no weak signal condition and no VoLTE(CA)
Line 18155: [CL-AIT] SetAitEnable: Do not enable CL-AIT (RfBandType:%d, AS mode:%d)
Line 18160: [CL-AIT] SetAitEnable: Do not enable CL-AIT (Switched to Upper Antenna)
Line 18228: [CL-AIT] SetAitEnable: enable(%d -> %d)
Line 18377: [CL-AIT] SetAitMipiWord: x_gnd_ctrl_type(%d), xgnd(0x%x, 0x%x, 0x%x)
Line 18412: [TxTime] power_index(%d %d %d %d %d)
Line 18487: [DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: config_idx(%x), config_cc(%x, %x), config_num(%d), release_cc(%x %x), release_num(%d)
Line 18620: [DSP] IPC_ACTION_ID_SET_DMXR_FREQ_INIT: ul_slo(%d), cmd(%d), cc(%d, %d), time(%d, %d, %d)
Line 18874: [DSP] [AS] IPC_ACTION_ID_ANT_SWITCH not processed as UE is operating in fixed AS mode : %d
Line 18957: [DSP] IpcHndlr_SWReset !!!
Line 18966: [DSP] IPC_ACTION_ID_RECOVERY_SWRESET: ID(%d), cnt(%d) !!!
Line 18989: [DSP] IPC_ACTION_ID_RECOVERY_SWRESET: cnt(%d) !!!
Line 19029: [DSP] UL SPS grant release(by PDCCH or parameter reconfiguration)
Line 19070: [DSP] UL SPS grant activated
Line 19123: [DSP] Invalid cmd type (CC%d, %d)
Line 19137: [DSP] SCellActDeactCnf(CC%d): cmd(%d), SCellActCmd(%d)
Line 19175: [DSP] SlinkDeactCnf
Line 19225: [DSP] IpcHndlr_LteDemodRelCnf
Line 19242: HeNB SIB Decoding ACK(%d)
Line 19485: RF_DUMP received
Line 19529: ABNORMAL_PWR is detected
Line 19533: False Alram case (ABNORMAL_PWR)
Line 19572: [DSP] AIT_DumpInd: dump_state(%d),tx_ch_info(%d), tx_ch_power(%d), pusch_comp_pwr(%d)
Line 19574: [DSP] AIT_DumpInd: set1_start_rb(%d), set1_rb_size(%d), set2_start_rb(%d), set2_rb_size(%d)
Line 19610: [DSP] COMM_DUMP: msg_id(%d), cc_idx(%d), tti_index(%d)
Line 20277: [DSP] PHYDM Error report(0x%x), data[5:0]:0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 20300: [DSP] IPC_ACTION_ID_STORE_DSPPARAM, backup_han_ta_acc[0](%d)
Line 20339: [AS] IpcHndlr_AntSwitch (%d)
Line 20343: [AS] IpcHndlr_AntSwitch: Do not enable CL-AIT (Switched to Upper Antenna)
Line 20465: [DSP] HALDSP_SetAgcGainAvg(%d): agc_gain(%d, %d), SHM(0x%x,0x%x)
Line 20506: [DSP] PSCellDeActCnf(CC%d)
Line 20531: [DSP] IpcHndlr_PscellActCnf
Line 20677: [DSP] IPC_ACTION_ID_WIFI_COEXIST_INFO
Line 20705: [DSP] IPC_ACTION_ID_LTE_ATI_CMD : %d %d
Line 20737: [AS] TAS_status is reset due to TXSwap.
Line 20743: [DSP] IPC_ACTION_ID_TX_SWAP [0x%x]
Line 20778: [DSP] Update DRS Position(CC%d): TTI(%d)
Line 20834: [DSP] Update LAA DCI STATUS: cc(%d) status(%d) 
Line 20854: [DSP] IPC_ACTION_ID_TX_BLOCK
Line 20939: [SAR] out of range power : %d
Line 21137: [SAR] Invalid gSARLimit!!!(%d)
Line 21169: [SAR] Get Beta i(%d)
Line 21198: [SAR] Init periodM(%d) LinearSARLimit(%d) PatialLimitforN(%d) gSARsumLimit(%d)
Line 21219: [SAR] Init_RE gSAR_remain(%d) start index(%d) FirstSAR(%d)
Line 21250: [SAR] TestMode disabled / EMC(%d)
Line 21290: [SAR] Check UeState(%d)
Line 21307: [SAR] Save PrioritySensor(%d)
Line 21335: [SAR] SAR(%d) Pow(%d) remain_ret(%d) 
Line 21341: [SAR] N(%d) SensorStatus(0x%x) event(%u)
Line 21388: [SAR] Abnormal state! M(%d) 
Line 21405: [SAR] reset SAR_remain (%d)
Line 21419: [SAR] prevtime(%d) curtime(%d) time_diff(%d)
Line 21433: [SAR] Skip(%d) remain(%d)
Line 21442: [SAR] SAR_remain (%d) remainPatialM(%d) gSARPatialRemain[M](%d)
Line 21447: [SAR] SAR_remain (%d) remainPatialM(%d) gSARPatialLimitforN(%d)
Line 21460: [SAR] reset SAR_remain (%d)
Line 21467: [SAR] tempData (%d) M(%d) index(%d) gSARPatialRemain[ ](%d)
Line 21479: [SAR] SAR_remain (%d) remainPatialM(%d) tempData(%d)
Line 21484: [SAR] SAR_remain (%d) gSARPatialLimitforN(%d) gSARPatialRemain[M](%d)
Line 21504: [SAR] M(%u) gSARConnCnt(%u) Qfull(%d) MaxSARLimit(%d) X_Used_SAR(%d) C_Used_SAR(%d)
Line 21510: [SAR] Reset count 0 as threshold(%d)
Line 21519: [SAR] nowMaxLimit(%d) gSARalpha(%d) using SAR 6 min before
Line 21524: [SAR] nowMaxLimit(%d) gSARalpha(%d) using Max SAR limit
Line 21538: [SAR] nowMaxLimit(%d) backoff Alpha3 %d%
Line 21561: [SAR] nowMaxLimit(%d) SAR_remain < nowBeta(%d) Beta(%d)
Line 21569: [SAR] nowMaxLimit(%d) SAR_remain big enough!(%d)
Line 21576: [SAR] nowMaxLimit(%d) No backoff by DELTA
Line 21585: [SAR] nowMaxLimit(%d) set to 6min before SAR
Line 21591: [SAR] Current Max Limit is %d.0dBm
Line 21650: [DSP] p_max_pwr_threshold is NULL
Line 21720: [DSP] GetPhyHpueMetic
Line 21767: [DSP] SetVolteStatus Current(%d -> %d), Other(%d)
Line 21790: [DSP] GetVolteStatus (%d)
Line 21809: [DSP] GetOtherStackVolteStatus (%d)
Line 21845: [DSP] GetCurrentPmax (%d, %d, %d, %d ,%d)
Line 21900: [SPR] HALDSP_EnableB41Ns04Op: Stack#%d, NS04 enable(%d), band(%d), MCC-MNC(%d-%d)
Line 21945: [DSP] IPC_ACTION_ID_EDUAL_VOLTE_STATUS(%s) :: Mcg/Scg(St%d/St%d)
Line 21984: Not found available CC for earfcn(%d)
Line 21994: [DSP] IPC_ACTION_ID_SCG_START_IND: cc(%d), dl_earfcn(%d)
Line 22305: [DSP] Received TX_WAKEUP IPC from DSP
Line 22353: [DSP] No action due to Tx wakeup IPC during CDRX wakeup!!!
