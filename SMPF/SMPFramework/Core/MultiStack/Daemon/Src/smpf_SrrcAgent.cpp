Line 57: %s
Line 61: Invalid Regi state : %d
Line 67: [SRRC] registration failure. ClientID(%d)
Line 73: [SRRC] registration success. ClientID(%d)
Line 88: %s
Line 92: [SRRC] abnormal state (st:%d,req:%d,msg:%d)
Line 106: [SRRC] Proc(%d) Grant accepted
Line 116: [SRRC] Proc(%d) Grant accepted with Discrete mode
Line 122: [SRRC] Discrete mode not allowed in Proc(%d) 
Line 130: [SRRC] Proc(%d) Grant REJECTED with wait
Line 136: [SRRC] Proc(%d) Grant REJECTED
Line 141: [SRRC] Error ReturnedAction(%d)
Line 152: %s
Line 156: [SRRC] abnormal state : state(%d),req(%d),msg(%d)
Line 163: [SRRC] Proc(%d) start request received, ProcMode(%d)
Line 169: [SRRC] Proc(%d) Grant accepted with Discrete mode
Line 175: [SRRC] Discrete mode not allowed in Proc(%d) 
Line 182: [SRRC] Proc(%d) Grant accepted with Continuous mode
Line 192: %s
Line 196: [SRRC] abnormal state : state(%d),req(%d),msg(%d)
Line 202: [SRRC] Proc(%d) start request received
Line 208: [SRRC] Proc(%d) Grant accepted with Discrete mode
Line 214: [SRRC] Discrete mode not allowed in Proc(%d) 
Line 221: [SRRC] Proc(%d) Grant accepted with Continuous mode
Line 232: %s
Line 236: [SRRC] Pause proc type mismatch :cur(%d), pause(%s) -> ignore
Line 244: [SRRC] Grant Paused state : cur(%d),state(%d) -> Send Puase Ack 
Line 249: [SRRC] Not have grant : cur(%d),state(%d) -> ignore 
Line 254: [SRRC] Proc(%d) pause received
Line 265: %s
Line 269: [SRRC] Abort proc type mismatch :cur(%d), pause(%s) -> ignore
Line 275: [SRRC] Not have grant : cur(%d),state(%d) -> ignore 
Line 279: [SRRC] Proc(%d) abort received
Line 287: %s
Line 291: [SRRC] Switch is not supported in proc (%d)
Line 297: [SRRC] CurProc (%d) is same as ReqProc (%d)
Line 301: [SRRC] cell search mode chg [%d] -> [%d]
Line 309: %s
Line 344: %s
Line 345: [%s] MSD ===> SRIF_MSD_SRRC_REGISTRATION_REQ [RatId: %d]
Line 383: %s
Line 387: Ignore deregister request in Regi_none state
Line 391: [%s] MSD ===> SRIF_MSD_SRRC_DEREGISTRATION_REQ [ClientId : %d][RatId: %d]
Line 430: %s
Line 434: Ignore procedure request Not in Regi_done state
Line 439: [%s] MSD ===> SRIF_MSD_SRRC_REQUEST_PROCEDURE_REQ [ClientId : %d][Proc: %d][Cause : %d]
Line 482: %s
Line 491: Ignore update request Not in Regi_done state
Line 499: Ignore Duplicated update request
Line 505: Ignore update request in Grant_req state
Line 512: Ignore update request in Grant Reject and wait state, ReqProc(%d) > CurProc(%d)
Line 542: %s
Line 547: [SRRC] Pause proc type mismatch :cur(%d), pause(%d) -> ignore
Line 551: [%s] MSD ===> SRIF_MSD_SRRC_PAUSE_ACK_IND [ClientId : %d][Proc: %d]
Line 592: %s
Line 594: [%s] MSD ===> SRIF_MSD_SRRC_ABORT_ACK_IND [ClientId : %d][AbortProc: %d][fallbackPorc: %d][fallbackCause : %d]
Line 637: [%s] MSD ===> SRIF_MSD_SRRC_UPDATE_PROCEDURE_REQ [ClientId : %d][Proc: %d][Cause : %d]
Line 678: SendMessage : Fail -> nullptr Message Body
Line 702: [SRRC] SRRC DB init(%d)
