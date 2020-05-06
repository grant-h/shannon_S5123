Line 167: Decipher check: TotalNumofRbs %d, head %d, tail %d
Line 247: urlc_Flush_CipherConfig  CipherConfigDisposalRoot[%d]=0x%X
Line 251: urlc_Flush_CipherConfig: No Entry was in CipherConfigDisposalRoot[%d]
Line 257:          0x%X is freed
Line 344: urlc_CcmNewCipherConfig Asn_CipheringAlgorithm_r7: %d
Line 349: CipherKey
Line 353: CipherKey is NULL
Line 387: Error detected: urlc_CcmNewCipherConfig: NewCipherConfig memory allocation failed.
Line 403: Create New Ciphering Configuration: Present %d, Algorithm %d, CipherConfigListRoot %x, NewCipherConfig %x
Line 470: Suspend state (1,3,4) and LI in PDU
Line 485: [SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering failed. Discard PDU : %d
Line 491: [SEC] SecModComp pending for Tx, Activation time met(RbId=2), Deciphering passed. PDU : %d
Line 502: Decipher check: RbId %d, PduSn %d, OldHfn %d, NewHfn %d
Line 505: Decipher check: RbId %d, PduSn %d, OldHfnCipherErr %d, NewHfnCipherErr %d, PaddingLIforOldHfn %d, PaddingLIforNewHfn %d 
Line 512: Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %d, NewHfn %d 
Line 520: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 530: Decipher failure[New cipher config]: RbId %d, PduSn %d, Activation time %d, OldHfn %d, PendingPtr %x, NewHfn %d 
Line 538: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 555: urlc_CcmSmcRollback: RB3 Eis is NULL
Line 584: urlc_CcmRbGetUlCipherConfig: UL Pending Config NULL, returning active %x, RbId=%d, PduSn=%d, HFN=%d
Line 619: UL: RbId %d, PduSn(%d)== UlActivationTime of %d, Pending configuration would be used(HfnTobeUsed = %d)
Line 636: UL Returning active config ConfigPtr=%x, HFN=%d
Line 693: DL PendingA activation time meet(I): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
Line 704: DL PendingA activation time meet(II): PduSn %d, DlPendingActivationTime %d, RxWindowSize %d
Line 740: DL PendingA Config (VR_R == DlPendingActivationTime): RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
Line 746: DL PendingA Config is NOT NULL, RbId %d, PduSn %d, DlPendingActivationTime %d, DlPendingAHfn %d
Line 767: DL Pending Activation time meet(I): PduSn %d, DlActivationTime %d, RxWindowSize %d
Line 779: DL Pending Activation time meet(II): PduSn %d, DlActivationTime %d, RxWindowSize %d
Line 794: DL Pending Config is NOT NULL, RbId %d, PduSn %d, VR_R %d, VR_TempR %d, Activation time %d, PendingPtr %x, PendingHfn %d 
Line 802: DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d 
Line 826: DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Line 834: Use new cipher config: RbId %d, PduSn %d, ActTime %d, PendingPtr(new)%x, Hfn %d
Line 846: AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Line 873: AM MODE: Adjusted active HFN for SN=%d is HFN=%d, VR_R=%d
Line 900: Error detected: urlc_CcmRbGetDlUmCipherConfig: PduSn %d, UmEis is NULL!
Line 912: Error detected: urlc_CcmRbGetDlUmCipherConfig: RbId %d, CcmVars is NULL!
Line 965: DL Pending Config is NOT NULL, RbId %d, PduSn %d, Activation time %d, PendingPtr %x, PendingHfn %d 
Line 970: DL Pending & PendingA are same: RbId %d, PduSn %d, Activation time %d, DlPendingAPtr %x, DlPendingAHfn %d 
Line 997: DL PendingA->Pending, PendingA deleted.(NextActivationTime=%d, NewPendingHfn=%d)
Line 1015: UM MODE: SN Wrap Increment HFN(RbId=%d, VR_US=%d, SN=%d, HFN=%d)
Line 1031: ActivationTime met Included &  wrap  Increment HFN (RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d)
Line 1041: ActivationTime met Included &  No HFN Increment(RbId %d, VR_US %d, SN %d, HFN %d, DlActivationTime %d, ReestablishInd %d
Line 1188: urlc_CcmRbAlterHfnCipherConfig UL(Old HFN %d, New HFN %d, UlActivePtr %x)
Line 1205: urlc_CcmRbAlterHfnCipherConfig DL(Old HFN %d, New HFN %d, DlListEntry %d, DlActivePtr %x)
Line 1236: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, CipherConfig is NULL!
Line 1251: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, AmEis is NULL
Line 1258: Error detected: urlc_CcmRbAddCipherConfig: RbId=%d, CcmVars is NULL
Line 1268: urlc_CcmRbAddCipherConfig(): Need to delete DlPendingPtr (DlPendingPtr %X, DlActivationTime=%d, DlPendingHfn=%d)
Line 1286: DL PendingA->Pending, PendingA deleted.(NewDlPendingAPtr %X, NewActivationTime=%d, NewPendingHfn=%d)
Line 1299: Update current cipherConfigInfo at DlPendingPtr(Activation time is same): RbId %d, DlActivationTime %d
Line 1321: urlc_CcmRbAddCipherConfig(DL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1338: SMC rollback(I): RbId %d, VR_R %d, VR_H %d, DlActivationTime %d, RxWindowSize %d
Line 1343: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 1354: SMC rollback(II): RbId %d, VR_R %d, VR_H %d, DlActivationTime %d, RxWindowSize %d
Line 1359: CURLC_CIPHERCONFIGERR_IND (RbId=2)
Line 1379: urlc_CcmRbAddCipherConfig(DL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1396: urlc_CcmRbAddCipherConfig(UL Pending): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1411: urlc_CcmRbAddCipherConfig(UL PendingA): RbId=%d, HFN=%d, Activation=%d, RbAccessCnt %d, CipherConfig %x
Line 1487: urlc_CcmRbIncrementActiveHfn UL: RbId %d, HFN %d
Line 1497: No Active CipherConfigs: RbId %d
Line 1518: urlc_CcmRbIncrementActiveHfn DL: RbId %d, HFN %d, Config %d, CipherConfig %x
Line 1555: urlc_DecipherPendingTransaction(%d): PendingRbList[%d] %d, head, %d, tail %d, NoOfRbs %d
Line 1567: urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
Line 1583: urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
Line 1589: urlc_DecipherPendingTransaction(%d): IsScheduledDecipherSTF %d
Line 1604: urlc_DecipherPendingTransaction(): Scheduled Deciphering for RbId %d
Line 1609: urlc_DecipherPendingTransaction(): Mode %d for RbId %d, tail %d, head %d, EIS 0x%x
Line 1616: Invalid pending RB idx %d, PendingRbList[Rbindex] %d.
Line 1622: urlc_DecipherPendingTransaction() %d, PendingRbList[Rbindex] %d.
Line 1652: urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=NULL, Eis=%x
Line 1655: urlc_DecipherTransactionScheduling(RbId %d)Received wrong parameter : Transaction=%x, Eis=%x, Xact'n->Eis=%x
Line 1684: LTE LMAC MODE!!!: RbId %d
Line 1713: urlc_DecipherTransactionScheduling: RbId %d Transaction %x
Line 1791: urlc_RxDecipherTimerStart: RbId %d, Transaction %x, TotalSizeCipher %d
Line 1802: LMAC BUSY(decipher transaction) RxLmacQueueStatus (%u)
Line 1837: LMAC BUSY(decipher transaction): RbId %d PollingCnt %d
Line 1860: Data RB Count is BIG, DataRbCnt %d
Line 1957: urlc_CcmUea1AddToTransaction: RbId %d, PduSn %d, UL HFN %d, CipherConfig %x, DataRbCnt %d
Line 1959: CipherKey(Current)
Line 1960: CipherKey(Config)
Line 1970: NgCnt is higher than 2: RbId %d, Ngcnt %d, CipherConfig %x
Line 1978: CipherConfig is different(Ngruop): RbId %d, OldCipherConfig %x, CipherConfig %x
Line 1982: NgCnt Count is BIG %d
Line 1996: UL Transaction->ArrayCnt is out of bound %d
Line 2006: NgCnt Count is BIG %d
Line 2031: CurrPduHandle==NULL: RbId %d
Line 2066: Snow3G : RbId %d, PduSn %d, HFN %d, CkIndex %d
Line 2072: TX Cipher Only Done(SRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, PaySize %d
Line 2078: TX Cipher Info(DataRBs): RbId %d, CipherConfig %x, PduNum %d, PduSn %d, Snow3G %d, HFN %d, CKSrcIdx %d
Line 2087: Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
Line 2137: ERROR::urlc_CcmUea1AddToDlTransaction::not supported mode(%)!
Line 2195: NumOfNgroup is higher than max: RbId %d, NumOfNgroup %d
Line 2205: NumOfNgroup value out of bounds : %d(RbId %d)
Line 2213: RX decipher only(New Cipher Config): RbId %d, Algorithm %d, CkIdx %d, NgrCnt %d, NumOfPdu(ForOldConfig)%d, CipherConfig %x, OldCipherConfig %x
Line 2218: NumOfNgroup value out of bounds : %d(RbId %d)
Line 2233: DL Transaction->ArrayCnt is out of bound %d
Line 2253: RX decipher only: RbId %d, PduSn %d, Snow3G %d, HFN %d, CipherConfig %x, PduNum %d, AutoCountc %d
Line 2261: Error detected: RbId %d CipherTransaction ArrayCnt %d exceeds URLC_MAX_CIPHER_REQUESTS
Line 2303: TX urlc_CcmUea1ProcessUlTransaction() : RbId %d, CipheredPdus %d, TransactionTID 0x%x, Snow3G %d, TxGlobalCnt %d
Line 2384: urlc_CcmUea1ProcessDlTransaction(): LMACnotSafe %d , QueuedTransactionNum %d , IsRunningTimer %d , TotalNumOfRbs %d
Line 2390: Start queueing (decipher transaction): RbId %d, Mode %d, TokensTaken %d, TokensTakenMax %d
Line 2413: Push to TransactionInfo: RbId %d, Mode %d, QueuedTransactionNum %d, TotalNumOfRbs stored %d
Line 2441: LTE LMAC MODE!!!: RbId %d, Mode %d, QueuedTransactionNum %d, MaxQCntCipherTransaction %d
Line 2462: urlc_CcmReceiveCipherCnf_UL TID=%d
Line 2470: Remove UL Transaction for inactive RB %d
Line 2528: Remove DL Transaction for inactive RB %d
Line 2533: Resetting IsScheduledDecipherSTF 
Line 2559: LTE LMAC MODE!!!
Line 2564: urlc_CcmReceiveCipherCnf_DL() RbId %d, LMACnotSafe %d
Line 2583: End queueing(decipher transaction): RbId %d, AM, QueuedTransactionNum %d, LMACnotSafe %d
Line 2604: End queueing(decipher transaction): RbId %d, UM, QueuedTransactionNum %d, LMACnotSafe %d
Line 2622: Scheduled next deciphering for RbId %d, PendingQueuedTransNum %d
Line 2635: urlc_CcmReceiveCipherCnf_DL(): head %d, tail %d, TotalNumOfPendingRbs %d
Line 2640: Scheduled Deciphering for Rb Index %d, RBId %d, Pending list head %d
Line 2678: urlc_CcmAbortCiphering UL RbId=%d
Line 2708: urlc_EmGetUlEis debugging test
Line 2734: urlc_CcmAbortCiphering DL RbId=%d
Line 2809: urlc_CcmRbRemoveCipherConfig: RbId%d, CallerId %d, CkIndex %d, RbAccessCnt %d, CipherConfig %x, PrevEntry %x, NextEntry %x
Line 2837: urlc_CcmRbRemoveCipherConfig(Remove): CkIndex %d, CipherConfig(Remove)%x
Line 2866: Error detected: New Active List Entry memory allocation failed RbId %d.
Line 2915: urlc_CcmAddToDlActiveList: RbId %d, DlActivePtr %x, DlActiveHfn %d, NewEntryListPtr %x, NewEntry->DlActivePtr %x, NewEntry->DlActiveHfn %d
Line 2938: urlc_CcmRemoveFromDlActiveList: RbId %d, CallerId %d, OldEntryPtr %x, OldDlActivePtr %x
Line 2963: ........No Active Configs, return NULL: RbId %d, PduSn%d
Line 3035: Error detected: RbId %d, UlCiphernfo memory allocation failed.
Line 3047: Allocate transaction dynamically(UL): RbId %d, iUlDynamicAllocCnt %d
Line 3077: Allocate transaction dynamically(DL): RbId %d, iDlDynamicAllocCnt %d
Line 3115: urlc_CcmRemoveDatabaseTransaction: RbId %d Transaction %x
Line 3122: Already Free for Transaction
Line 3132: stackId : %d is already disabled. do nothing
Line 3141: other stackId : %d is enabled. do nothing
Line 3156: urlc_Destroy_DecpherTime freed complete
Line 3184: Created pal_TmCreateTimer for decipher: RbId %d, UrlcDecipherTimer 0x%x
Line 3189: UrlcDecipherTimer is already exist!! UrlcDecipherTimer 0x%x
Line 3195: Do not initiate pal_TmCreateTimer: RbId %d
Line 3224: urlc_RxDecipherTimerExpiry(Eis is NULL): RbId %d
Line 3232: urlc_RxDecipherTimerExpiry : RxDecipherTimer is not running!
Line 3242: TransactionId->Eis == NULL: RbId %d
Line 3254: TransactionId->Eis == NULL: RbId %d
Line 3262: urlc_RxDecipherTimerExpiry(Invalid Mode): RbId %d, Mode %d
Line 3270: urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
Line 3276: urlc_RxDecipherTimerExpiry: RbId %d, Mode %d, TransactionId %x, QueuedTransactionNum %d
Line 3326: urlc_CcmDeleteCipherTransactionAndPduhandle: RbId =%d, RB In Timer %d, IsScheduledDecipherSTF %d, IsRunningTimer %d 
Line 3331: Decipher flags are reset : RbId %d, IsScheduledDecipherSTF = %d
Line 3364: Free the CipherTransaction: RbId %d, NumOfTransaction %d, Id %d, NumOfPdus %d
Line 3397: Invalid direction: RbId %d
Line 3416: Rearragned Pending Rb List Info, head %d , tail %d 
Line 3431: RbId %d in the pending list removed as transaction is freed, isRbPresent 0x%x
Line 3456: URLC requires Pause delay: IsScheduledDecipherSTF %d, PendingRbs[SIMInstance].TotalNumOfRbs = %d
Line 3556: LMAC Decipher failed, Using SW Deciphering: RbId:%d, Algorithm %d, PduSn %d
Line 3560: SW decipher data: 
Line 3564: PASS through LMAC decipher: 
Line 3570: LMAC Decipher Busy, Using SW Deciphering RbId:%d, Algorithm %d, PduSn %d
Line 3573: SW decipher data: 
Line 3578: Both SIM present: SW decipher: RbId:%d, Algorithm %d, PduSn %d
Line 3581: SW decipher data: 
Line 3588: urlc_CcmExcuteCipherAndCheckLI: Null pointer (RbId =%d)
Line 3667: LI indicates out of PDU range: RbId %d, HFN %d, PduSn %d, %dth, LiSize %d, LiValue 0x%x, payloadSize %d
