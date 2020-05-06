Line 91: L2_L2LMACRACH_RACH_START_CNF send fail
Line 99: Stop Previous RACH : MacEntity[%d], Cause[%d]
Line 171: [ERROR] Wrong OndemandSiType[%d]
Line 176: [ERROR] Undefined RACH cause triggered by RRC
Line 194: Defer RACH : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 217: TriggerRA_RRC : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 250: Skip MAC trigger RACH, on-going RACH : MacEntity[%d], Cause[%d]
Line 271: Defer RACH : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 288: TriggerRA_MAC : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 311: Skip DSP trigger RACH, on-going RACH : MacEntity[%d], Cause[%d]
Line 368: Defer RACH : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 385: TriggerRA_DSP : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 418: Skip BFR trigger RACH, on-going RACH : MacEntity[%d], Cause[%d]
Line 451: Defer RACH : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 468: TriggerRA_BFR : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 506: L2LRXMAC_PauseRA : MacEntity[%d], Cause[%d], Task[%d], RachTriggered[%d]
Line 533: L2LRXMAC_ResumeRA : MacEntity[%d], Cause[%d], Task[%d], RachTriggered[%d]
Line 579: Re-start RACH on new BWP
Line 621: StartRA : MacEntity[%d], UlMode[%d], BwpId[UL:%d/DL:%d], Cause[%d]
Line 633: RACH not triggered or cancelled : MacEntity[%d]
Line 638: [ERROR] Wrong PreambleTransCnt !! not initialize
Line 653: StartSR : MacEntity[%d]
Line 683: [L2->PHY] IpcSriOn : cmd(%d), schedulingRequestId(%d), srProhibitTimer(%d), srTransMax(%d), priority(%d)
Line 691: Trigger SR-RACH : MacEntity[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 691: Trigger SR-RACH : MacEntity[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 699: PUCCH-SR not triggered or cancelled : MacEntity[%d]
Line 712: Cancel PUCCH-SR : MacEntity[%d], SrId[%d]
Line 732: [L2->PHY] IpcSriOn : cmd(%d), schedulingRequestId(%d), srProhibitTimer(%d), srTransMax(%d), priority(%d)
Line 741: PUCCH-SR cancelled already !! : MacEntity[%d], SrId[%d], DsrConfig[%d], UlSync[%d] SrTriggered[%d], gSRIpcTrigger[%d]
Line 749: EndRA : MacEntity[%d], Source[%d], Cause[%d]
Line 760: [L2->PHY] IpcMacRachCtrl : cmd(%d)
Line 769: No RACH on-going
Line 809: [L2->PHY] IpcRachMsg3Cfg : serv_cell_index(%d), slotIdx_frame(%d), temp_crnti(%d)
Line 816: [L2->PHY] IpcRachMsg3Cfg : hop_flag(%d), freq_alloc(%d), time_alloc(%d), mcs(%d), tpc(%d), csi_req(%d)
Line 832: RAR receive out of RAR window 
Line 842: Invalid Cr Result. RACH not triggered or cancelled : MacEntity[%d]
Line 852: CR OK
Line 852: CR OK
Line 877: [L2->PHY] IpcMacRachCtrl : cmd(%d)
Line 912: [L2->RRC] MsgRachStatusInd : Result(%d), IsValidCrnti(%d), Crnti(%d) RachCause(%d) RachCrType(%d)
Line 915: L2_L2LMACRACH_RACH_STATUS_IND send fail
Line 940: CR Fail
Line 956: [ERROR] m_pRachCfgCommon nullptr !!
Line 978: [L2->RRC] MsgRachStatusInd : Result(%d), IsValidCrnti(%d), Crnti(%d) RachCause(%d) RachCrType(%d)
Line 981: L2_L2LMACRACH_RACH_STATUS_IND send fail
Line 993: [ERROR] PREAMBLE_TRANS_MAX_MASK
Line 1010: Twait timer[%d] expired [%d]
Line 1020: [ERROR] m_pRachCfgCommon nullptr !!
Line 1044: [L2->RRC] MsgRachStatusInd : Result(%d), IsValidCrnti(%d), Crnti(%d) RachCause(%d) RachCrType(%d)
Line 1047: L2_L2LMACRACH_RACH_STATUS_IND send fail
Line 1065: [ERROR] PREAMBLE_TRANS_MAX_MASK
Line 1074: [ERROR] Invalid RarTimerExpired
Line 1085: [ERROR] Invalid CR timer expired case
Line 1140: [ERROR] pCellGrpConfig nullptr !!
Line 1282: gBfdConfig[%d].ServCell[%d].DlBwp[%d]
Line 1300: gBfdConfig[%d].ServCell[%d].DlBwp[%d]
Line 1312: gL2BwpId[MacEntity:%d][CellId:%d].DlBwpId = %d
Line 1321: Switching gL2BwpId[MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
Line 1344: gSiConfig[MacEntity:%d].UlMode[NUL/SUL:%d].SiReq
Line 1348: gSiConfig[MacEntity:%d].UlMode[NUL/SUL:%d].SiReq.RachOccasionsSI = RachOccasionsSI
Line 1353: gSiConfig[MacEntity:%d].UlMode[NUL/SUL:%d].SiReq.RachOccasionsSI.RachConfigSI = RachCommon[BwpId:%d].Rach.rachConfigGeneric
Line 1369: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BasicRach[CellId:%d].RachCommon[BwpId:%d].Rach (SIB)
Line 1377: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BasicRach[CellId:%d].RachCommon[BwpId:%d].Pusch (SIB)
Line 1389: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BasicRach[CellId:%d].RachCommon[BwpId:%d].Rach
Line 1405: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BasicRach[CellId:%d].RachCommon[BwpId:%d].Pusch
Line 1417: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BasicRach[CellId:%d].Dedi
Line 1434: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BfrRach[CellId:%d].BfrConfig[BwpId:%d]
Line 1466: gSrConfig[MacEntity:%d].DsrConfigured[CellId:%d][BwpId:%d][SrId:%d] = true
Line 1479: Triggered SR is canceled : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 1502: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BasicRach[CellId:%d].RachCommon[BwpId:%d].Rach
Line 1511: gRachConfig[MacEntity:%d].UlMode[NUL/SUL:%d].BfrRach[CellId:%d].BfrConfig[BwpId:%d]
Line 1543: gSrConfig[MacEntity:%d].DsrConfigured[CellId:%d][BwpId:%d][SrId:%d] = true
Line 1556: Triggered SR is canceled : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 1573: gL2BwpId[MacEntity:%d][CellId:%d].UlBwpId = %d
Line 1582: Switching gL2BwpId[MacEntity:%d][CellIndex:%d].UlBwpId [%d] -> [%d]
Line 1676: [L2->PHY] IpcTaCtrl : ta_val_mode(%d), ta_val(%d), carrier_bitmap(%d)
Line 1692: [L2->PHY] IpcTaTimer : ta_timer_state(%d), carrier_bitmap(%d)
Line 1744: [L2->PHY] IpcTaTimer : ta_timer_state(%d), carrier_bitmap(%d)
Line 1786: [ERROR] m_pSiReq nullptr !!
Line 1792: [ERROR] m_pSiReq->Si_RequestResources[%d] nullptr !!
Line 1800: [ERROR] m_pRachCfgCommon nullptr !!
Line 1817: BFR CFRA Candidate Beam List In-valid
Line 1830: Dedi RACH SSB[%d], PreambleId[%d]
Line 1834: [ERROR] candidateBeamRSList not Valid
Line 1846: Dedi RACH CSI-RS[%d], PreambleId[%d]
Line 1850: [ERROR] candidateBeamRSList not Valid
Line 1855: [ERROR] BFR candicate cannot select any SSB or CSI-RS
Line 1878: [ERROR] m_pRachCfgDedi nullptr !! cannot select any SSB or CSI-RS
Line 1890: Dedi RACH SSB[%d], PreambleId[%d]
Line 1894: [ERROR] ssbResourceList not Valid
Line 1907: Dedi RACH CSI-RS[%d], PreambleId[%d]
Line 1911: [ERROR] cfraResourceList not Valid
Line 1916: [ERROR] CFRA cannot select any SSB or CSI-RS
Line 1960: [ERROR] CBRA cannot select SSB
Line 1977: [ERROR] RA_PREAMBLE_START_INDEX_MASK
Line 1992: [ERROR] SI_REQUEST_RESOURCES_MASK
Line 2010: [ERROR] totalNumOfPreamble(%d) %% ssbPerRachOccasion(%d) != 0
Line 2018: [ERROR] preamblePerSsb(%d) > (totalNumOfPreamble(%d) / ssbPerRachOccasion(%d))
Line 2046: [ERROR] numberOfRaPreamblesGroupA(%d) > preamblePerSsb(%d)
Line 2053: [ERROR] NUMBER_OF_RA_PREAMBLES_GROUPA_MASK
Line 2065: [ERROR] numberOfRaPreamblesGroupA(%d) > preamblePerSsb(%d)
Line 2082: Common SSB[%d], Group[%d], PreambleId[%d]
Line 2124: [ERROR] RA_RESPONSE_WINDOW_MASK
Line 2206: [L2->PHY] IpcMacRachCtrl : cmd(%d), cellGroup(%d), rachCause(%d), retryCause(%d), cr_type(%d)
Line 2211: [L2->PHY] IpcMacRachCtrl : rar_timer(%d), preamble_trans_cnt(%d), preamble_pwr_ramp_cnt(%d), preamble_id(%d)
Line 2218: [L2->PHY] IpcMacRachCtrl : resource_type(%d), resource_ssb_id(%d), resource_csirs_id(%d), carrier_index(%d), ra_ssb_occasion_mask_id(%d), recoverySearchSpaceId(%d)
Line 2225: |UE -> gNB| MSG1 : RACH (MacEntity[%d], SSB[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 2225: |UE -> gNB| MSG1 : RACH (MacEntity[%d], SSB[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 2230: |UE -> gNB| MSG1 : RACH (MacEntity[%d], CSI-RS[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 2230: |UE -> gNB| MSG1 : RACH (MacEntity[%d], CSI-RS[%d], Group[%d], PreambleId[%d], Cause[%d])
Line 2235: |UE -> gNB| MSG1 : RACH (MacEntity[%d], NO_SSB/CSI-RS, Group[%d], PreambleId[%d], Cause[%d])
Line 2235: |UE -> gNB| MSG1 : RACH (MacEntity[%d], NO_SSB/CSI-RS, Group[%d], PreambleId[%d], Cause[%d])
Line 2256: [ERROR] pTxMacDataSchedulerNr nullptr !!
Line 2286: [ERROR] m_pRachCfgCommon nullptr !!
Line 2329: [ERROR] NUMBER_OF_RA_PREAMBLES_GROUPA_MASK || RA_MSG3_SIZE_GROUPA_MASK || MESSAGE_POWER_OFFSET_GROUPB_MASK || PREAMBLE_RECEIVED_TARGET_POWER_MASK
Line 2353: [ERROR] m_pRachCfgCommon nullptr !!
Line 2363: [ERROR] m_pBfrCfg nullptr !!
Line 2371: [ERROR] m_pRachCfgDedi nullptr !!
Line 2387: Best SSB[%d] RSRP[%d] > Threshold[%d] (GOOD)
Line 2391: Best SSB[%d] RSRP[%d] <= Threshold[%d] (BAD)
Line 2408: candidateBeamRSList[%d] : ssbIndex(%d), ssRsrp(%d) rsrpThresholdSsb(%d)
Line 2413: Dedi SSB[%d] RSRP[%d] > Threshold[%d] (GOOD)
Line 2421: Dedi SSB[%d] RSRP[%d] <= Threshold[%d] (BAD)
Line 2432: No SSB at cfra.ssbResourceList !!
Line 2443: cfra.ssbResourceList[%d] : ssbIndex(%d), ssRsrp(%d) rsrpThresholdSsb(%d)
Line 2449: Dedi SSB[%d] RSRP[%d] > Threshold[%d] (GOOD)
Line 2457: Dedi SSB[%d] RSRP[%d] <= Threshold[%d] (BAD)
Line 2479: candidateBeamRSList[%d] : csirsIndex(%d), csiRsrp(%d) rsrpThresholdCsiRs(%d)
Line 2484: Dedi SSB[%d] RSRP[%d] > Threshold[%d] (GOOD)
Line 2492: Dedi SSB[%d] RSRP[%d] <= Threshold[%d] (BAD)
Line 2502: No CSI-RS at cfra.ssbResourceList !!
Line 2513: cfra.cfraResourceList[%d] : csirsIndex(%d), csiRsrp(%d) rsrpThresholdCsiRs(%d)
Line 2518: Dedi CSI-RS[%d] RSRP[%d] > Threshold[%d] (GOOD)
Line 2526: Dedi CSI-RS[%d] RSRP[%d] <= Threshold[%d] (BAD)
Line 2626: [L2->PHY] IpcRntiCtrl : type(%d), value(%d)
Line 2647: [L2->PHY] IpcRntiCtrl : type(%d), value(%d)
Line 2665: [L2->PHY] IpcRntiCtrl : type(%d), value(%d)
Line 2714: [L2->PHY] IpcRntiCtrl : type(%d), value(%d)
Line 2803: [L2->PHY] IpcRntiCtrl : type(%d), value(%d)
Line 2819: [L2->PHY] IpcRntiCtrl : type(%d), value(%d)
Line 2936: BackOff Timer[%d] Expired
Line 2958: BFR Timer[%d] stop
Line 2964: BFR Timer[%d] start, val[%d]
Line 2977: BFR Timer[%d] Expired
Line 2987: BFD Timer[%d] stop
Line 2993: BFD Timer[%d] start, val[%d]
Line 3006: BFD Timer[%d] Expired
Line 3118: [ERROR] m_pRachCfgCommon nullptr !!
Line 3129: Switching gL2BwpId[MacEntity:%d][CellIndex:%d].UlBwpId [%d] -> [%d]
Line 3141: Switching gL2BwpId[MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
Line 3211: [L2->PHY] IpcPucchSrsRel : cmd(%d)
Line 3225: [MAC RX] State:[%d]->[%d]
Line 3249: BFI_COUNTER(%d) >= beamFailureInstanceMaxCount(%d)
Line 3367: No CFRA CSI-RS Resource at Dedi Resource List !!
Line 3404: [L2->L1C] MsgTxReq : TxReqType(%d), BwpIdx(%d), ScellIdx(%d)
Line 3407: L2_L2LMACRACH_TX_REQ send fail
Line 3425: [L2->L1C] MsgTxReq : TxReqType(%d), BwpIdx(%d), ScellIdx(%d)
Line 3428: L2_L2LMACRACH_TX_REQ send fail
Line 3447: [L2->L1C] MsgTxReq : TxReqType(%d), BwpIdx(%d), ScellIdx(%d)
Line 3450: L2_L2LMACRACH_TX_REQ send fail
Line 3499: [L2->L1C] MsgBwpChgReq : CellIndex(%d), UlBwpIndex(%d), DlBwpIndex(%d)
Line 3503: L2_L2LMACRACH_BWP_CHANGE_REQ send fail
