Line 139: Initialisation of <GmmAttachDetach>, InitType=%d
Line 339: Abort ATTACH procedure and start Detach Immediately (4.7.3.1.5g)
Line 366: Ignoring Detach Requets message since GMM is in GMM_DEREGISTERED_INITIATED
Line 378: In PMM connected Mode or GSM Rat, Abort RAU Procedure and proceed with detach 
Line 398: ERROR, We should not enter here in GMM_SUSPENDED 
Line 427: Exit Routine is TRUE
Line 591: PS only Local detach is performed
Line 657: Saved Attach message is Freed  
Line 663: New Attach type is updated in Attach message pointer %d  
Line 670: Saved Attach type and Final Attach type are same or FinalAttachType is Invalid  
Line 681: SavedAttachType or Received Detach Type is not valid SavedAttachType %d, ReceivedDetachType %d 
Line 689: Attach Request message pointer is NULL
Line 854: MM_CON_ACTIVE - Detach saved and will be retrieved later.
Line 862: PS detach type
Line 873: Saving Detach Msg For Later... : invalid GMM state
Line 900: Abort ATTACH or RAU procedure and start Detach Immediately (4.7.3.1.5g/4.7.5.1.5.k)
Line 921: Saving Detach Msg For Later.. : invalid GMM state.
Line 944: ExitRoutine = %d 
Line 953: DSDS: PS is disabled , set Gmm state to DeRegistered, continue with IMSI detach
Line 964: Abort RR connection during LU procedure and initiate Detach proceudre.
Line 985: Perform IMSI detach first on GMM_SUSPENDED
Line 989: Abort RR connection during LU procedure and initiate Detach proceudre.
Line 998: Saving Detach Msg For Later... : invalid GMM state
Line 1009: Previously, it was about to send ATTACH_REQ, so cancelling ATTACH procedure
Line 1026: Previously, it was about to send RAU_REQ, so cancelling RAU procedure
Line 1036: ExitRoutine = %d 
Line 1041: Flight mode ON 
Line 1066: Saving Detach Msg For Later...
Line 1081: PS detach type
Line 1095: Saving PS Detach Msg For Later... : invalid MM state
Line 1195: Flight mode OFF 
Line 1202:  PLMN Search in Progress But Power Off Detach so need to Respond 
Line 1206: Flight mode OFF 
Line 1212:  CS+PS detach is received when HEDGE RAT is suspended
Line 1218:  CS only detach,  so need to Respond 
Line 1226: PLMN SEARCH IN PROGRESS Cant handle it !
Line 1238: Msg Saved For later
Line 1243:  Cannot Handled in this Case
Line 1516:  Invalid DetachReqAction (%x) in mm_ProcessGmmRegInitGapiDetReq 
Line 1702: CS Call/Sig is ongoing, Release RR Connection Before Sending PS Detach
Line 1734:  Invalid DetachReqAction (%x) in mm_ProcessGmmRegGapiDetReq 
Line 1761: Request for PS Domain Detach Only....
Line 1895: request for CS domain detach only....
Line 1920: GmmDeRegisteredFlg = %s
Line 1939: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 1956: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 1976: MM_MOBILE_CLASS_C_PS -> No Action
Line 1982: MM_MOBILE_CLASS_C_PS -> No Action
Line 1990: GPRS detach procedure will be used to detach IMSI in CS domain
Line 2044: Request for CS and PS Domain Detach....
Line 2069: GmmDeRegisteredFlg = %s
Line 2085: In this case, PDP deactivation will not happen even PDP is activated. GMM should locally deactivate
Line 2096: Power-off case - SM will release PDP contexts after detach finishes
Line 2135: ATT -> FALSE  OR  Sim LAI != CellData LAI -> No Action
Line 2240: CS REGISTRATION IS PENDING SO So Release RR Connection Before Sending PS Detach
Line 2372: CurrentTlliType = %s
Line 2379: TLLI assignment for GPRS detach procedure....
Line 2388: ERROR: No TLLI for GPRS detach procedure....
Line 2508: 
Line 2540: MSG Contents: %s
Line 2569: 
Line 2570: Cipher State -> %s PduId -> %04X
Line 2903: ....Unexpected mm_GmmState or mm_GmmServiceState
Line 2943: NW gave DETACH_REQ in Invaild GMM State
Line 2951: GMM_T3346 is stopped by NtwkDetachReqMsg.
Line 3016: Set GMM_RAU_AFTER_CS_CALL_FLG
Line 3024: Network Mode I -> GMM Shall Re-attach to Non-GPRS Service by Performing the Combined Routing Area Updating Procedure
Line 3065: Aborting RAU Procedures.
Line 3136: We will not re-attach because we got CAUSE which spec mentioned clearly 
Line 3179: GMM_DETACH_REQUEST message received without GMM TYPE IE....
Line 3205: NO ATTACH ACTION ...ATT flag not set, SIM LAI == CellData LAI, Assume Implicitly Attached 
Line 3281: Aborting RAU Procedures.
Line 3455: 
Line 3476: 
Line 3477: Cipher State -> %s PduId -> %04X
Line 3623:  Invalid Cause in Detach Message 
Line 3980:  Detach Req Action -> %s 
Line 3994: Detach Type -> %s
Line 4008: mm_GmmGapiRequestedDetachType = %s
Line 4022: mm_GmmNtwkDetachReqType = %s
