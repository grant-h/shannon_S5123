Line 218: ERROR creating TPendingOos Timer
Line 224: ERROR creating TReselHyst Timer
Line 282: ERROR deleting TPendingOos timer
Line 287: ERROR deleting TReselHyst timer
Line 369: SIntrasearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 384: SIntersearch received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 399: SSearchHcs received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 445: SSearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 451: SSearchRATGsm received value: (%i) consider this value to be absent
Line 460: SLimit,SearchRATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 469: SHCS,RATGsm received value: (%i) stored value (%i) (Minimum valid value is 0)
Line 544: ERROR Illegal State
Line 573: ERROR starting TReselHyst timer
Line 577: TReselHyst started (TmId=%d)
Line 640: ERROR stopping TPendingOos Timer
Line 656: ERROR Illegal State
Line 681: ERROR Illegal State
Line 720: [CsCallInProgress] Set pendingState to CellFach temporarily
Line 730: ERROR starting TPendingOos timer
Line 741: ERROR starting TPendingOos timer
Line 751: ERROR Illegal State
Line 817: RecvEutraMeasResult is ignored - Eutra disabled as IsEutraDisabled TRUE 
Line 914: ERROR GenMsg is NULL
Line 935: ERROR GenMsg is NULL
Line 956: ERROR GenMsg is NULL
Line 1050: Overriding cell CPICH code to (%d) - No more measurements for reselection 
Line 1097: Quick RB : ignore TReselHyst
Line 1117: Quick RB : ignore TReselHyst
Line 1165: Not starting neighbour cell measurements yet - waiting for T Reselection Hysteresis timer (1 second) to expire
Line 1265: EutraMeasInterval Updated (%d)
Line 1273: EutraMeasInterval Not Updated (%d)
Line 1293: GenMsg is NULL
Line 1317: ->InterRat Measurement rule is MeasureNone - GSM disabled
Line 1348: ReselMeasInstPtr: NULL
Line 1353: Eutra Measurement rule is MeasureNone - Eutra disabled as MULTI_MODE_OPERATION Zero 
Line 1360: Eutra Measurement rule is MeasureNone - Eutra disabled as IsEutraDisabled TRUE 
Line 1366: CurrentRule = %d NewMeasRule = %d
Line 1385: GenMsg is NULL
Line 1459: Serving Cell is not suitable
Line 1460: ->IntraF Measurement rule is MeasureAll
Line 1461: ->InterF Measurement rule is MeasureAll
Line 1462: ->InterRat Measurement rule is MeasureAll
Line 1475: ServingCell Not Suitable & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1496: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1500: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 1515: [InterF Measurement] newRule(%d) <-> currentRule(%d) 
Line 1524: [InterRAT Measurement] newRule(%d) <-> currentRule(%d) 
Line 1620: Currently Return the Fach Meas Ocassion As TRUE (current value : %d) as This will done with TDM
Line 1631: Clear ImmediateInterFReselMeas
Line 1670: InterFReselMeas Not Active & ImmediateInterFReselMeas Required -> Clear ImmediateInterFReselMeas
Line 1716: ->IntraFreq Measurement rule is MeasureAll(PeriodicInterFReselMeas)
Line 1738: SrxlevS (%i) <= SIntrasearch (%i)
Line 1739: ->IntraFreq Measurement rule is MeasureAll
Line 1750: SIntrasearch not received
Line 1751: ->IntraFreq Measurement rule is MeasureAll
Line 1803: Start Periodic Inter-Freq Resel Meas (Count %d)
Line 1805: ->InterFreq Measurement rule is MeasureAll
Line 1814: Periodic Inter-Freq Resel Meas In Progress (Count %d)
Line 1816: ->InterFreq Measurement rule is MeasureAll
Line 1822: ->InterFreq Measurement rule is MeasureNone
Line 1827: SqualS  (%i) > SIntersearchTdd (%i)
Line 1830: SrxlevS (%i) > SSearchHcsTdd (%i)
Line 1834: SSearchHcs not received
Line 1850: SrxlevS  (%i) <= SIntersearch (%i)
Line 1851: ->InterFreq Measurement rule is MeasureAll
Line 1866: SrxlevS (%i) <= SSearchHcsTdd (%i)
Line 1867: ->InterFreq Measurement rule is MeasureAll
Line 1883: SIntersearch not received
Line 1884: ->InterFreq Measurement rule is MeasureAll
Line 1909: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 1916: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 1943: ->IntraFreq Measurement rule is MeasureAll(PeriodicInterFReselMeas)
Line 1992: SrxlevS  (%i) > SSearchGsm (%i)
Line 1995: SrxlevS (%i) > SHcsGsm (%i)
Line 1999: SHcsGsm not received
Line 2002: ->InterRat Measurement rule is MeasureNone
Line 2012: SrxlevS  (%i) <= SSearchGsm (%i)
Line 2013: ->InterRat Measurement rule is MeasureAll
Line 2023: SrxlevS (%i) <= SHcsGsm (%i)
Line 2024: ->InterRat Measurement rule is MeasureAll
Line 2033: SSearchGsm not received
Line 2034: ->InterRat Measurement rule is MeasureAll
Line 2057: RrcCnxReq in progress (newRule -> none, newPrioBaseRule -> PrioNone)
Line 2061: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2072: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2075: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2081: [InterRAT Measurement] new rule(%d) will be used
Line 2084: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2085: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2094: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2188:  rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->EutraReselMeasInstPtr->common ) (%d)
Line 2190:  rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved(ReselMeasController_p->IntraFReselMeasInstPtr) (%d)
Line 2196:  rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->EutraReselMeasInstPtr->common ) (%d)
Line 2224:  [APBCR_LOG]rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->InterFReselMeasInstPtr->common ) (%d)
Line 2226:  [APBCR_LOG]rrc_IntraFReselMeas_GetOnlyServingCellMeasRecved(ReselMeasController_p->IntraFReselMeasInstPtr) (%d)
Line 2232:  [APBCR_LOG]rrc_ReselMeasurement_GetIsActive( &ReselMeasController_p->InterFReselMeasInstPtr->common ) (%d)
Line 2258: ReselMeasInstPtr: NULL
Line 2266:  [APBCR_LOG]S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2268:  [APBCR_LOG]SrxlevS (%i)  SqualS (%i)
Line 2272:  [APBCR_LOG]SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2273:  [APBCR_LOG]SqualS (%i) > S_PrioritySearch2 (%i)
Line 2278:  [APBCR_LOG]newPrioBaseMeasurementRule (%d)  MeasurePrioGreaterThanSC Start Inter-F Measurements for Greater than SC
Line 2285:  [APBCR_LOG]SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2286:  [APBCR_LOG]SqualS (%i) <= S_PrioritySearch2 (%i)
Line 2291:  [APBCR_LOG]newPrioBaseMeasurementRule (%d) MeasurePrioAllStart Inter-F Measurements for For ALL
Line 2301:  [APBCR_LOG]RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2305: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2311:  [APBCR_LOG]newPrioBaseMeasurementRule = %d != currentPrioBaseMeasurementRule = %d
Line 2313:  [APBCR_LOG]Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 2327: ReselMeasInstPtr: NULL
Line 2332: CurrentRule = %d NewMeasRule = %d
Line 2351: GenMsg is NULL
Line 2385: ReselMeasInstPtr: NULL
Line 2409: SrxlevS (%i) <= SSearchHcsTdd (%i)
Line 2413: ->IntraFreq Measurement rule is MeasureAll
Line 2417: ->InterFreq Measurement rule is MeasureAll
Line 2439: SrxlevS  (%i) > SintrasearchTdd (%i)
Line 2442: ->IntraFreq Measurement rule is MeasureHcsGreaterThanSC
Line 2446: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 2460: SqualS  (%i) <= SintrasearchTdd (%i)
Line 2463: ->IntraFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 2467: ->InterFreq Measurement rule is MeasureHcsGreaterThanOrEqualToSC
Line 2484: Sintrasearch not sent
Line 2487: ->IntraFreq Measurement rule is Measure All
Line 2491: ->InterFreq Measurement rule is MeasureHcsGreaterThanSC
Line 2512: SsearchHCS not sent
Line 2516: Sintersearch not sent
Line 2520: ->IntraFreq Measurement rule is Measure All
Line 2524: ->InterFreq Measurement rule is Measure All
Line 2547: RrcCnxReq in progress (newInterRule -> none)
Line 2551: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2593: ReselMeasInstPtr: NULL
Line 2619: SsearchHCS not sent
Line 2623: SrxlevS (%i) <= SSearchHcs (%i)
Line 2628: Sintersearch not sent
Line 2633: ->IntraFreq Measurement rule is MeasureAll
Line 2638: ->InterFreq Measurement rule is MeasureAll
Line 2653: SrxlevS (%i) > SSearchHcsTdd (%i)
Line 2657: ->IntraFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 2661: ->InterFreq Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 2686: RrcCnxReq in progress (newInterRule -> none)
Line 2690: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2726: ReselMeasInstPtr: NULL
Line 2745: SrxlevS (%i) <= SHcsGsm (%i)
Line 2749: SqualS  (%i) <= SSearchGsm (%i)
Line 2752: ->IntrerRat Measurement rule is MeasureAll
Line 2767: SrxlevS (%i) > SHcsGsm (%i)
Line 2771: SqualS (%i) > SLimitSearchGsm (%i)
Line 2774: ->InterRat Measurement rule is MeasureNone
Line 2798: SHcsGsm not sent
Line 2799: ->InterRat Measurement rule is MeasureAll
Line 2821: RrcCnxReq in progress (newIratRule -> none)
Line 2825: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2836: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 2839: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 2845: [InterRAT Measurement] new rule(%d) will be used
Line 2848: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 2849: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2858: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 2906: ReselMeasInstPtr: NULL
Line 2914:  S_PrioritySearch1 (%d) S_PrioritySearch2 (%d)
Line 2923: [QRB] MeasurePrioAll (CurrentRule %d vs NewRule %d)
Line 2927: SrxlevS (%i) > S_PrioritySearch1 (%i)
Line 2934: newEutraIratRule (%d)  MeasurePrioGreaterThanSC Start Eutra Measurements for Greater than SC
Line 2939: SrxlevS (%i) <= S_PrioritySearch1 (%i)
Line 2946: newEutraIratRule (%d) MeasurePrioAllStart Eutra Measurements for For ALL
Line 2956: Eutra disabled -> Measurement rule is forced to be MeasurePrioNone
Line 2965: RrcCnxReq in progress (newPrioBaseRule -> PrioNone)
Line 2969: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 2975: newEutraIratRule = %d != currentEutraIratRule = %d
Line 2977: Measurement Rule is changed so we will now Check for the Eutra Frequencies to be measured
Line 3007: ReselMeasInstPtr: NULL
Line 3027: SHcsGsm not sent
Line 3031: SrxlevS (%i) <= SHcsGsm (%i)
Line 3036: IsSSearchGsmValid not sent
Line 3040: SqualS  (%i) <= SSearchGsm (%i)
Line 3043: ->InterRat Measurement rule is MeasureAll
Line 3053: SrxlevS (%i) > SHcsGsm (%i)
Line 3054: SqualS  (%i) > SSearchGsm (%i)
Line 3056: ->InterRat Measurement rule is MeasureHcsLessThanOrEqualToSC
Line 3078: RrcCnxReq in progress (newIratRule -> none)
Line 3082: RrcCnxReq in progress but the Datang Plmn id is TRUE
Line 3093: [InterRAT Measurement] new rule(%d) will be overriden by ConfigIratMeasHyst 
Line 3096: [InterRAT Measurement] ConfigIratMeasHyst(%d) > ConfigIratMeasHystCounter(%d)
Line 3102: [InterRAT Measurement] new rule(%d) will be used
Line 3105: [InterRAT Measurement] ConfigIratMeasHyst(%d) =< ConfigIratMeasHystCounter(%d)
Line 3106: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3115: [InterRAT Measurement] reset ConfigIratMeasHystCounter
Line 3158: [rrc_TddReselMeasController_GetCurrentIratRealRule] Serving Cell not Suitable so Measurent Real Rule Is Measure ALL
Line 3198: SrxlevSTdd (%i) > SHcsGsm (%i)
Line 3202: SHcsGsm not received
Line 3205: -> current InterRat Measurement real rule is MeasureNone
Line 3214: SrxlevSTdd  (%i) <= SSearchGsm (%i)
Line 3215: ->current InterRat Measurement real rule is MeasureAll
Line 3222: SrxlevSTdd (%i) <= SHcsGsm (%i)
Line 3223: ->current InterRat Measurement real rule is MeasureAll
Line 3231: SSearchGsm not received
Line 3232: ->InterRat Measurement rule is MeasureAll
Line 3265: SrxlevSTdd (%i) <= SHcsGsm (%i)
Line 3268: ->current InterRat Measurement real rule is MeasureAll
Line 3278: SrxlevSTdd (%i) > SLimitSearchGsm (%i)
Line 3279: ->current InterRat Measurement real rule is MeasureNone
Line 3288: SrxlevSTdd (%i) <= SLimitSearchGsm (%i)
Line 3289: ->current InterRat Measurement real rule is MeasureHcsGreaterThanOrEqualToSC
Line 3297: SHcsGsm not sent
Line 3298: ->current InterRat Measurement real rule is MeasureAll
Line 3332: SHcsGsm not sent
Line 3336: SrxlevSTdd (%i) <= SHcsGsm (%i)
Line 3339: ->current InterRat Measurement real rule is MeasureAll
Line 3346: SrxlevSTdd (%i) > SHcsGsm (%i)
Line 3348: ->current InterRat Measurement real rule is MeasureHcsLessThanOrEqualToSC
Line 3391: AddMRUEutraFreqSelReselInfo
