Line 248: [HALLMAC3G] %s: Wrong %s(%d)
Line 249: [HALLMAC3G] %s: Wrong %s(%d)
Line 277: [Warning] HW destination control(Configuration). BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 342:  MAC-HS. mem_ps_ctrl_qid_info 0x%x
Line 382: MAC-EHS. Mapping info... QueueID: %d, LchID: %d
Line 406: MAC-EHS. TSN14Bit_Mode: %d
Line 438: [HALLMAC3G] %s: Wrong %s(%d)
Line 439: [HALLMAC3G] %s: Wrong %s(%d)
Line 463: [PktProc] PktProc is busy! RbId %d, comStatus 0x%X, LmacLoopCnt %d
Line 468: [PktProc][ERROR] Decipher command discard! PktProc is busy!
Line 474: [PktProc] Decipher command start! NumOfPayload(%u)
Line 479: [PktProc] PktProcFreeQue(%u) < NumOfPayload(%u)
Line 506: [PktProc] Set descriptor of decipher: RbId(%d) PayloadLen(%d) LastSeg(%d)
Line 538: [PktProc] Decipher Start! RbId(%d) RxCountC0(%u) PayloadLength(%u)(bits) dcp_info(0x%x) StartDesc(0x%x)
Line 577: Cipher key set! Direction(%d) CK_REG[0 ~ 3] : 0x%x 0x%x 0x%x 0x%x
Line 641: index is out of range %d
Line 709: index is out of range %d
Line 791: LmacHsdpaParserOnOffCtrl: Lmac parser already on
Line 807: LmacHsdpaParserOnOffCtrl: Lmac parser already off
Line 832: [PktProc] Init! Convert to 3G
Line 836: [PktProc] SwReset! pPktProcComReg->COM_STATUS : 0x%X
Line 844: [PktProc] hw_discardPktProc !
Line 873: HSetDecipherParameter() Start!
Line 889: HSetDecipherParameter: Array index out of bound %d 
Line 902: Ngroup index Over NGROUP %d
Line 916: HSetDecipherParameter(): RbId %d, NGROUP %d, CkIndex %d, CIPHER %d
Line 944: [HALLMAC3G] %s: Wrong %s(%d)
Line 945: [HALLMAC3G] %s: Wrong %s(%d)
Line 959: LMAC mode is not 3G: RbId %d, LmacOperationMode %d
Line 978: [PktProc] PktProc is busy! RbId %d, comStatus 0x%X, LmacLoopCnt %d
Line 983: [ERROR] Decipher command discard! PktProc is busy!
Line 1005: RX LMAC busy: RbId %d, DelayedCnt %d, LmacOperationMode %d
Line 1013: Array index out of bound: RbId %d, totalPdu %d, LmacOperationMode %d
Line 1025: Exception! RX LMAC DMA only mode %d
Line 1037: [PktProc] EPktProcDecipherOnly cmd start! TotalPdus(%u) g_uRlcPktProcFreeQueNum(%u)
Line 1042: [PktProc] g_uRlcPktProcFreeQueNum(%u) < RxRlcDataConfig_ptr->RlcRxDataConfigInfo->TotalPdus
Line 1094: Set descriptor of decipher: RbId %d, Num %d, COUNTC %u, CK_Idx %d, BitLength %u, SrcAddr: 0x%X
Line 1127: [PktProc] Decipher Start! RbId(%d) Snow3g(%d) StartDesc(0x%x)
Line 1138: RX LMAC invalid operation mode %d
Line 1195: [HALLMAC3G] %s: Wrong %s(%d)
Line 1196: [HALLMAC3G] %s: Wrong %s(%d)
Line 1202: LMAC mode is not 3G: RbId %d, LmacOperationMode %d
Line 1221: Array index out of bound: RbId %d, totalPdu %d, LmacOperationMode %d
Line 1243: RX SDU GEN I (Busy): RbId %d, rx_lmac_status 0x%X, LmacPollCnt %d, LmacOperationMode %d
Line 1270: SDUGEN descriptors info(RD): RbId %d, Num %d, ByteLength %d, SrcAddr %x, DstAddr %x, DmaCtrlLength %x
Line 1302: RX SDU GEN II (Busy): RbId %d, rx_lmac_status 0x%X, LmacPollCnt %d, LmacOperationMode %d
Line 1330: RX SUB data transfer is not finished: RbId %d, delayedCnt %d
Line 1344: RX LMAC invalid operation mode %d
Line 1368: [HALLMAC3G] %s: Wrong %s(%d)
Line 1506: [HALLMAC3G] %s: Wrong %s(%d)
Line 1507: [HALLMAC3G] %s: Wrong %s(%d)
Line 1606: Cipher DescriptorInfo(DCH): RbId %d, Num %d, ByteLength %d, Offset1 %d, AddrOffset %d, DmaCtrlLength(RD) %x, DmaCtrlLength(WR) %x
Line 1679: TX DCH Cipher Only: RbId %d, tx_fsm_status_0 %x, tx_fsm_status_1 %x, cip_info[0] %x, ciph_cnt[0] %x, countc[0] %i, ck_src_index[0] %x
Line 1768: Cipher DescriptorInfo(EDCH) :  RbId %d, Num %d, ByteLength %d, Offset1 %d, AddrOffset %d, DmaCtrlLength(RD) %x, DmaCtrlLength(WR) %x
Line 1840: TX EDCH Cipher Only: RbId %d, tx_fsm_status_0 %x, tx_fsm_status_1 %x, cip_info[0] %x, ciph_cnt[0] %x, countc[0] %i, ck_src_index[0] %x
Line 1932: [HALLMAC3G] %s: Wrong %s(%d)
Line 1933: [HALLMAC3G] %s: Wrong %s(%d)
Line 1944: LMAC sizeOfTrBlock %d
Line 1954: nRbId %d DDIon %d SI_Sel %d SI_Field 0x%x ERNTIon %d ERNTI %d HarqId %d
Line 1965: EDCH LMAC Register is not updated
Line 1976: ** Error : EdchDataConfigInfo is NULL in case of new transmission. PointerIsNull Cnt: %d **
Line 2000: TrbkSize is Zero in LMAC EDCH-Command
Line 2151: EEdchTransferOnly: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 2164: LMAC Cmd Info: EEdchTransferOnly: LMAC Status %d, RbId %i, DDI %i, TSN %i, PaySize %i, Num %i, TotalPdu %d
Line 2204: Num of RB is Zero in EdchTransferOnly
Line 2248: EEdchSiOnlyTransfer: Num[0] Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 2251: LMAC Cmd Info: EEdchSiOnlyTransfer: LMAC Status %d, SI Value 0x%x
Line 2339: NumRb %d MacEsHeaderInfo 0x%x TSN 0x%x N 0x%x DDI 0x%x
Line 2580: EEdchTransferWithCipher: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 2601: EEdchTransferWithCipher: RbId %d, RlcH 0x%x, cip_info 0x%x, ciph_cnt 0x%x, ck_index 0x%x, tx_hsuconr 0x%x, cip_algo_dir 0x%x
Line 2609: ** Error : Num calculation in EEdchTransferWithCipher. Given up LMAC Command (TotalPdu %d, TotalCountC %d, TotalCk %d) **
Line 2652: Num of RB is Zero in EDCH TRANSFER WITH CIPHER
Line 2673: txTTIBufData_EdchInfo[%d]: TotalByteLength %d, TransferAddr 0x%x, LmacDoneIndication %d
Line 2699: [HALLMAC3G] %s: Wrong %s(%d)
Line 2725: TXEdchProcessing is not finished: LmacPollCnt %d, pend_status %d
Line 2807: ETC_MODEM_SELECT = %X
Line 2833: [HALLMAC3G] %s: Wrong %s(%d)
Line 2843: Many of total packet number: NumOfPacket_1 %d, NumOfPacket_2 %d
Line 2941: R8 PacketGen: tx_fsm_status_0 %x, tx_fsm_status_1 %x, SelectDualCell %x,NumOfPacket_1 %d, NumOfPacket_2 %d
Line 2946: TX LMAC invalid operation mode %d
Line 2973: [HALLMAC3G] %s: Wrong %s(%d)
Line 3024: [LMAC] TTI Buffer Setting. Modem Selection (0:HSPA)
Line 3117: [HALLMAC3G] %s: Wrong %s(%d)
Line 3118: [HALLMAC3G] %s: Wrong %s(%d)
Line 3123: LMAC mode is not 3G (ETC_MODEM_SELECT: %d)
Line 3127: RX_STATUS: 0x%x, TX_FSM_STATUS_0: 0x%x, TX_FSM_STATUS_1: 0x%x
Line 3150: Data_info1: TransferAddr %x and currentCfn %x
Line 3156: Data_info2: TransferAddr %x	currentCfn %x
Line 3201: NumRb %d, MacHeader %x
Line 3259: EDataTransferOnly: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 3271: LMAC Cmd Info: EDataTransferOnly: Status %d, RbId %i, Num %i, RlcH 0x%x, dch_mac_h_info 0x%x, dch_ciph_info 0x%x
Line 3544: EDataTransferWithCipher: Num[%d] Read(Src 0x%x, Dst 0x%x, Length 0x%x), Write(Src 0x%x, Dst 0x%x, Length 0x%x)
Line 3557: LMAC Cmd Info: EDataTransferWithCipher: Status %d, Num %i, RbId %d, RlcH 0x%x, dch_mac_h_info 0x%x, dch_ciph_info 0x%x, dch_ciph_cnt 0x%x
Line 3563: ** Error : Num calculation in EDataTransferWithCipher. Given up LMAC Command (TotalPdu %d, TotalCountC %d, TotalCk %d) **
Line 3604: LMAC Cmd Info: thal_HpcmHw_Get_Chipx8N_TCU (%d) 
Line 3611: Data_info1: T_DCH_CIP_PACK_PROC: TransferAddr %x 
Line 3613: TransferAddr[0]
Line 3620: Data_info2: T_DCH_CIP_PACK_PROC: TransferAddr %x 
Line 3622: TransferAddr[1]
Line 3637: Num of RB is Zero in EDataTransferOnly or EDataTransferWithCipher
Line 3661: [HALLMAC3G] %s: Wrong %s(%d)
Line 3677: RceiveLmac Data:currentCfn %x
Line 3747: [HALLMAC3G] %s: Wrong %s(%d)
Line 3800: [HALLMAC3G] %s: Wrong %s(%d)
Line 3820: NumOfPdu and NumOfLI should be same: RbId %d, NumOfPdu %d, NumOfLI %d
Line 3894: PduGen DescriptorInfo(EDCH): RbId %d, LiLength %d,DstAddr(Start) %x, AddrOffset %x, PduLength %d
Line 3925: TX EDCH PDU GEN (Flexible): RbId %d, NumOfPdu %d, NumOfLI %d, tx_fsm_status_0 %x, tx_fsm_status_1 %x
Line 4013: PduGenWithCipher(Flexible): RbId %d, Num %d, LiLength %d, PduAddr(start) %x, DstAddr %x, Size(LI+Payload) %d
Line 4122: PduGenWithCipher: RbId %d, tx_fsm_status_0 %x, tx_fsm_status_1 %x, cip_info[0] %x, ciph_cnt[0] %x, countc[0] %i, ck_src_index[0] %x
Line 4190: ConfigTxLmacDataTransfer: TTI_4GNR_CMD0_BUFINFO(%x) TTI_TRS_COMMAND (%x), TX_SYMBPROC_LMACIF_3G_MODE_ENABLE (%x)
