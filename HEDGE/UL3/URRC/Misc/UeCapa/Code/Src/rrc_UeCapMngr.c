Line 203: rrc_UeCapMngr.c: rrc_UeCapMngr_init: Timer T304 creation failed
Line 255: rrc_UeCapMngr.c: rrc_UeCapMngr_init: T304 Delete Failed
Line 391:  : Support for SIB 11 bis removed for TDD 
Line 418:  : Support for RLC Support of Two LC removed for TDD 
Line 467: disable EUTRA in RatMode = %d
Line 474: rrc_UeCapMngr_PopUlUeCapInfo Setting measurement capabilty for TDD Eutra
Line 600: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: Timer T304 Stop Failed.
Line 617: rrc_UeCapMngr.c: AwaitAck_UECapabilityEnq: Post state to UECAPENQAWAITACK failed.
Line 660: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to IDLE failed.
Line 672: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to AWAITCAPINFOCNF failed.
Line 687: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: rrc_ss_StartTimer() not Successful
Line 693: AwaitAck_UECapInfoAck: failed to send UECapInfo (cause %d)
Line 699: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Timer T304 Stop Failed.
Line 710: rrc_UeCapMngr.c: AwaitAck_UECapInfoAck: Post state to IDLE failed.
Line 749: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Timer T304 Stop Failed.
Line 768: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Failure to post state IDLE
Line 802: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: rrc_ss_StartTimer() not Successful
Line 808: rrc_UeCapMngr.c: AwaitAck_UECapabilityInfoCnf: Failure to post state AWAITACK
Line 862: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityEnq: Timer T304 Stop Failed.
Line 916: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Timer T304 Stop Failed.
Line 937: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Failure to post state IDLE
Line 971: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: rrc_ss_StartTimer() not Successful
Line 978: rrc_UeCapMngr.c: AwaitCapInfoCnf_UECapabilityInfoCnf: Failure to post state AWAITACK
Line 1035: ERROR stopping T313 timer
Line 1044: rrc_UeCapMngr.c: DefaultState_T304Expiry: SendInternalMsgSingleton FAIL
Line 1050: rrc_UeCapMngr.c: DefaultState_T304Expiry: Failure to post state IDLE
Line 1087: Failed to stop T304
Line 1091: Running T304 is stopped successfully
Line 1114: Failed to transit to IDLE state
Line 1136: UMTS RAT RESUMED, so LTE supporting frequency bands are being updated
Line 1209: rrc_UeCapMngr.c: Idle_UECapabilityEnq: rrc_DlMsgInitialProcess_postProcess() returned FALSE
Line 1240: rrc_UeCapMngr.c: Idle_UECapabilityEnq: Failure to post state AWAITACK
Line 1468: SetUlRFCapability, UePowerClass = %d TxRxFrequencySeparation = %d
Line 1537: Phy Ch Cap not populated for the 384 and 768 
Line 1555: >> MultiModeCapability: Supported %d
Line 1562: >> MultiModeCapability: Invalid Request (Fdd %d, Tdd %d)
Line 1567: >> MultiModeCapability: Requested %d
Line 1573: >> MultiModeCapability: Requested %d
Line 1581: >> MultiModeCapability: Requested %d, RequestOverwritten %d
Line 1587: >> MultiModeCapability: Invalid Request %d
Line 1591: >> MultiModeCapability: Requested %d
Line 1600: >> MultiModeCapability: Requested %d, RequestOverwritten %d
Line 1606: >> MultiModeCapability: Invalid Request %d
Line 1610: >> MultiModeCapability: Requested %d
Line 1615: [SetUlMsgMultiModeRatCapability] GSMSupport %d, MultiCarrierSupport %d, MultiModeCapability = %d
Line 1771: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm900E configured
Line 1782: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm1800 configured
Line 1793: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm1900 configured
Line 1804: pal_UserRegInitItem_NMO_2G_band(0x%x), gsm850 configured
Line 1855: SetUlMsgMeasCapability, Fill the MeasCapability in asnRacBufferPtr
Line 1889: [GSMCAP] No saved Classmark 2/3
Line 2455: RacRelLaterExtBitMask was set
Line 2698: rrc_Class_UeCapMngr_getNumSoftBitsFromPhyLayerCategory 15
Line 2859: UeCapMngr_p->SuppEutraBands[%d] = %d
Line 2908: UeCapMngr_p->RegEutraBands[%d] = %d
Line 2925: [rrc_UeCapMngr_isValidEutraBand] BAND %d is not a Valid EUTRA BAND
Line 2985: [rrc_UeCapMngr_getEutraBandRange] Invalid Band Range
Line 2997: Eutra bandId greater than 64 found
Line 3030: Max(64) Eutra bands are supported so the rest of them will be ignored
Line 3036: %d is not a valid LTE BAND so it will be ignored
Line 3039: Total NumValidEutraBand(%d)
Line 3062: SuppValidEutraBand[%d], %d
Line 3081: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 3096: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 3103: Eutra BandId[64] is reserved.. LTE should not give this
Line 3118: Eutra BandId[%d] cannot be taken, as it already exceed the limit of max
Line 3124: BandId not supported
Line 3136: NumValidEutraBandList1(%d), NumValidEutraBandList2(%d), NumValidEutraBandList3(%d)
Line 3190: NASU_DIV_DUPLEX_MODE 0x%x
Line 3211: BAND%d is not in a valid range
Line 3233: Fatal Error: Messsage Freed abnormally @ [State : %d] [Event : %d] 
Line 3251: rrc_UeCapMngr_isRegisteredEutraBand : UeCapMngr_p->RegEutraBands[%d] = %d
Line 3255: rrc_UeCapMngr_isRegisteredEutraBand : BandId(%d) is supported EUTRA Band
Line 3262: rrc_UeCapMngr_isRegisteredEutraBand : BandId(%d) is not supported EUTRA Band
Line 3279: BAND %d is EUTRA TDD BAND
Line 3284: BAND %d is EUTRA FDD BAND
Line 3290: BAND %d is an invalid BAND
Line 3307: GANSS Not Supported (UtranAgnss %d, ganss_supportInd %d)
Line 3321: GANSS Not Supported (UtranAgnss %d, ganss_supportInd %d)
Line 3344: MaxBand = %d
Line 3353: GetRfFddBandListsFromStoredBands: BandId retrieved = %d
Line 3362: GetRfFddBandListsFromStoredBands: FDD2 BandId retrieved = %d
Line 3367: GetRfFddBandListsFromStoredBands: usupported band = %d
Line 3376: FDDBandList[%d]=%x
Line 3382: FDDBand2List[%d]=%x
Line 3394: UeCapMngr_p is NULL
Line 3406: UeCapMngr_p is NULL
