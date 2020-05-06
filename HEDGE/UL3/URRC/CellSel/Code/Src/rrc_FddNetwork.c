Line 276: ERROR creating RetestUsedFreq Timer
Line 341: No Memory allocated for rrc_FddNetwork_init 
Line 387: ERROR deleting RetestUsedFreqTimer timer
Line 403: couldn't de-register Notification functions in CellReselecter for FddNetwork
Line 600: [FddNetwork] SetScanRequest: uarfcn %d, uarfcnSrchReqd %d 
Line 644: Populating FddNetwork instance from Sib11/12 neighbour info
Line 757: Blind Cell Search failed - ignoring results
Line 780: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 798: Added Frequency: %i, Rssi: %i dBm to FddNetwork top of the Freqlist with NumFreqs = %i
Line 844: SetScanRequiredBasedOn2GBplmnSearchInfo %d, 
Line 919: >> FddNetwork Sir_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
Line 923: >>>>>> BandPrioSir %i, BandPrio %i
Line 925: >>>>>> PagingConflictPrio %i
Line 941: >> FddNetwork EcNo_CellList[%i] (Uarfcn %i, Psc %i) EcNo %i, Rscp %i, CappedFreqSir %i, BandSelMetric %i
Line 945: >>>>>> BandPrioSir %i, BandPrio %i
Line 947: >>>>>> PagingConflictPrio %i
Line 961: Blind Freq Sacn failed - ignoring results
Line 976: Blind Freq Scan - MCC Detection : numOfFreq %d
Line 1015: Blind Freq Sacn failed - ignoring results
Line 1030: Blind Freq Scan - Full ACQ : numOfFreq %d EcNoThreshold %d
Line 1046: >> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Line 1069: Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
Line 1097: BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Line 1104: Blind Freq Scan error - no freq in FddNetwork's FreqList
Line 1110: >> NOTE: No Candidate Found on this Network
Line 1118: > Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Line 1127: Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
Line 1156: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1185: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i DualCarriePresent(%d)
Line 1190: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i
Line 1195: Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
Line 1225: Blind Used Freq Sacn for UsedFreq failed - ignoring results
Line 1240: Blind Freq Sacn for UsedFreq - Full ACQ : numOfFreq %d EcNoThreshold %d
Line 1256: >> Blind Freq Scan - Full ACQ : UARFCN %d, numOfCells %d
Line 1279: Blind Freq Scan - Full ACQ : ARFCN %d PSC %d EcN0 %d (%d dB) Rscp %d (%d dBm)
Line 1309: BlindFreqScan (SirBased) - UARFCN %d: BestEcNo %d (%d dB), BestRscp %d (%d dBm)
Line 1317: Blind Freq Scan error - no freq in FddNetwork's FreqList
Line 1323: >> NOTE: No Candidate Found on this Network
Line 1329: > Candidate Found on this Network (Sir_NumCells = %d, EcNo_NumCells = %d)
Line 1353: Retest - Blind Freq Scan - Full ACQ = FALSE: numOfFreq %d
Line 1367: [MRU Freq %d] RSSI Adjustment:: %d -> %d
Line 1395: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i DualCarriePresent(%d)
Line 1400: updated Frequency: %i, Rssi: %i dBm to FddNetwork  at index: %i
Line 1405: Blind Freq Scan Ind error - no freq in FddNetwork's FreqList
Line 1428: FddNetwork: ResetFddCellList(SirCellListPtr,EcNoCellListPtr)
Line 1573: Sort_CellListSir: Rscp cmp_b(%d) > cmp_a(%d)
Line 1581: Sort_CellListSir: Rscp cmp_b(%d) < cmp_a(%d)
Line 1588: Sort_CellListSir: Rscp cmp_b(%d) == cmp_a(%d)
Line 1696: CapFreqSir: Uarfcn %d, FreqSir %d, SirCap %d
Line 1700: >> Capping FreqSir(%d) to %d
Line 1717: isDcPreferredCellSelection is disabled for CS Only Stack
Line 1766: >>> Sort BandPrio
Line 1774: No Cell Satisfied SIR Criteria, So, moving all DcPreferred Cells into ECNO Cell list
Line 1779: All DcPreferred Cells can not be placed into ECNO Cell list
Line 1814: BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
Line 1865: AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
Line 1889: - Rejecting (Uarfcn %d, Psc %d) as SIR cause of BlackListedCell
Line 1891: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 1895: - Cell Rejected (Uarfcn %d, Psc %d) cause of BlackListed Cell
Line 1900: - Add this Cell to EcN0CellListPtr
Line 1926: - Accepting (Uarfcn %d, Psc %d): DcStatus[%d] as SIR cell selection conditions met or DC was configured
Line 1928: :: Sir %d (SirTh %d), Rscp %d (BestRscpTh %d), EcNo %d (EcNoDbTh %d)
Line 1936: At least One Cell has satisfied SIR Criteria
Line 1976: - PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
Line 1997: - Band %d: BandPrioritySir %d vs Sir %d
Line 2019: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2021: :: Sir %d (>%d), EcNo %d (>%d)
Line 2026: At least One Cell has satisfied SIR Criteria
Line 2058: - Band %d: DcStatus %d, give the same BandPrio as Band2
Line 2073: - Band %d: BandPrioritySir %d vs Sir %d
Line 2090: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
Line 2092: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2094: - Add this Cell to EcN0CellListPtr
Line 2123: >>> No Sir Candidate Found on Uarfcn %d
Line 2130: >>> Sort BandPrioSir
Line 2153: At least One Cell has satisfied SIR Criteria
Line 2157: >>> Sort BandPrio
Line 2167: WARNING FddNetwork_p->Sir_NumCells(%d) > 32
Line 2172: >>> No EcN0 Candidate Found on Uarfcn %d
Line 2183: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2263: isDcPreferredCellSelection is disabled for CS Only Stack
Line 2274: BuildFddCellListFromBlindFreqScanInd for UARFCN %i, numOfCells %i (IsSirBased %d)
Line 2332: AddGoodRscpToSirCellList & Sort_CellListSir :: Check Triggering Conditions for Sir-based Cell Selection
Line 2355: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection cause of BlackListed Cell
Line 2357: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2361: - Cell Rejected (Uarfcn %d, Psc %d) cause of BlackListed Cell
Line 2366: - Add this Cell to EcN0CellListPtr
Line 2392: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2394: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2430: - PSC %d: Band %d, DcStatus %d, give the same BandPrio as Band2
Line 2452: - Band %d: BandPrioritySir %d vs Sir %d
Line 2473: - Accepting (Uarfcn %d, Psc %d) as SIR cell selection conditions met
Line 2475: :: Sir %d (>%d), EcNo %d (>%d)
Line 2511: - Band %d: DcStatus %d, give the same BandPrio as Band2
Line 2532: - Band %d: BandPrioritySir %d vs Sir %d
Line 2549: - Rejecting (Uarfcn %d, Psc %d) as SIR cell selection conditions not met
Line 2551: :: Sir %d (>%d), Rscp %d (>%d), EcNo %d (>%d)
Line 2553: - Add this Cell to EcN0CellListPtr
Line 2582: >>> No Sir Candidate Found on Uarfcn %d
Line 2589: >>> Sort BandPrioSir
Line 2610: >>> Sort BandPrio
Line 2620: WARNING FddNetwork_p->Sir_NumCells(%d) > 32
Line 2625: >>> No EcN0 Candidate Found on Uarfcn %d
Line 2636: WARNING FddNetwork_p->EcNo_NumCells(%d) > 32
Line 2647: Overwriting existing cell entry
Line 2663: Overwriting existing cell entry
Line 2715: + Adding (Uarfcn %i, Psc %i) to SirCellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
Line 2717: :: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
Line 2725: - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Line 2770: + Adding (Uarfcn %i, Psc %i) to Temporal CellList: Rscp %i dBm, EcNo %i dB, FreqSir %i dB, BandSelMetric %i dB
Line 2772: :: BandPrioSir %i dB, BandPrio %i, isSameRNCIDCell %i, PConflictPrio %i
Line 2780: AddGoodRscpToEcNoCellList - Rejected (Uarfcn %i, Psc %i) as a cell selection candidate due to low Cpich Rscp: %i dBm, isSameRNCIDCell %i
Line 2839: Wrong uarfcn. Or UE Currently Does not support this BAND
Line 2887: pal_ERegId_FixedCpich: %d
Line 2891: Added Overrided Frequency: %i, Rssi: %i dBm to FddNetwork at index: %i
Line 2907: start BlindFreqScan
Line 2921: ERROR Illegal State
Line 2937: ERROR Illegal State
Line 2981: ERROR unable to register  for Cell Reselection Notification
Line 3014: ERROR unable to register  for Cell Reselection Notification
Line 3019: Backgnd Search : PlmnId Detection starting - %i Frequencies to examine
Line 3029: Backgnd Search : Blind Frequency Search initaited
Line 3070: start BlindFreqScan for Fetching MCC
Line 3076: ERROR Illegal State
Line 3134: ERROR Illegal State
Line 3160: BlindRssiScan: Negative Cnf
Line 3169: BlindRssiScan: Positive Cnf
Line 3191: ERROR Illegal State
Line 3258: ERROR Illegal State
Line 3320: For Serving Uarfcn = %d
Line 3335: ERROR Illegal State
Line 3344: ERROR Illegal State
Line 3358: ERROR Illegal State
Line 3388: ERROR Illegal State
Line 3413: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 3419: [BPLMN] No More cells found on Frequency: %i
Line 3427: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3448: ERROR Illegal State
Line 3457: ERROR Illegal State
Line 3463: No cells found on Frequency: %i
Line 3504: Cell detection on the Freq %i failed
Line 3514: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 3517: ERROR Illegal State
Line 3548: ERROR Illegal State
Line 3555: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 3571: ERROR Illegal State
Line 3600: ERROR Illegal State
Line 3642: ERROR Illegal State
Line 3677: ERROR Illegal State
Line 3688: ERROR Illegal State
Line 3704: ERROR Illegal State
Line 3731: [BPLMN] MIB Read requested on Cell %i
Line 3738: ERROR Illegal State
Line 3762: [BPLMN] No More cells found on Frequency: %i
Line 3772: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3779: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 3809: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3848: ERROR Illegal State
Line 3857: ERROR Illegal State
Line 3870: ERROR Illegal State
Line 3896: [BPLMN] MIB Read requested on Cell %i
Line 3903: [BPLMN] ERROR Illegal State
Line 3927: [BPLMN] No More cells found on Frequency: %i
Line 3937: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3944: [BPLMN] No Time to complete the BCCH read. Will be done in the next DRX
Line 3956: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 3978: [BPLMN] Cell Detection Already Paused!!!
Line 3990: Aborted processed
Line 4002: [DS_CELL_SEL] BPLMN: Cell Detection Already Paused !!!
Line 4016: [DS_CELL_SEL] Frequency: %d re-tried
Line 4020: ERROR Illegal State
Line 4044: ERROR Illegal State
Line 4074: ERROR Illegal State
Line 4105: start BlindFreqScan for UsedFreq
Line 4117: retest Next Used Freq
Line 4133: Used Freq Exhausted, Picking Next Freq
Line 4146: retest a barred cell freq (%d)
Line 4166: next RetestBarredCellFreq (%d)
Line 4183: next RetestBarredCellFreq (%d)
Line 4296: Cannot find same RNC Cell anymore from SirCellList, Just select next best cell
Line 4307: Try to select next Same RNC cell from EcNoCellList : isSameRNCCellFound(%i)
Line 4312: Cannot find same RNC Cell anymore from EcNoCellList, Just select best cell
Line 4324: Normal CellSelection : FddNetwork try to get next candidate cell
Line 4359: Fatal Error : Unknown CurrentSelectionType(%d)!!!!! 
Line 4375: FirstBestCellTry From EcNo_CellListPtr after exausting SirCellListPtr
Line 4463: [BlindFreqScan FastRecovery] Fast Recovery from BlindFreqScan Established  
Line 4522: Waiting For BlindFreqScanInd
Line 4526: ERROR Illegal State
Line 4536: ERROR Illegal State
Line 4541: Any Freq Instance and BlindFreqScan Instance exist
Line 4598: FirstBestCellTry From SirCellListPtr During EnterIdleFromConnected
Line 4626: FirstBestCellTry From EcNoCellListPtr During EnterIdleFromConnected
Line 4665: FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
Line 4679: FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
Line 4696: FirstBestCellTry From SirCellListPtr During Normal CellSelection
Line 4706: FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Line 4755: Blind Freq Scan - Full ACQ = FALSE
Line 4763: Retest Ongoing
Line 4798: [CheckingCellSuitability_CuphyBlindFreqScanCnf - Negative confirmation
Line 4819: CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
Line 4867: [DetectionFreqSearch] CuphyBlindFreqScanCnf - Negative confirmation
Line 4876: [DetectionFreqSearch] CuphyBlindFreqScanCnf - Positive confirmation
Line 4908: PlmnId Detection starting - %i Frequencies detected
Line 4916: PlmnId Detection failed - no Stored frequencies detected!
Line 4959: [BPLMN] Frequencies scanned : %i Total Scanned till now : %i
Line 4999: [BPLMN] Wrong Band Id %d
Line 5010: [BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5016: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 5020: [BPLMN] starting the stored cell search after Blind Scan
Line 5028: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 5043: PlmnId Detection starting - %i Frequencies to examine
Line 5051: PlmnId Detection failed - no frequencies detected!
Line 5057: PlmnId Detection not possible as Cell Reselection is in progress
Line 5100: [BPLMN] remaining Expiry Time: %dms
Line 5120: BPLMN ERROR : Wrong Request
Line 5126: [BPLMN] Error Querying the Timer for remaining time - Pal failure
Line 5131: [BPLMN] Error mapping the timer Handle at PAL and Timer ID at RRC 
Line 5157: ERROR Illegal State
Line 5176: ERROR Illegal State
Line 5183: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 5197: ERROR Illegal State
Line 5244: [BPLMN] FddNetwork_p == NULL 
Line 5252: [BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
Line 5263: restart Fresh BlindFreqScan for Fetching MCC
Line 5269: ERROR Illegal State
Line 5282: PlmnId Detection failed - no Stored frequencies detected!
Line 5331: BPLMN ERROR : Wrong Band Id %d
Line 5340: [BPLMN]Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5342: Background : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 5347: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 5352: [BPLMN] starting the stored cell search after Blind Scan
Line 5360: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 5371: PlmnId Detection starting - %i Frequencies to examine
Line 5379: PlmnId Detection failed - no frequencies detected!
Line 5385: PlmnId Detection not possible as Cell Reselection is in progress
Line 5407: [BPLMN] FddNetwork_p == NULL 
Line 5415: [BPLMN] Blind Scan earlier had failed. Remove the TIDs and Continue with Scan
Line 5454: BPLMN ERROR : Wrong Band Id %d
Line 5463: [BPLMN] Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5465: Background : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 5469: [BPLMN] PlmnId Detection starting - Frequencies to search for Cells/Total freq detected = %i / %i
Line 5473: [BPLMN] starting the stored cell search after Blind Scan
Line 5481: [BPLMN] Not enough time now, hence shifting the stored cell search for the next cycle
Line 5508: [BPLMN] Frequency Search Already Paused!!!
Line 5536: [DS_CELL_SEL] Ignore BlindCellSearchInd. CellDetection PAUSED by DSRC
Line 5552: [BPLMN] Frequencies scanned : %i Total Scanned till now : %i
Line 5570: BlindRssiScan: Negative Cnf
Line 5579: BlindRssiScan: Positive Cnf
Line 5622: [BPLMN] FddNetwork_p == NULL 
Line 5629: BPLMN : Blind Search earlier had failed. Remove the TIDs and Continue with Scan
Line 5663: [DS_CELL_SEL] ERROR : Wrong Band Id %d
Line 5668: [DS_CELL_SEL] : Frequencies scanned %d are less than the total for FddNetwork_p band %d
Line 5670: [DS_CELL_SEL] : Frequencies scanned are less than the total for FddNetwork_p band %i
Line 5680: PlmnId Detection starting - %i Frequencies to examine
Line 5688: PlmnId Detection failed - no frequencies detected!
Line 5694: PlmnId Detection not possible as Cell Reselection is in progress
Line 5729: ERROR Illegal State
Line 5746: BlindRssiScan: Negative Cnf
Line 5755: BlindRssiScan: Positive Cnf
Line 5781: ERROR Illegal State
Line 5798: BlindFreqScan: Negative Cnf
Line 5809: BlindFreqSearch: Positive Cnf
Line 5841: Retry freq after resume
Line 5851: Removing frequency: %i from detected list
Line 5858: FreqId is NULL
Line 5954: Ptr: CurrentCell == NULL
Line 5966: Reading MCC Success
Line 5986: ERROR Illegal State
Line 5992: [FddNetwork] DetectedFreqIx %d, NumFreqs %d
Line 6019: ERROR Illegal State
Line 6026:  FddNetwork_p->DetectedFreqIx %d
Line 6027:  FddNetwork_p->NumFreqs %d
Line 6038: ERROR Illegal State
Line 6043: All frequencies in Band scanned.. exhausted
Line 6048: ERROR Illegal State
Line 6081: ERROR Illegal State
Line 6107: PLMN [0x%x][0x%x][0x%x] is not updated to BPLMN Handler
Line 6126: Network_Scan PSC : %i  Uarfcn: %i  Rscp: %i dBm, EcN0: %i dB
Line 6127: Network_Scan MCC : %d  MNC : %x 
Line 6165: ERROR Illegal State
Line 6177: ERROR Illegal State
Line 6187: [BPLMN] BPLMN search under progress
Line 6233: [BPLMN] HPLMN id found
Line 6240: ERROR Illegal State
Line 6246: [BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
Line 6259: ERROR Illegal State
Line 6264: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6267: ERROR Illegal State
Line 6275: [BPLMN] No cells found on Frequency: %i
Line 6282: [BPLMN] Cell Pointer should not be NULL here
Line 6287: [BPLMN] NO BPLMN search under progress
Line 6301: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6304: ERROR Illegal State
Line 6344: [BPLMN] MIB reading Error on Cell : %i
Line 6352: [BPLMN] checking Next Cell  %i on same Frequency
Line 6361: ERROR Illegal State
Line 6367: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6370: ERROR Illegal State
Line 6378: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 6392: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6395: ERROR Illegal State
Line 6426: ERROR Illegal State
Line 6451: ERROR Illegal State
Line 6495: ERROR Illegal State
Line 6519: ERROR Illegal State
Line 6528: [BPLMN] BPLMN search under progress
Line 6615: [BPLMN] WhiteListed Csg id (%d) found
Line 6622: Backgnd Csg Search: checking Next Cell on same Frequency
Line 6634: ERROR Illegal State
Line 6639: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6642: ERROR Illegal State
Line 6650: No cells found on Frequency: %i
Line 6657: [BPLMN] Cell Pointer should not be NULL here
Line 6662: [BPLMN] NO BPLMN search under progress
Line 6676: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6679: ERROR Illegal State
Line 6713: [BPLMN] SIB reading Error on Cell : %i
Line 6721: [BPLMN] checking Next Cell  %i on same Frequency
Line 6729: ERROR Illegal State
Line 6735: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6738: ERROR Illegal State
Line 6747: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 6754: [BPLMN] SIB reading Error on Cell : %i
Line 6762: [BPLMN] checking Next Cell  %i on same Frequency
Line 6770: ERROR Illegal State
Line 6776: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 6779: ERROR Illegal State
Line 6787: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 6801: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 6804: ERROR Illegal State
Line 6834: ERROR Illegal State
Line 6859: ERROR Illegal State
Line 6886: Message Generation Error
Line 6893: ERROR Illegal State
Line 6917: ERROR Illegal State
Line 6933: PausedReadingPLMNIdonCell_Aborted called
Line 6949: [BPLMN] CSG SIB Read Already Paused!!!
Line 6974: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 6999: Message Generation Error
Line 7004: ERROR Illegal State
Line 7014: ERROR Illegal State
Line 7019: [BPLMN] No More cells found on Frequency: %i
Line 7028: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7070: ERROR Illegal State
Line 7082: ERROR Illegal State
Line 7092: [BPLMN] BPLMN search under progress
Line 7114: [BPLMN] HPLMN updated
Line 7130: [BPLMN] HPLMN updated
Line 7138: [BPLMN] HPLMN id NOT found, checking Next Cell on same Frequency
Line 7151: ERROR Illegal State
Line 7157: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7160: ERROR Illegal State
Line 7168: [BPLMN] No cells found on Frequency: %i
Line 7174: [BPLMN] Cell Pointer should not be NULL here
Line 7179: [BPLMN] NO BPLMN search under progress
Line 7193: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 7196: ERROR Illegal State
Line 7237: [BPLMN] MIB reading Error on Cell : %i
Line 7245: [BPLMN] checking Next Cell  %i on same Frequency
Line 7254: ERROR Illegal State
Line 7260: [BPLMN] No time for BCCH read on Cell, scheduled for next DRX time
Line 7263: ERROR Illegal State
Line 7271: [BPLMN] MIB reading Error , No cells found on Frequency: %i
Line 7285: [BPLMN] No time for Cell serch, scheduled for next DRX time
Line 7288: ERROR Illegal State
Line 7338: ERROR Illegal State
Line 7398: ERROR Illegal State
Line 7403: Message Generation Error
Line 7427: ERROR Illegal State
Line 7443: PausedReadingPLMNIdonCell_Aborted called
Line 7467: ERROR Illegal State
Line 7472: Message Generation Error
Line 7490: [BPLMN] CSG SIB Read Already Paused!!!
Line 7533: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7562: Message Generation Error
Line 7567: ERROR Illegal State
Line 7588: ERROR Illegal State
Line 7593: [BPLMN] No More cells found on Frequency: %i
Line 7606: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7643: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7661: ERROR Illegal State
Line 7666: [BPLMN] No More cells found on Frequency: %i
Line 7675: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7721: Foregnd Search : PlmnId Detection starting - %i Frequencies to examine
Line 7728: Serious Error: InitiateForegroundNwScanOn No Freqeuncies
Line 7737: Backgnd Search : Blind Frequency Search initaited
Line 7766: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7791: Message Generation Error
Line 7796: ERROR Illegal State
Line 7807: ERROR Illegal State
Line 7812: [BPLMN] No More cells found on Frequency: %i
Line 7821: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 7837: [DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
Line 7862: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 7871: ERROR Illegal State
Line 7927: [URRC SR_IF DSDS]Sending Abort Req to Uphy
Line 7936: ERROR Illegal State
Line 7970: ERROR Illegal State
Line 7981: ERROR Illegal State
Line 7986: [DS_CELL_SEL] Serious Coding Error : BlindFreqScan (%d), NumFreqs (%d)
Line 8009: ERROR Illegal State
Line 8018: ERROR Illegal State
Line 8057: BCH is open, no action taken
Line 8070: CellSelection Aborted
Line 8133: CellSelection Aborted
Line 8141: ERROR Illegal State
Line 8147: ERROR Illegal State
Line 8154: ERROR Illegal State
Line 8162: ERROR Illegal State
Line 8205: [PausingCellSelection_CuphyBlindFreqScanCnf - Negative confirmation
Line 8212: ERROR Illegal State
Line 8219: ERROR Illegal State
Line 8230: Before pausing Discrete Count = [%d]
Line 8232: After pausing Discrete Count = [%d]
Line 8240: ERROR Illegal State
Line 8248: CheckingCellSuitability_CuphyBlindFreqScanCnf - Positive confirmation
Line 8285: ERROR Illegal State
Line 8297: ERROR Illegal State
Line 8331: FirstBestCellTry From SirCellListPtr
Line 8359: FirstBestCellTry From EcNoCellListPtr
Line 8396: FirstBestCellTry From SirCellListPtr During EnteringToFachPchFromDch
Line 8412: FirstBestCellTry From EcNoCellListPtr During EnteringToFachPchFromDch
Line 8431: FirstBestCellTry From SirCellListPtr During Normal CellSelection
Line 8441: FirstBestCellTry From EcNoCellListPtr During Normal CellSelection
Line 8458: Blind Freq Scan - Full ACQ = FALSE
Line 8463: Retest Ongoing
Line 8483: Before pausing Discrete Count = [%d]
Line 8485: After pausing Discrete Count = [%d]
Line 8490: ERROR Illegal State
Line 8517: BlindFreqSearch: Negative Cnf
Line 8528: ERROR Illegal State
Line 8540: ERROR Illegal State
Line 8548: ERROR Illegal State
Line 8558: BlindFreqSearch: Positive Cnf
Line 8597: ERROR Illegal State
Line 8609: ERROR Illegal State
Line 8617: ERROR Illegal State
Line 8670: [BPLMN] BCH read Will Pause Now. Same Cell will be tried for BCH read on RESUME
Line 8678: [BPLMN] BCH read Will Pause Now. Will be reread when RESUME
Line 8683: [BPLMN] Cell Search will be initiated in the next DRX Cycle on RESUME
Line 8710: Message Generation Error
Line 8719: ERROR Illegal State
Line 8727: ERROR Illegal State
Line 8788: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8812: ERROR Illegal State
Line 8817: [BPLMN] No More cells found on Frequency: %i
Line 8830: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8867: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8886: ERROR Illegal State
Line 8891: [BPLMN] No More cells found on Frequency: %i
Line 8900: [BPLMN] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 8932: ERROR Illegal State
Line 8955: PausedReadingPLMNIdonCell_Aborted called
Line 8973: [BPLMN] MIB Read Already Paused!!!
Line 9003: [DS_CELL_SEL] No Time to complete Cell search on next strong Freq. Will be done in the next DRX
Line 9017: ERROR Illegal State
Line 9022: [DS_CELL_SEL] No cells found on Frequency: %i
Line 9040: [DS_CELL_SEL] BPLMN: MIB Read Already Paused!!!
Line 9071: ERROR Illegal State
Line 9090: Retest Barred Cell on %d
Line 9105: RetestBarredCellFreq array is full
Line 9111: wrong Uarfcn (%d)
Line 9177: Shared PLMN is not selectable
Line 9181: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 9264: Shared PLMN is not selectable
Line 9268: Shared PLMN is Selectable, Hence Frequency can be camped on
Line 9421: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 9438: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 9462: [BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Line 9469: Found DC SIR Cell @Index %i (Sir_NumCells %i)
Line 9476: First Non-DC SIR Cell @Index %i (Sir_NumCells %i)
Line 9480: CurrentCellListIx %i (Sir_NumCells %i)
Line 9499: EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 9516: EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 9542: [BlackList] Found DC FREQ but UARFCN%d is in BlackListed Frequency
Line 9546: EcNo Cell @CurrentCellListIx %i , EcNoDb [%d] 
Line 9552: Found DC EcNo Cell @Index %i
Line 9559: First Non-DC EcNo Cell @Index %i
Line 9563: urrentCellListIx %i (EcNo_NumCells %i)
Line 9578: NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Line 9607: isDcPreferredCellSelection is disabled for CS Only Stack
Line 9635: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 9652: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 9672: CurrentCellListIx %i (Sir_NumCells %i)
Line 9678: CurrentCellListIx %i (Sir_NumCells %i)
Line 9694: EcNo_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 9711: EcNo_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell(UARFCN%i/PSC%i) HcsPriority (%d), skip this cell list
Line 9731: CurrentCellListIx %i (EcNo_NumCells %i)
Line 9737: CurrentCellListIx %i (EcNo_NumCells %i)
Line 9743: NO Selectable Cell Found in CellListPtr(Sir_NumCells %i, EcNo_NumCells %i)
Line 9783: FindBestSameLAICellWithSCellFromFddCellList : EcN0 Threshold %i
Line 9840: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 9869: Sir_CellList[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnecteModeCell HcsPriority (%d), skip this cell list
Line 9882: Same LAI & RAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Line 9891: Same LAI found at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
Line 9910: LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x) (SirCandidate RAC 0x%x, Current RAC 0x%x)
Line 9918: LAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(SirCandidate LAC 0x%x, Current LAC 0x%x)
Line 9927: SirCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
Line 9934: SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 9940: SirCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Line 9994: Error: Cannot find SIB1 from SCellSysInfoIdx(%i)
Line 10023: EcNoCellListPtr[%i](UARFCN%i/PSC%i) has low HcsPriority(%d) than LastConnectedModeCell HcsPriority (%d), skip this cell list
Line 10036: Same LAI & RAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Line 10044: Same LAI found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
Line 10063: LAI / RAI Not matched at SirCellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x) (EcioCandidate RAC 0x%x, Current RAC 0x%x)
Line 10071: LAI Not matched at CellListPtr[%i](ARFCN%i/PSC%i)(EcioCandidate LAC 0x%x, Current LAC 0x%x)
Line 10080: EcNoCellListPtr[%i] EcN0[%i](%i dBm) < SameLAI_EcN0_Threshold_Value(%d)
Line 10087: EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 10093: EcNoCellListPtr[%i](UARFCN%d PSC%d) is not found from SysInfoCache
Line 10114: rrc_FddNetwork_FindBestSameRNCCellWithSCellFromFddCellList : EcN0 Threshold %i
Line 10126: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 10139: RNCID matched at SirCellListPtr[%i](ARFCN%i/PSC%i)
Line 10147: SirCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
Line 10154: SirCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 10158: This is not a SameRNCCell
Line 10171: Sir_CellList[%i](UARFCN%i/PSC%i) already tested, skip this cell list
Line 10182: Same RNCID found at EcNoCellListPtr[%i](ARFCN%i/PSC%i)
Line 10193: EcNoCellListPtr[%i] EcN0[%i](%i dBm) < EcN0_Threshold_Value(%d)
Line 10200: EcNoCellListPtr[%i] EcN0[%i](%i dBm) Barred(%i)
Line 10204: This is not a SameRNCCell
Line 10258: RNC ID: 0x%X (UC-ID : 0x%X)
Line 10263: Same RNCID matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Line 10270: Same RNCID not matched (ARFCN%i/PSC%i RncId 0x%x) with TargetRncId 0x%x
Line 10275: Error: Cannot find SIB3 from SCellSysInfoIdx(%i)
Line 10280: SysInfoCache for (ARFCN%i/PSC%i) is not available
Line 10289: Same RNCID returned for (ARFCN%i/PSC%i) which was active set
Line 10487: ERROR [BlindFreqScan FastRecovery] the Uarfcn %d can not be found!
Line 10495: [BlindFreqScan FastRecovery] Found Uarfcn %d with %d Aset Cells  regardless BlindFreqScan result
Line 10514: [BlindFreqScan FastRecovery] Add Aset Cells PSC: %d 
Line 10527: [BlindFreqScan FastRecovery] Add Serving Cells PSC: %d 
Line 10623: Adding Freq %d at index [%d]
Line 10627: Freq %d already present at index [%d]
Line 10633: Cannot have more than 30 freq in StoredNwPtr
Line 10638: StoredNetworkPointer is NULL
Line 10733: FddNetwork_AddFreqToIfSupportedFreq : MaxBandCnt:%d, Added DlUarfcn: %d, DetermindedBand: %d, SupportedBand : %d
Line 10742: DlUarfcn(%d) is not supported! SupportedBand(%d)
Line 10782: rrc_FddNetwork_IsSupportedBand : MaxBandCnt:%d, GivenBand: %d, SupportedBand : %d
Line 10790: BandId(%d) is not supported!
Line 10871: Adding Frequency: %i to head of the list
Line 10921: Removing Frequency: %i from tail of the list
Line 10927: LastFreqId is NULL
Line 10966: Adding Used Frequency: %i to head of the list
Line 11007: Removing Used Frequency: %i from tail of the list
Line 11013: LastUsedFreqId is NULL
Line 11082: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 11089: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 11095: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 11107: >> Adding Cell(%i,%i) to Frequency
Line 11148: rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Line 11154: rrc_FddNetwork_AddCellTo failed. Invalid InterFreqCell frequency value (%i)
Line 11160: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 11198: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 11204: rrc_FddNetwork_Priv_AddCellTo failed. Invalid InterFreqCell frequency value (%i) 
Line 11210: Invalid Cpich: %i for Uarfcn: %i - no entry added to stored network instance
Line 11333: rrc_FddNetwork_SetvariableAsPerBand: Unsupported BandId(%i)
Line 11501: isFirstBestCellTry %i
Line 11510: CellTypeFound %i
Line 11530: >>> StoredCells in FddNetwork <<<
Line 11534: StoredCell[%d] %d
Line 11539: No Freq in FddNetwork
Line 11565: Started  creating a stored network instance from USIM data
Line 11597: Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Line 11641: Invalid Freq(%d)/Cpich(%d) Info transfered from USIM EF_NETPAR
Line 11646: Finished creating a stored network instance from USIM data
Line 11704: [StartBlindRSSIScan] rrc_Features.SuppTxFailParam %d, remove all barred cell with cause BaredRachFailure
Line 11722: [BPLMN]Start Scan for Band Id %d 
Line 11746: ERROR Illegal State
Line 11790: UsedFreqId is NULL
Line 11811: FreqId is NULL
Line 11842: numDisFreqtosearch is ZERO
Line 11859: UsedFreqId is NULL
Line 11877: FreqId is NULL
Line 11882: Current Discrete Count = [%d]
Line 12098: [BPLMN] Wrong Band Id %d
Line 12118: ERROR Illegal State
Line 12198: RetestUsedFreqTimer :UsedFreqScanInterval[%d]=%d MaxScanInterval[%d]
Line 12201: RetestUsedFreqTimer : CurNumberOfRepeat[%d] UsedFreqScanRepeatCnt[%d]
Line 12212: ERROR starting RetestUsedFreqTimer
Line 12216: RetestUsedFreqTimer started (TmId=%d)
Line 12219: Schedule Retest Used Freq for +%d
Line 12246: End Retest Used Freq Cell
Line 12272: Time to Retest Used Frequency
Line 12314: Add LastUsedFreq
Line 12341: No Used Frequency Available
Line 12518: CellSelectionDone: FddNetwork_p->Sir_NumCells (%d), FddNetwork_p->EcNo_NumCells (%d)
Line 12530: Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 12539: Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 12559: Update Best RSCP - ServingFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 12568: Update Best RSCP - InterFreq %d, Cpich %d, Rscp %d (%d dBm)
Line 12580: CellSelectionDone: ERROR FddNetwork_p->Sir_NumCells (%d) > MAXCELLS
Line 12585: CellSelectionDone: ERROR FddNetwork_p->EcNo_NumCells (%d) > MAXCELLS
Line 12592: CellSelectionDone: BlindFreqScanUsed
Line 12598: FinishCellSelection: BlindFreqScan Not Used
Line 12615: CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
Line 12621: CellSelectionDone: IsNotSelectable is not needed by Abort_Scan
Line 12869: [URRC_ANR]: PausedReadingAnrInfo_Aborted called
Line 12873: [URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
Line 12902: [URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadSuccess
Line 12950: ERROR Illegal State
Line 12978: [URRC_ANR]:ReadingAnrInfoOnCell_AnrInfoReadFailure
Line 13011: [URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrPause
Line 13020: [URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrPause
Line 13027: [URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrPause
Line 13046: [URRC_ANR]: rrc_FddNetwork ReadingAnrInfoOnCell_AnrAbort
Line 13055: [URRC_ANR]: Message Generation Error in ReadingAnrInfoOnCell_AnrAbort
Line 13060: [URRC_ANR]: ERROR Illegal State in ReadingAnrInfoOnCell_AnrAbort
Line 13098: [URRC_ANR]: PausedReadingAnrInfo_Aborted called
Line 13102: [URRC_ANR]: ERROR Illegal State in PausedReadingAnrInfo_Aborted
Line 13132: [URRC_ANR]: AbortingReadingAnrInfo_Aborted called
Line 13136: [URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
Line 13159: [URRC_ANR]: AbortingReadingAnrInfo_Aborted called
Line 13163: [URRC_ANR]: ERROR Illegal State in AbortingReadingAnrInfo_Aborted
Line 13241: [URRC_ANR]: GenAnrInfoRead SUCCESS received
Line 13245: [URRC_ANR]: GenAnrInfoRead FAIL received
Line 13252: [URRC_ANR]: GenAnrInfoRead ABORTED received
Line 13256: [URRC_ANR]: GenAnrInfoRead NOT EXPECTED msg received
Line 13297: [URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
Line 13305: [URRC_ANR]: rrc_FddNetwork NotActive_SubscribeSysInfoForAnr
Line 13331: [URRC_ANR]: ERROR Adding (%i,%i) to rrc_Frequency_AddCellTo
Line 13334: [URRC_ANR]: Adding (%i,%i) to Network in NotActive_SubscribeSysInfoForAnr
Line 13341: [URRC_ANR]: ERROR Illegal State in NotActive_SubscribeSysInfoForAnr
Line 13383: [URRC_ANR]:ERROR!! AnrHandlerPtr cannot be NULL
Line 13390: [URRC_ANR]: SibSubscriptionType set to %d Because rrc_FddNetwork UtraSiAcqForHoMode(%d) and si_requestForHO(%d)
Line 13393: [URRC_ANR]: PausedReadingAnrInfo_AnrResume called
Line 13397: [URRC_ANR]:ERROR!! ANR Resumed but DetectedCellPtr or AnrHandlerPtr cannot be NULL as this is the FddCellSelReselInfo Instance
Line 13408: [URRC_ANR]: ERROR!! PausedReadingAnrInfo_AnrResume	anr_Uarfcn:%d, fddCell_Uarfcn:%d, anr_Cpich:%d, fddCell_Cpich:%d 
Line 13412: [URRC_ANR]: ANR Resumed successfully PausedReadingAnrInfo_AnrResume
Line 13425: Message Generation Error
Line 13436: ERROR Illegal State
Line 13469: uarfcn %d, SearchRequired %d
Line 13556: Invalid Continent Info (%d)
Line 13560: MccContinentBasedExcusiveBand: Continent (%d), ExclusiveBandBitMask (0x%x)
Line 13616: rrc_FddNetwork_update_uarfcn_search_details:uarfcn updated is %d, 
Line 13622: rrc_FddNetwork_update_uarfcn_search_details:Skipped As Additional Freq: UARFCN is %d, 
