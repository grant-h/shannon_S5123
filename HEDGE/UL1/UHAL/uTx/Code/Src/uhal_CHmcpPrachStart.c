Line 239: [DBG]currentTxAntNum %d, scrflt_fb : %d
Line 298: activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlAichIndicatorInfoCmd errCode=%d addErrCode=%d
Line 304: activeStackId %d     enableAICH phychNr=%d
Line 312: activeStackId %d uhal_CHmcpPrachStart_enableAICH EHalDlPhychStartCmd exec() failed errCode %d addErrCode %d
Line 341: WARNING:uhal_CHmcpPrachStart_setAichStatus EHalDlAichIndicatorInfoCmd exec() failed errCode %d addErrCode %d
Line 389:  Prach cmd is NULL
Line 395:  Prach cmdPtr is NULL
Line 401: activeStackId %d DSDS:uhal_CScomPrachStart_response  %d
Line 420: uhal_CScomPrachStart_response: UmodemStatus %d
Line 434: uhal_CScomPrachStart_response: checkUarfcnAfterCommit
Line 441: uhal_CScomPrachStart_response:[%d,%d] failed after checkAfter- to be run 1 frame later...
Line 470:  Prach cmdPtr is NULL
Line 480: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill SubsequentPreambleToken
Line 490: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill FirstPreambleToken
Line 500: activeStackId %d DSDS:uhal_CScomPrachStart_undo kill ReleasePrachToken
Line 509: activeStackId %d DSDS: uhal_CScomPrachStart_undo kill AichSyncToken
Line 517: activeStackId %d DSDS:uhal_CScomPrachStart_undo Aich Int pending
Line 523: activeStackId %d DSDS: uhal_CScomPrachStart_undo Encode Int pending
Line 535: 3G3G: uhal_CHmcpPrachStart_undo, disable TX interrupt
Line 539: activeStackId %d DSDS: uhal_CScomPrachStart_undo EHalDlAich_NoSignal
Line 546: uhal_CPrach_SetState:EPrachConfigured (uhal_CPrachStart_undo) %d
Line 621: activeStackId %d rachTxPowerMax %d maxTxPower %d txPrachOffset[3] %d txPowerTempOffset %d
Line 633: activeStackId %d Prach override: retries %d
Line 722: activeStackId %d [TAS-RACH] currentTxAntNum: %d, rscp: %d, uhalCmdPrachStart->preambleInitPower: %d, init_power: %d 
Line 734: activeStackId %d init_power %d is limited to %d
Line 745: activeStackId %d PrachStart init=%d, rscp=%d outpower=%d dBm
Line 763: uhal_CHmcpPrachStart_request: sfn %6d slot %3d chip %5d
Line 797: uhal_CHmcpPrachStart_request: FirstRachProcess %d AddOffset %d
Line 915: [uhal_CHmcpPrachStart_getRefRLFramePosition] sfn_p %x, slot_p %x, chip_p %x 
Line 935: currentTxAntNum : %d, adjust tx path delay %d
Line 1044: numAvailableASPerSfn is out of bound
Line 1046:     searchASSet: not found
Line 1144: activeStackId %d Impossible case[current_aich_slots %d, sfnMod8 %d, selectedAS %d]
Line 1151: activeStackId %d uhal_CHmcpPrachStart_subsequentPreamble: submit SubsequentPreamble token
Line 1203: activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] ulPhyProcInstance %x, prach %x
Line 1242: activeStackId %d [uhal_CHmcpPrachStart_firstPreamble] numberOfAvailAsAtNextSfn %d, current_aich_slots %d, 
Line 1249: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: selectedAS %d
Line 1266: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token by selectedAS %d < current_aich_slots %d
Line 1296: activeStackId %d     Access slot No %d 		 preambleSignature %d
Line 1315: activeStackId %d     EHalDlAich_ReleasePrach by overtime on selection of available number
Line 1339: activeStackId %d uhal_CHmcpPrachStart_firstPreamble: submit FirstPreamble token
Line 1362: activeStackId %d uhal_CHmcpPrachStart_request: FirstPreamble with numOf1stPreambleFailure %d
Line 1384: activeStackId %d uhal_CHmcpPrachStart_request: RachChannelSetup
Line 1420: activeStackId %d PRACH_EN [UL_CH_INFO] 0x%x
Line 1452: AichSync: sfn %6d slot %3d chip %5d
Line 1470: activeStackId %d AichSync:(aichslot<13)&&(aichsfn&1) token modify: FirstPreamble
Line 1491: AichSync token late: resubmit noOfTries %d aichsfn %d aichslot %d noOfFrames %d
Line 1509: activeStackId %d uhal_CPrach_SetState:EPrachConfigured (AichSync) %d
Line 1540: DSDS:uhal_CPrach_SetCmdAborted:EPrachAborted %d
Line 1585: Hmcp_TXGEN_LISR
Line 1593: TXGEN_HISR execution failure
Line 1619: DSDS iscmdAborted=%d
Line 1635: Hmcp_TXGEN_HISR activeStackId %d rachTxPower %d pdPower %d rfTxSPI 0x%x rfTxPll 0x%x rfTxmode 0x%x
Line 1651: Hmcp_TXGEN_HISR: [HTX_TIMING_MON TX slot %d chip %d] 
Line 1671: activeStackId %d Re lock
Line 1701: activeStackId %d Hmcp_Aich_Rf_Lisr
Line 1747: activeStackId %d [NEW AICH DETECTION SCHEME] phychNr %d, phychType %d, ai po %d
Line 1757: activeStackId %d [NEW AICH DETECTION SCHEME] ai po is incorrect. realRakeEnergy : %d Skip NEW AICH DETECTION SCHEME 
Line 1766: activeStackId %d ai sym %d, realRakeEnergy %d, aichPO %d, sqrt_gamma %d, aich_ack_th %d
Line 1849: activeStackId %d [R:%d][EAICH_ACK]	 AI SIG = %d, 	 EdchRscIdx = %d
Line 1872: activeStackId %d Enable Slot interrupt at %d slot (AS Timing %d, AS %d)
Line 1883: activeStackId %d msgCurrentPower %d is limited to %d
Line 1890: msgCurrentPower %d = preambleCurrentPower %d +  msgStepPower %d + dpcchPowerOffset %d 
Line 1895: activeStackId %d Hmcp_Aich_Rf_Lisr: PrachAck TxPowerSet failed %d
Line 1929: [R:%d][EAICH_NACK]	  EAI SYM = %d 	, EAI SIG = %d
Line 1939: [R:%d][EAICH_ACK]	  EAI SYM = %d 	, 	 AI SIG = %d, 	 EAI SIG = %d, 	 EdchRscIdx = %d
Line 1988: activeStackId %d AICH_HISR execution failure
Line 2014: WARNING: In uhal_HmcpAICH_HISR, cmdPtr is NULL
Line 2031: DSDS iscmdAborted=%d
Line 2046: activeStackId %d [R:%d] 	  AI SYM = %d 	, 	 ISCP = %d
Line 2069: activeStackId %d [AICH monitoring] frameCounter=%d, slotCounter = %d, chipCounter = %d
Line 2102: activeStackId %d AICH result POS
Line 2112: activeStackId %d     EHalDlAich_PosAck Asn_tti10 ReleasePrach
Line 2139: activeStackId %d Hmcp_Aich_Rf_HISR: Absurd AICH result from chipset
Line 2152: activeStackId %d AICH NACK [UL_CH_INFO] 0x%x
Line 2159: activeStackId %d ## Warning!! uhal_HmcpIpcGetDstStatus is False##
Line 2182: activeStackId %d AICH result NACK
Line 2199: Preamble remains: %d out of %d [ul_ch_info : %d]
Line 2266: activeStackId %d preambleCurrentPower %d is limited to %d
Line 2273: activeStackId %d Additional PrachNoSig MsgPower=%d dBm
Line 2282: activeStackId %d PrachNoSig TxPowerSet failed %d
Line 2316: activeStackId %d Next Preamble Signature: %d, Next Access Slot: %d
Line 2330: activeStackId %d preambleCurrentPower %d is limited to %d
Line 2343: activeStackId %d PrachNoSig TxPowerSet failed %d
Line 2362: txtm_sfn : %d, txtm_chip : %d, htx_urtg : %d, cur_slot : %d, cur_chip : %d, dbg_ul_slot : %d, dbg_ul_chipx8 : %d,
Line 2364: cur_fing_pos : %d, DL_AS : %d, DL_AS_Chip : %d, ref_cnt_chip38400 : %d, urtg_chip38400 : %d, tx_tm_pos : %d, urtg_pos : %d,
Line 2366:  frameCounter_0=%d, slotCounter_0 = %d, chipCounter_0 = %d  frameCounter_1=%d, slotCounter_1 = %d, chipCounter_1 = %d rlNr = %d
Line 2384: activeStackId %d uhal_CScomPrachStart_abort command received 
Line 2462: [uhal_CHmcpPrachStart_timeout] INT_MASK 0x%x, AICH(slot %d, chip %d) htx_ch_info 0x%x, htx_ch_mon 0x%x, ai_ctrl_0 0x%x 
Line 2487: actStkId %d [uhal_CHmcpPrachStart_MeasureMsgPwr] RACH message power = %d
Line 2519: [rlNr %d] finger cumulative value %d, converted value %d
