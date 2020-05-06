Line 326: [L1LC_EnableDsdsMask] -> 0x%x (0x%x)
Line 340: [L1LC_DisableDsdsMask] -> 0x%x (0x%x)
Line 381: [L1LC_IsAnyDsdsMaskSet] DSDS Mask(0x%x)
Line 441: [LTE DSDS] Undefined option for display RFBO
Line 463: [LTE DSDS] Already IsDrxSleep = TRUE.
Line 470: [LTE DSDS] Already IsDrxSleep = FALSE.
Line 475: [LTE DSDS] gL1lc_DsdsDB.IsDrxSleep = [%d][%d]
Line 514: [LTE DSDS] Already PauseIndFlag = TRUE.
Line 521: [LTE DSDS] Already PauseIndFlag = FALSE.
Line 527: [LTE DSDS] gL1lc_DsdsDB.PauseIndFlag = [%d][%d]
Line 561: [LTE DSDS] Undefined option for display RFBO
Line 587: [4G_DRDS] Set gEarlyPauseFlag as FALSE
Line 590: [LTE L1LC DSL1RC] HALSC_GetUeState(%d)@%s IsRfAvailable[%s]
Line 593: RESET gL1lc_DsdsDB.HalParamSaved = %d
Line 603: [NRDS] reset NrOnlyGranted(%d).
Line 629: [LTE L1LC DSL1RC] IsReConfigL1C(%d)
Line 703: [LTE L1LC DSL1RC] PagingRequestTimer Stopped!
Line 719: [LTE L1LC DSL1RC] Retrigger MIB_READ!
Line 731: [LTE L1LC DSL1RC] MIB_READ will be triggered after processing PbchDecodeReq in RRM Saved Msg!
Line 735: [LTE L1LC DSL1RC] Retrigger SI_READ!
Line 769: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Pre Meas Processing - Meas Config(%d)!!!
Line 774: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSetDlFreq!!!
Line 783: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 878: Retrigger L1LC_DecodeL1rxRxDataInd
Line 915: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 924: [LTE L1LC DSL1RC] Response Recieved while in DRX Sleep!!! Issue Rsrc Release to DSL1C
Line 935: [PG] wakeupintrTmr(%d), Lwakeup_Intr(%d) 
Line 944: [NRDS] IsDrxSleep is TRUE. But HalWakeupStartInd is TRUE. Do StartResumeProcedure
Line 957: [NRDS] SIGNALLING_IND was processed during LTE sleep and NR active.
Line 963: [NRDS] skip StartResumeProcedure because RF RESUME for only NR, just set IsRfAvailable(%d), IsRfAvailForNr(%d).
Line 983: [LTE L1LC DSL1RC] RFAvailableRsp : CpuPowerDownHolding( 0 )
Line 1014: [LTE L1LC DSL1RC] L1LC_ProcMmcIf_RFUnavailableRsp [0x%x]!!!
Line 1039: [NRDS] Send UPDATE_CNF with REJECT to NR.
Line 1049: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1055: [LTE DS]Start RetryTimer(%d)!!
Line 1101: [LTE L1LC DSL1RC] Not waiting for Rsrc-Response (%d), Ignore Response (%d) Early Pause Timer stopped!!!
Line 1114: [LTE L1LC DSL1RC] Waiting For Resume (%d), Ignore Response (%d) Early Pause Timer stopped!!!
Line 1177: [LTE L1LC DSL1RC]L1LC_ProcMmcIfResponseInd Retry time (%d)!!!
Line 1188: [LTE L1LC DSL1RC] Response type is wrong!!!
Line 1200: [LTE L1LC DSL1RC] retryCntForPSConflict (%d)!!!
Line 1207: [LTE L1LC DSL1RC] Next time, L1LC will request RF with updated RF reason!!!
Line 1225: [LTE L1LC DSL1RC] OtherStackOHEStatus(%u) OtherStackRFReason(%u)
Line 1249: [LTE L1LC] NextPagingReqTime(%d) 
Line 1264: [LTE L1LC DSL1RC] Retry Timer not started as RF will be requested for Paging in %d us !
Line 1314: [LTE L1LC DSL1RC] CurrentTime(%u) PagingPALTime(%u) RemainTimeToPaging(%u)
Line 1325: [LTE L1LC DSL1RC] Paging occasion skipped! RemainTimeToNextPaging(%u) UpdateTime(%u)
Line 1333: [LTE L1LC DSL1RC] Set Paging Request Timer (setting: %d us)
Line 1341: [LTE L1LC DSL1RC] PreponePagingRFReqTime(%d) is updated!
Line 1347: [LTE L1LC DSL1RC] Remaining time for next Paging Req Timer expiry is %d us
Line 1371: [DEBUG] gL1LC_DrxControl.state = [%d, %d], gDrxL1_Flag = [%d, %d]
Line 1380: [LTE L1LC DSL1RC] ILM pause received when Wakeup is on hold due to nearby early pause timer expiry!!!
Line 1390: [LTE L1LC DSL1RC] CauseUpdate is Pended!
Line 1411: [LTE L1LC DSL1RC] Pause request received when RF (%s) and DRX Sleep (%s)!!!
Line 1415: [LTE L1LC DSL1RC] Ignore PAUSE_REQ as IsWaitResponse = TRUE!!!
Line 1419: [LTE L1LC DSL1RC] Ignore Pause Req as MBMS is ongoing and RF is already released!!!
Line 1429: [LTE L1LC DSL1RC] Pause Request recieved when L1 is already in waiting state for Resume!!!
Line 1446: [LTE L1LC DSL1RC] Pause Request recieved when L1 is doing wakeup procedure!!!
Line 1468: [LTE L1LC DSL1RC] MBMS is ongoing, delay pause done by time = %d ms
Line 1497: [4G_DRDS] Pause request received for SCG stack during edv active, ignore it
Line 1502: [4G_DRDS] During 4G_DRDS, Pause procedure should be done
Line 1536: [LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
Line 1546: [LTE L1LC DSL1RC] PAUSE :: Time[%dms] Pause Flag [%s] RF[%s] Current Proc[%s], UE state(%d), gRSPNeeded(%d))
Line 1551: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1586: [LTE L1LC DSL1RC] Resume Recieved while in DRX Sleep!!! Issue Rsrc Release to DSL1C
Line 1598: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 1605: gL1LC_DsdsTmr Timer stop
Line 1619: [NRDS] IsDrxSleep is TRUE. HalWakeupStartInd is TRUE. Do StartResumeProcedure
Line 1632: [NRDS] skip StartResumeProcedure because RF RESUME for only NR, just set IsRfAvailable(%d), IsRfAvailForNr(%d).
Line 1681: [LTE L1LC DSL1RC] ILM pause is not done since measure activity is pending(%d) or wakeup procedure(%d)!!!
Line 1696: [LTE L1LC DSL1RC] In CONN mode, RF not available... DSDS Timer started for 10s!!!
Line 1703: PAUSE in CGI case
Line 1725: [LTE L1LC DSL1RC] Mandatory SIBs are decoded, execute Pause
Line 1734: [LTE L1LC DSL1RC] PauseFlag(%d) + SignalMask(yes) + gCurProc(%d)
Line 1736: [LTE L1LC DSL1RC] PauseFlag(%d) + SignalMask(yes) + gCurProc(%d). Try RF request.
Line 1741: [LTE L1LC DSL1RC] ILM pause is not done since activity (0x%x) is pending!!!
Line 1772: [4G_DRDS] Do not update RF cause, eDV_Active(%d)
Line 1779: [LTE L1LC DSL1RC] Do not update RF cause as Paging Rcv Timer is running 
Line 1809: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)! 
Line 1850: Measurement ongoing. Hence do not change RF request to PS Data
Line 1859: Measurement/Wakeup is ongoing. Hence do not change RF reason
Line 1868: RACH is ongoing. Hence do not release
Line 1913: [LTE L1LC] pause_ind action
Line 1932: [4G_DRDS] Deactivate 4G_DRDS as PauseInd is received in SCG stack!
Line 1936: Stop DrdsAbnormalCheckTmr
Line 1963: [LTE L1LC] Do not pause as Pause Delay timer running due to MBMS
Line 1970: [LTE L1LC] pause_done (%d)
Line 2073: Set IsMandatarySibsReadReq as TRUE.
Line 2085: Set IsMandatarySibsReadReq as FALSE.
Line 2191: [4G_DRDS] During 4G_DRDS, rf is unavailable. So, request RF (RACH)
Line 2197: [4G_DRDS] Receive Intra meas!! result[%d]
Line 2220: [DSP] gHalDrx_ConnDrxState = DRX_CONN_INIT
Line 2347: Reset PauseFlag to ignore early pause timer (Signalling Start)
Line 2358: Early Pause Timer stop
Line 2361: [LTE L1LC] Signalling for Handover!!!
Line 2366: [LTE L1LC] Signalling for CSFB!!!
Line 2387: [LTE L1LC DSL1RC] Updated RF reason!!
Line 2398: [LTE L1LC DSL1RC] Release RF by ST[%d] in case it has done pause done with release[NO] and both stack is in Conn-Conn state
Line 2443: [LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
Line 2449: [LTE L1LC] High Priority end. Result is MMC_L1LC_REQUESTREASON_NULL!No Action!
Line 2457: [LTE L1LC] Do not request RF as 4G_DRDS is active
Line 2489: [LTE L1LC] Do not update RF case as 4G_DRDS is active
Line 2532: RESET gL1lc_DsdsDB_[%d].IsSuspend
Line 2561: RF not released as Measurement ongoing.
Line 2639: Early Pause Timer stop
Line 2647: Set IsMandatarySibsReadReq as FALSE.
Line 2702: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 2703: (L1LC_DecodeRrmConnSleepReq) (R value no update for long time)
Line 2929: [LTE L1LC DSL1RC] Doesn't request RF! Check Req ID[%d]!!!!)
Line 2935: [LTE L1LC DSL1RC] Pre result[%d])
Line 3013: [NRDS] Proc RRM : result is changed because NrCurProc is higher.(result:%d->%d)
Line 3021: [L1LC @%s] Final result[%d]: (DsdsMas[0x%x], Pause[%s], Req ID[%d], HO Flag[%s], gCurProc[%d])
Line 3091: [SIB_DRX] Restore SIB_DRX after PBCH_DONE for Reinit DRX (%d -> %d)
Line 3218: [L1LC @%s] Do not Process HAL_L1LC_SINR_STATUS_IND otherwise RF will be released. Pause Ind (%d), Pause Flag (%d)
Line 3233: [L1LC @%s]Pre Processing (DsdsMas[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
Line 3235: [L1LC @%s]Pre Processing (Result[%s], Cause[%s], IsConn(%d))
Line 3245: There is no ongoing Search/Meas !!!!!!!
Line 3260: Don't perform RF Pause/Release,  gL1LC_DrxControl.state: %d, gDrx_CfoEnable: %d
Line 3277: Don't perform RF Pause/Release,  gL1LC_DrxControl.state: %d, gDrx_CfoEnable: %d
Line 3282: [LTE L1LC] Pause will be performed as part of EPT expiry handling
Line 3297: [L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
Line 3347: [L1LC @%s]Pre Processing (DsdsMas[0x%x], Pause[%s], Current Proc[%s], Req ID[%d])
Line 3355: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 3373: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 3387: [L1LC @%s] Post Processing (DsdsMask[0x%x], Pause[%s], Current Proc[%s], Req ID[%d] Result[%s])
Line 3406: L1LC_DsdsCheckPauseIndAction
Line 3413: [4G_DRDS] 4G_DRDS ongoing, don't do L1LC_DsdsCheckPauseIndAction !!!
Line 3420: Wakeup procedure is not completed. Hence do not send pause done yet!
Line 3426: [LTE L1LC DSL1RC] RF released due to Pause Ind action
Line 3473: [LTE L1LC DSL1RC] Signaling mask already set, request RF with signaling
Line 3505: [LTE DRDS] EDV_ACTIVE_IDLE_IDLE mode will be activated! do not request RF!!
Line 3564: [NRDS] RF became available during HAL => L1lC message sending. make HalWakeupStartInd as TRUE for process wakeup procedure. -n.c
Line 3604: [LTE L1LC DSL1RC] 4G_DRDS is activated already
Line 3656: [LTE L1LC DSL1RC] Waiting for resume, hence Release RF before activating 4G_DRDS
Line 3727: [L1LC @%s] (DsdsMask[%d] ,Pause[%s], Current Proc[%s], Req ID[%d], Result[%s], Cause[%s])
Line 3780: RF aquired for power on(BPLMN_SRCH_START_IND)
Line 3788: RESET gL1lc_DsdsDB_[%d].IsSuspend
Line 3800: RF request triggered before power on(BPLMN_SRCH_START_IND)
Line 3829: [L1LC @%s] Post Processing (DsdsMas[0x%x], Pause[%s], Current Proc[%s], msg_id[%d], Cause[%s])
Line 3869: [LTE L1LC DSL1RC] RF Available [%s] Req Reason [%s] IratMeasFlag[%d]
Line 3893: RF will not be requested because RRM_L1LC_SIGNALLING_IND comes in Modem off state
Line 3910: [LTE L1LC DSL1RC] DRDS deactivation is ongoing, hold the force wakeup processing. Saved RRM Msg[%s] Msg ID[%d]
Line 3928: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d]
Line 3941: [LTE L1LC DSL1RC] RRM Msg Waiting for Pause Done/Resume/Response :: Pause[%s] Resume[%s], PauseIndFlag[%s], RetryTimerRunning[%s]
Line 3976: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for MCG
Line 4006: [NRDS] isProcOngoing re-checked due to NR-DS. result:%d (gCurProc:%d, NrCurProc:%d)
Line 4021: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby e.p.t (%d)! 
Line 4056: [LTE L1LC DSL1RC] Do not request RF with lower priority than PAGING due to nearby paging timing of other stack (%d)! 
Line 4063: [LTE L1LC DSL1RC] Do not hold RRM msg because DRDS will be triggered (%d)! 
Line 4073: gL1LC_DrxControl.state: %d, gDrx_CfoEnable: %d
Line 4095: [L1LC @%s] Saved RRM Msg[%s] Msg ID[%d] isProcOngoing [0x%x] isRFUpdate [%d]
Line 4119: [LTE L1LC DSL1RC] Saved RRM Msg[%s] Msg ID[%d] IsEDV_Active[%d] for SCG without MEASURE_REQ
Line 4130: [L1LC @%s] RRM_NOHOLDMSG[%d], NO_PAUSE_RESUME[%d], gL1LC_DsdsRetryTmr [%d], IsRfCauseUpdatePending[%d], CurrMeasFlag[%d], isRFUpdate[%d]
Line 4133: [L1LC @%s] gHALSC_IdleGapOnGoing[%d] gHALSC_PrepareGapMeas[%d] gL1LC_DrxControl.state[%d] gL1LC_DsdsPagingRcvIntrTmr [%d] IsPreponePagingRcvIntrReq[%d] DuringClkest[%d]
Line 4176: [LTE L1LC DSL1RC] Free HAL message [%u] before saving new [%u]
Line 4190: [LTE L1LC DSL1RC] Wakeup Start Indication Recieved from HAL; but RF is Unavailable
Line 4206: [NRDS] LTE : sleep -> wakeup, NR : paused, release RF first. -n.c
Line 4219: [LTE L1LC DSL1RC] HOLD PAGING_DONE_IND due to pauseindflag
Line 4225: [LTE L1LC DSL1RC] Stop Retry Timer and Requests for RF
Line 4233: [LTE L1LC DSL1RC] DSDS_RRM_NOHOLDMSG[%d] DSDS_NO_PAUSE_RESUME[%d],IsRfCauseUpdatePending(%d)
Line 4259: [L1LC @%s] RRM Saved Msg [%d] is not freed !
Line 4262: [L1LC @%s] RRM Saved Msg [%d] is freed !
Line 4269: [L1LC @%s] HAL Saved Msg [%d] is freed !
Line 4275: [L1LC @%s] MMC Saved Msg [%d] is freed !
Line 4284: [L1LC @%s] L1LC_DsdsDB cleared !
Line 4338: [L1LC PSPS] PS Protection is not valid as no Autopause timer is running!
Line 4349: [L1LC PSPS] Don't Release RF during Sleep! PS Protection is valid. SleepTime[%u], EarlyPauseTime[%u]
Line 4355: [L1LC PSPS] Release RF during Sleep! SleepTime[%u], EarlyPauseTime[%u]
Line 4387: [LTE L1LC DSL1RC] L2LRX_L1LC_IDLE_PAGING_DONE_IND :: eDV_Active[%d] CurrentStack[%d] is MCG STACK
Line 4410: [LTE L1LC DSL1RC] L1LC_ProcWakeUpStart :: RF Available[%s] Wakeup from Sleep[%s]
Line 4431: [NRDS] set ProcWakeupByMsg(%d)
Line 4462: [LTE L1LC DSL1RC] L1LC_ProcConfigGapInt :: RF Available[%s]
Line 4482: [LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (prev_rat : %d, IsEndc of other STACK: %d)
Line 4500: [LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
Line 4530: [LTE L1LC DSL1RC] Cannot Restore L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d] gDrx_ActiveRat[%d])
Line 4558: [LTE L1LC DSL1RC] L1LC_ProcReConfigL1C (gDrx_ActiveRat : %d)
Line 4641: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 4663: [4G_DRDS] Already ConnDR_state: DR_ADDED
Line 4686: End of %s
Line 4717: HAL parameters were already saved. Don't save HAL parameters again.(gL1lc_DsdsDB.HalParamSaved = %d)
Line 4725: [LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
Line 4730: [LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Line 4735: SET gL1lc_DsdsDB.HalParamSaved = %d
Line 4771: [LTE L1LC DSL1RC] Cannot Store L1LC Parameters!!! (Sync Mode[%d] Meas Mode[%d])
Line 4776: [LTE L1LC DSL1RC]L1LC_ProcStoreL1CParameters (gDrx_ActiveRat : %d)
Line 4808: Sync Timer running for curMode(%d)
Line 4817: [LTE L1LC DSL1RC] Retrigger srch(%d) after DS resume
Line 4829: Meas Timer running for curMode(%d)
Line 4838: [LTE L1LC DSL1RC] Retrigger meas(%d) after DS resume
Line 4987: RTG(ST:%d) is saved: SFN(%d), TTI(%d) RTGoffset(%d), ReleasePalTime(%d)
Line 5024: L1LC_DsdsPerformRFRelease
Line 5029: [NRDS] Send UPDATE_CNF with REJECT to NR.
Line 5033: [NRDS] Wait NR before send RELEASE_IND.
Line 5045: [NRDS] GRANT_CNF will be sent after RF request and GRANT
Line 5055: [NRDS] Send PAUSE_REQ to NR.
Line 5059: [NRDS] Wait NR before send RELEASE_IND.
Line 5079: [NRDS] Wait NR before send RELEASE_IND.
Line 5089: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5109: [4G_DRDS] No more procedure is needed to release RF in ScgStackId (%d)
Line 5122: RF is not initialized yet (RfAvailable[%d] WaitResponse[%d]). Dont perform RF Release procedure!
Line 5166: [NRDS] LTE RF will be backup later. Set RfBackupNeeded(1)
Line 5222: [LTE L1LC DSL1RC] Release RF during SI_READ!
Line 5233: [LTE L1LC DSL1RC] Paused during Conn SIB READ!
Line 5275: L1LC_DsdsPerformRFRelease: No Pending LMAC operation for L2
Line 5285: L1LC_DsdsPerformRFRelease count(%d), cipher pending(%d) Decipher Penidng(%d)
Line 5298:  RX_STATUS(%d)
Line 5307: Cipher/Decipher Reach Max Count(%d)
Line 5329: Early Pause Timer stop
Line 5336: gL1LC_DsdsReleaseAndReqTmr Timer stop
Line 5346: [NRDS] Wait NR before send RELEASE_IND.
Line 5402: RF release(ST: %d) in conn - conn state! And STACK(%d) didn't have RF yet!!
Line 5417: Retry Timer is already running. Stop the timer and request again!!
Line 5446: Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Line 5455: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5486: L1LC_DsdsPerformRFPause
Line 5491: [NRDS] Send UPDATE_CNF with REJECT to NR.
Line 5495: [NRDS] Wait NR before send PAUSE_DONE_CNF.
Line 5507: [NRDS] GRANT_CNF will be sent after RF RESUME
Line 5517: [NRDS] Send PAUSE_REQ to NR.
Line 5521: [NRDS] Wait NR before send PAUSE_DONE_CNF.
Line 5541: [NRDS] Wait NR before send PAUSE_DONE_CNF.
Line 5551: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5565: [4G_DRDS] No more procedure is needed to Pause RF in ScgStackId (%d)
Line 5602: [LTE L1LC DSL1RC] During Conn-Conn State, L1LC should release RF!!
Line 5651: [NRDS] LTE RF will be backup later. Set RfBackupNeeded(1)
Line 5706: [LTE L1LC DSL1RC] To retrigger pended Meas/Srch(%d), make a curMode NULL
Line 5715: [LTE L1LC DSL1RC] Paused during SI_READ!
Line 5725: [LTE L1LC DSL1RC] Paused during Conn SIB READ!
Line 5769: L1LC_DsdsPerformRFPause: No Pending LMAC operation for L2
Line 5779: L1LC_DsdsPerformRFPause count(%d), cipher pending(%d) Decipher Penidng(%d)
Line 5792: TX_STATUS(%x, %x) RX_STATUS(%x)
Line 5801: Cipher/Decipher Reach Max Count(%d)
Line 5849: [NRDS] Wait NR before send PAUSE_DONE_CNF.
Line 5875: gL1LC_DsdsReleaseAndReqTmr started for 500ms
Line 5882: Not early pause case. Check other stack's PagingRequestTimer / PreponePagingRcvIntr
Line 5897: Don't update RF cause for otherstack(Is_ResumeReq(%d), IsWaitResponse(%d), remain_time(%d))
Line 5904: Early pause case. Don't update other stack's RF cause
Line 5919: [SC] CC%d: earfcn(%d), type(%d), pair_cc(%02x), tdp_state(%d), rx_mode(%x), rf_path(%x)
Line 5934: [LTE L1LC DSL1RC] 10s DSDS TIMER EXPIRED in CONN mode!!!
Line 5964: [LTE L1LC DSL1RC] DSDS RETRY TIMER EXPIRED!!!
Line 5969: [LTE L1LC DSL1RC] SUSPEND FLAG is Set!Return....
Line 5999: [LTE L1LC DSL1RC] Updated RF reason!!
Line 6096: [LTE L1LC DSL1RC] Updated RF reason!!
Line 6117: [LTE L1LC DSL1RC] Abnormal case!!
Line 6121: [LTE L1LC DSL1RC] Running Proc[0x%x], RRM Result[%u], Result[%u] !
Line 6134: [LTE L1LC DSL1RC] Do not request RF for Reason[%u] as RRC is in Paused state!
Line 6138: [LTE L1LC DSL1RC] Do not request RF for Reason[%u] as stack resume must wait till other stack is paused
Line 6168: [LTE L1LC DSL1RC] DSDS PAGING REQUEST TIMER EXPIRED!!!
Line 6210: [LTE L1LC DSL1RC] 4G_DRDS is activated hence free HAL_L1LC_RF_RSRC_REQ_IND for SCG stack!
Line 6214: [4G_DRDS] No need to Update RF reason for SCG stack as 4G_DRDS is activated!
Line 6225: [LTE L1LC DSL1RC] Abnormal Case ! RF is not requested !
Line 6261: current_sfn_tti[%d], gDrxSiRnti[%d] 
Line 6284: [LTE L1LC DSL1RC] Timer started for %d !!!
Line 6292: [LTE L1LC DSL1RC] Timer started for %d !!!
Line 6328: UE state[%d], Rnti[%d], Rf available[%d] 
Line 6354: [PG] wakeupintrTmr(%d), Lwakeup_Intr(%d) 
Line 6359: [LTE L1LC DSL1RC] DRX sleep / CLKEST ongoing (State: %d), hence not doing pause even Early timer expired!!!
Line 6368: [NRDS] Wakeup is ongoing, hence not doing pause even Early timer expired!!!
Line 6382: [LTE_DSDS]Initial Search/ measure hence not doing pause even Early timer expired
Line 6389: [LTE_DSDS]During GAP hence not doing pause even Early timer expired
Line 6396: [LTE_DSDS]Irat measure(%d) hence not doing pause even Early timer expired
Line 6403: [LTE_DSDS]Scell srch/meas(%d) hence not doing pause even Early timer expired
Line 6410: [LTE_DSDS]Inter srch/meas(%d) hence not doing pause even Early timer expired
Line 6416: [LTE_DSDS]Handover(%d)/CSFB(%d) already in progress. Hence not doing pause even Early timer expired
Line 6422: [4G_DRDS] Don't do early pause as pauseFlag is not set ! gL1lc_DsdsDB.PauseFlag [%d]
Line 6468: [4G_DRDS] Set gEarlyPauseFlag as TRUE
Line 6481: [4G_DRDS] Do early pause! 4G_DRDS is not activated. RACH is ongoing [%d][%d][%d][%d] 
Line 6485: [4G_DRDS] 4G_DRDS is not activated due to SCG stack is paused. Do early pause! 
Line 6509: [4G_DRDS] Can not enable 4G_DRDS because CC = (%d)
Line 6515: [4G_DRDS] eDV_AvailableforEPT(%d -> %d)
Line 6517: [4G_DRDS] set EptCheckForARFC(%d)
Line 6528: [4G_DRDS] Don't do early pause ! EDV_Active [%u] EDV_State [%d]
Line 6550: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Stack requesting for early pause is not LTE. Current stack is paused
Line 6559: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack was paused before. Hence skip EPT for now !
Line 6564: [LTE_DSDS] LTE Conn-Conn state and MeasPending is TRUE. Current stack is paused this time!
Line 6575: [LTE_DSDS] Other ST is in Conn state, and Stack status is Active! False E.P.T!
Line 6590: [LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 6613: gL1LC_PbchMode[%d]
Line 6622: Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6628: Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6637: Send Pause done on 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6643: Do not send pause Done as there is 4G BCH conflict with Other SIM IsLastRejectOnConflict[%d]
Line 6652: [LTE_DSDS] Volte is ongoing [%d]. Hence not doing pause even Early timer expired
Line 6661: [LTE_DSDS] PDCCH Ordered RACH is ongoing, do not perform Pause done
Line 6674: [MBMS RF Throttling] randValue(%u)
Line 6679: [MBMS RF Throttling] Do not send pause done confirm, randValue(%u)
Line 6713: [LTE_DSDS] Pause(%d), Resume(%d)
Line 6722: [LTE_DSDS] e.p.t expired, pause done not sent. Send RF request as IsRfCauseUpdatePending is TRUE, RF Requet[%s]
Line 6732: [LTE L1LC DSL1RC] L1LC_StartResumeProcedure: Post Processing -PendingFromSearchReq!!!
Line 6748: [LTE_DSDS]RF Pause Flag Reset
Line 6751: [LTE_DSDS]Wait for Resume[%s] Wait for RF RSRC RSP[%s]
Line 6795: [DSP] Modem Status: % d, gL1LC_DrxControl.state: %d, DSDS_RF_AVAILABLE(): %d
Line 6824: [LTE L1LC DSL1RC] Request RF for Saved RRM msg
Line 6834: [LTE L1LC DSL1RC] Do not request RF for Reason[%u] as RRC is in Paused state!
Line 7000: [LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%u)
Line 7035: [LTE L1LC DSL1RC] GetRemainEarlyPauseTime(%u)
Line 7060: [LTE L1LC DSL1RC] L1LC_ProcIsWakeUpPossible() Returned %d
Line 7064: [LTE L1LC DSL1RC] Wake up Possible. Conn-Conn state.
Line 7071: [NRDS] L1LC_ProcIsWakeUpPossible : already eDV_Active == TRUE, return TRUE  -n.c
Line 7125: [LTE L1LC] Wakeup skipped due to nearby Early Pause Time!
Line 7138: [LTE L1LC] Start RetryTimer (Default)
Line 7165: Stop gL1LC_DsdsBplmnDurationTmr at L1LC on reception of RF grant
Line 7176: [LTE L1LC] : error Case! BplmnDurationTimer should have expired
Line 7202: gL1LC_DrxState is NOT DRX_STATE_SUSPEND_MEAS
Line 7240: %s: Irat pending Dont release RF and Dont update RF cause since measure activity is pending(%d) or wakeup procedure(%d)!!!
Line 7306: [LTE L1LC] Signalling End!Paging ongoing. Switch RF cause to Paging
Line 7312: [LTE L1LC] Signalling End!Sys Info Read ongoing. Switch RF cause to SysInfo
Line 7318: [LTE L1LC] Signalling End!Measurement ongoing. Switch RF cause to MEAS
Line 7334: [LTE L1LC] Signalling End!Cell search ongoing. Switch RF cause to CellSearch
Line 7340: [LTE L1LC] Signalling End!MBMS ongoing. Switch RF cause to PSCALL
Line 7395: [NRDS] isProcOngoing re-checked due to NR-DS. result:%d
Line 7399: [LTE L1LC DSL1RC] L1LC_DsdsUpdateRfCause Prev(%d), New (%d), Rf Status(%d),Meas Status (%d)!!!
Line 7403: Retry Timer is already running. Stop the timer!!
Line 7409: Procedure with higher priority is ongoing!!
Line 7419: Measurement on going, RETURN!!! RequestReason(%d), CurrMeasFlag(%d) gL1LC_DrxControl.state(%d)
Line 7432: Clkest is ongoing, RETURN!!!
Line 7439: Waiting for the response from SRIF, Don't send another request now, RETURN!!!
Line 7445: [4G_DRDS] Don't RF cause update until paging rcv intr !!!
Line 7497: [LTE L1LC DSL1RC] Can be PS conflict (4G-HEDGE) situation!!!
Line 7502: L1LC_DsdsUpdateRfCause: isRFReqSent(%d), Current Procedure(%d)!!!
Line 7560: There is no case
Line 7610: L1LC_IsConflictWithBCH: Check SI scheduling for any conflict
Line 7652: There is conflict between BCH(4G) with PCH(other SIM) for index in SIB-1[%d] CurrentSfnTTI(%d) CurrentSfnTTI + EPT windowLength(%d) NextSiSfnTTI(%d) PrevSiSfnTTI(%d), si_WindowLength(%d)
Line 7665: Conflict in SI-Win(%d) and GAP. CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Line 7671: SI-Window ongoing in SI-Win(%d). CurrentSfnTTI(%d) NextSiSfnTTI(%d) + SI windowLength(%d) gap_sfn_tti(%d)
Line 7697: Pre cellboundary is changed from %d to %d
Line 7699: Pre cellboundary is %d
Line 7720: Pre cellboundary of MCG Stack (%d) is changed from %d to %d
Line 7722: Pre cellboundary of MCG Stack (%d) is %d
Line 7743: Pre cellboundary of SCG Stack (%d) is changed from %d to %d
Line 7745: Pre cellboundary of SCG Stack (%d) is %d
Line 7781: [4G_DRDS] SCG (%d) Difference of cellboundary is changed from %d to %d
Line 7783: [4G_DRDS] SCG (%d) Difference of cellboundary is %d
Line 7827: Diff value was changed from %d to %d due to IsUpdatedDuringWakeup case
Line 7841: Difference of cellboundary is changed from %d to %d
Line 7843: Difference of cellboundary is %d
Line 7868: [OHE] Stack Status (%d to %d) => OHE_StackStatus[0][1] (%d, %d)
Line 7903: [DSDS]%s() Start
Line 7908: [DRX] Otherstack's CellBoundary: %d, Diff: %d
Line 7934: [DRX] Cellboundary: %d, Otherstack: %d, Diff: %d
Line 7962: [DSDS] curTimeTti(%d), curTimeOffset(%d)
Line 7963: [DSDS] time_diff(%d) blackout_time_tti(%d) blackout_time_mclk(%d) blackout_tti_mclk(%d) Updated_tti(%d), RFReleasePalTime(%d), RFGrantPalTime(%d)
Line 7967: [DSDS] RTG update Check!!! curTimeTti(%d), curTimeOffset(%d), Updated_tti(%d), Mclk(%d)
Line 7998: [DSDS]%s() End
Line 8041: L1LC_DsdsMbmsReset
Line 8093: [DSDS]Dose not need to update ealry_pause_timer
Line 8113: [DSDS]calculated remaining_time was short(%d->500ms)
Line 8123: [DSDS]remaining_time(%d->%d),ca_deact_time(%d),type_4rx_deact_time(%d), gL1lc_DsdsDB.early_pause_duration(%u->%u)
Line 8128: [DSDS]DSDS_CA_count(%d)->(%d),DSSDS_4RX_count(%d)->(%d)
Line 8136: [DSDS]remaining_time was short(%d)
Line 8166: Set Scheduled/Requested RAT [%d]
Line 8182: Get Scheduled/Requested RAT [%d]
Line 8203: L1LC_ProcEdvRrmHoldMsg
Line 8217: Measurement should wait for 2.8 ms after eDRDS end.
Line 8233: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg -PendingFromMeasReq[%d]!!!
Line 8239: [4G_DRDS] L1LC_ProcEdvRrmHoldMsg -IsDuringMeas[%d]!!!
Line 8245: [4G_DRDS] !!! pNextMeasElem is NULL !!!
Line 8279: [4G_DRDS] DrxConfirmInd: 4G_DRDS end, Reset CdrxRecoveryFlag(%d)
Line 8288: [4G_DRDS] Processing the Saved RRM message after eDV end 
Line 8316: [4G_DRDS] @%s (%d)
Line 8348: [4G_DRDS] DEACTIVATED From DR_State(%d) /SendRrmMeasScheduleInd ===
Line 8351: Stop DrdsAbnormalCheckTmr
Line 8418: [DSDS Recovery] IsMeasReqPending (0 -> 1)
Line 8447: [LTE L1LC] PendingFromMeasReq[%d]!!!
Line 8454: [LTE L1LC] PendingFromIsDuringMeas[%d]!!!
Line 8460: [LTE L1LC] !!! pNextMeasElem is NULL !!!
Line 8559: remain time to other stack WakeupIntrTimer (%d)
Line 8572: remain time to other stack PagingReqTimer (%d)
Line 8605: remain time to other stack PagingReqTimer (%d)
Line 8623: [LTE L1LC DSL1RC] [4G_DRDS] Remain time to other stack's paging timing (%d)
Line 8646: [NRDS] L1LC_NrdsProcRfGrantReq
Line 8651: [NRDS] LTE is Suspend state. Ignore RfGrantReq from NR
Line 8658: [NRDS] GRANT_REQ comes on unexpected state, Check NrDsState:%d !!!!!
Line 8664: [NRDS] == ENDC START == (IsEndc:%d)
Line 8674: [NRDS] LTE has RF GRANT and RF update is not needed. Send GRANT_CNF immediatly.(curProc:%d, NrCurProc:%d, ept:%d)
Line 8682: [NRDS] LTE waits RESUME. GRANT_CNF will be sent after RESUME.(NrDsState:%d)
Line 8686: [NRDS] LTE waits RSRC_RSP. GRANT_CNF will be sent after LTE get GRANT.(NrDsState:%d)
Line 8691: [NRDS] LTE will release RF. GRANT_CNF will be sent after LTE get GRANT.(NrDsState:%d)
Line 8696: [NRDS] LTE is during wakeup. GRANT_CNF will be sent after wakeupSendIPC done.(NrDsState:%d)
Line 8701: [NRDS] LTE is during sleep procedure. GRANT_CNF will be sent after wakeupSendIPC done.(NrDsState:%d)
Line 8705: [NRDS] LTE PauseFlag is TRUE. GRANT_CNF will be sent after LTE pause done and resume.(NrDsState:%d)
Line 8730: [NRDS] L1LC_NrdsProcRfUpdateReq
Line 8735: [NRDS] LTE is Suspend state. Ignore RfUpdateReq from NR
Line 8742: [NRDS] UPDATE_REQ comes on unexpected state, Check NrDsState:%d !!!!!
Line 8747: [NRDS] Waiting NR PAUSE_CNF. Send UPDATE_CNF with REJECT
Line 8759: [NRDS] RfUpdate is not needed. Send update cnf.(curProc:%d, NrCurProc:%d, ept:%d)
Line 8767: [NRDS] LTE waits RESUME. UPDATE_CNF will be sent after RESUME.(NrDsState:%d)
Line 8771: [NRDS] LTE waits RSRC_RSP. UPDATE_CNF will be sent after LTE get GRANT.(NrDsState:%d)
Line 8776: [NRDS] LTE will release RF. UPDATE_CNF will be sent after LTE get GRANT.(NrDsState:%d)
Line 8791: [NRDS] RF update (RSRC_REQ) is not sent as is_meas_ongoing(%d) eDV_Active(%d) DuringClkest(%d) DSDS_NO_PAUSE_RESUME(%d) DuringGap(%d) IsWakeupOngoing(%d)
Line 8796: [NRDS] Update RF is not done.
Line 8800: [NRDS] LTE has RF GRANT and RF update is not needed. Send UPDATE_CNF immediatly.(curProc:%d, NrCurProc:%d, ept:%d)
Line 8820: [NRDS] L1LC_NrdsProcRfResumeCnf
Line 8844: [NRDS] L1LC_NrdsProcRfPauseCnf
Line 8851: [NRDS] LTE is Suspend state. Ignore RfPauseCnf from NR
Line 8870: [NRDS] LTE RF backup. Reset RfBackupNeeded(0)
Line 8873: [NRDS] LTE is ready to release. Send RELEASE_IND
Line 8888: [NRDS] LTE RF backup. Reset RfBackupNeeded(0)
Line 8891: [NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF
Line 8911: [NRDS] Reset WaitNrForRelease, when RF is available
Line 8917: [NRDS] Reset WaitNrForPause, when RF is available 
Line 8923: [NRDS] LTE is not ready to pause. Wait LTE pause
Line 8930: [NRDS] LTE is sleepstate and NrOnlyGranted. Send pause_done only for NR. -n.c
Line 8940: [NRDS] set NrOnlyGranted(%d).
Line 8961: [NRDS] L1LC_NrdsProcRfReleaseInd
Line 8967: [NRDS] LTE is Suspend state. Ignore RfReleaseInd from NR
Line 8984: [NRDS] LTE RF backup. Reset RfBackupNeeded(0)
Line 8987: [NRDS] LTE is ready to release. Send RELEASE_IND
Line 9001: [NRDS] LTE RF backup. Reset RfBackupNeeded(0)
Line 9004: [NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF
Line 9023: [NRDS] Reset WaitNrForRelease, when RF is available
Line 9029: [NRDS] Reset WaitNrForPause, when RF is available 
Line 9038: [NRDS] LTE Proc is Current Proc. No need to update RF cause.
Line 9043: [NRDS] NR Proc is Current Proc. Need to update RF cause.
Line 9062: [NRDS] LTE is sleepstate and NrOnlyGranted. Send release_ind only for NR. -n.c
Line 9074: [NRDS] set NrOnlyGranted(%d).
Line 9080: [NRDS] LTE waits NR's wakeup done. But NR sent RfReleaseInd.
Line 9086: [NRDS] LTE waits NR's sleep done. But NR sent RfReleaseInd.
Line 9095: [NRDS] == ENDC END == (IsEndc:%d)
Line 9102: [NRDS] == Reset gL1lc_DsdsDB.NrDsInfo ==
Line 9118: [NRDS] L1LC_NrdsProcAutoPauseDoneInd
Line 9125: [NRDS] LTE is Suspend state. Ignore AutoPauseDoneInd from NR
Line 9140: [NRDS] LTE RF backup. Reset RfBackupNeeded(0)
Line 9143: [NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF
Line 9150: [NRDS] LTE is ready to pause. Send PAUSE_DONE_CNF(abnormal case)
Line 9163: [NRDS] LTE is sleepstate and NrOnlyGranted. Send pause_done only for NR. gResumeReadyTimer: (%d) -n.c
Line 9171: [NRDS] LTE is sleepstate. Do pause for NR. ResumeReadyTimer: (%d) -n.c
Line 9177: [NRDS] LTE early pause timer is running, pause will be done after early pause timer expiry
Line 9183: [NRDS] gRspNeeded(%d), Send NrRfResumeReq in no auto pause CASE
Line 9189: [NRDS] LTE is not ready to pause. But Pause_Flag is TRUE. LTE will do pause after unit action.
Line 9196: [NRDS] LTE waits NR's wakeup done. But NR sent AutoPauseDone.
Line 9202: [NRDS] LTE waits NR's sleep done. But NR sent AutoPauseDone.
Line 9223: [NRDS] Don't change NrdsState %d -> %d , IsEndc is FALSE.
Line 9228: [NRDS] Don't change NrdsState %d -> %d , NR is already RF_RELEASE state.
Line 9231: [NRDS] SET NrdsState %d -> %d
Line 9249: [NRDS] LTE L1 ignored EPT. Send RESUME_REQ to RSM
Line 9251: [NRDS] L1LC_NrdsProcEptIgnoreCheck (curProc:%d, NrCurProc:%d, ept:%d)
Line 9256: [NRDS] L1LC_NrdsProcRfAvailableRsp
Line 9260: [NRDS] PauseFlag was set. LTE will do pause later. Do nothing here
Line 9268: [NRDS] NR is PAUSE state, send RESUME_REQ to RSM.
Line 9272: [NRDS] NR is WAIT_PAUSE state, but send RESUME_REQ to RSM anyway.
Line 9281: [NRDS] set NrOnlyGranted(%d).
Line 9290: [NRDS] NR is WAIT_GRANT_CNF state, send GRANT_CNF to RSM.
Line 9295: [NRDS] set NrOnlyGranted(%d).
Line 9301: [NRDS] NR is WAIT_UPDATE_CNF state, send UPDATE_CNF to RSM.
Line 9306: [NRDS] NR is SLEEP state, no need to let NR know RF available.
Line 9309: [NRDS] NR is GRANT state, no need to let NR know RF available.
Line 9313: [NRDS] Check NrDsState(%d)!!!!!
Line 9329: [NRDS] L1LC_NrdsProcSleepInd(%d)
Line 9342: [NRDS] L1LC_NrdsProcSleepInd - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9347: [NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9354: [NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9359: [NRDS] L1LC_NrdsProcSleepInd(endc stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9367: [NRDS] L1LC_NrdsProcSleepInd - LTE Sleep was pended. reset IsLteWakeupPended(%d) and process conn sleep
Line 9389: [NRDS] L1LC_NrdsProcWakeupInd(%d)
Line 9397: [NRDS] L1LC_NrdsProcSleepInd - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9402: [NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9409: [NRDS] L1LC_NrdsProcSleepInd(other stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9414: [NRDS] L1LC_NrdsProcSleepInd(endc stack) - LTE Wakeup was pended. reset IsLteWakeupPended(%d) and process wakeup
Line 9422: [NRDS] L1LC_NrdsProcSleepInd - LTE Sleep was pended. reset IsLteWakeupPended(%d) and process conn sleep
Line 9446: [NRDS] Don't change NrdsSleepState %d -> %d , IsEndc is FALSE.
Line 9449: [NRDS] SET NrdsSleepState %d -> %d
Line 9482: [NRDS] SET IsRfAvailForNr %d -> %d
Line 9514: [NRDS] L1LC_NrdsProcSuspendHold
Line 9518: [NRDS] Send SUSPEND_CNF here. Reset SuspendHold(0). dsdsDB can be reset
Line 9555: [NRDS] L1LC_NrdsRecalcAutoPause - eDV active case. return 0     - n.c
Line 9562: [NRDS] Gap ongoing do not check for DR or eDRDS feasibility to avoid RF band update
Line 9583: [NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
Line 9590: [NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
Line 9602: [NRDS] Set AutoPauseTime to 0 (DR_ADDED:%d, eDRDS_Avail:%d)
Line 9607: [NRDS] L1LC_NrdsRecalcAutoPause : %d -> %d
Line 9610: [NRDS] NR EPT time updated (%d->%d)
