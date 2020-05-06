Line 279: mm_DsDelayCsIdleEntry %d
Line 424: PS : Requested Proc : %s  other Stacks proc : %s
Line 426:  Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 436: Pending SIGNALLING/PLMN Search on other stack- so saving 
Line 442: SIGNALLING on other stack- so saving 
Line 447: CS Call on other stack- so Discarding 
Line 465: Pending CS/ PS SIGNALLING on other stack- so saving request
Line 473: Pending CS call on other stack. Sending resume in PS idle entry!!
Line 491: MM_DSNC - GMM DSDS Wrong Call type : %s
Line 512: Requested Proc : %s  other Stacks proc : %s
Line 514: Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 518: Emergency Call is Received, Treating it has the highest priority !!
Line 531: Saving EST_REQ for CS call. Set SRNC pending proc 
Line 533: Saving EST_REQ 
Line 544:  Discarding EST REQ due to Call on other stack 
Line 558: Pending CS call on other stack. Sending resume in CS idle entry!!
Line 565: Pending CS call on other stack. Sending resume in PS idle entry!!
Line 578: Pending CS/PS SIGNALLING on other stack- so saving current request
Line 586: CS SIGNALLING or CS CALL on other stack- saving request
Line 597: MM_DSNC - MM DSDS Signalling Wrong Call type : %s
Line 626: MM_DSNC - MM DSDS Wrong Call type : %s
Line 675: MM_DSNC - PS : DSDS Proc Type : %s Current Proc : %s
Line 677: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 681: MM_DSNC - PS Proc is already updated with requested proc type
Line 734: MM_DSNC - PS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 736: MM_DSNC - PS : IDLE Entry Ongoing Ims Proc %s
Line 743: MM_DSNC - PS Proc is already in IDLE
Line 830: MM_DSNC - No PS procedure are running
Line 863: MM_DSNC - IMS : DSDS Proc Type : %s Current Proc : %s
Line 866: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s 
Line 870: MM_DSNC - IMS Proc is already updated with requested proc type
Line 887: IMS PROC : Grant requested for %s 
Line 908: IMS PROC : Grant requested for %s 
Line 932: Updated IMS Proc: %s 
Line 945: MM_DSNC - IMS : IDLE Entry Proc Type : %s,  Ongoing IMS Proc : %s
Line 952: MM_DSNC - IMS Proc is already in IDLE
Line 992: MM_DSNC - IMS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s
Line 1077: MM_DSNC - IMS : IDLE Entry Completed :  Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s, Ongoing IMS Proc : %s
Line 1092: MM_DSNC - CS : DSDS Proc Type : %s Current Proc : %s
Line 1094: MM_DSNC - Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1098: MM_DSNC - Here in 2G RAT without DTM support we are aborting an active PS procedure and continuing with CSCALL
Line 1105: MM_DSNC - CS Proc is already updated with requested proc type
Line 1117: Clear SRNC pending proc 
Line 1168: MM_DSNC - CS : IDLE Entry Proc Type : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1170: MM_DSNC - CS : IDLE Entry  Ongong IMS Proc %s
Line 1172: mm_DsDelayCsIdleEntry: %d
Line 1179: MM_DSNC - CS Proc is already in IDLE
Line 1194: MM_DSNC - GmmState = %s
Line 1239: MM_DSNC - No CS procedure are running
Line 1248: MM_DSNC - DSDS CS Resume Not Sent Type of Proc =%s
Line 1272: MM_DSNC - Grant Release for : %s  Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1274: MM_DSNC - Ongoing IMS Proc : %s
Line 1282: MM_DSNC -NewCsProcStatus : %d, NewPsProcStatus : %d
Line 1285: MM_DSNC -NewImsProcStatus : %d
Line 1293: MM_DSNC - STANDBY is not requested after GRANT_RELASE_IND so send SRNC_RESUME_REQ
Line 1331: MM_DSNC - In DSDS Resume Req LAU will be performed so ATTACH/RAU should be pended ....
Line 1343: MM_DSNC - In DSDS Resume Req Initiating Attach Procedure ....
Line 1355: MM_DSNC - In DSDS Resume Req Initiating RAU Procedure ....
Line 1378: MM_DSNC - RESUME_REQ with typeofproc IDLE, No need to send ILM to SR_IF
Line 1384: MM_DSNC - Sending MM Resume Req Type of Proc : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1386: Ongoing IMS Proc %s
Line 1413: MM_DSNC - Sending Sig Start Ind Type of Proc : %s domain : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1484: MM_DSNC - No need to Trigger SIG END here, Type of Proc : %s domain : %s
Line 1499: MM_DSNC - No need to Trigger SIG END here, Type of Proc : %s domain : %s
Line 1522: MM_DSNC - Sending Sig End Ind Type of Proc : %s domain : %s Ongoing CS Proc : %s Ongoing PS Proc : %s
Line 1524: MM_DSNC - Ongoing IMS Proc : %s
Line 1575: MM_DSNC - Perform Cause : %d
Line 1605: MM_DSNC - CS paging pending on other stack, GMM state - %s
Line 1619: MM_DSNC - Cs sig Ongoing %d, Ps Sig Ongoing %d, Cs Abort Possible %d, Ps Abort Possible %d
Line 1671: CSPAGING_PENDING not expected!!
Line 1679: MM_DSNC - CS paging pending actions processed on other stack, MM state %s
Line 1689: MM_DSNC - CS paging pending actions cant be processed on other stack
Line 1702: MM_DSNC - MM_DS_PERFORM_PSSIG_UNRECOVER
Line 1708: MM_DSNC - PS proc is stuck in CSPSSIG/PS call, Reset it here
Line 1726: MM_DSNC - GMM_REL_REQ triggered already
Line 1742: CELL IND is received on other stack after CS call release, So start resuming this stack
Line 1750: Not defined action in mm_DecodeMmDsdsPerformReq
Line 1765: MM_DSNC - mm_SendMMDsdsPerformReq %d
Line 1794: in mm_DsdsCheckCsEstabAbortPossible, Call Type %d
Line 1815: in mm_DsdsAbortCsEstablishment
Line 1841: in mm_DsdsCheckPsEstabAbortPossible
Line 1858: in mm_DsdsAbortPsEstablishment
Line 1864: MM_DSNC - GMM State Before Suspension is - %s
Line 1883: MM_DSNC - PDP activation/deactivation/modification ongoing..abort same,indicate SM and release grant!!
Line 1895: MM_DSNC - GMM State is Put back to Suspended
Line 1917: MM_DSNC - Other Stack init stauts : %d
Line 1985: Update DSDS Stack info type :%d, value : %d
Line 2002: MM_DSNC - STANDBY_REQ with typeofproc IDLE, No need to send ILM to SR_IF
Line 2008: MM_DSNC - Standby Req for Proc : %s Ongoing CS Proc : %s Ongoing PS Proc : %s ProcCause: %d
Line 2091: MM_DSNC - State Update Ind : %d 
Line 2097: MM_DSNC - Standby Rsp Result: %d 
Line 2103: MM_DSNC - Register Rsp : %d 
Line 2195:  MM is already De-Registered in SRNC context 
Line 2376: MM_DSNC - PCH State -> NON PCH State, during Signaling, Releasing Grant
Line 2387: MM_DSNC - NON PCH State -> PCH State, Reacquiring Signaling Grant
Line 2396: MM_DSNC - RRC State Moved to PowerOn Or Idle
