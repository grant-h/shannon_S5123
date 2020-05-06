Line 66: [TMC] Init!
Line 75: [TMC] m_bModeBTimerCreate!
Line 89: [TMC] ResetTmc!
Line 115: [TMC][ERROR] TmcDataQueue full!
Line 133: [TMC] push queue! rbId(%u) ebId(%u) length(%u), pData(0x%x) m_uTmcDataCount(%u)
Line 160: [TMC] SyncLteTlpConfig! u32CurrentState(%d) TlpMode(%d) u8NumDrbConfigLb(%d) u8TotalNumDrbConfig(%d)
Line 164: [TMC] LBID(%d) au8TlpEPSbearerId(%d) au8TlpDRbId(%d) aeDrbState(%d)
Line 165: [TMC] MODE A : au8TlpIsUlPdcpSduScalingConfig(%d) au16TlpUlPdcpSduSize(%d)
Line 168: [TMC] MODE B : u8IsBufferIpPdus(%d) u8TlpTDelayTimerValue(%d)
Line 179: [TMC] ProcLteTlpConfigMsg! u32MsgType(%d) u8Data(%d)
Line 197: [TMC][ERROR] unknown msg type!
Line 210: [TMC] ProcLbDrbInd! NumDrbs(%u) Previous u8TotalNumDrbConfig(%u)
Line 224: [TMC] i(%d) : DrbIdForLB(%d) CnIdForLB.choice(%d) u.epsBearerId(%d) u.pduSessionId(%d)
Line 225: [TMC] RbTypeForLB(%d) RbConfStatusForLB(%d) RbDirectionForLB(%d)
Line 234: [TMC] DrbIdForLB(%u) is not BI-DIRECTIONAL. Ignore this RB_SETUP
Line 241: [TMC] lbId(%d) Setup drb(%d), now u8TotalNumDrbConfig(%d)
Line 256: [TMC] Ignore this config state!
Line 269: [TMC] LB setup Result! au8TlpDRbId[%d] = %d, u8NumDrbConfigLb = %d
Line 281: [TMC] ProcDataInd! Length(%u) Data(0x%x 0x%x)
Line 286: [TMC][ERROR] Invalid Length! Ignore this message.
Line 293: [TMC][ERROR] SI is not 0. Ignore this message.
Line 346: [TMC][ERROR] unknown messageType(%d)
Line 360: [TMC] Proc_CLOSE_UE_TEST_LOOP! testMode(%d)
Line 365: [TMC][ERROR] Tlp mode is not active
Line 372: [TMC][ERROR] No bi-directional DRB
Line 379: [TMC][ERROR] Already UE test loop closed
Line 403: [TMC][ERROR] testMode is invalid!
Line 433: [TMC][MODE_A] LB setup list[%d]! uplinkPdcpSduSize(%u)(bits) drbType(%u)(0:EUTRA 1:NR) drbId(%u)
Line 437: [TMC][MODE_A] skip this DRB scaling config. Because This is E-UTRA DRB
Line 445: [TMC][MODE_A] LbId(%d) Found DRB! Set scaling info!
Line 467: [TMC][MODE_B] ipPduDelayField(%u)
Line 487: [TMC] Proc_OPEN_UE_TEST_LOOP! Current TlpMode(%d) will be MODE_NONE
Line 505: [TMC] Proc_ACTIVATE_TEST_MODE! testMode(%u)
Line 517: [TMC] Proc_DEACTIVATE_TEST_MODE!
Line 528: [TMC] Proc_RESET_UE_POSITIONING_STORED_INFO!
Line 538: [TMC] Proc_ACTIVATE_BEAMLOCK! nrMode(%d) ueBeamLockTestFunction(%d) FrType(%d)
Line 544: [TMC][ERROR] Not supported FR!
Line 561: [TMC] Send PHY IPC! (PHY_L2_UE_BEAMLOCK_IND)
Line 574: [TMC] Proc_DEACTIVATE_BEAMLOCK! nrMode(%d)
Line 580: [TMC] UBF is not running! Ignore this Msg.
Line 597: [TMC] Send PHY IPC! (PHY_L2_UE_BEAMLOCK_IND)
Line 624: [TMC] SendLbDataInd! eMsgType(%d)
Line 628: [TMC][ERROR] Sending MM_L2_LB_DATA_IND is fail!
Line 632: [TMC] Sending MM_L2_LB_DATA_IND is success!
Line 644: [TMC] SendBeamLockInd! ueBeamLockTestFunction(%d)
Line 648: [TMC][ERROR] Sending L1C_L2_BEAMLOCK_IND is fail!
Line 652: [TMC] Sending L1C_L2_BEAMLOCK_IND is success!
Line 667: [TMC] RunTmc()! SA Mode(%d)
Line 671: [TMC][ERROR] TLP state(%d) is not active!
Line 699: [TMC] Start m_ModeBTimer! (%d)ms
Line 706: [TMC] ModeB Timer is running! Keep received PDUs.
Line 713: [TMC][ERROR] not supported mode(%u)
Line 731: [TMC] Invoke L2NR_SendUlDataforNsa()! ulSduNum(%u)
Line 744: [TMC][ERROR] ulSduNum is 0!
Line 766: [TMC] ProcLoopModeA()! rbId(%d) lbId(%d) queue size(%d)
Line 782: [TMC] scaling config on! configSduSize(%d)
Line 786: [TMC][ERROR] configSduSize is 0. Can't make Loopback PDU
Line 796: [TMC][ERROR] m_tTmcDataQueue.front() is nullptr!
Line 805: [TMC][ERROR] rbId(%d) != pTmcData->rbId(%d)
Line 819: [TMC] Alloc CellBuffer! size(%u)
Line 825: [TMC][ERROR] pCellData == nullptr
Line 843: [TMC][ERROR] something is wrong! Please check dump
Line 854: [TMC] Make Loopback PDU (1:1 case)
Line 866: [TMC] Make Loopback PDU Segment! curPduLength(%u) PDCP SDU length(%u)
Line 870: [TMC] Make Loopback PDU(1:N case)! curPduLength(%u)
Line 880: [TMC] Enque Sdu Descriptor! Length(%u)
Line 915: [TMC] ProcLoopModeB()! rbId(%d) lbId(%d) queue size(%d)
Line 933: [TMC][ERROR] m_tTmcDataQueue.front() is nullptr!
Line 942: [TMC][ERROR] rbId(%d) != pTmcData->rbId(%d)
Line 949: [TMC] Alloc CellBuffer! size(%u)
Line 955: [TMC][ERROR] pCellData == nullptr
Line 969: [TMC] Enqueue PKTHND Loopback queue!
Line 973: [TMC][ERROR] hostifTriggerPktHnd() Fail!
Line 990: [TMC] ModeBTimerExpiredHandler()!
Line 1038: [TMC] FlushTmcDataQueue! rbId(%d) queue size(%d)
