Line 363: [Big] ns_Diag_SendTrigger (SimIndex %d, Trigger %d)
Line 367: [Big] fail: unexpected SimIndex(%d)
Line 383: [Big] 2G/3G-RRC-Event(=%d) is not equal to HandoverFail(=%d) or RlfOrWeakSignal(=%d) or RxRrcRelease(=%d) .. No DIAG_IND will be sent to BDA
Line 390: [Big] Old values from NS: EventType (%d) Cause (%d) will be overwritten!
Line 417: [Big] NS_DIAG_TRIGGER_2G_3G_4G_PDP_ACTIVATE_PRIM_EVENT(cause %d) will be mapped to Trigger %d
Line 440: [Big] NS_DIAG_TRIGGER_2G_3G_4G_PDP_ACTIVATE_SEC_EVENT(cause %d) will be mapped to Trigger %d
Line 484: [Big] fail: unrecognized trigger (%d)
Line 517: [Big] ns_sendDiagInfoInd
Line 522: [Big] fail: unknown act
Line 526: [Big] Selected Act for trigger (%d) is (%d)
Line 532: MemAlloc Fail
Line 533: [Big] fail: alloc failure
Line 551: [Big] fail: unable to get trigger configuration
Line 567: [Big] Selected Act is (%d) and pmliRat is (%d)
Line 570: [Big] Converting PlmiRat value for LTE RAT to match BD_ACT
Line 580: [Big] diag_SetSrvCellInfo execluded
Line 589: [Big] Act %d, LTE RRC Event = %d Cause = %d
Line 594: [Big] Act %d, 2G/3G RRC Event = %d
Line 621: [Big] bda_SetChannelQualityInfo execluded
Line 635: [Big] diag_SetDataInfo execluded
Line 649: [Big] diag_SetSmsInfo execluded
Line 709: [Big] diag_SetRfInfo execluded
Line 717: [Big] fail: ns_SendNsClientMessage
Line 720: [Big] send NS_DIAG_INFO_IND, result=%d
Line 745: [Big] ns_Diag_SendEventMain (SimIndex %d, Event %d)
Line 749: [Big] fail: unexpected SimIndex(%d)
Line 760: MemAlloc Fail
Line 761: [Big] fail: alloc failure
Line 786: [Big] fail: unexpected callDomain(%d)
Line 799: [Big] fail: ns_SendNsClientMessage
Line 805: [Big] fail: diag_SetSrvCellInfo failure
Line 811: [Big] fail: Unknown BD_ACT failure
Line 815: [Big] fail: unrecognized event(%d)
Line 839: [Big] fail: unable to get trigger configuration
Line 881: [Big] fail: unexpected event type
Line 915: [Big] fail: unable to get trigger configuration
Line 962: [Big] fail: unexpected callDomain(%d)
Line 980: [Big] fail: unexpected RFPD Rat(%d)
Line 986: [Big] fail: unrecognized trigger
Line 1028: diag_mapLteRrcEvent2EventType(LteRrcEvent = %d, EventType =%d)
Line 1067: [Big][CellInfo] act=%d
Line 1090: [Big][SrvCellInfo] PLMN:[0]0x%X [1]:0x%X [2]:0x%X, RAC:[2]0x%X
Line 1094: [Big][SrvCellInfo] LAC:[0]0x%X [1]:0x%X, CellID:[0]0x%X [1]0x%X, DL_ARFCN:%d
Line 1114: [Big][SrvCellInfo] PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
Line 1117: [Big][SrvCellInfo] RAC:0x%X Lac:[0]:0x%X [1]:0x%X CellId:0x%X PSC:0x%X UARFCN:0x%X
Line 1138: [Big][SrvCellInfo] prim PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
Line 1141: [Big][SrvCellInfo] out PLMN:[0]:0x%X [1]:0x%X [2]:0x%X [3]:0x%X [4]:0x%X [5]:0x%X
Line 1145: [Big][SrvCellInfo] TAC:[0]:0x%X,[1]:0x%X CID:0x%X, PID:%d DL_ARFCN:%d
Line 1155: Unhandled ACT(%d)
Line 1189: Unhandled PLMN Mode Select Value(%d)
Line 1194: [Big][CallInfo] ns_GetSipcPlmnModeSelectValue()=%d, PlmnModeSelect=%d
Line 1244: [Big][CallInfo] Unhandled multiRabInfo value(%d)
Line 1249: [Big][CallInfo] ns_dmBigDataInfo.multiRabInfo=%d
Line 1258: [Big][CallInfo] ActiveRat:%d, EventType=%d, Cause=%d, MultiRAB=%d
Line 1314: [Big][QualityInfo] RSSI0:%d RSSI1:%d BER=%d ActTxPower=%d SINR0=%d SINR1=%d
Line 1370: [Big][QualityInfo] RSSI0:%d RSCP0=%d EcN00=%d SINR0=%d BLER=%d DSPTxPower=%d
Line 1374: [Big][QualityInfo] RSSI1:%d RSCP1=%d EcN01=%d SINR1=%d BLER=%d DSPTxPower=%d
Line 1378: [Big][QualityInfo] ActTxPower=%d CompTxPower=%d NetTxPower=%d TunerMode=%d OL_Index=%d DiversityState=%d
Line 1381: [Big][QualityInfo] CL_TuneCode=%d Sw=%d Cap1=%d Cap2=%d
Line 1384: [Big][QualityInfo]  OLTC Sw=%d OLTC Cap1=%d OLTC Cap2=%d
Line 1407: [Big][QualityInfo] RSSI2:%d RSSI3:%d RSCP2=%d RSCP3=%d EcNo2=%d EcNo3=%d
Line 1506: [Big][QualityInfo] RSSI0:%d RSSI1:%d RSRP0:%d RSRP1:%d RSRQ0:%d RSRQ1:%d
Line 1510: [Big][QualityInfo] SINR0:%d SINR1:%d FER:%d DSPTxPower:%d
Line 1514: [Big][QualityInfo] ActTxPower=%d CompTxPower=%d NetTxPower=%d DiversityState=%d
Line 1517: [Big][QualityInfo] CL_TuneCode=%d Sw=%d Cap1=%d Cap2=%d
Line 1520: [Big][QualityInfo]  OLTC Sw=%d OLTC Cap1=%d OLTC Cap2=%d
Line 1555: [Big][QualityInfo] RSSI2:%d RSSI3:%d RSRP2:%d RSRP3:%d RSRQ2:%d RSRQ3:%d
Line 1558: [Big][QualityInfo] SINR2:%d SINR3:%d
Line 1563: Unhandled ACT(%d)
Line 1598: [Big][DataInfo] Cause %d => EndReason %d
Line 1605: [Big][DataInfo] Cause %d => EndReason %d
Line 1614: [Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
Line 1623: [Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
Line 1632: [Big][DataInfo] AttachType %d, EmmCause %d, EsmCause %d
Line 1636: [Big][DataInfo] Unexpected trigger (%d)
Line 1673: [Big][DataInfo] Unexpected trigger (%d)
Line 1677: [Big][SmsInfo] RefId %d, EndReason %d, ErrorType %d
Line 1717: [Big][MiscInfo] GripSensorStatus:%d
Line 1727: [Big][MiscInfo] TxAsState:%d
Line 1784: Unhandled ACT(%d)
Line 1809: [Big][MiscInfo] MipiDeviceCheckDone:%d 
Line 1815: [Big][MiscInfo] hal_rf_mipi_device_check_fail_count:%d
Line 1820: Received hal_rf_mipi_device_check_fail_count value is invalid!!!
Line 1994: [Big][SrvCellInfo] RegSap_GeneralData.Plmn.PlmnId:[0]:0x%X [1]:0x%X [2]:0x%X
Line 2048: [Big][SCGF] Data received: LTE Band:%d NR Band:%d Failure Type:%d
Line 2054: [Big][SCGF] Data sent: LTE Band:%d NR Band:%d Failure Type:%d
