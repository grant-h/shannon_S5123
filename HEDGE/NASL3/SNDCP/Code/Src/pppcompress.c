Line 160: sl_compress_init(%d)
Line 189: IP Header (1) In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x) 
Line 190: IP Header (2) In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 199: TYPE_IP----1
Line 203: TCP Header (1) In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 204: TCP Header (2) In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 207: TYPE_IP th_flag(%x)
Line 239: packet --- Wasn't the first
Line 250: packet ---found a prev connection
Line 255: packet ---Didn't find it
Line 270: TYPE_IP----4
Line 273: packet Uncompressed
Line 305: TYPE_IP----3
Line 310: TYPE_ERROR
Line 318: go to Uncompressed---1
Line 321: Can be Compressed
Line 340: go to Uncompressed---2
Line 345: Change in Window field(%x)
Line 353: go to Uncompressed---3
Line 356: Change in Ack field(%x)
Line 366: Change in Seq field(%x)
Line 370: Before: changes in packet(%d)
Line 392: go to Uncompressed---5
Line 413: Always compress outputchanges %d
Line 419: Change in IPID(%x)
Line 439: length of final change(%d)
Line 443: connection ID present
Line 452: NO connection ID
Line 488: TYPE_UNCOMPRESSED_TCP
Line 491: !Bad : ip->ip_p (%d)
Line 495: last recv (%d)
Line 496: last recv state (%d)
Line 505: Length-copied-in-rx-state(%d)
Line 510: !!Bad : Default
Line 514: TYPE_COMPRESSED_TCP
Line 518: We've received a compressed packet
Line 528: !!Bad : 1
Line 541: we have to toss the packet.
Line 546: last_recv(%d)
Line 548: last_recv_state(%x)
Line 549: First  part In Hex  Ver(%x), HL(%x), ToS(%x), TL(%x)
Line 550: Second part In Hex  ID(%x), off(%x) Protocol(%x), ChSum(%x)
Line 553: In Hex  SP(%x), DP(%x), SN(%x), AN(%x),off(%x)
Line 554: In Hex  x2(%x),flag(%x),window(%x), tcpCS(%x)
Line 556: In Hex  TH CS(%x)
Line 579: Decode-Flag(%x), URG(%x)
Line 586: Dec-WIN(%x)
Line 587: S-CP-Val-Before (%x)
Line 587: S-CP-Val-If (%x)
Line 587: S-CP-Val-Else (%x)
Line 591: Dec-ACK(%x)
Line 592: L-CP-Val-Before (%x)
Line 592: L-CP-Val-If (%x)
Line 592: L-CP-Val-Else (%x)
Line 596: Dec-SEQ(%x)
Line 597: L-CP-Val-Before (%x)
Line 597: L-CP-Val-If (%x)
Line 597: L-CP-Val-Else (%x)
Line 603: NEW_I
Line 604: S-CP-Val-Before (%x)
Line 604: S-CP-Val-If (%x)
Line 604: S-CP-Val-Else (%x)
Line 618: Length_one(%d)
Line 623: we must have dropped some characters
Line 636: Length_two(%d),cs_len(%d)
Line 649: Length_END(%d)
Line 652: !!!!We are in BAD area, Not expected!!!!
