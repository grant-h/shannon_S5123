Line 393: mm_PlmnFailedActionForETWS = %d
Line 396: PlmnId = %d
Line 479: In mm_CheckRatChgOngoingAndDelayTimerExpiryActions Rat change Req : %d, Rat mode Change state %s
Line 494: %d TimeOuts During Rat Change. Action Delayed ...
Line 502: %d TimeOuts During Rat Change. RAT Change Crashed !!!!! Timer Expiry Ignored....
Line 540: (%s) Expired
Line 555: DSDS proc in progress Delay Location Update Untill resume indication from other stack
Line 575: TimeOuts During DSDS proc ongoing on the other Stack Action Delayed
Line 624: mm_DecodeTimerExpiryMsg -> %s,%d
Line 635: (%s) Expired
Line 662: (%s) Expired, Actions are delayed
Line 669:  Timer Object ID -> %d
Line 675: Current Stack -> %d, Timer ID -> %d
Line 703: %s  in  mm_PerformT3210ExpiryActions [24.008]-4.4.4.9 
Line 711: Location Update Timed Out, RR Connection shall be released and Abnormal Cases D-H in [24.008]-4.4.4.9 Run
Line 729: Unexpected event that MM connection exists and REL_REQ comes. Synchronizing MM/CC state
Line 781: %s  in  mm_PerformT3211ExpiryActions
Line 785: T3211 Timed Out but can not perform Loc Upd due to Loss of Coverage
Line 821: T3211 Timed Out but can not perform Loc Upd due to Loss of Coverage
Line 844: T3211 Timed Out, Performing Loc Upd...
Line 918: %s  in  mm_PerformT3212ExpiryActions
Line 943: Due to Access Barred or No Service or LTE RAT, Delay Location Update Untill a Good Cell is Found !
Line 993: UpdateStatus Does Not Allow Location Update to Take Place
Line 1000: Due to UpdateStatus, Delay Location Update Untill a Good Plmn is Found... !
Line 1007: Improper Update Status for T3212 Expiry !
Line 1017: Saving Timer Msg Until Later......
Line 1036: T3212 Expired But Network Requested for No Location Update to be Done.
Line 1065: %s  in  mm_PerformT3213ExpiryActions
Line 1082: T3213 Timed Out but can not perform Loc Upd due PLMN Search Handle it after Cell Ind
Line 1139: %s  in  mm_PerformT3214ExpiryActions
Line 1143: T3214 expired during EMC call , Actions are ignored to avoid EMC call drop
Line 1173: %s  in  mm_PerformT3216ExpiryActions
Line 1176: T3216 expired during EMC call , Actions are ignored, to avoid Emergency call drop
Line 1210: %s  in  mm_PerformT3218ExpiryActions
Line 1240: %s  in  mm_PerformT3220ExpiryActions
Line 1407: CMCC: CS RB's are not released even after call disconnect
Line 1412: T3240 expired in PMM_IDLE & QRB_STANBY state : REL_REQ cause to REL_REQ_ALL_RESOURCES
Line 1523: %s  in  mm_PerformPlmnListsTimExpAction
Line 1543: mm_PerformMmLauBlockTimerExpiryActions
Line 1563: PAL Error : %x
Line 1584: PAL Error : %x
Line 1600: PAL Error : %x - %d
Line 1607: QRB is diabled.. MM_START_QRB_TIMER is not available
Line 1626: Set MM_T3210 timer value to 10s as per LTE DATA activated of other stack
Line 1684: Timer Duration: %d, mm_GetT3240DurationInSeconds: %d
Line 1701: Timer Duration: %d, mm_GetT3240DurationInSeconds: %d
Line 1716: Set ABORT_QRB timer value to 12 secs for DSDS case
Line 1737: Timer ID Error : %d
Line 1748: PAL Error : %x
Line 1756: timer_duration == ZERO in mm_StartGmmTimer not started
Line 1769: PAL Error : %x - %d 
Line 1800: Request to Start a Timer (%s) that is Already Started !
Line 1811:  %s  ->  RUNNING 
Line 1813:  %s   -> Status -  %d
Line 1847: PAL Error : %x
Line 1975:  %s  ->  MM_TIMER_STOPPED 
Line 2014: T3212 already expired, do not start T3212 again
Line 2025: T3212 value received in broadcast: %d seconds, Timer will be started after LAU ACCEPT
Line 2037: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since CellData.T3212 == 0
Line 2042: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since UpdateStatus is Not Suitable
Line 2047: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since T3212 is Already Running !!!!
Line 2052: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since T3211 or T3213 or T3210 is Already Running !!!!
Line 2057: Attempt to Start T3212 Failed in mm_CheckCellDataAndStartT3212 since MM is not IDLE or SIM is invalid !!!!
Line 2290: PAL Error : %x
Line 2297: timer_duration == ZERO in mm_StartGmmTimer -> GMM_T3302 not started
Line 2313: PAL Error : %x
Line 2341: Abnormal Failure - Ending PS DOMAIN SIG HERE
Line 2353: Request to Start a Timer (%s) that is Already Started !
Line 2364:  %s  ->  RUNNING
Line 2366:  %s  -> Timer Status -  %d
Line 2425:  %s  -->  STOPPED
Line 2428:  %s -  %d
Line 2590: 
Line 2610:  %s ->  RUNNING
Line 2617: No Timers are Running !
Line 2645: pal_TmCreateMsgTimer did not return PAL_SUCCESS in mm_CreateTimers
Line 2669: %s timer Expired during RAT Change, Re-Starting it for a short while ... in %s , %s state
Line 2679: %s timer Expired and triggering RAU now.
Line 2694: Abnormal scenario on MM_WFRAU timer happens. reset the GMM CELL IND states..
Line 2699: RAU cannot be triggered, because state is not valid.
Line 2779: %s  in  mm_PerformWatchDogExpiryActions, cause = %d
Line 2781: Crash on Stuck is %d
Line 2791: MM send GAPI UNRECOVERD IND to restart stack
Line 2815: %s  in  mm_PerformGmmWatchDogExpiryActions, cause = %d
Line 2824: GMM send GAPI UNRECOVERD IND to restart stack
Line 2896: Triggering RAU, because it was pended..
Line 2929: Entering here since LAU is needed due to 3312 expiry
Line 2938: Periodic Location Update is triggered since 3312 was already expired
Line 2959: Timer for Quick Rollback is expired! Giving up to rollback to LTE..
Line 2970: Timer for QrbForG2L is expired!So immediately MM will send LU/RAU request.
Line 2998: Timer for Quick Rollback is expired! Starting to rollback to LTE..
Line 3022: There is no LTE cell or no PDP context, so restarting timer
Line 3028: WARNING!! timer is invalid, so Ignoring this timer expiry
Line 3040: MM_WAIT_FOR_SCR_BEFORE_LAU timer expired or SCR is sent by NW, Perform LAU
Line 3050: CS domain access is not allowed or MM is not in Idle State, set LAU needed to TRUE for further registration
Line 3063: MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO timer expired, No UNITDATA_IND after L2U PSHO
Line 3069: Discarding Saved Emergency Call.
Line 3076: Call Ended, releasing CS CALL Grant
Line 3084: CS procedure is not CS CALL, not expected
Line 3099: MM_DSDS_DELAY_STACK_RESUMPTION timer expired, Put MMC resume Request on to Main Queue
Line 3107: ERROR : MMC resume Request pointer is NULL
Line 3119: MM_DSDS_IMS_SIG_GAURD_TIMER timer expired, Clearing the IMS Signaling grant locally if not released yet
Line 3188: Condition is met, so starting QRB timer.
Line 3242:  mm_T3246DurationInSeconds -> %d (0x%02X) 
Line 3268: T3246 value -> %02X
Line 3282: T3246 value -> NOT included; Deactivated 
Line 3294:  mm_GmmT3346DurationInSeconds -> %d (0x%02X) 
Line 3320: T3346 value -> %02X
Line 3334: T3346 value -> NOT included; Deactivated 
Line 3358: RemainingT3246 value -> %d      (%d)
Line 3384: Remaining T3346 value -> %d      (%d)
Line 3417: No running T3246/T3346
Line 3429: PLMN id for T3246/T3346 ->  %x	  %x	   %x
Line 3440: Remaing T3246 value -> %x  
Line 3446: Remaing T3246 value -> %x this value is not valid.
Line 3455: Remaing T3346 value -> %x  
Line 3461: Remaing T3346 value -> %x this value is not valid.
Line 3489: Due to Access Barred or No Service, Delay Location Update Untill a Good Cell is Found !
Line 3553: ....timer deactivated
Line 3561: ....timer duration = %d(seconds)
Line 3569: ....timer duration = %d(seconds)
Line 3576: ....timer duration = %d(seconds)
Line 3583: ....timer duration = %d(seconds)
Line 3591: ....timer duration = %d(decihours)
Line 3600: ....timer duration = %d(seconds)
Line 3693: T3212 Start Time %d, End Time %d secs.
Line 3694: T3212 will be started with remainng value = %d
Line 3708: T3212 value %d secs.
Line 3717: Timer out!!! MM is tired to wait for MM_REL_CNF. Sending it again!!
Line 3725: No response from URRC for REL_REQ, Suspending RAT due to STOP_NWK_REQ!!
Line 3754: Timer out!!! GMM is tired to wait for MM_REL_CNF. Sending it again!!
Line 3772: Timeout! U2L will be allowed now..
Line 3788: Didn't get DETACH_REQ
Line 3798: PAGING will not be retrieved
Line 3809: RRC Connection release was not received so QRB will be aborted
