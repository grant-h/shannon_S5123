Line 194: IMS_CC_ConvertBitRate: Received invalid frequency
Line 317: [chdb] chid(%d) isTriggeredLocally(%d)
Line 323: [chdb] isTriggeredByIms(%d) Status(%d) ipv6(%d)
Line 327: [SRVCC]current #of used ch (%d)
Line 353: Invalid Channel ID = %d received from AP
Line 365: Invalid Channel ID = %d received from AP
Line 521: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 531:  Sending CallStatus=%s(%d) to MMC
Line 577: - 	 IMS_CC_GetBitRateMap: bitrate=%d
Line 627: IMSCC_CHNL_GET_REQ in IMS_CC_HandleNsChnlGetReq
Line 641: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 650: IMSCC_CHNL_GET_RSP Channel count is %d
Line 689: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 695: -------[IMSCC=>VCE] Reconfig IP Port Request for Channel %d
Line 715: [IMSCC] StackType %d in IMS_CC_SendCeaseSyncReq
Line 721:  Set DST to STACK1
Line 730:  Set DST to STACK2
Line 733:  Error undefined stack type
Line 739: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 743:  Sending CEASE SYNC REQ EMM
Line 765: [IMSCC] Cause = %d, mtPagingStatus = %d in IMS_CC_SendDsDsCallStatusInd
Line 775: Channel Count is not zero for cause=%d
Line 783:  Set DST to STACK1
Line 791:  Set DST to STACK2
Line 794:  Error undefined stack type
Line 800: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 810: [IMSCC] IMS_CC_SendDsDsCallStatusInd is discarded.
Line 815:  Sending StatusInd=(%d)
Line 836: [IMSCC=>NS] IMSCC_NS_TUNE_AWAY_SET_RSP in IMS_CC_SendTuneAwaySetResp
Line 841: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 850: IMS_CC_SendImsEngineResp result: %d
Line 869: Is_Enabled (%d) in IMS_CC_HandleNsImsTuneawaySetReq
Line 873: [IMS_CC] Sending DSDS indication blocked as SRVCC occured
Line 886: [IMS_CC] Sending IMS_CC_SendDsDsCallStatusInd Failure response
Line 897: [IMS_CC] Sending IMS_CC_SendCeaseSyncReq Failure response
Line 917: [IMS_CC] Invalid ImsTuneaway flag value received from NS
Line 940: IMS_CC_HandleNsSignalQualityInd() ulBler(%d) dlBler(%d) ulGrant(%d)
Line 955: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 965: [IMSCC=>SRM] Sending IMS_SRM_SIGNAL_QUALITY_IND
Line 981: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 989: [IMSCC=>VCE] Sending VoiceEngine_SignalQuality
Line 1008: IMS_CC_FindSidFromLocalIp LocalIp
Line 1016: Found SID = %d
Line 1017: IMS_CC_FindSidFromLocalIp LocalIp
Line 1043: - 	 Set RTP Receive Port Successful
Line 1047: -		Set RTP Receive Port Failed, result=%d
Line 1057: - 	 Set RTP Send Port Successful
Line 1061: -		Set RTP Send Port Failed, Error Code=%d
Line 1071: - 	 Set RTCP Receive Port Successful
Line 1075: -		Set RTCP Receive Port Failed, Error Code=%d
Line 1085: - 	 Set RTCP Send Port Successful
Line 1089: -		Set RTCP Send Port Failed, Error Code=%d
Line 1103: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 1104: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 1105: - 	 Set Remote and Local IP Successful
Line 1109: -		Set Remote and Local IP Failed, Error Code=%d
Line 1123: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1130: IMSCC_CHNL_SET_RSP (%d) to NS, Result = %s
Line 1153: IMSCC_CHNL_SET_REQ (Channel Id=%d), SRVCC HO CNF = %d
Line 1154: - 	 Operation Mode= %s
Line 1180: AUD CHANNEL COUNT [0] => CLOSE ALL UDP SOCKET for SID = %d
Line 1193: -      Create channel failed, result = %d
Line 1200: - 	 SRM_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 1208: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(1)
Line 1231: -      SRM_DELETE_CHANNEL Engine Channel ID = %d
Line 1235: -      Deleted Channel Successfully
Line 1240: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 1245: -      Delete channel failed, result=%d
Line 1260:  SID NOT FOUND
Line 1271: - 	 RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 1272: - 	 RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 1273: -      SRM_CHANGE_CHANNEL Engine Channel ID = %d
Line 1281: - 	 AP Channel ID = %d, Is channel set = %d
Line 1292: -		Invalid Operation[%d]
Line 1322: AUD CHANNEL COUNT [0] => CLOSE ALL UDP SOCKET for SID = %d
Line 1333: -		SAE Create channel failed, Error Code = %d
Line 1340: - 	 SAE_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 1346: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(1)
Line 1358: -      SRM Create channel failed, result = %d
Line 1365: - 	 SRM_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 1405: - 	 SAE_DELETE_CHANNEL Engine Channel ID = %d
Line 1409: - 	 Deleted Channel Successfully
Line 1414: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 1420: -		Delete channel failed, Error Code=%d
Line 1426: - 	 SRM_DELETE_CHANNEL Engine Channel ID = %d
Line 1430: - 	 Deleted Channel Successfully
Line 1434: -		Delete channel failed, result=%d
Line 1449:  SID NOT FOUND
Line 1460: - 	 RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 1461: - 	 RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 1462: -      Engine Channel ID = %d, CodecType = %d
Line 1470: - 	 Set RTP Receive Port Successful
Line 1475: -		Set RTP Receive Port Failed, Error Code=%d
Line 1485: - 	 Set RTP Send Port Successful
Line 1490: -		Set RTP Send Port Failed, Error Code=%d
Line 1500: - 	 Set RTCP Receive Port Successful
Line 1505: -		Set RTCP Receive Port Failed, Error Code=%d
Line 1515: - 	 Set RTCP Send Port Successful
Line 1520: -		Set RTCP Send Port Failed, Error Code=%d
Line 1530: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 1531: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 1532: - 	 Set Remote and Local IP Successful
Line 1537: -		Set Remote and Local IP Failed, Error Code=%d
Line 1553: - 	 AP Channel ID = %d, Is channel set = %d
Line 1567: -		Invalid Operation[%d]
Line 1579: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1602: IMSCC_CHNL_SET_RSP (%d) to NS, Result = %s
Line 1637: - Mapped to SIPC = %d	  Codec Name =
Line 1672: -      SRM_InterfaceGetCodecCnt: Codec Count = %d
Line 1677: - 	 SAE_GetCodecCnt: Codec Count = %d
Line 1682: -		SAE_GetCodecCnt return Failure, Errcode= %d
Line 1690: - 	 Total CodecCnt: Codec Count = %d
Line 1724: -		SAE_GetCodecCnt return Failure, Errcode= %d
Line 1733: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1761: -      SRM_InterfaceGetSupportedCodecInfo return Failure,cnt=%d,  result= %d
Line 1781: - Mapped to SIPC = %d	  Codec Name =
Line 1802: -		SAE_GetCodec return Failure,cnt=%d,  Errcode= %d
Line 1829: -      SRM_InterfaceGetSupportedCodecInfo return Failure,cnt=%d,  result= %d
Line 1867: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 1879: - Mapped to SIPC = %d	  Codec Name =
Line 1911: -      SRM_InterfaceGetSendCodecInfo return Failure, result= %d
Line 1927: - Mapped to SIPC = %d	  Codec Name =
Line 1948: -		SAE_GetCurrentSendCodec return Failure, Errcode= %d
Line 1978: IMSCC_CODEC_GET_REQ in IMS_CC_HandleNsCodecGetReq
Line 2001: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2024: IMSCC_CODEC_GET_RSP sent to NS(%d)
Line 2047: IMSCC_CODEC_SET_REQ (%d) in IMS_CC_HandleNsCodecSetReq, Command Received = 0x%X
Line 2058: - 	 Codec type received from AP = %d
Line 2071: -		Invalid codec type received.
Line 2077: -      IMS_CC_HandleNsCodecSetReq CodecType = %d
Line 2086: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2095: -  Codec type received from AP = %d, Codec Name is = %s
Line 2100: -	Codec type received from AP = %d, Invalid codec type received.
Line 2108: - 	 Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 2111: - 	 Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 2113: - 	 Code Info: CodecRedLevel = %d, CodecRedPt = %d, CodecEnableRateAdaptation = %d, CodecActiveModeset = %d, CodecTypeRemote = %d
Line 2132: - 	 Code Info: CodecEvsDtxrecv = %d, CodecEvsChawarerecv = %d
Line 2135: - 	 Code Info: CodecEvsIoMode = %d, CodecEvsSendChannelType = %d, CodecEvsRecvChannelType = %d, CodecEvsCmrRestricted = %d
Line 2138: - 	 Code Info: CodecEvsBrSendMin = %d, CodecEvsBrSendMax = %d, CodecEvsBrRecvMin = %d, CodecEvsBrRecvMax = %d
Line 2141: - 	 Code Info: CodecEvsBwSendRange = %d, CodecEvsBwRecvRange = %d
Line 2144: - 	 Code Info: CodecEvsDefaultBr = %d, CodecEvsDefaultBw = %d
Line 2165: -      SRM_InterfaceSetSendCodecInfo Returned ERROR
Line 2176: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2185: -   Codec type received from AP = %d, Codec Name is = %s
Line 2190: -	 Codec type received from AP = %d, codecNameList is NULL.
Line 2198: - 	 Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 2201: - 	 Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 2220: -		SAE_SetSendCodec Returned ERROR
Line 2243: -      Not Supported Codec by SVE: EVRCB
Line 2268: -		Not Supported Codec = %d
Line 2274: -		SET Bit Rate function Returned ERROR
Line 2287: -      SRM_InterfaceEnableDtx Returned ERROR
Line 2297: -		SAE_EnableDtx Returned ERROR
Line 2310: - 	 Codec Name is = %s
Line 2318: -      SRM_InterfaceSetPacketizationMode Returned ERROR
Line 2328: -		SAE_SetPacketizationMode Returned ERROR
Line 2337: - 	 Invalid codec type received.
Line 2349: -      SRM_InterfaceSetTxCmr Returned ERROR
Line 2359: -		SAE_SetAMRTxCMR Returned ERROR
Line 2370: -      Not Supported Codec by SVE: EVRCB_EOP
Line 2380: -		SAE_SetEvrcbEOP Returned ERROR
Line 2391: -      Not Supported Codec by SVE: EVRCB_MCR
Line 2401: -		SAE_SetEvrcbMcr Returned ERROR
Line 2412: -      Not Supported Codec by SVE: EVRCB_EOP_BS
Line 2422: -		SAE_SetEvrcbEOPBaseStation Returned ERROR
Line 2435: -      result = %d
Line 2443: -		Error Ccode is = %d
Line 2451: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2462: IMSCC_CODEC_SET_RSP (%d) to NS, Result= %s
Line 2484: - 	 Received invalid VE Status
Line 2506: IMSCC_RTP_MEDIA_START_REQ (%d) received in IMS_CC_HandleRtpMediaStartReq, Enable IPV6 = %d
Line 2507: - 	VE Status = %s
Line 2530: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2538: IMSCC_RTP_MEDIA_START_RSP (%d) to NS, Result = %s
Line 2552: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2562: [IMSCC=>SRM] Sending IMS_SRM_START_SVE_REQ for ChannelId = %d
Line 2573: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2583: [IMSCC=>VCE] Sending VoiceEngine_Start for VCE ChannelId=%d
Line 2617: IMSCC_RTP_MEDIA_CHANGE_REQ (%d) in IMS_CC_HandleNsRtpMediaChangeReq
Line 2618: - 	VE Status = %s
Line 2631: -     Msg from stackId[%d]
Line 2640: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2657: IMSCC_RTP_MEDIA_CHANGE_RSP (%d) to NS, Result = %s
Line 2672: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2680: [IMSCC=>SRM] Sending IMS_SRM_CHANGE_SVE_REQ to VCE Channel ID = %d
Line 2691: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2697: [IMSCC=>VCE] Sending VoiceEngine_VEstatus to VCE Channel ID = %d
Line 2719: IMSCC_RTP_MEDIA_STOP_REQ (%d) in IMS_CC_HandleNsRtpMediaStopReq
Line 2727: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2744: IMSCC_RTP_MEDIA_STOP_RSP (%d) to NS, Result = %s
Line 2759: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2766: [IMSCC=>SRM] Sending IMS_SRM_STOP_SVE_REQ for CHID(%d)- isTriggeredByIms:TRUE
Line 2776: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2782: [IMSCC=>VCE] Sending VoiceEngine_Stop for CHID(%d)- isTriggeredByIms:TRUE
Line 2831: - 	 Deleted Channel Successfully
Line 2836: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 2841: -      Delete channel failed, rslt=%d
Line 2851: - 	 Deleted Channel Successfully
Line 2855: -      Delete channel failed, rslt=%d
Line 2863: - 	 Deleted Channel Successfully
Line 2867: - 	 [bsrvcc]cc_Set_IMS_Channel_Enabled(0)
Line 2872: -		Delete channel failed, Error Code=%d
Line 2899: [ImsEngine]SRM_InterfaceGetChannelCnt: %d --> should be Zero
Line 2901: [ImsEngine]SAE_GetChannelCnt: %d --> should be Zero
Line 2927: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2937: [SRVCC]isTriggeredLocally: IMS_SRM_STOP_SVE_REQ: CHID(%d)
Line 2947: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2955: [SRVCC]isTriggeredLocally: VoiceEngine_Stop: CHID(%d)
Line 2967: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 2973: IMS_CC_SendImsEngineResp result: %d
Line 2989: [ImsEngine]stop usCid(%d)
Line 2995: [ImsEngine] SRVCC Revoke Received, ignore rest of stopping channels locally
Line 3004: [ImsEngine] All channels are stopped
Line 3009: [ImsEngine] ImssccEngRegFlag is %d, All channels are stopped proceeding to delete channels
Line 3013: CodecType !!
Line 3060: IMSCC_RTP_MEDIA_CHANGE_REQ (%d) in IMS_CC_MediaChangeAllChannelsPerSid
Line 3061: - 	VE Status = %s
Line 3071: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3079: [IMSCC=>SRM] Sending IMS_SRM_CHANGE_SVE_REQ to VCE Channel ID = %d
Line 3089: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3095: [IMSCC=>VCE] Sending VoiceEngine_VEstatus to VCE Channel ID = %d
Line 3127: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3138: [IMSCC=>SRM] Status=%d, EnableV6 = %d, Sending IMS_SRM_START_SVE_REQ for ChannelId = %d
Line 3149: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3160: [IMSCC=>VCE] Status=%d, EnableV6 = %d, Sending VoiceEngine_Start for VCE ChannelId = %d
Line 3184: [SRVCC]Start usCid(%d)
Line 3186: [IMSCC=>VCE] SAE_NotiSRVCCfailure
Line 3192: [SRVCC] All channels are started
Line 3212: IMSCC_DTMF_SET_REQ (%d) in IMS_CC_HandleNsDtmfSetReq
Line 3214: - 	 Payload Type = %d, Mode = %d, Clockrate = %d, Rx Payload Type = %d
Line 3232: -      Setting DTMF Mode failed, result = %d
Line 3242: -      IMS_CC_HandleNsDtmfSetReq: SRM_InterfaceSetDtmfPayloadType failed ; %d
Line 3259: -		Setting DTMF Mode failed, Error Code = %d
Line 3270: -		IMS_CC_HandleNsDtmfSetReq: SetDTMFPayloadType failed ; %d
Line 3281: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3292: IMSCC_DTMF_SET_RSP (%d) to NS, Result= %s
Line 3312: IMSCC_DTMF_REQ (%d) in IMS_CC_HandleNsDtmfReq DTMF = %d
Line 3346: -      SRM_InterfaceSendDtmf failed, result = %d
Line 3357: -		SAE_SendDTMF failed, Error code = %d
Line 3366: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3377: IMSCC_DTMF_RSP (%d) to NS, Result= %s
Line 3389: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3396: IMSCC_OPTION_SET_RSP (%d) to NS, Result=%s
Line 3407: IMSCC_OPTION_SET_REQ (%d) in IMS_CC_HandleNsOptionSetReq
Line 3409: - 	 OptionSet = 0x%X, AvSyncSet = %d
Line 3410: - 	 RTCP SR = %d, RTCP On Call = %d
Line 3411: - 	 RTCP RrBW = %d, RsBW = %d
Line 3412: - 	 RTP Timeout = %d, RTCP Timeout = %d, RTP Pinhole = %d
Line 3413: - 	 SRTP Profile = %d, SRTP Direction = %d, SRTP Key length = %d
Line 3428: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3467: -      RTCP SR = %d
Line 3474: -      RTCP On Call = %d, RTCP RrBW = %d, RsBW = %d
Line 3481: -      RTP Timeout = %d
Line 3488: -      RTCP Timeout = %d
Line 3495: -      RTP Pinhole = %d
Line 3502: -      SRTP Profile = %d, SRTP Direction = %d, SRTP Key length = %d
Line 3509: -      AvSyncSet  = %d
Line 3516: -      CiqSet = %d
Line 3539: -      ECHOLOCATE_SET
Line 3555: -      OptionSet result = 0x%X
Line 3569: IMSCC_STAT_GET_REQ (%d) in IMS_CC_HandleNsStatGetReq
Line 3582: -      SRM_InterfaceGetRtpStatistics failed, result = %d
Line 3591: -		SAE_GetRTPStatistics failed, Error code = %d
Line 3600: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3616: IMSCC_STAT_GET_RSP (%d) to NS Result = %s
Line 3625: IMS_CC_HandleNsChnlReadyReq  for StateD: %d
Line 3649: IMSCC_IMS_ENGINE_REQ(%d) in IMS_CC_HandleNsImsEngineReq dtmf: %d
Line 3654: -		Inside INIT engine
Line 3677: -		Inside DEINIT engine
Line 3683: -		Inside REINIT engine
Line 3696: IMS_CC_HandleNsFrameTimeGetReq Operation: %d, Channel: %d
Line 3702: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 3713: -		SRM_InterfaceGetRxVoiceTime failed, result = %d
Line 3721: -		SAE_GetRXVoiceTime failed, Error code = %d
Line 3725: IMS_CC_SendFrameTimeRsp LastPlayedRTPtimestamp:%u, SysTime HI:%u(0x%x) LO:%u(0x%x)
Line 3740: IMS_CC_SendFrameTimeRsp SystemTime HI:%u(0x%x) LO:%u(0x%x)
Line 3750: IMS_CC_HandleNsFrameTimeSetReq Operation: %u, Channel: %u
Line 3753: - 	 Delay = %u
Line 3766: - 	 System Time = 0x%x%x
Line 3791: <<<Prev Stack:%d, Current Stack:%d>>>
Line 3804: <<<Msg is not from CC_SS_SAP/DS_CC_SS_SAP
Line 3826: <<<IMS_CC_NsMsgHandler, received msg =[%x] from NS>>>
Line 3919: RAT_CHANGE_IND received from non-LTE stack, so ignoring it
Line 3972: Not enabled SHANNON VOLTE
Line 3998: <<<IMS_CC_NsMsgHandler, received msg = [0x%x] from PDNMGR>>>
Line 4023: IMS_CC_MmcMsgHandler, received msg =[%x] from MMC
Line 4030: [SRVCC][SUCCESS]MMC_IMSCC_IRAT_HO_CNF
Line 4042: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4055: [SRVCC][START]MMC_IMSCC_IRAT_HO_START_NTF
Line 4078: IMS_CC_Sael3MsgHandler, received msg =[%x] from SAEL3
Line 4083: [SRVCC][FAIL]SAEMM_IMSCC_SRVCC_REVOKE_CALL
Line 4093: [SRVCC][CANCEL]ESM_IMSCC_NOTIFICATION
Line 4114: IMS_CC_L2MsgHandler, received msg = [0x%x] from L2
Line 4127: IMSCC_RECOMMENDED_BIT_RATE_IND direction(%d) bitRate(%d)
Line 4141: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4150: [IMSCC=>SRM] Sending IMS_SRM_RECOMMENDED_BIT_RATE_IND for chId(%d)
Line 4161: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4169: [IMSCC=>VCE] Sending VoiceEngine_RecommendedBitRateInd for chId(%d)
Line 4179: Recommended Bit Rate for Video
Line 4183: Unknown Type(%d)
Line 4188: EVOLTE_CODEC_RATE_ADAPTATION Feature is not enabled.
Line 4194: Unknown Message
Line 4277: IMSCC Call status -> %d
Line 4303: [IMSCC]CallListSet: Number Of Calls(%d) in CallList
Line 4311:  [IMSCC] Number Of Calls exceeds the maximum
Line 4327: Call[%d] Id(%d) :- Status (%d)-> %s
Line 4399: [IMSCC] SRVCC Tartet Calls Exitence(%d)
Line 4405: [IMSCC] SRVCC Tartet Calls Exitence(%d)
Line 4423: [rSRVCC] IMS_CC_HandleNsImsRsrvccInfoInd
Line 4425: ***** IP Address Info *****
Line 4435:  [rSRVCC] IpAddress Length exceeds the maximum address size
Line 4446: [rSRVCC] IP Type - %d
Line 4447: [rSRVCC] IP Address Len - %d
Line 4449: ***** Voice Channel Info from AP *****
Line 4454: [rSRVCC] Channel Id - 		(0x%X)
Line 4455: [rSRVCC] RTP Send Port -  	(0x%X)
Line 4456: [rSRVCC] RTP Remote Port - 	(0x%X)
Line 4457: [rSRVCC] RTCP Send Port - 	(0x%X)
Line 4458: [rSRVCC] RTCP Remote Port -  	(0x%X)
Line 4460: ***** Codec Info from AP *****
Line 4465: [rSRVCC] Codec Type  - 		(0x%X)
Line 4467: ***** DTMF Info from AP *****
Line 4472: [rSRVCC] DTMF  - 		(0x%X)
Line 4475: ***** OPTIONS set info from AP *****
Line 4480: [rSRVCC] OptionSet = 0x%X
Line 4499: [rSRVCC] IMS_CC_HandleNsHedgeRsrvccInfoInd: Decode the rSRVCC info received in HO command of Length [%d]
Line 4503: [rSRVCC] Valid rSRVCC Info Received in HO command
Line 4507: [rSRVCC] ATGW Transfer Content Type - %d
Line 4511:  ATGW Transfer Type : IPV4
Line 4520:  ATGW Transfer Type : IPV6
Line 4529:  ATGW Transfer Type : Not Available (or) Invalid
Line 4538: [rSRVCC] NULL Ptr !!! in rSRVCC Info Received in HO command
Line 4542: [rSRVCC] pNsMsg->RsrvccInfoLen incorrect:%d !!! in rSRVCC Info Received in HO command
Line 4564: [SRVCC/rSRVCC] IMS_CC_HandleNsSrvccHandoverStatusInd
Line 4566: [SRVCC/rSRVCC] SRVCC HO Status - %d
Line 4568: [SRVCC/rSRVCC] SRVCC HO Type - %d
Line 4574: [rSRVCC] NS_SRVCC_HO_STATUS_STARTED: No Action @ IMSCC
Line 4589: [rSRVCC] NS_SRVCC_HO_CNF_STATUS_SUCCESS : Assuming TCP IP If is present and created by 3G during IMS registration - Audio Channel Creation & update AP about Media Start Status
Line 4595: [rSRVCC] SAE_CREATE_CHANNEL : Failed
Line 4601: [rSRVCC] CODEC SET REQ : Failed
Line 4607: [rSRVCC] OPTIONS SET REQ : Failed
Line 4618: [rSRVCC] VoiceEngine_Start : Failed
Line 4626: [rSRVCC] NS_SRVCC_HO_CNF_STATUS_FAIL : No Action @ IMSCC
Line 4630: [rSRVCC] Other Status !!!
Line 4663: -      Create channel failed, SrmChResult = %d
Line 4669: -      SRM_InterfaceCreateChannel Engine Channel ID = %d created successfully
Line 4679:  SID NOT FOUND
Line 4685:  Valid Chnl ID NOT FOUND
Line 4690: -      RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 4691: -      RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 4692: -      SRM_CHANGE_CHANNEL Engine Channel ID = %d
Line 4698: -      Set RTP Receive Port Successful
Line 4702: -      Set RTP Receive Port Failed, result=%d
Line 4711: -      Set RTP Send Port Successful
Line 4715: -      Set RTP Send Port Failed, result=%d
Line 4724: -      Set RTCP Receive Port Successful
Line 4728: -      Set RTCP Receive Port Failed, result=%d
Line 4737: -      Set RTCP Send Port Successful
Line 4741: -      Set RTCP Send Port Failed, result=%d
Line 4754: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 4755: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 4756: -      Set Remote and Local IP Successful
Line 4760: -      Set Remote and Local IP Failed, result=%d
Line 4765: -      AP Channel ID = %d, Is channel set = %d
Line 4785: -      Create channel failed, Error Code = %d
Line 4791: -      SAE_CREATE_CHANNEL Engine Channel ID = %d created successfully
Line 4801:  SID NOT FOUND
Line 4807:  Valid Chnl ID NOT FOUND
Line 4812: -      RTP Receive Port = %d (0x%X), RTP Send Port = %d (0x%X)
Line 4813: -      RTCP Receive Port = %d (0x%X), RTCP Send Port = %d (0x%X)
Line 4814: -      SAE_CHANGE_CHANNEL Engine Channel ID = %d
Line 4820: -      Set RTP Receive Port Successful
Line 4825: -      Set RTP Receive Port Failed, Error Code=%d
Line 4834: -      Set RTP Send Port Successful
Line 4839: -      Set RTP Send Port Failed, Error Code=%d
Line 4848: -      Set RTCP Receive Port Successful
Line 4853: -      Set RTCP Receive Port Failed, Error Code=%d
Line 4862: -      Set RTCP Send Port Successful
Line 4867: -      Set RTCP Send Port Failed, Error Code=%d
Line 4877: IMS_CC_HandleNsChnlSetReq SendRemoteIp
Line 4878: IMS_CC_HandleNsChnlSetReq SendLocalIp
Line 4879: -      Set Remote and Local IP Successful
Line 4884: -      Set Remote and Local IP Failed, Error Code=%d
Line 4889: -      AP Channel ID = %d, Is channel set = %d
Line 4928: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4937: -   Codec type received from AP = %d, Codec Name is = %s
Line 4941: -      Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 4944: -      Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 4959: -  Codec type received from AP = %d, Invalid codec type received.
Line 4965: -      SRM_InterfaceSetSendCodecInfo Returned ERROR
Line 4977: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 4986: -   Codec type received from AP = %d, Codec Name is = %s
Line 4990: -      Code Info: Type = %d, Freq = %d, BitRate = %d, Ptime = %d
Line 4993: -      Code Info: EnableDTX = %d, MaxRxPtime = %d, NChannel = %d, FixedRate = %d
Line 5009: -  Codec type received from AP = %d, Invalid codec type received.
Line 5016: -      SAE_SetSendCodec Returned ERROR
Line 5040: -      Not Supported Codec by SVE: EVRCB
Line 5065: -      Not Supported operation
Line 5071: -      SET Bit Rate function Returned ERROR
Line 5084: -      SRM_InterfaceEnableDtx Returned ERROR
Line 5093: -      SAE_EnableDtx Returned ERROR
Line 5110: -   Codec type received from AP = %d, Codec Name is = %s
Line 5118: -      SRM_InterfaceSetPacketizationMode Returned ERROR
Line 5127: -      SAE_SetPacketizationMode Returned ERROR
Line 5135: -  Codec type received from AP = %d, Invalid codec type received.
Line 5151: -      SRM_InterfaceSetTxCmr Returned ERROR
Line 5160: -      SAE_SetAMRTxCMR Returned ERROR
Line 5175: -      Not Supported Codec by SVE: EVRCB_EOP
Line 5183: -      SAE_SetEvrcbEOP Returned ERROR
Line 5198: -      Not Supported Codec by SVE: EVRCB_MCR
Line 5206: -      SAE_SetEvrcbMcr Returned ERROR
Line 5221: -      Not Supported Codec by SVE: EVRCB_EOP_BS
Line 5229: -      SAE_SetEvrcbEOPBaseStation Returned ERROR
Line 5265: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 5314: OptionSet received with AvsyncSet, Not handled by Audio engine currently, send Success
Line 5337: IMSCC_RTP_MEDIA_START_REQ (%d) received, Enable IPV6 = %d
Line 5338: -     VE Status = %s
Line 5357: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 5366: [IMSCC=>SRM] Sending IMS_SRM_START_SVE_REQ for ChannelId = %d
Line 5377: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
Line 5385: [IMSCC=>VCE] Sending VoiceEngine_Start for VCE ChannelId=%d
Line 5416: [IMS_CC] <%s(%d)> pal_MemAlloc() failure
