Line 77: RrmBlkIdleMeasNr::ManageTimerMeasEval
Line 82: T_MEAS_EVAL is running with [%d]ms duration. [%d]ms remain until expired
Line 97: RrmBlkIdleMeasNr::GetFreqInfo MeasType(%d), MeasObjectId(%d)
Line 117: 	>>Found ServingCell freqMeasObjectId %d return IntraFreqInfo
Line 133: 	>>Found FreqInfo %d freqMeasObjectId %d
Line 148: 	>>Found FreqInfo %d freqMeasObjectId %d in INTER-FREQ LIST
Line 156: Unexpected MeasType(%d)
Line 161: 	>>Not Found MeasType (%d) MeasObjectId(%d) in INTER-FREQ LIST
Line 207:    >>UpdateServMeasReqMessage CellId %d, BeamIndex %d, BeamTimingOffset 0x%x, pConfigureMeasReq->ObjectId %d
Line 214: RrmBlkIdleMeasNr::IsSkipIntraSrchMeas
Line 227:    >>Invalid Access. pServingCellInfo or pIntraFreqInfo is nullptr
Line 242: 	>>Invalid Access. Sib1present or SibIntraFreqCellReselectionInfo is nullptr
Line 248:    >>arfcn(%d) CellId(%d) has QoffsetTemp(%d)
Line 255: 	>>Skip INTRA FREQUENCY Serach / Measure according to Condition of ServingCell
Line 256: 	>>Srxlev %d, Squal %d SintraSearchP %d, SintraSearchQ %d
Line 261: 	>>DO INTRA FREQUENCY Serach / Measure
Line 262: 	>>Srxlev %d, Squal %d SintraSearchP %d, SintraSearchQ %d
Line 268:      ::RrmBlkIdleMeasNr::UpdateSsbConfigInIntraFreq IsServingCellTry %d, IsIntraFreqTry %d
Line 283:      ::Setup SsbConfig info of INTRA and SERVING-CELL
Line 284:      ::Periodicity of INTRA %d(ms), Periodicity of SERV %d(ms)
Line 288:      ::Periodicity of SERV is invalid value. Set 20ms
Line 295:      ::USE SsbConfig of INTRA-FREQ due to Periodicity %d
Line 300:      ::USE SsbConfig of SERVING-CELL due to Periodicity %d
Line 308:      ::ServSsbToMeasure[0] %08x, ServSsbToMeasure[1] %08x, IntraSsbToMeasure[0] %08x, IntraSsbToMeasure[1] %08x , ReqSsbToMeasure[0] %08x, ReqSsbToMeasure[1] %08x
Line 312:      ::Setup SsbConfig info of SERVING-CELL without INTRA
Line 314:      ::ServSsbToMeasure[0] %08x, ServSsbToMeasure[1] %08x, ReqSsbToMeasure[0] %08x, ReqSsbToMeasure[1] %08x
Line 319:      ::Setup SsbConfig info of INTRA without SERVING-CELL
Line 324:      ::IntraSsbToMeasure[0] %08x, IntraSsbToMeasure[1] %08x, ReqSsbToMeasure[0] %08x, ReqSsbToMeasure[1] %08x
Line 328:      ::Unexpected status. IsServingCellTry %d, IsIntraFreqTry %d
Line 340: 	 >>Validation of INTER_FREQ is fail due to nullptr
Line 343: 	 >>Validation of INTER_FREQ is TRUE
Line 388: RrmBlkIdleMeasNr::UpdateMeasResult - MeasType:(enum)%d MeasObjectId:%d NumResult:%d, NumLteResult:%d
Line 407: 	>>pFreqInfo is not found
Line 412: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 418: numCellResult:%d - Msg.NR.NumResult:%d MAX_NUM_MEAS_CELL:%d
Line 426: SsbMeasResult[%d] - Find CellId:%d from DB
Line 440: 	>>FOUND - SERVING
Line 447: 	>>StoreSsbMeasResult - SERVING
Line 453: NumSsbIndex:%d SsbBitmap:0x%08x %08x
Line 470: 	>>NOT FOUND - SERVING
Line 488: 	>>NOT FOUND - pCellInfo is nullptr. NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 493: 	>>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 518: UpdateMeasResultNeighbour - Arfcn:%d CellId:%d SetType:%s(%d) ObjectId:%d
Line 535: BLIND DETECTION RESULT - SsbIndex:%d
Line 546: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) Failed verify SsbIndex
Line 553: [DeriveSsbIndexFromCell] MEAS RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 562: 	>>Invalid SsbIndex:%d maxNrOfRsIndex:%d
Line 584: MEASUREMENT RESULT - numSsbIndex:%d
Line 605: 	>>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(enum)%d
Line 609: 	  ::MOVED
Line 617: 	  ::FAILED
Line 622: 	>>current_set_type:%s(%d)
Line 628: INVALID CASE
Line 637: 	>>REMOVE CELL - current_set_type:%s(%d)
Line 640: 	  ::REMOVED
Line 644: 	  ::FAILED
Line 653: 	>>MOVE CELL - current_set_type:%s(%d) target_set_type:%s(%d)
Line 656: 	  ::MOVED
Line 660: 	  ::FAILED
Line 666: 	>>unexpected current_set_type:%s(%d)
Line 673: StoreSsbMeasResult - NEIGHBOUR
Line 675: NumSsbIndex:%d SsbBitmap:0x%08x %08x
Line 685: RrmBlkIdleMeasNr::UpdateSrchResult
Line 709: pFreqInfo is not found
Line 716:    >>MeasType:(enum)%d SsbFreq:%d ObjectId:%d NumResult:%d
Line 719: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 733: SsbSrchResult[%d] - Find CellId:%d from DB
Line 746:    >>FOUND - SERVING
Line 756: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 770: 	>>NOT FOUND - SERVING
Line 785:    >>NOT FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 790:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 798:    >>UPDATE TIMING OFFSET DELTA with BEST
Line 809: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 827: [DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) Failed derive SsbIndex
Line 834: [DeriveSsbIndexFromCell] SRCH RESULT(ARFCN:%d PCID:%d) - ssbIndexDerived:%d
Line 844:    >>NEW CELL - NEIGHBOUR
Line 855: Fail to allocate pCellInfo
Line 871: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 876:    >>ADD CELL BandId:%d SsbAbsFreq:%d SCS:%d CellId:%d - target_set_type:%s ObjectId:%d
Line 884:      ::FAILED
Line 892:    >>FOUND - NEIGHBOUR SetType:%s(%d) ObjectId:%d
Line 904: JUMP SsbSrchResult[%d] to SsbSrchResult[%d]
Line 910:    >>MOVE CELL - target_set_type:%s(%d) ObjectId:%d
Line 917:      ::FAILED
Line 927:    >>Try next Freq. Changed Inter Frequency %d 
Line 934:    >>There is no more INTER-Frequency in HIGHER-PRIROITY LIST
Line 937:    >>There is no more INTER-Frequency in EQUAL-PRIROITY LIST
Line 940:    >>There is no more INTER-Frequency in LOWER-PRIROITY LIST
Line 943:    >>Unexpected Prirority mode
Line 966:    >>START Checking for INTER Frequency %d MeasOngoing %d IsInterFreqTry %d, PBCHFlag %d
Line 978:      ::Inter Frequency %d is barred
Line 982:      ::Try next Freq. Changed INTER Frequency %d 
Line 1004: 	>>(MEASTYPE_INIT) Initiate request for INTER-FREQ search. IsInterFreqTry %d
Line 1014:      ::Expired MeasCycle. IsInterFreqTry %d
Line 1021:      ::Expired SrchCycle. IsInterFreqTry %d
Line 1031:      ::Try next Freq. Changed INTER Frequency %d 
Line 1045:      ::AddNCellT amount (%d)
Line 1053: 	>>(TimerExpired) Initiate request for INTER-FREQ search/measure. IsInterFreqTry %d
Line 1061:      ::Inter Frequency %d is already ONGODING to Search/Meas. Try next Freq. IsInterFreqTry %d
Line 1077:    >>CheckMeasCycle curTimeInMs (%d) Cur MeasCycle [%d] LastMeasTime [%d] 
Line 1103:    >>CheckMeasCycle TimeDiff %d Result %d  
Line 1116:    >>CheckSrchCycle curTimeInMs (%d) Cur SrchCycle [%d] LastSrchTime [%d] 
Line 1142:    >>CheckSrchCycle TimeDiff %d Result %d  
Line 1149: RrmBlkIdleMeasNr::UpdateMeasSlotInfo
Line 1176: Update MeaslostInfo for ServingCell Only
Line 1197: MeasOngoing of SERV set False because Result of Measurement include INTRA and SERV.
Line 1205: Invaild meas type occur in Both type MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1216: SlotInfo.ObjectId [%d] removed
Line 1221: Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1237: MeasOngoing of SERV set False because Result of Measurement include INTRA and SERV.
Line 1244: MeasOngoing of SERV set False
Line 1245: SlotInfo.ObjectId [%d] removed
Line 1254: SlotInfo.ObjectId [%d] removed
Line 1260: Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1275: Invaild meas type occur in Both type MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1287: SlotInfo.ObjectId [%d] removed
Line 1292: Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1302: SlotInfo.ObjectId [%d] removed
Line 1307: Not proper meas type between MeasScheduleInfo.LastMeasType (%d) CNF Meastype (%d)
Line 1315: SlotInfo.ObjectId [%d] removed
Line 1322: pFreqInfoNr == nullptr
Line 1344: 		#SlotInfo[%d].ObjectId %d removed
Line 1349: 		#Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1361: 		#SlotInfo[%d].ObjectId %d removed
Line 1366: 		#Not proper meas type between MeasScheduleInfo.LastMeasType (enum)%d CNF Meastype (enum)%d
Line 1377: Trial[%d] rMsg.Msg.Nr.ObjectId [%d] SlotInfo.ObjectId[%d]
Line 1388: ServingCellClsPtr is NULL
Line 1394: IntraFreqClsPtr is NULL
Line 1403: 	 >>Validation of Serv is FAIL because INTRA-FREQ measurement is ongoing
Line 1409: 	 >>Validation of Serv is FAIL because SERVINGCEll measurement is ongoing
Line 1423: 	 >>Validation of INTRA-FREQ is FAIL due to nullptr
Line 1432: 	 >>Validation of INTRA-FREQ is FAIL because Arfcn(%d) is barred
Line 1438: 	 >>Validation of INTRA-FREQ is FAIL because SIB is not received yet so Invalid ObjectID is applied
Line 1444: 	 >>Validation of INTRA-FREQ is FAIL because SIB2 is not decoding validly
Line 1450: 	 >>Validation of INTRA-FREQ is FAIL because INTRA-FREQ measurement is ongoing
Line 1458: 	 >>Validation of INTRA-FREQ is FAIL because SERVINGCEll measurement is ongoing
Line 1467: RrmBlkIdleMeasNr::ConfigureMeasReq
Line 1511: RrmBlkIdleMeasNr::ConfigureMeasReq. pServingCellInfo or pFreqInfo is nullptr
Line 1521: 	>>(MockMeasObject) Initiate request for SERVING-CELL measurement. Slot %d
Line 1525: For MockMeasObject, meas is ongoing
Line 1541: 	>>(MEASTYPE_INIT) Initiate request for SERVING-CELL measurement. Slot %d
Line 1545: 	>>(ALLMEAS) Initiate request for SERVING-CELL measurement. Slot %d
Line 1557: 	>>(TimerExpired) Initiate request for SERVING-CELL measurement. Slot %d
Line 1565:    >>Skip request for SERVING-CELL
Line 1591: 	>>(ALLMEAS) Initiate request for INTRA-FREQUENCY. Slot %d
Line 1600: 	>>(MEASTYPE_INIT) Initiate request for INTRA-FREQUENCY. Slot %d
Line 1631:    >>(TimerExpired) Initiate request for INTRA-FREQUENCY. Slot %d MeasType (enum)%d
Line 1640: 	  ::AddNCellT amount (%d)
Line 1648:    >>Skip request for INTRA-FREQUENCY because Timer is not expired
Line 1660: SLOT %d : Skip request for INTRA-FREQUENCY because there is no candidate Cell for MEASUREMENT. Go to next Slot
Line 1678: SLOT %d : Change from BOTH to SRCH for INTRA-FREQUENCY because there is no candidate Cell for MEASUREMENT.
Line 1697: SLOT %d : The conditions were not met(Serving and IntraFreq). Go to next Slot
Line 1706: SLOT %d : The conditions were not met(Serving and IntraFreq). Go to next Slot
Line 1759: ERROR! freqinfo is null. Unexpected procedure. Need to check
Line 1768: SLOT %d : Skip request for INTER-FREQUENCY because there is no candidate Cell for MEASUREMENT. Go to next Slot
Line 1777: SLOT %d : Change from BOTH to SRCH for INTTER-FREQUENCY because there is no candidate Cell for MEASUREMENT.
Line 1799: 	>>Update MeasScheduleInfo for INTER-FREQ %d MeasOngoing %d
Line 1805: SLOT %d : There is no Candidate INTER-FREQUENCY for request
Line 1839:    >>HIGHER_PRIORITY Eutra is empty
Line 1854:    >>EQUAL_PRIORITY Eutra is empty
Line 1869:    >>LOWER_PRIORITY Eutra is empty
Line 1887: 	>>Update MeasScheduleInfo for IRAT-FREQ %d MeasOngoing %d
Line 1891: 	>>There is NO Candidate IRAT-FREQ for slot [%d]
Line 1898: 	>>No availabe Irat type
Line 1905: MeasSlot error [%d]
Line 1918: SLOT %d : IRAT REQUEST INFO MeasType(%d), SsbFreq(%d), MeasObjectId(%d), NumLteMeasInput(%d)
Line 1925: SLOT %d : REQUEST INFO MeasType(%d), SsbFreq(%d), MeasObjectId(%d), NumSsbMeasInput(%d)
Line 1931:    >>SsbMeasInput[%d] : Cell ID %d, BeamIndex %d, BeamTimingOffset 0x%x
Line 1942: RrmBlkIdleMeasNr::StoreMeasResult MeasType(%d)
Line 1975: RrmBlkIdleMeasNr::PriorityEutraSrchMeas
Line 1990:    >>START Checking for EUTRA Frequency %d MeasOngoing %d IsEutraFreqTry %d
Line 2021:      ::[INITIAL MEAS] is Done. IsEutraFreqTry %d
Line 2029:      ::Expired MeasCycle. IsEutraFreqTry %d
Line 2067:      ::[ERROR] RrmBlkIdleMeasNr::NumSsbMeasInput is excced MAX num of Cell (%d)
Line 2076:      ::CellInfo in Configured request. PhysCellId %d, CellIndexEutra %d, CellIndividualOffset %d
Line 2083:      ::AddNCellT amount (%d)
Line 2092:      ::Expired SrchCycle. IsEutraFreqTry %d
Line 2101:      ::Try next Freq. Changed EUTRA Frequency %d 
Line 2115:      ::LastMeasTyep:(enum)%d, MeasSlot:%d
Line 2121:      ::EUTRA Frequency %d is already ONGOING to Search/Meas. Try next Freq. IsInterFreqTry %d
Line 2128:      ::FOUND Freq to try, update timeinfo to measScheduleInfo
Line 2139:    >>PriorityEutraSrchMeas end
Line 2151: RrmBlkIdleMeasNr::AddNeighbourCell Received FreqInfo is nullptr
Line 2156: RrmBlkIdleMeasNr::AddNeighbourCell Received FreqInfo is nullptr
Line 2175: RrmBlkIdleMeasNr::AddNeighbourCell Detect barredcell Arfcn %d, CellId %d
Line 2193: RrmBlkIdleMeasNr::UpdateEutraConfig
Line 2212:    >>Index:%d CarrierFreqInfo.AllowedMeasBandwidth:%d
Line 2218:    >>Set CarrierFreq:%d AllowedMeasBandwidth:(enum)%d
Line 2230: RrmBlkIdleMeasNr::UpdateEutraMeasResult - MeasType:%s(%d) MeasObjectId:%d NumResult:%d
Line 2244:    >>Received Eutra MEAS Index:%d CellId:%d isvalid:%d Rsrp:%d Rsrq:%d Sinr:%d TO:%d
Line 2251: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 2280:    >>MoveCellSet CANDILISTEDCELLSET to IDLISTEDCELLSET for CellId:%d
Line 2284:    >>FAILED MoveCellSet CANDILISTEDCELLSET to IDLISTEDCELLSET for CellId:%d
Line 2292:    >>MoveCellSet CANDIDETECTEDCELLSET to IDDETECTEDCELLSET for CellId:%d
Line 2296:    >>FAILED MoveCellSet CANDIDETECTEDCELLSET to IDDETECTEDCELLSET for CellId:%d
Line 2303:    >>Wrong Step CellId%d, Msg.CellId:%d, Isvalid:(bool)%d
Line 2308:    >>Msg.CellId:%d is not exist in CellSet
Line 2317:    >>ObjectId is not matched --- Freq:%d ScheduleInfo.ObjectId:%d Msg.ObjectId:%d
Line 2330: RrmBlkIdleMeasNr::UpdateEutraSrchResult - MeasType:%s(%d) ObjectId:%d NumResult:%d
Line 2349:    >>Received Eutra SRCH Index:%d CellId:%d isvalid:%d TimingOffset:%d cptype:%d
Line 2356: SET AgcGain:[0]%d[1]%d for ARFCN:%d
Line 2373:    >>UnIdListedCell:%d
Line 2397:    >>MoveCellSet RRM_SET_TYPE_UNIDLISTEDCELLSET to RRM_SET_TYPE_CANDILISTEDCELLSET for CellId:%d
Line 2401:    >>FAILED MoveCellSet RRM_SET_TYPE_UNIDLISTEDCELLSET to RRM_SET_TYPE_CANDILISTEDCELLSET for CellId:%d
Line 2409:    >>Wrong Step CellId%d, Msg.CellId:%d, Isvalid:(bool)%d
Line 2418: Fail to allocate pCellInfo
Line 2430:    >>AddCellSet RRM_SET_TYPE_CANDIDETECTEDCELLSET for CellId:%d
Line 2434:    >>FAILED AddCellSet RRM_SET_TYPE_CANDIDETECTEDCELLSET for CellId:%d
Line 2446:    >>ObjectId is not matched --- Freq:%d ScheduleInfo.ObjectId:%d Msg.ObjectId:%d
Line 2469: RrmBlkIdleMeasNr::CheckEvaluation ServingCell measurement is ongoing. Skip Evaluation.
Line 2481: RrmBlkIdleMeasNr::CheckEvaluation INTRA FREQUENCY measurement is ongoing. Skip Evaluation.
Line 2493: RrmBlkIdleMeasNr::CheckEvaluation INTER FREQUENCY measurement is ongoing. Skip Evaluation.
Line 2506: RrmBlkIdleMeasNr::CheckEvaluation IRAT FREQUENCY measurement is ongoing. Skip Evaluation.
Line 2517: RrmBlkIdleMeasNr::SetReschedule.
Line 2530: ServingCell measurement is ongoing.
Line 2552: INTRA FREQUENCY measurement is ongoing. Send MEAS REQ immediately.
Line 2579: INTER FREQUENCY measurement is ongoing. Send MEAS REQ immediately.
Line 2607: IRAT measurement is ongoing. Send MEAS REQ immediately.
Line 2639: RrmBlkIdleMeasNr::IsAllowedDeriveSsbIndexForFreq - ARFCN:%d MeasObjectId:%d
Line 2661: 	>>failed to GetSibServFreqInfo
Line 2686:    >>bAllowed:(bool)%d - duplexMode:%s((enum)%d) bDeriveSsbIndexFromCell:%d IdleDerivedOff:%d
Line 2694: RrmBlkIdleMeasNr::DeriveSsbIndexUsingBdResult - ARFCN:%d PCID:%d BdResultSsbIndex:%d
Line 2700:    >>VERIFY ssbIndexDerived:%d(3bit:%d) with BdResultSsbIndex:%d(3bit:%d)
Line 2706:    >>VERIFIED - set ssbIndexDerived:%d
Line 2711:    >>NOT MATCHED - set RRM_UNKNOWN_RSINDEX:%d
Line 2717:    >>UNKNOWN - set BdResultSsbIndex:%d
Line 2733: RrmBlkIdleMeasNr::FindBestSrchResult - StartIdx:%d
Line 2745:      ::CANDIDATE SsbSrchResult[%d] - CellId:%d CorrEnergy:%d
Line 2756:      ::CANDIDATE SsbSrchResult[%d] - CellId:%d CorrEnergy:%d
Line 2769:      ::BEST SsbSrchResult[%d] - CellId:%d TimingOffset:%d
Line 2777: RrmBlkConnMeasNr::DeriveSsbIndexUsingSrchResult - SrchResultSsbTimingOffset:%d
Line 2796:    >>pTargetCell is null or pServingCell is null
Line 2808:    >>tolerence:%d - twoSsbSymbolLength:%d(SCS:(enum)%d) onePdschSymbolLength:%d(SCS:(enum)%d)
Line 2846: RrmBlkIdleMeasNr::ConfigureMeasResultInd (L1C_RRM_MEAS_RESULT_IND)
Line 2874: FreqPtr is null return false
Line 2880: 	 >>SsbInBurst Bitmap:0x%08x %08x
Line 2897: 	>>cell_result_index:%d - ServCellIndex:%d Arfcn:%d CellId:%d
Line 2913: 	 >>RrmBlkConnMeasNr::ConfigureMeasResultInd SsbIndex:%d is out of SsbInBurst Bitmap:0x%08x %08x
Line 2926: 	  ::antenna_index:%d ssb_result_index:%d - SsbIndex:%d SsbRsrp:%d
Line 2933: 	  ::antenna_index:%d - SsbCnt:%d
Line 2955: 	>>ssb_result_total_counter:%d
Line 2963: 	>>Error! pServingCell is null
Line 2987: 	>>ScheduledSsbConfigMobility.SsbToMeasurePresent is false
Line 2991: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 2996: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 3001: 	>>NumSsbToMeasure %d, uSsbBitmap.ssbBitmap : SsbBitmap:0x%08x %08x
Line 3005: 	>>Wrong NumSsbToMeasure value %d detected
Line 3025:    >>[DEBUG-SRCH] Index:%d CellId:%d Corr:%d BeamTimingOffset:%d RxBeamIdx: %d
Line 3052:    >>Sorted Srch result Index:%d CellId:%d Corr:%d BeamTimingOffset:%d RxBeamIdx: %d
Line 3059: RrmBlkIdleMeasNr::CheckAvailableEutraCellMeas
Line 3097:      ::AddNCellT amount (%d)
Line 3104: RrmBlkIdleMeasNr::UpdateTimingOffsetAfterdrx - TimingOffset:%d
Line 3118: pFreqInfo is not found
Line 3128:    >>ServingCell TO updating
Line 3135:    >>ServingCell is nullptr
Line 3158:    >>FOUND - SetType:%s(%d) ObjectId:%d
Line 3180:    >>Unexcepted behavior detection.
Line 3192:    >>Unexcepted behavior detection.
Line 3197:    >>End of UpdateTimingOffsetAfterCdrx
Line 3203: RrmBlkIdleMeasNr::MakePbchDecodeReq
