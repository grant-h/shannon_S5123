Line 178: [NRSIB] RNA check : No Tracking Area Code in SIB1. NW should send this value in standalone
Line 187: [NRSIB] RNA check : No RAN Area Code in SIB1
Line 190: [NRSIB] RNA check : Get ServCellInfo successfully
Line 196: [NRSIB] RNA check : No Selected PLMN in SibDb
Line 239: [NRSIB] RNA check : ServingCell (Cell Id :%d) is belong to the ranAreaCellList. no need  RNA update
Line 243: [NRSIB] RNA check : PLMN matched but no matched cell ID(%d) in ranAreaCellList
Line 248: [NRSIB] RNA check : ServingCell is not belong to the ranAreaCellList. need RNA update
Line 277: [NRSIB] RNA check : ServingCell (RAN Area Code :%d) is belong to the ranAreaConfigList. no need  RNA update
Line 281: [NRSIB] RNA check : TAC matched but no matched RNA Area Code(%d)  in ranAreaConfigList
Line 284: [NRSIB] RNA check : PLMN matched but no matched TAC(%d) or RNA Area Code(%d) in ranAreaConfigList
Line 288: [NRSIB] RNA check : ServingCell is not belong to the ranAreaConfigList. need RNA update
Line 293: [NRSIB] RNA check : Invalid RNA Info choice. need RNA update
Line 299: [NRSIB] RNA check : No RNA info. need RNA update
Line 316: [NRSIB] RNA check : No pScellInfo or Sib1 in SibDb. need RNA update
Line 326: [NRSIB] RNA check : Can't get ServingCell Info in SibDb. need RNA update
Line 402: [NRSIB] Valid SIB%d is filled to SibUpdateReq from CurrentReceived Sibs
Line 421: [NRSIB] ERROR. SIB1 is only CellSpecific. No AreaInfoList
Line 478: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 486: [NRSIB] Valid SIB%d is filled to SibUpdateReq from AreaInfoDb
Line 558: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 566: [NRSIB] Valid SIB%d is filled to SibUpdateReq from CellInfoDb
Line 629: [NRSIB] SIB%d isn't defined not yet. It should be added
Line 640: %s
Line 659: [NRSIB] SIB1 : OTHER SIBs acquire procedure is triggerd, SIB ACQ MODE (%d)
Line 746: [NRSIB] No SchedulingInfoList, not satisfied with the UE CAPA(%x)
Line 753: [NRSIB] There is stored SIBs, No need to acquire SIBs
Line 761: [NRSIB] No SchedulingInfoList(%x)
Line 780: [RRC][NRSIB] There are remained SIbs for PWS, remaining Sib(%x)
Line 780: [RRC][NRSIB] There are remained SIbs for PWS, remaining Sib(%x)
Line 785: [NRSIB] All SIBs for PWS are acquired
Line 792: [RRC][NRSIB] There are remained SIbs(%x), remaied ondemand Sib(%x)
Line 792: [RRC][NRSIB] There are remained SIbs(%x), remaied ondemand Sib(%x)
Line 798: [NRSIB] All SIBs are acquired
Line 817: [NRSIB] RAT mode %d
Line 821: [NRSIB] discard SIB5 (LTE RAT is disable
Line 852: [NRSIB][ERROR] NO PLMN ID, Can't compare
Line 888: [NRSIB] Valid Time is remained
Line 938: [NRSIB] Stored SIB%d is valid, No needed to read for AreaID(%d)
Line 952: [NRSIB] Stored SIB%d is valid, No needed to read for CellId(%d)
Line 955: [NRSIB] Stored SIB%d is not valid anymore, re-acq procedure is needed for AreaID(%d) CellID(%d)
Line 970: [NRSIB] Stored SIB%d is valid, No needed to read for CellId(%d)
Line 975: [NRSIB] Stored SIB%d is not valid anymore, re-acq procedure is needed for CellId(%d)
Line 990:  CellInfo list is full, Cell(%d)(%d) is Freed
Line 1003: NR_TSIB1 is started
Line 1016: NR_TSIB1 is stopped!
Line 1027: NR_TSIB_3HRS is started
Line 1038: NR_TSIB_3HRS is stopped!
Line 1049: NR_T_SIBRACH is started
Line 1062: NR_T_SIBRACH is stopped!
Line 1073: NR_TRACH is started
Line 1084: NR_TRACH is stopped!
Line 1104: NumSiReqRscList_NUL = %d
Line 1108: SiReqRscList_NUL[%d]: %d, %d, %d
Line 1113: NumSiReqRscList_SUL = %d
Line 1117: SiReqRscList_SUL[%d]: %d, %d, %d
Line 1122: No SiReqRscList
Line 1153: UL_Type is wrong!!
Line 1171: UL_Type is wrong!!
Line 1196: UL_Type is wrong!!
Line 1231: %s
Line 1245: [NRSIB] Clear SIBs that do not need to wait in Connect State
Line 1246: [NRSIB] NrRrcNeededSchedInfo : %d NrRrcOnDemandSchedInfo : %d
Line 1250: [NRSIB] Waiting for the remaining SIBs, Don't stop SIB acqisition procedure
Line 1262: [NRSIB] StopSibAcqPrcd, RRM_RRC_BCH_RELEASE_REQ to stop reading SIB(s)
Line 1280: [NRSIB] StopSibAcqPrcd, RRM_RRC_BCH_RELEASE_REQ to stop reading SIB(s)
Line 1287: [NRSIB] Skip StopSibAcqPrcd
Line 1303: [SIB][DB]NRRRC_PWS_ETWS_PRIMARY!! CheckPwsNoti() TRUE
Line 1310: [SIB][DB]NRRRC_PWS_ETWS_SECONDARY!! SegNum[%d] lastSegment : CheckPwsNoti() TRUE
Line 1315: [SIB][DB]NRRRC_PWS_ETWS_SECONDARY!! SegNum[%d] notlastSegment : CheckPwsNoti() FALSE
Line 1323: [SIB][CMAS]couldn't found relevant CMAS DB element.
Line 1330: [SIB][DB]NRRRC_PWS_CMAS!! CmasMsg[%d].SegNum[%d] lastSegment : CheckPwsNoti() TRUE
Line 1335: [SIB][DB]NRRRC_PWS_CMAS!! CmasMsg[%d]SegNum[%d] notlastSegment : CheckPwsNoti() FALSE
Line 1352: [NRSIB][CMAS]CheckRxAllCmasSegment :: invalid number of last segment[%d].
Line 1360: [NRSIB][CMAS]CheckRxAllCmasSegment :: LastSegmentNumber[%d] but segment[%d] msg is not received.
Line 1364: [NRSIB][CMAS]CheckRxAllCmasSegment :: LastSegmentNumber[%d] All segment msg is received.
Line 1391: %s
Line 1397: [NRSIB] pAssembledEtwsMsg alloc FAIL
Line 1406: [NRSIB][ETWS]Need to check segment length. total[%d], current[%d]
Line 1418: [NRSIB][ETWS]AssembleEtwsSecondaryMsg LastSegmentNumber[%d] Cnt[%d] memPos[%d] 
Line 1431: %s
Line 1437: [NRSIB] pAssembledCmasMsg alloc FAIL
Line 1445: [NRSIB][CMAS]Need to check segment length. total[%d], current[%d]
Line 1457: [NRSIB][CMAS]pAssembledCmasMsg LastSegmentNumber[%d] Cnt[%d] memPos[%d] 
