Line 75: RrmNrMeasIdle::entry
Line 80: RrmNrMeasIdle::exit
Line 93: RrmNrMeasIdle::IsHigherPriorityMode There is no ServingCell ptr
Line 96: RrmNrMeasIdle::IsHigherPriorityMode There is no IntraFreq ptr
Line 102: cellSelectionInfo or servingCellConfigCommonSIB is invalid!
Line 116: arfcn(%d) CellId(%d) has QoffsetTemp(%d)
Line 120: arfcn(%d) CellId(%d) has invalid QoffsetTemp(%d)
Line 129: 	>>[ON] Higher-Prirority-Mode
Line 134: 	>>[OFF] Higher-Prirority-Mode
Line 163: UE has not found any new suitable cell during 10 sec. Send OOS Message to change PLMN.
Line 177: Fail to send OOS message. SMPF NEW is failed for RRC_RRM_OOS_IND 
Line 189: ========================<Start setup for Idle Scheduling>========================
Line 210: ========================<End setup for Idle Scheduling>========================
Line 237: SLOT %d : [Reschedule] There is no Candidate for request
Line 262: SLOT %d : [Reschedule] There is no Candidate for request
Line 280: SLOT %d : There is no Candidate for request
Line 294: RrmNrMeasIdle::ProcIdleEval
Line 322:    >>There is NO candidate one for RESELECTON. Send DRX STATUS_IND
Line 329:    >>NRRRM.NR_IDLE_SLEEP_ENABLE %d Skip Sleep operation
Line 347:    >>There is NO candidate one for RESELECTON. Send DRX STATUS_IND
Line 354:    >>NRRRM.NR_IDLE_SLEEP_ENABLE %d Skip Sleep operation
Line 363: RrmNrMeasIdle::RRM_L1C_MEAS_CNF_Handler
Line 368:    >>ObjectId:%d RsType:%s(%d) MeasType:%s(%d) NumResult:%d
Line 387:    >>All results correspond to requests are received. Do Evaluation.
Line 395: RrmNrMeasIdle::RRM_L1C_MEAS_SCHEDULE_IND_Handler
Line 398: 	>>SfnSubFrame (%d), MeasStatus(bitmap)(%d)
Line 408: RrmNrMeasIdle::RRM_L1C_WAKEUP_DONE_IND_Handler - Result:%d
Line 414: 	>>Update timing offset TO:%d
Line 427: 	>> Need to check L1 side why WakeUp Done is failutre
Line 447:    >>Reselection is not avaliable. Send DRX STATUS_IND
Line 455:    >>NRRRM.NR_IDLE_SLEEP_ENABLE %d Skip Sleep operation 
Line 463: RrmNrMeasIdle::RRM_RRM_DS_MEAS_STATE_REQ_Handler
Line 485: RrmNrMeasIdle::RRM_RRM_MEAS_RESUME_REQ_Handler
Line 488: MeasSuspendReq Param: cause(%d)
Line 498: RrmNrMeasIdle::SendMeasState Result(%d) State(%d) bDS(%d)
Line 511: RrmNrMeasIdle::SendMeasState::CanNot AllocMsg about RRM_RRM_MEAS_STATE_CNF
Line 526: RrmNrMeasIdle::SendMeasState::CanNot AllocMsg about RRM_RRM_DS_MEAS_STATE_CNF
Line 533: RrmNrMeasIdle::ManageMeasState bDS(%d)
Line 576: 	 >> Reschedule for Slot:%d MO:%d
Line 588: 	 >> Reschedule for Slot:%d MO:%d
Line 604: RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler::CanNot AllocMsg about L1C_RRM_MEAS_STOP_REQ
Line 617: RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler::Delete All MeasSchedule
Line 636: RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler::CanNot AllocMsg about L1C_RRM_MEAS_STOP_REQ
Line 649: RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler::Delete All MeasSchedule
Line 670: RecvMsg.State(%d) is invalid
Line 674: NR_MEAS state change : from IDLE to %s
Line 679: RrmNrMeasIdle::RRM_RRM_MEAS_STATE_REQ_Handler
Line 687: RrmNrMeasIdle::RRM_RRM_MEAS_SUSPEND_REQ_Handler
Line 690: MeasSuspendReq Param: cause(%d)
Line 712: RrmNrMeasIdle::RRM_TIMER_MEAS_EVAL_IND_Handler
Line 719: RrmNrMeasIdle::RRM_TIMER_MEAS_SCHEDULE_IND_Handler
Line 735: 	>>PBCH Decoding fail
Line 737: 	>>NOT FOUND - FreqInfoptr with %d
Line 755: 	>>NOT FOUND - pCellInfo is nullptr. NEIGHBOUR SetType:(%d) ObjectId:%d
Line 759: 	>>FOUND - NEIGHBOUR SetType:(%d) ObjectId:%d
