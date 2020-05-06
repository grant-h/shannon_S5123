Line 248: ###[NR_SRCH_DEV] DevSrchrScdNr::EnableSrchrDmover()
Line 276: ###[NR_SRCH_DEV] DevSrchrScdNr::EnableSrchrDmover()::Enable PSS_DMA_DONE_LISR...
Line 305: ###[NR_SRCH_DEV] DevSrchrScdNr::EnableSrchrDmover()::Enable SSS_DMA_DONE_LISR...
Line 366: ###[NR_SRCH_INTR] DevSrchrScdNr::ClearSrchStatus()::NR_STATUS=0x%08x - Cleared...
Line 370: ###[NR_SRCH_INTR] DevSrchrScdNr::ClearSrchStatus()::NR_STATUS=0x%08x - Not cleared...
Line 407: ###[NR_SRCH_INTR] DevSrchrScdNr::ClearSrchMode(%d) - Cleared
Line 411: ###[NR_SRCH_INTR] DevSrchrScdNr::ClearSrchMode(%d) - Not Cleared
Line 476: ###[NR_SRCH_DEV] DevSrchrScdNr::SetBufLen
Line 539: ###[NR_SRCH_DEV] DevSrchrScdNr::StartSrch => mode(%d), PathInx(%d), duplex(%d),  bw(%d), acc(%d), hypo(%d), ScdSetPosMode(%d)
Line 748: ###[NR_SRCH_DEV] [ERR] Not supported iBuffLeng=%d in mu=%d
Line 758: ###[NR_SRCH_DEV] MaxNumCandi= %d for BufferLength= %d
Line 867: ###[NR_SRCH_DEV] srch_req_mode error @ DevSrchrScdNr::StartSrch
Line 888: ###[NR_SRCH_DEV] DevSrchrScdNr::StopSrch()
Line 897: ###[NR_SRCH_DEV] Reset Srch( mdm_pd= %d, sw_rst_l= 0x%8x, sw_rst_h=0x%08x)
Line 953: ###[NR_SRCH_DEV] No need to Clear SEARCHER!
Line 981: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectPss() - Mode= %d, SrchRetryCnt=%d
Line 985: ###[NR_SRCH_DEV] Reset Srch( mdm_pd= %d, sw_rst_l= 0x%8x, sw_rst_h=0x%08x)
Line 1021: ###[NR_SRCH_DEV] SrchTestCtrl=0x%08x, TESTOUT_SEL=0x%x
Line 1069: ###[NR_SRCH_DEV][ERR] DevSrchrScdNr::DetectPss() MaxInt=0 !!!
Line 1102: ###[NR_SRCH_DEV] IntCnt::iBufLeng=%d, BufLeng=%d
Line 1126: ###[NR_SRCH_DEV] DevSrchrScdNr::Dmover is disabled!!!
Line 1147: ###[NR_SRCH_DEV] IntCnt::Now=%d, EvalStart=%d, Max=%d, Interval=%d, #WinSamp=%d, iRxBeam=%d
Line 1166: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss(), iRxBeam=%d
Line 1232: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss()::[SETPOS=0] CurrGenCnt=0x%07x ; NR_BUF_SETPOS for next=0x%7x ; Margin=%d us, Margin::Final=%d, Init=%d
Line 1234: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss()::CurrPos(Resol1/TenMs2=%03d, Sample=%06d) ; NextPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 1272: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss() - Why is NR_SETPOS_MODE one here?
Line 1284: ###[NR_SRCH_DEV]DetectSss-2::[RegVal] NR_STATUS=0x%08x, NR_CLKCTRL=0x%08x, NR_CTRL_SET=0x%08x, NR_SRCH_PARAMETER=0x%08x, NR_BUF_LENGTH=0x%08x
Line 1361: ###[NR_SRCH_DEV]DetectSss-3::[RegVal] NR_STATUS=0x%08x, NR_CLKCTRL=0x%08x, NR_CTRL_SET=0x%08x, NR_SRCH_PARAMETER=0x%08x, NR_BUF_LENGTH=0x%08x
Line 1474: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss()::Idx=%2d, NextPos(Resol1/TenMs2=%03d, Sample=%06d), Pid=%d, PathInx=%d, RegVal(NR_SSS_BUFF_POS)=0x%08x - Garbage
Line 1480: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss()::DirectRegReading[RightAfter]::Addr=0x%08x, Value=0x%08x
Line 1521: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss()::Idx=%2d, NextPos(Resol1/TenMs2=%03d, Sample=%06d), Pid=%d, PathInx=%d, RegVal(NR_SSS_BUFF_POS)=0x%08x
Line 1527: ###[NR_SRCH_DEV] DevSrchrScdNr::DetectSss()::DirectRegReading[RightAfter]::Addr=0x%08x, Value=0x%08x
Line 1640: ###[NR_SRCH_DEV]DetectSss-4::[RegVal] NR_STATUS=0x%08x, NR_CLKCTRL=0x%08x, NR_CTRL_SET=0x%08x, NR_SRCH_PARAMETER=0x%08x, NR_BUF_LENGTH=0x%08x
Line 1643: ###[NR_SRCH_DEV] NR_Srch_debug NR_PSS_CTRL 0x%x NR_SSS_CTRL 0x%x  NR_CE_INOUTSCALE 0x%x
Line 1740: ###[NR_SRCH_DEV] DevSrchrScdNr::SetDefaultSrchRegister
Line 1747: ###[NR_SRCH_DEV] EnableSrchClk=0x%x
Line 1769: ###[NR_SRCH_DEV] DisableSrchClk()
Line 1787: ###[NR_SRCH_DEV] DevSrchrScdNr::SortPssResult
Line 1838: ###[NR_SRCH_DEV] DevSrchrScdNr::SortSssResult(From=%d, To=%d)
Line 1941: ###[NR_SRCH_DEV] DevSrchrScdNr()::[ERR]::srch_req_mode= %d
Line 1950: ###[NR_SRCH_DEV] DevSrchrScdNr::Stat::TotEng= %010d, TotPathCnt= %03d, Normalized= %04d, TotZeroEngCnt= %d
Line 1956: ###[NR_SRCH_DEV] DevSrchrScdNr::Stat::TotEng= %010d, TotPathCnt= %03d, Normalized= %04d, TotZeroEngCnt= %d
Line 1976: ###[NR_SRCH_DEV] DevSrchrScdNr::EnableIntr
Line 1994: ###[NR_SRCH_DEV] DevSrchrScdNr::DisableIntr
Line 2024: ###[NR_SRCH_DEV] DevSrchrScdNr::GetSrchMem()
Line 2051: ###[NR_SRCH_DEV] DevSrchrScdNr::SrchMemCtrl(srch_info=0x%2x,Reg=0x%2x), mem_sel=0x%2x, mem_cnt=%d, mem_size=%d
Line 2085: ###[NR_SRCH_DEV] DevSrchrScdNr::PrintScdStatus
Line 2102: ###[NR_SRCH_DEV] DevSrchrScdNr::PrintPssResult(%d,%d,%d)
Line 2131: ###[NR_SRCH_DEV] PSS RES(Var):: iPid1/iPath2/Pid1=%04d, Eng=%06d, rawPos261=%09d, pPos261=%09d, PwrDb33=%06d, HalfCorr0_33=%06d, HalfCorr1_33=%06d
Line 2178: ###[NR_SRCH_DEV] PSS RES:: i3/j1/k2=%06d, rawPos(Resol1/TenMs2/Samp6)=%09d, Eng=%05d, Agc3&3=%06d, Pwr3&3=%06d, HalfCorrp3&3=%06d, HalfCorrd3&3=%06d
Line 2272: ###[NR_SRCH_DEV][ERR] DevSrchrScdNr::PrintSssResult(%d,%d,%d,%d)
Line 2278: ###[NR_SRCH_DEV] DevSrchrScdNr::PrintSssResult(%d,%d,%d,%d): From Dmover...
Line 2284: ###[NR_SRCH_DEV] DevSrchrScdNr::PrintSssResult(%d,%d,%d,%d): From APB...
Line 2324: ###[NR_SRCH_DEV] GetSssResult()::OriMem:: i3/j2/k1=%06d, Pid1/Sid3/CellId4=%08d, Eng=%05d, Afci3q3=%06d, Pwr33=%06d, pPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 2338: ###[NR_SRCH_DEV] GetSssResult()::OriMem:: i3/j2/k1=%06d, Pid1/Sid3/CellId4=%08d, Eng=%05d, Afci3q3=%06d, Pwr33=%06d, pPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 2388: ###[NR_SRCH_DEV] GetSssResult()::BestResult::SSS:: CellId=%d, Eng=%d, pPos(Resol1/TenMs2=%03d, Sample=%06d), iRxBeam=%d, #Elem4/AvgSssEng5=%09d, iSssPath=%09d
Line 2396: ###[NR_SRCH_DEV] GetSssResult()::BestResul t::SSS:: CellId=%d, Eng=%d, pPos(Resol1/TenMs2=%03d, Sample=%06d), iRxBeam=%d, #Elem4/AvgSssEng5=%09d, iSssPath=%09d
Line 2411: ###[NR_SRCH_DEV] GetSssResult()::Sorted:: i2/j2/k1=%05d, Pid1/Sid3/CellId4=%08d, Eng=%05d, Afci3q3=%06d, Pwr33=%06d, pPos(Resol1/TenMs2/Samp6)=%09d, FrmPos=%06d
Line 2421: ###[NR_SRCH_DEV] GetSssResult()::Sorted:: CellId4/Sid3/Pid1/j1/k1=%010d, Eng=%05d, Afci3q3=%06d, Pwr33=%06d, pPos(Resol1/TenMs2=%03d, Sample=%06d), FrmPos=%06d
Line 2664: ###[NR_SRCH_DEV] DevSrchrScdNr::KeepLatestSssRes(%d)
Line 2898: ###[NR_SRCH_DEV] DevSrchrScdNr::GetSssResult()
Line 2923: ###[NR_SRCH_DEV] DevSrchrScdNr::GetSssResult()::fClearSrchRes=%d <= 1
Line 2928: ###[NR_SRCH_DEV] DevSrchrScdNr::GetSssResult()::nSssInputPath=%d
Line 2941: ###[NR_SRCH_DEV] GetSssResult()::[SETPOS=%d] NR_GENCNTVAL=0x%08x, (Resol1/TenMs2=%03d, Sample=%06d)
Line 2972: ###[NR_SRCH_DEV] GetSssResult()::[SETPOS=%d] NR_GENCNTVAL=0x%08x, (Resol1/TenMs2=%03d, Sample=%06d), *(volatile u32*)(0x%08x)=0x%08x
Line 3015: ###[NR_SRCH_DEV] DevSrchrScdNr::PssDoneHisr()::PssIntCnt(Now=%d,Max=%d)
Line 3088: ###[NR_SRCH_DEV] DevSrchrScdNr::SssDoneHisr()::SssIntCnt(Now=%d,Max=%d)
Line 3106: ###[NR_SRCH_DEV] GetPschEnergy
Line 3145: ###[NR_SRCH_DEV] ================================ PSCH ENG ================================
Line 3147: ###[NR_SRCH_DEV] MaxEng (%d) PeakRate (%d) MaxSumEng (%d) MaxPwrVal (%d) AgcRssi (%d)
Line 3148: ###[NR_SRCH_DEV] ==========================================================================
Line 3180: ###[NR_SRCH_DEV] GetPssResFromReg(%d,%d)::PssIntCnt(Now=%d,Max=%d)
Line 3187: ###[NR_SRCH_DEV] Interrupt index is error!!!
Line 3231: ###[NR_SRCH_DEV] PSS RES ==> iPid=%d, iPath=%2d, PID=%d, Eng=%5d, pRawPos=%6d, PwrDbRx0=%d
Line 3367: ###[NR_SRCH_DEV][SMTC][ERR] Curr_ms=%d, NearestSmtc_ms=%d, StartSfn=%d, Offset=%d
Line 3403: ###[NR_SRCH_DEV] [SMTC] Period=%d [ms], Offset=%d [ms], Duration=%d [us], StartSfn=%d, Dist_ms=%d
Line 3404: ###[NR_SRCH_DEV] [SMTC] G0=(%02d, %07d)=0x%08x
Line 3405: ###[NR_SRCH_DEV] [SMTC] R0=(%02d, %02d, %07d)=0x%08x
Line 3406: ###[NR_SRCH_DEV] [SMTC] R1: Curr_ms= %04d, NearestSmtc_ms=%04d
Line 3407: ###[NR_SRCH_DEV] [SMTC] ORI_SET_POS=(%02d, %07d)
Line 3408: ###[NR_SRCH_DEV] [SMTC] SET_POS=(%02d, %07d)=0x%08x
Line 3416: ###[NR_SRCH_DEV] [ERROR] Src(%d) error in GetGenCntVal()
Line 3453: ###[NR_SRCH_DEV] GetPssResult()
Line 3463: ###[NR_SRCH_DEV] GetPssResult()::[SETPOS=%d] NR_GENCNTVAL=0x%08x, (Resol1/TenMs2=%03d, Sample=%06d)
Line 3508: ###[NR_SRCH_DEV] BestResult::PSS:: MAX(PID=%d, Eng=%6d), MIN(PID=%d, Eng=%d), iRxBeam=%d, Ratio*100=%d, Agc3&3=%06d
Line 3554: ###[NR_SRCH_DEV] RegVal=%6d ; rawPos(Resol1/TenMs2=%03d, Sample=%06d) ; pPos(Resol1/TenMs2=%03d, Sample=%06d)
Line 3640: ###[RLM@DEV] GetMetric4Rlm()::iCg=%d, iBitInfo=%d, iRlmRs=%d, iWriteMetric=%d, RawMetric=%d, Thresh=%d
Line 3702: ###[NR_SRCH_DEV][+] Error PosA.Resol=%d
Line 3707: ###[NR_SRCH_DEV][+] Error PosB.Resol=%d
Line 3762: ###[NR_SRCH_DEV][-] Error PosA.Resol=%d
Line 3767: ###[NR_SRCH_DEV][-] Error PosB.Resol=%d
Line 3852: ###[NR_SRCH_DEV][s] Error PosA.Resol=%d
Line 3947: ###[NR_SRCH_DEV][ConvPos] Error in ConvPosType=%d
Line 3982: ###[NR_SRCH_DEV][ERR] DevSrchrScdNr::GetSyncFreqVal(ArfcnDiffFromCenter=%d, Bw=%d)
Line 3989: ###[NR_SRCH_DEV] DevSrchrScdNr::GetSyncFreqVal(ArfcnDiffFromCenter=%d, Bw=%d, SyncFreqVal=0x%08x=%d)
Line 4015: ###[NR_SRCH_DEV] DevSrchrScdNr::GetRxBeamInx(ArrInx=%d, iRxBeam=%d
Line 4021: ###[NR_SRCH_DEV] [ERR] DevSrchrScdNr::GetRxBeamInx(ArrInx=%d, iRxBeam=%d
Line 4047: ###[NR_SRCH_DEV] Out of bound in iPeriod=%d
Line 4081: ###[NR_SRCH_PROC] Fix the AGC gain: PRx(%d => %d), DRx(%d => %d)...
Line 4101: ###[NR_SRCH_DEV] DevSrchrScdNr::PrepareReSrch(%d), iRxBeam=%d
Line 4190: ###[NR_SRCH_PROC] [SMTC] Search failed. Try full search... WinLeng=%d
Line 4259: ###[NR_SRCH_DEV] [ERR] Not supported iBuffLeng=%d in mu=%d
Line 4331: ###[NR_SRCH_DEV] DevSrchrScdNr::PrepareReSrch() - Why is NR_SETPOS_MODE one here?
Line 4366: ###[NR_SRCH_DEV] Compare SSS Res for iIntr1=%d and iIntr2=%d
Line 4375: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].ENG: %d != %d
Line 4380: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].SID: %d != %d
Line 4385: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].AFC_VAL_Q: %d != %d
Line 4390: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].AFC_VAL_I: %d != %d
Line 4395: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].RX0_PWR_DB: %d != %d
Line 4400: ###[NR_SRCH_DEV] [ERR] Diff in PathRes[%d][%d][%d].RX1_PWR_DB: %d != %d
Line 4607: ###[NR_SRCH_DEV][ERR] DevSrchrScdNr::StoreCurrTime(%d,%d,ReadVal,%s,%d)
Line 4613: ###[NR_SRCH_DEV] DevSrchrScdNr::StoreCurrTime(%d,%d,ReadVal,%s,%d) Act= %s
Line 4654: ###[NR_SRCH_DEV] [B estResult] %2d: GenCntOrReg (Resol=%d, TenMs=%02d, Sample=%06d): ElapTime=        us: Op= %s
Line 4688: ###[NR_SRCH_DEV] [B estResult] %2d: GenCntOrReg (Resol=%d, TenMs=%02d, Sample=%06d): ElapTime= %6d us: Op= %s
Line 4707: ###[NR_SRCH_DEV] [B estResult] Whole time for CellSearch= %3d ms + (160*N)
Line 4731: ###[NR_SRCH_DEV] tArg=%d
Line 4740: ###[NR_SRCH_DEV][RegVal] NR_STATUS=0x%08x, NR_CLKCTRL=0x%08x, NR_CTRL_SET=0x%08x, NR_SRCH_PARAMETER=0x%08x, NR_BUF_LENGTH=0x%08x
Line 4764: ###[NR_SRCH_DEV][RegVal] NR_PSS_CTRL=0x%08x, NR_PSS_PHASEANGLE=0x%08x, NR_PSS_PWRTHR=0x%08x, NR_PSS_RSSI_CAL=0x%08x, NR_SSS_CTRL=0x%08x, NR_CE_INOUTSCALE=0x%08x
Line 4769: ###[NR_SRCH_DEV][RegVal] RXF_SYNC_4G=0x%08x, RXF_SYNC_FREQ_VALUE[0]=0x%08x, RXF_SYNC_FREQ_VALUE[1]=0x%08x
Line 4778: ###[NR_SRCH_DEV][RegVal] NR_SSS_CTRL=0x%08x, NR_SSS_PWRTHR=0x%08x, NR_SSS_PWRTHRFLG[0]=0x%08x, NR_SSS_PWRTHRFLG[1]=0x%08x
Line 4786: ###[NR_SRCH_DEV][RegVal] Inx=%d, NR_SSS_BUFF_POS=0x%08x, NR_SSS_FREQ_COMPEN_POS=0x%08x
Line 4809: ###[NR_SRCH_DEV] TraceClass() @ line=%d @ %s()
Line 4817: ###[NR_SRCH_DEV][m_SrchrSwDb] srch_mem_ctrl(Class=0x%x,Reg=0x%x), PssIntCnt_mine(%06d,%06d), SssIntCnt_mine(%06d,%06d)
