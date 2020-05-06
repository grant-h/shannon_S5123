Line 168: [MBSFN] IPC: MBSFNSfAssign(cc(%d), scellAIdx(%d)): pattern0~7(0x%08x/0x%08x/0x%08x/0x%08x)
Line 175: pattern8~15(0x%08x/0x%08x/0x%08x/0x%08x)
Line 234: [MBSFN] IPC: mbmsMCCHSched(cmd:%d)
Line 249: [MBSFNN] Cc/Df(0x%08x), earfcn(%d), aIndex/aId(0x%08x), nMbsfnRL/NotiInd(0x%08x), rPeriod/offset(0x%08x), modPeriod/sfAlloc(0x%08x), MCS/aSet(0x%08x)
Line 263: [MBSFN](F) _cfg_status is zero!!!
Line 354: [MBSFN] IPC: mbmsNotifySched: cmd(%d), Cc/scellAI(0x%08x), notiRepCoeff/notiOffset(0x%08x), notiSFindex(0x%08x)
Line 362: [MBSFN](F) _cfg_status is zero!!!
Line 375: [MBSFN] ScellInfoIdx(%d)
Line 402: [MBSFN] >NotiCfg: Coef(%d), off(%d), SFIndex(%d)
Line 419: [MBSFN] >NofiPeriod: mchIndex(%d), mchModP(%d), shortModP(%d)
Line 432: [MBSFN] >NotiBegin: Coef(%d), off(%d), SFIndex(%d), shortMP(%d), effMP(%d)
Line 445: [MBSFN] >NotiStop
Line 451: [MBSFN](F) Invalid command(%d)!!!
Line 486: [MBSFN] IPC: mbmsAreaSched : Cc/aIndex(0x%08x), comSFallocP/tAllocLen(0x%08x), sf_pattern0~7(0x%08x/0x%08x/0x%08x/0x%08x)
Line 494: [MBSFN] sf_pattern8~15(0x%08x/0x%08x/0x%08x/0x%08x)
Line 502: [MBSFN](F) _cfg_status is zero!!!
Line 524: [MBSFN](F) Invalid Index: ScellInfoIdx(%d), McchInfoIdx(%d)
Line 533: [MBSFN](F) Invalid MCCH: ScellInfoIdx(%d), McchInfoIdx(%d)
Line 544: [MBSFN] >AreaSched[scellInfoIdx(%d), mcchInfoIdx(%d)]: areaIdx(%d), period(%d), totLen(%d), state(%d), pt0(0x%x)
Line 585: [MBSFN] IPC: mbmsPMCHSched(cmd:%d) : Cc/aIndex(0x%08x), pIndex(0x%x), sfOffset/sfAllocEnd(0x%08x), MCS/SchedP(0x%08x)
Line 594: [MBSFN](F) _cfg_status is zero!!!
Line 666: [MBSFN] IPC: mbmsMSIsched : CC/aIndex(0x%08x), pIndex/numMTCH(0x%08x), sfAllocStart/End(0~3)(0x%08x/0x%08x/0x%08x/0x%08x)
Line 673: [MBSFN] sfAllocStart/End(4~9)(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
Line 680: [MBSFN] sfAllocStart/End(10~15)(0x%08x/0x%08x/0x%08x/0x%08x/0x%08x/0x%08x)
Line 690: [MBSFN](F) _cfg_status is zero!!!
Line 713: [MBSFN](F) Invalid NumberOfMtch(%d)
Line 739: [MBSFN] mbmsMSISched info: ScellInfoIdx(%d), AreaIdx(%d), PMCH(%d), NumMTCH(%d), State(%d)
Line 759: [MBSFN] MTCH info updated: PmchInfoIndex(%d), MtchInfoIndex(%d), Start(%d), End(%d)
Line 766: [MBSFN] Empty MTCH not found !!!
Line 776: [MBSFN](F) Matched PMCH not found !!!
Line 813: [MBSFN] MBSFN is released: ScellInfoIdx(%d)
Line 821: [MBSFN] MBSFN Configured: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
Line 852: [MBSFN](W) MCCHAdd Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 872: [MBSFN] >MCCHAddReq: ScellInfoIdx/McchInfoIdx(%d), AreaID(%d), repP(%d), offset(%d), modP(%d), sfAlloc(0x%x), smcs(%d)
Line 899: [MBSFN] >MCCHRemove: ScellInfoIdx(%d), AreaIdx(%d), McchValidity(%d)
Line 924: [MBSFN](W) MCCHUpdate Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 931: [MBSFN] >MCCHUpdate: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 962: [MBSFN](F) MCCH StateChange Fail: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 969: [MBSFN] MCCHStateChange: ScellInfoIdx(%d), McchInfoIdx(%d), state(%d)
Line 1017: [MBSFN] MCCH Recover: ScellInfoIdx(%d), ScellIdx(%d), ccIdx(%d)
Line 1060: [MBSFN] MCCH Recover(McchInfo): ScellInfoIdx(%d), AreaID(%d), repP(%d), offset(%d), modP(%d), sfAlloc(0x%x), smcs(%d)
Line 1094: [MBSFN] MCCH Recover(NotiInfo): Coef(%d), off(%d), SFIndex(%d), shortMP(%d), effMP(%d)
Line 1125: [MBSFN] MCCH Recover(AreaSched): AreaIdx(%d), period(%d), totLen(%d), state(%d), pt0(0x%x)
Line 1132: [MBSFN] pt1(0x%x), pt2(0x%x), pt3(0x%x), pt4(0x%x), pt5(0x%x), pt6(0x%x), pt7(0x%x)
Line 1149: [MBSFN] MCCH Recover(PmchInfo): AreaIndex(%d), PMCHIndex(%d)
Line 1175: [MBSFN] MCCH Recover(PmchInfo): PmchInfoIdx(%d), numPmch(%d), offset(%d), end(%d), dmcs(%d), MSP(%d)
Line 1215: [MBSFN] MCCH Recover(MSISched): AreaIdx(%d), PmchIdx(%d), NumMTCH(%d), State(%d)
Line 1235: [MBSFN] MCCH Recover(MtchInfo): PmchInfoIdx(%d), MtchInfoIdx(%d), Start(%d), End(%d)
Line 1246: [MBSFN] ValidMtchCnt reaches MAX !!!
Line 1253: [MBSFN] Empty MTCH not found !!!
Line 1263: [MBSFN](F) Matched PMCH not found !!!
Line 1267: [MBSFN] PMCH state updated:  PmchInfoIdx(%d) !!
Line 1293: [MBSFN] MCCHRemoveSet: ScellInfoIndex(%d), ScellIndex(%d), bitmap(0x%x)
Line 1324: [MBSFN] MCCHStopSet: ScellIndex(%d), bitmap(0x%x)
Line 1358: [MBSFN] PMCHAdd: From HAL (AreaIdx(%d), PmchIdx(%d))
Line 1363: [MBSFN](F) Invaild AreaIndex(%d)
Line 1369: [MBSFN](F) Invalid PmchIndex(%d)
Line 1378: [MBSFN](F) Invalid Area State
Line 1401: [MBSFN] PMCHAdd: ScellInfoIdx(%d), PmchInfoIdx(%d), numPmch(%d), offset(%d), end(%d), dmcs(%d), MSP(%d)
Line 1415: [MBSFN](F) Matched PMCH not found !!!
Line 1438: [MBSFN] PMCHRemove: From HAL (AreaIdx(%d), PmchIdx(%d))
Line 1444: [MBSFN](F) Invalid AreaIdx(%d)
Line 1449: [MBSFN](F) Invalid PmchIndex(%d)
Line 1476: [MBSFN] PMCHRemove: ScellInfoIdx(%d), PmchInfoIdx(%d), numPmch(%d), list(0x%x, 0x%x)
Line 1489: [MBSFN](F) Matched PMCH not found !!!
Line 1511: [MBSFN] PMCHUpdate: From HAL (AreaIdx(%d), PmchIdx(%d))
Line 1517: [MBSFN](F) Invalid AreaIdx(%d)
Line 1522: [MBSFN](F) Invalid PmchIndex(%d)
Line 1540: [MBSFN](F) Invalid PmchState(%d)
Line 1548: [MBSFN] PMCHUpdate: ScellInfoIdx(%d), PmchIdx(%d), numPmch(%d), offset(%d), end(%d), mcs(%d), period(%d)
Line 1564: [MBSFN](F) Matched PMCH not found !!!
Line 1885: [MBSFN](F) Invalid Index: AreaIndex(0%xX), pmchIndex(0%xX)
Line 1894: [MBSFN] PmchMsiVal: cc/mInfoIdx(0x%x), aIdx/aInfoIdx(0x%x), pIdx/pInfoIdx(0x%x), start/end(0x%x), offset(%d)
Line 1901: [MBSFN] MSI Begin
Line 1902: [MBSFN] MSI End
Line 2031: [MBSFN] gap more than MSP: diff(%d)
Line 2044: [MBSFN](I) MBSFN_UpdatePeriods(Gap): fn0(%d), fn(%d), gap(%d, %d), slip(%d), msp_exist(%d)
Line 2067: [MBSFN](I) update MSP: AreaIdx(%d), pmchIndex(%d), MSI ModP Indicator(%d)
Line 2077: [MBSFN](F) Invalid ScellInfoIndex(%d)
Line 2157: [MBSFN](F) PMCH List broken
Line 2173: [MBSFN](I) build_csp_info, Area is over: cnt_trace(%d), total_len(%d), ScellIndex(%d)
Line 2180: [MBSFN](I) build_csp_info: fn(%d), sfn(%d), period(%d), total_len(%d), pmch_offset(%d), ScellIndex(%d)
Line 2240: [MBSFN](F) GetDecInfo: Invalid Index (ScellIdx(%d), ScellInfoIdx(%d))
Line 2272: [MBSFN] GetDecoInfo: cc(%d), asfn(%d), bit(0x%x), duplex(%d)
Line 2289: [MBSFN] Look MCCH notification
Line 2320: [MBSFN](I) MCCH MODP Toggle:%d
Line 2331: [MBSFN] MCCH SUSP, Skip : McchInfoIndex(%d)
Line 2343: [MBSFN] Wakeup from SUSP
Line 2367: [MBSFN] McchInfo(%d): cc(%d), aIndex/aId(0x%08x), mcfi/modiPeriod(0x%08x), repPeriod/offset(0x%08x), sfAlloc/mcs(0x%08x)
Line 2395: [MBSFN] No Areas mapped: MBSFN Decoding State(%d)
Line 2403: [MBSFN] MIB decoding not completed yet)
Line 2409: [MBSFN] commonSF_AllocPeriod is zero
Line 2423: [MBSFN] AreaInfo(%d): cc(%d), aIndex/aId(0x%08x), state/nPmch(0x%08x), allocP/totL(0x%08x), pattern(0x%08x), cntTrace/curOffser(0x%08x)
Line 2457: [MBSFN] PmchInfo: PmchIdx(%d), modP_Ind/msiInd/state(%03d), offset(%d), end(%d), mcs(%d), msp(%d), cnt_trace(%d)
Line 2510: [MBSFN] MSI Info: type(%c), mbsfnId(%d), cfi(%d), mcs(%d)
Line 2598: [MBSFN](F) Invalid Index: PmchIdx(%d)
Line 2606: [MBSFN] MSI Index Info: areaIdx(%d), pmchIdx(%d), AreaInfoIdx(%d), PmchInfoIdx(%d)
Line 2611: [MBSFN](F) Invalid Index: AreaIdx(0x%X), PmchIdx(0x%X)
Line 2617: [MBSFN] Number of MTCH: %d
Line 2628: [MBSFN] Remove MTCH: MtchInfoIdx(%d)
Line 2687: [MBSFN](F) Matched PMCH not found
Line 2903: [MBSFN] MBSFN_ResetMBSFN
Line 2938: [MBSFN] Change Notification: cch_noti(0x%x)
Line 2946: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 2978: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3076: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3122: [MBSFN](F) Mismatch SubframeIndex: Rec(%d), DB(%d)
Line 3133: [MBSFN](F) Invalid ScellnfoIdx(%d)
Line 3167: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3196: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3232: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3275: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3317: (F)meas_type = %d is INVALID!!
Line 3356: (F)meas_type = %d is INVALID!!
Line 3427: [MBSFN](F) Invalid ScellInfoIdx(%d)
Line 3448: [MBSFN](F) Invalid Status(%d)
Line 3469: [MBSFN] cspRebuildStatus(%d)
Line 3636: [MBSFN](F) Invalid Index: ScellIdx(%d), CcIdx(%d)
Line 3647: [MBSFN](F) Invalid Index for Pcell: ScellIdx(%d), CcIdx(%d)
Line 3691: [MBSFN] No Empty sCellInfoIdx: ScellIdx(%d), CcIdx(%d)
Line 3698: [MBSFN] ScellInfo: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
Line 3813: [MBSFN](F) Invalid Index : ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
Line 3824: [MBSFN] Recover ScellInfo: ScellInfoIdx(%d), ScellIdx(%d), CcIdx(%d)
