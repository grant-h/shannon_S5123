Line 388: Reset PrioBaseRankingList from ReselRanker
Line 401: remove a PrioBaseReselCandidate from RankList (0x%x)
Line 421: [rrc_ReselRanker_RemovePrioBaseReselectionCandidate]ReselRanker_p->PrioBaseListCount(%d) > (Asn_maxNumEUTRAFreqs(%d) * MaxEutraCellsMeas(%d))
Line 430: remove a PrioBaseReselCandidate from QrbRankList (0x%x)
Line 535: ERROR Undefined Cell Info List
Line 679: >> Skip GSM Cell: SuitableFddCellPresent %d
Line 688: Reselection candidate, accepted as Tresel Running and Seving Cell Not Suitable
Line 714: >> Skip GSM Cell: SuitableFddCellPresent %d
Line 728: >> Reselection candidate, rejected as on the best Sir-freq while PeriodicInterFReselMeas is configured (Squal > Sintersearch)
Line 761: Prio Base Ranked Cell : CellIdx[%d] = EARFCN[%d] PhyCellId[%d] Priority[%d]
Line 785: Utra Prio Base Ranked Cell : CellIdx[%d] = UARFCN[%d] Cpich[%d] CellId[%d] CellReselType[%d]
Line 837: Serving Cell is barred so not considered to be a reselection candidate
Line 843: cell id(%d) is higher rank than serving cell TReselection(%d)
Line 846: Reselection candidate 
Line 871: Use TReselection (%d) without Flooring
Line 880: Expand Treselection (%d) to above DRX
Line 892: NeighborCell(%d,%d) not yet verified to be better => TResel Not Started
Line 921: CandidateCell(%d,%d) not yet verified to be worse => TResel Not Stopped
Line 930: ReselRanker removed the last %i entries from the Ranking List
Line 955: CellIdx[%d] = Freq[%d] Cpich[%d] CellId[%d] CellReselType[%d]
Line 991: ***Ranking List before prioritising Csg Cells***
Line 1061: ReselRanker moved the the CSG cell Freq[%d] Cpich[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1073: This is TargetCSG Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1080: ***Ranking List after prioritising Csg Cells***
Line 1114: ***Prio Base Ranking List before prioritising Csg Cells***
Line 1184: ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1192: This is TargetCSG UMTS Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] CellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1199: ***Prio Base Ranking List after prioritising Csg Cells***
Line 1233: ***Prio Base Ranking List before prioritising Csg Cells***
Line 1303: ReselRanker moved the the CSG cell Arfcn[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1311: This is TargetCSG EUTRA Cell in neighbor cell list but This is not a best cell on ARFCN[%d] PhyCellId[%d] from ListIdx[%d] to top[%d] of the Ranking List
Line 1318: ***Prio Base Ranking List after prioritising Csg Cells***
Line 1366: Could not refresh BSIC verification request
Line 1367: Could not refresh BSIC verification request
Line 1415: ->Building Ranking list
Line 1463: SuitableFddCellPresent %d
Line 1472: Reselection candidate, rejected as Selection criteria not met
Line 1494: Inter-freq cell (%d,%d), IsMeasValid set to FALSE
Line 1501: GSM cell, IsMeasValid set to FALSE
Line 1552: ->Building PrioBase S Criteria Met List
Line 1586: Fast U2L threshold = %d dBm
Line 1590: Fast U2L criteria met: Rsrp=%d > FastU2LRscpTh=%d
Line 1605: Eutra Treselection %d, Overwrite it to a real eutra meas cycle (DrxCycle %d, NumEutraFreq %d)
Line 1609: New Eutra Treselection %d
Line 1616: Expand Treselection (%d) to above DRX
Line 1633: Remaining Time(%d) is within a Valid Range(%d)
Line 1638: Error Stopping PrioBaseTResel Timer  
Line 1661: Reselection candidate, Rejected as Selection criteria not met, 
Line 1672: Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 1702:   ->Keep Cells with Highest HCS priority that meet H Criteria
Line 1742:     %d Cells do not meet H Criteria
Line 1784:     %d Cells do not have Highest Priority (%d)
Line 1803: ->Filtering Ranking list
Line 1816: HCS in use: Clear SIR Ranking list
Line 1997: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
Line 2030: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
Line 2056: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2062: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2068: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2076: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Line 2083: rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)  
Line 2157: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc CellReselType
Line 2190: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc ScaleType
Line 2206: ScaleTReselection: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
Line 2215: ScaleTReselection: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleLenCoeff %d
Line 2223: ScaleTReselection: (CellPch or UraPch) DrxCoeff %d
Line 2238: ScaleTReselection: (Idle) DrxCoeff %d
Line 2244: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2250: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2256: rrc_ReselRanker_ScaleTReselection Applied in Cell Fach Pending state
Line 2264: rrc_ReselRanker_ScaleTReselectionFailure: Unsupported rrc state
Line 2314: Tresel: Invalid DrxCycleLenCoeff
Line 2320: ScaleTReselection: ScaledTResel (%d) before FLOORING with ValDrx (%i), DRXCycleLength (%d)
Line 2331: ScaleTReselection:  Inapplicable DRX cycle -> NO FLOORING TO DRX
Line 2336: ScaleTReselection: Unwanted TResel State or RRC State -> NO FLOORING TO DRX
Line 2344: rrc_ReselRanker_ScaleTReselection: Treselection*1000(%d) ScaleFactor*1000(%d) Scaled Tresel*1000(%d)  
Line 2363: ReselRanker: (Idle) DrxCoeff %d
Line 2373: ReselRanker: (CellPch or UraPch) DrxCoeff %d, DrxCoeff2 %d
Line 2382: ReselRanker: (CellPch or UraPch) DrxCoeff2 set to default DrxCycleCoeff %d
Line 2390: ReselRanker: (CellPch or UraPch) DrxCoeff %d
Line 2396: ReselRanker: (Current State %d) DrxCoeff Not Available
Line 2408: ReselRanker: Sim Not Valid, Overwrite DrxCoeff %d
Line 2435: ReselRanker: Invalid DrxCycleLenCoeff
Line 2446: ReselRanker: DrxCycle Not Available
Line 2515: SIR based reselection: BestRscp %d
Line 2529: =============== Cell Reselection Rscp Ranking list start
Line 2533: =============== Cell Reselection EcN0 Ranking list start
Line 2540: =============== Cell Reselection Rscp Ranking list end
Line 2544: =============== Cell Reselection EcN0 Ranking list end
Line 2634: ->Rank the remaining candidates
Line 2679: >> ServingCellOnlyMeas: SuitableFddCellPresent %d
Line 2700: Updating reselection criteria
Line 2705:   Built Ranking list has %d entries
Line 2713:   Filtered Ranking list has %d entries
Line 2721:   Ranked Ranking list has %d entries
Line 2742: Updating PrioBase Reselection criteria
Line 2747:   Built Ranking list %d, QrbRanking list %d
Line 2755: Start QRB Ranking based on RSRQ
Line 2762: Start QRB Ranking based on RSRP
Line 2774: Start Ranking based on RSRQ
Line 2781: Start Ranking based on RSRP
Line 3209: FLOORING: remainder (%d) < period(%d) * delta(%d/1000) -> Flooring To %d
Line 3216: FLOORING: remainder(%d) >= period(%d) * delta(%d), NearestFlooringDrx: %d -> Returning Original Value (%d))
Line 3266: Only Intra Freq Meas allowed at this state
Line 3272: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 3278: TReselection is Zero OR Serving Cell Not suitable condition
Line 3302: Quick RB Criteria Met
Line 3314: TReselection Applies TReselection Done.. Ready for Eutra Reselection
Line 3321: No Eutra Cell Available
Line 3334: Quick Rollback is required for CS Scnx :: Disable E-SIB
Line 3339: Quick Rollback is required for PS Scnx :: Disable E-SIB
Line 3457: Found matched EarlySibCandidateIdx(%d)
Line 3463: WARNING No cell in EarlySibCandidateList is matched to current candidate
Line 3498: Found Candidate with stopped Tresel timer or rejected => EarlySibCandidateList Index (%d) removed
Line 3516: EarlySibListSize=%d
Line 3522: -------------------  Early SIB Reading Candidate List Start
Line 3536: ------------------- Early SIB Reading Candidate List End
Line 3584: WARNING Can't find the next candidate - EarlySibCandidateIdx(%d)
Line 3621: GetFirstSirReselectionCandidate: The best SirCell is the serving cell
Line 3693: GetNextReselectionCandidate: Only serving cell exists in the list - Wait for next measurements
Line 3714: BestRankedIx : %d
Line 3772: PrivIsFddCandidate: Different LAI of CandidateCell(%d,%d) or Reject condition & BCH error -> Search for the next best cell
Line 3790: Reselection CandidateCell(UARFCN%d,PSC%d) has Not Selectable CSG ID %x -> Search for the next best cell
Line 3797: Reselection CandidateCell(UARFCN%d,PSC%d) has Selectable CSG ID %x
Line 3802: Reselection CandidateCell(UARFCN%d,PSC%d) has No CSG ID
Line 3817: PrivIsFddCandidate: ServingCell not suitable or zero TReselection-> Accept this candidate
Line 3826: PrivIsFddCandidate: Tresel timer expired for inter-freq CandidateCell(%d,%d)
Line 3837: Skip E-SIB reading due to Eutra meas
Line 3842: Skip E-SIB reading while BPLMN is running
Line 3851: Skip E-SIB reading while 2G BPLMN is running in peer SIM
Line 3860: Skip E-SIB reading due to DS
Line 3883: PrivIsFddCandidate: (E-SIB) Skip checking TResel of intra-freq CandidateCell(%d,%d)
Line 3894: PrivIsFddCandidate, (Normal Resel) Tresel timer expired for intra-freq CandidateCell(%d,%d)
Line 3902: PrivIsFddCandidate: CandidateCell(%d,%d) is barred or forbidden
Line 3923: PrivFddCandidate: ValidCandidate=TRUE (%d,%d) but, IsMeasValid=FALSE => Wait for new valid measurement
Line 3941: [PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Line 3952: [PConflict] PrivFddCandidate: CandidateCell(%d,%d) is in paging conflict list
Line 4013: Reselection candidate, rejected as BSIC not verified
Line 4047: [APBCR] Updating UtraPriority-based Reselection Criteria
Line 4052: [APBCR] Built Ranking List %d
Line 4103: [APBCR] ->Building PrioBase S Criteria Met List
Line 4139: [APBCR]Remaining Time(%d) is within a Valid Range(%d)
Line 4143: Error Stopping UtraPrioBaseTResel Timer
Line 4166: [APBCR] Reselection candidate, Rejected as Selection criteria not met, 
Line 4172: [APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4200: =============== UtraPriority Based Rscp Ranking List Start
Line 4204: =============== UtraPriority Based EcN0 Ranking List Start
Line 4211: =============== UtraPriority Based Rscp Ranking List End
Line 4215: =============== UtraPriority Based EcN0 Ranking List End
Line 4232: ERROR HCS is in use for UtraPrio Cell Reslection (ivar=%d) -> CHECK THIS
Line 4305: CSG to non-CSG LTE Cell is ignored, as 3G CSG Cell is highest priority
Line 4311: [APBCR] TReselection is Zero OR Serving Cell Not suitable condition
Line 4323: [APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
Line 4329: [APBCR]No Priority Based InterF Cell Candidate Available
Line 4335: [APBCR] Updating GsmPriority-based Reselection Criteria
Line 4340: [APBCR] Built Ranking List %d
Line 4345: Start Ranking based on RSSI
Line 4364: [APBCR][PrivBuildGsmPrioBaseSCriteriaMetList] ->Building PrioBase S Criteria Met List
Line 4400: Remaining Time(%d) is within a Valid Range(%d)
Line 4405: Error Stopping GsmPrioBaseTResel Timer  
Line 4428: [APBCR] Reselection candidate, Rejected as Selection criteria not met, 
Line 4434: [APBCR] Reselection candidate, rejected as Cell Barred in the Barred Cell List
Line 4509: [APBCR] TReselection is Zero OR Serving Cell Not suitable condition
Line 4520: [APBCR] TReselection Applies TReselection Done.. Ready for Priority Based InterF Reselection
Line 4526: [APBCR]No Priority Based InterRat Cell Candidate Available
