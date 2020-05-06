Line 711: [W]H3G Optimization : Override HPLMN search timer value to %d
Line 727: [W]timer_duration 0 PLMN_HPPLMN_SEARCH_TIMER not started
Line 736:    PlmnTimer : %s Start (%d ms)
Line 766:    PlmnTimer : %s Start (%d ms)
Line 825:    Reocvery Counter = %d, ControlToGmss = %d
Line 830:    Control back to GMSS
Line 884: [!]DST Not Started !
Line 893:    PLMN_OOS_DEEPSLEEP_TIMER  Next Plmn Selection in %d Seconds ....Please Wait
Line 896:    PlmnTimer : %s Start (%d ms)
Line 899: [!]DST Start FAIL
Line 916: [!]TMO EMC call pending, dont reset rat init param
Line 973:    BPlmnRecoveryTimerDuration[%d] > Max (%d sec) value; So timer not started
Line 987:    For H3G Requirement, Setting RR release actions to start HPLMN search as soon as PS activity is stopped
Line 1018: [W]Start PLMN_BPLMN_RECOVERY_TIMER when BPLMN flag is disabled
Line 1052: [I]Plmn Selection State : %s
Line 1053:    PLMN_BPLMN_RECOVERY_TIMER not started
Line 1060:    PlmnTimer : %s Start (%d ms)
Line 1084: [W]Start PLMN_LIST_EXP_TIMER when BPLMN flag is disabled
Line 1144:    PlmnTimer : %s Start (%d ms)
Line 1172:    PlmnTimer : %s Start (%d ms)
Line 1196:    PlmnTimer : %s Start (%d ms)
Line 1250: [W]Not Commercial ATT Sim Card. Do not start CSG Manual search timer
Line 1253:    PlmnTimer : %s Start (%d ms)
Line 1285:    PlmnTimer : %s Start (%d ms)
Line 1308:    PlmnTimer : %s Start (%d ms)
Line 1332:    PlmnTimer : %s Start (%d ms)
Line 1396: [!]PlmnTimer : %s Stop --> Fail to Stop Timer
Line 1396:    PlmnTimer : %s Stop 
Line 1423: [!]PlmnTimer : %s Stop --> Fail to Stop Timer
Line 1423:    PlmnTimer : %s Stop 
Line 1452: [!]PlmnTimer : %s Stop --> Fail to Stop Timer
Line 1452:    PlmnTimer : %s Stop 
Line 1476: [W]Request to Stop a Timer (%s) thats Already Stopped !
Line 1484: [!]PlmnTimer : %s Stop --> Fail to Stop Timer
Line 1484:    PlmnTimer : %s Stop 
Line 1508: [W]Request to Stop a Timer (%s) thats Already Stopped !
Line 1512: [!]PlmnTimer : %s Stop --> Fail to Stop Timer
Line 1512:    PlmnTimer : %s Stop 
Line 1521:    (%s) Timer Stopped - %d
Line 1579: [W]Request to Stop a Timer (%s) thats Already Stopped !
Line 1582: [!]PlmnTimer : %s Stop --> Fail to Stop Timer
Line 1582:    PlmnTimer : %s Stop 
Line 1623:    PlmnTimer : %s EXPIRED 
Line 1660: [I]MmState -> %s
Line 1852:    %s : NORMAL Initialisation
Line 1913: [W]Warning! : Request to Start Timer (%s) thats Already Started !
Line 1931: [W]Failed to start timer for TimerId(%d)
Line 1976: [W]Warning! : Request to Stop Timer (%s) thats Already Stopped !
Line 1981: [W] Timer Id: [%d] Not Used 
Line 2026: [W]Warning! : Timer expired (%s) thats Already Stopped !
Line 2034: [W] Timer Id: [%d] Not Used 
Line 2039:    PlmnTimer : %s EXPIRED
Line 2089: [W]Invalid Timer Id (%d) in %s 
Line 2107: [W]Invalid value for status
Line 2116:    TimerId(%d) : TimerState Change (%d) -> (%d)
Line 2166:    pPlmnTimer_DB->plmn_recovery_counter : %d -> %d 
Line 2206:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.PowerUpDlyElapsedFlag : %d -> %d 
Line 2249:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.SearchPeriod : %d -> %d 
Line 2286:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.TimerExpiryFlag : %d -> %d 
Line 2323:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.TimerExpiryDuringSigCall : %d -> %d 
Line 2364:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.TimerExpiryInEutraDisabledState : %d -> %d 
Line 2404:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.FastFirstHigherPriorityPlmnSearch : %d -> %d 
Line 2425:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.TimerExpiryConToIdle : %d -> %d 
Line 2465:    pPlmnTimer_DB->plmn_SafetyModeValue.SafetyModeEnabled : %d -> %d 
Line 2489:    pPlmnTimer_DB->plmn_CamModeValue.CamModeEnabled : %d -> %d 
Line 2511:    pPlmnTimer_DB->plmn_CamModeValue.NoSvcScanTime : %d -> %d 
Line 2533:    pPlmnTimer_DB->plmn_HPPlmnSearchTime.IsFirstExpiry : %d -> %d 
Line 2574:    pPlmnTimer_DB->plmn_SafetyModeValue.NoSvcScanTime : %d -> %d 
Line 2616:    pPlmnTimer_DB->plmn_GuardTimerForEafcnScan : %d -> %d 
Line 2639:    pPlmnTimer_DB->tempBlockTime : %d -> %d 
Line 2699: [I]%s : %d
Line 2706: [I]No Timers are Running !
Line 2826:    OOS Time pattern in Limited or After Reg Attempt
Line 2831:    OOS Time pattern when OOS after power on
Line 2846:    PLMN_ON_ANY_PLMN
Line 2851:    We are on NO-SERVICE!!
Line 2871:    OOS Timer table Idx[%d] : Provider = %d 
Line 2908:    Safety Mode Enabled, NoSvcScanTime(%d min): Use NoSrvScanTime instead of the OOS time that is higher than 60 sec
Line 2917:    Cam Mode Enabled, NoSvcScanTime(%d sec): Use NoSrvScanTime instead of the OOS time
Line 2935:    Start sort timer
Line 2943:    plmn_PlmnRecoveryTimerDuration = %d, (plmn_recovery_counter =%d)
Line 3007: [I]SW timer start : On expiry start PLMN search
Line 3015: [I]OOS recovery loopback counter max reached
Line 3036: [I]HW timer start : On expiry start PLMN search
Line 3055: [I]OOS Deepsleep loopback counter max reached
Line 3281:    DST state : %d -> %d
Line 3288: [W]Invalid value for ctrl(%d)
