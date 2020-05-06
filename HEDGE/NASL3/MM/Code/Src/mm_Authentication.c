Line 149: Initialisation of <Authentication>, InitType=%s 
Line 209: Wrong Action =%d 
Line 258: RR Connection Does not exit -> 4.3.2.2: Not processing AUTH REQ
Line 265: Authentication Challenge -> %s
Line 283: Repeated Rand Detected, Bypassing SIM AUTH REQ
Line 312: Cell is Barred. RR Connection Released
Line 445: Transaction Id Received from SIM %d 
Line 450: Transaction Ids are not matching, So ignoring the message 
Line 507: Cell is Barred. RR Connection Released
Line 537:  No SIM Appl Loaded OR SIM is Absent. Network will try another 4 times and then release the connection
Line 601:  GsmKcDerivation is Not Supported by USIM in 3G AUTH !  
Line 633: GSM Auth in GSM RAT MODE -> Deleting CK, IK, Ksi
Line 642: GSM Auth in UMTS RAT MODE Using SIM
Line 669: Processing Auth. Failure -> %s : Auth Fail Count - %d
Line 680:  Set mm_BarCellIdArfcn :%d
Line 774: 
Line 795: 
Line 882: 
Line 959: RR Connection Does not exit -> : Not processing AUTH RSP
Line 1031: 
Line 1032: 
Line 1110: 
Line 1111: 
Line 1112: 
Line 1118: mm_RrSecurityKeyUpdReq.Key ->  0x%x  0x%x  0x%x  0x%x 
Line 1124: mm_RrSecurityKeyUpdReq.Key ->  0x%x  0x%x  0x%x  0x%x 
Line 1132: mm_RrSecurityKeyUpdReq.Key_128 -> 0x%x  0x%x  0x%x  0x%x
Line 1139: mm_RrSecurityKeyUpdReq.Key_128 -> 0x%x  0x%x  0x%x  0x%x
Line 1145: mm_RrSecurityKeyUpdReq.Key_128 -> 0x%x  0x%x  0x%x  0x%x 
Line 1151: mm_RrSecurityKeyUpdReq.Key_128 ->  0x%x  0x%x  0x%x  0x%x 
Line 1162: mm_RrSecurityKeyUpdReq.SrvccKey ->  0x%x  0x%x  0x%x  0x%x 
Line 1168: mm_RrSecurityKeyUpdReq.SrvccKey ->  0x%x  0x%x  0x%x  0x%x 
Line 1176: mm_RrSecurityKeyUpdReq.SrvccKey_128-> 0x%x  0x%x  0x%x  0x%x
Line 1183: mm_RrSecurityKeyUpdReq.SrvccKey_128-> 0x%x  0x%x  0x%x  0x%x
Line 1190: mm_RrSecurityKeyUpdReq.SrvccKey_128 -> 0x%x  0x%x  0x%x  0x%x
Line 1197: mm_RrSecurityKeyUpdReq.SrvccKey_128 ->  0x%x  0x%x  0x%x  0x%x
Line 1261: Security Mode is NOT Activated for this Domain Yet. Ignoring Msg
Line 1271: MM Shall treat this as Completion of CM Service Req [24.008]- 4.5.1.1
Line 1391: Invalidating MM security context when URRC sends security fail ind
Line 1417: Invalidating MM GMM security contex when URRC sends security fail ind
Line 1476: Cell Barring Period -> %d Seconds, Arfcn: %d
Line 1560:  FLAG: %s               -> TRUE
Line 1668:  GEA Algo Req by the N/W is NOT Supported by the UE
Line 1698: GMM Rand IE is NOT Present. N/W is only trying to set the Ciphering Algo
Line 1744:  Auth Challenge -> %s 
Line 1753:  Repeated Rand, Bypassing SIM AUTH REQ
Line 1792: Cell is Barred. RR Connection Released
Line 1917: Cell is Barred. RR Connection Released
Line 1937:  SIM Reporting GSM_AUTH_NOT_SUPPORTED in mm_CheckGmmSimAuthRsp
Line 1945:  Either No SIM Application Loaded OR SIM is Absent. Either Case, nothing can be done, Network will try another 4 times and then release the connection !!! 
Line 2012:  GsmKcDerivation is Not Supported by USIM in 3G AUTH !  
Line 2045:  GSM Auth in GSM RAT MODE -> Deleting GMM CK, GMM IK, GMM Ksi
Line 2056:  GSM Auth in UMTS RAT MODE Using SIM 
Line 2092:  MM_NO_AUTH_CHALLENGE Received in UMTS RAT
Line 2170: 
Line 2197: 
Line 2204: Ciphering -> %s, PduId -> %04X
Line 2235:  Processing GMM Auth. Failure -> %s : Auth Fail Count -> %d
Line 2245:  Set mm_BarCellIdArfcn :%d
Line 2386: Checking to see if Timers had been stopped due to Auth Failure. They need to be started again.
Line 2428: 
Line 2488: Security Mode is NOT Activated for this Domain Yet. Ignoring Msg
Line 2499:  In this state, This Msg is NOT treated as Service Acc
Line 2504:  Func State before serv req is not IDLE
Line 2507:  In this state, this Msg is treated as Completion of  Service Req [24.008]-4.7.13.3
Line 2528:  Starting GMM_PS_CONN_REL_TIMER to  Monitor RB establishment or DL signaling 
Line 2641: Cell Barring Period -> %d Seconds
Line 3140: GMM Auth Ciphering Ref. Number = %d  
Line 3144:  GMM Auth Ciphering Ref. Number IE is Not Valid !!?? 
Line 3157: MM RAND ->
Line 3170: MM AUTN ->
Line 3183: MM AUTS -> 
Line 3196: GMM AUTS -> 
Line 3209: Authentication Challenge -> %s 
Line 3319: Auth Fail Count = %d
Line 3331: (S)RES -> 0x%02X 0x%02X 0x%02X 0x%02X
Line 3344: GMM (S)RES -> 0x%02X 0x%02X 0x%02X 0x%02X
Line 3356: Auth Failure -> %s
Line 3370: RES Extension Length -> %d
Line 3371: RES Extension -> ...
Line 3376: RES Extension Does Not Exist
Line 3391: GMM RES Extension Length -> %d
Line 3396: GMM RES Extension Does Not Exist
Line 3409: 
Line 3424: 
Line 3449: mm_LastAuthTransactionId -> %d 
Line 3457: MM RAND in AUTH_REQ -> 
Line 3461: MM AUTN in AUTH_REQ -> 
Line 3468: GMM RAND in AUTH_REQ -> 
Line 3473: GMM AUTN in AUTH_REQ -> 
Line 3483: Authentication Type -> %s, Sim Reponse -> %s,  KcAvailable -> %s
Line 3485: Kc ->
Line 3488: RspLength : %d
Line 3490: AuthRsp ->
Line 3493: Ck ->
Line 3496: Ik ->
Line 3499: AUTS ->
Line 3582:  FLAG: %s               -> TRUE
Line 3627: Wrong Action =%d 
Line 3678: 
Line 3681: PduId -> %04X
Line 3699: 
Line 3749: Perform Auth Fail Actions in mm_ProcessNetAuthFailure 
Line 3790: Deleting GSM Kc128
Line 3809: Deleting GPRS Kc128
Line 3853: GSM Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 3859: GSM Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 3866: GSM Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 3873: GSM Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 3896: GPRS Kc128 ->  0x%x  0x%x  0x%x  0x%x 
Line 3902: GPRS Kc128 ->  0x%x  0x%x  0x%x  0x%x 0x%x  0x%x  0x%x  0x%x 
Line 3909: GPRS Kc128 ->0x%x  0x%x  0x%x  0x%x 
Line 3915: GPRS Kc128 ->0x%x  0x%x  0x%x  0x%x 
