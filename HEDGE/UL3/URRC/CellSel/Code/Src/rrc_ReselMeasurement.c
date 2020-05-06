Line 281: %s SystemInformation is PENDING
Line 295: %s SystemInformation is PENDING
Line 303: %s BarredFreqAdded
Line 335: RefreshCellsBeingMeasured
Line 426: %s: Adding cells since old measurement rule: %s,New measurement rule: %s
Line 457: > DRX (%d < 640):: Overwrite RemoveCellHyst (%d -> 8)
Line 464: Ignore RemoveHyst
Line 483: %s: removing cells (HystCounter = %i) since old measurement rule: %s, new rule: %s
Line 566: rrc_ReselMeasurement_RefreshEutraFreqsBeingMeasured
Line 606: PrioBaseMeasurementRuleMasks[NewMeasRule]: %d, PrioBaseMeasurementRuleMasks[MeasurePrioDefault]: %d
Line 609: NewMeasurementMask = %d,
Line 611: OldMeasRule = %d, NewMeasRule = %d
Line 621: Barred Earfcn has been added to CellList after Barred Timer Expiry
Line 626: EutraFreqsToAdd = %d, EutraFreqsBeingMeasured = %d, EutraFreqsBeingMeasured ^ NewMeasurementMask = %d,  NewMeasurementMask = %d
Line 646: NumEutraFreqsToAdd %d,EutraFreqsToAdd: %d   EutraFreqsToAddCpy : %d
Line 656:  ReselMeasurement_p->EutraFreqsBeingMeasured %d,CellsToAddCpy: %d
Line 662: %s: Adding Eutra Freqs since old measurement rule: %s,New measurement rule: %s
Line 683: %s: Removing Eutra Freqs (HystCounter = %i) since old measurement rule: %s, new rule: %s
Line 725: CellId: %d Cell %s paired with PlmnId[Last]: 0x%X, 0x%X, 0x%X
Line 734: CellId: %d Cell %s paired with PlmnId[Selected]: 0x%X, 0x%X, 0x%X
Line 744: CellId: %d Cell %s paired with PlmnId[%d]: 0x%X, 0x%X, 0x%X
Line 779: UpdateSib18PlmnIds: CellList Type is %d Is Idle Mode?? %d, Num Idle PLMN ID's in SIB18 %d and  Num Conn PLMN ID's in SIB18 %d
Line 863: ServingCell was not present in Sib11/12 so not pairing it with a PlmnId from Sib18
Line 890: ServingCell was not present in Sib11/12 so not pairing it with a PlmnId from Sib18
Line 903: UpdateSib18PlmnIds: NumShPlmns:  %d 
Line 977: CellInfoId is NULL in UpdateSib18PlmnIds
Line 985: Ignoring %d extra PLMN Identities
Line 1014: Releasing %s Measurement Id: %i
Line 1022: InterFreqMeas to be Released & ImmediateInterFReselMeas Required-> Clear ImmediateInterFReselMeas
Line 1062: ResetRemoveIntraCellsHystCounter %d
Line 1067: ResetRemoveInterCellsHystCounter %d
Line 1072: ResetRemoveIratCellsHystCoutner %d
Line 1076: Invalid CellListType %d
Line 1109: Invalid CellListType %d
Line 1144: Invalid CellListType %d
Line 1147: [CellListType %d] RemoveCellsHystCounter %d
Line 1178: Releasing %s Measurement Id: %i
Line 1259: PostProcessSysInfo: SIB18 ptr present, Num Cells in CellInfoList %d, IsHCS in Use %d and  HcsPrioS %d
Line 1263: rrc_ReselMeasurement_PostProcessSysInfo: SIB18 ptr present, Num Cells in CellInfoList %d, IsHCS in Use %d and  HcsPrioS %d
Line 1270: PostProcessSysInfo: SIB18 ptr not present, Num Cells in CellInfoList %d, IsHCS in Use %d and  HcsPrioS %d
Line 1276: PostProcessSysInfo: CellListType (%d), IsUtraPrioBaseInUse(%d), IsEutraPrioBaseInUse(%d), IsGsmPrioBaseInUse(%d)
Line 1280: PostProcessSysInfo: rrc_Features.UtranApbcr disabled
Line 1367: PostProcessSysInfo: HcsPrioS : %d, HcsPrioN(CellId:%d,CellListType%d) : %d
Line 1424: [APBCR][PostProcessSysInfo] SYS_INFO_PRIORITY selected for UARFCN %d with UtraPrio(%d) from SIB19
Line 1432: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / UtraPrio(%d) was from PriorityInfoList
Line 1442: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList UtraPrio is (%d). So this UARFCN is not considered for Reselection
Line 1456: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1462: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1470: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1476: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1484: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1507: [APBCR][PostProcessSysInfo] SYS_INFO_PRIORITY selected for UARFCN %d with GsmPrio(%d) from SIB19
Line 1515: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / GsmPrio(%d) was from PriorityInfoList
Line 1525: [APBCR][PostProcessSysInfo] DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So GsmPrio(%d) is not considered for Reselection
Line 1539: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1545: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1553: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1559: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1566: [APBCR] ThisCell = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1620: [rrc_EutraCellSelReselInfo_IsQuickRBCriteriaMet] DEDICATED_PRIORITY / ServCellPrio(%d) was from PriorityInfoList
Line 1627: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrioTdd(%d) from rrc_FddCellSelReselInfo is used
Line 1633: rrc_ReselMeasurement_PostProcessEutraPrioBaseSysInfo : NumEutraFreqs = %d, ServCellPrioTdd = %d IsPrioBaseInUse = %d
Line 1652: ThisEutraFreq = %d
Line 1658: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioAll] = %d
Line 1668: [rrc_ReselMeasurement_PostProcessEutraPrioBaseSysInfo] SYS_INFO_PRIORITY selected. EutraPrio(%d) was from SIB19
Line 1676: [rrc_ReselMeasurement_PostProcessEutraPrioBaseSysInfo] DEDICATED_PRIORITY / EutraPrio(%d) was from PriorityInfoList
Line 1685: DEDICATED_PRIORITY / Error to get Priority from EARFCN(%d) of PriorityInfoList. So EutraPrio(%d) from rrc_EutraFreqSelReselInfo is used
Line 1694: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1700: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1708: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1714: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1722: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1733: EutraFreqInfoInstd = NULL @ EutraFreqIx = %d
Line 1745: CellListType (%d), IsUtraPrioBaseInUse(%d), IsEutraPrioBaseInUse(%d)
Line 1760: [PostProcessPrioBaseSysInfo] DEDICATED_PRIORITY / ServCellPrio(%d) was from PriorityInfoList
Line 1767: DEDICATED_PRIORITY / Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrio(%d) from rrc_FddCellSelReselInfo is used
Line 1772: [PostProcessPrioBaseSysInfo] NumEutraFreqs = %d, ServCellPrio = %d IsEutraPrioBaseInUse = %d
Line 1790: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioAll] = %d
Line 1801: [PostProcessPrioBaseSysInfo] SYS_INFO_PRIORITY selected. EutraPrio(%d) was from SIB19
Line 1809: [PostProcessPrioBaseSysInfo] DEDICATED_PRIORITY / EutraPrio(%d) was from PriorityInfoList
Line 1818: DEDICATED_PRIORITY / Error to get Priority from EARFCN(%d) of PriorityInfoList. So EutraPrio(%d) from rrc_EutraFreqSelReselInfo is used
Line 1828: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1834: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1842: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanSC] = %d
Line 1848: ThisEutraFreq = %d, ReselMeasurement_p->PrioBaseMeasurementRuleMasks[MeasurePrioGreaterThanOrEqualToSC] = %d
Line 1856: ThisEutraFreq = %d, PrioBaseMeasurementRuleMasks[MeasurePrioLessThanOrEqualToSC] = %d
Line 1864: ERROR EutraFreqInfoInstd = NULL @ EutraFreqIx = %d
Line 1933: RefreshCellsBeingMeasured
Line 2004: %s: Adding cells since old measurement rule: %s,New measurement rule: %s
Line 2030: Ignore RemoveHyst
Line 2046: %s: removing cells (HystCounter = %i) since old measurement rule: %s, new rule: %s
