Line 91: [CONTROLCHANNEL] CdhCallSetup: Rab: %01X, Gda %d , ucRabmCallActiveStack %d
Line 98: [CONTROLCHANNEL] CdhCallClearDown: Rab: %01X, Gda %d, ucRabmCallActiveStack %d
Line 105: [CONTROLCHANNEL] rabm_ProcessGMMOpenLoopReq
Line 113: [CONTROLCHANNEL] GMMRABM_CLOSE_UE_TEST_LOOP_REQ: SimInstance %d 
Line 128: [CONTROLCHANNEL] rabm_ProcessGMMActivateRbTestModeReq : Received GMMRABM_ACTIVATE_RB_TEST_MODE_REQ
Line 135: [CONTROLCHANNEL] rabm_ProcessGMMActivateRbTestModeReq : Received GMMRABM_DEACTIVATE_RB_TEST_MODE_REQ
Line 142: [CONTROLCHANNEL] rabm_ProcessRatModeChangeInd: Status %02X, Mode %02X
Line 163: [ERROR_CHANNEL] rabm_ProcessNonUmtsRatModeInd : Data returned to pkt handler: %d
Line 168: [ERROR_CHANNEL] rabm_ProcessNonUmtsRatModeInd : Data Not returned to pkt handler: %d FREED
Line 195: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_GSM)
Line 208: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_GSM)
Line 275: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_LTE)
Line 288: [CONTROLCHANNEL] Rat changing, VCP disabled (NS_RAT_LTE)
Line 295: [ERROR_CHANNEL] rabm_ProcessRatModeChangeInd: Unknown Status %d
Line 301: [ERROR_CHANNEL] rabm_ProcessRatModeChangeInd: Unknown Rat %d
Line 313: [CONTROLCHANNEL] Umts RATMode(from URRC).... RABM timers and buffer creation
Line 321: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Ps Rab: %01X)
Line 340: [ERROR_CHANNEL] rabm_DataInitialise: not Initialise data(Cs Rab: %01X)
Line 356: [ERROR_CHANNEL] Timer Init Fail
Line 370: [CONTROLCHANNEL] rabm_DlWatchTimerInit() :Creation failed %d 
Line 378: [CONTROLCHANNEL] rabm_SesstionTimerInit() :Creation failed %d 
Line 386: [CONTROLCHANNEL] NonUmts RATMode(from URRC)....Deactivating all CS/PS data
Line 398: [ERROR_CHANNEL] rabm_ProcessTriggerInd: Dereferencing a Null Pointer (0x%X, %d)
Line 402: [CONTROLCHANNEL] rabm_ProcessTriggerInd: Cause %02X, Nsapi %02X
Line 441: [ERROR_CHANNEL] rabm_ParseVcgMessage: Unexpected Message type: %08X
Line 495: [CONTROLCHANNEL] RABMSM_ACTIVATE_IND received! RabmAsNonUmtsRatMode set FALSE!
Line 593: [CONTROLCHANNEL] GMMRABM_OPEN_UE_TEST_LOOP_REQ: SimInstance %d 
Line 700: [ERROR_CHANNEL] L2Data_RABM_Control_Event_Handler: RABM_VOICE_CALL_PROTECT_SET_REQ is ignored (SIM type %d
Line 753: [ERROR_CHANNEL] L2Data_RABM_Control_Event_Handler: Unexpected Message type: %04X
Line 800: [CONTROLCHANNEL] rabm_ParseUrrcMessage: Rcv RABMAS_UMTSRATMODE_IND, Init RABM state to RABM_SUSPENDED
Line 813: [ERROR_CHANNEL] L2Data_RABM_Control_Event_Handler: Unexpected Message type: %04X
Line 887: [ERROR_CHANNEL] rabm_ParseMessage: Message from PDCP should not arrive here
Line 900: [ERROR_CHANNEL] rabm_ParseMessage: Message from unexpected source: %04X
Line 937: [ERROR_CHANNEL] Rabm_PDCP_STF: DataPtr is NULL !!(RbId : %d)
Line 947: [ERROR_CHANNEL] Rabm_PDCP_STF: Downlink data for unconfigured Rb %01X
Line 963: [ERROR_CHANNEL] Rabm_PDCP_STF: uiReleaseType %d MultipleIpData %d IpCount %d
Line 973: [ERROR_CHANNEL] Rabm_PDCP_STF: freeing PacketHandler %x
Line 982: [ERROR_CHANNEL] Rabm_PDCP_STF: MultipleIpData==TRUE but SduMsgQ==NULL uiReleaseType %d
Line 999: [ERROR_CHANNEL] Rabm_PDCP_STF: uiReleaseType %d MultipleIpData %d IpCount %d
Line 1007: [ERROR_CHANNEL] Rabm_PDCP_STF: freeing PacketHandler %x
Line 1016: [ERROR_CHANNEL] Rabm_PDCP_STF: MultipleIpData==TRUE but SduMsgQ==NULL uiReleaseType %d
Line 1028: [ERROR_CHANNEL] Rabm_PDCP_STF: DataPtr is NULL !!(RbId : %d)
Line 1032: [ERROR_CHANNEL] Rabm_PDCP_STF: Invalid RBtype %d for Rb %01X
Line 1060: [CONTROLCHANNEL] rabm_ProcessCumacAvailableBitrateInd: CUMAC_AVAILABLE_BITRATE_IND, RbId %01X, RabId %01X, TotalUiBits %d
Line 1063: [ERROR_CHANNEL] CUMAC_AVAILABLE_BITRATE_IND, Unknown RbId %01X, BitRate %d
Line 1078: [CONTROLCHANNEL] CUMAC_AVAILABLE_BITRATE_IND for RabId %01X, not Voice
Line 1113: [ERROR_CHANNEL] rabm_ParseL2LoopbackMessage: Unexpected Message type: %08X
Line 1175: [ERROR_CHANNEL] Rabm_CdhSTF: Unexpected Command %d
