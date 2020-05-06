Line 164:    Data = [%x], Length = [%d]
Line 234:    ServiceDomain to EMM: %d
Line 241:    DualSimStatus to EMM: %d
Line 246:    DDS to EMM: %d, ImsDDS : %d
Line 281:    MMC_EMM_MODE_UPDATE_REQ with new mode = %s
Line 305:    %s : NewMode = %s 
Line 560: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ (G2L REDIRECTION) 
Line 564: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ  (U2L REDIRECTION)
Line 630: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ (G2L RESELECTION) 
Line 634: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ  (U2L RESELECTION)
Line 676:    MMC_LTEMM_RESEL_REQ : Num of cell:(%d) SourceRAT:(%d) PLMN_ID: %06x  earfcn:(%d)  Cell_ID:(%d) QRB:(%d)
Line 714: [W]CS2PS_HO_TO_LTE_FROM_UMTS - RSRVCC is not supported
Line 730: [W]CS2PS_HO_TO_LTE_FROM_GSM - RSRVCC is not supported
Line 743: [W]Invalid mobility type
Line 797:    U2L/G2L HO event is ready
Line 801:    U2L/G2L HO data contents is NULL
Line 804: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ : MobCmdType (%d), MOBFROMIRAT (%d)
Line 839: [W]%s: INCORRECT RAT. Cancel Sending Msg
Line 863: MMC_LTEMM_MOB_CMD_FROM_IRAT_REQ : MobCmdType (%d)
Line 984:    %s : (status = %d)
Line 1277:    StartTime=%d, Duration=%d, PLMN -> %06x 
Line 1416:    MMC_ESM_SM_INFO_UPD_IND
Line 1422:    ForcedRegInfo = %d / SMLocalDeactFlag = %d
Line 1431:    State : %d  Nsapi : %d PrimNsapi : %d PdpType : %d PdpAddrLen : %d TftLen : %d ApnLen : %d
Line 1437:    TFT : %d, LinkedTi : %c, PacketFlowID : %d, AgbIuFlag : %d
Line 1443:    SourceStaticDes : %d, SignalingInd : %d , SID : %d, DualSid : %d
Line 1511: [!]Error : fail to allocate Memory
Line 1552:    MM -> EMM RegInfo: 
Line 1553:    LteRrcAvailSchedInfo = %d
Line 1556:    TMSI : 0x%08x, LAI : %06x / 0x%04x 
Line 1562:    LastRegRatMode = 0x%x, EutranDisabled = 0x%x, MmCksn=0x%x, MmUpdateStatus = 0x%x
Line 1567:    ImsiAttachState = 0x%x, EmmCombinedProc = 0x%x, CsSrvRejCause = 0x%x
Line 1569:    ISR Status on HEDGE = 0x%x
Line 1570:    TIN on HEDGE ==> 0x%x, ForcedRegInfo = %d 
Line 1575:    GmmState = 0x%x, GmmServiceState=0x%x, GmmProcedure=0x%x, GmmCause=0x%x
Line 1578:    cellId=0x%x, NumberOfEplmn = 0x%x
Line 1580:    PlmnId = %06x
Line 1583:    Equivalent Plmn List is==>
Line 1587:    Equivalent Plmn List is Empty
Line 1612:    %s : Source Rat=%d
Line 1637:    %s : Source Rat=%d
Line 1724:    CGI INFO received to MMC, LAC = %d ,RAC = %d , No PLMN = %d , CGI CELL ID = %d 
Line 1731:    CGI INFO received to MMC, LAC = %d ,RAC = %d ,CGI CELL ID = %d 
Line 1938:    %s : 
Line 1970:    Default case for Init_Cnf_Action
Line 2081:    EUTRA STATUS from EMM - %d, ServiceDomain - %d
Line 2088:    [DSDS]: SET DISABLE EUTRA
Line 2139:    %s : 
Line 2148: [!]MEM FREE FAIL
Line 2184:    %s : 
Line 2194:    Emergency PDN Status = %s
Line 2213: EMM_MMC_REG_INFO_UPD_IND:pEplmnList
Line 2287:     %s : Process sib5 info from LTE : %d / but SIB5 information will not be handled because CMCC support both LTE-FDD and TDD in China
Line 2318:    Process MCC RSP msg from LTE 
Line 2472:    %s :	Suspend Status = %s, Next Action = %s, MMC_STATE -> %s 
Line 2537:    %s : 
Line 2564:    %s : Resume Status = %s, Next Action = %s, MMC_STATE -> %s 
Line 2635: [!]%s : LTE is Suspended. Ignore IRAT result from EMM 
Line 2701:    %s : 
Line 2805:    %s : 
Line 2816:    MMC mode = %s ( REDIR_CNF (0) )
Line 2913:    %s : 
Line 2922:    MMC  mode = %d (RESEL_RSP (%d))
Line 3116:    %s : 
Line 3138: [!]Not Expected in This CSFB State -> Discard Received Msg
Line 3170:    %s : %s (0x%x)
Line 3177: [!]Not Expected in This CSFB State -> Discard Received Msg
Line 3223:    HEDGE_EMERGENCY_CALL Triggered
Line 3293:    %s : 
Line 3350:    %s : %s (0x%x)
Line 3370:    MT Call Fail: Move to Hedge , trigger PAGE RSP
Line 3385:    MT Call Ind: send Indication to NS/MM
Line 3392:    ID TYPE = %d 
Line 3422:    %s : 
Line 3432:    %s : 
Line 3485:    %s : 
Line 3507:    %s : 
Line 3534:     %s : 
Line 3551: [W] TargetRat Invalid : %d
Line 3558: [W] IratDualRat Invalid : %d
Line 3567: [W] TargetRat Invalid : %d
Line 3594:    %s : TargetRatBitMap(0x%x)
Line 3649: [W] TargetRatBitMap Invalid : 0x%02x
Line 3697:    %s : 
Line 3755:    %s : 
Line 3776:    %s : 
Line 3797:    %s : 
Line 3860:    %s :
Line 3917:    %s : 
Line 3986: [!]%s : LTE is Suspended. Ignore IRAT result from EMM 
