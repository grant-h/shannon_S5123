Line 176: [I]ResumeBplmnList (N-L-U-G): %d - %d - %d - %d
Line 181: [I]ResumeBplmnList (L-U-G): %d - %d - %d
Line 222: [I]Bplmn State: %s, Procedure: %s 
Line 284:    pPlmn_BplmnDb->IsEnabled : %d -> %d 
Line 376:    pPlmn_BplmnDb->BplmnState : %d -> %d 
Line 399:    pPlmn_BplmnDb->BplmnProc : %d -> %d 
Line 422:    pPlmn_BplmnDb->AbortCause : %d -> %d 
Line 470:    BCKGND List Abort Cause : 0x%x, 0x%x -> 0x%x (%s) 
Line 531:    BCKGND Resume Rat Info : Flag, 0x%x -> 0x%x 
Line 572:    %s : unexpected req value : %d
Line 582:    pPlmn_BplmnDb->CandidatePlmn : %06x -> %06x 
Line 609:    pPlmn_BplmnDb->SearchingRat : %d -> %d 
Line 632:    plmn_PlmnRecovTimExpActionFlag[gStackId] : %d -> %d 
Line 658:    Bplmn procedure is going on !
Line 682:    %s : EMM State: %d , SRTimerType:%d
Line 707:    MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
Line 736:    No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from L-RRC
Line 742:    TAU or RA proc in progress; Start Recovery timer
Line 750:    Already BPLMN recovery timer running or abort initiated
Line 758:    No Action taken in EMM/MM State: %s
Line 763:    %s : BPlmnState = 0x%x 
Line 785:    %s : NRMM State: %d , SRTimerType:%d
Line 811:    MO/MT call/Service Request/Detach triggered; abort BPLMN if running on other RATs
Line 830:    No BPLMN Action Taken. Wait for BPLMN_FAIL_IND from NR RRC
Line 836:    TAU or RA proc in progress; Start Recovery timer
Line 844:    Already BPLMN recovery timer running or abort initiated
Line 852:    No Action taken in NRMM State: %s
Line 857:    %s : BPlmnState = 0x%x 
Line 887:    LIST REQ aborted/to be aborted if collision case.
Line 917:    ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
Line 937:    BPLMN already aborted. BPLMN Timer running /BPLMN operations set for actions after release
Line 947:    CELL LOST & BPLMN_RECOVERY_TMR not running, Send Abort
Line 957:    BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Line 966:    ABORT_REQ sent, Wait for ABORT_CNF to perform Recovery Actions
Line 975:    ABORT not sent, perform Recovery Actions immediately
Line 983:    %s : %s (%d)
Line 1018:    BPLMN state(%d) is NOT Active or candidate PLMN for BPLMN is Empty (%06x) 
Line 1037:    Found candidate PLMN (%06x) in RR List -> Stop BPLMN AvailStatus : %d
Line 1078:    Found equivalent PLMN in RR List, -> Stop BPLMN
Line 1090:    %s : %s (%d)
Line 1164:    BPLMN RAT for norrmal service : %s 
Line 1181:    %s: 
Line 1253:    %s :
Line 1342:    Select BPLMN List Search RAT : %s
Line 1361:    Select BPLMN List Search RAT for 2G/3G : current RAT - %s 
Line 1457:    BPLMN Not enabled or No Background search in progress
Line 1507: [!]BPLMN scan triggered for recovery in Manual / Manual Background when RPLMN is Empty. Setting candidate PLMN to HPLMN to Avoid Stuck
Line 1514: [I]Registered Plmn  : %06x (%s)
Line 1519: [!]Invalid Selection mode
Line 1557:    %s - Candidate Plmn %06x, Rat %s
Line 1677:    %s, %s, %s
Line 1684:    Found Complete List for %s
Line 1728:    Search must be in foreground ( BPLMN Enabled : %s, Bplmn Searching: %s ) 
Line 1738:    Complete List not Found so Send List Req for Next Rat 
Line 1753:    Do not send DrxInfo IND to RRC since this is Internal Loopback optimization, so dummy list_ind will be sent to GMC internally 
Line 1757:    Sending IND to RRC:Start DrxInfo Ind
Line 1767:    Do not send BplmnSrchStopInd to GRR since this is Internal Loopback optimization
Line 1778:    List Req is sent on Act Rat; Send Stop if already sent StartDrxInd 
Line 1797:    HPlmn Exists in List Given By RR
Line 1825:    %s
Line 1927:    %s : AbortCause - %s (0x%x), RatChangeListReqBlock - %d
Line 1934: [W]Should not come here BPLMN search is %s
Line 1982:    Invalid RAT mode: %s, Should not come here!!!!
Line 1995:    Active RAT is %s and BPLMN search ongoing on other RAT (%s);
Line 2002:    BPLMN scan was running on Active RAT, AS will perform internal Abort. Do PLMN abort confirm actions
Line 2048:    Manual List Req pending, giving more priority to Manual PLMN list request
Line 2054:    Eutra Disabled. Perform EUTRA Disable actions
Line 2094:    Manual List Req pending, giving more priority to Manual PLMN list request
Line 2100:    NR Disabled. Perform NR Disable actions
Line 2118:    Abort Cause: %d not handled; Not taking any actions
Line 2160:    BPLMN Flag on registry not set, so not setting Abort flags
Line 2174:    %s : CurrentRat : %s , AbortCause - %s (0x%x)
Line 2332:    PLMN_BACKGND_ABORT_PAGE_IND and SavedOperatingMode != NONE 
Line 2342:    Performing Pending mode change
Line 2366:    Same Mode, Ignore Mode change request
Line 2373:    Stand by indication actions pending. Performing actions
Line 2410:    EMC call pending !
Line 2456:    Periodic HPLMN actions pending !
Line 2576:    After No Cell Ind & abort procedure without FAIL_IND Start PLMN Search
Line 2585:    Save available List Locally 
Line 2605:    Retreive the locally saved available List and update list 
Line 2636:    %s 
Line 2640:    No available LTE PLMN 
Line 2653:    PLMN is present in EHPLMN List and is suitable for PLMN selection 
Line 2671:    Suitable PLMN not found in abort cnf 
Line 2698:    3GPP2 Mode -Abort BPLMN completely
Line 2726:    Invalid cause
Line 2780:    BPLMN recovery failed in BPLMN, Ignore Foreground recovery actions.
Line 2807:    PS disabled during BPLMN procedures
Line 2890:    Wait for PLMN_LIST_REQ from GAPI.
Line 2982:    %s : AbortCause[%s][0x%x]
Line 2983:    ListReqCause[0x%x], CsgListProg[%d]
Line 2988:    Invalid state to handle BplmnAbortCnf ! SEARCH_FLAG(%d) BACKGND_PLMN_LIST_REQ_CAUSE(%d)
Line 3043:    Manual List Req pending, giving more priority to Manual PLMN list request
Line 3216:    PLMN has all the available PLMN info, Reuse the List
Line 3222:    PLMN doesn't have all the available PLMN info, Continue BPLMN LIST !
Line 3259: [I]PlmnListReqCause : %s, CSGListReqCause : %d
Line 3260: [!]!!Invalid ListReqCause. For Recovery send List to user in manual mode
Line 3294:    %s
Line 3309:    ActiveRat -> %s, BplmnListRatMode -> %s
Line 3377:    %s
Line 3530:    LIST REQ in Progress on Other RAT :%s; Send Start to Active RAT:
Line 3536: [W]LIST REQ in Progress on Act RAT %s ; Dont send Start Ind
Line 3629: %s:: Entry 
Line 3699: [W]Reset BPLMN context as we are not registered
Line 3708: [W]Restarting PLMN_BPLMN_RECOVERY_TIMER since MM / PLMN states are not yet suitable
Line 3723:    BPLMN Scan for assisting Resel to LTE; Send StartDrxInfoShareInd
Line 3744: [W]Restarting PLMN_BPLMN_RECOVERY_TIMER since MM / PLMN states are not yet suitable
Line 3755:    ON_ANY_PLMN, CoverageLost = TRUE Need to Perform BPLMN Rec actions
Line 3766: [W]plmn state / BackGndPlmnListReqCause mismatch Reset BPLMN variables
Line 3776: [W]CsgListInProg == TRUE
Line 3804:    BPLMN Scan for assisting Resel to LTE; Send StartDrxInfoShareInd
Line 3848:    %s : Result=%d, uCase=%d 
Line 3849: %s:: Exit 
Line 3896: [W]Warning !! CSG BplmnSearchRat : %s
Line 3933:    %s 
Line 3956:    Special BPLMN Scan for assisting Resel to LTE; Send StartDrxInfoShareInd
Line 3963:    %s Failure ! Result = %d
Line 3986:    %s : Cause[0x%x] 
Line 4008:    PLMN_BCK_GND_LIST_FAIL_SIG_PROC_IN_PROGRESS
Line 4032:    PLMN_BCK_GND_LIST_FAIL_USER_DATA_IN_PROGRESS
Line 4066:    PLMN_BACKGND_ABORT_PAGE_IND
Line 4087:    PLMN_BACKGND_ABORT_DUE_TO_RESEL. RatChangeListReqBlock: %d 
Line 4093:    PLMN_BACKGND_ABORT_CELL_CHANGE
Line 4104:    PLMN_BACKGND_ABORT_LIST_NOCELL_IND
Line 4130:    PLMN_BACKGND_ABORT_RRC_GUARD_TIMER_EXP
Line 4138:    PLMN_BACKGND_ABORT_DSDS_FRESH_SCAN
Line 4145:    PLMN_BACKGND_ABORT_LIST_FAIL_EUTRA_DISABLED_TEMP
Line 4159: [W]Invalid cause
Line 4201:    BPLMN not enabled (or) Srch is in Fore-Ground
Line 4234:    Candidate PLMN not found in any of the RATs
Line 4256:    Backgnd Abort flag value = 0x%X
Line 4294: [W]Not handled Request Type(%d)
Line 4370: [W]Invalid RAT in plmn_RatSearched: %s
Line 4390:    Reading Plmn List Sent from %s 
Line 4470:    Abort Cnf from RR/RRC:Rat Searched - %d, 3G List Size - %d, 2G List size - %d
Line 4512: [W]Ignore Abort Cnf, Wrong plmn_PlmnState !
Line 4527:    Fail Ind from RR : Rat Searched - %d, 3G List size- %d, 2G List size - %d
Line 4565:    %s :
Line 4584:    Ignore PLMN_LIST_IND !! LTE PLMN List Rsp present!
Line 4593:    Ignore PLMN_LIST_IND !! NR PLMN List Rsp present!
Line 4639: %s:: Entry 
Line 4641: %s : %d, (%s , %s) 
Line 4674: [W]Ignore Plmn List Ind, Wrong plmn_PlmnState !
Line 4781:    %s : Result = 0x%x 
Line 4782: %s:: Exit 
Line 4844: [W]Unknown Bplmn Init Type (0x%02X)
