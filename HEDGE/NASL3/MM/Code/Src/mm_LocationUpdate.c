Line 207: Location Update Type -> %s Cannot be performed due to T3246 Running
Line 218: Postpoing the Location Update Attempt as Emergency call is pending. LAU Type: %d 
Line 226: We are waiting for REL CNF from RR/RRC
Line 255: Location Update Type -> %s Cannot be performed, Since MM_ALLOW_CS_REGISTRATION is set to FALSE
Line 264: Ongoing proc on the other stack: %s, Don't start another CS/PS sig
Line 270: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 289: Attempting to Perform Location Update.....[24.008]-4.4.1
Line 326: Sending CSFB Status indication to NS, to indicate to SIPC
Line 464: mm_SendLocUpdReqMsg  .... Type -> NORMAL
Line 483: mm_SendLocUpdReqMsg .... Type -> PERIODIC
Line 502: mm_SendLocUpdReqMsg .... Type -> IMSI_ATTACH
Line 509: mm_SendLocUpdReqMsg .... Type -> Invalid LocUpdType in rat mode %d 
Line 566: Sending Invalid Cksn (7) as Update Status is MM_NO_IMSI
Line 621: AdditionalUpdateParam = %d
Line 622: HcommonNasRelVersion = %d
Line 646: Extended T3212 is supported
Line 676: 
Line 716: 
Line 722: 
Line 756: Mobile ID is Present in Loc Upd Acc
Line 764: Network sent IMSI as Mobile ID!!, so delete TMSI
Line 781: Network sent TMSI as Mobile ID.....
Line 782: Old 
Line 785: New 
Line 796: Network Sent NO_ID_TYPE Mobile ID !!!
Line 807: Mobile ID is NOT Present in Loc Upd Acc
Line 841: Starting T3240 timer only for 3 seconds for CMCC Network
Line 844: T3240 duration in seconds %d
Line 898: Received LAI -> 0x%02X 0x%02X 0x%02X 0x%02X 0x%02X
Line 954: NewMNC : 0x%x
Line 957: (PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
Line 964: (PREVENTION) Don't send LAU_REQ when REL_IND if NW gave wrong LAI. ()
Line 981: mm_LaiMismatchCounter is %d
Line 991: SIM LAI and Cell Data LAI Matching
Line 1021: The Loc-upd proc. was caused by a Call setup req. Now it can be Processed
Line 1026: Network has accepted the Follow On Req, RR Con will be Kept Alive !!!
Line 1044: Network has NOT Accepted the Follow On Req, CM Req has to bs Sent After RR Con is Released
Line 1091: Network Sent Equivalent Plmn List !!!
Line 1101: Network did not send Equivalent Plmn List!!, But, RPLMN is in EHPLMN list.Save EHPLMN list as Equivalent PLMN list
Line 1108: EPLMN list of LU Accept is different from one of ATTACH/RAU accept.. Don't remove Equivalent PLMN list
Line 1133: Network Sent Emergency List !!!
Line 1142: Emergency list length is 0 or more than 16, %d
Line 1148: Emergency List ptr is NULL!!!
Line 1156: NewMCC : 0x%x, OldMCC : 0x%x
Line 1157: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 1177: Starting T3212 with the value given in Per MS T3212 IE: %d secs
Line 1183: Starting T3212 with the value received from broadcast
Line 1227: %s  in  mm_DecodeLocUpdAccMsg ...[24.008]-4.4.4.6
Line 1230: mm_SimDb[MmStackId].mm_UpdateStatus = %s
Line 1265: Loc Upd Acc should not be received in this state !!??
Line 1274: Loc Upd Acc should not be received in this state !!??
Line 1297: %s  in  mm_DecodeLocUpdRejMsg....[24.008]-4.4.4.7
Line 1300: mm_UpdateStatus = %s
Line 1355: Loc Upd Reject Cause -> %s
Line 1467: Entering mm_CheckAndPerformLocUpdForCmReq...
Line 1525: Entering mm_DetermineLocUpdActionForCmReq...
Line 1604: Sending IMSI Detach Message, Establishing RR Connection
Line 1614: Sending IMSI Detach Message, Not Establishing RR Connection
Line 1630: 
Line 1642: Sending IMSI Detach Message, Establishing URRC Connection
Line 1670: 
Line 1676: 
Line 1685: Sending IMSI Detach Message, Not Establishing URRC Connection
Line 1743: Sending of IMSI Detach Message Not Required
Line 2077: copying RAI information, since it might not be saved as part of LAU.
Line 2130: MM will adding this PLMN to FPLMN list
Line 2190: Deleting PS information also
Line 2230: Deleting EPS information also in NON LTE operating mode
Line 2300: FLAI list is not sent to AS for normal cell selection
Line 2540: Performing Location Update Reject Actions...[24.008]-4.4.4.7
Line 2549: Replacing LU reject cause with Network Failure for attempting emer call.
Line 2558: Location Update shall be performed when a New Cell is entered
Line 2683: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 2738: PMM_CONNECTED -> mm_PerformLocUpdFailPlmnActions Delayed 
Line 2783: Entering mm_ProcessLocUpdRejAbnCaseAToC
Line 2799: Cause Received RR_CELL_CONGEST 
Line 2839: 2 Consecutive Failures Detected in mm_DetermineLocUpdFailureCause
Line 2890: Processing LocUpdRej Abonrmal Case D To H
Line 2892: Loc Upd Reject Cause -> %s
Line 2906: RrRelCoordActionCause -> %s
Line 2946: Not deleting equivalent list when cell data lai is equivalent plmn but not selected PLMN
Line 2967: T3311 restarted to sync with T3211
Line 3049: T3311 restarted to sync with T3211
Line 3209: LAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Line 3246: 
Line 3403: REGNOK_NOSEL is sent because PLMN search will be triggered.
Line 3427: %s  in  mm_DecodeLcsIndMsg
Line 3429: mm_UpdateStatus = %s
Line 3431: NewLcsState =%d 
Line 3560: Invalid Location Update Request, %d
Line 3636: Location Update Attempt Count Reset 
Line 3696: Location Update Type -> %s
Line 3709: Location Update Attempt Count = %d
Line 3780: RR Registration Result -> %s
Line 3822: Location Update Action -> 0x%02X
Line 3827: Location Update Action -> %s
Line 3869: Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is TRUE
Line 3875: Do Not Allow CS Registration Access since MM_ALLOW_CS_REGISTRATION is FALSE
Line 3897: Network Mode is 1 & GMM Not Registered or Network Mode is 2 -> OK (6 of 6)
Line 3902: CS Domain Access Not Allowed ->  Network Mode is 1 & GMM Registered 
Line 3908: Cell in FORBIDDEN list
Line 3915: CS Domain Access Not Allowed ->  Cell Does Not Support CS !
Line 3921: CS Domain Access Not Allowed ->  MM_NOT_REGISTERED_ERR  !
Line 3927: CS Domain Access Not Allowed ->  GMM_COVERAGE_LOST_ERR  !
Line 3933: CS Domain Access Not Allowed ->  MM_SIM_CONSIDERED_INVALID_ERR  !
Line 3939: CS Domain Access Not Allowed ->  MM_ACCESS_BARRED !
Line 3965: Skip for Checking Cell data
Line 3985: Cell Supports CS Domain -> OK (6 of 6)
Line 3990: CS Domain Access Not Allowed ->  Cell Does Not Support CS 
Line 3995: CS Domain Access Not Allowed ->  MM_NOT_REGISTERED_ERR 
Line 4000: CS Domain Access Not Allowed ->  GMM_COVERAGE_LOST_ERR  
Line 4005: CS Domain Access Not Allowed ->  SIM update status is %s 
Line 4010: CS Domain Access Not Allowed ->  MM_SIM_CONSIDERED_INVALID_ERR 
Line 4015: CS Domain Access Not Allowed ->  MM_ACCESS_BARRED  
Line 4035: Reject Cause -> 0x%02X in mm_PerformGprsAttachRejectCauseProcessing()
Line 4080: AttachType -> %d
