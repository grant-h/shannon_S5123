Line 202: rrc_Frequency_free : Frequency_p->CandCellPtr 0x%X 
Line 352: UmtsCellSelectionMeasConfig: Add cell: %s
Line 407: Created IntraFrequency (%d) instance from %d SibCellInfoList cells
Line 411: CellInfoPtr is NULL
Line 451: Created InterFrequency (%d) instance from %d SibCellInfoList cells
Line 544: BPLMN:  Cell %i is Serving, hence not Searched in Background
Line 588: - Rejecting (Uarfcn %d, Cpich %d) is in BlackList
Line 633: %d PlmnIds will be updated from BarredList
Line 699: [rrc_Frequency_GetBestSelectionCandidateOn] freq %d is barred
Line 830: Frequency_p->CurrentCellIx is %d  and it is > 32
Line 871: Cpich (%i) already in Frequency (%i)
Line 876: CellInfoPtr is NULL in rrc_Frequency_AddCellTo
Line 964: Shared PLMN is not selectable
Line 968: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 997: rrc_Frequency_isSelectableFreq - ARFCN %i FrequencySelected %i
Line 1019: Overwriting existing cell entry
Line 1034: UARFCN%i CellList (NumCells %d, InsertIx %d, CurrentCellIx %d)
Line 1050: BuildCellListFromMeasInd[NON FATAL ERROR] Frequency_p->NumCells is greater than FREQUENCY_MAXCELLS
Line 1070: Setting measurements for (%i, %i): Rscp: %i = Rscp(%i) + delta Rscp(%i) dBm, EcN0: %i dB
Line 1141: Adding Cpich %i to Frequency %i Rscp: %i dBm, DeltaRscp: %i dBm, EcN0: %i dB
Line 1149: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich Rscp: %i dBm, DeltaRscp: %i dBm, EcN0: %i dB (Idx: %d)
Line 1166: Adding Cpich %i to Frequency %i Rscp: %i dBm, EcN0: %i dB
Line 1173: Rejected Frequency %i, Cpich %i as a cell selection candidate due to low Cpich EcIo: %i dBm
Line 1192: Remove CellList[%d](ARFCN%i/PSC%i)
Line 1223: [BPLMN] Build Cell List
Line 1243: Frequency_p->NumCells is %d  and it is > 32
Line 1257: - Rejecting (Uarfcn %d, Cpich %d) Rscp %d cause of BlackList Cell)
Line 1298: Frequency_p->NumCells is %d  and it is > 32
Line 1363: Based on LAC[%d] match, moved the cell : Freq[%d] Cpich[%d] from ListIdx[%d] to top[%d] of the Sorted Cell List
Line 1368: PriortizeSameLACCells: Different LA Cell not prioritized: Cell LAC[%d] Cell Freq[%d] Cell Cpich[%d]
Line 1406: Frequency_p->NumCells is %d  and it is > 32
Line 1464: No Cell available
Line 1477: Invalid BandId of TargetCell (%d)
Line 1485: Uarfcn %d, Sir %d (Sir + BandOffset(%d))
Line 1489: Frequency_p->NumCells is %d  and it is > 32
Line 1523: Loaded Intrafrequency cell (URRC_CELLSEL, %i) into index %i of NetPar IntraFreq array
Line 1567: Loaded Interfrequency cell (URRC_CELLSEL, %i) into index %i of NetPar InterFreq array
Line 1604: Requested Freq Cell Search on frequency: %i
Line 1612: ERROR Illegal State
Line 1670: ERROR Illegal State
Line 1678: [Frequency] This frequency is already tested but no cell is found
Line 1679: [Frequency] No suitable candidate cell found on frequency: %i
Line 1719: BPLMN Initiating Cell Search on : %i
Line 1726: ERROR Illegal State
Line 1731: No BPLMN activity
Line 1739: ERROR Illegal State
Line 1752: ERROR Illegal State
Line 1765: ERROR Illegal State
Line 1778: ERROR Illegal State
Line 1817: [rrc_Frequency::AwaitingFreqSearchInd_CuphyFreqCellSearchCnf] INFO - Negative confirmation
Line 1827: [rrc_Frequency::AwaitingFreqSearchInd_CuphyFreqCellSearchCnf] INFO - Positive confirmation
Line 1856: ERROR Illegal State
Line 1884: ERROR Illegal State
Line 1912: Build Cell List
Line 1928: InitialCellSearch is completed
Line 1967: DefaultState_AbortFreqSearchOn : Abort Stored Cell Search Received in the Deafult State Sending Response
Line 1983: DefaultState_AbortCellSelectionOn : Abort Cell Selection Received in the Deafult State Sending Response
Line 2032: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 2041: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 2126: CheckingNextCandidate unexpected result %d 0x%X 
Line 2156: CheckingCellSuitability_IsNotSelectable:  Abort for New country case.
Line 2188: CheckingCellSuitability_AbortCellSelectionOn : PlmnSearchAbortCause(PlmnSearchAbortForTimeout)! So, wait for this suitability checking results
Line 2209: CheckingCellSuitability_AbortCellSelectionOn : Aborting CandCellPtr
Line 2215: ERROR Illegal State
Line 2330: CheckingCellSuitability_AbortCellSelectionOn : Current Abort Cause - PlmnSearchAbortForTimeout. Wait for this results
Line 2453: CheckingCellSuitabilityOnMeasuredCells_IsNotSelectable:  Abort for New country case.
Line 2567: ERROR Illegal State
Line 2573: No suitable cell selection candidates found on frequency: %i
Line 2598: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 2605: ERROR Illegal State
Line 2654: ERROR Illegal State
Line 2696: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 2703: ERROR Illegal State
Line 2888: ERROR Illegal State
Line 2903: StoredCellSearch is in progress
