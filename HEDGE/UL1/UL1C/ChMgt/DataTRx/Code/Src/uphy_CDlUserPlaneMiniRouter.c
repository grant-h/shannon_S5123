Line 238: dlUserPlaneMiniRouter_ptr->bchCctrchInfo is NULL in uphy_CDlUserPlaneMiniRouter_init
Line 238: dlUserPlaneMiniRouter_ptr->bchCctrchInfo is NULL in uphy_CDlUserPlaneMiniRouter_init
Line 371: Instance created for stackId %d
Line 371: Instance created for stackId %d
Line 598: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd msg 0x%x
Line 598: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd msg 0x%x
Line 612: [CGI ACQUISITION] ind_msg->header.TransactId 0x%x CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 612: [CGI ACQUISITION] ind_msg->header.TransactId 0x%x CgiAcquisition 0x%x CgiAcquisition->sfnAcquisitionReq_TID 0x%x
Line 615: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd 0x%x curSfn %d %d %d sfn offset %d %d %d
Line 615: [CGI ACQUISITION] uphy_CDlUserPlaneMinRouter_SFNAcauisitionInd 0x%x curSfn %d %d %d sfn offset %d %d %d
Line 629: EutraCellInfoUpdateInd message is failed
Line 629: EutraCellInfoUpdateInd message is failed
Line 679: numberOfTrCh>8
Line 679: numberOfTrCh>8
Line 691: msg is NULL in uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo
Line 691: msg is NULL in uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo
Line 769: uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo: trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d,  crcSize=%d
Line 769: uphy_CDlUserPlaneMiniRouter_ExtractAndSendDchCrcInfo: trChId=%d, numTrBlks=%d, numTrBlksBad=%d, tbSize=%d,  crcSize=%d
Line 775: Cant Send Crc Info 
Line 775: Cant Send Crc Info 
Line 795: Framework Cfn %d Urrc Trch id %d has received %d good crcs and %d bad crcs, BLER[%%] = %2d.%04d 
Line 795: Framework Cfn %d Urrc Trch id %d has received %d good crcs and %d bad crcs, BLER[%%] = %2d.%04d 
Line 817: Rl Info uhal cmd exec failed 
Line 817: Rl Info uhal cmd exec failed 
Line 829: Chipset believes Ref Rl %d Nbr Rl %d 
Line 829: Chipset believes Ref Rl %d Nbr Rl %d 
Line 850: numberOfTrCh>8
Line 850: numberOfTrCh>8
Line 905: process - NOT SUPPORTED
Line 905: process - NOT SUPPORTED
Line 989: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo CctrchNr 0x%x
Line 989: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo CctrchNr 0x%x
Line 996: User Plane discards data for Cctrch%d 
Line 996: User Plane discards data for Cctrch%d 
Line 1009: DataCctrchDecodedInfoCmd Uhal Cmd exec - Error code %d 
Line 1009: DataCctrchDecodedInfoCmd Uhal Cmd exec - Error code %d 
Line 1025: No TrChs reported by HAL 
Line 1025: No TrChs reported by HAL 
Line 1037: S0   Warning!!! trChInfoPtr = NULL 
Line 1044: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo numTrChs 0x%x trChInfoPtr->DlTrChType %d equipmentMode %d sfnAcquisitionConfig %d
Line 1044: [CGI ACQUISITION] uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo numTrChs 0x%x trChInfoPtr->DlTrChType %d equipmentMode %d sfnAcquisitionConfig %d
Line 1061: uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo() Populated TrCh Nr :%d with TrCh Id:%d for ccTrChNr:%d 
Line 1061: uphy_CDlUserPlaneMiniRouter_ReadAndProcessTrChInfo() Populated TrCh Nr :%d with TrCh Id:%d for ccTrChNr:%d 
Line 1070: Cfn %d :Unable to remap TrChId %d 
Line 1070: Cfn %d :Unable to remap TrChId %d 
Line 1073: Cfn %d :Unable to remap TrChId %d 
Line 1073: Cfn %d :Unable to remap TrChId %d 
Line 1106: Invalid memory allocation: iSegBitSize = %d 
Line 1106: Invalid memory allocation: iSegBitSize = %d 
Line 1118: Cancel send to UMAC 
Line 1118: Cancel send to UMAC 
Line 1150: [BCH decoding] trChInfoPtr->CrcCheckRes[0]=%d, isDecodedBchBasicCheckPassed=%d
Line 1150: [BCH decoding] trChInfoPtr->CrcCheckRes[0]=%d, isDecodedBchBasicCheckPassed=%d
Line 1171: [BCH decoding] This case is error-prone, since raw decoding result is %d,  thus skip this. hwSfn %d, compensatedCurrentSfn %d
Line 1171: [BCH decoding] This case is error-prone, since raw decoding result is %d,  thus skip this. hwSfn %d, compensatedCurrentSfn %d
Line 1185: [BCH decoding] By chance, hwSfn %d and compensatedCurrentSfn %d are the same
Line 1185: [BCH decoding] By chance, hwSfn %d and compensatedCurrentSfn %d are the same
Line 1204: [BCH decoding] hwSfn %d and compensatedCurrentSfn %d are not the same, If this is 1st decodign result, that's ok
Line 1204: [BCH decoding] hwSfn %d and compensatedCurrentSfn %d are not the same, If this is 1st decodign result, that's ok
Line 1213: SFN Passing for the Segment Received Condition : %d
Line 1213: SFN Passing for the Segment Received Condition : %d
Line 1244: [BCH decoding] HW SFN locked. hwSfnLocked=%d
Line 1244: [BCH decoding] HW SFN locked. hwSfnLocked=%d
Line 1258: [BCH decoding] SFN was set but it was not increased. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1258: [BCH decoding] SFN was set but it was not increased. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1264: [BCH decoding] CRC check passed again after receiving 10ms BCH PDU. False Alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1264: [BCH decoding] CRC check passed again after receiving 10ms BCH PDU. False Alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1270: [BCH decoding] Evidently either this or previous one is false alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1270: [BCH decoding] Evidently either this or previous one is false alarm. hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1277: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1277: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1302: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1302: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1308: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1308: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1312: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1312: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1363: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1363: [BCH decoding] There is a false alarm but have no clue which is which, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1367: SFN Passing for the Segment Received Condition : %d
Line 1367: SFN Passing for the Segment Received Condition : %d
Line 1385: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1385: [BCH decoding] There is a false alarm but perhaps this PDU, hwSfn=%d, compensatedCurrentSfn=%d, bchFalseAlarmDetected=%d
Line 1416: [BCH decoding] 10 ms mode just restarted
Line 1416: [BCH decoding] 10 ms mode just restarted
Line 1421: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1421: [BCH decoding] hwSfn=%d, compensatedCurrentSfn=%d, isDecodedBchBasicCheckPassed=%d, readyToSendSfnToCellSfnServer=%d, needToWriteSfnOnHw=%d 
Line 1425: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1425: [BCH decoding] numOfCrcCheckPasses=%d, numOfConsecutiveCrcFailures=%d, bch10msModeAllowed=%d, hwSfnLocked=%d, bchFalseAlarmDetected=%d
Line 1442: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1442: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1451: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1451: ****Framework Sfn %d Cfn %d slot %d User Plane writes sfn %d to chipset Rl %d, isBchConfigSfnReadCallback=%d
Line 1457: ****Doesn't send SFN to SFN server: readyToSendSfnToCellSfnServer %d, isDecodedBchValid %d, isBchConfigSfnReadCallback=%d
Line 1457: ****Doesn't send SFN to SFN server: readyToSendSfnToCellSfnServer %d, isDecodedBchValid %d, isBchConfigSfnReadCallback=%d
Line 1472: debug lookModeOn %d, trChInfoPtr->DlTrChType %d, numTrChs %d, trChInfoPtr->NoTbs %d, trChInfoPtr->CrcCheckRes[0] %d, trChInfoPtr->SizeOfTbs %d, trChInfoPtr->Data %x
Line 1472: debug lookModeOn %d, trChInfoPtr->DlTrChType %d, numTrChs %d, trChInfoPtr->NoTbs %d, trChInfoPtr->CrcCheckRes[0] %d, trChInfoPtr->SizeOfTbs %d, trChInfoPtr->Data %x
Line 1488: No memory handle for DCH data
Line 1488: No memory handle for DCH data
Line 1503: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1503: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1516: Discard BCH data:  TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1516: Discard BCH data:  TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1533: ****First scheduled MIB is read
Line 1533: ****First scheduled MIB is read
Line 1553: ****First scheduled MIB is read
Line 1553: ****First scheduled MIB is read
Line 1559: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1559: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1575: Debug SendDataToMac: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1575: Debug SendDataToMac: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1600: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1600: SendDataToMac failure: TrCH ID %02d CFN %04d - Type %02d - nTrBlks %02d - SizeOfTBs %04d  Ct_Num %02d, CrcCheckRes %d
Line 1619: ****First scheduled MIB is read
Line 1619: ****First scheduled MIB is read
Line 1625: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1625: ****Don't do SFN Correction: BCH call back fn is Unregistered
Line 1737: UmacMsg is NULL in uphy_CDlUserPlaneMiniRouter_SendDataToMac
Line 1737: UmacMsg is NULL in uphy_CDlUserPlaneMiniRouter_SendDataToMac
Line 1806: uphy_CDlUserPlaneMiniRouter_SendDataToMac: UmacMsg=0x%x, destTrChInfoPtr=0x%x,	Data=0x%x, trChId=%d, numTrBlks=%d, tbSize=%d
Line 1806: uphy_CDlUserPlaneMiniRouter_SendDataToMac: UmacMsg=0x%x, destTrChInfoPtr=0x%x,	Data=0x%x, trChId=%d, numTrBlks=%d, tbSize=%d
Line 1842: uphy_CDlUserPlaneMiniRouter_SendDataToMac: destTrChInfoPtr=0x%x,  Data=0x%x,  trChId=%d, numTrBlks=%d, tbSize=%d,  crcSize=%d
Line 1842: uphy_CDlUserPlaneMiniRouter_SendDataToMac: destTrChInfoPtr=0x%x,  Data=0x%x,  trChId=%d, numTrBlks=%d, tbSize=%d,  crcSize=%d
Line 1859: Passing to MAC: stackId %d, Trch Id %02d, CFN %04d, Type %02d, nTrBlks %02d, SizeOfTBs %04d, Ct_Num %02d
Line 1859: Passing to MAC: stackId %d, Trch Id %02d, CFN %04d, Type %02d, nTrBlks %02d, SizeOfTBs %04d, Ct_Num %02d
Line 1873: [ 0]0x%x. [ 1]0x%x. [ 2]0x%x. [ 3]0x%x. [ 4]0x%x. [ 5]0x%x. [ 6]0x%x.
Line 1878: [ 7]0x%x. [ 8]0x%x. [ 9]0x%x. [10]0x%x. [11]0x%x. [12]0x%x. [13]0x%x.
Line 1884: [14]0x%x. [15]0x%x. [16]0x%x. [17]0x%x. [18]0x%x. [19]0x%x. [20]0x%x.
Line 1890: [21]0x%x. [22]0x%x. [23]0x%x. [24]0x%x. [25]0x%x. [26]0x%x. [27]0x%x.
Line 1896: [28]0x%x. [29]0x%x. [30]0x%x. [31]0x%x. [32]0x%x. [33]0x%x. [34]0x%x.
Line 1919: ######## Discard all zero data
Line 1919: ######## Discard all zero data
Line 1946: Unable to send Uphy Data Ind
Line 1946: Unable to send Uphy Data Ind
Line 1964: array index out of bounds.nTrChs=%d
Line 1964: array index out of bounds.nTrChs=%d
Line 1995: Asn_tti
Line 1995: Asn_tti
Line 2109: Illegal cctrch number
Line 2109: Illegal cctrch number
Line 2115: BCH config with newDecoding: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2115: BCH config with newDecoding: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2152: Illegal cctrch number
Line 2152: Illegal cctrch number
Line 2158: BCH config with ReusingRl: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2158: BCH config with ReusingRl: uarfcn %d, psc %d, rlNr %d, bch10msModeAllowed %d
Line 2226: nTrch %d,  gTrch[%d].wNumTrBlocks is %d, gTrch[%d].wNumErrTrBlocks is %d, gTrch[%d].ucTrChType is %d
Line 2226: nTrch %d,  gTrch[%d].wNumTrBlocks is %d, gTrch[%d].wNumErrTrBlocks is %d, gTrch[%d].ucTrChType is %d
Line 2235: uphy_CDlUserPlaneMiniRouter_DecodedBchValidityCheck: Data is %x
Line 2235: uphy_CDlUserPlaneMiniRouter_DecodedBchValidityCheck: Data is %x
