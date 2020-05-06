Line 211: NO TRANSMISSION: EDCH_TTI_2ms && Overlap With CM
Line 239: umac_e_EtfcSelectionCheckLch() failed for LogCh
Line 298: gStoredRbListEdchForCyclicScheduling. RbId:[%d, %d, %d, %d, %d, %d, %d]
Line 316: umac_e_EtfcSelectionCheckLch() failed for LogCh
Line 339: Inactive HARQ ID(%d): scheduled data cannot be sent
Line 390: SG is not Zero but SG is lower than minimum data size
Line 401: NO TRANSMISSION: Available data is Zero in this TTI, MAC-d Flow ID: %d, Non SG PDU Size: %d, DA: %d, MAX Supported Payload: %d, RLC PDU Size: %d
Line 403: NO TRANSMISSION: Available data is Zero in this TTI
Line 439: WARNING: RnId %d + (LogCh %d ?UMAC_MAX_RB:0) is out of bounds
Line 447: WARNING: EdchLcInfo is NULL for RnId %d and LogCh %d
Line 453: WARNING: MacdFlowId is out of bounds for RnId %d and LogCh %d
Line 529: NoRbsToConf out of bound 
Line 540: Wrong TSN setting after ETFC restriction
Line 545: NoRbsToConf out of bound 
Line 592: RB with highest priority is changed. Previous Lc:%d, New Lc:%d, New Lc BO:%d, HighestDA:%d, Highest RB:%d, HighestLcId:%d, MaxNoOfRetrans:%d
Line 658: InSgIndex value is out of bound
Line 685: Remaining power lower than SG, Throughput is limited by Remaining power. SG Index: %d, SG Power: %u, Remaining Power: %u
Line 728: Remaining power is low, Minimum ETFCI value set to ETFCI
Line 748: <E-TFC Restriction> SG Index:%d, MAX SG ETFCI:%d, SGP Size:%d, Max Supported Payload:%d, Max ETFCI:%d, Remaining Power:%u
Line 770: Insert to CM mode
Line 775: <Compressed Mode: Real Value> SGP Size: %d, MAX SGP Index: %d, MaxEtfcIndexThisTTI: %d, CM variable: %d
Line 800: <Compressed Mode:Scale Down Value> SGP Size: %d, MAX SGP Index: %d, MaxEtfcIndexThisTTI: %d
Line 947: SGP size excess max payload size after ETFC restriction
Line 1012: SGP size excess max payload size after ETFC restriction reverse loop
Line 1228: SI and DDI Transmission to fill the padding
Line 1235: SI Transmission to fill the padding
Line 1333: RG value is limited by ETFC Index
Line 1335: <RG Limitation> Original SG Index:%d, New SG Index:%d
Line 1404: WARNING: InNumHarqProcess : %d, EdchReq->EdchTti : %d
Line 1510: WARNING: RbInfoStatus is NULL
Line 1541: <UMAC-E STATUS IND> RbId:%d, NoOfPdus:%d, PduSize:%d
Line 1555: <Pseudo UMAC-E STATUS IND> RbId:%d, NoOfPdus:%d, PduSize:%d
Line 1572: Error in UMAC_STATUS_IND
Line 1585: <CPC> NewTrans. ShortPreamble. AirCFN: %d, AirSubFr: %d
Line 1645: NO TRANSMISSION for HARQ ID %d : RDI or TDM TTI not valid
Line 1660: NO TRANSMISSION,ETFC Table is Null EdchStatusInfo->HarqPowerOffset: 0x%x
Line 1685: <Non Multiplexing> 
Line 1693: WARNING: EdchLcInfo is NULL
Line 1705: WARNING: EdchLcInfo is NULL
Line 1712: WARNING: MacdFlowId is out of bounds
Line 1721: HARQ ID mismatch, Non-Scheduled Grants are not configured
Line 1730: <NON_SCHEDULED_GRANT> NoOfPDUs=%d, PduSize=%d
Line 1749: MacEPduSize=%d,TotalTransmitData=%d
Line 1759: Wrong TSN setting after ETFC restriction
Line 1769: RbId=%d,LogChNo=%d,NoOfPDUs=%d, PduSize=%d
Line 1802: <SCHEDULED_GRANT> NoOfPDUs=%d, PduSize=%d
Line 1824: MacEPduSize=%d,TotalTransmitData=%d
Line 1834: Wrong TSN setting after ETFC restriction
Line 1843: RbId=%d,LogChNo=%d,NoOfPDUs=%d, PduSize=%d
Line 1873: RB with highest priority is changed. Previous Lc:%d, New Lc:%d, New Lc BO:%d, HighestDA:%d, Highest RB:%d, HighestLcId:%d, MaxNoOfRetrans:%d
Line 1885: AG is not Zero but SG is lower than minimum data size
Line 1893: NO TRANSMISSION: Available data is Zero in this TTI, MAC-d Flow ID: %d,  DA: %d, MAX Supported Payload: %d, RLC PDU Size: %d
Line 1912: <Multiplexing> 
Line 1932: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 1939: RLC Data Available=%d
Line 1943: WARNING: MacdFlowId is out of bounds
Line 1965: <NON_SCHEDULED_GRANT> EdchList=%d, NoOfPDUs=%d, PduSize=%d
Line 1984: MacEPduSize=%d,TotalTransmitData=%d
Line 1988: NoRbsToConf out of bound 
Line 1999: Wrong TSN setting after ETFC restriction
Line 2009: RbId=%d,LogChNo=%d,NoOfPDUs=%d, PduSize=%d
Line 2044: Special Case For StarPoint!
Line 2065: <SCHEDULED_GRANT> EdchList=%d, NoOfPDUs=%d, PduSize=%d
Line 2087: MacEPduSize=%d,TotalTransmitData=%d
Line 2092: NoRbsToConf out of bound 
Line 2103: Wrong TSN setting after ETFC restriction
Line 2113: RbId=%d,LogChNo=%d,NoOfPDUs=%d, PduSize=%d
Line 2148: RB with highest priority is changed. Previous Lc:%d, New Lc:%d, New Lc BO:%d, HighestDA:%d, Highest RB:%d, HighestLcId:%d, MaxNoOfRetrans:%d
Line 2162: AG is not Zero but AG is lower than minimum data size
Line 2170: NO TRANSMISSION: Available data is Zero in this TTI, MAC-d Flow ID: %d, DA: %d, MAX Supported Payload: %d, RLC PDU Size: %d
Line 2204: AG is not Zero but SG is lower than minimum data size
Line 2211: NO TRANSMISSION: Available data is Zero in this TTI
Line 2225: MaxNoOfRetrans[%d] %d
Line 2231: MaxNoOfRetrans[%d] %d
Line 2330: UPH=%d, SNPLvalue=%d, Re_qpsk=%d,Re_16qam=%d, Pebase_Pathloss=%d,IsotherPhychanPresent=%d 
Line 2344: AG Index value is out of bound
Line 2352: <Scheduled Grant> NofTimeslots %d  SF %d  alpha %d  InAgValue %d  Granted_Pow %d MacdFlowPowerOffset %d
Line 2365: <NonScheduled Grant> Granted_Pow %d  MacdFlowPowerOffset %d
Line 2381:  No Valid timeslot
Line 2395: No Valid timeslot
Line 2414: QPSK PowerInfo or 16QAM gPowerInfo is zero
Line 2537: Ref_lamda_0=0, j=%d
Line 2586: C1_min %d C1_max %d C2_min=%d C2_max=%d 
Line 2594:  i %d GF_QPSK=%d GF_16QAM %d 
Line 2604: After GF C1_min %d C1_max %d  C2_min=%d C2_max=%d 
Line 2632: D1_min_max_QPSK[0] %d  D1_min_max_QPSK[1] %d 
Line 2662: D2_min_max_16QAM[0]=%d, D2_min_max_16QAM[1]=%d 
Line 2695: <E-TFC Restriction> Max Supported Payload:%d, Max ETFCI:%d
Line 2775: SI + DDI0 (I), Transmission to fill the padding(%d)
Line 2789: SI + DDI0 (II), Transmission to fill the padding(%d)
Line 2794: SI Transmission to fill the padding(%d) (III)
Line 2813: SI + DDI0 (IV), Transmission to fill the padding(%d)
Line 2821: SI Transmission to fill the padding(%d) (V)
Line 2870:  D2_min_max_16QAM[1] %d 
Line 2886: ETFCI Selected=%d, isQPSKmod=%d, SiTransmission=%d
Line 2903: Loopback %d
Line 2918: NO TRANSMISSION, HarqPowerOffset: 0x%x
Line 2926: NO TRANSMISSION, No Suitable previous TS: 0%d
Line 2963: SubCfn %d RRC SFN %d 
Line 2969: SubCfn %d temp len %d  
Line 2981: TDM TTI not valid  %d  
