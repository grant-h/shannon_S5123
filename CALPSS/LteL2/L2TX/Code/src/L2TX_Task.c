Line 160: [LTE_L2TX] L2HTXPDCP_Set_RRE_NrDrbBackupSN : DRB_ID[%d], TX_NEXT[%d]
Line 169: [LTE_L2TX] L2HTXPDCP_Reset_RRE_NrDrbBackupSN : DRB_ID[%d], bClearAllDrb[%d]
Line 186: [LTE_L2TX] L2HTXPDCP_Forward_RRE_NrDrbBackupSN : DRB_ID[%d]
Line 201: [LTE_L2TX] L2HTXPDCP_Recover_RRE_NrDrbBackupSN : DRB_ID[%d] , Conv LCID[%d], TX_NEXT[%d]
Line 241: [LTE_L2TX] L2HTXPDCP_ProcessPendingResume : Process Resume HISR
Line 279: [LTE_L2TX] LTE_SendTxBearerInfoIndMsg Send(ReleaseF=%d, DRB_ID=%d, TX_NEXT=%d, IsSrb=%d)
Line 284: [LTE_L2TX] LTE_SendTxBearerInfoIndMsg Send Fail!! (rst=%d)
Line 298: RB_ID[%d] bWaitRxSnForStatusReport/bWaitTxSnForStatusReport[%d/%d], ePendingStatusReport[%d] 
Line 341: [LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg Conv LCID[%d] Status Report triggers regular BSR
Line 357: RB_ID[%d] PDCP/RLC TX Activate due to Status Report
Line 364: RB_ID[%d] RLC TX Display State[%d]
Line 382: [LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : Force RRE
Line 409: [LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : Invalid LCID(%d)
Line 416: [LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : Invalid configurtion RBID(%d) pBody->RB_ID (%d) IsSrb(%d)
Line 425: [LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg : RB_ID[%d], TX_NRPdcpEN == LTE_PDCP @@@@@@@@@@@@@@@@@@@@@@
Line 441: [LTE_L2TX] L2HTXPDCP_ReceiveTxBearerInfoIndMsg RB_ID/HFN/VT_S[%d/%d/%d], Rcv(RB_ID=%d, TX_NEXT=%d, IS_SRB=%d)
Line 473: send LTE_CPDCP_UL_ENDC_RESET_CNF
Line 482: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_ENDC_RESET_CNF!!!
Line 534: send LTE_CPDCP_UL_RESET_CNF
Line 543: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RESET_CNF!!!
Line 563: send LTE_CPDCP_UL_RELEASE_ALL_CNF
Line 572: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RELEASE_ALL_CNF!!!
Line 593: send L2HTXPDCP_SendReleaseSCGCnf
Line 602: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RELEASE_SCG_CNF!!!
Line 627: L2HTXPDCP_ReleaseSchedListPrev
Line 632: RB_ID[%d] Remove SchedListPrev
Line 642: PriorityElem==NULL !!
Line 682: RBID[%d]PdcpTxState %d
Line 717: L2HTXPDCP_ReleaseAllFinal
Line 767: UBUFFER NOT Empty %d
Line 805: L2HTXPDCP_ReleaseSCGFinal
Line 851: L2HTXPDCP_ResetAllRb:ScgEntity[%d]
Line 919: RB_ID[%d]PDCP TX At Release Discard Ctl PDU
Line 1145: L2HTXPDCP_ReleaseAll, Stack[%d], SCGOnly[%d]
Line 1173: L2HTXPDCP_DRBRelease
Line 1200: RB_ID[%d]PDCP TX At Release Discard Ctl PDU
Line 1239: Fail pal_Malloc and Fail Send LTE_CPDCP_UL_RESET_CNF!!!
Line 1265: L2TXPDCP At reset :: gSCGSchedListPrev not pmpty
Line 1273: L2TXPDCP At reset :: gSchedListPrev not pmpty
Line 1301: L2TXPDCP At reset :: gSchedListPrev not pmpty
Line 1305: L2HTXPDCP_ResetFullConfig(%d):Stack[%d]
Line 1353: RB_ID[%d]at full configuration reset(UL PDCP), discard control PDU
Line 1434: Discard_Q_Count[%d]
Line 1473: Discard_PDCP PDU_Count[%d]
Line 1526: L2HTXPDCP_StatusPduHisr !!! 
Line 1556: RB_ID[%d]L2HTXPDCP_Resume, PDCP status prohibit(%d)
Line 1640: RB_ID[%d]Resume PDCP triggers regular BSR
Line 1667: L2HTXPDCP_ResumeHisr !!! 
Line 1726: RB_ID[%d] Received LTE_L2HTX_L2HRX_RX_SN_UPDATE_IND
Line 1747: RB_ID[%d]L2TX PDCP Rxed LTE_PDCP_STATUS_PDU_IND Msg
Line 1768: RB_ID[%d] PDCP_CTL_ROHC_FEEDBACK handled at the L2HRX
Line 1846: RB_ID[%d] Wrong LTE_PDCP_CTL_PDU_TYPE[%d]
Line 1915: Wrong LTE_L2HTX_L2LTX_RESET_IND resetcause[%d]
Line 1935: Conv LCID[%d] LTE_L2HTX_L2LTX_RLC_REEST_NTF : bIsReqRbReleaseAdd[%d]
Line 1942: LCID[%d] LTE_L2HTX_L2LTX_RLC_REEST_NTF : bIsReqIgnoreCipIntr = TRUE
Line 1956: LCID[%d] RLC TX Activate due to LTE_L2HTX_L2LTX_RLC_REEST_NTF
Line 2067: L2TX PDCP Rxed L2HTX_L1LC_TX_CNF : CipherPendF(%d)
Line 2125: PDCP_CfgCnf is NULL!!!
Line 2131: L2TX PDCP Rxed LTE_PDCP_COUNT_VALUE_REQ Msg
Line 2191: RB_ID[%d]L2TX PDCP Rxed LTE_PDCP_SECURITY_DATA_REQ Msg
Line 2213: L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_SRB1 Msg
Line 2225: L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_OTHER Msg
Line 2238: L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_OTHER Msg - Pending Resume HISR
Line 2259: L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_HO_ALL Msg
Line 2277: L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_HO_ALL Msg - Pending Resume HISR
Line 2294: L2TX PDCP Rxed LTE_PDCP_UL_BEARER_RESUME_REQ:LTE_RB_SCG Msg
Line 2432: L2TX PDCP Rxed LTE_ProcL2HTxHalPendSolIndEvent Event
Line 2447: CiphAlg Changed to NULL
Line 2515: LCID[%d] LTE_L2HTX_HAL_CIPHER_DONE_IND : bIsReqIgnoreCipIntr == TRUE 
Line 2552: RB_ID[%d] Release Data Recovery :: Remove[SRV:%d Head:0x%x Rohc:%d state %d]
Line 2561: PDCP TX not null state[%d] gSchedListPrev not empty
Line 2573: LMAC_PDCP_CIPHER_PENDFLAG_SET
Line 2599: RB_ID[%d] Release Data Recovery :: Remove[SRV:%d Head:0x%x Rohc:%d state %d]
Line 2615: LMAC_PDCP_CIPHER_PENDFLAG_SET
Line 2627: LMAC_PDCP_CIPHER_PENDFLAG_SET
Line 2642: WARN >> Cipher-done<>CipherReq Race Around !! RBID(%d), CipherStackId(%d) PendCipherStack(%d)
Line 2703: [LTE_L2TX] LTE Send L2_LTEPDCP_LTE_UL_RLCBO_CNF Msg Fail!! (rst=%d)
Line 2719: [LTE_L2TX] LTE_ProcL2HTxPdcpNrPdcpMsg : L2HTX_NRPDCP_NR_UL_PDCPBO_UPDATE_IND RB_ID[%d] is not split bearer!!
Line 3153: Not Send L2HTX_L1LC_TX_REQ (WatiCmd %d,CurCmd:%d)
Line 3164: [L2HTX => L1LC] Send L2TX_L1LC_TX_REQ (Cmd:%d)
Line 3172: Cannot Allocate Message buffer
