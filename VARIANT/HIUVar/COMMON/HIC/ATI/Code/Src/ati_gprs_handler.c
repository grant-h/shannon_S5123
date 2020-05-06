Line 90: AtiRspPlusCGATT - RequestedEmmStatus : %d, RegStatus : %d, RejCause : %d
Line 132: Command Timer Stopped [%s] [%d]
Line 143: AtiRspPlusCGATT:NS_REGISTRATION_STATUS_IND
Line 155: AtiRspPlusCGATT(): LinkDown, Attatch = %d
Line 168: Command Timer Stopped [%s] [%d]
Line 173: NS_CLIENT_NOT_REGISTERED_IND
Line 178: Command Timer Stopped [%s] [%d]
Line 183: NS_PDN_CONNECTIVITY_REJ
Line 185: Command Timer Stopped [%s] [%d]
Line 189:  AtiRspPlusCGATT: UNKNOWN
Line 218: AtiRspPlusCGCMOD: pNsMsg->Header.TypMsg = %d, IpcMsgType = %d
Line 229: [PDN_ATI_PDN_RSP_SUCCESS] This cmd is succeed!!
Line 233: This message is unsolicited. Just ignore it.
Line 239: Command Timer Stopped [%s] [%d]
Line 335: NS_PDP_ACTIVATE_CNF pstData %X, SId %d, Nsapi %d, LlcSapi %d, PdpTypeOrganisation %d 
Line 338: PdpTypeNumber %d, PdpAddressInfoLength %d, HeaderCompression %d, DataCompression %d, PdpAddressInformation %X
Line 365: AtiRspPlusCGDATA: Delegating NS_REGISTRATION_STATUS_IND to generic handler
Line 373: AtiRspPlusCGACT: Received NS_PDP_ACTIVATE_REJ
Line 388: Command Timer Stopped [%s] [%d]
Line 411: AtiRspPlusCGDCONT: pNsMsg->Header.TypMsg = %d, IpcMsgType = %d
Line 420: Command Timer Stopped [%s] [%d]
Line 423: [PDN_ATI_PDN_RSP_SUCCESS] This cmd is succeed!!
Line 427: AtiRspPlusCGDCONT considers other response as succeess.
Line 429: Command Timer Stopped [%s] [%d]
Line 436: NS_PDN_GENERAL_RSP is not received.
Line 470: AtiRspPlusCGDSCONT: pNsMsg->Header.TypMsg = %d, IpcMsgType = %d
Line 479: Command Timer Stopped [%s] [%d]
Line 493: AtiRspPlusCGDSCONT considers other response as succeess.
Line 495: Command Timer Stopped [%s] [%d]
Line 502: NS_PDN_GENERAL_RSP is not received.
Line 563: RequestedGprsStatus : %d, RequestedImsiStatus : %d, ServiceDomain: %d
Line 597: Command Timer Stopped [%s] [%d]
Line 615: AtiRspHashCGATT(): LinkDown, Attatch = %d
Line 628: Command Timer Stopped [%s] [%d]
Line 633: NS_CLIENT_NOT_REGISTERED_IND
Line 636: Command Timer Stopped [%s] [%d]
Line 640: AtiRspHashCGATT: UNKNOWN
Line 664: AtiQuePlusCGATT received: EpsAttacthStatus [%d]
Line 711: MemAlloc fail
Line 728: Command Timer Started [%s] [%d]
Line 888: AtiRspPlusCGAUTO:NS_REGISTRATION_STATUS_IND
Line 897: Command Timer Stopped [%s] [%d]
Line 902: NS_CLIENT_NOT_REGISTERED_IND
Line 905: Command Timer Stopped [%s] [%d]
Line 909:  AtiRspPlusCGAUTO: UNKNOWN
Line 954: Command Timer Stopped [%s] [%d]
Line 962: Command Timer Stopped [%s] [%d]
Line 1054: AtiQuePlusCGREG: unknown CGREGn %d
Line 1059: +CGREG: %d,%04X,%04X,%d,%04X
Line 1095: +CEREG: %d,%04X,%04X,%04X,%d
Line 1100: +CEREG: %d,%04X,%04X,%04X,%d
Line 1124: AtiQuePlusCEREG(): unknown Cereg mode (%d)
Line 1167: Command Timer Stopped [%s] [%d]
Line 1202: Context ID = %d, State = %d
Line 1234: AtiRspPlusCGACT: pNsMsg->Header.TypMsg = %d, IpcMsgType = %d
Line 1260: [PDN_ATI_PDN_RSP_SUCCESS] This cmd is succeed!!
Line 1264: This message is unsolicited. Just ignore it.
Line 1271: AtiRspPlusCGACT: Not a NS_GENERAL_GPRS_RSP_INFO message. Just ignore it.
Line 1275: Command Timer Stopped [%s] [%d]
Line 1491: Command Timer Stopped [%s] [%d]
Line 1500: NS_PDP_ACTIVATE_REJ
Line 1503: Command Timer Stopped [%s] [%d]
Line 1671: AtiRspPlusCGACT:AtiHandleRspNsPdpActivateCnf
Line 1680: NS_PDP_ACTIVATE_CNF: call_mode = %d, call_state = %d, PdpTypeNumber=: %d, PdpAddressInfoLength =%d, Primary PDP %d
Line 1688: [IPCH_UART] Set PDN Address (Len=%d) to DHCP4 : %d.%d.%d.%d
Line 1707: [IPCH_UART] Set DNS1 Address (Len=%d) to DHCP4 : %d.%d.%d.%d
Line 1711: [IPCH_UART] Set DNS2 Address (Len=%d) to DHCP4 : %d.%d.%d.%d
Line 1759: NS_PDP_ACTIVATE_SEC_CNF
Line 1779: AtiRspPlusCGACT: Handling NS_PDP_ACTIVATE_SEC_CNF, call_mode = %d, call_state = %d
Line 1825: GPRS is not attached!!
Line 1832: NS_PDP_ACTIVATE_REJ
Line 1867: NS_PDP_ACTIVATE_SEC_REJ
Line 1881: AtiRspPlusCGACT: Handling NS_PDP_ACTIVATE_SEC_REJ, call_mode = %d, call_state = %d
Line 1886: Received Deactivation cause = %d, sending SUCCESS
Line 1936: Cid = %d
Line 1975: call_mode = %d, call_state = %d
Line 2020: NS_EPS_DEDICATED_PDP_ACTIVATE_CNF
Line 2023: SId=%d, Linked SId=%d QCI=0x%X, Max Bitrate UL=0x%X/DL=0x%X, Guaranteed Bitrate UL=0x%X/DL=0x%X
Line 2032: [ATI] CGACT Activate. updating Call mode and call state
Line 2052: NS_EPS_DEDICATED_PDP_ACTIVATE_CNF handler, invalid SId = %d
Line 2099: MemAlloc fail
Line 2114: AtiStorePDPContext: PDP type = %d, PDP address length = %d
Line 2267: Send the PDP context to PPP
Line 2272: MemAlloc fail
Line 2316: dwDNS1 %d dwDNS2 %d
Line 2318: 0: %d, 1: %d, 2: %d, 3: %d
Line 2331: PdpAddressInfoLength  =%d, PdpAddressInformation =%d, Nsapi =%d, bDnsOption %d
Line 2675: Cause: NS_INVALID_TI_CAUSE
Line 2676: Cause: NS_INVALID_PTR_LENGTHS_CAUSE
Line 2677: Cause: NS_INSUFFICIENT_RESOURCE_CAUSE
Line 2678: Cause: NS_RAT_CHANGE_IN_PROGRESS_CAUSE
Line 2679: Cause: NS_REPEATED_OR_INVALID_NSAPI_CAUSE
Line 2680: Cause: NS_INVALID_NSAPI_CAUSE
Line 2681: Cause: NS_WRONG_PRIMARY_NSAPI_STATE_CAUSE
Line 2682: Cause: NS_UNRECOGNISED_PRIMARY_NSAPI_CAUSE
Line 2683: Cause: NS_UNKNOWN_APN_CAUSE
Line 2684: Cause: NS_UNKNOWN_PDP_ADDRESS_OR_TYPE_CAUSE
Line 2685: Cause: NS_USER_AUTH_FAIL_CAUSE
Line 2686: Cause: NS_GGSN_REJ_CAUSE
Line 2687: Cause: NS_UNSPECIFIED_CAUSE
Line 2688: Cause: NS_UNSUPPORTED_SERVICE_CAUSE
Line 2689: Cause: NS_UNSUBSCRIBED_SERVICE_CAUSE
Line 2690: Cause: NS_OPERATOR_DETERMINED_BARRING_CAUSE
Line 2691: Cause: NS_LLC_SNDCP_FAIL_CAUSE
Line 2692: Cause: NS_SERVICE_OUT_OF_ORDER_CAUSE
Line 2693: Cause: NS_REGULAR_DEACTIVATION_CAUSE
Line 2694: Cause: NS_QOS_NOT_ACCEPTED_CAUSE
Line 2695: Cause: NS_NETWORK_FAILURE_CAUSE
Line 2696: Cause: NS_REACTIVATION_REQUIRED_CAUSE
Line 2697: Cause: NS_INCORRECT_STATE_CAUSE
Line 2698: Cause: NS_MOD_COLLISION_CAUSE
Line 2699: Cause: NS_MSG_FAILURE_CAUSE
Line 2700: Cause: NS_LOW_LAYER_FAILURE_CAUSE
Line 2701: Cause: NS_AUTH_FAIL_CAUSE
Line 2702: Cause: NS_USER_PLMN_SELECTION_CAUSE
Line 2703: Cause: NS_SIM_INVALID_CAUSE
Line 2704: Cause: NS_ACCESS_NOT_ALLOWED_CAUSE
Line 2705: Cause: NS_FEATURE_NOT_SUUPORTED_CAUSE
Line 2706: Cause: NS_SEMANTIC_ERR_IN_TFT_OP_CAUSE
Line 2707: Cause: NS_SYNTACTICAL_ERR_IN_TFT_OP_CAUSE
Line 2708: Cause: NS_UNKOWN_PDP_CONTEXT_CAUSE
Line 2709: Cause: NS_SEMANTIC_ERRORS_IN_PACKET_FILTERS_CAUSE
Line 2710: Cause: NS_SYNTACTICAL_ERRORS_IN_PACKET_FILTERS_CAUSE
Line 2711: Cause: NS_PDP_CONTEXT_WITHOUT_TFT_ALREADY_ACTIVATED_CAUSE
Line 2714: Cause: Unknown (%u)
Line 2722: SID matching (%d) (%d)
