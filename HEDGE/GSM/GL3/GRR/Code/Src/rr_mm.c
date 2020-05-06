Line 106: NoSvc variable is reset
Line 130: rr_CellInd->Lai %d %d %d %d %d
Line 138: RxLev(%d) rxev_min(%d) plmnState(%d)
Line 208: rr_ResumedForCsfbCall:%d NetworkMode:%d
Line 238: NwExtUtbf:%d
Line 307: GRR_MM_CELL_IND Type(%d) T3212(%d) Attach (%d) NMO(%d) AccessClassBarred(%d) EMC Barred(%d)
Line 334: Band is changed... Stored EST REQ is freed
Line 338: Band is changed during ReEst... Stored EST REQ is freed
Line 368: rr_MMPlmnFreqSearchMode to RR_FULL_SCAN_SEARCH
Line 440: Dtm: Indicate CellUpdateRequired %d 
Line 458: DTM: PacketServiceType %d
Line 468: GRR_MM_DEDI_CELL_IND LAI(%x %x %x %x %x)
Line 499: GRR_MM_INITIAL_PLMN_CNF:Fail
Line 545: INITIAL_PLMN_CNF:Success -> Scell Lai(%x,%x,%x,%x,%x)
Line 599: GRR_MM_NO_CELL_IND
Line 701: Release to MM (Cause:%x)
Line 711: GRR=>GRR_MM_REL_CNF
Line 757: GRR=>GRR_MM_REL_IND
Line 768: GRR=>GRR_MM_ABORT_IND (%d)
Line 1228: GRR_MM_PAGE_IND (Cause:%d Identity:%d)
Line 1357: rr_HandlePagingReq: Paging for Serv Cell PseudoLength(%d) 
Line 1374: Skipped P1 Rest Octets:  pktPagingInd1:%d,  pktPagingInd2:%d
Line 1390: Handling PCK_NOTI
Line 1434: rr_HandlePagingReq: IMSI matched 
Line 1455: CS paging for us - send Paging Indication to GMM 
Line 1505:   P-TMSI matched
Line 1637:  Error Possible with MobId[0] :%d 
Line 1778: Dummy PACKET PAGING REQUEST MSG for PRIVACY at BT
Line 1845: EST_REQ RecSysInfo = 0x%x/  rr_SI1_needed = 0x%x
Line 1850: Store EST_REQ - Waiting for Idle Cnf
Line 1979: GRR_MM_EST_REQ(TypReq %x) - rr_State : 0x%x
Line 1986: Check DSRC state to know if CS EST is possible 
Line 1991: WAIT for SRRC gran to proceed with NAS signaling 
Line 2005: rr_NewIdleToL1 & Store EST_REQ - Delayed for REEST, rr_IdleReqState:%d
Line 2012: Stop Old Reselection and start Reselection due to Re-estb
Line 2034: Store EST_REQ - Waiting for Idle Cnf
Line 2046: Store EST_REQ - Waiting for Cell Cnf
Line 2057: Store EST_REQ -rr_PostReselFailReadNBCCH  is set %d
Line 2070: Store EST_REQ - Cell Reselection in progress (Reason %d)
Line 2084: EST_REQ - CCO (%d) or IRAT (%d) in progress:Type (%d) 
Line 2088:  Go EST_REQ - though PCCO not cleared
Line 2106: Store EST_REQ - Delayed for REEST
Line 2117: EST_REQ RecSysInfo = 0x%x rr_SI1_needed = 0x%x
Line 2126: Store EST_REQ - Need SI
Line 2213:  Clear  rr_BcchReadArfcn in EST REQ (%d)
Line 2319: No LAU
Line 2339: CellSelec: SRCH CMPLTD
Line 2381: REORG Mode Avoid DSRC to go to IDLE after CELL RSP
Line 2667: Dedi: Bar the ARFCN received from NAS: %d
Line 2700: Bar the ARFCN received from NAS: %d
Line 2848: GRR_MM_UPD_FLAI_LIST_REQ : %d
Line 2930: MPH_STOP_NC_MEAS_REQ
Line 2990: [CandSrch] rr_RecGmmAssignReq: TlliType(%d) 
Line 3043: GRR_GMM_START_DRX_REQ
Line 3066: Partial Search will be performed in PTM
Line 3070: rr_AttachCompleted -- UARFCN_SCAN_TRIGGERED
Line 3081: UARFCN_SCAN_TRIGGERED SKIPPED % %
Line 3107: GRR_GMM_STOP_DRX_REQ
Line 3114: Suspend Acquisition Guard Timer
Line 3121: Start SysGuardTimer
Line 3142: GRR_MM_INIT_REQ Src:%x
Line 3240: BPLMN: GRR_MM_BACKGND_TIMER_IND. Sleep_Time=%ld ms, Start_Time = %ld 
Line 3274: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d)
Line 3294: BPLMN:Error: BPLMN State Mismatch!
Line 3342: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
Line 3353: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 3360: rr_WaitIdleCnfForImmResel is TRUE, Donot handle UPD DRX REQ
Line 3373: WAIT for SRRC response
Line 3410: BPLMN: Wait for IDLE_CNF
Line 3421: rr_NewIdleToL1 rr_IdleReqState:%d
Line 3464: BPLMN: Unexpected BACKGND_START_IND from MM
Line 3473: BPLMN: GRR_MM_BACKGND_START_IND: Sleep_Time:%ld, Start_Time=%ld
Line 3479: BPLMN:Error: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 3487: BPLMN:Error:! Waiting for SUSPEND_CNF!
Line 3500: BPLMN:Error: Unexpected Error!
Line 3518: BPLMN:Error:!Invalid BPLMN State
Line 3567: BPLMN: Sleep_Time (%ld)ms
Line 3596: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)milli s
Line 3613: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d)
Line 3661: BPLMN: Sleep_Time (%ld)ms
Line 3674: BPLMN: RR_BPLMN_DRX_TIMER rem_time (%d) ms
Line 3683: BPLMN:Error: Unexpected Error! 
Line 3707: BPLMN: GRR_MM_BACKGND_STOP_REQ
Line 3739: SI2qInd: %d <-Org %d
Line 3745: SI2qInd: NeededSI
Line 3753: SI2qInd: %d
Line 3785: GRR_MM_MODE_UPDATE_IND: EPD_Mode Changed from %d to %d
Line 3789: EDP mode is Hedge or Multimode:%d
Line 3795: LTE Support is  set by EPD, rr_EutranMeasCtrlFromLte:%d made TRUE
Line 3800: LTE Support is reset by EPD, rr_EutranMeasCtrlFromLte:%d made FALSE
Line 3835: Warning! rr_ServCell=NULL
Line 3864: Warning! rr_ServCell=NULL
Line 3898: GRR_MM_LCS_FREQ_AID_REQ start =%d
Line 3941: GRR_MM_SRVCC_HO_CNF cause (%d)
Line 3973: SRVCC Req TO GSM %d
Line 3978: Save IRAT Param and Wait for SRRC grant
Line 4046: candidateCellInfo afcPdm(%d)
Line 4055: candidateCellInfo[%d] band(%d) arfcn(%d) bsic(%d) fn(%d) qb(%d) net_fn(%d)
Line 4061: HO cell found in candidateCellInfo[%d], put it in MPH_MULTICTX_REQ
Line 4072: SRVCC HO from LTE  Arfcn:%d, rr_BandInd:%d, rr_band_type:%s
Line 4087:  IR HO Inconsistant BANDs
Line 4165: AfterTimeHopStatus(0x%x)/ BeforeTimeHopStatus(0x%x)
Line 4183: Ciphering Change on new channel
Line 4211: Non Synch Handover
Line 4217: Synch Handover
Line 4223: Pseudo Synch Handover
Line 4224: RTD = %d
Line 4230: Pre Synch Handover
Line 4253: SYNC with VCG
Line 4267:  IR HO Message error
Line 4293:  IR HO Hopping list error
Line 4303:  IR HO Cell creation error
Line 4313:  IR HO Cell creation error
Line 4323:  IR HO Message type not valid
Line 4335:  IR HO Empty GSM message
Line 4339:  IR HO GSM message pointer is NULL
Line 4366: GRR_MM_HANDOVER_TYPE_IND (%d)
Line 4388: Send MM GRR_MM_CGI_HOLD_IND
Line 4415: Send MM GRR_MM_CGI_STOP_CNF ANR Rxlev %d
Line 4438: MM_GRR_CGI_STOP_REQ: STOP ANR : ANR Ongoing (%d) 
Line 4442: Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 4450: Anr: ANR procedure was already stopped. Send confim now
Line 4466: MPH_SUSPEND_RAT_REQ 
Line 4471: MPH_SUSPEND_RAT_REQ already sent. Avoid sending another Req
Line 4496: Anr: MM_GRR_START_CGI_IND: Sleep_Time:%d
Line 4500: Anr: RR state is NOT RR_RAT_SUSPEND_NULL!
Line 4515: Anr Error  Waiting for SUSPEND_CNF
Line 4525: BckGrndMode Anr/BPLMN:Error: Unexpected Error!
Line 4536: BckGrndMode Anr/BPLMN:Error:!Invalid BPLMN State
Line 4545: Anr Sleep_Time (%d)
Line 4551: BckGrndMode Anr/BPLMN: Sleep_Time Less than %d: Not enough
Line 4585: BckGrndMode Anr/BPLMN:Error: Unexpected Error! 
Line 4619: CS Signalling Start, This ILM is not used
Line 4624: rr_GrrStartDsSignaling: Signaling Type %d, rr_DsdsNasSignalingOngoing[StackId] : %x
Line 4628: PS/IMS NAS SIG is triggered from MM
Line 4641: PS Signalling start, Resume RLC
Line 4686: CS Signalling Start, This ILM is not used
Line 4691: rr_GrrStopDsSignaling: typeofproc %d, rr_DsdsNasSignalingOngoing : %x
Line 4698: CS Signalling Stop, ILM is not used
Line 4714: Moving SRRC state to PS DATA  after PS NAS SIG Completion
Line 4719: SIG STOP received in rr_State(%d)
Line 4724: Suspend RLC/MAC, NAS signaling is ended
Line 4729: SIG END received in Idle State
Line 4771: rr_GrrHandlePsSupportInd: PsSupported: %d
Line 4787: rr_GrrHandlePsSupportInd: PsSupported: %d
Line 4800: PS Service Disabled, Suspend RLC/MAC
Line 4805: Invalid Case: PS Support True came when GRR already on C-Tran mode
Line 4811: PS Service (%d) received in RR State (%d) rr_RlcSuspensionState (%d), rr_RlcSuspensionState (%d)
Line 4816: Resume RLC after DSDS Suspend 
Line 4844: rr_StartQrbProcedure (bForced(%d))
Line 4855: QRB: Pending! IRAT measurement is ongoing in L1
Line 4863: QRB: Pending! RLC suspension is ongoing
Line 4870: QRB: Pending! RLC suspension is triggered
Line 4875: QRB: Reject! RLC suspension is failed
Line 4886: QRB: Reject! IRAT measurement is ongoing in L1
Line 4914: QRB: Dtm release is ongoing %d
Line 4927: QRB: Reject! QRB START recieved in invalid state %d
Line 4947: rr_StopQrbProcedure
Line 4956: QRB: QRB STOP recieved in invalid state %d
Line 4979: QRB: GRR_MM_QRB_MODE_IND [Mode(%d)/0:STOP,1:START,2:FORCED], [QrbState(%d)/0:STOP,1:START,else:PENDING]
Line 4990: QRB: Start!
Line 4996: QRB: Start! Forced!
Line 5002: QRB: Unexpected QrbMode(%d)
Line 5007: QRB: Ignore! QRB procedure is ongoing
Line 5015: QRB: Ignore! QRB procedure is pending
Line 5020: QRB: Unexpected QrbState(%d)
Line 5031: QRB: Ignore! QRB procedure is not running
Line 5035: QRB: Stop!
Line 5044: QRB: Stop! QRB procedure is pending
Line 5050: QRB: Unexpected QrbState(%d)
Line 5058: QRB: Unexpected QrbMode(%d)
Line 5096: QRB: Send GRR_MM_QRB_ABORT_IND(rr_QrbState %d)
Line 5128: QRB: rr_QrbEutranSacnStatus (%d)
Line 5162: QRB: Not initiated
Line 5183: GRR_MM_UPDATE_DUPLEX_MODE_IND(%d->%d)
Line 5201: GRR_MM_POWER_OFF_IND
Line 5290: Invalid Band in function: rr_SendMmSupportBandListInd
Line 5313: Send GRR_MM_SUPPORT_BAND_LIST_IND(%d %d)
Line 5323: [CandSrch] rr_SemRecCandRplmnScanRsp: Result(%d)
Line 5338: [CandSrch] rr_SendCandRplmnScanReq rr_State(%d)
Line 5347: [CandSrch] GuardT(%d), PeriodicT(%d), NAS Reg(%d) rr_state(%d)
Line 5350: [CandSrch] NeedSI2Q(%d), RxSI2Q(%d), EPD(%d) Earfcn cnt(%d)
Line 5355: [CandSrch] Abort: EPD:%d
Line 5360: [CandSrch] Abort: GRR_MM_DRX_UPD_REQ in invalid state, IdleReqState:%d
Line 5366: [CandSrch] Abort: PLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 5377: [CandSrch] Abort: rr_InterRatStatus = %d
Line 5383: rr_ResumedForCsfbCall set, RPLMN SCAN not required
Line 5388: [CandSrch] No 4G Info in Si2Q Complete Set.. 
Line 5395: [CandSrch]  4G Info Present in Si2Q Complete Set.. Reset timers 
Line 5426: GRR_MM_BATT_CAPACITY_SET_REQ battCapacity = %d
