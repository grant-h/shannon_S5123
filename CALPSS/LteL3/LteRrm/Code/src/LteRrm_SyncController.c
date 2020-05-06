Line 360: [%d]Cell(%d) Earfcn(%d) time_offset(%d) is regarded as interference cell in blind search request
Line 444: Invalid srchMode mode = %d
Line 468: LteRrm_ResetMaxM0M1Value
Line 472: pFreqInfo is NULL
Line 579: Target cell offset shift : %d
Line 638: Target cell offset shift : %d
Line 707: No action in LteRrm_ProcCellChangeCnf(srchMode:%d)
Line 827: Cannot be Candi Cell, since cellbarred(%d)
Line 832: Cannot be Candi Cell, since CSG Reserved List(%d)
Line 844: [RRM TEST][SEARCH] Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 850: [RRM TEST][SEARCH] Found Target Cell but NOT best(earfcn:%d, cell id:%d, index:%d)
Line 857: [RRM TEST][SEARCH] NOT Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 862: [RRM TEST][SEARCH] Cell Search Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 901: there is no candidated cell1(%d)
Line 924: there is no candidated cell2(%d)
Line 979: Target cell(cell_idex:%d) is detected in search results
Line 990: Change best_cell_index(%d) for the target cell of IRAT
Line 1015: Cannot be Candi Cell, since cellbarred(%d)
Line 1027: [RRM TEST] Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 1033: [RRM TEST] Found Target Cell but NOT best(earfcn:%d, cell id:%d, index:%d)
Line 1040: [RRM TEST] NOT Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 1045: [RRM TEST] Cell Search Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 1104: Cannot be Candi Cell, since cellbarred(%d)
Line 1148: LteRrm_ProcSearchDone (SRCH_INIT), best_cell_index(%d), cell ID(%d)
Line 1270: All detected cells are cellbarred
Line 1298: LteRrm_ProcSearchDone (LTERRM_SRCHMODE_REINIT_DRX), best_cell_index = %d
Line 1317: Cell LOST (DRX unstable) !!!: LTE_CPHY_CELL_RESEL_EVAL_IND with FAIL
Line 1359: CandiCellListInfo.Num(%d)(drx cycle:%d)
Line 1364: LteRrm_ProcSearchDone (LTERRM_SRCHMODE_BPLMN_SRCH)
Line 1381: SYNC FAIL in BPLMN
Line 1439: LteRrm_ProcSearchDone (SRCH_IRAT_BLIND_HO)
Line 1446: LteRrm_ProcSearchDone (SRCH_BLIND_HO)
Line 1477: Matched cell not found (SRCH_BLIND_HO)
Line 1495: RETRY!!(%d)
Line 1576: LteRrm_ProcSearchDone (SRCH_INIT), best_cell_index = %d
Line 1594: All detected cells are cellbarred
Line 1601: RETRY!!
Line 1647: LteRrm_ProcSearchDoneForCgiSrch (search_result num:%d)
Line 1674: CGI Cell ID(%d) found
Line 1686: Matched cell not found (CgiState:%d)
Line 1693: CGI change State(%d -> LTERRM_CGI_RETURN)
Line 1706: Invalid CgiMeasType(%d)
Line 1731: LteRrm_ProcSearchDone (CGI return : %d)
Line 1790: LteRrm_ProcSearchDone (Invalid mode = %d)
Line 1815: L1LC_SyncTimerExpired:LTERRM_SC_CELL_SRCH(srchMode:%d)
Line 1841: Cell LOST (DRX unstable) !!!: LTE_CPHY_CELL_RESEL_EVAL_IND with FAIL
Line 1845: CGI cell Cell search failure
Line 1854: CGI change State(%d -> LTERRM_CGI_RETURN)
Line 1867: Invalid CgiMeasType(%d)
Line 1897: [RRM TEST][SEARCH] Cell Search Timer Expired
Line 1901: [RRM TEST][SEARCH] Cell Search Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 1921: Receive LteRrm_ProcPbchDone (pbchMode = %d)
Line 1955: Measurement for checking S criteria, earfcn=%d, cell ID=%d)
Line 1979: [RRM TEST][MIB] Decoding Success (earfcn:%d, cell id:%d)
Line 1982: [RRM TEST][MIB] Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 2062: Resume SI update procedure deferred by Reinit DRX
Line 2075: CGI change State(LTERRM_CGI_RETURN -> LTERRM_CGI_RETRY)
Line 2122: Measurement for checking S criteria, earfcn=%d, cell ID=%d)
Line 2139: Warning! PSCell==NULL at PBCH PSCELL Done
Line 2147: - decoded dl_bw(%d) is different with rrc signaling(%d)
Line 2161: Warning! pSaveRrmCfgMsgPSCell==NULL at PBCH PSCELL Done
Line 2167: Warning! pbchmode=LTERRM_PBCHMODE_PSCELL without enabling LTE_REL12_DUALC
Line 2186: no Intra-freq(%d) meas. configuration - update measBW as MIB(%d)
Line 2217: Invalid CellSrchInfo.pbchMode(%d)
Line 2251: Receive LteRrm_ProcPbchDoneTmrExpr(pbchMode:%d)
Line 2262: [RRM TEST][MIB] Decoding FAIL (earfcn:%d, cell id:%d)
Line 2266: [RRM TEST][MIB] Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 2297: Simulate sending LTE_CPHY_FREQ_SCAN_CNF to RRC (num_freq_in_list = %d)
Line 2313: CGI change State(%d -> LTERRM_CGI_RETURN)
Line 2324: CGI change State(LTERRM_CGI_RETURN -> LTERRM_CGI_RETRY)
Line 2341: Measurement for checking S criteria, earfcn=%d, cell ID=%d)
Line 2380: Warning! pSaveRrmCfgMsgPSCell==NULL at PBCH PSCELL ends
Line 2385: Warning! pbchmode=LTERRM_PBCHMODE_PSCELL without enabling LTE_REL12_DUALC
Line 2598: pCellInfo->nr_meas_rslt: NULL
Line 2604: LteRrm_FilteringNrMeasResult - L1_FilterLength:%d, Max_L1_FilterLength:%d
Line 2609:    >>Run L1 filtering
Line 2652:    >>(L1 filtered) RSSI - %d(A0:%d, A1:%d)[/100dBm]
Line 2654:    >>(L1 filtered) RSRP - %d(A0:%d, A1:%d)[/100dBm]
Line 2656:    >>(L1 filtered) RSRQ - %d(A0:%d, A1:%d)[/100dB]
Line 2658:    >>(L1 filtered) RSSINR - %d(A0:%d, A1:%d)[/100dB]
Line 2704:    >>Run L3 filtering
Line 2830:  	::(old L3 filtered) RSSI:%d(A0:%d, A1:%d)[/100dBm], L3_FilterAlpha_Rssinr(%d), alpha_Rssinr(%d)
Line 2833:  	::(old L3 filtered) RSRP:%d(A0:%d, A1:%d)[/100dBm], L3_FilterAlpha_Rsrp(%d), alpha_rsrp(%d)
Line 2836:  	::(old L3 filtered) RSRQ:%d(A0:%d, A1:%d)[/100dB], L3_FilterAlpha_Rsrq(%d), alpha_rsrq(%d)
Line 2839:  	::(old L3 filtered) RSSINR:%d(A0:%d, A1:%d)[/100dB], L3_FilterAlpha_Rssinr(%d), alpha_Rssinr(%d)
Line 2865:    >>(L3 filtered) RSSI - %d(A0:%d, A1:%d)[/100dBm]
Line 2867:    >>(L3 filtered) RSRP - %d(A0:%d, A1:%d)[/100dBm]
Line 2869:    >>(L3 filtered) RSRQ - %d(A0:%d, A1:%d)[/100dB]
Line 2871:    >>(L3 filtered) RSSINR - %d(A0:%d, A1:%d)[/100dB]
Line 3318: L3 filtering - timediff(%d), L1 filterlength(%d)
Line 3418: L3_FilterAlpha_Rsrp(%d), alpha_rsrp(%d), interval(%d)
Line 3453: L3_FilterAlpha_Rsrq(%d), alpha_rsrq(%d), interval(%d)
Line 3488: L3_FilterAlpha_RsSinr(%d), alpha_rssinr(%d), interval(%d)
Line 3530: L3_FilterAlpha_Rsrp_pc(%d), gHALTX_ulalpha(%d), interval(%d)
Line 3692: Scell is measured in IDLE state. need to be checked
Line 3734: CP Type(%d) != Pcell(%d), Timing offset(%d) is less than CP length(320): CellID(%d) will be dropped
Line 3830: cell_ID:%d filtered_rsrp:%d filtered_rsrq:%d rsrq_A1:%d rssi_A0:%d rssi_A1:%d
Line 3907: Check RAT type!!
Line 4021: Drop(x)(scellIdx:%d)(PCID:%d) <-- SCell
Line 4029: Drop(x)(earfcn:%d)(PCID:%d) <-- eICIC cell
Line 4037: Drop(x)(earfcn:%d)(PCID:%d) <-- feICIC cell
Line 4052: Drop(x)(earfcn:%d)(PCID:%d) <-- ENDC NR serving cell
Line 4059: LteRrm_ReArrangeSet type=%d(drop: %d, %d) NR cell(%d) meas rsrp(%d) meas rssinr(%d)
Line 4065: LteRrm_ReArrangeSet type=%d(drop: %d, %d) cell(%d) meas rsrp(%d) meas rsrq(%d)
Line 4081: RAT(%d), arfcn(%d), cell ID(%d) move to UNID
Line 4112: RAT(%d), arfcn(%d), cell ID(%d) move to UNID
Line 4170: PBCH decoding above 6 is not done yet
Line 4218: Scell would not be detected(index:%d, earfcn:%d, PCID:%d)
Line 4224: Scell is weakest in Scell Freq and remains ID_DETECTED list in last.
Line 4267: abnormal cell type(%d)
Line 4349: Meas Value(%d)(%d, %d)
Line 4421: Invalid case: pFreqInfo is NULL, pMeasResult->earfcn(%d)
Line 4439: Invalid case: pFreqInfo is NULL, IntraFreq=NULL, measured_cnt = %d, pMeasResult->earfcn(%d)
Line 4464: Invalid case : Scell could not be measured in Idle state(but MTM case)
Line 4469: Invalid case : Scell could not be measured in Idle state
Line 4475: Invalid case : pMeasResult->meas_input[i].cell_id:%d
Line 4489: Invalid case : Scell could not be measured in Idle state(earfcn=%d)(but MTM case)
Line 4494: Invalid case : Scell could not be measured in Idle state(earfcn=%d)
Line 4505: This Cell(%d) already removed!
Line 4603: PrxOnlyMode(%d)
Line 4619: bestAntennaPortExceptPrx(A%d)
Line 4727: L1 filter length(%d) Meas Result[%d]: earfcn(%d) cell_id(%d), rsrp(%d), rsrq(%d), timeOffset(%d)
Line 4729: rssi(%d), rssinr(%d)
Line 4734: (L3 filtered) [%4d] (%3d) A0 %6d %6d %6d %6d %6d
Line 4735: (L3 filtered) [%4d] (%3d) A1 %6d %6d %6d %6d %6d
Line 4736: (L3 filtered) [%4d] (%3d) A2 %6d %6d %6d %6d %6d
Line 4737: (L3 filtered) [%4d] (%3d) A3 %6d %6d %6d %6d %6d
Line 4744: (L3 filtered) [%4d] (%3d) A0 RSSINR %6d %6d
Line 4745: (L3 filtered) [%4d] (%3d) A1 RSSINR %6d %6d
Line 4746: (L3 filtered) [%4d] (%3d) A2 RSSINR %6d %6d
Line 4747: (L3 filtered) [%4d] (%3d) A3 RSSINR %6d %6d
Line 4865: pCellInfo or pCellInfo->nr_meas_rslt : NULL
Line 4879: LteRrm_MakeNrCellMeasResult - arfcn:%d, SCS:(enum)%d, cell_id:%d, NrSsbNum:%d, max_rs_index_cell_qual:(TRUE/FLASE)%d
Line 4929:    >>SortingResult[%d] - rsrp:%d[/100dBm], rsrq:%d[/100dB], sinr:%d[/100dB]
Line 4941:    >>threshRS-Index present - rsrp:%d, rsrq:%d, sinr:%d
Line 4962:      ::RSRP threshRS-Index:(%d)%d[/100dBm], rsrpThreshExceedCnt:%d, rsrpThreshExceedSum:%d
Line 4984:      ::RSRQ threshRS-Index:(%d)%d[/100dB], rsrqThreshExceedCnt:%d, rsrqThreshExceedSum:%d
Line 5006:      ::RSSINR threshRS-Index:(%d)%d[/100dB], rssinrThreshExceedCnt:%d, rssinrThreshExceedSum:%d
Line 5011:    >>RSRP:%d[/100dBm], RSRQ:%d[/100dB], RSSINR:%d[/100dB]
Line 5034: pFreqInfo(earfcn:%d) is NULL)
Line 5043: pal_ListIsEmpty(LTERRM.Set.pNrPbchCandiList)
Line 5081: LteRrm_ProcNrMeasResult - measMode:%d, band:%d, arfcn:%d, measured_cnt:%d, sCinr:%d[/100dB]
Line 5089: pFreqInfo(earfcn:%d) is NULL)
Line 5101: Invalid Cell(cell_id:%d)
Line 5107: pCellInfo->nr_meas_rslt : NULL
Line 5128:    >>cell_id:%d bestRssinrIndex:%d bestAvgRssinr:%d
Line 5135:    >>[%d]MeasResult - cell_id:%d
Line 5144: Invalid Cell(cell_id:%d)
Line 5150: pCellInfo->nr_meas_rslt : NULL
Line 5164:      ::nr arfcn:%d isForcedNrSchedule:%d bNewInterFreqFlag:%d
Line 5186:      ::measuredSsbCount:%d
Line 5198:        #ssb_index:%d, ssb_timing_offset:%d   ssb_index:%d, ssb_timing_offset:%d
Line 5209:        #Blind detection fails and cell(%d) is removed
Line 5219: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
Line 5226: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 5246:        #[BD]ssb_index:%d, ssb_timing_offset:%d
Line 5300: Invalid ssb_index(%d) >= L(%d)
Line 5318:      ::[%d]measuredSsb - ssb_index:%d, cur_meas_time:%d, last_meas_time:%d, time_diff:%d[us]
Line 5328:      ::[%d]Drop Ssb - ssb_index:%d, AvgRssinr:%d, bestRssinrIndex:%d
Line 5354:        #measured RSSI(%d)(Prx:%d, A1:%d)
Line 5355:        #measured RSRP(%d)(Prx:%d, A1:%d)
Line 5356:        #measured RSRQ(%d)(Prx:%d, A1:%d)
Line 5357:        #measured RSSINR(%d)(Prx:%d, A1:%d)
Line 5410:        #Reset SSB index(%d)`s L1 Filter Length to (1) due to dynamic rsrp change(%d[/100dB])->(%d[/100dB])
Line 5476: bNrPbchDecodeOngoing(%d)
Line 5494:      ::nr affcn:%d isForcedNrSchedule:%d bNewInterFreqFlag:%d
Line 5527: LteRrm_ProcNrPbchResult : ssbFrequency(%d) cellId(%d) subcarrierSpacing(%d) periodicity(%d)
Line 5530: LteRrm_ProcNrPbchResult : beamIndex(%d) sfnOffset(%d) frameBoundaryOffset(%d)
Line 5536: pFreqInfo(earfcn:%d) is NULL
Line 5544: pCellInfo(earfcn:%d) is NULL
Line 5558: mmWave PBCH decode result : ref_beam_index(%d) beamIndexLSB(%d) beamIndexMSB(%d)
Line 5615: Invalid case: pFreqInfo is NULL, pMeasResult->earfcn(%d)
Line 5633: Invalid case: pFreqInfo is NULL, IntraFreq=NULL, measured_cnt = %d, pMeasResult->earfcn(%d)
Line 5655: Invalid case : pMeasResult->meas_input[i].cell_id:%d
Line 5672: This Cell(%d) already removed!
Line 5757: PrxOnlyMode(%d)
Line 5773: bestAntennaPortExceptPrx(A%d)
Line 5892: Reset L1 Filter Length to (1) due to dynamic rsrp change(%d) - earfcn(%d) pcid(%d)
Line 5929: L1 Filter Length(%d / %d)
Line 5933: L1 filter length(%d) Meas Result[%d]: earfcn(%d) cell_id(%d), rsrp(%d), rsrq(%d), timeOffset(%d)
Line 5936: rssi(%d), rssinr(%d)
Line 5942: (L3 filtered) [%4d] (%3d) A0 %6d %6d %6d %6d %6d
Line 5943: (L3 filtered) [%4d] (%3d) A1 %6d %6d %6d %6d %6d
Line 5944: (L3 filtered) [%4d] (%3d) A2 %6d %6d %6d %6d %6d
Line 5945: (L3 filtered) [%4d] (%3d) A3 %6d %6d %6d %6d %6d
Line 5952: (L3 filtered) [%4d] (%3d) A0 RSSINR %6d %6d
Line 5953: (L3 filtered) [%4d] (%3d) A1 RSSINR %6d %6d
Line 5954: (L3 filtered) [%4d] (%3d) A2 RSSINR %6d %6d
Line 5955: (L3 filtered) [%4d] (%3d) A3 RSSINR %6d %6d
Line 6141: ECID TimeDiff(%d_%d)
Line 6168: ECID NCell PCID[%d] = %d, RSRP(%d), RSRQ(%d)
Line 6212: Inter(Earfcn:%d) ECID NCell PCID[%d] = %d, RSRP(%d), RSRQ(%d)
Line 6241: ECID NCell = %d
Line 6334: RSTD Inter-Freq Meas Ind: Layer[%d] - earfcn:%d, prsOffset:%d
Line 6370: GSM MeasureList[%d] - arfcn:%d, BSIC:%d, rssi:%d
Line 6375: pFreqInfo is NULL
Line 6385: pCellInfo is NULL
Line 6394: GSM Cell is none or not verified
Line 6446: Filtered result: BSIC:%d, RSSI:%d
Line 6490: LteRrm_ProcUmtsMeasResult(earfcn:%d, numOfCell:%d)
Line 6496: pFreqInfo(earfcn:%d) is NULL)
Line 6510: UMTS MeasureList[%d]
Line 6535: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 6622: UMTS BSIC:%d - Filtering is skipped.
Line 6630: Filtered result: ECNO:%d, RSCP:%d, RSSI:%d
Line 6727: pWeakestCell is NULL
Line 6825: CDMA Freq Info doesn't exist in list
Line 6848: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 6914: CDMA MEAS DONE: Arfcn(%d), Cell id(%d)), set_type(%d), PNstrength(%d), PNPhase(%d)
Line 7014: isMeasResult is FALSE
Line 7042: [Meas] CellID(%d), RSRP(%d)
Line 7066: [Srch_Meas_1] CellID(%d), mRSRP(%d)
Line 7088: [Srch_Meas_2] CellID(%d), mRSRP(%d)
Line 7098: Candidated Pcell - CellID(%d)
Line 7121: isMeasResult is FALSE
Line 7209: bestAntennaPortExceptPrx(A%d)
Line 7260: (L3 filtered) [%4d] (%3d) A0 %6d %6d %6d %6d %6d
Line 7265: (L3 filtered) [%4d] (%3d) A1 %6d %6d %6d %6d %6d
Line 7270: (L3 filtered) [%4d] (%3d) A2 %6d %6d %6d %6d %6d
Line 7275: (L3 filtered) [%4d] (%3d) A3 %6d %6d %6d %6d %6d
Line 7279: (L3 filtered) [%4d] (%3d) A0 RSSINR %6d %6d
Line 7282: (L3 filtered) [%4d] (%3d) A1 RSSINR %6d %6d
Line 7285: (L3 filtered) [%4d] (%3d) A2 RSSINR %6d %6d
Line 7288: (L3 filtered) [%4d] (%3d) A3 RSSINR %6d %6d
Line 7293: Target cell RSRP(%d, %d) = %d.%d dBm
Line 7375: isSyncResult(%d) SyncResult.Num(%d)
Line 7378: --> pCurInterFreq(earfcn:%d) Meas Skipped(%d)
Line 7384: isSyncResult is FALSE
Line 7415: isMeasResult is FALSE
Line 7437: Inter-Freq MeasDone GapInfo Update
Line 7453: SCell MeasDone GapInfo Update
Line 7459: invalid Scell AGC(%d, %d):(%d, %d) - skip
Line 7481: pTFreqInfo is NULL (measmode:%d, earfcn:%d
Line 7550: change last GSM measure/verify time
Line 7578: isMeasResult(%d) measured_cnt(%d)
Line 7581: --> pCurUtraFreq(arfcn:%d) Meas Skipped(%d)
Line 7595: change last UMTS search/measure time
Line 7645: pFreqInfo(earfcn:%d) is NULL)
Line 7651: isSyncResult is FALSE
Line 7655:      ::nr arfcn:%d isForcedNrSchedule:%d bNewInterFreqFlag:%d
Line 7683:      ::nr arfcn:%d isForcedNrSchedule:%d
Line 7701: pFreqInfo(earfcn:%d) is NULL)
Line 7707: isMeasResult is FALSE
Line 7749: Invalid MeasMode(%d)
Line 7771: LteRrm_ProcMeasDoneTmrExpr
Line 7791: CGI_CELL_MEAS measurement failure
Line 7795: CGI change State(%d -> LTERRM_CGI_RETURN)
Line 7864: Proc CELL_SRCH_REQ(SrchMode:%d)
Line 7899: pCellSrchReq->pCellInfo is NULL
Line 7999: LteRrm_ProcCellSrchReq(LTERRM_SRCHMODE_IRAT_HO)
Line 8107: Proc CELL_SRCH_CNF(outcome:%d)
Line 8130: Invalid State:%d
Line 8173: GSM: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8187: GSM: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8192: (ArrayIdx(%d) > MMC_L1LC_UMTS_CELL_NUM_MAX)
Line 8249: GSM: Meas Cell(arfcn:%d, ID:%d, offset:%d, set_type:%d)
Line 8255: (ArrayIdx(%d) >= GSM_MAX_RSSI_MEASURE_FREQ)
Line 8269: GSM: Meas Cell(arfcn:%d, ID:%d, offset:%d, set_type:%d)
Line 8275: (ArrayIdx(%d) >= GSM_MAX_RSSI_MEASURE_FREQ)
Line 8323: UMTS: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8334: UMTS: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8339: (ArrayIdx(%d) > MMC_L1LC_UMTS_CELL_NUM_MAX)
Line 8404: UMTS: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8410: (ArrayIdx(%d) >= MMC_L1LC_UMTS_CELL_NUM_MAX)
Line 8421: UMTS: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8427: (ArrayIdx(%d) >= MMC_L1LC_UMTS_CELL_NUM_MAX)
Line 8469: CDMA: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8475: (ArrayIdx(%d) > MMC_L1LC_CDMA_CELL_NUM_MAX)
Line 8484: CDMA: Meas Cell(ID:%d, offset:%d, set_type:%d)
Line 8489: (ArrayIdx(%d) > MMC_L1LC_CDMA_CELL_NUM_MAX)
Line 8517: pCellInfo is NULL
Line 8533: PCell Meas Start[0]: earfcn(%d), cell id(%d), time_offset(%d) meas_mode(%d)
Line 8567: pFreqInfo->nextCellInfo->set_type = %d
Line 8573: Invalid setType = %d, pFreqInfo = 0x%x, pFreqInfo->nextCellInfo = 0x%x
Line 8629: pNextNCell is NULL : pFreqInfo = 0x%x, maxNCell = %d
Line 8635: pFreqInfo is NULL : setType = %d, pNCell = 0x%x, maxNCell = %d
Line 8642: Invalid setType = %d, pFreqInfo = 0x%x, pNCell = 0x%x
Line 8655: Invalid setType = %d, pFreqInfo = 0x%x, pNextNCell = 0x%x
Line 8686: Meas Start[%d]: earfcn(%d), cell id(%d), time_offset(%d), meas_mode(%d)
Line 8808: pNextNCell is NULL : pFreqInfo = 0x%x, maxNCell = %d
Line 8814: pFreqInfo is NULL : setType = %d, pNCell = 0x%x, maxNCell = %d
Line 8821: Invalid setType = %d, pFreqInfo = 0x%x, pNCell = 0x%x
Line 8834: Invalid setType = %d, pFreqInfo = 0x%x, pNextNCell = 0x%x
Line 8854: Meas Start[%d]: earfcn(%d), cell id(%d), beam(%d) offset(%d) rxbeam(%d)
Line 8862: mmWave Meas Skip: earfcn(%d), cell id(%d), beam(%d) pbchdecode(%d)
Line 8875: Meas Start[%d]: earfcn(%d), cell id(%d), beam(%d) offset(%d) rxbeam(%d)
Line 8996: pFreqInfo is NULL
Line 9035: pFreqInfo is NULL
Line 9085: subcarrier_spacing is invalid.
Line 9129: periodicity is invalid.(%d)
Line 9154: Proc MEASURE_REQ(measMode:%d)
Line 9160: pCellInfo is NULL
Line 9166: pMsg->pFreqInfo is NULL
Line 9173: PrimaryCell and pFreqInfo is NULL
Line 9254: - laa meas:1, num_of_meas_cell:%d
Line 9302: pFreqInfo is NULL
Line 9325: serving_cell_meas is FALSE
Line 9370: [RRM UTRAN SON] Umts Partial Search for SON configuration
Line 9377: Listed cell is none. UmtsPartialSearch will be started!!!
Line 9467: No cell to NR measure : numNCell(%d)
Line 9493: LteRrm_ProcMeasReq: SsbToMeasure(0x%x, 0x%x)
Line 9526: IC-Search for ECID is triggered(InfCell:PCell)
Line 9557: Warning! pFreqInfo: NULL in LteRrm_ProcPSCellInitMeas
Line 9563: Warning! pPscell: NULL in LteRrm_ProcPSCellInitMeas
Line 9567: Start Measurement: PSCell Frequency init measure(earfcn:%d)
Line 9638: Proc MEASURE_CNF(measMode:%d, outcome:%d, isLastMeas:%d)
Line 9665: Invalid State:%d
Line 9706: LteRrm_ProcStopforAll(%d)
Line 9710: Reset CellChangeFlag(%d, %d) due to DrxSpareTimerExpired
Line 9737: Removed RfTuneCbFunc due to LteRrm_ProcStopforAll
Line 9841: Warning! LteRrm_GetSubframeOffset: offset1(%d) or offset2(%d) is NULL
Line 9895: eICIC pattern for measurement (cell-id:%d)
Line 9896: - measMode:%d
Line 9900: - meas_pattern[%d]: %#x
Line 9923: Warning! PrimaryCell NULL in LteRrm_GetIntraInfCellInfo
Line 9938: - %d.IC:PCell (pci:%d, time_offset:%d)
Line 9965: - %d.IC:NCell (pci:%d, time_offset:%d)
Line 10005: - Wrong pCellInfo(NULL)
Line 10020: - Wrong freq_flag(%d) used
Line 10027: - Skipped. cp_type different btw Ncell(%d) and PCell(%d)
Line 10036: - Time_diff btw PCell(pci:%d, to:%d) and Ncell(pci:%d, to:%d): %d < %d
Line 10068: IdleRachOnGoing:1 -> Skip processing meas result
Line 10076: shortofDrxCycle:1 -> Finish ALL MEAS
Line 10089: pCurInterFreq->SrchAllMeasDone(1 -> 0)
Line 10096: pCurInterFreq->MeasAllMeasDone(1 -> 0)
Line 10103: pCurUtraFreq->SrchAllMeasDone(1 -> 0)
Line 10110: pCurUtraFreq->MeasAllMeasDone(1 -> 0)
Line 10117: pCurGeranFreq->MeasAllMeasDone(1 -> 0)
Line 10123: pCurGeranFreq->MeasAllMeasDone(1 -> 0)
Line 10133: pFreqInfo NULL
Line 10138: NrFreq(%d)->SrchAllMeasDone(1 -> 0)
Line 10153: pFreqInfo NULL
Line 10158: NrFreq(%d)->MeasAllMeasDone(1 -> 0)
Line 10170: Not expected measMode(%d)
Line 10252: Invalid NR arfcn(%d)
Line 10282: subcarrier_spacing is invalid.
Line 10324: Invalide NrMeasType(%d)
Line 10374: LteRrm_UpdateNrMeasResultFreq : numFreq(%d) NumCell(%d)
Line 10391: pFreqInfo is NULL as a result of LteRrm_AllocFreqInfoBuf()
Line 10416: LteRrm_UpdateNrMeasResultFreq: new Cell - ARFCN(%d) CellId(%d) Offset(%d)
Line 10425: result of LteRrm_AllocCellInfoBuf() is NULL
Line 10435: last element in pNrMeasResultFreq is black list
Line 10449: LteRrm_UpdateNrMeasResultFreq: existing Cell - ARFCN(%d) CellId(%d) Offset(%d)
Line 10460: CellResults: ServSinr(%d) rsrp(%d) rsrq(%d) rssinr(%d) rssi(%d), ResultsSsbCnt(%d)
Line 10478: ResultsSsbCnt(%d) is invalid
Line 10490: BeamResults(%d): beamIdx(%d) rsrp(%d) rsrq(%d) rssinr(%d) rssi(%d)
Line 10494: pCellInfo->nr_meas_rslt : NULL
Line 10664: LteRrmConn_SetNrOngoingFlag - pFreqInfo is NULL
Line 10671: LteRrmConn_SetNrOngoingFlag - srch_ongoing(%d -> %d) meas_ongoing(%d -> %d)
Line 10676: LteRrmConn_SetNrOngoingFlag - srch_ongoing(%d -> %d)
Line 10680: LteRrmConn_SetNrOngoingFlag - meas_ongoing(%d -> %d)
Line 10693: RrmBlkConnMeasNr::DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d ssbIndexByBD:%d
Line 10696:    >>VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
Line 10702:    >>VERIFIED - set ssbIndexDerived:%d
Line 10707:    >>NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
Line 10713:    >>UNKNOWN - set BdResultSsbIndex:%d
Line 10752: LteRrm_ReverseBitOrderSsbBitmap : LenSsbBitmap (%d), SsbBitmap (0x%08X %08X), ReversedSsbBitmap (0x%08X %08X)
