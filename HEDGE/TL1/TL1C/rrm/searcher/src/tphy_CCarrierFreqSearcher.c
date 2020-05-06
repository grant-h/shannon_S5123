Line 254: CFS:Timeout Count:%u
Line 257: CFS:Guard Timeout:Carrier Freq Srch
Line 262: CFS:Guard Timeout:MessageTransceiver send failed
Line 294: CFScan:Guard Timeout:
Line 300: CFScan:Guard Timeout:MessageTransceiver send failed
Line 312:  prcsCFSPauseReq: %x 
Line 384: prcsCFSResumeReq: %x 
Line 400: CFS: ============= Resume Pre Freq Scan ================
Line 414: ETphySearcherMsgId_CFS
Line 433: prcsCFSResumeReq->uarfcnToProcess: %d
Line 434: prcsCFSResumeReq->uarfcnProcesss: %d
Line 436: prcsCFSResumeReq ->uarfcnIndexCtr: %d
Line 473: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 497: Submit another DWPTS request: CarrierFreqSearcher_ptr->uarfcnIndexCtr %d 
Line 504: prcsCFSResumeReq:wrong state!!
Line 534: CFS: uarfcn %d energy %d
Line 538: CFS: uarfcn %d energy %d
Line 547:  CFSResumeReq:Cant send replyMessage 
Line 564: prcsCarrierFreqScanPauseReq: %x 
Line 610: prcsCarrierFreqScanResumeReq: %x 
Line 616:  ETphySearcherMsgId_CarrierFreqScan
Line 634: prcsCarrierFreqScanResumeReq->uarfcntoProcess: %d
Line 635: prcsCarrierFreqScanResumeReq->uarfcnProcessed: %d
Line 637: processCarrierFreqScanResumeReq ->uarfcnIndexCtr: %d
Line 648: Submit another DWPTS req: CarrierFreqSearcher_ptr->uarfcnIndexCtr %d 
Line 656: prcsCarrierFreqScanResumeReq:wrong state!!
Line 686: CFS: Scan uarfcn %d energy %d
Line 690: CFS: Scan uarfcn %d energy %d
Line 699: CFScanResumeReq:Cant send replyMessage 
Line 725: CFS Req: CFS mode =%d, Uarfcn Start =%d, Uarfcn End = %d
Line 844: CarrierFreqSearcher_ptr->replyMessage == NULL
Line 1012: CFS:prcsCFSReq:confirmMsg == NULL pointer
Line 1027: CFS:prcsCFSReq:Cant send Cnf Msg
Line 1051: CFS: ============= Start Pre Freq Scan ================
Line 1124: CFS_ptr->freqscan_replyMsg is NULL
Line 1164: Carrier Freq Scan list: %d
Line 1176: confirmMsg == NULL pointer
Line 1193: Cant send Cnf Msg
Line 1238: send rssiReqMsg FreqList[%d] = %d
Line 1297: CFS:prcsRssiMsmtRep: Error:Already processed index %d
Line 1312: CFS:prcsRssiMsmtRep:rssiReqMsg == NULL pointer
Line 1327: CFS:Cant send RSSI Request
Line 1353: CFS:tphy_CMsgTransceiver_send failed
Line 1408: CFScan:prcsRssiMsmtRep: Error:Already processed index %d
Line 1423: CFS:rssiReqMessage == NULL pointer
Line 1438: CFS:Cant send RSSI Request
Line 1464: CFS:CMessage Transceiver send failed
Line 1486: CFS: Dwpts Request
Line 1502: CFS:DwptsReqMsg == NULL pointer
Line 1524: CFS:Cant send Dwpts Request
Line 1559: CFS:DwptsReqMsg == NULL pointer
Line 1579: CFS:DwptsReqMsg : small winodow
Line 1586: CFS:DwptsReqMsg : full winodow
Line 1593: CFS:Cant send Dwpts Request
Line 1609: CFS: Dwpts Measurement Report
Line 1613: CFS: Ignore DwPts Rsp as Rf is Paused
Line 1693: CFS:DwptsReqToScheduler:Already processed index %d
Line 1730: Submit another DWPTS req CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 1738: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 1758: Submit another DWPTS req CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 1794: CFS: uarfcn %d energy %d
Line 1798: CFS: uarfcn %d energy %d
Line 1809: LatchEutraTimeByMsg: Cant send replyMessage 
Line 1836: CFScan: Ignore DwPts Rsp as Rf is Paused
Line 1843: freqscan_replyMessage Null
Line 1921: CFScan:DwptsReqToScheduler:Already processed index %d
Line 1970: CFScan: uarfcn %d energy %d
Line 1974: CFScan: uarfcn %d energy %d
Line 1983: CFScan prcs Msmt Rep: Cant send replyMessage 
Line 2000: CFS:RfSettling token:
Line 2018: Hal RSSI  = %d, RSSI_dBm= %d and RSSI reported to RRC = %d 
Line 2057: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 2106: CFS: uarfcn %d rssi %d
Line 2110: CFS: uarfcn %d rssi %d
Line 2121: CFS: Cant send replyMessage 
Line 2148: CFScan:RfSettling token:
Line 2166: Hal RSSI  = %d and RSSI reported to RRC = %d 
Line 2209: CFScan: uarfcn %d energy %d
Line 2213: CFScan: uarfcn %d energy %d
Line 2222: CFScan: Cant send replyMessage 
Line 2246: CFS: CarrierFreqSearcher is NULL !!!
Line 2253: CFS: uarfcn %d lastRequestedUarfcn %d 5msRssi %d
Line 2295: CFS: measuredUarfcn = 0
Line 2311: CFS: set uarfcn = %d
Line 2358: CFS: CarrierFreqSearcher is NULL !!!
Line 2369: CFS: ============= Start CFS with selected UARFCNs ================
Line 2374: CFS: maxUarfcnIndex=%d uarfcnIndexCtr=%d uarfcnToProcess=%d
Line 2398: CFS: highest power (uarfcn=%d) is too low (%d dBm) => start normal CFS for %d uarfcns !!!
Line 2410: CFS: preCfsResults[%d].uarfcn=%d
Line 2421: CFS: DwptsReq for %d !!!
Line 2426: CFS: CarrierFreqSearcher cannot schedule DwptsReq !!!
Line 2437: CFS: CarrierFreqSearcher cannot schedule DwptsReq !!!
Line 2450: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 2485: CFS: uarfcn %d rssi %d
Line 2489: CFS: uarfcn %d rssi %d
Line 2506: CFS: Cant send replyMessage 
Line 2561: CFS:PrcsMsgSendError:Message Transceiver send failed
Line 2597: CFScan:PrcsMsgSendError:MessageTransceiver send failed
Line 2639: CFS_SendNegCnf: sending Ind to RRC as LONG PAUSE is encountered
Line 2663: CFS Send Neg Cnf: no request msg to send cnf!
Line 2700: FreqScan SendNegCnf: sending Indication to RRC as LONG PAUSE is encountered
Line 2717: FreqScan SendNegCnf: no request msg to send cnf!
Line 2736: CFS:Timeout:Blind Cell Searcher Timeout
Line 2744: CFS:Timeout:MessageTransceiver send failed
Line 2772: CFScan:Timeout:Blind Cell Searcher Timeout
Line 2778: CFScan:Timeout:MessageTransceiver send failed
Line 2822: BPLMN: CFS:SendNegCnf as LONG PAUSE
Line 2832: BPLMN:  MessageTransceiver_send failed
Line 2853: no request msg to send cnf!
Line 2859:  BPLMN: CFS PauseRequest: %x 
Line 2929: BPLMN: CFS Resume Request %x 
Line 2945: CFS: ============= Resume Pre Freq Scan ================
Line 2979: BPLMN: CFS Resume Request->uarfcnToProcess: %d
Line 2980: BPLMN: CFS Resume Request->uarfcnProcesss: %d
Line 2982: BPLMN: CFS Resume Request ->uarfcnIndexCtr: %d
Line 3019: CFS: CarrierFreqSearcher skip UARFCN=%d !!!
Line 3045: BPLMN: CFS Resume:Submit another DWPTS request 
Line 3057: BPLMN: CFS Resume Request Submit another RSSI request if more are required : CarrierFreqSearcher_ptr->uarfcnIndexCtr %d 
Line 3066: BPLMN: CFS Resume Request:wrong state!!
Line 3096: BPLMN: CFS Resume  uarfcn %d rssi %d
Line 3100: BPLMN: CFS Resume  uarfcn %d rssi %d
Line 3116: CFS BPLMN: Cant send replyMessage 
Line 3145: BPLMN: CFS Req: CFS mode =%d, Uarfcn Start =%d, Uarfcn End = %d
Line 3173: BPLMN: CFS Req: uarfcnToProcess = %d ( >68)
Line 3189: BPLMN: CFS Req: uarfcnToPrcs is Negative Value
Line 3200: BPLMN: CFS Req: uarfcnToProcess = %d ( >68)
Line 3216: BPLMN: CFS Req: uarfcnToPrcs is Negative Value
Line 3227: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3243: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3254: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3260: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3271: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3277: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3288: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3294: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3305: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3311: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3322: BPLMN: CFS Req: uarfcnToProcess = %d ( >93)
Line 3328: BPLMN: CFS Req: uarfcnToProcess is Negative Value
Line 3346: BPLMN: CFS Req: Unknown CFS Mode =%d
Line 3354: BPLMN: CFS Req: replyMessage is NULL
Line 3369: BPLMN: CFS Req: rssiArray is NULL or uarfcnToProcess is ZERO
Line 3403: BPLMN: CFS:confirmMsg == NULL pointer
Line 3422: BPLMN: CFS:processCFSReq:Cant send Cnf Msg
Line 3443: CFS: ============= Start Pre Freq Scan ================
Line 3505: CFS:DwptsReqToScheduler:DwptsReqMessage == NULL pointer
Line 3527: CFS:DwptsReqToScheduler:Cant send Dwpts Request
Line 3623: CFS:DwptsReqToScheduler:Already processed index %d
Line 3660: CFS: DwptsReqToScheduler: Submit another DWPTS req CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 3668: CFS: DwptsReqToScheduler: CarrierFreqSearcher skip UARFCN=%d !!!
Line 3688: CFSprocessDwptsMR Submit another DWPTS request if more are required CarrierFreqSearcher_ptr->uarfcnIndexCtr%d 
Line 3725: CFS: uarfcn %d RSSI %d
Line 3729: CFS: uarfcn %d RSSI %d
Line 3746: EutraTimeReference LatchEutraTimeByMsg: Cant send replyMessage 
Line 3771: CFS:RfSettling token:
Line 3791: Hal RSSI  = %d, RSSI_dBm= %d and RSSI reported to RRC = %d 
Line 3830: CFS:RfSettling CarrierFreqSearcher skip UARFCN=%d !!!
Line 3880: CFS: uarfcn %d rssi %d
Line 3884: CFS: uarfcn %d rssi %d
Line 3900: CFS: Cant send replyMessage 
Line 3928: BPLMN: CFS:BPLMN RSSI ReqTo Scheduler:rssiReqMessage == NULL pointer
Line 3944: BPLMN: CFS:Cant send RSSI Request
Line 3983: BPLMN:Hal RSSI  = %d and RSSI reported to RRC = %d 
Line 3988: BPLMN: CFS:prcsRssiMsmtRep: Error:Already processed index %d
Line 4028: BPLMN: CFS: uarfcn %d energy %d
Line 4030: BPLMN: CFS: uarfcn %d energy %d
Line 4042: BPLMN: CFS:prcsRssiMsmtRep:tphy_CMessageTransceiver_send failed
Line 4077: BPLMN: CFS:ProcessMessageSendError:tphy_CMessageTransceiver_send failed
Line 4097: BPLMN: CFS Timeout
Line 4100: BPLMN: CarrierFreqSearcher_ptr is NULL
Line 4125: BPLMN: CFS:Timeout:Message Transceiver send failed
