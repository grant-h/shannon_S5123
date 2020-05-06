Line 130:    LTE HEDGE EMC Mode and HPLMN is in temp Blocked PLMN List try Any PLMN Camping
Line 140:    No Actions taken in LGU LTE roaming, Wait for NO_CELL_IND / EUTRA_DISABLE to trigger search !
Line 160:    Wait for NO_CELL_IND / EUTRA_DISABLE to trigger search !
Line 181:    PS Only device perform Plmn Selection after max attempts
Line 197:    Wait for NO_CELL_IND / EUTRA_DISABLE to trigger search !
Line 224:    %s : NwRejCause = 0x%x 
Line 261: %s Blocking duplicate actions as SelectionInProgress / RatChangeInProgress / DeepSleepTimer is going on 
Line 270:    %s during ongoing Power-off..Add Rplmn to FPLMN list..Further PLMN selection related actions not expected!
Line 276:    %s during ongoing Power-off..Further PLMN selection related actions not expected!
Line 297:    %s during ongoing Power-off..Add Rplmn to GMM FPLMN list..Further PLMN selection related actions not expected!
Line 318:    Default Case - %s
Line 335:    TMO EMC call pending, as attach fail with default cause, go to next system
Line 350:    %s fail during ongoing Power-off..Further PLMN selection related actions not expected!
Line 392:    %s : %s, %s(%d), BlockPlmnActions[%d]
Line 407:    PLMN_NO_PDP_CONTEXT_ACTIVATED_ERR
Line 675:    %s : %s NeedPlmnSel : %d, IsEMCOnlyBearer: %d
Line 727:    Only EMC PDN accepted. Change to limited state
Line 737:    UE Attached for Emergency services in LTE/NR
Line 780:    EPS only Registration notified, Gather list from current RAT and TRY for Selected PLMN on 2G/3G !
Line 787:    EPS only Registration during HPPLMN, Restore back to RPLMN (Restart HPLMN Timer for 2 min for next recovery) !
Line 845:    %s : %s, VoPS = %d 
Line 948:    %s : %s(%d)
Line 1006: [W]#18 Reject on roaming network(No underlying 3GPP network) -Consider as reject and move to next system
Line 1010: [W]%d
Line 1019: [W]%s ignored - plmn_State = %s, PlmnSelectionInProgress = %d, DEEPSLEEP_TIMER_STARTED = %d
Line 1064: [W]%s ignored - Manual List Req pending or Manual User Selected PLMN Response expected
Line 1093:    LTE only mode with EmergencySupported TRUE, send LTE rat
Line 1099:    LTE only mode with EmergencySupported FALSE, start anyPlmn search 
Line 1106:    Not valid case 
Line 1114:    EmergencySupported TRUE, send LTE rat
Line 1120:    EmergencySupported FALSE, send dummy rat for pending EMC call
Line 1142:    TMO EMC call pending, as EMC is not supported after attach cnf, go to next system
