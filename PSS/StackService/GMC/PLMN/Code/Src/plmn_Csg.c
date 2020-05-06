Line 202: [I]plmn_CsgSelectionMode : %s
Line 218: [I]------------------------- Displaying CSG Data ----------------------------
Line 219: [I]CSG Aware UE : %s, CSG Aware UICC : %s
Line 220: [I]CSG Selected : %s, CSG ID : 0x%08X
Line 222: [I]CSG Selection in Progress : %s , CSG List in progress : %s CSGListReqCasue : %d 
Line 259: Saved Plmn Selection Mode : %s
Line 300: [!]Invalid Mode (%d) in %s
Line 307:    pPlmn_CsgDb->CsgSelectionMode : %s -> %s 
Line 390:    pPlmn_CsgDb->SavedPlmnSelectionMode : %d -> %d 
Line 409: [I]%s : CSG Feature Not Supported. Ignore the message
Line 434:    Emergency PDN is connected. Reject Manual CSG Selection
Line 440:    Rejecting GAPI CSG Selection due to User Plmn Action Already Saved, Awaiting RR Release
Line 446:    Rejecting GAPI PLMN Selection due to Sim State being PLMN_SIM_INVALID
Line 452:    Manual Selection Not Allowed in AUTO Mode !!!
Line 458:    PLMN LIST REQ is in Progress. No Manual PLMN selection Allowed !!!
Line 492:    pPlmn_CsgDb->SelectedCsgId : %d -> %d 
Line 520:    pPlmn_CsgDb->CsgSelectStatus : %d -> %d 
Line 540:    pPlmn_CsgDb->CsgSelectionInProg : %d -> %d 
Line 560:    pPlmn_CsgDb->CsgListInProg : %d -> %d 
Line 580:    pPlmn_CsgDb->CsgDisplayInd : %d -> %d 
Line 601:    pPlmn_CsgDb->SimCSGlistsUpdated : %d -> %d 
Line 624:    pPlmn_CsgDb->CsgListReqCause : %d -> %d 
Line 647:    pPlmn_CsgDb->UeCsgAwareness : %d -> %d 
Line 670:    pPlmn_CsgDb->UiccCsgAwareness : %d -> %d 
Line 698:    pPlmn_CsgDb->CsgType : %d -> %d 
Line 718:    pPlmn_CsgDb->IsLteCsgDisable : %d -> %d 
Line 731:    pPlmn_CsgListDb->AvailCsgListDb.SpecPlmnTobeSearched : %d -> %d 
Line 741:    pPlmn_CsgListDb->OperatorCsgListCount : %d -> %d 
Line 751:    pPlmn_CsgListDb->AvailCsgListDb.AvailableCount : %d -> %d 
Line 761:    pPlmn_CsgListDb->AvailCsgListDb.RatSearched : %d -> %d 
Line 799:    %s : ListType: %d, HNBNameInd: %d
Line 832:    %s : ListType: %d, CSGTypeInd: %d
Line 851: [I]%s : CSG Feature Not Supported. Do not Clear Selected CSG
Line 985: [I]%s : CSG Feature Not Supported. Do not Initialise CSG variables
Line 989:    %s
Line 1169:    %s with Result :- %s
Line 1174:    pPlmn_CsgDb->CsgListReqCause -> %d 
Line 1192:    AvailableCsgLists Before Sorting :: 
Line 1197:    AvailableCsgLists After Sorting :: 
Line 1243: [W]Invalid pPlmn_CsgDb->CsgListReqCause !!
Line 1263:    %s Found Complete CSG Lists Proceed with Combine Actions 
Line 1295:    %s Complete List not Found so Send List Req for Next Rat 
Line 1318:    CSG List going on in Active RAT
Line 1321:    SendStartDrxInfoShareInd : %s SendBplmnSrchStopInd : %s
Line 1331:    CSG was going on Non-Active RAT, Send BplmnSrchStopInd
Line 1337:    Sending IND to RRC:Start DrxInfo Ind
Line 1377:    %s
Line 1453: [I]RatMode -> %s
Line 1454: [!]Compiled for Single Mode Operation So perform Actions
Line 1476:    %s 
Line 1554: [W]ERROR: Should not come here in %s ; Plmn_CsgListDb.AvailCsgListDb.RatSearched : %d 
Line 1617: %s : ACSG Count = %d , OCSG count = %d
Line 1637:    ------Allowed CSG List ------
Line 1654:    PlmnId : %06x
Line 1662:    %d > 0x%08X : ACSGLCount(%d), allowed CsgIdCount(%d)
Line 1672:    ------Operator CSG List ------ (allowed CSG cnt(%d))
Line 1705:    Duplicate Entry not allowed in White List !!
Line 1712:    OCSG found in Forbidden CSG List
Line 1725:    PlmnId : %06x
Line 1731:    %d > 0x%08X 
Line 1789:    %s : ActiveRat - %s 
Line 1889: [W]WARNING : pPlmn_CsgListDb->AvailCsgListDb.RatSearched (%d) is not PLMN_CSG_LTE_DONE  in DUAL mode
Line 1981: %s :: pPlmn_CsgDb->CsgListInProg = (%d),  
Line 1987:    CSG in background
Line 1995:    SelectedRat = %s
Line 2018:    CSG in Foreground
Line 2022:    SelectedRat = %s
Line 2090:    %s : 
Line 2157: %s : 
Line 2161: [W]ERROR ::  Available CSG Lists state -> PLMN_CSG_BOTH_DONE 
Line 2167:    CSG in background
Line 2170:    SelectedRat = %s
Line 2183:    CSG in Foreground
Line 2187:    SelectedRat = %s
Line 2219:    %s : 
Line 2253: [W]Old PLMN Selection Mode is not saved !!
Line 2381:    PerformPeriodicCsgScan not Initiated!! Plmn_CsgListDb.OperatorCsgListCount: %d
Line 2452:    %s
Line 2456:    Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none / closed / hybrid)
Line 2476:    CSG Cell Type is not Closed, Not adding in to ACSG list
Line 2513:    Selected CSG ID is already present in the White list
Line 2523: [W]Invalid CSG Selection Mode
Line 2549:    Selected CSG ID is not present in the White list
Line 2570:    %s
Line 2575:    Selected CSG Id : %X , CSG selected : %s, Csg cell Type : %d (none /closed /hybrid)
Line 2620: [I]%s : CSG Not Supported. Ignoring the Msg
Line 2630:    %s : Result = %s, CsgSelectionInProg = %s, CsgSelectStatus: %s 
Line 2645:    Sending CSG User Selection Response to GAPI
Line 2655:    HOLD RSP TRUE. Attach Accept might have received with SMSOnly/CSFB not preferred
Line 2696:    Already camped on same CSG ID / Rat mode combination
Line 2704:    Manual CSG Selection not allowed in this state.
Line 2715:    Manual CSG Selection not allowed in this state.
Line 2725:    PLMN SEARCH is in Progress. GAPI_PLMN_CSG_SEL_REQ Msg Saved Until Later.
Line 2738:    For ATT, CSG mode cannot be changed to MANUAL
Line 2745:    Plmn_CsgListDb.OperatorCsgListCount = 0, Forceful CSG-SEL-REQ accepted
Line 2756:    pPlmn_CsgListDb->OperatorCsgListCount = 0, Not taking any actions
Line 2777:    CSG_SEL_REQ :: PLMN ID : %06x  CSG ID : 0x%X
Line 2805:    Perform CSG search for selected CSG id
Line 2835: Search is ongoing. Suspend - Suspend RAT to send SEARCH_REQ
Line 2989: [W]Unexpected value received from NS in CsgModeChangeReq
Line 3076:    Ignoring the CSG_LIST_RSP !!!!!! List Req Cause: %d 
Line 3095:    Reading Plmn List Sent by %s. Please Wait....
Line 3107:    Rejecting CSG_LIST_RSP, Wrong plmn_PlmnState !
Line 3192:    User Plmn Selection Mode Change Request processing from Queue Triggered
Line 3225:    %s :: TBD
Line 3274: [W]%s : CSG Feature Not Supported
Line 3278: %s:: Entry 
Line 3404: GMC_EV_PLMN_CSG_SAVE_CURRENT_CAMPED_CSG not Supported Yet
Line 3421: GMC_EV_PLMN_CSG_RETURN_TO_LAST_CAMPED_CSG not Supported Yet
Line 3432: %s:: Exit 
Line 3457: [I]%s : CSG Feature Not Supported
Line 3472:    CSG ID not found in 3G. Send SEL Response to NS and roll back to RPLMN, Enable EUTRA
Line 3489: MAnual CSG in progress and EUTRA is disabled. Search same CSG in 3G
