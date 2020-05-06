Line 177: PDCH Tx mask -0x%x
Line 211: pdchData_p->macMode[%d]pdchData_p->isAccess[%d] 
Line 222: BLOCK PDCH Tx 
Line 247: PDCH Tx Cancelled (# of TS):-%d
Line 266: PDCH Tx Cancelled (# of TS):-%d
Line 284: PDCH Tx Cancelled (# of TS):-%d, Base TS %d startTimetoCancel %d txData_p->txBlkAlloc %d rxData_p->rxBlkInit %d 
Line 306: BLOCK PDCH Tx 
Line 331: PDCH Tx Cancelled (# of TS):-%d
Line 349: PDCH Tx Cancelled (# of TS):-%d
Line 368: PDCH Tx Cancelled (# of TS):-%d, Base TS %d startTimetoCancel %d txData_p->txBlkAlloc %d rxData_p->rxBlkInit %d 
Line 372: numblksbch-%d numblkspch-%d page_blk-%d bch_blk-%d rxint-%d  usfhalloc-%x
Line 374: USF Allocation %d 
Line 398: *** More than 4 Ts, or Tx TS window size violated 
Line 401: Dyn blocks txAlloc %d, txInit %d   txBlkFixedAlloc  0x%02x
Line 410: TxPos cannot be bigger than 7, TX should be done in TS6 from baseTS
Line 457: scheduleTxTasks txBlkAlloc(0x%x) pdchTxCount(%d) Alloc(0x%x) Init(0x%x)
Line 463: ****scheduleTxTasks called twice
Line 476: ***Schedule ERROR
Line 480: txAlloc:  %d, txInit = %d
Line 497: Destroy handles after reading USF
Line 512: Destroy handles after reading USF , fixed block case 
Line 548: [DTM-L1] dtmUsfState[%d] txBlkAlloc [0x%x] DTM init[%d] CSTX FLAG[%d]
Line 552: DSP Int Set
Line 706: [DTM-L1] USF PS not allocated PsRxAlloc[0x%x] PsTxAlloc[0x%x] 
Line 764: ****scheduleTxTasks called twice
Line 776: ***Schedule ERROR
Line 780: scheduleTxTasksInUsfInt txAlloc:  %d, txInit = %d slotcount = %d
Line 847: Destroy handles after reading USF
Line 849:    SIL_Schedule, destroy dyn handles: destroy index 
Line 862: pdchData_p->isDspSet[%d] txData_p->pdchTxCount MOD 4 [%d] 
Line 866: Destroy handles after reading USF , fixed block case 
Line 881: l1_dtm_control_info.dtm_tch_sm_tx_scheduletasks in USF
Line 885: pdchData_p->isDspSet[%d] txData_p->pdchTxCount%4 [%d] 
Line 974: ***Prepare ERROR
Line 1072: In txWriteData: txAlloc 0x%x, txInit %d , assignedDynAlloc  0x%x,  txBlkFixedAlloc  0x%x
Line 1133: ERROR - txWriteData - more than 4 DynBlks
Line 1241: [SRLB] -OPENTX_COUNT1- SIL_DestroyILHandles
Line 1327: [SRLB] -L1PDCH_POSTTX- SIL_DestroyILHandles
Line 1354: Default case
Line 1365: Default case
Line 1395: ****scheduleTxTasks called twice
Line 1409: ***Schedule ERROR
Line 1415: txAlloc:  %d, txInit = %d
Line 1434: Destroy handles after reading USF
Line 1435:    SIL_Schedule, destroy dyn handles: destroy index 
Line 1449: Destroy handles after reading USF , fixed block case 
