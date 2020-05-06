Line 54: %s
Line 68: L2/PHY Config Needed
Line 74: Init As config
Line 82: Init As config
Line 153: SetAsConfigNeededByDbUpdate: AsConfigStage(%d) AsConfigNeeded(%d)
Line 160: %s
Line 175: %s
Line 185: %s
Line 195: %s
Line 205: %s
Line 216: %s
Line 226: %s
Line 236: %s
Line 248: %s
Line 249: [MUI] rrcMui : (%d)
Line 255: %s
Line 264: [MUI] SetMuiList nasMui: (%d), sendMui: (%d), nasCnfNeed: (%d), msgType: (%d), 
Line 269: %s
Line 273: [MUI] new MuiList added.
Line 279: %s
Line 290: [MUI] Mui check success sendMui: (%d), receivedMui: (%d), nasCnfNeed: (%d), msgType: (%d), nasMui: (%d)
Line 298: [MUI] Mui check failure receivedMui: (%d)
Line 306: %s
Line 318: [MUI] Send(-->MM_RRC_EST_CNF) in CheckMuiListForEstCnf
Line 330: [MUI] Terminate RRC_NR_PRCD_SA_RRC_SETUP Procedure
Line 340: [MUI] Terminate RRC_NR_PRCD_SA_CONN_FALLBACK Procedure
Line 349: [MUI] No EST_REQ in mui List
Line 356: %s
Line 368: [MUI] Send(-->MM_RRC_DATA_CNF)
Line 377: [MUI] No RESUME_COMPLETE in mui List
Line 384: %s
Line 388: [MUI] Mui remove success sendMui: (%d),  nasCnfNeed: (%d), msgType: (%d), nasMui: (%d)
Line 395: %s
Line 396: -----------------------MUI LIST-----------------------
Line 397: [MUI] MuiList Size: %d
Line 401: nasMui: %d   |sendMui: %d   |nasCnfNeed: %d   |msgType: %d
Line 407: %s
Line 415: [MUI] No any info in NrRrcMuiList
Line 428: [MUI] Send(-->MM_RRC_EST_REJ)
Line 437: [MUI] Send(-->MM_RRC_DATA_CNF)
Line 462: NasDedicatedInfoList: new NasDediInfo added.
Line 475: NasDedicatedInfoList: Get nasMui %d in NasDedicatedInfoList
Line 483: NasDedicatedInfoList: No nasMui %d in NasDedicatedInfoList
Line 500: NasDedicatedInfoList: nasMui %d is removed in NasDedicatedInfoList
Line 507: NasDedicatedInfoList: No nasMui %d in NasDedicatedInfoList
Line 514: %s
Line 519: NasDedicatedInfoList: No any info in NasDedicatedInfoList
Line 529: NasDedicatedInfoList: nasMui %d is removed in NasDedicatedInfoList
Line 542: NasDedicatedInfoList: Pending nasMui %d in NasDedicatedInfoList
Line 549: NasDedicatedInfoList: No nasMui %d in NasDedicatedInfoList
Line 556: %s
Line 566: NasDedicatedInfoList: No any info in NasDedicatedInfoList
Line 581: [UAC] Barring check already done
Line 590: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 590: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 599: NasDedicatedInfoList: Pending Msg is triggered in RRC_CONNECTED
Line 607: NasDedicatedInfoList: Pending Msg is triggered in RRC_INACTIVE
Line 619: NasDedicatedInfoList: Pending Msg is discarded due to UAC check fail
Line 632: %s
Line 633: -----------------------Nas Dedicated Info LIST-----------------------
Line 634: NasDedicatedInfoList: Size: %d
Line 638: | nasMui: %d  |nasMsgLength: %d |Pending status: %d
Line 657: [DrbInfoForLoopBack] DeltaDrbRbInfoBitmask set %d
Line 662: [DrbInfoForLoopBack] DrbToReleaseList.DrbId[%d]: %d
Line 667: [DrbInfoForLoopBack] No any DRB configuration
Line 678: [DrbInfoForLoopBack] EpsBearerId : %d
Line 684: [DrbInfoForLoopBack] pduSessionId : %d
Line 689: [DrbInfoForLoopBack] DrbToAddMod[%d] was released
Line 704: [DrbInfoForLoopBack] DrbIdForLB: %d, RbTypeForLB: %d, RbConfStatusForLB: %d, RbDirectionForLB: %d
Line 713: [DrbInfoForLoopBack] DrbCnt: %d
Line 724: FreeEstablishReqMessage: Free establish Request message successfully
Line 738: CheckDataReqBeforePerforming : Current RRC state : %d
Line 740: SaRrcReconfigPrcdState(%d), SaRrcReestPrcdState(%d), SaRrcReleasePrcdState(%d), SaRrcResumePrcdState(%d)
Line 748: CheckDataReqBeforePerforming : Message is pended while RRC_CONNECTED
Line 753: CheckDataReqBeforePerforming : Ulinformation transfer is triggered while RRC_CONNECTED
Line 761: CheckDataReqBeforePerforming : Message is pended while RRC_INACTIVE
Line 766: CheckDataReqBeforePerforming : RRC Resume procedure is triggered while RRC_CONNECTED
Line 781: [UEIdentity] : Set C-RNTI : %d
Line 789: [UEIdentity] : Get valid C-RNTI : %d
Line 794: [UEIdentity] : Fail to Get Invalid C-RNTI
Line 804: [UEIdentity] : Clear C-RNTI
Line 812: [UEIdentity] : Set Full I-RNTI : %d
Line 820: [UEIdentity] : Get valid Full I-RNTI : %d
Line 825: [UEIdentity] : Fail to Get Invalid Full I-RNTI
Line 835: [UEIdentity] : Clear Full I-RNTI
Line 843: [UEIdentity] : Set Short I-RNTI : %d
Line 851: [UEIdentity] : Get valid Short_I_RNTI : %d
Line 856: [UEIdentity] : Fail to Get Invalid Short_I_RNTI
Line 866: [UEIdentity] : Clear Short_I_RNTI
Line 879: TriggeringRnaUpdate : RNA update can't be triggered in %d 
Line 903: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 903: [RRC][UAC] No SIB1 Db. Access attempt is allowed.
Line 909: TriggeringRnaUpdate : RNA update is not triggered by UAC check fail. PendingRnaUpdate set true.
Line 915: TriggeringRnaUpdate : RNA update is triggered
Line 928: clear NrDb success!
Line 936: commitConfigDbToRevertDb success!
Line 944: RevertToPreviousDb success!
Line 955: No configured DRB. ActiveDataStatus: 0
Line 972: Set ActiveDataStatus pdu session id %d
Line 977: wrong pdu session Id %d
Line 982: ActiveDataStatus: %d
Line 994: SRB2 is established. So UlInfoTransfer message will be sent by SRB2
Line 999: SRB2 is not established yet. So UlInfoTransfer message will be sent by SRB1
Line 1021: [RLF] Establishment Procedure is not completed
Line 1023: [RLF] AS security has not been activated!
Line 1037: [RLF] AS security has been activated, but SRB2 and at least one DRB have not been setup
Line 1044: [RLF] AS security has been activated
Line 1057: SetservingPhyCellId(%d)
Line 1062: GetservingPhyCellId(%d)
