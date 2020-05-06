Line 167:    plmn_EmcCallStatusData[gStackId].EmcCallInNoSimFlag : %d -> %d 
Line 185:    plmn_EmcCallStatusData[gStackId].EmcCallRcvdBeforeMmInitCnfFlag : %d -> %d 
Line 207:    %s : 
Line 217: [W]Cant accept CM Request During a RAT CHANGE
Line 244: [W]RR init Req has been sent, NOT received Confirmation yet
Line 252:    RR init Req has been sent. 
Line 253:    Selecting Any Plmn For Emergency Use Only : EmcCallNoSimPlmnAction flag = %d 
Line 297:    HPPLMN search in progress -> return to saved PLMN or Try Any PLMN 
Line 346:    No HPPLMN search in progress -> normal PLMN selection 
Line 353:    Aborting PLMN_LIST_REQ (or Abandoning Waiting for User), and selecting any Plmn 
Line 371: Emergency Plmn Available -> %s
Line 392:    Any PLMN search is already in progress !
Line 395:    PLMN_GET_PLMN_TRY_ANYPLMN_CAUSE = %d
Line 401:    Cell Does Not Support CS calls or Emergency Calls, Trying ANY PLMN
Line 405:    Plmn Search Req Already In Progress, Send Another Plmn Search Req to override last one, Trying ANY PLMN
Line 416:    tryAnyPlmnCause = %d, Result = %d 
Line 560:    Start AnyPlmn Selection for Emergency Call 
Line 565:    Saved RPLMN before triggering AnyPlmn Selection
Line 619:    Call fail received... Already next plmn search ongoing
Line 624:    Call fail received... start next plmn search
Line 639:    NTT device, Update RAT tried with 3G !
Line 647:    NTT device, Do not disturb ongoing PLMN search !
Line 654: Trigger search for next RAT for TMO
Line 659: Any Plmn Search is already going on, wait for result to take further action
Line 672: LastEmcRat (%d) is different from the current RAT(%d), use current RAT for EMC 
Line 694:    NTT device, skip EMC scan !
Line 732: Start deepSleep timer to suspend the current RAT and start search on same rat
Line 784:    Recovery to be started through deepsleep timer as its running/start/expiry in progress
Line 795:    Emergency Call END, resetting plmn selection state
Line 801:    No Action needed as PLMN state is %s !
Line 819:    Emergency Call END, resetting plmn selection state
Line 833:    OOS Recovery timer is running, and MM Non-Idle State, perform actions after IDLE and TIMER expiry
Line 848:    Emergency Call END, starting DeepSleep timer
Line 855:    Emergency Call END during any plmn search
Line 863: [W]InValid SIM / Search is already going on so no need to try for Normal service
Line 864: [I]Plmn State : %s (%s)
Line 865: plmn_PlmnSelectionStarted -> %s
Line 875: [W]Registration is already going on so no need to try for Normal service
Line 902:    EMC Call ended and MCC procedure is Incomplete. Start MCC procedure 
Line 941:    EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
Line 978: Start anyPlmn search
Line 1015: RPLMN is present in tempBlockedList. Try normal service on 3G/ 2G
Line 1045: Start deepSleep timer to suspend the current search and start search on same rat
Line 1075: Stored scan on going, continue the search
Line 1104:    Is Unregistered SIM card ? : %s , isUeInSK :%s
Line 1140:    AP Already has EMC_RAT_INFO %X !Not Performing any actions.
Line 1155:    Stack initialisation ongoing!
Line 1161:    BPLMNEnabled = TRUE && BPLMN search == TRUE , Postponing EMC Call handling
Line 1164: EMC Call deferred -> after BPLMN Abort 
Line 1169:    Wait for MCC procedure to complete
Line 1180:    AP requested mmcActPrefRat : %s
Line 1202:    powerOn lte search ongoing, Wait for Response
Line 1209:    CpowerOn lte attach ongoing, Wait for attach Response
Line 1243:    Emergency Call notification received immediately after powerOn initialization... Start RPLMN search after init is complete
Line 1255:    setting LTE as prefRat for ATT for airplane mode on EMC call case
Line 1274:    EMC Call skip -> PLMN Selection already going on, Wait for Response from the corresponding RAT
Line 1280:    PLMN Search on LTE ongoing, suspend LTE and try on UMTS
Line 1286:    Foreground LIST procedure is going on, ABORT and process EMC call
Line 1297: EMC Call deferred -> after NEW_RAT_INITIAL_PLMN_ACTION
Line 1304:    BPLMNEnabled = TRUE && BPLMN search == TRUE , Postponing EMC Call handling
Line 1307: EMC Call deferred -> after BPLMN Abort 
Line 1317:    Abort ongoing MCC scan and take EMC actions
Line 1323:    Wait for MCC procedure to complete
Line 1389:    %s : EmcRat = %s, ActiveRat = %s, %s
Line 1407:    Emergency Call start (not during power on cases)
Line 1435:    VoPS is not supported. Prioritze CS call
Line 1446:    DT Requirement: Do not try EMC calls on Roaming network
Line 1458:    In UK give preference to PS domain for EMC call
Line 1469:    Enable EUTRA (and perform LTE search)
Line 1480:    Sending EMC RAT Info
Line 1484: [W]EmcRat == MMC_NONE_MODE !
Line 1499:    NTT device, Set RAT tried with LTE !
Line 1556:    %s : EMC Call Status = %d, AttemptedRatType: %s, mmcActPrefRat: %s
Line 1568:    Single Mode operation and MMC_EMERGENCY_CALL_FAIL in current RAT, Treat as Call END 
Line 1569:    EMC Call Status %d -> %d
Line 1605: [!]Cause not handled in %s 
