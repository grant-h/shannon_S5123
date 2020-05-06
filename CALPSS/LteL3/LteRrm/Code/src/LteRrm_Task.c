Line 158: initialize stored RRC message(num:%d)
Line 195: StoredRrcMsgNum:%d)
Line 201: RRM already sent Forced Wakeup and wait L1 response
Line 211: Execute StoredRrcMsg(%d)(idx:%d, RamainingNum:%d)
Line 229: Stored RRC message(idx:%d, RamainingNum:%d) is NULL
Line 254: StoreRrcMsg - stored max num RRC msg
Line 264: StoreRrcMsg1(%d)(inpos:%d->%d, Num:%d->%d)
Line 286: Received DSDS Pause/Resume ind from RRC(%d) in RRM %s State
Line 311: Defer received RRC message(ID:%d) until CGI return - CgiState:%s
Line 342: Received new RRC message(%d)(num:%d)
Line 350: Received Pause_Ind/Resume_Ind(%d)
Line 356: Received LTE_CPHY_SCELL_MBSFN_GRANT_REQ in Power down state. Wait for resume operation. No need to store this message
Line 370: Received the stored RRC message(current:%d)
Line 376: There is no stored RRC message(%d)
Line 387: RRC request SUSPEND or MODEM_STOP to RRM in power down, %s State, Msg(0x%x)
Line 416: No resume for LTERRC_RRM_INIT_IND in %s State
Line 421: abnormal State(%s) for LTERRC_RRM_INIT_IND
Line 435: No resume for req_id(%d)
Line 441: No resume for LTE_FPLMN_SCAN_IRAT
Line 445: No resume for LTE_CPHY_UPDATE_SUPPORTED_BAND_LIST_REQ
Line 450: No resume for LTERRC_RRM_UPDATE_CURR_MODE_IND in Suspend State
Line 458: No resume for LTERRC_RRM_SIGNALLING_IND in %s State
Line 462: No resume for LTERRC_RRM_DSDS_PAUSE/RESUME_IND in %s State
Line 468: No resume for LTE_CPHY_LOW_PWR_MODE_NTF in %s State
Line 472: No resume for LTERRC_RRM_ENDC_STATUS_IND in %s State
Line 476: No resume for LTE_CPHY_MEAS_CGI_REQ(X2L ANR) in %s State
Line 480: No resume for LTE_CPHY_STOP_MEAS_CGI_REQ(X2L ANR) in %s State
Line 486: Ignore for LTE_CPHY_TIME_AIDING_REQ in %s State
Line 492: Ignore for LTE_CPHY_VOLTE_STATUS_NTF in %s State
Line 509: RRC sent some MSG without RESUME or MODEM_START in LTERRM_SUSPEND_STATE, save LteRrm_ProcRrcMsg(0x%x)
Line 520: remove LTE_CPHY_POWER_DOWN_DRX_REQ in %s State
Line 529: No resume for LTERRC_RRM_SIGNALLING_IND in %s State
Line 533: No resume for LTERRC_RRM_DSDS_PAUSE/RESUME_IND in %s State
Line 539: No resume for LTE_CPHY_LOW_PWR_MODE_NTF in %s State
Line 545: Ignore for LTE_CPHY_TIME_AIDING_REQ in %s State
Line 551: Ignore for LTE_CPHY_VOLTE_STATUS_NTF in %s State
Line 558: No resume for LTERRC_RRM_UPDATE_CURR_MODE_IND in Suspend State
Line 574: %s State, save RrcMsg(0x%x)
Line 589: power down - %s State, save RrcMsg(0x%x)
Line 597: No resume for LTERRC_RRM_SIGNALLING_IND in power down State
Line 601: No resume for LTERRC_RRM_DSDS_PAUSE/RESUME_IND in power down state
Line 605: no resume for LTERRC_RRM_IDLE_STATE_IND in power down state
Line 611: No resume for LTE_CPHY_LOW_PWR_MODE_NTF in power down State
Line 628: Received LTE_CPHY_SCELL_MBSFN_GRANT_REQ in Power down state. Wait for resume operation. No need to store this message
Line 634: power down state, save RrcMsg(0x%x)
Line 639: RRM already sent Forced Wakeup Request (not trigger to send)
Line 678: RRM received NULL RRC message
Line 690: [RRC => RRM][%s] ST(%d), Msg(%d)
Line 1182: Illegal Modem Access on POWER OFF[%d]
Line 1219: RRM received NULL L1RX message
Line 1231: [L1RX => RRM][%s] ST(%d), Msg(%d)
Line 1240: Illegal Modem Access on POWER OFF[%d]
Line 1292: RRM received NULL L1LC message
Line 1304: [L1LC => RRM][%s] ST(%d), Msg(%d)
Line 1331: Ignore L1LC_RRM_SEARCH_CNF (bIgnoreL1LCMsgBeforeAllStopCnf = %d)
Line 1344: Ignore L1LC_RRM_MEASURE_CNF (bIgnoreL1LCMsgBeforeAllStopCnf = %d)
Line 1359: Ignore L1LC_RRM_PBCH_DECODE_CNF (AllStopCnf:%d, Enable:%d)
Line 1391: Ignore L1LC_RRM_MEAS_SCHEDULE_IND in %s State
Line 1400: Ignore L1LC_RRM_MEAS_SCHEDULE_IND in %s State
Line 1675: LteRrm Timer expiry (TmrId:%d)
Line 1680: LTERRM_SI_UPDATE_TIMER expiry
Line 1684: LTERRM_CR_MAX_TIMER expiry
Line 1688: LTERRM_CR_MAX_HYST_TIMER expiry
Line 1692: LTERRM_UNSUITABLE_TIMER expiry
Line 1696: LTERRM_CELLBARRED_TIMER expiry
Line 1700: LTERRM_FREQBARRED_TIMER expiry
Line 1704: LTERRM_T320_TIMER expiry
Line 1708: LTERRM_T325_TIMER expiry
Line 1712: LTERRM_DRX_SPARE_TIMER expiry
Line 1716: LTERRM_MTM_DELAY_TIMER expiry
Line 1720: LTERRM_REPORT_UPDATE_TIMER expiry
Line 1724: LTERRM_CONN_DRX_MEAS_CONF_TIMER expiry
Line 1728: LTERRM_DRX_HOLD_TIMER expiry
Line 1732: LTERRM_LPP_ECID_MEAS_TIMER expiry
Line 1736: LTERRM_LPP_OTDOA_MEAS_TIMER expiry
Line 1740: LTERRM_MOB_HIST_REP_MAX_TIMER expiry
Line 1744: LTERRM_TEMP_Q_OFFSET_TIMER expiry
Line 1748: LTERRM_CONN_DRX_DISABLE_TIMER expiry
Line 1752: LTERRM_CSFB_UTRA_MEAS_TIMER expiry
Line 1762: Unexpected TmrId(%d)
Line 1792: [Error] LteRrm_SendMsgToRrc (msgId : %d)
Line 1892: Wrong stack id(%d)
Line 1897: [RRM => RRC][%s] ST(%d), Msg(%d)
Line 1962: [RRM => RRC with SYNC][%s] ST(%d), Msg(%d)
Line 2177: [Error] LteRrm_SendMsgToL1lc (msgId : %d)
Line 2369: [RRM => L1LC][%s] ST(%d), Msg(%d)
Line 2575: LteRrm Timer called!
Line 2598: RRM received NULL ASTUNNEL message
Line 2607: [Framework => RRM], Msg(%d) StackID(%d)
