Line 39: RrmServCellInfoNr::RrmServCellInfoNr()
Line 49: RrmServCellInfoNr::~RrmServCellInfoNr()
Line 96: RrmServCellInfoNr::SetCellType - m_CellType set to %d
Line 113: RrmServCellInfoNr::SetSsbPeriodicity - SsbPeriodicity set to %d
Line 125: RrmServCellInfoNr::SetSsbPositionsInBurst - choice(%d), shortBitmap(0x%X)
Line 131: RrmServCellInfoNr::SetSsbPositionsInBurst - choice(%d), mediumBitmap(0x%X)
Line 137: RrmServCellInfoNr::SetSsbPositionsInBurst - choice(%d), longBitmap(0x%X)
Line 142: RrmServCellInfoNr::SetSsbPositionsInBurst - invalid ssbPositionsInBurst.ssbPositionsInBurst.choice(%d)
Line 166: RrmServCellInfoNr::GetFirstValidScsSpecificCarrierList - Valid ScsSpecificCarrier found at %d
Line 171: RrmServCellInfoNr::GetFirstValidScsSpecificCarrierList - Valid ScsSpecificCarrier not found!!!!
Line 188: RrmServCellInfoNr::SetCellSpecificInfo
Line 192: RrmServCellInfoNr::SetCellSpecificInfo - pScellConfig is invalid
Line 198: 	>>SCELL_INDEX_MASK(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 203:    >> ScellIndex set to %d
Line 207: RrmServCellInfoNr::SetCellSpecificInfo - SCELL_INDEX_MASK not present
Line 212: 	>>SCELL_CONFIG_DEDI(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 219:    >> m_firstActiveDownlinkBwpId %d
Line 224: RrmServCellInfoNr::SetCellSpecificInfo - SCELL_CONFIG_DEDI not present
Line 229: 	>>SCELL_CONFIG_COMMON_MASK(0x%08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 236: 	>>PHYS_CELL_ID_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 241:    >> PhyCellId(%d)
Line 245: RrmServCellInfoNr::SetCellSpecificInfo - PHYS_CELL_ID_MASK is not present
Line 250: 	>>DOWNLINK_CONFIG_COMMON_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 256: 	>>ABSOLUTE_FREQUENCY_SSB_MASK(0x%08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 264:    >> Arfcn(%d), SsbAbsFreq(%d)
Line 268: RrmServCellInfoNr::SetCellSpecificInfo - ABSOLUTE_FREQUENCY_SSB_MASK is not present
Line 273: 	>>FREQUENCY_BAND_LIST_MASK(0x%08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 281:    >> BandId(%d), SubCarrierSpacing(%d)
Line 285: RrmServCellInfoNr::SetCellSpecificInfo - FREQUENCY_BAND_LIST_MASK is not present
Line 291: RrmServCellInfoNr::SetCellSpecificInfo - DOWNLINK_CONFIG_COMMON_MASK is not present
Line 296: 	>>FREQUENCY_INFO_UL_MASK(0x%08x) UplinkConfigCommonPresentBitmask(0x%08x %08x)
Line 303: 	>>SCS_SPECIFIC_CARRIER_LIST_MASK(0x%08x) UplinkConfigCommonPresentBitmask(0x%08x %08x)
Line 317:    >> scsSpecificCarrierList[%d] isValid(%d), offsetToCarrier(%d), subCarrierSpacing(%d), carrierBandwidth(%d)
Line 322: RrmServCellInfoNr::SetCellSpecificInfo - SCS_SPECIFIC_CARRIER_LIST_MASK is not present
Line 328: RrmServCellInfoNr::SetCellSpecificInfo - FREQUENCY_INFO_UL_MASK is not present
Line 350: 	>>SUBCARRIER_SPACING_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 357:    >> SubCarrierSpacing(%d)
Line 361: RrmServCellInfoNr::SetCellSpecificInfo - SUBCARRIER_SPACING_MASK is not present
Line 367: 	>>SSB_PERIODICITY_SERVINGCELL_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 374:    >> SsbPeriodicity(%d)
Line 378: RrmServCellInfoNr::SetCellSpecificInfo - SSB_PERIODICITY_SERVINGCELL_MASK is not present
Line 383: 	>>SSB_POSITION_IN_BURST_MASK(0x%08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 390:    >> ssbPositionsInBurst.choice(%d)
Line 394: RrmServCellInfoNr::SetCellSpecificInfo - SSB_POSITION_IN_BURST_MASK is not present
Line 400: RrmServCellInfoNr::SetCellSpecificInfo - SCELL_CONFIG_COMMON_MASK not present
Line 414: RrmServCellInfoNr::GetDefaultSsbScsForBandId(%d)
Line 484:    >>[SET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 490:    >>[GET] RSRP:(bool)%d RSRQ:(bool)%d SINR:(bool)%d
Line 507: RrmServCellInfoNr::DeleteSibServCellInfo
Line 511:    >>Delete m_SibServCellInfo.pCellSelectionInfo
Line 518:    >>Delete m_SibServCellInfo.pServingCellConfigCommonSIB
Line 530: pCellSelectionInfo:nullptr - Arfcn:%d CellId:%d
Line 542: SetSibCellSelectionInfo - Arfcn:%d CellId:%d
Line 546: TraceCellSelectionInfo - OLD
Line 551: pCellSelectionInfo:nullptr - mem alloc
Line 557: TraceCellSelectionInfo - NEW
Line 567: pServingCellConfigCommonSIB:nullptr - Arfcn:%d CellId:%d
Line 579: SetSibServingCellConfigCommonSIB - Arfcn:%d CellId:%d
Line 583: TraceServingCellConfigCommonSIB - OLD
Line 588: pServingCellConfigCommonSIB:nullptr - mem alloc
Line 594: TraceServingCellConfigCommonSIB - NEW
Line 602: RrmServCellInfoNr::GetSibSsbConfig - Arfcn:%d CellId:%d
Line 621:    >>pServingCellConfigCommonSIB:nullptr - set default Periodicity SsbToMeasure
Line 629:    >>set default Smtc SsRssiMeasurement
Line 640:    >>CellSelectionInfo - QrxLevMin:%d[/100dBm] QrxLevMinSULPresent:(bool)%d QrxLevMinSUL:%d QrxLevMinOffset:%d[/100dB] QqualMin:%d[/100dB] QqualMinOffset:%d[/100dB]
Line 648:    >>ServingCellConfigCommonSIB - Pmax:%d[/100dBm] AdditionalPmaxPresent:(bool)%d AdditionalPmax:%d[/100dBm] DefaultDrxCycle:%d[ms]
