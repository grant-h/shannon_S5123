Line 78: RrmBlkConnMeasNr::ManageTimerMeasSchedule
Line 83: T_MEAS_SCHEDULE is running with [%d]ms duration. [%d]ms remain until expired
Line 98: RrmBlkConnMeasNr::ManageTimerMeasEval
Line 106: T_MEAS_EVAL is running with [%d]ms duration. [%d]ms remain until expired
Line 111:    >>TimerInfo Prev StartTime:%d[ms] -> StartTime:%d[ms]
Line 117:    >>Stop diff created :%d[ms]
Line 129:    >>EvalTimerInfo Prev Stop:FALSE -> TRUE StopDiff:%d[ms]
Line 134:    >>Reset EvalTimerInfo
Line 146: RrmBlkConnMeasNr::ManageTimerMrInterval - Start(%d) Duration(%d)
Line 151: T_MR_INTERVAL is running with [%d]ms duration. [%d]ms remain until expired
Line 174: RrmBlkConnMeasNr::GetFreqInfo MeasType(%d), MeasObjectId(%d)
Line 262: RrmBlkConnMeasNr::GetFreqInfo - pServCellGroupInfoNr is invalid
Line 268: RrmBlkConnMeasNr::GetFreqInfo - Unexpected MeasType(%d)
Line 273: RrmBlkConnMeasNr::GetFreqInfo - MeasObjectId(%d) is not found
Line 282: RrmBlkConnMeasNr::UpdateMeasResultPerSsb BeamIndex(%d)
Line 299: parameter(pSsbMeasResult or pCellInfo) is nullptr
Line 392: RrmBlkConnMeasNr::UpdateMeasResult - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
Line 410:    >>pFreqInfo is not found
Line 415: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 421: numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
Line 429: SsbMeasResult[%d] - Find CellId:%d from DB
Line 443:    >>FOUND - PCELL
Line 462:    >>NumSsbIndex:%d SsbBitmap:0x%08x %08x  SsbBitmapFromMo:0x%08x %08x 
Line 481:    >>NOT FOUND - PCELL
Line 488:    >> Update SCell Meas Result
Line 509:    >>Update SCell MeasResults for [SsbAbsFreq %d SCS %d CellId(%d)] of SsbMeasResult(%d) is found in SCell with MeasObj(%d)
Line 530: 	>>NumSsbIndex:%d SsbBitmap:0x%08x %08x	SsbBitmapFromMo:0x%08x %08x 
Line 536:      ::StoreSsbMeasResult - SCell
Line 549:    >> pServCellGroupInfoNr is invalid!!!!
Line 560:    >> CellId(%d) of SsbMeasResult(%d) is not found in Aset, SCellset. Find cell set also
Line 577:    >>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 582:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 607: UpdateMeasResultNeighbour - Arfcn:%d CellId:%d SetType:%s(%d) ObjectId:%d
Line 622: BLIND DETECTION RESULT - SsbIndex:%d
Line 633: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
Line 640: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 649:    >>Invalid SsbIndex:%d maxNrOfRsIndex:%d
Line 657: MEASUREMENT RESULT - numSsbIndex:%d
Line 678:    >>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Line 690:      ::FAILED
Line 695:    >>current_set_type:%s(%d)
Line 701: INVALID CASE
Line 710:    >>REMOVE CELL - current_set_type:%s(%d)
Line 717:      ::FAILED
Line 724:    >>RESET CELL - initiallize srch/meas result
Line 733:    >>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(%d)
Line 740:      ::FAILED
Line 746:    >>unexpected current_set_type:%s(%d)
Line 755: StoreSsbMeasResult - NEIGHBOUR
Line 765: RrmBlkConnMeasNr::UpdateSrchResult
Line 790: pFreqInfo is not found
Line 798:    >>MeasType:%s(%d) SsbFreq:%d ObjectId:%d NumResult:%d
Line 801: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 813:    >>[DEBUG-SRCH] Index:%d CellId:%d Corr:%d BeamTimingOffset:%d RxBeamIdx: %d
Line 844:    >>Sorted Srch result Index:%d CellId:%d Corr:%d BeamTimingOffset:%d RxBeamIdx: %d
Line 853: SsbSrchResult[%d] - Find CellId:%d from DB
Line 867:    >>FOUND - PCELL
Line 876: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 894:    >>NOT FOUND - PCELL
Line 902:    >> Update SCell SRCH Result
Line 936:    >> Update MeasObjId %d SCell CellId %d of SsbSrchResult %d is found in SCell
Line 941:    >> Update SCell SsbTimingOffset %d CellCorrEngery %d SsbTimingOffset %d SetType %d
Line 970:    >>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 975:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 983:    >>UPDATE TIMING OFFSET DELTA with BEST
Line 993: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1012: [DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
Line 1019: [DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 1029:    >>NEW CELL - NEIGHBOUR
Line 1040: Fail to allocate pCellInfo
Line 1056: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1063:    >>ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
Line 1071:      ::FAILED
Line 1079:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 1091: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 1098:    >>MOVE CELL - target_set_type:%s(%d) ObjectId:%d
Line 1105:      ::FAILED
Line 1119: RrmBlkConnMeasNr::StoreMeasResult - Result:(enum)%d ObjectId:%d MeasType:%s(%d) RsType:%s(%d) NumResult:%d
Line 1133:    >>Skip UpdateSrchResult - rMsg.Result:(enum)%d
Line 1151:    >>Skip UpdateMeasResult - rMsg.Result:(enum)%d
Line 1164:    >>Skip UpdateMeasResultForCsiRs - rMsg.Result:(enum)%d
Line 1178:    >>Skip UpdateMeasResult - rMsg.Result:(enum)%d
Line 1191:    >>Skip UpdateMeasResult - rMsg.Result:(enum)%d
Line 1198: ### Invalid MeasType(%d) Detected, remove scheduled measurements
Line 1206: RrmBlkConnMeasNr::UpdateMeasSlotInfo
Line 1216:    >>SlotInfo[%d] ObjectId %d 
Line 1228:      ::MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1242:        #Invaild meas type occur in Both type MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1254:        #SlotInfo[%d].ObjectId %d removed
Line 1259:        #Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1269:        #SlotInfo[%d].ObjectId %d removed
Line 1274:        #Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1289:        #Invaild meas type occur in Both type MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1301:        #SlotInfo[%d].ObjectId %d removed
Line 1306:        #Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1316:        #SlotInfo.ObjectId %d removed from SlotInfo
Line 1321: Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1336: Invaild meas type occur in Both type MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1349: SlotInfo.ObjectId [%d] removed from SlotInfo
Line 1354: Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1364:        #SlotInfo.ObjectId %d removed from SlotInfo
Line 1369:        #Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1377:        #SlotInfo[%d].ObjectId %d removed
Line 1383:      ::pFreqInfoNr == nullptr
Line 1392:    >>FOUND EUTRA FREQ ObjectID %d Requested Object %d
Line 1398: EUTRA %d : SrchOngoing %d MeasureOngoing %d LastMeasType %d, SlotNum %d
Line 1407: 		#SlotInfo[%d].ObjectId %d removed
Line 1412: 		#Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1423: 		#SlotInfo[%d].ObjectId %d removed
Line 1428: 		#Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1440:    >>Trial %d  rMsg.Msg.Nr.ObjectId  %d SlotInfo.ObjectId %d
Line 1449: RrmBlkConnMeasNr::CheckMoIntegrity SlotObjectId(%d)
Line 1495:    >>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1503: RrmBlkConnMeasNr::AddAsetToMo amount (%d)
Line 1514: RrmBlkConnMeasNr::AddScellToMo for SsbAbsFreq %d SCS %d
Line 1537:    >>CellId %d BeamIndex %d BeamTimingOffset %x 
Line 1543: 	>>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1551: RrmBlkConnMeasNr::AddScellToMo amount (%d)
Line 1555:    >>invalid pServCellGroupInfoNr
Line 1589:    >>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1598: RrmBlkConnMeasNr::AddNCellToMo amount (%d)
Line 1611: RrmBlkConnMeasNr::CheckMeasCycle
Line 1629:    >>CheckMeasCycle curTimeInMs:%d MeasCycle:%d LastMeasTime:%d IsSmtc2:(bool)%d
Line 1651:    >>CheckMeasCycle TimeDiff:%d(ms) Result:%d(bool)  
Line 1665: RrmBlkConnMeasNr::CheckSrchCycle curTimeInMs (%d) Cur SrchCycle [%d] LastSrchTime [%d] 
Line 1685: RrmBlkConnMeasNr::CheckSrchCycle TimeDiff (%d) Result[%d]  
Line 1715:    >>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1729: RrmBlkConnMeasNr::AddAsetToMo(SMTC2) amount (%d)
Line 1740: RrmBlkConnMeasNr::AddScellToMo for SsbAbsFreq %d SCS %d
Line 1766:    >>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1777: RrmBlkConnMeasNr::AddScellToMo amount (%d)
Line 1781:    >>invalid pServCellGroupInfoNr
Line 1818:    >>SsbMeasInput is FULL(MAX_NUM_MEAS_CELL:%d)
Line 1829: RrmBlkConnMeasNr::AddNCellToMo(SMTC2) amount (%d)
Line 1835: RrmBlkConnMeasNr::UpdateSsbConfigNrForConn
Line 1851:    >>ServingPeriod:%d[ms] SmtcPeriod:%d[ms]
Line 1857:    >>Periodicity changed from %d[ms] to %d[ms]
Line 1880:    >>ScheduledSsbConfigMobility - SsbToMeasurePresent:(bool)%d SsbToMeasureChoice:(enum)%d
Line 1892:    >>NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x InRequestSsbToMeasure:[1]0x%08x[0]0x%08x
Line 1913:    >>Wrong NumSsbToMeasure value %d detected
Line 1920:    >>NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x InRequestSsbToMeasure:[1]0x%08x[0]0x%08x
Line 1931:    >>SsbConfig - NumSsbToMeasure:%d SsbPositionInburst:[1]0x%08x[0]0x%08x InRequestSsbToMeasure:[1]0x%08x[0]0x%08x
Line 1933:    >>SsRssiMeasurementPresent:(bool)%d
Line 1939:      ::Fill SsbConfig.SsRssiMeasurement
Line 1944:      ::Initialize SsbConfig.SsRssiMeasurement
Line 1953:    >>SsbConfig - BandId:%d SsbFrequency:%d SubcarrierSpacing:(enum)%d Periodicity:%d[ms]
Line 1958:    >>SsbConfig - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 1964:    >>SsbConfig - SmtcIncluded:(bool)%d Smtc.Offset:%d[ms] Smtc.Duration:%d[ms] SsRssiMeasurementIncluded:(bool)%d
Line 1970: RrmBlkConnMeasNr::ConfigureMeasReq MeasSlot(%d)
Line 1980:    >>pMeasReq is null
Line 2005: 	>>Intra Scheduling is skipped.
Line 2029: 	>>Inter Scheduling is skipped.
Line 2034: 	>>InterFreq scheduled on SLOT:%d
Line 2039: 	>>Scell scheduled on SLOT:%d
Line 2057: MeasSlot error [%d]
Line 2064:    >>MesaReq configured MeasType(%d), MeasObjectId(%d), NumSsbMeasInput(%d)
Line 2085: 	>>ScheduledSsbConfigMobility.SsbToMeasurePresent is false
Line 2089: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 2094: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 2099: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 2103: 	>>Wrong NumSsbToMeasure value %d detected
Line 2115: RrmBlkConnMeasNr::UpdateMeasSlotInfoForCsiRs - ObjectId:%d
Line 2126:    >>SlotInfo[%d] - ObjectId:%d 
Line 2145:    >>Failed to GetMeasScheduleInfoForCsiRs
Line 2150:    >>pFreq is nullptr
Line 2163: RrmBlkConnMeasNr::UpdateMeasResultForCsiRs - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
Line 2177:    >>pFreqInfo is not found
Line 2182: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 2188: numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
Line 2196: CsiMeasResult[%d] - Find CellId:%d from DB
Line 2210:    >>FOUND - PCELL
Line 2233:    >>NOT FOUND - PCELL
Line 2259:    >>FOUND - SCELL (CellId:%d MeasObjectId:%d)
Line 2278:    >>Failed to GetServCellGroupInfoNr
Line 2288:    >>NOT FOUND - SCELL
Line 2308:    >>NOT FOUND - NEIGHBOUR CSI-RS SetType:%s(%d) ObjectId:%d
Line 2313:    >>FOUND - NEIGHBOUR CSI-RS SetType:%s(%d) ObjectId:%d
Line 2318:    >>MOVE CELL - CSI-RS set_type_index:%s(%d) target:%s(enum)%d
Line 2326:      ::FAILED
Line 2346: RrmBlkConnMeasNr::CheckMeasRequiredForCsiRs - MeasOngoing:(bool)%d MeasCycle:%d LastMeasTimeInMs:%d CurTimeInMs:%d
Line 2373:    >>bMeasRequired:(bool)%d - MeasOngoing:(bool)%d timeDiff:%d[ms]
Line 2380: RrmBlkConnMeasNr::UpdateCsiConfig - MeasObjectId:%d
Line 2389:    >>Failed to GetCsiRsFreqInfo for MeasObjectId:%d
Line 2394:    >>BandId:%d RefFreqCsiRs:%d SubCarrierSpacingCsiRs:(enum)%d RefServCellIndex:%d
Line 2440:    >>pServCell is nullptr
Line 2467: RrmBlkConnMeasNr::UpdateCsiMeasInput - CellId:%d MeasObjectId:%d
Line 2480:    >>Failed to GetCsiRsCellInfo for CellId:%d
Line 2521:    >>CellInfo.CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbIndex:%d - AssociatedSsb found, update CsiMeasInput.CsiRsResource[%d]
Line 2533:    >>CellInfo.CsiRsResource[%d] - CsiRsIndex:%d AssociatedSsbIndex:%d - AssociatedSsb not found
Line 2548:    >>bValid:(bool)%d - CsiMeasInput.CsiRsResourceListMobilityCnt:%d
Line 2559: RrmBlkConnMeasNr::UpdateCsiMeasReq - ObjectId:%d
Line 2573:    >>pFreq is nullptr - measObjectId:%d
Line 2581:    >>CsiConfig - BandId:%d RefFreqCsiRs:%d SubcarrierSpacing:%d
Line 2583:    >>CsiConfig - AssociatedSsbFrequency:%d AssociatedSsbSubcarrierSpacing:%d AssociatedSsbPeriodicity:%d
Line 2585:    >>CsiConfig - RefServCellSsbFrequency:%d RefServCellSsbSubcarrierSpacing:%d RefServCellSsbPeriodicity:%d
Line 2589:    >>Failed to UpdateCsiConfig
Line 2620:    >>CsiMeasInput[%d] - CellId:%d CsiRsResourceListMobilityCnt:%d
Line 2626:    >>Failed to AllocMsgBodyElem
Line 2631:    >>Failed to UpdateCsiMeasInput
Line 2649:    >>bValid:(bool)%d NumCsiMeasInput:%d
Line 2656: RrmBlkConnMeasNr::ConfigureMeasReqForCsiRs - CsiMeasSlotIndex:%d
Line 2676:    >>csiMeasSlotInfo - CsiMeasSlotIndex:%d MeasType:%s(%d) ObjectId:%d
Line 2681:    >>csiMeasSlotInfo is occupied
Line 2694:    >>Check CSI-RS meas - INTRA MeasObjectId:%d CsiMeasSlotIndex:%d
Line 2713:    >>CSI-RS meas not configured - Failed to UpdateMeasReqForCsiRs
Line 2718:    >>CSI-RS meas not configured - meas not required
Line 2723:    >>CSI-RS meas not configured - CSI-RS MeasScheduleInfo is absent
Line 2728:    >>CSI-RS meas not configured - Failed to GetPCellFreqPtr
Line 2739:    >>Check CSI-RS meas - INTER MeasObjectId:%d CsiMeasSlotIndex:%d
Line 2758:    >>CSI-RS meas not configured - Failed to UpdateMeasReqForCsiRs
Line 2765:    >>CSI-RS meas not configured - meas not required
Line 2770:    >>CSI-RS meas not configured - CSI-RS MeasScheduleInfo is absent
Line 2781:    >>UPDATE csiMeasSlotInfo(CsiMeasSlotIndex:%d) and csiMeasScheduleInfo(MeasObjectId:%d)
Line 2794:    >>CsiMeasSlotIndex:%d - bConfigured:(bool)%d
Line 2801: RrmBlkConnMeasNr::ConfigureMeasResultInd (L1C_RRM_MEAS_RESULT_IND)
Line 2826:    >>PCELL MeasResultInd Encoding
Line 2843:    >>cell_result_index:%d - ServCellIndex:%d Arfcn:%d CellId:%d
Line 2847: 	>>SsbInBurst Bitmap:0x%08x %08x
Line 2863:    >>RrmBlkConnMeasNr::ConfigureMeasResultInd SsbIndex:%d is out of SsbInBurst Bitmap:0x%08x %08x
Line 2876:      ::antenna_index:%d ssb_result_index:%d - SsbIndex:%d SsbRsrp:%d
Line 2883:      ::antenna_index:%d - SsbCnt:%d
Line 2892:      ::HighestIntraNCellRsrp(%d)
Line 2903: 	  ::isValidHighestFilteredRsrpIntra(%d)
Line 2905:    >>ssb_result_total_counter:%d
Line 2913:    >>Error! pServingCell is null
Line 2918:    >>SCELL MeasResultInd Encoding
Line 2940:    >>cell_result_index:%d - ServCellIndex:%d Arfcn:%d CellId:%d
Line 2944: 	>>SsbInBurst Bitmap:0x%08x %08x
Line 2960:    >>RrmBlkConnMeasNr::ConfigureMeasResultInd SsbIndex:%d is out of SsbInBurst Bitmap:0x%08x %08x
Line 2973:      ::antenna_index:%d ssb_result_index:%d - SsbIndex:%d SsbRsrp:%d
Line 2980:      ::antenna_index:%d - SsbCnt:%d
Line 2993:    >>Error! pServCellGroupInfoNr is null
Line 2997: 	>>ssb_result_total_counter:%d
Line 3008: RrmBlkConnMeasNr::ConfigureMeasResultCell (Lterrm_MeasResultCell_t)
Line 3025: RrmBlkConnMeasNr::ConfigureMeasResultCell Servingcell ptr is null
Line 3030: RrmBlkConnMeasNr::ConfigureMeasResultCell PcellFreq ptr is null
Line 3057:    >>MeasConfig is absent(measObjectId:%d) - Update RSRP and RSRQ only
Line 3093:    >>ConfigureMeasResultCell (ServingCellOnly) SsbIndex:%d is out of SsbToMeasure Bitmap:0x%08x %08x
Line 3132: RrmBlkConnMeasNr::ConfigureMeasResultInd (LTERRM_RRM_NR_MEAS_RESULT_IND_T)
Line 3136: pMeasResultInd is null
Line 3159: pServingCellInfo is null
Line 3174:  MeasResultCell[%d] pServingCell[%d,%d] servCellIndex(%d)
Line 3196:  MeasResultCell[%d] pIdListedCell[%d,%d] servCellIndex(%d)
Line 3208:  MeasResultCell[%d] pIdDetectedCell[%d,%d] servCellIndex(%d)
Line 3222: RrmBlkConnMeasNr::GetNrObjectCheckResult - MeasObjectId(%d) MeasType(%d)
Line 3245: MeasObjectId is invalid
Line 3257: No IdCell in IDCELLSET
Line 3303: BeamResults is invalid in RRM_SET_TYPE_IDLISTEDCELLSET
Line 3311: CellMeasResult is invalid in RRM_SET_TYPE_IDLISTEDCELLSET
Line 3317: GetFirstCellInfoClsPtrFromNeighborCellSet is null in IDLISTEDCELLSET
Line 3354: BeamResults is invalid in RRM_SET_TYPE_IDDETECTEDCELLSET
Line 3362: CellMeasResult is invalid in RRM_SET_TYPE_IDDETECTEDCELLSET
Line 3368: GetFirstCellInfoClsPtrFromNeighborCellSet is null in IDDETECTEDCELLSET
Line 3377: RrmBlkConnMeasNr::UpdateNrObjectCheckCnf - NrMeasType(%d)
Line 3384: SendMsg is nullptr
Line 3412: RrmBlkConnMeasNr::UpdateNrObjectCheckCnf - [%d] CellId(%d) SsbTimeingOffset(%d) SsbCnt(%d) RSRP(%d) RSRQ(%d) SINR(%d)
Line 3425: RrmBlkConnMeasNr::UpdateNrObjectCheckCnf - beamIndex(%d) RSRP(%d) RSRQ(%d) SINR(%d)
Line 3435: RrmBlkConnMeasNr::CheckMeasSchedule - sleepDurationinMs:%d[ms], curTimeInMs:%d[ms]
Line 3464:    >>pFreqInfo is null
Line 3477:    >>No SMTC information, set periodicity as SF5
Line 3491:    >>Under320 Srch Requirement:%d[ms] Step1:%d[ms] Step2:%d[ms] Margin:%d[ms]
Line 3500:    >>Under320 Meas Requirement:%d[ms] Step1:%d[ms] Step2:%d[ms] Margin:%d[ms]
Line 3509:    >>Over320 Srch Requirement:%d[ms] CdrxCycle:%d[ms] Margin:%d[ms]
Line 3517:    >>Over320 Meas Requirement:%d[ms] CdrxCycle:%d[ms] Margin:%d[ms]
Line 3526:    >>Exceptional CdrxCycle:%d[ms] set CdrxRequirement as CdrxCycle
Line 3540:    >>Both SrchTimeDiff:%d[ms] MeasTimeDiff:%d[ms]
Line 3544:      ::Srch Requirement Okay
Line 3548:      ::Srch Requirement not Okay
Line 3555:      ::Meas Requirement Okay
Line 3559:      ::Meas Requirement not Okay
Line 3570:    >>Srch SrchTimeDiff:%d[ms]
Line 3574:      ::Srch Requirement Okay
Line 3578:      ::Srch Requirement not Okay
Line 3590:    >>Meas MeasTimeDiff:%d[ms]
Line 3594:      ::Meas Requirement Okay
Line 3598:      ::Meas Requirement not Okay
Line 3606:    >>Unexceptional type:%d(enum)
Line 3612:    >>No scheduled measurement.
Line 3631: RrmNrMeasConn::ConfigureCdrxMsg
Line 3644:    >>curTimeInMs:%d[ms] cdrxTimeStamp:%d[ms] RemaincdrxDuration:%d[ms] OriginalRemaincdrxDuration:%d[ms] 
Line 3662:    >>CDRX -> measurement requirement okay
Line 3667:    >>CDRX -> MR is okay
Line 3672:    >>CDRX -> TTT is okay
Line 3677:    >>CDRX -> pending MR is okay
Line 3681:    >>CDRX TRUE
Line 3685:    >>NO CDRX - CDRX_MR_PENDING
Line 3689:    >>MR is pending
Line 3695:    >>NO CDRX - CDRX_TIMER_PENDING
Line 3699:    >>TTT is not okay
Line 3704:    >>NO CDRX - MR sent
Line 3708:    >>MR just sent
Line 3714:    >>NO CDRX - Measurement pending
Line 3718:    >>Edge of Measurement requirement
Line 3730: RrmBlkConnMeasNr::UpdateTimingOffsetAfterCdrx - TimingOffset:%d
Line 3747: pFreqInfo is not found
Line 3757:    >>ServingCell TO updating
Line 3767:    >>ServingCell is nullptr
Line 3790:    >>FOUND - SetType:%s(%d) ObjectId:%d
Line 3812:    >>Unexcepted behavior detection.
Line 3824:    >>Unexcepted behavior detection.
Line 3829:    >>End of UpdateTimingOffsetAfterCdrx
Line 3840: RrmBlkConnMeasNr::GetMarginForCdrx = CdrxCycle:%d[ms]
Line 3872:    >>Wrong PeriodicityAndOffsetChoice
Line 3881:    >>Abnormal PeriodicityAndOffsetChoice
Line 3884:    >>Selected margin:%d[ms]
Line 3891: RrmBlkConnMeasNr::UpdateLastSrchTime
Line 3895:    >>Reschedule Srch for ObjectId:%d ( No update )
Line 3905: RrmBlkConnMeasNr::UpdateLastMeasTime
Line 3909:    >>Reschedule Meas for ObjectId:%d ( No update )
Line 3927: RrmBlkConnMeasNr::GetSsbToMeasureFromMO
Line 3943:    >>ScheduledSsbConfigMobility - SsbToMeasurePresent:(bool)%d SsbToMeasureChoice:(enum)%d
Line 3950: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 3957: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 3962: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 3967: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 3971: 	>>Wrong NumSsbToMeasure value %d detected
Line 3982: RrmBlkConnMeasNr::IsAllowedDeriveSsbIndexForFreq - Arfcn:%d MeasObjectId:%d
Line 4026:    >>bAllowed:(bool)%d - bTargetCellFound:(bool)%d duplexMode:%s((enum)%d) bDeriveSsbIndexFromCell:(bool)%d ConnDerivedOff:%d
Line 4034: RrmBlkConnMeasNr::DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
Line 4053:    >>pTargetCell is null or pServingCell is null
Line 4065:    >>tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
Line 4083: RrmBlkConnMeasNr::DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d BdResultSsbIndex:%d
Line 4089:    >>VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
Line 4095:    >>VERIFIED - set ssbIndexDerived:%d
Line 4100:    >>NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
Line 4106:    >>UNKNOWN - set BdResultSsbIndex:%d
Line 4122: RrmBlkConnMeasNr::FindBestSrchResult - StartIdx:%d
Line 4134:      ::CANDIDATE SsbSrchResult[%d] - CellId:%d CorrEnergy:%d
Line 4145:      ::CANDIDATE SsbSrchResult[%d] - CellId:%d CorrEnergy:%d
Line 4158:      ::BEST SsbSrchResult[%d] - CellId:%d TimingOffset:%d
Line 4165: RrmBlkConnMeasNr::UpdateEutraSrchResult numcell %d
Line 4180: pEutraFreqInfo is not found
Line 4184: Found matched Eutra Freqinfo earfcn %d, ObjectID %d with MEAS_CNF
Line 4202: 	>>CellId(%d) is not found in this set (enum)(%d) of measobject(%d)
Line 4208: 	>>CellId(%d) is found in set (enum)(%d) of measobject(%d)
Line 4214: Update timing offset %d
Line 4232: New cell and not in UNID set, add new CellId(%d) into set(enum)(%d) of measobject(%d)
Line 4238: Fail to allocate pCellInfo
Line 4249: Candidate Cell Info : earfcn %d, bandId %d, CellId %d, TimingOffset %d
Line 4254: Succeeded to add CellId(%d) of SsbSrchResult(%d) into CANDI_DETECTED_CELLSET of measobject(%d)
Line 4259: Failed to add CellId(%d) of SsbSrchResult(%d) into CANDI_DETECTED_CELLSET of measobject(%d)
Line 4267: Found in UNID set, move CellId(%d) of SsbSrchResult(%d) from set(%d) to set(%d) of measobject(%d)
Line 4274: Succeeded to move CellId(%d) of SsbSrchResult(%d) from set(%d) to set(%d) of measobject(%d)
Line 4280: Failed to move CellId(%d) of SsbSrchResult(%d) from set(%d) to set(%d) of measobject(%d)
Line 4289: RrmBlkConnMeasNr::UpdateEutraMeasResult
Line 4299: pEutraFreqInfo is not found
Line 4305:  MeasType(%d), SsbFreq(%d), MeasObjectId(%d), NumEutraMeasResult(%d)
Line 4323:    >>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 4328:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 4348:    >>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Line 4353: Succeeded to move CellId(%d) of MeasResultEutra(%d) from set(%d) to set(%d) of measobject(%d)
Line 4358: Failed to move CellId(%d) of MeasResultEutra(%d) from set(%d) to set(%d) of measobject(%d)
Line 4380:    >>CheckMeasCycle curTimeInMs (%d) Cur MeasCycle [%d] LastMeasTime [%d] 
Line 4400:    >>CheckMeasCycle TimeDiff %d Result %d  
Line 4419: RrmBlkIdleMeasNr::AddNeighbourCell Received FreqInfo is nullptr
Line 4423: EUTRA %d : SrchOngoing %d LastMeasType %d, SlotNum %d
Line 4453: RrmBlkIdleMeasNr::GetEutraFreq
Line 4461: pEutraFreqInfo is not found
Line 4478: RrmBlkConnMeasNr::ConfigureSrchReqEutra MeasSlot(%d)
Line 4499: N2L is not configured. Skip this slot %d
Line 4515:    >>(MEASTYPE_INIT) Initiate request for IRAT Search. Slot %d
Line 4543:      ::Expired SrchCycle. IsEutraSrchMeas %d
Line 4548:    >>(TimerExpired) Initiate request for IRAT FREQ Search. Slot %d
Line 4566:      ::Changed IRAT Frequency %d 
Line 4570:      ::Last Eutra Freq
Line 4590:    >>IRAT Frequency %d is already ONGODING to Search. Try next Freq.
Line 4595:      ::Changed IRAT Frequency %d 
Line 4599: SLOT %d : Skip EUTRA SEARCH. There is no candidate EUTRA FREQ
Line 4611: RrmBlkConnMeasNr::ConfigureMeasReqEutra MeasSlot(%d)
Line 4631: N2L is not configured. Skip this slot %d
Line 4651: 	   ::Expired MeasCycle. IsEutraSrchMeas %d
Line 4661: 	   ::Changed Eutra Frequency %d 
Line 4665: 	   ::Last Eutra Freq Skip MeasRequest for EUTRA
Line 4671: 	>>(TimerExpired) Initiate request for INTER FREQ measurement. Slot %d
Line 4682:      ::AddNCellT amount (%d)
Line 4689: EutraFreq %d MeasScheduleInfo.LastMeasType %d. Try to next FREQ for Measurement.
Line 4696:      ::Skip measurement for Eutra Frequency %d because no cell for measure. SLOT %d :
Line 4701:      ::Skip update MEASTYPE because SrchOngoing
Line 4718:      ::Changed Eutra Frequency %d 
Line 4722:      ::Last Eutra Freq. Skip MeasRequest for EUTRA
Line 4744:    >>IRAT Frequency %d is already ONGODING to Meas. Try next Freq.
Line 4749:      ::Try next Freq. Changed Eutra Frequency %d 
Line 4753: SLOT %d : Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ
Line 4758: SLOT %d : Skip EUTRA MEASUREMENT. There is no candidate EUTRA FREQ
Line 4765: RrmBlkConnMeasNr::GetServingPositionInBurst
Line 4782:    >>CONN MEAS - SIB1 present, use Ssbconfig of SIB1
Line 4787:    >>CONN MEAS - SIB1 not present, use Ssbconfig of INTRA FREQ
Line 4794:    >>This is not intra freq no need to add Position in burst for this Meas_REQ
Line 4803: RrmBlkConnMeasNr::CheckEvalReportForCdrx
Line 4817:    >>Entering Ssb SMeasureCondition.
Line 4831:    >>MR need to send now.
Line 4836:    >>No MR required this time
Line 4845: RrmBlkConnMeasNr::ScheduleForIntra
Line 4867: 	>>intra freq is null
Line 4876: 	>>For MockMeasObject, meas is ongoing[%d] or pServingCellNull
Line 4885: 	>>Without MeasConfig, Conn measure schedule. MockMeasObject (%d) SMeasureCondition(%d)
Line 4896: 	>>Skip schedule - IsMoIntegrity:%d IsMeasCycle:%d
Line 4910: 	>>Without MO case
Line 4916: 	>>Smeasure case
Line 4922: 	>>Smeasure case but no SMTC1
Line 4929: 	>>Smeasure case and SMTC1 present
Line 5038: SMTC2 exist, changed periodicity from [%d] to [%d]
Line 5046: Wrong scheduledMeasType [%d] or No Srch/Meas cycle 
Line 5051: No MEAS SMTC Cycle
Line 5065: Wrong Meastype [%d]
Line 5089: RrmBlkConnMeasNr::ScheduleForScell
Line 5121: RrmBlkConnMeasNr::ConfigureMeasReq - SCellFreq = (%d)
Line 5129: RrmBlkConnMeasNr::ConfigureMeasReq - For SCellFreq, meas is ongoing skip SCellFreq Meas Scheduling
Line 5142: RrmBlkConnMeasNr::ConfigureMeasReq - No More SCellFreqs are available, Schedule Inter-F
Line 5220: 	>>SMTC1 Prev scheduledMeasType:%d New scheduleMeasType:%d
Line 5228: No cell found in this SMTC meas time, Srch again.
Line 5232: No cell found in this SMTC meas time, and Srch cycle not yet
Line 5253:    >>SMTC2 Prev scheduledMeasType:%d New scheduleMeasType:%d
Line 5263: RrmBlkConnMeasNr::ConfigureMeasReq - No cell found in this SMTC meas time, Srch again.
Line 5267: RrmBlkConnMeasNr::ConfigureMeasReq - No cell found in this SMTC2 meas time, and Srch cycle not yet
Line 5273: RrmBlkConnMeasNr::ConfigureMeasReq - SMTC2 exist, changed periodicity from [%d] to [%d]
Line 5282: RrmBlkConnMeasNr::ConfigureMeasReq - Wrong scheduledMeasType [%d]
Line 5287: RrmBlkConnMeasNr::ConfigureMeasReq - No MEAS SMTC Cycle
Line 5303: RrmBlkConnMeasNr::ConfigureMeasReq - Wrong Meastype [%d]
Line 5311: RrmBlkConnMeasNr::ConfigureMeasReq - NumOfSlotForSCellFreqSrchMeas(%d) cannot be exceed MAXNUMSLOTFORSCELLFREQ(%d) pServCellGroupInfoNr(0x%xX)
Line 5337: RrmBlkConnMeasNr::ScheduleForInter
Line 5362: Freq = (%d)
Line 5447: 	>>Prev scheduledMeasType:%d New scheduleMeasType:%d
Line 5455: No cell found in this SMTC meas time, Srch again.
Line 5459: No cell found in this SMTC meas time, and Srch cycle not yet
Line 5467: No MEAS SMTC Cycle
Line 5482: Wrong Meastype [%d]
