Line 107: SessionNumber (%x)  Timer_catagory(%x) in sms_StopAllTimers
Line 123: SessionNumber (%x)  Timer_catagory(%x) in smsTimer_Set
Line 136: SessionNumber (%x)  TimerCategory(%x) in smsTimer_Reset
Line 162: sms_UpdTimerId:ENTRY TimerId: %d sms_CurrentStackId: %d
Line 177: sms_UpdTimerId:EXIT TimerId: %d sms_CurrentStackId: %d
Line 204: Wrong Timer: %d is expired. Ignore this event
Line 225: Timer: %s is expired (TI=%d, Session=%d)
Line 232: Timer: Exception - Expired during rat change (TimeoutCount for ratChange=%d / MaxTrial=%d)
Line 241: Timer: Exception - Send Failure Response
Line 329: Timer: Exception-Unknown Category(%d) in %s
Line 351: SessionNumber -> %x
Line 357: Transaction Id -> %x
Line 365: smsSpecificTransmitScheme:%d
Line 409: TC1MO timeout over max trial(%d). Send MM_REL_REQ
Line 418: DCM will not re-try PS domain in case of TC1MO expiry
Line 424: Retry PS domain
Line 438: SMS can't be sent in PS
Line 584: Final Time Out For Sending SMS Message Over the PS Domain
Line 603: SMS Messages Not Allowed To be Sent Over the CS Domain Abandoning GAPI Request
Line 614: There is no  DATA_STATE_NOTY with status READY after EST ERR sending SR with failed cause
Line 621: Timed out in Wrong State in sms_ProcessTimerExpiryMmTc1mo1
Line 649: Transaction Id -> %x
Line 672: Tr1moRetransmitted == TRUE
Line 712: Initiating SMS Over the PS Domain
Line 729: TR1MO expired but SMS received at MT
Line 777: Max. Retry done!! Send CP ERROR.
Line 787: Sending CP-ERROR on TR1MO Expiry
Line 818: sms_ProcessTimerExpiryMmTc1mo1 - sms_RetryRegStateCount >= SMS_MAX_GMM_REG_STATE_REQ
Line 819: Final Time Out For Sending SMS Message Over the PS Domain
Line 823: Initiating SMS Message Over the CS Domain
Line 836: SMS Messages Not Allowed To be Sent Over the CS Domain.Abandoning GAPI Request.
Line 899: Transaction Id -> %x
Line 976: Timed out in Wrong State in sms_ProcessTimerExpiryTramo
Line 1004: Transaction Id -> %x
Line 1015: GapiRspReceived:%d, GapiRspResult:%d
Line 1025: TC1MT Timed Out ! GAPI Response Received, but CpAck from Network Not Received yet
Line 1035: Abandon Message
Line 1052: TC1MT Timed Out   
Line 1060: GAPI's Response NOT Received. Abort Operations 
Line 1073:  GAPI Response Was -ve. Abort Operations.
Line 1104: Max retries reached, Abandon Message
Line 1111: Gapi rsp not rcvd or Validation failed, we will try to send RP-Error
Line 1191:  Timed out in Wrong State in sms_ProcessTimerExpiryGprsSmsTc1mt1
Line 1234:  Error:- Timer expired in Invalid state
Line 1343: Transaction Id -> %x
Line 1385:  Error:- Timer expired in Invalid state
Line 1406: Wrong Timer: %d is asked. failed to start timer
Line 1483: Timer: Exception-Unknown Category(%d) in %s
Line 1522: Timer: %s is started (TI=%d, Session=%d, Timeout=%d sec)
Line 1545:  pal_TmCreateMsgTimer did not return PAL_SUCCESS in smsTimer_Create
Line 1572: Timer: CB valid timer(%d) is started for One hour
Line 1578: Timer: CB valid timer(%d) is started for Twenty Four Hours
Line 1584: Wrong Timer: %d is asked. failed to start timer
Line 1604: Timer: CB valid timer(%d) is stopped
Line 1609: Wrong Timer: %d is asked. failed to stop timer
Line 1630: Wrong Timer: %d is asked. failed to start timer
Line 1661: Timer: Exception-Unknown Category(%d) in %s
Line 1693: Timer: %s is stopped (TI=%d / Session=%d)
Line 1734: Timer: Exception-Unknown ID=%d
Line 1743: Timer: Exception-Unknown ID=%d
Line 1753: Timer: %s is restarted (TI=%d, Session=%d, Timeout=%d sec)
Line 1798: + Timer : SMS_TR1MO -> RUNNING
Line 1804: + Timer : SMS_TRAMO -> RUNNING  
Line 1810: + Timer : SMS_TC1MO -> RUNNING  
Line 1816: + Timer : SMS_TC1MT -> RUNNING 
Line 1822: + Timer : SMS_RETRY_ESTREQ -> RUNNING 
Line 1828: + Timer : SMS_CP_ACK_DELAY -> RUNNING 
Line 1836: + Timer : SMS_GUARDMO -> RUNNING 
Line 1861: + No Timers are Running
Line 1867: Attempting to Write Using Invalid SessionNumber (%x) in smsTimer_DisplayAllStates 
Line 1883: Session (%x)  Timer_catagory(%x) in smsTimer_CreateTimers
Line 1898: pal_TmCreateMsgTimer return PAL_NOT_SUCCESS in smsTimer_CreateTimers
Line 1911: smsTimer_Initiailse InitType: %d
Line 1936: Unknown Initialisation Type (%x) in smsTimer_Initiailse 
