Line 299: pPdpData is NULL
Line 313: +CGDCONT: Unknown PDP type string = 
Line 342: +CGDCONT: Invalid PDP addr len %d
Line 349: +CGDCONT: NULL or Missing PDP Address - setting pdp address to dynamic
Line 360: +CGDCONT: invalid d_comp = %d
Line 376: +CGDCONT: invalid h_comp = %d
Line 393: +CGDCONT: invalid IPv4AddrAlloc = %d
Line 412: +CGDCONT: invalid IP type = %d, Pdp Address Length = %d
Line 421: +CGDCONT: Invalidate PDP Context cid = %d
Line 429: +CGDCONT: invalid ParamMask = %x
Line 449: +CGDCONT: Missing cid
Line 640: +CGDSCONT: Invalid cid %d
Line 651: +CGDSCONT: Invalid primary cid %d
Line 664: +CGDSCONT: invalid d_comp = %d
Line 677: +CGDSCONT: invalid h_comp = %d
Line 702: pPdpData is NULL
Line 960: Received PrecedenceClass = %d, DelayClass = %d, ReliabilityClass = %d, PeakThroughput = %d, MeanThroughput = %d
Line 970: +CGQREQ: CheckParamStatus %d
Line 1013: set parameter ERROR status
Line 1025: Initialise requested QOS parameters
Line 1031: +CGQREQ: invalid ParamMask %x
Line 1037: +CGQREQ: QOS Parameters
Line 1051: +CGQREQ: Missing cid %d
Line 1062: pPdpData is NULL
Line 1224: +CGQMIN: CheckParamStatus %d
Line 1267: set parameter ERROR status
Line 1279: Initialise requested QOS parameters
Line 1285: +CGQMIN: invalid Parameter
Line 1291: +CGQMIN: QOS Parameters
Line 1306: +CGQMIN: Missing cid %d
Line 1317: pPdpData is NULL
Line 1622: +CGEQMIN: Invalid ParamMask %x
Line 1628: +CGEQMIN: MinQOS Parameters
Line 1636: +CGEQMIN: Missing cid %d
Line 1735: +CGEQREQ: CheckParamStatus %d
Line 1839: MemAlloc fail
Line 1858:  TrafficClass = %d <%d>,MaxBitRateUplink = %d <%dk>,MaxBitRateDownlink = %d <%dk>
Line 1864: -GuaranteedBitRateUplink = %d <%dk>, GuaranteedBitRateDownlink = %d <%dk>
Line 1870: -MaxBitRateDownlinkExt = %d <%dk>, GuaranteedBitRateDownlinkExt = %d <%dk>
Line 1877: -MaxBitRateUplinkExt = %d <%dk>, GuaranteedBitRateUplinkExt = %d <%dk>
Line 1883: - DeliveryOrder = %d <%d>,MaxSduSize = %d <%d>
Line 1895: -SduErrorRatio = %d   
Line 1896: -ResidualBER = %d 
Line 1904: - DeliveryOfErrSdu = %d <%d>, TransferDelay = %d <%d>,TrafficHandlingPriority = %d <%d>
Line 1909: - SourceStatisticsDescriptor = %d <%d>,SignallingIndication = %d <%d>
Line 2295: +CGEQREQ: Invalid Parameters
Line 2355: pPdpData is NULL
Line 2530: +CGEQREQ: Invalid Parameters
Line 2592: pPdpData is NULL
Line 3124: AtiSendDetachReq: DetachType = %d
Line 3129: MemAlloc fail
Line 3151: Command Timer Started [%s] [%d]
Line 3208: MemAlloc fail
Line 3227: Command Timer Started [%s] [%d]
Line 3243: [ATI_GPRS] Tx NS_PDN_CONNECTIVITY_REQ (Flag=0x%X, CID=%d, PDP Type=0x%X, APN=)
Line 3244: SEND PDN request
Line 3248: [ATI_GPRS] Tx NS_PDN_CONNECTIVITY_REQ Invalid CID:%d
Line 3255: [ATI_GPRS] Tx NS_PDN_CONNECTIVITY_REQ already
Line 3268: [ATI_GPRS] Forced Set Cid:%d, Sid:%d
Line 3277: [ATI_GPRS] Cid:%d, NsSId %d
Line 3283: MemAlloc fail
Line 3290: Invalid CID: %d 
Line 3336: VzW Requirement : Emm Staus is Roam, So changing PDP Type as IPv4
Line 3355: Mem free Error(pMsg)
Line 3356: [ATI_ERR] AtiSendInitialPdnConnectivityReq() : Invalid PDP type(=0x%X)
Line 3369: MemAlloc fail
Line 3385: atiLteAttachTriggered - PdnRequest.
Line 3426: +CGATT: CgattState = %d
Line 3442: AtiCmdPlusCGATT(): EPS handler for Attach
Line 3449: Init Attach --> SendPdnConnectivityReq
Line 3476: pPdpData is NULL
Line 3483: [ATI] CM Attach. atiInternalAttachValid = TRUE
Line 3498: +CGATT:GPRS handler for Attach
Line 3527: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 3534: [ATI] CM NormalDetach. atiInternalAttachValid = FALSE
Line 3551: +CGATT: GPRS handler for Detach
Line 3608: +CGCMOD: CheckParamStatus %d
Line 3635: pPdpData is NULL
Line 3638: Command Timer Started [%s] [%d]
Line 3643: CGMOD parameter error
Line 3914: Update Secondary PDP PCO auth paramsc for cid=%d
Line 3919: Update Primary PDP PCO auth paramsc for cid=%d
Line 3924: Define PDP context first using +CGDCONT
Line 3932: Return Success when only cid is given. Previously Set Auth setting will be used for cid %d
Line 3956: Parameters Out Of Range
Line 3979: Parameters Out Of Range
Line 3997: Mandatory Parameter: Cid Not Given
Line 4069: Parameter out of range!!
Line 4114: MemAlloc fail
Line 4137: MemAlloc fail
Line 4155: MemAlloc fail
Line 4203: CGANS parameter error.
Line 4260: +CGDATA: sending data, already PDP activated
Line 4287: +CGDATA: unspecified cid
Line 4340: MemAlloc fail
Line 4358: Command Timer Started [%s] [%d]
Line 4440: AtiCmdPlusCGPADDR: uCidListLen = 0
Line 4482: AtiCmdPlusCGPADDR CID: %d PdpAddress: %s
Line 4504: +CGPADDR: Invalid cid %u at list index %d 
Line 4776: MemAlloc fail
Line 4796: Command Timer Started [%s] [%d]
Line 4895: pPdpData is NULL
Line 4902: Command Timer Started [%s] [%d]
Line 5100: Invalid CID %d
Line 5125: cid = %d, DPort = %d.%d, SPort = %d.%d
Line 5128: source address, 0,1,2,3 = %d.%d.%d.%d
Line 5129: subnet mask address, 4,5,6,7 = %d.%d.%d.%d
Line 5134: TOS = %d.%d
Line 5175: Direction = %d
Line 5194: pPdpData is NULL
Line 5343: +CGEQOS : Invalid ParamMask = %x
Line 5357: cid = %d,QCI = %d, GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5380: pPdpData is NULL
Line 5385: +CGEQOS: Missing cid %d
Line 5697: Inside AtiCmdPlusCGEQOSRDP
Line 5724: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5745: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5773: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5801: Nw initiated Dedicated bearer-cid = %d,QCI = %d,GuaranteedBitRateDownlink = %d,GuaranteedBitRateUplink = %d, MaxBitRateDownlink = %d ,MaxBitRateUplink = %d 
Line 5816: Inside AtiCmdPlusCGTFTRDP
Line 6002: PdpType %d
Line 6100: cidState %d, Cid count %d
Line 6104: cid_defined_table[%d]: %d 
Line 6117: cid_defined_table[%d]: %d
Line 6151: AtiCallStatus: Cid[%d] call_mode=%d, call_state=%d
Line 6167: AtiCidIndex: CidIdx[%d] cid=%d, ActState=%d, sec_cid=%d
Line 6321: MemAlloc fail
Line 6997: AtiGetDataCompression: invalid dComp %d
Line 7017: AtiGetHeaderCompression: invalid - hComp = %d
Line 7039: MemAlloc fail
Line 7046: Invalid CID: %d 
Line 7053: Invalid CID: %d 
Line 7066: Primary Cid = %d found for secondary cid = %d
Line 7082: pal MemFree EpsQosParams!
Line 7090: MemAlloc fail
Line 7107: pal MemFree TFT_Sec_Params!
Line 7110: NS_BEARER_RESOURCE_ALLOCATION_REQ, Sid=%d,LinkedSid =%d
Line 7113: [ATI] CGACT Activate. atiLteAttachTriggered = TRUE
Line 7121: Msg send fail
Line 7157: Nsapi %d, cid %d, PsRegStatus%d
Line 7175: Buffer Created Successfully
Line 7180: Buffer Successfully sent
Line 7207: CGATT parameter error.
Line 7220: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 7261: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 7313: RAT = %d, LTE Attach Status = %d, Service Domain = %d
Line 7356: SId = %d, TempSId = %d 
Line 7378: - Mailbox for RABM to send data to = %d, SndcpBufferOverheadLength = %d, SndcpBufferStartOffset = %d
Line 7417: AtiGprsRelayInit: PDP_CONTEXT, cid = %d, PDP_type = %d
Line 7418: - APN         = 
Line 7419: - PDP_address = 
Line 7420: d_comp = %d, h_comp = %d
Line 7539: [PDNM] Tx NS_GENERAL_GPRS_AP_INFO to NS (IpcMsgType = %d)
Line 7544: MemAlloc fail
Line 7566: [PDNM] Sending to NS is not OK
