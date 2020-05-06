Line 145: mm_DecodeMmcMobCmdToIratReqMsg: type(%d) srvcc(%d)
Line 147: IsLimitedService: %d
Line 259: mm_DecodeMmcMobCmdToIratReqMsg: invalid CASE (%d)
Line 264: mm_DecodeMmcMobCmdToIratReqMsg: NOT IMPLEMENTED CASE (%d)
Line 275: mm_DecodeMmcMobCmdToIratReqMsg: mm_MmcLteHedgeRatChangeCause = %d
Line 280: mm_SendMmcMobCmdToIratCnfMs: Result = %d
Line 283: Handover Done So delete the Handover Info received from MMC.
Line 317: Sending MMC Redirection  Result = %d
Line 321: Unable to Allocate memory.
Line 332: mm_SendRrPsHandoverReqMsg  HO  To -> %s
Line 343: handover_to_umts.umts_ho_container.length: %d
Line 406: Uldata  NSAPI 5= %d, NSAPI 6=%d
Line 437: Error!!! Unable to allocate memory 
Line 442: [MM] Given afcPdmValue = %d, mm_afcPdmValue = %d
Line 443: [MM] Given numOfCandidateCells = %d, mm_numOfCandidateCells = %d
Line 462: [MM] Given candidateCellInfo[%d].arfcn = 0x%x, bsic = 0x%x, frameNumber = 0x%x, Qb = 0x%x, net_frameNumber = 0x%x
Line 469: Error!!! Unable to allocate memory 
Line 495: 
Line 498: 
Line 500: 
Line 533: SRVCC call was requested but L2U_PS only happened. MM will inform SRVCC failure to CC. 
Line 557: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 562: PSHandover+CSFB : Aquire Grant, %d 
Line 566: CS Procedure is DSDS CS CALL Already
Line 600: SRVCC call success. We will do LAU once CS transaction is over in NMO II
Line 638: QRB is triggered about L2U SRVCC HO
Line 677: QRB is triggered about L2U SRVCC HO
Line 693: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 698: PSHandover+CSFB : Aquire Grant, %d 
Line 702: CS Procedure is DSDS CS CALL Already
Line 736: PSHO+CSFB, Call Status is TRUE, Take CS CALL Grant Locally, since EMM/GMC has aquired the grant already
Line 741: PSHandover+CSFB : Aquire Grant, %d 
Line 745: CS Procedure is DSDS CS CALL Already
Line 789: Set MMC Handover to 2G3G Info
Line 794: ======= SRVCC HO 2G3G ncells information from LTE =======
Line 795: Number of neighbor cells = %d
Line 811: UARFCN = 0x%x, CELL_ID = 0x%x, Time offeset = 0x%x 
Line 828: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 855: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 882: Error !!!! Unable to  allocate memroy :mm_SetMmcHandover2G3GInfo
Line 890: Copying L2G CCO info: 
Line 906: ReSet MMC Handover to 2G3G Info
Line 985: In  mm_DecodeMmcLteTo2G3GUeCapaReqMsg, RAT : 0x%x
Line 993: Requesting GERAN_CS : No action (TBD)
Line 998: Requesting GERAN_PS : No action (TBD)
Line 1015: mm_SendUrrcMmInterRatHandoverInfoReqMsg....
Line 1047: mm_DecodeUrrcMmInterRatHandoverInfoCnfMsg....
Line 1048: targetRatInfo = %d
Line 1049: HandoverInfoLength = %d
Line 1054: mm_DecodeUrrcMmInterRatHandoverInfoCnfMsg: requested for HEDGE RAU procedures...
Line 1093: mm_DecodeUrrcMmUeCapaIndMsg.... 
Line 1113: mm_SendMmc2G3GToLteUeCapaReq.... 
Line 1142: mm_DecodeMmc2G3GToLteUeCapaCnfMsg...., Target RAT : %d
Line 1189: mm_SendUrrcMmUeCapaRspMsg.... 
Line 1231: 
Line 1247: Entered Funtion mm_DecodeUrrcMmHandoverFromUtranIndMsg... Target RAT : %d
Line 1254: Power off detach is pending. Discarding HO
Line 1262: HO received during power off!! Sending SUCCESS to RRC.
Line 1272: Call is on, so discarding HO request
Line 1304: Wrong Target RAT
Line 1366: Warning : Temporarily implemented
Line 1414: Warning : Unable to allocate memory for String-S and Kasme
Line 1431: Sending MmcHoToLteReqMsg (Encoding length : %d)
Line 1462: Discarding mm_DecodeHoToLteCnfMsg as no context exists.
Line 1467: Entered Funtion mm_DecodeHoToLteCnfMsg... Type : %d, Result : %d
Line 1575: Error!!! Unable to allocate Memory mm_SetUtraninfoData....
Line 1590: Entered Funtion mm_SendMmcLteTo2G3GUeCapaCnfMsg... TargetRat : %d
Line 1641: Warning : TargetRat is not proper...
