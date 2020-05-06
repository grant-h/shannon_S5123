Line 378: No TGPS is running and not first gap so isGapScheduled = FALSE forcely
Line 378: No TGPS is running and not first gap so isGapScheduled = FALSE forcely
Line 382: set gapScheduled %d isFirstGap %d
Line 382: set gapScheduled %d isFirstGap %d
Line 389: set gapScheduled %d
Line 389: set gapScheduled %d
Line 404: No TGPS is running and not first gap so isGsmGapScheduled = FALSE forcely
Line 404: No TGPS is running and not first gap so isGsmGapScheduled = FALSE forcely
Line 408: set isGsmGapScheduled %d isFirstGap %d
Line 408: set isGsmGapScheduled %d isFirstGap %d
Line 415: set isGsmGapScheduled %d
Line 415: set isGsmGapScheduled %d
Line 424: get isGapScheduled = %d isGsmGapScheduled = %d
Line 424: get isGapScheduled = %d isGsmGapScheduled = %d
Line 431: get isGsmGapScheduled %d
Line 431: get isGsmGapScheduled %d
Line 534: Instance created for stackId %d
Line 534: Instance created for stackId %d
Line 691: uphy_CSchedulingManager_init set gapScheduled
Line 691: uphy_CSchedulingManager_init set gapScheduled
Line 851: uphy_CSchedulingManager_reinit set gapScheduled
Line 851: uphy_CSchedulingManager_reinit set gapScheduled
Line 889: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 889: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 893: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 893: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 923: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 923: uphy_CSchedulingManager_releaseMeasurementRequests: FA2_waiting -> FALSE
Line 927: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 927: uphy_CSchedulingManager_releaseMeasurementRequests: msmtMidServer(midIdentifier %d, mid %d) is NULL
Line 979: Unexpected Scheduler state - stateId=%d
Line 979: Unexpected Scheduler state - stateId=%d
Line 986: uphy_CSchedulingManager_updateStateInfo: currentStateId=%d, updateStateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs) stateStartAbsCtr %d stateEndAbsCtr %d
Line 986: uphy_CSchedulingManager_updateStateInfo: currentStateId=%d, updateStateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs) stateStartAbsCtr %d stateEndAbsCtr %d
Line 1078: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 1078: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 1122: message is NULL
Line 1132: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1132: Message received after Non UMTS rat mode req, so ignored transceiver = %d stackId = %d
Line 1158: SM: Ignore as RF is in Paused State %d 
Line 1183: CellSfnSfnInd or BchBackgroundConfigCnf or BchBackgroundReleaseCnf received but failed to find message->TransactId=%d
Line 1183: CellSfnSfnInd or BchBackgroundConfigCnf or BchBackgroundReleaseCnf received but failed to find message->TransactId=%d
Line 1327: Buffering command is ACTIVE. Reset command and its handler.
Line 1327: Buffering command is ACTIVE. Reset command and its handler.
Line 1334: Buffering command is = %x or active for other stack
Line 1334: Buffering command is = %x or active for other stack
Line 1343: buffering token cancelled
Line 1343: buffering token cancelled
Line 1363: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 1363: Reset RfRxUarfcnCmd: cmd_state should be idle but cmd_state=%d
Line 1384: RfSynth is ongoing on other stack. activeCmd = %d, dlUarfcnSettledToken = %d
Line 1384: RfSynth is ongoing on other stack. activeCmd = %d, dlUarfcnSettledToken = %d
Line 1555: processCampingListenArfcnTransition: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1555: processCampingListenArfcnTransition: currentStateId=%d, numOfCampingListenRequests=%d, urrcState=%d
Line 1580: schedulingManager_ptr->numOfCampingListenRequests>0 but getCampingDlUarfcn returns FALSE
Line 1580: schedulingManager_ptr->numOfCampingListenRequests>0 but getCampingDlUarfcn returns FALSE
Line 1591: another controller camping uarfn != of existing camping uarfcn
Line 1591: another controller camping uarfn != of existing camping uarfcn
Line 1595: Configuring BPLMN BCH - on inter freq lets not return
Line 1595: Configuring BPLMN BCH - on inter freq lets not return
Line 1615: processCampingListenArfcnTransition: stateId=%d: campingListenUarfcnTransitionMsgdeadlineInfo.msg == NULL
Line 1615: processCampingListenArfcnTransition: stateId=%d: campingListenUarfcnTransitionMsgdeadlineInfo.msg == NULL
Line 1623: Setting the frequency to BCH frequency - as camp freqquency during BPLMN
Line 1623: Setting the frequency to BCH frequency - as camp freqquency during BPLMN
Line 1675: processCampingControllerReleasedTransitionMsg: campingDlUarfcn not found. currentStateId=%d, MsgId=%d
Line 1675: processCampingControllerReleasedTransitionMsg: campingDlUarfcn not found. currentStateId=%d, MsgId=%d
Line 1685: bplmnStoredCampedDlUarfcn %d isBplmnBchConfigured %d isBplmnFreqRestore %d 
Line 1685: bplmnStoredCampedDlUarfcn %d isBplmnBchConfigured %d isBplmnFreqRestore %d 
Line 1690: Setting BACK schedulingManager_ptr->campingDlUarfcn(%d) to camping frequency before BCH release
Line 1690: Setting BACK schedulingManager_ptr->campingDlUarfcn(%d) to camping frequency before BCH release
Line 1719: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1719: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1860: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1860: processCampingControllerReleasedTransitionMsg: RSN=%d, Cfn=%d, currentStateId=%d, numOfCampingListenRequests=%d
Line 1880: processCampingControllerReleasedTransitionMsg:listeMsg transactId=%d does not much to release Msg transactId=%d
Line 1880: processCampingControllerReleasedTransitionMsg:listeMsg transactId=%d does not much to release Msg transactId=%d
Line 1890: processCampingControllerReleasedTransitionMsg:numOfCampingListenRequests=%d before schedulingManager_ptr release
Line 1890: processCampingControllerReleasedTransitionMsg:numOfCampingListenRequests=%d before schedulingManager_ptr release
Line 1913: cleanOutstandingNonCampingUarfcnReqs: clean All except UARFCN %d
Line 1913: cleanOutstandingNonCampingUarfcnReqs: clean All except UARFCN %d
Line 1945: Buffering command is ACTIVE. Reset command and its handler
Line 1945: Buffering command is ACTIVE. Reset command and its handler
Line 1952: Buffering command is = %x or active for other stack
Line 1952: Buffering command is = %x or active for other stack
Line 2147: uphy_CSchedulingManager_setIsFA2Waiting: FA2_waiting %d 
Line 2147: uphy_CSchedulingManager_setIsFA2Waiting: FA2_waiting %d 
Line 2153: uphy_CSchedulingManager_getIsFA2Waiting: FA2_waiting %d 
Line 2153: uphy_CSchedulingManager_getIsFA2Waiting: FA2_waiting %d 
Line 2161: uphy_CSchedulingManager_setIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2161: uphy_CSchedulingManager_setIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2167: uphy_CSchedulingManager_getIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2167: uphy_CSchedulingManager_getIsFristU2GReqInCurrentRetiringState: isFristU2GReqInCurrentRetiringState %d 
Line 2176: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2176: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2182: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2182: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isLteMeasurementRequested %d 
Line 2201: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2201: uphy_CSchedulingManager_setIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2218: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2218: uphy_CSchedulingManager_getIsGsmMeasurementOnHold: isGsmMeasurementOnHold %d 
Line 2226: uphy_CSchedulingManager_setIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2226: uphy_CSchedulingManager_setIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2232: uphy_CSchedulingManager_getIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2232: uphy_CSchedulingManager_getIsGsmMeasurementRequested: isGsmMeasurementRequested %d 
Line 2260: uphy_CSchedulingManager_isRfAvailableForMeasurement: GSM Measurement On Hold! 
Line 2260: uphy_CSchedulingManager_isRfAvailableForMeasurement: GSM Measurement On Hold! 
Line 2267: GSM measuerement not triggered  
Line 2267: GSM measuerement not triggered  
Line 2275: uphy_CSchedulingManager_isRfAvailableForMeasurement: gphy_GetIratGsmOffRequested! 
Line 2275: uphy_CSchedulingManager_isRfAvailableForMeasurement: gphy_GetIratGsmOffRequested! 
Line 2290: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2290: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2299: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2299: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2310: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2310: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmRssi, timeToAutoPause : %d
Line 2321: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2321: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2330: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2330: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2341: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2341: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmSch, timeToAutoPause : %d
Line 2352: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2352: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2361: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2361: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2372: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2372: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for GsmFch, timeToAutoPause : %d
Line 2412: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2412: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2432: uphy_CSchedulingManager_isRfAvailableForMeasurement: isGsmMeasurementRequested: %d 
Line 2432: uphy_CSchedulingManager_isRfAvailableForMeasurement: isGsmMeasurementRequested: %d 
Line 2463: EUTRA measuerement not triggered  
Line 2463: EUTRA measuerement not triggered  
Line 2472: uphy_CSchedulingManager_isRfAvailableForMeasurement: l1ps_irat_LTE_off_requested! 
Line 2472: uphy_CSchedulingManager_isRfAvailableForMeasurement: l1ps_irat_LTE_off_requested! 
Line 2485: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for Eutra Cellsearch, timeToAutoPause : %d
Line 2485: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for Eutra Cellsearch, timeToAutoPause : %d
Line 2493: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 2493: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraMeasure, timeToAutoPause : %d
Line 2501: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 2501: uphy_CSchedulingManager_isRfAvailableForMeasurement: Not Enogh time for EutraSearchMeasure, timeToAutoPause : %d
Line 2541: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2541: uphy_CSchedulingManager_isRfAvailableForMeasurement: Measurement State: %d isRfAvailableForMeasurement: %d
Line 2559: uphy_CSchedulingManager_isRfAvailableForMeasurement: isLteMeasurementRequested: %d 
Line 2559: uphy_CSchedulingManager_isRfAvailableForMeasurement: isLteMeasurementRequested: %d 
Line 2578: uphy_CSchedulingManager_ReleaseRf: isGsmMeasurementRequested: %d, isLteMeasurementRequested: %d 
Line 2578: uphy_CSchedulingManager_ReleaseRf: isGsmMeasurementRequested: %d, isLteMeasurementRequested: %d 
Line 2582: uphy_CSchedulingManager_ReleaseRf: No Release required!!
Line 2582: uphy_CSchedulingManager_ReleaseRf: No Release required!!
Line 2591: uphy_CSchedulingManager_ReleaseRf forceRelease: isGapOver: %d !!
Line 2591: uphy_CSchedulingManager_ReleaseRf forceRelease: isGapOver: %d !!
Line 2597:  uphy_CSchedulingManager_ReleaseRf - forceRelease - Non-DCH Meas 
Line 2597:  uphy_CSchedulingManager_ReleaseRf - forceRelease - Non-DCH Meas 
Line 2613: uphy_CSchedulingManager_ReleaseRf: isGapOver: %d !!
Line 2613: uphy_CSchedulingManager_ReleaseRf: isGapOver: %d !!
Line 2662: uphy_CSchedulingManager_storeNextGsmMeasurementStartTime: gsmMeasurementStartTimeInfo: %d !!
Line 2662: uphy_CSchedulingManager_storeNextGsmMeasurementStartTime: gsmMeasurementStartTimeInfo: %d !!
Line 2688: uphy_CSchedulingManager_cleanOutstandingReq: Clean All outstanding requests
Line 2688: uphy_CSchedulingManager_cleanOutstandingReq: Clean All outstanding requests
Line 2736: uphy_CSchedulingManager_cleanSearcherOutstandingReq: Clean All Searcher outstanding requests
Line 2736: uphy_CSchedulingManager_cleanSearcherOutstandingReq: Clean All Searcher outstanding requests
Line 2790: RSN=%d:|__uphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2790: RSN=%d:|__uphy_SchedulingManager_drxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2802: postponedGapStateIdPtr == NULL pointer
Line 2802: postponedGapStateIdPtr == NULL pointer
Line 2828: uphy_SchedulingManager_drxGap when numOfCampingListenRequests=0
Line 2828: uphy_SchedulingManager_drxGap when numOfCampingListenRequests=0
Line 2843: RSN=%d:|__uphy_SchedulingManager_edrxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2843: RSN=%d:|__uphy_SchedulingManager_edrxGap stateId=%d, numOfCampingListenRequests=%d, run at sfn = %d slot = %d
Line 2906: [IRAT U2G] GsmRssiGapCommonProcessing called for %d (Gsm:0, Dcs:), noOfRssiMeasurements=%d
Line 2906: [IRAT U2G] GsmRssiGapCommonProcessing called for %d (Gsm:0, Dcs:), noOfRssiMeasurements=%d
Line 2910: compoundMsg is NULL
Line 2910: compoundMsg is NULL
Line 2925: compoundMsg->frequencyList is NULL
Line 2925: compoundMsg->frequencyList is NULL
Line 2992: uphy_CSchedulingManager_GsmRssiGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 2992: uphy_CSchedulingManager_GsmRssiGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3005: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3005: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3055: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3055: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3061: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3061: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3087: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3087: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3089: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3089: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3097: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3097: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed
Line 3106: [IRAT U2G] GsmRSSIGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3106: [IRAT U2G] GsmRSSIGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3117: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3117: [IRAT U2G] GsmRssiGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3125: [IRAT U2G] GsmRssiGapCommonProcessing: AddGsmTime failed
Line 3125: [IRAT U2G] GsmRssiGapCommonProcessing: AddGsmTime failed
Line 3131: [IRAT U2G] GsmRssiGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3131: [IRAT U2G] GsmRssiGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3134: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3134: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3137: [IRAT U2G] GsmRssiGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3137: [IRAT U2G] GsmRssiGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3140: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3140: [IRAT U2G] GsmRssiGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3161: [IRAT U2G] GsmRssiGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3161: [IRAT U2G] GsmRssiGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3186: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3186: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3240: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3240: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3247: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3247: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3287: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3287: [IRAT U2G] GsmRssiGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3342: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3342: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3349: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3349: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3379: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3379: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 3433: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3433: [IRAT U2G] GsmRssiGapCommonProcessing: frequencey list allocation failed:
Line 3440: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3440: [IRAT U2G] SchedulingManager GsmRssiGapCommonProcessing: rssiIndMsg message allocation failed:
Line 3507: [IRAT U2G] GsmOrDcs - illegal value
Line 3529: [IRAT U2G] GsmRssiGapCommonProcessing: failed to find any jobs
Line 3529: [IRAT U2G] GsmRssiGapCommonProcessing: failed to find any jobs
Line 3637: [IRAT U2G] GsmFchGapCommonProcessing: gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 3637: [IRAT U2G] GsmFchGapCommonProcessing: gsmScheduleTimingOffset=%d, gsmBurstTimingOffset=%d
Line 3640: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 3640: [IRAT U2G] GsmFchGapCommonProcessing called for %d (GsmFch:2, DcsFch:3), ARFCN=%d
Line 3687: uphy_CSchedulingManager_GsmFchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3687: uphy_CSchedulingManager_GsmFchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 3688: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3688: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3730: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3730: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3750: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3750: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 3752: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3752: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3760: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3760: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed
Line 3770: [IRAT U2G] GsmFchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3770: [IRAT U2G] GsmFchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 3780: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3780: [IRAT U2G] GsmFchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips sign=%d
Line 3788: [IRAT U2G] GsmFchGapCommonProcessing: AddGsmTime failed
Line 3788: [IRAT U2G] GsmFchGapCommonProcessing: AddGsmTime failed
Line 3796: [IRAT U2G] GsmFchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3796: [IRAT U2G] GsmFchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 3799: [IRAT U2G] GsmFchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3799: [IRAT U2G] GsmFchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 3802: [IRAT U2G] GsmFchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3802: [IRAT U2G] GsmFchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 3805: [IRAT U2G] GsmFchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3805: [IRAT U2G] GsmFchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 3836: [IRAT U2G] GsmFchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3836: [IRAT U2G] GsmFchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 3861: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3861: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3905: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3905: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3939: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3939: [IRAT U2G] GsmFchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 3985: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 3985: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 4005: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4005: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4055: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 4055: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for fchAcquisitionIndMsg
Line 4115: [IRAT U2G] GsmOrDcs - illegal value
Line 4115: [IRAT U2G] GsmOrDcs - illegal value
Line 4125: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for GsmFchAcquisitionReq
Line 4125: [IRAT U2G] GsmFchGapCommonProcessing: Unable to allocate memory for GsmFchAcquisitionReq
Line 4131: [IRAT U2G] GsmFchGapCommonProcessing: failed to find any jobs on ARFCN %d
Line 4131: [IRAT U2G] GsmFchGapCommonProcessing: failed to find any jobs on ARFCN %d
Line 4212: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 4212: [IRAT U2G] GsmSchGapCommonProcessing called for %d (GsmSch:4, DcsSch:5), ARFCN=%d
Line 4260: [IRAT U2G] GsmSchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 4260: [IRAT U2G] GsmSchGapCommonProcessing: isGsmMeasurementOnHold %d , send dummy indication 
Line 4261: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4261: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4304: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4304: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4323: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4323: [IRAT U2G] Difference between currentSfn=%d and gapStartSfn=%d should be less than %d. Cancel U2G msmt.
Line 4327: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4327: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4336: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4336: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed
Line 4346: [IRAT U2G] GsmSchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4346: [IRAT U2G] GsmSchGapCommonProcessing: Gap start time diff failed, diff = %d chips, sign=%d
Line 4357: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 4357: [IRAT U2G] GsmSchGapCommonProcessing: DiffUmtsTime failed, (difference between SW and HW) = %d chips, sign=%d
Line 4365:  
Line 4365:  
Line 4372: [IRAT U2G] GsmSchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4372: [IRAT U2G] GsmSchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmLatchedTimeInfo (fn, Qb)=(%d, %d)
Line 4375: [IRAT U2G] GsmSchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4375: [IRAT U2G] GsmSchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDeltaTimeInfo (fn, Qb)=(%d, %d)
Line 4378: [IRAT U2G] GsmSchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4378: [IRAT U2G] GsmSchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmStartTimeInfo (fn, Qb)=(%d, %d)
Line 4381: [IRAT U2G] GsmSchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4381: [IRAT U2G] GsmSchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), gsmDurationTimeInfo (fn, Qb)=(%d, %d)
Line 4413: [IRAT U2G] GsmSchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4413: [IRAT U2G] GsmSchGapCommonProcessing: gphy_GetIratGsmOffRequested=%d, isFristU2GReqInCurrentRetiringState=%d, isDiffUmtsTimeFailed=%d, DiffGsmTime=%d
Line 4438: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4438: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4482: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4482: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4515: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4515: [IRAT U2G] GsmSchGapCommonProcessing: 2G modem OFF is already triggered - dummy response message is made !!!
Line 4560: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4560: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4580: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4580: [IRAT U2G] lastGsmMsmtReqInfo reqType=%d EndPos (Fn, Qb)=(%d, %d) ::: currentGsmMsmtReqInfo reqType=%d StartPos (Fn, Qb)=(%d, %d)
Line 4628: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4628: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for schAcquisitionIndMsg
Line 4686: [IRAT U2G] GsmOrDcs - illegal value
Line 4686: [IRAT U2G] GsmOrDcs - illegal value
Line 4698: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for GsmSchAcquisitionReq
Line 4698: [IRAT U2G] GsmSchGapCommonProcessing: Unable to allocate memory for GsmSchAcquisitionReq
Line 4705: [IRAT U2G] GsmSchGapCommonProcessing failed to find any jobs on ARFCN=%d
Line 4705: [IRAT U2G] GsmSchGapCommonProcessing failed to find any jobs on ARFCN=%d
Line 4764: synchroListen should be called from EUphySchedulerStateId_CompModeFddGap
Line 4764: synchroListen should be called from EUphySchedulerStateId_CompModeFddGap
Line 4770: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4770: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4777: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4777: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4783: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4783: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4792: GetCampingDlUarfcn
Line 4792: GetCampingDlUarfcn
Line 4799: uphy_SchedulingManager_synchroListen : RF use is paused
Line 4799: uphy_SchedulingManager_synchroListen : RF use is paused
Line 4817: uphy_SchedulingManager_synchroListen: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 4817: uphy_SchedulingManager_synchroListen: interruptedUarfcn=%d should not happen after Fach Gap - in Fach gap operation should be completed
Line 4843: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4843: synchroListen: stateId=%d, RSN=%d, Sfn=%d, Slot=%d
Line 4850: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4850: synchroListen:numOfGapPostponedStateInfoStackElems=%d > : numOfCampingListenRequests=%d
Line 4856: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4856: |__DISCARDED: synchroListenSTF: a postponed gap state discarded because a channel configuration last more than one DRX cycle
Line 4895: fachGapStateInfo == NULL pointer
Line 4895: fachGapStateInfo == NULL pointer
Line 4901: RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d slot = %d, duration sfn = %d slot = %d
Line 4901: RSN=%d:Fach Occasion Gap requested for start RSN=%d: sfn = %d slot = %d, duration sfn = %d slot = %d
Line 4916: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 4916: uphy_SchedulingManager_fachOccasionGap:schedulingManager_ptr->fachGapToken!NULL
Line 4992: (Fach configured)FachGapSTF cannot be executed as RF isn't available
Line 4992: (Fach configured)FachGapSTF cannot be executed as RF isn't available
Line 5003: (Fach configured)FachGapSTF can be executed as RF is available
Line 5003: (Fach configured)FachGapSTF can be executed as RF is available
Line 5008: (HS configured and fach not configured  )FachGapSTF is getting executed (Rf check bypass)
Line 5008: (HS configured and fach not configured  )FachGapSTF is getting executed (Rf check bypass)
Line 5015: FachGapSTF cannot be executed as RF isn't available
Line 5015: FachGapSTF cannot be executed as RF isn't available
Line 5026: FachGapSTF can be executed as RF is available
Line 5026: FachGapSTF can be executed as RF is available
Line 5034: fachGapSTF: Unexpected measurementState=%d (should be 3)
Line 5034: fachGapSTF: Unexpected measurementState=%d (should be 3)
Line 5046: uphy_SchedulingManager_fachGapSTF: fachGapStateInfoPtr == NULL pointer
Line 5046: uphy_SchedulingManager_fachGapSTF: fachGapStateInfoPtr == NULL pointer
Line 5054: uphy_SchedulingManager_fachGapSTF - Uarfcn token delays - FACH GAP MISSED
Line 5054: uphy_SchedulingManager_fachGapSTF - Uarfcn token delays - FACH GAP MISSED
Line 5064: uphy_SchedulingManager_fachGapSTF but campingDlUarfcn did not found - probably release took place but outstanding token
Line 5064: uphy_SchedulingManager_fachGapSTF but campingDlUarfcn did not found - probably release took place but outstanding token
Line 5074: RSN=%d:|__ :uphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 5074: RSN=%d:|__ :uphy_SchedulingManager_fachGapSTF stateId=%d sfn = %d slot = %d
Line 5079: :   FachGap IGNORED - PRACH START CMD ACTIVE
Line 5079: :   FachGap IGNORED - PRACH START CMD ACTIVE
Line 5091: :   FachGap IGNORED - BCH configuration is active
Line 5091: :   FachGap IGNORED - BCH configuration is active
Line 5123: uphy_SchedulingManager_fachGapSTF: changed uarfcn during BCH decoding
Line 5123: uphy_SchedulingManager_fachGapSTF: changed uarfcn during BCH decoding
Line 5151: uphy_SchedulingManager_fachGapSTF:setImmediateDlUarfcn did not called: uarfcn=campingUarfcn=%d
Line 5151: uphy_SchedulingManager_fachGapSTF:setImmediateDlUarfcn did not called: uarfcn=campingUarfcn=%d
Line 5161: uphy_SchedulingManager_fachGap when numOfCampingListenRequests=0
Line 5161: uphy_SchedulingManager_fachGap when numOfCampingListenRequests=0
Line 5206: fddGapStateInfo == NULL pointer
Line 5206: fddGapStateInfo == NULL pointer
Line 5212: :    currentCfn=%d, fddCfn=%d, startSlot=%d, fddRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5212: :    currentCfn=%d, fddCfn=%d, startSlot=%d, fddRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5248: gsmGapStateInfo == NULL pointer
Line 5248: gsmGapStateInfo == NULL pointer
Line 5254: :    currentCfn=%d, gsmCfn=%d, startSlot=%d, gsmRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5254: :    currentCfn=%d, gsmCfn=%d, startSlot=%d, gsmRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5288: eutraGapStateInfo == NULL pointer
Line 5288: eutraGapStateInfo == NULL pointer
Line 5294: :    currentCfn=%d, eutraCfn=%d, startSlot=%d, eutraRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5294: :    currentCfn=%d, eutraCfn=%d, startSlot=%d, eutraRsn=%d, numOfSlotsDuration=%d,tgpsNr=%d,tgNr=%d
Line 5377: checkImpendingGap Fach occasion cfn %d pending %d virtualGapManager_ptr->fachCfnBuffer[cfn] %d nonGapDlUarfcn %d arfcn %d
Line 5377: checkImpendingGap Fach occasion cfn %d pending %d virtualGapManager_ptr->fachCfnBuffer[cfn] %d nonGapDlUarfcn %d arfcn %d
Line 5390: isUarfcnAssignedToNextGap = FALSE
Line 5390: isUarfcnAssignedToNextGap = FALSE
Line 5399: checkImpendingGap startCheck %d saftySlots %d endCheck %d safteySlotsGapend %d (startCheck > saftySlots) %d (endCheck > safteySlotsGapend) %d
Line 5399: checkImpendingGap startCheck %d saftySlots %d endCheck %d safteySlotsGapend %d (startCheck > saftySlots) %d (endCheck > safteySlotsGapend) %d
Line 5406: checkImpendingGap(gapStartRSN=%d gapEndRSN=%d currentRSN=%d) stateId %d saftySlots %d safteySlotsGapend %d pending %d
Line 5406: checkImpendingGap(gapStartRSN=%d gapEndRSN=%d currentRSN=%d) stateId %d saftySlots %d safteySlotsGapend %d pending %d
Line 5445: RF use is paused! Ignore MsgId=%d
Line 5445: RF use is paused! Ignore MsgId=%d
Line 5454: Searcher use is paused or not in use! Ignore MsgId=%d
Line 5454: Searcher use is paused or not in use! Ignore MsgId=%d
Line 5465: Out of range MsgId=%d
Line 5465: Out of range MsgId=%d
Line 5471: getFbId returns FALSE
Line 5471: getFbId returns FALSE
Line 5483: processFbMsg msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d
Line 5483: processFbMsg msgId=%d: TransactId=%d Deadline=%d missed at: RSN=%d
Line 5507: processFbMsg[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 5507: processFbMsg[%d] - don't kick scheduling in when reqHeader.arfcn %d == campingDlUarfcn %d and gap channels are configured
Line 5515: [FA%d] processFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 5515: [FA%d] processFbMsg: msgFbId=%d campingRequest stored to the list - no available FbFsm
Line 5537: [FA%d] processFbMsg: msgFbId=%d 
Line 5537: [FA%d] processFbMsg: msgFbId=%d 
Line 5569: [FA] FA2_waiting = %d numOfMsgs=%d msgFbId=%d processFbMsg[%d] in FA2 working:::uphy_CArfcnListsCollector(uarfcn=%d)
Line 5569: [FA] FA2_waiting = %d numOfMsgs=%d msgFbId=%d processFbMsg[%d] in FA2 working:::uphy_CArfcnListsCollector(uarfcn=%d)
Line 5586: Impending processFbMsg[%d] in active GSM compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5586: Impending processFbMsg[%d] in active GSM compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5625: Impending processFbMsg[%d] in active Eutra compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5625: Impending processFbMsg[%d] in active Eutra compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5664: Impending processFbMsg[%d] in active compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5664: Impending processFbMsg[%d] in active compressed gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5710: processFbMsg[%d] in active fach gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5710: processFbMsg[%d] in active fach gap area:::uphy_CArfcnListsCollector(msgFbId=%d, uarfcn=%d)
Line 5867: no schedule for campingUarfcn (isGapScheduled = %d)
Line 5867: no schedule for campingUarfcn (isGapScheduled = %d)
Line 5893: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 5893: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 5967: fbFsm %d
Line 5967: fbFsm %d
Line 5993: Offline: buffering not finished. uarfcn = %d
Line 5993: Offline: buffering not finished. uarfcn = %d
Line 6060: [IRAT U2G] Out of range MsgId=%d
Line 6060: [IRAT U2G] Out of range MsgId=%d
Line 6066: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 6066: [IRAT U2G] processGsmMsg for ARFCN=%d, MsgId=%d (RSSI: 15, FCH: 16, SCH: 17), isDCS=%d
Line 6179: sendListenArfcnTransitionAck : AckTransitionMsg - unexpected client
Line 6179: sendListenArfcnTransitionAck : AckTransitionMsg - unexpected client
Line 6195: send
Line 6195: send
Line 6219: schedulingManager_ptr->releaseAllMsg == NULL pointer
Line 6219: schedulingManager_ptr->releaseAllMsg == NULL pointer
Line 6238: send
Line 6238: send
Line 6278: send
Line 6278: send
Line 6304: fbFilterMap == NULL
Line 6304: fbFilterMap == NULL
Line 6313: areAllCollectorsEmpty i=%d
Line 6419: checkAndLaunchDoScheduling: RSN=%d, currentStateId=%d
Line 6419: checkAndLaunchDoScheduling: RSN=%d, currentStateId=%d
Line 6471: doSchedulingCalled[%d] currentStateId=%d
Line 6471: doSchedulingCalled[%d] currentStateId=%d
Line 6478: Listen state but campingDlUarfcn did not found - probably release took place but outstanding doScheduligToken
Line 6478: Listen state but campingDlUarfcn did not found - probably release took place but outstanding doScheduligToken
Line 6495: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6495: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6506: uarfcnToServ = %d
Line 6506: uarfcnToServ = %d
Line 6512: interruptedDlUarfcn = %d
Line 6512: interruptedDlUarfcn = %d
Line 6522: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6522: doScheduling: currentStateId=%d(0:None/2:DrxGap), isStateChangeTriggered=%d
Line 6540: doScheduling is not used for Compressed Mode Gap or Fach Gap states:  currentStateId=%d
Line 6540: doScheduling is not used for Compressed Mode Gap or Fach Gap states:  currentStateId=%d
Line 6545: doScheduling: Unknown stateId=%d
Line 6545: doScheduling: Unknown stateId=%d
Line 6559: fachGapDoScheduling but campingDlUarfcn did not found - probably release took place but outstanding token
Line 6559: fachGapDoScheduling but campingDlUarfcn did not found - probably release took place but outstanding token
Line 6565: fachGapDoScheduling: previously interrupted uarfcn=%d
Line 6565: fachGapDoScheduling: previously interrupted uarfcn=%d
Line 6637: compModeFddGapDoScheduling: campingDlUarfcn did not found
Line 6637: compModeFddGapDoScheduling: campingDlUarfcn did not found
Line 6682: areAllCollectorsEmpty=TRUE
Line 6703: offlineUarfcnTooOld
Line 6703: offlineUarfcnTooOld
Line 6806: fbFilterMap == NULL pointer
Line 6806: fbFilterMap == NULL pointer
Line 6817: schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 6817: schedulingManager_ptr->fbFsmHandlerArray[%d] == NULL pointer
Line 6855: EUphySchedulerFbId_SearcherSsch - getReplyMsgSize == NULL pointer
Line 6855: EUphySchedulerFbId_SearcherSsch - getReplyMsgSize == NULL pointer
Line 6859: Ssch request - could not flag set
Line 6859: Ssch request - could not flag set
Line 6873: EUphySchedulerFbId_SearcherSsch - replyMsg == NULL pointer
Line 6873: EUphySchedulerFbId_SearcherSsch - replyMsg == NULL pointer
Line 6967: provisionIdleFsms: synchStateInfo but not EUphySchedulerStateId_CompModeFddGap synchStateId=%d
Line 6967: provisionIdleFsms: synchStateInfo but not EUphySchedulerStateId_CompModeFddGap synchStateId=%d
Line 6996: provisionIdleFsms(uarfcn=%d, fbFsm=%d)
Line 6996: provisionIdleFsms(uarfcn=%d, fbFsm=%d)
Line 7062: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7062: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7072: [CompressedMode] alreay running, so this request [%d %d] uarfcn=%d should be queueing!!!!
Line 7072: [CompressedMode] alreay running, so this request [%d %d] uarfcn=%d should be queueing!!!!
Line 7104: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7104: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7109: [ProvisionIdleFsms] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request uarfcn = %d
Line 7109: [ProvisionIdleFsms] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request uarfcn = %d
Line 7133: Command handler is active so cannot execute the command , inserting in ArfcnListCollector
Line 7133: Command handler is active so cannot execute the command , inserting in ArfcnListCollector
Line 7183: uphy_CSchedulingManager_fbFsmReady: releaseAllMsg
Line 7183: uphy_CSchedulingManager_fbFsmReady: releaseAllMsg
Line 7422: isInCMGap=TRUE
Line 7422: isInCMGap=TRUE
Line 7441: provision FbFsm[%d %d]in CM for campingUarfcn from lists ?not enough instances previosuly
Line 7441: provision FbFsm[%d %d]in CM for campingUarfcn from lists ?not enough instances previosuly
Line 7513: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7513: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 7566: provision FbFsm[%d %d]in CM for uarfcn %d from lists
Line 7566: provision FbFsm[%d %d]in CM for uarfcn %d from lists
Line 7574: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7574: [ProvisionIdleFsms] bufferingCmd is NULL
Line 7579: [uphy_CSchedulingManager_fbFsmReady] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request_uarfcn = %d
Line 7579: [uphy_CSchedulingManager_fbFsmReady] UARFCN MISMATCH - INSERT : buffered_uarfcn = %d, request_uarfcn = %d
Line 7606: No campinDlUarfcn
Line 7606: No campinDlUarfcn
Line 7640: RSN=%d:setImmediateDlUarfcn ATEMPT: forced UARFCN=%d isCampingUarfcn=%d
Line 7640: RSN=%d:setImmediateDlUarfcn ATEMPT: forced UARFCN=%d isCampingUarfcn=%d
Line 7677: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 7677: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, INTERRUPTED UARFCN=%d
Line 7700: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 7700: RSN=%d:setImmediateDlUarfcn ATEMPT: isInterruptedDlUarfcn=%d, not forced UARFCN=%d
Line 7746: :   UARFCN=%d SET at stateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs)
Line 7746: :   UARFCN=%d SET at stateId=%d(No/ListenArfcn/DrxGap/FachGap/CmFdd/Dcs)
Line 7750: Critical: uarfcnCmd is NULL
Line 7750: Critical: uarfcnCmd is NULL
Line 7756: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 7756: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 7790: [RX DIV][SRCH] Turn on
Line 7790: [RX DIV][SRCH] Turn on
Line 7795: [RX DIV][SRCH] No Turn on  measurementState=%d schedulerStateId=%d
Line 7795: [RX DIV][SRCH] No Turn on  measurementState=%d schedulerStateId=%d
Line 7814: uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 7814: uarfcnCmd exec failure: errCode=%d, addErrCode=%d
Line 7835: AFC disable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7835: AFC disable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7841: AFC disable failed
Line 7841: AFC disable failed
Line 7850: AFC enable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7850: AFC enable successfully. campingDlUarfcn %d, newUarfcn %d
Line 7856: AFC enable failed
Line 7856: AFC enable failed
Line 7923: isUarfcnCompleted: Active CmdHandlers and return FALSE
Line 7923: isUarfcnCompleted: Active CmdHandlers and return FALSE
Line 7934: isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d, returnValue=%d
Line 7934: isUarfcnCompleted: currentDlUarfcn=%d, uarfcnNotSettledYet=%d, interruptedDlUarfcn=%d, returnValue=%d
Line 7974: ### launchSetFddGapDlUarfcn RSN=%d:launchSetFddGapDlUarfcn: ***targetRSNTimeStamp=%d
Line 7974: ### launchSetFddGapDlUarfcn RSN=%d:launchSetFddGapDlUarfcn: ***targetRSNTimeStamp=%d
Line 7986: RSN=%d:launchSetFddGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 7986: RSN=%d:launchSetFddGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 8018: launchSetGsmGapDlUarfcn: GSM RSSI
Line 8018: launchSetGsmGapDlUarfcn: GSM RSSI
Line 8023: launchSetGsmGapDlUarfcn: GSM INIT BSIC
Line 8023: launchSetGsmGapDlUarfcn: GSM INIT BSIC
Line 8028: launchSetGsmGapDlUarfcn: GSM BSIC RECONFIRMATION
Line 8028: launchSetGsmGapDlUarfcn: GSM BSIC RECONFIRMATION
Line 8033: tgmp unknown
Line 8033: tgmp unknown
Line 8047: RSN=%d:launchSetGsmGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 8047: RSN=%d:launchSetGsmGapDlUarfcn: gapPeriodRSNTimeStamp=%d
Line 8103: RSN=%d:launchSetEutraGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d stop timing %d
Line 8103: RSN=%d:launchSetEutraGapDlUarfcn: synchStateInfoPtr->stateStartAbsCtr=%d stop timing %d
Line 8132:  Scheduling manager NULL
Line 8132:  Scheduling manager NULL
Line 8152: setFddGapDlUarfcnSTF: retrun due to no channel state!
Line 8152: setFddGapDlUarfcnSTF: retrun due to no channel state!
Line 8177: FddGapDlUarfcnSTF in Pause state
Line 8177: FddGapDlUarfcnSTF in Pause state
Line 8207:  Scheduling manager NULL
Line 8207:  Scheduling manager NULL
Line 8220: setGsmGapDlUarfcnSTF: retrun due to no channel state!
Line 8220: setGsmGapDlUarfcnSTF: retrun due to no channel state!
Line 8270:  Scheduling manager NULL
Line 8270:  Scheduling manager NULL
Line 8283: setEutraGapDlUarfcnSTF: retrun due to no channel state!
Line 8283: setEutraGapDlUarfcnSTF: retrun due to no channel state!
Line 8328: uphy_CScheduling_FDDGapBufferingSTF: isOfflineUarfcn = %d, offlineUarfcn = %d
Line 8328: uphy_CScheduling_FDDGapBufferingSTF: isOfflineUarfcn = %d, offlineUarfcn = %d
Line 8334: bufferingCmd->generic_cmd_attributes.state != EHalCmdStateIdle
Line 8334: bufferingCmd->generic_cmd_attributes.state != EHalCmdStateIdle
Line 8352: bufferingCmd exec failure
Line 8352: bufferingCmd exec failure
Line 8386: setFddGapDlUarfcn is called
Line 8386: setFddGapDlUarfcn is called
Line 8405: setFddGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8405: setFddGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 8415: RSN=%d: setFddGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8415: RSN=%d: setFddGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 8425: setFddGapDlUarfcn: GapActive!!!!!!!
Line 8425: setFddGapDlUarfcn: GapActive!!!!!!!
Line 8447: setFDDGapDlUarfcn: no running FDD TGPS !!!
Line 8447: setFDDGapDlUarfcn: no running FDD TGPS !!!
Line 8479: RSN=%d:setFddGapDlUarfcn: UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 8479: RSN=%d:setFddGapDlUarfcn: UARFCN NOT DECIDED yet at time: scheduling token did not get time to run
Line 8494: RSN=%d:setFddGapDlUarfcn: STEP BUSY - UARFCN not set
Line 8494: RSN=%d:setFddGapDlUarfcn: STEP BUSY - UARFCN not set
Line 8500: RSN=%d: setFddGapDlUarfcn:BUFFERING CMD BUSY - uarfcn not set this time
Line 8500: RSN=%d: setFddGapDlUarfcn:BUFFERING CMD BUSY - uarfcn not set this time
Line 8510: setFddGapDlUarfcn: uarfcn=%d, uarfcnCmdType=%d
Line 8510: setFddGapDlUarfcn: uarfcn=%d, uarfcnCmdType=%d
Line 8524: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8524: RSN=%d: uarfcn=%d uarfcnCmdType=%d NOT SET - SFN(BCH decoding) activity in progress
Line 8537: Critical: uarfcnCmd is NULL
Line 8537: Critical: uarfcnCmd is NULL
Line 8547: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 8547: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 8561: RSN=%d:setFddGapDlUarfcn: uarfcn=%d uarfcnCmdType=%d DECIDED
Line 8561: RSN=%d:setFddGapDlUarfcn: uarfcn=%d uarfcnCmdType=%d DECIDED
Line 8570: setFddGapDlUarfcn NOT DECIDED we should not reach here where we are about to set: uarfcn=%d uarfcnType=%d
Line 8570: setFddGapDlUarfcn NOT DECIDED we should not reach here where we are about to set: uarfcn=%d uarfcnType=%d
Line 8592: RSN=%d:setFddGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8592: RSN=%d:setFddGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 8603: setFddGapDlUarfcn uphy_SetIsGapScheduled
Line 8603: setFddGapDlUarfcn uphy_SetIsGapScheduled
Line 8612: setFddGapDlUarfcn(): isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d
Line 8612: setFddGapDlUarfcn(): isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d
Line 8634: uarfcnCmd exec failure
Line 8634: uarfcnCmd exec failure
Line 8669: Buffering command is ACTIVE. Reset command and its handler
Line 8669: Buffering command is ACTIVE. Reset command and its handler
Line 8676: Buffering command is = %x or active for other stack
Line 8676: Buffering command is = %x or active for other stack
Line 8751:    :Offline Uarfcn still VAILID - UARFCN NOT SET
Line 8751:    :Offline Uarfcn still VAILID - UARFCN NOT SET
Line 8772: Buffering command is ACTIVE. Reset command and its handler
Line 8772: Buffering command is ACTIVE. Reset command and its handler
Line 8779: Buffering command is = %x or active for other stack
Line 8779: Buffering command is = %x or active for other stack
Line 8799: provision Step Fsms: fbFsm=0 - return
Line 8799: provision Step Fsms: fbFsm=0 - return
Line 8857: uarfcnCmd exec failure
Line 8857: uarfcnCmd exec failure
Line 8891: Buffering command is ACTIVE. Reset command and its handler
Line 8891: Buffering command is ACTIVE. Reset command and its handler
Line 8898: Buffering command is = %x or active for other stack
Line 8898: Buffering command is = %x or active for other stack
Line 8960: CFN=%d, RSN=%d: STEP1 of HWSignalSynch type requested, uarfcn=%d
Line 8960: CFN=%d, RSN=%d: STEP1 of HWSignalSynch type requested, uarfcn=%d
Line 8992: In setFddGapDlUarfcn, no msg available in arfcnlistcollector: uarfcn=%d
Line 8992: In setFddGapDlUarfcn, no msg available in arfcnlistcollector: uarfcn=%d
Line 9019: uarfcnCmd exec failure
Line 9019: uarfcnCmd exec failure
Line 9060: setGsmGapDlUarfcn is called
Line 9060: setGsmGapDlUarfcn is called
Line 9064: no outstandingRequest
Line 9064: no outstandingRequest
Line 9076: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 9076: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 9107: setGsmGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 9107: setGsmGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 9116: RSN=%d: setGsmGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9116: RSN=%d: setGsmGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9127: setGsmGapDlUarfcn: GapActive!!!!!!!
Line 9127: setGsmGapDlUarfcn: GapActive!!!!!!!
Line 9149: setGsmGapDlUarfcn: no running GSM TGPS !!!
Line 9149: setGsmGapDlUarfcn: no running GSM TGPS !!!
Line 9172: Critical: uarfcnCmd is NULL
Line 9172: Critical: uarfcnCmd is NULL
Line 9182: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9182: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9200: RSN=%d:setGsmGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9200: RSN=%d:setGsmGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9233: uarfcnCmd exec failure
Line 9233: uarfcnCmd exec failure
Line 9238: [IRAT U2G] setGsmGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9238: [IRAT U2G] setGsmGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9281: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 9281: setGsmGapDlUarfcn cannot be executed as RF isn't available due to Pause
Line 9305: setEutraGapDlUarfcn is called
Line 9305: setEutraGapDlUarfcn is called
Line 9308: setEutraGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 9308: setEutraGapDlUarfcn: synchStateInfoPtr == NULL pointer
Line 9317: RSN=%d: setEutraGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9317: RSN=%d: setEutraGapDlUarfcn: uarfcnCmd busy- uarfcn is an instant cmd
Line 9328: setEutraGapDlUarfcn: GapActive!!!!!!!
Line 9328: setEutraGapDlUarfcn: GapActive!!!!!!!
Line 9351: setEutraGapDlUarfcn: no running FDD TGPS !!!
Line 9351: setEutraGapDlUarfcn: no running FDD TGPS !!!
Line 9375: Critical: uarfcnCmd is NULL
Line 9375: Critical: uarfcnCmd is NULL
Line 9385: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9385: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 9403: RSN=%d:setEutraGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9403: RSN=%d:setEutraGapDlUarfcn: TOO LATE: stateStartAbsCtr=%d
Line 9437: uarfcnCmd exec failure
Line 9437: uarfcnCmd exec failure
Line 9442: [IRAT U2L] setEutraGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9442: [IRAT U2L] setEutraGapDlUarfcn: RxUarfcnCmd complete !!!
Line 9486: buffering Timer started. isOnlineBufferingOld=%d;
Line 9486: buffering Timer started. isOnlineBufferingOld=%d;
Line 9491: buffering Timer is not started. isOnlineBufferingOld=%d;
Line 9491: buffering Timer is not started. isOnlineBufferingOld=%d;
Line 9504: [AMR decoding] ]isBufferingVaild: isOnlineBufferingOld = %d, BufferOngoing = %d, ret = %d
Line 9504: [AMR decoding] ]isBufferingVaild: isOnlineBufferingOld = %d, BufferOngoing = %d, ret = %d
Line 9526: [DRX Buf reuse] isBufferingVaild: measurementState= %d,(idle:),uarfcn = %d buffered_uarfcn = %d, ret=%d
Line 9526: [DRX Buf reuse] isBufferingVaild: measurementState= %d,(idle:),uarfcn = %d buffered_uarfcn = %d, ret=%d
Line 9538: 		: isBufferingVaild: buffering is required: isOnlineBufferingOld=%d, buffered_carrierInfo=%d, carrierInfo=%d, buffered_uarfcn=%d, uarfcn=%d, 
Line 9538: 		: isBufferingVaild: buffering is required: isOnlineBufferingOld=%d, buffered_carrierInfo=%d, carrierInfo=%d, buffered_uarfcn=%d, uarfcn=%d, 
Line 9554: onlineBufferingUarfcnTooOld
Line 9554: onlineBufferingUarfcnTooOld
Line 9576:  onlineBufferingUarfcnTooOld: Buffer Cmd execute!! carrierInfo=%d, uarfcn=%d, BufferLock=%d
Line 9576:  onlineBufferingUarfcnTooOld: Buffer Cmd execute!! carrierInfo=%d, uarfcn=%d, BufferLock=%d
Line 9582: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9582: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9591: onlineBufferingUarfcnTooOld: Can't execute bufferingCmd AmrSlotmode =%d, isMpRunning = %d
Line 9591: onlineBufferingUarfcnTooOld: Can't execute bufferingCmd AmrSlotmode =%d, isMpRunning = %d
Line 9644:  setNonGapDlUarfcn: Buffer Cmd execute!! isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d, BufferLock=%d
Line 9644:  setNonGapDlUarfcn: Buffer Cmd execute!! isOfflineUarfcn=%d, offlineUarfcn=%d, synchroGapUarfcnInfo.uarfcn=%d, BufferLock=%d
Line 9655: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9655: setNonGapDlUarfcn: bufferingCmd exec failure
Line 9683: 	setNonGapDlUarfcn : Buffering is active, BufferLock=%d, isOnlineBufferingOld=%d, buffered_uarfcn = %d
Line 9683: 	setNonGapDlUarfcn : Buffering is active, BufferLock=%d, isOnlineBufferingOld=%d, buffered_uarfcn = %d
Line 9695: Buffering command is ACTIVE. Reset command and its handler.
Line 9695: Buffering command is ACTIVE. Reset command and its handler.
Line 9704: Buffering command is = %x or active for other stack
Line 9704: Buffering command is = %x or active for other stack
Line 9719: Buffering command is ACTIVE due to no response.
Line 9719: Buffering command is ACTIVE due to no response.
Line 9735: Step3 or MP is running. Can't have buffer!!!!!
Line 9735: Step3 or MP is running. Can't have buffer!!!!!
Line 9749: GetNonGapBufferingAging_period: agingLength = %d
Line 9749: GetNonGapBufferingAging_period: agingLength = %d
Line 9775: fbFilterMap == NULL
Line 9775: fbFilterMap == NULL
Line 9867: getArfcnPriorityInfo: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 9867: getArfcnPriorityInfo: isFound=FALSE - isRestrictedUarfcn=%d, restrictedUarfcn=%d
Line 9912: [FA%d] Unexpected MsgId=%d
Line 9912: [FA%d] Unexpected MsgId=%d
Line 9927: [FA%d] Unexpected MsgId=%d
Line 9927: [FA%d] Unexpected MsgId=%d
Line 9935: Unexpected MsgId=%d
Line 9935: Unexpected MsgId=%d
Line 9971: Unknown stateId=%d
Line 9971: Unknown stateId=%d
Line 10217: [IRAT U2G] AFC disable successfully.
Line 10217: [IRAT U2G] AFC disable successfully.
Line 10225: [IRAT U2G] AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 10225: [IRAT U2G] AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 10244: [IRAT U2G] u2GAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10244: [IRAT U2G] u2GAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10275: [IRAT U2G] gsm2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10275: [IRAT U2G] gsm2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 10285: [IRAT U2G] g2UAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 10285: [IRAT U2G] g2UAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 10304: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 10304: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 10316: [IRAT U2G] gsm2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 10316: [IRAT U2G] gsm2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 10331: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 10331: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 10338: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RfRxOn
Line 10338: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RfRxOn
Line 10342: Rxuarfcn_Check: In Func = %s  Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 10342: Rxuarfcn_Check: In Func = %s  Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 10354: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 10354: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 10360: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 10360: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 10365: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 10365: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 10373: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 10373: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 10395: RACH going Rx only mode false
Line 10395: RACH going Rx only mode false
Line 10410: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10410: [IRAT U2G] gsm2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 10430: taskId == NULL pointer
Line 10430: taskId == NULL pointer
Line 10443: :   Fb[%d %d]=busy 
Line 10443: :   Fb[%d %d]=busy 
Line 10484: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeFddGapSetUarfcnToken is canceled !!!
Line 10484: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeFddGapSetUarfcnToken is canceled !!!
Line 10492: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeEutraGapSetUarfcnToken is canceled !!!
Line 10492: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeEutraGapSetUarfcnToken is canceled !!!
Line 10509: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmRssiGapSetUarfcnToken is canceled !!!
Line 10509: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmRssiGapSetUarfcnToken is canceled !!!
Line 10517: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmInitBsicGapSetUarfcnToken is canceled !!!
Line 10517: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmInitBsicGapSetUarfcnToken is canceled !!!
Line 10525: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmBsicRecGapSetUarfcnToken is canceled !!!
Line 10525: [IRAT] uphy_CSchedulingManager_cancelOngoingGapSetUarfcnTokens: on-going compModeGsmBsicRecGapSetUarfcnToken is canceled !!!
Line 10539: [IRAT] uphy_cancelOngoingGapSetUarfcnTokensSTF: on-going compModeGapSetUarfcnTokens are canceled !!!
Line 10539: [IRAT] uphy_cancelOngoingGapSetUarfcnTokensSTF: on-going compModeGapSetUarfcnTokens are canceled !!!
Line 10560: [IRAT U2L] uphy_CschedulingManager_sendSearchMeasStopReq
Line 10560: [IRAT U2L] uphy_CschedulingManager_sendSearchMeasStopReq
Line 10582: S %d  ### Critical Error mMsg = NULL (%d)
Line 10582: S %d  ### Critical Error mMsg = NULL (%d)
Line 10640: [IRAT U2L] EutraCellSearchGapCommonProcessing: incorrect noOfCellSearchs=%d, should be %d
Line 10640: [IRAT U2L] EutraCellSearchGapCommonProcessing: incorrect noOfCellSearchs=%d, should be %d
Line 10693: [IRAT U2L] EutraCellSearchGapCommonProcessing: DiffUmtsTime failed
Line 10693: [IRAT U2L] EutraCellSearchGapCommonProcessing: DiffUmtsTime failed
Line 10700: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 10700: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 10707: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10707: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10710: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10710: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10713: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10713: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10716: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10716: [IRAT U2L] EutraCellSearchGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 10761: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: failed to find any jobs
Line 10761: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: failed to find any jobs
Line 10775: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: compound message allocation failed:
Line 10775: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: compound message allocation failed:
Line 10790: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: sending dummy indication
Line 10790: [IRAT U2L] SchedulingManager EutraCellSearchGapCommonProcessing: sending dummy indication
Line 10839: S0  ### Critical Error eutraCellSearchResultsList  = NULL (%d)
Line 10839: S0  ### Critical Error eutraCellSearchResultsList  = NULL (%d)
Line 10848: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10848: [IRAT U2L] uphy_CEutraCellSearchStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 10926: [IRAT U2L] EutraMeasureGapCommonProcessing: incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 10926: [IRAT U2L] EutraMeasureGapCommonProcessing: incorrect noOfMeasures=%d, Should be equal to or smaller than %d
Line 11003: [IRAT U2L] EutraMeasureGapCommonProcessing: compoundMsg should be made for ONLY ONE EARFCN !!!
Line 11003: [IRAT U2L] EutraMeasureGapCommonProcessing: compoundMsg should be made for ONLY ONE EARFCN !!!
Line 11008: [IRAT U2L] EutraMeasureGapCommonProcessing: listHead is NULL
Line 11008: [IRAT U2L] EutraMeasureGapCommonProcessing: listHead is NULL
Line 11030: [IRAT U2L] EutraMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11030: [IRAT U2L] EutraMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11037: [IRAT U2L] EutraMeasureGapCommonProcessing: AddEutraTime failed
Line 11037: [IRAT U2L] EutraMeasureGapCommonProcessing: AddEutraTime failed
Line 11044: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11044: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11047: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11047: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11050: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11050: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11053: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11053: [IRAT U2L] EutraMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11106: [IRAT U2L] EutraMeasureGapCommonProcessing: failed to find any jobs
Line 11106: [IRAT U2L] EutraMeasureGapCommonProcessing: failed to find any jobs
Line 11114: [IRAT U2L]EutraMeasureGapCommonProcessing: compound message allocation failed:
Line 11114: [IRAT U2L]EutraMeasureGapCommonProcessing: compound message allocation failed:
Line 11129: [IRAT U2L] EutraMeasureGapCommon: sending dummy indication
Line 11129: [IRAT U2L] EutraMeasureGapCommon: sending dummy indication
Line 11171: S0  ### Critical Error eutraCellMeasResultsList = NULL (%d)
Line 11171: S0  ### Critical Error eutraCellMeasResultsList = NULL (%d)
Line 11180: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11180: [IRAT U2L] uphy_CEutraMeasureStepFsm_processReplyInfo: AGC1 (%d), AGC2 (%d), AFC (%d)
Line 11239: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: incorrect noOfSearchMeasures=%d
Line 11239: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: incorrect noOfSearchMeasures=%d
Line 11271: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 11271: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: earfcn=%d measBandwidth=%d numOfFreqs=%d
Line 11298: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11298: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: DiffUmtsTime failed
Line 11305: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 11305: [IRAT U2L] EutraCellSearchGapCommonProcessing: AddEutraTime failed
Line 11312: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11312: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsLatchedTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraLatchedTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11315: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11315: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDeltaTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDeltaTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11318: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11318: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsStartTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraStartTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11321: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11321: [IRAT U2L] EutraSearchMeasureGapCommonProcessing: umtsDurationTimeInfo (sfn, slot, chip)=(%d, %d, %d), eutraDurationTimeInfo (sfn, tti, offset)=(%d, %d, %d)
Line 11365: [IRAT U2L] SchedulingManager EutraSearchMeasureGapCommonProcessing: failed to find any jobs
Line 11365: [IRAT U2L] SchedulingManager EutraSearchMeasureGapCommonProcessing: failed to find any jobs
Line 11372: [IRAT U2L]EutraSearchMeasureGapCommonProcessing: compound message allocation failed:
Line 11372: [IRAT U2L]EutraSearchMeasureGapCommonProcessing: compound message allocation failed:
Line 11386: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 11386: [IRAT U2L] SchedulingManager EutraCellSearchMeasureGapCommonProcessing: sending dummy indication
Line 11436: S0  ### Critical Error eutraSearchMeasureResultsList = NULL (%d)
Line 11436: S0  ### Critical Error eutraSearchMeasureResultsList = NULL (%d)
Line 11446: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 11446: S  [IRAT U2L] uphy_CEutraSearchMeasureStepFsm_step: Msg is NULL
Line 11479: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 11479: [U2L TimeInfo] eutraCellSearchDataBase 0x%x eutraMeasureDataBase 0x%x
Line 11487: EutraCellInfoUpdateInd message generation is failed
Line 11487: EutraCellInfoUpdateInd message generation is failed
Line 11501: [U2L TimeInfo] EutraCellInfoUpdateInd msg 0x%x
Line 11501: [U2L TimeInfo] EutraCellInfoUpdateInd msg 0x%x
Line 11502: [U2L TimeInfo] message 0x%x message->header.TransactId 0x%x
Line 11502: [U2L TimeInfo] message 0x%x message->header.TransactId 0x%x
Line 11507: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11507: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11523: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 11523: [U2L TimeInfo] i %d j %d CellId %d earfcn %d cp type %d
Line 11527: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11527: [U2L TimeInfo] num_of_freq %d ind_msg 0x%x ind_msg->header.TransactId 0x%x, REQ is freed
Line 11533: [IRAT U2L] UMT refCounterFrame %d, refCounterSlot %d, refCounterChip %d
Line 11533: [IRAT U2L] UMT refCounterFrame %d, refCounterSlot %d, refCounterChip %d
Line 11535: [IRAT U2L] LTE sfn %d, tti %d, offset %d
Line 11535: [IRAT U2L] LTE sfn %d, tti %d, offset %d
Line 11544: [U2L TimeInfo] req_earfcn %d num_of_cells %d
Line 11544: [U2L TimeInfo] req_earfcn %d num_of_cells %d
Line 11552: [U2L TimeInfo] lteCellInfo Cell id %d earfcn %d, EutraCellManager cell id %d earfcn %d
Line 11558: [IRAT U2L] Found valid cell info for Handover
Line 11558: [IRAT U2L] Found valid cell info for Handover
Line 11568: [U2L TimeInfo] id %d updated sfn %d slot %d chip %d 
Line 11568: [U2L TimeInfo] id %d updated sfn %d slot %d chip %d 
Line 11570: [U2L TimeInfo] updated sfn %d slot %d chip %d eutraDeltaTimeInOffset %d calculated_framePosition %d
Line 11570: [U2L TimeInfo] updated sfn %d slot %d chip %d eutraDeltaTimeInOffset %d calculated_framePosition %d
Line 11588: EutraCellInfoUpdateInd message is failed
Line 11588: EutraCellInfoUpdateInd message is failed
Line 11618: [IRAT U2G] eutra2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11618: [IRAT U2G] eutra2UmtsAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11628: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11628: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: IratMuxConfigCmd failed. errCode=%d, addErrCode=%d
Line 11647: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 11647: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: AfcEnableCmd failed. errCode=%d, addErrCode=%d
Line 11659: [IRAT U2G] eutra2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 11659: [IRAT U2G] eutra2UmtsAntennaSwitchSTF : UE did not camp to any frequency
Line 11675: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 11675: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF Rx ON command exec failure Error %d, Additional Error %d
Line 11682: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RfRxOn
Line 11682: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RfRxOn
Line 11686: Rxuarfcn_Check: In Func = %s	Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 11686: Rxuarfcn_Check: In Func = %s	Calling EHalRfRxUarfcnCmd & Setting rxOnlyMode = TRUE To Enable interrupts
Line 11698: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11698: RxUarfcn_Check: uarfcnCmd Status Not Idle From Fun = %s
Line 11704: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11704: RxUarfcn_Check: uarfcnCmdhandler Status Not Idle From Fun = %s , possibly RF SYNTH HISR didnt arrive yet for previous rfrxuarfcn command
Line 11709: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11709: RxUarfcn_Check: uarfcnCmdhandler Status Idle From Fun = %s
Line 11717: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 11717: gsm2UmtsAntennaSwitchSTF: sendResponseToUphyToken did not get time to run, so clear it
Line 11739: RACH going Rx only mode false
Line 11739: RACH going Rx only mode false
Line 11754: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 11754: [IRAT U2G] eutra2UmtsAntennaSwitchSTF: RF UARFCN Error %d, Additional Error %d
Line 11785: [IRAT U2L] umts2EutraAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11785: [IRAT U2L] umts2EutraAntennaSwitchSTF launched at RSN=%d, (sfn, slot)=(%d, %d)
Line 11812: [IRAT U2L] U2LAntennaSwitchSTF: AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 11812: [IRAT U2L] U2LAntennaSwitchSTF: AfcDisableCmd failed. errCode=%d, addErrCode=%d
Line 11906: [IRAT U2L] msg Id out of range
Line 11906: [IRAT U2L] msg Id out of range
Line 11912: [IRAT U2L] SchedulingManager processEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 11912: [IRAT U2L] SchedulingManager processEutraMsg for EARFCN=%d, MsgId=%d (CELL SEARCH: 24, MEASURE: 25, SEARCHMEASURE: 26)
Line 11933: [IRAT U2L] SchedulingManager processEutraMsg: unknown msg
Line 11933: [IRAT U2L] SchedulingManager processEutraMsg: unknown msg
Line 12116: fbFsmAfterGap: no available fbFsmHandlerArray[%d]->fbFsm
Line 12116: fbFsmAfterGap: no available fbFsmHandlerArray[%d]->fbFsm
Line 12125: fbFsmAfterGap: fbFsmHandlerArray[%d]->fbFsm[%d] 
Line 12125: fbFsmAfterGap: fbFsmHandlerArray[%d]->fbFsm[%d] 
Line 12188: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 12188: [Searcher SCD] alreay running, so this request [%d %d] should be queueing!!!!
Line 12213: fbFsmAfterGap: no message in arfcnListCollector
Line 12213: fbFsmAfterGap: no message in arfcnListCollector
Line 12220: camping frequency is not found
Line 12220: camping frequency is not found
Line 12242: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 12242: GetCampingDlUarfcn: isCampingDlUarfcn=FALSE
Line 12467: uphy_CSchedulingManager_process_the_Online_message: currentDlUarfcn(%d), cmdExecStatus = %d (Invalid/Fail/Success)
Line 12467: uphy_CSchedulingManager_process_the_Online_message: currentDlUarfcn(%d), cmdExecStatus = %d (Invalid/Fail/Success)
Line 12521: There is no msg to run searcher!
Line 12521: There is no msg to run searcher!
Line 12539: buffering Timer started. isOnlineBufferingOld=%d;
Line 12539: buffering Timer started. isOnlineBufferingOld=%d;
Line 12608: Buffering command is ACTIVE. Reset command and its handler.
Line 12608: Buffering command is ACTIVE. Reset command and its handler.
Line 12615: Buffering command is = %x or active for other stack
Line 12615: Buffering command is = %x or active for other stack
Line 12650: Queued RACH_DATA_REQ extracted for processing
Line 12650: Queued RACH_DATA_REQ extracted for processing
Line 12655: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 12655: uhalCmdprachStart exec() failed errCode %d addErrCode %d
Line 12669: Invalid transceiver Id =  %d
Line 12669: Invalid transceiver Id =  %d
