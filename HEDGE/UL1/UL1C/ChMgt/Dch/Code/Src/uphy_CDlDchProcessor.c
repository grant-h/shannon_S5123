Line 522: Dch decoding started, reconfigurationType=%d
Line 522: Dch decoding started, reconfigurationType=%d
Line 545: generateSyncInd: CFN=%d, isFdpchConfigured=%d
Line 545: generateSyncInd: CFN=%d, isFdpchConfigured=%d
Line 578: Abnormal token!, releasing the token now.
Line 578: Abnormal token!, releasing the token now.
Line 607: Sync phase setting - uhal_Cmd_exec
Line 607: Sync phase setting - uhal_Cmd_exec
Line 643: S0 uphy_CDlDchProcessor_processTrBlkCrcInfo: Don't process as DCH is paused
Line 643: S0 uphy_CDlDchProcessor_processTrBlkCrcInfo: Don't process as DCH is paused
Line 667: S0  trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already
Line 667: S0  trchCrcListInfo did not found in the list: probably processTrBlkCrcInfo called when dedicated mode was released already
Line 683: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already
Line 683: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably processTrBlkCrcInfo called when given trch was released already
Line 720: S0  trchCrcListInfo == NULL pointer
Line 720: S0  trchCrcListInfo == NULL pointer
Line 749: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications
Line 749: S0  trchCrcListInfo for trcChId=%d did not found in the list: probably already released during modifications
Line 877: Cfn %d: No Sync Report generated as less than 40ms since decoding started
Line 877: Cfn %d: No Sync Report generated as less than 40ms since decoding started
Line 891: In/Out Sync - uhal_Cmd_exec
Line 891: In/Out Sync - uhal_Cmd_exec
Line 915: S0  [TX-ON]InSync- uphy_CDlDchProcessor_provideSyncInd
Line 915: S0  [TX-ON]InSync- uphy_CDlDchProcessor_provideSyncInd
Line 921: syncPhase %d syncIndRequired %d rlStr %d isInSync %d inSyncStr %d outOfSyncStr %d
Line 921: syncPhase %d syncIndRequired %d rlStr %d isInSync %d inSyncStr %d outOfSyncStr %d
Line 939: EHalPhase0: syncIndRequired %d rlStr %d, dlDchProcessor_ptr->phaseTimeOutCnt %d
Line 939: EHalPhase0: syncIndRequired %d rlStr %d, dlDchProcessor_ptr->phaseTimeOutCnt %d
Line 956: Phy Out Of Sync based on poor DPCCH dlDchProcessor_ptr->isRfEnabled : %d, fingerRelockCount: %d 
Line 956: Phy Out Of Sync based on poor DPCCH dlDchProcessor_ptr->isRfEnabled : %d, fingerRelockCount: %d 
Line 965: S0  [TX-OFF]OutSync -uphy_CDlDchProcessor_provideSyncInd
Line 965: S0  [TX-OFF]OutSync -uphy_CDlDchProcessor_provideSyncInd
Line 975: Phy Out Of Sync based on poor Crc statistics
Line 975: Phy Out Of Sync based on poor Crc statistics
Line 985: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 985: Phy goes back in-sync after out-of-sync. Insync cnt is %d
Line 1006: Bad Sync State
Line 1006: Bad Sync State
Line 1106: S0  uphy_CDlDchProcessor_SendSyncMessage: inSyncMsg=NULL
Line 1106: S0  uphy_CDlDchProcessor_SendSyncMessage: inSyncMsg=NULL
Line 1124: S0 Unable to Send Sync Indication
Line 1124: S0 Unable to Send Sync Indication
Line 1132: uphy_CDlDchProcessor_SendOutOfSyncMessage: outOfSyncMsg=NULL
Line 1132: uphy_CDlDchProcessor_SendOutOfSyncMessage: outOfSyncMsg=NULL
Line 1150: uphy_CDlDchProcessor_SendOutOfSyncMessage: isSirDropDetected	= sent to RRC
Line 1150: uphy_CDlDchProcessor_SendOutOfSyncMessage: isSirDropDetected	= sent to RRC
Line 1156: S0 uphy_CDlDchProcessor_SendSyncMessage: noOfConsecutiveOutOfSyncBitstring=%d
Line 1156: S0 uphy_CDlDchProcessor_SendSyncMessage: noOfConsecutiveOutOfSyncBitstring=%d
Line 1170: Unable to Send OutOfSync Indication
Line 1170: Unable to Send OutOfSync Indication
Line 1270: Invalid State
Line 1270: Invalid State
Line 1276: Rf Tx On/Off - uhal_Cmd_exec
Line 1276: Rf Tx On/Off - uhal_Cmd_exec
Line 1284: Uphy powers up(0)/down(1) : %d
Line 1284: Uphy powers up(0)/down(1) : %d
Line 1376: uphy_CDlDchProcessor_notifyDlTrChInfoChanged start decoding
Line 1376: uphy_CDlDchProcessor_notifyDlTrChInfoChanged start decoding
Line 1385: S0  Invalid nTrch (%d) returned
Line 1385: S0  Invalid nTrch (%d) returned
Line 1427: S0  DlDchProcessor detected a trch with 0 length CRC when btfd is used
Line 1427: S0  DlDchProcessor detected a trch with 0 length CRC when btfd is used
Line 1450: S0  DlDchProcessor detected UHAL inconsistancies in Ctfc table
Line 1450: S0  DlDchProcessor detected UHAL inconsistancies in Ctfc table
Line 1472: S0  DlDchProcessor failed to locate tfis: nTrch %d trchNr %d firstCtfc %d secondCtfc %d copyCtfc %d copyCtfc2 %d
Line 1472: S0  DlDchProcessor failed to locate tfis: nTrch %d trchNr %d firstCtfc %d secondCtfc %d copyCtfc %d copyCtfc2 %d
Line 1480: S0  Clear Power ratio BTFD flag(use CRC BTFD)
Line 1480: S0  Clear Power ratio BTFD flag(use CRC BTFD)
Line 1541: Cant locate uhal trch instance %d
Line 1541: Cant locate uhal trch instance %d
Line 1548: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1548: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1549: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1549: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1587: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1587: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1591: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1591: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1603: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1603: S0 In BTFD: Trch[%d] is ignored and nTrChsToIgnore %d
Line 1607: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1607: S0 nTrChsToIgnore exceeds the capacity of the array trChsToIgnore
Line 1643: S0  Cant locate uhal trch instance %d
Line 1643: S0  Cant locate uhal trch instance %d
Line 1650: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1650: S0 DCCH urrcTrchId = %d, trchNum = %d
Line 1664: S0  Cant locate uhal trch instance %d
Line 1664: S0  Cant locate uhal trch instance %d
Line 1740: S0 prev_sF=%d, sf=%d, delta_sir %d, currentSirTarget %d, isFdpchConfigured %d
Line 1748: S0  DedicatedCommonConfig - uhal_Cmd_exec
Line 1748: S0  DedicatedCommonConfig - uhal_Cmd_exec
Line 1756: S0 ReconfigurationType=%d sf=%d very_init_sir=%d sir_dB_offseted_by_sf=%d
Line 1756: S0 ReconfigurationType=%d sf=%d very_init_sir=%d sir_dB_offseted_by_sf=%d
Line 1818: S0  GuidingTfiStatus == NULL pointer
Line 1818: S0  GuidingTfiStatus == NULL pointer
Line 1892: S0  Unable to Locate Guiding and Guided tfi for some ctfc
Line 1892: S0  Unable to Locate Guiding and Guided tfi for some ctfc
Line 1917: S0  nTrChs=%d Array Index Out of bound
Line 1917: S0  nTrChs=%d Array Index Out of bound
Line 1951: S0  uphy_CDlDchProcessor_SRBprotectionMode: SRB protection Mode triggered
Line 1951: S0  uphy_CDlDchProcessor_SRBprotectionMode: SRB protection Mode triggered
Line 2038: S0 adjustSirTarget: currentCfn=%d, currentSlot=%d, trChNr=%d, trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d
Line 2038: S0 adjustSirTarget: currentCfn=%d, currentSlot=%d, trChNr=%d, trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d
Line 2054: S0  Sir Target A - uhal_Cmd_exec
Line 2054: S0  Sir Target A - uhal_Cmd_exec
Line 2081: S0 Don't set qualityTarget when maxNumOfTrCH=%d and decodedNumOfTrCH=%d are different
Line 2081: S0 Don't set qualityTarget when maxNumOfTrCH=%d and decodedNumOfTrCH=%d are different
Line 2099: S0 During connected prev TargetSir = %d
Line 2099: S0 During connected prev TargetSir = %d
Line 2150: S0 trChNr %d, trChId %d, qualityTarget %d, tbSize %d, coding %d, tti %d
Line 2150: S0 trChNr %d, trChId %d, qualityTarget %d, tbSize %d, coding %d, tti %d
Line 2179: S0 Selected Target SIR trch = %d qualityTargetTrChId = %d
Line 2179: S0 Selected Target SIR trch = %d qualityTargetTrChId = %d
Line 2193: S0  No BLER Target Specified
Line 2193: S0  No BLER Target Specified
Line 2229: S0  array index out of bounds.qualityTarget=%d
Line 2229: S0  array index out of bounds.qualityTarget=%d
Line 2244: S0  dlDchProcessor_ptr->trBlkBadKeep Memory allocation Failed 
Line 2244: S0  dlDchProcessor_ptr->trBlkBadKeep Memory allocation Failed 
Line 2252: S0  dlDchProcessor_ptr->trBlkKeep Memory allocation Failed 
Line 2252: S0  dlDchProcessor_ptr->trBlkKeep Memory allocation Failed 
Line 2256: S0  dlDchProcessor_ptr->currentBlerWindowMeasureSize %d 
Line 2256: S0  dlDchProcessor_ptr->currentBlerWindowMeasureSize %d 
Line 2280: S0 Outer Loop mode %d, dlpcStepSize %d(dBx1000), MinSir %d (dBx1000), MaxSir %d (dBx1000), insync_upper %d (dBx1000), insync_lower %d (dBx1000)
Line 2280: S0 Outer Loop mode %d, dlpcStepSize %d(dBx1000), MinSir %d (dBx1000), MaxSir %d (dBx1000), insync_upper %d (dBx1000), insync_lower %d (dBx1000)
Line 2283: S0 StepUp for bad CRC %d (dBx1000), StepDown for Good CRC %d (dBx1000), NumOfStep %d
Line 2283: S0 StepUp for bad CRC %d (dBx1000), StepDown for Good CRC %d (dBx1000), NumOfStep %d
Line 2335: S0 Viterbi List ID for TrCh index :%d, TrCh Nr:%d
Line 2335: S0 Viterbi List ID for TrCh index :%d, TrCh Nr:%d
Line 2348: S0 Bad CRC processing(Before) : CRC Non-BTFD status:0x%x,List Vit ID: 0x%x, numTrBlksBad %d
Line 2348: S0 Bad CRC processing(Before) : CRC Non-BTFD status:0x%x,List Vit ID: 0x%x, numTrBlksBad %d
Line 2358: S0 Bad CRC processing(After) : numTrBlksBad %d
Line 2358: S0 Bad CRC processing(After) : numTrBlksBad %d
Line 2417: S0 Power ratio BTFD : numTrBlksBad %d , totalNumOfBadCrcs %d , numTrBlks %d 
Line 2417: S0 Power ratio BTFD : numTrBlksBad %d , totalNumOfBadCrcs %d , numTrBlks %d 
Line 2468: S0 TrchOfTarget=%d TrchId: %d dlDchProcessor_ptr->trBlkBadTotal %d dlDchProcessor_ptr->trBlkTotal %d BLER %d
Line 2468: S0 TrchOfTarget=%d TrchId: %d dlDchProcessor_ptr->trBlkBadTotal %d dlDchProcessor_ptr->trBlkTotal %d BLER %d
Line 2491: S0 Good CRC, BTFD, Non-zero ListID
Line 2491: S0 Good CRC, BTFD, Non-zero ListID
Line 2498: S0 Good CRC, BTFD, Zero ListID
Line 2498: S0 Good CRC, BTFD, Zero ListID
Line 2626: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2626: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2642: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2642: S0 Bad CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2652: S0 Good CRC, but list viterbi ID is not 0. Treating the CRC as bad and invoking the stepup algorithm. (list viterbi : 0x%x)
Line 2652: S0 Good CRC, but list viterbi ID is not 0. Treating the CRC as bad and invoking the stepup algorithm. (list viterbi : 0x%x)
Line 2767: S0 newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2767: S0 newSirTarget %d (dBx1000), currentSirTarget %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2783: S0 newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2783: S0 newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d (dBx1000), measuredSir %d, numTrBlksBad %d, totalNumOfBadCrcs %d
Line 2836: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d, sirChange %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, dlDchProcessor_ptr->uphy_dlpc_mode=%d
Line 2836: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d, sirChange %d, measuredSir %d, StepDownCnt %d, StepDownLevel %d, dlDchProcessor_ptr->uphy_dlpc_mode=%d
Line 2868: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d, measuredSir %d
Line 2868: S0 Good CRC: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), sirChange %d, measuredSir %d
Line 2878: S0 No CRC: not changing target SIR from %d (dBx1000)
Line 2878: S0 No CRC: not changing target SIR from %d (dBx1000)
Line 2904: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode triggered dB Target SIR increase, dlDchProcessor_ptr->newSirTarget(%d)
Line 2904: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode triggered dB Target SIR increase, dlDchProcessor_ptr->newSirTarget(%d)
Line 2915: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode Ending =>dB Target SIR decrease, dlDchProcessor_ptr->newSirTarget(%d)
Line 2915: S0  uphy_CDlDchProcessor_adjustSirTarget: SRB protection Mode Ending =>dB Target SIR decrease, dlDchProcessor_ptr->newSirTarget(%d)
Line 2927: S0 newSirTarget %d (dBx1000x1000) is greater than MaxLimit %d (dBx1000x1000). Force to set MaxLimit
Line 2927: S0 newSirTarget %d (dBx1000x1000) is greater than MaxLimit %d (dBx1000x1000). Force to set MaxLimit
Line 2935: S0 newSirTarget %d (dBx1000x1000) is less than MinLimit %d (dBx1000x1000). Force to set MinLimit
Line 2935: S0 newSirTarget %d (dBx1000x1000) is less than MinLimit %d (dBx1000x1000). Force to set MinLimit
Line 2954: S0  Sir Target - uhal_Cmd_exec
Line 2954: S0  Sir Target - uhal_Cmd_exec
Line 2968: S0 Outerloop skipped : number of trch Block is %d
Line 2968: S0 Outerloop skipped : number of trch Block is %d
Line 3000: S0 sir_Gap %d, currentSirTarget %d (dBx1000), averageSir %d uphy_dlpc_insync_lower %d
Line 3000: S0 sir_Gap %d, currentSirTarget %d (dBx1000), averageSir %d uphy_dlpc_insync_lower %d
Line 3094: S0 >>>>>>> uhal_CommonData[stackId].OLPC_STATE %d: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), IsGood %d uhal_CommonData[stackId].Conv_timer %d
Line 3094: S0 >>>>>>> uhal_CommonData[stackId].OLPC_STATE %d: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), IsGood %d uhal_CommonData[stackId].Conv_timer %d
Line 3179: S0 [Good CRC] Condition Triggered for fast counter update (%d)
Line 3179: S0 [Good CRC] Condition Triggered for fast counter update (%d)
Line 3183: S0 SIR target too high and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3183: S0 SIR target too high and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3226: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3226: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3242: S0 SIR target too low and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3242: S0 SIR target too low and good BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3259: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3259: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3287: S0 [Bad CRC] Condition Triggered for fast counter update (%d)
Line 3287: S0 [Bad CRC] Condition Triggered for fast counter update (%d)
Line 3292: S0 SIR target too high and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3292: S0 SIR target too high and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3303: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3303: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3319: S0 SIR target too low and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3319: S0 SIR target too low and bad BLER: currentSirTarget %d (dBx1000), measuredSir %d (dBx1000), counter %d, IsGood %d
Line 3344: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3344: S0 >>>>>>> Convergence Timeout: newSirTarget %d (dBx1000), currentSirTarget %d (dBx1000)
Line 3379: [uphy_CDlDchProcessor_ChangeQualityTarget] cctrchNr %d
Line 3379: [uphy_CDlDchProcessor_ChangeQualityTarget] cctrchNr %d
Line 3414: S0 changeQualityTarget: currentCfn=%d, qualityTargetTrChId=%d, qualityTarget=%d
Line 3414: S0 changeQualityTarget: currentCfn=%d, qualityTargetTrChId=%d, qualityTarget=%d
Line 3431: S0 targetTpcErrorRate Out of Bounds : targetTpcErrorRate=%d
Line 3431: S0 targetTpcErrorRate Out of Bounds : targetTpcErrorRate=%d
Line 3440: S0 targetTpcErrorRate=%d, fdpchSirTarget=%d
Line 3440: S0 targetTpcErrorRate=%d, fdpchSirTarget=%d
Line 3446: S0  Sir Target - uhal_Cmd_exec
Line 3446: S0  Sir Target - uhal_Cmd_exec
Line 3520: uphy_CDlDchProcessor_UhalTriggeredDpchSyncReportingp : Instance is Null 
Line 3520: uphy_CDlDchProcessor_UhalTriggeredDpchSyncReportingp : Instance is Null 
