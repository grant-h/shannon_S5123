Line 284: 
Line 434: MmPlmnstate: %d, mm_callType %d  
Line 468: CM service req is triggered during LU on MM_UPDATED state, FOR set as 1 and CM service req will be pended
Line 530: No Calls Allowed During RAT Change...!!
Line 571: GPRS only mode, so normal call cannot be done! ...
Line 713: Check to see if same Reg. LAI before allowing call
Line 735: Trigger IMSI attach and then call
Line 918: Saving Msg until the current MM Con is established
Line 963: MmPlmnstate : %d, mm_callType %d  
Line 1070: CallType = %d, mm_UpdateStatus = %s, Ti = %d in  mm_DecodeMmEstReqMsg....[24.008]-4.5
Line 1146: During MO CSFB CM establishment, SMS EST_REQ shall be rejected!!AP shall retry later.
Line 1153: During MT CSFB call MM_EST_REQ can't be processed until MT Paging Response will be sent.
Line 1171: EST_REQ Will handle after MM_WAIT_FOR_UNITDATA_IND_AFTER_L2UPSHO
Line 1175: EST_REQ Saved.
Line 1190: EST_REQ Will be handled after REL_CNF or Combined Attach/RAU completed 
Line 1197: NO_CELL_IND will come very soon. So cannot handle EST_REQ now
Line 1204: CC redial is now taken care of!
Line 1270: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 1275: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1285: Ongoing proc on the other Stack: %s, Reject the EST_REQ : %d
Line 1434: Cs call connection was establihed before T3340 expiry and do pended GmmCm procedure
Line 1448: If MM state is MM_IDLE, MM received REL_IND before MM_ESTOUT_REQ
Line 1542: IMSI paging succesful, Clear RAU needed flag
Line 1547: IMSI paging succesful, Clear LAU needed flag
Line 1589: Cs call connection was establihed before T3340 expiry and do pended GmmCm procedure
Line 1662: Ultra-CSFB MT call : CC SETUP is received so clear CsfbCallState/Status.
Line 1685: Cs call connection was establihed before T3340 expiry and do pended GmmCm procedure
Line 1712: mm_MmConCount = %d  mm_MmConCountForCC = %d
Line 1722: Already one CS_CALL active, can't handle another CALL_REQ
Line 1884: Deleting Tmsi, Cksn, Lai due to CM Rej Msg [24.008]-4.5.1.1
Line 1893: MM Will Perform Location Update After RR Release...[24.008]-4.5.1.1
Line 2035: Unable to handle REEST_REQ due to either UMTS rat mode or State mismatch
Line 2072: Redial? = %d
Line 2086: CC Redialling is true and there is more than one MM CNX so not setting MM state to IDLE. CM_SERVICE_REQ will go as DATA_REQ
Line 2133: Network Aborting CM Layer Activity, Cause = %s
Line 2182: triggering Silent redial
Line 2251: mm_AwaitingCmServiceReqRsp : %d 
Line 2256: CC redial is aborted!!!
Line 2382: LOSS_CVG during call, REL_REQ from CC, Clear all contexts
Line 2395: Discard if any saved data request
Line 2405: CS procedure is not CS CALL, not expected
Line 2442: Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
Line 2449: CS procedure is not CS CALL, not expected
Line 2466: Pended MM_EST_REQ was removed, (TI=%d)
Line 2471: Signaling protection was ON, for CSFB+PSHO case, Releasing CS CALL Grant as part of Call Release from CC
Line 2478: CS procedure is not CS CALL, not expected
Line 2491: There was no pended EST_REQ for TI=%d.
Line 2646: DSDS : CC, SS or SMS Session is Active Sig End not Sent 
Line 2912: Other CM Layer Data not allowed during this State
Line 2944: During RAT Change no CM REQ can be proccessed, message saving
Line 2966: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 2985: Ongoing proc on the other Stack: %s, Reject the EST_REQ
Line 3022: CmServReqMsg is not available due to running T3246 or Call Type (%s)
Line 3063: QRB_G2L is aborted by MO call so IsCsfb set TRUE for QRB retrial.
Line 3099: EMERGENCY CALL REQ, Making SRNC State to CS CALL Direcltly
Line 3137: Discarding Saved Cell Ind Msg ..
Line 3189: Network Lock Status TRUE..
Line 3249: Remove CmReqPriority IE under a condition of TMO LAB Test
Line 3384: 
Line 3614: 
Line 3669: 
Line 3819: CallDropCauseForDBGSCR = %d, mm_GetCallDropType() = %d 
Line 3825: 
Line 3847: 
Line 3867: 
Line 3915: 
Line 4049: All saved Establishment Requests are cleared
Line 4053: CS CALL was pending before, Clearing the same
Line 4061: QUEUE Not cleared Completely.
Line 4106: CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d 
Line 4181: [ErrInd] CallDropCauseForDBGSCR = %d, CallDropTypeForDBGSCR = %d 
Line 4198: ERR_IND to CC is not required.
Line 4220: Invalid Call Type in mm_CheckCallType, %d
Line 4285: PD: %d
Line 4455: Got Lower Layer failure, but currently no retransmission happens
Line 4459: Cannot retrieve MM_DATA_REQ, because there is no saved one
Line 4497: CallType : %d 
Line 4874: Delete MM connection in No cell State !!
Line 5010: Reset mmConCountForCM (CC=%d, SS=%d, SMS=%d)
Line 5238: Number of MM Connections -> %d
Line 5251: Number of MM Connections For CC -> %d, For SMS -> %d, For SS -> %d 
Line 5263: Number of MM Connections TO Be Ee-Established-> %d
Line 5275: Call Was Attempted Flag -> %s
Line 5287: Emergency Call Was Attempted Flag -> %s
Line 5341: CM Service Req Type -> %s
Line 5353: Call Type -> %s
Line 5365: CM Service Rej Cause -> %s
Line 5377: Current Transaction Identifier -> %d
Line 5484: Establishment Cause -> %s
Line 5627: Establishment Cause -> %s
Line 5662: Priority -> %s
Line 5707: RR UE ID  -> %s
Line 5759: RRC UE ID Type -> %s
Line 5799: Id scope -> %s
Line 5811: NewLaiRaiVersusOld -> %s
Line 5823: 
Line 5872: URRC Data Request Msg Result -> %s
Line 5906: URRC Sync Ind Status -> %s
Line 5932: Skip for Checking Cell data
Line 5961: Rat is not GSM
Line 6452: Eutra FDD value is set to 1 becuase EutraDisableFlag is false..
Line 6482: Vamos Registry (%d) 
Line 6536: CSFB Call State -> %d, CSFB Call Type  -> %d
Line 6554: Emergency Call was ended before Est Req received and Reposting Cell Ind 
Line 6561: CSFB ID Type -> %d
Line 6580: Call Ended, releasing CS CALL Grant
Line 6588: CS procedure is not CS CALL, not expected
Line 6637: LTE Tin: %d
Line 6643: mm_CsfbCallState =  %d
Line 6672: Changing Encoding due to EutranDisabled is changed to %d
Line 6706: EncodedSizeinBits -> %d 
Line 6715: EncodedSizeinBits -> %d 
Line 6777: Paging Id -
Line 6806: Mapping Paging Id -
Line 6937: WARNING : Cannot store MM_DATA_REQ - already saved one before
Line 6952: WARNING : Cannot store MM_DATA_REQ - memeory not allocated
Line 6976: mm_SRVCC_HO_Cause %d 
Line 6985: SRVCC Handover : IMS CALL Continuation, %d 
Line 6989: CS Procedure is DSDS CS CALL Already
Line 7147: Even CallWasAttempted is TRUE, EST_REQ for a call is sent, so it need be discarded.
Line 7181: Triggering silent redial ...
Line 7199: CS CALL was pending before, Clearing the same
Line 7255: QRB is triggered about 3G normal voice call. 
Line 7355: Retrieving the pending CS Procedure
Line 7365: CS EST Not Attempted or Not Retrieved
Line 7424: Wrong Action =%d 
Line 7433: Set mm_CmServiceInProgress = %d 
Line 7439: mm_MmConManageDb[%d].mm_CmServiceInProgress = %d 
