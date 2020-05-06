Line 270: NR_DEMOD_SINR_CCH cur, Coreset%d(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Psig(Rx0/Rx1/Rx2/Rx3):(%d,%d,%d,%d), WideR (Rx0/Rx1):(0x%x) (Rx2/Rx3):(0x%x), validBit(%d)
Line 392: NR_DEMOD_SINR_SCH cur, PDSCH%d(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Psig_dB(Rx0/Rx1/Rx2/Rx3):(%8d,%8d,%8d,%8d), WideR_dB(Rx0/Rx1):(%d) (Rx2/Rx3):(%d), magicNumber:(%d)
Line 402: NR_DEMOD_SINR_SCH cur, PDSCH%d(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Psig(Rx0/Rx1/Rx2/Rx3):(%d,%d,%d,%d), WideR (Rx0/Rx1):(0x%x) (Rx2/Rx3):(0x%x), magicNumber:(%d)
Line 453: NR_DEMOD_SINR_CSIBM cur CSIRS0(RX0/RX1):%6d, CSIRS0(RX2/RX3):%6d
Line 484: NR_DEMOD_SINR_CSIRS cur CSIRS0(RX0/RX1):%6d, CSIRS0(RX2/RX3):%6d, CSIRS1(RX0/RX1):%6d, CSIRS1(RX2/RX3):%6d, CSIRS0_IDX:%d, CSIRS1_IDX:%d, csirsOnSlot %d
Line 489: NR_DEMOD_SINR_CSIRS cur CSIRS2(RX0/RX1):%6d, CSIRS2(RX2/RX3):%6d, CSIRS3(RX0/RX1):%6d, CSIRS3(RX2/RX3):%6d, CSIRS2_IDX:%d, CSIRS3_IDX:%d
Line 523: NR_DEMOD_SINR_TRS cur_TRS0(RX0/RX1):%6d, cur_TRS0(RX2/RX3):%6d, avg_TRS0(RX0/RX1):%6d, avg_TRS0(RX2/RX3):%6d
Line 605: NR_DEMOD_SINR_SSB cur SSB%d(Rx0/Rx1):%6d,(Rx2/Rx3):%6d, Psig(Rx0/Rx1/Rx2/Rx3):(%d,%d,%d,%d), Niv(Rx0/Rx1):(0x%x), (Rx2/Rx3):(0x%x), magicNumber:0x%x
Line 980: (F)Invalid Datamover update, Buf0:0x%x, Buf1:0x%x
Line 1015: (F)Invalid Datamover update, Buf0:0x%x, Buf1:0x%x
Line 1177: CsirsReportInfo2L1 FAIL!!! rsIndex0 %d, rsIndex1 %d, current rsIndex %d
Line 1648: NrDmMonitoring: pIwH %d, pAgcH %d, pDciH %d, pCsiH %d, pSinrH %d, pSinr_csiH%d
Line 1650: NrDmMonitoring: pDseH %d, pDse_csiH %d, pDse_prH %d, pTcH %d, pTc_dciH %d, pTc_dmrsH %d
Line 2094: [PHY_CSIRS] CSIRS%d SINR pwr/niv, txk:%d, AvgPwr0:%d, Pniv0:%d, AvgPwr1:%d, Pniv1:%d, AvgPwr2:%d, Pniv2:%d, AvgPwr3:%d, Pniv3:%d
Line 2121: [PHY_CSIRS] CSIRS_NIV rx0 %d, rx1 %d, rx2 %d, rx3 %d, status0 %d, status1 %d, status2 %d, rtg_r %x, rtg_2 %x
Line 2210: [PHY_CSIRS] CSIRS%d SINR pwr/niv, txk:%d, AvgPwr0:%d, Pniv0:%d, AvgPwr1:%d, Pniv1:%d, AvgPwr2:%d, Pniv2:%d, AvgPwr3:%d, Pniv3:%d
Line 2237: [PHY_CSIRS] CSIRS_NIV rx0 %d, rx1 %d, rx2 %d, rx3 %d, status0 %d, status1 %d, status2 %d, rtg_r %x, rtg_2 %x
Line 2293: [PHY_CSIRS] TRS: IFFT_RBNum %d, IFFT_Size %d, trs_index %d, numRx %d, status0 %d, status1 %d, rtg_0 %x, rtg_2 %x
Line 2331: [PHY_CSIRS] TRS%d SINR pwr/niv, AvgPwr0:%d, Pniv0:%d, AvgPwr1:%d, Pniv1:%d, AvgPwr2:%d, Pniv2:%d, AvgPwr3:%d, Pniv3:%d
Line 2406: NrNbceSinrMonitoring SCH, ccIdx:%d, slotIdx:%d, tag0[1/0]:0x%x,0x%x, sBufIdx:%d, magicNumber:0x%x p_NrNbceSinr 0x%x
Line 2444: (F) NrNbceSinrMonitoring NBCE PDSCH DMRS extractor not done(tag0[1/0]:0x%x,0x%x)
Line 2482: (F)Invalid Datamover update(DrsDmrs), Buf0:0x%x, Buf1:0x%x
Line 2513: [NrPdcchSinr] tag0(0x%x,0x%x), 0(0x%x,0x%x), 1(0x%x,0x%x), 2(0x%x,0x%x)
Line 2524: [CCH WideR] nr_wider_report_control(%x) CCH_WidebandR_RX0/1/2/3(%d/%d/%d/%d)
Line 2584: (F) NrNbceSinrMonitoring NBCE PDCCH DMRS extractor not done(tag0[1/0]:0x%x,0x%x)
Line 2660: [sinr debug] sBufIdx(%d), pdschIdx(%d), widebandR(%d,%d,%d,%d), prev_slot_meas_valid(%d), wideR_valid(%d)
Line 2723: (F) abnormal schWideR register value, modify value: from (%d) to (%d)
Line 2930: [PHY_CSIRS_DEBUG] DcCeCsirsReg: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 2940: [PHY_CSIRS_DEBUG] DcCePpCsirsReg: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 2965: [PHY_CSIRS_DEBUG] DcCeDnCsirsReg: 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
