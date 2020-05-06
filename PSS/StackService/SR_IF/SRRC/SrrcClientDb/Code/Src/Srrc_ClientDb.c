Line 110: Released_DeregistrationReq
Line 121: Released_DeregistrationReq : [MISMATCH!!] [Incoming = %s(%d)] [InDb = %s(%d)]
Line 133: ResolvePending_DeregistrationReq
Line 156: Post To InternalQ FAILED
Line 167: ResolvePending_DeregistrationReq : [MISMATCH!!] [Incoming = %s(%d)] [InDb = %s(%d)]
Line 181: Default_RequestProcedure
Line 275: [CDB] [%s(%d)] Requested for %s(%s)
Line 281: Post To InternalQ FAILED
Line 295: Default_RequestProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 307: Released_UpdateProcedure
Line 319: [CDB] [%s(%d)] Duplicate Update to %s(%s) IGNORED
Line 331: [CDB] [%s(%d)] Updated to %s(%s)
Line 341: Post To InternalQ FAILED
Line 362: Post To InternalQ FAILED
Line 369: Released_UpdateProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 381: Default_UpdateProcedure
Line 406: [CDB] [%s(%d)] Duplicate Update to %s(%s) IGNORED
Line 471: [CDB] [%s(%d)] Updated to %s(%s)
Line 481: Post To InternalQ FAILED
Line 511: Post To InternalQ FAILED
Line 537: Default_UpdateProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 549: Requested_RequestProcedure
Line 568: [CDB] [%s(%d)] ReRequested for %s(%s), Previous Requested %s(%s)
Line 580: Requested_RequestProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 592: Requested_UpdateProcedure
Line 602: [CDB] [%s(%d)] Updated to %s(%s), Previous Requested %s(%s)
Line 631: Post To InternalQ FAILED
Line 650: Post To InternalQ FAILED
Line 665: Requested_UpdateProcedure: Invalid Proc[%d] or ProcCause [%d]
Line 677: Requested_AllowProcedure
Line 699: [CDB] [%s(%d)] Request Granted(Discrete) for CellSelection Procedure
Line 715: [CDB] [%s(%d)] Request Granted(Continuous) for %s Procedure
Line 729: [Allowed Proc : %s] != [Current Proc : %s]
Line 741: Requested_BlockProcedure
Line 765: [CDB] [%s(%d)] Request Rejected (WithWait) for %s Procedure
Line 783: [CDB] [%s(%d)] Request Rejected (No Wait) for %s Procedure
Line 791: [CDB] [%s(%d)] RollBack to %s(%s) Procedure
Line 834: [Blocked Proc : %s] != [Current Proc : %s]
Line 846: Requested_PauseAck
Line 853: [CDB] [%s(%d)] Pause Ack Received for %s
Line 863: [Pause Acked Proc : %s] != [RollBack Proc : %s]
Line 869: [WARNING][Pause Ack Not Expected in Requested State][Rollback_State = %s]
Line 881: Requested_AbortAck
Line 891: [CDB] [%s(%d)] Abort Ack Received for %s , Rollback saved  to %s(%s)
Line 913: Requested_AbortAck: Invalid Fallback Proc[%d] or Fallback ProcCause [%d]
Line 919: [Abort Acked Proc : %s] != [Rollback Proc : %s]
Line 925: [WARNING][Abort Ack Not Expected in Requested State][Rollback_State = %s]
Line 937: Pending_AllowProcedure
Line 944: [CDB] [%s(%d)] Pending CellSelection Procedure Started discrete
Line 960: [CDB] [%s(%d)] Pending %s Procedure Started Continuous
Line 974: [Allowed Proc : %s] != [Current Proc : %s]
Line 986: Ongoing_AllowProcedure
Line 997: [CDB] [%s(%d)] Ongoing CellSelection Procedure Switched to Discrete
Line 1011: [Allowed Proc : %s] != [Current Proc : %s]
Line 1023: Ongoing_BlockProcedure
Line 1042: [CDB] [%s(%d)] Ongoing %s Procedure Pause Req Sent (No Ack Expected), BlockingProc %s 
Line 1066: [CDB] [%s(%d)] Ongoing %s Procedure Pause Req Sent (Pause Ack Expected),  BlockingProc %s 
Line 1087: [CDB] Pause Req with Ack for Active 4G and Abort Req for Passive 2G triggered
Line 1122: [CDB] [%s(%d)] Ongoing %s Procedure Abort Req Sent (Abort Ack Expected)
Line 1152: [Blocked Proc : %s] != [Current Proc : %s]
Line 1164: OngoingDiscrete_AllowProcedure
Line 1174: [CDB] [%s(%d)] Ongoing Srrc_CellSelection Procedure Switched to Continuous
Line 1188: [Allowed Proc : %s] != [Current Proc : %s]
Line 1207: Pausing_PauseAck
Line 1221: [CDB] [%s(%d)] Pause Ack Received for %s
Line 1227: Post To InternalQ FAILED
Line 1243: [Pause Acked Proc : %s] != [Current Proc : %s]
Line 1277: Paused_AllowProcedure
Line 1284: [CDB] [%s(%d)] Paused CellSelection Procedure Resumed Discrete
Line 1300: [CDB] [%s(%d)] Paused %s Procedure Resumed Continuous
Line 1314: [Allowed Proc : %s] != [Current Proc : %s]
Line 1326: Aborting_AbortAck
Line 1341: [CDB] [%s(%d)] Abort Ack Received for %s , Falling back to %s(%s)
Line 1357: Post To InternalQ FAILED
Line 1376: Post To InternalQ FAILED
Line 1391: Aborting_AbortAck: Invalid Fallback Proc[%d] or Fallback ProcCause [%d]
Line 1397: [Abort Acked Proc : %s] != [Current Proc : %s]
Line 1414: [CDB] [%s(%d)] FallBack from %s[%s] to %s[%s]
Line 1443: [CDB] [%s(%d)] Client to use UPDATE ILM
Line 1449: [CDB] [%s(%d)] Client to use REQUEST ILM
Line 1464: Post To InternalQ FAILED
Line 1503: Post To InternalQ FAILED
Line 1985: [CDB] [%s(%d)] CGI State update received, State %d
Line 1992: [CDB] [%s(%d)] GetCurrentProcedure(%s)
