Line 295: %s: SRNC state = %s, CLIENT1 = %s, CLIENT2 = %s, CLIENT3 = %s, CLIENT4 = %s
Line 407: %s
Line 437: %s: %s
Line 459: %s: %s
Line 460: Original: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 465: Updated: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 472: ERROR: This client entity is already de-registered
Line 490: %s
Line 515: %s
Line 578: srnc_UpdateStackInfo: StackParamType = %d, Param = %d, ClientEntity = %s
Line 606: ERROR: In %s : Invalid StackParamType %d
Line 614: ERROR: In %s : %s is not initialized
Line 675: ERROR: In %s : Invalid StackParamType %d
Line 721: %s: %s
Line 722: Original: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 727: Updated: srnc_db.Srnc_RegisteredClientEntitiesBitMap: 0x%x
Line 734: ERROR: This client entity is already registered
Line 754: ERROR: Set value received is SRNC_ERROR, Do not update srnc state
Line 795: Received typeofproc is outofbond size
Line 800: %s already holding the grant for %s
Line 933: In %s: newClientState is SRNC_ERROR 
Line 939: In %s: Client is greater than equal to SRNC_MAX_CLIENT 
Line 945: Original srnc_db.ClientProcInfo[%d].ClientEntityBitMap[%s]: 0x%x
Line 970: Updated srnc_db.ClientProcInfo[%d].ClientEntityBitMap[%s]: 0x%x
Line 1003: %s Holds %s Proc grant
Line 1024: %s: %s
Line 1051: %s: %s
Line 1055: In %s: Client is greater than equal to SRNC_MAX_CLIENT 
Line 1064: INTERNAL RESUME_REQ due to client REGISTER/DEREGISTER request
Line 1072: 
Line 1073: 
Line 1075: 
Line 1114: In %s: Client is greater than equal to SRNC_MAX_CLIENT 
Line 1152: Other Clients PROC - %s 
Line 1172: ERROR: Request received from invalid client
Line 1176: %s : %s proc %s
Line 1195: Final pending proc:client1 - %s, client2 - %s, client3 - %s
Line 1214: ERROR: Request received from invalid client
Line 1226: %s Request from %s: %s status = 0x%x 
Line 1228: Pending proc:client1 - %s, client2 - %s, client3 - %s 
Line 1273: ERROR: Request received from invalid client
Line 1277: %s : %s proc %s
Line 1297: Final pending proc:client1 - %s, client2 - %s, client3 - %s
Line 1319: ERROR: Request received from invalid client
Line 1325: %s : %s -> PROC - %s 
Line 1334: Final pending proc:client1 - %s, client2 - %s, client-3 - %s
Line 1360: 
Line 1416: 
Line 1420: 
Line 1452: ERROR: Request received from invalid ClientEntity
Line 1458: ERROR: Request received with invalid typeofproc
Line 1464: %s: Requested ProcType: %s,  ProcCause: %d, ClientEntity: %s, ClientId: %s, stateupdateNotNeeded: %d
Line 1469: STANDBY_REQ with SRNC_IDLE, No actions are required.
Line 1494: The Client is requesting the Grant wrongly
Line 1500: When client has CSCALL already, another client requesting the STANDBY_REQ, disard the standby request
Line 1544: %s: Added to Grant Pending List
Line 1547: 
Line 1549: 
Line 1562: Existing Priority List Info for  %s -> ClientId : %s, Priority  : %d
Line 1567: Updated Priority List Info for  %s -> ClientId : %s, Priority  : %d
Line 1582: %s
Line 1625: Since CSCALL is pending on other stack, rejecting the grant
Line 1641: %s has requested the %s with high priority than the awaited client, so allowing it directly
Line 1646: This proc is already resvered for %s
Line 1678: ERROR: %s: Request received from invalid ClientEntity
Line 1684: ERROR: Request received with invalid typeofproc
Line 1689: %s: Requested Proc Type: %s, ClientEntity: %s, ClientId: %s
Line 1695: RESUME_REQ with SRNC_IDLE, No actions are required.
Line 1701: Grant is released without taking it. So Clear it from PendingList
Line 1703: 
Line 1705: 
Line 1715: Other client Holds %s Proc grant
Line 1722: Grant is released without taking it. But waiting for other client entities to send RESUME/STANDBY
Line 1732: ERROR: Stored ClientEntity for this Proc is not matching with requested ClientEntity
Line 1747: Grant is still occupied by other clients, so don't clear SRNC states
Line 1756: Grant is released
Line 1760: No changes in SRNC state
Line 1766: Grant is still occupied by other client entities, so don't clear SRNC states
Line 1866: %s
Line 1885: In %s
Line 1886: Resetting other client's Pending Procs and client states if any, due to CS CALL GRANT
Line 1910: In %s
Line 1969: In %s: Client is greater than equal to SRNC_MAX_CLIENT 
Line 1990: Restoring the old uncleared procs -> BackupProc : %s, ClientId: %s
Line 2051: 
Line 2052: 
