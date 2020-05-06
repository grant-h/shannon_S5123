Line 287: [RR_SRRC]rr_InitSrrcContext
Line 329: [RR_SRRC]rr_CheckIfClientIsRegisteredToSrrc: ClinetId(%d)
Line 378: [RR_SRRC]ClientId is Invalid, Resource request to SRIF not allowed!!!
Line 387: [RR_SRRC]ReqProc[%s] CurrProc[%s] CurrProcState[%s]
Line 393: [RR_SRRC]RR_SRRC_REQ_PROC_REJECT
Line 397: [RR_SRRC]ReqProcAction[%s]
Line 452: [RR_SRRC]CurrProc[%s] CurrProcState[%s]
Line 552: [RR_SRRC]RequestedProcCause(%d)
Line 576: [RR_SRRC]GRR state is already Resumed State
Line 608: [RR_SRRC]rr_MmSuspendRatCnfPending: Ignore start for Cell Selection
Line 630: [RR_SRRC]Peer is Idle/Init, Camping to previous cell(%d)
Line 637: [RR_SRRC]rr_GrrSrrcStartCellSelection: Start Cell Selection
Line 661: [RR_SRRC]rr_MmSuspendRatCnfPending: Ignore resume for Cell Selection
Line 665: [RR_SRRC]rr_GrrSrrcResumeCellSelection: RR is in RR_WPOWER, resume RSSI SCAN procedure
Line 687: [RR_SRRC]rr_GrrSrrcResumeCellSelection: Resume Cell Selection
Line 739: [RR_SRRC]rr_GrrSrrcPauseCellSelection: Abort RSSI SCAN
Line 769: [RR_SRRC]rr_GrrSrrcPauseCellSelection: STOP BCCH READ
Line 785: [RR_SRRC]Cell search already paused due to DSDS Error, Send ACK to SRRC
Line 796: [RR_SRRC] rr_GrrSrrcPauseCellSelection: Pause cell selection is wrong state, rr_State(%d)
Line 821: [RR_SRRC]rr_SrrcStartDiscreteCellSearch: Start Discrete Cell Search
Line 826: [RR_SRRC]RR not proper state to Start Discrete Cell Search
Line 851: [RR_SRRC]rr_SrrcStopDiscreteCellSearch: Start Discrete Cell Search
Line 863: [RR_SRRC]Error Case: Discrete cell search is not on!!!
Line 868: [RR_SRRC]RR not proper state to Start Discrete Cell Search
Line 893: [RR_SRRC]Copy rr_BplmnMsg
Line 920: [RR_SRRC]Release rr_BplmnMsg
Line 928: [RR_SRRC]already released
Line 1042: [RR_SRRC]rr_StartBplmnProcedure: BplmnProcType(%d)
Line 1057: [RR_SRRC]rr_StartBplmnProcedure: Wrong Bplmn Proc(%d)
Line 1083: [RR_SRRC]rr_SaveBplmnRequestForSrrcGrant: Saving Bplmn Msg, rr_BplmnMsg(%d)
Line 1087: ERROR RtkGetMemory returned NULL
Line 1092: [RR_SRRC]rr_BplmnMsg saved
Line 1105: [RR_SRRC]Resel Cause stored(%d)
Line 1121: [RR_SRRC]Wrong Resel Cause stored(%d): REJECT with WAIT
Line 1126: [RR_SRRC] Resel Proc not started, reset to IDLE
Line 1150: [RR_SRRC]Stop BPLMN as Other stack is Busy
Line 1178: [RR_SRRC]rr_GrrAbortIratProcedure: Abort Ongoing Irat Procedure
Line 1199: [RR_SRRC]rr_SaveIratRequestForSrrcGrant: Saving IRAT Message, rr_IratMsg
Line 1209: [RR_SRRC] rr_IratMsg already stored
Line 1215: [RR_SRRC] IRAT Req Msg pointer is NULL
Line 1234: ERROR RtkGetMemory returned NULL
Line 1239: [RR_SRRC]rr_IratMsg saved
Line 1252: [RR_SRRC] rr_IratLteMsg already stored
Line 1258: [RR_SRRC] IRAT Req Msg pointer is NULL
Line 1277: ERROR RtkGetMemory returned NULL
Line 1283: [RR_SRRC]rr_IratLteMsg saved
Line 1290: [RR_SRRC]rr_InterRatStatus Not Valid
Line 1317: [RR_SRRC]CopyIratMsg to trigger IRAT: rr_InterRatStatus(%d)
Line 1328: ERROR RtkGetMemory returned NULL
Line 1343: ERROR RtkGetMemory returned NULL
Line 1373: [RR_SRRC] rr_ReleaseIratMsg: rr_InterRatStatus(%d), rr_IratMsg(%x), rr_IratLteMsg(%x)
Line 1387: [RR_SRRC] rr_IratMsg & rr_IratLteMsg already released
Line 1408: [RR_SRRC]rr_StartIratProcedure: rr_InterRatStatus(%d)
Line 1418: [RR_SRRC] IRAT pointer is NULL
Line 1437: [RR_SRRC] IRAT pointer is NULL
Line 1457: [RR_SRRC] IRAT pointer is NULL
Line 1475: [RR_SRRC] IRAT pointer is NULL
Line 1495: [RR_SRRC] IRAT pointer is NULL
Line 1574: [RR_SRRC]rr_SrrcResumePsSignaling: rr_RlcSuspensionState(%d)
Line 1579: Resume RLC after DSDS Suspend 
Line 1605: [RR_SRRC]rr_SrrcStartPsSignaling: Direction(%d)
Line 1620: MemAlloc fail
Line 1628: [RR_SRRC]Resume RLC after DSDS Suspend 
Line 1658: [RR_SRRC]rr_SrrcStopPsSignaling: Direction(%d)
Line 1672: MemAlloc fail
Line 1786: [RR_SRRC]Suspend Rat CNF is pending, Ignore Signaling procedure.
Line 1790: [RR_SRRC]Process pending NAS Signaling
Line 1810: [RR_SRRC]No Saved Signaling message to Process
Line 1830: [RR_SRRC]rr_SrrcSuspendDataRequest
Line 1859: [RR_SRRC]rr_SrrcSuspendDataCnf
Line 1896: [RR_SRRC]rr_CheckSrrcIfClinetRegisteredAsPassiveRat
Line 1916: [RR_SRRC]rr_SrrcActionHandlerForResReq
Line 1930: [RR_SRRC]rr_SrrcActionHandlerForUpdate
Line 1942: NAS SIG already updated to SRRC, Donot update IDLE to SRRC
Line 1964: rr_WaitSiAfterResel is set, Donot Change SRRC state to IDLE, RESEL continue.
Line 2016: ACCESS In Progress or PS NAS SIG ongoing
Line 2027: GRR is in Packet Transfer State
Line 2064: PS NAS SIG -> PS AS SIG possible with SIG_END
Line 2072: EST REQ pending CS NAS SIG -> PS AS SIG Ignored
Line 2119: Not suitable to update state (%d) when Curr state(%d)
Line 2128: [RR_SRRC]rr_SrrcActionHandlerForResReqGrant
Line 2139: NasSigOng, Continue without requesting Srrc for Cell Selection
Line 2144: Requesting Srrc for Cell Selection
Line 2159: [RR_SRRC]rr_SrrcActionHandlerForResRejWait
Line 2172: Requesting Srrc for Cell Selection
Line 2193: Wait for SRRC grant 
Line 2203: [RR_SRRC]rr_SrrcActionHandlerForResReject: SrrcProc(%d)
Line 2207: [RR_SRRC] BPLMN PROC rejected. Let MM retry again!!!
