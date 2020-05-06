Line 54: %s
Line 58: Invalid Regi state : %d
Line 64: Registration success
Line 69: Registration fail
Line 79: %s
Line 83: Abnormal state - : grant_State : %d, req_proc: %d
Line 91: Grant not Received -> other RAT is SRNC_CSCALL state
Line 96: Grant not Received -> pending
Line 104: [SRNC] Proc(%d): Grant Received
Line 127: %s
Line 131: [SRNC] Abnormal state (state:%d,req_proc:%d,msg_proc:%d)
Line 134: [SRNC] Recv grant release ind : ReqProc(%d)
Line 141: %s
Line 145: [SRNC] Abnormal state (state:%d,req_proc:%d)
Line 148: [SRNC] Cease Sync Request
Line 159: %s
Line 161: [SRNC] suspend message (cur_proc:%d, state:%d) -> send to GSS
Line 170: %s
Line 172: [SRNC] resume message (cur_proc:%d, state:%d) -> send to GSS
Line 181: %s
Line 185: [SRNC] SRNC state : %d
Line 191: %s
Line 212: %s
Line 216: Ignore standby request Not in Regi_done state
Line 221: [%s] MSD ===> SRIF_MSD_SRNC_STANDBY_REQ [Proc : %d][Cause : %d][isQuery : %d]
Line 262: Fail to send standby request, Message alloc fail
Line 268: %s
Line 274: Ignore Resume request Not in Regi_done state
Line 278: [%s] MSD ===> SRIF_MSD_SRNC_RESUME_REQ [Proc : %d]
Line 310: Fail to send resume request, Message alloc fail
Line 316: %s
Line 318: [%s] MSD ===> SRIF_MSD_SRNC_PENDING_PROC_UPDATE_REQ [Proc : %d][Status : %d]
Line 352: Fail to send pending proc update request, Message alloc fail
Line 358: %s
Line 359: [%s] MSD ===> SRIF_MSD_SRNC_REGISTER_REQ
Line 391: Fail to send SRNC registration request, Message alloc fail
Line 397: %s
Line 401: Ignore deregister request in Regi_none state
Line 405: [%s] MSD ===> SRIF_MSD_SRNC_DEREGISTER_REQ
Line 439: Fail to send SRNC De-Registration request, Message alloc fail
Line 445: %s
Line 459: [SRNC] ReleaseProc(%d) is contained curState(%d)
Line 465: [SRNC] ReleaseProc(%d) is granted by Srnc
Line 470: [SRNC] Trigger ReleaseReq in GrantState(%d)
Line 485: [SRNC] Invalid proc for release : CurProc(%d), ReqProc(%d)
Line 491: %s
Line 501: [SRNC] already ongoing procedure
Line 509: [SRNC] Grant Rejected Proc(%d) is exist), Send Resume first
Line 515: [SRNC] CurSrncState (%d) : Do Nothing
Line 518: [SRNC] Start procedure (proc:%d, cause:%d)
Line 527: SendMessage : Fail -> Nullptr Message Body
Line 537: [SRNC] SRNC DB init(%d)
