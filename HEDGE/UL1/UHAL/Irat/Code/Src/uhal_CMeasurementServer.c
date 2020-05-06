Line 260: Set powerOffSkip flag
Line 266: Clear powerOffSkip flag
Line 272: [L2U]MmcUmtsPowerReq
Line 310: SKIP power off due to RAT is resumed
Line 344: Memory Allocation Error
Line 377: uhal_CMeasurementServer_init
Line 454: uhal_CMeasurementServer_free
Line 523: activeStackId %d UMTS RSSI Measurement Request
Line 524: activeStackId %d   UARFCN = %d
Line 525: activeStackId %d   Duration = %d,%d,%d
Line 526: activeStackId %d ==================================================
Line 592: activeStackId %d UMTS Initial RSCP/EcNo Measurement Request (%d %d)
Line 593: activeStackId %d   UARFCN = %d
Line 594: activeStackId %d   Duration = %d,%d,%d
Line 595: activeStackId %d   numOfRscpEcNoInfo = %d
Line 596: activeStackId %d   numPathsToCorrelate = %d
Line 601: activeStackId %d INIT_RSCP_REQ: gap_length = %d slots
Line 628: activeStackId %d INIT_RSCP_REQ: numPathsToCorrelate = 0, using default %d
Line 640: Cell %d: SCR Code = %d, Tx Diversity = %d
Line 647: activeStackId %d ==================================================
Line 660: activeStackId %d INIT_RSCP_REQ: Invalid numOfRscpEcNoInfo %d, maximum cells is %d
Line 706: activeStackId %d UMTS RSCP/EcNo Update Measurement Request
Line 707: activeStackId %d   UARFCN = %d
Line 708: activeStackId %d   Duration = %d,%d,%d
Line 709: activeStackId %d   numOfRscpEcNoInfo = %d
Line 722: activeStackId %d RSCP_UPDATE_REQ: gap_length = %d slots
Line 746: activeStackId %d   Cell %d: SCR Code = %d ; Tx Diversity = %d ; Frame Offset = %d
Line 754: activeStackId %d ==================================================
Line 766: activeStackId %d RSCP_UPDATE_REQ: Invalid numOfRscpEcNoInfo %d, maximum cells is %d
Line 824: activeStackId %d Memory Allocation Error
Line 832: activeStackId %d UMTS ->2G RSSI Measurement  Aborted, dummy indication sent
Line 858: activeStackId %d UMTS RSSI Measurement Indication
Line 859: activeStackId %d   UARFCN = %d
Line 860: activeStackId %d   RSSI = %ddBm
Line 861: activeStackId %d ==================================================
Line 955: activeStackId %d Memory Allocation Error
Line 963: activeStackId %d UMTS ->2G INITIAL RSCP Measurement  Aborted, dummy indication sent
Line 988: activeStackId %d UMTS Initial RSCP/EcNo Measurement Indication
Line 989: activeStackId %d   UARFCN = %d
Line 990: activeStackId %d   RSSI = %ddBm
Line 991: activeStackId %d   numOfRscpEcNoInfo = %d
Line 1089:   Cell %d: SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d
Line 1091: activeStackId %d ==================================================
Line 1170: Skip uhal_CHmcp_PgapRelease
Line 1199: activeStackId %d Memory Allocation Error
Line 1207: activeStackId %d UMTS ->2G Update RSCP Measurement  Aborted, dummy indication sent
Line 1232: activeStackId %d UMTS RSCP/EcNo Update Measurement Indication
Line 1233: activeStackId %d   UARFCN = %d
Line 1234: activeStackId %d   RSSI = %ddBm
Line 1235: activeStackId %d   numOfRscpEcNoInfo = %d
Line 1252: activeStackId %d !!! cell_valid is not TRUE !!!
Line 1297:   Cell %d: SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d
Line 1299: activeStackId %d ==================================================
Line 1358: activeStackId %d UMTS Cell Search Request
Line 1359: activeStackId %d   UARFCN = %d
Line 1360: activeStackId %d   Duration = %d,%d,%d
Line 1361: activeStackId %d ==================================================
Line 1377: CELL_SRCH_REQ: step1GapLength=%d slots, step2GapLength=%d slots, processingMargin=%d slots
Line 1384: activeStackId %d CELL_SRCH_REQ: gapLength %d should be longer than %d
Line 1452: activeStackId %d UMTS Partial Search Request (phase=%d)
Line 1453: activeStackId %d   UARFCN = %d
Line 1454: activeStackId %d   Duration = %d,%d,%d
Line 1455: activeStackId %d ==================================================
Line 1471: activeStackId %d PARTIAL_SRCH_REQ: gap_length = %d slots
Line 1517: activeStackId %d   pathIndex=%d: Path Offset (QC) = %d
Line 1520: activeStackId %d ==================================================
Line 1527: activeStackId %d PARTIAL_SRCH_REQ: Invalid numOfPathes=%d, max num of pathes is %d
Line 1609: activeStackId %d Memory Allocation Error
Line 1617: activeStackId %d UMTS ->Partial Search  Aborted, dummy indication sent
Line 1637: activeStackId %d UMTS Partial Search Indication
Line 1638: activeStackId %d   UARFCN = %d
Line 1639: activeStackId %d   PHASE = %d
Line 1640: activeStackId %d   RSSI = %ddBm
Line 1654: activeStackId %d   PATH INDEX = %d ; offset(QC) = %d
Line 1659: activeStackId %d   PATH NOT FOUND !!!
Line 1708:   SCR Code NOT FOUND ; RSCP = %ddBm ; Ec/No = %ddB
Line 1714:   SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d ; Tx Diversity = %d
Line 1718: activeStackId %d ==================================================
Line 1725: activeStackId %d srch_ind_fun is NULL !!!
Line 1733: activeStackId %d 3G modem OFF is skipped !!!
Line 1747: activeStackId %d 3G modem OFF is skipped
Line 1840: activeStackId %d Memory Allocation Error
Line 1848: activeStackId %d UMTS ->2G Cell Search  Aborted, dummy indication sent
Line 1874: activeStackId %d UMTS Cell Search Indication
Line 1875: activeStackId %d   UARFCN = %d
Line 1876: activeStackId %d   RSSI = %ddBm
Line 1933:   SCR Code NOT FOUND ; RSCP = %ddBm ; Ec/No = %ddB
Line 1939:   SCR Code = %d ; RSCP = %ddBm ; Ec/No = %ddB ; Frame Offset = %d ; Tx Diversity = %d
Line 1942: activeStackId %d ==================================================
Line 1986: UMTS Measurement Server Reset
Line 1987: ==================================================
Line 2027: uhal_CMeasurementServer_SetFreqIndex 	Array index out of bound %d 
Line 2063: IRAT MeasurementServer SetFreqIndex: index is larger than UHAL_IRAT_MAX_FREQUENCIES
Line 2126: IRAT MeasurementServer FSM: current_state=%u result=%d event=%d, next_state=%u
Line 2139: IRAT MeasurementServer FSM: current_state=%u result=%d event=%d, next_state=%u
Line 2274: uhal_CMeasurementServer_StopSschSTF: currentRSN=%d
Line 2292: uhal_CMeasurementServer pendingPowerOff = %d, measRequestFromLte = %d
Line 2296: measurement_server pointer is null
Line 2302: T9 HISR but power off ind is pended
Line 2359: uhal_CMeasurementServer isActiveRequestQueue = %d, t9HisrDoneStatus = %d
Line 2391: Que is empty but T9 HISR isn't generated
Line 2582: activeStackId %d Memory Allocation Error
Line 2613: activeStackId %d INIT_RSCP_REQ: Step1 found cells. Do the next step(step3 search)
Line 2621: activeStackId %d INIT_RSCP_REQ: Step1 found no cells. Send IND to GL1
Line 2689: Initial Scan: Buffering completed
Line 3129: activeStackId %d Memory Allocation Error
Line 3173: activeStackId %d Invalid Request Type=%d
Line 3194: activeStackId %d Invalid Request Type=%d
Line 3375: activeStackId %d uhal_CMeasurementServer_CellSearchProcessEvent: Request Step2 Search (Code Group ID = %d)
Line 3506: activeStackId %d Invalid Request Type=%d
Line 3566: activeStackId %d [IRAT] RF Rx ON command exec failure Error %d, Additional Error %d
Line 3607: activeStackId %d RF UARFCN Error %d, Additional Error %d
Line 3654: activeStackId %d Starting RF: uarfcn %d: current state %d
Line 3681: activeStackId %d Buffering Error %d, Additional Error %d
Line 3706: activeStackId %d PSCH Error %d, Additional Error %d
Line 3729: activeStackId %d Buffering Error %d, Additional Error %d
Line 3738: activeStackId %d uhal_CMeasurementServer_StartPsch: No buffering (req_type=%d)
Line 3825: activeStackId %d uhal_CMeasurementServer_StartSsch: Step2 Search Gap Length (slots) = %d
Line 3831: activeStackId %d SSCH Error %d, Additional Error %d
Line 3838: activeStackId %d uhal_CMeasurementServer_StartSsch: currentRSN=%d
Line 3859: activeStackId %d uhal_CMeasurementServer_StartSsch: Schedule StopSschSTF, currentRSN=%d, targetpRSN=%d
Line 3933: IRAT request Cpich ScrCode: path_count=%d, cell_count=%d, cell_index=%d
Line 3951: activeStackId %d CPICH SCR Code - no cells to check
Line 3978: activeStackId %d Wrong ScrCode Index = %d 
Line 4055: IRAT request Cpich ScrCode. pathOffset %d ScrCode[%d]=%d
Line 4062: activeStackId %d CPICH SCR Code Error %d, Additional Error %d
Line 4122: activeStackId %d CPICH SCR Code Error %d, Additional Error %d
Line 4210: activeStackId %d CPICH Multi-Path Error %d, Additional Error %d
Line 4286: activeStackId %d CPICH Multi-Path Error %d, Additional Error %d
Line 4410: activeStackId %d Starting RF: uarfcn %d: current state %d
Line 4433: activeStackId %d Buffering Error %d, Additional Error %d
Line 4499: uhal_CMeasurementServer_CellUpdated  magnitude = %d, num_paths = %d, isMpsRetried = %d
Line 4600: freqIndex=%d, uarfcn=%d, isNewFrequency=%d
Line 4625: Memory Allocation Error
Line 4664: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4670: Memory Allocation Error
Line 4690: INIT_RSCP_REQ: maxCellIndex=%d should be less than the allowed MAX CELL %d
Line 4712: INIT_RSCP_REQ: maxCellIndex=%d
Line 4735: Memory Allocation Error
Line 4771: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4777: Memory Allocation Error
Line 4797: RSCP_UPDATE_REQ: maxCellIndex=%d should be less than the allowed MAX CELL %d
Line 4808: RSCP_UPDATE_REQ: cellIndex=%d, SCR Code=%d
Line 4842: Memory Allocation Error
Line 4885: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4891: Memory Allocation Error
Line 4946: Memory Allocation Error
Line 4988: UARFCN %d is already configued but its cell array is NULL. Recreate it.
Line 4994: Memory Allocation Error
Line 5033: Invalid Request %d
Line 5041: Queue empty
Line 5080: activeStackId %d Reset step1 searcher: cmd_status should be idle but cmd_status=%d
Line 5095: activeStackId %d Reset step2 searcher: cmd_status should be idle but cmd_status=%d
Line 5113: activeStackId %d Reset step3 searcher: cmd_status should be idle but cmd_status=%d
Line 5131: activeStackId %d Reset multipath searcher: cmd_status should be idle but cmd_status=%d
Line 5149: activeStackId %d Reset buffering: cmd_status should be idle but cmd_status=%d
Line 5301: Memory Allocation Error
Line 5311: UMTS RSSI Measurement Error Indication
Line 5325: Memory Allocation Error
Line 5335: UMTS Initial RSCP/EcNo Measurement Error Indication
Line 5349: Memory Allocation Error
Line 5359: UMTS RSCP/EcNo Update Measurement Error Indication
Line 5373: Memory Allocation Error
Line 5383: UMTS Cell Search Error Indication
Line 5390: Invalid Request %d
Line 5501: activeStackId %d RF settled for IRAT measurement
Line 5598: uhal_CMeasurementServer_CheckRRM: uhal_CMeasurementServer_RRM_flag %d: firstScrCode = %d 
Line 5630: uhal_CMeasurementServer_CheckRRM: arrayIndx = %d, ScrCode = %d 
Line 5665: uhal_CMeasurementServer_CheckRRM: uhal_CMeasurementServer_RRM_flag %d
Line 5697: uhal_IratMeasurement_Abort : No IRAT O2U going ON
Line 5710: uhal_IratMeasurement_Abort : 3G modem is ON
Line 5722: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 5730: uhal_IratMeasurement_Abort : 3G modem already switched OFF
Line 5741: activeStackId %d mismatching with callerStackId %d, UMTS_IRAT_ONGOING_DS=%d
Line 5800: uhal_IratRFParametersReset() getting called
