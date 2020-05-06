Line 444: [MARCONI] __fpll_sub6: Check for fpll_mode
Line 449: [MARCONI] __fpll_sub6: mode[%d] FPLL_STAT[0x%08X]
Line 495: [MARCONI] __ipll_sub6: Check for ipll_mode
Line 500: [MARCONI] __ipll_sub6: mode[%d], IPLL_STAT[0x%08X]
Line 546: [MARCONI] _wait_mcwulmutex: wait_cnt=%d t0turn=%d t0[0]=%d t0[1]=%d t1turn=%d t1[0]=%d t1[1]=%d
Line 612: [MARCONI] hal_MarcActivation_GNSS start
Line 615: assert condition : MPLL HPCM state error
Line 617: assert condition : PD_MDM_MBUS_DEMOD_3G HPCM state error
Line 619: assert condition : IPLL HPCM state error
Line 621: assert condition : (MDM_FRONT_TX | MDM_FRONT_RX) HPCM state error
Line 623: assert condition : RF_VRF HPCM state error
Line 625: assert condition : MARCONI HPCM state error
Line 633: [MARCONI] hal_MarcActivation_GNSS end
Line 651: [MARCONI] hal_MarcDeactivation_GNSS start
Line 657: assert condition : MARCONI HPCM state error
Line 659: assert condition : RF_VRF HPCM state error
Line 661: assert condition : (MDM_FRONT_TX | MDM_FRONT_RX) HPCM state error
Line 663: assert condition : IPLL HPCM state error
Line 665: assert condition : PD_MDM_MBUS HPCM state error
Line 667: assert condition : MPLL HPCM state error
Line 669: [MARCONI] hal_MarcDeactivation_GNSS end
Line 688: [MARCONI] hw_MarcLISR: LISR Rcvd hwMarcIrqSts:0x%x hwMarcChIrqSts:0x%x
Line 751: [MARCONI] _MarcHisr: RAT_2G == currRat
Line 770: [MARCONI] _MarcHisr: Marconi PD already off
Line 789: [MARCONI] _MarcHisr: marcLinkIntSts:0x%x marcLinkChIntSts:0x%x marcLinkIntEn:0x%x marcLinkChIntEn:0x%x
Line 801: [MARCONI] _MarcHisr: backup_difout0[%d]
Line 990: [MARCONI] _init
Line 1004: [MARCONI] _init: RFD_AUX_TCXO_EN_CTRL[0x%08X] 
Line 1052: [MARCONI] _init: IPLL_STAT[0x%08X], pll_lock_cnt(%d)
Line 1078: [MARCONI] _init: FPLL_DSM_F_BB[0x%08X] FPLL_DSM_F_RF[0x%08X] 
Line 1091: [MARCONI] _init: FPLL_STAT0[0x%08X], pll_lock_cnt(%d)
Line 1136: [MARCONI] _powerOn: phyCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 1137: [MARCONI] _powerOn: phyCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X lockVal 0x%X
Line 1145: [MARCONI] _powerOn: BB[0x%x] RF[0x%x]
Line 1149: [MARCONI] _sleepMon: CMU_RESET[0x%x] LDO[0x%x] PHYCFG[0x%x] FPLL_STAT[0x%X] CSPEEDY[0x%x]
Line 1157: [MARCONI _init: pllTimingGapVal = 0x%X
Line 1243: [MARCONI] _init: replace HW to support UL 8 lane: RF[%d]
Line 1247: [MARCONI] _init: (DL 1 lane) replace HW to support 8 lane: RF[%d] BB[%d]
Line 1295: [MARCONI] _sync: FPLL_STAT0 [0x%x], pll_lock_cnt(%d)
Line 1340: [MARCONI] _sync: mode %d, pllTimingGapVal 0x%x
Line 1386: [MARCONI] _syncMuxSel: mode %d, fpll_sel %d
Line 1392: [MARCONI] _setDSMRstVal: DSM VAL RESET
Line 1475: [MARCONI] _difModeSetStart
Line 1500: [MARCONI] _difModeSetDone
Line 1534: [MARCONI] _checkLinkChStatus: MARC_LINK_CH_ENABLE != MARC_LINK_CH_CONFIG
Line 1837: [MARCONI] _irat GNSS
Line 1848: [MARCONI] _irat: rat[%d], path[%d]
Line 1863: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1869: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1875: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1881: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1887: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1893: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1899: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1905: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1911: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1917: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1923: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1929: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1935: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1940: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1945: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1950: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1955: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1960: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1965: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1970: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1975: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1980: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1985: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1990: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 1995: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 2000: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 2006: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 2012: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 2018: [MARCONI] Dump MSpeedy = 0x%03x , 0x%08x
Line 2032: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)(0x%08x)(0x%08x)
Line 2043: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)(0x%08x)(0x%08x)
Line 2046: [MARCONI] Dump [0x%08x] = (0x%08x)
Line 2056: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)(0x%08x)(0x%08x)
Line 2064: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)(0x%08x)(0x%08x)
Line 2067: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)
Line 2070: [MARCONI] Dump [0x%08x] = (0x%08x)
Line 2078: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)(0x%08x)(0x%08x)
Line 2081: [MARCONI] Dump [0x%08x] = (0x%08x)(0x%08x)
Line 2087: [MARCONI] WriteMcwUserChFr2 addr[0x%X] data[0x%X]
Line 2092: [MARCONI] WriteMcwUserChFr2 userDataH[0x%X] userDataL[0x%X]
Line 2115: [MARCONI] _monitor Rx: Sts[0x%08X] ChSts[0x%08X] EOT[0x%08X] CRC[0x%08X] FLT3[0x%08X] FLT4[0x%08X] CHEN[0x%08X]
Line 2118: [MARCONI] _monitor Tx: FLT3[0x%08X] FLT4[0x%08X] FLT5[0x%08X] FLT6[0x%08X] FLT17[0x%08X] FLT18[0x%08X] CHEN[0x%08X]
Line 2121: [MARCONI] _monitor Sampling Freq: RF[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 2123: [MARCONI] _monitor Sampling Freq: RF_F[0x%08X][0x%08X][0x%08X] Rx: FLT17[0x%08X] FLT18[0x%08X]
Line 2125: [MARCONI GNSS] CH2_TX[0x%08X] CH2_RX[0x%08X]
Line 2135: [MARCONI] _monitor Sampling Freq: BB[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 2138: [MARCONI] _monitor Sampling Freq: BB[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 2141: [MARCONI] _monitor Sampling Freq: MXR[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 2144: [MARCONI] _monitor Sampling Freq: MXR[0x%08X][0x%08X][0x%08X][0x%08X][0x%08X][0x%08X]
Line 2147: [MARCONI] _monitor PLL: CON8_MPLL[0x%X] FPLL_DSM_F[0x%X] RAT_SEL[0x%X] FPLL_STAT[0x%08X]
Line 2150: [MARCONI] _monitor CMU: RFD_CMU_CLK_SRC_SEL[0x%X] F_CON0[0x%X] F_CON1[0x%X] I_CON0[0x%X] I_CON1[0x%X] I_STAT[0x%08X] HalfClk:%d
Line 2152: [MARCONI] _monitor DLL: rPHY_CON4[0x%08X] rPHY_CON5[0x%08X] rPHY_CON6[0x%08X] rPHY_CON2[0x%08X] rPHY_CON3[0x%08X] rPHY_CON7[0x%08X] rPHY_STAT0[0x%08X]
Line 2154: [MARCONI] _monitor LPM: MCLK0[0x%08X] MCLK1[0x%08X] MCWPHY_CLK0[0x%08X] MCWPHY_CLK1[0x%08X]
Line 2170: [MARCONI] _monitor Rx: Sts[0x%08X] ChSts[0x%08X] EOT[0x%08X] CRC[0x%08X]
Line 2172: [MARCONI] _monitor Tx: ChSts[0x%08X] CH3 Sts[0x%08X] CH4 Sts[0x%08X] CH17 Sts[0x%08X] CH18 Sts[0x%08X]
Line 2174: [MARCONI] _monitor Rx: CH3 Sts[0x%08X] CH4 Sts[0x%08X] CH17 Sts[0x%08X] CH18 Sts[0x%08X]
Line 2211: [MARCONI] _monitor CMU: RFD_CMU_SW_RESETn[0x%X] RFD_CMU_SW_CLK_ON[0x%X] FPLL_CON0[0x%X] FPLL_CON1[0x%X] IP_CON0[0x%X] IPLL_CON1[0x%X] HalfClk:%d
Line 2215: [MARCONI] _monitor DLL: rPHY_CON0[0x%08X] rPHY_CON1[0x%08X] rPHY_CON2[0x%08X] rPHY_CON3[0x%08X] rPHY_CON9[0x%08X] rPHY_CON12[0x%08X] rPHY_STAT0[0x%08X]
Line 2226: [MARCONI UL] EN RF CH[0x%08X] BB CH[0x%08X] Rx Sts [0x%08X] Rx ChSts [0x%08X] EOT[0x%08X] CRC[0x%08X]
Line 2227: [MARCONI UL] RF Status CH2[0x%08X] CH3[0x%08X] CH4[0x%08X] BB Status CH2[0x%08X] CH3[0x%08X] CH4[0x%08X]
Line 2228: [MARCONI UL] RFD_GSM_DIF_CFG [0x%08X] RFD_GSM_POLAR_CFG [0x%08X] RFD_TXF_GSM_MODE_ON [0x%08X] DIGI_DAC_ENABLE [0x%08X] UL_DIF_GSM_MODE.ON1 [0x%08X]
Line 2289: [MARCONI] _check: FRAMECOUNT: %d
Line 2294: [MARCONI] _check[%d]: error count increasing! EOT[0]: %d, EOT[1]: %d, CRC[0]: %d, CRC[1]:%d
Line 2301: [MARCONI] _check[%d]: frame count is not increasing! countframe[0]: %d, countframe[1]: %d
Line 2308: [MARCONI] _check[%d]: Tx channel off. FLT3: 0x%X, FLT4: 0x%X
Line 2331: [BU_MODE] _cordicADC: Cordic is enabled
Line 2342: [MARCONI] _sleep
Line 2381: [MARCONI] _sleep: Marconi power off and RF I/FPLL off
Line 2407: [MARCONI] _setDefaultCalVal: phyCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 2408: [MARCONI] _setDefaultCalVal: phyCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X lockVal 0x%X
Line 2443: [MARCONI] _backupCalVal: phyCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X lockVal 0x%X
Line 2444: [MARCONI] _backupCalVal: phyCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X marconi_tx_rx_hw_cal 0x%X
Line 2454: [MARCONI] _muxIF: rat[%d]
Line 2458: [MARCONI] _muxIF: RFD_GPSLAVE_PHY_CTRL[%x]
Line 2508: [MARCONI] _muxIF: RFD_GPSLAVE_PHY_CTRL[%x]
Line 2538: [MARCONI] _muxIF: CON0_IPLL[0x%X]
Line 2566: [MARCONI] _muxIF: rat[%d], currentIPLL: 0x%X, rPHY_STAT0[0x%X]
Line 2582: [MARCONI] _muxIF: CON0_IPLL[0x%X]
Line 2588: [MARCONI] _muxIF: CON0_IPLL[0x%X]
Line 2603: [MARCONI] _muxIF: IPLL_STAT[0x%08X], pll_lock_cnt(%d)
Line 2631: [MARCONI] _muxIF: RFD_GPSLAVE_PHY_CTRL[%x]
Line 2675: [MARCONI] _muxIF: rat[%d], currentIPLL: 0x%X, rPHY_STAT0[0x%X]
Line 2744: [MARCONI] _DlSmdTest(start)
Line 2840: [MARCONI] _DlSmdTest(process) : curLane[%d] -------------------------------
Line 2848: [MARCONI] _DlSmdTest(dump) : curLane[%d], intrSts[0x%08X], CRC Count[0x%08X], EOT Count[0x%08X]
Line 2861: [MARCONI] _DlSmdTest(end) : Lane[%d], intrSts[0x%08X]
Line 2867: [MARCONI] _NullFunc: arg r0 = 0x%08X, r1 = 0x%08X, r2 = 0x%08X, r3 = 0x%08X
Line 2977: [MARCONI MM_UL] _mmulEnableDisableINTR
Line 3337: [MARCONI UL] _ulSetDefaultCalVal: ulPhyCalVal-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 3338: [MARCONI UL] _ulSetDefaultCalVal: ulPhyCalVal-8 0x%X 0x%X 0x%X ulPhyVrefVal 0x%X shift 0x%X 0x%X
Line 3373: [MARCONI UL] _ulBackupCalVal: phyTxCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 3374: [MARCONI UL] _ulBackupCalVal: phyTxCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X marconi_ul_tx_rx_hw_cal 0x%X
Line 3456: [MARCONI UL] _ulInit
Line 3498: [MARCONI UL] _ulInit: phyCalVal0-5 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X
Line 3499: [MARCONI UL] _ulInit: phyCalVal6-8 0x%X 0x%X 0x%X phyVrefVal 0x%X shift 0x%X 0x%X
Line 3516: [MARCONI UL] _ulInit: Set 1 lane for EVT0.0
Line 3547: [MARCONI UL] _difModeSetX2GStartULG
Line 3568: [MARCONI UL] _ulSleep
Line 3603: [MARCONI] _ulSleep: RFD_GPSLAVE_PHY_CTRL[%x]
Line 3617: [MARCONI UL] _ulIrat : rat %d path %d
Line 3649: [MARCONI UL] _ulIrat : rat %d is unknown
Line 3676: [MARCONI UL] _ulCheck
Line 3681: [MARCONI UL] _ulCheck: can't use RFD UL MARCONI. RFD_GPSLAVE_PHY_CTRL 0x%08X
Line 3700: [MARCONI UL] _ulCheck: crashOn %d VALID_CLK 0x%08X DVALID_CLK 0x%08X INTR_STS 0x%08X EOT_ERR_CNT 0x%08X CRC_ERR_CNT 0x%08X
Line 3730: [MARCONI UL] _ulCheck(+CHECKMARC): prevErrCnt %d eotErrCnt %d
Line 3747: [MARCONI UL] _ulCheck(+CHECKMARC): prevErrCnt %d crcErrCnt %d
Line 3756: [MARCONI UL] _ulCheckErrCnt : INTR_STS 0x%08X EOT_ERR_CNT 0x%08X CRC_ERR_CNT 0x%08X ret %d
Line 3796: [MARCONI UL] _ulSmdTest : lane %d UL_INTR_STS 0x%08X
Line 3827: [MARCONI UL] _ulMonitor: VALID_CLK0[0x%08X] DVALID_CLK0[0x%08X] INTR_STS[0x%08X] CH_INTR_STS[0x%08X] CH_EN[0x%08X] EOT_ERR_CNT[0x%08X] CRC_ERR_CNT[0x%08X]
Line 3833: [MARCONI UL] _ulMonitor Rx: CH1_STS[0x%08X] CH2_STS[0x%08X] CH3_STS[0x%08X] CH4_STS[0x%08X]
Line 3842: [MARCONI UL] _ulDump
Line 3850: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3856: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3862: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3868: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3874: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3880: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3886: [MARCONI UL] _ulDump Tx: [0x%08x]=(0x%08x) [0x%08x]=(0x%08x) [0x%08x]=(0x%08x)
Line 3896: [MARCONI UL] _ulDump Rx HISpeedy: [0x%04x]=(0x%08x) [0x%04x]=(0x%08x) [0x%04x]=(0x%08x)
Line 3902: [MARCONI UL] _ulDump Rx HISpeedy: [0x%04x]=(0x%08x) [0x%04x]=(0x%08x) [0x%04x]=(0x%08x)
Line 3908: [MARCONI UL] _ulDump Rx HISpeedy: [0x%04x]=(0x%08x) [0x%04x]=(0x%08x) [0x%04x]=(0x%08x)
Line 3914: [MARCONI UL] _ulDump Rx HISpeedy: [0x%04x]=(0x%08x) [0x%04x]=(0x%08x) [0x%04x]=(0x%08x)
Line 3920: [MARCONI UL] _ulDump Rx HISpeedy: [0x%04x]=(0x%08x) [0x%04x]=(0x%08x) [0x%04x]=(0x%08x)
Line 4936: [MARCONI] _getMarcInitFlag(%d)
Line 5237: [MARCONI] _difModeSetStartChn
Line 5284: [MARCONI] _difModeSetDoneChn
Line 5294: [MARCONI] _difModeSetStartG
Line 5336: [MARCONI] _difModeSetDoneG
Line 5453: [MARCONI] _difModeSetDoneX2G
Line 5629: [MARCONI] _difModeSetStartULG
Line 5648: [MARCONI] _difModeSetDoneULG
Line 5661: [MARCONI UL]RFD_GSM_DIF_CFG [0x%08X] RFD_GSM_POLAR_CFG [0x%08X] RFD_TXF_GSM_MODE_ON [0x%08X] 
Line 5662: [MARCONI UL] UL_RFD_CFG.DIGI_DAC_ENABLE [0x%08X] UL_DIF_GSM_MODE.ON1 [0x%08X] 
Line 5663: [MARCONI UL] EN RF CH[0x%08X] BB CH[0x%08X] 
