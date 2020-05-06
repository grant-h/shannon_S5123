Line 216: startStopFsm==NULL
Line 267: BchController: ConfigureThalInstance Memory allocation failed
Line 281: BchController: PCCPCH config failed
Line 287: BchController: PCCPCH configured for UARFCN = %d, cellParamId = %d
Line 331: WARNING !!! , campedUarfcn = %d
Line 339: BCH offline when PCH configured UARFCN = %d, bchCellId = %d, pchCellId = %d
Line 351: BCH offline when FACH configured UARFCN = %d, bchCellId = %d, fachCellId = %d
Line 431: restorePreviousBchConfig(), bchReqMsg == NULL 
Line 452: restorePreviousBchConfig(), uarfcn =%d, primaryScrCode = %d, current RSN = %d
Line 459: restorePreviousBchConfig(), send to BCH controller fail
Line 475: restorePreviousBCHConfig_ConfigToken()
Line 498: restorePreviousBCHConfig_ConfigToken(), bchConfiguredForSIB = %d, isFACHConfig = %d,isPchConfig = %d
Line 526: BCHController[%d]: UARFCN = %d, pScrCode = %d, Camping Cell Config msg received from srcId = %d
Line 566: [BCHController][Config]::uarfcn=%d, ServcellInfo.uarfcn=%d
Line 600: BCHController: Config by URRC, Stored value - UARFCN = %d , pScrCode = %d, bchId = %d, SotredschedulerStateForBgPch = %d
Line 615: BCH[%d] [%d %d]Non-Camping Cell Config msg received for ScrId=%d
Line 662: [BCHController][RfUseRsp]::uarfcn=%d, ServcellInfo.uarfcn=%d
Line 666: [BCH RfUseRsp Removal hold] uarfcn=%d, ServcellInfo.uarfcn=%d
Line 678: ST%d T_DSDS:BCH controller receives Rf Use Response from DSL1RC Message interface
Line 686: ST%d T_DSDS:CBchResourcesController_process: RF pause received from DSL1RC interface:Clearing Cell Synchroniser
Line 725: Cancelling timingAdjustTimer token for BCH pause
Line 735: ST%d T_DSDS: tphy_CBchResourcesController_process: Pause in  BCH configurationt
Line 747: ST%d T_DSDS:BCH process: Pause received but RF not in use. So send Rf release.
Line 763: ST%d T_DSDS: RF resume received from DSL1RC interface
Line 768: [BCH RfUseResumeReq Removal hold] uarfcn=%d, ServcellInfo.uarfcn=%d
Line 775: ST%d T_DSDS:Restart BCH configuration
Line 783: ST%d Hplus T_DSDS: bchResourcesController_ptr Resume received
Line 788: ST%d T_DSDS: bchResourcesController_ptr Enable BCH decoding
Line 807: ST%d Hplus T_DSDS: bchResourcesController_ptr: Resume received
Line 830: ST%d T_DSDS: Restart BCH decoding
Line 838: ST%d T_DSDS:RF pause not enabled ,probably released from URRC
Line 872: BCHController[%d]: Release msg received for SrcId = %d does not match configMsg SrcId = %d
Line 874: BCHController[%d]: Automatic positive release CNF
Line 887: BCHController[%d]: Release msg received for SrcId = %d, isInterReselAttempted = %d, isIntraAttempted (in PCH) = %d
Line 897: BCHController: Clear bchConfiguredForSiB flag
Line 907: Free: TphyTimingAdjustTimer
Line 921: BCHController: NOTHING TO RELEASE: Release msg received for SrcId = %d
Line 940: BCH[%d] Release leaving Rl msg received for ScrId=%d does not match configMsg SrcId=%d - automatic positive release CNF
Line 953: Clear bchConfiguredForSiB flag
Line 957: BCH[%d] Release leaving Rl msg received for ScrId=%d
Line 964: BCHController: NOTHING TO RELEASE Release for SrcId = %d
Line 986: BCHController: Unexpected MsgId = %d
Line 1031: isSfnAcquired %d, bchConfiguredForSiB %d, state %d
Line 1038: BCHController: rscpValidateMsg == NULL pointer
Line 1073: BCHController: Problem in sending RSCP validation req message to SearcherController
Line 1084: Measurement Utility :requestOneCellSynchro:cellSynchroReqMsg == NULL pointer
Line 1103: BCHController: Problem in sending RcellSynchroReqMsg req message to SearcherController
Line 1141: BCHController: detected cell from cell tracking midambleId = %d
Line 1208: BCHController: enableEnDecoding(), CcTrChNum = %d, isCellSFNRequested = %d
Line 1215: BCHController: CcTrCh command enable exec failed
Line 1246: BCHController: sendConfirmationMsg(), isReferenceRl = %d, bchConfiguredForSiB = %d
Line 1270: BCHController: sendConfirmationMsg BCH config flag=  %d, tdd_isBPLMN = %d, MSG ID = %d
Line 1285: BCH CS: Clear 
Line 1309: Mem Freed BchSchedulingInformation = %d 
Line 1316: Mem Freed  SfnArrayPointer = %d 
Line 1324: BCHController: End time = %d, Overall time taken in millisecond= %d, Over all GAP = %d
Line 1354: BCHController: sendConfirmationMsg is BG PCH = %d, StateForBgPch = %d
Line 1366: isInterReselAttempted = %d, isIntraAttempted (in PCH) = %d
Line 1386: BCHController: Start time = %d
Line 1392: BCHController:ARRAY FREED sib_array_ptr = %d
Line 1407: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1432: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1455: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1474: BCHController: sendConfirmationMsg(), Unexpected MsgId = %d
Line 1483: BCHController: sendConfirmationMsg(), Unexpected request for confirmation message from %d
Line 1512: BPLMN BCH CONTROLLER UNEXPECTED MESSAGE %d
Line 1525: BCHController: sendConfirmationMsg(), Failure in sending message
Line 1628: BchController: configThalInstancesStf(), No instance of EHalDlPhychProcId
Line 1635: DlSlotInfoArray %d, isDsReconfig %d
Line 1648: BchController: THAL Config, Unable to allocate memory for DlSlotInfoArray, UARFCN = %d, ScrCode = %d
Line 1656: BchController: THAL Config, UARFCN = %d, ScrCode = %d
Line 1672: BchController: PhyCh Config - Insufficient PhyChs
Line 1683: BchController: PCCPCH config failed
Line 1693: BchController: PCCPCH configured for UARFCN = %d, cellParamId = %d
Line 1707: BchController: TrCh Config - Insufficient TrChs
Line 1734: BchController: TrCh Config - config failed
Line 1748: BchController: TrCh Config - TrCh Num = %d
Line 1763: BchController: CcTrCh Config - Insufficient CcTrChs
Line 1799: BchController: CcTrCh Config - Config failed
Line 1809: BchController: CcTrCh Config - CcTrCH Num = %d
Line 1822: BchController: configThalInstancesStf(): Invalid state = %d
Line 1879: BchController: configThalInstancesStf(): Invalid state = %d
Line 1888: BchController: THAL config failed
Line 1996: BchController:tphy_CBchResourcesController_StartThalInstance primaryScrCode  %d
Line 2001: DlPhyChStartCommand thal command exec failed: Err Code %d AddErrCode %d
Line 2032: THAL command exec failed
Line 2072: BchController:IgnoreOrAccpetPause IgnorePause %d PauseIgnoreCount %d, BchFailedDecodingRate %d
Line 2105:  bchCofingToken = %d, bchConfiguredForSiB =%d
Line 2119: IsBchActive: BCH[%d] active, Is Active = %d, Is RF Pause = %d
Line 2175: Bch stopThalInstances: RSN=%d, 
Line 2197: Bch stopUhalInstances: DlCctrchStopCmd exec failed
Line 2205: Bch stopUhalInstances: CCTrCH not running
Line 2222: ST%d T_DSDS: BCH - Unable to send RF release done message to DSL1RC
Line 2227: ST%d T_DSDS:BCH - sendRfReleaseDone to DSL1RC interface from %d
Line 2326: [ST%d T_DSDS] BchResources RfConfigDone
Line 2393: DISCRETE BCH MIB currentSfn = %d, target sfn = %d diff = %d, NumberOfSlotsToTargetSfn = %d, CurrentSlot = %d
Line 2429: T_DSDS BCH request: scheduled time %u requested time %u deviation from scheduled %u Reject/Grant(0/1)-(%d), uphydsl1rcRFState %d
Line 2457: SendRequestToDsl1rc to dsl1rc=%u microS, currenttime=%u microUS, NumberOfSlotsToNextEvent = %d
Line 2478: CancelAllTokens DiscreteBchStartDecode= %d, GapStartToken = %d
Line 2569: Sorted Array Value = %d
Line 2589: Mem allocted BchSchedulingInformation fail!
Line 2594: Mem allocted BchSchedulingInformation = %d 
Line 2598: Already allocated BchSchedulingInformation = %d 
Line 2605: Mem allocted SfnArrayPointer = %d 
Line 2616: ProcessSchedulingInformation  NumberOfSibsToBeAdded = %d NumberOfSibsToBeRemoved = %d
Line 2642: Modify Request SIB type = %d Rep = %d, offset info = %d
Line 2677:  SIB to be removed SIBType = %d, (*RRC_SibToBeRemovedLinkedList) = %d
Line 2741:  BCH CONFIG WITH ONLY MIB SCHEDULING INFO
Line 2780:  UpdateSfnArray IsRfReject = %d modified reference =%d, current sfn %d
Line 2799: UpdateSfnArray Type = %d Rep = %d, offset info = %d, NextSfn = %d
Line 2863: SetReceivedSegment  SibRecievedSfn = %d, Number of elements = %d
Line 2880: SetReceivedSegment  SEGMENT Reset type = %d, SegmentOffsetInfo = %d
Line 2896: SetReceivedSegment SIB INFO type = %d, NumberOfUnreceivedSegments = %d
Line 2931: GetTargetRsnWithRfComp TargetSfn=%d, Current SFN %d, NumberOfSlotsToTargetSfn %d, CurrentSlot %d
Line 2958: DISCRETE BCH Schedule BCH TargetSfn = %d Gap in ms =%d, 
Line 2962:  !!!! ASSERT WARNING !!!!!DiscreteBchStartDecode  = %d
Line 2969: Debug DiscreteBchStartDecode =%d
Line 2995: DISCRETE BCH Schedule PostStartBchDecoding current RSN =%d,DiscreteBchStartDecode = %d
Line 3054: DISCRETE BCH NextSfnToBeDecoded = %d, Current SFN = %d, SfnToBeReceivedToCurrentSfnDiff = %d 
Line 3089: ScheduleGapStart GapStartSfn= %d, Current Sfn = %d, Remaining slots = %d, CurrentSlot %d
Line 3094:  !!!! ASSERT WARNING !!!!!
Line 3156: FindGap Is Gap Found = %d, start index = %d, End index = %d, SFN Lenght = %d, TotalNumberOfSegments = %d
Line 3195:  ScheduleGapStart Needs to be Rescheduled
Line 3217:  MessageQueue Event = %d, is Held = %d, Address = %d 
Line 3240:  PostHeldEvent EventHeld = %d
Line 3271:  %d Event will be processed 
Line 3296:  Event not found EventHeld = %d
Line 3337:  %d Event will be Held 
Line 3419: IfSibsAreScheduled NoOfSfnToNextSib %d,SortedSfnArray %d, current SFN %d
Line 3436: DISCRETE BCH IDLE EVENTS , ID = %d, SFN = %d
Line 3472:  DBCH: Dont run BCH as no PS configuration
Line 3516:  !!!! ASSERT WARNING !!!!!
Line 3533: DISCRETE BCH DECODING EVENTS , ID = %d, SFN = %d
Line 3687:  !!!! ASSERT WARNING !!!!!
Line 3704: DISCRETE BCH GAP EVENTS , ID = %d, SFN = %d
Line 3813:  !!!! ASSERT WARNING !!!!!
Line 3830: DISCRETE BCH RF PASUE EVENTS , ID = %d, SFN = %d
Line 3923:  !!!! ASSERT WARNING !!!!!
Line 3939: DISCRETE BCH BGPCH EVENTS , ID = %d, SFN = %d
