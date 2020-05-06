Line 200: ERROR creating TPendingOos Timer
Line 206: ERROR creating TReselHyst Timer
Line 260: ERROR deleting TPendingOos timer
Line 265: ERROR deleting TReselHyst timer
Line 325: SIntrasearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 341: SIntersearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 357: SSearchHcs received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 405: SSearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 411: SSearchRATGsm received value: (%i) consider this value to be absent
Line 421: SLimit,SearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 431: SHCS,RATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 491: SirBasedReselEnabled is disabled for CS
Line 514: Avoid this band (%d) if possible
Line 526: CSFB in progress: No ImmediateInterFReselMeas
Line 533: No FachMeasOccasion Available -> No ImmediateInterFReselMeas
Line 587: ERROR Illegal State
Line 616: ERROR starting TReselHyst timer
Line 620: TReselHyst started (TmId=%d)
Line 677: ERROR stopping TPendingOos Timer
Line 692: ERROR Illegal State
Line 715: ERROR Illegal State
Line 747: [CsCallInProgress] Set pendingState to CellFach temporarily
Line 757: ERROR starting TPendingOos timer
Line 768: ERROR starting TPendingOos timer
Line 778: ERROR Illegal State
Line 812: ImmediateInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
Line 821: PeriodicInterFReselMeas Required -> IsSirInterFReselMeasTriggered set to TRUE
Line 825: PeriodicInterFReselMeas Required but PeriodicInterFReselMeas Not Configured
Line 851: No SirInterFReselCandidate Found
Line 860: ImmediateInterFReselMeas Configured & No SirInterFReselCandidate Found -> Clear ImmediateInterFReselMeas
Line 868: PeriodicInterFReselMeasCount is decreased to %d
Line 920: RecvEutraMeasResult is ignored - Eutra disabled as IsEutraDisabled TRUE 
Line 1112: Overriding cell CPICH code to (%d) - No more measurements for reselection 
Line 1207: Invalid BandId of TargetCell (%d)
Line 1216: NeighFreq %d, Sir %d (Sir + BandOffset(%d))
Line 1227: BestSirFreq %d, BestSir %d, CandicateCell %d
Line 1233: >> CHECK: Freq %d, NumCellsInSameFreq(%d) > 1 -> FAIL
Line 1244: >> Triggering Conditions for SirInterFResel (ServingFreq: %d, CandidateFreq: %d)
Line 1251: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> PASS
Line 1263: Invalid BandId of ServingCell (%d)
Line 1272: ServingFreq %d: SirMeasured %d (SirStored %d - BandOffset(%d))
Line 1277: >> CHECK: ServingCellSir(%d) < 10dB -> PASS
Line 1282: >> CHECK: ServingCellSir(%d) < 10dB -> FAIL
Line 1290: >> CHECK: CandidateEcNo(%d) > -13dB -> PASS
Line 1295: >> CHECK: CandidateEcNo(%d) > -13dB -> FAIL
Line 1309: >> VERDICT: Find Better SirInterFReselCandididate -> FOUND (CandidateFreq %d,  BestCell %d, CellId %d)
Line 1314: >> VERDICT: Find Better SirInterFReselCandididate -> NOT FOUND (BestSir %d > ServingFreqSir %d + ServingFreqHyst %d)
Line 1320: >> CHECK: BestRscp(%d) > BestRscpTh(%d) -> FAIL
Line 1382: Quick RB : Ignore TReselHyst
Line 1401: Quick RB : Ignore TReselHyst
Line 1424: LTE supported : Ignore TReselHyst
Line 1432: ImmediateInterFReselMeasRequired: Ignore TReselHyst
Line 1467: Not refreshing measurement rules yet - waiting for T Reselection Hysteresis timer (1 second) to expire
Line 1477: ImmediateInterFReselMeas Required: Intra-freq. cell reselection is not triggered while TReselHyst is running
Line 1570: EutraMeasInterval Updated (%d)
Line 1578: EutraMeasInterval Not Updated (%d)
Line 1596: GenMsg is NULL
Line 1620: ->InterRat Measurement rule is MeasureNone - GSM disabled
Line 1652: Eutra Measurement rule is MeasureNone - Eutra disabled as MULTI_MODE_OPERATION Zero 
Line 1659: Eutra Measurement rule is MeasureNone - Eutra disabled as IsEutraDisabled TRUE 
Line 1665: CurrentRule = %d NewMeasRule = %d
Line 1685: GenMsg is NULL
Line 1761: Serving Cell is not suitable
Line 1762: ->IntraF Measurement rule is MeasureAll
Line 1763: ->InterF Measurement rule is MeasureAll
Line 1764: ->InterRat Measurement rule is MeasureAll
Line 1767: Reset CSG to non-CSG Reselection flag
Line 1779: ServingCell Not Suitable & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1797: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1809: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 1815: [InterF Measurement] newRule(%d) <-> currentRule(%d) 
Line 1819: [InterF Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d) 
Line 1830: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 1845: [InterRAT Measurement] newPrioBaseRule(%d) <-> CurrentPrioBaseRule(%d) 
Line 1889: AvoidCsgtoNonCsgResel[%d]
Line 1906: [UpdateMeasurementRules] HCS shall not be used for Inter-F & Inter-Rat layers
Line 1968: HsDsch-MeasurementOccasionAvailable
Line 1994: Clear ImmediateInterFReselMeas
Line 2036: InterFReselMeas Not Active & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 2086: SqualS (%i) > SIntrasearch (%i): ImmediateInterFReselMeas or PeriodicInterFReselMeas -> IntraFreq MeasureRule Changed to MeasureAll
Line 2096: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 2105: SqualS (%i) > SIntrasearch (%i): IntraFreq MeasureRule Changed to MeasureServingCellOnly
Line 2116: SqualS (%i) <= SIntrasearch (%i): IntraFreq MeasRule Changed to MeaureAll
Line 2122: WARNING - SIntrasearch not received
Line 2128: -> IntraFreq MeasRule Changed to MeaureAll
Line 2171: SqualS (%i) > SIntersearch (%i): ImmediateInterFReselMeas Configured (MeasureAll)
Line 2177: -> InterFreq MeasureRule Changed to MeaureAll
Line 2188: SqualS (%i) > SIntersearch (%i): Start Sir-based Periodic IF Resel Meas (Count %d)
Line 2194: -> InterFreq MeasureRule Changed to MeaureAll
Line 2202: SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas In Progress (MeasureAll, Count %d)
Line 2208: -> InterFreq MeasureRule Changed to MeaureAll
Line 2218: SqualS (%i) > SIntersearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 2228: SqualS (%i) > SIntersearch (%i): PeriodicInterFReselMeas Not Required -> InterFreq MeasureRule Changed to MeasureNone
Line 2237: SrxlevS (%i) > SSearchHcs (%i): InterFreq MeasureRule Changed to %d
Line 2241: SSearchHcs not received
Line 2253: SqualS (%i) <= SIntersearch (%i): PeriodicInterFReselMeasConfigured -> Hand the control over to CellReselecter (MeasureAll)
Line 2264: SqualS <= SIntersearch & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2270: SqualS (%i) <= SIntersearch (%i): InterFreq MeasureRule Changed to MeasureAll
Line 2286: IsSSearchHcsValid & SrxlevS <= SSearchHcs & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2291: SrxlevS (%i) <= SSearchHcs (%i): InterFreq MeasureRule Changed to MeasureAll
Line 2300: SIntersearch not received (MeasureAll)
Line 2312: SIntersearch not received & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2317: -> InterFreq MeasureRule Changed to MeaureAll
Line 2327: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2328: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 2338: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2354: oldRule !=newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2376: -> IntraFreq MeasureRule Changed to MeasureAll Due to Immediate or PeriodicInterFReselMeas Configured
Line 2392: oldRule==newRule==MeasureNone & ImmediateInterFReselMeasRequired -> Clear ImmediateInterFReselMeas
Line 2401: oldRule==newRule==MeasureNone & PeriodicInterFReselMeasConfigured -> Clear PeriodicInterFReselMeas
Line 2439: SqualS  (%i) > SSearchGsm (%i)
Line 2442: SrxlevS (%i) > SHcsGsm (%i)
Line 2446: SHcsGsm not received
Line 2449: ->InterRat Measurement rule is MeasureNone
Line 2459: SqualS  (%i) <= SSearchGsm (%i)
Line 2460: ->InterRat Measurement rule is MeasureAll
Line 2470: SrxlevS (%i) <= SHcsGsm (%i)
Line 2471: ->InterRat Measurement rule is MeasureAll
Line 2480: SSearchGsm not received
Line 2481: ->InterRat Measurement rule is MeasureAll
Line 2492: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 2493: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 2500: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2509: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2512: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2518: [InterRAT Measurement] new rule(%d) will be used
Line 2521: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2522: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2531: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2615: [APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : U2L reselection in CellFach is not suppoted
Line 2622: [APBCR] UpdatePrioBaseMeasurementRules_EutraUsed : No FACH measurement occasion
Line 2628:  rrc_ReselMeasurement_GetIsActive_Eutra (%d)
Line 2630:  rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2646: [APBCR] UpdatePrioBaseMeasurementRules_UtraUsed: No FACH measurement occasion
Line 2655:  [APBCR] rrc_ReselMeasurement_GetIsActive_Utra (%d)
Line 2657:  [APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2681:  NULL MeasIdPtr 
Line 2690: [APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2692: [APBCR] SrxlevS (%i)  SqualS (%i)
Line 2696: [APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2697: [APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
Line 2702:  [APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
Line 2709: [APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2710: [APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2715: [APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
Line 2727: [APBCR] found InterF CSG Cell during ASF -> newPrioBaseMeasurementRule (%d) Changed to MeasureAll
Line 2736:  [APBCR_LOG]RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2741:  [APBCR_LOG]newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2743:  [APBCR_LOG]Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2755: InterFReselMeasIDPtr: NULL 
Line 2760: CurrentRule = %d, NewMeasRule = %d
Line 2780: GenMsg is NULL
Line 2793: [APBCR] UpdatePrioBaseMeasurementRules_GsmUsed: No FACH measurement occasion
Line 2801:  [APBCR] rrc_ReselMeasurement_GetIsActive_Gsm (%d)
Line 2803:  [APBCR] rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved (%d)
Line 2821: UpdateMeasurementRules_PrioBaseUsed_Gsm
Line 2826: InterRatReselMeasIDPtr: NULL 
Line 2835: [APBCR] S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2837: [APBCR] SrxlevS (%i)  SqualS (%i)
Line 2841: [APBCR] SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2842: [APBCR] SqualS (%i) > S_PrioritySearch2 (%i)
Line 2847:  [APBCR] newPrioBaseMeasurementRule (%d) :: Measure Inter-frequencies with greater priority than SC
Line 2854: [APBCR] SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2855: [APBCR] SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2860: [APBCR] newPrioBaseMeasurementRule (%d) :: Measure ALL of Inter-frequencies
Line 2868: [APBCR] RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2873: [APBCR] newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2875: [APBCR] Measurement Rule is changed so we will now Check for the GSM Frequencies to be measured
Line 2888: InterRatMeasIDPtr: NULL 
Line 2896: GSM Measurement rule is MeasureNone - GSM disabled as MULTI_MODE_OPERATION Zero 
Line 2900: CurrentRule = %d, NewMeasRule = %d
Line 2920: GenMsg is NULL
Line 2958:  NULL MeasIdPtr 
Line 2983: SrxlevS (%i) <= SSearchHcs (%i)
Line 2987: SqualS  (%i) <= Sintersearch (%i)
Line 2991: ->IntraFreq Measurement rule is MeasureAll
Line 2995: ->InterFreq Measurement rule is MeasureAll
Line 3036: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
Line 3044: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanSC to HcsGreaterThanOrEqualToSC
Line 3064: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 3073: SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 3080: SqualS  (%i) > Sintrasearch (%i)
Line 3083: ->IntraFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3087: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3121: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
Line 3129: > [HCS] Apply IntraSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to HcsGreaterThanSC
Line 3139: > [HCS] Apply InterSearchHyst (%d dB):: OverwriteHcsGreaterThanOrEqualToSC to All
Line 3147: > [HCS] Apply InterSearchHyst (%d dB):: Overwrite HcsGreaterThanOrEqualToSC to All
Line 3156: SqualS  (%i) <= Sintrasearch (%i)
Line 3159: ->IntraFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3163: ->InterFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3180: Sintrasearch not sent
Line 3183: ->IntraFreq Measurement rule is Measure All
Line 3187: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 3208: SsearchHCS not sent
Line 3212: Sintersearch not sent
Line 3216: ->IntraFreq Measurement rule is Measure All
Line 3220: ->InterFreq Measurement rule is Measure All
Line 3231: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3232: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 3238: RrcCnxReq in progress (newInterRule -> none)
Line 3247: Priority Based Cell Reselection in progress (newInterRule -> none)
Line 3286:  NULL MeasIdPtr 
Line 3314: SsearchHCS not sent
Line 3318: SrxlevS (%i) <= SSearchHcs (%i)
Line 3323: Sintersearch not sent
Line 3327: SqualS  (%i) <= Sintersearch (%i)
Line 3332: ->IntraFreq Measurement rule is MeasureAll
Line 3336: ->InterFreq Measurement rule is MeasureAll
Line 3357: SqualS (%i) > SIntrasearch (%i): found IntraF CSG Cell during ASF -> IntraFreq MeasureRule Changed to MeasureAll
Line 3366: SqualS (%i) > SIntrasearch (%i): found InterF CSG Cell during ASF -> InterFreq MeasureRule Changed to MeasureAll
Line 3373: SrxlevS (%i) > SSearchHcs (%i)
Line 3374: SqualS  (%i) > Sintersearch (%i)
Line 3378: ->IntraFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3382: ->InterFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3395: [InterFreq Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3396: [InterFreq Measurement] newRule(%d) <-> currentRule(%d) 
Line 3403: RrcCnxReq in progress (newInterRule -> none)
Line 3412: Priority Based Cell Reselection in progress (newInterRule -> none)
Line 3444: InterRatMeasIDPtr: NULL 
Line 3463: SrxlevS (%i) <= SHcsGsm (%i)
Line 3467: SqualS  (%i) <= SSearchGsm (%i)
Line 3470: ->IntrerRat Measurement rule is MeasureAll
Line 3483: SqualS (%i) > SLimitSearchGsm (%i)
Line 3484: ->InterRat Measurement rule is MeasureNone
Line 3495: SqualS (%i) <= SLimitSearchGsm (%i)
Line 3496: ->InterRat Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 3507: SHcsGsm not sent
Line 3508: ->InterRat Measurement rule is MeasureAll
Line 3518: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3519: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 3526: RrcCnxReq in progress (newIratRule -> none)
Line 3535: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3538: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3544: [InterRAT Measurement] new rule(%d) will be used
Line 3547: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3548: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3557: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3603:  NULL MeasIdPtr 
Line 3612:  S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 3614: SrxlevS (%i)  SqualS (%i)
Line 3638: measInd->inter_RAT_len : %d
Line 3644: GSM measure enabled
Line 3655: FGI 3 is not supported
Line 3661: UpdateMeasurementRules_PrioBaseUsed_EutraIRAT called in CellFach
Line 3667: GSM measure not available
Line 3674: cellfachMeasIndExist is false
Line 3682: Sib19Id->FachAbsPriorityMeasInd is all_layers and FGI4 supported
Line 3690: Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS satisfied
Line 3696: Sib19Id->FachAbsPriorityMeasInd is high_priority_layers and Srxlev and SqualS not satisfied.. No measure Eutra
Line 3703: Sib19Id->FachAbsPriorityMeasInd is invalid value
Line 3718: [U2L_CSG_ASF] Target CSG EutraFreq need to be measured in this source cell : newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 3727: [QRB] MeasurePrioAll (CurrentRule %d vs NewRule %d)
Line 3731: SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 3732: SqualS (%i) > S_PrioritySearch2 (%i)
Line 3739: newEutraIratRule (%d)  MeasurePrioGreaterThanSC Start Eutra Measurements for Greater than SC
Line 3746: SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 3747: SqualS (%i) <= S_PrioritySearch2 (%i)
Line 3754: newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 3766: Eutra disabled -> Measurement rule is forced to be MeasurePrioNone
Line 3773: RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 3778: newEutraIratRule = %d != currentEutraIratRule = %d
Line 3780: Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 3804:  NULL MeasIdPtr 
Line 3823: SHcsGsm not sent
Line 3827: SrxlevS (%i) <= SHcsGsm (%i)
Line 3832: IsSSearchGsmValid not sent
Line 3836: SqualS  (%i) <= SSearchGsm (%i)
Line 3839: ->InterRat Measurement rule is MeasureAll
Line 3849: SrxlevS (%i) > SHcsGsm (%i)
Line 3850: SqualS  (%i) > SSearchGsm (%i)
Line 3852: ->InterRat Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3862: [InterRAT Measurement] new rule will be overriden by no FACH measurement occasion 
Line 3863: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 3870: RrcCnxReq in progress (newIratRule -> none)
Line 3879: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3882: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3888: [InterRAT Measurement] new rule(%d) will be used
Line 3891: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3892: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3901: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3938: [rrc_ReselMeasController_GetCurrentIratRealRule] Serving Cell not Suitable so Measurent Real Rule Is Measure ALL
Line 3995: SqualS  (%i) > SSearchGsm (%i)
Line 3998: SrxlevS (%i) > SHcsGsm (%i)
Line 4002: SHcsGsm not received
Line 4005: -> current InterRat Measurement real rule is MeasureNone
Line 4013: SqualS  (%i) <= SSearchGsm (%i)
Line 4014: ->current InterRat Measurement real rule is MeasureAll
Line 4021: SrxlevS (%i) <= SHcsGsm (%i)
Line 4022: ->current InterRat Measurement real rule is MeasureAll
Line 4030: SSearchGsm not received
Line 4031: ->InterRat Measurement rule is MeasureAll
Line 4059: SrxlevS (%i) <= SHcsGsm (%i)
Line 4063: SqualS  (%i) <= SSearchGsm (%i)
Line 4066: ->current InterRat Measurement real rule is MeasureAll
Line 4076: SqualS (%i) > SLimitSearchGsm (%i)
Line 4077: ->current InterRat Measurement real rule is MeasureNone
Line 4086: SqualS (%i) <= SLimitSearchGsm (%i)
Line 4087: ->current InterRat Measurement real rule is MeasureHcsGreaterThanOrEqualToSC
Line 4095: SHcsGsm not sent
Line 4096: ->current InterRat Measurement real rule is MeasureAll
Line 4124: SHcsGsm not sent
Line 4128: SrxlevS (%i) <= SHcsGsm (%i)
Line 4133: IsSSearchGsmValid not sent
Line 4137: SqualS  (%i) <= SSearchGsm (%i)
Line 4140: ->current InterRat Measurement real rule is MeasureAll
Line 4147: SrxlevS (%i) > SHcsGsm (%i)
Line 4148: SqualS  (%i) > SSearchGsm (%i)
Line 4150: ->current InterRat Measurement real rule is MeasureHcsLessThanOrEqualToSC
Line 4191: AddMRUEutraFreqSelReselInfo
