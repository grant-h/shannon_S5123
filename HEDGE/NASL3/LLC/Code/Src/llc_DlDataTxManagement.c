Line 50: Invalid Protocol Descriptor
Line 57: Invalid Tlli
Line 73: RLC_DATA_IND-Len %d:FrameType 0x%04X:SAPI %d:LlcState %d:LlcHeader 0x%02X 0x%02X 0x%02X
Line 77: Sapi:TLLI_UNASSIGNED
Line 88: RLC_DATA_IND Ignored:SAPI(%d):LlcSuspended(%d):CipherALgo(%d):CipherBit(%d)
Line 129: Invalid FrameType %d
Line 161: RLC_DATA_CNF sapi %d BuffAdd 0x%x buffer_id 0x%4X seq_no %d sent_time %dms
Line 217: RLC_DATA_CNF : free llc_RlcCurrPos
Line 256: RLC_DATA_CNF Invalid BufferId 0x%4X seq_no %d  sapi %d
Line 292: RLC_STATUS_IND UFrame , UFrameType %d sapi %d
Line 297: Warning: BuffAdd is NULL
Line 301: ERROR : BuffAdd (0x%08x) is not same as Uptr (0x%08x)
Line 317: UFrame RLC transmission failure. Release U frame. UFrameType %d sapi %d
Line 331: Sapi:TLLI_UNASSIGNED
Line 332: Release U frame. UFrameType %d sapi %d
Line 350: Warning: BuffAdd is NULL
Line 354: ERROR : BuffAdd (0x%08x) is not same as Sptr (0x%08x)
Line 365: Malloc failed Sptr->SFramePtr=NULL
Line 377: Sptr Seq No %d != Msg Seq No %d
Line 388: STATUS_IND Rcvd: Sending Trig Ind(%d) instead of Status Ind
Line 414: RLC_STATUS_IND : free llc_RlcCurrPos
Line 491: Invalid BufferId 0x%04X Sapi %d
Line 568: UFrame Sapi %d CRC Fail
Line 572: Rx U Frame
Line 611: Malloc failed SabmCommand=NULL
Line 629: UFrame not processed. Sapi %d, State %d, Length %d, FreeQ Read %08X
Line 654: Received UA, Fbit 0, Sapi %d, State %d, Length %d
Line 659: Received SABM, Sapi %d, State %d, Length %d
Line 666: Received FRMR, Sapi %d, State %d, Length %d
Line 672: Rcvd FRMR:Sapi %d:State %d:Len %d
Line 675: Rcvd FRMR:N201 exceeded:Sapi %d Set to Default
Line 713: Malloc failed SabmCommand=NULL
Line 730: U FreeQ Full:Sapi %d:State %d
Line 764: Malloc failed DmResPtr=NULL
Line 780: U FreeQ Full
Line 799: Sending UA, Sapi %d, snpXidLength %d
Line 818: Malloc failed UaResponse=NULL
Line 861: U FreeQ Full Sapi %d 
Line 888: DM Resp rcvd in LLE_ADM 
Line 896: DM Resp rcvd( State %d ) while LLC trying to establish ACK link, hence send LL_RELEASE_IND to SNDCP 
Line 900: State for Sapi %d set to %d
Line 916: State for Sapi %d set to %d
Line 957: SABM+XID Cmd rcvd:ADM:Sapi %d 
Line 962: State for Sapi %d set to %d
Line 967: State for Sapi %d set to %d
Line 983: Malloc failed UaResponse=NULL
Line 1000: State for Sapi %d set to %d
Line 1005: U FreeQ Full:Sapi %d
Line 1033: SABM+XID Cmd rcvd:ADM_SABM_SENT:Sapi %d 
Line 1038: State for Sapi %d set to %d
Line 1043: State for Sapi %d set to %d
Line 1048: Sabm recvd for invalid Sapi %d
Line 1053: LLE_ADM_SABM_SENT, Sabm recvd w/o xid, hence ignored
Line 1078: SABM+XID Cmd rcvd:ABM:Sapi %d 
Line 1083: State for Sapi %d set to %d
Line 1088: State for Sapi %d set to %d
Line 1101: Malloc failed UaResPtr=NULL
Line 1121: State for Sapi %d set to %d
Line 1126: U FreeQ Full Sapi %d 
Line 1169: Malloc failed UaResPtr=NULL
Line 1193: U FreeQ Full
Line 1209: State for Sapi %d set to %d
Line 1224: Malloc failed UaResPtr=NULL
Line 1249: U FreeQ Full
Line 1255: State for Sapi %d set to %d
Line 1299: DlIFrame Too short:Sapi %d:Header Len %d:Len %d
Line 1306: DlIFrame Free Q empty:Sapi %d
Line 1372: XID Cmd from n/w CurrN201U %d CurrN201I %d 
Line 1391: SNDCP XID Reset trigger from NW
Line 1405: llc_ProcessRcvdXidCmdRes Malloc failed
Line 1429: [SGSN_COMMAND]Sending kU
Line 1434: [SGSN_COMMAND]Not Sending kU
Line 1452: [SGSN_COMMAND]U FreeQ Full
Line 1472: XID Response received, Sapi %d
Line 1479: Invalid XID_RESP Rcvd:XID_COMMAND ReTx'ed
Line 1482: Invalid XID_RESP Rcvd: XID ReTx'ed N200 times
Line 1568: State for Sapi %d set to %d
Line 1583: State for Sapi %d set to %d
Line 1608: State for Sapi %d set to %d
Line 1649: State for Sapi %d set to %d
Line 1691: Frame Invalid:Sapi %d:Discard
Line 1698: Cannot get DL_FRAME for Sapi %d:Discard
Line 1706: Invalid PDU len %d:Discard
Line 1717: UIFrame:Ciphered %d:Sapi %2d:Len %d:SeqNo %3d:DlOC %d
Line 1726: Hdr indicates ciphering, but no algorithm configured. Discard
Line 1783: DlOCCurr %d Nu %d 
Line 1789: Frame too short:SAPI %d:L3PduLen %d
Line 1794: Frame too long:SAPI %d:L3PduLen %d:N201u %d
Line 1803: Duplicate Frame:Nu %3d:Vur %3d:Duplicate mask 0x%08X:offset %3d:SAPI %d
Line 1887: IFrame Invalid Len %d:N201-I %d
Line 1897: FALSE:llc_CheckValidityForKdMd()
Line 1999: Ns %d:Nr %d:SBits 0x%02X:Invalid SBits
Line 2036: Malloc failed RnrFramePtr=NULL
Line 2097: FALSE:llc_CheckIFrameValidity(PduLen-%d:Headerlen-%d:Ns %d:Nr %d:SBits %d
Line 2123: DlIFrame->DlPduPtr:NULL
Line 2210: SFrame Rcvd:LLE != LLE_ABM:Send DM RSP:State %d:Sapi %d
Line 2233: Sending FRMR, Sapi %d
Line 2252: Malloc failed FrmrPtr=NULL
Line 2290: Sending FRMR:Sapi %d:U Free Q Full
Line 2330: Malloc failed SabmCommand=NULL
Line 2420: RR/ACK/RNR_FRAME_S_BITS:Invalid SFrameLen
Line 2434: SACK_FRAME_S_BITS:Invalid SFrameLen
Line 2440: Invalid SBits
