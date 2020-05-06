Line 427: [HAL][PktProc] InitPktProcPktFilter
Line 460: [HAL][PktProc] InitPktProcPktFilterHiddenAct
Line 657: [HAL][PktProc][ERROR] SetPktProcRigBufAddr (type=%d, pBaseReg=0)
Line 933: [HAL][PktProc] IPv4 Packet Filter (BitMask: 0x%x, Protocol: 0x%x, SrcIp: 0x%x, DstIp: 0x%x, SrcPort: 0x%x, DstPort: 0x%x, Icmp: 0x%x)
Line 1041: [HAL][PktProc] IPv6 Packet Filter (BitMask: 0x%x, Protocol: 0x%x, SrcIp: 0x%x, DstIp: 0x%x, SrcPort: 0x%x, DstPort: 0x%x, Icmp: 0x%x)
Line 1045: [HAL][PktProc] Invalid Ip Version for PktProc Filter (V/E field)
Line 1210: [HAL][PktProc] HiddenAct uses the default packet filter (Chid (%d),  PdnType (%d), IpType (%d), HiddenAct (%d))
Line 1234: [HAL][PktProc] Hal_AddPktProcChIdFilter skip (DIT Disabled, Chid (%d), Offset (%d), PdnType (%d), IpType (%d), HiddenAct (%d))
Line 1253: [HAL][PktProc] Hal_AddPktProcChIdFilter skip (DIT Disabled, Chid (%d), Offset (%d), PdnType (%d), IpType (%d), HiddenAct (%d))
Line 1340: [HAL][PktProc] Invalid PDN Type for PktProc
Line 1345: [HAL][PktProc] Hal_AddPktProcChIdFilter (Chid (%d), Offset (%d), PdnType (%d), IpType (%d), HiddenAct (%d))
Line 1372: [HAL][PktProc] Hal_DeletePktProcChIdFilter - Do not delete Hidden Act Filter (Chid (%d), IpType (%d))
Line 1378: [HAL][PktProc] Hal_DeletePktProcChIdFilter - Do not delete twice (Chid (%d), IpType (%d))
Line 1391: [HAL][PktProc] Invalid PDN's Ip Version for PktProc
Line 1397: [HAL][PktProc] Hal_DeletePktProcChIdFilter (Chid (%d), Offset (%d), IpType (%d))
Line 1426: [HAL][PktProc][WARNING] No filter(ipv4) config for chId=%d
Line 1430: [HAL][PktProc][WARNING] No filter(ipv6) config for chId=%d
Line 1452: [HAL][PktProc] EnableDitPktProcChIdFilter (Chid (%d), EnableDit (%d))
Line 1472: [HAL][PktProc][ERROR] null filter
Line 1476: [HAL][PktProc] AddCustomPktProcFilter stack=%d ipVer=%d icmp=0x%x srcPort=0x%x dstPort=0x%x
Line 1482: [HAL][PktProc][ERROR] Failed to alloc filter
Line 1505: [HAL][PktProc][ERROR] null filter
Line 1509: [HAL][PktProc] DeleteCustomPktProcFilter stack=%d ipVer=%d icmp=0x%x srcPort=0x%x dstPort=0x%x
Line 1536: [HAL][PktProc][WARNING] No custom filter
Line 1595: [HAL][PktProc][ERROR] Invalid IpType=%d
Line 1612: [HAL][PktProc] AppyCustomPktProcFilter stack=%d
Line 1615: [HAL][PktProc][WARNING] No custom filter
Line 1743: [HAL][PKTPROC] PktProc register dump is done!
Line 1746: [HAL][PktProc] dbgDumpDesc
Line 1757: [HAL][PKTPROC] PktProcChidFilterSetforIpv4[%d]=%d
Line 1764: [HAL][PKTPROC] PktProcChidFilterSetforIpv6[%d]=%d
Line 1777: [HAL][PKTPROC] PktProcIpv4FilterSet[%02d] v:%d e:%d dstQ:%d bitMask:0x%x icmp:0x%x protocol:0x%x
Line 1779: [HAL][PKTPROC]                          srcAddr:0x%x srcPort:0x%x dstAddr:0x%x dstPort:0x%x
Line 1788: [HAL][PKTPROC] PktProcIpv6FilterSet[%02d] v:%d e:%d dstQ:%d bitMask:0x%x icmp:0x%x protocol:0x%x
Line 1790: [HAL][PKTPROC]                          srcAddr0:0x%x srcAddr0:0x%x srcAddr2:0x%x srcAddr3:0x%x srcPort:0x%x
Line 1792: [HAL][PKTPROC]                          dstAddr0:0x%x dstAddr1:0x%x dstAddr2:0x%x dstAddr3:0x%x dstPort:0x%x
