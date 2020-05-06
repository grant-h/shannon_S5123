Line 165: No free buffer DL
Line 188: No space for PPP footer
Line 194: IP4RelayDownLink: Downlink data from PDH
Line 262: Send data to PDH -length[%d]
Line 352: ATI_PPP_CONTEXT_ACTIVE Received
Line 358: UART_PPP_CHARACTER_RXD_IND Received
Line 384: UART_PPP_CHANGE_STATUS_IND Received: STATE_HANG_UP
Line 389: GPRS end
Line 393: pal_TaskEntry_SNDCP Malloc failed pAtiMsg=NULL
Line 431: UART_PPP_CHANGE_STATUS_IND: STATE_TX_BUFF_AVAILABLE, itsFlags %02X, WriteBuffer %08X, PacketModeOffset %08X, WriteEnd %08X
Line 439: UART_PPP_CHANGE_STATUS_IND Received: Unexpected State %d
Line 447: PDH_DATA_MESSAGE_TYPE, Current State: %d
Line 459: ATI_ATI_PPP_RUN_IND
Line 464: ERROR -> Unknown Msg : 0x%x !!!
Line 465: Unknown Message Content
Line 489: PPP Task Started
Line 543: ppp_done: ppp_down(PPPState_kStopLink)
Line 550: ppp_done Malloc failed PtrMsg=NULL
Line 572: ppp_init: Initializing with uart_ppp_1: %x
Line 585: ppp_init: Registry UL Buffer Count %d too big, using default %d
Line 592: ppp_init: Registry UL Buffer Count %d too big, using default %d
Line 656: ppp_up(): Invalid MRU (%lu). MRU must be between (%lu) and (%lu) both included
Line 664: ppp_up(): Invalid PPP Buffers count (%lu). MRU must be between (%lu) and (%lu) both included
Line 728:   Bearer type[%d]
Line 892: ppp_run GPPP->itsState[%02X], GLINK->itsFlags[%02X], Free bufs: Read (%d), Write (%d), Write Q %08X, Writing %08X
Line 899: ppp_run(): Total timer elased. Closed.
Line 1065: ppp_run(): NCP is starting but LCP has Closed. Back to LCP.
Line 1095: ppp_run case PPPState_kStopIP
Line 1108: ppp_run case PPPState_kStopNCP
Line 1121: ppp_run case PPPState_kStopLCP
Line 1134: ppp_run case PPPState_kStopLink
Line 1148: ppp_run End: GPPP->itsState[%02X], GLINK->itsFlags[%02X], Free bufs: Read (%d), Write (%d), Write Q %08X, Writing %08X
Line 1169: ppp_set_failure_cause(%d)
Line 1177: itsState:                 %d
Line 1178: itsFailureCause:          %d
Line 1179: itsBuffersCount:          %d
Line 1180: itsReadBuffersAvailable:  %d
Line 1181: itsWriteBuffersAvailable: %d
Line 1182: itsSACCM:                 %d
Line 1183: itsRACCM:                 %d
Line 1184: itsMRU:                   %d
Line 1185: itsMTU:                   %d
Line 1186: itsRState:                %d
Line 1187: itsNextByteToSend:        %d
Line 1188: GLINK: ReadStart %08X,  ReadEnd %08X
Line 1189: GLINK: WriteBuffer %08X, PacketModeOffset %08X, WriteEnd %08X
Line 1190: GLINK: State %02X, Flags %02X
