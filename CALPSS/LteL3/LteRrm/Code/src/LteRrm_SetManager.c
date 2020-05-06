Line 788: ALLOC:LteRrm_AllocFreqInfoBuf(%d, 0x%x)
Line 963: Free:LteRrm_FreeFreqInfoBuf(%d, RAT:%d, Freq:%d, Addr:0x%x)
Line 997: LteRrm_AllocCellInfoBuf FULL
Line 1034: nr_meas_rslt: NULL
Line 1072: ALLOC: CellInfoBufNum(%d)
Line 1252: FREE: CellInfoBufNum(%d), earfcn(%d), cell_id(%d)
Line 1325: Warning!! UTRAN FreqInfo NUM(%d) > (%d)
Line 1389: GERAN FreqInfo NUM(%d)
Line 1410: LteRrm_AddCdmaFreqInfoToList
Line 1414: FreqInfo is Null(%d, %d)
Line 1460: CDMA FreqInfo NUM(%d)
Line 1525: LteRrm_AddNrFreqInfoToList - NrFreqNum:%d
Line 1549: LteRrm_AddFreqInfoToList : pNewElem NULL
Line 1555: AddFreqInfoToList - pFreqList is empty : Add pNewElem as the Last element 
Line 1575: AddFreqInfoToList - pFreqList isn't empty : Sorting InterFreq
Line 1634: LteRrm_RemoveFreqInfoFromList(RAT_type:%d, earfcn:%d)
Line 1651:   >> InterFreqNum:%d, InterFreqCellNum:%d
Line 1658:   >> UtraFreqNum:%d
Line 1663:   >> GeranFreqNum:%d
Line 1669:   >> CdmaFreqNum:%d
Line 1675:   >> NrFreqNum:%d
Line 1717: Wrong input: RAT_type(%d) is not for LteRrm_RemoveFreqInfoFromScellList
Line 1723: LteRrm_RemoveFreqInfoFromScellList(earfcn:%d)
Line 1729: Scell freq(%d) is removed.(ScellFreqNum:%d)
Line 1848: Warning!! pFreqInfo is NULL in LteRrm_AddUnidListedCellToList
Line 1855: Warning!! pListedCell is NULL
Line 1865: Add Unid-Listed cell (PCID:%d, earfcn:%d, RAT_type:LTE)
Line 1891: Remove Unid-Listed cell(earfcn:%d, cell_ID:%d) from list
Line 2023: Scell(%d, %d) is not removed
Line 2063: Scell(%d, %d) is not removed
Line 2104: Scell(%d, %d) is not removed
Line 2220: LTE cell(earfcn:%d, PCID:%d, setType:%d,) is modified in listed set.
Line 2230: Scell(earfcn:%d, PCID:%d, setType:%d) is not removed
Line 2237: LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to ID_DETECTED set
Line 2244: LTE cell(earfcn:%d, PCID:%d, setType:%d) is moved to CANDI_DETECTED set
Line 2324: UMTS cell(arfcn:%d, scrCode:%d, setType:%d,) is modified in listed set.
Line 2407: GSM cell(arfcn:%d, setType:%d,) is modified in listed set.
Line 2467: Scell(%d, %d) is not removed
Line 2518: LteRrm_GetMatchedCellInfo warning!!! - RAT_type:%d, CellId:%d
Line 2547: LteRrm_GetMatchedCellInfo : Cell %d is empty in the set %d freq %d
Line 2587: Warning! pFreqInfo NULL in LteRrm_GetMatchedUnidListedCell
Line 2593: Warning! RAT_type(%d) not expected in LteRrm_GetMatchedUnidListedCell
Line 2599: Warning! CellId:%d in LteRrm_GetMatchedUnidListedCell
Line 2679: pMatchedFreqInfo is NULL (pFreqList:0x%x, pFreqInfo:0x%x
Line 2734: No NR Freq Info so far
Line 2788: No UTRA Freq Info so far
Line 2845: No GERAN Freq Info so far
Line 2891: LteRrm_GetMatchedGeranCellInfo : Cell %d is empty in the set %d freq %d
Line 2963: No CDMA Freq Info so far
Line 3045: Invalid CC mode(%d)
Line 3089: pNewServingCellInfo->cell_ID != LTERRM.Set.pPrimaryCell->cell_ID
Line 3140: Intra-Freq blind HO
Line 3171: Inter-frequency cell
Line 3279: Inter-Freq blind HO
Line 3311: IntraFreq NULL
Line 3350: pNewServingCellInfo is NULL
Line 3359: SameCellRevisit:%d
Line 3363: prevServCellId:%d, newServCellId:%d
Line 3366: SameCellRevisit:%d
Line 3385: IRAT HO ServingCellInfo Update
Line 3410: IntraFreq NULL
Line 3417: PrimaryCell NULL
Line 3436: IntraFreq NULL
Line 3497: Pcell Qoffset (%d -> %d)
Line 3503: Pcell IndOff (%d -> %d)
Line 3541: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3608: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3633: Listed cell (PCID:%d, Qoffset/IndOff:%d, set_type:%d)
Line 3638: Cell info is NULL
Line 3678: Blacklisted cell detected (earfcn : %d, cell ID : %d)
Line 3719: ServCellID but different CP => Ignore search_result->Candidate[%d] (Cell(%d), CP(%d))
Line 3769: Invalid set_type(%d) : cell ID=%d, cp=%d
Line 3784: No neighbor cell update : earfcn(%d), cell ID(%d), time_offset(%d), search_position(%d)
Line 3795: Warning! CellInfo NULL in LteRrm_UpdateDetectedNeighborCellInfo
Line 3813: Unid-Listed cell --> buffer ALLOC. Added to CANDI_LISTED set (PCID:%d, earfcn:%d, RAT_type:LTE)
Line 3822: Unid-Listed cell detected but ignore it(%d, type:%d),[%d, %d], %d
Line 3881: pWeakestCell m0(%d), m1(%d), m0_m1(%d)
Line 3891: pWeakestCell freed but not still exist : earfcn=%d, cell ID=%d
Line 3962: LteRrm_UpdateNrCellInfo: pFreqInfo is NULL
Line 3974: NR SRCH RESULT[%d](earfcn:%d, cell_id:%d)
Line 3984: [DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
Line 3991: [DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d)
Line 4016: Listed cell detected but ignore it(cell_id:%d, beam_timing_offset:%d corr_energy:%d)
Line 4025: Invalid set_type(%d) : cell ID=%d
Line 4080: pWeakestCell corr_energy(%d)
Line 4090: pWeakestCell freed but not still exist : earfcn=%d, cell ID=%d
Line 4121: NARFCN : %d, CellId : %d, Offset : %d
Line 4164: PrimaryCell=0x%x, IntraFreq=0x%x
Line 4180: EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Line 4190: SRCH Result[%d]: Cell_Id(%d) CpType(%d) frame_position(%d) CurPcellPos(%d)
Line 4221: [TDD only] primary cell(%d), neighbor cell(%d) - removed
Line 4240: SCell time offset Not Update(Primary:%d, Old:%d, New:%d, Diff:%d)
Line 4255: [CHECK] LteRrm_UpdateDetectedCellInfo_Scell is NULL(earfcn=%d, index:%d)
Line 4283: SCell time offset Update(Primary:%d, Old:%d, New:%d, Diff:%d)
Line 4302: [RRM TEST][SEARCH] Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 4308: [RRM TEST][SEARCH] NOT Found Target Cell(earfcn:%d, cell id:%d, index:%d)
Line 4313: [RRM TEST][SEARCH] Cell Search Success Rate:%d (Total Cnt:%d, Fail Cnt:%d)
Line 4320: pFreqInfo is NULL
Line 4330: EARFCN : %d, (max_m0 = %d, max_m1 = %d),(MaxM0 : %d, MaxM1 : %d)
Line 4369: Warning! BlackList includes SCell(earfcn:%d, pci:%d) --> Not removed from cell buffer
Line 4417: LteRrm_UpdateAltTttCellList
Line 4430: - %d. cellIndex(%d) startPCI(%d) rangePCI(%d)
Line 4442: alt-TTT cellList numGroup(%d) numTotalCells(%d)
Line 4537: Blacklisted cell ignored (earfcn : %d, cell ID : %d)
Line 4570: alternative-TTT cell detected (earfcn(%d) cell ID(%d) cellIndex(%d))
Line 4628: LteRrm_ResetCsgReservedList
Line 4671: This is CSG Reserved List Cell (EARFCN : %d, Cell ID : %d)
Line 4708: LteRrm_UpdateCsgCellList(), EARFCN:%d
Line 4763: LteRrm_UpdateCsgProximityCellList(), EARFCN:%d
Line 4828: LteRrm_UpdateCsgProximityUtraCellList(), UARFCN:%d
Line 4892: This is CSG Cell (EARFCN : %d, Cell ID : %d)
Line 4917: LteRrm_ResetCsgCellList(), EARFCN:%d
Line 4970: This is CSG Cell (EARFCN : %d, Cell ID : %d)
Line 4995: LteRrm_RemoveCsgMeasList
Line 5004: Remove CSG Meas Request Intra EARFCN : %d
Line 5016: Remove CSG Meas Request Inter EARFCN : %d
Line 5040: Remove CSG Meas(ONLY) Request Inter EARFCN : %d
Line 5069: LteRrm_RemoveCsgUtraMeasList
Line 5079: Remove CSG Meas Request UARFCN : %d
Line 5104: Remove CSG Meas(ONLY) Request UARFCN : %d
Line 5133: LteRrm_UpdateCSGBarredList: EUTRA_List(%d),UTRA_List(%d), Restore List(%d)
Line 5173: Restore cell list(i): RAT_Type(%d), (E)ARFCN(%d), Cell_ID(%d)
Line 5185: Unsupported RAT Type:(%d)
Line 5221: Initialized Pcell Qoffset (%d -> 0)
Line 5231: num of intRA F n: %d
Line 5245: num of intRA F black: %d
Line 5270: Warning : pSIB4->csg_pci_range_present = %d
Line 5310: InterFreq: earfcn(%d) q_rxlevmin(%d) t_resel(%d) thresh_x_high(%d) thresh_x_low(%d) qoffset_freq(%d)
Line 5313: cell_resel_prio_present(%d) cell_resel_prio(%d) resel_sub_priority_present(%d) resel_sub_priority(%d)
Line 5317: q_qualmin_present(%d) q_qualmin(%d) thresh_x_Q_present(%d) thresh_x_Q(%d)
Line 5321: This Freq is not support(eNB error)(Earfcn:%d)
Line 5332: ERROR: Freq in SIB5 is same as Serv Freq (eNB error)
Line 5344: pFreqInfo NULL
Line 5357: pFreqInfo NULL
Line 5438: SIB5: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 5471: num of inter Freq : %d
Line 5485: num of inter Freq black : %d
Line 5524: Buffer overflow: TempNewNeighFreq buffer size is 8(LTE_RRC_MAX_FREQ)
Line 5560: Total EUTRAN Inter FreqInfo Num(%d)
Line 5588: SIB6 NTF: Start UTRA FDD Config
Line 5597: UtraFreq FDD: arfcn(%d) q_rxlevmin(%d) q_qualmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(%d)(present:%d)
Line 5600: qthresh_x_Q_present(%d) thresh_x_Q(%d)
Line 5616: pFreqInfo NULL
Line 5625: Cannot Allocate FreqInfo buffer
Line 5695: UtraFreq TDD: arfcn(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(present:%d)(%d)
Line 5710: pFreqInfo NULL
Line 5719: Cannot Allocate FreqInfo buffer
Line 5868: Arfcn(%d), Band_Indicator(%d), AccessTechIndex(%d), Band_Supported(%d)
Line 5893: UnSupported GSM Band(%d), Set Default Pmax(%d)
Line 5921: SIB7 NTF: Start GERAN Config
Line 5932: ( %d)[%s] SupportBand(%d), PowerClass(%d)
Line 5942: GeranFreq: band(%d) starting_arfcn(%d) num_of_arfcns(%d) q_rxlevmin(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 5944: cell_resel_priority(present:%d)(%d)
Line 5961: pFreqInfo NULL
Line 5970: Cannot Allocate FreqInfo buffer
Line 6055: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 6113: SIB8 NTF: Start CDMA HRPD Config
Line 6117: SIB8 Ptr is NULL
Line 6141: Bandclass is empty(%d)
Line 6151: Cdma(HRPD) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 6153: cell_resel_priority(present:%d)(%d)
Line 6170: pFreqInfo NULL
Line 6180: Cannot Allocate FreqInfo buffer
Line 6228: num of CDMA HRPD neighbor: %d
Line 6246: NULL HRPD info in SIB8
Line 6269: Bandclass is empty(%d)
Line 6279: Cdma(1xRTT) Freq: band(%d) arfcn(%d) thresh_x_high(%d) thresh_x_low(%d)
Line 6281: cell_resel_priority(present:%d)(%d)
Line 6298: pFreqInfo NULL
Line 6308: Cannot Allocate FreqInfo buffer
Line 6355: num of CDMA 1xRTT neighbor: %d
Line 6373: NULL 1xRTT info in SIB8
Line 6413: CSG Freq: earfcn(%d) cell_resel_prio(%d) q_rxlevmin(%d) q_qualmin(%d)
Line 6419: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 6457: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6497: pFreqInfo NULL
Line 6553: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6592: CSG Meas Req: Start CSG UTRA FDD Config
Line 6599: UtraFreq: arfcn(%d) cell_resel_priority(%d) q_rxlevmin(%d) q_QualMin(%d)
Line 6607: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6650: Cannot Allocate FreqInfo buffer
Line 6695: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 6738: LteRrm_SortRsrpToList : pNewSortedCellInfo is NULL
Line 6820: LteRrm_SortRsrqToList : pNewSortedCellInfo is NULL
Line 6890: LteRrm_SortRssinrToList : pNewSortedCellInfo is NULL
Line 6953: LteRrm_SortRssiToList : pNewSortedCellInfo is NULL
Line 7036: LteRrm_InitGrayCellList
Line 7075: Not gray cell : earfcn = %d, cell id = %d
Line 7083: LteRrm_RemoveGrayCellList[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 7245: Invalid cell : earfcn = %d, cell id = %d
Line 7256: LteRrm_FindGrayCellList[%d][cnt:%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 7289: Not gray cell : earfcn = %d, cell id = %d
Line 7314: LteRrm_CheckGrayCellList(EXIST MR)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 7322: LteRrm_CheckGrayCellList(EXIST)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 7330: LteRrm_CheckGrayCellList(NO TIME OUT)[%d]:earfcn(%d) cell_id(%d) cause(%d) startTime(%d) lastTime(%d)
Line 7361: gray cell index error
Line 7371: LteRrm_ReArrangeGrayCellList(%d)
Line 7548: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRP sorted list
Line 7561: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSRQ sorted list
Line 7574: Cell(Freq:%d, PCID:%d, L1_filter_length:%d) is not included in RSSINR sorted list
Line 7738: NCC for GERAN cell(Arfcn:%d, BSIC:%d, RSSI:%d) is not permitted.(Set Freq:%d, ncc_permitted:0x%X)
Line 7748: HRPD Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Line 7758: 1xRTT Cell(Freq:%d, PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list
Line 7770: Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d, RSRP_Threshold:%d))
Line 7783: NR Cell(PCID:%d, RSRP:%d) is removed in RRM RSRP sorted list.(Freq:%d, best RSRP:%d))
Line 7791: LteRrm_ArrangeSortedList - default RAT(%d)
Line 7836: Cell(PCID:%d, RSRP:%d) is removed in RRM RSRQ sorted list.(Freq:%d, best RSRP:%d, RSRP_Threshold:%d)
Line 8030: LteRrm_IsCandiAndIDSetsEmpty : NR LTERRM_CANDI_DETECTED has pbch decode done cell
Line 8076: IDLE_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 8082: IDLE_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 8091: CONN_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 8097: CONN_S(%d)(%d) %d , (%d %d), %d, (RSRQ: %d)
Line 8105: %s State (%d)(%d) %d , m0(%d), TO:%d, (RSRQ: %d)
Line 8111: %s State (%d)(%d) %d , m0(%d), TO:%d, (RSRQ: %d)
Line 8179: [%s] SORTED LIST(%d)
Line 8281: (PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 8286: (PSC:%d) (RSCP:%4d), to:%d, (EcNo: %4d)
Line 8291: (PSC:%d) (RSCP:%4d), to:%d
Line 8297: (arfcn:%d) (BI:%d) (BSIC:%d), (RSSI:%d), To:%d
Line 8303: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 8309: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 8315: NR(%d) - (PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 8360: [%s] SORTED LIST(%d)
Line 8369: (PCID:%d) (RSRP:%4d), to:%d, (RSRQ: %4d)
Line 8374: (PSC:%d) (RSCP:%4d), to:%d, (EcNo: %4d)
Line 8379: (PSC:%d) (RSCP:%4d), to:%d
Line 8385: (arfcn:%d) (BI:%d) (BSIC:%d), (RSSI:%d), To:%d
Line 8391: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 8397: (BC:%d) (BSID:%d), (PN_Strength:%d), (PN_Phase:%d)
Line 8404: NR(%d) - (PCID:%d) (RSRP:%4d), to:%d, (RSSINR: %4d)(RSRQ: %4d)
Line 8657: EARFCN(%d)
Line 8674: N pos change(sleep):(%d) %d -> %d
Line 8714: S pos change(sleep) : %d
Line 8723: PrimaryCell is NULL
Line 8744: SCell(earfcn=%d) timing change(sleep) : %d
Line 8769: Inter(earfcn=%d) timing change(sleep) : %d
Line 8893: Updated MRU(%d) : %d
Line 8906: Invalid EARFCN(0x%x) received, Don't update MRU table
Line 9200: LteRrm_GetDlBand: NOT Supported DL_EARFCN %d!!!
Line 9357: LteRrm_GetUlBand: NOT Supported UL_EARFCN %d!!!
Line 9425: SupportEarfcnList[%d] = %d
Line 9438: gLteRrm_SupportPci = %d
Line 9465: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 9493: HALEXP_CheckRFBandValid: NOT Supported DL_EARFCN %d!!!
Line 9510: gLteRrm_SupportEarfcnList: NOT Supported DL_EARFCN %d!!!
Line 9518: LteRrm_CheckSupportBand: NOT Supported DL_EARFCN %d!!!
Line 9545: PCID(%d) could not found in LteRrm_FindEutranSCellInfo
Line 9600: Cannot Allocate MeasList buffer
Line 9612: Cannot Allocate MeasList buffer
Line 9626: Cannot Allocate MeasList buffer
Line 9699: serving cell : earfcn(%d), band(%d), PCID(%d), DL(%d), UL(%d)
Line 9720: Eutran(intra:%d) : PCID(%d), RSRP(%d), RSRQ(%d)
Line 9770: Eutran(inter:%d) : earfcn(%d) PCID(%d), RSRP(%d), RSRQ(%d)
Line 9830: Utran(%d) : uarfcn(%d) PSC(%d), RSCP(%d), EcNo(%d)
Line 9888: Geran(%d) : arfcn(%d) BSIC(%d), RSSI(%d)
Line 9955: CDMA(%d) : channel(%d) PilotPnOffset(%d), PilotPnPhase(%d), PilotStrength(%d), Band(%d)
Line 10197: LteRrm_InitServCellInfo
Line 10216: ServCellInfo: bNormalCell(%d), earfcn(%d), pcid(%d)
Line 10235: Set ServCellInfo.startTime(%d)
Line 10236: mobility history Tmr START
Line 10255: Set ServCellInfo.lastTime(%d)
Line 10287: Set ServCellInfo.spentTime(%d) - bSpentTimeMax(%d)
Line 10314: Update plmn-id, cell-id in ServCellInfo
Line 10327: Monitor ServCellInfo
Line 10330: - CGI:%8x, MCC:%d, MNC:%d%x, EARFCN:%d
Line 10332: - pcid:%d, startTime:%d, lastTime:%d
Line 10363: NumVisitedCell would be %d > 16 (Max size)
Line 10369: - removed an oldest cell(earfcn:%d, pcid:%d)
Line 10373: NumVisitedCell(%d)
Line 10390: VisitedCellList is NULL
Line 10397: First camp-on: bFirstVisitedCell changes (1->0)
Line 10401: Add current cell to VisitedCellList
Line 10412: - added cell(earfcn:%d, pcid:%d)
Line 10413: - NumVisitedCell++: %d->%d
Line 10437: VisitedCellList(Num:%d) ---
Line 10442: %d. Earfcn:%d
Line 10443: - cellId:%d
Line 10445: - Mcc:%d, Mnc:%d%x
Line 10446: - GlobalCID:%8x
Line 10447: - spentTime:%d
Line 10489: LteRrm_InitVisitedCellList
Line 10512: LteRrm_FreeVisitedCellList
Line 10581: bNormalCell(%d)
Line 10582: - NULL information is stored in ServCellInfo
Line 10586: Error: bNormalCell(%d) in UpdateVisitedCellList out of range
Line 10632: Same cell revisit: no update for visitedCellList
Line 10655: LTERRM.Set.pVisitedCellList is NULL
Line 10682: Suspend cause(%d)
Line 10694: Suspend cause(%d) is out of range
Line 10732: - Visited Cell list index(%d) out of range
Line 10815: Warning! pFreqInfo is NULL
Line 10821: Warning! pci(%d) out of range
Line 10851: LteRrm_UpdateGapFaInfo : search_result is NULL
Line 10941: LteRrm_AddNrPbchCandiList : narfcn(%d) pcid(%d) beam_index(%d) beam_timing_offset(%d) rx_beam_index(%d)
Line 10968: pFreqInfo(earfcn:%d) is NULL)
Line 10976: This Cell(%d) already removed!
Line 10984: Remove cell(%d) - NR PBCH decoding fail
Line 11015: LteRrm_RemoveNrPbchCandiFreq pNrPbchCandiList is NULL
Line 11068: LteRrm_ReleaseEndcServingFreq : NrSCellInfo[%d] - narfcn:%d is NULL
Line 11094: LteRrm_ReleaseEndcServingFreq : measID(%d) associated with EN-DC freq(%d)
Line 11135: SIB24 NTF: Start NR Config
Line 11141: freq_list_nr[%d] is null
Line 11149: NR : arfcn(%d) q_rxlevmin(%d) q_qualmin(%d) thresh_x_high(%d) thresh_x_low(%d) cell_resel_priority(%d)
Line 11152: thresh_x_Q_present(%d) thresh_x_Q(%d)
Line 11169: pFreqInfo NULL
Line 11178: Cannot Allocate FreqInfo buffer
Line 11227:    >>SsbToMeasurePresent is present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 11247:    >>SsbToMeasurePresent is not present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 11401: Unexpected freqBandIndicatorNR_r15:%d
Line 11405: LteRrm_GetNrDuplexMode - freqBandIndicatorNR_r15:%d duplexMode:%s((enum)%d)
Line 11418: LteRrm_IsAllowedDeriveSsbIndexForFreq - Arfcn:%d
Line 11444:    >>bAllowed:(bool)%d - bTargetCellFound:(bool)%d duplexMode:%s((enum)%d) bDeriveSsbIndexFromCell:(bool)%d
Line 11455: LteRrm_DeriveSsbIndexUsingSrchResult - search_position:%d
Line 11464:    >>pTargetCell is null
Line 11474:    >>twoSsbSymbolLength:%d(SCS:(enum)%d)
Line 11497: LteRrm_DeriveSsbIndex - SsbTimingOffset:%d Tolerence:%d
Line 11514:    >>FOUND SsbIndex:%d(TimingOffset:%d) - VERIFY difference:%d with Tolerence:%d
Line 11519:    >>INVALID - Difference exceed Tolerence
Line 11542: LteRrm_CheckBlindDetectedNrCell - cell ID(%d) is blind detection done
