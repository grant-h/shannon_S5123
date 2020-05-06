Line 464: ------------------------- SM TASK ----------------------------
Line 506: [Test Code] ....SsCurrentStackId =%d
Line 527: Recieved Message has an Error
Line 538: NULL pointer in sm_Task
Line 544: Processing the saved SM PDP message
Line 602: Dual SIM Status -> %d
Line 707: sm_V42BisTestMode is %d
Line 728: Scratch Pad Instance -> %d
Line 778: HcommonRegNasRel =>%d/SmNASRelVersion => %d
Line 836: SmCurrentStackId := %d
Line 883: Saving the message in SM
Line 956: %s
Line 959: Displaying Received Message Contents:
Line 1026: Invalid TI value received
Line 1040: ERROR -> Unused Message number: %x !!!
Line 1044: %s
Line 1053: Displaying Received Message Contents:
Line 1066: ERROR -> Unknown Message : %x !!!
Line 1085: Message 0x%x Length is too short. Length =  %d !!!
Line 1138: sm_SendNsDmEventToNS.....SessionNumber= %d, Timer=%d , Event =%d
Line 1176: Sending Message ...... 
Line 1279: Attempting to Write to State Using Invalid State (%x) in sm_SetState
Line 1309: SM Initialisation State -> SM_NOT_INITIALISED -> All Messages except SMREG_INIT_REQ will be Ignored.. 
Line 1486: This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Line 1495: Reserved NSAPI Has used in Primary  (%x) in sm_MarkAssociateInstsToTearDown
Line 1501: Attempting to Read SM Data Using Invalid PdpInstance  (%x) in sm_MarkAssociateInstsToTearDown
Line 1557: This is Some other Primary PDP PdpInstance (%x) in sm_MarkAssociateInstsToTearDown
Line 1566: Reserved NSAPI Has used in Primary  (%x) in sm_MarkAssociateInstsToTearDown
Line 1572: Attempting to Read SM Data Using Invalid PdpInstance  (%x) in sm_MarkAssociateInstsToTearDown
Line 1620: TiAvailable -> %d, PdpInstance ==%d
Line 1690: Nsapi (%x) Already Used
Line 1698: Nsapi (%x) is Outside Valid Range. 5 <= Nsapi <= 15
Line 1846: Received => TiValue(%d),Originator(%d)
Line 1850: Instance(%d) => TiValue(%d),Originator(%d)
Line 1883: [KNY] Instance(%d) => TiValue(%d),Originator(%d) Flag(%d) 
Line 1983:  Cid->  %d
Line 2043: Cid (%x) Already Used
Line 2051: Nsapi (%x) is Outside Valid Range.
Line 2967: Netowk Sent PdpType Organisation as ETSI_ALLOCATED which means that PdpType has to be PPP, but network sent nother Type (%x) in sm_DetermineAndSetPdpType
Line 2988: Unknown IETF PDP type (%x) in sm_DetermineAndSetPdpType
Line 3684: Invalid ApnLength: %d, so returning with out copying APN.
Line 4063: NIDB enabled 
Line 4148: [CHAP CHALLENGE_RANDOM]chap_len :%d/RAND len= %d ,index =%d
Line 4154: [CHAP CHALLENGE_RANDOM]id =%d /chall_len :%d/index = %d 
Line 4175: [CHAP CHALLENGE_RESP]id =%d /chall_len :%d/index = %d 
Line 4233: SmNASRelVersion ==> %d 
Line 4353: BuildNSetProtConfigOpts - AuthType:%d DnsIpv4AddrReq:%d DnsIpv6AddrReq:%d
Line 4361: Fail sm_BuildProtConfigOpts() in sm_BuildNSetProtConfigOpts()
Line 4365: ProtConfigOpts Dump size:%d
Line 4370: PCO length is oversize
Line 4488: Enter sm_DecodeProtConfigOpts..
Line 4493: Error: ProtConOpt[0] is invalid - 0x%X
Line 4504: PROTOCOL ID:0x%x LEN:%d
Line 4541: Error: IP Opt Length(=%d) is invalid
Line 4557: IP_ADDR Dump (size:%d)
Line 4566: Error: DNS1 Opt Length(=%d) is invalid
Line 4579: DNS1 ADDR IP = %d.%d.%d.%d
Line 4590: DNS1 ADDR IPv6 Dump (size:%d)
Line 4606: Error: SM_MUST_DISPLAY_LEVEL DNS2 Opt Length(=%d) is invalid
Line 4619: DNS2 ADDR IP = %d.%d.%d.%d
Line 4630: DNS2 ADDR IPv6 Dump (size:%d)
Line 4643: Error: Unknown configuration option type=0x:%X size=%d
Line 4657: Error: Unknown IPCP Code:%d
Line 4682: Error: DNS_IPV6_ADDR Length(=%d) is invalid
Line 4704: Error: DNS_IPV4_ADDR Length(=%d) is invalid
Line 4723: Error: PCSCF_IPV6_ADDR Length(=%d) is invalid
Line 4742: Error: PCSCF_IPV4_ADDR Length(=%d) is invalid
Line 4755: Error: IMCN SIG FLG Length(=%d) is invalid
Line 4774: Error: MSISDN Length crossed limit (=%d) 
Line 4791: Error: DSMIPV6 HA ADDR Length(=%d) is invalid
Line 4805: Error: DSMIPV6 HN PREFIX Length(=%d) is invalid
Line 4818: Error: DSMIPV6 HA IPV4 ADDR Length(=%d) is invalid
Line 4833: Error: Invalid Policy ctrl rej cause length  (=%d) 
Line 4865: Error: Invalid IPv4 MTU length  (=%d) 
Line 4879: Error: Invalid IFOM Support length  (=%d) 
Line 4888: Error: Unknown Potocol ID (=0x%X)
Line 4894: Error: Length of protocol id contents is zero
Line 5535: APN matching with T3396 data. Without APN case ( Length =0)
Line 5545: APN matching with T3396 data
Line 5633: sm_NeedToStopT3396 (Cause =%d, PdpInstance =%d)
Line 5642: sm_NeedToStopT3396 (APN Length =%d)
Line 5660: [RSRA] ApnLength = %d
Line 5732: T3396 APN Length 0 = %d
Line 5749: T3396 Val 0 = %d
Line 5750: T3396 Cause 0 = %d
Line 5772: T3396 APN Length 1 = %d
Line 5789: T3396 Val 1 = %d
Line 5790: T3396 Cause 1 = %d
Line 5924: T3396 : Index=%d,T3396Value=%d,TimerDeactivated=%d,ApnLength=%d,Cause=%d
Line 6107: ....timer deactivated
Line 6117: ....timer duration = %d(seconds)
Line 6127: ....timer duration = %d(seconds)
Line 6136: ....timer duration = %d(seconds)
Line 6145: ....timer duration = %d(seconds)
Line 6155: ....timer duration = %d(decihours)
Line 6166: ....timer duration = %d(seconds)
Line 7740: Checking Qos Parameters in sm_CheckAndStoreNegotiatedQos. Please Wait.....
Line 7753: QosIeLength = %d
Line 8011: UE received 0 kbps for  both UL and DL bit rate. NW QoS not accepted
Line 8194: DelayClass ..... O.K.
Line 8198: Network's DelayClass > MinQos.DelayClass OR MinQos.DelayClass != 0  OR  Network's DelayClass == 0 !!!, Activation Will be Rejected
Line 8221: ReliabilityClass ..... O.K.
Line 8225: Network's ReliabilityClass > MinQos.ReliabilityClass  OR MinQos.ReliabilityClass != 0  OR  Network's ReliabilityClass == 0 !!!, Activation Will be Rejected
Line 8248: PrecedenceClass ..... O.K.
Line 8252: Network's PrecedenceClass > MinQos.PrecedenceClass  OR MinQos.PrecedenceClass != 0  OR  Network's PrecedenceClass == 0 !!!, Activation Will be Rejected
Line 8276: PeakThroughput ..... O.K.
Line 8280: Network's PeakThroughput < MinQos.PeakThroughput OR MinQos.PeakThroughput != 0  OR  Network's PeakThroughput == 0 !!!, Activation Will be Rejected
Line 8305: MeanThroughput ..... O.K.
Line 8309: Network's MeanThroughput < MinQos.MeanThroughput  OR MinQos.MeanThroughput != 0  OR  Network's MeanThroughput == 0 !!!, Activation Will be Rejected
Line 8332: TrafficClass ..... O.K.
Line 8336: Network's TrafficClass < MinQos.TrafficClass  OR  Network's TrafficClass == 0!!!, Activation Will be Rejected
Line 8361: ResidualBer ..... O.K.
Line 8365: Network's ResidualBer < MinQos.ResidualBer (unless it is 7) OR  Network's ResidualBer is out of Range (0 < x < 0xf) !!!, Activation Will be Rejected
Line 8405: SduErrorRatio ..... O.K.
Line 8409: Network's SduErrorRatio < MinQos.SduErrorRatio  OR  Network's SduErrorRatio is out of Range (0 < x < 0xf) !!!, Activation Will be Rejected
Line 8434: DeliveryOfErrSdu ..... O.K.
Line 8438: Network's DeliveryOfErrSdu < MinQos.DeliveryOfErrSdu  OR  Network's DeliveryOfErrSdu is out of Range (0 < x < 7) !!!, Activation Will be Rejected
Line 8462: MaxBitRateUplink ..... O.K.
Line 8466: Network's MaxBitRateUplink < MinQos.MaxBitRateUplink  OR  Network's MaxBitRateUplink == 0 !!!, Activation Will be Rejected
Line 8490: MaxBitRateDownlink ..... O.K.
Line 8494: Network's MaxBitRateDownlink < MinQos.MaxBitRateDownlink  OR  Network's MaxBitRateDownlink is Out of Range (x > 0) !!!, Activation Will be Rejected
Line 8519: DeliveryOrder ..... O.K.
Line 8523: Network's DeliveryOrder < MinQos.DeliveryOrder  OR  Network's DeliveryOrder is Out of Range (0 < x < 3) !!!, Activation Will be Rejected
Line 8547: MaxSduSize ..... O.K.
Line 8551: Network's MaxSduSize < MinQos.MaxSduSize  OR  Network's MaxSduSize is Out of Range (0 < x < 0xff) !!!, Activation Will be Rejected
Line 8578: TransferDelay ..... O.K.
Line 8583: TransferDelay Ignored Due to Traffic Class ..... O.K.
Line 8589: Network's TransferDelay > MinQos.TransferDelay  OR  Network's TransferDelay is Out of Range (0 < x < 0x3f) !!!, Activation Will be Rejected
Line 8616: SignallingIndication ..... O.K.
Line 8626: Network's SignallingIndication > MinQos.SignallingIndication  OR  Network's SignallingIndication == 0 !!!, Activation Will be Rejected
Line 8651: SourceServiceDescriptor ..... O.K.
Line 8656: SourceStatisticsDescriptor Ignored Due to Traffic Class ..... O.K.
Line 8662: Network's SourceServiceDescriptor > MinQos.SourceServiceDescriptor  OR  Network's SourceServiceDescriptor == 0 !!!, Activation Will be Rejected
Line 8736: TrafficHandlingPriority ..... O.K.
Line 8741: TrafficHandlingPriority Ignored Due to Traffic Class ..... O.K.
Line 8747: Network's TrafficHandlingPriority > MinQos.TrafficHandlingPriority  OR  Network's TrafficHandlingPriority == 0 !!!, Activation Will be Rejected
Line 8783: Unable To Convert the Unknown Reliability Class (0x%02X) to SduErrorRatio in sm_MapPreRel99ToRel99QosParameters
Line 8817: Unable To Convert the Unknown Reliability Class (0x%02X) to Residual Bit Error Ratio in sm_MapPreRel99ToRel99QosParameters
Line 8851: Unable To Convert the Unknown Reliability Class (0x%02X) to Delivery of erroneous SDUs in sm_MapPreRel99ToRel99QosParameters
Line 8924: Unable To Convert the Unknown PeakThroughput (0x%02X) to MaxBitRateUplink in sm_MapPreRel99ToRel99QosParameters
Line 8968: Converting Pre Rel 99 to Rel 99 Qos Data, 
Line 8996: Unable To Convert the Unknown Delay Class (0x%02X) to Traffic Class in sm_MapPreRel99ToRel99QosParameters
Line 9026: Unable To Convert the Unknown Delay Class (0x%02X) to TrafficHandlingPriority in sm_MapPreRel99ToRel99QosParameters
Line 9134: SM RATMode: %s -> %s
Line 9158: Instance --> %d,sm_EstReqSetRetryCount-> %d
Line 9170: sm_SessionData[Instance].sm_GmmEstReqRetryCount-> %d
Line 9185: RAT Mode -> %s
Line 9221: RAT Mode Status -> SM_RATMODE_CHANGE_IN_PROGRESS
Line 9225: RAT Mode Status -> SM_RATMODE_CHANGE_ENDED
Line 9248: Wrong Timer_catagory!!!!
Line 9280: Wrong Timer_catagory!!!!
Line 9312: Wrong Timer_catagory!!!!
Line 9343: Wrong Timer_catagory!!!!
Line 9604: Pdp Originator -> %s
Line 9642: Cause -> %s
Line 10009: Active Sessions :
Line 10056: PdpInstance = %d, Nsapi = %d , PrimaryNsapiAssociated =%x,Ti = %d,Originator = %s , State = %s
Line 10059:    APN:%c %c %c  ,Apn Length = %d, Sid =%d
Line 10074: Cid=%d
Line 10113: SmNASRelVersion  -> %d
Line 10137: Traffic Flow Template Length   -> %d
Line 10138: Traffic Flow Template Settings ->....
Line 10166: Traffic Flow Template Length   -> %d
Line 10167: Traffic Flow Template Settings ->....
Line 10194: Protocol COnfiguration Options Length   -> %d
Line 10195: Protocol COnfiguration Options ->....
Line 10263: Removing Nsapi %x, Instane %d
Line 10323: sm_SessionData[%d] Nsapi %x State -> %s
Line 10352: No Session Found with the Same PDP Address. Locally Deactivating the current Instance (%x)
Line 10396: sm_SessionData[%d] Nsapi %x State -> %s
Line 10430: No Session Found with the Same PDP Address. Locally Deactivating the current Instance (%x)
Line 10612: Wrong PdpInstance
Line 10667: Reliability Class -> %s
Line 10705: Delay Class -> %s
Line 10743: Precedence Class -> %s
Line 10781: Peak Throughput -> %s
Line 10819: Mean Throughput -> %s
Line 10857: Delviery of Erroneous SDUs -> %s
Line 10895: Delviery Order -> %s
Line 10933: Traffic Class -> %s
Line 10988: Max SDU Size -> %d
Line 10996: Max SDU Size  -> %s
Line 11052: Max Bit Rate For Uplink -> %d KBits / Sec
Line 11060: Max Bit Rate For Uplink  -> %s
Line 11116: Max Bit Rate For Downlink -> %d KBits / Sec
Line 11124: Max Bit Rate For Downlink  -> %s
Line 11143: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].Nsapi -> %d
Line 11172: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].PdpAddressLength -> %d
Line 11176: PdpAddress  -> ...
Line 11178: PdpAddress  -> %s
Line 11209: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].ApnLength -> %d
Line 11213: Apn -> ...
Line 11245: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].ProtConfigOptsLength -> %d
Line 11249: ProtConfigOpts  -> ...
Line 11251: ProtConfigOpts  -> %s
Line 11282: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].TftLength -> %d
Line 11286: TFT  -> ...
Line 11316: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[%d].State -> %s
Line 11363: SDU Error Ratio -> %s
Line 11401: Residual Bit Error Rate -> %s
Line 11439: Traffic Handling Priority -> %s
Line 11493: Transfer Delay -> %d ms
Line 11501: Max Bit Rate For Uplink  -> %s
Line 11556: Guaranteed Bit Rate For Uplink -> %d KBits / Sec
Line 11564: Guaranteed Bit Rate For Uplink  -> %s
Line 11619: Guaranteed Bit Rate For Downlink -> %d KBits / Sec
Line 11627: Guaranteed Bit Rate For Downlink  -> %s
Line 11664: Souce Statistics Descriptor  -> %s
Line 11702: Signalling Indiation   -> %s
Line 11744: MaxBitRateDownlinkExtended -> %d KBits / Sec
Line 11751: MaxBitRateDownlinkExtended -> %d MBits / Sec
Line 11758: MaxBitRateDownlinkExtended -> %d MBits / Sec
Line 11768: MaxBitRateDownlinkExtended -> %s
Line 11809: GuaranteedBitRateDownlinkExtended -> %d KBits / Sec
Line 11816: GuaranteedBitRateDownlinkExtended -> %d MBits / Sec
Line 11823: GuaranteedBitRateDownlinkExtended -> %d MBits / Sec
Line 11833: GuaranteedBitRateDownlinkExtended  -> %s
Line 11876: MaxBitRateUplinkExtended -> %d KBits / Sec
Line 11883: MaxBitRateUplinkExtended -> %d MBits / Sec
Line 11890: MaxBitRateUplinkExtended -> %d MBits / Sec
Line 11900: MaxBitRateUplinkExtended -> %s
Line 11941: GuaranteedBitRateUplinkExtended -> %d KBits / Sec
Line 11948: GuaranteedBitRateUplinkExtended -> %d MBits / Sec
Line 11955: GuaranteedBitRateUplinkExtended-> %d MBits / Sec
Line 11965: GuaranteedBitRateUplinkExtended  -> %s
Line 12070: SM_INSTANCE_ASSIGNED_FLG               -> %s
Line 12087: SM_MOD_ACC_RECEIVED_FLG                -> %s
Line 12104: SM_TEAR_DOWN_REQ_FLG                   -> %s
Line 12121: SM_SECONDARY_ACT_REQ_FLG               -> %s
Line 12194: SM_ACTIVATION_ACC_BY_NTWK_FLG          -> %s
Line 12211: SM_RABM_OR_SNDCP_ACT_RSP_RECEIVED_FLG  -> %s
Line 12228: SM_GAPI_DEACT_CNF_MODE_FLG             -> %s
Line 12245: SM_MS_INITIATED_MOD_REQ_FLG            -> %s
Line 12262: SM_LLC_MODIFIED_FLG                    -> %s
Line 12279: SM_TFT_MODIFIED_FLG                    -> %s
Line 12296: SM_PCO_MODIFIED_FLG                    -> %s
Line 12309: Number Of Pdp Instances -> %d
Line 12326: SM_QOS_MODIFIED_FLG                    -> %s
Line 12344: SM_COVERAGE_REGAINED_FLG               -> %s
Line 12361: SM_PDP_ACT_REJECTED_BY_NETWORK_FLG     -> %s
Line 12383: 
Line 12499: No Flags are Set in Session %d !
Line 12549: 
Line 12556: RetransmissionCount[%s]  -> 0x%x
Line 12558: EstablismentReqInitiator  -> 0x%x
Line 12559: SndcpBufferStartOffset    -> 0x%x
Line 12560: SndcpBufferOverheadLength -> 0x%x
Line 12609: 
Line 12610: Ti                 -> %x
Line 12611: TiOriginator       ->%s 
Line 12612: ExtendedTiUsed     -> %s
Line 12613: Nsapi              -> %x
Line 12614: PrimaryNsapi       -> %x
Line 12615: LlcSapi            -> %x
Line 12616: LinkedTi           -> %x
Line 12618: Cid                -> %d
Line 12890: Invalid Associated PdpInstance (%x) in sm_FindAssociatePdps
Line 12899: Invalid Primary PdpInstance (%x) in sm_FindAssociatePdps
Line 12926: 
Line 12928: PdpAddressLength     -> %x
Line 12932: PdpAddress           -> ....
Line 12936: ProtConfigOptsLength -> %x
Line 12940: ProtConfigOpts      -> ....
Line 12943: ApnLength            -> %x
Line 12947: AccessPointName      -> ....
Line 12951: TftLength            -> %x
Line 12955: TrafficFlowTemplate  -> ....
Line 12959: ModReqTFTLength       -> %x
Line 12963: ModReqTFT         -> ....
Line 13014: 
Line 13025: %d. %s
Line 13035: %d. %s
Line 13099: Linked TI-> %d
Line 13105: PrimaryNsapi %d
Line 13109: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[LoopCount].ContextIds.Ti -> %d
Line 13115: Found a matching PDP session for LinkedTi sent by NW with NSAPI-> %d
Line 13138: Qostlv == NULL, Length = %d
Line 13148: Converting QoS from TLV to Normal format. Please Wait.... Length = %d .
Line 13278: Invalid PdpInstance (%x); ProtCfgOpts Pointer not found.
Line 13305: Prot Cfg Opts Length -> %d
Line 13327: Protocol Config. Options -> ...
Line 13412: numOfTft is greater than max length. Setting it to 0 to prevent out of bounds issue. 
Line 13508: ---------------------------------------------
Line 13509:  Display Stored TFT Data Instance:%d
Line 13510: ---------------------------------------------
Line 13521:   Filter Id: %d, Dir:Downlink
Line 13523:   Filter Id: %d, Dir:Uplink
Line 13525:   Filter Id: %d, Dir:Bidirectional
Line 13527:   Filter Id: %d, Dir:pre Rel-7
Line 13531:   Ip type: IPV6
Line 13534:   Ip type: IPV4
Line 13539:   Type of service:%d mask:%d
Line 13544:   Next header type:%d
Line 13549:   Protocol number:%d(0x%x)
Line 13555:   IPv4 remote address: %d.%d.%d.%d
Line 13557:   IPv4 address mask: %d.%d.%d.%d
Line 13563:   IPv6 remote address: %X:%X:%X:%X:%X:%X...
Line 13565:   IPv6 address mask: %X:%X:%X:%X:%X:%X...
Line 13570:   Local port range: %d ~ %d
Line 13575:   Remote port range: %d ~ %d
Line 13580:   Single local port: %d
Line 13585:   Single remote port: %d
Line 13590:   Flow label: 0x%X
Line 13595:   Security parameter index: 0x%X
Line 13598: ---------------------------------------------
Line 13620: ---------------------------------------------
Line 13621:  Display TFT Data (size:%d)
Line 13622: ---------------------------------------------
Line 13629:   Filter Id: %d, Dir:Downlink
Line 13631:   Filter Id: %d, Dir:Uplink
Line 13633:   Filter Id: %d, Dir:Bidirectional
Line 13635:   Filter Id: %d, Dir:pre Rel-7
Line 13639:   Ip type: IPV6
Line 13641:   Ip type: IPV4
Line 13645:   Type of service:%d mask:%d
Line 13650:   Next header type:%d
Line 13655:   Protocol number:%d(0x%x)
Line 13661:   IPv4 remote address: %d.%d.%d.%d
Line 13663:   IPv4 address mask: %d.%d.%d.%d
Line 13669:   IPv6 remote address: %X:%X:%X:%X:%X:%X...
Line 13671:   IPv6 address mask: %X:%X:%X:%X:%X:%X...
Line 13676:   Local port range: %d ~ %d
Line 13681:   Remote port range: %d ~ %d
Line 13686:   Single local port: %d
Line 13691:   Single remote port: %d
Line 13696:   Flow label: 0x%X
Line 13701:   Security parameter index: 0x%X
Line 13704: ---------------------------------------------
Line 13726: ---------------------------------------------
Line 13727:  sm_CheckTftCreatebyUE  Primary %d
Line 13728: ---------------------------------------------
Line 13735: PrimaryNsapi %d
Line 13739: StaticGlobalSmData[SmCurrentStackId].sm_SessionData[LoopCount].ContextIds.Ti -> %d
Line 13969: 
Line 13975: 
Line 13981:  NSAPI->  %d
Line 13987: 
Line 13995:  NORMAL Initialisation  of %s  
Line 14001:  GSM to UMTS Initialisation of %s 
Line 14007:  UMTS to GSM  Initialisation of %s  
Line 14014:  Unknown  Initialisation Type (%x) in %s  
Line 14022: Invalid PDP instance %x in  %s
Line 14406: Session (%d) is Now acting as the Primary Nsapi (%d) in sm_FindAssociatePdps
Line 14421: Current Number of associated PDPs -> %d in sm_FindAssociatePdps
Line 14752: Set Deactvate Information = %d
Line 14771: Get Deactvate Information = %d
Line 14786: sm_GetSimProvider Funct ... 
Line 14804: sm_CheckOperatorIdFromImsi ... 
