Line 140: ###[NR_SRCH_PROC] SrchType is Mismatched (%d VS %d)
Line 144: ###[NR_SRCH_PROC] %s (BAND = %d, Arfcn = %d, Numerology= %d)
Line 179: ###[NR_SRCH_PROC] SPECIAL_PURPOSE (BitMap= 0x%08x, iStart= %d, iEnd= %d)
Line 195: ###[NR_SRCH_PROC] Wrong BitMap...
Line 203: ###[NR_SRCH_PROC] SrchType is ERROR
Line 225: ###[NR_SRCH_PROC] SrchrScdProcNr::EnableSync (%s)
Line 238: ###[NR_SRCH_PROC] SrchrScdProcNr::rawPeriod=%d, iPeriod=%d, Arfcn=%d, DiffFromCenter=%d
Line 288: ###[NR_SRCH_PROC] SrchrScdProcNr::EnableSync()::ArfcnDiffFromCenter is modified into %d...
Line 609: ###[NR_SRCH_PROC] SrchType(%d) Error in SrchrScdProcNr::EnableSync!!!
Line 616: ###[NR_SRCH_PROC] EnableSync @ %s Numerology %d  WindowLength %d 
Line 618: ###[NR_SRCH_PROC] SrchrScdProcNr::TargetPcid=%d, RbsType=%d, mmSrchCnt=%d, MaxSrchCnt=%d, StartSfn=%d
Line 632: ###[NR_SRCH_PROC] EnableSync()::From Registry(NRL1.SRCH.Thresh4SumCorr= 0x%X)::w4Thresh=%d
Line 650: ###[NR_SRCH_PROC] EnableSync()::Weight by force::w4PssEng= %d, w4Thresh=%d
Line 659: ###[NR_SRCH_PROC][SRCH_DEBUG] Combined mode => Legacy mode due to mu=%d and iPeriod=%d > 7
Line 668: ###[NR_SRCH_PROC] Can't start search because of insufficient margin for starting search. 
Line 783: ###[NR_SRCH_PROC] SrchrScdProcNr::InitSrch
Line 856: ###[NR_SRCH] SrchrSyncInitProcNr::InitHalSrchrDb() - NEED_TO_FILL_UP...
Line 954: ###[NR_SRCH_PROC] SrchrScdProcNr::ReInitSync(bw= %d, rx_path_idx= %d)
Line 997: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr (srch_req_mode = %d), (mine)=(%d,%d,%d,%d)
Line 1005: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr() - No more to evaluate...
Line 1012: ###[NR_SRCH_PROC] SRCH_MODE_FSCAN -> Sending SEARCHSCD_CMD_CB
Line 1029: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr() sends SEARCHSCD_NR_CMD...
Line 1034: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcPssDoneHisr() - All the PSS intr are invoked...
Line 1040: ###[NR_SRCH_PROC] SEARCHSCD_NR_CMD is NULL!!!
Line 1056: ###[NR_SRCH_PROC] SRCH_MODE_FACTORY -> Sending SEARCHSCD_CMD_CB %d %d
Line 1068: ###[NR_SRCH_DEV] SRCH_MODE_FACTORY BestResult::PSS:: MAX(PID=%d, Eng=%6d), MIN(PID=%d, Eng=%d)
Line 1083: ###[NR_SRCH_PROC] SrchMode is Error @ SrchrScdProcNr::ProcPssDoneHisr
Line 1104: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcSssDoneHisr
Line 1119: ###[NR_SRCH_PROC] SrchrScdProcNr::ProcSssDoneHisr() - No more to evaluate.. (mine)=(%d,%d,%d,%d)
Line 1133: ###[NR_SRCH_PROC] SrchrScdProcNr::Clear PssIntCnt stat...
Line 1190: ###[NR_SRCH_PROC] SrchrScdProcNr::ERROR in PssIntCnt::(mine)=(%d,%d,%d,%d)
Line 1272: ###[NR_SRCH_PROC] [WrongCellID] SrchrScdProcNr()... Shortened search is done...
Line 1328: [%s] check agc j %d AgcGainIdx %d  RawAgcGainIdx %d  RawPwrDb %d  TargetRms %d
Line 1345: ###[NR_SRCH_PROC] SrchrScdProcNr::Send SEARCHSCD_NR_CMD::#FoundCells=%d, SrchThresh[0]= %04d, SrchThresh[1]= %04d, SrchThresh[2]= %04d, SrchThresh[3]= %04d
Line 1353: ###[NR_SRCH_PROC] SrchrScdProcNr::RxBeamSweep: %d out of %d or SrchRetryCnt= %d
Line 1362: ###[NR_SRCH_PROC] SEARCHSCD_NR_CMD is NULL @ SrchrScdProcNr::ProcSssDoneHisr
Line 1381: ###[NR_SRCH] SrchrScdProcNr::InstallLisrHandler()
Line 1418: ###[NR_SRCH] SrchrScdProcNr::DisableSrch()::No search to disable.
Line 1422: ###[NR_SRCH] SrchrScdProcNr::DisableSrch()
Line 1453: ###[NR_SRCH] SrchrScdProcNr::GetSrchPeriod(Raw= %d ms, inx=%d)
Line 1473: ###[RLM@PROC] SrchrScdProcNr::InitRlmStatus(iCg=%d)
Line 1504: ###[RLM@PROC] SrchrScdProcNr::InitRlmInfo(iCg=%d, iRsType=%d)
Line 1546: ###[RLM@PROC] SrchrScdProcNr::EnableRlm(iCg=%d, iRsType=%d)
Line 1572: ###[RLM@PROC] SrchrScdProcNr::ProcSync10msHisr()::SFN=%d
Line 1626: ###[RLM@PROC] No evaluation of RLM this time: SFN=%d
Line 1705: ###[RLM@PROC] (iCg1,iBitInfo1,iRlmRs1,RsType1,iReadMetric2)=%06d, IsMetricValid(In1,Out1)=%04d, AccIS_Metric=%d, AccOOS_Metric=%d, IS_Metric=%d, OOS_Metric=%d, Thresh(In4,Out4)=%08d
Line 1764: ###[RLM@PROC] [ERR] Why CurrL1cState=%d for iCg=%d?
Line 1774: ###[RLM@PROC] SFN=%d, iCg=%d, CurrL1cState=%d, prevSentSyncStatus=%d, SyncStatus=%d, NeedToSendSsInd=%d
Line 1797: ###[RLM@PROC] Confirm RLM_START_NR_CMD @ SFN=%d.
Line 1801: ###[RLM@PROC] RLM_START_NR_CMD is NULL at SFN=%d.
