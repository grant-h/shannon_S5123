Line 217: l1x_handle_sbcch_radio_link_loss : l1x_scell_sysinfo_error_cnt(%d)
Line 233: l1x_scell_sysinfo_error_cnt is set to 0 - #1
Line 242: GOOD SBCCH - error_cnt(%d)
Line 253: l1x_scell_sysinfo_error_cnt is set to 0 - #2
Line 262: Lost BCCH on Cell %d send MPH_NO_BCCH...
Line 281: Requesting SIM ID wrong. Check!
Line 295: Lost BCCH on SCELL %d send MPH_NO_BCCH...
Line 309: SBCCH to SIM %d 
Line 324: Requesting SIM ID wrong. Check!
Line 327: l1x_scell_sysinfo_error_cnt is set to 0 - #3
Line 341: Lost BCCH on Cell %d send MPH_NO_BCCH...
Line 360: Requesting SIM ID wrong. Check!
Line 402: SDCCH: l1x_sdcch_restart_meas_period - Reporting started
Line 414: SDCCH: l1x_sdcch_restart_meas_period - First Report available
Line 428: SDCCH: l1x_sdcch_restart_meas_period - New Report available
Line 434: TCH: Reporting Period Time restart -- ERROR: Not Available
Line 440: l1x_tch_restart_meas_period -- ERROR: Suspended
Line 446: l1x_tch_restart_meas_period -- ERROR: Validity = %d
Line 612: PCH BLOCK ID: Paging Group match
Line 617: PCH BLOCK ID: No Paging Group match
Line 629: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d br_no %d
Line 634: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d br_no %d
Line 640: PCH BLOCK ID: BS_PA_MFRMS 0
Line 647: PCH BLOCK ID: MARKING DISABLED
Line 684: Abn Fn %i Sec Scell Arrfcn %d Fn %d To %d Simno %d
Line 719: PCH BLOCK ID: Paging Group match
Line 724: PCH BLOCK ID: No Paging Group match
Line 735: PCH BLOCK ID: Paging Group match mfrm %d tdma_fn %d
Line 740: PCH BLOCK ID: No Paging Group match mfrm %d tdma_fn %d
Line 747: PCH BLOCK ID: BS_PA_MFRMS 0
Line 754: PCH BLOCK ID: MARKING DISABLED
Line 830: l1_scell.Simno[%d] to be checked
Line 835: ERROR!!!- dscCallbactFct is NULL!!!!!!!!
Line 843: Send Pending MPH_ERROR_IND 
Line 852: Avoid MPH_ERROR_IND in RACH
Line 870: Requesting SIM ID wrong. Check!
Line 876: send MPH_ERROR_IND
Line 954: l1_scell.Simno[%d] to be checked
Line 959: ERROR!!!- dscCallbactFct is NULL!!!!!!!!
Line 967: Send Pending MPH_ERROR_IND 
Line 989: Requesting SIM ID wrong. Check!
Line 994: send MPH_ERROR_IND to Sec Scell
Line 1030: l1x_report_rxlev_meas called
Line 1033: Measurement Done posted from Tch act seq
Line 1046: l1x_report_rxlev_meas: l1_mode = L1_DEDICATED_MODE
Line 1051: l1x_report_rxlev_meas: l1_mode = L1_IDLE_MODE
Line 1066: [GL1 Error] Invalid meas_type (%d) 
Line 1110: send MPH_CCCH_IDLE_CON {%i} l1c_Idle_con_pending %d
Line 1133: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1140: softsum: Arfcn:%d, IDLE sfotsum(%d)
Line 1157: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1164: MetricScale: Arfcn:%d, IDLE MetricScale(%d)
Line 1181: Issue in sending MPH_CCCH_IDLE_CON {%i} to BOTH SIMl1c_Idle_con_pending %d CHECK!
Line 1188: Issue in sending MPH_CCCH_IDLE_CON {%i} l1c_Idle_con_pending %d
Line 1288: CNF_IMMED_ASSIGN send to Sim %d
Line 1293: CNF_IMMED_ASSIGN send to Sim %d
Line 1298: SIM ID wrong. Check!
Line 1310: CNF_ASSIGN send to Sim %d
Line 1315: CNF_ASSIGN send to Sim %d
Line 1320: SIM ID wrong. Check!
Line 1334: CNF_ASYNC_HO send to Sim %d
Line 1339: CNF_ASYNC_HO send to Sim %d
Line 1344: SIM ID wrong. Check!
Line 1362: CNF_HO_FAIL send to Sim %d
Line 1367: CNF_HO_FAIL send to Sim %d
Line 1372: SIM ID wrong. Check!
Line 1417: MPH_SYNC_HO_CON send to Sim %d
Line 1422: MPH_SYNC_HO_CON send to Sim %d
Line 1427: SIM ID wrong. Check!
Line 1484: [GL1 Error] Invalid handoverID (%d) 
Line 1495: L1F_HO_COM ID=%d {%i}
Line 1615: Skip SACCH/FACCH/SDCCH Tx. Dsl1RC Pause
Line 1621: Channel Type: %d
Line 1648: TX DATA on SIM1 %d PtData %d
Line 1657: TX DATA on SIM2 %d PtData %d
Line 1661: l1x_write_block invalid simno,PtData not set
Line 1689: Wrong SIM ID Check! 
Line 1711: Wrong SIM ID Check! 
Line 1714: queue L2 message on SDCCH
Line 1751: TX DATA on SIM1 %d PtData(l2_AssocSapi0Buffer) %d
Line 1756: TX DATA on SIM2 %d PtData(ds_l2_AssocSapi0Buffer) %d
Line 1760: l1x_write_block invalid simno,PtData not set
Line 1765: send meas report
Line 1775: send dummy meas report
Line 1783: l1x_write_block: reporting txpwr %d on SACCH
Line 1792: ** Tx channel error %d:%d
Line 1800: [GL1 Error] p_l2_msg NULL (%d) 
Line 1807: Tx %x %x %x %x FN%8lu
Line 1821: l1x_send_TA_ind() TX PWR : (%d) TA:%d 
Line 1837: Wrong Sim ID Check! 
Line 1866: Avg softsum for MPH_DATA_IND %d
Line 1894: Avg CI metric for MPH_DATA_IND %d
Line 1937: BPLMN IND : bcch_Read_reason Reset
Line 1940: l1c_bcch_read_reason (%d)
Line 1952: p_sync_info->RxLevel (%d)
Line 1977: RR_MSG_ENTITY %d 
Line 1982: DS_RR_MSG_ENTITY %d 
Line 1988: WRONG SIM ID.[%d] Check!! 
Line 1990: L1->RR:
Line 2042: ANR: Rxlev %d
Line 2057: Invalid sim no check!
Line 2060: MPH_NO_BCCH(%d) cause%d
Line 2138: >>>VAL pwr %d
Line 2178: >>>FULL softsum %d
Line 2200: >>>SUB softsum %d
Line 2263: [L1X_BurstUpdateTo]Accumulation[to_value = %d, to_count], timing_offset  = %d, weighting = %d
Line 2383: Rd%8x Wr %8x fct%8x
Line 2409: [CCH_result] chn type(%d), errorcnt(%d)
Line 2490: [GL1 Error] Invalid burst_no (%d) 
Line 2523: Rxlev reset in cch_burst_result_handler no use_power, ch_type %d
Line 2531: MMA METRICSCALE %d
Line 2538: MMA METRICSCALE %d
Line 2568: l1x_cch_burst_result_handler: Power:%d, Rxlev:%d (chan %d)
Line 2606: l1x_cch_burst_result_handler: skip (chan %d - PWRC %d hop %d ARFCN %d vs. BCCH Arfcn %d)
Line 2627: SCELL Rxlev Clr in cch_burst_result_handler , ch_type :%d
Line 2638: l1x_cch_burst_result_handler: Adding Rxlev :%d Burst_no :%d c_lev %d rxlev: %d 
Line 2699: BAD SBCCH (%d) l1x_scell_sysinfo_error_cnt(%d) l1c_paging_parameters.bs_pa_mfrms(%d)
Line 2732: SBCCH to SIM %d 
Line 2742: GOOD SBCCH (%d) - SI Type[%d] l1x_scell_sysinfo_error_cnt(%d) l1c_paging_parameters.bs_pa_mfrms(%d) 
Line 2765: ERROR SBCCH (%d) code %d
Line 2770: *** ERROR lost serving cell 
Line 2807: EXT PCH was scheduled 
Line 2822: GOOD CCCH_R arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 2848: BAD CCCH_R arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 2946: l1x_hdl_pch: Sending PCH to both the SIM's as ccch_grp and pg_blk_idx matched
Line 2951: GOOD PCH_R dsc%d dsc_max%d Arfcn %d Fn %d TO %d SimNo %d
Line 2952: Prim ccch_type %d
Line 2969: BAD PCH_R arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3080: ERR: Sec SCELL update timer missed 
Line 3113: l1x_hdl_sec_pch: Sending PCH to both the SIM's as ccch_grp and pg_blk_idx matched
Line 3117: GOOD PCH_R l1x_dsc_sec_scell %d l1_dsc_max_sec_scell %d Arfcn %d Fn %d TO %d SimNo %d
Line 3118: Sec ccch_type %d
Line 3138: BAD PCH_R arfcn:%d l1x_dsc_sec_scell:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3172: SEC EXT PCH was scheduled 
Line 3218: GOOD EXT PCH_R l1x_dsc_sec_scell %d l1_dsc_max_sec_scell %d Arfcn %d Fn %d TO %d SimNo %d
Line 3219: Sec ccch_type %d
Line 3236: BAD PCH_R arfcn:%d l1x_dsc_sec_scell:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3288: GOOD CCCH_M arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3301: BAD CCCH_M arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3341: GOOD PCH_M dsc%d
Line 3356: BAD PCH_M arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3388: GOOD PCH_in52
Line 3405: BAD PCH_in52 arfcn:%d dsc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3447: SACCH changed TA%1u P%2u {%8lu}
Line 3456: GOOD SACCH arfcn:%d rlc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3461: GOOD SACCH(SDCCH) - NEW P:%d NEW TA:%d
Line 3477: l1x_handle_sacch: limited txpwr = %d, arfcn: %d
Line 3492: GOOD SACCH TA:%1u NEW P:%2d CUR P:%d
Line 3515: l1x_handle_sacch invalid simno, L1C_L2_PH_DATA_IND not sent
Line 3549: Requesting SIM ID wrong. Check!
Line 3564: BAD SACCH arfcn:%d rlc:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3606: BAD SDCCH arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3619: GOOD SDCCH arfcn:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3650: l1x_handle_sdcch invalid simno, L1C_L2_PH_DATA_IND not sent
Line 3713: Error in sending CBCH IND %d
Line 3741: Error in sending CBCH IND %d
Line 3746: GOOD CBCH on TC%d A[0]=%d
Line 3759: BAD CBCH arfcn:%d TC:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3827: Error in sending CBCH2 IND %d
Line 3856: Error in sending CBCH2 IND %d
Line 3861: GOOD CBCH2 on TC%d A[0]=%d
Line 3874: BAD CBCH2 arfcn:%d TC:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 3935: l1x_bch_burst_result_handler: Adding Rxlev :%d
Line 3944: SEC CELL MMA METRICSCALE %d
Line 3954: [GL1 Error] Invalid burst_no (%d) 
Line 4082: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 4090: BCCH arfcn (%d) ncell_bcch_arfcn %d rxlev %d
Line 4094: **Dont process BCCH result
Line 4136: BAD NCELL SI data found in PTM
Line 4205: SI 13 not detected
Line 4214: Bad_SI_Cnt[%d] Good_Nbcch_Bad_Decode_Cnt[%d]
Line 4229: BAD NBCH arfcn:%d Extended ErrCnt:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4236: Lost BCCH on %d sendng MPH_NO_BCCH
Line 4261: Anr Background? (%d) l1c_bcch_read_reason %d
Line 4278: Wrong Sim ID Check!
Line 4319: *** ERROR RR not stopping SI reading
Line 4343: GOOD NBCCH (%d) Err Cnt %d (%d) - SI Type[%d] Requested Sim [%d]  l1x_si_received_status = %d
Line 4360: GOOD NBCCH Not sent as Sync entry is not present 
Line 4396: ERROR NBCCH (%d) code %d
Line 4406: BAD NBCH arfcn:%d cause:%d toi:0x%08x foi:0x%08x pwr:0x%08x err:0x%08x soft:0x%08x
Line 4415: *** ERROR ncell not changed yet
Line 4420: *** ERROR lost near cell
Line 4500: EARLY PAUSE TIMER SENT: %d
Line 4512: L1F DSL1RC RESUME SENT: %d
Line 4538: l1x_report_rxlev_meas_second_scell 
Line 4543: l1x_report_rxlev_meas: l1_mode = L1_IDLE_MODE
Line 4549: [GL1 Error] l1x_report_rxlev_meas_second_scell: invalid meas_type (%d) 
