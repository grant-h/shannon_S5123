Line 288: CnxMgrConn initialised
Line 354: CnxMgrConn_init: FailState
Line 453: Unknown RR Solicited message %i received
Line 461: Layer %d has sent unexpecting Solicited message %i 
Line 550: In Cell-dch could not retrieve the RL info 
Line 558: [NON FATAL ERROR]RL > RRC_MAX_RL 
Line 700: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 705: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 712: [Connected >> Reselection] No Progress => start to configure DCH from FACH
Line 816: Camped On Acceptable Cell : Nas Will Trigger the Further Search
Line 838: Err: No Saved suspend request
Line 898: Err: No Saved suspend request
Line 993: vl_instId = NULL
Line 1030: Failure to get TSIB7 value
Line 1064: Msg = NULL
Line 1069: FachEntryActions: Sending ReleaseBgPchResources to ResourceMgr
Line 1089: [rrc_CnxMgrConn_FachEntryActions]NFreqSettingReceived is FALSE
Line 1106: FachEntryActions: SecMgrInst = NULL
Line 1171: UlResourcesGranted to CS Scnx will be sent by UlUtranMsg
Line 1216: FachEntryActions: SecMgrInst = NULL
Line 1227: SendUrrcMmScellAsInfoInd : BandId(%d), Uarfcn(%d), RrcState(%d)
Line 1231: Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
Line 1282: Msg = NULL
Line 1301: Msg = NULL
Line 1317: Msg = NULL
Line 1335: Msg = NULL
Line 1346: Msg = NULL
Line 1359: Msg = NULL
Line 1446: [rrc_CnxMgrConn_IdleEntryActions]NFreqSettingReceived is FALSE
Line 1557: Use the previous cell update cause(%d) instead of cell reselection
Line 1564: URA Identity changed in Ura-Pch
Line 1590: BchReadError while reading sib2
Line 1620:  Error Event when reading SIB2 ,  No action taken
Line 1645: BchReadError while reading sib2
Line 1674: Error Event when reading SIB2,	No action taken
Line 1701: MALLOC FAILURE: RPLMN NlowList
Line 1707: MALLOC FAILURE: RPLMN NUpperList
Line 1737: Request for Starting Inter-Freq Cell-Reselection
Line 1770: Implicit Release of SCNX
Line 1778: non-existing SCNX
Line 2045: Non-existing SCNX
Line 2066: Non-existing SCNX
Line 2106: SendingtheResponseMsg: RbControlResponse = NULL
Line 2171: Ordered Flag is conditionally reset
Line 2207: Confirmation ERR, SIB2 available
Line 2234: rrc_MIB_IsSchedulingInfoComplete return FALSE, Remove Cached SIBs
Line 2245: Confirmation ERR, SIB2 Not Scheduled
Line 2301: [rrc_CnxMgrConn_PchEntryActions]NFreqSettingReceived is FALSE
Line 2367: L2-Ack needed for Uplink response
Line 2372:  L2 Ack Not needed for Uplink response
Line 2378: RbControlMsg is NULL
Line 2466: RbControlMsg was freed
Line 2560: SendingPchconfigResponseInProgress
Line 2648: [U2L DEBUG] Rx-CUPHY_EUTRA_CELLINFO_UPDATE_IND
Line 2652: [U2L DEBUG] Rx-CUPHY_EUTRA_CELLINFO_UPDATE_IND is NULL
Line 2679: Repost RecvRrcCnxRelMsg - DefaultState_RecvRrcCnxRelMsg()
Line 2755: ReleaseCnx: MsgNotSent
Line 2761: failed to create Msg
Line 2795: CnxMgrConn_p->RbControlMsg is NULL
Line 2836: FreqInfo IE is Present
Line 2872: FreqInfo IE Not Present 
Line 2939: Failure sending msg to CnxMgr
Line 3015: Wrong Target state(%i)
Line 3031: In TDD, NFreq is set to FALSE due to RbControlMsg failure
Line 3062: Failure cause %d in Cell-FACH
Line 3094: Wrong Failure Cause(%i)
Line 3101: Error %i is not handled
Line 3133:  cell-reselection occurred in cellfach state
Line 3172:  OOS in Fach state 
Line 3197: Cell-Reject by NAS	in cell-fach state
Line 3239: t305 periodic cellupdate to be triggered in fach 
Line 3278: CnxRelease received in fach 
Line 3310: Tx-URRC_MM_REDIRECTION_STATUS_IND [TargetRat %d] (0: Unknown, 1: EUTRA, 2: GSM)
Line 3316: Tx-CURLC_REDIRECTION_STATUS_IND
Line 3323: FatalError : RedirectionType is unknown(%d)
Line 3398: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3407: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3516: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 3525: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 3556: Wrong Error Cause
Line 3574: Error Resolution Failure
Line 3706: Wrong Failure Cause
Line 3713: Internal Procesing error
Line 3736: Security Fatal Error due to incompatible SECURITY CAPABILITIES 
Line 3761:  SYSINFO has been changed in cellfach state 
Line 3785:  Unrecoverable Error occurred in fach state 
Line 3834:  Request for Interfrequency cell-reselection in CellFach state 
Line 3873: cell-reslection to GSM shall be initiated 
Line 3902: FachOutOfService_PreSuspendReq 
Line 3948: FachOutOfService_SuspendReqOnGsmDoneInd 
Line 3999: GenMsg is NULL 
Line 4009: GenMsg is NULL 
Line 4099: SelectingNewCell_PreSuspendReq 
Line 4122: SelectingNewCell_SuspendReqOnGsmDoneInd 
Line 4210: Failure to get TSIB7 value
Line 4229: BCH read error in FACH 
Line 4240: SIB7 ReadError %d: ignored
Line 4262:  SIB7Expiry ignored in the state %d 
Line 4284: SIB7Expiry ignored due to Cell Reselection
Line 4292: Failure to get TSIB7 value
Line 4302: re-starting TSIB7
Line 4308: SIB7Expiry Handled in state %d
Line 4342: RB-Control Msg received in dch state 
Line 4348: CnxMgrConn_p->RbControlMsg is NULL
Line 4437: Not enough time for AS Signaling grant
Line 4446: Failure sending msg to CnxMgr
Line 4510: Serious Problem this state  %i is not handled
Line 4584:  with Failure Cause %d 
Line 4615: Serious Problem this error %i is not handled
Line 4623: Serious Problem this error %i is not handled
Line 4666: Radio Link failure in DCH and No RAB Timers  
Line 4684: Radio Link Failure , NO RABS or timers exists : RESMGR_TIMER_NONE 
Line 4732: Err: No SavedSuspendReq
Line 4825: Tx-URRC_MM_REDIRECTION_STATUS_IND [TargetRat %d] (0: Unknown, 1: EUTRA, 2: GSM)
Line 4831: Tx-CURLC_REDIRECTION_STATUS_IND
Line 4838: FatalError : RedirectionType is unknown(%d)
Line 4888:  with Protocol Error  %d 
Line 4913: un-handled Error Error case hit
Line 4929: Not able to resolve the Error Cause
Line 4993: Unrecoverable Error in DCH and No RAB Timers  
Line 5006: Unrecoverable Error , some RABS with associated timers active  
Line 5017: Selecting another cell on Freq %d  
Line 5091:  Incompatible simultaneous reconfiguration occurred 
Line 5114: Unforeseen error
Line 5129: Serious Problem, Internal Procesing error at: could not resolve the error 
Line 5152: ULPhyCHCntrlMsg received in dch state 
Line 5170: Asn_uplinkPhysicalChannelControl not received!!
Line 5187:  with Failure Cause %d 
Line 5190: Serious Problem this error %i is not handled
Line 5198: Serious Problem this error %i is not handled
Line 5226:  All Dedicated Resources released for HHO 
Line 5383:  Common resources released due to Inter-Freq-cellreselection request
Line 5463:  Common resources released due to HHO 
Line 5553: Rel_EstReq: FailState
Line 5559:  cell-reselection in CellPch or Ura-Pch occurred 
Line 5607:  use the previous cell update cause(%d) instead of cell reselection
Line 5687: Rel_EstReq: FailState
Line 5693:  OOS in PCH 
Line 5760: Rel_EstReq: FailState
Line 5938: Rel_EstReq: FailState
Line 5944: T305 expired in PCH 
Line 5951: use the previous cell update cause(%d) instead of periodical cell update
Line 6011: Rel_EstReq: FailState
Line 6026: BCH read error in PCH 
Line 6077: Rel_EstReq: FailState
Line 6139: Rel_EstReq: FailState
Line 6172:  use the previous cell update cause(%d) instead of cell reselection
Line 6233: Rel_EstReq: FailState
Line 6239: CU will be done after SIB7Received, Ignore CommonChannelChangeInd
Line 6295: Rel_EstReq: FailState
Line 6301:  Paging Recd in PCH 
Line 6308: use the previous cell update cause(%d) instead of paging response
Line 6377: Rel_EstReq: FailState
Line 6436: Rel_EstReq: FailState
Line 6467: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 6476: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 6559: Rel_EstReq: FailState
Line 6605: Rel_EstReq: FailState
Line 6613: CnxMgrConn->IrProcedure %d
Line 6649: CnxMgrConn->IrProcedure %d
Line 6720:  Fach layers  for  configured 
Line 6812:  could not configue fach resources and layers for the new config
Line 6837: RAB rejected 
Line 6909: Serious Problem this return value	%i is not handled
Line 6945:  Fach resources  for HHO scenario or Dch->fach configured 
Line 7122: Serious Problem this return value	%i is not handled
Line 7163:  Fach resources  for HHO scenario or Dch->fach configured 
Line 7292: Serious Problem this returnvalue   %i is not handled
Line 7317: [ReselectionAbortedDone] wait for ReadSib7CancelledDone
Line 7327: [ReselectionAbortedDone] start to configure DCH from FACH
Line 7332: ignore ReselectionAbortedDone
Line 7355: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 7365: [ReadSib7AbortedDone] start to configure DCH from FACH
Line 7370: ignore ReadSib7AbortedDone
Line 7447: msg = NULL
Line 7516:  Failure to configure DCH from Fach  
Line 7567:  Failure to configure DCH from Fach because of no DSRC Grant  
Line 7595: Serious Problem this return value  %i is not handled
Line 7613: OOS: RL Failure while  configure DCH from FACH	
Line 7645: RLF while configuring DCH Layer from FACH and No RAB Timers
Line 7662: RLF while configuring DCH Layer from FACH and RAB still exists
Line 7692: resetting Ordered Flag is conditionally
Line 7768: Radio Link failure while configuring PCH Layer from DCH and No RAB Timers  
Line 7851: ERR: ConfiguringDchLayersFromDch_ConfigDchLayersCnf got the NULL pointer...
Line 7997: msg = NULL
Line 8067: [DM Update] EventType(HANDOVER_FAIL %d), Cause(U2U %d)
Line 8083: Rollbak fails ,so Transition to Idle
Line 8124: [DM Update] EventType(HANDOVER_FAIL %d), Cause(U2U %d)
Line 8146: RLF in rollback and No RAB Timers
Line 8159: rollbak fails , some RABS with associated timers active  
Line 8237: HHO Failed so Rollback is proceeded
Line 8246: HHO Failed so Rollback is proceeded
Line 8290: Wrong return value ,not handled
Line 8344: Unrecoverable Error in DCH and No RAB Timers  
Line 8357: Unrecoverable Error , some RABS with associated timers active  
Line 8368: Selecting another cell on Freq %d  
Line 8384: ERR: ConfiguringDchLayersFromDch_ConfigDchLayersCnf got the NULL pointer...
Line 8407:  Failure to configure ULPhyCHCntrl Msg
Line 8419: Serious Problem this return value  %i is not handled
Line 8493: RbControlMsg was freed
Line 8512: RbControlMsg was freed
Line 8553: RbControlMsg was freed
Line 8569: Serious Problem this return value  %i is not handled
Line 8615: RLF while configuring PCH Layer from DCH and No RAB Timers
Line 8742: Serious Problem this retrun value  %i is not handled
Line 8809: IFreqReselection = %d
Line 8814: Camp On an Acceptable cell
Line 8832: Camp On an Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN/Acting PLMN
Line 8840: Camp On an Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN
Line 8854: use the previous cell update cause(%d) instead of cell reselection
Line 8888: T315Expiry: All RABs of CN Domain %x released
Line 8931: T314Expiry: All RABs of CN Domain %x released
Line 8996: SCNX is RELEASING state
Line 9002: SrcInstId(%s, 0x%X) != ExpectedInstId(%s, 0x%X)
Line 9013: SrcInstId(%s, 0x%X) == ExpectedInstId(%s, 0x%X)
Line 9028: SCNX is RELEASING state
Line 9034: SrcInstId(%s, 0x%X) != ExpectedInstId(%s, 0x%X)
Line 9045: SrcInstId(%s, 0x%X) == ExpectedInstId(%s, 0x%X)
Line 9089: RLF: T314/T315 Expired
Line 9306: SysInfo in ServingCellDB is not latest => Clearing the ServingCell Information
Line 9486: [ECELL_FACH] Valid HRNTI [%d] and CRNTI[%d] present
Line 9524: No RBMap for CellFachState ,so Transition to Idle
Line 9565: CnxMgrConn_p->RbControlMsg = NULL
Line 9612: CnxMgrConn_p->RbControlMsg = NULL
Line 9650: should not be expecting the state %d  in Handover and CellSelection 
Line 9656: RbControlMsg = NULL
Line 9686: GenMsg is NULL 
Line 9696: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 9790: GenMsg is NULL 
Line 9800: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL  
Line 9980:  use the previous cell update cause(%d) instead of cell reselection
Line 10138: Upgrade CU cause from %d to UlDataTransmission
Line 10143: EST cause from %d to %d
Line 10180: rrc_CnxMgrConn: ConfigSubsequentFachCnf CUU cause set
Line 10287: RrcPendingState is already Idle and Cause is set to AbnormalProcedure
Line 10297: failed to configure FACH/RACH while sending RRC Conn Rel Complete 
Line 10308: failed to configure FACH/RACH while sending RRC Conn Rel Complete 
Line 10316: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 10325: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 10347: This stack is made to work even if it could not configure common resources
Line 10552: RLFailed so saved RRC Connection Release will be processed
Line 10630: RbControlResponse is NULL in SendingDchConfigResponse_RlcAmDataCnf
Line 10642: L2Nack of RbControlResponse was received
Line 10741: CnxMgrConn_p->RbControlMsg is NULL
Line 10757: Deferred RecvRrcCnxRelMsg was processed successfully
Line 11148: Serious Problem this state	%i is not handled
Line 11185: Failed to Generate Function to rrc_CnxMgrMobility
Line 11207: During Inter-F reselection trigger CellUpdate with old cellupdate cause(%d)
Line 11248: cell-reslection to GSM shall be initiated 
Line 11288: PerformingCellUraUpdate_ReleaseCnx(): MsgNotSent to CnxMgr
Line 11408: NewCellSelected Msg is NULL
Line 11478: Camp On an Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN/Acting PLMN
Line 11486: Camp On an Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN
Line 11550:  use the previous cell update cause(%d) instead of cell reselection
Line 11574: use the previous cell update cause(%d) instead of re-entered service area
Line 11690: FachOutOfService_PreSuspendReq 
Line 11712: FachOutOfService_SuspendReqOnGsmDoneInd 
Line 11750: PchOutOfService_NonUmtsRatCnf 
Line 11768: GenMsg is NULL 
Line 11778: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 11837: L2ACK received after UnRecoverableError : Ignore L2ACK since ResMgr will in process of UnRecoverableError 
Line 11996: Serious Error, outofservice  in Dch state 
Line 12031: [FachOutOfService] NewCellSelected
Line 12054: Camp On an Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN/Acting PLMN
Line 12062: Camp On an Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN
Line 12074: use the previous cell update cause(%d) instead of re-entered service area
Line 12150: [FachOutOfService 1] send CONFIGFACHRESOURCESANDLAYERS
Line 12196: [FachOutOfService 2] send CONFIGSUBSEQUENTFACHRESOURCES
Line 12228: [FachOutOfService 3] send CONFIGSUBSEQUENTFACHRESOURCES
Line 12257: [FachOutOfService 4] send CONFIGSUBSEQUENTFACHRESOURCES
Line 12262: Should not end up here 
Line 12286: use the previous cell update cause(%d) instead of radio link failure
Line 12300: [FachOutOfService 4] send CONFIGSUBSEQUENTFACHRESOURCES
Line 12577: Rel_EstReq: FailState
Line 12645: Rel_EstReq: FailState
Line 12776: This stack is made to work if it could not configure pch resources
Line 12817:  Cell_reselection occurred while CnxMgr is still waiting for L2Ack 
Line 12833:  Cell_reselection occurred while ResMgr is still releasing the lower layers.
Line 12891: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 12900: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 12990: Unrecoverable Error while sending RRC Conn Rel Complete 
Line 13004: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 13013: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 13083: [OutOfService] RrcPendingState is already Idle and Cause is set to AbnormalProcedure
Line 13093: OutOfService while sending RRC Conn Rel Complete 
Line 13102: OutOfService while sending RRC Conn Rel Complete 
Line 13110: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 13119: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 13188: [OutOfService] RrcPendingState is already Idle and Cause is set to StartOfConnectionRelease
Line 13198: TWaitRelCompleteCnf Expiry while sending RRC Conn Rel Complete 
Line 13207: TWaitRelCompleteCnf Expiry while sending RRC Conn Rel Complete 
Line 13215: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 13224: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 13251: NAS trigerred Suspend while there is no PS/CS and still rrcCnxRel is being processed
Line 13328: Redirection:: FREQ
Line 13332: Redirection:: IRAT
Line 13336: Redirection:: wrong type
Line 13380: Serious Error , could not retrieve the N308 value
Line 13406: Redirection:: FREQ
Line 13410: Redirection:: IRAT
Line 13414: Redirection:: wrong type
Line 13471: SendingRrcCnxRelCompleteUMMode_RecvRrcCnxRelMsg Handling this message and Freed Dl Msg and Ignored
Line 13496: SendingRrcCnxRelCompleteUMMode_RecvRrcCnxRelMsg Handling this message and Freed Dl Msg and Ignored
Line 13535: Redirection:: FREQ
Line 13539: Redirection:: IRAT
Line 13543: Redirection:: wrong type
Line 13553: Unrecoverable Error while sending RRC Conn Rel Complete 
Line 13756: Rel_EstReq: FailState
Line 13823: Rel_EstReq: FailState
Line 13856: TerminateRrcCnx so saved RRC Connection Release will be processed
Line 13986: RLF while configuring PCH Layer from DCH and No RAB Timers
Line 14018: Inconsistency Radio link Failure in non-Dch state
Line 14068: RLF while waiting for L2ACK of utranMobilityInformationConfirm and No RAB Timers
Line 14103: UMSendingResponse_RadioLinkFailure: Inconsistency Radio Link Failure in non-Dch state
Line 14122: Radio Link failure in DCH and No RAB Timers  
Line 14162: Radio Link failure in DCH and No RAB Timers  
Line 14368: Could NOT Process UM-Info Successfully
Line 14416: [UMConfiguringJustLayers_ConfigDchLayersCnf] CnxMgrConn_p->RbControlMsg is NULL
Line 14734: RLFailed so saved RRC Connection Release will be processed
Line 14853: Unrecoverable Error while configuring PCH Layer from DCH/FACH and No RAB Timers	
Line 14871: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 14880: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 14917: Unrecoverable Error while configuring PCH Layer from DCH/FACH and some RAB Timers active 
Line 14932:  Unrecoverable Error occurred in SendingPchConfigResponse state 
Line 15011: [U2L DEBUG] Tx-CUPHY_EUTRA_CELLINFO_UPDATE_REQ
Line 15016: [U2L DEBUG] No EUTRA cell list exists
Line 15067: Serious Problem CnxMgrConn_p error %i is not handled
Line 15086: Wrong FailureCause %i -> set to IRAT PhyChFailure
Line 15097: TargetRat(%d) at HandoverCommandFromUtran cannot be supported at current RatMode(%d)
Line 15127: [Dch_HandoverFromUtran] vp_msg->ObjectPtr is NULL
Line 15206: Serious Problem CnxMgrConn_p error %i is not handled
Line 15225: Wrong FailureCause %i -> set to IRAT PhyChFailure
Line 15259: [Dch_CellChangeOrderFromUmts] vp_msg->ObjectPtr is NULL
Line 15310: [FACH_HandoverFromUtran] vp_msg->ObjectPtr is NULL
Line 15410: Serious Problem CnxMgrConn_p error %i is not handled
Line 15427: Serious Problem this error %i is not handled
Line 15461: [Fach_CellChangeOrderFromUmts] vp_msg->ObjectPtr is NULL
Line 15513:  Unexpected ReleaseDedicated Resources in wrong IrRelAssingedResources state 
Line 15559:  Unexpected ReleaseDedicated Resources in IrRelAssingedResources state 
Line 15657:  Unexpected Error Cause %d recvd from LTE
Line 15680: [DM Update] EventType(HANDOVER_FAIL %d), Cause(U2L %d)
Line 15704: IrWaitingForMmRsp_MMHandoverFromUtranRsp: CnxMgrConn_p->RbControlMsg is NULL
Line 15751: IrWaitingForMmRsp_UmtsRatCnf: Previous state should be Cell_DCH for U2L PSHO
Line 15912:  Unexpected Error Cause %d recvd from RR  
Line 15937: [DM Update] EventType(HANDOVER_FAIL %d), Cause(U2G %d)
Line 16060:  IrWaitingForRrRsp_CellChangOrderToGsmFailed: Cause(%d)
Line 16093:  IrWaitingForRrRsp_CellChangOrderToGsmFailed: Fail to Get GSM Info
Line 16098:  IrWaitingForRrRsp_CellChangOrderToGsmFailed: Wrong Message Type Not Asn_cellChangeOrderFromUTRAN
Line 16103:  Unexpected Error Cause %d recvd from RR  
Line 16264: [IrRestoreAssignedResources_RestoreDedicatedResCnf] CnxMgrConn_p->RbControlMsg is NULL
Line 16349:  Serious Error , ResumeFach should not be used other than CCO 
Line 16389: Failure to get SIB7Timer value
Line 16509: IrRestoreAssignedResources_ResumePchConfigCnf()-MsgNotSent
Line 16519: Failure to restore the pch configuration 
Line 16584: Failure to get SIB7Timer value
Line 16649: Failure to get SIB7Timer value
Line 16676: Failure to restore the Fach configuration 
Line 16779: GenMsg is NULL 
Line 16789: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 16910:  IrProcedure %d not synchronised with the state ConfiguringFach resources
Line 16949: IRAT:: This stack is made to work even if it could not configure common resources 
Line 17207: Serious Problem this state	%i is not handled
Line 17267: Failed to Generate Function to rrc_CnxMgrMobility
Line 17272:  Request for Interfrequency cell-reselection in PerformingCellUpdateAfterCnxRel state 
Line 17350: Selecting another cell on Freq %d  
Line 17398: Selecting another cell on Freq %d  
Line 17492: Failure to get SIB7Timer value
Line 17571: No ongoig procedure, unexpected path 
Line 17588: Generate indication FAILED!
Line 17599: msg is NULL 
Line 17629: SelectingNewCell_NonUmtsRatCnf 
Line 17646: GenMsg is NULL 
Line 17656: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 17793: RbControlMsg still existed so Transit to IDLE
Line 17833: cell-reslection to EUTRA shall be initiated 
Line 17847: cell-reslection to EUTRA in Cell_Fach is not supported
Line 17891: ALL RABS Released 
Line 18088: RbControlMsg still existed so Transit to IDLE
Line 18132: IRAT cellchangeorder/HO case- Not a Valid Option
Line 18144: Serious Error ,RRC not in dch or fach or pch states  
Line 18167: FACH Resources Config Failure :: DCH -> FACH
Line 18191: Serious Error ,RRC not in dch or fach or pch states  
Line 18253: Failed to Generate Function to rrc_CnxMgrMobility
Line 18258:  Request for Interfrequency cell-reselection in PerformingCellUpdateAfterCnxRel state 
Line 18315:  RLC-ACK or NACK for CnxRelComplete received during CellUpdte after Connection release 
Line 18448: Failure to get SIB7Timer value Freq
Line 18469: SIB7-BchReadError ,  re-starting sib7 timer 
Line 18474: SIB7-ReadError %d: ignored 
Line 18496:  SIB7Expiry ignored in the state %d 
Line 18500:  SIB7Expiry Handled in the state %d 
Line 18518: Default_Sib7Expiry in %d state 
Line 18533: Failure to get SIB7Timer value Freq
Line 18543: SIB7 Timer Restarted
Line 18724: [Connected >> waitForSib7] In Progress => wait for ReadSib7AbortedDone
Line 18733: [Connected >> Reselection] In Progress => wait for ReselectionAbortedDone
Line 18927: AwaitingBplmnAbortCnf_BplmnAborted: FailState
Line 20038: [ReselectionAbortedDone] wait for ReadSib7CancelledDone
Line 20050: ignore ReselectionAbortedDone
Line 20068: [ReadSib7AbortedDone] wait for reselectionAbortedDone
Line 20080: ignore ReadSib7AbortedDone
Line 20124: Err: No Saved suspend request
Line 20160: NAS trigerred Suspend while there is no PS/CS and still rrcCnxRel is being processed
Line 20172: ReleasingBchBeforeHandleCnxRelMsg_NonUmtsRatCnf 
Line 20189: GenMsg is NULL 
Line 20199: GenMsg returned from rrc_Class_CnxMgr_GenerateSuspendFromPreSuspend is NULL 
Line 20449: [State: %d] There is already an SavedMsg: replace it
Line 20456: [State : %d] Save and CurrentMsg
Line 20463: [State : %d] Save CurrentState
Line 20474: [State : %d] Repost SavedMsgPtr
Line 20478: [State : %d] SavedMsgPtr is NULL
Line 20488: [State: %d] There is already an SavedRbControlMsgEvent: Replace it
Line 20500: [State : %d] Save RbControlMsgEvent
Line 20509: [State: %d] There is already an SavedRbControlMsgEvent: Replace it
Line 20529: [State : %d] Repost SavedRbControlMsgPtr
Line 20675: [State : %d][Event %x] Return PCH state
Line 20717: Confirmation ERR, SIB2 available
Line 20729: Confirmation ERR, SIB2 Not Scheduled
Line 20788: [State : %d][Event %x] Return CONFIGURINGPCHRESOURCES state
Line 20838: [State : %d] is Not PCH
Line 20863: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 20904: CnxMgrConn_CallbackT320Expiry()-MsgNotSent
Line 20950: HO /CCO  cannot be supported as peer SIM in signaling
Line 20968: 0) Intra HO 1) Inter HO 2) GSM Inter Rat HO 3) Cell Change Order 4) Eutra Inter RAT
Line 20969: Measurement Based HO Type = %d 
Line 21008: RRC Cnx Release Cause  =%s %d
Line 21017: [rrc_tmsgCellUpdateCnf_initialProcess]NFreqSettingReceived is FALSE as Multi Freq not received
Line 21021: [rrc_tmsgCellUpdateCnf_initialProcess]NFreq was TRUE Previous and Now False So Releasing the Current Measurements
Line 21047: Err: No SavedSuspendReq
Line 21063: Grant Received rrc_CnxMgrConn_ConfiguringDchLayersFromFach_Grant
Line 21078:  OOS in Fach state 
