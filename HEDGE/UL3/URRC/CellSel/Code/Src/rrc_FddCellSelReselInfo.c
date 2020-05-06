Line 355: [APBCR] FddCellSelReselInfo_IsSelectionCriteriaMet
Line 356: [APBCR] qQualMinFDD (%i), qRxLevMinFDD (%i)
Line 357: [APBCR] SrxlevS (%i), SqualS = (%i)
Line 366: [APBCR][ProcessUtraPrioInfo] DEDICATED_PRIORITY - ServCellPrio(%d) from PriorityInfoList
Line 374: [APBCR] DEDICATED_PRIORITY - Error to get Priority from UARFCN(%d) of PriorityInfoList. So ServCellPrio(%d) from rrc_FddCellSelReselInfo is used
Line 378: [APBCR] SrxlevN (%i), SqualN (%i) 
Line 382: [APBCR] Serving Cell is Suitable so Priority Based Reselection Criteria is Appllied
Line 385: [APBCR] Priority_Utra (%d), ServCellPrio (%d) 
Line 398: [APBCR] UtraPriority > SC Priority: threshXhigh (%i) 
Line 403: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 410: [APBCR] SelectionCriteria NOT Met for UARFCN (%d), CPICH (%d)
Line 421: [APBCR] UtraPriority > SC Priority: threshXhigh (%i) 
Line 426: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 433: [APBCR] SelectionCriteria NOT Met for UARFCN (%d), CPICH (%d)
Line 448: [APBCR] UtraPriority <= SC Priority: ThreshServLow (%i), ThreshXlow (%i) 
Line 456: [APBCR] Selection Criteria Met for UARFCN (%d), CPICH (%d)
Line 463: [APBCR] IsSelectionCriteriaMet NOT MET for UARFCN (%d), CPICH (%d)
Line 471: [APBCR] IsSelectionCriteriaMet - Serving Cell is not suitable -> Check if interF cell is suitable
Line 476: [APBCR] Found suitable for UARFCN (%d), CPICH (%d)
Line 482: [APBCR] NOT suitable for the UARFCN (%d), CPICH (%d)
Line 729: [NCell] uarfcn %d, psc %d: NCellEcIo %d/10 vs SCellEcIo %d/10, DiffSir %d, Qoffset2 %d
Line 751: >> BiasedQoffset2: Unsupported rrc state %d
Line 766: [uarfcn %d, psc %d] BiasedQoffset2 %d vs Qoffset2 %d
Line 816: Invalid InterFreqCell frequency value (%i)
Line 822: Invalid InterFreqCell frequency value (%i)
Line 958: Starting Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) >= Qhcsn(%i) 
Line 969: Stopping Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) != HcsPrioS(%i) and QMeasn(%i) < Qhcsn(%i) 
Line 994: Starting Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) > QMeasS(%i) + Qoffsetsn(%i)
Line 1004: Stopping Tn timer for Fdd Cell:(%i,%i) HcsPrioN(%i) == HcsPrioS(%i) and QMeasn(%i) <= QMeasS(%i) + Qoffsetsn(%i)
Line 1018: Started Tn timer for Fdd Cell:(%i,%i)
Line 1030: Stopped Tn timer for Fdd Cell:(%i,%i)
Line 1096: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1110: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 1118: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 1127: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i) dBm - QOffset1(%i) dB
Line 1135: {%i} Cell (Freq: %i, Cpich: %i): Rn (Rscp) = %i
Line 1150: {%i} Cell (Freq: %i, Cpich: %i): Rn (EcN0) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1164: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB - ( TOn(%i) * ( 1 - Ln(0) ) )
Line 1172: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB - ( TOn(%i) * ( 1 - Ln(1) ) )
Line 1181: {%i} Cell (Freq: %i, Cpich: %i): Rn(%i) = QMeas(%i ==> %i dB) - QOffset2(%i) dB
Line 1189: {%i} Cell (Freq: %i, Cpich: %i): Rn (EcN0) = %i
Line 1237: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (Rscp) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1250: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (Rscp) = %i
Line 1263: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (EcN0) = -infinity, PENALTY_TIMEn = %i, Tn = %i
Line 1276: {%i} Cell (Freq: %i, Cpich: %i): HCS_PRIOn = %i, Hn (EcN0) = %i
Line 1504: Squal Compensation [0.5dB]:: %d -> %d
Line 1534: Cell(%i,%i) : Squal (%i) = Qqualmeas(%i) dB - Qqualmin(%i) dB
Line 1590: [MRU Freq %d] Qrxlevmin Adjustment:: %d -> %d
Line 1624: Cell (Freq: %i,Cpich: %i) : Srxlev (%i) = Qrxlevmeas(%i) dBm - Qrxlevmin(%i) dBm - PCompensation(%i) dB
Line 1629: Cell (Freq: %i,Cpich: %i) : PCompensation (%i) = max( UE_TXPWR_MAX_RACH(%i) - P_MAX(%i), 0 )
Line 1670: UmtsCellSelectionMeasurement: Config message add cell:(%i,%i)
Line 1703: ERROR: Already actioning a request
Line 1714: ERROR Illegal State
Line 1734: ERROR: Already actioning a request
Line 1773: %s: Prepare subscription to MIB, Id(%i)
Line 1790: ERROR Illegal State
Line 1879: MibId is NULL in ReadingMib_RecvMib
Line 1907: ERROR Illegal State
Line 1965: ERROR Illegal State
Line 1982: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Negative confirmation
Line 1991: [rrc_Frequency::AwaitingMeasurementInd_RecvCellSelMeasCnf] INFO - Positive confirmation
Line 2077: Unexpected Sib with Id (%i)  received
Line 2141: ERROR Illegal State
Line 2274: [URRC_ANR]: NotActive_AbortSibRead
Line 2318: [URRC_ANR]: ReadingValidSibs_AbortSibRead
Line 2327: [URRC_ANR]: ERROR Illegal State in ReadingValidSibs_AbortSibRead
Line 2345: [URRC_ANR]: AbortingSibRead_SibSubscriptionCanceled received
Line 2374: ReadingValidSibs_SibSubscriptionCanceled : SibReadingResult(%d) received
Line 2382: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2390: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2398: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2406: ERROR Illegal State in ReadingValidSibs_SibSubscriptionCanceled
Line 2419: ReadingValidSibs_SibSubscriptionCanceled : unknown SibReadingResult received
Line 2450: [URRC_ANR]: ReadingValidSibs_BchReadError received
Line 2456: ReadingValidSibs_BchReadError is ignored during SibReadingPause
Line 2493: ReadingValidSibs_RecvMib : MIB V-tag changed, give-up this cell
Line 2497: ReadingValidSibs_RecvMib : MIB V-tag changed, Nothing to do
Line 2544: [URRC_ANR]: ProcessSib1 called
Line 2553: [URRC_ANR]: ProcessSib1 CS Domain
Line 2561: [URRC_ANR]: ProcessSib1 PS Domain
Line 2571: [URRC_ANR]: ProcessSib1 IsLacPresent:%d, LacId:%d, IsRacPresent:%d, RacId:%d
Line 2608: ProcessSib3 CSG ID : %x
Line 2615: FddCellSelReselInfo_p->csg_member_status = TRUE
Line 2642: Cell Barred
Line 2647: Cell Is ReservedForOperatorUse
Line 2652: Cell Is ReservedForExtension
Line 2657: Selection Criteria Not Met
Line 2666: ProcessSib3 called CGI:%d
Line 2700: ProcessSib20 HnbNamelength: %d HNB Name : %s
Line 2703: ProcessSib20 called
Line 2747: ReadingValidSibs_RecvSib SIB1 received
Line 2755: ReadingValidSibs_RecvSib SIB3 received
Line 2766: ReadingValidSibs_RecvSib : SibReadingType(%d) CsgId is not valid in this Cell
Line 2773: ReadingValidSibs_RecvSib SIB20 received
Line 2782: ReadingValidSibs_RecvSib Unexpected SibId (%i)
Line 2800: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 2819: ReadingValidSibs_RecvSib - LAC(%d) is FLAI
Line 2826: ReadingValidSibs_RecvSib - All Necessary SIBs received but CellSelCriteria(%d) is not met for this CSG Cell
Line 2832: ReadingValidSibs_RecvSib - All Necessary SIBs received
Line 2837: ReadingValidSibs_RecvSib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 2853: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2871: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 2900: ReadingValidSibs_RecvSib: Cancel SIB(%d)
Line 2993: [URRC_ANR]: SysInfoReadCallback MIB received
Line 3003: Msg is NULL. Cannot Signal RecvSib to FddCellSelReselInfo 
Line 3009: [URRC_ANR]: SysInfoReadCallback SIB received
Line 3019: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_BCHREADERROR received
Line 3027: Msg is NULL. Cannot Signal AbortDetection to FddCellSelReselInfo 
Line 3034: [URRC_ANR]: SysInfoReadCallback SYSINFOMGR_SIBDECODEERROR received
Line 3042: Msg is NULL. Cannot Signal AbortDetection to FddCellSelReselInfo 
Line 3113: ERROR : MibPtr is NULL, so MIB is being subscribed with SIB3
Line 3125: ERROR Illegal AnrSubscriptionType(%d), just make it default subscription type
Line 3166: ERROR Illegal State
Line 3188: ReadingValidSibs_PauseSibRead : 
Line 3226: ReadingSchedulingBlock_RecvMib  Num_SharedPLMNs:%d
Line 3234: ReadingSchedulingBlock_RecvMib entered PlmnId: 0x%02X, 0x%02X, 0x%02X
Line 3248: ReadingSchedulingBlock_RecvMib Cell Not Shared Read PlmnId: 0x%02X, 0x%02X, 0x%02X  to head of the list
Line 3269: ReadingValidSibs_RecvSib - LAC(%d) is FLAI
Line 3286: ReadingSchedulingBlock_RecvMib:Calling SIB subscription Cancellation in ReadingSchedulingBlock_RecvMib after successfull SIB read
Line 3302: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3335: ReadingSchedulingBlock_RecvMib: Cancel SIB(%d)
Line 3353: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3361: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3369: ReadingSchedulingBlock_RecvMib : MibId is NULL in ReadingValidSibs_RecvMib
Line 3395: ReadingSchedulingBlock_PauseSibRead : 
Line 3429: ERROR Illegal State in PausedReadingSib_PauseSibRead
Line 3449: PausedReadingSib_ResumeSibRead : SibReadingResult(%d) initialized
Line 3467: ERROR Illegal State in ReadingSchedulingBlock_RecvMib
Line 3557: rrc_FddCellSelReselInfo_NecessarySibsRecved: Waiting for the NecessarySibsRecved Sibs [%d], Remaining SibCount %d
Line 3581: rrc_FddCellSelReselInfo_LeastSibsRecved: Asn_systemInfoType20 is not received, but Anyother SIBs are received
Line 3657: ERROR: Already actioning a request
Line 3720: ERROR Illegal State
Line 3740: ERROR: Already actioning a request
Line 3797: ERROR Illegal State
Line 3875: ERROR: Already actioning a request
Line 3938: ERROR Illegal State
Line 3965: %s: Prepare subscription to MIB, Id(%i)
Line 3982: ERROR Illegal State
Line 4026: Squal Compensation [0.5dB]:: %d -> %d
Line 4032: SameCellSelection- NewSqual:%d NewSrxlev:%d
