Line 122: L2HTXPDCP_QueueParmeterInit
Line 156: L2HTXPDCP_QueueInit
Line 202: L2HTXPDCP_Init
Line 265: RB_ID[%d]L2HTXPDCP_UpdateState Action %d,PdcpTxRB State %d,L2TxState %d
Line 276: RB_ID[%d]After L2HTXPDCP_UpdateState PdcpTxRB State %d,L2TxState %d
Line 479: RB_ID[%d]L2HTXPDCP_UpdateState Rlt == FALSE
Line 485: RB_ID[%d]After L2HTXPDCP_UpdateState PdcpTxRB State %d,L2TxState %d
Line 504: RB_ID[%d] L2HTXPDCP_ResetStateVariable
Line 549: L2HTXPDCP_SetupPdcpEntity IsModify %d, RBID %d LCID %d/%d
Line 555: L2HTXPDCP_SetupPdcpEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d/%d] EPS_ID %d
Line 563: L2HTXPDCP_SetupPdcpEntity :: gSchedListPrev not empty
Line 619: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity FAIL!! PdcpTxState[%d]==L2_NULL
Line 626: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity FAIL!! pL2PdcpTx->rlcmode[%d] != parameters->rlcmode[%d]
Line 634: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity FAIL!! Wrong maxSNWindowSize[%d][%d]
Line 643: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity FAIL!! PdcpTxState[%d]!=L2_NULL
Line 658: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity NOT SUPPORT!!
Line 725: L2HTXPDCP_SetupPdcpEntity nr_pdcp_en %d, NRPdcp_in_LTE %d
Line 758: L2HTXPDCP_SetupPdcpEntity AM PDCP_TX_18BIT_SN_configured %d, PDCP_15BIT_SN_configured %d, TX_SnSize %d
Line 782: L2HTXPDCP_SetupPdcpEntity UM PDCP_TX_18BIT_SN_configured %d, PDCP_15BIT_SN_configured %d, TX_SNFormat %d
Line 831: UL MaxCId %d num_profiles %d
Line 861: L2HTXPDCP_SetupPdcpEntity No Security RB_ID[%d]
Line 866: L2HTXPDCP_SetupPdcpEntity Security RB_ID[%d]
Line 874: L2HTXPDCP_SetupPdcpEntity FAIL!! Invalid Integrity check for NR PDCP RB_ID[%]
Line 886: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity FAIL!! Wrong State
Line 892: RB_ID[%d]L2HTXPDCP Config :rlcmode %d,discard_timer %d,maxSNWindowSize %d,RohcF %d
Line 906: RB_ID[%d]L2HTXPDCP_SetupPdcpEntity FAIL!! Wrong State at LTE_PDCP_ESTABLISH_FOR_FULL_CONFIG
Line 953: RB_ID[%d] PDCP TX suspend due to RBType[%d]
Line 963: !!!!!!!!!!!!!! PDCPTX==SUSPEND, RLCTX==RLC_ACTIVE
Line 968: RB_ID[%d] RLC TX Activate due to RBType[%d]
Line 1009: RB_ID[%d]L2HTXPDCP_ReleasePdcpEntity QClearF %d, ParamResetF %d
Line 1012: L2HTXPDCP_ReleasePdcpEntity FAIL!! Invalid RB_ID[%d] 
Line 1236: L2HTXPDCP_SetupSplitPdcpEntity RBID %d LCID %d
Line 1243: L2HTXPDCP_SetupSplitPdcpEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d] EPS_ID %d
Line 1251: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity Wrong RLC Mode[%d]!!
Line 1267: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity FAIL!! PdcpTxState[%d/%d]!=L2_NULL
Line 1387: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity FAIL!! ROHC Configured
Line 1432: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity FAIL!! Wrong State
Line 1439: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity FAIL!! Wrong State
Line 1445: RB_ID[%d/%d]L2HTXPDCP Config :rlcmode %d,discard_timer %d,maxSNWindowSize %d,RohcF %d
Line 1461: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity FAIL!! Wrong State at LTE_PDCP_ESTABLISH_FOR_FULL_CONFIG
Line 1468: RB_ID[%d]L2HTXPDCP_SetupSplitPdcpEntity FAIL!! Wrong State at LTE_PDCP_ESTABLISH_FOR_FULL_CONFIG
Line 1499: RB_ID[%d]L2HTXPDCP_Reset
Line 1582: L2HTXPDCP_ReleaseAddPdcpEntity RBID %d LCID %d
Line 1589: L2HTXPDCP_ReleaseAddPdcpEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d] EPS_ID %d
Line 1606: L2HTXPDCP_ReleaseAddPdcpEntity backup RB_ID[%d]/LCID[%d] TX_HFN = %d, VT_S = %d
Line 1613: L2HTXPDCP_ReleaseAddPdcpEntity RB_ID[%d/%d], State[%d/%d]
Line 1622: L2HTXPDCP_ReleaseAddPdcpEntity : Fail to get LCID(%d) from DRBID(%d)
Line 1630: L2HTXPDCP_ReleaseAddPdcpEntity restore RB_ID[%d] TX_HFN = %d, VT_S = %d
Line 1658: L2HTXPDCP_ModifyDCSpecificDRB RBID %d LCID %d
Line 1665: L2HTXPDCP_ModifyDCSpecificDRB FAIL!! Invalid RB_ID[%d] LC_ID[%d] EPS_ID %d
Line 1749: RB_ID[%d] L2HTXPDCP_GetConfigParams Invalid DRB ID[%d]
Line 1776: RB_ID[%d] L2HTXPDCP_GetConfigParams : DRB_ID=%d, TX_NRPdcpEN is invalid
Line 1808: RB_ID[%d] L2HTXPDCP_GetConfigParams : DRB_ID=%d, usedNrPdcp is invalid
Line 1826: L2HTXPDCP_GetConfigParams : DRB_ID[%d], RB_TYPE[%d/%d][LTE=1,NR=2,SPLIT=3], Conv LCID[%d/%d], SnSize[%d/%d]
Line 1869: Send LTE_CPDCP_UL_CONFIG_CNF!!!
Line 1876: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_CONFIG_CNF!!!
Line 1886: invalid rb_cnt[%d]
Line 1905: L2HTXPDCP_CfgTxController : AfterRRE == TRUE
Line 2041: [LTE_L2TX] L2HTXPDCP_CfgTxController - LTE_PDCP_RELEASE: Conv RB_ID[%d], Tx_rbTypeEndc[%d] (6:LTE_MCG_ToSCG)
Line 2150: [LTE_L2TX] L2HTXPDCP_SecurityConfigReqContoller NR No Security RB_ID[%d]
Line 2154: [LTE_L2TX] L2HTXPDCP_SecurityConfigReqContoller NR Security RB_ID[%d], stciphAlgo[%d]
Line 2164: [LTE_L2TX] L2HTXPDCP_SecurityConfigReqContoller TX_NRPdcpEN=FALSE, NR Security bCipheringPresent[%d] RB_ID[%d]
Line 2204: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_SECURITY_CONFIG_CNF!!!
Line 2208: L2TX Cur->IP Alog %d, CP Alog %d :: Prev->CP Alog %d
Line 2252: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_SCG_SECURITY_CONFIG_CNF!!!
Line 2256: L2TX SCG Cur->CP Alog %d :: Prev->CP Alog %d
Line 2259: L2TX SCG CP NOT NULL
Line 2289: Fail pal_Malloc and Fail Send LTE_PDCP_COUNT_VALUE_RSP!!!
