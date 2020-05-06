Line 169: CSFB is aborted -> bCsfbTrigInd(1->0)
Line 183: [MCD] RF Imbalance Check (%)
Line 215: SameCellSelect:%d
Line 221: IDLE -> Conn
Line 233: Free IntraFreq - Sorted cell when IDLE to CONN
Line 258: ERROR: INIT -> CONN
Line 268: Warning!! gLteRrm_CsfbUtraMeasTmr running when bCsfbTrigInd(0)
Line 269: -> restart Csfb Utra Meas Tmr STOP
Line 277: CSFB is invoked -> bCsfbTrigInd(0->1)
Line 309: BPLMN target Camp On !, Wait CellStatusNtf
Line 337: SIUpdate is TRUE. But PrimaryCell is NULL
Line 344: TargetCell is NULL!
Line 373: FAILURE : PrimaryCell->cell_ID = %d
Line 381: SameCellSelect:%d
Line 392: TargetCell is NULL!
Line 426: FAILURE : PrimaryCell->cell_ID = %d
Line 436: PrimaryCell NULL
Line 461: ERROR: Not IDLE to IDLE
Line 606: Ignore UE STATE NTF(%d) when Category changed
Line 646: HST configure, HST setup = %d, HST Meas Flag = %d. HST Demod Flag = %d
Line 678: Idle -> UE_RACHING, Stop Measurement
Line 714: ERROR: Invalid UE State in NTF
Line 740: ERROR: Invalid UE State in IRAT HO
Line 747: UE STATE: INIT -> Conn, for IRAT HO
Line 792: (MobState) LteRrm_InitMobilityStateList
Line 839: (MobState) LteRrm_InitMobilityState
Line 866: (Stationary) LteRrm_InitStationaryState
Line 899: LteRrm_CheckEvalLeadTime
Line 905: - Tcrmax increased
Line 922: - TimeToExp before timer adjust: %d
Line 926: - Start Tcrmax2
Line 934: - Tcrmax decreased
Line 950: - TimeToExp before timer adjust: %d
Line 957: - Start Tcrmax3
Line 980: - No change in Tcrmax - TimeToExp : %d
Line 984: - Start Tcrmax4
Line 1011: (Mobstate) LteRrm_CountMobilityCRCnt
Line 1038: - TCRmax should have been expired
Line 1047: - Cell change count(%d) in CRList
Line 1071: (MobState) LteRrm_SetMobilityState
Line 1072: - TempCRCnt(%d) NMed(%d) NHigh(%d)
Line 1079: - State: HIGH_MOBILITY_STATE
Line 1084: - State: MEDIUM_MOBILITY_STATE
Line 1108: - State: NORMAL_MOBILITY_STATE
Line 1143: - Flag states are not valid. SpeedDepParamInd(%d) SpeedDepReselInd(%d)
Line 1163: LteRrm_SwitchSpeedParam
Line 1171: - mode mismatch.. ConnMeasConfig.SpeedDepParamInd(0)
Line 1175: - Update conn speedDepParam -> idle speedDepResel
Line 1195: - mode mismatch.. Sib.Type3.SpeedDepReselInd(0)
Line 1199: - Update idle speedDepResel -> conn speedDepParam
Line 1217: wrong stateTrans(%d)
Line 1225: SameCellSelect:%d
Line 1267: (MobState) Mobility state update at Handover
Line 1277: (MobState) Mobility state update at Reselection
Line 1283: - CurrTime(%d)
Line 1284: - Teval(%d), NMed(%d), NHigh(%d), THystNormal(%d)
Line 1290: pNewElem is NULL
Line 1304: - Monitoring timestamps at cell change
Line 1310: - %d. List CRTime(%d)
Line 1324: - ERROR in Mobility.CRTimeList
Line 1332: - Start Tcrmax1 : No active previously (Teval: %d sec)
Line 1344: - Mobility.CRCnt(%d)
Line 1357: - ERROR: Elem of mob list is not linked
Line 1364: Skip Mob state check - SameCellSelect(%d), SameCellRevisit(%d)
Line 1400: Invalid mobility state
Line 1443: Invalid mobility state
Line 1487: Invalid mobility state
Line 1533: Invalid mobility state
Line 1601: BestNCellInfo: RAT(%d): EARFCN[%4d], PCID[%3d], RSRP_N[%4d]
Line 1685: Stationary FALSE due to Cell_ID condition. (%d)!= (%d), Cell channged!
Line 1694: Stationary FALSE due to IntraFreq RSRP: Current(%d),Previous(%d)
Line 1702: Stationary FALSE due to InterFreq(Earfcn:%d) RSRP: Current(%d),Previous(%d)
Line 1710: Stationary FALSE due to UtraFreq(Uarfcn:%d) RSRP: Current(%d),Previous(%d)
Line 1718: Stationary FALSE due to GeranFreq(Arfcn:%d) RSRP: Current(%d),Previous(%d)
Line 1737: Stationary FALSE due to RSRP(%d)(%d) condition(Diff:%d,Threshold:%d) 
Line 1764: stationaryIndex Increased(%d)!(Idle:%d/Conn:%d)
Line 1772: stationaryIndex reset to 0
Line 1795: Index:%d, checkStationary:%d, State:%d, SamplingDuration:%d, MaxDiff_RSRP[%d], Average_RSRP[%d], Variance_RSRP[%d]
Line 1803: Previous RSRP: [%d, %d, %d, %d, %d], Current RSRP[%d]
Line 1811: Previous CINR: [%d, %d, %d, %d, %d], Current CINR[%d]
Line 1815: <IntraFreq_BestCell> PCI:%d, RSRP:%d
Line 1817: <InterFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1819: <UtraFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1821: <GeranFreq_BestCell> Earfcn: %4d, PCI:%3d, RSRP:%d
Line 1827: Full stationary(%d)
Line 1832: Normal stationary(%d)
Line 1837: Semi stationary(%d)
Line 1842: Not stationary(%d)
Line 1854: Stationary.isStationary: 1 to 0
Line 1871: Stationary.isStationary: 0 to 1
Line 1930: bFirstCycle: 1->0
Line 1952: bFirstCycle: 0->1
Line 1969: bFirstMeasRemain: 0
Line 1985: bFirstMeasRemain: 1
Line 2000: LteRrm_InitAllMeasSuspParam
Line 2019: LteRrm_InitUtraForcedMeasCsfb
Line 2047: LteRrm_InitForcedInterFreqMeas
