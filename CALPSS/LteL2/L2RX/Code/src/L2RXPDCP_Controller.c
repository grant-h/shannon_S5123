Line 160: DeCompresseResult RbId = %d, HeaderLen = %d, OrgPacketSize = %d,PayloadLen = %d
Line 182: L2ReceiveFeedback RbId = %d, FeedbackSize = %d
Line 268: L2HRXPDCP_Init
Line 319: RB_ID[%d]L2HRXPDCP_ReorderingTmr_Cb
Line 323: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND!!!
Line 363: L2RXPDCP Unexpected ChageState %d, L2RxState %d
Line 426: L2HRXPDCP_UpdateL2State ChageState %d, L2RxState %d
Line 483: After L2HRXPDCP_UpdateL2State L2RxState %d
Line 528: RB_ID[%d]L2RX Unexpected Action %d,PdcpRxRBState %d, L2RxState %d
Line 638: RB_ID[%d]L2RX Unexpected Action %d,PdcpRxRBState %d, L2RxState %d
Line 649: RB_ID[%d]L2RX Unexpected Action %d,PdcpRxRBState %d, L2RxState %d
Line 701: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ!!!
Line 713: Fail to send msg to L2HRX_HAL !!!
Line 718: RB_ID[%d]Send LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ!!! ReassemList[0x%x]/[NextP:0x%x]
Line 755: RoHC Reset Diff Log caller, msginfo %d %d
Line 773: DL MaxCId %d num_profiles %d
Line 776: Update RoHC Decomp Param for RB ID => %u
Line 786: Update RoHC Config Param Index => %u
Line 823: No RoHC Config Param Index is FREE to update
Line 873: RB_ID[%d]L2HRXPDCP_UpdateL2State Action %d,PdcpRxRBState %d, L2RxState %d
Line 910: RB_ID[%d]After L2HRXPDCP_UpdateL2State PdcpRxRBState %d, L2RxState %d
Line 939: L2HRXPDCP_SetupPdcpEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d/%d]
Line 959: RB_ID[%d]L2HRXPDCP_SetupPdcpEntity FAIL!! PdcpRxState[%d]==L2_NULL
Line 965: RB_ID[%d]L2HRXPDCP_SetupPdcpEntity FAIL!! rlcmode[%d] != parameters->rlcmode[%d]
Line 973: RB_ID[%d]L2HRXPDCP_SetupPdcpEntity FAIL!! Wrong maxSNWindowSize[%d][%d]
Line 981: RB_ID[%d]L2HRXPDCP_SetupPdcpEntity FAIL!! PdcpRxState[%d]!=L2_NULL
Line 1003: RB_ID[%d] L2HRXPDCP_Reset_RX_DELIV
Line 1014: RB_ID[%d] L2HRXPDCP_Set_RX_DELIV[%d]
Line 1024: RB_ID[%d] L2HRXPDCP_Get_RX_DELIV[%d]
Line 1046: RB_ID[%d] L2HRXPDCP_ResetStateVariable
Line 1092: L2HRXPDCP_SetupPdcpEntity IsModify %d, RB_ID %d, LC_ID %d/%d
Line 1096: L2HRXPDCP Configuration NOT SUPPORTED
Line 1145: PdcpReorderTbCntx is empty : L2HRXPDCP_SetupPdcpEntity
Line 1193: L2HRXPDCP_SetupPdcpEntity nr_pdcp_en %d, NRPdcp_in_LTE %d
Line 1227: L2HRXPDCP_SetupPdcpEntity AM PDCP_RX_18BIT_SN_configured %d, PDCP_15BIT_SN_configured %d, RX_SnSize %d
Line 1250: L2HRXPDCP_SetupPdcpEntity UM PDCP_RX_18BIT_SN_configured %d, PDCP_15BIT_SN_configured %d, RX_SNFormat %d
Line 1282: RB_ID[%d]L2HRXPDCP_SetupPdcpEntity FAIL!! Wrong State
Line 1287: RB_ID[%d]L2RXPDCP Config rlcmode %d, maxSNWindowSize %d,RohcF %d, VR_H[%d]/VR_H_Backup[%d]
Line 1317: L2HRXPDCP_SetupPdcpEntity No Security RB_ID[%d]
Line 1322: L2HRXPDCP_SetupPdcpEntity Security RB_ID[%d]
Line 1330: L2HRXPDCP_SetupPdcpEntity FAIL!! Invalid Integrity check for NR PDCP RB_ID[%]
Line 1357: RB_ID[%d]L2HRXPDCP_SetupPdcpEntity FAIL!! Wrong State at LTE_PDCP_ESTABLISH_FOR_FULL_CONFIG
Line 1413: RB_ID[%d] PDCP RX suspend due to RBType[%d]
Line 2063: RB_ID[%d]L2HRXPDCP_ReleasePdcpEntity ParamResetF %d, VR_H[%d]/VR_H_Backup[%d]
Line 2213: L2HRXPDCP_SetupSplitPdcpEntity RB_ID %d, LC_ID %d
Line 2218: L2HRXPDCP_SetupSplitPdcpEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 2225: RB_ID[%d]L2HRXPDCP_SetupSplitPdcpEntity Wrong RLC Mode[%d]!!
Line 2234: RB_ID[%d]L2HRXPDCP_SetupSplitPdcpEntity FAIL!! PdcpRxState[%d]!=L2_NULL
Line 2263: PdcpReorderTbCntx is empty : L2HRXPDCP_SetupSplitPdcpEntity
Line 2294: RB_ID[%d]L2HRXPDCP_SetupSplitPdcpEntity FAIL!! ROHC Configured
Line 2304: RB_ID[%d]L2HRXPDCP_SetupSplitPdcpEntity FAIL!! Wrong State
Line 2310: RB_ID[%d/%d]L2RXPDCP Config rlcmode %d, maxSNWindowSize %d,RohcF %d
Line 2347: RB_ID[%d]L2HRXPDCP_SetupSplitPdcpEntity FAIL!! Wrong State at LTE_PDCP_ESTABLISH_FOR_FULL_CONFIG
Line 2362: RB_ID[%d]: L2HRX_FreePdcpRlcDescIf START - RD/WR[%d, %d]
Line 2391: RB_ID[%d]: L2HRX_FreePdcpRlcDescIf END - RD/WR[%d, %d]
Line 2405: L2HRXPDCP_ReleaseAddPdcpEntity RBID %d LCID %d
Line 2410: L2HRXPDCP_ReleaseAddPdcpEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 2434: L2HRXPDCP_ReleaseAddPdcpEntity backup RB_ID[%d] RX_HFN = %d, VR_H = %d, dwRX_DELIV/Valid=[%d/%d]
Line 2439: L2HRXPDCP_ReleaseAddPdcpEntity : LMAC_RX_SEC_BLOCKFLAG_GET()=%d
Line 2444: L2HRXPDCP_ReleaseAddPdcpEntity : Fail to get LCID(%d) from DRBID(%d)
Line 2447: L2HRXPDCP_ReleaseAddPdcpEntity restore RB_ID[%d] RX_HFN = %d, VR_H = %d
Line 2451: L2HRXPDCP_ReleaseAddPdcpEntity restore RB_ID[%d] RX_HFN = %d, VR_H = %d
Line 2489: L2HRXPDCP_ModifyDCSpecificDRB RBID %d LCID %d
Line 2494: L2HRXPDCP_ModifyDCSpecificDRB FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 2618: RB_ID[%d] L2HRXPDCP_GetConfigParams Invalid DRB ID[%d]
Line 2645: RB_ID[%d] L2HRXPDCP_GetConfigParams : DRB_ID=%d, RX_NRPdcpEN is invalid
Line 2677: RB_ID[%d] L2HRXPDCP_GetConfigParams : DRB_ID=%d, usedNrPdcp is invalid
Line 2695: L2HRXPDCP_GetConfigParams : DRB_ID[%d], RB_TYPE[%d/%d][LTE=1,NR=2,SPLIT=3], Conv LCID[%d/%d], SnSize[%d/%d]
Line 2729: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_CONFIG_CNF!!!
Line 2743: invalid rb_cnt[%d]!!!
Line 2762: L2HRXPDCP_CfgRxController : AfterRRE == TRUE
Line 2966: RB_ID[%d]L2HRXPDCP_IntegrityCheckReqContoller
Line 2983: Fail pal_Malloc and Fail Send LTE_CPDCP_INTEGRITY_CHECK_CNF!!!
Line 2999: Received SMC MAC-I zero!!!!!!!!!!!
Line 3023: Fail pal_Malloc and Fail Send LTE_CPDCP_INTEGRITY_CHECK_CNF!!!
Line 3082: [LTE_L2RX] L2HRXPDCP_SecurityConfigReqContoller NR No Security RB_ID[%d]
Line 3086: [LTE_L2RX] L2HRXPDCP_SecurityConfigReqContoller NR Security RB_ID[%d], stciphAlgo[%d]
Line 3096: [LTE_L2RX] L2HRXPDCP_SecurityConfigReqContoller RX_NRPdcpEN=FALSE, NR Security bCipheringPresent[%d] RB_ID[%d]
Line 3153: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_SECURITY_CONFIG_CNF!!!
Line 3157: L2RX Cur->IP Alog %d, CP Alog %d :: Prev->CP Alog %d
Line 3161: L2RX IP NULL, CP NOT NULL
Line 3205: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_SECURITY_CONFIG_CNF!!!
Line 3209: L2RX Cur->CP Alog %d :: Prev->CP Alog %d
