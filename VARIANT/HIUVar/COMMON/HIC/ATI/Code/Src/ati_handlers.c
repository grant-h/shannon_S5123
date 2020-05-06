Line 175:  ati_FwHandlers_HandleUnsolicitedMessage
Line 219: NS_NETWORK_SELECT_MENU : %d
Line 228:  NS_REJ_CAUSE_IND
Line 272: NS_ECT_RSP
Line 431: NS_USSD_TERMINATE_IND(%d)
Line 440: ati_FwHandlers_HandleUnsolicitedMessage: Signal [%04X] NOT IMPLEMENTED.
Line 511: Received NS_NETWORK_SELECT_MENU : NS_STOP_NETWORK_RSP - clearing all PS and CS contexts !!
Line 613: NS_NSATI_COMMAND_REQ
Line 621: NS_PDN_DISCONNECT_IND
Line 633: NS_NETWORK_REGISTRATION_NTF received: EpsAttacthStatus [%d]
Line 638: NS_EPS_DEDICATED_PDP_ACTIVATE_IND 
Line 642: NS_PDP_UPDATE_SID_IND 
Line 649: NS_EPS_PDP_ACTIVATE_CNF
Line 661: NS_USB_CABLE_DISCONNECT_IND
Line 673: [NS_CBST_PARAMS_SET_IND]bearer type %d, Speed %d, Name %d, Ce %d
Line 721: ImsRegistrationStatus is updated to %d
Line 777: ati_FwHandlers_HandleUnsolicitedMessage: UNKNOWN [%04X]
Line 793: MemAlloc fail
Line 836:  - CodingScheme = %d, CodingGroup = %d
Line 858:  - Coding Group = %d - NOT SUPPORTED
Line 957: AtiHandleNsInformationInd
Line 971: FullNetworkName 
Line 972: ShortNetworkName 
Line 989: Time Zone  = %d : %d 
Line 990: UAL Time   = %d : %d 
Line 991: Time Zone Sign   = %d  
Line 1041: Default case : No local date conversion is needed
Line 1047: LocalDay= %d/%d/%d
Line 1056: LocalTime = %d : %d 
Line 1163: %d-%d-
Line 1164: Local Date %d-%d-
Line 1165: LocalTimeHStr 
Line 1166: LocalTimeMStr 
Line 1167: TimeType 
Line 1168: GMT:  TimeZoneHourStr
Line 1169: GMT : TimeZoneMinStr 
Line 1173: CDT: cdtHStr 
Line 1174: cdtMStr
Line 1175: TimeTypecdt
Line 1179: TimeZoneHourStr 
Line 1180: TimeZoneMinStr
Line 1181: TimeType
Line 1266: AtiHandleUpgradeCTMInd Type:%d
Line 1292: Command Timer Stopped [%s] [%d]
Line 1295: AtiRspPlusCTMEDIT: SUCCESS CTM
Line 1336: Command Timer Executed [%s] [%d]
Line 1523: Cannot find out cidIndex Sid[%d]
Line 1527: pAtiCB->cid_idx:%d, Sid:%d
Line 1533: CID table NsSID:%d Rcvd From NS SID:%d
Line 1538: Rcvd Eps Bearer Id:%d Cid:%d, Sid:%d
Line 1599: Cid_idx Out of Bound [%d]
Line 1693: Invalid bearer Type=%d
Line 1723: No Matched Linked SID in AtiHandleEpsDedBearerInd
Line 1729: AtiHandleEpsDedBearerInd: NS_EPS_DEDICATED_PDP_ACTIVATE_IND received for invalid default bearer CID: %d
Line 1737: Free CID not available for TempSID: %d
Line 1758: sec_cid:%d, p_cid:%d, tempSid:%d, LinkedSid:%d
Line 1774: Updating the call status for dedicated baearer CID = %d
Line 1780: cid_sec_idx Out of Bound[%d]
Line 1795: AtiHandleNsPdpUpdateSidInd secondary index %d , Tempsid %d 
Line 1818: AtiHandlePdnDisconnectInd(): BearerType: %d, Sid: %d
Line 1836: Default: Context Status: Cid=%d, state= %d
Line 1847: Context Status updated: Cid = %d, state: %d
Line 1851: AtiHandlePdnDisconnectInd: Received Disconnect for invalid Primary Cid: %d
Line 1870: LinkedSid:%d LinkedCid in ATI: %d
Line 1874: pNsMsg->isTempSID: %d
Line 1885: Sec Cid Index: %d
Line 1899: Sec Cid Index: %d
Line 1910: Dedicated Bearer Deactivated with Sec_CID:%d
Line 1914: AtiHandlePdnDisconnectInd: Received Disconnect for invalid Sec Sid: %d
Line 1920: AtiHandlePdnDisconnectInd: Received Disconnect for invalid LinkedSid: %d
Line 1965: Delegating NS_EPS_PDP_ACTIVATE_IND to generic handler
Line 1974: [AtiHandleNsEGPRSPDPType  SId=%d,   TempSid =: %d
Line 1995: CID context 1 is not used, so allocating
Line 2007: FreeCid = %d found for allocating
Line 2012: Could not allocate CID for TempSID = %d. No free CID available
Line 2030: LTE ATTACHED in PCT Case Base Ns SID:%d!!!!
Line 2065: Length = %d out of range
Line 2083: AtiHandleNsEGPRSPDPType:  pAtiCB->CID_table[%d].PDP_Params.cid=: %d
Line 2084: PdpType= %d, ApnLength = %d, AccessPointName=  
Line 2093: Cid_idx Out of Bound [%d]
Line 2110: Dedicated Bearer CID = %d, Linked CID = %d 
Line 2114: NS_EPS_PDP_ACTIVATE_IND Msg, ApnLength=%d, PdpAddressInfoLength=%d,tftlen=%d
Line 2153: [AtiHandleNsEGPRSPDPType:  pAtiCB->CID_sec_table[%d].PDP_Sec_Params.cid=: %d
Line 2161: cid_sec_idx Out of Bound[%d]
Line 2165:  Wrong TempSId[%d]
Line 2176:  Wrong TempSId[%d]
Line 2338: Wanted : AtiExtError( pAtiCB, E_ME_UNKNOWN, AT_ERROR )
Line 2357: NS_REL_IND,SId=%u, Cause = %u
Line 2379: AtiUnsoliciteH: Received NS_PDP_ACTIVATE_REJ
Line 2382: atiLteAttachTriggered - PDP activate rej.
Line 2394: MemAlloc fail
Line 2416: MemAlloc fail
Line 2433: MemAlloc fail
Line 2495: atiLteAttachTriggered - PDP deactivate Cnf.
Line 2516: Send Host LINK DOWN message to HOSTIF
Line 2594: MemAlloc fail
Line 2665: MemAlloc fail
Line 2700: Current DDS (INT:%d, IMS:%d)
Line 2731: MemAlloc fail
Line 2779: MemAlloc fail
Line 2823: Command Timer Stopped [%s] [%d]
Line 2872: isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
Line 2887: ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
Line 2889: PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
Line 2894: [ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
Line 2899: [ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
Line 2904: NO SIM
Line 2908: Command Timer Stopped [%s] [%d]
Line 2923: Command Timer Stopped [%s] [%d]
Line 2933: Command Timer Stopped [%s] [%d]
Line 2942: Invalid UNBLKPIN1Status =%d
Line 2953: Command Timer Stopped [%s] [%d]
Line 2962: Command Timer Stopped [%s] [%d]
Line 2982: [GCF_AUTO] NsSimInsertInd in ATI_HANDLERS : Start Network
Line 3009: Invalid PIN1Status =%d
Line 3058: isSimInserted %d, bSimOnePresent %d, bSimTwoPresent %d
Line 3073: ePinType =%d, PIN1Status = %d, UNBLKPIN1Status = %d, PIN2Status = %d, UNBLKPIN2Status = %d
Line 3075: PIN1RemainCnt = %d, PIN2RemainCnt = %d, UNBLKPIN1RemainCnt = %d, UNBLKPIN2RemainCnt = %d, SimPresent = %d
Line 3080: [ATI] NS Init. PCT enabled. atiInternalAttachValid = TRUE
Line 3085: [ATI] NS Init. PCT disabled. atiInternalAttachValid = FALSE
Line 3090: NO SIM
Line 3094: Command Timer Stopped [%s] [%d]
Line 3109: Command Timer Stopped [%s] [%d]
Line 3119: Command Timer Stopped [%s] [%d]
Line 3128: Invalid UNBLKPIN1Status =%d
Line 3139: Command Timer Stopped [%s] [%d]
Line 3148: Command Timer Stopped [%s] [%d]
Line 3169: [GCF_AUTO] NsInitCnf in ATI_HANDLERS : Start Network
Line 3197: Invalid PIN1Status =%d
Line 3228: MemAlloc fail
Line 3279: AtiHandleNsServiceInd(): MmServiceState %d, GmmServiceState %d, EmmServiceState %d, EmmState %d
Line 3603: PrevGmmNwState = %d, PrevMmNwState = %d
Line 3819: AtiHandleHedgeStateToCM(): unknown GprsStatus
Line 3829: AtiHandleHedgeStateToCM(): Imsi Attach Status %d, Gprs Attach Status = %d
Line 4094: PlmnAttribute = %d,EmmStatus = %d
Line 4100: setEmmStatus = %d
Line 4122: PlmnAttribute = %d ,set EmmStatus = %d
Line 4127: set EmmStatus = %d
Line 4145: PlmnAttribute = %d,set EmmStatus = %d
Line 4151: Unknown PlmnAttribute = %d ,Current EmmStatus = %d
Line 4177: NS_REGISTRATION_STATUS_IND, Rat %d, GprsStatus = %d, ImsiStatus = %d,MmServiceState = %d, GmmServiceState = %d
Line 4180: EmmStatus (ATTACH/DETACH) = %d, RegStatus = %d,EmmCause = %d, cell_id = %d
Line 4217: Unknown GPRS status (%d)
Line 4307: ImsiStatus:%d ,GPRSStatus:%d ,EpsAttacthStatus : %d
Line 4309: ATI_MM_Registration_Status:%d
Line 4311: ATI_GMM_Registration_Status:%d
Line 4325: ATI_EMM_Registration_Status:%d
Line 4352: MemAlloc fail
Line 4388: [ATI] LinkDown, Attatch = %d
Line 4420: Msg Send Error
Line 4449: NS_MM_PS_TYPE_IND, MmPsType %d, eActRatMode %d
Line 4490: AtiHandleNsServingCellInfoCnf: loc = %4X, cellid = %4X pAtiCB->PSC=%d
Line 4499: Sending NS_ABORT_PLMN_LIST_REQ
Line 4527: MemAlloc fail
Line 4579: Command Timer Executed [%s] [%d]
Line 4586: nAtiState %d
Line 4597: TransferMode %d, InfoTransferCapabilty %d
Line 4661: Calling Party length = %d out of range
Line 4667: telNumber length = %d toa=%d
Line 4681: Already call present
Line 4685: First Call
Line 4829: NS_MODE_SELECT_IND:Mode %d
Line 4864: NS_ACTIVE_RAT_IND:Rat %d
Line 4891: ATI_PIN_INFO_UPDATE_IND
Line 4903: Pin_State_Update ePinType: %d, PinCnt: %d, Puk1Cnt: %d, Puk2Cnt: %d
Line 4935: Disconnect received with Progress Indicator set to in-band info
Line 4950: MemAlloc fail
Line 5075: AtiSendCregCgregCereg: MmStatus = %d, GmmStatus = %d, EmmStatus = %d, ActiveRat = %d, CREGn = %d, CGREGn = %d, CEREGn = %d
Line 5077: lac = %04X, ci = %04X, Act = %d, rac = %04X
Line 5113: unknown Creg mode (%d)
Line 5142: unknown Creg mode (%d)
Line 5161: unknown Cgreg mode (%d)
Line 5177: unknown Cereg mode (%d)
Line 5239: ns_RegisterClient() from ATI
Line 5276: Length = %d out of range
Line 5310: MemAlloc fail
Line 5328: MemAlloc fail
Line 5342: MemAlloc fail
Line 5351: ApnDataLength %d, AccessPointName: 
Line 5417: FreeCid = %d found for allocating
Line 5467: MemAlloc fail
Line 5497: Mem free Error(PtrMsg)
Line 5498: Memory allocation failure
Line 5540: AtiSendNsSecPdpActivateRejRsp, Cause =%d
Line 5545: MemAlloc fail
Line 5599: Unsolicited: NS_PDP_ACTIVATE_SEC_CNF, call_mode %d, call_state %d
Line 5619: AtiHandleNsSecPdpActivateRej: call_mode  %d, call_state %d
Line 5629: AtiSendUartStatusChangeInd msg to MBX=%d State=%d
Line 5635: MemAlloc fail
Line 5695: atiLteAttachTriggered - Pdp deactivate ind.
Line 5709: Wrong Sid :%d in AtiHandleNsPdpDeactivateInd
Line 5722: AtiHandleNsUSBCableDisconnectInd: Hang up the current PPP connection!
Line 5747: [ATI] Rcv AtiHandleNsNcMisMatchInd:Result %d, NCKType %d, NCKLockByDiffCard %d
Line 5827: ePinType %d
Line 5838:  NS_AT_NC_NET_DEPERSON_IND,ePinType %d, NCK count %d 
Line 5911: Received RRSI value from lower layers : %d
Line 5961: NS_AS_TYPE_IND, AsType %d
Line 5968: pAtiCB->eActRatMode, [%d] 
Line 5980: NS_POWER_OFF_CNF
Line 5999: NS_RAT_MODE_CHANGE_IND: Status %d, RatMode %d
Line 6334: AtiHandleAutoStartRsp: pstNsMsg->Body.NsPlmnSelectionModeChangeRsp.Result: %d
Line 6354: Auto mode PLMN selection fail
Line 6377: ucActiveRat %d
Line 6540: unknown ActiveRat mode (%d)
Line 6543: Received ActiveRat %d ->Changed ActiveRat %d
Line 6568: AtiHandleNetworkNameChangeInd: Network Name is changed
Line 6621: PrimaryCid = %d
Line 6627: pAtiCB->CID_table[%d].PDP_Params.cid = %d, pAtiCB->CID_table[%d].PDP_Params.ActState = %d
Line 6648: SecCid = %d
Line 6672: Bearer type for Cid :%d
Line 6678: Dedicated:pAtiCB->CID_sec_table[%d].PDP_Sec_Params.sec_cid=%d
Line 6685: DEFAULT: pAtiCB->CID_table[%d].PDP_Params.cid=%d
Line 6716: unknown ActiveRat %d
Line 6719: Received ActiveRat %d ->Changed ActiveRat %d
Line 6740: NS_NETWORK_REGISTRATION_NTF received: ACT=0x%X, SVC Domain=0x%X, Reg Status=0x%X, Cell Id=0x%X, REJ Cause=0x%X, TAC=%X-%X)
Line 6756: eActRatMode 0x%X, EMMServiceState 0x%X, MMServiceState 0x%X, GMMServiceState 0x%X)
Line 6856: EPS Registration Status unknown :%d
Line 6861: ATI Context block: EMMServiceState =%d, EPS Registration Status =%d, Attach State=%d
Line 7045: Invalid Result=%d
Line 7099: AtiSubtractDate
Line 7156: AtiAddDate
