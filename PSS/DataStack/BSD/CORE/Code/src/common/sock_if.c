Line 79: get_socket >> Invalid socket ID
Line 110: SOCKET SWITCH: Socket Creation for ContextID[%d] failed with error [%d] 
Line 144: CREATE SOCKET: VCE task => cid: %d imsBeareSid : %d
Line 152: CREATE SOCKET: TCP/IP IF not present for CID: %d >> recover TCPIP Interface
Line 161: CREATE SOCKET: Failed to create Socket
Line 165: socket created with sock_id = %d CID = %d 
Line 244:  SOCKET Connect: FAILED
Line 249: siso_connect ==>> order change 
Line 271:  SOCKET Connect: FAILED with error [%d]
Line 275:  SOCKET Connect sent Successfully
Line 298: siso_setsockopt [%d]
Line 305: siso_setsockopt >> No valid interface for CID [%d]
Line 311: siso_setsockopt >> if index [%d]
Line 319: siso_setsockopt >> No valid interface for CID [%d]
Line 325: siso_setsockopt >> if index [%d]
Line 332: set socket options failed with error: %d 
Line 377:  SOCKET CLOSE: FAILED-> No Socket attached with Sock ID [%d]
Line 403: SOCKET CLOSE: FAILED with error: %d 
Line 408: SOCKET [%d] CLOSE: success
Line 455: SOCKET BIND: FAILED-> No Socket attached with sock_id [%d]
Line 460:  SOCKET BIND: Initial Context ID [%d]
Line 463: [sds_sobind] VCE task %d
Line 476: [sds_sobind] Bearer Context ID [%d]
Line 488: [sds_sobind] Changing order 
Line 491: [sds_sobind] address is NULL 
Line 499: [sds_sobind] IPv4 ADDR: Add Address = 0x%x
Line 502: [sds_sobind] unspecified address in DB - binding failed
Line 511: [sds_sobind] address is NULL and imsBearerSid is %d 
Line 521:  [sds_bind] unspecified address in DB - binding failed >> recover TCPIP Interface
Line 526: [sds_sobind] IPV6 ADDR: 
Line 529: [sds_sobind] unspecified address in DB - binding failed
Line 537: [sds_sobind] changing order 
Line 543: [sds_sobind] sin6_family=%d, sin6_port=%d
Line 544: [sds_sobind] sin6_addr: 
Line 551: [sds_sobind] Added zoneid : %d
Line 552: [sds_sobind] sds6_addr->sin6_addr :
Line 561: [sds_sobind] failed with error: %d 
Line 588: socket bind called with sock_id [%d] 
Line 599:  SOCKET CONNECT: FAILED-> No Socket attached with sock_id [%d]
Line 627:  SOCKET SETOPTIONS: FAILED-> No Socket attached with sock_id [%d]
Line 649: siso_sendto sock_id = %d len = %d
Line 739: SOCKET SEND: FAILED-> No Socket attached with sock_id [%d]
Line 762: SOCKET SEND: Invalid Length Param's
Line 787: SOCKET SEND: Failed to get SOCK ADDR
Line 805: [sds_sendmsg] sa_family = %d
Line 809: [sds_sendmsg] There is no interface about ContextID=%d
Line 832: SOCKET SEND: Invalid SOCK ARGS. Error Id => %d
Line 840: [sds_sendmsg] >>sending to sosend_generic len = %d
Line 844: [sds_sendmsg] >>sosend_generic failed with error = %d
Line 846: Socket Send: Data sent successfully
Line 934: SOCKET RECV: Called len =%d sock_id =%d
Line 957: [siso_recvfrom_direct_app] sin_port=0x%x, sin_addr=0x%x
Line 964: [siso_recvfrom_direct_app] sin6_port=0x%x, sin6_addr
Line 969: [siso_recvfrom_direct_app] address type is invaild!!(%d)
Line 1023:  SOCKET RECVFROM: FAILED-> No Socket attached with sock_id [%d]
Line 1030: [siso_recv] Pending data in sockbuf [%d]
Line 1045:  SOCKET RECVFROM: FAILED-> No Socket attached with sock_id [%d]
Line 1059: SDS_decode_options!! 
Line 1062: [SDS_decode_options] No options or end of options !! 
Line 1070: SDS_decode_options opt_cnt [%d] option [%d] total_len [%d] !! 
Line 1073: SDS_decode_options opt_cnt [%d] option [%d] total_len [%d] !! 
Line 1099: SOCKET RECV: No Socket associated for sock_id [%d]
Line 1117: siso_recvit_direct_app returning NULL because sum > SSIZE_MAX
Line 1131:  control info !! cmsg->cmsg_type [%d] cmsg->cmsg_level [%d]
Line 1148:  Total length of the options [%d]
Line 1149:  Option value [%d]
Line 1150:  Option length [%d]
Line 1153: No options available!! 
Line 1163: [recv options ]
Line 1218: siso_close >> Invalid socket ID [%d]
Line 1225: siso_close stream socket [%d]
Line 1242: siso_close closing.sock:%d with error:%d
Line 1257: SDS_close_all_sockets>> closing socket with sock_id: [%d] and Context id: [%d]
Line 1272: SDS_Display_ActiveSockets :: Sock_ID [%d] ContextID [%d] IpsecSocket [%d] 
Line 1285: SDS_ForceClose_ActiveSockets :: Sock_ID [%d] ContextID [%d] IpsecSocket [%d] 
Line 1295: SOCKET RAISE ASYNC EVENT: Raise EVENT => %d
Line 1299: SOCKET RAISE ASYNC EVENT: NVALID PARAM. EVENT => 0x%x, SO_EVENT => 0x%x, EVENT_HAPPENED => 0x%x, sock_id => %d
Line 1304: SDS_raise_async_event: SocketEvent: [%d] Socket Event Happened [%d] SOCKID [%d]
Line 1307: SDS_raise_async_event: async callback = so->async_cb %d
Line 1316: SDS_raise_async_event: SocketEvent: [%d] Socket Event Happened [%d]
Line 1321: SOCKET RAISE ASYNC EVENT: calling async_Cb
Line 1328: SOCKET RAISE ASYNC EVENT: ASYNC_CB => NULL for sock_id => %d
Line 1346:  SOCKET ASYNCSELECT: FAILED-> No Socket attached with sock_id [%d]
Line 1381:  SHUTDOWN: FAILED-> No Socket attached with sock_id [%d]
Line 1404: SHUTDOWN: FAILED failed with error: %d 
Line 1409: SOCKET [%d] CLOSE: success
