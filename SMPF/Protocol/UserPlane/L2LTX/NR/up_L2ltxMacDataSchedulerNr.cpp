Line 338: [L2_MAC_PDU_UL_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps ,[L2_RLC_PDU_NUM] [%d], [L2_PDCP_PDU_NUM] [%d]
Line 338: [L2_MAC_PDU_UL_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps ,[L2_RLC_PDU_NUM] [%d], [L2_PDCP_PDU_NUM] [%d]
Line 360: [L2_MAC_PDU_UL_TP] [%d]kbps, [L2_PADDING_TP] [%d]kbps, [L2_RLC_PDU_TP] [%d]kbps ,[L2_RLC_PDU_NUM] [%d], [L2_PDCP_PDU_NUM] [%d]
Line 467: [LcId:0x%02x] Configure [MacEntity:%d] [LCGID:0x%02x] [PBR:0x%X] [BSD:0x%X]
Line 476: [LcId:0x%02x] Modify [MacEntity: %d] [Idx:0x%X]
Line 501: [LcId:0x%02x] Added [MacEntity:%d] [Idx:0x%X]
Line 550: [LcId:0x%02x] gSrConfig[MacEntity:%d].SrPriority[SrId:%d] = %d
Line 812: [LcId:0x--] [CCIdx:%d] [Type:%d] [Hid:%d] [Token:%d] [GrantInd:%d] [TbSz:%d] [PendingCnt:%d]
Line 856: [LcId:0x--] [ERROR] Running DMA, skip grant(%d), HID(%d), tb_sz(%d)
Line 1013: [MSG3] RachCause(%d) MACSDUSchedule(0)
Line 1021: [MSG3] RachCause(%d) MACSDUSchedule(1)
Line 1156: |UE -> gNB| MSG3 : MAC CE (MacEntity[%d] M3_GrantSize[%d] RachCause[%d])
Line 1173: [LcId:0x--] [ERROR] :Msg3 > RemainGrant, [Msg3:%d], [RemainGrant:%d]
Line 1209: [LcId:0x--] [ERROR] :BSR cancelled [ActiveChannelCnt:%d]
Line 1226: [LcId:0x--] BSR > RemainGrant [eBsrType:%d] [BSRSz:%d] [RemainGrant:%d]
Line 1266: [LcId:0x%02x] [NewRlcCnt:%d]
Line 1282: [LcId:0x--] Cancel BSR [currentTotalBO:%d][revertGrant:%d][RemainGrant:%d]
Line 1426: [LcId:0x--] PHR > RemainGrant [RemainGrant:%d]
Line 1431: [LcId:0x--] MAC CE [bCRNTI:%d] [RachCause:%d] [bBsr:%d] [eBsrType:%d] [bPHR:%d] [RemainGrant:%d] [CurrentPathloss:%d]
Line 1441: |UE -> gNB| MSG3 : CCCH (MacEntity[%d] M3_GrantSize[%d] CcchSize[%d] RachCause[%d])
Line 1441: |UE -> gNB| MSG3 : CCCH (MacEntity[%d] M3_GrantSize[%d] CcchSize[%d] RachCause[%d])
Line 1459: [LcId:0x--] [ERROR] :Msg3 > RemainGrant, [Msg3:%d], [RemainGrant:%d]
Line 1465: [LcId:0x--] [ERROR] CCCH size:%d
Line 1583: [LcId:0x%02x] [Bj:%d]
Line 1672: [LcId:0x%02x] [ERROR]:SduSize > ReqSize, [RemainGrant:%d] [ReqSize:%d] [upperRemainGrant:%d]
Line 1753: [LcId:0x%02x] [ERROR]:SduSize > ReqSize, [RemainGrant:%d] [ReqSize:%d] [upperRemainGrant:%d]
Line 1901: [LcId:0x%02x] [ERROR], [pMacSduGenInfo:0x%X] [Used:%d] [RemainGrant:%d] [TotalSduGenLen:%d]
Line 1916: [LcId:0x%02x] [Bj:%d]
Line 2029: [LcId:0x%02x] [BO:%d] [NewRlcCnt:%d] [RlcHdrSize:%d]
Line 2077: [LcId:0x%02x] [BO:%d] [NewRlcCnt:%d] [RlcHdrSize:%d]
Line 2117: [LcId:0x--] [ERROR]: BSR triggered [eBsrType:%d]
Line 2128: [LcId:0x--] BSR Type[%d] bPad[%d] LCGi[0x%X] BSI0123[0x%08X] BSI4567[0x%08X] Size[%d]
Line 2351: [LcId:0x--] [ERROR]: MACCE [BSRSz:0]
Line 2430: [ERROR] Set DMA flag
Line 2440: [ERROR] Set DMA flag
Line 2535: [LcId:0x--] [ERROR]: DMA [m_aMacSduGenInfo:0x0] [GenIndex:%d]
Line 2659: [LcId:0x--] L2LTXMAC_GetHighetstPrioritySRId New(%d), Retx(%d), Status(%d), Total(%d)
Line 2680: [LcId:0x--] LogicalChannelSRDelayTimer start (%d)
Line 2709: [LcId:0x--] RetxBSRTmr [MacEntity:%d] [SchedulingRequestId:%d]
Line 2779: [LcId:0x--] [ERROR] IsBSRTrigger : pMacMain(0x0)
Line 2789: [LcId:0x--] [ERROR] IsBSRTrigger : pTxMacDataSchedulerNr(0x0)
Line 2806: [LcId:0x--] IsBSRTrigger pLCHCfg(0x%X) activeChannelCnt(%d)
Line 2812: [ERROR] IsBSRTrigger activeChannelCnt overflow (%d)
Line 2830: [ERROR] IsBSRTrigger pMacConfig nullptr (%d/%d)
Line 2846: [ERROR] IsBSRTrigger Logical overflow(%d/%d)
Line 2862: [ERROR] IsBSRTrigger Logical overflow(%d/%d/%d)
Line 2871: [ERROR] IsBSRTrigger pMacConfig nullptr (%d/%d)
Line 2879: [LcId:0x--] IsBSRTrigger : LogicalChannelSRDelayTimer start (%d)
Line 2899: [ERROR] IsBSRTrigger pMacConfig nullptr (%d/%d)
Line 2907: [LcId:0x--] IsBSRTrigger : LogicalChannelSRDelayTimer start (%d)
Line 2944: [LcId:0x--] [ERROR] L2LMACTX_TriggerSRbyDiscardPDU : pMacMain(0x0)
Line 2956: [LcId:0x--] [ERROR] L2LMACTX_TriggerSRbyDiscardPDU : pTxMacDataSchedulerNr(0x0)
Line 2967: [LcId:0x--] L2LMACTX_TriggerSRbyDiscardPDU pLCHCfg(0x%X) activeChannelCnt(%d)
Line 2973: [ERROR] TriggerSRbyDiscardPDU activeChannelCnt overflow (%d)
Line 2984: [ERROR] TriggerSRbyDiscardPDU pMacConfigNr (%d/%d)
Line 2994: [LcId:0x--] L2LMACTX_TriggerSRbyDiscardPDU : LogicalChannelSRDelayTimer start (%d)
Line 3167: [ERROR] IsLcIdConfig activeChannelCnt overflow (%d)
