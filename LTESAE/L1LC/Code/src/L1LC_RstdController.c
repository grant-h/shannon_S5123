Line 637: [RSTD] L1LC State Changed [%s --> %s]
Line 761: [RSTD] FLAGS :: LPP PROFILE [0x%x] FT[%d] ATT_FT[%d] TMO_FT[%d] LGU_FT[%d] VZW[%d] KDDI[%d]
Line 763: [RSTD] [RRM => L1LC] Enter L1LC_ProcessOtdoaMeasReq
Line 768: [RSTD] ERROR!!! Received NULL L1LC_ProcessOtdoaMeasReq...
Line 774: [RSTD] Recieved OTDOA Measurement Request while already processing another request...
Line 814: [RSTD] [SAME CELL FILTER] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
Line 844: [RSTD] |>>>--------------------------------OTDOA MEASUREMENT REQUEST-------------------------------->>>
Line 851: [RSTD]  |>>>---OTDOA MEASUREMENT REQUEST Report Interval [%d ms] Report Amount [%d] ------->>>
Line 878: [RSTD] Freq Count [%d] :: Cell Count0 [%d] Cell Count1 [%d] Cell Count2[%d] Max Attempt[%d]
Line 881: [RSTD] IC Count0 [%d][0x%x] IC Count1 [%d][0x%x] IC Count2[%d[0x%x]]
Line 967: [RSTD] :: Send Available OTDOA Measurement response
Line 992: [RSTD] Process HAL_L1LC_RSTD_MEASURE_DONE_IND
Line 1023: [RSTD] Meas Results are discarded for the Assisted Data Cell[%d][%d] = %d, Cell ID [%d], RstdMeasDone [%d], peak[%d], max_peak[%d]
Line 1030: [RSTD] Results are discarded for all the N cells, since gL1LC_RstdDB.Now_MeasuringCells_Cnt = %d 
Line 1070: [RSTD] Process HAL_L1LC_RSTD_SCHEDULE_IND: State[ %s ]
Line 1144: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_SOME_NEIGHBOURS Layer[%d], numMeasuredCells[%d], AssistanceData Cells[%d] !!! 
Line 1150: [RSTD] L1LC_ProcOtdoaMeasureRsp : Layer[%d] Number Of Cells Reporting [%d], Total Measured Cells [%d]
Line 1166: [RSTD] Response Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d]
Line 1174: [RSTD] Error: Update OTDOA_UNABLE_TO_MEASURE_ALL_NEIGHBOURS (totalMeasuredCells:%d) !!!
Line 1184: [RSTD] OTDOA AT CMD REQ[%d]: RSP is not sent to RRM
Line 1239: [RSTD] L1LC_RstdSendDspPRSInfo() : CurSfnTti [%d]
Line 1266: [RSTD] CC%d Cell ID(%d) PRS_Elem [%d]: Muted for Next Occasion
Line 1327: [RSTD] Sending RSTD Measurement for the measured Neighbours
Line 1349: [RSTD] gL1LC_Report_Count[%d]
Line 1357: [RSTD] Reporting to LPP is completed
Line 1391: [RSTD] State[ %s ] HO Triggered(earfcn:%d, Cell ID:%d) During RSTD Measurement
Line 1396: [RSTD] State[ %s ] Serving Cell(earfcn:%d, Cell ID:%d) Reference Cell(earfcn:%d, Cell ID:%d)
Line 1415: [RSTD] SCell(earfcn:%d, Cell ID:%d) is found, No need of exchanging the Reference cell
Line 1431: [RSTD] --------Reference Exchange Success---------
Line 1438: [RSTD] No Cell found in Assistance Data Cell
Line 1481: [RSTD] State[ %s ] RRE/HO/RELEASE Triggered During RSTD Measurement
Line 1519: [RSTD] Error Cause Updated [0x%x]
Line 1536: [RSTD] Entering in L1LC_StartRstdMeasurement
Line 1556: [RSTD] Periodic Timer has started. Timer Expires in (%d) mS
Line 1563: [RSTD] No Response time from LPP. Default Periodic Timer has started. Timer Expires in 1900 mS
Line 1582: [RSTD] Current State:DRX(Idle or Connected): Wakeup Modem and Measure RSTD
Line 1612: [RSTD] -----------SCHEDULER ->  Gap Req Ind (%d), Measured Freq Layers (%d) -------------
Line 1666: [RSTD] No Layer has been selected for next PRS Occasion
Line 1710: [RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d]  - Measure Layer
Line 1722: [RSTD] Inter-Frequency Layer[%d]-Neigh freq[%d] Gap freq [%d]  - Skip Layer
Line 1790: [RSTD] Intra-Frequency Gap Invalid - Layer[%d]-Neigh freq[%d] Ref freq[%d] - Skip Layer
Line 1796: [RSTD] Intra-Frequency Layer[%d]-Neigh freq[%d] Serv freq[%d] - Measure Layer
Line 1808: [RSTD] Layer[%d]-Neigh freq[%d] - Skip this Freq Layer for current Measurement Interation due to Gap Non Availability
Line 1880: [RSTD] pal_GetChipName (%x), serving_BW (%d), prs_Info.bandwidth(%d),numDLsubframe(%d)
Line 1888: [RSTD] L1LC_RstdScheduleNeighCells: reducing maxNeighCnt
Line 1894: [RSTD] | STATISTICS - LAYER [%d] CELL COUNT [%d] MEASURED COUNT [%d], isIntraMeasure[%d], measReference[%d] maxNeighCnt[%d]
Line 1918: [RSTD] L1LC_RstdScheduleNeighCells: gL1LC_RstdDB.Now_MeasuringCells_Cnt[%d]
Line 1965: [RSTD] L1LC_RstdGetNeighCells : Layer [%d] NonMeasuredCells[%d] maxNeighCnt[%d] Measuring Cell Cnt[%d]
Line 2007: [RSTD] SCHEDULED NEIGHBOUR CELL [%d][%d] Cell ID [%d] for the PRS OCCASION SFN[%d]
Line 2031: [RSTD] CANDIDATE NEIGHBOUR CELL [%d][%d] CELL ID [%d] HAS MUTING IN NEXT PO SFN[%d]  PRS ELEMENT [%d]
Line 2092: [RSTD] Meas Referece Cell : prsElem[%d], prsSfnTti[%d], muteLen[%d], mutePattern[%d]
Line 2119: [RSTD] L1LC_RstdAllNCellsMeasured : AllCellsMeasCnt[%d], MaxAttempts[%d]
Line 2204: [RSTD] Next PRS Occ - prsSfnTti[%d] prsElem[%d] Iprs[%d] Tprs[%d] CurSfnTti[%d]
Line 2240: [RSTD] Available PRS Occassions[%d] Estimated Time for Measurement [%d ms], localPrsOcc[%d]
Line 2259: [RSTD] L1LC_RstdCheckPrsOccElapsed: Available PRS Occasions for measurements[%d]
Line 2271: [RSTD] Available PRS Occasions for measurements have elapsed!!! Sending the Response...
Line 2380: [LTE DSDS] assert condition : Input data is wrong
Line 2382: [LTE DSDS] assert condition : Input data is wrong
Line 2385: [RSTD] CELL#0 ID [%d], CELL#1 ID [%d], CELL#2 ID [%d], CELL#3 ID [%d]
Line 2438: [RSTD] CONFIGURED CELL :: CELL %d : TS OFFSET(%d) ERSTD(%d) ERSTD UNCER(%d) MUTING(%d))
Line 2504: [RSTD] No Measurement Element
Line 2538: [RSTD] Start Forced Sync: mode(%d) earfcn(%d) bw(%d)
Line 2550: [RSTD] L1LC_RstdGetNextInterFreq: nextGapBoundary > GAP_READY_HW_OFFSET
Line 2560: [RSTD] L1LC_RstdGetNextInterFreq: GapEnable[%d], GapPeriod[%d]
Line 2594: [RSTD] CheckRstdInterFreq : Inter-Frequency cells have not been configured
Line 2614: [RSTD] CheckRstdInterFreq : Layer[%d] earfcn[%d] is still being measured, hence no additional request
Line 2653: [RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d] 
Line 2661: [RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] interFreqFound[%d] reqInterGap[%d]
Line 2682: [RSTD] Gaps are sufficient to measure the Next Layer [%d] Earfcn [%d] 
Line 2702: [RSTD] CheckRstdInterFreq Layer[%d] -Neigh freq[%d] reqInterGap[%d] interFreqFound[%d] reqLayers[%d]
Line 2840: [RSTD] Command[%d] Earfcn[%d] GapCheck[%d] PrsInterval[%d to %d] GapInterval[%d to %d]
Line 2889: [RSTD] Found MFBI Earfcn: Layer[%d] AssistanceEarfcn[%d], ServingEarfcn[%d], Frequency[%d]
Line 2952: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Update with NEW Results - OLD[Fap_Results = %d, peak_value = %d] --> NEW[Fap_Results = %d, peak_value = %d]
Line 2965: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Keep OLD Results - OLD[Fap_Results = %d, peak_value = %d], NEW[Fap_Results = %d, peak_value = %d]
Line 3006: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, peak_total = %d, num_sample/ErrorValue = %06d
Line 3045: [RSTD] Cell ID [%d] Measured Cell[%d][%d] Fap_Results = %d, peak_value = %d, cellFound = %d, num_sample/ErrorValue = %06d
Line 3087: [RSTD]  OTDOA REFERENCE CELL Start : Cell ID [%d] earfcn [%d] Iprs[%d] Nprs [%d] PrsBw [%d] Ant Port[%d]
Line 3089: [RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d]
Line 3091: [RSTD] --------------------------------OTDOA NEIGHBOUR CELLS--------------------------------
Line 3114: [RSTD] Freq Count [%d] Cell Count [%d] - Cell ID [%d] earfcn [%d] Iprs [%d] Nprs [%d] PrsBw [%d]
Line 3116: [RSTD] MuteLen [%d] MutePattern [0x%X] ERstd[%d] Erstd_Un [%d] timeOffset [%d] PrsSfOffset [%d], Ant Port[%d]
Line 3120: [RSTD] Same Cell as Reference has been received in the Neighbour List !!!!!
Line 3132: [RSTD] ------------------------------------------------------------------------
Line 3203: [RSTD] CA Info: CC%d[found:%d], PRS[Iprs:%d, Nprs:%d, bw:%d]
Line 3285: [RSTD] FAP_DB MAXIUM CELL NUMBER : Cell ID[%d] Earfcn[%d] index[%d]
Line 3342: [RSTD] FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] Peak[%d] total_meas[%d]
Line 3436: [RSTD] STDEV_FAP_DB : Cell ID[%d] Earfcn[%d] index[%d] Fap[%d] DEBUG[%d %d]
Line 3461: [RSTD] ============= STDEV_FAP_DB: PCID[%d], Resolution[%d], Value[%d], numSample[%d], removedNumSample[%d] =============
Line 3462: [RSTD] ============= STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d] =============
Line 3466: [RSTD] ========================== L1LC_RstdRemoveAbruptFapDebugDb: numCells[%d] ==============================
Line 3481: [RSTD] -----------------------------------Remove Abrupt Fap: PCI[%d] numFap[%d]-------------------------------------
Line 3528: [RSTD] change best_fap1 Best Fap1[Fap:%d, total:%d, cnt:%d]
Line 3578: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[Fap:%d, num:%d], Best Fap2[Fap:%d, num:%d]
Line 3595: [RSTD] Remove Abrupt Fap: Fap1_Selected[%d], Best Fap1[%d, %d], Best Fap2[%d, %d], fapWin[%d to %d]
Line 3601: [RSTD] Remove Abrupt Fap: Discard Index[%d], Fap[%d]
Line 3624: [RSTD] Remove Abrupt Fap: Discard Index Range[%d to %d], Fap[%d]
Line 3668: [RSTD] [DEBUG]SUB_STDEV_FAP_DB: PCID[%d], avg_square[%d], square_avg[%d], innerSampleCnt[%d], Fap[%d]
Line 3685: [RSTD] [DEBUG]SUB_STDEV_FAP_DB(remove): PCID[%d], numSample[%d], MeasCnt[%d]
Line 3688: [RSTD] ============= SUB_STDEV_FAP_DB: PCID[%d], Resolution[%d], innerSampleCnt[%d], FapWindow[%d]=============
Line 3689: [RSTD] ============= SUB_STDEV_FAP_DB: error_stdev[%d], avg_square[%d], square_avg[%d]=============
Line 3767: [RSTD] UpdateFap : Cell ID:%d, Fap:%d, Num Samples:%d, Max Peak:%d, Total Peak:%d
Line 3769: [RSTD] UpdateFap : error.resolution:%d, error.value:%d, error.num_sample:%d, error.sub_resolution: %d, error.sub_num_sample: %d
Line 3802: [RSTD] ============= PRS Error: PCID[%d], Peak[%d], serving snr[%d], ref peak[%d][%d] =============
Line 3839: [RSTD] ============= PRS Error: PCID[%d], Resolution[%d], Value[%d], PRS SINR[%d][%d][%d][%d] =============
Line 3869: [RSTD] AT CMD: OTDOA REQ Processing[CMD:%d]
Line 3898: [RSTD] REFERENCE CELL CONFIG : Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] 
Line 3932: [RSTD] NEIGHBOUR CELL CONFIG[%d][%d]: Cell ID[%d] EARFCN[%d] I_PRS[%d] CP/ANT/PRS_BW/NPRS[%04d] E RSTD[%d]
Line 3956: [RSTD] AT CMD: OTDOA ACTIVATION[%d]
Line 3969: [RSTD] AT CMD: OTDOA DE-ACTIVATION[%d]
Line 3984: [RSTD] Invalid OTDOA Sub Command[%d]
Line 4015: [RSTD] Validate: Invalid Cell ID[%d]
Line 4021: [RSTD] Validate: Invalid Antenna Config[%d]
Line 4027: [RSTD] Validate: Invalid CP Type[%d]
Line 4033: [RSTD] Validate: Invalid PRS BW[%d]
Line 4039: [RSTD] Validate: Invalid I PRS[%d]
Line 4045: [RSTD] Validate: Invalid N PRS[%d]
Line 4051: [RSTD] Validate: Invalid Muting Size[%d]
Line 4086: [RSTD] Reference FAP[Avg:%d, Total:%d, numSample:%d, numAttempts:%d]
Line 4113: [RSTD] Neighbour Cell ID[%d] - RSTD[%d], Prs Max Peak[%d], MeasQuality[Resolution:%d, ErrorValue:%d, NumSample:%d], numMeasuredCells[%d]
Line 4175: [RSTD] Response Last Measured SFN : %d
Line 4199: [RSTD] L1LC_RstdUpdateRefRspInfo : Send OTDOA_UNABLE_TO_MEASURE_REFERENCE (NumOfAttempts:%d, numOfValid:%d)
Line 4234: [RSTD] Remove Directional Antenna Cells : Layer[%d], Measured N Cells [%d]
Line 4256: [RSTD] RemoveDirectionalCell : VSHIFT Removed [PCI:%d, numSample:%d, Fap:%d] --> Stationed [PCI:%d, numSample:%d, Fap:%d]
Line 4309: [RSTD] RemoveDirectionalCell : Removed [PCI:%d, numSample:%d, Peak:%d] --> Stationed [PCI:%d, numSample:%d, Peak:%d]
Line 4322: [RSTD] RemoveDirectionalCell : Removed [PCI:%d, numSample:%d, Peak:%d] --> Stationed [PCI:%d, numSample:%d, Peak:%d
Line 4429: [RSTD] L1LC_RstdFilterOtdoaMeasuredCells : AllCellsMeasCnt[%d]
Line 4449: [RSTD] [DEBUG] Measurement Cnt too few(%d) Cell ID:%d, Num Samples:%d
Line 4455: [RSTD] NumSample Normalize : Cell ID:%d, Num Samples:%d, Normalized Samples:%d, Peak:%d, Fap:%d, resolution:%d, Total Sample:%d
Line 4531: [RSTD] Filtered Response List : Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Ts delta offset:%d
Line 4541: [RSTD] Removed : Cell ID:%d, Num Samples:%d, Peak:%d, Fap:%d, numCellsReporting:%d, Max Peak:%d
Line 4599: [RSTD] Filtered Response List : Resolution:%d, expectedRstd:%d, Num Samples:%d, numCellsReporting: %d, numCellThrPass: %d, sub_Resolution:%d
Line 4639: [RSTD] Sort by AssistanceData: Layer[%d], Measured N Cells [%d]
Line 4691: [RSTD] Sort by Num Samples and then by Peak Value : Layer[%d], Measured N Cells [%d]
Line 4695: [RSTD] Sorting Not Required : numCellCount[%d]
Line 4778: [RSTD] Sort by Peak Value and then by Num Samples: Layer[%d], Measured N Cells [%d]
Line 4782: [RSTD] Sorting Not Required : numCellCount[%d]
Line 4889: [RSTD] L1LC_RstdExchangeReferenceCell: Target earfcn[%d] Cel ID[%d]
Line 4919: [RSTD] Exchange REF: Inter-Frequency. Src earfcn[%d] Target earfcn[%d]
Line 5061: [RSTD] Exchange Measured Results: No Response Cell found : pRstdCell[%d], Cur Serving Num Sample[%d]
Line 5106: [RSTD] L1LC_RstdGetMatchedCell: Cell Found: layer[%d], cell idx[%d]
Line 5235: [RSTD] WARNING!!! First PRS TTI ISN'T DL SubFrame!! TD-Config [%d], PRS TTI StartOffset [%d] 
Line 5305: [RSTD] L1LC_RstdGetPrsElem : Iprs[%d], Dprs[%d], Tprs[%d], CurSfnTti[%d], prsElem[%d], prsSfnTti[%d]
Line 5497: [RSTD] CellIndex[%d] Not Scheduled Again
Line 5545: [RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
Line 5576: [RSTD] ADD GAP Element(%d) : freq layer[%d], cell idx[%d], earfcn[%d], prsOffset[%d]
