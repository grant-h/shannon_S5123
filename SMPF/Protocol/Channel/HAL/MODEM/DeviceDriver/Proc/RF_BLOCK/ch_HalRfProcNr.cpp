Line 96: ###[NR_RFPROC] RfRficOnOffProc Rf on/off %d
Line 102: ###[NR_RFPROC] Booting setup for RF
Line 132: ###[NR_RFPROC] RF_Init_RAT Band %d Arfcn %d Bw_index %d cc_type %d
Line 156: ###[NR_RFPROC] RfRficOnOffProc RF off path %d %d
Line 178: ###[NR_RFPROC] RfRficOffProc
Line 255: ###[NR_RFPROC][WARNING] GetRfPathInfo: find_param(%d), arg(%d) is not found in RF HAL Info.
Line 274: ###[NR_RFPROC][WARNING] GetRfPathInfo: find_param(%d), arg(%d) is not found in RF HAL Info.
Line 285: ###[NR_RXFILTER][WARNING] GetRfPathInfo: invalid find_param(%d), arg(%d) 
Line 426: ###[NR_RFPROC] CalculateCenterArfcn(%d) Band(%d)
Line 443: ###[NR_RFIF] GetRssi: change_stored_value(%d)
Line 472: ####[NR_RF] RfProcNr::TuneRfCarrierFreq: rf(%d), band(%d), freq(%d), bw(%d), rx_mode(%d), chg_type(%x)
Line 546: ###[NR_RFPROC] InitRfForWakeup: resume_type(%d), NrBand(%d), freq(%d), targetBw(%d), rf_path(%d), rx_mode(%d)
Line 607: ###[NR_TX] TxProcNr::SendTxSwapIpc tx_path_info(0x%x) rf_path(D%d, U%d), dac_idx[0](%d), max_ul_layer(%d)
Line 702: ###[NR_TX] TxProcNr::SetTxPathOnOff on(%d), path(0x%04x - rf4/mxr4), gNrTxPathInfo(0x%x), tx_dac_path(%d), ul_freq(%d), ul_bw(%d), slo4_rank4(0x%x)
Line 832: ###[NR_RFPROC] Calculate_NR_DLCarrierFrequency:: ArfcN[%d]-> Freq[%d]
Line 861: ###[NR_RFPROC] Converted ARFCN = %d, freq = %d, band = %d
Line 894: ###[NR_RFPROC] SetRxUpdateModeOn: rx(%d), rf(%d)
Line 936: ###[NR_RFPROC] SetRxUpdateModeOff: rx(%d), rf(%d)
Line 1042: [OL-AIT] Suspended! rf_path(%d)
Line 1050: [OL-AIT] Sensor %d ON
Line 1060: [OL-AIT] CC(%d) band(%d) ul_freq(%d) selected_usecase(%d) resume_type(%d)
Line 1127: ###[NR_RFPROC] UpdateSensorState: type(%d) SensorState(%d)
Line 1177: ###[AS] Abnormal band idx(%d) band(%d)
Line 1183: ###[AS] NV Disabled at band(%d) idx(%d)
Line 1192: ###[AS] Disable dynamic AS due to testmode(%d)
Line 1198: ###[AS] AsEnable!
Line 1202: ###[AS] SetAsEnable from(%d) to(%d)
Line 1207: ###[AS] SetAsEnable(%d) keep previous status(%d)
Line 1252: ###[AS] Disable dynamic AS due to testmode(%d)
Line 1274: ###[AS] DynamicAsCheck AsStatus(%d) rsrpDiff(%d) SsbRsrp(%d)(%d)(%d)(%d)
Line 1276: ###[AS] DynamicAsCheck RxThresh(%d)(%d) txPwr(%d) TxThresh(%d)(%d)
Line 1303: ###[AS] DynamicAsCheck %d - %d = rsrpDiff(%d)
Line 1332: ###[AS] DynamicAsCheck SA! TxAnt(%d)(%d)
Line 1385: ###[AS] Antenna is switched successfully(%d -> %d)
Line 1391: ###[AS] Antenna is not switched (Not supported)
Line 1504: ###[NR_RFPROC] GetPmaxBackoffbySAR: Sar_Priority_Num not available(%d)
Line 1517: ###[NR_RFPROC] GetPmaxBackoffbySAR: (EARJACK Table, Backoff value:%d, %d)
Line 1522: ###[NR_RFPROC] GetPmaxBackoffbySAR: (PROXSENSOR Table, Backoff value:%d, %d)
Line 1527: ###[NR_RFPROC] GetPmaxBackoffbySAR: (GRIP Table, Backoff value:%d, %d)
Line 1532: ###[NR_RFPROC] GetPmaxBackoffbySAR: (SUBGRIP Table, Backoff value:%d, %d)
Line 1537: ###[NR_RFPROC] GetPmaxBackoffbySAR: (TSP Table, Backoff value:%d, %d)
Line 1542: ###[NR_RFPROC] GetPmaxBackoffbySAR: (HOTSPOT Table, Backoff value:%d, %d)
Line 1547: ###[NR_RFPROC] GetPmaxBackoffbySAR: (MCC Table, Backoff value:%d, %d)
Line 1557: ###[NR_RFPROC] GetPmaxBackoffbySAR bandIdx(%d) (Backoff value:%d, %d)
Line 1564: ###[NR_RFPROC] No Backoff (SensorStatus:%d)
Line 1585: ###[NR_TX] [TAS] Front Power domain off!!! SKIP SendSARbackoffIpc
Line 1595: ###[NR_TX] [TAS] SendSARbackoffIpc PMAX(%d)
Line 1619: ###[NR_TX] [AS] SendTxSuspendIpc TxAnt(%d) RxAnt(%d)
Line 1659: ###[NR_TX] [AS] IPC_NR_TX_RESUME_IND AsStatus(%d) TxAnt(%d) RxAnt(%d)
Line 1688: ###[TAS] Init : SarSumLimit(%d) SarPatialLimit(%d)
Line 1733: ###[TAS] Save PrioritySensor(%d)
Line 1758: ###[TAS] SAR(%d) Pow(%d) remain_ret(%d) event(%d)
Line 1794: ###[TAS] No Tx power last N duration! SAR_index(%d)
Line 1811: ###[TAS] Abnormal remain! Reset SAR_remain(%d)
Line 1826: ###[TAS] prevtime(%d) curtime(%d) time_diff(%d)
Line 1840: ###[TAS] Skip(%d) remain(%d)
Line 1847: ###[TAS] SAR_remain(%d) remnant(%d) gSARPatialRemain[M](%d)
Line 1852: ###[TAS] SAR_remain(%d) remnant(%d) m_SarPatialLimit(%d)
Line 1866: ###[TAS] Abnormal skip cnt! Reset SAR_remain(%d)
Line 1873: ###[TAS] skipSumSAR(%d) M(%d) gSARPatialRemain[%d](%d)
Line 1885: ###[TAS] SAR_remain(%d) remnant(%d) skipSumSAR(%d)
Line 1890: ###[TAS] SAR_remain(%d) remnant(%d) PatialLimit(%d)
Line 1910: ###[TAS] M(%u) gSARConnCnt(%u) Qfull(%d) MaxSARLimit(%d) X_Used_SAR(%d) C_Used_SAR(%d)
Line 1916: ###[TAS] Reset count 0 as alpha2 threshold(%d)
Line 1925: ###[TAS] nextLimit(%d) nowAlpha(%d) using SAR 6 min before
Line 1930: ###[TAS] nowMaxLimit(%d) nowAlpha(%d) using Max SAR limit
Line 1944: ###[TAS] nowMaxLimit(%d) backoff by Alpha3
Line 1957: ###[TAS] nextLimit(%d) SAR_remain < nowBeta(%d) idx(%d)
Line 1965: ###[TAS] nowMaxLimit(%d) SAR_remain big enough!(%d)
Line 1971: ###[TAS] Current Max Limit is %d.0dBm
Line 2039: ###[NR_RFPROC] out of range power : %d dBm
Line 2081: ###[NR_RFPROC] SendL1RfDmInfo:: EnableTxAS(%d), SelectedTxAnt(%d), Enable4RxD(%d), SelectedAIT(%d)
