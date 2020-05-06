Line 320: ERROR creating TPeriodicInterFResel
Line 327: ERROR registering for State Change notificationwith CnxMgr
Line 385: ERROR deleting TPeriodicInterFResel
Line 515: TPeriodicInterFResel Stopped (TmId=%d)
Line 519: ERROR stopping TPeriodicInterFResel
Line 644: NotifyRequestedInitiateMeasurementExist : RequestedInitiateMeasurementExist[%d] Set to [%d]
Line 786: Processing SIB19
Line 881: Processing SIB11
Line 892: Processing SIB11bis
Line 902: Processing SIB11
Line 913: Processing SIB11bis
Line 921: Processing SIB12
Line 946: WARNING - ServingCell not found in SIB11/12! Adding it.
Line 973: Stopped Tn timer for Serving Cell
Line 1075: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1093: Classname:TddCellReselecter: ERROR Illegal State
Line 1119: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1128: Classname:TddCellReselecter: ERROR Illegal State
Line 1154: NasSignalling Pending state:Block Inter-freq and Inter-RAT 
Line 1189: Classname:TddCellReselecter: ERROR Illegal State
Line 1222: NasSignalling Pending state:Block Inter-freq and Inter-RAT 
Line 1255: Classname:TddCellReselecter: ERROR Illegal State
Line 1287: CheckNextCandidate
Line 1301: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1307: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1365: GenMsg is NULL
Line 1372: TddCellReselecter: ERROR Illegal State
Line 1449: TddCellReselecter_p->ReselMeasControllerPtr is NULL
Line 1471: RRC connection release in progress in FACH :: ignore reselection
Line 1477: ReleasingInitialAccessResource in progress :: ignore reselection
Line 1488: (CS call exist) && (RRC is in FACH) :: ignore reselection
Line 1593: ERROR Illegal State
Line 1607: GenMsg_1 is NULL 
Line 1618: GenMsg_2 is NULL 
Line 1809: Classname:TddCellReselecter: ERROR Illegal State
Line 1878: GenMsg is NULL
Line 1883: TddCellReselecter: ERROR Illegal State
Line 1968: >>> Ignore Cell Reselection is TRUE . Free the Triggering Msg and return<<<
Line 1982: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2003: >>> GSM is measured. But Current IRAT Measurement rule is MeasureNone <<<
Line 2029: WaitingForCellReselMeasurements_TddCellReselectionPrioBaseMeasurementsAvailable
Line 2087: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2092: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE!!
Line 2097: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 2164: Classname:TddCellReselecter: ERROR Illegal State
Line 2205: GenMsg is NULL
Line 2210: Classname:CellReselecter: ERROR Illegal State
Line 2238: WaitingForCellReselMeasurements_PeriodicInterFReselAvailable
Line 2242: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 2249: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 2272: Call Setup In Progress: Block Periodic Inter-freq
Line 2278: PCH Config Response In Progress: Block Periodic Inter-freq
Line 2293: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2301: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 2309: Attempting Eutra Reselection (PeriodicInterFAvailable)
Line 2315: Not Eutra Cell
Line 2325: TReselDuration: %d msec
Line 2331: Invalid Scaled TReselDuration -> Set to %d msec
Line 2353: Attempting PeriodicInterFReselection on CandidateCell(%d,%d)
Line 2359: Not Inter-Freq Cell
Line 2369: ERROR starting TPeriodicInterFResel
Line 2374: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 2384: ERROR stopping TPeriodicInterFResel
Line 2392: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 2401: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 2413: ERROR starting TPeriodicInterFResel
Line 2418: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 2428: Invalid CellId %d
Line 2582: WARNING CandidateInEvalPtr is not NULL
Line 2587: Deactivation finished :: Retry with the previously received measurements
Line 2606: GenMsg is NULL
Line 2616: TddCellReselecter: ERROR Illegal State
Line 2636: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2642: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2658: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2666: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 2678: Not Eutra Cell
Line 2700: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 2713: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 2727: GSM is measured. But Current IRAT Measurement rule is MeasureNone
Line 2758: GenMsg is NULL
Line 2768: TddCellReselecter: ERROR Illegal State
Line 2778: Confirmed-Still checking on CandidateCell(%d,%d)
Line 2782: ERROR (CandidateCellPtr !=NULL)	CandidateInEvalPtr is NULL - return
Line 2798: Started deactivation on CandidateCell being evaluated in CELL_FACH
Line 2804: ERROR CandidateCell is NOT active in CELL_FACH
Line 2824: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2830: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2853: EutraCell Found - Started deactivation on CandidateCell for U2L reselection
Line 2858: ERROR CandidateCell is NOT active
Line 2866: Not Eutra Cell
Line 2877: Different LAI of CandidateCell(%d,%d) & Call setup in progress =-> Reject this candidate
Line 2903: CandidateCell(%d,%d) came out of the reject condition
Line 2915: No candidate remaining in the early SIB ranking list
Line 2923: No change in the best cell - Keep attempting on current candidate(%d,%d)
Line 2928: Best cell has changed back to Serving Cell(%d,%d)
Line 2935: ServingCell Not Suitable - Finish cell reselection asap on current candidate(%d,%d)
Line 2940: Best cell has changed to Non-Serving Cell(%d,%d)
Line 2956: Serving cell signal quality is too bad & now ready to camp on TddCellReselecter_p candidate cell
Line 2966: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 2972: ERROR CandidateCell is NOT active
Line 2989: TResel expired or ignored & IsSelectable received for CandidateCell(%d,%d) -> Finish cell reselection
Line 3015: MUST NOT OCCUR - ERROR SavedTriggeringMsg is NULL
Line 3021: TResel expired or Serving cell not suitable, but still IsSelectable NOT received for CandidateCell(%d,%d) -> Wait!
Line 3072: Abort Early SIB Reading received for CandidateCell(%d,%d)
Line 3090: TddCellReselecter: ERROR Illegal State
Line 3114: CheckingIntraFreqReselCandidate_CommonChannelSetupComplete
Line 3143: CheckingIntraFreqReselCandidate_PeriodicInterFReselAvailable
Line 3147: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 3154: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3177: Call Setup In Progress: Block Periodic Inter-freq
Line 3183: PCH Config Response In Progress: Block Periodic Inter-freq
Line 3199: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3207: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 3222: EutraCell Found - Started deactivation on CandidateCell(%d,%d) for U2L reselection
Line 3228: ERROR CandidateCell is NOT active
Line 3236: Not Eutra Cell
Line 3244: TReselDuration: %d msec
Line 3272: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 3288: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 3295: ERROR CandidateCell is NOT active
Line 3303: Not Inter-Freq Cell
Line 3308: Too Low ServingEcNo (should not stop the on-going reselection) or ERROR No Matching SirCandidate
Line 3317: ERROR starting TPeriodicInterFResel
Line 3322: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3332: ERROR stopping TPeriodicInterFResel
Line 3341: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3351: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3363: ERROR stopping TPeriodicInterFResel
Line 3371: ERROR starting TPeriodicInterFResel
Line 3376: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3386: Invalid CellId %d
Line 3413: CheckingIntraFreqReselCandidate_PrioBaseNeighbourCellSysInfoRecved
Line 3433: Currently checking intra-freq resel candidate -> Ignore the event PrioBaseNeighbourCellSysInfoRecved
Line 3486: Deactivate received for intra-freq CandidateCell(%d,%d) - DeactivateForOOS=TRUE
Line 3535: TddCellReselecter: ERROR Illegal State
Line 3632: CheckingIntraFreqReselCandidate_TddCellReselectionPrioBaseMeasurementsAvailable
Line 3694: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3699: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE
Line 3704: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 3734: StopMruEutraMeas
Line 3786: uphy_SetCellReselection = TRUE
Line 3790: Tphy_SleepManager_duringCellReselection Need to be Implemented in Tdd
Line 3816: NotifySelectionNotMeasController: Msg is NULL cause of Suspending
Line 3820: NotifySelectionNotMeasController: Msg is NULL
Line 3875: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_CnxMgr_GenerateNewCellSelected returned NULL
Line 3885: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_MeasController_GenerateCellSelectionToGsmFailed returned NULL
Line 3955: ERROR new CandidateCellPtr is NULL
Line 3976: Finishing cell reselection on CandidateCellPtr(%d,%d)
Line 4037:  FinishCellSelection Error Band Detection Error 
Line 4082: Classname:TddCellReselecter: ERROR Illegal State
Line 4108: IsSelectable Received
Line 4132: IsSelectble:: ServingCell NOT suitable for CandidateCell(%d,%d)-> Finish cell reselection
Line 4141: IsSelectble & TResel not running for CandidateCell(%d,%d)-> Finish cell reselection
Line 4162: GenMsg is NULL
Line 4168: IsSelectable but TResel not yet expired for CandidateCell(%d,%d) -> Do nothing. Wait for next neighbor cell ind
Line 4182: IsSelectable: ERROR CandidateInEvalPtr == NULL
Line 4187: IsSelectable: ERROR CandidateCellPtr is NULL -> Abort Reselection
Line 4203: GenMsg is NULL
Line 4214: Classname:TddCellReselecter: ERROR Illegal State
Line 4243: IsNotSelectable Received
Line 4271: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 4278: (CS call exist) && (RRC is in FACH) :: Ignore reselection
Line 4301: GenMsg is NULL
Line 4318: Classname:TddCellReselecter: ERROR Illegal State
Line 4354: Classname:TddCellReselecter: ERROR Illegal State
Line 4386: Classname:TddCellReselecter: ERROR Illegal State
Line 4460: Classname:TddCellReselecter: ERROR Illegal State
Line 4541: Classname:TddCellReselecter: ERROR Illegal State
Line 4578: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 4588: MemAllocFailed for Candidate cell
Line 4594: Classname:TddCellReselecter: ERROR Illegal State
Line 4645: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 4650: CheckingInterFreqReselCandidate_IsNotSelectable
Line 4764: Attempting InterRAT Cell Reselection to neighbour GSM Cell
Line 4775: Classname:TddCellReselecter: ERROR Illegal State
Line 4798: Attempting Eutra RAT Cell Reselection to neighbour Eutra Cell
Line 4809: Classname:TddCellReselecter: ERROR Illegal State
Line 4854: Classname:TddCellReselecter: ERROR Illegal State
Line 4892: Wait for Signaling Grant to do Rollback
Line 4915: Classname:TddCellReselecter: ERROR Illegal State
Line 4957: Classname:TddCellReselecter: ERROR Illegal State
Line 4999: Wait for Signaling Grant to do Rollback
Line 5022: Classname:TddCellReselecter: ERROR Illegal State
Line 5093: MemAllocFailed for Candidate cell
Line 5100: Classname:TddCellReselecter: ERROR Illegal State
Line 5181: CheckingEutraRatReselCandidate_MmReselectionToEutraFailed Cause %d and Barred Time value %d
Line 5210: DefaultState_MmEutraStatusInd - EutraDisabled set to %d
Line 5211: DefaultState_MmEutraStatusInd - BlockU2LMeas set to %d
Line 5268: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]TddCellReselecter: ERROR Illegal State
Line 5282: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]TddCellReselecter: ERROR Illegal State
Line 5311: Classname:TddCellReselecter: ERROR Illegal State
Line 5354: Classname:TddCellReselecter: ERROR Illegal State
Line 5609: ERROR Illegal State
Line 5633: TddCellReselecter: ERROR Illegal State: %d
Line 5713: Classname:CellReselecter: ERROR Illegal State
Line 5749: Classname:CellReselecter: ERROR Illegal State
Line 5833: ERROR Cannot generate InternalMsg CellReselectionMeasurementsAvailable
Line 5857: ERROR GenMsg is NULL
Line 5880: ERROR GenMsg is NULL
Line 5897: ERROR GenMsg is NULL
Line 5933: ERROR GenMsg is NULL
Line 5954: ERROR GenMsg is NULL
Line 5975: ERROR GenMsg is NULL
Line 5996: ERROR GenMsg is NULL
Line 6017: ERROR GenMsg is NULL
Line 6039: ERROR GenMsg is NULL
Line 6059: ERROR GenMsg is NULL
Line 6079: ERROR GenMsg is NULL
Line 6099: ERROR GenMsg is NULL
Line 6114: ERROR GenMsg is NULL
Line 6134: ERROR GenMsg is NULL
Line 6149: ERROR GenMsg is NULL
Line 6171: ERROR GenMsg is NULL
Line 6322: TddCellReselecter: ERROR Illegal State
Line 6347: ERROR GenMsg is NULL
Line 6402: ERROR GenMsg is NULL
Line 6410: CnxMgr indicates pending state transition to Cell_Dch
Line 6413: ERROR Unexpected State Change Notification
Line 6428: ERROR GenMsg is NULL
Line 6443: ERROR GenMsg is NULL
Line 6459: ERROR GenMsg is NULL
Line 6507: DSDS: DSRC grant rejected (%d, %d)
Line 6514: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 6521: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 6542: Classname:TddCellReselecter: ERROR Illegal State
Line 6574: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i in Cell Fach State Or In Pending CellFach State
Line 6575: Classname:TddCellReselecter: ERROR Illegal State
Line 6586: No fach & measurements  release now
Line 6602: DSDS: DSRC grant rejected (%d, %d)
Line 6609: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 6615: Tdd cellreselecter new state IntraFreqReselection now
Line 6637: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CELL PARAM ID %i
Line 6640: Attempting IntraFrequency Cell Reselection
Line 6651: Classname:TddCellReselecter: ERROR Illegal State
Line 6697: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 6703: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 6709: [DSDS]: CandidateInEvalPtr is not NULL
Line 6729: [DSDS]: CandidatePtr is made NULL
Line 6737: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 6758: Classname:TddCellReselecter: ERROR Illegal State
Line 6769: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i in Cell Fach State Or In Pending CellFach State
Line 6770: Classname:TddCellReselecter: ERROR Illegal State
Line 6781: No fach & measurements  release now
Line 6788: Tdd cellreselecter new state IntraFreqReselection now
Line 6810: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CELL PARAM ID %i
Line 6813: Attempting IntraFrequency Cell Reselection
Line 6823: Classname:TddCellReselecter: ERROR Illegal State
Line 6833: [DSDS]: CandidatePtr NULL
Line 6852: ERROR GenMsg is NULL
