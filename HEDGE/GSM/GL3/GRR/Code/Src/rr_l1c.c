Line 101: Start Discete Cell Search Timer
Line 135: arfcns_to_scan:%d
Line 194: scan_all_freqs:%d
Line 242:  !!!SISchArry OverFlow(SI1)
Line 260:  !!!SISchArry OverFlow(SI2)
Line 278:  !!!SISchArry OverFlow(SI2b)
Line 296:  !!!SISchArry OverFlow(SI2t_1)
Line 317:  !!!SISchArry OverFlow(SI2t_2)
Line 355:  !!!SISchArry OverFlow(SI2q_1)
Line 367: SI2Q(NORM) SI2qInd:%d
Line 393: SI2Q(EXTENDED) SI2qInd:%d
Line 408:  !!!SISchArry OverFlow(SI3)
Line 426:  !!!SISchArry OverFlow(SI4)
Line 444:  !!!SISchArry OverFlow(SI7)
Line 462:  !!!SISchArry OverFlow(SI8)
Line 480:  !!!SISchArry OverFlow(SI9)
Line 498:  !!!SISchArry OverFlow(SI13)
Line 510:  SI13(Ext)
Line 517:  SI13(Norm)
Line 539:  !!!SISchArry OverFlow(SI9Loop)
Line 574: useBand:%s
Line 618: BPLMN: useBand:%s
Line 649: BCCH_READ_REQ(%d) NededSI (0x%x):
Line 656:  !!!BcchReadReq NA
Line 669: PrevTime(%d), CurrTime(%d)
Line 682: Diff(%d)
Line 690: SKIP BCCH Reading - 4G data ongoing, diff time(%d)
Line 703: Cell Reselection or Selection is on-going. Do not skip BCCH
Line 746: SI3 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 750: SI3 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 755: SI1 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 758: SI1 rcvd New NededSI (0x%x) Low Prio SI(0x%x):
Line 774: rr_RlcSuspForNormalResel %d, read reason: L1_BETTER_NEIGHBOUR_DURING_PTM_DS
Line 788: rr_WaitSiAfterResel %d, bcch read reason: L1_CELL_SELECTION
Line 796: rr_WaitSiAfterResel %d, bcch read reason: L1_NETWORK_COMMANDED
Line 801: rr_GrrPsSupportedChanged & rr_GrrPsSupportedFlag = TRUE so set bcch read reason: L1_CELL_SELECTION
Line 808:  ReadReason:%x
Line 830: SIToRead: NededSI (0x%x) Low Prio SI(0x%x):
Line 841: BCCH_READ_REQ (%d)  Parallel rr_BcchReadArfcn (%d) NBcchReqSent (%d)  :
Line 848: Only rr_BcchReadArfcn (%d) NBcchReqSent (%d)  :
Line 855: Scell rr_BcchReadArfcn (%d) SBcchReqSent (%d)  :
Line 897:  ReadReason:%x
Line 907:  !!!SISchArry OverFlow(SI3)
Line 925:  !!!SISchArry OverFlow(SI4)
Line 952:  SIDatabase: sync_info_required (%d)
Line 988: BPLMN: Stopping any ongoing BCCH READ
Line 1036: rr_StopOngoingBcch: RR is not in a proper state to handle this
Line 1042: Cell selection is ongoing, pause cell search
Line 1048:  Check for pending BCCH Read Response
Line 1057:  Stop N rr_BcchReadArfcn(%d)
Line 1064:  Stop S rr_BcchReadArfcn(%d)
Line 1072: No pending BCCH Scell %d Ncell %d Sent %d  :
Line 1096: StopBcchReadReq(%d)
Line 1120: StopBcchReadReq not sent
Line 1122: rr_IdleReqState(%d),rr_PktTransferState(%d), rr_ServCell->BcchFreq (%d), bplmnState(%d)
Line 1126: rr_ServCell is null
Line 1173: StopServBcchReadReq(%d)
Line 1195: StopBcchReadReq not sent
Line 1268: Suitable Cell timer is running in Dedicated mode. Stop it !!!
Line 1387: Prepare the channel assignment req message for later ..
Line 1415: CSD channel mode(%d) is not supported!!
Line 1533: rr_DbgScell.TxPower = rr_DbgScell.CurrentTxPower (%d)
Line 1650: HO FAIL Cause: RR_PROT_ERR_UNSPE Cell not found in Sync
Line 1669: HO FAIL Cause : CSD channel mode(%d) is not supported!!
Line 1705: HO FAIL Cause: RR_CHAN_MODE_KO Channel Mode:%d
Line 1712: HO FAIL Cause: RR_CHAN_MODE_KO Channel Mode:%d
Line 1722: HO: ARFCN(%d) NCC(%d) BCC(%d) BSIC(%x)
Line 1794: rr_DbgScell.TxPower = rr_DbgScell.CurrentTxPower (%d)
Line 1800: Arfcn(%d) not Supported by Carrier
Line 1803: HO FAIL Cause: RR_FREQ_NON_IMPL Cell->BcchFreq:%d
Line 1837: HO FAIL Cause: RR_FREQ_NON_IMPL
Line 1859: HO FAIL Cause: RR_FREQ_NON_IMPL
Line 1878: HO FAIL Cause: RR_CHAN_MODE_KO
Line 1917: HSN Received from NW (%d)
Line 2010: CBCH-Invalid Freq Hopping Band
Line 2204: CRITICAL ERROR, Value put of Range: t_avg_w:%d, force to MAX
Line 2209: CRITICAL ERROR, Value put of Range: t_avg_t:%d, force to MAX
Line 2214: CRITICAL ERROR, Value put of Range: alpha:%d, force to MAX
Line 2219: CRITICAL ERROR, Value put of Range: n_avg_i:%d, force to MAX
Line 2224: CRITICAL ERROR, Value put of Range: pc_meas_chan:%d, force to MAX
Line 2229: CRITICAL ERROR, gprspwrctrl valid:%d, force to Valid
Line 2239: ##########  NMO Mode CCCH IDLE  %d  and Page % in Scell Page %d 
Line 2320: Error Buffer overflow, array index of 'ma_index' may be out of bounds %d 
Line 2336: !!!MA 15 used for PCCCH!!!
Line 2381: PBCCH maio:%d hsn:%d
Line 2383: PBCCH NoOfFreqs:%d
Line 2389:  PBCCH HopFreq:%d
Line 2625: IdleReq not sent during reselection
Line 2636: IdleReq pending
Line 2660: MPH_PCCCH_IDLE_REQ(%d)
Line 2669: MPH_CCCH_IDLE_REQ(GPRS)(%d)
Line 2689: MPH_CCCH_IDLE_REQ(GSM)(%d)
Line 2846: [Cipher] key1: 0x%x 0x%x 0x%x 0x%x
Line 2853: [Cipher] key2: 0x%x 0x%x 0x%x 0x%x
Line 2861: [Cipher_128] key1: 0x%x 0x%x 0x%x 0x%x
Line 2868: [Cipher_128] key2: 0x%x 0x%x 0x%x 0x%x
Line 2875: [Cipher_128] key3: 0x%x 0x%x 0x%x 0x%x
Line 2882: [Cipher_128] key4: 0x%x 0x%x 0x%x 0x%x
Line 2906: MPH_ERROR_IND(cause %d) Dlci Status 0x%x
Line 2912: DTM: rr_SetDTMAccessStatusToRlc(F)
Line 3184: [CHN MOD] VAMOS TSC set2, TCH/F
Line 3189: [CHN MOD] VAMOS TSC set2, TCH/H
Line 3208: CSD channel mode(%d) is not supported!!
Line 3309: [CHN MOD] tsc_set(%d) tsc(%d)
Line 3361:  PBCCH NoOfFreqs(%d)
Line 3366:   PBCCH Hop Freq(%d)
Line 3462: rr_CalculateFrequencyParams
Line 3468:  MA type(%d)
Line 3497: Exclude freqs in ARFCN index list
Line 3504: Freqs removed: 
Line 3517:  %d
Line 3526:  %d
Line 3538:  %d
Line 3582: NON_DRX_PERIOD, IDLE REQ not allowed
Line 3589: IDLE REQ not allowed, rr_MmRxvdPowerOffInd or ACCESS_IN_PROGRESS is on
Line 3880: StopPbcchReadReq(%d)
Line 3896: StopPBCCHReadReq not sent
Line 4006: rr_BcchSwapFreq = %d
Line 4141: Target cell = NULL !!
Line 4506: Incorrent IE length (%d) for number of codecs (%d)
Line 4520: Incorrent IE length (%d) for number of codecs (%d)
Line 4533: Incorrent IE length for number of codecs
Line 4551: Incorrent IE length (%d) for number of codecs (%d)
Line 4573: Incorrent IE length for number of codecs
Line 4640: Incorrent IE length (%d)
Line 4704: Set forceBandInd
Line 4744: Chan Val(%d) ChanDescr(%x %x)
Line 4753: TSC (%d)
Line 4812: Channel Desc-2 TSC Set value (%d), Subchannel(%d)
Line 4914: rr_BuildChanDesc FreqLists is not match Band, rr_BandInd:%d
Line 4927: Arfcn(%d) not Supported by Carrier
Line 4961: Arfcn(%d) not Supported by Carrier
Line 5483: Reset rr_suspendTbfforUarfcnScan to hold, Network request UE to move to Page Reorg mode.
Line 5663: MPH_CHANNEL_RELEASE (%d)
Line 5781: Pended bandInd change is handled: BandInd %d in SI6 doesn't match %d.
Line 5933: Error ARFCN Mismatch CGI ARFCN %d BCCH Arfcn %d
Line 5942: ANR BCCH_READ_REQ  BcchFreq %d Needed SI 0X%x bcch_type (%d)
Line 5980:  !!!SISchArry OverFlow(SI3)
Line 5999:  !!!SISchArry OverFlow(SI4)
Line 6018:  !!!SISchArry OverFlow(SI13)
Line 6030:  SI13(Ext)
Line 6037:  SI13(Norm)
Line 6128: BPLMN:Stop as BandToScan(%d) is invalid)
Line 6209: Supposed to scan one band!
Line 6265: scan_all_freqs = %d, useBand=%s
Line 6269: BPLMN: MPH_RXLEV_REQ Cause(%d) 
Line 6303: BPLMN: BCCH_READ_REQ %d
Line 6352:  !!!SISchArry OverFlow(SI3)
Line 6370:  !!!SISchArry OverFlow(SI4)
Line 6408: BPLMN: MPH_STOP_BCCH_READING_REQ(%d)
Line 6424: BPLMN:Error! Attempting to Stop reading Serving Cell(%d)
Line 6442: BPLMN: MPH_STOP_BCCH_READING_REQ not sent
Line 6480: FG: MPH_STOP_RXLEV_REQ
Line 6523: BPLMN: MPH_STOP_RXLEV_REQ(Cause: %d)
Line 6566: BPLMN: MPH_CONFIG_BPLMN_REQ cause=%d
Line 6600: Reselection In Progress, ignore DRX time
Line 6618: BPLMN: MPH_DRX_TIMER_IND. rr_Sleep_Time=%ld ms
Line 6624: BPLMN: Sleep_Time %d ms less than %d ms, Ignored!
Line 6630: BPLMN:Error: BPLMN State Mismatch!
Line 6631: BPLMN: Ignoring MPH_DRX_TIMER_IND. Sleep_Time =%d ms
Line 6659: BPLMN: MPH_CONFIG_BPLMN_CNF:%d
Line 6700: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 6737: BPLMN: MPH_STOP_RXLEV_CNF
Line 6742: BPLMN: in SUSPEND_NULL state 
Line 6820: [FAST_SYNC] Parallel ARFCN: %d, SYNC_REQ_SENT
Line 6879: BPLMN: rr_BFreqSyncPos %d, CurrentIndex %d
Line 6942: BPLMN: MPH_BPLMN_SYNC_REQ(n: %d, ARFCNs: %d, %d, %d)
Line 6959: BPLMN: rr_BFreqSyncPos %d, CurrentIndex
Line 6967: BPLMN: SYNC_REQ not sent 
Line 7001: BPLMN: MPH_BPLMN_SYNC_REQ(n: %d, ARFCNs: %d, %d, %d)
Line 7073: BandToScan: GSM850 MaxArfcnTry:%d
Line 7090: BandToScan: PCS1900 MaxArfcnTry:%d
Line 7107: BandToScan: GSM900 MaxArfcnTry:%d
Line 7115: BPLMN for 1800 band is kicked off (bandInd(PCS))
Line 7126: BandToScan: DCS1800 MaxArfcnTry:%d
Line 7150: BandToScan: GSM900 MaxArfcnTry:%d
Line 7167: BandToScan: DCS1800 MaxArfcnTry:%d
Line 7184: BandToScan: GSM850 MaxArfcnTry:%d
Line 7192: BPLMN for 1800 band is kicked off (bandInd(PCS))
Line 7203: BandToScan: PCS1900 MaxArfcnTry:%d
Line 7233: BandToScan: GSM900 MaxArfcnTry:%d
Line 7243: BandToScan: GSM850 MaxArfcnTry:%d
Line 7253: BandToScan: DCS1800 MaxArfcnTry:%d
Line 7263: BandToScan: PCS1900 MaxArfcnTry:%d
Line 7277: BandToScan: Error: Failed to find Band to Scan
Line 7285: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 7326: DCS1800 BAND_SCAN_NOT_REQUIRED, rr_BandInd %d
Line 7331: PCS1900 BAND_SCAN_NOT_REQUIRED, rr_BandInd %d
Line 7346: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 7375: SYNC_IND
Line 7392: SYNC_IND Cell(%d) Status(%d)
Line 7396: Error: INVALID_SYNC_INFO for ARFCN %d!
Line 7413: SYNC_NOT_FOUND Rxlev: %d of ARFCN:%d
Line 7428: Unexpected Error: rr_PowerMsg=NULL
Line 7435: [FAST_SYNC] MPH_SYNC_IND %d  ...
Line 7447: [FAST_SYNC] SYNC FOUND failed for ARFCN %d! ...
Line 7456: rr_FastSync.BcchFreq[%d] = INVALID_ARFCN ...
Line 7468: Rxd Sync_ind for ARFCN not in SyncList!
Line 7475: SET  Status  for  SYNC_IND Cell(%d) Status(%d) Count (%d)
Line 7479: FB failed Handicapping ARFCN %d Rxlev (%d)  
Line 7486: FB failed Handicapping ARFCN %d Rxlev (%d)  
Line 7492: SB failed for ARFCN %d! Handicapping...
Line 7517: BPLMN_SYNC_IND came in BPLMN IDLE state
Line 7524: BPLMN: BPLMN_SYNC_IND
Line 7528: BPLMN: SYNC_IND ARFCN:%d BSIC:%x Status:%d
Line 7532: BPLMN:Error: INVALID_SYNC_INFO for ARFCN %d!Status:%d
Line 7538: BPLMN: FB-SB failed for ARFCN %d!Status:%d
Line 7557: BPLMN: Include retrylist due to weak sig for ARFCN %d! Rxlev %d
Line 7561: BPLMN: Not retry due to strong sig for ARFCN %d! Rxlev %d
Line 7615: ARFCN %d BSIC:%x Found in BPlmnDb PLMN(%x,%x,%x)
Line 7669: BPLMN: NumSIReadBuffered %d: rr_BPlmnNextBcchReq-> ProcessSIRead
Line 7682: ARFCN %d BSIC:%x not found in DB!
Line 7708: [FAST_SYNC] Mode Error
Line 7770: MPH_HANDOVER_FAIL_REQ
Line 7818: MPH_LCS_FREQ_AID_CNF, Status = %d
Line 7838: MPH_LCS_FREQ_AID_CNF, Status = %d
Line 7860: MPH_BATT_CAPACITY_IND
Line 7890: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7896: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7902: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7908: Do not delete HO Cell:%d in rr_SendChangeBandIndToGL1
Line 7936: ExtPg: Inform GL1 to Pretreat
Line 7959: Requested PageMode:%d PktPageMode:%d
Line 7973: Used PageMode:%d PktPageMode:%d
Line 7994:  Mem Alloc issue in SendNasSignalingIndToL1
Line 8003:  GRR=>L1 MPH_NAS_SIGNALING_IND Start Stop (%d) Type (%d) 
Line 8015:  Mem Alloc issue in rr_SendDiscreteCellSrchModeToGL1
Line 8021:  rr_SendDiscreteCellSrchModeToGL1: Mode (%d) 
Line 8031:  rr_GrrHandlePgReorgCnf: pgReorgCnfCause (%d) 
Line 8090: DS: Using Copied IdleReq Params
Line 8125: DRX: PS NonDrx Not allowed. SingleSim:%d
Line 8149: DRX: CS NonDrx Not allowed. SingleSim:%d
Line 8171: DRX: Attempt to Enter DRX Mode
Line 8194: MPH_SENSOR_STATE_REQ(%d, %d)
Line 8240: ### NewTrafficBand =	%d 
