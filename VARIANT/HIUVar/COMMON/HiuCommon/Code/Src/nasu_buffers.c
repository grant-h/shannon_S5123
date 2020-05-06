Line 109: [ERRORCHANNEL] GetNsapiData: Invalid Nsapi %d or stackId:%d
Line 120: [ERRORCHANNEL] nasu_DataNsapiShow: Invalid Nsapi %d
Line 125: [ERRORCHANNEL] Nsapi %01X, Mailbox %3d, Callback %08X
Line 129: [ERRORCHANNEL]   Uplink Pool for NSAPI:  %d-
Line 131: [ERRORCHANNEL]   Uplink Queue for NSAPI: %d-
Line 137: [ERRORCHANNEL]   Downlink Pool for NSAPI: %d-
Line 148: [ERRORCHANNEL] ========== UDH Status ==========
Line 179: [ERRORCHANNEL] nasu_DataInitialise: Initialised: %d, RAT %d, callback %08X
Line 219: [ERRORCHANNEL] nasu_CheckUlDlPool: Invalid Nsapi %x
Line 226: [ERRORCHANNEL] nasu_CheckUlDlPool: Buffer pool not OK (Nsapi = %x, Ul Pool = 0x%8X, Dl pool 0x%8X
Line 237: [ERRORCHANNEL] nasu_DataGetDstMailBox() : Invalid Nsapi (%d)
Line 264: [ERRORCHANNEL] nasu_BufferPoolCreate: TotalBuffers = 0
Line 271: [ERRORCHANNEL] nasu_BufferPoolCreate: BufferSize = 0
Line 278: [ERRORCHANNEL] nasu_BufferPoolCreate: header bigger than buffer
Line 288: [ERRORCHANNEL] nasu_BufferPoolCreate: cannot allocate pool control block
Line 315: [ERRORCHANNEL] nasu_BufferPoolCreate: Created Pool %08X, BufferCnt %d
Line 325: [ERRORCHANNEL] nasu_BufferPoolDelete: Pool %08X
Line 329: [ERRORCHANNEL] nasu_BufferPoolDelete: Invalid pool %08X, ThisPool %08X
Line 384: [ERRORCHANNEL] nasu_BufferPoolMaxDataSize: Invalid Buffer %08X, Alloc %02X
Line 396: [ERRORCHANNEL] nasu_FreeBufferCount: Invalid pool %08X, ThisPool %08X
Line 420: [ERRORCHANNEL] nasu_BufferAllocate: Invalid pool %08X, ThisPool %08X
Line 426: [ERRORCHANNEL] nasu_BufferAllocate: Pool %08X Deleted, cannot Allocate buffer
Line 449: [ERRORCHANNEL] nasu_BufferAllocate: Failed to allocate the cell buffer
Line 458: [ERRORCHANNEL] nasu_BufferAllocate: Invalid Buffer %08X, Alloc %02X
Line 474: [ERRORCHANNEL] nasu_BufferAllocate: DataSize %d is bigger than %d
Line 489: [BUFFERAVAILABLECHANNEL] nasu_BufferAllocate: No Buffers in Pool %08X, BufferCnt : %d
Line 507: [ERRORCHANNEL] nasu_BufferFree: Invalid Buffer %08X, Alloc %02X
Line 538: [BUFFERALLOCATECHANNEL] nasu_BufferFree: Cell buffer Free for PPP Packet
Line 542: [ERRORCHANNEL] nasu_BufferFree: Invalid Pool %08X, Buffer %08X, Alloc %02X
Line 553: [ERRORCHANNEL] nasu_BufferFree: Invalid Buffer %08X, Alloc %02X
Line 561: [BUFFERALLOCATECHANNEL] nasu_BufferFree: Buffer %08X from Pool %08X, currently %d free
Line 587: [ERRORCHANNEL] nasu_RelPtr: Invalid Buffer %08X, Alloc %02X
Line 598: [ERRORCHANNEL] nasu_DataPtr: Invalid Buffer %08X, Alloc %02X
Line 611: [ERRORCHANNEL] nasu_DataSize: Invalid Buffer %08X, Alloc %02X
Line 624: [ERRORCHANNEL] nasu_SetDataSize: Invalid Buffer %08X, Alloc %02X
Line 630: [ERRORCHANNEL] nasu_SetDataSize: Invalid size %d for Buffer %08X from Pool %08X
Line 662: [ERRORCHANNEL] nasu_BufferQueueCreate: cannot allocate queue control block
Line 673: [ERRORCHANNEL] nasu_PoolShowPAL: Invalid pool %08X, ThisPool %08X
Line 679: [BUFFERSHOWCHANNEL]  Pool %08X Deleted, Remaining Allocated Buffers %d
Line 689: [BUFFERSHOWCHANNEL]  Pool %08X, Total Buffers %2d, BufferAvailableFunction %08X, BufferAvailableParam %08X, SrcMbx %02X
Line 696: [BUFFERSHOWCHANNEL]   HeaderFree %4d, Available Buffers %2d, Allocations %6d, Failures %6d
Line 700: [BUFFERSHOWCHANNEL]     Allocation Failed Set
Line 709: [BUFFERSHOWCHANNEL] nasu_QueueShowOnChannel: Invalid queue
Line 720: [BUFFERSHOWCHANNEL] Buffer %08X, Length %04d, Data %08X
Line 759: [ERRORCHANNEL] nasu_HeaderAllocate: Invalid Buffer %08X, Alloc %02X
Line 783: [ERRORCHANNEL] nasu_HeaderFree: Invalid Buffer %08X, Alloc %02X
Line 789: [ERRORCHANNEL] nasu_HeaderFree: Size %d > DataLength %d for Buffer %08X from Pool %08X
Line 811: [ERRORCHANNEL] nasu_FooterAllocate: Invalid Buffer %08X, Alloc %02X
Line 819: [ERRORCHANNEL] nasu_FooterAllocate: Requested %d more than available %d
Line 842: [ERRORCHANNEL] nasu_GetPoolSrcMbx: Invalid Buffer %08X, Alloc %02X
Line 866: [ERRORCHANNEL] nasu_DataUlPoolCreate: Invalid Nsapi %01x
Line 871: [PDH_BUFFER_POOLS] nasu_DataUlPoolCreate: Nsapi %01x, Buffers %d, Size %d, Header %d, Callback %08X, SrcMbx %08X
Line 880: [ERRORCHANNEL] nasu_DataUlPoolCreate for Nsapi %01X: TotalBuffers %d too large, using default %d
Line 892: [ERRORCHANNEL] nasu_DataUlPoolCreate for Nsapi %01X: BufferSize %d too large, using default %d
Line 904: [ERRORCHANNEL] nasu_DataUlPoolCreate for Nsapi %01X: BufferSize %d too large, using default %d
Line 927: [PDH_UPLINK] nasu_DataUlPoolCreate: Nsapi %01x,UL Pool %08X
Line 932: [ERRORCHANNEL] nasu_DataUlPoolCreate: Nsapi %01x,Cannot Create Buffer Pool
Line 946: [ERRORCHANNEL] nasu_DataFreeBufferCount: Invalid Nsapi %x
Line 960: [ERRORCHANNEL] nasu_DataUlPoolDelete: Invalid Nsapi %x
Line 964: [ERRORCHANNEL] nasu_DataUlPoolDelete: Nsapi %01x, Pool 0x%8X
Line 984: [PDH_UPLINK] nasu_DataUlBufferAllocate: Invalid Nsapi %x
Line 1000: [PDH_UPLINK] nasu_UlBufferAllocateWithData: Invalid Nsapi %x
Line 1015: [ERRORCHANNEL] nasu_DataUlBufferFree: Invalid Nsapi %x, pointer : %x
Line 1019: [PDH_UPLINK] nasu_DataUlBufferFree: Nsapi %01x, Buffer %08X
Line 1032: [ERRORCHANNEL] nasu_DataDlBufferAllocate: Invalid Nsapi %x
Line 1038: [PDH_DOWNLINK] nasu_DataDlBufferAllocate: Nsapi %01x, Size %d, Buffer %08X
Line 1060: [ERRORCHANNEL] nasu_DataDlPoolCreate: Invalid Nsapi %x
Line 1065: [PDH_BUFFER_POOLS] nasu_DataDlPoolCreate: Nsapi %01x, Mbx %08X, Overhead %d, Header %d
Line 1073: [ERRORCHANNEL] nasu_DataDlPoolCreate: Requested BufferOverhead %d too big, using default %d
Line 1083: [ERRORCHANNEL] nasu_DataDlPoolCreate: Requested HeaderFree %d too big, using default %d
Line 1099: [ERRORCHANNEL] nasu_DataDlPoolCreate: Registry Buffer Size %d too big, using default %d
Line 1139: [PDH_DOWNLINK] nasu_DataDlPoolCreate: Nsapi %01x,DL Pool %08X
Line 1155: [ERRORCHANNEL] nasu_DataDlPoolDelete: Invalid Nsapi %x
Line 1159: [ERRORCHANNEL] nasu_DataDlPoolDelete: Nsapi %01x, Pool : 0x%X
Line 1178: [ERRORCHANNEL] nasu_DataDlBufferFree: Invalid Nsapi %x, pointer : %x
Line 1182: [PDH_DOWNLINK] nasu_DataDlBufferFree: Nsapi %01x, Buffer %08X
