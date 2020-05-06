Line 156: [I]Plmn Selection Mode : %s
Line 182: Set PlmnSelectionMode : (%d)
Line 192: [W]Invalid value for ctrl : %d 
Line 224:    Set PlmnSelectionMode : %s -> %s(%d)
Line 234: [W]Invalid value for ctrl : %d 
Line 257:    pPlmnSelectionMode_DB->plmn_ModeChangePending : %d -> %d 
Line 324: [W]Invalid value for ctrl : %d 
Line 330:    Set plmn_userReselection flag : %d -> %d
Line 392:    %s : Write GMC_FLASH_PLMN_SEL_MODE from %s to %s(%d) (Current PlmnSelectionMode : %s)
Line 447:    Updated PLMN Selection Mode from %s to %s
Line 509:    PLMN List Size = %d
Line 515:    Checking for PLMN received in Search Fail List[%d] : %06x 
Line 525:    No S. Korean PLMN found in PLMN List
Line 574:    PLMN received in Cell Ind : %06x 
Line 575:    LastCampCountryCode (%x) , CurrPlmnCountryCode (%x)
Line 612:    %s : Cause = %d , LastCampCountryCode(%x)
Line 666: [W]Invalid Action !
Line 674:    UE back in S. Korea. PLMN Selection Mode changed from MANUAL to AUTO
Line 688:    UE Either Already in AUTO Mode or Still in Last Camped Country
Line 713:    Updaing RPLMN with Saved PLMN
Line 743:    %s : %s 
Line 744: [I]Plmn State : %s (%s)
Line 772:    Result = %d - Invalid SIM state
Line 799:    Result = %d - Wake from DeepSleep due to mode change Initiate Plmn Search %s
Line 805:    Result = %d - Continue with PLMN actions for mode change %s
Line 832:    Result = %d - After OOS Timer expiry, UE will restart PLMN selection 
Line 849:    Result = %d - User Request is high priority so ignoring old RAT Init Action
Line 870:    Result = %d - MCC procedure is ongoing. Do not take any action
Line 878:    Result = %d - Recovery Actions already running using BPLMN
Line 904:    Man to Man : %s 
Line 951:    HPLMN Timer Not Running, So not Starting it again
Line 970:    Awaiting User Input
Line 975:    User Manual PLMN Re-Selection, Awaiting User Input
Line 1012:    Man to Auto : %s 
Line 1029:    HPLMN Timer Not Running, So not Starting it again
Line 1119:    Already ON_PLMN, Nothing more to do
Line 1128:    PowerUp Routines in Progress. No need to take any action.
Line 1160:    Man to Man BG : %s 
Line 1195:    Already ON_PLMN or RAT change in progress - Plmn State = %s
Line 1228:    PowerUp Routines in Progress. No need to take any action.
Line 1234:    SIM is invalid. No need to take any action.
Line 1240: MCC is going on, mode change to auto action will be ignored.
Line 1246: Auto 2 Auto pre-condition OK
Line 1252:    Auto(Man BG) to Auto : %s 
Line 1320:    PLMN state: %s, plmn_HPPlmnSearch -> %s
Line 1451: [W]Mode change request not supported. (SIM is absent)
Line 1461: [W]Mode change request not supported. (un-supported mode )
Line 1476: Man to Auto: CS Call Procedure in Progress, Proceed with user request
Line 1480: CS Call Procedure in Progress, reject user request
Line 1510:    #2a. New mode is Auto, set plmn_userReselection flag and start PLMN_AUTO_AUTO_RESEL_TIMER 
Line 1532: Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1549:    #2b. New mode is Manual, Abort BPLMN 
Line 1569: Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1584:    #2c. New mode is Manual Background mode 
Line 1588: MANUAL BACKGROUND MODE not expected when BPLMN scan running
Line 1618: %s:: Entry 
Line 1633: %s : New Mode = %s, Plmn State = %s
Line 1639:    #1. Pre-Processing - Check Pending PLMN_SEL_REQ, PLMN_SE_RSP 
Line 1643: Pending PLMN SEL REQ is not yet processed, mode changed to auto , delete the saved message
Line 1685:    #3. Reconfig PLMN Selection Context 
Line 1694:    #4. Send PLMN Sel Mode Rsp 
Line 1705:    Mode Change Req is dummy for CSG Search in AT&T 
Line 1746:    #5. PLMN Sel Mode Change : %s -> %s 
Line 1800: Other stack was using resources due to which Manual PLMN Procedure failed, dont't need to force assert.
Line 1812:    PLMN Sel Mode Change Result - %d 
Line 1828:    #6. Update CSG Sel. Mode, and PLMN Sel. Mode 
Line 1854: %s:: Exit 
