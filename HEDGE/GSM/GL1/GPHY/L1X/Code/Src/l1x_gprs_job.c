Line 325: *** ERROR cease job. id=%d
Line 350: check_current_job
Line 359: Running Job %s (prio:%d) Disallow JOB %s (prio:%d)
Line 370: Running Job %s (prio:%d) Disallow JOB %s (prio:%d)
Line 411: check_future_job
Line 415: [DBG] action_list_sel (%d)
Line 459: JOB skip : L1X_JOB51_CBCH found but, run %s
Line 465: JOB skip : L1X_JOB51_CBCH found Don't run %s
Line 492: JOB skip : %s found, so can't run %s
Line 496: Future Job %s found but, run %s
Line 512: JOB skip : %s found, so can't run %s
Line 516: Future Job %s found but, run %s
Line 532: JOB skip : %s found, so can't run %s
Line 552: JOB skip : %s found, so can't run %s
Line 556: Future Job %s found but, run %s
Line 572: JOB skip : %s found, so can't run %s
Line 576: Future Job %s found but, run %s
Line 591: JOB skip : %s found, so can't run %s
Line 611: JOB skip : %s found, so can't run %s
Line 686: RdmRndRbn: L1X_JOB51_PCH1 found in PCH2, conflict count %d
Line 690: RdmRndRbn: L1X_JOB51_PCH found but, run PCH2
Line 696: RdmRndRbn: L1X_JOB51_PCH found and, run PCH1 
Line 702: RdmRndRbn: Wrong New job %s
Line 712: RdmRndRbn: L1X_JOB51_PCH2 found in PCH1, conflict count %d
Line 716: RdmRndRbn: L1X_JOB51_PCH2 found but, run PCH1
Line 722: RdmRndRbn: L1X_JOB51_PCH2 found and, run PCH2 
Line 728: RndRbn: Wrong New job %s
Line 733: Default case idx1 %d newJob %d 
Line 743: JOB skip : L1X_JOB51_CBCH found but, run %s
Line 827: JOB skip : %d now running, so can't run %d
Line 836: JOB skip : %d now running, so can't run %d
Line 848: Low prio Running Job %s (prio:%d) Disallow JOB %s (prio:%d)
Line 875: JOB skip : %d(51) or %d(52) found, so can't run %d
Line 911: SI skip {%d}
Line 966: Current Possible SI (0x%x, 0x%x ) 
Line 972: Serving Cell SI occurence seen during parallel read
Line 997: Normal SI skip {%d} expected TC 0x%x, bcch_type 0x%x
Line 1003: Extended SI skip {%d} expected TC 0x%x, bcch_type 0x%x
Line 1052: read status %x  SI type %d
Line 1060: No Neighbor Cell SI Occurence at %d 
Line 1065: No Neighbor Cell SI to be Read 
Line 1073: No Serving Cell SI to Read 
Line 1109: read status %x  SI type %d
Line 1117: No Neighbor Cell SI Occurence at %d 
Line 1122: No Neighbor Cell SI to be Read 
Line 1130: No Serving Cell SI to Read 
Line 1174: *** ERROR invalid PPG params 2
Line 1182: Adjust PPG mfrm(%d)
Line 1499: check_valid_cbch_ps: check_fn(%d) last_tc3_fn(%d)
Line 1562: check_valid_cbch2_ps: check_fn(%d) last_tc3_fn(%d)
Line 1730: Enter BSIC reconf job Sim1State(%d), Sim2State(%d)
Line 1735: skip BSIC reconf due to pending toggle
Line 1771: Skip scheduling of Ncell FB search in IDLE_RECONF dispatcher in stationary: Sim1Static(%d), Sim2Static(%d)
Line 1779: skip BSIC reconf due to IRAT
Line 1807: FB/SB decode scheduled after Paging
Line 1811: l1c_fb_sb_arfcn = %d  l1c_fb_sb_scheduled = %d
Line 1826: BSIC reconf job required GSM:%d Umts:%d Lte:%d
Line 1833: IRAT meas skipped for BPLMN
Line 1880: Schedule PCH JOb extention %s
Line 1906: BSIC reconf delayed to FN %d
Line 1964: Toggled Job pending - SKIP ENTER SYNC NCELL
Line 1968: Enter: l1x_enter_sync_ncell_seq (%d)
Line 1973: skip Sync ncell  due to IRAT G2X or X2G or DelayRelease Count %d 
Line 1992: delay NCELL SYNC(%d)
Line 2008: High priority job %d pending
Line 2035: SYNC_NCELL Job Found - Cur job id: %d future job id: %d
Line 2067: Toggled Job pending - SKIP SYNC NCELL
Line 2125: Fn_offset %d job_index %d priority %d
Line 2147: SYNC_NCELL delayed - Future Job: %d @ %d
Line 2222: Current FN %d DRX half length %d ncell sync schedule_fn %d
Line 2268: delay NCELL SYNC(%d)
Line 2272: delay NCELL SYNC(%d)
Line 2293: DUMMY_JOB %d
Line 2349: quit JOB(%d,%d,%d) for toggling
Line 2385: Enter: JOB51_SBCCH 
Line 2393: Toggled FOR RA/SWAP Job pending - SKIP SBCCH 
Line 2399: skip l1x_job51_Sbcch due to IRAT or DelayRelease count %d
Line 2482: JOB51_SBCCH %i
Line 2526: Enter: JOB51_EXT_SBCCH 
Line 2532: Toggled FOR RA Job pending - SKIP SBCCH 
Line 2538: skip l1x_job51_Ext_Sbcch due to IRAT or DelayRelease count %d
Line 2622: JOB51_EXT_SBCCH %i
Line 2657: Set RF release counter %d, idx %d
Line 2688: DSL1RC release seq is added after %d frame
Line 2710: l1x_send_rf_init_seq is added after %d frame
Line 2749: Enter: JOB51_PCH %d PchRcnt(%d):(%d)
Line 2756: Toggled FOR RA Job pending - SKIP NBCCH 
Line 2767: JOB51_PCH skip for toggle(%d) at %d
Line 2774: skip l1x_job51_pch due to IRAT
Line 2790: **PCH JOB SKIP** Due to DL assignment  %d
Line 2809: invalid PG params 1
Line 2834: RRR_PCH_Parm: PCH1 cur_mfrm %d
Line 2842: PG mfrm not matched, CurMrfm: %d SpecificMrfm: %d 
Line 2870: RRR_PCH_Parm: cur_mfrm_prim %d, cur_mfrm_sec %d pch_rrr_required %d
Line 2885: **PCH JOB SKIP** Due to Job Idx:  %d
Line 2893: TP: granted %d distance %d
Line 2922: **PCH JOB SKIP** Due to Job Idx:  %d
Line 2994: **PCH JOB SKIP** Due to Job Idx:  %d
Line 3064: JOB51_PCH %i
Line 3088: DSL1RC resrouce release for PCH is skipped for truncated paging
Line 3113: Enter: JOB51_PCH2 %d
Line 3117: skip JOB51_PCH2 due to IRAT
Line 3140: invalid PG params 1
Line 3145: [GL1 Error] invalid PG params (%d)
Line 3151: **PCH2 JOB SKIP** Due to DL assignment  %d
Line 3162: RRR_PCH_Parm: PCH2 cur_mfrm %d
Line 3170: PG mfrm not matched, AbsFn:%d CurMrfm: %d SpecificMrfm: %d 
Line 3196: RRR_PCH_Parm: cur_mfrm_sec %d, cur_mfrm_prim %d pch_rrr_required %d 
Line 3210: **PCH2 JOB SKIP** Due to Job Idx:  %d
Line 3217: granted %d distance %d
Line 3251: **PCH2 JOB SKIP** Due to Job Idx:  %d
Line 3307: **PCH2 JOB SKIP** Due to Job Idx:  %d
Line 3315: **PCH2 JOB SKIP** Due to Job Toggle for RA
Line 3327: JOB51_PCH2 skip for toggle(%d) at %d
Line 3359: JOB51_PCH2 %i Sec Scell %d 
Line 3423: skip JOB51_EXT_PCH2 due to IRAT
Line 3443: EXT SEC PCH JOB MFRM %d Not Matching
Line 3467: **EXT SEC PCH NOT ENABLED**
Line 3486: **EXT PCH JOB SKIP** Due to Job Idx:  %d
Line 3502: **EXT PCH JOB SKIP** Due to Future Job Idx:  %d
Line 3516: **PCH2 JOB SKIP** Due to Job Toggle for RA
Line 3565: JOB51_EXT_PCH2 %i
Line 3626: Enter: JOB51_EXT_PCH %d
Line 3652: Toggled FOR RA Job pending - SKIP NBCCH 
Line 3664: skip l1x_job51_pch due to IRAT
Line 3680: **EXT PCH NOT ENABLED**
Line 3695: **EXT PCH JOB SKIP** Due to Job Idx:  %d
Line 3735: Skip scheduling SYNC_NCELL_BCCH
Line 3750: JOB51_EXT_PCH %i
Line 3800: Enter: JOB51_NBCCH %d Prio(%d)
Line 3805: **Dont schedule BPLMN-NBCCH when 3G DRX timer is expired.
Line 3812: Toggled FOR RA Job pending - SKIP NBCCH 
Line 3818: skip l1x_job51_nbcch due to IRAT or DelayRelease count %d
Line 3853: No SyncInfo %i
Line 3858: skip l1x_job51_nbcch(BPLMN) due to no SYNC INFO
Line 3868: NBCCH SI map check in L1_NCELL_PARALLEL_READ
Line 3873: NBCCH SI map check in BPLMN
Line 3879: NBCCH SI map check:  si_grant = %d
Line 3919: check grant for JOB51_NBCCH Low priority SI
Line 3933:  SKIP NBCCH due to JOB PCH1/2 / EXT_PCH1/2 found : grant status lowprio si %i JOB = %d
Line 3949:  SBCCH skipped for NBCCH(reselection)
Line 3953:  job_index %d 
Line 3997: check grant for JOB51_NBCCH
Line 4044: JOB51_NBCCH skip for second future job
Line 4059: JOB51_NBCCH skip for toggle(%d) at %d
Line 4131: JOB51_NBCCH %i
Line 4183: Enter: JOB51_EXT_NBCCH %d Prio(%d)
Line 4189: Toggled FOR RA Job pending - SKIP NBCCH 
Line 4195: skip l1x_job51_Ex_nbcch due to IRAT or DelayRelease count %d
Line 4211: EXT_NBCCH SI map check in L1_NCELL_PARALLEL_READ
Line 4216: NBCCH SI map check in BPLMN
Line 4222: EXT_NBCCH SI map check:  si_grant = %d
Line 4266: check grant for JOB51_EXT_NBCCH Low priority SI
Line 4283: job_index %d
Line 4287:  SKIP EXT NBCCH due to JOB PCH1/2 / EXT_PCH1/2 found : grant status lowprio si %i JOB = %d
Line 4302:  SBCCH skipped for EXT_NBCCH(reselection)
Line 4306:  job_index %d 
Line 4351: check grant for JOB51_EXT_NBCCH
Line 4396: JOB51_NBCCH skip for second future job
Line 4411: JOB51_NBCCH skip for toggle(%d) at %d
Line 4491: JOB51_EXT_NBCCH %i
Line 4541: Toggled Job pending - SKIP SYNC NCELL
Line 4560: SYNC_NCELL Job Found - Cur job id: %d future job id: %d
Line 4572: DSL1RC release RF due to sync cell clash with other job
Line 4586: DSL1RC release RF due to DSL1RC paused in between
Line 4603: DSL1RC release RF due to ongoing CBCH
Line 4620: JOB51_SYNC_NCELL %i
Line 4702: Toggled FOR RA Job pending - SKIP CBCH 
Line 4708: skip l1x_job51_CBCH due to IRAT
Line 4732: skip l1x_job51_cbch due to invalid CBCH or skip_ind(%d)
Line 4751: skip l1x_job51_cbch due to current job
Line 4780: skip l1x_job51_cbch due to future job
Line 4834: JOB51_CBCH %i
Line 4913: Toggled FOR RA Job pending - SKIP CBCH2 
Line 4919: skip l1x_job51_CBCH2 due to IRAT
Line 5002: JOB51_CBCH2 %i sec_fn %i
Line 5065: check_future_jobs_info
Line 5086: #overlap1: %d, #overlap2: %d
Line 5099: JOB skip : %s found, so can't run %s
Line 5111: JOB skip : %s found, so can't run %s
Line 5125: JOB skip : %s found, so can't run %s
Line 5144: JOB skip : %s found, so can't run %s
Line 5159: JOB skip : %s found, so can't run %s
Line 5174: JOB skip : %s found, so can't run %s
Line 5185: JOB skip : %s found, so can't run %s
Line 5203: JOB skip : %s found, so can't run %s
Line 5217: Future Job L1X_JOB51_EXT_PCH found but, run %s
Line 5221: JOB skip : %s found, so can't run %s
Line 5232: Future Job L1X_JOB51_EXT_PCH2 found but, run %s
Line 5236: JOB skip : %s found, so can't run %s
Line 5259: JOB skip : %s found, so can't run %s
Line 5270: JOB skip : %s found, so can't run %s
Line 5277: NON JOB : %s detected
Line 5297: JOB skip : %s found, so can't run %s
Line 5314: JOB skip : %s found, so can't run %s
Line 5333: JOB skip : %s found, so can't run %s
Line 5347: JOB skip : %s found, so can't run %s
Line 5366: JOB skip : %s found, so can't run %s
Line 5381: JOB skip : %s found, so can't run %s
Line 5405: JOB skip : %s found, so can't run %s
Line 5416: JOB skip : %s found, so can't run %s
Line 5449: grant_run_jobs_across_length
Line 5478: l1x_dsl1rc_resource_request %i
Line 5505: DSL1RC release RF due to DSL1RC paused in between
Line 5531: Toggled pending - SKIP BSIC Reconf schedule during USE RSP 
Line 5538: l1x_job51_bsic_reconf_use_rsp
Line 5573: Skip l1x_job51_bsic_reconf_use_rsp due to job overlap and releasing RF
Line 5636: PrevTime(%d), CurrTime(%d) Diff(%d)
Line 5643: SKIP BSIC Reconf - 4G data ongoing, diff time(%d)
Line 5653: Toggled FOR RA Job pending - SKIP BSIC Reconf 
Line 5661: skip bsic reconf  due to IRAT or DelayRelease count %d
Line 5675: JOB51_BSIC_RECONF %i
Line 5794: JOB52_SPBCCH skip
Line 5800: fill remaining PPCH seq
Line 5804: fill remaining ExtPPCH seq
Line 5823: JOB52_SPBCCH (SPBCCH-PPCH) {%d,%i}
Line 5828: JOB52_SPBCCH (SPBCCH-ExtPPCH) %i
Line 5838: JOB52_SPBCCH (PPCH-SPBCCH) {%d,%i}
Line 5846: JOB52_SPBCCH (ExtPPCH-SPBCCH) %i
Line 5853: JOB52_SPBCCH {%d,%i}
Line 5861: JOB52_SPBCCH skip (cur%d overlap%d)
Line 5912: JOB52_NPBCCH %i
Line 5961: JOB52_PCCCH %i
Line 6022: *** ERROR invalid PPG params 1
Line 6036: fill remaining SPBCCH
Line 6053: JOB52_PPCH skip
Line 6057: fill remaining SPBCCH seq
Line 6073: JOB52_PPCH (PPCH-SPBCCH) %i
Line 6082: JOB52_PPCH (SPBCCH-PPCH) %i
Line 6089: JOB52_PPCH %i
Line 6097: JOB52_PPCH skip (cur%d overlap%d)
Line 6150: JOB52_ExtPPCH skip
Line 6154: fill remaining SPBCCH seq
Line 6170: JOB52_ExtPPCH (ExtPPCH-SPBCCH) %i
Line 6180: JOB52_ExtPPCH (SPBCCH-ExtPPCH) %i
Line 6187: JOB52_ExtPPCH %i
Line 6195: JOB52_ExtPPCH skip (cur%d overlap%d)
Line 6257: fbsb_required:%d, reconf_required:%d, utran_required:%d, loneEnd_required:%d
Line 6280: JOB52_SYNC_NCELL %i
Line 6314: No cell to find %i
Line 6414: JOB52_SBCCH %i
Line 6463: JOB52_EXT_SBCCH %i
Line 6511: invalid PG params 1
Line 6516: [GL1 Error] invalid PG params (%d)
Line 6539: JOB52_PCH %i
Line 6586: JOB52_EXT_PCH %i
Line 6635: JOB52_NBCCH %i
Line 6689: JOB52_EXT_NBCCH %i
Line 6775: [PS] RF init check in l1x_wakeup_job_ds
Line 6784: [PS] Release l1ps_prog_immediate_on_for_ds_running (FALSE) 
Line 6816: Inserted l1x_wakeup_prog_seq for immediate execution: Rem_fn=%d
Line 6835: l1x_send_rach_req %d
Line 6858: L1F RACH REQ start on new primary Scell SIM %d
