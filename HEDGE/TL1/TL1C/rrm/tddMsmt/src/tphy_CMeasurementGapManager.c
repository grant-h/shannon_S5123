Line 404: ClassData_ptr->SingletonInstId==NULL
Line 436: [IRAT T2G] gapCfn = %d, gapType = %d
Line 449: tphy_CHsdschResources_GetInstanceId failed
Line 515: [IRAT T2G] gapCfn = %d, gapType = %d => %d
Line 541: [IRAT T2G] MGM UpdateGapInfo:  servCellPostSir = %d, bEnableT2GScheduling = %d, uRSSI_PERIOD = %d, uBSIC_PERIOD = %d, servCellRscp = %d isHsDschConfigured = %d isHsScchInactive = %d
Line 604: [IRAT T2G] MGM UpdateGapInfo: gap scheduling is skipped due to Eutra Measuement gap !!!
Line 661: MGM: TddIntraMidServerCount is zero and count to Increment is -1
Line 667: MGM : TddIntraMidServerCount=%d
Line 687: MGM : TddIntraMidServerCount is zero and count to Increment is -1
Line 693: MGM :IncTddInterMidServerCount: TddInterMidServerCount=%d
Line 733: MGM :InterFreqSTF
Line 758: MGM :StartCellSychroMeasTrigger bStartCellSychro(%d),MeasurementState(%d) and MgmMeasType(%d)
Line 769: MGM : smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 792: MGM :  Skip intra-freq measurement due to EUTRA measurement
Line 797: MGM : Skip intra-freq measurement due to GSM measurement
Line 816: MGM :  Skip inter-freq measurement due to EUTRA measurement
Line 824: MGM : Skip inter-freq measurement due to GSM measurement
Line 850: MGM :  smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 915: MGM : Skip intra-freq measurement due to GSM measurement
Line 955: MGM :No Midserver registered
Line 970: MGM :Invalid MGM state to start measurment trigger
Line 994: MGM : start trigger is already triggered
Line 1008: MGM :StopCellSychroMeasTrigger
Line 1013: MGM :  smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1124: MGM : : IntraFreq is not in progress !!!
Line 1133: MGM : : smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1142: MGM ::TPHY_MESSAGING_RETURN_CODE_FAILURE: transactId=%d
Line 1144: MGM :bStartCellSychro [%d] gap manager state [%d]
Line 1171: MGM  :: smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1203: MGM :No inter freq cells So start intra again after the MGM time out
Line 1216: MGM :No inter freq cells So start intra again after the MGM time out
Line 1318: MGM : InterFreq is not in progress !!!
Line 1327: MGM : smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1360: MGM : Keep holding AFC !!!
Line 1367: MGM :TPHY_MESSAGING_RETURN_CODE_FAILURE: transactId=%d
Line 1386: MGM : Skip inter-freq measurement due to EUTRA measurement
Line 1392: MGM : Skip inter-freq measurement due to GSM measurement
Line 1413: MGM : smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1516: MGM :CELL FACH Inter complete before duration So start intra again after the MGM time out
Line 1602: StartFachGapInterFreq uMeasDuration=%d
Line 1652: MGM :tphy_CMGM_FachHandler: State=%d
Line 1655: MGM :StopOngoingInterFreqMeasurment
Line 1664: MGM tphy_CMGM_FachHandler: State=%d
Line 1667: MGM :StopOngoingInterFreqMeasurment
Line 1683: MGM :: tphy_CMGM_Timeout
Line 1691: MGM : smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1728: MGM : Keep holding AFC !!!
Line 1753: MGM : Skip intra-freq measurement due to EUTRA measurement
Line 1758: MGM : Skip intra-freq measurement due to GSM measurement
Line 1787: MGM : Skip inter-freq measurement due to GSM measurement
Line 1811: MGM : smc_TokenCheckAndCancel::InterFreqToken(%d)
Line 1896: MGM : Skip intra-freq measurement due to GSM measurement
Line 1948: MGM :Invalid MGM state to start measurment trigger
Line 1990: MGM : Intra/Inter-freq measurement are resumed after T2L measurement
Line 2072:  MGM is null !!
Line 2132: MGM : current cfn=%d, target cfn=%d, FMO frame type=%d (free/single/start/mid/end), realFOS=%d, gap start (sfn)=(%d)
Line 2140: MGM : Single FACH Occasion cfn=%d
Line 2149: MGM : Start FACH Occasion cfn=%d
Line 2175: MGM : FACH Occasion cfn=%d
Line 2180: MGM : End FACH Occasion cfn=%d
Line 2252: MGM : table=%d, table index=%d, measurement purpose=%d
Line 2265: [T2G] Skip this measurement since 2G is off
Line 2313: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2343: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2377: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2409: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2440: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2475: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2507: MGM: duration (%d,%d,%d) is shorter than rfBackOffset (%d,%d,%d)
Line 2529: MGM: FACH is configured but there is no outstanding T2G measurement requests !!!
Line 2541: Measurement Gap Manager: IratGapStartStop is scheduled !!!
Line 2561: MGM: AGC SPI bloking will be scheduled !!!
Line 2575: MGM : Unexpected measurementState=%d (should be 2)
Line 2664: MGM : at sfn=%d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 2681: MGM : called in dodgy MGM state :- %d
Line 2775: MGM : runs at RSN %d bInterFachGap %d
Line 2821: number of frames for inter Freq measurements: %d
Line 2979: [IRAT T2L/T2G]. Measurement purpose(index)=%d. The total remaining drxDuration (sfn, slot)=(%d, %d) drxStart = (%d, %d)
Line 2983: [IRAT T2L/T2G] : index=%d, gapDuration (sfn, slot)=(%d, %d), nextGapOffset (sfn, slot)=(%d, %d), needed (sfn, slot)=(%d, %d)
Line 3049: [IRAT T2L/T2G]  (sfn, slot)=(%d, %d), start (sfn, slot)=(%d, %d)
Line 3053: [IRAT T2L/T2G]  (sfn, slot)=(%d, %d), alarm (sfn, slot)=(%d, %d), wakeup (sfn, slot)=(%d, %d)
Line 3061: mgmDrxGap SetVgmBusy TRUE
Line 3072: [IRAT T2L/T2G]  index=%d, the remaining drxDuration %d (chips) is shorter than needed %d (chips)
Line 3110: BoundaryRSN stopped currentRSN %d boundaryRsn %d boundarySFN %d
Line 3152: [IRAT T2L/T2G] index=%d, current (sfn, slot)=(%d, %d)
Line 3156: [IRAT T2L/T2G]  index=%d, Gap starts at (sfn, slot, chip)=(%d, %d, %d), duration (sfn, slot, chip)=(%d, %d, %d)
Line 3179: Launch sleep token at sfn = %d to run at sfn %d slot %d
Line 3187: CallSchedulingFunction called in dodgy VGM state :- %d
Line 3234: !!WRONG STATE %d!!
Line 3239: [IRAT T2G] DL Mask %x UL Mask %x from Channel Configuration !!
Line 3245: [IRAT T2G]  IdleSlots are: %x!!
Line 3264: !!WRONG TS CONFIG DL%d  UL%d!!
Line 3363: [IRAT T2G]  startSlot: %d endSlot: %d!!
Line 3408: [IRAT T2G]  final startSlot: %d final endSlot: %d!!
Line 3432: [IRAT T2G] DL Mask %x UL Mask %x from Channel Configuration !!
Line 3438: [IRAT T2G]  IdleSlots are: %x!!
Line 3457: !!WRONG TS CONFIG DL%d  UL%d!!
Line 3556: [IRAT T2G]   startSlot: %d endSlot: %d!!
Line 3601: [IRAT T2G]  final startSlot: %d final endSlot: %d!!
Line 3645: !!WRONG STATE %d!!
Line 3650: DL Mask:%x UL Mask: %x!!
Line 3655:  IdleSlots are: %x!!
Line 3672: !!WRONG TS CONFIG DL%d  UL%d!!
Line 3770:  IdleSlot1 startSlot: %d endSlot: %d!!
Line 3807:  IdleSlot2 startSlot: %d endSlot: %d!!
Line 3871:  IdleSlot3 startSlot: %d endSlot: %d!!
Line 3897: [IRAT T2G] START FACH GSM
Line 3931: [IRAT T2G] FachGsmGapToken is already cleared
Line 4433: [IRAT T2GL] isGsmMeasScheduledDsds = %d,isEutraMeasScheduledDsds = %d 
Line 4508: [IRAT T2GL] gaplengthInSlots = %d
Line 4520: [IRAT T2GL] Idle Bit Mask = 0x%X Idle Bit Mask for 2nd SubFrame = 0x%X
Line 4529: RF UARFCN Error %d, Additional Error %d
Line 4533: [IRAT T2GL] IRAT GAP CONFIG %d, iratGapTknIdx = %d
Line 4552: [IRAT T2GL] IRAT GAP CONFIG DONE %d
Line 4565: : bStart = %d
Line 4597: [IRAT T2G] NEW T2G SCHEDULING is enabled in EM !!!
Line 4602: [IRAT T2G] NEW T2G SCHEDULING is NOT enabled in EM !!!
Line 4742: [IRAT T2G] virtualGsmGapToken is already assigned
Line 4767: [IRAT T2G] gsmBsicRecnfGapToken is already assigned
Line 4792: [IRAT T2G] Irat Gap is already assigned
Line 4857: [IRAT T2G] VirtualGsmGapToken is no availabe
Line 4891: [IRAT T2G]  calling gsmRssiGapAvailable: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 4899: [IRAT T2G]  numOfGsmRssiMeasurementsInDrx=%d
Line 4912: [IRAT T2G]  calling GsmRssiGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 4932: [IRAT T2G]  No GSM cell to measure RSSI
Line 4946: [IRAT T2G]Next Gap starts at (sfn, slot)=(%d, %d)
Line 4951: [IRAT T2G]  Unexpected state=%d. Should not be ListenArfcn(1)
Line 4964: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 4993: [IRAT T2G] : calling dcsRssiGapAvailable: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5001: [IRAT T2G] : numOfDcsRssiMeasurementsInDrx=%d
Line 5014: [IRAT T2G] : calling DcsRssiGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5027: [IRAT T2G] : No DCS cell to measure RSSI
Line 5038: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 5043: [IRAT T2G] : Unexpected state=%d. Should not be ListenArfcn(1)
Line 5054: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 5110: [IRAT T2G] : calling fchDrxGapAvailable: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5122: [IRAT T2G] : calling DcsFchGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5136: [IRAT T2G] : calling GsmFchGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5145: [IRAT T2G] : No cells requesting FCH
Line 5166: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 5172: [IRAT T2G] : Unexpected state=%d. Should not be ListenArfcn(1)
Line 5184: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 5242: [IRAT T2G] : Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5255: [IRAT T2G] DcsSchGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5267: [IRAT T2G] GsmSchGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5275: [IRAT T2G]  No cells requesting SCH
Line 5296: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 5301: [IRAT T2G] : Unexpected state=%d. Should not be ListenArfcn(1)
Line 5313: [IRAT T2G] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 5326: [IRAT T2G] tphy_CMeasurementGapManager_processDcsRssiGap
Line 5335: [IRAT T2G]  DcsRssiGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5350: [IRAT T2G] No DCS cell to measure RSSI
Line 5357: [IRAT T2G] GsmRssiGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5371: [IRAT T2G]  No GSM cell to measure RSSI
Line 5383: [IRAT T2G]  DcsRssiGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5391: [IRAT T2G]  No DCS cell to measure RSSI
Line 5398: [IRAT T2G]  GsmRssiGap at sfn=%d: Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5406: [IRAT T2G]: No GSM cell to measure RSSI
Line 5426: [IRAT T2G] tphy_CMeasurementGapManager_processDcsInitialBsicGap
Line 5441: [IRAT T2G] DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5460: [IRAT T2G] DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5479: [IRAT T2G] GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5498: [IRAT T2G]  GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5525: [IRAT T2G] DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5538: [IRAT T2G]  DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5551: [IRAT T2G] GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5564: [IRAT T2G]  GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5588: [IRAT T2G] tphy_CMeasurementGapManager_processDcsBsicReconfirmationGap
Line 5604: [IRAT T2G] DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5623: [IRAT T2G]  GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5642: [IRAT T2G]  DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5661: [IRAT T2G]  GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5689: [IRAT T2G]  DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5702: [IRAT T2G]  GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5715: [IRAT T2G] DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5728: [IRAT T2G] GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5748: [IRAT T2G] tphy_CMeasurementGapManager_processGsmRssiGap
Line 5756: [IRAT T2G] : noOfRssiMeasurements=%d
Line 5760: [IRAT T2G] : calling GsmRssiGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5773: [IRAT T2G] : No GSM cell to measure RSSI
Line 5779: [IRAT T2G] : noOfRssiMeasurements=%d
Line 5783: [IRAT T2G] : calling DcsRssiGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5791: [IRAT T2G] : No DCS cell to measure RSSI
Line 5802: [IRAT T2G] : noOfRssiMeasurements=%d
Line 5806: [IRAT T2G]: calling GsmRssiGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5817: [IRAT T2G] : noOfRssiMeasurements=%d
Line 5821: [IRAT T2G] : calling DcsRssiGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5828: [IRAT T2G] : No DCS cell to measure RSSI
Line 5848: [IRAT T2G] tphy_CMeasurementGapManager_processGsmInitialBsicGap
Line 5862: [IRAT T2G] :GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5881: [IRAT T2G] :  GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5900: [IRAT T2G] :  DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5919: [IRAT T2G] :  DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5946: [IRAT T2G] :GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5959: [IRAT T2G] : GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5972: [IRAT T2G] :  DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 5985: [IRAT T2G] DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6009: [IRAT T2G] tphy_CMeasurementGapManager_processGsmBsicReconfirmationGap
Line 6026: [IRAT T2G] : calling GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6045: [IRAT T2G] : calling DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6064: [IRAT T2G]  GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6083: [IRAT T2G]  DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6111: [IRAT T2G]  GsmSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6124: [IRAT T2G]  DcsSchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6137: [IRAT T2G] GsmFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6150: [IRAT T2G]  DcsFchGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 6210: CFN=%d VGM VirtualGsmGap (target CFN=%d) : Gap type = %d
Line 6214: [IRAT T2G] RF is in paused state. Cant proceed !!!
Line 6237: [IRAT T2G] Consecutive T2G RSSI measurement is skipped !!!
Line 6244: [IRAT T2G] Consecutive T2G BSIC measurement is skipped !!!
Line 6257: [IRAT T2G] T2G measurement is blocked during HO !!!
Line 6283: [IRAT T2G] GSM is not turned ON
Line 6286: [IRAT T2G] theSearcherController->state = 0x%x
Line 6328: [IRAT T2G] The no of Gaps are: %d
Line 6338: StartTS-%d  EndTS-%d 
Line 6423: [IRAT T2G] GapInChips %d
Line 6442: [IRAT T2G] gapInSlots = %d. Please do double check UP/Donw link channel slot configurations !!!
Line 6446:  orginal start=(%d,%d,%d), GSM Rssi Start=(%d,%d,%d)
Line 6449:  rssiDuration=(%d,%d,%d)
Line 6466: orginal start=(%d,%d,%d), Modified GSM Rssi Start=(%d,%d,%d)
Line 6482: GAP NOT SUFFICIENT
Line 6527: [IRAT T2G] The no of Gaps = %d slots, gapInfoType = %d
Line 6538: StartTS-%d  EndTS-%d 
Line 6679: [IRAT T2G] GapInChips %d
Line 6702: [IRAT T2G] Too short gap = (%d < %d) !!!
Line 6708: [IRAT T2G] gapInSlots = %d. Please do double check UP/Donw link channel slot configurations !!!
Line 6712:  orginal start=(%d,%d,%d), GSM Rssi Start=(%d,%d,%d)
Line 6715:  rssiDuration=(%d,%d,%d)
Line 6732: orginal start=(%d,%d,%d), Modified GSM Rssi Start=(%d,%d,%d)
Line 6748: GAP NOT SUFFICIENT
Line 6772: [IRAT T2G] GSM is not turned ON
Line 6776: [IRAT T2G] theSearcherController->state = 0x%x
Line 6846: [IRAT T2G] FIXED_GAP : StartTS-%d EndTS-%d 
Line 7001: [IRAT T2G] MGM VirtualGSMGap: orginal start=(%d,%d,%d), GSM BSIC Start=(%d,%d,%d)
Line 7003: [IRAT T2G] MGM VirtualGSMGap: initialBsicDuration=(%d,%d,%d)
Line 7065: [IRAT T2G] The no of Gaps = %d slots, gapInfoType = %d
Line 7301: [IRAT T2G] Too short gap = (%d < %d) !!!
Line 7306: [IRAT T2G]: orginal start=(%d,%d,%d), GSM BSIC Start=(%d,%d,%d)
Line 7308: [IRAT T2G] : initialBsicDuration=(%d,%d,%d)
Line 7323: [IRAT T2G] GAP NOT SUFFICIENT
Line 7342: [IRAT T2G] GSM is not turned ON
Line 7345: [IRAT T2G] theSearcherController->state = 0x%x
Line 7415: [IRAT T2G] [IDLE+RX] NEW StartTS-%d  NEW EndTS-%d 
Line 7433: [IRAT T2G] [FIXED] NEW StartTS-%d  NEW EndTS-%d 
Line 7577: [IRAT T2G]  orginal start=(%d,%d,%d), GSM BSIC Reconf Start=(%d,%d,%d)
Line 7579: [IRAT T2G]  bsicReconfDuration=(%d,%d,%d)
Line 7642: [IRAT T2G] The no of Gaps = %d slots, gapInfoType = %d
Line 7858: [IRAT T2G]  orginal start=(%d,%d,%d), GSM BSIC Reconf Start=(%d,%d,%d)
Line 7860: [IRAT T2G]  bsicReconfDuration=(%d,%d,%d)
Line 7884: [IRAT T2G] Too short gap = (%d < %d) !!!
Line 7912: [IRAT T2G] T2G measurement scheduling is skipped (gsmMeasDeferCount = %d)
Line 7932: [IRAT T2G] BoundayRsn %d CurrentRsn %d finalStartTS = %d finalEndTs = %d
Line 7937: [IRAT T2G] subframeBoundayRsn %d TS Msk %x iratGapTknIdx %d
Line 7964: [IRAT T2G] GAP NOT SCHEDULED : skipGsmMsmtReq = %d, isGsmSchedulValid = %d
Line 7994: [IRAT T2G]: Current state is not CELL_DCH (%d) 
Line 8016: [IRAT T2G]  : StartTS-%d  EndTS-%d 
Line 8103: [IRAT T2G] : fddMidServerCount=%d, gsmMidServerCount=%d
Line 8224: [IRAT T2G] VGM processGsmRssiInDrxGap: sfn = %d, max index = %d
Line 8427: [IRAT T2G] : Unknown drxCycleLength=%d
Line 8435: [IRAT T2G] : sfn=%d
Line 8677: GetIdentifyAbort called in dodgy MGM state :- %d
Line 8714: GetReconfirmAbortInterval called in dodgy MGM state :- %d
Line 8958: GetReconfirmAbort called in dodgy VGM state :- %d
Line 8995: GetReconfirmAbortInterval called in dodgy VGM state :- %d
Line 9057: [IRAT T2L] EUTRA gaps before filling: CFN[%d], gap - %d
Line 9062: [IRAT T2L] EUTRA gap is filled at CFN - %d, Interval is - %d
Line 9072: [IRAT T2L] EUTRA gap is filled at CFN - %d
Line 9084: [IRAT T2L] EUTRA gaps after filling: CFN[%d], gap - %d
Line 9109: [IRAT T2L] virtualEutraGapToken is already assigned
Line 9244: [IRAT T2L] RF is in paused state. Cant proceed !!!
Line 9304: CFN=%d VGM VirtualEutraGap (target CFN=%d) : EutraCellSearch or EutraMeasure selectSearchOrMeasure = %d scheduleControlCounter = %d
Line 9350: StartTS-%d  EndTS-%d 
Line 9400: GapInChips %d
Line 9414: : orginal start=(%d,%d,%d), eutraCellSearchStart=(%d,%d,%d)
Line 9417:  eutraCellSearchDuration=(%d,%d,%d)
Line 9423: [IRAT T2L] VirtualEutraGap: EutraCellSearch is skipped becasue EutraMeasureInd is pending
Line 9481: Gap (%d slots): StartTS-%d  EndTS-%d 
Line 9530: GapInChips %d
Line 9547: [IRAT T2L]: EutraMeasure is delayed becasue EutraCellSearchInd is pending
Line 9566: [IRAT T2L]: CFN=%d isEutraCellSearchRequested=%d isEutraMeasureRequested=%d
Line 9576: CFN=%d VGM VirtualEutraGap (target CFN=%d) :Invalid Type = %d ==> First Gap is not used.
Line 9581: CFN=%d VGM VirtualEutraGap (target CFN=%d) : During gap Type = %d
Line 9586: CFN=%d VGM VirtualEutraGap (target CFN=%d) : Invalid Type = %d
Line 9596: [IRAT T2L]BoundayRsn %d CurrentRsn %d iratGapTknIdx %d
Line 9601: [IRAT T2L] subframeBoundayRsn %d TS Msk %x iratGapTknIdx %d
Line 9622: [IRAT T2L] IratGapConfigToken[%d] is not NULL !!!
Line 9651: [IRAT T2G] NOT ENOUGH GAP
Line 9697: [IRAT T2L]: noOfEutraCellSearch=%d
Line 9700: [IRAT T2L] calling EutraGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 9731: [IRAT T2L] : No EARFCN for cell search
Line 9737: [IRAT T2L] : eutraMeasurementController=%d, state=%d 
Line 9803: [IRAT T2L] MGM EutraCellSearchGapSTF: noOfEutraCellSearch = %d
Line 9805: VGM VirtualEutraGap: orginal start=(%d,%d,%d), eutraCellSearchStart=(%d,%d,%d)
Line 9872: [IRAT T2L] MGM EutraMeasureGapSTF: noOfEutraMeasure = %d
Line 9874: start=(%d,%d,%d), Duration=(%d,%d,%d)
Line 9903: [IRAT T2L]  noOfEutraMeasure=%d
Line 9906: [IRAT T2L]  calling EutraGap at sfn = %d. Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 9939: [IRAT T2L]  No cell for measure
Line 9987: [IRAT T2L]  fddMidServerCount=%d, gsmMidServerCount=%d, eutraMidServerCount=%d
Line 10006: [IRAT T2L] : Gap starts at (sfn, slot, chip)=(%d, %d, %d) duration (sfn, slot, chip)=(%d, %d, %d)
Line 10011: [IRAT T2L] : numOfEutraSearchMeasuresInDrx=%d
Line 10024: [IRAT T2L] : No EARFCN for cell search
Line 10035: [IRAT T2L] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 10041: [IRAT T2L] : Unexpected state=%d. Should not be ListenArfcn(1)
Line 10052: [IRAT T2L] : Next Gap starts at (sfn, slot)=(%d, %d)
Line 10074: [IRAT T2L] : sfn=%d
Line 10193: [IRAT T2G] : bT2GMeasurementBlock = %d
Line 10204: [IRAT T2G] : isBsicVerified = %d
