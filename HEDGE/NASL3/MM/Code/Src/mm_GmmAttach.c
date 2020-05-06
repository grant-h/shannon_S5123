Line 156: Initialisation of <Authentication>, InitType=%s 
Line 168: EncodedSizeinBits -> %d 
Line 195: Skip to send REG_STATUS_IND during Mode Change is progress.
Line 201:  Discard NS_MM_ATT_REQ  
Line 214:  Cell Data Access Barred  
Line 255:  Saving NS_MM_ATT_REQ for later ... 
Line 284: NMO=%d , GAPI Attach Req Type =%d
Line 331:  Request for GPRS Attach Only, mm_ProcessGmmGprsAttachReq 
Line 345:  GMM Attached ! 
Line 351:  GMM NOT Attached ! 
Line 439:  GMM Attached ! 
Line 443:  GMM NOT Attached ! 
Line 565:  GMM Attached ! 
Line 570:  GMM NOT Attached ! 
Line 594: Attch Action : GMM_COMBINED_ATT_ACTION...Abnormal Paging
Line 777: Attch Action : GMM_PS_ATT_ACTION...Abnormal Paging
Line 1019: WARNING : DETACH procedure is on progress, so not sending REGI_STATUS
Line 1027: NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Line 1116: NMO II, Reg status ind should be pended under specific conditions(NMO II, U1 Updated, same LAI)
Line 1172: Skip to send REG_STATUS_IND in CS reject and PS accept case or Mode Change is progress.
Line 1198: Postponing Lau..
Line 1272: Attach will not be done, since we are in the process of Power Off
Line 1281: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 1286: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 1298: GMM is in Suspended state or CS signal establishment is ongoing, So ATTACH should not be triggered. Setting ATTACH Needed flag
Line 1315: Attach cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Line 1323: Attach cannot be performed during T3346 running..
Line 1332: Attach Req will be delayed during Manual PLMN searching..
Line 1348: Attach Req is already pended, Waiting for completion of MPLMN
Line 1364: CurrentTlliType = %s
Line 1406: detach with not re-attach type, So send clear queue to LLC 
Line 1442: Fast display in-service under specific condtion(NMO I, U1 updated, same LAI)
Line 1513: MS network capability....length = %d, AttachType = %s
Line 1548: KSI = %d
Line 1561: GCKSN = %d
Line 1573: DRX parameter....
Line 1595: EUTRAN P-TMSI ->
Line 1606: SIM IMSI length is shorter than normal size, Padded IMSI will be used....
Line 1617: IMSI....
Line 1625: P-TMSI....   0x%x, 0x%x, 0x%x, 0x%x, 0x%x 
Line 1633: P-TMSI....
Line 1646: Old routing area identification @ EUtran  ->
Line 1655: Old RAI @ SIM
Line 1666: MS radio access capability....length = %d
Line 1687: Old P-TMSI signature....
Line 1696: Old P-TMSI signature....
Line 1707: Old P-TMSI signature....
Line 1719: Old P-TMSI signature....
Line 1747: TMSI status = no valid TMSI available
Line 1815: Supported Codec Length is 0
Line 1834: UE Network Capability ->
Line 1854: Additional P-TMSI->
Line 1865: Additional RAU->
Line 1876: Voice_Domain_Pref_ENABLED  = %d,  CsServiceSupport =%d, VoiceDomainPref =%d
Line 1891: voice domain Pref-> %x
Line 1911: PtmsiType = %d
Line 1916: HcommonNasRelVersion = %d
Line 1935: Extended T3312 is supported
Line 1946: Encode Old LAI IE
Line 1976: 
Line 2008: MSG Contents: %s
Line 2050: 
Line 2051: Cipher State -> %s, PduId -> %04X
Line 2118: PtmsiType = %d
Line 2349: Force to Standby indicated = %s
Line 2356: Periodic RAU timer (GMM_T3312)...
Line 2404: ERROR: ATTACH_ACCEPT RAI IE does not match RAI of current cell....
Line 2492: Assigned GMM_T3319...
Line 2506: Assigned GMM_T3323...
Line 2556: Network Feature Support IE value : %d
Line 2561: NetworkFeatureSupport IE not  received
Line 2573: T3312 Extended value received is: %d seconds
Line 2679: skip to send Reg_ind_status at this point, and handle it after LU proc
Line 2738: FOP is On so we Can Send SM Data Directly
Line 2795: FOP is off so we wait for RR release
Line 2812: Network Sent Emergency List !!!
Line 2821: Emergency list length is 0 or more than 16, %d
Line 2827: Emergency List ptr is NULL!!!
Line 2834: NewMCC : 0x%x, OldMCC : 0x%x
Line 2835: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 2857: Attach Accept is not Ciphered
Line 2863: Attach Accept is Ciphered
Line 2872: mm_SendGmmAttachCompleteMsg
Line 2876: MM_GPRS_ATTACH_COMPLETE_TBF_REL_ACTION set
Line 2927: Ignore Attach Accept in already REGISTERED State
Line 2939: Detach REQ is sent over REG_INIT state, invoke local detach
Line 2954: State Mismatch occurred and Retry ATTACH procedure..
Line 2975: Perform TBF release action in case of Attach complete is not sent
Line 3002: NW gives Attach result as combined even thogh NMO 2
Line 3017: Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and GMM cause IE not present >
Line 3030: Discarding ATTACH_ACCEPT as contains semantically incorrect contents:< combined attach requested but GPRS only accepted and abnormal GMM cause IE present >
Line 3041: Processing ATTACH_ACCEPT to get PS service eventhough it's NW issue:< GPRS attach only requested and GPRS only accepted but GMM cause IE is present >
Line 3081: Cause #25 received with out integrity protection, descard reject message
Line 3110: Power off detach is pending Hence discarding RAU retrails
Line 3177: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 3237: Cause = %s
Line 3436: CSG Not supported, Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG
Line 3703: ERROR!! LAC or RAC is not matched between cell_ind and accept msg
Line 3756: 
Line 3809: 
Line 3810: Cipher State -> %s, PduId -> %04X
Line 3954: Resetting Attach attmept count (%d)
Line 4054:  Invalid AttachReqAction(%x) in mm_GetGmmAttachReqFromReqAction, Selecting GMM_NET_GPRS_ONLY_ATT instead !! 
Line 4133:  Attach Request Action -> %s 
Line 4316:  mm_GmmAttachDb[MmStackId].mm_MsRadioCapability_PRR[0] in mm_GetMsRadioAccessIeData= %d , mm_RadioAccessTechManagementDb[MmStackId].mm_MsRadioAccessCapIeBitLength_new in mm_GetMsRadioAccessIeData= %d
Line 4408:  Attach Type -> %s 
Line 4420: Attach Result FOP  -> %s           Attach Result Type -> %s
Line 4433:   Gapi Attach Request Type -> %s 
Line 4445: Gmm Retransmission Count = %d
Line 4458: Gmm Attach Attempt Count = %d
Line 4498: NO ATTACH ACTION:%s (line%d)
Line 4553: Wrong Action =%d 
Line 4574: MM_DSNC - Discarding NS_MM_ATT_REQ due to CS CALL on other stack
Line 4581: MM_DSNC - Saving NS_MM_ATT_REQ, Ongoing proc on other stack: %s
Line 4588: MM_DSNC - Check if abnormaly PS proc is stuck in other stack 
Line 4595: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 4605: Msg Saved For later because we have not yet received ACK for detach accept
Line 4621:  MM Svc State: %d, RAT Change- %d, Request Type - %d, Gmm State - %d
Line 4633:  RatChange: %d, MmcSuspensionOngoing: %d
Line 4641:  QRB in progress
Line 4668:  Discard NS_MM_ATT_REQ to prevent unexpected PS REG 
Line 4677:  Discard NS_MM_ATT_REQ to prevent unexpected combined RAU during T3311 running 
