Line 506:    Set MmState : %s -> %s
Line 513: [W]Invalid value for status
Line 540:    Set MmStateCsCallActiveFlag : %d -> %d
Line 547: [W]Invalid value for status
Line 575:    Set EmmFuncState : %s -> %s
Line 582: [W]Invalid value for status
Line 610:    Set NrmmFuncState : %s -> %s
Line 617: [W]Invalid value for status
Line 645:    Set GmmState : %s -> %s
Line 652: [W]Invalid value for status
Line 680:    Set GmmFuncState : %s -> %s
Line 687: [W]Invalid value for status
Line 715:    Set GmmServiceState : %s -> %s
Line 722: [W]Invalid value for status
Line 745:    pPlmnMmStatusDB->Data.MmInitCnfFlag : %d -> %d 
Line 766:    pPlmnMmStatusDB->Data.EmmInitCnfFlag : %d -> %d 
Line 787:    pPlmnMmStatusDB->Data.NrInitCnfFlag : %d -> %d 
Line 810:    pPlmnMmStatusDB->Data.PlmnPdpState : %d -> %d 
Line 833:    pPlmnMmStatusDB->Data.PlmnEmcPdnStatus : %d -> %d 
Line 870: [W]Invalid value for status
Line 877:    pPlmnComCtrlDB->Data.PlmnLocUpdateRej : %s -> %s
Line 979: [W]%s : mode is not supported  
Line 989:    PLMN Selection cannot be started : %s, NR Init(%d), LTE Init(%d), Hedge Init(%d) 
Line 994:    PLMN Selection cannot be started : %s, LTE Init(%d), Hedge Init(%d) 
Line 1029: [W]GSM state- Inappropriate RAT_CHANGE_STATE - %s(%d) 
Line 1036:    GSM state - PLMN action delayed until RR connection release in %s
Line 1052:    GSM state - PLMN action delayed until GMM procedure completion in %s
Line 1083:    2G PDP ACTIVE
Line 1109: [W]Inappropriate RAT_MODE_CHANGE_STATE 
Line 1110: [I]RatModeChangeState -> %s
Line 1122:    %s - Cant do Plmn Selection in %s State 
Line 1137:    %s - Cant do Plmn Selection in %s State 
Line 1154:    %s - PLMN action delayed until RR connection release in %s
Line 1163:    %s - PLMN action delayed until PS signaling connection release, except OOS Case 
Line 1168:    %s - Perform PLMN action in Idle Mode/Rcvd No Service from RRC  
Line 1189:    %s - PLMN action delayed until RR connection release in %s
Line 1206:    %s - PLMN action delayed until GMM procedure completion in %s, PdpStatus = %d
Line 1268:    %s : SrcRat = %s, isHplmnRemovedFromTempBlock = %d
Line 1291:    Fresh scan is not applicable because %s RAT is not included in %s operating mode.
Line 1297:    EUTRA is not enabled (%d). No actions required to be taken
Line 1302:    NR is not enabled (%d). No actions required to be taken
Line 1325: Already BPLMN List in Progress; Abort this & Start New List Req 
Line 1354:    We are on VPLMN, Trigger HPLMN search Immediately
Line 1365:    HPLMN Timer Not Running, So not Starting it again
Line 1373:    Wait for HPPLMN timer to take actions !
Line 1379:    Abort on-going search and start a fresh scan !
Line 1384:    Plmn List / Selection already going on, No need for triggering actions again
Line 1422: HoldPlmnRsp = %d
Line 1461: Pending PLMN SEL REQ is not yet processed, CS call is active , delete the saved message & send response to NS
Line 1499:    %s: %s(%d), MMServiceState(%d) 
Line 1504:    %s(%d), %s(%d), PmmFuncState(%d), GmmFuncState(%d)
Line 1520:    VALID LAC/RAC AVAILABLE
Line 1564: [W]Failed !! Operating Mode = %d , EUTRAN Disabled = %s 
Line 1666:    %s : %s(%d), PdpStatus = %s
Line 1668:      Emergency PDN Status = %s ,EmergencyPlmnAvailable = %s
Line 1716:    EUTRA Can be Enabled/Disabled for Rej Cause/Query CNF
Line 1722:    MMC_CSFB_MO_IN_PROGRESS_HEDGE/HEDGE_EUTRA_DISABLE is set, so Restart the Timer 
Line 1794:    %s : %s(%d), PdpStatus = %s
Line 1796:      Emergency PDN Status = %s ,EmergencyPlmnAvailable = %s
Line 1833:    %s : NR N1 mode = %s
Line 1884:    %s : Blocked Plmn ID = %06x, Block timer value = %d sec
Line 1889: not need to update PLMN_NR_TEMP_BLOCK_PLMN_L as Blocked Plmn ID, %06x is empty.
Line 1896: PLMN %06x is already present in PLMN_NR_TEMP_BLOCK_PLMN_L
Line 1951: PLMN_NR_TEMP_BLOCK_PLMN_L is full. Remove the oldest index from the list.
Line 1979: Send NR temp block list to NRMM
Line 2019:    %s : List Req Status = %s 
Line 2029: EUTRAN is already disabled temporarily for TELSTRA. No need to enable again
Line 2119:    %s : %s , %s 
Line 2123:    PLMN LIST REQ status = %s
Line 2132: [W]Rejecting Plmn List Ind, Wrong plmn_PlmnState !
Line 2153: [W]Cross over of LIST_IND, Ignoring the message
Line 2294: %s:: Entry 
Line 2549: [!]%s: Invalid data size[%d].
Line 2567:    %s : Start Any PLMN search for pending Emc Call! 
Line 2574: %s:: Exit 
