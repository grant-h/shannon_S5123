Line 135: [HAL][LMAC] LmacInit() Start! bDmaInit(%d) bHwInit(%d)
Line 139: [HAL][LMAC] Forced Lmac HW init!
Line 172: [HAL][LMAC] LmacInitPartial() Start! bDmaInit(%d)
Line 195: [HAL][LMAC] NrLmacInit() Start! bDmaInit(%d) bHwInit(%d)
Line 199: [HAL][LMAC] Forced Lmac HW init!
Line 251: [FPGA][LMAC] InitLmacRxPollingTimer() Start!
Line 287: [HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u
Line 339: [HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u, LmacErrorCnt = %u
Line 377: [HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u, LmacErrorCnt = %u
Line 415: [HAL][LMAC][ERROR] PrevDescNum is 0! Something is wrong!
Line 434: [HAL][LMAC][ERROR] RX_4G5G_ERR_STATUS(%d) Invalid Trbk error!
Line 439: [HAL][LMAC][ERROR] RX_4G5G_ERR_STATUS(%d) is not 0. But ignore this err
Line 453: [HAL][LMAC] Same desc case. Just return! uDummyWD(%u) RX_5G_CUR_DESC_NUM(%u)
Line 466: [HAL][LMAC] PrevDescNumber(%u) RX_5G_CUR_DESC_NUM(%u)
Line 492: [HAL][LMAC][ERROR] Dummy Lmac Intr by no valid CW
Line 521: [HAL][LMAC][ERROR] Stop Lmac descriptor processing!
Line 645: [HAL][LMAC][ERROR] !!! LMAC DUMP REGISTER! LmacErrorCnt(%u) index(%d)
Line 656: [HAL][LMAC][ERROR] Valid is not 1! LmacErrorCnt(%u)
Line 718: [HAL][LMAC][ERROR] Invalid cellType(%u)! LmacErrorCnt(%u)
Line 733: [HAL][LMAC][ERROR] MAC PDU Table FULL !!!
Line 768: [HAL][LMAC][ERROR] !!! LMAC DUMP REGISTER! LmacErrorCnt(%u) index(%d)
Line 779: [HAL][LMAC][ERROR] UF is not 1! LmacErrorCnt(%u)
Line 872: [HAL][LMAC][ERROR] Invalid cellType(%u)! LmacErrorCnt(%u)
Line 881: [HAL][LMAC][MAC PDU] PduSize(%d) CC_index(%d) DCSCG_ind(%d) PduAddr(0x%x) DescAddr(0x%x) Status(%u)
Line 887: [HAL][LMAC][ERROR] MAC PDU Table FULL !!!
Line 895: [HAL][LMAC][ERROR] status(%d) is invalid. This desc will be discarded!
Line 969: [HAL][LMAC][ERROR] PrevDescNum is 0! Something is wrong!
Line 988: [HAL][LMAC][ERROR] RX_4G5G_ERR_STATUS(%d) Invalid Trbk error!
Line 993: [HAL][LMAC][ERROR] RX_4G5G_ERR_STATUS(%d) is not 0. But ignore this err
Line 1008: [HAL][LMAC][ERROR] dwCurDmaDescIdx >= MAX_RX_COMMON_DMA_COUNT
Line 1021: [HAL][LMAC][SHARED BUF] PrevDescNumber(%u) CurrDescNum(%u) dwCurDmaDescIdx(%u) dstStartAddr(0x%x) dwLmacDescStartIdx(%u) dwLmacDescEndIdx(%u)
Line 1087: [HAL][LMAC][SHARED BUF] Remain Lmac Buffer size : %u (KB), Remain Lmac Desc Cnt : %u
Line 1110: [HAL][LMAC][ERROR] LmacRxDoneDescProc:: pCmdReqHdr == nullptr!
Line 1126: [HAL][LMAC][ERROR] LmacRxDoneDescProc:: pParserCmdHdr == nullptr!
Line 1148: [HAL][LMAC][Dump Reg] CUR_ADDR(0x%x) FREE_ADDR(0x%x)
Line 1151: [HAL][LMAC][Dump Reg] GetTrsCurAddrOfL2Buf(0x%x) pLmacCtrl->StartAddr(0x%x)
Line 1155: [HAL][LMAC][Dump Reg] GetParsCurAddrOfL2Buf(0x%x) pLmacCtrl->StartAddr(0x%x)
Line 1160: [HAL][LMAC][ERROR] invalid operation mode! RX_PS_OPERATION_MODE = %u
Line 1165: [LMAC][Dump Desc] desc idx[%d] = 0x%x
Line 1174: [HAL][LMAC][ERROR] LmacStartFullReset() Start! RX_4G5G_ERR_STATUS = %u
Line 1184: [HAL][LMAC] LmacResetInd is already triggered. Do not send Lmac Reset IND.
Line 1196: [HAL][LMAC] LmacRxRlcConfigSet() Start!
Line 1209: [HAL][LMAC] Send L2_HAL_LMAC_RESET_IND! to reset L2 layers
Line 1215: [HAL][LMAC][ERROR] SendMsgInterDomain fail
Line 1470: [HAL][LMAC] Abnormal LMAC TX intr[%d]
Line 1654: [HAL][LMAC] Error, pCmdReqHdr = nullptr !!!
