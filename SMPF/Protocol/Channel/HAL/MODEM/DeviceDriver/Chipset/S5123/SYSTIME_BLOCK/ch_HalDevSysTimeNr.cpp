Line 173: ###[NR_SYSTIME_DEV] %s, rtgCounter %d, m_GenCounter %d
Line 196: ###[NR_SYSTIME_DEV] %s, rxPath(%d), dig_on(%d)
Line 242: ###[NR_SYSTIME_DEV] %s, rf(%d), rtg(%d)
Line 277: ###[NR_SYSTIME_DEV] %s(RxPath:%d) is out of range
Line 308: ###[NR_SYSTIME_DEV] %s(RxPath:%d) is out of range
Line 331: ###[NR_SYSTIME_DEV] %s(RfPath:%d) is out of range
Line 339: ###[NR_SYSTIME_DEV] %s abnormal bw value
Line 347: ###[NR_SYSTIME_DEV] %s(RxPath:%d) : sysInfo(%08x -> %08x)
Line 449: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG%d): RTG(%x %x) diff(%d) bbRtg 0x%x, rfd 0x%x
Line 512: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG%d): RFD(%d) RTG(%x %x) diff(%d) bbRtg 0x%x, rfdRtg 0x%x
Line 519: ###[NR_SYSTIME_DEV] SetRtgLoad(RTG%d): RFD(%d) offset(%d)
Line 566: ###[NR_SYSTIME_DEV] ConfigRtg(RTG:%d) is out of range
Line 575: ###[NR_SYSTIME_DEV] rtgValue : %d, timeOffset : %d
Line 610: ###[NR_SYSTIME_DEV] ConfigRtg#1(RTG%d) : rtgCounter(0x%x), genCounter(0x%x), generalSnap(0x%x), sfn(%d) timeOffset(%d)
Line 616: ###[NR_SYSTIME_DEV] ConfigRtg#2: offset(0x%x), copy(%d), bw(%d), diff(0x%x), rtg(0x%x->0x%x), period(%d)
Line 761: ###[NR_SYSTIME_DEV] GetLteRtgCounter(RTG:%d) is out of range
Line 764: ###[NR_SYSTIME_DEV] GetLteRtgCounter(RTG%d: %d)
Line 786: ###[NR_SYSTIME_DEV] AlignRtg(RTG:%d, SRC:%d) is out of range
Line 822: ###[NR_SYSTIME_DEV] AlignRtg(RTG:%d) : bw(%d), diff(%d), rtg(%d -> %d)
Line 847: ###[NR_SYSTIME_DEV] AlignRtg(rfdRTG:%d, rfdSRC:%d) is out of range
Line 852: ###[NR_SYSTIME_DEV] AlignRtg(rfdRTG:%d, rfdSRC:%d) is different RF range
Line 871: ###[NR_SYSTIME_DEV] AlignRtg: BB(%d <- %d), RFD(%d <- %d)
Line 903: ###[NR_SYSTIME_DEV] SetSfn(RTG:%d) is out of range
Line 922: ###[NR_SYSTIME_DEV] SetSfn(RTG:%d) is out of range
Line 924: ###[NR_SYSTIME_DEV] SetSfn(RTG:%d) , sfn(%d)
Line 955: ###[NR_SYSTIME_DEV] GetSfnLoadValue(RTG:%d) is out of range
Line 1055: ###[NR_SYSTIME_DEV] GetRtgCounter(RTG:%d) is out of range
Line 1096: ###[NR_SYSTIME_DEV] GetGenCounter(RTG:%d) is out of range
Line 1100: ###[NR_SYSTIME_DEV] GetGenCounter(RTG:%d) : genCounter(%08x), latch(%d)
Line 1127: ###[NR_SYSTIME_DEV] GetLteNrRtgDiff: lteRtgOffset(rtg%d 0x%x) nrRtgOffset(rtg%d 0x%x) RtgDiff(%d)
Line 1163: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d) is out of range
Line 1176: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d): mode(0x%x), time(0x%x)
Line 1200: ###[NR_SYSTIME_DEV] EnableSystemTimeIntr(idx:%d) is out of range
Line 1353: ###[NR_SYSTIME_DEV] SetGapMode(idx:%d) is out of range
Line 1359: ###[NR_SYSTIME_DEV]  SetGapMode(rtg%d): mode(%d), bw(%d), length(%d), sfn_tti(%d), offset(%d,%d)
Line 1395: ###[NR_SYSTIME_DEV] SetUlSystemInfo(TX:%d) is out of range
Line 1398: ###[NR_SYSTIME_DEV] SetUlSystemInfo(TX:%d) : bw(%d) , cpType(%d)
Line 1425: ###[NR_SYSTIME_DEV] SetUlSystemInfo(TX:%d) is out of range
Line 1566: ###[NR_SYSTIME_DEV] PrintRTG(BB%d, RFD%d): SFN(%d), RTG(BB: %x, RFD: %x), Diff(%d)
Line 1616: ###[NR_SYSTIME_DEV] %s(RxPath:%d) is out of range
Line 1635: ###[NR_SYSTIME_DEV] [SYSTEM] SetCaMode(CC%d): on_off(%d), time(%d), onTime(0x%x), offTime(0x%x), scs(%d)
Line 1711: ###[NR_SYSTIME_DEV] SetDrxMode: rxPath(%d), rfPath(%d), drxOnOff(%d)
Line 1743: ###[NR_SYSTIME_DEV] SetQuickSleepOnOff: rtg(%d) is out of range
Line 1761: ###[NR_SYSTIME_DEV] SetQuickSleepOnOff: rtg(%d), on_off(%d), scs(%d)
Line 1788: ###[NR_SYSTIME_DEV] GetLatchedTime : TargetRtgCounter(%x) TargetSfn(%d) TargetTti(%d) TargetOffset(%d)
Line 1790: ###[NR_SYSTIME_DEV] GetLatchedTime : rtg(%d) RtgCounter(%x) GenCounter(%x) Sfn(%d) Subframe(%d) Offset(%d)
Line 1842: ###[ULDL_DEBUG] RFIC(0x01)=0x%x, RFIC(0x4C)=0x%x, RFIC(0x8C)=0x%x
Line 1844: ###[ULDL_DEBUG][Before][%d] CC0=0x%08X, CC1=0x%08X, CC2=0x%08X, CC3=0x%08X, CC4=0x%08X
Line 1846: ###[ULDL_DEBUG][Before][%d] CC5=0x%08X, CC6=0x%08X, CC7=0x%08X, CC8=0x%08X
Line 1851: ###[ULDL_DEBUG][After] CC0=0x%08X, CC1=0x%08X, CC2=0x%08X, CC3=0x%08X, CC4=0x%08X
Line 1853: ###[ULDL_DEBUG][After] CC5=0x%08X, CC6=0x%08X, CC7=0x%08X, CC8=0x%08X
