Line 235: pSduDesc is NULL !!!
Line 290: RxSDUDescPool FULL !!!
Line 298: pal_Malloc==NULL :L2HRXPDCP_GetSduDesc Fail  !!!
Line 348: RxSDUDescPool FULL !!!
Line 388: L2HRXPDCP_DiscardSdu
Line 406: Link Error :: No LastSeg Link
Line 443: Error :: Pdcp Rx too long PDU
Line 655: RB_ID[%d]pal_Malloc Fail, discardsize[%d]
Line 661: RB_ID[%d]CtrlSize[%d] is wrong !!
Line 671: RB_ID[%d]pal_Malloc Fail for CtrlPDU
Line 699: RB_ID[%d]Invalid PDCP Rohc Fb Not Config
Line 714: RB_ID[%d]pal_Malloc Fail for CtrlPDU
Line 723: RB_ID[%d]Too Long PDCP ROHC Fb Len %d
Line 770: RB_ID[%d] L2HRXPDCP_ProcRohRlt Error : IsUsed[%d]
Line 774: RB_ID[%d] RoHC Packet length HDR Length %d   orginal pkt size %d Payload %d  
Line 789: IP Hdr after decoding:
Line 794: RB_ID[%d] L2HRXPDCP_GetSduDesc Fail: RohRlt Fail
Line 800: HDRLEN is Zero,  RoHC profile zero case!!
Line 942: [ROHC] DM Param : RB ID : %u De-comp Context Id : %u 
Line 967: [ROHC] No. of De-compression Profiles : %u
Line 1042: RB_ID[%d] L2HRXPDCP_GetSduDesc Fail: Rohc Start Fail
Line 1049: RB_ID[%d]RoHC DECOMP RESULT %s
Line 1077: RB_ID[%d]RoHC Decom Success!!
Line 1081: RB_ID[%d]RoHC DECOMP RESULT %s
Line 1108: RB_ID[%d]RoHC DECOMP RESULT %s !!
Line 1124: RB_ID[%d]RoHC Decom Success!! and just one SDU
Line 1132: RB_ID[%d]RoHC DECOMP RESULT %s
Line 1433: RB_ID[%d] PdcpRxExtIfQ Link Error !!!
Line 1443: RB_ID[%d] PdcpRxExtIfQ Link Error pdcp_rx_desc_ptr == NULL!!!
Line 1487: RB_ID[%d] Cannot find SID RB_ID[%d]
Line 1501: RB_ID[%d] discard!! because of wrong sid
Line 1535: RB_ID[%d] Already MacHeader Insert
Line 1622: RB_ID[%d]IsReFlush[%d] Reordering[%d] Before CheckReorderTb curVR_H %d curVR_R %d NextSubmItSn %d
Line 1718: RB_ID[%d] PdcpReorderTb Init
Line 1764: RB_ID[%d]IsReFlush[%d]After CheckReorderTb curVR_H %d curVR_R %d NextSubmItSn %d, ReorderingCOUNT_Sn %d
Line 1792: RB_ID[%d] PdcpReorderTb Init
Line 1799: RB_ID[%d]IsReFlush[%d]After CheckReorderTb curVR_H %d curVR_R %d NextSubmItSn %d, ReorderingCOUNT_Sn %d
Line 1848: LTE_PDCP_DATA_IND malloc Fail
Line 1856: LTE_PDCP_DATA_IND malloc Fail
Line 1865: RB_ID[%d]Rx SIB PDU SecCheckComp %d, NeedMacICheck %d, Rx SIB PDU MACI 0x%x 0x%x 0x%x 0x%x
Line 1906: RB_ID[%d]Fail to send LTE_PDCP_DATA_IND msg!!
Line 1955: RB_ID[%d] Error Decipher Done But No Data Link!!!
Line 1973: RB_ID[%d] Error Decipher Done But pLastDecipherDesc is Empty!!!
Line 1980: RB_ID[%d] gL2PdcpRlcRxDataDescIf[%d] StackId is not matched Decipher done StackId (%d, %d)!!!
Line 2161: Link Error :: No LastSeg Link
Line 2189: RB_ID[%d] DlRrcMsqDesc=0x%x :L2HRXPDCP_ProcDecipherDone Wrong Aug!!!
Line 2212: RB_ID[%d] PdcpMain.pLastDecipherDesc is NULL!!!
Line 2218: RB_ID[%d] Error Decipher Done But No Data Link!!!, pal_ListIsEmpty(&pPdcpIf->SduLink)=(%d)
Line 2224: RB_ID[%d] Error Decipher Done But pLastDecipherDesc is Empty!!!
Line 2230: RB_ID[%d] gL2PdcpRlcRxDataDescIf[%d] StackId is not matched Decipher done StackId (%d, %d)!!!
Line 2276: RB_ID[%d] Error Decipher Done But No Data Link!!!
Line 2294: RB_ID[%d] Error Decipher Done But pLastDecipherDesc is Empty!!!
Line 2300: RB_ID[%d] gL2PdcpRlcRxDataDescIf[%d] StackId is not matched Decipher done StackId (%d, %d)!!!
Line 2320: L2HRXPDCP_ProcPktProcDIT: Start[0x%x], End[0x%x]/Lastseg[%d]
Line 2361: RB_ID[%d] PdcpReorderTb Init
Line 2368: RB_ID[%d] After CheckReorderTb curVR_H %d curVR_R %d NextSubmItSn %d
Line 2428: L2HRXPDCP_ProcDRBAfterPktProc: Start[0x%x], End[0x%x], RSV[%d]/TCPIP[%d]
Line 2446: L2HRXPDCP_ProcDRBAfterPktProc : PktProc Error[%x]
Line 2452: NumofPacket:[Reorder:%d]/[RSV:%d]
Line 2649: L2HRXPDCP_ProcDecipherDone : ( PdcpMain.bPendDcpReq == TRUE )
Line 2658: RB_ID[%d] DlRrcMsqDesc=0x%x :L2HRXPDCP_ProcDecipherDone Wrong Aug!!!
Line 2669: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2690: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2702: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2704: RB_ID[%d]Fail pal_Malloc and Fail Send  LTE_L2HRX_HAL_SRB_AFTER_DECIPHER_IND!!!
Line 2721: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2723: RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
Line 2741: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2743: RB_ID[%d]Fail pal_Malloc and Fail Send  LTE_L2HRX_HAL_DRB_AFTER_DECIPHER_IND!!!
Line 2771: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 2773: RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
Line 2853: RB_ID[%d] DlRrcMsqDesc=0x%x :L2HRXPDCP_ProcIntegrityVerificationDone Wrong Aug!!!
Line 2879: RB_ID[%d]L2RXPDCP MAC-I: Cal(0x%x), Rcv(0x%x), FAILURE_CNT(CONFIG/CHECK)[%d/%d]
Line 2906: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_CPDCP_INTEGRITY_CHECK_CNF!!!
Line 2924: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_CPDCP_INTEGRITY_CHECK_CNF!!!
Line 2932: PDCP Integrity Check Failure !!! (Cal(0x%x), Rcv(0x%x))
Line 2944: RB_ID[%d] MacI Mismatch[0x%x] But NULL IP :: Allways Success 
Line 2953: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_CPDCP_INTEGRITY_CHECK_CNF!!!
Line 2981: RB_ID[%d]L2HRXPDCP_ProcIntegrityVerificationDone: Cal(0x%x), Rcv(0x%x)
Line 3012: L2HRXPDCP_Update_PdcpSnResetState RB_ID[%d] not support NR PDCP SPLIT (stSnResetState.eState[%d->%d])
Line 3026: L2HRXPDCP_Update_PdcpSnResetState RB_ID[%d] not support with PDCP Reordering (stSnResetState.eState[%d->%d])
Line 3041: L2HRXPDCP_Update_PdcpSnResetState RB_ID[%d] stSnResetState.eState[%d->%d]
Line 3048: L2HRXPDCP_Update_PdcpSnResetState RB_ID[%d] stSnResetState.eState[%d->%d]
Line 3077: LCID[%d] PDCP RX parameters reset for (PdcpSN(%d) < dwLastSubmitSn(%d)) !!
Line 3124: HfnBitLen[%d] is out of range !!!
Line 3137: RB_ID[%d]L2RXPDCP Miss SN curVR_H %d curVR_R %d NextSubmItSn %d curRxSN %d
Line 3160: RB_ID[%d] SN[%d], VR_H[%d], HFN[%x], NR_RX_DELIV[%x] !!
Line 3168: RX_HFN[%x] is out of range!!!
Line 3182: RB_ID[%d] SN[%d], VR_H[%d], HFN[%x] !!
Line 3211: HfnExceedLimit==TRUE!!!
Line 3244: HfnExceedLimit==TRUE!!!
Line 3318: RB_ID[%d]L2RXPDCP Out of SN curVR_H %d curVR_R %d NextSubmItSn %d curRxSN %d
Line 3345: HfnExceedLimit==TRUE!!!
Line 3359: RB_ID[%d] SN[%d], VR_H[%d], HFN[%x] !!
Line 3369: RB_ID[%d] SN[%d], VR_H[%d], HFN[%x] !!
Line 3398: HfnExceedLimit==TRUE!!!
Line 3470: RB_ID[%d] PDCP PayloadLen zero
Line 3492: RB_ID[%d] Wrong PDCP SN Format[%d]
Line 3506: RB_ID[%d] PDCP R field not zero!!
Line 3533: RB_ID[%d]PDPC RX Only header bytes
Line 3553: RB_ID[%d] PDCP Header parsing fail
Line 3609: RB_ID[%d] L2HRXPDCP_GetSduDesc Fail: NoSec Discard SRB PDU SN %d
Line 3622: RB_ID[%d] Wrong SRB PDU : SN %d Len %d ,R bit %d 
Line 3744: RB_ID[%d] L2HRXPDCP_GetSduDesc Fail: OnlyInteg Discard SRB PDU SN %d
Line 3761: RB_ID[%d] Wrong SRB PDU : SN %d Len %d ,R bit %d 
Line 3787: RB_ID[%d] DlRrcMsqDesc=0x%x :L2HRXPDCP_ProcIntegrityVerificationDone Wrong Aug!!!
Line 3817: RB_ID[%d] DlRrcMsqDesc=0x%x :L2HRXPDCP_ProcSrbPduOnlyInteg Wrong Aug!!!
Line 3891: RB_ID[%d] DlRrcMsqDesc=0x%x :L2HRXPDCP_ProcDecipherDone Wrong Aug!!!
Line 3902: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 3918: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 3930: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 3932: RB_ID[%d]Fail pal_Malloc and Fail Send  LTE_L2HRX_HAL_SRB_AFTER_DECIPHER_IND!!!
Line 3946: LMAC_RX_SEC_BLOCKFLAG_GET[%d] is not NULL !!!
Line 3948: RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
Line 4020: RB_ID[%d] L2HRXPDCP_GetSduDesc Fail: IntegDecipher Discard SRB PDU SN %d
Line 4033: RB_ID[%d] Wrong SRB PDU : SN %d Len %d ,R bit %d 
Line 4204: RB_ID[%d]pPdcpIf is Not Null But !!!
Line 4221: RB_ID[%d] Service_Type %d,PdcpRxState %d wrong variable !!!
Line 4229: RB_ID[%d]L2RXPDCP NOT ACTIVE
Line 4281: [L2RX] Move SduLink [%d->%d], Start/EndDesc[%x,%x]
Line 4374: pPdcpIf is Null at withDecipher: RD_Inx %d WR_Inx %d!!!
Line 4396: pPdcpIf is already freed at withDecipher: RD_Inx %d WR_Inx %d!!!
Line 4408: pPdcpIf is Wrong at withDecipher: RD_Inx %d WR_Inx %d!!!
Line 4426: Deciphering Stop by LTE RF released at the 3G-4G DSDS, bPendDcpReq[%d]
Line 4439: Different Cipher Alog PrevAlog[%d] CurAlog[%d]
Line 4606: [DEBUG] RB_ID[%d] empty!!!
Line 4656: pSduUnexpectedEndCheck->LastSeg == FALSE 
Line 4662: pSduUnexpectedEndCheck : Addr[%x], LastSeg[%x] 
Line 4703: pSduDesc==NULL !!!
Line 4745: RB_ID[%d] PDCP Only Header 
Line 4758: RB_ID[%d] Wrong SN type[%d] Discard[%d] 
Line 4775: RB_ID[%d] Previously SN:%d forwared to upperlayer!!
Line 4782: RB_ID[%d] duplicated received SN:%d,during HO
Line 4794: RB_ID[%d] SN[%d], VR_H[%d], HFN[%x] !!
Line 4812: RB_ID[%d] Wrong SN type[%d] Discard[%d] 
Line 4898: RB_ID[%d] SN %d L2RXPDCP Discard Too long pdu Size %d at the SBD_LLI
Line 4915: RB_ID[%d] L2HRXPDCP_GetSduDesc Fail:Discard Decipher DRB PDU SN %d
Line 4939: RB_ID[%d] SN %d L2RXPDCP Discard Too long pdu Size %d
Line 4964: RB_ID[%d] exceed 1 time decipher SduCnt %d TotalDcpInfoSize %d DeipherBreak %d
Line 5082: RB_ID[%d] 1st PDU SDU Descriptor [%d] !! 
Line 5092: RB_ID[%d] exceed 1 time decipher PduCnt %d, TotalSduCnt[%d]
Line 5114: RB_ID[%d]ReoderFlush is TRUE
Line 5128: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2HRX_HAL_TRANSFER_EXT_IF_REQ!!!
Line 5140: RB_ID[%d]Fail to send msg to L2HRX_HAL !!!
Line 5155: RB_ID[%d]pPdcpIf Link Error  !!!
Line 5274: [DEBUG] L2HRXPDCP_ProcPduWithDecipher : DcpReqSduLink[%x,%x]
Line 5316: RB_ID[%d]Host if Socket Fulll : Sdu discard!!!
Line 5371: L2HRXPDCP_ProcDcpPendPdu : gPktProcParam.rat[%d]
Line 5390: Host if Socket Fulll : Pend Sdu discard!!!
Line 5441: [PDCP RX NULL] gL2PdcpRlcRxDataDescIf RD[%d] - WR[%d]
Line 5479: Deciphering lock by LTE RF released at the 3G-4G DSDS
Line 5487: Deciphering lock by PktProc Pending : RAT(%d)
