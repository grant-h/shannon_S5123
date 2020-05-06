Line 102: rrc_CUPHY_UMTS_RATMode_REQ_setParams : AgapCgiMode set to %d
Line 174:  Number of Freqs set to %d in Blind Freq Scan Req ILM
Line 197:  Adding Freq %d to Blind Ferq Scan Req ILM
Line 201: TheFreqInfoIndx[0x%x] >= numOfFreqToAdd[0x%x]
Line 280: [URRC BCH in DCH]  rrc_CUPHY_BCHResConf_REQ_setParams: IsDCH = %d
Line 292: rrc_CUPHY_BCHResConf_REQ_setParams: isDBchEnabled = %d
Line 310: ==============CUPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 311: dlUarfcn = %d
Line 312: primaryScrCode = %d
Line 313: bchId = %d
Line 314: IsBPLMN = %d
Line 315: MibRepFactor = %d
Line 316: isDBchEnabled = %d
Line 319: ==============CUPHY_BCH_RESOURCES_CONFIG_REQ=================
Line 323: ==============CUPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 324: MibRepFactor = %d
Line 326: ==============CUPHY_BCH_RESOURCES_MODIFY_REQ=================
Line 331: NoOfSIBsToAdd = %d
Line 334: SIBAddInfo[%d].SIBType = %d
Line 335: SIBAddInfo[%d].SegCount = %d
Line 337: SIBAddInfo[%d].SibPos[%d] = %d
Line 338: SIBAddInfo[%d].SibRep = %d
Line 340: NoOfSIBsToCancel = %d
Line 343: SIBToCancel[%d].SIBType = %d
Line 352: ~~[Tx]CUPHY_SIG_START_IND: SignalingPriority = %s __ ActivationCfn = %d~~
Line 368: ==============CUPHY_PS_SUPPORT_IND=================
Line 369: PsSupport = %d
Line 385: ==============CUPHY_CGI_ACQUISITION_CONFIG_REQ=================
Line 386: dlUarfcn = %d
Line 387: primaryScrCode = %d
Line 388: UtraSiAcquisitionForHoMode = %d
Line 389: UmtsCellTimingOffset.sfn = %d
Line 390: UmtsCellTimingOffset.slot = %d
Line 391: UmtsCellTimingOffset.chip = %d
Line 392: UmtsCellTimingOffset.refCounterFrame = %d
Line 393: UmtsCellTimingOffset.refCounterSlot = %d
Line 394: UmtsCellTimingOffset.refCounterChip = %d
Line 395: ==============CUPHY_CGI_ACQUISITION_CONFIG_REQ=================
Line 400: ==============CUPHY_SFN_ACQUISITION_CONFIG_REQ=================
Line 401: dlUarfcn = %d
Line 402: primaryScrCode = %d
Line 403: bchId = %d
Line 404: IsBPLMN = %d
Line 406: isDBchEnabled = %d
Line 410: ==============CUPHY_SFN_ACQUISITION_CONFIG_REQ=================
Line 415: ==============CUPHY_SFN_ACQUISITION_RELEASE_REQ=================
Line 416: bchId = %d
Line 417: IsBPLMN = %d
Line 418: ==============CUPHY_SFN_ACQUISITION_RELEASE_REQ=================
Line 557: [URRC BCH in DCH]  rrc_CUPHY_BCHResRel_REQ_setParams: IsDCH = %d
Line 687: [URRC_FREQ_AID] rrc_CUPHY_LCS_Freq_Aid_REQ_Create Sending req->start(%d), rat(%d),tcxo_type(%d),reserved(%d)
Line 791: [U2L DEBUG] req->isU2LHO(%d), req->numOfEutraFreqs(%d)
Line 798: [U2L DEBUG] req->lteCellInfo[%d].earfcn = %d
Line 799: [U2L DEBUG] req->lteCellInfo[%d].numOfEutraCells = %d
Line 813: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].earfcn = %d
Line 815: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].cellId = %d
Line 817: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].cpType = %d
Line 819: [U2L DEBUG] req->lteCellInfo[%d].eutraCellList[%d].framePosition = %d
Line 829: [U2L DEBUG] SERIOUS ERROR !!! There is no LocalAccumlater available for EutraMeasInd
Line 839: There is no EutraMeas configured or no EutraRepInst left
Line 1093:  [ECELL_FACH] [CV] SIB5_p = NULL 
Line 1162: ---------------------------------------------------------------
Line 1163: START Urrc_UphyHsdschCommonModifyReqMsg_t
Line 1164: 	  isActivationTime = %d
Line 1167: 	  activationTime = %d
Line 1169: 	  isDelayRestrictionFlag = %d
Line 1170: 	  isHrnti = %d
Line 1173: 	  hrnti = %d
Line 1175: 	  isHsscchInfo = %d
Line 1178: 	  dlScramblingCode = %d
Line 1179: 	  numOfHsscchCodes = %d
Line 1182: 	 chanCodeList[%d] = %d
Line 1185: 	  harqFlushIndicator = %d
Line 1186: 	  isDl64QAMConfigured = %d
Line 1187: 	  isMACEhsConfigured = %d
Line 1188: 	  hsdschTableSize = %d
Line 1189: 	  hsdschL1CategoryExt = %d
Line 1190: 	  isFachOccasion = %d
Line 1193: 	  fachOccasionCycleLengthCoef = %d
Line 1196: 	  isHsDschDrxInCellFach = %d
Line 1199: 	  t321ms = %d
Line 1200: 	  hs_dsch_DrxCycleFach = %d
Line 1201: 	  hs_dsch_RxBurstFach = %d
Line 1202: 	  drxInterruption_by_hs_dsch = %d
Line 1205:  END Urrc_UphyHsdschCommonModifyReqMsg_t
Line 1206: ---------------------------------------------------------------
Line 1512: [DedModeModifyRlCommonReq] TxDivMode(%d) is configured
Line 1617: DB PopILM: No RL Exists in the message DB
Line 1684: GlobalCellId(0x%x) was set in DedicatedModeModifyRlReq
Line 1793: [ASU] msgPopulateIlms: no addCount or delCount 
Line 1880: [RbControlMsg] msgPopulateIlms: no addedDlRlCount
Line 2878: DB contains valid NumOfTgps[%d] more than the actual numOfCompressedModeSequences[%d]
Line 2926: [DedModeConfigRlCommonReq] TxDivMode(%d) is configured
Line 2995: GlobalCellId(0x%x) was set in DedicatedModeConfigReq
Line 3131: DB PopILM(before): trchToAddBitmask 0x%x
Line 3138: DB PopILM(After): trchToAddBitmask 0x%x, dlDchIdPresentBitMask 0x%x, availableDlDchInMuxOptBitMask 0x%x
Line 3175: DB PopILM: dlDchActuallyConfiguredInPhyBitMask 0x%x
Line 3269: DB PopILM: ulDchActuallyConfiguredInPhyBitMask 0x%x
Line 3392: Information of DlSecondaryCellId %d
Line 3393: DL Uarfcn = %d
Line 3394: HRNTI = 0x%x
Line 3395: SecHsdschRlPsc = 0x%x
Line 3396: DlScramblingCode = %d
Line 3397: 	 numOfHsscchCodes = %d
Line 3400: chanCodeList[%d] = %d
Line 3402: 	 measPowerOffset = %d
Line 3403: isDl64QAMConfigured = %d
Line 3404: isMACEhsConfigured = %d
Line 3405: 	 numOfHarqProcesses = %d
Line 3408: 	 processMemorySize[%d] = %d
Line 3410: hsdschtablesize = %d
Line 3411: HarqFlushIndicator = %d
Line 3412: diffTxDivFromServHsdschCell = %d
Line 3420: No DlSecondaryCell to be configured!!!
Line 3501: Information of DlSecondaryCellId %d
Line 3502: DL Uarfcn = %d
Line 3503: HRNTI = 0x%x
Line 3504: SecHsdschRlPsc = 0x%x
Line 3505: DlScramblingCode = %d
Line 3506: 	 numOfHsscchCodes = %d
Line 3509: chanCodeList[%d] = %d
Line 3511: 	 measPowerOffset = %d
Line 3512: isDl64QAMConfigured = %d
Line 3513: isMACEhsConfigured = %d
Line 3514: 	 numOfHarqProcesses = %d
Line 3517: 	 processMemorySize[%d] = %d
Line 3519: hsdschtablesize = %d
Line 3520: HarqFlushIndicator = %d
Line 3521: diffTxDivFromServHsdschCell = %d
Line 3527: First DlSecondaryCell reception is not OK!!!
Line 3653: ACTIVATION TIME %d
Line 3657: DELAY RESTRICTION FLAG present
Line 3659: DlSecondaryCellInfo of CellId %d
Line 3662: 	  hrnti = 0x%x
Line 3664: 	  dlScramblingCode = %d
Line 3665: 	  numOfHsscchCodes = %d
Line 3668: 	  chanCodeList[%d] = %d
Line 3670: 	  measPowerOffset = %d
Line 3671: isDl64QAMConfigured = %d
Line 3672: isSecHsdschRlPsc = %d
Line 3673: hsdschtablesize = %d
Line 3674: diffTxDivFromServHsdschCell = %d
Line 3682: No DlSecondaryCell to be modified!!!
Line 3762: ACTIVATION TIME %d
Line 3766: DELAY RESTRICTION FLAG present
Line 3768: DlSecondaryCellInfo of CellId %d
Line 3771: 	  hrnti = 0x%x
Line 3773: 	  dlScramblingCode = %d
Line 3774: 	  numOfHsscchCodes = %d
Line 3777: 	  chanCodeList[%d] = %d
Line 3779: 	  measPowerOffset = %d
Line 3780: isDl64QAMConfigured = %d
Line 3781: isSecHsdschRlPsc = %d
Line 3782: hsdschtablesize = %d
Line 3783: diffTxDivFromServHsdschCell = %d
Line 3789: First DlSecondaryCell reception is not OK!!!
Line 3821: DlSecHsdschCellsReleaseBitmask: 0x%X
Line 3825: No DlSecondaryCell to be released!!!
Line 3861: numOfHarqProcesses = %d
Line 3865: processMemorySize[%d] = %d
Line 3916: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 4093: Err in HS-SCCH Info, numOfHsscch(%d)! Set to max(%d)
Line 4269: [CV] [Populate ILM] E-DPCCH Config (pwrOffset (%d)), interpolation (%d)
Line 4405: [CV] [Populate ILM] CUPHY_EDCH_UL_MODIFY_REQ
Line 4413: [CV] [Populate ILM] E-DCH TTI (%d)
Line 4420: [CV] [Populate ILM] E-DCH HARQ (%d)
Line 4429: [CV] [Populate ILM] E-DPCCH (pwrOffset (%d)), interpolation (%d)
Line 4438: [CV] [Populate ILM] E-DPDCH
Line 4439: [CV] [Populate ILM] E-DPDCH (numRefEtfci (%d))
Line 4446: [CV] [Populate ILM] E-DPDCH (refEtfci (%d), refEtfciPo (%d))
Line 4466: [CV] [Populate ILM] E-DPDCH (etfciTableIndex (%d), maxChCode (%d), plNonMax (%d), minReducedGainFactor (%d))
Line 4490: [CV] [Populate ILM] CUPHY_EDCH_DL_MODIFY_REQ
Line 4503: [CV] [Populate ILM] Primary E-RNTI (0x%x)
Line 4513: [CV] [Populate ILM] Secondary E-RNTI(0x%x)
Line 4521: [CV] [Populate ILM] E-DCH TTI (%d)
Line 4531: [CV] [Populate ILM] Serving E-DCH RL (priCpich (0x%x), agch (%d))
Line 4546: [CV] [Populate ILM] Serving E-DCH RL (add hich (%d, %d))
Line 4552: [CV] [Populate ILM] Serving E-DCH RL (release hich)
Line 4557: [CV] [Populate ILM] Serving E-DCH RL (we need HICH action type)
Line 4568: [CV] [Populate ILM] Serving E-DCH RL (add rgch (%d, %d))
Line 4574: [CV] [Populate ILM] Serving E-DCH RL (release rgch)
Line 4579: [CV] [Populate ILM] Serving E-DCH RL (we need RGCH action type)
Line 4606: [CV] [Populate ILM] Non-serving E-DCH RL (priCpich (0x%x))
Line 4617: [CV] [Populate ILM] Non-serving E-DCH RL (add hich (%d, %d))
Line 4624: [CV] [Populate ILM] Non-serving E-DCH RL (release hich)
Line 4635: [CV] [Populate ILM] Non-serving E-DCH RL (add rgch (%d, %d))
Line 4641: [CV] [Populate ILM] Non-serving E-DCH RL (release rgch)
Line 4648: [CV] [Populate ILM] Non-serving E-DCH RL (num (%d))
Line 4757: rrc_CUPHY_CPC_Config_REQ_setHSScchLessConfig: ILM under population
Line 4771: rrc_CUPHY_CPC_Config_REQ_setHSScchLessConfig: ILM under population
Line 5287: TheASCIndx >= numOfAsc
Line 5450: imsiLengthis %d	and it is > 21
Line 5899: GlobalCellId(0x%x) was set in DedicatedModeReplaceRlReq
Line 5923: [URRC BCH in DCH] Uarfcn %d, PSC %d, CellId (0x%x) was set in GlobalCellIdUpdateReq
Line 5975: FachReleaseReqMsg isActivationTime(%d), ActivationTime(%d)
Line 5994: RachReleaseReqMsg isActivationTime(%d), ActivationTime(%d)
