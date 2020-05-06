Line 227: MacEhsInit Procedure
Line 299: [Error] DBGetHsdschInfo !!!
Line 338: WARNING: QueueId is out of bound
Line 346: WARNING: MacehsQueueInfo is NULL
Line 371: Inside Umac_MacehsSetReorderingParams, Stopping Treset for QueueId: %d
Line 456: Error case MAX no of SDU per reorderPDU can be %d. Currently recieved %d.
Line 460: PDU disassembly (SDU count = %d)
Line 516: **Critical Error**: Lch Not valid (LCHID = %d)
Line 529: SDU disassembly (SDU length = %d)
Line 552: UPHY not ready to process EHS data
Line 597: Inside Disassembly, Stored BCCH HRNTI is: [%d]
Line 605: Error case: H-RNTI for BCCH is not present and Logical Channel Id equals to LCH_ID_ECFACH
Line 619: Error case: QueueID out of bound: %d
Line 631: Inside Disassembly, Handling DXCH or CCCH case, LCH Id: %d, Queue Id: %d
Line 642: Error case: Logical Channel id is not mapped to DXCH or CCCH
Line 741: MacehsPDU_num: %d, Reorder PDU Count is: %d, DataSize = %d
Line 745: Error case MAX no of Reorder PDU can be 3. Currently received %d.
Line 766: Duplicate detected
Line 789: After disassembly: (%d,%d) bytes remaining
Line 817: MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Line 869: [Warning] MAC-ehs PDU Macehs disassembly is not ready, discard PDU cnt : %d
Line 882: LmacDoneISR Missing : %d, numOfUmacMacEhsPdu: %d
Line 885: Inside Disassembly, MAC-EHS PDU Count %d
Line 946: Error: Data Recived for a LCH[%d] not configured
Line 1018:  New UpperEdge:%d
Line 1041: T1 timer start Q[%d] T1TSN:%d
Line 1065: T1 timer stop Q[%d] T1TSN:%d
Line 1078: Running T1Timer Token although T1 stop
Line 1214: WARNING: QueueId is out of bounds
Line 1248: WARNING: T1 Timer Expiry when queue list is NULL
Line 1255: Inside T1TimerExpire, QueueId: %d
Line 1271: [Error] T1_TSN(%d) == NET(%d) !!!
Line 1289: WARNING: MacehsQueueList is NULL
Line 1332: T1 timer expiry from SMC : Q[%d] NET:%d, UE:%d, T1TSN:%d
Line 1364: Starting Treset Timer for Queue Id: %d
Line 1438: [ECF] WARNING: QueueId %d is out of bound
Line 1448: [ECF] WARNING: TReset Expiry: QueueId %d, TresetTimerEnable = %d, pTresetTimerSetEhs = %x
Line 1473: T1 timer stop Q[%d] T1TSN:%d
Line 1486: Running T1Timer Token although T1 stop
Line 1513: WARNING: MacehsQueueList is NULL
Line 1551: Inside TresetTimerExpire, QueueId: %d
Line 1568: Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Line 1577: Inside TresetTimerExpire, Queue Id: %d, NET: %d, isUtranCommercialPlmnId: %d, UE: %d
Line 1595: Inside TresetStop, QueueId: %d
Line 1605: Warning: Running TresetTimer Token, although Treset stopped
Line 1779: Deleting Segments %d
Line 1867:  Waring: issue in CombineSdu
Line 2007:  Waring: issue in CombineSdu
Line 2033: Deleting Segments %d
Line 2092:  Warning: Discarding
Line 2154: WARNING: QueueId is out of bound : %d, LCHID: %d
Line 2165: Inside Reassembly, Lch Id Not valid 
Line 2171: Inside Reassembly, Deleted Mob (LCHid Not valid)
Line 2186: Inside Reassembly, UeId Value received from URRC: %d, UeId Value received from Header for SDU No: %d is: %d
Line 2205: Inside Reassembly, Error case: U-RNTI is invalid for SDU NO: %d
Line 2211: Inside Reassembly, Deleted Mob (Not our UeId)
Line 2217: Inside Reassembly, Mapped to CCCH
Line 2233: Inside Reassembly, Num of SDU's having same UeId as configured by URRC is: %d
Line 2279: (Umac_MacehsReassembly) More than %d SDU 
Line 2288: WARNING: CombineIndex is out of bound
Line 2293: (Reassembly) SI:%d, SDU Cnt %d TSN %d 
Line 2340: SI Field Invalid TSN %d
Line 2353: (Umac_MacehsReassembly) More than 400 SDU %d
Line 2363: (Umac_MacehsReassembly) too many handle passed: %d
Line 2370: (Umac_MacehsReassembly) SduCount %d is out of bound
Line 2375: (Umac_MacehsReassembly) Giving SDUs to Demux, SduCount: %d
Line 2453: SegmentCnt is too many: SduCount %d, TotalSduSize %Bytes, LmacModeCheck %x
Line 2583: WARNING: RbId[%d] is NULL
Line 2651: queue ID or LchId is out of bound
Line 2662: WARNING: RbInfo[%d] is NULL
Line 2669: Rbid for BCCH: %d
Line 2673: Error Case: LchId equals to LCH_ID_ECFACH, but BCCH or PCCH hrnti is not present
Line 2685: queue ID or LchId is out of bound
Line 2748: (Umac_MacehsDemultiplexing) One reordering mapped more RB: queueID%d, PrevRbId %d, RbId %d
Line 2753: RbCount out of bound 
Line 2900: MacehsTsnFieldExt(0:TSN6bit mode)
Line 2902: MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Line 2918: MacehsTsnFieldExt(1:TSN14bit mode)
Line 2920: MacehsWindowMaxnum:%d, MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d, RcvWindowUpperEdgeEhs:%d
Line 3005: Invalid indx %d
Line 3012: Invalid queue id %d
Line 3038: Invalid indx %d
Line 3162: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3176: Error: Queue ID:%d is out of bound
Line 3231: NoAddOrReconfMacehsQueue %d
Line 3246: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3259: WARNING: Queue ID:% is out of bound
Line 3270: Override queue id[%d] 
Line 3283: WARNING: AddCnt is out of bound
Line 3291: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3309: Error: Queue ID:% is out of bound
Line 3354: Reset isCommonhrntipresent flag.
Line 3366: MacehsTsnFieldExt(0:TSN6bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacEhsParam_p->MacehsTsnModulo:%d, MacehsMaxReorderSduPerTTI:%d
Line 3375: MacehsTsnFieldExt(1:TSN14bit mode), MacehsWindowMaxnum:%d (Configured:%d), MacehsTsnModulo[SIMInstance]:%d, MacehsMaxReorderSduPerTTI:%d
Line 3406: Initial configuration for HS-DSCH , isMacEhsReqForFach %d  
Line 3421: Reconfiguration for HS-DSCH , isMacEhsReqForFach %d
Line 3442: After Add. Configured Mac-ehs QueueID:%d, WindowSize:%d
Line 3455: After delete. Configured Mac-ehs QueueID is zero
Line 3462: After delete. Configured Mac-ehs QueueID:%d
Line 3521: Reconfiguration(shorten) of Receive_Window_Size in Q[%d]
Line 3528: [HS-DPCCH ACK DSDS Opt] gT1Value2DSP = %d, Rcvd new T1 = %d
Line 3578: Reset or Release QueueId mapping to HSDSCH. MacehsResetInfo: %d, MacehsReleaseInfo: %d, MacehsPdu Rcvd: %d, Duplicated: %d, DuplicateRate: %d (x100)
Line 3612: Error: Queue ID:% is out of bound
Line 3675: [HS-DPCCH ACK DSDS Opt] Reset Shared T1 Value to DSP
Line 3712: Warning: Null pointer
