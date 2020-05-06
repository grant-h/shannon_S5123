Line 418: activeStackId %d HsupaDlPhyCh start: phyChType =%d PhyChNr = %d TxDiversityMode = STTD
Line 424: activeStackId %d HsupaDlPhyCh start: phyChType =%d PhyChNr = %d TxDiversityMode = CLTD
Line 430: activeStackId %d HsupaDlPhyCh start: phyChType =%d PhyChNr = %d TxDiversityMode = None
Line 478: HsupaDlPhyCh start request fails: originalState of (phychNr, hsupaPhychNr) = (%d, %d) is %d. It's a wrong state
Line 516: Uhal Starts EAGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 520: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 524: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 528: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 532: Uhal Starts EHICH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 536: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 540: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 544: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 548: Uhal Starts ERGCH phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 552: Uhal Starts unknown phychNr %d (phychType=%d, hsupaRlsStr=%x)
Line 714: uhal HsupaDlPhychStart check fails: phychNr %d is greater than maxPhychNr %d
Line 771: uhal_Agch_LISR
Line 779: AGCH_HISR execution failure
Line 800: uhal_Rgch_LISR
Line 808: RGCH_HISR execution failure
Line 832: uhal_HICH_LISR
Line 845: HICH_HISR execution failure
Line 874: activeStackId %d AGCH Int triggered
Line 962: activeStackId %d E-HICH: servingRlsStr=0x%x, detector enabledStr=0x%x
Line 989: activeStackId %d E-RGCH: detectorServingRlsInx=0x%x, servingRlsStr=0x%x
Line 1009: ERROR: Invalid number of Non ServingMask [non_servIndex %d]
Line 1031: activeStackId %d E-HICH: detectorServingRlsInx=0x%x, servingRlsStr=0x%x
Line 1050: ERROR: Invalid number of Non ServingMask [non_servIndex %d]
Line 1077: activeStackId %d E-DCH serving RL changed
Line 1094: activeStackId %d TokenP = 0x%x  at TokenPool[ idex = %d ], its address = 0x%x
Line 1124: HICH SignalSigned[0] 0x%x, SignalSigned[1] 0x%x, SNR[0] %d, SNR[1] %d, SNR[2] %d, SNR[3] %d, ACK_TTIN 0x%x
Line 1128: RGCH SignalSigned[0] 0x%x, SignalSigned[1] 0x%x, SNR[0] %d, SNR[1] %d, SNR[2] %d, SNR[3] %d, ACK_TTIN 0x%x
Line 1133: activeStackId %d AGCH IntCnt : %d, Sync10_2 IntCnt : %d
Line 1139: activeStackId %d IsFakeConfigured : %d, index : %d
Line 1148: activeStackId %d AGCH servingRlNr %d
Line 1380: [DEBUG E-AGCH] ChNr %d, ref_cell_nr %d, DpchOffset %d
Line 1401: [DEBUG E-AGCH] crc_result %d, crc_result_buf %d
Line 1442: [E-AGCH 2ms TTI] AgValue %d, AgScope %d, ErntiIdType %d, current_subfr %d, s %d, t %d,  target_ttin %d
Line 1445: s %d, t %d, TimeDiff %d, DpchOffset %d
Line 1461: [E-AGCH 10ms TTI] Dpch Offset %d, SFN %d, CFN2SFN %d, TTIN %d, AG value %d
Line 1506: activeStackId %d TokenP = 0x%x is not used at all at [idex = %d]
Line 1526: [AGCH Token Submit] sfn %d, slot %d, chip %d, chsCfn %d, chsSlot %d, chsChip %d
Line 1538: [Submit_Token_AGCH]EDCH_SubSlot %d, EDCH_SubChip %d, [AGCH]AGCH_SubSlot: %d, AGCH_SubChip %d [AGCH_Subfr %d, EDCH_Subfr %d]
Line 1599: activeStackId %d servingRlsStr=0x%x
Line 1606: activeStackId %d servingRl %d not in servingRlsStr=0x%x
Line 1662: activeStackId %d Wrong RGCH Serving RL Index
Line 1695: ERROR: Invalid number of RL [rlNr %d]
Line 1745: activeStackId %d Wrong RGCH Serving RL Index
Line 1875: activeStackId %d RGCH Serving FA : uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_DCRemoved %d, uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR %d
Line 1880: [1]RGCH IIR debug logging: index=%d,current_tti=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR_state_flag[current_tti][index]=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_NOISE_RD_IIR[current_tti][index]=%d
Line 1883: [2]RGCH IIR debug logging: uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR_state[current_tti][index]=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_IIR[current_tti][index]=%d,uhal_CHmcpHsupaDlPhychStartData[activeStackId].ERGCH_BIT_RD_DCRemoved[current_tti][index]=%d,detection_result_before_bias_rem=%d,detection_result_after_bias_rem=%d
Line 1940: [DEBUG S E-RGCH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d
Line 1942: [DEBUG S E-RGCH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, current_slot %d, DpchOffset %d
Line 1996: activeStackId %d servingRlsStr=0x%x
Line 2004: activeStackId %d servingRl %d not in servingRlsStr=0x%x
Line 2054: activeStackId %d Wrong HICH Serving RL Index
Line 2071: ERROR: Invalid number of RL [rlNr %d]
Line 2122: activeStackId %d Wrong HICH Serving RL Index
Line 2208: [DEBUG S E-HICH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d, hich_int_index 0x%x
Line 2210: [DEBUG S E-HICH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, current_slot %d, DpchOffset %d, TauRGCH %d
Line 2216: Skip update Serving HICH detection result: gUHAL_RF_PausedandResumed %d, ds_gUHAL_RF_PausedandResumed %d, HICH result before pause %d, HICH result after resume %d 
Line 2313: activeStackId %d Wrong HICH Serving RL Index
Line 2365: [DEBUG NS E-HICH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d
Line 2367: [DEBUG NS E-HICH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, current_slot %d, DpchOffset %d, tauRgch %d
Line 2373: Skip update Non Serving HICH detection result: gUHAL_RF_PausedandResumed %d, ds_gUHAL_RF_PausedandResumed %d, HICH result before pause %d, HICH result after resume %d 
Line 2385: activeStackId %d False Alarm : SignalPower %d, IirNoisePower*Th %d, Result %d
Line 2399: activeStackId %d False Alarm : SignalPower %d, IirNoisePower*Th %d, Result %d
Line 2475: activeStackId %d Wrong RGCH Serving RL Index
Line 2587: RGCH Non-Serving FA : noise_level(%d),noise_level_for_dec(%d), NONSERV_ERGCH_NOISE_RD_IIR(%d) NONSERV_ERGCH_BIT_RD_DCRemoved(%d)
Line 2696: [DEBUG NS E-RGCH] ChNr %d, MappedChNr %d, hsupaRlNr %d, ref_cell_nr %d, DpchOffset %d
Line 2698: [DEBUG NS E-RGCH] HARQ ID Calculation : current_sfn %d, TimeDiffToCfnSfn %d, s %d, t %d, DpchOffset %d
