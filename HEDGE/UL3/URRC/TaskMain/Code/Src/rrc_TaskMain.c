Line 462: ERR: initialising to INACTIVE
Line 508: DMM:SetRegistryVars umts_access_mode [%d]
Line 516: SimId is set as Sim2(%d)
Line 521: SimId is set as Sim1(%d)
Line 562: rrc_TaskMain_free 0x%x
Line 593: rrc_TaskMain_init 0x%x
Line 704: [Feature Control] FCI_Name = [%s]  SP_Name = [%s]
Line 1302: [URRC_Recovery_Handling_Enabled] %d
Line 1303: [RecoveryMode] %d (0: RecoveryMode, 1: CrashMode)
Line 1316: gTCS_SMP_LIB[TCS_FCN_OMC] is not DEFINED
Line 1416: ERR: stopping InternalWatcherTimer
Line 1421: >> Exception Ind from low layer: TakMain State %d
Line 1447: Stack ID %d NasSigStartReceived CS domain: %d, PS domain: %d
Line 1453: Exceptional Case: InternalWatcherTimer expired for Stack ID %d
Line 1456: Stack ID %d NasSigStartReceived CS domain: %d, PS domain: %d
Line 1462: InternalWatcherTimerExpired: No IntraFreqMeas -> Skip WD Operation
Line 1470: InternalWatcherTimerExpired: Other SIM CS Connected Established -> Skip WD Operation
Line 1476: InternalWatcherTimerExpired: Other SIM is doing BPLMN, USSD, SMS, etc. -> Skip WD Operation
Line 1531: ERR: starting InternalWatcherTimer
Line 1536: InternalWatcherTimer started(TmId=%d): %i sec
Line 1542: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 1556: ERR: stopping InternalWatcherTimer
Line 1564: ERR: starting InternalWatcherTimer
Line 1569: InternalWatcherTimer started(TmId=%d): %i sec
Line 1575: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 1589: ERR: stopping InternalWatcherTimer
Line 1596: InternalWatcherTimer Not created(TmId=%d, isUtranCommercialPlmnId=%d)
Line 1615: ERROR stopping TimerKeepBplmnOpIRAT
Line 1622: Successfully started TimerKeepBplmnOpIRAT(%d msec)
Line 1626: Could not start TimerKeepBplmnOpIRAT(%d msec)
Line 1641: ERROR stopping TimerKeepBplmnOpIRAT
Line 1648: Successfully started TimerKeepBplmnOpIRAT(%d sec)
Line 1652: Could not start TimerKeepBplmnOpIRAT(%d sec)
Line 1666: rrc_TaskMain_KeepBplmnOpIRATTimerExpiry - Free Keeped Bplmn Operation
Line 1686: TimerKeepBplmnOpIRAT is still running
Line 1702: [rrc_TaskMain_MoveBplmnHandlerToCellSelecterFromTaskMain] Remaining TimerKeepBplmnOpIRAT (%d) msec
Line 1707: ERROR stopping TimerKeepBplmnOpIRAT
Line 3245: ERR: Invalid status response from rrc_ss_Receive
Line 3248: Unexpected message received [MsgId=%i]
Line 3253: ExternalMsg is NULL
Line 3328: *** %s [%s] : EventId %d(%s) from %s %s
Line 3333: *** %s [%s] : EventId %d(%s) %s
Line 3341: *** %s [%s] : EventId %d(%s) from %s %s
Line 3346: *** %s [%s] : EventId %d(%s) %s
Line 3463: Unspecified error processing internal message
Line 3472: [TASKMAIN] InternalQ transition to INACTIVE - flushing internal queue
Line 3503: Equipment mode:- %d
Line 3532: USIM is inserted
Line 3536: USIM is not inserted
Line 3563: URRC_MM_RESUME_RAT_REQ with PSSupport %d, PDPActive %d
Line 3568: [GNSS] Initiating Capability Request 
Line 3572: URRC_MM_RESUME_RAT_REQ with Mode %d
Line 3576: URRC_MM_RESUME_RAT_REQ
Line 3581: ERR: moving from SUSPENDED to ACTIVE
Line 3666: TimerKeepBplmnOpIRAT is running and bplmn_handler exist
Line 3687: ERROR stopping TimerKeepBplmnOpIRAT
Line 3736: URRC_MM_PS_SUPPORT_IND with PSSupport %d, PDPActive %d
Line 3756: URRC_MM_STOP_REQ
Line 3793: USIM is not inserted so IratHandover msg will be created without Security Info
Line 3810: ERR: moving from SUSPENDED to ACTIVE
Line 3844: URRC_MM_BPLMN_LIST_REQ
Line 3848: ERR: moving from SUSPENDED to ACTIVE
Line 3871: ERROR stopping TimerKeepBplmnOpIRAT
Line 3899: ERROR stopping TimerKeepBplmnOpIRAT
Line 3931: ERROR stopping TimerKeepBplmnOpIRAT
Line 3958: ERROR stopping TimerKeepBplmnOpIRAT
Line 3976: [NW_SCAN] NwScanMode %x
Line 4010: [URRC_ANR]: MM_URRC_PREPARE_CGI_REQ received
Line 4014: [URRC_ANR]: ERR: moving from SUSPENDED to ACTIVE
Line 4055: URRC_MM_INIT_REQ in SUSPENDED
Line 4095: URRC_MM_UPDATE_DUPLEX_MODE_IND with Mode %d
Line 4103: LCSM_URRC_POS_CAP_RSP in SUSPENDED
Line 4109: LCSM_URRC_POS_CAP_IND in SUSPENDED
Line 4124: Unexpected message in SUSPENDED [MsgId=%i]
Line 4154: Defer count reaches Qsize(%d) msgid(%d)
Line 4246: Unspecified error processing internal message FSM_Status(%d) DestInst(0x%x) EventId(%d)
Line 4262: [TASKMAIN] InternalQ transition to SUSPSENDED or INACTIVE - flushing internal queue
Line 4286: Equipment mode:- %d
Line 4368: GRR_URRC_READ_PRED_CONF_REQ ignored - only supported in SUSPENDED
Line 4417: ERR: Message from undefined layer %d received at URRC
Line 4427: %s
Line 4456: URRC_MM_INIT_REQ
Line 4460: PhyInitDone
Line 4465: ERR: moving from INACTIVE to SUSPENDED
Line 4479: DMM:SetRegistryVars umts_access_mode [%d]
Line 4491: ERR: creating InternalWatcherTimer
Line 4498: Failed to create TimerKeepBplmnOpIRAT
Line 4501: E-Call Feature: During MM_INIT_REQ, not reading SIM Params
Line 4503: Getting URRC_MM_INIT_REQ to Set RegistryVars
Line 4517: wait for PhyInitDon Ind
Line 4528: PhyInitDone
Line 4539: ERR: moving from INACTIVE to SUSPENDED
Line 4553: DMM:SetRegistryVars umts_access_mode [%d]
Line 4565: ERR: creating InternalWatcherTimer
Line 4572: Failed to create TimerKeepBplmnOpIRAT
Line 4575: E-Call Feature: During MM_INIT_REQ, not reading SIM Params
Line 4577: Getting CUPHY_INITDONE_IND to Set RegistryVars
Line 4593: Unexpected message in INACTIVE [MsgId=%i]
Line 4705: rrc_Recv_PSSupportInd: Message Creation Failed
Line 4711: rrc_Recv_PSSupportInd()-ReleaseCnx MsgNotSent
Line 4718: URRC_MM_PS_SUPPORT_IND with PSSupport %d, PDPActive %d
Line 6143: Getting MMPLMNUpdateReq to Set Registry Vars
Line 6185: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 6200: Msg is NULL. Cannot Signal AbortDetection to Bplmn 
Line 6209: TDD and FDD bplmn_handler is NULL. Cannot Signal AbortDetection to Bplmn
Line 6352: [TASKMAIN] ACTIVE to SUSPENDING as Uncoditional Suspend Req (IsConnected = %d)
Line 6359: ERR: moving from ACTIVE to SUSPENDING
Line 6374: ERR: moving from ACTIVE to SUSPENDING
Line 6465: ERR: moving from ACTIVE to SUSPENDING
Line 6482: ERR: moving from ACTIVE to SUSPENDING
Line 6494: %s
Line 6498: WatcherDetected (%d) is set to TRUE for MMSuspendReq
Line 6532: Active_MMResumeDoneGsmInd
Line 6536: ERR: MsgPtr is NULL
Line 6577: UpdateUsimParamsReq msg is NULL
Line 6583: ERR: moving to STOPPING
Line 6619: Stored BPLMN Search Info %d Uarfcn 
Line 6679: Poweroff Store StoredFreqDb SIM2 TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6690: Poweroff Store StoredFreqDb TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6712: Poweroff Store StoredFreqDb SIM2 at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6723: Poweroff Store StoredFreqDb at Index[%d]: Freq[%d] PLMN[0x%X]
Line 6736: NumLastusedNeighborFreq %d is being updated to pal_ERegId_URRC_Tdd_last_used_neighbor_freq
Line 6755: NumLastusedNeighborFreq %d is being updated to pal_ERegId_URRC_last_used_neighbor_freq
Line 6851: Same as Registry: Registry is updated as StoredBands
Line 6854: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6893: Not as same as Registry
Line 6896: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6907: MaxBand(%d), MaxBandInReg(%d)
Line 6910: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6938: MaxBand(%d), Adding BandId(%d)
Line 6942: BandId(%d) is not disabled
Line 6970: Same as Registry: Registry is updated as StoredBands
Line 6983: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 6988: Not as same as Registry
Line 6991: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 7002: MaxBand(%d), MaxBandInReg(%d)
Line 7005: StoredBands[%d]=%d, StoredBandsInReg[%d]=%d
Line 7027: BPLMN: Deleting BPLMN inst
Line 7037: BPLMN: Deleting Tdd BPLMN inst
Line 7047: ERR: moving from SUSPENDING to SUSPENDED
Line 7073: BPLMN: Deleting BPLMN inst
Line 7082: BPLMN: Deleting Tdd BPLMN inst
Line 7121: UpdateUsimParamsReq msg is NULL
Line 7127: ERR: moving to STOPPING
Line 7205: ERR: wrong SavedState %d
Line 7969: UpdateUsimParamsReq msg is NULL
Line 7975: ERR: moving to STOPPING
Line 7996: ERR: moving from SUSPENDING to SUSPENDED
Line 8015: ERR: moving from SUSPENDING to SUSPENDED
Line 8039: ERR: moving to INACTIVE
Line 8059: ERR: deleting InternalWatcherTimer
Line 8068: ERR: deleting TimerKeepBplmnOpIRAT
Line 8135: ERR: moving to INACTIVE
Line 8158: ERR: deleting InternalWatcherTimer
Line 8167: ERR: deleting TimerKeepBplmnOpIRAT
Line 8230: CNXMGRSuspendCNF is NULL
Line 8252: SuspendFromPreSuspend is NULL
Line 8269: UsimReadParamsDoneInd is NULL
Line 8286: UsimReadParamsDoneInd is NULL
Line 8309: InternalSuspendReq is NULL
Line 8333: MMResumeDoneGsmInd is NULL
Line 8355: StopReq is NULL
Line 8382: Request to LTE for the EUTRA UE Capabilty with NULL PLMN ID(0x%X, 0x%X, 0x%X)
Line 8401: UpdateCsgListReq for TddCellSelecter
Line 8409: UpdateCsgListReq for FddCellSelecter
Line 8418: UpdateCsgListReq for FddCellSelecter
Line 8480: SIM_RRC_UPDATE_RSP
Line 8485: SIM_RRC_UPDATE_PARAM_RSP
Line 8489: HandleUsimCnf: unexpected ExternalMsgId %d
Line 8498: HandleUsimCnf: msg is NULL
Line 8509: URRC_MM_QRB_MODE_UPDATE_IND with Mode %d
Line 8519: SupportOfQrbOmcValue %d
Line 8523: QRB is enabled as default
Line 8551: >> [Feature Control] REGISTRY base <<
Line 8555: [CPC][FDPCH] %d
Line 8557: [CPC][E-FDPCH] %d
Line 8559: [CPC][UlDtx] %d
Line 8561: [CPC][SlotFormat4] %d
Line 8565: [U2L HO][IratHoToEutra] %d
Line 8567: [U2L HO][EutraMeasReportInConnected] %d
Line 8569: [U2L HO][EutraMeasureInCellFach] %d
Line 8575: [ECFACH][EC-FACH] %d
Line 8577: [ECFACH][EC-FACH DRX] %d
Line 8584: >> [Feature Control] COMMON <<
Line 8588: [UTRAN APBCR] %d
Line 8592: [GNSS] %d
Line 8596: [CSG] %d
Line 8601: [AP VOLTE SRVCC] %d (Tcs only)
Line 8605: [MAC-ehs] %d (Reg only)
Line 8609: [MultiCell][MultiCellSupport] %d
Line 8614: [MultiCell] NumSupportedDlHsCells (%d)
Line 8615: [MultiCell][%dC-HSDPA] Supported 
Line 8620: [AGPS by AP] %d (Reg only)
Line 8624: [EUTRA MFBI] %d (Reg only)
Line 8627: [CPC][HS-SCCHLess] %d
Line 8631: [TxFailParam Handling] %d
Line 8635: [BlackList Handling] %d
Line 8639: [PConflict] %d (Reg only)
Line 8643: [LteMru] %d (Reg only)
Line 8649: [Rach Fail BlackList] %d (Reg only)
Line 8655: SuppBlackList = %d, so forcely setting SuppRachFailBlackListCell = %d
Line 8704: >> [OMC Feature Control Start] <<
Line 8705: After Updating OMC Feature Control Registry value to rrc_Features
Line 8711: [OMC][CPC][FDPCH] %d (tmpFeatureValue %d)
Line 8718: [OMC][CPC][E-FDPCH] %d (tmpFeatureValue %d)
Line 8726: [OMC][CPC][UlDtx] %d (tmpFeatureValue %d)
Line 8728: [OMC][CPC][SlotFormat4] %d (tmpFeatureValue %d)
Line 8735: [OMC][CPC][HS-SCCHLess] %d (tmpFeatureValue %d)
Line 8736: [OMC][CPC][HS-SCCHLess] HS-SCCHLess not supported in UE
Line 8743: [OMC][ECFACH][EC-FACH] %d (tmpFeatureValue %d)
Line 8750: [OMC][ECFACH][EC-FACH DRX] %d (tmpFeatureValue %d)
Line 8757: [OMC][U2L HO][IratHoToEutra] %d (tmpFeatureValue %d)
Line 8764: [OMC][U2L HO][EutraMeasReportInConnected] %d (tmpFeatureValue %d)
Line 8767: >> [OMC Feature Control End] <<
Line 8817: OMC_Registry[%i] %i
Line 8842: Asserted condition : (%s) ==>(%s,%d)
Line 8845: [rrc_Debug_Assert] result of function pal_SmIntDisable = %d
Line 8892: Asserted condition : (%s) ==>(%s,%d)
Line 8895: [rrc_Debug_Assert] result of function pal_SmIntDisable = %d
Line 8981: MMSUSPENDREQ is NULL
Line 9002: Request to LCSM for UE positioning Capabilty
Line 9050: WatcherDetected %d for NasPlmnSeareReq during peer stack NAS_SIGNALLING_ONGOING
Line 9063: [PConflict] StackPsSupport %d, IsPDPActive %d
Line 9070: [PConflict] PagingConflictApplied %d
Line 9077: [PConflict] PagingConflictApplied %d
Line 9116: Initialize Clear MRU Info from Runtime Variable at SIMID %d
Line 9153: Initialize StoredFreqDb SIM2 TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9160: Initialize StoredFreqDb TDD at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9175: Initialize StoredFreqDb SIM2 at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9182: Initialize StoredFreqDb at Index[%d]: Freq[%d] PLMN[0x%X]
Line 9192: pal_ERegId_URRC_Tdd_last_used_neighbor_freq is being initialized
Line 9209: pal_ERegId_URRC_last_used_neighbor_freq is being initialized
Line 9238: Adding Msg[%x] to Queue
Line 9275: UL Msg Queue being processed
Line 9284: FreeBuff failed in HandleMsgQ
Line 9286: Removing Ref Msg[%x] from Queue
Line 9305: FreeBuff failed in HandleMsgQ
Line 9307: Removing Ref Msg[%x] from Queue
Line 9326: Freeing Unfreed Msg[%x] from Queue
Line 9331: FreeBuff failed in EnteringIdle
Line 9363: URRC_MM_SIM_READ_REQ
Line 9371: URRC_MM_SIM_READ_REQ
Line 9376: Sending Register Req to USIM and Triggering Reading of SIM Params
Line 9387: USIM instance NULL, SIM_READ_REQ is not performed.
Line 9392: USIM is not inserted, SIM_READ_REQ is not performed.
