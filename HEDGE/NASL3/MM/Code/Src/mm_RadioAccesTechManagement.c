Line 270: Initialisation of <RatManagement>, InitType=%d
Line 342: State exceeds the limit
Line 350: RAT Change is Happening in Connected Mode from GSM to UMTS So we need to Map Connected Mode to State
Line 360: GMM Functional State set to %d
Line 398: State exceeds the limit
Line 434: mm_SetMmcLteHedgeRatChangeCause -> Cause = %d
Line 448: RAT Change is Necessary, Initiating RR Suspension / Resumption Procedures..
Line 460: RAT Suspension Requested..
Line 468: RAT Resumption Requested instead of Suspension Requested..
Line 505: When suspending RAT, QRB is stopped if RAT is 2G
Line 538: SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to detach
Line 544: SUSPEND_RAT_REQ UnconditionalSuspend = TRUE due to mode selection
Line 559: SUSPEND_RAT_REQ dsdsCallStatus= TRUE due to CS call on other stack
Line 564: SUSPEND_RAT_REQ dsdsCallStatus= FALSE
Line 580: mm_UnconditionalSuspend = %d
Line 583: %d message id
Line 600: Suspending due to CS call on other stack Resetting current stack SRNC states
Line 638: SUSPEND REQ ignored due to RAT CHANGE IN PROGRESS 
Line 661: %s  in  mm_DecodeRrSuspendRatCnfMsg
Line 728: Clearing Cell Congestion flag
Line 816: Old 
Line 878: New 
Line 890: Stack Has Been Suspended...
Line 895: Sending Stop Network Rsp to NS.
Line 902: Sending MM Stop Req to AS
Line 917: SUSPEND_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
Line 963: mm_HedgeRatResumeByMmc is %d, %d in mm_SendRrResumeRatReqMsg 
Line 1115: SRVCC Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 1121: SRVCC Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 1128: SRVCC Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 1135: SRVCC Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 1189: TLLI generation for GPRS suspension procedure
Line 1304: 
Line 1312: Lai = %02X %02X %02X %02X %02X 
Line 1319: Tlli = %02X %02X %02X %02X 
Line 1359: mm_HedgeRatResumeByMmc is %d and %d in mm_SendRrResumeRatReqMsg
Line 1543: Sending CS keys as 0xFF in RESUME_RAT
Line 1559: Sending PS keys as 0xFF in RESUME_RAT
Line 1580: UmtsMode = %d   0:FDD 1:TDD 2:FDD&TDD
Line 1583: isUsimPresent = %d
Line 1589: PS Support indication = %d, PDP Status %d 
Line 1592: PlmnSelectionMode(Auto) = %d
Line 1629: Entering mm_SendRrResumeRatReqMsg
Line 1643: Handle RR Resume Request after SIM CNF
Line 1655: Handle RR Resume Request after SIM CNF
Line 1670: Sending Reseume Rat Req (U)RRC...in mm_SendRrResumeRatReqMsg
Line 1695: 
Line 1715: RESUME_RAT_REQ Not Allowed in this mm_RatModeChageState !!!
Line 1741: %s  in  mm_DecodeRrResumeRatCnfMsg
Line 1785: Current HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1788: Last Inserted HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1795: NOTI what Sim changed to URRC
Line 1804: Last Umts HPLMN -> 0x%02X 0x%02X 0x%02X
Line 1840: Key is not updated, so let URRC use the old key!
Line 1873: New 
Line 1908: Setting GMM_STANDBY 
Line 1918: GmmState(%d)  FunctionalState(%d) 
Line 1926: NW gave different LAI in TAU_ACCEPT
Line 1988: 
Line 1993: 
Line 2008: 
Line 2062: GmmState(%d)  FunctionalState(%d) 
Line 2105: RESUME_RAT_CNF Not Allowed in this mm_RatModeChageState !!!
Line 2128: 
Line 2153: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2318: 
Line 2410: 
Line 2412: RabId            -> 0x%02X
Line 2413: CodecInfoPresent -> 0x%02X
Line 2414: NasSyncInd       -> 0x%02X
Line 2450: in  mm_UrrcRetransmitMessages
Line 2501: Unknown Message PD %d
Line 2546: 
Line 2548: NumOfMessagesToRetransmit -> %d
Line 2552: Message %d    -> ...
Line 2553: Message Size  -> %d
Line 2554: Message       -> ...
Line 2597: Saving UrrcRetransmitInd to be sent to CM Layer later
Line 2608: Protocol Descriminators for Unconfirmned Messages to be Re-transmitted....
Line 2761: U2G redirection blocked, Saved PLMN selection procedure will be initiated
Line 2770: MM sent CELL_REJ to URRC so Redirection is aborted.
Line 2778: Redirection is discarded during Hedge Rat suspension.
Line 2800: UMTS to GSM cell reselection in %s
Line 2804: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2858: URRC_MM_RAT_RESELECTION_TO_GSM_IND Ignored as MM has started a RAT Change !!!! 
Line 2894: G2U IRAT reselection UMTS MODE = %d
Line 2927: Blocking G2U reselection since CELL_REJ was sent and PLMN search will come.
Line 2950: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 2998: GRR_MM_RAT_RESELECTION_TO_UMTS_IND Ignored as MM has started a RAT Change !!!! 
Line 3032: 
Line 3033: 
Line 3096: 
Line 3100: mm_SendGapiRatModeChangeIndMsg Cause : %d 
Line 3133: 
Line 3168: 
Line 3202: 
Line 3236: 
Line 3272: 
Line 3298: mm_SendRatCellChangeToUmtsRspMsg..Status(%d)
Line 3351: mm_SendRatReselectionToUmtsRspMsg..Status(%d)
Line 3439: mm_SendRatHandoverToUmtsRspMsg..Status(%d)
Line 3499: Rat Mode Change (Initiated by (U)RRC) was Successful 
Line 3558: 
Line 3563: 
Line 3574: 
Line 3579: 
Line 3587: In case of G2U HO, we might don't get UNIT_DATA_IND. So, at this point, MM should let NS and PLMN
Line 3652: In L2U SRVCC and U2G CS Handover case we need to set IsSrvccFlg for G2L QRB here.
Line 3676: RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
Line 3690: RAT MODE CHANGE complete received, Triggering LOC_UPD perform actions
Line 3714: URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Line 3793: Setting GMM Service states as %s
Line 3860: Rat Mode Change (Initiated by (U)RRC) Failed ! Reverting Back to Old Rat ..
Line 3871: Discarding Saved Cell Ind Msg ..
Line 3883: Discarding Saved Urrc Retransmit Ind Msg ..
Line 3899: URRC_MM_RAT_CHANGE_COMPLETE_IND Not Allowed in this mm_RatModeChageState !!!
Line 3918: 
Line 3921: RabId            -> 0x%02X
Line 3922: CodecInfoPresent -> 0x%02X
Line 3923: NasSyncInd       -> 0x%02X
Line 3944: GSM to UMTS Initialisation of <GMM Functional State>
Line 3956: UMTS to GSM Initialisation of <GMM Functional State>
Line 3986: MM RATMode : %s -> %s
Line 4071: RAT Mode is  %s
Line 4138: Attempt to write to mm_RatModeChangeState Using Invalid State (%d)
Line 4174: RatModeChangeState ->  %s
Line 4209: Rat Change Cause ->  %s
Line 4251: Invalid Cause in mm_SetReStartProcOnOtherRatCause
Line 4300: RAT Change Window State ->  %s
Line 4536: serving_access_type = %d
Line 4537: mm_UeSupportRATechType = %d
Line 4586: Result : %d 
Line 4602: mm_NwAndRadioCapsData.AccessTechInfo[%d] = %d
Line 4653: Network sends All Unsupported Bands in PUA MAC Message So send Default RA Type = %s 
Line 4682: Invalid BCCH Access Type  = %s 
Line 4692: mm_GmmPduCodecDb[MmStackId].mm_NwAndRadioCapsData.AccessTechInfo values are corrupted
Line 4695: mm_RacBandCheckProc:mm_UeSupportRATechType = %d 
Line 4820: Total Size Required for Encoding RA Capabilities  %d
Line 4824: Number of RA Capabilities for Encoding = %d
Line 4870: Num = %d
Line 4873: type[%d] = %d
Line 4876: available_size given by MAC %d
Line 4934: GMSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4944: GMSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4954: GMSK 1900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4973: 8PSK 900 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4983: 8PSK 1800 Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 4993: 8PSK 1900Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 5003: 8PSK 850Registry value of PowerClass is invalid. Check AccessTechInfo in registry
Line 5023: LTE RAT : Our received mode is LTE_HEDGE_EMC_MODE_MM
Line 5055: Mode: Curr(%d) -> New(%d) 
Line 5056: RatMode(%d) EutranDisabled(%d)
Line 5073: Proceed with Mode Update procedure
Line 5085: When mode changes then UE capabilites gets changed, Encode MSRAC due to mode change
Line 5088: EncodedSizeinBits -> %d 
Line 5163: Entered Funtion mm_DecodeMmcMccReqMsg 
Line 5197: Call triggered on other stack when reselection/redirection/HO / CCO ongoing on current stack. Proceed with suspension.
Line 5216: Suspension is postponed until BPLMN procedure completion.
Line 5238: Entered Funtion mm_DecodeMmcSuspendReqMsg 
Line 5248: mm_SuspendReq_PowerDown = %d
Line 5266: Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Line 5275: Discarding GMM Service Request due to MMC suspend Request
Line 5291: We are already in Suspended state.  
Line 5311: MM_DSDS_DELAY_STACK_RESUMPTION Timer is still Running and we received a Suspension, So triggering suspend Cnf Back
Line 5320: MMC resume Request Pointer is NULL already 
Line 5363: Discarding MM DATA REQ message due to HEDGE suspension
Line 5446: Stack suspension requested due to CS call on other stack, Ignore REJECT action if waiting for release
Line 5453: Standby Request Not sent GRR
Line 5472: Before performing release actions,Suspend is received due to CSCALL on other stack 
Line 5485: Set mm_PsConnectedInUmts and mm_CellCoverageLost
Line 5496: Changing GMM REL CNF action to LOCAL DETACH 
Line 5575:  gsm_valid_info: %d, umts_valid_info: %d
Line 5577: IsLimitedService: %d
Line 5583: Redirect UMTS RAT: %d
Line 5598:  RAT MODE: %d
Line 5667: Redirection Done So delete the Redirect Info received from MMC.
Line 5676: Sending MMC Redirection  Status = %d
Line 5694: Entered Funtion mm_DecodeMmcLteTo2G3GReselectionReqMsg 
Line 5701: IsLimitedService: %d
Line 5735: Resel UMTS RAT: %d
Line 5750: Number of Cells Given By MMC are Zero
Line 5754: Number of Cells Given By MMC = %d
Line 5755: ARFCN = %d
Line 5756: SC = %d
Line 5795: mm_HandleHedgeToLteIratSuccess: IratType = %d
Line 5868:  IratType = %d is not handled in this function.
Line 5895: Discarding MM DATA REQ message due to NO SERVICE
Line 5909: Warning: RAT Mode is LTE / Reselection Cnf received twice from LTE 
Line 5920: mm_HandleHedgeToLteIratFailure: IratType = %d, ResultCause = %d, t_barred = %d
Line 5959:  IratType = %d is not handled in this function.
Line 6027: Discard mm_DecodeMmc2G3GToLteReselectionCnfMsg as there is no context exists
Line 6035: mm_DecodeMmc2G3GToLteReselectionCnfMsg -> Result = %d, t_barred = %d 
Line 6065: Discard mm_DecodeMmc2G3GToLteRedirectionCnfMsg as there is no context exists
Line 6071: Entered Funtion mm_DecodeMmc2G3GToLteRedirectionCnfMsg, Result = %d 
Line 6092: Discard mm_DecodeMmc2G3GToLteCellChgCnfMsg as there is no context exists
Line 6097: Entered Funtion mm_DecodeMmc2G3GToLteCellChgCnfMsg: Result = %d 
Line 6151: MM Had already started a Procedure.. Aborting All MM Procedures!!!! 
Line 6171: Number of Cells Given By MMC are Zero
Line 6196: Stack Resumed After CS CALL, Stack is in GSM rat mode, Delay Resumption for 3 Seconds
Line 6214: 
Line 6220: RESUME with MMC_CPU_POWER_ON
Line 6275: Ignore the saved ATT_REQ during stack suspension
Line 6434: Number of UMTS Cells Given By MMC = %d
Line 6438: Number of Cells Given to URRC = %d
Line 6442: ARFCN = %d
Line 6443: SC = %d
Line 6448: ARFCN = %d
Line 6449: SC = %d
Line 6465: CELL_CHANGE_REQ_TO_GSM
Line 6477: NetworkColourCode : %d BaseStaionColourCode : %d
Line 6483: Arfcn : %d BandIndicator : %d
Line 6488: num_of_gsm_si_info : %d
Line 6492: Number of GSM Cells Given By MMC = %d
Line 6502: Number of Cells Given to GRR = %d
Line 6506: BSIC = %d
Line 6507: SC = %d
Line 6512: BSIC  = %d
Line 6513: ARFCN = %d
Line 6519: 
Line 6577: 
Line 6625: 
Line 6653: mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d 
Line 6670: 
Line 6676: 
Line 6683: 
Line 6689: 
Line 6698: mm_SendRrCellReselToEUtranFailMsg : reason : %d, t_barred : %d 
Line 6719: 
Line 6726: 
Line 6753: U2L Redirection Failed. NeedCellIndAfterRelInd is set to TRUE.
Line 6771: 
Line 6822: 
Line 6851: Not sending RrCellChgToEutranFailMsg : it is in 3G RAT
Line 6868: 
Line 6895: Entered Funtion mm_DecodeRrReselectionTo2G3GCnfMsg 
Line 6910: Received From URRC :: CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Line 6914: Received From URRC :: Reselection Status = %d, Btimer : %d, cause : %d
Line 6923: Received From GRR :: Reselection Status = %d, Btimer : %d, cause : %d
Line 6938: 
Line 6979: Critical Error: RAT=%d
Line 7009: CELL_CHANGE_CNF Result: %d Cause : %d
Line 7068: Entered Funtion mm_DecodeRrCellReselToEUtranMsg 
Line 7082: Power off detach is pending Hence discarding G2L RESELECTION
Line 7095: Hedge to EUTRAN inter RAT cell reselection happened while power off detach is in progress, discards it
Line 7113: QRB_G2L is aborted.. 
Line 7120: RAT Mode change state is %s, Not processing Resel to EUTRA
Line 7146: Discarding G2L since NS required not to go to LTE 
Line 7154: Discarding G2L since CELL_REJ was sent and PLMN search will come.
Line 7161: Discarding G2L since PLMN_RAT_CHANGE requested.(already sent GRR_SUSPEND_REQ)
Line 7184: Clearing Cell Congestion flag
Line 7196: earfcn from RRC=%d  PcellID = %d 
Line 7207: RR set wrong cause value in redirection info. MM handle it as normal redirection
Line 7230: Entered Funtion mm_DecodeRrCellChgToEUtranMsg 
Line 7237: Power off detach is pending Hence discarding G2L CCO
Line 7281: earfcn from RRC=%d  PcellID = %d 
Line 7293: Clearing Cell Congestion flag
Line 7315: Entered Funtion mm_DecodeUrrcCellReselToEUtranReqMsg 
Line 7328: Power off detach is pending Hence discarding U2L RESELECTION
Line 7354: MM_BLOCK_IRAT_DURING_CELL_REJECT flag=%d
Line 7369: Discarding U2L since NS required not to go to LTE or MO/MT call is on-progress 
Line 7379: earfcn from RRC=%d  PcellID = %d 
Line 7428: Entered Funtion mm_DecodeUrrcCellReDirectToEUtranReqMsg 
Line 7455: Power off detach is pending Hence discarding U2L
Line 7482: U2L redirection blocked, PLMN selection procedure will be initiated due to LAU or RAU reject
Line 7492: U2L redirection is discarded during Hedge Rat suspendion.
Line 7501: U2L redirection blocked, PLMN selection procedure will be initiated due to abnormal LAU failure
Line 7508: U2L redirection blocked, Saved PLMN selection procedure will be initiated
Line 7522: Discarding U2L since NS required not to go to LTE 
Line 7594: Invalid Cause : URRC_CR_CSG_CELL_BARRED, CSG NOT SUPPORTED
Line 7622: Sending MMC Reselection Status = %d, bar timer : %d
Line 7641: Sending MMC CSG Cell PlmnId -> 0x%x 0x%x 0x%x, CsgId = 0x%x
Line 7645: No CSG CELL info in Reselecion CNF message
Line 7686: Earfcn=%d   PcellID=%d 
Line 7689: Selected PlmnId = 0x%x 0x%x 0x%x,
Line 7691: Sending MMC Reselection Req for HEDGE to LTE 
Line 7773: Selected PlmnId = 0x%x 0x%x 0x%x, Num of Frequencies %d
Line 7774: IsQRB = %d
Line 7776: Sending MMC Redirection  Req from HEDGE to LTE 
Line 7813: Sending MMC Reselection Req for HEDGE to LTE 
Line 7838: Invalid Cause (0x%02X) in mm_SetRatChangeCause
Line 7891: mm_DecodeMmPlmnRatChangeReq
Line 7900: Ignoring RAT change received from GMC, Current resumed Rat is same as Requested Rat 
Line 7923: 
Line 7930: 
Line 7935: 
Line 7943: BPLMN procedure is ongoing, so save the RAT change
Line 7955: Cross over of IRAT and MMC_SUSPEND_REQ occured, Ignore IRAT and proceed with SUSPENSION
Line 7977: RatMode = %s
Line 8022: 
Line 8038: LAC = 0x  %x %x %x %x %x
Line 8096: Current cell is AT & T network
Line 8099: LAC Belong to AT&T FemtoCell
Line 8127: LTE info present in SIB 19 = %d in mm_DecodeUrrcMmLteRatInfoInd
Line 8134:  No LTE cell in neighbor. Giving up quick rollback to LTE..
Line 8152: In mm_SendRrMmLteStatusIndMsg .... EutranDisabled : %d, RAT : %d Block LTE Measurements %d
Line 8168: In mm_SendRrMmLteStatusIndMsg .... Block LTE Measurements %d
Line 8283: mm_RatChangeCauseForFailInd = %d
Line 8295: RrcSearchMode = %d
Line 8315: RrcSearchMode = %d
Line 8331: Entered Funtion mm_DecodeUrrcInitialPlmnCnfMsg 
Line 8346: MCC Response status =%d 
Line 8348:  PlmnId = 0x%x 0x%x 0x%x,
Line 8350: Sending MMC UrrcInitialPlmnCnfMsg 
Line 8365: Entered Funtion mm_DecodeRrInitialPlmnCnfMsg 
Line 8380: MCC Response status =%d 
Line 8382:  PlmnId = 0x%x 0x%x 0x%x,
Line 8384: Sending RrInitialPlmnCnfMsg 
Line 8405: Making MM to Ready for Switch Off
Line 8460: MCC : 0x%x, MNC : 0x%x
Line 8465: 2 digit
Line 8476: PlmnId : 0x%x
Line 8529: 
Line 8539: 
Line 8662: Ultra CSFB was triggered..
Line 8679: 
Line 8971: LAU needed flag : %d, Cause : %d:GmmState : %d
Line 8972: RAU needed flag : %d, Cause : %d, NMO: %d
Line 8991: 1. RAU needed flag : %d
Line 8998: Release PS signalling connection before RAU procedure initiation.
Line 9003: RAU procedure 'interupts' service request procedure...
Line 9014: 2. RAU needed flag : %d
Line 9039: Set LAU needed
Line 9048: CELL_IND is changed into UNIT_DATA_IND to perform RAU during PMM_Connected.
Line 9069: RegType : %d, CapaChange : %d
Line 9075: RegType After CS/PS Enabled Check : %d
Line 9144: [L2U] Dedicated Priority Info to URRC Duration=%d   StartTime=%d
Line 9151: num of GeranList=%d   num of Utra_tdd List=%d   num of Utra_fdd List=%d   num of EutraList=%d
Line 9205: [U2L] Dedicated Priority Info to MMC Duration=%d   StartTime=%d
Line 9211: num of GeranList=%d   num of Utra_tdd List=%d   num of Utra_fdd List=%d   num of EutraList=%d
Line 9223: Status = %d, TargetRat = %d in mm_DecodeUrrcMmRedirectionStatusInd
Line 9292: MM_EmergencyMode : %d
Line 9304: [SRVCC] L2G SRVCC Handover Start!!
Line 9310: [SRVCC] Invalid L2G Handover type!!
Line 9318: [SRVCC] L2U SRVCC Handover Start!!
Line 9324: [SRVCC] L2U SRVCC + PS Handover Start!!
Line 9329: [SRVCC] L2U PS Handover Start!!
Line 9345: [SRVCC] Invalid L2G Handover type!!
Line 9383: MM will not handle AS Info in LTE RAT mode!! in mm_DecodeRrMmSCellAsInfoInd
Line 9395: PreviousBandId = %d, CurrentBandId = %d
Line 9396: PreviousFrequencyInfo = %d, CurrentFrequencyInfo = %d in mm_DecodeRrMmSCellAsInfoInd
Line 9400: Band or Frequency info is changed
Line 9440: Updating CSFB registries in MM 
Line 9477: Disabling EUTRA capability
Line 9494: Error  Case : EutranDisable Flag is False
Line 9503: EUTRA is Enabled
Line 9591: NMO(%d)  CSDomainAllowedLau(%d) PSDomainAllowedrau(%d) PDPInProg(%d) 
Line 9593:  RATChgInProg(%d) SMInProgress(%d) 
Line 9602: ATT SIM and ENS enabled. Do not Perform CS/PS registration
Line 9641: NEW and Old Modes are same
Line 9657: Mode change request is saved
Line 9745: ModeIndex: %d, RatMode: %d
Line 9753: mm_IsCurrentRatSupportedInMode: %d
Line 9796: mm_DecodeRrCandidateRplmnScanReq - %d s
Line 9802: mm_RedirectionStatusFromAS : %d
Line 9859: Wrong Action =%d 
Line 9879: mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction will be performed 
Line 9884: mm_DecodeUrrcMmReadyForNasRequestInd Saved PlmnAction was empty 
Line 9966: QRB is triggered during mode change from non-LTE mode to LTE mode.
Line 9985: After Rel Cnf 3G QRB will be triggered.
Line 9991: After MM state moves to IDLE 3G QRB will be triggered.
Line 10015: QRB is triggered due to PS enabled in Global mode and 2G RAT.
Line 10019:  GSM RatMode, MM not in Idle, QRB will be initiated after moving to Idle
Line 10054: ATT SIM and ENS enabled. Do not Perform CS/PS registration
Line 10193:  Indicate QRB Needed as TRUE to GMC in MMC SUSPEND CNF
