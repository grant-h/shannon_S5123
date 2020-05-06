Line 186: PS_qbit_offset %d is_qbit_offset_exceed %d
Line 235: CAL PARAMETER: qBitsDuration[%d], snap1[%d,%d], snap2[%d,%d]
Line 256: tcxo initcal drift(%d) OffsetPpb(%d) qBit(%d)
Line 278: [PSCal]  slowDiff[%d], mul[%d]
Line 280: [PSCal]  cal->denom[%d], cal->accurateScale[%d], cal->precisionScale[%d], cal->maxScale[%d], cal->maxRem[%d]
Line 282: [PSCal]  cal->maxScalePrime[%d], cal->maxRemPrime[%d]
Line 294: [PSCal] Init Cal Done
Line 307: RECAL REF from CAL[%d]: reCalRefMaxScale[%d], reCalRefMaxRem[%d], reCalRefDenom[%d]
Line 319: CAL RESULT: dataIsValid[%d], accurateScale[%d], maxScale[%d], maxRem[%d]
Line 337: DlSlReCalStoreReset Cause %d Frame %d
Line 372: [PSCal] reCalRefDenom_TO %d ScaledDenomDiff_TO %d ScaledDemon_TO %d reCalRefMaxRem_TO %d ScaledRemDiff_TO %d ScaledRem_TO %d
Line 424: RefFrame %d StoreFrameNum %d ReCalStoreRem %d ScaledRem %d reCalRefMaxRem %d ScaledRemDiff %d
Line 426: [PSCal] reCalRefMaxScale %d reCalRefMaxRem %d reCalRefDenom %d Denon_TO %d Rem_TO %d 
Line 453: [PSCal] Recalibration Done  
Line 495: Error ReCalStore 
Line 501: Need to check Frame!! Cnt %d qBits %d 
Line 507: Before reCalBuf->SumreCalStoreFrameNum %d  index %d  delete candidate %d
Line 521: After reCalBuf->SumreCalStoreFrameNum %d  index %d  delete candidate %d
Line 532: [PSCal] StoreMul %d %d SumMul %d slowdiff %d StoreFrameNum %d SumFrameNum %d
Line 534: ReCalFrameCnt %d  l1ps_cal32k->subbuf_needReCalAccumulation %d  reCalBuf->reCalStore_idx  %d  reCalBuf->reCalStoreDone %d
Line 583: [PSCal] Slow Clock ReCal [Accumulation] ReCalFrameCnt %d
Line 585: [PSCal] mul %d fcnt1 %d fcnt2 %d Scnt1 %d Scnt2 %d
Line 588: RECAL ACCUMULATION: qBitsDuration %d ReCalTotCnt %d slowDiff %d mul %d mul2 %d
Line 600: tcxo recal drift(%d) OffsetPpb(%d) MulPrime(%d)
Line 615: [PSCal] Slow Clock ReCal [Update] cal->reCalMulPrime(%d) reCalRefDenom (%d)
Line 616: [PSCal] reCalScaleDiff %d =reCalRefMaxScale %d -reCalMaxRem %d
Line 617: [PSCal] reCalRemDiff %d =(reCalScaleDiff %d *reCalDenom %d )+reCalRefMaxRem %d -reCalMaxRem %d
Line 622: [PSCal] Recalibration Fail
Line 636: RECALIBRATION : validCal(%d) reCalRemDiff(%d) reCalMaxDenom(%d) reCalMaxScale(%d) reCalMaxRem(%d)
Line 686: [PSCal] decode fail %d TO threshold exceed %d
Line 721: [PSCal]lastSck:%d,currentSck:%d,lastFastCnt%d,RefScale:%d
Line 734: [PSCal] reCalRefMaxRem %d reCalRefDenom %d reCalRefMaxRem_TO %d reCalRefDenom_TO %d
Line 736: [PSCal] sleepTimeEdges %d holdingValue %d CalculatedMaxRem %d CalculatedDenom %d
Line 737: [PSCal] Prev_ReCal : cal->reCalRemDiff %d cal->reCalMaxDenom %d
Line 778: dlScShortWait(%d)
Line 784: CALC SLEEPTIME: qBits[%d], dlScShortWait[%d], lastSnap[%d,%d], wakeUpEdge[%d]
Line 800: [PSCal] DlSlCal_ps_update_refvalue K %d W %d paging_decode_fail %d
Line 824: cal->reCalRefMaxRem[%d]  cal->reCalRefDenom[%d]  slowDiff[%d]
Line 826: k[%d] weight[%d] mod_diff_offset[%d]  qbit_offset_diff_2[%d]
Line 832: [PSCal]reCalRefMaxRem_TO %d reCalRefDenom_TO %d modifyvalue %d PS_qbit_offset %d PS_qbit_offset_prev %d
Line 888: GSM DSP Init IPC
Line 911: ############################ GSM DSP init fail,WaitCnt: %d
Line 916: GSM DSP Init IPC done
Line 926: GSM DSP Init IPC - passed.
Line 945: frPelPoolIndex = %d,  frPelNumPending = %d
Line 967: SNAP: time TCU_SNAP_CODE %d
Line 1039: DlSlHandleWakeupInterrupt  nextFrame = %d,  hasSlept = %d readCtrl 0x%x, HWSorterInitFlag = %d
Line 1074: frPelPoolIndex = %d,  frPelNumPending = %d
Line 1104: SNAP: time TCU_SNAP_CODE %d
Line 1191: WakeupScheduleHwSorter  nextFrame = %d,  hasSlept = %d readCtrl 0x%x, HWSorterInitFlag = %d
