Line 186: CompresseResult RbId = %d, OrginalHeaderLen = %d, ComprHeaderLen = %d,ippkt_len = %d
Line 233: RB_ID[%d] : RlcEndUsbDesc==NULL !!!
Line 256: RB_ID[%d] : UsbDesc==NULL !!!
Line 265: RB_ID[%d] : UsbDesc==NULL !!!
Line 305: RB_ID[%d], CurSN[%d], PdcpSN[%d] : UsbDesc==NULL !!!
Line 309: RB_ID[%d]PDCP RX VT_S %d FMS %d
Line 316: RB_ID[%d] PDCP Cnf Discard SN %d < ACK SN %d
Line 335: RB_ID[%d] PDCP RX NACK %d
Line 354: RB_ID[%d]PDCP Cnf bit Discard SN %d 
Line 358: RB_ID[%d]PDCP Cnf bit Discard SN %d 
Line 398: [ROHC] L2HTXPDCP_ProcRohcFb : pPacket == NULL !!
Line 420: [ROHC] Decompressor: FeedBack Packet
Line 425: [ROHC] Feedback Packet RESULT %s
Line 482: [ROHC] In L2HTX_dmUpdateROHCULInfo, PktCnt is zero, can't calculate average 
Line 501: [ROHC] No. of Compression Profiles : %u
Line 532: RB_ID[%d]L2HTXPDCP_ProcROHD (SDU_Desc==NULL)
Line 538: RB_ID[%d]L2HTXPDCP_ProcROHD (SDU_Desc->pPayload == NULL)
Line 551: RB_ID[%d]L2HTXPDCP_ProcROHD Payload_ptr < ippkt_ptr
Line 600: RB ID [%d] header compression success [%d, %d]!!
Line 609: RB_ID[%d] SN %d  ROHC COMP RESULT %s 
Line 647: RB_ID[%d] DiscardNum and Discard Timer is 0 !!!
Line 694: RB_ID[%d]Discard timeout DiscardSdu SN %d RxTm %u Cur Tm %u discard TmV %d,%d
Line 754: RB_ID[%d]Discard timeout Not Ative DiscardPendingSdu VT_S %d RxTm %u Cur Tm %u discard TmV %d,%d
Line 790: TOTALPOPNUM:%d, Step1_POPNUM:%d REQ:%d
Line 846: RB_ID[%d] pPdcpTxQ Link ERROR !!!
Line 864: RB_ID[%d] Already Released !!!
Line 986: RB_ID[%d] LastCipherPtr=0x%x LastDecipherPtr=0x%x Service_Type=%d ::L2HTXPDCP_Ciphering_Processing Wrong Aug!!!
Line 1061: RB_ID[%d] Pending Ciphering [pdu_num:%d, cipherSize[%d]]!!!
Line 1147: PDPC cihpering Algorightm (%d) (%d)
Line 1179: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2TX_HAL_CIPHER_DONE_IND!!!
Line 1241: PDPC cihpering Algorightm (%d) (%d)
Line 1261: PDPC cihpering Algorightm (%d) (%d)
Line 1294: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2TX_HAL_CIPHER_DONE_IND!!!
Line 1334: RB_ID[%d]Generate Status VR_H %d VR_R %d NextSubmItSn %d
Line 1357: RB_ID[%d] L2THXPDCP_GenerateCtlPdu Desc Alloc Fail !!!
Line 1363: RB_ID[%d] L2HTXPDCP_GenerateCtlPdu Mem Alloc Fail 1!!!
Line 1396: RB_ID[%d]PDCP TX VR_H %d FMS %d
Line 1404: RB_ID[%d]PDCP TX NACK %d
Line 1429: RB_ID[%d] L2HTXPDCP_GenerateCtlPdu Desc Alloc Fail 2!!!
Line 1435: RB_ID[%d] L2HTXPDCP_GenerateCtlPdu Desc Alloc Fail 2!!!
Line 1486: RB_ID[%d]L2TXPDCP Queue Link Error %x %x
Line 1504: RB_ID[%d]L2TXPDCP TransferToUpper Zero EPS_ID
Line 1519: RB_ID[%d]L2TXPDCP EPS_ID %d packet %d TransferToUpper
Line 1527: RB_ID[%d]L2TXPDCP EPS_ID %d No TransferToUpper
Line 1554: RB_ID[%d] EPS_ID %d L2HTXPDCP_RecoverDataAtRelease, Normal Release[%d]
Line 1590: RB_ID[%d] L2HTXPDCP_GenerateHeader due to wrong RB_ID !!!
Line 1621: RB_ID[%d] TX_HFN[%x] is out of range, SN[%d] !!!
Line 1739: RB_ID[%d] TX_HFN[%x] is out of range, PDCP_SN[%d] !!!
Line 1951: RB_ID[%d] Release Data Recovery :: Remove[SRV:%d Head:0x%x Rohc:%d state %d]
Line 1986: RB_ID[%d] At Rel :: Over Max pending discard Packet %d
Line 2013: [%d]Entity Cipher blocked !! cip_pend_flag(%d)
Line 2033: Too Many Msg Send Free Msg!!!
Line 2039: RB_ID[%d] Release Data Recovery :: FINISH>> Remove gSchedListPrev Entry
Line 2107: Too Many Msg Send Free Msg!!!
Line 2111: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2TX_HAL_CIPHER_DONE_IND!!!
Line 2167: Too Many Msg Send Free Msg!!!
Line 2171: RB_ID[%d]Fail pal_Malloc and Fail Send LTE_L2TX_HAL_CIPHER_DONE_IND!!!
Line 2182: RB_ID[%d] pPdcpTxQ->LastDecipherPtr is NULL !!!
Line 2220: Cipher Pending RB_ID[%d]: L2HTXPDCP_ControlLmac
Line 2300: Fail to send msg !!!
Line 2313: Fail to send msg !!!
Line 2341: RB_ID[%d] Release Data Recovery :: Remove[SRV:%d Head:0x%x Rohc:%d state %d]
Line 2374: RB_ID[%d] At Rel :: Over Max pending discard Packet %d
Line 2396: Cipher blocked by 3G-4G DSDS at reset step
Line 2417: Too Many Msg Send Free Msg!!!
Line 2423: RB_ID[%d] Release Data Recovery :: FINISH>> Remove gSchedListPrev Entry
Line 2433: Fail to send msg !!!
Line 2461: Cipher blocked (%d):TX PendF[%d]/BlockF[%d], RX BlockF[%d]
Line 2502: HAL_LteLmacSolveSecPendingAtTxDone called
Line 2521: RB_ID[%d] PDCP TX STATE ERROR :NULL->Security
Line 2540: RB_ID[%d] Ciphering Start [%x,%x]!!!
Line 2544: RB_ID[%d] Ciphering End [%x,%x]!!!
Line 2547: Too Many Msg Send Free Msg!!!
Line 2560: Too Many Msg Send Free Msg!!!
Line 2581: Too Many Msg Send Free Msg!!!
Line 2594: Fail to send msg !!!
Line 2635: Fail to send msg !!!
Line 2689: L2TXPDCP NULL State No Action
Line 2718: L2TXPDCP UBuffer full : Discard
Line 2732: Wrong EPSB_ID[%d]
Line 2747: Wrong LC_ID[%d], EPSB_ID[%d]
Line 2756: RB_ID[%d]:Invalid Packet Length[%d]
Line 2777: RB_ID[%d]Discard due to Big Size %d
Line 2844: RB_ID[%d]L2TXPDCP Each RB NULL State :discard 
Line 2852: RB_ID[%d] state %d PendingQ Insert
Line 2870: RB_ID[%d]L2HTXPDCP_ReceiveData Return: NO Processing SDU 
Line 3072: Wrong EPSB_ID[%d]
Line 3086: Wrong LC_ID[%d]
Line 3095: RB_ID[%d]:Invalid Packet Length[%d]
Line 3115: RB_ID[%d] : L2HTXPDCP_ReceiveDataNR PdcpTxState is not L2_ACTIVE 
Line 3139: RB_ID[%d]L2HTXPDCP_ReceiveDataNR Return: NO Processing SDU 
Line 3177: L2HTXPDCP_ProcForRlc(RBID:%d, StackID:%d)
Line 3230: [LTE_L2TX] RB_ID[%d] Generate NR Status VR_R %d NextSubmItSn %d
Line 3238: [LTE_L2TX] RB_ID[%d] L2THXPDCP_GenerateCtlPdu_NR Desc Alloc Fail !!!
Line 3244: [LTE_L2TX] RB_ID[%d] L2HTXPDCP_GenerateCtlPdu_NR Mem Alloc Fail 1!!!
Line 3281: RB_ID[%d]PDCP TX FMS %d
Line 3299: RB_ID[%d] L2HTXPDCP_GenerateCtlPdu_NR : Update RX_DELIV[%d]
Line 3307: [LTE_L2TX] L2HTXPDCP_GenerateCtlPdu_NR not support ROHC_FEEDBACK (RB_ID[%d])
Line 3703: RB_ID[%d] PDCP TX STATE ERROR :NULL->Security
Line 3737: RB_ID[%d] Ciphering Start [%x,%x]!!!
Line 3741: RB_ID[%d] Ciphering End [%x,%x]!!!
Line 3744: Too Many Msg Send Free Msg!!!
Line 3758: Too Many Msg Send Free Msg!!!
Line 3778: Too Many Msg Send Free Msg!!!
Line 3826: RB_ID[%d]L2HTXPDCP_ReceiveRRCMsg
Line 3830: Invalid RRC Msg information : RB_ID[%d], MsgLen[%d] !!
Line 3854: Error !! RrcBufferAlloc Fail : RB_ID[%d], MsgLen[%d] !!Recovery local RRE
Line 3867: RB_ID[%d]has MUI 
Line 3883: RB_ID[%d]RRC MSG Size[%d]
Line 3914: RB_ID[%d] RRC MSG SW Integrity (UEA0 or SMC comp)
Line 3942: RB_ID[%d] RRC MSG SW Integrity
Line 3944: RB_ID[%d] RRC MSG Ciphering
Line 3950: RB_ID[%d]RRC Msg type %d PDCP triggers regluar BSR
Line 3973: RB_ID[%d]L2HTXPDCP_ReceiveRACHMsg
Line 3978: Invalid RACH Msg information : RB_ID[%d], MsgLen[%d] !!
Line 4050: RB_ID[%d]Data Recovery PDCP triggers regular BSR
Line 4118: RB_ID[%d]L2HTXPDCP_ProcPendingData, HOFlag[%d] Tx/PendQCnt(%d, %d)
Line 4144: Discarded SDU Count %d
Line 4258: RB_ID[%d]: RunCase[%d], Qcnt[%d] PendQcnt[%d] PdcpTxQ_numPduProcess[%d]
Line 4275: RB_ID[%d] Abnormal PDCP SN format %d
Line 4301: Discarded SDU Count %d
Line 4340: RunCase[2], HOFlag Set
Line 4412: RB_ID[%d]L2HTXPDCP_PrepareResume
Line 4418: RB_ID[%d] Handover Flag Set
Line 4517: L2HTXPDCP_PrepareResume , pL2PdcpTx->new_rohc_used[%d]
Line 4562: RB_ID[%d]PDCP Q Count Miss Match[pPdcpTxQ:%d DescCnt:%d]!!!
Line 4600: RB_ID[%d]L2HTXPDCP_Resume, PDCP status prohibit(%d)
Line 4705: RB_ID[%d]Resume PDCP triggers regular BSR
