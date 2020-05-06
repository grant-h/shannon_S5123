Line 307: rrc_TddCellSelReselInfo_GetR:PccpchRscp RSCP(%d) Rvalue(%d)
Line 312: rrc_TddCellSelReselInfo_GetR:PccpchRscp RSCP(%d)
Line 356: rrc_TddCellSelReselInfo_GetH:HValue(%i)
Line 358: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->PccpchRscp = %d TddCellSelReselInfo_p->DeltaPccpchRscp = %d
Line 359: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->PccpchRscp+TddCellSelReselInfo_p->DeltaPccpchRscp) = %d
Line 360: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->common.Qhcs) = %d TddCellSelReselInfo_p->common.Qhcs = %d
Line 361: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->common.TempOffset1 = %d TOn = %d, Ln = %d, Tn = %d
Line 381: rrc_TddCellSelReselInfo_GetH:HValueP(%i)
Line 383: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->PccpchRscp = %d TddCellSelReselInfo_p->DeltaPccpchRscp = %d
Line 384: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->PccpchRscp+TddCellSelReselInfo_p->DeltaPccpchRscp) = %d
Line 385: rrc_TddCellSelReselInfo_GetH:MAP_PCCPCHRSCP(TddCellSelReselInfo_p->common.Qhcs) = %d TddCellSelReselInfo_p->common.Qhcs = %d
Line 386: rrc_TddCellSelReselInfo_GetH:TddCellSelReselInfo_p->common.TempOffset1 = %d TOn = %d, Ln = %d, Tn = %d
Line 450: rrc_TddCellSelReselInfo_RefreshTnTimerStatus: Tn timer not started for the ServingCell =%d 
Line 453: rrc_TddCellSelReselInfo_RefreshTnTimerStatus: TnTimerId =%d 
Line 467: Starting Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 478: Stopping Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 498: Starting Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) > QMeasS(%i) + Qoffsetsn(%i)
Line 509: Stopping Tn timer for Tdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) <= QMeasS(%i) + Qoffsetsn(%i)
Line 526: Started Tn timer for Tdd Cell:(%i,%i) 
Line 534: Tn timer for Tdd Cell:(%i,%i) is not started as  PenaltyTime is ZERO
Line 547: Stopped Tn timer for Tdd Cell:(%i,%i) 
Line 801: Cell (%i,%i) : Srxlev : %i, RSCP : %i dBm, PCompensation : %i dB
Line 867: UmtsCellSelectionMeasurement: Config message add cell:(%i,%i)
Line 904: ERROR: Already actioning a request
Line 915: ERROR Illegal State
Line 938: ERROR: Already actioning a request
Line 985: %s: Prepare subscription to MIB, Id(%i)
Line 1007: ERROR Illegal State
Line 1089: ERROR: Already actioning a request
Line 1155: ERROR Illegal State
Line 1201: %s: Prepare subscription to MIB, Id(%i)
Line 1224: ERROR Illegal State
Line 1284: [URRC_ANR]: NotActive_AbortSibRead
Line 1309: MibId is Ok in ReadingMib_RecvMib
Line 1336: MibId is NULL in ReadingMib_RecvMib
Line 1365: ERROR Illegal State
Line 1416: Received Rscp = %d, Snr = %i
Line 1422: Received DeltaRscp = %i.
Line 1433: ERROR Illegal State
Line 1452: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1463: [rrc_TddFrequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - confirmation
Line 1554: Unexpected Sib with Id (%i)  received
Line 1615: ReadingValidSibs_RecvMib : MIB V-tag changed, give-up this cell
Line 1619: ReadingValidSibs_RecvMib : MIB V-tag changed, Nothing to do
Line 1649: [URRC BCH in DCH]: ReadingValidSibs_BchReadError received
Line 1655: ReadingValidSibs_BchReadError is ignored during SibReadingPause
Line 1703: ReadingValidSibs_RecvSib SIB1 received
Line 1711: ReadingValidSibs_RecvSib SIB3 received
Line 1719: ReadingValidSibs_RecvSib Unexpected SibId (%i)
Line 1739: ReadingValidSibs_RecvSib - All Necessary SIBs received
Line 1743: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 1766: ReadingValidSibs_RecvSib: Cancel SIB(%d)
Line 1814: [URRC BCH in DCH]: ReadingValidSibs_AbortSibRead
Line 1823: [URRC BCH in DCH]: ERROR Illegal State in ReadingValidSibs_AbortSibRead
Line 1851: ReadingValidSibs_SibSubscriptionCanceled : SibReadingResult(%d) received
Line 1862: ReadingValidSibs_SibSubscriptionCanceled : unknown SibReadingResult %d received
Line 1879: [URRC BCH in DCH]: AbortingSibRead_SibSubscriptionCanceled received
Line 1918: ReadingSchedulingBlock_RecvMib  Num_SharedPLMNs:%d
Line 1926: ReadingSchedulingBlock_RecvMib entered PlmnId: 0x%02X, 0x%02X, 0x%02X
Line 1940: ReadingSchedulingBlock_RecvMib Cell Not Shared Read PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 1961: ReadingSchedulingBlock_RecvMib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 1984: ReadingSchedulingBlock_RecvMib: Cancel SIB(%d)
Line 2009: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2017: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2024: ReadingSchedulingBlock_RecvMib : MibId is NULL in ReadingValidSibs_RecvMib
Line 2076: [URRC BCH in DCH]: ProcessSib1 called
Line 2085: [URRC BCH in DCH]: ProcessSib1 CS Domain
Line 2093: [URRC BCH in DCH]: ProcessSib1 PS Domain
Line 2103: [URRC BCH in DCH]: ProcessSib1 IsLacPresent:%d, LacId:%d, IsRacPresent:%d, RacId:%d
Line 2135: ProcessSib3 called CGI:%d
Line 2166: ERROR Illegal State
Line 2306: [TddCellSelReselInfo] Created (CellParamId %d, Freq %d)
Line 2360: Invalid InterFreqCell frequency value (%i)
Line 2366: Invalid InterFreqCell frequency value (%i)
Line 2385: TddNetworkCacheInst is NULL (%i)
Line 2456: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 2469: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 2477: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 2486: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB
Line 2494: {%i} Cell (Freq: %i, cellParamId: %i): Rn (Rscp) = %i
Line 2545: {%i} Cell (Freq: %i, cellParamId: %i): HCS_PRIOn = %i, Hn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 2556: {%i} Cell (Freq: %i, cellParamId: %i): HCS_PRIOn = %i, Hn (Rscp) = %i
Line 2653: [URRC_ANR]: SysInfoReadCallback MIB received
Line 2663: Msg is NULL. Cannot Signal RecvSib to TddCellSelReselInfo 
Line 2669: [URRC_ANR]: SysInfoReadCallback SIB received
Line 2679: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_BCHREADERROR received
Line 2687: Msg is NULL. Cannot Signal AbortDetection to TddCellSelReselInfo 
Line 2694: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_SIBDECODEERROR received
Line 2702: Msg is NULL. Cannot Signal AbortDetection to TddCellSelReselInfo 
Line 2789: ERROR : MibPtr is NULL, so MIB is being subscribed with SIB3
Line 2801: ERROR Illegal AnrSubscriptionType(%d), just make it default subscription type
Line 2847: ERROR Illegal State
Line 2863: rrc_TddCellSelReselInfo_NecessarySibsRecved: Waiting for the NecessarySibsRecved Sibs [%d], Remaining SibCount %d
