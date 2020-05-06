Line 73: [USIM_%d] >> usim_ReadEfFromCache
Line 82: [USIM_%d] EF Found ,Index-> 0x%02X
Line 91: [USIM_%d] >> usim_ReadEfFromCache CacheState=%d
Line 111: [USIM_%d] offset or offset Length are invalid
Line 140: [USIM_%d] Mode is Not Absolute Can't be Read From Cache
Line 171: [USIM_%d] MEMALLOC FAILS !
Line 178: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 189: [USIM_%d] EfSize is zero!! skip to mem alloc !!
Line 195: [USIM_%d] EF Data Not Assigned
Line 210: [USIM_%d] EF Not Found!!
Line 230: [USIM_%d] >> ReadRecordFromCache,Rec Num -> 0x%02X
Line 243: [USIM_%d] Record found , Index -> 0x%02X
Line 255: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 266: [USIM_%d] File Found,Record doesnt exist in cache
Line 282: [USIM_%d] EF Not Found !!
Line 303: [USIM_%d] >> ReadParamFromCache,ElementId-> 0x%02X, Record Num-> 0x%02X
Line 324: [USIM_%d] EF found in Cache, Index-> 0x%02X
Line 342: [USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
Line 346: [USIM_%d] Parameter Offset -> 0x%02X
Line 361: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 371: [USIM_%d] File Found but ElementId Doesnt Exist
Line 377: [USIM_%d] File Found but Record Num Doesnt Exist
Line 392: [USIM_%d] EF Not Found!!
Line 416: [USIM_%d] >> UpdateAllCacheData
Line 427: [USIM_%d] Found EF_UST ,Index -> %d
Line 436: [USIM_%d] Unable To Write To Cache
Line 445: [USIM_%d] Found EF_SST,Index -> %d
Line 454: [USIM_%d] Unable To Write To Cache
Line 496: [USIM_%d] Unable To Write To Cache
Line 503: [USIM_%d] UST_EST_SRVC_NUMB Service NOT Available
Line 524: [USIM_%d] Unable To Write To Cache
Line 530: [USIM_%d] UST_ACL_SRVC_NUMB Service NOT Available
Line 556: [USIM_%d] Unable To Write To Cache
Line 563: [USIM_%d] UST_HPLMNwACT_SRVC_NUMB Service NOT Available
Line 588: [USIM_%d] Unable To Write To Cache
Line 595: [USIM_%d] UST_UPLMNwACT_SRVC_NUMB Service NOT Available
Line 622: [USIM_%d] Unable To Write To Cache
Line 629: [USIM_%d] UST_OPLMNwACT_SRVC_NUMB Service NOT Available
Line 655: [USIM_%d] Unable To Write To Cache
Line 662: [USIM_%d] UST_CBMID_SRVC_NUMB Service NOT Available
Line 690: [USIM_%d] Unable To Write To Cache
Line 697: [USIM_%d] UST_RPLMNACT_SRVC_NUMB Service NOT Available
Line 728: [USIM_%d] Unable To Write To Cache
Line 735: [USIM_%d] UST_GSM_ACC_SRVC_NUMB Service NOT Available
Line 743: [USIM_%d] UST/SST already in Cache
Line 760: [USIM_%d] Unable To Write To Cache
Line 767: [USIM_%d] Not a USIM Appln(FileId-> 0x%02X)
Line 785: [USIM_%d] Unable To Write To Cache
Line 792: [USIM_%d] UST_LOCAL_PB_SRVC_NUMB(FileId-> 0x%02X) Service NOT Available
Line 809: [USIM_%d] Unable To Write To Cache
Line 824: [USIM_%d] FileID (0x%02X),Not Available in this Application
Line 834: [USIM_%d] IMSI Length > 8 bytes, limiting it to 8 Bytes
Line 848: [USIM_%d] IMSI Replacement is enabled so MCC & MNC of all 0XFF changed to 001 01
Line 922: [USIM_%d] usim_IsCsimProvisioned -> %d
Line 945: [USIM_%d] >> ReadFromSimAndWriteToCache,CacheFileIndex -> %d
Line 952: [USIM_%d] Reading IMSIP instead of IMSI
Line 973: [USIM_%d] Skip usim_EhplmnOptimization for factory VSIM
Line 979: [USIM_%d] >> ReadFromSimAndWriteToCache::EHPLMN empty ,CacheFileIndex -> %d
Line 1029: [USIM_%d] Unable to Write Ef into cache
Line 1034: [USIM_%d] Unable to Read Ef from SIM 
Line 1068: [USIM_%d] >> UpdateEfInCache
Line 1074: [USIM_%d] Found EF in Cache,Index -> %d
Line 1091: [USIM_%d] Record Can't be updated with this Mode- %d
Line 1119: [USIM_%d] Updated len > Cached len
Line 1131: [USIM_%d] NULL buffer addr. received!!! (usim_Cache[Index].EfData- 0x%X
Line 1147: [USIM_%d] Ef not updated in Cache
Line 1162: [USIM_%d] Ef not found!!
Line 1180: [USIM_%d] >> UpdateRecordInCache,FileId-> 0x%02X, Rec Num-> 0x%02X
Line 1189: [USIM_%d] Record Found ,Index-> %d
Line 1204: [USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
Line 1219: [USIM_%d] File Found but Requested Record Number Does Not Exist in Cache
Line 1234: [USIM_%d] Record Not Found In Cache
Line 1255: [USIM_%d] >> UpdateParamInCache. ElementId -> 0x%02X, RecordNumber -> 0x%02X
Line 1274: [USIM_%d] EF found , Index -> 0x%02X
Line 1290: [USIM_%d] File Found but ElementId Doesnt Exist
Line 1295: [USIM_%d] Parameter Offset-> 0x%02X
Line 1302: [USIM_%d] NULL buffer addr. usim_Cache[Index].EfData
Line 1321: [USIM_%d] File Found but ElementId Does Not Exist
Line 1336: [USIM_%d] ElementID Not Found In Cache
Line 1369: [USIM_%d] >> WriteModifiedCahceDataToDevice
Line 1430: [USIM_%d] Using SFID:0x%X 
Line 1474: [USIM_%d] File(0x%X) not updated to UICC,rest of modified files will be skipped due to txrx error
Line 1480: [USIM_%d] File NOT Modified:0x%X
Line 1494: [USIM_%d] Attempting to Write Again,Attempt Count-> %d
Line 1498: [USIM_%d] Exceeded Write Attempt Count, Abroting ,Attempt Count-> %d
Line 1505: [USIM_%d] All Data Written to the UICC
Line 1529: [USIM_%d] >> FindModifiedCacheFiles
Line 1557: [USIM_%d] >> GetParamOffsetInEf
Line 1565: [USIM_%d] ELEMENT_IMSI,
Line 1574: [USIM_%d] ELEMENT_CK(or ELEMENT_CKPS),
Line 1583: [USIM_%d] ELEMENT_IK(or ELEMENT_IKPS),
Line 1592: [USIM_%d] ELEMENT_KSI(or ELEMENT_KSIPS),
Line 1600: [USIM_%d] ELEMENT_HPLMNPERIOD,
Line 1609: [USIM_%d] ELEMENT_ACMMAX ,
Line 1617: [USIM_%d] ELEMENT_SPN, 
Line 1625: [USIM_%d] ELEMENT_CURRCODE, 
Line 1633: [USIM_%d] ELEMENT_PRICEPERUNIT, 
Line 1641: [USIM_%d] ELEMENT_ACC, 
Line 1649: [USIM_%d] ELEMENT_TMSI, 
Line 1657: [USIM_%d] ELEMENT_LAI, 
Line 1665: [USIM_%d] ELEMENT_LAU_STATUS, 
Line 1673: [USIM_%d] ELEMENT_PTMSI, 
Line 1681: [USIM_%d] ELEMENT_PTMSI_SIG, 
Line 1689: [USIM_%d] ELEMENT_RAI, 
Line 1697: [USIM_%d] ELEMENT_RAU_STATUS, 
Line 1705: [USIM_%d] ELEMENT_UE_OPERATION_MODE, 
Line 1713: [USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI, 
Line 1721: [USIM_%d] ELEMENT_LEN_OF_MNC_IN_IMSI, 
Line 1729: [USIM_%d] ELEMENT_LAST_USED_TP_MR, 
Line 1737: [USIM_%d] ELEMENT_MEM_CAP_EXCEEDED_NOTF_FLAG, 
Line 1745: [USIM_%d] ELEMENT_eMLPP_PRIORITY_LEVELS, 
Line 1753: [USIM_%d] ELEMENT_eMLPP_FAST_CALL_SETUP_CONDS, 
Line 1761: [USIM_%d] ELEMENT_AUTOMATIC_ANSWER_PRIORITY_LEVELS, 
Line 1769: [USIM_%d] ELEMENT_HIDDEN_KEY, 
Line 1777: [USIM_%d] ELEMENT_START_CS, 
Line 1785: [USIM_%d] ELEMENT_START_PS, 
Line 1793: [USIM_%d] ELEMENT_MAX_START_CS_OR_PS, 
Line 1801: [USIM_%d] ELEMENT_RPLMN_ACT, 
Line 1809: [USIM_%d] ELEMENT_ICCID, 
Line 1818: [USIM_%d] ELEMENT_Kc (or ELEMENT_KcGPRS), 
Line 1827: [USIM_%d] ELEMENT_CIPHER_KEY_SEQ_NUMB(or ELEMENT_CIPHER_KEY_SEQ_NUMB_GPRS), 
Line 1835: [USIM_%d] ELEMENT_BCCH_INFO, 
Line 1843: [USIM_%d] ELEMENT_VBSS_ACT_DEACT_FLAGS, 
Line 1851: [USIM_%d] ELEMENT_PTMSI_ON_SIM, 
Line 1859: [USIM_%d] ELEMENT_PTMSI_SIG_ON_SIM, 
Line 1867: [USIM_%d] ELEMENT_RAI_ON_SIM, 
Line 1875: [USIM_%d] ELEMENT_RAU_STATUS_ON_SIM, 
Line 1883: [USIM_%d] ELEMENT_CSIM_SMS_STATUS, 
Line 1891: [USIM_%d] ELEMENT_CSIM_MEM_CAP_EXCEEDED_FLAG, 
Line 1897: [USIM_%d] Invalid Element (0x%02X)
Line 1903: [USIM_%d] Offset-> %d,Len-> %d
Line 1972: [USIM_%d] >> CheckUSimST SN-%d, result=%d
Line 2031: [USIM_%d] >> CheckSimST SN-%d, Result=%d
Line 2098: [USIM_%d] Invalid Bit Position
Line 2165: [USIM_%d] File ID-> 0x%x
Line 2178: [USIM_%d] File exists in -> %d
Line 2191: [USIM_%d] File structure -> %d
Line 2204: [USIM_%d] File needs updating/not -> %d
Line 2290: [USIM_%d] usim_SetUpdateSimOnPowerDownStatus: %d
Line 2298: [USIM_%d] Invalid status!!!
Line 2323: [USIM_%d] Cache Available-> 
Line 2339: [USIM_%d]  Displaying Cache Ef Data 
Line 2347: [USIM_%d] EF_TYPE_TRANSPARENT
Line 2353: [USIM_%d] Cyclic or Linear
Line 2363: [USIM_%d] Needs Updating -> 
Line 2364: [USIM_%d] Num Of Records -> %d,DataLength -> %d,EfSize -> %d
Line 2369: [USIM_%d] EF Not Found 
Line 2422: [USIM_%d] File Exists In -> 
Line 2426: [USIM_%d] EF Not Found 
Line 2513: [USIM_%d] Cache And Save Status -> 
Line 2536: [USIM_%d] NORMAL Initialisation of <Cache>
Line 2558: [USIM_%d] RAT change Initialisation of <Cache>
Line 2578: [USIM_%d] Refresh Initialisation of <Cache>
Line 2599: [USIM_%d] Unknown Init Type (%x) 
Line 2872: [USIM_%d] Cache Memory Deleted
Line 2894: [USIM_%d] Cache Memory Deleted
Line 2898: [USIM_%d] Cache index is INVALID!!!
Line 2970: [USIM_%d] >> usim_DoUSimCache
Line 2984: [USIM_%d] Unable To Write To Cache
Line 3011: [USIM_%d] ISim Cache Memory Deleted
