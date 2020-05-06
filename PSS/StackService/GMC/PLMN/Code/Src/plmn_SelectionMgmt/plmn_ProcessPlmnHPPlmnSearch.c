Line 192:    plmn_HPPlmnSearchData[gStackId].HPPlmnTimerActionPendingFlag : %d -> %d 
Line 212:    plmn_HPPlmnSearchData[gStackId].HPPlmnSearchFlag : %d -> %d 
Line 232:    plmn_HPPlmnSearchData[gStackId].UseFastHPlmnSearch : %d -> %d 
Line 240: [I]----------------------- Displaying HPPLMN Search -------------------------------------------
Line 242: [I]HPPlmnSearchFlag : %d, UseFastHPlmnSearch : %d, Pending : %d  
Line 243: [I]----------------------------------------------------------------------------------------
Line 286:    HPlmn Search In Progress
Line 299:    plmn_HPPlmnSearch=TRUE in MANUAL PLMN SELECTION MODE
Line 331:    Received HPPLMN Search STOP Req After PLMN_SEARCH_REQ, Must wait for Cell-Ind and then ReturnToSavedPlmn
Line 385:    %s :
Line 424:    Stopping HPlmn Search : %s(%d) 
Line 467:    Aborting BPLMN completely, Next HPPLMN actions will be taken after HPLMN timer expiry !
Line 562: %s:: Entry 
Line 632:    No Higher Priority Plmn Found..Aborting HPlmn Search Procedure
Line 648:    Initiating Periodic Higher Priority PLMN Search
Line 670: [I]Plmn State : %s (%s)
Line 723: %s:: Exit (%d)
Line 745:    Checking HPlmn Search Conditions
Line 777:    #1 Emergency PDN is connected
Line 784:    #2 Search Delay After Power Up not Elapsed Yet
Line 791:    #3 Can only be done in PLMN_AUTO_PLMN_SEL_MODE !!
Line 798:    #4 BPLMN due to G2L Resel Ongoing, Restart HPLMN Timer for short duration until abort current procedure
Line 818:    #5 Special case, Restart HPLMN Timer for short duration
Line 827:    #6 H3G HPLMN Timer expired when Action is already ongoing
Line 839: [W]$7 Incorrect PlmnState/Loss of Cov: plmn_PlmnCoverageLost = %s
Line 840: [I]Plmn State : %s (%s)
Line 841: [I]RatModeChangeState -> %s
Line 865:    #8 Camped on HPLMN but not yet registered.
Line 873:    #9 Already High Priority Plmn(Home/Equivalent/Pref/OPref PLMN !!
Line 882:    #10 Refresh_RatMode change pending, Start HPLMN Short Timer
Line 889:    #11 RR Release action is already set to PLMN_SEND_HPLMN_LIST_REQ_RR_REL.
Line 895:    #12 Can only be done in PLMN_IDLE
Line 896: [I]RatModeChangeState -> %s
Line 911:    #13 ATT Manual CSG Search in progress!
Line 918:    #14 CSG Mode is CSG Manual !
Line 928:    #15 BPLMN Procedure for CSG is on -going, abort and process HPLMN actions 
Line 940:    Periodic HP-PLMN search Not Initiated.
Line 961:    %s: HPPlmnSearchConditions -> %d
Line 1030: [W]PDP context is activated.
Line 1043:    HPLMN_SEARCH_START_MM_STATE_NOT_OK - Restart for short duration
Line 1059:    Special case, Restart for short duration
Line 1173: [W]WARNING !!Check states at this point !! HighPrioPlmnFromSimRatMode(%d) RrPlmnListRsp (%d), Sending LIST REQ to active RAT (%d) 
Line 1180:     BplmnSearchRat -> %s, ( HighPrioPlmnFromSimRatMode(%s) RrPlmnListRsp (%d), ActiveRat (%s) ) 
Line 1230:    List Update method is Current RAT or High Priority RAT not present in SIM
Line 1303:    High Priority RAT is LTE 
Line 1330:    High Priority RAT is NR 
Line 1357:    AvailablePlmnListUpdateMethod : %s 
Line 1358:    BplmnSearchRat -> %s, uCase=%d 
Line 1381: %s:: Entry 
Line 1382: %s : BPLMN %s 
Line 1395:    HPPlmnSearchConditions %s -> %d
Line 1418: H3G Hack, do not send HO end notification
Line 1434:    Abort Higher Priority PLMN search 
Line 1528:    Defer HPLMN list req action after RR connection release
Line 1578: [I]Plmn State : %s (%s)
Line 1579:    bplmn enabled = %d, ENS enabled = %d
Line 1580:    Starting BPLMN Search on RAT: %s 
Line 1601:    Pref RAT != Current RAT; Send StartDrxInfoShareInd
Line 1608:    Special HPLMN search to be done in UMTS RAT mode; Send StartDrxInfoShareInd
Line 1619: %s:: Exit (%d)
