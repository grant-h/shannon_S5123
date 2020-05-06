Line 99: %s in cc_DecodeVcgCallEstablishCnfMsg
Line 101: CallSessionNumber = %d in cc_DecodeVcgCallEstablishCnfMsg
Line 105: TransactionId -> %d
Line 181: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 190: Status : VCG_CALL_REQ_INVALID - cc_DecodeVcgCallEstablishCnfMsg...
Line 191: Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Line 212: CC_VCG_CALL_EST_REQ not received - cc_DecodeVcgCallEstablishCnfMsg...
Line 213: Releasing VCG - cc_DecodeVcgCallEstablishCnfMsg...
Line 255: Entering cc_DecodeVcgAlterCodecCnfMsg
Line 257: VcgRefNumber = %d in cc_DecodeVcgAlterCodecCnfMsg
Line 307: No need to send CC_RELEASE_IND(Above layers doesn't have MT call ctxt)
Line 330: VCG_ALTERCODEC_REQ not Send - cc_DecodeVcgAlterCodecCnfMsg...
Line 349: Entering cc_SendVcgCallEstablishReqMsg
Line 376: Displaying Vcg Call Estb Req Message Contents: %s
Line 378: VcgRefNumber            -> %d
Line 379: NasSyncInd              -> 0x%02X
Line 380: RabId                   -> 0x%02X
Line 381: VcgRatMode              -> 0x%02X
Line 382: CC_Stack No             -> 0x%02X
Line 389: Unable to Allocate Memory to Send %s Message in cc_SendVcgCallEstablishReqMsg
Line 409: Entering cc_SendVcgCallActivateIndMsg
Line 425: Displaying VCG Call Activate Ind Message Contents: %s
Line 427: VcgRefNumber -> %d
Line 428: CC Stack No. -> %d
Line 448: Entering cc_SendVcgCallReleaseReqMsg - Releasing VCG
Line 459: Clearing All Global VCG Data 
Line 474: CC Stack No. %d 
Line 494: Entering cc_SendVcgAlterCodecReqMsg
Line 520: Displaying VCG Alter Codec Req Message Contents: %s
Line 522: VcgRefNumber            -> %d
Line 523: NasSyncInd              -> 0x%02X
Line 524: RabId                   -> 0x%02X
Line 525: VcgRatMode              -> 0x%02X
Line 526: CC Stack No             -> 0x%02X
Line 533: Unable to Allocate Memory to Send %s Message in cc_SendVcgAlterCodecReqMsg
Line 550: Entering cc_DetermineVcgAction
Line 552: VcgRefNumber -> %d
Line 554: RabId -> %d
Line 563: RatMode -> CC_UMTS_RAT_MODE
Line 579: SyncInd Status -> ASSIGNED
Line 596: SyncInd Status -> ALTERED
Line 606: VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
Line 630: 2nd Sync message is received,Update the variables
Line 638: RatMode -> CC_GSM_RAT_MODE
Line 654: SyncInd Status -> ASSIGNED
Line 664: SyncInd Status -> ALTERED
Line 674: VCG_ALTERCODEC_REQ is not sent before VCG_CALLACTIVATE_IND
Line 699: RatMode -> Unexpected RAT mode
Line 724: cc_DetermineSrvccVcgActivateAction State = %d,RsrvccHoFail =%d
Line 875: VCG Status Response -> %s
Line 1101: cc_SrvccVcgReleaseStatus          -> %d
Line 1113: cc_SrvccVcgReleaseStatus          -> %d
Line 1131: VcgCallEstReqFlag          -> %s
Line 1147: VcgAlterCodecReqFlag       -> %s
Line 1163: VcgCallEstCnfFlag          -> %s
Line 1179: Vcg Ref Number             -> %d
Line 1191: Vcg RabId                  -> %d
Line 1207: Vcg Call Activate Ind Flag -> %s
Line 1223: NORMAL Initialisation of <VCG Management> stack  %d
Line 1236: GSM to UMTS Initialisation of <VCG Management>
Line 1242: UMTS to GSM Initialisation of <VCG Management>
Line 1250: Unknown Initialisation Type (%d) in cc_InitialiseVcgManagement
Line 1265: Deleting VCG Flags in cc_ResetVcgData
Line 1277: Calling vcg_ApiCheckVcgStatus(%d)
Line 1295: cc_DecodeImsccVcgStopIndMsg : Vcg Stop Status from IMSCC = %d
Line 1303: cc_DecodeImsccVcgStopIndMsg : SRVCC HO CNF or MM SYNC IND is not received
