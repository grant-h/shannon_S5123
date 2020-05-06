Line 88: RrmCellInfoNr::RrmCellInfoNr()
Line 102: RrmCellInfoNr::~RrmCellInfoNr() - CellId:%d MeasObjectId:%d
Line 108:    >>m_SsbMeasResultList.size:%d
Line 112:    >>m_CsiMeasResultList.size:%d
Line 121:    >>m_SsbMeasResultList_PerRx[%d].size:%d
Line 125:    >>m_CsiMeasResultList_PerRx[%d].size:%d
Line 262: SetSsbTimingOffset Cell[%d,%d] - Invalid RsIndex:%d maxNrOfRsIndex:%d
Line 404: Unknown type of rsTYpe(%d)! return RSTYPE_SSB result as default
Line 420: Unknown type of rsTYpe(%d)! return RSTYPE_SSB result as default
Line 473: RrmCellInfoNr::UpdateCellMeasResult - pMeasResultNr is nullptr!
Line 488: RrmCellInfoNr::UpdateCellMeasResult - Unknown type of rsType(%d)!
Line 503: RrmCellInfoNr::UpdateCellMeasResult - Unknown type of rsType(%d)!
Line 519: RrmCellInfoNr::SetCellMeasResultServSinr(%d) prev(%d)
Line 533: RrmCellInfoNr::SetCellCorrEnergy from (%d) to (%d)
Line 544: RrmCellInfoNr::SetServCellIndex from (%d) to (%d)
Line 550: RrmCellInfoNr::GetBestRsIndex - MeasurementQuantity(%d)
Line 559:    >> BestRsIndex(%d) returned
Line 564:    >> BestRsIndex(0x%x) returned
Line 786: %s - RxAnt:%d CellId:%d MO:%d MeasQuantity:(enum)%d eFilterType:(enum)%d
Line 809: RrmCellInfoNr::UpdateMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
Line 816: RrmCellInfoNr::UpdateMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - Copy RsIndex(%d) to rMeasResultNr.RSIndex(%d)
Line 855: RrmCellInfoNr::UpdateMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
Line 862: RrmCellInfoNr::UpdateMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - Copy RsIndex(%d) to rMeasResultNr.RSIndex(%d)
Line 901: RrmCellInfoNr::DropMeasResultPerRSIndexForSsb Cell[%d,%d] - isDerive(%d) dropType(enum)(%d)
Line 928: RrmCellInfoNr::DropMeasResultPerRSIndexForSsb dropType is invalid.
Line 948:    >> bestRsIndex is changed, Drop rsindex:%d rssinr:%d (< %d)
Line 952:   >> skip ssb prunning for rs-index(%d)
Line 970:   >> skip ssb prunning for rs-index(%d)
Line 978:   >> Current bestRsIndex is RRM_INVALID_RS_INDEX(0x%x). Drop rsindex:%d rssinr:%d (< %d)
Line 989:    >> Current bestRsIndex is %d, Drop rsindex:%d rssinr:%d (< %d)
Line 1001: RrmCellInfoNr::DropMeasResultPerRSIndexForSsb - cell ID :%d best rsindex:%d rssinr:%d
Line 1026: RrmCellInfoNr::GetMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
Line 1068: RrmCellInfoNr::GetMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
Line 1123: RrmCellInfoNr::GetFirstMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - List is empty
Line 1130: RrmCellInfoNr::GetFirstMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - First RsIndex(%d)
Line 1153: RrmCellInfoNr::GetFirstMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - List is empty
Line 1160: RrmCellInfoNr::GetFirstMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - First RsIndex(%d)
Line 1197: RrmCellInfoNr::GetNextMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
Line 1203: RrmCellInfoNr::GetNextMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - List is empty
Line 1218: RrmCellInfoNr::GetNextMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) found but end of list
Line 1234: RrmCellInfoNr::GetNextMeasResultPerRSIndexForSsb RxAnt:%d Cell[%d,%d] - RsIndex(%d) not found
Line 1256: RrmCellInfoNr::GetNextMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
Line 1262: RrmCellInfoNr::GetNextMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - List is empty
Line 1278: RrmCellInfoNr::GetNextMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) found but end of list
Line 1294: RrmCellInfoNr::GetNextMeasResultPerRSIndexForCsiRs RxAnt:%d Cell:%d - RsIndex(%d) not found
Line 1326: RemoveMeasResultPerRSIndexForSsb - RxAnt:%d RsIndex(%d) is invalid. maxNrOfRsIndex(%d)
Line 1335:    >>REMOVE MeasResultPerRSIndexForSsb(RxAnt:%d RSIndex:%d CellId:%d MO:%d)
Line 1366: RemoveMeasResultPerRSIndexForCsiRs - RxAnt:%d RsIndex(%d) is invalid. MAX_NROF_CSI_RS_RESOURCES_RRM(%d)
Line 1375:    >>REMOVE MeasResultPerRSIndexForCsiRs(RxAnt:%d RSIndex:%d CellId:%d MO:%d)
Line 1414:    >>REMOVE MeasResultPerRSIndex(RSIndex:%d) - Out of SsbBitmap:0x%08x %08x
Line 1434:    >>REMOVE MeasResultPerRSIndex(RxAnt:%d RSIndex:%d CellId:%d MO:%d) - Out of SsbBitmap:0x%08x %08x
Line 1451: RrmCellInfoNr::UpdateInvalidCountOfAllMeasResult Cell[%d,%d] - bIncrease:(bool)%d
Line 1513: RrmCellInfoNr::ArrangeMeasResultList Cell[%d,%d]
Line 1536: L1Filtered beam - SSB RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 1545: L3Filtered beam - SSB RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 1552:    >>REMOVE SsbMeasResultList_PerRx[%d](RSIndex:%d CellId:%d) - InvalidCount:%d numElement:%d SsbBitmap:0x%08x %08x
Line 1569: RrmCellInfoNr::ArrangeMeasResultListRepresentative Cell[%d,%d]
Line 1584: L1Filtered beam - SSB Arfcn:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 1593: L3Filtered beam - SSB Arfcn:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 1600:    >>REMOVE SsbMeasResultList(RSIndex:%d CellId:%d) - InvalidCount:%d SsbBitmap:0x%08x %08x
Line 1643: UpdateL1measuredBeamForSsb - numBeamResult:%d NumSsbIndex:%d MAX_NUM_SSB_MEAS:%d SsbBitmap:0x%08x %08x
Line 1649:    >>rSsbMeasResult.SsbIndex[%d]:%d
Line 1654:       ::SKIP SsbIndex[%d]:%d - maxNrOfRsIndex:%d
Line 1661:       ::SKIP SsbIndex[%d]:%d - out of SsbBitmap:0x%08x %08x
Line 1682:    >>CLEAR L1Measured for fast tracking - DIFF(L1measured.Rsrp:%d, L1Filtered.Rsrp:%d) > RSRP_OFFSET:%d
Line 1707: L1Measured beam - SSB RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 1724: UpdateL1measuredBeamForCsiRs - numBeamResult:%d CsiRsIndexCnt:%d MAX_NUM_CSIRS_MEAS:%d
Line 1730:    >>rCsiMeasResult.CsiRsIndex[%d]:%d
Line 1735:       ::SKIP CsiRsIndex[%d]:%d - maxNrOfRsIndex:%d
Line 1756:    >>CLEAR L1Measured for fast tracking - DIFF(L1measured.Rsrp:%d, L1Filtered.Rsrp:%d) > RSRP_OFFSET:%d
Line 1781: L1Measured beam - CSI-RS RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2055: RrmCellInfoNr::StoreSsbMeasResult - Arfcn:%d CellId:%d NumSsbIndex:%d bUpdateL3:(bool)%d SsbBitmap:0x%08x %08x
Line 2065:    >>Mismatching m_CellId:%d rSsbMeasResult.CellId:%d
Line 2069: SsbMeasResult.TimingOffset
Line 2072: Update SsbTimingOffset - NumSsbIndex:%d bUpdateTO:(bool)%d
Line 2083: IGNORE MeasResult of BLIND DETECTION RESULT
Line 2089:    >>Invalid rSsbMeasResult.SsbIndex[0]:%d maxNrOfRsIndex:%d
Line 2106:    >>Invalid NumSsbIndex:%d maxNrOfRsIndex:%d
Line 2142: RrmCellInfoNr::InitSsbTimingOffset
Line 2153: UpdateSsbTimingOffset - NumSsbTimingOffset:%d SsbIndex:%d
Line 2163:    >>intra freq is null
Line 2167: CELL SsbTimingOffset
Line 2172:    >>Invalid NumSsbTimingOffset:%d
Line 2188:    >>[%d]:%d - IGNORE TimingOffset of BLIND DETECTION RESULT
Line 2192:    >>Invalid SsbIndex:%d
Line 2215: UPDATED CELL SsbTimingOffset
Line 2224: UpdateSsbTimingOffsetDelta - CellId:%d SsbTimingOffset:%d SsbPeriod:(enum)%d
Line 2226: CELL SsbTimingOffset
Line 2242:    >>FIND SSB using TimingOffset:%d
Line 2258:    >>FOUND SsbIndex:%d(TimingOffset:%d) - VERIFY difference:%d CpLength:%d(SCS:(enum)%d)
Line 2263:    >>INVALID - Difference exceed CpLength
Line 2268:    >>VERIFIED - UPDATE SsbTimingOffsetArray with difference:%d and SsbSampleMax:%d(SsbPeriod:(enum)%d)
Line 2277:    >>UPDATED CELL SsbTimingOffset
Line 2286: UpdateSsbTimingOffsetAfterCdrx - CellId:%d SsbTimingOffsetDiff:%d SsbPeriod:(enum)%d numSsbIndex:%d
Line 2296: 	>>UPDATED CELL m_SsbTimingOffset:%d
Line 2309:    >>UPDATED CELL SsbTimingOffset
Line 2318: DeriveSsbIndex - fromCell(ARFCN:%d PCID:%d) using SsbTimingOffset:%d Tolerence:%d
Line 2330:    >>FIND SSB using TimingOffset:%d
Line 2346:    >>FOUND SsbIndex:%d(TimingOffset:%d) - VERIFY difference:%d with Tolerence:%d
Line 2351:    >>INVALID - Difference exceed Tolerence
Line 2371: PrintfSsbTimingOffsetArray - NumSsbTimingOffset:%d
Line 2376:    >>[0]:%-9d [1]:%-9d [2]:%-9d [3]:%-9d
Line 2382:    >>[4]:%-9d [5]:%-9d [6]:%-9d [7]:%-9d
Line 2389:    >>[8]:%-9d [9]:%-9d [10]:%-9d [11]:%-9d [12]:%-9d [13]:%-9d [14]:%-9d
Line 2393:    >>[15]:%-9d [16]:%-9d [17]:%-9d [18]:%-9d [19]:%-9d [20]:%-9d [21]:%-9d
Line 2397:    >>[22]:%-9d [23]:%-9d [24]:%-9d [25]:%-9d [26]:%-9d [27]:%-9d [28]:%-9d
Line 2401:    >>[29]:%-9d [30]:%-9d [31]:%-9d [32]:%-9d [33]:%-9d [34]:%-9d [35]:%-9d
Line 2405:    >>[36]:%-9d [37]:%-9d [38]:%-9d [39]:%-9d [40]:%-9d [41]:%-9d [42]:%-9d
Line 2409:    >>[43]:%-9d [44]:%-9d [45]:%-9d [46]:%-9d [47]:%-9d [48]:%-9d [49]:%-9d
Line 2413:    >>[50]:%-9d [51]:%-9d [52]:%-9d [53]:%-9d [54]:%-9d [55]:%-9d [56]:%-9d
Line 2417:    >>[57]:%-9d [58]:%-9d [59]:%-9d [60]:%-9d [61]:%-9d [62]:%-9d [63]:%-9d
Line 2426: PrintfSsbTimingOffset - Arfcn:%d CellId:%d m_SsbRsIndex:%d m_SsbTimingOffset:%d
Line 2458: 	>>Unexpected TargetSubCarrierSpacing:%d(enum) Set DefaultCpLength
Line 2462: GetCpLength - SCS:%d(enum), SelectedCpLength:%d
Line 2499: 	>>Unexpected SsbPeriod:%d(enum) Set Default SsbSampleMax
Line 2503: GetSsbSampleMax - SsbPeriod:%d(enum) SelectedSsbSampleMax:%d
Line 2515: RrmCellInfoNr::SetRxBeamIndex from:%d to:%d
Line 2521: RrmCellInfoNr::DeleteAllSsbMeasresult
Line 2601:    >>Delete m_SibCellInfo.pNeighCellInfo:0x%08x
Line 2608:    >>Delete m_SibCellInfo.pTreselCount:0x%08x
Line 2630: RrmCellInfoNr::SetSibNeighCellInfo - Arfcn:%d CellId:%d
Line 2634: OLD SibNeighCellInfo
Line 2640:    >>pNeighCellInfo is allocated - ptr:0x%08x
Line 2645: NEW SibNeighCellInfo
Line 2675:    >>pTreselCount is allocated - ptr:0x%08x
Line 2686:    >>QoffsetCell:%d QrxLevMinOffsetCell:%d QrxLevMinOffsetCellSULPresent:(bool)%d QrxLevMinOffsetCellSUL:%d QqualMinOffsetCell:%d
Line 2697: RrmCellInfoNr::GetCsiRsCellInfo - m_pCsiRsCellInfo is nullptr!
Line 2718: RrmCellInfoNr::UpdateCsiRsCellInfo - fail to alloc m_pCsiRsCellInfo
Line 2763: RrmCellInfoNr::UpdateInvalidCountOfAllMeasResultForCsiRs Cell:%d - bIncrease:(bool)%d
Line 2825: RrmCellInfoNr::ArrangeMeasResultListForCsiRs Cell:%d
Line 2848: L1Filtered beam - CSI-RS RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2857: L3Filtered beam - CSI-RS RxAnt:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2864:    >>REMOVE CsiMeasResultList_PerRx[%d](RSIndex:%d CellId:%d) - InvalidCount:%d numElement:%d
Line 2881: RrmCellInfoNr::ArrangeMeasResultListRepresentativeForCsiRs Cell:%d
Line 2895: L1Filtered beam - CSI-RS MO:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2904: L3Filtered beam - CSI-RS MO:%d CellId:%-3d RsIndex:%d Rsrp:%d[/100dBm] Rsrq:%d[/100dB] RsSinr:%d[/100dB] Rssi:%d[/100dBm]
Line 2911:    >>REMOVE CsiMeasResultList(RSIndex:%d CellId:%d) - InvalidCount:%d
Line 2927: RrmCellInfoNr::StoreSsbMeasResult - Arfcn:%d CellId:%d bUpdateL3:(bool)%d
Line 2932:    >>Mismatching m_CellId:%d rCsiMeasResult.CellId:%d
