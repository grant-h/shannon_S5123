Line 233: Set USIM wakelock = %d
Line 267: ##Error Expected < Received in drv_USIMSetRxTide
Line 268: Expected=0x%X, Received=0x%X
Line 281: pal_DrvSimClockStopSet...no clock stopping
Line 288: hw_UsimIO.iSCICR0 = 0x%X,hw_UsimIO.iSCICR1 = 0x%X
Line 327: pal_DrvSimClockStopSet... Clock stop Failed - One more try
Line 333: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 341: pal_DrvSimClockStopSet... Clock stop Failed !!
Line 347: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 357: Clock Stop mode enabled....Clock Stop !!!
Line 362: Already Cock stopped.skip..pal_DrvSimClockStopSet
Line 369: *** USIM retention at pal_DrvSimClockStopSet
Line 448: Usim Clock fRef: %d, SCICLKICC: %d, f: %d
Line 533: << DUAL SIM SOCKET DEVICE >>
Line 537: << SINGLE SIM SOCKET DEVICE >>
Line 542: << ATR WWT Default = %d etu >>
Line 564: << hw_UsimIO.iSCIAUXCR = 0x%X >>
Line 596: Disable Internal pull-up of SIM0 DATA_IO
Line 600: Can't process NULL handle: SIM0_DATA(%x)
Line 609: hw_Usim0DataIoDisable - uUsim0BackupPullup: %d
Line 617: Enable Internal pull-up of SIM0 DATA_IO
Line 621: Can't process NULL handle: SIM0_DATA(%x)
Line 626: hw_Usim0DataIoEnable - uUsim0BackupPullup: %d
Line 717: Can't process NULL handle: SIM0_CLK(%x), SIM0_DATA(%x), SIM0_RST(%x)
Line 749: Can't process NULL handle: SIM0_CLK(%x), SIM0_DATA(%x), SIM0_RST(%x)
Line 761: Enter drv_UsimHwUsim0Backup
Line 769: Exit drv_UsimHwUsim0Backup
Line 774: Enter drv_UsimHwUsim0Restore
Line 831: Exit drv_UsimHwUsim0Restore
Line 837: Enter drv_UsimReadyRetention
Line 841: Exit drv_UsimReadyRetention
Line 850: Enter drv_UsimStartRetention
Line 868: Exit drv_UsimStartRetention
Line 1046: Can't process NULL handle: SIM_DET
Line 1064: <<< Use GPIO %s invention
Line 1080: Can't process NULL handle: SIM_DET
Line 1106: detectLevel = %d
Line 1124: --- UsimDetectCount is over 0x10000 --- 
Line 1130: <<< SIM CARD INSERT Detected!! >>>
Line 1141: <<< SIM CARD REMOVED Detected!! >>>
Line 1166: <<< UsimDetectNoti interrupt enable >>>
Line 1212: Send TxRx timeout to Appl. for recovery SIM1
Line 1248:  *** FORCED RETURN SIM REQUEST *** 
Line 1479: <<< SIM CARD inserted !!! >>>
Line 1492: <<< usim_PalHandleSimInsertInd(SINGLE_USIM_TRAY) >>>
Line 1501: <<< SIM CARD remove interrupt enable >>>
Line 1505: <<< Detect Ignore...>>>
Line 1514: <<< SIM CARD insert interrupt re-enable >>>
Line 1525: <<< Detect=low Ignore...>>>
Line 1535: <<< SIM CARD remove interrupt re-enable >>>
Line 1537: UsimRemoveDetectIntr = FALSE
Line 1556: <<< SIM CARD removed count %d >>>
Line 1570: <<< SIM CARD removed !!! >>>
Line 1606: <<< usim_PalHandleSimRemoveInd(SINGLE_USIM_TRAY) >>>
Line 1616: <<< SIM CARD insert interrupt enable >>>
Line 1620: <<< CheckDetectIntrCount is abnormal %d >>>
Line 1708: ** Parity error at TS byte
Line 1723: == USIM_ATR_INVERSE_CONV == 
Line 1740: Receive 0x3B twice..skip
Line 1753: ATR Parity error ...UsimRxReceivedBytes = 0x%X, RxByte = 0x%X 
Line 1815: Extra bytes received during ATR ...UsimRxReceivedBytes = 0x%X ...UsimRxExpectedBytes = 0x%X
Line 1825: Number of bytes received >= USIM_DRV_MAX_ATR ...UsimRxReceivedBytes = 0x%X
Line 1851: External request to change WWT after sleep
Line 1857: External request to change WWT
Line 1869: Current WWT value = %d etu
Line 1898: Di = %d, WI = %d, Changed WWT value = %d etu
Line 1943: Calculate PPS : Fi = %d, Di = %d,FDratio = %d
Line 1980: UsimDriverState != DRV_IS_PPS
Line 1981: UsimDriverState = 0x%X
Line 2009: drv_UsimDecodeAtr - ATR rejected
Line 2114: TC1...GUARDTIME ADDED = %d
Line 2132: TD(1) Protocol= %d
Line 2165: ProcessATR...ATR_T0_TA3 = 0x%X
Line 2168: ** UsimClockStopState = 0x%X
Line 2199: << PPS = 0x%X >>
Line 2255: ProcessATR...usePPS = FALSE
Line 2262: >>> Change F/D = %d
Line 2268: >>> Invalid TA1 value.. no Change speed
Line 2313: The TX FIFO is not empty ...The value of TXCount is 0x%X
Line 2319: The RX FIFO is not empty ...The value of RxCount is 0x%X
Line 2357: UsimHandlePPSData... RxCount=%d
Line 2374: UsimHandlePPSData... Receive Parity error
Line 2380: Receive PPS response
Line 2388: Receive PPS[%d] = 0x%X
Line 2394: UseDefaultPPS == TRUE
Line 2410: Receive PPS[%d] = 0x%X
Line 2423: >>> PPS rejected from CARD. using default speed
Line 2432: >>> Change F/D = %d
Line 2438: >>> Invalid TA1 value=0x%X ...no Change speed
Line 2473: For receive remained PPS Data..drv_USIMSetRxTide = %d
Line 2507: drv_UsimTxRx..pData=null skip
Line 2519: drv_UsimTxRx..DRV_IS_NO_SIM
Line 2527: drv_UsimTxRx..DRV_IS_WAIT_FOR_ATR
Line 2535: drv_UsimTxRx - DRV_IS_TX_RX
Line 2543: drv_UsimTxRx - DRV_IS_WAIT_FOR_CMD
Line 2552: drv_UsimTxRx - UICC_EXCH_TYPE2..NoOfBytesExpected++ = 0x%X
Line 2557: drv_UsimTxRx.. NoOfBytesExpected = 0x%X
Line 2576: drv_UsimTxRx - The TX FIFO is not empty(TxCount = 0x%X) -- flush
Line 2583: drv_UsimTxRx - The RX FIFO is not empty(RxCount = 0x%X) -- flush
Line 2619: drv_UsimTxRx.. Tx Header => 0x%X, 0x%X, 0x%X, 0x%X, 0x%X
Line 2624: drv_UsimTxRx.. unknown state:%x
Line 2652: !!! UICC_EXCH_TYPE_UNKNOWN !!!
Line 2677: RxParityCount = 0x%X
Line 2683: RxParityCount = 10....Cold reset
Line 2692: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2694: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 2714: Null byte is received...continue without save data
Line 2721: *** Received Null byte 100 times ***
Line 2738: UsimHandleRxData. NullProcByteCount = %d
Line 2754: pData->NoOfBytesExpected = 3, RxByte=0x%X
Line 2766: UsimHandleRxData..CmdExchType=1...Expect=2
Line 2793: UsimHandleRxData..CmdExchType=1...Expect=2
Line 2812: UsimHandleRxData. Error!! pData->NoOfRxBytes = 0x%X,RxByte =0x%X
Line 2859: UsimHandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 2891: UsimHandleRxData. RxParityCount = 0x%X
Line 2897: UsimHandleRxData. RxParityCount = 10....Cold reset
Line 2906: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 2908: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 2936: UsimHandleRxData. Receive Byte <= 0x%X
Line 2955: UsimHandleRxData. Receive ACK Byte : 0xFE
Line 2964: UsimHandleRxData. Receive Rx Byte : 0x60
Line 2972: +++ UsimHandleRxData. Receive Null byte 100 times
Line 2988: UsimHandleRxData. NullProcByteCount = %d
Line 3025: UsimHandleRxData. ## Error pData->NoOfBytesExpected < pData->NoOfRxBytes
Line 3048: !!!! Abnormal Exchange Type !!!!
Line 3053: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3054: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 3073: UsimCopyDataToTxFifo. NoOfTxBytes is too long: 0x%X
Line 3079: UsimCopyDataToTxFifo. UsimCopyDataToTxFifo. NoOfBytesTrasmitted is wrong: 0x%X
Line 3091: UsimCopyDataToTxFifo(Data <= 64) pData->NoOfTxBytes=0x%X
Line 3099: Tx Byte=0x%X
Line 3109: pData->NoOfBytesExpected=0x%X, pData->NoOfRxBytes=0x%X
Line 3125: UsimCopyDataToTxFifo(Data > 64) pData->NoOfTxBytes=0x%X
Line 3133: TxFifo=0x%X
Line 3144: NoOfBytesTrasmitted is wrong: 0x%X
Line 3196: DRV_IS_NO_SIM - SCICARDININTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3198: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3212: DRV_IS_NO_SIM - SCICARDOUTINTR
Line 3233: DRV_IS_NO_SIM - SCICARDUPINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3235: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3256: DRV_IS_NO_SIM - Deactivation completed !!
Line 3266: DRV_IS_NO_SIM - Overrun Error
Line 3280: DRV_IS_NO_SIM - SCIRXTIDEINTR
Line 3295: +++ RxTideCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 3306: Abnormal INTR = 0x%X in the DRV_IS_NO_SIM
Line 3307: RIS = 0x%X,MIS = 0x%X
Line 3329: DRV_IS_WAIT_FOR_ATR - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3331: ITIP = 0x%X
Line 3391: ATR Sequence not finished after 0x%X tries
Line 3419: DRV_IS_WAIT_FOR_ATR - SCIATRDTOUTINTR
Line 3442: DRV_IS_WAIT_FOR_ATR - SCIATRSTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3444: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3464: DRV_IS_WAIT_FOR_ATR - SCICARDOUTINTR
Line 3480: DRV_IS_WAIT_FOR_ATR - SCICARDDNINTR
Line 3505: DRV_IS_WAIT_FOR_ATR - SCICHTOUTINTR
Line 3507: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3528: DRV_IS_WAIT_FOR_ATR - Overrun Error
Line 3544: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_ATR
Line 3565: DRV_IS_PPS - SCITXTIDEINTR
Line 3571: DRV_IS_PPS - SCIRXTIDEINTR
Line 3586: DRV_IS_PPS - SCITXERRINTR
Line 3606: DRV_IS_PPS - SCICHTOUTINTR
Line 3608: NoOfRxBytes=%d,NoOfBytesExpected=%d
Line 3637: DRV_IS_PPS - SCIBLKTOUTINTR
Line 3643: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3645: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3657: PPS...CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3659: Rxbuffer = 0x%X, ITIP = 0x%X
Line 3673: DRV_IS_PPS - Overrun Error
Line 3689: Abnormal INTR = 0x%X in the DRV_IS_PPS
Line 3711: DRV_IS_WAIT_FOR_CMD - SCIRXTIDEINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3713: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3721: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_WAIT_FOR_CMD
Line 3733: +++ AbnormalReceiveCount > 10 , it maybe Card Damaged!!..go to Unknown state
Line 3746: DRV_IS_WAIT_FOR_CMD - SCIRTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3748: Rxbuffer = 0x%X,ITIP = 0x%X
Line 3758: ***flush Rx buffer SCIRTOUTINTR in the DRV_IS_WAIT_FOR_CMD
Line 3766: DRV_IS_WAIT_FOR_CMD - SCITXERRINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3768: ITIP = 0x%X
Line 3779: ###flush Tx buffer SCITXERRINTR in the DRV_IS_WAIT_FOR_CMD
Line 3785: DRV_IS_WAIT_FOR_CMD - Overrun Error
Line 3800: DRV_IS_WAIT_FOR_CMD - Abnormal INTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 3801: Rxbuffer = 0x%X,ITIP = 0x%X,RxCount = 0x%X
Line 3806: Abnormal INTR = 0x%X in the DRV_IS_WAIT_FOR_CMD
Line 3826: DRV_IS_TX_RX - SCITXTIDEINTR
Line 3832: DRV_IS_TX_RX - SCIRXTIDEINTR
Line 3844: DRV_IS_TX_RX - SCITXERRINTR
Line 3867: DRV_IS_TX_RX - SCICHTOUTINTR
Line 3870: NoOfRx=0x%X,NoOfExpected=0x%X,RxBuff[0]=0x%X,RxBuff[1]=0x%X,IsIdleState=0x%X
Line 3872: pData->NoOfBytesTrasmitted = 0x%X
Line 3894: DRV_IS_TX_RX - SCIBLKTOUTINTR
Line 3901: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 3903: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 3915: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 3917: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 3931: DRV_IS_TX_RX - SCICARDOUTINTR
Line 3944: DRV_IS_TX_RX - SCICARDDNINTR
Line 3961: DRV_IS_TX_RX - Overrun Error
Line 3978: Abnormal INTR = 0x%X in the DRV_IS_TX_RX
Line 4002: DRV_IS_TX - SCITXTIDEINTR
Line 4011: DRV_IS_TX - SCITXERRINTR
Line 4033: DRV_IS_TX - SCICHTOUTINTR
Line 4036: NoOfRxBytes=0x%X,NoOfBytesExpected=0x%X 
Line 4057: DRV_IS_TX - SCIBLKTOUTINTR
Line 4064: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 4066: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 4078: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4080: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 4093: DRV_IS_TX - SCICARDOUTINTR
Line 4107: DRV_IS_TX - SCICARDDNINTR
Line 4124: DRV_IS_TX - Overrun Error
Line 4140: Abnormal INTR = 0x%X in the DRV_IS_TX
Line 4192: RxParityCount = 0x%X
Line 4200: RxParityCount = 10....Cold reset
Line 4209: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4211: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X
Line 4230: DRV_IS_RX - Received Byte(0x60)
Line 4241: DRV_IS_RX - Received 0x60 %d times, USIM_NULLTIMEOUT_OCCURED occured
Line 4256: DRV_IS_RX - Receive Null byte(0x60)
Line 4272: DRV_IS_RX - Error!! pData->NoOfRxBytes = 0x%X, RxCount = 0x%X, pData->NoOfBytesExpected = 0x%X, RxByte = 0x%X
Line 4281: ***flush Rx buffer SCIRXTIDEINTR in the DRV_IS_RX
Line 4310: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 4315: DRV_IS_RX - pData->NoOfBytesExpected == pData->NoOfRxBytes == 0x%X
Line 4328: DRV_IS_RX - pData->NoOfBytesExpected =0x%X , pData->NoOfRxBytes =0x%X
Line 4330: Call drv_USIMSetRxTide
Line 4347: DRV_IS_RX - SCICHTOUTINTR..CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 4348: ITIP = 0x%X
Line 4349: NoOfRx=0x%X, NoOfExpected=0x%X, RxBuff[0]=0x%X, RxBuff[1]=0x%X, CmdExchType=0x%X
Line 4372: DRV_IS_RX - SCIBLKTOUTINTR
Line 4375: SCIBLKTIMEMS = 0x%X, SCIBLKTIMELS = 0x%X
Line 4377: PPSTA1 = 0x%X, PPSTC2 = 0x%X, iSCIBAUD = 0x%X, SCICLKICC = 0x%X, SCIVALUE = 0x%X
Line 4389: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4391: Rxbuffer = 0x%X, ITIP = 0x%X, pData->NoOfBytesTrasmitted = 0x%X,pData->NoOfRxBytes = 0x%X
Line 4405: DRV_IS_RX - SCICARDOUTINTR
Line 4418: DRV_IS_RX - SCICARDDNINTR
Line 4435: DRV_IS_RX - Overrun Error
Line 4451: Abnormal INTR = 0x%X in the DRV_IS_RX
Line 4477: Abnormal INTR = 0x%X in the DRV_IS_UNKNOWN
Line 4478: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4487: Disable abnormal interrupt and request cold reset !!!
Line 4488: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 4492: drv_UsimHISR_EventHandler: pData is NULL for event[%d], just return
Line 4511: Abnormal INTR = 0x%X in the DRV_IS_IDLE
Line 4542: pData == NULL.. restore pData from pStoreDeviceBlk in drv_UsimHISR_EventHandler
Line 4551: drv_UsimHISR_EventHandler: pData is NULL for event[%d], just return
Line 4621: drv_UsimHISR_EventHandler ************** ERROR OCCURED **************
Line 4632: UsimRemoveDetectIntr is TRUE, Block response
Line 4673: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4675: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4686: drv_UsimHISR_EventHandler - USIM_DRV_CARD_REJECTED
Line 4698: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4700: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4719: drv_UsimHISR_EventHandler - USIM_DRV_CARD_NOT_FOUND
Line 4727: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4729: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4752: drv_UsimHISR_EventHandler - USIM_CHTIMEOUT_OCCURED
Line 4760: UsimRemoveDetectIntr is TRUE, Block response
Line 4782: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4784: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4808: drv_UsimHISR_EventHandler - UICC_RXTIMEOUT_OCCURED
Line 4838: drv_UsimHISR_EventHandler - USIM_NORESPONSE_OCCURED
Line 4845: ERROR DeviceId == 0x0
Line 4852: UsimRemoveDetectIntr is TRUE, Block response
Line 4872: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4874: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4901: drv_UsimHISR_EventHandler - USIM_UNKNOWN_OCCURED
Line 4910: UsimRemoveDetectIntr is TRUE, Block response
Line 4929: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4930: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4957: drv_UsimHISR_EventHandler - USIM_NULLTIMEOUT_OCCURED
Line 4965: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 4966: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 4995: drv_UsimHISR_EventHandler - USIM_PPSTIMEOUT_OCCURED
Line 5002: ERROR DeviceId == 0x0
Line 5009: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5011: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5039: drv_UsimHISR_EventHandler - USIM_DRV_CARD_REMOVED
Line 5051: drv_UsimStatus...UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5053: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5156: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 5167: UsimRemoveDetectIntr is TRUE, Block response
Line 5169: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 5183: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 5203: End of USIM SocketRequest ]]
Line 5210: UsimRemoveDetectIntr is TRUE, Block response
Line 5212: Received Status bytes : SW1=0x%X, SW2=0x%X 
Line 5238: End of USIM SocketRequest ]]
Line 5264: End of USIM SocketRequest ]]
Line 5273: drv_UsimHISR_EventHandler - USIM_DRV_HISR_EVENT_NULL
Line 5308: PS Service Request %x
Line 5340: PS Service Release %x
Line 5365: Inside drv_UsimActivate
Line 5378: drv_UsimActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 5392: Leaving drv_UsimActivate
Line 5425: Inside drv_UsimDeActivate
Line 5433: drv_UsimDeActivate... CR0 = 0x%X,CR1 = 0x%X,CR2 = 0x%X,RIS = 0x%X,MIS = 0x%X,ITIP = 0x%X,FIFOSTATUS = 0x%X
Line 5435: Rxbuffer = 0x%X,ITIP = 0x%X
Line 5475: DeactivateStatus = FALSE !!! one more try - drv_UsimDeActivate
Line 5481: DeactivateStatus = FALSE !!! Fail just change status - drv_UsimDeActivate
Line 5491: Leaving drv_UsimDeActivate
Line 5516: Inside drv_UsimWarmReset
Line 5529: Leaving drv_UsimWarmReset
Line 5574: drv_UsimSocketCreate - No Task ID
Line 5581: drv_UsimSocketCreate - Mailbox cration failed
Line 5597: USIM_DetectTimeoutTimer is NULL
Line 5652: Inside pal_drv_UsimDrvConstructor
Line 5699: Leaving pal_drv_UsimDrvConstructor
Line 5756:  << HISR context so return TRUE >>
Line 5757: HwEO = 0x%X
Line 5758: DeviceBlk = 0x%X
Line 5765: pal_EDrvHweoSocketCreation
Line 5794: +++ pal_drv_UsimDrvRequest - %d !!! +++
Line 5819: +++ pal_drv_UsimDrvRequest - UICC_ACTIVATION !!! +++
Line 5824: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 5825: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 5906: UICC_DEACTIVATION... Clock start Failed - One more try
Line 5912: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5920: UICC_DEACTIVATION... Clock start Failed !!
Line 5924: bClockStopped = FALSE
Line 5929: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 5933: Usim Clock start !!
Line 5940: Usim Clock start !!
Line 5952:  *** UICC_DEACTIVATION
Line 5982: Clock Stop mode enabled....Clock Start !!!
Line 6003: UICC_TX_RX... Clock start Failed - One more try
Line 6009: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6011: ITIP = 0x%X
Line 6019: UICC_TX_RX... Clock start Failed !!
Line 6021: bClockStopped = FALSE
Line 6028: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6030: ITIP = 0x%X
Line 6034: Usim Clock start !!
Line 6041: Usim Clock start !!
Line 6051: Inside UICC_WARM_RESET
Line 6072: +++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
Line 6077: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 6078: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 6110: Clock Stop mode enabled....Clock Start !!!
Line 6131: UICC_TX_RX... Clock start Failed - One more try
Line 6137: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6139: ITIP = 0x%X
Line 6146: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 6147: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 6149: bClockStopped = FALSE
Line 6156: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6188: Usim Clock started !!
Line 6192: [[ Start of USIM SocketRequest
Line 6210: +++ pal_drv_UsimDrvRequest - DRV_IS_UNKNOWN !!! +++
Line 6215: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 6216: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 6248: Usim Clock is stopped => Try Clock Start !!!
Line 6268: UICC_TX_RX... Clock start Failed - One more try
Line 6273: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6281: UICC_TX_RX... Clock start Failed !! request cold reset !!
Line 6283: bClockStopped = FALSE
Line 6289: CR0 = 0x%X, CR1 = 0x%X, CR2 = 0x%X, RIS = 0x%X, MIS = 0x%X, ITIP = 0x%X, FIFOSTATUS = 0x%X
Line 6296: drv_UsimHwContext..UsimChtimeoutCount=0x%X,UsimNoResponseCount=0x%X,UsimOverrunCount=0x%X
Line 6297: UsimRxParityErrorCount=0x%X, UsimClockStopErrorCount=0x%X, UsimClockStartErrorCount=0x%X
Line 6326: Usim Clock started !!
Line 6350:  *** UICC_IDLE
Line 6363: Inside pal_drv_UsimDrvRequest -- default case
Line 6406: ESIM is selected
Line 6416: Physical SIM is selected
Line 6446: Cold reset eSIM
