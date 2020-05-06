Line 187: HAL_LmacCommonDmaReqInitCheck : ( pstReqQ->dwCount_listDmaReqFreeQ != LMAC_SHARED_RINGBUFF_REQ_POOL_SIZE )
Line 197: HAL_LmacCommonDmaReqInitCheck : ( pstReqQ->stReqQ_Pool[i].eReqState == HAL_LMAC_SHARED_RINGBUF_REQ_RUN )
Line 201: HAL_LmacCommonDmaReqInitCheck : Init RingBuffer Dma Q
Line 216: HAL_LmacChangeRxBufferSizeModeDef : Success
Line 252: HAL_LmacBtlSizeChangeCb : eReqBtlSize[%d]
Line 260: HAL_LmacChangeRxBufferSizeModeDef : Success
Line 287: HAL_LmacChangeRxBufferSizeModeExt2ExtDef : Fail
Line 291: HAL_LmacChangeRxBufferSizeModeExt2ExtDef : Success
Line 333: HAL_LmacChangeRxBufferSizeModeExtDef2Def : Fail 1
Line 339: HAL_LmacChangeRxBufferSizeModeExtDef2Def : Fail 2
Line 344: HAL_LmacChangeRxBufferSizeModeExtDef2Def : Success
Line 404: HAL_LmacGetCommonDmaReqQItem : listDmaReqQ is empty
Line 437: HAL_LmacGetCommonDmaReqQItem : : pDmaReqQItem[%x]
Line 499: HAL_LmacClearCommonDmaReqQ : ( pal_ListIsEmpty(&pstReqQ->listDmaReqFreeQ) == TRUE )
Line 519: HAL_LmacGetCommonDmaReqFreeQItem : Alloc Count [%d] > 10 
Line 631: HAL_LmacClearCommonDmaReqQ : clear all pending req : %d
Line 676: HAL_LmacGetUsedSize : eMode[%d], eRatType[%d], dwUsedSize[%d]
Line 922: HAL_LmacGetSharedRingBufferAddr : eMode[%x], Cur/NextAddr[%x/%x], Length[%d], CurRingOffset[%08x/%08x/%08x]
Line 942: HAL_LmacSetCommonDmaReqItem : Invalid Length[%d], eRatType[%d], SrcAddr=[0x%x], LmacDescIdx[%d], uStackId[%d]
Line 1080: HAL_LmacRunCommonDmaReqItem : DmaReqQ Count[%d]
Line 1135: HAL_LmacUpdateStatistics : eMode[%d], LTE/NR Bytes[%d/%d]/960ms, dwDownSizeCheckCount[%d], bReqDownSize[%d]
Line 1161: HAL_LmacUpdateCommonRing_FREE_DATA_ADDR : eRatType[%d], dwFreeAddr[%x], Ignore Invalid Addr
Line 1170: HAL_LmacUpdateCommonRing_FREE_DATA_ADDR : eRatType[%d], dwFreeAddr[%x], Ignore Invalid Addr2
Line 1176: HAL_LmacUpdateCommonRing_FREE_DATA_ADDR : eRatType[%d], dwFreeAddr[%x], Ignore Invalid Addr3
Line 1217: HAL_LmacUpdateCommonRing_FREE_DATA_ADDR : eMode[%d], eRatType[%d], dwFreeAddr[%x], IgnoreCnt[%d]
Line 1297: HAL_ProcLmacRxSduDoneLisrCb : Pending Item Idx[%d]
Line 1319: HAL_LteLmacSduDoneHisr : LTE_L2LRX_BTL_SIZE_CHANGE_REQ
Line 1345: HAL_LmacDbg_DmaReqIdxUpdate : (dw_dbgDmaRequestCount - dw_dbgDmaDoneIdx) > 10
Line 1365: HAL_LmacDbg_SharedRingPrintStatus : To do [eMode:%d]
Line 1373: [ERROR] HAL_LmacDbg_SharedRingPrintStatus : Start/End [%x/%x], FREE/CURR [LTE:%x/%x], [NR:%x/%x]
