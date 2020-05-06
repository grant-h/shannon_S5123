Line 408: FD Support in Pre R8 and R8 (T323 absent)
Line 415: FD Support in MultiRAB
Line 423: FD Support in Rel8, T323
Line 436: Failed to create TimerQuickRollbackToLte
Line 441: Failed to create Timer RelReqAllResources
Line 446: Failed to create T323
Line 462: [DSDS] Failed to create T_DS_delaySigStop_timer
Line 468: [DSDS] Failed to create T_DS_SCRI_protection_timer
Line 474: Failed to create TimerEstReq
Line 477: SCNX Being Initialized
Line 482: Scnx_init: FailState
Line 578: Scnx_CallBackFunc: State(%d) is not acceptable for USER_DATA_REQ
Line 586: Scnx_CallBackFunc: No Scnx Instance was created
Line 601: Scnx_CallBackFunc: MsgNotSent
Line 645: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_START_IND - Ps Scnx inst does not exist!!
Line 662: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_START_IND(IMS) - Ps Scnx inst does not exist!!
Line 670: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_START_IND %d
Line 678: Scnx_CallBackFunc: Invalid proc in MM_URRC_DSDS_SIG_START_IND %d
Line 704: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_END_IND - Ps Scnx inst does not exist!!
Line 721: Scnx_CallBackFunc: MM_URRC_DSDS_SIG_END_IND(IMS) - Ps Scnx inst does not exist!!
Line 728: Scnx_CallBackFunc: Invalid proc in MM_URRC_DSDS_SIG_END_IND %d
Line 736: Scnx_CallBackFunc: InvalidMsgId
Line 742: Scnx_CallBackFunc: StatusMsgNotSent
Line 774: GetScnxInstId: Invalid CnDomain
Line 1195: [DM Update] EventType(RLF_OR_WEAK_SIGNAL %d), Cause(Timer-expired %d)
Line 1203: [DM Update] EventType(RLF_OR_WEAK_SIGNAL %d), Cause(Rlc-MaxNumberRetx %d)
Line 1208: MMAbort Cause(%d)
Line 1245: GetScnxStatus: InvalidCnDomain
Line 1286: GenerateUlMsgConfirm: InvalidRetVal
Line 1299: TID for RB Release Complete msg is set from %d to %d
Line 1363: [URRC DSDS] Est Req Rejected from Dsrc
Line 1370: ImsSigPendingOnDsrc was set . which is cleared
Line 1372: [URRC DSDS] Est Req Granted from Dsrc
Line 1405: Rel_EstReq: FailState
Line 1418: [URRC DSDS] Sending Sig Stop to be delayed
Line 1467: Rel_EstReq: Invalid CnDomain
Line 1482: Rel_EstReq: Invalid UE Id
Line 1498: Rel_EstReq: Invalid UE Id
Line 1504: Rel_EstReq: Invalid CnDomain
Line 1528: Rel_EstReq: Primary PLMN Id: MCC(%d%d%d) MNC(%d%d) set to IDT
Line 1541: CSFB Flag Set(%d)
Line 1561: DO not block cell reselection in equipment mode
Line 1576: QuickRollbackToLte(PsScnx) is forcedly set FALSE due to new CS call
Line 1584: ERROR Stopping TQuickRollbackToLte
Line 1588: TQuickRollbackToLte was running so it was stopped
Line 1594: RelReqAllResources(PsScnx) is forcedly set FALSE due to new CS call
Line 1602: ERROR Stopping TQuickRollbackToLte
Line 1606: TQuickRollbackToLte was running so it was stopped
Line 1614: PsScnx RELEASED: FailState
Line 1635: Redirection is in Progress, Reject EstReq based on redirection Rat Type(%d)
Line 1649: RedirectionTypeToOtherRat is not valid(%d)
Line 1658: Reselection to Eutra is in progress, Reject EstReq Type(%d)
Line 1665: SRRC Client is not registered but redirection is not progressed. Just reject EST_REQ
Line 1690: [URRC DSDS] Est Req Rejected from Dsrc
Line 1697: ImsSigPendingOnDsrc was set . which is cleared
Line 1699: [URRC DSDS] Est Req Granted from Dsrc
Line 1736: Rel_EstReq: FailState
Line 1749: [URRC DSDS] Sending Sig Stop to be delayed
Line 1786: Rel_EstReq: Invalid CnDomain
Line 1801: Rel_EstReq: Invalid UE Id
Line 1817: Rel_EstReq: Invalid UE Id
Line 1823: Rel_EstReq: Invalid CnDomain
Line 1841: Rel_EstReq: Primary PLMN Id: MCC(%d%d%d) MNC(%d%d) set to IDT
Line 1858: CSFB Flag Set(%d)
Line 1878: DO not block cell reselection for equipment
Line 1893: QuickRollbackToLte(PsScnx) is forcedly set FALSE due to new CS call
Line 1901: ERROR Stopping TQuickRollbackToLte
Line 1905: TQuickRollbackToLte was running so it was stopped
Line 1911: RelReqAllResources(PsScnx) is forcedly set FALSE due to new CS call
Line 1919: ERROR Stopping TRelReqAllResources
Line 1923: TRelReqAllResources was running so it was stopped
Line 1931: PsScnx RELEASED: FailState
Line 1952: Redirection is in Progress, Reject EstReq based on redirection Rat Type(%d)
Line 1966: RedirectionTypeToOtherRat is not valid(%d)
Line 1975: Reselection to Eutra is in progress, Reject EstReq Type(%d)
Line 1982: SRRC Client is not registered but redirection is not progressed. Just reject EST_REQ
Line 2031: Rel_ScnxEst: FailState
Line 2038: Ignore -> SignallingCnxEstablished is not intended except for HO (cause %d)
Line 2077: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 2182: Rel_EstReq: FailState
Line 2199: ImsSigPendingOnDsrc was set . which is cleared
Line 2210: T_DS_delaySigStop_timer Stopped
Line 2214: ERROR-Stopping T_DS_delaySigStop_timer
Line 2241: CSFB Flag Set(%d) for CM Service Request
Line 2250: Scnx_p->DtaNasMsgPtr : 0x%x
Line 2298: EstIdle_amDataReq: MsgNotSent
Line 2303: EstIdle_amDataReq: FailState
Line 2309: GenerateUplinkResourceReq MsgPtr is NULL
Line 2362: Rel_EstReq: FailState
Line 2376: EstIdle_UserDataReq: TotalULdata = %d bytes
Line 2383: EstIdle_UserDataReq: MsgNotSent
Line 2388: EstIdle_UserDataReq: MsgNotSent
Line 2431: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 2452: EstablishedIdle_RelReq: MsgNotSent
Line 2458: EstablishedIdle_RelReq: FailState
Line 2590: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 2611: EstablishedIdle_RelReq: MsgNotSent
Line 2617: EstablishedIdle_RelReq: FailState
Line 2656: DefaultState_EstRej: MsgNotSent
Line 2702: DefaultState_amEstReject: FailState
Line 2710: DefaultState_EstRej: MsgNotSent
Line 2760: AwaitingRrcCnx_EstRej: MsgNotSent
Line 2779: AwaitingRrcCnx_EstRej: MsgNotSent
Line 2786: AwaitingRrcCnx_EstRej: FailState
Line 2835: EstablishingWaitUlRes_EstRej: MsgNotSent
Line 2840: EstablishingWaitUlRes_EstRej: FailState
Line 2887: AwaitingRlcIdtCnf_EstRej: MsgNotSent
Line 2897: AwaitingRlcIdtCnf_EstRej: MsgNotSent
Line 2902: AwaitingRlcIdtCnf_EstRej: FailState
Line 2910: AwaitingRlcIdtCnf_EstRej: FailState
Line 2962: AwaitingRrcCnx_RelReq: MsgNotSent
Line 2967: AwaitingRrcCnx_RelReq: FailState
Line 3013: EstablishingWaitUlRes_RelReq: FailState
Line 3052: AwaitingRrcRel_RelReq: FailState
Line 3102: [URRC DSDS]  SCNX_AMDATAREQ : Send DATA_CNF
Line 3104: [URRC DSDS]  PendingOnDsrc Grant for MsgId (%d)
Line 3132: Rel_EstReq: FailState
Line 3152: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 3172: EstablishedIdle_RelReq: MsgNotSent
Line 3178: EstablishedIdle_RelReq: FailState
Line 3233: FailState
Line 3245: EstablishedIdle_PSNoDataReq: fdcause=DATAINACTIVITY
Line 3249: EstablishedIdle_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB
Line 3255: EstablishedIdle_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB, QrbRequired %d
Line 3275: MsgNotSent
Line 3280: FailState
Line 3286: CreateSCRIforFastDormancy returned FALSE
Line 3292: T323 is running
Line 3323: EstablishedIdle_PSNoDataReq: Invalid Cause
Line 3357: EstablishedWaitUlRes_PSNoDataReq: fdcause=DATAINACTIVITY
Line 3361: EstablishedWaitUlRes_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB
Line 3367: EstablishedWaitUlRes_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB, QrbRequired %d
Line 3389: Failed to create SCRI for DATAINACTIVITY
Line 3411: EstablishedWaitUlRes_PSNoDataReq: Invalid Cause
Line 3445: AwaitingRlcUlDtCnf_PSNoDataReq: fdcause=DATAINACTIVITY
Line 3449: AwaitingRlcUlDtCnf_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB
Line 3455: AwaitingRlcUlDtCnf_PSNoDataReq: fdcause=PS_SIGNALING_RELEASE_FOR_QRB, QrbRequired %d
Line 3495: AwaitingRlcUlDtCnf_PSNoDataReq: MsgNotSent
Line 3504: Error is starting T_DS_SCRI_protection_timer timer
Line 3519: AwaitingRlcUlDtCnf_PSNoDataReq: MsgNotSent
Line 3526: Waiting for DSRC Response for sending SCRI
Line 3545: AwaitingRlcUlDtCnf_PSNoDataReq: FailState
Line 3584: AwaitingRlcUlDtCnf_PSNoDataReq: Invalid cause
Line 3619: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 3640: EstablishedIdle_RelReq: MsgNotSent
Line 3646: EstablishedIdle_RelReq: FailState
Line 3715: AwaitingRlcScriAndUlDtCnf_DataReq: MsgNotSent
Line 3743: AwaitingRlcScriAndUlDtCnf_EstReq
Line 3848: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 3870: AwaitingRlcScriAndUlDtCnf_RelReq: MsgNotSent
Line 3876: AwaitingRlcScriAndUlDtCnf_RelReq: FailState
Line 3901: AwaitingRlcScriAndUlDtCnf_RlcAmDataAck: SCRI Ack Received
Line 3920: AwaitingRlcScriAndUlDtCnf_RlcAmDataAck: FailState
Line 3928: AwaitingRlcScriAndUlDtCnf_RlcAmDataAck: FailState
Line 3965: AwaitingRlcScriAndUlDtCnf_RlcAmDataNack: SCRI Ack Received
Line 3979: AwaitingRlcScriAndUlDtCnf_RlcAmDataNack: FailState
Line 3987: AwaitingRlcScriAndUlDtCnf_RlcAmDataNack: FailState
Line 4051: waitingRlcScriAndUlDtCnf_RrcCnxRel: FailState
Line 4057: AwaitingRlcScriAndUlDtCnf: Implicit Scnx Release -> Ignored
Line 4091: waitingRlcScriAndUlDtCnf_UlResourcesGranted
Line 4119: AwaitingRlcScriAndUlDtCnf_UlResourcesRejected
Line 4128: AwaitingRlcScriAndUlDtCnf_UlResourcesRejected: FailState
Line 4211: waitingRlcScriAndUlDtCnf_RlcReest: MsgNotSent
Line 4253: waitingRlcScriAndUlDtCnf_RlcRB2Reest: FailState
Line 4261: waitingRlcScriAndUlDtCnf_RlcRB2Reest: FailState
Line 4292: waitingRlcScriAndUlDtCnf_UserInactivity: FailState
Line 4341: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 4361: EstablishedIdle_RelReq: MsgNotSent
Line 4367: EstablishedIdle_RelReq: FailState
Line 4452: EstablishedWaitUlRes_amRelReq(): MsgNotSent to CnxMgr
Line 4473: EstablishedWaitUlRes_RelReq: MsgNotSent
Line 4479: EstablishedWaitUlRes_RelReq: FailState
Line 4516: EstablishedWaitUlRes_amUserDataReq: FailState
Line 4527: EstablishedWaitUlRes_amUserDataReq : USER_DATA_REQ(%d) not acceptable
Line 4583: AwaitingRlcUlDtCnf_amRelReq(): MsgNotSent to CnxMgr
Line 4603: EstablishedWaitUlRes_RelReq: MsgNotSent
Line 4609: EstablishedWaitUlRes_RelReq: FailState
Line 4642: AwaitingRrcCnx_RrcCnxEst: MsgNotSent
Line 4647: AwaitingRrcCnx_RrcCnxEst: FailState
Line 4703: No PagingInd Inst
Line 4709: AwaitingRrcCnx_RrcCnxRej: FailState
Line 4899: ERROR starting Timer TQuickRollbackToLte
Line 4904: Releasing_MsgDlScnxRel: FailState
Line 4919: ERROR starting Timer TRelReqAllResources
Line 4924: Releasing_MsgDlScnxRel: FailState
Line 4938: Releasing_MsgDlScnxRel: FailState
Line 4964: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 4983: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 4989: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5000: AwaitingRlcIdtCnf_RlcAmDataAck: Invalid Domain
Line 5021: AwaitingRlcIdtCnf_RlcAmDataAck: FailState
Line 5052: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5058: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5069: AwaitingRlcIdtCnf_RlcAmDataAck: Invalid Domain
Line 5091: AwaitingRlcIdtCnf_RlcAmDataAck: FailState
Line 5158: AwaitingRlcIdtCnf_RlcAmDataNack: FailState
Line 5186: AwaitingRlcUlDtCnf_RlcAmDataAck: FailState
Line 5221: AwaitingRlcUlDtCnf_RlcAmDataNack: FailState
Line 5283: EstablishingWaitUlRes_UlResGranted: MsgNotSent
Line 5288: EstablishingWaitUlRes_UlResGranted: FailState
Line 5324: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 5355: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 5364: Error is starting T_DS_SCRI_protection_timer timer
Line 5381: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 5388: Waiting for DSRC Response for sending SCRI
Line 5413: EstablishedWaitUlRes_UlResGranted: FailState
Line 5421: EstablishedWaitUlRes_UlResGranted: FailState
Line 5432: EstablishedWaitUlRes_UlResGranted: FailState
Line 5460: %d SCRIs sent but no L2Ack/Nack received so SCNX will be terminated
Line 5468: [RELEASING state] SCRI count(%d)
Line 5474: Releasing_UlResGranted: MsgNotSent
Line 5523: EstablishingWaitUlRes_UlResRej: FailState
Line 5590: V316 (%d), UserV316 (%d)
Line 5600: EstablishedWaitUlRes_UlResRej: FailState
Line 5653: Releasing_amUlResourcesRejected()-Fail to change the state
Line 5665: Releasing_amUlResourcesRejected()-Fail to change the state
Line 5675: Releasing_UlResRej
Line 5723: Releasing_UlResRej: FailState
Line 5746: AwaitingRrcCnx_TerminateReq
Line 5766: EstablishingWaitUlRes_TerminateReq
Line 5786: AwaitingRlcIdtCnf_TerminateReq
Line 5810: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5816: Send URRC_MM_SECURITY_IND at reception of IDT ACK
Line 5827: AwaitingRlcIdtCnf_RlcAmDataAck: Invalid Domain
Line 5851: AwaitingRlcIdtCnf_SignallingCnxEstablished: FailState
Line 5858: Ignore -> SignallingCnxEstablished is not intended except for Delayed L2ACK (cause %d)
Line 5921: Rel_EstReq: FailState
Line 6009: EstablishedIdle_amRelReq(): MsgNotSent to CnxMgr
Line 6030: EstablishedIdle_RelReq: MsgNotSent
Line 6037: EstablishedIdle_RelReq: FailState
Line 6077: AwaitingRrcCnx_EstReq
Line 6096: EstablishingWaitUlRes_EstReq
Line 6114: AwaitingRlcIdtCnf_EstReq
Line 6134: EstablishedIdle_EstReq
Line 6153: EstablishedWaitUlRes_EstReq
Line 6172: AwaitingRlcUlDtCnf_EstReq
Line 6187: AwaitingRlcUlDtCnf_UlResGranted
Line 6201: waitingRlcUlDtCnf_UlResRej
Line 6208: waitingRlcUlDtCnf_UlResRej: FailState
Line 6228: waitingRrcRel_EstReq
Line 6283: AwaitingRrcCnx_RrcCnxRel: FailState
Line 6330: EstablishingWaitUlRes_RrcCnxRel: FailState
Line 6385: AwaitingRlcIdtCnf_RrcCnxRel: FailState
Line 6422: EstablishingWaitUlRes_MsgDlScnxRel: FailState
Line 6460: EstablishingWaitUlRes_MsgDlScnxRel: FailState
Line 6491: EstablishingWaitUlRes_UserInactivity: FailState
Line 6528: AwaitingRrcRel_RrcCnxRel: FailState
Line 6537: AwaitingRrcRel_RrcCnxRel: FailState
Line 6581: EstablishedIdle_RrcCnxRel: FailState
Line 6587: EstablishedIdle: Implicit Scnx Release -> Ignored
Line 6649: EstablishedWaitUlRes_RrcCnxRel: FailState
Line 6655: EstablishedWaitUlRes: Implicit Scnx Release -> Ignored
Line 6694: AwaitingRlcUlDtCnf_RrcCnxRel: FailState
Line 6700: AwaitingRlcUlDtCnf: Implicit Scnx Release -> Ignored
Line 6751: ERROR Starting TQuickRollbackToLte
Line 6756: Releasing_RrcCnxRel
Line 6781: ERROR Starting TRelReqAllResources
Line 6786: Releasing_RrcCnxRel
Line 6827: Releasing_RrcCnxRel: FailState
Line 6862: ERROR Starting TQuickRollbackToLte
Line 6867: Releasing_RlcAmDataAck: FailState
Line 6882: ERROR Starting TRelReqAllResources
Line 6887: Releasing_RlcAmDataAck: FailState
Line 6918: Releasing_RlcAmDataAck: MsgNotSent
Line 6927: Releasing_RlcAmDataAck: FailState
Line 6944: Releasing_RlcAmDataNack: Failed to send SCRI (Releasing->Released: IDLE)
Line 6984: Releasing_RlcAmDataNack: FailState
Line 6993: Releasing_RlcAmDataNack: Failed to send SCRI (Releasing->Releasing: NON-IDLE)
Line 6998: Releasing_RlcAmDataNack: Failed to generate SCRI (Releasing->Releasing: NonIDLE)
Line 7022: Releasing_RlcAmDataNack: MsgNotSent
Line 7055: AwaitingRlcIdtCnf_RlcReset: MsgNotSent
Line 7061: AwaitingRlcIdtCnf_RlcReset: FailState
Line 7067: AwaitingRlcIdtCnf_RlcReset: IdtMsgInstId = NULL
Line 7143: AwaitingRlcUlDtCnf_RlcReest: MsgNotSent
Line 7175: Releasing_RlcRB2Reest: Failed to send SCRI (Releasing->Released: IDLE)
Line 7214: Releasing_RlcRB2Reest: FailState
Line 7239: Releasing_RlcRB2Reest: MsgNotSent
Line 7273: TQuickRollbackToLte Timer stopped
Line 7277: Error: Stopping TQuickRollbackToLte
Line 7296: TRelReqAllResources Timer stopped
Line 7300: Error: Stopping TRelReqAllResources
Line 7313: ReleasingWaitCnxRel_RrcCnxRel: FailState
Line 7335: WaitCnxRel : Ignore Scnx Release
Line 7383: AwaitingBplmnAbortCnf_amRelReq()
Line 7392: AwaitingBplmnAbortCnf_amRelReq()
Line 7456: AwaitingBplmnAbortCnf_amTerminateReq()
Line 7468: AwaitingBplmnAbortCnf_amTerminateReq()
Line 7479: AwaitingBplmnAbortCnf_amTerminateReq()
Line 7562: AwaitingBplmnAbortCnf: Implicit Scnx Release -> Ignored
Line 7575: AwaitingBplmnAbortCnf_amRrcCnxReleased()
Line 7654: AwaitingBplmnAbortCnf_amMsgDlScnxRel()
Line 7718: AwaitingBplmnAbortCnf_BplmnAborted: FailState
Line 7760: AwaitingBplmnAbortCnf_BplmnAborted: FailState
Line 7897: [DSDS] T_DS_delaySigStop_timer running, ignoring sig_stop from NAS
Line 7918: [DSDS] Failed to Start T_DS_delaySigStop_timer
Line 7928: [DSDS] Failed to Start T_DS_delaySigStop_timer
Line 7968: [URRC DSDS] IMS Signaling Rejected from Dsrc
Line 7974: [URRC DSDS] IMS Signaling Granted from Dsrc
Line 7993: SigStart handled for already IMS_signalling state
Line 7999: Nas_signalling request for PS domain is already pending on DSRC
Line 8048: Nas_signalling request for PS domain is already pending on DSRC
Line 8092: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8098: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode:, PS(%d), PS_IMS(%d)
Line 8129: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8135: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode:, CS(%d), PS_IMS(%d)
Line 8156: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8161: [URRC DSDS] CUPHY_SIG_START not sent for IMS. CS is in Signaling mode
Line 8194: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8199: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8206: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode:, PS(%d), PS_IMS(%d)
Line 8231: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8236: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8244: [URRC DSDS] CUPHY_SIG_STOP not sent, Signaling mode: CS(%d), PS(%d), PS_IMS(%d)
Line 8262: [URRC DSDS] Handling delay time expiry
Line 8277: T_DS_delaySigStop_timer Stopped
Line 8281: ERROR-Stopping T_DS_delaySigStop_timer
Line 8293: ERROR: Msg creation failed
Line 8313: UMTS INIT/NON UMTS RAT MODE happens, Send Sig Stop
Line 8317: UMTS INIT/NON UMTS RAT MODE happens, Signaling already stopped
Line 8362: UMTS RAT MODE happens, Send Sig Start
Line 8408: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8413: [URRC DSDS] CUPHY_SIG_START not sent. PS is in Signaling mode
Line 8441: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8446: [URRC DSDS] CUPHY_SIG_START not sent. CS is in Signaling mode
Line 8464: [URRC DSDS] CUPHY_SIG_START not sent,UPHY already intialised
Line 8469: [URRC DSDS] CUPHY_SIG_START not sent. CS is in Signaling mode
Line 8502: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8507: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8513: [URRC DSDS] CUPHY_SIG_STOP not sent. PS is in Signaling mode
Line 8535: [URRC DSDS] CUPHY_SIG_STOP not sent,Signaling already stopped
Line 8540: [URRC DSDS] CUPHY_SIG_STOP not sent,UPHY already intialised
Line 8546: [URRC DSDS] CUPHY_SIG_STOP not sent. CS is in Signaling mode
Line 8559: [URRC DSDS] Handling delay time expiry
Line 8599: rrc_UnRegister_CnxMgr_StateChange FAILED
Line 8633: T_DS_delaySigStop_timer Stopped
Line 8637: ERROR-Stopping T_DS_delaySigStop_timer
Line 8647: Error in stopping T_DS_SCRI_protection_timer
Line 8680: rrc_UnRegister_CnxMgr_StateChange FAILED
Line 8691: Could not start TimerEstReq(%d s)
Line 8696: TimerEstReq is already running
Line 8727: CallbackTimerEstReqExpiry: MsgNotSent
Line 8732: CallbackTimerEstReqExpiry: FailState
Line 8743: Could not stop TimerEstReq(Timer Id %d)
Line 8786: [SendNasRelInd] ReleaseType %d
Line 8885: CalcRpBasedOnIdScope: Invalid IdScope
Line 8927: CalcRpBasedOnEstCause: Invalid IMSI
Line 8958: CalcRpBasedOnEstCause: Invalid UE Id
Line 8986: CalcRpBasedOnEstCause: Invalid IMSI
Line 9018: CalcRpBasedOnEstCause: Invalid UE Id
Line 9036: CalcRpBasedOnEstCause: Invalid IMEI
Line 9041: CalcRpBasedOnEstCause: Invalid EstCause %d
Line 9085: ChangeState: FailState
Line 9105: ChangeState: MsgNotSent
Line 9125: Camp On Acceptable cell -> Acceptable cell is not HPLMN/EPLMN/Acting PLMN
Line 9131: Camp On Acceptable cell -> Acceptable cell is not H-PLMN/E-PLMN
Line 9144: ChangeState: MsgNotSent
Line 9149: FailState-Rrc_Cnx_Established
Line 9160: FailState-Rrc_Cnx_Established
Line 9167: ChangeState: MsgNotSent
Line 9175: FailState-Rrc_Cnx_Releasing
Line 9185: FailState-Rrc_Cnx_Establishing
Line 9190: ChangeState: Invalid CnxMgrState
Line 9225: SetLocalTmsiRoutingPar: Invalid TMSI
Line 9257: SetLocalPtmsiRoutingPar: Invalid PTMSI
Line 9293: SetSamePlmnTmsiRoutingPar: Invalid TMSI
Line 9326: SetSamePlmnPtmsiRoutingPar: Invalid PTMSI
Line 9360: SetDiffPlmnTmsiRoutingPar: Invalid TMSI
Line 9393: SetDiffPlmnPtmsiRoutingPar: Invalid TMSI
Line 9412: T323 Stopped
Line 9416: ERROR-Stopping T323
Line 9436: Scnx_StartT323: T323 (%d)Ms Started
Line 9439: Failed to Start T323
Line 9461: GenMsg is NULL
Line 9476: Clear CSFB Flag
Line 9495: Clear QrbRequired Flag
Line 9553: CreateSCRIforFastDormancy: V316 (%d), UserV316 (%d)
Line 9556: Creating SCRI for DATAINACTIVITY
Line 9617: EstablishedTerminate: MsgNotSent
Line 9623: EstablishedTerminate: FailState
Line 9653: ReleasingTerminate: MsgNotSent
Line 9664: ReleasingTerminate: FailState
Line 9703: EstablishingTerminate: FailState
Line 9805: MsgDownlinkRel: FailState
Line 9849: HandoverToGsmCompl: WARNING! Received in PS Domain(%d)
Line 9920: HandoverToGsmCompl: Invalid Domain
Line 10009: UlDtMsgInst Not Found in LinkList
Line 10049: UlDtMsgInst Not Found in LinkList
Line 10084: CnxMgr requested to initiate Cell Update for UL Data Tx
Line 10089: No need to worry about CnxMgr Active changes in Scnx_p Scnx state
Line 10093: Scnx Not interested in Scnx_p CnxMgr Active State Change
Line 10107: Awaiting IDT Cnf or Awaiting SCRI Cnf (%d): Transition to PCH
Line 10111: Scnx Not interested in CnxMgr Pending State Changes
Line 10274: SetBlockIratResel blockIratReselInFach set to TRUE
Line 10286: ResetBlockIratResel blockIratReselInFach set to FALSE
Line 10313: There is already same MsgId(%x): Replace it
Line 10329: SavedMsgCount(%d) is MAX_SAVED_MSG(%d) - This new msg cannot be saved. Discard MsgId(%x)
Line 10334: Save an CurrentMsg(%x) at SavedMsgPtr[%d]
Line 10345: [State : %d] Save CurrentState
Line 10359: Re-post SavedMsgPtr[%d] MsgId(%x)
Line 10368: SavedMsgCount is %d, no saved msg so repost is not needed
Line 10411: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 10432: PLMN ID is not available
Line 10447: FD req is ignored in Cell_PCH and Ura_PCH by requirement
Line 10452: FD req is ignored in RadiolinkFailure
Line 10502: EstablishedWaitUlRes_UlResGranted: MsgNotSent
Line 10512: Error is starting T_DS_SCRI_protection_timer timer
Line 10529: EstablishedWaitUlRes_UlResGranted: MsgNotSent
