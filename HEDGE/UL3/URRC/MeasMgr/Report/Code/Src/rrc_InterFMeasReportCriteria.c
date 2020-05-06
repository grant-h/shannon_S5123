Line 147: rrc_InterFMeasReportCriteria : AccumulatingReportInd is NULL
Line 197: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing AccumulatingReportInd for MID %i
Line 204: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; cpich=%i, EcNo=%i, Rscp=%i
Line 208: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing TriggeringReportInd for MID %i
Line 215: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; cpich=%i, EcNo=%i, Rscp=%i
Line 229: [rrc_InterFMeasReportCriteria_NotifyReport] ERROR - pure virtual function
Line 238: [rrc_InterFMeasReportCriteria_TimeToTriggerExpired] ERROR - pure virtual function
Line 292: [rrc_InterFMeasReportCriteria_StopReport] INFO
Line 343: [rrc_InterFMeasReportCriteria_SuspendReport] INFO
Line 369: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - BestCellj initialised to 0 for uarfcn %i
Line 398: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 402: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 407: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - NEW BestCellj->cpichEcNo = %i (cpich=%i)
Line 414: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 418: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - cpich %i being evaluated
Line 423: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - NEW BestCellj->cpichRscp = %i (cpich=%i)
Line 429: >>> QtySumLin [%d](*100) += Meas_lin[%d]*100  Meas[%d] 
Line 442: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - QtySumdB[%d](*100) = log10 (QtySumLin[%d](*100))
Line 447: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] INFO - no cells evaluated for uarfcn %i
Line 452: [rrc_Class_InterFMeasReportCriteria_GetFreqQualityEstimate] ERROR - interFreqResultsArray->numOfCells == 0
Line 501: [FDD] ERROR - TriggeredIndex > Asn_maxFreq. Removing Triggered Results task failed
Line 529: [InterF TTT Triggered INFO] uarfcn(%d) cell num(%d)
Line 551: [InterF TTT Triggered INFO] uarfcn(%d) cell num(%d)
Line 574: rrc_InterFMeasReportCriteria_IsSyncInfoMeasured : InterFCellInfo is NULL
Line 612: [%s] Sync Info is not yet measured Uarfcn(%d) Cpich(%d) OFF(%d) Tm(%d) CountC(%d)
Line 619: [rrc_InterFMeasReportCriteria_RemoveCellInList] ERROR - pure virtual function
Line 662: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: numOfCells = %d,Freq = %i
Line 670: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd]numOfFreq %d
Line 691: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing AccumulatingReportInd for MID %i
Line 698: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; CellparamId=%i, ProposedTGSN=%i, pccpchRscp=%i
Line 700: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd]:Error:  NumOfTimeslotIscp = %d
Line 708: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Printing TriggeringReportInd for MID %i
Line 715: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] INFO: Freq = %i; CellparamId=%i, ProposedTGSN=%i, pccpchRscp=%i
Line 728: [rrc_InterFMeasReportCriteria_CheckAccumulatingReportInd] Error:%d : freqQ = %i, numOfCells = %d
Line 755: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - TddBestCellj initialised to 0 for uarfcn %i and MeasQty = %d
Line 779: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 787: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 796: [rrc_Class_InterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - NEW TddBestCellj->CellparamId = %i (pccpchRscp=%i)
Line 805: >>> QtySumLin [%d](*100) += Meas_lin[%d]*100  TMeas[%d] 
Line 821: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - QtySumdB[%d](*100) = log10 (QtySumLin[%d](*100))
Line 826: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - no cells evaluated for uarfcn %i
Line 831: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] ERROR - interFreqResultsArray->numOfCells == 0
Line 849: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - TddBestCellj initialised to 0 for uarfcn %i and MeasQty = %d
Line 869: N freq Config - Ignored cell  meas uarfcn=%d cellparamid=%d
Line 879: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 887: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - CellparamId %i being evaluated
Line 896: [rrc_Class_InterFMeasReportCriteria_GetTddFreqQualityEstimate] INFO - NEW TddBestCellj->CellparamId = %i (pccpchRscp=%i)
Line 908: [rrc_Class_TInterFMeasReportCriteria_GetTddFreqQualityEstimate] ERROR - interFreqResultsArray->numOfCells == 0
Line 938: rrc_InterFMeasReportCriteria_IsTddSyncInfoMeasured : InterFCellInfo is NULL
Line 970: [%s] Sync Info is not yet measured Uarfcn(%d) CellparamId(%d) OFF(%d) CountC(%d)
