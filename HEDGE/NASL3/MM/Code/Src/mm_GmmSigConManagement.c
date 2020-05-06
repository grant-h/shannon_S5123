Line 205:  mm_NeedCellIndAfterRelInd -> %d 
Line 232:  mm_NeedGmmRelInd -> %d 
Line 269:  Stopping Timers T3311, T3302 in order to do an Attach Immediately ...[24.008]-4.2.4.2.2
Line 309: Saving Msg for later as GMM is due to service a CELL_IND
Line 321: Msg Not Accepted in this Service State, Rejecting CM Req
Line 327: Saving Msg for later
Line 412: 
Line 417: Initiating GMM Service Req Procedure
Line 429: RAU before uplink signalling/data transmission following intersystem change between cells belonging to same RA
Line 445: Already in PMM_CONNECTED State -> Confirming CM Layer Est Req Immediately
Line 463: Invalid Functional State -> PMM_DETACHED
Line 470: Confirming CM Layer Est Req Immediately
Line 482: GMM_CM_EST_CNF_FLG was already set by (%s) or Nsapi (%d).
Line 543: Saving Msg for later
Line 548: Msg Not Allowed in this State, Rejecting CM Req
Line 622: Unable to Stop HPlmn Search Immediately -> Saving CM Layer Req Msg for Later Use
Line 639: Saving Msg for later
Line 652: Saving Msg for later: SCRI pending
Line 687: Saving Msg for later: Registration ongoing
Line 716: Saving Msg for later: SERVICE_REQ_INIT state
Line 760: URRC_GMM_EST_CNF Not Allowed in PMM_CONNECTED, Ignoring Msg
Line 797: Service_Request here is: %d
Line 801: Service_Request here is: %d
Line 824: EST CNF received in GMM DEREGISTERED State
Line 855: LAU triggered because of CSFB call release
Line 904: Redirection to GSM  is received,
Line 910: Reselection from U2L is received
Line 921: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1056: GMM functional state is not matched with URRC, need to release current RRC connection once again
Line 1070: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 1113: Checking release type : %d
Line 1121: RRC connection is still alive : Will not wait for CELL_IND
Line 1156: T3311 restarted to sync with T3211
Line 1189: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1212: mm_PerformExtraMsgInSameRrFailAction should be reset 
Line 1233: mm_PerformExtraMsgInSameRrFailAction should be reset 
Line 1321: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 1344: Message crossover: URRC_GMM_REL_IND ignored as GMM has already requested release, await URRC_GMM_REL_CNF
Line 1357: Message crossover: URRC_GMM_REL_IND in while in GSM RAT No Need to do Any Actions Keep it as it is
Line 1417: Network redirection to LTE is received, so need not process Same RR connection actions
Line 1549: CS and PS both release, so quick rollback to LTE will be done Immediately:
Line 1722: Not Expected in This State in mm_DecodeGmmAsRelCnfMsg:
Line 1737: CS and PS both release, so quick rollback to LTE will be done Immediately:
Line 1864: Power off detach is pending Hence discarding Attach retrails
Line 1927: Power off detach is pending Hence discarding RAU retrails
Line 2271: 
Line 2310: Fast Return is required to URRC in REL_REQ
Line 2321: Fast Return is required to URRC in REL_REQ
Line 2326: Send GMM REL REQ with REL_REQ_ALL_RESOURCES
Line 2360: REL_REQ sent already, Updating GMM Release Cnf Action.. as no action was set 
Line 2429: Saving Msg for later
Line 2457: 
Line 2472: Update Status : GU1 But Cell RAI != SIM RAI
Line 2473: DataReq Not Allowed
Line 2480: RAU procedure 'interupts' service request procedure...
Line 2517: Service State is GMM_REG_ATTEMPTING_TO_UPDATE, SM will send Data after RAU is done
Line 2548: Data Req Received in incorrect State, Aborting Operations 
Line 2578: SR Triggered for Data Pending in PMM_CONNECTED
Line 2593: DataReq Not Allowed in This State, stored
Line 2716: entered mm_DecodeGmmAsDataCnfMsg   in State = %s
Line 2720: Sending Reject to RABM becaue SR has Failed
Line 2778: GMM Functional state is %s, so ignorning upper layer message 
Line 2826: Network Sent FOP False, But received UnitData Ind for SM So make this Flag False
Line 2844: Network Sent FOP False, But MOD_PDP_CONTEXT is sent by NW while CS call is in progress
Line 2858: Network Sent FOP False, But received UnitData Ind for SMS So make this Flag False
Line 2948: Ignoring GMM_PAGE_IND because MPLMN search is on-going
Line 2984: If GmmPageInd is received, T3346 shall be stopped.
Line 2994: If GmmPageInd is received with IMSI, T3346 shall be stopped.
Line 3082: Access allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is TRUE
Line 3088: Access NOT allowed for Paging Since MM_PPAC_ALLOW_PS_PAGING is FALSE
Line 3133: P-TMSI is Valid -> O.K...
Line 3138: P-TMSI is NOT Valid -> Paging Response Not Allowed
Line 3145: Paging Using IMSI  -> Paging Response Not Allowed
Line 3150: Neither P-TMSI Nor IMSI USed -> ...Paging Response Not Allowed
Line 3156: ServiceState != GMM_NORMAL_SERVICE && ServiceState != GMM_ATTEMPTING_TO_UPDATE_MM -> Paging Response Not Allowed.
Line 3160: Paging Using IMSI -> ...Paging Response Not Allowed.
Line 3165: Incorrect GMM Service State -> ...Paging Response Not Allowed.
Line 3171: GMM SIM State is NOT Valid -> Paging Response Not Allowed.
Line 3176: UpdateStatus == GMM_NO_IMSI_UPD_STATUS -> Paging Response Not Allowed.
Line 3181: Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Line 3186: Current Mobile Operation Mode == MM_MOBILE_CLASS_C_CS -> Paging Response Not Allowed
Line 3191: Access Class Barred -> Paging Response Not Allowed.
Line 3196: PS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Line 3201: We are Already in connected mode, So ignoring Paging indication.
Line 3212: Paging Using IMSI -> ...Paging Response Not Allowed.
Line 3217: Paging During GMM Specific Procedures -> ...Paging Response Not Allowed.
Line 3222: Incorrect GMM State -> ...Paging Response Not Allowed.
Line 3228: RAT suspension has been requested -> ...paging request ignored
Line 3233: Not Attached to PS Domain Yet -> Paging Response Not Allowed.
Line 3346: mm_SendGmmCmEstRejMsg() -> Source: %d, Cause: %d, DiscardStoredRequest: %d
Line 3665: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3705: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3787: Req Not Allowed ->  GmmServiceState Not Correct 
Line 3823: Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE 
Line 3829: Access Allowed for Registration since MM_ALLOW_PS_REGISTRATION is TRUE 
Line 3854: RAI NOT Part of Any Forbidden List  -> OK (9 of 9)
Line 3859: Req Not Allowed ->  RAI Part of Forbidden Lists
Line 3872: Req Not Allowed ->  GMM_PS_ACCESS_NOT_ALLOWED !
Line 3878: Req Not Allowed ->  GMM_RAT_CHANGE_IN_PROGRESS_ERR !
Line 3884: Req Not Allowed ->  GPRS Not Allowed in HPlmn
Line 3890: Req Not Allowed ->  GMM_NOT_REGISTERED_ERR 
Line 3896: Req Not Allowed ->  GMM_COVERAGE_LOST_ERR !
Line 3902: Req Not Allowed ->  GMM_SIM_CONSIDERED_INVALID_ERR 
Line 3908: Req Not Allowed ->  MM_ACCESS_BARRED 
Line 3914: Req Not Allowed ->  GMM_INCORRECT_STATE_ERR ! 
Line 3925: New Cell Data MM_RR_NO_SERVICE_CELL_FLG   -> %s - PS Domain Access Is Not Allowed
Line 4039: User PLMN will be retrieved after URRC_MM_REL_CNF
Line 4044: User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
Line 4063: SUSPEND REQ will be sent after URRC_MM_REL_CNF
Line 4084: 
Line 4094: 
Line 4115: MM is not IDLE handle perform LAU after moving to IDLE
Line 4268: GMM RR Release Cnf Action Name -> %s
Line 4315: GMM CM Layer Error Cause -> %s 
Line 4403: mm_GmmFollowOnRequested -> %d 
Line 4409: mm_GmmFollowOnRequested -> %d 
Line 4416: QuickRollbackStatus %d in mm_DecodeGmmAsReleaseIndMsg
Line 4423: CS and PS both release, so quick rollback to LTE will be done Immediately
Line 4438: WARNING : Fail to turn on FastReturn Status or MM/GMM state is not valid.. (MM state : %d, GMM Functional state : %d) 
Line 4452: RRC requested to stop Quick Rollback! Giving up to rollback to LTE..
Line 4466: Triggering RAU, because it was pended..
Line 4486: LAU triggered because of CSFB call release.
Line 4501: Entering here since LAU is needed due to 3312 expiry
Line 4510: Periodic Location Update is triggered since 3312 was already expired
Line 4518: QRB not ongoing!! Ignore..
Line 4530:  Quick rollback to LTE will be done, so discarding GMM CM request.
Line 4663: Wrong Action =%d 
Line 4691: Set mm_GmmCmReqInProgress = %d 
Line 4697: mm_GmmIntfManagementDb[%d].mm_GmmCmReqInProgress = %d 
