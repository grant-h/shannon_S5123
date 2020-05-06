Line 183: Frequency: ResetCellList
Line 231: rrc_TddFrequency_free : Frequency_p->CandCellPtr 0x%X 
Line 324: UmtsCellSelectionMeasurement: Config message add cell: %s
Line 334: UmtsCellSelectionMeasurement: Config message No Cell Found:
Line 389: Created IntraFrequency (%d) instance from %d SibCellInfoList cells
Line 393: CellInfoPtr is NULL
Line 433: Created InterFrequency (%d) instance from %d SibCellInfoList cells
Line 557: [TddFrequency] current cell index %d
Line 572: - Rejecting (Uarfcn %d, CellParamId %d) is in BlackList
Line 582: [TddFrequency] Suitable Candidate
Line 589: [TddFrequency] Suitable Candidate (Any PLMN SEARCH: consider all cells)
Line 618: [TddFrequency] %d PlmnIds will be updated from BarredList
Line 691: [TddFrequency] freq %d is barred
Line 833: Frequency_p->CurrentCellIx is %d  and it is > 32
Line 875: Cpich (%i) already in Frequency (%i)
Line 883: CellInfoPtr is NULL in rrc_TddFrequency_AddCellTo
Line 917: Shared PLMN is not selectable
Line 921: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 949: rrc_TddFrequency_isSelectableFreq - ARFCN %i FrequencySelected %i
Line 961: Overwriting existing cell entry
Line 978: UARFCN%i CellList (NumCells %d, InsertIx %d, CurrentCellIx %d)
Line 982: CellList[%i] - Cell Param Id %i 
Line 1004: BuildCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 1023: Setting measurements for (%i, %i): Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm, EcN0: %i dB
Line 1063: Remove CellList[%d](ARFCN%i/Cell Param Id%i)
Line 1100: - Rejecting (Uarfcn %d, cellParamId %d) Rscp %d cause of BlackList Cell)
Line 1127: Frequency_p->NumCells is %d  and it is > 32
Line 1173: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1219: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1256: Requested Stored Cell Search on frequency: %i
Line 1264: ERROR Illegal State
Line 1321: ERROR Illegal State
Line 1329: [TddFrequency] This frequency is already tested but no cell is found
Line 1330: [TddFrequency] No suitable candidate cell found on frequency: %i
Line 1375: ERROR Illegal State
Line 1381: No BPLMN activity
Line 1389: ERROR Illegal State
Line 1401: ERROR Illegal State
Line 1414: ERROR Illegal State
Line 1428: ERROR Illegal State
Line 1474: [rrc_TddFrequency::AwaitingStoredSearchInd_CuphyStoredCellSearchCnf] INFO - Negative confirmation
Line 1485: [rrc_TddFrequency::AwaitingStoredSearchInd_CuphyStoredCellSearchCnf] INFO - Positive confirmation
Line 1517: ERROR Illegal State
Line 1547: ERROR Illegal State
Line 1578: Build Cell List
Line 1597: InitialCellSearch is completed
Line 1622: DefaultState_AbortStoredSearchOn : Abort Stored Cell Search Received in the Deafult State Sending Response
Line 1640: DefaultState_AbortCellSelectionOn : Abort Cell Selection Received in the Deafult State Sending Response
Line 1707: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1718: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 1814: CheckingNextCandidate unexpected result %d 0x%X 
Line 1846: CheckingCellSuitability_IsNotSelectable:  Abort for New country case.
Line 1890: CheckingCellSuitability_AbortCellSelectionOn : Aborting CandCellPtr
Line 1895: ERROR Illegal State
Line 2105: CheckingCellSuitabilityOnMeasuredCells_IsNotSelectable:  Abort for New country case.
Line 2180: [TddFrequency] Suitable candidate cell found (Freq %d, CellParamId %d)
Line 2191: ERROR Illegal State
Line 2196: [TddFrequency] No suitable candidate cell found on frequency: %i
Line 2223: [URRC SR_IF DSDS]Sending Abort Req to Tphy
Line 2230: ERROR Illegal State
Line 2283: ERROR Illegal State
Line 2320: [URRC SR_IF DSDS]Sending Abort Req to Tphy
Line 2327: ERROR Illegal State
Line 2454: rrc_TddFrequency_MapExtMsgIdToIntMsgId 
Line 2459: rrc_TddFrequency_MapExtMsgIdToIntMsgId 
Line 2474: Illegal rrc_TddFrequency_MapExtMsgIdToIntMsgId
Line 2519: ERROR Illegal State
Line 2542: BuildTddCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 2565: Setting measurements for (%i, %i):Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm
Line 2617: DynamicDuplexModeUpdate : %i
Line 2637: Serving Cell Param Id In DCH (%i, %i)
Line 2638: Target Cell Param Id (%i, %i)
Line 2656: Requested Uarfcn  : %i, Target Uarfcn :  %i
Line 2663: Cell Param Id : %i, Target Cell Param Id :	%i
Line 2674: Cell Param Id : %i, Target Cell Param Id :	%i
Line 2677: Best PccpchRscp : %i, Target PccpchRscp :  %i
Line 2724: Adding cellParamId %i to Frequency %i (Rscp: %i dBm Snr: %i)
Line 2732: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich Rscp: %i dBm
Line 2802: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 2816: Same LAI found (ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
Line 2823: LAI Not matched (ARFCN%i/CellParamId%i)(Serving LAC 0x%x, Current LAC 0x%x)
Line 2838: StoredCellSearch is in progress
