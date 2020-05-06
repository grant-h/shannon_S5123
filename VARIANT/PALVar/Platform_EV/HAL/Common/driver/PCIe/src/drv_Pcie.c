Line 238: GET int@HISR :%x
Line 252: xdma is not running
Line 264: RX DMA descriptor was made
Line 284: send PCIE_INT_RES_ACK_F@hw_pcieSBHisr
Line 291: send PCIE_INT_REQ_ACK_R@hw_pcieSBHisr
Line 338: DMA is activated
Line 364: DMA is activated already
Line 420: Q is EMPTY
Line 449: Invalid Q ID @enQ
Line 499: [PKTPROC] Q is Empty
Line 507: Invalid Q ID @deQ
Line 518: deQ fail
Line 758: RFS 0x%x byte
Line 763: SECU NV> 0x%2X, LEN:0x%2X%2X
Line 782: RFS 0x%x byte add Q
Line 791: no memory @%d
Line 805: RFS 0x%x byte add Q
Line 811: no memory @%d
Line 826: RFS Free
Line 839: RFS Add to RAW_Q
Line 1105: [FLOW CONTROL] RESUME : CELL1568:%d, CELL2048:%d
Line 1134: [PKTPROC] No data to send
Line 1156: hw_startDLPktProc at apifPoll
Line 1163: pcieTIMER KICK @pcieTask
Line 1211: No data for %dms
Line 1223: Data in UL buffer. Keep Polling
Line 1242: Got doorbell while polling(%d) in L1.2
Line 1253: Got CP2AP data while polling(%d) in L1.2
Line 1289: No data %d/%d
Line 1298: No data for %dms -> but ABOX processing does not end
Line 1302: No data for %dms -> but BTL processing does not end
Line 1309: No data for %dms -> Prepare to dislink
Line 1352: PCIe task suspended
Line 1357: Actual flag : %x
Line 1370: CP got SB INTR from AP
Line 1375: PCIe Polling Start
Line 1405: Stop PCIE timer and PCIE INT ENA : %d
Line 1411: Door Bell register is set
Line 1429: Doorbell interrupt but no data in UL buffer
Line 1443: Get EVT_PCIE_LINK_DN_DONE. LTSSM(0x%x)
Line 1474: SB Intr get @ Linkdown Ready
Line 1480: CP has data to send
Line 1486: VSS has pcm data to send
Line 1491: hw_pcieEnableWakelock return FALSE
Line 1498: Wait Linkup Ready
Line 1503: LTSSM: %x
Line 1505: Check LTSSM..
Line 1511: LTSSM: %x
Line 1514: Wait BME
Line 1529: Wait PCIe Linkup Status
