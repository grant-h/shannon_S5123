Line 623: 
Line 631: 
Line 665: UNKNOWN DST MSG ENTITY  - %d 
Line 668: STACK ID - %d 
Line 878: Selected mode is %d
Line 939: QuickRollbackToLteAfterCsfb registry is recovered as (%d).
Line 943: QRBEnabledBySIMcard registry is initialized.
Line 999: QRBEnabledBySIMcard[0] = %d,  QRBEnabledBySIMcard[1] = %d 
Line 1009: Provider requirement , so U2L QRB is enabled
Line 1035: Provider requirement , so G2L QRB is enabled
Line 1038: U2L QRB is %d / G2L QRB is %d
Line 1116: mm_WatchDogMode = %d
Line 1127: mm_bplmnenabled = %d, mm_ensenabled = %d
Line 1136: %s : CSC is GCF -> Forcefully disable SamsungSOREnable Flag
Line 1265: MM_SINGLE_MODE_OPERATION (GSM RAT MODE) Selected...
Line 1272: MM_SINGLE_MODE_OPERATION (UMTS RAT MODE) Selected...
Line 1281: MM_DUAL_MODE_OPERATION Selected...
Line 1288: MM_SINGLE_MODE_OPERATION Selected...
Line 1295: MM_SINGLE_MODE_OPERATION Selected...
Line 1302: MM_SINGLE_MODE_OPERATION (NO RAT MODE) Selected...
Line 1306: Unknown mode is selected...
Line 1312: mm_SingleDualModeOperation(%d),mm_CompiledSelectedRatMode(%d)
Line 1360: Re-Initialising MM ..Type: %s
Line 1438: mm_GetSupportedCodecList OperationMode: %d	WB AMR enabled: %d	HDVoice on:%d
Line 1535: 
Line 1578: 3G  mode URRC_MM_STOP_CNF received
Line 1587: 2G  mode GRR_MM_STOP_CNF received
Line 1684: State MISMATCH in MM/GMM %s  
Line 1733: Current HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1736: LastInsertedPLMN -> 0x%02X 0x%02X 0x%02X
Line 1740: writing HPLMN
Line 1784: (PREVENTION) EF_LOCI Update during Power off	 (20131231)
Line 1815: Sending MM Stop Req to AS
Line 1985: MmState: %d
Line 2074: INIT request cause: %d
Line 2080: Received EMC MODE from GMC: %d
Line 2092: IMEI from LTE
Line 2099: IMEI constructed in HEDGE
Line 2118: UEMode = %d , CsServicesSupport = %d
Line 2137: mm_UeNwCapRegData.uea0 -> %d, mm_UeNwCapRegData.uea1 -> %d, mm_UeNwCapRegData.uea2 -> %d
Line 2138: gMmUeNetworkCapability[3] -> %02X, gMmUeNetworkCapability[4]  -> %02X
Line 2173: MmInitReq.SimStatus -> %d, MmInitReq.StartFullService -> %d
Line 2210: UserSelectedMode: %d 
Line 2246: Network Lock Status - %d
Line 2254: Stack had been aleady initialized. But MM responds to INIT CNF without any action to avoid stuck
Line 2326: Receive Error -> CTLVMAND TLV PARAM MANDATORY ERROR
Line 2336: Receive Error -> (CMSGLEN|CTLVLEN|CTLVUNK) ERROR for Auth Req
Line 2365: Receive Error -> CTLVMAND TLV PARAM MANDATORY ERROR
Line 2506: ERROR -> Unknown group : 0x%x !!!, Ignoring Message
Line 2514: ERROR -> Unknown Msg or Error Case: %x !!! Ignoring Message
Line 2517: 
Line 2556: ERROR -> Msg 0x%04X too short, Header.Length = %d, MsgLen = %d, (Length - BodySize) = %d !!!
Line 2696: MSG already displayed!!!!
Line 2708: Message not parsed !!!: 0x%04X
Line 2759: Unknown mm msg type, Sending Status..
Line 2824: Unknown mm msg type, Sending Status..
Line 2831: MM_INTEGRITY_FLG                  -> %s
Line 2832: MsgNum %d not processed....
Line 2833: ....integrity protection not activated in CS domain.
Line 2846: MM_INTEGRITY_FLG   is FALSE , Message receievd with PD %d
Line 2939: Received Pointer-> %p
Line 2978: Unknown Gmm msg type, Sending Gmm Status..
Line 2985: MsgNum %d not processed....
Line 2986: ....integrity protection not activated in PS domain.
Line 3092: GS30: ucTransactionID = 0x%02X,  ucProtocol =%s
Line 3093: GS30: ucMessageType =0x%02X, ucChannel =0x%02X
Line 3094: GS30: Raw data length =%d
Line 3116: Unknown Gmm msg type, Sending Gmm Status..
Line 3341: Received Loc Upd Acc. Integrity Protected Signalling not Started Yet, but for Periodic Loc Upd, this is allowed.
Line 3369: Emergency call was accepted and Integrity Protected Signalling is unncessary until MM Connection is reset..
Line 3486: mm_GetDsDelayCsIdleEntry = %d
Line 3490: SIG Protection Variable was TRUE, Resetting it
Line 3989: LTE HEDGE EMR Mode, skip to send GMMSM_RELEASE_IND in case of HEDGE RAT resumed on emergency state
Line 4277: GMM READY , GSM RAT MODE and GMM_T3314 Timer is not running..... Starting the timer
Line 4363: Cause -> %s
Line 4424: Setting GMM_ATTEMPTING_TO_UPDATE state and T3302 is not running. Starting T3302 !
Line 4432: Setting GMM_ATTEMPTING_TO_UPDATE state and T3311 is not running. Starting T3311 !
Line 4444: Setting GMM_ATTEMPTING_TO_ATTACH state and T3302 is not running. Starting T3302 !
Line 4452: Setting GMM_ATTEMPTING_TO_ATTACH state and T3311 is not running. Starting T3311 !
Line 4608: ISR Status: %d
Line 4667: Protocol Discriminator -> %s
Line 4692: ERROR -> RtkQueue %x !!!
Line 4717: In mm_DiscardMmEstReqMsgInQueue(), required TI : %d, Call Type : %d
Line 4734: TI match! deleting..
Line 4747: Warning in mm_DiscardMmEstReqMsgInQueue() : Cannot put the MSG in the original queue (status : %x)!!!
Line 4753: Warning : there is null pointer saved in the queue !!!
Line 4758: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4785: In mm_ClearMmEstReqMsgQueue()
Line 4799: Deleting EST Req with TI: %d and Call Type: %d
Line 4805: Warning : there is null pointer saved in the queue !!!
Line 4810: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4820: [ERROR]Queue not cleared completely 
Line 4823: Cleared EST_REQ queue Que Size %d 
Line 4847: In mm_DiscardMmEstReqMsgInQueueUsingCallType(), Call Type : %d
Line 4864: CallType match! deleting Ti: %d..
Line 4878: Warning in mm_DiscardMmEstReqMsgInQueueUsingCallType() : Cannot put the MSG in the original queue (status : %x)!!!
Line 4884: Warning : there is null pointer saved in the queue !!!
Line 4889: Warning : cannot get the msg in estreq queue (status : %x) !!!
Line 4917: ERROR -> RtkQueueFirst 0x%x  !!!
Line 5646: GmmFunctionalState = %s
Line 5658: mm_State -> %s
Line 5670: mm_GmmState -> %s
Line 5722: mm_CheckIfTimerExpiryCanbeHandled = %s
Line 5893: Saving MMC resume Request manually
Line 5899: Retrieving MMC resume Rat Req and putting in to Main Queue
Line 6343: 
Line 6364: 
Line 6370: MM_SIM_PRESENT_FLG                -> TRUE
Line 6376: MM_SIM_REMOVAL_ACTION_FLG         -> TRUE
Line 6382: MM_CIPHERING_FLG                  -> TRUE
Line 6388: MM_LOC_UPD_REQ_1ST_MM_CON_FLG     -> TRUE
Line 6394: MM_LOC_UPD_REQ_IMSI_UNK_FLG       -> TRUE
Line 6400: MM_INTEGRITY_FLG                  -> TRUE
Line 6406: MM_IMSI_ATTACH_FLG                -> TRUE
Line 6412: MM_FOLLOW_ON_REQ_FLG              -> TRUE
Line 6418: MM_CELL_REJ_SENT_FLG              -> TRUE
Line 6424: MM_CS_ENABLED_FLG                 -> TRUE
Line 6430: MM_ABNORMAL_RR_CON_REL_CASES_D_TO_H_FLG -> TRUE
Line 6436: MM_RANDOM_ACCESS_FAIL_FLG         -> TRUE
Line 6442: MM_RE_START_PROC_ON_OTHER_RAT_FLG -> TRUE
Line 6448: MM_SAVE_FLASH_DATA_REQ_FLG        -> TRUE
Line 6454: MM_T3211_EXPIRED_NO_LOC_UPD_FLG   -> TRUE
Line 6460: MM_GPRS_ONLY_FLG                  -> TRUE
Line 6466: MM_NETWORK_MODE_CHANGE_FLG        -> TRUE
Line 6472: MM_CM_SERV_REJ_IMSI_UNK_FLG       -> TRUE
Line 6478: MM_RETRY_LAU_IN_NEW_CELL_FLG      -> TRUE
Line 6484: MM_CELL_RSP_NEEDED_FLG            -> TRUE
Line 6490: MM_IMSI_ATT_RETRY_REQ_FLG         -> TRUE
Line 6496: MM_REG_STATUS_IND_SENT_FLG        -> TRUE
Line 6502: MM_POWER_ON_CS_ACCESS_FLG         -> TRUE
Line 6508: MM_CS_PS_DETACH_AFTER_RR_REL_FLG  -> TRUE
Line 6514: MM_NORMAL_DETACH_AFTER_LAU_FLG    -> TRUE
Line 6519: MM_PS_SIGNALING_MSG_FLAG          -> TRUE
Line 6525: MM_CS_SIGNALING_MSG_FLAG          -> TRUE
Line 6531: MM_CELL_CONG_WAIT_3122_EXP_FLG     -> TRUE
Line 6537: MM_CELL_CONG_WAIT_3122_EXP_FLG     -> TRUE
Line 6544: MM_NEED_CELL_IND_AFTER_REL_IND_FLG-> TRUE
Line 6550: MM_CALL_WAS_ATTEMPTED_FLG         -> TRUE
Line 6556: MM_EMERG_CALL_WAS_ATTEMPTED_FLG   -> TRUE
Line 6562: MM_CC_CALL_ABORTED_FLG            -> TRUE
Line 6568: MM_CSFB_CALL_STATUS_FLG           -> TRUE
Line 6574: MM_CSFB_FOP_FLG                   -> TRUE
Line 6580: MM_EUTRAN_DISABLE_FLG             -> TRUE
Line 6586: MM_LAU_AFTER_CSFB_FLG	          -> TRUE
Line 6592: MM_LAU_AFTER_SRVCC_FLG	          -> TRUE
Line 6598: MM_TMSI_INVALID	                  -> TRUE
Line 6604: MM_TMSIOLD_VALID	              -> TRUE
Line 6610: MM_RR_REL_CNF_ACTION	          -> TRUE (ACTION : %d)
Line 6616: MM_BACK_GND_SRCH_FLG	          -> TRUE
Line 6622: MM_WAIT_UNTIL_RB_SETUP	          -> TRUE
Line 6628: MM_IS_CSFB_FLG	                  -> TRUE
Line 6634: MM_IS_SRVCC_FLG	                  -> TRUE
Line 6640: mm_USER_SELECTED_PLMN               -> TRUE
Line 6646: MM_CAMPED_FOR_EMERGENCY_SERVICES               -> TRUE
Line 6654: MM_QR_FOR_CSFB_STATUS		-> STANDBY
Line 6658: MM_QR_FOR_CSFB_STATUS		-> IN_PROGRESS
Line 6666: MM_G2L_QRB_FOR_CSFB_STATUS           -> TRUE
Line 6674: MM_QR_FOR_PDP_STATUS		-> STANDBY
Line 6678: MM_QR_FOR_PDP_STATUS		-> IN_PROGRESS
Line 6686: MM_FAST_RETURN_TO_LTE	-> TRUE
Line 6692: MM_FORCE_TO_STAY_IN_HEDGE_BY_NS	-> TRUE
Line 6698: MM_CC_REDIALING		-> TRUE
Line 6704: MM_MODE_CHANGE_IN_PROGRESS		-> TRUE
Line 6710: MM_MT_CALL_IN_PROGRESS		-> %d
Line 6717: mm_LauNeeded	-> TRUE
Line 6723: mm_T3212TimedOut	-> TRUE
Line 6729: mm_RegistrationStatusCause -> %s
Line 6735: mm_CsConnectedInUmts	-> TRUE
Line 6741: mm_RcvGrrCellInd	-> MM_ReceivedOnlyDediCell
Line 6747: Manual Search is going on -> TRUE
Line 6764: GmcInitCnfSent -> FALSE
Line 6770: Need Paging Rsp -> TRUE
Line 6776: Received NO GPRS IN THIS PLMN IN LTE-> TRUE
Line 6782: mm_SrvccCallForSequnceNum-> TRUE
Line 6788: LAI Mismatch Counter -- > %d
Line 6794: SequenceBits = %d
Line 6802: mm_UmtsMode = %d
Line 6809: Priority PLMN Search Ongoing -> TRUE
Line 6815: PS SIG RELEASED DUE TO PCH MOVEMENT -> TRUE
Line 6822: MM_CS_RB_STATUS -> TRUE
Line 6830: GRR initialization state: %s,  URRC initialization state: %s
Line 6841: CS Rejected Rat -> %s, CS Rej Type -> %d, CS Rej Cause -> %s
Line 6844:  LAI -> 0x%x 0x%x 0x%x 0x%x 0x%x
Line 6852: PS Rejected Rat -> %s, PS Rej Type -> %d, PS Rej Cause -> %s 
Line 6855:  RAI  -> 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 6861: LOC_UPD_ATTEMPT_COUNT 	-> %d
Line 6867: LOW_LAYER_FAIL_COUNT  -> %d
Line 6879: NeedCellAfterEstRej  -> TRUE
Line 6885: ModeUpdateBlockNewCellInd  -> TRUE
Line 6899: No Flags are Set !
Line 6917: 
Line 6923: GMM_CIPHERING_FLG                 -> TRUE
Line 6929: GMM_INTEGRITY_FLG                 -> TRUE
Line 6935: GMM_VALID_PTMSI_FLG               -> TRUE
Line 6941: GMM_FORCE_TO_STANDBY_FLG          -> TRUE
Line 6947: GMM_DETACH_STATUS_FLG             -> TRUE
Line 6953: GMM_IMSI_GPRS_DETACH_FLG          -> TRUE
Line 6959: GMM_DETACH_IN_REG_REQ_FLG         -> TRUE
Line 6965: GMM_CM_EST_CNF_FLG                -> TRUE
Line 6971: GMM_T3302_EXP_IN_SUSPENDED_FLG    -> TRUE
Line 6977: GMM_PERIODIC_RAU_REQD_FLG         -> TRUE
Line 6983: GMM_READY_TIMER_DEACTIVATED_FLG   -> TRUE
Line 6989: GMM_CELL_NOTIFICATION_FLG         -> TRUE
Line 6995: GMM_RAI_CHANGED_FLG               -> TRUE
Line 7001: GMM_NORMAL_DETACH_AFTER_RAU_FLG   -> TRUE
Line 7007: GMM_RETRY_RAU_IN_NEW_CELL_FLG     -> TRUE
Line 7013: GMM_GPRS_ATTACH_FLG               -> TRUE
Line 7019: GMM_POWER_OFF_FLG                 -> TRUE
Line 7025: GMM_RAU_AFTER_CS_CALL_FLG         -> TRUE
Line 7031: GMM_COMBINED_RAU_WITH_IMSI_ATTACH_FLG -> TRUE
Line 7037: GMM_PS_ENABLED_FLG                -> TRUE
Line 7043: GMM_ATTACH_ON_RELEASE_FLG         -> TRUE
Line 7049: GMM_SIG_CON_REEST_CAUSE_FLG       -> TRUE
Line 7055: GMM_RE_START_PROC_ON_OTHER_RAT_FLG-> TRUE
Line 7061: GMM_PERFORM_GMM_CELL_IND_FLG      -> TRUE
Line 7067: GMM_RAT_CHANGE_IN_SAME_RA_FLG     -> TRUE
Line 7073: GMM_SEND_REEST_RSP_TO_SNDCP_FLG   -> TRUE
Line 7079: GMM_RABM_REEST_REQ_AFTER_RAU_FLG  -> TRUE
Line 7085: GMM_READY_EXPIRY_CONNEX_ACTIVE_FLG -> TRUE
Line 7091: GMM_PERFORM_GPRS_DET_FLG -> TRUE
Line 7098: GMM_NEED_GMM_REL_IND	          -> TRUE
Line 7104: GMM_FOLLOW_ON_REQUESTED	          -> TRUE
Line 7110: GMM_PTMSI_INVALID	              -> TRUE
Line 7116: GMM_RB_STATUS	                  -> TRUE
Line 7122: GMM_RR_REL_CNF_ACTION	          -> %d
Line 7128: GMM_SM_ESTABLISHED		          -> TRUE
Line 7134: GMM_PS_VT_CALL_ON_PROGRESS		  -> TRUE
Line 7140: GMM_ATTACH_NEEDED		          -> TRUE
Line 7146: GMM_RAU_NEEDED		              -> TRUE
Line 7152: mm_GmmRegistrationStatusCause     -> %s
Line 7158: mm_L2UPSHO_trigger                -> %d
Line 7164: mm_PsConnectedInUmts	          -> TRUE
Line 7174: GMM_ATTACH_ATTEMPT_COUNT 	      -> %d
Line 7180: GMM_RAU_ATTEMPT_COUNT 	          -> %d
Line 7194: INTERNAL_LTE_DISABLED		      -> TRUE
Line 7200: No Flags are Set !
Line 7216: MM_CIPHERING_FLG                  -> %s
Line 7231: MM_INTEGRITY_FLG                  -> %s
Line 7246: MM_IMSI_ATTACH_FLG                -> %s
Line 7261: MM_FOLLOW_ON_REQ_FLG              -> %s
Line 7276: MM_CS_ENABLED_FLG                 -> %s
Line 7288: MM Service State -> %s
Line 7300: MM Message Count -> %d
Line 7720: GMM_CIPHERING_FLG                 -> %s
Line 7735: GMM_INTEGRITY_FLG                 -> %s
Line 7750: GMM_FORCE_TO_STANDBY_FLG          -> %s
Line 7765: GMM_CELL_NOTIFICATION_FLG         -> %s
Line 7833: mm_GetEnsEnabled mm_ensenabled  %d
Line 7877: In mm_SendGapiStopNetworkRspMsg(): Cause = %d, GapiNetworkStopReq = %d
Line 8111: MM  Integrity Check Supported -> %s
Line 8123: GMM  Integrity Check Supported -> %s
Line 8143: 
Line 8157: %d. %s
Line 8161: %d. Unknown Timer (TimerID : %d)
Line 8166: %d. %s
Line 8490: Process GMM PENDING MESSAGES
Line 8497: mm_FlightMode -> %d      Is MM Release Req Triggered -> %d 
Line 8570: mm_State -> %s       MM Service State -> %s
Line 8575:  mm_UpdateStatus = %s 
Line 8580: in %s
Line 8586: mm_State -> %s   MM Service State -> %s   MM Update Status -> %s  in %s
Line 8599: mm_GmmState -> %s       GmmFunctionalState = %s       GmmServiceState = %s
Line 8605: GmmState -> %s   GmmFuncState = %s   GmmSvcState = %s   GmmUpdStatus = %s  in %s
Line 8641: Memory Allocation Failed
Line 8655: mm_GetSrvccRegistryValue mm_SrvccSupport  %d
Line 8721: mm_Tdscdma_Cal_Done is %d
Line 8724: 
Line 8743: MM already sent INIT CNF
Line 8757: PDP is active and RABM request can be processed
Line 8779: mm_HplmnExceptionEnabled is FALSE on other operators except LGU
Line 8800: mm_GetDelayRauDuringCsfbSetup mm_DelayRauDuringCsfbSetup  %d
Line 8927: mm_GetQuickRollbackToLteTimerEnabled mm_QuickRollbackToLteTimerEnabled  %d
Line 8949: mm_GetQuickRollbackToLtePdpEnabled mm_QuickRollbackToLtePdpEnabled  %d
Line 9014: OPT_CARRIER TYPE: %d, mm_CompiledProvider: %d
Line 9052: mm_CompiledSP-> %d
Line 9202: mm_CompiledFCI-> %d
Line 9334: mm_networkFeatureSupport-> %d
Line 9392: 
Line 9397: 
Line 9402: Invalid to handle(param:%d) in %d - %s, 
Line 9497: In mm_SetRejParamForDebug, MappedMmProcedure =%d RatMode =%d
Line 9509: In mm_SetRejParamForDebug, sending NW_REJ_Ind to NS Procedure = %d, RejCause = %d
Line 9547: Internal Reset Count- Total: %d, MM: %d, GMM: %d, URRC: %d, GRR: %d
Line 9707: mm_GetSorFeatureStaus mm_SorFeatureStatus  %d
Line 9737: mm_GetGsmDtmSupported mm_GsmDtmSupported  %d
Line 9796: mm_GetVamosSupported mm_VamosSupported  %d
Line 9824: TCS feature support ->  ISR: %d, SRVCC: %d, CSG: %d, AP_VOLTE_SRVCC: %d
Line 9827: TCS feature support ->  AUTORETRYCALL: %d, RSRVCC: %d, OMC: %d, RPLMN_QRB_CONTROL: %d
Line 9980: mm_CheckOperatorGroup One SKU :Enabled (0x%x)
Line 9985: [OMCv5] mm_CheckOperatorGroup One SKU :Enabled (0x%x)
Line 10029: MM is in NULL state, to avoid memory leaks it frees any pointer contents of a message = %d, when message is not handled
Line 10060: Index %d is Already NULL
Line 10072: mm_SimReadRspPtr is Already NULL
Line 10179: Displaying Device Information [Service Provider]: %s [FCI]: %s [MAKE_TYPE]: %d 
Line 10220: PS FOR Registry -> %d 
