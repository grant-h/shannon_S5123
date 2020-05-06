Line 94: ERROR NewElement is NULL 
Line 254: PrivRemoveEntry: Curr is NULL
Line 291: rrc_VisitedCsgList_IsEmpty
Line 323: [rrc_VisitedCsgList_AddCell] SrcRat(%d) Srcfreq(%d) SrcCpich(%d) SrcCellId(%d) for TgtFreq(%d) TgtCpich(%d) TgtCsgId(%d) is added in Visted CSG list
Line 365: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_RAT_CHANGE(%d)
Line 376: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 381: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 385: rrc_VisitedCsgList_UpdateVisitedCsgList : DetectedCsgList Update
Line 388: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList[%d] CSGID(%d) CsgCellType(%d)
Line 396: SourCell RAT(UMTS) SourCell PlmnId(%x%x%x), SourCell Uarfcn(%d), SourceCell Cpich(%d), SourCell CellId(%d) SourceCell Lac(%d)
Line 405: TargetCell RatType(%d) TargetCell PlmnId(%x%x%x), TargetCell Arfcn(%d), TargetCell PhyCellId(%d), TargetCell CellId(%d)
Line 431: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 469: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_CSG_SCANNED_RESULT(%d) during Background CSG ID Scan
Line 471: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 487: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 496: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList[%d] CSGID(%d) CsgCellType(%d)
Line 498: SourCell RAT(UMTS) SourCell PlmnId(%x%x%x), SourCell Uarfcn(%d), SourceCell Cpich(%d), SourCell CellId(%d) SourceCell Lac(%d)
Line 507: TargetCell RatType(%d) TargetCell PlmnId(%x%x%x), TargetCell Arfcn(%d), TargetCell PhyCellId(%d), TargetCell CellId(%d)
Line 533: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 560: rrc_VisitedCsgList_UpdateVisitedCsgList : update_type is RRC_UPDATE_CSG_SCANNED_RESULT(%d)
Line 562: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfTargetCellInfo(%d)
Line 567: rrc_VisitedCsgList_UpdateVisitedCsgList : NumOfSourceCell[%d] for TargetCellIdx[%d]
Line 572: rrc_VisitedCsgList_UpdateVisitedCsgList : This is DetectedCsgList
Line 600: rrc_VisitedCsgList_UpdateVisitedCsgList : SourceCellIdx[%d] for TargetCellIdx[%d]
Line 628: Invalid UpdateVisitedCsgList size(%d)
Line 642: [rrc_VisitedCsgList_UpdateLastSourceCellInfo]: LastSourceCellPresent %d (rat_type %d, arfcn %d phy_cell_id %d lac %d cell_id %d)
Line 672: [rrc_VisitedCsgList_RemoveCSGIDFromVisitedCsgList]: REMOVE CSG ID %d (Uarfcn %d, Cpich %d) from VistedCsgList
Line 754: !!!!!!!! Current Cell is Source Cell - Source PLMN ID (0x%02X, 0x%02X, 0x%02X) CurrPlmnId (0x%02X, 0x%02X, 0x%02X)
Line 756: !!!!!!!! ----------------------------- Source-CellID (%d) Curr-CellID (%d) Source-Lac(%d) Curr-Lac(%d)
Line 758: !!!!!!!! ----------------------------- Source RatType(%d) Target RatType(%d) CSGID (%d) E/U-arfcn(%d) PhyCellId-Cpich(%d)
Line 766: !!!!!!!! Current Cell is not a Source Cell - PLMN ID (0x%02X, 0x%02X, 0x%02X) CellID (%d) CurrLac (%d)
Line 863: rrc_VisitedCsgList_getTargetVisitedCsgCellInfo_UMTS - RatType(%d) Source PLMNID (0x%02X, 0x%02X, 0x%02X) Source CellID (%d)
Line 865: rrc_VisitedCsgList_getTargetVisitedCsgCellInfo_UMTS - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 898: rrc_VisitedCsgList_getVisitedCsgCellList - RatType(%d) Source PLMNID (0x%02X, 0x%02X, 0x%02X) Source CellID (%d)
Line 900: rrc_VisitedCsgList_getVisitedCsgCellList - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 929: rrc_VisitedCsgList_isTargetCsgCellInfoPresent - TargetRatType(%d) Target PLMNID (0x%02X, 0x%02X, 0x%02X)
Line 931: rrc_VisitedCsgList_isTargetCsgCellInfoPresent - CSGID (%d) - Target E/U-Arfcn(%d) Target PhyCellId/Cpich(%d)
Line 950: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - TargetRat (%d) - Target E/U-Arfcn(%d)
Line 959: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - TargetRatType(%d) Target PLMNID (0x%02X, 0x%02X, 0x%02X)
Line 961: rrc_VisitedCsgList_isTargetCsgFreqInfoPresent - CSGID (%d) - Target E/U-Arfcn(%d)
Line 993: S-CellId(%d) S-UARFCN %d S-Cpich %d >>>> T-UARFCN %d T-Cpich %d
Line 1053: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already existS-CellID (%d) T-CellId(%d) T-Uarfcn(%d) T-Cpich (%d)
Line 1072: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already existS-CellID (%d) T-CellId(%d) T-Uarfcn(%d) T-Cpich (%d)
Line 1083: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Unknown List Type
Line 1086: rrc_VisitedCsgList_isAlreadyHaveVisitedCsgCellInfo - Same VisitedCsgList is already exist
Line 1099: rrc_VisitedCsgList_PrintCurrentVisitedCsgCellInfo - S-PLMN ID (0x%02X, 0x%02X, 0x%02X) S-CellID (%d) S-Lac(%d) for CSGID (%d)
Line 1102: rrc_VisitedCsgList_PrintCurrentVisitedCsgCellInfo - T-PLMN ID (0x%02X, 0x%02X, 0x%02X) T-CellID (%d) T-Uarfcn(%d) T-Cpich(%d)
Line 1122: T-CellId[%d] with T-RatType(%d) U-arfcn(%d) T-Cpich(%d) present in VisitedCsgList with CSGID (%d) 
Line 1140:  Target CSG Cells found: U-arfcn(%d) CsgId(%d) 
Line 1146: No Target CSG Cells found 
