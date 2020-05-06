Line 130: Initialising Measurement Values
Line 130: Initialising Measurement Values
Line 181: lcsm_FindFreeLocReqNode: No free node in the list
Line 181: lcsm_FindFreeLocReqNode: No free node in the list
Line 189: index_number[LcsmCurrentStackId] %d
Line 189: index_number[LcsmCurrentStackId] %d
Line 203: AddLocReqNode
Line 203: AddLocReqNode
Line 230: lcsm_DelLocReqNode: trying to Delete Invalid Index
Line 230: lcsm_DelLocReqNode: trying to Delete Invalid Index
Line 263: In function DelLocReqNode
Line 263: In function DelLocReqNode
Line 301: lcsm_GetSessionId -Invalid Session Type
Line 301: lcsm_GetSessionId -Invalid Session Type
Line 315: lcsm_HandleSuspReq: RR_LCSM_SUSPEND_REQ
Line 315: lcsm_HandleSuspReq: RR_LCSM_SUSPEND_REQ
Line 336: lcsm_HandleRRCSuspReq: URRC_LCSM_STOP_MEAS_IND
Line 336: lcsm_HandleRRCSuspReq: URRC_LCSM_STOP_MEAS_IND
Line 361: LCSM_PERIODIC_TIMER is Stopped
Line 361: LCSM_PERIODIC_TIMER is Stopped
Line 372: Processing REL7 Msr Pos Req
Line 372: Processing REL7 Msr Pos Req
Line 379: Velocity Request Present
Line 379: Velocity Request Present
Line 394: GPS positioning method is present
Line 394: GPS positioning method is present
Line 398: Gallileo positioning method is present
Line 398: Gallileo positioning method is present
Line 402: SBASS positioning method is present
Line 402: SBASS positioning method is present
Line 407: Modernized GPS  positioning method is present
Line 407: Modernized GPS  positioning method is present
Line 412: QZSS positioning method is present
Line 412: QZSS positioning method is present
Line 416: Glonass positioning method is present
Line 416: Glonass positioning method is present
Line 422: GANSS assist data is recieved in Pos Req
Line 422: GANSS assist data is recieved in Pos Req
Line 453: Additional GPS assist data to be processed later based on GPS chip support
Line 453: Additional GPS assist data to be processed later based on GPS chip support
Line 621: Function: lcsm_HandleRrlpMeasReq
Line 621: Function: lcsm_HandleRrlpMeasReq
Line 629: session_id = %d, reference_number = %d
Line 629: session_id = %d, reference_number = %d
Line 632: Both present and commanded ref no are same: Ignore
Line 632: Both present and commanded ref no are same: Ignore
Line 650: loc_req_db_start = %d
Line 650: loc_req_db_start = %d
Line 662: Unable to get free Loc Req Node, Index %d
Line 662: Unable to get free Loc Req Node, Index %d
Line 697: Adding free node , index = %d
Line 697: Adding free node , index = %d
Line 702: Assistance Data in Msr Position Req 
Line 702: Assistance Data in Msr Position Req 
Line 709: Deleting node, index = %d  
Line 709: Deleting node, index = %d  
Line 715: No nodes init queue
Line 715: No nodes init queue
Line 739: Setting index %d
Line 739: Setting index %d
Line 754: Rel5 Msr Pos extensions Present
Line 754: Rel5 Msr Pos extensions Present
Line 779: lcsm_HandleRrcPosCapabilityReq (%d)
Line 779: lcsm_HandleRrcPosCapabilityReq (%d)
Line 787: gTCS_SMP_LIB[TCS_OPT_CARRIER_TYPE] = (%d), gTCS_SMP_LIB[TCS_MAKE_TYPE] = (%d)
Line 787: gTCS_SMP_LIB[TCS_OPT_CARRIER_TYPE] = (%d), gTCS_SMP_LIB[TCS_MAKE_TYPE] = (%d)
Line 795: [TMO] Transmit POS CAPA from AP to RRC
Line 795: [TMO] Transmit POS CAPA from AP to RRC
Line 800: Transmit POS CAPA from NV to RRC
Line 800: Transmit POS CAPA from NV to RRC
Line 808: Standalone_LocMethodSupp = %d
Line 808: Standalone_LocMethodSupp = %d
Line 828: NetworkAss_GpsSupp = %d
Line 828: NetworkAss_GpsSupp = %d
Line 835: Ganss_Support_Ind = %d
Line 835: Ganss_Support_Ind = %d
Line 838: sizeOfGnssList = %d
Line 838: sizeOfGnssList = %d
Line 858: gLcsm_NSPosCapaRsp is NULL
Line 858: gLcsm_NSPosCapaRsp is NULL
Line 863: 1.LCSM_URRC_POS_CAP_RSP
Line 863: 1.LCSM_URRC_POS_CAP_RSP
Line 864: Pos_Capability_ref = %d
Line 864: Pos_Capability_ref = %d
Line 875: lcsm_HandleNsPosCapabilityReq
Line 875: lcsm_HandleNsPosCapabilityReq
Line 878: Sending LCSM_NS_POS_CAP_REQ
Line 878: Sending LCSM_NS_POS_CAP_REQ
Line 900: lcsm_HandleRrcMeasCmd: methodType = %d, Hor_acc_present = %d, hor_Acc= %d, Ver_acc_present = %d,  Ver_Acc = %d
Line 900: lcsm_HandleRrcMeasCmd: methodType = %d, Hor_acc_present = %d, hor_Acc= %d, Ver_acc_present = %d,  Ver_Acc = %d
Line 902: gps_TimingOfCellWanted = %d, addition_assistance_data_req = %d
Line 902: gps_TimingOfCellWanted = %d, addition_assistance_data_req = %d
Line 913: Sending LCSM_NS_GPS_RELEASE
Line 913: Sending LCSM_NS_GPS_RELEASE
Line 919: Periodic Reporting Timeout Value: %d
Line 919: Periodic Reporting Timeout Value: %d
Line 924: lcsm_HandleRrcMeasCmd: GanssDataPresent = %d
Line 924: lcsm_HandleRrcMeasCmd: GanssDataPresent = %d
Line 941: Set global index_number in SetIndex %d
Line 941: Set global index_number in SetIndex %d
Line 953: Get global index_number in GetIndex %d
Line 953: Get global index_number in GetIndex %d
Line 981: Same Ref Number Flag %d
Line 981: Same Ref Number Flag %d
Line 998: index_number in GetIndexOfSession(loc_req_db_start[LcsmCurrentStackId]) %d
Line 998: index_number in GetIndexOfSession(loc_req_db_start[LcsmCurrentStackId]) %d
Line 1025: Entering  lcsm_HandleFixErrorInd Function 
Line 1025: Entering  lcsm_HandleFixErrorInd Function 
Line 1073: LCSM_RR_APDU_IND Sent to RR with location Error :Error Cause = %s
Line 1073: LCSM_RR_APDU_IND Sent to RR with location Error :Error Cause = %s
Line 1097: lcsm_HandleFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ
Line 1097: lcsm_HandleFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ
Line 1120: lcsm_HandleGanssFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ: error_cause = %d
Line 1120: lcsm_HandleGanssFixErrorInd: Sending LCSM_URRC_MEAS_ERROR_REQ: error_cause = %d
Line 1170: lcsm_ProcessRrApdu: RRLP Component Choice %d
Line 1170: lcsm_ProcessRrApdu: RRLP Component Choice %d
Line 1174: RRLP Assistance Data recieved %d
Line 1174: RRLP Assistance Data recieved %d
Line 1209: the ACK message LCSM_RR_APDU_IND is successfully sent for the  Assistance Data recieved
Line 1209: the ACK message LCSM_RR_APDU_IND is successfully sent for the  Assistance Data recieved
Line 1213: Pal Mem Free Failed: lcsm_ProcessRrApdu
Line 1213: Pal Mem Free Failed: lcsm_ProcessRrApdu
Line 1256: RRLP Msr Position Req Recieved
Line 1256: RRLP Msr Position Req Recieved
Line 1261: RRLP Protocol Error Recieved
Line 1261: RRLP Protocol Error Recieved
Line 1267: RRLP Position capability Request Received
Line 1267: RRLP Position capability Request Received
Line 1275: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1275: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1285: End of the Function : lcsm_ProcessRrApdu
Line 1285: End of the Function : lcsm_ProcessRrApdu
Line 1314: GANSS Position Methods Requested by nw
Line 1314: GANSS Position Methods Requested by nw
Line 1342: Assistance Needed requested by nw
Line 1342: Assistance Needed requested by nw
Line 1347: Ganss Extension Container Requested by nw
Line 1347: Ganss Extension Container Requested by nw
Line 1387: Position Capability Response is sent to RR
Line 1387: Position Capability Response is sent to RR
Line 1398: PosCapabilityRsp Mem Free Failed: lcsm_HandlePositionCapReq
Line 1398: PosCapabilityRsp Mem Free Failed: lcsm_HandlePositionCapReq
Line 1416: lcsm_HandleProtocolError 
Line 1416: lcsm_HandleProtocolError 
Line 1427: lcsm_HandleProtocolError: Error in lcsm_RrlpEncode
Line 1427: lcsm_HandleProtocolError: Error in lcsm_RrlpEncode
Line 1439: LCSM_RR_APDU_IND Sent to RR with Protocol Error %s
Line 1439: LCSM_RR_APDU_IND Sent to RR with Protocol Error %s
Line 1584: Rrlp_ProAsnEncode: Success
Line 1584: Rrlp_ProAsnEncode: Success
Line 1587: Rrlp_ProAsnEncode: SIZE_INVALID
Line 1587: Rrlp_ProAsnEncode: SIZE_INVALID
Line 1590: Rrlp_ProAsnEncode: CHOICE_INVALID
Line 1590: Rrlp_ProAsnEncode: CHOICE_INVALID
Line 1593: Rrlp_ProAsnEncode: RANGE_INVALID
Line 1593: Rrlp_ProAsnEncode: RANGE_INVALID
Line 1596: Rrlp_ProAsnEncode: UNSUPPORTED_PDU
Line 1596: Rrlp_ProAsnEncode: UNSUPPORTED_PDU
Line 1599: Rrlp_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 1599: Rrlp_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 1602: Rrlp_ProAsnEncode: Misc error #: %d
Line 1602: Rrlp_ProAsnEncode: Misc error #: %d
Line 1609: Rrlp_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1609: Rrlp_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1616: Rrlp_ProAsnEncode Success, pdu(%d) packedLen(%d)
Line 1616: Rrlp_ProAsnEncode Success, pdu(%d) packedLen(%d)
Line 1683: Rrlp_ProAsnDecode: Input buffer: 
Line 1688: Rrlp_ProAsnDecode: Success
Line 1688: Rrlp_ProAsnDecode: Success
Line 1691: Rrlp_ProAsnDecode: SIZE_INVALID
Line 1691: Rrlp_ProAsnDecode: SIZE_INVALID
Line 1694: Rrlp_ProAsnDecode: CHOICE_INVALID
Line 1694: Rrlp_ProAsnDecode: CHOICE_INVALID
Line 1697: Rrlp_ProAsnDecode: RANGE_INVALID
Line 1697: Rrlp_ProAsnDecode: RANGE_INVALID
Line 1700: Rrlp_ProAsnDecode: UNSUPPORTED_PDU
Line 1700: Rrlp_ProAsnDecode: UNSUPPORTED_PDU
Line 1703: Rrlp_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 1703: Rrlp_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 1706: Rrlp_ProAsnDecode: Misc error #: %d
Line 1706: Rrlp_ProAsnDecode: Misc error #: %d
Line 1713: Rrlp_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1713: Rrlp_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 1719: Rrlp_ProAsnDecode Success, pdu(%d) unpackedLen(%d)
Line 1719: Rrlp_ProAsnDecode Success, pdu(%d) unpackedLen(%d)
Line 1819: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1819: [Rrlp_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 1842: [lcsm_HandleProtocolErrorRsp]
Line 1842: [lcsm_HandleProtocolErrorRsp]
Line 1844: [Error Code]: %s
Line 1844: [Error Code]: %s
Line 1848: [Protocol Error , Extension Conatiner Present]
Line 1848: [Protocol Error , Extension Conatiner Present]
