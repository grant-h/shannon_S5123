Line 110: Initialisation of <GapiIntfManagement>, InitType=%d
Line 158:  %s  in  mm_DecodeGapiMmAttachReqMsg 
Line 163:   Gapi Attach Request Type -> %s 
Line 167:  GAPI ReadyTimerValue is %d 
Line 269: Detach Request saved OR Local Detach is performed because of ongoing Rat Resumption/Suspension.
Line 306: TIN value -> %d
Line 324: No Need to process detach, So performing Local detach 
Line 338: Detach Message with type %d will be processed
Line 355:   Gapi Detach Request Type -> %s, IsThisInternalDetach -> %d, DelayedForDetach  -> %d 
Line 409: NeedCellInd is TRUE while power off detach initiated, start GMM_DETACH_RESET_NEED_CELL_TIMER
Line 423: mm_GetCurrTime() %ld, mm_GetPdpDeactRequestedTime() =%ld,
Line 469: PS_DET_PSOFF is delayed, set it to internal detach for further processing 
Line 481: MM_DSNC - Ongoing proc on the other Stack: %s, Don't start another CS/PS sig
Line 488: MM_DSNC - Saving Detach Msg : DSDS proc ongoing on the other stack: %s
Line 494: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 504: MM state is NULL process detach request internally 
Line 512: On-going redirection from 3G so process detach request internally
Line 526: Saving Detach Msg Until CELL_IND comes
Line 600: U2L is disabled due to silent redial
Line 604: U2L is enabled due to silent redial
Line 610: Clearing CSFB Flags
Line 639: Putting Saved Cell Ind Msg to Message Queue..
Line 696: mm_IsCsfb is set to %d for emergency call during Limited Camping
Line 700: QRB is triggered due to CSFB call abortion.
Line 732: Perform RAU when CSFB call is aborted before starting
Line 761: mm_DecodeGapiVtCallIndMsg: %d
Line 766: VT call started, so stop the QRB start timer
Line 780: mm_DecodeGapiHDVoiceSettingReqMsg: %d
Line 782: HDVoice on:%d
Line 808: Status = %d in mm_SendGapiMmU2LReselectionInd
Line 965: mm_DecodeGapiMplmnInd: %d
Line 1037: Pended Attach during manual plmn searching will be performed on GSM RAT
Line 1042: Manual PLMN search is finished but not ready to do Attach, set mm_GmmNeedAttachflag to TRUE
Line 1055: Pended RAU during manual plmn searching will be performed on GSM RAT
Line 1060: Manual PLMN search is finished but not ready to do RAU, set RauNeededFlag to TRUE
Line 1151: IsConnected = %d mm_GetCellBandInfo = %d
Line 1152: PsConActiveState = %d FrequencyInfo = %d in mm_SendGapiScellAsInfoInd()
Line 1213: EmergListLen = %d
Line 1228: Emergency Number Type = %d
Line 1229: Emergency Number Length = %d
Line 1230: Emergency Number
Line 1279: NW RESET REJECT IND for %s.(cause = %d)
Line 1317: CMCC NW RESET ACCEPT IND for %s.
Line 1349: mm_GetNWRejTypeForNS Unhandled Procedure (#d) REJ cause (%d) .
Line 1406: mm_GetNWRejTypeForNS Undefined Reject type %d .
Line 1431: Sent REJECT IND to NS Procedure = %d.(cause = %d)
Line 1451: Sent CSFB Status indication message(Currently this is only for MT Call)
Line 1508: [SRVCC] GAPI HANDOVER STATUS IND ->  Status = %s.
Line 1536: [SRVCC] GAPI HANDOVER STATUS IND ->  HandoverType = %s.
Line 1572: PS Support Info : %s.
Line 1589: 
Line 1605: Received Int DDS %d  IMS DDS %d
Line 1636: Current Stack Internet Available %d  IMS Available %d
Line 1710: Operating mode is %d
Line 1722: UE is not in GSM RAT
Line 1740:  %s in  mm_DecodeNsMmVoicePriorityReqMsg 
Line 1758: ATT voice priority, send PS SCRI under specific condition(CS+PS mRAB, ANT BAR 1, SCR off 1s~)
Line 1763: Discard NS_MM_VOICE_PRIORITY_REQ
Line 1791: VoiceDomainPreferenece old: %d, new: %d 
Line 1829: Sensor State Req(Feature = %d, Sensor state = %d)
Line 1867: 
Line 1886: mm_DecodeNsMmDrxSetReqMsg changed Drxlength - %d
Line 1916: mm_SendUrrcDrxCoefficentValue specific Drx coefficent - %d
Line 1962: Wrong Action =%d 
Line 2003: Frequency Aiding Req (Start = %d, Rat = %d, Tcxo_Type = %d)
Line 2012: Because active RAT is neither 3G nor 2G so Frequency Aiding fails.
Line 2179: Wrong Action =%d 
Line 2202: Ongoing proc on the other Stack: %s, IMS Signaling started will be pended 
Line 2206: MM_DSNC - Sending StandbyReq when grant is not allowed, so that it gets updated in pending proc list at SRNC
Line 2240: IMS Grant is not taken now, as it was taken already, IMS Procedure is %d
Line 2253: SIG Start triggered for IMS Domain as IMS procedure is signaling already 
Line 2268: IMS Signaling is released already IMS Proc is %d
Line 2284: mm_DecodeMmImsSignalOperationReqMsg : Signal %d
Line 2296: UE is not in UMTS or GSM Rat modes 
