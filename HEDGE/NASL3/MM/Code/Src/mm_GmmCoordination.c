Line 111: Initialisation of <MmGmmCoordination>, InitType=%d
Line 132: mm_MsOperationMode = %d
Line 170: Unknown Initialisation Type (%x) in mm_InitialiseGmmCoordination 
Line 236: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 290: Cause = %s 
Line 474: FLAI list is not sent to AS for normal cell selection
Line 636: No ID (%x) used in mm_CoordinateCombinedAttCnf 
Line 678: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 706: Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Line 749: Combined Attach Confirm Cause = %s in mm_ProcessCombinedAttCnfCause ...[24.008]-4.7.3.2.3.2
Line 808: Combined Attach Reject Cause = %s
Line 816: CoordinateCombinedAttRej, MM Update status = %d
Line 892: Switching to MM_NETWORK_MODE_2 !
Line 988: FLAI list is not sent to AS for normal cell selection
Line 1328: mm_GetGmmAttachType = %d
Line 1431: Fast display in-service under specific condtion(NMO II, U1 updated, same LAI), LU Attempt cnt = %d, MM Update status = %d
Line 1483: mm_CoordinateCsOrMode2CsPsAtt
Line 1556: Set mm_UrrcGmmRelReqSentFlag to FALSE, release request will be sent during power off detach
Line 1592: No Need to release existing RR Connection, we can directly trigger IMSI detach
Line 1702: CS Not Enabled, Operatio Aborted in mm_CoordinateNetworkImsiDetReq
Line 1722: Detach Cause = %s 
Line 2040:  Switching to MM_NETWORK_MODE_2
Line 2057:  Switching to MM_NETWORK_MODE_2
Line 2070:  dont perform network fail actions for network initiated detach with cause NETWORK FAILURE
Line 2283:  No Coordination Necessary for this Cause 
Line 2312: %s  in   mm_CoordinateUncombinedRauCnf
Line 2349: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 2447: Deletion of equivalent PLMN list..
Line 2461: No coordination action required.
Line 2654: FLAI list is not sent to AS for normal cell selection
Line 2763: Uncombined Attach Reject with Cause #25 but not integrity protected or Not UMTS or Not camped CSG cell
Line 2770: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 2778: No coordination action required for this cause.
Line 2897:  Retrieving the old TMSI : %x %x %x %x, LAI : %x %x %x 
Line 2935:  Stopping CS Congestion Timer in COM RAU ACC 
Line 2956: The Combined RAU proc. was caused by a Call setup req. Now it can be Processed
Line 2962: Network will keep PS connection alive, so should try the pended call immediately
Line 2972: Network will give release. CM service request will fail even it tries to send. Call will be tried when MM gets CELL_IND
Line 3020: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 3054: Cause = %s
Line 3065: RAU Attempt Count >= MAX, Switching to MM_NETWORK_MODE_2 
Line 3142: Cause = %s
Line 3199: Cause = %s
Line 3324: FLAI list is not sent to AS for normal cell selection
Line 3578: Combined RAU Reject with Cause #25 but not integrity protected 
Line 3583: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3645: Deleting sim data
Line 3684: RAU attempt count -> %d
Line 3705: Stored LAI ->
Line 3708: Serving cell LAI ->
Line 3738:  Saving the TMSI : %x %x %x %x, LAI : %x %x %x 
Line 3778: Deletion of equivalent PLMN list..
Line 3879: Cause = %s
Line 4109: No Coordinate Necessary for this Cause
Line 4372: Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Line 4410: Transition from GMM_SUSPENDED to %s on successful GSM to UMTS RAT change...
Line 4840: Final Cause for MM-GMM Cordination : (0x%X)....
Line 4855: mm_CordinateActionsForPsRelease : (0x%X)....
Line 4925: mm_InitRrRelCoordActionParams - Action: %d, Cause: %d
Line 4929: Doesn't need to save action : (0x%X)....
Line 4943: ERROR: Invalid proposed Action (0x%X)....
Line 4959: Doesn't need to save action : (0x%X)....
Line 4964: Set mm_RrRelCoordActionCause: %d
Line 4979: mm_ResetRrRelCoordActionCause: %d
Line 4996: mm_RrRelCoordAction = %d
Line 5144: Invalid Rr Rel Coord Action (%x) in mm_InitRrRelCoordActionParams !!
Line 5200: Invalid RejCause in mm_GetUrrcCellRejType ...!
Line 5237: Setting Network mode -> %s
Line 5241: Unknown Network Mode (0x%02X), Setting it to NETWORK_MODE_2 in mm_SetNetworkMode
Line 5611: Invalid MsOperationMode (%x) in mm_GetCurrentMobileClassMode
Line 5644: GMM state was %s prior to suspension of GPRS
Line 5648: Checking for active GMM procedures in %s.%s
Line 5654: ...no action required
Line 5672: ...no action required
Line 5690: GMM state is back to DEREG from REG.INIT , so reset GmmRegistStatusCause
Line 5717: ...no action required
Line 5776: ERROR: Undefined GMM state
Line 5793:  mm_InitExtraMsgInSameRrFailActionParams:
Line 5805: No Actions to perform in mm_InitExtraMsgInSameRrFailActionParams
Line 5816:  mm_ExtraMsgInSameRrFailAction = %d
Line 5821:  mm_GmmExtraMsgInSameRrFailAction = %d
Line 5826: ERROR: Invalid proposed Action (0x%02X)....
Line 5831:  GCF mode is enable or mm_GmmExtraMsgInSameRrFailAction is zero ( %d )
Line 5847:  mm_ExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
Line 5849:  mm_GmmExtraMsgInSameRrFailAction -> %s in mm_PerformExtraMsgInSameRrFailAction
Line 5850: NeedCellInd: %d
Line 5856:  Foreground  PLMN search is going on. Do not perform extra msg in same RR fail actions 
Line 5977: Gmm State is not GMM_SERVICE_REQUEST_INITIATED, in mm_PerformExtraMsgInSameRrFailAction
Line 5985: Ongoing proc on the other Stack: %s, Reject the EST_REQ
Line 6030:  mm_GmmExtraMsgInSameRrFailAction is initialized because RRC Con is released or PS Sig Con Rel comes 2times..
Line 6112: Current Ms Operation Mode: %s
Line 6125: mm_RrRelCoordAction: %d
Line 6137:  MM NetworkMode -> %s
Line 6196: Ms Operation Mode: %s
Line 6244: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6253: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6259: ...GMM procedure may be progressed on same RRC connection
Line 6272: ...GMM procedure may be progressed on same RRC connection on %s expiration
Line 6277: ...GMM procedure shall NOT be progressed on same RRC connection
Line 6297:  SameRrConnexFailAction -> %d in mm_CoordinateGmmProcSameRrConn but it will not be executed..
Line 6320: Checking for IMSI/GPRS detach procedure on same RRC connection actions...
Line 6339: IMSI detach procedure has not yet completed.
Line 6356: GPRS detach procedure has not yet completed.
Line 6362: Both IMSI and GPRS detach procedure has not yet completed.
Line 6386: but detach action is not GMM_CS_AND_PS_DET_ACTION.
Line 6480: mm_CordinateActionsForCsPsRelease: MmCause: %d, GmmCause: %d, CordinateCause:%d
