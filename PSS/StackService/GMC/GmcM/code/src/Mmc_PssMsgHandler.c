Line 181:    %s : 
Line 185:    Failed Sending GMC_PSS_DOMAIN_UPDATE_CNF
Line 233:    %s : 
Line 237:    Failed Sending GMC_PSS_START_NW_RSP
Line 272:    %s : Cause = %d, Handoff Type : %d, %s 
Line 279: [W][ERROR]Cause = MMC_HANDOFF_CAUSE_MAX. Input Arg of caller SHALL be checkd.
Line 457:    %s : %s(0x%x) 
Line 524:    %s : RatType: %s, CallStatus:%d
Line 539: [!]Invalid RatType received (%d) MMC_LTENS_EMC_RAT_INFO NOT sent !!
Line 562:    Sending dummy EMC RAT Info (%s) and waiting for CSFB call Request
Line 623:    Sending MMC_NS_MO_CSFB_SIG_EST_CNF
Line 658: Sending MMC_LTENS_MO_CSFB_SIG_EST_REJ : %d
Line 716:    Sending MMC_LTENS_MT_CSFB_SIG_NOTIFY_IND
Line 1150:    %s : 
Line 1264:    %s : Processing USIM_MMC_READ_ALL_RSP
Line 1273: LTESIM_MMC_READ_ALL_RSP:PrefPlmnListPtr
Line 1276: LTESIM_MMC_READ_ALL_RSP:HplmnListPtr
Line 1279: LTESIM_MMC_READ_ALL_RSP:OplmnListPtr
Line 1282: LTESIM_MMC_READ_ALL_RSP:FplmnListPtr
Line 1285: LTESIM_MMC_READ_ALL_RSP:pMLPL_Table
Line 1288: LTESIM_MMC_READ_ALL_RSP:pMSPL_Table
Line 1291: LTESIM_MMC_READ_ALL_RSP:PLMNSel
Line 1294: LTESIM_MMC_READ_ALL_RSP:EHplmnListPtr
Line 1489:    ! Mode Converted to MMC_LTE_HEDGE_MODE from MMC_GLOBAL_MODE
Line 1496:    %s : current - %s, New (from NS) - %s
Line 1498:    ServiceDomain from NS - %d 
Line 1511:    LastCampCountryCode (%x), NetModeSel (%d)
Line 1541: [W]No need to change Mode to LTE_HEDGE_MODE if UE is already MMC_LTE_HEDGE_EMC_MODE in Korea
Line 1565:    New Mode is same as previous selected Mode, no need to perform mode change actions
Line 1572:    [From Global mode] New Mode is same as internally changed Mode, reset InternalModeChange variable
Line 1637:    Elevator mode is not enabled.
Line 1642:    SIM INVALID or not present
Line 1651:    Init not completed
Line 1655:    Operating Mode is not supporting LTE
Line 1659:    EUTRA is permenantly disabled 
Line 1664:    CSFB call ongoing
Line 1669:    EMC call pending
Line 1679:    IRAT in progress 
Line 1684:    User req ongoing
Line 1688:    AUTO_TO_AUTO_RESEL ongoing
Line 1696: MCC Search is already going on !
Line 1735:    %s : 
Line 1741:    Actions are not taken for Elevator mode indication
Line 1747: [W]Eutra Temporarily Disabled. Enable EUTRA for search
Line 1757:    UE already registered on LTE, no need to take actions
Line 1761:    UE registered on 3G/2G, send indication to MM to trigger QRB
Line 1784:    Foreground LIST procedure is going on, ABORT
Line 1926:    Forceful grant was taken. To avoid Simultaneous search, start deep sleep!!
Line 1972:    PLMN selection ongoing on HEDGE. Performing Forced LTE Search
Line 1995:    No Additional Actions taken !
Line 2003:    No Additional Actions taken !
Line 2011:    Recovery Actions will be taken after receiving abort cnf
Line 2029:    No Additional Actions taken !
Line 2055:    %s : ServiceDomain from NS - %d 
Line 2070: [W]PLMN is not initialized - PlmnInitialised:%d or Stack Initialization Ongoing - StackInitialised: %d!
Line 2111: [W]Allow EUTRA enable only if GMM SIM state is valid or SIM is present!
Line 2119:    Enable NR and EUTRA (and perform NR or LTE search) 
Line 2149:    BPLMN in progress, proceed with Abort
Line 2170:    User action is pending. No additional actions taken
Line 2204:    BPLMN in progress, proceed with Abort
Line 2241:    %s
Line 2244:    DFC value : (%x), Device Type : (%x), SGC value : (%x)
Line 2259:    CTC_VoLTE Precondition result : (%d) - Overseas Device
Line 2271:    CTC_VoLTE Precondition result : (%d)
Line 2296:    %s : currVoLTESupport (%d) NsVolteCapaSetReq (%d) 
Line 2308:    %s : No actions as plmn_GlobalModeReinitializedFlag (%d) 
Line 2314:    %s : CTC VoLTE precondition is not matched, ignore ILM 
Line 2371:    %s : 
Line 2381: [W]Stack initialisation or MCC is in progress.
Line 2387:    3GPP operatingMode is not LTE supporting 
Line 2394:     Process volte inidcation for internal mode change
Line 2398:     Process volte indication for CTC SIM in NR multimode.
Line 2402:    Conditions for processing volte indication not satisfied 
Line 2435:    CurrentMode = %s, FinalMode = %s
Line 2448: [I]Plmn State : %s (%s)
Line 2515:    %s : NsVolteCapaSetReq (%d) 
Line 2542:    %s : currVoLTESupport (%d) 
Line 2546: %s : CTC VoLTE precondition is not matched, ignore ILM 
Line 2610:    %s : DualSimStatus from NS - %d 
Line 2620:    Same DualSimStaus reported by NS, no action taken
Line 2625:    3G dual SIM is not supported
Line 2655:    %s : DDSChange from NS - %d 
Line 2667:    PS Stack Number From Registry - %d, OldDdsValue = %d, New DDS Value : %d 
Line 2688:    IMS Stack value From Registry - %d, Old IMS DDS Value: %d, New Value : %d 
Line 2896: [!]%s : stack in suspended state
Line 2979: %s : 
Line 2995:    Recieived CALL_END without CALL_START, Just send EMC_RAT_INFO and avoid further actions !
Line 3002:    Setting MMC EMC RAT to FailedRat !
Line 3032:    Test SIM card and MMC_EMERGENCY_CALL_FAIL in UMTS, Treat as Call END 
Line 3033:    EMC Call Status %d -> %d
Line 3083:    %s : CB Mode = %d
Line 3136:    %s : Mmc_ConfigureIratToLteReq.enable: %s
Line 3158: No action required in MMC_LTE_HEDGE_EMC_MODE
Line 3184: [!]%s : CSFB already ongoing on other stack, Est Req Not Expected
Line 3217: [!]%s : Operating Mode(%s) is Not LTE-3G(2G) MultiMode. Est Req Not Expected
Line 3226: [W]%s : Initialization not yet done. Respond with CsfbSigEstRej
Line 3240: %s : CallType = %d, PrefRat = %s 
Line 3261: [!]%s : CSFB already ongoing on other stack, Query Req Not Expected
Line 3301: [W]%s : Initialization not yet done. Respond with CsfbSigEstRej
Line 3337: [W]%s : MCC is progress. After MCC scan is done perform any plmn camping for EMC call
Line 3348: [!]%s : Query Req Not Expected in Operating Mode(%s)
Line 3369: %s : CallType = %d, PrefRat = %s 
Line 3403: [!]%s : Not Expected in this Operating Mode(%s) -> discard received msg
Line 3411:    %s : 
Line 3437: [!]%s : CSFB already ongoing on other stack, Sending default abort cnf
Line 3462: [!]%s : Not Expected in this Operating Mode(%s) -> discard received msg
Line 3472:    %s : 
Line 3497:    Gmc_GetSrncStandbyRsp:%d
Line 3519:    %s : Mbms State: %d
Line 3549:    %s :  Level(%d)
Line 4076:    %s : SelectedMode=%d
Line 4138:    %s : 
Line 4407:    %s : SafeMode(%d), NoSvcScanTime(%d min) 
Line 4436:    %s : SafeMode(%d), NoSvcScanTime(%d sec) 
