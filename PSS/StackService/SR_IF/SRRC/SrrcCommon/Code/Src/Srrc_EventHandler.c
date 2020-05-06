Line 54: SRRC_RX Event :SrIf_Srrc_StartUpInit 
Line 66: SRRC_RX Event :SrIf_Srrc_StartUpInit: Client exist, so ignore Init procedure 
Line 83: SRRC_RX Event :SrIf_Srrc_ShutdownDestroy : SRRC memory is freed. 
Line 87: SRRC_RX Event :SrIf_Srrc_ShutdownDestroy: Client exist, memory shall not be cleared
Line 103: SRRC_RX Event[REGISTRATION_REQ] (%s)
Line 114: Post To InternalQ FAILED
Line 133: SRRC_RX Event[DEREGISTRATION_REQ] (ClientIdentity = %s(%d))
Line 148: SRRC_RX Event[DEREGISTRATION_REQ] (ClientIdentity = %s(%d))
Line 159: Post To InternalQ FAILED
Line 165: [DEREGISTRATION_REQ] (ClientIdentity = %s(%d)) not expected, Ignored
Line 188: SRRC_RX Event[REQUEST_PROCEDURE] (ClientIdentity = %s(%d)) (ReqProc = %s) (ReqProcCause = %s)
Line 198: Post To InternalQ FAILED
Line 204: [REQUEST_PROCEDURE] (ClientIdentity = %s(%d)) not expected, Ignored
Line 226: SRRC_RX Event[UPDATE_PROCEDURE] (ClientIdentity = %s(%d)) (UpdProc = %s) (UpdProcCause = %s)
Line 236: Post To InternalQ FAILED
Line 242: [UPDATE_PROCEDURE] (ClientIdentity = %s(%d)) not expected, Ignored
Line 264: SRRC_RX Event[PAUSE_ACK] (ClientIdentity = %s(%d)) (PausedProc = %s)
Line 275: Post To InternalQ FAILED
Line 281: [PAUSE_ACK] (ClientIdentity = %s(%d)) not expected, Ignored
Line 305: SRRC_RX Event[ABORT_ACK] (ClientIdentity = %s(%d)) (AbortedProc = %s) (FallbackProcedure = %s) (FallbackProcCause = %s)
Line 316: Post To InternalQ FAILED
Line 322: [ABORT_ACK] (ClientIdentity = %s(%d)) not expected, Ignored
Line 346: SRRC_RX Event[FALLBACK_IND] (ClientIdentity = %s(%d)) (FallbackProcedure = %s) (FallbackProcCause = %s) (FallbackProcState = %s)
Line 357: Post To InternalQ FAILED
Line 363: [FALLBACK_IND] (ClientIdentity = %s(%d)) not expected, Ignored
Line 373: SRRC_RX Event[UPDATE_CGI_STATE] (ClientIdentity = %s(%d)) (CgiState = %d)(0 - Start, 1 -Stop)
Line 385: SRRC_TX Event[REGISTRATION_RESP] (ClientIdentity = %s(%d)) (Status = %s)
Line 396: SRRC_TX Event[REQUEST_RESP] (ClientIdentity = %s(%d)) (RequestedProc = %s) (ReturnedAction = %s)
Line 406: SRRC_TX Event[START_REQ] (ClientIdentity = %s(%d)) (ProcToStart = %s) (ProcMode = %s)
Line 416: SRRC_TX Event[PAUSE_REQ] (ClientIdentity = %s(%d)) (ProcToPause = %s) (PeerProcCausingPause = %s)
Line 426: SRRC_TX Event[RESUME_REQ] (ClientIdentity = %s(%d)) (ProcToResume = %s) (ProcMode = %s)
Line 436: SRRC_TX Event[ABORT_REQ] (ClientIdentity = %s(%d)) (ProcToAbort = %s)
Line 446: SRRC_TX Event[SWITCH_REQ] (ClientIdentity = %s(%d)) (ProcToSwitch = %s) (ProcNewMode = %s)
