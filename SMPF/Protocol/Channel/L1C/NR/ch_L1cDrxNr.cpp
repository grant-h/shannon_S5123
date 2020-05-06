Line 132: ##[NR_DRX] %s, DrxConfig(%d)
Line 156: ##[NR_DRX] %s, UeState(%d), PcchConfig(0x%x)
Line 183: ##[NR_DRX] %s, UeState(%d)
Line 230: ##[NR_DRX][WARNING] Skip %s:: DrxCondition(0x%x) modem_state(%d)
Line 239: ##[NR_DRX] %s:: CdrxAvailable[%d]
Line 250: ##[NR_DRX][WARNING] %s::Unexpected Rat
Line 282: ##[NR_TX] L1C_L1C_DRXCTRLR_TX_ONOFF_REQ_Handler:: TxOnType(%d), scell_idx(%d), bwp_idx(%d) EventState(%d)
Line 297: ##[NR_TX] TX_ONOFF_REQ_Handler:: TX_DONE
Line 320: ##[NR_TX] %s, Receive: DRX_CMD_IND from L2IFCTRLR
Line 324: ##[NR_CDRX] %s, Send: CDRX_CMD_IND Command to HAL
Line 335: ##[NR_CDRX] >> Fail to send CDRX_MAC_NR_CMD(%d)
Line 353: ##[NR_DRX] %s:: DrxCondition(0x%x)
Line 384: ##[NR_DRX] %s:: DiffRtgOffset(%d), IsDsdsResume(%d), as_state(%d)
Line 415: ##[NR_DRX] %s:: Result(%d (0:SUCCESS,1:FAILURE)
Line 439: ##[NR_DRX] %s, SrcCtrlr: %s, ReleaseListSize: %u
Line 453: ##[NR_DRX] DSDS Restore is done)
Line 476: ##[NR_DRX] %s, Receive: PATH_CONFIG_CNF
Line 531: ##[NR_DRX] L1C_L1C_EVENTSCHEDINFOCTRLR_EXCEPTION_IND_Handler - EventId: %u, ExceptionCause: %u tx_req(%d), drx_state(%d)
Line 636: ##[NR_DRX] L1C_L1C_IRATCFGCTRLR_RELEASE_ALL_REQ_Handler()
Line 660: ##[NR_DRX] RF TX is already off
Line 683: ##[NR_DRX] L1C_L1C_IRATCFGCTRLR_ALL_STOP_REQ_Handler()
Line 706: ##[NR_DRX] RF TX is already off
Line 730: ##[NR_DRX] %s, DrxType(%d)
Line 752: ##[NR_DRX] L1C_L1C_DRXCTRLR_DSDS_PAUSE_IND_Handler()
Line 775: ##[NR_DRX] L1C_L1C_DRXCTRLR_TX_PAUSE_CNF_Handler()
Line 796: ##[NR_DRX] L1C_L1C_DRXCTRLR_TX_RESUME_CNF_Handler()
Line 816: ##[NR_DRX] L1C_L1C_DRXCTRLR_SLEEP_CNF_Handler():: req_type(%d)
Line 1031: ##[NR_DRX] %s
Line 1055: ##[NR_DRX] %s
Line 1086: ##[NR_DRX] %s
Line 1105: ##[NR_DRX] %s
Line 1147: ##[NR_DRX] CheckSlowClkEstNeed:: Currtime[%d], PrevClockEstTime[%d], ElapsedTime[%d], SlowClkEstNeeded[%d] 
Line 1165: ##[NR_CDRX] %s, Send: DRX_CONFIG Command to HAL
Line 1183: ##[NR_DRX] Fail to Send DRX_CONFIG_NR_CMD
Line 1188: ##[NR_DRX] DRX_CONFIG_NR_CMD Active
Line 1203: ##[NR_DRX] Fail to Stop DRX_CONFIG_NR_CMD
Line 1208: ##[NR_DRX] DRX_CONFIG_NR_CMD Inactive
Line 1226: ##[NR_CDRX] %s: type(%d) 0:store, 1:restore
Line 1251: ##[NR_DRX] SendCellTimeRestoreCnf
Line 1273: ##[NR_DRX] %s:: Result(%d)
Line 1298: ##[NR_DRX] %s
Line 1329: ##[NR_TX] Tx SYS State: %d Tx Event: %d 
Line 1344: ##[NR_TX] MODEM TX Already OFF
Line 1353: ##[NR_TX] WARNING!! Unexpected TX PWR Event(%d) in OFF State
Line 1378: ##[NR_TX] MODEM TX Already ON
Line 1388: ##[NR_TX] WARNING!! Unexpected TX PWR Event(%d) in ON State
Line 1396: ##[NR_TX] WARNING: UNEXPECTED STATE
Line 1421: ##[NR_TX] HAL->DrxNr@SendingTxOnOffCmd:: scell_idx(%d) tx_bwp_idx(%d), on_off(%d)
Line 1425: ##[NR_TX] NR modem power off. skip SendingTxOnOffCmd.
Line 1447: ##[NR_TX] SendingTxOnOffCmd:: TxReqOnType(%d), scell_idx(%d), tx_bwp_idx(%d), on_off_type(%d)
Line 1486: ##[NR_TX] >> Fail to send TX_ON_CMD(%d)
Line 1515: ##[NR_TX] HAL->DrxNr@%s
Line 1568: ##[NR_DRX] %s: Status(0x%x, (BplmnSrch|SibDecoding|ModemState|SleepState|SlowClkEstCmd|RsmCondition|SleepTime|OOS|CdrxCfg))
Line 1603: ##[NR_DRX] %s: Abnormal DRX Condition Update. enable(%d)
Line 1606: ##[NR_DRX] %s: en(%d), state(0x%x), nextstate(0x%x, SIB|PAGING|PS|MEAS)
Line 1667: ##[NR_DRX][WARNING] %s: Unexpected PsSchedType(%d)
Line 1672: ##[NR_DRX] %s: type(%d), Sfn(%d), subFrame(%d)
Line 1709: ##[NR_DRX][WARNING] %s: Unexpected PagingSchedType(%d)
Line 1714: ##[NR_DRX] %s: type(%d), Sfn(%d), subFrame(%d)
Line 1774: ##[NR_BPLMN] SendBplmnResumeInd:: AvailTime(%dms)
Line 1793: ##[NR_DRX] %s: CdrxState[%d]
Line 1844: ##[NR_DRX] SendSleepReq:: req_type(%d), l1c_drx_ctrlr_state(%d)
Line 1890: ##[NR_DRX][NR_BPLMN] ProcSleepInd: (Skip BPLMN) AvailableTime(%d) is less than BplmnMarginTh(%d)
Line 1946: ##[NR_DRX] Start %s
Line 1970: ##[NR_DRX] Skip %s
Line 1992: ##[NR_DRX][WARNING] Fail to send SYSTEM_TIME_INFO_NR_CMD(%d)
Line 1997: ##[NR_DRX] %s:: SleepTime(%d) WakeupTime(%d) CurTime(%d)
Line 2024: ##[NR_DRX] %s:: type(%d) ueState(%d) SleepState(%d) sleepTime(%d) SleepAvailTimeUs(%d)
Line 2028: ##[NR_DRX] skip %s due to SleepState(%d) modem_state(%d)
Line 2053: ##[NR_DRX] ProcDrxConfirmInd:: skip PS event update. CdrxConfig(%d), sleepTime(%d), SleepAvailTimeUs(%d) SleepDisableRegiVal(%d)
Line 2080: ##[NR_DRX] ProcDrxConfirmInd:: skip Paging event update. RSM_PAGING state(%d), sleepTime(%d), SleepAvailTimeUs(%d),  SleepDisableRegiVal(%d)
Line 2107: ##[NR_DRX] WARNING: UNEXPECTED DRX TYPE
Line 2184: ##[NR_DRX] SendL2TxPauseReq()
Line 2207: ##[NR_DRX] SendL2TxResumeReq()
Line 2232: ##[NR_DRX] SendSleepCfgCmd()
Line 2247: ##[NR_DRX] Sending SLEEP_CONFIG_CMD is failed
Line 2268: ##[NR_DRX] SendSysParamChgCmd()
Line 2298: ##[NR_DRX] BWP:: CMD_RESULT is CMD_RET_FAIL.
Line 2302: ##[NR_DRX] BWP::  CMD_RESULT is CMD_RET_TIMEREXPIRED.
Line 2325: ##[NR_DRX] SendLcpuStorePauseCmd()
Line 2332: ##[NR_DRX] BWP:: CMD_RESULT is CMD_RET_FAIL.
Line 2336: ##[NR_DRX] BWP::  CMD_RESULT is CMD_RET_TIMEREXPIRED.
Line 2360: ##[NR_DRX] SendDisableNrIntrCmd()
Line 2368: ##[NR_DRX] Sending DISABLE_INTR_NR_CMD is failed
Line 2389: ##[NR_DRX] SleepConfigCmdCnfCb()
Line 2411: ##[NR_DRX] LcpuStorePhyCfgCb()
Line 2441: ##[NR_DRX] SysParamChgCb()
Line 2465: ##[NR_DRX] DisableIntrCmdCb()
Line 2470: [NR_DRX] skip to update ModemState Hold at ModemState Sleep(%d)
Line 2493: ##[NR_DRX] ProcRestorePcellCfg()
Line 2515: ##[AS] %s (%d)
Line 2525: >> Fail to send AS_EN_NR_CMD(%d)
Line 2542: ##[AS] %s, receive: AS_EN_NR_CMD Command to HAL
