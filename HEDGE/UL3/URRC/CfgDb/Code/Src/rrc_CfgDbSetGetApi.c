Line 80: [DB] ConfigDB is not Present
Line 300: [DB] Invalid URNTI at DbIndex[%d]
Line 321: [DB] Invalid CRNTI at DbIndex[%d]
Line 342: [DB][CV][ECELL_FACH] Clear C_RNTI_INFO_OK
Line 354: [DB][CV][ECELL_FACH] Clear H_RNTI_INFO_OK
Line 443: [ERROR] [DB] : RbId %d is NULL
Line 472: [ERROR] [DB] : RbId %d is NULL
Line 477: Update DetectedRlcSize : RbId %d, RlcSz %d
Line 748: [ERROR][DB] sameAsRbIdCount reached to maximum
Line 1083: [ERROR][DB] Wrong Trch Type: [%d] Received
Line 1142: [ERROR][DB] Wrong Trch Type: [%d] Received
Line 1338: [DB] Invalid TrchId at DbIndex[%d]
Line 1726: [ERROR][DB] RbId [%d] not present in config db
Line 1760: [ERROR][DB] Dl TrchId [%d] not present in config db
Line 1795: [ERROR][DB] Ul TrchId [%d] not present in config db
Line 1820: rrc_DbprepareRlInfoFromConfigDb: There is no DL RL Info in HHO so the previous RL info will be reused
Line 1898: [DB] Can't Calc UL RLC: Rbid %d
Line 2021: DLMsgDebug: UlTrchId %d, UlTrchType %d, RbId %d, UlRlcSize %d, UlMinWsn %d
Line 2169: [DB] DLMsgDebug: MsgDB UmRbId %d, UlRlcSize %d, DlRlcSize %d vs ConfigDB UmRbId %d, UlRlcSize %d, DlRlcSize %d
Line 2178: [DB] UmRlcAnalysis: DlUmRlcSzModRbBitmask=0x%x, UlUmRlcSzModRbBitmask=0x%x
Line 2206: DLMsgDebug: AmRbId %d, DlRlcSzWasKnownToRrc %d
Line 2209: DLMsgDebug: [MsgDB] DlRlcType %d, DlRlcSize %d, DlRlcLI %d vs [ConfigDB] DlRlcType %d, DlRlcSize %d, DlRlcLI %d
Line 2323: DLMsgDebug: RbId %d, DLSizeChanged %d
Line 2339: DLMsgDebug: [MsgDB] AmRbId %d, UlRlcSize %d, UlMinWsn %d vs [ConfigDB] AmRbId %d, UlRlcSize %d, UlMinWsn %d
Line 2349: AmRlcAnalysis: DlAmRlcSzModRbBitmask=0x%x, UlAmRlcSzModRbBitmask=0x%x, AmUlMinWsnModRbBitmask=0x%x
Line 2384: [DB] calcStartValueNeed: RbIdBitMask=0x%x
Line 2456: DlMsgDebug: StartValueCalcRequiredForRlcSizeChange, *csNeeded = %d, *psNeeded = %d
Line 2534: [ERROR] Wrong ChnlType: [%d] Received
Line 2568: [ERROR] Wrong ChnlType: [%d] Received
Line 2607: tfciCounter=%d, ChnlType = %d, IETR_TFCS_UL_DCH = %d 
Line 2620: rrc_DbsetCtfcCountAndSizeByChType: numOfDlCtfcToAdd  = %d
Line 2770: [ERROR] Wrong ChnlType: [%d] Received
Line 2963: dlCtfcTfciArray[%d] = %d
Line 2975: TFCS for DL same as UL, But UL parameters areNOT received in this msg. this->ie_tfcsPtr is NULL
Line 3108: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3145: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3184: [DB] [ERROR] Mapping not selected for RB[%d]
Line 3303: [DB] 10.3.6.24 Dl Rl Common Info [Not Present]
Line 3313: [DB] 10.3.6.88 Uplink DPCH Info [Not Present]
Line 3318: [DB] 10.3.6.27 Dl Info For Each Rl [Not Present]
Line 3425: [FAIL] dlTrchCount(%d) > capMaxDl(%d) or ulTrchCount(%d) > capMaxUl(%d)
Line 3778: [DB]  E-RNTI
Line 3783: [DB]  E-RNTI (Status : Changed)
Line 3798: [DB]  E-RNTI (Status : Unchanged, PriErnti(0x%x))
Line 3808: [DB]  E-RNTI (Status : Unchanged, SecErnti(0x%x))
Line 3814: [DB]  E-RNTI is OK
Line 3844: [DB]  E-DCH TTI
Line 3856: [DB]  E-DCH TTI (Status : Unchanged)
Line 3863: [DB]  E-DCH TTI (Status : Changed)
Line 3872: [DB]  E-DCH TTI (Status : Unchanged, TTI(%dmsec))
Line 3875: [DB]  E-DCH TTI is OK
Line 3881: [DB]  E-DPDCH (Convert periodForSchedInfoNoGrant)
Line 3887: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d))
Line 3891: [DB]  E-DPDCH (Convert periodForSchedInfoGrant)
Line 3897: [DB]  E-DPDCH (periodForSchedInfoGrant(%d))
Line 3904: [DB]  E-DCH TTI : edchInst is NULL
Line 3931: [DB]  E-DCH HARQ
Line 3940: [DB]  E-DCH HARQ (Status : Unchanged)
Line 3945: [DB]  E-DCH HARQ (Status : Changed)
Line 3954: [DB]  E-DCH HARQ (Status : Unchanged, HARQ(%d))
Line 3957: [DB]  E-DCH HARQ is OK
Line 3962: [DB]  E-DCH HARQ : edchInst is NULL
Line 3989: [DB]  E-DPCCH
Line 3998: [DB]  E-DPCCH (by ASU)
Line 4004: [DB]  E-DPCCH (Status : Unchanged)
Line 4019: [DB]  E-DPCCH (Status : Changed (PwrOffset Only))
Line 4023: [DB]  E-DPCCH ( happyBitDelay(%d))
Line 4027: [DB]  E-DPCCH is OK
Line 4031: [DB]  E-DPCCH (by no ASU)
Line 4038: [DB]  E-DPCCH (Status : Unchanged)
Line 4046: [DB]  E-DPCCH (Status : Changed, PwrOffset)
Line 4051: [DB]  E-DPCCH (Status : Changed, HappyBitDelay)
Line 4056: [DB]  E-DPCCH (Status : Changed, PwrInterpolation)
Line 4070: [DB]  E-DPCCH (Status : Unchanged, PwrOffset(%d), happyBitDelay(%d), PwrInterpolation(%d))
Line 4073: [DB]  E-DPCCH is OK
Line 4078: [DB]  E-DPCCH : edpcchInst is NULL
Line 4108: [DB]  E-DPDCH
Line 4128: [DB] [CV]	 [Prepare from DB] E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), minReducedGainFactor(%d))
Line 4130: [DB] [CV]	 [Prepare from DB] E-DPDCH (maxChCode(%d), plNonMax(%d))
Line 4181: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 4187: [DB] 						RefEtfci : %d, refEtfciPo : %d
Line 4191: [DB]  E-DPDCH (reportNoGrant(%d), reportGrant(%d))
Line 4193: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d), periodForSchedInfoGrant(%d))
Line 4199: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 4204: [DB]  E-DPDCH (use pwrOffsetSchedInfo(%d) from IE)
Line 4211: [DB]  E-DPDCH (threeIndexStepThreshold(%d))
Line 4216: [DB]  E-DPDCH (use threeIndexStepThreshold(%d) from IE)
Line 4223: [DB]  E-DPDCH (twoIndexStepThreshold(%d))
Line 4228: [DB]  E-DPDCH (use twoIndexStepThreshold(%d) from IE)
Line 4236: [DB]  E-DPDCH (Status : Changed)
Line 4244: [DB]  E-DPDCH (Status : Unchanged)
Line 4255: [DB]  E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), minReducedGainFactor(%d))
Line 4257: [DB]  E-DPDCH (maxChCode(%d), plNonMax(%d))
Line 4261: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 4267: [DB] RefEtfci : %d, refEtfciPo : %d
Line 4309: [DB]  E-DPDCH (reportNoGrant(%d), reportGrant(%d))
Line 4311: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d), periodForSchedInfoGrant(%d))
Line 4313: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 4315: [DB]  E-DPDCH (threeIndexStepThreshold(%d), twoIndexStepThreshold(%d))
Line 4318: [DB]  E-DPDCH is OK
Line 4323: [DB]  E-DPDCH : edpdchInst is NULL
Line 4354: [DB]  Serving E-DCH RL
Line 4359: [DB]  Serving E-DCH RL (old servingCpich (%d))
Line 4366: [DB]  Serving E-DCH RL : new & old priCpich are same
Line 4372: [DB]  Serving E-DCH RL (Status : Unchanged)
Line 4377: [DB]  Serving E-DCH RL (Status : Changed)
Line 4383: [DB]  Serving E-DCH RL (prev agchAct (%d), prev hichAct (%d), prev rgchAct (%d))
Line 4389: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 4397: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4405: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4408: [DB]  Serving E-DCH RL (post agchAct (%d), post hichAct (%d), post rgchAct (%d))
Line 4418: [DB]  Serving E-DCH RL (Status : Changed, priCpich(0x%x)))
Line 4422: [DB]  Serving E-DCH RL (by ASU)
Line 4433: [DB]  Serving E-DCH RL (non-serving RL to Serving E-DCH RL)
Line 4442: [DB]  Serving E-DCH RL (get HICH info from RL Addition Info)
Line 4452: [DB]  Serving E-DCH RL (get RGCH info from RL Addition Info)
Line 4467: [DB]  Serving E-DCH RL (get HICH info from DB)
Line 4469: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4476: [DB]  Serving E-DCH RL (get RGCH info from DB)
Line 4478: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4488: [DB]  Serving E-DCH RL (Status : Unchanged)
Line 4496: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 4498: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4505: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4512: [DB]  Serving E-DCH RL (agchAct (%d), hichAct (%d), rgchAct (%d))
Line 4516: [DB]  Serving E-DCH RL is OK
Line 4696: [DB]  remove Serving E-DCH RL
Line 4724: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4733: [DB]  Non-Serving E-DCH RL (set Old hichChCode (%d), hichSignSeq (%d) to New Info)
Line 4746: [DB]  Non-Serving E-DCH RL (release Non-serving cell (priCpich (0x%x) by ehich release))
Line 4757: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 4759: [DB]  Non-Serving E-DCH RL (New Non-serving cell is equal to Old serving cell (priCpich(0x%x)))
Line 4769: [DB]  Non-Serving E-DCH RL (release Non-serving cell (priCpich (0x%x) by ehich release))
Line 4777: [DB]  Non-Serving E-DCH RL (use old serving cell info (ehichChCode (%d), ehichSignSeq (%d)))
Line 4787: [DB]  Non-Serving E-DCH RL (use old serving cell info (ergchSignSeq (%d), ergchCombIndex (%d)))
Line 4799: [DB]  Non-Serving E-DCH RL (Invalid Non-serving cell configuration (priCpich (0x%x)))
Line 4857: [DB]  Non-Serving E-DCH RL (Status : Unchanged, priCpich (0x%X))
Line 4862: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 4870: [DB] 	Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 4877: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 4920: [DB]  Non-Serving E-DCH RL (Old servingCpich (0x%x))
Line 4930: [DB]  Non-Serving E-DCH RL (Old serving eagchChCode (%d), hichChCode (%d), hichSignSeq (%d))
Line 4936: [DB]  Non-Serving E-DCH RL (Old serving ergchSignSeq (%d), ergchCombIndex (%d))
Line 4954: [DB]  Non-Serving E-DCH RL (Old Non-serving count (%d))
Line 4967: [DB]  Non-Serving E-DCH RL (Old non-servingCpich (0x%x))
Line 4969: [DB]  Non-Serving E-DCH RL (Old non-serving hichChCode (%d), hichSignSeq (%d))
Line 4975: [DB]  Non-Serving E-DCH RL (Old non-serving ergchSignSeq (%d), ergchCombIndex (%d))
Line 5003: [DB]  Non-Serving E-DCH RL (New Non-serving cell is equal to Old Non-serving cell (priCpich(0x%x)))
Line 5045: [DB]  Non-Serving E-DCH RL (Status : Changed, priCpich (0x%X))
Line 5050: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 5058: [DB]   Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 5065: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 5072: [DB]  Non-Serving E-DCH RL : All RLs are replaced (HHO)
Line 5142: [DB] invalid Periodicity for Scheduling Info = %d
Line 5173: [DB] Set E-RNTI (isPriErnti(%d), PriErnti( 0x%x), isSecErnti(%d), SecErnti(0x%x))
Line 5670: [DB] GetRemainingEdchActiveSet: [fail] - PcpichScrCode > 511
Line 5679: [DB] GetRemainingEdchActiveSet: [success] - found P-CPICH scrambling code = %d
Line 5693: [DB] GetRemainingEdchActiveSetCount
Line 5711: [DB] Class_GetRemainingEdchActiveSetInst: [fail] - Index > Asn_maxEDCHRL+2
Line 5718: [DB] Class_GetRemainingEdchActiveSetInst: [success] - found RemainingEdchActiveSetInst [Index(%d), Cpich(0x%x)]
Line 5757: [DB] DLMsgDebug: Hsupa Rbid %d, UlRlcSize %d
Line 5783: [DB][CV][ECELL_FACH] H_RNTI_INFO_OK
Line 5873: [DB][CV][ECELL_FACH] CELL_FACH_OK
Line 5877: [DB][CV][ECELL_FACH] No CELL_FACH
Line 5885: [DB]  currently not implemented
Line 5979: [DB][CV][ECELL_FACH] DB H_RNTI_INFO_OK
Line 6240: [DB][CV][ECELL_FACH] MAC_EHS_Q_INFO_OK
Line 6397: [DB][CV][ECELL_FACH] HARQ_OK
Line 6411: [DB][CV][ECELL_FACH] HARQ_FROM_SIB5_OK
Line 6968: >> Start preparing HSDPA info from ConfigDB <<
Line 7013: >> End preparing HSDPA info from ConfigDB <<
Line 7561: Checking HSDSCH reception 
Line 7573: [DB] HS_DSCH_RECEPTION is OK (%x)
Line 7578: [DB] HS_DSCH_RECEPTION is not OK (%x)
Line 7619: EDCH_TRANSMISSION_TDD_NONSHED is OK (%x)
Line 7624: EDCH_TRANSMISSION_TDD_SHED is OK (%x)
Line 7629: EDCH_TRANSMISSION_TDD_SHEDNONSCHED_OK is OK (%x)
Line 7638: [DB] E_DCH_TRANSMISSION is OK (%x)
Line 7643: [DB] E_DCH_TRANSMISSION is not OK (%x)
Line 7707: [DB] DL_SECONDARY_HS_DSCH_RECEPTION is OK (%x) for cell %d
Line 7714: [DB] DL_SECONDARY_HS_DSCH_RECEPTION is not OK (%x), CellConfigStatus (%d) for cell %d
Line 7773: [DB] DL_SECONDARY_CELL_DCH_OK
Line 7952: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is IMPLICIT 
Line 7956: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is EXPLICIT 
Line 8244: [DB] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 8254: [DB] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 8356: [DB] DlSecTsnFieldExtConfigStatus OK
Line 8361: [DB] DlSecTsnFieldExtConfigStatus NOT OK
Line 8688: [DB] RL count reached to max for DB: [%u]
Line 8693: [DB] Invalid Rl Type: [%u] Received for DB: [%u]
Line 8722: [DB] No of RLs: [%u] in DB: [%u], yet no free Index
Line 8797: [DB] Pcpich: [%u], not present in Config DB
Line 8839: [DB] New RL is added with PSC : [%u], in DB: [%u], at RlIndex: [%u], TotalRLs: [%d]
Line 8867: [DB] New RL is added with PSC : [%u], in DB: [%u], at RlIndex: [%u], TotalRLs: [%d]
Line 8916: [DB] There is no DL RL Info list from N/W so Old RLs were used
Line 9068: [DB] RL count reached to max for DB: [%u]
Line 9094: [DB] New RL is added From Source DB: [%u] in Target DB:[%u] with PSC : [%u], at RlIndex: [%u], TotalRLs in Target DB: [%d]
Line 9128: [DB] New RL is added From Source DB: [%u] in Target DB:[%u] with PSC : [%u], at RlIndex: [%u], TotalRLs in Target DB: [%d]
Line 9144: [DB] Invalid RL type received for PSC: [%u], DB: [%u]
Line 9182: [DB] [CV] DL_SECONDARY_H_RNTI_OK for cell %d
Line 9200: [DB] dl64QAMConfigured= %d for cell %d
Line 9218: [DB] [CV] DL_SECONDARY_HS_DSCH_CELL_OK for cell %d
Line 9219: [DB] SecondaryHsdschCellStatus->primaryCpich = %u 
Line 9254: [DB] [CV] DL_SECONDARY_HS_SCCH_INFO_OK for cell %d
Line 9271: [DB] dlTxDivFromServHsdschCellConfiguredStatus = %d 
Line 9289: [DB] [CV] DlSecCellInfo_addIeSecCellDlUarfcn = %d of cell %d
Line 9306: [DB] measurementPowerOffset = %d 
Line 9308: [DB] [CV] DL_SECONDARY_MEAS_POWER_OFFSET_INFO_OK for cell %d
Line 9400: [DB] invalid E-DCH TTI
Line 9429: [DB]  E-DPDCH (Convert periodForSchedInfoNoGrant)
Line 9435: [DB]  E-DPDCH (periodForSchedInfoNoGrant(%d))
Line 9439: [DB]  E-DPDCH (Convert periodForSchedInfoGrant)
Line 9445: [DB]  E-DPDCH (periodForSchedInfoGrant(%d))
Line 9501: [DB]  Serving E-DCH RL
Line 9504: [DB]  Serving E-DCH RL (priCpich (0x%x))
Line 9506: [DB]  Serving E-DCH RL (isAgch (%d), hichAct (%d), rgchAct (%d))
Line 9513: [DB]  Serving E-DCH RL (eagchChCode (%d))
Line 9521: [DB]  Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 9529: [DB]  Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 9536: [DB]  Serving E-DCH RL is OK
Line 9592: [DB]  Serving E-DCH RL is OK and All Information Taken from ConfigDb
Line 9597: [DB] Received Serving E-DCH RL Cpich is different from ConfigDb
Line 9671: [DB] invalid Happy Bit Delay Condition
Line 9690: [DB]  E-DPCCH
Line 9705: [DB]  E-DPCCH (PwrOffset(%d), happyBitDelay(%d))
Line 9719: [DB]  E-DPCCH (by ASU, PwrOffset(%d) Only)
Line 9725: [DB]  E-DPCCH is OK
Line 9750: [DB]  E-DPDCH (partial : by ASU)
Line 9757: [DB]  E-DPDCH (RefEtfciInfo(num:%d))
Line 9763: [DB] RefEtfci : %d, refEtfciPo : %d
Line 9774: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d))
Line 9782: [DB]  E-DPDCH (threeIndexStepThreshold(%d))
Line 9790: [DB]  E-DPDCH (twoIndexStepThreshold(%d))
Line 9824: [DB]  Non-Serving E-DCH RL
Line 9834: [DB]  Non-Serving E-DCH RL (priCpich (0x%x))
Line 9836: [DB]  Non-Serving E-DCH RL (hichAct (%d), rgchAct (%d))
Line 9843: [DB]  Non-Serving E-DCH RL (ehichChCode (%d), ehichSignSeq (%d))
Line 9851: [DB]  Non-Serving E-DCH RL (ergchSignSeq (%d), ergchCombIndex (%d))
Line 9873: [DB]  E-DPDCH
Line 9884: [DB]  E-DPDCH (etfciTableIndex(%d), edchMinSetEtfci(%d), (RefEtfciInfo(num:%d))
Line 9891: [DB] 						RefEtfci : %d, refEtfciPo : %d
Line 9898: [DB]  E-DPDCH (maxChCode(%d), plNonMax(%d), reportNoGrant(%d), reportGrant(%d))
Line 9904: [DB]  E-DPDCH (asnPeriodicityNoGrant(%d))
Line 9911: [DB]  E-DPDCH (asnPeriodicityGrant(%d))
Line 9925: [DB]  E-DPDCH (pwrOffsetSchedInfo(%d), threeIndexStepThreshold(%d), twoIndexStepThreshold(%d), minReducedGainFactor(%d))
Line 9930: [DB]  E-DPDCH is OK
Line 10053: [BAND changed] OLD(%d) -> NEW(%d)
Line 10060: SendUrrcMmScellAsInfoInd : BandId(%d), Uarfcn(%d), RrcState(%d)
Line 10064: Wrong UARFCN(%d), BandId(%d) were detected so it won't be updated to SIPC
Line 10281: Number of UL DPDCHs is ZERO, and UL DCH [%d] has NonZero data rate
Line 10287: Number of UL DPDCHs is ZERO, and UL DCH [%d] has Zero data rate
Line 10623: [DB] invalid CQI Feedback Cycle=%d
Line 10921: [DB] set compModeInfoArrayIdx[%d], Tgpsi[%d]
Line 10925: [DB] Invalid ArrayIndex %d
Line 11231: [DB] invalid T1=%d
Line 11274: [DB] invalid MAC-hs window size=%d
Line 11297: [DB] invalid Treset=%d
Line 11331: [DB][CV][ECELL_FACH] MAC_EHS_Q_INFO_OK
Line 11409: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is IMPLICIT 
Line 11413: [DB] DL_SECONDARY_HARQ_INFO_OK as memPartitioningType is EXPLICIT 
Line 11472: [DB][CV][ECELL_FACH] HARQ_INFO_OK
Line 11573: [ERROR][DB] All Rab Index Occupied, Db Index: [%u]
Line 11576: [ERROR][DB] Total Rab count: [%u], But No Free RAB Index Db Index: [%u]
Line 11723: [DB] msgAsn1Check: signalling connection doesnt exist for RAB
Line 11731: [DB] msgAsn1Check: RAB [%d] CN domain discrepancy
Line 11773: [ERROR][DB] Invalid RL-Type [%d] in config Db
Line 11788: [DB] PSC(%d) is included in MsgDB instead of ConfigDB
Line 11799: [DB] IgnorableCellIncluded: PSC(%d) is not included in ActiveSet
Line 11847: [ERROR][DB] Invalid RL-Type [%d] in config Db
Line 11909: [DB] rrc_DbmsgProcessCheckRlCmnInfo TDD mode
Line 11928: [DB] msgProcess: 8.3.5.1.2 - Default DPCH Offset Value missing
Line 11946: [DB] msgProcess: 8.3.5.1.2 - relation failure
Line 11955: [DB] msgProcess: 8.3.5.1.2 - relation failure
Line 11961: [DB] msgProcess: 8.3.5.1.2 - DPCH instance missing
Line 11967: [DB] msgProcess: 8.3.5.1.2 - Per RL instance missing
Line 11994: [DB] msgProcess: 8.3.5.1.2 - Default DPCH Offset Value missing
Line 12002: [DB] rrc_DbmsgProcessCheckRlCmnInfo not a valid mode
Line 12067: DlMsgDebug: IsCipheringAndTmActive, *csDomain = %d, *psDomain = %d
Line 12091: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12103: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12121: DlMsgDebug: StartValueCalcRequiredForRbSetup, cnDom = %d
Line 12163: DlMsgDebug: DetermineAffectedCnDomains, *csDomain = %d, *psDomain = %d
Line 12462: [DB] RB::GetRlcCipheredSrbList
Line 12467: [DB] RB::GetRlcCipheredSrbList: [fail] - no security manager
Line 12472: [DB] RB::GetRlcCipheredSrbList: [fail] - different domain types
Line 12498: [DB] RB::GetRlcCipheredSrbList: [success]
Line 12511: [DB] RB::GetRlcCipheredRbList
Line 12515: [DB] RB::GetRlcCipheredRbList: [success] - TM only
Line 12545: [DB] RB::GetRlcCipheredRbList: [success] - AM or UM
Line 12552: [DB] RB::GetRlcCipheredRbList: [fail] - wrong CnDomainId
Line 12576: [DB] Db Commit, RL Context Moved From Index: [%u], to Index: [%u]
Line 12594: [ERROR][DB] No RL Info present at RL Index [%d] in config Db
Line 12600: [ERROR][DB] Invalid RL Type [%d] present in Db
Line 12619: [DB] Db Commit, RAB Context Moved From Index: [%u], to Index: [%u]
Line 12628: [ERROR][DB] No RAB Info present at Rab Index [%d] in config Db
Line 12984: getHarqMemSize=%d
Line 13333: [DB] L2uCandiCellInfo: WARNING - No matching PSC, Target (%d) vs. L2U (%d)
Line 13339: [DB] L2uCandiCellInfo: WARNING - No matching UARFCN, Target (%d) vs. L2U (%d)
Line 13347: [DB] Number of candidate cells from LTE info is zero (%d) or invalid UARCN (%d)
Line 13358: [DB] L2uCandiCellInfo: [Country Info %d, HO type %d] Set IgnoreSttd to TRUE
Line 13364: [DB] L2uCandiCellInfo: [Country Info %d, HO type %d] Set IgnoreSttd to FALSE
Line 13424: rrc_DbphEdchInfo_ProcessOptionality called
Line 13459: rrc_DbphDlRlInfo_ProcessOptionality called
Line 13479: [ERROR][DB] PrimaryCpich: [%d] not present in Msg Db
Line 13500: rrc_DbphDlSecondaryCellInfo_ProcessOptionality called
Line 13545: rrc_DbphFreqInfo_ProcessOptionality called
Line 13561: rrc_DbphRLAdditionInfo_ProcessOptionality called
Line 13597: rrc_DbphDlDpchInfoCmnRl_ProcessOptionality called
Line 13609: rrc_DbphDlRlCmnInfo_ProcessOptionality called
Line 13631: rrc_DbphServingHsdschInfo_ProcessOptionality called
Line 13681: rrc_DbrbMapInfo_ProcessOptionality called
Line 13711: RB[%d] Mapping from ConfigDB
Line 13733: rrc_DbrbPdcpInfo_ProcessOptionality called
Line 13754: rrc_DbrbRlcInfo_ProcessOptionality called
Line 13774: rrc_DbrbSigSetInfoList_ProcessOptionality called
Line 13795: rrc_DbrbSetInfoList_ProcessOptionality called
Line 13818: rrc_DbrbInfoAffList_ProcessOptionality called
Line 13838: rrc_DbrbRabInfo_ProcessOptionality called
Line 13845: rrc_DbtrChUlAddOrReconInfo_ProcessOptionality called
Line 13871: rrc_DbtrChDlAddOrReconInfo_ProcessOptionality called
Line 13886: rrc_DbtrTfcs_ProcessOptionality called
Line 14279: [DB] getAllActiveAmUmDrbs: [fail] - DrbIdAr is NULL
Line 14302: [DB] getAllActiveAmUmDrbs: [fail] - DRB Id = %d has been stopped
Line 14314: [DB] getAllActiveAmUmDrbs: [success] - DrbId = %d inserted
Line 14374: [DB] rrc_DbgetAllActiveAmUmDrbsForDomain: [fail] - DRB Id = %d has been stopped
Line 14386: [DB] rrc_DbgetAllActiveAmUmDrbsForDomain: [success] - DrbId = %d inserted
Line 14410: [DB] rrc_DbgetAllActiveAmUmDrbsForCsDomain
Line 14414: [DB] DB::getAllActiveAmUmDrbsForCsDomain: [fail] - DrbIdArr is NULL
Line 14440: [DB] rrc_DbgetAllActiveAmUmDrbsForPsDomain
Line 14444: [DB] DB::getAllActiveAmUmDrbsForPsDomain: [fail] - DrbIdArr is NULL
Line 14517: [DB] rrc_DbIsT315Rab
Line 14535: [DB] rrc_DbIsT314Rab
Line 14559: [DB] rrc_DbCalcUlDCHMaxUplinkTti
Line 14566: [DB] CalcUlDCHMaxUplinkTti: [not available] - UlTrChCount is 0
Line 14588: [DB] CalcUlDCHMaxUplinkTti: [success] - max UL TTI = %d
Line 14614: [DB] rrc_DbCalcDlDCHMaxUplinkTti
Line 14621: [DB] CalcDlDCHMaxUplinkTti: [not available] - UlTrChCount is 0
Line 14643: [DB] CalcDlDCHMaxUplinkTti: [success] - max UL TTI = %d
Line 14668: [DB] rrc_DbCalcTrChMaxUpLinkDownLinkTti
Line 14675: [DB] CalcTrChMaxUpLinkDownLink HS-DSCH TTI: [success]  = %d
Line 14680: [DB] CalcTrChMaxUpLinkDownLink: [fail] - could not get max DL TTI
Line 14688: [DB] CalcTrChMaxUpLinkDownLink E-DCH TTI: [success]  = %d
Line 14693: [DB] CalcTrChMaxUpLinkDownLink: [fail] - could not get max UL TTI
Line 14706: [DB] CalcTrChMaxUpLinkDownLink: [success] - max TTI = %d
Line 14749: [DB] rrc_DbgetCpichsForAllFdpchRls
Line 14760: [DB] rrc_DbgetCpichsForAllFdpchRls: [success] - DlFdpchRadioLinkCount = 0
Line 14775: [DB] rrc_DbgetCpichsForAllFdpchRls: [success]
Line 14807: [DB] rrc_DbgetIsDlFdpchRlExistforPSC: [fail] - PcpichScrCode > 511
Line 14820: [DB] rrc_DbgetIsDlFdpchRlExistforPSC: [success] - found P-CPICH scrambling code = %d
Line 14875: [DB] rrc_DbgetCpichsForAllRls: [success] - DlRadioLinkCount = 0
Line 14890: [DB] rrc_DbgetCpichsForAllRls: [success]
Line 14922: [DB] rrc_DbgetIsDlRlExistforPSC: [fail] - PcpichScrCode > 511
Line 14935: [DB] rrc_DbgetIsDlRlExistforPSC: [success] - found P-CPICH scrambling code = %d
Line 15075: [DB]  [ECELL_FACH] [CV] prepareCommonHsdschIeFromConfigDb
Line 15081: [DB][CV][ECELL_FACH] HSDSCH_COMMON_SYSINFO_IE_OK
Line 15082: [DB][CV][ECELL_FACH] HARQ_FROM_SIB5_OK
Line 15089: [DB][CV][ECELL_FACH] HsDschCmnSysInfo Not present
Line 15094: [DB][CV][ECELL_FACH] SIB5 Not present
Line 15111: [DB][CV][ECELL_FACH] C_RNTI_INFO_OK
Line 15115: [DB][CV][ECELL_FACH] No C_RNTI_INFO
Line 15147: [DB][CV][ECELL_FACH] HS_DSCH_RECEPTION_CELL_FACH_STATE is OK (0x%X)
Line 15154: [DB][CV][ECELL_FACH] HS_DSCH_RECEPTION_CELL_FACH_STATE is not OK (0x%X), IsECellFachSupported %d
Line 15223: [DB] [ECELL_FACH_DRX] [CV] HS_DSCH_DRX_CELL_FACH_STATUS is OK
Line 15228: [DB] [ECELL_FACH_DRX] [CV] HS_DSCH_DRX_CELL_FACH_STATUS is not OK 
Line 15230: [DB] [ECELL_FACH_DRX] [CV] IsECellFachDrxSupportedByUE[%d], IsTargetStateCellFach[%d],IsDedicatedHrntiConfigured[%d]
Line 15232: [DB] [ECELL_FACH_DRX] [CV] IsECellFachDrxSupportedOnServCell[%d], IsDrxInterruptionbyhsdsch[%d]
Line 15367: [DB][CV][ECELL_FACH] requestMachsReset
Line 15371: [DB][CV][ECELL_FACH] No requestMachsCommonReset
Line 15387: rrc_DbtrChHarqInfo_ProcessOptionality called
Line 15426: [DB][CV][ECELL_FACH] Clear HARQ_OK
Line 15462: SameAsRbId %d is not found in MsgDB or ConfigDB
Line 15492: Rlc Mode Not correct for RbId: [%d]
Line 15501: Rlc Mode Not correct for RbId: [%d]
Line 15510: Rlc Mode Not correct for RbId: [%d]
Line 15519: Rlc Mode Not correct for RbId: [%d]
Line 15555: No Mapping info in IE for Ul for Rb [%d]
Line 15560: No Mapping info in IE for Ul for Rb [%d]
Line 15565: No of UL logical channel is 2 for Rb [%d]
Line 15570: No of DL logical channel is 2 for Rb [%d]
Line 15575: No of DL logical channel is 2/Ul RLC Modeis UM for Rb [%d]
Line 15591: rrc_DbrbRbInfoReconList_ProcessOptionality called
Line 15619: [DB] error in Old HS-DSCH Configuration Status
Line 15637: [DB] error in Old E-DCH Configuration Status
Line 15656: [DB] error in Old MAC-EHS HS-DSCH Configuration Status
Line 15674: [DB] error in Old MAC-HS HS-DSCH Configuration Status
Line 15723: [DB] No RL exists in Config DB
Line 15732: [DB] primaryCpich %d, globalCellId 0x%x
Line 15751: [DB] Invalid RL Type %d
Line 15768: [DB] No RL exists in Config DB
Line 15794: [DB] Invalid RL Type %d
Line 15799: [DB] primaryCpich %d, globalCellId 0x%x
Line 15935: [DB]  E-RUCCH
Line 15942: [CB] E-RUCCH : OK
Line 15952: [DB]  E_RUCCH_OK
Line 15958: [CB] E-RUCCH : Config-DB NOT VALID
Line 16079: [CB]  E-PUCH
Line 16086: [CB] E-PUCH : OK
Line 16098: [CB] E-PUCH : msgDbIndex is NOT VALID
Line 16171: [DB] Non-scheduled transmission grant info
Line 16209:  E_NONSHE_TX_GRANT_OK 
Line 16214: [CB] Non-scheduled Tx Grant info: msgDbIndex is NULL
Line 16270: [CB]  E-HICH
Line 16278: [CB] E-HICH : OK
Line 16292:  EDCH_HICH_TDD_OK 
Line 16298: [CB] E-HICH : DB info  is NOT VALID
Line 16322: [DB]  E-AGCH
Line 16329: [CB] E-AGCH : OK
Line 16343: [DB]  E-AGCH is OK
Line 16347: [DB]  E-AGCH DB is INVALID
Line 16353: [DB]  E-AGCH : eagchInst is NULL
Line 16653: rrc_DbprepareHsdpaHsscchTddFromConfigDb:	hsdpaDb_p->hsscchPowerInfoTdd.AckNackPowerOffset %d,hsdpaDb_p->hsscchPowerInfoTdd.pwrLevelHsSich %d
Line 16655: rrc_DbprepareHsdpaHsscchTddFromConfigDb: hsdpaDb_p->hsscchPowerInfoTdd.TpcstepSize %d ,hsdpaDb_p->hsscchPowerInfoTdd.BlerTarget %d
Line 16657: rrc_DbprepareHsdpaHsscchTddFromConfigDb:hsdpaDb_p->hsscchPowerInfoTdd.PowercontrolGap %d ,hsdpaDb_p->hsscchPowerInfoTdd.isPowercontrolGap %d 
Line 16659: rrc_DbprepareHsdpaHsscchTddFromConfigDb:hsdpaDb_p->hsscchPowerInfoTdd.ispathlossCompensationSwitch %d
Line 16673: rrc_DbprepareHsdpaHsscchTddFromConfigDb:HsScch Info taken from IE: STAT CHANGED
Line 16678: rrc_DbprepareHsdpaHsscchTddFromConfigDb:HsScch Info taken from IE: hsdpaDb_p ->hsscchSetCount = %d
Line 16687: rrc_DbprepareHsdpaHsscchTddFromConfigDb: hsdpaDb_p ->hsscchSetCount = %d
Line 16904: [DB] set rrc_DbTDPCHInfoSetTimingAdvance[%d]
Line 16932: [DB] HSPA / HSDPA configured 
Line 16937: [DB] HSPA / HSDPA  not configured 
Line 17121: rrc_TDbTDPCHInfoSetNumUlCCTrChToAdd [%d]
Line 17143: uppchPosInfo [%d]
Line 17170: rrc_DbSetDlTdpch_DlCCTrchInfo numCCTrCHtoAdd[%d], numCCTrCHtoRemove[%d]
Line 17327: rrc_DbSetHsupaEPuchEtfcsInfo qpskListCount [%d] wrong
Line 17344: rrc_DbSetHsupaEPuchEtfcsInfo qamListCount [%d] wrong
Line 17441: Error: SetEpuchTSConfigList::numOfEpuchTsConfig = %d
Line 17650: Error: SetEpuchTSConfigList::PrachInfoIdx = %d
Line 17680: Error: SetEpuchTSConfigList::PrachInfoIdx = %d
Line 17708: Error: SetEpuchTSConfigList::PrachInfoIdx = %d
Line 17734: [CV] [Prepare from IE] => EAGCH
Line 17769:  [CV] [Prepare from IE] => EAGCH SetConfig
Line 17805:  [CV] [Prepare from IE] => EHICH
Line 17838:  [CV] [Prepare from IE] => EHICH
Line 17977: [DB] rrc_DbSetPccpchInfo: CellParamId = %d, SCTDindicator = %d, TSTDIndicator = %d
Line 18010: [DB] rrc_DbSetHsupaPccpchInfo: CellParamId = %d, SCTDindicator = %d, TSTDIndicator = %d
Line 18140: Rl DB Invalid (CfgDb %, MsgDb %d)
Line 18179: [DB] DbIdx %d, numOfRl == 0
Line 18203: [DB] DbIdx %d, numOfRl == 0
