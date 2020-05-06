Line 200: Initialisation of <Cell Indication>, InitType=%d
Line 439: DSAC State = %d in mm_SendGapiDsacStateInd()
Line 613: prev Band: %d, Current band: %d
Line 617: Band is changed
Line 640: PsDomainAccess PrevPSDA = %d, CurrentPSDA = %d
Line 651: CsDomainAccess PrevCSDA = %d, CurrentCSDA = %d, last_update_is_not_combined is  = %d
Line 738: CN Common SI (i.e. LAC) not present - using stored value
Line 742:  CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in  mm_DecodeRrCellIndMsg 
Line 781: CS domain specific SI (i.e. T3212 and ATT) not present - using stored values
Line 838: NetMode = %d
Line 864: Access Class is barred or not NMO1
Line 909: Previous Network mode is  = %s
Line 910: Current Network mode is  = %s
Line 932: RAU Needed Flag is Not set 
Line 938: RAU Needed Not set - NMO/Access barred not suitable 
Line 945: DSAC for CS and PS are not barred
Line 948: Previous update is not combined
Line 950: RAU Needed Flag is set 
Line 1049: Clear MM_NETWORK_MODE_CHANG_FLG
Line 1071: CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL 
Line 1161: Unit data Indication received after PSHO, releasing CS CALL Grant
Line 1169: CS procedure is not CS CALL, not expected
Line 1177: Putting MM DATA REQ message in Queue in order to process %s
Line 1231: Since DSAC is signalled, Access class is set to not barred
Line 1255: mm_NwModeChangeDueToAccessBarred == %d
Line 1287: CSFB MO/MT Call still pending So Making NMO as NMO2 again.. (NAS sysinfo PsDomainNasInfo[1] : %d 
Line 1331: URRC_MM_CELL_IND Received :  should ignore in PMM_CONNECTED state...
Line 1335: Discarded Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 1357: PagingRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
Line 1451: LocationRegistrationRestriction %d, AccessClassBarred %d, DSAC_Signalled %d
Line 1559: Clear Cell Congestion flag, since there is a change of Cell in the GSM RAT
Line 1580: Change duplex mode
Line 1590:  SGSN Version updated (Pre99 ->R99+)... Encoding MSRAC!!!!! 
Line 1593: EncodedSizeinBits -> %d 
Line 1711: PACKET SERVICE TYPE : [ %d ] 
Line 1722: CellChange is set to FALSE.
Line 1729: CellChange is set to TRUE.
Line 1739:  RrCellInd.CellId -> [0] :%d , RrCellInd.CellId -> [1]:%d
Line 1742:  RrCellInd.Arfcn :%d
Line 1760: RR Cell Ind Rel Version of MSC : [ %d ] 
Line 1762: RR Cell Ind Rel Version of SGSN : [ %d ] 
Line 1796: Cell belongs to forbidden LAI list. So, not suitable for search!! 
Line 1802: ANY PLMN search case. CellNotSuitableForSearch [ %d ] 
Line 1860: mm_UrrcCellInd.BandId = %d
Line 1861: mm_UrrcCellInd.IsGSMRatListIncluded = %d, mm_GsmCapDisableFlag = %d
Line 1863: NasSysInfo.CsDomainNasInfoLen = %d
Line 1864: NasSysInfo.PsDomainNasInfoLen = %d
Line 1878: RAU needed flag is %d
Line 1882: Since DSAC is signalled, Access class is set to not barred
Line 1910: mm_NwModeChangeDueToAccessBarred == %d
Line 1933: mm_UrrcCellInd.CellId : 0x%08X
Line 1962: Cell belongs to forbidden LAI list. So, not suitable for search!! 
Line 2013:  %s  in Processing Cell indication message as UNIT DATA indication message since it is received in PMM Connected mode  
Line 2062: Operating Mode change is going.. New cell ind shall be ignored!!!
Line 2076: New cell ind shall be ignored, as there is a pending action from GMC for previous update reject and grant is with other stack!!!
Line 2098: CsCall is resumed when URRC_MM_CELL_IND comes
Line 2128: isCommercialCell =%d
Line 2187: Delay to send REG_STATUS_IND after LAU completed
Line 2207: Warning : Power-off detach is on-going, so not sending REG_STATUS_IND to NS
Line 2225: Cell Indication received after PSHO, releasing CS CALL Grant
Line 2233: CS procedure is not CS CALL, not expected
Line 2345: Delay to send REG_STATUS_IND after LAU completed
Line 2398: 
Line 2416: Putting MM DATA REQ message in Queue in order to process %s
Line 2438: 
Line 2445: 
Line 2462: DSDS: MM_DS_PERFORM_PROCEED_STACK_RESUMPTION
Line 2506:  Mesage Cross Over detected, Cell Ind Ignored in mm_DecodeRrCellIndMsg  
Line 2521: T323Availability  = %d
Line 2528:  Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed 
Line 2532:  Quick rollback is in progress, so processing MM cell ind further, if QRB for G2L is failed 
Line 2548: LAU triggered because of CSFB call release
Line 2559: Periodic Location Update is triggered since 3312 was already expired
Line 2592: Received CELL IND After OOS So Reset All PLMN States In Connected Mode no Need to handle
Line 2620:  CnCommonNasInfo Absent !!!! PLMN Changed without LAC changing?! Msg ignored in  mm_DecodeRrCellIndMsg 
Line 2628:  PS Domain Info Also Present So Fill RAI and Nor For ANYPLMN
Line 2635:  PsDomainNasInfoLen Absent !!!! 
Line 2641:  ExitMmCellInd After mm_PerformCellIndGenPlmnActions %s   
Line 2646:  ExitMmCellInd After mm_CheckRecoveryFromLossOfCoverage %s   
Line 2683: IMSI detach request will now be processed by MM....
Line 2698:  Moved to a New LAI, or ATT Actions Not Allowed...-> Implicitly Detaching
Line 2731:  Moved to a New Cell, While Attempting to Detach. Proceed with Detach ...
Line 2748: Emergency Call Waiting...
Line 2780: No New LAI..
Line 2784: MM_REL_REQ is already received so don't retry CM SERVICE REQ again
Line 2826: Moved to New LAI. Start Location Update Procedure After RR Rel Cnf.
Line 2847: Cell Does not Support Voice, Terminating RR Connection.
Line 2878: No New LAI. Do nothing
Line 2896: Moved to New LAI. Start Location Update. Paging Abandoned
Line 2914: Cell Does not Support Voice, Terminating RR Connection.
Line 2944: Waiting For MM Connections to be Re-Established
Line 2964: Cell Does not Support Voice, Terminating RR Connection.
Line 2994: Urrc Unit Data Ind received during Call in progress
Line 3012: No New LAI. Do nothing
Line 3022: Moved to New LAI. Start Location Update. Paging Abandoned
Line 3038: Cell Does not Support CS Domain, Terminating RR Connection.
Line 3057: Set MM service state to NORMAL on CELL_IND after AUTH failure
Line 3066: No New LAI. Do nothing
Line 3074: Moved to New LAI. Start Location Update. MO call was Abandoned
Line 3132:  Found in the ForbiddenRoamingLaiList
Line 3138:  Found in the ForbiddenRegLaiList
Line 3146:  Found the Cell for Given Redirect Message 
Line 3185:  CELL IND comes in IDLE state, so abandon quick rollback procedure.
Line 3208:  Copying Cell Data Flags Only Since MM_RR_NO_SERVICE_CELL_FLG is TRUE
Line 3226:  Copying Cell Data Flags Only Since NO_IMSI or Forbidden Plmn, etc.
Line 3234:  Copying All of Cell Data Information
Line 3249: In roaming case, set CS_VOICE_PREF_IMS_VOICE_SEC
Line 3256: In roaming case, set CS VOICE Only for KDDI requirement
Line 3315:  If CCO, RESUME_DONE_IND will be sent after getting Result from RR
Line 3381:  Access Class is Barred in mm_ProcessMmCellIndMsg 
Line 3391:  SameRrConnexFailAction = %d
Line 3400: RAT Change Detected in mm_ProcessMmCellIndMsg
Line 3438: EST REJ TRY OTHER RAT Cause Detected. Changing MM State to %s in mm_ProcessMmCellIndMsg
Line 3451: Entered here because there was a LAI change after EST_REJ reselection during an ongoing call, Call will be done after LAU procedure
Line 3452: Resetting MM_RE_START_PROC_ON_OTHER_RAT_FLG as MM_LOC_UPD_REQ_1ST_MM_CON_FLG-> %d (or) mm_CallWasAttempted -> %d  
Line 3463:  Quick rollback is in progress, so processing MM cell ind further, if Quick rollback is failed 
Line 3504:  SameRrConnexFailAction = %d
Line 3598: GMM_FORBIDDEN_PLMN_GPRS_FLG
Line 3646: NO SERVICE in mm_CheckRrCellIndNoServiceState 
Line 3680: Ignoring No cell ind -> Message Crossover 
Line 3696: If T3213 is stopped due to NO_CELL_IND set LAU needed flag
Line 3741: LOSS_CVG: All contexts other than CC should be released
Line 3768: CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
Line 3774: Discarding MM DATA REQ message due to NO SERVICE
Line 3780: Triggering silent redial ...
Line 3812: MM Connection Lost due to No service
Line 3934:  SameRrConnexFailAction = %d
Line 3944: Location update failed and PLMN PERFORM ACTIONS not sent before due to PS procedure on same RR connection and got NO_CELL_IND..Sending now.. 
Line 3977: Cell Does Not Support Voice Calls in mm_CheckRrCellIndNoServiceState 
Line 3981: Emergency Call Attempted, Must find a Cell Which supports CS & Emergency Calls...
Line 4010: Emergency Call Was Attempted....
Line 4015:  SameRrConnexFailAction = %d
Line 4021: Cell Supports Voice Calls in mm_CheckRrCellIndNoServiceState 
Line 4027: LGU device has EPS only mode in LTE side. So when UE camps on Hedge cell, it needs to enable CS/PS 
Line 4037: PS only mode in LTE side. If we dont set here, RAU will be sent first
Line 4074: Emergency Call Was Attempted....
Line 4114: But Cell Does NOT Support Voice or Emergency Call!!!!!
Line 4139: CSFB Emergency call is triggered: Orignial network mode is NMO1, Set combined RAU with IMSI flag 
Line 4147: CSFB Emergency call is triggered on same LAI, mm_SetLauAfterCsFallbackFlag() 
Line 4153: QRB is triggered about LTE emergnecy call..
Line 4200: SIM Absent, Ignore the message!!!!!
Line 4231:  In PS only support case, MM should send RESUME done indication to URRC  
Line 4243: On ANY PLMN in mm_CheckRrCellIndEmergCase....
Line 4256: In this case, BackGND PLMN_LIST will come when OOS timer expired
Line 4270: LAU has to be performed after Combined RAU rej #7,14 while manual PLMN selection is in progress
Line 4276: Forbidden Plmn Detected in mm_CheckRrCellIndEmergCase....
Line 4303: Forbidden LAI Detected in mm_CheckRrCellIndEmergCase....
Line 4309: Forbidden LAI Detected in << Forbidden Location Areas for Roaming >> Requesting RR(C) to Select Another Cell...
Line 4345: Forbidden LAI Detected in << Forbidden Location Areas for Roaming >>, We Are in an Area With Limited Service, No Cell Selection Necessary, Just Wait Until RR(C) Finds another Cell.... 
Line 4355:  SameRrConnexFailAction = %d
Line 4374: If UE is redirected or handover under UTRAN control any limitation shall be removed...
Line 4378: RR sent a Plmn MM did not ask for and it's not in the Equivalent Plmn List Either....!
Line 4438: MM is in MM_IDLE/NULL during Emerg
Line 4447: Implicitly Detaching
Line 4468:  Moved to Emergency Cell Only 
Line 4482: Different LAI, releasing RR connection
Line 4506: Same LAI but not emergency call so releasing RR connection
Line 4540:  Emeregency Cell Change in Dedicated Mode Not Possibe, FATAL ERROR 
Line 4548:  LU Running Moved to Emergency Cell Wait for Coverage 
Line 4582: Received a Cell Ind in connected Mode Not Allowed 
Line 4620:  SameRrConnexFailAction = %d
Line 4652: Service Available -> Update T3212 (Loc. Upd Period)
Line 4663: T3212 is 0 -> Do Not Run Location Update
Line 4669: T3212 > 0 -> Location Update Shall be Run
Line 4711:  Setting MsOperationMode to MM_MOBILE_CLASS_C on user's request-> %d  
Line 4716: GSM only, Mobile Class C_CS under DSDS configuration, LAU should be performed on NMO I
Line 4721:  GprsServiceAllowed -> %s  
Line 4727: Set GprsServiceAllowed to TRUE
Line 4742:  GprsServiceAllowed -> %s, PS is BARRED  
Line 4773: Changing Network Mode for CS Domain in mm_CheckRrCellIndNetwkMode.... 
Line 4830: Stopping Location Update Timers in Network Mode 1 in mm_CheckRrCellIndNetwkMode.... 
Line 4868:  RR connection for CS only Registration is pending and NMO 1 
Line 4884:  SameRrConnexFailAction = %d
Line 4928: Resetting Loc UPd Attempt Count -> Entering New Cell while in MM_ATTEMPTING_TO_UPDATE....[24.008]-4.4.4.5
Line 4999: mm_lastCsRegRatMode = %d ,mm_lte_Tin = %d
Line 5045:  RESEL_HOLD_REQ Sent to GRR, So not processing GMM Cell Data
Line 5051:  SameRrConnexFailAction = %d
Line 5079: User Has Not Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled... 
Line 5092: User Has Already Requested To Attach to CS Domain in mm_CheckCellIndCsEnabled... 
Line 5097: But Mobile is Not Attached to CS Domain Yet in mm_CheckCellIndCsEnabled... 
Line 5103: Unit Data Ind received, In Attempting to update state when UE is waiting for Cell Ind 
Line 5125: Proceed with other functions because here the available CELL LAI is different than Prev Cell and CS is Allowed
Line 5146: After TAU reject (12,13,15) or (16,17 5times) cell LAI = sim LAI = prev LAI. LAU will be initiated in mm_ProcessMmCellIndMsgAreaReg. 
Line 5178: And Mobile is Already Attached to CS Domain in mm_CheckCellIndCsEnabled... 
Line 5236: Coverage Had Been Lost
Line 5241: We are on Any PLMN So need to Wait for PLMN Search Req Again 
Line 5249: We are Back in the Registered Plmn Area
Line 5259: SIM RAI == Cell Data RAI -> ON_PLMN
Line 5264: SIM RAI != Cell Data RAI -> NOT ON_PLMN
Line 5272: SIM LAI == Cell Data LAI -> ON_PLMN
Line 5277: SIM LAI != Cell Data LAI -> NOT ON_PLMN
Line 5333: We are NOT Back in the Registered Plmn Area
Line 5337: We are in an Equivalent Plmn...Must Perform Registration
Line 5350: CELL_IND came and Service State should be normal service state..
Line 5406: We Are in the Registered Area, i.e. Sim Lai == New Cell Data Lai in mm_ProcessMmCellIndMsgAreaReg 
Line 5414:  Loc Upd Attempt Count > 0 & T3211 is Running. Wait Until it Expires
Line 5428: Sim Lai == NewCellData Lai = CellData Lai, We have NOT Moved from the Registered Area, T3213 Running -> Random Access Failure -> Must enter a new LAI before doing Loc Upd [24.008]-4.4.4.9 Clause (c)
Line 5439:  (SimData == NewCellData) != CellData, We Have Moved Back into the Registered Area
Line 5444:  LocUpd Done after T3211 -> %s 
Line 5458: Either NOT UPDATED or T3213 Expired without doing Loc Upd, i.e. we have re-gained Coverage -> Perform Loc Upd.
Line 5485:  T3212 Timeout detected
Line 5520:  T3211 expired on unexpected condition and we are back in REG AREA
Line 5529:  MM regain coverage on the cell of registered LAI. [24.008]-4.4.4.9 (c)
Line 5658: MO/MT Call is Pending  
Line 5665: Cell Congestion flag is SET, Do not Send Paging Response
Line 5686: We Camp to the Same LA Cell Received From LTE , Proceed with Paging Responce 
Line 5696: UE is on HongKong Network 
Line 5722: We Camp to the Same LA Cell Received From LTE ,Mo Call is Pending Wait for MM EST REQ 
Line 5747: Update status is PLMN_NOT_ALLOWED or LAI_NOT_ALLOWED
Line 5787:  Registered Area NOT detected, i.e. Sim Lai != New Cell Data Lai in mm_ProcessMmCellIndMsgAreaNotReg 
Line 5793:  New cell Detected, Sim Lai != New Cell Lai, != Cell Lai  or first HEDGE cell (IsFromLte : %d)
Line 5814:  LAI Mimatch and after that there is a change of LA or UE was in LTE before, resetting LAI Mismatch Counter
Line 5818:  Start Normal Location Update 
Line 5831: New cell ind with change in parameters received during PS detach, invoke local detach
Line 5851:  No New Cell Detected...Sim Lai != New Cell Lai = Cell Lai 
Line 5861: T3211 RUNNING, Loc Upd Done After T3211 Expiry
Line 5917: AttemptCount > 0, LowerLayerFailCount > 0
Line 5948: Access Enabled in Same LAI, Do LAU/3122 Not Running
Line 5972: MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
Line 5987:  T3212 Timeout detected
Line 6007: No LocUpd Done Until A differnt Cell is Entered or T3212 Expires !
Line 6039: Need to exit cell indication Processing, as RESEL_HOLD is triggered
Line 6050: First Cell Change Detected before T3213 Expiry Refer [1]-4.4.4.9 (c)
Line 6093: Access Enabled in Same LAI, Do LAU/3122 Not Running
Line 6120: MM_CELL_CONG_WAIT_3122_EXP_FLG == TRUE
Line 6261: Authentication Failed or Entered New Area. Iniitate Location Update...
Line 6285: Waiting for RRC EST CNF But cell change Occured,CELL Changed and Moved Back to Prev Cell SIM LAI == CELL LAI
Line 6316: Authentication Failed. RR Connection Already Released, Start Location Update Procedure
Line 6323: RR will throw away the EST REQ, MM Must send location update again
Line 6329: Loc Update After RR Rel Cnf
Line 6351: Authentication Failed. RR Connection Already Released. Nothing to do
Line 6355: Release RR Connection.
Line 6363: mm_GetRrMmRelReqSentFlag - FALSE
Line 6364: mm_GetDsDelayCsIdleEntry = %d
Line 6372: No Change of LAI but authentication failed on same LAI.
Line 6377: No Change of LAI
Line 6384:   New Cell Does not support Loc Upd IMSI Attach -> Abort Procedure
Line 6417: Boom: LAI Not changed ..... 
Line 6433: Even though LAI did not Change, RR will throw away the EST REQ, MM Must send it again
Line 6483: UE had initiated a combined attach procedure to update CS registration in network...and new cell does not operate in network operation mode I
Line 6498: UE had initiated a combined RAU procedure to update CS registration in network...and new cell does not operate in network operation mode I
Line 6532: ...IMSI attach required for registration in the CS domain
Line 6551: ...UE implicitly registered in the CS domain
Line 6565: ...normal LAU required for registration in the CS domain
Line 6595: MSG Contents: %s
Line 6598: LocUp -> %s
Line 6639: Requesting to NS to raise NTF
Line 6652: mm_MmServiceInd.PlmnAttribute -> %d
Line 6663:  mm_GmmNwDetReqFlag = %d
Line 6706: MM in MM_PLMN_SEARCH service state, MM_NORMAL_SERVICE indicated to NS because of CSFB call PLMN Search
Line 6809: PLMN ID= %x %x %x, PsType= %x in CellInfo, GsmDtmSupported = %d
Line 6860:  Plmn Id -> 0x%02X 0x%02X 0x%02X
Line 6877: mm_ps_service_type %d
Line 6882: mm_RegistrationStatusInd.CellId(GSM) %0x
Line 6888: mm_RegistrationStatusInd.CellId(UMTS) %0x
Line 6902: PS DETACH is done Locally
Line 6923: previous Sent Reg info & current Reginfo are same.Not sending info to NS
Line 6931: MM/GMM attach status = %d / %d
Line 6932: Current RAT = %d, Network mode =%d 
Line 6935:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7007: mm_ps_service_type %d
Line 7051: MM/GMM attach status = %d / %d
Line 7052: Current RAT = %d, Network mode =%d 
Line 7053: RejType /RejCause = %d / %d
Line 7054: Attempt count = %d
Line 7057:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7068: 
Line 7207: MSG contents: %s
Line 7240: No Cell Indication received after PSHO, releasing CS CALL Grant
Line 7248: CS procedure is not CS CALL, not expected
Line 7260: Operating Mode change is going.. No cell ind shall be ignored!!!
Line 7282: PLMN List Size in NO CELL IND = %d
Line 7556:  MM Registration Status Cause -> %s 
Line 7568:  GMM Registration Status Cause -> %s 
Line 7724: Cell Data Access Class -> %s 
Line 7738: Cell Data Access Class -> 1. Previous: %s, 2. New: %s 
Line 7756:  Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7767: New Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7785: Previous Cell Data LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 7796: Cell Data LAI For Emergency Camping -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 7814: Previous Cell Data LAI For Emergency Camping-> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X 
Line 7830: Cell Data MM_ATT_ALLOWED_CELL_FLG     -> %s
Line 7837: Cell Data MM_EMERG_CALL_BARRED_FLG    -> %s
Line 7844: Cell Data MM_CELL_CHANGE_CELL_FLG     -> %s
Line 7851: Cell Data MM_RR_NO_SERVICE_CELL_FLG   -> %s
Line 7858: Cell Data MM_DCS_BAND_BIT             -> %s
Line 7865: Cell Data MM_NECI_CELL_FLG            -> %s
Line 7872: Cell Data MM_CELL_SUPPORT_CS_CELL_FLG -> %s
Line 7879: Cell Data MM_CELL_SUPPORT_PS_CELL_FLG -> %s
Line 7887: Cell Data MM_PPAC_ALLOW_CS_PAGING -> %s
Line 7894: Cell Data MM_PPAC_ALLOW_PS_PAGING -> %s
Line 7900: Cell Data MM_ALLOW_CS_REGISTRATION -> %s
Line 7907: Cell Data MM_ALLOW_PS_REGISTRATION -> %s
Line 7914: Cell Data MM_CELL_INFO_VALID_FLG -> %s
Line 7921: Cell Data MM_CELL_DTM_SUPPORTED_FLG -> %s
Line 7927: Request to Display an Inavlid Flag -> 0x%02X in mm_DisplayCellDataFlag
Line 7942: --------------------- Displaying Cell Data Info. --------------
Line 7960:  mm_CellData.T3212 = %d,          mm_GetT3212TimedOutFlg() : %x  
Line 7968: ----------------------------------
Line 7980: 
Line 7984:  New Cell Data Plmn is NOT in any Forbidden Plmn Lists. 
Line 7990:  New Cell Data Plmn is Part of Forbidden Plmn List !! 
Line 7995:  New Cell Data Plmn is Part of GMM Forbidden Plmn List !! 
Line 8000:  New Cell Data Plmn is Part of Forbidden Lai List !! 
Line 8005:  New Cell Data Plmn is Part of Forbidden Regional Lai List !! 
Line 8010:  Plmn Selection Started 
Line 8014: 
Line 8018: Cell Data MM_ATT_ALLOWED_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 8022: Cell Data MM_EMERG_CALL_BARRED_FLG          -> 1. Previous: %s, 2. New: %s
Line 8026: Cell Data MM_CELL_CHANGE_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 8030: Cell Data MM_RR_NO_SERVICE_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 8034: Cell Data MM_DCS_BAND_BIT          -> 1. Previous: %s, 2. New: %s
Line 8038: Cell Data MM_NECI_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 8042: Cell Data MM_CELL_SUPPORT_CS_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 8046: Cell Data MM_CELL_SUPPORT_PS_CELL_FLG          -> 1. Previous: %s, 2. New: %s
Line 8049: Cell Data MM_CELL_DTM_SUPPORTED_FLG          -> 1. Previous: %s, 2. New: %s
Line 8056: Cell Data MM_PPAC_ALLOW_CS_PAGING          -> 1. Previous: %s, 2. New: %s
Line 8060: Cell Data MM_PPAC_ALLOW_PS_PAGING          -> 1. Previous: %s, 2. New: %s
Line 8064: Cell Data MM_ALLOW_PS_REGISTRATION          -> 1. Previous: %s, 2. New: %s
Line 8068: Cell Data MM_ALLOW_CS_REGISTRATION          -> 1. Previous: %s, 2. New: %s
Line 8072: Cell Data MM_CELL_INFO_VALID_FLG          -> 1. Previous: %s, 2. New: %s
Line 8116: RejCause = %s
Line 8253: Network Release version: M.S.C -> %s,          S.G.S.N -> %s
Line 8426: LAI/RAI Changed so need to perform RAU then send CM SERV REQ
Line 8430: Cell Does not Support Voice, Terminating RR Connection.
Line 8441: Not Supported in this Case/It Can process RAU MM State is Fine
Line 8459: mm_CheckMmStatesForNmo1CellInd in State = %s
Line 8466: CS Dedicated Mode Not Expected CELL IND in this Case
Line 8507: IN case of ATTACH REJECT #2 or TAU REJECT #2, MmCause should be considered as NETWORK FAILURE.
Line 8660: 
Line 8684: Cause value received from LTE :  Cause -- NETWORK FAILURE / GmmProcedure : 
Line 8698: Set TIN to P-TMIS when ATTACH/TAU REJECT other than cause #18
Line 8781: mm_AddToForbiddenGmmPlmnList : 0x%x 0x%x 0x%x 
Line 8796: Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Line 8852: Sync Plmn State to MM_ON_ANY_PLMN as per LTE reject #11/13
Line 8923: mm_DecodeCellInfoReqMsg 
Line 8942: MSG Contents: %s
Line 8986:  Restore MM CellData for recovery 
Line 9000:  Setting MM CellData for recovery 
Line 9209:  Cell Band is changed
Line 9216:  Cell Band is changed
Line 9222: The latest CELL MM received is not 2G.
Line 9280: prev Band: %d, Current band: %d
Line 9282:  mm_RrDediCellInd.Arfcn :%d
Line 9291:  mm_RrDediCellInd.CellId -> [0] :%d , mm_RrDediCellInd.CellId -> [1]:%d
Line 9315: Putting MM DATA REQ message in Queue in order to process %s
Line 9334: Keep previous mm_ps_service_type, mm_ps_service_type = %d
Line 9342: RR_DEDICELL_IND, DTM supported on new cell = %d, ps type = %d
Line 9368: RR_DEDICELL_IND, RAU will be initiated.. 
Line 9402: DEDICELL_IND after IRAT HO,  RAI -> %02X %02X %02X %02X %02X %02X
Line 9408: Gmm Service State = %d 
Line 9442: In %s , LAI part in mm_Cell data is changed, In turns it would change RAI, So setting LAU / RAU needed flag 
Line 9445: In %s , LAI part in mm_Cell data is changed setting LAU needed 
Line 9461: In %s , LAI part in mm_GmmCelldata is changed, So setting RAU needed flag 
Line 9480: Resetting TBF Release Actions
Line 9519: 2G DediCellInd.Lai -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 9574: Keep in-service display during abnormal LAU failure
Line 9600: GPRS reg status set to FALSE to prevent unexpected Roaming icon issue 
Line 9615: Set GprsStatus to TRUE during temp RAU failure (<=2)
Line 9641: mm_SetCsCallResumeInd = %d
Line 9659: GS46 Metric queried
Line 9672: PrevStatus =%d, CurrentStatus =%d
Line 9698: Reset data 
Line 9796: Information didn't be changed.
Line 9808: ucFieldValidity = 0x%02X
Line 9809: ucRAC = 0x%02X
Line 9810: ucAccessTech = 0x%02X
Line 9811: ucFreqBand =0x%02X
Line 9813: MCC = 0x%04d, MNC =0x%04d, LAC=0x%04X
Line 9815: CellId = 0x%04X, RNCId =0x%04X
Line 9849: Not supported Band
Line 9877: Not supported Band
Line 9930:  URRC_MM_UNIT_DATA_IND was processed.. It doesn't need to change it..
Line 9951:  URRC_MM_CELL_IND was changed into URRC_MM_UNIT_DATA_IND..
Line 10059:  Resetting Sent Reg Status
Line 10107: %d, %d
Line 10121: %d, %d
Line 10201: CSFB MO/MT Call pending So Making NMO as NMO2 Till we release the CS CALL 
Line 10222: GRR Traffic band ind received, CS connected: %d / PS connected: %d
Line 10264: Wrong Action =%d 
Line 10321:  CELL DB FLAG: %s               -> TRUE
