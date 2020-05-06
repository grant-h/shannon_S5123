Line 433: Parameters related with Paging are incorrect!!!
Line 481: L1LC_UpdatePagingTimingInComparisionWithRef(Ref Timing - SFN:%d, TTI:%d) and update end timing(SFN:%d, TTI:%d)
Line 499: L1LC_DrxInit :: Reset gDrx_DSDSPagingRcvIntrSkip(%d)
Line 575: L1LC_DrxInitToReady(%d)
Line 592: Invalid ueState(%d)
Line 621: L1LC_ShadeInit
Line 701: Invalid state %d
Line 707: L1LC_DrxStateChange (%s -> %s)
Line 754: L1LC_DrxStateShadeStart
Line 815: gDRXShort_Block=%d
Line 888: (L1LC_DrxUpdateConnDrxTime)(curTimeTti:%d gDrxWakeSFN:%d gDrxWakeTTI:%d drx->curSleepTime:%d gDrxShortModeFlag:%d gDrxResync_cnt:%d)
Line 892: (L1LC_DrxUpdateConnDrxTime)(curTimeTti:%d gDrxWakeSFN:%d gDrxWakeTTI:%d drx->curSleepTime:%d gDrxShortModeFlag:%d gDrxResync_cnt:%d)
Line 955: dsp_sleep_time=%d, rrm_sleep_time=%d, slink_slp_time=%d[ms]
Line 983: Invalid drx_T value is %d
Line 1001: Change SleepTime : prev(%d), after(%d)!
Line 1016: SIB SFN_tti(%d, %d), Paging SFN_tti(%d, %d), Wakeup_Time_tti(%d)!
Line 1029: Paging occassion is nearby SIB occasion!
Line 1044: SIB occassion is nearby paging occassion!
Line 1077: PF(%d)PO(%d)curTimeSFN(%d)curTimeTti(%d)reset_offset(%d)(%d)
Line 1079: sib_frame=%d, sib_offset=%d, pagingFrame=%d, paging_offset=%d, drx->state=%d, paging_slp_time=%d
Line 1093: drx->curSleepTime = %d, (%d, %d)
Line 1112: L1LC_DrxProcSlowClkEstComplete, state[%d][%d]
Line 1251: DRX spare timer start(%d), Curr=%d
Line 1256: DRX spare timer CANNOT start(bplmn_spare_tmr_duration = %d), Curr=%d
Line 1265: Remaining time for next paging occassion = %d
Line 1274: need more DRX spare time
Line 1294: [DRX] L1LC_DrxCheckIdleOOS
Line 1318: [DRX] [%d]RLF(peak_value(%d) < thresh(%d))
Line 1363: [DRX] MsgPendingNum = %d.
Line 1372: L1LC_DrxCheckSleepStart[4GDS](NumOfQueueMsg[%d])
Line 1379: L1LC_DrxCheckSleepStart[4GDS](HoldRrmMsgFlag[%d])
Line 1389: L1LC_DrxCheckSleepStart[4GDS] - skip (cum_drx_time[%d], Conn-Conn state[%d], longDRXcycle[%d])
Line 1399: [STAT]Drx Skip(common):gDrxMbsfnSiCount[%d] gDrxVocoderCount[%d] gDrxStateErrCount[%d] gDrxVolteCount[%d] gDrxHoldCount[%d]
Line 1404: [STAT]IdleDrx Skip : gDrxBplmnCount[%d] gDrxFlagCount[%d]
Line 1406: [STAT]Resync[%d] : SfnCount[%d] WakeupTimeCount[%d] ServigTimeCount[%d] PdmCount[%d] CinrCount[%d]
Line 1411: [STAT]ConnDrx Skip:gDrxRstdMeasCount[%d] gDrxRlfCount[%d] gDrxRepeaterCount[%d] gDrxAbnormalTimeCount[%d] gDrxLMacCount[%d] gDrxWaitIpcCount[%d] gDrxSiModCount[%d]
Line 1452: L1LC_DrxCheckSleepStart[comm](MBSFN DRX check)
Line 1462: L1LC_DrxCheckSleepStart[comm](Serving Cell mismatch-no skip)(%d, %d)
Line 1492: L1LC_DrxCheckSleepStart[comm](VoLTE is working)
Line 1514: L1LC_DrxCheckSleepStart[comm](gDrx_HoldFlag is TRUE)
Line 1525: L1LC_DrxCheckSleepStart[comm](DRX is not ready)(gL1LC_DrxControl.state:%d)
Line 1555: L1LC_DrxCheckSleepStart[idle(reinit)](Invalid SFN)
Line 1557: L1LC_DrxCheckSleepStart[idle(reinit)](Invalid SFN)
Line 1581: L1LC_DrxCheckSleepStart[idle(reinit)](Serving timing abnormal)
Line 1585: L1LC_DrxCheckSleepStart[idle(reinit)](Serving timing abnormal)(filtered_rsrp:%d)
Line 1595: L1LC_DrxCheckSleepStart[idle](Serving timing abnormal)
Line 1599: L1LC_DrxCheckSleepStart[idle](Serving timing abnormal)(filtered_rsrp:%d)
Line 1614: L1LC_DrxCheckSleepStart[idle(reinit)](SCG - Serving timing abnormal)
Line 1615: L1LC_DrxCheckSleepStart[idle(reinit)](SCG - Serving timing abnormal)
Line 1648: L1LC_DrxCheckSleepStart[idle(reinit)](PDM value abnormal)(gDrxPdmArray[0]:%d gDrxPdmArray[1]:%d)
Line 1650: L1LC_DrxCheckSleepStart[idle(reinit)](PDM value abnormal)(gDrxPdmArray[0]:%d gDrxPdmArray[1]:%d)
Line 1675: L1LC_DrxCheckSleepStart[idle(reinit)](OOS Event)
Line 1677: L1LC_DrxCheckSleepStart[idle(reinit)](OOS Event)
Line 1692: L1LC_DrxCheckSleepStart[idle](oos_result_cnt(%d) < gDrxOOSCriteria(%d))
Line 1704: L1LC_DrxCheckSleepStart[idle(reinit)](Ongoing ReInitDrx)
Line 1706: L1LC_DrxCheckSleepStart[idle(reinit)](Ongoing ReInitDrx)
Line 1725: L1LC_DrxCheckSleepStart[idle](BPLMN Start)
Line 1750: L1LC_DrxCheckSleepStart[idle](HALDRX_CheckUpperLayerFlag)
Line 1757: Sleep Retry Timer started with [%u]ms!!!
Line 1767: IDLE DRX skip cus Meas ongoing.(curMode:%d, curIratMode:%d)
Line 1780: L1LC_DrxCheckSleepStart(NR SCG setup C-DRX skip)
Line 1785: L1LC_DrxCheckSleepStart(C-DRX(cycle:%d) skip on throughput(DL: %dMbps / UL: %dMbps)
Line 1795: (DSDS)L1LC_DrxCheckSleepStart[conn](LTE Paused)
Line 1805: (4G_DRDS)L1LC_DrxCheckSleepStart[conn](4G_DRDS Active)
Line 1818: L1LC_DrxCheckSleepStart[conn](SIB modification)
Line 1830: L1LC_DrxCheckSleepStart[conn](RSTD Measurement)
Line 1842: L1LC_DrxCheckSleepStart[conn](OutOfSync is found)(Out Sync Rate:%d)
Line 1854: L1LC_DrxCheckSleepStart[conn](AFC hold mode-long sleep)(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
Line 1865: [ERR]L1LC_DrxCheckSleepStart[conn](UNEXPECTED SLEEP_TIME)(gL1LC_DrxControl.curSleepTime(%d) > DrxMaxCycle(25600)) 
Line 1879: L1LC_DrxCheckSleepStart[conn](LMAC Working)(tx:%d, rx:%d, gSRTriggered:%d HALTX_SleepOkFlag:%d)
Line 1901: L1LC_DrxCheckSleepStart[conn](gHalDrx_ConnDrxState = DRX_CONN_INIT, wait DSP Done)
Line 1919: L1LC_DrxCheckSleepStart[conn](gDrxVolteAmr_Flag = TRUE, Long DRX Cycle <= 40ms), do not sleep
Line 1952: Idle DRX entry failed, so CPU clock MIN lock released
Line 1957: L1LC_DrxProcSleepStart
Line 1970: UNEXPECTED SLEEP_TIME(%d)!!!!!!!!!!!!!!!!! 
Line 1974: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 1990: L1LC_DrxProcSleepStart: Add 1ms sleep margin in 4G/4G case
Line 2020: [DRX] DRX_SLEEP_MARGIN = %d, gDrx_SysStableTime = %d, gDrxResync_cnt = %d, 4RX_MARGIN = %d, drx_T = %d
Line 2059: gL1LC_DrxControl.curSleepTime = %d, DRX_SLEEP_MARGIN = %d
Line 2080: [gL1LC_DrxControl.curSleepTime = %d, Lte_OHE.SleepTime = %d/%d]
Line 2120: [DRX] L1LC_DrxProcSleepReq ue_state(%d), sleep_ready(%d), curstate(%d)
Line 2140: [DRX] L1LC_DrxProcSleepReq state=%s
Line 2167: [DRX] UpdateRfCause to SysRead for SCG
Line 2176: [DRX] skip SI command: current(%d) sib_start(%d) sib_end(%d)
Line 2196: [DRX] Do not change gHalDrx_PagingState state when eDV is active
Line 2202: [DRX] Meas Done, Don't Sleep, gHalDrx_PagingState = DRX_MEAS_DONE
Line 2251: [DRX] PagingRcvIntr already set due to prepone. Skip L1LC_DrxSetPagingRcvIntrForMeas
Line 2314: [DRX] Meas Done, gHalDrx_PagingState (%s) 
Line 2320: [DRX] Meas Done, Abnormal Case(%d) : gHalDrx_PagingState = DRX_PAGING_INIT
Line 2485: Conn DRX spare time(%d) is longer than Conn DRX cycle(%d)!!!
Line 2494: Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Line 2499: need more Conn DRX spare time(%d), MinRequiredTime=%d, cgi_returnTime=%d
Line 2548: Change SleepTime : prev(%d), after(%d)!
Line 2560: remain time to paging(%d), MinRequiredTime(%d), ret_val(%d) 
Line 2678: LteMifFreq(%d) DrxLongSleepMargin(%d)
Line 2686: Conn DRX entry failed, so CPU clock MIN lock released
Line 2732: [DRX] DRX_SLEEP_MARGIN = %d, gDrx_SysStableTime = %d, DRX_TX_TIME_ALIGN = %d, gDrxResync_cnt = %d, 4RX_MARGIN = %d, gDrx_ScellMargin = %d
Line 2752: gL1LC_DrxControl.curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d) 
Line 2759: gL1LC_DrxControl.curSleepTime(%d) DRX_SLEEP_MARGIN(%d) DrxLongSleepMargin(%d) 
Line 2784: AFC hold mode...(short sleep) Sleep Pass...(afc_hold_mode_check:%d)(gHALSC_fast_srch_flag:%d)(gHALSC_fast_srch_offset:%d)
Line 2801: (L1LC_DrxProcConnShortSleepStart)(Sleep time is insufficient)(gL1LC_DrxControl.curSleepTime:%d gDrxShortStableTime(%d) DRX_SHORT_MODE_SLEEP_MARGIN(%d)
Line 2832: [DRX-MBSFN] L1LC_MbmsDrxCheck :: Mode (%s)  Start_Sfn = %d, Start_Tti = %d, End_sfn = %d, End_tti = %d
Line 2842: [DRX-MBSFN] mbsfn_sleep_time = %d, DRX_MARGIN = %d
Line 2867: Sleep time is insufficient : gDrxSleepTimeInTTI = %d
Line 2877: gL1LC_DrxControl.curSleepTime = %d, DRX_SLEEP_MARGIN = %d
Line 2887: [DRX-MBSFN] No Sleep for the whole DRX period
Line 2904: [DRX-MBSFN] Avoid Sleep Timer-1 Created = %d
Line 2946: [DRX-MBSFN] L1LC_DrxSleep,Sleep Mode = %s
Line 2963: [DRX] %s Soft SleepStart start!!!
Line 2966: [DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 2977: [DRX] Set Current ST%d DsdsWakeupIntrTmr: %d [100us]
Line 3004: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 3017: [DRX] %s Soft SleepStart start!!!
Line 3020: [DRX] set SW sleep Flag for RF
Line 3024: [DRX] %s Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 3034: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, Lte_OHE.SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
Line 3221: [NRDS] pend L1LC_DrxProcConnSleepReq - NrdsSleepState(%d), set IsLteSleepPended(%d)
Line 3237: L1LC_DrxProcConnSleepReq :: DSP Status bitmap(Rach/ULG/SRI/CR(%x) RTT/RTX/IAT/ODT(%x) Paging/DediRach(%x)) gRACHflag(%d)
Line 3253: [DRX] Meas Done, Don't Sleep, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DONE
Line 3275: [DRX] Meas Done, Abnormal Case(%d) : gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 3299: CGI Measure Start (Don't Sleep)
Line 3318: CGI Measure didn't Start (need more spare time)
Line 3363: (L1LC_DrxProcConnSleepReq)(shortmode insufficient time case)(gDrxShortModeFlag:%d shortsleepflag:%d)
Line 3367: (L1LC_DrxProcConnSleepReq)(gDrxShortModeFlag:%d shortsleepflag:%d)
Line 3384: [DRX] Meas Done, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DSP
Line 3395: IRAT CGI Measure Starts (LTE Modem remains sleep)
Line 3413: IRAT CGI Measure didn't Start (need more spare time)
Line 3433: [DRX] Meas Done, gHalDrx_ConnDrxState = DRX_CONN_MEAS_DONE, gHalDrx_SleepState = %d
Line 3438: [DRX] Don't Sleep, gHalDrx_ConnDrxState = %d, gHalDrx_SleepState = %d
Line 3488: (L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig setup)
Line 3493: (L1LC_ConnDrxUpdateDrxConfig)(CdrxConfig diable)
Line 3541: HalDrxUpdate is maintained
Line 3562: L1LC_DrxUpdateDrxNewConfig (%d)
Line 3566: L1LC_DrxUpdateDrxConfig is maintained (%d)
Line 3589: (L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
Line 3590: (L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
Line 3592: (L1LC_ConnDrxUpdateDrxConfig)(onDurationTimer:%d drxInactivityTimer:%d drxRetransmissionTimer:%d)
Line 3593: (L1LC_ConnDrxUpdateDrxConfig)(longDRXCycle:%d longDRXCycle_offset:%d shortDRXCycle:%d drxShortCycleTimer:%d)
Line 3628: L1LC_DrxConfig is Disabled
Line 3630: (L1LC_ConnDrxUpdateDrxConfig)(L1LC_DrxConfig is Disabled)
Line 3708: Diffent DRX !!!!!n PrevL1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d, nB:%d)
Line 3773: L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
Line 3775: L1LC_DrxUpdatePagingConfig(drx_T:%d, PF:%d, PO:%d)
Line 3794: L1LC_DrxSuspendReq
Line 3801: MTM calibration is already working
Line 3808: LTE is already in test mode
Line 3815: L1 is already suspend mode(%d)
Line 3819: L1 is already power down
Line 3826: [L4GDS]Other LTE stack is not inactive
Line 3853: [L1LC_DrxSuspendReq] Do not clear IRAT Signal as response from UMTS is awaited
Line 3873: [4GDS] Conn - Conn state is ended!!
Line 3969: Other LTE stack is actived(%d)
Line 4018: [LTE_L1LC] Do not set OheStackStaus this time due to NrDsState(%d)
Line 4087: L1LC_DrxResumeReq
Line 4103: [L1LC_DrxResumeReq] Do not clear IRAT Signal as response from UMTS is awaited
Line 4115: OtherST(%d) Active and CurrentST(%d) Resume-Req: L2BlockStatus -> FALSE!
Line 4142: [DRX] HW is not off actually
Line 4149: [DRX] gDrx_PowerOn_TimingLatch, Skip Modem/Dsp power on 
Line 4163: [DRX] gDrx_PowerOn_TimingLatch (Other ST: %d), Skip Modem/Dsp power on 
Line 4236: [DRX] Diff cellboundary is zero!
Line 4277: Paging Receive Intr is already set, Do not update again
Line 4315: Change SleepTime : prev(%d), after(%d)!
Line 4319: time_diff(%d)! IsConn(%d)
Line 4328: It seems that paging timing was passed already!
Line 4331: [Debug] Is_Drx_check_ind = %d
Line 4373: UNEXPECTED SLEEP_TIME(%d)!!!!!!!!!!!!!!!!! 
Line 4377: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 4413: [DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
Line 4415: [DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
Line 4421: [DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Line 4514: TimeToExpiry(%u, (100us)) AbsTimeout(%x) pal_uptime(%x)! TimerState(%d)
Line 4584: time_diff(%d, (100us))!
Line 4612: [4G_DRDS] SCG Paging Receive Intr is already set, Do not update again!
Line 4653: Change SleepTime : prev(%d), after(%d)!
Line 4657: time_diff(%d)!
Line 4691: UNEXPECTED SLEEP_TIME(%d)!!!!!!!!!!!!!!!!! 
Line 4695: L1LC_DrxUpdateLongDrxTime!!!!!!!!!!!!!!!!! 
Line 4724: [DRX] Remaining Time for PagingRcvIntr is too small. Set PagingRcvIntr 1ms later
Line 4727: [DRX] Prepone not possible!!paging_frame=%d(%d), curTimeSFN=%d(%d)
Line 4736: [DRX] paging_frame=%d, paging_offset=%d, curTimeSFN=%d(%d)
Line 4786: Remaining time for next paging occassion = %d
Line 4795: ALL MEAS cycle - Need more DRX spare time
Line 4822: [LTE_DSDS] HAL saved message [%d] is freed)
Line 4872: Current SFN and TTI = %d, Paging Frame and TTI = %d
