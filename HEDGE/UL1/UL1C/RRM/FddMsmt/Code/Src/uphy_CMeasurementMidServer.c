Line 236: uphy_CMeasurementMidServer_periodicCommonProcessing[mid=%d,requestType=%d]: isInitialPeriodicReportDone=%d
Line 236: uphy_CMeasurementMidServer_periodicCommonProcessing[mid=%d,requestType=%d]: isInitialPeriodicReportDone=%d
Line 339:   uphy_CMeasurementMidServer_periodicCommonProcessing: mid=%d requestType=%d measurement lates
Line 339:   uphy_CMeasurementMidServer_periodicCommonProcessing: mid=%d requestType=%d measurement lates
Line 355:   uphy_CMeasurementMidServer_periodicCommonProcessing DRX state: mid=%d requestType=%d measurement lates
Line 355:   uphy_CMeasurementMidServer_periodicCommonProcessing DRX state: mid=%d requestType=%d measurement lates
Line 509:   uphy_CMeasurementMidServer_eventTriggerCommonProcessing: mid=%d requestType=%d resultIndex=%d
Line 509:   uphy_CMeasurementMidServer_eventTriggerCommonProcessing: mid=%d requestType=%d resultIndex=%d
Line 521:   uphy_CMeasurementMidServer_eventTriggerCommonProcessing: mid=%d requestType=%d resultIndex=%d
Line 521:   uphy_CMeasurementMidServer_eventTriggerCommonProcessing: mid=%d requestType=%d resultIndex=%d
Line 538:   uphy_CMeasurementMidServer_eventTriggerCommonProcessing: mid=%d requestType=%d measurement lates
Line 538:   uphy_CMeasurementMidServer_eventTriggerCommonProcessing: mid=%d requestType=%d measurement lates
Line 542: uphy_CMeasurementMidServer_eventTriggerCommonProcessing[mid=%d,requestType=%d]: RSN=%d - measurement ind late
Line 542: uphy_CMeasurementMidServer_eventTriggerCommonProcessing[mid=%d,requestType=%d]: RSN=%d - measurement ind late
Line 646:   periodicalReporting: urrcIndMsg send failure
Line 646:   periodicalReporting: urrcIndMsg send failure
Line 688:   periodicalReporting: convertMeasuredResultsForURRCFormat failure
Line 688:   periodicalReporting: convertMeasuredResultsForURRCFormat failure
Line 764:   [RRM] 8.6..3A - measurement period  -> 50ms
Line 764:   [RRM] 8.6..3A - measurement period  -> 50ms
Line 910:   measurementTriggeredReporting: not Asn_eventTrigger
Line 910:   measurementTriggeredReporting: not Asn_eventTrigger
Line 926:   eventTriggeredReporting: urrcIndMsg send failure
Line 926:   eventTriggeredReporting: urrcIndMsg send failure
Line 937:   eventTriggeredReporting: convertMeasuredResultsForURRCFormat failure
Line 937:   eventTriggeredReporting: convertMeasuredResultsForURRCFormat failure
Line 950:   midServer is NULL
Line 950:   midServer is NULL
Line 967:   eventTriggeredReporting: urrcIndMsg send failure
Line 967:   eventTriggeredReporting: urrcIndMsg send failure
Line 976:   eventTriggeredReporting: convertMeasuredResultsForURRCFormat failure
Line 976:   eventTriggeredReporting: convertMeasuredResultsForURRCFormat failure
Line 1081: measurementTriggerInDrxSTF: midConfigCounter=%d, requestType=%d, measurementMsecPeriod=%d, drxCycleLength=%d, startStopTriggerInterval=%d
Line 1081: measurementTriggerInDrxSTF: midConfigCounter=%d, requestType=%d, measurementMsecPeriod=%d, drxCycleLength=%d, startStopTriggerInterval=%d
Line 1125:   uphy_CMeasurementMidServer_launchAllMeasurementTriggers[mid=%d, measurementState=%d(NoCh/Drx/Fach/Dch/Suspend)]: WAS SUSPENDED
Line 1125:   uphy_CMeasurementMidServer_launchAllMeasurementTriggers[mid=%d, measurementState=%d(NoCh/Drx/Fach/Dch/Suspend)]: WAS SUSPENDED
Line 1140:   uphy_CMeasurementMidServer_launchAllMeasurementTriggers[mid=%d, measurementState=%d(NoCh/Drx/Fach/Dch/Suspend)]: Invalid Measurement State !!!
Line 1140:   uphy_CMeasurementMidServer_launchAllMeasurementTriggers[mid=%d, measurementState=%d(NoCh/Drx/Fach/Dch/Suspend)]: Invalid Measurement State !!!
Line 1153:   InterFreqCellReselection measurementModifyReq: Set measurementToken to NULL
Line 1153:   InterFreqCellReselection measurementModifyReq: Set measurementToken to NULL
Line 1161:   launchAllMeasurementTriggers[mid=%d] UE in non drx state (%d) and Rf is not paused so continue with measurements
Line 1161:   launchAllMeasurementTriggers[mid=%d] UE in non drx state (%d) and Rf is not paused so continue with measurements
Line 1196:   launchAllMeasurementTriggers[mid=%d,requestType=%d]
Line 1196:   launchAllMeasurementTriggers[mid=%d,requestType=%d]
Line 1201: launchAllMeasurementTriggers[mid=%d,requestType=%d] no launch
Line 1201: launchAllMeasurementTriggers[mid=%d,requestType=%d] no launch
Line 1215:   launchAllMeasurementTriggers[mid=%d] UE in non drx state(%d) and Rf is paused so suspend the measurement
Line 1215:   launchAllMeasurementTriggers[mid=%d] UE in non drx state(%d) and Rf is paused so suspend the measurement
Line 1220: [E-DRX Measurement] measurementTriggerSTF is not triggered in uphy_CMeasurementMidServer_launchAllMeasurementTriggers() 
Line 1220: [E-DRX Measurement] measurementTriggerSTF is not triggered in uphy_CMeasurementMidServer_launchAllMeasurementTriggers() 
Line 1261: uphy_CMeasurementMidServer_launchMeasurementTrigger[mid=%d,requestType=%d]: WAS SUSPENDED
Line 1261: uphy_CMeasurementMidServer_launchMeasurementTrigger[mid=%d,requestType=%d]: WAS SUSPENDED
Line 1280: launchMeasurementTrigger[mid=%d requestType=%d] at RSN=%d (rekicked because measurement was late...)
Line 1280: launchMeasurementTrigger[mid=%d requestType=%d] at RSN=%d (rekicked because measurement was late...)
Line 1321: doSingleMeasurementTrigger[mid=%d requestType=%d] at RSN=%d
Line 1321: doSingleMeasurementTrigger[mid=%d requestType=%d] at RSN=%d
Line 1326:   requestMeasurementFun == NULL pointer: requestType=%d
Line 1326:   requestMeasurementFun == NULL pointer: requestType=%d
Line 1338:   measurementTriggerSTF: isRequestTypeForTheQuantities[mid=%d, requestType=%d]() returns FALSE - no measurement
Line 1338:   measurementTriggerSTF: isRequestTypeForTheQuantities[mid=%d, requestType=%d]() returns FALSE - no measurement
Line 1344: doSingleMeasurementTrigger requestType %d periodic measurement scheduled - do nothing
Line 1344: doSingleMeasurementTrigger requestType %d periodic measurement scheduled - do nothing
Line 1376: measurementTrigger [mid=%d, requestType=%d]: RSN=%d request measurements
Line 1376: measurementTrigger [mid=%d, requestType=%d]: RSN=%d request measurements
Line 1381: measurementTrigger [mid=%d, requestType=%d]: RSN=%d request measurements
Line 1381: measurementTrigger [mid=%d, requestType=%d]: RSN=%d request measurements
Line 1389: measurementTriggerSTF[mid=%d,requestType=%d]: startStopTriggerCount=%d did not reach startStopTriggerInterval=%d
Line 1389: measurementTriggerSTF[mid=%d,requestType=%d]: startStopTriggerCount=%d did not reach startStopTriggerInterval=%d
Line 1394: measurementTriggerSTF[mid=%d,requestType=%d]: startStopTriggerCount=%d did not reach startStopTriggerInterval=%d
Line 1394: measurementTriggerSTF[mid=%d,requestType=%d]: startStopTriggerCount=%d did not reach startStopTriggerInterval=%d
Line 1405: measurementTriggerSTF[mid=%d,requestType=%d]: startStopTriggerCount=%d reaches startStopTriggerInterval=%d
Line 1405: measurementTriggerSTF[mid=%d,requestType=%d]: startStopTriggerCount=%d reaches startStopTriggerInterval=%d
Line 1411:   measurementTriggerSTF[mid=%d, requestType=%d]: WAS SUSPENDED
Line 1411:   measurementTriggerSTF[mid=%d, requestType=%d]: WAS SUSPENDED
Line 1425:   measurementTrigger [mid=%d, requestType=%d]: RSN=%d - measurement ind late
Line 1425:   measurementTrigger [mid=%d, requestType=%d]: RSN=%d - measurement ind late
Line 1442:   requestMeasurementFun==0 : requestType=%d
Line 1442:   requestMeasurementFun==0 : requestType=%d
Line 1503:   measurementTriggerSTF:isRequestTypeForTheQuantities[mid=%d,requestType=%d]() returns FALSE - no measurement
Line 1503:   measurementTriggerSTF:isRequestTypeForTheQuantities[mid=%d,requestType=%d]() returns FALSE - no measurement
Line 1566: measurementTriggerSTF [requestType=%d] token resumbmited to run after %d msec
Line 1566: measurementTriggerSTF [requestType=%d] token resumbmited to run after %d msec
Line 1611: [DR-DSDS] DCH Meas: Handle Measurements-ReqType: %d
Line 1611: [DR-DSDS] DCH Meas: Handle Measurements-ReqType: %d
Line 1618: [DR-DSDS] DCH Meas: requestMeasurementFun is NULL for ReqType: %d
Line 1618: [DR-DSDS] DCH Meas: requestMeasurementFun is NULL for ReqType: %d
Line 1647:   uphy_CMeasurementMidserverMeasurementDone %d 
Line 1647:   uphy_CMeasurementMidserverMeasurementDone %d 
Line 1682: measurementRequestInDrx [mid=%d, requestType=%d]: RSN=%d request measurements
Line 1682: measurementRequestInDrx [mid=%d, requestType=%d]: RSN=%d request measurements
Line 1687: measurementRequestInDrx [mid=%d,requestType=%d]: startStopTriggerCount=%d did not reach startStopTriggerInterval=%d
Line 1687: measurementRequestInDrx [mid=%d,requestType=%d]: startStopTriggerCount=%d did not reach startStopTriggerInterval=%d
Line 1698: measurementRequestInDrx [mid=%d,requestType=%d]: startStopTriggerCount=%d reaches startStopTriggerInterval=%d
Line 1698: measurementRequestInDrx [mid=%d,requestType=%d]: startStopTriggerCount=%d reaches startStopTriggerInterval=%d
Line 1703:   measurementRequestInDrx [mid=%d, requestType=%d]: WAS SUSPENDED
Line 1703:   measurementRequestInDrx [mid=%d, requestType=%d]: WAS SUSPENDED
Line 1717:   measurementRequestInDrx [mid=%d, requestType=%d]: RSN=%d - measurement ind late
Line 1717:   measurementRequestInDrx [mid=%d, requestType=%d]: RSN=%d - measurement ind late
Line 1734:   measurementRequestInDrx : requestMeasurementFun==0, requestType=%d
Line 1734:   measurementRequestInDrx : requestMeasurementFun==0, requestType=%d
Line 1749:   measurementRequestInDrx : isRequestTypeForTheQuantities[mid=%d,requestType=%d] returns FALSE - no measurement
Line 1749:   measurementRequestInDrx : isRequestTypeForTheQuantities[mid=%d,requestType=%d] returns FALSE - no measurement
Line 1796:   cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - pending clear
Line 1796:   cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - pending clear
Line 1833:  cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - intraFrequencyCellReselectionMgmtDoneSTF
Line 1833:  cancelReportingAndMeasurement [mid=%d, requestType=%d]: RSN=%d - intraFrequencyCellReselectionMgmtDoneSTF
Line 1841:  cancelReportingAndMeasurement [mid=%d, requestType=%d]: isIntraFreqMsmtDone=TRUE
Line 1841:  cancelReportingAndMeasurement [mid=%d, requestType=%d]: isIntraFreqMsmtDone=TRUE
Line 1983: Measurement mid=%d was not resumed - !isPeriodicalAmountOfReportingNotReachedYet
Line 1983: Measurement mid=%d was not resumed - !isPeriodicalAmountOfReportingNotReachedYet
Line 2011: areAllMeasurementsComitted: requestType=%d isIndPending=%d
