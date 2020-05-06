Line 145: Initialisation of <RoutingAreaUpdate>, InitType=%d
Line 242: If T3323  is expired and UE comes back to NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 247: If T3323  is expired and UE comes back to NMO1, RAU type should be set as normal RAU updating (0x00)
Line 259: After recovery from OOS, RAU type should be set as combined LA/RA updating with IMSI attach(0x02), previousCell no service flag = %d 
Line 271: If ISR is activated  in NMO1, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 279: Required 'update type' -> Periodic updating
Line 301: Network operation mode change from %s to MM_NETWORK_MODE_1... 
Line 304: Required 'update type' -> combined RA/LA updating with IMSI attach
Line 312: Required 'update type' -> combined RA/LA updating
Line 327: MM in MM_LOC_UPD_INITIATED due to previous combined RAU procedure...
Line 342: Required 'update type' -> %s
Line 351: Required 'update type' -> RA updating (CS connection already exists)
Line 375:  Required 'update type' -> RA updating (%s) 
Line 394: Required 'update type' -> RA updating (MM_MOBILE_CLASS_C_PS)
Line 408: If T3423 starts after T3412expiry, RAU type should be set as combined LA/RA updating with IMSI attach(0x02)
Line 413: If T3423 starts after T3412expiry, RAU type should be set as normal RAU updating (0x00)
Line 463: Periodic RAU procedure to update both LA and RA (i.e. CS and PS domain)
Line 470: Periodic RAU procedure to update RA only (i.e. PS domain)
Line 529: Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 534: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 545: GMM is in Suspended state, So RAU should not be triggered. Setting RAU Needed flag
Line 567: RAU Req cannot be performed during T3346 running..
Line 578: RAU Req will be delayed during Manual PLMN searching..(for FT TEST)
Line 593: RAU is already pended, dont send DRX again and Wait for MPLMN completion
Line 602: RAU REQ is not triggered since MM has sent a RESEL_HOLD to GRR
Line 628:  Inside mm_PerformRoutingAreaUpdate() function, PrevCSAD = %d, CurrentCSAD = %d
Line 640: RAU update type -> %s cannot be performed since MM_ALLOW_PS_REGISTRATION is set to FALSE
Line 644: RAU Type Before Domain Restrictions analysis %d
Line 658: DSAC for CS and PS are not barred
Line 661: Previous update is not combined
Line 666: Previous update is combined
Line 671: RAU Type After Domain Restrictions analysis %d
Line 761: RAU procedure with combined type last_update_is_not_combined is FALSE
Line 768: RAU procedure with combined type last_update_is_not_combined is TRUE
Line 780: RAU procedure with Update Type of %s not initiated due to %s 
Line 894: %s shall be used for RAU procedure
Line 1007: RAU_REQUEST message contents:
Line 1013: Update type -> %s
Line 1039: (PREVENTION) When setting CSMT flag, we will set FOR in RAU (1411591)
Line 1058: GPRS Key Set Identifier (KSI) -> %d
Line 1068: Invalidating GMM CKSN for CRC Failure in GSM Only Mode
Line 1075: GPRS Cipher algo(%d), GmmCksm(%d) .... ALGO NOT PRESENT
Line 1081: GPRS ciphering key sequence number -> %d
Line 1094: Old routing area identification @ Eutran ->
Line 1102: Old routing area identification @ SIM ->
Line 1112: MS Radio Access Capability ->
Line 1127: Old P-TMSI signature....
Line 1139: Old P-TMSI signature....
Line 1159: Requested READY timer value (GPRS Format) -> %02X
Line 1177: DRX parameter ->
Line 1201: TMSI status -> MS performing a combined RAU and no valid TMSI is available
Line 1225: P-TMSI @ EUtran ->
Line 1239: P-TMSI @ SIM->
Line 1252: MS Network Capability ->
Line 1325: Supported Codec Length is 0
Line 1346: UE Network Capability ->
Line 1363: ADD P-TMSI->
Line 1376: ADD RAU->
Line 1400: voice domain Pref->
Line 1419: PtmsiType = %d
Line 1424: HcommonNasRelVersion = %d
Line 1445: Extended T3312 is supported
Line 1456: Encode Old LAI IE
Line 1500: 
Line 1550: 
Line 1597: 
Line 1598: Cipher State -> %s
Line 1599: PduId -> %04X
Line 1664: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1667: < 'RA updating' or 'Periodic updating' (for RA updating only) requested >
Line 1670: < but update result of 'RA updated' and GMM cause IE is present >
Line 1673: Processing RAU_ACCEPT to get PS service eventhough it's NW issue
Line 1686: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1689: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 1692: < but update result of 'RA updated' and GMM cause IE not present >
Line 1697: Update result is mismatched but bypass it to cover TE script error
Line 1714: RAU_ACCEPT discarded due to semantically incorrect contents:
Line 1717: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 1720: < but update result of 'RA updated' and abnormal GMM cause IE is present >
Line 1756: RAU_ACCEPT discarded due to integrity conditions failure: 4.1.1.1.1 @ 24.008
Line 1788: Force to standby -> Force to standby indicated
Line 1795: Force to standby -> Force to standby not indicated
Line 1821: Periodic RA update timer -> %02X
Line 1834: Periodic RA update timer will be last received value-> %02X
Line 1856: Routing area identification ->
Line 1869: ERROR: RAU_ACCEPT RAI IE does not match RAI of current cell ->
Line 1889: P-TMSI signature ->
Line 1895: P-TMSI signature -> NOT included
Line 1912: Allocated P-TMSI ->
Line 1919: Allocated P-TMSI -> NOT included
Line 1936: MS identity ->
Line 1946: MS identity -> NOT included
Line 1963: Network has Sent NPD-U List. Attempting to Get SNDCP's Version of this List....
Line 1992: List of Receive N-PDU Numbers -> NOT included
Line 2023: Negotiated READY timer value -> %02X
Line 2029: Negotiated READY timer value -> NOT included
Line 2052: GMM cause -> %s
Line 2058: GMM cause -> NOT included
Line 2075: mm_RauAccCheckAndSetMSInfoIe Value(utran-%d)(Eutran-%d)
Line 2115: T3302 value -> %02X
Line 2139: T3302 value -> NOT included; Setting default value 
Line 2166: T3323 value -> %02X
Line 2172: T3323 value -> NOT included
Line 2198: Cell Notification IE (GSM only) included by SGSN to indicate the ability to support Cell Notification
Line 2205: Cell Notification IE (GSM only) NOT included by SGSN
Line 2227: Assigned GMM_T3319...
Line 2250: Equivalent PLMNs ->
Line 2257: Equivalent PLMNs -> NOT included
Line 2279: PDP context status ->
Line 2286: PDP context status -> NOT included
Line 2316: Network Sent Emergency List !!!
Line 2325: Emergency list length is 0 or more than 16, %d
Line 2331: Emergency List ptr is NULL!!!
Line 2339: isMccChanged : %d, isEmerNumberBlank : %d, mm_GetLastSentMcc : 0x%x
Line 2497: Update result -> %s
Line 2515: NewMCC : 0x%x, OldMCC : 0x%x
Line 2611: NetworkFeatureSupport IE value received is: %d 
Line 2616: NetworkFeatureSupport IE not  received
Line 2628: T3312 Extended value received is: %d seconds
Line 2699: Set TbfRelAction to MM_COORD_TBF_REL_ACTION
Line 2704: Perform TBF release action in case of RAU complete is not sent
Line 2778: SendRauCompleteMsg = %s   |||   SendNPduNumbersIe = %s
Line 2812: NwExtUtbf= %d
Line 2848: NwExtUtbf= %d
Line 2973: Re-initiation of the Aborted GRPS Detach Procedure....
Line 2998: mm_ExtractMCC =%d
Line 3042: FOP is On so we Can Send SM Data Directly
Line 3100: SM informed of regained radio coverage....
Line 3116: CS call had been attempted, retry now...
Line 3182: skip to send Reg_ind_status at this point, and handle it after LU proc
Line 3216: mm_SendRauCompleteMsg:EutranInterRAtInfo(%d) UTRANInterRatInfo(%d)
Line 3235: List of Receive N-PDU Numbers ->
Line 3236: Length -> %02X
Line 3237: Value  ->
Line 3245: EutranInterRAtInfo set in RAU complete Msg...
Line 3263: UtranIratInfo set in RAU complete Msg...
Line 3299: LLGMM_UNITDATA_REQ Cipher = %s
Line 3301: PduId -> %04X
Line 3323: PduId -> %04X
Line 3355: Processing RAU Accept Cause
Line 3357: Cause = %s
Line 3460: RAU_REJECT discarded due to semantically incorrect contents:
Line 3463: < 'RA updating' or 'Periodic updating' requested >
Line 3466: < but network responded with RAU_REJECT containing an abnormal GMM cause value >
Line 3477: RAU_REJECT discarded due to semantically incorrect contents:
Line 3480: < 'combined RA/LA updating' or 'combined RA/LA updating with IMSI attach' requested >
Line 3483: < but network responded with RAU_REJECT containing an abnormal GMM cause value >
Line 3519: Power off detach is pending Hence discarding RAU retrails
Line 3531: Cause #25 received with out integrity protection, descard reject message
Line 3571: GMM cause -> %s
Line 3581: Force to standby -> Force to standby indicated
Line 3586: Force to standby -> Force to standby not indicated
Line 3671: Regi status ind will be sent later
Line 3679: mm_GetLocUpdRejCause =%d
Line 3794: Perform TbfRelAction, MM_COORD_TBF_REL_ACTION
Line 4144: Invalid Cause : MM_NOT_AUTHORISED_FOR_CSG, CSG NOT SUPPORTED
Line 4183: RegistrationNeeded =%d
Line 4330: Serving cell RAI : Stored RAI
Line 4335: GPRS update status -> %s
Line 4398: Rau Request Type is Combined but Rau Upd Result is RA Update only. -> Keep GmmUpdateStatus and GPRS_ATTACH_FLG.
Line 4576: Set mm_RauRejCause: %d
Line 4589: mm_ResetRauRejCause: %d
Line 4667: Invalid RauType (0x%x) in mm_SetRauType().
Line 4738: RAU attempt count -> %d
Line 4750: RAU update type -> %s
Line 4780: pkthndIsUlTrf= %d
Line 4781: Prev: Uldata	NSAPI 5= %d, NSAPI 6=%d
Line 4782: Current: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 4812: FOR -> Follow-on request pending
Line 4816: We will not set FOR!!!
Line 4911: Wrong Action =%d 
