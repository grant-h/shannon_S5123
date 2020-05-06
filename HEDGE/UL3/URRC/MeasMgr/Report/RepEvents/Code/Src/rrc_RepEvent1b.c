Line 142: [rrc_RepEvent1b_init] ERROR - unable to create periodical Timer
Line 170: [rrc_RepEvent1b_free] ERROR - unable to delete periodical Timer
Line 222: [rrc_RepEvent1b::SendMeasReport] ERROR MeasInstId = NULL
Line 237: Alloc Failed!!
Line 258: [rrc_RepEvent1b::SendMeasReport] ERROR - ReportTransferMode not valid [%i].
Line 284: Ignore CIO (PSC %d, CIO %d)
Line 320: [rrc_RepEvent1b::SendMeasReport] Set EventResult for Cpich %i
Line 346: Ignore CIO (PSC %d, CIO %d)
Line 373: [rrc_RepEvent1b::SendMeasReport] ERROR MeasQuantity = NULL
Line 385: SendMeasReport: NumCellsToAdd(%d) out of range
Line 411: [rrc_RepEvent1b::SendMeasReport] [ET Periodic] Set EventResult for Cpich %i
Line 430: SendMeasReport Event1b: AddRepInstId=NULL
Line 465: Block MR during RBS/RBR/TCR/PCR etc
Line 469: In Out-of-sync, Ignore E1B Periodic Report
Line 474: [rrc_RepEvent1b_CallbackPeriodicTimerExpired] ERROR - unable to start Timer
Line 478: PeriodicalReportTimer started (TmId=%d)
Line 515: ActiveSetCellsCount <= 1. Hold Periodic Report
Line 546: [rrc_RepEvent1b_CallbackPeriodicTimerExpired] ERROR - unable to start Timer
Line 550: PeriodicalReportTimer started (TmId=%d)
Line 574: Not able to stop Periodical Timer
Line 650: [GetTriggeringConditionedMeasResults] #MsetCells(%i)>32, bound to %i
Line 678: [GetTriggeringConditionedMeasResults] Copy MsetCells which were in RR: PSC(%d)
Line 701: [GetTriggeringConditionedMeasResults] #A+MsetCells(%i)>32, bound to %i
Line 707: [rrc_RepEvent1b::GetTriggeringConditionedMeasResults] ERROR - TriggeringCondition1 out of range [%i].
Line 767: [rrc_RepEvent1b::EvaluateReportingDeactivationsThreshold] Warning - Remove the best powered PSC%d from MR(e1b) to prevent #AsetCell:0
Line 777: [rrc_RepEvent1b::EvaluateReportingDeactivationsThreshold] ERROR - unable to start Timer
Line 815: [rrc_RepEvent1b_StopReport] [NON FATAL ERROR] Not able to stop Periodical Timer
Line 833: RepEvent1b_p->common.TriggerVarInstId is NULL in rrc_RepEvent1b_StopReport
Line 838: [rrc_RepEvent1b_StopReport] INFO
Line 855: [rrc_RepEvent1b_SuspendReport] INFO
Line 872: [E1B TTTExpired] INFO
Line 883: Re-EvaluateE1B(IsStillGood %d)
Line 893: [E1B] blocked due to HsdschServingCell(%d)
Line 989: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1017: [rrc_RepEvent1b_TriggerAllOtherQty] localThreshold(%d), E1A DeactThreshold(%d)
Line 1039: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR PhyMeasInstId = NULL
Line 1048: [rrc_RepEvent1b_TriggerAllOtherQty] MID(%d) is InterFreq Measurement. NumOfFreq(%d)
Line 1120: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1141: [rrc_RepEvent1b_TriggerAllOtherQty] Act+Mon(%d) has exceeded the Maximum(32)
Line 1150: [rrc_RepEvent1b_TriggerAllOtherQty] DetectedSet(%d) has exceeded the Maximum(%d)
Line 1288: rrc_RepEvent1b_TriggerAllOtherQty-MeasResults is NULL
Line 1323: [rrc_RepEvent1b_TriggerAllOtherQty] ERROR Not able to get InterFRepInstId 
Line 1369: [rrc_RepEvent1b_TriggerAllOtherQty] Aset is full. Bound RHS_trig*100(%i) and RHS_leav*100(%i)
Line 1407: Ignore CIO (PSC %d, CIO %d)
Line 1415: [SPARK] PSC %d: CIO %d (NumAset %d, localThreshold %d)
Line 1419: Ignore CIO (PSC %d, CIO %d)
Line 1435: [rrc_RepEvent1b_TriggerAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 1446: [rrc_RepEvent1b_TriggerAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) RSCP(%d) CIO(%d)
Line 1455: [rrc_RepEvent1b_TriggerAllOtherQty][VAS] Eq2 satisfied - Triggering. MID %i; Cpich %i; Uarfcn %i; lhsdB*1000(%i) <= rhsdB*1000(%i)
Line 1461: [rrc_RepEvent1b_TriggerAllOtherQty] Eq2 satisfied; PSC %i; lhsdB(%i) <= rhsdB(%i)
Line 1466: [rrc_RepEvent1b_TriggerAllOtherQty] AsetInfo(#:1, PSC:%d), TriggeredPSC:%d -> ignored
Line 1511: [Event 1B] ASET (NumASET %d vs Threshold %d), E1fConfigured %d
Line 1515: [Event 1B] Total EcNo ( >= -13dB)
Line 1522: [Event 1B] TTT extension (PSC %d, %d ms): NumASET %d ( < Max. ASET %d)
Line 1526: [Event 1B] ASET full, TTT Count %d
Line 1534: [Event 1B] TTT extension (PSC %d, %d ms): TTT count %d ( > 0) 
Line 1544: [Event 1B] TTT extension (PSC %d, %d ms): TTT count %d ( > 0) 
Line 1562: It's already in the CellRecentlyTriggered List
Line 1597: [rrc_RepEvent1b_TriggerAllOtherQty] Eq4 satisfied; PSC %i; lhsdB(%i) > rhsdB(%i)
Line 1604: [Event 1B] ASET (NumASET %d vs Threshold %d), E1fConfigured %d
Line 1611: [Event 1B] Total EcNo ( > -13dB)
Line 1615: [Event 1B] ASET full, TTT Count %d
Line 1642: [rrc_RepEvent1b_TriggerAllOtherQty] NumActiveRl(%d). Stop TTT
Line 1648: [rrc_RepEvent1b_TriggerAllOtherQty] NumActiveRl(%d). Update TTT List
Line 1705: rrc_RepEvent1b_TriggerAllOtherQty-TriggeringConditionedMeasResults is NULL
Line 1747: [rrc_RepEvent1b_TriggerPathloss] ERROR PhyMeasInstId = NULL
Line 1835: [rrc_RepEvent1c_TriggerPathloss] ERROR Not able to get InterFRepInstId 
Line 1855: [rrc_RepEvent1b_TriggerPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 1864: [rrc_RepEvent1b_TriggerPathloss] DetectedSet(%d) has exceeded the Maximum(%d)
Line 1957: rrc_RepEvent1b_TriggerPathloss-MeasResults is NULL
Line 1986: [rrc_RepEvent1c_TriggerPathloss] ERROR Not able to get InterFRepInstId 
Line 2029: Ignore CIO (PSC %d, CIO %d)
Line 2044: [rrc_RepEvent1b_TriggerPathloss][VAS] Eq1 satisfied ; MID %i; Cpich %i; Uarfcn %i; lhsdB*1000(%i) >= rhsPathlossdB*1000(%i)
Line 2049: [rrc_RepEvent1b_TriggerPathloss] Eq1 satisfied; PSC %i; lhsdB(%i) >= rhsPathlossdB(%i)
Line 2084: [rrc_RepEvent1b_TriggerPathloss] Eq3 satisfied; PSC %i; lhsdB(%i) < rhsdB(%i)
Line 2155: rrc_RepEvent1b_TriggerPathloss-TriggeringConditionedMeasResults is NULL
Line 2202: [CheckSentReports] [NON FATAL ERROR] Not able to stop Periodical Timer
Line 2318: INVALID NewActiveSetCpichCount 
Line 2374: [rrc_RepEvent1b_UpdateTriggeredList] ERROR TriggeringCondition1 out of range [%i].
Line 2505: ERROR TriggeringCondition1 out of range [%i]
Line 2565: [E1B]: PSC %d : Det Set -> Mon Set: TTT Retained
Line 2574: ERROR TriggeringCondition1 out of range [%i]
Line 2636: [ReEvaluateMRAllOtherQty] AccumulatingReportInd is NULL
Line 2643: Null ReEvalResults
Line 2671: [ReEvaluateMRAllOtherQty] CandiCell is already removed from ActSet (%d)
Line 2716: [ReEvaluateMRAllOtherQty] MeasResults is NULL!
Line 2734: [ReEvaluateMRPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 2741: [ReEvaluateMRPathloss] Dset(%d) has exceeded the Max(%d)
Line 2864: Ignore CIO (PSC %d, CIO %d)
Line 2878: [ReEvaluateMRAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 2890: [ReEvaluateMRAllOtherQty] Evaluating E1B for MID(%d) PSC(%d) Ec/N0(%d) CIO(%d)
Line 2896: [ReEvaluateMRAllOtherQty] GoodToSend (PSC %d)
Line 2901: [ReEvaluateMRAllOtherQty] No GoodToSend (PSC %d)
Line 2907: >>> WARNING: Na is 0
Line 2941: [ReEvaluateMRPathloss] AccumulatingReportInd is NULL
Line 2948: Null ReEvalResults
Line 2976: [ReEvaluateMRPathloss] CandiCell is already removed ActSet (%d)
Line 2989: [ReEvaluateMRAllOtherQty] MeasResults is NULL!
Line 3007: [ReEvaluateMRPathloss] Act+Mon(%d) has exceeded the Maximum(32)
Line 3014: [ReEvaluateMRPathloss] Dset(%d) has exceeded the Max(%d)
Line 3127: Ignore CIO (PSC %d, CIO %d)
Line 3140: [ReEvaluateMRPathloss] GoodToSend (PSC %d)
Line 3145: [ReEvaluateMRPathloss] No GoodToSend (PSC %d)
Line 3151: >>> WARNING: Na is 0
Line 3169: [ReEvaluateMR] ERROR MeasInstId = NULL
Line 3187: [ReEvaluateMR] Wrong MeasQuantity
Line 3227: ERROR Not able to get InterFRepInstId 
Line 3269: ERROR Not able to get InterFRepInstId 
Line 3298: localThreshold(%d), E1A DeactThreshold(%d)
