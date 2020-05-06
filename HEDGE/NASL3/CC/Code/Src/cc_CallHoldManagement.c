Line 64: Entering cc_DecodeCcHoldReqMsg....
Line 76: TransactionId -> %d
Line 94: Call is not active....!!!
Line 111: CC State Must be CC_ACTIVE in order to Hold the Call. But CC State %s  and Ignored in cc_DecodeCcHoldReqMsg
Line 121: CallSession %d is NOT Active in cc_DecodeCcHoldReqMsg
Line 131: No Session Found to contain the given TI in cc_DecodeCcHoldReqMsg, Message Ignored.
Line 140: Rejecting User's Req in cc_DecodeCcHoldReqMsg ! RAT Change in progress !!
Line 188: Unable to Allocate Memory to Send %s Message in cc_SendHoldReqMsg
Line 212: Entering cc_DecodeHoldAckIndMsg....Network Accepting to Hold This Call.....[24.083]-2.1.2
Line 228: TransactionId -> %d
Line 254: AudioHoldOn()
Line 258: Aux state mismatch happened for CallSession %d So trigger Status Msg to NW
Line 284: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeHoldAckIndMsg
Line 310: No Session Found to contain the given TI in cc_DecodeHoldAckIndMsg, Message Ignored.
Line 335: Entering cc_DecodeHoldRejIndMsg....Network Refusing to Hold This Call.....[24.083]-2.1.2
Line 351: TransactionId = %d in cc_DecodeHoldRejIndMsg
Line 459: Message received in incorrect %s state in cc_DecodeHoldRejIndMsg
Line 465: CallSession %d is NOT Active Send ReleaseComplete in cc_DecodeHoldRejIndMsg
Line 473: No Session Found to contain the given TI in cc_DecodeHoldRejIndMsg, Message Ignored.
Line 527: Displaying Message Contents: %s
Line 531: Result  -> %d
Line 534: Cause.DataPresent  -> %s
Line 549: Unable to Allocate Memory to Send %s Message in cc_SendCcHoldRspMsg
Line 572: Entering cc_DecodeCcRetrieveReqMsg.., User Requesting to Retrieve the Held Call...[24.083]-2.1.3
Line 577: TransactionId -> %d
Line 601: cc_CheckPossibleAction...!!!
Line 620: Message received in incorrect %s state in cc_DecodeCcRetrieveReqMsg
Line 630: CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeCcRetrieveReqMsg
Line 640: No Session Found to contain the given TI in cc_DecodeCcRetrieveReqMsg, Message Ignored.
Line 645: Rejecting User's Req in cc_DecodeCcRetrieveReqMsg ! RAT Change in progress !!
Line 692: Displaying Retrieve Req Message Contents: %s
Line 702: Unable to Allocate Memory to Send %s Message in cc_SendRetrieveReqMsg
Line 724: Entering cc_DecodeRetrieveAckIndMsg...Network Accepting to Retrieve the User's Held Call....[24.083]-2.1.3
Line 732: TransactionId -> %d
Line 758: AudioHoldOn()
Line 762: Aux state mismatch happened for CallSession %d So trigger Status Msg to NW
Line 780: CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeRetrieveAckIndMsg
Line 800: No Session Found to contain the given TI in cc_DecodeRetrieveAckIndMsg, Message Ignored.
Line 825: Entering cc_DecodeRetrieveRejIndMsg...Network Refusing to Retrieve the User's Held Call....[24.083]-2.1.3
Line 944: Received in Invalid State, Releasing the Call Altogether.... in cc_DecodeRetrieveRejIndMsg
Line 952: CallSession %d is NOT Active, Send ReleaseComplete in cc_DecodeRetrieveRejIndMsg
Line 960: No Session Found to contain the given TI in cc_DecodeRetrieveRejIndMsg, Message Ignored.
Line 1008: Displaying Retrieve Rsp Message Contents: %s
Line 1012: Result  -> %d
Line 1015: Cause.DataPresent  -> %s
Line 1031: Unable to Allocate Memory to Send %s Message in cc_SendCcRetrieveRspMsg
Line 1048: NORMAL Initialisation of <Call Hold Management>
Line 1054: GSM to UMTS Initialisation of <Call Hold Management>
Line 1060: UMTS to GSM Initialisation of <Call Hold Management>
Line 1068: Unknown Initialisation Type (%d) in cc_InitialiseCallHoldManagement
