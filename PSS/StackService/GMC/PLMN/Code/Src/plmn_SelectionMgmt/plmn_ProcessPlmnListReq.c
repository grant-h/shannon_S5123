Line 208:    %s  :: CSG_LIST_REQ 
Line 227:    %s  :: PLMN_LIST_REQ 
Line 447:    plmn_UpdateAvailablePlmnListUpdateMethodForTriggeringPlmnListReq with %s(%d) and RrPlmnListRsp = 0x%x 
Line 478:    plmn_UpdateAvailablePlmnListUpdateMethodForHPPlmnSearch with plmn_HPPlmnSearchMethod = %d 
Line 533: [W]TRAP ! INVALID RAT = %d 
Line 539:    AvPlmnListUpdateMethod = %d 
Line 629: [W]TRAP ! INVALID plmn_CompiledSelectedRatMode = %d 
Line 635:    Update Plmn_AvailablePlmnListUpdateMethod with CompilerRat %s : %s(%d)
Line 714:    %s : Cause :%s (%d), Plmn_AvailablePlmnListUpdateMethod : %s (%d) 
Line 1209: %s:: Entry 
Line 1210:    %s : %s(%d)
Line 1211:    ListReqFromNsFlag = %d, ForcedListReqFromNsFlag = %d 
Line 1222:    Sending the Plmns Found by (U)RRC to GAPI (%d)
Line 1244:    Invalid Plmn Action After Plmn Search, User never asked for the list
Line 1252:    Searching for Candidate PLMN: 0x%06x
Line 1262:    RPlmn valid. Search for RPLMN
Line 1267:    RPlmn is invalid. Search for HPLMN
Line 1314:    HPLMN Search on All RAT's ended; MMC_HANDOFF_CAUSE_HPLMN_SEARCH_ENDED
Line 1326:    Higher Priority Plmn Found, Start HPlmn Search Procedure
Line 1335:    No Higher Priority Plmn Found, Abort HPlmn Search Procedure
Line 1349:    We done Search In Back Gnd, So dont Return Again on Saved PLMN
Line 1366:    Restore Saved PLMN and start PLMN search on saved PLMN
Line 1371:    No Saved PLMN, arrange to start ANY PLMN search
Line 1386:    BPLMN & Bckgrnd flag enabled. Reset timer, backGndflag & BackGndListReqCause
Line 1409:    PLMN_NO_RPLMN_MANUAL_MODE Check for power up and manual mode 
Line 1415:    PLMN_NO_RPLMN_MANUAL_MODE Start PlmnRecoveryTimerActions
Line 1468:    No Jobs to be Run
Line 1502: %s:: Exit 
Line 1541:    %s : nextRatMode(%s) 
Line 1545: [!]It Should Not come here, some mismatch might happened so error recovery 
Line 1559:    RPlmn Deleted or in Forbidden List -> Skip Trying RPlmn on Other RAT
Line 1567:    Changing RAT to Request Search for HPlmn
Line 1605:    Changing RAT to Request the Plmn List
Line 1649:    PLMN found in TEMP block list, List request need to be triggered
Line 1665:    Changing RAT to Request Search for HPLMN/RPLMN
Line 1684:     Requesting Plmn List from %s RAT
Line 1690:    BPLMN is not enabled, soChanging RAT to Request Plmn List
Line 1707:    BPLMN Enabled to Sent List Req to Non_Active RAT without suspending Active RAT 
Line 1760:    Start Search. plmn_PlmnListReqCause: %d
Line 1870:    %s plmnListSent(%d)
Line 1933:    %s, PlmnSelectionCause = %d
Line 1981: %s:: Entry 
Line 1982:    %s : ListReqCause(%d), userReselectionFlag(%d) 
Line 2081: %s:: Exit 
Line 2111:    %s : %s
Line 2134: [I]RatMode -> %s
Line 2154:    Found Complete List
Line 2163:    HPlmn Exists in List Given By RR
Line 2179:    Complete List not Found so Send List Req for Next Rat 
Line 2196:    Plmn Rejected, Requesting List From Current RAT, Trying HPlmn on Other RAT
Line 2233:    %s :
Line 2291:    %s :  
Line 2314:    selected -> %s(%d), ListReqCause = %d
Line 2353: %s:: Entry 
Line 2354:    %s : RatMode(%s) 
Line 2455:    HPlmn Exists in List Given By RR
Line 2468: %s:: Exit 
