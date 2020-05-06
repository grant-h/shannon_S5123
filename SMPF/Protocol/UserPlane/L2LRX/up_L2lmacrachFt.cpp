Line 92: Skip PUCCH-SR, on-going RACH : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 97: Trigger PUCCH-SR : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 103: Defer PUCCH-SR : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d]
Line 120: Trigger SR-RACH : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 120: Trigger SR-RACH : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 128: PUCCH-SR triggered already !! : MacEntity[%d] CellId[%d] BwpId[%d] SrId[%d] DsrConfig[%d] UlSync[%d]
Line 168: [ERROR] Invalid GetMacRachCtrl MacEntity[%d]
Line 186: Fail RemoveDataFm
Line 194: L2LMACRACH_L2LMACRX_CR_IND_Handler start
Line 205: L2LMACRACH_L2LMACRX_RAR_IND_Handler start
Line 216: L2LMACRACH_L2LMACRX_SR_CHECK_IND_Handler start
Line 233: Trigger SR-RACH : MacEntity[%d], UlSync[%d]
Line 233: Trigger SR-RACH : MacEntity[%d], UlSync[%d]
Line 245: L2LMACRACH_L2_CONFIG_REQ_Handler start
Line 258: Fail CreateDataFmUni<L2lMacRachFtEvent>
Line 266: Fail CreateDataFmUni<L2lMacRachFtEvent>
Line 293: L2_L2LMACRACH_CONFIG_CNF send fail
Line 306: L2LMACRACH_L2_PUCCH_SRS_RELEASE_IND_Handler start
Line 315: [ERROR] Invalid CellGrpId[%d], TagId[%d]
Line 326: L2LMACRACH_L2_RACH_START_REQ_Handler start
Line 338: [ERROR] Invalid Cell Group
Line 352: L2_L2LMACRACH_RACH_STOP_CNF send fail
Line 361: Stop Defer RACH : MacEntity[%d], Cause[%d]
Line 380: L2LMACRACH_L2_RESET_REQ_Handler start : ResetCause[%d]
Line 405: L2_L2LMACRACH_RESET_CNF send fail
Line 418: L2LMACRACH_L2_TX_CNF_Handler start result[%d]
Line 430: Clear gL2DSDSRachCtrlInfo[MacEntity:%d].RachTxConfirmWait = false
Line 450: Clear gSrCtrlInfo[MacEntity:%d].SrTxConfirmWait = false
Line 507: L2_L2LMACRACH_TX_PAUSE_CNF send fail
Line 511: L2LMACRACH_L2_TX_PAUSE_REQ_Handler : Defer SR[0x%X]
Line 542: [ERROR] SR Event Fail !!! [MacEntity:%d] [SchedulingRequestId:%d]
Line 549: L2LMACRACH_L2_TX_RESUME_REQ_Handler : Resume SR[0x%X]
Line 554: L2_L2LMACRACH_TX_RESUME_CNF send fail
Line 568: L2LMACRACH_L2_BWP_CHANGE_DONE_IND_Handler start
Line 581: [L2->RRC] MsgBwpChgDoneInd : CellIndex(%d), ActiveUlBwpId(%d), ActiveDlBwpId(%d)
Line 585: L2_L2LMACRACH_BWP_CHANGE_DONE_IND send fail
Line 595: Switching gL2BwpId[MacEntity:%d][CellIndex:%d].UlBwpId [%d] -> [%d]
Line 605: Switching gL2BwpId[MacEntity:%d][CellIndex:%d].DlBwpId [%d] -> [%d]
Line 626: L2LMACRACH_PHY_RACH_CONTROL_IND_Handler start
Line 633: [L2<-PHY] PhyRachCtrl : cmd(%d), preambleIndex(%d), UL_SUL_indicator(%d), prachMaskIndex(%d), SS_PBCH_index(%d), carrier_index(%d)
Line 637: Ignore L2LMACRACH_PHY_RACH_CONTROL_IND
Line 654: Invalid NR_DRACH_CMD_SUCCESS[%d]
Line 670: L2LMACRACH_PHY_TIMER_EXPIRE_IND_Handler start
Line 671: [L2<-PHY] RachTimerExp : timer_type(%d)
Line 675: Ignore L2LMACRACH_PHY_TIMER_EXPIRE_IND
Line 707: L2LMACRACH_PHY_DSR_FAIL_IND_Handler start
Line 708: [L2<-PHY] DsrMaxFail : cmd(%d)
Line 713: Ignore L2LMACRACH_PHY_DSR_FAIL_IND
Line 725: [L2->RRC] MsgPucchSrsRelInd : CellGrpId(%d), TagId(%d), Cause(%d)
Line 729: L2_L2LMACRACH_PUCCH_SRS_RELEASE_IND send fail
Line 764: L2LMACRACH_PHY_BEAM_FAIL_IND_Handler start
Line 765: [L2<-PHY] BeamFailInd : BFIndicationPeriod(%d)
Line 778: L2LMACRACH_L2TEST_RASR_START_IND_Handler start
Line 793: L2LMACRACH_L2_BWP_CHANGE_CNF_Handler start
Line 806: [L2->RRC] MsgBwpChgDoneInd : CellIndex(%d), ActiveUlBwpId(%d), ActiveDlBwpId(%d)
Line 810: L2_L2LMACRACH_BWP_CHANGE_DONE_IND send fail
Line 819: Re-start RACH on new BWP
Line 845: [ERROR] no gRachCtrlInfo for Re-Start RACH
Line 893: [ERROR] L2lmacrachFt create fail !!!
