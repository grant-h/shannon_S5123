Line 189: [OSS]:Oss Decoding Started
Line 194: length =%d
Line 195: FacilityIePtr Dump-->..........
Line 198: SS_ProAsnDecode: Input buffer: 
Line 205: SS_ProAsnDecode: Success
Line 208: SS_ProAsnDecode: SIZE_INVALID
Line 211: SS_ProAsnDecode: CHOICE_INVALID
Line 214: SS_ProAsnDecode: RANGE_INVALID
Line 217: SS_ProAsnDecode: UNSUPPORTED_PDU
Line 220: SS_ProAsnDecode: DECODER_LENGTH_EXCEED (InputLen(%d bits) < unpackedLen(%d bits))
Line 223: SS_ProAsnDecode: Misc error #: %d
Line 229: [ASN]: SS_ProAsnDecode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 234: [ASN]: SS_ProAsnDecode Success, pdu(%d) unpackedLen(%d bits)
Line 275: [OSS]: Enter ss_OssEncodeMsg
Line 316: [OSS]: Invalid Type of service. Due to that OSS encoding failed
Line 327: SS_ProAsnEncode: Success
Line 330: SS_ProAsnEncode: SIZE_INVALID
Line 333: SS_ProAsnEncode: CHOICE_INVALID
Line 336: SS_ProAsnEncode: RANGE_INVALID
Line 339: SS_ProAsnEncode: UNSUPPORTED_PDU
Line 342: SS_ProAsnEncode: ENCODER_BUFSIZE_EXCEED
Line 345: SS_ProAsnEncode: Misc error #: %d
Line 352: [ASN]: SS_ProAsnEncode FAIL, pdu(%d) ErrorCode(%d) ErrorStruct(%s)
Line 357: [ASN]: SS_ProAsnEncode Success, pdu(%d) packedLen(%d bits)
Line 491: [SS_ProAsn_FreeMsg] PDU(%d), decodedMsgPtr to free: 0x%X
Line 497: [OSS]: Freed ss_OssDecodedMsg ptr
Line 589: [OSS]:[Testing]: Invalid Operation
Line 678: [OSS]:[Testing]: Invalid Operation
Line 688: [OSS]:[Testing]: PDU Number/Local Number = %d
Line 729: Memory Allocation failed!!!
Line 815: [OSS][Testing] :SetBasicServiceCode = %d, ServiceCode = %d
Line 820: [OSS][Testing] :Not Sending Basic Service Group
Line 827: [OSS][DBG] : getarg->bit_mask= %x
Line 834: Memory Allocation failed!!!
Line 884: [OSS][DBG] : LcsCommand= %d
Line 897: molr_Type = %d 
Line 932: [OSS][DBG] : molr_Type = %d 
Line 941: [OSS][DBG] : locationMethod = %d 
Line 962: gpsAssistDataLength = %d 
Line 973: [OSS][DBG] : molr_Type = %d 
Line 984: [OSS][DBG] : locationMethod = %d 
Line 1001: [OSS][DBG] : referenceNumber,hGmlcAddressLength,hGmlcAddress = %d,%d,%s 
Line 1021: Memory Allocation failed!!!
Line 1069: [OSS][DBG] : VerificationRes= %d
Line 1081: Memory Allocation failed!!!
Line 1140: [OSS]: DataCodingSchemeIe = %d 
Line 1147: [OSS]: ussd_DataCodingScheme = %d 
Line 1156: [OSS]: ussd_String Length = %d 
Line 1202: Memory Allocation failed!!!
Line 1246: invarg.decoded
Line 1254: [OSS]:[ss_CreateOssInvokeProcessUssdDataArg]: Memory Allocation failed for USSD
Line 1303: [OSS]: [Testing]: Basic Service Code = %d
Line 1317: [OSS]: TeleService Ie: ServiceCode = %d 
Line 1324: [OSS]: BearerService Ie: ServiceCode = %d 
Line 1339: [OSS]: BearerService Ie: NoReplyDurationIe = %d 
Line 1350: [OSS]: Fwd To Number = %d
Line 1359: [OSS]: nbrUser = %d 
Line 1367: [OSS]: defaultPriority = %d 
Line 1380: [OSS]: [ss_CreateOssInvokeRegisterSsArg]: GetArg Memory allocation failed
Line 1412: Memory Allocation failed!!!
Line 1432: [OSS]:[Testing]: Invoke Id = %d
Line 1442: [OSS]: Local value = %d
Line 1516: [OSS]:[Testing]: Invalid Local Value = %d
Line 1577: invarg.decoded
Line 1586: Memory Allocation failed!!!
Line 1646: Memory Allocation failed!!!
Line 1678: Memory Allocation failed!!!
Line 1725: unstructuredSS-Notify: Return Result TRUE
Line 1759: [OSS]: [ss_CreateReturnResultMsg]:Invalid message or Implementation not done
Line 1799: Memory Allocation failed!!!
Line 1901: [OSS]:[Testing]: Invalid value 
Line 1911: Memory Allocation failed!!!
Line 2124: [OSS]:[Testing]:[ss_AnalyzeOssCfxSsInfoIe]: SS_SS_Info_forwardingInfo_chosen 
Line 2133: [OSS]:[Testing]: SS-Code is not present 
Line 2140: [OSS]:[Testing]:[ss_AnalyzeOssCfxSsInfoIe]: In For loop 
Line 2150: [OSS]:[Testing]: BasicServiceCode is not present 
Line 2160: [OSS]:[Testing]: Status is not present 
Line 2189: [OSS]:[Testing]: Telephone Number is not present 
Line 2207: OverallStatus - %d
Line 2208: No Of Bearer services - %d
Line 2212: [OSS]: SS_SS_Info_forwardingInfo_chosen is not Present
Line 2217: [OSS]: OssDecodedSsInfo is NULL
Line 2250: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2258: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2274: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen
Line 2280: [OSS]:[Testing]:[ss_AnalyzeOssCfxInterrogateSsResIe]: SS_forwardingFeatureList_chosen 
Line 2287: [OSS]:[Testing]:[ss_AnalyzeOssCfxInterrogateSsResIe]: In For loop 
Line 2299: [OSS]:[Testing]: BasicServiceCode is not present 
Line 2306: [OSS]:[Testing]: Status is  present & Value = %d
Line 2311: [OSS]:[Testing]: Status param not present 
Line 2323: [OSS]:[Testing]: TelephoneNumberDigits are present: TelephoneNumberDigitsLength = %d 
Line 2333: [OSS]:[Testing]: longForwardedToNumber present 
Line 2342: [OSS]:[Testing]: Telephone Number not present 
Line 2363: OverallStatus - %d
Line 2369: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2376: [OSS]:[Testing]: No Info Present
Line 2498: [OSS]: SS_SS_Info_ss_Data_chosen param not present
Line 2503: [OSS]: OssDecodedReturnResult is NULL
Line 2508: [OSS]: OssDecodedMsgPtr is NULL
Line 2542: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2549: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2597: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen: No Of BearerServices = %d 
Line 2601: [OSS]:[Testing]: ss_SsCwxSeq[%d].BasicServiceCode = %d 
Line 2608: [OSS]:[Testing]: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 2614: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2622: [OSS]:[Testing]: No Info Present
Line 2629: [OSS]: OssInterogateSsDecRetResult is NULL
Line 2665: [OSS]:[Testing]: SS_SS_Info_callBarringInfo_chosen 
Line 2684: [OSS]:[Testing]: BasicServiceCode not present 
Line 2689: [OSS]:[Testing]: SS_CallBarringFeature_ss_Status_present present 
Line 2704: Invalid Operation Type Rxed = %d
Line 2714: OverallStatus - %d
Line 2718: [OSS]:[Testing]: SS_SS_Info_ss_Data_chosen 
Line 2722: [OSS]:[Testing]: SS_SS_Data_ss_Code_present: Present = %d
Line 2728: [OSS]:[Testing]: SS_SS_Data_basicServiceGroupList_present 
Line 2743: [OSS]:[Testing]: SS_SS_Data_ss_Status_present: Present = %d
Line 2763: [OSS]:[Testing]: Invalid Operation type = %d 
Line 2773: [OSS]: IE  not present 
Line 2793: [OSS]:[Testing]: Invalid Operation Type = %d  
Line 2800: [OSS]: IE  not present 
Line 2820: [OSS]:[Testing]: Invalid Operation Type = %d  
Line 2855: [OSS]:[Testing]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 2862: [OSS]:[Testing]: SsStatus is present. OverallStatus= %d
Line 2883: Invalid Operation Type Rxed = %d
Line 2887: [OSS]:[Testing]: Interrogate->Choice: SS_basicServiceGroupList_chosen
Line 2893: [OSS]:[Testing]: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 2899: [OSS]:[Testing]: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 2908: [OSS]:[Testing]: No Info Present
Line 2915: [OSS]: OssInterogateSsDecRetResult is NULL
Line 2982: [OSS]:[Testing]:Validation Success: Send Call Barring Pwd Change Ind to GAPI 
Line 2987: [OSS]:[Testing]:Validation Failed: Send Call Barring Pwd Change Ind to GAPI 
Line 3022: LinkedIdIe -> 0x%02X, InvokeId -> 0x%02X
Line 3051: [OSS]: Interrogate SS: SS_InterrogateSS_Res: Choice Value = %d
Line 3056: [OSS]:SsStatus is present.
Line 3066: [OSS]:: Interrogate->Choice: SS_basicServiceGroupList_chosen: Not expceted for CLIP
Line 3072: [OSS]:: Interrogate->Choice: SS_forwardingFeatureList_chosen-> Not Expected 
Line 3078: [OSS]:: Interrogate->Choice: SS_genericServiceInfo_chosen
Line 3093: [OSS]: No Info Present
Line 3100: [OSS]: OssInterogateSsDecRetResult is NULL
Line 3195: ss_AnalyzeOssInvokeCompIe - ss_State = %s
Line 3200: InvokeId = %d
Line 3205: InvokeId not present
Line 3237: OperationCode -> SS_OP_CODE_NOTIFY_SS.... Do Nothing
Line 3243: OperationCode -> SS_OP_CODE_GET_PWD
Line 3251: OperationCode -> SS_OP_CODE_USS_REQUEST
Line 3281: Message received in illegal ussd state
Line 3310: OperationCode -> SS_OP_CODE_PROCESS_USS_REQUEST
Line 3326: Message received in illegal ussd state
Line 3356: OperationCode -> SS_OP_CODE_USS_NOTIFY
Line 3379: Message received in illegal ussd state
Line 3408: OperationCode -> SS_OP_CODE_LOCATION_NOTIFICATION
Line 3414: OperationCode -> SS_OP_CODE_LCS_AREA_REQ
Line 3421: OperationCode -> SS_OP_CODE_LCS_AREA_CANCEL
Line 3427: Invalid invoke received
Line 3479: [OSS][DBG] : Decoding Success
Line 3496: [OSS][DBG] : LocationType
Line 3516: [OSS][DBG] : LCSClientExternalID
Line 3543: [OSS][DBG] : LCSClientName
Line 3568: [OSS][DBG] : lcsClientName.lcs_FormatIndicator
Line 3570: lcsFormatInd = %d 
Line 3591: [OSS][DBG] : LCSRequestorID
Line 3597: dataCodingScheme = %d 
Line 3598: requestorIDStringLen = %d ,len =%d
Line 3621: [OSS][DBG] : lcsRequestorID.lcs_FormatIndicator
Line 3641: [OSS][DBG] : LCSCodeword
Line 3646: lcsCodewordStringLen = %d  ,len =%d
Line 3673: [OSS][DBG] : LCSServiceTypeID
Line 3677: lcsServiceTypeIDLen = %d ,len =%d
Line 3692: NotificationType = %d
Line 3700: [OSS]:Oss Decoding Failed
Line 3728: [OSS][DBG] : Decoding Success
Line 3768: [OSS]:Oss Decoding Failed
Line 3796: [OSS][DBG] : Decoding Success
Line 3821: [OSS]:Oss Decoding Failed
Line 3853: [OSS][DBG] : Decoding Success
Line 3863: [OSS][DBG] : locationEstimate.length = %d
Line 3870: [OSS][DBG] : Ext_GeographicalInformation
Line 3886: [OSS][DBG] : add_LocationEstimate.length = %d
Line 3893: [OSS][DBG] : Add_GeographicalInformation
Line 3910: [OSS][DBG] : velocityEstimate.length = %d
Line 3922: Velocity Estimate IE Len = %d 
Line 3933: [OSS][DBG] : referenceNumber.length = %d
Line 3935: Reference Number IE = %d 
Line 3948: [OSS][DBG] : h_gmlc_address.length = %d
Line 3952: [OSS][DBG] : GSN_Address
Line 3959: HGLMC IE Len = %d 
Line 3966: [OSS]:Oss Decoding Failed
Line 4003: [OSS]:Oss Decoding Failed
Line 4039: [OSS]: ComponentType = %d
Line 4044: [OSS]: Invoke received
Line 4053: [OSS]: Reject received
Line 4067: [OSS]: Return Error received
Line 4092: [OSS]: Return Result received
Line 4097: Received Invoke ID from NW = %d
Line 4099: Rx (Invoke ID=%d) (Orig ID=%d)
Line 4113: Result Returned Fail.
Line 4120: RX msg is missing an Invoke ID.
Line 4133: [OSS]: Invalid ComponentType = %d
Line 4140: [OSS]:Oss Decoding Failed
Line 4171: [OSS]: ComponentType = %d
Line 4183: [OSS]: InvokeId = %d
Line 4195: [OSS]: unstructuredSS-Request = %d
Line 4206: [OSS]: unstructuredSS-Notify = %d
Line 4234: HCOMMON.MM.LCS_VA_capability = %d
Line 4245: SS_OP_CODE_LOCATION_NOTIFICATION_NOT_SUPPORT
Line 4278: [OSS]: Invalid Local value received = %d
Line 4285: Message doesn't contain a valid InvokeID.
Line 4296: [OSS]: Return Result/Reject/Return Error received: Not Expected in this message
Line 4308: [OSS]: Invalid ComponentType = %d
Line 4315: [OSS]:Oss Decoding Failed
Line 4341: [OSS]: Invoke Received 
Line 4456: [OSS]: Retrun Error Received 
Line 4504: [OSS]: Return Result Received
Line 4520: [OSS]: Received Invoke ID from NW = %d
Line 4521: [OSS]: Rx (Invoke ID=%d) (Orig ID=%d)
Line 4531: [OSS]: Invoke Id not present.
Line 4611: Component Type -> %s
