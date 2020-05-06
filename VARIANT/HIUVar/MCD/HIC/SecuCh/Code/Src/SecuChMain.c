Line 124: SecuCh : Init done
Line 159: SecuCh : KEY PROVISION REQ
Line 191: SecuCh : READ REQ
Line 225: SecuCh : WRITE REQ
Line 260: SecuCh : SBOX REQ
Line 334: SecuCh : ForcedSecuChTimerForAti enabled
Line 376: SecuChTimerExpiry : %dms Timeout(cmd:0x%08X, retry cnt:%d)
Line 384: SecuChTimerExpiry : SECUCH_RETRY(cmd:0x%08X, retry:%d)
Line 402: SecuCh:TimeOut-R:%02d,%08X,No:0x%08X
Line 417: SecuChTimerExpiry : SecuChSendReqMsg fail
Line 433: SecuChTimerStop
Line 462: SecuChTimerStart(ReqType:%d, isFirstReadReq:%d, ForcedSecuChTimerForAti:%d, %d sec)
Line 477: SecuChTimerInit
Line 481: SecuChTimerInit : pal_TmCreateTimer failed
Line 513: SecuChProcessRfsLogging : FILE CREATE FAIL
Line 610: READ WB (%d)
Line 634: Factory AP Binary
Line 639: Non-Factory AP Binary
Line 642: Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
Line 650: DEVELOPMENT Device
Line 655: MARKET Device
Line 658: Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
Line 743: SecuChSendMsg : usLength(%d), FrameCount(%d), Modulo_Size(%d)
Line 759: SecuChSendMsg : memAllocMem failed
Line 779: SECUCH TX: 
Line 784: SecuChSendMsg : hostifSendDataPacket failed (ret=%d)
Line 814: SecuChSendReqMsg : pal_MemAlloc failed
Line 849: SECUCH REQ:  Body.hmac : 
Line 855: SECUCH REQ:  Body.command : 0x%08X
Line 861: SECUCH REQ:  Body.nonceCP : 
Line 877: SecuChSendReqMsg : pal_MemAlloc failed
Line 891: SECUCH REQ:  Body.command : 0x%08X
Line 898: SECUCH REQ:  Body.nonceCP : 
Line 905: SECUCH REQ:  Body.nonceVK : 
Line 913: SECUCH REQ:  Body.type : 0x%08X
Line 920: SECUCH REQ:  Body.size : 0x%08X
Line 925: SECUCH REQ:  Body.offset : 0x%08X
Line 933: SECUCH REQ:  Body.data : 
Line 940: SecuChSendReqMsg : pal_MemAlloc failed
Line 947: SECUCH REQ:  Body.tag : 
Line 955: SecuChSendReqMsg : Already Key Provisioned
Line 967: SecuChSendReqMsg : pal_MemAlloc failed
Line 1005: SECUCH REQ:  Header.payload_no : 0x%08X
Line 1006: SECUCH REQ:  Header.ret : 0x%08X
Line 1007: SECUCH REQ:  Header.command_type : 0x%08X
Line 1008: SECUCH REQ:  Header.data_length : 0x%08X
Line 1009: SECUCH REQ:  Header.reserved : 0x%08X
Line 1010: SECUCH REQ:  Length : 0x%08X
Line 1015: SecuChSendReqMsg : SecuChSendMsg failed
Line 1027: SecuChSendReqMsg : %d > SECUCH_MAX_BYTE
Line 1050: SecuChParseReqMsg : pSecuChRxMsg is NULL
Line 1054: SecuChParseReqMsg : mbxSrc(0x%04X), ReqType(%d), ReqSize(%d), Offset(0x%X), ReqData(0x%08X)
Line 1075: SecuChParseReqMsg : Already Key Provisioned
Line 1086: SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
Line 1091: SecuChParseReqMsg : Invalid Read ReqSize(%d) from 0x%04X
Line 1101: SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
Line 1106: SecuChParseReqMsg : Invalid Write ReqSize(%d) from 0x%04X
Line 1116: SecuChParseReqMsg : Not Provisioning Device (fusing=%d, provcass=%d)
Line 1122: SecuChParseReqMsg : Invalid Read ReqSize(%d) from 0x%04X
Line 1127: SecuChParseReqMsg : EM Not Ready(%d)
Line 1133: SecuChParseReqMsg : REQ_SBOX_PREPARING
Line 1138: SecuChParseReqMsg : Invalid msgType(=0x%04X)
Line 1148: SecuChParseReqMsg : Fail
Line 1159: SecuCh:ReqFail
Line 1191: SECUCH ACK:  Header.payload_no : 0x%08X
Line 1192: SECUCH ACK:  Header.ret : 0x%08X
Line 1193: SECUCH ACK:  Header.command_type : 0x%08X
Line 1194: SECUCH ACK:  Header.reserved : 0x%08X
Line 1195: SECUCH ACK:  Header.data_length : 0x%08X
Line 1196: SECUCH ACK:  Length : 0x%08X
Line 1200: SecuChAckHandler : Invalid payload_no(0x%08X, ReqNo: 0x%08X)
Line 1206: SecuChAckHandler : Invalid return(0x%08X)
Line 1216: SecuChAckHandler : Invalid Length(0x%08X)
Line 1223: SecuChAckHandler : pal_MemAlloc failed
Line 1245: SECUCH ACK:  Body.tag : 
Line 1255: SecuCh:pal_GCM_Decrypt failed(ret = %d)
Line 1262: SECUCH ACK:  Body.command : 0x%08X
Line 1263: SECUCH ACK:  Body.result : 0x%08X
Line 1267: SecuChAckHandler : Unexpected command type (received:0x%08X, expected:0x%08X)
Line 1276: SecuChAckHandler : Already Key Provisioned
Line 1286: SecuChAckHandler : Empty RPMB data
Line 1291: SecuChAckHandler : Update read req size from %d to %d
Line 1297: SecuChAckHandler : Invalid read ack size(%d) >= req size(%d)
Line 1305: SecuChAckHandler : Unexpected result (received:0x%08X, expected:0x%08X)
Line 1312: SecuChAckHandler : Unexpected result (received:0x%08X, expected:0x%08X)
Line 1322: SECUCH ACK:  Body.nonce : 
Line 1328: SecuChAckHandler : pal_GetNonceCP compare failed
Line 1336: SECUCH ACK:  Body.size : 0x%08X
Line 1338: SECUCH ACK:  Body.data : 
Line 1342: SecuChAckHandler : Invalid read size (Requested read size : %d)
Line 1354: SECUCH ACK:  Body.size : 0x%08X
Line 1356: SECUCH ACK:  Body.data : 
Line 1363: SECUCH ACK:  Body.size : 0x%08X
Line 1366: SecuChAckHandler : Invalid write size (Requested write size : %d)
Line 1374: SecuChAckHandler : Save Nonce VK
Line 1396: SecuChParseAckMsg : pSecuChRxMsg is NULL
Line 1410: SecuChParseAckMsg : HOSTIF_INIT_COMPLETE
Line 1416: SecuChParseAckMsg : Invalid msgType(0x%04X)
Line 1421: SecuChParseAckMsg : pAckMsg is NULL
Line 1426: SECUCH RX: 
Line 1434: SecuChParseAckMsg : SECUCH_RETRY(cmd:0x%08X, retry:%d)
Line 1438: SecuChParseAckMsg : Retry Timeout(cmd:0x%08X)
Line 1450: SecuChParseAckMsg : SECUCH_NEXT(current cmd:0x%08X, next cmd:0x%08X)
Line 1460: SecuChParseAckMsg : Unhandled source message box(=0x%X)
Line 1469: SecuChParseAckMsg Fail
Line 1489: SecuCh:AckFail-R:%02d,%08X,No:0x%08X
Line 1504: SecuChParseAckMsg : SECUCH_FAIL_RETURN(cmd:0x%08X)
Line 1511: SecuChParseAckMsg : SECUCH_COMPLETE(cmd:0x%08X)
Line 1516: SecuChParseAckMsg : SECUCH_IGNORE_ACK(cmd:0x%08X)
Line 1569: Init Semaphore (%d)
Line 1593: Send Semaphore (id:%d)
Line 1599: No Waiting Semaphores (id:%d)
Line 1604: Invalid Semaphore Send Req (id:%d)
Line 1625: Wait Semaphore (id:%d)
Line 1630: Too many Waiting Semaphores (id:%d)
Line 1635: Invalid Semaphore Wait Req (id:%d)
Line 1655: SECUCH SBOX: 
Line 1658: Non provisioning device
Line 1738: Token is not updated due to EM Not Ready
Line 1753: Initialize SecuCh Task
Line 1769: Provisioning status :(DEV:%d, FAC:%d, PROV:%d, ROOT:%d)
Line 1791: Request reading AP Device Binary Type
Line 1796: Not Provisioned. AP Device Binary Type is invalid.
Line 1801: Request reading Device Type
Line 1806: Not Provisioned. Device Type is invalid.
Line 1812: Request reading Warranty Bit
Line 1817: Not Provisioned. Warranty Bit is invalid.
Line 1838: Start SecuCh Task
Line 1848: pal_MsgRtkReceive failure
Line 1857: pal_MsgRtkReceive : Unsupported TypeOfObj(0x%X)
Line 1867: pal_MsgRtkReceive failure
Line 1880: pal_MsgRtkReceive : Unsupported TypeOfObj(0x%X)
