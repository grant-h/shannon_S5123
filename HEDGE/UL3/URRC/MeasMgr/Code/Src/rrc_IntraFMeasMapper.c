Line 215: IntraFMapper FREED
Line 267: TerminateMeasurement: MeasInstId is NULL
Line 278: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) will be terminated
Line 279: [rrc_IntraFMeasMapper_TerminateMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 285: [rrc_IntraFMeasMapper_TerminateMeasurement]:XInterFMeas will be terminated
Line 292: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) is not configured in XInterFMidBitMap(0x%x)
Line 300: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) wasn't configured
Line 323: [rrc_IntraFMeasMapper_TerminateMeasurement]:There is no MID to be terminated
Line 351: [rrc_IntraFMeasMapper_terminateMeasurement]:TDD MID %d released at UPHY
Line 364: [rrc_IntraFMeasMapper_terminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 369: [rrc_IntraFMeasMapper_terminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 393: [rrc_IntraFMeasMapper_TerminateMeasurement]:MID %d released at UPHY
Line 407: [rrc_IntraFMeasMapper_TerminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 412: [rrc_IntraFMeasMapper_TerminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 435: [rrc_IntraFMeasMapper_TerminateMeasurement]:First Configured MID Change [%d] -> [%d]
Line 455: [rrc_IntraFMeasMapper_TerminateMeasurement]: No Cells to Add
Line 481: Internal Measurement is still running
Line 487: IntraFMeasMapper was not freed: configuredMid(0x%X), InterFE2DFMidBitmap(0x%X), InterRE3ABitMap(0x%X), EutraE3ABitMap(0x%X)
Line 494: There is more MIDs(0x%X) left
Line 559: rrc_IntraFMeasMapper_DoMeasurement: MID 0 is running, so it will be released
Line 565: rrc_IntraFMeasMapper_DoMeasurement: MID is 0, so this operation will be skipped
Line 583: [rrc_IntraFMeasMapper_DoMeasurement]:This MID(%d) will be modified
Line 589: [rrc_IntraFMeasMapper_DoTddMeasurement]:XInterFMeas will be modified
Line 594: [rrc_IntraFMeasMapper_DoTddMeasurement]:This MID(%d) is not configured in XInterFMidBitMap(0x%x)
Line 604: [rrc_IntraFMeasMapper_DoMeasurement]:This MID(%d) will be configured
Line 605: [rrc_IntraFMeasMapper_DoMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 617: [rrc_IntraFMeasMapper_DoMeasurement]:Filtering Starts
Line 626: Before Filtering: ACTIVE SET TO REMOVE[%d] = PSC %d
Line 645: FILTERED ACTIVE SET TO REMOVE[%d] = PSC %d
Line 654: Before Filtering: MONITORED SET TO REMOVE[%d] = PSC %d
Line 672: FILTERED MONITORED SET TO REMOVE[%d] = PSC %d
Line 682: Before Filtering: DETECTED SET TO REMOVE[%d] = PSC %d
Line 766: rrc_IntraFMeasMapper_DoMeasurement: RepInstId is NULL
Line 780: FILTERED DETECTED SET TO REMOVE[%d] = PSC %d
Line 788: Before Filtering: ACTIVE SET TO ADD[%d] = PSC[FDD] %d CellParamId[TDD] %d
Line 806: FILTERED ACTIVE SET TO ADD[%d] = PSC[FDD] %d 
Line 814: Before Filtering: MONITORED SET TO ADD[%d] = PSC[FDD] %d
Line 832: FILTERED MONITORED SET TO ADD[%d] = PSC[FDD] %d 
Line 837: Before Filtering: DETECTED SET TO ADD[%d] = PSC %d
Line 862: rrc_IntraFMeasMapper_DoMeasurement: Alloc failed!!
Line 875: rrc_IntraFMeasMapper_DoMeasurement[Cleared MID %d detected set]: IsDetectedSetQuantities(%d), theDetectedSet[NumCells(%d)]
Line 881: FILTERED DETECTED SET TO ADD[%d] = PSC %d
Line 883: [rrc_IntraFMeasMapper_DoMeasurement]:Filtering Ends
Line 912: [rrc_IntraFMeasMapper_DoMeasurement]: No compressed mode configured
Line 915: [rrc_IntraFMeasMapper_DoMeasurement]: No Cells to Modify
Line 933: [rrc_IntraFMeasMapper_DoMeasurement]: No Cells to Configure
Line 970: [rrc_IntraFMeasMapper_DoMeasurementModify] INFO.
Line 974: rrc_IntraFMeasMapper_DoTddMeasurementModify:ILM Alloc Failed!
Line 981: [rrc_IntraFMeasMapper_DoTddMeasurementModify] NFreq Configured
Line 993: RRC is trying to config IntraFMeas. Release MID 0 if there is any one
Line 1020: [rrc_IntraFMeasMapper_DoMeasurementModifyCMAlone] INFO.
Line 1025: rrc_CUPHY_IntraFreq_MeasMod_REQ:ILM Alloc Failed!
Line 1130: rrc_IntraFMeasMapper_DoModifyMeasurementForIntraFHHO: Accumulator =NULL
Line 1197: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1224: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate: CellInfoPtr=NULL
Line 1311: [Cpich %d] Detected Set -> Active Set(CellInfo borrowed from ActSet)
Line 1336: No of cells from Detected -> Active exceeds MaxDetected Cells
Line 1341: ActiveSetCellInfo was NULL returned
Line 1347: [Cpich %d] Detected Set -> Active Set but No available Cell Info in Active Set
Line 1355: [Cpich %d] Detected Set -> Active Set (CellInfo borrowed from MonSet)
Line 1379: No of cells from Detected -> Active exceeds MaxDetected Cells
Line 1400: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1443: rrc_IntraFMeasMapper_DoModifyMeasforActiveSetUpdate : Inst Id is NULL !!
Line 1466: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate: Alloc failed!!
Line 1478: rrc_IntraFMeasMapper_DoModifyMeasurementForActiveSetUpdate[Cleared MID %d Detected Set]: IsDetectedSetQuantities(%d), theDetectedSet[NumCells(%d)]
Line 1531: [rrc_IntraFMeasMapper_DoMeasurementConfig]:This MID(%d) will be FIRST configured
Line 1535: [rrc_IntraFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 1541: [rrc_IntraFMeasMapper_DoMeasurementConfig]:This MID(%d) Active Set Count is Zero So need to debug
Line 1546: [rrc_IntraFMeasMapper_DoMeasurementConfig]: FIRST configured MID(%d), CURRENT Configuring MID(%d)
Line 1552:  RepInstId == NULL  
Line 1560: [TIntraFMeasMapper] NFreq configured: IntraFMeas -> InterFMeas
Line 1573: RRC is trying to config IntraFMeas. Release MID 0 if there is any one
Line 1612: rrc_CUPHY_IntraFreq_MeasMod_REQ:ILM Alloc Failed!
Line 1672: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 1768: MID(%d) is not existed, so removed from DB
Line 1773: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1779: [rrc_IntraFMeasMapper_NotifyReport]: AS Cell %d :  Included in MID %d
Line 1789: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1839: MID(%d) is not existed, so removed from DB
Line 1844: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1850: [rrc_IntraFMeasMapper_NotifyReport]:	MS Cell %d :  Included in MID %d
Line 1860: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1915: [rrc_IntraFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 1920: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 1926: [rrc_IntraFMeasMapper_NotifyReport]:	DS Cell %d :  Included in MID %d
Line 1937: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 1961: Measured Dset Cells PSC =%d, Measured Dset MID=%d
Line 1986: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2003: [rrc_IntraFMeasMapper_NotifyReport] There is no configured IntraFreqMeas
Line 2009: [rrc_IntraFMeasMapper_NotifyReport] IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 2032: MID(%d) is not existed, so removed from DB
Line 2037: MID(%d) is OtherType(%d) not InterFreqMeasType, so removed from DB
Line 2043: [rrc_IntraFMeasMapper_NotifyReport] [InterF E2DF] AS Cell %d :  Included in MID %d
Line 2052: MID[%d] Created InterFMeasInd(0x%X)
Line 2095: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2134: MID(%d) is not existed, so removed from DB
Line 2139: MID(%d) is OtherType(%d) not InterRatMeasType, so removed from DB
Line 2145: [rrc_IntraFMeasMapper_NotifyReport] [GSM E3A] AS Cell %d :  Included in MID %d
Line 2153: MID[%d] Created InterRMeasInd(0x%X)
Line 2179: rrc_IntraFMeasMapper_NotifyReport: umtsActiveSetCellResultsArray = NULL
Line 2193: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2234: MID(%d) is not existed, so removed from DB
Line 2239: MID(%d) is OtherType(%d) not EutraMeasType, so removed from DB
Line 2245: [rrc_IntraFMeasMapper_NotifyReport] [EUTRA E3A] AS Cell %d :	Included in MID %d
Line 2253: MID[%d] Created EutraMeasInd(0x%X)
Line 2279: rrc_IntraFMeasMapper_NotifyReport: umtsActiveSetCellResultsArray = NULL
Line 2294: rrc_IntraFMeasMapper_NotifyReport : Inst Id is NULL !!
Line 2372: rrc_IntraFMeasMapper_getTheAFilterCoefficient: Invalid FilterCoefficient(%d)
Line 2397: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 2540: [rrc_IntraFMeasMapper_SetInterFE2DFBitMap]: MID %d set :	IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 2553: [rrc_IntraFMeasMapper_ResetInterFE2DFBitMap]: MID %d reset :	this->InterFE2DFMidBitmap = 0X%x
Line 2563: Internal Measurement is still running
Line 2580: [rrc_IntraFMeasMapper_SetInterRE3ABitMap]: MID %d set :  IntraFMeasMapper_p->InterRE3ABitMap = 0X%x
Line 2593: [rrc_IntraFMeasMapper_ResetInterRE3ABitMap]: MID %d reset :  this->InterRE3ABitMap = 0X%x
Line 2603: Internal Measurement is still running
Line 2619: [rrc_IntraFMeasMapper_SetEutraE3ABitMap]: MID %d set :  IntraFMeasMapper_p->EutraE3ABitMap = 0X%x
Line 2632: [rrc_IntraFMeasMapper_ResetEutraE3ABitMap]: MID %d reset :  this->EutraE3ABitMap = 0X%x
Line 2642: Internal Measurement is still running
Line 2725: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d already present : Appended MID %d : MidBitmap = 0X%x
Line 2731: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC  %d NOT added DBCellID = %d AddedCell Id = %d
Line 2740: [rrc_IntraFMeasMapper_AddTddActiveCell] Tdd ActiveSet is already 1
Line 2759: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d newly added :  MidBitmap = 0X%x
Line 2760: [rrc_IntraFMeasMapper_AddActiveCell]: Active PSC	%d newly added
Line 2765: [rrc_IntraFMeasMapper_AddActiveCell]: TABLE FULL : Active PSC	%d NOT added
Line 2786: [rrc_IntraFMeasMapper_RemoveActiveCell]: MID(%d) MeasInstId is NULL
Line 2818: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d still configured at UPHY:	MidBitmap = 0X%x
Line 2824: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d is being REMOVED at UPHY
Line 2842: [rrc_IntraFMeasMapper_RemoveActiveCell]: Cell Id %d -> Cell Id %d : Active PSC %d is being REPLACED at UPHY
Line 2853: [rrc_IntraFMeasMapper_RemoveActiveCell]: ERROR: DB ActivePSC %d DBCellId = %d OldCellId = %d CurrentCellId = %d
Line 2859: [rrc_IntraFMeasMapper_RemoveActiveCell]: Active PSC %d not configured in UPHY
Line 2888: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d :Monitored PSC  %d already present : Appended MID %d : MidBitmap = 0X%x
Line 2893: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d : Monitored PSC  %d No Previous MIDs Configured!!
Line 2900: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d :PSC MISMATCH !! DB PSC  %d  CIL PSC %d
Line 2912: [rrc_IntraFMeasMapper_AddMonitoredCell]: Cell ID %d : Monitored PSC  %d newly added :  MidBitmap = 0X%x
Line 2918: [rrc_IntraFMeasMapper_AddMonitoredCell]: Monitored PSC  %d NOT added as Not found in CellInfo List
Line 2938: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: MID(%d) MeasInstId is NULL
Line 2954: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored PSC %d still configured at UPHY:  MidBitmap = 0X%x
Line 2960: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored PSC %d is being REMOVED at UPHY
Line 2976: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Cell Id %d -> Cell Id %d : Monitored PSC %d is being REPLACED at UPHY
Line 2986: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Monitored PSC %d already Changed from Cell Id %d -> Cell Id %d
Line 2993: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: PSC %d not Found in OLD Saved CIL 
Line 2997: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : No Cell To Remove in DB/UPHY
Line 3002: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : PSC MISMATCH!! : Stored PSC %d Remove PSC %d
Line 3019: [rrc_IntraFMeasMapper_RemoveMonitoredCell]:Cell Id %d: Monitored PSC %d is being replaced: REMOVE from UPHY
Line 3029: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : No Cell To Remove in UPHY
Line 3034: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Cell Id %d : Cell Not Removed from UPHY : OLD PSC already removed : New PSC %d Remove PSC %d
Line 3041: [rrc_IntraFMeasMapper_RemoveMonitoredCell]: Monitored Cell Neither found in Cell Info List nor Measured for MID %d
Line 3067: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d already present : Appended MID %d : MidBitmap = 0X%x
Line 3083: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d newly added :  MidBitmap = 0X%x
Line 3084: [rrc_IntraFMeasMapper_AddDetectedCell]: Detected PSC	%d newly added
Line 3089: [rrc_IntraFMeasMapper_AddDetectedCell]: TABLE FULL : Detected PSC	%d NOT added
Line 3114: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d still configured at UPHY:	MidBitmap = 0X%x
Line 3120: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d is being REMOVED at UPHY
Line 3130: [rrc_IntraFMeasMapper_RemoveDetectedCell]: Detected PSC %d not configured in UPHY
Line 3150: [rrc_IntraFMeasMapper_GetActiveCellMidBitmapByCpich]: Active PSC %d MidBitmap = 0X%x
Line 3154: [rrc_IntraFMeasMapper_GetActiveCellMidBitmapByCpich]: Active PSC %d not configured in UPHY
Line 3173: [rrc_IntraFMeasMapper_GetMontoredCellMidBitmapByCpich]: Cell Id : %d Monitored PSC %d MidBitmap = 0X%x
Line 3180: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: Cell Id %d : PSC %d Not found in DB
Line 3185: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: Cell Id %d : PSC MISMATCH!! PSC in DB: %d PSC in CIL %d
Line 3192: [rrc_IntraFMeasMapper_GetMonitoredCellMidBitmapByCpich]: PSC %d Not found in CIL
Line 3210: [rrc_IntraFMeasMapper_GetDetectedCellMidBitmapByCpich]: Detected PSC %d MidBitmap = 0X%x
Line 3214: [rrc_IntraFMeasMapper_GetDetectedCellMidBitmapByCpich]: ERROR CellIdx %d OutOfBound
Line 3628: [rrc_IntraFMeasMapper_GetAllPreviousCellInfoForMID]: MeasInstId is NULL
Line 3680: [rrc_IntraFMeasMapper_GetAllCellInfo]: PSC [%d] is not in CIL(Active)!!!
Line 3704: [rrc_IntraFMeasMapper_GetAllCellInfo]: PSC [%d] is not in CIL(Monitored)!!!
Line 3769: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: ERROR: MID %d : MeasInst/RepInst = NULL
Line 3775: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]:MID %d released at UPHY
Line 3790: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: Remove TID Failed , TID = %d MID = %d
Line 3795: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: TID = 0 for MID = %d
Line 3859: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - ActiveSetCpichCount exceeds the limit 
Line 3863: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - Active cell can not be found in CIL. Add ActiveSet to ActiveSetListToAdd list temporariliy
Line 3867: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement] - PSC %d added to ActiveSetList[%d]
Line 3894: [rrc_IntraFMeasMapper_SetupInternalIntraFMeasurement]: No Cells to Add
Line 3926: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]:Internal IntraF MID 0 released at UPHY
Line 3943: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: Remove TID Failed , TID = %d MID =0
Line 3948: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: TID = 0 for MID = 0
Line 3960: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement] ERROR - No RepInstId for MID 0
Line 3969: [rrc_IntraFMeasMapper_ReleaseInternalIntraFMeasurement]: ERROR: InternalMID MeasInst = NULL
Line 4011: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: MID 0 Configured Newly
Line 4074: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: No Active Cells to Add
Line 4131: [rrc_IntraFMeasMapper_InvalidateTid]: TID invalidate called for MID %d configured in UPHY
Line 4138: [rrc_IntraFMeasMapper_InvalidateTid]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 4155: There is No Intra accumulatingInd
Line 4175: Copy result from Intra for 2D2F MID : %d
Line 4231: TerminateMeasurement: MeasInstId is NULL
Line 4242: [rrc_IntraFMeasMapper_TerminateMeasurement]:This MID(%d) will be terminated
Line 4243: [rrc_IntraFMeasMapper_TerminateMeasurement]:IntraFMeasMapper_p->configuredMid = 0X%x
Line 4249: [rrc_IntraFMeasMapper_terminateMeasurement]:This MID(%d) wasn't configured
Line 4262: [rrc_IntraFMeasMapper_terminateMeasurement]:There is no MID to be terminated
Line 4274: [rrc_IntraFMeasMapper_terminateMeasurement]:TDD MID %d released at UPHY
Line 4287: [rrc_IntraFMeasMapper_terminateMeasurement]: Remove TID Failed , TID = %d FirstConfMID = %d
Line 4292: [rrc_IntraFMeasMapper_terminateMeasurement]: TID = 0 for FirstConfMID = %d
Line 4320: Internal Measurement is still running
Line 4326: IntraFMeasMapper was not freed: configuredMid(0x%X), InterFE2DFMidBitmap(0x%X), InterRE3ABitMap(0x%X), EutraE3ABitMap(0x%X)
Line 4333: There is more MIDs(0x%X) left
Line 4381: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4405: Num Active Cells is Wrong
Line 4446: MID(%d) is not existed, so removed from DB
Line 4451: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 4456: [rrc_IntraFMeasMapper_NotifyReport]: AS Cell %d :  Included in MID %d
Line 4462: MID[%d] Created TIntraFreqMeasInd(0x%X)
Line 4506: MID(%d) is not existed, so removed from DB
Line 4511: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 4516: [rrc_IntraFMeasMapper_NotifyReport]:	MS Cell %d :  Included in MID %d
Line 4522: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 4567: [rrc_IntraFMeasMapper_NotifyReport]: MID(%d) is not existed, so removed from DB
Line 4572: MID(%d) is OtherType(%d) not IntraFreqMeasType, so removed from DB
Line 4577: [rrc_IntraFMeasMapper_NotifyReport]:	DS Cell %d :  Included in MID %d
Line 4583: MID[%d] Created IntraFreqMeasInd(0x%X)
Line 4624: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4643: SCell meas[DCH][L3FLT] UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %i dBm, D-Rscp:%d
Line 4658: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 4668: [rrc_IntraFMeasMapper_NotifyReport] There is no TDD configured IntraFreqMeas
Line 4674: [rrc_IntraFMeasMapper_NotifyReport] IntraFMeasMapper_p->InterFE2DFMidBitmap = 0X%x
Line 4691: MID(%d) is not existed, so removed from DB
Line 4696: MID(%d) is OtherType(%d) not InterFreqMeasType, so removed from DB
Line 4701: [rrc_IntraFMeasMapper_NotifyReport] [InterF E2DF] AS Cell %d :  Included in MID %d
Line 4708: MID[%d] Created TInterFMeasInd(0x%X)
Line 4749: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4765: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 4788: Num of Active Cells = %d, RSCP = %d, CellParamId = %d
Line 4793: RSCP = %d, CellParamId = %d
Line 4807: MID(%d) is not existed, so removed from DB
Line 4812: MID(%d) is OtherType(%d) not InterRatMeasType, so removed from DB
Line 4817: [rrc_IntraFMeasMapper_NotifyReport] [GSM E3A] AS Cell(CP%d, Rscp:%d): Included in MID %d
Line 4823: MID[%d] Created InterRMeasInd(0x%X)
Line 4835: RSCP = %d, CellParamId = %d
Line 4853: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4870: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 4885:  EutraE3ABitMap : Num of Active Cells = %d, RSCP = %d, CellParamId = %d
Line 4891: RSCP = %d, CellParamId = %d
Line 4905: MID(%d) is not existed, so removed from DB
Line 4910: MID(%d) is OtherType(%d) not EutraMeasType, so removed from DB
Line 4915: [rrc_IntraFMeasMapper_NotifyReport] [EUTRA E3A] AS Cell(CP%d, Rscp:%d): Included in MID %d
Line 4921: MID[%d] Created EutraEventBasedUtranMeasInd(0x%X)
Line 4934:  RSCP = %d, CellParamId = %d
Line 4953: rrc_IntraFMeasMapper_NotifyReportTDD : Inst Id is NULL !!
Line 4970: [rrc_IntraFMeasMapper_NotifyReport] MID %d is stopped
Line 5006: rrc_InterRMeasMapper_ApplyUtranFilterCoeff : Inst Id is NULL !!
Line 5035: [rrc_IntraFMeasMapper_AddCell]:Error:  NumOfTimeslotIscp = %d, Bound it to MAX(%d)
Line 5158: [rrc_IntraFMeasMapper_SetXInterFMidBitMap]: MID %d set :  IntraFMeasMapper_p->XInterFMidBitmap = 0X%x
Line 5170: [rrc_IntraFMeasMapper_ResetXInterFMidBitMap]: MID %d reset :  this->XInterFMidBitmap = 0X%x
Line 5244: ERR IntraMeasurement  not been Stopped
Line 5249: ERR IntraFMeasInstIdList[%d] == NULL..
Line 5254: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: IntraFMeasInstIdListSize %d,isIntraFMeasActive %d
Line 5268: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: IntraFMeas for N-freq was already configured. No need to config MID0
Line 5291: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: MID 0 Configured Newly
Line 5319: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: Invalid Pccpch info
Line 5351:  rrc_IntraFCellInfoList_AddCell called..  
Line 5370: [rrc_IntraFMeasMapper_CreateNewInternalIntraFMeasurement]: No Active Cells to Add
Line 5414: Best IntraNCellFreq[DCH][L3FLT] A UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5418: IntraNCell A UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5425: Best IntraNCellFreq[DCH][L3FLT] B UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5429: IntraNCell B UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5436: Best IntraNCellFreq[DCH][L3FLT] C UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5440: IntraNCell C UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5447: Best IntraNCellFreq[DCH][L3FLT] D UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5451: IntraNCell D UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5458: Best IntraNCellFreq[DCH][L3FLT] E UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5462: IntraNCell E UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5469: Best IntraNCellFreq[DCH][L3FLT] F UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5473: IntraNCell F UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5480: Best IntraNCellFreq[DCH][L3FLT] G UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5484: IntraNCell G UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5491: Best IntraNCellFreq[DCH][L3FLT] H UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5495: IntraNCell H UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5502: Best IntraNCellFreq[DCH][L3FLT] I UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5506: IntraNCell I UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5513: Best IntraNCellFreq[DCH][L3FLT] J UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5517: IntraNCell J UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5524: Best IntraNCellFreq[DCH][L3FLT] K UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5528: IntraNCell K UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5535: Best IntraNCellFreq[DCH][L3FLT] L UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5539: IntraNCell L UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5546: Best IntraNCellFreq[DCH][L3FLT] M UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5550: IntraNCell M UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5557: Best IntraNCellFreq[DCH][L3FLT] N UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5561: IntraNCell N UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5568: Best IntraNCellFreq[DCH][L3FLT] O UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5572: IntraNCell O UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5579: Best IntraNCellFreq[DCH][L3FLT] P UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5583: IntraNCell P UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5590: Best IntraNCellFreq[DCH][L3FLT] Q UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5594: IntraNCell Q UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5601: Best IntraNCellFreq[DCH][L3FLT] R UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5605: IntraNCell R UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5612: Best IntraNCellFreq[DCH][L3FLT] S UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5616: IntraNCell S UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5623: Best IntraNCellFreq[DCH][L3FLT] T UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5627: IntraNCell T UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5634: Best IntraNCellFreq[DCH][L3FLT] U UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5638: IntraNCell U UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5645: Best IntraNCellFreq[DCH][L3FLT] V UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5649: IntraNCell V UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5656: Best IntraNCellFreq[DCH][L3FLT] W UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5660: IntraNCell W UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5667: Best IntraNCellFreq[DCH][L3FLT] X UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5671: IntraNCell X UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5678: Best IntraNCellFreq[DCH][L3FLT] Y UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5682: IntraNCell Y UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5689: Best IntraNCellFreq[DCH][L3FLT] Z UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5693: IntraNCell Z UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5700: Best IntraNCellFreq[DCH][L3FLT] AA UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5704: IntraNCell AA UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5711: Best IntraNCellFreq[DCH][L3FLT] AB UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5715: IntraNCell AB UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5722: Best IntraNCellFreq[DCH][L3FLT] AC UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5726: IntraNCell AC UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5733: Best IntraNCellFreq[DCH][L3FLT] AD UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5737: IntraNCell AD UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5744: Best IntraNCellFreq[DCH][L3FLT] AE UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5748: IntraNCell AE UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5755: Best IntraNCellFreq[DCH][L3FLT] AF UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5759: IntraNCell AF UARFCN: %d, Cell_Id: %d, CellParamId: %d, Rscp: %d dBm, D-Rscp : %d
Line 5764: INVALID no of NCells
Line 5778: INVALID no of NCells = %d
