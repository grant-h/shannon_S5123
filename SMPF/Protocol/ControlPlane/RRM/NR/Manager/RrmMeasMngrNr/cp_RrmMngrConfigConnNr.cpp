Line 46: RrmMngrConfigConnNr()
Line 53: ~RrmMngrConfigConnNr()
Line 58:    >>m_MeasInfoList.size:%d
Line 64: RrmMngrConfigConnNr::Init
Line 78: RrmMngrConfigConnNr::ReInit
Line 93: [The number of MeasInfo] NextMeasInfo is not. All MeasInfo(%d EA) are free
Line 108: RrmMngrConfigConnNr::GetFirstMeasInfo - m_MeasInfoList Management error
Line 123: RrmMngrConfigConnNr::GetNextMeasInfo - m_MeasInfoList Management error
Line 135: RrmMngrConfigConnNr::GetNextMeasInfo - Next MeasId(%d) of given MeasID(%d) found
Line 141: RrmMngrConfigConnNr::GetNextMeasInfo - CurrMeasId(%d) found but no next meas object found
Line 165: RrmMngrConfigConnNr::GetNextMeasInfo - m_MeasInfoList Management error
Line 174: RrmMngrConfigConnNr::GetNextMeasInfo - MeasId of given MeasObjectId(%d) not found
Line 186: RrmMngrConfigConnNr::GetNextMeasInfo - m_MeasInfoList Management error
Line 199: RrmMngrConfigConnNr::GetNextMeasInfo - Next MeasId(%d) of given MeasObjectId(%d) of CurrMeasId(%d) found
Line 213: RrmMngrConfigConnNr::GetNextMeasInfo - Next MeasId of given MeasObjectId(%d) of CurrMeasId(%d) not found
Line 249: RrmMngrConfigConnNr::UpdateMeasConfigReq - Error!!! received pVarMeasConfig is nullptr
Line 267: RrmMngrConfigConnNr::UpdateMeasIdList - [%d]MeasIdRemovedListIdx
Line 275: RrmMngrConfigConnNr::UpdateMeasIdList - MeasIdRemovedListIdx found, Remove it [%d]RemovedMeasId
Line 294: RrmMngrConfigConnNr::UpdateMeasIdList - [%d]MeasIdAddModedListIdx
Line 301: RrmMngrConfigConnNr::UpdateMeasIdList - MeasIdAddModedListIdx found, Add or Replace it [%d]MeasId
Line 313:    >>ReportConfigAddModedListIdx has been received without MeasIdAddModedListIdx
Line 321: 	 >>ReportConfigListIdx(%d) has been received
Line 328: 	 >>MeasId[%d]->reportConfigId[%d] <-----> ReportConfigList[%d].ReportConfigId[%d]
Line 335:    >>pMeasInfo->ReportConfigId(%d) for MeasId(%d) has been modified without MeasId Modification
Line 350: RrmMngrConfigConnNr::UpdateInterMeasObjectForCsiRs - MeasObjectId:%d
Line 358:    >>RefFreqCsiRs is not present
Line 378:    >>Cannot Create RrmFreqInfoNr
Line 399:    >>Cannot Create MeasObjectNR
Line 418: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList
Line 442:    >>Invalid MeasObjId(%d) or reportConfigId(%d) Configured
Line 472:    >>SsbFreq:%d is FR2 area
Line 479:    >>FreqBandIndicatorNRV1530Present:(bool)%d
Line 484:    >>FreqBandIndicatorNRV1530:%d(BandId:%d)
Line 489:    >>FreqBandIndicatorNRV1530:absent(BandId:%d)
Line 492: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - SsbFreqPresent MeasObject added
Line 505: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - Fatal Error : Cannot Create RrmFreqInfoNr Object
Line 523: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - Fatal Error : Cannot Create MeasObjectNR Object
Line 543: Object info - Smtc1Present(%d) Smtc2Present(%d) MeasObjectId(%d) smtc1.PeriodicityAndOffsetChoice(%d) Smtc2.Periodicity(%d)
Line 550:    >>SsbFreq:%d is Intra Freq
Line 557:    >>SsbFreq:%d is Scell Freq
Line 587: AddMeasConfigToMeasIdList - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 594: AddMeasConfigToMeasIdList - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 630: AddMeasConfigToMeasIdList - SCellFreq Smtc1 MeasCycle(%d), SrchCycle(%d), MeasRequriement(%d), SrchRequirement(%d)
Line 652: AddMeasConfigToMeasIdList - SCellFreq Smtc2 MeasCycle1(%d), MeasRequriement1(%d)
Line 693: 	>>Error! pServingCellInfo is NULL
Line 716: 	>> MeasObjId of SCell CellId %d at (SsbAbsFreq %d SCS %d) set to %d
Line 729:    >>RefFreqCsiRsPresent - INTER MeasObject:%d for CSI-RS is updated
Line 736:    >>RefFreqCsiRsPresent - INTER MeasObject:%d for CSI-RS is not updated
Line 744:    >>Invalid Reference Signal Configuration!
Line 756: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - NRRRCDB_measObjectEUTRA
Line 767: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - MeasObjectEUTRA added
Line 778: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - Fatal Error : Cannot Create RrmFreqInfoNr Object
Line 798:    >>Tinter %d, GapPeriod 
Line 804:    >>Tinter %d, GapPeriod 
Line 810:    >>Tinter %d, GapPeriod %d
Line 816:    >>GAP Info is not exist. Set default value Tinter %d, GapPeriod %d
Line 823:    >>Cdrx is not configured
Line 850:    >>Cdrx is configured
Line 916:    >>Create NEW EUTRA
Line 921:    >>EUTRA SRCH %d, MEAS %d
Line 927:    >>Invalid Eutra CarrierFreq %d!
Line 944: RrmMngrConfigConnNr::AddMeasConfigToMeasIdList - Invalid Measurement Object Choice(%d)
Line 973: RrmMngrConfigConnNr::RemoveMeasIdFromMeadIdList - MeasInfoList Management error
Line 980: RrmMngrConfigConnNr::RemoveMeasIdFromMeadIdList - [%d]MeasId [%d]MeasObjectId [%d]reportConfigId
Line 1020: RrmMngrConfigConnNr::IsMeasObjIdUsedFromMeasInfoList - MeasInfoList Management error
Line 1038: RrmFreqInfoNr::DeleteMeasInfoNr - given pMeasInfo is nullptr
Line 1047: RrmMngrSetUpdate::DeleteMeasInfoNr - MeasId(%d) is deleted
Line 1057: RrmMngrConfigConnNr::DeleteMeasInfo - m_MeasInfoList empty
Line 1067: RrmFreqInfoNr::DeleteMeasInfo - MeasInfoList management error
Line 1087: RrmMngrConfigConnNr::GetCountMeasInfoNr
Line 1096: [%d]MeasId  [%d]MeasObjectId  [%d]reportConfigId::_eval_
Line 1100: [The number of MeasInfo] All MeasInfo(%d EA) are
Line 1110: RrmMngrConfigConnNr::PrintAllMeasInfo
Line 1123: [The number of MeasInfo] All MeasInfo(%d EA) are
Line 1131: RrmMngrConfigConnNr::PrintMeasInfo - MeasID(%d) ObjectId(%d) reportConfigId(%d)
Line 1138: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) periodical::_eval_
Line 1148: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_A1::_eval_
Line 1155: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_A2::_eval_
Line 1162: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_A3::_eval_
Line 1170: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_A4::_eval_
Line 1176: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_A5::_eval_
Line 1183: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_A6::_eval_
Line 1191: __MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) empty EventIdChoice(%d)
Line 1202: [N2L]__MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_B1::_eval_
Line 1207: [N2L]__MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) EventId_B2::_eval_
Line 1213: [N2L]__MRInfo_%d - MeasID(%d) ObjectId(%d) reportConfigId(%d) empty EventIdChoice(%d)
Line 1223: RrmMngrConfigConnNr::PrintGapConfig - GapUESetupReleaseChoice:%d(enum) GapFR1SetupReleaseChoice:%d(enum) GapFR2SetupReleaseChoice:%d(enum)
Line 1228: 	 >>GapUE - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum)
Line 1234: 	 >>GapFr1 - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum)
Line 1240: 	 >>GapFr2 - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum)
Line 1255: CheckGapConfig:(bool)%d
Line 1271: RrmMngrConfigConnNr::UpdateSrchMeasCycle - SrchMeasType:(enum)%d Period:(enum)%d IsFr2:(bool)%d freqtype:%d(0:INTRA,1:INTER,2:SCELL,3:IRAT)
Line 1272: RrmMngrConfigConnNr::UpdateSrchMeasCycle - MeasSCyclePresent:(bool)%d MeasCycleSCell:(enum)%d
Line 1279:    >>Wrong Period:%d(enum) detection, set as 2
Line 1289:    >>Wrong Period:%d(enum) detection, set as 2
Line 1325:    >>FR2 Intra SrchMeasType:%d(enum) info updated
Line 1379:    >>FR2 Inter SrchMeasType:%d(enum) info updated
Line 1416:    >>FR1 Intra SrchMeasType:%d(enum) info updated
Line 1470:    >>FR1 Inter SrchMeasType:%d(enum) info updated
Line 1478: RrmMngrConfigConnNr::SetSmeasureConfig - SMeasureConfigChoice(enum)%d
Line 1485:    >>SsbRsrp Range:%d Value:%d[/100dBm] 
Line 1490:    >>CsiRsrp Range:%d Value:%d[/100dBm] 
Line 1494:    >>S-MeasureConfig is Not present
Line 1502: RrmMngrConfigConnNr::GetSmeasureConfig - sMeasureChoice(enum)%d
Line 1506:    >>SsbRsrp Value:%d[/100dBm] 
Line 1510:    >>CsiRsrp Value:%d[/100dBm] 
Line 1514:    >>S-MeasureConfig is Not present
Line 1523: RrmMngrConfigConnNr::GetSMeasureConditionFlagForSsb:(bool)%d
Line 1529: RrmMngrConfigConnNr::SetSMeasureConditionFlagForSsb Prev:%d New:%d
Line 1535: RrmMngrConfigConnNr::UpdateReportQuantity
Line 1560:    >>ServingCell is null
Line 1566:    >>pIntraFreqInfo is null
Line 1575:    >>ServingCell has no MeasObject, set measquantity all
Line 1584:    >>ServingCell has no MeasInfo, set measquantity all
Line 1593:    >>Periodical Part Sinr:(bool)%d
Line 1637:    >>Debugging Wrong Event choice:%d 
Line 1657:    >>pMeasTriggerQuantity is null
Line 1660:    >>ServingCell Event Part Sinr:(bool)%d
Line 1666:    >>Abnormal ReportConfigNR.Choice:%d
Line 1673: Iter pServMeasInfo == NULL
Line 1691:    >>IntraFreq has no MeasObject, set measquantity all
Line 1702:    >>IntraFreq has no MeasInfo, set measquantity all
Line 1719:    >>Periodical Part Rsrp:(bool)%d Rsrq:(bool)%d Sinr:(bool)%d
Line 1769:    >>Debugging Wrong Event choice:%d 
Line 1790:    >>Debugging Wrong choice:%d 
Line 1809:    >>Debugging Wrong choice:%d 
Line 1814:    >>pMeasTriggerQuantity is null
Line 1817:    >>Intra Event Part Rsrp:(bool)%d Rsrq:(bool)%d Sinr:(bool)%d
Line 1822:    >>Abnormal ReportConfigNR.Choice:%d
Line 1829: No more MeasInfo
Line 1850:    >>pInterFreqInfo has no MeasObject, set measquantity all
Line 1861:    >>pInterFreqInfo has no MeasInfo, set measquantity all
Line 1878:    >>Periodical Part Rsrp:(bool)%d Rsrq:(bool)%d Sinr:(bool)%d
Line 1928:    >>Debugging Wrong Event choice:%d 
Line 1949:    >>Debugging Wrong choice:%d 
Line 1968:    >>Debugging Wrong choice:%d 
Line 1973:    >>pMeasTriggerQuantity is null
Line 1976:    >>Inter Event Part Rsrp:(bool)%d Rsrq:(bool)%d Sinr:(bool)%d
Line 1981:    >>Abnormal ReportConfigNR.Choice:%d
Line 1988: No more MeasInfo
Line 2036: [GAP]Received Enum : MeasGapInfoFR2 mgl %d, mgrp %d offset %d, mgta %d
Line 2038: [GAP]Calculate : MeasGapInfo mgl %.1f, mgrp %d mgta %.1f offset %d PatternId %d
Line 2042: [GAP]Invalid GapPatternId %d. Set default 0;
Line 2056: [GAP]Received Enum : MeasGapInfoFR1 mgl %d, mgrp %d mgta %d offset %d
Line 2058: [GAP]Calculate : MeasGapInfo mgl %.1f, mgrp %d mgta %.1f offset %d PatternId %d
Line 2062: [GAP]Invalid GapPatternId %d. Set default 0;
Line 2076: [GAP]Received Enum : MeasGapInfoUE mgl %d, mgrp %d mgta %d offset %d
Line 2077: [GAP]Calculate : MeasGapInfoUE mgl %.2f, mgta %.2f
Line 2078: [GAP]Calculate : mgrp %d offset %d
Line 2082: [GAP]Invalid GapPatternId %d. Set default 0;
Line 2087: [GAP]Calculate : PatternId %d
Line 2099: Update MeasGapInfo in RRM_RRC_MEAS_CONFIG_REQ
Line 2105: No MeasGapInfo in RRM_RRC_MEAS_CONFIG_REQ
Line 2177: RrmMngrConfigConnNr::UpdateEvalTimeForFc - CurTimeInMs:%d[ms], ResultTime:%d[ms]
Line 2183:    >>m_EvalTimerInfo.Stop is TRUE -> ResultTime:%d[ms] StopDiff:%d[ms] Final ResultTime:%d[ms]
Line 2194: RrmBlkConnMeasNr::ResetEvalTimerInfo
Line 2205: GetDynamicFC:: FC:(enum)%d
Line 2214:    >>No intrafreq infomation
Line 2225:    >>Wrong Time array detected:%d
Line 2244:    >>Wrong MeasRequirementTime detected:%d
Line 2248:    >>Fcinformation EvalauationTime:%d[ms] OriginalFcValue:%d ChangedFcValue:%d ArrayValue:%d
