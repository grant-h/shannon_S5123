Line 51: SDS_SetMTU :: No Interface for CID [%d]
Line 57: SDS_SetMTU :: ifx [%d] MSS [%d]
Line 59: SDS_SetMTU :: No IFP for CID [%d]
Line 81: SDS_SetMSS :: No Interface for CID [%d]
Line 86: SDS_SetMSS :: ifx [%d] MSS [%d]
Line 106: SDS_SetMSS :: No Interface for CID [%d]
Line 111: SDS_DisableUDPCksumValidation :: ifx [%d] Cksum_Disable [%d]
Line 123: [ifx:%d] is not empty
Line 142:  IPv4 ADDR: Add Address = 0x%x
Line 146: Ipv4_Add_Address: Failed with error %x
Line 148: IPv4 Address Successfully Added
Line 170: Ipv6_Add_Address: V_ip6_use_tempaddr: %d, ifx: %d, cid: %d
Line 175: Ipv6_Add_Address: req.ifra_flags : 0x%x
Line 184: Ipv6_Add_Address: Failed with error %x
Line 186: IPv6 Address Successfully Added
Line 210: TCPIP_Interface_Create: free if index not available.. returning NULL
Line 255: TCPIP_Interface_Create: ipv6_use_temp_addr: %d
Line 261: Interface Created with ContextID [%d] if index [%d]
Line 311: SDS_TCPIP_create_if: Entry  protoType %d 
Line 326: TCPIP CREATE LTE IF : Create Interface Failed
Line 340: [linkLocalIP]:
Line 343: TCPIP CREATE LTE IF: Create IPv4v6 Interface, ADD IPv4 ADDR => 0x%x
Line 347: TCPIP CREATE LTE IF : NET DEVICE INFO is NULL
Line 365: get_ifsrcaddr : No interface associated with this id
Line 376: get_ifsrcaddr : ifa is NULL
Line 396: get_if6srcaddr : No interface associated with this id
Line 417: get_if6srcaddr : ifa is NULL
Line 429: IPv6 MAP IF: ContextID => %d 
Line 434: IPv6 MAP: ContextID [%d] mapped to IFX [%d]
Line 460: SDS_if_locate_by_ContextID found IFX: %d with CID: %d
Line 475: SDS_Get_StackId_by_Cid >> ifx: %d, StackId: %d, CID: %d
Line 502: DELETE IF: Interface pointer is NULL
Line 571: TCPIP DEL LTE IF : DELETING INTERFACE => If Index [%d] 
Line 578: TCPIP DEL LTE IF: Free NET DEVICE INFO
Line 595: [RSRA] TCPIP DEL LTE IF: Delete Address Timer 
Line 602: [RSRA] TCPIP DEL LTE IF: Delete router life Timer 
Line 609: [RSRA] TCPIP DEL LTE IF: Delete valid Timer 
Line 616: [RSRA] TCPIP DEL LTE IF: Delete recovery Timer 
Line 623: [RSRA] TCPIP DEL LTE IF: rs_retransmission_timer Timer 
Line 631: [RSRA] TCPIP DEL LTE IF: rs_retransmission_timer Timer 
Line 638: TCPIP DEL LTE IF: pNetDevice is NULL!!
Line 649: TCPIP CREATE INTERFACE: INVALID OPMODE [%d]
Line 653: TCPIP CREATE INTERFACE: FAILED
Line 671: SDS_start_network_cnf_rsra: pNetDevice is allocated. line=%d
Line 676: TCPIP START NETWORK: IPV4 ADDR => 0x%x 
Line 696: Start TCPIP Network creation
Line 704: Create Interface IPv6 type without RSRA
Line 707: [pNetDevice->localaddr]
Line 710: TCPIP START NETWORK : INTERFACE CREATION FAILED
Line 719: TCPIP START NETWORK : invalid contextID:no ifx exists
Line 730: TCPIP START NETWORK : contextID %d  ifx %d 
Line 731: TCPIP START NETWORK : bRsRaRequired [%d] 
Line 732: TCPIP START NETWORK : enActiveStack [%d] 
Line 733: TCPIP START NETWORK : eCreateReqType [%d] 
Line 734: TCPIP START NETWORK : enProtoType [%d] 
Line 737: SDS_start_network_cnf_rsra: pNetDevice is NULL!!
Line 751: SDS_start_network_cnf: pNetDevice is allocated. line=%d
Line 755: TCPIP START NETWORK: IPV4 ADDR => 0x%x
Line 776: Create TCPIP Interface
Line 779: TCPIP START NETWORK : INTERFACE CREATTION FAILED
Line 783: TCPIP START NETWORK: NET DEVICE INFO => NULL
Line 820: TCPIP PROCESS MSG: Convert OS BUF to MBUF FAILED
Line 831: [TCP DUMP DL]
Line 840: TCPIP PROCESS MSG: RECV CB for IF is not available
Line 851: [MUX_Module] [IPv6] iret_idx: %d
Line 854: [MUX_Module] [IPv6] ipv6_Is_waitingForRA: %d
Line 857: [MUX_Module] [IPv6] ipv6_Is_waitingForRA: FALSE
Line 866: [MUX_Module] [IPv6] iret_idx: %d
Line 869: [MUX_Module] [IPv6] ipv6_Is_waitingForRS: %d
Line 872: [MUX_Module] [IPv6] ipv6_Is_waitingForRS: FALSE
Line 901: [Error] SDS_NDP_Start >> index %d
Line 904: SDS_NDP_Start >> index %d 
Line 908: [RSRA] Error> valid timer expired
Line 915: [RSRA] Error> ifp is NULL
Line 919: SDS_NDP_Start >> if_index %d 
Line 924: SDS_NDP_Start >> sock_id: %d 
Line 927: *** Raw Socket create failed *** 
Line 939: *** Raw Socket binding failed *** with error %d
Line 961: SDS_NDP_Start >> grp address : 
Line 975: [RSRA] socket already exists.. skip to create socket and MUX filter on with cid: %d
Line 986: NDP start -No socket associated with sid..returning..
Line 993: NDP start - MBUF not available..
Line 1015: [RSRA] create rs_retransmission_timer
Line 1024: [RSRA] CREATE_REQ_TYPE_HANDOVER case, so change retrans timer interval
Line 1031: [RSRA] start retransmission timer(%d)
