Line 107: L2LTXRLC_ResetPduTb
Line 195: L2LTXRLC_Init
Line 249: Dummy RLC print [%x][%x][%x]!
Line 273: RB_ID[%d]Poll Timer Expired !! Poll SN %d ,VT_S %d, VT_A %d
Line 278: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2LTX_L2LTX_POLL_TMR_EX_IND!!! 
Line 335: RB_ID[%d]L2LTXRLC_DiscardAckedPdu
Line 348: pPdcpTxQ->head is NULL
Line 356: ppDiscardSduPtr malloc fail
Line 368: pNackListElem->NACK_PDU_SN[%d] out of range!!!
Line 444: pNackList is empty
Line 496: RB_ID[%d]Selective ACK Discard VT_S %d Discard SN %d
Line 543: L2LTXRLC_SetupRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 567: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! SubState[%d]==RLC_NOT_ACTIVE
Line 574: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! RlcMode[%d]!=parameters->ulConfig.ulInfo.mode[%d]
Line 583: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! Wrong UM sn_field_length[%d][%d]
Line 593: RB_ID[%d]L2LTXRLC_SetupRlcEntity FAIL!! pL1RlcTx->SubState[%d]!=RLC_NOT_ACTIVE
Line 637: L2LTXRLC_SetupRlcEntity LC_ID %d/%d, RB_ID %d, Type %d
Line 742: RLC_SNMAP_MALLOC feature is not enabled
Line 760: RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d, ExtLI[%d] ExtSN[%d]
Line 771: RB_ID[%d]L1TXRLC Config UM sn_field_length %d
Line 849: RB_ID[%d]Forced RLC AM Config to t_poll(45ms), max_retx(8)
Line 861: LT12Report timer start [%d]
Line 869: RB_ID[%d] RLC TX suspend due to nr_pdcp_en==2
Line 917: RB_ID[%d]L2LTXRLC_ReleaseRlcEntity
Line 921: L2LTXRLC_ReleaseRlcEntity FAIL!! Invalid RB_ID[%d] 
Line 1006: RB_ID[%d]L2LTXRLC_Reset
Line 1076: L2LTXRLC_ReleaseAll,Stack[%d], SCGEntity[%d]
Line 1149: LT12Report timer Stop
Line 1352: L2LTXRLC_SetupSplitRlcEntity LC_ID %d/%d, RB_ID %d, Type %d
Line 1359: L2LTXRLC_SetupSplitRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1365: RB_ID[%d]L2LTXRLC_SetupSplitRlcEntity Wrong RLC Mode[%d/%d]!!
Line 1469: RLC_SNMAP_MALLOC feature is not enabled
Line 1538: RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
Line 1542: SCG_RB_ID[%d]L1TXRLC Config AM timerPoll_retransmit %d,poll_byte %d,poll_PDU %d,max_retransmit_no %d,ExtLI[%d] ExtSN[%d]
Line 1609: L2LTXRLC_ModifyRlcEntity LC_ID %d/%d, RB_ID %d, Type %d, rlc_reest_v1510 %d bReqReleaseAndAdd %d
Line 1617: L2LTXRLC_ModifyRlcEntity FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1661: L2LTXRLC_ModifyRlcEntity : LTE_L2HTX_L2LTX_RLC_REEST_NTF malloc fail
Line 1689: L2LTXRLC_ModifyDCSpecificDRB LC_ID %d/%d, RB_ID %d, Type %d
Line 1704: L2LTXRLC_ModifyDCSpecificDRB FAIL!! Invalid RB_ID[%d] LC_ID[%d]
Line 1893: pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1901: pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1908: RB_ID[%d]MUI Confirm PdcpSn %d, MUI %d
Line 1928: RRC_SERVICE pSduDesc == NULL in L1TXRLC_FreeBuffer()
Line 1935: RB_ID[%d]MUI Confirm PdcpSn %d, MUI %d
Line 1949: pSduDesc == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1957: pSduDesc->q_next == NULL in L1TXRLC_FreeBuffer(), RB_ID[%d]
Line 1971: RB_ID[%d] Free Ack recieved SDU#[%d] Q_Count[%d/%d]
Line 2022: RB_ID[%d], AckSN[d] pLastSegDesc==NULL !!!
Line 2113: RB_ID[%d] RX RLC Status ACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
Line 2120: RB_ID[%d] RX RLC Wrong Status ACK[%d]<VT_A[%d] VT_S[%d]
Line 2129: RB_ID[%d] RX RLC Wrong Status ACK[%d] LAST NACK[%d] VT_A[%d] VT_AH[%d] VT_S[%d]
Line 2137: RB_ID[%d] NackList Empty : VT_A[%d], VT_AH[%d]
Line 2148: RB_ID[%d] RX RLC Wrong Status ACK[%d]>VT_S[%d] VT_A[%d]
Line 2172: RB_ID[%d] rlc_pdu_bo[%d] < OrgReTxDataSize[%d]
Line 2193: RB_ID[%d] RX RLC Wrong Status ACK/NACK[%d/%d] VT_A[%d] VT_S[%d]
Line 2215: RB_ID[%d] RX RLC Status NACK[%d] SO[%d] EO[%d]
Line 2220: RB_ID[%d] endoffset[%d] < startoffset[%d]
Line 2229: RB_ID[%d] RX RLC Wrong Status Offest NACK[%d] SO[%d] EO[%d] PduLength[%d]
Line 2241: RB_ID[%d] RX RLC wrong order NACK(%d>=%d) offset(End>=start)
Line 2255: RB_ID[%d]RX RLC Status NACK[%d]
Line 2263: RB_ID[%d] RX RLC wrong order NACK(%d>=%d)
Line 2275: RB_ID[%d] PDULength[%d] < POffset_BYTE[%d]
Line 2282: RB_ID[%d] Ignore Rx Status
Line 2302: RB_ID[%d]Poll Timer Stop Poll_SN %d ACK %d VT_A %d VT_S %d
Line 2314: RB_ID[%d] NackList->pFirstElem==NULL!!!
Line 2337: RB_ID[%d]RLC Rx Status==>trigger regular BSR
Line 2356: RB_ID[%d]RLC Re-estabilish2 Trigger VT_S %d VT_A %d
