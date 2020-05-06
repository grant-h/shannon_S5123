Line 107: %s
Line 113: RRC_L2_CONFIG_CNF_Hdlr is called in single step procedure(Result:%d))
Line 118: Reset SendL2CfgReqForRbInfo to false.
Line 144: %s
Line 154: Rcvd L2DataCnf: RbId(%d) pdu_ack_id(%d) Result(%s) Reason(%d)
Line 159: [MUI] Mui matched! nasCnfNeed: %d, msgType: %d, nasMui: %d
Line 202: [MUI] Mui matched! msgType: %d
Line 231: [MUI] Mui mismatch! rRxMsg.pdu_ack_id: %d
Line 299: RRC received indication of DataInactivityTimer expiry. Going to RRC_IDLE Pbd will be triggered
Line 362: [NRDSDS] Reconfiguration will be deferred in CurDsdsState(%s).
Line 398: RRC_L2_DATA_IND
Line 416: Data Ind : RbID(%d) Length(%d)
Line 419: Data : 
Line 423: Data Ind : No Data
Line 432: Data Ind : Wrong RbID(%d)
Line 491: Data Ind : RbID(%d) Length(%d)
Line 494: Data : 
Line 498: Data Ind : No Data
Line 506: Data Ind : Wrong RbID(%d)
Line 529: ASN.1 Decode ErrorCode(%d) : NrScgConfig String len(%d))
Line 541: Ignore Wrong DL DCCH Msg : choice(%d)
Line 551: Ignore DL DCCH Msg : c1 choice(%d)
Line 590: AsnCodecResult.CodecReturnCode - (%d)
Line 608: ASN Decode fail
Line 664: Integrity check failure! SRB ID %d
Line 683: Integrity check failure! DRB ID %d
Line 687: Integrity check failure! but unexpected RB ID
Line 744: [RRC][RLF] RLC max retransmission! bDupActDeact: %d, LcId: %d
Line 744: [RRC][RLF] RLC max retransmission! bDupActDeact: %d, LcId: %d
Line 773: [RLF] Failure Information prcd failure
Line 845: [RRC][RLF] RACH_STATUS_IND with fail result
Line 845: [RRC][RLF] RACH_STATUS_IND with fail result
Line 851: The order of the message(RACH_STATUS_IND) is changed with MSG4
Line 855: RACH_STATUS_IND with RRC_HO_RACH
Line 859: RACH_STATUS_IND with RRC_RLF_RACH
Line 874: RACH_STATUS is reviced. Next Si req will be triggered if it is.
Line 879: RACH_STATUS is reviced for SiReq based MSG3
Line 884: wrong rach cause value!
Line 964: RRC_NR_PRCD_SA_SMC PBD is running. So this triggered message is ignored.
Line 973: RRC_L2_SECURITY_DATA_IND
Line 1091: Rcvd DbRevertNeeded(%d) in current state(%d)
Line 1102: DB copy will not be done.
Line 1124: DB copy will not be done.
Line 1176: [NRDSDS] Resolve the deferred messages in CurDsdsState(%s)
Line 1181: [NRDSDS] The deferred messages couldn't be resolved in CurDsdsState(%s)
Line 1268: [NRDSDS] Resolve the deferred messages in CurDsdsState(%s)
Line 1355: Reset WaitAsCfgStartInd to %d
Line 1362: RRC_LTERRC_AS_CFG_START_IND is received when WaitAsCfgStartInd is false.
Line 1399: %s
Line 1412: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1419: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1432: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1439: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1445: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1454: %s
Line 1468: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1480: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1486: Ignore RrcNrPrcd_RRC_L2_PUCCH_SRS_RELEASE_IND!
Line 1495: [RRC][PUCCHSRSREL] Rcvd CellGrpId(%d) TagId(%d) Cause(%d)
Line 1495: [RRC][PUCCHSRSREL] Rcvd CellGrpId(%d) TagId(%d) Cause(%d)
Line 1749: %s
Line 1792: %s
Line 1806: SCG config request will be deferred in waiting for a confirm msg(WaitCnfMsg(%d)).
Line 1815: Init DbRevertNeeded(%d) before triggering SCG release procedure.
Line 1820: Other procedures are terminated by SCG release request.
Line 1832: Current procedure(%d) is terminated by LTE handover request.
Line 1838: SCG config request will be deferred because current procedure(%d) is running.
Line 1846: SCG config request will be deferred in waiting AS start ind state.
Line 1866: [NRDSDS] Reconfiguration will be deferred in CurDsdsState(%s).
Line 1890: NrRrc_FreeEndcContainer: NrConfig(0x%x))
Line 1897: NrRrc_FreeEndcContainer: NrRadioBearerConf1(0x%x))
Line 1904: NrRrc_FreeEndcContainer: NrRadioBearerConf2(0x%x))
Line 1942: [RBCTRL] Set EndcReleaseTriggered(%d)
Line 1943: [DB] ScgConfig DB release will be delayed
Line 1997: NrSecCellGrpConf: 
Line 2007: ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 2021: NrRadioBearerConf1: 
Line 2031: ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrRadioBearerConf1 String len(%d))
Line 2046: NrRadioBearerConf2: 
Line 2055: ASN.1 Decode ErrorCode(%d) : NrRadioBearerConf2 ErrorStruct(%s) String len(%d))
Line 2121: ScgConfigReleaseNR(%d)
Line 2129: ScgDbDoNotRelease(%d)
Line 2133: KeNB: 
Line 2134: SKgNB: 
Line 2139: SkCountPresent(%d) SkCounter(%d)
Line 2151: SubframeAssignment(%d)
Line 2152: HarqOffset(%d)
Line 2155: AsnCodecResult.CodecReturnCode - (%d)
Line 2158: Endc_ReleaseAdd - (%d)
Line 2159: SecCellGrpConfigPresent - (%d)
Line 2160: RadioBearerConfig1Present - (%d)
Line 2161: RadioBearerConfig2Present - (%d)
Line 2162: ModifiedT304 - (%d)
Line 2243: RRC_LTERRC_NSA_SCG_CONFIG_REQ_Hdlr: EndcDbUpdateBitMask(0x%x)
Line 2255: RRC_LTERRC_NSA_SCG_CONFIG_REQ_Hdlr: Set WaitAsCfgStartInd to %d
Line 2320: [NRUECAPA] CompliantType(%d) Srb3(%d) Drx(%d) DrbUlSplit(%d)
Line 2323: [NRUECAPA] NSA_UECAPA_REQ (%d) dfcType(0x%X) spType(0x%X) simType(%d) fciInfo(%d)
Line 2326: [NRUECAPA] plmn MCC(%x %x %x) MNC(%x %x %x)
Line 2357: [NRUECAPA] PlmnUsage(0x%X)
Line 2383: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 2400: [NRUECAPA] MRDC REQ received.
Line 2407: [NRUECAPA] NR REQ received.
Line 2413: [NRUECAPA] NR REQ received.
Line 2427: [NRUECAPA] GENERAL REQ received.
Line 2446: [NRUECAPA] requestedFreqBandsNR_MRDC Length = (%d)
Line 2463: [NRUECAPA] 
Line 2475: [NRUECAPA] ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 2509: [NRUECAPA] MFREE Received ReqFreqBand String
Line 2516: [NRUECAPA] pDecodedNrFreqBandList NOT NULL
Line 2520: [NRUECAPA] ReqBandInfoList isValid
Line 2535: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 2554: [NRUECAPA] ManualBand NR (%d)
Line 2566: [NRUECAPA] ManualBand  EUTRA  (%d)
Line 2584: [NRUECAPA] NSA_UECAPA_REQ (%d) PROCESS FAILED
Line 2621: [NRUECAPA] ERROR: GenBandInfo is NULL
Line 2632: [NRUECAPA] supported Band NR(%d)
Line 3082: [ANR] RRC_LTERRC_PREPARE_CGI_IND : arfcn (%d) physCellId(%d) subcarrierSpacingSSB(%d)
Line 3131: RRC_LTERRC_RB_INFO_TO_NSA_IND_Hdlr !! 
Line 3172: %s
Line 3177: [LowPwrCtrl] Rcvd TempCtrl(%d)
Line 3182: [LowPwrCtrl] Ignore RRC_LTERRC_LOW_PWR_MODE_IND! ScgCellGrpPresent(%d)
Line 3222: [LowPwrCtrl] Low Power Mode OFF!
Line 3230: [LowPwrCtrl] Low Power Mode ON! (TempCtrl:%d)
Line 3236: [LowPwrCtrl] NR_T_LOW_PWR_MODE is already running.
Line 3313: [NRUECAPA][RRC_LTERRC_NR_UECAPA_CNF_Hdlr] SupportedBandListLteNum (%d)
Line 3324: [NRUECAPA][RRC_LTERRC_NR_UECAPA_CNF_Hdlr] invalid BandEutra. Final SupportedBandListLteNum (%d)
Line 3365: [NRUECAPA][RRC_LTERRC_NR_UECAPA_CNF_Hdlr] L2_RRC_DATA_REQ.
Line 3502: Error: Data Request from upper layer in RRC_IDLE
Line 3520: RRC_MM_DATA_REQ_Hdlr: nasMsgLength: (%d), nasMui: (%d)
Line 3521: RRC_MM_DATA_REQ_Hdlr: pNasMsg: 
Line 3523: RRC_MM_DATA_REQ_Hdlr: AccessIdentitiesBitmap: %d, AccessCategory: %d from MM
Line 3530: [UAC] Barring check already done
Line 3539: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 3539: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 3579: No Nas msg in RRC_MM_DATA_REQ
Line 3661: [UAC] Barring check already done
Line 3667: AccessIdentitiesBitmap: %d, AccessCategory: %d from MM
Line 3672: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 3672: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 3678: Send(-->RRC_RRC_NR_SETUP_START_IND)
Line 3684: Send(-->MM_RRC_EST_REJ)
Line 3718: BPLMN Abort
Line 3808: [NRUECAPA][RRC_MM_INIT_REQ_Hdlr] DB setup FAILED
Line 3817: RRC_MM_INIT_REQ_Hdlr !! 
Line 3899: [IRAT] SourceRat %d
Line 3904: [RRC][IRAT] Type is Reselection to NR
Line 3904: [RRC][IRAT] Type is Reselection to NR
Line 3911: [RRC][IRAT] Type is Redirection to NR
Line 3911: [RRC][IRAT] Type is Redirection to NR
Line 3920: [RRC][IRAT] Type is Handover to NR
Line 3920: [RRC][IRAT] Type is Handover to NR
Line 3926: Warning!!! received handoverToNr.length is 0
Line 3945: HoContainer: 
Line 3964: ASN.1 Decode ErrorCode(%d) ErrorStruct(%s): NrScgConfig String len(%d))
Line 3976: [IRAT] Type %d is invalid value
Line 4029: Send(-->RRC_RRC_NR_CELL_SEL_START_IND(CellCause:PLMN_MCC))
Line 4109: RNA update is triggered in RRC state %d. RNA update will be ignored
Line 4197: [NRBPLMN] RRC_MM_PLMN_LIST_ABORT_REQ can't be handled in ENDC mode
Line 4208: [NRBPLMN] BplmnPrcdState %d CellSelPrcdState %d cellSelCause %d
Line 4311: RRC_MM_PLMN_LIST_REQ can't be handled in ENDC mode
Line 4401: [RRC][NRCELL] RRC_MM_PLMN_SEARCH_REQ_Hdlr SrchCause:%d
Line 4401: [RRC][NRCELL] RRC_MM_PLMN_SEARCH_REQ_Hdlr SrchCause:%d
Line 4404: [RRC][NRCELL] Selected PLMN ID : MCC [%d %d %d] MNC [%d %d %d]
Line 4404: [RRC][NRCELL] Selected PLMN ID : MCC [%d %d %d] MNC [%d %d %d]
Line 4407: [NRCELL] IsHigherPrioSearch:%d, IsEmergencyCallCamping:%d, EquivListReqd:%d
Line 4412: Send(-->MM_RRC_PLMN_SEARCH_CNF(FAIL:Invalid State)
Line 4446: Send(-->RRC_RRC_GOING_TO_IDLE_START_IND(Cause:PLMN_SEARCH))
Line 4462: Send(-->RRC_RRC_NR_CELL_SEL_START_IND(CellCause:PLMN_SEARCH))
Line 4598: RRC_MM_SPECIFIC_DRX_IND : drx_legnth(%d)
Line 4606: NRRRCDB_PagingCycle_rf32
Line 4612: NRRRCDB_PagingCycle_rf64
Line 4618: NRRRCDB_PagingCycle_rf128
Line 4624: NRRRCDB_PagingCycle_rf256
Line 4630: Invalid Specific DRX Cycle!
Line 4635: [PAGING] DrxCycleBitmask (0x%08x %08x), defaultPagingCycle(%d), specificDrxCycle(%d), ranPagingCycle(%d)
Line 4680: MM triggered Terminate Req with cause %d in RRC state %d 
Line 4705: Going to Idle PBD triggered with cause %d
Line 4719: RRC received Terminate Req in unexpected state
Line 4772: Nr_5G_Stmsi: 
Line 4778: Nr_5G_Stmsi is invalid: 
Line 5627: %s
Line 5730: %s
Line 5736: [SIB][ETWS] : receive NRRRCDB_SibType6. RRC ==> MM_RRC_ETWS_PRIMARY_IND
Line 5741: [SIB][ETWS] : receive NRRRCDB_SibType6. RRC ==> MM_RRC_ETWS_PRIMARY_IND
Line 5746: [SIB][ETWS] : receive NRRRCDB_SibType6. RRC ==> MM_RRC_ETWS_PRIMARY_IND
Line 5815: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Idle state
Line 5815: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Idle state
Line 5822: [NRPAGE] : UE Identity type in Paging msg is not nrStmsi, it can't be handled at IDLE state 
Line 5930: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Connected state
Line 5930: [RRC][NRPAGE] S_TMSI is matched. Valid Paging in Connected state
Line 5945: [NRPAGE] : PAGING IS NOT HANDLEDED IN THIS STATE(%s)
Line 6062: [RRC][NRUECAPA] ReqRatType 0x%x, Result %d
Line 6062: [RRC][NRUECAPA] ReqRatType 0x%x, Result %d
Line 6069: [NRUECAPA] L2_RRC_DATA_REQ. DB filtering FAILED
Line 6079: [NRUECAPA] LTERRC_RRC_NR_UECAPA_REQ. EUTRA UECAPA
Line 6130: %s
Line 6168: [RLF] Trach timer is running. T310 will not be stared
Line 6174: [RLF] T311 is running. T310 will not be stared
Line 6180: [RRC][RLF] After ANR operation, failed return to serving cell
Line 6180: [RRC][RLF] After ANR operation, failed return to serving cell
Line 6211: After ANR operation, failed return to serving cell
Line 6221: T310_SCG is started
Line 6327: CAT8 is alleviated and PendingRnaUpdate is set true
Line 6336: Send(-->MM_RRC_BARRING_ALLEV_IND for T302)
Line 6380: [RRC][RLF] T310_MCG expired.
Line 6380: [RRC][RLF] T310_MCG expired.
Line 6553: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT1)
Line 6601: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT2)
Line 6650: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT3)
Line 6700: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT4)
Line 6750: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT5)
Line 6800: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT6)
Line 6850: Send(-->MM_RRC_BARRING_ALLEV_IND for CAT7)
Line 6900: CAT8 is alleviated and PendingRnaUpdate is set true
Line 7067: %s
Line 7262: [NRRRC]NR_TRACH is expired while waiting for acquirement of notBroadcast Sibs
Line 7267: [NRRRC]SibState is not NRRRC_WAITING_RACH_STATE, Ignore RRC_TIMER_NR_TRACH_EXPIRY_IND
