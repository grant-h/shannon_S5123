Line 112: %s
Line 422: [L2] CellGrpConfigInfoPresentBitMask: (0x%08x %08x)
Line 424: [L2] ScgCellGrpPresent: (%d), RLCConfigPresent: (%d), MACConfigPresent: (%d), SPcellConfigPresent: (%d), SCellBitmask: (0x%x)
Line 449: [L2] L2RrcConfigPresentBitMask: (0x%08x %08x) ScgFailure(%d)
Line 457: Build_L2_RRC_COUNT_VALUE_REQ : rrc_TransactionId(%d)
Line 835: Build_L2_RRC_DATA_REQ : Inappropriate Procedure ID (%d)
Line 879: Build_L2_RRC_DATA_REQ: usRbId(%d) bCnfRequired(%d) pdu_ack_id(%d) cellGroup(%d) trigger_rach(%d) cipheringDisabled(%d)
Line 889: Build_L2_RRC_INTEGRITY_CHECK_REQ: IntegAlgo(%d)
Line 890: Build_L2_RRC_INTEGRITY_CHECK_REQ KrrcInt: 
Line 901: Build_L2_RRC_PHY_CONFIG_STATUS_IND: PhyConfigCompleted(%d)
Line 926: [RRC][RECONFIG] RachCause: NRRCDB_RachTriggerCause_HO
Line 926: [RRC][RECONFIG] RachCause: NRRCDB_RachTriggerCause_HO
Line 947: [RRC][RECONFIG] RachCause: NRRCDB_RachTriggerCause_HO
Line 947: [RRC][RECONFIG] RachCause: NRRCDB_RachTriggerCause_HO
Line 961: [RRC][NRSIB] RachCause: NRRCDB_RachTriggerCause_SI_REQ
Line 961: [RRC][NRSIB] RachCause: NRRCDB_RachTriggerCause_SI_REQ
Line 988: Build_L2_RRC_RB_CHANGE_IND: LteReestState(%d)
Line 1032: Build_L2_RRC_RELEASE_REQ: ScgConfigReleaseNR(%d) ScgDbDoNotRelease(%d) LteReestState(%d) isMacResetNeeded(%d)
Line 1039: Build_L2_RRC_RESET_REQ: ResetCause(%d) ScgFailure(%d)
Line 1059: Build_L2_RRC_SECURITY_DATA_FAIL_IND
Line 1073: Build_RRM_RRC_AS_STATE_IND: CurState(%s)
Line 1089: Build_RRM_RRC_CELL_CONFIG_REQ: Cause:%d
Line 1114: No valid ssbPeriodicityServingCell, default ms20
Line 1117: Build_RRM_RRC_CELL_CONFIG_REQ: Arfcn:%d, CellId:%d, Band:%d, SubCarrierSpacingSSB:%d, ssbPeriodicityServingCell:%d
Line 1121: Build_RRM_RRC_CELL_CONFIG_REQ: Cause:%d
Line 1173: Build_RRM_RRC_CELL_CONFIG_REQ: No FrequencyInfoDl. Arfcn:%d Band %d
Line 1210: Build_RRM_RRC_CELL_CONFIG_REQ: Cause(SCG_CHANGE)
Line 1216: Build_RRM_RRC_CELL_CONFIG_REQ: Cause(ENDC)
Line 1281: [RRC][RECONFIG] Build_RRM_RRC_CELL_CONFIG_REQ: Band(%d) Arfcn(%d) CellId(%d) SubCarrierSpacingSSB(%d) Periodicity(%d) ssbPositionsInBurstPresent(%d)
Line 1281: [RRC][RECONFIG] Build_RRM_RRC_CELL_CONFIG_REQ: Band(%d) Arfcn(%d) CellId(%d) SubCarrierSpacingSSB(%d) Periodicity(%d) ssbPositionsInBurstPresent(%d)
Line 1347: Build_RRM_RRC_NSA_MEAS_GAP_IND: MeasGapStatus(%d) NsaMeasGapPattern(%d) GapOffset(%d) Fr1Gap(%d) Mgta(%d)
Line 1414: [PHY] SIB1 is included in PHY configuration and Sib1ConfigFlag is %d
Line 1425: [PHY][Paging] UeIdforPaging mod 1024 (0x%04x)
Line 1433: [PHY][Paging] UeIdforPaging mod 1024 (0x%04x)
Line 1445: [PHY] Error!!!!!!! No defaultPagingCycle   
Line 1449: [PHY][PAGING]PCCHConfigPresentBitmask: (0x%08x), NrUeIdentity: (%d), selectedPagingCycle: (%d)
Line 1467: [NRUECAPA] SelectedBand = %d
Line 1473: [NRUECAPA] BandIndex exceeded the maximum num of band
Line 1482: [NRUECAPA] Set UECAPA for BandIndex %d successfully
Line 1484: [NRUECAPA] Band: %d, MaxUlLayers: %d, isBwpSwitchingEnable: %d
Line 1492: [PHY] McgCellGrpPresent: (%d), RLCConfigPresent: (%d), MACConfigPresent: (%d), SPcellConfigPresent: (%d), Sib1ConfigFlag(%d)
Line 1497: [PHY] McgCellGrpPresent: (%d), RLCConfigPresent: (%d), MACConfigPresent: (%d), SPcellConfigPresent: (%d), Sib1ConfigFlag(%d)
Line 1503: [RESUME] Build_RRM_RRC_PHY_RELEASE_REQ
Line 1537: [SUSPEND] Build_RRM_RRC_RAT_SUSPEND_REQ TargetRat:%d Type:%d ScgDbDoNotRelease:%d
Line 1714: Build_RRM_RRC_RESEL_INFO_IND DedicatedPriorityInfoIncluded:%d, DeprioritisationInfoIncluded:%d, QoffsettempInfoIncluded:%d, BarredInfoIncluded:%d
Line 1727: Build_RRM_RRC_SIB_UPDATE_REQ PresentSibTypeBitMask:(0x%08x %08x),  Arfcn:%d, CellId:%d
Line 1728: pSib1: %x 
Line 1729: pSib2: %x 
Line 1730: pSib3: %x 
Line 1731: pSib4: %x 
Line 1732: pSib5: %x 
Line 1733: pSib6: %x 
Line 1734: pSib7: %x 
Line 1735: pSib8: %x 
Line 1736: pSib9: %x 
Line 1792: Build_RRM_RRC_BCH_CONFIG_REQ: No valid SchedulingInfoList
Line 1795: Build_RRM_RRC_BCH_CONFIG_REQ: NeededSibBitmap(%d)
Line 1819: RRM_RRC_BCH_RELEASE_REQ pArg isn't NULL BchRelCause:%d, IsForOsi:%d 
Line 1823: RRM_RRC_BCH_RELEASE_REQ BchRelCause:%d, IsForOsi:%d 
Line 1843: RRM_RRC_BPLMN_START_REQ : DstRat(%d), SrcRat(%d), avail_time(%d), start_time(%d)
Line 1899: [NRCELL] Build_RRM_RRC_CELL_STATUS_REQ  Result: %d Cause: %d FailCause:%d NumBarredCell:%d, NumBarredFreq:%d, Qoffsettemp:%d, p_PowerClass:%d
Line 1908: [ANR] Build_RRM_RRC_CGI_STOP_REQ Cause : %d
Line 1929: [LowPwrCtrl] Build_RRM_RRC_LOW_PWR_MODE_IND: TempCtrl(%d)
Line 1989: [NRDSDS] Build_LTERRC_RRC_DSDS_GRANT_REQ: Procedure(%s)
Line 1998: [NRDSDS] Build_LTERRC_RRC_DSDS_UPDATE_PRCD_IND: Procedure(%s)
Line 2048: [NRUECAPA][Build_LTERRC_RRC_NR_UECAPA_REQ] %d supported Band NR(%d)
Line 2219: Build_LTERRC_RRC_NSA_RACH_STATUS_IND: RachResult(%d)
Line 2227: Build_LTERRC_RRC_NSA_SCG_CONFIG_CNF: Result(%s)
Line 2485: Build_LTERRC_RRC_NSA_SCG_FAIL_IND : INAVLID NumMoList count(%d)
Line 2487: Build_LTERRC_RRC_NSA_SCG_FAIL_IND : FailType(%d) MeasResultSCGPresent(%d) MeasResultFreqListNRNum(%d)
Line 2497: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF : PROCESS FAILED. Initialize NRUECAPA DB.
Line 2510: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF
Line 2521: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF : NR_UE_MRDC_Capability length(%d)
Line 2545: [NRUECAPA] Build_LTERRC_RRC_NSA_UECAPA_CNF : NR_UE_NR_Capability length(%d)
Line 2628: [RBCTRL] SrbIndex(%d): NR PDCP change to Legacy! NrPdcpToLegacySrbBitmask(0x%08x)
Line 2706: [RBCTRL] SrbIndex(%d): CipherAlgo(%d) IntegAlgoPresent(%d) IntegAlgo(%d)
Line 2723: [RBCTRL] SrbIndex(%d): SetNrPdcpConfigNeeded(%d) PdcpConfigPresent(%d) SecurityAlgConfigPresent(%d)
Line 2763: [RBCTRL] DrbIndex(%d): NR PDCP change to Legacy! NrPdcpToLegacyDrbBitmask(0x%08x %08x)
Line 2932: [RBCTRL] DrbIndex(%d): CipherAlgo(%d) IntegAlgoPresent(%d) IntegAlgo(%d)
Line 2949: [RBCTRL] DrbIndex(%d): SetNrPdcpConfigNeeded(%d) PdcpConfigPresent(%d) SecurityAlgConfigPresent(%d)
Line 2957: [RBCTRL] EndcReleaseTriggered(%d) NrPdcpToLegacySrbBitmask(0x%08x) NrPdcpToLegacyDrbBitmask(0x%08x %08x)
Line 2959: [RBCTRL] Print RbInfo to be sent to LTERRC.
Line 3011: Build_MM_RRC_BARRING_ALLEV_IND allevAccessCategories: %d, BarredAccessCategories(0x%08x %08x)
Line 3023: RRC_ASSERT %s , %d
Line 3024: [NR RADIO MSG][Error] Too Big size Ch(%d) Length(%d) Dir(%d))
Line 3047: [NR RADIO MSG] Ch(%d) Length(%d) Dir(%d) Data(%x %x %x)
Line 3062: [SerialMsg] Ch(%d) Length(%d) Dir(%d) Data(%x %x %x)
Line 3175: Build_RRC_RRC_NR_REJECT_START_IND RejectTrigger: %d
Line 3196: Build_RRC_RRC_NR_RESUME_START_IND ResumeTrigger: %d, ResumeCause: %d
Line 3243: Build_RRM_RRC_ANT_TEMP_GET_REQ: Module(%d)
Line 3251: Build_MM_RRC_BPLMN_LIST_FAIL_IND: Cause(%d), NumPlmns(%d)
Line 3293: [RRC][NRCELL] Build_MM_RRC_CELL_IND numPlmns:%d, cellId:%d, ImsEmergencySupport:%d 
Line 3293: [RRC][NRCELL] Build_MM_RRC_CELL_IND numPlmns:%d, cellId:%d, ImsEmergencySupport:%d 
Line 3294: [RRC][NRCELL] Build_MM_RRC_CELL_IND tac[0]:%x tac[1]:%x, tac[2]:%x 
Line 3294: [RRC][NRCELL] Build_MM_RRC_CELL_IND tac[0]:%x tac[1]:%x, tac[2]:%x 
Line 3296: [NRCELL]Build_MM_RRC_CELL_IND mcc:%x%x%x mnc:%x%x%x
Line 3297: [NRCELL]Build_MM_RRC_CELL_IND IsRegiResponseNeed: %d, BarringInfoPresent %d
Line 3298: [NRCELL]Build_MM_RRC_CELL_IND FrType %d
Line 3307: Build_MM_RRC_CONNECTED_IND BarredAccessCategories(0x%08x %08x) 
Line 3319: Build_MM_RRC_DATA_CNF Mui:%d cause:%d BarredAccessCategories(0x%08x %08x)
Line 3339: Build_MM_RRC_EST_CNF Mui:%d Result:%d 
Line 3347: [RRC][NRREJECT] Build_MM_RRC_EST_REJ Mui:%d cause:%d extendedWaitTime:%d, BarredAccessCategories(0x%08x %08x)
Line 3347: [RRC][NRREJECT] Build_MM_RRC_EST_REJ Mui:%d cause:%d extendedWaitTime:%d, BarredAccessCategories(0x%08x %08x)
Line 3355: Build_MM_RRC_FALLBACK_IND ActiveDataStatus:%d
Line 3364: Build_MM_RRC_INACTIVE_IND BarredAccessCategories(0x%08x %08x)
Line 3374: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_CNF type:%d
Line 3374: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_CNF type:%d
Line 3377: [RRC][IRAT] RESELECTION_TO_NR result:%d
Line 3377: [RRC][IRAT] RESELECTION_TO_NR result:%d
Line 3381: [RRC][IRAT] REDIRECT_TO_NR RedirectResult:%d
Line 3381: [RRC][IRAT] REDIRECT_TO_NR RedirectResult:%d
Line 3385: [RRC][IRAT] HO_TO_NR HoResult:%d
Line 3385: [RRC][IRAT] HO_TO_NR HoResult:%d
Line 3400: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_REQ : TargetRat %d, Type %d 
Line 3400: [RRC][IRAT] Build_MM_RRC_IRAT_CHANGE_REQ : TargetRat %d, Type %d 
Line 3405: [Warning] Target RAT is not LTE.
Line 3413: pIratInfo address 0x%x
Line 3417: Reselection to LTE
Line 3422: [NRCELL][RESEL] Build_MM_RRC_IRAT_CHANGE_REQ :  selection list has been completed so do not send message
Line 3431: Redirection to LTE
Line 3444: arfcn %d, redirect_time_ms %d, num_blacklist_pci %d
Line 3448: [Warning] No EUTRA redirection info in DB
Line 3453: Handover to LTE
Line 3460: RRC Container : length(%d), data(0x%x%x%x%x)
Line 3464: NAS Container : length(%d), data(0x%x%x)
Line 3468: [Warning] Type %d is invalid value
Line 3477: Build_MM_RRC_MCC_CNF Fail(%d)
Line 3483: Build_MM_RRC_MCC_CNF Success(%d) MCC %d %d %d
Line 3484: Build_MM_RRC_MCC_CNF Success(%d) MNC %d %d %d
Line 3503: Build_MM_RRC_NAS_SEC_UPDATE_REQ: nasContainer: 
Line 3536: Build_MM_RRC_OOS_IND: full_scanned %d, searchCurrentRAT %d
Line 3571: [NRCELL]Build_MM_RRC_PLMN_LIST_ABORT_CNF Result%d Cause %d Status %d, NumPlmns %d DetFreqNum %d
Line 3592: [NRCELL]Build_MM_RRC_PLMN_LIST_CNF Result%d Cause %d Status %d, NumPlmns %d DetFreqNum %d
Line 3637: [RRC][NRCELL] Build_MM_RRC_PLMN_SEARCH_CNF listSize:%d, abortflag:%d, result:%d 
Line 3637: [RRC][NRCELL] Build_MM_RRC_PLMN_SEARCH_CNF listSize:%d, abortflag:%d, result:%d 
Line 3639: [RRC][NRCELL] mcc:%x%x%x mnc:%x%x%x
Line 3639: [RRC][NRCELL] mcc:%x%x%x mnc:%x%x%x
Line 3658: Build_MM_RRC_REL_CNF BarredAccessCategories(0x%08x %08x)
Line 3670: Build_MM_RRC_REL_IND cause:%d BarredAccessCategories(0x%08x %08x), ActiveDataStatus:%d
Line 3679: Build_MM_RRC_TERMINATE_CNF_T BarredAccessCategories(0x%08x %08x)
Line 3698: Build_MM_RRC_ETWS_PRIMARY_IND MsgId(%d), SerialNum(%d), WarningType[0] (%d), WarningType[1] (%d)
Line 3723: Build_MM_RRC_ETWS_SECONDARY_IND MsgId(%d), SerialNum(%d), WarningMsgLen(%d), DataCodingScheme(%d)
Line 3751: Build_MM_RRC_CMAS_IND MsgId(%d), SerialNum(%d), WarningMsgLen(%d), DataCodingScheme(%d)
Line 3831: Build_RRC_RRC_BPLMN_SERVICE_IND: PbdId(%d)
Line 3840: Build_RRC_RRC_BPLMN_START_IND_T BplmnType:%d 
Line 3845: Build_RRC_RRC_BPLMN_STOP_IND_T
Line 3930: Build_RRC_RRC_BPLMN_START_IND_T iratType:N2N
Line 3937: Build_RRC_RRC_BPLMN_START_IND_T iratType:L2N, duration_time:%d 
Line 3950: Build_RRC_RRC_BPLMN_START_IND_T iratType:N2L
Line 3958: Build_LTERRC_RRC_NSA_ANT_TEMP_GET_CNF: NumOfModule(%d)
Line 3963: ModuleId(%d): State(%d) Temp(%d)
Line 4007: Build_CNS_RRC_CP_PARAM_IND: internalMsg(%d) paramId(%d)
