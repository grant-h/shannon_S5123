Line 311: Displaying Send Status Req Message Contents: %s
Line 324: Unable to Allocate Memory to Send %s Message in cc_SendStatusReqMsg
Line 340: Entering cc_SendStatusEnqReqMsg
Line 359: Unable to Allocate Memory to Send %s Message in cc_SendStatusEnqReqMsg
Line 386: Entering cc_DecodeStatusEnqIndMsg
Line 400: TransactionId -> %d
Line 462: No Session Found to contain the given TI in cc_DecodeStatusEnqIndMsg, Message Ignored.
Line 554: Entering cc_DecodeStatusIndMsg.... Network Detected an Error
Line 583: TransactionId -> %d
Line 614: Status state not found in cc_DecodeStatusIndMsg
Line 633: CauseIe not available in cc_DecodeStatusIndMsg
Line 651: CauseIe Length = %d in cc_DecodeStatusIndMsg
Line 684: Response to status enquiry. UE cc state=%d
Line 695: NW cc state=%d
Line 735:  For Data Calls, CC does not need to inform VCG or RABM
Line 789: Start CONNECT_IND_WAIT_TIMER again(%d)
Line 817: VCG already activated
Line 822: VCG need to activate for Voice call only
Line 911: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 923: Save CallDrop: Type=%d, Cause=%d
Line 964: UE state already moved to another state!!
Line 971: Not a Response to status enquiry
Line 977: cc_DecodeStatusIndMsg - invaild CcCauseLen = %d received
Line 995: cc_DecodeStatusIndMsg - msg ignored
Line 1011: No need to send CC_DISCONNECT_IND(Above layers doesn't have MT call ctxt)
Line 1024: Save CallDrop: Type=%d, Cause=%d
Line 1039: No Session Found to contain the given TI in cc_DecodeStatusIndMsg, Message Ignored.
Line 1076: cc_DetermineAction - status : send Release Complete
Line 1087: cc_DetermineAction - status: ignored
Line 1100: cc_DetermineAction - status : incompatible state
Line 1106: cc_DetermineAction - status: compatible state
Line 1116: cc_DetermineAction - status: cause => disconnect
Line 1124: cc_DetermineAction - status: cause OK
Line 1158: Not GSM state in cc_ReadReceivedNetworkState
Line 1165: CallStateIe not found in cc_ReadReceivedNetworkState
Line 1196: Non GSM cause in cc_ReadCause
Line 1202: CauseIe not found in cc_ReadCause
Line 1252: Found Compatible State in cc_CheckEtsiStateCompatibility
Line 1263: Unable to Find NetworkState in cc_EtsiCompatibleStatesList, in cc_CheckEtsiStateCompatibility !!
Line 1286: Current State = %s, Equivalent Etsi State = %s in cc_ConvertToEtsiState
Line 1292: Attempting to Read cc_EtsiStateConversionList Using an Invalid State (0x%x) in cc_ConvertToEtsiState
Line 1336: NORMAL Initialisation of <Status Management>
Line 1342: GSM to UMTS Initialisation of <Status Management>
Line 1348: UMTS to GSM Initialisation of <Status Management>
Line 1356: Unknown Initialisation Type (%x) in cc_InitialiseStatusManagement
