Line 98: This PBD can't be run in ENDC mode
Line 128: RrcNrPrcdSaCellSel : m_CurService(%d)
Line 133: RrcNrPrcdSaCellSel : m_CurService(%d)
Line 138: m_CurService == MSService_INVALID
Line 144: %s
Line 148: [NRCELL] m_ConfiguredStatus 0x%x 
Line 160: [NRCELL] do nothing 
Line 172: [NRCELL] RRM RAT state:%d BplmnStatus:%d
Line 176: [NRCELL] RRC state:%d, NrCellSelectionCause:%d, IsRedirection:%d 
Line 191: %s
Line 203: %s
Line 215: %s
Line 236: [NRCELL] Freq Scan result:%d bBandSearchFlag: %d FreqScanState:%d
Line 269: [NRCELL] NONE_SCAN is invalid value
Line 274: [RRC][NRCELL] NumFreq %d
Line 274: [RRC][NRCELL] NumFreq %d
Line 280: [NRCELL] UntilSsbFrequency %d
Line 312: [NRCELL] PbdState is PBD_STATE_ABITRARY 
Line 324: [NRCELL] do nothing 
Line 332: [NRCELL] PbdState is PBD_STATE_ABORTING 
Line 333: [NRCELL] CellSelCause %d 
Line 363: [NRCELL] No message to send. terminate current procedure 
Line 377: [NRCELL] RRC_RRM_CELL_ACQ_IND_Hdlr
Line 379: [RRC][NRCELL] Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
Line 379: [RRC][NRCELL] Band:%d Arfcn:%d CellID:%d RSRP:%d RSRQ:%d
Line 391: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_BCH_CONFIG_REQ)
Line 399: %s
Line 402: [NRCELL] RRC_RRM_BCH_CONFIG_CNF result:%d
Line 407: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
Line 429: [NRCELL] RRC_RRC_SIB1_IND
Line 455: [NRCELL] Nas Selected Plmn info  is missing...
Line 485: [RRC][NRCELL] RRC_RRC_SIB1_IND CellSelection Result :%d
Line 485: [RRC][NRCELL] RRC_RRC_SIB1_IND CellSelection Result :%d
Line 502: [NRCELL] RRC_TIMER_NR_TSIB1_EXPIRY_IND PBD state:%d
Line 524: [NRCELL] RRC_RRM_BCH_RELEASE_CNF result:%d PBD_STATE:%d m_ConfiguredStatus :%d
Line 541: [RRC][NRCELL] RRC_RRM_CELL_STATUS_CNF result:%d
Line 541: [RRC][NRCELL] RRC_RRM_CELL_STATUS_CNF result:%d
Line 550: [NRCELL] RRC_RRM_CELL_STATUS_CNF CellSelection Result :%d
Line 569: [RRC][NRCELL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d PlmnListSearch:%d
Line 569: [RRC][NRCELL] RRC_RRM_CELL_CONFIG_CNF result:%d CellStatus:%d PlmnListSearch:%d
Line 570: [NRCELL] Band %d, Arfcn %d, PhysCellId %d
Line 587: [NRCELL] Need to check why cell selection failed !!!
Line 624: [NRCELL] PBD_STATE_ABITRARY : no action
Line 628: [NRCELL] PBD_STATE_ABORTING : no action
Line 687: [NRCELL] SERVINGCELL_CONFIG_COMMON_SIB is included in new received SIB1, L2 Config is needed
Line 691: [NRCELL] Don't need to send L2/PHY configuration. Just send result msg to MM
Line 707: %s
Line 737: [NRCELL] do nothing 
Line 751: [NRCELL] PBD_STATE_RUNNING : abnormal case 
Line 755: [NRCELL] PbdState is PBD_STATE_ABITRARY 
Line 771: [NRCELL] do nothing 
Line 777: [NRCELL] PbdState is PBD_STATE_ABORTING 
Line 778: [NRCELL] CellSelCause %d 
Line 813: [NRCELL] No message to send. terminate current procedure 
Line 838: [NRCELL] There is no SIB1 for SCell. It is abnormal case. Need to check
Line 934: %s
Line 940: [NRCELL]Frequency list has been completed so do not send message
Line 946: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_FREQ_SCAN_REQ)
Line 955: %s
Line 972: [NRCELL]Cell selection list has been completed so do not send message
Line 978: [NRCELL]-->RRC_SEND_EXTMSG(RRM_RRC_CELL_CONFIG_REQ)
Line 989: [NRCELL] GoToRrcInactive %d, SuspendConfigPresent %d 
Line 1178: [NRCELL] using fixed freq
Line 1179: [NRCELL] Search Rule m_SearchMode:%d, m_FreqType:%d, m_SortType:%d, m_FilterType:%d
Line 1188: [RRC][NRCELL] case : PLMN_SEARCH (stored search)
Line 1188: [RRC][NRCELL] case : PLMN_SEARCH (stored search)
Line 1193: [RRC][NRCELL] case : PLMN_SEARCH (full search)
Line 1193: [RRC][NRCELL] case : PLMN_SEARCH (full search)
Line 1198: [NRCELL] case : MCC(stored & full search)
Line 1202: [RRC][NRCELL] case : PLMN_LIST
Line 1202: [RRC][NRCELL] case : PLMN_LIST
Line 1216: [RRC][NRCELL] case : CONN_REL
Line 1216: [RRC][NRCELL] case : CONN_REL
Line 1233: [RRC][NRCELL] case : CONN_FAIL or ACC_FAIL
Line 1233: [RRC][NRCELL] case : CONN_FAIL or ACC_FAIL
Line 1239: [RRC][NRCELL] case : REDIRECTED
Line 1239: [RRC][NRCELL] case : REDIRECTED
Line 1245: [RRC][NRCELL] case : IRAT_REDIRECT
Line 1245: [RRC][NRCELL] case : IRAT_REDIRECT
Line 1260: [RRC][NRCELL] case : IRAT_RESEL
Line 1260: [RRC][NRCELL] case : IRAT_RESEL
Line 1266: [RRC][NRCELL] case : IDLE_OOS
Line 1266: [RRC][NRCELL] case : IDLE_OOS
Line 1273: [RRC][NRCELL] case : BPLMN_LIST
Line 1273: [RRC][NRCELL] case : BPLMN_LIST
Line 1287: [RRC][NRCELL] case : REESTBLISH
Line 1287: [RRC][NRCELL] case : REESTBLISH
Line 1293: [NRCELL] Please check Cell selection cause
Line 1298: [NRCELL] Search Rule m_SearchMode:%d, m_FreqType:%d, m_SortType:%d, m_FilterType:%d
Line 1337: [NRCELL] Search List m_SearchMode:%d, ListSize:%d, BlockSize:%d
Line 1347: [NRCELL] CellSel Start Cause : %d
Line 1355: [NRCELL] There is no Freqlist and FreqBlock to search
Line 1366: [NRCELL]-->RRC_SEND_EXTMSG(MM_RRC_PLMN_SEARCH_CNF) Due to No search Target exist
Line 1444: [NRCELL] ProcessCellSelFinish Cause:%d, Retry Count :%d
