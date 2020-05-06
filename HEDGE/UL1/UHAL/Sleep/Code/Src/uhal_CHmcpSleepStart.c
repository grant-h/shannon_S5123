Line 168: activeStackId %d HW destination control(Wake-up). BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 198: activeStackId %d uhal_CHmcpSleepStart_HWConfigAfterSWWakeup : HW destination control(Wake-up). BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 216: activeStackId %d [Sleep Wake]Modem Initialize...
Line 268: [Sleep]%s , cancelSleepingVal : %d 
Line 290: activeStackId %d Uhal sleep exit: sfn %d slot %d chip %d time by uhal_CHmcpRlInfo_FastSfnSlotChip_RefRl
Line 309: [Sleep]%s
Line 340: activeStackId %d [Sleep]%s
Line 387: currentRefCounterSlot=%d, currentRefCounterChip =%d, temSfn %d, newSlot %d, currentSlot %d, currentChipInSlot %d, deltaCellkTm %d
Line 438: [Sleep] uhal_CHmcpSleepStart_WakeUpLisr: MifFreq(%d) CpuFreq(%d) slp_cnt(%d) reqd_sleep_time(%d) Diff(%d) mifTime(%d) socTime(%d)
Line 448: Wrong WakeUp Int
Line 457: WakeUp_HISR execution failure
Line 466: [Sleep]%s
Line 470: uhal_CHmcpSleepStart_SysValidLisr
Line 480: SysValid_HISR execution failure
Line 541: activeStackId %d [Sleep]%s, relativeTimeStamp %d
Line 596: activeStackId %d HW destination control(uhal_CHmcpSleepStart_IratMeasurement). BASE_ADDR 0x%x, SW_INIT_DST_ADDR 0x%x, END_ADDR 0x%x
Line 634: activeStackId %d [Sleep]%s
Line 676: activeStackId %d [Sleep Wake]timeDriectTimeComp: with drift %d 
Line 696: [Sleep Wake] refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d refCnt_beforesleep %d, frameRake %d
Line 697: [Sleep Wake] New Time compensation
Line 766: [Sleep Wake]RSN adjustment : boundaryRSN: %d currentRSN= %d currentSlot =%d,newCurrentSlot =%d , framesElapsed= %d
Line 786: activeStackId %d txTmFrameCnt = %d, txTmChipCnt = %d, txTmChipX8Cnt = %d
Line 795: activeStackId %d [Sleep Wake]sleepClockCounterDuringSleep: %d 
Line 796: activeStackId %d [Sleep Wake]elapsedChipx8TimeInSleepWithoutActualSleeping: %d 
Line 797: activeStackId %d [Sleep Wake]beforeslot: %u
Line 798: activeStackId %d [Sleep Wake]beforechip: %u
Line 799: activeStackId %d [Sleep Wake]chipx8ClocksOverSleep: %u
Line 800: activeStackId %d [Sleep Wake]elapsedChipx8TimeToComputeSfn: %u
Line 801: activeStackId %d [Sleep Wake]elapsedFrames: %d 
Line 802: activeStackId %d [Sleep Wake]chipx8ClocksOverSleepRelative	 : %d 
Line 803: activeStackId %d [Sleep Wake]swSFN	 : %d  ElapsedSlots: %d  ElapsedChips : %d 
Line 804: activeStackId %d [Sleep Wake]slotRake	 : %d  chipRake: %d  chipx8Rake : %d 
Line 814: activeStackId %d Do 3G RF initialization
Line 829: activeStackId %d Reset wakeAfterSleep in sys valid hisr
Line 837: activeStackId %d [Sleep Wake]Modem Initialize...
Line 853: activeStackId %d [Sleep Wake]Early wakeup SwSFN : %d , WakeUpTime : %d
Line 859: activeStackId %d Rf Init not needed during wakeup %d:%d
Line 865: activeStackId %d [Sleep Wake]normal wakeup SwSFN : %d , WakeUpTime : %d
Line 1011: activeStackId %d [Sleep]%s
Line 1066: activeStackId %d [Sleep Req]No cell in sleeping :RerRl = %d
Line 1077: activeStackId %d [Sleep Req]Uhal return: Invaild state: StartStopState %d 
Line 1090: [Sleep Req]Uhal return: Cancel sleeping: bchUsed %d,  cancelSleeping %d, isCbs %d
Line 1105: activeStackId %d [Sleep Req]Uhal sleep: too long (%d - %d = %d)
Line 1112: activeStackId %d [Sleep Req]adjust (%d - %d = %d)
Line 1135: [Sleep Req]uhal_CHmcpSleepStart using SlotWakeUpEn=%d, SlotsBeforePQ=%d, CPUSleepOverheadChips=%d, CpuModemSleepDiffUsec=%d 
Line 1170: [Sleep Req] currentAdjustSleepSlot(%d) updatedAdjustSleepSlot(%d) isUtranCommercialPlmnId(%d) isFngEcIo(%d) numLockedFingersIIR(%d) rssiBeforeSleep(%d) rssiThreshold(%d)
Line 1192: [Sleep Req]Befor sleep: WakeAndPqSlotDiff = %d,adjustSleepSlot= %d, FingAllocationSlot= %d, isMpInfoExisted  %d
Line 1250: [Sleep Req]Before sleep:  adjustSleepSlot= %d weakSignal = %d
Line 1287: adjustSleepSlot(%d) + WAKEUPMARGIN_LOGGING_SLOT(%d)
Line 1299: adjustSleepSlot(%d) + WAKEUPMARGIN_OPTIMIZED_SLOT(%d)
Line 1308: [Sleep Req]Before sleep: adjustSleepSlot %d minResUseTimeAdjust %d
Line 1323: [Sleep Req]Before sleep: adjustSleepSlot(%d) = adjustSleepSlot - palWakeUpSocTime_slot(%d) PAL WAKE_UP_SOC_TIME(%u)slow
Line 1332: [Sleep Req] SleepDuration = %d
Line 1345: [Sleep Req]uhal_CHmcpSleepStart_request (%d - %d = %d),swSlot %d, hwSlot %d, pichSfn %d 
Line 1348: [Sleep Req]Befor sleep: lastAfcPdm= %d
Line 1390: [Sleep Req] interrupt destroy skipped due to Reject on HW wakeup/ongoing IRAT on other stack
Line 1404: [Sleep Req]Uhal sleep Started normally: start SFN %d wakeup SFN %d sleepDuration %d(sfn) %d(slot) requestedSleepClockLength %d , WAKING_MARGIN %d 
Line 1408: [Sleep Req]beforesfn = %d, beforeslot= %d, beforechip= %d smc_TimeCurrentSFNactiveStackId %d rfReconfigDoneAfterWakeup %d UMTS_IRAT_ONGOING_DS %d
Line 1419: activeStackId %d [Sleep Req]uhal_CHmcpSleepStart_request: Cancel WakeUptimer 0x%x
Line 1431: activeStackId %d [Sleep Req]Uhal sleep: not enough reacqire time : beforesfn = %d, wakeupSfn = %d
Line 1525: [Sleep Req]uhal_CHmcpSleepStart_CalcWakeAndPqSlotDiff:  piSymbolLength=%d, piSymbolOffsetToPich=%d, PqSlot=%d,pichSlotOffsetToCpich=%d, WakeAndPqSlotDiff %d, newPqSlot %d
Line 1687: [Sleep]%s PowerOn %d
Line 1708: [SleepDbg]RefCnt:CELLk_RTG_TIME %d, TIME_REF_CNT %d, TX_TM_CPI_TIMER_R %d
Line 1735: [SleepDbg]PAL Time - palTimeAfterWakeUP %d, palTimeBeforeSleep %d, palTimeDiff %d (us)
Line 1736: [SleepDbg]PAL Time - estPalFrameCnt %d, estPalSlotCnt %d, estPalChipCnt %d
Line 1737: [SleepDbg]PrevRef Time - PrevRefFrameCnt %d, PrevRefSlotCnt %d, PrevRefChipCnt %d
Line 1738: [SleepDbg]Compare Refcnt and Pal - TotalHWChips %d, TotalPFChips %d, Diff(Ref-Pal) %d
Line 1743: [SleepDbg]Warning Diff chips(Ref-Pal) %d
Line 1758: [SleepDbg]Expected WakeUp Time - SFN %d, SLOT %d
Line 1767: [SleepDbg]Ref_cnt - refcnt_frame_sleep %d, refcnt_slot_sleep %d, refcnt_chip_sleep %d, refcnt_chipx8_sleep %d
Line 1809: uhal_CHmcpSleepStart using warmup_time=%d, clocks=%d, min_catnap_length=%d
Line 1826: Remaining cur_slp_time = %d, %d(us)
