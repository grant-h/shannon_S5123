Line 324:  init: SysInfoMgr initialization problem - couldn't register with boundary
Line 331:  init: SysInfoMgr initialization problem - couldn't do state initialisation
Line 362:  free: releasing BCH / PCCPCH
Line 405: rrc_Class_SysInfoMgr_GetInstanceId: SysInfoMgr created at address: 0x%0.8x
Line 440: tmp_bch is NULL or msg->payload.bchId != tmp_bch->trChId
Line 551: CallbackBchConfigured: [error] - BCCHPAUSED transition failed
Line 558: CallbackBchConfigured: [error] -NACK received
Line 580:  BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Line 593: CallbackBchConfigured: [error] - WAITFORSUBSCRIPTION transition failed
Line 604: CallbackBchConfigured: [success] - ACK received, bcchReleased = FALSE
Line 650:  MapExtMsgIdToIntMsgId: Unknown CUPHY solicited message %i received 
Line 662:  MapExtMsgIdToIntMsgId: CTPHY solicited message %i received 
Line 668:  MapExtMsgIdToIntMsgId: Unknown CTPHY solicited message %i received
Line 678:  MapExtMsgIdToIntMsgId: Layer %d has sent unexpecting solicited message %i  
Line 705: WaitForSubscription_Am_SubscribeToMibIntraFreq: [received]
Line 735: WaitForSubscription_Am_SubscribeToSibsIntraFreq: message received
Line 742: WaitForSubscription_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 775: WaitForSubscription_Am_SubscribeToSchInfoIntraFreq: [received]
Line 805: WaitForSubscription_Am_SubscribeToMibInterFreq: message received
Line 836: Am_SubscribeToSystemInfo: message received
Line 865: Am_UnsubscribeAll: [received]
Line 881: Am_UnsubscribeAll: [received]
Line 907: UphyBchResourceConfigReady: [received]
Line 917: WaitForSubscription_UphyBchResourceConfigReady Unavailable to config bch resources RetCode(%d)
Line 921: WaitForSubscription_UphyBchResourceConfigReady ReaderQ already NULL
Line 988: UphyBchResourceConfigReady: [error] - BCCHPAUSED transition failed
Line 998: UphyBchResourceConfigReady: [error] - WAITFORBCHTOBECONFIGURED transition failed
Line 1018: Am_UnSubcribeSystemInfo: [received]
Line 1049: Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented 
Line 1075: WaitForBchToBeConfigured_Am_SubscribeToMibIntraFreq: [received]
Line 1100: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [received]
Line 1105: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - no activeReaderQ present
Line 1114: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 1127: WaitForBchToBeConfigured_Am_SubscribeToSibsIntraFreq: [error] - unable to subscribe SIBs
Line 1152: WaitForBchToBeConfigured_Am_SubscribeToSchInfoIntraFreq: [received]
Line 1177: WaitForBchToBeConfigured_Am_SubscribeToMibInterFreq: [received]
Line 1204: Am_SubscribeToSystemInfo: [received]
Line 1209: Am_SubscribeToSystemInfoSibs: no activeReaderQ present
Line 1224: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1250: WaitForBchToBeConfigured_Am_BchResourceConfigured: [received]
Line 1262: WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Line 1274: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 1291: WaitForBchToBeConfigured_Am_BchResourceConfigured: [error] - WAITFORACTIVEREADERTOFINISH transition failed
Line 1337: Am_UnSubcribeSystemInfo: nonactive readerQ not yet implemented 
Line 1366: Am_ForcedUnsubscribeAll: [received]
Line 1378: Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1402: WaitForActiveReaderToFinish_Am_SubscribeToMibIntraFreq: [received]
Line 1427: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [received]
Line 1432: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - no active reader present
Line 1441: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] -no scheduling information present for SIBs being subscribed 
Line 1455: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreqToSibsIntraFreq: [error] - unable to subscribe SIBs
Line 1462: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [error] - rrc_SIM_SysInfoReader_StartReading returns FALSE
Line 1466: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: deleting activeReaderQ->reader @ 0x0%x
Line 1477: WaitForActiveReaderToFinish_Am_SubscribeToSibsIntraFreq: [success] - rrc_SIM_SysInfoReader_StartReading returns TRUE
Line 1502: WaitForActiveReaderToFinish_Am_SubscribeToSchInfoIntraFreq: [received]
Line 1527: WaitForActiveReaderToFinish_Am_SubscribeToMibInterFreq: [received]
Line 1553: Am_SubscribeToSystemInfo: [received]
Line 1558: Am_SubscribeToSystemInfo: no active reader present
Line 1573: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 1579: Am_SubscribeToSystemInfo: StartReading error - deleting activeReaderQ->reader
Line 1589: Am_SubscribeToSystemInfo: StartReading returns TRUE
Line 1614: am_FailureInd: [received]
Line 1621: am_FailureInd: releasing BCH / PCCPCH
Line 1626: am_FailureInd: [error] - unable to release physical channel
Line 1635: am_FailureInd: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1658: am_FinishInd: [received]
Line 1685: am_FinishInd: releasing BCH / PCCPCH
Line 1690: am_FinishInd: [error] - unable to release physical channel
Line 1697: am_FinishInd: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1703: am_FinishInd: not releasing the BCH
Line 1727: WaitForActiveReaderToFinish_SIR_am_RecvMibOrSib: [received]
Line 1752: Am_UnsubscribeAll: [received]
Line 1768: Am_UnsubscribeAll: releasing BCH / PCCPCH
Line 1773: Am_UnsubscribeAll: [error] - unable to release physical channel
Line 1783: Am_UnsubscribeAll: [error] - WAITFORBCHTOBERELEASED transition failed
Line 1790: Am_UnsubscribeAll: not releasing the BCH
Line 1798: The Active reader has not requested for Unsubscribe All, keeping the BCCH
Line 1808: Am_UnsubscribeAll: BCH / PCCPCH already released
Line 1818: Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1833: Am_ForcedUnsubscribeAll: [received]
Line 1846: Am_ForcedUnsubscribeAll: releasing BCH / PCCPCH
Line 1851: Am_ForcedUnsubscribeAll: [error] - unable to release physical channel
Line 1864: Am_UnsubscribeAll: [error] - WAITWAITFORSUBSCRIPTION transition failed
Line 1871: Am_ForcedUnsubscribeAll: not releasing the BCH
Line 1879: The Active reader has not requested for Unsubscribe All, keeping the BCCH
Line 1886: Am_ForcedUnsubscribeAll: BCH / PCCPCH already released
Line 1895: Am_UnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 1912: [Default_Am_PauseBcch] bcchPauseRecvd = TRUE
Line 1933: [Default_Am_PauseBcch] bcchPauseRecvd = FALSE
Line 1956: WaitForActiveReaderToFinish_Am_PauseBcch: [error] - unable to release physical channel
Line 1972: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 1993:  BcchPaused_Am_ResumeBcch: deleting activeReaderQ->reader 0x%0.8x
Line 2005: Am_UnsubscribeAll: [error] - BCCHPAUSED transition failed
Line 2029: Am_SubscribeToSystemInfo: [received]
Line 2034: Am_SubscribeToSystemInfo: no active reader present
Line 2054: Am_SubscribeToSystemInfo: unable to subscribe to SIBs
Line 2059: Am_SubscribeToSystemInfo: HandleSubscription returns TRUE
Line 2137: Am_UnSubcribeSystemInfo: releasing BCH / PCCPCH
Line 2145: Am_UnSubcribeSystemInfo: [error] unable to release physical channel
Line 2151: Am_UnSubcribeSystemInfo: [error] - WAITFORBCHTOBERELEASED transition failed
Line 2161: Am_UnSubscribeSystemInfo: unsubscribe in nonactive readerQ not yet implemented 
Line 2188: Am_UnsubscribeAll: [received]
Line 2207: Am_ForcedUnsubscribeAll: [received]
Line 2217: Am_ForcedUnsubscribeAll: [error] - WAITFORSUBSCRIPTION transition failed
Line 2241: Am_BchResourceReleased: [received]
Line 2250: Am_BchResourceReleased: [error] - WAITFORSUBSCRIPTION transition failed
Line 2262: WaitForBchToBeReleased_Am_SubscribeToMibIntraFreq: [received]
Line 2273: WaitForBchToBeReleased_Am_SubscribeToSibsIntraFreq: [received]
Line 2282: WaitForBchToBeReleased_Am_SubscribeToSchInfoIntraFreq: [received]
Line 2293: WaitForBchToBeReleased_Am_SubscribeToMibInterFreq: [received]
Line 2304: WaitForBchToBeReleased_Am_SubscribeToSystemInfo: [received]
Line 2745: Avoiding DSRC update for BCCH read %d
Line 2751: Avoiding DSRC update for BCCH read for ANR/CGI Info
Line 2765: Avoiding DSRC update for BCCH read
Line 2812:  priv_HandleAmMessage: activeReaderQ created @ 0x%0.8x
Line 2821:  priv_HandleAmMessage: sending UphyBchResCfgReadyForSend to ResourceMgr
Line 2829:  priv_HandleAmMessage: error - UphyBchResCfgReadyForSend message not generated
Line 2838:  priv_HandleAmMessage: activeReaderQ freed
Line 2867: priv_HandleAmMessage: Pending Client is same as new request client,Merging
Line 2890: priv_HandleAmMessage: Waiting on DSRC : appending to pending Q
Line 2900:  priv_HandleAmMessage: active reader present, handling IntraFreqSibs
Line 2909:  priv_HandleAmMessage: [error] - unable to subscribe SIBs
Line 2931:  priv_HandleBackgroundResourceRelease: [error ]- THIS SHOULD NOT BE USED YET!
Line 2950:  priv_HandleBackgroundResourceRelease: priv_configureBcch() success
Line 2955:  priv_HandleBackgroundResourceRelease: priv_configureBcch() failure
Line 2968:  priv_HandleBackgroundResourceRelease: priv_configureBcch() success
Line 2973:  priv_HandleBackgroundResourceRelease: priv_configureBcch() failure
Line 2985:  priv_HandleBackgroundResourceRelease: mibInterFreq.retryCount is zero, hence going to terminate SI Reading
Line 2990:  priv_HandleBackgroundResourceRelease: error - no active Reader present
Line 3037:  priv_HandleUphyBchResourceConfigReady: handling a BackgroundResourceRelease message
Line 3045:  priv_HandleUphyBchResourceConfigReady: [error] - unable to subscribe SIBs
Line 3057:  priv_HandleUphyBchResourceConfigReady: deleting activeReaderQ->reader 0x%0.8x
Line 3084:  priv_HandleAmBchResourceConfigured: [error] - activeReaderQ == NULL
Line 3093:  priv_HandleAmBchResourceConfigured: [error] - rrc_SysInfoReader_StartReading returns FALSE
Line 3097:  priv_HandleAmBchResourceConfigured: deleting activeReaderQ->reader @ 0x%0.8x
Line 3108:  priv_HandleAmBchResourceConfigured: [success] - rrc_SysInfoReader_StartReading returns TRUE
Line 3132: SIM_priv_TerminateLastSubscription: activeReaderQ already NULL
Line 3146:  priv_HandleSirAmFailureInd: number of active clients = %d
Line 3153:  priv_HandleSirAmFailureInd: terminating pending requests for client
Line 3176:  priv_HandleSirAmFailureInd: [%s] callback function called
Line 3229:  priv_HandleBchResourceReleased: [error] -NACK received
Line 3234:  priv_HandleBchResourceReleased: ACK received
Line 3243:  priv_HandleClientCallbackForReleaseBch: %s callback function called
Line 3281: priv_HandleUnsubscribeAll: -internal message structure for "UnsubscribeAll" is NULL
Line 3308: DBCHR: SibId(%d) Cancelled
Line 3335:  priv_HandleUnsubscribeAll: number of active clients = %d
Line 3341:  priv_HandleUnsubscribeAll: activeReaderQ->client @ 0x%0.8x, pMsg->clientId = 0x%0.8x
Line 3372:  priv_HandleUnsubscribeAll: Pending requests for the client is not checked
Line 3377:  priv_HandleUnsubscribeAll: terminating pending requests for client
Line 3398:  priv_HandleSirAmRecvMibOrSib: received in state WaitForActiveReaderToFinish
Line 3426:  priv_HandleSirAmRecvMibOrSib: [error] - no active client present
Line 3441: received InfoBlockInstId is NULL 
Line 3455:  DBCHR : First MIB received : rep8 -> rep40
Line 3468:  DBCHR: [%s] : SIB type [%d] Received!!
Line 3480:  DBCHR: [%s] : SIB type [%d] Received!!
Line 3506:  priv_HandleSirAmRecvMibOrSib: [%s] - removed from activeReaderQ
Line 3511:  priv_HandleSirAmRecvMibOrSib: [%s] - passed to client %s
Line 3532:  priv_HandleSirAmRecvMibOrSib: [error] - SIB/MIB decoding failure returned to SysInfoMgr
Line 3536:  priv_HandleSirAmRecvMibOrSib: terminating pending requests for client
Line 3574: pMsg->InfoBlockInstId is NULL
Line 3600: rrc_SysInfoMgr_priv_HandleNACKBchConfigCnf: [error] -activeReaderQ is NULL
Line 3605:  priv_HandleNACKBchConfigCnf: [error] - no client in activeReaderQ!
Line 3610:  priv_HandleNACKBchConfigCnf: [error] - no callback function in activeReaderQ!
Line 3616:  priv_HandleNACKBchConfigCnf: [%s] callback function called with BCHREADERROR
Line 3633:  priv_HandleNACKBchConfigCnf: terminating pending requests for client
Line 3647:  priv_HandleNACKBchConfigCnf: number of active clients = %d
Line 3737: priv_HandleSubscription: SysInfoReader creation failed
Line 3742: priv_HandleSubscription: activeReaderQ->reader created @ 0x%0.8x
Line 3753: priv_HandleSubscription: [success] - MIB Block requested
Line 3760: priv_HandleSubscription: rrc_SysInfoReader_RequestMib call failed
Line 3771: priv_HandleSubscription: [success] - SchBlock requested
Line 3778: priv_HandleSubscription: rrc_SysInfoReader_RequestSchInfo call failed
Line 3793: priv_HandleSubscription: request IntraFreq SIBs failed
Line 3798: priv_HandleSubscription: [success] - request IntraFreqSIBs successful
Line 3817: priv_HandleSubscription: request MibSbSib_IntraFreq failed
Line 3822: priv_HandleSubscription: [success] - request MibSbSib_IntraFreq successful
Line 3832: priv_HandleSubscription: error in the choice field of ReaderQ
Line 3858:  priv_HandleBchConfigRequest: [fail] - no activeReaderQ
Line 3868:  priv_HandleBchConfigRequest: monitored and serving cells are same
Line 3879:  rrc_SysInfoMgr_priv_HandleBchConfigRequest TDDRequest: [success] - BCCH configured for MIB InterFreq
Line 3885:  rrc_SysInfoMgr_priv_HandleBchConfigRequest TDDRequest: [fail] - BCCH not configured for MIB InterFreq
Line 3897:  priv_HandleBchConfigRequest: [success] - BCCH configured for MIB InterFreq
Line 3903:  priv_HandleBchConfigRequest: [fail] - BCCH not configured for MIB InterFreq
Line 3923:  BPLMN BCH Request TDD: [success] - BCCH configured
Line 3928:  BPLMN : priv_HandleBchConfig Request TDD: [fail] - BCCH not configured
Line 3940:  priv_HandleBchConfig TDDRequest: [success] - BCCH configured
Line 3946:  priv_HandleBchConfig TDDRequest: [fail] - BCCH not configured
Line 3962:  BPLMN BCH Request: [success] - BCCH configured
Line 3967:  BPLMN : priv_HandleBchConfig Request: [fail] - BCCH not configured
Line 3977:  BPLMN BCH Request for AnrInfoReading : [success] - BCCH configured
Line 3982:  BPLMN : priv_HandleBchConfig Request for AnrInfOReading : [fail] - BCCH not configured
Line 3993:  priv_HandleBchConfigRequest: [success] - BCCH configured
Line 3999:  priv_HandleBchConfigRequest: [fail] - BCCH not configured
Line 4071: priv_HandleIntraFreqSibsReaderActive: appending Intrafrequency subscription
Line 4076: priv_HandleIntraFreqSibsReaderActive: deleting activeReaderQ->reader @ 0x%0.8x
Line 4090: priv_HandleIntraFreqSibsReaderActive: activeReaderQ->reader deleted
Line 4097: activeReaderQ->reader == NULL, just append entry to Q
Line 4105: priv_HandleIntraFreqSibsReaderActive: appending to pending Q. isResubscribReq[%d]
Line 4133:  priv_HandleClientCallback: [error] -internal message structure for "UnsubscribeAll" is NULL
Line 4140:  priv_HandleClientCallback: [error] -no client for callback function
Line 4147:  priv_handleClientCallback: [%s] has no callback function
Line 4155:  priv_HandleClientCallback: [%s] callback function called
Line 4184:  priv_HandleClientCallbackForReleaseBch: [error] -internal message structure for "UnsubscribeAll" is NULL
Line 4190:  priv_HandleClientCallbackForReleaseBch: [error] -no client for callback function
Line 4197:  priv_HandleClientCallbackForReleaseBch: [%s] has no callback function
Line 4207:  priv_HandleClientCallbackForReleaseBch: callback function already exists for %s
Line 4217:  priv_HandleClientCallbackForReleaseBch: [error] - can only have 2 callback clients
Line 4225:  priv_HandleClientCallbackForReleaseBch: storing callback function for %s
Line 4360:  DBCHR : Appending Sibs to same Active reader Q: Sending BCH Modify
Line 4407: priv_addEntryToQ: [SI_SubscribeToSchInfo_IntraFreq]
Line 4433: priv_addEntryToQ: [SI_SubscribeToMib_IntraFreq]
Line 4459: priv_addEntryToQ: [SI_SubscribeToMib_InterFreq]
Line 4496: priv_addEntryToQ: [SI_SubscribeToSibs_IntraFreq]
Line 4536: rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds  is NULL
Line 4552: priv_addEntryToQ: [SI_SubscribeToMibSbSib_IntraFreq]
Line 4612: rrc_SysInfoMgr_priv_addEntryToQ: QEntry->u.sibIntraFreq.sibIds  is NULL
Line 4620: priv_addEntryToQ: [fail] - invalid subscription request not added to Q
Line 4630: priv_addEntryToQ: added request to Q with cellParamId = %d, DL UARFCN = %d, callback addr: 0x%0.8x
Line 4637: priv_addEntryToQ: added request to Q with CPICH = %d, DL UARFCN = %d, callback addr: 0x%0.8x
Line 4668: rrc_SysInfoMgr_priv_appendToPendingQ: newReaderQ is NULL
Line 4691:  priv_appendToPendingQ: subscribe to MIB/SIB request put on Queue by SysInfoMgr
Line 4758: Entry not empty since client %s is subscribed to SibId: %d
Line 4770: Invalid subscription type: %d
Line 4806:  priv_removeClientFromPendingQ: trying to remove client %s from pending Q
Line 5077:  priv_configureBcch: call to rrc_Bcch_getBch returns FAILURE
Line 5084:  priv_configureBcch: physical channel configuration successful
Line 5091:  priv_configureBcch: physical channel Configuration Failure
Line 5099:  priv_configureBcch: unable to configure BCCH due to null activeBcch instance
Line 5116:  rrc_SysInfoMgr_priv_TddconfigureBcch: call to rrc_Bcch_getBch returns FAILURE
Line 5123:  rrc_SysInfoMgr_priv_TddconfigureBcch: physical channel configuration successful
Line 5129:  rrc_SysInfoMgr_priv_TddconfigureBcch: physical channel Configuration Failure
Line 5137:  rrc_SysInfoMgr_priv_TddconfigureBcch: unable to configure BCCH due to null activeBcch instance
Line 5161:  priv_terminateLastSubscription: releasing BCH / PCCPCH
Line 5166:  priv_terminateLastSubscription: [fail] - unable to release physical channel
Line 5174:  priv_terminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
Line 5178:  priv_terminateLastSubscription: activeReaderQ->reader deleted
Line 5182:  priv_terminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Line 5189:  priv_terminateLastSubscription: activeReaderQ deleted
Line 5198:  priv_terminateLastSubscription: error - state transition to WAITFORSUBSCRIPTION failed
Line 5221:  priv_makePendingSubscriptionActive: pendingReaderQ is empty
Line 5228:  priv_makePendingSubscriptionActive: pendingReaderQ is not Empty
Line 5234: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSchInfo_IntraFreq]
Line 5242: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_IntraFreq]
Line 5251: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMib_InterFreq]
Line 5260: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToSibs_IntraFreq]
Line 5269: rrc_SysInfoMgr_priv_makePendingSubscriptionActive: [SI_SubscribeToMibSbSib_IntraFreq]
Line 5279: priv_makePendingSubscription: [fail] - invalid subscription request not added to Q
Line 5312:  priv_validateIntraFreqSibSubscriptionReq: message is NULL
Line 5319:  priv_validateIntraFreqSibSubscriptionReq: mibPtr is NULL
Line 5375: Rx-ASN__MASTER_INFORMATION_BLOCK
Line 5391: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_%d
Line 5395: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__1
Line 5399: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__2
Line 5403: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__3
Line 5407: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_13__4
Line 5411: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_14
Line 5415: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15
Line 5419: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__1
Line 5423: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__2
Line 5427: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__3
Line 5431: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_16
Line 5435: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_17
Line 5439: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__4
Line 5443: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_18
Line 5447: Rx-ASN__SCHEDULING_BLOCK_1
Line 5451: Rx-ASN__SCHEDULING_BLOCK_2
Line 5455: Rx-ASN__SYSTEM_INFORMATION_BLOCK_TYPE_15__5
Line 5459: Rx-ASN__MESSAGE_UNKNOWN
Line 5482:  priv_ReleaseBchPccpch: [fail] - no active BCCH
Line 5493:  priv_ReleaseBchPccpch: tmp_bch is NULL
Line 5498:  priv_ReleaseBchPccpch: [fail] - unable to release physical channel
Line 5527:  priv_terminateSIReading: pendingReaderQ = NULL, terminating last subscription
Line 5534:  priv_terminateSIReading: making pending subscription active
Line 5554:  priv_TerminateLastSubscription: activeReaderQ already NULL
Line 5560:  priv_TerminateLastSubscription: deleting activeReaderQ->reader @ 0x%0.8x
Line 5572:  priv_TerminateLastSubscription: deleting activeReaderQ @ 0x%0.8x
Line 5610: DBCHR: SibId(%d) Cancelled
Line 5626:  rrc_SysinfoMgr : CancelSubscription for Sib [%d] 
Line 5800: genMsg->pccpchInfo.cellParamId %d
Line 5804: genMsg->pccpchInfo.cellParamId = NULL
Line 5888:  DBCHR : rrc_SysInfoMgr_priv_ModifyMIBSiDb
Line 5942: DBCHR: rrc_SysInfoMgr_priv_GetSegCountfromSiDB (From SchInfo)[%d] 
Line 5951:  DBCHR : rrc_SysInfoMgr_priv_PopulateSiDb
Line 5975:  DBCHR : Client Resubscribed for a received SIB %d, ConfigStatus = %d,Send Modify again
Line 6002: DBCHR: VT [%d] 
Line 6010: DBCHR: SiDb[%d] : VT [%d] 
Line 6015: DBCHR: SiDb[%d] : SIBType [%d] 
Line 6027: DBCHR: SiDb[%d] : SegCount [%d] 
Line 6036: DBCHR: SiDb[%d] : SibRep 4
Line 6041: DBCHR: SiDb[%d] : SibRep 8
Line 6046: DBCHR: SiDb[%d] : SibRep 16
Line 6051: DBCHR: SiDb[%d] : SibRep 32
Line 6056: DBCHR: SiDb[%d] : SibRep 64
Line 6061: DBCHR: SiDb[%d] : SibRep 128
Line 6066: DBCHR: SiDb[%d] : SibRep 256
Line 6071: DBCHR: SiDb[%d] : SibRep 512
Line 6076: DBCHR: SiDb[%d] : SibRep 1024
Line 6081: DBCHR: SiDb[%d] : SibRep 2048
Line 6086: DBCHR: SiDb[%d] : SibRep 4096
Line 6090: DBCHR: rrc_SysInfoMgr_priv_PopulateSiDb: Invalid Repetition Factor
Line 6092: DBCHR: SiDb[%d] : SibPos[0] = %d
Line 6105: DBCHR: Ignore the rest of sib_PosOffsetInfo received in Scheduling info for SiDb[%d] as OffsetIndex[%d] is exceeding SegCount[%d]
Line 6161: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 6173: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 6178: DBCHR: SiDb[%d] : SibPos[%d] = %d
Line 6196: DBCHR: rrc_SysInfoMgr_priv_FreeSiDb
Line 6218: DBCHR: rrc_SysInfoMgr_priv_RollBackSiDb
Line 6225: DBCHR: SiDb[%d]->ConfigStatus = Configured -> PendingConfig
Line 6274: DBCHR: rrc_SysInfoMgr_PopSchInfoFromSiDb
Line 6404: DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6409: DBCHR: [%s]: SegCount:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6419: DBCHR: [%s]: SegCount Mismatch :SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6424: DBCHR: [%s]: SegCount Mismatch:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 6461: rrc_SysInfoMgr_NotifyClientRemoved ClientId  = %x
