Line 122: Invalid LatchReqest
Line 134: uhal_UmtsRssiMeasurementReq: measurement_server is NULL
Line 164: Invalid LatchReqest
Line 176: uhal_UmtsInitialRscpEcNoMeasurementReq: measurement_server is NULL
Line 212: Invalid LatchReqest
Line 224: uhal_UmtsRscpEcNoUpdateMeasurementReq: measurement_server is NULL
Line 255: Invalid LatchReqest
Line 267: uhal_UmtsCellSearchReq: measurement_server is NULL
Line 296: Invalid Reqest
Line 308: uhal_UmtsPartialSearchReq: measurement_server is NULL
Line 360: MMC -> UMTS RSSI measurement
Line 363: Invalid uhal_MmcUmtsRssiMeasurementReq
Line 374: rssi_req_ptr is NULL in  uhal_MmcUmtsRssiMeasurementReq
Line 384: rssi_req_ptr->frequencyList is NULL in  uhal_MmcUmtsRssiMeasurementReq
Line 403: UmtsMeasurementServerReset fail
Line 408:  MMC -> UMTS RSSI Measurement Request
Line 414: MmcUmtsRssiMeasurementReq Msg is null
Line 438: Invalid uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 445: [IRAT L2U] UmtsInitialRscpEcNoMeasurementReq Msg is too late !!! 
Line 459: rscp_req_ptr is NULL in  uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 467: rscp_req_ptr->measurementList is NULL in uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 500: UmtsMeasurementServerReset fail
Line 503: MMC -> UMTS Initial RSCP/EcNo Measurement Request
Line 511: MmcUmtsInitialRscpEcNoMeasurementReq Msg is null
Line 537: Invalid uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 544: [IRAT L2U] UmtsRscpEcNoUpdateMeasurementReq Msg is too late !!! 
Line 557: rscp_req_ptr is NULL in  uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 564: rscp_req_ptr->measurementList is NULL in uhal_MmcUmtsInitialRscpEcNoMeasurementReq
Line 578: rscp_req_ptr->measurementList is NULL in  uhal_MmcUmtsRscpEcNoUpdateMeasurementReq
Line 603: UmtsMeasurementServerReset fail
Line 606: MMC -> UMTS RSCP/EcNo Update Measurement Request
Line 614: MmcUmtsRscpEcNoUpdateMeasurementReq Msg is null
Line 640: Invalid uhal_MmcUmtsCellSearchReq
Line 647: [IRAT L2U] UmtsCellSearchReq Msg is too late !!! 
Line 659: srch_req_ptr is NULL in  uhal_MmcUmtsCellSearchReq
Line 669: srch_req_ptr->frequencyList is NULL in  uhal_MmcUmtsCellSearchReq
Line 688: UmtsMeasurementServerReset fail
Line 691:  MMC -> UMTS Cell Search Request
Line 698: MmcUmtsCellSearchReq Msg is null
Line 713: Invalid uhal_MmcUmtsPartialSearchReq
Line 720: [IRAT L2U] UmtsPartialSearchReq Msg is too late !!! 
Line 732: srch_req_ptr is NULL in  UmtsPartialSearchReq
Line 742: srch_req_ptr->frequencyList is NULL in  uhal_MmcUmtsPartialSearchReq
Line 767: UmtsMeasurementServerReset fail
Line 770:  MMC -> UMTS Partial Search Request
Line 777: UmtsPartialSearchReq Msg is null
Line 864: UHAL fails in making a MmcUmtsRssiMeasurementIndMsg
Line 898: NumberOfFrequencies is out of range
Line 905: UmtsRssiMeasurementInd Msg is NULL
Line 910: UMTS -> MMC RSSI Measurement Indication
Line 914: UHAL fails in sending a MmcUmtsRssiMeasurementIndMsg
Line 917: UHAL fails in freeing MmcUmtsRssiMeasurementInd Msg.
Line 943: Invalid LatchReqest
Line 967: UHAL fails in making a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1009: NumberOfCells is out of range
Line 1016: NumberOfFrequencies is out of range
Line 1024: UmtsInitialRscpEcNoMeasurementIndMsg is NULL
Line 1042: UMTS -> MMC INIT Measurement Indication
Line 1046: UHAL fails in sending a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1049: UHAL fails in freeing a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1074: Invalid LatchReqest
Line 1096: UHAL fails in making a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1140: NumberOfCells is out of range
Line 1147: NumberOfFrequencies is out of range
Line 1155: UmtsInitialRscpEcNoMeasurementIndMsg is NULL
Line 1173: UMTS -> MMC Measurement Indication
Line 1177: UHAL fails in sending a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1180: UHAL fails in freeing a MmcUmtsRscpEcNoUpdateMeasurementIndMsg
Line 1204: Invalid LatchReqest
Line 1227: UHAL fails in making a MmcUmtsCellSearchIndMsg
Line 1269: NumberOfCells is out of range
Line 1276: NumberOfFrequencies is out of range
Line 1284: UmtsCellSearchIndMsg is NULL
Line 1302: UMTS -> MMC Cell Search Indication
Line 1306: UHAL fails in sending a MmcUmtsCellSearchIndMsg
Line 1309: UHAL fails in freeing a MmcUmtsCellSearchIndMsg
Line 1330: UHAL fails in making a MmcUmtsPartialSearchIndMsg
Line 1374: NumberOfCells is out of range
Line 1381: NumberOfFrequencies is out of range
Line 1395: UmtsPartialSearchIndMsg is NULL
Line 1414: UMTS -> MMC Partial Search Indication (numOfPathes=%d)
Line 1418: UHAL fails in sending a MmcUmtsPartialSearchIndMsg
Line 1421: UHAL fails in freeing a MmcUmtsPartialSearchIndMsg
Line 1445: Invalid LatchReqest
Line 1470: Invalid Ind
Line 1492: UHAL fails in making a MmcUmtsCellSearchIndMsg
Line 1527: NumberOfFrequencies is out of range
Line 1535: srch_req is NULL
Line 1540: UMTS -> MMC Cell Search Dummy Indication ************
Line 1544: UHAL fails in sending a MmcUmtsCellSearchDummyIndMsg
Line 1547: UHAL fails in freeing a MmcUmtsCellSearchDummyIndMsg
Line 1557: SKIP power off after dummy indication due to RAT is resumed
Line 1574: UHAL fails in making a MmcUmtsPartialSearchIndMsg
Line 1610: NumberOfFrequencies is out of range
Line 1623: srch_req is NULL
Line 1628: UMTS -> MMC Partial Search Dummy Indication ************
Line 1632: UHAL fails in sending a Mmc_UmtsPartialSearchCnf
Line 1635: UHAL fails in freeing a Mmc_UmtsPartialSearchCnf
Line 1645: SKIP power off after dummy indication due to RAT is resumed
Line 1663: UHAL fails in making a MmcUmtsInitialRscpEcNoMeasurementIndMsg
Line 1699: NumberOfFrequencies is out of range
Line 1706: rscp_req is NULL
Line 1711: UMTS -> MMC INIT Measurement Dummy Indication *********
Line 1715: UHAL fails in sending a MmcUmtsInitialRscpEcNoMeasurementDummyIndMsg
Line 1718: UHAL fails in freeing a MmcUmtsInitialRscpEcNoMeasurementDummyIndMsg
Line 1728: SKIP power off after dummy indication due to RAT is resumed
Line 1747: UHAL fails in making a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1782: NumberOfFrequencies is out of range
Line 1789: UmtsInitialRscpEcNoMeasurementDummyIndMsg is NULL
Line 1794: UMTS -> MMC Measurement Dummy Indication *********
Line 1798: UHAL fails in sending a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1801: UHAL fails in freeing a MmcUmtsRscpEcNoUpdateMeasurementDummyIndMsg
Line 1811: SKIP power off after dummy indication due to RAT is resumed
Line 1844: activeStackId %d uhal_IratMeasurement_Timeout not performed due to activeRat %d l2uHOStarted %d
Line 1848: activeStackId %d uhal_IratMeasurement_Timeout
Line 1870: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 1877: measRequestFromLte = %d
Line 1916: activeStackId %d UmodemStatus %d l2uHOStarted %d uhal_IratMeasurement_Timeout
Line 1946: uhal_IratMeasurement_Abort : send dummy indication(3G RAT is suspended)
Line 1954: measRequestFromLte = %d l2uHOStarted =%d
Line 1970: uhal_IratMeasurement_TimeoutStart: uhalIratMeasurementTimerCreated:%d 
Line 1975: uhalIratMeasurementTimer Created!
Line 1978: uhalIratMeasurementTimer Timing set OK!
Line 1983: uhalIratMeasurementTimer Timing set Failed!
Line 1988: uhalIratMeasurementTimer Creation Failed!
Line 2001: uhal_IratMeasurement_TimeoutCancel: uhalIratMeasurementTimerCreated:%d 
Line 2031: activeStackId %d Invalid LatchReqest
Line 2037: activeStackId %d measurement_server pointer is null
Line 2063: Invalid LatchReqest
Line 2111: Gap0 Hisr: schedule StartSschSTF, currentRSN=%d, targetRSN=%d MeasureStart %d
Line 2116: cmsmt_server is NULL
