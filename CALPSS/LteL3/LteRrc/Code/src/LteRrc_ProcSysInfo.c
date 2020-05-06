Line 159: [%s]UTRA NOT supported => No need to read SIB6
Line 166: [%s]GERAN NOT supported => No need to read SIB7
Line 176: [%s]Rel11 NOT supported => No need to read SIB14
Line 182: [%s]Prose is not supported. => No need to read SIB18/SIB19
Line 199: [%s]Current LteRrcUeCapaSib (0x%X)
Line 220: [%s]Cell Status Ntf category = %d
Line 246: [%s]GetNotRxedSchedInfo : Avail sched info(0x%X)
Line 325: [%s]pTcellInfo is NULL NOW
Line 331: [%s]pScellInfo is NULL NOW
Line 369: [%s]LTERRC_T_WAIT_SI timer stop error
Line 380: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 432: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 443: [%s]Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 447: [%s]>> Check This Empty SIB reading case.. Forced to read all scheduled SIBs(0x%x)
Line 489: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 538: [%s]SIB2 Timer Value(%d) Last Paging Period(%d) Sib2 Scheduled Period(%d) Min(%d) Max(%d)
Line 576: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 715: [%s]Background operation is in progress (M: %d / S: %d)
Line 735: [%s]Background operation is in progress (M: %d / S: %d)
Line 741: [%s]NOT in Background operation (M_state: %d)
Line 771: [%s]Head of gpLteRrcCellInfoList is NULL
Line 778: [%s]NOT the last elem of cell info list => Re-start LTERRC_T_SIB_VALIDITY
Line 803: [%s]NOT TAIL elem => Should have next elem
Line 811: [%s]Last elem of cell info list => No need to Re-start LTERRC_T_SIB_VALIDITY
Line 845: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 852: [%s]SI START is not send when RESUMED by L1
Line 886: [%s]SI Num(%d) Windowlen(%d)
Line 891: [%s]%d) SI period(%d) Valid(%d) SiToSibMap(0x%x)
Line 903: [%s]IsRequiredSibRead(%d)
Line 939: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 957: [%s]Same as Last SI read. No SIB re-start
Line 966: [%s]Other SIBs Read will be Re-started
Line 1011: [%s]Only CMAS and ETWS are in the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 1038: [%s]Cease SYNC requested
Line 1060: [%s]NULL ptr argument at LteRrcSi_StartReadSi()
Line 1079: [%s]SIB1 Read will be triggered
Line 1093: [%s]SI_UPDATE_PAGING case => need START_READ_REQ for SIB1
Line 1103: [%s]SI_READ_SIB_AFTER_BOUNDARY case => need START_READ_REQ for SIB1
Line 1115: [%s]CLEAR OPFLAG :(%s-%s)
Line 1115: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1116: [%s]CLEAR OPFLAG :(%s-%s)
Line 1116: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1120: [%s]CLEAR OPFLAG :(%s-%s)
Line 1120: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1121: [%s]CLEAR OPFLAG :(%s-%s)
Line 1121: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1131: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or EAB_MOD or CONN state case => need START_READ_REQ for SIB1
Line 1170: [%s]Other SIBs Read will be triggered
Line 1190: [%s]CSG SIBs Read will be triggered
Line 1225: [%s]Invalid SibType argument at LteRrcSi_StartReadSi()
Line 1262: [%s]LTERRC_T_WAIT_SIB1 timer stop error
Line 1274: [%s]LTERRC_T_WAIT_SI timer stop error
Line 1286: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 1422: [%s]STOP READ REQ with %d
Line 1445: [%s]pTcellInfo is NULL NOW
Line 1497: [%s][LTE RRC SRRC] STOP READ REQ
Line 1556: [%s][LTE RRC SRRC] No Tcell Info
Line 1590: [%s]SI proc is ON (%d)
Line 1601: [%s]Scell != NULL, Clear Ntf Bitmap
Line 1603: [%s]pScellInfo is NULL NOW
Line 1608: [%s]Scell == NULL
Line 1616: [%s]CLEAR OPFLAG :(%s-%s)
Line 1616: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1620: [%s]CLEAR OPFLAG :(%s-%s)
Line 1620: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1653: [%s]CLEAR OPFLAG :(%s-%s)
Line 1653: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1654: [%s]CLEAR OPFLAG :(%s-%s)
Line 1654: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1655: [%s]CLEAR OPFLAG :(%s-%s)
Line 1655: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1656: [%s]CLEAR OPFLAG :(%s-%s)
Line 1656: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1661: [%s]SI proc is ON (%d)
Line 1675: [%s]Scell != NULL, Clear Ntf Bitmap
Line 1679: [%s]StopSiProcWhenLeavingCell: SIB2 DB is updated by MFBI here.
Line 1683: [%s]pScellInfo is NULL NOW
Line 1688: [%s]Scell == NULL
Line 1693: [%s]NOT in Background operation => LteRrcSi_InitCellSibDb
Line 1706: [%s]pTcellInfo is NULL NOW
Line 1732: [%s]pTcellInfo is NULL NOW
Line 1743: [%s]CLEAR OPFLAG :(%s-%s)
Line 1743: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1747: [%s]CLEAR OPFLAG :(%s-%s)
Line 1747: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 1791: [%s]CellCategory = LTE_FREQ_FORBIDDEN but RRC is not a idle state.
Line 1801: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d,%d)
Line 1855: [%s]CellCategory = LTE_FREQ_FORBIDDEN but RRC is not a idle state.
Line 1866: [%s]CellCategory = LTE_FREQ_FORBIDDEN but current is source cell(%d,%d)
Line 1917: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 2005: [%s]Remove Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d) Time(%d)
Line 2051: [%s]Remove timeout Barring Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) FreqBarr(%d)
Line 2125: [%s]RRC barring List FULL!! Remove oldest Rat(%d) Earfcn(%d) Pci(%d) CellId(%d) Remain(%d) FreqBarr(%d)
Line 2161: [%s]Add RRC barring List Earfcn(%d) Pci(%d) CellId(%d) Tbarred(%d) FreqBarr(%d)
Line 2202: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2208: [%s]Change category to XXX_ACCEPT_CELL to LTE_ACCEPT_TO_SUIT_CELL
Line 2213: [%s]Current category is NOT XXX_ACCEPT_CELL (category: %d)
Line 2221: [%s]SIB1 bit of LteRrcSentNtfToLteRrm was not set => Should be checked the reason
Line 2260: [%s]MEM ALLOC FAIL!!!
Line 2287: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2291: [%s]++ LastPmax[%d] => new Pmax[%d]
Line 2324: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2331: [%s]CELL status ntf will not be sent
Line 2338: [%s]Invalid LteRrcSib1CellCategory (LTE_MAX_CATEGORY)
Line 2344: [%s]Send LTE_CPHY_CELL_STATUS_NTF (category: %d) PLMN_Avail(%d)
Line 2366: [%s]Sib1Pmax(%d) TempPmax(%d)(%d) TempPmaxNr(%d)(%d)
Line 2379: [%s]++ LastPmax[%d] => new Pmax[%d]
Line 2434: [%s]csg_cell_type to RRM(%d) Membership(%d)
Line 2502: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2505: [%s]Sib1Pmax(%d) TempPmax(%d) TempPmaxNr(%d)
Line 2612: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2615: [%s]Sib1Pmax(%d) TempPmax(%d) TempPmaxNr(%d)
Line 2668: [%s]BarringParameters :: BarringFactor:[%d], BarringTime:[%d]
Line 2698: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2713: [%s]SendSib2Ind :: RRC is connected state. set the SSAC factor as 100(Not barred)
Line 2735: [%s]SendSib2Ind :: ACB information is not changed.
Line 2747: [%s]SendSib2Ind :: Barring parameters for SSAC - Voice
Line 2750: [%s]SendSib2Ind :: Barring parameters for SSAC - Video
Line 2754: [%s]SendSib2Ind :: Barring parameters for converted SSAC - Voice
Line 2757: [%s]SendSib2Ind :: Barring parameters for converted SSAC - Video
Line 2762: [%s]SendSib2Ind :: Barring parameters for Emergency : [%d]
Line 2775: [%s]SendSib2Ind :: Operator-ATT, ACB-SKIP for Voice and Video TRUE. Set MO_DATA as not-barred.
Line 2789: [%s]SendSib2Ind :: Barring parameters for MO-DATA
Line 2797: [%s]SendSib2Ind :: Barring parameters for MO-SIGNALLING
Line 2807: [%s]SendSib2Ind :: drxLength(%d)
Line 2836: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2838: [%s]Send LTE_RRC_SIB8_IND to EMM, SIB8 info present(%d).
Line 2931: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 2969: [%s]Target cell ptr mismatch
Line 2988: [%s]Target cell ptr mismatch
Line 3039: [%s][DEDI_PRIORITY] BitMask(0x%x) Timestamp(%d) Duration(%d)
Line 3043: [%s][DEDI_PRIORITY] Time(%d)ms elapsed.. Ignore
Line 3060: [%s]LTERRC_TMR_SET_CONFIGVAL(%d,%d)
Line 3128: [%s][SendUeStateNtf] :: Send UE specific DRX(%d)
Line 3139: [%s][SendUeStateNtf] :: Send UE specific DRX(%d) nB(%d)
Line 3161: [%s]No valid IMSI, check SIM status => imsi_for_paging is set to zero as per spec
Line 3225: [%s]CSFB Call Status(%d)
Line 3255: [%s]LastGlobalCellId : [0x%x].
Line 3423: [%s] IsFDDFreqInSIB5[%d] in LTERRC_EMM_FDD_FREQ_INFO
Line 3455: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3472: [%s]NO LTE_CPHY_SIB_UPDATE_NTF sending cond(%x, %x)
Line 3487: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 3492: [%s]SIB3 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 3512: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 3517: [%s]SIB4 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 3537: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 3551: [%s]SIB5 info is included in LTE_CPHY_SIB_UPDATE_NTF
Line 3596: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3642: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3687: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3694: [%s]SendSib8UpdateNtf - remove the system time info.
Line 3775: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 3840: [%s]LTERRC_T_WAIT_SIB1 Timer Expiry
Line 3844: [%s]LTERRC_SI_READ_BACKGROUND => Return
Line 3848: [%s]No SIB1 till LTERRC_T_WAIT_SIB1 expiry => LTE_CELL_BARRED via STOP READ REQ with fail
Line 3854: [%s]CLEAR OPFLAG :(%s-%s)
Line 3854: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3858: [%s]CLEAR OPFLAG :(%s-%s)
Line 3858: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3861: [%s]CLEAR OPFLAG :(%s-%s)
Line 3861: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3862: [%s]CLEAR OPFLAG :(%s-%s)
Line 3862: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3863: [%s]CLEAR OPFLAG :(%s-%s)
Line 3863: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3889: [%s]No SIB2 till LTERRC_T_WAIT_SI expiry => LTE_CELL_BARRED via STOP READ REQ with fail
Line 3897: [%s]CLEAR OPFLAG :(%s-%s)
Line 3897: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3901: [%s]CLEAR OPFLAG :(%s-%s)
Line 3901: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3943: [%s]CLEAR OPFLAG :(%s-%s)
Line 3943: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3947: [%s]CLEAR OPFLAG :(%s-%s)
Line 3947: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 3957: [%s]Stop BPLMN and Camp on case => Need to send CELL STATUS NTF
Line 3961: [%s]pTcellInfo is NULL NOW
Line 3973: [%s]ProcSiTimerExpiryAfterSib2 :: need to receive SIB14, if broadcast.
Line 4024: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 4026: [%s]LTERRC_T_WAIT_SI Timer Expiry
Line 4030: [%s]LTERRC_SI_READ_BACKGROUND(Only valid for CSG case) => Stop reading SI & Return
Line 4037: [%s]CLEAR OPFLAG :(%s-%s)
Line 4037: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4041: [%s]CLEAR OPFLAG :(%s-%s)
Line 4041: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4042: [%s]CLEAR OPFLAG :(%s-%s)
Line 4042: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4043: [%s]CLEAR OPFLAG :(%s-%s)
Line 4043: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4047: [%s]Timer was expired while waiting warning message(ETWS/CMAS).
Line 4152: [%s]SIB Validity Timer Expiry in cell(%d)
Line 4162: [%s]SET OPFLAG :(%s-%s)
Line 4162: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4199: [%s]Change pScellInfo to target pTcellInfo
Line 4208: [%s]SET OPFLAG :(%s-%s)
Line 4208: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4307: [%s]All requested CSG SIBs have been received
Line 4321: [%s]LTERRC_T_WAIT_SI timer stop error
Line 4337: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 4380: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB3/4/5 received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 4390: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB6 received => Send LTE_CPHY_SIB_6_UPDATE_NTF
Line 4400: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB7 received => Send LTE_CPHY_SIB_7_UPDATE_NTF
Line 4432: [%s]Current State = %d => NOT send XXX_NTF to LteRrm
Line 4439: [%s]LTE_CPHY_UE_STATE_NTF sent & SIB8 received => Send LTE_CPHY_SIB_8_UPDATE_NTF
Line 4492: [%s]All requested SIBs have been received
Line 4502: [%s]LTERRC_T_WAIT_SI timer stop error
Line 4514: [%s]LTERRC_T_WAIT_SIB2 timer stop error
Line 4522: [%s]Send LTE_CPHY_UE_STATE_NTF
Line 4531: [%s]CLEAR OPFLAG :(%s-%s)
Line 4531: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4535: [%s]CLEAR OPFLAG :(%s-%s)
Line 4535: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4540: [%s]CLEAR OPFLAG :(%s-%s)
Line 4540: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4541: [%s]CLEAR OPFLAG :(%s-%s)
Line 4541: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4542: [%s]CLEAR OPFLAG :(%s-%s)
Line 4542: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 4585: [%s]Revisit cell => Send XXX NTF to LteRrm using previously received SIB info
Line 4599: [%s]Not all the scheduled SIs have not been received => START READ REQ
Line 4607: [%s]Current LteRrcCurrentSiProc (%d) => Set to LTERRC_SI_NO_ACTION and pTcellInfo is set to NULL NOW
Line 4633: [%s]Not all the scheduled SIs : Sched Info in LteRrcSchedInfoInStartReadReq (0x%X)
Line 4686: [%s]NULL ptr argument at LteRrcSi_CheckSiProcStatus()
Line 4731: [%s]NULL ptr argument at LteRrcSi_CheckHomeCountry()
Line 4758: [%s]Home country MCC (US)
Line 4762: [%s]Not Home country (%d %d %d)
Line 4768: [%s]Not Home country (%d %d %d)
Line 4799: [%s]NULL ptr argument at LteRrcSi_CheckForbiddenTai()
Line 4809: [%s]Same TAC with one of the Forbidden TAIs => Check PLMN
Line 4813: [%s]PLMN is also same => Forbidden TAI
Line 4820: [%s]Same TAC but Different PLMN => Not Forbidden
Line 4855: [%s]NULL ptr argument at LteRrcSi_CheckDisabledPlmn()
Line 4864: [%s]PLMN is also same => Disabled PLMN
Line 4870: [%s]Different PLMN => Not Disabled PLMN
Line 4988: [%s]AC 11 or 15 in the HPLMN/EHPLMN => Not barred
Line 4998: [%s]AC 11 or 15, but Not in the HPLMN/EHPLMN => LTE_CELL_BARRED/LTE_FREQ_BARRED
Line 5010: [%s]Neither AC 11 nor 15 support => LTE_CELL_BARRED/LTE_FREQ_BARRED
Line 5036: [%s]Selected or RPLMN(%d) is reserved..Invalidte PLMN Index(%d)
Line 5114: [%s]Mismatch found for Reserved for Operator PLMN Index(%d %d)...
Line 5201: [%s]LteRrcSentNtfToLteRrm(0x%x) LteRrcReceivedSib(0x%x) LteRrcSchedInfoInStartReadReq(0x%x)
Line 5213: [%s]NULL ptr argument at LteRrcSi_CheckIfNtfToL1NeededWithoutOtherSi()
Line 5256: [%s]UE has the CSG Membership on this cell
Line 5263: [%s]Not Allowed CSG cell
Line 5277: [%s]Not Allowed CSG cell in Connected State
Line 5285: [%s]Hybrid cell with CSG Membership
Line 5290: [%s]Hybrid cell without CSG Membership... Try camp on as normal Cell
Line 5295: [%s]Non-CSG Cell Try camp on
Line 5303: [%s]This UE cannot camp on this CSG Cell because CSG is not suppored
Line 5317: [%s]Not Allowed CSG cell in Connected State
Line 5324: [%s]This UE can camp on this Hybrid Cell
Line 5328: [%s]Non-CSG Cell Try camp on
Line 5336: [%s]Allow Camp on CSG Cell in Any PLMN State
Line 5378: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 5379: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 5442: [%s]PLMN ID of this cell matches with Preferred PLMN ID.
Line 5452: [%s]PLMN ID of this cell does not match with Preferred PLMN ID. Try other cell in Limited Service
Line 5508: [%s]Matched PLMN with SPLMN (%d %d %d %d %d %d)
Line 5512: [%s]CellReservedForOperatorUse in SIB1 for index(%d)
Line 5582: [%s]Match PLMN is found in SIB1
Line 5593: [%s]No suitable PLMN with Selected PLMN(%d %d %d %d %d %d) in SIB1
Line 5637: [%s]CellReservedForOperatorUse in SIB1
Line 5734: [%s]Compare EPLMN NumEplmns(%d) InclEquivPlmnList(%d)
Line 5739: [%s]No matching with EPLMN
Line 5779: [%s]Matched PLMN with EPLMN(%d %d %d %d %d %d)
Line 5783: [%s]CellReservedForOperatorUse in SIB1
Line 5880: [%s]Not CellReservedForOperatorUse in SIB1
Line 5888: [%s]Reserved PLMN found with EPLMN in SIB1
Line 5892: [%s]Forbidden TAI found with EPLMN in SIB1
Line 5897: [%s]No matched PLMN with EPLMN in SIB1
Line 6004: [%s]Ignore Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) UserSelectedSrch(%d) PlmnIndex(%d)
Line 6008: [%s]Forbidden TAI NetSelMode(%d) IsFTAISearch(%d) CellCat(%d) PlmnIndex(%d)
Line 6054: [%s]CSG Member PLMN ID(%x) Index(%d)
Line 6059: [%s]NON-CSG Member PLMN ID(%x) Index(%d)
Line 6137: [%s]This cell does not support CDMA. Try other cell for CDMA mobility
Line 6146: [%s]This cell support CDMA. Try this cell for CDMA mobility
Line 6176: [%s]Hplmn Priority Srch : EHPLMN/HPLMN is selected
Line 6190: [%s]Hplmn Priority Srch : RPLMN is selected
Line 6226: [%s]Hplmn Priority Srch : HPLMN found in EPLMN list
Line 6269: [%s]This cell does not support IMS-Emergency. Try other cell for EMC call (%d)(%d)
Line 6279: [%s]plmn_srch_type from MM is LTE_RRC_AVLB_PLMN_SRCH_REQ
Line 6289: [%s]CellReservedForOperatorUse in SIB1
Line 6335: [%s]ImsEmergencySupport(%d) VoiceDomainPref(%d) EMC_Test(%d) 
Line 6355: [%s]This cell does not support IMS-Emergency. Try other cell in Limited Service (%d)(%d)
Line 6370: [%s]Not CellReservedForOperatorUse in SIB1
Line 6414: [%s]This cell is in same country as Selected PLMN 
Line 6419: [%s]This cell is in diff country as Selected PLMN, Abort PLMN search ... 
Line 6426: [%s]Country Change detected
Line 6471: [%s]Select RPLMN
Line 6481: [%s]Select IDLE PLMN
Line 6496: [%s]Select HPLMN List
Line 6508: [%s]Select EPLMN PLMN
Line 6517: [%s]Select Last Nas Selected PLMN
Line 6569: [%s]NETWORK ERROR: Select Primary PLMN
Line 6615: [%s]UpdateEarfcnByMfbi: pCellSibDb is NULL.
Line 6672: [%s]MultibandInfoList as well as FreqBandIndicator is disregarded. CheckFreqBandIndicator is True
Line 6686: [%s]FreqBandIndicator(%d) indicates a UE support band
Line 6713: [%s]MFBI[%d] = %d indicates a UE support band
Line 6729: [%s]FreqBandIndicator(%d) indicates a UE support band after search Multiband list
Line 6755: [%s]Don't change band due to invalid NewEarfcn of Freq(%d) in B%d. NET Error Check!
Line 6771: [%s][MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 6784: [%s][Not MFBI] Band Change is required since DL-EARFCN [%d]->[%d]
Line 6797: [%s]FreqBandIndicator(%d) indicates a NOT support band
Line 6836: [%s]Background Scan operation is progressing => No need to check cell availability
Line 6842: [%s]NULL ptr argument at LteRrcSi_CheckCellAvailability()
Line 6894: [%s]Current Cell FreqBandIndicator(%d) for Candidate Band(%d) Earfcn(%d)
Line 6905: [%s]cellBarred in SIB1
Line 6915: [%s]intraFreqResel is not allowed in SIB1 => LTE_FREQ_BARRED
Line 6967: [%s]Non CSG CELL Found. Try Next Cell
Line 6977: [%s]Selected CSG ID(%d) Found
Line 6983: [%s]CSG ID(%d) Mismatch for Selected CSG ID(%d)
Line 7008: [%s]PLMN LIST REQ => return
Line 7032: [%s] No change in country detected AbortIfNewCountry : %d  
Line 7048: [%s]Highest ranking cell change case..This cell was barred(%d) but remove the limitation
Line 7064: [%s]Overlapped freq Cell is still barred(%d) Remain(%d) BarrType(%d).. Skip Current Cell..
Line 7114: [%s]No action in %d state
Line 7129: [%s]CLEAR OPFLAG :(%s-%s)
Line 7129: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7130: [%s]CLEAR OPFLAG :(%s-%s)
Line 7130: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7131: [%s]CLEAR OPFLAG :(%s-%s)
Line 7131: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7132: [%s]CLEAR OPFLAG :(%s-%s)
Line 7132: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7133: [%s]CLEAR OPFLAG :(%s-%s)
Line 7133: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7195: [%s]SIB1 Rxed in case of ETWS_IND
Line 7201: [%s]There is no ETWS schedule info in SIB1.
Line 7205: [%s]Try to read SIB1 again. total try count : %d
Line 7213: [%s]Abort ETWS Procedure.
Line 7216: [%s]CLEAR OPFLAG :(%s-%s)
Line 7216: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7238: [%s]CheckETWS :: pTcellInfo is NULL NOW
Line 7261: [%s]SIB1 Rxed in case of CMAS_IND
Line 7267: [%s]There is no CMAS schedule info in SIB1.
Line 7271: [%s]Try to read SIB1 again. total try count : %d
Line 7279: [%s]Abort CMAS Procedure.
Line 7282: [%s]CLEAR OPFLAG :(%s-%s)
Line 7282: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7304: [%s]CheckCmas :: pTcellInfo is NULL NOW
Line 7325: [%s]Only Warning msgs are required. Start read SIBs
Line 7357: [%s]gpLteRrcCellInfoList is empty => Init gpLteRrcCellInfoList
Line 7387: [%s]1st element of Cell Info list or LTERRC_T_SIB_VALIDITY is not running => Start LTERRC_T_SIB_VALIDITY
Line 7430: [%s]Move the 1st element of Cell Info list to TAIL
Line 7465: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 7481: [%s]CLEAR OPFLAG :(%s-%s)
Line 7481: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7496: [%s]SET OPFLAG :(%s-%s)
Line 7496: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7497: [%s][MUI HO]LTE_RRC_CELL_IND pends till Rx LTERRC_HO_COMPLETE R2ACK
Line 7509: [%s]Trigger to send LTE_CPHY_UE_STATE_NTF in CONN state
Line 7514: [%s]Trigger to send LTE_CPHY_SI_START_READ_REQ in CONN state
Line 7521: [%s]No action in %d state
Line 7552: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7563: [%s]EndcAvailDuringHo Case : Set ENDC avail
Line 7576: [%s]CLEAR OPFLAG :(%s-%s)
Line 7576: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7581: [%s]Duplicate SIB, but Same cell revisit case(Need to send NTFs to L1SC w/o reading other SIs) => Process this SIB
Line 7587: [%s] IsVoiceBarredCell (%d)
Line 7593: [%s] IsVoiceBarredCell (%d)
Line 7600: [%s]ignore the duplicate SIB  : LteRrcSchedInfoInStartReadReq(%d) LteRrcReceivedSib(%d) LteRrcSentNtfToLteRrm(%d)
Line 7617: [%s]Dedicated SIB1 received, Value Tag changed
Line 7618: [%s]CLEAR OPFLAG :(%s-%s)
Line 7618: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7622: [%s]SIB1 received while LTERRC_T_WAIT_SIB1 timer is not running
Line 7631: [%s]LTERRC_T_WAIT_SIB1 timer stop error
Line 7646: [%s]SIB1 with HeNB Interrupt Rxed while Non-CGI Meas Proc, Ignore
Line 7662: [%s]Return code from DB is LTERRC_DB_IGNORE_SIB1_IN_NOT_AVAIL_CELL => return
Line 7676: [%s]Process SIB1
Line 7713: [%s]Trigger to send LTE_CPHY_CELL_STATUS_NTF in INIT/IDLE/ACC state(%d)
Line 7745: [%s]ProcSIB1 : MBSFN is not activated. state(%d)
Line 7750: [%s]ProcSIB1 : LteRrcSchedInfoInStartReadReq(%d) LteRrcReceivedSib(%d) LteRrcSentNtfToLteRrm(%d)
Line 7766: [%s]SI_UPDATE_3HR or ETWS_IND or CMAS_IND or CONN state case => need STOP_READ_REQ for SIB1
Line 7784: [%s]CLEAR OPFLAG :(%s-%s)
Line 7784: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 7853: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7856: [%s]Process SIB2
Line 7868: [%s]Ignore the duplicate SIB2
Line 7891: [%s]No action in %d state about SIB2
Line 7912: [%s]Invalid LteRrcCurrentSiProc(%d)
Line 7943: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 7946: [%s]Process SIB%d
Line 7970: [%s]LTERRC_SI_READ_BACKGROUND => Return
Line 7983: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 7994: [%s]All the scheduled SIBs for Intra-LTE reselection received => Send LTE_CPHY_SIB_UPDATE_NTF
Line 8002: [%s]Waiting other SIB for Intra-LTE reselection, LTE_CPHY_SIB_UPDATE_NTF will not be sent
Line 8008: [%s]LTE_CPHY_SIB_UPDATE_NTF cannot be sent since LTE_CPHY_UE_STATE_NTF has not been sent to LteRrm
Line 8014: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_UPDATE_NTF
Line 8044: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 8046: [%s]Process SIB%d
Line 8060: [%s]LTE_CPHY_UE_STATE_NTF has already been sent to LteRrm
Line 8096: [%s]Invalid SIB type(SIB%d)
Line 8104: [%s]LTE_CPHY_SIB_6/7/8_UPDATE_NTF cannot be sent since LTE_CPHY_UE_STATE_NTF has not been sent to LteRrm
Line 8110: [%s]SIB%d is received in %d state => Not send LTE_CPHY_SIB_6/7/8_UPDATE_NTF
Line 8343: [%s]LteRrcSi_ProcSib9 :: Ignore duplicated SIB9.
Line 8353: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 8356: [%s]Process SIB9
Line 8372: [%s]LteRrcSi_ProcSib9 :: CSG is not supported.
Line 8403: [%s]NULL ptr argument at LteRrcSi_ProcSib9()
Line 8408: [%s]Process SIB9
Line 8425: [%s]LTERRC_T_WAIT_SI timer stop error
Line 8459: [%s]NULL ptr argument at LteRrcSi_StartReadSiForCsgScan()
Line 8517: [%s]CLEAR OPFLAG :(%s-%s)
Line 8517: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8544: [%s]LteRrcSi_StartCmasValidityTimer : Invalid CMAS DB Index[%d]
Line 8569: [%s]CMAS :: Stop Validity timer[%d]
Line 8575: [%s]LteRrcSi_StopCmasValidityTimer : Invalid CMAS DB Index[%d]
Line 8598: [%s]FindOldestCmasDbIndex :: CMAS buffer full.
Line 8637: [%s]ETWS :: Clear ETWS Primary data
Line 8669: [%s]LteRrcSi_DiscardBufferedEtwsSegment
Line 8718: [%s]LteRrcSi_DiscardBufferedCmasSegment. index[%d]
Line 8783: [%s]ETWS :: All ETWS messages are received. stop ETWS procedure
Line 8785: [%s]CLEAR OPFLAG :(%s-%s)
Line 8785: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 8813: [%s]NOT all segments have been received
Line 8820: [%s]Last segment is not received
Line 8936: [%s]LteRrcSi_ProcCmasValidityTimerExpiry : Invalid timer ID[%d].
Line 8940: [%s]LTERRC_T_WAIT_CMAS_%d Expired. discard all segment data.
Line 8971: [%s]ETWS : total received segment count is [%d]
Line 8981: [%s]ETWS : Memory alloc fail. try next time
Line 8991: [%s]ETWS : Need to check segment length. total[%d], current[%d]
Line 9033: [%s]CMAS : total received segment count is [%d]
Line 9043: [%s]CMAS : Memory alloc fail. try next time
Line 9053: [%s]CMAS : Need to check segment length. total[%d], current[%d]
Line 9093: [%s]CMAS : total received WAC segment count is [%d]
Line 9103: [%s]CMAS : Memory alloc fail. try next time
Line 9113: [%s]CMAS : Need to check segment length. total[%d], current[%d]
Line 9296: [%s]NULL ptr argument at LteRrcSi_CheckWarningMsgRxStatus()
Line 9333: [%s]Discard any buffered ETWS msg segment upon entering a cell.
Line 9347: [%s]Discard any buffered CMAS msg segment upon entering a cell.
Line 9416: [%s]Receive ETWS primary notification. send to upper layer
Line 9469: [%s]ETWS Secondary :: duplicate count reachs the max count[%d]. stop read SIB11
Line 9486: [%s]Receive all ETWS secondary notification. send to upper layer
Line 9547: [%s]CMAS :: duplicate count reachs the max count[%d]. stop read SIB12
Line 9565: [%s]CMAS : send CMAS notification to upper layer
Line 9646: [%s]LteRrcSi_ProcSib14 :: SIB for Extended access class barring feautre.
Line 9651: [%s]LteRrcSi_ProcSib14 :: SIB14 is only applicable for a Rel11 capable device.
Line 9686: [%s]LteRrcSi_ProcSib15 :: Duplicate SIB15.
Line 9690: [%s]LteRrcSi_ProcSib15 :: The IE SIB15 contains the MBMS ServiceAreaIdentities(SAI) of the current and/ or neighbouring carrier frequencies.
Line 9848: [%s]ConvertUtcToJulian :: Year(%d) is smaller than 2000. need to check.
Line 9860: [%s]ConvertUtcToJulian :: Could not get the local time from UTC.
Line 9865: [%s]ConvertUtcToJulian :: Year:%d, Mon:%d, Day:%d.
Line 9868: [%s]ConvertUtcToJulian :: Hour:%d, Min:%d, Sec:%d, DayOfWeek:%d
Line 9897: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 9938: [%s]LteRrcSi_ProcSib16 :: Duplicate SIB16.
Line 9942: [%s]LteRrcSi_ProcSib16 :: The IE SIB16 contains information related to the Coordinated Universal Time(UTC).
Line 9950: [%s]CLEAR OPFLAG :(%s-%s)
Line 9950: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 9967: [%s]CLEAR OPFLAG :(%s-%s)
Line 9967: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10647: [%s]pLteRrcDbMain->pTcellInfo == NULL => return
Line 10655: [%s]Invalid DbUpdateRlt (%d) => return
Line 10659: [%s]Received SIs(0x%X) in this target cell so far (0x%X)
Line 10772: [%s]Shade: Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10784: [%s]SET OPFLAG :(%s-%s)
Line 10784: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10791: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10797: [%s]No Tcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10813: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 10895: [%s]SET OPFLAG :(%s-%s)
Line 10895: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10903: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10921: [%s]SET OPFLAG :(%s-%s)
Line 10921: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 10928: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 10946: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 10989: [%s]Boundary IND rxed while doing Access.. it will be pending
Line 11063: [%s]SET OPFLAG :(%s-%s)
Line 11063: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11073: [%s]Scell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 11091: [%s]SET OPFLAG :(%s-%s)
Line 11091: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11098: [%s]Tcell!=Mcell ==> No read to SIB again, ignore Boundary Ind ==> Remove Mcell(New SIB will be read next time)
Line 11118: [%s]No Mcell when Boundary Ind comes, ignore Boundary Ind
Line 11220: [%s]CLEAR OPFLAG :(%s-%s)
Line 11220: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11253: [%s]Invalid State #d
Line 11287: [%s]NULL ptr argument at LteRrcSi_ProcSiModInd()
Line 11294: [%s]pCellSibDb(PCI:%d) != pLteRrcDbMain->pScellInfo(PCI:%d) in LteRrcSi_ProcSiModInd()
Line 11299: [%s]SI Modification IND via Paging
Line 11304: [%s]Paging should be pended in ACC state (implementation decision)
Line 11308: [%s]SET OPFLAG :(%s-%s)
Line 11308: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11311: [%s]CLEAR OPFLAG :(%s-%s)
Line 11311: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11323: [%s]LTERRC_MALLOC_FAIL : FILE:%s LINE:%d FUNC:%s
Line 11331: [%s]SIB Modification is indicated again while waiting boundary
Line 11335: [%s]SIB Modification is indicated for different cell before mod boundary
Line 11395: [%s]CLEAR OPFLAG :(%s-%s)
Line 11395: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11396: [%s]CLEAR OPFLAG :(%s-%s)
Line 11396: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11440: [%s]Paging Msg :: ETWS Ind included. Start ETWS Procedure
Line 11441: [%s]SET OPFLAG :(%s-%s)
Line 11441: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11447: [%s]Duplicate ETWS Ind. Ignore this.
Line 11451: [%s]ProcPaging - Restart SI timer.
Line 11463: [%s]Paging Msg :: CMAS Ind included. Start CMAS Procedure
Line 11464: [%s]SET OPFLAG :(%s-%s)
Line 11464: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11470: [%s]Duplicate CMAS Ind. Ignore this.
Line 11474: [%s]ProcPaging - Restart SI timer.
Line 11499: [%s]Paging Msg :: EAB_MOD included. Start read SIB1.
Line 11500: [%s]SET OPFLAG :(%s-%s)
Line 11500: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11524: [%s]Paging UEID matched %d
Line 11529: [%s]Paging Record included
Line 11538: [%s]Paging should be pended in ACC state (implementation decision)
Line 11548: [%s]Paging record received just after release msg
Line 11549: [%s]SET OPFLAG :(%s-%s)
Line 11549: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11553: [%s]Paging record received in CONN state => Trigger Force CSFB
Line 11562: [%s]Paging record received just after release msg
Line 11563: [%s]SET OPFLAG :(%s-%s)
Line 11563: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11571: [%s]Paging record received in CONN state => Check eNB
Line 11581: [%s]Paging record received in invalid state (%d)
Line 11589: [%s]SI Modification Ind included
Line 11594: [%s]Duplicate SI Modification Ind => Ignore
Line 11627: [%s]LteRrcSi_RemoveUnAvailSibCellList() is called
Line 11721: [%s]Unavailable Sib Cell Element (PCI %d) is removed 
Line 11753: [%s]LTERRC_NULL_PTR_ARGUMENT : FILE:%s LINE:%d FUNC:%s
Line 11770: [%s]Mcell(%d)(%d) is Freed Here
Line 11889: [%s]SET OPFLAG :(%s-%s)
Line 11889: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 11895: [%s]pTcellInfo is NULL NOW
Line 11955: [%s]CLEAR OPFLAG :(%s-%s)
Line 11955: [%s]LTERRC_OPFLAG_NULL_PTR : FILE:%s LINE:%d FUNC:%s
Line 12047: [%s]pTcellInfo is NULL NOW
Line 12152: [%s][CheckEabStatus :: pScellInfo is NULL.
Line 12160: [%s][CheckEabStatus :: SIB14 was broadcasted but not received yet.
