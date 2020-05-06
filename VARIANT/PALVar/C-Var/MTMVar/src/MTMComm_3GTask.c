Line 970: EHalRfOnCmd exec() failed errCode %d addErrCode %d
Line 974: MTMCOMM_3GTask_dummyCallback 
Line 1010: MTMCOMM_3GTask_RFOn!
Line 1015: Rf Turning Onn
Line 1021: FSM_RAKE_FAKE_SYNC: Error %d, Additional Error %d
Line 1025: MTMCOMM_3GTask_RFOn Finished
Line 1048: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 1051: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 1056: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 1063: MTMCOMM_3GTask_fakeCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 1084: EHalRfRxUarfcnCmd: success rxUarfcn =%d
Line 1090: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 1098: FAIL: MTMCOMM_3GTask_fakeSyncSetRl 
Line 1122: EHalDlRlConfigCmd: Error %d, Additional Error %d
Line 1143: EHalDlFingerConfigCmd: Error %d, Additional Error %d
Line 1219: RXUARFCN=%d TXUARFCN=%d gTx_swap=%d RFBand=%d 
Line 1227: TestMode: call TX DC cal restore function..CurrentRfBandClass=%d
Line 1235: TestMode: ulChannel is created 
Line 1277: ERROR: 3GTask_TxPerStart modemTestMode %d 
Line 1279: TestMode: call TX DC cal restore function..CurrentRfBandClass=%d
Line 1296: TestMode: ulChannel is created 
Line 1321: gTx_swap=%d 
Line 1328: PaBias[%d] %d, bandInfo%d
Line 1331: PaBias %d, bandInfo%d , paHighGain %d
Line 1334: DacCtrlVal %d, bandInfo%d , freqInfo %d
Line 1432: start erasing ET NV
Line 1487: MTMCOMM_3GTask_SetTxpower_FixedVcc Txp : %d, %d refoffset : %d, %d
Line 1502: MTMCOMM_3GTask_SetTxpower_FixedVcc target : %d, RFIC index : %d DGC : %ddB [0x%x], offset : %d
Line 1512: SetTxpower Fail Warning !!!! paMode = 0x%x
Line 1522: SetTxpower Fail Warning !!!! point_APT_tx array index = 0x%x
Line 1535: Target : %d =>Band:%d, paMode: %d RFIC(idx) : %d, DGC(x10dB) : %d, Vcc : %d Bias : 0x%x
Line 1573: PA mode : %d (0:Low 2: High)  Bandindex : %d  Total index : %d
Line 1586: Bias[%d] %d
Line 1604: [APTUNE] MTMCOMM_3GTask_TuneAPTPower Rfix idx %d, stage %d, DGC val %d
Line 1633: Target : %d /%d  paMode: %d RFIC idx : %d, DGC(x10)dB : %d, Vcc : %d Bias : %d 
Line 1645: Ati_SetAPTTxIndex Fail Warning !!!! paMode = 0x%x
Line 1658: Ati_SetAPTTxIndex Fail Warning !!!! point_APT_tx array index = 0x%x
Line 1663: MTMCOMM_3GTask_Ati_SetAPTTxIndex: APTCalPtsAt : %d APTCalStartPt : %d paMode:%d,
Line 1678: Target : %d =>Band:%d, paMode: %d RFIC idx : %d, DGC(x10)dB : %d, Vcc : %d Bias : %d 
Line 1682: Measured TX Power(AT+HMSRDTXPOWER)= %d
Line 1705: MTMCOMM_3GTask_GetFBRx[%d] init : %d readVal : %d
Line 1709: MTMCOMM_3GTask_GetFBRx[%d] init : %d readVal : %d
Line 1734: MTMCOMM_3GTask_PDADC : Tx power is unstable. Try again[%d/7] index%d tempPDADC : %d lastPDADC : %d gap : %d
Line 1781: MTMCOMM_3GTask_SAPDFreqCalWrite::msrdPdVal[%d] = %d
Line 1806: Flag : %d 
Line 1817: TxP_dbm : %d pos:%d, PD pts:%d, PDADC:%d 
Line 1925: %s ERR : Undefined Band
Line 1930: %s ERR : No Attenuation Calibration!!!
Line 1952: [MTM] %s : bias_index[%d] measuredPDAGC[%d]
Line 1956: [MTM] %s : Overflowed!!!
Line 1965: [MTM] %s : exit by pdadc peak
Line 1974: [MTM] %s : exit by pdadc overflow
Line 1985: [MTM] %s : exit by pdadc peak
Line 1991: [MTM] %s : Cannot Saturate RFIC chip!!!
Line 1997: [MTM] %s : exit by using stable index
Line 2004: [MTM] %s : BAD PDADC, lock PD measure sequence
Line 2010: [MTM] %s : BAD PDADC, using unstable index
Line 2046: [MTM] %s : bias_index[%d] measuredPDADC[%d]
Line 2068: [MTM] %s : BAD PDADC, using unstable index
Line 2076: [MTM] %s : optimal_bias_index[%d] optimal_measuredPDADC[%d]
Line 2200: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 2207: %s ERR : No Attenuation Calibration!!!
Line 2213: [MTM] %s : atten[%d] measuredPDAGC[%d]
Line 2243: %s start
Line 2268: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d PDAGC : %d
Line 2296: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 2307: MTMCOMM_3GTask_MsrdInternalPDADC Stage : %d R: %d DCCAL : %d
Line 2320: MTMCOMM_3GTask_MsrdInternalPDADC ReadPDAGC : %d
Line 2325: %s Error - PDAGC Overflow : %d stage[%d]
Line 2330: %s END
Line 2337: APTCalStartPt : %d,APT_index:%d , Target_Pwr: %d Mesrd Pwr : %d Saved Pwr : %d
Line 2352: APT_index %d APTCalPt %d APTCAL_StartValue %d
Line 2360: gain mode  %d temp1 %d temp2 %d gap %d gapPALowGain %d
Line 2369: gainMode %d Measured power : %d Traget power :%d 
Line 2371: [%d] APTCAL_StartValue %d Now %d Msrd %d gap %d 
Line 2379: [%d] temp1 %d temp2 %d gap %d 
Line 2396: MTMCOMM_3GTask_SAMsrdAPTTxPower : pa_Mode : %d Startpts %d APT_index %d Target Pwr %d txPower %d 
Line 2403: Flag : %d 
Line 2409: TxP_dbm : %d pos:%d, PD pts:%d
Line 2423:  txPowerCalPtsAt:%d 
Line 2477: TxAPTBuild Fail Warning !!!! paMode = 0x%x
Line 2493: TX APT BUILD [2] targetPower %d
Line 2504: MTMCOMM_3GTask_TxAPTBuild LPM Target : %d
Line 2509: MTMCOMM_3GTask_TxAPTBuild LPM gap: %d 
Line 2518: MTMCOMM_3GTask_TxAPTBuild Gain : %d gap: %d 
Line 2536: MTMCOMM_3GTask_TxAPTBuild : TxP : %d, RF_Gain : %d  VCC : %d paMode %d
Line 2563: PA mode : %d (0:Low 2: High)  Band : %d  Total index [APT: %d] 
Line 2583: TX AGC APT [2] targetPower %d
Line 2611: Target Power : %d Require Tx Power(with fixed Vcc) : %d j=%d [APT: %d]
Line 2621: PAM_Bias_SetValue[%d/%d] : %d, %d, 
Line 2624: Frist Target : %d RF gain : %d Vcc : %d
Line 2640: paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d offset:%d 
Line 2661: MTMCOMM_3GTask_InternalBuildFBRX:: U_L1.Tx2CalOffset %d
Line 2672: MTMCOMM_3GTask_InternalBuildFBRX[%d]:: gap : %d FBPower: %d TxPower:%d StartOffset = %d 
Line 2700: MTMCOMM_3GTask_InternalBuildFBRX 0x%x %d
Line 2724: paMode : %d bandArea:%d registryOffset:%d txPowerCalPtsAt:%d 
Line 2789: MTMCOMM_3GTask_MsrdTonePower[%d/%d] :: Data %d
Line 2816: MTMCOMM_3GTask_Find_InternalTxRFICGain [%d/%d] :: txPower %d gap %d
Line 2845: InternalTxRFICindex FBRxGain[%d/%d] :: txPower %d FBgain (0x%x ; %d) gap %d
Line 2851: InternalTxRFICindex FBRxGain :: txPower_log %d FBgain (0x%x ; %d)
Line 2886: InternalTxRFICindex ToneAmp[%d] %d :: RFIC index %d  tonAmp %d txPower [%d / %d]gap %d 
Line 2895: InternalTxRFICindex ToneAmp[%d] :: txPower_log %d fbrxgain 0x%x tone %d
Line 2920: WA : s5510 rev0, 0.1
Line 2936: RF_RFIC_Get_ID : %d, RF_RFIC_Get_Revision = %d
Line 2972: cc_type:: %d, dump_rate :: %d
Line 2980: MTMCOMM_3GTask_InternalTxRFICindex:: Band[%d/%d] TxUarfcn[%d] maxGain : %d :: minFbrx %d
Line 3015: MTMCOMM_3GTask_InternalTxRFICindex:: [%d/%d] :: FBGain index %d Tone Amp %d dB(x10) Msrd value %d Msrd Power %d
Line 3091: MTMCOMM_3GTask_InternalTxRFICindex:: [%d/%d] :: FBGain index %d Tone Amp %d Ref Amp %d Msrd Power %d
Line 3118: HSPA_CAL_MSRFBRX : Calibration start fail
Line 3136: HSPA_CAL_MSRFBRX : MEM Alloc fail!!
Line 3163: dpd_update_sel = CC0 : 0x%x, CC1 : 0x%x
Line 3238: PA mode : %d (0:Low 2: High)  Bandindex : %d  Total index : %d Start index : %d,  ant_port = %d
Line 3271: MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d PDAGC : %d Msrd Txp[%d] : %d wait : %d
Line 3285: MTMCOMM_3GTask_FBRX_measure error
Line 3294: MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d FBRx : %d Msrd Txp : %d offset : %d
Line 3312: MTMCOMM_3GTask_InternalTxAPTPower[i:%d] [trial : %d] Set power : %d FBRx : %d Msrd Txp : %d offset : %d
Line 3328: distract : fbrx_gain = 0x%x, cal_val_diff = %d, set_power_diff = %d
Line 3479: MTMCOMM_3GTask_FBRX_measure error
Line 3497: MTMCOMM_3GTask_InternalTxFreq Uarfcn[%d] Set power : %d PDAGC : %d Msrd Txp : %d wait : %d
Line 3541: MTMCOMM_3GTask_txTransmissionSwitch
Line 3557: MTMCOMM_3GTask_AntSwSelect
Line 3562: MTMCOMM_3GTask_txDcCalStart
Line 3603: MTMCOMM_3GTask_buildTxDcCalFinal::Wrong fci gain
Line 3605: Generated DC Cal value for gain(%d) = 0x%x(%d)
Line 3616: Received TX uarfcn = %d
Line 3655: numOfTxFreqCal %d uarfcn %d txPower %d paMode %d
Line 3701: idx, numOfTxMultiChCal %d uarfcn %d txPower %d paMode %d
Line 3719: numOfTxFreqCal %d 
Line 3745: numOfTxFreqCal %d 
Line 3760: registrationUhalWithMiniRouter excuted 
Line 3767: uhal_TmpDataHandler0 is called 
Line 3776: uhal_TmpDataHandler1 is called 
Line 3785: uhal_TmpDataHandler2 is called 
Line 3794: uhal_TmpDataHandler3 is called 
Line 3804: uhal_TmpDataHandler4 is called 
Line 3813: uhal_TmpDataHandler5 is called 
Line 3881: DoneCnt %d HwScrCode %d scCodeEng %d scrCodeFb %d
Line 3896: DoneCnt %d FoundPathCnt %d EcIo %d Rscp %d
Line 3902: pathNumber %d Offset %d Eng %d
Line 3930: MTMCOMM_3GTask_Searcher_Check_Result Cmd %d Clear Executed num_paths %d FoundPathCnt %d
Line 3938: MTMCOMM_3GTask_Searcher_Check_Result: Error %d, Additional Error %d
Line 3958: EHalDlPhychReleaseCmd: Error %d, Additional Error %d
Line 3969: EHalDlRlReleaseCmd: Error %d, Additional Error %d
Line 4031: Clear Searcher & Rake Cmd
Line 4052: RealCellSync rxUarfcn %d searcherPathOffset %d 
Line 4060: RealCellSync state %d
Line 4086: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 4089: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 4094: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 4101: MTMCOMM_3GTask_RealCellSync: sendResponseToUphyToken did not get time to run, so clear it
Line 4123: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 4136: RealCellSync state %d wating for rxlock and step1 start. antPathSelection %d
Line 4154: STEP1 fail
Line 4165: RealCellSync state %d waiting for step1 & buffering start
Line 4170: CheckSTEP1  fail
Line 4175: step1 successl
Line 4178: SearcherBuffer fail
Line 4194: RealCellSync state %d waiting for buffering and step3 start
Line 4199: CheckSearcherBuffer  fail
Line 4206: STEP3 fail
Line 4222: RealCellSync state %d wating for step3 & MP search start
Line 4227: CheckSTEP3  fail
Line 4234:  MultiPath fail
Line 4252: RealCellSync state %d waiting for MP searcher & finger start
Line 4257: MultiPath  fail
Line 4268:  Scr Code=%d
Line 4284: EHalSrchCpichCmd: Error %d, Additional Error %d
Line 4321:  Start RL 0
Line 4353: Finger %d position set to %d
Line 4360: FingerConfig Failed
Line 4366:  Start Finger %d
Line 4390: RealCellSync state %d print rake state
Line 4412: FSM Finished::: So do nothing go happily :-)
Line 4436: downlinkRxCalPower %d  
Line 4510: read I %d, Q %d   
Line 4563: Wrong state %d
Line 5517: lna prx lnaon1  
Line 5525: lna prx bypass  
Line 5531: distract:lna 2nd
Line 5536: lna drx bypass  
Line 5542: distract:lna 3rd
Line 5545: pathSupported 0x%x bypassLnaCalStatus 0x%x  
Line 5571:  GetRxAGC[%d]: read0 %d read1 %d read2 %d read3 %d 
Line 5572:  GetRxAGC[%d]: sumOfRx0 %d sumOfRx1 %d sumOfRx2 %d sumOfRx3 %d
Line 5616:  GetRxAGC: bandArea %d currentCalRxUarfcn %d downlinkRxCalPower %d measuredRxPowerRx0 %d measuredRxPowerRx1 %d 
Line 5617:  ant_group : %d,  RxTone_offset = %d 
Line 5718:  GetRxAGC: bandArea %d currentCalRxUarfcn %d downlinkRxCalPower %d measuredRxPowerRx0 %d measuredRxPowerRx1 %d 
Line 5839:  GetRxAGC: read1 %d sumOfRx1 %d
Line 5848:  GetRxAGC: bandArea %d currentCalRxUarfcn %d downlinkRxCalPower %d measuredRxPowerRx1 %d
Line 5870:  RX RSSI CAL result:  registry id %d num %d bandArea %d currentCalRxUarfcn %d
Line 5874: registry val %d
Line 5942:  RxAGCFreqCal: read0 %d read1 %d sumOfRx0 %d sumOfRx1 %d
Line 5943:  RxAGCFreqCal: read2 %d read3 %d sumOfRx2 %d sumOfRx3 %d
Line 5986: number of RxFreqCalPoints can't exceed available U_L1_RxFreq_SIZE %d
Line 5999: currentCalRxUarfcn %d bandArea %d numOfRxFreqCalPoints %d RxTone_offset %d
Line 6000: retRxAgc1 %d retRxAgc2 %d retRxAgc3 %d retRxAgc4 %d 
Line 6183: RX Freq Cal Result: bandArea %d numOfRxFreqCalPoints %d currentCalRxUarfcn %d 
Line 6196: registry id %d num %d
Line 6208: registry val %d
Line 6224: RX Freq Cal Result: bandArea %d numOfRxFreqCalPoints %d currentCalRxUarfcn %d 
Line 6228: registry id %d num %d
Line 6232: registry val %d
Line 6303: [ET_Cal] MTMCOMM_3GTask_TXETCAL_UpdateResult band %d, cal type %d, tx type %d
Line 6309: [ET_Cal] Freq cnt : %d
Line 6315: [ET_Cal] Index[%d] Meas Freq[%d] Power[%d]
Line 6348: [RF ET] ETSAStart :: Tx_Type = %d, Cal_Type = %d, band_num = %d, ul_channel = %d, TPow = %d
Line 6380: CALTIMER_SA: timeRfSA_old %d slot_time %d
Line 6388: CALTIMER_SA: timeRfSA_new %d set_time %d
Line 6394: CALTIMER_SA: timeRfSA_new %d set_time2 %d
Line 6407: [RF ET] ETSAFreq :: band_num = %d, Cal_Type = %d, frequency = %d, target_Power = %d
Line 6413: [RF ET] ETSAFreq :: Slot time error
Line 6416: Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Line 6436: [RF ET] ETSA_FREQ :: Finish!
Line 6444: [RF ET] ETSASetup(parameter) :: band = %d, cal_type = %d, pdm0 = %d, set_freq = %d, tx_pwr = %d
Line 6445: [RF ET] ETSASetup(parameter) :: freq_start = %d, freq_stop = %d, freq_step = %d, T0 = %d, Tsetup = %d
Line 6452: [RF ET] ETSASetup :: tCalTimer Error
Line 6468: [RF ET] ETSASetup :: (before read) PA_Bias0 = 0x%x, PA_Bias1 = 0x%x
Line 6477: [RF ET] ETSASetup :: (after read) PA_Bias0 = 0x%x, PA_Bias1 = 0x%x
Line 6488: [RF_ET] ETSASetup :: Tsetup Error
Line 6505: [ET_Cal] MTMCOMM_3GTask_InternalETCAL
Line 6506: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 6507: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 6513: [ET_Cal] Load RFIC/Pgain Cal data
Line 6534: [ET_Cal] Applied frequency=%d 
Line 6546: [ET_Cal] Applied frequency=%d 
Line 6555: [ET_Cal] PDADC = %d 
Line 6559: [ET_Cal] Gpadc2Txp operation Fail :%d 
Line 6612: [ET_Cal] MTMCOMM_3GTask_InternalETCAL calTargetTxPower is not valid!! : %d 
Line 6617: [ET_Cal] MTMCOMM_3GTask_InternalETCAL calFreq is not valid!! : %d
Line 6622: [ET_Cal] MTMCOMM_3GTask_InternalETCAL RFComm_InternalPD_Gpadc2Txp Fail!! : %d
Line 6631: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 6642: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 6645: [ET_Cal] CH: %d, Powmeas:%d 
Line 6670: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2
Line 6671: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 6672: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 6678: [ET_Cal] Load RFIC/Pgain Cal data
Line 6701: [ET_Cal] Applied frequency=%d 
Line 6713: [ET_Cal] Applied frequency=%d 
Line 6723: [ET_Cal] PDADC = %d 
Line 6727: [ET_Cal] Gpadc2Txp operation Fail :%d 
Line 6780: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calTargetTxPower is not valid!! : %d 
Line 6785: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calFreq is not valid!! : %d
Line 6790: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 RFComm_InternalPD_Gpadc2Txp Fail!! : %d
Line 6799: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 6808: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 6811: [ET_Cal] CH: %d, Powmeas:%d 
Line 6825: [ET_Cal] Applied frequency=%d 
Line 6836: [ET_Cal] Applied frequency=%d 
Line 6845: [ET_Cal] PDADC = %d 
Line 6849: [ET_Cal] Gpadc2Txp operation Fail :%d 
Line 6902: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calTargetTxPower is not valid!! : %d 
Line 6907: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 calFreq is not valid!! : %d
Line 6912: [ET_Cal] MTMCOMM_3GTask_InternalETCALV2 RFComm_InternalPD_Gpadc2Txp Fail!! : %d
Line 6921: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 6930: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 6933: [ET_Cal] CH: %d, Powmeas:%d 
Line 6962: [ET_Cal] MTMCOMM_3GTask_InternalETCAL
Line 6963: [ET_Cal] bandInfo %d step %d  targetPower %d  
Line 6964: [ET_Cal] freqStart %d   freqStop %d   freqStep %d    
Line 6970: [ET_Cal] Load RFIC/Pgain Cal data
Line 7026: [ET_Cal] Applied frequency=%d 
Line 7037: [ET_Cal] Applied frequency=%d 
Line 7050: [ET_Cal] MTMCOMM_3GTask_FBRX_measure error
Line 7065: [ET_Cal] MTMCOMM_3GTask_InternalETCAL calFreq is not valid!! : %d
Line 7071: [ET_Cal] msrdTxp %d = %d + (%d - %d) 
Line 7080: [ET_Cal] Channel deleted finished TX smart allignmentfor frequency calibration
Line 7083: [ET_Cal] CH: %d, Powmeas:%d 
Line 7103: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTPower_FBRX
Line 7105: [SAPT_CAL] BandClass=%d wait=%d calPt=%d txUarfcn=%d
Line 7126: [SAPT_CAL] PA mode=%d(0:L,2:H) bandInfo=%d  aptCalPoint=%d StartPwr=%d StopPwr=%d calPt=%d
Line 7165: [SAPT_CAL] InternalTxSAPTPower :: PDAGC=%d targetTxp=%d msrdTxp=%d txRslt=%d wait=%d
Line 7203: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTFreq
Line 7205: [SAPT_CAL] bandInfo=%d targetPower=%d freqStart=%d freqStop=%d
Line 7258: [SAPT_CAL] InternalTxSAPTFreq :: tempFreqCal=%d msrdTxp=%d calTxpower=%d convTxpower=%d
Line 7266: [SAPT_CAL] InternalTxSAPTFreq :: Uarfcn[%d] PDADC=%d targetPower=%d msrdTxp=%d wait=%d count=%d
Line 7296: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTPower_FBRX
Line 7298: [SAPT_CAL] BandClass=%d wait=%d calPt=%d txUarfcn=%d
Line 7353: [SAPT_CAL] PA mode=%d(0:L,2:H) bandInfo=%d  aptCalPoint=%d StartPwr=%d StopPwr=%d calPt=%d
Line 7388: [SAPT_CAL] InternalTxSAPTPower :: measure error
Line 7396: [SAPT_CAL] InternalTxSAPTPower :: targetTxp=%d msrdTxp=%d txplog=%d calvalue=%d
Line 7435: [SAPT_CAL] MTMCOMM_3GTask_InternalTxSAPTFreq_FBRX
Line 7437: [SAPT_CAL] bandInfo=%d targetPower=%d freqStart=%d freqStop=%d
Line 7480: [SAPT_CAL] InternalTxSAPTFreq measure error
Line 7488: [SAPT_CAL] InternalTxSAPTFreq :: tempFreqCal=%d msrdTxp=%d txplog=%d calvalue=%d
Line 7509: [SAPT_CAL] InternalTxSAPTFreq :: calTxpower=%d convTxpower=%d
Line 7517: [SAPT_CAL] InternalTxSAPTFreq :: Uarfcn[%d] targetPower=%d msrdTxp=%d wait=%d count=%d
Line 7544: AT+SETMAXPOWERreceived
Line 7555: AT+SETMINPOWER received
Line 7566: Inside MTMCOMM_3GTask_msrSensitivity()
Line 7595: MTMCOMM_3GTask_configAndStartDL and State=%d(FSM_DL_CONFIG)
Line 7621: FAIL!!! MTMCOMM_3GTask_PhychRlConfig
Line 7630: FAIL!!! MTMCOMM_3GTask_TrchConfig
Line 7638: FAIL!!! MTMCOMM_3GTask_CctrchConfig
Line 7647: Inside MTMCOMM_3GTask_configAndStartDL and State  (FSM_DL_START_0)
Line 7652: Wrong phych_nr value %d
Line 7662: uhal_Test_DL: RlInfo D failed RL#%d %d
Line 7667: current_sfn %d test_info[0].max_tti %d, sfn mod 4=%d sfn mod 2=%d
Line 7671: decodingPosition is %d 
Line 7703: FAIL!!! EHalDlCctrchEnableCmd
Line 7712: Started/Enabled Cctrch0
Line 7739: counter %d num_iterations %d data_received %d
Line 7752: Good CRC: %d, Bad CRC:%d Total Tr Blk:%d decodingPosition %d numOfDecodingPositionChange=%d
Line 7814: FSM Finished::: So do nothing go happily :-)
Line 7824: RMC12_2k: MTMCOMM_3GTask_msrSensitivity_sw_10ms_decoding_for_RMC12_2k called
Line 7850: RMC12_2k: uhal_RecDataFuncPtr reconfigured and sw_10ms_decoding_for_RMC12_2k=TRUE
Line 7877: RMC12_2k: MTMCOMM_3GTask_configAndStartDL and State=%d (FSM_DL_CONFIG)
Line 7904: FAIL!!! MTMCOMM_3GTask_PhychRlConfig
Line 7913: FAIL!!! MTMCOMM_3GTask_TrchConfig
Line 7921: FAIL!!! MTMCOMM_3GTask_CctrchConfig
Line 7934: FAIL!!! MTMCOMM_3GTask_TrchConfig
Line 7942: FAIL!!! MTMCOMM_3GTask_CctrchConfig
Line 7953: RMC12_2k: Inside MTMCOMM_3GTask_configAndStartDL and State  (FSM_DL_START_0)
Line 7958: Wrong phych_nr value %d
Line 7968: uhal_Test_DL: RlInfo D failed RL#%d %d
Line 7980: RMC12_2k: current_sfn=%4d, next_sfn=%4d, max_tti=%d, sfn mod (max_tti)=%d
Line 7981: RMC12_2k: cctrch0 and cctrch1 configuration done. Need to enable them
Line 7986: RMC12_2k: current_sfn=%4d, next_sfn=%4d, cctrch 0 and 1 will be enabled
Line 8019: FAIL!!! EHalDlCctrchEnableCmd
Line 8045: FAIL!!! EHalDlCctrchEnableCmd
Line 8050: RMC12_2k: cctrch0 and cctrch1 enabled
Line 8069: RMC12_2k: cctrch0 num_iterations=%d, cctrch1 num_iterations=%d
Line 8087: RMC12_2k: rmc12_2k_received[0]=%d, rmc12_2k_received[1]=%d, test_info[0].counter=%3d, test_info[1].counter=%3d
Line 8206: RMC12_2k: FSM Finished::: So do nothing go happily :-)
Line 8285: DCH channel should have following charactersitics to decode properly
Line 8286: Chan Code:%d,Slot Format:EUmtsDlDpchSlotFormat_11,CRC:Asn_crc16,TTI:Asn_tti20
Line 8363: RMC 12.2k channel should have following charactersitics to decode properly
Line 8364: CcTrCH 0: Chan Code:%d, Slot Format:EUmtsDlDpchSlotFormat_11, CRC:Asn_crc16, TTI:Asn_tti20
Line 8417: CcTrCH 1: Chan Code:%d, Slot Format:EUmtsDlDpchSlotFormat_11, CRC:Asn_crc16, TTI:Asn_tti20
Line 8608: TRCH%d:   Trbk Received: %d   Good CRC: %d  Bad CRC: %d 
Line 8610: TrBlk %d,Bad Crc %d
Line 8612:  bler %d TrBlk %d,Bad Crc %d
Line 8613: Bit error counter %d Total bit %d
Line 8622: BER percentage %d  %d (x1000)
Line 8647: RMC12_2k: cctrch%d, TRCH=%d:(for Ref) Total Trbk Received=%3d  CRC Ok=%3d  CRC fail=%3d 
Line 8653: RMC12_2k: cctrch%d, TRCH=%d: Upto 100 PDUs: Trbk Received=%3d  CRC Ok=%3d  CRC fail=%3d  BLER=%8d (x100000)
Line 8666: RMC12_2k: cctrch%d, Upto 100 PDUs: TotalNoOfBitErrors=%6d, TotalNoOfRcvdBits=%6d  BER(percentage)=%d, BER(x100000)=%8d
Line 8779: MTMCOMM_3GTask_PhychRlConfig: phych_nr %d ovsf %d multi_code_num=%d SF=%d Slot Format=%d
Line 8791: Phych config failed
Line 8815: MTMCOMM_3GTask_PhychRlConfig: offset_to_cpich=%d, sec_src_code_used=%d, scramblingCodeChange=%d 
Line 8829: MTMCOMM_3GTask_CctrchConfig: cctrch_nr=%d,dtx_pos_fixed=%d,cctrch_type=%d,btfd_active=%d,tfc_num=%d
Line 8885: MTMCOMM_3GTask_TrchConfig: trch_nr=%d,coding=%d,coding_rate=%d,crc_size=%d,rate_matching=%d,tti=%d,TF=%d 
Line 8898: Trch config failed 
Line 8926: uhal_ReceiveData cctrch_index %d lmac_int_src %d test_info[0].counter %d
Line 8931: uhal_ReceiveData cctrch_index %d lmac_int_src %d
Line 8954: uhal_ReceiveData:Array index out of bound num_trch=%d 
Line 9041: FAIL!!!! EHalDataCctrchDecodedInfoCmd  
Line 9075: uhal_ReceiveData:Array index out of bound num_trch=%d 
Line 9143: RMC12_2k: Warning !! cctrch_index=%d
Line 9149: FAIL!!!! EHalDataCctrchDecodedInfoCmd  
Line 9196: data[%d] 0x%x pattern_ptr[%d] 0x%x 
Line 9258: RMC12_2k: cctrch%d, rmc12_2k[%2d]=0x%x Pattern[%2d]=0x%x,  
Line 9291: RMC12_2k: trial %3d, TRCH=%d:(for Ref) Total Trbk Received=%3d, CRC Ok=%3d, CRC fail=%3d
Line 9297: RMC12_2k: cctrch%d, TRCH=%d: Upto 100 PDUs: Trbk Received=%3d, CRC Ok=%3d, CRC fail=%3d, TotalNoOfBitErrors=%6d, TotalNoOfRcvdBits=%6d
Line 9322: SearcherStep1 
Line 9342: SearcherBuffer 
Line 9374: SearcherStep3 
Line 9402: SearcherComplete 
Line 9443: SearcherMP 
Line 9461: Slot time error!!! Tx power off
Line 9487: MTMCOMM_3GTask_InternalTxRFICTimer::Channel deleted finished TX smart allignment for gain sweep
Line 9501: Slot time error!!! Tx power off
Line 9547: MTMCOMM_3GTask_InternalTxPDPowerSetTimer : Target_Power : %d, Stop_Power : %d 
Line 9560: MTMCOMM_3GTask_InternalTxPDPowerSetTimer::Channel deleted finished TX smart allignment
Line 9575: Slot time error!!! Tx power off
Line 9597: PD measure error!!! Error code : %d off
Line 9616: MTMCOMM_3GTask_InternalTxPDPowerTimer : Target_Power : %d, R_flag = %d Stop_Power : %d 
Line 9628: MTMCOMM_3GTask_InternalTxPDPowerTimer::Channel deleted finished TX smart allignment
Line 9633: MTMCOMM_3GTask_InternalTxPDFreqTimer:: %d txSmrtAllFreqStep %d
Line 9640: Slot time error!!! Tx power off
Line 9683: Channel deleted finished TX internal calibration for PD frequency calibration
Line 9698: Slot time error!!! Tx power off
Line 9707: MTMCOMM_3GTask_FBRX_measure error
Line 9712: MTMCOMM_3GTask_InternalTxFBRXPower:: [%d/5] RFIC index %d Rxgain 0x%x Msrdvalue %d StartOffset %d 
Line 9722: Channel deleted finished TX internal calibration for PD frequency calibration
Line 9773: MTMCOMM_3GTask_TimerSet :: Timmer is already on!!
Line 9787: MTMCOMM_3GTask_TimerSet :: Timmer is already off!!
Line 9799: MTMCOMM_3GTask_StartTimer Timer : %d task : %d
Line 9865: MTMCOMM_3GTask_InternalTxPDPowerReady[err %d]:: stage%d, GPADC %d, TIA_R %d
Line 9905: MTMCOMM_3GTask_DynamicInternalPD : Target_Power : %d, R_flag = %d stage : %d TIA_R : %d num : %d GPADC : %d
Line 9920: MTMCOMM_3GTask_FBRX_measure error
Line 9925: MTMCOMM_3GTask_InternalTxFBRXPower:: [%d/5] RFIC index %d Rxgain 0x%x Msrdvalue %d 
Line 9938: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxGainSweep:Timer not deleted last time 
Line 9947: MTMCOMM_3GTask_SATxGainSweep:Not able create tCalTimer timer
Line 9957: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 9986: MTMCOMM_3GTask_SATxGainSweep:Tsetup must be 0
Line 10000: Slot time error!!! Tx power off
Line 10016: MTMCOMM_3GTask_SATxGainSweepTimer::Channel deleted finished TX smart allignment for gain sweep
Line 10033: Slot time error!!! Tx power off
Line 10068: MTMCOMM_3GTask_SATxGainFullSweepTimer::Channel deleted finished TX smart allignment for gain sweep
Line 10075: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxGainFullSweep:Timer not deleted last time 
Line 10082: MTMCOMM_3GTask_SATxGainFullSweep:Not able create tCalTimer timer
Line 10119: MTMCOMM_3GTask_SAPDCal:Timer not deleted last time 
Line 10128: MTMCOMM_3GTask_SAPDCal:Not able create tCalTimer timer
Line 10137: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 10162: MTMCOMM_3GTask_SAPDCal:Wrong Input
Line 10178: MTMCOMM_3GTask_SAPDCalTimer::Msrd GPADC= %d
Line 10193: MTMCOMM_3GTask_SAPDCalTimer::Channel deleted finished TX smart allignment
Line 10207: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time 
Line 10216: MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
Line 10236: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 10253: MTMCOMM_3GTask_SATxPowerCal:Tsetup must be 0
Line 10267: Slot time error!!! Tx power off
Line 10275: APT CAL4 : Target_Power_Start : %d,  Target_Power_Stop : %d 
Line 10289: MTMCOMM_3GTask_SATxPowerCalTimer::Channel deleted finished TX smart allignment
Line 10308: Slot time error!!! Tx power off
Line 10317: MTMCOMM_3GTask_SATxAPTCalTimer:: Gain mode %d 
Line 10330: MTMCOMM_3GTask_SATxAPTCalTimer:: i/j : %d/%d Tx_SA_msrdPts : %d Tx_SA_NowPts : %d Tx_SA_LastPts : %d comp : %d Tx_SA_TargetPower_Step : %d  
Line 10364: MTMCOMM_3GTask_SATxAPTCalTimer::Channel deleted finished TX smart allignment
Line 10371: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time 
Line 10380: MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
Line 10419: MTMCOMM_3GTask_SATxFreqCal:Not able create tCalTimer timer
Line 10433: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 10446: MTMCOMM_3GTask_SATxFreqCal 
Line 10465: MTMCOMM_3GTask_SATxFreqCal:Tsetup must be 0
Line 10482: Slot time error!!! Tx power off
Line 10505: Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Line 10521: Channel deleted finished TX smart allignmentfor frequency calibration
Line 10542: Slot time error!!! Tx power off
Line 10572: PD measure error!!! Error code : %d off
Line 10596: MTMCOMM_3GTask_SATxRFICPDCalTimer : Target_Power : %d, R_flag = %d Stop_Power : %d 
Line 10610: MTMCOMM_3GTask_SATxRFICPDCalTimer::Channel deleted finished TX smart allignment
Line 10617: @@@@@@@@@@@@@@@@@@@@MTMCOMM_3GTask_SATxPowerCal:Timer not deleted last time 
Line 10626: MTMCOMM_3GTask_SATxPowerCal:Not able create tCalTimer timer
Line 10661: MTMCOMM_3GTask_SATxMultiChCal:Not able create tCalTimer timer
Line 10670: RF locked and Tx Started rx uarfcn %d tx uarfcn 
Line 10683: MTMCOMM_3GTask_SATxMultiChCal 
Line 10702: MTMCOMM_3GTask_SATxMultiChCal:Tsetup must be 0
Line 10712: TxMultiChCal2 : txSmrtAllCurrentFreq: %d txSmrtAllFreqStep %d, tempFreqCal : %d 
Line 10722: Slot time error!!! Tx power off
Line 10729: Applied frequency=%d txSmrtAllCurrentFreq(%d) txSmrtAllFreqStep(%d)
Line 10730: Tx_SA_TargetPower_Start = %d
Line 10732: SA multi_ch idx = %d offset =%d
Line 10737: TxMultiChCal3 : txSmrtAllCurrentFreq: %d txSmrtAllFreqStep %d, tempFreqCal : %d 
Line 10750: Channel deleted finished TX smart allignmentfor frequency calibration
Line 10761: MTMCOMM_3GTask_LMTResponse msg %d antPathSelection %d
Line 10772: LMT_Uarfcn %d LMT_RSSI %d LMT_RSCP %d LMT_BER %d
Line 10787: msg memory allocation fail!!!!! 
Line 10812: LMTToken state %d Sync num %d freq %d numOfZeroState %d antPathSelection %d
Line 10821: Sync Failure
Line 10832: LMTToken state %d Sync Wait & TxStart num %d freq %d
Line 10835: reSyncUarfcn %d syncWaitCounter %d
Line 10838: Sync Failure try again
Line 10864: LMTToken state %d Measure RSSI & RSCP num %d freq %d
Line 10875: LMT_RSSI[%d] %d LMT_RSCP[%d] %d 
Line 10883: LMTToken state %d start to measure BER num %d freq %d
Line 10896: LMTToken state %d under measuring BER num %d freq %d
Line 10902: LMTToken state %d Done LMT_currentBER %d num %d freq %d
Line 10905: LMT_BER[%d ] %d
Line 10925: LMTToken state %d finish
Line 10949: LMTToken FSM Finished::: So do nothing go happily :-)
Line 10963: MTMCOMM_3GTask_SetUlUarfcn::rxUarfcn=%d txUarfcn=%d
Line 10979: EHalRfRxUarfcnCmd: Error %d, Additional Error %d
Line 10992: Load cal data called 
Line 11040: TxDCCal start bandInfo 0x%x (%d) 
Line 11049: dcCalBand %d 0x%x %d 
Line 11053: DC CAL ERROR : NO SUCH BAND %d Band_Class %d
Line 11058: S933 GSM TxDC_Cal index : BAND %d 
Line 11064: BAND %d DC cal and IQ Imbalance calibration start
Line 11072: TxDCCal end : digital gain original value is %d
Line 11077: MTMCOMM_3GTask_ActiveOnly selectedAnt %d antPathSelection %d
Line 11086: Parameter value %d is invalid.(0~3) 
Line 11131: Rscp %d RAKE_RSCP_OFFSET %d
Line 11144: FingerInfo Failed
Line 11150: Finger 0 in state %d position %d raw=%d EcIo=%d RSCP=%ddBm isLocked %s isPowerLocked %s
Line 11177: FingerInfo Failed
Line 11189: GetRxRscpDRX - Finger 0 in state %d position %d raw=%d EcIo=%d RSSI=%d RSCP=%d
Line 11200: uhal_CHmcp_GetAtiPhycTest_sendMsg2Ati: val2 = %d
Line 11205: NS_UMTS_RSSI_SCAN_REQ : HSPA_CAL_HSPATMSTART
Line 11220: UmodemStatus=%d
Line 11223: UmodemStatus=%d
Line 11230: DSP Dead SO enable DSP!!!!!!!!!!  
Line 11238: ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 11243: ul_ch_info 0 
Line 11253: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11258: Antenna switched to UMTS
Line 11266: Error: modem is turned off 
Line 11289: NS_UMTS_RSSI_SCAN_REQ:: UL channel exists so delete it... 
Line 11295: DSP AliveSo Disable it.!!!!!!!!!!!!!  
Line 11304: DSP Dead So Do nothing!!!!!!!!!!  
Line 11309: [process debug] NS_UMTS_RSSI_SCAN_REQ: 3G off
Line 11317: NS_UMTS_RSSI_SCAN_REQ - UmodemStatus is OFF so bypass
Line 11331: RF : MTMCOMM_3GTask_SendMsg2NS pal_MemAlloc fail
Line 11335: MTMCOMM_3GTask_SendMsg2NS length %d destType %d mbxDst %d
Line 11355: NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_RssiScan_sendMsg2NS pal_MemAlloc fail
Line 11363: NS_UMTS_RSSI_SCAN_REQ : MTMCOMM_3GTask_sendMsg2NS length %d destType %d mbxDst %d
Line 11397: Wrong rx frequency %d. couldn't convert right uarfcn. Return rxUarfcn %d
Line 11425: Wrong rx frequency %d. couldn't convert right uarfcn. Return rxUarfcn %d
Line 11502: Wrong uarfcn. couldn't find right frequency BAND. default set to high band rx_uarfcn %d
Line 11654: NS_UMTS_RSSI_SCAN_REQ : rxBand %d scanMode %d antennaSel %d offset %d samplingCnt %d startFreq %d endFreq %d
Line 11694: NS_UMTS_RSSI_SCAN_REQ : tx1OnOff %d tx1Band %d tx1Freq %d tx1Power %d startUarfcn %d endUarfcn %d freqNum %d
Line 11760: NS_UMTS_RSSI_SCAN_REQ : uarfcn %d freq %d rssiMainMax %d rssiMain %d rssiSubMax %d rssiSub %d pdPower %d
Line 11764: NS_UMTS_RSSI_SCAN_REQ : Fail to send Msg to  pal_EMsgEntity_AS_SAP
Line 11775: NS_UMTS_RSSI_SCAN_REQ : rxBand is not correct(%d)
Line 11822: NS_UMTS_RSSI_SCAN_REQ : Rat is not correct(%d)
Line 11832: NS_UMTS_RSSI_SCAN_REQ : Fail to send Msg to  pal_EMsgEntity_AS_SAP
Line 11836: NS_UMTS_RSSI_SCAN_REQ : Success to send Msg to  pal_EMsgEntity_AS_SAP
Line 11860: pal_TaskEntry_HSPA_CALIBRATION: pal_EMsgEntity_AS_SAP Msg Id %d
Line 11870: Task from NS : Message ID not correct
Line 11952: pal_TaskEntry_HSPA_CALIBRATION: NULL messgae received
Line 11956: INFO:pal_TaskEntry_HSPA_CALIBRATION: Message received. Msg Id %d
Line 11960: Received msg id is HSPA_TEST_CAL_MSG
Line 11962: received frequency = %d (0x%x)
Line 11965: Received msg id is HSPA_CAL_DLCELLSYNC
Line 11967: received frequency = %d (Bandinfo %d)
Line 11974: Received msg id is HSPA_CAL_STORE_TARGET_DLPOWER
Line 11976: Received dl Power = %d 
Line 11983: Received msg id is HSPA_CAL_DRXCALON
Line 11985: HSPA_CAL_DRXCALON Mode(1:ON/0:OFF)= %d 
Line 11993: Received msg id is HSPA_CAL_GETRXAGC 
Line 12061: msg memory allocation fail!!!!! 
Line 12069: Received msg id is HSPA_CAL_GETRXBYPAGC 
Line 12090: msg memory allocation fail!!!!! 
Line 12100: Received msg id is HSPA_SET_SAR
Line 12111: Received msg id is HSPA_CAL_GETRXAGC1 
Line 12126: msg memory allocation fail!!!!! 
Line 12131: Received msg id is HSPA_CAL_BUILDAGCTAB 
Line 12135: Received msg id is HSPA_CAL_HCalOffset 
Line 12139: Received msg id is HSPA_CAL_HRxOnlyDefaultCal 
Line 12146: Received msg id is HSPA_CAL_TXSTART=%d 
Line 12150: gTx_swap=%d 
Line 12160: PaBias %d, bandInfo%d , paHighGain %d
Line 12163: DacCtrlVal %d, bandInfo%d , freqInfo %d
Line 12170: Received msg id is HSPA_CAL_SETPDMVALUE
Line 12172: Received PDM = %d 
Line 12176: Received msg id is HSPA_CAL_SETTXPOWER
Line 12178: Received Tx power = %d 
Line 12183: Received msg id is HSPA_CAL_TXAGCBUILD 
Line 12189: Received msg id is HSPA_CAL_TXAPTBUILD 
Line 12197: Received msg id is HSPA_CAL_RXAGC_FREQCAL 
Line 12211: msg memory allocation fail!!!!! 
Line 12219: Received msg id is HSPA_CAL_RXAGC_FREQCAL1 
Line 12231: msg memory allocation fail!!!!! 
Line 12241: Received msg id is HSPA_CAL_RXAGC_FREQCAL4RX 
Line 12269: msg memory allocation fail!!!!! 
Line 12274: Received msg id is HSPA_CAL_RXFREQBUILD 
Line 12278: Received msg id is HSPA_CAL_RXFREQ1BUILD 
Line 12283: Received msg id is HSPA_CAL_TXSTARTFREQ=%d 
Line 12287: Received msg id is HSPA_CAL_SETTXFREQ
Line 12289: Received tx uarfcn = %d 
Line 12296: Received msg id is HSPA_CAL_SETTXMULTICHFREQ
Line 12298: Received tx uarfcn = %d 
Line 12300: multi_ch offset =%d paMode =%d 
Line 12307: Received msg id is HSPA_CAL_WRITETXPOWER
Line 12309: Received Tx power = %d 
Line 12314: Received msg id is HSPA_CAL_BUILDTXFREQ 
Line 12319: Received msg id is HSPA_CAL_BUILDTXFREQ 
Line 12325: Received msg id is HSPA_CAL_SETBANDPAMODE
Line 12327: Received PA value = %d 
Line 12334: Received msg id is HSPA_CAL_HSPARFCALSTART 
Line 12350: UmodemStatus=%d
Line 12353: UmodemStatus=%d
Line 12367: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 12372: Antenna switched to UMTS
Line 12381: Error: modem is turned off 
Line 12386: DSP Alive So stop ilpc compensation logic 
Line 12397: RxTone_offset = %d 
Line 12412: Received msg id is HSPA_CAL_HSPARFCALEND 
Line 12416: DSP Alive So Restore DSP Status from registry
Line 12433: Received msg id is HSPA_CAL_HSPARFCALEND:  UmodemStatus is OFF so bypass
Line 12455: Received msg id is HSPA_CAL_BUILDTXDCCALFINAL
Line 12457: Received Gain= %d 
Line 12470: msg memory allocation fail!!!!! 
Line 12477: Received msg id is HSPA_CAL_TXDCCALSTART
Line 12484: Received gain = %d indexInnerLoop=%d regPart=%d
Line 12508: Received msg id is HSPA_CAL_BUILDTXDCCAL:Band Info=%d
Line 12540: BAND %d DC cal and IQ Imbalance calibration done / TX SWAP %d 
Line 12549: S955 TxDC_Cal index : BAND 2
Line 12561: S955 TxDC_Cal index : BAND 5
Line 12581: TX2 DC cal and IQ Imbalance calibration bandInfo%d Tx2bandInfo%d 
Line 12599: BAND %d DC cal and IQ Imbalance calibration done / Tx2bandInfo %d TX SWAP %d 
Line 12605: All BAND DC cal and IQ Imbalance calibration done
Line 12616: Before Changing digital gain original value is %d
Line 12617: After Changing digital gain original value is %d
Line 12644: Received msg id is HSPA_CAL_IIP2CAL:Band Info=%d
Line 12657: Tx Uarfcn %d IIP2  calibration done
Line 12662: Return I_DAC %d , Q_DAC %d
Line 12674: Returnd Q *(u16 *)msg = %d, len = %d
Line 12688: Received msg id is HSPA_CAL_RXPOWER
Line 12690: Received dl Power = %d 
Line 12695: Received msg id is HSPA_CAL_PDMVALSET
Line 12697: Received Pdm = %d 
Line 12702: Received msg id is HSPA_CAL_SET_TX_GAIN_INDEX 
Line 12704: Received Tx Gain Index = %d 
Line 12712: Received msg id is HSPA_CAL_SET_APT_TX_INDEX 
Line 12713: Received Target power = %d 
Line 12720: Received msg id is HSPA_CAL_MSRDTXPOWER
Line 12722: Received Tx Power = %d 
Line 12728: Received msg id is HSPA_CAL_MSRDAPTTXPWR
Line 12733: Received msg id is HSPA_CAL_RetPdTable
Line 12750: Received msg id is AT+HRETPDSATABLE and Too many stage number %d
Line 12759: Received msg id is AT+HRETPDSATABLE and Too many index number %d
Line 12875: HSPA_CAL_GETFBRX : start!!!!
Line 12899: HSPA_CAL_MSRFBRX : MEM Alloc fail!!!!
Line 12918: HSPA_CAL_GETFBRX : end!!!!
Line 12926: Received msg id is HSPA_CAL_ReadPDGpadc
Line 12947: Received msg id is HSPA_CAL_SETPDPOWER Target_PDAGC : %d |Max_PDAGC : %d |TxP : %d | Stage : %d | R_flag : %d| wait : %d 
Line 12958: msg memory allocation fail!!!!! 
Line 12993: msg memory allocation fail!!!!! 
Line 13008: msg memory allocation fail!!!!! 
Line 13022: Received msg id is HSPA_CAL_HPDRETPWR
Line 13030: Received msg id is AT+HSETPDPOWER and Too many PD pts %d
Line 13050: Received msg id is HSPA_CAL_HPDSASTART setFreq : %d | Target_PDAGC : %d | Max_PDAGC : %d | Start_Txp : %d | wait : %d 
Line 13055: Received msg id is HSPA_CAL_TXPWRMSRDFREQCAL
Line 13057: Received Tx Power = %d 
Line 13062: Received msg id is HSPA_CAL_TXMULTICHPWRMSRD
Line 13064: Received Tx Power = %d 
Line 13071: Received msg id is HSPA_CAL_DLSYNC
Line 13074: received frequency = %d antPath %d
Line 13091: Received msg id is HSPA_CAL_GETRXRSSI 
Line 13103: Measured RSSI1=%d RSSI2=%d
Line 13116: msg memory allocation fail!!!!! 
Line 13127: Received msg id is HSPA_CAL_RXRSSIGET 
Line 13138: Measured RSSI1=%d RSSI2=%d
Line 13151: msg memory allocation fail!!!!! 
Line 13166: Received msg id is HSPA_CAL_GET4RXRSSI 
Line 13178: is4Rxsupported %d 
Line 13196: Measured RSSI1=%d RSSI2=%d RSSI3=%d RSSI4=%d
Line 13213: msg memory allocation fail!!!!! 
Line 13223: Received msg id is HSPA_CAL_GETRXRSSIPRXONLY 
Line 13232: Measured RSSI1=%d 
Line 13243: msg memory allocation fail!!!!! 
Line 13253: Received msg id is HSPA_CAL_GETRXRSSIDRXONLY 
Line 13263: Measured RSSI1=%d 
Line 13274: msg memory allocation fail!!!!! 
Line 13290: Received msg id is HSPA_CAL_GETRXRSSIACTIVEONLY %d 
Line 13314: Parameter value %d is invalid.(0~3) 
Line 13321: GETRXRSSIACTIVEONLY RSSI %d =%d 
Line 13332: msg memory allocation fail!!!!! 
Line 13345: Received msg id is HSPA_CAL_CHECKMARC
Line 13363: HSPA_CAL_CHECKMARC: dlRet %d dlErrLane %d ulRet %d ulErrLane %d
Line 13381: msg memory allocation fail!!!!! 
Line 13404: Received msg id is HSPA_CAL_RXMODESET
Line 13425: Wrong RX Mode
Line 13429: HSPA_CAL_RXMODESET Mode (3:PRX + DRX 2:PRX ONLY 1: DRX ONLY)= %d 
Line 13433: 3G MODEM is Not ON
Line 13442: Received msg id is HSPA_CAL_SETASTUNE
Line 13477: HSPA_CAL_SETASTUNE Mode(1:ON/0:OFF)= %d 
Line 13520: HSPA_CAL_AS Band : %d, ant_group : %d 
Line 13529: Received msg id is HSPA_CAL_SETTX2
Line 13532: HSPA_CAL_SETTX2 TX path (TX2) = %d 
Line 13541: Received msg id is HSPA_CAL_GETSENSE
Line 13543: Received iteration = %d 
Line 13551: Try Synchronization one more time with freq=%d
Line 13560: Synchronization failed 2nd time also So return BER as 100
Line 13570: Received msg id is HSPA_CAL_TXPERSTART
Line 13572: received frequency = %d 
Line 13576: TXPERSTART finish
Line 13580: Received msg id is HSPA_CAL_SETPOWER
Line 13582: Received Tx power = %d 
Line 13589: Received msg id is HSPA_CAL_SETMAXPOWER
Line 13591: Received Tx power = %d 
Line 13594: HSPA_CAL_SETMAXPOWER::DSP Alive!!!!!!!!!!!!!  
Line 13598: HSPA_CAL_SETMAXPOWER::DSP Dead!!!!!!!!!!  
Line 13605: SETMAXPOWER finish
Line 13609: Received msg id is HSPA_CAL_SETMINPOWER
Line 13611: Received Tx power = %d 
Line 13621: Received msg id is HSPA_CAL_TXFREQSETPDM
Line 13678: Received msg id is HSPA_CAL_TXMULTICHPDM
Line 13712: Received msg id is HSPA_CAL_DINSET_RFIC RFIC index : %d step : %d 
Line 13774: Received msg id is HSPA_CAL_TXTRANSSWITCH
Line 13783: Received msg id is HSPA_CAL_HANTSWSEL %d 
Line 13800: GETANTSWSTATUS Antenna Switch State %d Antenna Switch Status %d 
Line 13815: msg memory allocation fail!!!!! 
Line 13824: Received msg id is HSPA_CAL_TXAPTSASETUP
Line 13841: i = %d gainMode = %d StartTxP = %d EndTxp= %d 
Line 13846: Received setFreq = %d mrsd_pts = %d gap = %d num_gainmode=%d Thold=%d 
Line 13868: HSPA_CAL_INBUILDRFIC::  Pa_mode=%d, Num_cal_pt=%d 
Line 13874: HSPA_CAL_INBUILDRFIC::  msrd_Pwr=%d 
Line 13882: HSPA_CAL_INBUILDRFIC::  HPM_Pwr=%d , offset[0] = %d
Line 13935: WA : s5510 rev0, 0.1
Line 13951: HSPA_CAL_INSTARTFBRX : start!! txUarfcn %d, iRfic %d, txSmartThold %d
Line 13997: HSPA_CAL_INSTARTFBRX_V2 : start!! txUarfcn %d, iRfic %d, txSmartThold %d
Line 14008: HSPA_CAL_INBUILDFBRX : start!!
Line 14054: msg memory allocation fail!!!!! 
Line 14079: msg memory allocation fail!!!!! 
Line 14136: Received msg id is HSPA_CAL_BUILDFREQTX and Too many Cal Pointer %d
Line 14210: [SAPT_CAL] Received txUarfcn=%d wait=%d calPt=%d pdType=%d
Line 14254: [SAPT_CAL] Received targetPower=%d freqStart=%d freqStop=%d freqStep=%d pdType=%d
Line 14278: Received msg id is HSPA_CAL_INSTARTETCAL , pdType(%d)
Line 14296: Received bandInfo = %d step=%d txpower=%d
Line 14297: freqStart=%d,freqStop=%d,freqStep=%d
Line 14333: Received msg : HSPA_CAL_INSTARTETCALV2
Line 14334: band: %d cal type: %d
Line 14388: Received msg id is HSPA_ET_MTM_CAL_DATA_BACKUP, band_index(%d), tx_path(%d), NV_idx(%d)
Line 14433: Received msg id is HSPA_CAL_TXGSSASETUP
Line 14452: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,PowerStart=%d,PowerStop=%d,T0=%d,Tsetup=%d,Thold=%d
Line 14461: Received msg id is HSPA_CAL_TXFSSASETUP
Line 14484: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,setPdm=%d
Line 14485: freqStart=%d,freqStop=%d,freqStep=%d,T0=%d,Tsetup=%d,Thold=%d
Line 14495: Received msg id is HSPA_CAL_TXMULTICHSASETUP(Bandclass %d)
Line 14518: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,setPdm=%d
Line 14519: freqStart=%d,freqStop=%d,freqStep=%d,T0=%d,Tsetup=%d,Thold=%d
Line 14547: Received msg id is HSPA_CAL_HSPATMSTART
Line 14561: UmodemStatus=%d
Line 14564: UmodemStatus=%d
Line 14571: DSP Dead SO enable DSP!!!!!!!!!!  
Line 14578: ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 14582: ul_ch_info 0 
Line 14590: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 14595: Antenna switched to UMTS
Line 14602: Error: modem is turned off 
Line 14606: HSPATMSTART finish
Line 14609: HSPA_CAL_HSPATMEND 
Line 14618: HSPA_CAL_HSPATMEND:: UL channel exists so delete it... 
Line 14623: DSP AliveSo Disable it.!!!!!!!!!!!!!  
Line 14632: DSP Dead So Do nothing!!!!!!!!!!  
Line 14636: [process debug] pal_TaskEntry_HSPA_CALIBRATION: 3G off
Line 14643: Received msg id is HSPA_CAL_HSPATMEND:  UmodemStatus is OFF so bypass
Line 14645: HSPA_CAL_HSPATMEND finish 
Line 14656: Received msg id is HSPA_CAL_LMT_PRX
Line 14661: Received msg id is HSPA_CAL_LMT_DRX
Line 14667: Received msg id is HSPA_CAL_LMT_RUN
Line 14671: You can not be serious!!!Received msg id is unkown
Line 14684: UmodemStatus=%d
Line 14687: UmodemStatus=%d
Line 14695: DSP Dead SO enable DSP!!!!!!!!!!  
Line 14708: Error: modem is turned off 
Line 14712: HSPATMSTART finish
Line 14725: LMT_antenna PRX+DRX
Line 14730: LMT_berMeasureTime %d
Line 14736: LMT_txMaxPower [%d] %d
Line 14740: LMT_numOfFreq %d
Line 14745: LMT_Uarfcn [%d] %d
Line 14761: Received msg id is HSPA_CAL_HCHANGEMODE
Line 14763: Mode= %d 
Line 14771: Received msg id is HSPA_CAL_HSENDSPI
Line 14784: Received msg id is HSPA_CAL_HWRITESPI
Line 14799: Received msg id is HSPA_CAL_HREADSPI
Line 14811: HSPA_CAL_HREADSPI msg memory allocation fail!!!!! 
Line 14818: HSPA_CAL_PHYCTEST_3GF val1 = %d
Line 14826: Received msg id is HSPA_CAL_HENDGAINCAL.BandInfo=%d, DigitalTargetTxPwr=%d.
Line 14839: Received msg id is HSPA_CAL_TXSPISASETUP
Line 14856: Received bandInfo = %d gainMode=%d spi0Index=%d setFreq=%d,T0=%d,Tsetup=%d,Thold=%d,endGainIndex=%d
Line 14859: Index[%d]=
Line 14882: HSPA_CAL_TXRFICSASETUP is Received Freq = %d #GainMode=%d Thold=%d 
Line 14891: Received msg id is HSPA_CAL_TXPDSASETUP
Line 14913: Received bandInfo = %d gainMode=%d pdm0=%d setFreq=%d,pdmStart=%d
Line 14914: Received pdmStop=%d,pdmStep=%d,T0=%d,Tsetup=%d,Thold=%d
Line 14923: Received msg id is HSPA_CAL_HGETTHERMISTORVAL 
Line 14947: Received msg id is HSPA_CAL_HLOADTHRTEMP 
Line 14962: Received msg id is HSPA_CAL_HTEMPCALFINISHED 
Line 14965: ThermistorVal=%d TemperatureVal=%d txPower=%d
Line 14968: After Sorting:: 
Line 14971: ThermistorVal=%d TemperatureVal=%d txPower=%d
Line 15001: Received msg id is HSPA_CAL_HSCANRSSI
Line 15004: scanBand=%d
Line 15011: UmodemStatus=%d
Line 15014: UmodemStatus=%d
Line 15045: HSPA_CAL_HSCANRSSI:uarfcn=%d,rssiAnt1=%d,rssiAnt2=%d
Line 15057: Received msg id is HSPA_CAL_HGETRSSISCANRESULT
Line 15059: bandInfo=%d
Line 15074: HSPA_CAL_HGETRSSISCANRESULT:bandStorage[%d]::uarfcn=%d,rssiAnt1=%d,rssiAnt2=%d len=%d
Line 15076: HSPA_CAL_HGETRSSISCANRESULT:Len=%d,noOfScanFreq=%d
Line 15088: band1Storage is NULL!!!!
Line 15097: Received msg id is HSPA_CAL_HILPC 
Line 15102: maxTxPower=%d & minTxPower=%d 
Line 15124: Received msg id is HSPA_CAL_HDELULCHAN 
Line 15131: Received msg id is HSPA_CAL_HGETRXRSCP 
Line 15133: Rscp=%d 
Line 15164: AT+HSPITEST received.spiData=0x%x,M=%d,K=%d,N=%d,readAddr=0x%x,reg1=%d,reg2=%d,
Line 15174: Read Result(address 0x%x)=0x%x 
Line 15195: AT+HSPITEST:Error Counter=%d 
Line 15198: [%d]:InnerLoopIndex=%d OuterLoopIndex=%d
Line 15206: Received msg id is HSPA_CAL_HSPITESTEND 
Line 15224: Received msg id is HSPA_CAL_MSRRXRSSI 
Line 15227: Measured whole  RSSI1=%d RSSI2=%d
Line 15293: HSPA_CAL_HRF2CALSTART: rfBoradTyep=%d
Line 15301: HSPA_CAL_HRF2CALEND
Line 15311: HSPA_CAL_HDLCELLSYNC2: rxuarfcn=%d
Line 15321: HSPA_CAL_HRXPOWER2: rxPower=%d
Line 15346: HSPA_CAL_HBUILDAGCTAB2: BUILD RX AGC TABLE
Line 15356: HSPA_CAL_HRXFREQSETUARFCN2: rxuarfcn=%d
Line 15381: HSPA_CAL_HRXFREQBUILD2: BUILD RX FREQ CAL TABLE
Line 15390: HSPA_CAL_HTXSTART2: txUarfcn=%d
Line 15399: HSPA_CAL_HTXSTART2: bandInfo=%d
Line 15411: HSPA_CAL_HGAINTABINDEX2: bandInfo=%d indexVal=%d
Line 15556: [ET_Cal] Load RFIC/Pgain Cal data
Line 15563: [RF ET] :3G Dynamic cal Start!:: Cal_Type : %d, BandClass = %d, Freq = %d, TxPower = %d
Line 15579: [ET_Cal] Load RFIC/Pgain Cal data
Line 15586: [RF ET] :3G Dynamic cal V2 Start!:: Cal_Type : %d, BandClass = %d, Freq = %d, TxPower = %d
Line 15592: Received msg id is HSPA_CAL_HTxETFreqSet
Line 15594: Received tx uarfcn = %d 
Line 15596: currentETFreqCalStep = %d 
Line 15603: Received msg id is HSPA_CAL_TXPWRMSRDFREQCAL
Line 15605: Received Tx Power = %d 
Line 15616: Received msg id is HSPA_CAL_BUILDTXFREQ 
Line 15626: Received msg id is HSPA_CAL_BUILDTXFREQV2 
Line 15642: Received msg id is HSPA_CAL_HTXETSASETUP
Line 15669: [ET_Cal] Load RFIC/Pgain Cal data
Line 15685: Received msg id is HSPA_CAL_HTXETSASETUP
Line 15712: [ET_Cal] Load RFIC/Pgain Cal data
Line 15733: Received msg id is HSPA_CAL_HTXETSARESULT, mode=%d
Line 15743: result_data first 3: size=%d, CH:(%d,%d,%d), Powmeas:(%d,%d,%d)
Line 15763: Received msg id is HSPA_CAL_HTXETSARESULT, mode=%d
Line 15773: result_data first 3: size=%d, CH:(%d,%d,%d), Powmeas:(%d,%d,%d)
Line 15796: HSPA_CAL_HSaBuildAPTTable::  num_PAmode=%d Pa_mode=%d, Num_cal_pt=%d 
Line 15801: HSPA_CAL_HSaBuildAPTTable::  msrd_Pwr=%d 
Line 15822: HSPA_CAL_HSaBuildRFICTable::  Pa_mode=%d, Num_cal_pt=%d 
Line 15828: HSPA_CAL_HSaBuildRFICTable::  msrd_Pwr=%d 
Line 15850: HSPA_CAL_HSaBuildRFICFullTable::  Pa_mode=%d, Num_cal_pt=%d 
Line 15868: Received msg id is HSPA_CAL_DSPSTOP
Line 15870: Force_TxRF_stop_DSP= %d 
Line 15886: Received msg id is HSPA_CAL_HTXAPTTUNE  DSP PD ctrl en state[%d]
Line 15913: [APTUNE] Cal Target power error !!
Line 15915: [APTUNE] RFComm_InternalPD_Gpadc2Txp error!! 
Line 15925: [APTUNE :: FreqCal] Index %d Freq %d PDval %d Msrd Txpower %d PD Tx Power %d PD comp offset %d
Line 15951: MTMCOMM_3GTask_FBRX_measure error
Line 15960:  [APTUNE :: PowerSet] Power err %d Setpower %d Msrd Txp %d dbg info %d
Line 15973: Received msg id is HSPA_CAL_HSENDMIPI
Line 15982: Received msg id is HSPA_CAL_HREADMIPI
Line 15992: msg memory allocation fail!!!!! 
Line 16000: Received msg id is HSPA_CAL_HSET_SMVCC
Line 16010: Received msg id is HSPA_CAL_HREAD_SM
Line 16020: msg memory allocation fail!!!!! 
Line 16034: Received msg id is HSPA_CAL_MIPIREAD
Line 16090: msg memory allocation fail!!!!! 
Line 16104: Received msg id is HSPA_CAL_MIPIWRITE
Line 16203: msg memory allocation fail!!!!! 
Line 16283: Received msg id is HSPA_CAL_ANTSWWRITE
Line 16305: msg memory allocation fail!!!!! 
Line 16329: msg memory allocation fail!! 
Line 16347: TDEBUGDUMP: debug_type=%d
Line 16368: TFBRPROC: input_1 = %d, input_2 = %d
Line 16384: TFBRPROC: output0 = %d, output1 = %d,output2 = %d,output3 = %d
Line 16410: Received msg id is TDD_CAL_TTXSTART
Line 16412: TDD_CAL_TTXSTART:received frequency = %d 
Line 16420: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 16428: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 16434: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 16447: TDD_CAL_TTXSTART : PD Type[%d]
Line 16467: TDD_CAL_TTXDCIQCAL received bandInfo=%d
Line 16468: DCIQCAL: tdd_rf_board_type=%d
Line 16490: BAND34 DC cal and IQ Imbalance calibration done
Line 16510: BAND39 DC cal and IQ Imbalance calibration done
Line 16524: Received msg id is TDD_CAL_TDLCELLSYNC
Line 16526: received frequency = %d (0x%x)
Line 16538: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 16546: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 16552: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 16614: TDD_CAL_TRXUARFCNSET: received frequency = %d 
Line 16672: TDD_CAL_TCHANGEMODE: spi mode = %d 
Line 16687: TDD_CAL_TGAINTABINDEX: bandInfo = %d 
Line 16712: TDD_CAL_TPGCTABINDEX: pgcIndex = %d 
Line 16727: TDD_CAL_TMSRDTXPOWER: msrdTxPwr = %d 
Line 16735: TDD_CAL_TTXPWRBUILD
Line 16750: TDD_CAL_TXFREQPGCIDX: pgcIndex = %d 
Line 16765: TDD_CAL_TXFREQUARFCN: received frequency = %d 
Line 16778: TDD_CAL_TTXPWRMSRDFREQCAL: msrdTxPwr = %d 
Line 16786: TDD_CAL_TBUILDTXFREQ
Line 16808: bandInfo=%d,calType=%d,lnaInfo=%d
Line 16822: bandInfo=%d,calType=%d,paInfo=%d
Line 16840: TDD_CAL_TASCAL : AntGroup=%d,bandInfo=%d,trxInfo=%d
Line 16860: TDD_CAL_TASFINALTEST : AntGroup=%d,bandInfo=%d,trxInfo=%d
Line 16881: TDD_CAL_TPDSETPGCINDEX: pgcIndex = %d 
Line 16897: TDD_CAL_TPDMSRDTXPOWER: msrdTxPwr = %d 
Line 16906: TDD_CAL_TPDBUILD
Line 16915: Received msg id is TDD_CAL_TPAVCCSET 
Line 16917: Received msg id is TDD_CAL_TPAVCCSET vccVoltage=%d
Line 16978: Received msg id is TDD_CAL_TSENDSPI spiData= 0x%x 
Line 16989: Received msg id is TDD_CAL_TREADSPI 
Line 16992: Received msg id is TDD_CAL_TREADSPI spiaddr = 0x%x spiWord=0x%x
Line 17002: Received msg id is TDD_CAL_TALLSPIREAD 
Line 17006: SPI ADDR[0x%x]=SPI_WORD[0x%x] 
Line 17016: Received msg id is TDD_CAL_TTXGAINSA
Line 17037: Received bandInfo = %d gainMode=%d vcc=%d setFreq=%d,PowerStart=%d,PowerStop=%d
Line 17038: Received gainStep=%d T0=%d,Thold=%d
Line 17047: Received msg id is TDD_CAL_TTXFREQSA
Line 17070: Received bandInfo = %d gainMode=%d txGainIdx1=%d setFreq=%d txGainIdx2=%d
Line 17071: Received freqStart=%d freqStop=%d freqStep=%d T0=%d,Thold=%d
Line 17080: Received msg id is TDD_CAL_TTXPDSA
Line 17099: Received bandInfo = %d gainMode=%d  setFreq=%d,PowerStart=%d,PowerStop=%d
Line 17100: Received gainStep=%d T0=%d,Thold=%d
Line 17109: Received msg id is TDD_CAL_TTXAPTGAINSA
Line 17128: Received bandInfo = %d gainMode=%d  setFreq=%d,aptTabStart=%d,aptTabStop=%d
Line 17129: Received gainStep=%d T0=%d,Thold=%d
Line 17138: Received msg id is TDD_CAL_TTXGAINSABUILD
Line 17148: Received msg id is TDD_CAL_TTXFREQSABUILD
Line 17160: Received msg id is TDD_CAL_TTXPDSABUILD
Line 17167: TxPD : DataPD %d
Line 17168: TxPD2 : DataPD %d Data2 %d
Line 17182: Received msg id is TDD_CAL_TTXAPTGAINSABUILD
Line 17190: TxAPT : DataSPI %d
Line 17193: TxAPT : DGC %d
Line 17210: Received msg id : TDD_CAL_TTXSRFICPREPDSA : CAL_MODE(%d), Alg_Ver(%d), Band(%d), GPADC_Target(%d), TxPow(Start,Overlap)=(%d,%d), NPow_Stage[%d]
Line 17236: Received msg id : TDD_CAL_TTXSRFICPDSA : GPADC(Target,Max)=(%d,%d), TxPow(Start,End,Step,Overlap)=(%d,%d,%d,%d), NPow_Stage[%d]
Line 17240: TDD_CAL_TTXSRFICPDSA : PD Type[%d], Band[%d], SetUarfcn[%d] | Cal Mode[%d], Ver[%d]
Line 17259: Received msg id is TDD_CAL_TTXSRFICPDSABUILD
Line 17290: Received msg id is TDD_CAL_TDLFINALCELLSYNC
Line 17298: TDD_CAL_TDLFINALCELLSYNC:received uarfcn = %d 
Line 17301: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 17308: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 17313: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 17343: Offset = %d, Freq_offset = %d, RSSI0  %d RSSI1 %d
Line 17373: Offset = %d, Freq_offset = %d, RSSI0  %d RSSI1 %d
Line 17388: FINAL CAL : RSCP = %d 
Line 17401: Received msg id is TDD_CAL_TGETSENSE
Line 17403: Received iteration = %d 
Line 17412: Try Synchronization one more time with freq=%d
Line 17422: Synchronization failed 2nd time also So return BER as 100
Line 17438: Received msg id is TDD_CAL_TTXPERSTART
Line 17440: TDD_CAL_TTXPERSTART:received Uarfcn = %d 
Line 17452: PLL LOCK :SPIword = %d, Loop variable  : %d  
Line 17460: PLL LOCK :SPIword = %d, But syncDoneTdd==FALSE so retry again
Line 17465: PLL LOCK :SPIword = %d, But syncDoneTdd==TRUE So break the loop
Line 17496: TDD_CAL_TSETTXPOWER: pgcIndex = %d 
Line 17498: TDD_CAL_TSETTXPOWER:gPrevRxUarfcn_TDD = %d bandInfo=%d,calType=2,paInfo=2
Line 17517: TDD_CAL_TSETMAXTXPOWER: pgcIndex = %d 
Line 17519: TDD_CAL_TSETMAXTXPOWER:gPrevRxUarfcn_TDD = %d bandInfo=%d,calType=2,paInfo=2
Line 17539: Received msg id : TDD_CAL_TSETTXCLPC : [%d,%d] TxPow(Start,End,Step)=(%d,%d,%d), wait_time [%d]
Line 17541: Received msg id : TDD_CAL_TSETTXCLPC : Band [%d] set uarfcn [%d]
Line 17592: SA_Mode = %d Dynamic_Mode = %d Final_Cal = %d 
Line 17617: Received msg id is TDD_CAL_TTESTLOG testCmd=%d, gPadcVal=%d
Line 17626: Received msg id is TDD_CAL_ANTSWSEL %d
Line 17637: GETANTSWSTATUS Antenna Switch State %d Antenna Switch Status %d 
Line 17652: msg memory allocation fail!!!!! 
Line 17662: Received msg id is TDSCDMA_SARCOMMAND %d %d %d
Line 17671: Message ID not correct
Line 17682: INFO:pal_TaskEntry_HSPA_CALIBRATION: Error in Message receiving!!!!
Line 17734: uhal_sendMsg2AtiTask:pal_MemAlloc fail
Line 17772: uhal_sendMsg2AtiTask:pal_MemAlloc fail
Line 17802: power_detector %d
Line 17805: power_detector %d
Line 17848: MTMCOMM_3GTask_hspaTmStart gpadc read en 
Line 17850: MTMCOMM_3GTaskConfigTM
Line 17857: MTMCOMM_3GTaskSetDSPTPC %d
