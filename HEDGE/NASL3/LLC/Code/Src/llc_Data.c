Line 122: llc_CipherLog[][0].Sapi = %d
Line 148: State for Sapi %d set to %d
Line 175: State for Sapi %d set to %d
Line 180: llc_DeactivateLlc: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 182: Sapi:%d State:LLE_TLLI_UNASSIGN
Line 421: Error : Wrong Stack Id %d 
Line 431: Tmr Create Failed
Line 521: llc_ActivateAckLle,llc_RlcCurrPos.Sapi = %d; llc_RlcCurrPos.PduSeqNo = %d
Line 657: LlcSapiPtr->URlcQueue Count = %d
Line 686: LlcSapiPtr->UAckPendingQueue Count = %d
Line 766: llc_DeactivateUnackLle, Sapi %d
Line 811: LleAckPtr is NULL
Line 815: llc_DeactivateAckLle, Sapi %d
Line 824: LleAckPtr->RlcQueue Count = %d
Line 861: LleAckPtr->AckPendingQueue Count = %d
Line 866: Not freeing llc_RlcCurrPos.PduSeqNo = %d
Line 905: CurrPosUlIFramePtr is not NULL
Line 938: llc_RlcCurrPos is reset
Line 1005: free CipherStream 0x%X 
Line 1109: llc_GetUQueue : Queue or Queue->Start is NULL
Line 1114: llc_GetUQueue : Ptr NULL
Line 1118: llc_GetUQueue : Ptr 0x%08X
Line 1159: llc_GetUQueueByCmdType from Q 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x%08X  SeqNo %d, CommandType %02d
Line 1166: Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 1172: llc_GetUQueueByCmdType from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X  CommandType %02d
Line 1244: llc_AddSQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, SeqNo %d
Line 1251:   Start %08X, Last %08X : Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 1290: llc_GetSQueue from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1348: llc_GetUiQueue : Ptr 0x%08X
Line 1352: llc_GetUiQueue : Ptr NULL
Line 1378: llc_GetUiQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1388: llc_GetUiQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1410: llc_GetUiQueueWithCipherStatus %d 
Line 1423: 1. Nu %d found with CipherStatus %d 
Line 1435: 2. Nu %d found with CipherStatus %d 
Line 1442: 3. Nu %d has CipherStatus %d 
Line 1447: 1. Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1451: 2. Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1524:  llc_AddIQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, nS %d
Line 1531:   Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 1572: llc_GetIQueue from Q 0x%08X, returns NULL
Line 1577: llc_GetIQueue : Ptr NULL
Line 1581: llc_GetIQueue : Ptr 0x%08X
Line 1608: llc_GetIQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1618: llc_GetIQueueIfCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1660: [Loop]llc_GetSQueueBySeqNo from 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x&08X  SeqNo %d
Line 1667:  Start %08X, Last %08X : Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 1673: llc_GetSQueueBySeqNo from 0x%08X, returns NULL, Start 0x%08X, Last 0x&08X  SeqNo %d
Line 1714: [LOOP] llc_GetIQueueBySeqNo from Q 0x%08X, returns 0x%08X, Start 0x%08X, Last 0x%08X  nS %d
Line 1721: Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 1727: llc_GetIQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X  nS %d
Line 1760: llc_SearchIQueueBySeq LOOP
Line 1835: LOOP llc_AddDlQueueBySeqNo, Queue 0x%08X, Frame 0x%08X, Start 0x%08X, Last 0x%08x, SeqNo %d
Line 1873: llc_GetDlQueue from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 1894: Ptr->DeCipherStatus is PDU_CIPHER_PENDING
Line 1942: llc_GetDlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 1946: llc_GetDlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 1983: llc_GetDlQueueByCipherStream from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 1987: llc_GetDlQueueByCipherStream from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, SeqNo %02d
Line 2025: Marking duplicate frame %d
Line 2036: llc_GetUlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, nU %02d
Line 2040: llc_GetUlQueueBySeqNo from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X, nU %02d
Line 2097: llc_GetDlQueueIfDeCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 2107: llc_GetDlQueueIfDeCipherNotReq from Q 0x%08X, returns NULL, Start 0x%08X, Last 0x%08X
Line 2187: New TLLI Assigned From GMM:LLC-LLE_ADM
Line 2193: TLLI-Changed:TLLI Old unassigned
Line 2218: TLLI-changed:TLLI Old still valid
Line 2235: TLLI unassigned
Line 2320: llc_FormXidBlock Non-NULL XID parameters %08X
Line 2406: Sapi %d UI Frame->UL CipherQueue
Line 2420: An element is already present in the *start of the free queue
Line 2553: Invalid frameType %d Sapi %d
Line 2557: %d = llc_GetFreeIndexCount( %d, %d )
Line 2593: LLC New Logic hit
Line 2603: LLC Old Logic hit
Line 2620: Kc value  first part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 2622: Kc value second part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 2625: Kc value  Third part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 2627: Kc value Fourth part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 2679: Invalid TLLI rcvd 0x%02X 0x%02X 0x%02X 0x%02X
Line 2682: Invalid TLLI rcvd, TlliExpctd = 0x%02X 0x%02X 0x%02X 0x%02X
Line 2714: Invalid Sapi(%d)
Line 2877: llc_SetSBitsAndSendFrame(), LLC sending SFrame, SBits 0x%02X Sapi %d, Sequence %d
Line 2882: llc_SetSBitsAndSendFrame No Frame Free Q Full Sapi %d
Line 3104: Invalid Nr %d rcvd, Expected Nr %d
Line 3134: FrameValid=FALSE : LleAckPtr->vR %d, LlcSapiPtr->LleNegXidValues.kD %d, Ns %d
Line 3142: FrameValid=FALSE : LleAckPtr->vR %d, LlcSapiPtr->LleNegXidValues.kD %d, Ns %d
Line 3175: State for Sapi %d set to %d
Line 3189: State for Sapi %d set to %d
Line 3197: State for Sapi %d set to %d
Line 3201: State for Sapi %d set to %d
Line 3244: Invalid Version Field Length %d
Line 3249: Invalid Version %d
Line 3258: Invalid IOV_UI Field Length %d
Line 3267: Invalid IOV_I Field Length %d
Line 3275: IOV_I invalid in XID packet
Line 3289: Invalid T200 Field Length %d
Line 3295: T200 %d out of range
Line 3306: Invalid N200 Field Length %d
Line 3312: N200 %d out of range
Line 3323: Invalid N201U Field Length %d
Line 3329: N201U %d out of range
Line 3340: Invalid N201I Field Length %d
Line 3346: N201I %d out of range
Line 3357: Invalid mD Field Length %d
Line 3363: mD %d out of range
Line 3374: Invalid mU Field Length %d
Line 3380: mU %d out of range
Line 3391: Invalid kD Field Length %d
Line 3398: kD %d out of range
Line 3409: Invalid kU Field Length %d
Line 3416: kU %d out of range
Line 3431: SNDCP Parameters present for non SNDCP Sapi
Line 3440: Invalid RESET Field Length %d
Line 3450: Reset received not in XID packet
Line 3461: Invalid XID Parameter Type %d received
Line 3501: Duplicate XidType Rcvd: %d
Line 3523: U FRA HDR LEN(%d) > LEN OF U FRA PDU (%d)!!
Line 3535: Rcvd XID:Sapi %d:len %d:Type %d
Line 3577: U FRA HDR LEN(%d) > LEN OF U FRA PDU (%d)!!
Line 3601: Ver:%d
Line 3609: IOV_UI Old:0x%08X  New:0x%08X
Line 3616: Storing old IOV-UI 0x%08X Current IOV-UI  0x%08X 
Line 3623: IOV_I Old:0x%08X New:0x%08X
Line 3631: T200 Old:%d New:%d
Line 3639: N200 Old:%d New:%d
Line 3648: N201U Old:%d New:%d
Line 3662: N201I Old:%d New:%d
Line 3670: mD Old:%d New:%d
Line 3679: mU Old:%d New:%d
Line 3688: kD Old:%d New:%d
Line 3696: kU Old:%d New:%d
Line 3702: SNDCP Params present,Len:%d
Line 3711: SNDCP Params Malloc fail
Line 3713: SNDCP Params Len set to zero forced
Line 3733: LLC Reset Rcvd
Line 3749: LLC Reset:RLC has SAPI1 PDU:llc_Trig_Ind_Insteadof_Status_Ind is set
Line 3765: Invalid XID Rcvd:Type %d:Length %d
Line 3787: llc_UpdateUFrameBufVar LleUFrameUpinfoPtr is null
Line 3803: NULL FRAME Rcvd:iscellUpdate=FALSE:SeqNoRcvd %d:Sapi %d
Line 3819: SeqNo not matched:SeqNoRcvd %d:SeqNoStrd %d:Sapi %d
Line 3940: llc_SendUFrameToRlc
Line 3965: State for Sapi %d set to %d
Line 3971: UFrame ReTx'ed, Sapi %d, N200 %d, N200Max %d
Line 3977: U Frame(Sapi %d) Invalid ->FreeQ
Line 4037: S Frame(Sapi %d)No ABit->FreeQ
Line 4044: Sapi %d:LLC Suspended
Line 4070: Sapi(%d) not LLC_SAPI_GMM ||LLC: suspend state(%d)
Line 4076: llc_SendUiFrameToRlc: RelClass(%d)
Line 4142: llc_SendIFrameToRlc ( Sapi %d ) can't send. Suspended
Line 4148: llc_SendIFrameToRlc ( Sapi %d ) can't send. LLE_PEER_RECEIVER_BUSY
Line 4222: llc_SendSingleIFrameToRlc( Sapi %d ) can't send  Llc Suspended
Line 4293: FALSE:get_rlc_CheckForFreePDU-Sapi %d
Line 4303: TRUE:get_rlc_CheckForFreePDU-Sapi %d
Line 4489: Malloc failed CipherStream:NULL nS(%d), N200(%d), SnpUlPduLen(%d)
Line 4560: Malloc failed CipherStream:NULL, nS(%d), N200(%d), SnpUlPduLen(%d)
Line 4772: L1SM_CipherResponse length %d Data: 
Line 4774: Sapi %d:Sequence %d:Direction %04X:Length %d:Context %08X:CipherStream %08X
Line 4778: CipherComplete: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 4809: Sapi:TLLI_UNASSIGNED
Line 4810: SeqNo. %d deleted from UL Cipher Queue
Line 4839: PDU size(%d)!=Cipher stream size (%d)
Line 4845: 		CipherStatus(%d) AckStatus(%d) CipherInput(%d)
Line 4849: UI:0x%08X:nU %d:Len %d:Data 0x%08X Ciphered
Line 4863: llc_PendingRAUComplete %d , IsRAUCom_NoExtULTBF %d
Line 4864: Sapi %d , prio %d xidlen %d
Line 4894: LleUlUiFramePtr is NULL
Line 4901: %2d UI UL Frames not on free Queue 0x%08X
Line 4905: LleUnack.UlCipherQueue:Frame %08X:Next %08X:CipherStatus %02d:nU %04d:PduID %02d:UiFrameLength %d
Line 4909: %2d UL UI Frames Missing
Line 4948:  Ciphered I frame received in !ABM, Add to I frame Free Queue:Mode %d 
Line 4976: I frame to be ciphered doesn't exist any more in the buffer/Queue
Line 4996: Using Old IovUI = %d
Line 5001: Using current IovUI = %d
Line 5022: PDU size(%d)!=Cipher stream size (%d) 
Line 5046: DlOCNext %d hold_decipher %d
Line 5048: DlOCCurr = %d  DlOCNext =%d
Line 5063: Deciphering Success with Current Iov UI = 0x%08X in LLMEntity.Iovui
Line 5071: Using Old Iov UI = %d  Pass count =%d
Line 5074: Assigning Old Iov UI = %d  in LLMEntity.Iovui
Line 5083: Assigning Current Iov UI = %d  in LLMEntity.Iovui
Line 5093: [DL CRC Fail] Send STATUS IND to GMM
Line 5104: DL_DATA_IND
Line 5106: L1SM_CipherResponse
Line 5109: [DL CRC Fail ] DLOC_roll(%d) DIOCCurr(%d)  DIOCNext(%d) gStat_llc_Param.Stat_llc_CRCFails (%d)
Line 5113: hold_decipher set to 1
Line 5130: hold_SeqNo =%d DLOC_attmept= %d DLOC_roll %d DlOCNext %d
Line 5134: PDU size(%d)!=Cipher stream size (%d) 
Line 5153: CRC fails : exceeded DLOC_MAX_RECOVER_ATTEMPTS  IOV_UI : used 0x%08X 
Line 5156: CRC fails : With old IOV_UI  : 0x%08X
Line 5167: CRC fails : TRY with old IOV_UI : 0x%08X
Line 5175: CRC fails : exceeded DLOC_MAX_RECOVER_ATTEMPTS  IOV_UI : used 0x%08X
Line 5178: CRC fails : With old IOV_UI  : 0x%08X
Line 5189: CRC fails : TRY with old IOV_UI : 0x%08X 
Line 5222: LleDlUiFramePtr:NULL
Line 5228: %2d UI DL Frames not on free Queue 0x%08X
Line 5231: LleUnack.DlCipherQueue: Frame %08X:Next %08X:DeCipherStatus %02d:SeqNo %04d:DlOCNext %02d:DlPduLength %d
Line 5235: I frame to be Deciphered not any more in Dl buffer
Line 5260: I frame to be Deciphered not any more in Dl buffer
Line 5281: Unexpected Cipher Stream Direction: 0x%04x
Line 5300: llc_DecodeLlcCipherRejectMsg: Sapi %d, Sequence %d, Direction 0x%x, Context %08X, CipherStream %08X
Line 5310: CipherReject: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5322: Seq No. %d deleted from DL Cipher Queue
Line 5341: Dir(%d) LleDlUiFramePtr NULL
Line 5363: SAPI1 SeqNo. %d retryCount %d
Line 5378: SeqNo. %d deleted from UL Cipher Queue
Line 5403: Dir(%d) LleUlUiFramePtr NULL
Line 5423: Unexpected Cipher Stream Direction: 0x%04x
Line 5439: CipherResume: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 5468: CipherResume: LlmEntity.CipherAlgorithm(%d) ... ignoring
Line 5483: SeqNo. %d deleted from UL Cipher Queue
Line 5500: free CipherStream 0x%X 
Line 5510: Resend UL UI CIPH REQ:Sapi %d:Seq %d CipherStatus %d
Line 5580: Duplicate Frame:Nu %3d:Vur %3d:Duplicate mask 0x%08X:offset %3d:SAPI %d
Line 5648: DL(Sapi 1) UI Frame Malloc failed
Line 5667: Malloc failed SmsData:NULL
Line 5687: Malloc failed SnpData:NULL
Line 5734: S Free Q Full:Sapi %d
Line 5772: S Free Q Full:Sapi %d
Line 5808:   llc_DecrementUFrameTimerCtr: Loop found
Line 5815:  Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 5855:   llc_DecrementSFrameTimerCtr: Loop found
Line 5862:   SRlcQueue (%08X, Start %08X, Last %08X): Frame %08X, Next %08X  Seq %4d  Tim %3d
Line 5902:   lllc_DecrementIFrameTimerCtr: Loop found
Line 5909: Start %08X, Last %08X): Frame %08X, Next %08X  nS %4d, Timer %02d
Line 5955:   llc_GetUQueueByTimedOut: Loop found
Line 5962:  Frame %08X, Next %08X, N200 %02d, SeqNo %04d, UFrameType %02d, AckStatus %02d  TimerT200 %3d
Line 6015: S Frame LOOP:Start %08X:Last %08X:Frame %08X:Next %08X:Seq %4d:T200 %3d
Line 6068: I Frame LOOP:Start %08X:Last %08X:Frame %08X:Next %08X:nS %4d:T200 %02d
Line 6113: U free Q Full:Sapi %02d
Line 6178: N200Reached: NO PEER RESP:not sending to SNDCP no L3 XID Param
Line 6194: State for Sapi %d set to %d
Line 6225: Sapi %02d, %2d U Frames not on free Queue %08X
Line 6234: %2d U Frames Missing for SAPI %d
Line 6241: Sapi %02d, %2d UI UL Frames not on free Queue 0x%08X
Line 6245: 		CipherQueue =>CipherStatus(%d) nU(%d) CipherInput(%d) AckStatus(%d)
Line 6252: %2d UI UL Frames Missing for SAPI %d
Line 6260: Sapi %02d, %2d UI DL Frames not on free Queue 0x%08X
Line 6266: %2d UI DL Frames Missing for SAPI %d
Line 6281: Sapi %02d, %2d S Frames not on free Queue %08X
Line 6290: %2d S Frames Missing for SAPI %d
Line 6298: Sapi %02d, %2d I UL Frames not on free Queue 0x%08X
Line 6310: %2d I UL Frames Missing for SAPI %d
Line 6317: Sapi %02d, %2d I DL Frames not on free Queue 0x%08X
Line 6326: %2d I DL Frames Missing for SAPI %d
Line 6367: CipherRequest: IsDlDataProcessDuringLLCSuspended(%d) llc_CipheringSuspended(%d)
Line 6378: Ciph Algo-%d:Sapi-%d:InputKey-%08X:Dirn-%d:Len-%d
Line 6379: Buffer-%08X:Length-%d:Context-%08X:Seq-%d
Line 6381: Kc value  first part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 6383: Kc value second part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 6386: Kc value  Third part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 6388: Kc value Fourth part is 0x%02x 0x%02x 0x%02x 0x%02x
Line 6415: llc_SetNumRLCFramesUL : Frame %d
Line 6437: llc_ClearUlCipherQueue - Sapi %d
