Line 74: RrmNrPrcdCellConfig::RrmNrPrcdCellConfig()
Line 83: RrmNrPrcdCellConfig::~RrmNrPrcdCellConfig()
Line 92: RrmNrPrcdCellConfig::DecideTriggerProcedure
Line 98: RrmNrPrcdCellConfig::PreHdlr
Line 107: RrmNrPrcdCellConfig::PostHdlr
Line 117: RrmNrPrcdCellConfig::AbortHdlr(%d) CellConfigRunning(%d)
Line 131: RrmNrPrcdCellConfig::AbortHdlr::CanNot AllocMsg about L1C_RRM_ALL_STOP_REQ
Line 153: RrmNrPrcdCellConfig::RRM_RRC_CELL_CONFIG_REQ_Hdlr
Line 163:    >>Cell Config Cause : %d
Line 176:    >>Send fail in CheckFixedCell on RecvMsg.Cause(%d)
Line 190: RrmNrPrcdCellConfig::RRM_RRC_CELL_CONFIG_REQ_Hdlr::CanNot AllocMsg about L1C_RRM_ALL_STOP_REQ
Line 204:    >>Send fail BarredCell on RecvMsg.Cause(%d)
Line 212:    >>Send fail in CheckFixedCell on RecvMsg.Cause(%d)
Line 226: RrmNrPrcdCellConfig::RRM_RRC_CELL_CONFIG_REQ_Hdlr::CanNot AllocMsg about L1C_RRM_ALL_STOP_REQ
Line 245: RrmNrPrcdCellConfig::RRM_RRC_CELL_CONFIG_REQ_Hdlr::CanNot AllocMsg about L1C_RRM_ALL_STOP_REQ
Line 258:    >>Send fail BarredFreq on RecvMsg.Cause(%d)
Line 266:    >>Send fail in CheckFixedFreq on RecvMsg.Cause(%d)
Line 280: RrmNrPrcdCellConfig::RRM_RRC_CELL_CONFIG_REQ_Hdlr::CanNot AllocMsg about L1C_RRM_ALL_STOP_REQ
Line 287: CellConfig Param : Cause(%d):CELLCONFIG_INIT, CurRat(%d)
Line 293: CellInfo : Band(%d), Arfcn(%d), CellId(%d), SubCarrierSpacingSSB(%d), Periodicity(%d)
Line 297: RRM_RRC_CELL_CONFIG_REQ_Hdlr : Check Routing Info!
Line 302: RecvMsg.Cause(%d) is invalid
Line 311: RrmNrPrcdCellConfig::RRM_L1C_ALL_STOP_CNF_Hdlr
Line 317: RRM_L1C_ALL_STOP_CNF Result(FAILURE)
Line 330: RrmNrPrcdCellConfig::RRM_L1C_ALL_STOP_CNF_Hdlr::CanNot AllocMsg about RRM_RRM_MEAS_STATE_REQ
Line 338: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr
Line 345: RRM_RRM_MEAS_STATE_CNF Result(FAILURE)
Line 350: Abort procedure is Ending
Line 371:    >>can not select BarredCell
Line 379:    >>can not select in CheckFixedCell
Line 386:    >>select CellId(%d) Arfcn(%d)
Line 393: ReselectionList is empty
Line 405: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 415: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 425: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr:: Invalid NeighborCell
Line 449: DUPLICELLCONFIG_SERVING(%d)
Line 460: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 467: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 478: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 486: DUPLICELLCONFIG_BLIND(%d)
Line 495:    >> Fix the Periodicity(%d). because The Periodicity may change
Line 513: RrmNrPrcdCellConfig::RRM_L1C_INIT_SEARCH_CNF_Hdlr : NumCell(%d)
Line 520: [Check] Fail result or unexpected num of cell in RRM_L1C_INIT_SEARCH_CNF_Hdlr.
Line 521:    >> FailureWithoutExecution(%d)
Line 525:    >> retransmission for L1C_RRM_INIT_SEARCH_REQ
Line 537: CELLCONFIG_NR_CGI
Line 551: CELLCONFIG_NR_RESEL
Line 562:    >>can not select BarredCell
Line 570:    >>can not select in CheckFixedCell
Line 577:    >>select CellId(%d) Arfcn(%d)
Line 592: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 602: RrmNrPrcdCellConfig::RRM_L1C_INIT_SEARCH_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 612: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr:: Invalid NeighborCell
Line 626: ReselectionList is empty
Line 632: RrmNrPrcdBplmnRun::AbortHdlr::CanNot AllocMsg about RRM_RRM_RETURN_TO_PREV_SERVCELL_IND
Line 658: CELLCONFIG_NR_CGI
Line 690: RrmNrPrcdCellConfig::RRM_L1C_INIT_MEAS_CNF_Hdlr: Result(%d)
Line 698: InitMeasCnf Param : MeasRatType(%d) Band(%d) Arfcn(%d) NumCell(%d)
Line 703: InitMeasCnf Param: MeasResult[%d] CellId(%d) TimingOffset(%d) BeamIndex(%d)
Line 713: [Check] Fail result in RRM_L1C_INIT_MEAS_CNF_Hdlr.
Line 714:    >> FailureWithoutExecution(%d)
Line 718:    >> retransmission for L1C_RRM_INIT_MEAS_REQ
Line 758:    >>can not select BarredCell
Line 766:    >>can not select in CheckFixedCell
Line 773:    >>select CellId(%d) Arfcn(%d)
Line 788: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 798: RrmNrPrcdCellConfig::RRM_L1C_INIT_MEAS_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 808: RrmNrPrcdCellConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr:: Invalid NeighborCell
Line 822: ReselectionList is empty
Line 828: RrmNrPrcdBplmnRun::AbortHdlr::CanNot AllocMsg about RRM_RRM_RETURN_TO_PREV_SERVCELL_IND
Line 837: [Check] No more candidate cell for INIT_MEAS_REQ.
Line 863: RrmNrPrcdCellConfig::RRM_L1C_INIT_MEAS_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 877: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr: Result(%d)
Line 894: BeamIndex (%d), BeamIndexLSB(%d), BeamIndexMSB(%d)
Line 909: [Check] Fail result in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr. Try other Cell for Meas
Line 910:    >> FailureWithoutExecution(%d)
Line 914:    >> retransmission for L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 923: RrmNrPrcdCellConfig::RRM_L1C_INIT_MEAS_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 951: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr:: Invalid NeighborCell
Line 971: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::DUPLICELLCONFIG::Terminate Current Procedure(PrcdId(%d))
Line 977: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRM_RRC_CELL_CONFIG_REQ
Line 990: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::DUPLICELLCONFIG::Cannot Terminate Current Procedure(PrcdId(%d), PbdResult(%d))
Line 996: [Check] No more candidate beam for in PBCH_DECODE.
Line 1011:    >>can not select BarredCell
Line 1019:    >>can not select in CheckFixedCell
Line 1026:    >>select CellId(%d) Arfcn(%d)
Line 1041: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 1051: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1061: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr:: Invalid NeighborCell
Line 1075: ReselectionList is empty
Line 1081: RrmNrPrcdBplmnRun::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRM_RRM_RETURN_TO_PREV_SERVCELL_IND
Line 1128: [Check] PBCH decoding failure - CellBarred & FreqResel is not Allowed in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr. Return Fail CNF
Line 1137: [Check] PBCH decoding failure - CellBarred Result in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr try other Cell Id
Line 1144: [Check] No more candidate cell for INIT_MEAS_REQ in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr.
Line 1160:    >>can not select BarredCell
Line 1168:    >>can not select in CheckFixedCell
Line 1175:    >>select CellId(%d) Arfcn(%d)
Line 1190: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 1200: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1210: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr:: Invalid NeighborCell
Line 1226: ReselectionList is empty
Line 1232: RrmNrPrcdBplmnRun::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRM_RRM_RETURN_TO_PREV_SERVCELL_IND
Line 1259: Cell is valid(No Barred / NotAllowed) in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr. Set PbchDecode resut
Line 1268: Do not check CellBarred
Line 1272: ERROR) Cause is not valid
Line 1284: [Check] Sib1 does not exist. SsbSubCarrierOffset(%d) MAX_KSSB_VALUES_FR2(%d)
Line 1295: [Check] Sib1 does not exist. SsbSubCarrierOffset(%d) MibInfo.kSsb(%d) MAX_KSSB_VALUES_FR1(%d)
Line 1305: [Check] BCH is not in cellId(%d)
Line 1314: [Check] No more candidate cell for INIT_MEAS_REQ in RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr.
Line 1330:    >>can not select BarredCell
Line 1338:    >>can not select in CheckFixedCell
Line 1345:    >>select CellId(%d) Arfcn(%d)
Line 1360: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 1370: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1380: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr:: Invalid NeighborCell
Line 1394: ReselectionList is empty
Line 1400: RrmNrPrcdBplmnRun::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRM_RRM_RETURN_TO_PREV_SERVCELL_IND
Line 1478: [FG_ENDC] Activate ENDC Flag. F_ENDC_ENABLE
Line 1483: RrmNrPrcdCellConfig::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRC_RRM_CELL_CONFIG_CNF
Line 1495: RrmPrcdNrCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr
Line 1502: RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr::Result(%d) (enum)Cause(%d) (enum)CellSelFailCause(%d)
Line 1514: RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr::EvalCellSelection::%d[Result]
Line 1528: RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr::CanNot AllocMsg about RRC_RRM_CELL_STATUS_CNF
Line 1551: BplmnRunState(%d) is not vaild.
Line 1568: [FG_ENDC] Activate ENDC Flag. F_ENDC_ENABLE
Line 1574: [Check] RRM_RRC_CELL_STATUS failure -  try other Cell Id
Line 1596:    >>can not select BarredCell
Line 1604:    >>can not select in CheckFixedCell
Line 1611:    >>select CellId(%d) Arfcn(%d)
Line 1626: DUPLICELLCONFIG_NEIGHBOR(%d)
Line 1636: RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr::CanNot send L1C_RRM_SERVING_CELL_CHANGE_REQ
Line 1646: RrmNrPrcdCellConfig::RRM_RRC_CELL_STATUS_REQ_Hdlr:: Invalid NeighborCell
Line 1660: ReselectionList is empty
Line 1665: RrmNrPrcdBplmnRun::RRM_L1C_SERVING_CELL_CHANGE_CNF_Hdlr::CanNot AllocMsg about RRM_RRM_RETURN_TO_PREV_SERVCELL_IND
Line 1678: [Check] No more candidate cell for INIT_MEAS_REQ in RRM_L1C_PBCH_DECODE_CNF_Hdlr.
Line 1698: RrmNrPrcdCellConfig::CpyCellConfigInfo
Line 1734:    >> Cause:%d(6:ENDC), Band:%d, CellId:%d, SsbFrequency:%d, SsbScs:(enum)%d, SsbPeriodicity:(enum)(%d)(%d[ms])
Line 1739: RrmNrPrcdCellConfig::CpyCellConfigInfo (RecvMsg, TargetCell)
Line 1761:    >>TargetCell periodic(%d)
Line 1766: RrmNrPrcdCellConfig::CpyCellConfigInfo - pFreq is NULL
Line 1772: RrmNrPrcdCellConfig::CpyCellConfigInfo - MEAS_OBJECT_ID_NULL
Line 1788:    >> Cause:%d, Band:%d, CellId:%d, SsbFrequency:%d, SsbScs:(enum)%d, SsbPeriodicity:%d[ms])
Line 1793: RrmBlkMsgBuildNr::MakeInitSearchReq
Line 1807: RrmBlkMsgBuildNr::MakeInitMeasReq
Line 1829:    >>[%d] CellId(%d) BeamTimingOffset(%d)
Line 1838: RrmBlkMsgBuildNr::MakeServingCellChangeReq
Line 1842:    >>cadidate indexCellResultInfo(%d) indexBeamMeasInfo(%d)
Line 1843:    >>numBeamMeasResult(%d)
Line 1859:    >>suscess ssbPositions check - indexCellResultInfo(%d) indexBeamMeasInfo(%d)
Line 1870:    >>fail ssbPositions check - There is no beamindex that meets the condition.
Line 1895: RrmBlkMsgBuildNr::MakeMeasResultInd
Line 1928: ServCellIndex(%d) Arfcn(%d) CellId(%d)
Line 1930:    >>Freq_Range(%d)
Line 1937:    >>[%d]indexBeamResult(%d)
Line 1946:       ::antenna_index(%d) SsbCnt(%d) SsbIndex(%d) SsbRsrp(%d)
Line 1952:    >>fail IsBeamincludessbPositionsInBurst. skip BeamIndex(%d)'s Result
Line 1961:    >>[%d]indexBeamResult(%d)
Line 1970:       ::antenna_index(%d) SsbCnt(%d) SsbIndex(%d) SsbRsrp(%d)
Line 1975:    >>fail IsBeamincludessbPositionsInBurst. skip BeamIndex(%d)'s Result
Line 1983: RrmBlkMsgBuildNr::MakeCellAcqInd
Line 2001: RrmNrPrcdCellConfig::SetInitCellMeasResult : Result(%d)
Line 2010: Result[%d]'s BeamIndex is not valid
Line 2021: InitCellMeasResult: CellId(Req:%d, Result:%d) - [%d] TimingOffset(%d) BeamIndex(%d)
Line 2029:    >> RxAnt[%d] - Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Line 2071: After sorting: CellId(Req:%d, Result:%d) - [%d] TimingOffset(%d) BeamIndex(%d)
Line 2079:    >> RxAnt[%d] - Rsrp(%d) Rsrq(%d) Sinr(%d) Rssi(%d)
Line 2091: RrmBlkCellSrchNr::SetInitCellMeasResult : BestRsrp(%d) BestRsrq(%d) BestSinr(%d) BestRssi(%d) indexCellResultInfo(%d)
Line 2099: RrmNrPrcdCellConfig::SetInitCellSrchResult : NumCell(%d)
Line 2106: InitSrchCnf Param : CellList[%d] Result(%d) Band(%d) Arfcn(%d) CellId(%d) TimingOffset(%d) CorrEnergy(%d)
Line 2110: InitSrchCnf Param : CellList[%d] Rx0PwrDb(%d) Rx1PwrDb(%d) AfcValueQ(%d) AfcValueI(%d) FreqOffset(%d), RxMeamIdx(%d)
Line 2113: InitSrchCnf Param : CellList[%d] AgcGainIdx0[%d], AgcGainIdx1[%d])
Line 2126:    >>checkcell [%d]cellid(%d)
Line 2127:    >>numBeamSrchResult(%d)
Line 2128:    >>numBeamMeasResult(%d)
Line 2129:    >>numCellResultInfo(%d)
Line 2134:    >>Abnormal case numBeamSrchResult(%d) is Max
Line 2135:    >>CellId(%d) 
Line 2153:    >>numBeamSrchResult(%d)
Line 2154:    >>numBeamMeasResult(%d)
Line 2157:    >>numCellResultInfo(%d)
Line 2158:    >>newcell cellid(%d)
Line 2165: RrmNrPrcdCellConfig::SetPbchDecodeResult
Line 2170: ========MIB info in SERVING_CELL_CHANGE_CNF message==========
Line 2176: SetPbchDecodeResult: SsbIndexEplicit(%d) halfFrameIndex(%d) systemFrameNum(%d %d) SubCarrierSpacingCommon(%d)
Line 2182: SsbSubCarrierOffset(%d) PdcchConfigSib1(%d) NrRrcDb_CellBarred_e(%d) NrRrcDb_IntraFreqReselection_e(%d) spare(%d)
Line 2183: MIB(0x%2X%2X%2X%2X[bit string])
Line 2184: =======================================
Line 2194: BeamIndex (%d), BeamIndexLSB(%d), BeamIndexMSB(%d)
Line 2200: RrmNrPrcdCellConfig::GetNextTargetbeam
Line 2202:    >> before indexCellResultInfo(%d) indexBeamMeasInfo(%d) numBeamMeasResult(%d)
Line 2207:    >> after indexCellResultInfo(%d) indexBeamMeasInfo(%d)
Line 2212: 	>> Fail indexBeamMeasInfo max - indexCellResultInfo(%d) indexBeamMeasInfo(%d) numBeamMeasResult(%d)
Line 2219: RrmNrPrcdCellConfig::GetNextTargetcell
Line 2221:    >>before indexCellResultInfo(%d) indexBeamMeasInfo(%d) numCellResultInfo(%d)
Line 2243:    >> after indexCellResultInfo(%d)
Line 2249:    >> cell Barred indexCellResultInfo(%d)
Line 2254:    >> Fail indexCellResultInfo(%d) is max
Line 2265: RrmNrPrcdCellConfig::GetBestResultPerBeamIndex
Line 2290: RrmNrPrcdCellConfig::Init
Line 2347: [Check] Initial cell search FAIL. Send RRC_RRM_CELL_CONFIG_CNF with fail result
Line 2383: RrmNrPrcdCellConfig::SendFailCNFMessage::CanNot AllocMsg about RRC_RRM_CELL_CONFIG_CNF
Line 2390: RrmNrPrcdCellConfig::CheckIfnotUsingAstunnel
Line 2400: RrmNrSm::RRC_RRM_CELL_CONFIG_CNF::Terminate Current Procedure(PrcdId(%d))
Line 2404: RrmNrSm::RRC_RRM_CELL_CONFIG_CNF:: Cannot Terminate Current Procedure(PrcdId(%d), PbdResult(%d))
Line 2407: CanNot send RRC_RRM_CELL_CONFIG_CNF. Because F_USING_ASTUNNEL was Enable
Line 2415: RrmNrPrcdCellConfig::CheckIfDuplicateCellConfig
Line 2432: RrmNrPrcdCellConfig::CheckIfDuplicateCellConfig:: ServCellInfo is not
Line 2440: RrmNrPrcdCellConfig::CheckIfDuplicateCellConfig:: NEIGHBOR_FAIL
Line 2461: ServCellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2462: RecvMsg BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2474: RrmNrPrcdCellConfig::CheckIfDuplicateCellConfig:: Invalid NeighborCell
Line 2478: RrmNrPrcdCellConfig::CheckIfDuplicateCellConfig:: DUPLICELLCONFIG_(%d) Case, RrmState(%d) 
Line 2485: RrmNrPrcdCellConfig::IsNeighborCell
Line 2506: RrmNrPrcdCellConfig::BestNeighbor::ServingCell is not
Line 2512: RrmNrPrcdCellConfig::IsNeighborCell::Search in IntraFreqInfo
Line 2517: RrmNrPrcdCellConfig::IsNeighborCell::empty IntraFreqInfo
Line 2528: IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2551: IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2576: RrmNrPrcdCellConfig::IsNeighborCell::Search in InterFreqInfo
Line 2589: IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2613: IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2643: RrmNrPrcdCellConfig::IsNeighborCell
Line 2664: RrmNrPrcdCellConfig::BestNeighbor::ServingCell is not
Line 2670: RrmNrPrcdCellConfig::IsNeighborCell::Search in IntraFreqInfo
Line 2675: RrmNrPrcdCellConfig::IsNeighborCell::empty IntraFreqInfo
Line 2686: IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2709: IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2733: RrmNrPrcdCellConfig::IsNeighborCell::Search in InterFreqInfo
Line 2747: IDLISTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2771: IDDETECTEDCELLSET::CellInfo BandId(%d) Arfcn(%d) CellId(%d) SCS(%d)
Line 2801: RrmNrPrcdCellConfig::UpdateIntraFreq()
Line 2817:    >>pIntraFreqInfo is nullptr and fail to allocate
Line 2836:    >>IntraFreqInfo - BandId:%d Arfcn:%d SsbAbsFreq:%d SubCarrierSpacing:%d
Line 2844:    >>pServingCellInfo is nullptr and fail to allocate
Line 2872:    >>ServingCellInfo - BandId:%d Arfcn:%d CellId:%d SsbRsIndex:%d SsbTimingOffset:%d SubCarrierSpacing:%d RxBeamIndex:%d
Line 2877: RrmNrPrcdCellConfig::ConfigureMeasResultInd(L1C_RRM_MEAS_RESULT_IND)
Line 2905:    >>pCell is nullptr
Line 2922:    >>cell_result_index:%d - ServCellIndex:%d Arfcn:%d CellId:%d
Line 2932:      ::IGNORE MeasResultPerRSIndex(RSIndex:%d) - Out of SsbBitmap:0x%08x %08x
Line 2958:      ::antenna_index:%d ssb_result_index:%d - SsbIndex:%d SsbRsrp:%d
Line 2967:      ::IGNORE MeasResultPerRSIndex(RSIndex:%d) - Out of SsbBitmap:0x%08x %08x
Line 2980:      ::antenna_index:%d - SsbCnt:%d
Line 2989:    >>ssb_result_total_counter:%d
Line 3000: RrmNrPrcdCellConfig::SetssbPositionsInBurst
Line 3027:    >>RrmNrPrcdCellConfig::SetssbPositionsInBurst - Invalid ssbPositionsInBurst.choice(%d)
Line 3035:    >>ssbPositionsInBurst - value_L(%d), ssbPositionsInBurst(0x%08X%08X)
Line 3039:    >>ssbPositionsInBurst is not present
Line 3046: RrmNrPrcdCellConfig::IsBeamincludessbPositionsInBurst
Line 3050:    >>true. ssbPositionsInBurstPresent is not present.
Line 3055:    >>Is checking ssbPositionsInBurst - ssbPositionsInBurstPresent(%d) value_L(%d), ssbPositionsInBurst(0x%08X%08X), BeamIndex(%d)
Line 3070:    >>ssbPositionsInBurst index(%d) ssbPositionsInBurst array(%d) remainder(%d) BeamIndex(%d)
Line 3073:    >>true. There is a possibility that there is a target beam index in BeamIndex(%d) ssbPositionsInBurst.
Line 3079:    >>false. There is not target beamindex in 64ea ssbPositionsInBurst. BeamIndex(%d)
Line 3086:    >>true. There is target beamindex in 64ea ssbPositionsInBurst. _BeamIndex(%d)
Line 3091:    >>false. There is not target beamindex in 64ea ssbPositionsInBurst. _BeamIndex(%d)
Line 3100:    >>true. There is target beamindex in ssbPositionsInBurst.
Line 3105:    >>false. There is not target beamindex in ssbPositionsInBurst.
Line 3113: RrmNrPrcdCellConfig::IsCheckBeamResultincludessbPositionsInBurst
Line 3117:    >>true. ssbPositionsInBurstPresent is not present.
Line 3122:    >>Is checking ssbPositionsInBurst - ssbPositionsInBurstPresent(%d) value_L(%d), ssbPositionsInBurst(0x%08X%08X), BeamIndex(%d)
Line 3126:    >>true. There is target beamindex in ssbPositionsInBurst. _BeamIndex(%d) NRRRM_BITMAP_CHECK_IDX_COMMON
Line 3131:    >>false. There is not target beamindex in ssbPositionsInBurst. _BeamIndex(%d) NRRRM_BITMAP_CHECK_IDX_COMMON
Line 3171:    >>GetSsbBitmap - ssbPositionsInBurstPresent:(bool)%d rNumSsbIndex:%d rSsbBitmap:0x%08X %08X
Line 3178: EvalCellSelection - QoffsetTemp:%d PPowerClass:%d
Line 3190: m_NrCellSrchPbdDb BestRsrp(%d) BestRsrq(%d)
Line 3197: ServingMeas is not valid
Line 3202: SelectedCellInfo BestRsrp(%d) BestRsrq(%d)
Line 3208:    >>GET Cell Selection Criterion from SIB1
Line 3211:      ::SIB1:NULL
Line 3237:      ::Srxlev:%d Squal:%d IsSFulfilled:(bool)%d QoffsetTemp:%d
Line 3239:      ::BestRsrp:%d[/100dBm] QrxLevMin:%d[/100dB] QrxLevMinOffset:%d[/100dB] Pcompensation:%d[/100dB]=MAX((Pmax:%d - PPowerClass:%d),0)
Line 3241:      ::BestRsrq:%d[/100dBm] QqualMin:%d[/100dB] QqualMinOffset:%d[/100dB]
Line 3248: RrmNrPrcdCellConfig::CheckFixedCell - CellId(%d) Arfcn(%d)
Line 3258: RrmBlkConnEvalNr::CheckFixedCell - rArfcn(%d) Arfcn(%d)
Line 3261: RrmBlkConnEvalNr::CheckFixedCell - RegFIXEDCellId(%d) ConfigCellId(%d)
Line 3264: RrmBlkConnEvalNr::CheckFixedCell - fail because different CellId
Line 3269: RrmBlkConnEvalNr::CheckFixedCell - success same CellId
Line 3275: RrmBlkConnEvalNr::CheckFixedCell - unused CellId
Line 3281: RrmBlkConnEvalNr::CheckFixedCell - fail because different Arfcn rArfcn(%d) Arfcn(%d)
Line 3288: RrmBlkConnEvalNr::CheckFixedCell - RegFIXEDCellId(%d) ConfigCellId(%d)
Line 3291: RrmBlkConnEvalNr::CheckFixedCell - fail because different CellId
Line 3296: RrmBlkConnEvalNr::CheckFixedCell - success same CellId
Line 3302: RrmBlkConnEvalNr::CheckFixedCell - unused CellId
Line 3310: RrmNrPrcdCellConfig::CheckFixedFreq - Arfcn(%d)
Line 3318: RrmBlkConnEvalNr::CheckFixedFreq - rArfcn(%d) Arfcn(%d)
Line 3323: RrmBlkConnEvalNr::CheckFixedFreq - fail because different Arfcn rArfcn(%d) Arfcn(%d)
Line 3333: RrmNrPrcdCellConfig::GetSsbSampleMax
Line 3364: 	>>Unexpected SsbPeriod:%d(enum) Set Default SsbSampleMax
Line 3368: GetSsbSampleMax - SsbPeriod:%d(enum) SelectedSsbSampleMax:%d
Line 3385: RrmNrPrcdCellConfig::SetCellResultInfo
Line 3404: 	>>select a beamindex(%d)
Line 3412: 	>>can not select beamindex(%d) isValid(%d)
Line 3418: 	>>select a beamindex(%d)
Line 3427: 	>>can not select beamindex(%d) isValid(%d)
Line 3437: RrmNrPrcdCellConfig::SetCellResultInfo:: CellInfo's beamindex is inValid
Line 3455: SsbTimingOffset(%d)
Line 3460: RrmNrPrcdCellConfig::SetCellResultInfo:: SsbTimingOffset(0) is inValid
Line 3474: GetSsbTimingOffset(%d) GetSsbRsIndex(%d)
Line 3477: RrmNrPrcdCellConfig::IsNeighborCell::RRM_SET_TYPE_IDLISTEDCELLSET:Band(%d) SsbFrequency(%d) SubcarrierSpacing(%d) CellId(%d) BeamTimingOffset(%d) BeamIndex(%d) Periodicity(%d)
Line 3478: RxBeamIdx(%d)
Line 3479: BestRsrp(%d) BestRsrq(%d) BestRssi(%d)
Line 3487: RrmNrPrcdCellConfig::SetTargetcell
Line 3495:    >>set indexCellResultInfo(%d) - CellId(%d)
Line 3499:    >>No CellId(%d) in CellResultInfo
Line 3507: RrmNrPrcdCellConfig::CreateInstance - m_pInstance is NULL
Line 3513: RrmNrPrcdCellConfig::CreateInstance - m_pInstance is not NULL
Line 3520: RrmNrPrcdCellConfig::GetInstance
Line 3523: RrmNrPrcdCellConfig::GetInstance - m_pInstance is NULL
