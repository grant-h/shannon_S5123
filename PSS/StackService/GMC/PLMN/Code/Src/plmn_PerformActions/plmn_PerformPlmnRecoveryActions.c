Line 90:    Recovery Actions Ignored - Start with a fresh MCC procedure from %s 
Line 155: UE CONTINUE MCC scan
Line 159:    Request MCC Search to %s
Line 165:    Resume and Request MCC Search from %s RAT
Line 198:    %s : Reset BPLMN context for PLMN_MAKE_TYPE2 
Line 238:    %s : Background Search Started to gain Normal Service
Line 239: [I]Plmn State : %s (%s)
Line 273:    Do not send DrxInfo IND to RRC as this is Internal Loopback optimization, so dummy list_ind will be sent to GMC internally 
Line 277:    Sending IND to RRC:Start DrxInfo Ind
Line 309:    PLMN Recovery Action in Automatic Mode 
Line 330:    HPPLMN search in progress -> continue in other RATs
Line 340:    RPlmn Exists or  plmn_RegisteredInForeignCountry -> TRUE
Line 401:    No RPlmn -> Back to PLMN_PLMN_SELECTION_USING_HPLMN_1ST_RAT
Line 407:    No RPlmn -> Back to PLMN_START_PLMN_SELECTION_USING_HPLMN
Line 421:    plmn_NoCellIndReceivedFlag: TRUE (RecoveryType = %d (RPLMN/HPLMN)); Store List From RRC and continue search on other RAT
Line 431:    Block ANY PLMN search after immediate LOSS_COV for LGU
Line 477:    PLMN Recovery Action in Manual Mode StopByModeSelChanged (%d)
Line 486:    No RPlmn, Check for HPLMN
Line 501:    Start Home Plmn Search
Line 519:    No RPlmn, No HPLMN in LIST, Try ANY PLMN
Line 542:    Trying RPlmn.
Line 557:    Block ANY PLMN search after immediate LOSS_COV for LGU
Line 599: %s:: Entry 
Line 600: %s: ForcePerform = %s
Line 608:    #1. Pre-condition check - BPLMN, LGU MCC done, PLMN search in-progress...
Line 614: [!]Abort PLMN recovery action! - BPLMN action for Normal service already going on ! 
Line 629:    Ignore PLMN recovery action! - Start with a fresh MCC procedure 
Line 640:    Ignore PLMN recovery action! - Plmn Search already in Porgress 
Line 655:    #2. Recovery exception Check - limited camping instead of normal recovery - No SIM, Auth Rej, illegal ME, EMC call pending ...  
Line 661:    SIM Not Present or SIM Read not finished -> Try Any Plmn 
Line 690:    plmn_PlmnRecoveryAbandoned -> Try Any Plmn in Auto Mode
Line 696:    plmn_PlmnRecoveryAbandoned -> PLMN_TRY_ANY_PLMN_AFTER_DELAY_RECOVERY_ABANDONED_METHOD
Line 716:    EMC call pending -> Try Any Plmn 
Line 733:    #3. Recovery exception Check - continue PLMN selection after SR grant - continue MCC scan, Blind scan ...  
Line 757:    Continue PLMN Selection
Line 763:    RPLMN Invalid
Line 768:    RPLMN Valid
Line 783:    #4. Start PLMN recovery action 
Line 812: %s:: Exit 
