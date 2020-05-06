Line 45: RrmMngrSetUpdateNr::RrmMngrSetUpdate
Line 52: RrmServCellGroupInfoNr::~RrmServCellGroupInfoNr
Line 58:    >>m_SCell_vt.size:%d
Line 62:    >>m_SCellFreq_vt.size:%d
Line 68: RrmServCellGroupInfoNr::Init
Line 118: RrmServCellGroupInfoNr::Init - Current size of m_SCell_vt is %d
Line 141: RrmServCellGroupInfoNr::Init - Current size of m_SCellFreq_vt is %d
Line 146: RrmServCellGroupInfoNr::Init - ServCellGroupInfoNr Destroy Done
Line 168: RrmServCellGroupInfoNr::SetPCellClsPtr - PCell set to SsbAbsFreq(%d) SubCarrierSpacing(%d), PhyCellId(%d)
Line 180: RrmServCellGroupInfoNr::SetCellGroupId - CellGroupId set to %d
Line 209: RrmServCellGroupInfoNr::SetPCellFreqPtr - m_PCellFreq set to SsbAbsFreq(%d) SubCarrierSpacing(%d)
Line 225: RrmServCellGroupInfoNr::ShowMeTheSCellList
Line 229:    >> Current size of m_Scell_vt is %d
Line 241:    >> ScellIdx(%d) SsbAbsFreq(%d) SCS(%d)
Line 250:    >> m_Scell_vt is empty(%d)
Line 258: RrmServCellGroupInfoNr::ShowMeTheSCellFreqList
Line 262:    >> Current size of m_SCellFreq_vt is %d
Line 274:    >> SsbAbsFreq(%d) SCS(%d)
Line 282:    >> m_ScellFrq_vt is empty(%d)
Line 295: RrmServCellGroupInfoNr::SetCurrentSCellStatus
Line 297:    >> Currrent m_SCellStatusBitMask (0x%x)
Line 298:    >> For SCellIdx(%d) Status Update Cmd(%d)
Line 311:    >> eSCellStatusType is Unknown(%d)
Line 315:    >> After SCellStatus Update, m_SCellStatusBitMask(0x%x)
Line 325:    >> SCell(scellidx %d, Arfcn %d, SCS %d, PhyCellId %d) status set to %d
Line 329:    >> SCellInfo not found for SCellIdx(%d)
Line 332:    >> m_SCellStatusBitMask(0x%xX)
Line 342: RrmServCellGroupInfoNr::UpdateScellInfo
Line 343:    >>SCellBitmask_Current(0x%x) SCellBitmask_New(0x%x)
Line 344:    >>DeltaSCellBitmask(0x%x)
Line 356:    >>Delta found for ScellIdx(%d)
Line 360:    >>eSCellConfigType(%d) for ScellIdx(%d)
Line 373:    >>ScellToAddModList->ScellToAddMod[%d] is NULL
Line 387:    >> Unknown eSCellConfigType %d, Nothing To Do !!!
Line 404: RrmServCellGroupInfoNr::CheckSCellConfigType - ScellIdx(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
Line 408:    >> ScellIdx(%d) SCELL_CONFIG_TYPE_CONFIG
Line 413:    >> ScellIdx(%d) SCELL_CONFIG_TYPE_RELEASE
Line 418:    >> ScellIdx(%d) SCELL_CONFIG_TYPE_MODIFY
Line 423:    >> ScellIdx(%d) SCELL_CONFIG_TYPE_NONE
Line 431: RrmServCellGroupInfoNr::AddSCellInfo
Line 437:    >> received ScellConfigToAdd is NULL, just return!!!!
Line 445:    >> ScellConfigPresentBitmask(0x%x) present if same ScellIndex(%d) is already exist, remove old one first!
Line 450:    >> ScellConfigToAdd->ScellConfigPresentBitmask is not present, return!
Line 459:    >> pNewSCellInfo alloc failure!!!
Line 471:    >> Added SCell Info : ServCellType_e(%d) SCellIndex(%d)
Line 472:    >> Added SCell Info : SsbAbsFreq(%d) SubCarrierSpacing(%d)
Line 473:    >> Added SCell Info : PhyCellId(%d) MeasObjectId(%d)
Line 474:    >> Added SCell Info : Current size of m_Scell_vt is %d
Line 479: RrmServCellGroupInfoNr::AddSCellFreqInfo
Line 485: 	>> received pScellConfig is NULL!!!
Line 493:    >> pNewSCellFreqInfo alloc failure!!!
Line 513:    >>SCELL_CONFIG_COMMON_MASK(0x%08x %08x) ScellConfigPresentBitmask(0x%08x %08x)
Line 519:    >>DOWNLINK_CONFIG_COMMON_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 526:    >>ABSOLUTE_FREQUENCY_SSB_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 537:    >> Arfcn(%d), SsbAbsFreq(%d)
Line 542:    >>FREQUENCY_BAND_LIST_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 567:    >> BandId(%d), SubCarrierSpacing(%d)
Line 572:    >>SCS_SPECIFIC_CARRIER_LIST_MASK(0x%08x %08x) FrequencyInfoDlPresentBitmask(0x%08x %08x)
Line 580:    >> ScsSpecificCarrier(%d)
Line 604: 	>>SUBCARRIER_SPACING_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 615:    >> SubCarrierSpacing(%d)
Line 621: 	>>SSB_PERIODICITY_SERVINGCELL_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 659:    >> ssbPeriodicityServingCell(%d)
Line 665: 	>>SSB_POSITION_IN_BURST_MASK(0x%08x %08x) ServingCellConfigCommonPresentBitmask(0x%08x %08x)
Line 702:    >> ssbConfig : NumSsbToMeasure (%d), SsbToMeasure (0x%08X%08X)
Line 720:    >> SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency Added to SCellFreqInfo List
Line 726:    >> SsbAbsFreq (%d), SubCarrierSpacing (%d) Frequency already exist in the SCellFreqInfo List. So keep it and reuse it.
Line 732: RrmServCellGroupInfoNr::GetDefaultSsbScsForBandId(%d)
Line 782: RrmServCellGroupInfoNr::ReleaseSCellInfo
Line 788:    >> received ScellToReleaseList is NULL, just return!!!
Line 796:    >>ScellToReleaseList->ScellToRelease[%d].isValid(%d) ScellIndex(%d) physCellId(%d)!!!
Line 803:    >> Same ScellFreq(SsbAbsFreq %d, SCS %d) Found! Remove it from m_SCellFreq_vt!
Line 809: 	>> Removed Same Scell(ScellIndex %d) Info from m_SCell_vt!
Line 821:    >>ScellToReleaseList->ScellToRelease[%d].isValid(%d) is invalid!!!
Line 842: RrmServCellGroupInfoNr::isSameFreqCellExist - Same Frequency Cell exist at m_Scell_vt(SCellIdx %d)
Line 872: RrmServCellGroupInfoNr::isSameFreqCellExist - Same Frequency exist at m_ScellFreq_vt
Line 888: RrmServCellGroupInfoNr::RemoveSCellInfo - ScellIdx(%d)
Line 901: 	>> Remove SCell Info : ServCellType_e(%d) SCellIndex(%d)
Line 902: 	>>				  	   SsbAbsFreq(%d) SubCarrierSpacing(%d)
Line 903: 	>>					   PhyCellId(%d) MeasObjectId(%d)
Line 916:    >> Current size of m_Scell_vt is %d
Line 927: RrmMngrSetUpdateNr::GetSCellFreqInfo for SsbFreq(%d) SubcarrierSpacing(%d)
Line 943: RrmServCellGroupInfoNr::GetSCellFreqInfo - SsbFreq(%d) SubcarrierSpacing(%d) is foud at m_SCellFreq_vt
Line 953: RrmServCellGroupInfoNr::GetSCellFreqInfo - Current size of m_SCellFreq_vt is %d
Line 958: RrmServCellGroupInfoNr::GetSCellFreqInfo - SCellFreq List is Empty!!!! Current size of m_SCellFreq_vt is %d
Line 992: RrmServCellGroupInfoNr::GetNextSCellPtr -can't find the next cell of this SCell(band : %d, arfcn : %d, SubCarrierSpacing %d)
Line 998: RrmServCellGroupInfoNr::GetFirstSCellPtr - Target Arfcn %d SCS %d
Line 1017: RrmServCellGroupInfoNr::GetFirstSCellPtr - SCell Found at Same Frequency! SCellIdx %d SsbAbsFreq %d SCS %d PhyCellId %d
Line 1024: RrmServCellGroupInfoNr::GetFirstSCellPtr - Skip this other freq SCell! SCellIdx %d SsbAbsFreq %d SCS %d PhyCellId %d
Line 1063: RrmServCellGroupInfoNr::GetNextSCellFreqPtr -can't find the next freq of this SCellFreq(band : %d, arfcn : %d, SubCarrierSpacing %d)
Line 1084: RrmServCellGroupInfoNr::GetSCellInfo - ScellIdx(%d) is foud at m_Scell_vt
Line 1093: RrmServCellGroupInfoNr::GetSCellInfo - Current size of m_Scell_vt is %d
Line 1102: RrmServCellGroupInfoNr::UpdateMeasCycle
Line 1112:    >> ScellIdx[%d] Configuration Not Found from SCell List
Line 1116: 	>> ActivationCmd for ScellIdx[%d] is eSCellStatusType(%d)
Line 1128: 	>> ActivationCmd for ScellIdx[%d] is RRM_SCELL_STATUS_TYPE_ACT, update MeasSchedule for this freq as activated SCell requirement
Line 1138:    >> SsbAbsFrequency[%d] SubCarrierSpacing[%d] Not Found from SCellFreqList !!!
Line 1150: 	>> ActivationCmd for ScellIdx[%d] is RRM_SCELL_STATUS_TYPE_DEACT, update MeasSchedule for this freq as Deactivated SCell requirement
Line 1160:    >> SsbAbsFrequency[%d] SubCarrierSpacing[%d] Not Found from SCellFreqList !!!
Line 1166:    >> Configuration keeped same as before
Line 1178: RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) SCellBitMask_Current(%d) SCellBitmask_New(%d)
Line 1182: RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_ACT
Line 1187: RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_DEACT
Line 1192: RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) RRM_SCELL_STATUS_TYPE_UNKNOWN
Line 1200: RrmServCellGroupInfoNr::UpdateSCellActDeactStatus
Line 1261: RrmServCellGroupInfoNr::RemoveSCellFreqInfo - Current size of m_SCellFreq_vt is %d
Line 1267: RrmServCellGroupInfoNr::ModifySCellInfo
Line 1273:    >>ScellToAddModList is NULL! Cannot config SCellInfo!
Line 1288:    >>ScellToAddModList->ScellToAddMod[%d] is NULL! Cannot Modify SCellInfo!
