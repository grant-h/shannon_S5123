Line 283: BurstIndex(%d) SACCH(%d) IQflag(%d) SoftSum(%d) TO(%d) FO(%d)]
Line 289: NB IQ [312SYM], [TCH][PRX] BurstIndex : 0 
Line 293: NB IQ [312SYM], [TCH][PRX] BurstIndex : 1 
Line 297: NB IQ [312SYM], [TCH][PRX] BurstIndex : 2 
Line 301: NB IQ [312SYM], [TCH][PRX] BurstIndex : 3 
Line 308: NB IQ [312SYM], [TCH][DRX] BurstIndex : 0 
Line 312: NB IQ [312SYM], [TCH][DRX] BurstIndex : 1 
Line 316: NB IQ [312SYM], [TCH][DRX] BurstIndex : 2 
Line 320: NB IQ [312SYM], [TCH][DRX] BurstIndex : 3 
Line 327: NB IQ [312SYM], [TCH][PRX] BurstIndex : 0 
Line 328: NB IQ [312SYM], [TCH][DRX] BurstIndex : 0 
Line 332: NB IQ [312SYM], [TCH][PRX] BurstIndex : 1 
Line 333: NB IQ [312SYM], [TCH][DRX] BurstIndex : 1 
Line 337: NB IQ [312SYM], [TCH][PRX] BurstIndex : 2 
Line 338: NB IQ [312SYM], [TCH][DRX] BurstIndex : 2 
Line 342: NB IQ [312SYM], [TCH][PRX] BurstIndex : 3 
Line 343: NB IQ [312SYM], [TCH][DRX] BurstIndex : 3 
Line 349: CIPHERGO STREAM 
Line 353: CIPHERGO STREAM 
Line 358: NB IQ [312SYM], [SACCH][PRX] : 
Line 359: NB IQ [312SYM], [SACCH][DRX] : 
Line 445: HR: RxLev_Sub %d
Line 475: VamosDetectionFlag(%d)
Line 503: WARNING, BIG DC OFFSET in SS222AP 
Line 508: [SAIC] Put rxTdsSet_p->eqTds Arfcn [%d] Rssi [%d] Snir [%d] DiagCoeff[%x] 
Line 513: [SAIC] Put arfcnsaicdata_p Arfcn [%d] Rssi [%d] Snir [%d] DiagCoeff[%x] 
Line 667: [GL1 Error] ProcessNbResults: EQ TNC status = %x, Address = %x
Line 698: Task ID = %d; V0_STATUS = %d,  CR = %d, V0_CR = %d 
Line 746: FirstGoodFrame=%d, TestModeRssi=%d, TestBerRssiGap=%d, TEST_13FN_MOD_NUM=%d, TEST_13FN_MOD_IDLE=%d 
Line 784: [Result] CS EQ eqTds dihandle [0x%x] rxhandle [0x%x] agchandle[0x%x] address [0x%x] command[0x%x]
Line 795: Burst:%d FO:%d TO:%d RSSI:%d BitErr:%d SoftDec:%d ARFCN=%d
Line 799: errorCount:%d 
Line 809: RSSI LowIF Flag : TRUE, RSSI: %d
Line 820: [Dedi][eqTds Config] command(0x%x), channel(0x%x), diHandle(0x%x), RxDiversityMode(%d), SimFlag(0x%x), TSC(%d), burstIndex(%d)
Line 821: [Dedi][EQ Result][PRX] measuredY(%d), usedGain(%d), RSSI(%d) [DRX] measuredY(%d), usedGain(%d), RSSI(%d), [Combining] path_valid(%d)
Line 822: [Dedi][EQ Result][SAIC] CCI(%d), AsyncCci(%d), SaicStatusFlag(%x), EnableMultEQ(%d), softsum_1st(%d), softsum_2nd(%d), sdTotal(%d)
Line 823: [Dedi][EQ Result] CIRatio(%d), diag_coeff(%d), cutoff(%d), ACI(%d),PreProcessingTime(%d),MainProcesingTime(%d), LteCci(%d)
Line 824: [Dedi][EQ Result] BurstCnt(%d), EqFeedback_CE(%d), VAMOS(%d), VAMOS_SCPIR(%d), eqCir_diff_val_1st(%d), eqCir_diff_val_2nd(%d)
Line 825: [Dedi][EQ ASIP1] DemodInfo(%x), ChanType(%x), RssiGain(%x), BmdAcc(%x), derotFreq(%x), FullScaleAdc(%x), CiRatio(%x)
Line 826: [Dedi][EQ ASIP2] MicDiagCoeff(%x), ,MicRssiDbm(%x), MicAvgSinr(%x), FilteredCIRatio(%x), VamosThr(%x), reserved1(%x), reserved2(%x)
Line 829: [Dedi][SACCH][eqTds Config] command(0x%x), channel(0x%x), diHandle(0x%x), RxDiversityMode(%d), SimFlag(0x%x), TSC(%d), burstIndex(%d)
Line 830: [Dedi][SACCH][EQ Result][PRX] measuredY(%d), usedGain(%d), RSSI(%d) [DRX] measuredY(%d), usedGain(%d), RSSI(%d), [Combining] path_valid(%d)
Line 831: [Dedi][SACCH][EQ Result][SAIC] CCI(%d), AsyncCci(%d), SaicStatusFlag(%x), EnableMultEQ(%d), softsum_1st(%d), softsum_2nd(%d), sdTotal(%d)
Line 832: [Dedi][SACCH][EQ Result] CIRatio(%d), diag_coeff(%d), cutoff(%d), ACI(%d),PreProcessingTime(%d),MainProcessingTime(%d), LteCci(%d)
Line 833: [Dedi][SACCH][EQ Result] BurstCnt(%d), EqFeedback_CE(%d), VAMOS(%d), VAMOS_SCPIR(%d), eqCir_diff_val_1st(%d), eqCir_diff_val_2nd(%d)
Line 834: [Dedi][SACCH][EQ ASIP1] DemodInfo(%x), ChanType(%x), RssiGain(%x), BmdAcc(%x), derotFreq(%x), FullScaleAdc(%x), CiRatio(%x)
Line 835: [Dedi][SACCH][EQ ASIP2] MicDiagCoeff(%x), ,MicRssiDbm(%x), MicAvgSinr(%x), FilteredCIRatio(%x), VamosThr(%x), reserved1(%x), reserved2(%x)
Line 841: [F]!!!!!!!!!!!! EQ_ASIP_ABORT(status: %x) !!!!!!!!!!!! 
Line 842: [F]eqTds.channel(%x), asipDownloadStatus(%x)
Line 848: Burst:%d
Line 857: filteredCIRatio:%d, carrierToInterferenceRatio:%d
Line 861: carrierToInterferenceRatio:%d
Line 939: Block metrics FO:0x%08x TO:0x%08x RSSI:0x%08x BitErr:0x%08x SoftDec:0x%08x
Line 983: L1CfgAntSwitchingInitWithoutAnt sqnb
Line 989: L1CfgAntSwitchingInit sqnb
Line 1076: ifDedEst = %d, decodedOk = %d
Line 1078: The repetition Index (%d), repeated_sacch_index-%d if Second SACCH decode (%d)
