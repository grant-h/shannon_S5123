Line 191: SendCuphyBlindFreqScanReq
Line 435: measurements_intrafrequency_enabled disabled in registry
Line 473: measurements_interfrequency_enabled disabled in registry
Line 642: Ctphy Dedicated Config Send the CPI Update Ind 
Line 915: measurements_intrafrequency_enabled disabled in registry
Line 942: measurements_interfrequency_enabled disabled in registry
Line 969: measurements_quality_enabled disabled in registry
Line 1038: Current CFN: %d, Activation CFN: %d
Line 1053: DsrcMgr_p->T_Wait_ASSignaling failed
Line 1058: DsrcMgr_p->T_Wait_ASSignaling Started (TmId=%d)
Line 1063: Failed to start the AS Signaling Wait timer
Line 1185: Gsm Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1214: Gsm Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1243: EUTRA Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1272: EUTRA Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1302: EUTRA Measurements disabled by registry: measurements_interrat_enabled = %i; RAT_MODE_OPERATION = %i
Line 1331: measurements_ueinternal_enabled disabled in registry
Line 1358: measurements_quality_enabled disabled in registry
Line 1385: measurements_ueinternal_enabled disabled in registry
Line 1984: Tx-CTPHY_SIG_START_IND
Line 1990: Tx-CUPHY_SIG_START_IND
Line 2012: Tx-CTPHY_SIG_STOP_IND
Line 2018: Tx-CUPHY_SIG_STOP_IND
Line 2031: Tx-CUPHY_PS_SUPPORT_IND
Line 2037: Tx-CTPHY_PS_SUPPORT_IND
Line 2123: Negative response received [%s][0x%x], Tid = %d
Line 2144: UPHY TID TABLE
Line 2169: ERROR: rrc_BoundUphy_UphyToUrrcMsg MapExtMsgIdToIntMsgId failed for Msg %d
Line 2185: rrc_BoundUphy_UphyToUrrcMsg()-Unregistred %d Msg received
Line 2200: rrc_BoundUphy_UphyToUrrcMsg()-Unregistred %d Msg received
Line 2241: BoundUphy - Unable to register MessageId=%d
Line 2268: rrc_BoundUphy - Unable to de-register MessageId=%d
Line 2274: rrc_BoundUphy - RegistryTablePtr is NULL, MessageId=%d
Line 2293: BoundUphy - Tid %d removed by client
Line 2295: UPHY TID TABLE
Line 2301: BoundUphy - Unregistred or Invalid Tid=%d
Line 2325: BoundUphy - All Tids removed by client %s
Line 2327: UPHY TID TABLE
Line 2333: BoundUphy - Unable to remove all Tids by ClientInstId = %d
Line 2384: %s[0x%x], %s
Line 2420: UPHY TID TABLE
Line 2446: TX -Msg: %s [0x%x] Tid[%d]
Line 2567: Tx-CUPHY_GLOBALCELLID_UPDATE_REQ, %d
Line 2606: RX -Msg: %s [0x%x], TId: [%d]
Line 2701: %s[0x%x], %s
Line 2725: UPHY TID TABLE
Line 2995: SendCtphyFreqRssiScanReq
Line 3013: SendCtphyDetectedFreqScanReq
Line 3082: SendCtphyInterFreqReselInd
Line 3115: START ModifyRLInfo
Line 3117:     CellParamId = %d
Line 3119:     TSTDIndicator = %d
Line 3121:     SCTDindicator = %d
Line 3126:     SecondaryFreq = %d
Line 3130:     SecondaryFreq Not Present
Line 3134: START DL_TDPCHInfo
Line 3136: 	  numCCTrCHtoAdd = %d
Line 3146: 	  tfcsId = %d
Line 3148: 	  isTimeInfopresent = %d
Line 3150: 	  isActivationTimeInfo = %d
Line 3152: 	  ActivationTimeInfo = %d
Line 3154: 	  isdurationTimeInfo = %d
Line 3156: 	  durationTimeInfo = %d
Line 3158: 	  isCommonTSInfopresent = %d
Line 3164:     isTFCICoding = %d, isRepPeriod = %d, InterleavingMode = %d,TFCI_Coding = %d, RepPeriod = %d, RepLength = %d, PuncturingLimit = %d
Line 3171: 
Line 3178: 
Line 3186: 
Line 3192: 
Line 3207: 
Line 3214: 
Line 3217: 	  NumUlCCTrCh_TPC = %d
Line 3228: 
Line 3233: 	  numCCTrCHtoRemove = %d
Line 3240: 
Line 3242: END DL_TDPCHInfo
Line 3243: END ModifyRLInfo
Line 3266: -------------------------------------------------------
Line 3268: rrc_CTPHY_CtphyDedModModifyULDPCH_REQ
Line 3270: UL DPCH INFO :
Line 3272: START UlDpchInfo
Line 3274:     activationTime = %d
Line 3276: Uarfcn = %d,cellParamId = %d
Line 3280:     TimingAdv.stepSize = %d
Line 3282:     TimingAdv.Frequency = %d
Line 3284: TimingAdv.SynchronizationPrams.fpach_Info
Line 3286:     TimeSlot = %d
Line 3288:     ChannelisationCode= %d
Line 3290:     WT = %d
Line 3292:     MidambleShiftandBurst.MidambleAllocationMode = %d
Line 3294:     MidambleShiftandBurst.MidambleConfiguration = %d
Line 3296:     MidambleShiftandBurst.MidambleShift = %d
Line 3298:     isSyncUlProcPresent = %d
Line 3302:     powerRampStep = %d
Line 3304:     MaxSyncUlTrans = %d
Line 3307:     sync_UL_CodesBitmap = %d
Line 3308:     prxUpPCHdes = %i
Line 3312:     isUplinkDpchPowerControlInfo = %d
Line 3316:     UlDpchPowerControlInfo
Line 3318:         isBeaconPLEstPresent = %d
Line 3320:         tpc_StepSize_present = %d
Line 3324:         tpcStepSize = %d
Line 3327:         isUlTargetSIRpresent = %d
Line 3331:         ul_TargetSIR = %d
Line 3335:     numCCtrChCtfc = %d
Line 3339:     index1 %d
Line 3341:     numOfUlCtfc %d
Line 3344:     ulCtfcArray[%d] : %d
Line 3346:     TFCS_ID %d
Line 3350:     index2 %d
Line 3352:         gainFactorType = %d
Line 3354:         TFCIRef =  %d
Line 3356:         betaD = %d
Line 3360:     NumUlCCTrChToAdd = %d
Line 3365:     index1 %d
Line 3367:     tfcsId %d
Line 3369:     ul_TargetSIR %d
Line 3371:     TimeInfo isActivationTimeInfo%d
Line 3373:     TimeInfo ActivationTimeInfo %d
Line 3375:     TimeInfo isdurationTimeInfo %d
Line 3379:     TimeInfo durationTimeInfo %d
Line 3382:     CommonTimeSlotInfo isTFCICoding %d
Line 3384:     CommonTimeSlotInfo isRepPeriod %d
Line 3386:     CommonTimeSlotInfo InterleavingMode %d
Line 3390:     CommonTimeSlotInfo TFCI_Coding %d
Line 3395:     CommonTimeSlotInfo RepPeriod %d
Line 3398:     CommonTimeSlotInfo RepLength %d
Line 3400:     CommonTimeSlotInfo PuncturingLimit %d
Line 3402:     ul_CCTrCH_TimeslotsCodes dynamicSFusage %d
Line 3404:     firstIndividualTimeslotInfo timeslotNumber %d
Line 3406:     firstIndividualTimeslotInfo tfci_Existence %d
Line 3408:     firstIndividualTimeslotInfo MidambleAllocationMode %d
Line 3410:     firstIndividualTimeslotInfo MidambleConfiguration %d
Line 3412:     firstIndividualTimeslotInfo MidambleShift %d
Line 3414:     firstIndividualTimeslotInfo modulation %d
Line 3416:     firstIndividualTimeslotInfo ssTpcSymbols %d
Line 3418:     firstIndividualTimeslotInfo isAdditionalTPCsymbols %d
Line 3422:     firstIndividualTimeslotInfo AdditionalTPCsymbols %d
Line 3425:     ul_CCTrCH_TimeslotsCodes numFirstTSCodes %d
Line 3430:     index2 %d
Line 3432:     firstTimeslotCodeList isPlcch_infoPresent %d
Line 3434:     firstTimeslotCodeList ul_TS_Channelisation_Code %d
Line 3438:     firstTimeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3440:     firstTimeslotCodeList PlcchInfo timeslotNumber %d
Line 3442:     firstTimeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3444:     firstTimeslotCodeList PlcchInfo channelisationCode %d
Line 3448: moreTimeslotInfo
Line 3450:     moreTimeslotInfo isconsecutiveTS %d
Line 3454:     moreTimeslotInfo consecutiveTS %d
Line 3457:     moreTimeslotInfo NumOfAdditionalTimeslots %d
Line 3463:     individualTimeslotInfo timeslotNumber %d
Line 3465:     individualTimeslotInfo tfci_Existence %d
Line 3467:     individualTimeslotInfo MidambleAllocationMode %d
Line 3469:     individualTimeslotInfo MidambleConfiguration %d
Line 3471:     individualTimeslotInfo MidambleShift %d
Line 3473:     individualTimeslotInfo modulation %d
Line 3475:     individualTimeslotInfo ssTpcSymbols %d
Line 3477:     individualTimeslotInfo isAdditionalTPCsymbols %d
Line 3481:     individualTimeslotInfo AdditionalTPCsymbols %d
Line 3485:     numTSCodes  %d
Line 3490:     index3 %d
Line 3492:     timeslotCodeList isPlcch_infoPresent %d
Line 3494:     timeslotCodeList ul_TS_Channelisation_Code %d
Line 3498:     timeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3500:     timeslotCodeList PlcchInfo timeslotNumber %d
Line 3502:     timeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3504:     timeslotCodeList PlcchInfo channelisationCode %d
Line 3511: END rrc_CTPHY_CtphyDedModModifyULDPCH_REQ
Line 3513: -------------------------------------------------------
Line 3546: -------------------------------------------------------
Line 3548: rrc_CTPHY_DedMd_Conf_REQ
Line 3552: ACTIVATION TIME %d
Line 3556: ACTIVATION TIME NOT present
Line 3562: SecondaryFreq = %d
Line 3566: SecondaryFreq NOT present
Line 3578: UARFCN %d
Line 3581: START TRLCommonInfo
Line 3583:     dpchCommonInfo = %d
Line 3587: START DL_TDPCHCmnInfo
Line 3590:     timingIndication = %d
Line 3592:     isDlDpchPowerControlMode = %d
Line 3594:     tpcStepSize = %d
Line 3597: END DL_TDPCHCmnInfo
Line 3600:     TSTD_Indicator = %d
Line 3602:     isDOff = %d
Line 3606:     doff = %d
Line 3609: END TRLCommonInfo
Line 3612: UL DPCH INFO :
Line 3614: START UlDpchInfo
Line 3616:     isTimingAdvpresent = %d
Line 3622:     TimingAdv.stepSize = %d
Line 3624:     TimingAdv.Frequency = %d
Line 3626: TimingAdv.SynchronizationPrams.fpach_Info
Line 3628:     TimeSlot = %d
Line 3630:     ChannelisationCode= %d
Line 3632:     WT = %d
Line 3634:     MidambleShiftandBurst.MidambleAllocationMode = %d
Line 3636:     MidambleShiftandBurst.MidambleConfiguration = %d
Line 3638:     MidambleShiftandBurst.MidambleShift = %d
Line 3640:     isSyncUlProcPresent = %d
Line 3644:     powerRampStep = %d
Line 3646:     MaxSyncUlTrans = %d
Line 3650:     isUplinkDpchPowerControlInfo = %d
Line 3654:     UlDpchPowerControlInfo
Line 3656:         isBeaconPLEstPresent = %d
Line 3658:         tpc_StepSize_present = %d
Line 3662:         tpcStepSize = %d
Line 3665:         isUlTargetSIRpresent = %d
Line 3669:         ul_TargetSIR = %d
Line 3673:     numCCtrChCtfc = %d
Line 3677:     index1 %d
Line 3679:     numOfUlCtfc %d
Line 3682:     ulCtfcArray[%d] : %d
Line 3684:     TFCS_ID %d
Line 3688:     index2 %d
Line 3690:         gainFactorType = %d
Line 3692:         TFCIRef =  %d
Line 3694:         betaD = %d
Line 3698:     NumUlCCTrChToAdd = %d
Line 3703:     index1 %d
Line 3705:     tfcsId %d
Line 3707:     ul_TargetSIR %d
Line 3709:     TimeInfo isActivationTimeInfo%d
Line 3711:     TimeInfo ActivationTimeInfo %d
Line 3713:     TimeInfo isdurationTimeInfo %d
Line 3717:     TimeInfo durationTimeInfo %d
Line 3720:     CommonTimeSlotInfo isTFCICoding %d
Line 3722:     CommonTimeSlotInfo isRepPeriod %d
Line 3724:     CommonTimeSlotInfo InterleavingMode %d
Line 3728:     CommonTimeSlotInfo TFCI_Coding %d
Line 3733:     CommonTimeSlotInfo RepPeriod %d
Line 3736:     CommonTimeSlotInfo RepLength %d
Line 3738:     CommonTimeSlotInfo PuncturingLimit %d
Line 3740:     ul_CCTrCH_TimeslotsCodes dynamicSFusage %d
Line 3742:     firstIndividualTimeslotInfo timeslotNumber %d
Line 3744:     firstIndividualTimeslotInfo tfci_Existence %d
Line 3746:     firstIndividualTimeslotInfo MidambleAllocationMode %d
Line 3748:     firstIndividualTimeslotInfo MidambleConfiguration %d
Line 3750:     firstIndividualTimeslotInfo MidambleShift %d
Line 3752:     firstIndividualTimeslotInfo modulation %d
Line 3754:     firstIndividualTimeslotInfo ssTpcSymbols %d
Line 3756:     firstIndividualTimeslotInfo isAdditionalTPCsymbols %d
Line 3760:     firstIndividualTimeslotInfo AdditionalTPCsymbols %d
Line 3763:     ul_CCTrCH_TimeslotsCodes numFirstTSCodes %d
Line 3768:     index2 %d
Line 3770:     firstTimeslotCodeList isPlcch_infoPresent %d
Line 3772:     firstTimeslotCodeList ul_TS_Channelisation_Code %d
Line 3776:     firstTimeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3778:     firstTimeslotCodeList PlcchInfo timeslotNumber %d
Line 3780:     firstTimeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3782:     firstTimeslotCodeList PlcchInfo channelisationCode %d
Line 3786: moreTimeslotInfo
Line 3788:     moreTimeslotInfo isconsecutiveTS %d
Line 3792:     moreTimeslotInfo consecutiveTS %d
Line 3795:     moreTimeslotInfo NumOfAdditionalTimeslots %d
Line 3801:     individualTimeslotInfo timeslotNumber %d
Line 3803:     individualTimeslotInfo tfci_Existence %d
Line 3805:     individualTimeslotInfo MidambleAllocationMode %d
Line 3807:     individualTimeslotInfo MidambleConfiguration %d
Line 3809:     individualTimeslotInfo MidambleShift %d
Line 3811:     individualTimeslotInfo modulation %d
Line 3813:     individualTimeslotInfo ssTpcSymbols %d
Line 3815:     individualTimeslotInfo isAdditionalTPCsymbols %d
Line 3819:     individualTimeslotInfo AdditionalTPCsymbols %d
Line 3823:     numTSCodes  %d
Line 3828:     index3 %d
Line 3830:     timeslotCodeList isPlcch_infoPresent %d
Line 3832:     timeslotCodeList ul_TS_Channelisation_Code %d
Line 3836:     timeslotCodeList PlcchInfo plcchSequenceNumber %d
Line 3838:     timeslotCodeList PlcchInfo timeslotNumber %d
Line 3840:     timeslotCodeList PlcchInfo tpcCommandTargetRate %f
Line 3842:     timeslotCodeList PlcchInfo channelisationCode %d
Line 3851:     uppchPositionInfo = %d
Line 3855:     isUppchPositionInfo = FALSE
Line 3858: END UlDpchInfo
Line 3861: DLRLInfo :
Line 3867: START RLInfo
Line 3869:     CellParamId = %d
Line 3871:     TSTDIndicator = %d
Line 3873:     SCTDindicator = %d
Line 3878:     SecondaryFreq = %d
Line 3882:     SecondaryFreq Not Present
Line 3886: START DL_TDPCHInfo
Line 3888: 	  numCCTrCHtoAdd = %d
Line 3898: 	  tfcsId = %d
Line 3900: 	  isTimeInfopresent = %d
Line 3902: 	  isActivationTimeInfo = %d
Line 3904: 	  ActivationTimeInfo = %d
Line 3906: 	  isdurationTimeInfo = %d
Line 3908: 	  durationTimeInfo = %d
Line 3910: 	  isCommonTSInfopresent = %d
Line 3916:     isTFCICoding = %d, isRepPeriod = %d, InterleavingMode = %d,TFCI_Coding = %d, RepPeriod = %d, RepLength = %d, PuncturingLimit = %d
Line 3923: 
Line 3930: 
Line 3938: 
Line 3944: 
Line 3959: 
Line 3966: 
Line 3969: 	  NumUlCCTrCh_TPC = %d
Line 3980: 
Line 3985: 	  numCCTrCHtoRemove = %d
Line 3992: 
Line 3994: END DL_TDPCHInfo
Line 3995: END RLInfo
Line 3997: DlInfo numDlCctrch = %d
Line 4001: DlInfo->CCTrCHTFCSArray[%d].numOfDlCtfc = %d
Line 4003: DlInfo->CCTrCHTFCSArray[%d].TFCS_ID = %d
Line 4008: DlCtfc[%d] = %d
Line 4012: NumDlTrChInfos = %d
Line 4018: DLTRCH[%d] = 
Line 4020: START DL_TrChInfo for TDD
Line 4021: trChId = %d
Line 4022: isBlerQualityTarget = %d
Line 4025: blerQualityTarget = %d
Line 4029: trChType = %s(%d)
Line 4033: trChType = Unknown(%d)
Line 4036: START TF_SemiStaticInfo
Line 4037:     tti = %d
Line 4038:     channelCoding = %d
Line 4039:     rateMatchingArgument = %d
Line 4040:     crcSize = %d
Line 4041:     codingRate = %d
Line 4042: END TF_SemiStaticInfo
Line 4046:     (%d*%d)
Line 4050:     Valid TTI=(%d)
Line 4054:     Not valid Dynamic TTI Info present
Line 4062: MaxUlTxPower = %d
Line 4066: MaxUlTxPower = Not present
Line 4069: NumUlTrChInfos = %d
Line 4074: ULTRCH[%d] = 
Line 4076:     trChId = %d
Line 4079:     trChType = %s(%d)
Line 4083:     trChType = Unknown(%d)
Line 4085: START UL TF_SemiStaticInfo
Line 4086:     tti = %d
Line 4087:     channelCoding = %d
Line 4088:     rateMatchingArgument = %d
Line 4089:     crcSize = %d
Line 4090:     codingRate = %d
Line 4091: END TF_SemiStaticInfo
Line 4093: numOfTfTableEntries = %d
Line 4097:     (%d*%d)
Line 4101:     Valid TTI=(%d)
Line 4105:     Not valid Dynamic TTI Info present
Line 4109: END TF_DynamicInfo
Line 4112: END rrc_CTPHY_DedMd_Conf_REQ
Line 4114: -------------------------------------------------------
Line 4136: START HSDSCHConfiguration
Line 4142:     hrnti = 0x%x
Line 4145:     servingHsdschRlPsc = %d
Line 4147:     isHsscchInfo = %d
Line 4151:     numOfHsscch = %d
Line 4159: hsscchInfo[%d].timeslotNumber = %d
Line 4161: hsscchInfo[%d].firstChannelisationCode = %d
Line 4163: hsscchInfo[%d].secondChannelisationCode = %d
Line 4165: hsscchInfo[%d].midambleShiftandBurst.MidambleAllocationMode = %d
Line 4167: hsscchInfo[%d].midambleShiftandBurst.MidambleConfiguration = %d
Line 4169: hsscchInfo[%d].midambleShiftandBurst.MidambleShift = %d
Line 4171: hsscchInfo[%d].blerTarget = %d
Line 4173: hsscchInfo[%d].hssichInfo.timeslotNumber = %d
Line 4175: hsscchInfo[%d].hssichInfo.channelisationCode = %d
Line 4177: hsscchInfo[%d].hssichInfo.midambleShiftandBurst.MidambleAllocationMode = %d
Line 4179: hsscchInfo[%d].hssichInfo.midambleShiftandBurst.MidambleConfiguration = %d
Line 4181: hsscchInfo[%d].hssichInfo.midambleShiftandBurst.MidambleShift = %d
Line 4185:     isPwrCtrlInfo = %d
Line 4193: hsdschUlPcInfo.ackNackPowerOffset = %d
Line 4195: hsdschUlPcInfo.pwrLevelHssich = %d
Line 4197: hsdschUlPcInfo.tpcStepSize = %d
Line 4199: hsdschUlPcInfo.pwrCtrlGap = %d
Line 4201: hsdschUlPcInfo.blerTarget = %d
Line 4203: hsdschUlPcInfo.isPathlossCompensationSwitch = %d
Line 4206:     isHarqInfo = %d
Line 4210:     numOfHarqProcesses = %d
Line 4214:     processMemorySize[%d] = %d
Line 4218:     harqFlushIndicator = %d
Line 4220:     hsdschL1Category = %d
Line 4222:     isMACEhsConfigured = %d
Line 4224:     hsdschL1CategoryExt = %d
Line 4226:     HSPDSCH MidambleAllocationMode = %d
Line 4227:     HSPDSCH MidambleConfiguration = %d
Line 4228:     HSPDSCH MidambleShift = %d
Line 4229: END HSDSCHConfiguration
Line 4249: -------------------------------------------------------
Line 4251: rrc_CTPHY_HSDSCH_Config_REQ
Line 4255: ACTIVATION TIME %d
Line 4259: ACTIVATION TIME NOT present
Line 4272: -------------------------------------------------------
Line 4293: -------------------------------------------------------
Line 4295: rrc_CTPHY_EDCH_Config_REQ
Line 4299: ACTIVATION TIME %d
Line 4303: ACTIVATION TIME NOT present
Line 4307: NewPrimaryErnti = 0x%x
Line 4313: HarqInfoForEdch = Urrc_UphyHarqRvConfiguration_rv0
Line 4317: HarqInfoForEdch = Urrc_UphyHarqRvConfiguration_rvTable
Line 4323: ErucchInfo Start:
Line 4325: 		T-RUCCH = %d  N-RUCCH = %d
Line 4327: 		T-WAIT = %d  T-SI = %d
Line 4331: 		Extended Estimation Window = %d
Line 4336: 		ASC Classes = %d
Line 4340: 		ASC[%d].AvailableSYNC_UlCodesIndics = %d
Line 4342: 			Subchannel size = %d
Line 4344: 			Subchannel = %d
Line 4350: 		sizeOfPerSclFacList = %d
Line 4354: 		PersistenceScalingFactor[%d] = %d
Line 4360: 		PRXUpPCHdes = %d  PowerRampStep = %d
Line 4362: 		MaxSYNC_ULTransmissions = %d  Mmax = %d
Line 4364: 		SYNC_ULcodesbitmap = %d
Line 4369: 		sizeOfPrachInfoList = %d
Line 4373: 	PrachInfo[%d].TimeslotNumbr = %d
Line 4375: 	prachCCListSize= %d
Line 4379: 				  PrachChanCodesList[%d] = %d
Line 4382: 			      MidambleAllocMode = %d
Line 4384: 				  MidambleConf = %d
Line 4386: 				  MidambleShift = %d
Line 4390: 	PrachInfo[%d].FpachInfo.TimeSlotNum = %d
Line 4392: 							ChannelisationCode = %d
Line 4394: 							MidambleAllocMode = %d
Line 4396: 							MidambleConf = %d
Line 4398: 							MidambleShift = %d
Line 4400: 				  FpachInfo.WT = %d
Line 4404: 	PrachInfo[%d].FpachInfo Not Presnt(OP)
Line 4411: 		uppchPositionInfo = %d
Line 4415: 		isUppchPositionInfo = FALSE
Line 4418: ErucchInfo End:
Line 4422: ErucchInfo Not Present:(OP)
Line 4427: EPuchInfo Start:
Line 4433: 	EtfcsInfo.QPSK[%d].RefCodeRate = %d  RefBeta = %d
Line 4439: 	EtfcsInfo.16QAM[%d].RefCodeRate = %d  RefBeta = %d
Line 4444: 	SnplReportType = %d
Line 4447: 	PrxDesBase = %d  BeaconPLEst = %d
Line 4449: 	TpcStepSize = %d  PebasePowerControlGAP = %d
Line 4451:  ULsynchPara: ulSyncStepsize = %d,ulSyncfreqency = %d	
Line 4453:  EpuchTsconfigistSize = %d
Line 4457: epuchTsConfigList[%d]:  TimeSlotNum = %d,midambleAllocMode = %d,midambleConfiguration = %d,midambleShift = %d
Line 4460: MinAllowedCrate = %d,MaxAllowedCrate = %d,MaxNumReTx = %d,ReTxTimerForSchdInfo = %d
Line 4462: EPuchInfo End:
Line 4466: EPuchInfo Not Present:(OP)
Line 4471: NonSheduledTransGrantInfo Start:
Line 4473: 	N_E-UCCH = %d  N_E-HICH = %d
Line 4475: 	TimeslotResourceInfo = %d  PowerResourceInfo = %d
Line 4477: 	ActivationTime = %d  SubframeNumber = %d
Line 4479: 	RepetitionPeriod = %d  RepetitionLength = %d
Line 4481: 	CodeResourceInfo = %d  SigSeqGroupIndex = %d
Line 4483: 	TimeslotNumber = %d  ChannelisationCode = %d
Line 4485: 	T_Si_Nst = %d
Line 4487: 	channelisationCode  = %d ,mAmblAllocMode =%d 
Line 4489: 	midambleConfig =%d ,midambleShift  = %d  
Line 4491: NonSheduledTransGrantInfo End:
Line 4495: NonSheduledTransGrantInfo Not Present:(OP)
Line 4501: PrimaryCCPCHInfoForServingCell Start:
Line 4503: 	cellParamId = %d  TSTDIndicator = %d  SCTDindicator = %d
Line 4505: PrimaryCCPCHInfoForServingCell End:
Line 4509: PrimaryCCPCHInfoForServingCell Not Present:(OP)
Line 4514: EAgchforTdd Start:
Line 4516: 	RdiIndicator = %d  TpcStepSize = %d  eAgchBlerTarget = %d
Line 4518: 	EagchSetConfig: %d Max
Line 4522:   TimeslotNumber = %d  FirstChannelisationCode = %d  SecondChannelisationCode = %d
Line 4524:   MAmbleAllocMode = %d  MidambleConfig = %d  MidambleShift = %d
Line 4527: EAgchforTdd End:
Line 4531: EAgchforTdd Not Present:(OP)
Line 4536: EHichforTdd Start:
Line 4538:   NE-HICH = %d ,maxNumEHICH = %d
Line 4542:   EhichSetConfig[%d]:
Line 4544:    EI = %d  TimeslotNumber = %d  ChannelisationCode = %d
Line 4546:    MAmblAllocMode = %d  MidambleConfig = %d  MidambleShift = %d
Line 4549: EHichforTdd End:
Line 4553: EHichforTdd Not Present:(OP)
Line 4563:  CTPHY BCH RES CONF REQ
Line 4564:     bchId= %d
Line 4565:     uarfcn= %d
Line 4566:     cellParamId= %d
Line 4567:     SCTDindicator= %d
Line 4568:     TSTDIndicator= %d
Line 4579: --------------------------------------------------------------------------------
Line 4580: rrc_CTPHY_RACHResConf_REQ
Line 4583:     maxUlTxPower = %d
Line 4585:     prachPowerOffset.powerRampStep = %d
Line 4586:     prachPowerOffset.maxPreambleRetransission = %d
Line 4588:     prachInfo.SyncULInfo.SyncULCodeBitmap = %d
Line 4589:     prachInfo.SyncULInfo.PRXUpPCHdes = %i
Line 4590:     prachInfo.SyncULInfo.powerRampupStep = %d
Line 4591:     prachInfo.SyncULInfo.MaxSyncULTransmissions = %d
Line 4592:     prachInfo.SyncULInfo.mmax = %d
Line 4593:     prachInfo.SyncULInfo.ERUCCH_SyncUL_Code = %d
Line 4594:     prachInfo.prachFpachCount = %d
Line 4597:     prachInfo.PrachFpach[%d].TimeSlot = %d
Line 4598:     prachInfo.PrachFpach[%d].numOfChannelisationCode = %d
Line 4602:     prachInfo.PrachFpach[%d].ChannelisationCodeList[%d] = %d
Line 4605:     prachInfo.PrachFpach[%d].MidambleShiftandBurst.MidambleConfiguration = %d
Line 4606:     prachInfo.PrachFpach[%d].MidambleShiftandBurst.MidambleShift = %d
Line 4607:     prachInfo.PrachFpach[%d].MidambleShiftandBurst.MidambleAllocationMode = %d
Line 4609:     prachInfo.PrachFpach[%d].FPACHInfo.TimeSlot = %d
Line 4610:     prachInfo.PrachFpach[%d].FPACHInfo.ChannelisationCode = %d
Line 4611:     prachInfo.PrachFpach[%d].FPACHInfo.MidambleShiftandBurst.MidambleAllocationMode = %d
Line 4612:     prachInfo.PrachFpach[%d].FPACHInfo.MidambleShiftandBurst.MidambleShift = %d
Line 4613:     prachInfo.PrachFpach[%d].FPACHInfo.MidambleShiftandBurst.MidambleConfiguration = %d
Line 4614:     prachInfo.PrachFpach[%d].FPACHInfo.WT = %d
Line 4619:     Mapping_Par1 = %d
Line 4621:     pccpchTxPower = %d
Line 4622:     numOfUlCtfc = %d
Line 4636:     %s ulPowerOffsetInfoArray[%d].betaD = %d 
Line 4639:     ulPowerOffsetInfoArray[%d].TfciRef = %d
Line 4643: TFCIRef = Not Applicable
Line 4647:     rachInfo.trChId = %d
Line 4648:     rachInfo.trChType = %d
Line 4649:     rachInfo.semiStaticInfo.tti = %d
Line 4650:     rachInfo.semiStaticInfo.channelCoding = %d
Line 4651:     rachInfo.semiStaticInfo.rateMatchingArgument = %d
Line 4652:     rachInfo.semiStaticInfo.crcSize = %d
Line 4653:     rachInfo.semiStaticInfo.codingRate = %d
Line 4654:     rachInfo.dynamicInfo.numOfTfTableEntries = %d
Line 4655:     rachInfo.dynamicInfo.tfTableEntryArray->tBlockSize = %d
Line 4656:     rachInfo.dynamicInfo.tfTableEntryArray->numOTblocks = %d
Line 4657:     rachInfo.dynamicInfo.tfTableEntryArray->isTTIValid = %d
Line 4658:     rachInfo.dynamicInfo.tfTableEntryArray->TTI = %d
Line 4660:     dlUarfcn = %d
Line 4662:     pccpchInfo.TSTDIndicator = %d
Line 4663:     pccpchInfo.SCTDindicator = %d
Line 4664:     pccpchInfo.cellParamId = %d
Line 4666:     numOfAsc = %d
Line 4670:     accessServiceClassArray[%d].availableSYNC_UlCodesIndicesBitmask = %d
Line 4671:     accessServiceClassArray[%d].subchannelSize.choice = %d
Line 4672:     accessServiceClassArray[%d].subchannelSize.AvailSubChannelBitString = %d
Line 4675: END rrc_CTPHY_RACHResConf_REQ
Line 4676: --------------------------------------------------------------------------------
Line 4688: ---------------------------------------------------------------
Line 4689: rrc_CTPHY_FACHResConf_REQ
Line 4693: START SCCPChInfo
Line 4694: Uarfcn = %d
Line 4695: cellParamId = %d
Line 4696: NumChanCodes = %d
Line 4697: CommonTimeSlotInfo start
Line 4701: TFCI_Coding = %d,RepLength = %d
Line 4705: RepPeriod = %d
Line 4707: InterleavingMode = %d
Line 4708: PuncturingLimit = %d
Line 4709: CommonTimeSlotInfo end
Line 4710: IndividualTimeSlotInfo start
Line 4711: timeslotNumber = %d
Line 4712: modulation = %d
Line 4713: ssTpcSymbols = %d
Line 4716: tfci_Existence is TRUE
Line 4720: tfci_Existence is FALSE
Line 4724: AdditionalTPCsymbols = %d
Line 4727: MidambleAllocationMode = %d,MidambleConfiguration=%d,MidambleShift=%d
Line 4728: IndividualTimeSlotInfo end
Line 4730: Code List started
Line 4731: Code List size == %d
Line 4734: Code List
Line 4736: Code List End
Line 4747: Index %d	= 
Line 4749: START DL_TrChInfo
Line 4751:     trChId = %d
Line 4752: isBlerQualityTarget = %d
Line 4756: blerQualityTarget = %d
Line 4760: trChType = %s(%d)
Line 4764: trChType = Unknown(%d)
Line 4771: START TF_SemiStaticInfo
Line 4772:     tti = %d
Line 4773:     channelCoding = %d
Line 4774:     rateMatchingArgument = %d
Line 4775:     crcSize = %d
Line 4776:     codingRate = %d
Line 4777: END TF_SemiStaticInfo
Line 4779: START TF_DynamicInfo
Line 4783:     (%d*%d)
Line 4787:     Valid TTI=(%d)
Line 4791:     Not valid Dynamic TTI Info present
Line 4796: END TF_DynamicInfo
Line 4797: END DL_TrChInfo
Line 4798: ---------------------------------------------------------------
Line 4802: numOfDlCtfc = %d
Line 4805: dlCtfcArray[%d] = %d
Line 4814: PCH
Line 4816: START DL_TrChInfo
Line 4818:     trChId = %d
Line 4819: isBlerQualityTarget = %d
Line 4823: blerQualityTarget = %d
Line 4827: trChType = %s(%d)
Line 4831: trChType = Unknown(%d)
Line 4838: START TF_SemiStaticInfo
Line 4839:     tti = %d
Line 4840:     channelCoding = %d
Line 4841:     rateMatchingArgument = %d
Line 4842:     crcSize = %d
Line 4843:     codingRate = %d
Line 4844: END TF_SemiStaticInfo
Line 4846: START TF_DynamicInfo
Line 4850:     (%d*%d)
Line 4854:     Valid TTI=(%d)
Line 4858:     Not valid Dynamic TTI Info present
Line 4861: END TF_DynamicInfo
Line 4862: END DL_TrChInfo
Line 4863: ---------------------------------------------------------------
Line 4864: END PCH
Line 4868: PCH NOT present
Line 4872: FACH Occasion
Line 4873: fachOccasionCycleLengthCoef = %d
Line 4874: crntiBitString = %d
Line 4875: END FACH Occasion
Line 4879: FACH Occasion NOT present
Line 4881: END rrc_CTPHY_FACHResConf_REQ
Line 4882: ---------------------------------------------------------------
