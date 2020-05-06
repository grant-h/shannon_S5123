Line 272: [SC] Restore dmxerfreq value(cc: %d, dmxr_freq_value: %d)
Line 350: [DSDS] RFAPI_InitRFforDSDS (RF %d, path %d) starts!!!
Line 410: [DSDS] RFAPI_InitRFforDSDS: CA set, cc(%d)
Line 428: [DSDS] RFAPI_InitRFforDSDS: CA-4RX set, cc(%d) div_cc(%d) rx_mode(%d)
Line 443: [DSDS] RFAPI_InitRFforDSDS is finished!!!
Line 445: [DSDS] RFAPI_InitRFforDSDS is finished(gRF_loaded_RF_band:%d)
Line 469: RFAPI_InitRF starts!!!
Line 572: RFAPI_InitRF is finished!!!
Line 574: RFAPI_InitRF is finished(gRF_loaded_RF_band:%d)
Line 638: [IRAT] RFAPI_ReturnToLTE starts!!!
Line 644: [SC] HALRXF_ResetCdmaRxFilterReg
Line 665: [1-Rx] [RF SetToTargetBand] Turned on only Rx main path
Line 668: [1-Rx] [RF init] Turned on all Rx main path
Line 713: [IRAT] RFAPI_ReturnToLTE is finished!!!
Line 715: [IRAT] RFAPI_ReturnToLTE is finished(gRF_loaded_RF_band:%d)
Line 732: [IRAT] RFAPI_RestoreTxPath starts!!!
Line 736: [IRAT] RFAPI_RestoreTxPath is finished!!!
Line 823: RFAPI_InitFromSleepIdle starts!!!
Line 878: RFAPI_InitFromSleepIdle is finished!!!
Line 898: RFAPI_InitFromSleepIdle UE stat[%d] starts!!!
Line 972: RFAPI_InitFromSleepIdle : cc(%d), power on time(%d)
Line 1165: RFAPI_InitForRFBandSwitch(%d) starts!!! rf_path=%d
Line 1236: RFAPI_InitForRFBandSwitch is finished!!!
Line 1238: RFAPI_InitForRFBandSwitch is finished(gRF_loaded_RF_band:%d)
Line 1271: RFAPI_InitForRFBandSwitch(CC%d) is finished!!!
Line 1308: [PWR_OPT] PreInitForRFInterBandGAP: Skip store RF param
Line 1331: [RF] PreInitForRFInterBandGAP: cc(%d), rf(%d), band(%d)
Line 1450: [RF] InitForRFInterBandGAP: cc(%d), rf(%d), mode(%d), band(%d), freq(%d), bw(%d)
Line 1499: [RF] PostInitForRFInterBandGAP:  cc(%d), rf(%d), mode(%d), band(%d)
Line 1522: RFAPI_InitFromShade starts!!!
Line 1626: RFAPI_InitFromShade is finished!!!
Line 1628: RFAPI_InitFromShade is finished(gRF_loaded_RF_band:%d)
Line 1653: RFAPI_InitForRssiScan starts!!! (Band:%d, Rx Freq:%d)
Line 1719: RFAPI_InitForRssiScan is finished!!! (Band:%d, Rx Freq:%d)
Line 1935: [RF] PowerOn(CC%d): rf(%d), band(%d), earfcn(%d)
Line 2032: [RF] Changed to ul center freq(%d -> %d)
Line 2075: [RF] TxSwapByNrTxPath: gRF_tx_swap(%d), nr_txswap(%d), nr_band(%d)
Line 2094: [RF] >>>>>RFAPI_Disable_TxSwap
Line 2117: [RF] >>>>>PowerOnTxPath(CC%d): Invaild CC_index
Line 2148: [RF] >>>>>PowerOnTxPath(CC%d): rf(%d) UlCaStatus(%d) ul_freq(%d)
Line 2278: [RF] Cannot power off Tx path due to D2D
Line 2282: [RF] >>>>>PowerDownTxPath(CC%d): rf(%d)
Line 2367: [RF] >>>>>RFAPI_WakeupTx(CC%d): Invaild CC_index
Line 2387: [RF] >>>>>RFAPI_WakeupTx(CC%d): rf(%d) UlCaStatus(%d) ul_freq(%d)
Line 2429: [RF] RFAPI_SetRxPathPower(CC%d): rf(%d), onoff(%d)
Line 2458: [RF] >>>>>PowerOnRxPath(CC%d): rf(%d), Rxpath(%d)
Line 2495: [RF] >>>>>PowerDownRxPath(CC%d): rf(%d), Rxpath(%d)
Line 2531: [RF] >>>>>PowerOn4RxPath(CC%d): div(%d), Invalid RF path (%d, %d)
Line 2535: [RF] >>>>>PowerOn4RxPath(CC%d): div(%d), rf(%d, %d), rx_mode(%d)
Line 2577: [RF] >>>>>Init4RxPath(CC%d): Invalid RF path (%d)
Line 2796: [RF] SetChannelFrequency RX(%d)
Line 2802: [RF] SetChannelFrequency TX(%d)
Line 2832: [RF] SetChannelFrequency RX(%d)
Line 2836: [RF] SetChannelFrequency TX(%d)
Line 2863: [RF] SetReceivedULFrequency: rf(%d), freq(%d)
Line 3048: [RF] GetCalRsrpOffset(CC%d): rf(%d), earfcn(%d), agc_gain(%d, %d), RSRP Offset(%d, %d)
Line 3055: [RF] RSSI Offset(%d, %d), RSRP Freq Offset(%d, %d)
Line 3494: [RF] WriteTxFrequencyPowerOffsetToDspSHM: gDrx_ActiveRat(%d)
Line 3503: [RF] WriteTxFrequencyPowerOffsetToDspSHM: Freq (%d,%d)!!!
Line 3544: [RF] WriteTxGainTableToDspSHM(RF%d): gDrx_ActiveRat(%d)
Line 3606: [RF] SetRXUpdateModeOn(CC%d): rf(%d), dcr(%d)
Line 3648: [RF] SetRXUpdateModeOff(CC%d): rf(%d), dcr(%d), slo(%d)
Line 3923: [RF] CheckRFBandSwitch: RF Band Switch from [%d] to [%d]
Line 3927: [RF] CheckRFBandSwitch: Not supported RF band [%d].
Line 3953: [RF] CheckRFBandSwitch: This target is not calibrated for requested band [%d].
Line 4310: [RF] Antenna Conduction Status(CC%d): rf(%d), status(%d)
Line 4366: [RF] RFAPI_SPIRead : Addr:0x%x Data:0x%x
Line 4449: [RF] TuneRfCarrierFreq: Not supported RF band(%d), earfcn(%d)
Line 4462: [RF] TuneRfCarrierFreq: RF bands(LTE:%d, D2D:%d) are not matched!!!
Line 4494: [RF] TuneRfCarrierFreq: Not supported RF band(%d), earfcn(%d)
Line 4564: [RF] CheckCABand: support(%d), Rdb(%d), earfcn(%d), band(%d)
Line 4617: [RF] CheckNeedToRfSettingAfterGap: support(%d), band(%d), path_num(%d), path(%d %d %d)
Line 4644: [RF] CheckEdvCABand: Support(%d), Rdb(%d). MCG UE state(%d)
Line 4648: [RF] CheckEdvCABand: Source band[%d]: (%d : %d)
Line 4651: [RF] CheckEdvCABand: target_band:(%d),support(%d)
Line 4753: Not supported band for SCC(earfcn:%d)
Line 4758: Can supported band for SCC(earfcn:%d)
Line 4913: [4G_DRDS] num_rf_band update : %d
Line 4964: [RF] SetRfBandList(skip): num_band(%d), band(%d, %d, %d, %d, %d, %d)
Line 4967: [RF] SetRfBandList(configured): num_band(%d), band(%d, %d, %d, %d, %d, %d)
Line 4970: [RF] SetRfBandList(configured): configured_rf_path_idx(%d), configured_path_onoff(%d)
Line 5054: [EDRDS] end eDRDS RFAPI_SetRfBandList: (CC%d) rx_mode(%d)
Line 5065: [EDRDS] start eDRDS RFAPI_SetRfBandList: (CC%d) rx_mode(%d)
Line 5136: [RF] SetRfBandList: num_band(%d), band(%d, %d, %d, %d, %d)
Line 5186: [CA Info] RFAPI_SetCaConfigInfo: num_scell(%d)
Line 5190: [CA Info] RFAPI_SetCaConfigInfo: num_scell(%d)
Line 5203: [CA Info] RFAPI_SetCaConfigInfo: [%d] cell_id(%d) dl_earfcn(%d)
Line 5222: [CA Info] RFAPI_SetCaConfigInfo(CA_CFG state changed): Earjack Plug-In(%d>>>%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
Line 5228: [CA Info] RFAPI_SetCaConfigInfo(CA_CFG state changed): RF band(CC0:%d,CC1:%d,CC2:%d)
Line 5269: [CA Info] RFAPI_GetCaConfigInfo: CC%d CA configured (info idx:%d, earfcn:%d)
Line 5303: [AntSW] RFAPI_ReadEarJackDetector (%d)
Line 5338: [AntSW] (RF init) Earjack Plug-In(%d) NUM_CA(%d) RF band(CC0:%d,CC1:%d,CC2:%d)
Line 5368: [AntSW] (Periodic) [%d] NUM_CA(%d) CC%d CA_CFG flag(%d>>>%d)
Line 5383: [AntSW] (Periodic) [%d] NUM_CA(%d) CC%d CA_CFG flag(%d>>>%d)
Line 5404: [AntSW] (Periodic) Earjack Plug-In(%d>>>%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
Line 5410: [AntSW] (Periodic) RF band(CC0:%d,CC1:%d,CC2:%d)
Line 5427: [AntSW] (Periodic) No change: EJ(%d) CA_CFG(CC1:%d>>>%d,CC2:%d>>>%d)
Line 5760: [APETF] RFAPI_TX_GAIN_phase : Command Error - (%d)
Line 5812: [AS] RFAPI_GetAsMode: Fixed Antenna Mode (%d)
Line 5818: [AS] RFAPI_GetAsMode: AS enabled band (%d)
Line 5826: [AS] RFAPI_GetAsMode: AS Testmode enabled band (%d)
Line 5831: [AS] RFAPI_GetAsMode: AS disabled (%d)
Line 5989: [AS] OnlyTxSwap (SelectedANT:%d, gRF_tx_swap:%d, tx_swap:%d)
Line 6016: [AS] Skip... RF unavailable
Line 6020: [AS] RFAPI_ChangeAntennaSwitch (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
Line 6027: [AS] TX antenna is switched successfully.
Line 6032: [AS] Tx swap is NOT support
Line 6059: [AS] Antenna is switched successfully.
Line 6064: [AS] Antenna is not switched (Not supported)
Line 6093: [AS] RFAPI_ChangeProxSensState_AS_Fixed (Band:%d, SelectedANT:%d, ProxSensorState:%d)
Line 6101: [AS] RFAPI_ChangeProxSensState_AS_Adapt (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
Line 6113: [AS] RFAPI_ChangeProxSensState_AS: AS Test Mode OFF for current band (%d)
Line 6119: [AS] RFAPI_ChangeProxSensState_AS_Testmode (Band:%d, Operation Mode:%d, ProxSensorState:%d)
Line 6127: [AS] RFAPI_ChangeProxSensState_AS_Adapt (Band:%d, SelectedANT:%d(%d), ProxSensorState:%d)
Line 6196: [AS] TAS_status is restored: %d.
Line 6286: [OL-AIT] AP Sensor %d ON
Line 6294: [OL-AIT] Get highest priority event of AP(%d)
Line 6387: [OL-AIT] (Skip) RFAPI_ControlOpenLoopAit: RF unavailable
Line 6400: [OL-AIT] RFAPI_ControlOpenLoopAit: MTM mode -> Disable OL-AIT control
Line 6417: [OL-AIT] D2D activated at CC(%d) Band(%d)
Line 6457: [OL-AIT] Volte is running. Use only AP event!
Line 6638: [OL-AIT] Usecase:%d, 2ndUsecase: %d, CC:%d, UL earfcn:%d, Extendcase:%d, Testmode:%d, Prev4RxDcase:%d
Line 6660: [OL-AIT] RFAPI_ControlOpenLoopAit (Num CA:%d, RF band:%d %d %d %d %d %d)
Line 6781: [OL-AIT] RFAPI_ControlOpenLoopAit_Default (Usecase:%d, UL earfcn:%d, RF band(%d %d %d)
Line 6814: [AIT] XGND_ANTSW_TEST [%d][%d][%d][%d]
Line 6852: [AIT] TMN_Sweep_Set index [%d] value[%x]
Line 6985: [RF] RFAPI_GetOtherStackRFPowerOn: client owner mask(LTE:0x%x, NR:0x%x, MARCONI:0x%x), RF_VRF owner mask(0x%x)
Line 7064: [RF] RFAPI_SetIntraCaLna: cc(%d), NumOfCC(0x%x) agc_gain(%d, %d)
Line 7145: [HPUE RF] Need to check PowerClass -> set PowerClass 3
Line 7159: [HPUE RF] Stack#%d PC:%d ULCA:%d pMax:%ddBm
Line 7228: RFAPI_ResetDcrIqcBlock rf(%d) band(%d)
Line 7294: [CL-AIT] TxPower(%d) Tx_Th(%d) RSRP(%d) Rsrp_Th(%d) UL BLER(%d) ULBler_Th(%d) configENDC(%d)
