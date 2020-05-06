Line 197: uphy_CMeasurementController_processIndMsg(message->DestId.CompositeId.SubId=%d) 
Line 197: uphy_CMeasurementController_processIndMsg(message->DestId.CompositeId.SubId=%d) 
Line 207:   midServer == NULL pointer
Line 207:   midServer == NULL pointer
Line 233: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 233: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 254: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 254: uphy_CMeasurementController_processIndMsg:Clearing l1ps_measure_ongoing_for_ds flag as mid server is NULL
Line 306: Legal situation: Indication msg received but meanwhile mid server=%d suspended - receive message anyway
Line 306: Legal situation: Indication msg received but meanwhile mid server=%d suspended - receive message anyway
Line 341:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 341:   [DSDS] UMTS Meas. - Failed to send RF pause CNF.
Line 358: mid=%d, isSuspended=%d, isInvalidResults=%d, detectCellChange=%d, isEventTrigger=%d
Line 358: mid=%d, isSuspended=%d, isInvalidResults=%d, detectCellChange=%d, isEventTrigger=%d
Line 465: uphy_CMeasurementController_checkAndResumeEutraMeasurements =%d 
Line 465: uphy_CMeasurementController_checkAndResumeEutraMeasurements =%d 
Line 470: uphy_CMeasurementController_checkAndResumeEutraMeasurements: NumOfObjects == 0
Line 470: uphy_CMeasurementController_checkAndResumeEutraMeasurements: NumOfObjects == 0
Line 492: Suspend All Measurements
Line 492: Suspend All Measurements
Line 500: Suspend Measurement mid server=%d 
Line 500: Suspend Measurement mid server=%d 
Line 505:   uphy_CMeasurementController_suspendAllMeasurements: NumOfObjects == 0
Line 505:   uphy_CMeasurementController_suspendAllMeasurements: NumOfObjects == 0
Line 529: Resume All Measurements
Line 529: Resume All Measurements
Line 538: Resume Measurement mid server=%d 
Line 538: Resume Measurement mid server=%d 
Line 644: notifyMidPending Controller %d
Line 644: notifyMidPending Controller %d
Line 691: notifyMidDone - no mid pending
Line 691: notifyMidDone - no mid pending
Line 704: notifyMidDone mid server=%d not done
Line 704: notifyMidDone mid server=%d not done
Line 719: notifyMidDone not DRX. measurementState=%d(0:NoCh/:Drx/2:Fach/3:Dch/4:Suspension)
Line 719: notifyMidDone not DRX. measurementState=%d(0:NoCh/:Drx/2:Fach/3:Dch/4:Suspension)
Line 738: [IRAT U2G] numOfOutstandingRequests=%d
Line 738: [IRAT U2G] numOfOutstandingRequests=%d
Line 758: [IRAT U2G] numOfOutstandingRequestsForGsm=%d
Line 758: [IRAT U2G] numOfOutstandingRequestsForGsm=%d
Line 780: [IRAT U2G] numOfOutstandingRequests in FACH=%d
Line 780: [IRAT U2G] numOfOutstandingRequests in FACH=%d
