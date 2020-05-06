Line 344: Tx-URRC_MM_EST_CNF
Line 352: Tx-URRC_GMM_EST_CNF
Line 360: rrc_BoundNas_SendCsPsEstCnf() Invalid domain
Line 365: rrc_BoundNas_SendCsPsEstCnf()-Msg not allowed payload
Line 399: Tx-URRC_MM_EST_REJ
Line 407: Tx-URRC_GMM_EST_REJ
Line 415: rrc_BoundNas_SendCsPsEstRej() Invalid domain
Line 429: Tx-URRC_MM_EST_REJ
Line 437: Tx-URRC_GMM_EST_REJ
Line 445: rrc_BoundNas_SendCsPsEstRej() Invalid domain
Line 487: Tx-URRC_MM_DATA_IND
Line 506: GmmHdrPtr->GmmPduPtr is NULL 
Line 517: Tx-URRC_GMM_DATA_IND
Line 526: rrc_BoundNas_SendCsPsDataInd()-Invalid domain
Line 533: rrc_BoundNas_SendCsPsDataInd()-Msg should always have a payload
Line 562: Tx-URRC_MM_DATA_CNF
Line 570: Tx-URRC_GMM_DATA_CNF
Line 578: rrc_BoundNas_SendCsPsDataCnf()-Invalid domain
Line 591: Tx-URRC_MM_DATA_CNF
Line 599: Tx-URRC_GMM_DATA_CNF
Line 607: rrc_BoundNas_SendCsPsDataCnf()-Invalid domain
Line 638: No CS domain supported
Line 647: Tx-URRC_GMM_USER_DATA_CNF
Line 655: rrc_BoundNas_SendCsPsUserDataCnf()-Invalid DomainType=%d
Line 662: rrc_BoundNas_SendCsPsUserDataCnf()-Msg must have payload
Line 693: Tx-URRC_MM_PAGE_IND
Line 701: Tx-URRC_GMM_PAGE_IND
Line 709: rrc_BoundNas_SendCsPsPageInd()-Invalid DomainType=%d
Line 716: rrc_BoundNas_SendCsPsPageInd()-Msg must have payload
Line 749: Tx-URRC_MM_ABORT_IND
Line 757: Tx-URRC_GMM_ABORT_IND
Line 765: rrc_BoundNas_SendCsPsAbortInd()-Invalid domain
Line 772: rrc_BoundNas_SendCsPsAbortInd()-Message should always have a payload
Line 806: Tx-URRC_MM_REL_IND
Line 814: Tx-URRC_GMM_REL_IND
Line 822: rrc_BoundNas_SendCsPsRelInd()-Invalid domain
Line 829: rrc_BoundNas_SendCsPsRelInd()-Message should always have a payload
Line 861: Tx-URRC_GMM_CNXREL_IND
Line 870: rrc_BoundNas_SendCnxRelInd()-Message should always have a payload
Line 882: Tx-URRC_GMM_QRB_ABORT_IND
Line 891: rrc_BoundNas_SendQRBAbortInd()-Msg not allowed payload
Line 908: Tx-URRC_MM_LTERAT_INFO_IND
Line 917: rrc_BoundNas_SendLteRatInfoInd()-Message should always have a payload
Line 931: Tx-URRC_MM_HANDOVER_TYPE_IND
Line 940: rrc_BoundNas_SendUrrcMmHandoverTypeInd()-Message should always have a payload
Line 976: Tx-URRC_MM_SYNC_IND
Line 984: rrc_BoundNas_SendCsPsSyncInd()-Invalid domain %d
Line 991: rrc_BoundNas_SendCsPsSyncInd()-Message should always have a payload
Line 1030: URRC_MM_SECURITY_IND follows the forced Est Cnf due to a delayed L2 ACK for IDT
Line 1037: Tx-URRC_MM_SECURITY_IND
Line 1051: URRC_GMM_SECURITY_IND follows the forced Est Cnf due to a delayed L2 ACK for IDT
Line 1058: Tx-URRC_GMM_SECURITY_IND
Line 1067: rrc_BoundNas_SendCsPsSecurityInd()-Invalid domain
Line 1074: rrc_BoundNas_SendCsPsSecurityInd()-Message should always have a payload
Line 1102: Tx-URRC_MM_SECURITY_KEY_INVALID_IND
Line 1110: Tx-URRC_GMM_SECURITY_KEY_INVALID_IND
Line 1118: rrc_BoundNas_SendCsPsSecurityKeyInvalidInd()- Invalid domain
Line 1124: rrc_BoundNas_SendCsPsSecurityKeyInvalidInd()-Message should not have a payload
Line 1154: Tx-URRC_MM_CELL_IND
Line 1163: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1193: Tx-URRC_MM_NET_SCAN_IND
Line 1202: rrc_BoundNas_SendUrrcNWScanInd()-Msg not allowed payload
Line 1230: Tx-URRC_MM_SCELL_AS_INFO_IND
Line 1239: rrc_BoundNas_SendUrrcMmScellAsInfoInd()-Msg not allowed payload
Line 1270: Tx-URRC_MM_RESEL_TO_EUTRAN_REQ
Line 1279: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1309: Tx-URRC_MM_REDIRECT_TO_EUTRAN_REQ
Line 1318: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 1332: Tx-URRC_MM_READY_FOR_NAS_REQUEST_IND
Line 1341: rrc_BoundNas_SendUrrcSuspendCnf()-Msg not allowed payload
Line 1388: Tx-URRC_MM_PLMN_LIST_IND
Line 1397: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 1426: Tx-URRC_MM_CGI_INFO_IND 
Line 1435: rrc_BoundNas_SendUrrcMmCgiInfoInd()-Message should always have a payload
Line 1470: Tx-URRC_MM_CGI_ACQUISITION_CNF 
Line 1479: rrc_BoundNas_SendUrrcMmCgiAcqCnf()-Message should always have a payload
Line 1514: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->UMTS_PLMN_list is NULL
Line 1528: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->HedgeCsgListPtr is NULL
Line 1538: Tx-URRC_MM_BACKGND_PLMN_LIST_FAIL_IND
Line 1547: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-Message should always have a payload
Line 1582: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->UMTS_PLMN_list is NULL
Line 1596: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-BodyMsgPtr->HedgeCsgListPtr is NULL
Line 1606: Tx-URRC_MM_ABORT_BACKGND_PLMN_LIST_CNF
Line 1615: rrc_BoundNas_SendUrrcMmBackgndPlmnListFailInd()-Message should always have a payload
Line 1646: Tx-URRC_MM_INITIAL)PLMN_CNF
Line 1655: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 1687: Tx-URRC_MM_NO_CELL_IND list size %d
Line 1699: Tx-URRC_MM_NO_CELL_IND
Line 1708: rrc_BoundNas_SendUrrcNoCellInd()-Message should always have a payload
Line 1753: Tx-URRC_MM_PLMN_SEARCH_FAIL_IND
Line 1762: rrc_BoundNas_SendUrrcMmPlmnSearchFailInd()-Message should always have a payload
Line 1794: Tx-URRC_MM_UNIT_DATA_IND
Line 1803: rrc_BoundNas_SendUrrcUnitDataInd()-Message should always have a payload
Line 1832: Tx-URRC_MM_SUSPEND_RAT_CNF
Line 1841: rrc_BoundNas_SendUrrcSuspendCnf()-Msg not allowed payload
Line 1865: Tx-URRC_MM_RESUME_RAT_CNF
Line 1874: rrc_BoundNas_SendResumeRatCnf()-Msg not allowed payload
Line 1906: Tx-URRC_MM_RAT_CHANGE_COMPLETE_IND
Line 1915: rrc_BoundNas_SendUrrcMmRatChangeCompleteInd()-Msg not allowed payload
Line 1939: Tx-URRC_MM_RAT_CHANGE_FAILURE_IND
Line 1948: rrc_BoundNas_SendUrrcMmRatChangeFailureInd()-Msg not allowed payload
Line 1972: Tx-URRC_MM_RAT_RESELECTION_TO_GSM_IND
Line 1981: rrc_BoundNas_SendUrrcMmRatReselectionToGsmInd()-Msg not allowed payload
Line 1993: Tx-URRC_MM_RAT_REDIRECTION_TO_GSM_IND
Line 2002: rrc_BoundNas_SendUrrcMmRatRedirectionToGsmInd()-Msg not allowed payload
Line 2028: Tx-URRC_MM_RAT_HANDOVER_TO_GSM_IND
Line 2037: rrc_BoundNas_SendUrrcMmRatHandoverToGsmInd()-Msg not allowed payload
Line 2065: Tx-URRC_MM_HANDOVER_RAB_IND
Line 2074: rrc_BoundNas_SendUrrcMmHandoverRabInd()-Message should always have a payload
Line 2098: Tx-URRC_MM_RAT_CELL_CHANGE_TO_GSM_IND
Line 2107: rrc_BoundNas_SendUrrcMmRatCellChangeToGsmInd()-Msg not allowed payload
Line 2129: Tx-URRC_MM_INIT_CNF
Line 2139: rrc_BoundNas_SendUrrcMmInitCnf()- unable to send message
Line 2145: rrc_BoundNas_SendUrrcMmInitCnf()-Msg not allowed payload
Line 2164: Tx-URRC_MMI_RXLEV_IND
Line 2191: Tx-URRC_MMI_MRU_RESET_CNF
Line 2220: Tx-URRC_MMI_ASTYPE_IND
Line 2248: Tx-URRC_MMI_SERV_CELLINFO_IND
Line 2278: Tx-URRC_MM_STOP_CNF
Line 2286: rrc_BoundNas_SendUrrcMmInitCnf()-Msg not allowed payload
Line 2326: Tx-URRC_MM_RETRANSMIT_IND
Line 2335: rrc_BoundNas_SendUrrcMmRetransmitInd()-<ilmMsg> is NULL
Line 2366: Tx-URRC_MM_LCS_IND
Line 2375: rrc_BoundNas_SendUrrcMmLcsmInd()-Message should always have a payload
Line 2394: Tx-URRC_MM_LCS_FREQ_AID_CNF
Line 2405: rrc_BoundNas_SendLCSFreqAidCnf()-Msg not allowed payload
Line 2432: Tx-URRC_MM_REL_CNF
Line 2442: Tx-URRC_GMM_REL_CNF
Line 2450: rrc_BoundNas_SendCsPsRelCnf() Invalid domain
Line 2455: rrc_BoundNas_SendCsPsRelCnf()-Msg not allowed payload
Line 2479: No CS domain supported
Line 2485: Tx-URRC_GMM_SCR_IND
Line 2493: rrc_BoundNas_SendPsScrInd()-Invalid DomainType=%d
Line 2499: rrc_BoundNas_SendPsScrInd()-Msg not allowed payload
Line 2528: Tx-URRC_MM_HANDOVER_RAB_IND
Line 2537: rrc_BoundNas_SendUrrcMmHandoverRabInd()-Message should always have a payload
Line 2564: Tx-URRC_MM_INTER_RAT_HANDOVER_INFO_CNF
Line 2573: rrc_BoundNas_SendUrrcMmInterRatHandoverInfoCnf()-Message should always have a payload
Line 2600: Tx-URRC_MM_HANDOVER_TO_UTRAN_CNF
Line 2609: rrc_BoundNas_SendUrrcMmHandoverToUtranCnf()-Message should always have a payload
Line 2637: Tx-URRC_MM_UE_CAPA_IND
Line 2646: rrc_BoundNAS_SendUrrcMmUeCapaInfoInd()-Message should always have a payload
Line 2674: Tx-URRC_MM_HANDOVER_FROM_UTRAN_IND
Line 2683: rrc_BoundNas_SendUrrcMmHandoverFromUtranInd()-Message should always have a payload
Line 2708: Tx-URRC_MM_U2L_DEDICATED_PRIORITY_IND
Line 2717: rrc_BoundNas_SendUrrcMmU2LDedPriorityInd()-Message should always have a payload
Line 2733: Tx-URRC_MM_FEMTOCELL_UPD_CNF
Line 2742: rrc_BoundNas_SendUpdateFemtoCellCnf()-Msg not allowed payload
Line 2770: Tx-UrrcMMDrxTimerInd
Line 2779: rrc_BoundNas_SendUrrcCellInd()-Msg not allowed payload
Line 2803: Tx-URRC_MM_BPLMN_STOP_CNF
Line 2812: rrc_BoundNas_SendUrrcMMBplmnStopCnf()-Msg not allowed payload
Line 2836: Tx-URRC_MM_DRX_TIMEOUT_IND
Line 2845: rrc_BoundNas_SendUrrcMMDrxTimeOutInd()-Msg not allowed payload
Line 2869: Tx-URRC_MM_CGI_HOLD_IND
Line 2878: rrc_BoundNas_SendUrrcMMCgiHoldInd()-Msg not allowed payload
Line 2902: Tx-URRC_MM_CGI_STOP_CNF
Line 2911: rrc_BoundNas_SendUrrcMMCgiStopCnf()-Msg not allowed payload
Line 2960: rrc_BoundNas_NasToUrrcMsg()-Unexpected Solicited Msg received=%d 
Line 2967:  rrc_BoundNas_NasToUrrcMsg()  InstanceId = %d, MsgId = %d, FuncPtr = %d
Line 2973: rrc_BoundNas_NasToUrrcMsg()-Unregistred Msg received MsgId=%d
Line 3007: BoundNas - Unable to register MessageId=%d
Line 3034: BoundNas - Unable to de-register MessageId=%d
Line 3040: rrc_BoundUphy - RegistryTablePtr is NULL, MessageId=%d
Line 3063: Tx-URRC_MM_SIM_READ_CNF
Line 3072: rrc_BoundNas_SendMMSimReadCnf()-Msg not allowed payload
Line 3085: Tx-URRC_MM_PERIODIC_CSG_REQ
Line 3094: rrc_BoundNas_SendPeriodicCsgReq()-Msg not allowed payload
Line 3127: Tx-URRC_MM_CSG_VISITED_LIST_IND
Line 3136: rrc_BoundNas_SendUrrcMmPlmnListInd()-Message should always have a payload
Line 3167: Tx-URRC_MM_REDIRECTION_STATUS_IND
Line 3176: rrc_BoundNas_SendUrrcRedirectionStatusInd()-Msg must have payload
Line 3200: Tx-URRC_MM_UNRECOVERED_IND
Line 3209: rrc_BoundNas_SendUrrcMmUnrecoveredInd()-Msg not allowed payload
Line 3264: Tx-URRC_MM_SECURITY_ERR_IND
Line 3272: Tx-URRC_GMM_SECURITY_ERR_IND
Line 3280: rrc_BoundNas_SendCsPsSecurityErrorInd()- Invalid domain
Line 3286: rrc_BoundNas_SendCsPsSecurityErrorInd()-Message should not have a payload
Line 3570: Rx-NAS-MESSAGE_UNKNOWN(%X), %d
Line 3575: RX -Msg: [%s], TransactionId: [%d]
Line 3586: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_BPLMN_STOP_REQ; Tx-URRC_MM_BPLMN_STOP_CNF
Line 3592: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_BPLMN_LIST_REQ; Tx-URRC_MM_BACKGND_PLMN_LIST_FAIL_IND
Line 3603: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_ABORT_BACKGND_PLMN_LIST_REQ; Tx-URRC_MM_ABORT_BACKGND_PLMN_LIST_CNF
Line 3610: rrc_BoundNas_UnboundMsgHandler: Rx -URRC_MM_SUSPEND_RAT_REQ; Tx-URRC_MM_SUSPEND_RAT_CNF
Line 3615: rrc_BoundNas_UnboundMsgHandler: Rx -MsgId(%x); NotHandled
