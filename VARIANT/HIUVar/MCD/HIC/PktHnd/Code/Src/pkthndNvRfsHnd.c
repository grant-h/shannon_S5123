Line 165: RFS is not ready 
Line 180: RFS%d(index:%d) mailbox is used by %s task
Line 197: Allocation fail RFS%d(index:%d) mailbox by Task name length(%d)
Line 216: RFS%d(index:%d) mailbox is allocated by %s task
Line 226: RFS%d(index:%d) mailbox is released by %c%c%c%c%c... task
Line 231: Release fail RFS%d(index:%d) mailbox
Line 247: rfs_get_mailbox() taskname(%s)
Line 260: RFS mailbox is fully used
Line 280: invalid mailbox_num(%d)
Line 289: pal_MsgRtkReceive() failure
Line 295: invalid msg class(%d)
Line 351: rfs_open_file() 
Line 374: Invalid EFS file(%s)
Line 382: invalid mailbox_num(%d) 
Line 394: rfs_wait_pda_cfrm is failed 
Line 400: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 406: rfs_open_file() : path(%s), handle(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 432: rfs_close_file() 
Line 441: invalid mailbox_num(%d) 
Line 455: rfs_wait_pda_cfrm is failed 
Line 461: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 467: rfs_close_file() : handle(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 494: rfs_delete_file() 
Line 503: invalid mailbox_num(%d) 
Line 516: rfs_wait_pda_cfrm is failed 
Line 522: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 528: rfs_delete_file() : path(%s), result(0x%X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 536: memFreeMem is failed
Line 543: pal_MemFree is failed
Line 561: rfs_read_file() 
Line 570: invalid mailbox_num(%d) 
Line 586: rfs_wait_pda_cfrm is failed 
Line 592: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 597: rfs_read_file() : handle(0x%08X), written_bytes(%d), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 607: [PKTHND_ERR] memFreeMem(0x%X) failure
Line 613: [PKTHND_ERR] <%s(%d)> pal_MemFree failure
Line 643: rfs_write_file() 
Line 652: invalid mailbox_num(%d) 
Line 668: rfs_wait_pda_cfrm is failed 
Line 674: tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 680: rfs_write_file() : handle(0x%08X), written_bytes(%d), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 687: [PKTHND_ERR] memFreeMem(0x%X) failure
Line 693: [PKTHND_ERR] <%s(%d)> pal_MemFree failure
Line 719: [RFS] rfs_lseek_file() 
Line 728: [RFS_ERR] <%s(%d)> invalid mailbox_num(%d) 
Line 740: [RFS_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 746: [RFS_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 752: [RFS] rfs_lseek_file() : handle(0x%08X), offset(%d),  err(0x%X), len(%d), cmd(%X), tid(%d)
Line 760: [RFS_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 766: [RFS_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 782: [RFS] rfs_unlink_file() 
Line 791: [RFS_ERR] <%s(%d)> invalid mailbox_num(%d) 
Line 803: [RFS_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 809: [RFS_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 815: [RFS] rfs_unlink_file() : result(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 823: [RFS_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 829: [RFS_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 844: [RFS] rfs_rename_file() 
Line 853: [RFS_ERR] <%s(%d)> invalid mailbox_num(%d) 
Line 865: [RFS_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 871: [RFS_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 877: [RFS] rfs_rename_file() : result(0x%08X), err(0x%X), len(%d), cmd(%X), tid(%d)
Line 885: [RFS_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 891: [RFS_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 921: [PKTHND_ERR] pkthndHandleNvRfsMsg() : pData==NULL
Line 929: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 932: [PKTHND_ERR] pkthndHandleNvRfsMsg() : (!(usDataLen>0))
Line 940: [PKTHND] RX RFS : Len=%d, Cmd=0x%X, Transation Id=%d, pNvRfsFrame(0x%08X)
Line 948: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 959: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 962: [PKTHND_ERR] <%s(%d)> pal_MemAlloc() failure
Line 974: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 978: [PKTHND_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 980: [PKTHND_ERR] invalid transaction id
Line 995: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 1000: [PKTHND_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 1003: [PKTHND_ERR] pal_MsgSendTo(pal_EMsgEntity_RFSX(%X)) failure
Line 1024: [PKTHND_ERR] pkthndSendNVMsg() : pNvData==NULL || usDataLen==0
Line 1037: [PKTHND_ERR] <%s(%d)> hostifSendDataPacket() failure
Line 1058: [PKTHND_ERR] pkthndSendRFSMsg() : pNvData==NULL || usDataLen==0
Line 1069: [PKTHND_ERR] <%s(%d)> hostifSendDataPacket() failure
Line 1096: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1108: [PKTHND_ERR] <%s(%d)> pkthndSendNVMsg() failure
Line 1140: [PKTHND_ERR] <%s(%d)> rfs_wait_pda_cfrm is failed 
Line 1146: [PKTHND_ERR] <%s(%d)> tCurRecvMsgRtkObjDesc.ReceivedObj.message is null 
Line 1152: [PKTHND] pal_Flash_WriteNVDelta() : ucStatus(%d), uiOffset(%d), uiSize(%d)
Line 1161: [PKTHND_ERR] <%s(%d)> memFreeMem(0x%X) failure
Line 1167: [PKTHND_ERR] <%s(%d)> pal_MemFree(0x%X) failure
Line 1190: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiSize(%d), uiHandle(0x%08X)
Line 1198: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1208: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1230: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiSize(%d), pFileData(0x%08X)
Line 1238: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1250: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1272: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1281: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1303: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiFilepathLen(%d), pFilepath(0x%08X)
Line 1311: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1323: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1348: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1359: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1381: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiFilepathLen(%d), pFilepath(0x%08X)
Line 1389: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1399: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
Line 1413: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiOldFilepathLen(%d), pOldFilepath(0x%08X)
Line 1419: [PKTHND_ERR] <%s(%d)> Invalid parameter : uiNewFilepathLen(%d), pNewFilepath(0x%08X)
Line 1427: [PKTHND_ERR] <%s(%d)> memAllocMem() failure
Line 1439: [PKTHND_ERR] <%s(%d)> pkthndSendRFSMsg() failure
