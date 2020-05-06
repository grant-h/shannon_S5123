Line 75: RrmNrPrcdScellStatus::PreHdlr
Line 98: RrmServCellGroupInfoNr::CheckSCellActDeactType - ScellIdx(%d) SCellBitMask_Current(0x%x) SCellBitmask_New(0x%x)
Line 102:    >>RRM_SCELL_STATUS_TYPE_NOCHANGE
Line 107:    >>RRM_SCELL_STATUS_TYPE_ACT
Line 112:    >>RRM_SCELL_STATUS_TYPE_DEACT
Line 117:    >>Error!!!! RRM_SCELL_STATUS_TYPE_UNKNOWN
Line 125: RrmNrPrcdScellStatus::EncodeSCellSetInd
Line 145: RrmNrPrcdScellStatus::EncodeSCellSetInd - Error!!! there are no ServCellGroupInfoNr for MasterCellGroup
Line 155:    >>ScellIdx[%d] Configuration Not Changed from previous! Do not include this SCell Info!!
Line 160:    >>ScellIdx[%d] Configuration Unknown!!
Line 168:    >>ScellIdx[%d] Configuration Not Found from SCell List
Line 176:    >>Scell(Arfcn %d, SCS %d) is not found from SCellFreqList
Line 190:    >>ScellIdx(%d) info set to ScellInfoList[%d]
Line 196:      ::ScellInfoList[%d] ScellIndex(%d) act_deact(%d) SsbIndex(%d) 
Line 203:      ::RxBeamIdx(%d) TimingOffset(%d -> 0x%x) target_slot(%d) AgcGain[0](%d) AgcGain[1](%d)
Line 209:      >>numOfScellInfoList(%d)
Line 211:      >>Crnti %d(0x%x)
Line 213:      >>SCellActivationSlot(0x%xX)
Line 221: RrmNrPrcdScellStatus::RRM_L2_SCELL_STATUS_IND_Hdlr
Line 222:    >> Command Type %d (0: MAC-CE Cmd, 1:sCellDeactivationTimer Expiry)
Line 231: 	>>Error!!! there are no ServCellGroupInfoNr for MasterCellGroup
Line 242:    >>CurrentSCellStatus(%d) is same as received SCellActivationCMD(%d), So Nothing to do update for L1C!
Line 257:    >>pScellStatusInd->Msg.NR.numOfScellInfoList is %d, so do not send L1C_RRM_SCELL_STATUS_IND!
Line 258:    >>This case should be check why L2 MAC-CE command is un-synchronized with RRC Confugured SCell Info!!!!!
Line 263:    >>L1C_RRM_SCELL_STATUS_IND being sent to L1C!!!!!
Line 289:    >>Received SCellDeactivationId is invalid (%d) !
Line 297:    >>RecvMsg.SCellDeactivationID(%d), SCellActivationStatus_Current(0x%x)
Line 306:    >>RecvMsg.SCellActivationCMD set to 0x%x
Line 319:    >>pScellStatusInd->Msg.NR.numOfScellInfoList is %d, so do not send L1C_RRM_SCELL_STATUS_IND!
Line 320:    >>This case should be check why L2 MAC-CE command is un-synchronized with RRC Confugured SCell Info!!!!!
Line 325:    >>L1C_RRM_SCELL_STATUS_IND being sent to L1C!!!!!
Line 343:    >> Error! Unknown Command Type %d
Line 351: RrmNrPrcdScellStatus::RRM_L2_SCELL_STATUS_IND_UsrHandler
Line 363:    >>m_L1C_RRM_SCELL_STATUS_IND_sent is TRUE, so return 0
Line 368:    >>m_L1C_RRM_SCELL_STATUS_IND_sent is FALSE, so return 1
