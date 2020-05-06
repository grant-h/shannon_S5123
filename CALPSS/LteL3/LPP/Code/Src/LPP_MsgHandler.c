Line 85: LPP_ProcessTLP_Msg() - LppCurrentStackId %d 
Line 91: LPP_ProcessTLP_Msg() - TLP ==> LPP: RESET_AGNSS_ASSISTANTDATA
Line 97: LPP_ProcessTLP_Msg() - TLP ==> LPP: UPDATE_AGNSS_LOC_INFO
Line 103: LPP_ProcessTLP_Msg() - TLP ==> LPP: RESET_OTDOA_ASSISTANTDATA
Line 109: LPP_ProcessTLP_Msg() - TLP ==> LPP: INVALID msgType(0x%x)
Line 145: LPP_ProcessNS_Msg() - LppCurrentStackId %d 
Line 151: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_EMC_MODE
Line 158: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_GNSS_LOCK_MODE
Line 165: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_CAPA_RSP
Line 171: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_LOC_INFO_RSP
Line 177: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_ASSIST_DATA_REQ
Line 183: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_A_GNSS_ERROR
Line 189: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_SUPL_LPP_DATA, flag(%d)
Line 228: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_LCS_MOLR_REQ
Line 231: LPP_ProcessNS_Msg() - EPC LCS is not supported!!!
Line 244: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_LCS_LOC_NOT_RSP
Line 250: LPP_ProcessNS_Msg() - NS ==> LPP: NS_LPP_LOCATION_INFO_CNF
Line 259: LPP_ProcessNS_Msg() - NS ==> LPP: INVALID TypMsg(%d)
Line 295: LPP_ProcessEMM_Msg() - LppCurrentStackId %d 
Line 301: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_STATE_NOTI
Line 308: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_DATA_CNF
Line 315: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_EST_CNF
Line 322: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_ERR_IND
Line 328: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LPP_MSG_IND
Line 336: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LCS_MSG_IND
Line 344: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LCS_DATA_CNF
Line 351: LPP_ProcessEMM_Msg() - EMM ==> LPP: EMM_LCS_STATUS_IND
Line 358: LPP_ProcessEMM_Msg() - EMM ==> LPP: INVALID TypMsg(0x%x)
Line 394: LPP_ProcessRRC_Msg() - LppCurrentStackId %d 
Line 400: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_ECID_RSP
Line 406: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_CELL_IND
Line 412: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_OTDOA_RSP
Line 418: LPP_ProcessRRC_Msg() - RRC ==> LPP: RRC_LPP_LOCATION_REQ
Line 427: LPP_ProcessRRC_Msg() - RRC ==> LPP: INVALID msgType(%d)
Line 479: LPP_ProcessNS_A_GNSS_EMC_MODE()
Line 481: LPP_ProcessNS_A_GNSS_EMC_MODE() - EmergencyCallPresent (%d)
Line 497: LPP_ProcessNS_A_GNSS_LOCK_MODE()
Line 499: LPP_ProcessNS_A_GNSS_LOCK_MODE() - GNSSGpsLockStatus (%d)
Line 519: LPP_ProcessNS_A_GNSS_CapabilitiesRsp()
Line 530: LPP_ProcessNS_A_GNSS_CapabilitiesRsp() - sessionTableIndex(%d)
Line 588: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - flag(0x%x)
Line 591: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - found(%d) sessionTableIndex(%d)
Line 599: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - pAsnLPP_Message is NULL
Line 605: LPP_ProcessNS_A_GNSS_ProvideLocationInformation() - MALLOC FAIL!!!
Line 679: LPP_ProcessNS_A_GNSS_AssistanceDataReq() - LPP_a_gnss_RequestLocationInformation_present
Line 691: LPP_ProcessNS_A_GNSS_AssistanceDataReq() - found(%d) sessionTableIndex(%d) transactionNumber(%d)
Line 704: LPP_ProcessNS_A_GNSS_AssistanceDataReq() - Error to process request assistance data!!! errorBitMask(0x%x)
Line 735: LPP_ProcessNS_A_GNSS_Error() - provideLocationInformation.flag (0x%x)
Line 756: LPP_ProcessNS_A_GNSS_Error() - LPP_a_gnss_RequestLocationInformation_present
Line 774: LPP_ProcessNS_A_GNSS_Error() - found(%d) sessionTableIndex(%d)
Line 781: LPP_ProcessNS_A_GNSS_Error() - pAsnLPP_Message is NULL
Line 787: LPP_ProcessNS_A_GNSS_Error() - MALLOC FAIL!!!
Line 828: LPP_CheckGpsAvailable() - lppIsGpsAvailable(%d)
Line 833: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 842: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 859: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - numberOfSupportedBand(%d)
Line 879: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 894: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - [%d] pSupportedBandListEUTRA_v9a0->value.bandEUTRA_v9a0(%d)
Line 915: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - MALLOC FAIL!!!
Line 929: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - [%d] pSupportedBandListEUTRA->value.bandEUTRA(%d)
Line 949: .......... ASN ENCODING ..........
Line 953: LPP_ProcessNS_SUPL_OTDOA_RequestCapability() - ENCODE FAIL!!! ret(%d)
Line 1022: LPP_ProcessNS_SUPL_OTDOA_ProvideAssistanceData() - DECODE FAIL!!! ret(%d)
Line 1063: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - servingCellId(0x%x) otdoa_ReferenceCellInfo.physCellId(0x%x)
Line 1070: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - MALLOC FAIL!!!
Line 1076: .......... ASN ENCODING ..........
Line 1080: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - ENCODE FAIL!!! ret(%d)
Line 1100: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - Send OTDOA Reqeust
Line 1123: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - MALLOC FAIL!!!
Line 1129: .......... ASN ENCODING ..........
Line 1134: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - ENCODE FAIL!!! ret(%d)
Line 1152: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - Send Error
Line 1157: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - MALLOC FAIL!!!
Line 1168: .......... ASN ENCODING ..........
Line 1173: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - ENCODE FAIL!!! ret(%d)
Line 1189: LPP_ProcessNS_SUPL_OTDOA_RequestLocationInformation() - DECODE FAIL!!! ret(%d)
Line 1216: LPP_CheckGpsAvailable() - lppIsGpsAvailable(%d)
Line 1221: LPP_ProcessNS_SUPL_ECID_RequestCapability() - MALLOC FAIL!!!
Line 1229: LPP_ProcessNS_SUPL_ECID_RequestCapability() - MALLOC FAIL!!!
Line 1246: LPP_ProcessNS_SUPL_ECID_RequestCapability() - pAsnECID_ProvideCapabilities->ecid_MeasSupported.value(0x%x)
Line 1248: .......... ASN ENCODING ..........
Line 1252: LPP_ProcessNS_SUPL_ECID_RequestCapability() - ENCODE FAIL!!! ret(%d)
Line 1286: LPP_ProcessNS_SUPL_OTDOA_TriggerRequestAssistanceData() - MALLOC FAIL!!!
Line 1292: .......... ASN ENCODING ..........
Line 1296: LPP_ProcessNS_SUPL_OTDOA_TriggerRequestAssistanceData() - ENCODE FAIL!!! ret(%d)
Line 1359: EUTRAN_LCS_ProcessLocationNotificationResMsg() - MALLOC FAIL!!!
Line 1365: <<-------------------------------------------------
Line 1366: | ++ LocationNotificationRes
Line 1384: | bit_mask(0x%02x)
Line 1386: | verificationResponse(%d)
Line 1387: >>-------------------------------------------------
Line 1389: .......... ASN ENCODING ..........
Line 1393: EUTRAN_LCS_ProcessLocationNotificationResMsg() - ENCODE FAIL!!! ret(%d)
Line 1432: EUTRAN_LCS_ProcessMOLR_Req() - MALLOC FAIL!!!
Line 1444: .......... ASN ENCODING ..........
Line 1448: EUTRAN_LCS_ProcessMOLR_Req() - ENCODE FAIL!!! ret(%d)
Line 1509: <<<<< INCOMING LPP MESSAGE <<<<<
Line 1535: LPP_ProcessEMM_LPP_MsgInd() - LPP_lpp_MessageBody_present
Line 1541: [][][][ LPP MESSAGE CHOICE ][][][] LPP_requestCapabilities_chosen
Line 1549: [][][][ LPP MESSAGE CHOICE ][][][] LPP_provideAssistanceData_chosen
Line 1555: [][][][ LPP MESSAGE CHOICE ][][][] LPP_requestLocationInformation_chosen
Line 1563: [][][][ LPP MESSAGE CHOICE ][][][] LPP_abort_chosen
Line 1571: [][][][ LPP MESSAGE CHOICE ][][][] LPP_error_chosen
Line 1586: LPP_ProcessEMM_LPP_MsgInd() - LPP_ReliableTransport returns (%d)
Line 1594: LPP_ProcessEMM_LPP_MsgInd() - DECODE FAIL!!! ret(%d)
Line 1617: EUTRAN_LCS_ProcessEMM_LCS_StatusInd()
Line 1657: LPP_ProcessRRC_ECID_Rsp() - LPP_ecid_RequestLocationInformation_present
Line 1668: LPP_ProcessRRC_ECID_Rsp() - found(%d) sessionTableIndex(%d)
Line 1675: LPP_ProcessRRC_ECID_Rsp() - pAsnLPP_Message is NULL
Line 1681: LPP_ProcessRRC_ECID_Rsp() - MALLOC FAIL!!!
Line 1710: LPP_ProcessRRC_ECID_Rsp() - MALLOC FAIL!!!
Line 1733: .......... ASN ENCODING ..........
Line 1737: LPP_ProcessRRC_ECID_Rsp() - ENCODE FAIL!!! ret(%d)
Line 1769: <<-------------------------------------------------
Line 1770: | ++ RRM_RRC_LPP_MsgCellInd
Line 1771: | ValildCellInd(%d)
Line 1772: | physCellId(%d)
Line 1773: | ecgi_MCC(%d %d %d)
Line 1774: | ecgi_MNC(%d %d %d)
Line 1775: | ecgi_cellIdentity(0x%x)
Line 1776: | DlEarfcn(%d)
Line 1777: >>-------------------------------------------------
Line 1780: LPP_ProcessRRC_CELL_Ind() - previous physicalCellId(%d)
Line 1786: LPP_ProcessRRC_CELL_Ind() - ret(%d)
Line 1814: LPP_ProcessRRC_CELL_Ind() - LPP_ecid_RequestLocationInformation_present
Line 1864: LPP_ProcessRRC_OTDOA_Rsp() - LPP_otdoa_RequestLocationInformation_present
Line 1875: LPP_ProcessRRC_OTDOA_Rsp() - found(%d) sessionTableIndex(%d)
Line 1882: LPP_ProcessRRC_OTDOA_Rsp() - pAsnLPP_Message is NULL
Line 1888: LPP_ProcessRRC_OTDOA_Rsp() - MALLOC FAIL!!!
Line 1917: LPP_ProcessRRC_OTDOA_Rsp() - MALLOC FAIL!!!
Line 1934: LPP_OTDOA_ProvideLocationInformation_otdoa_Error_present is set to TRUE
Line 1967: .......... ASN ENCODING ..........
Line 1971: LPP_ProcessRRC_OTDOA_Rsp() - ENCODE FAIL!!! ret(%d)
Line 2041: LPP_SendMsgToRRC() - Fail to send message! rst(%d)
Line 2049: LPP_SendMsgToRRC() - PAL Event Setting ERROR!!!
Line 2057: LPP_SendMsgToRRC() - PAL Event Setting ERROR!!!
Line 2095: LPP_SendMsgToEMM() - msgtype(%d)
Line 2101: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_DATA_REQ_E, sessionTableIndex(%d) etransactionId(%d)
Line 2107: LPP_SendMsgToEMM() - LPP_EMM_NULL
Line 2115: LPP_SendMsgToEMM() - LPP_EMM_TMP_NOT_READY, Save a message in queue
Line 2122: LPP_SendMsgToEMM() - LPP_EMM_READY, EST_REQ will be sent
Line 2133: LPP_SendMsgToEMM() - LPP_WAITING_FOR_EMM_CON
Line 2140: LPP_SendMsgToEMM() - LPP_EMM_CONNECTED, sending the data_req to EMM!!
Line 2145: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_DATA_REQ_E
Line 2146: >>>>> OUTGOING LPP MESSAGE >>>>>
Line 2161: LPP_SendMsgToEMM() - Fail to send message! rst(%d)
Line 2175: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_EST_REQ_E
Line 2189: LPP_SendMsgToEMM() - Fail to send message! rst(%d)
Line 2196: LPP_SendMsgToEMM() - LPP_EMM_REL_REQ_E
Line 2197: LPP_SendMsgToEMM() - LPP ==> EMM: LPP_EMM_REL_REQ_E
Line 2212: LPP_SendMsgToEMM() - Fail to send message! rst(%d)
Line 2251: LPP_SendMsgToNS() - Fail to send message! rst(%d)
Line 2306: LPP_SendRRC_ECID_Req() - MALLOC FAIL!!!
Line 2319: LPP_SendRRC_ECID_Req() - LPP ==> RRC: LPP_RRC_ECID_REQ w/ reportingAmount(%d) reportingInterval(%d)
Line 2342: LPP_SendRRC_ECID_Abort() - MALLOC FAIL!!!
Line 2348: LPP_SendRRC_ECID_Abort() - LPP ==> RRC: LPP_RRC_ECID_ABORT
Line 2387: LPP_SendRRC_OTDOA_Req() - MALLOC FAIL!!!
Line 2398: LPP_SendRRC_OTDOA_Req() - LPP ==> RRC: LPP_RRC_OTDOA_REQ w/ reportingAmount(%d) reportingInterval(%d)
Line 2421: LPP_SendRRC_OTDOA_Abort() - MALLOC FAIL!!!
Line 2427: LPP_SendRRC_OTDOA_Abort() - LPP ==> RRC: LPP_RRC_OTDOA_ABORT
Line 2448: LPP_SendRRC_OTDOA_ResultReq() - MALLOC FAIL!!!
Line 2454: LPP_SendRRC_OTDOA_ResultReq() - LPP ==> RRC: LPP_RRC_OTDOA_RESULT_REQ
Line 2477: LPP_SendRRC_LocationInfoCnf() - MALLOC FAIL!!!
Line 2502: LPP_SendRRC_LocationInfoCnf() - LPP ==> RRC: LPP_RRC_LOCATION_INFO_RESULT
Line 2529: LPP_SendNS_A_GNSS_RequestLocationInformation() - MALLOC FAIL!!!
Line 2598: LPP_SendNS_A_GNSS_RequestLocationInformation() - LPP ==> NS: LPP_NS_A_GNSS_LOC_INFO_REQ
Line 2621: LPP_SendNS_A_GNSS_Abort() - MALLOC FAIL!!!
Line 2644: LPP_SendNS_A_GNSS_Abort() - LPP ==> NS: LPP_NS_A_GNSS_ERROR
Line 2875: LPP_SendNS_A_GNSS_ResetAssistanceData() - MALLOC FAIL!!!
Line 2896: LPP_SendNS_A_GNSS_ResetAssistanceData() - LPP ==> NS: LCSM_NS_RESET_ASIST_DATA_NOTI
Line 2922: LPP_SendNS_UpdateLocationInformation() - MALLOC FAIL!!!
Line 2945: LPP_SendNS_UpdateLocationInformation() - LPP ==> NS: LPP_NS_UPDATE_LOC_INFO_NOTI
Line 2972: LPP_SendNS_A_GNSS_CapabilitiesReq() - MALLOC FAIL!!!
Line 2995: LPP_SendNS_A_GNSS_CapabilitiesReq() - LPP ==> NS: LPP_NS_A_GNSS_CAPA_REQ
Line 3022: LPP_SendNS_A_GNSS_AssistanceDataRsp() - MALLOC FAIL!!!
Line 3045: LPP_SendNS_A_GNSS_AssistanceDataRsp() - LPP ==> NS: LPP_NS_A_GNSS_ASSIST_DATA_RSP
Line 3131: LPP_SendNS_SUPL_LPP_Data() - MALLOC FAIL!!!
Line 3154: LPP_SendNS_SUPL_LPP_Data() - MALLOC FAIL!!!
Line 3162: LPP_SendNS_SUPL_LPP_Data() - LPP ==> NS: LPP_NS_SUPL_LPP_DATA flag(%d)
Line 3185: LPP_SendNS_StartMdtLocationNtf() - MALLOC FAIL!!!
Line 3206: LPP_SendNS_StartMdtLocationNtf() - LPP ==> NS: LPP_NS_START_MDT_LOCATION_NTF enable(%d)
Line 3241: EUTRAN_LCS_SendNS_LocationNotification() - MALLOC FAIL!!!
Line 3264: EUTRAN_LCS_SendNS_LocationNotification() - LPP ==> NS: LPP_LCS_NS_LOC_NOT_REQ
Line 3303: EUTRAN_LCS_SendNS_MOLR_Res() - MALLOC FAIL!!!
Line 3330: EUTRAN_LCS_SendNS_MOLR_Res() - LPP ==> NS: LPP_LCS_NS_MOLR_RSP
Line 3364: LPP_SendProvideLocationInformation() - sessionTableIndex(%d) periodicReportingAmount(%d)
Line 3440: LPP_SendOTDOA_Error() - transactionNumber(%d)
Line 3464: LPP_SendOTDOA_Error() - transactionNumber(%d) found(%d) sessionTableIndex(%d)
Line 3471: LPP_SendOTDOA_Error() - pAsnLPP_Message is NULL
Line 3477: LPP_SendOTDOA_Error() - MALLOC FAIL!!!
Line 3529: LPP_RelMsgToEMM() - MALLOC FAIL!!!
Line 3594: LPP_SendLPP_Message() - sessionTableIndex(%d)
Line 3596: <<-------------------------------------------------
Line 3597: | ++ LPP_Message
Line 3609: | transactionID.initiator(%d)
Line 3613: | transactionID.transactionNumber(%d)
Line 3617: | endTransaction(%d)
Line 3623: | sequenceNumber(%d)
Line 3628: | acknowledgement.ackRequested(%d)
Line 3635: | bit_mask(0x%x)
Line 3636: >>-------------------------------------------------
Line 3643: .......... ASN ENCODING ..........
Line 3647: LPP_SendLPP_Message() - ENCODE FAIL!!! ret(%d)
Line 3658: LPP_SendLPP_Message() - MALLOC FAIL!!!
Line 3687: LPP_SendLPP_Message() - MALLOC FAIL!!!
Line 3765: LPP_ProcessAbort() - LPP_Abort_criticalExtensions_c1_chosen
Line 3771: LPP_ProcessAbort() - LPP_abort_r9_chosen
Line 3777: LPP_ProcessAbort() - LPP_commonIEsAbort_present
Line 3781: LPP_ProcessAbort() - LPP_epdu_Abort_present
Line 3788: LPP_ProcessAbort() - LPP_Abort_criticalExtensions_c1_spareX_chosen
Line 3796: LPP_ProcessAbort() - LPP_Abort_criticalExtensions_criticalExtensionsFuture_chosen
Line 3799: LPP_ProcessAbort() - INVALID choice
Line 3819: LPP_ProcessAbort() - transactionNumber(%d)
Line 3829: LPP_ProcessAbort() - requestedLocationInfo(0x%x)
Line 3889: LPP_ProcessError() - LPP_error_r9_chosen
Line 3893: LPP_ProcessError() - LPP_commonIEsError_present
Line 3904: LPP_ProcessError() - INVALID errorCause
Line 3910: LPP_ProcessError() - LPP_epdu_Error_preesnt
Line 3915: LPP_ProcessError() - LPP_Error_criticalExtensionsFuture_chosen
Line 3918: LPP_ProcessError() - INVALID choice
Line 3931: LPP_ProcessError() - transactionNumber(%d)
Line 3941: LPP_ProcessError() - requestedLocationInfo(0x%x)
Line 3998: LPP_SendAck() - sessionTableIndex(%d), sequenceNumber(%d)
Line 4003: LPP_SendAck() - MALLOC FAIL!!!
Line 4008: <<-------------------------------------------------
Line 4009: | ++ LPP_Message [ACK]
Line 4013: | endTransaction(%d)
Line 4018: | acknowledgement.ackRequested(%d)
Line 4022: | acknowledgement.ackIndicator(%d)
Line 4025: | bit_mask(0x%x)
Line 4026: >>-------------------------------------------------
Line 4028: .......... ASN ENCODING ..........
Line 4032: LPP_SendAck() - ENCODE FAIL!!! ret(%d)
Line 4041: LPP_SendAck() - MALLOC FAIL!!!
Line 4049: * [ACK] SEND ACK FOR (%d)
Line 4072: LPP_SendAck() - MALLOC FAIL!!!
Line 4107: LPP_ReliableTransport() - sessionTableIndex(%d) endTransaction(%d)
Line 4112: LPP_ReliableTransport() - LPP_acknowledgement_present
Line 4114: LPP_ReliableTransport() - ackRequested(%d)
Line 4121: LPP_ReliableTransport() - LPP_sequenceNumber_present
Line 4130: LPP_ReliableTransport() - ACK Requested, But SequenceNumber is NOT included!!!
Line 4137: LPP_ReliableTransport() - LPP_ackIndicator_present
Line 4140: **************************************************
Line 4142: * [ACK] WAITING ACK FOR (%d)
Line 4144: * [ACK] RECEIVE ACK FROM NETWORK (%d)
Line 4145: **************************************************
Line 4155: Received ACK from Network (%d). But sessionTableIndex is out of range!!!
Line 4162: LPP_ReliableTransport() - LPP_sequenceNumber_present
Line 4164: LPP_ReliableTransport() - pAsnLPP_Message->sequenceNumber(%d)
Line 4168: LPP_ReliableTransport() - recentSequenceNumber(%d)
Line 4193: LPP_ReliableTransport() - NOT DUPLICATED & LPP_transactionID_present
Line 4274: EUTRAN_LCS_SendEMM_LCS_Msg() - transactionId(%d) componentID_Tag(%d) invokeId(%d) errorOperationCode(%d)
Line 4279: EUTRAN_LCS_SendEMM_LCS_Msg() - MALLOC FAIL!!!
Line 4330: EUTRAN_LCS_SendEMM_LCS_Msg() - MALLOC FAIL!!!
