Line 43:  
Line 44: RxReorderingQ :: GetInsertPoint() is called
Line 45: (SN : %d, FI : %d, SO : %d, LSF : %d, Payload : %P)
Line 49: Fail! Last sdu has not inputed yet!
Line 67: Fail! Duplicated data is received!
Line 276: RxReorderingQ :: InsertSdu() is called(LI:%d)
Line 279: Fail! GetInsertPoint function has not called yet!
Line 375:  
Line 376: RxReorderingQ :: Reassemble(%d) is called
Line 424:  
Line 425: RxReorderingQ :: ReassembleAll() is called
Line 426:  
Line 456: RxReorderingQ :: GetReassembledSdu() is called
Line 472: RxReorderingQ :: GetReassembledSdu() :: Fail to reassemble sdus.
Line 547: RxReorderingQ :: GetReassembledSdu() :: Fail to reassemble sdus. Incomplete sdus are released.
Line 562: RxReorderingQ :: GetReassembledSdu() :: A pdu of upper layer is made of sdus<%P>.
Line 643:  
Line 644: |        Reordering Q        |
Line 645: |                            |
Line 646: |                            |
Line 647: |----------------------------|
Line 658: |       SN:INF    EO:INF         |
Line 662: |       SN:%-5dEO:INF         |
Line 666: |       SN:%-5dEO:%-5d     |
Line 668: |       NACK <%P>      |   [N]
Line 674: |       SN:%-5dSO:%-5d     |   <----   NackTable<%d>
Line 678: |       SN:%-5dSO:%-5d     |   <----   NackTable<%d, NearestFront>
Line 683: |       SN:%-5dSO:%-5d     |
Line 685: |----------------------------|
Line 691: |       first, last          |
Line 695: |       first                |
Line 699: |       last                 |
Line 703: |                            |
Line 705: |       SDU <%P>       |
Line 709: |       Len:%-4dSN:%-5d     |   <----   NackTable<%d>
Line 713: |       Len:%-4dSN:%-5d     |
Line 715: |----------------------------|
Line 719: |                            |
Line 720: |                            |
Line 721:  
Line 730:  
Line 731: |     Original Q     |
Line 732: |                    |
Line 736: |   Queue is empty!  |
Line 737: |                    |
Line 738:  
Line 743: |                    |
Line 744: |--------------------|
Line 749: |    PDU <%P>  |
Line 750: |    Length : %-4d   |
Line 751: |--------------------|
Line 755: |                    |
Line 756: |                    |
Line 757:  
Line 768:  
Line 769: |    Reassemble Q    |
Line 770: |                    |
Line 774: |   Queue is empty!  |
Line 775: |                    |
Line 776: |                    |
Line 781: |                    |
Line 782: |--------------------|
Line 787: |   UpperLayer PDU   |
Line 788: |   Length : %-4d    |
Line 789: |--------------------|
Line 793: |                    |
Line 794: |                    |
Line 795:  
