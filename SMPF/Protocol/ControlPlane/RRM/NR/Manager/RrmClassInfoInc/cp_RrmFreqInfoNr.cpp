Line 69: RrmFreqInfoNr::RrmFreqInfoNr()
Line 86: RrmFreqInfoNr::~RrmFreqInfoNr()
Line 92:    >>m_MeasObjectList.size:%d
Line 188:    >>m_MeasObjectList ObjectId %d, 
Line 192: RrmFreqInfoNr::GetMeasObjectPtr - MeasObjectList Management error
Line 216: RrmFreqInfoNr::IsMeasObjectExist - MeasObjectList Management error
Line 223: RrmFreqInfoNr::IsMeasObjectExist - MeasObjectId(%d) found
Line 241: RrmFreqInfoNr::GetFirstMeasObjectId - m_MeasObjectList is empty. Return MEAS_OBJECT_ID_NULL
Line 245: RrmFreqInfoNr::GetFirstMeasObjectId - MeasObjectList Management error
Line 251: RrmFreqInfoNr::GetFirstMeasObjectId - First MeasObjectId(%d) found
Line 264: RrmFreqInfoNr::GetNextMeasObjectId - Given MeasObjectId(%d) is invalid, just return first ObjectId
Line 274: RrmFreqInfoNr::GetNextMeasObjectId - MeasObjectList Management error
Line 286: RrmFreqInfoNr::GetNextMeasObjectId - Next MeasObjectId(%d) of given MeasObjectID(%d) found
Line 291: RrmFreqInfoNr::GetNextMeasObjectId - CurrMeasObjectId(%d) found but no next meas object found
Line 305: RrmFreqInfoNr::GetNextMeasObjectId - m_MeasObjectList is empty !!!!
Line 317: RrmFreqInfoNr::GetSsbConfigMobilityPresentForMeasObjectId - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return FALSE
Line 325: RrmFreqInfoNr::GetSsbConfigMobilityPresentForMeasObjectId - MeasObjectList Management error
Line 335: RrmFreqInfoNr::GetSsbConfigMobilityPresentForMeasObjectId - SsbConfigMobilityPresent is FALSE for this MeasObjectId(%d)
Line 350: MeasObjectPtr == nullptr
Line 368: RrmFreqInfoNr::GetSsbConfigMobilityPresentForMeasObjectId - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return FALSE
Line 376: RrmFreqInfoNr::GetSsbConfigMobilityForMeasObjectId - MeasObjectList Management error
Line 386: RrmFreqInfoNr::GetSsbConfigMobilityForMeasObjectId - GetSsbConfigMobility is Not exist for this MeasObjectId(%d)
Line 404: RrmFreqInfoNr::GetSmtc1ConfigForMeasObjectId - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc1 config
Line 412: RrmFreqInfoNr::GetSmtc1ConfigForMeasObjectId - MeasObjectList Management error
Line 422: RrmFreqInfoNr::GetSmtc1ConfigForMeasObjectId - SsbConfigMobilityPresent(FALSE) for this MeasObjectId(%d)
Line 438: RrmFreqInfoNr::GetSmtc2ConfigForMeasObjectId - Given MeasObjectId(%d) is invalid(MEAS_OBJECT_ID_NULL). return dummy smtc2 config
Line 446: RrmFreqInfoNr::GetSmtc2ConfigForMeasObjectId - MeasObjectList Management error
Line 456: RrmFreqInfoNr::GetSmtc2ConfigForMeasObjectId - SsbConfigMobilityPresent(FALSE) for this MeasObjectId(%d)
Line 521: RrmFreqInfoNr::FindCellInfo - CellId:%d RsType:%s(%d) MeasObjectId:%d targetMeasObjectId:%d
Line 527:    >>targetMeasObjectId:%d - pMeasObject is nullptr
Line 541:    >>cell is nullptr - SsbSetType:%s(%d) targetMeasObjectId:%d
Line 548:    >>CELL FOUND - CellId:%d SsbSetType:%s(%d) targetMeasObjectId:%d CellPtr:0x%08x
Line 565:    >>cell is nullptr - CsiSetType:%s(%d) targetMeasObjectId:%d
Line 572:    >>CELL FOUND - CellId:%d CsiSetType:%s(%d) targetMeasObjectId:%d CellPtr:0x%08x
Line 581:    >>CELL NOT FOUND
Line 591: RrmFreqInfoNr::CreateCellInfo - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 611:    >>ALLOC NEW CellPtr:0x%08x - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 618:    >>COPY CellPtr:0x%08x - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 631: RrmFreqInfoNr::DeleteCellInfo - pCellDelete is nullptr
Line 637: RrmFreqInfoNr::DeleteCellInfo - CellId:%d Ptr:0x%08x RsType:%s(%d) MeasObjectId:%d
Line 655:    >>DELETE Cell - not found
Line 663:    >>PRESERVE Cell - found and matched CellPtr:0x%08x
Line 668:    >>DELETE Cell - found but not matched CellPtr:0x%08x
Line 677:    >>DELETE CellPtr:0x%08x - CellId:%d RsType:%s(%d) MeasObjectId:%d
Line 694: RrmFreqInfoNr::GetNextCell - Given MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 702: RrmFreqInfoNr::GetNextCell - MeasObjectList Management error
Line 713: RrmFreqInfoNr::GetNextCell - SsbNeighborCellSet[%d] management error
Line 723: RrmFreqInfoNr::GetNextCell - Next CellID(%d) of given CellId(%d) found
Line 728: RrmFreqInfoNr::GetNextCell - given CellId(%d) found but no next CellInfoClsPtr found
Line 735: RrmFreqInfoNr::GetNextCell - Current CellId(%d) is last Cell of SsbNeighborCellSet[%d]
Line 741: RrmFreqInfoNr::GetNextCell - pMeasObject->SsbNeighborCellSet[SetType] is empty !!!!
Line 757: RrmFreqInfoNr::GetNextCell - Given MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 765: RrmFreqInfoNr::GetNextCell - MeasObjectList Management error
Line 776: RrmFreqInfoNr::GetNextCell - SsbNeighborCellSet[%d] management error
Line 786: RrmFreqInfoNr::GetNextCell - Next CellID(%d) of given CellId(%d) found
Line 791: RrmFreqInfoNr::GetNextCell - given CellId(%d) found but no next CellInfoClsPtr found
Line 798: RrmFreqInfoNr::GetNextCell - Current CellId(%d) is last Cell of CsiNeighborCellSet[%d]
Line 804: RrmFreqInfoNr::GetNextCell - pMeasObject->CsiNeighborCellSet[SetType] is empty !!!!
Line 828: RrmFreqInfoNr::AddMeasObject - this MeasObjectPtr in nullptr
Line 843: RrmFreqInfoNr::AddMeasObject - Add MeasObjectId(%d) To MeasObjectList of Freq(SsbAbsFreq %d, SubCarrierSpacing %d)
Line 852: RrmFreqInfoNr::RemoveMeasObjectFromMeasObjectList - MeasObjectId is Null
Line 862: RrmFreqInfoNr::RemoveMeasObjectFromMeasObjectList - MeasObjectList management error
Line 869: RrmFreqInfoNr::RemoveMeasObjectFromMeasObjectList - MeasObjectid(%d) is removed from MeasObjectList
Line 886: RrmFreqInfoNr::AddCellToCandiDetectedCellSetForSsb(MeasObjectId:%d size:%d) - Arfcn:%d CellId:%d CorrEnergy:%d
Line 889:    >>SORT - CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
Line 897:    >>COMPARE - LEAST(CellId:%d CorrEnergy:%d) and TARGET(CellId:%d CorrEnergy:%d)
Line 901:    >>REMOVE LEAST cell and PUSH TARGET cell
Line 912:    >>DO NOT ADD TARGET - LEAST cell is better than TARGET
Line 918:    >>REMOVE LEAST cell and PUSH TARGET cell - LEAST cell is NULL
Line 938: RrmFreqInfoNr::AddCellToCandiDetectedCellSetForCsiRs(MeasObjectId:%d size:%d) - Arfcn:%d CellId:%d CorrEnergy:%d
Line 941:    >>SORT - CANDIDETECTED cellset with AscendingCompareCellCorrEnergy
Line 949:    >>COMPARE - LEAST(CellId:%d CorrEnergy:%d) and TARGET(CellId:%d CorrEnergy:%d)
Line 953:    >>REMOVE LEAST cell and PUSH TARGET cell
Line 964:    >>DO NOT ADD TARGET - LEAST cell is better than TARGET
Line 970:    >>REMOVE LEAST cell and PUSH TARGET cell - LEAST cell is NULL
Line 1005: RrmFreqInfoNr::ResizeIdDetectedCellSetForSsb
Line 1015:    >>MeasObjectId:%d - ID DETECTED(size:%d)
Line 1018:    >>SORT - IDDETECTED cellset with AscendingCompareCellSsbRsrp
Line 1027:      ::No cell to remove
Line 1036:      ::MeasInfo for ObjId(%d) is not found
Line 1047:      ::REMOVE cell in TimeToTriggerList - MeasId:%d
Line 1053:      ::REMOVE cell in ReportList - MeasId:%d
Line 1060:      ::REMOVE cell in ID DETECTED - MeasObjectId:%d
Line 1083: RrmFreqInfoNr::ResizeIdDetectedCellSetForCsiRs
Line 1093:    >>MeasObjectId:%d - ID DETECTED(size:%d)
Line 1096:    >>SORT - IDDETECTED cellset with AscendingCompareCellSsbRsrp
Line 1105:      ::No cell to remove
Line 1114:      ::MeasInfo for ObjId(%d) is not found
Line 1125:      ::REMOVE cell in TimeToTriggerList - MeasId:%d
Line 1131:      ::REMOVE cell in ReportList - MeasId:%d
Line 1138:      ::REMOVE cell in ID DETECTED - MeasObjectId:%d
Line 1167: RrmFreqInfoNr::AddCellToNeighborCellSet - this CellInfoClsPtr in nullptr or SetType:%s(%d) is invalid
Line 1176: RrmFreqInfoNr::AddCellToNeighborCellSet - MeasObjectId(%d), SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
Line 1182:    >> MeasObjectList management error
Line 1198:    >>  Cell(Arfcn %d, CellId %d) Added to SetType:%s(%d) NeighborCellSetList
Line 1214: RrmFreqInfoNr::AddCellToNeighborCellSetForCsiRs - this CellInfoClsPtr in nullptr or SetType:%s(%d) is invalid
Line 1223: RrmFreqInfoNr::AddCellToNeighborCellSetForCsiRs - MeasObjectId(%d), SetType:%s(%d), Arfcn(%d), SubCarrierSpacing(%d), CellId(%d)
Line 1229:    >> MeasObjectList management error
Line 1245:    >>  Cell(Arfcn %d, CellId %d) Added to SetType:%s(%d) NeighborCellSetList
Line 1275: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForSsb - this CellInfoClsPtr in nullptr or SetType:%s(%d) is invalid
Line 1285: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForSsb - MeasObjectId:%d SetType:%s(%d) Arfcn:%d CellId:%d
Line 1291: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForSsb - MeasObjectList management error
Line 1300: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForSsb - NeighborCellSet for SetType:%s(%d) is empty
Line 1313:    >>Delete Cell(Arfcn:%d CellId:%d) from SSB CellSet(MeasObjectId:%d SetType:%s(%d) Size:%d)
Line 1320:    >>Remove Cell(Arfcn:%d CellId:%d) from SSB CellSet(MeasObjectId:%d SetType:%s(%d) Size:%d)
Line 1343: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForCsiRs - this CellInfoClsPtr in nullptr or SetType:%s(%d) is invalid
Line 1353: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForCsiRs - MeasObjectId:%d SetType:%s(%d) Arfcn:%d CellId:%d
Line 1359: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForCsiRs - MeasObjectList management error
Line 1368: RrmFreqInfoNr::RemoveCellFromNeighborCellSetForCsiRs - NeighborCellSet for SetType:%s(%d) is empty
Line 1381:    >>Delete Cell(Arfcn:%d CellId:%d) from CSI-RS CellSet(MeasObjectId:%d SetType:%s(%d) Size:%d)
Line 1388:    >>Remove Cell(Arfcn:%d CellId:%d) from CSI-RS CellSet(MeasObjectId:%d SetType:%s(%d) Size:%d)
Line 1421: RrmFreqInfoNr::MoveCellToOtherNeighborCellSetForSsb - this pCellInfoCls in nullptr
Line 1440: RrmFreqInfoNr::MoveCellToOtherNeighborCellSetForCsiRs - this pCellInfoCls in nullptr
Line 1473: RrmFreqInfoNr::GetNroNeighborCellSetForSsb - MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 1477: RrmFreqInfoNr::GetNroNeighborCellSetForSsb - NeighborCellSet of SetType:%s(%d) is empty
Line 1482: RrmFreqInfoNr::GetNroNeighborCellSetForSsb - The number of NeighborCellSet for SetType:%s(%d) is %d
Line 1497: RrmFreqInfoNr::GetNroNeighborCellSetForCsiRs - MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 1501: RrmFreqInfoNr::GetNroNeighborCellSetForCsiRs - NeighborCellSet of SetType:%s(%d) is empty
Line 1506: RrmFreqInfoNr::GetNroNeighborCellSetForCsiRs - The number of NeighborCellSet for SetType:%s(%d) is %d
Line 1532: RrmFreqInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForSsb - SetType:%s(%d) is invalid
Line 1537: RrmFreqInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForSsb - SetType:%s(%d) is empty
Line 1553: RrmFreqInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForCsiRs - SetType:%s(%d) is invalid
Line 1558: RrmFreqInfoNr::GetFirstCellInfoClsPtrFromNeighborCellSetForCsiRs - SetType:%s(%d) is empty
Line 1587: RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSetForSsb - MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 1592: RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSetForSsb - SetType:%s(%d) is empty
Line 1603: RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSetForSsb - NeighborCellSet for SetType:%s(%d) Management Error
Line 1625: RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSetForCsiRs - MeasObjectId(%d) or SetType:%s(%d) is invalid
Line 1630: RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSetForCsiRs - SetType:%s(%d) is empty
Line 1641: RrmFreqInfoNr::GetCellInfoClsPtrFromNeighborCellSetForCsiRs - NeighborCellSet for SetType:%s(%d) Management Error
Line 1673: RrmFreqInfoNr::GetSsbFreqFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1686: RrmFreqInfoNr::GetSsbFreqFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1699: RrmFreqInfoNr::GetRefFreqCsiRsFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1712: RrmFreqInfoNr::GetRefFreqCsiRsFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1725: RrmFreqInfoNr::GetAbsThreshSsBlocksConsolidationFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1740: RrmFreqInfoNr::GetAbsThreshSsBlocksConsolidationFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1753: RrmFreqInfoNr::GetAbsThreshCsiRsConsolidationPresentFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1768: RrmFreqInfoNr::GetAbsThreshCsiRsConsolidationFromMeasObject - MeasObjectId(%d) not found at this frequency
Line 1784: RrmFreqInfoNr::GetCellInfoClsPtrFromAllNeighborCellSetForSsb - MeasObjectId not found at this frequency
Line 1796: RrmFreqInfoNr::GetCellInfoClsPtrFromAllNeighborCellSetForSsb - NeighborCellSet for SetType:%s(%d) Management Error
Line 1819: RrmFreqInfoNr::GetCellInfoClsPtrFromAllNeighborCellSetForCsiRs - MeasObjectId not found at this frequency
Line 1831: RrmFreqInfoNr::GetCellInfoClsPtrFromAllNeighborCellSetForCsiRs - NeighborCellSet for SetType:%s(%d) Management Error
Line 1862: RrmFreqInfoNr::CreateMeasObjectNr - MeasObjectNR_t cannot be created
Line 1894: RrmFreqInfoNr::DeleteMeasObjectNr - given pMeasObjectNr is nullptr or MeasObjectId is Null
Line 1907: RrmMngrSetUpdate::DeleteMeasObjectNr - MeasObjectid(%d) is deleted
Line 1921: RrmFreqInfoNr::AddCellToNeighborCellSet - MeasObjectList management error
Line 1937: RrmFreqInfoNr::DestroyRrmCellInfoList - this pMeasObjectNr is nullptr or MeasObjectId is Null
Line 1950: RrmFreqInfoNr::DestroyRrmCellInfoList - NeighborCellSet management error
Line 1956: RrmFreqInfoNr::DestroyRrmCellInfoList - Delete Cell[%d,%d] in SsbCellSet[MO:%d/SET:%d/SIZE:%d]
Line 1969: RrmFreqInfoNr::DestroyRrmCellInfoList - NeighborCellSet management error
Line 1975: RrmFreqInfoNr::DestroyRrmCellInfoList - Delete Cell[%d,%d] in CsiCellSet[MO:%d/SET:%d/SIZE:%d]
Line 1985: RrmFreqInfoNr::DestroyRrmCellInfoList - All the Neighbor Cell Set destroyed
Line 1993:    >>Initialize pNewMeasObjectNr->IE
Line 1996:    >>Initialize SsbNeighborCellSet and CsiNeighborCellSet
Line 2005:    >>InitMeasObjectNr - MeasObjectid:%d is initialized
Line 2013: RrmFreqInfoNr::ConfigMeasObjectNr - given pNewMeasObjectNr(0X%x) or MeasObjectNrConfig(0X%x) is invalid
Line 2019: RrmFreqInfoNr::ConfigMeasObjectNr - MeasObjectid(%d) is being configured
Line 2022:    >>FreqBandIndicatorNRV1530Present:(bool)%d
Line 2027:    >>FreqBandIndicatorNRV1530:%d(BandId:%d)
Line 2032:    >>FreqBandIndicatorNRV1530:absent(BandId:%d)
Line 2069:    >>AbsThreshSsBlocksConsolidationPresent:(bool)%d
Line 2086:    >>AbsThreshSsBlocksConsolidation - RsrpPresent:(bool)%d Rsrp:(RsrpRange)%d(%d[/100dBm])
Line 2091:    >>AbsThreshSsBlocksConsolidation - RsrqPresent:(bool)%d Rsrq:(RsrqRange)%d(%d[/100dBm])
Line 2096:    >>AbsThreshSsBlocksConsolidation - SinrPresent:(bool)%d Sinr:(SinrRange)%d(%d[/100dBm])
Line 2111:    >>AbsThreshSsBlocksConsolidation - RsrpPresent:(bool)%d RsrqPresent:(bool)%d SinrPresent:(bool)%d
Line 2115:    >>AbsThreshCsiRsConsolidationPresent:(bool)%d
Line 2132:    >>AbsThreshCsiRsConsolidation - RsrpPresent:(bool)%d Rsrp:(RsrpRange)%d(%d[/100dBm])
Line 2137:    >>AbsThreshCsiRsConsolidation - RsrqPresent:(bool)%d Rsrq:(RsrqRange)%d(%d[/100dBm])
Line 2142:    >>AbsThreshCsiRsConsolidation - SinrPresent:(bool)%d Sinr:(SinrRange)%d(%d[/100dBm])
Line 2157:    >>AbsThreshCsiRsConsolidation - RsrpPresent:(bool)%d RsrqPresent:(bool)%d SinrPresent:(bool)%d
Line 2215: Succeeded to add [BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d] into set(%d) of measobject(%d)
Line 2234: 	>> BlackCellList is Available - BlackCellListIdx(0x%x)
Line 2246:    >> CellListIdx[%d] PciRangeIdx[%d] Start[%d] Range[%d]
Line 2253:    >> CellListIdx[%d] PciRangeIdx[%d] Start[%d]
Line 2265: 	>> WhiteCellList is Available - WhiteCellListIdx(0x%x)
Line 2277:    >> CellListIdx[%d] PciRangeIdx[%d] Start[%d] Range[%d]
Line 2284:    >> CellListIdx[%d] PciRangeIdx[%d] Start[%d]
Line 2293:    >>MeasObjectId:%d CsiRsResourceConfigMobilityChoice:(enum)%d CsiRsResourceConfigMobilityPresent:(bool)%d
Line 2315: ----------------------------------------------------------------------------------
Line 2316: RrmFreqInfoNr::DisplayMeasObjectNrInfo - MeasObjectid(%d)
Line 2317: ----------------------------------------------------------------------------------
Line 2321: SsbFreq(%d)
Line 2326: RefFreqCsiRs(%d)
Line 2334: AbsThreshSsBlocksConsolidation.Rsrp:%d[/100dBm]
Line 2340: AbsThreshSsBlocksConsolidation.Rsrq:%d[/100dB]
Line 2346: AbsThreshSsBlocksConsolidation.Sinr:%d[/100dB]
Line 2355: AbsThreshCsiRsConsolidation.Rsrp:%d[/100dBm]
Line 2361: AbsThreshCsiRsConsolidation.Rsrq:%d[/100dB]
Line 2367: AbsThreshCsiRsConsolidation.Sinr:%d[/100dB]
Line 2373: SsBlocksToAvg(%d)
Line 2378: CsiRsResourcesToAvg(%d)
Line 2386: SsbConfigMobility.SsbToMeasure.ShortBitmap(0X%x)
Line 2389: SsbConfigMobility.SsbToMeasure.MediumBitmap(0X%x)
Line 2392: SsbConfigMobility.SsbToMeasure.LongBitmap(0X%x)
Line 2395: Invalid SsbToMeasureChoice(%d)
Line 2400: QuantityConfigIndex(%d)
Line 2402: OffsetFreq
Line 2403: RsrpOffsetSsb(%d)
Line 2404: RsrqOffsetSsb(%d)
Line 2405: SinrOffsetSsb(%d)
Line 2406: RsrpoffsetCsiRs(%d)
Line 2407: RsrqOffsetCsiRs(%d)
Line 2408: SinrOffsetCsiRs(%d)
Line 2415: CellIndividualOffset for PhyCellId(%d)
Line 2416: RsrpOffsetSsb(%d)
Line 2417: RsrqOffsetSsb(%d)
Line 2418: SinrOffsetSsb(%d)
Line 2419: RsrpoffsetCsiRs(%d)
Line 2420: RsrqOffsetCsiRs(%d)
Line 2421: SinrOffsetCsiRs(%d)
Line 2429: BlackCellList for PciRangeIdx(%d)
Line 2432: Start PhyCellId(%d)
Line 2433: Range(%d)
Line 2442: WhiteCellList for PciRangeIdx(%d)
Line 2445: Start PhyCellId(%d)
Line 2446: Range(%d)
Line 2453: MeasCycleSCellV1530(%d)
Line 2456: ----------------------------------------------------------------------------------
Line 2470: RrmFreqInfoNr::GetNroBlockAvgPresent - MeasObjectPtr is NULL
Line 2484: RrmFreqInfoNr::GetNroBlockAvgPresent - RsType(%d) is invalid
Line 2502: RrmFreqInfoNr::GetNroBlockAvg - MeasObjectPtr is NULL
Line 2516: RrmFreqInfoNr::GetNroBlockAvg - RsType(%d) is invalid
Line 2532: RrmFreqInfoNr::GetAbsThreshPresent - MeasObjectPtr is NULL
Line 2546: RrmFreqInfoNr::GetAbsThreshPresent - RsType(%d) is invalid
Line 2563: RrmFreqInfoNr::GetAbsThreshConsolidation - MeasObjectPtr is NULL
Line 2577: RrmFreqInfoNr::GetAbsThreshConsolidation - RsType(%d) is invalid
Line 2601: RrmFreqInfoNr::GetOffsetFreq - MeasObjectPtr is NULL
Line 2625: RrmFreqInfoNr::InitNeighborCellSet - this pMeasObjectNr is nullptr
Line 2639: RrmFreqInfoNr::ChangeSCellMeasCycle - targetMeasObjId %d scellMeasCycleType(enum) %d
Line 2648: RrmFreqInfoNr::ChangeSCellMeasCycle - this object is not an SCellFreq! cannot change meas cycle for this freq!
Line 2684: RrmFreqInfoNr::ChangeSCellMeasCycle - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 2692: RrmFreqInfoNr::ChangeSCellMeasCycle - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 2704: RrmFreqInfoNr::ChangeSCellMeasCycle - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 2712: RrmFreqInfoNr::ChangeSCellMeasCycle - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 2717: RrmFreqInfoNr::ChangeSCellMeasCycle - Unknown scellMeasCycleType %d
Line 2722: RrmFreqInfoNr::ChangeSCellMeasCycle - Smtc1Present is false!!!
Line 2730: RrmFreqInfoNr::ChangeSCellMeasCycle - RefFreqCsiRsPresent MeasObject cannot be supportted
Line 2734: RrmFreqInfoNr::ChangeSCellMeasCycle - Invalid Reference Signal Configuration!
Line 2739: RrmFreqInfoNr::ChangeSCellMeasCycle - targetMeasObjId %d is not found!
Line 2769: RrmFreqInfoNr::GetSsbFreqPresent - MeasObject[%d]  is NULL
Line 2774: RrmFreqInfoNr::GetSsbFreqPresent [%d] 
Line 2788: RrmFreqInfoNr::GetSmtc1Present - MeasObject[%d]  is NULL
Line 2793: RrmFreqInfoNr::GetSmtc1Present [%d] 
Line 2807: RrmFreqInfoNr::GetSmtc2Present - MeasObject[%d]  is NULL
Line 2812: RrmFreqInfoNr::GetSmtc2Present [%d] 
Line 2829: RrmFreqInfoNr::GetSmtc2Data - MeasObject[%d]  is NULL
Line 2839: RrmFreqInfoNr::GetSmtc2Data PciListCnt[%d] Periodicity[%d]
Line 2843: RrmFreqInfoNr::GetSmtc2Data PciList[%d]
Line 2977: RrmFreqInfoNr::GetWhiteCellListIdx
Line 2986:    >> MeasObjectId(%d) cannot be found
Line 2992:    >> MeasObjectId(%d) WhiteCellListIdx(0x%x)
Line 3000: RrmFreqInfoNr::GetWhiteCellList
Line 3012:    >> MeasObjectId(%d) cannot be found
Line 3018:    >> MeasObjectId(%d) WhiteCellList(0x%x)
Line 3026: RrmFreqInfoNr::GetBlackCellListIdx
Line 3035:    >> MeasObjectId(%d) cannot be found
Line 3041:    >> MeasObjectId(%d) WhiteCellListIdx(0x%x)
Line 3049: RrmFreqInfoNr::GetBlackCellList
Line 3058:    >> MeasObjectId(%d) cannot be found
Line 3064:    >> MeasObjectId(%d) BlackCellList(0x%x)
Line 3073: RrmFreqInfoNr::SetAgcGain - [0]%d[1]%d prev:[0]%d[1]%d
Line 3087: RrmFreqInfoNr::GetDeriveSsbIndexFromCellForObjectId
Line 3098:    >>DeriveSSBIndexFromCell:(bool)%d
Line 3104:    >>NOT PRESENT - bDeriveSsbIndexFromCell:(bool)%d
Line 3112: RrmFreqInfoNr::GetBestIdentifiedCellPtr for ARFCN:%d MeasObjectId:%d
Line 3123:    >>pMeasObject is NULL for MeasObjectId:%d
Line 3127:    >>SORT - IDLISTED IDDETECTED cellset with AscendingCompareCellSsbRsrp
Line 3142:    >>Best cell found in IDLISTED - IDLISTED.Rsrp:%d >= IDDETECTED.Rsrp:%d
Line 3148:    >>Best cell found in IDDETECTED - IDLISTED.Rsrp:%d < IDDETECTED.Rsrp:%d
Line 3154:    >>Best cell found in IDLISTED
Line 3159:    >>Best cell found in IDDETECTED
Line 3164:    >>No Cell found
Line 3173: RrmFreqInfoNr::PrintAllCellSetCells - Arfcn:%d MeasObjectId:%d
Line 3183:    >>MeasObjectId not found at this frequency
Line 3194:    >>SSB - SetType:%s(%d) is empty
Line 3202:    >>SSB - SetType:%s CellId:%d CellPtr:0x%08x RSRP:%d CorrEnergy:%d SsbIndex:%d SsbTimingOffset:%d
Line 3213:    >>CSI - SetType:%s(%d) is empty
Line 3220:    >>CSI - SetType:%s CellId:%d CellPtr:0x%08x RSRP:%d
Line 3227:    >>[SET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 3233: RrmFreqInfoNr::SetNroBlockAvg - MeasObjectId:%d RsType:(enum)%d NroBlockAvgPresent:(bool)%d NroBlockAvg:%d
Line 3239: RrmFreqInfoNr::SetNroBlockAvg - MeasObjectPtr is NULL
Line 3255: RrmFreqInfoNr::SetNroBlockAvg - RsType(%d) is invalid
Line 3265: RrmFreqInfoNr::SetAbsThreshConsolidation - MeasObjectId:%d RsType:(enum)%d AbsThreshPresent:(bool)%d
Line 3268:    >>rAbsThresh - RsrpPresent:(bool)%d Rsrp:%d[/100dBm] RsrqPresent:(bool)%d Rsrq:%d[/100dB] SinrPresent:(bool)%d Sinr:%d[/100dB]
Line 3274: RrmFreqInfoNr::SetAbsThreshConsolidation - MeasObjectPtr is NULL
Line 3290: RrmFreqInfoNr::SetAbsThreshConsolidation - RsType(%d) is invalid
Line 3301: RrmFreqInfoNr::GetSibCarrierFreqInfo:nullptr - Arfcn:%d
Line 3313: RrmFreqInfoNr::SetSibCarrierFreqInfo - Arfcn:%d
Line 3318:    >>pCarrierFreqInfo is allocated - ptr:0x%08x
Line 3337: CheckSibBlackCellList - FOUND, CellId:%d Start:%d Range:%d
Line 3344: CheckSibBlackCellList - isBlackCell:(bool)%d Arfcn:%d CellId:%d
Line 3351: SetSibBlackCellList - Arfcn:%d NumBlackCellList:%d
Line 3366: SetSibReselectionPriority - Arfcn:%d ReselectionPriority:%d
Line 3382:    >>[GET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 3387: GetSibsfMedium - Arfcn:%d sfMedium:%d 
Line 3394: GetSibsfHigh - Arfcn:%d sfHigh:%d 
Line 3401: SetSibTreselection - Arfcn:%d Treselection:%d
Line 3410: SetSibSpeedStateScaleFactors - Arfcn:%d sfMedium:%d sfHigh:%d
Line 3420: RrmFreqInfoNr::GetSibSsbConfig - Arfcn:%d
Line 3451:    >>pCarrierFreqInfo:NULL - set default Periodicity Smtc SsRssiMeasurement
Line 3463:    >>Delete m_SibFreqInfo.pCarrierFreqInfo:0x%08x
Line 3471: RrmFreqInfoNr::FilterAllCellPerRSIndex - SsbBitmap:0x%08x %08x
Line 3482:    >>pMeasObject is nullptr. No Measurement Result in this Freq.
Line 3501:    >>NeighborCellSet for SetType:%s(%d) is empty
Line 3515:    >>NeighborCellSet for SetType:%s(%d) is empty
Line 3551: RrmFreqInfoNr::GetCsiRsFreqInfo - m_pCsiRsFreqInfo is nullptr!
Line 3570: RrmFreqInfoNr::UpdateCsiRsFreqInfo - fail to alloc m_pCsiRsFreqInfo
Line 3587: RrmFreqInfoNr::UpdateCsiRsFreqInfo - RefServCellIndex not present, set to 0
Line 3604: RrmFreqInfoNr::GetMeasScheduleInfoForCsiRs - m_pCsiRsFreqInfo is nullptr
Line 3616: RrmFreqInfoNr::SetMeasScheduleInfoForCsiRs - m_pCsiRsFreqInfo is nullptr
Line 3626: RrmFreqInfoNr::DisplayCsiRsResourceConfigMobility - MeasObjectId:%d
Line 3634:    >>RefServCellIndexPresent:%d RefServCellIndex:%d SubcarrierSpacing:%d CsiRsCellListMobilityCnt:%d
Line 3642:    >>CsiRsCell[%d] - CellId:%d CsiRsMeasBw.StartPRB:%d CsiRsMeasBw.NrOfPRBs:(enum)%d DensityPresent:(bool)%d Density:%d CsiRsResourceListMobilityCnt:%d
Line 3650:      ::CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbPresent:(bool)%d AssociatedSsbIndex:%d FreqDomain:(enum)%d FirstOfdmSymbol:%d Sequence:%d
Line 3674: UpdateCsiRsResourceConfigMobility - pMeasObjectNrConfig is nullptr
Line 3678:    >>FreqBandIndicatorNRV1530Present:(bool)%d
Line 3697:    >>CsiRsResourceConfigMobility present but RefFreqCsiRs is absent
Line 3733:    >>ADD cell to CSI UNIDLISTED cellset - CellId:%d MeasObjectId:%d BandId:%d
Line 3741:      ::FAILED
Line 3749:    >>CsiRsCellListMobility is nullptr
Line 3763: RrmFreqInfoNr::SetSsbPeriod - ARFCN:%d SsbPeriodicity(enum)(NEW:%d OLD:%d)
