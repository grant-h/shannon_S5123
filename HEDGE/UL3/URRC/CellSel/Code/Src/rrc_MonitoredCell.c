Line 121: Invalid CnxMgr Pending state: CellDch - using CellFach as the pending state instead
Line 131: CnxMgr CnxState = Rrc_Cnx_Establishing
Line 137: CnxMgr CnxState = Rrc_Cnx_Releasing
Line 143: CnxMgr CnxState = Rrc_Cnx_Established
Line 145: CnxMgr PendingState = %i
Line 151: CnxMgr CnxState = Rrc_Cnx_Released
Line 153: CnxMgr PendingState = %i
Line 395: Cell barred due to %s [and its peer] not being scheduled
Line 441: Cell barred due to %s [and its peer] not being scheduled
Line 473: Cell barred due to %s [and its peer SIB5/SIB 5 bis] not being scheduled
Line 481: Cell barred due to %s [and its peer] not being scheduled
Line 599: Before assimilation: thisCell(%d,%d), CellToAssim(%d,%d)
Line 645: [rrc_MonitoredCell_AssimilateCell] CellToAssim->NumStoredCells(%d)> FREQUENCY_MAXCELLS(%d)
Line 653: Before assimilation: thisCell(%d,%d), CellToAssim(%d,%d)
Line 680: [rrc_MonitoredCell_AssimilateCell] CellToAssim->NumStoredCells(%d)> FREQUENCY_MAXCELLS(%d)
Line 717: copy MIB/SIB from SCellSysInfoCache (%d)
Line 728: wrong SCellSysInfoIndex (%d)
Line 766: Invalid SibIdExt(%i)
Line 778: Invalid SibId(%i)
Line 797: copy %d from SCellSysInfoCache (%d)
Line 817: ValueTag Changed (ServingCell vs SCellSysInfoCache)
Line 822: wrong SCellSysInfoIndex (%d)
Line 880: copy MIB/SB/SIB from CampedSysInfoContainer (%d)
Line 899: Number of Shared PLMNs: %d
Line 907: Candidate rejected due to PlmnId not matching Target PlmnId
Line 914: Candidate Accepcted due to PlmnId matching Target PlmnId
Line 919: Candidate Accepcted due to PlmnId matching Equiv PlmnId
Line 932: Fatal Error: MIB is not availabe in CampedSysInfoContainer
Line 945: Fatal Error: CampedSysInfoContainer is not available (Uarfcn %d, CellParamId %d)
Line 951: Fatal Error: CampedSysInfoContainer is not available (Uarfcn %d, Cpich %d)
Line 986: Waiting for the NecessarySibsRecved Sibs %d to be received
Line 1014: Waiting for the Idle Mode Sibs to be received
Line 1025: Checking if any other SIB is subscribed other than %s, Id(%i)
Line 1033: Checking Subscription: %s, Id(%i) is subscribed
Line 1051: Ignore assimilating from ServingCell Instance as %s, Id(%i) is not latest
Line 1072: Waiting for the Common Channel Sibs to be received
Line 1132: SIB11/12 recved or requested
Line 1137: need to read Scheduling Info
Line 1142: need to read MIB
Line 1182: SIB4/6 recved or requested
Line 1187: need to read Scheduling Info
Line 1192: need to read MIB
Line 1246: NumStoredCells > FREQUENCY_MAXCELLS
Line 1261: [rrc_MonitoredCell_GetStoredCellSearchCells] MonitoredCell_p->NumStoredCells(%d) >FREQUENCY_MAXCELLS(%d)
Line 1314: IsDCMTestOpModeConditionMet is TRUE
Line 1378: %s indicates that %s is barred for %i seconds
Line 1399: %s indicates that %s is reserved for operator use
Line 1415: %s indicates that %s is reserved for operator use
Line 1434: %s indicates that %s is reserved for extension (future use)
Line 1460: Candidate rejected due to CsgId not matching Target CsgId
Line 1472: Candidate rejected due to CsgId not found in SIB3
Line 1494: Cannot Find MibPtr in ServincCell's SysInfo and NewMibPtr in CandidateCell
Line 1497: ProcessSib3 CSG ID : %x
Line 1507: ProcessSib3 CSG ID : %x is not in WhiteList, this CSG cell is not suitable. (CsgIndicator %d)
Line 1512: ProcessSib3 CSG ID : %x is in WhiteList, this cell is suitable (CsgIndicator %d)
Line 1527: ProcessSib3 CSG ID : %x is not in WhiteList, this cell is not suitable
Line 1535: ProcessSib3 CSG ID : %x
Line 1543: %s: Frequency barred due to %s AccessRestriction IE Processing
Line 1623: ProcessSib5or6: Result of the func call rrc_CellSelecter_IsHHOToDifferentBandInProgress is %d
Line 1704: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1713: %s Processing : %s barred due to Band Indicated not supported by UE (supported : %x, BandInd %x)
Line 1725: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1730: %s Processing : %s not rejected Band Ind (%d) in SIB5 and the PrimaryBandId (%d)
Line 1735: %s Processing : %s rejected due to Band Ind (%d) in SIB5 and the PrimaryBandId (%d) doesn't match.
Line 1753: %s Processing : %s barred due to SIB5 is received in between 2110MHz-2170MHz without Band Ind during Band IV searching
Line 1763: %s Processing : %s barred due to SIB5bis is received in between 2110MHz-2170MHz during Band I searching
Line 1822: Setting the receipt of %s to be necessary since its peer does not have both AICH and PICH info
Line 1834: For %s, PeerSibInfoPtr->IsCurrent is FALSE, return FAIL
Line 1848: %s Processing : %s barred due to missing AICH/PICH info
Line 1920: Setting the receipt of %s to be necessary since its peer does not have both AICH and PICH info
Line 1939: %s Processing : %s barred due to missing PICH info
Line 1970: %s, Id(%i)  stored in %s DB
Line 1987: %s, Id(%i)  stored in %s DB
Line 2021: %s, Id(%i)  deleted from %s DB
Line 2060: %s: Invalid SibIdExt(%i)
Line 2081: %s: Invalid SibId(%i)
Line 2135: OOS in RRC Cnx Establishing : overwrite the Pending state to Idle
Line 2186: LTE not supported: skip SIB19 reading
Line 2194: Cnx Establishing & no QRB: skip SIB19 reading
Line 2213: No deferred SIB11/12 reading (target state = CellFach, rrc cnx setup received
Line 2227: [Cnx Req] deferred SIB11/12 reading (%d)
Line 2233: [Cnx Req] Skip SIB18 reading (%d)
Line 2254: No deferred SIB(%d) reading (target state = CellFach, rrc cnx setup received
Line 2262: [Cnx Req]Deffered SIB(%d) Reading during RRC_Cnx_Setup from Idle
Line 2286: Force to skip SIB11/12 reading (%d)
Line 2313: Force to skip SIB11/12 reading (%d)
Line 2338: Force to skip SIB11/12 reading (%d)
Line 2358: %s: Prepare subscription to %s, Id(%i)
Line 2408: CreateSibCancelSubscription : No MIB 
Line 2440: No deferred SIB11/12 reading (target state = CellFach, rrc cnx setup received
Line 2455: [Cnx Req] deferred SIB11/12 reading::cancel it (%d)
Line 2478: deferred SIB11/12 reading::cancel it (%d)
Line 2495: Force to cancel SIB11/12 reading (%d)
Line 2517: deferred SIB11/12 reading::cancel it (%d)
Line 2539: Force to cancel SIB11/12 reading (%d)
Line 2596: %s: Cancel subscription to %s, Id(%i)
Line 2639: Setting Pending State to Ura Pch to Identify Required Sib 2 in Ura Pch state
Line 2645: OOS in Cnx Establishing : overwrite Pending state to Idle
Line 2657: Setting Pending State to Ura Pch to Identify Required Sib 2 in Ura Pch state
Line 2664: OOS in Cnx Establishing : overwrite Pending state to Idle
Line 2671: [CandidateCell] Cnx Establishing : overwrite Pending state to Idle
Line 2682: IdentifyRequiredSibs : No MIB 
Line 2737: %s is  necessary
Line 2780: pccpchInfo.cellParamId %d, MonitoredCell_p->UarfcnDl %d
Line 2903: %s: Prepare subscription to %s, Id(%i)
Line 2932: %s: Cancelling subscription to %s, Id(%i)
Line 3418: ERROR Sib: %s already has a requester registered for it!
Line 3426: Registered a requester entry for Sib: %s
Line 3436: ERROR Sib: %s already has a requester registered for it!
Line 3444: Registered a requester entry for Sib: %s
Line 3645: Cell(%i,%i): Checking Value Tags in last received MIB against those in the just received MIB
Line 3668: Class:CandidateCell: %s, Id(%i)  is no longer scheduled - deleting Sib
Line 3676: Class:CandiateCell: %s, Id(%i) tag has changed
Line 3704: Cell(%i,%i): Checking Value Tags in last received MIB against those in the just received MIB
Line 3729: Class:CandidateCell: %s, Id(%i)  is no longer scheduled - deleting Sib
Line 3744: Class:CandiateCell: %s, Id(%i) tag has changed
