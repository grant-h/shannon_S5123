Line 39: RrmMngrSemiStaticDbNr::RrmMngrSemiStaticDbNr()
Line 46: RrmMngrSemiStaticDbNr::~RrmMngrSemiStaticDbNr()
Line 52: RrmMngrSemiStaticDbNr::Init()
Line 61: RrmMngrSemiStaticDbNr::clearMibBarredList()
Line 69: RrmMngrSemiStaticDbNr::clearRrcBarredList()
Line 79: RrmMngrSemiStaticDbNr::IsBarred - Band:%d Arfcn:%d CellId:%d
Line 84:    >>Found, MIB Barred - Band:%d Arfcn:%d CellId:%d
Line 92:    >>Found, RRC Barred - Band:%d Arfcn:%d CellId:%d
Line 98:    >>Not Found, Not Barred - Band:%d Arfcn:%d CellId:%d
Line 105: RrmMngrSemiStaticDbNr::isCellBarred - CellId(%d) Arfcn(%d)
Line 112: RrmMngrSemiStaticDbNr::isCellBarred - Arfcn(%d) CellId(%d) barred
Line 122: RrmMngrSemiStaticDbNr::isFreqBarred - Arfcn(%d)
Line 130: RrmMngrSemiStaticDbNr::isFreqBarred - Arfcn(%d) barred
Line 142: RrmMngrSemiStaticDb::AddMibCellBarred - Band:%d Arfcn:%d CellId:%d
Line 157:    >>Found, Update MibBarred - Band:%d Arfcn:%d CellId:%d
Line 164:    >>Not found, Add MibBarred - Band:%d Arfcn:%d CellId:%d
Line 174: RrmMngrSemiStaticDb::AddMibFreqBarred - Band:%d Arfcn:%d
Line 189: 	 >>Found, Update MibBarred - Band:%d Arfcn:%d
Line 196: 	 >>Not found, Add MibBarred - Band:%d Arfcn:%d
Line 206: RrmMngrSemiStaticDbNr::FindMibBarredFreqInfo - Band:%d Arfcn:%d
Line 221: 	 >>Found but expired, Erase MIB Freq Barred - Band:%d Arfcn:%d
Line 229: 	 >>Found, Return MIB Freq Barred - Band:%d Arfcn:%d
Line 238: 	 >>Not Found in MibBarredFreqList, Return nullptr
Line 247: RrmMngrSemiStaticDbNr::FindMibBarredInfo - Band:%d Arfcn:%d CellId:%d
Line 264:    >>Found but expired, Erase MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
Line 273:    >>Found, Return MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
Line 282:    >>Not Found in MibBarredCellList, Return nullptr
Line 304: RrmMngrSemiStaticDbNr::IsMibBarredFreqInfo - Band:%d Arfcn:%d
Line 319: 	 >>Found but expired, Erase MIB Freq Barred - Band:%d Arfcn:%d
Line 327: 	 >>Found, Return MIB Freq Barred - Band:%d Arfcn:%d
Line 336: 	 >>Not Found in MibBarredFreqList, Return false
Line 345: RrmMngrSemiStaticDbNr::IsMibBarredCellInfo - Band:%d Arfcn:%d CellId:%d
Line 362:    >>Found but expired, Erase MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
Line 371:    >>Found, Return MIB Cell Barred - Band:%d Arfcn:%d CellId:%d
Line 380:    >>Not Found in MibBarredCellList, Return false
Line 401: RrmMngrSemiStaticDbNr::IsRrcBarredFreqInfo - Band:%d Arfcn:%d
Line 415: 	 >>Found but expired, Erase RRC Freq Barred - Band:%d Arfcn:%d
Line 424: 	 >>Found, Return true! RRC Freq Barred - Band:%d Arfcn:%d
Line 433: 	 >>Not Found in RrcBarredFreqList, Return false
Line 442: RrmMngrSemiStaticDbNr::IsRrcBarredCellInfo - Band:%d Arfcn:%d CellId:%d
Line 457:    >>Found but expired, Erase RRC Barred - Band:%d Arfcn:%d CellId:%d
Line 466:    >>Found, Return true! RRC Cell Barred - Band:%d Arfcn:%d CellId:%d
Line 475:    >>Not Found in RrcBarredCellList, Return false
Line 484: RrmMngrSemiStaticDbNr::UpdateRrcBarredList - NumFreq:%d NumCell:%d
Line 489: Clear m_RrcBarredCellList, m_RrcBarredFreqList
Line 495: Add RRC BarredFreqList - NumFreq:%d MAX_BARREDFREQ_NUM:%d
Line 506:    >>FreqList[%d] - Band:%d Arfcn:%d CellId:%d TimeStamp(StartMs:%d[ms] DurationMs:%d[ms])
Line 513: Add RRC BarredCellList - NumCell:%d MAX_BARREDCELL_NUM:%d
Line 524:    >>CellList[%d] - Band:%d Arfcn:%d CellId:%d TimeStamp(StartMs:%d[ms] DurationMs:%d[ms])
Line 530: RRC Barred List updated m_RrcBarredCellList(%d), m_RrcBarredFreqList(%d)
