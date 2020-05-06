Line 258:   multiPathDatabaseUpdatingUtility_ptr->updatingToken = NULL
Line 258:   multiPathDatabaseUpdatingUtility_ptr->updatingToken = NULL
Line 421: uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 421: uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: Free GroupCellSynchroniser[%d] %d groupCellSynchroniserId=%d nGroupCellSynchronisers[0]=%d
Line 429:   uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 429:   uphy_CMultiPathDatabaseUpdatingUtility_GroupCellSynchroniserFree: theGroupCellSynchronisers[%d]->requestMsg = NULL
Line 532:   MPDB UpdateDatabase commencing new refresh cycle with %d outstanding requests
Line 532:   MPDB UpdateDatabase commencing new refresh cycle with %d outstanding requests
Line 584:   MPDB UpdateDatabase finds NULL cellData
Line 584:   MPDB UpdateDatabase finds NULL cellData
Line 589: MPDB UpdateDatabase has NO Active Cells
Line 589: MPDB UpdateDatabase has NO Active Cells
Line 607: MPDB UpdateDatabase has NO Identified Active Cells
Line 607: MPDB UpdateDatabase has NO Identified Active Cells
Line 633: MPDB UpdateDatabase not enabled
Line 633: MPDB UpdateDatabase not enabled
Line 649: MPDB UpdateDatabase single shot token complete
Line 649: MPDB UpdateDatabase single shot token complete
Line 657: MPDB UpdateDatabase CFN %d is compressed. Token will be submitted in the next frame
Line 657: MPDB UpdateDatabase CFN %d is compressed. Token will be submitted in the next frame
Line 662: MPDB UpdateDatabase CFN %d is in FMO. Token will be submitted in the next frame
Line 662: MPDB UpdateDatabase CFN %d is in FMO. Token will be submitted in the next frame
Line 673: MPDB UpdateDatabase single shot token complete
Line 673: MPDB UpdateDatabase single shot token complete
Line 720: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 720: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 750:   *******Clear BackUpFingers
Line 750:   *******Clear BackUpFingers
Line 768:   EUphyMultipathMgmtMsgId_StartAgingAndUpdating requested with active token.
Line 768:   EUphyMultipathMgmtMsgId_StartAgingAndUpdating requested with active token.
Line 769:   Are we waking up from snoozing?.
Line 769:   Are we waking up from snoozing?.
Line 781:  EUphyMultipathMgmtMsgId_StopUpdatingAndContinueAging
Line 781:  EUphyMultipathMgmtMsgId_StopUpdatingAndContinueAging
Line 794: uphy_CMultiPathDatabaseUpdatingUtility_process StopUpdating
Line 794: uphy_CMultiPathDatabaseUpdatingUtility_process StopUpdating
Line 817: [E-DRX Measurement] do not  set OutstandingCpichMultipathRequests 0 during Resync procedure
Line 817: [E-DRX Measurement] do not  set OutstandingCpichMultipathRequests 0 during Resync procedure
Line 824: [E-DRX Measurement] isHsDschDrxInCellFach=%d needResync=%d
Line 824: [E-DRX Measurement] isHsDschDrxInCellFach=%d needResync=%d
Line 829:  hsdschResourcesController is NULL
Line 829:  hsdschResourcesController is NULL
Line 839:   *******Clear BackUpFingers
Line 839:   *******Clear BackUpFingers
Line 845: uphy_CMultiPathDatabaseUpdatingUtility_process StartUpdating
Line 845: uphy_CMultiPathDatabaseUpdatingUtility_process StartUpdating
Line 865:   EUphyMultipathMgmtMsgId_StartUpdating requested with active token.
Line 865:   EUphyMultipathMgmtMsgId_StartUpdating requested with active token.
Line 890: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate for BPLMN CResourcesConfigurationController 0x%x
Line 890: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate for BPLMN CResourcesConfigurationController 0x%x
Line 903: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate
Line 903: uphy_CMultiPathDatabaseUpdatingUtility_process StartSingleUpdate
Line 949:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 949:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 954:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 954:  MPDB EUphyMultipathMgmtMsgId_GroupCpichMultipathCompleted; currently %d outstanding requests.
Line 1002: MPDB: Channel configuration is on going at CFN %d, so postpone finger assignment one frame later
Line 1002: MPDB: Channel configuration is on going at CFN %d, so postpone finger assignment one frame later
Line 1055: MPDB singleUpdate [%d]
Line 1055: MPDB singleUpdate [%d]
Line 1072:   MPDB process: no physical channel assigned
Line 1072:   MPDB process: no physical channel assigned
Line 1078:  MPDB Serious Problem : Cant locate cell info for PScrCode %d Uarfcn %d
Line 1078:  MPDB Serious Problem : Cant locate cell info for PScrCode %d Uarfcn %d
Line 1108:  MultipathUpdating received unknown msgid %d
Line 1108:  MultipathUpdating received unknown msgid %d
Line 1121: MPDB SearcherController returns Group Search Failure: %d outstanding requests
Line 1121: MPDB SearcherController returns Group Search Failure: %d outstanding requests
Line 1137:  Cfn %d Sfn %d: MultipathUpdating received failed response msg id %d
Line 1137:  Cfn %d Sfn %d: MultipathUpdating received failed response msg id %d
Line 1144: MultipathUpdating received failed; currently %d outstanding requests.
Line 1144: MultipathUpdating received failed; currently %d outstanding requests.
Line 1207:   cpichMultiPathReqMessage == NULL pointer
Line 1207:   cpichMultiPathReqMessage == NULL pointer
Line 1272: MPDB SubmitCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1272: MPDB SubmitCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1283:   unable to send Cpich MultiPath Req Message
Line 1283:   unable to send Cpich MultiPath Req Message
Line 1290: MPDB multi-path request for [%d, %d]; currently %d outstanding requests.
Line 1290: MPDB multi-path request for [%d, %d]; currently %d outstanding requests.
Line 1328:  MPDB Cfn %d Sfn %d: Timeout on uarfcn %d primary scr code %d; %d outstanding requests
Line 1328:  MPDB Cfn %d Sfn %d: Timeout on uarfcn %d primary scr code %d; %d outstanding requests
Line 1335: S0 MPDB timeOutCnt=%d 
Line 1339: S0 MPDB Clear OutstandingReq  timeOutCnt=%d
Line 1402: There are no cells in the active list after [%d, %d]
Line 1402: There are no cells in the active list after [%d, %d]
Line 1406: The cell [%d, %d] should not returned; if returned- it will add group cell search.(nonIdentified cell).
Line 1406: The cell [%d, %d] should not returned; if returned- it will add group cell search.(nonIdentified cell).
Line 1441:  Database Updating Utility: Inconsistency in NActiveCells as no first cell
Line 1441:  Database Updating Utility: Inconsistency in NActiveCells as no first cell
Line 1451:  The first active cell [%d, %d] is in the process of being updated
Line 1451:  The first active cell [%d, %d] is in the process of being updated
Line 1460:  The first active cell [%d, %d] is in the process of being updated
Line 1460:  The first active cell [%d, %d] is in the process of being updated
Line 1492:   stoppedMsg == NULL pointer
Line 1492:   stoppedMsg == NULL pointer
Line 1506:   startedMsg == NULL pointer
Line 1506:   startedMsg == NULL pointer
Line 1515: uphy_CMultiPathDatabaseUpdatingUtility_SendConfirmationMsg with unrecongniosed MsgId to confirm
Line 1515: uphy_CMultiPathDatabaseUpdatingUtility_SendConfirmationMsg with unrecongniosed MsgId to confirm
Line 1537:   Cant send Cnf
Line 1537:   Cant send Cnf
Line 1579:   uhal command exec failed
Line 1579:   uhal command exec failed
Line 1590: Finger %d(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1590: Finger %d(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1597: No finger(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1597: No finger(fingersStr 0x%x) is locked for uarfcn=%d, primaryScrCode=%d
Line 1603: uphy_CMultiPathDatabaseUpdatingUtility_isLockedFinger cannot locate pScrCode %d in mapping table
Line 1603: uphy_CMultiPathDatabaseUpdatingUtility_isLockedFinger cannot locate pScrCode %d in mapping table
Line 1689:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1689:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1741: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1741: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 1750: MPDB SubmitGroupCellSynchroRequestForBPLMNBchCell : isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d
Line 1750: MPDB SubmitGroupCellSynchroRequestForBPLMNBchCell : isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d
Line 1757:   MPDB UpdateDatabase finds NULL cellInformation
Line 1757:   MPDB UpdateDatabase finds NULL cellInformation
Line 1786:   unable to send Group Cpich MultiPath Req Message
Line 1786:   unable to send Group Cpich MultiPath Req Message
Line 1799: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 1799: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 1803:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 1803:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 1844:   GroupCellSynchroReqMsg == NULL pointer
Line 1844:   GroupCellSynchroReqMsg == NULL pointer
Line 1883:   MPDB UpdateDatabase finds NULL cellInformation
Line 1883:   MPDB UpdateDatabase finds NULL cellInformation
Line 1909:   Unable to send GroupCellSynchroReqMsg
Line 1909:   Unable to send GroupCellSynchroReqMsg
Line 1919: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 1919: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 1959:   cpichGroupMultiPathReqMessage == NULL pointer
Line 1959:   cpichGroupMultiPathReqMessage == NULL pointer
Line 2008:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: Overriding MP searcher Frame offset(%d) with Finger Table MCD(%d)
Line 2008:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: Overriding MP searcher Frame offset(%d) with Finger Table MCD(%d)
Line 2014: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2014: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2024: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2024: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2034: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2034: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2084: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2084: MPDB SubmitGroupCpichMultipathRequest with Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2094: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2094: MPDB SubmitGroupCpichMultipathRequest without Guide: isDeadline=%d absDeadline=%d: uarfcn %d pScrCode %d frameOffset=%d
Line 2132:   unable to send Group Cpich MultiPath Req Message
Line 2132:   unable to send Group Cpich MultiPath Req Message
Line 2145: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2145: MPDB GroupCpichMultipathRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d, Outstanding requests=%d)
Line 2149:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2149:   uphy_CMultiPathDatabaseUpdatingUtility_SubmitGroupCpichMultipathRequest: cellData=NULL
Line 2160: MPDB - The number of identified group cells is miscalculated
Line 2160: MPDB - The number of identified group cells is miscalculated
Line 2190:   GroupCellSynchroReqMsg == NULL pointer
Line 2190:   GroupCellSynchroReqMsg == NULL pointer
Line 2242: MPDB no multiPathInfo and locked finger found for uarfcn=%d, primaryScrCode=%d
Line 2242: MPDB no multiPathInfo and locked finger found for uarfcn=%d, primaryScrCode=%d
Line 2249:   MPDB UpdateDatabase finds NULL cellData
Line 2249:   MPDB UpdateDatabase finds NULL cellData
Line 2275:   Unable to send GroupCellSynchroReqMsg
Line 2275:   Unable to send GroupCellSynchroReqMsg
Line 2285: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2285: MPDB SubmitGroupCellSynchroRequest was sent with %d cells(UARFCN =%d, msgId=%d, TransactId=%d)
Line 2291:  The number of nonidentified group cells is miscalculated (Past=%d, Now=%d)
Line 2291:  The number of nonidentified group cells is miscalculated (Past=%d, Now=%d)
Line 2335: uphy_CMultiPathDatabaseUpdatingUtility_CancelTimeoutToken(UARFCN =%d, primaryScrCode=%d)
Line 2335: uphy_CMultiPathDatabaseUpdatingUtility_CancelTimeoutToken(UARFCN =%d, primaryScrCode=%d)
Line 2370: [DR-DSDS] MPDB: MpdbSearcherReqMsg == NULL pointer
Line 2370: [DR-DSDS] MPDB: MpdbSearcherReqMsg == NULL pointer
Line 2375: [DR-DSDS] MPDB: srch req meas type %d
Line 2375: [DR-DSDS] MPDB: srch req meas type %d
Line 2395: [DR-DSDS] MPDB: Searcher is already in use, so use directly
Line 2395: [DR-DSDS] MPDB: Searcher is already in use, so use directly
Line 2400: [DR-DSDS] MPDB: Searcher is in requested state
Line 2400: [DR-DSDS] MPDB: Searcher is in requested state
Line 2424: [DR-DSDS] MPDB: Failed to send RF Request from MPDB
Line 2424: [DR-DSDS] MPDB: Failed to send RF Request from MPDB
Line 2436: [DR-DSDS] MPDB: SearcherRelMsg == NULL pointer
Line 2436: [DR-DSDS] MPDB: SearcherRelMsg == NULL pointer
Line 2441: [DR-DSDS] MPDB:  Searcher state not in Use, so no need to send release 
Line 2441: [DR-DSDS] MPDB:  Searcher state not in Use, so no need to send release 
Line 2445: [DR-DSDS] MPDB:  Sending  Searcher Use Rel to DR mngr Interface from MPDB
Line 2445: [DR-DSDS] MPDB:  Sending  Searcher Use Rel to DR mngr Interface from MPDB
Line 2459: [DR-DSDS] MPDB:  Failed to send Searcher Request from MPDB
Line 2459: [DR-DSDS] MPDB:  Failed to send Searcher Request from MPDB
Line 2471: [DR-DSDS] MPDB: Searcher rsp received in abnornal searcher state: %d
Line 2471: [DR-DSDS] MPDB: Searcher rsp received in abnornal searcher state: %d
Line 2486: [DR-DSDS] MPDB:  MPDB Searcher Grant
Line 2486: [DR-DSDS] MPDB:  MPDB Searcher Grant
Line 2503: [DR-DSDS] MPDB: MPDB Searcher Reject
Line 2503: [DR-DSDS] MPDB: MPDB Searcher Reject
Line 2516: [DR-DSDS] MPDB: There are no messages to be processed 
Line 2516: [DR-DSDS] MPDB: There are no messages to be processed 
Line 2522: [DR-DSDS] MPDB: Unexpected DR mngr response
Line 2522: [DR-DSDS] MPDB: Unexpected DR mngr response
Line 2531: [DR-DSDS] MPDB: MPDB Searcher Pause 
Line 2531: [DR-DSDS] MPDB: MPDB Searcher Pause 
Line 2567: [DR-DSDS] MPDB: MPDB Handle Measurements, meastype %d 
Line 2567: [DR-DSDS] MPDB: MPDB Handle Measurements, meastype %d 
Line 2617:  [DR-DSDS] MPDB:  MPDB UpdateDatabase finds NULL cellData
Line 2617:  [DR-DSDS] MPDB:  MPDB UpdateDatabase finds NULL cellData
Line 2622: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Active Cells
Line 2622: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Active Cells
Line 2635: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Identified Active Cells
Line 2635: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO Identified Active Cells
Line 2649: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO NonIdentified Active Cells
Line 2649: [DR-DSDS] MPDB: MPDB UpdateDatabase has NO NonIdentified Active Cells
Line 2662: [DR-DSDS] MPDB: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 2662: [DR-DSDS] MPDB: uphy_CMeasurementResources_queueMessage:msgDeadlineListInfo == NULL pointer
Line 2688: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 2688: [DR-DSDS] MPDB: uphy_CMultiPathDB_queueMessage: Number of Queued Msgs:  %d meastype %d
Line 2730: [DR-DSDS] MPDB: CMultiPathDB: Number of Queued Msgs:  %d
Line 2730: [DR-DSDS] MPDB: CMultiPathDB: Number of Queued Msgs:  %d
Line 2758: [DR-DSDS] MPDB: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 2758: [DR-DSDS] MPDB: uphy_CMeasurementResources_resetMessageQueue: Flushes queue msg ScrId: %d MsgId: %d
Line 2787: [DR-DSDS] MPDB:  No of elements in queue: %d, unqueue for meas type %d
Line 2787: [DR-DSDS] MPDB:  No of elements in queue: %d, unqueue for meas type %d
