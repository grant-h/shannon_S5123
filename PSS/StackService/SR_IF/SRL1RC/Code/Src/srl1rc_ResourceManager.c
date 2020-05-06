Line 353: *****%s: Invalid Event (%d) received in state (%s) from ClientId (%d), RAT(%d)*****
Line 361:  %s: - NULL timeKeeper object
Line 369: *****: srl1rc_rmProcess: EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u) isPsPsEnabled(%u)*****
Line 379: *****: srl1rc_rmProcess: EXECUTING STATE(%s) EVENT(%s) ClientId (%d) RAT(%d) currentTime (%u) isPsPsEnabled(%u)*****
Line 390:  %s: - NULL clientDBobject
Line 495:  %s: Invalid State(%s) event(%s) combination
Line 537:  %s: this pointer is NULL
Line 572:  %s: Scheduled event conflict found between clientId's [%d] and [%d]
Line 605:  %s: this pointer is NULL
Line 610:  %s: Invalid client Id %u
Line 616:  %s: str is NULL %p
Line 632:  %s: - conflictArray is initialised, Client [%u], noOfConflicts [%u]
Line 644:  %s: - client [%u] added in conflict array, No of Elements[%u]
Line 649:  %s: - idx[%u]
Line 651:  %s: - No. of Elements in Conflict Array [%u]
Line 685: %s: - this pointer is NULL
Line 691: %s: - resource request  is NULL
Line 699: %s: -Invalid client ID %d
Line 707: %s: -time keeper obj is NULL
Line 715: %s: -clientDB obj is NULL
Line 722:  %s: Received Resource request with invalid request reason %s
Line 728:  %s: Number of scheduled event received %d
Line 760:  %s: Requesting client added to clientEventInfoArr for checking conflict, Req Reason[%s], minResourceUseTime[%u]
Line 764:  %s: Number of elements in Conflict Arr[%u]
Line 773:  Scheduled event within[%u]ms time window. Time Diff[%u] 
Line 780:  %s: client %u, can not be added to autoPauseClintId array, request reason %u, event start time %u, current time %u
Line 786:  %s: client Id %u added to autoPauseCID array, request reason %u, event start time %u, current time %u
Line 790:  %s: Number eligible auto Pause clients %u
Line 796:  %s: No of conflict found[%u], No of eligibleAutoPauseClients[%u], No of Sch Events [%u], retVal[%u]
Line 801:  %s: Req Reason(%u), Conflict(%u) as Auto pause can not be triggered 
Line 821:  %s: Conflict found, as Early pause can not be triggered
Line 826:  %s: latestCid(%u), No conflict detected
Line 832:  %s: latestCid(%u), No conflict detected
Line 838:  %s: Conflict found, as Early pause can not be triggered
Line 844:  %s: Conflict found, as Early pause can not be triggered
Line 855: Early pause can be triggered, scheduledEventTime[%u] currentTime[%u]
Line 860:  %s: Invalid Latest ClientId[%u]
Line 867:  %s: No conflict found
Line 871:  %s: Is scheduled event conflict[%u]
Line 909: %s: client Id %u, nextEventStartTime %u, nextWakeupCause %u
Line 930: %s : this pointer is NULL
Line 936: %s : Invalid client Id %u
Line 945: %s : client Id %u found in eligible autopause client array
Line 949: %s : retVal %u
Line 969: %s : this pointer is NULL
Line 975: %s : Invalid client Id %u
Line 984: %s : client Id %u found in array
Line 987: %s : retVal %u
Line 1012:  %s: - this pointer is NULL
Line 1017:  %s: - input pointer is NULL
Line 1026:  %s: Client %u Registered, ret value (%u) 
Line 1053:  %s: - this pointer is NULL
Line 1058:  %s: - input pointer is NULL
Line 1078:  %s: Client %u unregistered, ret value (%u) 
Line 1128:  %s: - this pointer is NULL
Line 1133:  %s: - input pointer is NULL
Line 1139:  %s: - Invalid Request Reason (%u)
Line 1151:  %s: - NULL client object
Line 1159:  %s: - NULL timeKeeper object
Line 1167:  %s: - resolver object is NULL
Line 1200:  TD-SCDMA is in cell search, so update time for SysInfo from GSM is not honoured
Line 1217: Ignore update time because next wakeup near to previous paging request.  nextEventStartTime(%u), pageDuration[%u] = %u
Line 1222:  Req Reason(%u) not paging, Update Time
Line 1225: Drx len Updated[%u]ms, SchEventReason[%u]
Line 1260:  %s: client %u added in auto pause array
Line 1268:  %s: Ignore autoPuase calculation as resolution was already done. 
Line 1271:  %s: scheduledEventTime %u, currentTime % u, activeTimeTrigger %u
Line 1277:  %s: scheduledEventTime %u, grantTime %u 
Line 1282:  %s: Invalid client ID %u 
Line 1304:  Condition not satisfied for AutoPause calculation
Line 1326:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 1339:  %s scheduledRat(%d)
Line 1352:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 1355:  Auto pause passed = %u
Line 1359: Error: outgoingMsg is NULL: %u
Line 1364:  UpdateTime: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 1370:  %s: state %s, clientObj state %u, ret %u, autoPauseClientId %u,  grantTime %u
Line 1376:  %s: state %s, clientObj state %u, ret %u 
Line 1411:  %s: In srl1rc_rmPSUpdateTime
Line 1414:  %s: - this pointer is NULL
Line 1419:  %s: - input pointer is NULL
Line 1426:  %s: - Invalid Request Reason (%d)
Line 1434:  %s: - NULL client object
Line 1440:  %s: - PS update time came from non LTE RAT: %d
Line 1448:  %s: - NULL timeKeeper object
Line 1463: clientRat(%d) otherClientRat(%d)
Line 1503:  %s Early pause for PSdata can be triggerred scheduledEventTime %u currentTime %u scheduledRat(%d)
Line 1507:  Auto pause passed for PSdata = %u
Line 1511: No outgoing Msg
Line 1516: requestReason(%d) scheduledReason(%d)
Line 1521: scheduledEventTime(%u) currentTime(%u) activeTimeTrigger(%u)
Line 1526: scheduledEventTime(%u) currentTime(%u)
Line 1531: scheduledEventTime(%u) grantTime(%u)
Line 1536: srl1rc state(%d) client state(%d) ret(%d)
Line 1654:  %s: - this pointer is NULL
Line 1659:  %s: - output pointer is NULL
Line 1664:  %s: - input pointer is NULL
Line 1677:  %s: - Invalid Request Reason (%u)
Line 1685:  %s: - clientDB object is NULL
Line 1698:  %s: - resolver object is NULL
Line 1729:  %s: - NULL timeKeeper object
Line 1757: %s: currentTime(%u), pageDuration[%u] = %u
Line 1762: %s: No back to back request, Do normal conflict resolution
Line 1767: %s: Ignore conflict resolution, as request is near to previous request by client
Line 1773: %s: Non paging request, Do normal conflict resolution
Line 1799:  %s: To give Reject due to remaining time for paging: (%u) < 5000  
Line 1812:  %s: grantRequest %u, isScheduledEventConflict %u 
Line 1837:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 1851:  Condition for auto pause calculation not satisfied
Line 1901:  %s Auto pause passed = %u scheduledRat(%d)
Line 1912:  %s Scheduled Conflict was already resolved, so Auto pause not passed
Line 1917:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 1922:  %s: Auto pause not passed, not valid auto pause client Id %u
Line 1985:  %s [PCA]Rejected due to Req Paging (RAT=%u)-Schedule Paging (Reason=%u) conflict
Line 2071:  %s: - this pointer is NULL
Line 2076:  %s: - input pointer is NULL
Line 2087:  %s: -Invalid Client
Line 2093:  %s: - Client is Active
Line 2097:  %s: -client(%u) Unregistered
Line 2161:  %s: - this pointer is NULL
Line 2166:  %s: - output pointer is NULL
Line 2171:  %s: - input pointer is NULL
Line 2178:  %s: - Invalid Request Reason (%u)
Line 2197:  %s: - NULL client object
Line 2205:  %s: - NULL resolverObj object
Line 2213:  %s: - NULL timeKeeper object
Line 2244:  %s: - NULL active client object
Line 2269:  Reject given to active conflict because of scheduled event conflict
Line 2278:  Reject given to active SUB SIM because of transition to DR not available
Line 2288: REJECT in REL_PEND1, DR-DSDS Available because NbrBCH cannot be supported on SUB SIM
Line 2294: REJECT in REL_PEND1, DR-DSDS Available because only paging is allowed with signaling on other stack
Line 2299:  GRANT in REL_PEND1, DR-DSDS Available 
Line 2311:  %s RF hogging prevention (RelPend1 ResReq): ResReqRAT(%u), ActiveRATReason(%u), isScheduledEvent(%d)
Line 2325:  %s MBMS RF hogging prevention (RelPend1 ResReq by ILM): RAT(%d), reason(%u), randValue(%u)
Line 2329:  %s MBMS RF hogging prevention: No throttling for 2G cell search RAT(%d), reason(%u)
Line 2336:  %s (Skip RelPend1 ResReq by ILM: Random event) MBMS RF hogging prevention: RAT(%d), reason(%u)
Line 2366:  %s RF hogging prevention (RelPend1 ResReq by ILM): reason(%u), randValue(%u), TargetPercentage(%u)
Line 2373:  %s (Skip RelPend1 ResReq by ILM: Random event) RF hogging prevention: reason(%u)
Line 2378:  %s (Skip RelPend1 ResReq: Time cause) RF hogging prevention (Autopause): reason(%u), LastTime (%u), CurrentTime (%u)
Line 2399:  Reject due to no Autopause execution in REL_PEND1
Line 2412:  %s Reject due to too short RF request from release : reason(%u), LastReleaseTime (%u), CurrentTime (%u) rejectDueToProtection %u
Line 2423:  %s:[PSPS] Reject due to PS Protection. currentTime[%u], PSProtectionTime[%u]
Line 2438:  Reject given to active SUB SIM because of transition to DR not available
Line 2444:  %s: grantToActiveClient %u, grantToNewClient %u, rejectToActiveClient %u, rejectDueToProtection %u
Line 2476:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 2491:  %s: Condition for Calculating Auto Pause not satisfied
Line 2527:  %s: Start EarlyPause Timer for WCDMA(%u)  
Line 2536:  %s: Start EarlyPause Timer for LTE(%u)  
Line 2541:  %s: Start EarlyPause Timer for GSM(%u)  
Line 2547:  %s: Start EarlyPause Timer for TD-SCDMA(%u)  
Line 2553:  %s: Start EarlyPause Timer for CDMA(%u)  
Line 2558:  %s: Start EarlyPause Timer for CID(%u) is (%u)  
Line 2566:  %s: Next Event start time(%u) is less than current time(%u)  
Line 2575:  %s: Condition for passing Auto Pause not satisfied. Req Res(%u), Sch Res(%u)
Line 2580:  %s: No auto pause info passed, autoPauseClintId %u
Line 2595:  %s: - Schedule conflict happens for Req Reason (%d) and Scheduled Reason (%d)
Line 2626: Assigning MAIN sim status as Active client is holding SUB Sim status
Line 2659: 2G Only Mode %d
Line 2663: G2X measurement request in Auto or HEDGE Mode %d
Line 2670:  %s:[PSPS] Pause Req sent to activeClientId[%u], resumeReadyPeriod[%u]
Line 2711:  %s: - Schedule conflict happens for Req Reason (%d)
Line 2751:  %s: retryPeriod(%d), getGrantTime(%u), getGrantDuration(%u),CurrentTime(%u), GrantEndTime(%u), LatestGrantTime(%u)  
Line 2761:  %s: - Schedule conflict happens for paging and Rejected client (%d)
Line 2797:  %s: - NULL timeKeeper object
Line 2802:  %s: - this pointer is NULL
Line 2807:  %s: - input pointer is NULL
Line 2818:  %s: - NULL client object
Line 2823:  %s: - Pause done can come only from active clients clientId(%d) clientState(%d)
Line 2849:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 2853:  %s:[PSPS] Invalid OtherPsClientId[%d]
Line 2891:  %s: - this pointer is NULL
Line 2896:  %s: - input pointer is NULL
Line 2906:  %s: - NULL client object
Line 2911:  %s: - RES_REL received from Inactive client(%d)
Line 2919:  %s: - NULL timeKeeper object
Line 2925:  %s: - Release came from idle client, Ignore event
Line 2931:  %s: - setScheduledEvent Failed
Line 2956:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 2960:  %s:[PSPS] Invalid OtherPsClientId[%d]
Line 3072:  %s: - this pointer is NULL
Line 3077:  %s: - output pointer is NULL
Line 3082:  %s: - input pointer is NULL
Line 3112:  %s: - Invalid Request Reason (%d)
Line 3127:  %s: - NULL client object
Line 3132:  %s: - Request should come from the IDLE client clientId (%d)
Line 3140:  %s: - NULL timeKeeper object
Line 3148:  %s: - NULL Resolver object
Line 3152:  %s: autoPauseCID %d, clientId %d, Requesting client requestReason %d, paused client requestReason %d) 
Line 3155:  %s: - Scheduled Meas request received from 3G Client
Line 3160:  %s: - Reject for Unexpected Request received from 3G for Non-scheduled event in REL_PEND_1_PAUSE_DONE state
Line 3206:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 3221:  Condition for Calculating Auto Pause not satisfied.
Line 3235:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 3246:  %s Auto pause passed = %u scheduledRat(%d)
Line 3263:  %s nextEventStartTime[%u] PSProtectionTime[%u]
Line 3268:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 3290:  %s:[PSPS] Early pause Time sent to reqClientId[%u], resumeReadyPeriod[%u]
Line 3295:  %s:[PSPS] -Rsp sent to Client[%u]. AutoPauseTimer not sent because paused client requestReason is of higherPriority
Line 3301:  %s:[PSPS] -Rsp sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 3327:  %s: autoPauseResumeTimer Stopped
Line 3331:  %s: autoPauseResumeTimer is NULL
Line 3360:  %s: - Reject for %d(RAT %d) due to %d(RAT %d) 
Line 3381:  %s: - Resume sent to PausedClientId(%d). Scheduled Event from clientId(%d) delayed by [%u]
Line 3388:  %s: autoPauseResumeTimer Stopped
Line 3393:  %s: autoPauseResumeTimer is NULL
Line 3400:  %s: - outgoingMsg == NULL
Line 3405:  %s: - Wait for scheduled event request from ClientId %d
Line 3441:  %s: - this pointer is NULL
Line 3446:  %s: - input pointer is NULL
Line 3458:  %s: - NULL client object
Line 3464:  %s: - Release came from idle client, Ignore Event
Line 3470:  %s: - NULL timeKeeper object
Line 3513:  %s: - RES_REL should be received from paused client(%d) -> Go to RelPend1 state
Line 3520:  %s: autoPauseResumeTimer Stopped
Line 3537:  %s: autoPauseResumeTimer Stopped
Line 3540:  %s: - Invalid state: Client(%d) should be in Paused state -> Go to Idle state
Line 3549:  %s: - setScheduledEvent Failed
Line 3562:  %s: autoPauseResumeTimer Stopped
Line 3645:  %s: - this pointer is NULL
Line 3650:  %s: - input pointer is NULL
Line 3655:  %s: - output pointer is NULL
Line 3689:  %s: - NULL client object
Line 3695:  %s: - NULL timeKeeper object
Line 3699:  %s: - Resume ready should come from paused client clientId (%d)
Line 3705:  %s: - Resume ready should come After 10 ms from pausedone
Line 3718:  %s: - NULL timeKeeper object
Line 3726:  %s: - resolver object is NULL
Line 3750:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 3765:  Condition for Calculating Auto Pause not satisfied.
Line 3780:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 3799:  %s Auto pause passed = %u scheduledRat(%d)
Line 3818:  %s: autoPauseResumeTimer Stopped
Line 3855:  %s: - this pointer is NULL
Line 3860:  %s: - input pointer is NULL
Line 3871:  %s: -Invalid Client
Line 3877:  %s: - Client is Active/Paused
Line 3915:  %s: autoPauseResumeTimer Stopped
Line 3920:  %s: -client(%d) Unregistered
Line 3967:  %s: - this pointer is NULL
Line 3972:  %s: - input pointer is NULL
Line 3981:  %s: -Invalid Client
Line 3987:  %s: - Client is Active
Line 3990:  %s: -client(%d) Unregistered
Line 4019:  %s: - this pointer is NULL
Line 4024:  %s: - output pointer is NULL
Line 4029:  %s: - input pointer is NULL
Line 4043:  %s: - Invalid Client (%d)
Line 4099:  %s: - this pointer is NULL
Line 4104:  %s: - input pointer is NULL
Line 4109:  %s: - outgoingMsg pointer is NULL
Line 4114:  %s: - outgoingMsg pointer is (%x)
Line 4122:  %s: - Invalid clientId(%d)
Line 4153:  %s: - PauseDone is coming from Non Active client
Line 4158:  %s: - NULL timeKeeper object
Line 4166:  %s: - resolver object is NULL
Line 4169: Time taken to pause  = (%u) by RAT (%u)
Line 4200:  %s: clientId[%u] added to eligibleAutoPauseClients, noOfElements[%u]
Line 4215:  %s: - AutoPause Calculation not satisfied
Line 4221:  %s: - Process outgoingMsg
Line 4268:  %s Auto pause passed = %u scheduledRat(%d)
Line 4279:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 4284:  %s: No auto pause info passed, autoPauseClintId %u
Line 4292:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 4297:  %s:[PSPS] Auto pause passed for CDMA = %u
Line 4323:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u], ResumeReadyPeriod[%u]
Line 4324:  %s:[PSPS] Auto pause passed = %u
Line 4333: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than Active Client's reason(%d)
Line 4339:  [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u]
Line 4464:  %s: - this pointer is NULL
Line 4469:  %s: - input pointer is NULL
Line 4478:  %s: - Invalid clientId(%d)
Line 4508:  %s: - NULL client object
Line 4516:  %s: - NULL timeKeeper object
Line 4525:  %s: - resolver object is NULL
Line 4531:  %s: - Release came from idle client, Ignore Event
Line 4542:  %s: - RES_REL received from waiting client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 4547:  %s: - setScheduledEvent Failed
Line 4578:  %s: clientId[%u] added to eligibleAutoPauseClients, noOfElements[%u]
Line 4640:  %s Auto pause passed = %u scheduledRat(%d)
Line 4651:  %s Auto Pause condition for Signalling 3G3G is not passed
Line 4656:  %s: Auto pause not passed, not valid auto pause client Id[%u]
Line 4667:  %s: - setScheduledEvent Failed
Line 4727:  %s: - this pointer is NULL
Line 4732:  %s: - input pointer is NULL
Line 4741:  %s: -Invalid Client
Line 4747:  %s: - Client is Active/Paused. First Pause_done or release should have been sent from the Active client
Line 4750:  %s: -client(%d) Unregistered
Line 4776:  %s: - this pointer is NULL
Line 4781:  %s: - output pointer is NULL
Line 4786:  %s: - input pointer is NULL
Line 4799:  %s: - Invalid Client (%d)
Line 4808:  %s: - Registered Client resource request in AWAITING_PAUSE_DONE state, retry after %d ms
Line 4815:  %s: - Active Client resource request in AWAITING_PAUSE_DONE state instead of Pause_done/Release. Request rejected
Line 4843:  %s: - this pointer is NULL
Line 4848:  %s: - input pointer is NULL
Line 4856:  %s: - Invalid clientId(%d)
Line 4864:  %s: - Release came from idle client, Ignore Event
Line 4869:  %s: - RES_REL can come only from active clients, Invalid event Multiple RES_REL from client clientId(%d) clientState(%d) Ignore event
Line 4876:  %s: - NULL timeKeeper object
Line 4884:  %s: - setScheduledEvent Failed
Line 4940:  %s: - this pointer is NULL
Line 4945:  %s: - input pointer is NULL
Line 4950:  %s: - outgoingMsg pointer is NULL
Line 4955:  %s: - outgoingMsg pointer is (%x)
Line 4963:  %s: - Invalid clientId(%d)
Line 4969:  %s: - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 4976:  %s: - NULL timeKeeper object
Line 4983:  %s: - resolver object is NULL
Line 5030:  %s: - Process outgoingMsg
Line 5064:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 5077:  Condition for calculating auto pause did not satisfied
Line 5090:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 5121:  %s Auto pause passed = %u scheduledRat(%d)
Line 5131:  %s not valid auto pause cid = %u
Line 5234:  %s: - this pointer is NULL
Line 5239:  %s: - input pointer is NULL
Line 5248:  %s: -Invalid Client
Line 5254:  %s: - Client is Active
Line 5257:  %s: -client(%d) Unregistered
Line 5313:  %s: - this pointer is NULL
Line 5318:  %s: - output pointer is NULL
Line 5323:  %s: - input pointer is NULL
Line 5330:  %s: - Invalid Request Reason (%d)
Line 5341:  %s: - Invalid clientId(%d)
Line 5355:  %s: - NULL timeKeeper object
Line 5360:  %s: - resolver object is NULL
Line 5367: Invalid: Resource request came from paused client (%s)
Line 5412:  %s Request in REL_PEND_2 state when other client's signaling is paused. ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 5418:  %s 2G Measurement request in REL_PEND_2 state ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 5435:  %s MBMS RF hogging prevention (RelPend2 ResReq): RAT(%d), reason(%u), randValue(%u)
Line 5441:  %s (Skip RelPend2 ResReq) MBMS RF hogging prevention: RAT(%d) reason(%u)
Line 5471:  %s RF hogging prevention (RelPend2 ResReq): Target Percentage changed to %d intentionally for scch order missed issue
Line 5478:  %s RF hogging prevention (RelPend2 ResReq): reason(%u), randValue(%u), TargetPercentage(%u)
Line 5486:  %s (Skip RelPend2 ResReq) RF hogging prevention: reason(%u)
Line 5495: Reject due to RF hogging prevention in REL_PEND2. ReassignCount = %d
Line 5548:  Reject due to no Autopause execution in REL_PEND2
Line 5561:  %s Reject due to too short RF request from release : reason(%u), LastReleaseTime (%u), CurrentTime (%u) rejectDueToProtection %u
Line 5571:  %s: grantToActiveClient[%u], grantToNewClient[%u], rejectDueToProtection[%u]
Line 5591:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 5604: Condition for calculation auto pause does not satisfied
Line 5623:  %s: Start EarlyPause Timer for WCDMA(%u)  
Line 5628:  %s: Start EarlyPause Timer for LTE(%u)  
Line 5633:  %s: Start EarlyPause Timer for GSM(%u)  
Line 5639:  %s: Start EarlyPause Timer for TD-SCDMA(%u)  
Line 5645:  %s: Start EarlyPause Timer for CDMA(%u)  
Line 5650:  %s: Start EarlyPause Timer for CID(%u) is (%u)  
Line 5660:  %s: No auto pause info passed, autoPauseClintId %u
Line 5691:  %s:[PSPS] PSPS Start Ind set to client[%u], resumeReadyPeriod[%u]
Line 5696:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 5701:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 5722:  %s:[PSPS] -Auto pause time[%u] passed to Client[%u] with ResumeReadyPeriod[%u]
Line 5726:  %s:[PSPS] -Auto pase time not passed, as request reason[%u] is of higher priority
Line 5731:  %s:[PSPS] -Time Diff not sufficient to trigger Auto Pause[%u]
Line 5817:  %s: retryPeriod(%d), getGrantTime(%u), getGrantDuration(%u),CurrentTime(%u), GrantEndTime(%u), LatestGrantTime(%u)  
Line 5826:  %s: - Schedule conflict happens for paging and Rejected client (%d)
Line 5866:  %s: - this pointer is NULL
Line 5871:  %s: - input pointer is NULL
Line 5876:  %s: - output pointer is NULL
Line 5881:  %s: - outgoingMsg pointer is NULL
Line 5900:  %s: - NULL client object
Line 5906:  %s: - NULL activeClientObj object
Line 5913:  %s: - NULL resolverObj object
Line 5920:  %s: - NULL timeKeeper object
Line 5926:  %s: - Resume ready should come from paused client clientId (%d)
Line 5940:  %s:[PSPS] ActiveConflictResolution[%u]
Line 5978:  %s:[PSPS] Sending Pause Request to Client[%u]. ResumeReadyPeriod[%u]
Line 6043:  %s: - NULL timeKeeper object
Line 6048:  %s: - this pointer is NULL
Line 6053:  %s: - input pointer is NULL
Line 6059:  %s: - outgoingMsg pointer is NULL
Line 6065:  %s: - resolver object is NULL
Line 6078:  %s: - Invalid paused client[%u]
Line 6084:  %s: - NULL client object
Line 6089:  %s: - Pause done can come only from active clients clientId(%d) clientState(%d)
Line 6129:  %s: - PauseDone for CDMA pausedClientId [%u]
Line 6168:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 6181: Condition for calculation auto pause does not satisfied
Line 6197:  %s: Start EarlyPause Timer for GSM(%u)  
Line 6202:  %s: Start EarlyPause Timer for CID(%u) is (%u)  
Line 6213:  %s: No auto pause info passed, autoPauseClintId %u
Line 6223:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 6228:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 6244:  %s:[PSPS] -Resume sent to Client[%u]. resumeReadyPeriod[%u], Auto Pause Time[%u]
Line 6254:  %s:[PSPS] -Resume sent to Client[%u]. AutoPauseTimer not sent because paused client requestReason is of higherPriority
Line 6260:  %s:[PSPS] -Resume sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 6288:  %s:[PSPS] -Sending PSPS stop Ind to Client[%u]
Line 6297:  %s:Started resume ready time
Line 6301:  %s:Resume ready time failed
Line 6389:  %s: - this pointer is NULL
Line 6394:  %s: - input pointer is NULL
Line 6402:  %s: - Invalid Request Reason (%d)
Line 6409:  %s: - Invalid clientId(%d)
Line 6442:  %s: - NULL timeKeeper object
Line 6450:  %s: - NULL resolverObj object
Line 6455:  %s: - NULL client object
Line 6461:  %s: - NULL outgoingMsg
Line 6467:  %s: - Release came from idle client, Ignore event
Line 6507:  %s GSM RF hogging prevention (ReleaseReq)(Allow 2G Paging) : GSM reason(%u), lastPagingGrantTimeInPauseDone(%u), currentTime(%u), nextEventStartTime(%u)
Line 6523:  %s MBMS RF hogging prevention (ReleaseReq): RAT(%d), reason(%u), randValue(%u)
Line 6528:  %s (Skip ReleaseReq: Random event) MBMS RF hogging prevention: RAT(%d), reason(%u)
Line 6550:  %s RF hogging prevention (ReleaseReq) : Target Percentage changed to %d intentionally for scch order missed issue
Line 6555:  %s RF hogging prevention (ReleaseReq) : reason(%u), randValue(%u), TargetPercentage(%u), Last2GRFPreventionTime(%u), nextEventStartTime(%u)
Line 6562:  %s (Skip ReleaseReq: Random event) RF hogging prevention (Autopause): reason(%u), LastTime (%u)
Line 6571:  %s (Skip ReleaseReq: Time cause) RF hogging prevention (Autopause): reason(%u), NextEventTime (%u), LastTime (%u)
Line 6583:  %s: - setScheduledEvent Failed
Line 6631:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 6646:  Condition for calculating autopause not satisfied
Line 6662:  %s: pausedClientId %d, targetClientId %d
Line 6664:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 6673:  %s: pausedClientId %d, targetClientId %d
Line 6685:  %s Auto pause passed = %u scheduledRat(%d)
Line 6707: autoPauseResumeTimer set Failed, Resume Paused Client
Line 6774: Scheduled event of CID[%u] is at time Diff of[%u], moving to RelPend1_PauseDone
Line 6782:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 6794:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 6798:  %s Auto pause passed = %u
Line 6810:  %s:[PSPS] scheduledEventTime [%u] PSProtectionTime [%u]
Line 6815:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 6840:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u] Diff between currentTime and scheduledEventTime = [%u] PSProtectionTime[%u]
Line 6850: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than Active Client's reason(%d)
Line 6856: [PSPS] Autopause not triggered due to less early pause time margin from the protection time[%u]
Line 6862: [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]  gPSProtectionTime[%u]
Line 6878:  %s:[PSPS] CDRX condition not statisfied and CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 6885: [PSPS] Autopause not triggered due to PausedClient RfUseReason(%d) priority is greater than scheduled  client reason(%d)
Line 6903:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 6906:  %s: Resource release came from paused client, Paused Client Id[%d], client Id[%d]
Line 6998:  %s: - this pointer is NULL
Line 7003:  %s: - output pointer is NULL
Line 7008:  %s: - input pointer is NULL
Line 7016:  %s: - NULL resolverObj object
Line 7023:  %s: - Invalid Request Reason (%d)
Line 7030:  %s: - Invalid clientId(%d)
Line 7041:  %s: - NULL timeKeeper object
Line 7063:  %s: - NULL otherDRClientObjt
Line 7087:  %s: Start EarlyPause Timer(%u)  
Line 7191:  %s: - this pointer is NULL
Line 7196:  %s: - input pointer is NULL
Line 7202:  %s: - Invalid Request Reason (%d)
Line 7209:  %s: - Invalid clientId(%d)
Line 7219:  %s: - NULL timeKeeper object
Line 7224:  %s: - NULL client object
Line 7230:  %s: - Release came from idle client, Ignore event
Line 7236:  %s: - setScheduledEvent Failed
Line 7262:  %s: - NULL otherDRClient object
Line 7291:  DR Resume sent to ClientId %d
Line 7295: Error: outgoingMsg is NULL: %u
Line 7313:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 7318:  Auto pause passed = %u
Line 7324:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 7335:  Auto pause passed = %u
Line 7339: Error: outgoingMsg is NULL: %u
Line 7345: srl1rc_rmREL_PEND_2_DRDSDS_ResourceRelease: Condition not satisfied for AutoPause:, requestReason %u, scheduledReason %u
Line 7350: srl1rc_rmREL_PEND_2_DRDSDS_ResourceRelease: TimeMargin not sufficient for sending earlyPauseTimer to Active Client
Line 7355:  %s: Next Event start time(%u) is less than current time(%u)  
Line 7462:  %s:[PSPS] - this pointer is NULL
Line 7467:  %s:[PSPS] - input pointer is NULL
Line 7476:  %s:[PSPS] -Invalid Client
Line 7482:  %s:[PSPS] - Client is Active
Line 7485:  %s:[PSPS] -client(%d) Unregistered
Line 7512:  %s:[PSPS] - this pointer is NULL
Line 7517:  %s:[PSPS] - output pointer is NULL
Line 7522:  %s:[PSPS] - input pointer is NULL
Line 7539:  %s:[PSPS] - Invalid Client (%d)
Line 7543:  %s:[PSPS] - Request is rejected as SRL1RC is waiting for PauseDone
Line 7579:  %s:[PSPS] - this pointer is NULL
Line 7584:  %s:[PSPS] - input pointer is NULL
Line 7589:  %s:[PSPS] - output pointer is NULL
Line 7604:  %s:[PSPS] - NULL client object
Line 7609:  %s:[PSPS] - Resume ready should come from paused client clientId (%d)
Line 7659:  %s:[PSPS] - this pointer is NULL
Line 7664:  %s:[PSPS] - input pointer is NULL
Line 7669:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 7674:  %s:[PSPS] - outgoingMsg pointer is (%x)
Line 7679:  %s: - resolver object is NULL
Line 7688:  %s:[PSPS] - Invalid clientId(%d)
Line 7697:  %s:[PSPS] - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 7705:  %s:[PSPS] - NULL timeKeeper object
Line 7759:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 7772: Condition for calculation auto pause does not satisfied
Line 7790:  %s: Start EarlyPause Timer for GSM(%u)  
Line 7795:  %s: Start EarlyPause Timer for CID(%u) is (%u)  
Line 7808:  %s: No auto pause info passed, autoPauseClintId %u
Line 7832:  %s:[PSPS] -nextEventStatrtTime [%u] PSProtectionTime[%u]
Line 7837:  %s:[PSPS] Auto pause passed for CDMA = %u
Line 7856:  %s:[PSPS] Early pause can be triggered scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u], ResumeReadyPeriod[%u]
Line 7858:  %s:[PSPS] Auto pause passed = %u
Line 7866:  %s:[PSPS] waitingClient Request reason [%u] is greater than scheduledReason[%u]
Line 7872:  [PSPS] Autopause not triggered due to less early pause time margin: scheduledEventTime[%u] currentTime[%u]. Diff between currentTime and scheduledEventTime[%u]
Line 7931:  %s:[PSPS] - this pointer is NULL
Line 7936:  %s:[PSPS] - input pointer is NULL
Line 7941:  %s:[PSPS] - outgoingMsg pointer is NULL
Line 7950:  %s:[PSPS] - Invalid clientId(%d)
Line 7962:  %s:[PSPS] - NULL timeKeeper object
Line 7967:  %s:[PSPS] - NULL client object
Line 7973:  %s:[PSPS] - Release came from idle client, Ignore Event
Line 7993:  %s:[PSPS] - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 8002:  %s:[PSPS] - Process outgoingMsg
Line 8039:  %s: [PSPS] Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 8042:  %s:[PSPS] Auto pause passed = %u
Line 8052:  [PSPS]Autopause not triggered due to less early pause time margin: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 8120:  %s: - this pointer is NULL
Line 8125:  %s: - input pointer is NULL
Line 8135:  %s: -Invalid Client
Line 8141:  %s: - Client is Active/Paused
Line 8181:  %s: autoPauseResumeTimer Stopped
Line 8184:  %s: -client(%d) Unregistered
Line 8218:  %s: - this pointer is NULL
Line 8223:  %s: - output pointer is NULL
Line 8228:  %s: - input pointer is NULL
Line 8239:  %s: - Invalid Request Reason (%d)
Line 8254:  %s: - NULL client object
Line 8259:  %s: - Request should come from the IDLE client clientId (%d)
Line 8267:  %s: - NULL timeKeeper object
Line 8275:  %s: - NULL Resolver object
Line 8280:  %s: autoPauseCID %d, clientId %d, Requesting client requestReason %d, paused client requestReason %d) 
Line 8307:  %s: autoPauseResumeTimer Stopped
Line 8311:  %s: autoPauseResumeTimer is NULL
Line 8323:  %s: - Reject for %d(RAT %d) due to %d(RAT %d) 
Line 8363:  %s: - this pointer is NULL
Line 8368:  %s: - input pointer is NULL
Line 8381:  %s: - NULL timeKeeper object
Line 8386:  %s: - NULL client object
Line 8392:  %s: - Release came from idle client, Ignore Event
Line 8398:  %s: - setScheduledEvent Failed
Line 8409:  %s: - Invalid pausedClientId(%u) 
Line 8428: Scheduled event of CID[%u] is at time Diff of[%u], moving to RelPend1_PauseDone
Line 8456:  %s: - RES_REL should be received from paused client(%d) -> Go to RelPend1 state
Line 8521:  %s: - this pointer is NULL
Line 8526:  %s: - input pointer is NULL
Line 8531:  %s: - output pointer is NULL
Line 8567:  %s: - NULL client object
Line 8573:  %s: - NULL timeKeeper object
Line 8577:  %s: - Resume ready should come from paused client clientId (%d)
Line 8583:  %s: - Resume ready should come After 10 ms from pausedone
Line 8594:  %s: - NULL timeKeeper object
Line 8603:  %s: - resolver object is NULL
Line 8627:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 8642: Condition for calculating Auto pause not satisfied
Line 8657:  %s Early pause can be triggered scheduledEventTime %u currentTime %u
Line 8676:  %s Auto pause passed = %u scheduledRat(%d)
Line 8695:  %s: autoPauseResumeTimer Stopped
Line 8746:  SRL1RC_Dbg %s:
Line 8748:  %s: - this pointer is NULL
Line 8753:  %s: - output pointer is NULL
Line 8758:  %s: - input pointer is NULL
Line 8774:  %s: - Invalid Client (%d)
Line 8818:  %s: - this pointer is NULL
Line 8823:  %s: - input pointer is NULL
Line 8828:  %s: - outgoingMsg pointer is NULL
Line 8833:  %s: - outgoingMsg pointer is (%x)
Line 8842:  %s: - Invalid clientId(%d)
Line 8855:  %s: - NULL timeKeeper object
Line 8859: Time taken to pause  = (%u) by RAT (%u)
Line 8862:  %s: - Process outgoingMsg
Line 8963:  %s: - this pointer is NULL
Line 8968:  %s: - input pointer is NULL
Line 8977:  %s: - Invalid clientId(%d)
Line 8989:  %s: - NULL timeKeeper object
Line 8994:  %s: - NULL client object
Line 9000:  %s: - Release came from idle client, Ignore Event
Line 9010:  %s: - setScheduledEvent Failed
Line 9020:  %s: - RES_REL received from waiting client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone2 state
Line 9030:  %s: - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_PausePend state
Line 9136:  %s: - this pointer is NULL
Line 9141:  %s: - input pointer is NULL
Line 9152:  %s: -Invalid Client
Line 9158:  %s: - Client is Active/Paused. First Pause_done or release should have been sent from the Active client
Line 9162:  %s: -client(%d) Unregistered
Line 9209:  %s: - this pointer is NULL
Line 9214:  %s: - output pointer is NULL
Line 9219:  %s: - input pointer is NULL
Line 9235:  %s: - Invalid Client (%d)
Line 9244:  %s: - Registered Client resource request in AWAITING_PAUSE_DONE state, retry after %d ms
Line 9251:  %s: - Active Client resource request in AWAITING_PAUSE_DONE state instead of Pause_done/Release. Request rejected
Line 9296:  %s: - this pointer is NULL
Line 9301:  %s: - input pointer is NULL
Line 9331:  %s: - Invalid clientId(%d), Paused clientId %u
Line 9345:  %s: - NULL client object
Line 9351:  %s: - Release came from idle client, Ignore event
Line 9359:  %s: - NULL timeKeeper object
Line 9367:  %s: - resolver object is NULL
Line 9375:  %s: - setScheduledEvent Failed
Line 9383:  %s: - RES_REL received from paused client(%d) -> Go to srl1rc_rmFSMState_AwaitingPauseDone state
Line 9432:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 9447:  Condition for calculating auto pause not satisfied
Line 9464:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9473:  %s: pausedClientId %d, targetClientId %d
Line 9485:  %s Auto pause passed = %u scheduledRat(%d)
Line 9498:  Autopause not triggered due to less early pause time margin in REL_PEND2: scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9504: %s:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 9557:  %s: - this pointer is NULL
Line 9562:  %s: - input pointer is NULL
Line 9567:  %s: - outgoingMsg pointer is NULL
Line 9572:  %s: - outgoingMsg pointer is (%x)
Line 9582:  %s: - Invalid clientId(%d)
Line 9589:  %s: - Pause done can come only from active clients, Invalid event from client clientId(%d) clientState(%d)
Line 9597:  %s: - NULL timeKeeper object
Line 9605:  %s: - resolver object is NULL
Line 9671:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 9686:  Condition for calculating Auto pause 
Line 9699:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9726:  %s Auto pause passed = %u scheduledRat(%d)
Line 9737:  %s not valid auto pause cid = %u
Line 9750:  %s: - Process outgoingMsg
Line 9785:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 9800:  Condition for calculating Auto pause not satisfied
Line 9813:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 9840:  %s Auto pause passed = %u scheduledRat(%d)
Line 9850:  %s not valid auto pause cid = %u
Line 9883:  %s: - this pointer is NULL
Line 9888:  %s: - input pointer is NULL
Line 9899:  %s: -Invalid Client
Line 9905:  %s: - Client is Active
Line 9909:  %s: -client(%d) Unregistered
Line 9960:  %s: - this pointer is NULL
Line 9965:  %s: - output pointer is NULL
Line 9970:  %s: - input pointer is NULL
Line 9978:  %s: - Invalid Request Reason (%d)
Line 9985:  %s: - Invalid clientId(%d)
Line 10001:  %s: - NULL timeKeeper object
Line 10020: Reject due to RF hogging prevention in REL_PEND3. ReassignCount = %d
Line 10028:  %s 2G Measurement request in REL_PEND_3 state ResourceRequestRAT(%u),  ActiveRATReason(%u)
Line 10032:  %s Request came from non active cell in Rel_Pend_3, RAT %u, Reason %u)
Line 10072:  %s: - this pointer is NULL
Line 10077:  %s: - input pointer is NULL
Line 10082:  %s: - output pointer is NULL
Line 10097:  %s: - NULL client object
Line 10102:  %s: - Resume ready should come from paused client clientId (%d)
Line 10154:  %s: - this pointer is NULL
Line 10159:  %s: - input pointer is NULL
Line 10167:  %s: - Invalid Request Reason (%d)
Line 10175:  %s: - Invalid clientId(%d)
Line 10183:  %s: - NULL client object
Line 10188:  %s: - outgoingMsg pointer is NULL
Line 10193:  %s: - NULL timeKeeper object
Line 10201:  %s: - resolver object is NULL
Line 10207:  %s: - Release came from idle client, Ignore event
Line 10252:  %s: - Resume ClientId is Invalid, ResCid[%u]
Line 10279: setScheduledEvent Failed
Line 10289: setScheduledEvent Failed
Line 10307:  %s: clientId %u added to eligibleAutoPauseClients, noOfElements %u
Line 10322: Condition for calculating auto pause not satisfied
Line 10339:  %s Early pause can be triggered scheduledEventTime %u currentTime %u Diff between currentTime and scheduledEventTime = %u
Line 10348:  %s: pausedClientId %d, targetClientId %d
Line 10360:  %s Auto pause passed = %u scheduledRat(%d)
Line 10379: autoPauseResumeTimer set Failed, Resume Paused Client
Line 10446: Scheduled event of CID[%u] is at time Diff of[%u], moving to RelPend2_PauseDone
Line 10454: %s:  Invalid auto pause client Id %u, auto pause can not be triggered
Line 10470:  %s nextEventStartTime [%u] PSProtectionTime[%u]
Line 10476:  %s:[PSPS] CDMA next event is falling in active client protection time Auto pause passed for CDMA = %u
Line 10494:  %s:[PSPS] -Resume sent to Client[%u]. resumeReadyPeriod[%u], Auto Pause Time[%u]
Line 10504:  %s:[PSPS] -Resume sent to Client[%u]. AutoPauseTimer not sent because resume client requestReason is of higherPriority
Line 10510:  %s:[PSPS] -Resume sent to Client[%u]. Time Diff not sufficient to trigger Auto Pause[%u]
Line 10533:  %s:[PSPS] Sending PS PS stop indication to client[%u]
Line 10537:  %s:[PSPS] Invalid [%d]
Line 10541:  %s: Resource release came from paused client, Paused Client Id %d
Line 10574:  %s: - this pointer is NULL
Line 10605:  %s: - this pointer is NULL
Line 10634:  %s: - this pointer is NULL
Line 10673:  %s: - this pointer is NULL
Line 10681:  %s: - NULL client object
Line 10689:  %s: - NULL timeKeeper object
Line 10694:  %s: - outgoingMsg pointer is NULL
Line 10698:  %s: - rsp pointer is NULL
Line 10709:  Mode is not 3G3G ignore further computation
Line 10720:  3G3G Other client PICH RSN not available. Possible Non-IDLE mode or otherClientPICHRSN is in past
Line 10745:  3G3G diffPICH1PCH2 %d is greater than CT hence FCFS Scheme of resolution is best in this case
Line 10773:  3G3G diffPICH1PCH2 %d is lesser than CT hence RoundRobin Scheme of resolution is best in this case
Line 10799:  %s: - this pointer is NULL
Line 10807:  %s: - resolver object is NULL
Line 10829:  %s: - externalUpdation %d lastExternalUpdation %d ret %d isForced%d
Line 10850:  %s: - this pointer is NULL
Line 10858:  %s: - NULL timeKeeper object
Line 10895:  %s: - NULL clientDBObj object
Line 10901:  %s: - NULL intfObj object
Line 10907:  %s: - NULL resourceMgrObj object
Line 10913:  %s: - Invalid Client Id %u
Line 10960: %s: Resume Now (%d)
Line 10964: %s: autopauseresume handler expiry with out start or after stop
Line 11048:  %s: - this pointer is NULL
Line 11053:  %s: - input pointer is NULL
Line 11058: %s: - Invalid BandInfo(%d)
Line 11063: %s: - Invalid Channel(%d)
Line 11071:  %s: - NULL clientDB object
Line 11077:  %s: - NULL client object
Line 11082:  %s: clientId(%d) isDRImpossible(%d) bandInfo(%d) channelConfigured(%d)
Line 11096:  %s: - this pointer is NULL
Line 11101:  %s: - input pointer is NULL
Line 11109:  %s: - NULL clientDB object
Line 11115:  %s: - NULL client object
Line 11120:  %s: clientId(%d) isDRImpossible(%d)
Line 11146:  %s: SRL1RC Resource Manager Initialization
Line 11241: autoPauseResumeTimer Creation
Line 11244: autoPauseResumeTimer Creation Failed
Line 11335:  SRL1RC_Dbg %s: RAT(%u), delta(%u)
Line 11368:  SRL1RC_Dbg %s: RAT(%u), delta(%u)
Line 11381: 3G3G:  RSN is in Past currentRSN= %d RSN = %d
Line 11399: 3G3G:  RSN2 is earlier than RSN1 currentRSN= %d RSN1 = %d RSN2 = %d
Line 11404: 3G3G:  RSN1 is earlier than RSN2 currentRSN= %d RSN1 = %d RSN2 = %d
Line 11416: SRL1RC SignallingUsagePlot(%d) 
Line 11419: SRL1RC L1HighUsagePlot(%d) 
Line 11422: SRL1RC PagingUsagePlot(%d) 
Line 11425: SRL1RC SysInfoUsagePlot(%d) 
Line 11428: SRL1RC MeasurementUsagePlot(%d) 
Line 11431: SRL1RC CellSearchUsagePlot(%d) 
Line 11434: SRL1RC PSUsagePlot(%d) 
Line 11437: Default SRL1RC UsagePlot(%d) 
Line 11439: SRL1RC UsagePlot(%d) 
Line 11445:  SRL1RC_Dbg %s:
Line 11559: Logging Invalid Message Type
