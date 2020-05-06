Line 132: sm_ExtractMCC(0x%x)
Line 145: sm_ExtractMNC(0x%x)
Line 202: DualPdpReq -> %d
Line 206: V42 Bis Test Mode is Enabled
Line 207: Received  Data Comp type -> %d
Line 209: Modified Data Comp type -> %d
Line 213: V42 Bis Test Mode is NOT Enabled Or Rat is not GSM
Line 214: Received  Data Comp type -> %d
Line 229: Selected PdpInstance -> %d
Line 245: ReqType -> %d
Line 281: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg! IMS PDP reject because of MCC(0x505)!!
Line 299: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! No more resource Available !!
Line 311: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Line 325: PDP Activation for this NSAPI already Exists, Sending CNF back to CNS State %d
Line 344: PDP Activation for this TID  already Exists, Sending CNF back to CNS sm_CheckForExistingSession...
Line 352: sm_CheckForExistingSession... False...
Line 382: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg ! Invalid TI requested, Already Used !!
Line 389: Rejecting GAPI's PDP Activation in sm_DecodeSmRegPdpActivationReqMsg !
Line 780: Sending GS19 - PDP Context Request
Line 781: GS19.dwContextId -> %d
Line 782: GS19.dwAssocContextId -> 0x%x
Line 783: GS19.ucNSAPI -> %d
Line 784: GS19.ucSAPI -> %d
Line 785: GS19.ucOrdinal -> %d
Line 786: GS19.ucInitiator -> %d
Line 787: GS19.szApn (size:%d) -> 
Line 819: Rat(%d) AgbLuFlag(%d)
Line 837: Invalid LLCSapi....so do local deactivation.
Line 851: Wrong cause in GMMSM_TRIGGER_IND (%d)
Line 915: Invalid EstablismentReqInitiator (%x) in sm_SendGmmSmEstablishReqMsg. Aborting Operations.!!
Line 1027: SM_DEACTIVATION_ESTAB received but already sent NETWORK_PDP_DEACTIVATION_ACC, ignore sending PdpDeactivationReq!!
Line 1033: SM_DEACTIVATION_ESTAB received in wrong state in sm_DecodeGmmSmEstablishCnfMsg,  Message Ignored!!
Line 1041: Invalid EstablismentReqInitiator,  Message Ignored!!
Line 1049: SM Could not find a Pdp Instance Matching the Nsapi (%x) that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishCnfMsg. Message Ignored !!!
Line 1105: Primary Sid -> %d 
Line 1113: SM Could not find a Pdp Instance Matching the Nsapi (%x)
Line 1121: 2nd Sid -> %d PrimaryInstance = %d Nsapi = %d
Line 1163: ClientMailBoxId -> 0x%02X
Line 1164: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1165: BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
Line 1166:  IP Version -> 0x%02X
Line 1167:  PDP Type -> 0x%02X
Line 1171:  Dual Sid -> 0x%02X
Line 1249: SmNASRelVersion  -> %d
Line 1296: Invalid PdpInstance (%x); Apn Pointer not found. sm_SendPdpActivationReqMsg
Line 1315: Invalid PdpInstance (%x); ProtCfgOpts Pointer not found. sm_SendPdpActivationReqMsg
Line 1354:  LlcSapi -> %d
Line 1356: Neogtiated Qos Data  -> ...
Line 1421: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 1422: RABM Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeRabmSmPdpActivationRspMsg
Line 1434: No Action
Line 1440: Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. No Need to do anything
Line 1447: Mesage Receivedin Wrong SM State, Ignoring Message in sm_DecodeRabmSmPdpActivationRspMsg
Line 1452: Unknown NSAPI Given By RABM in sm_DecodeRabmSmPdpActivationRspMsg, Ignoring Message
Line 1524: sm_CheckQosIe Err
Line 1530: Qos Accepted in sm_DecodePdpActivationAcceptMsg
Line 1560: LlcSapi -> %d
Line 1573: sm_CheckRadioPriorityIe Err
Line 1618: Memory allocation failed... returning
Line 1632: Modified Pdp Address -> ...
Line 1646: changed Pdp Address -> ...
Line 1669: Unknown Pdp Address Length %d 
Line 1674: Pdp Address -> ...Len %d
Line 1691: User Requested Dynamic PDP, but Network Sent No PDP Address -> Rejecting PDP Activation
Line 1717: Prot Cfg Opts Length -> %d
Line 1730: Protocol Config. Options -> ...
Line 1776: Cause = 0x%x, PDPtype =0x%x SendPdpType 0x%x
Line 1787: Setting SIPC Dual PDP support 
Line 1795: Stopping SIPC Dual PDP support 
Line 1868: Sending Cnf to AP as well as MMC
Line 1900: Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 1932: Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 1942: Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Line 1949: Unknown PdTi (%x)  in sm_DecodePdpActivationAcceptMsg
Line 2025: Instance AgbLuFlag = 0x%x
Line 2030: Instance is initiated at HEDGE.. 
Line 2091:  LlcSapi -> %x,ClientMailBoxId -> %x
Line 2094: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 2095: BufferStartOffset -> 0x%02X, BufferOverheadLength -> 0x%02X
Line 2158: SNDCP Confirmed Resource Allocation, Sending Confirmation to GAPI in sm_DecodeSnSmPdpActivationRspMsg
Line 2161: HeaderCompType -> 0x%02X, DataCompType -> 0x%02X
Line 2205: Mesage Received in sm_DecodeRabmSmPdpActivationRspMsg for Rat change. Nothing needs to be done
Line 2211: Rejecting SNDCP Response Due to Incorrect SM State in sm_DecodeSnSmPdpActivationRspMsg
Line 2216: Unknown NSAPI (%x) Given By SNDCP in sm_DecodeSnSmPdpActivationRspMsg
Line 2310: Unexpected PdpType : %d
Line 2315: PdpAddressLength is zero
Line 2324: [SM Cause2] Cause2 =0x%x 
Line 2372: LlcSapi -> %d
Line 2373: Protocol Config. Options Length -> %d
Line 2377: Protocol Config. Options -> ...
Line 2381: PdpAddress Length -> %d
Line 2385: PdpAddress  -> ...
Line 2395: Sending GS15 - PDP Context Activation
Line 2396: GS15.dwContextId -> %d
Line 2648: GMM Requesting SM to Try Other RAT. Nothing needs to be done by SM, GMM will re-try....
Line 2659: Retrying for GMM Est Req.....
Line 2665: Rejecting GAPI's Req for PDP Activaiton in sm_DecodeGmmSmEstablishRejMsg
Line 2688: SM Trying to Modify PDP in sm_DecodeGmmSmEstablishRejMsg.
Line 2730: Starting SM_REC_PDPINST Timer (Instance:%d, Retrial Count:%d)
Line 2738: SM Trying to Deactivate PDP in sm_DecodeGmmSmEstablishRejMsg.
Line 2766: LTE RAT !!! Send Cnf to Gapi This is the Case we does not send PDP DEACT REQ to Network (%d) 
Line 2786: GMM_EST_REJ Arrived in Incorrect SM State in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message...
Line 2794: SM Could not find a Pdp Instance Matching the Nsapi that GMM has sent. Rejecting GAPI's PDP Activation in sm_DecodeGmmSmEstablishRejMsg. Ignoring Message!!!
Line 2855: Protocol Config. Options Length -> %d
Line 2859: Protocol Config. Options -> ...
Line 2877: Sending GS18 - PDP Context End
Line 2878: GS18.dwContextId -> %d
Line 2879: GS18.wTermCode -> %d
Line 2880: GS18.ucInitiator -> %d
Line 3068: sm_CheckCauseIe Err
Line 3095: Protocol Config. Options Length -> %d
Line 3096: Protocol Config. Options -> ...
Line 3107: SM got Reattempt IE :%d
Line 3156: PdpType %d 
Line 3199: Stack = %d.
Line 3214: Orange Requirement
Line 3246: NW sending Reject for Activated PDP.. need to deactivate locally....
Line 3280: Sending STATUS MSG, Cause = (%s) , Incorrect SM State, in sm_DecodePdpActivationRejMsg
Line 3289: Unknown PdTi (%x)  in sm_DecodePdpActivationRejMsg, Sending Status Message
Line 3341: Selected PdpInstance -> %d
Line 3345: Primary NSAPI State = %s  in  sm_DecodeSmRegSecPdpActivationReqMsg
Line 3392: Seconday PDP Activation Rejected . Incorrect Primary NSAPI SM State in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3399: Rejecting GAPI's Secondary PDP Activation Req. GAPI Has Used Up All Allowed Instances in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3411: Rejecting GAPI's Secondary PDP Activation. Ti Already Used in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3417: Rejecting GAPI's Secondary PDP Activation Req Rat Mode Change in  Progress: sm_DecodeSmRegSecPdpActivationReqMsg
Line 3424: Seconday PDP Activation Rejected. Unrecognised Primary NSAPI (%x) in sm_DecodeSmRegSecPdpActivationReqMsg
Line 3655:  PrimaryNsapi %d ,LinkedTi -> 0x%x
Line 3673: Invalid PdpInstance (%x); Tft Pointer not found. sm_SendSecPdpActivationReqMsg
Line 3690:  LlcSapi -> %d ,LinkedTi -> %d
Line 3692: Neogtiated Qos Data  -> ...
Line 3761: Displaying Qos Sent by Network in sm_DecodePdpActivationAcceptMsg
Line 3767: sm_CheckQosIe Err
Line 3773: Qos Accepted in sm_DecodeSecPdpActivationAccMsg
Line 3788: 
Line 3800: LlcSapi -> %d
Line 3812: sm_CheckRadioPriorityIe Err
Line 3883: RABM has already Confirmed, so inform GAPI
Line 3902: Deactivating PDP due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 3912: Sending Status MSG due to Cause:- %s in sm_DecodePdpActivationAcceptMsg
Line 3920: Incorrect SM State in sm_DecodePdpActivationAcceptMsg, Sending STATUS MSG, Cause = (%s)
Line 3927: Unknown PdTi (%x)  in sm_DecodeSecPdpActivationAccMsg
Line 4021: Primary Nsapi -> %d, Nsapi -> %d,  LlcSapi -> %d 
Line 4022: Nsapi -> %d
Line 4023: TiValue -> %d
Line 4024: LlcSapi -> %d
Line 4025: Neogtiated Qos Data  -> ...
Line 4027: Protocol Config. Options Length -> %d
Line 4031: Protocol Config. Options -> ...
Line 4041: Sending GS15 - PDP Context Activation
Line 4042: GS15.dwContextId -> %d
Line 4226: sm_CheckCauseIe Err
Line 4245: SM got Reattempt IE :%d
Line 4333: Sending STATUS MSG, Cause = (%s),  Incorrect SM State, in sm_DecodeSecPdpActivationRejMsg
Line 4339: Unknown PdTi (%x)  in sm_DecodeSecPdpActivationRejMsg
Line 4411: Protocol Config. Options Length -> %d
Line 4415: Protocol Config. Options -> ...
Line 4428: Sending GS18 - PDP Context End
Line 4429: GS18.dwContextId -> %d
Line 4430: GS18.wTermCode -> %d
Line 4431: GS18.ucInitiator -> %d
Line 4601: PDP Address size is over  MAX so it will be max value to MAX 
Line 4611: APN size is over  100 so it will be max value to SM_APN_LENGTH 
Line 4636: PCO size is over  100 so it will be max value to SM_PROT_CFG_OPTS_LENGTH 
Line 4652: Checking For Collision Scenarios in sm_DecodeNetworkPdpActivationReqMsg..... [24.008]-6.1.3.1.5
Line 4665: All Pending MS Requested Activations are of the Same PDP Type.. [24.008]-6.1.3.1.5
Line 4670: Collision Detected ! Network PDP Activation Received Before Reception of PDP Activation Resposne From the Network for the Previous MS Request..... [24.008]-6.1.3.1.5
Line 4671: Checking Ability to Match MS Requested PDP Address and APNs With Networks'..... [24.008]-6.1.3.1.5
Line 4675: MS is Able to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones....... [24.008]-6.1.3.1.5
Line 4681: MS Requested PDP Address and APNs Match Networks' Requested Ones. Ignoring Message...... [24.008]-6.1.3.1.5
Line 4685: MS Requested PDP Address and APNs Do NOT Match Networks' Requested Ones. Rejecting Network Activation...... [24.008]-6.1.3.1.5
Line 4695: PtrApn is NULL or  PrtPdpAddr is NULL
Line 4706: MS is Unable to Check Whether MS Requested PDP Address and APNs Match Networks' Requested Ones. Rejecting Network's PDP Activation...... [24.008]-6.1.3.1.5
Line 4708: Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
Line 4726: All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
Line 4735: For Dynamic Addressing, No Collision is Detected. Upto Network Implementation, ...... [24.008]-6.1.3.1.5
Line 4741: Pending MS Requested Activations are of both types: Static and Dynamic. Implementation is to Reject Network's PDP Activation...... [24.008]-6.1.3.1.5
Line 4746: Error: No Pending MS Requested Activations should be in ACTIVE State..... [24.008]-6.1.3.1.5
Line 4751: No Collisions Detected...... [24.008]-6.1.3.1.5
Line 4761: Checking for Network Initiated PDP Activations for Already Activated PDPs (Matching APN, PDP Address & Pdp Type) in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5
Line 4781: Found a Match, Instance -> %d, Locally Deactivating it
Line 4835: Sending GS19 - PDP Context Request
Line 4836: GS19.dwContextId -> %d
Line 4837: GS19.dwAssocContextId -> 0x%x
Line 4838: GS19.ucNSAPI -> %d
Line 4839: GS19.ucSAPI -> %d
Line 4840: GS19.ucOrdinal -> %d
Line 4841: GS19.ucInitiator -> %d
Line 4842: GS19.szApn (size:%d) -> 
Line 4855: PtrPCO or PtrApn or PtrPdpAddr is NULL
Line 4866: Checking for Duplicated Ti
Line 4874: Found Matching Ti already in Use
Line 4876: Matching TIs means that SM has to Locally De-activate this Session and Activate Again when Deactivate CNF is received...... [24.008]-8.3.2
Line 4929: All Instances Are Used Up (1); in sm_DecodeNetworkPdpActivationReqMsg
Line 4950: PdpAddressLength ,ApnLength values are out of bounds 
Line 4963: Rejecting Network's PDP Activation Due to a Collision in sm_DecodeNetworkPdpActivationReqMsg...... [24.008]-6.1.3.1.5!
Line 4981: All Instances Are Used Up in sm_DecodeNetworkPdpActivationReqMsg
Line 4989: Incorrect TI sent by the Network, Message Ignored...... [24.008]-8.3.2
Line 5091: LinkedTiLength-> %d
Line 5102: LinkedTi after shift -> %d
Line 5197: All Instances Are Used Up in sm_DecodeNetworkSecPdpActivationReqMsg
Line 5204: Incorrect TI = %d sent by the Network, Message Ignored...... [24.008]-8.3.2 
Line 5279: Unexpected PdpType : %d
Line 5300: TiValue -> %d
Line 5302: PdpAddress Length -> %d
Line 5306: PdpAddress -> ...
Line 5310: Apn Length -> %d
Line 5314: Apn -> ...
Line 5321: PCO Length -> %d
Line 5325: PCO -> ...
Line 5344: Sending GS15 - PDP Context Activation
Line 5345: GS15.dwContextId -> %d
Line 5596: SEC PDP Primary PdpInstance -> %d /InstanceFound -> %d/
Line 5604: SEC PDP Instance -> %d/ Cid %d
Line 5643: TiValue -> %d
Line 5645: PrimaryNsapi -> %d
Line 5646: TftLength -> %d
Line 5647: Tft-> ...
Line 5649: QoS from NW -> ...
Line 5654: PCO Length -> %d
Line 5658: PCO  -> ...
Line 5678: Sending GS15 - PDP Context Activation
Line 5679: GS15.dwContextId -> %d
Line 5887: Ti -> %d, TiOriginator -> %d 
Line 5898: ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 5915: Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkPdpActivationRejMsg !
Line 5948: Ti -> %d, TiOriginator -> %d 
Line 5959: ProtConfigOptLen is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 5976: Rejecting GAPI's request, RAT Change in progress in sm_DecodeSmRegNetworkSecPdpActivationRejMsg !
Line 6366: State = %d
Line 6367: AgbLuFlag = 0x%x
Line 6378: IU_MODE_VALID_CONTEXT CONTEXT Valid For UMTS.
Line 6386: LlcSapi = %d
Line 6392: AGB_MODE_VALID_CONTEXT  Valid For GPRS.
Line 6435: S1 Mode supported. Setting Traffic class to Interactive or Background ..
Line 6451: PDP Length %d
Line 6472: PDP address field should be empty from REL-10. ReqType =%d
Line 6476: ONESKU. ReqType =%d
Line 6489: AP IP Len =%d/CP IP Len =%d
Line 6544: sm_StoreSecReqDetails PcoLength %d
Line 6616: Error in Lengths of Data which should be in the following range:  0 < PdpAddrLen <= 16, 0 <= ApnLength <= 100, 0 <= ProtCnfOptionsLen <= 251
Line 6660: GAPI requested 0 kbps for  both UL and DL bit rate .. rejecting GAPI request
Line 6703: Checking Instance -> %d
Line 6753: Checking for a Match Between Any Pending PDP Activation By MS <Pdp Address and APN> and Network's ones......
Line 6760: Checking Instance -> %d
Line 6769: PDP Addresses Match...
Line 6778: APns Match...
Line 6783: APns Do NOT Match...
Line 6788: APns Do NOT Match...
Line 6793: PDP Addresses Do NOT Match...
Line 6798: PDP Addresses Do NOT Match...
Line 6804: There were no Instances of Pending PDP Activations By MS
Line 6948: Establish Request Initiator -> %s
Line 6987: GMM Establish Request Cause -> %s
Line 7025: GAPI Requested PDP Type -> %s
Line 7080: Network PDP Type -> %s
Line 7123: Radio Priority -> %s
Line 7169: Invalid Packet Flow Id (%x) used in sm_DisplayPacketFlowId
Line 7174: Packet Flow Id -> %x
Line 7183: Max Bit Rate For Uplink  -> %s
Line 7222: Activation Cause -> %s
Line 7239:  TI -> %x,  TI Originator -> %s 
Line 7244:   LlcSapi -> %x, Client MailBox Id -> %x
Line 7246: Given PdpAddress Length -> %x
Line 7247: Given PdpAddress  -> ...
Line 7249: 
Line 7251: 
Line 7268:  TI -> %x, TI Originator -> %s,PrimaryNsapi -> %x
Line 7273: Given Traffic Flow Template Length -> %x
Line 7274: Given Traffic Flow Template  -> ...
Line 7276: Sndcp Buffer Overhead Length -> %x
Line 7277: Sndcp Buffer Start Offset -> %x
Line 7278: 
Line 7280: 
Line 7321: GS15.dwIpAddress -> %d.%d.%d.%d
Line 7326: GS15.strIpV6Address ->
Line 7333: GS15.dwIpAddress -> %d.%d.%d.%d
Line 7336: GS15.strIpV6Address ->
Line 7344: GS15.dwDns1 -> %d.%d.%d.%d
Line 7351: GS15.dwDns2 -> %d.%d.%d.%d
Line 7357: GS15.strIpV6Dns1 ->
Line 7364: GS15.strIpV6Dns2 ->
