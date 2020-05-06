Line 43: RrmBlkConnEvalNr::RrmBlkConnEvalNr()
Line 68: RrmBlkConnEvalNr::~RrmBlkConnEvalNr()
Line 75: RrmBlkConnEvalNr::Init()
Line 129: RrmBlkConnEvalNr::SetHighestIntraNCellRsrp - m_HighestIntraNCellRsrp set to %d
Line 196: GetSsbToMeasureBitmap(Arfcn:%d MeasObjectId:%d) - SsbToMeasurePresent:(bool)%d SsbToMeasureChoice:(enum)%d maxNrOfRsIndex:%d SsbBitmap:0x%08x %08x
Line 218: 	>>ScheduledSsbConfigMobility.SsbToMeasurePresent is false
Line 222: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 227: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 232: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 236: 	>>Wrong NumSsbToMeasure value %d detected
Line 248: RrmBlkConnMeasNr::GetServingPositionInBurst
Line 265:    >>CONN MEAS - SIB1 present, use Ssbconfig of SIB1
Line 270:    >>CONN MEAS - SIB1 not present, use Ssbconfig of INTRA FREQ
Line 277:    >>This is not intra freq no need to add Position in burst for this Meas_REQ
Line 287: RrmBlkConnEvalNr::ProcCellCriteria rsType:%s(%d) eFilterCellType:(enum)%d
Line 338:    >>measObjId:%d rsType:%s(%d) - AbsThreshPresent:(bool)%d NroBlockAvgPresent:(bool)%d
Line 359:    >>filterCoefficient - RSRP:(enum)%d RSRQ:(enum)%d RSSINR:(enum)%d RSSI:(enum)%d)
Line 363:    >>Use default filterCoefficient ( not present )
Line 377:    >>dynamicFC_converted - RSRP:%d RSRQ:%d RSSINR:%d RSSI:%d)
Line 419:    >>bSortResult:(bool)%d
Line 427:    >>RSRP - NroBlockAvg:%d AbsThresh.RsrpPresent:(bool)%d AbsThresh.Rsrp:%d sortedL1Rsrp[0]:%d
Line 440:      ::Derive cell RSRP with linear power scale average - CurBlockNum:%d
Line 455:    >>RSRQ - NroBlockAvg:%d AbsThresh.RsrqPresent:(bool)%d AbsThresh.Rsrq:%d sortedL1Rsrq[0]:%d
Line 469:      ::Derive cell RSRQ with linear power scale average - CurBlockNum:%d
Line 484:    >>SINR - NroBlockAvg:%d AbsThresh.SinrPresent:(bool)%d AbsThresh.Sinr:%d sortedL1RsSinr[0]:%d
Line 498:      ::Derive cell RSSINR with linear power scale average - CurBlockNum:%d
Line 512:    >>RSSI - Derive cell RSSI from sortedL1Rssi[0]:%d[/100dBm]
Line 560:      ::Set highest Rsrp Prev:%d[/100 dBm] New:%d[/100 dBm]
Line 634: filterCoefficient - RSRP:(enum)%d RSRQ:(enum)%d RSSINR:(enum)%d RSSI:(enum)%d
Line 638: Default filterCoefficient ( No index )
Line 643: Default filterCoefficient ( not present )
Line 657:    >>dynamicFC_converted - RSRP:%d RSRQ:%d RSSINR:%d RSSI:%d)
Line 723: L3Filtered beam - SSB RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 732: L3Filtered beam - CSI-RS RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 744: L3Filtered beam - SSB Arfcn:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 753: L3Filtered beam - CSI-RS MO:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 783: TravelListedBeams:: pCellInfo == nullptr - try to find first SSB Cellinfo in next MO
Line 794: TravelListedBeams:: ProcBeamCriteria(SSB) #%d loop complete
Line 809: TravelListedBeams:: try to find next SSB Cellinfo
Line 825: TravelListedBeams:: pCellInfo == nullptr - try to find first CSI-RS Cellinfo in next MO
Line 835: TravelListedBeams:: ProcBeamCriteria(CSI-RS) #%d loop complete
Line 839: TravelListedBeams:: try to find next CSI-RS Cellinfo
Line 862: TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 868: TravelListedCells:: ProcCellCriteria(RSTYPE_SSB) #%d complete
Line 871: TravelListedCells:: try to find next SSB Cellinfo
Line 886: TravelListedCells:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 894: TravelListedCells:: ProcCellCriteria(RSTYPE_CSIRS) #%d complete
Line 897: TravelListedCells:: try to find next CSI-RS Cellinfo
Line 905: RrmBlkConnEvalNr::UpdateL3FilterAllBeams
Line 926:    >> SCellFreq[%d,%d] First ObjectId(%d)
Line 938:    >> Please check Freq and MO
Line 947:    >> SCellFreq[%d,%d] Next ObjectId(%d)
Line 951:    >> TravelListedBeams for SCellFreq complete
Line 956:    >> UpdateL3FilterAllBeams SCellFreq - No SCell freq
Line 961:    >> pServCellGroupInfoNr is nullptr!!!
Line 972:    >> UpdateL3FilterAllBeams intra
Line 978:    >> TravelListedBeams for intra complete
Line 982:    >> Please check Freq and MO
Line 987:    >> No Intra freq
Line 997:    >> UpdateL3FilterAllBeams inter
Line 1009:    >> Please check Freq and MO
Line 1021:    >> TravelListedBeams for Inter complete
Line 1026:    >> No Inter freq
Line 1061: UpdateL3FilterServingCell:: ProcBeamCriteria for Serv(SSB) complete
Line 1070: UpdateL3FilterServingCell:: ProcCellCriteria for Serv(SSB) complete
Line 1077: UpdateL3FilterServingCell:: ProcBeamCriteria for Serv(CSI-RS) complete
Line 1080: UpdateL3FilterServingCell:: ProcCellCriteria for Serv(CSI-RS) complete
Line 1085: UpdateL3FilterServingCell :: Please check MO
Line 1090: UpdateL3FilterServingCell :: Please NULL check of pIntraFreqInfo & pServingCell
Line 1096: RrmBlkConnEvalNr::UpdateL3FilterAllCells
Line 1125: UpdateL3FilterAllCells :: Please check SCellFreq and MO
Line 1137: UpdateL3FilterAllCells:: SCellFreq loop complete
Line 1142: UpdateL3FilterAllCells Inter - No SCell freq
Line 1147: UpdateL3FilterAllCells SCellFreq - No Master CellGroupInfo
Line 1170: UpdateL3FilterAllCells :: Please check Freq and MO
Line 1176: UpdateL3FilterAllCells intra - No Intra freq
Line 1197: UpdateL3FilterAllCells :: Please check Freq and MO
Line 1209: UpdateL3FilterAllCells:: InterFreq loop complete
Line 1214: UpdateL3FilterAllCells Inter - No Inter freq
Line 1240: RrmBlkConnEvalNr::AddCellToTimeToTriggerList::SsbFrequency(%d), CellId(%d), State.Prev(%d)
Line 1243: RrmBlkConnEvalNr::AddCellToTimeToTriggerList::Current numOfCellListTimeToTrigger(%d)
Line 1247: RrmBlkConnEvalNr::AddCellToTimeToTriggerList::MeasID(%d), CellID(%d), error numOfCellListTimeToTrigger
Line 1266: RrmBlkConnEvalNr::RemoveCellToTimeToTriggerList::MeasID(%d), CellID(%d)
Line 1270: RrmBlkConnEvalNr::RemoveCellToTimeToTriggerList::Current numOfCellListTimeToTrigger(%d)
Line 1274: RrmBlkConnEvalNr::RemoveCellToTimeToTriggerList::MeasID(%d), CellID(%d), error numOfCellListTimeToTrigger
Line 1293: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[EventA1] (%d), EventA1.TimeToTrigger enum (%d)::_eval_
Line 1298: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[EventA2] (%d), EventA2.TimeToTrigger enum (%d)::_eval_
Line 1303: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[EventA3] (%d), EventA3.TimeToTrigger enum (%d)::_eval_
Line 1308: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[EventA4] (%d), EventA4.TimeToTrigger enum (%d)::_eval_
Line 1313: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[EventA5] (%d), EventA5.TimeToTrigger enum (%d)::_eval_
Line 1318: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[EventA6] (%d), EventA6.TimeToTrigger enum (%d)::_eval_
Line 1321: RrmBlkConnEvalNr::GetTimeToTriggerMs::empty EventIdChoice::_eval_
Line 1334: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[NRRRCDB_EventId_B1] (%d), EventA1.TimeToTrigger enum (%d)::_eval_
Line 1340: RrmBlkConnEvalNr::GetTimeToTriggerMs::TimeToTriggerMs[NRRRCDB_EventId_B1] (%d), EventA1.TimeToTrigger enum (%d)::_eval_
Line 1344: RrmBlkConnEvalNr::GetTimeToTriggerMs::empty EventIdChoice::_eval_
Line 1351: RrmBlkConnEvalNr::GetTimeToTriggerMs::UnAvailable NrRrcDb_ReportConfig_Choice_e (enum)%d
Line 1383: RrmBlkConnEvalNr::GetMeasResult::MeasID(%d)
Line 1422:    >> CellID(%d) RSTYPE_SSB
Line 1427:    >> CellID(%d) RSTYPE_CSIRS
Line 1438: pMeas or pTargetCell NULL
Line 1442: RrmBlkConnEvalNr::CheckTimeToTrigger::MeasID(%d)
Line 1451: Before CheckTimeToTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), CellID(%d)::_eval_
Line 1458: State.Prev(NR_RRM_EVENT_LEAVE)
Line 1459: RrmBlkConnEvalNr::CheckTimeToTrigger - TimeToTrigger(NR_RRM_EVENT_LEAVE) cell(%d) is deleted
Line 1475: NR_RRM_EVENT_ENTER - Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1481: NR_RRM_EVENT_NONE - Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1498: NR_RRM_EVENT_ENTER::ReportConfigNR TimeToTrigger(%d)
Line 1508: Before CheckTimeToTrigger::NR_RRM_EVENT_STAY::MeasID(%d), CellID(%d)::_eval_
Line 1522: NR_RRM_EVENT_STAY::Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1528: NR_RRM_EVENT_NONE::Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1535: [Check] Need to check TimeDiff. Previous one is longer than latest
Line 1542: State.Prev(NR_RRM_EVENT_LEAVE)
Line 1546: NR_RRM_EVENT_LEAVE - Real CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1547: RrmBlkConnEvalNr::CheckTimeToTrigger - TimeToTrigger(NR_RRM_EVENT_LEAVE) cell(%d) is deleted
Line 1553: NR_RRM_EVENT_NONE - Real NR_RRM_EVENT_LEAVE CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1559: Invaild case - State.Prev(%d) -::_eval_
Line 1571: Before CheckTimeToTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), CellID(%d)::_eval_
Line 1580: State.Prev(NR_RRM_EVENT_ENTER)
Line 1581: RrmBlkConnEvalNr::CheckTimeToTrigger - TimeToTrigger(NR_RRM_EVENT_ENTER) cell(%d) is deleted
Line 1587: NR_RRM_EVENT_ENTER::ReportConfigNR TimeToTrigger(%d) CellListTimeToTrigger[].TimerExpired(%d)
Line 1592: TimeToTrigger(NR_RRM_EVENT_LEAVE) start - TimeToTrigger(%d) CellListTimeToTrigger[].TimerExpired(%d)
Line 1599: State.Prev(NR_RRM_EVENT_LEAVE)
Line 1603: NR_RRM_EVENT_LEAVE - Real CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1604: RrmBlkConnEvalNr::CheckTimeToTrigger - TimeToTrigger(NR_RRM_EVENT_LEAVE) cell(%d) is deleted
Line 1610: NR_RRM_EVENT_NONE - Real NR_RRM_EVENT_LEAVE CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 1616: Invaild case - State.Prev(%d) -::_eval_
Line 1617: RrmBlkConnEvalNr::CheckTimeToTrigger - TimeToTrigger cell(%d) is deleted
Line 1627: It is not Arfcn(%d) cell(%d) in TimeToTrigger
Line 1632: RrmBlkConnEvalNr::CheckTimeToTrigger::empty EventStatus
Line 1639: After CheckTimeToTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), CellID(%d)-::_eval_
Line 1643: After CheckTimeToTrigger::NR_RRM_EVENT_STAY::MeasID(%d), CellID(%d)-::_eval_
Line 1647: After CheckTimeToTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), CellID(%d)-::_eval_
Line 1651: After CheckTimeToTrigger::NR_RRM_EVENT_NONE - EventStatus(%d)-::_eval_
Line 1665: pMeas or pSpCell NULL
Line 1669: RrmBlkConnEvalNr::NrRrm_CheckServingCellEventTrigger::MeasID(%d)
Line 1682: After CheckServingCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d) invalid_MeasuredResult_SerCellID(%d)-::_eval_
Line 1698: Checking Serving EventId_A1 A1Threshold.Choice(%d)-::_eval_
Line 1702:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 1709:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 1716:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 1723:      :: Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 1730:      :: Hys field(%d)
Line 1761: Ms(%d), Hys actual(%d), NR_RRM_HYSTERESIS_TR(%d), Threshold_top(%d), Threshold_bottom(%d)::_eval_
Line 1773: Checking Serving EventId_A2 A2Threshold.Choice(%d), Offset(%d)-::_eval_
Line 1779:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 1786:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 1793:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 1800:      :: Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 1807:      :: Hys field(%d)
Line 1836: Ms(%d), Hys actual(%d), NR_RRM_HYSTERESIS_TR(%d), Threshold_bottom(%d), Threshold_top(%d)::_eval_
Line 1844: RrmBlkConnEvalNr::NrRrm_CheckServingCellEventTrigger::NR_RRM_EVENT_NONE
Line 1847: RrmBlkConnEvalNr::NrRrm_CheckServingCellEventTrigger::empty EventIdChoice::_eval_
Line 1855: After CheckServingCellEventTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), CellID(%d)-::_eval_
Line 1859: After CheckServingCellEventTrigger::NR_RRM_EVENT_STAY::MeasID(%d), CellID(%d)-::_eval_
Line 1863: After CheckServingCellEventTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), CellID(%d)-::_eval_
Line 1867: After CheckServingCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d)-::_eval_
Line 1877: NULL ptr
Line 1881: RrmBlkConnEvalNr::NrRrm_CheckNeighborCellEventTrigger::MeasID(%d)
Line 1910: After::CheckNeighborCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d) invalid_MeasuredResult_NCellID(%d) invalid_MeasuredResult_ACellID(%d)-::_eval_
Line 1931: Checking Neighbor EventId_A3 A3Offset.Choice(%d)-::_eval_
Line 1945:    >> NRRRCDB_EventId_A3 - UseWhiteCellList is (%d), Checking WhiteCellList::_eval_
Line 1949:    >> NRRRCDB_EventId_A3 - NCell-PhyCellId(%d) is WhiteListedCell::_eval_
Line 1953:    >> NRRRCDB_EventId_A3 - NCell-PhyCellId(%d) is not WhiteListedCell::_eval_
Line 1962:    >> NRRRCDB_EventId_A3 - UseWhiteCellList is (%d), Checking BlackCellList::_eval_
Line 1966:    >> NRRRCDB_EventId_A3 - NCell-PhyCellId(%d) is BlackListedCell::_eval_
Line 1972:    >> NRRRCDB_EventId_A3 - NCell-PhyCellId(%d) is not BlackListedCell::_eval_
Line 1978:      :: Hys field(%d)
Line 1982:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 1995:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 2008:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 2021:      :: Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 2033:      :: Off field(%d)
Line 2048: Mn(%d), Ofn(%d), Ocn(%d), Hys actual(%d), NR_RRM_HYSTERESIS_TR(%d)::_eval_
Line 2049: Mp(%d), Ofp(%d), Ocp(%d), Off actual(%d), NR_RRM_A3_OFFSET_TR(%d)::_eval_
Line 2054: Checking Neighbor EventId_A4 A4Threshold.Choice(%d)-::_eval_
Line 2068:    >> NRRRCDB_EventId_A4 - UseWhiteCellList is (%d), Checking WhiteCellList::_eval_
Line 2072:    >> NRRRCDB_EventId_A4 - NCell-PhyCellId(%d) is WhiteListedCell::_eval_
Line 2076:    >> NRRRCDB_EventId_A4 - NCell-PhyCellId(%d) is not WhiteListedCell::_eval_
Line 2085:    >> NRRRCDB_EventId_A4 - UseWhiteCellList is (%d), Checking BlackCellList::_eval_
Line 2089:    >> NRRRCDB_EventId_A4 - NCell-PhyCellId(%d) is BlackListedCell::_eval_
Line 2095:    >> NRRRCDB_EventId_A4 - NCell-PhyCellId(%d) is not BlackListedCell::_eval_
Line 2100:      :: Hys field(%d)
Line 2105:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 2115:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 2125:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 2135:      :: Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 2158: Mn(%d), Ofn(%d), Ocn(%d), Hys actual(%d), NR_RRM_HYSTERESIS_TR(%d)::_eval_
Line 2159: Threshold_top(%d), Threshold_bottom(%d)::_eval_
Line 2167: Checking Neighbor EventId_A5 A5Threshold1.Choice(%d), A5Threshold2.Choice(%d)-::_eval_
Line 2181:    >> NRRRCDB_EventId_A5 - UseWhiteCellList is (%d), Checking WhiteCellList::_eval_
Line 2185:    >> NRRRCDB_EventId_A5 - NCell-PhyCellId(%d) is WhiteListedCell::_eval_
Line 2189:    >> NRRRCDB_EventId_A5 - NCell-PhyCellId(%d) is not WhiteListedCell::_eval_
Line 2198:    >> NRRRCDB_EventId_A5 - UseWhiteCellList is (%d), Checking BlackCellList::_eval_
Line 2202:    >> NRRRCDB_EventId_A5 - NCell-PhyCellId(%d) is BlackListedCell::_eval_
Line 2208:    >> NRRRCDB_EventId_A5 - NCell-PhyCellId(%d) is not BlackListedCell::_eval_
Line 2213:      :: Hys field(%d)
Line 2218:      :: A5Threshold1 Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 2227:      :: A5Threshold1 Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 2236:      :: A5Threshold1 Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 2245:      :: A5Threshold1 Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 2257:      :: A5Threshold2 Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 2264:      :: A5Threshold2 Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 2271:      :: A5Threshold2 Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 2278:      :: A5Threshold2 Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 2298: Mp(%d), Hys actual(%d), NR_RRM_HYSTERESIS_TR(%d), Threshold_bottom(%d), Threshold_top(%d)::_eval_
Line 2299: Mn(%d), Ofn(%d), Ocn(%d), Hys actual(%d) Threshold2_bottom(%d), Threshold2_top(%d)::_eval_
Line 2305:    >> Event6A Evaluation (Neighbour becomes offset better than SCell)-::_eval_
Line 2319: 	>> NRRRCDB_EventId_A6 - UseWhiteCellList is (%d), Checking WhiteCellList::_eval_
Line 2323: 	>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is WhiteListedCell::_eval_
Line 2327: 	>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is not WhiteListedCell::_eval_
Line 2336: 	>> NRRRCDB_EventId_A6 - UseWhiteCellList is (%d), Checking BlackCellList::_eval_
Line 2340: 	>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is BlackListedCell::_eval_
Line 2346: 	>> NRRRCDB_EventId_A6 - NCell-PhyCellId(%d) is not BlackListedCell::_eval_
Line 2355:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrp
Line 2366:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_rsrq
Line 2377:      :: Evaluation Quantity is NRRRCDB_MeasTriggerQuantityOffset_sinr
Line 2388:      :: Evaluation Quantity is Unknown!!!! Use NRRRCDB_MeasTriggerQuantityOffset_rsrp as default Quantity!::_eval_
Line 2404:      :: NRRRCDB_EventId_A6 - NR_RRM_EVENT_ENTER
Line 2407:      :: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) - Hys/2(%d)) > SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
Line 2412:      :: NRRRCDB_EventId_A6 - NR_RRM_EVENT_LEAVE
Line 2415:      :: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) + Hys/2(%d)) < SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
Line 2420:      :: NRRRCDB_EventId_A6 - NR_RRM_EVENT_STAY
Line 2423:      :: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) - Hys/2(%d)) > SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
Line 2426:      :: EvalEq - Neighbor %d(= Mn(%d) + Ocn(%d) + Hys/2(%d)) < SCell %d(= Mp(%d) + Ocs(%d) + Off/2(%d))::_eval_
Line 2431: RrmBlkConnEvalNr::NrRrm_CheckNeighborCellEventTrigger::empty EventIdChoice::_eval_
Line 2438: After CheckNeighborCellEventTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 2442: After CheckNeighborCellEventTrigger::NR_RRM_EVENT_STAY::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 2446: After CheckNeighborCellEventTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), NCellID(%d), SpCellID(%d)-::_eval_
Line 2450: After::CheckNeighborCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d)-::_eval_
Line 2458: RrmBlkConnEvalNr::isWhiteListedCell
Line 2474:    >> TargetPCID : %d
Line 2491: 	 >> WhiteCellListIdx(%d)
Line 2497: 	 >> WhiteCellListIdx[%d] - PciRange.Start(%d) PciRange.Range(%d) TargetPCID(%d)
Line 2509: 	 >> WhiteCellListIdx[%d] - PciRange.Start(%d) TargetPCID(%d)
Line 2519:    >> Empty WhiteCellListIdx(0x%x)
Line 2527: RrmBlkConnEvalNr::isBlackListedCell
Line 2543: 	>> TargetPCID : %d
Line 2560: 	 >> BlackCellListIdx(%d)
Line 2566: 	 >> BlackCellListIdx[%d] - PciRange.Start(%d) PciRange.Range(%d) TargetPCID(%d)
Line 2578: 	 >> BlackCellListIdx[%d] - PciRange.Start(%d) TargetPCID(%d)
Line 2588: 	>> Empty BlackCellListIdx(0x%x)
Line 2607: RrmBlkConnEvalNr::SetCellMeasResults::RsType(SSB), Quantity(Rsrp), Rsrp(%d), RSRPReportMapping(%d)
Line 2615: RrmBlkConnEvalNr::SetCellMeasResults::RsType(SSB), Quantity(Rsrq), Rsrq(%d), RSRQReportMapping(%d)
Line 2623: RrmBlkConnEvalNr::SetCellMeasResults::RsType(SSB), Quantity(Sinr), Sinr(%d), RSRQReportMapping(%d)
Line 2628: RrmBlkConnEvalNr::SetCellMeasResults::RsType(SSB), Quantity(empty)
Line 2629: Quantity(Rsrp)
Line 2633: Rsrp(%d), RSRPReportMapping(%d)
Line 2645: RrmBlkConnEvalNr::SetCellMeasResults::RsType(CSIRS), Quantity(Rsrp), Rsrp(%d), RSRPReportMapping(%d)
Line 2653: RrmBlkConnEvalNr::SetCellMeasResults::RsType(CSIRS), Quantity(Rsrq), Rsrq(%d), RSRQReportMapping(%d)
Line 2661: RrmBlkConnEvalNr::SetCellMeasResults::RsType(CSIRS), Quantity(Sinr), Sinr(%d), RSRQReportMapping(%d)
Line 2666: RrmBlkConnEvalNr::SetCellMeasResults::RsType(CSIRS), Quantity(empty)
Line 2667: Quantity(Rsrp)
Line 2671: Rsrp(%d), RSRPReportMapping(%d)
Line 2676: RrmBlkConnEvalNr::SetCellMeasResults::RsType(empty)
Line 2684: RrmBlkConnEvalNr::SetRSIndexMeasResultsforSsb::m_numRSIndexMeasResults(%d)
Line 2707: RrmBlkConnEvalNr::SetRSIndexMeasResultsforSsb::ReportQuantityRsIdx is not set. RSRP(0) RSRQ(0) SINR(0)
Line 2713: RrmBlkConnEvalNr::SetRSIndexMeasResultsforSsb::ReportQuantityRsIdxPresent(0) is not set
Line 2727: 	>>b_AbsThreshSsBlocksConsolidationPresent(%d) RsrpPresent(%d)
Line 2732: 	>> RsrpThresholdNR is not met
Line 2739: 	>>b_AbsThreshSsBlocksConsolidationPresent(%d) RsrqPresent(%d)
Line 2744: 	>> RsrqThresholdNR is not met
Line 2751: 	>>b_AbsThreshSsBlocksConsolidationPresent(%d) SinrPresent(%d)
Line 2756: 	>> SinrThresholdNR is not met
Line 2766: 	>>First, Below Threshold.
Line 2775: 	>>Below Threshold. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdRsrp(%d)
Line 2783: 	>>Below Threshold. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), RSRQReportMapping(%d), ThresholdRsrq(%d)
Line 2791: 	>>Below Threshold. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), GetSINRReportMapping(%d), ThresholdSinr(%d)
Line 2797: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 2799: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 2801: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), ThresholdSinr(%d)
Line 2806: 	>>Below Threshold.
Line 2808: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 2810: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 2812: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), ThresholdSinr(%d)
Line 2830: 	>>Threshold exceeded. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdRsrp(%d)
Line 2835: 	>>Threshold exceeded. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 2848: 	>>ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdRsrp(%d)
Line 2853: 	>>ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 2872: 	>>Threshold exceeded. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), RSRQReportMapping(%d), ThresholdRsrq(%d)
Line 2877: 	>>Threshold exceeded. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 2891: 	>>ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), RSRQReportMapping(%d), ThresholdRsrq(%d)
Line 2896: 	>>ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 2914: 	>>Threshold exceeded. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), GetSINRReportMapping(%d), ThresholdSinr(%d)
Line 2919: 	>>Threshold exceeded. ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), ThresholdSinr(%d)
Line 2933: 	>>ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), GetSINRReportMapping(%d), ThresholdSinr(%d)
Line 2938: 	>>ResultsSsbIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.RsSinr(%d), ThresholdSinr(%d)
Line 2958: RrmBlkConnEvalNr::SetRSIndexMeasResultsforSsb::SSB b_AbsThreshSsBlocksConsolidationPresent(%d) BelowThresh(%d)
Line 2971: RrmBlkConnEvalNr::SetRSIndexMeasResultsforCsirs::m_numRSIndexMeasResults(%d)
Line 2994: RrmBlkConnEvalNr::SetRSIndexMeasResultsforCsirs::ReportQuantityRsIdx is not set. RSRP(0) RSRQ(0) SINR(0)
Line 3000: RrmBlkConnEvalNr::SetRSIndexMeasResultsforCsirs::ReportQuantityRsIdxPresent(0) is not set
Line 3014: 	>>b_AbsThreshCsiRsConsolidationPresent(%d) RsrpPresent(%d)
Line 3019: 	>> RsrpThresholdNR is not met
Line 3027: 	>>b_AbsThreshCsiRsConsolidationPresent(%d) RsrqPresent(%d)
Line 3032: 	>> RsrqThresholdNR is not met
Line 3040: 	>>b_AbsThreshCsiRsConsolidationPresent(%d) SinrPresent(%d)
Line 3045: 	>> SinrThresholdNR is not met
Line 3056: 	>>First, Below Threshold.
Line 3064: 	>>Below Threshold. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdRsrp(%d)
Line 3072: 	>>Below Threshold. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), RSRQThreshMapping(%d), ThresholdRsrq(%d)
Line 3080: 	>>Below Threshold. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdSinr(%d)
Line 3086: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 3088: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 3090: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 3095: 	>>Below Threshold.
Line 3097: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 3099: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 3101: 	>>Threshold not exceeded. ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 3118: 	>>Threshold exceeded. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdRsrp(%d)
Line 3123: 	>>Threshold exceeded. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 3137: 	>>ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdRsrp(%d)
Line 3142: 	>>ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdRsrp(%d)
Line 3161: 	>>Threshold exceeded. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), RSRQThreshMapping(%d), ThresholdRsrq(%d)
Line 3166: 	>>Threshold exceeded. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 3180: 	>>ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), RSRQThreshMapping(%d), ThresholdRsrq(%d)
Line 3185: 	>>ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrq(%d), ThresholdRsrq(%d)
Line 3204: 	>>Threshold exceeded. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdSinr(%d)
Line 3209: 	>>Threshold exceeded. ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdSinr(%d)
Line 3223: 	 >>ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), RSRPThreshMapping(%d), ThresholdSinr(%d)
Line 3228: 	 >>ResultsCsiRsIndex[%d] ResultsortedPerRSIndex[%d] L3Filtered.Rsrp(%d), ThresholdSinr(%d)
Line 3247: RrmBlkConnEvalNr::SetRSIndexMeasResultsforCsirs::CSIRS b_AbsThreshSsBlocksConsolidationPresent(%d) BelowThresh(%d)
Line 3259: RrmBlkConnEvalNr::SetRSIndexMeasResults::MeasID(%d), CellID(%d)
Line 3271: RrmBlkConnEvalNr::SetRSIndexMeasResults::RsType(empty)
Line 3287: RrmBlkConnEvalNr::SortRSIndexMeasResults::MeasID(%d), CellID(%d)
Line 3312: RrmBlkConnEvalNr::SortRSIndexMeasResults - m_ReportQuantityRsIdx is not set
Line 3318: RrmBlkConnEvalNr::SortRSIndexMeasResults - m_ReportQuantityRsIdxPresent is not set(%d)
Line 3339: RrmBlkConnEvalNr::SortRSIndexMeasResults - Invaild m_TriggerQuantity(%d)
Line 3401:    >> beam_index(%d) Rsrp(%d) Rsrq(%d) RsSinr(%d) CellID(%d)
Line 3406:    >>Exemption beam_index(%d)
Line 3413: RrmBlkConnEvalNr::SortRSIndexMeasResults - array_index(%d)
Line 3416: RrmBlkConnEvalNr::SortRSIndexMeasResults:: RSRP(%d), RSRQ(%d), SINR(%d), CellID(%d)
Line 3430: RrmBlkConnEvalNr::GetCellMeasResultsortedPerRSIndex::RSIndex(%d) is not valid, return m_RSIndexMeasResults[0]
Line 3438: RrmBlkConnEvalNr::SortCellsTriggeredList::RsType %d, forMR %d
Line 3457:    >>VarMeasReportList numOfCellsInReportList(%d)
Line 3461: RrmBlkConnEvalNr::SortCellsTriggeredList::Error numOfCellsInReportList : %d
Line 3516: RrmBlkConnEvalNr::SortCellsTriggeredList::CellMeasResults is invalid
Line 3542: RrmBlkConnEvalNr::SortCellsTriggeredList::EventIdChoice is invalid
Line 3577: RrmBlkConnEvalNr::SortCellsTriggeredList::sortingQuantity is invalid
Line 3582: RrmBlkConnEvalNr::SortCellsTriggeredList::CellMeasResults is invalid
Line 3587: RrmBlkConnEvalNr::SortCellsTriggeredList::Choice is NRRRCDB_ReportConfigNR_reportType_reportCGI
Line 3595:    >>userVarMeasReportList numOfCellsInReportList(%d)
Line 3599: RrmBlkConnEvalNr::SortCellsTriggeredList::Error numOfCellsInReportList : %d
Line 3634: RrmBlkConnEvalNr::UpdateReportConfigInfo::MeasID(%d)
Line 3635: RrmBlkConnEvalNr::UpdateReportConfigInfo::MeasID(%d)
Line 3636: RrmBlkConnEvalNr::UpdateReportConfigInfo::MeasID(%d) accumulation(%d)
Line 3665:    >> (reportType_periodical) reportType(%d), RsType(%d), IncludeBeamMeas(%d), MaxReportCells(%d)
Line 3682: 	 >> (reportType_periodical) (ReportQuantityCell) accumulation(%d) Rsrp(%d), Rsrq(%d), Sinr(%d)
Line 3703: 	 >> (reportType_periodical )(ReportQuantityRsIdx) accumulation(%d) Rsrp(%d), Rsrq(%d), Sinr(%d)
Line 3709:    >> (reportType_periodical) ReportQuantityRsIdxPresent is not valid
Line 3716:    >> (reportType_periodical) MaxNrofRsIndexesToReport(%d)
Line 3722:    >> (reportType_periodical) MaxNrofRsIndexesToReportPresent is not valid
Line 3742: RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_A1) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3749: RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_A2) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3756: RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_A3) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3763: RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_A4) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3770: RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_A5) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3777: RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_A6) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3781: RrmBlkConnEvalNr::UpdateReportConfigInfo::empty EventIdChoice (%d)
Line 3788:    >> (reportType_eventTriggered) reportType(%d), RsType(%d), IncludeBeamMeas(%d), MaxReportCells(%d)
Line 3792:    >> (reportType_eventTriggered) ReportAddNeighMeasPresent(%d), ReportAddNeighMeas(%d)
Line 3809: 	 >> (reportType_eventTriggered) (ReportQuantityCell) accumulation(%d) Rsrp(%d), Rsrq(%d), Sinr(%d)
Line 3830: 	 >> (reportType_eventTriggered) (ReportQuantityRsIdx) accumulation(%d) Rsrp(%d), Rsrq(%d), Sinr(%d)
Line 3836:    >> (reportType_eventTriggered) ReportQuantityRsIdxPresent is not valid
Line 3843:    >> (reportType_eventTriggered) MaxNrofRsIndexesToReport(%d)
Line 3849:    >> (reportType_eventTriggered) MaxNrofRsIndexesToReportPresent is not valid
Line 3854:    >> (reportType_reportCGI) reportType(%d), CellForWhichToReportCGI(%d)
Line 3858:    >> MeasInfo's reportType is not valid
Line 3868: [N2L] RrmBlkConnEvalNr::UpdateReportConfigInfo::(reportType_periodical) reportType(%d), RsType(%d), IncludeBeamMeas(%d), MaxReportCells(%d)
Line 3873: [N2L] RrmBlkConnEvalNr::UpdateReportConfigInfo::(reportType_periodical) (ReportQuantityCell) Rsrp(%d), Rsrq(%d), Sinr(%d)
Line 3890: [N2L] RrmBlkConnEvalNr::UpdateReportConfigInfo::(NRRRCDB_EventId_B1) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3897: [N2L] UpdateReportConfigInfo::(NRRRCDB_EventId_B2) TriggerQuantity(%d) ReportOnLeave(%d)
Line 3901: [N2L] UpdateReportConfigInfo::empty EventIdChoice (%d)
Line 3906: [N2L] UpdateReportConfigInfo::(reportType_eventTriggered) reportType(%d), RsType(%d), IncludeBeamMeas(%d), MaxReportCells(%d)
Line 3910: [N2L] UpdateReportConfigInfo::(reportType_eventTriggered) ReportAddNeighMeasPresent(%d), ReportAddNeighMeas(%d)
Line 3915: [N2L] UpdateReportConfigInfo::(reportType_eventTriggered) (ReportQuantityCell) Rsrp(%d), Rsrq(%d), Sinr(%d)
Line 3927: RrmBlkConnEvalNr::UpdateReportConfigInfo::MeasInfo's reportType is not valid
Line 3933: RrmBlkConnEvalNr::UpdateReportConfigInfo::Unavailable MeasInfo type(%d)
Line 3941: RrmBlkConnEvalNr::MakeNrReportMsgforAddNeighMeas::ServMeasID(%d)
Line 3970: RrmBlkConnEvalNr::MakeNrReportMsg::RsType : empty
Line 3985: RrmBlkConnEvalNr::MakeNrReportMsg::measResultBestNeighCell is not
Line 3992: RrmBlkConnEvalNr::MakeNrReportMsgforNeighbor
Line 4021:   >>ServingCell is not included in the neighbor list
Line 4025:   >>i(%d) index(%d)
Line 4050: RrmBlkConnEvalNr::MakeNrReportMsgforNeighbor::RsType : empty
Line 4074: RrmBlkConnEvalNr::MakeNrReportMsgforNeighbor::MeasID(%d), numcellsTriggeredList(%d), MaxReportCells(%d)
Line 4116: [N2L] MakeNrReportMsg::MeasID(%d), numcellsTriggeredList(%d), MaxReportCells(%d)
Line 4127: RrmBlkConnEvalNr::MakeNrReportMsg::MeasID(%d)
Line 4148: RrmBlkConnEvalNr::MakeNrReportMsg::NR_RRM_REPORT_NONE
Line 4158: RrmBlkConnEvalNr::MakeNrReportMsg::pIntraFreqInfo is NULL::_eval_
Line 4164: RrmBlkConnEvalNr::MakeNrReportMsg::pServingCellInfo is NULL::_eval_
Line 4177: RrmBlkConnEvalNr::MakeNrReportMsg::ServingObj(%d) is FackObj::_eval_
Line 4190: RrmBlkConnEvalNr::MakeNrReportMsg::empty Serv MeasInfo::_eval_
Line 4225:    >> ServCellId(%d), PhysCellId(%d)
Line 4240: RrmBlkConnEvalNr::MakeNrReportMsg::RsType : empty
Line 4263: RrmBlkConnEvalNr::MakeNrReportMsg::NR_RRM_REPORT_SERVINGCELL
Line 4272: RrmBlkConnEvalNr::MakeNrReportMsg::NR_RRM_REPORT_CGI(%d)
Line 4281: RrmBlkConnEvalNr::MakeNrReportMsg::MakeNrReportMsgforAddNeighMeas is abnomal
Line 4289: RrmBlkConnEvalNr::MakeNrReportMsg::MakeNrReportMsgforNeighbor is abnomal
Line 4297: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - 
Line 4333: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - PCellClsPtr of CellGroup(%d) is NULL
Line 4343: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ServingObj(%d) is FackObj
Line 4353: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - empty IntraFreqInfo
Line 4360: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - IntraFreq Arfcn(%d)
Line 4365:    >>IntraFreq objid(%d)
Line 4375:      ::Periodical_ssb - MeasId(%d) reportConfigId(%d)
Line 4380:      ::Periodical_csi_rs MeasId(%d) reportConfigId(%d)
Line 4388:      ::eventTriggered_ssb MeasId(%d) reportConfigId(%d)
Line 4393:      ::eventTriggered_csi_rs MeasId(%d) reportConfigId(%d)
Line 4405: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ServingCell do not have MeasID
Line 4413:    >>rMsg.MeasResultPerMoList[%d] is nullptr
Line 4427: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), SsbFreqPresent(%d), SsbFreq(%d)
Line 4436: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), RefFreqCsiRsPresent(%d), RefFreqCsiRs(%d)
Line 4446: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - MoCount(%d) MeasResultServCellPresent(%d) PhysCellIdPresent(%d) PhysCellId(%d)
Line 4462: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - MoCount(%d) ResultsSsbCellPresent(%d)
Line 4466: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - RsrpPresent(%d) GetRSRPReportMapping(%d) CellMeasResults.Rsrp(%d)
Line 4470: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - RsrqPresent(%d) GetRSRQReportMapping(%d) CellMeasResults.Rsrq(%d)
Line 4475: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - SinrPresent(%d) GetSINRReportMapping(%d) CellMeasResults.RsSinr(%d)
Line 4479: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ServCellMeasResults(CellID(%d) : RSTYPE_SSB) is not Valid
Line 4495: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - MoCount(%d) ResultsCsiRsCellPresent(%d)
Line 4499: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - RsrpPresent(%d) GetRSRPReportMapping(%d) CellMeasResults.Rsrp(%d)
Line 4503: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - RsrqPresent(%d) GetRSRQReportMapping(%d) CellMeasResults.Rsrq(%d)
Line 4508: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - SinrPresent(%d) GetSINRReportMapping(%d) CellMeasResults.RsSinr(%d)
Line 4512: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ServCellMeasResults(CellID(%d) : RSTYPE_CSIRS) is not Valid
Line 4518: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ReportQuantityRsIdxPresent(%d)
Line 4528: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - validNrOfRsIndex(%d)
Line 4540: (CellID(%d), beam_index(%d) : RSTYPE_SSB) is Valid
Line 4559:    >>MoCount(%d) Ssb_validCount(%d) SsbResultsPresent(%d) SsbIndex(%d)
Line 4564:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrp(%d)
Line 4569:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4574:    >>SinrPresent(%d) GetSINRReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4580: (CellID(%d), beam_index(%d) : RSTYPE_SSB) is not Valid
Line 4584: (CellID(%d), beam_index(%d) : RSTYPE_CSIRS) is Valid
Line 4601:    >>MoCount(%d) CsiRs_validCount(%d) CsiRsResultsPresent(%d) CsiRsIndex(%d)
Line 4606:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrp(%d)
Line 4611:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4616:    >>SinrPresent(%d) GetSINRReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4622: (CellID(%d), beam_index(%d) : RSTYPE_CSIRS) is not Valid
Line 4637: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - RsIndexResultsPresent(%d)
Line 4644: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ResultsSsbIndexCnt(%d) ResultsCsiRsIndexCnt(%d)
Line 4659: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - continue. pCellInfo is NULL. making NeighCellList
Line 4667: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - continue. pCellInfo is Sevingcell. Arfcn(%d) CellId(%d) SubCarrierSpacing(%d)
Line 4671: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - NeighCell PhysCellId(%d)
Line 4677: CellMeasResults(CellID(%d) : RSTYPE_SSB) is Valid
Line 4690:    >>MoCount(%d) i_cell(%d) index(%d) ResultsSsbCellPresent(%d)
Line 4694:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) CellMeasResults.Rsrp(%d)
Line 4698:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) CellMeasResults.Rsrq(%d)
Line 4703:    >>SinrPresent(%d) GetSINRReportMapping(%d) CellMeasResults.RsSinr(%d)
Line 4707: CellMeasResults(CellID(%d) : RSTYPE_SSB) is not Valid
Line 4712: CellMeasResults(CellID(%d) : RSTYPE_CSIRS) is Valid
Line 4724:    >>MoCount(%d) i_cell(%d) index(%d) ResultsCsiRsCellPresent(%d)
Line 4728:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) CellMeasResults.Rsrp(%d)
Line 4732:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) CellMeasResults.Rsrq(%d)
Line 4737:    >>SinrPresent(%d) GetSINRReportMapping(%d) CellMeasResults.RsSinr(%d)
Line 4741: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - CellMeasResults(CellID(%d) : RSTYPE_CSIRS) is not Valid
Line 4753: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - validNrOfRsIndex(%d)
Line 4765: (CellID(%d), beam_index(%d) : RSTYPE_SSB) is Valid
Line 4786:    >>MoCount(%d) Ssb_validCount(%d) SsbResultsPresent(%d) SsbIndex(%d)
Line 4791:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrp(%d)
Line 4796:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4801:    >>SinrPresent(%d) GetSINRReportMapping(%d) MeasuredResultNr_L3Filtered.RsSinr(%d)
Line 4807: (CellID(%d), beam_index(%d) : RSTYPE_SSB) is not Valid
Line 4812: (CellID(%d), beam_index(%d) : RSTYPE_CSIRS) is Valid
Line 4830:    >>MoCount(%d) CsiRs_validCount(%d) CsiRsResultsPresent(%d) CsiRsIndex(%d)
Line 4835:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrp(%d)
Line 4840:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4845: 	>>SinrPresent(%d) GetSINRReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 4852: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - (CellID(%d), beam_index(%d) : RSTYPE_CSIRS) is not Valid
Line 4872: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - RsIndexResultsPresent(%d)
Line 4878: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - ResultsSsbIndexCnt(%d) ResultsCsiRsIndexCnt(%d)
Line 4882: RrmBlkConnEvalNr::MakeNrMeasResultCnfIntraevalrc - MeasResultNeighCellCnt(%d)
Line 4892: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - 
Line 4920: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - MoCount is not valid - MoCount(%d) NRRRCDB_MAX_FREQ(%d)
Line 4935: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - PCellClsPtr of CellGroup(%d) is NULL
Line 4949: InterFreq Arfcn(%d)
Line 4954:    >>InterFreq objid(%d)
Line 4957:    >>InterFreq(%d) objid(%d) is not valid. IntraFreq objid(%d)
Line 4972:      ::Periodical_ssb - MeasId(%d) reportConfigId(%d)
Line 4977:      ::Periodical_csi_rs MeasId(%d) reportConfigId(%d)
Line 4985:      ::eventTriggered_ssb MeasId(%d) reportConfigId(%d)
Line 4990:      ::eventTriggered_csi_rs MeasId(%d) reportConfigId(%d)
Line 4999: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - InterFreq(%d) objid(%d) does not have MeasInfo
Line 5005:    >>rMsg.MeasResultPerMoList[%d] is nullptr
Line 5017: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), SsbFreqPresent(%d), SsbFreq(%d)
Line 5026: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - MoCount(%d), MeasID(%d), ObjectId(%d), RefFreqCsiRsPresent(%d), RefFreqCsiRs(%d)
Line 5041: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - pCellInfoe is NULL
Line 5050: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - pCellInfo is Sevingcell Arfcn(%d) CellId(%d) SubCarrierSpacing(%d)
Line 5054: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - PhysCellId(%d)
Line 5060: CellMeasResults(CellID(%d) : RSTYPE_SSB) is not Valid
Line 5072:    >>MoCount(%d) i_cell(%d) index(%d) ResultsSsbCellPresent(%d)
Line 5076:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) CellMeasResults.Rsrp(%d)
Line 5080:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) CellMeasResults.Rsrq(%d)
Line 5085:    >>SinrPresent(%d) GetSINRReportMapping(%d) CellMeasResults.RsSinr(%d)
Line 5089: CellMeasResults(CellID(%d) : RSTYPE_SSB) is not Valid
Line 5094: CellMeasResults(CellID(%d) : RSTYPE_CSIRS) is Valid
Line 5106:    >>MoCount(%d) i_cell(%d) index(%d) ResultsCsiRsCellPresent(%d)
Line 5110:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) CellMeasResults.Rsrp(%d)
Line 5114:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) CellMeasResults.Rsrq(%d)
Line 5119:    >>SinrPresent(%d) GetSINRReportMapping(%d) CellMeasResults.Sinr(%d)
Line 5123: CellMeasResults(CellID(%d) : RSTYPE_CSIRS) is not Valid
Line 5134: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - validNrOfRsIndex(%d)
Line 5146: (*pRSIndexMeasResults)(CellID(%d), beam_index(%d) : RSTYPE_SSB) is Valid
Line 5167:    >>MoCount(%d) Ssb_validCount(%d) SsbResultsPresent(%d) SsbIndex(%d)
Line 5172:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrp(%d)
Line 5177:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 5182:    >>SinrPresent(%d) GetSINRReportMapping(%d) MeasuredResultNr_L3Filtered.Sinr(%d)
Line 5188: (*pRSIndexMeasResults)(CellID(%d), beam_index(%d) : RSTYPE_SSB) is not Valid
Line 5193: (*pRSIndexMeasResults)(CellID(%d), beam_index(%d) : RSTYPE_CSIRS) is Valid
Line 5211:    >>MoCount(%d) CsiRs_validCount(%d) CsiRsResultsPresent(%d) CsiRsIndex(%d)
Line 5216:    >>RsrpPresent(%d) GetRSRPReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrp(%d)
Line 5221:    >>RsrqPresent(%d) GetRSRQReportMapping(%d) MeasuredResultNr_L3Filtered.Rsrq(%d)
Line 5226:    >>SinrPresent(%d) GetSINRReportMapping(%d) MeasuredResultNr_L3Filtered.Sinr(%d)
Line 5232: (*pRSIndexMeasResults)(CellID(%d), beam_index(%d) : RSTYPE_CSIRS) is not Valid
Line 5252: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - RsIndexResultsPresent(%d)::_evalrc_
Line 5258: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - ResultsSsbIndexCnt(%d) ResultsCsiRsIndexCnt(%d)::_evalrc_
Line 5263: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - MeasResultNeighCellCnt(%d)::_evalrc_
Line 5268: RrmBlkConnEvalNr::MakeNrMeasResultCnfNonIntraevalrc - Max Freq! MoCount(%d) NRRRCDB_MAX_FREQ(%d)
Line 5290: RrmBlkConnEvalNr::MakeNrMeasResultCnfMsgevalrc - 
Line 5310: RrmBlkConnEvalNr::UpdateUserVarMeasReportList
Line 5325: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::ServingCell is not
Line 5335: RrmBlkConnEvalNr::UpdateUserVarMeasReportList:: %d targetMeasInfo, MeasObjectId is NULL
Line 5344: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::empty IntraFreqInfo::_eval_
Line 5348: IntraFreq Arfcn(%d)::_eval_
Line 5355: (%d)objid
Line 5370: InterFreq Arfcn(%d)::_eval_
Line 5377: (%d)objid
Line 5396: RrmBlkConnEvalNr::UpdateUserVarMeasReportList:: %d targetMeasInfo, pFreqInfo is NULL
Line 5416: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::RRM_SET_TYPE_IDLISTEDCELLSET:: %d[targetMeasInfo], %d[numOfCellsInReportList] is NRRRM_MAX_CELL_INDEX
Line 5420: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::RRM_SET_TYPE_IDLISTEDCELLSET %d[Arfcn] %d[CellId] %d[SubCarrierSpacing]
Line 5440: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::RRM_SET_TYPE_IDDETECTEDCELLSET:: %d[targetMeasInfo], %d[numOfCellsInReportList] is NRRRM_MAX_CELL_INDEX
Line 5444: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::RRM_SET_TYPE_IDDETECTEDCELLSET %d[Arfcn] %d[CellId] %d[SubCarrierSpacing]
Line 5451: RrmBlkConnEvalNr::UpdateUserVarMeasReportList::numOfCellsInReportList:: %d[numOfCellsInReportList]
Line 5473: RrmBlkConnEvalNr::GetmeasResultBestNeighCell::ServingCell is not
Line 5480: RrmBlkConnEvalNr::GetmeasResultBestNeighCell::ServingCell do not have MeasID
Line 5489: RrmBlkConnEvalNr::GetmeasResultBestNeighCell::empty IntraFreqInfo
Line 5562: RrmBlkConnEvalNr::GetMaxCell::cell is not valid
Line 5610: RrmBlkConnEvalNr::GetMaxCell::Sorting Error. ReportConfigNR_Rsrp(%d), ReportConfigNR_Rsrq(%d), ReportConfigNR_Sinr(%d), (CellID(%d) isValid_I(%d)), (CellID(%d) isValid_J(%d))
Line 5627: RrmBlkConnEvalNr::NrRrm_EvaluatePCellMeasureResult::_eval_
Line 5643: RrmBlkConnEvalNr::NrRrm_EvaluatePCellMeasureResult - PCellClsPtr of CellGroup(%d) is NULL::_eval_
Line 5652: RrmBlkConnEvalNr::NrRrm_EvaluatePCellMeasureResult - MeasInfo for ObjId(%d) is not found::_eval_
Line 5682: RrmBlkConnEvalNr::NrRrm_EvaluateSCellServingMeasureResult::_eval_
Line 5710:    >> SCell (Arfcn %d SCS %d PhyCellId %d) Evaluation 
Line 5719: 	 >> MeadId[%d] MeasObjId[%d]
Line 5749: RrmBlkConnEvalNr::ProcMeasResult - reportType has unknown choice value (%d)::_eval_
Line 5763: RrmBlkConnEvalNr::ProcMeasResult - pServCellGroupInfoNr is NULL::_eval_
Line 5771: RrmBlkConnEvalNr::NrRrm_EvaluateSCellMeasInfo::_scell_eval_
Line 5799:    >> pFreqInfo is invalid!!!!
Line 5806: IntraFreq Arfcn(%d)::_eval_
Line 5826:    >> SCell list is empty!!!! Nothing to do evaluate, just return in this function!::_scell_eval_
Line 5835: RrmBlkConnEvalNr::NrRrm_EvaluateInterNCellMeasureResult::ServingCell is not::_scell_eval_
Line 5846:    >> NRRRCDB_EventId_A3 Evaluation::_scell_eval_
Line 5852: 	   :: InterFreq IDLISTEDCELLSET is NULL::_scell_eval_
Line 5865: 	 >> IDDETECTEDCELLSET::_scell_eval_
Line 5870: 	   :: InterFreq IDDETECTEDCELLSET is NULL::_scell_eval_
Line 5887:    >> NRRRCDB_EventId_A4 Evaluation::_scell_eval_
Line 5888:    >> IDLISTEDCELLSET::_scell_eval_
Line 5894:      :: InterFreq IDLISTEDCELLSET is NULL::_scell_eval_
Line 5907:    >> IDDETECTEDCELLSET::_scell_eval_
Line 5912:      :: InterFreq IDDETECTEDCELLSET is NULL::_scell_eval_
Line 5929: 	 >> NRRRCDB_EventId_A5 Evaluation::_scell_eval_
Line 5945: 	 >> IntraFreq Arfcn(%d) sQOffset %d::_scell_eval_
Line 5952: 	 >> ServingCell is invalid::_scell_eval_
Line 5958: 	 >> MeasInfoId(%d) ObjId(%d) ReportConfigId(%d)::_scell_eval_
Line 5961: 	 >> SCell(Arfcn %d, SCS %d, PhyCellId %d) ServCell(Arfcn %d, SCS %d, PhyCellId %d)::_scell_eval_
Line 5975:    >> NRRRCDB_EventId_A6 Evaluation::_scell_eval_
Line 5977:    >> IDLISTEDCELLSET::_scell_eval_
Line 5982:      :: IDLISTEDCELLSET is NULL::_scell_eval_
Line 5990:    >> SCell MeasInfoId(%d) ObjId(%d) ReportConfigId(%d)::_scell_eval_
Line 5993:    >> NCell(Arfcn %d, SCS %d, PhyCellId %d) SCell(Arfcn %d, SCS %d, PhyCellId %d)::_scell_eval_
Line 6001:    >> SCellFreq(%d) sQOffset %d::_scell_eval_
Line 6006: 	 >> Invalid pSCellFreqInfo for SsbAbsFreq(%d) SCS(%d)::_scell_eval_
Line 6019:    >> IDDETECTEDCELLSET::_scell_eval_
Line 6024:      :: InterFreq IDDETECTEDCELLSET is NULL::_scell_eval_
Line 6032:    >> SCell MeasInfoId(%d) ObjId(%d) ReportConfigId(%d)::_scell_eval_
Line 6035:    >> NCell(Arfcn %d, SCS %d, PhyCellId %d) SCell(Arfcn %d, SCS %d, PhyCellId %d)::_scell_eval_
Line 6043:    >> SCellFreq(%d) sQOffset %d::_scell_eval_
Line 6048: 	 >> Invalid pSCellFreqInfo for SsbAbsFreq(%d) SCS(%d)::_scell_eval_
Line 6073: RrmBlkConnEvalNr::NrRrm_EvaluateSCellNCellMeasureResult::_eval_
Line 6106:    >> SCellFreq list is empty!!!! Nothing to do evaluate, just return in this function!::_scell_eval_
Line 6112:    >> GetFirstSCellFreqPtr return NULL!!!! There are no SCellFreq::_scell_eval_
Line 6116:    >> SCellFreq Arfcn(%d)::_scell_eval_
Line 6124:      :: objid(%d)::_scell_eval_
Line 6151: RrmBlkConnEvalNr::NrRrm_EvaluateIntraNCellMeasureResult::_eval_
Line 6174: RrmBlkConnEvalNr::NrRrm_EvaluateIntraNCellMeasureResult - PCellClsPtr of CellGroup(%d) is NULL::_eval_
Line 6183: RrmBlkConnEvalNr::NrRrm_EvaluateIntraNCellMeasureResult - PCellFreqPtr of MasterCellGroupId is invalid::_eval_
Line 6187: IntraFreq Arfcn(%d)::_eval_
Line 6193: IntraFreq objid(%d)::_eval_
Line 6209: RrmBlkConnEvalNr::NrRrm_EvaluateIntraNCellMeasureResult - MeasId(%d) EventId(%d) skip neighborcell
Line 6219: IntraFreq IDLISTEDCELLSET::_eval_
Line 6224: IntraFreq IDLISTEDCELLSET is NULL::_eval_
Line 6251: IntraFreq IDDETECTEDCELLSET::_eval_
Line 6255: IntraFreq IDDETECTEDCELLSET is NULL::_eval_
Line 6290: RrmBlkConnEvalNr::NrRrm_EvaluateInterNCellMeasureResult::_eval_
Line 6315: RrmBlkConnEvalNr::NrRrm_EvaluateInterNCellMeasureResult::ServingCell is not::_eval_
Line 6322: IntraFreq Arfcn(%d)::_eval_
Line 6336: InterFreq Arfcn(%d)::_eval_
Line 6342: InterFreq objid(%d)::_eval_
Line 6358: RrmBlkConnEvalNr::NrRrm_EvaluateIntraNCellMeasureResult - MeasId(%d) EventId(%d) skip neighborcell
Line 6366: InterFreq IDLISTEDCELLSET::_eval_
Line 6371: InterFreq IDLISTEDCELLSET is NULL::_eval_
Line 6394: Unexpected value for pMeasInfo->ReportConfig.ReportConfigNR.Choice (%d)::_eval_
Line 6402: InterFreq IDDETECTEDCELLSET::_eval_
Line 6407: InterFreq IDDETECTEDCELLSET is NULL::_eval_
Line 6445: RrmBlkConnEvalNr::ProcMeasResult
Line 6462: RrmBlkConnEvalNr::ProcMeasResult - rArfcn(%d) Intra Arfcn(%d)
Line 6468: RrmBlkConnEvalNr::ProcMeasResult - FixedPointFreq is setting
Line 6474: RrmBlkConnEvalNr::ProcMeasResult - PCellFreqPtr of MasterCellGroupId is invalid::_eval_
Line 6482: RrmBlkConnEvalNr::ProcMeasResult - RegFIXEDCellId(%d) ServingCellId(%d)
Line 6485: RrmBlkConnEvalNr::ProcMeasResult - rArfcn(%d) ServCellInfoArfcn(%d)
Line 6494: RrmBlkConnEvalNr::ProcMeasResult - FixedPoint(%d) is setting
Line 6503: RrmBlkConnEvalNr::ProcMeasResult - FixedPoint(%d) is setting
Line 6510: RrmBlkConnEvalNr::ProcMeasResult - PCellClsPtr of CellGroup(%d) is NULL::_eval_
Line 6513: RrmBlkConnEvalNr::ProcMeasResult - FixedPointFreq(%d) FixedPointPcid(%d)
Line 6531: RrmBlkConnEvalNr::ProcMeasResult - FixedPoint(%d) s-measureconfig(%d) ue can not perform measurements on non-serving cells
Line 6550: RrmBlkConnEvalNr::ProcMeasResult - FixedPoint(%d) ue can not perform measurements on non-serving Eutra cells
Line 6561: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_ENTER::_eval_
Line 6585: RrmBlkConnEvalNr::UpdateVarMeasurementReports::reportTriggered is True::MeasID(%d), CellID(%d), numberOfReportsSent(%d)::_eval_
Line 6592: ReportAmount is exhausted. Sent all quantities::MeasID(%d), CellID(%d), numberOfReportsSent(%d)::_eval_
Line 6597: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_STAY::_eval_
Line 6621: RrmBlkConnEvalNr::UpdateVarMeasurementReports::reportTriggered is True::MeasID(%d), CellID(%d), numberOfReportsSent(%d)::_eval_
Line 6627: ReportAmount is exhausted. Sent all quantities::MeasID(%d), CellID(%d), numberOfReportsSent(%d)::_eval_
Line 6632: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_LEAVE::_eval_
Line 6642: RrmBlkConnEvalNr::UpdateVarMeasurementReports::MeasID(%d), CellID(%d) Can not remove cell in ReportList::_eval_
Line 6647: RrmBlkConnEvalNr::UpdateVarMeasurementReports::numOfCellsInReportList(%d)::_eval_
Line 6654: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_ENTER::reportTriggered(%d)::MeasID(%d), CellID(%d)-::_eval_
Line 6658: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_STAY::reportTriggered(%d)::MeasID(%d), CellID(%d)-::_eval_
Line 6662: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_LEAVE::reportTriggered(%d)::MeasID(%d), CellID(%d)-::_eval_
Line 6666: RrmBlkConnEvalNr::UpdateVarMeasurementReports::NR_RRM_EVENT_NONE::eventTriggered(%d)-::_eval_
Line 6673: RrmBlkConnEvalNr::RemoveCellInReportListonReportOnLeave::MeasID(%d)
Line 6683: RrmBlkConnEvalNr::RemoveCellInReportListonReportOnLeave - cellsTriggeredList[%d] pCellInfo is NULL. 
Line 6693: RrmBlkConnEvalNr::RemoveCellInReportList::MeasID(%d)
Line 6711: RrmBlkConnEvalNr::RemoveCellInReportList::MeasID(%d), CellID(%d), after numOfCellsInReportList(%d)
Line 6731: RrmBlkConnEvalNr::RemoveCellInReportList - VarMeasReportList.ReportOnLeave[%d] is true. MeasID(%d), CellID(%d)
Line 6739: RrmBlkConnEvalNr::RemoveCellInReportList::MeasID(%d), CellID(%d), after numOfCellsInReportList(%d)
Line 6765: RrmBlkConnEvalNr::CheckCellInReportList::MeasID(%d)
Line 6786: RrmBlkConnEvalNr::InitReportStatus::MeasID(%d)
Line 6835: RrmBlkConnEvalNr::GetPeriodicalReportIntervalMs::ReportInterval value(%d), PeriodicalReportIntervalMs[ReportInterval](%d)
Line 6840: RrmBlkConnEvalNr::GetPeriodicalReportIntervalMs::error ReportInterval value(%d), MeasID(%d)
Line 6859: RrmBlkConnEvalNr::GetPeriodicalReportIntervalMs::ReportInterval value(%d), PeriodicalReportIntervalMs[ReportInterval](%d)
Line 6864: RrmBlkConnEvalNr::GetPeriodicalReportIntervalMs::error ReportInterval value(%d), MeasID(%d)
Line 6870: RrmBlkConnEvalNr::GetPeriodicalReportIntervalMs::Unavailable MeasInfo type(%d)
Line 6890: Unexpected value for rMeasInfo.ReportConfig.ReportConfigNR.Choice(%d)
Line 6906: Unexpected value for rMeasInfo.ReportConfig.ReportConfigInterRAT.Choice(%d)
Line 6917: RrmBlkConnEvalNr::GetEventTriggeredReportAmount::ReportAmount value(%d), EventTriggeredReportAmount[ReportAmount](%d), numberOfReportsSent(%d)[N2L]
Line 6919: RrmBlkConnEvalNr::GetEventTriggeredReportAmount::result_s32(%d)[N2L]
Line 6924: RrmBlkConnEvalNr::GetEventTriggeredReportAmount::error ReportAmount value(%d), MeasID(%d)[N2L]
Line 6936: RrmBlkConnEvalNr::UpdateIdDetectedCellSet - intra:%d[bool]
Line 6950: 	>>BEFORE UpdateIdDetectedCellSet
Line 6957: 	>>Please check Freq and MO
Line 6962: 	>>AFTER UpdateIdDetectedCellSet
Line 6968: 	>>intra - No Intra freq
Line 6988: 	>>BEFORE UpdateIdDetectedCellSet
Line 6995: 	>>Please check Freq and MO
Line 7000: 	>>AFTER UpdateIdDetectedCellSet
Line 7012: 	>>InterFreq loop complete
Line 7018: 	>>Inter - No Inter freq
Line 7050: RrmBlkConnEvalNr::ProcDropCell
Line 7060:    >>try to find first Cellinfo in next MO
Line 7071:    >>Target Threshold:%d[/100dBm] Rsrp:%d[/100dBm] RsSinr:%d[/100dB] L3 validation:(bool)%d SsbExist:(bool)%d
Line 7084:      ::MeasInfo for ObjId(%d) is not found
Line 7094:      ::TimeToTrigger cell(%d) is deleted
Line 7109:      ::Cell removed in RRM_SET_TYPE_IDDETECTEDCELLSET
Line 7124:      ::Cell moved to RRM_SET_TYPE_UNIDLISTEDCELLSET
Line 7128:      ::Wrong ListType:%d in ProcDrop 
Line 7135:      ::Cell is not removed, get next cell in cell set.
Line 7162: RrmBlkConnEvalNr::AddCellToTimeToTriggerList::SsbFrequency(%d), CellId(%d), State.Prev(%d)
Line 7165: RrmBlkConnEvalNr::AddCellToTimeToTriggerList::Current numOfCellListTimeToTrigger(%d)
Line 7169: RrmBlkConnEvalNr::AddCellToTimeToTriggerList::MeasID(%d), CellID(%d), error numOfCellListTimeToTrigger
Line 7188: RrmBlkConnEvalNr::RemoveCellToTimeToTriggerList::MeasID(%d), CellID(%d)
Line 7192: RrmBlkConnEvalNr::RemoveCellToTimeToTriggerList::Current numOfCellListTimeToTrigger(%d)
Line 7196: RrmBlkConnEvalNr::RemoveCellToTimeToTriggerList::MeasID(%d), CellID(%d), error numOfCellListTimeToTrigger
Line 7222: pMeas or pTargetCell NULL
Line 7226: RrmBlkConnEvalNr::CheckTimeToTriggerEutra::MeasID(%d)
Line 7235: Before CheckTimeToTriggerEutra::NR_RRM_EVENT_ENTER::MeasID(%d), CellID(%d)::_eval_Eutra
Line 7242: State.Prev(NR_RRM_EVENT_LEAVE)
Line 7243: RrmBlkConnEvalNr::CheckTimeToTriggerEutra - TimeToTrigger(NR_RRM_EVENT_LEAVE) cell(%d) is deleted
Line 7259: NR_RRM_EVENT_ENTER::Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7265: NR_RRM_EVENT_NONE - Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7282: NR_RRM_EVENT_ENTER::ReportConfigNR TimeToTrigger(%d)
Line 7292: Before CheckTimeToTriggerEutra::NR_RRM_EVENT_STAY::MeasID(%d), CellID(%d)::_eval_Eutra
Line 7306: NR_RRM_EVENT_STAY::Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7312: NR_RRM_EVENT_NONE::Real TimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7319: [Check] Need to check TimeDiff. Previous one is longer than latest
Line 7326: State.Prev(NR_RRM_EVENT_LEAVE)
Line 7330: NR_RRM_EVENT_LEAVE - Real CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7331: RrmBlkConnEvalNr::CheckTimeToTriggerEutra - TimeToTrigger(NR_RRM_EVENT_LEAVE) cell(%d) is deleted
Line 7337: NR_RRM_EVENT_NONE - Real NR_RRM_EVENT_LEAVE CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7343: Invaild case - State.Prev(%d) -::_eval_
Line 7354: Before CheckTimeToTriggerEutra::NR_RRM_EVENT_LEAVE::MeasID(%d), CellID(%d)::_eval_Eutra
Line 7363: State.Prev(NR_RRM_EVENT_ENTER)
Line 7364: RrmBlkConnEvalNr::CheckTimeToTriggerEutra - TimeToTrigger(NR_RRM_EVENT_ENTER) cell(%d) is deleted
Line 7370: NR_RRM_EVENT_ENTER::ReportConfigNR TimeToTrigger(%d) CellListTimeToTrigger[].TimerExpired(%d)
Line 7375: TimeToTrigger(NR_RRM_EVENT_LEAVE) start - TimeToTrigger(%d) CellListTimeToTrigger[].TimerExpired(%d)
Line 7382: State.Prev(NR_RRM_EVENT_LEAVE)
Line 7386: NR_RRM_EVENT_LEAVE - Real CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7387: RrmBlkConnEvalNr::CheckTimeToTriggerEutra - TimeToTrigger(NR_RRM_EVENT_LEAVE) cell(%d) is deleted
Line 7393: NR_RRM_EVENT_NONE - Real NR_RRM_EVENT_LEAVE CellListTimeToTrigger(%d), ReportConfigNR TimeToTrigger(%d)
Line 7399: Invaild case - State.Prev(%d) -::_eval_
Line 7400: RrmBlkConnEvalNr::CheckTimeToTriggerEutra - TimeToTrigger cell(%d) is deleted
Line 7410: It is not Arfcn(%d) cell(%d) in TimeToTrigger
Line 7415: RrmBlkConnEvalNr::CheckTimeToTriggerEutra::empty EventStatus
Line 7422: After CheckTimeToTriggerEutra::NR_RRM_EVENT_ENTER - MeasID(%d), CellID(%d)::_eval_Eutra
Line 7426: After CheckTimeToTriggerEutra::NR_RRM_EVENT_STAY - MeasID(%d), CellID(%d)::_eval_Eutra
Line 7430: After CheckTimeToTriggerEutra::NR_RRM_EVENT_LEAVE - MeasID(%d), CellID(%d)::_eval_Eutra
Line 7434: After CheckTimeToTriggerEutra::NR_RRM_EVENT_NONE - EventStatus(%d)-::_eval_
Line 7445: NULL ptr
Line 7449: RrmBlkConnEvalNr::NrRrm_CheckEutraCellEventTrigger::MeasID(%d)
Line 7496: [N2L] Apply RSRP as default because of invalid threshold
Line 7518: [N2L] Mn(%d), Ofn(%d), Ocn(%d), Hys(%d), Threshold_Top(%d), Threshold_bottom(%d)
Line 7582: [Check] Apply RSRP as default because of invalid threshold
Line 7605: [N2L] Mp(%d), Hys actual(%d), NR_RRM_HYSTERESIS_TR(%d), Threshold_bottom(%d), Threshold_top(%d)
Line 7606: [N2L] Mn(%d), Ofn(%d), Ocn(%d), Hys actual(%d) Threshold2_bottom(%d), Threshold2_top(%d)
Line 7613: [N2L]After CheckNeighborCellEventTrigger::NR_RRM_EVENT_ENTER::MeasID(%d), NCellID(%d), SpCellID(%d)
Line 7617: [N2L]After CheckNeighborCellEventTrigger::NR_RRM_EVENT_STAY::MeasID(%d), NCellID(%d), SpCellID(%d)
Line 7621: [N2L]After CheckNeighborCellEventTrigger::NR_RRM_EVENT_LEAVE::MeasID(%d), NCellID(%d), SpCellID(%d)
Line 7625: [N2L]After::CheckNeighborCellEventTrigger::NR_RRM_EVENT_NONE::EventStatus(%d)
Line 7641: RrmBlkConnEvalNr::SetCellMeasResultsEutra::RsType(SSB), Quantity(Rsrp), Rsrp(%d), RSRPReportMapping(%d)
Line 7649: RrmBlkConnEvalNr::SetCellMeasResultsEutra::RsType(SSB), Quantity(Rsrq), Rsrq(%d), RSRQReportMapping(%d)
Line 7657: RrmBlkConnEvalNr::SetCellMeasResultsEutra::RsType(SSB), Quantity(Sinr), Sinr(%d), RSRQReportMapping(%d)
Line 7662: RrmBlkConnEvalNr::SetCellMeasResultsEutra::Quantity(empty) Set default Quantity(Rsrp)
Line 7666: Rsrp(%d), RSRPReportMapping(%d)
Line 7674: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::RsType %d
Line 7693: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::Error numOfCellsInReportList : %d
Line 7748: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::CellMeasResults is invalid
Line 7762: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::EventIdChoice is invalid
Line 7797: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::sortingQuantity is invalid
Line 7802: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::CellMeasResults is invalid
Line 7807: RrmBlkConnEvalNr::SortCellsTriggeredListEutra::Choice is NRRRCDB_ReportConfigNR_reportType_reportCGI
Line 7838: [N2L]Start Evaluation EUTRA Freq Arfcn(%d)
Line 7841: [N2L]EUTRA Freq objid(%d)
Line 7846: [N2L] MeasID[%d] Check EUTRA FREQ IDLISTED CELLSET
Line 7851:    >>[N2L]EutraCellInfo IDLISTED CELLSET is NULL
Line 7867:    >>[N2L] Unexpected value for pMeasInfo->ReportConfig.ReportConfigInterRAT.Choice (%d)
Line 7876: [N2L] MeasId[%d] Check EUTRA IDDETECTED CELLSET
Line 7881:    >>[N2L] EUTRA IDDETECTED CELLSET is NULL
Line 7912:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::NR_RRM_EVENT_ENTER
Line 7917:      ::[N2L]NRRRCDB_ReportConfigInterRAT_reportType_periodical
Line 7923:      ::[N2L]NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
Line 7936:      ::[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::reportTriggered is True::MeasID(%d), CellID(%d), numberOfReportsSent(%d)
Line 7942:      ::[N2L]ReportAmount is exhausted. Sent all quantities::MeasID(%d), CellID(%d), numberOfReportsSent(%d)
Line 7947:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::NR_RRM_EVENT_STAY
Line 7952:      ::[N2L]NRRRCDB_ReportConfigInterRAT_reportType_periodical
Line 7970:      ::[N2L]reportTriggered is True::MeasID(%d), CellID(%d), numberOfReportsSent(%d)
Line 7976:      ::[N2L]ReportAmount is exhausted. Sent all quantities::MeasID(%d), CellID(%d), numberOfReportsSent(%d)
Line 7981:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::NR_RRM_EVENT_LEAVE
Line 7987:      ::[N2L]MeasID(%d), CellID(%d) Can not remove cell in ReportList
Line 7996:      ::[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::numOfCellsInReportList(%d)
Line 8003:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::NR_RRM_EVENT_ENTER::reportTriggered(%d)::MeasID(%d), CellID(%d)
Line 8007:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::NR_RRM_EVENT_STAY::reportTriggered(%d)::MeasID(%d), CellID(%d)
Line 8011:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::NR_RRM_EVENT_LEAVE::reportTriggered(%d)::MeasID(%d), CellID(%d)
Line 8015:    >>[N2L]RrmBlkConnEvalNr::UpdateVarMeasurementEutra::eventTriggered(%d)
Line 8022: RrmBlkConnEvalNr::RemoveCellInReportListEutra::MeasID(%d)
Line 8034: RrmBlkConnEvalNr::RemoveCellInReportListEutra::MeasID(%d), CellID(%d)
Line 8055: RrmBlkConnEvalNr::IsCheckCellInReportListEutra::MeasID(%d)
Line 8075: RrmBlkConnEvalNr::TimeToTriggerState
Line 8084:    >>MeasID(%d)
Line 8089:      ::CellId(%d)'s TTT is not TimerExpired
Line 8101: GetActualQuantityConfigIndex - MeasObjectId:%d
Line 8107:    >>QuantityConfigIndex:%d but to apply array, value -1
Line 8112:    >>Error value of QuantityConfigIndex:%d forced set as 0
Line 8122: RrmBlkConnEvalNr::UpdateVarlistFromCellset - MeasID(%d)
Line 8139: RrmBlkConnEvalNr::UpdateVarlistFromCellset::MeasID(%d), numcellsTriggeredList(%d), MaxReportCells(%d)
Line 8146: RrmBlkConnEvalNr::UpdateVarlistFromCellset - ERROR) pCellInfo(cellsTriggeredList[%d]) is NULL. but numOfCellsInReportList(%d)
Line 8149:    >>[%d] numOfCellsInReportList(%d) CellID(%d)
Line 8162: RrmBlkConnEvalNr::UpdateVarlistFromCellset - TimeToTrigger cell(%d) is deleted
Line 8178: [N2L] UpdateVarlistFromCellset::MeasID(%d), numcellsTriggeredList(%d), MaxReportCells(%d)
Line 8185: [N2L] UpdateVarlistFromCellset - ERROR) pCellInfo(cellsTriggeredList[%d]) is NULL. but numOfCellsInReportList(%d)
Line 8188: 	>>[%d] numOfCellsInReportList(%d) CellID(%d)
Line 8201: RrmBlkConnEvalNr::UpdateVarlistFromCellset - TimeToTrigger cell(%d) is deleted
Line 8228:    >>[N2L] Arfcn(%d)
Line 8233:    >>[N2L] OBJ ID[%d] : InterFreq IDLISTEDCELLSET
Line 8238:    >>[N2L] IRAT EUTRA IDLISTEDCELLSET is NULL
Line 8246:    >>[N2L] IRAT EUTRA Find in InterFreq IDLISTED CELLSET
Line 8253:    >>[N2L] IRAT EUTRA IDDETECTED CELLSET
Line 8258:    >>[N2L] IRAT EUTRA IDDETECTED CELLSET is NULL
Line 8266:    >>[N2L] IRAT EUTRA Find in IDLISTEDCELLSET
Line 8285: RrmBlkConnEvalNr::IsCheckMatchingFromCellSet
Line 8298: RrmBlkConnEvalNr::IsCheckMatchingFromCellSet - pCellInfo is NULL
Line 8302: RrmBlkConnEvalNr::IsCheckMatchingFromCellSet - TargetCellID(%d) objid(%d) rsType(%d)
Line 8310: RrmBlkConnEvalNr::UpdateVarlistFromCellset::pIntraFreqInfo is NULL::_eval_
Line 8316: RrmBlkConnEvalNr::UpdateVarlistFromCellset::pServingCellInfo is NULL::_eval_
Line 8323: Find in pServingCellInfo
Line 8330: IntraFreq IDLISTEDCELLSET
Line 8335: IntraFreq IDLISTEDCELLSET is NULL
Line 8343: Find in IntraFreq IDLISTEDCELLSET
Line 8351: IntraFreq IDDETECTEDCELLSET::_eval_
Line 8355: IntraFreq IDDETECTEDCELLSET is NULL
Line 8362: Find in IntraFreq IDDETECTEDCELLSET
Line 8374: InterFreq Arfcn(%d)
Line 8381: InterFreq objid(%d)
Line 8384: InterFreq IDLISTEDCELLSET
Line 8389: InterFreq IDLISTEDCELLSET is NULL
Line 8397: Find in InterFreq IDLISTEDCELLSET
Line 8404: InterFreq IDDETECTEDCELLSET
Line 8409: InterFreq IDDETECTEDCELLSET is NULL
Line 8417: Find in InterFreq IDLISTEDCELLSET
Line 8447: RrmBlkConnEvalNr::GetRsrpThreshForDrop::Invalid SubCarrierSpacing(%d)
Line 8456: RrmMngrConfigConnNr::UpdateSmeasureConditionFlagForSsb
Line 8475:    >>SsbMeasureResult Rsrp:%d[/100dBm] sMeasureConfig.SsbRsrp:%d[/100dBm]
Line 8479:    >>In Smeasure condition
Line 8484:    >>No Smeasure condition
Line 8491:    >>ServingCell L3 filtering result is not valid:(bool)%d
Line 8500: RrmBlkConnEvalNr::DeleteMeasResultForSsb
Line 8525:    >>Intra Type:IDLISTEDCELLSET
Line 8535:    >>Intra Type:IDDETECTEDCELLSET
Line 8551:    >>Intra Type:CANDILISTEDCELLSET to UNID
Line 8566:      ::Intra Cell removed in CANDIDETECTEDCELLSET
Line 8573:    >> No Mo for intrafreq
Line 8578:    >> No Intra freq
Line 8595:    >>Inter Type:IDLISTEDCELLSET
Line 8605:    >>Inter Type:IDDETECTEDCELLSET
Line 8621:    >>Inter Type:CANDILISTEDCELLSET to UNID
Line 8634:      ::Inter Cell removed in CANDIDETECTEDCELLSET
Line 8643:    >>ObjectId Null
Line 8671: TravelListedCellsEutra:: pCellInfo == nullptr - try to find first Cellinfo in next MO
Line 8678: TravelListedCellsEutra:: ProcCellCriteria #%d complete
Line 8682: TravelListedCellsEutra:: try to find next Cellinfo
Line 8688: RrmBlkConnEvalNr::ProcCellCriteriaEutra
Line 8700: ProcCellCriteria - GetCellMeasResultNrL3Filtered
Line 8715:      ::filterCoefficient updated for beam SSB_RSRP:(enum)%d, SSB_RSRQ:(enum)%d, SSB_RSSINR:(enum)%d, SSB_RSSI:(enum)%d)
Line 8719:      ::Use default filterCoefficient ( not present )
Line 8730: ProcCellCriteria - cellResult.isValid is ture
Line 8737: ProcCellCriteria - cellResult.isValid is false
Line 8756: L3Filtered cell - LTE Arfcn:%d CellId:%-3d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB]
Line 8762: RrmBlkConnEvalNr::CheckStateForReport
Line 8783: RrmNrMeasConn::CheckStateForReport - MeasID(%d) VarMeasReportList.reportTriggered(%d)
Line 8792: PeriodicalReportInterval::reportTriggered is True::MeasID(%d), numberOfReportsSent(0)::_eval_
Line 8795: First send::MeasID(%d), PeriodicalReportInterval(%d)::_eval_
Line 8800: PeriodicalReportInterval::reportTriggered is True::MeasID(%d), TimeDiff(%d)::_eval_
Line 8803: PeriodicalReportInterval(%d)::_eval_
Line 8807: PeriodicalReportInterval::reportTriggered is false::MeasID(%d), TimeDiff(%d)::_eval_
Line 8811: RemainTime(%d)::_eval_
Line 8830: RrmBlkConnEvalNr::CheckValidSsbIndex
