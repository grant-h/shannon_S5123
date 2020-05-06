Line 247: NEW Transmission for SI MAX Retransmission: HARQ Process ID %d
Line 251: NON SRL HARQ ACK but Previous tranmssion was SI. SI Retransmission!!![HARQ Process ID %d]
Line 259: Unknown Case in Non SRL HARQ Indication 
Line 278: SI Transmission Fail For NACK
Line 281: Unknown Retransmission Count in HARQ Indication Decision InSgHarqInfo->CurrentTxNumber[InHarqProcessId] %d InSgHarqInfo->MaxNoOfRetrans[InHarqProcessId] %d
Line 283: NEW Transmission for MAX Retransmission: HARQ Process ID %d
Line 293: Transmission occurred in Previous RTT, but No HARQ info in this TTI, Assume the NACK Case!!!
Line 332: NEW Transmission: HARQ Process ID: %d, Happy: %d, ETFCI: %d
Line 349: Resetting RSN to 0 after Pause Resume for HARQ process %d
Line 378: Retransmission[%d]: Current TX NUM: %d, RSN: %d, Happy: %d, ETFCI: %d
Line 393: Control only transmission: HARQ Process ID :%d
Line 399: Unknown Case in Control only transmission
Line 421: Unknown Case whether initial transmission or retransmission
Line 535: <CPC> ReTrans or SIonly. ShortPreamble. AirCFN: %d, AirSubFr: %d
Line 598: SI transmission decision ind
Line 608: SI retransmission for Serving cell NACK
Line 614: SI retransmission for HARQ fail
Line 625: SI transmission for Pause Resume
Line 661: NO TRANSMISSION[%d]: TEBS is Zero
Line 717: SI transmission for Serving cell change
Line 728: SIG timer Start, but No SI transmission
Line 740: SI transmission because SIG timer expired
Line 766: SI transmission: SG and TEBS not Zero and current HARQ Process inactive but other condition is satisfied
Line 770: SI Transmission: SG and TEBS is not Zero but current HARQ Process inactive
Line 830: SI transmission because EDCH Configuration change and EDCH buffer is not zero
Line 845: SI TRANSMISSION: All HARQ inactive or SG zero but TEBS becomes larger than zero
Line 864: SI transmission because SING timer expired or start
Line 870: SING timer Restart
Line 888: [NO TRANSMISSION [%d]] SG value: %d, Total EDCH Buffer: %d, IsAnyActiveHarqThisTti: %d, OneHarqActiveAtLeast: %d, TotalNonScheduledPayload: %d
Line 947: [Warning] Limitation of PduNum: 63 <-- %d
Line 952: <UM Buffer Occupancy> DA:%d, NoOfPdus:%d
Line 957: <AM Buffer Occupancy> RbId:%i, DA:%d, RlcPduSize:%d
Line 1080: Unknown Grant Type in Timer_SING TokenCancel
Line 1211: WARNING: *EdchList %d + (LogCh %d ?UMAC_MAX_RB:0) is out of bounds
Line 1252: SI Transmission for Higher priority data incoming
Line 1346: Unknown Case in Timer_HYSTERESIS TokenCancel
Line 1358: CurrentTxNumber %d PrevTransmitData[%d] %d MaxReTransValue %d
Line 1371: Unknown Case in Timer_RTX TokenCancel
Line 1384: Unknown Case in Timer_RTX TokenCancel
Line 1396:  Received Ack HarqId %d 
Line 1406: Unknown Case in Timer_RTX TokenCancel
Line 1418: Unknown Case in Timer_RTX TokenCancel
Line 1441: gTimerRtxStatus %d MaxNoOfRetrans %d
Line 1454: Unknown Case in Timer_RTX TokenCancel
Line 1461:  Timer_RTX  has already stopped
Line 1472: SI Transmission Fail For NACK and MaxNoOfRetransSI %d
Line 1480: Unknown Case in Timer_RTX TokenCancel
Line 1487:  Timer_RTX  has already stopped
Line 1499: Received NACK 
Line 1507: Previous Tranmission SI Only
Line 1520: Unknown Case in Timer_RTX TokenCancel
Line 1529: RTxSI Timer Expired
Line 1544: Retransmission : TDM or RDI not valid
Line 1552: Grant Not Available; SI case
Line 1558: RtxtimerValue %d 
Line 1562: Data+SI and TimerRtxStatus[%d] %d 
Line 1566: RTx Timer Expired
Line 1573: Unknown Case in Timer_RTX TokenCancel
Line 1589: MaxEtfcIndexThisTTI=%d and Previous ETFCI=%d for HarqId %d
Line 1606: Unknown Case in Timer_RTX TokenCancel
Line 1610: RTx Timer Running, therefore Started with value =%d 
Line 1616: RTx Timer Inactive, therefore Started with value =%d 
Line 1627: RTx Timer Inactive, therefore Started with value =%d 
Line 1630: Grant not sufficient for Retransmission or TDM not valid
Line 1639: RTx Timer Inactive, therefore Started with value =%d 
Line 1643: Grant Not Available; Data+SI case
Line 1650: Transmission occurred in Previou RTT, but No HARQ info in this TTI, Assume the NACK Case!!!
Line 1697: NEW Transmission: HARQ Process ID: %d,  ETFCI: %d
Line 1729: Retransmission[%d]: Current TX NUM: %d, RSN: %d, ETFCI: %d HarqPowerOffset %d 
Line 1735: Control only transmission: HARQ Process ID :%d
Line 1739: Unknown Case whether initial transmission or retransmission
Line 1852: SIValue 0x%x
Line 1855: <SI Value> SNPLValue: %d, UPHValue:%d, SIValue:0x%x, Total PDU buffer:%d, Total SDU buffer:%d 
Line 1907: <TEBS Increment by Register> Real TEBS Value:%d, TEBS Increment value by register:%d
Line 1918: <SI Value> HLIDValue:%d, HLBSIndex:%d, TEBSIndex:%d, UPHValue:%d
Line 1920: <SI Value> SNPLValue:%d, SIValue:0x%x, Total PDU buffer:%d, Total SDU buffer:%d,
Line 1948: In tmac_e_ControlOnlyTransmission : EtfcInfo->SiTransmission=%d 
Line 1969: In tmac_e_ControlOnlyTransmission and SI trans : InHarqProcessId=%d, SIValue=%d 
Line 1981: Unknown Case in Control only transmission
Line 2024: TotalEdchBuffer=%d 
Line 2043: SI trigger due to change in working frequency or Serving cell change
Line 2056: Unknown Case in Timer_T_NSI TokenCancel
Line 2089: Unknown Case in Timer_T-SI TokenCancel
Line 2104:  Token delayed from TPHY, No Transmission
Line 2113: gTimerTNSIStatus %d 
Line 2119: SI trigger due to change in working frequency or Serving cell change
Line 2126: Unknown Case in Timer_T_SI TokenCancel
Line 2154: Unknown Case in Timer_T-NSI TokenCancel
Line 2167:  Token delayed from TPHY, No Transmission
Line 2176:  gTimerTEEWStatus=%d, gTimerTWAITStatus=%d, InitialTransmission=%d
Line 2182: NO TRANSMISSION: NO Grants and start EEW timer 
Line 2190: TIMER_TWAIT_EXPIRED
Line 2214: TIMER_TWAIT_EXPIRED
Line 2229:  Loopback %d gTimerTSIStatus %d
Line 2264: gTimerTSIStatus %d
Line 2268: gTimerTSIStatus %d
Line 2283: NO TRANSMISSION: E-PUCH not configured
Line 2323: In tmac_e_SI_ERUCCH : TRUCCHValue=%d, n_RUCCHValue=%d, Hysteresis_Timer=%d 
Line 2334: Unknown Case in Timer_T-RUCCH TokenCancel
Line 2337: TIMER_TRUCCH_RUNNING
Line 2348: Hysteresis Timer Inactive and therefore Started 
Line 2355:  TransmissionCounter=%d 
Line 2373: E-RUCCH RACH FAILURE ,Cause[%d]!!!
Line 2385:  EdchStatus=%d,E_WaitingForConfirm=%d 
Line 2398:  E_PersistenceRetry=%d, E_EndFlag=%d 
Line 2406:  E_M=%d, Max_Transmission=%d 
Line 2415: WARNING: Given up on sending RACH data, discarded
Line 2436: WARNING: AscInfo is NULL
Line 2456:  SIValue = 0x%x,datareq_1 = 0x%x, datareq_2 = 0x%x  
Line 2474: Retry due to persistence check 
Line 2482: EndFlag is True 
Line 2489: Waiting for ACK
Line 2553: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 2638: POS ACK from U-PHY
Line 2644: NO ACK from U-PHY
Line 2662: Unknown Case in Timer_HYSTERESIS TokenCancel
Line 2843: WARNING: *EdchList + (LogCh?UMAC_MAX_RB:0) is out of bounds
Line 2873: [Warning] Limitation of PduNum: 63 <-- %d
Line 2881: <UM Buffer Occupancy> DA:%d, NoOfPdus:%d
Line 2885: <AM Buffer Occupancy> RbId:%i, DA:%d, RlcPduSize:%d
Line 2984: SI Transmission for Higher priority data incoming
