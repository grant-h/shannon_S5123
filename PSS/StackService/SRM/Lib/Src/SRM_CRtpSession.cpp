Line 175: +[CONSTRUCTOR] SRM_CRtpSession
Line 202: -[DESTRUCTOR] SRM_CRtpSession Sid(0x%x)
Line 239: [SESSION] [SetSessionState][0x%x] %d => %d
Line 270: [SESSION] [HandleSetSendPort] Sid(0x%x) port(%u)
Line 294: [SESSION] [HandleSetReceivePort] Sid(0x%x) port(%u)
Line 318: [SESSION] [HandleSetRtcpSendPort] Sid(0x%x) port(%u)
Line 342: [SESSION] [HandleSetRtcpReceivePort] Sid(0x%x) port(%u)
Line 404: [CODEC] [HandleSetSendCodec] Sid(0x%x)
Line 431: [SESSION] Unsupported Codec Type!
Line 521: [SESSION] [HandleEnableRtcpOnCall] Sid(0x%x) enable(%d) rtcpRsBw(%d) rtcpRrBw(%d)
Line 569: [HandleSetRtpTimeout] Sid(0x%x) RtpTimeout(%u)
Line 587: SRM_TIMER_RTP_TIMEOUT has not been  registered!!!
Line 607: [HandleSetRtcpTimeout] Sid(0x%x) RtcpTimeout(%u)
Line 627: SRM_TIMER_RTCP_TIMEOUT has not been  registered!!!
Line 667: [HandleSetSrtp] Sid(0x%x) direction(0x%x) profile(%d)
Line 758: [HandleSetRtcpXr] Sid(0x%x) Enable(0x%x) StatFlag(0x%x)
Line 762: [HandleSetRtcpXr] RttMode(%d) MaxLoss(%d) MaxDup(%d) MaxTs(%d) MaxDlrr(%d)
Line 801: Set duration SRM_TIMER_RTCP_XR_SCHEDULE
Line 843: [SESSION] [HandleStartSve] Sid(0x%x)
Line 848: Send START_SVE_RSP with ERROR code due to socket err
Line 892: [SESSION] Start Voice RTP Quality timer
Line 981: [SESSION] [HandleStopSve] Sid(0x%x)
Line 1329: [SESSION] [HandleCallEstablishRsp] Sid(0x%x) status(%d)
Line 1350: [SESSION] HandleCallEstablishRsp is failure : %d
Line 1365: [SESSION] Failed to send resp for CallEstablish!!!
Line 1366: [SESSION] establishedCause : %d
Line 1389: [SESSION] [HandleAlterCodecRsp] Sid(0x%x) status(%d)
Line 1399: [SESSION] HandleAlterCodecRsp is failure : %d
Line 1418: [SESSION] Failed to send resp for AlterCodec!!!
Line 1419: [SESSION] alterCodecCause : %d
Line 1449: [TX<=] [HandleOutgoingRtpPacket] Sid(0x%x) size(%u) pBuf(0x%x) state(%u)
Line 1451: [TX<=] From VCG
Line 1589: [RX=>] [HandleIncomingRtpPacket] Sid(0x%x) state(%d)
Line 1593: [RX=>] mpTransport is NULL!
Line 1777: [SRTP RX] Update Roc(%d)
Line 1813: [RX=>] RESET_REQUIRED
Line 1836: [RX=>] AUTH FAIL!
Line 1843: [RX=>] SSRC is not valid.
Line 1885: [RX=>] Type: 0x%x
Line 1901: [RX=>] [HandleExpiredRtpTimeout] Sid(0x%x)
Line 1918: [RX=>] [HandleExpiredRtcpTimeout] Sid(0x%x)
Line 1937: [TX<=] [HandleExpiredRtcpSchedule] Sid(0x%x)
Line 1945: [TX<=] scheduledEvent: %d
Line 2081: [TX<=] [HandleExpiredRtcpXrSchedule] Sid(0x%x)
Line 2085: [RX=>] mpTransport is NULL!
Line 2407: Set duration SRM_TIMER_RTCP_XR_SCHEDULE
Line 2432: [RX=>] [HandleExpiredT140RxBuffering] Sid(0x%x)
Line 2448: [RTP-RED-RX] Need to restart timer!
Line 2463: [RTP-RED-RX] Missing SeqNum(%d)
Line 2585: [RX=>] [HandleExpiredRtpRxStatistics] Sid(0x%x)
Line 2612: [RX=>] [HandleExpiredRtpRxStatistics] extendedmax (%d) expected (%d) received (%d) lost (%d)
Line 2619: [RX=>] [HandleExpiredRtpRxStatistics] Threshold (%d) PacketLossRate(%d)
Line 2649: [RX=>] [CalculateJitterThreshold] Sid(0x%x) Jitter(%d)
Line 2671: [RX=>] [HandleIncomingRtcpPacket] Sid(0x%x)
Line 2713: [HandleSetAmrBitRate] Sid(0x%x) bitRate(%d) modeset(0x%x)
Line 2735: [HandleSetAmrBitRate] ERR_INVALID_PAMAMETER!!
Line 2789: [BR] Sid(0x%x) D(%d) SMin(%d) SMax(%d) RMin(%d) RMax(%d)
Line 2792: [BW] Sid(0x%x) Mode(%d) D(%d) S(%d) R(%d)
Line 2828: [HandleSetEvsBitRate] ERR_INVALID_PAMAMETER!!
Line 2848: [HandleEnableDtx] Sid(0x%x) enable(%d)
Line 2857: [HandleEnableDtx] ERR_INVALID_PAMAMETER!!
Line 2885: [HandleSetPacketizationMode] Sid(0x%x) mode(%d)
Line 2886: [HandleSetPacketizationMode] Codec name
Line 2894: [HandleSetPacketizationMode] ERR_INVALID_PAMAMETER!!
Line 2917: [HandleSetTxCmr] Sid(0x%x) cmr(%u)
Line 2927: [HandleSetTxCmr] ERR_INVALID_PAMAMETER!!
Line 2948: [HandleGetRtpStatistics] Sid(0x%x)
Line 2961: [SESSION] extendedMax: %u
Line 2964: [SESSION] expected: %u
Line 2967: [SESSION] received: %u
Line 2975: [SESSION] expectedInterval: %d
Line 2979: [SESSION] receivedInterval: %d
Line 2983: [SESSION] lostInterval: %d
Line 2988: [SESSION] fraction: %u
Line 3001: pSsrc is NULL!!!
Line 3021: [DTMF] [HandleAddDtmfEvent] Sid(0x%x) evtId(%d) mode(%d)
Line 3024: [DTMF] Success AddEventID eventId: %d
Line 3026: [DTMF] Fail AddEventID eventId: %d
Line 3043: [DTMF] [HandleSetDtmfMode] Sid(0x%x) iInBand(%d)
Line 3064: [DTMF] Sid(0x%x) txType(%d) rxType(%d)
Line 3072: [DTMF] Success Set Dtmf Duration
Line 3076: [DTMF] Failed to get Send Codec info
Line 3156: [RTCP-APP] Length of App data(%d)
Line 3157: [RTCP-APP] App data 
Line 3196: [RTCP-APP] Handle Redundancy Request Data(0x%x)
Line 3215: [RTCP-APP] Redundancy is not supported
Line 3232: [RTCP-APP] Handle Frame Aggregation Data(0x%x)
Line 3284: [RTCP-APP] Handle EVS Primary Rate Data(0x%x)
Line 3293: [RTCP-APP] not supported on EVS AMR-WB IO
Line 3310: [RTCP-APP] Handle EVS Bandwidth Data(0x%x)
Line 3371: [RTCP-APP] reqBw(0x%x) currBw(0x%x) resultBw(0x%x),
Line 3375: [RTCP-APP] No negotiated bandwidth
Line 3389: [RTCP-APP] Bandwidth i(%d), BW(0x%x)
Line 3399: [RTCP-APP] supported only EVS Primary mode
Line 3421: [RTCP-APP]&[CMR] EVS Channel Aware Data(0x%x)
Line 3439: [RTCP-APP] Handle EVS Primary to EVS AMR-WB IO
Line 3454: [RTCP-APP] Request (0x%x), Converted (0x%x)
Line 3463: [RTCP-APP] Currently EVS AMR-WB IO mode, Not changed
Line 3480: [RTCP-APP] Handle EVS AMR-WB IO to EVS Primary
Line 3491: [RTCP-APP] Request denied, negotiated value fail
Line 3496: [RTCP-APP] Currently EVS Primary mode, request denied
Line 3571: [eVoLTE] [%s] Header Size: %d bits, Bit Rate: %d kbps
Line 3634: [HandleChannelAwareInd] hiLow(%u) offset(%u)
Line 3686: [HandleSetPacketThresholdReq] Sid(0x%x) threshold(%u)interval(%u)
Line 3706: SRM_TIMER_RTP_RX_STATISTICS_INTERVAL has not been registered!!!
Line 3730: [HandleSetJitterThresholdReq] Sid(0x%x) jitter(%u) 
Line 3733: [HandleSetJitterThresholdReq] mpRtpPayload is NULL!
Line 4172: [DTMF] [HandleSetDtmfClockRate] Sid(0x%x) iType(%d)
Line 4178: [DTMF] Success Set Dtmf Clock Rate
Line 4182: [DTMF] Failed No RTP Session
Line 4310: [RX=>] transitCurrent(0x%x %x) diff(%d) jitter(%d)
Line 4352: [RTP-RED-RX] missingCount(%d) redLevel(%d) i(%d)
Line 4381: [RTP-RED-RX] missingCount(%d) redLevel(%d)
Line 4478: [RTP-RED-RX] Buffering Timer is running!
Line 4597: [RX=>] RESET_REQUIRED DB_SSRC(0x%x), RX_SSRC(0x%x)
Line 4650: [RX=>] DUMP Data
Line 4660: [RX=>] Decode Result(%d)
Line 4697: [Set IMS F/T] R/T(%u) S/T(0x%x %x) R/S(%u)
Line 4701: [RX=>] Non-receiving state!
Line 4718: [RX=>] Undefined Payload type
Line 4724: [RX=>] Stop and Start SRM_TIMER_RTP_TIMEOUT
Line 4762: [ProcessRtcpCompoundPacket] mSrtpDirection(0x%x)
Line 4824: [ProcessRtcpCompoundPacket] Type(%d)
Line 4875: Unknown RTCP Packet Type: %d
Line 4885: Total Packet Size(%d) Sum of Length Field(%d)
Line 4890: [RX=>] Stop and Start SRM_TIMER_RTCP_TIMEOUT
Line 4906: [ProcessRtcpCompoundPacket] AUTH FAIL!
Line 4935: [RX=>] SR Packet Size: %u
Line 5002: [RX=>] round-trip delay : 0x%x
Line 5061: [RX=>] RR Packet Size: %u
Line 5128: [RX=>] round-trip delay : 0x%x
Line 5161: [RX=>] SDES Packet Size: %u
Line 5233: [RX=>] BYE Packet Size: %u
Line 5306: [RX=>] APP Packet Size: %u
Line 5346: [RX=>] XR Packet Size: %u
Line 5599: [ProcessReleaseCall] Sid(0x%x)
Line 5618: This is the case last call is located on VCE.
Line 5619: VCE will release VCG and JBM
Line 5711: [ProcessCallQualityInfoInd]PLR(%2d.%2d), JITT(%d), BITR(%d), FractionLost(%d)
Line 5720: [ProcessCallQualityInfoInd] no Rx SSRC, no Call Quality Indication
Line 5793: [TX<=] [GenerateRtpPacket]
Line 5878: [TX<=] payloadHeaderSizeInBit(%u) paddingSize(%u)
Line 5979: [TX<=] [GenerateDtmfPacket]
Line 6037: [TX<=] [GenerateRtcpSrPacket]
Line 6113: [TX<=] [GenerateRtcpRrPacket]
Line 6194: [TX<=] extendedMax: %u
Line 6196: [TX<=] expected: %u
Line 6202: [TX<=] received: %u
Line 6212: [TX<=] lost: %d
Line 6220: [TX<=] expectedInterval: %d
Line 6224: [TX<=] receivedInterval: %d
Line 6228: [TX<=] lostInterval: %d
Line 6233: [TX<=] fraction: %u
Line 6284: [TX<=] [GenerateRtcpSdesPacket]
Line 6360: [TX<=] [GenerateRtcpByePacket]
Line 6473: [SSRC_COLLISION] result: %d
Line 6506: [SESSION] [ProcessSsrcCollisionCheck] Sid(0x%x)
Line 6570: [SESSION] [RegisterOwnSsrc] ipType(%d) ssrc(%u)
Line 6642: [SESSION] CloseJbm (0x%x)
Line 6650: JBM has been released already!
Line 6668: [SESSION] OpenJbm : freq(%u)
