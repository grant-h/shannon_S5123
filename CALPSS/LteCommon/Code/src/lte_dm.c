Line 301: <<< LTE DM Command List >>>
Line 302: [01] ltedm help
Line 303: [02] ltedm on
Line 304: [03] ltedm off
Line 305: [04] ltedm default
Line 306: [05] ltedm vu     [RATE]
Line 307:        ex) ltedm vu 1000
Line 308:             -> LTEDM_VU update rate is 1000ms
Line 309: [06] ltedm phy    [RATE]
Line 310: [07] ltedm l1     [RATE]
Line 311: [08] ltedm mac    [RATE]
Line 312: [09] ltedm rlc    [RATE]
Line 313: [10] ltedm pdcp   [RATE]
Line 314: [11] ltedm rrc    [RATE]
Line 315: [12] ltedm nas    [RATE]
Line 316: [15] ltedm pal    [RATE]
Line 317: [16] ltedm status
Line 330: LTE DM : ON
Line 611: <<< LTE DM Status >>>
Line 615: LTE DM : ON
Line 619: LTE DM : OFF
Line 1377: LTEDMTaskPoll_LTE_DM_VU Start
Line 1472: pCellInfo made Null with cc_idx : %d
Line 2863: LTEDMTaskPoll_LTE_DM_VU End
Line 2894: [Malloc couldnot able to allocate memory: ] event=%d
Line 2915: [LTEDM_Send_NS_Event: Sending Error] event=%d
Line 2919: [Lte_ProtocolPostEvent: pal Mem Free Fail]
Line 2928: [LTEDM_Send_NS_Event: Sending Error] event=%d
Line 2932: [Lte_ProtocolPostEvent: pal Mem Free Fail]
Line 3529: LTEDM_Send_NS_SignalQuality [Malloc couldnot able to allocate memory]
Line 3569: [LTEDM_Send_NS_SignalQuality: Sending Error]
Line 3573: [LTEDM_Send_NS_SignalQuality: pal Mem Free Fail]
Line 3743: PDCCH C/U:0x%02x 0x%02x, CFI:0x%02x ..PDCCH_FER:(%d/%d), (%d/%d)
Line 3754: PDCCH FORMAT:%X, HOPPING:%d, RA:0x%x, MCS:%d, NDI/TPC:%03d, CQI/SHIFT:%03d, RNTI:0x%X
Line 3769: PDCCH FORMAT:%X, RA:0x%x, MCS:%04d, ACID:%d, SWAP/PCI/RV/NDI:0x%08x, TYPE/TPC/NRB:%07d, RNTI:0x%X
Line 3778: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, TPMI/PMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3786: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, GAP:%d, NRB:%d, RNTI:0x%X
Line 3795: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, POff/TPMI/RV/NDI:0x%08x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3804: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, LD/TPC/NRB:%05d, RNTI:0x%X
Line 3813: PDCCH FORMAT:%X, RA:0x%x, MCS:%d, ACID:%d, RV/NDI:0x%04x, TYPE/TPC/NRB:%05d, RNTI:0x%X
Line 3823: PDCCH FORMAT:%X RNTI:0x%x
Line 3829: FREQUENCY HOPPING:%d
Line 3836: BCCH_FER:(%d/%d), (%d/%d)
Line 3858: PDSCH ... PDSCH_FER:(%d/%d), (%d/%d)
Line 3864: DL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
Line 3865: UL RB_CNT(CC0:%d, CC1:%d, CC2:%d)
Line 3881: [IC_INFO_MAX3] Mode(%d) State(%d) Num_activated(%d) ITF2_CCMapping(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
Line 3882: [IC_INFO_MAX3] ITF0_cellID(%d) ITF1_cellID(%d) ITF2_cellID(%d)
Line 3886: [IC_INFO_MAX2] Mode(%d) State(%d) Num_activated(%d) ITF1_CCMapping(%d) ITF0_CCMapping(%d)
Line 3887: [IC_INFO_MAX2] ITF0_cellID(%d) ITF1_cellID(%d)
Line 4106: LTEDMTaskPoll_LTE_DM_NULL
Line 4143: LTEDMTaskPoll_LTE_DM_L1 Start
Line 4206: Unusual case: Total Padding(%d) > Total PHY data(%d) during diff time(%d)ms
Line 4298: | %s_S |CC0| SFN [ %d,%d ], DL EARFCN [%2d, %4d], PCell ID [%3d], DL Bandwidth [ %s]
Line 4309: | CONN_S |CC%d| SFN [ %d,%d ], DL EARFCN [%2d, %4d], SCell ID [%3d], DL Bandwidth [ %s]
Line 4319: |CC0| PCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)],TimeDifference [ %6d]
Line 4320: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4321: |CC0| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4325: |CC0| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
Line 4326: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4327: |CC0| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4331: |CC0| PCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)], TimeDifference [ %6d]
Line 4332: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4333: |CC0| PCell SINR [ %01d.%02d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4337: |CC0| PCell RSRP [%4d (%4d, %4d, %4d, %4d)], TimeDifference [ %6d]
Line 4338: |CC0| PCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
Line 4339: |CC0| PCell RSSI [%4d (%4d, %4d, %4d, %4d)]
Line 4340: |CC0| PCell SINR [ -%01d.%02d (%3d, %3d, %3d, %3d)]
Line 4341: |CC0| PCell SINR [ %01d.%02d (%3d, %3d, %3d, %3d)]
Line 4352: |CC%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%3d (%3d, %3d)]
Line 4353: |CC%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4357: |CC%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
Line 4358: |CC%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4362: |CC%d| SCell RSRP [%4d (%4d, %4d)], RSSI [%4d (%4d, %4d)]
Line 4363: |CC%d| SCell SINR [%3d (%3d, %3d)], RSRQ [%4d (%4d, %4d)]
Line 4367: |CC%d| SCell RSRP [%4d (%4d, %4d, %4d, %4d)], SearchTimeOffset [ %6d]
Line 4368: |CC%d| SCell RSRQ [%4d (%4d, %4d, %4d, %4d)]
Line 4369: |CC%d| SCell RSSI [%4d (%4d, %4d, %4d, %4d)]
Line 4370: |CC%d| SCell SINR [%3d (%3d, %3d, %3d, %3d)]
Line 4426: |CC0| PCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
Line 4431: |CC0| PCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4442: |CC0| PCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
Line 4446: |CC0| PCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4456: |CC0| PCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d), DataRate [DL:%7d(%d) (kbps)]
Line 4457: |CC0| PCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
Line 4507: PCell eMBMS DataRate [DL:%7d(%d) (kbps)]
Line 4513: PCell eMBMS PMCH BLER[(ID:%d) %5d/%5d], MRS_SNR_RX0[%3d], MRS_SNR_RX1[%3d]
Line 4514: PCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
Line 4523: |CC%d| SCell TransMode [%d], CFI [%d], PDCCH [%5d/%5d], UCI [%5d], DCI [%5d]
Line 4527: |CC%d| SCell UCI_FORMAT [%d], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4538: |CC%d| SCell DCI_FORMAT [%X], MCS [%2d,%2d], NRB [%2d], RNTI [0x%04X]
Line 4542: |CC%d| SCell DCI_FORMAT [%X], MCS [%2d], NRB [%2d], RNTI [0x%04X]
Line 4552: |CC%d| SCell DL BLER [%3d%%][%5d(%d)/%5d](ack:%5d)]
Line 4553: |CC%d| SCell DataRate [DL:%7d(%d) (kbps)]
Line 4557: |CC%d| SCell UL BLER [%3d%%][%5d(%d)/%5d], DataRate [UL:%7d(%d) (kbps)]
Line 4563: |CC%d| SCell eMBMS DataRate [DL:%7d(%d) (kbps)]
Line 4569: |CC%d| SCell eMBMS PMCH BLER [(ID:%d) %5d/%5d]
Line 4570: |CC%d| SCell eMBMS RSRP_RX0[%3d], RSRP_RX1[%3d], RSSI_RX0[%3d], RSSI_RX1[%3d],
Line 4597: CA DL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
Line 4598: CA UL DataRate [P:%7d(%d) (kbps), S:%7d(%d) (kbps), T:%7d(%d) (kbps)]
Line 4610: |CC0| UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d, CC%d:%d], SRS [%d]
Line 4614: |CC0| UL Power : PRACH [%d], PUCCH [%d], PUSCH [%d], SRS [%d]
Line 4626: |CC0| PCell CQI [%2d,%2d], RI [%2d], NormTP [ %5d (bits/10RB)]
Line 4630: |CC0| PCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)]
Line 4634: |CC0| PCell CQI [%2d], PMI[%2d,%2d], NormTP [ %5d (bits/10RB)]
Line 4638: |CC0| PCell CQI [%2d], NormTP [ %5d (bits/10RB)]
Line 4647: |CC%d| SCell CQI [%2d,%2d], RI [%2d]
Line 4651: |CC%d| SCell CQI [%2d,%2d], RI [%2d], PMI[%2d,%2d]
Line 4655: |CC%d| SCell CQI [%2d], PMI[%2d,%2d]
Line 4659: |CC%d| SCell CQI [%2d]
Line 4664: |CC0| PCell TXC [%8d,%8d,%8d], RXC [%8d,%8d,%8d]
Line 4669: |CC%d| SCell TXC [%8d,%8d,%8d], RXC [%8d,%8d,%8d]
Line 4679: |CC0| PCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4686: |CC%d| SCell Frequency [DL: %dkHz, UL: %dkHz], Bandwidth [DL: %s, UL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4690: |CC%d| SCell Frequency [DL: %dkHz], Bandwidth [DL: %s], Antenna No. [eNB: %d, UE: %d]
Line 4695: |CC0| AGC    %3d %3d (%3d %3d) (%4d %4d) , RMS Cntl : %2d dB
Line 4700: |CC%d| AGC    %3d %3d (%3d %3d) (%4d %4d)
Line 4704: |CC0| DCmV  %4d %4d, %4d %4d
Line 4709: |CC%d| DCmV  %4d %4d, %4d %4d
Line 4713: |CC0| AFC PDM: %4d
Line 4718: AFC ANGLE CC%d: %4d
Line 4731: |CC%d| STR  %7d	%4d	%7d %7d  |  RTG [ %6d]
Line 4738: |CC0| STR  %7d  %4d  %7d %7d  |  RTG [ %6d]
Line 4741: GP ADC  %4d, %4d degrees Celsius
Line 4778: LTEDMTaskPoll_LTE_DM_L1 End
Line 4812: RACH : INIT [%3d], HO_DEDI [%3d], HO_RAND [%3d], RACH_RLF [%3d], UL_RAND [%3d], DL_DEDI [%3d], DL_RAND [%3d]
Line 4813: SR [%5d, %5d], TA Timer Expired [%3d], ReTx BSR Timer Expired [%3d], DSR MAX FAIL [%3d][%3d]
Line 4945: Cell Reselection : Start [%3d], Complete [%3d]
Line 4952: Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
Line 4956: RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
Line 4959: RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], MobCmdFailRrcAbort[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Line 4964: Protocol Error Detect : lte_ul_oos_cnt[%3d], lte_rach_rar_mismatch_cnt[%3d], lte_rach_access_fail_cnt[%3d], lte_rrc_oos_cnt[%3d], lte_rrc_rlf_cnt[%3d], lte_rrc_resel_fail_cnt[%3d]
Line 4966: Protocol Error Detect : lte_rrc_ho_fail_cnt[%3d], lte_rrc_irat_ho_fail_cnt[%3d], lte_rrc_irat_resel_fail_cnt[%3d], lte_rrc_irat_redirect_fail_cnt[%3d], lte_rrc_sib_read_fail_cnt[%3d]
Line 4968: Protocol Error Detect : lte_rrc_endc_no_rsp_cnt[%3d]
Line 5025: Cell Reselection : Start [%3d], Complete [%3d]
Line 5032: Meas Report [%3d] | Handover : Start [%3d], Complete[%3d], Latency [%3dms] | RRE : Start [%3d], Reject [%3d]
Line 5036: RRE Cause : T304HoFail[%3d], RachFail[%3d], RlcMaxRetrans[%3d], T310OutOfSync[%3d], ReconfigFail[%3d]
Line 5039: RRE Cause : IntegrityCheckFail[%3d], MobCmdFail[%3d], MobCmdFailRrcAbort[%3d], IratConfigFail[%3d], MuiListFail[%3d], Other[%3d]
Line 5044: Protocol Error Detect : lte_ul_oos_cnt[%3d], lte_rach_rar_mismatch_cnt[%3d], lte_rach_access_fail_cnt[%3d], lte_rrc_oos_cnt[%3d], lte_rrc_rlf_cnt[%3d], lte_rrc_resel_fail_cnt[%3d]
Line 5046: Protocol Error Detect : lte_rrc_ho_fail_cnt[%3d], lte_rrc_irat_ho_fail_cnt[%3d], lte_rrc_irat_resel_fail_cnt[%3d], lte_rrc_irat_redirect_fail_cnt[%3d], lte_rrc_sib_read_fail_cnt[%3d]
Line 5048: Protocol Error Detect : lte_rrc_endc_no_rsp_cnt[%3d]
Line 5283: | U-CPU Idle = %2d.%d%%, %d MHz | L-CPU Idle = %d%%, HARQ stuck = %d |
Line 5315: SystemDynamic Usage : %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]
Line 5319: PMD Usage: %2d%% (%2d%%) [ %dk total, %dk used, %dk free ]
Line 5595: LTEDMTaskPoll : %s
Line 6779: cc_idx (%d) of the given sCellIndex (%d) EXCEEDs the maximum (3)!!!
Line 6792: The input cc_idx (%d) EXCEEDs the maximum (3)!!!
Line 9733: PCell Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9769: SCell Freq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9808: InterFreq. Neighbor(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d (%4d, %4d)], RSRQ_N[%3d]
Line 9847: UtraFreq. Neighbor(%d): UARFCN[%5d], PSC[%3d], RSCP[%4d], EcNo[%3d]
Line 9886: GeranFreq. Neighbor(%d): ARFCN[%5d], BSIC[%3d], RSSI[%3d]
Line 9913: [MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](per 960ms)
Line 9923: [RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
Line 9941: [RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
Line 9958: [PDCP] Tx : RB_ID[%d] PDU[%d] Rx : RB_ID[%d] PDU[%d]
Line 9972: [MAC] Tx : PDU[%d] Rx : PDU[%d] [ST:%d](Reset/Release case)
Line 9992: [RLC] Tx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReTx PDU[%d]
Line 10013: [RLC] Rx : RB_ID[%d] SDU[%d] SDU[%d Bytes] PDU[%d] ReRx PDU[%d]
Line 10033: [PDCP] Tx : RB_ID[%d] PDU[%d] Rx : RB_ID[%d] PDU[%d]
Line 10077: Invalid stackNum:%d
Line 10087: Invalid stackNum:%d
Line 10104: Invalid stackNum:%d
Line 10114: Invalid stackNum:%d
Line 10189: Invalid sCellIndex:%d
Line 11163: LTE dsl1rc State: %d
Line 11198: [%s] LTE Sleep Duration (Black-out) %d (ms)
Line 11202: [%s] LTE RF Black-out during %d (ms)
Line 11402: [LCE DL][CONN] PHYTP[%d], CSITP[%d] (Kbps)
Line 11411: [LCE DL][IDLE] PHYTP[%d], CSITP[%d] (Kbps)
Line 11442: [LCE_IDLE] Conf_Level[%d]
