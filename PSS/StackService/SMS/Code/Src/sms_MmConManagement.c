Line 149: Retry when Channel Release received in SMS_WAITING_FOR_MO_CP_ACK state
Line 159:  Re-Transmit the SMS Message: RetryCount=%d, smsMaxRetry=%d
Line 191:  Retry Not allowed during GCF mode
Line 242:  No State match in sms_DecodeMmRelIndMsg
Line 281: SessionNumber=%d, Status in EMM_DATA_STATE_NOTI =%d
Line 300:  No EMM connection after trying 3 times Rejecting SMS
Line 309:  State :   EMMSMS_WAITING_FOR_MO_CP_ACK
Line 323: EMM connection may not be possible, clear session and give fail
Line 335: EMM connection may not be possible, clear session and give fail
Line 343: Not handled in this state
Line 357:  Sending est request after SAEMM state is READY
Line 371:  RP DATA has not recived to the Network , Retranmiting
Line 378: RP DATA has  recived to the Network but RRC connection released before CP ACK 
Line 400: DCM requests to retransmit SMS directly.
Line 405: TR1MO Running & DatCbf Success; Delay till TR1MO expiry 
Line 412: Sent the EST REQ after expire of TR1MO timer to send CP ERROR 
Line 421: Trying EST_REQ for re-sending MT RP_ACK
Line 444: Trying EST_REQ for sending RP_ERROR
Line 449: Waiting for MT RP-Ack, TC1MT running, ignore this.
Line 456:  No SMS transaction is going on
Line 470: EMM connection is not possible, clear session and give fail
Line 478: EMM connection is not possible, clear session and give fail
Line 485: EMM connection is not possible, clear session and give fail
Line 493: No SMS transaction is going on 
Line 501: Unknown SMS state 
Line 528: Transaction Id -> %x
Line 532: Exception: Stop handler function
Line 544: Current State %d
Line 547: SAEMM_SMS_DATA_FAILURE Received from EMM. Retrying Rp Ack
Line 566: Saved PLMN ID=%x:%x:%x
Line 567: Received PLMN ID=%x:%x:%x
Line 592: Displaying Message Contents: %s
Line 612: PLMN ID=%x:%x:%x, LAC = %x:%x, CELL ID=0x%x
Line 620: MmCellInfoRsp ignored
Line 645: sms_DecodeMmErrIndMsg 
Line 838:  messages in wrong state
Line 867:  sms_SendMmCpErrMsg
Line 929:  sms_SendLlcCpErrMsg 
Line 975:  sms_SendPmmCpErrMsg
Line 1016: currentRatChangeStatus:%d, Received Status:%d
Line 1029: Mis-match between states 
Line 1045: Transaction Id -> %x
Line 1046:  Stop TR1 and indicated Failure to AP 
Line 1053:  TR1 Timer is not running So Change the State accordingly 
Line 1063: Mis-match between states 
Line 1070: Invalid Status in sm_DecodeSmRegRatModeChangeReqMsg 
Line 1107: Rejecting GAPI's MO Req. RAT Change in progress !!
Line 1123: Sms.sms_ActiveRat: %s -> %s
Line 1167: ActiveRat(%s) 
Line 1203: Unknown Initialisation Type (%x) in mm_InitTestModeManagement 
Line 1249: CM Service Rej Cause Value-> %x and Cause String -> %s 
Line 1284:  RAT Mode Status -> %s
Line 1294: Current active RAT = %d
Line 1376: Unknown Rat Mode in sms_ProcessRatModeMsg
Line 1430: Unknown Initialisation Type (%x) in sms_Main
Line 2045: Sms.Set.sms_RatChange_cause: %d -> %d
Line 2052: Sms.Get.sms_RatChange_cause: %d 
