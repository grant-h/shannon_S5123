Line 100: [RF DBG] =================== GPIO Dump START ===================
Line 101: [RF DBG] GPIO size:%d RFIO state:0x%x
Line 112: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
Line 119: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
Line 126: [RF DBG] =================== GPIO(TRX SW) Dump START ===================
Line 127: [RF DBG] GPIO size:%d
Line 138: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
Line 145: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d
Line 150: [RF DBG] TRX SW GPIO is not initialized!!! size(%d)
Line 247: [RF DBG] ================ LNA Dump START (%s dev type)================
Line 257: %s: Invalid usid[0x%x] or path[0x%x]
Line 260: [RF DBG] LNA usid:0x%x mipi_ch:%d
Line 264: [RF DBG] LNA Addr0:0x%x Addr1:0x%x Addr2:0x%x Addr3:0x%x Addr0x1C:0x%x
Line 275: [RF DBG] LNA usid:0x%x mipi_ch:%d
Line 279: [RF DBG] LNA Addr0:0x%x Addr1:0x%x Addr2:0x%x Addr3:0x%x Addr0x1C:0x%x
Line 300: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s]
Line 307: [RF DBG] [%s] [gpio%d] [%s] [%s] [%s] - XCP_ANT_SW%d 
Line 339: [RF DBG] ================ PAM Dump START (%s dev type) ================
Line 340: [RF DBG] PA usid:0x%x mipi_ch:%d
Line 349: [RF DBG] PAM dump 0x%x 0x%x 0x%x 0x%x 0x%x
Line 357: [RF DBG] PAM dump 0:0x%x 1:0x%x 2:0x%x 3:0x%x 1C:0x%x
Line 361: [RF DBG] =================== GPIO PAM (Not Supported)===================
Line 379: [RF DBG] =================== SHM Dump START ===================
Line 401: [RF DBG] SM votage read error
Line 404: [RF DBG] =================== SM Dump START ===================
Line 405: [RF DBG] SM mode:%d voltage:%d
Line 433: [RF DBG] ================ FEM Dump START (%s dev type) ================
Line 439: [RF DBG] FEM TRX_type:%s usid:0x%x mipi_ch:%d
Line 448: [RF DBG] FEM 0x%x 0x%x 0x%x 0x%x 0x%x
Line 457: [RF DBG] FEM 0:0x%x 1:0x%x 2:0x%x 3:0x%x 4:0x%x 5:0x%x 6:0x%x
Line 458: [RF DBG] FEM  7:0x%x 1C:0x%x
Line 473: %s: Invalid usid[0x%x] or path[0x%x]
Line 476: [RF DBG] FEM TRX_type:%s usid:0x%x mipi_ch:%d
Line 485: [RF DBG] FEM 0x%x 0x%x 0x%x 0x%x 0x%x
Line 493: [RF DBG] FEM 0:0x%x 1:0x%x 2:0x%x 3:0x%x 1C:0x%x
Line 521: [RF DBG] =================== RACH Fail Dump START ===================
Line 529: RachCnt(%d) TransTTI(%d) Power(%d) GpadcVal(%d)
Line 595: [RF DBG] %s RFCTRL Power Domain Off !!
Line 605: [RF DBG] %s !! [RachFailCnt:%d][RachFailDumpStep:%d]
Line 639: [RF DBG] %s cal status check !! : %d
Line 722: [RF DBG] =================== HIGH AGC Dump START ===================
Line 723: [RF DBG] AGC of CC%d %s is %d, over %d
Line 736: [RF DBG] AGC of CC%d %s is %d, under %d
Line 763: [RF DBG] RF_DBG_High_IQC: cc%d iqc(%d, %d
Line 786: [RF DBG] RF_DBG_Dump_abnormal_Tx: invalid trx_type(%d)
Line 813: [RF] PD(PAM) : USID[%x] 0x0[%2X] 0x1[%2X] 0x2[%2X] 0x3[%2X] 0x4[%2X] 0x1C[%2X]
Line 820: [RF] PD(PAM) : 0x1D[%2X] MIPI_Read(0x0, 0xD, 0x3)[%2X] MIPI_Read(0x0, 0xD, 0x1C)[%2X] MIPI_Read(0x2, 0xD, 0x3)[%2X] MIPI_Read(0x2, 0xD, 0x1C)[%2X]
Line 823: [RF DBG] RF_DBG_Dump_abnormal_Tx: pd type[%d] Not supported
Line 860: [Info] %s Band[%d][%d] RebuildCheck[%d] OriginalPDStageOffset[%d]
Line 874: [Info] %s : Not need to rebuild
Line 883: [Info] %s : Restore Start : StageOffset[%d]
Line 888: [Info] %s : Abnormal gpadc => CRASH !!!!
Line 896: [Info] %s Start : PDStageShift[%d dB] Original_offset[%d]
Line 949: [RF Drv] %s : exception : cal status[%d] mtm[%d] BigDataReport[%d]
Line 962: [Info] %s : Invalide TX TYPE!!!
Line 976: [Info] FBRX CONFIG[%d] FBRX GAIN[%d]
Line 993: [Info] Modem State GSM[%d] HSPA[%d] LTE[%d] NR[%d] ULCA[%d]
Line 1030: [Info] SFN[%4d] CHTYPE[%d] PdStage[%x] GPADC[%6d] TXPOWER[%5d] PDPOWER[%5d] Diff[%5d]
Line 1043: [Info] SFN[%4d] PA mipi [0x%x 0x%x 0x%x 0x%x 0x%x] VCC[%3d]
Line 1076: [Info] SFN[%d] RXVALUE[%d] PATEMP[%d] CH[%d] Abnormal Counter[%d] Before CHTYPE[%d]
Line 1078: [Info] PLLSTATE[%d] TopConfig1[0x%x] TopConfig2[0x%x] MS[0x%x] NVOffset[%d] TX GAIN[%d]
Line 1096: [Info] %s : First Bigdata report
Line 1100: [Info] %s : Due to same band, skip bigdata report
Line 1106: [Info] %s Bigdata report !!!! 
Line 1139: [Info] RFPD : PD Stage recover OriginalPDStageOffset[%d] StopFinetracking[%d]
Line 1192: [RF Drv] %s : exception : cal status[%d] mtm[%d] BigDataReport[%d]
Line 1200: [NR Info] %s : Invalide TX TYPE!!!
Line 1215: [NR Info] FBRX CONFIG[%d] FBRX GAIN[%d]
Line 1261: [NR Info] SFN[%4d] CHTYPE[%d] PdStage[%x] GPADC[%6d] TXPOWER[%5d] PDPOWER[%5d] Diff[%5d]
Line 1275: [NR Info] SFN[%4d] PA mipi [0x%x 0x%x 0x%x 0x%x 0x%x] VCC[%3d]
Line 1311: [NR Info] SFN[%d] RXVALUE[%d] PATEMP[%d] CH[%d] Abnormal Counter[%d] Before CHTYPE[%d]
Line 1313: [NR Info] PLLSTATE[%d] SSPLLSTATE[0x%x] TopConfig1[0x%x] TopConfig2[0x%x] MS[0x%x] NVOffset[%d] TX GAIN[%d]
Line 1328: [NR Info] %s : First Bigdata report
Line 1338: [NR Info] %s Bigdata report !!!! 
Line 1441: [CrashInfo] ================================= %s START===============================
Line 1443: [CrashInfo] uarfcn[%d] channelState[%d] rscp[%d]
Line 1444: [CrashInfo] Tx Lock[%d] Tx_topconfig1[0x%x] Tx_topconfig2[0x%x] Tx_gain[0x%x]
Line 1445: [CrashInfo] txPower[%d] pdPower[%d] pdadc[%d] temperature[%d] 
Line 1446: [CrashInfo] PA Vcc[%d] PA Bias[0x%x] PA Mode[0x%x]
Line 1450: [CrashInfo] FBRX config[0x%x] FBRX gain[0x%x] 
Line 1453: [CrashInfo HSPA] =================================E N D================================
