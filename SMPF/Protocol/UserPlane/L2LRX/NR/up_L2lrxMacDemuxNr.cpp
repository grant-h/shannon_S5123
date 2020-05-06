Line 153: [L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 153: [L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 157: [MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 157: [MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 159: [PDCP][MISSED:%d][DUP:%d|%d][OOW:%d|%d][PARSING_FAIL:%d|%d]
Line 159: [PDCP][MISSED:%d][DUP:%d|%d][OOW:%d|%d][PARSING_FAIL:%d|%d]
Line 166: [PDCP][PKTPROC_TP:%d(kbps)][DELIV:%d|%d][PKTPROC_START:%d][INVALID_PKT:%d]
Line 166: [PDCP][PKTPROC_TP:%d(kbps)][DELIV:%d|%d][PKTPROC_START:%d][INVALID_PKT:%d]
Line 203: L2_L2LMACRX_CLK_CHANGE_IND send fail
Line 247: [L2_MAC_PDU_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps, [L2_MAC_PDU_NUM][%d], [L2_RLC_PDU_NUM][%d],[L2_PDCP_PDU_NUM][%d]
Line 248: [MAC][INVALID_LCID:%d][PARSING_FAIL:%d][DISCARD:%d] [RLC][DUP:%d][OOW:%d][BigGap:%d][StatusQFull:%d]
Line 250: [PDCP][MISSED:%d][DUP:%d|%d][OOW:%d|%d][PARSING_FAIL:%d|%d]
Line 252: [PDCP][PKTPROC_TP:%d(kbps)][DELIV:%d|%d][PKTPROC_START:%d][INVALID_PKT:%d]
Line 267: L2LRXMAC_ReleaseRLCPDUDesc : nullptr == pRlcPduDesc
Line 296: L2LRXMAC_ReleaseRLCPDUDesc : nullptr pRlcPduDescStart(0x%X), pRlcPduDescEnd(0x%X)
Line 336:  InitRlcPduTable[%d/%d]
Line 340:  InitRlcPduTable[%d/%d] done
Line 384: [ERROR] L2LRXMAC_ProcMACPDU : pMacPduInfo is NULL
Line 391: L2LRXMAC_ProcMACPDU : DSDS Pause[%d]
Line 411: [ERROR] L2LRXMAC_ProcMACPDU : pMacPduInfo->PduAddr is NULL
Line 477: [ERROR] invlid dataType(%u) received!
Line 505: Invalid parameter
Line 513: sub-header's RR not zero
Line 536: [ERROR] lengthField=0
Line 552: [ERROR] lengthField=0
Line 651: [ERROR] lengthField=0
Line 667: [ERROR] Invalid LCID [%d]
Line 703: [ERROR] Discard rest of this Mac Pdu! (Mac Sdu size(%d) is larger than Mac Pdu size(%d))
Line 723: CR success. Process CCCH MAC PDU
Line 731: [ERROR] AllocMsg fail!
Line 744: [ERROR] AllocMsgBodyElem fail!
Line 754: [CCCH] RbId(%d) Length(%u) pString(0x%x) First two bytes(0x%x 0x%x)
Line 758: [ERROR] SendMsg fail!
Line 768: [ERROR] CR fail. Discard CCCH MAC PDU
Line 779: [ERROR] Invalid LCID RBID mapping! LCID[%d], RBID[%d]
Line 818: [L2LRX][ERROR] L2NR_SendRxRlcSdu fail!
Line 859: [ERROR] macSduLength[%d] is over max mac-ce length
Line 869: [ERROR] g_bMacSduRcvd[%d], g_uMacCePduCount[%d]
Line 882: [ERROR] Invalid Lcid:%d, g_uMacLcidInvalidPduCount[%d]
Line 897: [ERROR] Rlc Pdu queue full! Discard this PDU. g_RlcPduTableWd(%d),  g_RlcPduTableRd(%d)
Line 912: [ERROR] UF is already true! g_RlcPduTableWd(%d)
Line 939: [ERROR] pMacPduInfo->DescAddr is 0! Discard this PDU!
Line 974: [ERROR] wrong CPT(%d)
Line 998: [ERROR] Parse AMD fail!
Line 1025: [ERROR] Parse UMD fail!
Line 1041: [ERROR] Invalid RLC mode(%d)!
Line 1079: [ERROR] pRlcPdu is null
Line 1095: [ERROR] R-field != 0 (0x%02x)
Line 1126: [ERROR] wrong SnFieldLength(%u)
Line 1171: [ERROR] pRlcPdu is null
Line 1179: [ERROR] macSduLength = %d
Line 1213: [ERROR] wrong SnFieldLength(%u)
Line 1251: Ignore Mac PDU
Line 1264: [ERROR] RLC descriptor full
Line 1363: [ERROR] SizeMismatch !! MacEntity:%d, PduSize:%d, headerSize:%d, payloadSize:%d
Line 1410: [ERROR] Wrong data type(%d)!
Line 1424: [ERROR] Sending L2_L2LMACRX_DATA_IND Fail
Line 1456: [MSG2] ptr[0x%x], size[%d]
Line 1471: [MSG2] subheader : E[%d], T[%d], RAPID[%d]
Line 1489: |UE <- gNB| MSG2 : RAR (MacEntity[%d], UlSync[%d], RAPID[%d], TA[%d], TC-RNTI[%d])
Line 1489: |UE <- gNB| MSG2 : RAR (MacEntity[%d], UlSync[%d], RAPID[%d], TA[%d], TC-RNTI[%d])
Line 1491: [MSG2] m3 grant : HopFlag[%d], FreqAlloc[%d], TimeAlloc[%d], Mcs[%d], Tpc[%d], CsiReq[%d]
Line 1495: [MSG2] RAPID mis-matched!!! : MacEntity[%d], Sent[%d], Received[%d]
Line 1495: [MSG2] RAPID mis-matched!!! : MacEntity[%d], Sent[%d], Received[%d]
Line 1510: [MSG2] subheader RR is not zero !! : E[%d], T[%d], RR[%d]
Line 1517: [MSG2] subheader : E[%d], T[%d], BI[%d]
Line 1517: [MSG2] subheader : E[%d], T[%d], BI[%d]
Line 1558: [MSG2] L2LMACRACH_L2LMACRX_RAR_IND send fail
Line 1594: RD reset by LmacInit!
Line 1626: [ERROR] L2LRXMAC_ProcMACPDU : pMacPduInfo->PduAddr is NULL
Line 1650: MacEntity[%d] Lcid[%d] is over range
Line 1661: Set MacEntity[%d], LCID[%d], RBID[%d]
