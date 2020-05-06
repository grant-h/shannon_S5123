Line 244: Serious Problem , could not do state initialisation
Line 405: Security Reconfiguration in Process
Line 419: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 428: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 475: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 484: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 541: Security Reconfiguration in Process
Line 555: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 564: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 602: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 611: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 663: Security Reconfiguration in Process
Line 677: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 686: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 733: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 742: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 772: Transition To Idle From Connected-Mobility-State Initiated
Line 809: rrc_CnxMgrMobility_TransitToIdleForExceptionalHandling
Line 905: Establishment Cause = %d
Line 933: Cell Update: TVI set
Line 937: Cell Update: TVI Not set
Line 942: Cell Update Cause != UL data Tx
Line 1016: Create and Send CellUpdate, wait for CompleteToBuildMsg 
Line 1031: rrc_CnxMgrMobility_CreateAndSendUraUpdate
Line 1128: Response Message sent in the Uplink.
Line 1132: Serious Problem, Couldnt create resonse message
Line 1224: NextUpdate Message sent, wait for CompleteToBuildMsg 
Line 1243: T302ExpiryOrCellReselection Occurred 
Line 1263: RadioLinkFailure Scenario, Both T314&315 have expired, Wait for ResMgr event AllRabsReleased 
Line 1303: V302check failed, preparing to Enter Idle 
Line 1326: Remove ServingCellCacheInfo for this cell(UARFCN%d,PSC%d) because N300 exceed and SIB5 need to be read again
Line 1348: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 1357: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 1426: Tx-CURLC_REDIRECTION_STATUS_IND
Line 1433: FatalError : RedirectionType is unknown(%d)
Line 1447: ConnectionRelease Process failure 
Line 1473: Protocol Error %d detected in connectionrelease 
Line 1481: Hit a Default case which is not currently handled
Line 1489: Serious Problem, Error Occurance, Error Resolution Failure
Line 1515: RRC ConnectionReleasecomplete sent in the uplink , waiting for L2-ACK 
Line 1617: Received UraUpdateconfirm needs a response in uplink 
Line 1651: CellUpdateConfirm needs a response in the uplink 
Line 1698: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 1703: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 1714: [Mobility >> Reselection] No Progress => start to configure DCH from FACH
Line 1754: Failure sending msg to CnxMgr
Line 1788: V302 check passed , Another Update Possible 
Line 1793: V302 check failed , no-more update possible 
Line 1839: C-rnti check failed , there can be another update 
Line 1850: vl_rrcState returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 1870:  isSrns=%d 
Line 1871:  isPdcpEmpty=%d 
Line 1872:  isCipherMode=%d 
Line 1879: Need to wait for L2-ack for the uplink message 
Line 1884: No Need to wait for the L2-ack for the uplink message
Line 2102: SecurityMgr is NULL
Line 2123: Establishment Cause = %d
Line 2130: rrc_CnxMgrMobility: Update process initiated
Line 2158: Cell-selection occurred while waiting for the Confirm message 
Line 2179: RadioLinkFailure Scenario , Both T314&315 have expired, Wait for ResMgr event AllRabsReleased 
Line 2213: V302check failed , preparing to Enter Idle
Line 2304: Connection release received on DCCH , send Release Complete
Line 2311: Connection release on CCCH , no response needed 
Line 2337: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2346: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2450: RrcConnectionEstablishment Succeed on Uarfcn(%d) Cpich(%d) which TxFailParam Validity Timer is running!
Line 2458: [TxFailParam]rrc_Features.SuppTxFailParam(%d) is disabled
Line 2480: CellUpdateConfirm, Transition to CELL_DCH
Line 2492: CellUpdateConfirm, HHO, Transition to CELL_FACH
Line 2524: Due to second cellupdate ,only configure RBs
Line 2556: Happy-CellUpdateConfirm.
Line 2592: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2601: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2629: CellUpdateConfirm to CellPch
Line 2635: CellUpdateConfirm to UraPch
Line 2645: T302ExpiryOrCellReselection
Line 2688: Happy CellUpdateConfirm
Line 2719: unsupported RrcState Enum
Line 2725: vp_state returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 2733: In TDD, NFreq is set to FALSE due to CellUpdateConfirm failure
Line 2757: Errorneous CellUpdateConfirm Recived with %d Prot-Error 
Line 2774: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2783: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2816: Erroneous CellUpdateConfirm, with FailureCause %d  
Line 2832: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2841: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2865: Failuer due to Physical Channel information missing 
Line 2881: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 2890: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 2918: Serious Problem CnxMgrMobility_p error %i is not handled 
Line 2944: Terminate RRC Connection from NAS received while waiting for CUConfirm
Line 3024: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3033: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3086: Default_OutOfService in %d state 
Line 3116: EvaluatingInterFreqCell received while waiting for CUConfirm 
Line 3170: CellReselectionToGsmInProgress received while waiting for CUConfirm
Line 3230: CellReselectionToEutraInProgress received while waiting for CUConfirm
Line 3288: ALL RABS Released 
Line 3301: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3310: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3395: UraUpdateCofirm Received , Trasnsition to CellPch
Line 3400: UraUpdateCofirm Received , Trasnsition to UraPch
Line 3434: Another UraUpdate Needed, may be due to Confirmation Error
Line 3520: Another UraUpdate due to Confirmation Error
Line 3532: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3541: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3566: CellDch Transition specified in UraUpdateConfirm
Line 3593: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3602: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3637: UraUpdateCofirm Received, Trasnsition to Cell FACH
Line 3648: UraUpdateCofirm Received , Sending Response Message
Line 3658: UraUpdateCofirm Received , No Response Needed
Line 3687: Not able to resolve the RRC state Specified
Line 3694: vp_state returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 3717: Protocol Errror %d in UraUpdateConfirm 
Line 3733: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3742: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3774: InvalidConfiguration in UraUpdateConfirm Received
Line 3790: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3799: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3825: Should not end up here because Just specifying transition to Cell-DCH in a Ura Update cnf message leads to  CnxMgrMobility_p error, discuss with dl-msg
Line 3829: This Error cannot happen in UraUpdateCnf message refer 8.3.1.9a of 25.331 , but occurs
Line 3839: Configuration Unsupported cannot happen in UraUpdateCnf message , Read the comment in the code for more info
Line 3850: Serious Problem CnxMgrMobility_p error %i is not handled
Line 3887: [WaitingForUpdateConfirm] ASN.1 Encode Fail => T302 restarted. waiting for a next trial 
Line 3935: WaitingForUpdateConfirm_PreSuspendReq 
Line 3963: WaitingForUpdateConfirm_SuspendReqOnGsmDoneInd 
Line 3991: WaitingForUpdateConfirm_NonUmtsRatCnf 
Line 4008: GenMsg is NULL 
Line 4018: GenMsg is NULL in WaitingForUpdateConfirm_NonUmtsRatCnf
Line 4044: OutOfService when Selecting a Cell in CnxMgrMobility 
Line 4081: SelectingCell_NonUmtsRatCnf
Line 4100: GenMsg is NULL 
Line 4110: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
Line 4136: SelectingCell_PreSuspendReq
Line 4157: SelectingCell_SuspendReqOnGsmDoneInd
Line 4221: TerminateRRCCnx Received
Line 4306: This stack is made to work even if it could not configure common resources
Line 4330: RecvMsgCellUpdateCnf in unexpected state !!!
Line 4336: RecvMsgCellUpdateCnf in unexpected state !!!
Line 4352: RecvMsgUraUpdateCnf in unexpected state !!!
Line 4358: RecvMsgUraUpdateCnf in unexpected state !!!
Line 4396: Could not roll back to the original status Cell-fach
Line 4427: Failure in configuration of RBs 
Line 4438: Serious Problem, ResMgr will not send any security related IEs to Security Manager in CnxMgrMobility_p scenario, but still the security reconfiguration occurs ?
Line 4465: Default case ,not handled
Line 4649: Could not configure common resources
Line 4704: Cellupdate/UraUpdate confirm message is NULL
Line 4739: ignore ReselectionAbortedDone
Line 4751: [ReselectionAbortedDone] wait for ReadSib7CancelledDone
Line 4799: Failure sending msg to CnxMgr
Line 4818: ignore ReselectionAbortedDone
Line 4841: ignore ReadSib7AbortedDone
Line 4853: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 4901: Failure sending msg to CnxMgr
Line 4920: ignore ReadSib7AbortedDone
Line 4949: RLC UnrecoverableReset while Configuring DchLayers due to CellUpdateConfirm 
Line 5073: msg = NULL
Line 5083: ConfiguringDchLayers_ConfigDchLayersCnf[NON FATAL ERROR] CnxMgrMobility_p->CellUpdateCnfMsg = NULL
Line 5097: Cellupdate confirm message is NULL
Line 5121: msg = NULL
Line 5158:  %d Failure while Configuring DchLayers due to CellUpdateConfirm 
Line 5236: Serious disorder in the stack , assuming dch-connected instead of fach
Line 5240: Wrong return value ,not handled
Line 5341: Could not roll back to the original status Cell-fach
Line 5372: New Cfg Layer Fail when configuring Pch Layers 
Line 5383: Serious Problem, ResMgr will not send any security related IEs to Security Manager in CnxMgrMobility_p scenario, but still the security reconfiguration occurs ?
Line 5405: Default case ,not handled
Line 5641: Common configuration in Ura Pch failed, Nothing implemented for CnxMgrMobility_p case as of now
Line 5694: vl_asnstate returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 5726: Could not roll back to the original status Cell-fach
Line 5733: CNX_NEW_CFG_LAYER_FAIL returned .
Line 5740: Security Reconfiguration in Process
Line 5784: Default case ,not handled
Line 5804: HHO Cell-selected 
Line 5840: HHO CellSelectionOn Specified freq failed , wait for any cell to be selected 
Line 5896: T307 which is MD, value is NULL
Line 5940: TerminateRrcCnx received 
Line 5963: SelectingHHOCell_NonUmtsRatCnf 
Line 5980: GenMsg is NULL 
Line 5990: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL
Line 6014: SelectingHHOCell_PreSuspendReq 
Line 6036: SelectingHHOCell_SuspendReqOnGsmDoneInd 
Line 6082: Negative-Acknowledgement for the Uplink-ResponseMessage in Cell-Dch 
Line 6100: Serious Error, Inconsistency , ResMgr doesnt send ilms to Security until complete config confirm message is sent by cnxmgr , transit to idle mode
Line 6147: RadioLinkFailure Occurred while waiting for the L2-ack
Line 6211: Cellupdate confirm message is NULL
Line 6257: Cellupdate confirm message is NULL
Line 6360: TerminateRRCCnx Received
Line 6421: Negative acknowledgement for Update-response in CellFach state 
Line 6508: Negative Acknowledgement for Update-response before transitioning to cellPch
Line 6559: vl_asnstate returned from rrc_DlMsgInitialProcess_getRrcState is NULL
Line 6585: SendingCellUpdateResponsePch_CompleteConfigCnf[NON FATAL ERROR] vl_state = NULL
Line 6634: Negative acknowledgement received for ura-update response 
Line 6715: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 6724: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 6813: Assumption is Ura-update doesnt put UE in CellFach state, CnxMgrMobility_p might change in Future.
Line 6832: Re-entering service area from FachOutOfService state 
Line 6858: use the previous cell update cause(%d) instead of Asn_re_enteredServiceArea
Line 6901: T307 has expired in Fachoutofservice, will enter idle mode henceforth 
Line 6950: FachOutOfService_NonUmtsRatCnf 
Line 6965: GenMsg is NULL 
Line 6975: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 7027: FachOutOfService_PreSuspendReq 
Line 7049: FachOutOfService_SuspendReqOnGsmDoneInd 
Line 7068: FachOutOfService_TerminateRrcCnx  in %d state 
Line 7145: Err: No Saved suspend request
Line 7332: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7341: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7383: SendingRrcCnxRelCompleteUMMode_RecvRrcCnxRelMsg Handling CnxMgrMobility_p message and Freed Dl Msg and Ignored
Line 7435: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7444: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7513: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7522: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7586: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 7595: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 7632: EvaluatingInterFreqCell received while waiting for CUConfirm 
Line 7709: EvaluatingInterFreqCell received while In Not Active State
Line 7730: CellReselectionToGsmInProgressreceived while waiting for SendingRelCompleteAmMode 
Line 7811: CellReselectionToEutraInProgressreceived while waiting for SendingRelCompleteAmMode 
Line 8069: [ReselectionAbortedDone] wait for ReadSib7AbortedDone
Line 8073: [ReselectionAbortedDone] Release ConnectedModeResourcesFromFach
Line 8082: ignore ReselectionAbortedDone
Line 8105: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 8109: [ReadSib7AbortedDone] Release ConnectedModeResourcesFromFach
Line 8118: ignore ReadSib7AbortedDone
Line 8244: T307 value is NULL
Line 8269: Err: No Saved suspend request
Line 8303: [ReselectionAbortedDone] wait for ReadSib7AbortedDone
Line 8307: [ReselectionAbortedDone] start to Release SharedResources
Line 8315: ignore ReselectionAbortedDone
Line 8337: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 8341: [ReadSib7AbortedDone] start to Release SharedResources
Line 8349: ignore ReadSib7AbortedDone
Line 8360: CompleteToBuildMsg : Transit to the saved state (%d)
Line 8381: Default_Sib7Expiry in %d state 
Line 8404: Default_Sib7Expiry in %d state 
Line 8412: SIB7 Timer Restarted
Line 8421: Failure to get SIB7Timer value Freq
Line 8431: Re-starting sib7 timer
Line 8451: Default_T307Expiry in %d state 
Line 8476: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 8485: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 8526: Default_OutOfService in %d state 
Line 8558: Default_TerminateRrcCnx  in %d state 
Line 8587: Default_RrcCnxRelease msg  in %d state 
Line 8619: RLC Unrecoverable Error: Update-response in CellFach state 
Line 8632: vl_activeInstance is null 
Line 8658: RLC Unrecoverable Error: Update-response in CellDch state 
Line 8676: Serious Error, Inconsistency , ResMgr doesnt send ilms to Security until complete config confirm message is sent by cnxmgr , transit to idle mode
Line 8724: RLC Unrecoverable Error: Update-response in CellPch state 
Line 8746: RLC Unrecoverable Error: URA pdate-response state 
Line 8764: [ReselectionAbortedDone] wait for ReadSib7CancelledDone
Line 8773: [ReselectionAbortedDone] start to Release ConnectedModeResFromFACH
Line 8781: ignore ReselectionAbortedDone
Line 8799: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 8808: [ReadSib7AbortedDone] start to Release ConnectedModeResFromFACH
Line 8816: ignore ReadSib7AbortedDone
Line 8841: RadioLinkFailure Scenario , Both T314&315 have expired, Wait for ResMgr event AllRabsReleased
Line 8874: V302check failed , preparing to Enter Idle
Line 8930: Terminate RRC Connection from NAS received while waiting for SIB7
Line 8946: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 8955: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 9002: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 9011: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 9019: Default_OutOfService in %d state 
Line 9116: SIB7 read error - Null SIB7
Line 9125: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 9134: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 9157: SIB7 read error
Line 9166: [Mobility >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 9175: [Mobility >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 9196: SIB7-ReadError %d: ignored
Line 9212: WaitingForUpdateConfirm_PreSuspendReq 
Line 9224: Msg creation error
Line 9242: AwaitingDeactivateServingCell_Deactivated
Line 9258: AwaitingSib7_NonUmtsRatCnf
Line 9895: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 9935: UpdateCause: %d -> %d; Est Cause: %d -> %d 
Line 10029: Default_OutOfService in %d state 
