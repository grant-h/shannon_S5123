Line 690: LteRrmConn_InitMeasConfigList
Line 886: LteRrmConn_FreeMeasConfigList
Line 1046: LteRrmConn_InitReportStatus pMeas is NULL
Line 1050: LteRrmConn_InitReportStatus(measId:%d)
Line 1091: LteRrmConn_InitAllReportStatus
Line 1252: LteRrmConn_InitAllOngoingFlag
Line 1290: LteRrmConn_InitMeasScheduler
Line 1353: LteRrmConn_SetNrScheduleInfoBU(%s)
Line 1477: LteRrmConn_ForcedInterFreqSchedule - no Inter-Freq
Line 1558: LteRrmConn_ForcedUtraFreqSchedule - no Utra-Freq
Line 1564: LteRrmConn_ForcedUtraFreqSchedule
Line 1582: - utraFreqSrchCycle(%d) utraFreqMeasCycle(%d) intraFreqSrchCycle(%d)
Line 1589: - interFreqSrchCycle(%d) interFreqMeasCycle(%d)
Line 1598: - ScellFreqSrchCycle(%d) ScellFreqMeasCycle(%d)
Line 1607: - geranFreqMeasCycle(%d) geranFreqIdentifyCycle(%d) geranFreqVerifyCycle(%d)
Line 1613: - cdmaFreqMeasCycle(%d)
Line 1630: - nrFreq(%d) FreqSrchCycle(%d) FreqMeasCycle(%d)
Line 1655: LteRrmConn_RestoreMeasSchedule (bnewInterFreqFlag:%d bUtraForcedMeas:%d)
Line 1727: LteRrmConn_InitSCellMeasScheduler
Line 1741: InitSCellMeasScheduler - search(%d), meas(%d)
Line 1834: LteRrmConn_StartMeas(basicCycleCnt:%d)(isFirst:%d_%d)
Line 1849: Skip short measure cycle
Line 1860: Skip measure cycle due to Restore
Line 1882: ConnMeasSuspendForTx(%d), PBCH mode(%d). Only IntraF Meas can be started
Line 1888: Only Intra-Freq scheduling in meas config ind(%d)
Line 1913: Skip all IRAT scheduling for ENDC(%d), DL(%d), UL(%d)
Line 1920: Do not skip IRAT scheduling for ENDC(%d), DL(%d), UL(%d)
Line 1928: Inter-RAT Measurement is skipped due to utra_SI_AcquisitionForHO(CgiState:%d, CgiMeasType:%d)
Line 1946: Skip NR search/measure due to bTempCtrl(%d)
Line 2148: MeasID(%d), ObjectID(%d), ReportId(%d), Choice(%d), Purpose(%d), ReportAmount(%d), Removed this periodic meas(%d)
Line 2150: Intra freq, LTERRM_REPORT_EUTRA_STRONGEST_CELLS meas. config found
Line 2349: Normal Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Line 2357: Blind Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Line 2365: (No Intra Object) Inter Freq Handover Update Meas List(%d, %d, %d, %d)
Line 2369: Do Not change Meas List(%d, %d, %d, %d)
Line 2397: remove Intra_MID(%d)
Line 2410: EUTRA object(earfcn:%d) is modified
Line 2422: Initialized Pcell IndOff (%d -> 0)
Line 2450: remove SCell_MID(%d)
Line 2465: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 2477: remove InterMeas_MID(%d)
Line 2489: EUTRA object(earfcn:%d) is modified
Line 2501: Initialized Pcell IndOff (%d -> 0)
Line 2528: remove Utra_MID(%d)
Line 2539: UTRA object(arfcn:%d) is modified
Line 2562: remove Geran_MID(%d)
Line 2574: GERAN object(band_indicator:%d, freq:%d) is modified
Line 2597: remove remaining CdmaMeas_MID(%d)
Line 2609: CDMA object(band_class:%d, freq:%d) is modified
Line 2632: remove NR_MID(%d)
Line 2644: NR object(arfcn:%d) is modified
Line 2705: Remove exhausted MID(%d)
Line 2737: IntraFreq NULL
Line 2743: Initialized Pcell IndOff (%d -> 0)
Line 2774: SCell cycle : Srch(%d), Meas(%d)
Line 2797: Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
Line 2802: measSubframePatternNeigh(intRA): eICIC mode(%d), bitsize(%d)
Line 2806: Warning! measSubframeCellList is not configured
Line 2814: Update meas pattern Neigh in IntraFreq
Line 2892: index(%d), earfcn:%d, mID:%d
Line 2896: Remove MeasList(mID:%d, earfcn:%d)
Line 2903: pTempElem is NULL
Line 2907: not matched MeasList(mID:%d, earfcn:%d)
Line 2917: Cannot Allocate FreqInfo buffer(%d)
Line 2956: SCell cycle : Srch(%d), Meas(%d)
Line 2979: Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
Line 2984: measSubframePatternNeigh(SCell): eICIC mode(%d), bitsize(%d)
Line 2988: Warning! measSubframeCellList is not configured
Line 2996: Update meas pattern Neigh in pFreqInfo for SCell
Line 3081: pFreqInfo NULL
Line 3092: Cannot Allocate FreqInfo buffer(%d)
Line 3132: SCell cycle : Srch(%d), Meas(%d)
Line 3155: Warning! eICIC bitsize(%d) not compatible with spec (20/40/60/70)
Line 3160: measSubframePatternNeigh(intER): eICIC mode(%d), bitsize(%d)
Line 3164: Warning! measSubframeCellList is not configured
Line 3248: pFreqInfo NULL
Line 3258: Cannot Allocate FreqInfo buffer(%d)
Line 3329: pFreqInfo NULL
Line 3340: Cannot Allocate FreqInfo buffer(%d)
Line 3383: pCellInfo is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 3437: pFreqInfo NULL
Line 3448: Cannot Allocate FreqInfo buffer(%d)
Line 3479: object->num_of_neigh_cells(%d)
Line 3484: cdma2000_cell_id(%d)
Line 3527: Cannot Allocate FreqInfo buffer(%d)
Line 3559: LteRrmConn_SetNrFreqObject : subcarrier_spacing %d meas_timing_present %d periodicity %d offset %d ssb_duration %d
Line 3598: LteRrmConn_SetNrFreqObject : sftd_num %d cellsForWhichToReportSFTD %d
Line 3628:    >>SsbToMeasurePresent is present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 3648:    >>SsbToMeasurePresent is not present - NumSsbToMeasure:%d SsbToMeasure:[1]0x%08x[0]0x%08x
Line 3780: LTE_MEAS_EUTRA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d RSRQ-WB:(%d) Sfreq: %d)
Line 3801: in LTERRM.Set.pSCellMeasList(%d)(earfcn=%d)
Line 3832: LTE_MEAS_UTRA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d(%d) freq: %d Sfreq: %d)
Line 3842: LTE_MEAS_GERAN_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d Sfreq: %d)
Line 3853: LTE_MEAS_CDMA_OBJECT (MeasId :%d Obj ID: %d Obj type: %d(%d) freq: %d Sfreq: %d)
Line 3863: LTE_MEAS_NR_OBJECT (MeasId :%d Obj ID: %d Obj type: %d freq: %d Sfreq: %d)
Line 3876: pCurElem(%d) or obj(%d) is NULL
Line 3899: LteRrmConn_CastEventTriggerType rpt is NULL
Line 3930: UnKnown Cast Type(%d)
Line 3955: LteRrmConn_CastIratEventTriggerType rpt is NULL
Line 3983: UnKnown Cast Type(%d)
Line 4008: LteRrmConn_CastTriggerQuantity rpt is NULL
Line 4024: UnKnown Cast Type(%d)
Line 4048: LteRrmConn_CastReportQuantity rpt is NULL
Line 4070: UnKnown Cast Type(%d)
Line 4094: LteRrmConn_CastReportPurpose rpt is NULL
Line 4107: UnKnown Cast Type(%d)
Line 4132: LteRrmConn_CastReportPurposeV1430 rpt is NULL
Line 4145: UnKnown Cast Type(%d)
Line 4170: LteRrmConn_CastIratReportPurpose rpt is NULL
Line 4186: UnKnown Cast Type(%d)
Line 4214: pCurElem(%d), rpt(%d) is NULL
Line 4230: add earfcn(%d_%d) report_add_neigh_meas(%d) TxDiff(%d) Rpt Config
Line 4240: - alt_time_to_trigger_setup(%d) alt_time_to_trigger(%d)
Line 4246: add SCell(%d) Rpt Config
Line 4252: maxReportCells:%d, reportInterval:%d, reportAmount:%d, triggerQuantity:%d, reportQuantity:%d
Line 4260: rpt_id:%d, eventId:%d, hysteresis:%d, timeToTrigger:%d
Line 4275: report_sstd_meas:1
Line 4280: eNB error! report_sstd_meas:1 but need to check belows
Line 4284: - report_amount(%d), trigger_choice(%d), purpose(%d)
Line 4294: MeasRSSI-ReportConfig: channelOccupancyThresh(%d)
Line 4322: LTERRM_EVENT_A1: threshold_type(%d) is invalid
Line 4328: A1 threshold type:%d, A1 threshold value:%d
Line 4352: LTERRM_EVENT_A2: threshold_type(%d) is invalid
Line 4358: A2 threshold type:%d, A2 threshold value:%d
Line 4364: A3 offset:%d*0.5
Line 4368: usePSCell:%d
Line 4375: [HST_Event A3] change Hyst as 1dB, Offset as 3dB
Line 4383: purpose_v1430_setup:%d purpose_v1430:%d maxReportRS_Index:%d
Line 4422: LTERRM_EVENT_A4: threshold_type(%d) is invalid
Line 4428: A4 threshold type:%d, A4 threshold value:%d
Line 4432: purpose_v1430_setup:%d purpose_v1430:%d maxReportRS_Index:%d
Line 4468: LTERRM_EVENT_A5: threshold_type(%d) is invalid
Line 4495: LTE_MEAS_UTRA: threshold_type(%d) is invalid
Line 4502: A5 threshold type1:%d, A5 threshold value1:%d, A5 threshold type2:%d, A5 threshold value2:%d
Line 4507: usePSCell:%d
Line 4512: purpose_v1430_setup:%d purpose_v1430:%d maxReportRS_Index:%d
Line 4532: A6 offset:%d*0.5
Line 4538: periodical report purpose:%d
Line 4563: pCurElem(%d), rpt(%d) is NULL
Line 4574: maxReportCells:%d, reportInterval:%d, reportAmount:%d
Line 4582: report_qty_cell_present:%d report_rs_index_resultNr:%d report_qty_rs_index_present:%d
Line 4594: reportQuantityCellNR RSRP:%d, RSRQ:%d, SINR:%d
Line 4611: reportQuantityRS-IndexNR RSRP:%d, RSRQ:%d, SINR:%d max_rs_index_report:%d
Line 4624: report_sftd_meas:(%d)
Line 4639: eNB error! report_sftd_meas is valid but need to check belows
Line 4643: - report_amount(%d), trigger_choice(%d), purpose(%d)
Line 4654: rpt_id:%d, eventId:%d, hysteresis:%d, timeToTrigger:%d
Line 4681: LTE_MEAS_UTRA: threshold_type(%d) is invalid
Line 4697: LTE_MEAS_UTRA: B1 rat_type:%d, threshold type:%d, B1 threshold value:%d
Line 4705: LTE_MEAS_GERAN: B1 threshold type:%d, B1 threshold value:%d
Line 4712: LTE_MEAS_CDMA2000: B1 threshold value:%d
Line 4744: LTE_MEAS_NR: threshold_type(%d) is invalid
Line 4753: LTE_MEAS_NR: B1 rat_type:%d, threshold type:%d, B1 threshold value:%d
Line 4773: LTERRM_EVENT_B2: threshold_type(%d) is invalid
Line 4781: B2 threshold1 type:%d, B2 threshold1 value:%d
Line 4800: LTE_MEAS_UTRA: threshold_type(%d) is invalid
Line 4816: LTE_MEAS_UTRA: B2 rat_type:%d, threshold2 type:%d, B2 threshold2 value:%d
Line 4828: LTE_MEAS_GERAN: B2 threshold2 type:%d, B2 threshold2 value:%d
Line 4834: LTE_MEAS_CDMA2000: B2 threshold2 value:%d
Line 4857: LTERRM_EVENT_B2: threshold_type(%d) is invalid
Line 4865: B2 threshold1 type:%d, B2 threshold1 value:%d
Line 4892: LTE_MEAS_NR: threshold_type(%d) is invalid
Line 4901: LTE_MEAS_NR: B2 rat_type:%d, threshold type:%d, B1 threshold value:%d
Line 4907: IRAT periodical report purpose:%d
Line 4996: pCurElem(%d) or rpt(%d) is NULL
Line 5026: Cannot Allocate MeasList buffer
Line 5040: LteRrmConn_AddMeasList obj(%d) or rpt(%d) is NULL
Line 5064: LteRrmConn_RemoveMeasList pMeasList is NULL
Line 5105: - Timing info not sufficient --> SSTD report is pending
Line 5135: - Timing info not sufficient --> SSTD report is pending
Line 5164: - Timing info not sufficient --> SSTD report is pending
Line 5182: LteRrmConn_UpdateSstdState: Init reportSstd
Line 5867: LteRrmConn_UpdateMeasScheduleVariable(DrxEnable:%d, DrxCycle:%d, N_freq:%d)
Line 5871: N_freq info. - ScellFreqNum:%d, InterFreqNum:%d, UtraFreqNum:%d, CdmaFreqNum:%d, NrFreqNum:%d, M_gsm:%d)
Line 5883: Conn DRX ignored : invalid DRX cycle (%d ms)
Line 6000: invalid GAP pattern :%d
Line 6137: LteRrmConn_CheckSftdCond(SFTD_PSCELL) : pFreqInfo is NULL
Line 6145: LteRrmConn_CheckSftdCond(SFTD_PSCELL) : pCellInfo is NULL
Line 6176: LteRrmConn_CheckSftdCond(SFTD_NEIGHBOR) : pFreqInfo is NULL
Line 6181: sftdMode:%d, sftd_num:%d, earfcn: %d subcarrier_spacing:%d, periodicity:%d)
Line 6193: SFTD_NEIGHBOR : pCellInfo is NULL
Line 6199: SFTD_NEIGHBOR[%d] : pCellInfo is not measured
Line 6205: cell_ID:%d, beam_index: %d time_offset:%d)
Line 6227: LteRrmConn_CheckSftdCond : trigger_choice(%d) is invalid
Line 6234: LteRrmConn_CheckSftdCond : trigger_choice(%d) threshold(%d)
Line 6353: invalid numCellForSftd :%d
Line 6359: LteRrmConn_CheckSftdCond : sftd_mode is invalid
Line 6382: LteRrmConn_UpdateSftdState - report_sftd_meas(%d)
Line 6388: - Timing info not sufficient --> SFTD report is pending
Line 6406: LteRrmConn_UpdateSftdState: Init reportSftd
Line 6441: LteRrmConn_UpdateMeasConfig msg is NULL
Line 6481: [MEAS CONFIG 1st] Remove MeasId
Line 6491: [MEAS CONFIG 2nd] Arrange MeasId
Line 6504: [MEAS CONFIG 3rd] Add MeasId
Line 6528: IntraFreq NULL
Line 6533: num_start_meas_ids is zero!!
Line 6546: Number of carriers other than GSM: %d
Line 6550: Number of carriers other than GSM is not required!!!(%d -> 5)
Line 6572: rsrqOnAllSymbols-r12 enable
Line 6598: quantityConfigEUTRA - fc_rsrp:%d, fc_rsrq:%d, fc_rssinr:%d
Line 6608: quantityConfigUTRA - measQuantity:%d, fc:%d
Line 6618: quantityConfigGERAN - measQuantity:%d, fc:%d
Line 6626: quantityConfigCDMA - measQuantity:%d
Line 6643: measQuantityCellINR - FC_Rsrp:%d, FC_Rsrq:%d, FC_Sinr:%d
Line 6654: measQuantityRS-IndexNR - FC_Rsrp:%d, FC_Rsrq:%d, FC_Sinr:%d
Line 6748: speedDepParam received
Line 6750: - t_eval(%d) t_hyst(%d), nMed(%d), nHigh(%d)
Line 6789: ConnMeasConfig.sMeasure:%d, fc_rsrp:%d, filter_alpha_rsrp:%d
Line 6836: LteRrmConn_ProcMeasConfigReq msg is NULL
Line 6841: Receive LTE_CPHY_MEAS_CONF_REQ Msg(removeMID num:%d, addMID num:%d)
Line 6879: Receive LteRrmConn_AddCsgProximityMeasList(), eutra_list_size:%d
Line 6886: EARFCN:%d, AntNum:%d, MeasBw:%d, CSG Cell Num:%d
Line 6893: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 6902: num of IntraFreq(earfcn:%d) CSG Cell: %d
Line 6920: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6929: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6946: pFreqInfo NULL
Line 6957: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 6966: num of InterFreq(earfcn:%d) CSG Cell: %d
Line 7005: Receive LteRrmConn_AddCsgProximityUtraMeasList(), utra_list_size:%d
Line 7012: UARFCN:%d, CSG Cell Num:%d
Line 7021: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 7030: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 7044: Cannot Allocate FreqInfo buffer
Line 7056: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 7065: num of Utra Freq(uarfcn:%d) CSG Cell: %d
Line 7097: Receive LteRrmConn_UpdateCsgProximityMeasConfig()
Line 7179: LteRrmConn_ProcCsgProximityMeasConfigReq msg is NULL
Line 7184: Receive LTE_CPHY_CSG_PROXIMITY_MEAS_REQ Msg
Line 7222: IntraMeasList
Line 7226: SCellMeasList
Line 7230: InterMeasList
Line 7234: pPSCellMeasList
Line 7238: gpInterRATMeas
Line 7243: ObjId : %d , earfcn : %d
Line 7271: Skip fast search
Line 7338: LteRrmConn_CheckSMeasure: PrimaryCell is NULL
Line 7345: Skip s-Measure check <- bUtraForcedMeas(1)
Line 7361: LteRrmConn_CheckSMeasure: cinr(%d) < 0
Line 7366: LteRrmConn_CheckSMeasure: cinr(%d) < 5, rsrp < smeasure+10
Line 7418: measTrig[%d] LastMeasTime:%d, curTimeInMs:%d, interval:%d, cycle:%d
Line 7446: IntraMeasList(%d) is Empty
Line 7454: LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(IntraFreq is NULL)
Line 7461: LteRrmConn_CheckIntraFreqMeas: PrimaryCell is NULL
Line 7472: Intra Freq Measure is already exist!!!
Line 7479: LteRrmConn_CheckIntraFreqMeas: CONN_ONLY_SERV(sMeasure:%d, rsrp:%d)
Line 7491: - DMTC not occurred -> Trigger Serving Meas Only
Line 7508: SIM CHECKED : Don't Change Srch Cycle
Line 7523: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
Line 7544: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
Line 7558: VoLTE ACTIVE: Intrafrequency measCycle set from %dms to %dms (cinr:%d)
Line 7559: VoLTE ACTIVE: Intrafrequency measCycle is %dms (cinr:%d)
Line 7572: VoLTE ACTIVE: Intrafrequency srchCycle set from %dms to %dms (cinr:%d)
Line 7573: VoLTE ACTIVE: Intrafrequency srchCycle is %dms (cinr:%d)
Line 7577: CheckMeasCycle: IntraFreq Search
Line 7581: CheckMeasCycle: IntraFreq Measure
Line 7590: Triggered SRCH(%d) and MEAS(%d) due to ECID
Line 7596: Inter(%d)/SCell(%d) Freq Search is already exist!!!
Line 7603: Intra Freq Search is already exist!!!
Line 7609: Intra Freq Measure is already exist!!!
Line 7699: IC srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (LteRrmConn_CheckPeriodicStrongestIntraFreqListInMeasConf is TRUE)
Line 7720: srchCycle set to MIN_INTRA_SRCH_CYCLE(%d) (max cinr:%d)
Line 7725: CheckMeasCycle: IntraFreq IC-Search
Line 7734: Intra(%d)/Inter(%d)/SCell(%d) Freq Search is already exist!!!
Line 7770: LteRrmConn_CheckSCellMeas 1: CONN_NONE
Line 7774: LteRrmConn_CheckSCellMeas - no SCellMeasList but SCellFreqSet
Line 7783: LteRrmConn_CheckSCellMeas 2: CONN_NONE
Line 7787: LteRrmConn_CheckSCellMeas - SCellMeasList but no SCellFreqSet
Line 7795: LteRrmConn_CheckSCellMeas 4: CONN_NONE
Line 7815: LteRrmConn_CheckSCellMeas 3: CONN_NONE
Line 7820: LteRrmConn_CheckSCellMeas : Scell is not configured
Line 7916: CheckMeasCycle: Secondary Cell Freq Search
Line 7923: SCell search skip - Intra(%d)/Inter(%d)/Scell(%d) Freq Search already scheduled!!!
Line 7929: CheckMeasCycle: Secondary Cell Freq Measure
Line 7934: Secondary Cell Freq Measure is already exist!!!
Line 7996: LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
Line 8003: LteRrmConn_CheckInterFreqMeas 1: noGAP & ScellScheduled
Line 8008: LteRrmConn_CheckInterFreqMeas : noGAP & noScellScheduled
Line 8014: LteRrmConn_CheckInterFreqMeas 2: noGAP & InterFreqScheduled
Line 8019: LteRrmConn_CheckInterFreqMeas : noGAP & noInterFreqScheduled
Line 8029: DMTC meas scheduled -> Gap meas for inter-freq suspended
Line 8036: LteRrmConn_CheckInterFreqMeas : GAP & noScellScheduled
Line 8044: LteRrmConn_CheckInterFreqMeas 3: CONN_NONE
Line 8113: CheckMeasCycle: InterFreq Search
Line 8118: InterFreq Search is already scheduled!!!
Line 8124: LteRrmConn_CheckInterFreqMeas : IntraFreq Search is already scheduled
Line 8128: CheckMeasCycle: InterFreq Measure
Line 8133: InterFreq Measure is already exist!!!
Line 8221: CONN_NONE: gap(%d), conn drx(%d)
Line 8265: CheckMeasCycle: Utra Search
Line 8269: CheckMeasCycle: Utra Measure
Line 8274: Utra Search/Measure is already exist!!!
Line 8343: CONN_NONE: gap(%d), conn drx(%d)
Line 8393: CheckMeasCycle: Geran Identify
Line 8438: CheckMeasCycle: Geran Measure(cycle:%d, M_gsm:%d)
Line 8443: CheckMeasCycle: Geran Verify
Line 8448: Geran Measure is already exist!!!
Line 8454: Geran Verify is already exist!!!
Line 8510: CdmaSystemTimeFlag(%d) is not valid, Not schedule CDMA meas.
Line 8532: CONN_NONE: gap(%d), conn drx(%d)
Line 8543: CheckMeasCycle: Cdma Measure
Line 8548: Cdma Measure is already exist!!!
Line 8584: LteRrmConn_CheckNrFreqMeas : pNrMeasList
Line 8590: LteRrmConn_CheckNrFreqMeas : pNrFreq
Line 8603: CheckMeasCycle: NR(%d) Search(current total count : %d)
Line 8607: CheckMeasCycle: NR(%d) Measure(current total count : %d)
Line 8652: Conn Intra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 8741: Conn Intra(earfcn:%d) IC search starts
Line 8793: Conn Scell-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 8824: LteRrmConn_StartScellMeasOperation : Scell is NULL
Line 8833: LteRrmConn_StartScellMeasOperation : Scell(%d) has correct timing info(%d, CINR=%d)
Line 8840: LteRrmConn_MeasListFindEarfcn : ScellMeasList is NULL, pTempMeasFreq->earfcn(%d)
Line 8858: WARNING: NOT Supported DL_EARFCN %d!!!
Line 8898: Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
Line 8912: ConnSchedule.pCurSrchSCellFreq NULL
Line 8933: WARNING: NOT Supported DL_EARFCN %d!!!
Line 8953: Offer SCC meas opportunity to LAA scheduler
Line 8982: Block Meas for U-band deactivated SCell (earfcn:%d, measDS_setup:0)
Line 8996: ConnSchedule.pCurMeasSCellFreq NULL
Line 9027: Start Measurement: Scell Frequency (earfcn:%d, mode:%d)
Line 9050: Warning!! invalid MeasType(%d) - LteRrmConn_StartScellMeasOperation
Line 9065: SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
Line 9069: SCell(earfcn=%d) is configured
Line 9077: ScellInitSrchCnt(%d)
Line 9160: [SCELL]invalid MeasType(%d)
Line 9179: [SCELL]invalid MeasType(%d)
Line 9216: Warning!! SCellMeasList(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Line 9220: Warning!! - no SCellMeasList but SCellFreqSet
Line 9228: Warning!! SCellFreqSet(0x%X) NULL or empty - LteRrmConn_StartLaaScellMeasOperation
Line 9232: Warning!! - no SCellFreqSet but SCellMeasList
Line 9242: no gap and ongoingSrchInterFlag(%d) or ongoingMeasInterFlag(%d)
Line 9247: Warning!! Scell is not configured
Line 9257: LAA SCell meas skip - Intra(%d)/Inter(%d)/Scell(%d) Search or SCell Meas(%d) already scheduled!!!
Line 9289: gLteRrm_ConnSchedule.laaScellFreqLastMeasTime:%d
Line 9302: CheckMeasCycle: LAA SCell Freq Search/Measure
Line 9311: Conn LAA Scell-SelectedMode(%d), Srch/Meas Cycle(%d)
Line 9330: WARNING: NOT Supported DL_EARFCN %d!!!
Line 9348: Warning!! DMTC is not set up for LAA SCell(%d)
Line 9358: ConnSchedule.pCurMeasLaaSCellFreq NULL
Line 9369: Start Measurement: LAA Scell Frequency (earfcn:%d, mode:%d)
Line 9378: SCell(earfcn=%d) is activated then use SCC RF path (suspendforTx:%d)
Line 9382: SCell(earfcn=%d) is configured
Line 9424: LAA SCell MeasType(%d)
Line 9434: ConnSchedule.laaScellFreqLastMeasTime:%d
Line 9456: [SCELL]invalid MeasType(%d)
Line 9501: Conn Inter-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 9517: WARNING: NOT Supported DL_EARFCN %d!!!
Line 9553: ConnSchedule.pCurSrchInterFreq NULL
Line 9577: WARNING: NOT Supported DL_EARFCN %d!!!
Line 9606: ConnSchedule.pCurMeasInterFreq NULL
Line 9665: this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - skip
Line 9672: this freq(earfcn:%d_%d) need SCC path(%d) to search/meas. - skip
Line 9684: this freq(earfcn:%d_%d) need GAP to search/meas. - change MeasType(%d)
Line 9690: this freq(earfcn:%d_%d) need GAP(%d) to search/meas. - change
Line 9696: Start Measurement: Inter Frequency (earfcn:%d, measmode:%d)
Line 9805: [INTER] invalid MeasType(%d)
Line 9856: All SCC activated - Skip LAA inter meas
Line 9864: Scell srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Line 9873: Inter with SCC srch(%d) meas(%d) already scheduled!!! - Skip LAA inter meas
Line 9882: Intra(%d)/Inter(%d)/Scell(%d) Search already scheduled!!! - Skip LAA inter meas
Line 9924: ConnSchedule.laaInterFreqLastMeasTime:%d
Line 9942: CheckMeasCycle: LAA InterFreq Search
Line 9990: Warning!! DMTC is not set up for B46 LAA inter-freq(%d)
Line 10000: ConnSchedule.pCurMeasLaaInterFreq NULL
Line 10010: Start Measurement: LAA Inter Frequency (earfcn:%d, measmode:%d)
Line 10065: ConnSchedule.laaInterFreqLastMeasTime:%d
Line 10087: Warning! invalid measMode(%d)
Line 10130: Conn Utra-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 10138: warring: ConnSchedule.pCurSrchUtraFreq NULL
Line 10166: ConnSchedule.pCurMeasUtraFreq NULL
Line 10178: warring: ConnSchedule.pCurSrchUtraFreq NULL
Line 10207: Start Measurement: Utra Frequency (earfcn:%d, mode:%d) - SrchCnt(%d)
Line 10282: Conn Geran-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 10307: warring: ConnSchedule.pCurIdentifyGeranFreq NULL
Line 10339: ConnSchedule.pCurMeasGeranFreq NULL
Line 10380: ConnSchedule.pCurVerifyGeranFreq NULL
Line 10412: Start Measurement: Geran Frequency (earfcn:%d, mode:%d)
Line 10484: Conn CDMA-SelectedMode(%d), MeasCycle(%d)
Line 10507: ConnSchedule.pCurMeasCdmaFreq NULL
Line 10515: MeasMode is invalid(%d)
Line 10520: Start Measurement: Cdma Frequency (earfcn:%d, mode:%d)
Line 10566: subcarrier_spacing is invalid.
Line 10603: subcarrier_spacing is invalid.
Line 10652: periodicity is invalid.
Line 10674: smtc duration is invalid.
Line 10706: NR srch/meas scheduling count is full(cnt:%d)
Line 10714: pNrFreq is Empty(%d | %d)
Line 10735: Conn NR-SelectedMode(%d), SrchCycle(%d), MeasCycle(%d)
Line 10741: LteRrmConn_StartNrMeasOperation : skip NR Serving frequency Search/Measure
Line 10747: NR Search/Measurement (earfcn:%d) is already in progress(srch|meas ongoing:%d|%d)
Line 10778: Start Measurement: NR Frequency (earfcn:%d, measmode:%d)
Line 10780: [EN-DC] NR Config(%d) arfcn(%d)
Line 10790: Start Measurement: NR Object Checking (SCS:%d ,PeriodicityAndOffsetChoice:%d, offset:%d, duration:%d)
Line 10837: NR MeasType is invalid(%d)
Line 10876: [EN-DC] NR Config(%d) MeasType(%d)
Line 10879: LteRrm_ProcNrObjectCheckCnf: pFreqFromNr is NULL
Line 10888: NR Search/Measurement (earfcn:%d) is already in progress
Line 10896: NR srch/meas scheduling count is full(cnt:%d)
Line 10941: NR MeasType is invalid(%d)
Line 11000: LteRrmConn_ongoingSrchIntraFlag(%d -> %d)
Line 11003: LteRrmConn_ongoingMeasIntraFlag(%d -> %d)
Line 11007: LteRrmConn_ongoingSrchIntraFlag(%d -> %d)
Line 11011: LteRrmConn_ongoingMeasIntraFlag(%d -> %d)
Line 11015: LteRrmConn_ongoingSrchInterFlag(%d -> %d)
Line 11018: LteRrmConn_ongoingMeasInterFlag(%d -> %d)
Line 11022: LteRrmConn_ongoingSrchInterFlag(%d -> %d)
Line 11032: LteRrmConn_ongoingMeasInterFlag(%d -> %d)
Line 11042: LteRrmConn_ongoingMeasGeranFlag(%d -> %d)
Line 11045: LteRrmConn_ongoingVerifyGeranFlag(%d -> %d)
Line 11049: LteRrmConn_ongoingMeasGeranFlag(%d -> %d)
Line 11053: LteRrmConn_ongoingVerifyGeranFlag(%d -> %d)
Line 11059: LteRrmConn_ongoingSrchMeasUtraFlag(%d -> %d)
Line 11063: LteRrmConn_ongoingMeasCdmaFlag(%d -> %d)
Line 11067: LteRrmConn_ongoingSrchSCellFlag(%d -> %d)
Line 11070: LteRrmConn_ongoingMeasScellFlag(%d -> %d)
Line 11074: LteRrmConn_ongoingSrchSCellFlag(%d -> %d)
Line 11078: LteRrmConn_ongoingMeasScellFlag(%d -> %d)
Line 11082: LteRrmConn_ongoingNoGapSCellFlag(%d -> %d)
Line 11137: LteRrmConn_SetOnUsingSccFlag(%d -> %d)
Line 11142: LteRrmConn_SetOnUsingSccFlag(%d -> %d)
Line 11175: LteRrmConn_GetTimeToTriggerListIndex pMeas(0x%X)/pCell(0x%X) is NULL
Line 11191: nCell(arfcn:%d, cell_id:%d) is not found in TimeToTriggerList(mID:%d).
Line 11217: LteRrmConn_AddTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
Line 11233: TimeToTrigger Set(mID(%d), rID(%d), Arfcn(%d), Cell(%d)) start(%d)
Line 11240: Report status index is FULL!!!
Line 11266: LteRrmConn_RemoveTimeToTriggerList pMeas(0x%X)/pCell(0x%X) is NULL
Line 11317: alt_time_to_trigger(%d) is applied
Line 11341: Invalid mobility state
Line 11375: LteRrmConn_CheckTriggerTimerExpired pMeas is NULL
Line 11381: LteRrmConn_CheckTriggerTimerExpired: PrimaryCell is NULL
Line 11405: TimeToTrigger Expired(time_to_trigger:0)(mID(%d), rID(%d))
Line 11424: Fast MR(%d):Rsrq diff:%d(mID(%d), rID(%d))
Line 11444: Fast MR(%d):Rsrq:%d(mID(%d), rID(%d))
Line 11474: [VzW] Fast MR(%d):Rsrq:%d_%d, CINR:%d, siAdvancedTimeToTrigger:(%d), siAdvancedTimeToTrigger_Inst:(%d), (mID(%d))
Line 11492: TimeToTrigger status(mID(%d), rID(%d)) start(%d) current(%d), timeDiff(%d), ScaledTTT(%d)
Line 11498: TimeToTrigger Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d)
Line 11529: LteRrmConn_CheckLeaveTimerExpired pMeas is NULL
Line 11563: LeaveTime Expired(mID(%d), rID(%d)) start(%d) stop(%d) offset(%d) scaledTTT(%d)
Line 11630: LteRrmConn_RemoveCellInReportList(measId:%d)
Line 11694: LteRrmConn_RemoveCellInReportList(). pMeas is NULL
Line 11720: LteRrmConn_RemoveCellInTriggeredList FreqInfo(%d) or CellInfo(%d) is NULL
Line 11738: LteRrmConn_RemoveCellInTriggeredList -SCellMeasList
Line 11762: Invalid RAT Type(%d)
Line 11771: LteRrmConn_RemoveCellInTriggeredList(earfcn:%d, cell_id:%d)
Line 11788: Removed cell(earfcn:%d, id:%d) is in reportList[%d](numOfCellsInRportList:%d)
Line 11802: pCurMeas is NULL
Line 11848: LteRrmConn_MakeEutraReportMsg pMeas is NULL
Line 11855: Serving Cell(%d) == SupportPci(%d), No LTE measurement report sent to network
Line 11863: RSSNR configured (reportQuantity:%d, triggerQuantity:%d)
Line 11965: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 11975: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d), RSSNR(%d)
Line 11983: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11988: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 11995: report_add_neigh_meas is started
Line 12008: report_add_neigh_meas is involved
Line 12018: SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d), RSSNR(%d)
Line 12027: SCell's Ncell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 12036: report_add_neigh_meas is not involved
Line 12048: report_add_neigh_meas is not involved
Line 12074: [EN-DC] NR Config(%d) Purpos_v1430(%d)
Line 12110: TempCellInfo->nr_meas_rslt : NULL
Line 12134: [%d] EN-DC NR Serving Cell(earfcn:%d, PCID:%d) is involved
Line 12140: Result[%d] - PCID(%d), RSRP(%d), RSRQ(%d), RSSINR(%d)
Line 12186: rs_index Result[%d/%d]- RSRP(%d), RSRQ(%d), RSSINR(%d)
Line 12201: report_add_neigh_meas is started
Line 12228: report_add_neigh_meas is involved
Line 12233: NR ServingCell's Ncell Result[%d] - PCID(%d), RSRP(%d), RSRQ(%d) RSSINR(%d)
Line 12279: rs_index Result[%d/%d]- RSRP(%d), RSRQ(%d), RSSINR(%d)
Line 12296: report_add_neigh_meas is not involved
Line 12307: report_add_neigh_meas is not involved
Line 12359: NCell_ID(%d) RSRP(%d) is discarded 
Line 12364: Pcell(%d) is discarded 
Line 12370: Scell(%d) is discarded 
Line 12520: LteRrmConn_MakeEutraReportMsg: MeasID(%d) objID(%d) rptID(%d) Event ID(A%d) FastMR(%d) removePeriodicMeas(%d) NumCell(%d) 
Line 12525: PCell : RSRP(%d) RSRQ(%d) RSSINR(%d, %d) TxDiff(%d) Sent(%d) leave(%d)
Line 12532: Idx(%d) NCell_ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d, %d)
Line 12542: [%2d] SCell : ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d, %d)
Line 12548: [%2d] SCell's Ncell : Cell ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d, %d)
Line 12557: report_sstd_meas(1) sfnOffset(%d) frameBoundaryOffset(%d) subframeBoundaryOffset(%d)
Line 12568: [%2d] NR Serving Cell : PCID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d)
Line 12576: [%2d] NR Serving Cell's Ncell : Cell ID(%d) RSRP(%d) RSRQ(%d) RSSINR(%d)
Line 12617: LteRrmConn_MakeUtraReportMsg pMeas is NULL
Line 12624: Serving Cell(%d) == SupportPci(%d), No UMTS measurement report sent to network
Line 12719: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 12724: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 12773: fdd trigger(%d) - LTE_MEAS_UTRA_FDD_CPICH_BOTH
Line 12778: fdd trigger(%d), quantityUtra(%d)
Line 12789: Make UTRAN Meas. Report_Trigger type(%d)
Line 12811: Trigger value is strange
Line 12827: rat_type(%d), measured_rscp(%d), filtered_rsrp(%d), measured_EcNO(%d), filtered_rsrq(%d)
Line 12867: LteRrmConn_MakeUtraReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 12870: Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Line 12877: Idx(%d) NCell_ID(%d) fdd_trigger(%d), measured_rscp(%d), measured_EcNO(%d), measured_tdd_rscp(%d)
Line 12913: LteRrmConn_MakeGeranReportMsg pMeas is NULL
Line 12920: Serving Cell(%d) == SupportPci(%d), No GSM measurement report sent to network
Line 13000: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 13005: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 13052: [RRM] Forced Event B2 MR
Line 13107: LteRrmConn_MakeGeranReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 13110: Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Line 13117: Idx(%d) geran_arfcn_value(%d) bandIndicator(%d), network_colour_code(%d), base_station_colour_code(%d), rssi(%d)
Line 13152: LteRrmConn_MakeCdmaReportMsg pMeas is NULL
Line 13159: Serving Cell(%d) == SupportPci(%d), No CDMA measurement report sent to network
Line 13240: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 13245: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 13346: LteRrmConn_MakeCdmaReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 13350: Event ID(B%d) PCell_ID(%d) RSRP(%d) NumCell(%d) Sent(%d)
Line 13357: Idx(%d) NCell_ID(%d) pilot_Strength(%d), pilotPnPhase(%d)
Line 13404: LteRrmConn_MakeNrReportMsg pMeas is NULL
Line 13513: [%d] SCell(earfcn:%d, PCID:%d) is involved
Line 13517: SCell Result[%d] - ID(%d), PCID(%d), RSRP(%d), RSRQ(%d)
Line 13556: cellsToReportList[i]->nr_meas_rslt : NULL
Line 13574: Make NR Meas. Cell Report_Trigger type(RSRP:%d, RSRQ :%d, SINR:%d)
Line 13599: Make NR Meas. Beam Report_Trigger type(report_rs_index_resultNr:%d, max_rs_index_report:%d, RSRP:%d, RSRQ :%d, SINR:%d)
Line 13631:    >>threshRS-Index present - rsrp:%d, rsrq:%d, sinr:%d
Line 13812: NR measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
Line 13820: NR filtered_rsrp(%d) filtered_rsrq(%d) filtered_sinr(%d)
Line 13831: SSB index(%d|%d) measured_rsrp(%d) measured_rsrq(%d) measured_sinr(%d)
Line 13896: SFTD_NEIGHBOR : pCellInfo is NULL
Line 14056: LteRrmConn_MakeNRReportMsg: MeasID(%d) objID(%d) rptID(%d) removePeriodicMeas(%d)
Line 14059: Event ID(%s) PCell_ID(%d) PCell_RSRP(%d) NumCell(%d) Sent(%d) leave(%d)
Line 14071: Idx(%d) NCell_ID(%d) measured_rsrp(%d) measured_rsrq(%d) measured_rssinr(%d)
Line 14203: LteRrmConn_CheckServingCellEventTrigger pMeas(%d) or pSCell(%d) is NULL
Line 14221: block Event A1(mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Line 14393: LteRrmConn_CheckNCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Line 14421: Event=SCell_Config(mID:%d, earfcn:%d)
Line 14437: block Event(%d, mID:%d) for Scell(earfcn:%d, rsrp=%d, rsrq=%d) due to non-search result
Line 14451: Event(%d) SCell(%d) would not be considered as Ncell
Line 14463: usePSCell(%d) -> use PSCell(%d,%d) instead of PCell
Line 14491: SCell(earfcn:%d, PCID:%d) could not found
Line 14508: EVENT_A6(SCell_ID:%d, RSRP:%d, RSRQ:%d RSSINR:%d )(NCell_ID:%d)
Line 14559: Enter : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 14562: MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 14570: Leave : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 14573: MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + FreqOff(%d) + IndOff(%d) + A3Off(%d)/2 
Line 14714: EVENT_A6 : MnPlusOffset(%d), Ms(%d), Mn(%d)
Line 14720: Enter : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 14722: MnPlusOffset(%d) - Hys(%d)/2 > Ms(%d) + NFreqoff(%d) + IndOff(%d) + A6Off(%d)/2
Line 14730: Leave : NRsrp(%d) NRsrq(%d) NRssinr(%d) NFreqOff(%d) NIndOff(%d)
Line 14732: MnPlusOffset(%d) + Hys(%d)/2 < Ms(%d) + NFreqOff(%d) + IndOff(%d) + A6Off(%d)/2 
Line 14738: Stay
Line 14767: NCell_ID(%d) RSRP(%d) is discarded 
Line 14810: LteRrmConn_CheckIratCellEventTrigger pMeas(%d) or pNCell(%d) is NULL
Line 15054: [RRM] Forced Event B2 Enter
Line 15096: CDMA_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_cdma(%d)
Line 15136: CDMA_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_cdma(%d)
Line 15203: NR_EventB1: Mn(%d), offsetFreq(%d), hysteresis(%d),threshold_nr(%d)
Line 15264: NR_EventB2: Ms(%d), hysteresis(%d), b2_threshold1(%d), Mn(%d), offsetFreq(%d), b2_threshold2_nr(%d)
Line 15304: Warning! invalid RAT_type(%d)
Line 15333: LteRrmConn_CheckTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
Line 15345: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d entering condition
Line 15371: LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
Line 15378: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d stay condition
Line 15404: (MID:%d, EARFCN:%d, PCID:%d) EVENT_A%d leaving condition
Line 15436: (MID:%d, EARFCN:%d, PCID:%d) PERIODIC REPORT entering condition
Line 15460: LteRrmConn_CheckTimeToTrigger: Report status index is FULL!!!
Line 15466: error in LteRrm_ProcServingMeasResult
Line 15498: LteRrmConn_CheckIratTimeToTrigger pMeas(0x%X)/pCell(0x%X) is NULL
Line 15510: [NR_FIXED_ARFCN] NrFixedArfcn:%d
Line 15518: [NR_FIXED_PCID] NrFixedPcid:%d
Line 15537: [NR_FIXED] EventTriggered of Cell(arfcn:%d, pcid:%d) is set to %d!
Line 15551: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s entering condition
Line 15577: LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
Line 15583: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s stay condition
Line 15608: (MID:%d, ARFCN:%d, PCID:%d) EVENT_%s leaving condition
Line 15640: (MID:%d, ARFCN:%d, PCID:%d) IRAT PERIODIC REPORT entering condition
Line 15662: LteRrmConn_CheckIratTimeToTrigger(%d): Report status index is FULL!!!
Line 15667: error in LteRrm_ProcIterRatMeasResult
Line 15734: Invalid RAT Type(%d)
Line 15758: Until the satisfaction of leaving condition, Cell Drop is skipped!!! (RAT_type:%d, Arfcn:%d, CellID:%d)
Line 15775: pCurMeas is NULL
Line 15805: LteRrmConn_CheckCSGProximityTimeToTrigger pFreqInfo is NULL
Line 15809: LteRrmConn_CheckCSGProximityTimeToTrigger(), EARFCN:%d, status:%d, eventTriggered:%d, 
Line 15918: LteRrmConn_UpdateVarMeasurementReports pMeas is NULL
Line 15925: pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
Line 15935: EVENT_A%d entering (mID:%d) (Cell ID:%d)
Line 15957: LTERRM_PERIODIC_EUTRA entering (mID:%d) (Cell ID:%d)
Line 15980: EVENT_A%d leaving (mID:%d) (Cell ID:%d)
Line 16018: LteRrmConn_UpdateIratVarMeasurementReports pMeas is NULL
Line 16025: pMeas->varMeasurementReports.numOfCellsInRportList ERROR (numOfCellsInRportList = %d)
Line 16035: EVENT_%s entering (mID:%d) (Cell ID:%d)
Line 16093: EVENT_%s leaving (mID:%d) (Cell ID:%d)
Line 16438: LteRrmConn_UpdateCsgProximityMeasurementReports pFreqInfo is NULL
Line 16442: LteRrmConn_UpdateCsgProximityMeasurementReports(), RAT:%d, EARFCN:%d, proximity_ind:%d
Line 16470: ONLY CSG Proximity Measurement Report in LTE and UTRA. RAT:%d
Line 16582: LteRrmConn_ProcServingMeasResult pMeas is NULL
Line 16589: LteRrmConn_ProcServingMeasResult(%d)
Line 16622: SCell(earfcn:%d, PCID:%d) could not found
Line 16645: unknown CC(%d)
Line 16654: Illegal Modem Access on POWER OFF
Line 16689: LteRrmConn_ProcEutraMeasResult pMeas is NULL
Line 16845: Illegal Modem Access on POWER OFF
Line 16879: LteRrmConn_ProcInterRatMeasResult pMeas is NULL
Line 16906: LteRrmConn_ProcInterRatMeasResult - exclude NR Serving Cell(%d)
Line 16922: Event%s - Status:%d, Triggered:%d (0:None, 1:Enter, 2:Stay, 3:Leave, 4:Periodic)
Line 16996: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Line 17044: timeToTriggered(MID:%d, arfcn:%d, cell_id:%d, timeDiff:%d, scaled TTT:%d)
Line 17200: Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Line 17222: Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
Line 17329: Forced measTrig[TRUE] due to TimeToTrigger - RAT_type(%d), mID(%d), cell_id(%d), ScaledTTT(%d), timeDiff(%d), offset(%d)
Line 17351: Forced measTrig[TRUE] due to LeaveTime - RAT_type(%d), mID(%d), cell_id(%d), TTT(%d), timeDiff(%d), offset(%d)
Line 17396: LteRrmConn_CheckReportAndStartConnDrx: PrimaryCell is NULL
Line 17427: NCell_RSRP(%d) > PCell_RSRP(%d) or NCell_L3_RSRP(%d) > PCell_L3_RSRP(%d) or NCell_L3_RSRQ(%d)> PCell_L3_RSRQ(%d)
Line 17429: isStrongNcell Conn DRX will stop(a3_offset_for_cdrx_skip:%d), CINR(%d)
Line 17434: CINR low(%d) Conn DRX will stop
Line 17483: AvgMeasureTimeDuringConnDrx(%d ms)
Line 17486: MeasureTimeDuringConnDrx(%d ms)(%d, %d)
Line 17496: Conn Drx Skip(isLastMeas:%d, reportTriggered:%d, ConnDrxCycle:%d, CgiState:%d)
Line 17528: LteRrmConn_ProcProximityIntraMeasResult()
Line 17554: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 17563: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 17602: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 17611: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 17656: LteRrmConn_ProcProximtiyInterMeasResult()
Line 17691: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 17700: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRP:%d, THRESHOLD:%d
Line 17738: CSG Proximity Check ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 17747: CSG Proximity EventTriggered ==> EARFCN:%d, CellID:%d, RSRQ:%d, THRESHOLD:%d
Line 17805: LteRrmConn_ProcProximityUtraMeasResult()
Line 17842: CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
Line 17852: CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, RSCP:%d, THRESHOLD:%d
Line 17891: CSG Proximity Utra Check ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Line 17901: CSG Proximity Utra EventTriggered ==> UARFCN:%d, CellID:%d, EcNO:%d, THRESHOLD:%d
Line 18032: Illegal search result : earfcn(%d), cell ID(%d), time_offset(%d), search_frame_position(%d)
Line 18040: No update search result : earfcn(%d), cell_id(%d) is already triggered in list
Line 18045: No update search result : abnormal search frame position (earfcn(%d), cell_id(%d), timeoffset(%d), index(%d), search_position(%d))
Line 18070: pCellInfo or pCellInfo->nr_meas_rslt : NULL
Line 18095: Update search result : earfcn(%d), cell ID(%d), new_offset(%d), delta(%d), search_position(%d), old_offset(%d)
Line 18103: No update search result(delta:%d) : earfcn(%d), cell ID(%d), time_offset(%d), search_frame_position(%d)
Line 18133: LteRrmConn_ProcMeasResult pMsg is NULL
Line 18137: LteRrmConn_ProcMeasResult:IsCellOnly(%d), IsLastMeas(%d)
Line 18141: LteRrmConn_ProcMeasResult ignore: ConnMeasEnable is FALSE
Line 18157: LteRrmConn_ProcMeasResult is FAIL
Line 18174: LteRrmConn_ProcMeasResult: pFreqInfo is NULL
Line 18187: NR current Search/Measure ongoing: %d / %d total count: %d
Line 18266: LTERRM.Set.pIntraMeasList is empty(meas mode:%d)
Line 18302: Set intraFreqLastIcSrchTime(%d) firstIntraSrchDone(1)
Line 18319: measmode(%d)-InterFreq Srch
Line 18330: measmode(%d)-Scell Srch
Line 18340: measmode(%d)-InterFreq Meas
Line 18351: measmode(%d)-Scell Meas
Line 18427: measmode(%d)-InterFreq Srch
Line 18438: measmode(%d)-Scell Srch
Line 18450: measmode(%d)-InterFreq Meas
Line 18461: measmode(%d)-Scell Meas
Line 18475: earfcn(%d) measmode(%d)-invalid result
Line 18493: [CHECK] LteRrmConn_ProcMeasResult_Scell is NULL(earfcn=%d, index:%d)
Line 18655: CDMA Measure Result
Line 18668: LteRrmConn_ProcInterRatMeasResult
Line 18710: pCurMeasList is NULL
Line 18726: NR current Search/Measure ongoing: %d / %d total count: %d
Line 18730: NR pCurFreqInfo is NULL!!!
Line 18767: DoSrchForCgi - Intra
Line 18776: DoSrchForCgi - Inter
Line 18783: DoSrchForCgi - Scell
Line 18805: LTERRM_SRCHMODE_CGI_CHANGE
Line 18811: LTERRM_SRCHMODE_CGI_SRCH
Line 18828: Cannot find freq, freq_found(%d), earfcn (%d)
Line 18834: DoSrchForCgi - from IRAT
Line 18865: CGI srch start (CGI Earfcn=%d)
Line 18872: saved serving BW(%d)
Line 18894: Invalid CgiMeasType(%d)
Line 18942: LteRrm_AllocCellInfoBuf: TargetCell
Line 18946: TargetCell is NULL as a result of LteRrm_AllocCellInfoBuf()
Line 18958: please check: PrimaryCell is NULL!!
Line 18973: CGI stop, Return ! (earfcn=%d, cell id=%d, CGI Earfcn=%d)
Line 19044: CGI MeasResult Mid(%d) S_Rsrp(%d) S_Rsrq(%d) C_Rsrp(%d) C_Rsrq(%d)
Line 19070: LteRrmConn_UpdateMeasCgiConfig cgi_req is NULL
Line 19085: UMTS SI_AcquisitionForHO(MID:%d)
Line 19090: UMTS IRAT CGI is configured(MID:%d)
Line 19100: GSM IRAT CGI is configured(MID:%d)
Line 19110: CDMA IRAT CGI is configured(MID:%d)
Line 19121: NR IRAT CGI is configured(MID:%d)
Line 19129: IRAT CGI MeasList NULL
Line 19142: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 19157: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 19181: CGI pCurElem NULL
Line 19185: LTE CGI is configured(MID:%d, CgiMeasType:%d)
Line 19192: CGI object match fail (L1:%d,RRC:%d)
Line 19198: CGI To report object configured(%d,%d)
Line 19207: CGI change State(%d -> LTERRM_CGI_SUSPENDED)
Line 19213: CGI pCurElem->obj NULL (0x%x)
Line 19233: LteRrmConn_ProcMeasCgiReq msg is NULL
Line 19237: Receive LTE_CPHY_MEAS_CGI_CONF_REQ Msg
Line 19269: CGI change State(%d -> LTERRM_CGI_UMTS_AGAP_SEARCHING)
Line 19300: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 19306: CGI from IRAT(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
Line 19388: remove CGI SCell_MID(%d)
Line 19403: SCell(ID:%d, earfcn=%d is added in ScellmeasList
Line 19416: remove Utra_MID(%d)
Line 19434: remove Geran_MID(%d)
Line 19453: remove NR_MID(%d)
Line 19477: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 19527: LteRrmConn_ProcStopMeasCgiReq msg is NULL
Line 19532: Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
Line 19539: IRAT CGI(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
Line 19548: IRAT CGI(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
Line 19552: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 19558: CGI change State(%d -> LTERRM_CGI_STOP)
Line 19568: IRAT CGI(CgiMeasType:%d) HOLD! change the state(%d -> LTERRM_CGI_RETRY)
Line 19579: UTRA CGI using AGAP(CgiMeasType:%d) SUCCESS! change the state(%d -> LTERRM_CGI_REPORT)
Line 19586: UTRA CGI using AGAP(CgiMeasType:%d) FAIL! change the state(%d -> LTERRM_CGI_REPORT)
Line 19590: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 19596: CGI change State(%d -> LTERRM_CGI_STOP)
Line 19604: Invalid irat_cgi_meas_result_state:%d, change the state(%d -> LTERRM_CGI_REPORT)
Line 19618: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 19624: CGI change State(%d -> LTERRM_CGI_STOP)
Line 19641: CGI change State(%d -> LTERRM_CGI_REPORT)
Line 19647: CGI change State(%d -> LTERRM_CGI_STOP)
Line 19654: CGI change State(%d -> LTERRM_CGI_DEACTIVE)
Line 19674: CGI change State(%d -> LTERRM_CGI_WAITSIB1)
Line 19721: Invalid CGI State(%d -> LTERRM_CGI_DEACTIVE)
Line 19726: CGI change State(%d -> LTERRM_CGI_SEARCHING) - CgiMeasType:%d
Line 19750: Invalid CgiMeasType(%d)
Line 19752: CGI change State(%d ->LTERRM_CGI_DEACTIVE)
Line 19779: CgiFreqInfo is NULL
Line 19792: Start the procedure for utran CGI cell(Arfcn:%d, scrCode:%d) timing search
Line 19803: CGI change State(LTERRM_CGI_UMTS_AGAP_SEARCHING -> LTERRM_CGI_UMTS_AGAP_SFN_MIB)
Line 19811: CGI change State(LTERRM_CGI_UMTS_AGAP_SFN_MIB -> LTERRM_CGI_UMTS_AGAP_SIB)
Line 19828: Invalid CGI State(%d)
Line 19838: Invalid CGI Parameters(CgiMeasType:%d)
Line 19864: pFreqInfo is NULL
Line 20156: pFreqInfo is NULL
Line 20163: pMeasResult is NULL
Line 20185: Ncell (Cell ID:%d, RSRP=%d, RSRQ=%d RSSINR=%d)
Line 20227: pFreqInfo is NULL
Line 20234: pMeasResult is NULL
Line 20241: UTRAN RAT(LTERRM_ID_LISTED) enter!
Line 20265: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 20275: RAT(UTRAN TDD)
Line 20280: RAT(%d) is invalid
Line 20291: UTRAN Ncell(Candi List) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 20309: UTRAN RAT(LTERRM_CANDI_LISTED) enter!
Line 20333: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 20343: RAT(UTRAN TDD)
Line 20348: RAT(%d) is invalid
Line 20359: UTRAN Ncell(Candi List) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 20377: UTRAN RAT(LTERRM_UNID_LISTED) enter!
Line 20401: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 20411: RAT(UTRAN TDD)
Line 20416: RAT(%d) is invalid
Line 20427: UTRAN Ncell(UnID list) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 20445: UTRAN RAT(LTERRM_ID_DETECTED) enter!
Line 20469: RAT(UTRAN FDD. %d), Quantity(%d) is invalid
Line 20479: RAT(UTRAN TDD)
Line 20484: RAT(%d) is invalid
Line 20495: UTRAN Ncell(Detected list) (Cell ID:%d, RSCP=%d, EcNo=%d)
Line 20536: pFreqInfo is NULL
Line 20543: pMeasResult is NULL
Line 20549: GSM RAT(LTERRM_ID_LISTED) enter!
Line 20565: GERAN Ncell(ID List) arfcn:%d, RSSI=%d)
Line 20583: GSM RAT(LTERRM_CANDI_LISTED) enter!
Line 20599: GERAN Ncell(Candi List) arfcn:%d, RSSI=%d)
Line 20617: GSM RAT(LTERRM_UNID_LISTED) enter!
Line 20633: GERAN Ncell(UnID List) arfcn:%d, RSSI=%d)
Line 20651: GSM RAT(LTERRM_ID_DETECTED) enter!
Line 20667: GERAN Ncell(Detected List) arfcn:%d, RSSI=%d)
Line 20708: pFreqInfo is NULL
Line 20715: pMeasResult is NULL
Line 20774: LteRrm_SetNCellAllFreqSortedList pResult is NULL
Line 20939: UTRAN(%d) NumOfCell(%d)
Line 20989: GERAN NumOfCell(%d)
Line 21034: EHRPD NumOfCell(%d)
Line 21073: pNCellList is NULL
Line 21124: UTRA NCELL[%d] arfcn:%d, cell_id:%d, time_offset:%d
Line 21191: GERAN NCELL[%d] band_indicator:%d, arfcn:%d, bsic:%d
Line 21200: frameNumber:%d, Qb:%d, net_frameNumber:%d
Line 21230: NOT support the handover using cell change corresponding to RAT type(%d)
Line 21256: LteRrmConn_ProcAgapMeasReq msg is NULL
Line 21263: newCGIstate(%d) is not NONE for AGAP
Line 21279: FreqInfo is not existed for AGAP
Line 21288: cellInfo is not existed for AGAP
Line 21337: LteRrmConn_ProcCgiRepStopReq msg is NULL
Line 21341: Receive LTE_CPHY_MEAS_CGI_STOP_REQ Msg
Line 21443: Scell(%d) is deactivated from timer
Line 21557: Warning!! no matched pFreqInfo
Line 21563: SCellFreq -> PSCellFreq
Line 21570: InterFreq -> PSCellFreq
Line 21584: meas Object(ID:%d, earfcn=%d) is moved to PScell
Line 21617: meas Object(ID:%d, earfcn=%d) is moved from Inter freq to Scell
Line 21658: meas Object(ID:%d, earfcn=%d) is removed
Line 21665: meas Object(ID:%d, earfcn=%d) is moved from Scell to Inter freq
Line 21742: change Scell cycle SRCH(%d), MEAS(%d)
Line 21783: measmode(%d)-InterFreq Srch
Line 21789: measmode(%d)-Scell Srch
Line 21803: measmode(%d)-InterFreq Meas
Line 21809: measmode(%d)-Scell Meas
Line 21816: invalid measmode(%d)
Line 21839: EutranNum(%d)
Line 21861: UtranNum(%d)
Line 21867: GeranNum(%d)
Line 21873: CDMANum(%d)
Line 21898: LteRrm_RemoveMeasNeighPatternList NeighPatternList is NULL
Line 21929: LteRrm_RemoveNrPbchCandiList pNrPbchCandiList is NULL
Line 22016: - requested meas_csi_rs_id(%d) is out of range: skip this id
Line 22027: - remove meas_csi_rs_id(%d)
Line 22033: - need to check num_csi_rs_list(%d)<0 --> change to 0
Line 22050: - not found csi_rs_id(%d)
Line 22054: - LteRrmConn_CsiRsListRemoveElem pFreqInfo(%d) or pMeasCsiRsList is empty
Line 22077: LteRrmConn_CsiRsListRemoveList - pFreqInfo(%d) or object(%d) is NULL
Line 22108: LteRrmConn_CsiRsListAddList - pFreqInfo(%d) or object(%d) is NULL
Line 22115: LteRrmConn_CsiRsListAddList - num_start_csi_rs_list(%d) < 1
Line 22129: Cannot Allocate pMeasCsiRsList buffer
Line 22137: LteRrmConn_CsiRsListAddList wrong number num_start_csi_rs_list(%d) > (%d)
Line 22147: - Num of csi_rs_list element(%d): ADD is not possible
Line 22155: - csi-rs target cell is same as PCell(pcid:%d) Skip it
Line 22162: Cannot Allocate LteRrm_Meas_CsiRs_t buffer
Line 22210: pFreqInfo(%d) or object(%d) - need to check
Line 22222: measDS_config(%d): setup
Line 22226: 1. dmtc_period_offset(%d) ds_occasion_duration_duplex(%d) ds_occasion_duration(%d)
Line 22230: 2. Remove meas_csi_rs_list (num:%d)
Line 22238: - No csi_rs_list to remove: Requested num_stop_csi_rs_list(%d) but num_csi_rs_list(%d < 1)
Line 22246: 3. Add meas_csi_rs_list (num:%d)
Line 22260: measDS_config(%d): released
Line 22289: Warning! pFreqInfo->measDS_setup == FALSE in LteRrmConn_IsDmtcOccurThisCycle
Line 22295: Warning!PcellCurSfnTti(0xFFFF) is not updated - Need to check in L1LC_RRM_MEAS_SCHEDULE_IND message
Line 22313: dmtc occur after %d[TTI] (curSfnTti:%d norm_curr_tti:%d dmtc_period_tti:%d dmtc_offset:%d)
Line 22337: Warning! pFreqInfo is NULL (in LteRrmConn_IsMeasTrigInDmtcConfig)
Line 22346: Dmtc is expected this cycle(earfcn:%d)
Line 22351: Dmtc configured but not expected this cycle(earfcn:%d)
Line 22385: Ref DMTC info - IntRA (earfcn:%d, measDS_setup:%d)
Line 22389: - dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Line 22409: Ref DMTC info - IntER (earfcn:%d, measDS_setup:%d)
Line 22413: - dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Line 22444: Ref DMTC info - SCell (earfcn:%d, measDS_setup:%d)
Line 22448: - dmtc_period:%d, dmtc_period_offset:%d, ds_occasion_duration:%d, ds_occasion_duration_duplex:%d
Line 22497: [%d]Update Scell(%d) measDS_setup
Line 22505: [%d]No obj found for Scell(%d) -> measDS_setup:0
Line 22540: pFreqInfo(%d) or object(%d) - need to check
Line 22551: rmtc_config(%d): setup
Line 22555: 1. rmtc_period(%d) rmtc_subframe_offset(%d) measDuration(%d)
Line 22560: rmtc_config(%d): released
Line 22593: Warning! LteRrmConn_ProcSstdCompute: LTERRM.Meas.ConnMeasConfig.pMeasListSstd NULL
Line 22599: Warning! LteRrmConn_ProcSstdCompute: report_sstd_meas:FALSE
Line 22606: Warning! LteRrmConn_ProcSstdCompute: pPrimaryCell(%d) or pPSCell(%d) is NULL
Line 22613: Warning! LteRrmConn_ProcSstdCompute: invalid time_offset PCell(%d),PSCell(%d)
Line 22651: Warning! unexpected frame difference (diff1:%d)
Line 22736: [MCD] Check RF imbalance(mode:%d) (m:%d, s:%d)
Line 22742: Cannot Allocate Message buffer
Line 22768: [RRM-VoLTE Status(%d), fRSRP(%d), RSRP(%d),RSSI(%d)]
Line 22801: [OF_ENDC_LOCAL_BARRED] SetLocalNrBarredCellInfo - LocalNrBarredInfoFlag:%d
Line 22811:    >>LocalNrBarredCell_Arfcn:%d, LocalNrBarredCell_Pcid:%d, LocalNrBarredCell_SetTime:%d
Line 22857: [OF_ENDC_LOCAL_BARRED] CheckLocalNrBarredCell(regiEnable:%d) - SetTime:%d, curTimeInMs:%d, interval:%d, ValidTimeDuration:%d
Line 22865:    >>NrCell(Arfcn:%d, LocalNrBarredCell_Pcid:%d) is locally barred
