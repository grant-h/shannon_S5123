Line 150: [USIM_%d] InitISIMApp - Success
Line 154: [USIM_%d] InitISIMApp - Failed
Line 244: [USIM_%d] >>SelectISIMApplication
Line 296: [USIM_%d] ProcessSelectionResponse - FAILS
Line 301: [USIM_%d] Application Select Error
Line 306: [USIM_%d] AppType :0x%x is not found
Line 338: [USIM_%d] ISIM Channel Number:%d
Line 350: [USIM_%d] OpenChannel Failed, Result- %d
Line 477: [USIM_%d] [ISIM] AID length :%d
Line 513: [USIM_%d] Aid Length -> %d
Line 564: [USIM_%d] EF_TYPE_TRANSPARENT
Line 573: [USIM_%d] MEMALLOC fails
Line 596: [USIM_%d] Data Read
Line 601: [USIM_%d] EF_TYPE_CYCLIC or LINEAR FIXED
Line 620: [USIM_%d] RecordLength -> %d, NumberOfRecords -> %d, RspDataLength -> %d RecordMode -> %d
Line 626: [USIM_%d] MEMALLOC FAILS
Line 650: [USIM_%d] Record Data Read ->
Line 675: [USIM_%d] >> CheckServiceAvailabilityInCacheEfIst
Line 706: [USIM_%d] >> CheckAvailabilityInIst
Line 724: [USIM_%d] EF_IST sel fails for LGU. Check not reqd..
Line 736: [USIM_%d] EF_P_CSCF absent
Line 750: [USIM_%d] EF_GBABP/EF_GBANL absent
Line 764: [USIM_%d] EF_NAFKCA absent
Line 779: [USIM_%d] EF_SMS absent
Line 793: [USIM_%d] EF_SMSR absent
Line 806: [USIM_%d] EF_SMSP absent
Line 819: [USIM_%d] EF_UICCIARI absent
Line 832: [USIM_%d] EF_PSISMSC absent
Line 845: [USIM_%d] EF_IMSCONFIGDATA absent
Line 934: [USIM_%d] >> SelectISIMEf
Line 977: [USIM_%d] Select Next EF - FAIL
Line 983: [USIM_%d] Select NextEf(0x%04X) FAILS 
Line 993: [USIM_%d] GetDirectoryUsingFileId(0x%04X) FAILS
Line 1013: [USIM_%d] [ISIM] Current EF :0x%X
Line 1038: [USIM_%d] [ISIM] Current DF :0x%X
Line 1074: [USIM_%d] DecodeIsimAuthReqMsg state 
Line 1089: [USIM_%d] AUTH_CONTEXT_3G
Line 1090: [USIM_%d] Autn ->
Line 1097: [USIM_%d] AUTH_CONTEXT_GSM
Line 1100: [USIM_%d] Rand ->
Line 1121: [USIM_%d] Force to select ADF_ISIM before Auth performed successfully
Line 1130: [USIM_%d] ISIM AUTH is not perpormed successfully!!!
Line 1162: [USIM_%d] DecodeImsUpdateReqMsg state 
Line 1193: [USIM_%d] ERROR:Unknown USIM state
Line 1260: [USIM_%d] DATA not Updated to UICC, File(0x%X) Content is Same
Line 1304: [USIM_%d] EF_TYPE_CYCLIC or LINEAR FIXED
Line 1347: [USIM_%d] >> usim_PerformAllISimXcapDataRead
Line 1367: [USIM_%d] Failed to read IMSI
Line 1393: [USIM_%d] mncLen is %d, changed to %d
Line 1400: [USIM_%d] EF_AD does not contain Length of MNC, set mncLen to %d
Line 1407: [USIM_%d] Failed to Read EF_AD, set mnclen to %d
Line 1465: [USIM_%d] Failed to read EF_IMPI 
Line 1492: [USIM_%d] Failed to read EF_IMPU 
Line 1501: [USIM_%d] [usim_PerformAllISimXcapDataRead] XCAPM - Reading EF-IST file in SIM
Line 1508: [USIM_%d] [usim_PerformAllISimXcapDataRead] Reading Succesful, Copying Data into buffer
Line 1520: [USIM_%d] [usim_PerformAllISimXcapDataRead] Failed to read EF_IST 
Line 1578: [USIM_%d] Failed to read EF_GBABP 
Line 1590: [USIM_%d] Failed to read EF_GBABP 
Line 1647: [USIM_%d] Failed to read EF_GBANL 
Line 1660: [USIM_%d] Failed to read EF_GBANL 
Line 1678: [USIM_%d] >> usim_SendReadAllISimXcapDataRspMsg
Line 1683: [USIM_%d] SendReadAllISimDataRspMsg state 
Line 1690: [USIM_%d] Result = %d
Line 1694: [USIM_%d] AppType = %d
Line 1697: [USIM_%d] ImsiLength = %d
Line 1698: [USIM_%d] Imsi = 
Line 1705: [USIM_%d] IMPILen = %d
Line 1706: [USIM_%d] IMPI = 
Line 1721: [USIM_%d] IMPURecordLen = %d
Line 1722: [USIM_%d] IMPURecordNo  = %d
Line 1723: [USIM_%d] IMPURecordList = 
Line 1733: [USIM_%d] [usim_SendReadAllISimXcapDataRspMsg] Filling Response for IST EF - XCAPM
Line 1738: [USIM_%d] ISTLen = %d
Line 1739: [USIM_%d] IST =
Line 1746: [USIM_%d] [usim_SendReadAllISimXcapDataRspMsg] IST EF not present - XCAPM
Line 1754: [USIM_%d] GBABP Len = %d
Line 1755: [USIM_%d] GBABP = 
Line 1764: [USIM_%d] GBABP Len = %d
Line 1772: [USIM_%d] GBANL RecordLen = %d
Line 1773: [USIM_%d] GBANL RecordNo  = %d
Line 1774: [USIM_%d] GBANL RecordList = 
Line 1782: [USIM_%d] GBANL RecordLen = %d
Line 1790: [USIM_%d] FAILed in SendReadAllISIMDataRspMsg 
Line 1801: [USIM_%d] usim_DecodeReadAllISimXcapDataReqMsg state 
Line 1820: [USIM_%d] ERROR: received in unknown state - 
Line 1839: [USIM_%d] RspDataLength: %d
Line 1853: [USIM_%d] Displaying Message Contents: 
Line 1854: [USIM_%d] RspLength -> %d, AuthRsp ->
Line 1861: [USIM_%d] IsimAuthRespLen -> %d, Isim_Auth_Resp ->
Line 1867: [USIM_%d] Kc ->
Line 1872: [USIM_%d] KcAvailable -> %d
Line 1876: [USIM_%d] Kc ->
Line 1880: [USIM_%d] Ck->
Line 1882: [USIM_%d] Ik->
Line 1884: [USIM_%d] AUTS->
Line 1892: [USIM_%d] Unable To Send
Line 2005: [USIM_%d] AuthRspResult: %d
Line 2043: [USIM_%d] Unknown AppType
Line 2076: [USIM_%d] DecodeGbaContextReqMsg state
Line 2089: [USIM_%d] AuthType: 0x%x GbaType: 0x%x GbaTag: 0x%x Data1Len: 0x%x AuthType: 0x%x
Line 2093: [USIM_%d] Data1 ->
Line 2099: [USIM_%d] Data2 ->
Line 2120: [USIM_%d] Force to select ADF_ISIM before Auth performed successfully
Line 2127: [USIM_%d] Wrong AuthTpe in GBA Security Context
Line 2132: [USIM_%d] GBA AUTH is not perpormed successfully!!!
Line 2161: [USIM_%d] usim_SendGbaAuthRspMsg RspDataLength : 0x%x
Line 2204: [USIM_%d] Displaying Message Contents: 
Line 2205: [USIM_%d] Result: %d
Line 2206: [USIM_%d] AuthType: %d
Line 2207: [USIM_%d] GbaType: %d
Line 2208: [USIM_%d] GbaTag: %d
Line 2209: [USIM_%d] Data1Len: %d
Line 2212: [USIM_%d] Data1 ->
Line 2220: [USIM_%d] Unable To Send
Line 2264: [USIM_%d] Failed to read IMSI
Line 2288: [USIM_%d] MncLen is %d, changed to %d
Line 2295: [USIM_%d] EF_AD does not contain Length of MNC, set MncLen to %d
Line 2303: [USIM_%d] Failed to Read EF_AD, set MncLen to %d
Line 2310: [USIM_%d] Reading EF_MSISDN
Line 2348: [USIM_%d] BcdEncodedLen = %d
Line 2371: [USIM_%d] Breaking from loop !!
Line 2381: [USIM_%d] Breaking from loop !!
Line 2386: [USIM_%d] Dialling Number before adding '
Line 2409: [USIM_%d] Dialling Number Length %d, Number -->
Line 2422: [USIM_%d] Failed to read EF_MSISDN 
Line 2463: [USIM_%d]  pEFPSISMSCAddr= 
Line 2471: [USIM_%d] Failed to read EF_PSISMSC 
Line 2504: [USIM_%d]  SCAddr= 
Line 2513: [USIM_%d] Failed to read EF_SMSP 
Line 2574: [USIM_%d] Failed to read EF_IMPI 
Line 2598: [USIM_%d] Failed to read EF_DOMAIN 
Line 2622: [USIM_%d] Failed to read EF_IST 
Line 2649: [USIM_%d] Failed to read EF_P_CSCF 
Line 2676: [USIM_%d] Failed to read EF_IMPU 
Line 2695: [USIM_%d] Failed to read EF_IMPU 
Line 2696: [USIM_%d] Failed to read EF_PSISMSC 
Line 2716: [USIM_%d] SendReadAllISimDataRspMsg state 
Line 2723: [USIM_%d] Result = %d
Line 2727: [USIM_%d] AppType = %d
Line 2731: [USIM_%d] ImsiLength = %d
Line 2732: [USIM_%d] MncLen = %d
Line 2733: [USIM_%d] Imsi = 
Line 2739: [USIM_%d] IMPILen = %d
Line 2740: [USIM_%d] IMPI = 
Line 2753: [USIM_%d] MSISDNLen = %d
Line 2754: [USIM_%d] MSISDN = 
Line 2765: [USIM_%d] DomainLen = %d
Line 2766: [USIM_%d] Domain = 
Line 2778: [USIM_%d] ISTLen = %d
Line 2779: [USIM_%d] IST= 
Line 2794: [USIM_%d] PCSCFRecordLen = %d
Line 2795: [USIM_%d] PCSCFRecordNo  = %d
Line 2796: [USIM_%d] PCSCFRecordList = 
Line 2810: [USIM_%d] IMPURecordLen = %d
Line 2811: [USIM_%d] IMPURecordNo  = %d
Line 2812: [USIM_%d] IMPURecordList = 
Line 2847: [USIM_%d] FAILed in SendReadAllISIMDataRspMsg 
Line 2856: [USIM_%d] DecodeReadAllISimDataReqMsg state 
Line 2873: [USIM_%d] ERROR: received in unknown state - 
Line 2978: [USIM_%d] usim_GetVolteProvisionStatus Result: %d validEfDomain:%d validEfImpu:%d
Line 2992: [USIM_%d] usim_GetVolteProvisionStatus Return: %d
Line 3030: [USIM_%d] >> usim_DoISimCache
Line 3047: [USIM_%d] Unable To Write To Cache
Line 3074: [USIM_%d] ISim Cache Memory Deleted
