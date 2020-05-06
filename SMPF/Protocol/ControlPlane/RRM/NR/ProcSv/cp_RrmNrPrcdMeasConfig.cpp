Line 68: RrmNrPrcdMeasConfig::PreHdlr
Line 86: RrmNrPrcdMeasConfig::PrintVarMeasConfig
Line 93:    >>MeasIdAddModedListIdx 0x%x%x MeasIdRemovedListIdx 0x%x%x
Line 97:    >>ReportConfigAddModedListIdx 0x%x%x ReportConfigRemovedListIdx 0x%x%x
Line 102:    >>MeasObjAddModedListIdx 0x%xX MeasObjRemovedListIdx 0x%xX
Line 108:    >>MeasIdAddModedListIdx Configuration Info Details
Line 116:      ::pVarMeasConfig->MeasIdList[%d] ==> MeasId(%d) MeasObjectId(%d) ReportConfigId(%d)
Line 125:    >>ReportConfigAddModedListIdx Configuration Info Details
Line 133: 	   ::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigNR.Choice %d
Line 134: 	   ::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
Line 139:      ::Choice - NRRRCDB_ReportConfigNR_reportType_periodical
Line 143:      ::Choice - NRRRCDB_ReportConfigNR_reportType_eventTriggered
Line 144:      ::EventIdChoice %d
Line 149:      ::EventId_A1
Line 153:      ::EventId_A2
Line 157:      ::EventId_A3
Line 161:      ::EventId_A4
Line 165:      ::EventId_A5
Line 169:      ::EventId_A6
Line 173:      ::Not Supported EventIdChoice!!!!
Line 179:      ::Choice - NRRRCDB_ReportConfigNR_reportType_reportCGI
Line 183:      ::Not Supported ReportConfig Choice!!!!
Line 188: 	   ::pVarMeasConfig->ReportConfigList[%d].ReportConfig.ReportConfigInterRAT.Choice %d
Line 189: 	   ::pVarMeasConfig->ReportConfigList[%d].ReportConfigId %d
Line 193: 	   ::Choice - NRRRCDB_ReportConfigInterRAT_reportType_periodical
Line 197: 	   ::Choice - NRRRCDB_ReportConfigInterRAT_reportType_eventTriggered
Line 198: 	   ::EventIdChoice %d
Line 203: 	   ::EVENT_B1
Line 207: 	   ::EVENT_B2
Line 211: 	   ::Not Supported EventIdChoice!!!!
Line 217: 	   ::Choice - NRRRCDB_ReportConfigInterRAT_reportType_reportCGI
Line 221: 	   ::Not Supported ReportConfig Choice!!!!
Line 232: RrmNrPrcdMeasConfig::RRM_RRC_MEAS_CONFIG_REQ_Hdlr
Line 250: RrmNrPrcdMeasConfig::RRM_RRC_MEAS_CONFIG_REQ_Hdlr - Sending Failure of RRM_RRM_MEAS_STATE_REQ to RRC_STATE_SUSP
Line 258: RrmNrPrcdMeasConfig::RRM_RRM_MEAS_STATE_CNF_Hdlr
Line 314: RrmNrPrcdAsState::RRM_RRM_MEAS_STATE_CNF_Hdlr::CanNot AllocMsg about RRM_RRM_MEAS_STATE_REQ
Line 322: RrmNrPrcdMeasConfig::InitializeVarMeasConfigPtr
Line 329: RrmNrPrcdMeasConfig::SetVarMeasConfigPtr
Line 337: RrmNrPrcdMeasConfig::RRM_L1C_GAP_CONFIG_CNF_Hdlr
Line 349: RrmNrPrcdMeasConfig::ConfigureGapConfigMsg
Line 360:    >>Conn gap configured(UE) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
Line 370:    >>Conn gap configured(FR1) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
Line 380:    >>Conn gap configured(FR2) - GapOffset:%d Mgl:%d(enum) Mgrp:%d(enum) Mgta:%d(enum) SetupReleaseChoice:%d
