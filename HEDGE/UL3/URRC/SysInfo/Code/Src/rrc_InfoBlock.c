Line 221: rrc_InfoBlock_free: [%s] @ 0x%0.8x freed
Line 373: rrc_Class_InfoBlock_Create: error - invalid SIB typeExtension %d provided.
Line 389: rrc_Class_InfoBlock_Create: error - invalid SIB type %d provided.
Line 400: rrc_Class_InfoBlock_Create: error - invalid SIB type %d received and is dropped.
Line 430: rrc_Class_InfoBlock_Create: [%s] @ address 0x%0.8x created, RefCount = %d
Line 750: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [start for %s]
Line 760: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s] - SUCCESS - SFN[%d] MOD 8 == 0 
Line 774: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s] - [SUCCESS], SegmentIdx[%d], SFN[%d]
Line 780: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s] - [FAILURE], SFN[%d]
Line 879: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s]: SegCount Mismatch:SegmentCount (From SchInfo)[%d] , SegmentCount (From First Segment)[%d]
Line 888: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][MultiSeg] - [SUCCESS],SegmentIdx[0]:  SIBPOS[%d] == SFN[%d] MOD SIBREP[%d]
Line 912: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][MultiSeg] - [SUCCESS],SegmentIdx[%d]: SIBPOS[%d] == SFN[%d] MOD SIBREP[%d]
Line 918: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][MultiSeg] - [FAILURE],SFN[%d],SIBREP[%d]
Line 935: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][MultiSeg] - [SUCCESS],SegmentIdx[%d]: SIBPOS[%d] == SFN[%d] MOD SIBREP[%d]
Line 941: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][MultiSeg] - [FAILURE],SFN[%d],SIBREP[%d]
Line 951: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][SingleSeg] - [SUCCESS], SIBPOS[%d] == SFN[%d] MOD SIBREP[%d]
Line 957: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s][SingleSeg] - [FAILURE], SIBPOS[%d] != SFN[%d] MOD SIBREP[%d]
Line 964: rrc_InfoBlock_isSfnInteresting_ForAnySegment: [%s] - No Sch present
Line 1049: isSegmentInteresting: [true] - for SibType [%s] - found Segment :%x at SFN%d
Line 1117: rrc_InfoBlock_processSegment: bitPosition = %d, bytePosition = %d, bitLength = %d, segCount = %d
Line 1126: rrc_InfoBlock_processSegment [NON FATAL ERROR]InfoBlock_p->dataPtr = NULL
Line 1165: rrc_InfoBlock_processSegment [NON FATAL ERROR]InfoBlock_p->dataPtr = NULL
Line 1175: rrc_InfoBlock_processSegment: Segment_Index = %d, expectedSegment = %d, segCount = %d
Line 1182: rrc_InfoBlock_processSegment: recv SIB segment OutOfOrder, but First segment yet to be received
Line 1188: rrc_InfoBlock_processSegment: recv SIB segment is OutOfOrder
Line 1197: rrc_InfoBlock_processSegment: error - recv SIB segment is OutOfRange
Line 1204: rrc_InfoBlock_processSegment: error - recv SIB segment is OutOfRange
Line 1264: rrc_InfoBlock_processSegment: bitPosition = %d, bytePosition = %d, bitLength = %d
Line 1340: rrc_InfoBlock_BufferSegments: Multi Segmented MIB: No need to send SchInfo to UPHY for same SegCount
Line 1344: rrc_InfoBlock_BufferSegments: Multi Segmented MIB: send SchInfo to UPHY
Line 1354: DBCHR: [%s] Serious Err: NW sends a invalid Segment: Segment ID [%d], SegmentCount (From First Segment)[%d]
Line 1381: DBCHR: [%s] BufferedSeg[%d] , SegType = %d, SegBitLength = %d
Line 1394: DBCHR: [%s] All segments received. Starting Concatenation
Line 1406: DBCHR: [%s] Duplicate Segment[%d] received. Ignoring
Line 1419: DBCHR: [%s] Buffering already started
Line 1423: DBCHR: [%s] Buffering not started
Line 1487: rrc_InfoBlock_SendSIBData: virtual function of SIB 15.xbis  returns success
Line 1505: rrc_InfoBlock_processSib: [%s] - ASN decoding failure
Line 1516: rrc_InfoBlock_processSib: [%s] - ASN decoding success
Line 1521: rrc_InfoBlock_processSib: virtual function furtherProcessSib returns success
Line 1536: rrc_InfoBlock_SendSIBData: virtual function of SIB 15.x  returns success
Line 1559: rrc_InfoBlock_processSib: [%s] - ASN decoding failure
Line 1570: rrc_InfoBlock_processSib: [%s] - ASN decoding success
Line 1575: rrc_InfoBlock_processSib: virtual function furtherProcessSib returns success
Line 1591: rrc_InfoBlock_SendSIBData: virtual function of SIB 15.x  returns success
Line 1981: rrc_InfoBlock_copy: [%s] - copy @ 0x%0.8x, RefCount = %d
Line 2012: rrc_InfoBlock_SetSFN: [%s] - @ 0x%0.8x, SFN = %d
