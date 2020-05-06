Line 718: [SRCH] InitSrch
Line 835: [SRCH] StartSrch: mode(%d), cc(%d), duplex(%d), bw(%d), acc(%d), hypo(%d), setpos(%d)
Line 844: [SRCH] StartSrch: SrchMode(%d) is not NULL, ScdCtrl(0x%x)
Line 1048: [SRCH] SetSrchInfo: Invalid srch mode (%d)
Line 1109: [SRCH] StopSrch: mode(%d -> 0)
Line 1150: [SRCH] SetSrchCellInfo: earfcn(%d), type(%d), num_cell(%d), cell[0](%d, %d, %d, %d)
Line 1273: [SRCH] PSS: %4d %4d %4d 
Line 1281: [SRCH] SSS: Valid(%d), Cell ID[%d], CP Type[%d], Frame Position[%d]
Line 1979: [SRCH] PSS: Invalid srch mode (%d)!
Line 1990: [SRCH] ProcPssHisr
Line 2069: [SRCH] SSS: Invalid srch mode (%d)!
Line 2093: [SRCH] ProcSssHisr
Line 2127: [SRCH] HALSRCH_ProcPsssDoneHisr. Scd_post_acc=%d
Line 2154: [SRCH] PSSS: Invalid srch mode (%d)!
Line 2165: [SRCH] ProcPsssHisr
Line 2208: [SRCH] SSSS: Invalid srch mode (%d)!
Line 2219: [SRCH] ProcSsssHisr
Line 2260: [SRCH] Joint: Invalid srch mode (%d)!
Line 2271: [SRCH] ProcJointHisr
Line 2309: [SRCH] CFOEST: Invalid srch mode (%d)!
Line 2320: [SRCH] ProcCfoEstHisr
Line 2420: [SRCH] SetInfInfo: earfcn(%d), num_inf(%d)
Line 2499: [SRCH] DetectPss: mode(%d), acc(%d), ctrl(0x%x, 0x%x), rtg(0x%08x), PhaseAngle(%x)
Line 2651: [SRCH] DetectSss: mode(%d), pos(%d), ctrl(0x%x, 0x%x), rtg(0x%08x)
Line 2701: [SRCH] DetectPsss: Enable Intr_SrchD2DPSSSDone interrupt!, srchMemCtrl(0x%4x), ScdCtrl(0x%4x), ScdBitSelCtrl(0x%4x), Scd4GPssCtrl(0x%4x), Scd4GPssPwrThr(%d), ScdD2DCtrl(0x%4x)
Line 2707: [SRCH] DetectPsss: Enable Intr_SrchD2DPSSSDone interrupt!, ScdD2DPsssHypoPhase0(%d), ScdD2DPsssHypoPhase1(%d), ScdD2DPsssHypoPhase2(%d), Scd4GSrchOprLen(%d)
Line 2712: [SRCH] DetectPsss: Start SCD
Line 2735: [SRCH] DetectPsss: mode(%d), psss(%d), ctrl(0x%x, 0x%x), rtg(0x%08x)
Line 2766: [HRCH] HALSRCH_DetectSsss, buf_setpos(%d), num_path(%d)
Line 2788: [HRCH] HALSRCH_DetectSsss, i(%d), cand[i].ppos(%d), cand[i].spos(%d), acc_phase(%d), init_phase(%d), Pid[i](%d)
Line 2796: [SRCH] DetectSsss: Enable Intr_SrchD2DSSSSDone interrupt!, srchMemCtrl(0x%4x), ScdCtrl(0x%4x), ScdBitSelCtrl(0x%4x), Scd4GPssCtrl(0x%4x), Scd4GPssPwrThr(%d), ScdD2DCtrl(0x%4x)
Line 2802: [SRCH] DetectSsss: Enable Intr_SrchD2DSSSSDone interrupt!, ScdD2DSsssHypoPhase0(%d), ScdD2DSsssHypoPhase1(%d), ScdD2DSsssHypoPhase2(%d), Scd4GSrchOprLen(%d)
Line 2806: [SRCH] DetectSsss: Enable Intr_SrchD2DSSSSDone interrupt! FREQ_HYPO_PATH(%d), SCD_D2D_BUFF_POS(%d)
Line 2840: [SRCH] DetectSsss: mode(%d), pos(%d), ctrl(0x%x, 0x%x), rtg(0x%08x)
Line 2911: [SRCH] DetectJoint: mode(%d), sid(%d), frame_pos(%d), ctrl(0x%x, 0x%x), rtg(0x%08x)
Line 2978: [SRCH] EstimateCfo: mode(%d), pos(%d), ctrl(0x%x, 0x%x), rtg(0x%08x)
Line 3153: [SRCH] PSS peak rate: max(%d), min(%d), rate(%d)
Line 3282: [SRCH] SSS m0m1 avg: avg(%d) = sum(%d)/cnt(%d)
Line 3409: [SRCH] HALSRCH_GetPsssResult for sub[%d]: get an invalid result. Force corr to previous index value. k(%d), i(%d), j(%d), corr(%d), pos(%d)
Line 3415: [SRCH] HALSRCH_GetPsssResult for sub[%d]: k(%d), i(%d), j(%d), corr(%d), pos(%d)
Line 3443: [Yun][SRCH] HALSRCH_GetPsssResult: k(%d), i(%d), l(%d), candi_corr(%d), ppos(%d), spos(%d)
Line 3452: [SRCH] PSSS sub(%d) peak rate: max(%d), min(%d), rate(%d)
Line 3523: [SRCH] SSSS m0m1 avg: avg(%d) = sum(%d)/cnt(%d)
Line 3624: [SRCH] JOINT m0m1 avg: avg(%d) = sum(%d)/cnt(%d)
Line 3699: [SRCH] JNT: Sid %3d[%04d] Pos %7d -> %7d Val %4d %4d %4d
Line 3831: [SRCH] SortSssResult: mode(%d), m0m1_ratio(0x%x), thr(%d), m0m1_pwr(%d), sss_pwr(%d), cell_id(%d), frame_position(%d)
Line 3903: [HRCH] HALSRCH_SortPsssResult, cand[(%d)].spos=%d
Line 3946: HALSRCH_CombinePsssResult i(%d), corr(%d)
Line 3983: [SRCH] SortSsssResult: mode(%d), thr(%d), m0m1_pwr(%d), ssss_pwr(%d), sl_id(%d), frame_position(%d)
Line 3993: HALSRCH_SortSsssResult ssss(%d), valid(%d)
Line 4059: [SRCH] SCD: mode(%d), status(0x%x), intr(%09d), ctrl(0x%x, 0x%x), rtg(0x%08x)
Line 4092: [SRCH] DMA: mode(%d), hdr(%d, %d), rtg(0x%08x)
Line 4125: [SRCH] %.2d> Corr %.4d Pow %.4x pPos %.5d ePos %.4d Hypo %.1d Gain %x
Line 4146: [SRCH] PSS input data[%04d]: Ant0(%4d, %4d), Ant1(%4d, %4d)
Line 4164: ==================mmWave NR srch dump start==================
Line 4179: [SRCH] PssInputData[%05d];0xE;%4d;%4d;0xF;%4d;%4d;
Line 4184: ==================mmWave NR IQ dump start==================
Line 4201: [SRCH] PssInputData[%05d];0x26;%4d;%4d;0x27;%4d;%4d;
Line 4238: [SRCH] Cid %3d[%04d] Cp %02d Pos %6d Val %4d Pwr %5d Cfo %07d
Line 4328: [SRCH] %.2d> Corr %.4d Pow %.7d pPos %.5d Hypo %.1d Cfo %3d %3d
Line 4339: [SRCH] PSSS input data: maxdif=%d, adccordicen=%d
Line 4355: [SRCH] PSSS input data[%04d]: Ant0(%4d, %4d), Ant1(%4d, %4d)
Line 4388: [SRCH] Sid %3d[%04d] Pos %7d Val %4d Pwr %6d Cfo %3d %3d
Line 4611: HALSRCH_CheckSsssValidity 1 slid(%d), power(%d), threshold(%d)
Line 4655: [SRCH] Remove own syncTx signal: candi[%d].sid(%d), m0m1_pwr(%d), frame_pos(%d), SyncOffsetPos1(%d), SyncOffsetPos2(%d), cur_SyncOffsetIndicator(%d)
Line 4657: HALSRCH_CheckSsssValidity return false.
Line 4691: [SRCH] same m0 index: Sid %3d[%04d] Pos %7d Val %4d Pwr %6d
Line 4704: [SRCH] CheckSsssValidity: candi[%d].sid(%d), m0m1_pwr(%d), thres(%d, %d), srch_cnt(%d)
Line 4748: [SRCH] UpdateSrchInfo: mode(0), ref_pos(%d -> %d)
Line 4782: [SRCH] UpdateSrchInfo: mode(1), num_cell(%d - > %d)
Line 4804: [SRCH] UpdateSrchInfo: mode(2), old(%d, %d, %d, %02x) -> new(%d, %d, %d)
Line 4823: [SRCH] UpdateSrchInfo: mode(2), (%d) new(%d, %d, %d)
Line 4850: [SRCH] UpdateSrchInfo: mode(2), old(%d, %d, %d, %02x) -> new(%d, %d, %d)
