Line 132: LPP_AsnDecodeMsg() - NULL Pointer!!!
Line 140: LPP_ProAsnDecode: Input buffer: 
Line 145: LPP_ProAsnDecode: Success
Line 148: LPP_ProAsnDecode: SIZE_INVALID
Line 151: LPP_ProAsnDecode: CHOICE_INVALID
Line 154: LPP_ProAsnDecode: RANGE_INVALID
Line 157: LPP_ProAsnDecode: UNSUPPORTED_PDU
Line 160: LPP_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 163: LPP_ProAsnDecode: Misc error #: %d
Line 170: [seqNum_de:%d] LPP_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 176: [seqNum_de:%d] LPP_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 221: EUTRAN_LCS_AsnDecodeMsg() - NULL Pointer!!!
Line 229: EutranLcs_ProAsnDecode: Input buffer: 
Line 234: EutranLcs_ProAsnDecode: Success
Line 237: EutranLcs_ProAsnDecode: SIZE_INVALID
Line 240: EutranLcs_ProAsnDecode: CHOICE_INVALID
Line 243: EutranLcs_ProAsnDecode: RANGE_INVALID
Line 246: EutranLcs_ProAsnDecode: UNSUPPORTED_PDU
Line 249: EutranLcs_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 252: EutranLcs_ProAsnDecode: Misc error #: %d
Line 259: [seqNum_de:%d] EutranLcs_ProAsnDecode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 266: [seqNum_de:%d] EutranLcs_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 306: LPP_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
Line 314: LPP_AsnEncodeMsg() - NULL Pointer!!!
Line 323: LPP_ProAsnEncode: Success
Line 326: LPP_ProAsnEncode: SIZE_INVALID
Line 329: LPP_ProAsnEncode: CHOICE_INVALID
Line 332: LPP_ProAsnEncode: RANGE_INVALID
Line 335: LPP_ProAsnEncode: UNSUPPORTED_PDU
Line 338: LPP_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 341: LPP_ProAsnEncode: Misc error #: %d
Line 348: [seqNum_en:%d] LPP_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 355: [seqNum_en:%d] LPP_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 397: EUTRAN_LCS_AsnEncodeMsg() - Invalid PDU Number!!! pduNum(%d)
Line 405: EUTRAN_LCS_AsnEncodeMsg() - NULL Pointer!!!
Line 413: EutranLcs_ProAsnEncode: Success
Line 416: EutranLcs_ProAsnEncode: SIZE_INVALID
Line 419: EutranLcs_ProAsnEncode: CHOICE_INVALID
Line 422: EutranLcs_ProAsnEncode: RANGE_INVALID
Line 425: EutranLcs_ProAsnEncode: UNSUPPORTED_PDU
Line 428: EutranLcs_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 431: EutranLcs_ProAsnEncode: Misc error #: %d
Line 438: [seqNum_en:%d] EutranLcs_ProAsnEncode FAIL, pdu(%d) CodecReturnCode(%d) CodecErrorStruct(%s)
Line 444: [seqNum_en:%d] EutranLcs_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 468: [LPP_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 490: [EutranLcs_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 2320: <<-------------------------------------------------
Line 2321: | ++ SBAS_IDs
Line 2333: LPP_ConvertSBAS_IDsToASN() - MALLOC FAIL!!!
Line 2334: >>-------------------------------------------------
Line 2355: | sbas_IDs(0x%02x)
Line 2356: >>-------------------------------------------------
Line 2383: <<-------------------------------------------------
Line 2384: | ++ PositioningModes - src(%d)
Line 2395: LPP_ConvertPositioningModesToASN() - MALLOC FAIL!!!
Line 2396: >>-------------------------------------------------
Line 2408: | MsPositionMethod(%d)
Line 2446: | posModes(0x%02x)
Line 2447: >>-------------------------------------------------
Line 2473: <<-------------------------------------------------
Line 2474: | ++ AccessTypes [%d]
Line 2485: LPP_ConvertAccessTypesToASN() - MALLOC FAIL!!!
Line 2486: >>-------------------------------------------------
Line 2502: | accessTypes(0x%02x)
Line 2503: >>-------------------------------------------------
Line 2529: <<-------------------------------------------------
Line 2530: | ++ GNSS_IonosphericModelSupport
Line 2540: LPP_ConvertGNSS_IonosphericModelSupport() - MALLOC FAIL!!!
Line 2541: >>-------------------------------------------------
Line 2553: | ionoModel(0x%02x)
Line 2554: >>-------------------------------------------------
Line 2582: <<-------------------------------------------------
Line 2583: | ++ GNSS_CommonAssistanceDataSupport
Line 2590: <<-------------------------------------------------
Line 2591: | ++ GNSS_ReferenceTimeSupport
Line 2600: >>-------------------------------------------------
Line 2601: >>-------------------------------------------------
Line 2612: >>-------------------------------------------------
Line 2613: >>-------------------------------------------------
Line 2618: >>-------------------------------------------------
Line 2624: <<-------------------------------------------------
Line 2625: | ++ GNSS_ReferenceLocationSupport
Line 2630: >>-------------------------------------------------
Line 2640: >>-------------------------------------------------
Line 2648: <<-------------------------------------------------
Line 2649: | ++ GNSS_EarthOrientationParametersSupport
Line 2654: >>-------------------------------------------------
Line 2656: >>-------------------------------------------------
Line 2680: <<-------------------------------------------------
Line 2681: | ++ GNSS_NavigationModelSupport
Line 2698: LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
Line 2699: >>-------------------------------------------------
Line 2728: | clockModel(0x%02x)
Line 2744: LPP_ConvertGNSS_NavigationModelSupport() - MALLOC FAIL!!!
Line 2745: >>-------------------------------------------------
Line 2773: | orbitModel(0x%02x)
Line 2775: >>-------------------------------------------------
Line 2801: <<-------------------------------------------------
Line 2802: | ++ GNSS_AcquisitionAssistanceSupport
Line 2809: | LPP_confidenceSupport_r10_present
Line 2816: | LPP_dopplerUncertaintyExtSupport_r10_present
Line 2820: >>-------------------------------------------------
Line 2844: <<-------------------------------------------------
Line 2845: | ++ GNSS_AlmanacSupport
Line 2864: LPP_ConvertGNSS_AlmanacSupport() - MALLOC FAIL!!!
Line 2865: >>-------------------------------------------------
Line 2899: LPP_ConvertGNSS_AlmanacSupport() - Unsupported Almanac Model recieved [%d]
Line 2902: | almanacModel(0x%02x)
Line 2904: >>-------------------------------------------------
Line 2930: <<-------------------------------------------------
Line 2931: | ++ GNSS_UTC_ModelSupport
Line 2948: LPP_ConvertGNSS_UTC_ModelSupport() - MALLOC FAIL!!!
Line 2949: >>-------------------------------------------------
Line 2976: LPP_ConvertGNSS_UTC_ModelSupport() - Unsupported UTC Model received [%d]
Line 2978: | utc_Model(0x%02x)
Line 2980: >>-------------------------------------------------
Line 3010: <<-------------------------------------------------
Line 3011: | ++ AssistanceDataSupportList
Line 3022: <<-------------------------------------------------
Line 3023: | ++ GNSS_GenericAssistanceDataSupport [%d]
Line 3029: LPP_ConvertAssistanceDataSupportList() - MALLOC FAIL!!!
Line 3030: >>-------------------------------------------------
Line 3031: >>-------------------------------------------------
Line 3065: | sbas_id(%d)
Line 3071: <<-------------------------------------------------
Line 3072: | ++ GNSS_TimeModelsSupport
Line 3077: >>-------------------------------------------------
Line 3083: <<-------------------------------------------------
Line 3084: | ++ GNSS_DifferentialCorrectionsSupport
Line 3094: | dgnss_ValidityTimeSup(%d)
Line 3095: >>-------------------------------------------------
Line 3105: >>-------------------------------------------------
Line 3106: >>-------------------------------------------------
Line 3116: <<-------------------------------------------------
Line 3117: | ++ GNSS_RealTimeIntegritySupport
Line 3122: >>-------------------------------------------------
Line 3128: <<-------------------------------------------------
Line 3129: | ++ GNSS_DataBitAssistanceSupport
Line 3134: >>-------------------------------------------------
Line 3151: >>-------------------------------------------------
Line 3152: >>-------------------------------------------------
Line 3166: >>-------------------------------------------------
Line 3167: >>-------------------------------------------------
Line 3177: <<-------------------------------------------------
Line 3178: | ++ GNSS_AuxiliaryInformationSupport
Line 3183: >>-------------------------------------------------
Line 3189: <<-------------------------------------------------
Line 3190: | ++ BDS_DifferentialCorrectionsSupport_r12
Line 3196: >>-------------------------------------------------
Line 3202: <<-------------------------------------------------
Line 3203: | ++ BDS_GridModelSupport_r12
Line 3209: >>-------------------------------------------------
Line 3212: >>-------------------------------------------------
Line 3219: >>-------------------------------------------------
Line 3245: <<-------------------------------------------------
Line 3246: | ++ A_GNSS_ProvideCapabilities
Line 3249: | bit_mask(0x%x)
Line 3260: LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_SupportList is ZERO!!!
Line 3267: <<-------------------------------------------------
Line 3268: | ++ GNSS_SupportList [%d]
Line 3273: LPP_CopyA_GNSS_ProvideCapabilities() - MALLOC FAIL!!!
Line 3339: | adr_Support(%d)
Line 3345: | velocityMeasurementSupport(%d)
Line 3347: >>-------------------------------------------------
Line 3359: LPP_ConvertA_GNSS_ProvideCapabilities() - numberOfGNSS_GenericAssistanceDataSupport is ZERO!!!
Line 3371: <<-------------------------------------------------
Line 3372: | ++ LocationCoordinateTypes
Line 3378: | ellipsoidPoint(%d)
Line 3384: | ellipsoidPointWithUncertaintyCircle(%d)
Line 3390: | ellipsoidPointWithUncertaintyEllipse(%d)
Line 3396: | polygon(%d)
Line 3402: | ellipsoidPointWithAltitude(%d)
Line 3408: | ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
Line 3414: | ellipsoidArc(%d)
Line 3416: >>-------------------------------------------------
Line 3422: <<-------------------------------------------------
Line 3423: | ++ VelocityTypes
Line 3429: | horizontalVelocity(%d)
Line 3435: | horizontalWithVerticalVelocity(%d)
Line 3441: | horizontalVelocityWithUncertainty(%d)
Line 3447: | horizontalWithVerticalVelocityAndUncertainty(%d)
Line 3449: >>-------------------------------------------------
Line 3452: >>-------------------------------------------------
Line 3483: <<-------------------------------------------------
Line 3484: | ++ GPS_TOW_AssistDst [%d]
Line 3488: | satelliteID(%d)
Line 3492: | tlmWord(%d)
Line 3496: | antiSpoof(%d)
Line 3500: | alert(%d)
Line 3504: | tlmRsvdBits(%d)
Line 3506: >>-------------------------------------------------
Line 3534: <<-------------------------------------------------
Line 3535: | ++ GNSS_SystemTime
Line 3544: | gnss_DayNumber(%d)
Line 3548: | gnss_TimeOfDay(%d)
Line 3553: | LPP_gnss_TimeOfDayFrac_msec_present
Line 3556: | gnss_TimeOfDayFrac_msec(%d)
Line 3562: | LPP_notificationOfLeapSecond_present
Line 3565: | notificationOfLeapSecond(0x%02x)
Line 3571: | LPP_gps_TOW_Assist_present
Line 3576: >>-------------------------------------------------
Line 3600: <<-------------------------------------------------
Line 3601: | ++ NetworkTime
Line 3607: | secondsFromFrameStructureStart(%d)
Line 3611: | fractionalSecondsFromFrameStructureStart(%d)
Line 3616: | LPP_frameDrift_present
Line 3619: | frameDrift(%d)
Line 3627: <<-------------------------------------------------
Line 3628: | ++ EUTRA
Line 3634: | physCellId(%d)
Line 3646: | earfcn(%d)
Line 3647: >>-------------------------------------------------
Line 3650: <<-------------------------------------------------
Line 3651: | ++ UTRA
Line 3663: | fddPrimary_CPICH_Info(%d)
Line 3670: | tddCellParameters(%d)
Line 3674: !!!!!!!!!! mode.choice(%d) is wrong choice !!!!!!!!!!
Line 3687: | uarfcn(%d)
Line 3688: >>-------------------------------------------------
Line 3691: <<-------------------------------------------------
Line 3692: | ++ GSM
Line 3698: | bcchCarrier(%d)
Line 3702: | bsic(%d)
Line 3713: | MCC(%d %d %d)
Line 3721: | MNC(%d %d %d)
Line 3730: | locationAreaCode(0x%02x %02x)
Line 3739: | cellIdentity(0x%02x %02x)
Line 3741: >>-------------------------------------------------
Line 3745: !!!!!!!!!! cellID.choice(%d) is wrong choice !!!!!!!!!!
Line 3749: >>-------------------------------------------------
Line 3780: <<-------------------------------------------------
Line 3781: | ++ GNSS_ReferenceTimeForCells [%d]
Line 3792: | referenceTimeUnc(%d)
Line 3799: | bsAlign(%d)
Line 3802: >>-------------------------------------------------
Line 3831: <<-------------------------------------------------
Line 3832: | ++ GNSS_ReferenceTime
Line 3843: | referenceTimeUnc(%d)
Line 3852: >>-------------------------------------------------
Line 3876: <<-------------------------------------------------
Line 3877: | ++ GNSS_ReferenceLocation
Line 3888: | latitudeSign(%d)
Line 3892: | degreesLatitude(%d)
Line 3896: | degreesLongitude(%d)
Line 3907: | altitudeDirection(%d)
Line 3911: | altitude(%d)
Line 3915: | uncertaintySemiMajor(%d)
Line 3919: | uncertaintySemiMinor(%d)
Line 3923: | orientationMajorAxis(%d)
Line 3927: | uncertaintyAltitude(%d)
Line 3931: | confidence(%d)
Line 3933: >>-------------------------------------------------
Line 3957: <<-------------------------------------------------
Line 3958: | ++ GNSS_IonosphericModel
Line 3966: | dataID(0x%02x)
Line 3970: | alfa0(%d)
Line 3974: | alfa1(%d)
Line 3978: | alfa2(%d)
Line 3982: | alfa3(%d)
Line 3986: | beta0(%d)
Line 3990: | beta1(%d)
Line 3994: | beta2(%d)
Line 3998: | beta3(%d)
Line 4006: | ai0(%d)
Line 4010: | ai1(%d)
Line 4014: | ai2(%d)
Line 4020: | ionoStormFlag1(%d)
Line 4027: | ionoStormFlag2(%d)
Line 4034: | ionoStormFlag3(%d)
Line 4041: | ionoStormFlag4(%d)
Line 4048: | ionoStormFlag5(%d)
Line 4052: >>-------------------------------------------------
Line 4076: <<-------------------------------------------------
Line 4077: | ++ GNSS_CommonAssistData
Line 4102: <<-------------------------------------------------
Line 4103: | ++ GNSS_EarthOrientationParameters
Line 4107: | teop(%d)
Line 4111: | pmX(%d)
Line 4115: | pmXdot(%d)
Line 4119: | pmY(%d)
Line 4123: | pmYdot(%d)
Line 4127: | deltaUT1(%d)
Line 4131: | deltaUT1dot(%d)
Line 4132: >>-------------------------------------------------
Line 4135: >>-------------------------------------------------
Line 4163: | gnss_TimeModelRefTime(%d)
Line 4167: | tA0(%d)
Line 4173: | tA1(%d)
Line 4180: | tA2(%d)
Line 4190: | weekNumber(%d)
Line 4197: | deltaT(%d)
Line 4226: <<-------------------------------------------------
Line 4227: | ++ GNSS_DifferentialCorrections
Line 4245: LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
Line 4256: <<-------------------------------------------------
Line 4257: | ++ DGNSS-SgnTypeList [%d]
Line 4263: | gnss_SignalID(%d)
Line 4269: | gnss_StatusHealth(%d)
Line 4283: LPP_ConvertGNSS_DifferentialCorrections() - MALLOC FAIL!!!
Line 4292: <<-------------------------------------------------
Line 4293: | ++ DGNSS-SatList [%d]
Line 4300: | svID(%d)
Line 4307: | iod(0x%02x %02x)
Line 4312: | udre(%d)
Line 4317: | pseudoRangeCor(%d)
Line 4322: | rangeRateCor(%d)
Line 4329: | udreGrowthRate(%d)
Line 4337: | udreValidityTime(%d)
Line 4339: >>-------------------------------------------------
Line 4344: >>-------------------------------------------------
Line 4349: >>-------------------------------------------------
Line 4376: <<-------------------------------------------------
Line 4377: | ++ GNSS_ClockModel
Line 4388: <<-------------------------------------------------
Line 4389: | ++ StandardClockModelList [%d]
Line 4396: | stanClockToc(%d)
Line 4401: | stanClockAF2(%d)
Line 4406: | stanClockAF1(%d)
Line 4411: | stanClockAF0(%d)
Line 4418: | stanClockTgd(%d)
Line 4424: | sisa(%d)
Line 4431: | stanModelID(%d)
Line 4433: >>-------------------------------------------------
Line 4440: <<-------------------------------------------------
Line 4441: | ++ NAV_ClockModel
Line 4445: | navToc(%d)
Line 4449: | navaf2(%d)
Line 4453: | navaf1(%d)
Line 4457: | navaf0(%d)
Line 4461: | navTgd(%d)
Line 4462: >>-------------------------------------------------
Line 4466: <<-------------------------------------------------
Line 4467: | ++ CNAV_ClockModel
Line 4471: | cnavToc(%d)
Line 4475: | cnavTop(%d)
Line 4479: | cnavURA0(%d)
Line 4483: | cnavURA1(%d)
Line 4487: | cnavURA2(%d)
Line 4491: | cnavAf2(%d)
Line 4495: | cnavAf1(%d)
Line 4499: | cnavAf0(%d)
Line 4503: | cnavTgd(%d)
Line 4509: | cnavISCl1cp(%d)
Line 4515: | cnavISCl1cd(%d)
Line 4521: | cnavISCl1ca(%d)
Line 4527: | cnavISCl2c(%d)
Line 4533: | cnavISCl5i5(%d)
Line 4539: | cnavISCl5q5(%d)
Line 4541: >>-------------------------------------------------
Line 4545: <<-------------------------------------------------
Line 4546: | ++ GLONASS_ClockModel
Line 4550: | gloTau(%d)
Line 4554: | gloGamma(%d)
Line 4560: | gloDeltaTau(%d)
Line 4562: >>-------------------------------------------------
Line 4565: <<-------------------------------------------------
Line 4566: | ++ SBAS_ClockModel
Line 4570: | sbasTo(%d)
Line 4574: | sbasAgfo(%d)
Line 4578: | sbasAgf1(%d)
Line 4579: >>-------------------------------------------------
Line 4582: <<-------------------------------------------------
Line 4583: | ++ BDS_ClockModel_r12
Line 4587: | bdsAODC_r12(%d)
Line 4591: | bdsToc_r12(%d)
Line 4595: | bdsA0_r12(%d)
Line 4599: | bdsA1_r12(%d)
Line 4603: | bdsA2_r12(%d)
Line 4607: | bdsTgd1_r12(%d)
Line 4608: >>-------------------------------------------------
Line 4612: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 4616: >>-------------------------------------------------
Line 4640: <<-------------------------------------------------
Line 4641: | ++ NavModelKeplerianSet
Line 4645: | keplerToe(%d)
Line 4649: | keplerW(%d)
Line 4653: | keplerDeltaN(%d)
Line 4657: | keplerM0(%d)
Line 4661: | keplerOmegaDot(%d)
Line 4665: | keplerE(%d)
Line 4669: | keplerIDot(%d)
Line 4673: | keplerAPowerHalf(%d)
Line 4677: | keplerI0(%d)
Line 4681: | keplerOmega0(%d)
Line 4685: | keplerCrs(%d)
Line 4689: | keplerCis(%d)
Line 4693: | keplerCus(%d)
Line 4697: | keplerCrc(%d)
Line 4701: | keplerCic(%d)
Line 4705: | keplerCuc(%d)
Line 4706: >>-------------------------------------------------
Line 4730: <<-------------------------------------------------
Line 4731: | ++ NavModelNAV_KeplerianSet
Line 4737: | navURA(%d)
Line 4741: | navFitFlag(%d)
Line 4745: | navToe(%d)
Line 4749: | navOmega(%d)
Line 4753: | navDeltaN(%d)
Line 4757: | navM0(%d)
Line 4761: | navOmegaADot(%d)
Line 4765: | navE(%d)
Line 4769: | navIDot(%d)
Line 4773: | navAPowerHalf(%d)
Line 4777: | navI0(%d)
Line 4781: | navOmegaA0(%d)
Line 4785: | navCrs(%d)
Line 4789: | navCis(%d)
Line 4793: | navCus(%d)
Line 4797: | navCrc(%d)
Line 4801: | navCic(%d)
Line 4805: | navCuc(%d)
Line 4810: | LPP_addNAVparam_present
Line 4814: | ephemCodeOnL2(%d)
Line 4818: | ephemL2Pflag(%d)
Line 4823: | ephemSF1Rsvd.reserved1(%d)
Line 4827: | ephemSF1Rsvd.reserved2(%d)
Line 4831: | ephemSF1Rsvd.reserved3(%d)
Line 4835: | ephemSF1Rsvd.reserved4(%d)
Line 4839: | ephemAODA(%d)
Line 4841: >>-------------------------------------------------
Line 4867: <<-------------------------------------------------
Line 4868: | ++ NavModelCNAV_KeplerianSet
Line 4872: | cnavTop(%d)
Line 4876: | cnavURAindex(%d)
Line 4880: | cnavDeltaA(%d)
Line 4884: | cnavAdot(%d)
Line 4888: | cnavDeltaNo(%d)
Line 4892: | cnavDeltaNoDot(%d)
Line 4901: | cnavMo(%ld)
Line 4910: | cnavE(%ld)
Line 4919: | cnavOmega(%ld)
Line 4928: | cnavOMEGA0(%ld)
Line 4932: | cnavDeltaOmegaDot(%d)
Line 4941: | cnavIo(%ld)
Line 4945: | cnavIoDot(%d)
Line 4949: | cnavCis(%d)
Line 4953: | cnavCic(%d)
Line 4957: | cnavCrs(%d)
Line 4961: | cnavCrc(%d)
Line 4965: | cnavCus(%d)
Line 4969: | cnavCuc(%d)
Line 4970: >>-------------------------------------------------
Line 4994: <<-------------------------------------------------
Line 4995: | ++ NavModel_GLONASS_ECEF
Line 4999: | gloEn(%d)
Line 5003: | gloP1(0x%02x)
Line 5007: | gloP2(%d)
Line 5011: | gloM(%d)
Line 5015: | gloX(%d)
Line 5019: | gloXdot(%d)
Line 5023: | gloXdotdot(%d)
Line 5027: | gloY(%d)
Line 5031: | gloYdot(%d)
Line 5035: | gloYdotdot(%d)
Line 5039: | gloZ(%d)
Line 5043: | gloZdot(%d)
Line 5047: | gloZdotdot(%d)
Line 5048: >>-------------------------------------------------
Line 5072: <<-------------------------------------------------
Line 5073: | ++ NavModel_SBAS_ECEF
Line 5081: | sbasTo(%d)
Line 5086: | sbasAccuracy(0x%02x)
Line 5090: | sbasXg(%d)
Line 5094: | sbasYg(%d)
Line 5098: | sbasZg(%d)
Line 5102: | sbasXgDot(%d)
Line 5106: | sbasYgDot(%d)
Line 5110: | sbasZgDot(%d)
Line 5114: | sbasXgDotDot(%d)
Line 5118: | sbagYgDotDot(%d)
Line 5122: | sbasZgDotDot(%d)
Line 5123: >>-------------------------------------------------
Line 5147: <<-------------------------------------------------
Line 5148: | ++ NavModel_BDS_KeplerianSet
Line 5152: | bdsAODE_r12(%d)
Line 5156: | bdsURAI_r12(%d)
Line 5160: | bdsToe_r12(%d)
Line 5164: | bdsAPowerHalf_r12(%d)
Line 5168: | bdsE_r12(%d)
Line 5172: | bdsW_r12(%d)
Line 5176: | bdsDeltaN_r12(%d)
Line 5180: | bdsM0_r12(%d)
Line 5184: | bdsOmega0_r12(%d)
Line 5188: | bdsOmegaDot_r12(%d)
Line 5192: | bdsI0_r12(%d)
Line 5196: | bdsIDot_r12(%d)
Line 5200: | bdsCuc_r12(%d)
Line 5204: | bdsCus_r12(%d)
Line 5208: | bdsCrc_r12(%d)
Line 5212: | bdsCrs_r12(%d)
Line 5216: | bdsCic_r12(%d)
Line 5220: | bdsCis_r12(%d)
Line 5221: >>-------------------------------------------------
Line 5248: <<-------------------------------------------------
Line 5249: | ++ GNSS_NavigationModel
Line 5253: | nonBroadcastIndFlag(%d)
Line 5266: LPP_ConvertGNSS_NavigationModel() - MALLOC FAIL!!!
Line 5275: <<-------------------------------------------------
Line 5276: | ++ GNSS_SatelliteList [%d]
Line 5282: | svID.satellite_id(%d)
Line 5286: | svHealth(0x%02x)
Line 5293: | iod(0x%02x %02x)
Line 5330: !!!!!!!!!! gnss_OrbitModel.choice(%d) is wrong choice !!!!!!!!!!
Line 5338: | svHealthExt(0x%02x)
Line 5340: >>-------------------------------------------------
Line 5345: >>-------------------------------------------------
Line 5372: <<-------------------------------------------------
Line 5373: | ++ GNSS_RealTimeIntegrity
Line 5380: <<-------------------------------------------------
Line 5381: | ++ GNSS_BadSignalList [%d]
Line 5387: | badSVID(%d)
Line 5395: >>-------------------------------------------------
Line 5401: >>-------------------------------------------------
Line 5429: <<-------------------------------------------------
Line 5430: | ++ GNSS_DataBitAssistance
Line 5436: | gnss_TOD(%d)
Line 5442: | gnss_TODfrac(%d)
Line 5458: LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
Line 5469: <<-------------------------------------------------
Line 5470: | ++ GNSS_DataBitsSatList [%d]
Line 5474: | svID(%d)
Line 5488: LPP_ConvertGNSS_DataBitAssistance() - MALLOC FAIL!!!
Line 5499: <<-------------------------------------------------
Line 5500: | ++ GNSS_DataBitsSgnList [%d]
Line 5506: | gnss_SignalType(%d)
Line 5517: | gnss_DataBits(0x%02x %02x %02x %02x ...)
Line 5519: >>-------------------------------------------------
Line 5524: >>-------------------------------------------------
Line 5529: >>-------------------------------------------------
Line 5556: <<-------------------------------------------------
Line 5557: | ++ GNSS_AcquisitionAssistance
Line 5563: | gnss_SignalID(%d)
Line 5578: LPP_ConvertGNSS_AcquisitionAssistance() - MALLOC FAIL!!!
Line 5587: <<-------------------------------------------------
Line 5588: | ++ GNSS_AcquisitionAssistList [%d]
Line 5594: | svID(%d)
Line 5598: | doppler0(%d)
Line 5602: | doppler1(%d)
Line 5606: | dopplerUncertainty(%d)
Line 5610: | codePhase(%d)
Line 5614: | intCodePhase(%d)
Line 5618: | codePhaseSearchWindow(%d)
Line 5622: | azimuth(%d)
Line 5626: | elevation(%d)
Line 5632: | codePhase1023(%d)
Line 5665: | dopplerUncertaintyExt_r10(%d)
Line 5668: >>-------------------------------------------------
Line 5677: | confidence_r10(%d)
Line 5680: >>-------------------------------------------------
Line 5704: <<-------------------------------------------------
Line 5705: | ++ AlmanacKeplerianSet
Line 5711: | svID(%d)
Line 5715: | kepAlmanacE(%d)
Line 5719: | kepAlmanacDeltaI(%d)
Line 5723: | kepAlmanacOmegaDot(%d)
Line 5727: | kepSV_StatusINAV(%d)
Line 5733: | kepSV_StatusFNAV(0x%02x)
Line 5738: | kepAlmanacAPowerHalf(%d)
Line 5742: | kepAlmanacOmega0(%d)
Line 5746: | kepAlmanacW(%d)
Line 5750: | kepAlmanacM0(%d)
Line 5754: | kepAlmanacAF0(%d)
Line 5758: | kepAlmanacAF1(%d)
Line 5759: >>-------------------------------------------------
Line 5783: <<-------------------------------------------------
Line 5784: | ++ AlmanacNAV_KeplerianSet
Line 5788: | svID(%d)
Line 5792: | navAlmE(%d)
Line 5796: | navAlmDeltaI(%d)
Line 5800: | navAlmOMEGADOT(%d)
Line 5804: | navAlmSVHealth(%d)
Line 5808: | navAlmSqrtA(%d)
Line 5812: | navAlmOMEGAo(%d)
Line 5816: | navAlmOmega(%d)
Line 5820: | navAlmMo(%d)
Line 5824: | navAlmaf0(%d)
Line 5828: | navAlmaf1(%d)
Line 5829: >>-------------------------------------------------
Line 5853: <<-------------------------------------------------
Line 5854: | ++ AlmanacReducedKeplerianSet
Line 5858: | svID(%d)
Line 5862: | redAlmDeltaA(%d)
Line 5866: | redAlmOmega0(%d)
Line 5870: | redAlmPhi0(%d)
Line 5874: | redAlmL1Health(%d)
Line 5878: | redAlmL2Health(%d)
Line 5882: | redAlmL5Health(%d)
Line 5883: >>-------------------------------------------------
Line 5907: <<-------------------------------------------------
Line 5908: | ++ AlmanacMidiAlmanacSet
Line 5912: | svID(%d)
Line 5916: | midiAlmE(%d)
Line 5920: | midiAlmDeltaI(%d)
Line 5924: | midiAlmOmegaDot(%d)
Line 5928: | midiAlmSqrtA(%d)
Line 5932: | midiAlmOmega0(%d)
Line 5936: | midiAlmOmega(%d)
Line 5940: | midiAlmMo(%d)
Line 5944: | midiAlmaf0(%d)
Line 5948: | midiAlmaf1(%d)
Line 5952: | midiAlmL1Health(%d)
Line 5956: | midiAlmL2Health(%d)
Line 5960: | midiAlmL5Health(%d)
Line 5961: >>-------------------------------------------------
Line 5985: <<-------------------------------------------------
Line 5986: | ++ AlmanacGLONASS_AlmanacSet
Line 5992: | gloAlm_NA(%d)
Line 5996: | gloAlmnA(%d)
Line 6000: | gloAlmHA(%d)
Line 6004: | gloAlmLambdaA(%d)
Line 6008: | gloAlmtlambdaA(%d)
Line 6012: | gloAlmDeltaIa(%d)
Line 6016: | gloAlmDeltaTA(%d)
Line 6020: | gloAlmDeltaTdotA(%d)
Line 6024: | gloAlmEpsilonA(%d)
Line 6028: | gloAlmOmegaA(%d)
Line 6032: | gloAlmTauA(%d)
Line 6036: | gloAlmCA(%d)
Line 6042: | gloAlmMA(0x%02x)
Line 6044: >>-------------------------------------------------
Line 6068: <<-------------------------------------------------
Line 6069: | ++ AlmanacECEF_SBAS_AlmanacSet
Line 6073: | sbasAlmDataID(%d)
Line 6077: | svID(%d)
Line 6081: | sbasAlmHealth(0x%02x)
Line 6085: | sbasAlmXg(%d)
Line 6089: | sbasAlmYg(%d)
Line 6093: | sbasAlmZg(%d)
Line 6097: | sbasAlmXgdot(%d)
Line 6101: | sbasAlmYgDot(%d)
Line 6105: | sbasAlmZgDot(%d)
Line 6109: | sbasAlmTo(%d)
Line 6110: >>-------------------------------------------------
Line 6134: <<-------------------------------------------------
Line 6135: | ++ AlmanacBDS_AlmanacSet_r12
Line 6141: | svID(%d)
Line 6147: | bdsAlmToa_r12(0x%02x)
Line 6152: | bdsAlmSqrtA_r12(%d)
Line 6156: | bdsAlmE_r12(%d)
Line 6160: | bdsAlmW_r12(%d)
Line 6164: | bdsAlmM0_r12(%d)
Line 6168: | bdsAlmOmega0_r12(%d)
Line 6172: | bdsAlmOmegaDot_r12(%d)
Line 6176: | bdsAlmDeltaI_r12(%d)
Line 6180: | bdsAlmA0_r12(%d)
Line 6184: | bdsAlmA1_r12(%d)
Line 6193: | bdsSvHealth_r12(0x%02x %02x)
Line 6195: >>-------------------------------------------------
Line 6222: <<-------------------------------------------------
Line 6223: | ++ GNSS_Almanac
Line 6231: | weekNumber(%d)
Line 6238: | toa(%d)
Line 6245: | ioda(%d)
Line 6252: | ioda(%d)
Line 6259: | ioda(%d)
Line 6278: LPP_ConvertGNSS_Almanac() - MALLOC FAIL!!!
Line 6287: <<-------------------------------------------------
Line 6288: | ++ GNSS_AlmanacList [%d]
Line 6331: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6334: >>-------------------------------------------------
Line 6339: >>-------------------------------------------------
Line 6363: <<-------------------------------------------------
Line 6364: | ++ GNSS_UTC_Model
Line 6375: | gnss_Utc_A1(%d)
Line 6379: | gnss_Utc_A0(%d)
Line 6383: | gnss_Utc_Tot(%d)
Line 6387: | gnss_Utc_WNt(%d)
Line 6391: | gnss_Utc_DeltaTls(%d)
Line 6395: | gnss_Utc_WNlsf(%d)
Line 6399: | gnss_Utc_DN(%d)
Line 6403: | gnss_Utc_DeltaTlsf(%d)
Line 6411: | utcA0(%d)
Line 6415: | utcA1(%d)
Line 6419: | utcA2(%d)
Line 6423: | utcDeltaTls(%d)
Line 6427: | utcTot(%d)
Line 6431: | utcWNot(%d)
Line 6435: | utcWNlsf(%d)
Line 6440: | utcDN(0x%02x)
Line 6444: | utcDeltaTlsf(%d)
Line 6453: | nA(%d)
Line 6457: | tauC(%d)
Line 6463: | b1(%d)
Line 6470: | b2(%d)
Line 6477: | kp(0x%02x)
Line 6485: | utcA1wnt(%d)
Line 6489: | utcA0wnt(%d)
Line 6493: | utcTot(%d)
Line 6497: | utcWNt(%d)
Line 6501: | utcDeltaTls(%d)
Line 6505: | utcWNlsf(%d)
Line 6509: | utcDN(%d)
Line 6513: | utcDeltaTlsf(%d)
Line 6517: | utcStandardID(%d)
Line 6525: | utcA0_r12(%d)
Line 6529: | utcA1_r12(%d)
Line 6533: | utcDeltaTls_r12(%d)
Line 6537: | utcWNlsf_r12(%d)
Line 6541: | utcDN_r12(%d)
Line 6545: | utcDeltaTlsf_r12(%d)
Line 6550: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6554: >>-------------------------------------------------
Line 6582: <<-------------------------------------------------
Line 6583: | ++ GNSS_AuxiliaryInformation
Line 6596: <<-------------------------------------------------
Line 6597: | ++ GNSS_ID_GPS [%d]
Line 6601: | svID(%d)
Line 6607: >>-------------------------------------------------
Line 6620: <<-------------------------------------------------
Line 6621: | ++ GNSS_ID_GLONASS [%d]
Line 6627: | svID(%d)
Line 6637: | channelNumber(%d)
Line 6639: >>-------------------------------------------------
Line 6647: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 6651: >>-------------------------------------------------
Line 6679: <<-------------------------------------------------
Line 6680: | ++ BDS_DifferentialCorrections_r12
Line 6684: | dbds_RefTime_r12(%d)
Line 6693: <<-------------------------------------------------
Line 6694: | ++ BDS_SgnTypeList_r12 [%d]
Line 6702: | gnss_SignalID(%d)
Line 6712: <<-------------------------------------------------
Line 6713: | ++ DBDS_CorrectionList_r12 [%d]
Line 6717: | svID(%d)
Line 6721: | bds_UDREI_r12(%d)
Line 6725: | bds_RURAI_r12(%d)
Line 6729: | bds_ECC_DeltaT_r12(%d)
Line 6731: >>-------------------------------------------------
Line 6737: >>-------------------------------------------------
Line 6743: >>-------------------------------------------------
Line 6770: <<-------------------------------------------------
Line 6771: | ++ BDS_GridModelParameter_r12
Line 6775: | bds_RefTime_r12(%d)
Line 6784: <<-------------------------------------------------
Line 6785: | ++ GridIonList_r12 [%d]
Line 6789: | igp_ID_r12(%d)
Line 6793: | dt_r12(%d)
Line 6797: | givei_r12(%d)
Line 6799: >>-------------------------------------------------
Line 6805: >>-------------------------------------------------
Line 6887: <<-------------------------------------------------
Line 6888: | ++ GNSS_GenericAssistData [%d]
Line 6915: | sbas_ID(%d)
Line 6927: <<-------------------------------------------------
Line 6928: | ++ GNSS_TimeModels [%d]
Line 6933: >>-------------------------------------------------
Line 7010: >>-------------------------------------------------
Line 7038: <<-------------------------------------------------
Line 7039: | ++ ECGI
Line 7042: | MCC
Line 7046: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 7047: >>-------------------------------------------------
Line 7052: | MNC
Line 7056: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 7057: >>-------------------------------------------------
Line 7068: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 7070: | cellIdentity.length(%d)
Line 7071: >>-------------------------------------------------
Line 7094: <<-------------------------------------------------
Line 7095: | ++ ECGI
Line 7102: !!!!!!!!!! FAIL to copy MCC !!!!!!!!!!
Line 7103: >>-------------------------------------------------
Line 7106: | MCC (%d %d %d)
Line 7113: !!!!!!!!!! FAIL to copy MNC !!!!!!!!!!
Line 7114: >>-------------------------------------------------
Line 7117: | MNC (%d %d %d)
Line 7127: | cellidentity.value(0x%02x %02x %02x %02x)
Line 7130: | cellIdentity.length(%d)
Line 7132: >>-------------------------------------------------
Line 7152: <<-------------------------------------------------
Line 7153: | ++ PRS_Info
Line 7156: | bit_mask(0x%02x)
Line 7159: | prs_Bandwidth(%d)
Line 7162: | prs_ConfigurationIndex(%d)
Line 7165: | numDL_Frames(%d)
Line 7170: | prs_MutingInfo_r9.choice(%d)
Line 7179: | prs_MutingInfo_r9.u.po2_r9.value(0x%02x)
Line 7187: | prs_MutingInfo_r9.u.po4_r9.value(0x%02x)
Line 7195: | prs_MutingInfo_r9.u.po8_r9.value(0x%02x)
Line 7205: | prs_MutingInfo_r9.u.po16_r9.value(0x%02x %02x)
Line 7212: >>-------------------------------------------------
Line 7238: <<-------------------------------------------------
Line 7239: | ++ OTDOA_ProvideAssistanceData
Line 7242: | bit_mask(0x%02x)
Line 7246: <<-------------------------------------------------
Line 7247: | ++ OTDOA_ReferenceCellInfo
Line 7250: | bit_mask(0x%02x)
Line 7254: | physCellId(%d)
Line 7264: !!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
Line 7265: >>-------------------------------------------------
Line 7266: >>-------------------------------------------------
Line 7276: | earfcnRef(%d)
Line 7282: | earfcnRef_v9a0(%d)
Line 7290: | antennaPortConfig(%d)
Line 7295: | cpLength(%d)
Line 7303: >>-------------------------------------------------
Line 7319: <<-------------------------------------------------
Line 7320: | ++ otdoa_NeighbourCellInfo
Line 7326: LPP_CopyOTDOA_AssistanceData() - MALLOC FAIL!!!
Line 7327: >>-------------------------------------------------
Line 7328: >>-------------------------------------------------
Line 7340: <<-------------------------------------------------
Line 7341: | ++ otdoa_NeighbourCellFreqInfo
Line 7347: LPP_CopyOTDOA_AssistanceData() - MALLOC FAIL!!!
Line 7348: >>-------------------------------------------------
Line 7349: >>-------------------------------------------------
Line 7350: >>-------------------------------------------------
Line 7365: | bit_mask(0x%02x)
Line 7369: | physCellId(%d)
Line 7378: !!!!!!!!!! FAIL to copy ECGI !!!!!!!!!!
Line 7379: >>-------------------------------------------------
Line 7380: >>-------------------------------------------------
Line 7381: >>-------------------------------------------------
Line 7402: | earfcn(%d)
Line 7409: | earfcn_v9a0(%d)
Line 7418: | cpLength(%d)
Line 7436: | antennaPortConfig(%d)
Line 7446: | slotNumberOffset(%d)
Line 7456: | prs_SubframeOffset(%d)
Line 7463: | expectedRSTD(%d)
Line 7469: | expectedRSTD_Uncertainty(%d)
Line 7471: >>-------------------------------------------------
Line 7478: >>-------------------------------------------------
Line 7488: <<-------------------------------------------------
Line 7489: | ++ otdoa_Error
Line 7492: | choice(%d)
Line 7499: | locationServerErrorCauses.cause(%d)
Line 7505: | targetDeviceErrorCauses.cause(%d)
Line 7511: >>-------------------------------------------------
Line 7514: >>-------------------------------------------------
Line 7538: <<-------------------------------------------------
Line 7539: | ++ PeriodicalReportingCriteria
Line 7562: | reportingAmount(%d)
Line 7581: | reportingInterval(%d)
Line 7583: >>-------------------------------------------------
Line 7601: <<-------------------------------------------------
Line 7602: | ++ QoS
Line 7610: | horizontalAccuracy.accuracy(%d)
Line 7612: | horizontalAccuracy.confidence(%d)
Line 7617: | verticalCoordinateRequest(%d)
Line 7623: | verticalAccuracy.accuracy(%d)
Line 7625: | verticalAccuracy.confidence(%d)
Line 7632: | responseTime.time(%d)
Line 7637: | velocityRequest(%d)
Line 7640: >>-------------------------------------------------
Line 7664: <<-------------------------------------------------
Line 7665: | ++ CommonIEsRequestLocationInformation
Line 7678: | locationInformationType(%d)
Line 7683: <<-------------------------------------------------
Line 7684: | ++ TriggeredReportingCriteria
Line 7688: | cellChange(%d)
Line 7692: | reportingDuration(%d)
Line 7693: >>-------------------------------------------------
Line 7709: | additionalInformation(%d)
Line 7727: | environment(%d)
Line 7733: <<-------------------------------------------------
Line 7734: | ++ LocationCoordinateTypes
Line 7740: | ellipsoidPoint(%d)
Line 7746: | ellipsoidPointWithUncertaintyCircle(%d)
Line 7752: | ellipsoidPointWithUncertaintyEllipse(%d)
Line 7758: | polygon(%d)
Line 7764: | ellipsoidPointWithAltitude(%d)
Line 7770: | ellipsoidPointWithAltitudeAndUncertaintyEllipsoid(%d)
Line 7776: | ellipsoidArc(%d)
Line 7778: >>-------------------------------------------------
Line 7784: <<-------------------------------------------------
Line 7785: | ++ VelocityTypes
Line 7791: | horizontalVelocity(%d)
Line 7797: | horizontalWithVerticalVelocity(%d)
Line 7803: | horizontalVelocityWithUncertainty(%d)
Line 7809: | horizontalWithVerticalVelocityAndUncertainty(%d)
Line 7811: >>-------------------------------------------------
Line 7814: >>-------------------------------------------------
Line 7832: <<-------------------------------------------------
Line 7833: | ++ GNSS_ID
Line 7860: | gnssID(%d)
Line 7861: >>-------------------------------------------------
Line 7879: <<-------------------------------------------------
Line 7880: | ++ GNSS_ID
Line 7911: | gnss_id(%d)
Line 7912: >>-------------------------------------------------
Line 7936: <<-------------------------------------------------
Line 7937: | ++ GNSS_ID_Bitmap
Line 7970: | gnss_ids(0x%02x %02x)
Line 7971: >>-------------------------------------------------
Line 7995: <<-------------------------------------------------
Line 7996: | ++ GNSS_ID_Bitmap
Line 8007: LPP_ConvertGNSS_ID_BitmapToASN() - MALLOC FAIL!!!
Line 8008: >>-------------------------------------------------
Line 8037: | gnss_ids.value(0x%02x %02x)
Line 8038: | gnss_ids.length(%d)
Line 8039: >>-------------------------------------------------
Line 8065: <<-------------------------------------------------
Line 8066: | ++ A_GNSS_RequestLocationInformation
Line 8068: <<-------------------------------------------------
Line 8069: | ++ GNSS_PositioningInstructions
Line 8075: | fineTimeAssistanceMeasReq(%d)
Line 8080: | adrMeasReq(%d)
Line 8085: | multiFreqMeasReq(%d)
Line 8090: | assistanceAvailability(%d)
Line 8094: >>-------------------------------------------------
Line 8096: >>-------------------------------------------------
Line 8120: <<-------------------------------------------------
Line 8121: | ++ Ellipsoid_Point
Line 8129: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8130: >>-------------------------------------------------
Line 8133: | latitudeSign(%d)
Line 8139: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8140: >>-------------------------------------------------
Line 8144: | degreesLatitude(%d)
Line 8150: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8151: >>-------------------------------------------------
Line 8155: | degreesLongitude(%d)
Line 8156: >>-------------------------------------------------
Line 8182: <<-------------------------------------------------
Line 8183: | ++ Ellipsoid_PointWithUncertaintyCircle
Line 8191: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8192: >>-------------------------------------------------
Line 8195: | latitudeSign(%d)
Line 8201: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8202: >>-------------------------------------------------
Line 8206: | degreesLatitude(%d)
Line 8212: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8213: >>-------------------------------------------------
Line 8217: | degreesLongitude(%d)
Line 8223: !!!!!!!!!! uncertainty(%d) is out of range !!!!!!!!!!
Line 8224: >>-------------------------------------------------
Line 8228: | uncertainty(%d)
Line 8229: >>-------------------------------------------------
Line 8255: <<-------------------------------------------------
Line 8256: | ++ EllipsoidPointWithUncertaintyEllipse
Line 8264: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8265: >>-------------------------------------------------
Line 8268: | latitudeSign(%d)
Line 8274: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8275: >>-------------------------------------------------
Line 8279: | degreesLatitude(%d)
Line 8285: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8286: >>-------------------------------------------------
Line 8290: | degreesLongitude(%d)
Line 8296: !!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
Line 8297: >>-------------------------------------------------
Line 8301: | uncertaintySemiMajor(%d)
Line 8307: !!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
Line 8308: >>-------------------------------------------------
Line 8312: | uncertaintySemiMinor(%d)
Line 8318: !!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
Line 8319: >>-------------------------------------------------
Line 8323: | orientationMajorAxis(%d)
Line 8329: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8330: >>-------------------------------------------------
Line 8334: | confidence(%d)
Line 8335: >>-------------------------------------------------
Line 8368: <<-------------------------------------------------
Line 8369: | ++ Polygon [%d]
Line 8374: LPP_ConvertPolygon() - MALLOC FAIL!!!
Line 8375: >>-------------------------------------------------
Line 8387: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8388: >>-------------------------------------------------
Line 8393: | latitudeSign(%d)
Line 8399: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8400: >>-------------------------------------------------
Line 8406: | degreesLatitude(%d)
Line 8412: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8413: >>-------------------------------------------------
Line 8419: | degreesLongitude(%d)
Line 8420: >>-------------------------------------------------
Line 8449: <<-------------------------------------------------
Line 8450: | ++ EllipsoidPointWithAltitude
Line 8458: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8459: >>-------------------------------------------------
Line 8462: | latitudeSign(%d)
Line 8468: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8469: >>-------------------------------------------------
Line 8473: | degreesLatitude(%d)
Line 8479: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8480: >>-------------------------------------------------
Line 8484: | degreesLongitude(%d)
Line 8492: !!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
Line 8493: >>-------------------------------------------------
Line 8496: | altitudeDirection(%d)
Line 8502: !!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
Line 8503: >>-------------------------------------------------
Line 8507: | altitude(%d)
Line 8508: >>-------------------------------------------------
Line 8534: <<-------------------------------------------------
Line 8535: | ++ EllipsoidPointWithAltitudeAndUncertaintyEllipsoid
Line 8543: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8544: >>-------------------------------------------------
Line 8547: | latitudeSign(%d)
Line 8553: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8554: >>-------------------------------------------------
Line 8558: | degreesLatitude(%d)
Line 8564: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8565: >>-------------------------------------------------
Line 8569: | degreesLongitude(%d)
Line 8577: !!!!!!!!!! altitudeDirection(%d) is out of range !!!!!!!!!!
Line 8578: >>-------------------------------------------------
Line 8581: | altitudeDirection(%d)
Line 8587: !!!!!!!!!! altitude(%d) is out of range !!!!!!!!!!
Line 8588: >>-------------------------------------------------
Line 8592: | altitude(%d)
Line 8598: !!!!!!!!!! uncertaintySemiMajor(%d) is out of range !!!!!!!!!!
Line 8599: >>-------------------------------------------------
Line 8603: | uncertaintySemiMajor(%d)
Line 8609: !!!!!!!!!! uncertaintySemiMinor(%d) is out of range !!!!!!!!!!
Line 8610: >>-------------------------------------------------
Line 8614: | uncertaintySemiMinor(%d)
Line 8620: !!!!!!!!!! orientationMajorAxis(%d) is out of range !!!!!!!!!!
Line 8621: >>-------------------------------------------------
Line 8625: | orientationMajorAxis(%d)
Line 8631: !!!!!!!!!! uncertaintyAltitude(%d) is out of range !!!!!!!!!!
Line 8632: >>-------------------------------------------------
Line 8636: | uncertaintyAltitude(%d)
Line 8642: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8643: >>-------------------------------------------------
Line 8647: | confidence(%d)
Line 8649: >>-------------------------------------------------
Line 8675: <<-------------------------------------------------
Line 8676: | ++ EllipsoidArc
Line 8684: !!!!!!!!!! latitudeSign(%d) is out of range !!!!!!!!!!
Line 8685: >>-------------------------------------------------
Line 8688: | latitudeSign(%d)
Line 8694: !!!!!!!!!! degreesLatitude(%d) is out of range !!!!!!!!!!
Line 8695: >>-------------------------------------------------
Line 8699: | degreesLatitude(%d)
Line 8705: !!!!!!!!!! degreesLongitude(%d) is out of range !!!!!!!!!!
Line 8706: >>-------------------------------------------------
Line 8710: | degreesLongitude(%d)
Line 8723: | innerRadius(%d)
Line 8729: !!!!!!!!!! uncertaintyRadius(%d) is out of range !!!!!!!!!!
Line 8730: >>-------------------------------------------------
Line 8734: | uncertaintyRadius(%d)
Line 8740: !!!!!!!!!! offsetAngle(%d) is out of range !!!!!!!!!!
Line 8741: >>-------------------------------------------------
Line 8745: | offsetAngle(%d)
Line 8751: !!!!!!!!!! includedAngle(%d) is out of range !!!!!!!!!!
Line 8752: >>-------------------------------------------------
Line 8756: | includedAngle(%d)
Line 8762: !!!!!!!!!! confidence(%d) is out of range !!!!!!!!!!
Line 8763: >>-------------------------------------------------
Line 8767: | confidence(%d)
Line 8769: >>-------------------------------------------------
Line 8797: <<-------------------------------------------------
Line 8798: | ++ LocationCoordinates
Line 8822: LPP_ConvertLocationCoordinates() - numberOfPolygonPoints is ZERO!!!
Line 8823: >>-------------------------------------------------
Line 8847: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 8851: >>-------------------------------------------------
Line 8877: <<-------------------------------------------------
Line 8878: | ++ HorizontalVelocity
Line 8884: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 8885: >>-------------------------------------------------
Line 8889: | bearing(%d)
Line 8895: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 8896: >>-------------------------------------------------
Line 8900: | horizontalSpeed(%d)
Line 8902: >>-------------------------------------------------
Line 8928: <<-------------------------------------------------
Line 8929: | ++ HorizontalWithVerticalVelocity
Line 8935: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 8936: >>-------------------------------------------------
Line 8940: | bearing(%d)
Line 8946: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 8947: >>-------------------------------------------------
Line 8951: | horizontalSpeed(%d)
Line 8959: !!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
Line 8960: >>-------------------------------------------------
Line 8963: | verticalDirection(%d)
Line 8976: | verticalSpeed(%d)
Line 8977: >>-------------------------------------------------
Line 9003: <<-------------------------------------------------
Line 9004: | ++ HorizontalVelocityWithUncertainty
Line 9010: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9011: >>-------------------------------------------------
Line 9015: | bearing(%d)
Line 9021: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9022: >>-------------------------------------------------
Line 9026: | horizontalSpeed(%d)
Line 9039: | uncertaintySpeed(%d)
Line 9040: >>-------------------------------------------------
Line 9066: <<-------------------------------------------------
Line 9067: | ++ HorizontalWithVerticalVelocityAndUncertainty
Line 9073: !!!!!!!!!! bearing(%d) is out of range !!!!!!!!!!
Line 9074: >>-------------------------------------------------
Line 9078: | bearing(%d)
Line 9084: !!!!!!!!!! horizontalSpeed(%d) is out of range !!!!!!!!!!
Line 9085: >>-------------------------------------------------
Line 9089: | horizontalSpeed(%d)
Line 9097: !!!!!!!!!! verticalDirection(%d) is out of range !!!!!!!!!!
Line 9098: >>-------------------------------------------------
Line 9101: | verticalDirection(%d)
Line 9114: | verticalSpeed(%d)
Line 9127: | horizontalUncertaintySpeed(%d)
Line 9140: | verticalUncertaintySpeed(%d)
Line 9141: >>-------------------------------------------------
Line 9169: <<-------------------------------------------------
Line 9170: | ++ Velocity
Line 9197: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9201: >>-------------------------------------------------
Line 9227: <<-------------------------------------------------
Line 9228: | ++ LocationError
Line 9236: >>-------------------------------------------------
Line 9262: <<-------------------------------------------------
Line 9263: | ++ CommonIEsProvideLocationInformation
Line 9274: >>-------------------------------------------------
Line 9285: >>-------------------------------------------------
Line 9296: >>-------------------------------------------------
Line 9322: <<-------------------------------------------------
Line 9323: | ++ CellGlobalIdEUTRA_AndUTRA
Line 9327: | MCC(%d %d %d)
Line 9331: | MNC(%d %d %d)
Line 9346: | cellIdentity.u.eutra(0x%02x %02x %02x %02x)
Line 9358: | pDst->cellIdentity.u.utra(0x%02x %02x %02x %02x)
Line 9362: !!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
Line 9366: >>-------------------------------------------------
Line 9392: <<-------------------------------------------------
Line 9393: | ++ CellGlobalIdEUTRA_AndUTRA
Line 9396: | plmn_Identity.mcc
Line 9400: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 9401: >>-------------------------------------------------
Line 9406: | plmn_Identity.mnc
Line 9410: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 9411: >>-------------------------------------------------
Line 9425: LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
Line 9426: >>-------------------------------------------------
Line 9437: | cellIdentity.u.eutra.value(0x%02x %02x %02x %02x)
Line 9439: | cellIdentity.u.eutra.length(%d)
Line 9447: LPP_ConvertCellGlobalIdEUTRA_AndUTRA_ToASN() - MALLOC FAIL!!!
Line 9448: >>-------------------------------------------------
Line 9459: | cellIdentity.u.utra.value(0x%02x %02x %02x %02x)
Line 9461: | cellIdentity.u.eutra.length(%d)
Line 9465: !!!!!!!!!! cellIdentity.choice(%d) is wrong choice !!!!!!!!!!
Line 9469: >>-------------------------------------------------
Line 9497: <<-------------------------------------------------
Line 9498: | ++ CellGlobalIdGERAN
Line 9501: | plmn_Identity.mcc
Line 9505: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 9506: >>-------------------------------------------------
Line 9511: | plmn_Identity.mnc
Line 9515: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 9516: >>-------------------------------------------------
Line 9525: LPP_ConvertMeasurementReferenceTime() - MALLOC FAIL!!!
Line 9526: >>-------------------------------------------------
Line 9533: | locationAreaCode.value(0x%02x %02x)
Line 9535: | locationAreaCode.length(%d)
Line 9542: LPP_ConvertMeasurementReferenceTime() - MALLOC FAIL!!!
Line 9543: >>-------------------------------------------------
Line 9550: | cellIdentity.value(0x%02x %02x)
Line 9551: | cellIdentity.length(%d)
Line 9553: >>-------------------------------------------------
Line 9581: <<-------------------------------------------------
Line 9582: | ++ MeasurementReferenceTime
Line 9590: !!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
Line 9591: >>-------------------------------------------------
Line 9595: | gnss_TOD_msec(%d)
Line 9603: !!!!!!!!!! gnss_TOD_frac(%d) is out of range !!!!!!!!!!
Line 9604: >>-------------------------------------------------
Line 9608: | gnss_TOD_frac(%d)
Line 9617: !!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
Line 9618: >>-------------------------------------------------
Line 9622: | gnss_TOD_unc(%d)
Line 9635: <<-------------------------------------------------
Line 9636: | ++ EUTRA
Line 9644: !!!!!!!!!! gnss_TOD_unc(%d) is out of range !!!!!!!!!!
Line 9645: >>-------------------------------------------------
Line 9646: >>-------------------------------------------------
Line 9650: | physCellId(%d)
Line 9659: >>-------------------------------------------------
Line 9660: >>-------------------------------------------------
Line 9671: LPP_ConvertMeasurementReferenceTime() - MALLOC FAIL!!!
Line 9672: >>-------------------------------------------------
Line 9673: >>-------------------------------------------------
Line 9682: | systemFrameNumber.value(0x%02x %02x)
Line 9684: | systemFrameNumber.length(%d)
Line 9685: >>-------------------------------------------------
Line 9688: <<-------------------------------------------------
Line 9689: | ++ UTRA
Line 9702: !!!!!!!!!! fddPrimary_CPICH_Info(%d) is out of range !!!!!!!!!!
Line 9703: >>-------------------------------------------------
Line 9704: >>-------------------------------------------------
Line 9710: | primary_CPICH_Info(%d)
Line 9717: !!!!!!!!!! cellParameters(%d) is out of range !!!!!!!!!!
Line 9718: >>-------------------------------------------------
Line 9719: >>-------------------------------------------------
Line 9725: | cellParameters(%d)
Line 9729: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9740: >>-------------------------------------------------
Line 9741: >>-------------------------------------------------
Line 9750: !!!!!!!!!! referenceSystemFrameNumber(%d) is out of range !!!!!!!!!!
Line 9751: >>-------------------------------------------------
Line 9752: >>-------------------------------------------------
Line 9758: | referenceSystemFrameNumber(%d)
Line 9759: >>-------------------------------------------------
Line 9762: <<-------------------------------------------------
Line 9763: | ++ GSM
Line 9771: !!!!!!!!!! bcchCarrier(%d) is out of range !!!!!!!!!!
Line 9772: >>-------------------------------------------------
Line 9773: >>-------------------------------------------------
Line 9778: | bcchCarrier(%d)
Line 9784: !!!!!!!!!! bsic(%d) is out of range !!!!!!!!!!
Line 9785: >>-------------------------------------------------
Line 9786: >>-------------------------------------------------
Line 9791: | bsic(%d)
Line 9799: >>-------------------------------------------------
Line 9800: >>-------------------------------------------------
Line 9820: | referenceFrame.referenceFN(%d)
Line 9828: !!!!!!!!!! referenceFrame.referenceFNMSB(%d) is out of range !!!!!!!!!!
Line 9829: >>-------------------------------------------------
Line 9830: >>-------------------------------------------------
Line 9835: | referenceFrame.referenceFNMSB(%d)
Line 9844: !!!!!!!!!! deltaGNSS_TOD(%d) is out of range !!!!!!!!!!
Line 9845: >>-------------------------------------------------
Line 9846: >>-------------------------------------------------
Line 9851: | deltaGNSS_TOD(%d)
Line 9853: >>-------------------------------------------------
Line 9857: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 9862: >>-------------------------------------------------
Line 9892: <<-------------------------------------------------
Line 9893: | ++ GNSS_SignalMeasurementInformation
Line 9898: >>-------------------------------------------------
Line 9904: LPP_ConvertGNSS_SignalMeasurementInformation() - numberOfGNSS_MeasurementList is ZERO!!!
Line 9905: >>-------------------------------------------------
Line 9915: <<-------------------------------------------------
Line 9916: | ++ GNSS_MeasurementList [%d]
Line 9921: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 9922: >>-------------------------------------------------
Line 9923: >>-------------------------------------------------
Line 9934: LPP_ConvertGNSS_SignalMeasurementInformation() - [%d].numberOfGNSS_SgnMeasList is ZERO!!!
Line 9935: >>-------------------------------------------------
Line 9936: >>-------------------------------------------------
Line 9949: <<-------------------------------------------------
Line 9950: | ++ GNSS_SgnMeasList[%d]
Line 9955: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 9956: >>-------------------------------------------------
Line 9957: >>-------------------------------------------------
Line 9958: >>-------------------------------------------------
Line 9976: | gnss_SignalID.gnss_SignalID(%d)
Line 9984: !!!!!!!!!! gnss_CodePhaseAmbiguity(%d) is out of range (0..127) !!!!!!!!!!
Line 9985: >>-------------------------------------------------
Line 9986: >>-------------------------------------------------
Line 9987: >>-------------------------------------------------
Line 10000: | gnss_CodePhaseAmbiguity(%d)
Line 10005: LPP_ConvertGNSS_SignalMeasurementInformation() - [%d].[%d].numberOfGNSS_SatMeasList is ZERO!!!
Line 10006: >>-------------------------------------------------
Line 10007: >>-------------------------------------------------
Line 10008: >>-------------------------------------------------
Line 10025: <<-------------------------------------------------
Line 10026: | ++ GNSS_SatMeasList[%d]
Line 10031: LPP_ConvertGNSS_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 10032: >>-------------------------------------------------
Line 10033: >>-------------------------------------------------
Line 10034: >>-------------------------------------------------
Line 10035: >>-------------------------------------------------
Line 10058: | svID.satellite_id(%d)
Line 10064: !!!!!!!!!! cNo(%d) is out of range (0..63) !!!!!!!!!!
Line 10065: >>-------------------------------------------------
Line 10066: >>-------------------------------------------------
Line 10067: >>-------------------------------------------------
Line 10068: >>-------------------------------------------------
Line 10086: | cNo(%d)
Line 10109: | mpathDet(%d)
Line 10117: !!!!!!!!!! carrierQualityInd(%d) is out of range (0..3) !!!!!!!!!!
Line 10118: >>-------------------------------------------------
Line 10119: >>-------------------------------------------------
Line 10120: >>-------------------------------------------------
Line 10121: >>-------------------------------------------------
Line 10139: | carrierQualityInd(%d)
Line 10146: !!!!!!!!!! codePhase(%d) is out of range (0..2097151) !!!!!!!!!!
Line 10147: >>-------------------------------------------------
Line 10148: >>-------------------------------------------------
Line 10149: >>-------------------------------------------------
Line 10150: >>-------------------------------------------------
Line 10168: | codePhase(%d)
Line 10176: !!!!!!!!!! integerCodePhase(%d) is out of range (0..127) !!!!!!!!!!
Line 10177: >>-------------------------------------------------
Line 10178: >>-------------------------------------------------
Line 10179: >>-------------------------------------------------
Line 10180: >>-------------------------------------------------
Line 10198: | integerCodePhase(%d)
Line 10205: !!!!!!!!!! codePhaseRMSError(%d) is out of range (0..63) !!!!!!!!!!
Line 10206: >>-------------------------------------------------
Line 10207: >>-------------------------------------------------
Line 10208: >>-------------------------------------------------
Line 10209: >>-------------------------------------------------
Line 10227: | codePhaseRMSError(%d)
Line 10250: | doppler(%d)
Line 10259: !!!!!!!!!! adr(%d) is out of range (0..33554431) !!!!!!!!!!
Line 10260: >>-------------------------------------------------
Line 10261: >>-------------------------------------------------
Line 10262: >>-------------------------------------------------
Line 10263: >>-------------------------------------------------
Line 10281: | adr(%d)
Line 10284: >>-------------------------------------------------
Line 10290: >>-------------------------------------------------
Line 10296: >>-------------------------------------------------
Line 10302: >>-------------------------------------------------
Line 10330: <<-------------------------------------------------
Line 10331: | ++ GNSS_LocationInformation
Line 10337: >>-------------------------------------------------
Line 10345: >>-------------------------------------------------
Line 10349: >>-------------------------------------------------
Line 10573: <<-------------------------------------------------
Line 10574: | ++ A_GNSS_ProvideLocationInformation
Line 10591: >>-------------------------------------------------
Line 10610: >>-------------------------------------------------
Line 10635: | pSrc->gnss_Error.cause(0x%x)
Line 10638: >>-------------------------------------------------
Line 10667: <<-------------------------------------------------
Line 10668: | ++ GNSS_ReferenceTimeReq
Line 10677: <<-------------------------------------------------
Line 10678: | ++ gnss_TimeReqPrefList [%d]
Line 10683: LPP_ConvertGNSS_ReferenceTimeReq() - MALLOC FAIL!!!
Line 10684: >>-------------------------------------------------
Line 10685: >>-------------------------------------------------
Line 10693: >>-------------------------------------------------
Line 10702: | gps_TOW_assistReq(%d)
Line 10709: | notOfLeapSecReq(%d)
Line 10712: >>-------------------------------------------------
Line 10736: <<-------------------------------------------------
Line 10737: | ++ GNSS_SignalIDs
Line 10754: | gnss_SignalIDs(0x%02x)
Line 10755: >>-------------------------------------------------
Line 10779: <<-------------------------------------------------
Line 10780: | ++ GNSS_SignalIDs
Line 10792: LPP_ConvertGNSS_SignalIDsToASN() - MALLOC FAIL!!!
Line 10793: >>-------------------------------------------------
Line 10805: | gnss_SignalIDs(0x%02x)
Line 10806: >>-------------------------------------------------
Line 10830: <<-------------------------------------------------
Line 10831: | ++ GNSS_DifferentialCorrectionsReq
Line 10838: | dgnss_ValidityTimeReq(%d)
Line 10839: >>-------------------------------------------------
Line 10865: <<-------------------------------------------------
Line 10866: | ++ GNSS_NavigationModelReq
Line 10873: <<-------------------------------------------------
Line 10874: | ++ StoredNavListInfo
Line 10882: !!!!!!!!!! gnss_WeekOrDay(%d) is out of range (0..4095) !!!!!!!!!!
Line 10883: >>-------------------------------------------------
Line 10884: >>-------------------------------------------------
Line 10888: | gnss_WeekOrDay(%d)
Line 10902: | gnss_Toe(%d)
Line 10908: !!!!!!!!!! t_toeLimit(%d) is out of range (0..15) !!!!!!!!!!
Line 10909: >>-------------------------------------------------
Line 10910: >>-------------------------------------------------
Line 10914: | t_toeLimit(%d)
Line 10925: LPP_ConvertGNSS_NavigationModelReq() - numberOfSatListRelatedDataList is ZERO!!!
Line 10932: <<-------------------------------------------------
Line 10933: | ++ SatListRelatedDataList [%d]
Line 10939: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 10940: >>-------------------------------------------------
Line 10941: >>-------------------------------------------------
Line 10942: >>-------------------------------------------------
Line 10953: | svID.satellite_id(%d)
Line 10960: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 10961: >>-------------------------------------------------
Line 10962: >>-------------------------------------------------
Line 10963: >>-------------------------------------------------
Line 10974: | svID.iod(0x%02x %02x)
Line 10982: !!!!!!!!!! clockModelID(%d) is out of range (0..8) !!!!!!!!!!
Line 10983: >>-------------------------------------------------
Line 10984: >>-------------------------------------------------
Line 10985: >>-------------------------------------------------
Line 10992: | clockModelID(%d)
Line 11001: !!!!!!!!!! orbitModelID(%d) is out of range (0..8) !!!!!!!!!!
Line 11002: >>-------------------------------------------------
Line 11003: >>-------------------------------------------------
Line 11004: >>-------------------------------------------------
Line 11011: | orbitModelID(%d)
Line 11014: >>-------------------------------------------------
Line 11021: >>-------------------------------------------------
Line 11024: <<-------------------------------------------------
Line 11025: | ++ ReqNavListInfo
Line 11034: LPP_ConvertGNSS_NavigationModelReq() - MALLOC FAIL!!!
Line 11035: >>-------------------------------------------------
Line 11036: >>-------------------------------------------------
Line 11051: | svReqList(0x%02x %02x %02x %02x ...)
Line 11056: | svReqList(... 0x%02x %02x %02x %02x)
Line 11066: >>-------------------------------------------------
Line 11067: >>-------------------------------------------------
Line 11082: >>-------------------------------------------------
Line 11083: >>-------------------------------------------------
Line 11094: | addNavparamReq(%d)
Line 11097: >>-------------------------------------------------
Line 11101: !!!!!!!!!! choice(%d) is wrong choice !!!!!!!!!!
Line 11105: >>-------------------------------------------------
Line 11129: <<-------------------------------------------------
Line 11130: | ++ GNSS_DataBitAssistanceReq
Line 11138: !!!!!!!!!! gnss_TOD_Req(%d) is out of range (0..3599) !!!!!!!!!!
Line 11139: >>-------------------------------------------------
Line 11143: | gnss_TOD_Req(%d)
Line 11151: !!!!!!!!!! gnss_TOD_FracReq(%d) is out of range (0..999) !!!!!!!!!!
Line 11152: >>-------------------------------------------------
Line 11156: | gnss_TOD_FracReq(%d)
Line 11163: !!!!!!!!!! dataBitInterval(%d) is out of range (0..15) !!!!!!!!!!
Line 11164: >>-------------------------------------------------
Line 11168: | dataBitInterval(%d)
Line 11182: LPP_ConvertGNSS_DataBitAssistanceReq() - numberOfGNSS_DataBitsReq is ZERO!!!
Line 11189: <<-------------------------------------------------
Line 11190: | ++ GNSS_DataBitsReq [%d]
Line 11196: LPP_ConvertGNSS_DataBitAssistanceReq() - MALLOC FAIL!!!
Line 11197: >>-------------------------------------------------
Line 11198: >>-------------------------------------------------
Line 11205: | svID.satellite_id(%d)
Line 11206: >>-------------------------------------------------
Line 11212: >>-------------------------------------------------
Line 11236: <<-------------------------------------------------
Line 11237: | ++ GNSS_CommonAssistDataReq
Line 11247: LPP_ConvertGNSS_CommonAssistDataReq() - numberOfGNSS_TimeReqPrefList is ZERO!!!
Line 11258: <<-------------------------------------------------
Line 11259: | ++ GNSS_ReferenceLocationReq
Line 11263: >>-------------------------------------------------
Line 11269: <<-------------------------------------------------
Line 11270: | ++ GNSS_IonosphericModelReq
Line 11282: LPP_ConvertGNSS_CommonAssistDataReq() - MALLOC FAIL!!!
Line 11283: >>-------------------------------------------------
Line 11284: >>-------------------------------------------------
Line 11290: | klobucharModelReq(0x%02x)
Line 11296: | neQuickModelReq_present
Line 11299: >>-------------------------------------------------
Line 11305: <<-------------------------------------------------
Line 11306: | ++ GNSS_EarthOrientationParametersReq
Line 11311: >>-------------------------------------------------
Line 11313: >>-------------------------------------------------
Line 11337: <<-------------------------------------------------
Line 11338: | ++ A_GNSS_RequestAssistanceData
Line 11342: LPP_ConvertA_GNSS_RequestAssistanceData() - NULL Pointer!!!
Line 11343: >>-------------------------------------------------
Line 11352: | gnss_CommonAssistDataReq.bit_mask(0x%x)
Line 11360: LPP_ConvertA_GNSS_RequestAssistanceData() :: ERROR!! No CommonAssistDataReq, but bitmask is Set!!!
Line 11376: LPP_ConvertA_GNSS_RequestAssistanceData() - numberOfGNSS_GenericAssistDataReq is ZERO!!!
Line 11381: <<-------------------------------------------------
Line 11382: | ++ GNSS_GenericAssistDataReq [%d]
Line 11388: LPP_ConvertA_GNSS_RequestAssistanceData() - MALLOC FAIL!!!
Line 11389: >>-------------------------------------------------
Line 11390: >>-------------------------------------------------
Line 11425: | sbas_ID.sbas_id(%d)
Line 11434: LPP_ConvertA_GNSS_RequestAssistanceData() - numberOfGNSS_TimeModelsReq is ZERO!!!
Line 11441: <<-------------------------------------------------
Line 11442: | ++ GNSS_TimeModelsReq [%d]
Line 11448: LPP_ConvertA_GNSS_RequestAssistanceData() - MALLOC FAIL!!!
Line 11449: >>-------------------------------------------------
Line 11450: >>-------------------------------------------------
Line 11451: >>-------------------------------------------------
Line 11469: | gnss_TO_IDsReq(%d)
Line 11475: | deltaTreq(%d)
Line 11477: >>-------------------------------------------------
Line 11502: <<-------------------------------------------------
Line 11503: | ++ GNSS_RealTimeIntegrityReq
Line 11508: >>-------------------------------------------------
Line 11521: <<-------------------------------------------------
Line 11522: | ++ GNSS_AcquisitionAssistanceReq
Line 11529: | gnss_SignalID_Req.gnss_SignalID(%d)
Line 11536: | ERROR :: gnss_SignalID_Req.gnss_SignalID(%d). Value Discarded.
Line 11538: >>-------------------------------------------------
Line 11544: <<-------------------------------------------------
Line 11545: | ++ GNSS_AlmanacReq
Line 11553: | modelID(%d)
Line 11555: >>-------------------------------------------------
Line 11561: <<-------------------------------------------------
Line 11562: | ++ GNSS_UTCModelReq
Line 11570: | modelID(%d)
Line 11572: >>-------------------------------------------------
Line 11578: <<-------------------------------------------------
Line 11579: | ++ GNSS_AuxiliaryInformationReq
Line 11584: >>-------------------------------------------------
Line 11590: <<-------------------------------------------------
Line 11591: | ++ BDS_DifferentialCorrectionsReq_r12
Line 11598: >>-------------------------------------------------
Line 11604: <<-------------------------------------------------
Line 11605: | ++ BDS_GridModelReq_r12
Line 11610: >>-------------------------------------------------
Line 11613: >>-------------------------------------------------
Line 11621: >>-------------------------------------------------
Line 11646: <<-------------------------------------------------
Line 11647: | ++ UpdateLocationInformation
Line 11651: LPP_Convert_UpdateLocationInformation() - NULL Pointer!!!
Line 11652: >>-------------------------------------------------
Line 11656: <<-------------------------------------------------
Line 11657: | ++ EllipsoidPointWithAltitude
Line 11663: | latitudeSign(%d)
Line 11670: | degreesLatitude(%d)
Line 11677: | degreesLongitude(%d)
Line 11683: | altitudeDirection(%d)
Line 11689: | altitude(%d)
Line 11690: >>-------------------------------------------------
Line 11692: <<-------------------------------------------------
Line 11693: | ++ HorizontalVelocity
Line 11699: | bearing(%d)
Line 11705: | horizontalSpeed(%d)
Line 11706: >>-------------------------------------------------
Line 11709: <<-------------------------------------------------
Line 11715: | ++ gnss_TOD_msec(%d)
Line 11716: >>-------------------------------------------------
Line 11717: >>-------------------------------------------------
Line 11753: LPP_ConvertLocationInfo() - MALLOC FAIL!!!
Line 11778: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 11852: LPP_ConvertLocationInfo() - ret(%d) len(%d)
Line 11865: <<-------------------------------------------------
Line 11869: !!!!!!!!!! gnss_TOD_msec(%d) is out of range !!!!!!!!!!
Line 11870: >>-------------------------------------------------
Line 11874: | gnss_TOD_msec(%d)
Line 11875: >>-------------------------------------------------
Line 12169: LPP_ConvertBIT1ToASN_U8() - MALLOC FAIL!!!
Line 12204: LPP_ConvertBIT1ToASN_U16() - MALLOC FAIL!!!
Line 12245: LPP_ConvertBIT1ToASN_U32() - MALLOC FAIL!!!
Line 12292: LPP_CopySeqof3() - pDst is not NULL!!!
Line 12303: LPP_CopySeqof3() - MALLOC FAIL!!!
Line 12349: LPP_ConvertSeqof3ToASN() - pDst is not NULL!!!
Line 12363: LPP_ConvertSeqof3ToASN() - out of range src[%d](%d)!!!
Line 12370: LPP_ConvertSeqof3ToASN() - MALLOC FAIL!!!
Line 12393: | %d %d
Line 12397: | %d %d %d
Line 12434: LPP_ConvertSeqof3withNumToASN() - pDst is not NULL!!!
Line 12443: LPP_ConvertSeqof3withNumToASN() - MALLOC FAIL!!!
Line 12509: <<-------------------------------------------------
Line 12510: | ++ MOLRArg
Line 12540: | molr_Type(%d)
Line 12555: <<-------------------------------------------------
Line 12556: | ++ lcs_QoS
Line 12574: | horizontal_accuracy.value(0x%02x)
Line 12580: | EUTRAN_LCS_verticalCoordinateRequest_present
Line 12596: | vertical_accuracy.value(0x%02x)
Line 12626: | responseTime.responseTimeCategory(%d)
Line 12632: | EUTRAN_LCS_velocityRequest_present
Line 12635: >>-------------------------------------------------
Line 12640: <<-------------------------------------------------
Line 12641: | ++ lcsClientExternalID
Line 12653: | externalAddress.value(0x%02x %02x %02x %02x ...)
Line 12654: >>-------------------------------------------------
Line 12659: <<-------------------------------------------------
Line 12660: | ++ mlc_Number
Line 12669: | value(0x%02x %02x %02x %02x ...)
Line 12670: >>-------------------------------------------------
Line 12687: <<-------------------------------------------------
Line 12688: | ++ supportedGADShapes
Line 12695: EUTRAN_LCS_ConvertLCS_MOLRReq() - MALLOC FAIL!!!
Line 12737: | value(0x%02x)
Line 12740: >>-------------------------------------------------
Line 12753: | lcsServiceTypeID(%d)
Line 12771: | ageOfLocationInfo(%d)
Line 12782: <<-------------------------------------------------
Line 12783: | ++ locationType
Line 12826: | locationEstimateType(%d)
Line 12849: EUTRAN_LCS_ConvertLCS_MOLRReq() - MALLOC FAIL!!!
Line 12881: | deferredLocationEventType.value(0x%02x)
Line 12885: >>-------------------------------------------------
Line 12891: | EUTRAN_LCS_pseudonymIndicator_present
Line 12945: >>-------------------------------------------------
Line 12986: <<-------------------------------------------------
Line 12987: | ++ LocationNotificationArg
Line 13001: | notificationType(%d)
Line 13035: | locationType.locationEstimateType(%d)
Line 13073: | locationType.deferredLocationEventType.length(%d)
Line 13076: | locationType.deferredLocationEventType.value(0x%02x %02x)
Line 13117: | lcsClientExternalID.externalAddress.length(%d)
Line 13122: | lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
Line 13127: | lcsClientExternalID.externalAddress.value(0x%02x %02x %02x %02x)
Line 13129: | lcsClientExternalID.externalAddress.value(0x%02x)
Line 13163: | lcsClientName.dataCodingScheme.length(%d)
Line 13165: | lcsClientName.dataCodingScheme.value(0x%02x)
Line 13170: | lcsClientName.nameString.length(%d)
Line 13175: | lcsClientName.nameString.value(0x%02x %02x %02x %02x ...)
Line 13195: | lcsClientName.lcs_FormatIndicator(%d)
Line 13234: | lcsRequestorID.dataCodingScheme.length(%d)
Line 13236: | lcsRequestorID.dataCodingScheme.value(0x%02x)
Line 13241: | lcsRequestorID.requestorIDString.length(%d)
Line 13246: | lcsRequestorID.requestorIDString.value(0x%02x %02x %02x %02x ...)
Line 13266: | lcsRequestorID.lcs_FormatIndicator(%d)
Line 13304: | lcsCodeword.dataCodingScheme.length(%d)
Line 13306: | lcsCodeword.dataCodingScheme.value(0x%02x)
Line 13311: | lcsCodeword.lcsCodewordString.length(%d)
Line 13316: | lcsCodeword.lcsCodewordString.value(0x%02x %02x %02x %02x ...)
Line 13330: | lcsCodeword.lcsServiceTypeID(%d)
Line 13334: >>-------------------------------------------------
Line 13358: <<-------------------------------------------------
Line 13359: | ++ MOLRRes
Line 13369: | locationEstimate.length(%d)
Line 13374: | locationEstimate.value(0x%02x %02x %02x %02x ...)
Line 13393: | add_LocationEstimate.length(%d)
Line 13398: | add_LocationEstimate.value(0x%02x %02x %02x %02x ...)
Line 13410: | velocityEstimate.length(%d)
Line 13415: | velocityEstimate.value(0x%02x %02x %02x %02x ...)
Line 13444: >>-------------------------------------------------
Line 13483: | networkResource(%d)
Line 13508: | networkResource(%d)
Line 13537: | additionalNetworkResource(%d)
Line 13548: | failureCauseParam(%d)
Line 13725: | positionMethodFailure_Diagnostic(%d)
Line 13822: LPP_CheckGpsAvailable() - GNSSGpsLockStatus(%d)
Line 13824: LPP_CheckGpsAvailable() - EmergencyCallPresent(%d)
Line 13826: LPP_CheckGpsAvailable() - isGpsAvailable(%d)
