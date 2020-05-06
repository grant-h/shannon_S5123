Line 87: cmdId>=EThalMaxNrOfCmds
Line 97: TddArrayOfCmdHandlerInstances is NULL
Line 131: normalHdlr is NULL
Line 205: RSN=%d:thal_CNormalCmdHandler_reset online cmd[%d %d]
Line 219: RSN=%d:thal_CNormalCmdHandler_reset offline cmd[%d %d]
Line 233: RSN=%d:thal_CNormalCmdHandler_reset ISR waiting cmd[%d %d]
Line 318: cmd is NULL in  thal_CNormalCmdHandler_extractWaitingCmd
Line 351: cmd is NULL in  thal_CNormalCmdHandler_extractOfflineWaitingCmd
Line 440: thal_CNormalCmdHandler_areRunConditionsMet cmd[%d %d]: HWSignalSynch type should not wait - they are shcheduled bu TPHY not to wait: 
Line 448: RSN=%d:thal_CNormalCmdHandler_areRunConditionsMet[%d,%d] hwActive
Line 455: RSN=%d:thal_CNormalCmdHandler_areRunConditionsMet[%d,%d] synchType=%d - uarfcnCheck did not match
Line 538: thal_CNormalCmdHandler_cmdStatusNotification: cmd [%d %d] Impossible status=%d
Line 547: thal_CNormalCmdHandler_cmdStatuslNotification: cmd [%d %d] status=Error
Line 573: thal_CNormalCmdHandler_cmdStatusNotification[%d %d] cmd to wait should not end up in this function
Line 666: thal_CNormalCmdHandler_cmdStatusNotification: cmd [%d %d] Unexpected status=%d
Line 696: extractFLAG == TRUE (runCmdWaitingForDlUarfcn)
Line 714: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] failed to be extracted cmd==0
Line 721: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] however when extracted waitingCmd[%d %d] -> diferent instanceId
Line 727: RSN=%d:thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn[%d,%d], uarfcn=%d
Line 730: thal_CCmdHandler_runCmd failed
Line 756: thal_CCmdHandler_runCmdWaitingForDlUarfcn[%d %d]: isISRTriggeredResponse cmd completed as soon as it has been run- must be completed in poll function
Line 767: thal_CCmdHandler_runCmdWaitingForDlUarfcn[%d %d]: unexpected status=%d to pass to thal_CNormalCmdHandler_cmdStatusNotification
Line 811: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] failed to be extracted cmd==0
Line 818: thal_CNormalCmdHandler_runCmdWaitingForDlUarfcn: initially read waitingCmd[%d %d] nowever when extracted waitingCmd[%d %d] -> diferent instanceId
Line 822: RSN=%d:thal_CNormalCmdHandler_runCmdWaitingForOfflineUarfcn[%d ,%d,%d]: offlineUarfcn=%d
Line 826: thal_CCmdHandler_runCmd failed
Line 850: thal_CCmdHandler_runCmdWaitingForOfflineUarfcn[%d %d]: isISRTriggeredResponse cmd completed as soon as it has been run- must be completed in poll function
Line 861: thal_CCmdHandler_runCmdWaitingForOfflineUarfcn[%d %d]: unexpected status=%d to pass to thal_CNormalCmdHandler_cmdStatusNotification
Line 893: RSN=%d:addCmdToWaitForDlUarfcn[%d,%d,%d]
Line 941: RSN=%d:addCmdToWaitForOfflineUarfcn[%d,%d,%d]
Line 1002: RSN=%d:thal_CNormalCmdHandler_removeAppIdWaitingCmds[%d] from dlUarfcnBlockedCmdList uarfcn=%d appId=%d
Line 1029: RSN=%d:thal_CNormalCmdHandler_removeAppIdWaitingCmds[%d] from OfflineUarfcnBlockedCmdList uarfcn=%d appId=%d
Line 1056: RSN=%d:thal_CNormalCmdHandler_removeAppIdWaitingCmds[%d] from ISRWaitingCmdXList uarfcn=%d appId=%d
Line 1096: RSN=%d:removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d
Line 1104: thal_CNormalCmdHandler_removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d:anUarfcnCmdQueue read but not  
Line 1123: RSN=%d:removeNonCampingUarfcnWaitingCmds[%d] offlineUarfcn=%d
Line 1131: thal_CNormalCmdHandler_removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d:anUarfcnCmdQueue read but not  
Line 1150: RSN=%d:removeNonCampingUarfcnWaitingCmds[%d] ISRWaitingCmdXList uarfcn=%d
Line 1158: thal_CNormalCmdHandler_removeNonCampingUarfcnWaitingCmds[%d] uarfcn=%d:anUarfcnCmdQueue read but not  
Line 1205: RSN=%d:thal_CNormalCmdHandler_cleanAllCmds[%d] from offlineUarfcnBlockedCmdXList
Line 1223: RSN=%d:thal_CNormalCmdHandler_cleanAllCmds[%d] from ISRWaitingCmdXList
