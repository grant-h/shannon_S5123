Line 62: RrmMngrConfigIdleNr::Init
Line 73: RrmMngrConfigIdleNr::Reset
Line 91: DecodeSIB1_CellSelectionCriterion - PresentBitmask:0x%08x %08x
Line 101:    >>CellSelectionInfo:ABSENT
Line 112:    >>ServingCellConfigCommonSIB:ABSENT
Line 120: RrmMngrConfigIdleNr::DecodeCellStatusReq
Line 124:    >>RRM_RRC_CELL_STATUS_REQ - DECODE SIB1
Line 129:    >>pSib1 is nullptr
Line 132:    >>RRM_RRC_CELL_STATUS_REQ - DECODE RRC BARRED LIST
Line 142: RrmMngrConfigIdleNr::DecodeReselInfoInd - (bool)(Deprioritisation:%d DedicatedPriority:%d Qoffsettemp:%d BarredInfo:%d)
Line 144: CLEAR LIST - DeprioritisationList DedicatedPriorityList QoffsetTempList RrcBarredList
Line 153: UPDATE DeprioritisationList
Line 159: UPDATE DedicatedPriorityList
Line 165: UPDATE QoffsetTempList
Line 171: UPDATE RrcBarredList
Line 182: RrmMngrConfigIdleNr::DecodeSibUpdateReq - PresentSibTypeBitMask:0x%08x %08x PPowerClass:%d
Line 187:    >>currRrmState:%s(%d)
Line 212:    >>pSib1 is nullptr
Line 227:    >>pSib2 is nullptr
Line 242:    >>pSib3 is nullptr
Line 257:    >>pSib4 is nullptr
Line 272:    >>pSib5 is nullptr
Line 277:    >>Unexpected sib_type:(enum)%d
Line 298:    >>DeprioritisationInfo[%d] - type:(enum)%d Arfcn:%d TimeStamp:%d Duration:%d
Line 313: RrmMngrConfigIdleNr::IsNrDeprioritisation - Arfcn:%d
Line 327:    >>Found but expired, Erase elem - type:(enum)%d Arfcn:%d
Line 335:    >>Found, Return true - type:(enum)%d Arfcn:%d
Line 344:    >>Not Found in DeprioritisationList, Return false
Line 352: RrmMngrConfigIdleNr::UpdateDedicatedPriorityList - NrFreqPriorityInfoIncluded:(bool)%d EutraFreqPriorityInfoIncluded:(bool)%d
Line 364:    >>NR DedicatedPriorityInfo[%d] - arfcnNr:%d priority:%d subPriority:(enum)%d Timestamp:%d Duration:%d
Line 384:    >>EUTRA DedicatedPriorityInfo[%d] - arfcnNr:%d priority:%d subPriority:%d Timestamp:%d Duration:%d
Line 415:    >>Found but expired, Erase elem - Arfcn:%d
Line 423:    >>Found NR Arfcn:%d - Dedicated ReselectionPriority:%d
Line 434:    >>Not Found in NrDedicatedPriorityList, Return false
Line 454:    >>Found but expired, Erase elem - Arfcn:%d
Line 462:    >>Found LTE Arfcn:%d - Dedicated ReselectionPriority:%d
Line 473:    >>Not Found in EutraDedicatedPriorityList, Return false
Line 480: RrmMngrConfigIdleNr::CheckDedicatedPriorityProvided
Line 492:    >>ERASE expired elem - NR Arfcn:%d
Line 498:    >>NR Arfcn:%d ReselectionPriority:%d
Line 512:    >>ERASE expired elem - LTE Arfcn:%d
Line 518:    >>LTE Arfcn:%d ReselectionPriority:%d
Line 538:    >>QoffsetTempInfo[%d] - Arfcn:%d CellId:%d Qoffsettemp:%d TimeStamp:%d Duration:%d
Line 568:    >>Found but expired, Erase elem - Arfcn:%d CellId:%d
Line 576:    >>Found Arfcn:%d CellId:%d - QoffsetTemp:%d
Line 606: RrmMngrConfigIdleNr::GetPcell - fail to alloc pServCell
Line 614:    >>PCELL - MO:CR_PCELL(%d) is assigned
Line 619:    >>PCELL - MeasScheduleInfo is configured
Line 622:    >>GET PCELL - ARFCN:%d CELLID:%d MO:%d
Line 637: NEW INTRA FREQ
Line 643:    >>fail to alloc pIntraFreq
Line 653: INTRA FREQ - ADD NEW MO
Line 659:    >>INTRA FREQ - MO:CR_INTRA(%d) is assigned
Line 667:    >>INTRA FREQ - MeasScheduleInfo - MockMeasObject:(bool)%d ObjectId:%d
Line 673:    >>INTRA FREQ - MeasScheduleInfo is configured - MockMeasObject:(bool)%d ObjectId:%d
Line 677: GET INTRA FREQ - ARFCN:%d MO:%d
Line 690: INTER FREQ - ARFCN:%d MO:%d
Line 694:    >>INTER FREQ - FOUND
Line 702:    >>INTER FREQ - NOT FOUND
Line 709: RrmMngrConfigIdleNr::GetInterFreq - MeasObjectId:%d
Line 721: NEW INTER FREQ
Line 727:    >>fail to alloc pInterFreq
Line 737: INTER FREQ - ADD NEW MO
Line 741:    >>INTER FREQ - MO:CR_INTER(%d) is assigned
Line 746:    >>INTER FREQ - MeasScheduleInfo is configured
Line 750: GET INTER FREQ - ARFCN:%d MO:%d
Line 763: EUTRA FREQ - ARFCN:%d MO:%d
Line 767:    >>EUTRA FREQ - FOUND
Line 775:    >>EUTRA FREQ - NOT FOUND
Line 782: RrmMngrConfigIdleNr::GetEutraFreq - MeasObjectId:%d
Line 794: NEW EUTRA FREQ
Line 800:    >>fail to alloc pEutraFreq
Line 810: EUTRA FREQ - ADD NEW MO
Line 815:    >>EUTRA FREQ - MO:CR_IRAT_LTE(%d) is assigned
Line 820:    >>EUTRA FREQ - MeasScheduleInfo is configured
Line 824: GET EUTRA FREQ - ARFCN:%d MO:%d
Line 852: Convert_enum_CellReselectionSubPriority - invalid eSubPriority:(enum)%d
Line 891: Convert_enum_SsbPeriodicityServingCell - invalid ePeriodicity:(enum)%d
Line 926: Convert_enum_Tevaluation - invalid eTevaluation:(enum)%d
Line 961: Convert_enum_ThystNormal - invalid eThystNormal:(enum)%d
Line 996: Convert_enum_PeriodicityAndOffsetChoice - invalid ePeriodicity:(enum)%d
Line 1075: Convert_enum_Qhyst - invalid eQhyst:(enum)%d
Line 1214: Convert_enum_QoffsetRange - invalid eQoffsetRange:(enum)%d
Line 1253: Convert_enum_Eutra_AllowedMeasBandwidth - invalid eMBW:(enum)%d
Line 1392: NrRrcDb_EUTRA_Q_OffsetRange_e - invalid eQoffsetRange:(enum)%d
Line 1428: Convert_enum_SsbMtcDuration - invalid eDuration:(enum)%d
Line 1460: Convert_enum_PagingCycle - invalid ePagingCycle:(enum)%d
Line 1491: Convert_enum_SpeedStateScaleFactors_sf_Medium - invalid eSfMedium:(enum)%d
Line 1522: Convert_enum_SpeedStateScaleFactors_sf_High - invalid eSfHigh:(enum)%d
Line 1553: Convert_enum_NrRrcDb_sf_Medium - invalid eSfMedium:(enum)%d
Line 1584: Convert_enum_NrRrcDb_sf_High - invalid eSfHigh:(enum)%d
Line 1659: Convert_enum_PciRange - invalid ePciRange:(enum)%d
Line 1678:    >>NotPresent SsbBitmap:0x%08x %08x
Line 1685:    >>ShortBitmap SsbBitmap:0x%08x %08x
Line 1692:    >>MediumBitmap SsbBitmap:0x%08x %08x
Line 1699:    >>LongBitmap SsbBitmap:0x%08x %08x
Line 1704: Convert_struct_SsbToMeasure - invalid Choice:(enum)%d
Line 1714:    >>Reversed SsbBitmap:0x%08x %08x
Line 1723: RrmMngrConfigIdleNr::Convert_ReselectionPriority - Priority:%d SubPriority:%d
Line 1732:    >>ReselectionPriority:%d(NULL:%d LOWEST:%d HIGHEST:%d)
Line 1741:    >>ReselectionPriority:%d((Priority:%d)*10 + SubPriority:%d)
Line 1750: DecodeSib1 - PresentBitmask:0x%08x %08x
Line 1758:    >>currRrmState:%s(%d)
Line 1770:    >>PCELL:NULL
Line 1783:    >>CellSelectionInfo:ABSENT
Line 1796:    >>ServingCellConfigCommonSIB:ABSENT
Line 1807: DecodeSib1_CellSelectionInfo - PresentBitmask:0x%08x %08x
Line 1814:    >>QrxLevMin:%d(%d[/100dBm])
Line 1819:    >>QrxLevMin:ABSENT,DEFAULT(%d[/100dBm])
Line 1827:    >>QrxLevMinOffset:%d(%d[/100dB])
Line 1832:    >>QrxLevMinOffset:ABSENT,DEFAULT(%d[/100dB])
Line 1841:    >>QrxLevMinSUL:%d(%d[/100dBm])
Line 1846:    >>QrxLevMinSUL:ABSENT((bool)%d)
Line 1854:    >>QqualMin:%d(%d[/100dB])
Line 1859:    >>QqualMin:ABSENT,DEFAULT(%d[/100dB])
Line 1867:    >>QqualMinOffset:%d(%d[/100dB])
Line 1872:    >>QqualMinOffset:ABSENT,DEFAULT(%d[/100dB])
Line 1882: DecodeSib1_ServingCellConfigCommonSIB - PresentBitmask:0x%08x %08x
Line 1899:    >>ssbPeriodicityServingCell:(enum)%d(%d[ms])
Line 1905:    >>ssbPeriodicityServingCell:ABSENT,DEFAULT(%d[ms])
Line 1916: DecodeSib1_sub_Pmax
Line 1926:    >>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
Line 1935:      ::Pmax:%d(%d[/100dBm])
Line 1946:    >>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
Line 1950:    >>NrNsPmaxValuePresentBitmask:0x%08x %08x
Line 1961:      ::AdditionalPmax:%d(%d[/100dBm])
Line 1966:    >>rIE.uplinkConfigCommon.frequencyInfoUL.MultiFrequencyBandList.frequencyBandList[0]:NULL
Line 1975:      ::Pmax:ABSENT,DEFAULT(%d[/100dBm])
Line 1983:      ::AdditionalPmax:ABSENT((bool)%d)
Line 1991: DecodeSib1_sub_ssbPositionsInBurst
Line 1999: SsbPositionsInBurstPresentBitmask:0x%08x %08x
Line 2006:    >>inOneGroup:0x%02x(0x%02x)
Line 2012:    >>inOneGroup:ABSENT,DEFAULT(0x%02x)
Line 2020:    >>groupPresence:0x%02x(0x%02x)
Line 2026:    >>groupPresence:ABSENT,DEFAULT(0x%02x)
Line 2032:    >>ssbPositionsInBurst:ABSENT(inOneGroup:0x%02x groupPresence:0x%02x)
Line 2040: DecodeSib1_sub_freqBandIndicatorNR
Line 2055:    >>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
Line 2065:    >>NrMultiBandInfoPresentBitmask:0x%08x %08x
Line 2073:      ::freqBandIndicatorNR:%d
Line 2078:    >>rIE.uplinkConfigCommon.frequencyInfoUL.MultiFrequencyBandList.frequencyBandList[0]:NULL
Line 2085: freqBandIndicatorNR:%d is present in frequencyInfoUL-SIB in UplinkConfigCommonSIB
Line 2090: freqBandIndicatorNR:%d is not present in frequencyInfoUL-SIB in UplinkConfigCommonSIB
Line 2098:    >>FrequencyInfoDlSibPresentBitmask:0x%08x %08x
Line 2108:    >>NrMultiBandInfoPresentBitmask:0x%08x %08x
Line 2116:      ::freqBandIndicatorNR:%d
Line 2121:    >>rIE.downlinkConfigCommon.frequencyInfoDL.MultiFrequencyBandList.frequencyBandList[0]:NULL
Line 2128: freqBandIndicatorNR:%d is present in frequencyInfoDL-SIB in DownlinkConfigCommonSIB
Line 2132: freqBandIndicatorNR:%d is not present in frequencyInfoDL-SIB in DownlinkConfigCommonSIB
Line 2140: DecodeSib1_sub_defaultPagingCycle
Line 2149: PCCHConfigPresentBitmask:0x%08x %08x
Line 2157:    >>defaultPagingCycle:(enum)%d(DefaultDrxCycle:%d[ms])
Line 2162:    >>defaultPagingCycle:ABSENT
Line 2168:    >>downlinkConfigCommon:ABSENT
Line 2175:    >>defaultPagingCycle:ABSENT,DEFAULT(DefaultDrxCycle:0x%d[ms])
Line 2182: DecodeSib2 - PresentBitmask:0x%08x %08x
Line 2200:    >>INTRA FREQ:NULL
Line 2213:    >>CellReselectionInfoCommon:ABSENT
Line 2226:    >>CellReselectionServingFreqInfo:ABSENT
Line 2241:    >>IntraFreqCellReselectionInfo:ABSENT
Line 2250:    >>UPDATE INTRA FREQ - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
Line 2253:    >>UPDATE INTRA FREQ - Treselection:%d
Line 2258:    >>TreselectionSfPresent is vaild
Line 2264:    >>TreselectionSfPresent is not vaild
Line 2266:    >>UPDATE INTRA FREQ - sfMedium(%d) sfHigh(%d)
Line 2276: DecodeSib2_CellReselectionInfoCommon - PresentBitmask:0x%08x %08x
Line 2288:    >>RangeToBestCell:(enum)%d(%d[/100dB])
Line 2293:    >>RangeToBestCell:ABSENT((bool)%d)
Line 2301:    >>QhystSIB(enum)%d(%d[/100dB])
Line 2314: DecodeSib2_CellReselectionServingFreqInfo - PresentBitmask:0x%08x %08x
Line 2332: DecodeSib2_IntraFreqCellReselectionInfo - PresentBitmask:0x%08x %08x
Line 2345:    >>TreselectionSIB:%d(%d[s])
Line 2350:    >>TreselectionSIB:ABSENT,DEFAULT(%d[s])
Line 2371:    >>deriveSSB_IndexFromCell:(bool)%d((bool)%d)
Line 2377:    >>deriveSSB_IndexFromCell:ABSENT((bool)%d)
Line 2385: DecodeSib2_sub_SsBlocksParameter
Line 2393:    >>NrOfSsbToAverage:%d(%d)
Line 2399:    >>NrOfSsbToAverage:ABSENT((bool)%d)
Line 2407:    >>AbsThreshSsbConsolidationPresent:(bool)%d
Line 2415:      ::ThresholdRsrp:%d(%d[/100dBm])
Line 2420:      ::ThresholdRsrp:ABSENT((bool)%d)
Line 2429:      ::ThresholdRsrq:%d(%d[/100dB])
Line 2434:      ::ThresholdRsrq:ABSENT((bool)%d)
Line 2443:      ::ThresholdSinr:%d(%d[/100dB])
Line 2448:      ::ThresholdSinr:ABSENT((bool)%d)
Line 2454:    >>AbsThreshSsbConsolidationPresent:ABSENT(bool)%d
Line 2462: DecodeSib2_sub_SpeedStateReselectionPars
Line 2469:    >>SpeedStateReselectionParsPresent:(bool)%d
Line 2478:      ::QhystSf.SfMedium:%d(%d)
Line 2484:      ::QhystSf.SfHigh:%d(%d)
Line 2491:    >>SpeedStateReselectionParsPresent:ABSENT(bool)%d
Line 2499: DecodeSib2_sub_MobilityStateParameters
Line 2509:    >>Tevaluation:(enum)%d(%d[s])
Line 2515:    >>Tevaluation:ABSENT(%d[s])
Line 2526:    >>ThystNormal:(enum)%d(%d[s])
Line 2532:    >>ThystNormal:ABSENT,DEFAULT(%d[s])
Line 2543:    >>NcellChangeMedium:%d(%d)
Line 2549:    >>NcellChangeMedium:ABSENT(%d)
Line 2560:    >>NCellChangeHigh:%d(%d)
Line 2566:    >>NCellChangeHigh:ABSENT,DEFAULT(%d)
Line 2574: DecodeSib2_sub_ReselectionPriority
Line 2582:    >>ReselectionPrioritySIB:%d(%d)
Line 2588:    >>ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
Line 2598:    >>ReselectionSubPrioritySIB:(enum)%d(%d)
Line 2604:    >>ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
Line 2612: DecodeSib2_sub_SnonIntraSearch
Line 2620:    >>SnonIntraSearchP:%d(%d[/100dBm])
Line 2626:    >>SnonIntraSearchP:ABSENT,DEFAULT(%d[/100dBm])
Line 2635:    >>SnonIntraSearchQ:%d(%d[/100dB])
Line 2641:    >>SnonIntraSearchQ:ABSENT,DEFAULT(%d[/100dB])
Line 2649: DecodeSib2_sub_ThreshServingLow
Line 2657:    >>ThreshServingLowP:%d(%d[/100dBm])
Line 2663:    >>ThreshServingLowP:ABSENT,DEFAULT(%d[/100dBm])
Line 2672:    >>ThreshServingLowQ:%d(%d[/100dB])
Line 2679:    >>ThreshServingLowQ:ABSENT(bool)%d
Line 2687: DecodeSib2_sub_Qparameter
Line 2694:    >>QrxLevMin:%d(%d[/100dBm])
Line 2699:    >>QrxLevMin:%d(%d[/100dBm])
Line 2709:    >>QrxLevMinSUL:%d((bool)%d %d[/100dBm])
Line 2714:    >>QrxLevMinSUL:ABSENT((bool)%d)
Line 2722:    >>QqualMin:%d(%d[/100dBm])
Line 2727:    >>QqualMin:ABSENT,DEFAULT(%d[/100dBm])
Line 2735: DecodeSib2_sub_SintraSearch
Line 2743:    >>SintraSearchP:%d(%d[/100dBm])
Line 2749:    >>SintraSearchP:ABSENT,DEFAULT(%d[/100dBm])
Line 2758:    >>SintraSearchQ:%d(%d[/100dBm])
Line 2764:    >>SintraSearchQ:ABSENT,DEFAULT(%d[/100dBm])
Line 2772: DecodeSib2_sub_Pmax
Line 2781:    >>Pmax:%d(%d[/100dBm])
Line 2787:    >>Pmax:ABSENT,DEFAULT(%d[/100dBm])
Line 2798:    >>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
Line 2802:    >>NrNsPmaxValuePresentBitmask:0x%08x %08x
Line 2813:      ::AdditionalPmax:%d(%d[/100dBm])
Line 2818:    >>rIE.frequencyBandList.frequencyBandList[0]:NULL
Line 2827:    >>AdditionalPmax:ABSENT((bool)%d)
Line 2835: DecodeSib2_sub_Smtc
Line 2850:    >>SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(enum)%d(%d[sf]) Duration:(enum)%d(%d[sf])
Line 2856:    >>SMTC - ABSENT((bool)%d Periodicity:%d[sf])
Line 2865: DecodeSib2_sub_SsRssiMeasurement
Line 2873:    >>ss_RSSI_Measurement:present((bool)%d)
Line 2878:    >>ss_RSSI_Measurement:ABSENT((bool)%d)
Line 2886: DecodeSib2_sub_SsbToMeasure
Line 2899:    >>SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
Line 2907:    >>SsbToMeasure:ABSENT,DEFAULT(SsbToMeasure:0x%08x %08x)
Line 2916: DecodeSib3 - PresentBitmask:0x%08x %08x
Line 2923:    >>INTRA FREQ:NULL
Line 2935:    >>IntraFreqNeighCellList:ABSENT
Line 2946:    >>IntraFreqBlackCellList:ABSENT
Line 2954: DecodeSib3_IntraFreqBlackCellList
Line 2980: DecodeSib3_IntraFreqNeighCellList
Line 2997:    >>intraFreqNeighCellList[%d] - PresentBitmask:0x%08x %08x
Line 3007:    >>pCell:NULL
Line 3023:    >>ADD CELL to intraFreq - ObjectId:CR_INTRA(%d) SetType:UNIDLISTED(%d)
Line 3027:      ::ADDED
Line 3031:      ::FAILED
Line 3038:    >>FAILED DecodeSib3_sub_IntraFreqNeighCellInfo
Line 3046:    >>intraFreqNeighCellList:ABSENT
Line 3054: DecodeSib3_sub_IntraFreqNeighCellInfo
Line 3064:    >>physCellId:%d
Line 3068:    >>physCellId:ABSENT
Line 3077:    >>QoffsetCell:(enum)%d(%d[/100dB])
Line 3082:    >>QoffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 3091:    >>QrxLevMinOffsetCell:%d(%d[/100dB])
Line 3097:    >>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 3107:    >>QrxLevMinOffsetCellSUL:%d(%d[/100dB])
Line 3114:    >>QrxLevMinOffsetCellSUL:ABSENT,DEFAULT(%d[/100dB])
Line 3123:    >>QqualMinOffsetCell:%d(%d[/100dB])
Line 3129:    >>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 3132:    >>UPDATE INTRA NCELL - NeighCellInfo
Line 3140: DecodeSib4
Line 3151:    >>interFreqCarrierFreqList[%d] - PresentBitmask:0x%08x %08x
Line 3160:    >>interFreqCarrierFreqList[%d] - MeasObjectId:CR_INTER(%d) is assigned
Line 3165:    >>INTER FREQ:NULL
Line 3177: DecodeSib4_sub_InterFreqCarrierFreqInfo - MeasObjectId:%d
Line 3195:    >>dl_CarrierFreq:%d
Line 3199:    >>dl_CarrierFreq:ABSENT
Line 3208:    >>ssbSubcarrierSpacing:(enum)%d
Line 3212:    >>ssbSubcarrierSpacing:ABSENT
Line 3217:    >>INTER FREQ(MeasObjectId:%d) - BAND:%d ARFCN:%d SCS:(enum)%d
Line 3223:    >>INTER FREQ(MeasObjectId:%d) - sibInterFreqInfo
Line 3269:    >>DeriveSsbIndexFromCell:(bool)%d
Line 3275:    >>DeriveSsbIndexFromCell:ABSENT((bool)%d)
Line 3279:    >>INTER FREQ(MeasObjectId:%d) - CELL LIST
Line 3287:    >>UPDATE INTER FREQ(MeasObjectId:%d) - carrierFreqInfo
Line 3291:    >>UPDATE INTER FREQ(MeasObjectId:%d) - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
Line 3294:    >>UPDATE INTER FREQ - Treselection:%d
Line 3302: DecodeSib4_InterFreqBlackCellList
Line 3328: DecodeSib4_InterFreqNeighCellList - MeasObjectId:%d
Line 3345:    >>InterFreqNeighCellInfo[%d] - PresentBitmask:0x%08x %08x
Line 3355:    >>pCell:NULL
Line 3371:    >>ADD CELL to INTER FREQ - ObjectId:%d SetType:UNIDLISTED((enum)%d) SCS:(enum)%d BAND:%d
Line 3375:      ::ADDED
Line 3379:      ::FAILED
Line 3386:    >>FAILED DecodeSib4_sub_InterFreqNeighCellInfo
Line 3394:    >>interFreqNeighCellList:ABSENT
Line 3402: DecodeSib4_sub_InterFreqNeighCellInfo
Line 3412:    >>physCellId:%d
Line 3416:    >>physCellId:ABSENT
Line 3425:    >>QoffsetCell:(enum)%d(%d[/100dB])
Line 3430:    >>QoffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 3439:    >>QrxLevMinOffsetCell:%d(%d[/100dB])
Line 3445:    >>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 3455:    >>QrxLevMinOffsetCellSUL:%d(%d[/100dB])
Line 3462:    >>QrxLevMinOffsetCellSUL:ABSENT,DEFAULT(%d[/100dB])
Line 3471:    >>QqualMinOffsetCell:%d(%d[/100dB])
Line 3477:    >>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 3480:    >>UPDATE INTER NCELL - neighCellInfo
Line 3488: DecodeSib4_sub_freqBandIndicatorNR
Line 3500:    >>NrMultiBandInfoPresentBitmask:0x%08x %08x
Line 3508:      ::freqBandIndicatorNR:%d
Line 3513:    >>rIE.frequencyBandList.frequencyBandList[0]:NULL
Line 3519: freqBandIndicatorNR:%d is present in SIB4
Line 3523: freqBandIndicatorNR:%d is not present in SIB4
Line 3531: DecodeSib4_sub_SsBlocksParameter
Line 3541:    >>nrofSS_BlocksToAverage:%d(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 3549:    >>nrofSS_BlocksToAverage:ABSENT(NroSsBlocksToAvgPresent:(bool)%d NroSsBlocksToAvg:%d)
Line 3557:    >>AbsThreshSsBlocksConsolidationPresent:(bool)%d
Line 3565:      ::ThresholdRsrp:%d(%d[/100dBm])
Line 3571:      ::ThresholdRsrp:ABSENT((bool)%d)
Line 3580:      ::ThresholdRsrq:%d(%d[/100dB])
Line 3586:      ::ThresholdRsrq:ABSENT((bool)%d)
Line 3595:      ::ThresholdSinr:%d(%d[/100dB])
Line 3600:      ::ThresholdSinr:ABSENT((bool)%d)
Line 3606:    >>AbsThreshSsBlocksConsolidationPresent:ABSENT(bool)%d
Line 3614: DecodeSib4_sub_Smtc
Line 3629:    >>SMTC - Periodicity:(enum)%d(%d[sf]) Offset:(enum)%d(%d[sf]) Duration:(enum)%d(%d[sf])
Line 3635:    >>SMTC - ABSENT((bool)%d) Periodicity:%d[sf]
Line 3644: DecodeSib4_sub_SsbToMeasure
Line 3657:    >>SsbToMeasure:present(SsbToMeasure:0x%08x %08x)
Line 3665:    >>SsbToMeasure:ABSENT,DEFAULT(SsbToMeasure:0x%08x %08x)
Line 3673: DecodeSib4_sub_SsRssiMeasurement
Line 3681:    >>ss_RSSI_Measurement:present((bool)%d)
Line 3686:    >>ss_RSSI_Measurement:ABSENT((bool)%d)
Line 3694: DecodeSib4_sub_Pmax
Line 3703:    >>Pmax:%d(%d[/100dBm])
Line 3709:    >>Pmax:ABSENT,DEFAULT(%d[/100dBm])
Line 3720:    >>FrequencyInfoULSIBPresentBitmask:0x%08x %08x
Line 3724:    >>NrNsPmaxValuePresentBitmask:0x%08x %08x
Line 3735:      ::AdditionalPmax:%d(%d[/100dBm])
Line 3740:    >>rIE.frequencyBandList.frequencyBandList[0]:NULL
Line 3749:    >>AdditionalPmax:ABSENT((bool)%d)
Line 3757: DecodeSib4_sub_ThreshX
Line 3765:    >>ThreshX_HighP:%d(%d[/100dBm])
Line 3771:    >>ThreshX_HighP:ABSENT,DEFAULT(%d[/100dBm])
Line 3780:    >>threshX_LowP:%d(%d[/100dBm])
Line 3786:    >>ThreshX_LowP:ABSENT(%d[/100dBm])
Line 3799:    >>ThreshX_HighQ:%d(%d[/100dB]) threshX_LowQ:%d(%d[/100dB])
Line 3808:    >>ThreshX_HighQ:ABSENT((bool)%d) threshX_LowQ:ABSENT((bool)%d)
Line 3816: DecodeSib4_sub_Qparameter
Line 3823:    >>QrxLevMin:%d(%d[/100dBm])
Line 3828:    >>QrxLevMin:%d(%d[/100dBm])
Line 3838:    >>QrxLevMinSUL:%d((bool)%d %d[/100dBm])
Line 3843:    >>QrxLevMinSUL:ABSENT((bool)%d)
Line 3851:    >>QqualMin:%d(%d[/100dBm])
Line 3856:    >>QqualMin:ABSENT,DEFAULT(%d[/100dBm])
Line 3864:    >>QoffsetFreq:%d(%d[/100dB])
Line 3869:    >>QoffsetFreq:ABSENT,DEFAULT(%d[/100dB])
Line 3877: DecodeSib4_sub_ReselectionPriority
Line 3885:    >>ReselectionPrioritySIB:%d(%d)
Line 3891:    >>ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
Line 3901:    >>ReselectionSubPrioritySIB:(enum)%d(%d)
Line 3907:    >>ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
Line 3915: DecodeSib4_sub_TreselectionNR
Line 3922:    >>TreselectionSIB:%d(%d[s])
Line 3927:    >>TreselectionSIB:ABSENT,DEFAULT(%d[s])
Line 3940:    >>TreselectionSf:PRESENT,(bool)%d High:(enum)%d(%d[%]) Medium:(enum)%d(%d[%])
Line 3947:    >>TreselectionSf:ABSENT,(bool)%d
Line 3956: DecodeSib5 - PresentBitmask:0x%08x %08x
Line 3967:    >>carrierFreqListEUTRA[%d] - PresentBitmask:0x%08x %08x
Line 3977:    >>carrierFreqListEUTRA[%d] - MeasObjectId:CR_IRAT_LTE(%d) is assigned
Line 3982:    >>EUTRA FREQ:NULL
Line 3998: DecodeSib5_CarrierFreqEUTRA - MeasObjectId:%d
Line 4015:    >>carrierFreq:%d
Line 4019:    >>carrierFreq:ABSENT
Line 4027:    >>EUTRA FREQ(MeasObjectId:%d) - BAND:%d ARFCN:%d
Line 4034:    >>Pmax:%d(%d[/100dBm])
Line 4040:    >>Pmax:ABSENT,DEFAULT(%d[/100dBm])
Line 4062:    >>AllowedMeasBandwidth:(enum)%d(%d[MBW])
Line 4067:    >>AllowedMeasBandwidth:ABSENT,DEFAULT(%d[MBW])
Line 4075:    >>PresenceAntennaPort1:(bool)%d
Line 4080:    >>PresenceAntennaPort1:ABSENT,DEFAULT((bool)%d)
Line 4083:    >>UPDATE EUTRA FREQ(MeasObjectId:%d) - carrierFreqInfo
Line 4087:    >>UPDATE EUTRA FREQ(MeasObjectId:%d) - reselectionPriority:%d(ReselectionPrioritySIB:%d ReselectionSubPrioritySIB:%d)
Line 4101: DecodeSib5_Eutra_FreqBlackCellList
Line 4127: DecodeSib5_Eutra_FreqNeighCellList
Line 4142:    >>EUTRA_freqNeighCellInfo[%d] - PresentBitmask:0x%08x %08x
Line 4152:    >>pCell:NULL
Line 4165:    >>ADD CELL to EUTRA Freq - ObjectId:CR_IRAT_LTE(%d) SetType:UNIDLISTED(%d)
Line 4169:      ::ADDED
Line 4173:      ::FAILED
Line 4180:    >>FAILED DecodeSib5_sub_Eutra_FreqNeighCellInfo
Line 4188:    >>eutra_FreqNeighCellList:ABSENT
Line 4196: DecodeSib5_sub_Eutra_FreqNeighCellInfo
Line 4206:    >>physCellId:%d
Line 4210:    >>physCellId:ABSENT
Line 4220:    >>QoffsetCell:(enum)%d(%d[/100dB])
Line 4225:    >>QoffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 4234:    >>QrxLevMinOffsetCell:%d(%d[/100dB])
Line 4240:    >>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 4249:    >>QqualMinOffsetCell:%d(%d[/100dB])
Line 4255:    >>QrxLevMinOffsetCell:ABSENT,DEFAULT(%d[/100dB])
Line 4266: DecodeSib5_sub_Eutra_freqBandIndicator
Line 4276:    >>EUTRAMultiBandInfoPresentBitmask:0x%08x %08x
Line 4284:      ::EUTRA_freqBandIndicator:%d
Line 4290: EUTRA_freqBandIndicator:%d is present in SIB5
Line 4294: EUTRA_freqBandIndicator:%d is not present in SIB5
Line 4302: DecodeSib5_sub_ReselectionPriority
Line 4310:    >>ReselectionPrioritySIB:%d(%d)
Line 4316:    >>ReselectionPrioritySIB:ABSENT,DEFAULT(%d)
Line 4326:    >>ReselectionSubPrioritySIB:(enum)%d(%d)
Line 4332:    >>ReselectionSubPrioritySIB:ABSENT,DEFAULT(%d)
Line 4340: DecodeSib5_sub_ThreshX
Line 4348:    >>ThreshX_HighP:%d(%d[/100dBm])
Line 4354:    >>ThreshX_HighP:ABSENT,DEFAULT(%d[/100dBm])
Line 4363:    >>threshX_LowP:%d(%d[/100dBm])
Line 4369:    >>ThreshX_LowP:ABSENT(%d[/100dBm])
Line 4382:    >>ThreshX_HighQ:%d(%d[/100dB]) threshX_LowQ:%d(%d[/100dB])
Line 4391:    >>ThreshX_HighQ:ABSENT((bool)%d) threshX_LowQ:ABSENT((bool)%d)
Line 4399: DecodeSib5_sub_Qparameter
Line 4406:    >>QrxLevMin:%d(%d[/100dBm])
Line 4411:    >>QrxLevMin:%d(%d[/100dBm])
Line 4419:    >>QqualMin:%d(%d[/100dBm])
Line 4424:    >>QqualMin:ABSENT,DEFAULT(%d[/100dBm])
Line 4432: DecodeSib5_sub_TreselectionEutra
Line 4443:    >>TreselectionSIB:%d(%d[s])
Line 4448:    >>TreselectionSIB:ABSENT,DEFAULT(%d[s])
Line 4461:    >>TreselectionSf:PRESENT,(bool)%d High:(enum)%d(%d[%]) Medium:(enum)%d(%d[%])
Line 4468:    >>TreselectionSf:ABSENT,(bool)%d
Line 4473:    >>UPDATE EUTRA FREQ - Treselection:%d
Line 4484: Freq %d is belong to FR2 (BAND 261). 
Line 4490: Freq %d is belong to FR2 (BAND 257). 
Line 4496: Freq %d is belong to FR2 (BAND 258). 
Line 4502: Freq %d is belong to FR2 (BAND 260). 
Line 4533:    >>Invalid Access. drxCycle is unexpected value(%d)
Line 4554:    >>Invalid Access. drxCycle is unexpected value(%d)
Line 4593:    >>Invalid Access. pServingCellInfo or PCellFreqPtr is nullptr or failed GetSibServingCellConfigCommonSIB
Line 4604:    >>Start to setup SERVING-CELL Cycle. AllMeasValue %d
Line 4618:    >>Setup is done. SERVING-CELL MeasCycle %d to ObjectId %d. Drxcycle(%d) * N1(%d) * M1(%d). Servingcell Periodicity %d
Line 4623:    >>Start to setup INTRA-FREQ Cycle. AllMeasValue %d
Line 4638:    >>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1.5). Periodicity %d 
Line 4640: 	 ::SrchCycle %d MeasCycle %d to ObjectId %d
Line 4648:    >>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1). Periodicity %d 
Line 4650: 	 ::SrchCycle %d MeasCycle %d to ObjectId %d
Line 4659:    >>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1). Periodicity %d 
Line 4661: 	 ::SrchCycle %d MeasCycle %d to ObjectId %d
Line 4672:    >>Start to setup INTER-FREQ %d Cycle AllMeasValue %d
Line 4685:    >>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1.5). Periodicity %d 
Line 4687: 	 ::SrchCycle %d (%d) MeasCycle %d (%d) to ObjectId %d
Line 4694:    >>Setup is done. INTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1). Periodicity %d 
Line 4696: 	 ::SrchCycle %d (%d) MeasCycle %d (%d) to ObjectId %d
Line 4711:    >>Start to setup EUTRA-FREQ %d Cycle
Line 4725:    >>Setup is done. EUTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1.5)
Line 4727: 	 ::SrchCycle %d (%d) MeasCycle %d (%d) to ObjectId %d
Line 4734:    >>Setup is done. EUTRA-FREQ %d : Drxcycle(%d) * N1(%d) * M2(1)
Line 4736: 	 ::SrchCycle %d (%d) MeasCycle %d (%d) to ObjectId %d
Line 4759:    >>Get ARFCN %d in HIGHER_PRIORITY List.
Line 4764:    >>There is no element in HIGHER_PRIORITY List.
Line 4774:    >>Get ARFCN %d in EQUAL_PRIORITY List
Line 4779:    >>There is no element in EQUAL_PRIORITY List.
Line 4788:    >>Get ARFCN %d in LOWER_PRIORITY List
Line 4793:    >>There is no element in LOWER_PRIORITY List.
Line 4799:    >>Unexpected Priority Mode (%d)
Line 4826:    >>End of HIGHER_PRIORITY LIST
Line 4829:    >>GET %d in HIGHER_PRIORITY LIST
Line 4844:    >>End of EQUAL_PRIORITY LIST
Line 4847:    >>GET %d in EQUAL_PRIORITY LIST
Line 4862:    >>End of LOWER_PRIORITY LIST
Line 4865:    >>GET %d in LOWER_PRIORITY LIST
Line 4872: Invalid freqPriority (%d) return nullptr
Line 4882: RrmMngrConfigIdleNr::SetFreqListPerPriority
Line 4895: 	 >>Return False due to ServCellClsPtr is null
Line 4910: 	 >>Add Freq to LIST with HIGHER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
Line 4916: 	 >>Add Freq to LIST with EQUAL_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
Line 4922: 	 >>Add Freq to LIST with LOWER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
Line 4940: 	 >>Add Freq to LIST with HIGHER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
Line 4946: 	 >>Add Freq to LIST with EQUAL_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
Line 4952: 	 >>Add Freq to LIST with LOWER_PRIORITY. Freq %d Priority %d, Serving-Cell priority %d
Line 4971: 	   ::FreqClsPtr is null in AddFreqToListPriority
Line 4979: 	 ::AddFreqTo HIGHER_PRIORITY
Line 4983: 	 ::AddFreqTo EQUAL_PRIORITY
Line 4987: 	 ::AddFreqTo LOWER_PRIORITY
Line 4990: RrmMngrSetUpdateNr::AddFreqToListPriority - Wrong Freq Type(%d)
Line 4994: 	 ::Added FreqInfo (Arfcn : %d, SubCarrierOffset : %d)
Line 5005: 	   ::FreqClsPtr is null in AddFreqToListPriority
Line 5013: 	 ::AddFreqTo HIGHER_PRIORITY
Line 5017: 	 ::AddFreqTo EQUAL_PRIORITY
Line 5021: 	 ::AddFreqTo LOWER_PRIORITY
Line 5024: RrmMngrSetUpdateNr::AddFreqToListPriority - Wrong Freq Type(%d)
Line 5027: 	 ::Added FreqInfo Arfcn : %d
Line 5036: RrmMngrConfigIdleNr::SetHigherPriorityMode - (RatType : %d, bool : %d)
Line 5048:    >>Unexceptional RatType (%d)
Line 5056: RrmMngrConfigIdleNr::GetHigherPriorityMode - (RatType : %d)
Line 5069:    >>Unexceptional RatType (%d)
Line 5086:      ::RrmMngrConfigIdleNr::ClearPriorityList)
Line 5110:      ::There is %d Inter-Frequency which is not MeasOnGoing
Line 5129:      ::There is %d Eutra-Frequency which is not MeasOnGoing
Line 5139: RrmMngrConfigIdleNr::DeleteAllInterFreqInfo
Line 5146: RrmMngrConfigIdleNr::DeleteSib2FreqInfo
Line 5162:    >>IntraFreqClassPtr is not configured.
Line 5168: RrmMngrConfigIdleNr::DeleteSib3FreqInfo
Line 5185:    >>IntraFreqClassPtr is not configured.
Line 5191: RrmMngrConfigIdleNr::UpdateMeasureResultServ
Line 5199:    >>RrmMngrConfigIdleNr::UpdateMeasureResultIntra Invalid Access. pServingCell is null
Line 5211:    >>maxNrOfRsIndex:%d SsbToMeasure:0x%08x %08x
Line 5221: RrmMngrConfigIdleNr::UpdateMeasureResultIntra
Line 5227:    >>RrmMngrConfigIdleNr::UpdateMeasureResultIntra Invalid Access. pIntraFreqInfo is null
Line 5238:    >>maxNrOfRsIndex:%d SsbToMeasure:0x%08x %08x
Line 5251:    RrmMngrConfigIdleNr::UpdateMeasureResultInter Invalid Access. pIntraFreqInfo is null
Line 5263:    >>maxNrOfRsIndex:%d SsbToMeasure:0x%08x %08x
Line 5276: RrmMngrConfigIdleNr::UpdateMeasureModeServ()
Line 5287:    >>PCELL:NULL
Line 5293:    >>INTRA FREQ:NULL
Line 5305:    >>INTRA FREQ - measScheduleInfo.MockMeasObject:(bool)%d is configured
Line 5313: RrmMngrConfigIdleNr::IsIratAvailable
Line 5339:    >>Get ARFCN %d in HIGHER_PRIORITY List.
Line 5344:    >>There is no element in HIGHER_PRIORITY List.
Line 5354:    >>Get ARFCN %d in EQUAL_PRIORITY List
Line 5359:    >>There is no element in EQUAL_PRIORITY List.
Line 5368:    >>Get ARFCN %d in LOWER_PRIORITY List
Line 5373:    >>There is no element in LOWER_PRIORITY List.
Line 5379:    >>Unexpected Priority Mode (%d)
Line 5403:    >>End of HIGHER_PRIORITY LIST
Line 5406:    >>GET %d in HIGHER_PRIORITY LIST
Line 5421:    >>End of EQUAL_PRIORITY LIST
Line 5424:    >>GET %d in EQUAL_PRIORITY LIST
Line 5439:    >>End of LOWER_PRIORITY LIST
Line 5442:    >>GET %d in LOWER_PRIORITY LIST
Line 5449: Invalid freqPriority (%d) return nullptr
Line 5482:    >>CheckTimerExpired curTimeInMs (%d) Cur TargetTime [%d] LastCheckedTime [%d] 
Line 5501:    >>CheckTimerExpired TimeDiff %d Result %d
Line 5508: RrmMngrConfigIdleNr::TimerExpiredFor10Sec
Line 5523: 	>>(Expired 10sec timer)TimerExpiredFor10Sec is Expired. _oos_ 
Line 5529: 	>>(Waiting 10sec timer)TimerExpiredFor10Sec is Ongoing _oos_ 
Line 5530: 	>>Keep state untill TimerExpired
Line 5538: 	>>(Start 10sec timer)TimerExpiredFor10Sec is initiated _oos_ 
Line 5539: 	>>Set current OOC Time %d(ms)
Line 5547: RrmMngrConfigIdleNr::DeleteAllFreqInfoEutra
