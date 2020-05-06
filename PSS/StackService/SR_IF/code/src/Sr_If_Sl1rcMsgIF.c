Line 145: [I][SRIF] Mmc_Dsl1rc_RsrcReq_Pending : %d -> %d 
Line 180: [I][SRIF] Mmc_Dsl1rc_LTE_Client_ID : %d -> %d 
Line 218: [I][SRIF] Mmc_Dsl1rc_Reference_ID : %d -> %d 
Line 238:    [SRIF_SRL1RC] PSPS STATUS IND !! IsPSPSEnabled[%u] OtherClientDutyCycle[%d]
Line 246:    [SRIF_SRL1RC] PSPS Scheme Started. Resume Ready Timer Started with value [%d]
Line 252:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 262:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 282:    [MMCIF_DSL1RC] Invoking DSL1RC Resume Ready Functionality
Line 319:    [SRIF_SRL1RC] ResumeReady RequestReason [%d] DutyCycle [%d] 
Line 339:    [SRIF_PSPS_DB] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters 
Line 352:    [SRIF_SRL1RC] ResumeReady RequestReason [%d] IsResumeRejected [%d] 
Line 358:    [SRIF_SRL1RC] Resume Received from DSL1RC with Indication to wait (%d) and NOT RESUME NOW!!!! 
Line 367:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 376: [W][SRIF_SRL1RC] Resume fail! LTE Client ID [%d]
Line 413:    [Timer Expiry] DSL1RC_ResumeReadyInd - Stk1 
Line 459:    [Timer Expiry] DSL1RC_ResumeReadyInd - Stk2 
Line 552:    [Timer Expiry] DSL1RC_RetryTimerExpiry - Stk1 
Line 598:    [Timer Expiry] DSL1RC_RetryTimerExpiry - Stk2 
Line 645:    [SRIF_SRL1RC] Invoking SRL1RC Registration Functionality
Line 667: [W][SRIF_SRL1RC] Invalid Stack ID!!
Line 687:    [SRIF_SRL1RC] Registered Successfully, LTE Client ID [%d]
Line 697:    [SRIF_SRL1RC] Invoking SRL1RC DeRegistration Functionality. IsDeregForBPLMN [%u] !
Line 709:    [SRIF_SRL1RC] If LTE L1LC is already in deregistered state, do not send deregister again
Line 730:    [SRIF_SRL1RC] Deregistered Successfully, LTE Client ID [%d]
Line 735: [W][SRIF_SRL1RC] Deregistration FAILED!!!! LTE Client ID [%d]
Line 764:    [SRIF_SRL1RC] Invoking SRL1RC Resource Request Functionality
Line 768:    [SRIF_SRL1RC] Resource Req Proc ID[%d] MinimumReqTime [%d] IsInConnected [%u] DutyCycle [%d]
Line 788: [W][SRIF_SRL1RC] LTE SRL1RC Client ID Invalid!!!! Exiting without requesting for RF!!!
Line 822:    [SRIF_SRL1RC] Parsing Resource Response from SRL1RC
Line 832:    [SRIF_SRL1RC] PSPS Scheme Started
Line 839:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 847: [W][SRIF_SRL1RC] resourceRequest fail! LTE Client ID [%d]
Line 874:    [SRIF_SRL1RC] Invoking SRL1RC Pause Done Functionality
Line 878:    [SRIF_SRL1RC] Entry Point :: %s Pause Done With Rel[%d] DutyCycle[%d]
Line 907:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 934:    [SRIF_SRL1RC] Resume Ready Timer Started with %u ms !! in PSPS Scheme
Line 941:    [SRIF_SRL1RC] Resume Ready Timer Started with %u ms !! due to Early Pause Timer Expiry
Line 977:    [SRIF_SRL1RC] Invoking SRL1RC Release Ind Functionality. IsInConnected[%u] nextEventPresent[%u] nextWakeupCause[%u] nextEventStartTime[%u] nextEventDuration[%u]
Line 1009:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 1050:    [SRIF_SRL1RC] Invoking SRL1RC Update Time Ind Functionality
Line 1108:    [SRIF_SRL1RC] Invoking SRL1RC PS Update Time Ind Functionality
Line 1166:    [SRIF_SRL1RC] %s : Msg Id = 0x%x 
Line 1178: [W][MMCIF_DSL1RC] Resume Recieved from DSL1RC with Indication to wait and NOT RESUME NOW!!!! 
Line 1189:    [SRIF_SRL1RC] PSPS Scheme Stopped !! Reset SRIF PSPS Parameters
Line 1198:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 1209:    [MMCIF_DSL1RC] Renew Reference ID with LtePauseReq [%d]  
Line 1233:    [SRIF_PSPS_DB] IsPsPsEnabled [%u], DutyCycle [%u], OtherClientDutyCycle [%u], IsResumeRejected [%u] 
Line 1279:    [SRIF_DSRC] %s Msg Id: 0x%x 
Line 1328: [MMCIF_DSRC] %s : Msg Id = 0x%x 
Line 1358: [W][MMCIF_DSRC] %s Unexpected Message ID 
