Line 126: [RSM(SRIF)] : (F) Null Reason is not supported. return RESOURCE_DENIED
Line 132: [RSM(SRIF)] : (F) client is not registered. return RESOURCE_DENIED
Line 179: [RSM(SRIF)] : (I) RequestResourceToSRL1RC wait[%d], Rat[%s], Event[%s]
Line 215: [RSM(SRIF)] : (I) RequestResourceToSRL1RC. Rat[%s], Event[%s]
Line 270: [RSM(SRIF)] : (F) client is not registered. do not anything in ReleaseResource
Line 288: [RSM(SRIF)] : (I)(S) ReleaseResourceToSRL1RC
Line 311: [RSM(SRIF)] : (S)ReleaseResourceToSRL1RC: (NO GRANT, %s)
Line 314: [RSM(SRIF)] : no need more reject retry
Line 331: [RSM(SRIF)] : UpdateReason Request. Granted:(%s,%s), CurRunningRat:%s, RatType:%s, WakeUpReason:%s
Line 377: [RSM(SRIF)] : no has grant. update is skip.
Line 393: [RSM(SRIF)] : (I) RequestResourceToSRL1RC update fail. force release mode.
Line 402: [RSM(SRIF)] : (I)(S) ReceiveUseRespFromSRL1RC[%s]
Line 412: [RSM(SRIF)] : ReceiveResumeFromSRL1RC: already get GRANT
Line 433: [RSM(SRIF)] : (F) need to check Granted[%s].
Line 442: [RSM(SRIF)] : (I)(S) ReceivePauseFromSRL1RC
Line 465: [RSM(SRIF)] : (I)(S) ReceiveResumeFromSRL1RC Granted[%s]
Line 475: [RSM(SRIF)] : ReceiveResumeFromSRL1RC: already get GRANT
Line 491: [RSM(SRIF)] : (S)(DP) bIsPsPsConnected(%u), OtherDutyCycle(%u)
Line 518: [RSM(SRIF)] : (F) need to check Granted[%s].
Line 525: [RSM(SRIF)] : (I)(S) ReceiveEarlyPauseTimerStartFromSRL1RC
Line 543: [RSM(SRIF)] : ReceiveEarlyPauseTimerStartFromSRL1RC didn't get grant[%s]
Line 551: [RSM(SRIF)] : (S)(DP) ReceivePspsStatusIndFromSRL1RC, IsPsPsEnabled(%s), ResumeReadyPeriod(%u)
Line 602: [RSM(SRIF)] : (S)(DP)(F) Other Duty Cycle is zero. resume ready timer starts with default duration
Line 670: [RSM(SRIF)] : no operate. no need to receive pause ack[%s]
Line 685: [RSM(SRIF)] : ResumeReady m_GrantState[%s]
Line 714: [RSM(SRIF)] : (I) Resume now.
Line 734: [RSM(SRIF)] : (DP) retry ResumeReady, Other RAT Duty Cycle is %u
Line 741: [RSM(SRIF)] : (S)(DP)(F) Other Duty Cycle is zero. resume ready timer starts with default duration
Line 749: [RSM(SRIF)] : ResumeReady can not resume now
Line 844: [RSM(SRIF)] : (I)(S) ResumeReadyTmrCb Expired
Line 854: [RSM(SRIF)] : (I)(S) RejectRetryTmrCb Expired
Line 859: [RSM(SRIF)] : (I) no event is hold. no more reject retry
Line 869: [RSM(SRIF)] : Reject Retry get grant.
Line 878: [RSM(SRIF)] : RejectRetry granted is error. %s
Line 887: [RSM(SRIF)] : (I)(S) ForceReleaseDelayTmr Expired
Line 896: [RSM(SRIF)] : StartResumeReadyTmr CurTime:%u, DurationUs:%u
Line 988: [RSM(SRIF)] : SetRegisterOwner RatType[%s] RegisterOwner[%s]
Line 1002: [RSM(SRIF)] : ResetRegisterOwner RatType[%s] RegisterOwner[%s]
Line 1026: [RSM(SRIF)] : (F) ERROR: Register Client Fail
Line 1030: [RSM(SRIF)] : (I) RegisterClient, ID:%d
Line 1040: [RSM(SRIF)] : RegisterClient, ID:%d, RegisterOwner:%d, Already done!!
Line 1055: [RSM(SRIF)] : (F) ERROR: DeRegisterClient, Already done!!
Line 1061: [RSM(SRIF)] : DeRegisterClient RatType:%s
Line 1079: [RSM(SRIF)] : (I) DeRegisterClient ID:%d
Line 1094: [RSM(SRIF)] : (F) ERROR: DeRegisterClient deregi fail!!
Line 1156: [RSM(SRIF)] : SetNextEvent CurTime:%u, Cdma1x:%u, Hrpd:%u
Line 1236: [RSM(SRIF)] : (F) RegisterClient, NRSA DSDS is not supported.
Line 1244: [RSM(SRIF)] : (F) ERROR: DeRegisterClient, Already done!!
Line 1250: [RSM(SRIF)] : DeRegisterClient RatType:%s
Line 1264: [RSM(SRIF)] : (I) DeRegisterClient ID:%d
Line 1279: [RSM(SRIF)] : (F) ERROR: DeRegisterClient deregi fail!!
Line 1302: [RSM(SRIF)] : SetNextEvent CurTime:%u, Nr:%u
