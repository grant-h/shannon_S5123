Line 404: l1c_set_bsic_acq_target: starting sync on ARFCN %d when acquiring sync for ARFCN %d
Line 482: pch_tgl_conflict check %d
Line 507: PScell start_fn %d toggle_fn_51 %d status_flag %d
Line 543: schedule PCH2 1 frm before
Line 567: SScell start_fn %d toggle_fn_51 %d status_flag %d
Line 575: Recheck conflict: pch_tgl_conflict check %d
Line 600: PScell start_fn %d toggle_fn_51 %d status_flag %d
Line 657: TGL-CBCH 1 overlap detected 
Line 664: TGL-CBCH 1 overlap : CBCH1 not present 
Line 691: TGL-CBCH 2 overlap detected 
Line 699: TGL-CBCH2 overlap : CBCH2 not present 
Line 766: pch_abs_fn %d scell_pch_fn51 %d
Line 810: abs_fn_scell_pch_wrt_primary %d sec_scell_pch_fn51 %d
Line 863: prim_scell_tc %d sec_scell_tc %d
Line 870: PCH RR same TC & MF
Line 879: PCH RR diff TC & same MF
Line 887: PCH RR same TC & MF
Line 895: l1c_prim_pg_fn51 %d  l1c_sec_pg_fn51 %d
Line 907: PCH RR Prim Before Sec
Line 921: PCH RR sec before prim
Line 935: PCH RR prm sec same fn
Line 950: PCH RR Prim Before Sec
Line 963: PCH RR Sec before Prim
Line 982: pch_rr_required %d
Line 1090: scheduling PCH1 %d Simno %d pg_blk_tdma_fn %d
Line 1248: SEC SCELL PCH ABS FN %d , %d 
Line 1264: scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
Line 1269: SCELL2 not camped %d %d
Line 1379: scheduling PCH1 %d %d pg_blk_tdma_fn %d
Line 1386: Primary Scell Not present
Line 1491: DRX:Swap Secondary PCH Delayed: %d
Line 1527: SEC SCELL PCH ABS FN %d , %d 
Line 1541: scheduling PCH2 %d %d pg_blk_tdma_fn %d page2_tdma_fn %d
Line 1548: SCELL2 not camped %d %d
Line 1621: CBCH supported fn=%d
Line 1663: CBCH not supported d%d s%d
Line 1668:  CBCH1: Wrong primary serving cell simno %d
Line 1705: CBCH2 supported fn=%d TS= %d
Line 1747: CBCH2 not supported d%d s%d cbch2-ts%d
Line 1752:  CBCH2: Wrong secondary serving cell simno %d %d
Line 1812: l1c_listen_to_full_cch(%d)
Line 1820:  l1x_scell_sysinfo_error_cnt set to %d
Line 1880: l1c_listen_to_full_cch grant
Line 1885: l1c_listen_to_full_cch reject
Line 1942:   Same Cell :l1_scell.arfcn %d  p_l1_passive_chn_data->cell_params[l1c_processing_sim].cell_desc.bcch_carrier %d
Line 1954:   New Cell :l1_scell.arfcn %d l1_scell.simno %d  p_l1_passive_chn_data->cell_params[%d].cell_desc.bcch_carrier %d  l1_new_scell.simno %d
Line 2013: l1c_restart_idle_task {%i}
Line 2163: l1c_restart_idle_task_from_pbcch {%i}
Line 2276: l1c_camp_on_new_cell(%d) {%i}
Line 2298: S: RESEL :l1_new_scell.arfcn %d  l1_new_scell.Simno %d
Line 2303: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 2472: l1c_swap_on_new_cell  FROM:Arfcn(%d) Simno(%d) TO:Arfcn(%d) Simno(%d) Frame{%i}
Line 2564: l1c_idle_req_processing_sim ->%d
Line 2665: l1c_abort_pccch_and_restart_idle_task(%d)
Line 2679: Reselection [%d->%d]
Line 2685: PBCCH deact
Line 2689: Same Cell
Line 2846: L1cAbortTransferAndRestartIdleTask(%d)
Line 2964: l1c_stop_si_reading {%i}
Line 2985:  is_page_params_valid[0] %d is_page_params_valid[1] %d index %d 
Line 2990: Restart periodic task for primary SIM 
Line 2994: periodic task  restart issue CHECK!  %d
Line 3118: l1c_stop_current_activity {%i}
Line 3169: l1c_find_sb(%d) {%i}
Line 3193: SCELL Present
Line 3255: Data ongoing Inc FB/SB interval
Line 3273: Toggle job found updated offset to %d
Line 3293: Frame offset %d gap_mfrm_offset %d
Line 3327: FB/SB sync already in queue
Line 3349: Synch Already present (%d) {%i}
Line 3355: SCELL Not present, FB/SB scheduled parallely %d
Line 3369: frame_offs %d l1c_51fn_after_toggle %d
Line 3387: Sync already happening
Line 3422: Add sync at offset %d l1f_cur_job_len %d
Line 3429: SCELL Not present
Line 3441: SCELL Not present: l1c_nsynch_cell.arfcn %d
Line 3461: l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
Line 3517: skip Initial FB/SB due to IRAT
Line 3544: l1c_find_sb_grant(requestreponse=%d) ofs(%d) nfrm(%d)
Line 3551: l1c_find_sb_grant(requestreponse=%d)
Line 3572: l1c_find_sb_reject (requestreponse=%d) Insert l1x_dsl1rc_resource_request ofs(%d)
Line 3638: l1c_find_sb_for_blind_ho(%d) {%i}
Line 3664: Adding Tcell into MMA list during blind HO (%d)
Line 3822: Ext Pg already in queue {%i}
Line 3825: l1c_read_ext_paging {%i}
Line 3875: l1c_job51_ext_pch_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
Line 3931: l1c_read_sec_ext_paging {%i}
Line 3956: DRX: EXT-PCH2 Secondary PCH Delayed: %d
Line 4000: EXT PCH2: scell_abs_fn %d frm_offs %d pch_abs_fn %d tdma_fn %d
Line 4021: l1c_job51_ext_pch2_seq SKIP - l1c_specific_pag_mfrm (%d) tdma_fn(%d) pg_blk_tdma_fn(%d) l1x_toggle_pending(%d)
Line 4090: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 4123: l1c_check_nbcch_pg_conflict: SI requested:0x%x
Line 4158: PG conflict with SI 3
Line 4173: PG conflict with SI 4 (%x)
Line 4180: PG conflict with SI 78
Line 4187: PG conflict with SI 13
Line 4194: PG conflict with SI 13Ext
Line 4198: NO SI's conflict with PCH1 
Line 4246: Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
Line 4258: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
Line 4297: l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
Line 4331: PG conflict with SI 3
Line 4346: PG conflict with SI 4 (%x)
Line 4353: PG conflict with SI 78
Line 4360: PG conflict with SI 13
Line 4367: PG conflict with SI 13Ext
Line 4371: NO SI's conflict with PCH2 
Line 4396: l1c_ncell_si_already_scheduled: Read NCell Arfcn:%d
Line 4399: l1c_bcch_ongoing_arfcn %d Active arfcn %d sim %d
Line 4405: Already BCCH ongoing on same ARFCN
Line 4426: cell(%d) to %d fo %d bsic %d
Line 4461: [GL1 Error] ERROR WRONG BCCH TYPE (%d)
Line 4468: NORMAL BCCH needed
Line 4474: EXTENDED BCCH needed
Line 4480: Old BCCH type %d not matching bcch_type %d
Line 4486:  l1x_bcch_ncell_info.sync_info_required(%d)
Line 4532: l1c_read_ncell_si_cont: Read NCell Arfcn:%d
Line 4543: *** ERROR wrong NBCCH req
Line 4557: cell(%d) to %d fo %d bsic %d
Line 4567:  l1x_bcch_ncell_info.sync_info_required(%d)
Line 4646: [GL1 Error] ERROR WRONG BCCH TYPE (%d)
Line 4656: Primary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 4663: Secondary Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 4721: schedule NBCCH 1 frm before
Line 4732: l1c_bcch_type %d
Line 4772: Primary scell CONFLICT CHECK 
Line 4783: Secondary scell CONFLICT CHECK 
Line 4794: BPLMN NBCCH  CONFLICT CHECK with PCH1 & PCH2 
Line 4806: BPLMN NBCCH  CONFLICT CHECK : TRUE 
Line 4810: BPLMN NBCCH  CONFLICT CHECK : FALSE SIM1(%d) SIM2(%d)
Line 4855: toggle_fn %d toggle_offset_active_passive %d l1c_51fn_after_toggle %d
Line 4875: Parallel l1c_read_ncell_si_cont: Read NCell Arfcn:%d
Line 4888: *** ERROR wrong NBCCH req
Line 4901: cell(%d) to %d fo %d bsic %d
Line 4915: [GL1 Error] l1c_si_num_sch (%d) l1c_si_schedule.A[%d].bcch_type (%d)
Line 4934: Parallel Ncell: Paging Parameters: ag_blks:%d, pa_mfrm:%d, ccch_grp:%d, page_group:%d, page_block_index:%d
Line 4962: schedule NBCCH 1 frm before for Parallel Ncell
Line 5069: Multiple BCCH read requested in PTM [%d] %d
Line 5077: Multiple BCCH read requested in PTM [%d] %d
Line 5114: schedule NBCCH 1 frm before
Line 5145: si_abs_fn: %d qb_offset_bch_start: %d
Line 5151: l1c_read_si_in_ptm: Read Arfcn:%d
Line 5159: BCCH read cannot be done now %d
Line 5208: BCCH on sim %d not allowed as BCCH already happening on %d
Line 5277: l1c_read_scell_si_cont {%i}
Line 5297: *** ERROR bcch_read_reason(%d) for SCELL(%d)
Line 5306:  l1x_bcch_ncell_info.sync_info_required(%d)
Line 5315: l1c_si_num_sch %d bcch_type %d  bs_ag_blks_res %d
Line 5505: l1c_start_idle_mode(%d) {ARFCN: %d FN %i-> ARFCN: %d FN: %i}
Line 5526: PCCCH_TO_CCCH current scell(%d)->new scell(%d)
Line 5571: RESEL :l1_new_scell.arfcn %d  l1_new_scell.Simno %d
Line 5576: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 5651: CELL_SWAP : l1_new_scell.arfcn %d  l1_new_scell.Simno %d
Line 5656: *** ERROR : 'nSynchGetEntryByArfcn()' function returns NULL
Line 5663: SWAP_SIM2_TO_SIM1 l1_new_scell.Simno %d
Line 5670: SWAP_SIM1_TO_SIM2 l1_new_scell.Simno %d
Line 5909: l1c_start_idle_mode_from_pbcch {%i->%i}
Line 5966: l1c_start_pg_reorg {%i}
Line 6090: l1c_update_ba_list(mode :%d) {%i}
Line 6095: Not yet camp on a cell
Line 6127: l1c_serve_cb
Line 6225: l1c_start_periodic_tasks(%d) {%i}
Line 6353: l1c_skip_cbch StopReq %d
Line 6385: CBCH prio changed
Line 6431: CBCH2 prio changed
Line 6452: Wrong Processing Sim: %d
Line 6506: CBCH slot not matching Byte Pos %d, bit Pos %d
Line 6562: Next CBCH: After %d ms 
Line 6597: l1c_start_cbch_drx
Line 6710: Configuring DRX mode for Inactive 3G BPLMN scan 
Line 6776: MPH_BPLMN_SYNC_IND  %d   %d
Line 6806: BPLMN Stopped: Avoid SYNC_IND
Line 6837: ERR: Wrong SimNo
Line 6844: ERR: Wrong SimNo
Line 6871: BPLMN Stopped: Avoid SYNC_IND
Line 6935: MPH_SYNC_IND  Arfcn %d Status %d snr %d
Line 6961: Dummy MPH_SYNC_IND for fastSync %d %d
Line 7077: Data ongoing skip FB/SB here
Line 7082: Full Idle Static: skip FB/SB here
Line 7087: UMTS State:%d 
Line 7094: IRAT SCAN REQ in Queue. Restrict FB/SB
Line 7101: FB_SB going on for BCCH read ARFCN
Line 7126: l1c_schedule_bplmnsearch
Line 7134: l1c_read_ncell_si_cont_parallel_bplmnsearch: invalid Bplmn ncell
Line 7140: l1c_read_ncell_si_cont_parallel_bplmnsearch: NO Bplmn ncell SI to read
Line 7160: BPLMN ncell arfcn not there in nCellSynchRep table
Line 7170: Ongoing BPLMN FB/SB search ARFCN(%d) cleared
Line 7269: IDLE mode restart on new primary Scell %d
Line 7290: L1F RACH REQ restart on secondary Scell SIM %d
Line 7301: GL1_Pause_Duration %d otherclient_RequestReason is %d
Line 7331: RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
Line 7339: DSL1RC RESUME in DRX 
Line 7343: RESUME RSSI SCAN : IS_cellsearch_PAUSE = FALSE
Line 7350: DO NOTHING FOR DSL1RC RESUME
Line 7386: PAUSE already in queue
Line 7421: PAUSE TRANSFER STATE: %d
Line 7433: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7450: PAUSE Done will be sent aft %d Frames
Line 7463: Skip sending pause_done as supend procedure ongoing 
Line 7513: PAUSE in WAIT State: FrmOff: %d
Line 7531: PAUSE Non DRX
Line 7542: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7547: PAUSE DONE : G2T||G2U Irat measurement going on
Line 7559: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7578: PAUSE DRX %d
Line 7632: PAUSE already in queue
Line 7672: PAUSE TRANSFER STATE frmOffset %d
Line 7694: PAUSE TRANSFER WAIT: %d
Line 7706: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7735: Skip sending pause_done as supend procedure ongoing 
Line 7785: PAUSE in WAIT State: FrmOff: %d
Line 7801: PAUSE Non DRX
Line 7813: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7819: PAUSE DONE : G2T||G2U Irat measurement going on
Line 7831: PAUSE RSSI SCAN : IS_cellsearch_PAUSE = TRUE
Line 7850: PAUSE DRX %d
Line 7877: SKIP AUTO_PAUSE
Line 7934: GL1_DSL1RC: previous frame lost %d
Line 7941: Too Early to pause =%d
Line 7981: StartEarlyPauseTime timeduration=%d, currentTime=%d currentState %d Frames to Pause =%d
Line 8002: autopause_remaining_frames %d
Line 8037: IsPsPsEnabled = %d resume_ready_count = %d
Line 8100: Arfcn: %d DSDS Cause = %d
Line 8113: Requesting SIM ID wrong. Check!
Line 8197: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d
Line 8215: l1c_check_nbcch_pg_conflict: SI requested:0x%x
Line 8235: PG conflict with SI 3
Line 8243: PG conflict with SI 4 (%x)
Line 8247: NO SI's conflict with PCH1 
Line 8294: Sec Scell Asn Fn=%d ,ncell_abs_fn=%d ncell_sec_scell_fn_offset %d
Line 8306: l1c_check_nbcch_pg_conflict: Page_fn_204=%d ,SI3_fn_204=%d SScell fn %d
Line 8333: l1c_check_nbcch_sec_pg_conflict: SI requested:0x%x
Line 8353: PG conflict with SI 3
Line 8361: PG conflict with SI 4 (%x)
Line 8365: NO SI's conflict with PCH2 
Line 8383: Set l1c_rachPrepStatus %d
