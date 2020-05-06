Line 252: ##Error Expected < Received in drv_USIMSetRxTide
Line 253: Expected=0x%X, Received=0x%X
Line 265: pal_DrvSim2ClockStopSet...no clock stopping
Line 272: hw_Usim2IO.iSCICR0 = 0x%X,hw_Usim2IO.iSCICR1 = 0x%X
Line 310: pal_DrvSimClockStopSet... Clock stop Failed - One more try
Line 315: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 322: pal_DrvSimClockStopSet... Clock stop Failed !!
Line 327: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 336: Clock Stop mode enabled....Clock Stop !!!
Line 340: Already Cock stopped.skip..pal_DrvSimClockStopSet
Line 346: *** USIM retention at pal_DrvSim2ClockStopSet
Line 425: Usim Clock fRef: %d, SCICLKICC: %d, f: %d
Line 509: << ATR WWT Default = %d etu >>
Line 530: << hw_Usim2IO.iSCIAUXCR = 0x%X >>
Line 1033: Send TxRx timeout to Appl. for recovery SIM2
Line 1068:  *** FORCED RETURN SIM2 REQUEST *** 
Line 1161: ** Parity error at TS byte
Line 1175: == USIM2_ATR_INVERSE_CONV == 
Line 1191: Receive 0x3B twice..skip
Line 1203: ATR Parity error ...UsimRxReceivedBytes = 0x%X, RxByte = 0x%X 
Line 1265: Extra bytes received during ATR ...UsimRxReceivedBytes = 0x%X ...UsimRxExpectedBytes = 0x%X
Line 1275: Number of bytes received >= USIM_DRV_MAX_ATR ...UsimRxReceivedBytes = 0x%X
Line 1301: Invalid External request to change WWT
Line 1307: External request to change WWT
Line 1321: Current WWT value = %d etu
Line 1351: Di = %d, WI = %d, Changed WWT value = %d etu
Line 1395: Calculate PPS : Fi = %d, Di = %d,FDratio = %d
Line 1431: Usim2DriverState != DRV_IS_PPS
Line 1432: Usim2DriverState = 0x%X
Line 1459: drv_Usim2DecodeAtr - ATR rejected
Line 1567: TC1...GUARDTIME ADDED = %d
Line 1584: TD(1) Protocol= %d
Line 1617: ProcessATR...ATR_T0_TA3 = 0x%X
Line 1620: ** UsimClockStopState = 0x%X
Line 1651: << PPS = 0x%X >>
Line 1706: ProcessATR...usePPS = FALSE
Line 1712: >>> Change F/D = %d
Line 1717: >>> Invalid TA1 value.. no Change speed
Line 1761: The TX FIFO is not empty ...The value of TXCount is 0x%X
Line 1766: The RX FIFO is not empty ...The value of RxCount is 0x%X
Line 1805: Usim2HandlePPSData... RxCount=%d
Line 1821: UsimHandlePPSData... Receive Parity error
Line 1826: Receive PPS response
Line 1833: Receive PPS[%d] = 0x%X
Line 1839: UseDefaultPPS == TRUE
Line 1854: Receive PPS[%d] = 0x%X
Line 1866: >>> PPS rejected from CARD. using default speed
Line 1874: >>> Change F/D = %d
Line 1879: >>> Invalid TA1 value=0x%X ...no Change speed
Line 1918: For receive remained PPS Data..drv_USIM2SetRxTide = %d
Line 1935: Disable Internal pull-up of SIM1 DATA_IO
Line 1939: Can't process NULL handle: SIM1_DATA(%x)
Line 1948: hw_Usim1DataIoDisable - uUsim1BackupPullup: %d
Line 1956: Enable Internal pull-up of SIM1 DATA_IO
Line 1960: Can't process NULL handle: SIM1_DATA(%x)
Line 1965: hw_Usim1DataIoEnable - uUsim1BackupPullup: %d
Line 2055: Can't process NULL handle: SIM1_CLK(%x), SIM1_DATA(%x), SIM1_RST(%x)
Line 2087: Can't process NULL handle: SIM1_CLK(%x), SIM1_DATA(%x), SIM1_RST(%x)
Line 2099: Enter drv_UsimHwUsim1Backup
Line 2107: Exit drv_UsimHwUsim1Backup
Line 2113: Enter drv_UsimHwUsim1Restore
Line 2166: Exit drv_UsimHwUsim1Restore
Line 2173: Enter drv_Usim1ReadyRetention
Line 2177: Exit drv_Usim1ReadyRetention
Line 2186: Enter drv_Usim1StartRetention
Line 2205: Exit drv_Usim1StartRetention
Line 2236: drv_Usim2TxRx..pData=null skip
Line 2247: drv_Usim2TxRx..DRV_IS_NO_SIM
Line 2254: drv_Usim2TxRx..DRV_IS_WAIT_FOR_ATR
Line 2261: drv_Usim2TxRx - DRV_IS_TX_RX
Line 2268: drv_Usim2TxRx - DRV_IS_WAIT_FOR_CMD
Line 2276: drv_Usim2TxRx - UICC_EXCH_TYPE2..NoOfBytesExpected++ = 0x%X
Line 2281: drv_Usim2TxRx.. NoOfBytesExpected = 0x%X
Line 2299: drv_Usim2TxRx - The TX FIFO is not empty(TxCount = 0x%X) -- flush
Line 2305: drv_Usim2TxRx - The RX FIFO is not empty(RxCount = 0x%X) -- flush
Line 2340: drv_UsimTxRx.. Tx Header => 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
Line 2345: drv_Usim2TxRx.. unknown state:%x
Line 2373: !!! UICC_EXCH_TYPE_UNKNOWN !!!
Line 2398: RxParityCount_USIM2 = 0x%X
Line 2403: RxParityCount = 10....Cold reset
Line 2411: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2412: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 2430: Null byte is received...continue without save data
Line 2436: *** Received Null byte 100 times ***
Line 2451: Usim2HandleRxData. NullProcByteCount_USIM2 = %d
Line 2467: pData->NoOfBytesExpected = 3, RxByte=0x%X
Line 2477: Usim2HandleRxData..CmdExchType=1...Expect=2
Line 2502: Usim2HandleRxData..CmdExchType=1...Expect=2
Line 2520: Usim2HandleRxData. Error!! pData->NoOfRxBytes = 0x%X,RxByte =0x%X
Line 2568: Usim2HandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2599: Usim2HandleRxData. RxParityCount_USIM2 = 0x%X
Line 2604: Usim2HandleRxData. RxParityCount_USIM2 = 10....Cold reset
Line 2612: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2613: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2639: Usim2HandleRxData. Receive Byte <= 0x%X
Line 2657: Usim2HandleRxData. Receive ACK Byte : 0xFE
Line 2665: Usim2HandleRxData. Receive Rx Byte : 0x60
Line 2673: +++ Usim2HandleRxData. Receive Null byte 100 times
Line 2688: Usim2HandleRxData. NullProcByteCount_USIM2 = %d
Line 2725: Usim2HandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2746: !!!! Abnormal Exchange Type !!!!
Line 2751: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2752: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2769: Usim2CopyDataToTxFifo. NoOfTxBytes is too long: 0x%X
Line 2774: Usim2CopyDataToTxFifo. NoOfBytesTrasmitted is wrong: 0x%X
Line 2785: Usim2CopyDataToTxFifo(Data <= 64) pData->NoOfTxBytes=0x%X
Line 2792: Tx Byte=0x%X
Line 2801: pData->NoOfBytesExpected=0x%X, pData->NoOfRxBytes=0x%X
Line 2816: Usim2CopyDataToTxFifo(Data > 64) pData->NoOfTxBytes=0x%X
Line 2823: TxFifo=0x%X
Line 2833: NoOfBytesTrasmitted is wrong: 0x%X
Line 2883: DRV_IS_NO_SIM - SCICARDININTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2884: Rxbuffer = 0x%X,ITIP = 0x%X
Line 2896: DRV_IS_NO_SIM - SCICARDOUTINTR
Line 2915: DRV_IS_NO_SIM - SCICARDUPINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 2916: Rxbuffer = 0x%X,ITIP = 0x%X
Line 2937: DRV_IS_NO_SIM - Deactivation completed !!
Line 2946: DRV_IS_NO_SIM - Overrun Error
Line 2959: DRV_IS_NO_SIM - SCIRXTIDEINTR
Line 2972: +++ RxTideCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 2982: Abnormal INTR = 0x%X in the DRV_IS_NO_SIM
Line 2983: RIS = 0x%X,MIS = 0x%X
Line 3005: DRV_IS_WAIT_FOR_ATR - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3006: ITIP = 0x%X
Line 3067: ATR Sequence not finished after 0x%X tries
Line 3094: DRV_IS_WAIT_FOR_ATR - SCIATRDTOUTINTR
Line 3115: DRV_IS_WAIT_FOR_ATR - SCIATRSTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3116: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3135: DRV_IS_WAIT_FOR_ATR - SCICARDOUTINTR
Line 3149: DRV_IS_WAIT_FOR_ATR - SCICARDDNINTR
Line 3172: DRV_IS_WAIT_FOR_ATR - SCICHTOUTINTR
Line 3173: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3192: DRV_IS_WAIT_FOR_ATR - Overrun Error
Line 3207: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_ATR
Line 3226: DRV_IS_PPS - SCITXTIDEINTR
Line 3231: DRV_IS_PPS - SCIRXTIDEINTR
Line 3244: DRV_IS_PPS - SCITXERRINTR
Line 3262: DRV_IS_PPS - SCICHTOUTINTR
Line 3263: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3290: DRV_IS_PPS - SCIBLKTOUTINTR
Line 3296: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3298: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3309: PPS...CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3310: Rxbuffer = 0x%X, ITIP = 0x%X
Line 3323: DRV_IS_PPS - Overrun Error
Line 3338: Abnormal INTR = 0x%X in the DRV_IS_PPS
Line 3359: DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3360: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3367: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_WAIT_FOR_CMD
Line 3378: +++ AbnormalReceiveCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 3389: DRV_IS_WAIT_FOR_CMD - SCIRTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3390: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3400: ***flush Rx buffer SCIRTOUTINTR in the DRV_IS_WAIT_FOR_CMD
Line 3407: DRV_IS_WAIT_FOR_CMD - SCITXERRINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3408: ITIP = 0x%X
Line 3418: ###flush Tx buffer SCITXERRINTR in the DRV_IS_WAIT_FOR_CMD
Line 3423: DRV_IS_WAIT_FOR_CMD - Overrun Error
Line 3437: DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3438: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3442: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_CMD
Line 3460: DRV_IS_TX_RX - SCITXTIDEINTR
Line 3465: DRV_IS_TX_RX - SCIRXTIDEINTR
Line 3476: DRV_IS_TX_RX - SCITXERRINTR
Line 3497: DRV_IS_TX_RX - SCICHTOUTINTR
Line 3499: NoOfRx=0x%X,NoOfExpected=0x%X,RxBuff[0]=0x%X,RxBuff[1]=0x%X,IsIdleState=0x%X
Line 3500: pData->NoOfBytesTrasmitted = 0x%X
Line 3520: DRV_IS_TX_RX - SCIBLKTOUTINTR
Line 3526: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3528: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3539: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3540: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 3553: DRV_IS_TX_RX - SCICARDOUTINTR
Line 3564: DRV_IS_TX_RX - SCICARDDNINTR
Line 3579: DRV_IS_TX_RX - Overrun Error
Line 3594: Abnormal INTR = 0x%X in the DRV_IS_TX_RX
Line 3616: DRV_IS_TX - SCITXTIDEINTR
Line 3624: DRV_IS_TX - SCITXERRINTR
Line 3644: DRV_IS_TX - SCICHTOUTINTR
Line 3645: NoOfRxBytes=0x%X,NoOfBytesExpected=0x%X 
Line 3664: DRV_IS_TX - SCIBLKTOUTINTR
Line 3670: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3672: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3683: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3684: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 3696: DRV_IS_TX - SCICARDOUTINTR
Line 3708: DRV_IS_TX - SCICARDDNINTR
Line 3723: DRV_IS_TX - Overrun Error
Line 3738: Abnormal INTR = 0x%X in the DRV_IS_TX
Line 3790: RxParityCount = 0x%X
Line 3797: RxParityCount_USIM2 = 10....Cold reset
Line 3805: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3806: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 3823: DRV_IS_RX - Received Byte(0x60)
Line 3833: DRV_IS_RX - Received 0x60 %d times, USIM_NULLTIMEOUT_OCCURED occured
Line 3848: DRV_IS_RX - Receive Null byte(0x60)
Line 3863: DRV_IS_RX - Error!! pData->NoOfRxBytes = 0x%X, RxCount = 0x%X, pData->NoOfBytesExpected = 0x%X, RxByte = 0x%X
Line 3870: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_RX
Line 3897: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 3901: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 3913: DRV_IS_RX - pData->NoOfBytesExpected =0x%X , pData->NoOfRxBytes =0x%X
Line 3914: Call drv_USIMSetRxTide
Line 3931: DRV_IS_RX - SCICHTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3932: ITIP = 0x%X
Line 3933: NoOfRx=0x%X, NoOfExpected=0x%X, RxBuff[0]=0x%X, RxBuff[1]=0x%X, CmdExchType=0x%X
Line 3954: DRV_IS_RX - SCIBLKTOUTINTR
Line 3957: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3959: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3970: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3971: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 3983: DRV_IS_RX - SCICARDOUTINTR
Line 3995: DRV_IS_RX - SCICARDDNINTR
Line 4010: DRV_IS_RX - Overrun Error
Line 4025: Abnormal INTR = 0x%X in the DRV_IS_RX
Line 4050: Abnormal INTR = 0x%X in the DRV_IS_UNKNOWN
Line 4051: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4060: Disable abnormal interrupt and request cold reset !!!
Line 4061: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4065: drv_UsimHISR_EventHandler: pData is NULL for event[%d], just return
Line 4083: Abnormal INTR = 0x%X in the DRV_IS_IDLE
Line 4113: pData == NULL.. restore pData from pStoreDeviceBlk in drv_Usim2HISR_EventHandler
Line 4121: drv_Usim2HISR_EventHandler: pData is NULL for event[%d], just return
Line 4190: drv_Usim2HISR_EventHandler ************** ERROR OCCURED **************
Line 4201: UsimRemoveDetectIntr is TRUE, Block response2
Line 4241: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4242: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4252: drv_Usim2HISR_EventHandler - USIM_DRV_CARD_REJECTED
Line 4263: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4264: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4282: drv_Usim2HISR_EventHandler - USIM_DRV_CARD_NOT_FOUND
Line 4289: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4290: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4313: drv_Usim2HISR_EventHandler - USIM_CHTIMEOUT_OCCURED
Line 4321: UsimRemoveDetectIntr is TRUE, Block response2
Line 4342: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4343: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4365: drv_Usim2HISR_EventHandler - UICC_RXTIMEOUT_OCCURED
Line 4393: drv_Usim2HISR_EventHandler - USIM_NORESPONSE_OCCURED
Line 4399: ERROR DeviceId == 0x0
Line 4406: UsimRemoveDetectIntr is TRUE, Block response2
Line 4424: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4425: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4451: drv_Usim2HISR_EventHandler - USIM_UNKNOWN_OCCURED
Line 4460: UsimRemoveDetectIntr is TRUE, Block response2
Line 4478: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4479: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4507: drv_Usim2HISR_EventHandler - USIM_NULLTIMEOUT_OCCURED
Line 4515: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4516: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4543: drv_Usim2HISR_EventHandler - USIM_PPSTIMEOUT_OCCURED
Line 4549: ERROR DeviceId == 0x0
Line 4555: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4556: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4582: drv_Usim2HISR_EventHandler - USIM_DRV_CARD_REMOVED
Line 4593: drv_Usim2Status...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4594: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4702: UsimRemoveDetectIntr is TRUE, Block response2
Line 4704: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4718: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4738: End of USIM SocketRequest ]]
Line 4745: UsimRemoveDetectIntr is TRUE, Block response2
Line 4747: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4773: End of USIM SocketRequest ]]
Line 4785: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 4805: End of USIM SocketRequest ]]
Line 4813: drv_UsimHISR_EventHandler - USIM_DRV_HISR_EVENT_NULL
Line 4847: PS Service Request %x
Line 4878: PS Service Release %x
Line 4902: Inside drv_Usim2Activate
Line 4913: drv_UsimActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 4926: Leaving drv_Usim2Activate
Line 4958: Inside drv_Usim2DeActivate
Line 4965: drv_Usim2DeActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 4966: Rxbuffer = 0x%X,ITIP = 0x%X
Line 5005: DeactivateStatus = FALSE !!! one more try - drv_Usim2DeActivate
Line 5010: DeactivateStatus = FALSE !!! Fail just change status - drv_Usim2DeActivate
Line 5019: Leaving drv_Usim2DeActivate
Line 5043: Inside drv_Usim2WarmReset
Line 5055: Leaving drv_Usim2WarmReset
Line 5099: drv_Usim2SocketCreate - No Task ID
Line 5105: drv_Usim2SocketCreate - Mailbox cration failed
Line 5167: Inside pal_drv_Usim2DrvConstructor
Line 5212: Leaving pal_drv_Usim2DrvConstructor
Line 5269:  << HISR context so return TRUE >>
Line 5270: HwEO = 0x%X
Line 5271: DeviceBlk = 0x%X
Line 5278: pal_EDrvHweoSocketCreation
Line 5307: +++ pal_drv_Usim2DrvRequest - %d !!! +++
Line 5332: +++ pal_drv_Usim2DrvRequest - UICC_ACTIVATION !!! +++
Line 5337: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5338: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5420: UICC_DEACTIVATION... Clock start Failed - One more try
Line 5425: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5432: UICC_DEACTIVATION... Clock start Failed !!
Line 5434: bClockStopped_USIM2 = FALSE
Line 5440: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5444: Usim Clock start !!
Line 5451: Usim Clock start !!
Line 5463:  *** UICC_DEACTIVATION
Line 5492: Clock Stop mode enabled....Clock Start !!!
Line 5512: UICC_TX_RX... Clock start Failed - One more try
Line 5517: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5518: ITIP = 0x%X
Line 5525: UICC_TX_RX... Clock start Failed !!
Line 5527: bClockStopped_USIM2 = FALSE
Line 5533: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5534: ITIP = 0x%X
Line 5538: Usim Clock start !!
Line 5545: Usim Clock start !!
Line 5553: Inside UICC_WARM_RESET
Line 5574: +++ pal_drv_Usim2DrvRequest - DRV_IS_UNKNOWN !!! +++
Line 5579: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5580: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5611: Clock Stop mode enabled....Clock Start !!!
Line 5631: UICC_TX_RX... Clock start Failed - One more try
Line 5636: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5637: ITIP = 0x%X
Line 5644: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5645: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5647: bClockStopped_USIM2 = FALSE
Line 5653: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5685: Usim Clock started !!
Line 5689: [[ Start of USIM SocketRequest
Line 5707: +++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
Line 5712: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5713: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5745: Usim Clock is stopped => Try Clock Start !!!
Line 5765: UICC_TX_RX... Clock start Failed - One more try
Line 5770: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5778: UICC_TX_RX... Clock start Failed !! request cold reset !!
Line 5780: bClockStopped_USIM2 = FALSE
Line 5786: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5793: drv_Usim2HwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5794: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5823: Usim Clock started !!
Line 5847:  *** UICC_IDLE
Line 5857: Inside pal_drv_Usim2DrvRequest -- default case
