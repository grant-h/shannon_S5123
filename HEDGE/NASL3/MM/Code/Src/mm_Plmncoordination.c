Line 462: Automatic Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Line 466: Manual Plmn Selction Mode Activated in mm_InitialisePlmnManagement
Line 531: Reset  mm_RetryPlmn
Line 610: Ignoring PLMN Search Request. PLMN search is received when Reselection is ongoing
Line 641: Omc5GCapaFlag = %d
Line 659: mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d,EplmnHasSelectedPlmn= %d
Line 662: mm_SelectedPLMN 0x%02x 0x%02x 0x%02x  
Line 663: mm_RetryPlmn 0x%02x 0x%02x 0x%02x  
Line 664: mm_RetryPlmn.RetryOnSamePlmn = %d
Line 682: User Selected PLMN so Update FLAI List  to RRC as zero to find the cell 
Line 716: Reset all attempt counters for retry LAU and PS attach on abnormal failed PLMN as per SoR requirement
Line 721: RetryOnSamePlmn = FALSE
Line 737: 
Line 775: MM will send dummy FAIL_IND because WE SHOULD NOT SEARCH 2G RAT
Line 791: 
Line 854: IsThisAutoToAutoResel = %d
Line 878: 
Line 889: 
Line 932: 
Line 938: 
Line 949: 
Line 963: 
Line 982: 
Line 997: 
Line 1007: Save The Message and Process After REL  Cnf  
Line 1183: 
Line 1205: Received ActHplmn from PLMN
Line 1212: EF_ActHPLMN is not received from PLMN
Line 1263: 
Line 1266: Updating RR(C) ActHPLMN -> 0x%02X 0x%02X 0x%02X
Line 1293: Is CMCC PLMN %d, is User Selected PLMN %d
Line 1356: Triggering Priority PLMN Search 
Line 1379: Priority PLMN Search not needed
Line 1426: SearchCause =%d, 0: normal, 1: EM
Line 1464: 
Line 1466: Discarding Saved Cell Ind
Line 1469: Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 1471: Auto Selection -> %s
Line 1474: Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH AbortIfNewCountry : %d
Line 1515: Auto Selection -> %s
Line 1531: mm_BplmnSearchRatMode -> %s
Line 1534: mm_GetBPLMNEnabled -> %d
Line 1544: Intial values -> ListBuffIndex = %d, ArfcnBuffIndex = %d 
Line 1564: Arfcn_number = %d
Line 1576: Updated values -> ListBuffIndex = %d, ArfcnBuffIndex = %d 
Line 1592: MmListPtr->RatToSearch==>MM_UMTS_RAT_MODE
Line 1601: MmListPtr->FastHplmnScanRequested = %d
Line 1620: FastHplmnScanRequested -> %d
Line 1623: Back Gnd SearchType -> %s
Line 1628: PlmnReqForOldList -> %d
Line 1649: ListSize -> %d
Line 1661: List -> 
Line 1671: ServingPlmn -> 
Line 1687: BPlmnGsmCellDesc
Line 1696: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 1703: ListReqBandNum = %d, BandList->
Line 1707: network_scan request = %d
Line 1713: ReqChannelNum = %d, Channel list->
Line 1734: Back Gnd SearchType -> %s
Line 1739: SingleRatSearch -> %s
Line 1745: FastHplmnScanRequested -> %d
Line 1750: PlmnReqForOldList -> %d
Line 1767: ListSize -> %d
Line 1783: List -> 
Line 1810: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 1816: ListReqBandNum = %d, BandList->
Line 1821: network_scan request = %d
Line 1827: ReqChannelNum = %d, Channel list->
Line 1833: BplmnListCause = %d
Line 1854: Back Gnd SearchType -> %s
Line 1861: PlmnReqForOldList -> %d
Line 1864: SingleRatSearch -> %s
Line 1869: ListSize -> %d
Line 1884: List -> 
Line 1897: ListReqBandNum = %d, BandList->
Line 1902: BplmnListCause = %d
Line 1908: ReqChannelNum = %d, Channel list->
Line 1926: ListReq for RAT Mode MM_UMTS_RAT_MODE
Line 1945: ListReqBandNum = %d, BandList->
Line 1954: ReqChannelNum = %d, Channel list->
Line 1960: PlmnReqForOldList -> %d
Line 1962: LteRrcDetectFreqInfo.detectFreqNum = %d
Line 1972: ListReq for RAT Mode MM_GSM_RAT_MODE
Line 1989: ListReqBandNum = %d, BandList->
Line 1997: ReqChannelNum = %d, Channel list->
Line 2003: PlmnReqForOldList -> %d
Line 2019: 
Line 2021: Requesting (U)RRC to Send Available Plmn List ...
Line 2083: 
Line 2085: Requesting RRC to Try PLMN Search For CSCallResume..Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 2105: mm_GetServiceState = %d
Line 2136: Normal PLMN Search Fail Ind
Line 2145: PLMN SEARCH FAIL IND failCause = %d
Line 2163: 
Line 2196: 
Line 2198: 
Line 2355: NumberArfcn = %d,ArfcnLength =%d
Line 2411: ArfcnInfo
Line 2486: PLMN LIST IND failCause = %d
Line 2509: NumberArfcn = %d
Line 2568: ArfcnInfo
Line 3079: GRR sent Network scan indication
Line 3097: URRC sent Network scan indication for FDD
Line 3121: URRC sent Network scan indication for TDD
Line 3285: PLMN action delayed until GMM procedure completion in %s....
Line 3293: We have to Perfomr PLMN action Because we are in Idle Mode or Received No Service from RRC  
Line 3299: PLMN action delayed until PS signaling connection release... except OOS Case 
Line 3305: PLMN action delayed until RR connection release in %s 
Line 3333: GMM states are ready for list request processing 
Line 3337: PLMN action delayed until GMM procedure completion in %s 
Line 3381: Indicating as CLASS_C_PS always for PS only type devices, ex: VZW TAB 2
Line 3412: If cell data RAI and SIM RAI are different, indicate DEREGISTERED for GMC
Line 3435: Indicating PLMN that MM is ready to go back to LTE.
Line 3506: Plmn State = %s
Line 3586: HPlmn Search In Progress...
Line 3591: HPLMN search not initiated so proceed
Line 3617: Attempting to Add More than Allowed to mm_EquivalentPlmnList (%d) in mm_AddToEquivalentPlmnList 
Line 3630:  Deleting Equivalent Plmn List 
Line 3648: Equivalent Plmn List (%d)
Line 3658: %d> 0x%02X 0x%02X 0x%02X
Line 3669: %d> %02X -%02X
Line 3674: Equivalent Plmn List is Empty !
Line 3773: Copy EPLMN List : Count=%d
Line 3825: EPLMN List is not changed.. No update in Registry..
Line 3843: Deleting Forbidden LAI Lists...[24.008]-4.4.1
Line 3852: %d Hours Left to (Periodically) Delete the Forbidden LAI Lists...[24.008]-4.4.1 
Line 3911: 
Line 4034: 
Line 4103: 
Line 4164: mm_SimProvider = %d
Line 4291: Forbidden Plmn List (%d)
Line 4301: %d -> 0x%02x 0x%02x 0x%02x  
Line 4306: ForbiddenPlmnList is Empty !
Line 4323: Forbidden GMM Plmn List (%d)
Line 4333: %d > 0x%02X 0x%02X 0x%02X   
Line 4338: ForbiddenGmmPlmnList is Empty !
Line 4360: Manual Forbidden Regional Lai List (%d)
Line 4372: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 4377: Manual ForbiddenRegLaiList is Empty !
Line 4384: Forbidden Regional Lai List (%d)
Line 4396: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 4401: ForbiddenRoamingLaiList is Empty !
Line 4419: Forbidden Regional Lai List (%d)
Line 4431: %d > 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 4436: ForbiddenRegLaiList is Empty !
Line 4456: Removing Plmn 0x%02X 0x%02X 0x%02X From Equivalent Plmn List
Line 4497: PLMN Present in EHPLMN List. Not adding to FPLMN List
Line 4579: Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Plmn List
Line 4604: Index is out of bounds, Index: %d, mm_ForbiddenPlmnCount: %d
Line 4759: Removing Lai 0x%02X 0x%02X From Manual Forbidden Regional Lai List
Line 4761: mm_PlmnState(Manual Mode) = %s
Line 4790: Removing Lai 0x%02X 0x%02X From Forbidden Regional Lai List
Line 4792: mm_PlmnState = %s
Line 4847: Removing Plmn 0x%02X 0x%02X 0x%02X From Forbidden Gmm Plmn List
Line 4888: PLMN Present in EHPLMN List. Not adding to FPLMN List
Line 5038: Removing Lai 0x%02X 0x%02X From Forbidden Lai List
Line 5061: Unable to Remove Lai from mm_PlmnCoordinationDb[MmStackId].mm_ForbiddenRoamingLaiList, Invalid Index (0x%02X)
Line 5464: We're in HPLMN
Line 5547: Invalid PlmnIndex used in mm_GetEquivalentPlmnListPlmn !
Line 5575: During manual mode we shall send Manual FLAI list to AS
Line 5581: During Auto mode we shall  send Auto FLAI list to AS
Line 5664: 
Line 5668: Send FLAI list in manual mode.
Line 5722: mm_PerformPlmnActions with Actions %s, Cause: %d
Line 5733:  SAME LA: CCO/Reselection in PS COnnected  is ongoing, dont trigger LOC_UPD perform action, LOC_UPD will be triggered on receiving RATMode change complete
Line 5764: Power off detach is pending, Further PLMN selection is not expected from PLMN
Line 5798: Reset  mm_RetryPlmn
Line 5890: PlmnSelNeeded is %d, TriggerGmmRelReq %d
Line 5899: Request 2G to stop IRAT reselection if it is on going
Line 5916: SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Line 5921: Toggle RetryOnSamePlmn F -> T
Line 5926: Toggle RetryOnSamePlmn T -> F
Line 5953: Reset  mm_RetryPlmn
Line 5990: Request 2G to stop IRAT reselection if it is on going
Line 5995: Set MM state to limted service to block triggering LAU before CELL_IND/PLMN selection
Line 6005: SoR Feature Status in registry == TRUE, SoR #17 reject action will be performed
Line 6010: Toggle RetryOnSamePlmn F -> T
Line 6015: Toggle RetryOnSamePlmn T -> F
Line 6039: Reset  mm_RetryPlmn
Line 6053: Blocking PLMN selection for ATT requirement
Line 6060: Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6095: Optional plmn selection for verizon PS only devices after max attempts
Line 6126: Optional plmn selection for verizon PS only devices after max attempts
Line 6161: EMERGENCY CALL, Making DSNC State to CS CALL Direcltly before sending PerformPlmnActions
Line 6168: Incorrect PLMN action %d
Line 6177: Resetting HOLD PLMN RSP for MM_NOT_AUTHORISED_FOR_CSG REJECT Cause 
Line 6207: NeighborBandNumber = %d
Line 6212: In Perform Cell indication actions for PLMN_REQUESTED_SEARCH, Resetting mm_PlmnSearchCellIndFlag to PLMN_AUTONOMOUS_SEARCH
Line 6217: In Perform Cell Indication actions for PLMN_AUTONOMOUS_SEARCH %d
Line 6223: FTaiLaiListFlag %d (0:FALSE, 1:TRUE)
Line 6246: NeighborBandNumber = %d
Line 6252: PlmnSelNeeded is %d 
Line 6271: CS call is not released yet. Ask PLMN to search current RAT
Line 6294: PLMN perform actions: PLMN list size  -> %d, PLMN list pointer -> %d 
Line 6298: 
Line 6304: 
Line 6337: ReleaseWithRedirection : %d
Line 6361: 
Line 6440: Entered to mm_DecodePlmnActionsRsp %d ,%d	
Line 6480: mm_CheckAndPerformPsRegActionsOnRelease: Attach not done now!! 
Line 6532: mm_PerformPlmnActionsRsp::Cause = %d
Line 6601: mm_PerformPlmnActionsRsp:: PLMN module tried search on both RATs Release the Emergency call if Pending 
Line 6605: mm_PerformPlmnActionsRsp:: Tried on both Rats no Suitable PLMN found and Release the call 
Line 6616: PerformPlmnActions for EMERGENCY CALL has failed (or) emergency call attempt already cleared. Release CSCALL grant..
Line 6649: mm_PerformPlmnActionsRsp:: Case %d , No Actions to be performed 
Line 6691: PLMN mismatch occured, Requesting URRC to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6696: PLMN mismatch occured, Requesting GRR to hold Cell Selection and Reselection, Since PLMN Search will come from GMC
Line 6711: Entered to mm_DecodePlmnSelectRsp %d ,%d	
Line 6731: [23.122]-4.4.3.1 says that << At switch on, or following recovery from lack of coverage,
Line 6732: the MS selects the registered PLMN or equivalent PLMN...>> 
Line 6733: We are NOT in the Registered Plmn Area -> Must go back to Reg. Plmn.... Please Wait
Line 6747: No Action Taken in Recovery From Loss of Coverage
Line 6760: mm_ProcessPlmnSelectRsp :: UNKNOWN CASE %d ,%d	
Line 6772: Plmn State = %s in mm_PerformCellIndGenPlmnActions
Line 6791: Checking The selected PLMN/EqPLmn and CELL DATA LAI Are Not Matched
Line 6806: If UE is redirected under UTRAN control any limitation shall be removed...
Line 6814: In manual PLMN selection redirection failure will be informed...
Line 6829: Set PLMN State Recover Is Needed from PLMN Task
Line 6905: Checking to See if MM / GMM PRocedures are in Progress - MM_CheckMmGmmProcsInPlmnSelModeChange
Line 6920: Breaking GMM Connections in order to do Manual Plmn Selection...
Line 6953: Initiating RR Connection Release Due to Manual Plmn Selection By User. Selected Plmn Will be Sent to (U)RRC when MM is back in IDLE !!....
Line 6968: RR REL REQ already sent so wait till we get confirm
Line 7049: [GSM REDIRECTION INFO] ====> ARFCN(%d) BandInd(%d) NumOfArfcn(%d)
Line 7057: Foll Arfcn Info also Set
Line 7068: L2G CellInfoList Copied..
Line 7069:  CellInfoList : NumCellInfoList=%d 
Line 7141: ReSet MMC Redirect to 2G3G Info
Line 7205: mm_SendRrRedirectReqMsg  Redirect To -> %s
Line 7208: Auto Selection-> %s
Line 7213: Plmn = 0x%02X 0x%02X 0x%02X  in mm_SendRrRedirectReqMsg.
Line 7229: [3G Redirection]Requesting UArfcn -> %d
Line 7269: [DT Requirement for FastSearch For L2U CSFB is applied.
Line 7276: 2G neighbor cell exist in redirection info so 3G cell search time is within 5 seconds.
Line 7280: IsFastSearchForCSFB = %d 
Line 7332: L2G CellInfoList Sending to RR..
Line 7333:  CellInfoList : NumCellInfoList=%d 
Line 7341: [2G Redirection]Requesting Arfcn -> %d , Band Ind - %d
Line 7353: 
Line 7356: Requesting RR(C) to Rediret to this PLMN -> 0x%02X 0x%02X 0x%02X
Line 7388: Rat Mode Change state %s, MM Rat : %s, GMC Rat : %s, Rat Mismatch Count : %d
Line 7400: RAT Mismatch Identified for Maximum times MM Rat : %s, GMC Rat : %s
Line 7452: mm_UmtsMode: %d and mm_UmtsMode received from GMC: %d 
Line 7497: isCommercialPlmnId? (%d), mm_SimProvider? (%d), Iot? (%d)
Line 7515: While manual plmn selection is in progress, skip to sync up Plmn Attribute
Line 7519: After combined Attach reject for PS disable LAU is pended..
Line 7555: PLMN_RECOVERY_TIMER Started So send Indication to CM
Line 7560:  UpdateInfo.EutraCapbDisableState %d, UpdateInfo.NrEutraUpdatedCause: %d, UpdateInfo.NrCapbDisableState: %d
Line 7567: Eutra enabling actions are pending, discard Eutra disable actions as enable is not done
Line 7585: QRB is triggered due to PS enabled in Global mode.
Line 7594: After Rel Cnf QRB will be triggered due to PS enabled in Global mode.
Line 7611: QRB is triggered due to PS enabled in Global mode and 2G RAT.
Line 7615:  GSM RatMode, MM not in Idle, QRB will be initiated after moving to Idle
Line 7630: FORCED_HIGHER_RAT_SEARCH will come and QRB will strat.
Line 7691: Added New Received EF_ActHPLMN to HPLMN List
Line 7694: Displaying the New Act HPLMN
Line 7734: ENS Acting Plmn = 0x%02X 0x%02X 0x%02X
Line 7776: 
Line 7938: IsThisAutoToAutoResel = %d, BplmnSearchRat: %d, BPlmnListCause: %d
Line 7943: 
Line 7958: 
Line 7966: 
Line 7978: 
Line 7986: 
Line 8020: BplmnListCause = %d
Line 8036: BplmnListCause = %d
Line 8109: 
Line 8140: set mm_BplmnSearchRatMode: %d (0-NO_RAT; 1-2G; 2-3G)
Line 8160: Processing pending suspension which was received from GMC, as BPLMN is completed 
Line 8211: BPLMN_STOP_CNF: Process the saved PLMN_MM_RAT_CHANGE_REQ 
Line 8223: Current mm_BackGrndSearchFlag value: %d 
Line 8238: Updated mm_BackGrndSearchFlag value: %d (0:NO_BPLMN, 1: DRX_ONGOING, 2: LIST_ONGOING, 3: DRX+LIST_ONGOING)
Line 8289: set mm_PendingRatResumeAfterBplmn %d....
Line 8302: mm_PendingRatResumeAfterBplmn %d....
Line 8340: This is Re-try cause until 4 times
Line 8442: Reg status is saved.
Line 8459: Saved state : %d, %d, PLMN matching : %d
Line 8473: On the previous registering PLMN again, GMM reg status is retrieved now!!!
Line 8538: mm_CheckIfSkipGSM => Result =%d
Line 8575: 
Line 8580: 
Line 8591: 
Line 8597: 
Line 8621: CSG List Update Request sent ...
Line 8639: CSG Select Request mm_GsmCapDisableFlag = %d, IsThisUserSelected = %d
Line 8645: User Selected PLMN SoDelete and Update FLAI List  to RRC to find the cell 
Line 8664: 
Line 8694: 
Line 8751: 
Line 8801: GSM current RAT... CSG List Req not able send ...
Line 8821: GSM current RAT... CSG List Req not able send ...
Line 8870: mm_BplmnSearchRatMode -> %s
Line 8871: mm_GetBPLMNEnabled -> %d
Line 8919: Back Gnd SearchType -> %s
Line 8954: Back Gnd SearchType -> %s
Line 8979: MULTI_ BPLMN_SUPPORT CSG ListReq in MM_GSM_RAT_MODE
Line 9001: ListReq for RAT Mode MM_UMTS_RAT_MODE
Line 9032: No Multimode background CSG ListReq in MM_GSM_RAT_MODE
Line 9041: 
Line 9043: Requesting (U)RRC to Send Available Plmn List ...
Line 9066: CsgListCount -> %d, UiccCsgAwareness -> %d
Line 9110: 
Line 9192: 
Line 9289: 
Line 9339: mm_CsgRegistrationNeeded is %d
Line 9369: 
Line 9385: 
Line 9387: Requesting RR(C) to Try This PLMN -> 0x%02X 0x%02X 0x%02X
Line 9389: Setting mm_PlmnSearchCellIndFlag to PLMN_REQUESTED_SEARCH
Line 9400: GSM current RAT... CSG Search Req not able send ...
Line 9474: Memory Allocation failed
Line 9481: Visited CSG List byte size 0...
Line 9522: Wrong MSG type in mm_SendMmPlmnAbortCsgListCnf...
Line 9571: Memory Allocation failed
Line 9633: 
Line 9684: GSM current RAT... CSG List Req not able send ...
Line 9748: GSM current RAT... CSG Visisted List Ind not able send ...
Line 9778: GMC triggered PLMN search request on LTE RAT Omc5GCapaFlag %d... 
Line 9834: MmSignalPendingInd.Cause: %d
Line 9849: unexpected received during != PMM CONNECTED state
Line 9893: Prev Rrc State: %d, Rrc_State: %d, in mm_UpdateGmmRrcState() 
Line 9897: RRC State was not changed.
Line 9906: State was changed to PCH
Line 9914: State was changed from PCH
Line 9995: 
Line 10004: 
Line 10037: Triggering saved PLMN list request after GRR_MM_RESEL_HOLD_CNF
Line 10315: EncodedSizeinBits -> %d 
Line 10415: MCC- - 0x%x 
Line 10440: mm_SendPlmnLteRplmnEarfcnScanReq -> %d s
Line 10477: DetectFreqNum - %d 
Line 10478: Result - %d 
Line 10488: arfcn - %d,rxlev - %d 
Line 10539: mm_CheckSilentResetCondition ConditionDomain - %d, Cause - %d, Operator - %d 
Line 10586: mm_CheckSilentResetCondition Unwanted REJ cause
Line 10712: mm_GprsNotAllowedInHPlmn = %d
Line 10745: Attempting to Add More than Allowed to mm_EHPLMNList (%d) in mm_AddToEHPLMNList 
Line 10796: GPRS NOT ALLOWED IN HPLMN restriction to the PLMN: 0x%02X 0x%02X 0x%02X , New Status: %d
Line 10819: EHPLMN Plmn List (%d)
Line 10830: %d -> 0x%02x 0x%02x 0x%02x, GPRS restriction: %d
Line 10835: EHPLMN is Empty !
Line 10874: EHPLMN is Empty !
Line 11116: Wrong Action =%d 
Line 11170: RPLMN_QRB_CONTROL feature is enabled
Line 11177: G2L QRB enabled in this RPLMN
Line 11188: U2L QRB enabled in this RPLMN
Line 11199: After RAU accpet during CSFB, Registered PLMN was changed Need to clear QRB flag.
Line 11209: RPLMN_QRB_CONTROL feature is disabled
Line 11270: MmForcedHigherRatSearchReq.status is 0 (STOP).
Line 11277: Qrb is ignored. 
Line 11283: QRB is triggered by AP.
Line 11298: After Rel Cnf 3G QRB will be triggered.
Line 11303: After MM state moves to IDLE 3G QRB will be triggered.
Line 11313: 2G QRB is triggered by AP.
Line 11317: 2G QRB is triggered by AP but QRB will be initiated after moving to Idle
Line 11323: Qrb is ignored. 
Line 11344: Cause received =%d 
Line 11389: Camped PLMN is TEST NW ,So enable A5_4
Line 11398: PlmnId:%2x is present at Index:%d  in A5_4_PLMN_LIST,So enable A5_4 
Line 11453: PlmnId received as NULL
Line 11482: PlmnId received as NULL
