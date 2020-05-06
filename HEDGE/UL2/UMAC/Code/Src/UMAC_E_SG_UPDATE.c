Line 282: <CPC> CPC Deactivated by Order
Line 289: <CPC> CPC Activated by Order
Line 409: NO TRANSMISSION[%d]: UPHY not ready to transmit EDCH data uphy_GetIsUlEdchReadyForData %d uphy_GetIsUlDchReadyForDataInCPC %d IsCpcReady %d
Line 421: <UPHY not ready> gStoredHichInfo... [HarqId:%d] HICH Value %d -> %d, Non HICH Value %d -> %d
Line 434:  Before EDCH is configured, AG/RG/HICH ISR Occured
Line 545:  Token Delayed Count %d
Line 573:  Received Ack HarqId when PHY not ready %d 
Line 580: NO TRANSMISSION[%d]: TPHY not ready to transmit EDCH data
Line 585:  Before EDCH is configured, AG/RG/HICH ISR Occured
Line 657: Unknown Case of HighLayer singnalings in EDCH status
Line 699: <AG/RG/HI Info> AG Received: %d, Value: %d, HICH Value %d, RGCH Value %d, Non HICH Value %d, Non RGCH Value %d
Line 703: Now is the TTI changing, MAC stop transmission for a while
Line 790: ****Critical Error***** => RLC didn't transmit the data to MAC
Line 802: [Warning] UMAC give up EUL procedure due to TokenDelay (HarqID[%d]. TimeDifference: %d chip)
Line 870: <CPC> gStoredHichInfo... [HarqId:%d] HICH Value %d -> %d, Non HICH Value %d -> %d
Line 909: <TokenDelayed> gStoredHichInfo... [HarqId:%d] HICH Value %d -> %d, Non HICH Value %d -> %d
Line 1016: HSUPA Statistics. Duration:1000ms, OctetCnt:%d, AckBlkCnt:%d, NackBlkCnt:%d, HappyCnt:%d, UnhappyCnt:%d, ServingCell:%d
Line 1069: <CPC> ItUeDtxCycle2Timer Expire... Set SG to DefaultSgInDtxCycle2( %d ) for All Harq
Line 1089: <CPC> E-TFC Selection Condition OK... Ready for TRANSMISSION in %dms TTI
Line 1192: <SG INFO> HarqID[%d]. Non-Serving-RG Down Received, Updated SG: %d
Line 1200: Unknown Case in Non RG Timer Token Cancel
Line 1212: <SG INFO> HarqID[%d]. Non-Serv-RG Timer Active State, Updated SG: %d
Line 1279: Unknown Case in 3 Index Step Rg Value
Line 1286: <SG INFO> HarqID[%d]. RG index: [3] Step Up, Updated SG: %d
Line 1293: <SG INFO> HarqID[%d]. RG index: [2] Step Up, Updated SG: %d
Line 1300: <SG INFO> HarqID[%d]. RG index: [1] Step Up, Updated SG: %d
Line 1312: <SG INFO> HarqID[%d]. RG index: [1] Step Down, Updated SG: %d
Line 1315: Unknown RG value
Line 1325: RG received but Secondary Grant. No Effect to SG!
Line 1327: RG received but AG Timer is Not Expired. No Effect to SG!
Line 1332: RG received but SG is ZERO or HARQ Process is Inactive. No Effect to SG!
Line 1390: <SG INFO> HARQ Process ID [%d] is Inactivated by AG
Line 1402: Accoring to AG, SG Update Module Working with Secondary Grant instead of Primary Grant
Line 1410: All HARQ Processes are Inactivated by AG
Line 1413: Unknown Case in AG inactive status
Line 1418: Unknown Case in AG inactive status
Line 1436: <SG INFO> SG Value[%d] is updated by Secondary Grant
Line 1439: Unknown Case in AG active status
Line 1463: <SG INFO> SG Value[%d] is updated by Primary Grant, HARQ ID: %d, AG Scope: %d
Line 1470: <SG INFO> HARQ Process ID [%d] is Activated by AG
Line 1485: All HARQ Processes are Activated by AG
Line 1492: Unknown Case in AG Timer TokenCancel
Line 1567: <AG/HI Info> AG Received: %d, Value: %d, HICH Value %d
Line 1577: Unknown Case in Timer_TWAIT TokenCancel
Line 1587: Unknown Case in Timer_EEW TokenCancel
Line 1606: Unknown Ernti ID type in AG case
Line 1614: NonScheduled Grant
Line 1619: No Absolute Grants received (I): Harqid %d  IsEEW_true %d
Line 1636: ****Critical Error***** => RLC didn't transmit the data to MAC
Line 1645: No Absolute Grants received (II): Harqid %d IsEEW_true %d
Line 1660: MAC will not Transmit as HARQ Ids are busy!!!
Line 1817: Unknown Case in AG Timer TokenCancel
Line 1828: Unknown Case in Non RG Timer Token Cancel
Line 1885: Unknown Case in AG Timer TokenCancel
Line 1954: Handle free of MAC-ES PDU is an error
Line 2153: WARNING: pLC is NULL
Line 2184: ES Reset Indicator %d 
Line 2210: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 2220: WARNING: pLC or EdchLcInfo is NULL
Line 2281: MaxRetx %d, RtxtimerHARQProcess %d
Line 2294: TSIValue %d isEEW %d, EEW_TTIs %d 
Line 2302: min_coderate : %d, max_coderate : %d 
Line 2309: Ref_coderate_QPSK[%d] : %d, Ref_Beta_QPSK[%d] : %d 
Line 2317: Ref_coderate_16QAM[%d] : %d, Ref_Beta_16QAM[%d] : %d 
Line 2329: AG Index value is out of bound
Line 2338: <NonScheduled Grant> NofTimeslots %d  SF %d  alpha %d  TNSIValue %d RP %d RL %d
Line 2340: Power Resource %d ActivatTime %d
Line 2352: Unknown Case in Timer_EEW TokenCancel
Line 2361: Unknown Case in Timer_TWAIT TokenCancel
Line 2368: E-DCH category %d TWAIT %d
Line 2483: WARNING: pLC is NULL
Line 2559: Non Scheduled contents size is over 20000
Line 2609: WARNING: *EdchList %d + (LogCh %d?UMAC_MAX_RB:0) is out of bounds
Line 2617: WARNING: pLC or EdchLcInfo is NULL for *EdchList %d and LogCh %d
Line 2634: WARNING: EdchInfoUl.LogChId[%d] is invalid
Line 2869: The range of MaxChCode is over SPEC
Line 3065: <CPC> Previous RTT HARQ ID[%d] is NACK
Line 3149: <CPC> Overlap With CM...  NO TRANSMISSION: 2ms TTI
Line 3190: <CPC> HW Timing Info(%dms)... CFN:%d, SubFrame:%d, Slot:%d
Line 3199: <CPC> No trans (no LongPreamble)
Line 3295: <CPC> HW Timing Info(%dms)... CFN:%d, MacDtxCycle OK
Line 3304: <CPC> No trans (no LongPreamble)
Line 3335: <CPC> HW Timing Info(%dms)... CFN:%d
Line 3429: <CPC> Overlap Btw Time Align and CM Trans Gap...  TANSMISSION in non overlapping TTI
Line 3469: WARNING: *EdchList %d + (LogCh %d?UMAC_MAX_RB:0) is out of bounds
Line 3489: <CPC> UM BO. DA:%d, NoOfPdus:%d
Line 3494: <CPC> AM BO. RbId:%i, DA:%d, RlcPduSize:%d
Line 3501: <CPC> Trans SRB data in case of continuous data
Line 3516: <CPC> No trans DA=0 data in case of continuous data
Line 3568: Unknown Case in MacItTimer TokenCancel
Line 3579: Unknown Case in ItUeDtxCycle2Timer TokenCancel
Line 3591: Unknown Case in ItUEGrantMonitoringTimer TokenCancel
Line 3682: <CPC> HARQID[%d]->[%d]. LongPreamble Transmission
