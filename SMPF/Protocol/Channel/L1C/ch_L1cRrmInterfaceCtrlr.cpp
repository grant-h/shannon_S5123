Line 165: [L1C] RRM_L1C_ALL_STOP_CNF Result(%d)
Line 178: [L1C] RRM_L1C_BPLMN_START_CNF Result(%d)
Line 191: [L1C] RRM_L1C_BPLMN_STOP_CNF Result(%d)
Line 204: [L1C] RRM_L1C_CGI_START_CNF Result(%d)
Line 217: [L1C] RRM_L1C_CGI_STOP_CNF Result(%d)
Line 411: [L1C] RRM_L1C_WAKEUP_DONE_IND Result(%d) TimingOffset(%d)
Line 518: RrmInterfaceCtrlr::L1C_L1C_MEASCTRLR_MEASURE_CNF_Handler - Rat(%d)
Line 623: ##[NR_MEAS] MeasRatType(%d) MeasMode(%d) ctrlr_state(%d)
Line 645: [L1C] RRM_L1C_INIT_MEAS_CNF Result(%d) Band(%d) Arfcn(%d) NumMeasCell(%d)
Line 661: [L1C]     INIT_MEAS_CNF Ant:0 CellId(%d) SsbIndex(%d) Rsrp(%d/100)dBm Sinr(%d/100)dB TimingOffset(%d)
Line 688: [L1C] RRM_L1C_MEAS_CNF Result(%d) Band(%d) Arfcn(%d) NumMeasCell(%d) RsType(%d)
Line 751: [L1C] RRM_L1C_MEAS_CNF Result(%d) Band(%d) Arfcn(%d) NumSsbSrchResult(%d) RsType(%d)
Line 852: ##[NR_MEAS] IRAT MEAS CNF Result(%d) MeasRatType(%d) MeasType(%d) NumResult(%d) AgcGain[0](%d) AgcGain[1](%d) ObjectId(%d)
Line 865: ##[NR_MEAS] IRAT MEAS CNF IsValid(%d) CellId(%d) CpType(%d) Rsrp(%d) Rsrq(%d) Sinr(%d) TimingOffset(%d)
Line 872: ##[NR_MEAS] Abnormal MeasMode(%d)
Line 881: !!!! Undefined Rat Type (%d)
Line 906: [L1C] RRM_L1C_MEAS_SCHEDULE_IND RoutingInfo(%d)
Line 911: [NR_MEAS] Disabled RRM_L1C_MEAS_SCHEDULE_IND. State(%d)
Line 941: RrmInterfaceCtrlr::L1C_L1C_MEASCTRLR_MEAS_STOP_CNF_Handler
Line 945: [L1C] RRM_L1C_MEAS_STOP_CNF Result(%d)
Line 964: [L1C] RRM_L1C_GAP_CONFIG_CNF Result(%d)
Line 972: Undefined Rat Type
Line 1167: RrmInterfaceCtrlr::L1C_RRM_ACTIVE_REQ_Handler
Line 1188: [L1C] RRM_L1C_SERVING_CELL_CHANGE_CNF Result(%d)
Line 1223: RrmInterfaceCtrlr::L1C_L1C_RRMINTERFACECTRLR_ACTIVE_RAT_IND_Handler - ActiveRat: %d
Line 1226: [L1C] RRM_L1C_ACTIVE_RAT_IND ActiveRat %d
Line 1230: !!!! Undefined Rat Type (%d)
Line 1276: [L1C] RRM_L1C_IN_SYNC_IND CgType(%d) IsMcg(%d) IsScg(%d)
Line 1282: !!!! Undefined Rat Type (%d)
Line 1330: [L1C] RRM_L1C_OUT_SYNC_IND CgType(%d) IsMcg(%d) IsScg(%d) 
Line 1336: !!!! Undefined Rat Type (%d)
Line 1413: [L1C] RRM_L1C_CGI_HOLD_IND RoutingInfo(%d)
Line 1426: [L1C] RRM_L1C_CGI_MEAS_SCHEDULE_IND RoutingInfo(%d)
Line 1471: [L1C] RRM_L1C_FREQ_SCAN_CNF Result(%d) NumFreq(%d) FreqScanState(%d) UntilSsbFrequency(%d)
Line 1478: ##[NR_SRCH] =====> SsbFrequency(%d) MaxVal(%d), PeakRate(%d), Rssi(%d), PwrValOfMax(%d) MaxSumVal(%d)
Line 1486: RAT Type is not NR, Rcvd RAT = %d
Line 1521: [L1C] RRM_L1C_FREQ_SCAN_STOP_CNF NumList(%d) UntilSsbFrequency(%d)
Line 1528: ##[NR_SRCH] =====> Band(%d), SubcarrierSpacing(%d), SsbFrequency(%d) MaxVal(%d), PeakRate(%d)
Line 1536: RAT Type is not NR, Rcvd RAT = %d
Line 1656: [L1C] RRM_L1C_INIT_SEARCH_CNF CellId(%d) Eng(%d) Sid(%d) RxBeamIdx(%d) AfcValueQ(%d) AfcValueI(%d) AgcGainIdx %06d
Line 1663: [WARNING] Unhandled RatType(%d)
Line 1779: RrmInterfaceCtrlr::L1C_L1C_RLSYNCCTRLR_RLM_STOP_CNF_Handler
Line 1822: [L1C] L1C_RRM_ALL_STOP_REQ RoutingInfo(%d)
Line 1835: [L1C] RRM_L1C_ALL_STOP_CNF RoutingInfo(%d)
Line 1853: [L1C] RRM_L1C_BPLMN_AVAILABLE_IND RoutingInfo(%d)
Line 1866: [L1C] RRM_L1C_BPLMN_HOLD_IND RoutingInfo(%d)
Line 1906: [L1C] L1C_RRM_AS_STATE_IND AS state(%d)
Line 1922: ##[NR_RLSYNC] Finish RLM...
Line 1934: ##[NR_RLSYNC] Stop RLM if any...
Line 1946: ##[NR_RLSYNC] Stop RLM if any...
Line 1958: ##[NR_RLSYNC] Stop RLM if any...
Line 1972: ##[NR_RRMINTERFACE] Unexpected AS state(RRML1C_STATE_NUM)
Line 1983: [WARNING] Unhandled RatType(%d)
Line 2008: RrmInterfaceCtrlr::L1C_RRM_BCH_CONFIG_REQ_Handler
Line 2030: [L1C] L1C_RRM_BCH_CONFIG_REQ NeededSibBitmap(%d) IsForOsi(%d) Band(%d) Arfcn(%d) Sib1Bandwidth(%d) SubCarrierSpacingCommon(%d)
Line 2036: ##[NR_BCH] L1C_RRM_BCH_CONFIG_REQ_Handler:: RAT Info. Error (%d)
Line 2063: L1C_RRM_BCH_RELEASE_REQ_Handler
Line 2070: [L1C] L1C_RRM_BCH_RELEASE_REQ IsForOsi(%d)
Line 2077: ##[NR_BCH] RrmInterfaceCtrlr::L1C_RRM_BCH_RELEASE_REQ_Handler, RAT Info. Error(%d)
Line 2085: RrmInterfaceCtrlr::L1C_L1C_RLSYNCCTRLR_BWP_CHANGE_CNF_Handler
Line 2092: RrmInterfaceCtrlr::L1C_RRM_BWP_CHANGE_REQ_Handler
Line 2201: RrmInterfaceCtrlr::L1C_RRM_CONTROL_HOLD_REQ_Handler
Line 2207: RrmInterfaceCtrlr::L1C_RRM_DECODE_CCI_REQ_Handler
Line 2421: RrmInterfaceCtrlr::L1C_RRM_FREQ_SCAN_REQ_Handler (RAT = %d)
Line 2440: ##[CDMA_SRCH] NumList from RRM is zero. Sending CNF with FAIL!!!!
Line 2444: !!!! Rat Type is not NR, Rcvd RAT = (%d)
Line 2448: Array size overflow: Received(%d) Max(%d). Change to max size
Line 2475: [L1C] L1C_RRM_FREQ_SCAN_REQ FreqListType(%d) Band(%d) NumFreq(%d) StartArfcn(%d) EndArfcn(%d) StepArfcn(%d) SCS(%d)
Line 2482: [L1C] RRM_L1C_FREQ_SCAN_CNF Result(%d) NumList(0)
Line 2489: %s, Receive: FREQ_SCAN_REQ from RRM
Line 2495: ##[NR_SRCH] Rcvd Srch_Param:: SrchRat = (%d), Numerlogy(%d)
Line 2503: ##[NR_SRCH] ===> Rcvd ArfcnList[%d] Band(%d) Arfcn = (%d)
Line 2513: ##[NR_SRCH] ===> TYPE_INTERVAL:: Rcvd NumList(%d), Band(%d),  Arfcn(%d)
Line 2521: FreqListType is not defined...
Line 2535: !!!! Rat Type is not NR, Rcvd RAT = (%d)
Line 2547: RrmInterfaceCtrlr::%s (RAT = %d)
Line 2554: [L1C] L1C_RRM_FREQ_SCAN_STOP_REQ RoutingInfo(%d)
Line 2563: !!!! Rat Type is not NR, Rcvd RAT = (%d)
Line 2607: [L1C] L1C_RRM_GAP_CONFIG_REQ GAP config(%d) Type(%d) gapOffset(%d) NsaConfig(%d)
Line 2641: Undefined Rat Type
Line 2714: RAT(%d)
Line 2751: [L1C] L1C_RRM_INIT_MEAS_REQ Band(%d) Arfcn(%d) NumCell(%d) SCSSSB(%d) AgcGain(%d/%d)
Line 2764: ##[NR_MEAS] INIT_MEAS_REQ CellID(%d), SsbIndex(%d), RxBeamIdx(%d), TimingOffset(%d)
Line 2770: ##[NR_MEAS] xPhy Test Case! gUseNrDigitalIq[%d]
Line 2797: Undefined Rat Type
Line 2816: [L1C] L1C_RRM_MEAS_RESULT_IND NumServingCell(%d)
Line 2826: [L1C]    ServCellIndex(%d) Arfcn(%d) CellId(%d) SsbRsrp(%d/%d/%d/%d)
Line 2836: RrmInterfaceCtrlr::L1C_RRM_INIT_REQ_Handler
Line 2857: RrmInterfaceCtrlr::L1C_RRM_STOP_REQ_Handler, SupportedRatMap 0x%x
Line 2869: RrmInterfaceCtrlr::L1C_RRM_INIT_SEARCH_REQ_Handler
Line 2914: RrmInterfaceCtrlr::Param of INIT_SRCH_REQ ERROR!!!
Line 2926: [L1C] L1C_RRM_INIT_SEARCH_REQ Band(%d) Arfcn(%d) Freq(%d) Numerology(%d)
Line 2940: [NR_SRCH] %s, Receive: INIT_SEARCH_REQ from RRM, Period=%d (%d)
Line 2946: Undefined Rat Type
Line 2976: RrmInterfaceCtrlr::L1C_RRM_MEAS_REQ_Handler
Line 3044: [L1C] L1C_RRM_MEAS_REQ MeasRatType(%d) MeasType(%d)
Line 3076: ##[NR_MEAS] MEAS_REQ from RRM, MeasMode(%d), NumSsbMeasInput(%d), Arfcn(%d), Band(%d), Freq(%d), SubcarrierSpacing(%d), RsType(%d)
Line 3081: ##[NR_MEAS] MEAS_REQ from RRM, SsbConfig => MAX_L(%d) SsbBitmap([%d]/[%d]) SsbPattern(%d)
Line 3093: ##[NR_MEAS] IRAT MEAS REQ MeasMode(%d) ObjectId(%d) NumLteMeasInput(%d) AgcGain[0](%d) AgcGain[1](%d) CarrierFreq(%d) AllowedMeasBandwidth(%d)
Line 3102: ##[NR_MEAS] IRAT MEAS REQ [%d] CpType(%d) CellIndexEutra(%d) PhysCellId(%d) CellIndividualOffset(%d) TimingOffset(%d)
Line 3107: Wrong Rat Type
Line 3126: !!!! Undefined Rat Type (%d)
Line 3148: RrmInterfaceCtrlr::L1C_RRM_MEAS_STOP_REQ_Handler
Line 3152: [L1C] L1C_RRM_MEAS_STOP_REQ GetRoutingInfo(%d)
Line 3157: Undefined Rat Type
Line 3206: [L1C] L1C_RRM_PBCH_INFO_REQ IsValid(%d)
Line 3216: !!!! Undefined Rat Type (%d)
Line 3267: RrmInterfaceCtrlr::L1C_RRM_RAT_RESUME_REQ_Handler
Line 3281: [L1C] L1C_RRM_RAT_RESUME_REQ Type(%d %d)
Line 3291: RrmInterfaceCtrlr::L1C_RRM_RAT_SUSPEND_REQ_Handler
Line 3306: [L1C] L1C_RRM_RAT_SUSPEND_REQ Type(%d)
Line 3380: [L1C] L1C_RRM_SERVING_CELL_CHANGE_REQ return(%d) Band(%d) Arfcn(%d)
Line 3382: [NR_BCH] RrmInterfaceCtrlr::L1C_RRM_SERVING_CELL_CHANGE_REQ_Handler(band(%d), arfcn(%d), scs(%d), period(%d), cellId(%d), ssbIndex(%d), timingOffset(%d)
Line 3412: [L1C] L1C_RRM_SCELL_STATUS_IND numOfScellInfoList(%d)
Line 3429: RrmInterfaceCtrlr:: ***** [%d] act_deact(%d), scell_idx(%d), ssb_idx_2/rx_beam_idx_2(0x%04x), agc_gain(0x%04x), ssb_timing_offset(%d), scell_target_slot(%d)
Line 3461: RrmInterfaceCtrlr::L1C_L1C_BCHCTRLR_SERVING_CELL_CHANGE_CNF_Handler
Line 3480: [L1C] RRM_L1C_SERVING_CELL_CHANGE_CNF Result(0x%x) Band(%d) ssbArfcn(%d) SubcarrierSpacing(%d) CellId(%d) CenterArfcn(%d) SibBandwitdh(%d)
Line 3557: [L1C] L1C_RRM_BPLMN_START_REQ SrcRat(%d) DstRat(%d) avail_time(%d) start_time(%d)
Line 3566: RrmInterfaceCtrlr::L1C_RRM_BPLMN_STOP_REQ_Handler
Line 3589: [L1C] L1C_RRM_BPLMN_STOP_REQ SrcRat(%d) DstRat(%d)
Line 3599: !!!! Undefined Rat Type (%d)
Line 3622: RrmInterfaceCtrlr::L1C_L1C_BCHCTRLR_PBCH_DECODE_CNF_Handler, Rat(%d)
Line 3649: [L1C] L1TUNNEL_L1C_NR_4G_MEAS_CNF Band %d Arfcn %d CellId %d SsbIndex %d SCS %d
Line 3670: [L1C] RRM_L1C_PBCH_DECODE_CNF Band %d SsbFreq %d SCS %d CellId %d BeamIndex %d
Line 3685: !!!! Undefined Rat Type (%d)
Line 3731: [L1C] L1C_RRM_PBCH_DECODE_REQ arfcn(%d) band(%d)
Line 3740: [NR_BCH] L1C_RRM_PBCH_DECODE_REQ_Handler(arfcn(%d), band(%d), freq(%d), SsbIndex(%d), cellId(%d), scs(%d), timingOffset(%d), period(%d))
Line 3748: RrmInterfaceCtrlr::L1C_RRM_PBCH_DECODE_REQ_Handler, Rat(%d)
Line 3754: !!!! Undefined Rat Type (%d)
Line 3786: [L1C] L1C_RRM_PHY_CONFIG_REQ CellGrpId(%d)
Line 3807: RrmInterfaceCtrlr::L1C_RRM_PHY_CONFIG_REQ_Handler:: CellGrpId(%d), SCellBitmask(0x%x), DeltaSCellBitmask(0x%x), Sib1ConfigFlag(%d), ReqType(%d)
Line 3812: RrmInterfaceCtrlr:: NrUeCapaInfo(Band = %d, MaxUlLayer = %d, IsBwpSwitchEnable = %d)
Line 3838: !!!! Undefined Rat Type (%d)
Line 3863: ##[NR_XPHY] PHY_CONFIG is done
Line 3869: [L1C] RRM_L1C_PHY_CONFIG_CNF Result(%d)
Line 3892: [L1C] L1C_RRM_PHY_RELEASE_REQ Result(%d)
Line 3916: [L1C] RRM_L1C_PHY_RELEASE_CNF Result(%d)
Line 3939: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_RESUME_SUSPEND_REQ_Handler(type:%d, /*0: suspend, 1:resume, 2:L2N Meas Config release*/)
Line 3969: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_4G_MEAS_REQ_Handler - MeasMode(%d)
Line 3976: Band(%d), SsbArfcn(%d), NumOfCell(%d), SubCarrierSpacing(%d), Periodicity(%d)
Line 3985: CellId(%d), TimingOffset(%d), SsbIndex(%d) RxBeamIndex(%d), NumSsbToMeasure(%d), SsbToMeasure(0x%x, 0x%x)
Line 3992: SsbConfig => SmtcIncluded(%d), smtc.offset(%d), smtc.duration(%d)
Line 4023: SsbPattern(%d)
Line 4068: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_CDRX_CONFIG_REQ_Handler
Line 4072: Choice(%d), BitMask(%d)
Line 4125: RrmInterfaceCtrlr::L1C_L1TUNNEL_NR_MEASSTOP_IND_Handler
Line 4158: [L1C] L1C_RRM_DRX_STATUS_IND CdrxAvailable(%d) PendingCause(%d) RemainTime(%d)
Line 4181: [WARNING] Unhandled RatType(%d)
Line 4206: [L1C] RRM_L1C_DRX_AVAILABLE_IND Duration(%d)
Line 4238: [L1C] RRM_L1C_DRX_SLEEP_STATE_IND CdrxState(%d)
Line 4269: [L1C] L1C_RRM_CGI_START_REQ SrcRat(%d) DstRat(%d)
Line 4282: [L1C] L1C_RRM_CGI_STOP_REQ RoutingInfo(%d)
Line 4354: [L1C] RRM_L1C_ANT_TEMP_GET_CNF NumOfModule(%d)  using_Idx(%d)  using_Temp(%d)  Temp0(%d)  Temp1(%d)  Temp2(%d)
Line 4360: ##[OHC] L1C_RRM_ANT_TEMP_GET_REQ_Handler:: RAT Info. Error (%d)
