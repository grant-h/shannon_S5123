Line 170: Entering cc_DecodeMmSyncIndMsg....
Line 183: MM Sync IND saved as CC state is CC_CALL_WAIT_MM_SRVCC_CNF or IMSCC_VCE_STOP_IND is not received
Line 220: MM Sync IND saved for MO call due to Ultra-Flash CSFB
Line 226: Current Rat Mode taken to be -> UMTS in cc_DecodeMmSyncIndMsg...
Line 271: Current Rat Mode taken to be -> GSM in cc_DecodeMmSyncIndMsg...
Line 284: Traffic Channel Assigned in cc_DecodeMmSyncIndMsg...
Line 317: Signalling Channel Assigned in cc_DecodeMmSyncIndMsg...
Line 331: Invalid RAT mode received. So MM_SYNC_IND is not processed
Line 333: RAT Mode is   %d
Line 338: CodecInfoPresent -> %s (Meaningless in GSM)
Line 342: NasSyncInd       -> 0x%02X
Line 344: RabId            -> 0x%02X
Line 353: RAT Handover
Line 359: VCG Already Informed (VCG EST REQ Sent)
Line 371: VCG Not Informed Yet (VCG EST REQ Not Sent)...Saving the Message For later
Line 375: Accept Sync Ind, Inform VCG
Line 389: Data Call, Do not inform VCG
Line 397: VCG Already Informed (VCG EST REQ Sent)
Line 401: Traffic channel assigned..Nothing needs to be done here
Line 405: Only Signalling channel assigned, Wait for traffic channel to Arrive
Line 410: VCG Not Informed Yet (VCG EST REQ Not Sent)...Saving the Message For later
Line 416: Traffic channel assigned..Saving the Message For later
Line 426: Only Signalling channel assigned, Wait for traffic channel to Arrive
Line 442:  Old NasSyncInd       -> 0x%02X
Line 443:  New NasSyncInd       -> 0x%02X
Line 534: CallType1            -> 0x%02X
Line 584: VCG Action Needed But CC State is Incorrect in cc_DecodeMmSyncIndMsg...
Line 598: CallType1            -> 0x%02X
Line 609: No Need to Inform VCG
Line 632: SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Line 639: SyncInd arrived when No Sessions Active Saving message in cc_DecodeMmSyncIndMsg...
Line 668: Entering cc_ProcessCiqCauseIe
Line 678: Memory Allocation Failed
Line 748: Entering cc_DecodeMmEstErrMsg
Line 755: TransactionId -> %d
Line 778: Save CallDrop: Type=%d, Cause=%d
Line 818: New Redial Code logic implementation 
Line 829: Redialing in MMCC_EST_ERR
Line 838: One Active call present, Auto redial will not be done 
Line 851: Redialing in MMCC_EST_ERR for CSVT
Line 883: over-writting Network cause on MM cause 
Line 917: State Error in cc_DecodeMmEstErrMsg
Line 925: CallSession %d is NOT Active,  in cc_DecodeMmEstErrMsg
Line 938: In cc_DecodeMmEstErrMsg - cc_DecodeMmEstErrMsg been set
Line 944: No Session Found to contain the given TI in cc_DecodeMmEstErrMsg, Message Ignored.
Line 973: Entering cc_DecodeMmErrIndMsg....
Line 984: TransactionId -> %d
Line 998: Save CallDrop: Type=%d, Cause=%d
Line 1020: Discarding Saved MmSyncIndMsg
Line 1041: [OSS]: MPTY active in cc_DecodeMmErrIndMsg
Line 1076: CC_RELEASE_REQUESTED : over-writting Network cause on MM cause
Line 1082: MM cause (%d), Saved NetworkCause (%d)
Line 1130: Redialing in MMCC_ERR_IND
Line 1175: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 1185: over-writting Network cause on MM cause 
Line 1210: CallSession %d is NOT Active,  in cc_DecodeMmErrIndMsg
Line 1220: Requesting MM to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Line 1234: Requesting MM Not to Re-Establish the MM Connection in cc_DecodeMmErrIndMsg
Line 1241: Neither Active Nor Establishing Calls are found in cc_DecodeMmErrIndMsg
Line 1248: Save CallDrop: Type=%d, Cause=%d
Line 1279: Displaying Message Contents: %s
Line 1283: CallType -> %d
Line 1284: Priority -> %d
Line 1292: Unable to Allocate Memory to Send %s Message in cc_SendMmEstReqMsg
Line 1317: Displaying Message Contents: %s
Line 1325: Unable to Allocate Memory to Send %s Message in cc_SendMmPromptCnfMsg
Line 1350: Displaying Message Contents: %s
Line 1358: Unable to Allocate Memory to Send %s Message in cc_SendMmPromptRejMsg
Line 1385: Displaying Message Contents: %s
Line 1395: Unable to Allocate Memory to Send %s Message in cc_SendCcEstIndMsg
Line 1415: Displaying Message Contents: %s
Line 1425: Unable to Allocate Memory to Send %s Message in cc_SendCcErrIndMsg
Line 1456: Displaying Message Contents: %s
Line 1460: CallTyp -> %d
Line 1468: Unable to Allocate Memory to Send %s Message in cc_SendMmEstOutReqMsg
Line 1499: Displaying Message Contents: %s
Line 1505: RabId            -> 0x%02X
Line 1506: CodecInfoPresent -> %s
Line 1507: NasSyncInd       -> 0x%02X
Line 1514: Unable to Allocate Memory to Send %s Message in cc_SendCcSyncIndMsg
Line 1540: Displaying Message Contents: %s
Line 1541: Silent CC redial Flag    -> 0x%02X
Line 1549: Unable to Allocate Memory to Send %s Message in cc_SendMmNoRestReqMsg
Line 1576: Displaying Message Contents: %s
Line 1578: NumOfConnectionsToReestablish    -> 0x%02X
Line 1586: Unable to Allocate Memory to Send %s Message in cc_SendMmRestReqMsg
Line 1615: Enteirng cc_DecodeMmRestCnfMsg...
Line 1666: Msg ignored in cc_DecodeMmRestCnfMsg
Line 1675: CallSession %d is NOT Active,  in cc_DecodeMmRestCnfMsg
Line 1696: Entering cc_DecodeMmRestErrMsg..
Line 1746: Msg ignored in cc_DecodeMmRestErrMsg
Line 1754: CallSession %d is NOT Active,  in cc_DecodeMmRestErrMsg
Line 1781: Entering cc_DecodeMmRelIndMsg...
Line 1803: Save CallDrop: Type=%d, Cause=%d
Line 1814: Discarding Saved MmSyncIndMsg
Line 1833: [OSS]: MPTY active in cc_DecodeMmRelIndMsg
Line 1871: Redialing in MMCC_REL_IND
Line 1892: No Actions Taken, CC State is CC NULL, Call Session Number %d
Line 1899: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 1909: over-writting Network cause on MM cause 
Line 1950: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 1970: CallSession %d is NOT Active,  in cc_DecodeMmRelIndMsg
Line 2004: Displaying Message Contents: %s
Line 2008: CallTyp    -> 0x%02X
Line 2016: Unable to Allocate Memory to Send %s Message in cc_SendMmEstInReqMsg
Line 2062: Displaying Message Contents: %s
Line 2066: CallTyp    -> 0x%02X
Line 2073: Unable to Allocate Memory to Send %s Message in cc_SendMmReleaseReqMsg
Line 2089: Entering cc_DecodeMmPromptIndMsg...
Line 2142: Entering cc_DecodeMmRatHandoverIndMsg.....
Line 2148: All Sessions with RabId (0x%02X) To be Retained 
Line 2174: Removing Session(%d) as its RabId (0x%02X) does not Match Requested RabId (0x%02X) to Retain 
Line 2207: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 2220: CallSession  maybe invalid OR This CallSession should not be removed in cc_DecodeMmRatHandoverIndMsg
Line 2250: Setting the RabId of All Voice Call Sessions to 1 in GSM
Line 2261: Informing VCG of the New RAT & RabId
Line 2275: Setting the RabId of All Data Call Sessions to 1 in GSM
Line 2277: No Need to send Alter Codec since VCG has not been informed yet...
Line 2288: No Session Found with the given Seram Id in cc_DecodeMmRatHandoverIndMsg
Line 2293: Rat Mode change Request not successfull in cc_DecodeMmRatHandoverIndMsg
Line 2323: <<<< ALERTING >>>>
Line 2332: <<<< SETUP >>>>
Line 2341: <<<< CC_EST_CONFIRMED >>>>
Line 2356: <<<< CONNECT >>>>
Line 2369: <<<< CALL_CONFIRMED >>>>
Line 2427: <<<< START_CC >>>>
Line 2436: <<<< CONNECT_ACKNOWLEDGE >>>>
Line 2445: <<<< MODIFY_REJECT >>>>
Line 2458: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2472: <<<< MODIFY >>>>
Line 2482: <<<< HOLD >>>>
Line 2491: <<<< RETRIEVE >>>>
Line 2500: <<<< MODIFY_COMPLETE >>>>
Line 2509: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2533: <<<< DISCONNECT >>>>
Line 2546: <<<< RELEASE_COMPLETE >>>>
Line 2559: <<<< RELEASE >>>>
Line 2574: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2591: <<<< STOP_DTMF >>>>
Line 2600: <<<< START_DTMF >>>>
Line 2611: <<<< FACILITY >>>>
Line 2617: <<<< STATUS >>>>
Line 2630: <<<< NOTIFY >>>>
Line 2641: Invalid MsgType (0x%02X) in cc_DecodeMmRetransmitIndMsg 
Line 2666: MM Requesting CC to re-transmit the given messages in cc_DecodeMmRetransmitIndMsg 
Line 2674: %d Messages to be Re-transmitted by CC
Line 2682: Message (%d) -->  %d bytes
Line 2722: No Session Found to contain the given TI in cc_DecodeMmRetransmitIndMsg, Message Ignored.
Line 2760: Entering cc_DecodeFacilityIndMsg.....
Line 2768: TransactionId -> %d
Line 2794: Saving Facility Ind message ...!!!!
Line 2825: [OSS]: MPTY active in cc_DecodeFacilityIndMsg
Line 2854: [OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
Line 2863: [OSS]: ECT were active in cc_DecodeFacilityIndMsg
Line 2893: [OSS]: Invalid SS TAG, in cc_DecodeFacilityIndMsg
Line 2901: [OSS]: MultiParty &ECT were not active in cc_DecodeFacilityIndMsg
Line 2919: FacilityIe Missing in cc_DecodeFacilityIndMsg
Line 2927: CallSession %d is NOT Active,  in cc_DecodeFacilityIndMsg
Line 2932: No Session Found to contain the given TI in cc_DecodeFacilityIndMsg, Message Ignored.
Line 2952: [OSS]: Entering cc_SendCcNotifySsIndMsg...
Line 3070: SsCode = %d
Line 3071: SsNotification = %d
Line 3077: Unable to Allocate Memory to Send %s Message in cc_SendCcNotifySsIndMsg
Line 3096: Entering cc_DecodeNotifyIndMsg.....
Line 3101: TransactionId -> %d
Line 3127: Message ignored in cc_DecodeNotifyIndMsg
Line 3135: CallSession %d is NOT Active,  in cc_DecodeNotifyIndMsg
Line 3140: Mandatory Element Missing in cc_DecodeNotifyIndMsg
Line 3146: No Session Found to contain the given TI in cc_DecodeNotifyIndMsg, Message Ignored.
Line 3174: Displaying Message Contents: %s
Line 3178: NotificationIndicator    -> 0x%02X
Line 3186: Unable to Allocate Memory to Send %s Message in cc_SendCcNotifyIndMsg
Line 3229: [OSS]: cc_SendFacilityReqMsg: OSS encoded Success
Line 3230: [OSS]: Oss Encoded Msg Dump ->
Line 3265: Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Line 3271: Unable to Allocate Memory for FacilityEctReqPtr in cc_SendEctFacilityReqMsg
Line 3276: [OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Line 3281: [OSS]: cc_SendFacilityReqMsg: OSS encoded Failed
Line 3296: Entering cc_DecodeUserInformationIndMsg...
Line 3335: Entering cc_DecodeMmRatModeChangeIndMsg...
Line 3348: <cc_redial> CSFB state = %d
Line 3349: <cc_redial> CC get the LTE RAT_MODE_CHANGE during CSFB!!, ignored..
Line 3353: Moved from HEDGE to LTE..status(%d)
Line 3393: No need to send CC_REJECT_IND(Above layers doesn't have MT call ctxt)
Line 3409: LTE / RAT Change Ended
Line 3420: RAT Change in Progress
Line 3435: Discarding Saved MmSyncIndMsg
Line 3454: Mis-match between states !!!!
Line 3462: RAT Change Ended
Line 3476: Discarding Saved MmSyncIndMsg
Line 3491: CallType1            -> 0x%02X
Line 3512: RAT Change Failed, Back in UMTS...
Line 3513: Setting the RabId of All Voice Call Sessions to RabId(%d) in UMTS
Line 3530: Handover Failed and resumed back to 3G, Old Nas SyncInd = %d, New Sync Ind = %d
Line 3541: Setting the RabId of All Data Call Sessions to RabId(%d) & StreamId (%d) in UMTS
Line 3562: No Voice calls OR Data Calls Active...
Line 3579: RAT Change Failed, Back in GSM...
Line 3580: No need to restore VCG since VCG data was not altered...
Line 3588: RAT Mode -> CC_UMTS_RAT_MODE
Line 3592: RAT Mode -> CC_GSM_RAT_MODE
Line 3597: Mis-match between states !!!!
Line 3603: Invalid Status in cc_DecodeMmRatModeChangeIndMsg!!!!
Line 3623: Entering cc_SendMmSrvccHoCallInfoMsg..
Line 3625: CallSessionNumber : %d
Line 3654: Displaying Message Contents: %s
Line 3656: CallTyp  -> %d
Line 3662: Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsg
Line 3688: Entering cc_DecodeMmSrvccHoCnfMsg cc_SrvccCallCntxtSetupFinished = %d,Srvcc_Ho_Status = %d
Line 3701: MMCC_SRVCC_HO_CC_INFO is sent for MO call due to Ultra-Flash CSFB
Line 3706: MMCC_SRVCC_HO_CNF is received in wrong state for MO call due to Ultra-Flash CSFB
Line 3712: MMCC_SRVCC_HO_CC_INFO is sent for MT call due to Ultra-Flash CSFB
Line 3719: MMCC_SRVCC_HO_CNF is received without MM_SYNC_IND
Line 3728: Releasing All the calls...!!!
Line 3736: NumberOfVoiceCalls = > %d
Line 3747: R-SRVCC HO Failed Activate the VCG again...!!!
Line 3752: Vcg Data ......
Line 3753: Rat Mode =%d
Line 3754: VcgRefNumber = %d
Line 3755: RabId = %d
Line 3906: Displaying Message Contents: %s
Line 3907: Srvcc_Ho_Status -> %d
Line 3913: Unable to Allocate Memory to Send %s Message in cc_DecodeMmSrvccHoCnfMsg
Line 4026: Displaying Message Contents: %s
Line 4036: Unable to Allocate Memory to Send %s Message in cc_SendCcImsInfoIndMsg
Line 4048: Entering cc_DecodeMmSrvccHoIndMsg : HandOverType : %d
Line 4062: Releasing VCG for Default Session
Line 4074: Wrong HO Type..!!!
Line 4338: Current RabId                 -> %d
Line 4555: NORMAL Initialisation <MM Management>
Line 4562: GSM to UMTS Initialisation of <MM Management>
Line 4569: UMTS to GSM Initialisation of <MM Management>
Line 4578: Unknown Initialisation Type (%d) in cc_InitialiseMmConManagement
Line 4618: RAT Mode is  %s
Line 4658: Sync Status -> %s
Line 4707: cc_SendConfigurateIratToLteReq
Line 4717: Displaying Message Contents: %s
Line 4725: Unable to Allocate Memory to Send %s Message in cc_SendConfigurateIratToLteReq
Line 4791: Entering cc_SendMmSrvccHoCallInfoMsgforDummy..
Line 4806: Displaying Message Contents: %s
Line 4808: CallTyp  -> %d
Line 4814: Unable to Allocate Memory to Send %s Message in cc_SendMmSrvccHoCallInfoMsgforDummy
