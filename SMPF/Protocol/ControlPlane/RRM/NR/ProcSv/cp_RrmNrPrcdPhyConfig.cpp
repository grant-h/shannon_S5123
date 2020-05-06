Line 137: RrmNrPrcdPhyConfig::GetDefaultSsbScsForBandId(%d) defaultScs(%d)
Line 144: RrmNrPrcdPhyConfig::UpdateIntraFreq
Line 160: pIntraFreqInfo is nullptr and fail to allocate
Line 173: pServingCellInfo is nullptr and fail to allocate
Line 207: [PHY_CONFIG] ServCellConfigCommon.physCellId (%d)
Line 227: [PHY_CONFIG] ServCellConfigCommon..absoluteFrequencySsb (%d)
Line 244: [PHY_CONFIG] ServCellConfigCommon..frequencyInfoDL.frequencyBandList[0]:%d(BandId:%d)
Line 278: [PHY_CONFIG] ServCellConfigCommon.subcarrierSpacing (%d)
Line 320: [PHY_CONFIG] ServCellConfigCommon.ssbPeriodicityServingCell:(enum)%d ssbConfig.Periodicity:%d PCELL.SsbPeriodicity:%d
Line 358: ssbConfig : NumSsbToMeasure (%d), SsbToMeasure (0x%08X%08X)
Line 369: [PHY_CONFIG] SpcellConfig.servCellIndex (%d)
Line 375: [PHY_CONFIG] SpcellConfig.servCellIndex not present, set ServCellIndex to 0
Line 406:    >>New Serving MO [%d]
Line 410:    >>Current Serving MO [%d] PhyConfig Serving MO[%d]
Line 429:    >>Current Serving MO set as TEMP_MEAS_OBJECT_ID (%d)
Line 433: 	>>No ServingCellMo information, uses current servingCellMo:%d
Line 452:    >>Current Serving MO set as TEMP_MEAS_OBJECT_ID (%d)
Line 456:    >>No ServingCellMo information, uses current servingCellMo:%d
Line 479: 	>>ServCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 490: RrmNrPrcdPhyConfig::UpdateScellInfo
Line 495:    >> CellGroupId(%d) DeltaSCellBitmask(0x%x), SCellBitmask(0x%x)
Line 501:    >> Error!!! there are no ServCellGroupInfoNr for CellGroup %d
Line 510: RrmNrPrcdPhyConfig::UpdateDrxInfo
Line 523:    >>Set CDRX cycle:%d[ms]
Line 527:    >>Wrong DrxLongCycleStartOffset.Choice:%d(enum)
Line 534: 	>>DRX config released, DrxConfig.Choice:%d(enum)
Line 544: 	>>DrxConfigStatus:%d(enum) DRX_CONFIG_MASK:%d(bool)
Line 548: 	>>pMacCellGrp is null!!!
Line 556: RrmNrPrcdPhyConfig::UpdateDownlinkBwpInfo
Line 560: pSpcell is nullptr
Line 567: pServingCellInfo is nullptr
Line 599:    >>initialDownlinkBWP - SubcarrierSpacing:(enum)%d
Line 606:    >>initialDownlinkBWP - SubcarrierSpacing is not present
Line 611:    >>initialDownlinkBWP - genericParameters is not present
Line 617:    >>downlinkConfigCommon is not present
Line 622:    >>ServingCellConfigCommon is not present
Line 627: ReconfigWithSync is not present
Line 651:    >>downlinkBwpList[%d] - SubcarrierSpacing:(enum)%d
Line 668:    >>downlinkBwpList[%d] - SubcarrierSpacing is not present
Line 673:    >>downlinkBwpList[%d] - genericParameters is not present
Line 678:    >>downlinkBwpList[%d] is nullptr
Line 684:    >>downlinkBwpList is not present
Line 689:    >>SpcellConfigDedicated is not present
Line 696:    >>MaxScsDownlinkBwp:(enum)%d
Line 704: RrmNrPrcdPhyConfig::RRM_RRC_PHY_CONFIG_REQ_Hdlr
Line 708: Check Routing Info (%d)
Line 710:    >>Sib1ConfigFlag:(bool)%d
Line 715:    >>RecvMsg.Msg.NR.pSpcell is nullptr
Line 732: 	>>RecvMsg.Msg.NR.ScellConfigStatus is %d
Line 749: RrmNrPrcdPhyConfig::RRM_L1C_PHY_CONFIG_CNF_Hdlr - Result(%d)
Line 752: Check Routing Info (%d)
