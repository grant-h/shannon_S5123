Line 182: ##[NR_BCH] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND_Handler:: EventId(%u), ExceptionCause(%u), on_going_proc(0x%x), cb_param(%d), ctrlr_state(%d)
Line 324: ##[NR_BCH] %s(state:%d), ctrlr_state(%d)
Line 344: ##[NR_BCH] L1C_L1C_BCHCTRLR_BCH_CONFIG_REQ_Handler:: on_going_proc(0x%x), ctrlr_state(%d)
Line 373: ##[NR_BCH] L1C_L1C_BCHCTRLR_SIB_DECODE_STOP_REQ_Handler::RoutingInfo[%d], ctrlr_state(%d), on_going_proc(0x%x)
Line 395: ##[NR_BCH] %s, ctrlr_state(%d), on_going_proc(0x%x)
Line 417: ##[NR_BCH] L1C_L1C_BCHCTRLR_SERVING_CELL_CHANGE_REQ_Handler#1(cellId(%d), arfcn(%d), band(%d), freq(%d), ssbIndex(%d), scs(%d), timingOffset(%d))
Line 419: ##[NR_BCH] L1C_L1C_BCHCTRLR_SERVING_CELL_CHANGE_REQ_Handler#2(period(%d), servcell_recovery(%d))
Line 461: ##[NR_BCH] L1C_L1C_DRXCTRLR_CELL_TIME_RESTORE_CNF_Handler:: ctrlr_state(%d), on_going_proc(0x%x)
Line 489: ##[NR_BCH] L1C_L1C_IRATCFGCTRLR_RELEASE_ALL_REQ_Handler:: modem_state(%d), ctrlr_state(%d), on_going_proc(0x%x)
Line 548: ##[NR_BCH] ALL_STOP_REQ_Handler():: ctrlr_state(%d), on_going_proc(0x%x)
Line 598: %s, ##[NR_BCH] Receive : PBCH_DECODE_REQ:: ctrlr_state(%d), on_going_proc(0x%x)
Line 616: ##[NR_BCH] L2N PBCH decoding triggered after NR cell config
Line 682: ##[NR_BCH] abnormal srcRat %d
Line 715: ##[NR_BCH] Receive : PHY_CONFIG_REQ:: CellGrpId(%d), ScellBitMask(0x%x), DeltaScellBitMask(0x%x), sib1_config(%d), dsds_resume(%d), UeCapa(Band=%d, UL4/BwpSwitch4=0x%4x)
Line 759: ##[NR_BCH] XPHY Mode is running
Line 779: ##[NR_BCH][WARNING] None of phy config info. exists
Line 787: ##[NR_BCH][WARNING] Invalid dsds_resume (%d) 
Line 793: ##[NR_BCH][WARNING] Invalid msgSrcId : %d 
Line 843: ##[NR_BCH] Receive : PHY_RELEASE_REQ:: ctrlr_state(%d), on_going_proc(0x%x)
Line 869: ##[NR_BCH] Receive : L1C_L1C_BCHCTRLR_BWP_CHANGE_REQ_Handler:: scell_idx(%d), bwp_idx(D:%d, U:%d), ctrlr_state(%d), on_going_proc(0x%x)
Line 911: ##[NR_BCH] Receive : L1C_PHY_BWP_ID_UPD_IND_Handler (%d, %d)
Line 933: ##[NR_BCH] L1C_L1C_BCHCTRLR_SCELL_STATUS_IND_Handler(num_of_scell = %d), ctrlr_state(%d), on_going_proc(0x%x)
Line 937: ##[NR_BCH] L1C_L1C_BCHCTRLR_SCELL_STATUS_IND_Handler Discard Overheating Status
Line 946: ##[NR_BCH] ***** [%d] scell_idx(%d), act_deact(%d), ssb_idx(0x%x)
Line 975: ##[NR_BCH] PATH_CONFIG_CNF:: req_type(%d), num_of_cfg_cell(%d), num_of_rel_cell(%d), on_going_proc(0x%x)
Line 990: ##[NR_BCH] Invalid req_type(%d)
Line 1164: ##[NR_BCH] L1C_HAL_OVERHEATING_IND_Handler Mode(%d), ThermalLevel(%d) Temperature(%d)
Line 1198: ##[NR_BCH] L1C_L1C_BCHCTRLR_SERVING_CELL_RELEASE_REQ_Handler:: ctrlr_state(%d), on_going_proc(0x%x)
Line 1231: ##[NR_BCH] InitBchSib1PathCfgInfo()
Line 1242: ##[NR_BCH] InitBchPathCfgInfo()
Line 1273: ##[NR_BCH][MSG_CNF_INFO][%d] alloc_res(DL = %d, UL = %d)
Line 1279: ##[NR_BCH] ====> cell_info_idx(%d), req_scell_idx(0x%x), alloc_rx_path(%d), alloc_demod_cc(%d), alloc_dl_freq(%d), alloc_bw(0x%02x, D8U8), alloc_tx_path(0x%02x, N8S8)
Line 1286: ##[NR_BCH] [MSG_CNF_INFO] Rel Scell Idx(%d)
Line 1306: ##[NR_BCH] ReleaseScellCfgList
Line 1313: ##[NR_BCH] scell_rel_list is NULL
Line 1320: ##[NR_BCH] scell_add_list is NULL
Line 1353: ##[NR_BCH] Target scell index is not found in BchPathCfg (%d)
Line 1359: ##[NR_BCH] Invalid scell_idx for PATH_REL (%d)
Line 1364: ##[NR_BCH] PATH_CONFIG_CNF(PBCH/SERV) for (%d) out of (%d) Release, scell_idx(%d), bch_path_cfg_idx(%d)
Line 1371: ##[NR_BCH] [BCH_PATH_CNF_INFO] num_cell[%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 1429: ##[NR_BCH] start_path_cfg_cnf_idx is 1 for SCELL
Line 1434: ##[NR_BCH] Invalid req_type in current BCH function flow
Line 1446: ##[NR_BCH] [PATH_CNF_INFO] [%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 1456: ##[NR_BCH] PATH_CONFIG_CNF(PBCH/SERV_CELL) for PCELL
Line 1462: ##[NR_BCH] Fail to stop PBCHDECODE_NR_CMD
Line 1485: ##[NR_BCH] L1C_L1C_PBCH_REQ#1(cellId(%d), cur_freq_info(%d %d %d), ssb_freq(%d), SsbIndex(%d), rx_path_idx(%d))
Line 1487: ##[NR_BCH] L1C_L1C_PBCH_REQ#2(scs(%d), timeOffset(%d), subType(%d), Period(%d), demod_cc(%d))
Line 1497: ##[NR_BCH] Fail to send PBCHDECODE_NR_CMD
Line 1504: ##[NR_BCH] PATH_CONFIG_CNF(SERV_CELL) for SCELL
Line 1510: ##[NR_BCH] Invalid function in current BCH Ctrlr flow
Line 1536: ##[NR_BCH] PATH_CONFIG_CNF(MODIFY) for PCELL
Line 1545: ##[NR_BCH] [BCH_PATH_CNF_INFO] num_of_bch_cfg_cell[%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 1562: ##[NR_BCH] bch_sib1_path_cfg rx_path(%d), (alloc_freq = %d, alloc_bw = %d, sib1_freq = %d, sib1_rb = %d)
Line 1612: ##[NR_BCH] Invalid on_going_proc(0x%x)
Line 1622: ##[NR_BCH] PATH_CONFIG_CNF(MODIFY) for (%d) out of (%d) SCELL Act
Line 1628: ##[NR_BCH] Target scell index is not found in BchPathCfg
Line 1636: ##[NR_BCH] [BCH_PATH_CNF_INFO] [%d] cell_info_idx(%d), req_scell_idx(%d), alloc_demod_cc(%d), alloc_bw(%d), alloc_freq(%d)
Line 1644: ##[NR_BCH] PATH_CONFIG_CNF(MODIFY) for (%d) out of (%d) SCELL DEACT
Line 1686: ##[NR_BCH] ProcessSibDecStopReq:: ctrlr_state(%d), on_going_proc(0x%x), osi_flag(%d)
Line 1736: ##[NR_BCH] SetSibConfigCb
Line 1753: ##[NR_BCH] HAL->BCHCTRLR@%s
Line 1775: ##[NR_BCH] Fail to stop PBCHDECODE_NR_CMD
Line 1787: ##[NR_BCH] PBCH decoding expired(NR_PBCH_DECODE)
Line 1798: ##[NR_BCH] PBCH decoding expired(NR_SERVING_CELL_CHAGE)
Line 1810: ##[NR_BCH] PBCH decoding expired(NR_IRAT_PBCH)
Line 1842: ##[NR_BCH] Send L1C_L1C_BCHCTRLR_PBCH_DECODE_CNF to RRMINTERFACECTRLR
Line 1862: ##[NR_BCH] PBCH decoding fail,  NrPbchCrcReport : %d
Line 1919: ##[NR_BCH] HAL->BCHCTRLR@%s:: recovery(%d), on_going_proc(0x%x)
Line 1929: ##[NR_BCH] BchConfigCb : skip cnf to RRM
Line 1947: ##[NR_BCH] HAL->BCHCTRLR@%s:: ctrlr_state(%d), on_going_proc(0x%x)
Line 1981: ##[NR_BCH] BCHCTRLR->HAL@%s
Line 2001: ##{NR_BCH] HAL->BCHCTRLR@%s
Line 2040: ##[NR_BCH] SIB1:: TableIdx is not found in FR1
Line 2056: ##[NR_BCH] SIB1:: TableIdx is not found in FR2
Line 2064: ##[NR_BCH] SIB1:: SsbStartFreq(%d), Sib1StartFreq(%d), Sib1Center(%d, %d), Sib1_Bw(%d)
Line 2100: ##[NR_BCH] ServCell Info Update -ARFCN(%d) CELLID(%d) SSBIDX(%d) TimingOffsetForIndex(0) (%d)
Line 2139: ##{NR_BCH] HAL->BCHCTRLR@%s
Line 2159: ##[NR_BCH] CalcSib1FreqInfo : sib1_freq(%d), sib1_rb_num(%d), sib1_scs(%d)
Line 2176: ##[NR_BCH] CalcSib1FreqInfo:: SSB(Start = %d, End = %d), SIB1(Start = %d, End = %d), calc_freq = %d, needed_bw = %d KHz
Line 2209: ##[NR_BCH] PHY_CFG_SIB1::GetBwpInfoFromSibCfg()
Line 2213: ##[NR_BCH] PHY_CFG_SIB1::pCommonSib is NULL
Line 2214: ##[NR_BCH] PHY_CFG_SIB1::pMib is NULL
Line 2226: ##[NR_BCH] PHY_CFG_SIB1::OFFSET_TO_POINT_A_MASK is absent.
Line 2237: ##[NR_BCH] PHY_CFG_SIB1:: k_ssb(%d), freq_offset_to_pointA(%d), freq_offset_to_float_ssb(%d), freq_pointA(%d), PointA_ARFCN(%d)
Line 2253: ##[NR_BCH] PHY_CFG_SIB1::[%d] carr_scs(%d), offsetToCarrier(%d), carrierBandwidth(%d)
Line 2272: ##[NR_BCH] PHY_CFG_SIB1::SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 2311: ##[NR_BCH] PHY_CFG_SIB1::LOCATION_AND_BANDWIDTH_MASK is absent.
Line 2324: ##[NR_BCH] PHY_CFG_SIB1::SUBCARRIER_SPACING_MASK is absent.
Line 2330: ##[NR_BCH] PHY_CFG_SIB1::Rcvd InitBwp BWP_DB[%d] LocAndBand(%d)[Start = %d, Len = %d Scs = %d]
Line 2335: ##[NR_BCH] PHY_CFG_SIB1::GENERIC_PARAMETERS_MASK is absent.
Line 2349: ##[NR_BCH] PHY_CFG_SIB1::SIB DOWNLINK_CONFIG_COMMON_MASK is absent.
Line 2355: ##[NR_BCH] PHY_CFG_SIB1:: Keep Current act_bwp_idx(%d)
Line 2370: ##[NR_BCH] PHY_CFG_SIB1::ABSOLUTE_FREQUENCY_POINT_A_MASK is absent.
Line 2375: ##[NR_BCH] PHY_CFG_SIB1_UL:: UL PointA(%d)
Line 2390: ##[NR_BCH] PHY_CFG_SIB1_UL::NumOfSpecificCarrier(%d)
Line 2395: ##[NR_BCH] PHY_CFG_SIB1_UL::SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 2426: ##[NR_BCH] PHY_CFG_SIB1_UL::LOCATION_AND_BANDWIDTH_MASK is absent.
Line 2435: ##[NR_BCH] PHY_CFG_SIB1_UL::SUBCARRIER_SPACING_MASK is absent.
Line 2441: ##[NR_BCH] PHY_CFG_SIB1_UL::Rcvd InitUlBwp BWP_DB[%d] LocAndBand(%d)[Start = %d, Len = %d Scs = %d]
Line 2446: ##[NR_BCH] PHY_CFG_SIB1_UL::GENERIC_PARAMETERS_MASK is absent.
Line 2452: ##[NR_BCH] PHY_CFG_SIB1_UL::SIB UPLINK_CONFIG_COMMON_MASK is absent.
Line 2471: ##[NR_BCH] PHY_CFG_P:: UpdateBwpGenericInfo is called for FDD
Line 2475: ##[NR_BCH] PHY_CFG_P:: pcell_duplex_mode is invalid
Line 2497: ##[NR_BCH] GetBwpInfoFromSpcellCfg:: GetBwpDb from Cell_idx(0)
Line 2533: ##[NR_BCH] PHY_CFG_P::SpecificCarr Info listIdx(%d) isValid(%d) Scs(%d) (Offset = %d, NumRb = %d)
Line 2536: ##[NR_BCH] PHY_CFG_P::DL_NumOfSpecificCarrier(%d)
Line 2546: ##[NR_BCH] PHY_CFG_P::DL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 2551: ##[NR_BCH] PHY_CFG_P::FREQUENCY_INFO_DL_MASK is absent.
Line 2597: ##[NR_BCH] PHY_CFG_P::Rcvd DL_InitBwp BWP_DB[%d] LocAndBand(%d)[Start = %d, Len = %d Scs = %d]
Line 2603: ##[NR_BCH] PHY_CFG_P::DL_GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 2609: ##[NR_BCH] PHY_CFG_P::DOWNLINK_CONFIG_COMMON_MASK is absent.
Line 2627: ##[NR_BCH] PHY_CFG_P::UL_SpecificCarr Info listIdx(%d) isValid(%d) Scs(%d) (Offset = %d, NumRb = %d)
Line 2630: ##[NR_BCH] PHY_CFG_P::UL_NumOfSpecificCarrier(%d)
Line 2639: ##[NR_BCH] PHY_CFG_P::UL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 2644: ##[NR_BCH] PHY_CFG_P::FREQUENCY_INFO_UL_MASK is absent.
Line 2690: ##[NR_BCH] PHY_CFG_P::Rcvd UL_InitBwp BWP_DB[%d] LocAndBand(%d)[Start = %d, Len = %d Scs = %d]
Line 2695: ##[NR_BCH] PHY_CFG_P::UL_GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 2702: ##[NR_BCH] PHY_CFG_P::SERVINGCELL_CONFIG_COMMON_MASK is absent.
Line 2707: ##[NR_BCH] PHY_CFG_P::RECONFIGWITH_SYNC_MASK is absent.
Line 2736: ##[NR_BCH] PHY_CFG_P::FIRST_ACTIVE_DOWNLINK_BWP_ID_MASK is absent.
Line 2749: ##[NR_BCH] PHY_CFG_P::DEFAULT_DOWNLINK_BWP_ID is absent.
Line 2751: ##[NR_BCH] PHY_CFG_P:: FirstActiveDLBwpId(%d) DefaultBwpId(%d)
Line 2801: ##[NR_BCH] PHY_CFG_P::Rcvd downlinkBwpList BWP_DB[%d] LocAndBand(%d)[Start=%d, Len = %d, Scs = %d]
Line 2808: ##[NR_BCH] PHY_CFG_P::DOWNLINK_BWP_MASK is absent.
Line 2814: ##[NR_BCH] PHY_CFG_P::dl_num_of_bwp (%d)
Line 2832: ##[NR_BCH] PHY_CFG_P::FIRST_ACTIVE_UPLINK_BWP_ID_MASK is absent.
Line 2846: ##[NR_BCH] PHY_CFG_P:: firstActiveUplinkBwpId(%d) defaultUplinkBwpId(%d)
Line 2896: ##[NR_BCH] PHY_CFG_P::Rcvd uplinkBwpList BWP_DB[%d] LocAndBand(%d)[Start=%d, Len = %d, Scs = %d]
Line 2903: ##[NR_BCH] PHY_CFG_P::UPLINK_BWP_LIST_MASK is absent @ FDD
Line 2909: ##[NR_BCH] PHY_CFG_P::ul_num_of_bwp (%d) @ FDD
Line 2914: ##[NR_BCH] UPLINK_CONFIG_MASK is absent @ FDD
Line 2920: ##[NR_BCH] PHY_CFG_P::SPECLL_CONFIG_DEDICATED_MASK is absent.
Line 2935: ##[NR_BCH] PHY_CFG_P:: UpdateBwpGenericInfo is called for FDD
Line 2939: ##[NR_BCH] PHY_CFG_P:: pcell_duplex_mode is invalid
Line 2960: ##[NR_BCH] PHY_CFG_S:: GetBwpInfoFromScellCfg() scell_idx(%d)
Line 2964: ##[NR_BCH] PHY_CFG_S::abnormal scell_idx : %d
Line 2972: ##[NR_BCH] PHY_CFG_S:: Invalid scell_index(%d) @ ScellToAddMod
Line 2983: ##[NR_BCH] PHY_CFG_S::ScellConfigPresentBitmask is absent
Line 2991: ##[NR_BCH] PHY_CFG_S::Invalid scell index is received (%d %d)
Line 3016: ##[NR_BCH] PHY_CFG_S::SpecificCarr Info listIdx(%d) isValid(%d) Scs(%d) (Offset = %d, NumRb = %d)
Line 3027: ##[NR_BCH] PHY_CFG_S::DL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 3032: ##[NR_BCH] PHY_CFG_S::DL_FREQUENCY_INFO_DL_MASK is absent.
Line 3066: ##[NR_BCH] PHY_CFG_S::Rcvd InitBwp BWP_DB[%d] LocAndBand(%d)[Start = %d, Len = %d Scs = %d]
Line 3072: ##[NR_BCH] PHY_CFG_S::GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 3078: ##[NR_BCH] PHY_CFG_S::DOWNLINK_CONFIG_COMMON_MASK is absent.
Line 3095: ##[NR_BCH] PHY_CFG_S:: SSB_SCS is absent.
Line 3099: ##[NR_BCH] PHY_CFG_S:: DL_scell_idx(%d) -> ssb_freq_info(%d, %d, %d), ssb_scs(%d), NumOfSpecificCarrier(%d)
Line 3117: ##[NR_BCH] PHY_CFG_S::UL_SpecificCarr Info listIdx(%d) isValid(%d) Scs(%d) (Offset = %d, NumRb = %d)
Line 3121: ##[NR_BCH] PHY_CFG_S:: UL_scell_idx(%d) -> NumOfSpecificCarrier(%d)
Line 3127: ##[NR_BCH] PHY_CFG_S::UL_SCS_SPECIFIC_CARRIER_LIST_MASK is absent.
Line 3132: ##[NR_BCH] PHY_CFG_S::FREQUENCY_INFO_UL_MASK is absent.
Line 3167: ##[NR_BCH] PHY_CFG_S::Rcvd UL_InitBwp BWP_DB[%d] LocAndBand(%d)[Start = %d, Len = %d Scs = %d]
Line 3172: ##[NR_BCH] PHY_CFG_S::UL_GENERIC_PARAMETERS_MASK of InitBWP is absent.
Line 3177: ##[NR_BCH] PHY_CFG_S::INITIAL_UPLINK_BWP_MASK of InitBWP is absent.
Line 3183: ##[NR_BCH] PHY_CFG_S::SCELL_CONFIG_COMMON_MASK is absent.
Line 3198: ##[NR_BCH] PHY_CFG_S::FIRST_ACTIVE_DOWNLINK_BWP_ID_MASK is absent.
Line 3208: ##[NR_BCH] PHY_CFG_S::DEFAULT_DOWNLINK_BWP_ID is absent.
Line 3210: ##[NR_BCH] PHY_CFG_S:: FirstActiveDLBwpId(%d) DefaultBwpId(%d)
Line 3249: ##[NR_BCH] PHY_CFG_S::Rcvd downlinkBwpList BWP_DB[%d] LocAndBand(%d)[Start=%d, Len = %d, Scs = %d]
Line 3256: ##[NR_BCH] PHY_CFG_S::DOWNLINK_BWP_MASK is absent.
Line 3260: ##[NR_BCH] PHY_CFG_P::DL_NumofBwp (%d)
Line 3274: ##[NR_BCH] PHY_CFG_S::FIRST_ACTIVE_UPLINK_BWP_ID_MASK is absent.
Line 3285: ##[NR_BCH] PHY_CFG_S:: firstActiveUplinkBwpId(%d) defaultUplinkBwpId(%d)
Line 3324: ##[NR_BCH] PHY_CFG_S::Rcvd BwpUlCommon BWP_DB[%d] LocAndBand(%d)[Start=%d, Len = %d, Scs = %d]
Line 3331: ##[NR_BCH] PHY_CFG_S::UPLINK_BWP_LIST_MASK is absent @ FDD
Line 3334: ##[NR_BCH] PHY_CFG_S::UL_NumofBwp (%d) @ FDD
Line 3339: ##[NR_BCH] UPLINK_CONFIG_MASK is absent @ FDD
Line 3345: ##[NR_BCH] PHY_CFG_S::SCELL_CONFIG_DEDI is absent.
Line 3356: ##[NR_BCH] PHY_CFG_S:: UpdateBwpGenericInfo is called for FDD
Line 3360: ##[NR_BCH] PHY_CFG_S:: scell_duplex_mode is invalid
Line 3380: ##[NR_BCH] UpdateBwpGenericInfo::cell_idx(%d), dl_ul_cfg(%d)
Line 3398: ##[NR_BCH] BWP:: FreqOfPointA = %d
Line 3402: ##[NR_BCH] BWP:: Invalid NumOfSpecificCarrier
Line 3407: ##[NR_BCH] BWP:: Invalid num_of_bwp
Line 3426: ##[NR_BCH] BWP:: TableIdx is not found in SpecificCarrier info.
Line 3453: ##[NR_BCH] BWP:: TableIdx of mmWave is not found in SpecificCarrier info.
Line 3484: ##[NR_BCH] BWP:: iSpecificCarrier[%d] StartFreq (%d) CenterFreq (%d) TableIdx(%d) PRB0(%d) Scs(%d) Bw(%d)
Line 3502: ##[NR_BCH] BWP:: Target SCS is not found from BWP DB.
Line 3511: ##[NR_BCH] BWP:: Found iSpecificCarr(%d) FreqOfPrb_0(%d)KHz, BWP_Width(%d)KHz
Line 3538: ##[NR_BCH] BWP:: TableIdx is not found from BWP DB.
Line 3560: ##[NR_BCH] BWP:: TableIdx of mmWave is not found from BWP DB.
Line 3600: ##[NR_BCH] UpdateSpecificCarrInfo::scell_idx(%d), dl_ul_cfg(%d)
Line 3629: ##[NR_BCH] DL_UpdateSpecificCarrInfo:: cell_idx(%d) SpecificCarrier[%d] SpecCarr PointA(%d) carrierBW(%d) OffsetToCarrier(%d) Scs(%d) Band(%d)
Line 3653: ##[NR_BCH] UL_UpdateSpecificCarrInfo:: cell_idx(%d) SpecificCarrier[%d] SpecCarr PointA(%d) carrierBW(%d) OffsetToCarrier(%d) Scs(%d) Band(%d)
Line 3674: ##[NR_BCH] PrintBwpDbInfo:: scell_idx(%d)
Line 3679: ##[NR_BCH] ******** BWP_DB [%d] RB(S=%d, Len=%d) Scs(%d) CenterArfcn/Freq(%d/ %d) Bw(%d)
Line 3688: ##[NR_BCH] ******** BWP_DB [%d] RB(S=%d, Len=%d) Scs(%d) CenterArfcn/Freq(%d/ %d) Bw(%d)
Line 3720: ##[NR_BCH] GetServCellInfoIdx:: scell_idx(%d) is not found.
Line 3723: ##[NR_BCH] GetServCellInfoIdx:: scell_idx(%d) nr_serv_cell_info[%d] is found
Line 3747: ##[NR_BCH] nr_serv_cell_info[%d] {scell_idx(%d) scc_cell(%d) cfg_status(%d)}
Line 3761: ##[NR_BCH] FindServCellInfo:: need to find index for scell_idx(%d)
Line 3777: ##[NR_BCH] FindServCellInfo:: scell_idx(%d) is not found.
Line 3780: ##[NR_BCH] FindServCellInfo:: scell_idx(%d) is found @ nr_serv_cell_info[%d]
Line 3813: ##[NR_BCH] FindBchPathCfgIdx:: scell_idx(%d) is not found in bch_path_cfg_info
Line 3818: ##[NR_BCH] FindBchPathCfgIdx:: scell_idx(%d) is found in bch_path_cfg_info[%d]
Line 3851: ##[NR_BCH] GetUlBwpInfo:: nr_serv_cell_info for scell_idx(%d) is not found.
Line 3855: ##[NR_BCH] GetUlBwpInfo:: nr_serv_cell_info[%d] scell_idx(%d) is found.
Line 3885: ##[NR_BCH] GetDlBwpInfo:: nr_serv_cell_info for scell_idx(%d) is not found.
Line 3889: ##[NR_BCH] GetDlBwpInfo:: nr_serv_cell_info[%d] scell_idx(%d) is found
Line 3907: ##[NR_BCH] ServCellInfoInit:: scell_idx(%d)
Line 3914: ##[NR_BCH] scell_idx(%d) is not found @ ServCellInfo
Line 3988: ##[NR_BCH] HAL->BCHCTRLR@%s (Current cell_idx = %d)
Line 3995: ##[NR_BCH][WARNING] Abnormal SrcId(%d)
Line 4017: ##[NR_BCH] NrScellConfigCnfCb()
Line 4040: ##[NR_BCH] ProcessBwpChange:: chg_cause(%d), cell_idx(%d), target_bwp_id(%d), demod_state(%d), on_going_proc(0x%x)
Line 4089: ##[NR_BCH] BWP:: No need to send path_config_req as PATH_MODIFY
Line 4152: ##[NR_BCH] BWP ID only Changed Scenario is Done:: cause(%d)
Line 4154: ##[NR_BCH] Invalid chg_sys_param(%d) in current step
Line 4183: ##[NR_BCH] Invalid target_bwp_id is received.
Line 4202: ##[NR_BCH] CheckChangedSysParam:: cause_4/actState_4/cell_idx_8(0x%4x), target_bwp_id_4/target_bwp_scs_4/target_bwp_bw_4(0x%4x), freq(cur=%d, target=%d)
Line 4210: ##[NR_BCH] The same bwp_id is received. Do nothing
Line 4231: ##[NR_BCH] 1st PCELL_PHY_CONFIG is received
Line 4248: ##[NR_BCH] BWP:: CurBwpId(%d) NewBwpId(%d) 
Line 4263: ##[NR_BCH] Matched specificCarr SCS is not found from BWP DB.
Line 4271: ##[NR_BCH] BWP:: ChangedSysParam(%d - 1:BW,2:SCS,8:FREQ), iSpecialCarrArray(%d), act_bwp_idx(%d)
Line 4287: ##[NR_BCH] SendSysParamChangeCmd:: CmdInfo(%d) EventType(%d) CellIdx_MSB4|Path_LSB4(0x%08x) BwpId(%d) TdpVal(%x) ChangedSysParam(%d) demod_cc(%d)
Line 4335: ##[NR_BCH] SendSysParamChangeCmd:: Invalid Event(%d)
Line 4342: ##[NR_BCH] BWP:: SysParamCmd Param = PathIdx(%d) DemodCc(%d) TargetBwpId(0x%x) SysBw(%d) DlFreq(%d) Scs(%d)
Line 4343: ##[NR_BCH] BWP:: SysParamCmd Param = SsbOffset(%d) FftOffset(%d)
Line 4354: ##[NR_BCH] BWP:: SysParamCmd Param = PathIdx(%d) DemodCc(%d) TargetBwpId(0x%x) SysBw(%d) DlFreq(%d) Scs(%d)
Line 4355: ##[NR_BCH] BWP:: SysParamCmd Param = SsbOffset(%d) FftOffset(%d)
Line 4360: ##[NR_BCH] BWP:: invalid CmdInfo(%d)
Line 4366: ##[NR_BCH] BWP:: CMD_RESULT is CMD_RET_FAIL.
Line 4370: ##[NR_BCH] BWP::  CMD_RESULT is CMD_RET_TIMEREXPIRED.
Line 4389: ##[NR_BCH] BWP:: NrSysParamChangeCmdCb() CmdResult(%d - 0:Success/1:Fail), LcpuState(%d), BWP Cause: %d 
Line 4393: ##[NR_BCH] BWP:: SysParamChangeCmd Timer Expiry
Line 4398: ##[NR_BCH] Pcell resource released!!!
Line 4410: ##[NR_BCH] BWP:: ALL Procedures are done. GOBACK to IDLE
Line 4416: ##[NR_BCH] BWP:: BWP ID only Changed Scenario is done. SysParamCmd: %d
Line 4420: ##[NR_BCH] BWP:: Invalid demod State(%d)
Line 4448: ##[NR_BCH] SendSccPathCfgReq req_type[SERV/SRCH/MEAS/PBCH/MODI](0x%x) num_of_req_cell(%d), num_of_rel_cell(%d)
Line 4477: ##[NR_BCH] PATH_CONFIG_REQ(CFG) Param:: [%d] serv_cell_info(0x%4x-scell_idx8/scell_buf4), dl_freq_info(%d %d %d), dl_bw(%d)
Line 4482: ##[NR_BCH] PATH_CONFIG_REQ(CFG) Param:: [%d] ul_freq_info(%d %d %d), ul_bw(%d) agc_gain(%d %d)
Line 4489: ##[NR_BCH] PATH_CONFIG_REQ(REL) Param:: [%d] cell_info_idx(%d)
Line 4508: ##[NR_BCH] SendPathCfgReqForRelInfo:: type(%d) num_of_rel_cell(%d)
Line 4521: ##[NR_BCH] PATH_CONFIG_REQ(REL) Param:: [%d] cell_info_idx(%d)
Line 4528: ##[NR_BCH] num_of_cfg_cell in L1C_BCH is 0
Line 4546: ##[NR_BCH] CheckScellRfParamUpdate:: scell_idx(%d), bch_path(dl_freq = %d, dl_bw = %d, ul_bw = %d), bwp (dl_freq = %d, dl_bw = %d, ul_bw = %d)
Line 4692: ##[NR_BCH] Send BEAMLOCK_IND: Beamlock_Info(%d)
Line 4710: ##[NR_BCH] Send CDRX_CONFIG_IND: DrxConfig.Choice(%d) 
Line 4728: ##[NR_BCH] BCHCTRLR@%s
Line 4743: ##[NR_BCH] Fail to stop PBCHDECODE_NR_CMD
Line 4750: ##[NR_BCH] Fail to stop BCH_DECODE_CONFIG_NR_CMD
Line 4755: ##[NR_BCH] Fail to stop CELL_TIME_CHANGE_NR_CMD
Line 4760: ##[NR_BCH] Fail to stop PHY_CONFIG_NR_CMD
Line 4765: ##[NR_BCH] Fail to stop SYS_PARAM_CHANGE_NR_CMD
Line 4783: ##[NR_BCH] BCHCTRLR@%s arfcn: %d, SysBw %d, PbchSubType %d
Line 4838: ##[NR_BCH] SchedPhyConfigRequestCb:: Serv_Arfcn(%d), Sib1Config(%d), SCellBitmask(0x%x) DeltaSCellBitmask(0x%x), cb_type(%d, 0:Normal/1:CDRX/2:DSDS)
Line 4885: ##[NR_BCH] Invalid cb_param(%d)
Line 4940: ##[NR_BCH] PHY_CFG_S:: found scell_idx(%d) @ add_scell_idx[%d]
Line 4943: ##[NR_BCH] PHY_CFG_S:: total_num_of_scell(%d), delta_num_of_scell(%d)
Line 4949: ##[NR_BCH] phy_cfg_update is for recovery type, sib1_flag(%d)
Line 4969: ##[NR_BCH] PHY_CONFIG_NR_CMD:: servArfcn(%d), phy_cfg_update(%d), ul_freq_info(%d %d %d), bw(%d), num_rb(%d)
Line 4973: ##[NR_BCH] on_going_proc (0x%x)
Line 4986: ##[NR_BCH] SchedSysInfoRequestCb
Line 5006: ##[NR_BCH] recv_sib1_msg is NULL: End event sysinfo schedule
Line 5045: ##[NR_BCH] FftStartOffsetSc for SIB1 is Odd(%d), cur_freq(%d)->(%d)
Line 5065: ##[NR_BCH] bw_idx for SIB 1 is not found.
Line 5111: ##[NR_BCH] SchedSysInfoRequestCb::SIB1_SSB(sib1_ssb_freq = %d, sib1_ssb_bw = %d), CUR(freq = %d, bw = %d), chg_sys_param(%d), sysinfo_in_servcell(%d)
Line 5121: ##[NR_BCH] SIB1_CONFIG: path_idx(%d), is_ds_recovery(%d), on_going_proc(0x%x)
Line 5143: ##[NR_BCH] OSI_CONFIG (sib bit map 0x%x) path_idx(%d), is_ds_recovery(%d), on_going_proc(0x%x)
Line 5161: ##[NR_BCH] SchedServCellRelCb
Line 5183: ##[NR_BCH] Restored serv_cell freq (%d), sib1(4)/dsds(4)/max_ul(4)(0x%4x), scell_bit_mask(0x%x), delta_scell_bit_mask(0x%x)
Line 5226: ##[NR_BCH] SchedServCellRecoveryCb, ctrlr_proc_state(0x%x)
Line 5286: ##[NR_BCH] UpdateDmActCellInfo: num_cell(%d), cell_info.dl_band(%d, %d, %d, %d, %d, %d)
Line 5302: ##[NR_BCH] SendL1ChannelDmInfo:: cell_idx(%d), cur_bwp_idx(%d)
Line 5340: ##[NR_DB] ch_NrDbSendL1ChannelInfo:: Abnormal drx_onDurationTimerChoice value(%d)
Line 5354: ##[NR_DB] ch_NrDbSendL1ChannelInfo:: CurState(%d), BW(%d), BWPIndex(%d), SCS(%d), RxMode(0x%x), UlArfcn(%d), DlArfcn(%d)
Line 5373: ##[NR_BCH] SendScellConfigCmd:: SCellBitmask(0x%x), DeltaSCellBitmask(0x%x)
Line 5384: ##[NR_BCH] SCELL_CONFIG_NR_CMD:: there is no rel_scell or add_scell
Line 5403: ##[NR_BCH] SCELL_CONFIG_NR_CMD(REL)::[%d] rel_scell_idx(%d), rel_serv_cell_idx(%d)
Line 5420: ##[NR_BCH] SCELL_CONFIG_NR_CMD:: invalid serv_cell_array_idx(%d)
Line 5426: ##[NR_BCH] SCELL_CONFIG_NR_CMD:: invalid bch_path_cfg_idx with scell_idx(%d)
Line 5469: ##[NR_BCH] SCELL_CONFIG_NR_CMD(ADD):: scell_buf_idx(%d), scell_idx(%d), bwp_scell_idx_msb8/demod_cc_lsb8(0x%4x), scell_scs(%d), act_bwp_idx dl_msb8/ul_msb8(0x%4x), ssb_start_offset(%d), fft_start_offset(%d)
Line 5512: ##[NR_BCH] ProcessScellRelAndDeact:: rel_scell_index(%d) is not found in serv_cell_info
Line 5518: ##[NR_BCH] ProcessScellRelAndDeact:: Target Deact Scell (idx(%d), scc_cell_info_idx(%d))
Line 5529: ##[NR_BCH] ProcessScellRelAndDeact:: Target Rel Scell List [%d] scell_idx(%d), scc_cell_info_idx(%d), rel_serv_cell_info_idx(%d))
Line 5538: ##[NR_BCH] ProcessScellRelAndDeact:: num_of_rel_cell in PHY_CFG(%d), num_of_deact_cell(%d), total_num_of_scell(%d)
Line 5542: ##[NR_BCH] ProcessScellRelAndDeact:: ***** Previous Act Scell for Release scc_cell_info_idx(%d)
Line 5554: ##[NR_BCH] ProcessScellRelAndDeact:: Sending SysParamChgReq with LCPU_PAUSE for Release SLO
Line 5564: ##[NR_BCH] ProcessScellRelAndDeact:: No need to send PathConfigReqForRel
Line 5590: ##[NR_BCH] SendPhyConfigCnf:: result(%d), srcId(%d)
Line 5619: ##[NR_BCH] SendServingCellChangeCnf()
Line 5675: [NR_BCH] CreatePathCfgReqForAddModScell:: num_of_add_scell(%d), num_of_rel_scell(%d)
Line 5686: [NR_BCH] CreatePathCfgReqForAddModScell:: path_rel_array[%d] = %d 
Line 5718: [NR_BCH] CreatePathCfgReqForAddModScell:: cfg_param[%d] dl_info(freq = %d, band = %d, dl_bw = %d), ul_info(freq = %d, ul_bw = %d), req_scell_idx(0x%4x - scell_idx8/buf_idx4)
Line 5728: ##[NR_BCH] None of SCELL Sys Param is changed.
Line 5751: [NR_BCH] CreatePathCfgReqForActDeactScell:: num_of_scell(%d)
Line 5763: ##[NR_BCH] CreatePathCfgReqForActDeactScell:: scell_index(%d) is not found in serv_cell_info
Line 5772: ##[NR_BCH] CreatePathCfgReqForActDeactScell:: Deact Scell List [(%d] scc_cell_info_idx(%d))
Line 5800: ##[NR_BCH] CreatePathCfgReqForActDeactScell:: Act Scell List [%d] DL{freq(%d), band(%d), dl_bw(%d)}, UL{freq(%d), ul_bw(%d)}, req_scell_idx(%d)
Line 5807: ##[NR_BCH] CreatePathCfgReqForActDeactScell:: num_of_act_scell(%d), num_of_deact_scell(%d)
Line 5825: [NR_BCH] PrintBchPathCfgInfo
Line 5831: ##[NR_BCH] ****[%d] cell_info_idx_MSB8/scell_idx_LSB8(0x%04x), alloc_freq(%d), alloc_bw(%d), alloc_demod_cc(%d), div_cc(%d), rx_mode(0x%x)
Line 5848: ##[NR_BCH] Send SendPchConfigInd
Line 5864: ##[NR_BCH] SendSibDecStopCmd:: osi_flag(%d), rx_path(%d), on_going_proc(0x%x)
Line 5887: ##[NR_BCH] Send SendPathRelForServCellRelMsg(%d)
Line 5923: ##[NR_BCH] Send CELL_TIME_RESTORE_REQ, rx_path(%d)
Line 5950: ##[NR_BCH] TMU:: CMD_RESULT is CMD_RET_FAIL.
Line 5954: ##[NR_BCH] TMU::  CMD_RESULT is CMD_RET_TIMEREXPIRED.
