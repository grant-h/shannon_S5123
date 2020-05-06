Line 112: CheckActiveSRB: SRB1_Active(%d) SRB3_Active(%d)
Line 199: SubCheckNodeConditionForAsConfig : Invalid CheckNode(%d)
Line 205: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 209: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 275: SubCheckNodeAndSendNextMsgForAsConfig : L2 Config Condition(%d)
Line 334: SubCheckNodeAndSendNextMsgForAsConfig : Security Config Condition(%d)
Line 390: SubCheckNodeAndSendNextMsgForAsConfig : Phy Config Condition(%d)
Line 446: SubCheckNodeAndSendNextMsgForAsConfig : Meas Config Condition(%d)
Line 456: SubCheckNodeAndSendNextMsgForAsConfig : ProcedureId(%d) Invalid CurNode(%d)
Line 545: TriggerStateChange : RrcState(%s)
Line 554: SubCheckNodeConditionForRandomAccess : Invalid CheckNode(%d)
Line 652: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 652: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 658: Set WaitNextHdlr to true by force regardless of the condition to wait the next msg.
Line 704: Set WaitNextHdlr to true by force regardless of the condition to wait the next msg.
Line 751: SubCheckNodeAndSendNextMsgForRandomAccess : ProcedureId(%d) Invalid CurNode(%d)
Line 777: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : Receive CellAcqInd
Line 793: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : BchConfigCnf
Line 809: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : Receive TSib1ExpireyInd
Line 824: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : Receive SIB1_IND
Line 856: CheckNodeCondition: SubCheckNodeConditionForEssentialSIAcq : CellStatusReq_Needed
Line 863: SubCheckNodeConditionForFailureInformationMsg : Invalid CheckNode(%d)
Line 869: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 873: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 901: SubCheckNodeConditionForEssentialSIAcq : CurNode %d : Wrong Pid(%d)!!
Line 907: SubCheckNodeConditionForEssentialSIAcq : BchConfigReq_Needed Condition(%d)
Line 914: [NR][EssentialSIAcq]-->RRC_SEND_EXTMSG(RRM_RRC_BCH_CONFIG_REQ)
Line 937: SubCheckNodeConditionForEssentialSIAcq : CurNode %d : Wrong Pid(%d)!!
Line 943: SubCheckNodeConditionForEssentialSIAcq : BchConfigReqCnf_Result Condition(%d)
Line 967: SubCheckNodeConditionForEssentialSIAcq : CurNode %d : Wrong Pid(%d)!!
Line 973: SubCheckNodeConditionForEssentialSIAcq : OPT NoSIB1 Condition(%d)
Line 996: SubCheckNodeConditionForEssentialSIAcq : CurNode %d : Wrong Pid(%d)!!
Line 1002: SubCheckNodeConditionForEssentialSIAcq : OPT ReceiveSib1 Condition(%d)
Line 1026: SubCheckNodeConditionForEssentialSIAcq : CurNode %d : Wrong Pid(%d)!!
Line 1032: SubCheckNodeConditionForEssentialSIAcq : BchReleaseReq_Needed Condition(%d)
Line 1056: SubCheckNodeConditionForEssentialSIAcq : CurNode %d : Wrong Pid(%d)!!
Line 1061: SubCheckNodeConditionForEssentialSIAcq : CellStatusReq_Needed Condition(%d)
Line 1064: RRC_SEND_EXTMSG(RRM_RRC_CELL_STATUS_REQ)
Line 1088: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg :  failure for an MCG RLC bearer
Line 1093: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg :  failure for an SCG RLC bearer
Line 1105: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg : SRB3 is configured
Line 1110: CheckNodeCondition: SubCheckNodeConditionForFailureInformationMsg : SRB3 is NOT configured
Line 1116: SubCheckNodeConditionForFailureInformationMsg : Invalid CheckNode(%d)
Line 1122: CheckNodeCondition: UserHandler CheckNode(%d) Result(%d)
Line 1126: CheckNodeCondition: CurNode(%d) CheckNode(%d) Result(%d)
Line 1143: SubCheckNodeConditionForFailureInformationMsg : MCG_RLC Condition(%d)
Line 1157: SubCheckNodeConditionForFailureInformationMsg : Failure Information for SCG RLC
Line 1167: SubCheckNodeConditionForFailureInformationMsg : SRB3 Config Condition(%d)
Line 1187: SubCheckNodeAndSendNextMsgForAsConfig :  Invalid CurNode(%d)
Line 1198: SetFailureInfo : cellGroupID[%d], LcId[%d] , bDupActDeact[%d]
Line 1209: SetScgFailureType : %d
Line 1223: GetScgFailureType : %d is mapped to %d
Line 1377: %s
Line 1389: [LowPwrCtrl] MeasConfig is not present
Line 1412: [LowPwrCtrl] EventA2 is configured for MeasId(%d) MeasObjId(%d) ReportConfigId(%d)
Line 1465: UpdateNsaCurrentSpCell: CellGrpId(%d) PhysCellId(%d) CarrierFreqDl(%d)
Line 1473: %s
Line 1478: TerminateProcedureOthers Result: Success
Line 1482: TerminateProcedureOthers Result: Failure
Line 1488: RemoveAllDeferMsgByPbd Result: Success
Line 1492: RemoveAllDeferMsgByPbd Result: Failure
Line 1498: ProcessEndcRelease: ReleaseOption(%d)
Line 1556: SetWaitingDbRevertInd: Cur State is changed to waiting DB revert ind state(DbRevertNeeded(%d)).
Line 1560: SetWaitingDbRevertInd: Cur State(DbRevertNeeded(%d)) is already waiting DB revert ind state.
Line 1570: Procedure will be deferred in waiting DB revert ind state.
Line 1608: DbCopyAfterConfigSuc: Copy Shared DB to Revert DB!
Line 1627: DbCopyAfterConfigFail: Copy Revert DB to Shared DB!
Line 1632: Send RB Info to LTE because RB Info was changed after DB revert.
Line 1653: %s
Line 1659: [RBCTRL] NrPdcpToLtePdcpSrbBitmask(0x%08x) NrPdcpToLtePdcpDrbBitmask(0x%08x %08x)
Line 1666: [RBCTRL] NrPdcpToLegacySrbBitmask(0x%08x) NrPdcpToLegacyDrbBitmask(0x%08x %08x)
Line 1676: [RBCTRL] SrbIndex(%d) is added in SrbToReleaseList.
Line 1688: [RBCTRL] SrbIndex(%d) is added in SrbToChangeList.
Line 1706: [RBCTRL] DrbIndex(%d) used as ImsPdn(%d) is not added in DrbToReleaseList.
Line 1711: [RBCTRL] DrbIndex(%d) is added in DrbToReleaseList.
Line 1728: [RBCTRL] DrbIndex(%d) used as ImsPdn(%d) is not added in DrbToChangeList.
Line 1733: [RBCTRL] DrbIndex(%d) is added in DrbToChangeList.
Line 1752: [RBCTRL] Reset EndcReleaseTriggered(%d)
Line 1786: [RBCTRL] SrbIndex(%d)
Line 1788: [RBCTRL] RbId(%d) LcId([%d][%d]) EpsId(%d) RbMode(%s) RbConfStatus(%s) RbState(%s)
Line 1790: [RBCTRL] RbType(%s) UsedPdcp(%s) Release(%d) RbKeyToUse(%s)
Line 1802: [RBCTRL] DrbIndex(%d)
Line 1804: [RBCTRL] RbId(%d) LcId([%d][%d]) EpsId(%d) RbMode(%s) RbConfStatus(%s) RbState(%s)
Line 1806: [RBCTRL] RbType(%s) UsedPdcp(%s) Release(%d) RbKeyToUse(%s) UsedImsPdn(%d)
Line 2064: [RBCTRL] SrbId(%d): Update RbType from %s to %s
Line 2497: [RBCTRL] DrbId(%d): Update RbType from %s to %s
Line 2698: %s
Line 2720: %s
Line 2742: %s
Line 2806: %s
Line 2899: %s
Line 3018: CheckAndSendEndcConfigUpdate: MsgType(%d) EndcDbUpdateBitMask(0x%x)
Line 3028: CheckAndSendEndcConfigUpdate: Set WaitAsCfgStartInd to %d
Line 3049: %s
Line 3108: SpCellConfig: CellId(%d) Arfcn(%d) Band(%d) CellIndex(%d)
Line 3150: SCellConfig[%d]: CellId(%d) Arfcn(%d) Band(%d)
Line 3170: NrConfigInfoPresentBitMask(0x%02x) CellConfigPresent(0x%02x) SCellConfigBitmask(0x%08x)
Line 3175: %s
Line 3197: %s
Line 3214: [RRC] Set NrOpMode(%s)
Line 3214: [RRC] Set NrOpMode(%s)
Line 3235: [NRRRC][EssentialSIAcq] RRC_TIMER_NR_TSIB1_EXPIRY_IND PBD Pid : %d,  state:%d
Line 3315: [RRC][NWMSG][R] MIB
Line 3315: [RRC][NWMSG][R] MIB
Line 3317: [RRC][NRCELL] CellBarred:%d PdcchConfigSib1:%d systemFrameNum[0]:%d systemFrameNum[1]:%d
Line 3317: [RRC][NRCELL] CellBarred:%d PdcchConfigSib1:%d systemFrameNum[0]:%d systemFrameNum[1]:%d
Line 3318: [NRCELL]IntraFreqResel:%d halfFrameIndex:%d SubCarrierSpacingCommon:%d
Line 3319: [NRCELL]SsbIndexEplicit:%d SsbSubCarrierOffset:%d
Line 3330: %s
Line 3341: [NRRRC][Sib1]UpdateCellInfoBySib1Ind : Serving cell information is wrong
Line 3368: [NRRRC][Sib1]UpdateCellInfoBySib1Ind : Result :%d
Line 3376: [NRRRC] Send(-->RRC_RRC_NR_CELL_SEL_START_IND(CellCause:%s))
Line 3399: State is same as before, so do nothing
Line 3404: TriggerStateChange : RrcState(%s)
Line 3409: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 3409: [RRC][NRSTATE] ChangeState : RrcState(%s)
Line 3421: [RrcSteadyState] enter RRC_IDLE
Line 3424: [RrcSteadyState] enter RRC_CONNECTED
Line 3427: [RrcSteadyState] enter RRC_INACTIVE
Line 3430: [RrcSteadyState] Wrong value
Line 3442: [RrcSteadyState] Get RRC_IDLE
Line 3445: [RrcSteadyState] Get RRC_CONNECTED
Line 3448: [RrcSteadyState] Get RRC_INACTIVE
Line 3451: [RrcSteadyState] Wrong value
Line 3503: [NRCELL]Please check PLMN information
Line 3521: [NRCELL] Matched PLMN Id Info index:%d, ID List :%d, Plmn ID index %d
Line 3528: [NRCELL] Matched PLMN Id MCC [%d %d %d] MNC [%d %d %d]
Line 3539: [NRCELL] Not matched PLMN Id MCC [%d %d %d] MNC [%d %d %d]
Line 3564: [NRCELL] There is no SIB1 info %d
Line 3619: [NRCELL] There is no SIB1 info %d
Line 3682: [NRCELL] There is no SIB1 info %d
Line 3699: [NRCELL] There is no SI scheduling info %d
Line 3704: [NRCELL] There is no SIB1 info %d
Line 3811: [NRCELL] Add DetectedFreqList rxLev:%d, arfcn:%d,band:%d
Line 3891: [NRCELL]mcc:%x%x%x mnc:%x%x%x
Line 3895: [NRCELL] Add RrcPlmnInfoList rxLev:%d, ImsEmergencySupport:%d,TacBitMap:%x plmnQual:%d AvailStatus:%d 
Line 3964: [NRCELL] Add BarredCellInfo Arfcn:%d Band:%d CellId:%d TimeStamp:%d, Duration %d 
Line 4005: [NRCELL] Add BarredFreqInfo Arfcn:%d Band:%d TimeStamp:%d, Duration %d 
Line 4030: [NRCELL] Cell Status Cause : %d (ANYPLMNSEARCH)
Line 4035: [NRCELL] Cell Status Cause : %d (PLMNSEARCH)
Line 4040: [NRCELL] Cell Status Cause : %d (BPLMN)
Line 4045: [NRCELL] Cell Status Cause : %d (NONE)
Line 4073: [NRCELL] Error!!!!!
Line 4104: [NRCELL] pCellInfo is null, so do nothing
Line 4122: [NRCELL] pCellInfo is null
Line 4197: [NRCELL][STOP] Please check PBD id
Line 4219: [NRCELL][STOP] PBD state is not running
Line 4241: [ANR] Wrong Report Config ID:%d or MeasObject ID:%d
Line 4278: [ANR] Build Search Target  Arfcn:%d Band:%d CellId:%d, SSB: %d 
Line 4289: [ANR] There is no CGI configured Meas
Line 4349: %s
Line 4374: [Qoffsettemp] Band %d, Arfcn %d, CellId %d
Line 4384: [Qoffsettemp] SIB1 include ConnEstFailureControl
Line 4390: [Qoffsettemp] already current cell info is an entry of NrCellQoffsettempInfoList.
Line 4392: [Qoffsettemp] Qoffsettemp in NrCellQoffsettempInfoList (%d)
Line 4398: [Qoffsettemp] count %d
Line 4402: [Qoffsettemp] connEstFailCount %d
Line 4407: [Qoffsettemp] duration %d seconds
Line 4411: [Qoffsettemp] ConnEstFailOffset %d
Line 4421: [Qoffsettemp] ConnEstFailOffset is infinity value
Line 4430: %s
Line 4432: [Qoffsettemp] clear connEstFailCount info
Line 4546: %s
Line 4557: [NR MRU] (from registry) MRU num : %d
Line 4561: [NR MRU] num has invald value.
Line 4565: [RRC][NR MRU] num is 0. no MRU info in registry
Line 4565: [RRC][NR MRU] num is 0. no MRU info in registry
Line 4575: [NR MRU] (from registry) arfcn %d, scs %d
Line 4588: [NR MRU] arfcn %d is invalid value or not in supported band list. do not use it
Line 4592: [RRC][NR MRU] (from registry) size of MRU info %d
Line 4592: [RRC][NR MRU] (from registry) size of MRU info %d
Line 4600: %s
Line 4610: [NR MRU] currentArfcn : %d
Line 4614: [NR MRU] MruFreqInfo.size : %d
Line 4620: [NR MRU] iter->Arfcn %d
Line 4632: [NR MRU] iter->Arfcn %d
Line 4657: [NR MRU] MruFreq.Arfcn %d, MruFreq.SubCarrierSpacingSSB %d
Line 4678: [NR MRU] (registry update) num : %d
Line 4683: [NR MRU] (from DB) iter->Arfcn %d, iter->SubCarrierSpacingSSB %d
Line 4690: [NR MRU] (registry update) index %d arfcn %d, scs %d
Line 4708: SIB1 : AddPLMNInfo
Line 4729: PLMN info %x%x%x %x%x%x
Line 4751: Update Fail Cause %d
Line 4770: ERROR :: ModificationPeriodCoeff is invalid ==> received value = %d
Line 4790: ERROR :: ModificationPeriodCoeff is invalid ==> received value = %d
Line 4818: GetMccSearchPlmnInfo : MCC Info  %x %x %x
Line 4819: GetMccSearchPlmnInfo : MNC Info  %x %x %x
Line 4832: [NRCELL] GetMccInfo : There is no SIB1 info %d
Line 4865: T304 value is invalid! Set to max value(10000ms).
Line 4892: T304 value is invalid! Set to max value(10000ms).
Line 4899: SCG is NULL. T304 value will be returned 10000ms
Line 4946: T310 value is invalid! Set to max value(6000ms).
Line 4980: Set T304 value to ModifiedT304(%d)
Line 5002: TRACH(%d) is started!
Line 5018: T310_SCG is started
Line 5028: TSIB1 is started
Line 5039: [LowPwrCtrl] NR_T_LOW_PWR_MODE is started
Line 5064: Modification period is 0, it means SIB1 of serving cell is incorrect, Should be check!!
Line 5080: NR_T_SIMOD_BOUND is started, Timer value : %d
Line 5093: TRACH(%d) is stopped!
Line 5106: T310_SCG is stopped!
Line 5118: TSIB1 is stopped!
Line 5130: T300 value is invalid!pSCellINFO or SIB1 is null.
Line 5168: T300 value is invalid! Set to maximum value(2000ms).
Line 5182: T301 value is invalid!pSCellINFO or SIB1 is null.
Line 5219: T301 value is invalid! Set to maximum value(2000ms).
Line 5262: T311 value is invalid! Set to default value(30000ms).
Line 5278: T319 value is invalid!pSCellINFO or SIB1 is null.
Line 5315: T319 value is invalid! Set to maximum value(2000ms).
Line 5330: T380 value is not present. Suspend Config is not present
Line 5340: T380 value is not present in suspend config
Line 5373: T380 value is invalid! Set to maximum value(720min).
Line 5390: T390 value is invalid!pSCellINFO or SIB1 is null.
Line 5422: UAC Barring Timer value is invalid! Set to max value(512s).
Line 5457: Wrong Access Category value %d
Line 5469: TREL is started
Line 5482: NR_T380 is started
Line 5502: NR_T390_CAT1 is started
Line 5517: NR_T390_CAT2 is started
Line 5532: NR_T390_CAT3 is started
Line 5547: NR_T390_CAT4 is started
Line 5562: NR_T390_CAT5 is started
Line 5577: NR_T390_CAT6 is started
Line 5592: NR_T390_CAT7 is started
Line 5607: NR_T390_CAT8 is started
Line 5619: NR_T321 is started
Line 5628: NR_T342 is started
Line 5641: NR_T311 is started
Line 5660: NR_T302 is stopped!
Line 5671: NR_T302 is started
Line 5684: NR_T310_MCG is started
Line 5695: TREL is stopped!
Line 5761: CAT8 is alleviated and PendingRnaUpdate is set true
Line 5770: Send(-->MM_RRC_BARRING_ALLEV_IND for T302)
Line 5772: T302 is stopped!
Line 5784: T310_MCG is stopped!
Line 5796: NR_T311 is stopped!
Line 5822: NR_T390_CAT1 is stopped!
Line 5837: NR_T390_CAT3 is stopped!
Line 5851: NR_T390_CAT4 is stopped!
Line 5865: NR_T390_CAT5 is stopped!
Line 5879: NR_T390_CAT6 is stopped!
Line 5893: NR_T390_CAT7 is stopped!
Line 5907: CAT8 is alleviated and PendingRnaUpdate is set true
Line 5911: NR_T390_CAT8 is stopped!
Line 5926: NR_T390_CAT2 is stopped!
Line 5934: Send(-->MM_RRC_BARRING_ALLEV_IND due to T390 stop)
Line 5945: NR_T380 is stopped!
Line 5957: NR_T320 is stopped!
Line 5969: NR_T321 is stopped!
Line 5994: NR_T342 is stopped! and delayBudgetReportingConfig released
Line 6019: NR_T345 is stopped! and overheatingAssistanceConfig released
Line 6041: NR_T_CELLDBVALID is started
Line 6053: NR_T_CELLDBVALID is stopped!
Line 6076: NR_T_AREADBVALID is started
Line 6088: NR_T_AREADBVALID is stopped!
Line 6099: NR_T_WAIT_SI is running already. Keep the running timer!
Line 6104: NR_T_WAIT_SI is started
Line 6116: NR_T_WAIT_SI is stopped!
Line 6128: [LowPwrCtrl] NR_T_LOW_PWR_MODE is stopped!
Line 6251: RbId(%d) is invalid!
Line 6298: defaultPagingCycle(%d), ranPagingCycle(%d) : selectedCycle(%d)
Line 6304: Abnormal case No RanPagingCycle : defaultPagingCycle(%d)
Line 6310: Abnormal case No DefaultPagingCycle : ranPagingCycle(%d)
Line 6316: [PAGING] DrxCycle is invalid in current state : DrxCycleBitmask (0x%08x %08x), defaultPagingCycle(%d), ranPagingCycle(%d), specificDrxCycle(%d)
Line 6330: defaultPagingCycle(%d), specificDrxCycle(%d) : selectedCycle(%d)
Line 6336: defaultPagingCycle(%d)
Line 6342: Abnormal case No DefaultPagingCycle : specificDrxCycle(%d)
Line 6348: [PAGING] DrxCycle is invalid in current state : DrxCycleBitmask (0x%08x %08x), defaultPagingCycle(%d), specificDrxCycle(%d), ranPagingCycle(%d)
Line 6375: Abnormal case No SIB!
Line 6382: [HO] ssbStartFreq(%d), kSsb(%d), freqOffsetToPointA(%d), freqOffsetToFloatSsb(%d), freqPointA(%d), absoultFreqPointA(%d)
