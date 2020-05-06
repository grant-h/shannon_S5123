Line 115: LCID[%d] L2LTXRLC_ProcPdcpAck : bIsRequiredPdcpAckCheck[%d]
Line 124: LCID[%d] L2LTXRLC_ProcPdcpAck : RlcCurrentPtr=%x
Line 165: LCID[%d] L2LTXRLC_ProcPdcpAck : Invalid Q Link pNotScheduledUBuffer[%x], [%d/%d]
Line 181: LCID[%d] L2LTXRLC_ProcPdcpAck : Update LastCipherPtr = New RlcEndPtr[%x]
Line 186: LCID[%d] L2LTXRLC_ProcPdcpAck : LastCipherPtr == pOrgPdcpTxQ_RlcEndPtr[%x]
Line 190: LCID[%d] L2LTXRLC_ProcPdcpAck : dwFreeCnt[%d], dwFreeDataSize[%d]
Line 214: Fail pal_Malloc and Fail Send LTE_CRLC_MAX_RETX_IND!!!
Line 224: RLC Max Retransmission !!!
Line 268: RB_ID[%d] L1TXRLC Ignore Poll Data Retx Not Active State [%d]
Line 275:  RB_ID[%d] L1TXRLC Ignore Poll VT_S[%d]==VT_A[%d]
Line 304: RB_ID[%d] PDCP Queue empty but NewDataSize is not empty
Line 335: RB_ID[%d] Insert Nack : No more Data For Poll ::TxNACKElemPool FULL !! Re-estabilish Trigger VT_S = %d, VT_A = %d 
Line 384: RB_ID[%d]Insert Nack : No more Data For Poll rlc_pdu_bo = %d, VT_S = %d, VT_A = %d Nack %d
Line 394: RB_ID[%d]RLC For Poll Data==>trigger regular BSR
Line 416: RB_ID[%d]NACK[%d]Rlc Poll Re-estabilish Trigger [%d] VT_S %d VT_A %d
Line 512: RB_ID[%d]RLC Status Gen==>trigger regular BSR
Line 640: pSchInfo->SchedGrant[%d] < (pSchInfo->UsedGrant-pSchInfo->MacLFSize)[%d] !!!
Line 645: pSchInfo->UsedGrant[%d] < pSchInfo->MacLFSize[%d] !!!
Line 652: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 803: pStartDesc==NULL!!!
Line 881: pStartDesc is NULL !!!
Line 890: PayloadSize <= 0 !!!
Line 974: pSchInfo->RemainBo[%d] < PayloadSize[%d] !!!
Line 986: pSchInfo->RemainNewData[%d] < PayloadSize[%d] !!!
Line 994: pSchInfo->RemainNewData[%d] != 0!!!
Line 1015: pSchInfo->RemainRexData[%d] < PayloadSize[%d] !!!
Line 1031: pSchRltElem->CurPduType[%d] in invalid!!!
Line 1040: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d]!!!
Line 1053: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 1098: RBID[%d] NACK_PDU_SN:%d L2LTXRLC_GetReTxFirstnLastSDUDesc Wrong Argument !!
Line 1295: pSchInfo->pCurNackListElem==NULL!!!
Line 1554: tmptotalLen[%d] < pSchInfo->StatusGenSize[%d] !!!
Line 1563: pSchInfo->RemainBo[%d] < tmpUsedLen[%d] !!!
Line 1574: pSchInfo->SchedGrant[%d] < pSchInfo->UsedGrant[%d] !!!
Line 1913: pPdcpTxQ->RlcCurrentPtr==NULL!!!
Line 1919: RB_ID[%d]: Buffer Error!!! BO[%d], NewData[%d], RemainNewDat[%d]
Line 1947: RB_ID[%d]TX Winow overflow[%d %d]
Line 1965: RB_ID[%d]TX No More data to schedule
Line 2010: pSchRltElem->End_SDUDesc_Ptr->q_next==NULL!!!
Line 2057: RB_ID[%d]TX Winow overflow[%d %d %d]
Line 2070: RB_ID[%d]TX No More data to schedule
Line 2121: RLC UM RemainBO is 0!!!
Line 2150: RBID[%d] NACKList is Empty !!
Line 2154: RBID[%d] RLBO[%d] < RemainNewData[%d] !!
Line 2158: RBID[%d] PdcpTxQ.ReTxDataSize[%d] < RemainRexData[%d] !!
Line 2241: RBID[%d] pShedRlt:0x%x L2LTXRLC_CalculatePDUsize Wrong Argument !!
Line 2256: RBID[%d] L1TXRLC NOT ACTIVE[%d] ,No Data Schedule
Line 2277: RBID[%d] Pre Check Calcluate PDUSize CurIdx[%d], BO[%d]
Line 2559: RB_ID[%d]Poll Bit Set : Poll_SN = %d, TxSN %d,VT_A %d, VT_S %d
Line 2630: RB_ID[%d]Fail L1TX_GetDMADesc
Line 2673: RB_ID[%d]Fail L1TX_GetDMADesc
Line 2712: RB_ID[%d]ReTx Not Resg: TxSN %d,VT_A %d, VT_S %d
Line 2717: RB_ID[%d]ReTx Resg: TxSN %d,SO %d,Len %d,Last %d,VT_A %d, VT_S %d
Line 2724: RB_ID[%d]Generation RlcHeaderLength[%d] over MAX_RLC_HEADER_SIZE
Line 2747: RB_ID[%d]L1TX_GetDMADesc Fail !!
Line 2892: RB_ID[%d] UM Tx RLC Seq : %d, Num.of.SDU : %d, SI : %d
Line 3110: RB_ID[%d]Fail L1TX_GetDMADesc
Line 3136: RB_ID[%d]RLC TX Status ACK[%d] VR_MS %d,VR_R %d,VR_H %d
Line 3175: RB_ID[%d]RLC TX Status Reseg NACK[%d] SO %d,EO %d
Line 3181: RB_ID[%d]RLC TX Status NACK[%d]
Line 3199: RB_ID[%d]RLC TX Status Reseg NACK[%d] SO %d,EO %d
Line 3205: RB_ID[%d]RLC TX Status NACK[%d]
Line 3222: RB_ID[%d]Fail L1TX_GetDMADesc
Line 3535: RBID[%d] grant_size:%d UsedGrant:%d HARQ_ID:%d L2LTXRLC_GenPDU Wrong Argument !!
Line 3543: RBID[%d] InvalidState[%d] !!
Line 3615: RB_ID[%d] pPDU_Info->num_pdu[%d] > MAX_NUM_RLC_PDU_PER_ENTITY
Line 3669: RB_ID[%d]Error RLC Mode[%d]
Line 3676: RB_ID[%d] RLC PDU Gen Result Error : rb_cnt[%d], NumRlcPDU[%d]
Line 3704: DMADescPool.NumFree == 0 !!!
Line 3774: L1TX_DMADescPoolInit Initialize...
