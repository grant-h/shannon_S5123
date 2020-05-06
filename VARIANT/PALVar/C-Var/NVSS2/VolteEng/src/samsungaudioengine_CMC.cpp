Line 85: [SAE] SAE_Init (TaskID:%d)
Line 104: [SAE] SAE_Terminate
Line 126: [SAE] SAE_SetOperatingMode: mode(%d)
Line 150: [SAE] SAE_CreateChannel (channel:%d), (OM:%d)
Line 170: [SAE] SAE_DeleteChannel (channel:%d)
Line 194: [SAE] SAE_GetChannelCnt(%d)
Line 218: [SAE] SAE_CreateStream (channel:%d, ssrc = %d)
Line 240: [SAE] SAE_DeleteStream (channel:%d, stream = %d)
Line 262: [SAE] SAE_SetSendSSRC (channel:%d, ssrc = %d)
Line 284: [SAE] SAE_SetSendPort (channel:%d, portnr = %d)
Line 306: [SAE] SAE_GetSendPort (channel:%d)
Line 328: [SAE] SAE_SetRecPort (channel:%d, portnr = %d)
Line 348: [SAE] SAE_GetRecPort (channel:%d)
Line 368: [SAE] SAE_SetRTCPSendPort (channel:%d, portnr = %d)
Line 388: [SAE] SAE_GetRTCPSendPort (channel:%d)
Line 410: [SAE] SAE_SetRTCPRecPort (channel:%d, portnr = %d)
Line 432: [SAE] SAE_GetRTCPRecPort (channel:%d)
Line 465: [SAE] SAE_SetSendIP (channel:%d, remoteip:%s, localip:%s)
Line 493: [SAE] SAE_GetSendIP (channel:%d, ipadr:0x%08x, bufsize:%d)
Line 514: [SAE] SAE_ReconfigIPPort (channel:%d)
Line 543: [SAE] SAE_SetSendCodec (channel:%d)
Line 568: [SAE] SAE_GetCurrentSendCodec (channel:%d)
Line 596: [SAE] SAE_GetCodec (listnr:%d)
Line 615: [SAE] SAE_GetCodecCnt
Line 622: [SAE] SAE_SetIPPktLoopback (mode:%d)
Line 671: [SAE] SAE_StartFDSR (channel:%d, status:%d, enableIPv6:%d)
Line 695: [SAE] SAE_StopFDSR (channel:%d)
Line 732: [SAE] SAE_EnableSRTP (channel:%d, direction:%d, profile:%d, key:0x%08x, keylen:%d)
Line 889: [SAE] SAE_SetVEStatus (iChannel:%d, veStatus:%d)
Line 896: [SAE] SAE_EnableRTPPinhole (channel:%d, mode:%d)
Line 1016: [SAE] SAE_GetLastError
Line 1022: [SAE] SAE_GenNTPTimestamp (rtcp_ntp_ls:%u, rtcp_ntp_ms:%u)
Line 1037: [SAE] SAE_SetAVSync (%s)
Line 1049: [SAE] SAE_GetRXVoiceTime (channel:%d, LastPlayedRTPtimestamp:%u, LastPlayedSysTime:%u)
Line 1056: [SAE] SAE_SetRXVoiceDly (channel:%d, msec:%u)
Line 1072: [SAE] SAE_GetDTMFSupport
Line 1093: [SAE] SAE_GetDTMFDecodeNamedEventSupport
Line 1117: [SAE] SAE_SetDTMFMode (channel:%d, iInBand:%d)
Line 1143: [SAE] SAE_SetDTMFPayloadType (channel:%d, iType:%d)
Line 1150: [SAE] SAE_SetDTMFPayloadType (channel:%d, iType:%d, rx_typoe :%d)
Line 1179: [SAE] SAE_SendDTMF (iEventNr:%d, channel:%d, cont_mode:%d, cont_event:%d)
Line 1203: [SAE] SAE_SetTOS (channel:%d, tos:%d)
Line 1227: [SAE] SAE_EnableRTCP (channel:%d, enable:%d)
Line 1251: [SAE] SAE_EnableRTCPOnCall (channel:%d, enable:%d,RTCP_RR_BW:%d, RTCP_RS_BW:%d)
Line 1301: [SAE] SAE_SetEventHandler
Line 1322: [SAE] SAE_SetRTPRecvHandler
Line 1343: [SAE] SAE_SetRTPSendHandler
Line 1365: [SAE] SAE_SetIntervalNotiHandler
Line 1385: [SAE] SAE_SetRTCPRecvHandler
Line 1457: [SAE] SAE_SetPacketizationMode (channel:%d, codecName: 0x%08x, mode:%d
Line 1784: [SAE] SAE_SetRTPTimeout(ch:%d, sec: %u )
Line 1790: [SAE] SAE_SetRTCPTimeout(ch:%d, sec: %u )
Line 1903: [SAE] SAE_SetAMRBitRate(channel: %d, amrBitrate: %d, modeset: %d)
Line 1924: [SAE] SAE_SetEVRCBBitRate(channel: %d, evrcbTgtBitrate: %d )
Line 1944: [SAE] SAE_SetEvrcbEOP(channel: %d, evrcbEop: %d )
Line 1965: [SAE] SAE_SetEvrcbMcr(channel: %d, evrcbMcr: %d )
Line 1986: [SAE] SAE_SetEvrcbEOPBaseStation(channel: %d, evrcbEop: %d )
Line 2008: [SAE] SAE_EnableDtx (channel:%d, enable:%d)
Line 2031: [SAE] SAE_SetAMRTxCMR (channel:%d, CMR:%d)
Line 2233: [SAE] SAE_SetDSPDecoderCount (Count:%d)
Line 2237: [SAE] SAE_SetDSPDecoderCount (Count:%d) => ERR out of range
Line 2249: DSP_INTF_VocEnc (EncPkt_Out:0x%08x, dsp_enc_rate:%d, dsp_dtx_mode:%d)
Line 2256: DSP_INTF_VocEnc (preRate:%d, curRate:%d, preDtx:%d, curDtx:%d)
Line 2285: DSP_INTF_VocDec (DecPkt_in:0x%08x, payloadLen:%d, SampFreq:%d)
Line 2294: Exceeding allocated memory for buf_RxDecIn_VoLTE
Line 2307: DSP SPD stuck
Line 2314: DSP SPD delay Count(%d)
Line 2332: DSP_INTF_RxPCMOut (SampFreq:%d)
Line 2350: [SAE_CODE] class: %d, type: %d, msg: %d, order: %d, tmp: %d
Line 2372: format error:max char exceed
Line 2377: 
