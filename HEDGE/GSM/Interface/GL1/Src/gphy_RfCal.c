Line 189: In l1c_rfcal_initialise - L1c state: %s
Line 191: [HWSORT] TESTMODE HWSORT = %d
Line 211: [HWSORT] In tmpRfint : %d
Line 215: [HWSORT] In tmpRfint HWsort
Line 220: [HWSORT] In tmpRfint SWsort
Line 244: [2G_RSSI_SCAN] band from NS (%d)
Line 268: [2G_RSSI_SCAN] Unexpected band from NS. Set to Default(EGSM)
Line 298: l1c_rfcal_initialise
Line 334: Requesting SIM ID wrong. Check!
Line 351: START : l1c_testmode_initialise
Line 372: [HWSORT] In tmpRfint HWsort
Line 377: [HWSORT] In tmpRfint SWsort
Line 425: l1c_testmode_initialise
Line 514: l1c_txdc_self_auto_cal
Line 697: l1c_afc_auto_cal
Line 807: l1c_rf_cal_str (%d)
Line 869: l1c_rf_cal_str: tdma_fn(%d), p_l1_passive_chn_data(%d), p_l1_active_chn_data(%d)
Line 887: l1c_testmode_str
Line 967: L1C_rx_auto_cal
Line 1015: RxBand(%d), RxMod(%d), RxArfcn(%d), RSSI(%d)
Line 1038: RFCAL_AT : RfCalRpower(%d)
Line 1101: l1c_tx_auto_cal
Line 1178: l1c_rfcal_pam_gain_cal: PAM_gain_mode=%d 
Line 1192: l1c_rfcal_TX_SA_PAM_gain_cal: RfcalSACode(%d)
Line 1218: l1c_rfcal_tx_saallcode: RfcalSACode(%d)
Line 1229: l1c_rfcal_tx_allcorrect: RfcalSAArfcn(%d)
Line 1239: l1c_rfcal_tx_IntPD_Cal: RfcalSACode(%d)
Line 1250: HANS TXPWR : POWERLEVEL(%d)
Line 1308: l1c_rfcal_end (%d)
Line 1335: l1c_rssi_testmode
Line 1339: l1c_rx_testmode
Line 1401: TESTMODE RSSI: band(%d),arfcn(%d),rssi(%d)
Line 1409: TESTMODE RX: band(%d),arfcn(%d),gain_db(%d),gain_code(%d)
Line 1471: l1c_tx_testmode
Line 1507: TESTMODE : band(%d),arfcn(%d),BurstType(%d),DataType(%d)
Line 1532: l1c_pwr_testmode
Line 1567: l1c_pwr_testmode : PowerControl(%d),BurstPower[0](%d),BurstPower[1](%d),BurstPower[2](%d),BurstPower[3](%d)
Line 1615: l1c_reset_testmode Band(%d)
Line 1665: l1c_test_spi_write SPIWord(0x%08X)
Line 1672: l1c_test_spi_write SPIWord(0x%08X)
Line 1689: l1c_test_spi_read: Addr(0x%04X), Data(0x%08X)
Line 1712: l1c_test_spi_path_swap=%d, testrunning=%d
Line 1726: L1cMessageManager - l1c_as_cal
Line 1769: l1c_test_LMT_GSM
Line 1794: ATI_MS_GSM_LMT_RSP
Line 1809: l1c_test_TX_PAM_GAIN_MOD
Line 1817: TX_PAM_CAL[0]:%d, TX_PAM_CAL[1]:%d, TX_PAM_CAL[2]:%d, TX_PAM_CAL[3]:%d
Line 1819: TxPamBias[0]:%d, TxPamBias[1]:%d, TxPamBias[2]:%d, TxPamBias[3]:%d
Line 1825: ATI_MS_GSM_PAM_GAIN_MOD_RSP 
Line 1840: l1c_test_TX_PAM_EXT_GAIN_MOD
Line 1854: ATI_MS_GSM_PAM_EXT_GAIN_MOD_RSP 
Line 1867: l1c_test_TX_Pwr_Gap
Line 1876: l1c_test_spi_TX_Pwr_Gap 
Line 1889: l1c_rssi_scan_testmode, Band(%d)
Line 1980: Send NS_GSM_RSSI_SCAN_RSP for error cause
Line 1994: NS_GSM_RSSI_SCAN_RSP: Requesting SIM ID wrong. Check!
Line 2008: l1c_rssi_scan_testmode_sipc
Line 2214:  ARFCN = element_p->freqOffset%d, TestmodeArfcnWrite%d 
Line 2230: l1c_find_sb_testmode
Line 2306: HW Testmode : bcch_arfcn(%d),SynchFound(%d)
Line 2363: l1c_testmode_ber_early_det_running
Line 2439: PRASRAO test ber : CS(%d), TS(%d), tch_arfcn(%d), rssi(%d), PCL(%d)
Line 2488: l1c_testmode_ber_running
Line 2559: HANS test ber : CS(%d), TS(%d), tch_arfcn(%d), rssi(%d), PCL(%d)
Line 2741: [2G_RSSI_SCAN] Invalid Band(%d)
Line 2768: [2G_RSSI_SCAN] Invalid Frequency Info: StartFreq(%d) EndFreq(%d)
Line 2782: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScanStartArfcn=%d rssiScanEndArfcn=%d rssiScanNum=%d
Line 2796: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScanStartArfcn=%d rssiScanEndArfcn=%d rssiScanNum=%d Offset=%d
Line 2802: [2G_RSSI_SCAN] Invalid Offset(%d)
Line 2829: [2G_RSSI_SCAN] Wrong TimeFrame %d
Line 2833: [2G_RSSI_SCAN] TimeFrame %d Requested Scan Num %d
Line 2871: [2G_RSSI_SCAN] SIL_SetRssiScanParam rssiScan3Arfcn=%d,%d,%d rssiScanNum=%d
Line 2878: [2G_RSSI_SCAN] Invalid ScanMode(%d)
Line 2887: [2G_RSSI_SCAN] Invalid Frequency
Line 2921: [2G_RSSI_SCAN] SIL_ArfcnTestmodeForRssiScan ARFCN=%d Index=%d
Line 3014: [2G_RSSI_SCAN] SIL_ArfcnTestmodeForRssiScan ARFCN=%d Index=%d sampleCounterForNextArfcn=%d
Line 3066: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d)
Line 3069: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI(%d) drxRssi(%d)->RSSI2(%d)
Line 3073: [2G_RSSI_SCAN]: Rssi update exceed maximum scan number(%d) : %d !!!
Line 3099: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d) and samplingCnt(%d) are not matched.
Line 3102: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI(%d) drxRssi(%d)->RSSI2(%d)
Line 3111: [2G_RSSI_SCAN]: New rssiScanPrxMax %d
Line 3117: [2G_RSSI_SCAN]: New rssiScanDrxMax %d
Line 3150: [2G_RSSI_SCAN]: Invalid param !!! AntennaSel(%d) and SamplingCnt(%d) are not matched.
Line 3161: [2G_RSSI_SCAN]: index(%d) prxRssi(%d)->RSSI Max(%d)Avg(%d)  drxRssi(%d)->RSSI2 Max(%d)Avg(%d)
Line 3205: [2G_RSSI_SCAN]: SIL_BandTestmodeForRssiScan band=%d -> %d
Line 3284: [2G_RSSI_SCAN] InitRssiScanInfo: cleared rssiScanPrx, rssiScanDrx
Line 3308: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI[%d] RSSI2[%d]
Line 3316: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI[%d]
Line 3324: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI2[%d]
Line 3335: [2G_RSSI_SCAN] RssiScanResult[%d~%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3344: [2G_RSSI_SCAN] RssiScanResult[%d,%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3353: [2G_RSSI_SCAN] RssiScanResult[%d,~%d] Index[%d] RSSI Max[%d]Avg[%d] RSSI2 Max[%d]Avg[%d]
Line 3381: [2G_RSSI_SCAN] RssiScanResult Band[0x%x] StartFreq[%d] MidFreq[%d] EndFreq[%d] ScanMode[%d] AntennaSel[%d]
Line 3398: [2G_RSSI_SCAN] MemAlloc failed !!!
Line 3408: [2G_RSSI_SCAN] RssiScanResult Band[0x%x] StartFreq[%d] EndFreq[%d] ScanMode[%d] AntennaSel[%d] samplingCnt[%d]
Line 3429: [2G_RSSI_SCAN] MemAlloc failed !!!
Line 3434: [2G_RSSI_SCAN] RssiScanResult data len:%d
Line 3470: L1cMessageManager - l1c_rfcal_running
Line 3519: SIL_RFcal_TxPwr : arfcn(%d), powerLevel(%d)	powerCode(%d)  BandIndex(%d)  pam_gainmode(%d)	modulation(%d)
Line 3592: SIL_RFcal_TxPwr = arfcn(%d)  band(%d)  modulation(%d)  powerLevel(%d)  TxPwrCode8PSK(0x%x)  
Line 3746: SIL_TestMode_Txpwr = arfcn:%d band:%d RfCalCmd:%d powerLevel:%d TxPwrCode8PSK:%d
Line 3811: ScheduleTestModeTx - %d %d %d %d
Line 3833: BurstType(%d),  txModeIs8psk(%d), oldtxModeIs8psk(%d)
Line 3852: ScheduleTestModeTx - modulation(%d), slotCount(%d), timeslotNumber(%d)
Line 3882: ScheduleTestModeTx - Tx commad(%d), slotCount(%d), timeslotNumber(%d)
Line 3883: ScheduleTestModeTx - 8psk(%d) old8psk(%d) timeslotNumber(%d) slotTransition(%d)
Line 3919: VALUE newRfOutLevel(%x)
Line 4113:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
Line 4129:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
Line 4148:  RfCalCmd:%x, txSlotInfo_p->startTxTds_p->RfCalCmd:%x
