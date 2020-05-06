Line 200: %s: SUCCESS - SRL1RC interface module initialized
Line 247:  %s: - NULL timeKeeper object
Line 256: %s: FAIL - NULL Registration message received
Line 261: %s: FAIL - RAT (%d:%s) is not supported by SRL1RC 
Line 278: %s: FAIL - RAT(%d) is already registered with SRL1RC by ClientId(%d)
Line 287: %s: FAIL - Registration request is coming from DSWCDMA before Deregistering the Other client
Line 292: %s: FAIL - Registration request is coming from BPLMN client before Deregistering the Other client
Line 348: %s: SUCCESS - RAT(%d), ClientId(%d), State(%d)
Line 352: %s: FAIL - RAT(%d) ResourceManager failed to register ClientId(%d)
Line 361: DS_WCDMA Client Registration failed
Line 371: %s: Active BPLMN client registered
Line 376: %s: Active BPLMN client registered
Line 391: %s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 401:  %s: - Event Passed nextEventStartTime(%u) currentTime(%u)
Line 408: %s: FAIL - RAT(%d) Registration failed, Max clients registered
Line 411: %s: No of client registered %u
Line 439: %s: FAIL - NULL DeRegistration message received
Line 444: %s: FAIL - Deregistering Invalid ClientId(%d)
Line 452:  %s: - NULL timeKeeper object
Line 458: %s: FAIL - RAT(%d) Unregistered ClientId(%d), State(%d)
Line 480: %s: BackUp ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 493: %s: BackUp Restored ClientId(%d), nextEventStartTime(%u), nextWakeupCause(%d)
Line 509:  %s: - Event Passed nextEventStartTime(%u) currentTime(%u)
Line 521: %s: Normal De_Register
Line 525: %s: SUCCESS - RAT(%d), ClientId(%d), State(%d), isDeregForBPLMN(%d)
Line 540: %s: FAIL - RAT(%d) ResourceManager failed to deregister ClientId(%d), State(%d)
Line 607: %s: FAIL - Resource request received with NULL output pointer
Line 613:  %s: - NULL resolverObj object
Line 630: %s: FAIL - Resource request received with NULL input pointer
Line 635: %s: FAIL - Resource request received with Invalid ClientId(%d)
Line 640: %s: FAIL - Resource request received with Invalid request reason(%d)
Line 646: %s: FAIL - RAT(%d) ResourceRequest received from Unregistered ClientId(%d), State(%d)
Line 672: Dereferenced NULL pointer : timeKeeperObj
Line 695: SRL1RC REQ -Input  Request Reason (%u) expected RAT(%u) Input RAT (%u)
Line 696: SRL1RC REQ -Input  isScheduledEvent (%u) Response (%u)
Line 717: SRL1RC REQ - Reset Scheduled event Info
Line 747: Sim info [%u]
Line 757: SRL1RC REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinResourceUseTime(%u)
Line 798: SRL1RC_REJ_RECOVERY_CODE - Resetting RFConsecutiveReject for rat %d, resetting LastOtherClientRFRequestReason to NULL
Line 813: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), clientId(%d), clientAITSkipped(%d)
Line 827: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), isAITSetNeeded(%d) 
Line 835: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 846: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherClientRequestReason(%d), simInfo(%d), No AutoPause Info 
Line 875: SRL1RC_REJ_RECOVERY_CODE - First paging reject for rat %d, set LastOtherClientRFRequestReason to %d
Line 888: SRL1RC_REJ_RECOVERY_CODE - Incremented RFConsecutiveReject[rat = %d] =  %d 
Line 897: SRL1RC_REJ_RECOVERY_CODE - Resetting RFConsecutiveReject for rat %d, resetting LastOtherClientRFRequestReason to NULL as otherclient reason changed or is not a valid reason
Line 928: %s: [PCA]requestRat=%d, peerRat=%d
Line 932: %s: [PCA]Paging conflict detected with peerRat=%d
Line 937: %s: Stack0 [PCA]firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
Line 942: %s: Stack0 [PCA] New firstPagingPagingConflictTime=%u
Line 951: %s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
Line 958: %s: FAIL - Failed to send message to URRC - StackId 0
Line 970: %s: Stack0 [PCA]Criteria of Conflict duration met (WCDMA). Diff time=%u, pagingGrant=%d, pagingReject=%d
Line 977: %s: FAIL - Failed to send message to URRC - StackId 0
Line 987: %s: Stack1 [PCA]ds_firstPagingPagingConflictTime=%u, PagingConflictCnt=%d
Line 992: %s: Stack1 [PCA] New firstPagingPagingConflictTime=%u
Line 1001: %s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
Line 1008: %s: FAIL - Failed to send message to URRC - StackId 1
Line 1020: %s: Stack1 [PCA]Criteria of Conflict duration met (DS_WCDMA). Diff=%u, pagingGrant=%d, pagingReject=%d
Line 1027: %s: FAIL - Failed to send message to URRC - StackId 1
Line 1044: SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), ActiverClientRequestReason(%d), RejectCause(%d), RetryPeriod(%u) 
Line 1047: ActiveClient Info - ActiveClientRAT(%d), ActiveClientRequestReason(%d), GrantTime(%u), LatestGrantTime(%u), GrantEndTime(%u)
Line 1052: SRL1RC REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d), RetryPeriod(%u) 
Line 1072: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), AutoPauseTimerValue(%u) 
Line 1082: SRL1RC GRANT - RAT(%d), RequestReason(%d), Response(%d), simInfo(%d), No AutoPause Info 
Line 1092: SRL1RC REJ/WAIT/RETRY - RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d),RetryPeriod(%u) 
Line 1114: srl1rc_l1intfResourceRequest: FAIL - RAT(%d), ResourceManager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u) Response(%d), RejectCause(%d), RetryPeriod(%u)
Line 1146: %s: FAIL - Pause Done received with NULL pointer
Line 1151: %s: FAIL - Pause Done received with Invalid ClientId(%d)
Line 1157: %s: FAIL - PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1166: %s: FAIL - Pause Done received from non Active Client [%u]
Line 1183: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 1190: %s: FAIL - ResourceManager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 1224: %s: FAIL - Resource request received with NULL output pointer
Line 1238: %s: FAIL - Resume ready received with NULL pointer
Line 1244: %s: FAIL - Resume ready received with Invalid ClientId(%d)
Line 1250: %s: FAIL - Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1289: %s: SUCCESS - RAT(%d), resumeNow(%d), startEarlyPauseTimer(%d), pauseTime(%u) 
Line 1300: %s: FAIL - ResourceManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
Line 1366: %s: FAIL - Update Time received with NULL pointer
Line 1371: %s: FAIL - Update Time received with Invalid ClientId(%d)
Line 1377: %s: FAIL - UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1383: %s: FAIL - UpdateTime received with Invalid Wakeup Cause(%d)
Line 1399: Dereferenced NULL pointer : timeKeeperObj
Line 1434:  %s GSM RF hogging prevention (TimeUpdate)(Allow 2G Paging): GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
Line 1448:  %s LTE MBMS Data ongoing
Line 1452:  %s MBMS RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), nextEventStartTime(%u)
Line 1455:  %s (Skip TimeUpdate: Time cause) MBMS RF hogging prevention (Autopause): RAT(%d), reason(%u), NextEventTime (%u)
Line 1478:  %s RF hogging prevention (TimeUpdate): Target Percentage changed to %d intentionally for scch order missed issue
Line 1484:  %s RF hogging prevention (TimeUpdate): reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
Line 1499:  %s [ARFC_Req] After ARFC start, drxCycleClient (%u), GSMRFPercentage (%u)
Line 1505:  %s [ARFC_Req] highARFCStartFlag (%u), highARFCEndFlag (%u), highARFCPeriod (%u)
Line 1513:  %s Execute TimeUpdate due to previous update time: srl1rcLast4GUpdateTime (%u), nextEventStartTime (%u)
Line 1522:  %s (Skip TimeUpdate: Random event) RF hogging prevention (Autopause): reason(%u), LastTime (%u)
Line 1538:  %s (Skip TimeUpdate: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
Line 1546:  %s Update srl1rcLast4GUpdateTime: srl1rcLast2GRFPreventionTime (%u), srl1rcLast4GUpdateTime (%u)
Line 1591:  %s LWT RF hogging prevention (Skip TimeUpdate: Time cause): LWT reason(%u), randValue(%u), TargetPercentage(%u)
Line 1596:  %s (Skip TimeUpdate: Time cause) LWT RF hogging prevention (Autopause): LWT reason(%u), NextEventTime (%u)
Line 1625: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)  
Line 1628: %s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
Line 1662: %s: FAIL - PS Update Time received with NULL pointer
Line 1667: %s: FAIL - PS Update Time received with Invalid ClientId(%d)
Line 1672: %s: FAIL - PS UpdateTime received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1677: %s: FAIL - PS UpdateTime received with non PS Cause(%d)
Line 1689: Dereferenced NULL pointer : timeKeeperObj
Line 1703: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%d)  
Line 1705: %s: FAIL - ResourceManager failed to process UpdateTime for ClientId(%d), RAT(%d), State(%d)
Line 1747: %s: FAIL - Resource Release received with NULL pointer
Line 1752: %s: FAIL - Resource Release received with Invalid ClientId (%d)
Line 1757: %s: FAIL - ResourceRelease received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 1771: Dereferenced NULL pointer : timeKeeperObj
Line 1786: Resource release with nextevent received with Invalid Wakeup Cause(%d)
Line 1821: %s: SUCCESS - RAT(%d) AgcDiff(%d)
Line 1827: %s: SUCCESS - RAT(%d), currentTime(%u),nextEventStartTime(%u), nextEventDuration(%u), nextWakeupCause(%u)  
Line 1837: %s: targetClientId %u 
Line 1841: %s: FAIL - RAT(%d), ResourceManager failed to process ResourceRelease
Line 1878: %s: FAIL - msg is NULL
Line 1890: Dereferenced NULL pointer : timeKeeperObj
Line 1899: %s: SUCCESS (Sent RES_RSP) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u)
Line 1906: %s: SUCCESS (Sent PAUSE) - RAT(%d)
Line 1914: %s: SUCCESS (Sent RESUME) - RAT(%d), StartEarlyPauseTimer(%d), EarlyPauseTime(%u), currentTime(%u) 
Line 1922: %s: SUCCESS (Sent START TIMER) - RAT(%d), EarlyPauseTime(%u), currentTime(%u) 
Line 1928: %s: SUCCESS (Sent RescheduleWakeupToPCH) - RAT(%d), currentTime(%u) 
Line 1934: %s: SUCCESS (Sent PICHNackNotification) - RAT(%d), currentTime(%u) 
Line 1941: %s:[PSPS] SUCCESS (Sent PsPsStatusInd) - RAT(%d), currentTime(%u) 
Line 1949: %s: SUCCESS (Sent SearcherResponse) - RAT(%d), currentTime(%u) 
Line 1955: %s: SUCCESS (Sent SearcherPause) - RAT(%d), currentTime(%u) 
Line 1961: %s: SUCCESS (Sent SearcherResume) - RAT(%d), currentTime(%u) 
Line 1968: %s: FAIL - Invalid msg Type %d
Line 1999: %s: FAIL - msg is NULL
Line 2004: %s: FAIL - srl1rcToUL1Msg is NULL
Line 2049: %s: FAIL - Invalid msg Type %s
Line 2060: %s: FAIL - Failed to send message to UL1
Line 2090: %s: FAIL - msg is NULL
Line 2095: %s: FAIL - srl1rcToGL1Msg is NULL
Line 2122: %s : FAIL - Invalid msg Type %s
Line 2132: %s: FAIL - Failed to send message to GL1
Line 2191: %s: FAIL - msg is NULL
Line 2195: %s: FAIL - srl1rcToUL1Msg is NULL
Line 2235: %s: FAIL - Invalid msg Type %s
Line 2243: %s: FAIL - Failed to send message to DS_UL1
Line 2259: %s: Stack%d FAIL - srl1rcToUrrcMsg is NULL
Line 2272: %s: FAIL - Wrong Stack Id in Dsl1rc to Urrc msg
Line 2276: %s: FAIL - Stack%d Failed to send message to URRC
Line 2279: %s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
Line 2292: %s: FAIL - Stack%d Failed to send message to URRC
Line 2295: %s: [PCA]Send CUPHY_PCH_CONFLICT_IND to URRC (Stack=%d)
Line 2321: %s: FAIL - this Pointer is NULL!!!
Line 2329: %s: FAIL - msg Pointer is NULL!!!
Line 2334: %s: FAIL - srl1rcToLteL1Msg Pointer is NULL!!!
Line 2366: %s :Invalid msg Type %d
Line 2373: %s: Sending IPC[0x%x] from SRL1RC to SR-IF...
Line 2381: %s: FAIL - Failed to send message to LTE L1 (SR-IF)
Line 2385: %s: SUCCESS - sent(%d)
Line 2415: %s: FAIL - msg is NULL
Line 2420: %s: FAIL - srl1rcToTL1Msg is NULL
Line 2443: %s: FAIL - Invalid msg Type %s
Line 2453: %s: FAIL - Failed to send message to TL1
Line 2483: %s: FAIL - msg is NULL
Line 2488: %s: FAIL - srl1rcToCDL1Msg is NULL
Line 2515: %s: FAIL - Invalid msg Type %s
Line 2631: %s: FAIL - msg is NULL
Line 2673: %s: FAIL - Failed to send message to GL1 - Client Id (%d)
Line 2678: %s: SUCCESS - ClientId(%d), RAT(%d), State(%d), MsgType(%s)
Line 2681: %s: FAIL - RAT(%d) Failed to create message 
Line 2693: %s: FAIL - Failed to send message to UL1 - Client Id (%d)
Line 2701: %s: FAIL - Failed to create UL1 message for clientId (%d) 
Line 2714: %s: FAIL - Failed to send message to DS UL1 - Client Id (%d)
Line 2719: %s: SUCCESS - DS_WCDMA_ClientID(%d), RAT(%d), State(%d), MsgType(%s)
Line 2724: %s: FAIL - DS UL1 RAT Failed to create message 
Line 2752: %s: FAIL - Failed to send message to LTE L1 - Client Id (%d)
Line 2757: %s: SUCCESS - ClientId(%d), RAT(%d), State(%d), MsgType(%d)
Line 2762: %s: FAIL - Failed to create  LTE L1 message for clientId (%d) 
Line 2777: %s: FAIL - Failed to send message to TL1 - Client Id (%d)
Line 2785: %s: FAIL - Failed to create TL1 message for clientId (%d) 
Line 2798: %s: FAIL - Failed to send message to CDL1 - Client Id (%d)
Line 2806: %s: FAIL - Failed to create CDL1 message for clientId (%d) 
Line 2838: %s: FAIL - Invalid RAT(%d) for ClientId (%d) 
Line 2900: srl1rc_l1intfGetGrantReasonForRAT: FAIL - Invalid RAT(%d)
Line 2905: srl1rc_l1intfGetGrantReasonForRAT: FAIL - Unregistered RAT(%d)
Line 2913: srl1rc_l1intfGetGrantReasonForRAT: RAT(%d), grantReason(%d)  
Line 2928: srl1rc_l1intfGetGrantReasonForClient: FAIL - Invalid clientId(%d)
Line 2932: srl1rc_l1intfGetGrantReasonForClient: FAIL - Unregistered Client(%d)
Line 2950: srl1rc_l1intfGetStateForClient: FAIL - Invalid clientId(%d)
Line 2954: srl1rc_l1intfGetStateForClient: FAIL - Unregistered Client(%d)
Line 2974: srl1rc_l1intfUpdatePICHRSN: FAIL - Invalid clientId(%d)
Line 2978: srl1rc_l1intfUpdatePICHRSN: FAIL - Unregistered Client(%d)
Line 2982: srl1rc_l1intfUpdatePICHRSN: FAIL - Not a WCDMA client
Line 2987: srl1rc_l1intfUpdatePICHRSN-Conflict resolution algo disabled by L1
Line 3023: srl1rc_l1intfGetPICHRSN: FAIL - Invalid clientId(%d)
Line 3027: srl1rc_l1intfGetPICHRSN: FAIL - Unregistered Client(%d)
Line 3031: srl1rc_l1intfGetPICHRSN: FAIL - Not a WCDMA client
Line 3060: srl1rc_l1intfGetRATModeForAutoPauseClient: ratMode = %d
Line 3115: RF Hogging STAT on PS: TotalRFRequestCnt %u, AvgSkipPercentage %u OverallSkipPercentage %u, ConsecRFSkipCnt %u
Line 3156: srl1rc_rfRejectStatsDMTrace: Rat (%d) RFRequestReason (%d) TotalRFRequest (%d)
Line 3159: srl1rc_rfRejectStatsDMTrace: SignallingRejectCnt (%d) L1HightPriorityRejectCnt (%d) SignallingRejectPerc (%d) L1HightPriorityRejectPerc (%d)
Line 3162: srl1rc_rfRejectStatsDMTrace: PagingRejectCnt (%d) SysInfoRejectCnt (%d)  PagingRejectPerc (%d) SysInfoRejectPerc (%d) 
Line 3165: srl1rc_rfRejectStatsDMTrace: CellSearchRejectCnt (%d) MeasurementRejectCnt (%d) PSCallRejectCnt (%d) CellSearchRejectPerc (%d)  MeasurementRejectPerc (%d) PSCallRejectPerc (%d)
Line 3180: [SRL1RC_DRDSDS_StatDbg] %s: PagingCntDrmode and PagingCntAbnormal are initialized. 
Line 3206: [SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS Available now, PCH-PCH count=%d, DrxCycle1=%d, DrxCycle2=%d
Line 3217: [SRL1RC_DRDSDS_StatDbg] %s: 3G DR-DSDS not Available due to AGC Diff(%d), PCH-PCH count=%d
Line 3237: SRL1RC_REJ_RECOVERY_CODE - Assert condition met for RFConsecutiveReject for rat %d
Line 3259: SRL1RC_REJ_RECOVERY_CODE - srl1rc_l1ConsecutiveReject_init
Line 3296: %s: Cancel autoPauseResumeTimer 
Line 3306: %s: SRL1RC cleared All the memory
Line 3323: srl1rc_l1intfUpdateDRDb: FAIL - Invalid clientId(%d)
Line 3327: srl1rc_l1intfUpdateDRDb: FAIL - Unregistered Client(%d)
Line 3331: srl1rc_l1intfUpdateDRDb: FAIL - Not a WCDMA client
Line 3337:  %s: - clientDB object is NULL
Line 3357: srl1rc_l1intfIsDRImpossible: FAIL - Invalid clientId(%d)
Line 3361: srl1rc_l1intfIsDRImpossible: FAIL - Unregistered Client(%d)
Line 3365: srl1rc_l1intfIsDRImpossible: FAIL - Not a WCDMA client
Line 3405: %s: FAIL - Searcher request received with NULL output pointer
Line 3413: %s: FAIL - Searcher request received with NULL input pointer
Line 3418: %s: FAIL - Searcher request received with Invalid ClientId(%d)
Line 3424: %s: FAIL - RAT(%d) Searcher Request received from Unregistered ClientId(%d), State(%d)
Line 3432: %s: FAIL - dRManagerObj is NULL
Line 3439: Dereferenced NULL pointer : timeKeeperObj
Line 3446:  %s: - clientDB object is NULL
Line 3457: SRL1RC SEARCHER REQ - SUCCESS - RAT(%d), RequestReason(%d), currentTime(%u) MinSearcherUseTime(%u)
Line 3461: SRL1RC REQ - Reset Scheduled event Info
Line 3472: SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d), OtherDRClientRequestReason(%d)
Line 3477: SRL1RC SEARCHER GRANT - RAT(%d), RequestReason(%d), Response(%d)
Line 3483: SRL1RC SEARCHER REJ/WAIT/RETRY -RAT(%d), RequestReason(%d), Response(%d), RejectCause(%d)
Line 3494: %s: FAIL - RAT(%d), DR-Manager failed to grant resources for ClientId(%d), RequestReason(%d), MinResourceUseTime(%u), Response(%d), RejectCause(%d)
Line 3526: %s: FAIL - Searcher Pause Done received with NULL pointer
Line 3531: %s: FAIL - Searcher Pause Done received with Invalid ClientId(%d)
Line 3537: %s: FAIL - Searcher PauseDone received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 3545: %s: FAIL - dRManagerObj is NULL
Line 3555: %s: SUCCESS - RAT(%d), State(%d) MsgValid(%d)
Line 3563: %s: FAIL - DR-Manager failed to process PauseDone for ClientId(%d), RAT(%d), State(%d)
Line 3591: %s: FAIL - Searcher Resume ready received with NULL output pointer
Line 3598: %s: FAIL - Searcher Resume ready received with NULL pointer
Line 3603: %s: FAIL - Searcher Resume ready received with Invalid ClientId(%d)
Line 3609: %s: FAIL - Searcher Resume ready received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 3617: %s: FAIL - dRManagerObj is NULL
Line 3627: %s: SUCCESS - RAT(%d), resumeNow(%d)
Line 3631: %s: FAIL - DRManager failed to process ResumeReady for ClientId(%d), RAT(%d), State(%d)
Line 3664: %s: FAIL - Searcher Release received with NULL pointer
Line 3669: %s: FAIL - Searcher Release received with Invalid ClientId (%d)
Line 3674: %s: FAIL - Searcher Release received from Unregistered ClientId(%d), RAT(%d), State(%d)
Line 3682: %s: FAIL - dRManagerObj is NULL
Line 3689: Dereferenced NULL pointer : timeKeeperObj
Line 3700: %s: SUCCESS - RAT(%d)
Line 3707: %s: FAIL - RAT(%d), DR-Manager failed to process SearcherRelease
Line 3771: %s: SUCCESS - Initialization Complete 
