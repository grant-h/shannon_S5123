Line 362: messageListArray[i]=0
Line 362: messageListArray[i]=0
Line 413:  Release storedCellSearcher (max %d, current %d)
Line 413:  Release storedCellSearcher (max %d, current %d)
Line 434:  FREE StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 434:  FREE StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 441:  nStoredCellSearchers > 0
Line 441:  nStoredCellSearchers > 0
Line 490: uphy_CSearcherController_releaseMidCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 490: uphy_CSearcherController_releaseMidCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 502:  uphy_CSearcherController_releaseMidGroupCellSynchroniser: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 502:  uphy_CSearcherController_releaseMidGroupCellSynchroniser: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 531: uphy_CSearcherController_releaseAllGroupCellSynchroniser: BCH or DCH Tranceiver is Active
Line 531: uphy_CSearcherController_releaseAllGroupCellSynchroniser: BCH or DCH Tranceiver is Active
Line 541: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 541: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 549: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Request Msg is NULL
Line 549: uphy_CSearcherController_releaseAllGroupCellSynchroniser: Request Msg is NULL
Line 589:  uarfcn=%d
Line 589:  uarfcn=%d
Line 610: SetPschMultipathInfoState uarfcn=%d state=%d
Line 610: SetPschMultipathInfoState uarfcn=%d state=%d
Line 658: uphy_CSearcherController_GetPschMultipathInfoState UP TO DATE Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 658: uphy_CSearcherController_GetPschMultipathInfoState UP TO DATE Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 665: uphy_CSearcherController_GetPschMultipathInfoState TOO OLD Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 665: uphy_CSearcherController_GetPschMultipathInfoState TOO OLD Stored State uarfcn=%d now=%d PschStored=%d TimeDiff=%d
Line 681: uphy_CSearcherController_GetPschMultipathInfoState  uarfcn=%d state=%d now=%d oldState=%d PschStored=%d
Line 681: uphy_CSearcherController_GetPschMultipathInfoState  uarfcn=%d state=%d now=%d oldState=%d PschStored=%d
Line 723: SetPschMultipathInfo uarfcn=%d state=%d now=%d
Line 723: SetPschMultipathInfo uarfcn=%d state=%d now=%d
Line 808:  uphy_CSearcherController_AllocatePschSignal: No free signals
Line 808:  uphy_CSearcherController_AllocatePschSignal: No free signals
Line 832:  AllocatePschSignal uarfcn=%d signal=%d value=%d
Line 832:  AllocatePschSignal uarfcn=%d signal=%d value=%d
Line 883:  uarfcn=%d
Line 883:  uarfcn=%d
Line 923:  uphy_CSearcherController_ReleasePschSignal none (probably timed out
Line 923:  uphy_CSearcherController_ReleasePschSignal none (probably timed out
Line 927:  uphy_CSearcherController_ReleasePschSignal: Dodgy signal %d
Line 927:  uphy_CSearcherController_ReleasePschSignal: Dodgy signal %d
Line 938:  uphy_CSearcherController_DoAndReleasePschSignal for uarfcn %d due to timeout finds step  state %d
Line 938:  uphy_CSearcherController_DoAndReleasePschSignal for uarfcn %d due to timeout finds step  state %d
Line 944: ReleasePschSignal uarfcn=%d signal=%d
Line 944: ReleasePschSignal uarfcn=%d signal=%d
Line 965:  theGroupCellSynchronisers Alloc failed!!
Line 965:  theGroupCellSynchronisers Alloc failed!!
Line 979:  theGroupCellSynchronisers already defined
Line 979:  theGroupCellSynchronisers already defined
Line 1001:  theStoredCellSearchers Alloc failed!!
Line 1001:  theStoredCellSearchers Alloc failed!!
Line 1014:  theStoredCellSearchers already defined
Line 1014:  theStoredCellSearchers already defined
Line 1041:  Invalid umts message
Line 1041:  Invalid umts message
Line 1337:  uphy_CSearcherController_isRfAvailableForUse : searcherController_ptr->rfState: %d
Line 1337:  uphy_CSearcherController_isRfAvailableForUse : searcherController_ptr->rfState: %d
Line 1365:  rfUseReqMsg == NULL pointer
Line 1365:  rfUseReqMsg == NULL pointer
Line 1389:  Cant send PSCH Request
Line 1389:  Cant send PSCH Request
Line 1392:  uphy_CSearcherController_RequestRfStf : sending RF use request. isBlindFreqScan = %d
Line 1392:  uphy_CSearcherController_RequestRfStf : sending RF use request. isBlindFreqScan = %d
Line 1417: token submit when modem off
Line 1417: token submit when modem off
Line 1429:  uphy_CSearcherController_RequestRfUse: Requesting RF Use. isBlindFreqScan = %d
Line 1429:  uphy_CSearcherController_RequestRfUse: Requesting RF Use. isBlindFreqScan = %d
Line 1433:  uphy_CSearcherController_RequestRfUse: Returning as RF is not currently available!!
Line 1433:  uphy_CSearcherController_RequestRfUse: Returning as RF is not currently available!!
Line 1440:  uphy_CSearcherController_RequestRfUse: Returning as RF is already requested and response is pending!!
Line 1440:  uphy_CSearcherController_RequestRfUse: Returning as RF is already requested and response is pending!!
Line 1447:  uphy_CSearcherController_RequestRfUse: Returning as RF use is currently paused: rfReqCnts : %d
Line 1447:  uphy_CSearcherController_RequestRfUse: Returning as RF use is currently paused: rfReqCnts : %d
Line 1452:  uphy_CSearcherController_RequestRfUse: RF is available for use
Line 1452:  uphy_CSearcherController_RequestRfUse: RF is available for use
Line 1455:  uphy_CSearcherController_RequestRfStf: rfReqCnts : %d
Line 1455:  uphy_CSearcherController_RequestRfStf: rfReqCnts : %d
Line 1476:  uphy_CSearcherController_sendRfUsePauseCnf: sending RF Use Pause Cnf
Line 1476:  uphy_CSearcherController_sendRfUsePauseCnf: sending RF Use Pause Cnf
Line 1487:  Failed to send RF pause cnf
Line 1487:  Failed to send RF pause cnf
Line 1517:  uphy_CSearcherController_sendRfUseRel: rfReqCnts : %d
Line 1517:  uphy_CSearcherController_sendRfUseRel: rfReqCnts : %d
Line 1520:  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 1520:  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 1531:  Failed to send RF Rel 
Line 1531:  Failed to send RF Rel 
Line 1578: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1578: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1589: uphy_CSearcherController_process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1589: uphy_CSearcherController_process: msgId=%d, srcPrimaryId=%d, srcSubId=%d, TransactId=%d
Line 1608: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1608: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1620:  MessageId=%d  received in unexpeted state=%d and freed
Line 1620:  MessageId=%d  received in unexpeted state=%d and freed
Line 1640: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1640: MessageId=%d received in state=%d when is not expected this message to be received any more
Line 1656:  MessageId=%d  received in unexpeted state=%d and freed
Line 1656:  MessageId=%d  received in unexpeted state=%d and freed
Line 1686:  Unexpected msgId=%d
Line 1686:  Unexpected msgId=%d
Line 1723:  MessageId=%d  DestComponent=%d not valid
Line 1723:  MessageId=%d  DestComponent=%d not valid
Line 1995:  Searcher Refresh Psch Request received for camping uarfcn 
Line 1995:  Searcher Refresh Psch Request received for camping uarfcn 
Line 2012:  theBlindCellSearcher == NULL
Line 2012:  theBlindCellSearcher == NULL
Line 2019:  Invalid umts message
Line 2019:  Invalid umts message
Line 2029:  EUphySearcherMsgId_RfUseRsp
Line 2029:  EUphySearcherMsgId_RfUseRsp
Line 2038:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d
Line 2038:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d
Line 2046:  uphy_CSearcherController_process: rfReqCnts : %d
Line 2046:  uphy_CSearcherController_process: rfReqCnts : %d
Line 2051:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindFreqScanRequest
Line 2051:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindFreqScanRequest
Line 2061:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindCellSearchRequest
Line 2061:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CBlindCellSearcher_processBlindCellSearchRequest
Line 2076:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CStoredCellSearcher_processStoredCellSearchRequest
Line 2076:  sailor: EUphySearcherMsgId_RfUseRsp:uphy_CStoredCellSearcher_processStoredCellSearchRequest
Line 2108:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 2108:  uphy_CSearcherController_process: Rf rsp received in abnornal rf state: %d Possibly timeout happened
Line 2120:  uphy_CSearcherController_process:Rf Re-request triggered! rfReqRetryCnts: %d
Line 2120:  uphy_CSearcherController_process:Rf Re-request triggered! rfReqRetryCnts: %d
Line 2130: token submit when modem off
Line 2130: token submit when modem off
Line 2163:  uphy_CSearcherController_process:Max Retries Over! rfReqRetryCnts: %d
Line 2163:  uphy_CSearcherController_process:Max Retries Over! rfReqRetryCnts: %d
Line 2166:  uphy_CSearcherController_process: Neg Indication for Blind Cell Searcher
Line 2166:  uphy_CSearcherController_process: Neg Indication for Blind Cell Searcher
Line 2176:  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2176:  uphy_CSearcherController_process: Neg Indication for Stored Cell Searcher %d
Line 2197:  EUphySearcherMsgId_RfUsePauseReq
Line 2197:  EUphySearcherMsgId_RfUsePauseReq
Line 2213: S0  uphy_CSearcherController_sendRfUseRel: sending RF Use Rel
Line 2226: S0  Failed to send RF Rel 
Line 2234:  EUphySearcherMsgId_RfUseResumeReq
Line 2234:  EUphySearcherMsgId_RfUseResumeReq
Line 2238:  rfState is uphy_CSearcherController_rfState_paused
Line 2238:  rfState is uphy_CSearcherController_rfState_paused
Line 2246:  rfState with Searcher is %d
Line 2246:  rfState with Searcher is %d
Line 2261: SrchAbort CnfMsg NULL
Line 2277: SrchAbort send Cnf Msg fail
Line 2292: [DR-DSDS] Srch Ctrl:  DR srch response in wrong state
Line 2292: [DR-DSDS] Srch Ctrl:  DR srch response in wrong state
Line 2305: [DR-DSDS] Srch Ctrl:   DR srch pause in wrong state
Line 2305: [DR-DSDS] Srch Ctrl:   DR srch pause in wrong state
Line 2313:  Unexpected msgId=%d
Line 2313:  Unexpected msgId=%d
Line 2346:  blindCellSearcher == 0
Line 2346:  blindCellSearcher == 0
Line 2372:  Unable to resolve StoredCellSearcherId
Line 2372:  Unable to resolve StoredCellSearcherId
Line 2391: uphy_CSearcherController_notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nStoredCellSearchers=%d
Line 2391: uphy_CSearcherController_notifyStoredCompleted: FREE StoredCellSearcherer[%d] StoredCellSearcherId=%d nStoredCellSearchers=%d
Line 2410:  Already FREED: StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 2410:  Already FREED: StoredCellSearcherer[%d] nStoredCellSearchers=%d
Line 2435:  Unable to resolve groupCellSynchroInstance
Line 2435:  Unable to resolve groupCellSynchroInstance
Line 2446: uphy_CSearcherController_notifyGroupCellSynchroCompleted %d  : FREE GroupCellSynchroniser[%d] GroupCellSynchoniserId=%d nGroupCellSynchronisers=%d
Line 2446: uphy_CSearcherController_notifyGroupCellSynchroCompleted %d  : FREE GroupCellSynchroniser[%d] GroupCellSynchoniserId=%d nGroupCellSynchronisers=%d
Line 2474: Instance created for stackId %d
Line 2474: Instance created for stackId %d
Line 2515:  uphy_CSearcherController_processPauseAllRequest: isOtherStackUsingRFForSignaling: %d
Line 2515:  uphy_CSearcherController_processPauseAllRequest: isOtherStackUsingRFForSignaling: %d
Line 2526: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2526: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 2547: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2547: RfRxUarfcnCmd: cmd is not idle on other stack(cmd_state=%d)
Line 2580:  uphy_CSearcherController_processResumeAllRequest
Line 2580:  uphy_CSearcherController_processResumeAllRequest
Line 2740: uphy_CSearcherController_processSearchAbort: SubId=%d, index = %d, bUmtsReq = %d
Line 2752: uphy_CSearcherController_processSearchAbort: bUmtsReq=%d
Line 2806:  Searcher Refresh Psch Request received for uarfcn %d in state %d
Line 2806:  Searcher Refresh Psch Request received for uarfcn %d in state %d
Line 2822: Unexpected psch State
Line 2822: Unexpected psch State
Line 2856:  nGroupCellSynchronisers (%d) >= maxGroupCellSynchronisers (%d)
Line 2856:  nGroupCellSynchronisers (%d) >= maxGroupCellSynchronisers (%d)
Line 2863:   : processGroupCellSynchroRequest [%d, %d]
Line 2863:   : processGroupCellSynchroRequest [%d, %d]
Line 2868:  numOfCells is out of bound
Line 2868:  numOfCells is out of bound
Line 2888:  Unable to locate free groupCellSynchro pointer when nGroupCellSynchronisers = %d
Line 2888:  Unable to locate free groupCellSynchro pointer when nGroupCellSynchronisers = %d
Line 2907: processGroupCellSynchroRequest [%d %d] numOfCells %d FA%d
Line 2907: processGroupCellSynchroRequest [%d %d] numOfCells %d FA%d
Line 2917: processGroupCellSynchroRequest [%d %d] isTxDivValid=%d txDivStatus=%d
Line 2917: processGroupCellSynchroRequest [%d %d] isTxDivValid=%d txDivStatus=%d
Line 2923:  numOfCells is out of bound
Line 2923:  numOfCells is out of bound
Line 2927: CREATE: groupcellSynchroniserIndex=%d instanceCounter=%d nGroupCellSynchronisers=%d
Line 2927: CREATE: groupcellSynchroniserIndex=%d instanceCounter=%d nGroupCellSynchronisers=%d
Line 2999:  uphy_CSearcherController_processBlindCellSearchRequest: Returning as RF is not currently available!!
Line 2999:  uphy_CSearcherController_processBlindCellSearchRequest: Returning as RF is not currently available!!
Line 3055: uphy_CSearcherController_processBlindFreqScanRequest: Returning as RF is not currently available!!
Line 3055: uphy_CSearcherController_processBlindFreqScanRequest: Returning as RF is not currently available!!
Line 3097:  Stored cell searcher is running. Discard it!!!
Line 3097:  Stored cell searcher is running. Discard it!!!
Line 3113:  msgDeadlineListInfo == NULL pointer
Line 3113:  msgDeadlineListInfo == NULL pointer
Line 3137:  searcherController_ptr->nStoredCellSearchers==searcherController_ptr->maxStoredCellSearchers->increase maxStoredCellSearchers!!
Line 3137:  searcherController_ptr->nStoredCellSearchers==searcherController_ptr->maxStoredCellSearchers->increase maxStoredCellSearchers!!
Line 3157:  Searcher Controller Error: Unable to locate free storedCellSearcher pointer when nStoredCellSearchers = %d
Line 3157:  Searcher Controller Error: Unable to locate free storedCellSearcher pointer when nStoredCellSearchers = %d
Line 3163: nStoredCellSearchers = %d storedCellSearcherCounter=%d
Line 3163: nStoredCellSearchers = %d storedCellSearcherCounter=%d
Line 3166: Gaps is too close. Discard it.
Line 3166: Gaps is too close. Discard it.
Line 3244:  uphy_CSearcherController_processStoredCellSearchRequest: Returning as RF is not currently available!!
Line 3244:  uphy_CSearcherController_processStoredCellSearchRequest: Returning as RF is not currently available!!
Line 3318: :   uphy_CSearcherController_LocateGroupCellSynchroComponent NOT FOUND: destComponent=%d
Line 3318: :   uphy_CSearcherController_LocateGroupCellSynchroComponent NOT FOUND: destComponent=%d
Line 3384:  Trying to checking valid dest component when maxStoredCellSearchers isn't set
Line 3384:  Trying to checking valid dest component when maxStoredCellSearchers isn't set
Line 3397:  Trying to checking valid dest component when maxGroupCellSynchronisers isn't set
Line 3397:  Trying to checking valid dest component when maxGroupCellSynchronisers isn't set
Line 3403:  No destination component found.
Line 3403:  No destination component found.
Line 3481:  UPHY Problem : No Camping Frequency set
Line 3481:  UPHY Problem : No Camping Frequency set
Line 3491:  UPHY rejects stored cell search : Bad Uarfcn %d when in dedicated mode and camped on %d
Line 3491:  UPHY rejects stored cell search : Bad Uarfcn %d when in dedicated mode and camped on %d
Line 3522: Warning: GroupCellSynchro message->payload.primaryScrCode[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3577: Warning: PschReply message->payload.multipathInfo.pathOffset[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3586:  Invalid Psch reply msg
Line 3586:  Invalid Psch reply msg
Line 3593:  Invalid Psch reply msg
Line 3593:  Invalid Psch reply msg
Line 3613: Warning: SschReply message->payload.scrCodeGroup out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3618: Warning: SschReply message->payload.frameOffset out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3638: Warning: GroupCpichScrCodeReply message->payload.primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3659: Warning: CpichRscpReply message->payload.primaryScrCode out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3682: Warning: GroupCpichMultipathReply message->payload.primaryScrCode[i] out of bounds. Value %d, Bounds %d and %d. File ../../../HEDGE/UL1/UL1C/RRM/Searcher/Code/Src/uphy_CSearcherController.c Line %d
Line 3766:  Unexpected Requestor
Line 3766:  Unexpected Requestor
Line 3853:  Failed to send releaseAllCnf
Line 3853:  Failed to send releaseAllCnf
Line 3984: [DR-DSDS] Srch Ctrl: SearcherReqMsg == NULL pointer
Line 3984: [DR-DSDS] Srch Ctrl: SearcherReqMsg == NULL pointer
Line 3989: [DR-DSDS] Srch Ctrl: srch request for meas type %d
Line 3989: [DR-DSDS] Srch Ctrl: srch request for meas type %d
Line 4008: [DR-DSDS] Srch Ctrl: Searcher is already in use, so use directly
Line 4008: [DR-DSDS] Srch Ctrl: Searcher is already in use, so use directly
Line 4013: [DR-DSDS] Srch Ctrl: Searcher is in requested state
Line 4013: [DR-DSDS] Srch Ctrl: Searcher is in requested state
Line 4038: [DR-DSDS] Srch Ctrl:  Failed to send searcher Request from searcher controller
Line 4038: [DR-DSDS] Srch Ctrl:  Failed to send searcher Request from searcher controller
Line 4051: [DR-DSDS] Srch Ctrl: SearcherRelMsg == NULL pointer
Line 4051: [DR-DSDS] Srch Ctrl: SearcherRelMsg == NULL pointer
Line 4056: [DR-DSDS] Srch Ctrl: Searcher state not in Use, so no need to send release
Line 4056: [DR-DSDS] Srch Ctrl: Searcher state not in Use, so no need to send release
Line 4060: [DR-DSDS] Srch Ctrl: Sending  Searcher Use Rel to DR mngr Interface
Line 4060: [DR-DSDS] Srch Ctrl: Sending  Searcher Use Rel to DR mngr Interface
Line 4074: [DR-DSDS] Srch Ctrl: Failed to send searcher  Request
Line 4074: [DR-DSDS] Srch Ctrl: Failed to send searcher  Request
Line 4086: [DR-DSDS] Srch Ctrl: Searcher rsp received in abnornal searcher state: %d
Line 4086: [DR-DSDS] Srch Ctrl: Searcher rsp received in abnornal searcher state: %d
Line 4100: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Grant
Line 4100: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Grant
Line 4116: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Reject
Line 4116: [DR-DSDS] Srch Ctrl: Searcher controller Searcher Reject
Line 4132: [DR-DSDS] Srch Ctrl:  uphy_CSearcherController_SearcherResponse: Neg Indication for Stored Cell Searcher %d
Line 4132: [DR-DSDS] Srch Ctrl:  uphy_CSearcherController_SearcherResponse: Neg Indication for Stored Cell Searcher %d
Line 4151: [DR-DSDS] Srch Ctrl: There are no messages to be processed 
Line 4151: [DR-DSDS] Srch Ctrl: There are no messages to be processed 
Line 4157: [DR-DSDS] Srch Ctrl: Unexpected DR mngr response
Line 4157: [DR-DSDS] Srch Ctrl: Unexpected DR mngr response
Line 4170: [DR-DSDS] Srch Ctrl: Searcher Pause 
Line 4170: [DR-DSDS] Srch Ctrl: Searcher Pause 
Line 4224: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4224: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage:msgDeadlineListInfo == NULL pointer
Line 4250: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4250: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 4289: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Number of Queued Msgs:  %d
Line 4289: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_processQueuedMessage: Number of Queued Msgs:  %d
Line 4317: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 4317: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 4345: [DR-DSDS] Srch Ctrl:  No of elements in queue: %d 
Line 4345: [DR-DSDS] Srch Ctrl:  No of elements in queue: %d 
Line 4358: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_isSearcherInUse: searcher is currently in use or requested state
Line 4358: [DR-DSDS] Srch Ctrl: uphy_CSearcherController_isSearcherInUse: searcher is currently in use or requested state
