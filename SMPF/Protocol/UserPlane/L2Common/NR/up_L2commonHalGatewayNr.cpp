Line 212: [L2HAL_GATEWAY] AllocExtCmdMemoryManually() Start! extCmdId(%d)
Line 242: [L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_TRS_DONE_NR_CMD)!
Line 256: [L2HAL_GATEWAY] AllocExtCmdReq (LMAC_RX_PARSER_DONE_NR_CMD)!
Line 278: [ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
Line 288: [L2HAL_GATEWAY] RunExtCmd() Start! extCmdId(%d)
Line 298: [L2HAL_GATEWAY] SendExtCmd (LMAC_RX_TRS_DONE_NR_CMD)!
Line 310: [L2HAL_GATEWAY] SendExtCmd (LMAC_RX_PARSER_DONE_NR_CMD)!
Line 318: [ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
Line 328: [L2HAL_GATEWAY] FreeExtCmdMemoryManually() Start! extCmdId(%d)
Line 355: [L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_TRS_DONE_NR_CMD)!
Line 365: [L2HAL_GATEWAY] FreeExtCmdReq (LMAC_RX_PARSER_DONE_NR_CMD)!
Line 380: [ERROR][L2HAL_GATEWAY] unknown extCmdId(%d)
Line 434: [ERROR] LmacParsDoneProc : DSDS Pause[%d]
Line 456: [L2HAL_GATEWAY][ERROR] Invalid LCID RBID mapping! LCID[%d]
Line 465: [L2HAL_GATEWAY][ERROR] L2NR_SendRxRlcSdu fail!
Line 478: RD reset by LmacInit!
Line 524: [L2HAL_GATEWAY] PktProcSWIntegrityVerification
Line 542: [L2HAL_GATEWAY][PktProc] Data=0x%08x DataLen=%d
Line 543: [L2HAL_GATEWAY][PktProc] Integrity DUMP 
Line 547: [L2HAL_GATEWAY][PktProc] Integrity DUMP 
Line 552: [L2HAL_GATEWAY][PktProc][ERROR] Integrity verification fail !!! (Length=%d BearerId=%d Count=%d Algo=%d Key=0x%02x... dir=%d headLen=%d)
Line 553: [L2HAL_GATEWAY][PktProc] Rcv  
Line 554: [L2HAL_GATEWAY][PktProc] Calc 
Line 582: [L2HAL_GATEWAY] PktProcSWIntegrityVerification done (Result=%d)
Line 601: [L2HAL_GATEWAY][PktProc] Integrity DUMP 
Line 602: [L2HAL_GATEWAY][PktProc] Integrity filterResult=0x%x information=0x%x rtStatus=0x%x
Line 605: [L2HAL_GATEWAY][PktProc][ERROR] Integrity verification fail !!! (itg=%d)
Line 611: [L2HAL_GATEWAY][PktProc] Integrity verification pass !!!
Line 622: [L2HAL_GATEWAY][ERROR] PktProcHWIntegrityVerification Invalid DstType=%d
Line 645: [L2HAL_GATEWAY] PktProcSendDataToRrc (RbId=%d, Num=%d)
Line 661: [ERROR] AllocMsg fail!
Line 674: [ERROR] AllocMsgBodyElem fail!
Line 687: [ERROR] SendMsg fail!
Line 696: [L2HAL_GATEWAY] L2_L2HPDCPRXDELIV_DATA_IND (RbId=%d, Length=%d)
Line 757: [RbId:0x%02x][ERROR] Failed to get CID=%d !!!
Line 762: [ERROR] Invalid PdcpChId =%d ,(Rbid=%d, Srb=%d) 
Line 768: [RbId:0x%02x][ERROR] Failed to get CID(=%d), skip hostifSendListData() !!!
Line 784: [RbId:0x%02x][WARNING] Too big data (size=%d > %d(PCIe impl.))
Line 792: [L2HAL_GATEWAY][ERROR] Failed to alloc !!!
Line 811: [L2HAL_GATEWAY][ERROR] Invalid Pkt Count=%d
Line 830: [L2HAL_GATEWAY] PDCPRX deciphered pData=0x%08x len=%d
Line 831: [L2HAL_GATEWAY] PDCPRX deciphered 
Line 915: [L2HAL_GATEWAY][ERROR] PktProcSendDataToHost Invalid DstType=%d
Line 920: [L2HAL_GATEWAY][WARNING] PdcpHostIfList empty !
Line 973: [L2HAL_GATEWAY][WARNING] PdcpHostIfList empty !!
Line 997: [L2HAL_GATEWAY][ERROR] hostifSendListData Fail (RbId=%d cause=%d)
Line 1025: [L2HAL_GATEWAY] L2_L2HPDCPRXDELIV_INTEGRITY_CHECK_FAIL_IND (RbId=%d, bSrb=%d)
Line 1046: [L2HAL_GATEWAY] L2_L2HPDCPRX_NR_DL_RBINFO_IND (Recovery)
Line 1077: [L2HAL_GATEWAY][PktProc][ERROR] Guard timer(%dms) expired !!! (PpStatus:0x%08x)
Line 1128: [L2HAL_GATEWAY][PktProc][ERROR] Guard timer(%dms) expired !!! (PpStatus:0x%08x)
Line 1143: [L2HAL_GATEWAY][PktProc] Dequeue DstDesc (StartAddr=0x%08x,DstType=%d,StartIdx=%d,Num=%d,bSrb=%d)
Line 1207: [L2HAL_GATEWAY][PktProc] SRB with ItgAlgo=0
Line 1471: [L2HAL_GATEWAY] No HW interrupt for Ciphering (RAT_NR) - (TotalNum (%d), FirstDesc (0x%x), isItg (%d), Count (%d), CountReEstab (%d), isReEstablish (%d)
Line 1556: [L2HAL_GATEWAY] LMAC_RX_RLCCONFIG_SET_NR_CMD! 
Line 1571: [L2HAL_GATEWAY] LMAC_RX_OPER_MODE_SET_NR_CMD! 
Line 1606: [L2HAL_GATEWAY] LMAC_INIT_NR_CMD!
Line 1615: [L2HAL_GATEWAY][ERROR] unknown extCmdId!
Line 1629: [L2HAL_GATEWAY][ERROR] SendExtCmd Fail! res = %d
Line 1658: [L2HAL][ERROR] Sending LMAC_TX_TRS_START_NR_CMD Fail! res = %d
Line 1740: [L2HAL][ERROR] pCmdReqHdr == nullptr!
Line 1768: [L2HAL][ERROR] pCmdReqHdr == nullptr!
Line 1785: [L2HAL] FlushL2IpcPendQueue() queue size(%u)
Line 1792: [L2HAL][ERROR] m_tL2IpcPendQueue.front() is nullptr!
Line 1813: [L2HAL][ERROR] IpcPendPool is full! discard this IPC! cmdId(%u)
Line 1824: [L2HAL][ERROR] dataLength is over maximum size! dataLength(%u)
Line 1837: [L2HAL] Push IPC pending queue! cmdId(%u) ccBitmap(%u) dataLength(%u) _IpcPendCount(%u)
Line 1850: [L2HAL_GATEWAY] L2IpcSendInternal() Start! cmdId(%u) ccBitmap(%u)
Line 1857: [L2HAL_GATEWAY] LCPU power domain is off! Ignore this IPC
Line 1869: [L2HAL_GATEWAY] Sending PHY_L2_SP_ZP_CSIRS_ACT_DEACT_IND
Line 1880: [L2HAL_GATEWAY] Sending PHY_L2_PUCCH_SPATIAL_REL_ACT_DEACT_IND
Line 1891: [L2HAL_GATEWAY] Sending PHY_L2_SP_SRS_ACT_DEACT_IND
Line 1902: [L2HAL_GATEWAY] Sending PHY_L2_SP_CSI_RPT_PUCCH_ACT_DEACT_IND
Line 1913: [L2HAL_GATEWAY] Sending PHY_L2_PDCCH_TCI_STATE_IND
Line 1924: [L2HAL_GATEWAY] Sending PHY_L2_PDSCH_TCI_STATES_ACT_DEACT_IND
Line 1935: [L2HAL_GATEWAY] Sending PHY_L2_A_CSI_TRG_SUBSET_SUBSEL_IND
Line 1946: [L2HAL_GATEWAY] Sending PHY_L2_SP_CSIRS_CSIIM_ACT_DEACT_IND
Line 1957: [L2HAL_GATEWAY] Sending PHY_L2_TA_CONTROL_IND
Line 1968: [L2HAL_GATEWAY] Sending PHY_L2_TA_TIMER_IND
Line 1977: [L2HAL_GATEWAY] Sending PHY_L2_MAC_RESET_IND
Line 1988: [L2HAL_GATEWAY] Sending PHY_L2_RACH_MSG3_CONFIG_IND
Line 2000: [L2HAL_GATEWAY] Sending PHY_L2_MAC_RACH_CONTROL_IND
Line 2012: [L2HAL_GATEWAY] Sending PHY_L2_RNTI_CONTROL_IND
Line 2023: [L2HAL_GATEWAY] Sending PHY_L2_SRI_ON_IND
Line 2034: [L2HAL_GATEWAY] Sending PHY_L2_PUCCH_SRS_RELEASE_IND
Line 2046: [L2HAL_GATEWAY] Sending PHY_L2_UE_BEAMLOCK_IND
Line 2054: [L2HAL_GATEWAY] invalid command [0x%x]
Line 2087: [ERROR] L2GetCcBitmap invalid cellIndex[%d]
Line 2122: [ERROR] L2GetCellIndex invalid cellIndex <-> ccIndex[%d]
Line 2146: [ERROR] L2GetCcBitmap invalid cellIndex[%d]
Line 2168: [ERROR] L2GetCellGroup invalid CcIndex:%d <=> gL2CellConfig[MacEntity:any][CellIndex:%d]
Line 2178: [CDRX] SetDrxSleepVariables! CurTime(%u) SleepDur(%d) DrxType(%d) m_uCdrxConfirmRetryCount(%u)
Line 2182: [CDRX] Create m_CdrxConfirmRetryTimer
Line 2194: [CDRX] L2 CDRX confirm is running! but receives another CDRX confirm ind!
Line 2214: [ERROR][CDRX] RetryTimer is running! something is wrong!
Line 2224: [CDRX] L2 is running! Start retry timer!
Line 2242: [CDRX] L2 is free! Sending L1C_L2_DRX_CONFIRM_IND! m_uCdrxVarCurTime(%u) m_uCdrxVarSleepDur(%u) m_uCdrxVarDrxType(%u) L2ProcTime(%d)
Line 2246: [L2] Sending L1C_L2_DRX_CONFIRM_IND Fail!
Line 2272: [CDRX] LMAC H/W is running!
Line 2277: [CDRX] LMAC_CIPHER is running!
Line 2282: [CDRX] PKTPROC is running!
Line 2291: [CDRX] RACH is running!
Line 2299: [CDRX] SR_TRIGGERED!
Line 2309: [CDRX] LMAC Shared DMA is running!
Line 2317: [CDRX] MAC RX is running!
Line 2334: [CDRX] RLC RX is running! index(%u)
Line 2340: [CDRX] RLC RX (Reassemble timer) is running! index(%u)
Line 2358: [CDRX] PDCP RX is running! index(%u)
Line 2367: [CDRX] PDCP RX (LTE path) is running! index(%u)
Line 2373: [CDRX] PDCP RX (reordering timer) is running! index(%u)
Line 2387: [CDRX] Cancel CDRX Confirm procedure!
Line 2402: [CDRX] Cdrx Confirm timer expired! m_uCdrxConfirmRetryCount(%d) m_bCdrxConfirmRunning(%d)
Line 2408: [CDRX] Reaching maximum CDRX_CONFIRM retry count! Don't retry anymore
Line 2467: [PktProc][ERROR] Discard requested data (LmacDecipherBlockFlag=%d)
Line 2501: [PktProc][ERROR] Discard requested data (PdcpChId=0x%x, Entity=%d, DescAddr=0x%08x, DescNum=%d, sleepstate=%d, PowerOn=%d L2DSDSPause=%d)
Line 2522: [PktProc][ERROR] Pending requested data (PdcpChId=0x%x, Entity=%d, DescAddr=0x%08x, DescNum=%d, sleepstate=%d, PowerOn=%d L2DSDSPause=%d)
Line 2587: [PktProc][ERROR] Failed to acquire Cmd
