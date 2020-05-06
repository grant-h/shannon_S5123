Line 103: MmcIfCtrlr SendFailMsg due to Modem off
Line 111: MmcIfCtrlr SendFailMsg due to time latch
Line 171: Source[CDMA1x] - CnfResult(%d) PilotPn(%d) PnPhase(%d) PilotStrength(%d)
Line 202: Source[HRPD] - CnfResult(%d) PilotPn(%d) PnPhase(%d) PilotStrength(%d)
Line 208: Undefined Rat Type(%d)
Line 216: Ignore stop confirm
Line 238: Source[HRPD] - Chip(%d) Chipx8(%d) Slot(%d) FrameH(0x%x) FrameL(0x%x)
Line 253: Source[CDMA1x] - FrameH(0x%x) FrameL(0x%x)
Line 260: Source[LTE] - Offset(%d) SFN(%d) TTI(%d)
Line 288: ##[NR_BPLMN] %s:: avail_time[%d], start_time[%d], SrchOnRat[%d] (NR:6)
Line 296: avail_time[%d], start_time[%d], SrchOnRat[%d] (1x:3, HRPD:4)
Line 305: RoutingInfo(0x%x)
Line 312: ##[NR_MMCIF] MMCIFCTRLR_MEAS_REQ_Handler : Rat(%d) MeasMode(%d)
Line 332: ##[NR_MMCIF] MEASTYPE_IRAT_LTE_SRCH : earfcn(%d) duration_sfn(%d) duration_tti(%d) duration.offset(%d), AGC1(%d) AGC2(%d)
Line 352: ##[NR_MMCIF] MEASTYPE_IRAT_LTE_MEAS : [%d] cellId(%d) cpType(%d) measureBandwidth(%d) timingOffset(%d)
Line 359: ##[NR_MMCIF] MEASTYPE_IRAT_LTE_MEAS : earfcn(%d) duration_sfn(%d) duration_tti(%d) duration.offset(%d), AGC1(%d) AGC2(%d)
Line 377: ##[NR_MMCIF] MEASTYPE_IRAT_LTE_BOTH : [%d] earfcn(%d) measBandwidth(%d)
Line 380: ##[NR_MMCIF] MEASTYPE_IRAT_LTE_BOTH : duration_sfn(%d) duration_tti(%d) duration.offset(%d)
Line 384: MeasModeError(%d)
Line 394: ##[NR_MMCIF] Send: TIMING_LATCH_REQ to MMCIF, source_rat(%d) status(%d) latchMode(%d)
Line 413: RatError(%d)
Line 428: CtrlrStateError(%d)
Line 441: ##[NR_MMCIF] L1C_L1C_MMCIFCTRLR_MEAS_STOP_IND_Handler : Rat(%d) MeasRatType(%d)
Line 458: ##[NR_MMCIF] Send: MEAS_STOP to MMCIF, source_rat(%d) latchMode(%d)
Line 490: MmcIfCtrlr::L1C_L1C_RAKECTRLR_CDMA_TIME_AID_CNF_Handler
Line 629: CtrlrStateError
Line 642: MeasRes(LTE) : Arfcn(%d) NumCell(%d) Result(%d)
Line 653: MeasRes(LTE)[%d] : IsValid(%d) CellId(%d) CpType(%d) Rsrp(%d) Rsrq(%d) TimingOffset(%d)
Line 675: CtrlrStateError
Line 693: ##[NR_MMCIF] Send: LATCHED_TIME_NR_CMD to HAL, N2XMeasState(%d)
Line 705: CtrlrStateError
Line 723: ##[NR_MMCIF] Send: LTE_SRCH_CNF to MEASCTRLR earfcn(%d) numOfCells(%d) AGC1(%d) AGC2(%d)
Line 735: ##[NR_MMCIF] Send: LTE_SRCH_CNF to MEASCTRLR [%d] isvalid(%d) cellId(%d) cpType(%d) framePosition(%d) TimingOffset(%d)
Line 758: CtrlrStateError
Line 776: ##[NR_MMCIF] Send: LTE_MEASURE_CNF to MEASCTRLR isvalid(%d) earfcn(%d) numOfCells(%d) AGC1(%d) AGC2(%d)
Line 787: ##[NR_MMCIF] Send: LTE_MEASURE_CNF to MEASCTRLR cellId(%d) cpType(%d) rsrp(%d) rsrq(%d) sinr(%d) framePosition(%d) TimingOffset(%d)
Line 809: CtrlrStateError
Line 826: ##[NR_MMCIF] Send: LTE_SEARCH_MEASURE_CNF to MEASCTRLR earfcn(%d) numOfCells(%d) AGC1(%d) AGC2(%d)
Line 837: ##[NR_MMCIF] Send: LTE_SEARCH_MEASURE_CNF to MEASCTRLR cellId(%d) cpType(%d) rsrp(%d) rsrq(%d) sinr(%d) framePosition(%d) TimingOffset(%d)
Line 866: CtrlrStateError
Line 887: [MMCIF] L1C_MMC_NR_BPLMN_SRCH_HOLD_IND_Handler
Line 896: [MMCIF] L1C_MMC_NR_BPLMN_SRCH_START_IND_Handler:: SrchOnRat(%d)(1:GSM, 2:UMTS_FDD, 4:LTE, 8:1X, 16:HRPD, 64: NR)
Line 912: [MMCIF] L1C_MMC_NR_SENSOR_STATE_IND_Handler
Line 918: ##[NR_MMCIF] => %s : Feature(%d), SensorState(%d)
Line 925: >> Fail to send SENSOR_NR_CMD(%d)
Line 933: RoutingInfo(0x%x)
Line 958: ##[NR_MMCIF] %s, Send: GAP_CONFIG Command to HAL
Line 963: ##[NR_MMCIF] GAP_CONFIG_CMD is running. 
Line 985: ##[NR_MMCIF] CMD_RET_FAIL
Line 995: ##[NR_MEAS] %s, GAP_CONFIG CallBack from HAL, result: %d
Line 1004: ##[NR_MMCIF] NrLatchedTimeCb Result(%d) N2XMeasState(%d)
Line 1037: ##[NR_MMCIF] Send: LTE_SEARCH_REQ to MMCIF, gap start sfn(%d) tti(%d) offset(%d) earfcn(%d) AGC1(%d), AGC2(%d), AFC(%d)
Line 1064: ##[NR_MMCIF] Send: LTE_MEASURE_REQ to MMCIF, gap start sfn(%d) tti(%d) offset(%d) AGC1(%d) AGC2(%d) AFC(%d) framePosition(%d)
Line 1086: ##[NR_MMCIF] Send: LTE_BOTH_REQ to MMCIF, gap start sfn(%d) tti(%d) offset(%d)
Line 1097: N2XMeasStateError(%d)
Line 1137: [SendFailMsg]-PilotPn(%d) PnPhase(%d) PilotStrength(%d)
Line 1218: ConvertMmcSmpfL2FMsg is success.
Line 1254: ConvertMmcIfF2LMsg is success.
Line 1290: ConvertNr2MmcIfF2LMsg is success.
