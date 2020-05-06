Line 44: MM has registered on an EMERGENCY cell!!!
Line 48: SIM not read - IGNORE!!!
Line 164: rr_EndRegNOK: rr_RegRes_WaitPLMNSearch is Set 
Line 405: REG IND
Line 560: <Selected LAI %x %x %x %x %x> 
Line 564:  <Current  LAI %x %x %x %x %x> 
Line 600: <Selected Plmn %x %x %x> - <Current  Plmn %x %x %x> 
Line 624: <Eq Plmn %x %x %x> - <Current  Plmn %x %x %x> 
Line 693: Forbidden LA for roaming!
Line 747: Latin
Line 768: Chn
Line 805: Frequency Scan Mode (Bandmode : 850/900/1900)
Line 810: Frequency Scan Mode (Bandmode : 850/900/1800)
Line 864: GRR_MM_PLMN_SEARCH_REQ: %x %x %x and HPLMN %x %x %x
Line 899:  Sim Flag is Set (%d) ServThresh(%d)
Line 903:  Sim Flag is Not Set (%d)
Line 934:  Sim Flag G2T Set (%d)
Line 940:  Sim Flag G2T Not Set (%d)
Line 949: SIM Status(%d), AnyPlmn(%d)
Line 980: Non Emerg PLMN requested without SIM
Line 987: Dedicated mode - reject PLMN search req
Line 994: RR_WPLMN_LIST - reject PLMN search req
Line 1004: CellLocking: Enabled
Line 1011: rr_MMPlmnFreqSearchMode: RR_STORED_CELL_SEARCH
Line 1014: rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_EXCLUDING_STORED_CELL_SEARCH
Line 1017: rr_MMPlmnFreqSearchMode: RR_FULL_SCAN_SEARCH
Line 1027: rr_QuickSearch: ManualSelection
Line 1033: rr_QuickSearch %d: RR_STORED_CELL_SEARCH
Line 1039: %x %x %x %d
Line 1057: IRAT Resel In Progress - Wait for SUSP_CON before sending PLMN search Fail
Line 1100: No Cell Selection Grant for IDLE
Line 1167: rr_AbortSearchStatus(%d) 
Line 1172: Hold PLMN SEARCH: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Line 1177: Hold PLMN SEARCH: RR State is WPOWER
Line 1203: GRR_MM_RESEL_HOLD_REQ
Line 1216: IRAT Resel In Progress - Wait for SUSP_CON before sending RESEL_HOLD_CNF
Line 1244: GRR_MM_RESEL_HOLD_CNF
Line 1272: GRR_MM_PLMN_LIST_REQ: Background PLMN Search
Line 1277: GRR_MM_PLMN_LIST_REQ: Foreground PLMN Search
Line 1307: IdleReq pending, stop the timer before FG MPLMN starts
Line 1319: Dedicated mode - reject PLMN list req
Line 1330: Ignore PLMN List Req while already doing one!!!
Line 1346: IRAT Resel In Progress - reject PLMN List req
Line 1404: PLMN with  PLMN id (0x%x)
Line 1426: Hold PLMN LIST REQ: ABORT_LIST_REQ_AND_PLMN_REQ_DURING_WPOWER
Line 1461: GRR_MM_PLMN_LIST_ABORT_REQ, wait for Power Resp
Line 1469: GRR_MM_PLMN_LIST_ABORT_REQ, Move to Resume-Null
Line 1490: Invalid state - ignore PLMN list abort req
Line 1542: Add PLMN to PLMN list: %x %x %x
Line 1602: Detected Band List %d %d
Line 1606: GRR_MM_PLMN_LIST_IND to MM
Line 1647: GRR_MM_PLMN_LIST_IND to MM during IRAT Proc
Line 1688: GRR_MM_PLMN_SEARCH_FAIL_IND
Line 1755: ListSize: %d
Line 1758: RequestedPlmnId: %x %x %x
Line 1762: GRR_MM_NO_CELL_IND
Line 1770: 2G Out of service event occurred
Line 1796: PlmnState %s->%s
Line 1803: SelectPlmn 0x%x 0x%x 0x%x
Line 1832: PLMN selection complete
Line 1866: CellSelec: SRCH CMPLTD
Line 1882: PLMN selection complete -> ON ANY
Line 1889: PLMN selection complete -> ON PLMN
Line 1929: BPLMN:Check ScellLai to rr_BPlmnListElem 
Line 1935: BPLMN:Add ScellLai to rr_BPlmnListElem 
Line 2037: BPLMN DS: Skip 1800 band: ScellBand(%s), BandInd(%d)
Line 2042: BPLMN DS: Skip 1900 band: ScellBand(%s), BandInd(%d)
Line 2068: rr_BplmnBandScanStatus: 850:%d 900:%d 1800:%d 1900:%d Ongoing:%s
Line 2095: BPLMN: <LIST REQ from MM> BPlmnDb %d
Line 2097: BPLMN: rr_PlmnListReq: SearchType %d, SingleRatSearch %d, PlmnReqForOldList %d
Line 2118: ReqBandNum = 0xFF send GRR_MM_PLMN_LIST_IND without search
Line 2149: BPLMN:Error:NonDrx CsNonDrx (%d) PsNonDrx(%d) rr_NonDrxTimInProg(%d) AttachInProg(%d) AccInProg(%d) DlTbfProc(%d)
Line 2164: rr_WaitIdleCnfForImmResel is TRUE, Donot handle PLMN LIST REQ
Line 2174: WAIT for SRRC response
Line 2188: BPLMN Proc allowed
Line 2194: Bplmn request for Inactive rat, No DSRC grant required!!!
Line 2209: BPLMN:Error: Already BPLMN ongoing!!
Line 2263: rr_band_type:%s rr_BandInd:%d
Line 2269: BPLMN: Wait for IDLE_CNF
Line 2280: rr_NewIdleToL1 rr_IdleReqState:%d
Line 2294: Peer Stack is on 2G DATA, suspend data before BPLMN starts
Line 2307: BPLMN:Error: Unexpected Error! 
Line 2364: Detected Band List %d %d
Line 2370: GRR_MM_PLMN_LIST_IND to MM
Line 2415: ANR:MM_GRR_PREPARE_CGI_REQ from MM
Line 2419: Anr Error: in wrong state
Line 2434: CGI Parameters arfcn(%d) band_ind(%d) NCC (0x%x) BCC (0x%x) 
Line 2461: rr_band_type:%s rr_BandInd:%d
Line 2467: ANR:Error: Unexpected Error! 
Line 2514: rac present:%x, arfcn value:%d, band indicator:%x, 
Line 2515: ncc:%x, bcc:%x, rac:%x, 
Line 2516: lac:%x, cgi_cell_id:%x
Line 2517: plmnid[0]:%x, plmnid[1]:%x, plmnid[2]:%x, 
Line 2520: GRR_MM_CGI_INFO_IND to MM
Line 2577: BPLMN:PlmnListInd.Cause(%d)!
Line 2586: GRR_MM_BACKGND_PLMN_LIST_FAIL_IND to MM
Line 2602: GSM_PLMN_list_count(%d) StartBPlmnlistValidTimer
Line 2643: BPLMN: Acquired PLMN ID!: %x %x %x
Line 2651: BPLMN: Comparing PLMN from LIST: %x %x %x
Line 2661: BPLMN: Requested BPLMN Id Found!: %x %x %x
Line 2715: BPLMN: Add PLMN to PLMN list: %x %x %x Arfcn:%d Rxlev:%d
Line 2752: ERROR  RtkGetMemory returned NULL in rr_SetBplmnArfcnListToMM
Line 2763: Send Bplmn GSM cell to MM Count:%d, Arfcn %d, BandType %s
Line 2787: rr_InitBplmnArfcnListToMM
Line 2837: GRR_MM_NET_SCAN_IND to MM for PlmnId: %x %x %x
Line 2842: serving:%s lac:0x%x cid:0x%x rssi:%d
Line 2911: rr_UpdateBPlmnList, lac:0x%x cid:0x%x
Line 2914: BPLMN: Update PLMN to PLMN list: %x %x %x Arfcn:%d RxLev:%d
Line 2967: In BPlmnDb, ARFCN:%d, Is Arfcn-Bsic Entry Found:(%d)
Line 2984: In BPlmnDb, lac:0x%x cid:0x%x
Line 3105: BPlmnDb: Arfcn(%d) Bsic(%x) Age(%d) Plmn(%x %x %x) Band(%d)
Line 3148: BPLMN:Age of ARFCN(%d) Bsic(%d) Plmn(%x %x %x) expired
Line 3170: BPLMN DB has no more elements left
Line 3197: BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_REQ
Line 3205: BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN ! 
Line 3236: BPLMN:Error: BPLMN not Running, but got ABORT!
Line 3264: BPLMN:Error: Unexpected Error! 
Line 3299: BPLMN: GRR_MM_ABORT_BACKGND_PLMN_LIST_CNF to MM
Line 3351: Stop BPLMN as Other stack is Busy
Line 3374: rr_StopBPlmnProcedure
Line 3380: BPLMN: Inactive 2G Bplmn was Running. Stopping BPLMN ! 
Line 3425: BPLMN:Error: Unexpected Error! 
Line 3467: BPLMN:Error: Invalid state. Already state changed to other state when timer expired
Line 3472: BPLMN: Already Suspend Sent, ABORT Rxd:%d
Line 3516: BPLMN: Already Suspend Sent, ABORT Rxd:%d
Line 3527: BPLMN:Error:!Invalid BPLMN State
Line 3586: MissedBand: Scan Done rr_band_type=%s
Line 3595: BPLMN: 2G SingleRatSearch Done
Line 3634: BPLMN: rr_BPlmnResume
Line 3646: rr_band_type:%s rr_BandInd:%d
Line 3703: BPLMN:Error:  Unexpected
Line 3731: rr_CbchState:%d
Line 3756: rr_CbchState:%d
Line 3768: CbchState:=> CBCH is STOPPED_DURING_BPLMN
Line 3794: BPLMN: SI 1 DecodedCellChnDesc
Line 3847: BPLMN: rr_SyncCellList.Lai(%x,%x,%x,%x,%x) Arfcn:%d
Line 3855: SyncCell Contains Same LAI as SCell:  0x%x 0x%x 0x%x
Line 3863: Arfcn:%d has Valid LAI, Remove from BPLMN Search
Line 3873: NCell Contains Invalid LAI:  0x%x 0x%x 0x%x
Line 3920: BPLMN: rr_State: %x rr_BPlmnState: %s: 
Line 3924: BPLMN: rr_State: %x rr_BPlmnState: %s: 
Line 3970: BPLMN:ERROR: Invalid status
Line 4025: BPLMN:ERROR: Invalid status
Line 4076: FPLMN: Invalid Valid Arfcn
Line 4098: BPLMN: BplmnListSize %d
Line 4106: BPLMN: Received PLMN from LIST: %x %x %x
Line 4116: BPLMN: BplmnListSize is ZERO
Line 4121: BPLMN: ReqBandNum %d
Line 4131: BPLMN: ReqBand %d: %s
Line 4142: BPLMN: ReqBand %d %d
Line 4153: BPLMN: NetScan Type:%s, ReqChannelNum:%d
Line 4180: BPLMN: %d) Req Channel %d
Line 4214: BPLMN: Valid Arfcn Added to List
Line 4323: FPLMN: NetScan Type:%s, ReqChannelNum:%d
Line 4328: BPLMN: ReqBandNum %d
Line 4354: BPLMN: ReqBand %d: %s
Line 4376: FPLMN: %d) Req Channel %d
Line 4397: FPLMN: Valid Arfcn Added to List
Line 4408: BPLMN: ReqBand %d %d
Line 4419: Existing HPLMN  0x%x 0x%x 0x%x
Line 4428: PLMN not valid 
Line 4433: New  HPLMN  0x%x 0x%x 0x%x
Line 4439: GRR_MM_UPDATE_ACTING_HPLMN_REQ : ActHplmnValid (%d) 
Line 4447: GRR_MM_UPDATE_ACTING_HPLMN_REQ : %x %x %x
Line 4455: Active HPLMN Param is absent  (%d) 
Line 4472: MCC search: Stored Cell Search
Line 4501: Invalid FreqBand(%d) in function: rr_UpdateDetectedBandMask
