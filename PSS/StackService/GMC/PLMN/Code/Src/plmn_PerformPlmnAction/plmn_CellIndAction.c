Line 158:    pPlmn_CellIndDb->AcceptRrPlmnFlag : %d -> %d 
Line 188:    Plmn_CellIndDb.NCellRAT : %s -> %s 
Line 258: [W]Invalid Action!!!
Line 275: [W]Invalid Action!!!
Line 299:    Plmn Given By RR Exists -> Copy to Selected Plmn Id
Line 305: [I]Selected Plmn  : %06x (%s)
Line 355:    %s : 
Line 374: [W]Ignore Autonomous CELL_IND during SEARCH_REQ.
Line 385:    AwaitingCellIndAfterPlmnSearchReqFlag == TRUE
Line 392:    LRPLMSI is TRUE; Accept Cell_Ind
Line 398: [I]Selected Plmn  : %06x (%s)
Line 400: [W]Ignore CELL_IND - Received PLMN ID is not in Eq PLMN list / USA SPEC Eq PLMN List / not equal to the Selected PLMN.
Line 456:    RAT Change Cause Not 0 -> Save Plmn Given By RR(C) = %06x
Line 473:    User Plmn Selection Mode Change Requested
Line 533:    SIM INVALID ,Dont Start OOS Timer Camp on Limited Service 
Line 538: [!]RecoveryTimerNeeded = %s, So OOS Timer not started
Line 566:    UE registered on VPLMN, Restart HPPLMN Search timer with 2 mins
Line 574:    No need to start HPLMN Scan Timer; HPLMN Srch Prd is %d
Line 588:    Emergency scan retry is going on in LTE, Set EmergencyPlmnAvailable forcefully !
Line 678:    CELL IND received in MMC REGISTERED state
Line 682:    CELL IND received -> Change to Registering
Line 707:    PLMN received in Cell Ind : %06x 
Line 708:    LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
Line 748:    Internal Mode Change Triggered or IMSI mode change is sent to AP
Line 792:    %s : CSG id = 0x%08X
Line 830:    PerfomActions->CsgSelStatus = FALSE in CSG_MANUAL_MODE, Roll back to saved PLMN
Line 879:    %s : EmergencyCallSupport = %d, ActiveRat = %s 
Line 880:    EmerCallPending = %d, RatModeChangeState = %d 
Line 895:    EMC Call being handled through CSFB.
Line 902:    Rat notified as 2G/3G, wait for CSFB request
Line 909:    for 3GPP2 mode, actions will be taken in GMSS
Line 921:    TMO/canada/VZW  E911 : sent EMC rat info after attach result
Line 926: [W]Emergency Call is Pending, but the current Cell does not support Emergency
Line 935:    Continue search on remaining RATs or Send notification to AP
Line 939:    Trigger any PLMN Selection 
Line 952: [W]AP is already notified with EMC_RAT_INFO with Rat (%d)
Line 972:    TMO/canada/VZW E911 : sent EMC rat info after attach result
Line 987: [W]Invalid PlmnRat Mode (%d) for EmergencySupport Actions
Line 1033:    PLMN(%06x) Valid for %s
Line 1127:     PLMN Found is Valid PLMN So try for Normal Service on this PLMN
Line 1134:    Found RPLMN when Tried for Limited Service:CurrRatMode - %s , RPlmnRat - %s
Line 1166:    Rplmn != HPlmn, Try HPlmn, Found HPLMN when Tried for Limited Service
Line 1257:    All Rats suspended, Ignore Cell Ind
Line 1264:    Ignoring cell ind as it is not received from current RAT(%s)
Line 1316:    Neighboring Cell Rat Info : %s , SkipRatMode : %s
Line 1389:    %s : %s(%d)
Line 1390:    CellIndCause : %d
Line 1407:    %s : PLMN State Invalid (%s)
Line 1463: Special Case for TC 26.7.4.5.5.1 -- GRR doesn't detected PLMN on different bands with BPLMN
Line 1528:    skipCellIndAction - %d, EutraAndAutoMode - %d 
Line 1704:    %s : Reject Cause[%d]
Line 1709:    Plmn Selection already started. Don't take actions for CEll Reject Ind
Line 1729: [I]Plmn State : %s (%s)
