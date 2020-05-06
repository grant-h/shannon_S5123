Line 648: [I]SIM LAI : %06x / 0x%04x 
Line 663: [I]SIM RAI : %06x / 0x%04x / 0x%02x
Line 678: [I]SIM TAI : %06x / 0x%04x 
Line 694: [I]SIM NR TAI : %06x / 0x%06x 
Line 708: [I]MM SIM State -> %s
Line 722: [I]GMM SIM State -> %s
Line 742: [I]Displaying All MM SIM Data
Line 745: [I]SIM Type : %s
Line 756: [I]LocUpdateStatus : %s / %s / %s / %s 
Line 763: [I]LocUpdateStatus : %s / %s / %s 
Line 768: [I]SimData MCC/MNC : %06x
Line 784: [I]--------------------------
Line 792: [I]SIM Type : %s
Line 801: [I]SimData MCC/MNC : %06x
Line 820: [I]LocUpdateStatus : %s / %s / %s  / %s 
Line 827: [I]LocUpdateStatus : %s / %s / %s 
Line 903:    SimProvider : %d -> %d
Line 1089:    Return CsimAvailable
Line 1209: [I]SIM State : %s -> %s
Line 1215: [W]Sim State set fail! - Invalid new Sim State (%x)
Line 1257: [I]GMM SIM State : %s -> %s
Line 1263: [W]Gmm Sim State set fail! - Invalid new GmmSimState (%x)
Line 1299:    pPlmnSimData_DB->plmn_SimDataStatus.UsatRegisteredFlag : %d -> %d 
Line 1359:    pPlmnSimData_DB->plmn_SimDataStatus.HplmnCheckNeeded : %d -> %d 
Line 1405: [W]Accessing Invalid EPS update status (%x)
Line 1408:    EPSUpdateStatus : %s 
Line 1452: [W]Accessing Invalid Loc update status (%x)
Line 1455:    LocUpdateStatus : %s 
Line 1499: [W]Accessing Invalid RAU update status (%x)
Line 1502:    RAUUpdateStatus : %s 
Line 1546: [W]Accessing Invalid NR update status (%x)
Line 1549:    NrUpdateStatus : %s 
Line 1634:    plmn_NumOfEfChanged : %d -> %d 
Line 1706:    %s : ListType %d
Line 1707:    SIM CSG DATA :: CsgType (%d), CsgCount (%d)
Line 1718:    PLMN ID :: %06x, CsgDisplayInd = %d
Line 1732:    CSG Info :: %08X (CSG ID), CsgTypeInd : %d HnbNameInd: %d
Line 1744: [W]Invalid ListType %d!!
Line 1782:    %s
Line 1792:    ACSGListPtr is NULL
Line 1803:    OCSGListPtr is NULL
Line 2474:    Received %s[%d] : %06x , AccTech: %s (0x%04x), %c
Line 2483:    # EF_OPLMNwACT/EF_UPLMNwACT - Received %d %s, %d Added : 
Line 2509:    No HPLMN Search; Stopping Search Timer
Line 2530:    # Received HPPlmnPeriod (SIM): 0x%02X, Fast First HPPLMN Enabled(%d)
Line 2596:    # Received Forbidden Plmn List[%d] : %06x , %c 
Line 2664:    Received Plmn Selector List[%d] : 0x%06x , %c
Line 2669:    # EF_PLMNsel - Received %d PLMNSelectorList, %d Added : 
Line 2704:    %s : HomePlmnCount(%d)
Line 2721:    found 460-00 (%d) times in the Home PLMN List
Line 2727:    460-00 is already in top of HOME_PLMN_L
Line 2751:    460-00 index(%d) is re-ordered to (%d) in HOME_PLMN_L
Line 2755:    460-00 index error(%d) / give up the re-ordering
Line 2762:    460-00 is not in the HOME_PLMN_L
Line 2820:    HPLMN code present in EF_HPLMNwAcT file, Copy the Access Technology into HPLMN list
Line 2837:    Received HPLMNwAcT List[%d] : %06x , AccTech: %s (0x%04x), %c
Line 2842:    # EF_HPLMNwACT - Received %d HPlmnList, %d Added : 
Line 2912:    Start updating Home-PLMN-LIst with ef_HPLMNwAcT
Line 2929: [W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Line 2942:    Start updating Home-PLMN-LIst without ef_HPLMNwAcT
Line 2955: [W]EHPLMN entry addition failed, current count of EHPLMN entries = %d
Line 2972:    # EF_EHPLMN - Received %d EHplmnList, %d Added : 
Line 3100:    %s : EHplmnListPtr - 0x%x, EHplmnCount - %d, HplmnListPtr - 0x%x, HPLMNCount - %d 
Line 3107:    EHPLMN list is supported. Trying to read EF_EHPLMN
Line 3113:    EHPLMN list is not supported. Not reading EF_EHPLMN
Line 3117:    HPLMN Count after reading EHPLMN: %d 
Line 3129:    HPLMN Count after processing EHPLMN and HPLMN Selector: %d 
Line 3192:    %s : MNCLength(%d)
Line 3239:    SIM MCC(%x) Indicates U.S.A subscription
Line 3247:    3rd Digit of MNC in SIM is 0, Copy 3rd digit of SIM MNC in HPlmn for now, check later
Line 3268:    3rd Digit of MNC in SIM is F !
Line 3272:    IMSI indicates that We have a 3 Digit MNC
Line 3285:    HPlmn Does Not Belong to U.S.A (%x) -> Use F as the 3rd Digit of MNC, Check later
Line 3301:    MNCLength not supported by SIM. Check later with Plmns that RR sends
Line 3340:    EF_ActHPLMN is Present
Line 3433:     EF_ActHPLMN is Not Present
Line 3439:    EF-CSP bit status : %d, EF-CSP bit value : %d PLMN Mode : %d
Line 3447:    EF-CSP plmn mode bit = 0, So modify Plmn Selection mode
Line 3448:    Flash value is Manual mode, EF-CSP is Auto So setting it to Auto
Line 3487:    EF_HPLMN - Received HPlmnPeriod -> 0x%02X
Line 3514:    Change PowerUpHPlmnSearchDlyElapsed to TRUE
Line 3583:    Received Forbidden Plmn List[%d] : %06x , %c
Line 3589:    EF_FPLMN - Received %d FPLMNList, %d Added : 
Line 3686:    EF_ActHPLMN - Received File Change Notification for ActHplmn 
Line 3720:    EF_RAT - EF_RAT(%d), SimData.RatMode(%d)
Line 3729:    =========================NOTICE======================
Line 3730:    =====================================================
Line 3731:    EF_RAT - Received REFRESH for EF_RAT. New EF_RAT: %s 
Line 3732:    =====================================================
Line 3736: [W]EF_RAT is not TRI MODE. Change SIM card or SIM profile to retest in TRI MODE
Line 3744:    EF_RAT - RAT mode is not changed -> Clear RefreshRatMode 
Line 3747: [W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s 
Line 3771: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3772: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3773: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3774: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3775: [W]%s : skip mem. free - DataPtr[0x%x],Count[%d]
Line 3873:    %s : AttCommercialSimCard(%d)
Line 3924:    %s : VzWCommercialSimCard(%d)
Line 3966:    %s : NttCommercialSimCard(%d)
Line 3987:    Provider name: %d in plmn_SetSimProvNameFromAHPLMN 
Line 4034: IMSI has changed (plmn_SimData.EfImsiChanged : %d), Deleting Flash CSG information !
Line 4057:    CSG Capable UE ( %s ), CSG Services on UICC ( %d ) 
Line 4074:    pPlmnSimData_DB->plmn_SimData.LastRPLMNSelInd (EF_LRPLMNSI): %d
Line 4082:    Setting HighestRatPrioritySearch for LTE search first
Line 4127:    Fast First HPPLMN Enabled = %d
Line 4196:    #1. Compare Sim card ID with previous one : %d (1:SameID, 2:SameType 3:Diff)
Line 4197:    #2. Is IMSI changed : %d
Line 4198:    #3. Is CSIM present : %d
Line 4270:    [LGU Roaming requirement]Search LTE first, when user enable LTE roaming: write RPlmnAccTech to LTE
Line 4296:    Clear RPLMN Access Tech. - IMSI changed 
Line 4319:    Original HPlmn extracted from IMSI : %06x
Line 4320:    #3. HPlmn extracted from IMSI : %06x
Line 4346:    #4. SimProvider : %d
Line 4397:    Received Ehplmn_Indicator: %d
Line 4476:    #6. SimRead EPS Tai received (0x%x) IsEpsLociValid (%d)
Line 4486:    #7a. SIM EPS LOCI is Absent, FlashRead EPS Tai %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
Line 4495:    #7b. IMSI/SIM Card is changed or IsEpsLociValid EF is present, Updated pPlmnSimData_DB->plmn_SimData.Tai: %06x and pPlmnSimData_DB->plmn_SimData.LteUpdateStatus: %d
Line 4604: [W]NO SIM PRESENT
Line 4615: [W]CMD_UNSUCCESSFUL_TEMP_ERR !
Line 4621: [W]CMD_UNSUCCESSFUL ! (0x%x)
Line 4650:    %s : Plmn State = %s
Line 4663: [W]Errors in Reading SIM Data...Select ANY Plmn
Line 4667: [W]SIM Returned CMD_UNSUCCESSFUL_TEMP_ERR
Line 4688: 
Line 4729:    %s : Read %d EF_FILE data in plmn_SimData and update PLMN&PLMN list data
Line 4740: [W]Read Failure for file : 0x%x 
Line 4876: [W]Unknown EF Element (0x%x) Received Ignore
Line 4940:    %s : Plmn State = %s
Line 4967:    OPPLMN files refreshed. Restart HPPLMN timer for smallest duration !
Line 4973:    SIM files refreshed. Restart HPPLMN timer for smallest duration !
Line 5041:    %s : Plmn State = %s, %s  in state of plmn_UsatRegistered
Line 5080: [W] %s : CSG Not Supported. Ignoring the Msg
Line 5138: %s:: Entry 
Line 5181:    Disable fast search to 3G for CMCC Sub SIM
Line 5230: %s:: Exit 
Line 5250:    %s : EF_HPLMNwAct, EF_EHPLMN, EF_PrefPLMNwAcT, EF_OPLMNwAcT
Line 5278: [W]%s : plmn_SimData.RatMode : %s -> %s 
Line 5280: [W]%s : plmn_SimDataLocal.RefreshRatMode : %s -> %s 
Line 5298:    %s : Type = %d
Line 5544:    %s : Replace OPLMN List in PLMN database with the received preferred list for 5G SOR
Line 5553: [W]Invalid preferred list received. Fail to replace OPLMN List in PLMN database for 5G SOR 
