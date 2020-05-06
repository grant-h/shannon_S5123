Line 406: Soft handover reset with replaceRlMsg set
Line 406: Soft handover reset with replaceRlMsg set
Line 410: Soft handover reset with actTimeTokenP set
Line 410: Soft handover reset with actTimeTokenP set
Line 434: Soft handover reset with fsm not in state 0
Line 434: Soft handover reset with fsm not in state 0
Line 438: Soft handover reset with timeoutIds set
Line 438: Soft handover reset with timeoutIds set
Line 443: Soft handover reset with deferredCellSynchroTokenP set
Line 443: Soft handover reset with deferredCellSynchroTokenP set
Line 486: [SHO] Soft handover requested to process new req when already busy
Line 486: [SHO] Soft handover requested to process new req when already busy
Line 499: [SHO] UE did not camp to any frequency
Line 499: [SHO] UE did not camp to any frequency
Line 510: [SHO] refRlCellInfo is NULL
Line 510: [SHO] refRlCellInfo is NULL
Line 525: [SHO] fails to find reference RL - PSC=%d
Line 525: [SHO] fails to find reference RL - PSC=%d
Line 536: [SHO] Reference RL have no phych: rlNr=%d, PSC=%d
Line 536: [SHO] Reference RL have no phych: rlNr=%d, PSC=%d
Line 556: [SHO] Reference RL Info: rlNr=%d, PSC=%d, rlStr=0x%x
Line 556: [SHO] Reference RL Info: rlNr=%d, PSC=%d, rlStr=0x%x
Line 593: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 593: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 616: [SHO] Reference RL should be removed. PSC=%d
Line 616: [SHO] Reference RL should be removed. PSC=%d
Line 624: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 624: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 656: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 656: [SHO] FDPCH/DPCH %d, PSC = %d, mappedRlNr = 0x%x, rlState = %d 
Line 680: [SHO] Reference RL should be removed. PSC=%d
Line 680: [SHO] Reference RL should be removed. PSC=%d
Line 688: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 688: [SHO] faile to find RL in MappingDatabase. PSC=%d
Line 708: [SHO] Cant determine new reference RL
Line 708: [SHO] Cant determine new reference RL
Line 723: [SHO] fails to seek PSC of new reference RL at MappingDatabase: rlNr=%d, rlStr=0x%x
Line 723: [SHO] fails to seek PSC of new reference RL at MappingDatabase: rlNr=%d, rlStr=0x%x
Line 734: [SHO] Reference RL will be changed. New rlNr=%d, PSC=%d
Line 734: [SHO] Reference RL will be changed. New rlNr=%d, PSC=%d
Line 795: [softHandover_ptr->nRlToChange] nRlToModify %d, numOfFdpchRls %d,
Line 795: [softHandover_ptr->nRlToChange] nRlToModify %d, numOfFdpchRls %d,
Line 800: [softHandover_ptr->nRlToModify] ChangeIndex %d, rlIndex %d, 
Line 800: [softHandover_ptr->nRlToModify] ChangeIndex %d, rlIndex %d, 
Line 842: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 842: FreqAdjustCmdd failed. errCode=%d, addErrCode=%d
Line 875: [SHO] nRlToAdd is %d but all FSM are idle
Line 875: [SHO] nRlToAdd is %d but all FSM are idle
Line 885: [SHO] activationTimeStf with no RL to add finds hasFailed set - will be corrected
Line 885: [SHO] activationTimeStf with no RL to add finds hasFailed set - will be corrected
Line 945: CellSynchroReqMsg == NULL pointer
Line 945: CellSynchroReqMsg == NULL pointer
Line 980: [SHO] Sending Cell Synchro request failed.
Line 980: [SHO] Sending Cell Synchro request failed.
Line 1044: [SHO] TID %d should be equal or greater than BaseID
Line 1044: [SHO] TID %d should be equal or greater than BaseID
Line 1051: [SHO] activeRlIndex %d should be equal or less than available num of RL %d
Line 1051: [SHO] activeRlIndex %d should be equal or less than available num of RL %d
Line 1123: [SHO] releaseRl: rlNr=%d, PSC=%d, removeRefRl=%d
Line 1123: [SHO] releaseRl: rlNr=%d, PSC=%d, removeRefRl=%d
Line 1145: [SHO] requested to release last RL. rlNr=%d, PSC=%d, phyChStr=0x%x
Line 1145: [SHO] requested to release last RL. rlNr=%d, PSC=%d, phyChStr=0x%x
Line 1174: [SHO] RlInfoCmd failure: errCode=%d, addErrCode=%d
Line 1174: [SHO] RlInfoCmd failure: errCode=%d, addErrCode=%d
Line 1191: [SHO] Reference RL change: Old RefRL %d PSC %d. New RefRl %d PSC %d. IsNbrRlChanged %d. rlStr 0x%x
Line 1191: [SHO] Reference RL change: Old RefRL %d PSC %d. New RefRl %d PSC %d. IsNbrRlChanged %d. rlStr 0x%x
Line 1206: [SHO] RlNeighbourConfigCmd failure: errCode=%d, addErrCode=%d
Line 1206: [SHO] RlNeighbourConfigCmd failure: errCode=%d, addErrCode=%d
Line 1223: [SHO] RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 1223: [SHO] RlReferenceConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 1251: [SHO] Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 1251: [SHO] Unable to set a new reference cell in MPDB: rlNr=%d, PSC=%d
Line 1254: uphy_CSoftHandover_releaseRl: Sending Ref. Cell Indication, uarfcn=%d, primaryScrCode=%d
Line 1254: uphy_CSoftHandover_releaseRl: Sending Ref. Cell Indication, uarfcn=%d, primaryScrCode=%d
Line 1274: [SHO] RlPhychConfigCmd failure: rlNr=%d, PSC=%d, phyChNr=%d, errCode=%d, addErrCode=%d
Line 1274: [SHO] RlPhychConfigCmd failure: rlNr=%d, PSC=%d, phyChNr=%d, errCode=%d, addErrCode=%d
Line 1318: [SHO] requested to release unconnected RL: rlNr=%d, rlStr=0x%x
Line 1318: [SHO] requested to release unconnected RL: rlNr=%d, rlStr=0x%x
Line 1330: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1330: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1345: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1345: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1349: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1349: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1361: [SHO] Unable to modify NPhych. PSC=%d
Line 1361: [SHO] Unable to modify NPhych. PSC=%d
Line 1367: [SHO] ReleaseRl failure. Cannot seek PSC=%d at MPDB
Line 1367: [SHO] ReleaseRl failure. Cannot seek PSC=%d at MPDB
Line 1429: [SHO] Cant Send Replace Rl Cnf
Line 1429: [SHO] Cant Send Replace Rl Cnf
Line 1476: [SHO] null timeout
Line 1476: [SHO] null timeout
Line 1582: [SHO] assignRlAndFingers: Fail to obtain free RL
Line 1582: [SHO] assignRlAndFingers: Fail to obtain free RL
Line 1593: [SHO] assignRlAndFingers: Cannot seek PSC=%d at MappingDatabase
Line 1593: [SHO] assignRlAndFingers: Cannot seek PSC=%d at MappingDatabase
Line 1605: [SHO] assignRlAndFingers: Cannot obtain free RL for PSC=%d
Line 1605: [SHO] assignRlAndFingers: Cannot obtain free RL for PSC=%d
Line 1634: [SHO] failed to configure RL %d, PSC %d
Line 1634: [SHO] failed to configure RL %d, PSC %d
Line 1663: [SHO] failed to configure RL %d, PSC %d
Line 1663: [SHO] failed to configure RL %d, PSC %d
Line 1675: [SHO] failed to map RL %d to PSC %d
Line 1675: [SHO] failed to map RL %d to PSC %d
Line 1679: [SHO] mapped RL %d to PSC %d
Line 1679: [SHO] mapped RL %d to PSC %d
Line 1686: [SHO] No available finger for SHO: errCode=%d
Line 1686: [SHO] No available finger for SHO: errCode=%d
Line 1693: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1693: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1707: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1707: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1711: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1711: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1730: [SHO] RlModifyCmd failure: rlNr=%d, PSC=%d, fingerNr=%d, errCode=%d, addErrCode=%d
Line 1730: [SHO] RlModifyCmd failure: rlNr=%d, PSC=%d, fingerNr=%d, errCode=%d, addErrCode=%d
Line 1751: [SHO] RlStartCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1751: [SHO] RlStartCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1760: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1760: [SHO] RlReleaseCmd failure: rlNr=%d, PSC=%d, errCode=%d, addErrCode=%d
Line 1774: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1774: [SHO] Unmap successful for (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1779: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 1779: [SHO] Failed to unmap (RlNr, PSC)=(%d, %d) from MappingDatabase
Line 2018: [SHO] Attach Rl Failed due to mismatch b/w nPhych %d and numOfDlDpchPerRl %d
Line 2018: [SHO] Attach Rl Failed due to mismatch b/w nPhych %d and numOfDlDpchPerRl %d
Line 2026: [SHO] can't find currentRefRl as refCellInformation=0
Line 2026: [SHO] can't find currentRefRl as refCellInformation=0
Line 2036: [SHO] cant find currentRefRl as ScrCode not in mapping table
Line 2036: [SHO] cant find currentRefRl as ScrCode not in mapping table
Line 2085: [SHO] no fingers are attached to reference RL and no multipath info are available
Line 2085: [SHO] no fingers are attached to reference RL and no multipath info are available
Line 2100: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2100: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2114: Reference finger %d on reference cell %d is unlocked. So get the position out of the locked fingers
Line 2114: Reference finger %d on reference cell %d is unlocked. So get the position out of the locked fingers
Line 2127: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2127: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2159: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2159: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2167: currentRefRl=%d refPsc=%d phyChNr=%d refRlDpchFo=%d fingerNr=%d refFingerPosition=%d (isLocked=%d)
Line 2167: currentRefRl=%d refPsc=%d phyChNr=%d refRlDpchFo=%d fingerNr=%d refFingerPosition=%d (isLocked=%d)
Line 2194: [SHO] attachRL unable to find any multipath info for new cell %d %d
Line 2194: [SHO] attachRL unable to find any multipath info for new cell %d %d
Line 2223: [SHO] fails to attach new RL as no fingers are attached to new RL and no multipath info are available
Line 2223: [SHO] fails to attach new RL as no fingers are attached to new RL and no multipath info are available
Line 2240: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2240: [SHO] fingerInfoCommand failure: fingerNr=%d, errCode=%d, addErrCode=%d
Line 2265: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2265: [SHO] attachRL unable to find a locked finger - no multipath info available either
Line 2279: [SHO] rlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2279: [SHO] rlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2293: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2293: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2298: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2298: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2326: [SHO] New Cell DPCH does not arrive in /-48 chip window of current reference cell dpch: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2326: [SHO] New Cell DPCH does not arrive in /-48 chip window of current reference cell dpch: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2331: Attaching new Rl in SHO - new dpch meets /-48 chip window requrements: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2331: Attaching new Rl in SHO - new dpch meets /-48 chip window requrements: refDpchPosition %d newDpchPosition %d dpchDifference %d newRlDpchFo %d refRlDpchFo %d (all in chips)
Line 2350: [SHO] cannot find off for [%d %d]
Line 2350: [SHO] cannot find off for [%d %d]
Line 2356: [SHO] cannot find old off for [%d %d]
Line 2356: [SHO] cannot find old off for [%d %d]
Line 2434: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d chs_tm_chip %d cfn %d off %d target_chip_delay %d
Line 2434: AttachRl: cpich_diff %d ref_chip_count %d target_chip_count %d chs_tm_chip %d cfn %d off %d target_chip_delay %d
Line 2445: [SHO] rlSfnConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2445: [SHO] rlSfnConfigCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2507: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2507: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2538: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2538: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2550: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2550: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2555: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2555: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2572: [SHO] Unable to modify NPhych
Line 2572: [SHO] Unable to modify NPhych
Line 2587: [SHO] phyChId (%d) Out of Bounds
Line 2587: [SHO] phyChId (%d) Out of Bounds
Line 2604: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2604: [SHO] RlPhych config failed: rlNr=%d, phyChNr=%d
Line 2626: [SHO] RlPhych release failed: rlNr=%d, phyChNr=%d
Line 2626: [SHO] RlPhych release failed: rlNr=%d, phyChNr=%d
Line 2636: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2636: [SHO] RlReleaseCmd failure: rlNr=%d, errCode=%d, addErrCode=%d
Line 2648: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2648: [SHO] Unmap successful for (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2653: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2653: [SHO] Failed to unmap (RlNr, Uarfcn, PSC)=(%d, %d, %d) from MappingDatabase
Line 2671: [SHO] Unable to modify NPhych
Line 2671: [SHO] Unable to modify NPhych
Line 2723: SoftHandoverFSMStates_Idle_processEventFn : event=0
Line 2723: SoftHandoverFSMStates_Idle_processEventFn : event=0
Line 2764: [SHO] Timeout in Idle state
Line 2764: [SHO] Timeout in Idle state
Line 2769: [SHO] CellSynchroInd in Idle state
Line 2769: [SHO] CellSynchroInd in Idle state
Line 2774: [SHO] ActivationTime in Idle state
Line 2774: [SHO] ActivationTime in Idle state
Line 2784: Unknown Event 
Line 2784: Unknown Event 
Line 2802: SoftHandoverFSMStates_PreSynchronising_processEventFn : event=0
Line 2802: SoftHandoverFSMStates_PreSynchronising_processEventFn : event=0
Line 2810: [SHO] AddRl in Presynchronising state
Line 2810: [SHO] AddRl in Presynchronising state
Line 2850: Unknown Event
Line 2850: Unknown Event
Line 2868: SoftHandoverFSMStates_PostSynchronising_processEventFn : event=0
Line 2868: SoftHandoverFSMStates_PostSynchronising_processEventFn : event=0
Line 2876: [SHO] AddRl in Postsynchronising state
Line 2876: [SHO] AddRl in Postsynchronising state
Line 2897: [SHO] ActivationTime in Postsynchronising state
Line 2897: [SHO] ActivationTime in Postsynchronising state
Line 2907: Unknown Event
Line 2907: Unknown Event
Line 2925: SoftHandoverFSMStates_AwaitingActivationTimeRlAssigned_processEventFn : event=0
Line 2925: SoftHandoverFSMStates_AwaitingActivationTimeRlAssigned_processEventFn : event=0
Line 2933: [SHO] AddRl in AwaitingActivationTimeRlAssigned state
Line 2933: [SHO] AddRl in AwaitingActivationTimeRlAssigned state
Line 2939: [SHO] Timeout in AwaitingActivationTimeRlAssigned state
Line 2939: [SHO] Timeout in AwaitingActivationTimeRlAssigned state
Line 2944: [SHO] CellSynchroInd in AwaitingActivationTimeRlAssigned state
Line 2944: [SHO] CellSynchroInd in AwaitingActivationTimeRlAssigned state
Line 2965: Unknown Event
Line 2965: Unknown Event
Line 2984: SoftHandoverFSMStates_AwaitingActivationTimeRlNotAssigned_processEventFn : event=0
Line 2984: SoftHandoverFSMStates_AwaitingActivationTimeRlNotAssigned_processEventFn : event=0
Line 2992: [SHO] AddRl in AwaitingActivationTimeRlNotAssigned state
Line 2992: [SHO] AddRl in AwaitingActivationTimeRlNotAssigned state
Line 2998: [SHO] Timeout in AwaitingActivationTimeRlNotAssigned state
Line 2998: [SHO] Timeout in AwaitingActivationTimeRlNotAssigned state
Line 3016: Unknown Event
Line 3016: Unknown Event
Line 3036: SoftHandoverFSMStates_AwaitingCellSynchroInd_processEventFn : event=0
Line 3036: SoftHandoverFSMStates_AwaitingCellSynchroInd_processEventFn : event=0
Line 3044: [SHO] AddRl in AwaitingCellSynchroInd state
Line 3044: [SHO] AddRl in AwaitingCellSynchroInd state
Line 3065: [SHO] ActivationTime in AwaitingCellSynchroInd state
Line 3065: [SHO] ActivationTime in AwaitingCellSynchroInd state
Line 3075: Unknown Event
Line 3075: Unknown Event
Line 3095: SoftHandoverFSMStates_AwaitingActivationTime_processEventFn : event=0
Line 3095: SoftHandoverFSMStates_AwaitingActivationTime_processEventFn : event=0
Line 3103: [SHO] AddRl in AwaitingActivationTime state
Line 3103: [SHO] AddRl in AwaitingActivationTime state
Line 3109: [SHO] Timeout in AwaitingActivationTime state
Line 3109: [SHO] Timeout in AwaitingActivationTime state
Line 3114: [SHO] CellSynchroInd in AwaitingActivationTime state
Line 3114: [SHO] CellSynchroInd in AwaitingActivationTime state
Line 3135: Unknown Event
Line 3135: Unknown Event
Line 3148: [SHO FSM] - Idle_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3148: [SHO FSM] - Idle_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3160: [SHO FSM] - PreSynchronising_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3160: [SHO FSM] - PreSynchronising_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3172: [SHO FSM] - AwaitingActivationTimeRlNotAssigned_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3172: [SHO FSM] - AwaitingActivationTimeRlNotAssigned_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3183: [SHO FSM] - AwaitingActivationTime_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3183: [SHO FSM] - AwaitingActivationTime_Entry state: RSN=%d, CFN=%d, rlIndex=%d
Line 3261: [SHO] refRlCellInfo == NULL
Line 3261: [SHO] refRlCellInfo == NULL
Line 3294: CellSynchroReqMsg == NULL pointer
Line 3294: CellSynchroReqMsg == NULL pointer
Line 3328: [SHO] Sending Cell Synchro request failed.
Line 3328: [SHO] Sending Cell Synchro request failed.
Line 3407: [SHO] uphy_CSoftHandover_SeekCellMPdb : psc=%d, uarfcn=%d, found=%d
Line 3407: [SHO] uphy_CSoftHandover_SeekCellMPdb : psc=%d, uarfcn=%d, found=%d
