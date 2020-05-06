Line 190: DM recieved control message 0x%x %d
Line 282: [DM] DM_TRACE_START_REQ
Line 287: [DM] DM_TRACE_STOP_REQ
Line 292: [DM] DM_TRACE_STATUS_GET_REQ
Line 297: [DM] DM_TRACE_TABLE_GET_REQ
Line 302: [DM] DM_TRACE_ITEM_SEL_REQ
Line 307: [DM] DM_ILM_START_REQ
Line 313: [DM] DM_ILM_STOP_REQ
Line 319: [DM] DM_ILM_ENTITY_TABLE_GET_REQ
Line 324: [DM] DM_ILM_ITEM_SELECT_REQ
Line 330: [DM] DM_REGISTRY_INFO_GET_REQ
Line 335: [DM] DM_REGISTRY_READ_REQ
Line 340: [DM] DM_REGISTRY_WRITE_REQ
Line 345: [DM] DM_TCP_IP_DUMP_REQ
Line 358: [DM] DM_CONSOLE_STARTSTOP_REQ
Line 364: [DM] DM_SVC_CONSOLE_STARTSTOP_REQ %x
Line 371: RSCtest, DM_RESOURCE_MONITOR_STARTSTOP_REQ
Line 377: [DM] DM_TRIGGER_TABLE_REQ %x
Line 382: [DM] DM_TRIGGER_EVENT %x
Line 398: error: Invalid cmd type - dmStartMsgProc
Line 416: error: msg pointer is NULL - dmProcDmStartReq
Line 420: dmProcDmStartReq, current state=%d
Line 435: changed state=%d
Line 439: Ignore DM start message, DM is in %d state
Line 447: [DM]Magic code: %x UE Config: %x
Line 454: [DM]TIME1:%d
Line 476: [DM]Magic code sequence check enabled
Line 585: [DM] Invalid Magic Code
Line 608: dmProcDmStopReq, current state=%d
Line 642: ns_DmUpdateTimerChange process error %d
Line 650: ns_DmUpdateTimerChange process error %d
Line 672: changed state=%d
Line 676: Ignore DM stop message, DM is in %d state
Line 823: [DM] update runtime period change to %d
Line 832: [DM] update period change to %d
Line 860: ns_DmUpdateTimerChange process error %d
Line 869: ns_DmUpdateTimerChange process error %d
Line 1835: TraceGroupNum = %d (%d)
Line 1967: dmIlmTableGet %d
Line 2103: TraceGroupNum = %d
Line 2114: [DM]Ilm Level. Tx(%d), Rx(%d)
Line 2268: [DM] Secure NV id %d, strlen %d typelen %d
Line 2337: Registry information %d exceed MAX size %d (%d)
Line 2388: Secure NV Info id %d arraysize %d %c%c typelen %d %c%c
Line 2524: SecureNV Read Id :  %d value : %d
Line 2583: Secure NV %d Write(Skipped)
Line 2755: [DM] dmProcSvcConsoleStartStopReq 
Line 2765: [DM] dmProcSvcConsoleStartStopReq svcConsoleMsg->flag=%d, svcMode=0x%X, svcSubMode=0x%X
Line 2783: pal_MemAlloc failed
Line 2790: [DM] send dmProcSvcConsoleStartStopRsp result= %d
Line 2816: dmProcSvcScreenString() : Invalid ucNumLine(=%d)
Line 2832: Tx Display Screen NTF to DM (Num Line=%d)
Line 2860: dmProcSvcScreenWideString() : Invalid ucNumLine(=%d)
Line 2876: Tx Display Screen Wide NTF to DM (Num Line=%d)
Line 2906: Invalid MemAlloc
Line 2965: Invalid MemAlloc
Line 2976: pktNum =%d totalPktNum=%d bufSize=%d
Line 2977: rsp->totalNumPacket =%d rsp->packetNum=%d rsp->cpuMonitorDataCnt=%d 
Line 3004: Invalid MemAlloc
Line 3030: CPU idletime =%d --> %d
Line 3042: Invalid MemAlloc
Line 3068: DynMem[ %d, %d, %d, %d, %d, %d]
Line 3108: Invalid MemAlloc
Line 3118: ThreadMEM pktNum =%d totalPktNum=%d bufSize=%d
Line 3119: ThreadMEM rsp->totalNumPacket =%d rsp->packetNum=%d rsp->cpuThreadDataCnt=%d 
Line 3148: [DM] SEND dbgsymbol %d 
Line 3186: [DM] SEND dbgsymbol internal %d 
