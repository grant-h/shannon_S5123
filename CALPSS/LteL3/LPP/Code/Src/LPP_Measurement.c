Line 94: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_commonIEsRequestLocationInformation_present
Line 99: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_triggeredReporting_present
Line 101: LPP_ProcessCommonIEsRequestLocationInformation() - triggeredReporting.cellChange(%d)
Line 116: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_qos_present
Line 121: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_responseTime_present
Line 132: LPP_ProcessCommonIEsRequestLocationInformation() - responseTime(%d) seconds
Line 139: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_periodicalReporting_present
Line 154: LPP_ProcessCommonIEsRequestLocationInformation() - LPP_reportingAmount_present
Line 187: LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingAmount(%d)
Line 228: LPP_ProcessCommonIEsRequestLocationInformation() - periodicReportingInterval(%d)
Line 291: LPP_ProcessOTDOA_RequestLocationInformation() - assistanceDataTimeStamp(%d)
Line 305: LPP_ProcessOTDOA_RequestLocationInformation() - LPP_otdoa_RequestAssistanceData_present
Line 317: LPP_ProcessOTDOA_RequestLocationInformation() - servingCellId(0x%x) otdoa_ReferenceCellInfo.physCellId(0x%x)
Line 319: LPP_ProcessOTDOA_RequestLocationInformation() - Send OTDOA Reqeust
Line 328: LPP_ProcessOTDOA_RequestLocationInformation() - assistanceAvailability(%d)
Line 404: LPP_CheckGpsAvailable() - lppIsGpsAvailable(%d)
Line 407: LPP_RequestLocationInformation_r9() - requestLocationInformation_r9.bit_mask(0x%x)
Line 428: LPP_RequestLocationInformation_r9() - LPP_a_gnss_RequestLocationInformation_present
Line 473: LPP_RequestLocationInformation_r9() - LPP_ecid_RequestLocationInformation_present
Line 510: LPP_RequestLocationInformation_r9() - LPP_otdoa_RequestLocationInformation_present
Line 568: LPP_ProcessRequestLocationInformation()
Line 573: LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
Line 576: .......... Initializing LocatioinInformationElement ..........
Line 578: <<-------------------------------------------------
Line 579: | ++ LocatioinInformationElement
Line 583: | sessionTableIndex(%d)
Line 587: | transactionNumber(%d)
Line 591: | requestedLocationInformation(%d)
Line 595: | errorBitMask(0x%x)
Line 601: LPP_ProcessRequestLocationInformation() - MALLOC FAIL!!!
Line 607: >>-------------------------------------------------
Line 705: LPP_ConvertToOTDOA_SignalMeasurementInformation() - NULL Pointer!!!
Line 718: <<-------------------------------------------------
Line 719: | ++ referenceCell
Line 727: | systemFrameNumber.value(0x%02x %02x)
Line 729: | systemFrameNumber.length(%d)
Line 736: !!!!!!!!!! physCellIdRef(%d) is out of range !!!!!!!!!!
Line 737: >>-------------------------------------------------
Line 741: | physCellIdRef(%d)
Line 748: | MCC
Line 752: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 753: >>-------------------------------------------------
Line 758: | MNC
Line 762: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 763: >>-------------------------------------------------
Line 777: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 780: | cellIdentity.length(%d)
Line 787: | earfcnRef(%d)
Line 794: | earfcnRef_v9a0(%d)
Line 811: | error_Resolution(0x%02x)
Line 821: | error_Value(0x%02x)
Line 833: | error_NumSamples(0x%02x)
Line 837: >>-------------------------------------------------
Line 842: LPP_ConvertToOTDOA_SignalMeasurementInformation() - numberOfNeibourCells(%d)
Line 849: <<-------------------------------------------------
Line 850: | ++ neibourCell[%d]
Line 857: LPP_ConvertToOTDOA_SignalMeasurementInformation() - MALLOC FAIL!!!
Line 877: !!!!!!!!!! physCellIdNeighbour(%d) is out of range !!!!!!!!!!
Line 878: >>-------------------------------------------------
Line 886: | physCellIdNeighbour(%d)
Line 893: | MCC
Line 898: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 899: >>-------------------------------------------------
Line 906: | MNC
Line 911: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 912: >>-------------------------------------------------
Line 930: | earfcnNeighbour(%d)
Line 937: | earfcnNeighbour_v9a0(%d)
Line 945: !!!!!!!!!! rstd(%d) is out of range !!!!!!!!!!
Line 946: >>-------------------------------------------------
Line 952: | rstd(%d)
Line 966: | error_Resolution(0x%02x)
Line 977: | error_Value(0x%02x)
Line 990: | error_NumSamples(0x%02x)
Line 994: >>-------------------------------------------------
Line 1001: !!!!!!!!!! neighbourMeasurementList is NULL !!!!!!!!!!
Line 1058: LPP_ProcessOTDOA_ProvideLocationInformation() - ValildMeas(%d)
Line 1127: LPP_OTDOA_ProvideLocationInformation_otdoa_Error_present is set to TRUE
Line 1190: LPP_ConvertToECID_MeasuredResultsElement() - NULL Pointer!!!
Line 1199: !!!!!!!!!! physCellId(%d) is out of range !!!!!!!!!!
Line 1202: | physCellId(%d)
Line 1208: | MCC
Line 1212: !!!!!!!!!! FAIL to convert MCC !!!!!!!!!!
Line 1216: | MNC
Line 1220: !!!!!!!!!! FAIL to convert MNC !!!!!!!!!!
Line 1229: cellGlobalId.cellIdentity.u.eutra.value is not NULL!!!
Line 1240: | cellIdentity.value(0x%02x %02x %02x %02x)
Line 1243: | cellIdentity.length(%d)
Line 1253: | arfcnEUTRA_v9a0(%d)
Line 1258: | arfcnEUTRA(%d)
Line 1271: pDst->systemFrameNumber.value is not NULL!!!
Line 1279: | systemFrameNumber.value(0x%02x %02x)
Line 1282: | systemFrameNumber.length(%d)
Line 1292: !!!!!!!!!! rsrp-Result(%d) is out of range !!!!!!!!!!
Line 1295: | rsrp_Result(%d)
Line 1305: !!!!!!!!!! rsrq_Result(%d) is out of range !!!!!!!!!!
Line 1308: | rsrq_Result(%d)
Line 1318: !!!!!!!!!! ue_RxTxTimeDiff(%d) is out of range !!!!!!!!!!
Line 1321: | ue_RxTxTimeDiff(%d)
Line 1368: <<-------------------------------------------------
Line 1369: | ++ primaryCell
Line 1372: >>-------------------------------------------------
Line 1383: LPP_ProcessECID_ProvideLocationInformation() - numberOfNeibourCells(%d)
Line 1387: <<-------------------------------------------------
Line 1388: | ++ neibourCell[%d]
Line 1393: LPP_ProcessECID_ProvideLocationInformation() - MALLOC FAIL!!!
Line 1407: >>-------------------------------------------------
Line 1425: measuredResultsList list is empty. Clear servingCellMeasuredResults.
Line 1431: <<-------------------------------------------------
Line 1436: LPP_ProcessECID_ProvideLocationInformation() - MALLOC FAIL!!!
Line 1454: >>-------------------------------------------------
Line 1503: LPP_ProcessECID_ProvideLocationInformation() - ValildMeas(0x%x)
Line 1566: LPP_ProvideLocationInformation_r9() - pDst->bit_mask(0x%x) bitMask(0x%x)
Line 1582: LPP_ProvideLocationInformation_r9() - pLocationInformation->flag (0x%x)
Line 1601: LPP_ProvideLocationInformation_r9() - LPP_a_gnss_ProvideLocationInformation_present
Line 1652: LPP_ProvideLocationInformation_r9() - LPP_otdoa_ProvideLocationInformation_present
Line 1664: LPP_ProvideLocationInformation_r9() - LPP_ecid_ProvideLocationInformation_present
Line 1695: LPP_ProvideLocationInformation_r9() - errorBitMask(0x%x)
Line 1733: LPP_ProcessProvideLocationInformation() - NULL Pointer!!!
Line 1766: LPP_ProcessProvideLocationInformation() - ret(0x%x) requestedLocationInformation(0x%x)
