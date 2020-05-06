Line 298: ###[NR_DEMOD] Scheduled Time was delayed # Current_Sfn(%d) Scheduled_Sfn(%d) Arfcn(%d) Period(%d)
Line 379: ###[NR_DEMOD] SetMeasReq : 1. Fill up "PHY_L1C_MEAS_REQ" IPC message with Measure information
Line 388: ###[NR_DEMOD] SetMeasReq : cc[%d], div_cc[%d], RxMode[0x%x], td_buf_idx[%x], td_buf_idx_div[%x], rfd_str_idx[%x], rfd_str_idx_div[%x]
Line 398: ###[NR_DEMOD] Start_Meas_SFN(%u) [ReadSfn(%u) Periodicity(%d)] 
Line 424: ###[NR_DEMOD] SetMeasReq : ReadSfn[%u], Start_Meas_SFN[%u], RxPath.cc[%d], dl_bw[%d], FftStartOffset[%d]
Line 430: ###[NR_DEMOD] SetMeasReq : Meas_Duration[%d], scs[%d], meas_serv_bw[%d], rsrp_mode[%d], freq_range[%d]
Line 493: ###[NR_DEMOD] SetMeasReq : CMD -> NumSsbToMeasure[%d], SsbToMeasure[0x%x, 0x%x], IPC -> FirstSsbIndex[%d]
Line 499: ###[NR_DEMOD] SetMeasReq : Periodicity[%d], Duplex_Mode[%d], CpType[%d], DemodCC[%d] Freq_Range[%d]
Line 537: ###[NR_DEMOD] CC(%d) Smtc Period(%d) Offset(%d) FramePos(%d), HFI(%d), FirstTimingOffset(%d)
Line 593: ###[NR_DEMOD] SetMeasReq : CellId[%d], RxBeam[%d] timing[%d], offset[%d], Rs_Type[%d]  SSB_BITMAP[0x%X 0x%X]
Line 604: ###[NR_DEMOD] Send IPC to L-CPU for MEAS_REQ
Line 707: ###[NR_DEMOD] ProcMeasStop  MeasMode(%d) Demod_cc(%d) 
Line 725: ###[NR_DEMOD] ProcPhyConfigReq upd_type(%d), max_ul_layer(%d)
Line 773: ###[NR_DEMOD] ProcPhyConfigReq:: Restore PHY CONFIG related IPC without param update
Line 810: ###[NR_DEMOD] ProcSib1PhyConfigReq:: max_ul_layer(%d)
Line 855: ###[NR_DEMOD] ProcSib1PhyConfigReq:: Restore PHY CONFIG related IPC without param update
Line 894: ###[NR_DEMOD] GetRunningExtCmdReq fail [MEAS_NR_CMD]
Line 899: ###[NR_DEMOD] ProcMeasCompleteHisr! NumMeasCell(%d)
Line 1031: ###[NR_DEMOD] ProcPhyConfigDoneHisr
Line 1035: ###[NR_DEMOD] GetRunningExtCmdReq fail [PHY_CONFIG_NR_CMD]
Line 1074: ###[NR_DEMOD] error!!! pMacCellGrp is NULL
Line 1083: ###[NR_DEMOD] error!!! pPhyCellGrp is NULL
Line 1109: ###[NR_DEMOD] error!!! sPcellCfg is NULL
Line 1112: ###[NR_DEMOD] %s, SpcellConfigPresentBitmask 0x%x %x
Line 1124: ###[NR_DEMOD] ReconfigWithSyncPresentBitmask 0x%x %x
Line 1132: ###[NR_DEMOD] SERVINGCELL_CONFIG_COMMON_MASK is absent
Line 1135: ###[NR_DEMOD] use previous initBwpDlCommon configuration
Line 1139: ###[NR_DEMOD] initBwpDlCommon is NULL
Line 1171: ###[NR_DEMOD] error!!! abnormal ReconfigWithSyncRachConfigDedicated value
Line 1182: ###[NR_DEMOD] ReconfigWithSyncStatus is %d
Line 1187: ###[NR_DEMOD] RECONFIGWITH_SYNC_MASK is absent
Line 1190: ###[NR_DEMOD] use previous initBwpDlCommon configuration
Line 1194: ###[NR_DEMOD] initBwpDlCommon is NULL
Line 1232: ###[NR_DEMOD] %s, ServingCellConfigCommonSIBPresentBitmask 0x%x %x
Line 1324: ###[NR_DEMOD] %s, PCCHConfigPresentBitmask 0x%x %x
Line 1349: ###[NR_DEMOD] error!!! abnormal nAndPagingFrameOffset value
Line 1359: ###[NR_DEMOD] CreatePcchCfgMsg:: pagingFrmOffset(%d), defaultPagingCycle(%d), ns(%d)
Line 1417: ###[NR_DEMOD] error!!! abnormal nAndPagingFrameOffset value
Line 1430: ###[NR_DEMOD] CreatePcchCfgMsg:: SELECTED_PAGING_CYCLE_MASK is absent
Line 1439: ###[NR_DEMOD] CreatePcchCfgMsg:: UEIDENTITY_MASK is absent
Line 1447: ###[NR_DEMOD] CreatePcchCfgMsg:: MonitorOccasion(%d, %d, %d, %d), selectedPgCycle(%d), NrUeId(%d)
Line 1506: ###[NR_DEMOD] ProcCreateScellCfgReq SCellBitmask(0x%x) DeltaSCellBitmask(0x%x), num_of_add_scell(%d), num_of_rel_scell(%d)
Line 1510: ###[NR_DEMOD] error!!! sPcellCfg is NULL
Line 1515: ###[NR_DEMOD] error!!! num of add_scell && rel_scell is 0
Line 1529: ###[NR_DEMOD] Release Scell List [%d] scell_idx(%d), rel_shm_idx(%d), left num_of_scell(%d)
Line 1545: ###[NR_DEMOD] Adding Scell List:: num_of_add_scell(%d), total_num_scell(%d) 
Line 1560: ###[NR_DEMOD] ProcCreateScellCfgReq:: IPC[%d] scell_idx(%d), cc_idx(%d), lcpu_array_idx(%d) bwp_id(D=%d, U=%d)
Line 1569: ###[NR_DEMOD] ProcCreateScellCfgReq:: Invalid ipc_array_idx
Line 1592: ###[NR_DEMOD] SCELL_CONFIG_COMMON_MASK is absent
Line 1603: ###[NR_DEMOD] SCELL_CONFIG_DEDI is absent
Line 1616: ###[NR_DEMOD] SMTC_MASK is absent
Line 1642: ###[NR_DEMOD] ProcCreateUlActInd: ul_band(%d), ul_freq(%d), ul_bw(%d), ul_scs(%d), ul_num_rb(%d), converted_ul_bw(%d), max_layer(%d)
Line 1655: ###[NR_DEMOD] ProcScellCfgCnf: demod_cc(%d)
Line 1683: ###[NR_DEMOD] ProcCreateRestorePcellCfgReq: mxr_path(%d)
Line 1706: ###[NR_DEMOD] ipcDrxWakeupInit CC(0x%4x, cc4/divcc4), Duplex(%d), cell_id(%d), dl_freq(%d),ssb(0x%4x, Idx2Scs1)
Line 1772: ###[NR_DEMOD] ipcSib1PcellCfg.Sib1PcellCfg.present_flag(0x%x)
Line 1789: ###[NR_DEMOD] ProcCreateRestorePcellCfgReq: mxr_path(%d)
Line 1812: ###[NR_DEMOD] ipcDrxWakeupInit CC(0x%4x, cc4/divcc4), Duplex(%d), cell_id(%d), dl_freq(%d),ssb(0x%4x, Idx2Scs1)
Line 1876: ###[NR_DEMOD] ProcCreateRestorePcellReq:: sib1_flag(%d), ipc_bitmap(0x%x)
Line 1894: ###[NR_DEMOD] ProcLcpuStorePhyCfg()
Line 1932: ###[NR_DEMOD] %s, MacCellGroupConfigPresentBitMask 0x%x %x
Line 2004: ###[NR_DEMOD] %s, DrxConfigSetupPresentBitMask 0x%x %x
Line 2023: ###[NR_DRX] OnDur(%d  %d ms) InAct(%d ms) LongCycle(%d ms %d) ShortCycle(%d ms %d )
Line 2025: ###[NR_DRX] SlotOffset(%d) HARQRTT-DL/UL(%d/%d) ReTran-DL/UL(%d/%d)
Line 2042: ###[NR_DEMOD] error!!! abnormal drx_onDurationTimerChoice value
Line 2086: ###[NR_DEMOD] %s, PhyCellGrpConfigPresentBitMask 0x%x %x
Line 2166: ###[NR_DEMOD] error!!! abnormal PeriodicityAndOffsetChoice value
Line 2170: ###[NR_DEMOD] %s, Periodicty %d, duration %d, offset %d
Line 2186: ###[NR_DEMOD] %s, RachConfigDedicatedPresentBitmask 0x%x %x
Line 2246: ###[NR_DEMOD] error!!! abnormal cfraResources value
Line 2264: ###[NR_DEMOD] %s, RaPrioritizationPresentBitMask 0x%x %x
Line 2289: ###[NR_DEMOD] SetRachConfigGeneric:: prachConfigurationIndex 0x%x msg1_FDM 0x%x, msg1_FrequencyStart 0x%x, preambleReceivedTargetPower 0x%x, preambleTransMax 0x%x powerRampingStep 0x%x, ra_ResponseWindow 0x%x
Line 2306: ###[NR_DEMOD] %s, ServingCellConfigCommonPresentBitmask 0x%x %x, physCellId(%d)
Line 2317: ###[NR_DEMOD] DownlinkConfigCommonPresentBitmask 0x%x %x
Line 2364: ###[NR_DEMOD] ServingCellConfigCommon_initialDownlinkBWP is absent
Line 2376: ###[NR_DEMOD] UPLINK_CONFIG_COMMON_MASK is absent
Line 2416: ###[NR_DEMOD] error!!! abnormal ServingCellConfigCommonSsbPositionsInBurst value
Line 2424: ###[NR_DEMOD] SSB_POSITION_IN_BURST_MASK is absent
Line 2442: ###[NR_DEMOD] DMRS_TYPEA_POSITION_MASK is absent
Line 2482: ###[NR_DEMOD] SUBCARRIER_SPACING_MASK is absent
Line 2492: ###[NR_DEMOD] TDD_UL_DL_CONFIGURATION_COMMON_MASK is absent
Line 2513: ###[NR_DEMOD] %s, UplinkConfigCommonPresentBitmask 0x%x %x
Line 2578: ###[NR_DEMOD] UplinkConfigCommon_initialUplinkBWP is absent
Line 2585: ###[NR_DEMOD] %s, FrequencyInfoULSIBPresentBitmask 0x%x %x
Line 2639: ###[NR_DEMOD] %s, TddUlDlConfigCommonPresentBitmask 0x%x %x
Line 2663: ###[NR_DEMOD] pattern1 dl_UL_TransmissionPeriodicityV1530 %d
Line 2666: ###[NR_DEMOD] pattern1 referenceSubcarrierSpacing %d, Periodicity %d, DlSlots %d, DlSymbols %d, UlSlots %d, UlSymbols %d
Line 2685: ###[NR_DEMOD] pattern2 dl_UL_TransmissionPeriodicityV1530 %d
Line 2688: ###[NR_DEMOD] pattern2 referenceSubcarrierSpacing %d, Periodicity %d, DlSlots %d, DlSymbols %d, UlSlots %d, UlSymbols %d
Line 2696: ###[NR_DEMOD] CreateServingCellCfgMsg, ServingCellConfigPresentBitMask(0x%x %x), scell_buf_idx(%d, 0 for PCell, other val-1 for scell)
Line 2717: ###[NR_DEMOD] tddUlDlConfigDedicated is NULL
Line 2730: ###[NR_DEMOD] initialDownlinkBwp is NULL
Line 2735: ###[NR_DEMOD] ServingCellConfigCommon_initialDownlinkBWP is absent
Line 2746: ###[NR_DEMOD] [BWP] - FIRST_ACTIVE_DOWNLINK_BWP_ID is not present
Line 2762: ###[NR_DEMOD] DEFAULT_DOWNLINK_BWP_ID is not present
Line 2770: ###[NR_DEMOD] [BWP] - SetBwpDownlink is called. FirstDlActBwpId : %d DefaultDlBwpId : %d
Line 2775: ###[NR_DEMOD] DL BWP Info is absent. ServingCellConfigPresentBitMask : 0x%x, initBwpDlDedi 0x%x, initBwpDlCommon 0x%x 
Line 2787: ###[NR_DEMOD] uplinkConfig is NULL
Line 2792: ###[NR_DEMOD] UPLINK_CONFIG_MASK is absent
Line 2804: ###[NR_DEMOD] supplementaryUplink is NULL
Line 2809: ###[NR_DEMOD] SUPPLEMENTARY_UPLINK_MASK is absent
Line 2822: ###[NR_DEMOD] PDCCH_SERVINGVELL_CONFIG_MASK is absent
Line 2864: ###[NR_DEMOD] PDSCH_SERVINGVELL_CONFIG_MASK is NULL
Line 2878: ###[NR_DEMOD] csiMeasConfig is NULL
Line 2883: ###[NR_DEMOD] CSI_MEAS_CONFIG_MASK is NULL
Line 2893: ###[NR_DEMOD] SCELL_DEACTIVATION_TIMER_MASK is NULL
Line 2966: ###[NR_DEMOD] CreateServingCellUplinkCfgMsg:: ServingcellUplinkConfigPresentBitmask(0x%x %x), scell_buf_idx(%d)
Line 2974: ###[NR_DEMOD] UplinkConfig_initialUplinkBWP is absent
Line 2985: ###[NR_DEMOD] FIRST_ACTIVE_UPLINK_BWP_ID_MASK is absent
Line 2994: ###[NR_DEMOD] [BWP] - SetBwpUplink is called. FirstActBwpId : %d
Line 2999: ###[NR_DEMOD] [BWP] - !!! UL BWP Info is absent. ServingcellUplinkConfigPresentBitmask : 0x%x, initBwpUlDedi 0x%x, initBwpUlCommon 0x%x 
Line 3035: ###[NR_DEMOD] PUSCH_SERVINGCELL_CONFIG_MASK is absent
Line 3063: ###[NR_DEMOD] error!!! typeA[%d] is NULL
Line 3072: ###[NR_DEMOD] error!!! abnormal SrsCarrierSwitchingSrsTpcPdcchGroup value
Line 3111: ###[NR_DEMOD] %s, SrsTpcPdcchConfigPresentBitmask 0x%x %x
Line 3131: ###[NR_DEMOD, nIndexList: %d, SrsCcSetIndexPresentBitmask 0x%x %x
Line 3140: ###[NR_DEMOD] %s, RateMatchPatternLteCrsPresentBitmask 0x%x %x
Line 3161: ###[NR_DEMOD] EutraMbsfnSubframeConfigPresentBitmask 0x%x %x
Line 3186: ###[NR_DEMOD] error!!! abnormal SlotSpecificConfigSymbols value
Line 3203: ###[NR_DEMOD] error!!! abnormal SlotSpecificConfigSymbols value
Line 3213: ###[NR_DEMOD] listIdx %d, radioframeAllocationPeriod %d, radioframeAllocationOffset %d, subframeAllocation1.choice %d, bitmap %d, subframeAllocation2.choice %d, bitmap %d
Line 3230: ###[NR_DEMOD] carrierFreqDL %d, carrierBandwidthDl %d, nrofCrsPorts %d vShift %d
Line 3258: ###[NR_DEMOD] error!!! abnormal SlotSpecificConfigSymbols value
Line 3266: ###[NR_DEMOD] SetTddUlDlConfigDedi():: slotIdx(%d), choice(%d), DLSymb(%d), ULSymb(%d)
Line 3271: ###[NR_DEMOD] SetTddUlDlConfigDedi():: nSlotSpecificCfg(%d)
Line 3290: ###[NR_DEMOD] %s, CsiMeasConfigPresentBitmask 0x%x %x
Line 3303: ###[NR_DEMOD] nCsiRsResourceList %d
Line 3322: ###[NR_DEMOD] nCsiRsResourceSetList %d
Line 3341: ###[NR_DEMOD] nCsiImResource %d
Line 3360: ###[NR_DEMOD] nCsiImResourceSet %d
Line 3379: ###[NR_DEMOD] nCsiSsbResourceSet %d
Line 3399: ###[NR_DEMOD] nCsiResourceCfg %d
Line 3418: ###[NR_DEMOD] nCsiReportCfg %d
Line 3452: ###[NR_DEMOD] set aperiodicTriggerStateList = %d
Line 3456: ###[NR_DEMOD] nCsiApTriggerState = %d
Line 3479: ###[NR_DEMOD] DemodPL 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x 0x%x
Line 3485: ###[NR_DEMOD] %s, NzpCsiRsResourcePresentBitmask 0x%x %x
Line 3525: ###[NR_DEMOD] %s, NzpCsiRsResourceSetPresentBitmask 0x%x %x
Line 3540: ###[NR_DEMOD] listIdx %d
Line 3565: ###[NR_DEMOD] %s, CsiImResourcePresentBitmask 0x%x %x
Line 3587: ###[NR_DEMOD] error!!! abnormal CsiImResourceElementPattern value
Line 3670: ###[NR_DEMOD] error!!! abnormal CsiRsResourceSetList value
Line 3680: ###[NR_DEMOD] %s, CsiReportConfigPresentBitmask 0x%x %x
Line 3734: ###[NR_DEMOD] error!!! abnormal CsiReportCfgReportConfigType value
Line 3774: ###[NR_DEMOD] error!!! abnormal CsiReportCfgReportFreqConfigurationCsiReportingBand value
Line 3807: ###[NR_DEMOD] error!!! abnormal CsiReportCfgGroupBasedBeamReporting value
Line 3864: ###[NR_DEMOD] error!!! abnormal CsiReportCfgNonPmiPortIndication value
Line 3868: ###[NR_DEMOD] set nonPmiPortIndication : listIdx %d, nNonPmiPort %d
Line 3941: ###[NR_DEMOD] error!!! abnormal CsiReportCfgReportConfigType value
Line 3965: ###[NR_DEMOD] error!!! abnormal CsiReportPeriodicityAndOffset value
Line 3969: ###[NR_DEMOD] SetCsiReportPeriodicityAndOffset reportPeriodicity : %d, reportOffset : %d
Line 3976: ###[NR_DEMOD] %s, CsiAssociatedReportConfigInfoPresentBitmask 0x%x %x
Line 4008: ###[NR_DEMOD] error!!! CsiAssociatedReportConfigInfoResourcesForChannel value
Line 4033: ###[NR_DEMOD] pMsg->codebookType.choice %d CodeBookType1SubType %d
Line 4151: ###[NR_DEMOD] error!!! abnormal CodeBookType1SubTypeTypeISinglePanelNrOfAntennaPortsMoreThanTwoN1N2 value
Line 4164: ###[NR_DEMOD] error!!! abnormal CodeBookType1SubTypeTypeISinglePanelNrOfAntennaPorts value
Line 4169: ###[NR_DEMOD] pMsg->codebookType.choice %d CodeBookType1SubType %d
Line 4244: ###[NR_DEMOD] error!!! abnormal CodeBookType1SubTypeTypeIMultiPanelNgN1N2 value
Line 4251: ###[NR_DEMOD] error!!! abnormal CodeBookType1SubType value
Line 4254: ###[NR_DEMOD] numOfPanels_Ng %d codebookMode %d codebookCfg_N1 %d codebookCfg_N2 %d type1riRestrictionBitmap %d 
Line 4369: ###[NR_DEMOD] error!!! abnormal CodeBookType2SubTypeTypeIIN1N2CodebookSubsetRestriction value
Line 4389: ###[NR_DEMOD] error!!! abnormal CodeBookType2SubType value
Line 4392: ###[NR_DEMOD] numOfPanels_Ng %d codebookMode %d codebookCfg_N1 %d codebookCfg_N2 %d type2riRestrictionBitmap %d 
Line 4396: ###[NR_DEMOD] error!!! abnormal CodeBookType value
Line 4415: ###[NR_DEMOD] SetBwpDownlink:: scell_buf_idx(%d)
Line 4436: ###[NR_DEMOD] [BWP] Update Target BWP ID = %d
Line 4460: ###[NR_DEMOD] [BWP] Update Target BWP ID = %d
Line 4480: ###[NR_DEMOD] Total Num Of DL BWP = %d
Line 4486: ###[NR_DEMOD] %s, BWPdownlinkCommonPresentBitmask 0x%x %x
Line 4523: ###[NR_DEMOD] %s, PdcchConfigCommonPresentBitmask 0x%x %x
Line 4595: ###[NR_DEMOD] %s, ControlResourceSetPresentBitmask 0x%x %x
Line 4658: ###[NR_DEMOD] %s, SearchSpacesPresentBitmask 0x%x %x
Line 4752: ###[NR_DEMOD] error!!! abnormal monitoringSlotPeriodicityAndOffset value
Line 4829: ###[NR_DEMOD] error!!! abnormal SearchSpaceType value
Line 4840: ###[NR_DEMOD] %s, PdschConfigCommonPresentBitmask 0x%x %x
Line 4880: ###[NR_DEMOD] %s, BWPdownlinkDedicatedPresentBitmask 0x%x %x
Line 4920: ###[NR_DEMOD] RadioLinkMonitoringConfigPresentBitmask 0x%x %x
Line 4943: ###[NR_DEMOD] error!!! abnormal RadioLinkMonitoringRsDetectionResource value
Line 4965: ###[NR_DEMOD] %s, PdcchConfigPresentBitmask 0x%x %x
Line 4980: ###[NR_DEMOD] nCoreset %d
Line 4999: ###[NR_DEMOD] nSrchSpace %d
Line 5078: ###[NR_DEMOD] %s, PdschConfigPresentBitmask 0x%x %x
Line 5173: ###[NR_DEMOD] error!!! abnormal RateMatchPatternGroup value
Line 5195: ###[NR_DEMOD] error!!! abnormal RateMatchPatternGroup value
Line 5245: ###[NR_DEMOD] error!!! abnormal prbBundlingType value
Line 5306: ###[NR_DEMOD] %s, DmrsDownlinkConifgPresentBitmask 0x%x %x
Line 5363: ###[NR_DEMOD] NrDMRSDownlinkConfig_t present_flag 0x%x %x scramblingID0 %d, scramblingID1 %d
Line 5369: ###[NR_DEMOD] %s, TciStatePresentBitmask 0x%x %x
Line 5389: ###[NR_DEMOD] %s, QclInfoPresentBitmask 0x%x %x
Line 5419: ###[NR_DEMOD] error!!! abnormal qclType1.referenceSignal value
Line 5434: ###[NR_DEMOD] %s, RateMatchPatternPresentBitmask 0x%x %x
Line 5470: ###[NR_DEMOD] error!!! abnormal patternType value
Line 5516: ###[NR_DEMOD] error!!! abnormal qclType1.referenceSignal value
Line 5528: ###[NR_DEMOD] error!!! abnormal patternType value
Line 5546: ###[NR_DEMOD] %s, ZpCsiRsResourcePresentBitmask 0x%x %x
Line 5567: ###[NR_DEMOD] %s, CsiRsResourceMappingPresentBitmask 0x%x %x
Line 5596: ###[NR_DEMOD] error!!! abnormal frequencyDomainAllocation value
Line 5645: ###[NR_DEMOD] error!!! abnormal density value
Line 5731: ###[NR_DEMOD] error!!! abnormal periodicityAndOffset value
Line 5777: ###[NR_DEMOD] [BWP] Update Target UL BWP ID = %d
Line 5810: ###[NR_DEMOD] [BWP] Update Target UL BWP ID = %d
Line 5817: ###[NR_DEMOD] [BWP] Total Num Of UL BWP = %d
Line 5823: ###[NR_DEMOD] %s, BWPuplinkCommonPresentBitmask 0x%x %x
Line 5862: ###[NR_DEMOD] %s, RachConfigCommonPresentBitmask 0x%x %x
Line 5921: ###[NR_DEMOD] error!!! abnormal ssbPerRachOccasionAndCbPreamblesPerSsb value
Line 5972: ###[NR_DEMOD] error!!! abnormal prachRootSequenceIndex value
Line 5996: ###[NR_DEMOD] %s, PuschConfigCommonPresentBitmask 0x%x %x
Line 6033: ###[NR_DEMOD] %s, PuschTimeDomainResourceAllocationPresentBitmask 0x%x %x
Line 6053: ###[NR_DEMOD] %s, PucchConfigCommonPresentBitmask 0x%x %x
Line 6078: ###[NR_DEMOD] %s, BWPuplinkDedicatedPresentBitmask 0x%x %x
Line 6110: ###[NR_DEMOD] %s, PucchConfigPresentBitmask 0x%x %x
Line 6220: ###[NR_DEMOD] %s, PucchResourceSetPresentBitmask 0x%x %x
Line 6247: ###[NR_DEMOD] %s, PucchResourcePresentBitmask 0x%x %x
Line 6313: ###[NR_DEMOD] error!!! abnormal PucchResourceFormat value
Line 6322: ###[NR_DEMOD] %s, PucchCfgFormatConfigPresentBitmask 0x%x %x
Line 6351: ###[NR_DEMOD] %s, SchedulingRequestResourceConfigPresentBitmask 0x%x %x
Line 6385: ###[NR_DEMOD] error!!! abnormal SchedulingRequestResourceConfigPeriodicityAndOffset value
Line 6421: ###[NR_DEMOD] error!!! abnormal PucchSpatialRelationInfoReferenceSignal value
Line 6434: ###[NR_DEMOD] %s, PucchPowerControlPresentBitmask 0x%x %x
Line 6493: ###[NR_DEMOD] error!!! abnormal PucchPathlossReferenceRsReferenceSignal value
Line 6509: ###[NR_DEMOD] %s, PuschConfigPresentBitmask 0x%x %x
Line 6599: ###[NR_DEMOD] SetPuschCfg:: pusch_max_rank(%d)
Line 6621: ###[NR_DEMOD] %s, DmrsUplinkConfigPresentBitmask 0x%x %x
Line 6701: ###[NR_DEMOD] transformPrecodingDisabled present_flag 0x%x %x scramblingID0 %d, scramblingID1 %d
Line 6729: ###[NR_DEMOD] %s, PuschPowerControlPresentBitmask 0x%x %x
Line 6795: ###[NR_DEMOD] error!!! abnormal PuschPuschPathlossReferenceRSreferenceSignal_ssb_index value
Line 6855: ###[NR_DEMOD] error!!! abnormal PuschCfgUciOnPuschBetaOffsets value
Line 6863: ###[NR_DEMOD] %s, BetaOffsetsPresentBitmask 0x%x %x
Line 6906: ###[NR_DEMOD] %s, ConfiguredGrantConfigPresentBitmask 0x%x %x
Line 6943: ###[NR_DEMOD] error!!! abnormal CgUciOnPusch value
Line 7057: ###[NR_DEMOD] %s, SrsConfigPresentBitmask 0x%x %x
Line 7099: ###[NR_DEMOD] %s, SrsResourceSetPresentBitmask 0x%x %x
Line 7150: ###[NR_DEMOD] error!!! abnormal SrsResourceSetResourceType value
Line 7154: ###[NR_DEMOD] resourceType.choice 0x%x, Periodic.associatedCSI_RS 0x%x
Line 7185: ###[NR_DEMOD] error!!! abnormal SrsResourceSetPathlossReferenceRS value
Line 7188: ###[NR_DEMOD] pathlossReferenceRS.choice 0x%x, ssb_idx 0x%x, csi_RS_Index 0x%x
Line 7197: ###[NR_DEMOD] srs_ResourceSetId 0x%x, NumOfSrsResourceIdList 0x%x, usage 0x%x, alpha 0x%x, p0 0x%x, srsPowerControlAdjustmentStates 0x%x 
Line 7202: ###[NR_DEMOD] %s, SrsResourcePresentBitmask 0x%x %x
Line 7218: ###[NR_DEMOD] srs_ResourceId 0x%x nrofSRS_Ports 0x%x ptrs_PortIndex 0x%x
Line 7235: ###[NR_DEMOD] error!!! abnormal SrsResourceSetPathlossReferenceRS value
Line 7238: ###[NR_DEMOD] transmissionComb.choice 0x%x combOffset_n2 0x%x cyclicShift_n2 0x%x combOffset_n4 0x%x cyclicShift_n4 0x%x
Line 7246: ###[NR_DEMOD] startPosition 0x%x nrofSymbols 0x%x repetitionFactor 0x%x
Line 7271: ###[NR_DEMOD] freqDomainPosition 0x%x freqDomainShift 0x%x freqHopping.c_SRS 0x%x freqHopping.b_SRS 0x%x freqHopping.b_hop 0x%x groupOrSequenceHopping 0x%x
Line 7291: ###[NR_DEMOD] error!!! abnormal SrsResourceResourceType value
Line 7331: ###[NR_DEMOD] error!!! abnormal SrsSpatialRelationInfoReferenceSignal value
Line 7337: ###[NR_DEMOD] resourceType.choice 0x%x sequenceId 0x%x spatialRelationInfo.servingCellId 0x%x referenceSignal.choice 0x%x
Line 7398: ###[NR_DEMOD] error!!! abnormal SrsPeriodicityAndOffset value
Line 7401: ###[NR_DEMOD] %s, Periodicity 0x%x offset 0x%x
Line 7407: ###[NR_DEMOD] %s, BeamFailureRecoveryConfigPresentBitmask 0x%x %x
Line 7463: ###[NR_DEMOD] error!!! abnormal PrachResourceDedicatedBfr value
Line 7527: ###[NR_DEMOD] SetRsrpCalOffset: rx_path(%d), rf_path(%d), rf_band(%d), rsrp_offset(%d, %d, %d, %d)
Line 7568: ###[NR_DEMOD] GetRunningExtCmdReq fail [MEAS_CONFIG_NR_CMD]
Line 7625: ###[NR_RXFILTER] GetDemodCcIdx: scell_idx is not found in hal_rxf_path_info
Line 7633: ###[NR_RXFILTER] GetHalRxfPathInfo: invalid find_param(%d), arg(%d) 
Line 7637: ###[NR_DEMOD] GetDemodCcIdx:: find_param(%d), arg(%d), demod_cc(%d)
Line 7708: ###[NR_DEMOD_PROC] SetTdpConfig:: rx_path(%d), tdp_enable(%06x), cc(%d), div_cc(%d), rx_mode(%d)
Line 7711: ###[NR_DEMOD_PROC] SetTdpConfig:: td_buf_idx(%04x), mixer_path(%d), agc_path(%d), rfd_str_idx(%d), rfd_str_idx_div(%d)
Line 7820: ###[NR_DEMOD] SysParam_IPC:: None of SLO is configured
Line 7824: ###[NR_DEMOD] SysParam_IPC:: dmxr_freq_slo(%d), band(%d), rx_dl_freq(%d), rf_dl_freq(%d), ul_slo_offset(%d)KHz
Line 7844: ###[NR_DEMOD] SysParam_IPC:: PathMap-(0x%4x, Pri4/Div4), rx_mode(%d), td_buf_idx(%d %d), rfd_str_idx(%d %d)
Line 7923: ###[NR_DEMOD] SysParam_IPC:: mxr_agc_path(0x%4x-MXR4/AGC4), rxf_bw(%d), ssb_sc_offset(%d), FftStartOffset(%d), target_bwp_idx(%d), dl_freq(%d), rf_path(%d)
Line 7983: ###[NR_DEMOD] GetRunningExtCmdReq fail [SYS_PARAM_CHANGE_NR_CMD]
Line 8006: ###[NR_DEMOD] Sending SYS_PARAM_CHANGE_NR_CMD CB:: CmdInfo(%d), sync_type(%d), sys_bw(%d)
Line 8024: ###[NR_DEMOD] ProcScellConfig
Line 8048: ###[NR_DEMOD] SendScellConfigIpc
Line 8079: ###[NR_DEMOD] SetHalBwpActInfoDebug:: [%d] bwp_act_info (scell_idx_msb8/demod_cc_lsb8(0x%4x), scell_scs(%d), scell_bwp_idx(D-%d, U-%d),dl_offset(%d, %d))
Line 8104: ###[NR_DEMOD] GetHalBwpActInfo:: scell_idx(%d) is not found.
Line 8110: ###[NR_DEMOD] GetHalBwpActInfo:: scell_idx(%d), scell_hal_bwp_act_info[%d]{demod_cc(%d), scs(%d), dl_bwp_offset(bwp %d, ssboffset %d, fftoffset %d)}
Line 8142: ###[NR_DEMOD] SINR: MXR%d, SSB(%3d, %3d), CCH(%3d, %3d), SCH(%3d, %3d)
Line 8179: ###[NR_DEMOD] GetSinr : A wrong cc index(%d)
Line 8215: ###[NR_DEMOD] GetSinr : unexpected mode(%d)
Line 8252: [PHY] RF module(%d), rxbeam_idx(0x%x), txbeam_idx(0x%x) rsrp(%d), power(%d), temper(%d)
Line 8286: [PHY] CC0 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8295: [PHY] CC1 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8296: [PHY] CC2 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8297: [PHY] CC3 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8298: [PHY] CC4 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8299: [PHY] CC5 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8300: [PHY] CC6 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8301: [PHY] CC7 SLP : dlGrantRatio(3)/ulGrantRatio(3)/RbRatio(3) %d, AvgMCS(2)/AvgRank(1)/DLBler(3)/ULBler(3) %d, ResidualErrCnt/Ack2NackCnt %x, AverageTrbk %d, DLAggLev(2)/ULAggLev(2) %d, pdschTransportChTp %d, Arg %d
Line 8308: [PHY] CC0 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8309: [PHY] CC1 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8310: [PHY] CC2 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8311: [PHY] CC3 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8312: [PHY] CC4 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8313: [PHY] CC5 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8314: [PHY] CC6 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8315: [PHY] CC7 Demod : TxC01_03 %d, TxC12_23 %d, RxC01_03 %d, RxC12_23 %d, DSE %x, Dop %d, Afc %d
Line 8354: ###[TMU] Update NV Item for TMU Mode(%d) Period(%d), Hysteresis(%d), TriggerOffset(%d), Level1(%d), Level2(%d), Level3(%d)
Line 8356: ###[TMU] Update NV Item for RF Module Mode(%d), Hysteresis(%d), TriggerOffset(%d), Level1(%d), Level2(%d), Level3(%d)
Line 8396: ###[TMU] TMU TmuStatus(%d) 0xFF:Off
Line 8409: ###[TMU] TMU Temperatue(%d)(%d), RF Module Temperatue(%d)(%d)
Line 8449: ###[TMU] %d Error!! abnormal level statue OldOhcStLevel(%d) CurrentOhcStLevel(%d)
Line 8463: ###[TMU] %d Error!! abnormal level statue OldOhcStLevel(%d) CurrentOhcStLevel(%d)
Line 8471: ###[TMU] %d Error!! abnormal level statue OldOhcStLevel(%d) CurrentOhcStLevel(%d)
Line 8496: [ERROR] Msg Send fail : L1C_HAL_OVERHEATING_IND 
Line 8508: [ERROR] Msg Send fail : L1C_HAL_OVERHEATING_IND 
Line 8513: [ERROR] Msg Send fail : L1C_HAL_OVERHEATING_IND 
Line 8534: ###[NR_DEMOD] ProcRiCtlInd
Line 8541: ###[TMU] PHY_L1C_TMU_CTRL_IND controlOn(%d) RI(%d)
Line 8573: ###[TMU]RF Module (%d) Temperature (%d) ret(%d) 
Line 8577: ###[TMU]Abnormal RF Module Number(%d) Temperature (%d) ret(%d)
Line 8645: ###[NR_DEMOD] scell_idx(%d) is not found in scell_shm_idx_array
Line 8648: ###[NR_DEMOD] scell_idx(%d) is in scell_shm_idx_array[%d]
Line 8657: ###[NR_DEMOD] GetRunningExtCmdReq fail [LCPU_STORE_PHY_CFG_NR_CMD]
