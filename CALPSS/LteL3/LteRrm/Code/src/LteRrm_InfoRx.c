Line 184: withSIB1: %d, num: %d, imme: %d
Line 194: SI update after SI modification timer expired
Line 199: LteRrm_AllocCellInfoBuf: TargetCell
Line 206: please check: TargetCell(0x%X) or PrimaryCell(0x%X) is NULL!!
Line 320: SI READ SUCCESS
Line 336: LteRrmIdle_GoToSleep() due to SI_READ_SUCCESS
Line 342: Skip LteRrmIdle_GoToSleep() due to SI modification
Line 353: ESS SI READ FAIL
Line 399: ConnToIdleLastCell: TRUE to FALSE
Line 405: LteRrm_AllocCellInfoBuf:LteRrm_FreeCellInfoBuf
Line 423: Try Cell selection to next cell (idx:%d)
Line 444: ESS SI READ FAIL when IdleProc, LTERRM_PLMN_SCAN
Line 450: SI READ stop already(%s)
Line 457: ESS SI READ FAIL when IdleProc==LTERRM_IDLE (SI update?)
Line 465: LTE_CPHY_CELL_RESEL_EVAL_IND with FAIL
Line 472: ERROR: Invalid LteRrm idleproc
Line 701: SIB3,4,5 received before SIB2
Line 742: IntraFreq NULL
Line 749: SIB3 received:ReselPriorityOfPCell(%d).(%d)
Line 757: speed_dep_resel_present received
Line 761: - t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
Line 784: SameCellSelect:%d
Line 877: SIB3: q_QualPresent=(%d), q_QualMin=(%d), q_Qualminoffset=(%d), q_QualMinWBPresent=(%d), q_QualMinAllSymbolPresent=(%d)
Line 963: SIB4 received
Line 982: SIB5 received
Line 1138: Invalid SYNC/ASYNC SYSTEM TIME[0:SYNC/1:ASYNC], received(%d), noupdate
Line 1151: cdma_EUTRA_Synchronisation(%d), [0:SYNC/1:ASYNC](%d), system_time(0x%x%08x), LTE End sfn(%d)
Line 1159: systemTimeInfoCDMAPresent in SIB8 is FALSE, no update
Line 1410: ERROR: Invalid Ns and i_s
Line 1457: LteRrm_ConfigSCellPch i_s(%d), N(%d), Ns(%d) , index (%d), isServingCell(%d)
Line 1475: ERROR: Invalid Ns and i_s
Line 1492: [RRM-MBSFN] Serving Cell PCH Valid[%d]
Line 1505: LteRrm_ConfigSCell Pch drx_T(%d), PF(%d), PO(%d)
Line 1548: Update CSG Reserved List : %d
Line 1559:  [%d] EARFCN:%d, StartPCI:%d, RangePCI:%d
Line 1580: previously CsgMeasReq is already received (%d), stop previous CsgMeasReq
Line 1627: Stop CSG Meas(%d)
Line 1639: CSG Meas is Already Stopped (LTERRM_NO_CSG_MEAS)
Line 1657: Request CSG Proximity Meas
Line 1661: LteRrm_ProcCsgProximityMeasReq is reconfigured (%d)
Line 1681: LteRrm_ProcCsgProximityStopMeasReq()
Line 1735: (ignored)LPP(ECID) is already scheduled
Line 1746: LteRrm_ProcEcidMeasReq : reportingAmount[%d], reportingInterval[%d]
Line 1765: (ignored)LPP(ECID) is already aborted
Line 1799: (ignored)LPP(OTDOA) is already scheduled
Line 1812: Reference cell Info in LPP(OTDOA) is different from serving cell
Line 1821: Replace optional field(Ref Cell earfcn) by serving cell earfcn
Line 1826: optional field(Ref Cell earfcn) = %d
Line 1897: (ignored)LPP(OTDOA) is already aborted
Line 1930: (ignored)LPP(OTDOA) is already aborted
Line 2033: Warning!! bScgConfigFlag(1) but PSCell remains configured --> process deact/release
Line 2038: Warning!! bScgConfigFlag(1) but SCG SCell remains configured --> process deact/release
Line 2326: meas_result...eutra_meas_result_list2 NULL
Line 2336: MDT EUTRAN - no Ncell
Line 2347: meas_result...eutra_freq_meas NULL
Line 2508: meas_result...utra_meas_result_list2 NULL
Line 2518: MDT UTRAN - no Ncell
Line 2529: meas_result...utra_freq_meas NULL
Line 2574: MDT UTRAN RAT type(%d) is not valid -> FDD set
Line 2657: meas_result...gsm_meas_result_list2 NULL
Line 2667: MDT GERAN - no Ncell
Line 2678: meas_result...gsm_cell_meas_list NULL
Line 2683: MDT GERAN RAT - num(%d)t
Line 2702: meas_result...gsm_cell_meas NULL
Line 2723: MDT GERAN RAT - (arfcn:%d, rssi:%d)
Line 2760: bImmediate1(%d), MDT.usMeasRat(0x%x)
Line 2774: bImmediate2(%d), MDT.usMeasRat(0x%x)
Line 2797: bImmediate3(%d), MDT.usMeasRat(0x%x)
Line 2881: LteRrm_InitPscellBlindSrchMngr
Line 2905: LteRrm_SaveRrmCfgMsgPSCell: pMsg is NULL
Line 2913: Warning! same RRM_CONFIG_REQ message already stored in LteRrm_SaveRrmCfgMsgPSCell
Line 2925: Cannot Allocate Message buffer
Line 2930: save pSaveRrmCfgMsgPSCell (rrm_config_flag:0x%x)
Line 2954: Warning!! NOT Supported DL_EARFCN %d!!! in LteRrm_StartBlindSrchPSCell
Line 2960: Warning!! pPSCellFreq: NULL in LteRrm_StartBlindSrchPSCell
Line 2985: Warning!! PSCell not found but pscellStatus:KNOWN_DETECTED in LteRrm_StartBlindSrchPSCell
Line 2999: Start Measurement: PSCell Frequency Blind search(earfcn:%d)
Line 3065: Warning! bSrchFlag: FALSE in LteRrm_ProcPSCellBlindSrchResult
Line 3072: Warning! pPSCellFreq: NULL in LteRrm_ProcPSCellBlindSrchResult
Line 3078: LteRrm_ProcPSCellBlindSrchResult (doneCnt:%d / maxCnt:%d)
Line 3120: Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Line 3169: Warning!! pMeasCnf: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3175: Warning!! pPSCell: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3181: Warning!! pPSCellFreq: NULL in LteRrm_ProcPSCellInitMeasResult
Line 3188: Warning!! measResult->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Line 3195: Warning!! pPSCellFreq->earfcn(%d) different to pPSCell->earfcn(%d) in LteRrm_ProcPSCellInitMeasResult
Line 3213: Resume processing LTE_CPHY_RRM_CONFIG_REQ without SCG config
Line 3229: Warning!! Unexpected meas result (cell_ID:%d)
Line 3238: PSCell - rsrp(%d)
Line 3246: Resume processing LTE_CPHY_RRM_CONFIG_REQ with measured PSCell
Line 3280: - pFreqInfo NULL
Line 3284: - PScell FreqInfo(earfcn=%d) is created newly
Line 3301: Warning!! LteRrm_StartBlindSrchPSCell: pFreqInfo not found --> check pscellStatus(%d)
Line 3333: Warning! PSCell earfcn = PCell earfcn(%d) in LteRrm_GetPSCellStatus - Need to check in RRC
Line 3360: - PSCell: Unknown (no such pFreqInfo)
Line 3368: - PSCell: Known
Line 3380: - PSCell: Unknown (no such pCellInfo)
Line 3407: Config - rrm_config_flag(%d)
Line 3408: - MCG SCell num_add(%d) num_rel(%d)
Line 3409: - meas_sf_pattern_pcell setup  (%d)
Line 3410: - crs_assistance_info   setup  (%d)
Line 3414: - SCG PSCell setup (%d)
Line 3415: - SCG SCell num_add(%d) num_rel(%d)
Line 3418: - EN-DC setup (%d)
Line 3433: [EN-DC CONFIG] Nr Serving Cell(%d) - ARFCN(%d) CellId(%d)
Line 3443: pFreqInfo is NULL as a result of LteRrm_AllocFreqInfoBuf()
Line 3461: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 3492: measSubframePatternPcell: meas_mode(%d)
Line 3508: feICIC crs_assistance_info: Setup
Line 3512: - NeighCellsCRS-Info is setup again by RRC before release
Line 3517: - NeighCellsCRS-Info not configured, num_cell(%d)
Line 3522: - NeighCellsCRS-Info configured, num_cell(%d)
Line 3539: feICIC crs_assistance_info: Release
Line 3543: - num_cell from RRC is not 0 : need to check in RRC
Line 3558: - SCellIndex(%d) for PSCell: out of range
Line 3585: PSCell: setup (SCellIndex:%d)
Line 3625: PSCell: release
Line 3786: SCellActivationfromMAC = 0x%x, SCellActivationTTI = %d
Line 3824: UE has already full supported Scell(%d)
Line 3831: Support the activation for ONLY one SCell !!!(%d->%d)
Line 3882: LteRrm_ProcRemovePSCell
Line 3886: Warning! sCellIndex(%d)
Line 3892: Warning! PSCell(%x) or PSCellFreq(%x) is NULL
Line 3898: Warning! Received SCellIndex(%d) is not configured for PSCell
Line 3912: Deactivate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 4116: Warning! SCG SCell not added <-- pPSCell(%d) pPSCellFreq(%d)
Line 4124: Wrong input in LteRrm_ProcAddSCellCellGroup. Check cellGroup(%d) rrm_config_flag(%d)
Line 4135: - SCellIndex(%d) is out of range - need to check (earfcn:%d, pcid:%d)
Line 4144: SCell Freq(%d) is abnormal -> discard.
Line 4225: MCG: num_seccell(%d), num_remove_seccell(%d)
Line 4238: SCG: num_seccell(%d), num_remove_seccell(%d)
Line 4280: Wrong cellGroup(%d) value used -> SCell(index:%d) is not configured
Line 4300: Intra Freq Scell is not supported
Line 4304: InterFreq -> SCellFreq
Line 4317: Inter Freq does not have the measurement list!!!
Line 4324: previously the same earfcn(%d_%d) is configured as Scell(%d)
Line 4340: TempFreqInfo NULL
Line 4344: Scell FreqInfo(earfcn=%d) is created newly
Line 4382: Scell(%d_PCID:%d) is already configured - ignore
Line 4387: the same freq(%d) and index but diff cell ID (%d_%d) -> discard
Line 4393: the same freq(%d) but diff index(%d_%d) -> discard
Line 4399: there is no candidated cell(%d) with index(%d) -> discard
Line 4430: pTCellInfo NULL
Line 4442: Scell CellInfo(earfcn=%d, PCID=%d) is created newly
Line 4462: - configured in SCG
Line 4491: Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Line 4542: - Warning! This band is not for LAA but configured as LAA by RRC --> ignore the field
Line 4547: - LAA SCell configured
Line 4577: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 4607: Warning!! pConfig(%x) in LteRrm_SetConfigKnownPSCell
Line 4613: Warning! pPrimaryCell : NULL in LteRrm_SetConfigKnownPSCell
Line 4617: LteRrm_SetConfigKnownPSCell
Line 4630: same cell with previous PSCell
Line 4635: Warning!! no matched pCellInfo
Line 4689: Mismatch SCell Index[%d] : Cell ID[%d | %d] & DL EARFCN[%d | %d]
Line 4773: Warning! LTERRM could not support SCell(%d) more than %d. CHECK!!!
Line 4834: - Warning! filtered_rsrp_pc: invalid for PSCell in LteRrm_SetConfigKnownPSCell
Line 4844: Activate PSCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 4889: LTERRM could not support SCell(%d) more than %d. CHECK!!!
Line 4908: SecondaryCell could not found([%d] Cell ID:%d, earfcn:%d)
Line 4923: [%d] Freq(%d) Cell(%d) earfcn values are different
Line 4953: Wrong Scell info2(%x:%x)
Line 4971: SCellFreq NULL
Line 5050: SCell Activation : Cell ID[%d], DL EARFCN[%d]
Line 5053: Activate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5103: LTERRM could not find SCell(index:%d). CHECK!!!
Line 5106: config(%d), earfcn(%d), PCID(%d)
Line 5136: Deactivate Scell(%d) by Deactivation Timer expiry
Line 5139: Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5167: SCell is deactivated(SCellIndex: %d, CellID: %d, SCellActivationCMD: 0x%x)
Line 5170: Deactivate SCell (SCellIndex:%d, Earfcn:%d, CellID: %d) !!!
Line 5206: SCell Deactivation is ignored(index:%d(%d))
Line 5266: Scell(%d) configured but not found FreqInfo in gpLteRrm_SCellFreqList
Line 5278: Scell(%d) configured but not found CellInfo in SCellFreq
Line 5285: SCell Config is removed(SCellIndex: %d, CellID: %d)
Line 5300: SCellFreq -> InterFreq
Line 5319: SCell is not configured(%d)
Line 5369: LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
Line 5375: All SCells(cellgroup:%d) are deactivated !!!
Line 5401: SCellConfig.SCellActivationCMD(%d)
Line 5405: All SCells are already deactivated !!!
Line 5453: LTE_REL12_DUALC is not defined but cellgroup(%d) is used -> changed to 0
Line 5918: Result[%d] Active(%d), earfcn(%d)
Line 5936: Result[%d] Active(%d), earfcn(%d)
Line 5990: LteRrm_CheckScellTiming (earfcn:%d, result:%d)
Line 6002: Scell list is Empty
Line 6014: Scell(%d) Doesn't have correct timing info
Line 6019: Scell(%d) has correct timing info
Line 6037: All Scells have correct timing info
Line 6104: - Warning! pFreqInfo is NULL
Line 6110: - Warning! PrimaryCell is NULL
Line 6120: - Warning! pci(%d) out of range
Line 6126: - Warning! PCell NOT expected in measSubframeCellList
Line 6129: - measSubframePattern for PCell already configured
Line 6140: - measSubframePatternPcell: meas_mode(%d)
Line 6147: -%d. pci(%d) configured
Line 6165: - earfcn(%d) meas_mode(%d) num_meas_pattern_ncell(%d)
Line 6185: NeighPatternList NULL(%d) or empty
Line 6194: Meas Neigh Pattern Update (earfcn:%d, meas_mode:%d)
Line 6225: Warning! pFreqInfo is NULL
Line 6231: Warning! LteRrm_RemoveMeasNeighPattern: NumOfNeighPatt is 0
Line 6245: Remove MeasNeighPattern(Freq:%d) from List(num:%d)
Line 6333: Cannot Allocate PatternList buffer
Line 6345: - new measSubframePatternNeigh (earfcn:%d, meas_mode:%d, num:%d)
Line 6371: MeasSubframePatternNeigh List is updated
Line 6384: - (%d) earfcn(%d) meas_mode(%d)
Line 6427: Curr. feicic activation state
Line 6431: Error: gLteRrm_NeighborCrsInfo_r11.num_cell is out of range(%d)
Line 6440: - %d. FeicicActBitmap[%d]:%d (pci:%d)
Line 6501: %d. Pci(%d) found in Sorted list
Line 6509: -- Out of bound: FeicicTmpCellList.num_cell(%d)
Line 6524: -- ant_num(%d), cp_type(%d)
Line 6536: -- mbsfn_valid(1), mbsfn_config_cnt(%d)
Line 6541: -- mbsfn_valid(0)
Line 6546: -> Crs-Assi cell(pci:%d) detected and selected as SIC candidate
Line 6550: -> Crs-Assi cell(pci:%d) detected BUT not satisfied with SIC conditions
Line 6568: -- No valid Ncell in Intra-freq Sorted-list
Line 6615: LteRrm_CheckFeicicCandiChange
Line 6622: - Error: Need to check crsAssistActivated change. FeicicActCellList.num_cell is (%d)
Line 6629: - no any target cell observed - Deactivates feicic
Line 6662: - no change in dominant candidate cell
Line 6695: feicic check: crsAssistConfigured(%d) crsAssistActivated(%d)
Line 6702: Activates feicic
Line 6711: Updates feicic
Line 6756: PowerClass(%d), earfcn(%d)
Line 6769: [WARN] Need to check PowerClass -> set PowerClass 3
