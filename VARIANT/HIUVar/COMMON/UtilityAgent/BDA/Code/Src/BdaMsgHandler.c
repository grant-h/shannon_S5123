Line 125: BDA received a msg (MsgType %d)
Line 142: Unrecognized msgType(%d)
Line 163: BIG_DATA_INFO_SET received by BDA (CallDomain %d, SimIndex %d)
Line 173: Clearing InfoGetReq cache on reception of BIG_DATA_INFO_SET_REQ
Line 181: BIG_DATA_INFO_SET will be ignored due to CallDomain = 0
Line 185: BIG_DATA_INFO_SET fails due to invalid CallDomain(%d)
Line 191: BIG_DATA_INFO_SET fails due to invalid SimIndex(%d)
Line 198: pal_MemAlloc failed
Line 214: pal_MsgRtkSend failed
Line 217: pal_MemFree failed
Line 221: BIG_DATA_INFO_CNF sent to SIPC (result=TRUE)
Line 242: BIG_DATA_INFO_GET_REQ received by BDA (SimIndex %d, Domain %d)
Line 246: BIG_DATA_INFO_GET_REQ will be discarded due to invalid SimIndex or Domain
Line 252: No BIG_DATA_INFO_SET previously received for this domain! .. Message will be discarded
Line 261: Caching InfoGetReq until a DiagInfoInd arrives!
Line 270: Replacing cached InfoGetReq(RspFlag %d) with new InfoGetReq(RspFlag %d)
Line 275: Existing records don't match an already cached InfoGetReq
Line 282: Unable to get Domain Configuration(Domain %d) ... No DiagInfoReq will be sent
Line 303: UnsolicitedFetch is disabled for Domain %d ... No DiagInfoReq will be sent
Line 316: pal_MemAlloc failed
Line 332: pal_MsgRtkSend failed
Line 335: pal_MemFree failed
Line 339: BIG_DATA_INFO_GET_RESP sent to SIPC
Line 383: Unexpected SimIndex (%d)
Line 390: Unsupported or invalid Trigger (Trigger=%d)
Line 395: NS_DIAG_INFO_IND received by BDA(SimIndex=%d, Trigger=%d, Act=%d, LteRrcEvent=%d)
Line 401: Unable to get Trigger Configuration (Trigger=%d)
Line 407: Reception of NS_DIAG_TRIGGER_RRC_SUCCESS_INDICATION or NS_DIAG_TRIGGER_RRE_SUCCESS_INDICATION for SimIndex %d would result in removal of all records for VoLTE domain
Line 425: [RLF_DEDICATED_COUNT] NS_DIAG_TRIGGER_LTE_RRC_EVENT with LTE RLF received for SimIndex:%d
Line 440: [RLF_DEDICATED_COUNT] NS_DIAG_TRIGGER_2G_3G_RRC_EVENT with 3G RLF received for SimIndex:%d
Line 457: Record corresponding to trigger %d already exist .. New info will be discarded
Line 465: Unexpected replacement policy value (Trigger=%d, policy=%d)
Line 479: [SIM_REPORT] NS_DIAG_TRIGGER_SIM_HOT_SWAP received from NS
Line 485: [SIM_REPORT] current value for SIM swap counters: %d %d
Line 487: [SIM_REPORT] updated value for SIM swap counters: %d %d
Line 500: [SIM_REPORT] NS DIAG TRIGGER for ESIM is expected only for STACK 2. Not handling it for STACK 1
Line 504: [SIM_REPORT] NS_DIAG_TRIGGER_ESIM_SWAP received from NS
Line 509: [SIM_REPORT] current value for ESIM swap counter:%d
Line 511: [SIM_REPORT] updated value for ESIM swap counter: %d
Line 528: [SIM_REPORT] NS DIAG TRIGGER for ESIM is expected only for STACK 2. Not handling it for STACK 1
Line 532: [SIM_REPORT] NS_DIAG_TRIGGER_SIM_ERROR_INFORMATION received from NS
Line 541: [SIM_REPORT] Current value for No SIM comm error counters: %d %d
Line 543: [SIM_REPORT] updated value No SIM comm error counters: %d %d
Line 554: [SIM_REPORT] Current value for No SIM Max Null Proc Bytes counters: %d %d
Line 556: [SIM_REPORT] updated value for No SIM Max Null Proc Bytes counters: %d %d
Line 567: [SIM_REPORT] Current value for SIM Recovery counters: %d %d
Line 569: [SIM_REPORT] updated value for SIM Recovery counters: %d %d
Line 580: [SIM_REPORT] Current value for SIM Parity error counters: %d %d
Line 582: [SIM_REPORT] updated value for SIM Parity error counters: %d %d
Line 593: [SIM_REPORT] Current value for No SIM comm error counters: %d %d
Line 595: [SIM_REPORT] Updated value No SIM comm error counters: %d %d
Line 605: [SIM_REPORT] Current value for No ESIM Max Null Proc Bytes counters: %d %d
Line 607: [SIM_REPORT] updated value for No ESIM Max Null Proc Bytes counters: %d %d
Line 616: [SIM_REPORT] Current value for ESIM Recovery counters: %d %d
Line 618: [SIM_REPORT] updated value for ESIM Recovery counters: %d %d
Line 627: [SIM_REPORT] Current value for ESIM Parity error counters: %d %d
Line 629: [SIM_REPORT] updated value for ESIM Parity error counters: %d %d
Line 636: [SIM_REPORT] Unknown SimError %d occurred
Line 650: [NSVC_REPORT] In Service/ Limited Service/ Power off/ Flight mode ON Trigger received from NS for SimIndex%d
Line 663: [NSVC_REPORT] For SimIndex%d due to power off/flight mode OOS triggers henceforth is invalid
Line 669: [NSVC_REPORT] For SimIndex%d due to In-service/ Limited Service OOS triggers henceforth is valid
Line 676: [NSVC_REPORT] Out of Service Trigger received from NS
Line 685: [NSVC_REPORT] For SimIndex%d OOS started with Trigger %d at %d ms
Line 691: [NSVC_REPORT] For SimIndex%d OOS triggers would not be evaluated
Line 727: A cached InfoGetReq exists(SimIndex %d, Domain %d) .. It may be time to process it
Line 749: Unexpected SimIndex (%d)
Line 754: NS_DIAG_EVENT_IND received by BDA(SimIndex=%d, Event=%d)
Line 764: [RLF_DEDICATED_COUNT] NS_DIAG_EVENT_DEDICATE_MODE_ENTRY with LTE Dedicated Mode Entry received for SimIndex:%d
Line 770: [RLF_DEDICATED_COUNT] NS_DIAG_EVENT_DEDICATE_MODE_ENTRY with 3G Dedicated Mode Entry received for SimIndex:%d
Line 778: Unsupported or invalid Event (Event=%d)
Line 799: Unable to get Trigger Configuration (Trigger=%d)
Line 805: Conditions for sending BIG_DATA_INFO_GET_IND to SIPC are not satisfied
Line 813: pal_MemAlloc failed
Line 829: InfoGetInd(SimIndex %d, CallDomain %d, EventType %d, RspFlag %d)
Line 833: pal_MsgRtkSend failed
Line 836: pal_MemFree failed
Line 840: BIG_DATA_INFO_GET_IND sent to SIPC
Line 856: BDA_FinalizeInfoGetResp
Line 859: Record(InfoBitmap = 0x%x), InfoGetReq (SimIndex %d, Domain %d, RspFlag %d)
Line 862: InfoGetReq (CallType %d, CallState %d, EventType %d, Cause %d, RegStatus %d, RejCause %d)
Line 864: InfoGetReq (ImsRelCause %d, SipRespCode %d)
Line 866: InfoGetReq (SensorStateInfo %d, AudioPathInfo %d)
Line 868: InfoGetReq (CodecType %d)
Line 920: From NS:EventType %d, Cause %d
Line 933: EventType will be changed from %d to %d
Line 942: EventType will be changed from %d to %d
Line 954: InfoGetResp (SipRespCode %d, ImsRelCause %d)
Line 962: Channel Quality Info cleared out because this is a normal call end
Line 972: Populating call quality info to GetResp
Line 993: Unexpected ErrorType %d
Line 999: InfoGetResp (SimIndex %d, Domain %d, RspFlag %d, InfoBitMap 0x%x)
Line 1002: InfoGetResp (CallType %d, CallState %d, EventType %d, Cause %d, RegStatus %d, RejCause %d)
Line 1004: InfoGetResp (ImsRelCause %d, SipRespCode %d)
Line 1036: Record corresponding to Trigger %d (used %d) will be cleared out
Line 1055: BDA_ClearDomainRecords (SimIndex = %d, Domain = %d)
Line 1060: Unable to get Domain Configuration
Line 1070: Record %d corresponding to Trigger %d (used %d) will be cleared out
Line 1193: BDA_Reset
Line 1239: Unable to map rspFlag value %d to a trigger!!
Line 1248: Record found(SimIndex=%d, CallDomain=%d, RecordTrigger=%d, RecordAct=%d)
Line 1252: DIAG INFO for Trigger %d hasn't been received yet or the Trigger is invalid
Line 1261: Failed to get Domain Configurations (Domain %d)
Line 1282: Unknown Act ... Record will be matched(Index %d, Trigger %d, LogInfoBitmap 0x%x)!!
Line 1291: Record found(SimIndex=%d, CallDomain=%d, RecordTrigger=%d, RecordAct=%d)
Line 1297: Record didn't match(SimIndex=%d, CallDomain=%d, RecordTrigger=%d, RecordAct=%d)
Line 1301: Record not found(SimIndex=%d, CallDomain=%d)
Line 1318: BDA_SendDiagInfoReq(SimIndex %d, CallDomain %d)
Line 1324: pal_MemAlloc failed
Line 1350: Unexpected SimIndex (%d)
Line 1353: pal_MemFree failed
Line 1366: pal_MsgRtkSend failed
Line 1369: pal_MemFree failed
Line 1491: Missing configuration(Triggers Configured = %d/%d, Domains Configured = %d/%d)
Line 1502: Trigger %d: isValid %d ActSelectPolicy %d ReplacementPolicy %d InfoBitmap 0x%x
Line 1511: Domain %d: isValid %d isUnsolicitedFetchEnabled %d
Line 1516:    TriggersOrderedList[%d] %d
Line 1520:    TriggersOrderedList Length %d
Line 1525:    ActOrderedList[%d] %d
Line 1529:    ActOrderedList Length %d
Line 1539: RspFlag %d: isValid %d Trigger %d
Line 1554: Out of range Trigger value (%d)
Line 1572: Out of range Domain value (%d)
Line 1590: Out of range RspFlag value (%d)
Line 1751: [SIM_REPORT] Current value for SIM swap counters: %d %d
Line 1752: [SIM_REPORT] Current value for No SIM comm error counters: %d %d
Line 1753: [SIM_REPORT] Current value for No SIM max null proc counters: %d %d
Line 1754: [SIM_REPORT] Current value for SIM recovery counters: %d %d
Line 1755: [SIM_REPORT] Current value for SIM parity counters: %d %d
Line 1756: [SIM_REPORT] Current value for ESIM swap counter:  %d
Line 1757: [SIM_REPORT] Current value for No ESIM comm error counter: %d
Line 1758: [SIM_REPORT] Current value for No ESIM max null proc counter: %d
Line 1759: [SIM_REPORT] Current value for ESIM recovery counter: %d
Line 1760: [SIM_REPORT] Current value for ESIM parity counter: %d
Line 1783: [SIM_REPORT] All SIM/ESIM related counters stored in the NV memory is zero
Line 1792: [RLF_DEDICATED_COUNT] Current value for RLF and Dedicated count for LTE: %d %d %d %d
Line 1795: [RLF_DEDICATED_COUNT] Current value for RLF and Dedicated count for 3G: %d %d %d %d
Line 1821: [RLF_INFO] RLFI Count 0 across RATs!!!
Line 1826: [RLF_INFO] Current value for RLF count for LTE: %d %d
Line 1831: Invalid RLF Count return!!!
Line 1838: [RLF_INFO] RLFI Count 0. return!!!
Line 1846: [RLF_INFO][SIM0][LTE] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1852: [RLF_INFO][SIM0][LTE] ServCellInfo(TAC:%d, %d, PID: %d, DL_ARFCN: %d)
Line 1859: [RLF_INFO][SIM1][LTE] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1865: [RLF_INFO][SIM1][LTE] ServCellInfo(TAC:%d, %d, PID: %d, DL_ARFCN: %d)
Line 1869: [RLF_INFO] Current value for RLF count for 3G: %d %d
Line 1874: Invalid RLF Count return!!!
Line 1882: [RLF_INFO][SIM0][3G] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1889: [RLF_INFO][SIM0][3G] ServCellInfo(LAC:%d,%d, RAC: %d, PSC: %d, DL_ARFCN: %d)
Line 1896: [RLF_INFO][SIM1][3G] For RlfIndex %d RlfCause: %d RSCP: %d and RSRP: %d
Line 1903: [RLF_INFO][SIM1][3G] ServCellInfo(LAC:%d,%d, RAC: %d, PSC: %d, DL_ARFCN: %d)
Line 1929: [NSVC_REPORT] Displaying stored NV memory values while sending MiscInfo to SIPC
Line 1930: [NSVC_REPORT] current value for Nsvc total count: %d 
Line 1936: [NSVC_REPORT] current value for Nsvc level %d count: %d 
Line 1951: [NSVC_REPORT] There is no instance of No  service stored in the NV memory
Line 1984: [ENST_REPORT] Updated Duration of State %d is %d seconds 
Line 1993: [ENST_REPORT] Updated Duration of State %d is %d mins 
Line 2003: Unexpected trigger (%d)
Line 2022: Unable to get BDA record (Trigger=%d)
Line 2031: [SIM_REPORT] Sending BigData_Info_Ind inside timer expiry handler for SimIndex0
Line 2041: [SIM_REPORT] Sending BigData_Info_Ind inside timer expiry handler for SimIndex1
Line 2051: [SIM_REPORT] Sending BigData_Info_Ind inside SimEvent_Notification for SimIndex%d
Line 2058: TimId(%d) Stop Fail(%s,%d)
Line 2062: [SIM_REPORT] Stopped timer for SimIndex%d
Line 2067: [SIM_REPORT] Started timer for SimIndex%d
Line 2074: [RLF_DEDICATED_COUNT] Sending BigData_Info_Ind inside Rlf timer expiry handler
Line 2089: [RLF_INFO] Sending BigData_Info_Ind inside RlfInfo timer expiry handler
Line 2104: [NSVC_REPORT] Sending BigData_Info_Ind inside Nsvc timer expiry handler
Line 2125: [ENST_REPORT] Sending BigData_Info_Ind inside ENST timer expiry handler
Line 2143: [RLF_INFO] Sending BigData_Info_Ind due to reception of MAX number of RLF across RATs
Line 2169: [NSVC_REPORT] StartTime: %d, EndTime: %d and OOS duration: %d
Line 2189: [NSVC_REPORT] NSVC level determined is %d
Line 2196: [NSVC_REPORT] current value for Nsvc total count: %d 
Line 2199: [NSVC_REPORT] updated value for Nsvc total count: %d 
Line 2204: [NSVC_REPORT] current value for Nsvc level %d count: %d 
Line 2207: [NSVC_REPORT] updated value for Nsvc level %d count: %d 
Line 2233: [ENST_REPORT] No change in value of Condition %d .
Line 2237: [ENST_REPORT] For SimIndex %d ENST Condition %d is updated from %d to %d.
Line 2321: [ENST_REPORT] Invalid Condition received.
Line 2346: [ENST_REPORT] For SimIndex %d State %d started at %d ms
Line 2351: [ENST_REPORT] For SimIndex %d State %d was already started. Ignoring this.
Line 2387: [ENST_REPORT] For SimIndex %d State %d is stopped. 
Line 2388: [ENST_REPORT] State %d duration is updated to %d seconds.
Line 2417: [ENST_REPORT] State duration has already reached maximimum value of %d.
