Line 88: rfc2507_selected
Line 107: rfc2507_init:entity_num(%d), sapi(%d) TCP (%d) NonTCP (%d)
Line 130: RFC2507:stateData(%x) nontcpflow(%x) tcpflow (%x) 
Line 139: RFC2507: TCP size (%d)  (%d) tcpspace %d
Line 140: RFC2507: Non TCP size (%d) (%d)nontcpspace %d 
Line 146: RFC2507: Tx TCP Flow state(%x)
Line 159: RFC2507:Rx TCP Flow state(%x)
Line 174: RFC2507: Tx Non TCP Flow state(%x)
Line 189: RFC2507: Rx Non TCP Flow state(%x)
Line 207: RFC2507 Params: %d %d %d %d %d
Line 219: RFC2507: rfc2507_context_init TcpSpace %d NonTcpSpace %d 
Line 248: RFC2507: rfc2507_context_init exit
Line 283: State Data is NULL
Line 288: [DBG]:proto:%0x hlen:%d FMaxPeriod %d FMaxTime %d  NonTcp_cid %d Tcp_cid %d
Line 291: IP/TCP Header Packet
Line 296: IP/UDP Header Packet
Line 307: output:RFC2507(%d):length(%d):
Line 340: stateData(%x)InputLength(%d)Tcp_CID(%d)Non_TCPCID(%d) FMaxPeriod(%d) FMaxTime(%d)
Line 341: RFC2507:Decompression input :
Line 344: No State Data
Line 351: Rcvd UNCOMPRESSED_PACKETt: PCOMP %d
Line 356: Rcvd FULL_HEADER: PCOMP %d
Line 364: Rcvd FULL_HEADER: proto %d
Line 368: outputafter Decomp(%d)
Line 371: Rcvd errorneous TCP IP packet
Line 373: RFC2507 TCP decompression output:
Line 380: outputafter Decomp(%d)
Line 383: Rcvd errorneous UDP IP packet
Line 385: RFC2507 UDP decompression output:
Line 391: Rcvd COMPRESSED_TCP: PCOMP %d
Line 393: outputafter Decomp(%d)
Line 396: Rcvd errorneous TCP IP packet
Line 398: RFC2507 TCP decompression output:
Line 402: Rcvd COMPRESSED_TCP_NODELTA: PCOMP %d (not Handled) 
Line 406: Rcvd COMPRESSED_NON_TCP: PCOMP %d (not Handled)
Line 411: outputafter Decomp(%d)
Line 414: Rcvd errorneous UDP IP packet
Line 416: RFC2507 UDP decompression output:
Line 420: Rcvd CONTEXT_STATE: PCOMP %d (not Handled)
Line 434: rfc2507_delete
Line 488: RFC2507:rfc2507AddParams : [1]: %d [2]: %d [3]: %d [4]: %d  [5]: %d [6]: %d [7]: %d
Line 505: rfc2507AddPcomps: %d %d %d 
Line 551: rfc2507ComparePcoms : Status : %d len : %d 
Line 579: rfc2507ValidateParams_MO: len : %d XidInEstab %d status %d
Line 827: rfc2507ValidateParams_MO:period %d maxtime %d max header %d tcp %d nontcp %d  
Line 828: Proposed:period %d maxtime %d max header %d tcp %d nontcp %d  
Line 836: rfc2507ValidateParams_MO:l_reNegFlag %d----0  
Line 853: rfc2507ValidateParams_MO:l_reNegFlag %d----1  
Line 873: rfc2507ValidateParams_MO:l_reNegFlag %d----2  
Line 893: rfc2507ValidateParams_MO: XidInEstab %d 
Line 903: rfc2507ValidateParams_MO: len : %d returning :%d 
Line 1245: RFC2507Comp-PBit=0-Unsupported LengthOutOfRange
Line 1262: RFC2507Comp-PBit=1-Unsupported LengthOutOfRange
Line 1265: rfc2507CheckUnsupportedLength :%d 
Line 1293: IP Fragemnt or packet len<40:Packet Type:%d 
Line 1296: Reived Packet IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 1297: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 1300:  Received TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 1301: Received TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 1303: connstate Packet IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x) 
Line 1304: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 1305:  Conn state TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 1306: Conn State TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 1310:  SYN | FIN | RST 
Line 1330: Found a Previous connection
Line 1335: No Previous connection found
Line 1342: h len %d:PacketType :%d
Line 1345: h len %d:PacketType :%d
Line 1351: TcpPktNumber %0x Higher Byte  %0x 
Line 1362: TcpPktNumber_cid %4x cs->tcp_cid %d 
Line 1368:  Previous connection found -1
Line 1375:  Previous connection found -2
Line 1383: TcpPktNumber %0x Higher Byte  %0x 
Line 1394: TcpPktNumber_cid %4x cs->tcp_cid %d 
Line 1402: h len %d:PacketType :%d
Line 1413: go to sendfullheader 1
Line 1422: Change in URG flag(%x)
Line 1426: Change in URG pointer without URG set:Send Fullheader
Line 1434: Change in Window field(%x)
Line 1441: Ack difference more than 65535: send Full header 
Line 1446: Change in Ack field(%x)
Line 1453: Seq difference more than 65535 :send Full header
Line 1458: Change in Seq field(%x)
Line 1471: special case encoding as per RFC1144: send full header
Line 1497: Change in IPID(%x)
Line 1503: PUSH Flag Set
Line 1510: length of final change(%d)
Line 1511: final Content
Line 1513: connection ID present in compressed header
Line 1530: sending full header %04x cs->tcp_cid %0x
Line 1551: FULL_HEADER received pdulen %d 
Line 1557: !Bad :rcvd_cid %x 
Line 1560: rcvd_cid %x 
Line 1562: last recv (%d)
Line 1563: last recv state (%d)
Line 1572: Length-copied-in-rx-state(%d)
Line 1575: COMPRESSED_TCP_NODELTA pdulen %d 
Line 1581: !Bad :rcvd_cid %x 
Line 1584: rcvd_cid %x 
Line 1586: last recv (%d)
Line 1587: last recv state (%d)
Line 1596: Length-copied-in-rx-state(%d)
Line 1599: COMPRESSED_TCP
Line 1604: !!Bad : 1
Line 1612: last_recv cid(%d)changes (%x)
Line 1614: last_recv_state(%x)
Line 1615: First  part In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 1616: Second part In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 1619: In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 1620: In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 1622: upper byte (%x) next byte %x
Line 1624: In Hex  TH CS(%x)
Line 1637: SPECIAL_I
Line 1642: SPECIAL_D
Line 1648: Decode-Flag(%x), URG(%x)
Line 1657: Dec-WIN(%x)
Line 1658: S-CP-Val-Before (%x)
Line 1658: S-CP-Val-If (%x)
Line 1658: S-CP-Val-Else (%x)
Line 1662: Dec-ACK(%x)
Line 1663: L-CP-Val-Before (%x)
Line 1663: L-CP-Val-If (%x)
Line 1663: L-CP-Val-Else (%x)
Line 1667: Dec-SEQ(%x)
Line 1668: L-CP-Val-Before (%x)
Line 1668: L-CP-Val-If (%x)
Line 1668: L-CP-Val-Else (%x)
Line 1674: NEW_I
Line 1675: S-CP-Val-Before (%x)
Line 1675: S-CP-Val-If (%x)
Line 1675: S-CP-Val-Else (%x)
Line 1682: Length_one(%d)
Line 1685: we must have dropped some characters
Line 1698: Length_two(%d),cs_len(%d)
Line 1711: Length_END(%d)
Line 1714: !!Bad :decompress Default
Line 1718: !!!!We are in BAD area, Not expected!!!!
