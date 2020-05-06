Line 199: Clearing Cell Congestion flag
Line 289: EST CNF not processed
Line 318: 2G DTM : Set GMM state to previous one 
Line 435: Timer MM_WFNWC is not started, Since GCF Mode is enabled 
Line 468: in case of 2G GSM only cell to 3G CS+PS cell, PS cell data should be processed
Line 506: URRC_MM_REL_IND came after REL_CNF while MM_WAIT_FOR_SCR_BEFORE_LAU time is running, perform LAU
Line 530: CS procedure is not CS CALL, not expected
Line 569: G2L redirection will be initiated.
Line 575: G2U redirection will be initiated.
Line 585: PS resumption failure in GSM, so ISR status change to deactivate & TIN to P-TMSI
Line 594: URRC_MM_REL_IND came faster than CC Release complete.. NW issue but we handle call release.. 
Line 611: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 625: RRC Connection Released.. Wait for Cell Ind
Line 630: Signaling Connection Released.. No need to Wait for Cell Ind
Line 655: Sending PagingResponse due to URRC_MM_REL_IND
Line 664: [HongKong Network]Clearing QRB, inorder to Trigger LAU in this abnormal scenario, to receive Setup From network
Line 806: WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Line 874: Message crossover: RR_MM_REL_IND ignored as MM has already requested release, await RR_MM_REL_CNF
Line 1052: Cause Received RR_CELL_CONGEST 
Line 1122: WARNING : REL_IND comes abnormally. MM triggers SMS's retrial by Setting cause as MM_EST_REQ_REJ_CAUSE_UNSPECIFIED
Line 1169: GRR indicated as No cell, so regard the previous CELL_IND as a new one and not waiting for CELL_IND
Line 1203: Abort indication is not processed
Line 1244:  CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d
Line 1252: MM Connection Lost due to No service
Line 1266: CS procedure is not CS CALL, not expected
Line 1286: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1334: Sending PagingResponse due to URRC_MM_REL_IND
Line 1378: Invalid Message in this Protocol State 
Line 1615: Silent re-dial!!! PAGING RSP failed with URRC_EST_REJ Retry Paging Responce 
Line 1700: FD will be delayed until RAU completed
Line 1713: mm State = %d ; mm_GetDsDelayCsIdleEntry = %d
Line 1757: LAU is tried on MT CSFB procedure, but SETUP_IND didn't come. So, canceling QRB and wait for paging from 3G NW 
Line 1780: Unexpected event that MM connection exists and REL_CNF comes. Synchronizing MM/CC state
Line 1856: cRAU will be pended until GMM_REL_CNF + CELL_IND comes
Line 1879: WARNING : this REL_CNF is duplicated one, so ignoring it
Line 1913: mm_GetRrMmRelReqSentFlag = %d, so ingoring DATA_IND
Line 1976: CS Call Paging received in 3G, and PS/CS signalling triggered on other stack!!
Line 2003: Paging will be pended unitl SCR or CELL_IND
Line 2017: MT paging is received during PS detach, invoke local detach to avoid delay
Line 2057: SIM is opening status and MT cause is not SMS, so discard the PAGE_IND (cause :%d)
Line 2099: Stop QRB Procedure for PS Switching, since Paging received
Line 2106: Pend QRB Procedure, since Paging received
Line 2128: QRB_G2L due to PS switching is aborted, since Paging received
Line 2134: QRB_G2L is aborted by MT call so IsCsfb set TRUE for QRB retrial.
Line 2197: Paging with same type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Line 2203: Paging with different type of ID comes -Waiting for call, but NW is still paging, so extend T3240 and wait for NW's response
Line 2227: Current Paging is  for MT call , so ignoring previous paging for Low priority Signalling !!
Line 2323: NMO1 and GMM was attempting to update case.
Line 2334: Mobile Id is Valid -> O.K.....
Line 2348: TMSI is NOT Valid -> Paging Response Not Allowed.
Line 2353: Mobile Id is NOT Valid  -> Paging Response Not Allowed.
Line 2359: RAT suspension has been requested -> ...paging request ignored
Line 2364: SIM State is NOT Valid -> Paging Response Not Allowed.
Line 2369: UpdateStatus != MM_UPDATED && ServiceState() != MM_ATTEMPTING_TO_UPDATE -> Paging Response Not Allowed.
Line 2374: UpdateStatus == MM_NO_IMSI -> Paging Response Not Allowed.
Line 2379: Incorrect Plmn State, != MM_ON_PLMN -> Paging Response Not Allowed.
Line 2384: Current Mobile Operation Mode == MM_MOBILE_CLASS_C_PS -> Paging Response Not Allowed
Line 2389: Access Class Barred -> Paging Response Not Allowed.
Line 2394: CS Domain is Supported by Current Cell -> Paging Response Not Allowed.
Line 2399: Not Attached to CS Domain Yet -> Paging Response Not Allowed.
Line 2404: CS and PS detach procedure is in progress
Line 2409: MM State != MM_IDLE (Or) mm_RrMmRelReqSentFlag is TRUE -> Paging Response Not Allowed.
Line 2554: 
Line 2634:  T3212 Timeout detected and probably LAU not triggered 	since MM_CELL_CONG_WAIT_3122_EXP_FLG was set, So performing T3212 expiry actions
Line 2716: Ignoring Sequence Number in mm_SendRrDataReqMsg. Current Sequence Number -> %d
Line 2826: WARNING : Not sending REL_REQ, because it is already sent before
Line 2849: MM_IDLE: LAU will be triggered after timer expired, to avoid a collision of REL_IND
Line 2977: User PLMN will be retrieved after URRC_GMM_REL_CNF
Line 2982: User PLMN will be retrieved after GRR_MM_RESEL_HOLD_CNF
Line 2988: N/W intiated IMSI detach while CS conn active for class A MS in Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure with IMSI attach
Line 2999: SUSPEND REQ will be sent after URRC_GMM_REL_CNF
Line 3014: SUSPEND REQ will be sent after URRC_GMM_REL_CNF
Line 3020: Stop Nw Req Not received, once its received, GMM Release will be taken care
Line 3133: Set attachNeeded Flg to TRUE, waiting for CELL_IND
Line 3236: mm_IsCsfb is set to FALSE in 2G rat.
Line 3247: mm_IsCsfb is kept for silent redialin..
Line 3286: FD will be delayed until RAU completed
Line 3310: Delay 2G QRB action under PLMN searching period as per LAU abnormal failure over max attempt count 
Line 3351: Paging will be retrieve
Line 3430: Fast return to LTE will be done after GMM is released 
Line 3554: MM_CM_SERV_REJ_IMSI_UNK_FLG: Set LAU_NEEDED flag to TRUE
Line 3833: Power off detach is pending Hence discarding LAU retrails
Line 3848: Not sending MM_CC_ERR_IND for attempting emer call.
Line 3945: Resetting TBF Release Actions
Line 4036: Not sending EST_ERR to CM, because the resource is already released
Line 4063: Changing RATs Due To RR Est Rej Cause, Please Wait..... !!!
Line 4080: Wait for RR Release Before Requesting a RAT Change ..
Line 4196: LU procedure is failed due to U2L Inter rat reselection and LU should be re-tried on CELL IND..
Line 4208: Rat Change failure happened and LU procedure should be cancled..
Line 4220: Sim: %d, Compile RAT: %d
Line 4238: Location Update Triggered, during D to H handling
Line 4317: RR Rel Cnf Action = %x, CsDomainAccessIsAllowed =%d
Line 4553: Invalid RR Rel Cnf Action (%x) in mm_InitRrRelCoordActionParams !! 
Line 4600: We will do RAU in REL_IND
Line 4728: RR release cause -> %s 
Line 4808: CmCause = %x  
Line 4929: CmCause = %x  
Line 5129: URRC EST REJ cause -> %s 
Line 5196: URRC release cause -> %s 
Line 5322:  Paging ID Type -> IMSI 
Line 5329:  Paging ID Type -> PTMSI 
Line 5336:  Paging ID Type -> IMEI 
Line 5343:  Paging ID Type -> TMSI 
Line 5362:  Paging ID Type -> IMSI 
Line 5369:  Paging ID Type -> PTMSI 
Line 5376:  Paging ID Type -> IMEI 
Line 5383:  Paging ID Type -> IMEISV 
Line 5390:  Paging ID Type -> TMSI 
Line 5397:  Paging ID Type -> NO ID 
Line 5741: Call is re-started, and Quick RB was on-going, so make it stand-by.
Line 5747: QRB is pended and call is trigger. GmmCellInfo will be processed after call release.
Line 5891: QRB is triggered about 3G normal MT voice call. 
Line 5953: UrrcRelReqSentFlag is reset in mm_SendUrrcDataResumeOnGsmInd
Line 5964: 
Line 5990: mm_GetEnableIratToLte = %d, mm_GetCcRedialing = %d, mm_GetQrbForCallAbort = %d, ,mm_GetQrbPendingForEutraEnabled = %d
Line 5992: mm_GetQuickRollbackG2LEnabled = %d, mm_GetG2LQrbEnableRPlmn = %d, mm_GetPendingQrbFromAP = %d, mm_GetIsCsfb = %d
Line 6011: Setting IS CSFB to False
Line 6016: QRB_G2L is triggered after L2G CSFB call or due to Eutra enabling after PS switching 
Line 6020: QRB_G2L is not triggered.
Line 6027: QRB_G2L is not enabled.
Line 6041: QRB_G2L is aborted.. 
Line 6052: QRB_G2L is aborted by GRR.. 
Line 6061: QRB_G2L is aborted by G2L redirection. 
Line 6073: Triggering RAU, because it was pended..
Line 6092: LAU triggered because of CSFB call release.
Line 6107: Entering here since LAU is needed due to 3312 expiry
Line 6116: Periodic Location Update is triggered since 3312 was already expired
Line 6124: MM_ABORT_QRB_G2L_TIMER is already stopped so QrbAbortInd is ignored. 
Line 6173: QRB_G2L is triggered.  Mode = %d  :: 0 Stop  1 Start 2 QRB triggered by AP
Line 6198: U2L QRB mode updated in RPLMN, Mode = %d  :: 0 Disabled  1 Enabled
Line 6290: mm_DecodeRrMmTbfStatusInd: PDP Context Status is %d %d
Line 6317: Tbf Status received: %d
Line 6342: mm_UmtsMode : %d in mm_SendMmRrcUpdateDuplexModeInd
Line 6437: PS Support %d, PDP Active %d 
Line 6459: mm_RrRelIndAction: (%d) 
Line 6463: Invalid RR Rel Ind Action (%d) 
Line 6493: Invalid RR Rel Ind Action (%d) 
Line 6543: Wrong Action =%d 
Line 6605: REL_REQ already sent, due to MT call on the other Stack
Line 6654: RRC PDU Tx table entry %d has been reserved with PduId %04X...
Line 6659: ...for transmission of %s message
Line 6664: ...for transmission of a non-GMM message
Line 6670: ERROR: Table is already full...
Line 6697: PduId %04X confirmed as entry %d in RRC PDU Tx table
Line 6706: ERROR: PduId %04X does NOT match appropriate table entry...
Line 6712: ERROR: PduId submitted for confirmation has the value NOT_RRC_PDU...
Line 6735: Checking RRC PDU Tx table for PduId match...
Line 6739: PduId 0x%04X matched...
Line 6749: ...corresponding to %s
Line 6753: ...corresponding to a non-GMM RRC PDU
Line 6758: ERROR: PduId 0x%04X does not match that of first active entry...
Line 6764: PduId 0x%04X matched...
Line 6773: ...corresponding to %s
Line 6778: ...corresponding to a non-GMM RRC PDU
Line 6786: PduId -> NOT_RRC_PDU
Line 6807: First active entry removed from the RRC PDU Tx table...
Line 6819: PduId %04X does not match first active entry in the RRC PDU Tx table...
Line 6825:  active entry matched in  the RRC PDU Tx table at %d
Line 6861: Flushing the following %d active entries from the RRC PDU submit table...
Line 6863: -------------
Line 6879: No active entries to flush from the RRC PDU submit table...
Line 6893: Entry number %d corresponds to PduId = %04X
Line 6897:  ==> GMM PDU
Line 6898:  ==> %s
Line 6902:  ==> Non-GMM PDU
Line 6905: -------------
Line 6974: No more CS call exist on Non Internet DDS stack so trigger to release PS sig con. 
