Line 370: ERROR creating TPeriodicInterFResel
Line 377: ERROR registering for State Change notificationwith CnxMgr
Line 384: Failed to create T322
Line 438: ERROR deleting TPeriodicInterFResel
Line 443: ERROR deleting T_AutonomousCsgSearch
Line 642: U2L reselection not ongoing
Line 658: TPeriodicInterFResel Stopped (TmId=%d)
Line 662: ERROR stopping TPeriodicInterFResel
Line 810: NotifyRequestedInitiateMeasurementExist : RequestedInitiateMeasurementExist[%d] Set to [%d]
Line 954: Processing SIB19
Line 1067: Processing SIB11
Line 1075: Processing SIB11bis
Line 1085: Processing SIB11
Line 1093: Processing SIB11bis
Line 1101: Processing SIB12
Line 1125: WARNING - ServingCell not found in SIB11/12! Adding it.
Line 1144: ServingCell SibCellInfo Index %d
Line 1151: Stopped Tn timer for Serving Cell
Line 1212: Candidate rejected due to PlmnId not matchingSelected PlmnId
Line 1275: DSDS: [BPLMN OPT] Serving cell (%d) measurments better than -13dB and BPLMN ongoing on same stack -> ignore cellreselection
Line 1280: DSDS: [BPLMN OPT] IsManualScan = %d
Line 1288: DSDS: [BPLMN OPT] Serving cell (%d) measurments less than -13dB, Request cause set to Srrc_ImmediateResel
Line 1294: DSDS: [BPLMN OPT] Serving cell not suitable so, Request cause set to Srrc_ImmediateResel
Line 1303: DSDS: DSRC grant rejected (%d, %d)
Line 1310: DSDS: Waiting for DSRC response for CellReselection (%d, %d)
Line 1320: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1338: Classname:CellReselecter: ERROR Illegal State
Line 1363: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 1375: Classname:CellReselecter: ERROR Illegal State
Line 1401: EvaluateGsmCandidate: NasSignalling Pending state:ignore GSM Reselection 
Line 1436: Classname:CellReselecter: ERROR Illegal State
Line 1469: EvaluateEutraCandidate: NasSignalling Pending state:ignore EUTRA reselection 
Line 1498: Classname:CellReselecter: ERROR Illegal State
Line 1538: SirBasedReselEnabled is disabled for CS
Line 1546: CheckNextCandidate
Line 1560: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1566: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1610: Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 1616: Ignore Normal IF reselection & SIR reselection (ServingFreqSir %d, NeighFreqSir %d)
Line 1654: GenMsg is NULL
Line 1661: CellReselecter: ERROR Illegal State
Line 1692: SirBasedReselEnabled is disabled for CS
Line 1701: CheckNextPrioCandidate
Line 1715: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 1721: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 1733: [APBCR] InterF Reselection Measurements Received for Utra Priority Based Cell Reselection
Line 1739: [APBCR] No Feasible UtraPrio Candidate
Line 1749: [APBCR] InterRat Reselection Measurements Received for GSM Priority Based Cell Reselection
Line 1756: [APBCR] No Feasible GsmPrio Candidate
Line 1762: Check normal next Candidate
Line 1781: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 1788: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 1795: [APBCR] Checking InterF Reselection Measurements for Utra Priority Based Cell Reselection
Line 1801: [APBCR] No Feasible UtraPrio Candidate
Line 1814: [APBCR] No Feasible GsmPrio Candidate
Line 1818: Check normal next Candidate
Line 1851: Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 1857: Ignore Normal IF reselection & SIR reselection (ServingFreqSir %d, NeighFreqSir %d)
Line 1898: GenMsg is NULL
Line 1905: CellReselecter: ERROR Illegal State
Line 1927: Reset CSG to non-CSG Reselection flag 
Line 1966: CellReselecter_p->ReselMeasControllerPtr is NULL
Line 1982: RRC connection release in progress in FACH :: ignore reselection
Line 1988: ReleasingInitialAccessResource in progress :: ignore reselection
Line 1996: (CS call exist) && (RRC is in FACH) :: ignore reselection
Line 2004: (PCH Response in progress) && (RRC is in FACH) :: ignore reselection
Line 2089: ERROR Illegal State
Line 2101: GenMsg_1 is NULL 
Line 2112: GenMsg_2 is NULL 
Line 2164: SirBasedReselEnabled is disabled for CS
Line 2182: >> Triggering Conditions for SirInterFResel (ServingFreq: %d)
Line 2197: >> CHECK: Found SirCandidate in the SirRankingList? -> PASS (CandidateFreq: %d)
Line 2201: >> CHECK: Found SirCandidate in the SirRankingList? -> FAIL
Line 2211: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Line 2216: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
Line 2230: Invalid BandId of ServingCell (%d)
Line 2238: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 2243: >> CHECK: ServingCellSir(%d) < 10dB -> PASS
Line 2248: >> CHECK: ServingCellSir(%d) < 10dB -> FAIL
Line 2256: >> CHECK: CandidateEcNo(%d) > -13dB -> PASS
Line 2261: >> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
Line 2269: >> CHECK: NumCellsInSameFreq(%d) > 1 -> PASS
Line 2274: >> CHECK: NumCellsInSameFreq(%d) > 1 -> FAIL
Line 2286: >> VERDICT: Found SirCandidate -> Ignore Normal IF reselection: run SIR reselection (Freq %d, PSC %d, SIR %d)
Line 2290: >> VERDICT: No SirCandidate Found
Line 2431: Classname:CellReselecter: ERROR Illegal State
Line 2495: GenMsg is NULL
Line 2550: URRC is not in IDLE mode, start ASF Timer for %d sec 
Line 2555: URRC is not in IDLE mode, and ASF Timer is already running
Line 2569: ERROR stopping T_AutonomousCsgSearch
Line 2574: URRC is in IDLE mode, start ASF immediately
Line 2584: NumofTargetCsgCells(%d) Target-Rat(%d), so just ignore this target cell
Line 2590: ERROR stopping T_AutonomousCsgSearch
Line 2597: CellReselecter: This is not a source cell of FingerPrinted CSG Cell
Line 2603: ERROR stopping T_AutonomousCsgSearch
Line 2611: CellReselecter: ERROR Illegal State
Line 2617: SIB11_READ_DCHSPA_YES
Line 2622: SIB11_READ_DCHSPA_NO
Line 2731: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 2737: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 2753: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 2761: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 2772: Not Eutra Cell
Line 2781: [APBCR] InterF Reselection Measurements Received for Utra Priority Based Cell Reselection
Line 2788: [APBCR] No Feasible UtraPrio Candidate
Line 2801: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 2810: [APBCR] InterRat Reselection Measurements Received for GSM Priority Based Cell Reselection
Line 2818: [APBCR] No Feasible GsmPrio Candidate
Line 2829: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 2851: Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 2861: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 2868: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 2877: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 2892: No Normal Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 2903: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 2923: Periodic: Normal InterF Candidate Found-> Find SirCandidate
Line 2931: Normal IF resel candidate is replaced by the SirInterFResel candidate
Line 2942: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 2960: Periodic: Normal IntraF Candidate Found-> Find SirCandidate
Line 2975: Normal IntraF Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 2986: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3012: >>> GSM is measured. But Current IRAT Measurement rule is MeasureNone <<<
Line 3042: WaitingForCellReselMeasurements_CellReselectionPrioBaseMeasurementsAvailable
Line 3100: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3105: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE!!
Line 3110: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 3137: StopMruEutraMeas
Line 3198: Classname:CellReselecter: ERROR Illegal State
Line 3250: GenMsg is NULL
Line 3255: Classname:CellReselecter: ERROR Illegal State
Line 3283: WaitingForCellReselMeasurements_PeriodicInterFReselAvailable
Line 3287: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 3294: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3317: Call Setup In Progress: Block Periodic Inter-freq
Line 3323: PCH Config Response In Progress: Block Periodic Inter-freq
Line 3338: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3346: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 3354: Attempting Eutra Reselection (PeriodicInterFAvailable)
Line 3360: Not Eutra Cell
Line 3370: TReselDuration: %d msec
Line 3376: Invalid Scaled TReselDuration -> Set to %d msec
Line 3390: Attempting PeriodicInterFReselection on CandidateCell(%d,%d)
Line 3396: Not Inter-Freq Cell
Line 3406: ERROR starting TPeriodicInterFResel
Line 3411: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3421: ERROR stopping TPeriodicInterFResel
Line 3429: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3438: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 3450: ERROR starting TPeriodicInterFResel
Line 3455: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 3465: Invalid CellId %d
Line 3610: MeasurementInd is ingored by Pending State - CellDch
Line 3628: WARNING CandidateInEvalPtr is not NULL
Line 3633: Deactivation finished :: Retry with the previously received measurements
Line 3652: GenMsg is NULL
Line 3663: CellReselecter: ERROR Illegal State
Line 3683: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 3689: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 3705: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 3713: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested, IsReleasingProgress
Line 3725: Not Eutra Cell
Line 3743: [APBCR] WARNING No Feasible UtraPrio Candidate
Line 3756: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3773: [APBCR] WARNING No Feasible GsmPrio Candidate
Line 3784: [APBCR] ERROR Unknown type of CandidateCell : CellReselecter_p->CandidatePtr->type(%d)
Line 3808: Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 3818: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 3825: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 3834: Periodic: NormalCandidatePtr is NULL -> Find SirCandidate
Line 3849: No Normal Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 3860: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3880: Periodic: Normal InterF Candidate Found-> Find SirCandidate
Line 3888: Normal IF resel candidate is replaced by the SirInterFResel candidate
Line 3899: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3917: Periodic: Normal IntraF Candidate Found-> Find SirCandidate
Line 3932: Normal IntraF Candidate & SirCandidate Found -> Trigger PeriodicInterFResel
Line 3943: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 3966: WARNING Best CandidateCell has been changed during deactivation time: Previous(%d,%d) vs. Now(%d,%d)
Line 3979: GSM is measured. But Current IRAT Measurement rule is MeasureNone
Line 4013: GenMsg is NULL
Line 4025: CellReselecter: ERROR Illegal State
Line 4036: Confirmed-Still checking on CandidateCell(%d,%d)
Line 4040: ERROR (CandidateCellPtr !=NULL)	CandidateInEvalPtr is NULL - return
Line 4057: Started deactivation on CandidateCell(%d,%d) being evaluated in CELL_FACH
Line 4063: ERROR CandidateCell is NOT active in CELL_FACH
Line 4083: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 4089: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 4112: EutraCell Found - Started deactivation on CandidateCell for U2L reselection
Line 4117: ERROR CandidateCell is NOT active
Line 4125: Not Eutra Cell
Line 4136: Different LAI of CandidateCell(%d,%d) & Call setup in progress =-> Reject this candidate
Line 4149: Different LAI of CandidateCell(%d,%d) & ServingCell >= -15 -> Reject this candidate
Line 4159: CandidateCell(%d,%d) came out of the reject condition
Line 4174: No candidate remaining in the early SIB ranking list
Line 4182: No change in the best cell - Keep attempting on current candidate(%d,%d)
Line 4187: Best cell has changed back to Serving Cell(%d,%d)
Line 4195: ServingCell energy is too low & CandidateCell(%d,%d) energy is not bad -> Keep attempting
Line 4203: Best neighbor changed, but within meas error margin -> Keep attempting on previous candidate(%d,%d)
Line 4208: ServingCell Not Suitable - Finish cell reselection asap on current candidate(%d,%d)
Line 4213: Best cell has changed to Non-Serving Cell(%d,%d)
Line 4236: (CheckingIntraF) Periodic: PeriodicInterFResel Enabled (Count: %d)
Line 4246: PeriodicInterFReselMeas Not Required Anymore -> Clear PeriodicIFReselEnabled
Line 4253: ServingCell is Femto -> Skip the procedure of finding the best SIR cell
Line 4263: (CheckingIntraF)  Normal InterF Candidate Found-> Find SirCandidate
Line 4269: Best Candidate Changed for InterFResel & SirCandidate Found-> To be Handled After Deactivation
Line 4271: Check if the best EcNo and Sir candidates are the same
Line 4282: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 4300: (CheckingIntraF) Periodic: No Restrictions on PeriodicInterFResel  -> Find SirCandidate
Line 4315: No Other Restrictions & SirCandidateFound -> Trigger PeriodicInterFResel
Line 4326: No SirCandidate -> PeriodicInterFReselMeasCount is decreased to %d
Line 4346: Serving cell signal quality is too bad & now ready to camp on CellReselecter_p candidate cell
Line 4356: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 4362: ERROR CandidateCell is NOT active
Line 4379: TResel expired or ignored & IsSelectable received for CandidateCell(%d,%d) -> Finish cell reselection
Line 4405: GenMsg is NULL
Line 4413: MUST NOT OCCUR - ERROR SavedTriggeringMsg is NULL
Line 4419: TResel expired or Serving cell not suitable, but still IsSelectable NOT received for CandidateCell(%d,%d) -> Wait!
Line 4475: Abort Early SIB Reading received for CandidateCell(%d,%d)
Line 4494: CellReselecter: ERROR Illegal State
Line 4516: CheckingIntraFreqReselCandidate_CommonChannelSetupComplete
Line 4551: CheckingIntraFreqReselCandidate_PeriodicInterFReselAvailable
Line 4555: (PeriodicInterFReselAvailable) Ignore Periodic Inter-Freq Reselection
Line 4562: IgnoreCellReselection & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4585: Call Setup In Progress: Block Periodic Inter-freq
Line 4591: PCH Config Response In Progress: Block Periodic Inter-freq
Line 4606: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 4614: Evaluation of EUTRA Candidate not allowed: IsUserDataRequested
Line 4629: EutraCell Found - Started deactivation on CandidateCell(%d,%d) for U2L reselection
Line 4635: ERROR CandidateCell is NOT active
Line 4643: Not Eutra Cell
Line 4651: TReselDuration: %d msec
Line 4679: Started deactivation on CandidateCell(%d,%d) for candidate cell change
Line 4685: ERROR CandidateCell is NOT active
Line 4692: Not Inter-Freq Cell
Line 4697: Too Low ServingEcNo (should not stop the on-going reselection) or ERROR No Matching SirCandidate
Line 4706: ERROR starting TPeriodicInterFResel
Line 4711: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 4721: ERROR stopping TPeriodicInterFResel
Line 4730: SirCandidate Changed & TResel Running & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4740: SirCandidate Changed & TResel Expired & ImmediateInterFReselMeasRequired -> Release ImmediateInterFReselMeas
Line 4752: ERROR stopping TPeriodicInterFResel
Line 4760: ERROR starting TPeriodicInterFResel
Line 4765: TPeriodicInterFResel Started (TmId=%d) : %i msec
Line 4775: Invalid CellId %d
Line 4800: CheckingIntraFreqReselCandidate_PrioBaseNeighbourCellSysInfoRecved
Line 4820: Currently checking intra-freq resel candidate -> Ignore the event PrioBaseNeighbourCellSysInfoRecved
Line 4867: Deactivate received for intra-freq CandidateCell(%d,%d) - DeactivateForOOS=TRUE
Line 4908: CellReselecter: ERROR Illegal State
Line 5002: CheckingIntraFreqReselCandidate_CellReselectionPrioBaseMeasurementsAvailable
Line 5063: Evaluation of EUTRA Candidate not allowed as RRC Pending State is CellFach
Line 5068: Evaluation of EUTRA Candidate not allowed BlockIratResel is TRUE
Line 5073: Skip Etura Meas: RRC Cnx in progress or User Data Requested
Line 5133: uphy_SetCellReselection = TRUE
Line 5161: NotifySelectionNotMeasController: Msg is NULL cause of Suspending
Line 5165: NotifySelectionNotMeasController: Msg is NULL
Line 5223: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_CnxMgr_GenerateNewCellSelected returned NULL
Line 5233: NotifySelectionToGsmFailed:[NON FATAL ERROR]rrc_Class_MeasController_GenerateCellSelectionToGsmFailed returned NULL
Line 5299: ERROR new CandidateCellPtr is NULL
Line 5311: Finishing cell reselection on CandidateCellPtr(%d,%d)
Line 5367:  FinishCellSelection Error Band Detection Error 
Line 5399: Classname:CellReselecter: ERROR Illegal State
Line 5416: IsSelectable Received
Line 5434: IsSelectble :: ServingCell NOT suitable for CandidateCell(%d,%d)-> Finish cell reselection
Line 5441: IsSelectable received for CandidateCell(%d,%d) :: Wait for next neighbor cell meas ind
Line 5460: GenMsg is NULL
Line 5474: IsSelectable: ERROR CandidateInEvalPtr == NULL
Line 5479: IsSelectable: ERROR CandidateCellPtr is NULL -> Abort Reselection
Line 5496: GenMsg is NULL
Line 5508: Classname:CellReselecter: ERROR Illegal State
Line 5531: IsNotSelectable Received
Line 5558: (E-SIB) IsRejectedForResel set to TRUE -> Wait for next measurements
Line 5583: GenMsg is NULL
Line 5600: Classname:CellReselecter: ERROR Illegal State
Line 5643: Classname:CellReselecter: ERROR Illegal State
Line 5661: [DSDS]: Dsrc grant received
Line 5685: Call Setup In Progress: Block Inter-freq and Inter-RAT
Line 5691: PCH Config Response In Progress: Block Inter-freq and Inter-RAT
Line 5697: [DSDS]: CandidateInEvalPtr is not NULL
Line 5715: [DSDS]: CandidatePtr is made NULL
Line 5722: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5740: Classname:CellReselecter: ERROR Illegal State
Line 5766: Attempting IntraFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5783: Classname:CellReselecter: ERROR Illegal State
Line 5789: [DSDS]: CandidatePtr NULL
Line 5820: Classname:CellReselecter: ERROR Illegal State
Line 5890: Classname:CellReselecter: ERROR Illegal State
Line 5958: Classname:CellReselecter: ERROR Illegal State
Line 5988: Attempting InterFrequency Cell Reselection to neighbour Cell DL UARFCN %i, CPICH %i
Line 5998: MemAllocFailed for Candidate cell
Line 6005: Classname:CellReselecter: ERROR Illegal State
Line 6040: CheckingInterFreqReselCandidate_IsNotSelectable
Line 6147: Attempting InterRAT Cell Reselection to neighbour GSM Cell
Line 6158: Classname:CellReselecter: ERROR Illegal State
Line 6177: Attempting Eutra RAT Cell Reselection to neighbour Eutra Cell
Line 6188: Classname:CellReselecter: ERROR Illegal State
Line 6233: Classname:CellReselecter: ERROR Illegal State
Line 6269: Wait for Signaling Grant to do Rollback
Line 6291: Classname:CellReselecter: ERROR Illegal State
Line 6334: Classname:CellReselecter: ERROR Illegal State
Line 6371: Classname:CellReselecter: ERROR Illegal State
Line 6404: Classname:CellReselecter: ERROR Illegal State
Line 6437: Wait for Signaling Grant to do Rollback
Line 6461: Classname:CellReselecter: ERROR Illegal State
Line 6536: MemAllocFailed for Candidate cell
Line 6543: Classname:CellReselecter: ERROR Illegal State
Line 6614: CheckingEutraRatReselCandidate_MmReselectionToEutraFailed Cause %d and Barred Time value %d
Line 6649: DefaultState_MmEutraStatusInd - EutraDisabled set to %d
Line 6650: DefaultState_MmEutraStatusInd - BlockU2LMeas set to %d
Line 6693: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]CellReselecter: ERROR Illegal State
Line 6706: RevertingToServingCell_IsNotSelectable:[NON FATAL ERROR]CellReselecter: ERROR Illegal State
Line 6732: Classname:CellReselecter: ERROR Illegal State
Line 6770: Classname:CellReselecter: ERROR Illegal State
Line 6994: ERROR Illegal State
Line 7016: CellReselecter: ERROR Illegal State: %d
Line 7083: ERROR Cannot generate InternalMsg CellReselectionMeasurementsAvailable
Line 7115: ERROR GenMsg is NULL
Line 7152: ERROR GenMsg is NULL
Line 7201: ERROR GenMsg is NULL
Line 7344: ERROR GenMsg is NULL
Line 7489: ERROR GenMsg is NULL
Line 7519: ERROR GenMsg is NULL
Line 7540: ERROR GenMsg is NULL
Line 7584: ServingCell will be notified after CandidateCell
Line 7705: CellReselecter: ERROR Illegal State
Line 7728: ERROR GenMsg is NULL
Line 7792: ERROR GenMsg is NULL
Line 7800: CnxMgr indicates pending state transition to Cell_Dch
Line 7803: ERROR Unexpected State Change Notification
Line 7857: ERROR GenMsg is NULL
Line 7890: ERROR GenMsg is NULL
Line 7919: Stop T_AutonomousCsgSearch
Line 7926: pal_ERegId_URRC_autonomous_csg_search_compensation_interval - %d sec
Line 7931: TimeInSec - %d sec
Line 7940: Successfully started T_AutonomousCsgSearch(%d sec)
Line 7944: Could not start T_AutonomousCsgSearch(%d sec)
Line 7949: Could not start T_AutonomousCsgSearch(%d sec)
Line 7971: URRC is not in IDLE mode, start ASF Timer for %d sec 
Line 7976: URRC is not in IDLE mode, and ASF Timer is already running
Line 8016: URRC is in IDLE mode, start ASF immediately
Line 8025: NumofTargetCsgCells(%d) Target-Rat(%d), so just ignore this target cell
Line 8031: ERROR stopping T_AutonomousCsgSearch
Line 8038: CellReselecter: This is not a source cell of FingerPrinted CSG Cell
Line 8044: ERROR stopping T_AutonomousCsgSearch
Line 8091: Targer csg cell with Uarfcn(%d) Cpich(%d) found using ASF on Source CellID(%d) Freq(%d)
Line 8093: Received RSCP from BplmnHandler : Rscp(%d) EcN0(%d)
Line 8104: CellReselecter_p->csgMeasRule[%d] Updated
Line 8219: MFBI Eutra frequency %d at Eutra Band %d Earfcn %d
Line 8226: MFBI Eutra frequency %d from Earfcn %d
Line 8241: MFBI Earfcn %d at Eutra Band %d Frequency %d
Line 8247: MFBI Earfcn invalid at Eutra Band %d from Eutra Frequency %d
