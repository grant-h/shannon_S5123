Line 113: UMS: Starting Initial RSCP/ECNO step 1 duration(%d)
Line 120: L1ST_UMM: Ignoring UMM Request... triggering 3G MODEM OFF.
Line 142: UMS: !!!! l1x_UmmMeasureInitialRscp: Out Of Memory MP 0x%8x, MLP 0x%8x, RP 0x%8x
Line 169: L1ST_UMM: Aborting measurement, reset the UHAL measurement server
Line 183: L1PS_UMM ERROR: UARFCN - %d is not valid
Line 184: L1PS_UMM ERROR: Umts timing offsets could not be recalculated
Line 190: L1PS_UMM ERROR: UARFCN - %d is not valid
Line 191: L1PS_UMM ERROR: Cummulative Qbit offset could not be reset
Line 233: ERROR: UARFCN - %d is not found
Line 240: l1x_UmmInitialRscpStep1: SIL_3GSigGen start:%dqbits, delta:%dqbits
Line 252: ERROR: UARFCN - %d is not found
Line 288: UMS: RSSI measurement
Line 295: L1ST_UMM: Ignoring UMM Request... triggering 3G MODEM OFF.
Line 313: UMS: !!!! l1x_UmmMeasureUarfcnRssi: Out Of Memory MP 0x%8x, FP 0x%8x
Line 331: L1ST_UMM: Aborting measurement, reset the UHAL measurement server
Line 358: l1x_UmmUarfcnRssiRequest: SIL_3GSigGen start:%dqbits, delta:%dqbits
Line 394: l1x_UmmRscpUpdateReqHisr Start
Line 398: l1x_UmmRscpUpdateReqHisr End
Line 462: --- UMS: RSCP UPDATE
Line 466: --- UMS: RSCP UPDATE called without cell
Line 475: L1ST_UMM: Ignoring UMM Request... triggering 3G MODEM OFF.
Line 496: UMS: !!!! l1x_UmmMeasureRscpUpdate: Out Of Memory MP 0x%8x, MLP 0x%8x, RP 0x%8x
Line 519: L1ST_UMM: Aborting measurement, reset the UHAL measurement server
Line 560: Update Timing UARFCN:%d, SC:%d, sfn:%d, slot:%d, chip:%d, frame_offset:%d
Line 569: L1PS_UMM ERROR:Modem is not in power up state - cannot clock latch!!!
Line 607: ERROR: UARFCN - %d is not valid
Line 608: ERROR: Umts timing offsets could not be recalculated
Line 613: ERROR: UARFCN - %d is not valid
Line 614: ERROR: Could not reset cummulative Qbit shift
Line 619: ERROR: UARFCN - %d is not valid
Line 620: ERROR: Could not retrieve cummulative Qbit shift
Line 628: l1x_UmmInitialRscpStep1: SIL_3GSigGen start:%dqbits, delta:%dqbits
Line 659: UMS: l1x_TddRscpUpdate called !
Line 676: the UTRAN RSCP update avoided for BCH(%d) PCH( %d) l1x_toggle_pending %d
Line 700: UMS: l1x_UmmInitial_Step1_Adapter called !
Line 719:  UTRAN Initial RSCP step 1 avoided for BCH(%d) PCH( %d)
Line 742: UMS: l1x_TddUmmInitial2_Adapter called !
Line 751: UMS: l1x_UmmInitial2_Adapter called when two step measurements not enabled!
Line 757: UTRAN Initial RSCP step 2 avoided for BCH(%d) PCH( %d)
Line 781:  UMM Cell Search avoided for BCH(%d) PCH( %d) l1x_toggle_pending %d
Line 803: UMS :l1x_UmmDummy_Adapter called. This should not be possible!
Line 863: UMM: Latch G and U-MODEMs - {%dFN, %dQb}; {%dSLOT, %dHALF CHIP};gFrameCount=%d:%d
Line 878: Reset G2U & G2T IRAT measurement Flags %d G2U %d G2T %d
Line 924: UMM: Last TCU Latch: {%d, %d}
Line 926: UMM: Last U-MODEM Counter Latch: SLOT = %d; HALF CHIP = %d
Line 939: UMM: TCU wrap around - Latch time Qbit delta = %d
Line 948: UMM: Latch time Qbit delta = %d
Line 953: UMM ERROR: Consecutive G-Modem latches with equal frame num: %d
Line 979: ROUND UP UMTS INTERUPT DELTA
Line 983: UMM: Intermediate umts time base chip delta = %d
Line 990: UMM: umts time add on = %d
Line 1008: FINAL UMTS INTERUPT DELTA IN CHIPS = %d
Line 1046: ---UMM:Timing offset < time base delta; New offset = {%d, %d}
Line 1055: ---UMM:Timing offset > time base delta; New offset = {%d, %d}
Line 1062: ---UMM:Timing offset == time base delta; New offset = {%d, %d}
