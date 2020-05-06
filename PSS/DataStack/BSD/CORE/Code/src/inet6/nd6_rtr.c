Line 157: NDP: Router Solicitation
Line 161:  Interface doesn't exist for this contextID [%d] 
Line 188:  nd6_rs_input: invalid hlim [%d] 
Line 197: nd6_rs_input: unspecified address: 
Line 222:  nd6_rs_input: invalid ND option, ignored
Line 240: nd6_rs_input: Invalid value >> lladdr : 
Line 241: nd6_rs_input: Invalid value >> lladdrlen=%d, ifp->if_addrlen=%d
Line 441: nd6_ra_input: No Valid interface exists.. returning. 
Line 446: nd6_ra_input >> ifx: %d , cid: %d
Line 454: [RSRA] stop and remove RS retransmission timer & count : %d, ifx: %d
Line 471: nd6_ra_input: Hop limit != 255 >> 
Line 490: NDP: Router Advertisement Received
Line 524: nd6_ra_input mcast : %d
Line 528: nd6_ra_input >> ndi = %x
Line 547: [RSRA] start router life timer [idx: %d] -> %d secs
Line 556: [RSRA] applying router lifetime of 75/100 portion for VZW %d -> %d
Line 575: [RSRA] start router timer timer [%d] -> %d secs
Line 641: [RSRA] nd6_ra_input: invalid option ignored
Line 657: [RSRA] nd6_ra_input: invalid prefix len ignored
Line 677: [RSRA] nd6_ra_input: invalid prefix ignored
Line 703: [RSRA] prefferd lifetime %d, valid lifetime%d
Line 713: [RSRA] applying preffered lifetime of 75/100 portion for VZW %d -> %d
Line 722: [RSRA] set preffered timer as infinity
Line 724: [RSRA] prefer timer already set as infinity
Line 732: [RSRA] start preffered timer [%d] -> %d secs
Line 745: [RSRA] applying valid lifetime of 75/100 portion for VZW %d -> %d
Line 754: [RSRA] set valid timer as infinity
Line 756: [RSRA] valid timer already set as infinity
Line 764: [RSRA] valid timer [%d] -> %d secs
Line 773: nd6_ra_input rsp if index [%d] ContextID [%d]
Line 806: nd6_ra_input: bogus mtu option, mtu size = %d, skip mtu update
Line 816: [RSRA] updating mtu... prev: %d new: %d
Line 830: nd6_ra_input: bogus mtu option, exceeds max mtu, mtu size = %d, skip mtu update
Line 841: nd6_ra_input Source link layer address >>
Line 858: nd6_ra_input nd6_cache_lladdr >>
Line 868: nd6_ra_input sending response back
Line 872: Ifx value is -1!
Line 877: nd6_ra_input rsp if index [%d] ContextID [%d]
Line 896: [RSRA] valid timer duration is less than other timer values !!!
Line 905: nd6_ra_input bad >> 
Line 946: nd6_rtmsg ifa [0x%x]
Line 1048: [ND6] Deleting default rtrlist
Line 1061: [ND6] Deleting prefix information
Line 1076: [ND6] Default router list deletion Success
Line 1473: prelist_update >> check option(%d)
Line 1577: prelist_update >> prefi rtr add done
Line 1587: prelist_update >> A bit not set for auto config.. just ending
Line 1598: prelist_update >> consistency check on lifetimes failed.. ending
Line 1617: prelist_update >> checking for matching prefix
Line 1700: prelist_update >> in6_init_address_ltimes
Line 1748: prelist_update >> could not find any matching prefix
Line 1765: prelist_update >> no addr is matched and valid lifetime is non-zero. create new addr
Line 1774: prelist_update >> prelist_update: IFID undefined ending
Line 1785: prelist_update >> prelist_update: invalid prefixlen
Line 1789: prelist_update :: in6_ifadd >>
Line 1814: [RSRA] prelist_update: V_ip6_use_tempaddr : %d
Line 1823: [RSRA] prelist_update: failed to create a temporary address
Line 2082: pfxlist check > IN6_IFF_DETACHED
Line 2442: in6_ifadd >> no ifa. returning null
Line 2477: in6_ifadd :: Set autoconf >>
Line 2493: in6_ifadd :: Address is already configured
Line 2516: in6_ifadd :: failed to make ifaddr
Line 2530: in6_ifadd >> ia6_flags : 0x%x
Line 2531: in6_ifadd >> ia: 
Line 2568: [RSRA] in6_tmpifadd : in6_tmpifadd: failed to find a good random IFID
Line 2595: [RSRA] in6_tmpifadd : failed to find a unique random IFID
