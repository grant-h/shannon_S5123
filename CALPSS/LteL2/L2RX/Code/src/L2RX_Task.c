Line 194: [LTE_L2RX] L2HRXPDCP_Set_RRE_NrDrbBackupSN : DRB_ID[%d], RX_NEXT[%d], RX_DELIV[%d], RX_REORD[%d]
Line 206: [LTE_L2RX] L2HRXPDCP_Reset_RRE_NrDrbBackupSN : DRB_ID[%d], bClearAllDrb[%d]
Line 230: [LTE_L2RX] L2HRXPDCP_Forward_RRE_NrDrbBackupSN : DRB_ID[%d]
Line 255: [LTE_L2RX] L2HRXPDCP_Recover_RRE_NrDrbBackupSN : DRB_ID[%d] / Conv LCID[%d], RX_NEXT[%d], RX_DELIV[%d]
Line 305: [LTE_L2RX] L2HRXPDCP_ProcessPendingResume : Process PdcpResume.pMsgPendingDL
Line 328: [LTE_L2RX] L2HRXPDCP_ProcessPendingResume : no pending dl msg
Line 359: [LTE_L2RX] LTE_SendRxBearerInfoIndMsg Send(ReleaseF=%d, DRB_ID=%d, RX_NEXT=%d, RX_DELIV=%d, RX_REORD=%d, IsSrb=%d)
Line 364: [LTE_L2RX] LTE_SendRxBearerInfoIndMsg Send Fail!! (rst=%d)
Line 387: [LTE_L2RX] NRL2 requeseted the forced RRE to recover Data
Line 408: [LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : Invalid LCID(%d)
Line 416: [LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : Invalid configurtion RBID(%d) pBody->RB_ID (%d) IsSrb(%d)
Line 424: [LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : Conv RB_ID[%d], RX_NRPdcpEN == LTE_PDCP @@@@@@@@@@@@@@@@@@@@@@
Line 429: [LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg Conv RB_ID[%d], Rcv(DRB_ID=%d, RX_NEXT=%d, RX_DELIV=%d, RX_REORD=%d)
Line 435: [LTE_L2RX] L2HRXPDCP_ReceiveRxBearerInfoIndMsg : prev[ReorderingFunction:%d, pPdcpReoderTb:%d, Pdcp_RX_COUNT_backup:%d] 
Line 462: RB_ID[%d] PDCP RX activate due to Receive BearerInfo
Line 468: L2HRXPDCP_ReceiveRxBearerInfoIndMsg : pSnUpdateIndMsg malloc fail
Line 495: send LTE_CPDCP_DL_ENDC_RESET_CNF
Line 504: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_ENDC_RESET_CNF!!!
Line 524: send LTE_CPDCP_DL_RESET_CNF
Line 533: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RESET_CNF!!!
Line 560: send LTE_CPDCP_DL_RELEASE_ALL_CNF
Line 569: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_ALL_CNF!!!
Line 596: send LTE_CPDCP_DL_RELEASE_SCG_CNF
Line 605: Fail pal_Malloc and Fail Send LTE_CPDCP_DL_RELEASE_SCG_CNF!!!
Line 628: L2HRX_ResetAll IsNextRelease %d, ScgReset[%d]], RX SecurityBlockF[%d]
Line 678: [DS] PDCP Release without reset when 3G-4G opertaion
Line 717: [DS] PDCP Release without reset when 3G-4G opertaion
Line 751: LMAC_RX_SEC_BLOCKFLAG_GET[%d] PdcpMain.IsDrbDecipher[%d] PdcpMain.DecipherStackId[%d]!!!
Line 819: L2HRX_ResetCCRb[%d]
Line 855: L2HRX_ResetFullConfig(%d)
Line 973: L2HRX_FreePdcpRlcDescIf START - RD/WR[%d, %d]
Line 1002: L2HRX_FreePdcpRlcDescIf END - RD/WR[%d, %d]
Line 1029: RB_ID[%d] L2HRX_FreePdcpDescTblAll, VR_R[%d], VR_H_Backup[%d], VR_H[%d]
Line 1082: L2HRX_ReleaseAll
Line 1202: L2HRX_ReleaseAll
Line 1237: L2HRX_DRBRelease
Line 1331: SMC Message Error, cause=%d
Line 1361: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_SRB1
Line 1370: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_OTHER
Line 1379: ROHC DL Configuration for RB_OHTER_FULL_CONFIG
Line 1394: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_HO_ALL
Line 1403: ROHC DL Configuration for RB_HO_FULL_CONFIG
Line 1419: LTE_PDCP_DL_BEARER_RESUME_REQ :LTE_RB_SCG
Line 1494: L2RX PDCP Rxed LTE_PDCP_DL_BEARER_RESUME_REQ: Pending Request : %d
Line 1500: pMsgPendindResume : malloc fail
Line 1639: L2RX PDCP Rxed L2HRX_L1LC_RX_CNF
Line 1737: RB_ID[%d] L2PdcpRlcRxDataDescIf Full WD[%d], RD[%d]
Line 1748: RB_ID[%d]L2RXRLC TASK 1:NO ACTIVE[%d]
Line 1832: RB_ID[%d]L2HRXRLC_ProcT1TmrExIndMsg
Line 1838: RB_ID[%d]L2RXRLC TASK 2:NO ACTIVE[%d]
Line 1879: Fail pal_Malloc and Fail Send LTE_L2LTX_L2HTX_SRI_REQ!!! 
Line 1997: [LTE_L2RX] LTE_ProcL2HRxPdcpNrPdcpMsg Rcv L2HRX_NRPDCP_RB_CHANGE_IND, StackId[%d]
Line 2001: Fail pal_Malloc and Fail Send L2HRX_NRPDCP_RB_CHANGE_IND!!!
Line 2033: L2HRX_ForwardRrcMsg : pRRCmsg[%x], msgid[%x], trid[%x] 
Line 2038: LTE_PDCP_DATA_IND msg Send fail
Line 2112: RB_ID[%d]LTE_L2HRX_L2HRX_STATUS_PROHIBIT_TMR_EX_IND
Line 2115: RB_ID[%d]L2RXRLC TASK 3 :NO ACTIVE[%d]
Line 2147: LTE_L2HRX_L2LRX_RESET_IND, invalid resetCause[%d]
Line 2209: RB_ID[%d]LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND, But Empty
Line 2212: RB_ID[%d]LTE_L2HRX_L2HRX_PDCP_REORDER_TMR_EX_IND
Line 2216: RB_ID[%d]Pending PDCP reoredering timer exp due to decipher running
Line 2230: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ!!!
Line 2242: RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
Line 2408: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2414: LTE_L2HRX_HAL_SRB_AFTER_DECIPHER_IND : ( PdcpMain.bPendDcpReq == TRUE )
Line 2431: LTE_ProcL2HRxPdcpHalMsg : LTE_L2HRX_HAL_DRB_AFTER_DECIPHER_IND/LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ
Line 2443: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2448: RB_ID[%d]: Decipher Done But pLastDecipherDesc is NULL!!!
Line 2486: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2488: LTE_L2HRX_HAL_DRB_AFTER_DECIPHER_IND but DrbDecipher not flag !!!
Line 2655: RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
Line 2689: LTE_L2HRX_PKTPROC_DRB_DECIPHER_IND : ( PdcpMain.bPendDcpReq == TRUE )
Line 2730: RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
Line 3009: LTE_SendL2HRXMsgToL2 Fail msgid[%x]!!!
Line 3097: LTE_SendL2HRXMsgToRRC : pal_MsgSendTo Fail msgid[%x]!!!
Line 3111: LTE_SendL2HRXMsgToRRC : pal_SmSetEvents Fail msgid[%x]!!!
Line 3170: LTE_SendL2HRXMsgToL1LC Fail !!!
Line 3198: Not Send L2HRX_L1LC_RX_REQ (WatiCmd %d,CurCmd:%d)
Line 3203: [L2RX => L1LC] Send L2HRX_L1LC_RX_REQ (Cmd:%d)
Line 3210: Cannot Allocate L2HRX_L1LC_RX_REQ
