Line 289: Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
Line 395: ERROR Illegal State
Line 469: Failed to create TimerSCellMeasResultValid
Line 507: Failed to create T322
Line 526: Failed to create T325
Line 655: ERROR deleting TimerSCellMeasResultValid
Line 668: ERROR deleting T_322 timer
Line 680: ERROR deleting T_325 timer
Line 804: Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] PLMN[0x%X] from SIM2
Line 810: Poweron Add StoredFreqDb entry at Index[%d]: Freq[%d] PLMN[0x%X]
Line 870: NULL PLMN ID Passed: Freq[%d] not Added
Line 875: Freq[%d] not Supported BandId(%d)
Line 905: Old Stored freq: Sort
Line 914: Old Stored freq: Skip
Line 919: New Stored freq
Line 931: First Stored freq
Line 973: StoredFreq[%d] found for PLMN 0x%X, 0x%X, 0x%X
Line 986: Add TddLastManualScannedFreqs
Line 1016: Add InitialFreq
Line 1029: Add TddLastUsedFreq
Line 1063: Add LastUsedNeighborFreq
Line 1080: Add SCellCachedFreq
Line 1108: Add TddLastUsedFreq from other stack
Line 1117: Umts_access_mode %d is different from peer stack
Line 1121: current stack	%d peer stack %d
Line 1146: Target PLMN is HPLMN or in EPLMN list
Line 1158: Equivalent PlmnId 0x%X, 0x%X, 0x%X
Line 1182: Target PLMN is NULL
Line 1187: CellSelecter of Stack %d is NULL
Line 1234: TddMaxBand %d 
Line 1237: TddStoredBands[%d] %d 
Line 1268: FastHplmnFreq %d 
Line 1336: ERROR registering for State Change notificationwith CnxMgr
Line 1395: ERROR creating TPlmnSearchBackOff Timer
Line 1400: Failed to create TimerKeepBplmnOp
Line 1408: ERROR creating TimerOurOfService Timer
Line 1431: [DS_CELL_SEL] Failed to create T_SearchOn
Line 1436: [DS_CELL_SEL] Failed to create T_SearchOff
Line 1474: rrc_UnRegister_CnxMgr_StateChange FAILED
Line 1481: ERROR Illegal State
Line 1536: ERROR deleting TPlmnSearchBackOff timer
Line 1547: ERROR deleting TimerKeepBplmnOp
Line 1560: ERROR deleting TimerOurOfService timer
Line 1573: ERROR deleting T_SearchOn timer
Line 1585: ERROR deleting T_SearchOff timer
Line 1699: AllBandSearchValue- %d 
Line 1703: Building PlmnList Ind
Line 1747: Num Unique PLMN Id's is: %d and it is > 64
Line 1765: Num Unique PLMN Id's is: %d and it is > 64
Line 1815: Num Unique PLMN Id's is: %d and it is > 64
Line 1822: Added currently selected PlmnId: 0x%02X, 0x%02X, 0x%02X with RxLev: %d to head of list
Line 1830: PlmnList Ind built - %d unique PlmnIds found
Line 1847: Num Unique PLMN Id's is: %d and it is > 64
Line 1867: Failed to move to AwaitingNasRequest state
Line 1924: Num Unique PLMN Id's is: %d and it is > 64
Line 1942: Num Unique PLMN Id's is: %d and it is > 64
Line 1966: Num Unique PLMN Id's is: %d and it is > 64
Line 2007: ERROR Illegal State
Line 2151: add FastHplmnFreq (freq %d)
Line 2169: Old freq: Sort
Line 2177: Old freq: Skip
Line 2183: New freq
Line 2192: First freq
Line 2208: Get TddLastUsedFreq Band A freq %d)
Line 2212: Get TddLastUsedFreq Band F freq %d)
Line 2225: Input Band (%d) is greater than TDD_MAX_BAND (%d)
Line 2230: Input Band (%d) is invalid
Line 2235: Input Frequency(%d) is not supported
Line 2255: Old freq: Sort :: (band %d, freq %d)
Line 2260: Old freq: Skip
Line 2266: New freq:: (band %d, freq %d)
Line 2272: First freq
Line 2787: Input Band (%d) is greater than TDD_MAX_BAND (%d)
Line 2793: Input Band (%d) is invalid
Line 2813: Old freq: Sort :: (band %d, freq %d)
Line 2818: Old freq: Skip
Line 2824: New Manual Scanned freq:: (band %d, freq %d)
Line 2830: First freq
Line 2864: BestRscpOnInterFreq is set to %d (%d dBm)
Line 2881: ERROR stopping TimerSCellMeasResultValid
Line 2892: Keep current CellParamIdInDCH & MeasResult(Cell Param Id %d)
Line 2896: Add CellParamIdInDCH (Idx 0, Cell Param Id %d)
Line 2909: ERROR stopping TimerSCellMeasResultValid
Line 2925: [Last SCell Meas Result] Update :: Freq %d, CPI %d (rscp %ddBm, ts0Sinr %ddB, dpchSir %ddB)
Line 2932: ERROR stopping TimerSCellMeasResultValid
Line 2941: ERROR starting TimerSCellMeasResultValid
Line 2946: TimerSCellMeasResultValid Started (TmId=%d) : %i msec
Line 2952: [Last SCell Meas Result] Wrong CPI Info :: CellSelecter(Freq %d, CPI %d) vs New(Freq %d, CPI %d)
Line 2984: [Last SCell Meas Result] reusable :: Rscp %ddBm (> -70) & Ts0Sinr %ddB (> 4), DpchSir %ddB (don't care)
Line 2989: [Last SCell Meas Result] reusable :: Rscp %ddBm (-70 ~ -80) & DpchSir %ddB (> 20) & Ts0Sinr %ddB (> 4)
Line 2994: [Last SCell Meas Result] reusable :: Rscp %ddBm (-80 ~ -90) & DpchSir %ddB (> 18) & Ts0Sinr %ddB (> 4)
Line 2999: [Last SCell Meas Result] reusable :: Rscp %ddBm (> -90) & DpchSir %ddB (> 8) & Ts0Sinr %ddB (> 2)
Line 3003: [Last SCell Meas Result] Not reusable :: Low RSCP or SIR (Rscp %ddBm, DpchSir %ddB, Ts0Sinr %ddB)
Line 3009: [Last SCell Meas Result] Not reusable :: Freq %d, NumCpi %d, Cpi %d
Line 3019: TddCellSelecter_p == NULL
Line 3031: Remove CellParamIdInDCH (Idx %d, Cell Param Id %d)
Line 3048: NumCellParamIdInDch is already zero
Line 3056: CellParamId is not in CellParamIdInDCH
Line 3063: [rrc_TddCellSelecter_RemoveCellInDch] TddCellSelecter_p->NumCellParamIdInDch(%d) > Asn_maxDPCH_DLchan(%d)
Line 3133: Could not start T322(%d ms)
Line 3138: Could not start T322(%d ms)
Line 3171: rrc_TddCellSelecter_ClearPriorityInfoList:: CLEARED
Line 3186: rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) - UARFCN(%d)
Line 3195: rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) - UARFCN(%d)
Line 3201: rrc_TddCellSelecter_SetPriorityInfo_Utra:: Priority(%d) or numFreqCount(%d) - Out of bound 
Line 3219: TddCellSelecter_p->PriorityInfoList[Priority].choice_RAT = %d and priority = %d
Line 3231: UtraPriorityInfo.UtraFreqList[freqIdx] = %d, UtraFreq = %d
Line 3256: rrc_TddCellSelecter_SetPriorityInfo_Eutra:: Priority(%d) - EARFCN(%d)
Line 3262: rrc_TddCellSelecter_SetPriorityInfo_Eutra:: Priority(%d) or numFreqCount(%d) - Out of bound 
Line 3275: Timer T325 stopped
Line 3279: Error in stopping timer T325
Line 3290: rrc_TddCellSelecter_StartT325 : start T325(%d min)
Line 3294: Could not start T325(%d min)
Line 3299: Could not start T325(%d min)
Line 3320: rrc_TddCellSelecter_DePrioReset!!
Line 3349: rrc_TddCellSelecter_T325Expiry : CurrentRule = %d
Line 3368: rrc_TddCellSelecter_T325Expiry : Cannot refresh current EutraMeas(NOTACTIVE)
Line 3373: rrc_TddCellSelecter_T325Expiry : Cannot referesh current EutraMeas(Not Support or Reselecter is NOTACTIVE
Line 3394: rrc_TddCellSelecter_IsDePrioritisedFreq: Current DeprioType is URRC_DEPRIO_TYPE_EUTRA(%d), return TRUE
Line 3404: rrc_TddCellSelecter_IsDePrioritisedFreq: Given Freq(%d) found at DePrioritiseInfoList[%d], return TRUE
Line 3412: FATAL_ERROR: Current DeprioType is URRC_DEPRIO_TYPE_EUTRA(%d) eventhough TddCellSelecter_p->DePrioritiseStatus is DEPRIORITY_ACTIVE, return FALSE
Line 3429: TddCellSelecter_p->PriorityInfoList[Priority].choice_RAT = %d and priority = %d
Line 3442: EutraPriorityInfo.UtraFreqList[freqIdx] = %d, UtraFreq = %d
Line 3512: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 3517: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 3641: Update Tdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d,selected uarfcn = %d
Line 3695: Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d, SelectedUarfcn = %d
Line 3792: Entering Upation of Forbidden LA (URRC_FLAI_LIST %d, NAS_FLAI_LIST %d)
Line 3801: URRC_FLAI_LIST[%d] -> LAI %d
Line 3815: NAS_FLAI_LIST[%d] -> LAI %d
Line 3854: Asking all cells to be deleted for LAI %d
Line 3925: SetSelectionCriteria: Wrong PLMN_SEARCH type!!! Setting to FULL SCAN
Line 3930: SetSelectionCriteria: PLMN_SEARCH_REQ - Search Type(%d)
Line 4020: [URRC_FREQ_AID][Default_NasLCSFreqAidReq] FreqAidRequest start(%d) rat(%d) tcxo_type(%d)
Line 4039: [URRC_FREQ_AID][Default_NasLCSFreqAidReq]TddCellSelecter Status is not available for Frequency Aiding
Line 4076: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] TriggeringMsg->AuxData.RetCode = %d
Line 4079: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] Payload->status(%d)
Line 4089: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_FAILED
Line 4095: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_LOCKED
Line 4100: [URRC_FREQ_AID][Default_NasLCSFreqAidCnf] FreqAidCnf->status : FREQ_AID_STATUS_UNLOCKED
Line 4114: [URRC_FREQ_AID]LcsFreqAidCnf status = %d (0:Unlocked 1:Locked 2:Aborted 3:Faied)
Line 4143: TDD :AwaitingInitialRequest_NasPlmnSearchReq
Line 4165: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 4186: AwaitingNasRequest_NasPlmnSearchReq: PlmnSearchReq rcvd for different plmn in connected mode
Line 4189: AwaitingNasRequest_NasPlmnSearchReq()-ReleaseCnx MsgNotSent
Line 4204: [AbortIfNewCountry] (%d)
Line 4267: Updating the Manual Scanned Freqs and Clear It
Line 4287: Stored Info network parameters read - doing a Stored Search
Line 4295: No USIM network parameters read - doing a Stored Search
Line 4302: No USIM network parameters read - doing a Blind Search
Line 4327: No Stored Freq available
Line 4342: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 4347: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 4353: ERROR Illegal State
Line 4367: ERROR Illegal State
Line 4432: AwaitingInitialRequest_NasInitialPlmnSearchReq Trigger a Stored Search
Line 4472: ERROR Illegal State
Line 4493: NasInitialPlmnSearchReq: No TDD Stored Frequencies
Line 4520: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 4525: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 4532: AwaitingInitialRequest_NasInitialPlmnSearchReq Trigger a Blind Search
Line 4569: ERROR Illegal State
Line 4594: Default_ReDirectToUtranReqFromLte : RedirectToUtranReqFromLte cannot be handled at current status!!!
Line 4600: NumSysInfoContainer is not 0
Line 4639: AwaitingInitialRequest_ReDirectToUtranReqFromLte
Line 4658: Wrong Redirection Frequency from LTE
Line 4664: Overwrite the redirection freq ( 0 -> %d)
Line 4668: MRU not available
Line 4682: FrequencyIsValid is FALSE
Line 4691: Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d
Line 4705: CSFB is Triggered: Set ForcedSib11Sib12Skipping
Line 4727: Set ForcedSib11Sib12Skipping in case of SI tunneling
Line 4747: ServingCellInst == NULL
Line 4752: Rel9 is not supported
Line 4782: ERROR Illegal State
Line 4810: ERROR Illegal State
Line 4829: ERROR Illegal State
Line 4910: ERROR stopping TimerKeepBplmnOpIRAT
Line 4918: ERROR stopping TimerKeepBplmnOp
Line 4970: TDD NasSelectingPlmn_NasPlmnSearchReq
Line 4979: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 5028: ERROR Illegal State
Line 5057: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 5195: No Stored Freq available
Line 5209: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 5214: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 5220: ERROR Illegal State
Line 5233: ERROR Illegal State
Line 5268: Classname:TddCellSelecter: ERROR Illegal State
Line 5275: Classname:TddCellSelecter: ERROR Illegal State
Line 5279: NasSelectingPlmn_SelectableCellFound:PendingState %d
Line 5313: Classname:TddCellSelecter: ERROR Illegal State
Line 5346: RedirectBandId received invalid BandId(%d) from LTE so last stored Band(%d) will be replaced
Line 5467: Not Registered with Srif, Ignoring further cellselection operation
Line 5477: failed to find a cell in the redirection freq => start Blind Cell Search
Line 5512: ERROR Illegal State
Line 5581: No USIM network parameters read - doing a Blind Search
Line 5603: No Stored Freq available
Line 5618: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 5623: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 5629: ERROR Illegal State
Line 5678: Band is %d, RXlev is %d,index is %d
Line 5702: Num Unique PLMN Id's is: %d and it is > 64
Line 5723: Band is %d, RXlev is %d,index is %d
Line 5728: Num Unique PLMN Id's is: %d and it is > 64
Line 5757: Num Unique PLMN Id's is: %d and it is > 64
Line 5774: Num Unique PLMN Id's is: %d and it is > 64
Line 5787: PlmnSearchFail Ind built - %d unique PlmnIds found
Line 5802: Num Unique PLMN Id's is: %d and it is > 64
Line 5813: PlmnSearchFail_IND cannot be created
Line 5827: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 5832: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 5865: ERROR Illegal State
Line 5876: TDD Stored search (USIM)done, Going for BLIND SEARCH
Line 5886: Detected Network Pointer Present and Band Search Status is TRUE for Band %d
Line 5918: Band is %d, RXlev is %d,index is %d
Line 5933: Num Unique PLMN Id's is: %d and it is > 64
Line 5951: Num Unique PLMN Id's is: %d and it is > 64
Line 5973: Band is %d, RXlev is %d,index is %d
Line 5978: Num Unique PLMN Id's is: %d and it is > 64
Line 5988: checking band search status and Maxband: Band %d. Max band=%d
Line 6099: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 6175: ERROR Illegal State
Line 6223: Classname:TddCellSelecter: ERROR Illegal State
Line 6230: Classname:TddCellSelecter: ERROR Illegal State
Line 6319: GenMsg is NULL
Line 6356: checking band search status and Maxband: Band %d. Max band=%d
Line 6428: CELL REJECT CAUSE = %d
Line 6446: ERROR Illegal State
Line 6527: ERROR Illegal State
Line 6550: ERROR Illegal State
Line 6565: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 6570: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 6611: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 6616: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 6622: NoCellIndPtr cannot be created
Line 6628: ERROR Illegal State
Line 6633: InterRatReselectingCell_DetectiON-ABORTed: sending rrc_URRC_GRR_CellReselectionToUtranFailed
Line 6667: ERROR unexpected return code: %i from cell suitability check
Line 6676: ERROR Illegal State
Line 6704: G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Line 6736: Saved Foreground Search
Line 6746: Classname:TddCellSelecter: ERROR Illegal State
Line 6762: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 6767: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 6987: ERROR Illegal State
Line 7114: Add TddLastUsedFreq
Line 7220: AwaitingRrcRequest_RrcSelectPlmn 
Line 7223: ERROR Illegal State
Line 7282: Frequency %d, Redirected %d
Line 7321: ERROR Illegal State
Line 7329: ERROR StoredNetworkPtr is NULL
Line 7335: ERROR TddHandoverFreqPtr is NULL
Line 7360: HandoverFreq(%d) is not supported in this manual band selection mode
Line 7365: ERROR TddStoredNetworkPtr is NULL
Line 7378: ERROR TddHandoverFreqPtr is NULL
Line 7384: ERROR Illegal State
Line 7465: HandoverFreq(%d) is not supported in this manual band selection mode
Line 7470: ERROR TddStoredNetworkPtr is NULL
Line 7483: ERROR TddHandoverFreqPtr is NULL
Line 7490: ERROR Illegal State
Line 7568: Checking BarredList for Cell(UARFCN %d/ CellParamID %d)
Line 7580: Cell/Freq is barred!!! Cannot Select this Cell(UARFCN %d/ CellParamID %d)
Line 7585: Classname:CellSelecter: ERROR Illegal State
Line 7590: Cell(UARFCN %d/ CellParamID %d) is not barred!!! go for checking suitability
Line 7623: ERROR Illegal State
Line 7688: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 7767: No USIM network parameters read - doing a Stored Search
Line 7775: No USIM network parameters read - doing a Blind Search
Line 7799: No Stored Freq available
Line 7807: ERROR Illegal State
Line 7826: ERROR Illegal State
Line 7866: ----- BackGround PLMN search is not handled in this state -----
Line 7897: ERROR stopping TimerKeepBplmnOp
Line 7933: ----- ForeGround PLMN search is being handled -----
Line 7938: Automatic search requested
Line 7964: ERROR Illegal State
Line 7969: ERROR Illegal ManualAutomatic value: %i
Line 8036: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 8100: AwaitingRrcRequest_NasSearchReq()-ReleaseCnx MsgNotSent
Line 8108: ERROR Illegal State
Line 8189: AwaitingRrcRequest_NasPlmnListReq: INTERNALAMRELREQ MsgNotSent
Line 8194: ----- BackGround PLMN search is not handled in CnxMgr_IsConnectedState(%d) send SCRI first in Manual Search Case -----
Line 8215: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 8249: [BPLMN] BPLMN Handler created (Single Rat Search Requested %d)
Line 8277: [BPLMN] Updating the DetecteNetworkPointer
Line 8285: [BPLMN] No detectedNetworkPointer
Line 8297: ERROR Illegal State
Line 8304: [BPLMN] Usim is not accessible, Initiating BPLMN search Request.
Line 8316: ERROR Illegal State
Line 8324: ERROR Illegal State
Line 8337: NumFastHplmnFreq is Zero
Line 8351: [BPLMN] Initiating the BPLMN search for FastHplmnFreq
Line 8363: [BPLMN] ERROR Illegal State
Line 8370: [BPLMN] Initiating the BPLMN search for Manual request
Line 8388: [BPLMN] ERROR Illegal State
Line 8401: ----- BPLMN request rejected from DSRC, sending Fail_ind to NAS-----
Line 8407: [DSDS] BPLMN Waiting for Resource Response
Line 8436: ----- ForeGround PLMN search is being handled -----
Line 8459: ERROR Illegal State
Line 8484: AwaitingRrcRequest_NasPlmnListReq()-ReleaseCnx MsgNotSent
Line 8490: ERROR Illegal State
Line 8505: ERROR stopping TimerKeepBplmnOp
Line 8611: Add TddLastUsedFreq
Line 8680: ERROR Illegal State
Line 8728: Classname:TddCellSelecter: ERROR Illegal State
Line 8752: ----- BackGround PLMN search is not handled in this state -----
Line 8786: ERROR stopping TPlmnSearchBackOff Timer
Line 8803: ----- ForeGround PLMN LIST REQ reposted to TddCellSelecter -----
Line 8822: Classname:TddCellSelecter: ERROR Illegal State
Line 8829: Classname:TddCellSelecter: ERROR Illegal State
Line 8873: No network data in USIM - stored TddNetwork instance not created
Line 8905: [ConnectedOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_TddBplmnHandler_GenerateAbort is NULL Returned
Line 8958: checking band search status and Maxband: Band %d. Max band=%d
Line 9022: CELL REJECT CAUSE = %d
Line 9040: ERROR Illegal State
Line 9045: Unsupported Reject Cause
Line 9052: Pending State is not Idle, ignoring Cell Reject Cause = %d
Line 9073: ----- BackGround PLMN search is not handled in this state -----
Line 9089: ERROR stopping TimerKeepBplmnOp
Line 9098: ----- ForeGround PLMN search is handled in ConnectedOOSSelectingPlmn state -----
Line 9196: ----- BackGround PLMN search is not handled in this state -----
Line 9213: ERROR stopping TimerKeepBplmnOp
Line 9271: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 9328: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 9377: ERROR stopping TPlmnSearchBackOff Timer
Line 9383: ERROR stopping TPlmnSearchBackOff Timer
Line 9410: ERROR stopping TPlmnSearchBackOff Timer
Line 9416: ERROR stopping TPlmnSearchBackOff Timer
Line 9447: ERROR stopping TPlmnSearchBackOff Timer
Line 9490: ERROR Illegal State
Line 9539: PlmnSearchFail Ind built - %d unique PlmnIds found
Line 9559: Num Unique PLMN Id's is: %d and it is > 64
Line 9576: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 9581: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 9673: ERROR stopping TPlmnSearchBackOff Timer
Line 9757: Add TddLastUsedFreq
Line 9824: ERROR Illegal State
Line 9831: save RrcSelectPlmn Request (%d)
Line 9893: ERROR stopping TimerKeepBplmnOp
Line 9899: Classname:TddCellSelecter: ERROR Illegal State
Line 9912: Classname:TddCellSelecter: ERROR Illegal State
Line 9920: [BPLMN] ERROR Illegal State
Line 9929: Classname:TddCellSelecter: ERROR Illegal State
Line 9989: No network data in USIM - stored TddNetwork instance not created
Line 10028: [IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_TddBplmnHandler_GenerateAbort is NULL Returned
Line 10052: [IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_Scnx_GenerateamEstReject is NULL Returned
Line 10066: [IdleOOSSelectingPlmn_SelectableCellNotFound] rrc_Class_Scnx_GenerateamEstReject is NULL Returned
Line 10079: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 10084: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 10120: checking band search status and Maxband: Band %d. Max band=%d
Line 10199: ERROR Illegal State
Line 10219: ERROR Illegal State
Line 10240: Debug Print: UE stuck Issue Reproduced
Line 10284: HandoverFreq(%d) is not supported in this manual band selection mode
Line 10294: ERROR Illegal State
Line 10302: ERROR TddHandoverFreqPtr is NULL
Line 10306: Classname:TddCellSelecter: ERROR Illegal State
Line 10346: HandoverFreq(%d) is not supported in this manual band selection mode
Line 10356: ERROR Illegal State
Line 10364: ERROR TddHandoverFreqPtr is NULL
Line 10368: Classname:TddCellSelecter: ERROR Illegal State
Line 10444: Serving Cell Rejected. Cause=%d
Line 10448: SIB1 or MIB is NULL
Line 10459: CELL REJECT CAUSE = %d
Line 10497: ERROR Illegal State
Line 10523: CELL REJECT CAUSE = %d
Line 10563: ERROR Illegal State
Line 10602: ----- BackGround PLMN search is not handled in this state -----
Line 10633: ERROR stopping TimerKeepBplmnOp
Line 10667: Automatic search requested
Line 10694: ERROR Illegal State
Line 10700: ERROR Illegal ManualAutomatic value: %i
Line 10787: [BPLMN] We already have a BPLMN Handler. Reuse it
Line 10822: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 10855: [BPLMN] BPLMN Handler created (Single Rat Search Requested %d)
Line 10881: [BPLMN] Updating the DetecteNetworkPointer
Line 10889: [BPLMN] No detectedNetworkPointer
Line 10901: ERROR Illegal State
Line 10908: [BPLMN] Usim is not accessible, Initiating BPLMN search Request.
Line 10920: ERROR Illegal State
Line 10928: ERROR Illegal State
Line 10941: NumFastHplmnFreq is Zero
Line 10955: [BPLMN] Initiating the BPLMN search for FastHplmnFreq
Line 10969: [BPLMN] ERROR Illegal State
Line 10977: [BPLMN] Initiating the BPLMN search for Manual request
Line 10995: [BPLMN] ERROR Illegal State
Line 11008: ----- BPLMN request rejected from DSRC, sending Fail_ind to NAS-----
Line 11014: [DSDS] BPLMN Waiting for Resource Response
Line 11026: Unable to action PlmnList request since Cell Reselection is in progress
Line 11076: ----- ForeGround PLMN search is being handled -----
Line 11097: ERROR Illegal State
Line 11104: ERROR Illegal ManualAutomatic value: %i
Line 11117: ERROR stopping TimerKeepBplmnOp
Line 11171: ERROR Illegal State
Line 11180: ERROR Illegal State
Line 11191: ERROR Illegal State
Line 11251: ERROR Illegal State
Line 11293: ERROR Illegal State
Line 11409: ERROR Illegal State
Line 11556: NasTriggeredMCCDetection_PlmnIdReadSuccess: UniquePLMN's is 0.. something wrong
Line 11587: ERROR Illegal State
Line 11600: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 11605: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 11637: AllBandSearchValue- %d 
Line 11667: ERROR Illegal State
Line 11689: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 11694: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 11730: ERROR Illegal State
Line 11758: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 11849: No USIM network parameters read - doing a Stored Search
Line 11898: No Stored Freq available
Line 11907: ERROR Illegal State
Line 11918: ERROR Illegal State
Line 12102: Redirection from GSM
Line 12117: TddCellSelecter_p->TddDetectedNetworkPtr is NULL
Line 12145: Not Suported Band %d  
Line 12151: Not Suported Band %d 
Line 12159: Frequency %d is barred 
Line 12182: Cell Freq %d PSC %d is barred 
Line 12193: Redirection Candidate: Cell Freq %d PSC %d
Line 12201: Redirection Candidate: Cell Freq %d
Line 12219: ERROR Illegal State
Line 12277: ERROR Illegal State
Line 12306: ERROR Illegal State
Line 12323: QFR Resel from GSM. 2g has not measured any 3g cells
Line 12338: TddCellSelecter_p->TddDetectedNetworkPtr is NULL
Line 12366: Not Suported Band %d  
Line 12372: Not Suported Band %d 
Line 12380: Frequency %d is barred 
Line 12385: Redirection Candidate: Cell Freq %d
Line 12416: ERROR Illegal State
Line 12430: ERROR Illegal State
Line 12478: ERROR Illegal State
Line 12488: Waiting for DSRC response for IRATResel
Line 12526: FrequencyIsValid is FALSE
Line 12540: Update Fdd Network Cache with the Serving Cell Retested Band SelectedBandId = %d
Line 12572: Received QFR Cell Reselection Req
Line 12582: Classname:TddCellSelecter: ERROR Illegal State
Line 12592: Received RemainingBarredTime = %d sec
Line 12602: ERROR Illegal State
Line 12626: G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Line 12661: ERROR Illegal State
Line 12673: Waiting for DSRC response for IRATResel
Line 12699: AwaitingInitialRequest_CellReselToUtranReqFromLte
Line 12700: Received UARFCN = %d
Line 12701: Received PSC = %d
Line 12705: NumberOfCells = %d
Line 12721: Classname:TddCellSelecter: ERROR Illegal State
Line 12726: NumberOfCells = %d
Line 12789: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 12794: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 12814: Classname:TddCellSelecter: ERROR Illegal State
Line 12845: Classname:TddCellSelecter: ERROR Illegal State
Line 12870: InterLteRatReselectingCell_SelectableCellNotFound : RetCode(%d)
Line 12883: InterLteRatReselectingCell_SelectableCellNotFound : MONITOREDCELL_WRONG_CSGID(%d)
Line 12904: ERROR unexpected return code: %i from cell suitability check
Line 12914: ERROR Illegal State
Line 12977: ERROR unexpected return code: %i from cell suitability check
Line 12986: ERROR Illegal State
Line 13064: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 13069: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 13075: ERROR Illegal State
Line 13078: Could not camp on to cells on Redirection freq
Line 13111: ERROR Illegal State
Line 13122: InterRatReselectingCell_SelectableCellNotFound: sending rrc_URRC_GRR_CellReselectionToUtranFailed
Line 13176: ERROR unexpected return code: %i from cell suitability check
Line 13187: ERROR Illegal State
Line 13212: G2U_resel:%d, G2U_redir:%d, G2U_resel_fail:%d, G2U_redir_fail:%d
Line 13237: CandidateCellPtr is NULL
Line 13259: CandidateCellPtr is NULL
Line 13286: ERROR unexpected return code So CellReselToUtranFailMsgPtr = NULL 
Line 13314: ERROR unexpected return code So CellReselToUtranCnfFromLteMsgPtr = NULL 
Line 13362: Classname:TddCellSelecter: ERROR Illegal State
Line 13389: Classname:TddCellSelecter: ERROR Illegal State
Line 13412: Classname:TddCellSelecter: ERROR Illegal State
Line 13563: UL3.Etc.tdd max_band = %d
Line 13567: UL3.Etc.Storing tdd Last Camped Bands = {%d, %d, %d, %d, %d}
Line 13570: TddCellSelecter_p->TddMaxBand = %d
Line 13576: TddCellSelecter_p->TddStoredBands = {%d, %d, %d, %d, %d}
Line 13606: ERROR Illegal State
Line 13642: Nirmala: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 13729: ReadingUsimNetPar_NetworkParameterReadDone[NON FATAL ERROR] ReadRspIlmId = NULL
Line 13773: [BPLMN] Freqs found in SIM = %d
Line 13778: [BPLMN] Freqs to be scanned = %d
Line 13784: [BPLMN] No network data in USIM.
Line 13786: [BPLMN] Initiating BPLMN search Request.
Line 13798: ERROR Illegal State
Line 13806: ERROR Illegal State
Line 13849: ERROR Illegal State
Line 13864: ERROR Illegal State
Line 13882: ERROR Illegal State
Line 13888: No network data in USIM - stored TddNetwork instance not created
Line 13894: ERROR Illegal State
Line 13933: Classname:CellSelecter: ERROR Illegal State
Line 13940: Classname:CellSelecter: ERROR Illegal State
Line 13988: ERROR Illegal State
Line 13995: TddCellSelecter: ERROR Illegal State: %d
Line 14021: TddCellSelecter: ERROR Illegal State: %d
Line 14074: ERROR Illegal State
Line 14100: ERROR Illegal State
Line 14162: ----- BackGround PLMN search is not handled in this state -----
Line 14167: [DSDS] BPLMN Waiting for Resource Response
Line 14221: -----  BackGround PLMN search is not handled in this state -----
Line 14226: [DSDS] BPLMN Waiting for Resource Response
Line 14261: ERROR Illegal State
Line 14273: GenMsg is NULL
Line 14299: ERROR Illegal State
Line 14311: GenMsg is NULL
Line 14342: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14349: ERROR Illegal State
Line 14354: No BPLMN Handler
Line 14370: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14378: ERROR Illegal State
Line 14416: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14421: ERROR Illegal State
Line 14460: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14467: ERROR Illegal State
Line 14481: ERROR Illegal State
Line 14511: ERROR Illegal State
Line 14539: ERROR Illegal State
Line 14564: ERROR Illegal State
Line 14643: CellSelecter: ERROR Illegal State: %d
Line 14652: ERROR Illegal State
Line 14668: ERROR stopping TimerKeepBplmnOp
Line 14708: ERROR stopping TimerKeepBplmnOp
Line 14744: CellSelecter: ERROR Illegal State: %d
Line 14753: ERROR Illegal State
Line 14785: ERROR stopping TimerKeepBplmnOp
Line 14821: CellSelecter: ERROR Illegal State: %d
Line 14830: ERROR Illegal State
Line 14896: Successfully started TimerKeepBplmnOp(%d sec)
Line 14900: Could not start TimerKeepBplmnOp(%d sec)
Line 14908: No BPLMN Handler
Line 14916: CellSelecter: ERROR Illegal State: %d
Line 14925: ERROR Illegal State
Line 14964: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 14994: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15042: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15049: ERROR Illegal State
Line 15100: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15152: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15159: ERROR Illegal State
Line 15210: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15272: ERROR stopping TimerKeepBplmnOp
Line 15293: [BPLMN] BPLMN Handler created
Line 15302: [BPLMN] ERROR Illegal State
Line 15313: [DSRC REJECT]----- BackGround PLMN search is not handled in this state -----
Line 15318: [DSDS] BPLMN Waiting for Resource Response
Line 15328: ----- PCH not configured. BackGround PLMN search is not handled in this state -----
Line 15379: [BPLMN] BPLMN Handler created
Line 15388: [BPLMN] ERROR Illegal State
Line 15399: [DSRC Reject]----- BackGround PLMN search is not handled in this state -----
Line 15405: ----- DrxUpdateReq is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15409: [DSDS] BPLMN Waiting for Resource Response
Line 15420: ----- BackGround PLMN search is not handled in this state -----
Line 15426: ----- DrxUpdateReq is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15458: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15465: ERROR Illegal State
Line 15516: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15542: GenMsg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 15549: ERROR Illegal State
Line 15599: ----- BackGround PLMN search is not handled in CnxMgr_IsInMobilityState(%d) CnxMgr_IsConnectedState(%d) CnxMgrConn_GetCurrentState(%d) -----
Line 15659: [BPLMN] BPLMN Handler created
Line 15675: [DSRC Reject]----- BackGround PLMN search is not handled in this state -----
Line 15680: [DSDS] BPLMN Waiting for Resource Response
Line 15690: ----- PCH not configured. BackGround PLMN search is not handled in this state -----
Line 15745: [BPLMN] BPLMN Handler created
Line 15761: [DSRC Reject]----- BackGround PLMN search is not handled in this state -----
Line 15766: [DSDS] BPLMN Waiting for Resource Response
Line 15776: ----- PCH not configured. BackGround PLMN search is not handled in this state -----
Line 15791: re-post the saved RrcSelectPlmn Request (%d)
Line 15806: re-post the saved RrcSelectPlmn Request (%d)
Line 15898: Ignore RetestBarredCellFreq (Freq %d) : No CheckingCellSuitabilityInProgress
Line 15904: Ignore RetestBarredCellFreq (Freq %d) : No DetectedNetwork
Line 15962: ERROR stopping TimerKeepBplmnOp
Line 16043: ERROR Illegal State
Line 16078: ----- ForeGround PLMN LIST REQ reposted to TddCellSelecter -----
Line 16118: Band is %d, RXlev is %d,index is %d
Line 16142: Num Unique PLMN Id's is: %d and it is > 64
Line 16170: Band is %d, RXlev is %d,index is %d
Line 16194: Num Unique PLMN Id's is: %d and it is > 64
Line 16215: Band is %d, RXlev is %d,index is %d
Line 16220: Num Unique PLMN Id's is: %d and it is > 64
Line 16246: Num Unique PLMN Id's is: %d and it is > 64
Line 16263: Num Unique PLMN Id's is: %d and it is > 64
Line 16275: PlmnList Ind built - %d unique PlmnIds found
Line 16291: Num Unique PLMN Id's is: %d and it is > 64
Line 16299: PlmnListIndPtr cannot be created
Line 16314: NoCell built - %d unique PlmnIds found
Line 16329: Num Unique PLMN Id's is: %d and it is > 64
Line 16341: NoCellIndPtr cannot be created
Line 16360: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 16365: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 16371: ERROR Illegal State
Line 16425: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16433: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16493: [DS_CELL_SEL] %s
Line 16497: [DS_CELL_SEL] ERROR Illegal State in SelectingPlmn_PauseSearchReq
Line 16509: [DS_CELL_SEL] T_SearchOff Started
Line 16513: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16556: [DS_CELL_SEL] T_SearchOff Started
Line 16560: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16571: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16595: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16603: [DS_CELL_SEL] ERROR Illegal State in RrcSelectingCell_PauseSearchReq
Line 16614: [DS_CELL_SEL] T_SearchOff Started
Line 16618: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16732: [DS_CELL_SEL] T_SearchOff Started
Line 16736: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16750: [DS_CELL_SEL] ERROR Illegal State in DetectingPlmnIds_PauseSearchReq
Line 16757: [DS_CELL_SEL] ERROR Illegal State in DetectingPlmnIds_PauseSearchReq
Line 16802: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 16809: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 16852: [DS_CELL_SEL] T_SearchOn Started
Line 16856: [DS_CELL_SEL] Failed to Start T_SearchOn
Line 16864: [DS_CELL_SEL] Time sliced search is aleady ongoing
Line 16870: [DS_CELL_SEL] Ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
Line 16896: [DS_CELL_SEL] Failed to Stop T_SearchOn
Line 16901: [DS_CELL_SEL] Failed to Stop T_SearchOff
Line 16930: [DS_CELL_SEL] T_SearchOff Started
Line 16934: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 16942: [DS_CELL_SEL] Time sliced search is aleady ongoing
Line 16948: [DS_CELL_SEL] ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
Line 16975: GenMsg is NULL
Line 16996: [DS_CELL_SEL] T_SearchOn Started
Line 17000: [DS_CELL_SEL] Failed to Start T_SearchOn
Line 17032: [DS_CELL_SEL] T_SearchOff Started
Line 17036: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 17122: [DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
Line 17157: [DS_CELL_SEL] ERROR Illegal - CandidateCellPtr is NULL
Line 17163: [DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
Line 17172: [DS_CELL_SEL] BCH was open when paused
Line 17181: ERROR Illegal State
Line 17186: [DS_CELL_SEL] Serious Coding Error
Line 17192: [DS_CELL_SEL] Serious Coding Error : PausedScanProc (%d)
Line 17201: [DS_CELL_SEL] T_SearchOn Started
Line 17205: [DS_CELL_SEL] Failed to Start T_SearchOn
Line 17281: [DS_CELL_SEL] SelectableCellFound in unexpected state: (%s) 
Line 17298: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17326: [DS_CELL_SEL] SelectableCellFound in unexpected state: (%s) 
Line 17380: [DS_CELL_SEL] SelectableCellNotFound in unexpected state: (%s) 
Line 17407: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17443: [DS_CELL_SEL] SelectableCellNotFound in unexpected state: (%s) 
Line 17482: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17489: [DS_CELL_SEL] ERROR Illegal State in PausingSearch_CellSearchPaused
Line 17534: PlmnSearchReq rcvd for ANY_PLMN, nastrigerredanyplmnsearch is true
Line 17557: PlmnSearchReq rcvd for ANY_PLMN, nastrigerredanyplmnsearch is true
Line 17619: [DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
Line 17625: [DS_CELL_SEL] ERROR Illegal State in Ready_PauseSearchReq
Line 17658: [DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
Line 17685: [DS_CELL_SEL] Serious Coding Error : CellSelecter's State (%d)
Line 17712: [DS_CELL_SEL] T_SearchOff Started
Line 17716: [DS_CELL_SEL] Failed to Start T_SearchOff
Line 17724: [DS_CELL_SEL] Time sliced search is aleady ongoing
Line 17730: [DS_CELL_SEL] Ignore TimeSlicedSearchOn is non Discrete CellSearch (%d)
Line 17740: [DS_CELL_SEL] Abort Cell detection processed
Line 17765: GenMsg is NULL
Line 17796: [DS_CELL_SEL] ScanOperation : PAUSE
Line 17799: [DS_CELL_SEL] ScanOperation : ABORT
Line 18312: rrc_TddCellSelecter_MapExtMsgIdToIntMsgId: 
Line 18430: [Dedicated Priority Info received from other RAT] PLMN ID(0x%X, 0x%X, 0x%X), Start Time(%d ms), Duration(%d min)
Line 18496: UMTS TDD(%d) - Not supported
Line 18501: GERAN(%d) - Not supported
Line 18514: T322 validity check failed, so URRC ignores all the Dedicated Priority Info
Line 18541: DePrioritise Info is present
Line 18561: DeprioType: %d, T325_duration : %d
Line 18573: DePrioritise : CellSelecter_p->DePrioritiseStatus set to %d
Line 18577: DePrioritise : Fails to start T325
Line 18597: DePrioritiseInfoList[%d]: EARFCN %d
Line 18604: DePrioritise : CellSelecter_p->DePrioritiseStatus set to %d
Line 18608: DePrioritise : Fails to start T325
Line 18625: Unknown DeprioType(%d) NumDeprioFreq(%d) !!!
Line 18650: Start time(%d ms), Duration(%d min), Current time(%d ms)
Line 18664: No proper T322 duration, so Clear the Dedicated Priority Info
Line 18669: T322 Duration is 0, so Dedicated Priority Info is valid until the next Update
Line 18674: No proper T322 information, it can't be started
Line 18697: No proper T322 information, it can't be started
Line 18716: Plmn Selection Complete received - no action taken
Line 18740: LCSFREQAIDREQ to TddCellSelecter
Line 18830: ERROR Unexpected State Change Notification
Line 18844: CnxMgr indicates active state transition to Cell_Fach - reenabling interFrequency Cell Reselection
Line 18849: ERROR Unexpected State Change Notification
Line 18914: ERROR Illegal State
Line 18966: ERROR Illegal State
Line 19019: RecvCheckCellSuitableReq: UARFCN %d PSC %d IsCellBarred(%d) RemainingBarredTime = %d sec
Line 19094: [SyncInfoAvailable] %d -> %d
Line 19101: [SyncInfoAvailable] %d
Line 19113: rrc_Class_TddPlmnSelecter_GetInstanceId: 
Line 19150: CELL REJECT CAUSE = %d
Line 19168: ERROR Illegal State
Line 19189: CELL REJECT CAUSE = %d
Line 19207: ERROR Illegal State
Line 19242: SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 19257: ERROR Illegal State
Line 19289:  SearchReq rcvd for any Plmn nastrigerredanyplmnsearch is true
Line 19304: ERROR Illegal State
Line 19426: UrrcMruReset for [SIMID %d]
Line 19518: Equivalent PlmnId 0x%X, 0x%X, 0x%X added to list
Line 19538: Target PlmnId 0x%X, 0x%X, 0x%X added to list
Line 19556: Target PlmnId is NULL or Target PlmnId is same as Selected PlmnId
Line 19603: First MRU Frequency %d
Line 19633: rrc_CellSelecter_SetNWScanSpecifiedInfo entered
Line 19634: continued.. NumOfBand : %d, NumOfFreq : %d
Line 19638: Requested SpecifiedFreq[%d] : %d
Line 19644: Input Band (%d) is invalid
Line 19650: SpecifiedFreq[%d] = %d added
Line 19662: Requested SpecifiedBand[%d] : %d
Line 19675: Freqeuncy(%d) of Band(%d) is present. Ignore Band
Line 19683: SpecifiedBand[%d] = %d added
Line 19732: Band is %d, RXlev is %d,index is %d
Line 19756: Num Unique PLMN Id's is: %d and it is > 64
Line 19777: Band is %d, RXlev is %d,index is %d
Line 19782: Num Unique PLMN Id's is: %d and it is > 64
Line 19808: Num Unique PLMN Id's is: %d and it is > 64
Line 19825: Num Unique PLMN Id's is: %d and it is > 64
Line 19835: PlmnList Ind built - %d unique PlmnIds found
Line 19851: Num Unique PLMN Id's is: %d and it is > 64
Line 19859: PlmnListIndPtr cannot be created
Line 19868: NoCell built - %d unique PlmnIds found
Line 19883: Num Unique PLMN Id's is: %d and it is > 64
Line 19897: NoCellIndPtr cannot be created
Line 19903: ERROR Illegal State
Line 19919: ERROR Illegal State
Line 20003: SIM %d supports PS, do not reuse serving of peer SIM
Line 20009: Peer SIM (%d) access mode is different
Line 20020: Peer SIM's(%d) rrc_CnxMgr_p OR  ServingCell_p OR PeerSelectedPlmnInstId OR TddServingCellSelReselInfo_p is NULL
Line 20027: Peer SIM (%d) is not in right state to reuse serving cell
Line 20034: Peer SIM (%d)Rscp < -80
Line 20040: Peer SIM (%d) is not suitably camped
Line 20051: Peer SIM Cell's LAI(%x) found in Forbidden list
Line 20065: Peer SIM (%d) PLMN is not equivalent to target PLMN
Line 20078: Peer SIM (%d) serving cell is in barred list (%d, %d)
Line 20089: Peer SIM (%d) serving cell is in black list (%d, %d)
Line 20102: Trying Same Cell Selection (%d, %d) from SIM(%d) [0x%x]
Line 20116: CellInfoPtr is NULL
Line 20137: GetAllStoredFreq : Freq[%d] is added to Index[%d] from SIM %d
