Line 838: HALDRX_DisablePagingIntr
Line 900: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 909: [DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
Line 917: [DRX] EnablePagingRcvIntr : PagingRcvIntrTime (%d us)
Line 923: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 973: [DRX] curTimeSFN=%d, curTimeTti=%d, curTimeOffset=%d)
Line 983: [DRX] remain time is zero!!! ---> invoke pagingrcvintr 2ms later!!
Line 992: [DRX] remaining time for SCG pagingrcvIntr (%d) > invalid threshold (%d)
Line 993: [DRX] Invalid remaining time(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
Line 999: [DRX] remaining time for SCG pagingrcvIntr (%d) > invalid threshold (%d)
Line 1000: [DRX] Invalid remaining time(%d)!!! ---> invoke pagingrcvintr 2ms later!!
Line 1010: [DRX] EnablePagingRcvIntrSCG : PagingRcvIntrTime (%d us)
Line 1016: [DRX] HALDRX_EnablePagingRcvIntr: PreponePagingRFReqTime(%d)
Line 1055: [DRX] DisablePagingRcvIntr, prepone(%d)
Line 1126: [DRX] Modem is off, so do not control CQI int regster
Line 1156: [DRX] Modem is off, so do not control CQI int regster
Line 1194: [DRX] ProcFreqErrIntr: FreqErrIntr Disable returns FALSE, Stop processing
Line 1206: ProcFreqErrIntr: diff(%d) freq_int_value(%d) gDrx_Pre_FreqIntVal(%d)
Line 1235: ProcFreqErrIntr: gDrx_Pre_FreqIntVal(%d),  gDrx_ChangeDrxCycle(%d), drx_T(%d) gDrxCycleChangeCnt(%d)
Line 1245: [DRX] ProcFreqErrIntr: gDrx_FreqIntVal(%d), FREQ_INT_VALUE(%d)
Line 1290: [DRX] ProcFreqErrIntr(freq_int_value:%d gSceTotalModemClk:%d)
Line 1317: [DRX] ProcSysValidIntr
Line 1395: Wakeup LISR Fn()
Line 1404: [NRDS] RfAvailForNr state but NR is during PAUSE. Set PauseFlag for LTE pause after Wakeup.
Line 1416: [DRX] Force Wakeup
Line 1420: [DRX] No SoC Warmup time
Line 1424: [DRX] wakeup from non-Hsleep
Line 1431: [DRX] Time diff(%d us), HAL_GetSlpCntValue(%d slp_clk), gsleepTime_inSlowClk(%d slp_clk), Soc Warmup time(%d us)
Line 1440: [DRX] Soc warmup finished too early. Keep sleep for (%d us)
Line 1447: [DRX] Soc warmup finished
Line 1460: [4G_DRDS] Skip SCG wakeup intr, make SCG 1. IsRfAvailable(%d) and 2. gDrx_HW_PowerOn_flag(%d)
Line 1466: [4G_DRDS] 4G_DRDS will be activated after PBCH decoding
Line 1479: [NRDS] set NrOnlyGranted(%d).
Line 1489: [NRDS] Other stack's IsLteWakeupPended(%d). Next Wakeup stack is other stack.
Line 1493: [NRDS] pend HALDRX_ProcWakeupIntr - NrdsSleepState(%d), set IsLteWakeupPended(%d)
Line 1513: [DRX] hold_time(%d)
Line 1527: [DRX] gL1LC_DsdsWakeupIntrTmr was expired
Line 1533: [DRX] Delay current stack wakeup procedure as its sleep is on-going
Line 1565: [DRX] ProcWakeupIntr: MIF INTR Status ON
Line 1569: [SC] LteMifFreq(%d) 
Line 1572: [SC] LteMifFreq(%d) 
Line 1596: [SLEEP] DisableDrxIntr: intr(2)
Line 1604: [DRX] Ignore ProcWakeupIntr as Suspend processing is in progress!!
Line 1623: [Debug] Is_Drx_check_ind = %d
Line 1631: [NRDS] set IsLteWakeupStarted(%d)
Line 1670: [NRDS] reset ProcWakeupByMsg(%d)
Line 1694: [DRX] ProcWakeupIntr: System Stable Start Time(%u)
Line 1734: [DRX] ProcReSyncIntr: sfn(%d), SWSFNload(%d)
Line 1763: [DRX] gDrxResync_cnt(%d)
Line 1786: [DRX] AFC/STR start(%d)
Line 1808: [DRX] System stable end time(%d), stable time diff(%d)
Line 1811: [DRX] System stable end time(%d), stable time diff(%d)
Line 1818: [DRX] stable_time_diff = %d, gDrx_SysStableTime = %d, gDrx_ScellMargin = %d, 4RX_Margin = %d
Line 1840: [DRX] CHECK!!! Over Stable Time Difference between Actual Elapsed Time and SW Set Time: %d
Line 1869: [DRX] CHECK!!! Over Stable Time Difference between Actual Elapsed Time and SW Set Time: %d
Line 2093: [PWR_OPT] LTERRM_MEASMODE_INTRA_MEAS is triggered at first paging !!!
Line 2098: [PWR_OPT] Resync: - HAL_SendL1lcMeasStart[%d]!!!
Line 2105: [PWR_OPT] !!! pNextMeasElem is NULL !!!
Line 2143: [NRDS] reset IsLteWakeupStarted [%d]
Line 2178: HALDRX_ProcMODEMsetting
Line 2207: LMAC Init
Line 2232: DSP setting
Line 2318: Update UL Timing at last paging interrupt. (ta_acc:%d)
Line 2337: End of %s
Line 2447: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d)
Line 2513: [DRX] Paging channel Rx
Line 2542: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 2606: [DRX] ProcPagingIntr(%d): sfn(%d), tti(%d), Expected sfn(%d), tti(%d)
Line 2611: [DRX] SFN is zero[%d,%d], Expected SFN_Tti[%d,%d], HWSFNload[%d], SWSFNload[%d]
Line 2616: [DRX] SFN is zero, Reinit due to abnormal
Line 2679: [4GDRDS] Skip pal_DrxPagingHCB 
Line 2733: [PWR_OPT] Paging: - PendingFromMeasReq[%d]!!!
Line 2738: [PWR_OPT] !!! pNextMeasElem is NULL !!!
Line 2749: [DRX] Paging channel Rx
Line 2752: [DRX] Paging channel Rx
Line 2771: Update UL Timing at last paging interrupt. (ta_acc:%d)
Line 2811: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 2900: [Debug] Is_Drx_check_ind = %d
Line 2934: [PWR_OPT] Paging: - IsMeasReqPending[%d] and measure triggered!!!
Line 2939: [PWR_OPT] Paging: - IsMeasReqPending is TRUE but measurements not found.
Line 2943: CONN_SLEEP_REQ is already triggered, don't request MEAS_SCHEDULE_IND
Line 2980: HALDRX_ProcPagingIntr
Line 3070: HALDRX_ProcDSDSIntrHisr gHALSC_dsdsIntrState(%d)
Line 3086: Unknown DSDS mode(%d)
Line 3116: HALDRX_ProcSCGDSDSIntrHisr gHALSC_dsdsIntrState(%d)
Line 3164: [DRX] HALDRX_ProcPagingRcvIntr, IsRfAvailable(%d) Preponed(%d)
Line 3169: [DRX] Preponed HALDRX_ProcPagingRcvIntr: sfn(%d), tti(%d), Preponed(%d)
Line 3234: [DRX] ProcPagingRcvIntr: sfn(%d), tti(%d)
Line 3248: [DRX] Saved AGC Index(%d, %d)
Line 3253: [DRX] Saved AGC Index(%d, %d)
Line 3306: [DRX] ProcSfnUpdateIntr
Line 3571: [DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
Line 3643: [DRX] Cancel Rvalue update!rtg counter did not start yet
Line 3662: [DRX] rtg_counter_start(%d) rtg_counter_end(%d) time_offset_str(%d)
Line 3668: [DRX] AA gDrx_CfoValue(%d), gDrx_FreqIntVal(%d), gDrxErrAccPeriod(%d), gSceTotalModemClk(%d)
Line 3691: (Abnormal R value) gSceTotalModemClk = %d, gDrx_CfoValue = %d
Line 3700: [DRX] BB gSceTotalModemClk(%d), gDrx_CfoValue(%d), gDrx_StrOffsetVal(%d), rvalue_filter_gain(%d), gDrx_rvalue_filter_gain_cnt(%d)
Line 3709: [DRX] CC gDrx_StrOffsetVal(%d), time_offset_str(%d), CFO_STR_OFFSET_LOOP_GAIN(%d)
Line 3721: [DRX] gSceTotalModemClk(%d), time_offset_str(%d), prev_sleepTimeInSlowClk(%d)
Line 3898: [Debug] Is_Drx_check_ind = %d
Line 3930: [Debug] Is_Drx_check_ind = %d
Line 3964: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 3973: [DRX] gL1LC_DrxControl.state = DRX_CLKEST
Line 3982: [DRX] gHalDrx_ConnDrxBlock is true
Line 3989: [DRX] ProcDrxConnSleepStartHisr: gHalDrx_ConnDrxState(%d)
Line 3997: [DRX] Don't Sleep before MEAS DONE, gHalDrx_ConnDrxState = DRX_CONN_DSP_DONE
Line 4007: [DRX, 4GDS] Don't Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX now(IsDuringGsmMeas:%d)
Line 4015: [DRX, 4GDS] Set measconfig as HALSC_MEAS_CONFIG_CONN_DRX
Line 4035: [DRX] Abnormal Case(%d) : gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 4046: [DRX] DSP done : gHalDrx_SleepState(%d)
Line 4152: [DRX] ProcDrxWakeupModemHisr is invoked(gDrx_PowerDown[%d][%d]
Line 4155: [DRX] Initialize Lte_OHE.SleepType to H_SLEEP
Line 4166: [DRX] HW is not off actually
Line 4168: [DRX] Set Lte_OHE.SleepType to S_SLEEP
Line 4178: [DRX] Check-Point-3 (Rat(%d)/ TimingLatch[%d][%d]
Line 4244: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d)
Line 4247: [DRX] ProcDrxWakeupDSPHisr: Modem Stable Time(%d)
Line 4336: [DRX] ProcDrxWakeupRF1Hisr: Wakeupinit Stable Time(%d)
Line 4339: [DRX] ProcDrxWakeupRF1Hisr: Wakeupinit Stable Time(%d)
Line 4380: [DRX] ProcDrxWakeupRF2Hisr
Line 4409: [DRX] ProcDrxWakeupRF3Hisr
Line 4437: [DRX] ProcDrxWakeupRF4Hisr
Line 4465: [DRX] ProcDrxWakeupRF5Hisr
Line 4469: [DRX] RF InitFromSleepIdle end
Line 4529: [DRX] ProcDrxWakeupInitHisr: DSP Stable Time(%d)
Line 4532: [DRX] ProcDrxWakeupInitHisr: DSP Stable Time(%d)
Line 4567: [DRX][PWR_OPT] RF adaptive ON/OFF enable
Line 4576: [DRX] before DrxSysValid, Saved AGC Index(%d, %d)
Line 4598: [DRX] RTG update start: sfn(%d), tti(%d), offset(%d)
Line 4645: [DRX] gSceTotalModemClk(%d): sleepCnt(%d), modemCnt(%d), sleepTime(%d, %d, %d), RC(0x%x)
Line 4647: [DRX] slp_ref_cnt(0x%x), xfr_ref_cnt(0x%x)
Line 4653: [DRX] Do not update RTG, because HW is not sleep actually!
Line 4659: [DRX] RTG update end: sfn(%d), tti(%d), offset(%d)
Line 4678: [DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
Line 4726: [DRX] SFN cal, Update and Interrupt Setting start gDrx_ARM_PD(%d)
Line 4775: [DRX] curTimeSFN(%d), curTimeTti(%d), reset_offset(%d)
Line 4776: [DRX] time_diff(%d) drx_wakeup_time_tti(%d) drx_wakeup_time_mclk(%d) drx_tti_mclk(%d) gDrx_WakeupTimeforUpdate(%d), gDrx_WakeupStartTime(%d), gDrx_WakeupEndTime(%d)
Line 4781: [DRX] RTG update Check curTimeTti(%d), reset_offset(%d), gDrx_WakeupTimeforUpdate(%d), Mclk(%d)
Line 4790: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 4795: [DRX] EnableSfnUpdateIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 4802: [DRX] SFN_LOAD_VALUE(%d), SWSFNload(%d)
Line 4869: [DRX] ProcDrxSysValidHisr: RF stable Time(%d)
Line 4872: [DRX] ProcDrxSysValidHisr: RF stable Time(%d)
Line 4888: [DRX] RTG is recovered!
Line 4904: [Debug] Is_Drx_check_ind = %d Is_Conn_Drx_Wakeup_onging = %d
Line 4913: [Debug] Is_Drx_check_ind = %d
Line 4940: [DRX] Diff cellboundary is zero!
Line 4986: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 5013: [DRX] SFN cal and Interrupt Setting end
Line 5019: [OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
Line 5032: [DRX][PWR_OPT] RF CC0 Rx path ON
Line 5037: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 5054: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 5067: [DRX] AGC gain recovery(%d, %d)
Line 5105: [DRX] (Adaptation): Changed to 4Rx for monitoring
Line 5118: [DRX] AGC start
Line 5123: [DRX] Resync Interrupt set
Line 5149: [DRX] EnableReSyncIntr: tti(%d), offset(%d), current_time(%d, %d, %d)
Line 5163: [DRX][PWR_OPT] Tigger intra-freq measure
Line 5169: [DRX] ProcDrxSysValidHisr: Sys Valid Time(%d)
Line 6015: [4G_DRDS] %s (eDV_Active: %d)
Line 6019: [4G_DRDS] path: %d
Line 6059: [DRX] Cellboundary(SCG: %d): %d, Otherstack(MCG): %d, Diff: %d, RxDelay: %d
Line 6084: [4G_DRDS] SCG: curTimeTti(%d), curTimeOffset(%d)
Line 6085: [4G_DRDS] SCG: time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
Line 6089: [DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
Line 6177: [DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
Line 6190: [DRX] RemainingTime to PagingRcvIntr(%d, %d, %d)
Line 6205: [DRX] paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), SFNload(%d)
Line 6206: [DRX] Invalid paging_frame(%d)!!! ---> Skip PagingRcvIntr Enable(%d)
Line 6277: [DRX] SCG paging_frame(%d), paging_offset(%d), curTimeSFN(%d, %d), HWSFNload(%d), SWSFNload(%d)
Line 6300: [DRX] SCG SI start SFN-TTI(%d, %d), SI End SFN-TTI(%d, %d)
Line 6305: [DRX] Skip setting Paging Rcv Intr and trigger Paging done from Last Paging Intr
Line 6365: [DRX] gDrx_SavedSFN(%d), gDrx_SavedTTI(%d), gDrx_SavedOffset(%d)
Line 6493: Set CheckWakeupAvailable timer (1ms)!!
Line 6523: Set CheckWakeupAvailable timer (1ms)!!
Line 6560: [DRX] ProcSfnUpdateHisr
Line 6566: [DRX] SFN_LOAD_VALUE(%d)
Line 6735: [DRX] ProcDrxPagingRcvHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
Line 6764: [DRX] ProcDrxPagingRcvSCGHisr: gHalDrx_SleepState(%d), gHalDrx_NonPaging(%d)
Line 6799: [DRX] Soc Warmup timer start(%d us)
Line 6803: [DRX] Soc Warmup timer can't start(%d us)
Line 6893: [DRX] Init
Line 6964: [DRX] SysStableTime(%d), WakeupSocTime(%d)
Line 6968: [DRX] SysStableTime(%d), WakeupSocTime(%d), gDrx_Debug_Level_delay(%d)
Line 6980: [DRX][PWR_OPT] RF adaptive ON/OFF disable
Line 7003: [DRX] StartSlowClkEst: freq_int_value(%d)
Line 7009: [DRX] StartSlowClkEst: 1st
Line 7011: [DRX] StartSlowClkEst: 2nd
Line 7013: [DRX] StartSlowClkEst: 3rd Drx_clk_est_temp(%d)
Line 7055: [DRX] StartSlowClkEstForCFO: ERR_ACC_PERIOD(%d)
Line 7101: [DRX] RF_PowerDown start,NASU_MODE_SELECT(%d) 
Line 7121: [DRX] RF ClearHpcmOwnMask in BplmnSrchStartLteActive(%d)
Line 7124: [DRX] set SW sleep Flag for RF
Line 7140: [DRX] RF_PowerDown end
Line 7143: [DRX] RF_PowerDown end
Line 7164: [DRX] RF_DSP_PowerDown start
Line 7178: [DRX] RF_DSP_PowerDown end
Line 7204: [DRX] InitFromSleepIdle start
Line 7210: [DRX] Skip RF init during 2G call suspend
Line 7222: [DRX] InitFromSleepIdle end
Line 7240: [DRX] WakeupSendIPCtoDSP
Line 7435: [DRX] IPC end
Line 7605: [DRX] WakeupSendIPCtoDSPforSCG
Line 7622: [4G_DRDS] SCG TDP state was not HW_IDLE @ DRDS-Activated(%d)
Line 7624: [4G_DRDS] MCG SetTdpState(CC%d): state(%d -> %d)
Line 7628: [4G_DRDS] disable Dynamic QS (4G_DRDS act)
Line 7662: [4G_DRDS]Add Scell: cid(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 7677: Instant SCell configuration&activation for 4G_DRDS SCG (TTI:%d)
Line 7686: [4G_DRDS] SetTdpState(SCG:CC0):state(%d->%d)
Line 7689: [4G_DRDS] SetTdpState(MCG:CC%d):state(%d->%d)
Line 7737: [DRX] IPC for SCG end
Line 7760: Start DrdsAbnormalCheckTmr (%d ms)
Line 7783: [EDRDS] Can't Add Scell due to CA combination is failed. So, eDRDS is available.
Line 7789: [4G_DRDS] set Int lock for Add Scell
Line 7803: [4G_DRDS]Add Scell: cid(%d), dl_earfcn(%d), ul_earfcn(%d), dl_bw(%d), ul_bw(%d)
Line 7807: [4G_DRDS] reset Int lock for Add Scell
Line 7830: [4G_DRDS] set Int lock for Remove Scell
Line 7837: [4G_DRDS] Remove Scell: cid(%d), dl_earfcn(%d)
Line 7847: [4G_DRDS] Num of Scell(CC%d): before(%d) => curr(%d)
Line 7857: [4G_DRDS] reset Int lock for Remove Scell
Line 7886: [4G_DRDS] Remove RFband of SCG from RFbandlist due to MIMO conflict
Line 7932: [DRX] Simulate gL1LC_DrxControl.sleepFlag = TRUE
Line 7946: HALDRX_CheckUpperLayerFlag(Idle DRX skip)(AlpssCfg.IdleDrx_en:%d gDrxEmm_Flag:%d gDrxEsm_Flag:%d gDrxRrc_Flag=%d gSecStateFlag:T%dR%d HALTX_SleepOkFlag:%d)
Line 7969: [DRX] PagingDone!!
Line 7972: [DRX] PagingDone!!
Line 7980: [DRX] L1LC_DrxProcSleepReq sleepState(%d)
Line 8003: [DRX] DRX_PAGING_INIT
Line 8009: [DRX] DRX_WAIT_MEAS_PAGING -> DRX_PAGING_DONE
Line 8018: [DRX] Paging/meas Done, Sleep start, DRX_WAIT_MEAS_PAGING
Line 8024: [DRX] Paging Done Meas Done, but didn't meet sleep condition, DRX_MEAS_DONE->DRX_PAGING_INIT
Line 8049: [DRX] Paging Done, Abnormal Case(%d) ->DRX_PAGING_INIT
Line 8172: [DRX] ResyncTime_SEF(MBSFN config): cinr(%d, %d), gDrxResync_cnt(%d)
Line 8176: [DRX] ResyncTime_SEF: cinr(%d, %d), gDrxResync_cnt(%d)
Line 8188: (HALDRX_ResyncTime_SEF)(change to 1)((%d->%d) CINR:%d(%d))
Line 8193: (HALDRX_ResyncTime_SEF)(change to 2)((%d->%d) CINR:%d(%d))
Line 8199: (HALDRX_ResyncTime_SEF)(change to 2 due to MBSFN)((%d->%d) CINR:%d(%d))
Line 8206: (HALDRX_ResyncTime_SEF)(change to 2 due to CDRX)((%d->%d) CINR:%d(%d))
Line 8263: [DRX] (RxAdaptation): SINR(%d, %d, %d, %d), rx_mode(%x -> %x)
Line 8274: [DRX] (RxAdaptation): Skip Rx adaptation due to good SINR(%d)
Line 8281: [DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d), Rx monitoring is triggered!
Line 8287: [DRX] (RxAdaptation): CycleCnt(%d), MonPeriod(%d)
Line 8313: [DRX] Sleep Time : ST%d (Previous %d [100us])
Line 8322: [DRX] Sleep Time : ST%d (Current %d [100us])
Line 8345: [DRX] ActiveStackID(%d), hal_sleepTime(%d), gDrx_PowerDown(%d) gDrx_GnssWakeupTime(%d)
Line 8372: [DRX] Sleep time is small hal_sleepTime : (%d)
Line 8377: [DRX] ActiveStackID(%d), Lte_OHE.SleepTime(%d), DRX_SLEEP_MARGIN+time_diff/100(%d)
Line 8408: [DRX] SleepAbort is already triggered
Line 8416: [DRX] SleepAbort will start after IRAT BPLMN Stop
Line 8460: [DRX] State(%d) Error in Abort
Line 8504: [DRX] Stop ST%d DsdsWakeupIntrTmr before starting it again!
Line 8507: [DRX] Set SleepAbortFlag as TRUE.
Line 8509: Set DSDSwakeupintr timer (1ms)!!
Line 8533: [DRX] Stop ST%d DsdsWakeupIntrTmr before processing HALDRX_ProcWakeupIntr!
Line 8536: [DRX] Set SleepAbortFlag as TRUE.
Line 8549: [DRX] SocWarmupTimer of ST%d is running! Set DsdsWakeupintr timer in %d us later
Line 8576: [DRX] SleepAbort is already tried
Line 8584: [DRX] SleepAbort is Failed (Modem is currently POWER ON)(%d, %d)
Line 8589: [DRX] Set SleepAbortFlag as TRUE.
Line 8603: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST: %d, %d, %d])
Line 8607: [DRX] SleepAbort is Failed (Minimun Sleep Abort Allowable Time[ST:%d, %d, %d])
Line 8624: [DRX] Set SleepAbortFlag as TRUE.
Line 8638: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 8643: [DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
Line 8651: [DRX] Set Other ST%d DsdsWakeupIntrTmr!
Line 8659: [DRX] Other stack already doing sleep abort!
Line 8662: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 8666: [DRX] Set Current ST%d DsdsWakeupIntrTmr!
Line 8678: [DRX] Stop ST%d DsdsWakeupIntrTmr before processing L1LC_ProcDsdsSWWakeupTimerExpired!
Line 8704: [DRX] SleepAbort (Early Wakeup Time is %d.%d ms)
Line 8774: [DRX] SleepAbort_nosync
Line 8799: [DRX] DisableIntr_Suspend
Line 8806: [DRX] Reset CFO flag as Interrupt is disabled!
Line 8845: [DRX] HALDRX_DisableIntr_RFRelease
Line 8849: HALDRX_DisableIntr_RFRelease: Modem is not power on
Line 8874: [DRX] HALDRX_DisableIntr_RFRelease for SCG
Line 8878: HALDRX_DisableIntr_RFRelease: Modem is not power on
Line 8902: [DRX] HALDRX_SleepAbortOfSuspendNormal
Line 8924: [DRX] SleepAbort_suspend
Line 8932: [DRX] Disable FreqErrIntr when suspend DRX_CLKEST!
Line 8938: [DRX] Reset CFO flag and disable FreqErrIntr when suspend CfoEnable!
Line 8971: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 8993: [DRX] Sleep Start Time : (Previous %d us) vs (Current %d us)
Line 8997: [DRX] Other ST(%d)'s remaining time is %d (100us)
Line 9003: [DRX] Stop Other ST%d DsdsWakeupIntrTmr!
Line 9013: [DRX] Set Other ST%d H/W Intr : %d Slp Cnt
Line 9025: [DRX] Do nothing!There is no enough sleep time! Other ST [%d]'s remaining sleep time is %d!
Line 9032: [DRX] Do nothing!Timer is already expired! Other ST [%d] is waiting for GRANT!
Line 9036: [LTE DS]Start RetryTimer(ST: %d, %d ms)!!
Line 9046: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 9058: [DRX] Stop Other ST%d DsdsWakeupIntrTmr!
Line 9064: [DRX] Add sleep Time (%d) for another ST: %d !
Line 9071: [DRX] Add Sleep Time is Failed (Minimun Sleep Abort Allowable Time[%d, %d])
Line 9080: [DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
Line 9087: [DRX] Do nothing!Waiting the expiry of DsdsWakeupIntrTmr (ST%d)
Line 9095: [DRX] Stop Current ST%d DsdsWakeupIntrTmr!
Line 9114: [DRX] DrxCheckInd(%d) Is_Conn_Drx_Wakeup_ongoing(%d). Update current stack's Pre CellBoundary first
Line 9152: [DRX] Change RTG for other STACK LTE
Line 9172: [DRX] Do nothing!Other STACK status is ACTIVE
Line 9181: [DRX] Do nothing!LTE of other STACK is turned on because of Latch!
Line 9265: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 9270: [DRX] SleepStart_A start!!! sfn(%d), tti(%d), offset(%d)
Line 9322: [DRX] SLP CNT Start sleepTime(%d), PowerDown(%d)
Line 9344: [DRX] gDrx_SavedSFN(%d) gDrx_SavedTTI(%d)
Line 9357: [DRX] sleep start!!! sleepTime[%d:%d], margin:%d(%d)
Line 9358: [DRX] SleepStart_A end
Line 9420: [DRX] gDrx_PowerDown[%d][%d]
Line 9474: [DRX] ST%d Modem/HAL Parameter Saving
Line 9540: [DRX] (Before %s sleep start) Saved AGC Index(%d, %d)
Line 9560: [DRX] Reset CFO flag as Interrupt is disabled!
Line 9580: [DRX] SetTdpState(CC0): state(%d -> %d)
Line 9586: [DRX] gL1LC_CheckLastPagingIntrTmr is running, but sleep procedure is started
Line 9594: [DRX] UeState(%d) First Sleep Start
Line 9668: [4G_DRDS] ST%d Modem/HAL Parameter Saving, SCG CC(%d)
Line 9673: [DRX] Cell ID(%d), DL BW (%d), UL BW (%d), UL CP TYPE (%d)
Line 9715: [DRX] Set Sleep
Line 9726: [DRX] Sleep Start Time : (Previous %d.%d) vs (Current %d.%d) [100us]
Line 9731: [DRX] ST%d DsdsWakeupIntr Timer is Running
Line 9737: [DRX] SleepTime : Current %d vs Other %d [100us]
Line 9754: [4G_DR_STAT] set conflict(%d) - IDLE/IDLE
Line 9763: [DRX] Current ST%d SleepTime preponed by %d [100us]
Line 9773: [DRX] Other ST%d SleepTime preponed to %d [100us], MCG-SCG swap
Line 9784: [4G_DR_STAT] set conflict(%d) - IDLE/IDLE
Line 9792: [DRX] Other ST%d SleepTime preponed by %d [100us]
Line 9803: [DRX] Current ST%d SleepTime preponed to %d [100us], MCG-SCG swap
Line 9809: [DRX] 4G_DRDS feasibility for IDLE-IDLE after wakeup(%d)
Line 9818: [DRX] Current ST%d SleepTime is Shorter
Line 9827: [DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
Line 9831: [DRX] Other ST%d SleepTime is Shorter
Line 9835: [PWR_OPT] Make Other ST%d SleepTime shorter (%d => %d)
Line 9842: [DRX] Stop Other ST%d DsdsWakeupIntrTmr
Line 9850: [DRX] Set Other ST%d H/W Intr : %d [Slp Cnt]
Line 9853: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, Lte_OHE.SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
Line 9859: [DRX] Current  ST%d Going to Sleep and Other ST%d wake timer expired 
Line 9863: [DRX] Set Current ST%d DsdsWakeupIntrTmr : %d, Lte_OHE.SleepTime: %d, gDrx_WakeupSocTime: %d [100us]
Line 9878: [SLEEP] SetSleepStart: sleep_time(%d)
Line 9883: [DRX] Set Current ST%d H/W Intr : %d [Slp Cnt]
Line 9896: [DRX][Single SIM] Set Current ST%d H/W Intr : %d [100us]
Line 9920: [DRX] Release Resource during sleep
Line 9942: [NRDS] NR Proc is Current Proc. No need to update or release RF.
Line 9946: [NRDS] NR Proc is not Current Proc. Need to update RF cause as NR Proc.
Line 9955: Early Pause Timer stop
Line 10017: [DRX] Sleep Abort - OTDOA Measurement Ongoing!!!
Line 10044: [DRX] %s Hard SleepStart start!!! sfn(%d), tti(%d), offset(%d)
Line 10047: [DRX] %s Hard SleepStart start!!! sfn(%d), tti(%d), offset(%d)
Line 10124: [LTE L1LC DSL1RC] HALDRX_SleepStart : CpuPowerDownHolding( 0 )
Line 10134: [DRX] gDrx_PowerDown(%d)
Line 10155: [DRX] %s Hard SleepStart end!!! sleepTime(%d, %d), margin(%d, %d, %d) WakeupSocTime(%d)
Line 10158: [DRX] %s Hard SleepStart end!!! sleepTime(%d, %d), margin(%d, %d, %d) WakeupSocTime(%d)
Line 10645: [DRX] ResetConnDrxParam
Line 10680: [DRX] PowerResetForReSync
Line 10712: [DRX]gDrx_ActiveRat_[0][1]=%d,%d (%d)
Line 10715: [DRX] Illegal Modem Access on POWER OFF (stackId: %d)
Line 10796: [DRX] HALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
Line 10816: [DRX] HALDRX_SetModemPowerOnFlag Stack-1[%d], Stack-2[%d]
Line 10834: [DRX] HALDRX_SetModemPowerOffFlag Stack-1[%d], Stack-2[%d]
Line 10889: [DRX] InitPowerUpModemHW start
Line 10895: [DRX] Skip Modem/Dsp power on
Line 10965: [DRX] InitPowerUpModemHW end
Line 10980: [DRX] PowerOnResume
Line 11010: [DRX] PowerDownSuspend
Line 11034: EPT time diff %d ms, IsEarlyPauseFlag
Line 11041: Before RF powerdown, check dualsim(%d), call(%d), rf(%d), earlypause(%d), otherstack_rf(%d)
Line 11049: [DRX] Avoid RF power down.
Line 11076: [DRX] Modem is already off
Line 11117: [DRX] PowerOnIratMeas(%d) start
Line 11121: [DRX] PowerOnIratMeas: LTE power domain ON
Line 11177: [DRX] PowerOnIratMeas end
Line 11180: [DRX] LTE_InitLatchPowerUp
Line 11211: [DRX] PowerDownIratMeas(%d)
Line 11228: [DRX] Modem is already off, so do not power down
Line 11339: [SHORTMODE] wakeup_time(%d, %d), gDrxShortStableTime(%d)
Line 11355: [SHORTMODE] GAP: sfn(%d) tti(%d) length(%d)
Line 11364: [SHORTMODE] GAP: sfn(%d) tti(%d) length(%d) is too short
Line 11461: [DRX] CC0 SLO disable on CGI, scell_config_info CC(%d) dl_earfcn(%d)
Line 11474: [DRX] StoreSccInfo: mode(%d), scc_cnt(%d)
Line 11520: [DRX] StoreSCGInfo: mode(%d)
Line 11565: [DRX] CC0 SLO recovery on CGI, scell_config_info CC(%d) rf_band(%d) dl_earfcn(%d) dl_bw(%d)
Line 11736: [DRX] RestoreSccInfo: mode(%d), scc_cnt(%d)
Line 11762: [DRX] UpdateIdleRxMode: mode(%d), 1RxOffFlag(%d, %d)
Line 11776: [DRX] UpdateIdleRxMode: RxAdaptMode(%x)
Line 11845: [DRX] DrxConfirmInd: current_sfn_tti(%d), sleep_time_tti(%d), cell_group(%d)
Line 11848: [DRX] DrxConfirmInd: current_sfn_tti(%d), sleep_time_tti(%d), cell_group(%d)
Line 11860: [DRX] DrxConfirmInd_SCG: current_sfn_tti(%d), sleep_time_tti(%d), cell_group(%d)
Line 11863: [DRX] DrxConfirmInd_SCG: current_sfn_tti(%d), sleep_time_tti(%d), cell_group(%d)
Line 11888: [DRX] Sleep Calculation Considering Next PRS Occassion :: CurSfnTti(%d), PrsOcc(%d), PrsSfnOffset(%d)
Line 11894: [DRX] Do not sleep, RSTD measurement needs to happen, sleep_time_tti(%d), prsSfnOffset(%d)
Line 11902: [DRX] Sleep Time Modified to Wakeup early to measure RSTD. Updated Sleep time(%d)
Line 11924: [4G_DRDS] DrxConfirmInd: 4G_DRDS ongoing, Set CdrxRecoveryFlag(%d) Lte_OHE.eDV_Active(%d) Lte_OHE.eDV_AvailableforEPT(%d) 
Line 11930: [DRX][PWR_OPT] (SCG) DrxConfirmInd: No P-RNTI, trigger sleep!!!
Line 11935: [DRX][PWR_OPT] (SCG) Last paging is not invoked yet!!!
Line 11946: [DRX] Saved SCG AGC Index(%d, %d)
Line 11958: [DRX] DrxConfirmInd: wrong DRX state(%d) gDrxRachStateFlag(%d) gHalDrx_State(%d)
Line 11964: [DRX][PWR_OPT] DrxConfirmInd: No P-RNTI, trigger sleep!!!
Line 11968: [EDV] DrxConfirmInd: EDV ongoing
Line 11974: [DRX][PWR_OPT] Last paging is not invoked yet!!!
Line 11988: [DRX] Saved AGC Index(%d, %d)
Line 11995: [DRX] DrxConfirmInd: gL1LC_DRXinSibFlag(%d)
Line 12002: [DRX] Saved AGC Index(%d, %d)
Line 12010: [DRX][PWR_OPT] DrxConfirmInd: UE state(%d) wrong sleep time(%d)
Line 12016: [DRX] Hand-over cell change is in progress, do not CDRX
Line 12035: [DRX] DrxConfirmInd: wrong UE state(%d)
Line 12254: [DRX] gDrx_GnssWakeupTime(%d) curtime(%d) remaintime(%d)
Line 12262: [DRX] gDrx_GnssWakeupTime is short
Line 12298: [DRX] gsleepTime_inSlowClk(%d) current_sleep_cnt(%d) remaintime(%d)
Line 12386: [DRX] CheckDRXinSIB (%d)
Line 12414: 4Rx mode case!
Line 12426: Abnormal case!! Modem Power [%d], RF Available[%d]
Line 12433: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl(on/off:%d, backup:%d, sfn(%d), tti(%d), offset(%d))
Line 12479: [DRX][PWR_OPT] Skip HALDRX_ProcDrxRfRxPathOnOffCtrl: Force wakeup(%d) / RACH(%d) case
Line 12486: [DRX][PWR_OPT] Skip HALDRX_ProcDrxRfRxPathOnOffCtrl: SIB DRX(%d)
Line 12497: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl: Store CC0 system parameter
Line 12513: [DRX][PWR_OPT] HALDRX_ProcDrxRfRxPathOnOffCtrl: CC#%d saved AGC(%d, %d)
Line 12597: [4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
Line 12640: [NRDS] NR is alive. state can be CDRX_IDLE
Line 12652: [4G_DRDS] 4G_DRDS state Check done: Possible state: %d
Line 12681: [4G_DRDS] UE_STATE [cur(%d)other(%d)], OHE_STATE [cur(%d)other(%d)]
Line 12725: [4G_DRDS] HALDRX_PerformEdvStateCheckBeforeSleep : SleepTime [cur(%d)other(%d)conflict(%d)], DRX_SLEEP_MARGIN[cur:(%d),other:(%d)]
Line 12751: [4G_DRDS] 4G_DRDS state Check done(before sleep) : Possible state: %d
Line 12797: [4G_DRDS] 4G_DRDS band check status(%d)
Line 12837: [4G_DRDS] DR_BE_REMOVED state! 4G_DRDS is impossible
Line 12843: [4G_DRDS] ConflictwithMIMO! 4G_DRDS is impossible
Line 12850: [4G_DRDS] DRDS_ENABLE Registry is FALSE
Line 12856: [4G_DRDS] Stack is inactive, UE states of Current stack (%d), Other Stack (%d)
Line 12862: [4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
Line 12868: [4G_DRDS] Num of RF Band List is already over 5. cannot activate DRDS.(num_rf_band = %d)
Line 12874: [4G_DRDS] Target Stack waits GRANT. if IsWaitResponse TRUE, SCG cannot proceed meas. Return here.
Line 12903: [4G_DRDS] HALDRX_CheckEdvStackOrder : CC#0, Source Band[Stack:%d](%d), earfcn(%d)
Line 12915: [4G_DRDS] HALDRX_CheckEdvStackOrder : Scc#%d, Source Band[Stack:%d](%d), earfcn(%d)
Line 12920: [NRDS] debuging : gL1lc_DsdsDB.IsEndc  = %d
Line 12930: [NRDS] HALDRX_CheckEdvStackOrder : CC#%d, Source Band[Stack:%d](%d) for NR
Line 12945: [4G_DRDS] HALDRX_CheckEdvStackOrder : Target Band[Stack:%d](%d), earfcn(%d), MCG_NumCA_Source(%d), Lte_OHE.MCG_NumCA_Target(%d)
Line 12985: [4G_DRDS] special case, agc diff check result (%d)
Line 12991: [4G_DRDS] Same band, Check eDRDS
Line 13007: [4G_DRDS] HALDRX_CheckEdvStackOrder: eDRDS -> DRDS case
Line 13055: [4G_DRDS] HALDRX_CheckEdvStackOrder : status (%d), special_case(%d), special case MCG_CC(%d)
Line 13066: [4G_DRDS] HALDRX_CheckEdvStackOrder : %d. However, don't eDRDS because SCG is in weak signal area
Line 13073: [EDRDS] Can't eDRDS due to eDV_Enable = %d
Line 13082: [EDRDS] Can't eDRDS due to MIMO (TM: %d, IsEndc: %d, ARFC: %d)
Line 13091: [EDRDS] Can't eDRDS due to 4Rx MIMO!!(CC%d)
Line 13113: [4G_DRDS] HALDRX_CheckEdvStackOrder: DRDS -> eDRDS case
Line 13145: [EDRDS] can't special case due to AGC diff.
Line 13146: [EDRDS] Can't eDRDS due to eDV_Enable = %d
Line 13159: [DRDS] num of scell = %d, NrBandNum = %d, dr_added_check = %d, total = %d, cannot do DRDS
Line 13197: [4G_DRDS] 4G_DRDS is feasible for state(%d)
Line 13206: [4G_DRDS] 4G_DRDS is not feasible
Line 13245: [4G_DRDS] RemainPreponePagingTime [%u] MBMSEndTime [%u]
Line 13250: [LTE L1LC DSL1RC] Cell change done for BPLMN return. SINR : %d
Line 13264: [LTE L1LC DSL1RC] 4G_DRDS will be trigger after PBCH decoding! PBCH Mode[%u] IsBplmnReturn[%u]
Line 13301: [4G_DRDS] HALDRX_InitEDV
Line 13312: [4G_DRDS] SCG_CC resereved status updated to FALSE
Line 13337: [4G_DRDS] %s
Line 13353: [4G_DRDS] Start pending procedure on other stack is case of suspend !!!
Line 13363: [4G_DRDS] ResetEDV: - PendingFromMeasReq[%d]!!!
Line 13368: pNextMeasElem is NULL !!!
Line 13396: [LTE L1LC DSL1RC] Saved RRM Message, process that first
Line 13427: [4G_DRDS] ResetEDV: - PendingFromMeasReq[%d]!!!
Line 13432: [4G_DRDS] !!! pNextMeasElem is NULL !!!
Line 13457: [4G_DRDS] %s
Line 13463: [4G_DRDS] Register state [ST1: %d][ST2: %d]
Line 13484: [4G_DRDS] Other stack is inactive, UE state of other stack (%d)
Line 13491: [4G_DRDS] Stack is in suspend state
Line 13499: [4G_DRDS] Waiting Resume_Ind from SRL1RC [%d][%d]
Line 13505: [4G_DRDS] eDV_Available (%d)
Line 13509: [4G_DRDS] DRDS unavailable : reset EptCheckForARFC(%d)
Line 13518: [4G_DR_STAT] Add only LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
Line 13520: [4G_DR_STAT] reset conflict(%d)
Line 13525: [4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), conflict(%d), eDV_state(%d)
Line 13532: [4G_DR_STAT] Add only LteDrdsTrialCnt(%d), eDV_state(%d)
Line 13535: [4G_DR_STAT] Not Add LteDrdsTrialCnt(%d), eDV_state(%d)
Line 13539: [4G_DRDS] OHE Status : CurrentStack (%d) OtherStack (%d)
Line 13540: [4G_DRDS] UE State : CurrentStack (%d) OtherStack (%d)
Line 13544: [4G_DRDS] 4G_DRDS is already activated (%d)
Line 13555: [4G_DRDS] On Other stack MBMS is on-going, MBMS stack cannot be SCG
Line 13564: [4G_DRDS] On Current stack MBMS is on-going, MBMS stack cannot be SCG
Line 13574: [4G_DRDS] Do not activate 4G_DRDS as Other stack is in sleep state(%d) or in measurement(curmode:%d iratcurmode:%d) state
Line 13581: [4G_DRDS] 4G_DRDS is not activated while sleep abort case (ST%d: %d, ST%d: %d), HALDRX_GetState(%d), HALDRX_GetOtherStackState(%d)
Line 13588: [4G_DRDS] 4G_DRDS is not activated. IsForBplmn(%d), IsForResume(%d)
Line 13595: [4G_DRDS] 4G_DRDS is not activated. OtherStack(%d) sets PauseFlag(%d)
Line 13602: [4G_DRDS] 4G_DRDS is not activated. IsDuringScellConfig
Line 13609: [4G_DRDS] 4G_DRDS is not activated. OtherStackID is in L2X BPLMN state 
Line 13616: [4G_DRDS] 4G_DRDS is not activated. RACH is ongoing [%d][%d][%d][%d] 
Line 13623: [4G_DRDS] 4G_DRDS is not activated. VoLTE is ongoing [current: %d][other: %d]
Line 13630: [4G_DRDS] 4G_DRDS is not activated. Current stack is in paused state
Line 13637: [4G_DRDS] 4G_DRDS is not activated. IsHoSync [%d][%d] 
Line 13651: [4G_DRDS] other stack's sleep time(%d)
Line 13666: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 13679: [Debug] Is_Drx_check_ind = %d
Line 13681: [EnableDsdsMask] -> 0x%x (0x%x)
Line 13699: [4G_DRDS] ACTIVATED (IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 13709: [4G_DRDS] Can not enable 4G_DRDS because NoOfScell = (%d) ConnDR State (%d)
Line 13719: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 13735: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 13748: [Debug] Is_Drx_check_ind = %d
Line 13750: [EnableDsdsMask] -> 0x%x (0x%x)
Line 13759: [4G_DRDS] ACTIVATED (CDRX-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 13778: [4G_DRDS] Can not enable 4G_DRDS(Conn -Idle) as RFband was not added in RFbandlist
Line 13788: [4G_DRDS] Can not enable 4G_DRDS because NoOfScell = (%d) ConnDR State (%d)
Line 13796: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 13807: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 13818: [EDRDS] edrds_prev_rxmode[CC%d] = (%d)
Line 13833: [4G_DRDS] EPT was checked before, Set AIT to SCG : EptCheckForARFC(%d)
Line 13839: [4G_DRDS] ARFC(or Signalling) case, Set AIT to MCG : EptCheckForARFC(%d)
Line 13846: Do not enable 4G_DRDS(Active-Idle-Idle) as BPLMN on-going(%d, %d)
Line 13871: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 13883: [Debug] Is_Drx_check_ind = %d
Line 13885: [EnableDsdsMask] -> 0x%x (0x%x)
Line 13898: [4G_DRDS] ACTIVATED (CONN-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 13903: [4G_DRDS] ACTIVATED (ACTIVE IDLE-IDLE [AIT stack:%d]) :: Mcg/Scg(St%d/St%d), Lte_OHE.SCG_CC(%d), [4G_DR_STAT] ActiveCnt(%d), TrialCnt(%d) ===
Line 13910: [4G_DRDS] ======= 4G_DRDS CANNOT BE ACTIVATED =======
Line 13931: [4G_DRDS] Stop SCG Stack(%d)'s Retry Timer !
Line 13936: [LTE L1LC DSL1RC] 4G_DRDS is activated hence free HAL_L1LC_WAKEUP_START_IND for SCG stack
Line 13967: HALDRX_ProcEdvDeactive
Line 13976: ST%d Is_Drx_check_ind = FALSE. So, last paging is first
Line 14001: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 14013: [4G_DRDS] Modem is in power-on state
Line 14038: Remove Scell: cid(%d), dl_earfcn(%d)
Line 14047: Num of Scell(CC%d): before(%d) => curr(%d)
Line 14060: [4G_DRDS] Modem is in power-down state. Clear Scell config
Line 14076: Remove Scell: cid(%d), dl_earfcn(%d)
Line 14085: Num of Scell(CC%d): before(%d) => curr(%d)
Line 14120: [4G_DRDS] HALDRX_ClearEDVForMCG, EDV special case (YES) (%d) reset (%d)
Line 14138: [4G_DRDS] restore Dynamic QS (4G_DRDS deact)
Line 14139: [4G_DRDS] DEACTIVATED From DR_State(%d) ===
Line 14142: Stop DrdsAbnormalCheckTmr
Line 14262: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 14336: [OHE]ST-%d(%d) => OHE_StackStatus[0][1] (%d, %d)
Line 14390: [4G_DRDS] Proc HALDRX_CheckCdrxIdleEdvAvailable eDV_AvailableforEPT(%d)
Line 14418: [4G_DRDS](conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 14422: [4G_DRDS] 4G_DRDS (Cdrx - Idle) is not available. Go for 4G_DRDS (Conn - Idle)
Line 14429: [NRDS] NR alive and other stack will wakeup soon. Go for 4G_DRDS (Conn - Idle)
Line 14435: [4G_DRDS] (No conflict) Current ST%d SleepTime(CONN) = %d . Other ST%d(IDLE) SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 14466: [4G_DRDS] Proc HALDRX_CheckConnEdvAvailable
Line 14483: [NRDS] set NRDS conflict case - CDRX/IDLE
Line 14493: [4G_DRDS] Available2(CASE1)
Line 14494: [4G_DRDS] Current IDLE ST%d SleepTime = %d . Other CONN ST%d() SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
Line 14498: [4G_DRDS] Current ST%d SleepTime(IDLE) is Shorter but make Other ST%d(CONN) SleepTime shorter
Line 14501: [DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d 
Line 14511: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 14514: [4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 14524: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 14529: [4G_DRDS] Available2(CASE2)
Line 14530: [4G_DRDS] Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 14555: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 14569: [NRDS] set NRDS debug - (%d),(%d),(%d),(%d)
Line 14583: [NRDS] set NRDS conflict case - CDRX/IDLE
Line 14593: [4G_DRDS] Available2(CASE3)
Line 14594: [4G_DRDS] Current CONN ST%d SleepTime = %d . Other IDLE ST%d SleepTime = %d, current-other = %d, SLEEP_MARGIN+80 = %d
Line 14598: [4G_DRDS] Other ST%d SleepTime(IDLE) is Shorter but make Current ST%d(CONN) SleepTime shorter
Line 14607: [4G_DRDS] Set Current ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 14610: [4G_DRDS] Set Other ST%d DsdsWakeupIntrTmr : %d [100us]
Line 14619: [4G_DR_STAT] set conflict(%d) - CDRX/IDLE
Line 14625: [4G_DRDS] Available2(CASE4)
Line 14626: [4G_DRDS] Current IDLE ST%d SleepTime = %d . Other CONN ST%d SleepTime = %d, other-current = %d, SLEEP_MARGIN+80 = %d
Line 14646: [DRX] Stop Other ST%d DsdsWakeupIntrTmr and enable H/W wakeupintr for other ST%d 
Line 14656: [4G_DRDS] Set Other ST%d H/W Intr : %d [Slp Cnt], %d [100us]
Line 14659: [4G_DRDS] Set Current ST%d DsdsWakeupIntrTmr : %d [100us]
Line 14671: [4G_DRDS] Clear Lte_OHE dm values
Line 14725: BPLMN or resetection on-going. gDrx_BplmnStarted: %d, IsCellResel: %d
Line 14733: Reinit DRX on-going. gL1LC_PbchMode: %d, gL1LC_ReInitDrxTriggered: %d
Line 14739: BPLMN Return on-going. gL1lc_DsdsDB.IsBplmnReturn: %d, gL1LC_PbchMode: %d
Line 14768: HALDRX_GetWakeupInitType - CurrntSt: NrDsState(%d) / OtherSt(%d): IsDrxSleep(%d) IsEndc(%d) NrDsState(%d) / NR: NrSetupInfo(%d) NsleepState(%d)
