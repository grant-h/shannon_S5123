Line 921: Change cell ID : %d -> %d
Line 930: Change Downlink BW : %d -> %d
Line 949: [SC] SetDlSystemInfo: mode(%d), [CID, BW, CP]([%d, %d, %d] -> [%d, %d, %d])
Line 992: [HALSC_EnableSearchMask] -> 0x%x (mask:0x%x)
Line 1012: [HALSC_DisableSearchMask] -> 0x%x (mask:0x%x)
Line 1033: [HALSC_EnableMeasMask] -> 0x%x (mask:0x%x)
Line 1053: [HALSC_DisableMeasMask] -> 0x%x (mask:0x%x)
Line 1071: [NRDS] Clear Endc search-Meas Info
Line 1332: HALSC_SetTdpState Modem(skip)
Line 1344: assert condition : Current state is wrong
Line 1352: HALSC_SetTdpState Modem(skip), RF unavailable: %d
Line 1380: [SC] SetTdpState(CC%d): state(%d -> %d)
Line 1422: [SC] SetRxMode(CC%d): mode(%x)
Line 1505: [SC] SetFePathIdx(CC%d): Not supported path(%d)
Line 1510: [SC] SetFePathIdx(CC%d): path(%d), idx(%d)
Line 2640: [SC] ActiveRat = (%d)
Line 2671: [SC] IratFreqChangeInGap: Earfcn(%d), AGC(%d, %d), BW(%d)
Line 2691: [SC] IratInitFaInfo: AGC(%d, %d)
Line 2732: [SC] IratStoreFaInfo: AGC(%d, %d)
Line 2769: [SC] IratConfigGapInIdle: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
Line 2773: [SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
Line 2774: [SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
Line 2775: [SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
Line 2847: [SC] IratConfigGapInSuspend: gDrx_ActiveRat(%d), PD_LTE_STATUS(%d)
Line 2851: [SC] (IRAT config) sfn(%d), tti(%d), offset(%d)
Line 2852: [SC] (IRAT gap_start) sfn(%d), tti(%d), offset(%d)
Line 2853: [SC] (IRAT gap_end) sfn(%d), tti(%d), offset(%d)
Line 2862: [SC] (current_time) sfn(%d) tti(%d) offset(%d)
Line 2863: [SC] (gap_pre) sfn(%d) tti(%d) offset(%d)
Line 2907: [SC] gHALSC_Srch_Meas_isvalid(%d)
Line 2989: [SC] IratConfigGapInConn
Line 3011: [SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 3088: [SC] IratConfigUmtsStartSignal: sfn(%d), tti(%d), offset(%d)
Line 3118: [SC] IratClearUmtsStartSignal: umtsStartSig(%d)
Line 3151: [SC] IratInitLteRF: earfcn(%d), rf_band(%d)
Line 3204: [SC] IratInitLteRFInGap: earfcn(%d), rf_band(%d), pdm(%d)
Line 3233: [SC] InitSync
Line 3271: [SC] SetServingCell: CID(%d), CP(%d), POS(%d)
Line 3416: [SC] MIB false alarm : All Zero
Line 3460: [SC] Invalid SHM.cnt(%d)
Line 3487: [SC] MIB false alarm : Ant num error(0x%x)
Line 3499: [SC] MIB false alarm : BW ERROR(%d)
Line 3538: [SC] Serv(CC%d) MIB(Previous Information): dl_bw[%d], phich_duration[%d], phich_resource[%d], enb_ant_num[%d]
Line 3595: [SC] Serv(CC%d) MIB: bch_dec_idx[%d], pbch_trial_cnt[%d], idx+cnt[%d], is_sys_info_changed[%d]
Line 3606: [SC] Serv(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 3618: [%4d, %3d] MasterInformationBlock : dl-SystemBandwidth %d, phich-Duration %d, phich-Resource %d, systemFrameNumber 0x%02X, ant_num: %d
Line 3671: [SC] HeNB(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 3703: [SC] ITF(CC%d) MIB: DL_BW[%d], PHICH.Resource[%d], PHICH.Duration[%d], NG[%d], SFN[%d], AntNum[%d]
Line 3745: [SC] D2D(CC%d) MIB: DL_BW[%d], SFN[%d], TTI[%d], SA[%d], IC[%d], RES[%d]
Line 3750: [SC] Invalid PBCH mode(%d)
Line 3988: [SC] Measure(CC%d): rx_mode(%x), bw(%d), agc_gain(%d, %d, %d, %d)
Line 4003: [SC] [%4d] (%3d) M0 %6d %6d %6d %6d %6d
Line 4004: [SC] [%4d] (%3d) M1 %6d %6d %6d %6d %6d
Line 4005: [SC] [%4d] (%3d) M2 %6d %6d %6d %6d %6d
Line 4006: [SC] [%4d] (%3d) M3 %6d %6d %6d %6d %6d
Line 4035: [SC] [%4d] (%3d) MEASURE RESULT VALID (%d)
Line 4040: [SC] MEASURE RESULT VALID CNT (%d -> %d)
Line 4051: PDM value periodic update(CONN)
Line 4105: [SC] HAL_GetIqcCoefValue(%d): TAP(0), I(%x), Q(%x)
Line 4106: [SC] HAL_GetIqcCoefValue(%d): TAP(1), I(%x), Q(%x)
Line 4107: [SC] HAL_GetIqcCoefValue(%d): TAP(2), I(%x), Q(%x)
Line 4231: HALSC_ProcSync10msHisr(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
Line 4235: HALSC_ProcSync10msHisr(on holding)(LABS(afc_angle):%d cnt:%d afc_pdm:%d)
Line 4241: HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
Line 4247: HALSC_ProcSync10msHisr(After AFC HOLD STOP afc_pdm: %d)
Line 4248: [SC] (After AFC HOLD STOP afc_pdm: %d)
Line 4267: HALSC_ProcSync10msHisr(current_time.sfn:%d current_time.tti:%d)
Line 4268: HALSC_ProcSync10msHisr(AFC HOLD)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 4269: [SC] (afc_pdm: %d HALSC_FirstAfcPdmStored: %d)
Line 4276: HALSC_ProcSync10msHisr(No Action due to any srchoffset but no pdmoffset) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 4285: HALSC_ProcSync10msHisr(Start FastSrch) afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 4291: HALSC_ProcSync10msHisr(NO ACT due to ongoing FS)afc_pdm: %d HALSC_FirstAfcPdmStored: %d HALSC_AfcPdmStored: %d)
Line 4381: [MTM] gHALSC_AgcIndexForMtm8960(%d, %d)
Line 4385: [MTM] ProcSync10msIntr: Abnormal AGC Index(%d, %d)
Line 4403: [MTM] gHALSC_AgcIndexForMtm8960[%d][%d] = %d
Line 4408: [MTM] 8960_Average_AGC(%d, %d)
Line 4412: [MTM] rsrp_offset(%d, %d), dB_diff(%d)
Line 4470: [SC] Run CL-AIT in weak signal! CA_AITen(%d)
Line 4888: [SC] (SFN:%d) Out Sync Rate = %d (str:%d, thr:%d) rsrp(%d) rsrq(%d)
Line 4893: [SC] SINR(%d, %d)
Line 4900: [SC] In Sync Rate = %d (str:%d, thr:%d)
Line 4914: [SC] Out Sync Rate = %d (str:%d, thr:%d)
Line 4916: Out Sync Rate = %d (str:%d, thr:%d)
Line 5054: [SC] SetTdpBeforeInterHOStep1: AGC OFF(%d, %d), AFC HOLD(%d)
Line 5056: [SetTdpBeforeInterHOStep1] AGC OFF(%d %d), AFC_HOLD(%d)
Line 5085: [SC] SetTdpBeforeInterHOStep2: AGC Index = (%d, %d)
Line 5126: [SC] SetTdpBeforeBlindHoSrch: Saved AFC value(%d)
Line 5204: [SC] SetTdpBeforeIntraHO: Saved AFC value(%d)
Line 5206: [SetTdpBeforeIntraHO] HALSC_SavedAfcValue:%d
Line 5246: [SC] SetTdpAfterHOStep1: AGC gain(%d, %d)
Line 5304: [SC] SetTdpAfterHOStep2: Restored AFC value(%d)
Line 5306: [SetTdpAfterHOStep2] Use HALSC_AfcPdmStored : %d
Line 5324: [SC] SetTdpAfterHOStep3
Line 5403: [SC] SetTdpBeforeBplmnScanStep2(InterANR): AGC(TD-ASYNC) ON
Line 5407: [SC] SetTdpBeforeBplmnScanStep2: AGC(TD-ASYNC) ON
Line 5580: [SC] ProcGapAHisr: GapClkControlTimer(%d)
Line 5586: [SC] LteMifFreq(%d) 
Line 5604: [SC] ProcGapAHisr: Unknown GAP state(%d), mode(%d, %d)
Line 5617: [SC] ProcGapAHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 5643: [SC] ProcGapBHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 5651: [SC] InterFreq/IRAT GapA Time: %d [us], Inner Gap Time : %d [us], GapB Time : %d [us]
Line 5724: [SC] --- Default Interrupt
Line 5740: [SC] ProcGapAHisr: GapClkControlTimer(%d)
Line 5750: [SC] --- Default DMTC Interrupt
Line 5760: [SC] ProcGapBHisr: Unknown GAP state(%d), mode(%d, %d)
Line 5850: [SC] LteMifFreq(%d) 
Line 5929: [SC] ProcGapCHisr: Unknown GAP state(%d), mode(%d, %d)
Line 5942: [SC] ProcGapCHisr(end): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 6026: [SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
Line 6030: [SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), gap_sfn_tti(%d) GapPeriod(%d)
Line 6063: [SC] UE state (%d), Gap Start Offset %d ms
Line 6070: [SC] UE state (%d), Gap Start Offset %d ms
Line 6084: [SC] GetNextGapBoundary(%d): cur_sfn_tti(%d), gap_sfn_tti(%d)
Line 6119: [SC] CheckNextGapBoundary: Gap is disabled
Line 6139: [SC] CheckNextGapBoundary(GAP,DMTC both configured margin + 4ms)(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 6143: [SC] CheckNextGapBoundary(diffRTG:%d): Gap timing: sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 6174: [SC] GetNextDmtcBoundary(%d): cur_sfn_tti(%d), dmtc_sfn_tti(%d)
Line 6179: [SC] GetNextGapBoundary(%d): Invalid!!! cur_sfn_tti(%d), dmtc_sfn_tti(%d) DmtcPeriod(%d)
Line 6221: [SC] ConfigGapInterrupt: earfcn(%d), bw(%d)
Line 6230: [SC] GapLevelState(%d), AgcOvr(%d, %d), PschPwr(%d, %d, %d), SrchResultValid(%d)
Line 6234: assert condition : fa_info is NULL
Line 6262: [SC] UE state (%d), Gap Start Offset %d ms
Line 6268: [SC] UE state (%d), Gap Start Offset %d ms
Line 6284: [SC] Gap timing(%d): sfn(%d), tti(%d), current time: sfn(%d), tti(%d), offset(%d)
Line 6342: Turn On Rx Path Timer started with [%u]us!!!
Line 6391: ConfigDefaultGapInterrupt
Line 6445: ConfigDefaultDmtcInterrupt
Line 6463: MeasDurationInd - SGapB enabled (sfn:%d, tti%d)
Line 6522: [SC] Measurement Scheduling (meas_enable:%d, meas_period:%d, gap_enable:%d, dmtc_enable:%d)
Line 6539: [SC] GAP Scheduling Start, sfn = %d, tti = %d
Line 6550: [SC] GAP Scheduling Stop, sfn = %d, tti = %d
Line 6561: [SC] DMTC Scheduling Start, sfn = %d, tti = %d
Line 6570: [SC] DMTC Scheduling Stop, sfn = %d, tti = %d
Line 6596: [SC] GAP Scheduling Stop
Line 6644: [SC] Measurement Scheduling Stop
Line 6648: [SC] GAP Scheduling Stop
Line 6652: [SC] Dmtc Scheduling Stop
Line 6679: [SC] Do not disable Connected Schedule Interrupt
Line 6885: [SC] SetAntennaMode: op_mode(%d), rx_mode(%x -> %x)
Line 6940: [SC] ConfigAntenna: Not supported antenna config(%d)
Line 7105: [SC] InitforDRX
Line 7167: [SC] ConfigRTG: time_offset(%d), RTG(%d, %d, %d, %d)
Line 7203: [SC] ConfigRTGforIRAT: meas_bw(%d), cell_id(%d), time_offset(%d)
Line 7392: [SC] SwReset
Line 7419: [SC] ReInitSync !!!
Line 7421: ReInitSync
Line 7496: [SC] FaSelectReady: Invalid FA selection state(%d)
Line 7525: [SC] EnableSync: mode(%d), earfcn(%d)
Line 7528: [SC] EnableSync: mode(%d), earfcn(%d)
Line 7909: [SC] Invalid CC Idx for SCG stack (%d)
Line 7925: [SC] DRDS_DeepSrch should be done only for SCG stackID
Line 8074: [SC] EnablePbch: cc(%d), mode(%d)
Line 8146: [SC] DisablePbch: cc(%d), mode(%d)
Line 8170: [SC] EnableMeas: Invalid measure cnt(%d)
Line 8176: [SC] EnableMeas: Invalid cc(%d)
Line 8183: [SC] RSTD: PRS Measurement Ongoing, Delay CRS Measurement Request
Line 8209: [SC] DMTC EnableMeas(CC%d): start(%d), end(%d), bw(%d), dmtc_config(%d)!
Line 8297: [SC] EnableMeas(CC%d): mode(%d), cnt(%d), serv_bw(%d)!
Line 8306: [SC] EnableMeas(CC%d): mode(%d), cnt(%d), serv_bw(%d)!
Line 8358: [SC] DisableMeas
Line 8545: [DSDS] Modem is power down state, DsdsConnScheduleIntr handling is abnormal
Line 8549: [DSDS] Conn Schedule Interrupt [%d]
Line 8563: [DSDS] Conn Schedule Interrupt Invaild input
Line 8971: [DSDS] Do not disable GAP Intr as RF is with other stack(or X2L irat meas on other stack)
Line 9006: RF not available hence do not disable interrupt of other stack
Line 9010: Force disable Interrupt!! because RF release or pause
Line 9032: Force disable Interrupt SCG!!
Line 9262: [SC] InitialSyncDone
Line 9289: HALSC_HoldTdpBlockDsdsPause
Line 9323: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d) 
Line 9355: HALSC_HoldTdpBlockDsdsPauseSCG
Line 9406: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d) AGC_MODE(%d) 
Line 9439: UE in DRX Sleep. Skipping TDP restore!!!
Line 9494: [DRX] [Before AGC start] Turned on Rx diversity paths according to the current Rx mode(%x)
Line 9499: [DRX] (Adaptation): Changed to 4Rx for monitoring
Line 9531: [DRX] AGC gain recovery(%d, %d)
Line 9544: [SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d) AGC MODE(%d)
Line 9606: [SC] HoldTdpBlock: PDM(%d), AGC(%d, %d)
Line 9645: [PWR_OPT] Skip TDP enable!!!
Line 9685: [SC] RestoreTdpBlock: UeState(%d), PDM(%d), AGC(%d, %d)
Line 9701: [SC] RestoreLteCommonBlockAfterUmtsCgiAcq: start
Line 9718: [SC] RestoreLteCommonBlockAfterUmtsCgiAcq: finish
Line 9896: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gDrxShortModeFlag == TRUE)
Line 9905: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(gHALSC_IdleGapOnGoing == TRUE)
Line 9915: [SC] ProcSync10msIntr: Skip Activating pal_Sync10msHCB HISR(IsBeforeResync == TRUE)
Line 10007: [SC] ProcConnScheduleIntr: Invalid state(%d, %d)
Line 10050: [SC] Ignore ProcConnScheduleIntr: meas_mode(HALSC_MEAS_CONFIG_CONN_DRX) GapStartFlag(%d)
Line 10080: [SC] ProcConnScheduleIntr: effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 10093: [SC] ProcConnScheduleIntr: New GapStartSfn(%d), effective_ready_sfn(%d)
Line 10126: [SC] ProcConnScheduleIntr(DMTC): effective_ready_sfn(%d), current_time.sfn(%d)tti(%d)
Line 10139: [SC] ProcConnScheduleIntr: New DmtcStartSfn(%d), effective_ready_sfn(%d)
Line 10154: [SC] (Scheduling request, DMTC configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 10167: [SC] (Scheduling request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 10182: [SC] (RSTD Preponed Meas Schedule request, GAP configured: %d) sfn = %d, subframe num = %d, offset = %d
Line 10193: [SC] (Scheduling request) sfn = %d, subframe num = %d, offset = %d
Line 10254: [SC] ProcSGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 10312: [SC] ProcSGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 10372: [SC] ProcSGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 10430: [SC] ProcHGapAIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 10493: [SC] ProcHGapBIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 10550: [SC] ProcHGapCIntr(start): sfn(%d), tti(%d), offset(%d), mode(%d, %d)
Line 10707: [SC] ProcSysTimeCommonIntr: status(0x%x)
Line 10792: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 10793: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 10794: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 10795: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 10825: [SC] [%d]SFN[%d], Cell ID[%d], CP Type[%d] UL BW[%d] Position[%d] 
Line 10864: [SC] HALSC_UpdateAfcPdmBySrchFO: HALSC_AfcPdmSrchFO(%d, %dHz) HALSC_AfcPdmStored(%d) HALSC_AfcPdmCal(%d)
Line 10899: HALSC_ResetAfcPdmValue(use cal data due to PowerON)(HALSC_AfcPdmStored:%d)
Line 10905: HALSC_ResetAfcPdmValue(return due to Modem PD)(HALSC_AfcPdmStored:%d)
Line 10914: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10933: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmSrchFO)(HALSC_AfcPdmSrchFO:%d(%dHz) HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10941: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmCal)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10949: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmDefault)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10958: HALSC_ResetAfcPdmValue(use 4G CAL DATA)(4G:%d HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10967: HALSC_ResetAfcPdmValue(use default due to large pdm offset)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10974: HALSC_ResetAfcPdmValue(use HALSC_AfcPdmStored)(HALSC_AfcPdmStored:%d HALSC_AfcPdmDefault:%d HALSC_AfcPdmCal:%d(%d))
Line 10980: HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
Line 10983: HALSC_ResetAfcPdmValue(find Y value)(HALSC_AfcPdmStored:%d afc_pdm:%d pdm_offset[%d]:%d, gL1LC_pdm_control_value:%d)
Line 11144: HALSC_StoreAfcDefaultPdmValue(2G Cal update due to AFC HOLD)(HALSC_AfcPdmDefault:%d )
Line 11165: HALSC_StoreAfcDefaultPdmValue(2G Cal update due to limit)(HALSC_AfcPdmDefault:%d )
Line 11171: HALSC_StoreAfcDefaultPdmValue(normal update)(HALSC_AfcPdmDefault:%d )
Line 11277: HALSC_StoreAfcPdmValue(Not update SW PDM due to AFC HOLD)(current_AfcPdm:%d)
Line 11286: HALSC_StoreAfcPdmValue(force_update)(HALSC_AfcPdmStored:%d )
Line 11297: HALSC_StoreAfcPdmValue(due to limitation)(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 11304: Store HALSC_AfcPdmStored(%d)(%d) : %d
Line 11311: Not Store HALSC_AfcPdmStored During BPLMN or CGI: %d, PREV:%d (%d)
Line 11402: HALSC_GetAfcPdmValue(Not get SW PDM due to AFC HOLD)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 11417: HALSC_GetAfcPdmValue(limit due to large offset(afc_pdm:%d HALSC_AfcPdmStored:%d LABS(afc_angle):%d)
Line 11422: HALSC_GetAfcPdmValue(get PDM)(get afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 11454: [SC] GetAfcPdmValue: afc_pdm(%d), HALSC_AfcPdmStored(%d)
Line 11484: HALSC_UpdateAfcPdmValueInFlash(update Y value)(HALSC_AfcPdmStored:%d)
Line 11543: HALSC_ConversionFrom2GCalValue(cal_voltage:%d afcPdmValue:%d Cal_slope:%d Cal_offset:%d range_idx:%d)
Line 11544: HALSC_ConversionFrom2GCalValue(recal_AFC_DAC:%d cal_voltage:%d DAC_slope:%d DAC_offset:%d range2_idx:%d)
Line 11549: HALSC_ConversionFrom2GCalValue(Use 2G cal recal_AFC_DAC:%d)
Line 11597: [SC] GetAfcPdmValueInFlash: AFC CAL DATA(%d)
Line 11599: Get HALSC_AfcPdmStored From CAL DATA: %d
Line 11626: HALSC_CheckAfcBypassmode(AFC HOLD STOP)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 11630: HALSC_CheckAfcBypassmode(normal status)(afc_pdm:%d HALSC_AfcPdmStored:%d)
Line 12246: [SC] SINR: CC0(%3d, %3d), CC1(%3d, %3d)
Line 12256: [SC] SINR: CC2(%3d, %3d), CC3(%3d, %3d)
Line 12263: [SC] SINR: CC4(%3d, %3d), CC5(%3d, %3d)
Line 12282: [SC] SINR: CC6(%3d, %3d), CC7(%3d, %3d), CC8(%3d, %3d)
Line 12291: [SC] SINR: CC9(%3d, %3d), CC10(%3d, %3d), CC11(%3d, %3d)
Line 12406: [SC] STR: %4d %6d (InSyncRate:%3d, OutSyncRate:%3d)
Line 12415: [SC] [%d]STR: %4d %6d
Line 12468: [SC] STR(offset): CC0(%d, %d), CC1(%d, %d), RND(%03x)
Line 12477: [SC] STR(power): CC0(%d, %d), CC1(%d, %d), RMS(%06x)
Line 12489: [SC] STR(offset): CC2(%d, %d), CC3(%d, %d) RND(%03x)
Line 12498: [SC] STR(power): CC2(%d, %d), CC3(%d, %d), RMS(%06x)
Line 12507: [SC] STR(offset): CC4(%d, %d), CC5(%d, %d), RND(%03x)
Line 12516: [SC] STR(power): CC4(%d, %d), CC5(%d, %d), RMS(%06x)
Line 12544: [SC] STR(offset): CC6(%d, %d), CC7(%d, %d), CC8(%d, %d), RND(%03x)
Line 12556: [SC] STR(power): CC6(%d, %d), CC7(%d, %d), CC8(%d, %d), RMS(%06x)
Line 12568: [SC] STR(offset): CC9(%d, %d), CC10(%d, %d), CC11(%d, %d), RND(%03x)
Line 12580: [SC] STR(power): CC9(%d, %d), CC10(%d, %d), CC11(%d, %d), RMS(%06x)
Line 12655: [SC] AFC: PDM(%4d), ANGLE(CC0:%d, CC1:%d)
Line 12665: [SC] AFC: ANGLE(CC2:%d, CC3:%d, CC4:%d, CC5:%d)
Line 12683: [SC] AFC: ANGLE(CC6:%d, CC7:%d, CC8:%d, CC9:%d, CC10:%d, CC11:%d)
Line 12752: [PHY] STAT-ERR(id,val): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 12755: [PHY] STAT(mcs/rb/grant): %d, %d, %d, %d, %d, %d, %d
Line 12758: [PHY] STAT(rank4/256q/layer): %d, %d, %d, %d, %d, %d, %d
Line 12761: [PHY] STAT-HARQ(diffTbs/maxRetx/a2n): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 12764: [PHY] STAT-TX(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 12767: [PHY] STAT-CYCLE: 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 12770: [PHY] STAT-CCH(): 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x
Line 12773: [PHY] STAT-DEMOD(dse/dop): %d, %d, %d, %d, %d, %d, %d
Line 12830: [SC] SetMeasInfoUpdate: Invalid meas mode(%d)
Line 12846: [SC] SetMeasInfoUpdate: Not found available CC for earfcn(%d)
Line 12940: [SC] SetMeasInfoUpdate(csi-rs): csi_rs_id(%d), scrambling_id(%d), resource_config(%d), subframe_offset(%d)
Line 12973: [SC] SetMeasInfoUpdate: earfcn(%d), cell_info(%d, %d, %d), cc(%d), frame_pos(%d), period(%d)
Line 13051: [SC] NgapDurationStart(%d): AGC serving(%d, %d) -> target(%d, %d)
Line 13149: [SC] NgapDurationEnd(%d): AGC target(%d, %d) -> serving(%d, %d)
Line 13175: [SC] --- IRAT(LTE Sync) Start Interrupt
Line 13182: [SC] --- IRAT(LTE Meas) Start Interrupt
Line 13189: [SC] --- IRAT(LTE Sync GAP) Start Interrupt
Line 13204: [SC] --- IRAT(LTE Meas GAP) Start Interrupt
Line 13219: [SC] --- UMTS Sync/Meas Start Interrupt
Line 13228: [SC] --- TDSCDMA Sync/Meas Start Interrupt
Line 13237: [SC] --- GSM Sync/Meas Start Interrupt
Line 13244: [SC] --- UMTS SI ACQUISITION Start Interrupt
Line 13253: [SC] --- CDMA Meas Start Interrupt
Line 13261: [SC] --- Invalid GAP Start Interrupt
Line 13279: [SC] --- IRAT(LTE Sync) End Interrupt
Line 13285: [SC] --- IRAT(LTE Meas) End Interrupt
Line 13289: [SC] --- IRAT(LTE Sync GAP) End Interrupt
Line 13301: [SC] --- IRAT(LTE Meas GAP) End Interrupt
Line 13318: [SC] --- UMTS Sync/Meas End Interrupt
Line 13332: [SC] --- TDSCDMA Sync/Meas End Interrupt
Line 13346: [SC] --- GSM Sync/Meas End Interrupt
Line 13360: [SC] --- UMTS SI ACQUISITION End Interrupt
Line 13376: [SC] --- CDMA Meas End Interrupt
Line 13390: [SC] --- Invalid GAP End Interrupt
Line 13452: [SC] not update the agc because next measure elem are exist(%d , %d)
Line 13469: [SC] MEAS AGC: GAIN(%d, %d) -> (%d, %d), dBPow(%d, %d)
Line 13561: [SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d), pos(%d, %d, %d)
Line 13579: [SC] DMTC AGC0[0-5]: %02x %02x %02x %02x %02x %02x
Line 13580: [SC] DMTC AGC1[0-5]: %02x %02x %02x %02x %02x %02x
Line 13622: [SC] SRCH AGC0[0-5]: %08x %08x %08x %08x %08x %08x
Line 13623: [SC] SRCH AGC1[0-5]: %08x %08x %08x %08x %08x %08x
Line 13627: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 13628: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 13629: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 13630: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 13688: [SC] SetAgcGainUpdateForMeas: pos_diff(%d), start_time(%d, %d), margin(%d), intr(%d, %d, %d)
Line 13735: [SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(TRUE), AGC(%d, %d)->(%d, %d)
Line 13740: [SC] CheckGapSrchResultValid: EARFCN(%d), AgcValidCheck(FALSE), AGC(%d, %d)->(%d, %d)
Line 13810: [SC] SetSFN: sfn(%d)
Line 13873: [SC] ProcPbchDecIntr: Unknown interrupt!!!
Line 13950: [SC] ProcMeasIntr!
Line 14124: Remaining time until Gap start (%ums)
Line 14158: [SC] HALSC_GetGapEndRemainingTtiTime : gap state(%d) remaining_time(%d)
Line 14213: [SC] HALSC_IratLteTimingDifferenceRtg : startRtgUnit(%d) endRtgUnit(%d)
Line 14466: HALSC_IratCdmaTimingMoveByRtg : start is NULL
Line 14471: (HALSC_IratCdmaTimingMoveByRtg) systemTime clock(High: 0x%x  Low: 0x%x)
Line 14593: calculated sfn(%d), tti(%d), offset(%d)
Line 14849: [SC] IratGetLatchInfo: SFN(%d), TTI(%d), OFFSET(%d)
Line 14923: [SC] IRAT Timing Update: newSFN(%d), Count(%d), deltaRtg(%d)
Line 14924: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 14925: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 14926: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 14932: [SC] IRAT Timing(CDMA): CDMASystemTime(High: 0x%x  Low: 0x%x)P(High: 0x%x  Low: 0x%x)Diff(%d)
Line 14979: [SC] Post IRAT Reference Time(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 14980: [SC] IRAT LTE Side Latch Reference Timing Update: deltaRtg(%d)
Line 14981: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 14987: [SC] Post IRAT Reference Time(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 14988: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 14994: [SC] Post IRAT Reference Time(GSM): frameNumber(%d), Qb(%d)
Line 14995: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 15003: [SC] Post IRAT Reference Time(CDMA: RAT %d): systemTime(High: 0x%x  Low: 0x%x)
Line 15004: [SC] IRAT Timing(CDMA: RAT %d): systemTime(High: 0x%x  Low: 0x%x)
Line 15061: [SC] IRAT Timing Change: Count(%d), deltaRtg(%d)
Line 15062: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 15063: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 15064: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 15065: [SC] IRAT Timing(CDMA): CDMASystemTime(High: 0x%x  Low: 0x%x)
Line 15094: [SC] Error sfn_gap(%d) tti_gap(%d), 
Line 15119: HALSC_CalDiffFL1RcvAndCdmaEndWindow : sfn_gap(%d), tti_gap(%d), bRefer_Next_Sfn(%d)
Line 15185: [SC] Error timeDiff(<=0): %d, 
Line 15253: [SC] abnormal bRefer_Next_Sfn : %d, 
Line 15267: [SC] HALSC_IratCdmaRefTimingUpdate: gSiWindowEnd_Info.sfn(%d), gSiWindowEnd_Info.tti(%d), gL1SiRcv_Info.sfn(%d), gL1SiRcv_Info.tti(%d), gL1SiRcv_Info.offset(%d)
Line 15269: [SC] cdmaSysTime(High: 0x%x  Low: 0x%x)
Line 15270: [SC] IRAT Timing(CDMA): Ref CDMASystemTime(High: 0x%x  Low: 0x%x)
Line 15272: [SC] updateCnt(%d), deltaRtg(%d)
Line 15273: [SC] IRAT Timing(LTE): SFN(%d), TTI(%d), OFFSET(%d)
Line 15274: [SC] IRAT Timing(UMTS): SFN(%d), SLOT(%d), CHIP(%d)
Line 15275: [SC] IRAT Timing(GSM): frameNumber(%d), Qb(%d)
Line 15439: [SC] MonitorTest: Current TDP state[%s]
Line 15443: [SC] MonitorTest: Invalid TDP state[%x]
Line 15478:  PaPb_update: %d, gPaPb_Control_dB: %d, gRSRP_Control_dB : %d
Line 15559: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 15599: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 15631: [SC] UpdateAgcRmsFromPaPb: Invalid PA, PB value(%d, %d)
Line 15640: [SC] Pa: %d, Pb : %d
Line 15641: [SC] Pa_dB: %d, Pb_dB : %d
Line 15642: [SC] Rho_a_rx: %d, Rho_b_rx : %d
Line 15645:  Pa: %d, Pb : %d, EnbAntNum : %d
Line 15646:  Pa_dB: %d, Pb_dB : %d
Line 15647:  Rho_a_rx: %d, Rho_b_rx : %d
Line 15722: HALSC_CheckSpiForAgc(%d, %d)
Line 15729: Please Check spi
Line 15805: [SC] SetSyncMode(%d -> %d)
Line 15839: [SC] SetMeasMode(%d -> %d)
Line 15890: [SC] SRCH AGC0[0-4]: %08x %08x %08x %08x %08x
Line 15891: [SC] SRCH AGC1[0-4]: %08x %08x %08x %08x %08x
Line 15892: [SC] SRCH AGC0[5-9]: %08x %08x %08x %08x %08x
Line 15893: [SC] SRCH AGC1[5-9]: %08x %08x %08x %08x %08x
Line 15930: [SC] gInit_agc_gain(%d)(%d) max_pos_tt(%d)
Line 15962: [SC] GetCellSearchResult: Activate CC index(%d) Cid(%d) Candi_id(%d)
Line 15967: [SC] GetCellSearchResult: Activate cell search done cc(%d)(%d) candi(%d)
Line 15983: [SC] GetCellSearchResult: DRS Position Calculate is Wrong DMTC(%d) CUR(%d)
Line 16012: [SC] GetCellSearchResult: PSSS is not valid!!! num_candi(%d -> %d)
Line 16042: [SC] GetCellSearchResult: PSS is not valid!!! num_candi(%d -> %d)
Line 16103: [SC] SRCH AGC: GAIN(%d, %d) -> (%d, %d)
Line 16165: [SC] SetMeasInputList: Not supported CC index(%d), earfcn(%d)
Line 16216: [SC] rsrp_temp_offset(%d), measBitShift(%d)
Line 16286: [SC] Not supported CC index(%d)
Line 16342: [SC] Not supported CC index(%d)
Line 16647: [SC] SetPCellInfo: [%4d] Cell ID[%d] CP[%d] POS[%d] RSRP[%d]
Line 16665: [SC] HALSC_UeState Change (%s) -> (%s)
Line 16757: [SC] Previous MeasConfig(%d), New MeasConfig(%d)
Line 16975: [RSTD] Remove Abrupt Fap: fapAvg[%d], fapMedian[%d], fapMin[%d] fapMax[%d] fapWinMin[%d] fapWinMax[%d]
Line 16988: [RSTD] Remove Abrupt Fap: Discard TTI[%d], Fap[%d]
Line 17050: [RSTD] Eliminate Invalid Fap: FAP1[THR:%d, Fap:%d Peak:%d], FAP2[THR:%d, Fap:%d Peak:%d]
Line 17097: ----------------------------------RSTD THR TEST-----------------------------------
Line 17158: [RSTD] PRS BW:%d, Discard the TTI[0] Results, bitmap[0x%X], prsTti[%d], start_tti[%d], tti_idx[%d], numFapDiscarded[%d]
Line 17181: [RSTD] prsTti[%d] Outside Gap Boundary[%d to %d], numFapDiscarded[%d]
Line 17188: [RSTD] CELL ID[%d] THR TEST/CELL/TTI[%03d] : MAX_VAL[%d] > THR[%d], MAX_IDX[%d], FAP20/FAP10[%d] FAP[%d]
Line 17191: [RSTD] FAP10[%d] FAP11[%d] FAP20[%d] FAP21[%d]
Line 17227: -----------------------------------------------------------------------------------
Line 17263: [RSTD] EnableRstdScheduleIntr: state(%d) sfn(%d), tti(%d), offset(%d)
Line 17331: [RSTD] ProcRstdScheduleIntr: sfn(%d), tti(%d), offset(%d)
Line 17365: [RSTD] EnableRstdDoneIntr
Line 17435: [RSTD] MEASUREMENT DONE INTERRUPT - CURRENT SFN [%d] TTI [%d] OFFSET[%d]
Line 17472: [RSTD] ProcRstdScheduleHisr: state(%d) sfn(%d), tti(%d), offset(%d)
Line 17497: [RSTD] ProcRstdScheduleHisr: Invalid RSTD state
Line 17552: [RSTD] ProcRstdMeasureHisr: sfn(%d), tti(%d), offset(%d)
Line 17557: [SC] RSTD: PRS Measurement Completed, Re-Enable CRS Measurement Request
Line 17608: [RSTD] Reference Cell FAP Update with NEW Results - OLD[Fap_Results = %d, peak_value = %d] --> NEW[Fap_Results = %d, peak_value = %d]
Line 17620: [RSTD] Reference Cell FAP Keep OLD Results - OLD[Fap_Results = %d, peak_value = %d] , NEW[Fap_Results = %d, peak_value = %d]
Line 17643: [RSTD] Reference FAP: Total[%d], CurFap[%d], numSample[%d], peak_value[%d]
Line 17651: [RSTD] Serving Index[%d] REF_CELL_FAP[%d] CELL0_FAP[%d], CELL1_FAP[%d], CELL2_FAP[%d], CELL3_FAP[%d]
Line 17688: [RSTD] RSTD0::[%d], RSTD1::[%d], RSTD2::[%d], RSTD3::[%d]
Line 17690: -----------------------------------------------------------------------------------
Line 17719: [RSTD] HAL Schedule State Changed [%d -> %d]
Line 17764: [RSTD] RstdConfigPRS: CC%d: EN[%d] PRS START TTI[%d] PRS SIZE [%d] PRS BW [%d]
Line 17825: [RSTD] StopRstdMeasure
Line 17973: [RSTD] Best Rx: SINR1[%d, 0x%X], SINR2[%d,  0x%X]
Line 18139: [RSTD] DSP Config - cell_idx[%d], CC/CP/ANT/NPRS[%04d], PrsStartTti[%d], Offset[%d], rxfDelay[%d], BitMap[0x%X],fft_bw[%d]
Line 18147: [RSTD] DSP DeConfig(coliding Cell) - cell_idx[%d], CC/CP/ANT/NPRS[%04d], PrsStartTti[%d], Offset[%d], rxfDelay[%d], BitMap[0x%X],fft_bw[%d]
Line 18164: [RSTD] DSP FFT Config: Cell Cnt[%d] CC[%d], Duplex[%d], Num Rx[%d], Rx Bitmap[0x%X]
Line 18176: [SC] RSTD: PRS Measurement Starting, Disable CRS Measurement Request
Line 18257: [SC] ConfigAgapInterrupt: state(%d)
Line 18339: [SC] HALSC_ConfigAgapInterrupt: current Hw Time sfn[%d], tti[%d] offset[%d]!
Line 18340: [SC] HALSC_ConfigAgapInterrupt: GAP_SET configured at sfn[%d], tti[%d]! phich_ng:%d phich_duration:%d 
Line 18370: [SC] UpdateAgapInterrupt: state(%d)
Line 18430: [SC] UpdateAgapInterrupt: current Hw Time sfn[%d], tti[%d] offset[%d]!
Line 18431: [SC] UpdateAgapInterrupt: GAP_SET configured at sfn[%d], tti[%d]!
Line 18453: [SC] ConfigAgapMibDec: cell_id(%d), frame_position(%d)
Line 18506: [SC] ConfigAgapSibDec: cell_id(%d), bw(%d), frame_position(%d)
Line 18544: [SC] HALSC_ConfigAgap:  Error! Agap already active!
Line 18551: [SC] HALSC_ConfigAgap: Target Cell info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
Line 18552: [SC] HALSC_ConfigAgap: Serving Cell Info: Cell_id [%d] Earfcn [%d], cp_type[%d], frame_Pos[%d]
Line 18612: [SC] DisableAgap
Line 18658: [SC] StopAgap
Line 18774: [SC] HALSC_AgapDurationStart: Enable HeNB MIB Decoding
Line 18783: [SC] HALSC_AgapDurationStart: Enable HeNB SIB1 Decoding
Line 18861: [SC] HALSC_AgapDurationEnd
Line 18912: [A-GAP] Timer expired! in dec_mode(%d): count(%d)
Line 18940: [SC] HENB SIB-1 Enabled
Line 18957: [SC] HENB SIB-1 Disabled
Line 19180: [SC] CC%d: earfcn(%d), resv/type(%02d), pair_cc(%02x), tdp_state(%d), pair_num/rf_path/rx_mode(%x), slo_pair(%x)
Line 19183: Abnormal dmxr_freq_value!! [SC] CC%d: pair_num(%d), dmxr_freq_value(%d)
Line 19243: [SC][SEARCH] CC%d: earfcn(%d), resv/type(%02d), pair_cc(%02x), tdp_state(%d), pair_num/rf_path/rx_mode(%x), slo_pair(%x)
Line 19319: [ConfigSingleLO]SetTdpState(CC%d):state(%d->%d)
Line 19397: [SC] ConfigSingleLO: Not found available CC for earfcn(%d)
Line 19690: [SC] ConfigSingleLO(CC%d %d): overlap_space(%d), bw_rate(%d), rf_earfcn(%d), rf_bw(%d)
Line 19714: [SC] ConfigSingleLO(CC%d): Unknown command(%d)
Line 19728: [SC] ConfigSingleLO(CC%d): cmd(%d), slo0(%d, %d), slo1(%d, %d), rf(%d)
Line 19784: [SC] ReleaseCaSingleLO(CC%d): slo_pair_num(%d)
Line 19837: [ConfigCaSingleLO]SetTdpState(CC%d):state(%d->%d)
Line 19890: [SC] ReleaseCaSingleLO(CC%d): release_cc_num(%d)
Line 19932: [SC][DEBUG] ConfigCaSingleLO(Sorted List): list_cc(%x), earfcn(%d), bw(%d)
Line 19967: [SC][DEBUG] ConfigCaSingleLO(rf path update): before(%d), after(%d)
Line 20038: [SC][DEBUG] ConfigCaSingleLO(List is not changed): cc(%d), pair_num(%x), list_num(%d)
Line 20046: [SC][DEBUG] ConfigCaSingleLO : cc(%d), pair_num(%x), list_num(%d)
Line 20075: [SC] ConfigCaSingleLO: Not found available CC for earfcn(%d)
Line 20129: [SC][DEBUG] ConfigCaSingleLO(master_cc): cc(%d)(%d)
Line 20174: [SC] ConfigCaSingleLO: store dmxerfreq value(cc: %d, dmxr_freq_value: %d) for DS resume
Line 20218: [SC] ConfigCaSingleLO: Not Support slo_cell_num(%d)!!!
Line 20226: [SC] ConfigCaSingleLO(CC%d): rf(%d), slo_cc_num(%d)
Line 20261: [SC] Config4RxMode: MTM running... so skip!!!
Line 20325: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 20365: [SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
Line 20371: [SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
Line 20388: [SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
Line 20547: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 20610: [SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
Line 20624: [SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
Line 20630: [SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
Line 20638: [SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
Line 20661: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 20722: [SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
Line 20728: [SC] Config4RxMode(CC%d): Unknown command(%d)
Line 20733: [SC] Config4RxMode(CC%d): cmd(%d)
Line 20771: [SC] Update4RxMode (cmd:%d, ca_earfcn:%d)
Line 20781: [SC] Update4RxMode: Do not ready 4Rx for scg_cc(%d) )
Line 20803: [4G_DRDS] DRDS is impossible due to MIMO!!!
Line 20838: [SC] Update4RxMode: Do not ready 4Rx for scg_cc(%d) )
Line 20883: [SC] Update4RxMode: earfcn mismatch between main CC%d(%d) with div CC%d(%d)
Line 21004: [SC] Stopped the Sync timer after disabling the Scell Search
Line 21027: [SC] Stopped the Meas timer after disabling the Scell Meas
Line 21212: [SC] ConfigScc: SCC info is NULL
Line 21287: [SC] ConfigScc: CA_MEAS [OOPS] Wrong rfpath(%d)
Line 21362: [SC] ConfigScc: SCC info is NULL
Line 21479: [SC] Wait %dus for UL SLO setting
Line 21483: [SC] ConfigScc(UL CA Setting): curr_time(%x), act_time(%d), target_tti(%d), diff_time(%d)
Line 21523: [SC] ConfigScc: SCell SISO test_mode(%x)
Line 21534: [EDRDS] cc_info[%d]->rx_mode = %d
Line 21552: [SC] ConfigScc: CA_ACT [OOPS] Wrong rfpath(%d)
Line 21763: [SC] ConfigScc: SCC info is NULL
Line 21807: [SC] ConfigScc(CC%d): SL Meas at arfcn(%d), RF_path(%d)
Line 21832: [SC] ConfigScc(CC%d) for SL MEAS: rx_mode(%d), RF_PATH_IDX(%d), MXR_SEL_IDX(%d), RTG_SEL_IDX(%d)
Line 21840: [SC] ConfigScc(CC%d) for SL MEAS: PGC_SEL_IDX(%d), TDBUF_SEL_IDX(%d), OUTPUT_SEL_IDX(%d), dl_bw(%d)
Line 21878: [SC] ConfigScc: SCC info is NULL
Line 21931: [SC] Debug: frame_position 1 is (%d).
Line 21933: [SC] Debug: frame_position 2 is (%d).
Line 21937: [SC] Debug: frame_position 3 is (%d). g_counter=%d, rtg_counter=%d
Line 22024: [SC] ConfigScc(CC%d): Invalid cmd(%d)
Line 22039: [SC] ConfigScc(CC%d): cmd(%d), act_time(%d, %d), current_time(%d, %d, %d)
Line 22598: [SC] SetSccRfForMeas: CC(%d) is already in use for earfcn(%d), type(%d)
Line 22653: [SC] SetSccRfForMeas: Not found available CC for earfcn(%d)
Line 22668: [SC] SetSccRfForMeas(CC%d): status(%d), flag(%d), earfcn(%d), bw(%d)
Line 22745: [SC] SetSccRfForMeas: Single LO slave CC(%d) is already in use
Line 22772: [DRX] SetSccRfForMeas: SccConfig Time(%d)
Line 22829: [SC] SetSccRfForMeas(CC%d): Not supported HW state(%d)
Line 22895: [SC] ChangeUeAntennaConfig: test_mode(%x)
Line 22916: [SC] ChangeUeAntennaConfig(skip): cc(%d), rx_mode(%x)
Line 22938: [ChangeUeAntennaConfig]SetTdpState(CC%d):state(%d->%d)
Line 22943: [SC] ChangeUeAntennaConfig(skip): 4Rx is not supported on CC(%d)
Line 22956: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 22962: [SC] ChangeUeAntennaConfig(skip), RF unavailable(%d)
Line 22969: [SC] IsRxPathOff (%d)
Line 22984: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) : Stop AS operation!!!
Line 22994: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x) : Start AS operation!!!
Line 23008: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed 
Line 23014: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) Changed 
Line 23019: [SC] ChangeUeAntennaConfig: rx_mode(0x%x -> 0x%x) 4RxD Status(0x%x) NOT Changed 
Line 23050: [SC] update ant_bitmap(0x%x->0x%x) for IntraBand-nonContiguous CC(%d, 0x%x) band(%d) state(%d)
Line 23127: [SC] Update ExtLna Ctrl for SLO & 4Rx: cc(%d) div_cc(%d) div_rf(%d) div_dcr(%d) div_rx_mode(%d)
Line 23244: ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 23247: [SC] ChangeUeAntennaConfig(CC%d): rx_mode(%x -> %x)
Line 23257: [ChangeUeAntennaConfig]SetTdpState(CC%d):state(%d->%d)
Line 23287: [SC] ChangeUeAntNum(skip): num_ant(%d), rx_mode(%x)
Line 23307: [SC] ChangeUeAntNum: Not supported UE antenna number(%d)
Line 23354: [SC] ChangeSCellTiming: Not found activated CC for earfcn(%d)
Line 23361: [SC] ChangeSCellTiming: Wrong cell_id(%d, %d)
Line 23384: [SC] ChangeSCellTiming: Time diff is too big!!! time_offset(%d, %d)
Line 23410: [SC] ChangeSCellTiming: dl_earfcn(%d), cell_id(%d), cp_type(%d), time_offset(%d, %d)
Line 23438: [SC] GetSCellTiming: cc(%d), frame_pos(%d), rtg_timing(%d)
Line 23580: [RSSISCAN][MAIN] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
Line 23596: [RSSISCAN][SUB] dl_earfcn: %d, agc_db_power: %d, agc_gain: %d, cal_rsrp_offset: %d, rsrp_temp_offset: %d
Line 23654: [SC] SetDmixerFreqOffset: cc(%d), temp_dmxr_freq_offset(%d)
Line 23709: [SC] EnableSlTimeTracking: Sync mode(%d) is not NONE!!!
Line 24388: [SC] HALSC_SetCpuClkControlforDRX: Changed to CLK_DFS_SVC_4G_REL12
Line 24397: [SC] HALSC_SetCpuClkControlforDRX: Changed to CLK_DFS_SVC_NO_SVC
Line 24437: [SC] HALSC_SetMifClkControl: Changed to MIF freq(%d)
Line 24482: [SC] LteMifFreq(%d) 
Line 24493: [SC] SetCpuClkControl: Changed to MIF_L01, CLK_DFS_SVC_4G_REL12
Line 24504: [SC] SetCpuClkControl: Changed to CLK_DFS_SVC_NO_SVC, MIF_BASE
Line 24561: [SC] SetDefaultCpuClkControl: Changed to CLK_DFS_SVC_PS
Line 24570: [SC] SetDefaultCpuClkControl: Changed to CLK_DFS_SVC_NO_SVC
Line 24617: [SC] HALSC_SetVolteCpuClkControl: State not changed (clk down:%d, volte:%d)
Line 24623: [SC] HALSC_SetVolteCpuClkControl: State changed (%d->%d)(volte:%d)
Line 24635: [SC] HALSC_SetVolteCpuClkControl: Changed to CLK_DFS_SVC_CS (VoLTE UCPU Clock 400MHz, OwnerMask: %d)
Line 24663: [SC] HALSC_SetVolteCpuClkControl: Changed to CLK_DFS_SVC_NO_SVC (VoLTE UCPU Clock Free, OwnerMask: %d)
Line 24694: [SC] RestoreOnGapSrchDone: SyncMode(%d) MeasMode(%d) IdleGapOnGoing(%d) GapStartFlag(%d)
Line 24791: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 24831: [SC] Config4RxMode: CC(%d) is already paired with CC(%d), type(%d)
Line 24837: [SC] Config4RxMode: Not supported RF band (earfcn: %d) for 4Rx
Line 24850: [SC] Config4RxMode: Not found available CC for 4Rx, cc(%d), div_cc(%d)
Line 24960: [Config4RxMode]SetTdpState(CC%d):state(%d->%d)
Line 24994: [SC] Config4RxMode: Enable 4Rx for CC(%d), RF band(earfcn: %d)
Line 24999: [SC] Config4RxMode(CC%d): Unknown command(%d)
Line 25004: [SC] Config4RxMode(CC%d): cmd(%d)
