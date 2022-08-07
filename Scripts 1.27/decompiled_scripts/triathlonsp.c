#region Local Var
	bool bLocal_0 = 0;
	char cLocal_1[24] = "";
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	char* sLocal_26 = NULL;
	float fLocal_27 = 0f;
	struct<3> Local_28 = { 0, 0, 0 } ;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	struct<421> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_475 = 15;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 16;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	bool bLocal_717 = 0;
	bool bLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	float fLocal_728 = 0f;
	float fLocal_729 = 0f;
	float fLocal_730 = 0f;
	int iLocal_731 = 0;
	float fLocal_732 = 0f;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	int iLocal_743 = 0;
	struct<3> Local_744 = { 0, 0, 0 } ;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	struct<13> Local_752 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	var uLocal_805 = 0;
	char* sLocal_806 = NULL;
	char* sLocal_807 = NULL;
	char* sLocal_808 = NULL;
	char* sLocal_809 = NULL;
	char* sLocal_810 = NULL;
	char* sLocal_811 = NULL;
	char* sLocal_812 = NULL;
	char* sLocal_813 = NULL;
	struct<175> Local_814 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	int iLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1024[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1033[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_1042 = { 0, 0, 0 } ;
	char* sLocal_1045 = NULL;
	char* sLocal_1046 = NULL;
	char* sLocal_1047 = NULL;
	char* sLocal_1048 = NULL;
	char* sLocal_1049 = NULL;
	char* sLocal_1050 = NULL;
	var uLocal_1051[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1060[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<7> Local_1069 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080 = 0;
	int iLocal_1081 = 0;
	char* sLocal_1082[4] = { NULL, NULL, NULL, NULL };
	char* sLocal_1087[3] = { NULL, NULL, NULL };
	int iLocal_1091[4] = { 0, 0, 0, 0 };
	int iLocal_1096 = 0;
	int iLocal_1097 = 0;
	int iLocal_1098[101] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1200[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1221[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1242[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1263[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1284 = 0;
	var uLocal_1285[2] = { 0, 0 };
	int iLocal_1288 = 0;
	var uLocal_1289 = 32;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 8;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 8;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 8;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 8;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	int iLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = -1;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 1000;
	var uLocal_1369 = 1000;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	struct<5> Local_1384 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	int iLocal_1394 = 0;
	char* sLocal_1395 = NULL;
	char* sLocal_1396 = NULL;
	char* sLocal_1397 = NULL;
	struct<3> Local_1398 = { 0, 0, 0 } ;
	struct<3> Local_1401 = { 0, 0, 0 } ;
	struct<3> Local_1404 = { 0, 0, 0 } ;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 8;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 2;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 8;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 8;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	float fLocal_1451 = 0f;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 3;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 4;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 2;
	var uLocal_1568 = 0;
	var uLocal_1569 = 4;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 4;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 12;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 3;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	struct<562> Local_1891 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	struct<8> Local_2467 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 1132396544;
	var uLocal_2478 = 1132396544;
	var uLocal_2479 = 1132396544;
	var uLocal_2480 = 0;
	var uLocal_2481 = -1082130432;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 8;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = -1;
	var uLocal_2542 = 1092616192;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	struct<3> Local_2555 = { 0, 0, 0 } ;
	struct<3> Local_2558 = { 0, 0, 0 } ;
	struct<3> Local_2561 = { 0, 0, 0 } ;
	struct<3> Local_2564 = { 0, 0, 0 } ;
	struct<3> Local_2567 = { 0, 0, 0 } ;
	struct<3> Local_2570 = { 0, 0, 0 } ;
	struct<3> Local_2573 = { 0, 0, 0 } ;
	struct<3> Local_2576 = { 0, 0, 0 } ;
	int iLocal_2579 = 0;
	float fLocal_2580 = 0f;
	float fLocal_2581 = 0f;
	int iLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	struct<10> Local_2592 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
	struct<3> Local_2604 = { 0, 0, 0 } ;
	float fLocal_2607 = 0f;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 8;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 4;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 4;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 4;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 4;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 4;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 4;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 4;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 4;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	int iLocal_2759 = 0;
	int iLocal_2760 = 0;
	int iLocal_2761 = 0;
	struct<4401> Local_2762 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 25;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 0;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 2;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	struct<3> Local_7220 = { 0, 0, 0 } ;
	var uLocal_7223 = 0;
	struct<3> Local_7224 = { 0, 0, 0 } ;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	int iLocal_7230 = 0;
	int iLocal_7231 = 0;
	int iLocal_7232 = 0;
	int iLocal_7233 = 0;
	int iLocal_7234 = 0;
	struct<8> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	struct<6> Var1;
	var uVar7;
	
	StringCopy(&cLocal_1, "MPMissMarkers256", 24);
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 1;
	iLocal_14 = 1;
	iLocal_15 = 134;
	iLocal_16 = 1;
	iLocal_17 = 12;
	iLocal_18 = 12;
	fLocal_21 = 0.001f;
	sLocal_26 = "NULL";
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_34 = 3;
	fLocal_37 = 80f;
	fLocal_38 = 140f;
	fLocal_39 = 180f;
	iLocal_45 = 1;
	iLocal_46 = 65;
	iLocal_47 = 49;
	iLocal_48 = 64;
	sLocal_806 = "TRI_NEWS_00";
	sLocal_807 = "TRI_NEWS_01";
	sLocal_808 = "TRI_NEWS_02";
	sLocal_809 = "TRI_NEWS_03";
	sLocal_810 = "TRI_NEWS_04";
	sLocal_811 = "TRI_NEWS_05";
	sLocal_812 = "TRI_NEWS_06";
	sLocal_813 = "TRI_NEWS_07";
	sLocal_1395 = "CHECKPOINT_NORMAL";
	sLocal_1396 = "CHECKPOINT_MISSED";
	sLocal_1397 = "CHECKPOINT_PERFECT";
	Local_1398 = { 1694.74f, 3276.502f, 41.2796f };
	Local_1401 = { 8.79494f, 0.59893f, 154.8464f };
	Local_1404 = { 500f, 500f, 500f };
	fLocal_1451 = ((0.05f + 0.275f) - 0.01f);
	fLocal_2580 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 9f);
	fLocal_2581 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_1089(&Local_2762, 1);
	}
	StringCopy(&Var1, "NONE", 24);
	GlobalFunc_5771(17);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	Local_2467.f_1 = 0;
	Local_2467.f_5 = 0;
	Local_2467.f_6 = 0;
	Local_2467.f_7 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
	while (true)
	{
		GRAPHICS::DRAW_DEBUG_LINE(2366.77f, 4255.247f, 30.3808f, 2426.47f, 4332.712f, 35.244f, 0, 0, 255, 100);
		func_1070(Var1, 0, 0, 0, 0, 0);
		func_1069();
		switch (Local_2467.f_1)
		{
			case 0:
				if (!func_1024(ScriptParam_0, &uVar7, &Local_2762))
				{
					Local_2467.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_313(&uVar0, &uVar7))
				{
					Local_2467.f_1 = 2;
				}
				break;
			
			case 2:
				if (func_312())
				{
					func_2();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()//Position - 0x21E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_54.f_414)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Local_54.f_414[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Local_54.f_414[iVar0]);
		}
		iVar0++;
	}
}

void func_2()//Position - 0x259
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	func_92();
	func_3();
	AUDIO::TRIGGER_MUSIC_EVENT("MGTR_STOP");
	AUDIO::STOP_AUDIO_SCENE("TRI_START_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_SWIM_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_BIKE_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_RUN_SCENE");
	AUDIO::STOP_AUDIO_SCENE("TRI_END_SCENE");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()//Position - 0x2B0
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	switch (iVar0)
	{
		case 0:
			GlobalFunc_11042(joaat("player_zero"), 12, 13, 1, 1);
			GlobalFunc_10922(joaat("player_zero"), 12, 13, 1);
			break;
		
		case 2:
			GlobalFunc_11042(joaat("player_two"), 12, 9, 1, 1);
			GlobalFunc_10922(joaat("player_two"), 12, 9, 1);
			break;
		
		case 1:
			GlobalFunc_11042(joaat("player_one"), 12, 6, 1, 1);
			GlobalFunc_10922(joaat("player_one"), 12, 6, 1);
			break;
	}
}

























































































void func_92()//Position - 0x18C71
{
	float fVar0;
	int iVar1;
	
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
	func_311(PLAYER::PLAYER_PED_ID(), 357, 0);
	GlobalFunc_235(&Local_2762);
	func_298(&Local_2762);
	GlobalFunc_184(117, 1);
	if (Local_54.f_58 != -1)
	{
		fVar0 = func_296(Local_54.f_58);
		if (fVar0 <= 0f || fVar0 > Local_54.f_60[Local_54.f_58])
		{
			fVar0 = Local_54.f_60[Local_54.f_58];
		}
		Local_2762.f_3 = fVar0;
		Local_2762.f_4 = (Local_2762.f_3 / 2f);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
	func_286(&Local_2762);
	Local_2762.f_11 = 0;
	func_285();
	func_284(&Local_2762);
	func_280();
	iVar1 = 0;
	while (iVar1 < Local_2762.f_12)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[0 /*206*/].f_8) || PED::IS_PED_INJURED(Local_2762.f_1735[0 /*206*/].f_8))
		{
			if (!PED::IS_PED_INJURED(Local_2762.f_1735[iVar1 /*206*/].f_8) && iVar1 != 0)
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_2762.f_1735[iVar1 /*206*/].f_8, Local_2762.f_1735[iVar1 /*206*/].f_16, 1f, 20000, 1193033728, 1056964608);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[iVar1 /*206*/].f_8) && !PED::IS_PED_INJURED(Local_2762.f_1735[0 /*206*/].f_8))
		{
			if (!Local_2762.f_1735[iVar1 /*206*/].f_8 == Local_2762.f_1735[0 /*206*/].f_8)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2762.f_1735[iVar1 /*206*/].f_8));
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[iVar1 /*206*/].f_9))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2762.f_1735[iVar1 /*206*/].f_9));
		}
		iVar1++;
	}
	if (func_278(64))
	{
		if (!Local_54.f_287)
		{
			func_271(PLAYER::PLAYER_PED_ID());
			func_102(PLAYER::PLAYER_PED_ID(), &(Local_54.f_222), 0);
			Local_54.f_287 = 1;
		}
	}
	GlobalFunc_842(0, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_roadcyc_01"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_sharktiger"), 0);
	GlobalFunc_7632(0);
	GlobalFunc_53();
	GlobalFunc_139();
	sLocal_1050 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(200);
	}
}










void func_102(int iParam0, var uParam1, bool bParam2)//Position - 0x190D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], 0);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11155(iParam0, iVar1, &iVar2, 0))
			{
				func_255(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11153(iParam0, iVar1, &iVar2))
			{
				func_255(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11292(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11292(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}

























































































































































int func_255(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4526A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_255(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11234(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_255(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11154(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11155(iParam0, iVar10, &iVar4, 1))
							{
								func_255(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_255(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10836(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_255(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_255(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_255(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_255(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_255(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11234(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_255(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_255(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11234(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_255(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11036(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11155(iParam0, iVar10, &iVar4, 0))
		{
			func_255(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11153(iParam0, iVar10, &iVar4))
		{
			func_255(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}
















void func_271(int iParam0)//Position - 0x47948
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_102(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11154(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11154(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11154(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11154(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_102(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}







bool func_278(int iParam0)//Position - 0x4803C
{
	return GlobalFunc_747(uLocal_51, iParam0);
}


void func_280()//Position - 0x4805B
{
	GlobalFunc_5674(&Local_1891);
}




void func_284(var uParam0)//Position - 0x48151
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[0]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[1]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[2]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[3]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[4]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[5]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4377[6]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_54.f_220));
}

void func_285()//Position - 0x481B5
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_1285[0]));
	if (func_278(64))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_1285[1]));
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_1285[1]));
	}
}

void func_286(var uParam0)//Position - 0x481E7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		func_287(uParam0, iVar0);
		iVar0++;
	}
}

void func_287(var uParam0, int iParam1)//Position - 0x4820C
{
	if (iParam1 < 0 || iParam1 > 121)
	{
		return;
	}
	func_294(&(uParam0->f_26[iParam1 /*14*/]));
	func_289(&(uParam0->f_26[iParam1 /*14*/]));
	func_288(&(uParam0->f_26[iParam1 /*14*/]));
}

void func_288(var uParam0)//Position - 0x4824D
{
	uParam0->f_3 = { Local_54.f_3 };
	uParam0->f_6 = 10.25f;
	uParam0->f_11 = 0;
	uParam0->f_7 = 10f;
	uParam0->f_13 = 0;
}

void func_289(var uParam0)//Position - 0x4827D
{
	func_290(&(uParam0->f_10));
}

void func_290(var uParam0)//Position - 0x4828D
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		func_291(33554432);
		*uParam0 = 0;
	}
}

void func_291(int iParam0)//Position - 0x482B0
{
	if (!func_278(iParam0))
	{
		GlobalFunc_6594(&uLocal_51, iParam0);
	}
}



void func_294(var uParam0)//Position - 0x482EB
{
	GlobalFunc_703(&(uParam0->f_9));
}


var func_296(int iParam0)//Position - 0x48313
{
	var uVar0;
	
	uVar0 = Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRI_TIMES[iParam0];
	return uVar0;
}


void func_298(var uParam0)//Position - 0x48389
{
	func_300();
	GlobalFunc_2435(uParam0->f_4371);
}


void func_300()//Position - 0x483AC
{
	GlobalFunc_6915(&uLocal_1454);
	GlobalFunc_2420();
}











void func_311(int iParam0, int iParam1, int iParam2)//Position - 0x488D6
{
	PED::SET_PED_CONFIG_FLAG(iParam0, iParam1, iParam2);
}

int func_312()//Position - 0x488E8
{
	if (HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@triathlon", "rummage_bag", 3))
	{
		return 0;
	}
	return 1;
}

int func_313(var uParam0, var uParam1)//Position - 0x48916
{
	bool bVar0;
	float fVar1;
	
	func_1023();
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!bLocal_0)
	{
		if (GlobalFunc_2568(2) || GlobalFunc_2568(3))
		{
			bLocal_0 = true;
		}
	}
	switch (Local_2467.f_6)
	{
		case 0:
			func_994();
			Local_2467.f_6 = 8;
			break;
		
		case 8:
			Local_2762.f_24 = 0;
			Local_2467.f_6 = 9;
			break;
		
		case 9:
			if (!func_972(&Local_2762))
			{
				func_971(&Local_2762, 4);
				func_954(&Local_2762);
				if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[0 /*206*/].f_8))
				{
					uLocal_7223 = ENTITY::GET_ENTITY_HEADING(Local_2762.f_1735[0 /*206*/].f_8);
				}
				GlobalFunc_7260(&uLocal_7227, 0f);
				if (func_278(512))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_7220) > 1000f)
					{
						STREAMING::LOAD_SCENE(Local_7220);
					}
					iLocal_2602 = 3;
					func_291(8192);
				}
				iLocal_2602 = 0;
				func_952(0, 0, 0);
				Local_2467.f_6 = 5;
			}
			break;
		
		case 5:
			HUD::DISPLAY_RADAR(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_932(Local_7220, &Local_2762, uLocal_7223, uParam1, &iLocal_7231, &iLocal_7232);
			if (!func_278(4096))
			{
				HUD::DISPLAY_RADAR(1);
				func_931();
				if (CAM::DOES_CAM_EXIST(*uParam1))
				{
					CAM::DESTROY_CAM(*uParam1, 0);
				}
				Local_2467.f_6 = 10;
			}
			break;
		
		case 10:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (func_278(128))
			{
				iLocal_7230 = 500;
			}
			else if (iLocal_7230 == 1000)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
			}
			if (GlobalFunc_4625(iLocal_7230))
			{
				GlobalFunc_7260(&uLocal_1010, 1f);
				GlobalFunc_7260(&uLocal_989, Local_814.f_168);
				GlobalFunc_7260(&uLocal_995, Local_814.f_168);
				GlobalFunc_7260(&uLocal_998, Local_814.f_168);
				GlobalFunc_7260(&uLocal_1001, Local_814.f_168);
				GlobalFunc_7260(&uLocal_1004, Local_814.f_168);
				Local_2762.f_25 = 0;
				Local_2467.f_6 = 11;
			}
			break;
		
		case 11:
			if (!Local_2467 == 1)
			{
				if (!func_589(&Local_2762))
				{
					func_579(func_278(512));
					if (func_278(512))
					{
						func_578(Local_2762.f_26[0 /*14*/].f_3 + Vector(50f, 0f, 0f));
					}
					if (func_278(512))
					{
						Local_2467.f_6 = 0;
					}
					else
					{
						GlobalFunc_184(118, 1);
						Local_2467.f_6 = 14;
						func_577(&Local_2762);
					}
				}
				if (Local_2762.f_25 == 7)
				{
					func_335(uParam0);
				}
			}
			break;
		
		case 14:
			if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
			{
				fVar1 = 0.5f;
			}
			else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 1)
			{
				fVar1 = 0.73f;
			}
			else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
			{
				fVar1 = 0.495f;
			}
			else
			{
				fVar1 = 0.75f;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2592.f_8))
			{
				if ((((PAD::GET_DISABLED_CONTROL_NORMAL(0, 30) > 0.2f || PAD::GET_DISABLED_CONTROL_NORMAL(0, 30) < -0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, 31) > 0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, 31) < -0.2f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2592.f_8) > fVar1)
				{
					bVar0 = true;
				}
			}
			if ((!func_278(64) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_2592.f_8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2592.f_8) >= 1f)) || bVar0)
			{
				func_314(&Local_2762, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_2552))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
						}
						else
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
						}
					}
					if (CAM::IS_CAM_RENDERING(uLocal_2552))
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				return 0;
			}
			break;
	}
	return 1;
}

void func_314(var uParam0, int iParam1)//Position - 0x48D0A
{
	func_334();
	func_325();
	func_323(uParam0);
	func_322();
	func_318(iParam1);
	func_317();
	func_285();
	if (func_278(64))
	{
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 0);
		if (!Local_54.f_287)
		{
			func_271(PLAYER::PLAYER_PED_ID());
			func_102(PLAYER::PLAYER_PED_ID(), &(Local_54.f_222), 0);
			Local_54.f_287 = 1;
		}
	}
	GlobalFunc_5848();
	if (Local_54.f_58 == 1)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1", 0);
	}
	else if (Local_54.f_58 == 0)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2", 0);
	}
	else if (Local_54.f_58 == 2)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3", 0);
	}
}



void func_317()//Position - 0x48E77
{
	if (!PED::IS_PED_INJURED(iLocal_7232))
	{
		TASK::CLEAR_PED_TASKS(iLocal_7232);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_7231);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_7232);
}

void func_318(var uParam0)//Position - 0x48E9F
{
	if (func_278(64))
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	func_321();
	func_320();
	func_319(0, uParam0);
}

void func_319(bool bParam0, var uParam1)//Position - 0x48EC7
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_799, uLocal_798, 30000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(1, true, 7000, 1, 0, 0);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uLocal_798))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_798))
			{
				CAM::SET_CAM_ACTIVE(uLocal_798, 0);
			}
		}
		if (CAM::DOES_CAM_EXIST(uLocal_799))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_799))
			{
				CAM::SET_CAM_ACTIVE(uLocal_799, 0);
			}
		}
		CAM::RENDER_SCRIPT_CAMS(0, (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && uParam1), 3000, 1, 0, 0);
	}
}

void func_320()//Position - 0x48F45
{
	if (CAM::DOES_CAM_EXIST(uLocal_797))
	{
		CAM::DESTROY_CAM(uLocal_797, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_798))
	{
		CAM::DESTROY_CAM(uLocal_798, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_799))
	{
		CAM::DESTROY_CAM(uLocal_799, 0);
	}
}

void func_321()//Position - 0x48F83
{
	if (CAM::DOES_CAM_EXIST(uLocal_796))
	{
		CAM::DESTROY_CAM(uLocal_796, 0);
	}
}

void func_322()//Position - 0x48F9D
{
	int iVar0;
	
	HUD::CLEAR_GPS_CUSTOM_ROUTE();
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 122, 0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	PED::SET_PED_MAX_TIME_IN_WATER(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 300f);
	PED::SET_PED_DIES_IN_WATER(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
	PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
	iVar0 = 0;
	while (iVar0 < Local_2762.f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[iVar0 /*206*/].f_9))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_2762.f_1735[iVar0 /*206*/].f_9, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[iVar0 /*206*/].f_8))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_2762.f_1735[iVar0 /*206*/].f_8, 0))
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_2762.f_1735[iVar0 /*206*/].f_8, Local_1069.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_323(var uParam0)//Position - 0x49072
{
	switch (iLocal_736)
	{
		case 1:
			TASK::REMOVE_WAYPOINT_RECORDING("Tri1_Bk_0");
			TASK::REMOVE_WAYPOINT_RECORDING("Tri1_Run");
			break;
		
		case 0:
			TASK::REMOVE_WAYPOINT_RECORDING("Tri2_Bk_0");
			TASK::REMOVE_WAYPOINT_RECORDING("Tri2_Run");
			break;
		
		case 2:
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1045);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1046);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1047);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1048);
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1049);
			TASK::REMOVE_WAYPOINT_RECORDING("Tri3_Run");
			break;
	}
	func_324(uParam0);
}

void func_324(var uParam0)//Position - 0x490F3
{
	char cVar0[64];
	int iVar16;
	
	iVar16 = 0;
	while (iVar16 < uParam0->f_12)
	{
		if (iVar16 != 0)
		{
			switch (iLocal_736)
			{
				case 0:
					StringCopy(&cVar0, "triathlon_ves_racer", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "triathlon_ala_racer", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "triathlon_coy_racer", 64);
					break;
			}
			StringIntConCat(&cVar0, iVar16, 64);
			TASK::REMOVE_WAYPOINT_RECORDING(&cVar0);
		}
		iVar16++;
	}
}

void func_325()//Position - 0x49160
{
	func_333();
	func_332();
	func_331();
	func_330();
	func_326();
}

void func_326()//Position - 0x4917C
{
	GlobalFunc_4988(1, -1);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_805);
}




void func_330()//Position - 0x492F6
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("TRIATHLON");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(&cLocal_1);
}

void func_331()//Position - 0x49316
{
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
}

void func_332()//Position - 0x49324
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1091)
	{
		STREAMING::REMOVE_ANIM_DICT(iLocal_1091[iVar0]);
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT("VEH@BIKE@COMMON@FRONT@BASE");
	STREAMING::REMOVE_ANIM_DICT("missfbi4");
	STREAMING::REMOVE_ANIM_DICT("mini@triathlonintro");
}

void func_333()//Position - 0x49366
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_barrier_work06a"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("frogger"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pencil_01"));
}

void func_334()//Position - 0x49389
{
	struct<3> Var0;
	struct<3> Var3;
	
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(7, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	PED::SET_CREATE_RANDOM_COPS(1);
	Var0 = { -1302.005f, -1779.373f, -2.155f };
	Var3 = { -1331.091f, -1749.161f, 2.789f };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, 1, 1);
}

void func_335(var uParam0)//Position - 0x49404
{
	if (iLocal_7234 == 0)
	{
		func_572();
		func_571(&Local_2762, uParam0);
	}
	else if (iLocal_7234 == 1)
	{
		func_569(&Local_2762);
		func_566();
	}
	else if (iLocal_7234 == 2)
	{
		func_546();
		func_545(&Local_2762);
		func_544(&Local_2762);
	}
	else if (iLocal_7234 == 3)
	{
		func_523(&Local_2762);
		func_518(&Local_2762);
		func_516(&Local_2762);
	}
	else if (iLocal_7234 == 4)
	{
		func_515(&Local_2762);
		func_514(&Local_2762);
		func_509(&Local_2762, 1065353216, 1077936128);
		func_508(&Local_2762, &Local_2592);
	}
	func_507();
	if (iLocal_7234 >= 4)
	{
		iLocal_7234 = 0;
	}
	else
	{
		iLocal_7234++;
	}
	func_506();
	func_444(&Local_2762);
	func_419(&Local_2762);
	func_366();
	func_337();
	if (Local_2762.f_1735[0 /*206*/].f_11 == 1)
	{
		if (!GlobalFunc_226(&uLocal_992))
		{
			GlobalFunc_7260(&uLocal_992, Local_814.f_168);
		}
	}
	else if (Local_2762.f_1735[0 /*206*/].f_11 < 1 && iLocal_736 == 2)
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(1560.936f, 3848.898f, 28.2339f);
	}
}


void func_337()//Position - 0x4953E
{
	if (func_365(&Local_2762, &(Local_2762.f_1735[0 /*206*/])) != 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_364(&Local_2762, 0, 1))
			{
				func_362(Local_2762.f_1735[0 /*206*/].f_11);
			}
			else if (func_364(&Local_2762, 0, 1))
			{
				if (fLocal_732 > 5f)
				{
					func_291(4);
				}
				else
				{
					fLocal_732 = (fLocal_732 + MISC::GET_FRAME_TIME());
				}
			}
		}
		else
		{
			func_338(Local_2762.f_1735[0 /*206*/].f_11);
		}
	}
}

void func_338(int iParam0)//Position - 0x495BD
{
	struct<3> Var0;
	
	if (!func_278(8))
	{
		func_291(8);
		if (iParam0 < Local_2762.f_11)
		{
			if (iParam0 > 0)
			{
				Var0 = { Local_2762.f_26[(iParam0 - 1) /*14*/].f_3 };
			}
			else
			{
				Var0 = { 0f, 0f, 0f };
			}
			if (iParam0 + 1 < Local_2762.f_11)
			{
				func_352(Var0, &(Local_2762.f_26[iParam0 /*14*/]), Local_2762.f_26[iParam0 + 1 /*14*/].f_3, 1092878336);
			}
			else
			{
				func_352(Var0, &(Local_2762.f_26[iParam0 /*14*/]), Local_2762.f_26[iParam0 /*14*/].f_3, 1092878336);
			}
			func_341(&Local_2762, iParam0, 1);
			if (iParam0 == func_340() + 2)
			{
				iLocal_739 = 0;
				func_507();
			}
			if (iParam0 == func_339() + 1)
			{
				iLocal_740 = 0;
				func_507();
			}
		}
		if (iParam0 + 1 < Local_2762.f_11)
		{
			if (iParam0 + 2 < Local_2762.f_11)
			{
				func_352(Local_2762.f_26[iParam0 /*14*/].f_3, &(Local_2762.f_26[iParam0 + 1 /*14*/]), Local_2762.f_26[iParam0 + 2 /*14*/].f_3, 1092878336);
			}
			else
			{
				func_352(Local_2762.f_26[iParam0 /*14*/].f_3, &(Local_2762.f_26[iParam0 + 1 /*14*/]), Local_2762.f_26[iParam0 + 1 /*14*/].f_3, 1092878336);
			}
			func_341(&Local_2762, iParam0 + 1, 0);
		}
	}
}

int func_339()//Position - 0x4971C
{
	switch (iLocal_736)
	{
		case 0:
			return 18;
			break;
		
		case 1:
			return 19;
			break;
		
		case 2:
			return 86;
			break;
	}
	return -1;
}

int func_340()//Position - 0x49757
{
	switch (iLocal_736)
	{
		case 0:
			return 3;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 7;
			break;
	}
	return -1;
}

int func_341(var uParam0, int iParam1, bool bParam2)//Position - 0x4978F
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	if (iParam1 < 0 || iParam1 > 121)
	{
		return 0;
	}
	iVar3 = -1;
	if (iParam1 == (uParam0->f_11 - 1))
	{
		iVar3 = 38;
	}
	fVar4 = 1f;
	if (!bParam2)
	{
		fVar4 = 0.75f;
	}
	if (!func_350(&(uParam0->f_26[iParam1 /*14*/]), iVar3, fVar4, iParam1, uParam0->f_11))
	{
		return 0;
	}
	if (bParam2)
	{
		Var5 = { uParam0->f_26[iParam1 /*14*/].f_3 };
		Var8 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_11 - 1))
		{
			if (!GlobalFunc_537(uParam0->f_26[iParam1 /*14*/].f_3, uParam0->f_26[iParam1 + 1 /*14*/].f_3, 1056964608))
			{
				if (!Local_54 == 2)
				{
					func_345(uParam0->f_26[iParam1 /*14*/].f_3);
				}
				Var5 = { uParam0->f_26[iParam1 + 1 /*14*/].f_3 };
			}
		}
		if (Local_54 == 1)
		{
			if (Local_54.f_58 == 1)
			{
				if (GlobalFunc_747(uParam0->f_26[8 /*14*/].f_12, 4))
				{
					GlobalFunc_5312(&(uParam0->f_26[8 /*14*/].f_12), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_26[(iParam1 - 1) /*14*/].f_3 };
		}
		if (!func_342(Var8, &(uParam0->f_26[iParam1 /*14*/]), Var5, 10.25f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_11)
		{
			if (iParam1 + 2 >= 122)
			{
				Var0 = { uParam0->f_26[0 /*14*/].f_3 };
			}
			else
			{
				Var0 = { uParam0->f_26[iParam1 + 2 /*14*/].f_3 };
			}
			if (!func_342(uParam0->f_26[iParam1 /*14*/].f_3, &(uParam0->f_26[iParam1 + 1 /*14*/]), Var0, 10.25f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_342(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)//Position - 0x49931
{
	if (!func_352(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}



void func_345(struct<3> Param0)//Position - 0x49977
{
	GlobalFunc_7542(&uLocal_1359, 0);
	Local_1384.f_1 = { Param0 };
}





int func_350(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0x49AE6
{
	if (!func_351(&(uParam0->f_9), uParam0->f_3, iParam1, fParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_351(var uParam0, struct<3> Param1, var uParam4, float fParam5, int iParam6, int iParam7)//Position - 0x49B0D
{
	GlobalFunc_703(uParam0);
	*uParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		return 0;
	}
	if (iParam6 == (iParam7 - 1))
	{
		HUD::SET_BLIP_SPRITE(*uParam0, 38);
	}
	HUD::SET_BLIP_SCALE(*uParam0, uParam5);
	HUD::SET_BLIP_DISPLAY(*uParam0, 4);
	if (iParam6 != -1 && iParam7 != -1)
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIP");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	else
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "GATEBLIPDEF");
	}
	return 1;
}

int func_352(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)//Position - 0x49B94
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	char* sVar8;
	
	Param0 = { Param0 };
	func_290(&(uParam3->f_10));
	*uParam3 = { Param4 };
	if (((((uParam3->f_11 != 2 && uParam3->f_11 != 3) && uParam3->f_11 != 4) && uParam3->f_11 != 5) && uParam3->f_11 != 0) && !func_361(uParam3, 4))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(uParam3->f_3, &fVar5))
		{
		}
		else
		{
			fVar6 = 0.5f;
			uParam3->f_3.f_2 = (fVar5 + (fVar6 * fParam7));
		}
	}
	if ((uParam3->f_11 == 5 || uParam3->f_11 == 6) || uParam3->f_11 == 7)
	{
		uVar0 = GlobalFunc_6532(uParam3->f_11, Param0, uParam3->f_3, Param4);
		func_355(GlobalFunc_6295(GlobalFunc_4622()), &uVar1, &uVar2, &uVar3, &(uParam3->f_8));
		uParam3->f_10 = GRAPHICS::CREATE_CHECKPOINT(uVar0, uParam3->f_3, Param4, fParam7, uVar1, uVar2, uVar3, GlobalFunc_2419(uParam3->f_3, 25, 200), 0);
		HUD::GET_HUD_COLOUR(134, &iVar1, &iVar2, &iVar3, &uVar4);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam3->f_10, iVar1, iVar2, iVar3, GlobalFunc_2419(uParam3->f_3, 25, 200));
	}
	else
	{
		uParam3->f_10 = GRAPHICS::CREATE_CHECKPOINT(func_353(uParam3->f_11), uParam3->f_3, Param4, fParam7, 254, 207, 12, GlobalFunc_2419(uParam3->f_3, 25, 200), 0);
		HUD::GET_HUD_COLOUR(134, &iVar1, &iVar2, &iVar3, &(uParam3->f_8));
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam3->f_10, iVar1, iVar2, iVar3, GlobalFunc_2419(uParam3->f_3, 25, 200));
	}
	GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam3->f_10, 1.6f, 1.6f, 100f);
	switch (func_353(uParam3->f_11))
	{
		case 25:
			iVar7 = 9112;
			break;
		
		case 30:
			iVar7 = 9110;
			break;
		
		case 20:
			iVar7 = 9111;
			break;
		
		case 24:
			iVar7 = 9111;
			break;
		
		case 29:
			iVar7 = 9112;
			break;
		
		case 34:
			iVar7 = 9110;
			break;
	}
	switch (func_353(uParam3->f_11))
	{
		case 25:
			sVar8 = "Corona_Marker";
			break;
		
		case 30:
			sVar8 = "Corona_Marker";
			break;
		
		case 20:
			sVar8 = "Corona_Marker";
			break;
		
		case 24:
			sVar8 = "Corona_Marker";
			break;
		
		case 29:
			sVar8 = "Corona_Marker";
			break;
		
		case 34:
			sVar8 = "Corona_Marker";
			break;
	}
	GRAPHICS::PATCH_DECAL_DIFFUSE_MAP(iVar7, &cLocal_1, sVar8);
	if (uParam3->f_10 == 0)
	{
		return 0;
	}
	return 1;
}

int func_353(int iParam0)//Position - 0x49E18
{
	switch (iParam0)
	{
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}


void func_355(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x49EE7
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(uParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(uParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(uParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(uParam0, 0, 7);
}






bool func_361(var uParam0, int iParam1)//Position - 0x4A0A7
{
	return GlobalFunc_747(uParam0->f_12, iParam1);
}

void func_362(int iParam0)//Position - 0x4A0B9
{
	if (func_278(8))
	{
		func_363(8);
		if (iParam0 < Local_2762.f_11)
		{
			func_290(&(Local_2762.f_26[iParam0 /*14*/].f_10));
		}
		if (iParam0 + 1 < Local_2762.f_11)
		{
			func_290(&(Local_2762.f_26[iParam0 + 1 /*14*/].f_10));
		}
		if (HUD::DOES_BLIP_EXIST(Local_2762.f_26[iParam0 /*14*/].f_9))
		{
			if (iParam0 < Local_2762.f_11)
			{
				HUD::SET_BLIP_DISPLAY(Local_2762.f_26[iParam0 /*14*/].f_9, 0);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_2762.f_26[iParam0 + 1 /*14*/].f_9))
		{
			if (iParam0 + 1 < Local_2762.f_11)
			{
				HUD::SET_BLIP_DISPLAY(Local_2762.f_26[iParam0 + 1 /*14*/].f_9, 0);
			}
		}
	}
}

void func_363(int iParam0)//Position - 0x4A176
{
	if (func_278(iParam0))
	{
		GlobalFunc_5312(&uLocal_51, iParam0);
	}
}

int func_364(var uParam0, int iParam1, int iParam2)//Position - 0x4A18F
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0) || (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8) && iParam2))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_1735[iParam1 /*206*/].f_8);
		if ((VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("tribike")) || VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("tribike3")))
		{
			return 1;
		}
	}
	return 0;
}

int func_365(var uParam0, var uParam1)//Position - 0x4A20C
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8))
	{
		if (uParam1->f_11 < uParam0->f_11)
		{
			if (uParam0->f_26[uParam1->f_11 /*14*/].f_11 == 5 || uParam0->f_26[uParam1->f_11 /*14*/].f_11 == 9)
			{
				return 0;
			}
			else if (uParam0->f_26[uParam1->f_11 /*14*/].f_11 == 7 || uParam0->f_26[uParam1->f_11 /*14*/].f_11 == 8)
			{
				return 2;
			}
			else if (uParam0->f_26[uParam1->f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam1->f_11 /*14*/].f_11 == 10)
			{
				return 1;
			}
		}
	}
	return 2;
}

void func_366()//Position - 0x4A2B0
{
	if (!GlobalFunc_747(uLocal_1382, 256))
	{
		func_372();
		GlobalFunc_6594(&uLocal_1382, 256);
	}
	if (!func_278(1))
	{
		GlobalFunc_159("TRI_Q_PROMPT", -1);
		func_291(1);
	}
	if ((func_278(1073741824) && CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		func_370(&Local_2762);
		if (!Local_54.f_287)
		{
			func_271(PLAYER::PLAYER_PED_ID());
			func_102(PLAYER::PLAYER_PED_ID(), &(Local_54.f_222), 0);
			Local_54.f_287 = 1;
		}
		while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_1089(&Local_2762, 0);
	}
	else
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
		{
			func_291(536870912);
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("TRI_QUIT_TITLE", "TRI_QUIT_Q", 36, 0, 0, -1, 0, 0, 1);
			MISC::SET_GAME_PAUSED(1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_369(&Local_2762);
		}
		if (func_278(536870912))
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("TRI_QUIT_TITLE", "TRI_QUIT_Q", 36, 0, 0, -1, 0, 0, 1);
			func_368(&Local_2762);
			if (MISC::GET_GAME_TIMER() > GlobalFunc_3024(&Local_2762) && (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201)))
			{
				MISC::SET_GAME_PAUSED(0);
				CAM::DO_SCREEN_FADE_OUT(0);
				func_363(536870912);
				func_291(1073741824);
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202))
			{
				MISC::SET_GAME_PAUSED(0);
				func_363(536870912);
			}
		}
	}
}


void func_368(var uParam0)//Position - 0x4A448
{
	float fVar0;
	
	fVar0 = MISC::GET_FRAME_TIME();
	uParam0->f_7 = (uParam0->f_7 - SYSTEM::ROUND((fVar0 * 1000f)));
}

void func_369(var uParam0)//Position - 0x4A46B
{
	uParam0->f_7 = MISC::GET_GAME_TIMER() + 1000;
}

void func_370(var uParam0)//Position - 0x4A47E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_8))
			{
				PED::DELETE_PED(&(uParam0->f_1735[iVar0 /*206*/].f_8));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_9))
			{
				VEHICLE::DELETE_VEHICLE(&(uParam0->f_1735[iVar0 /*206*/].f_9));
			}
		}
		iVar0++;
	}
}


void func_372()//Position - 0x4A4FA
{
	int iVar0;
	
	fLocal_2607 = 0f;
	iLocal_737 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	Local_7224 = { GlobalFunc_4532(iLocal_736) };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_737))
	{
		iLocal_737 = 0;
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_737))
	{
		iLocal_737 = 0;
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(GlobalFunc_1421(iLocal_737));
	if ((iVar0 == joaat("taxi") && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_737, -1)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
	{
		iLocal_737 = 0;
		return;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_7224, ENTITY::GET_ENTITY_COORDS(iLocal_737, 1), 1) >= 100f)
	{
		iLocal_737 = 0;
		return;
	}
	switch (iLocal_736)
	{
		case 1:
			Local_2604 = { 1747.303f, 3904.761f, 33.914f };
			fLocal_2607 = 201.6f;
			break;
		
		case 0:
			Local_2604 = { -1345.999f, -1010.268f, 7.0159f };
			fLocal_2607 = 30f;
			break;
		
		case 2:
			Local_2604 = { -2286.66f, 409.97f, 174.12f };
			fLocal_2607 = 133.9f;
			break;
	}
	func_380(iLocal_737, 0f, 0f, 0f, 0f, 24, 0);
	VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_737);
	func_375(iLocal_737, 0);
	func_373();
}

void func_373()//Position - 0x4A62F
{
	struct<3> Var0;
	var uVar3;
	
	func_374(&Var0, &uVar3);
	ENTITY::SET_ENTITY_COORDS(iLocal_737, Var0, 0, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(iLocal_737, uVar3);
}

void func_374(var uParam0, var uParam1)//Position - 0x4A657
{
	switch (iLocal_736)
	{
		case 0:
			*uParam0 = { -1207.51f, -2026.735f, 12.9482f };
			*uParam1 = 308.5434f;
			break;
		
		case 1:
			*uParam0 = { 2437.46f, 4296.979f, 35.6404f };
			*uParam1 = 309.8143f;
			break;
		
		case 2:
			*uParam0 = { 1608.735f, 3816.392f, 33.8315f };
			*uParam1 = 310.085f;
			break;
	}
}

void func_375(int iParam0, int iParam1)//Position - 0x4A6D3
{
	Local_2762.f_4400.f_2 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam0);
	Local_2762.f_4400.f_3 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Local_2762.f_4400 = iParam1;
	GlobalFunc_4932(iParam0, &(Local_2762.f_4400.f_4));
	Local_2762.f_4400.f_1 = 1;
}





void func_380(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x4ABFF
{
	struct<54> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_67138.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_67138.f_484[25], 0))
			{
				if (Global_67138.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		GlobalFunc_8319(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		GlobalFunc_4932(iParam0, &Var0);
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_68102 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		GlobalFunc_8318(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		GlobalFunc_9200(iParam5, iParam0, 0);
	}
}







































void func_419(var uParam0)//Position - 0x4D8C4
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
	if (func_278(32))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, 1);
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80) && GlobalFunc_1718(uParam0) >= 1f)
		{
			func_363(32);
			func_442(uParam0);
			GlobalFunc_702(0, 1, 1);
		}
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80))
	{
		func_440(uParam0);
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 80))
		{
			bVar1 = true;
			if (bVar0)
			{
				bVar1 = MISC::GET_GAME_TIMER() > iLocal_52;
			}
			if (bVar1)
			{
				iLocal_52 = MISC::GET_GAME_TIMER() + 500;
				if (func_278(32))
				{
					func_363(32);
					func_442(uParam0);
					GlobalFunc_702(0, 1, 1);
				}
				else
				{
					func_291(32);
					GlobalFunc_702(1, 1, 1);
				}
			}
		}
	}
	if (func_278(32))
	{
		if (func_278(1024))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (GlobalFunc_74("TRI_HELP_TV"))
			{
				if (!iLocal_789)
				{
					iLocal_789 = 1;
				}
			}
			if (func_278(134217728) && MISC::GET_GAME_TIMER() > uParam0->f_9)
			{
				func_363(134217728);
				func_439(0);
			}
			func_438(1);
			CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_429(1, 0, 30, 5, 1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_805, 255, 255, 255, 0, 0);
			if (!HUD::IS_RADAR_HIDDEN())
			{
				HUD::DISPLAY_RADAR(0);
			}
			if (MISC::GET_GAME_TIMER() > uParam0->f_8)
			{
				func_428();
				uParam0->f_8 = MISC::GET_GAME_TIMER() + 5000;
			}
			iLocal_803 = 1;
			iLocal_735 = 0;
		}
	}
	else
	{
		if (iLocal_734 && !iLocal_735)
		{
			CAM::RENDER_SCRIPT_CAMS(0, false, 3000, 1, 0, 0);
			iLocal_735 = 1;
		}
		if (iLocal_803)
		{
			func_438(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_803 = 0;
		}
		if (HUD::IS_RADAR_HIDDEN())
		{
			HUD::DISPLAY_RADAR(1);
		}
	}
	if (iLocal_789)
	{
		func_420();
	}
}

void func_420()//Position - 0x4DA87
{
	if (!GlobalFunc_226(&uLocal_793))
	{
		GlobalFunc_7777(&uLocal_793);
	}
	if (GlobalFunc_7084(&uLocal_793, 2.5f))
	{
		HUD::CLEAR_HELP(1);
		iLocal_789 = 0;
	}
}








void func_428()//Position - 0x4DBC7
{
	iLocal_733++;
	if (iLocal_733 > 6)
	{
		iLocal_733 = 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_733);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_429(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4DBFF
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_727 <= 225 && iLocal_721 == 0)
			{
				iLocal_727 += 30;
				if (iLocal_727 >= 225)
				{
					iLocal_721 = 1;
				}
			}
			else if (iLocal_727 >= 30)
			{
				iLocal_727 = (iLocal_727 - 30);
				if (iLocal_727 <= 30)
				{
					iLocal_721 = 0;
				}
			}
		}
		func_436(1, 200);
		if (iLocal_725 <= iParam2 && iLocal_720 == 0)
		{
			iLocal_725++;
			func_433(1, iLocal_725);
			if (iLocal_725 == iParam2)
			{
				iLocal_720 = 1;
				iLocal_726 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_725 > 0)
		{
			if (iLocal_725 > iLocal_726)
			{
				iLocal_725 = (iLocal_725 - 1);
				func_433(1, iLocal_725);
				if (iLocal_725 == iLocal_726)
				{
					iLocal_720 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_430(1, 40, 1, 1, 1);
		}
	}
}

void func_430(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4DCE9
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_432(0))
			{
				func_431(0);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_728, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_728 < 1f)
			{
				fLocal_728 = (fLocal_728 + 0.01f);
			}
			else
			{
				fLocal_728 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_432(1))
			{
				func_431(1);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_729, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_729 < 1f)
			{
				fLocal_729 = (fLocal_729 + 0.02f);
			}
			else
			{
				fLocal_729 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_432(2))
			{
				func_431(2);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_730, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_730 < 1f)
			{
				fLocal_730 = (fLocal_730 + 0.028f);
			}
			else
			{
				fLocal_730 = 0f;
			}
		}
	}
}

void func_431(int iParam0)//Position - 0x4DE05
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&iLocal_731, iParam0);
	}
}

int func_432(int iParam0)//Position - 0x4DE20
{
	if (MISC::IS_BIT_SET(iLocal_731, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_433(bool bParam0, int iParam1)//Position - 0x4DE39
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		iLocal_723 = func_435(5);
		iLocal_722 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		while (iLocal_724 == iLocal_723)
		{
			iLocal_723 = func_435(5);
		}
		if (iLocal_723 == 0)
		{
			if (!func_432(3))
			{
				func_431(3);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_717)), (1f * GlobalFunc_4730(bLocal_718)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_723 == 1)
		{
			if (!func_432(4))
			{
				func_431(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_717)), (1f * GlobalFunc_4730(bLocal_718)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_723 == 2)
		{
			if (!func_432(5))
			{
				func_431(5);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_717)), (1f * GlobalFunc_4730(bLocal_718)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_723 == 3)
		{
			if (!func_432(6))
			{
				func_431(6);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_717)), (1f * GlobalFunc_4730(bLocal_718)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_723 == 4)
		{
			if (!func_432(7))
			{
				func_431(7);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_717)), (1f * GlobalFunc_4730(bLocal_718)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}


int func_435(int iParam0)//Position - 0x4E006
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_717 = true;
	}
	else
	{
		bLocal_717 = false;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_718 = true;
	}
	else
	{
		bLocal_718 = false;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}

void func_436(bool bParam0, int iParam1)//Position - 0x4E043
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		if (iLocal_719)
		{
			if (!func_432(8))
			{
				func_431(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_719 = 0;
		}
		else
		{
			if (!func_432(8))
			{
				func_431(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_719 = 1;
		}
	}
}


void func_438(int iParam0)//Position - 0x4E0FE
{
	CAM::SET_CAM_ACTIVE(uLocal_796, iParam0);
}

void func_439(bool bParam0)//Position - 0x4E10F
{
	int iVar0;
	
	iVar0 = GlobalFunc_92(bParam0, 1, -1);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SHOW_STATIC");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_440(var uParam0)//Position - 0x4E138
{
	uParam0->f_5 = (uParam0->f_5 + MISC::GET_FRAME_TIME());
}


void func_442(var uParam0)//Position - 0x4E17E
{
	uParam0->f_5 = 0f;
}


void func_444(var uParam0)//Position - 0x4E197
{
	func_483(uParam0, iLocal_1097);
	func_451(uParam0, iLocal_1097);
	if ((iLocal_1097 % 2) == 0)
	{
		func_445(uParam0);
	}
	if (iLocal_1097 >= 7)
	{
		iLocal_1097 = 0;
	}
	else
	{
		iLocal_1097++;
	}
}

void func_445(var uParam0)//Position - 0x4E1D6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (func_365(uParam0, &(uParam0->f_1735[iVar0 /*206*/])) == 0)
		{
			func_450(uParam0, iVar0);
		}
		else if (func_365(uParam0, &(uParam0->f_1735[iVar0 /*206*/])) == 1)
		{
			func_449(uParam0, iVar0);
		}
		else if (func_365(uParam0, &(uParam0->f_1735[iVar0 /*206*/])) == 2)
		{
			func_446(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_446(var uParam0, int iParam1)//Position - 0x4E24A
{
	float fVar0;
	
	if (func_447(uParam0, iParam1, 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_1735[iParam1 /*206*/].f_190, uParam0->f_1735[iParam1 /*206*/].f_191);
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, fVar0, 0);
	}
}

int func_447(var uParam0, int iParam1, bool bParam2)//Position - 0x4E2A0
{
	if (iParam1 < 1)
	{
		return 0;
	}
	return func_448(uParam0, iParam1, bParam2);
}

int func_448(var uParam0, int iParam1, bool bParam2)//Position - 0x4E2BC
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		return 0;
	}
	if (bParam2)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9))
		{
			return 0;
		}
	}
	return 1;
}

void func_449(var uParam0, int iParam1)//Position - 0x4E2F6
{
	if (func_447(uParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, 0))
		{
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_1735[iParam1 /*206*/].f_194, uParam0->f_1735[iParam1 /*206*/].f_195));
		}
	}
}

void func_450(var uParam0, int iParam1)//Position - 0x4E351
{
	if (func_447(uParam0, iParam1, 0))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[iParam1 /*206*/].f_8))
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1735[iParam1 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_1735[iParam1 /*206*/].f_192, uParam0->f_1735[iParam1 /*206*/].f_193));
		}
		else
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1735[iParam1 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_1735[iParam1 /*206*/].f_190, uParam0->f_1735[iParam1 /*206*/].f_191));
		}
	}
}

void func_451(var uParam0, int iParam1)//Position - 0x4E3CC
{
	float fVar0;
	
	if (func_447(uParam0, iParam1, 0))
	{
		fVar0 = GlobalFunc_156(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_8, 1);
		switch (uParam0->f_1735[iParam1 /*206*/].f_198)
		{
			case 0:
				func_481(uParam0, iParam1, fVar0);
				break;
			
			case 1:
				func_480(uParam0, iParam1, fVar0);
				break;
			
			case 2:
				func_464(uParam0, iParam1, fVar0);
				break;
			
			case 3:
				func_463(uParam0, iParam1);
				break;
		}
		func_452(uParam0, iParam1);
	}
}

void func_452(var uParam0, int iParam1)//Position - 0x4E45E
{
	func_462(uParam0, iParam1);
	func_461(uParam0);
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_457(uParam0, iParam1);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_453(uParam0, iParam1);
	}
}

void func_453(var uParam0, int iParam1)//Position - 0x4E4AD
{
	func_454(uParam0, iParam1);
}

void func_454(var uParam0, int iParam1)//Position - 0x4E4BD
{
	if (!func_455(uParam0, iParam1))
	{
		if (iLocal_1081 < iLocal_1078)
		{
			if (!uParam0->f_1735[iParam1 /*206*/].f_198 == 3)
			{
				uParam0->f_1735[iParam1 /*206*/].f_198 = 3;
				iLocal_1081++;
			}
		}
	}
	switch (iLocal_736)
	{
		case 1:
		case 0:
			if (uParam0->f_1735[iParam1 /*206*/].f_11 >= func_339() + 2 && iLocal_1078 < 5)
			{
				iLocal_1078++;
			}
			else if (uParam0->f_1735[iParam1 /*206*/].f_11 >= func_339() + 3 && iLocal_1078 < 6)
			{
				iLocal_1078++;
			}
			break;
		
		case 2:
			if (uParam0->f_1735[iParam1 /*206*/].f_11 >= 94 && iLocal_1078 < 5)
			{
				iLocal_1078++;
			}
			else if (uParam0->f_1735[iParam1 /*206*/].f_11 >= 102 && iLocal_1078 < 6)
			{
				iLocal_1078++;
			}
			break;
	}
}

int func_455(var uParam0, int iParam1)//Position - 0x4E5B9
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		if (uParam0->f_1735[iParam1 /*206*/].f_11 >= func_456())
		{
			return 1;
		}
	}
	return 0;
}

int func_456()//Position - 0x4E5EB
{
	switch (iLocal_736)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 17;
			break;
	}
	return -1;
}

void func_457(var uParam0, int iParam1)//Position - 0x4E624
{
	func_458(uParam0, iParam1);
}

void func_458(var uParam0, int iParam1)//Position - 0x4E634
{
	if ((func_460(uParam0, iParam1) && iLocal_736 == 2) || iLocal_736 != 2)
	{
		if (iLocal_1081 < iLocal_1078)
		{
			if (!uParam0->f_1735[iParam1 /*206*/].f_198 == 3)
			{
				uParam0->f_1735[iParam1 /*206*/].f_198 = 3;
				iLocal_1081++;
			}
		}
	}
	else if (uParam0->f_1735[iParam1 /*206*/].f_198 == 3)
	{
		uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
	}
	switch (iLocal_736)
	{
		case 1:
		case 0:
			if (uParam0->f_1735[iParam1 /*206*/].f_11 >= func_459() + 1 && iLocal_1078 < 5)
			{
				iLocal_1078++;
			}
			else if (uParam0->f_1735[iParam1 /*206*/].f_11 >= func_459() + 2 && iLocal_1078 < 6)
			{
				iLocal_1078++;
			}
			break;
		
		case 2:
			if (uParam0->f_1735[iParam1 /*206*/].f_11 >= 5 && iLocal_1078 < 5)
			{
				iLocal_1078++;
			}
			else if (uParam0->f_1735[iParam1 /*206*/].f_11 >= 6 && iLocal_1078 < 6)
			{
				iLocal_1078++;
			}
			break;
	}
}

int func_459()//Position - 0x4E760
{
	switch (iLocal_736)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 8;
			break;
	}
	return -1;
}

int func_460(var uParam0, int iParam1)//Position - 0x4E799
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		if (uParam0->f_1735[iParam1 /*206*/].f_11 >= func_459())
		{
			return 1;
		}
	}
	return 0;
}

void func_461(var uParam0)//Position - 0x4E7CB
{
	int iVar0;
	
	iVar0 = func_365(uParam0, &(uParam0->f_1735[0 /*206*/]));
	switch (iVar0)
	{
		case 0:
			break;
		
		case 1:
			iLocal_1076 = 4;
			iLocal_1077 = 2;
			iLocal_1078 = 0;
			break;
		
		case 2:
			iLocal_1076 = 2;
			iLocal_1077 = 2;
			iLocal_1078 = 0;
			break;
	}
}

void func_462(var uParam0, int iParam1)//Position - 0x4E81D
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_736)
	{
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = uParam0->f_1735[0 /*206*/].f_11;
				switch (iVar0)
				{
					case 2:
						Local_1069.f_1 = 2.4f;
						break;
					
					case 21:
						Local_1069.f_3 = 2.7f;
						break;
				}
			}
			else
			{
				iVar1 = uParam0->f_1735[iParam1 /*206*/].f_11;
				switch (iVar1)
				{
					case 22:
						Local_1069.f_2 = 1.1f;
						break;
					}
			}
			break;
		
		case 0:
			if (iParam1 == 0)
			{
				iVar0 = uParam0->f_1735[0 /*206*/].f_11;
				switch (iVar0)
				{
					case 2:
						Local_1069.f_1 = 2.4f;
						break;
					
					case 23:
						Local_1069.f_3 = 2.7f;
						break;
				}
			}
			else
			{
				iVar1 = uParam0->f_1735[iParam1 /*206*/].f_11;
				switch (iVar1)
				{
					case 24:
						Local_1069.f_2 = 1.1f;
						break;
					}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				iVar0 = uParam0->f_1735[0 /*206*/].f_11;
				switch (iVar0)
				{
					case 2:
						Local_1069.f_1 = 2.4f;
						break;
					
					case 114:
						Local_1069.f_3 = 2.7f;
						break;
				}
			}
			else
			{
				iVar1 = uParam0->f_1735[iParam1 /*206*/].f_11;
				switch (iVar1)
				{
					case 115:
						Local_1069.f_2 = 1.1f;
						break;
					}
			}
			break;
	}
}

void func_463(var uParam0, int iParam1)//Position - 0x4E983
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		uParam0->f_1735[iParam1 /*206*/].f_192 = 1.7f;
		uParam0->f_1735[iParam1 /*206*/].f_193 = 2.2f;
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
	{
		uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		uParam0->f_1735[iParam1 /*206*/].f_190 = 1.1f;
		uParam0->f_1735[iParam1 /*206*/].f_191 = 1.6f;
	}
}

void func_464(var uParam0, int iParam1, float fParam2)//Position - 0x4EA16
{
	int iVar0;
	
	if (uParam0->f_1735[iParam1 /*206*/].f_12 > uParam0->f_1735[0 /*206*/].f_12)
	{
		if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_199), 7f))
		{
			if (fParam2 <= 6.75f)
			{
				if (iLocal_1079 < iLocal_1076)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
					if (iVar0 < 50)
					{
						func_477(uParam0, iParam1);
					}
					else
					{
						func_473(uParam0, iParam1, fParam2);
						uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
						iLocal_1079 = (iLocal_1079 - 1);
					}
				}
				else if (iLocal_1080 < iLocal_1077)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 5)
					{
						func_470(uParam0, iParam1);
						uParam0->f_1735[iParam1 /*206*/].f_198 = 1;
						iLocal_1080++;
					}
					else
					{
						func_473(uParam0, iParam1, fParam2);
						uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					}
					iLocal_1079 = (iLocal_1079 - 1);
				}
				else
				{
					func_473(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_1079 = (iLocal_1079 - 1);
				}
			}
			else if (iLocal_1079 < iLocal_1076)
			{
				func_477(uParam0, iParam1);
			}
			else
			{
				func_473(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1079 = (iLocal_1079 - 1);
			}
			GlobalFunc_4963(&(uParam0->f_1735[iParam1 /*206*/].f_199), 0f);
		}
		else
		{
			func_477(uParam0, iParam1);
		}
	}
	else if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_199), 7f))
	{
		if (fParam2 <= 6.75f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar0 < 50)
			{
				func_465(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1079 = (iLocal_1079 - 1);
			}
			else if (iLocal_1079 < iLocal_1076)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 50)
				{
					func_477(uParam0, iParam1);
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_1079 = (iLocal_1079 - 1);
				}
			}
			else if (iLocal_1080 < iLocal_1077)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 10)
				{
					func_470(uParam0, iParam1);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 1;
					iLocal_1080 = (iLocal_1080 - 1);
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				}
				iLocal_1079 = (iLocal_1079 - 1);
			}
			else
			{
				func_465(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1079 = (iLocal_1079 - 1);
			}
		}
		else
		{
			if (iLocal_1080 < iLocal_1077)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 15)
				{
					func_470(uParam0, iParam1);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 1;
					iLocal_1080++;
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				}
			}
			else
			{
				func_465(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
			}
			iLocal_1079 = (iLocal_1079 - 1);
		}
		GlobalFunc_4963(&(uParam0->f_1735[iParam1 /*206*/].f_199), 0f);
	}
	else
	{
		func_477(uParam0, iParam1);
	}
}

void func_465(var uParam0, int iParam1, float fParam2)//Position - 0x4ECFA
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_469(uParam0, iParam1, fParam2);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
	{
		func_467(uParam0, iParam1, fParam2);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_466(uParam0, iParam1, fParam2);
	}
}

void func_466(var uParam0, int iParam1, float fParam2)//Position - 0x4ED5F
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_1735[iParam1 /*206*/].f_8, 1f);
					if (fParam2 > 15f && fParam2 < 21f)
					{
						if (uLocal_1051[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_190)
						{
							uParam0->f_1735[iParam1 /*206*/].f_190 = (uParam0->f_1735[iParam1 /*206*/].f_190 - 0.05f);
						}
						if (uLocal_1051[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_191)
						{
							uParam0->f_1735[iParam1 /*206*/].f_191 = (uParam0->f_1735[iParam1 /*206*/].f_191 - 0.05f);
						}
					}
					else if (fParam2 > 21f && fParam2 < 30f)
					{
						if (uLocal_1051[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_190)
						{
							uParam0->f_1735[iParam1 /*206*/].f_190 = (uParam0->f_1735[iParam1 /*206*/].f_190 - 0.1f);
						}
						if (uLocal_1051[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_191)
						{
							uParam0->f_1735[iParam1 /*206*/].f_191 = (uParam0->f_1735[iParam1 /*206*/].f_191 - 0.1f);
						}
					}
					else if (fParam2 > 30f)
					{
						if (uLocal_1051[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_190)
						{
							uParam0->f_1735[iParam1 /*206*/].f_190 = (uParam0->f_1735[iParam1 /*206*/].f_190 - 0.5f);
						}
						if (uLocal_1051[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_191)
						{
							uParam0->f_1735[iParam1 /*206*/].f_191 = (uParam0->f_1735[iParam1 /*206*/].f_191 - 0.5f);
						}
					}
					else if (fParam2 < 15f)
					{
						uParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_1051[iParam1];
						uParam0->f_1735[iParam1 /*206*/].f_191 = uLocal_1060[iParam1];
					}
					if (uLocal_1051[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_190)
					{
						uParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_1051[iParam1];
					}
					if (Local_1069.f_2 > uParam0->f_1735[iParam1 /*206*/].f_191)
					{
						uParam0->f_1735[iParam1 /*206*/].f_191 = Local_1069.f_2;
					}
				}
			}
		}
	}
}

void func_467(var uParam0, int iParam1, float fParam2)//Position - 0x4EFB6
{
	if (func_447(uParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, 0))
		{
			if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
			{
				if (fParam2 > 150f)
				{
					switch (uParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
						
						case 2:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
						
						case 3:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
						
						case 4:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
						
						case 5:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 3f));
							break;
						
						case 6:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 3f));
							break;
						
						case 7:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 4f));
							break;
					}
				}
				else if (fParam2 > 100f)
				{
					switch (uParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 1.5f));
							break;
						
						case 2:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 1.5f));
							break;
						
						case 3:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 1.5f));
							break;
						
						case 4:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 1.5f));
							break;
						
						case 5:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
						
						case 6:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
						
						case 7:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 / 2f));
							break;
					}
				}
				else if (fParam2 > 25f && fParam2 < 50f)
				{
					switch (uParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, Local_1069.f_6);
							break;
						
						case 2:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, Local_1069.f_6);
							break;
						
						case 3:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 - 1.5f));
							break;
						
						case 4:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 - 2f));
							break;
						
						case 5:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 - 3f));
							break;
						
						case 6:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 - 4f));
							break;
						
						case 7:
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[iParam1 /*206*/].f_8, (Local_1069.f_6 - 5f));
							break;
					}
				}
				else
				{
					func_468(uParam0, iParam1);
				}
			}
		}
	}
}

void func_468(var uParam0, int iParam1)//Position - 0x4F305
{
	if (func_447(uParam0, iParam1, 1))
	{
		switch (uParam0->f_1735[iParam1 /*206*/].f_196)
		{
			case 1:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 24f;
				break;
			
			case 2:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 22f;
				break;
			
			case 3:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 22f;
				break;
			
			case 4:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 17f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 20f;
				break;
			
			case 5:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 15f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 17f;
				break;
			
			case 6:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 11f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 14f;
				break;
			
			case 7:
				uParam0->f_1735[iParam1 /*206*/].f_194 = 10f;
				uParam0->f_1735[iParam1 /*206*/].f_195 = 12f;
				break;
			}
	}
}

void func_469(var uParam0, int iParam1, float fParam2)//Position - 0x4F448
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[iParam1 /*206*/].f_8))
					{
						PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_1735[iParam1 /*206*/].f_8, 0.6f);
					}
					if (fParam2 > 15f && fParam2 < 21f)
					{
						if (Local_1069 < uParam0->f_1735[iParam1 /*206*/].f_192)
						{
							uParam0->f_1735[iParam1 /*206*/].f_192 = (uParam0->f_1735[iParam1 /*206*/].f_192 - 0.05f);
						}
						if (Local_1069 < uParam0->f_1735[iParam1 /*206*/].f_193)
						{
							uParam0->f_1735[iParam1 /*206*/].f_193 = (uParam0->f_1735[iParam1 /*206*/].f_193 - 0.05f);
						}
					}
					else if (fParam2 > 21f && fParam2 < 30f)
					{
						if (Local_1069 < uParam0->f_1735[iParam1 /*206*/].f_192)
						{
							uParam0->f_1735[iParam1 /*206*/].f_192 = (uParam0->f_1735[iParam1 /*206*/].f_192 - 0.1f);
						}
						if (Local_1069 < uParam0->f_1735[iParam1 /*206*/].f_193)
						{
							uParam0->f_1735[iParam1 /*206*/].f_193 = (uParam0->f_1735[iParam1 /*206*/].f_193 - 0.1f);
						}
					}
					else if (fParam2 > 30f)
					{
						if (Local_1069 < uParam0->f_1735[iParam1 /*206*/].f_192)
						{
							uParam0->f_1735[iParam1 /*206*/].f_192 = (uParam0->f_1735[iParam1 /*206*/].f_192 - 0.5f);
						}
						if (Local_1069 < uParam0->f_1735[iParam1 /*206*/].f_193)
						{
							uParam0->f_1735[iParam1 /*206*/].f_193 = (uParam0->f_1735[iParam1 /*206*/].f_193 - 0.5f);
						}
					}
					else if (fParam2 < 15f)
					{
						uParam0->f_1735[iParam1 /*206*/].f_192 = Local_1069;
						uParam0->f_1735[iParam1 /*206*/].f_193 = Local_1069.f_1;
					}
					if (Local_1069 > uParam0->f_1735[iParam1 /*206*/].f_192)
					{
						uParam0->f_1735[iParam1 /*206*/].f_192 = Local_1069;
					}
					if (Local_1069 > uParam0->f_1735[iParam1 /*206*/].f_193)
					{
						uParam0->f_1735[iParam1 /*206*/].f_193 = Local_1069;
					}
				}
			}
		}
	}
}

void func_470(var uParam0, int iParam1)//Position - 0x4F68B
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_472(uParam0, iParam1);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
	{
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_471(uParam0, iParam1);
	}
}

void func_471(var uParam0, int iParam1)//Position - 0x4F6E2
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					uParam0->f_1735[iParam1 /*206*/].f_190 = Local_1069.f_2;
					uParam0->f_1735[iParam1 /*206*/].f_191 = Local_1069.f_2;
				}
			}
		}
	}
}

void func_472(var uParam0, int iParam1)//Position - 0x4F75E
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
				{
					uParam0->f_1735[iParam1 /*206*/].f_192 = Local_1069;
					uParam0->f_1735[iParam1 /*206*/].f_193 = Local_1069;
				}
			}
		}
	}
}

void func_473(var uParam0, int iParam1, float fParam2)//Position - 0x4F7D6
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_476(uParam0, iParam1, fParam2);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
	{
		func_475(uParam0, iParam1, fParam2);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_474(uParam0, iParam1, fParam2);
	}
}

void func_474(var uParam0, int iParam1, float fParam2)//Position - 0x4F83B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					if (fParam2 > 5f && fParam2 < 11f)
					{
						if (uLocal_1060[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_190)
						{
							uParam0->f_1735[iParam1 /*206*/].f_190 = (uParam0->f_1735[iParam1 /*206*/].f_190 + 0.1f);
						}
						if (uLocal_1060[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_191)
						{
							uParam0->f_1735[iParam1 /*206*/].f_191 = (uParam0->f_1735[iParam1 /*206*/].f_191 + 0.1f);
						}
					}
					else if (fParam2 > 11f && fParam2 < 20f)
					{
						if (uLocal_1060[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_190)
						{
							uParam0->f_1735[iParam1 /*206*/].f_190 = (uParam0->f_1735[iParam1 /*206*/].f_190 + 0.3f);
						}
						if (uLocal_1060[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_191)
						{
							uParam0->f_1735[iParam1 /*206*/].f_191 = (uParam0->f_1735[iParam1 /*206*/].f_191 + 0.3f);
						}
					}
					else if (fParam2 > 20f)
					{
						if (uLocal_1060[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_190)
						{
							uParam0->f_1735[iParam1 /*206*/].f_190 = (uParam0->f_1735[iParam1 /*206*/].f_190 + 1f);
						}
						if (uLocal_1060[iParam1] > uParam0->f_1735[iParam1 /*206*/].f_191)
						{
							uParam0->f_1735[iParam1 /*206*/].f_191 = (uParam0->f_1735[iParam1 /*206*/].f_191 + 1f);
						}
					}
					else if (fParam2 <= 5f)
					{
						uParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_1051[iParam1];
						uParam0->f_1735[iParam1 /*206*/].f_191 = uLocal_1060[iParam1];
					}
					if (uLocal_1060[iParam1] < uParam0->f_1735[iParam1 /*206*/].f_190)
					{
						uParam0->f_1735[iParam1 /*206*/].f_190 = uLocal_1060[iParam1];
					}
					if (Local_1069.f_3 < uParam0->f_1735[iParam1 /*206*/].f_191)
					{
						uParam0->f_1735[iParam1 /*206*/].f_191 = Local_1069.f_3;
					}
				}
			}
		}
	}
}

void func_475(var uParam0, int iParam1, float fParam2)//Position - 0x4FA72
{
	if (func_447(uParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, 0))
		{
			if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
			{
				if (fParam2 > 50f)
				{
					switch (uParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						
						case 2:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						
						case 3:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						
						case 4:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 28f;
							break;
						
						case 5:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 26f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 26f;
							break;
						
						case 6:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 24f;
							break;
						
						case 7:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 18f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 18f;
							break;
					}
				}
				else if (fParam2 > 15f && fParam2 < 35f)
				{
					switch (uParam0->f_1735[iParam1 /*206*/].f_196)
					{
						case 1:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						
						case 2:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						
						case 3:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						
						case 4:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 24f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 27f;
							break;
						
						case 5:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 21f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 22f;
							break;
						
						case 6:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 17f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 20f;
							break;
						
						case 7:
							uParam0->f_1735[iParam1 /*206*/].f_194 = 16f;
							uParam0->f_1735[iParam1 /*206*/].f_195 = 18f;
							break;
					}
				}
				else
				{
					func_468(uParam0, iParam1);
				}
			}
		}
	}
}

void func_476(var uParam0, int iParam1, float fParam2)//Position - 0x4FD46
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[iParam1 /*206*/].f_8))
					{
						PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_1735[iParam1 /*206*/].f_8, 0.7f);
					}
					else
					{
						PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_1735[iParam1 /*206*/].f_8, 1.15f);
					}
					if (fParam2 > 5f && fParam2 < 11f)
					{
						if (Local_1069.f_1 > uParam0->f_1735[iParam1 /*206*/].f_192)
						{
							uParam0->f_1735[iParam1 /*206*/].f_192 = (uParam0->f_1735[iParam1 /*206*/].f_192 + 0.1f);
						}
						if (Local_1069.f_1 > uParam0->f_1735[iParam1 /*206*/].f_193)
						{
							uParam0->f_1735[iParam1 /*206*/].f_193 = (uParam0->f_1735[iParam1 /*206*/].f_193 + 0.1f);
						}
					}
					else if (fParam2 > 11f && fParam2 < 20f)
					{
						if (Local_1069.f_1 > uParam0->f_1735[iParam1 /*206*/].f_192)
						{
							uParam0->f_1735[iParam1 /*206*/].f_192 = (uParam0->f_1735[iParam1 /*206*/].f_192 + 0.3f);
						}
						if (Local_1069.f_1 > uParam0->f_1735[iParam1 /*206*/].f_193)
						{
							uParam0->f_1735[iParam1 /*206*/].f_193 = (uParam0->f_1735[iParam1 /*206*/].f_193 + 0.3f);
						}
					}
					else if (fParam2 > 20f)
					{
						if (Local_1069.f_1 > uParam0->f_1735[iParam1 /*206*/].f_192)
						{
							uParam0->f_1735[iParam1 /*206*/].f_192 = (uParam0->f_1735[iParam1 /*206*/].f_192 + 1f);
						}
						if (Local_1069.f_1 > uParam0->f_1735[iParam1 /*206*/].f_193)
						{
							uParam0->f_1735[iParam1 /*206*/].f_193 = (uParam0->f_1735[iParam1 /*206*/].f_193 + 1f);
						}
					}
					else if (fParam2 <= 5f)
					{
						uParam0->f_1735[iParam1 /*206*/].f_192 = Local_1069;
						uParam0->f_1735[iParam1 /*206*/].f_193 = Local_1069.f_1;
					}
					if (Local_1069.f_1 < uParam0->f_1735[iParam1 /*206*/].f_192)
					{
						uParam0->f_1735[iParam1 /*206*/].f_192 = Local_1069.f_1;
					}
					if (Local_1069.f_1 < uParam0->f_1735[iParam1 /*206*/].f_193)
					{
						uParam0->f_1735[iParam1 /*206*/].f_193 = Local_1069.f_1;
					}
				}
			}
		}
	}
}

void func_477(var uParam0, int iParam1)//Position - 0x4FFA4
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
	{
		func_479(uParam0, iParam1);
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
	{
	}
	else if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		func_478(uParam0, iParam1);
	}
}

void func_478(var uParam0, int iParam1)//Position - 0x4FFFB
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
				{
					uParam0->f_1735[iParam1 /*206*/].f_190 = Local_1069.f_3;
					uParam0->f_1735[iParam1 /*206*/].f_191 = Local_1069.f_3;
				}
			}
		}
	}
}

void func_479(var uParam0, int iParam1)//Position - 0x5007C
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (!uParam0->f_1735[iParam1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[iParam1 /*206*/].f_8))
				{
					if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
					{
						uParam0->f_1735[iParam1 /*206*/].f_192 = Local_1069.f_1;
						uParam0->f_1735[iParam1 /*206*/].f_193 = Local_1069.f_1;
					}
				}
			}
		}
	}
}

void func_480(var uParam0, int iParam1, float fParam2)//Position - 0x5010A
{
	int iVar0;
	
	if (uParam0->f_1735[iParam1 /*206*/].f_12 > uParam0->f_1735[0 /*206*/].f_12)
	{
		if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_199), 7f))
		{
			if (fParam2 <= 6.75f)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 90)
				{
					func_473(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_1080 = (iLocal_1080 - 1);
				}
				else if (iLocal_1079 < iLocal_1076)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 25)
					{
						func_477(uParam0, iParam1);
						uParam0->f_1735[iParam1 /*206*/].f_198 = 2;
						iLocal_1079++;
						iLocal_1080 = (iLocal_1080 - 1);
					}
					else
					{
						func_470(uParam0, iParam1);
					}
				}
				else if (iLocal_1080 < iLocal_1077)
				{
					func_470(uParam0, iParam1);
				}
				else
				{
					func_473(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_1080 = (iLocal_1080 - 1);
				}
			}
			else
			{
				func_473(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1080 = (iLocal_1080 - 1);
			}
			GlobalFunc_4963(&(uParam0->f_1735[iParam1 /*206*/].f_199), 0f);
		}
		else
		{
			func_470(uParam0, iParam1);
		}
	}
	else if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_199), 7f))
	{
		if (fParam2 <= 6.75f)
		{
			if (iVar0 < 75)
			{
				func_473(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1080 = (iLocal_1080 - 1);
			}
			else if (iLocal_1080 < iLocal_1077)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (iVar0 < 20)
				{
					func_470(uParam0, iParam1);
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
					iLocal_1080 = (iLocal_1080 - 1);
				}
			}
			else if (iLocal_1079 < iLocal_1076)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 25)
				{
					func_477(uParam0, iParam1);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 2;
					iLocal_1079++;
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				}
				iLocal_1080 = (iLocal_1080 - 1);
			}
			else
			{
				func_465(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1080 = (iLocal_1080 - 1);
			}
		}
		else if (iLocal_1080 < iLocal_1077)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar0 < 50)
			{
				func_470(uParam0, iParam1);
			}
			else
			{
				func_465(uParam0, iParam1, fParam2);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
				iLocal_1080 = (iLocal_1080 - 1);
			}
		}
		else
		{
			func_465(uParam0, iParam1, fParam2);
			uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
			iLocal_1080 = (iLocal_1080 - 1);
		}
		GlobalFunc_4963(&(uParam0->f_1735[iParam1 /*206*/].f_199), 0f);
	}
	else
	{
		func_470(uParam0, iParam1);
	}
}

void func_481(var uParam0, int iParam1, float fParam2)//Position - 0x503B8
{
	int iVar0;
	
	if (uParam0->f_1735[iParam1 /*206*/].f_12 > uParam0->f_1735[0 /*206*/].f_12)
	{
		if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_199), 10f))
		{
			if (fParam2 <= 6.75f)
			{
				if (iLocal_1079 < iLocal_1076 || uParam0->f_1735[0 /*206*/].f_12 < 4)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 60)
					{
						func_477(uParam0, iParam1);
						uParam0->f_1735[iParam1 /*206*/].f_198 = 2;
						iLocal_1079++;
					}
					else
					{
						func_473(uParam0, iParam1, fParam2);
					}
				}
				else if (iLocal_1080 < iLocal_1077)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
					if (iVar0 < 10)
					{
						func_470(uParam0, iParam1);
						uParam0->f_1735[iParam1 /*206*/].f_198 = 1;
						iLocal_1080++;
					}
					else
					{
						func_473(uParam0, iParam1, fParam2);
					}
				}
				else
				{
					func_473(uParam0, iParam1, fParam2);
				}
			}
			else if (iLocal_1079 < iLocal_1076)
			{
				func_477(uParam0, iParam1);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 2;
				iLocal_1079++;
			}
			else
			{
				func_473(uParam0, iParam1, fParam2);
			}
			GlobalFunc_4963(&(uParam0->f_1735[iParam1 /*206*/].f_199), 0f);
		}
		else
		{
			func_473(uParam0, iParam1, fParam2);
		}
	}
	else if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_199), 10f))
	{
		if (fParam2 > (6.75f + 10f))
		{
			if (iLocal_1080 < iLocal_1077)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 25)
				{
					func_470(uParam0, iParam1);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 1;
					iLocal_1080++;
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
				}
			}
			else if (iLocal_1079 < iLocal_1076)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar0 < 30)
				{
					func_477(uParam0, iParam1);
					uParam0->f_1735[iParam1 /*206*/].f_198 = 2;
					iLocal_1079++;
				}
				else
				{
					func_465(uParam0, iParam1, fParam2);
				}
			}
			else
			{
				func_465(uParam0, iParam1, fParam2);
			}
		}
		else if (iLocal_1080 < iLocal_1077)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar0 < 10)
			{
				func_470(uParam0, iParam1);
				uParam0->f_1735[iParam1 /*206*/].f_198 = 1;
				iLocal_1080++;
			}
			else
			{
				func_465(uParam0, iParam1, fParam2);
			}
		}
		else
		{
			func_465(uParam0, iParam1, fParam2);
		}
		GlobalFunc_4963(&(uParam0->f_1735[iParam1 /*206*/].f_199), 0f);
	}
	else
	{
		func_465(uParam0, iParam1, fParam2);
	}
}


void func_483(var uParam0, int iParam1)//Position - 0x5067D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_9))
			{
				if (!uParam0->f_1735[iVar0 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
				{
					if (!PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iVar0 /*206*/].f_8, uParam0->f_1735[iVar0 /*206*/].f_9, 0))
					{
						PED::SET_PED_RESET_FLAG(uParam0->f_1735[iVar0 /*206*/].f_8, 55, 1);
					}
					if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8))
					{
						PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(uParam0->f_1735[iVar0 /*206*/].f_8);
					}
				}
			}
		}
		if (func_505(uParam0, &(uParam0->f_1735[iVar0 /*206*/])) && !iLocal_1033[iVar0])
		{
			func_502(uParam0, iVar0);
		}
		else if ((!func_501(&(uParam0->f_1735[iVar0 /*206*/]), 2) && func_505(uParam0, &(uParam0->f_1735[iVar0 /*206*/]))) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iVar0 /*206*/].f_8, -2017877118) == 1)
		{
			TASK::SET_ANIM_RATE(uParam0->f_1735[iVar0 /*206*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 2.5f), 0, 0);
			func_500(&(uParam0->f_1735[iVar0 /*206*/]), 2);
		}
		iVar0++;
	}
	func_499(uParam0, iParam1);
	func_498(uParam0, iParam1);
	func_497(uParam0, iParam1);
	func_484(uParam0, iParam1);
}

void func_484(var uParam0, int iParam1)//Position - 0x507E0
{
	func_496(uParam0, iParam1);
	func_494(uParam0, iParam1);
	func_485(uParam0, iParam1);
}

void func_485(var uParam0, int iParam1)//Position - 0x50800
{
	if (func_448(uParam0, iParam1, 1))
	{
		if (uParam0->f_1735[0 /*206*/].f_12 < uParam0->f_1735[iParam1 /*206*/].f_12)
		{
			if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, 0))
				{
					if (uParam0->f_1735[iParam1 /*206*/].f_11 > func_340() + 3)
					{
						if ((uParam0->f_1735[0 /*206*/].f_11 - uParam0->f_1735[iParam1 /*206*/].f_11) >= 3)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_1735[iParam1 /*206*/].f_8))
							{
								if (GlobalFunc_7084(&(uParam0->f_1735[iParam1 /*206*/].f_202), 6f))
								{
									PED::SET_PED_COORDS_KEEP_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_26[uParam0->f_1735[iParam1 /*206*/].f_11 /*14*/].f_3);
									uParam0->f_1735[iParam1 /*206*/].f_11++;
									func_486(uParam0, uParam0->f_26[uParam0->f_1735[iParam1 /*206*/].f_11 /*14*/].f_3, iParam1);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1735[iParam1 /*206*/].f_9, 15f);
									GlobalFunc_6877(&(uParam0->f_1735[iParam1 /*206*/].f_202));
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_486(var uParam0, struct<3> Param1, int iParam4)//Position - 0x5092C
{
	switch (func_365(uParam0, &(uParam0->f_1735[iParam4 /*206*/])))
	{
		case 0:
			func_492(uParam0, Param1, iParam4);
			break;
		
		case 1:
			func_489(uParam0, iParam4);
			break;
		
		case 2:
			func_487(uParam0, iParam4);
			break;
	}
}

void func_487(var uParam0, int iParam1)//Position - 0x5097F
{
	int iVar0;
	char* sVar1;
	float fVar2;
	struct<3> Var3;
	
	if (!uParam0->f_1735[iParam1 /*206*/].f_11 == (uParam0->f_11 - 1))
	{
		switch (iParam1)
		{
			case 1:
				iVar0 = 131072;
				break;
			
			case 2:
				iVar0 = 262144;
				break;
			
			case 3:
				iVar0 = 524288;
				break;
			
			case 4:
				iVar0 = 1048576;
				break;
			
			case 5:
				iVar0 = 2097152;
				break;
			
			case 6:
				iVar0 = 4194304;
				break;
			
			case 7:
				iVar0 = 8388608;
				break;
			
			default:
				break;
		}
		if (uParam0->f_1735[iParam1 /*206*/].f_11 > 0 && !func_278(iVar0))
		{
			if (iLocal_736 == 1)
			{
				sVar1 = "Tri1_Run";
			}
			else if (iLocal_736 == 0)
			{
				sVar1 = "Tri2_Run";
			}
			else if (iLocal_736 == 2)
			{
				sVar1 = "Tri3_Run";
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, sVar1, 0, 1038, -1);
			func_291(iVar0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iParam1 /*206*/].f_9, 1);
		}
	}
	else
	{
		PED::SET_PED_STEERS_AROUND_OBJECTS(uParam0->f_1735[iParam1 /*206*/].f_8, 0);
		fVar2 = 3f;
		Var3 = { GlobalFunc_4722(Local_1042, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar2, fVar2), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar2, fVar2), 0f) };
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_1735[iParam1 /*206*/].f_8, Var3, 3f, -1, 3.45f, 1, 1193033728);
	}
}


void func_489(var uParam0, int iParam1)//Position - 0x50B3F
{
	if (uParam0->f_1735[iParam1 /*206*/].f_11 == func_340())
	{
		if (uParam0->f_1735[iParam1 /*206*/].f_198 == 3)
		{
			uParam0->f_1735[iParam1 /*206*/].f_198 = 0;
			iLocal_1081 = (iLocal_1081 - 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9))
	{
		if (!func_501(&(uParam0->f_1735[iParam1 /*206*/]), 8) || (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 1) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, 242628503) != 1))
		{
			func_491(uParam0, iParam1);
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, -235832601) == 1)
		{
			PED::SET_DRIVER_RACING_MODIFIER(uParam0->f_1735[iParam1 /*206*/].f_8, 1f);
			VEHICLE::SET_VEHICLE_IS_RACING(uParam0->f_1735[iParam1 /*206*/].f_9, 1);
			func_490(uParam0, iParam1);
		}
	}
}

void func_490(var uParam0, int iParam1)//Position - 0x50C1F
{
	if (func_447(uParam0, iParam1, 1))
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
	}
}

void func_491(var uParam0, int iParam1)//Position - 0x50C67
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!(PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8)))
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_1735[iParam1 /*206*/].f_8, 1);
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iParam1 /*206*/].f_9, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iParam1 /*206*/].f_8, 1) - Var0 * Vector(0.15f, 0.15f, 0.15f) };
		Var6 = { Var0 + Var3 };
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_1014);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_1014);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 3f, 20000, 3f, 1, 1193033728);
		TASK::TASK_ENTER_VEHICLE(0, uParam0->f_1735[iParam1 /*206*/].f_9, 20000, -1, 3f, 1, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_1014);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_1014);
	}
	else
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
	}
}

void func_492(var uParam0, struct<3> Param1, int iParam4)//Position - 0x50DA7
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	char cVar5[64];
	
	fVar3 = 4f;
	Var0 = { GlobalFunc_4722(Param1, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3), 0f) };
	if (uParam0->f_1735[iParam4 /*206*/].f_11 >= 1)
	{
		PED::SET_PED_STEERS_AROUND_OBJECTS(uParam0->f_1735[iParam4 /*206*/].f_8, 1);
	}
	if (func_501(&(uParam0->f_1735[iParam4 /*206*/]), 4))
	{
		if (uParam0->f_1735[iParam4 /*206*/].f_11 == 1)
		{
			func_493(&(uParam0->f_1735[iParam4 /*206*/]), 4);
		}
	}
	if (uParam0->f_1735[iParam4 /*206*/].f_11 == 0)
	{
		StringCopy(&cVar5, "triathlon_", 64);
		switch (iLocal_736)
		{
			case 0:
				StringConCat(&cVar5, "ves_", 64);
				break;
			
			case 1:
				StringConCat(&cVar5, "ala_", 64);
				break;
			
			case 2:
				StringConCat(&cVar5, "coy_", 64);
				break;
		}
		StringConCat(&cVar5, "racer", 64);
		StringIntConCat(&cVar5, iParam4, 64);
		TASK::OPEN_SEQUENCE_TASK(&uVar4);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cVar5, 0, 8, -1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 3f, -1, 1048576000, 2113, 1193033728);
		TASK::CLOSE_SEQUENCE_TASK(uVar4);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam4 /*206*/].f_8, uVar4);
		TASK::CLEAR_SEQUENCE_TASK(&uVar4);
		func_500(&(uParam0->f_1735[iParam4 /*206*/]), 4);
	}
	else
	{
		TASK::TASK_GO_STRAIGHT_TO_COORD(uParam0->f_1735[iParam4 /*206*/].f_8, Var0, 3f, -1, 1193033728, 1056964608);
	}
}

void func_493(var uParam0, int iParam1)//Position - 0x50EFA
{
	if (func_501(uParam0, iParam1))
	{
		GlobalFunc_5312(&(uParam0->f_197), iParam1);
	}
}

void func_494(var uParam0, int iParam1)//Position - 0x50F17
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
	{
		if (func_365(uParam0, &(uParam0->f_1735[0 /*206*/])) == 1)
		{
			if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 0)
			{
				if (uParam0->f_1735[0 /*206*/].f_11 == iLocal_1096)
				{
					func_495(uParam0, iParam1);
				}
			}
		}
	}
}

void func_495(var uParam0, int iParam1)//Position - 0x50F6E
{
	int iVar0;
	
	if (func_447(uParam0, iParam1, 1))
	{
		iVar0 = func_340() + 1;
		ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_26[iVar0 /*14*/].f_3, 1, 0, 0, 1);
		uParam0->f_1735[iParam1 /*206*/].f_11 = iVar0 + 1;
		PED::SET_PED_INTO_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, -1);
		func_486(uParam0, uParam0->f_26[uParam0->f_1735[iParam1 /*206*/].f_11 /*14*/].f_3, iParam1);
	}
}

void func_496(var uParam0, int iParam1)//Position - 0x50FF0
{
	if (func_447(uParam0, iParam1, 1))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1735[iParam1 /*206*/].f_9) > 0f)
			{
				GlobalFunc_6877(&(uParam0->f_1735[iParam1 /*206*/].f_202));
			}
			else if (!GlobalFunc_226(&(uParam0->f_1735[iParam1 /*206*/].f_202)))
			{
				GlobalFunc_7777(&(uParam0->f_1735[iParam1 /*206*/].f_202));
			}
		}
	}
}

void func_497(var uParam0, int iParam1)//Position - 0x5106A
{
	if (iLocal_736 == 2)
	{
		if (func_447(uParam0, iParam1, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_1735[iParam1 /*206*/].f_9, 145.87f, 1615f, 228.27f, 10f, 10f, 10f, 0, 1, 0))
			{
				uParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_1046;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_1735[iParam1 /*206*/].f_9, 1188.63f, -1082.86f, 39.74f, 10f, 10f, 10f, 0, 1, 0))
			{
				uParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_1047;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_1735[iParam1 /*206*/].f_9, -1027.92f, -1081.72f, 1.66f, 10f, 10f, 10f, 0, 1, 0))
			{
				uParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_1048;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_1735[iParam1 /*206*/].f_9, -901.19f, 244.36f, 69.76f, 10f, 10f, 10f, 0, 1, 0))
			{
				uParam0->f_1735[iParam1 /*206*/].f_205 = sLocal_1049;
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1735[iParam1 /*206*/].f_8, uParam0->f_1735[iParam1 /*206*/].f_9, uParam0->f_1735[iParam1 /*206*/].f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
			}
		}
	}
}

void func_498(var uParam0, int iParam1)//Position - 0x51272
{
	if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 2)
	{
		if (PED::GET_PED_CONFIG_FLAG(uParam0->f_1735[iParam1 /*206*/].f_8, 36, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(uParam0->f_1735[iParam1 /*206*/].f_8))
			{
				PED::REMOVE_PED_HELMET(uParam0->f_1735[iParam1 /*206*/].f_8, 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1735[iParam1 /*206*/].f_8, 36, 0);
			}
		}
	}
}

void func_499(var uParam0, int iParam1)//Position - 0x512D6
{
	if (iParam1 != 0)
	{
		if (func_365(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
			{
				if (!func_364(uParam0, iParam1, 1))
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(uParam0->f_1735[iParam1 /*206*/].f_8, 1.15f);
				}
			}
		}
	}
}

void func_500(var uParam0, int iParam1)//Position - 0x5132B
{
	if (!func_501(uParam0, iParam1))
	{
		GlobalFunc_6594(&(uParam0->f_197), iParam1);
	}
}

bool func_501(var uParam0, int iParam1)//Position - 0x51349
{
	return GlobalFunc_747(uParam0->f_197, iParam1);
}

void func_502(var uParam0, int iParam1)//Position - 0x5135B
{
	struct<3> Var0;
	char* sVar3;
	char* sVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
	{
		if (iParam1 != 0)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iParam1 /*206*/].f_8, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 8f), 0f) };
			func_504(&Var0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_1024[iParam1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_1024[iParam1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var0, 1f, 20000, 0.25f, 1, 1193033728);
			if (uParam0->f_1735[iParam1 /*206*/].f_12 == 1)
			{
				sVar3 = func_503(iLocal_1091[0]);
				TASK::TASK_PLAY_ANIM(0, iLocal_1091[0], sVar3, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0, 0, 0);
			}
			else
			{
				sVar4 = func_503(iLocal_1091[1]);
				TASK::TASK_PLAY_ANIM(0, iLocal_1091[1], sVar4, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1024[iParam1]);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_1024[iParam1]);
		}
		iLocal_1033[iParam1] = 1;
	}
}

char* func_503(char* sParam0)//Position - 0x51466
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, iLocal_1091[0]))
	{
		return sLocal_1082[MISC::GET_RANDOM_INT_IN_RANGE(0, sLocal_1082)];
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, iLocal_1091[1]))
	{
		return sLocal_1087[MISC::GET_RANDOM_INT_IN_RANGE(0, sLocal_1087)];
	}
	return "NULL";
}

void func_504(var uParam0)//Position - 0x514B2
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	float fVar7;
	
	if (iLocal_736 == 0)
	{
		fVar3 = 201.6718f;
		Var0 = { -1332.922f, -1043.142f, 6.65f };
	}
	else if (iLocal_736 == 1)
	{
		fVar3 = -20f;
		Var0 = { 1759.435f, 3894.694f, 33.789f };
	}
	else
	{
		fVar3 = 167.8617f;
		Var0 = { -2304.443f, 462.6692f, 173.4493f };
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f);
	fVar3 = (fVar3 + fVar7);
	if (SYSTEM::VDIST2(*uParam0, Var0) <= 25f)
	{
		Var4 = { GlobalFunc_4722(*uParam0, fVar3, 0f, 10f, 0f) };
		*uParam0 = { Var4 };
	}
}

int func_505(var uParam0, var uParam1)//Position - 0x51561
{
	if (uParam1->f_11 > 0)
	{
		if (uParam1->f_11 >= uParam0->f_11)
		{
			return 1;
		}
	}
	return 0;
}

void func_506()//Position - 0x51581
{
	TASK::SET_EXCLUSIVE_SCENARIO_GROUP(sLocal_1050);
}

void func_507()//Position - 0x51590
{
	if (Local_2762.f_1735[0 /*206*/].f_11 == 0 && !iLocal_738)
	{
		iLocal_738 = 1;
	}
	else if (((Local_2762.f_1735[0 /*206*/].f_11 == func_340() + 2 && !iLocal_739) && HUD::DOES_BLIP_EXIST(Local_2762.f_26[Local_2762.f_1735[0 /*206*/].f_11 /*14*/].f_9)) && (PED::IS_PED_IN_ANY_VEHICLE(Local_2762.f_1735[0 /*206*/].f_8, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_2762.f_1735[0 /*206*/].f_8)))
	{
		HUD::SET_BLIP_COLOUR(Local_2762.f_26[Local_2762.f_1735[0 /*206*/].f_11 /*14*/].f_9, 5);
		iLocal_739 = 1;
	}
	else if (Local_2762.f_1735[0 /*206*/].f_11 == func_339() + 1 && !iLocal_740)
	{
		HUD::SET_BLIP_COLOUR(Local_2762.f_26[Local_2762.f_1735[0 /*206*/].f_11 /*14*/].f_9, 5);
		iLocal_740 = 1;
	}
}

void func_508(var uParam0, char* sParam1)//Position - 0x51678
{
	int iVar0;
	
	if (uParam0->f_1735[0 /*206*/].f_11 >= (uParam0->f_11 - 3) && !func_278(268435456))
	{
		func_291(268435456);
		StringCopy(sParam1, "mini@triathlon", 32);
		iVar0 = GlobalFunc_8315();
		if (iVar0 == 0)
		{
			StringConCat(sParam1, "michael", 32);
		}
		else if (iVar0 == 1)
		{
			StringConCat(sParam1, "franklin", 32);
		}
		else if (iVar0 == 2)
		{
			StringConCat(sParam1, "trevor", 32);
		}
		STREAMING::REQUEST_ANIM_DICT(sParam1);
		STREAMING::REQUEST_MODEL(joaat("prop_energy_drink"));
	}
}

void func_509(var uParam0, float fParam1, float fParam2)//Position - 0x516FD
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	char* sVar7;
	
	if (!GlobalFunc_226(&uLocal_2589))
	{
		GlobalFunc_6877(&uLocal_2589);
	}
	if ((PED::IS_PED_INJURED(iLocal_2582) || !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_2582)) && GlobalFunc_7084(&uLocal_2589, fLocal_2581))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		Var3 = { Vector(1f, 1f, 1f) * Vector(30f, 30f, 30f) };
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(1);
		iVar6 = PED::GET_RANDOM_PED_AT_COORD(Var0, Var3, 30);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && !PED::IS_PED_INJURED(iVar6)) && ENTITY::GET_ENTITY_MODEL(iVar6) != joaat("a_m_y_roadcyc_01"))
		{
			sVar7 = GlobalFunc_1078(PED::IS_PED_MALE(iVar6), "WAVELOAD_PAIN_MALE", "WAVELOAD_PAIN_FEMALE");
			GlobalFunc_5653(iVar6, "WHOOP", sVar7, 6);
			fLocal_2581 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2);
			GlobalFunc_6877(&uLocal_2589);
		}
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, 1), uParam0->f_26[(uParam0->f_11 - 1) /*14*/].f_3) < 1000f && !func_278(32768))
	{
		func_510(uParam0);
		func_291(32768);
	}
}

void func_510(var uParam0)//Position - 0x51812
{
	AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_14, "CROWD_CHEER_MASTER", uParam0->f_26[(uParam0->f_11 - 1) /*14*/].f_3, 0, 0, 0, 0);
	AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_15, "POSITIONED_WALLA_MASTER", uParam0->f_26[(uParam0->f_11 - 1) /*14*/].f_3, 0, 0, 0, 0);
}




void func_514(var uParam0)//Position - 0x51AA6
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_278(16777216))
	{
		iVar0 = func_340() + 1;
		iVar1 = uParam0->f_1735[0 /*206*/].f_11;
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3))
		{
			fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask");
			if (fVar2 >= 0.457f)
			{
				PED::KNOCK_OFF_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1, 1, 1);
				func_291(16777216);
			}
		}
		if ((iVar1 >= iVar0 && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3)) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 8f, -8f, -1, 48, 0f, 0, 0, 0);
		}
	}
}

int func_515(var uParam0)//Position - 0x51B6B
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	float fVar7;
	
	if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 != 6 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[0 /*206*/].f_8, 1435919172) == 1)
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, 1) };
	fVar3 = (5f * 5f);
	iVar5 = 1;
	bVar6 = false;
	while (iVar5 < uParam0->f_12)
	{
		fVar7 = SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar5 /*206*/].f_8, 1));
		if (fVar7 < fVar3 && uParam0->f_1735[iVar5 /*206*/].f_12 > uParam0->f_1735[0 /*206*/].f_12)
		{
			fVar3 = fVar7;
			iVar4 = iVar5;
			bVar6 = true;
		}
		iVar5++;
	}
	if (bVar6)
	{
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[iVar4 /*206*/].f_8, 3000, 0, 2);
		return 1;
	}
	return 0;
}

void func_516(var uParam0)//Position - 0x51C4C
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	iVar0 = 1;
	while (iVar0 < 8)
	{
		if (func_365(uParam0, &(uParam0->f_1735[iVar0 /*206*/])) == 2)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iVar0 /*206*/].f_8, -1689270312) == 1)
			{
				fVar1 = (IntToFloat(iVar0) / 8f);
				Var2 = { GlobalFunc_721(3f, 3f, 0f, -3f, -3f, 0f, fVar1) };
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uParam0->f_1735[iVar0 /*206*/].f_8, Var2);
			}
		}
		iVar0++;
	}
}


void func_518(var uParam0)//Position - 0x51CE4
{
	int iVar0;
	float fVar1;
	
	if (iLocal_736 == 0)
	{
		iVar0 = uParam0->f_1735[0 /*206*/].f_11;
		if (iVar0 == iLocal_777)
		{
			if (!iLocal_783)
			{
				iLocal_783 = 1;
			}
		}
		else if (iVar0 >= iLocal_778 && iVar0 <= iLocal_779)
		{
			if (!iLocal_784)
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_9, 0))
				{
					if (!GlobalFunc_226(&uLocal_790))
					{
						GlobalFunc_8641(&uLocal_790);
					}
					else if (GlobalFunc_7084(&uLocal_790, 3f))
					{
						if (PAD::_IS_USING_KEYBOARD(0))
						{
							GlobalFunc_159("TRI_HELP_BIKE_KM", -1);
						}
						iLocal_784 = 1;
						GlobalFunc_235(&uLocal_790);
					}
				}
			}
		}
		else if (iVar0 == iLocal_780)
		{
			if (!iLocal_785)
			{
				if (!GlobalFunc_226(&uLocal_790))
				{
					GlobalFunc_8641(&uLocal_790);
				}
				else if (GlobalFunc_7084(&uLocal_790, 5f))
				{
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_159("TRI_HELP_RUN_KM", -1);
					}
					else
					{
						GlobalFunc_159("TRI_HELP_RUN", -1);
					}
					iLocal_785 = 1;
					GlobalFunc_235(&uLocal_790);
				}
			}
		}
		if (iVar0 == iLocal_781 && GlobalFunc_6814(GlobalFunc_8315(), 1) < 99)
		{
			if (!iLocal_786)
			{
				GlobalFunc_159("TRI_HELP_TIP_1", -1);
				iLocal_786 = 1;
			}
			else if (!iLocal_787)
			{
				if (!GlobalFunc_74("TRI_HELP_TIP_1"))
				{
					GlobalFunc_159("TRI_HELP_TIP_2", -1);
					iLocal_787 = 1;
				}
			}
		}
		if (!iLocal_736 == 0)
		{
			if (iVar0 == iLocal_782)
			{
				if (!iLocal_788 && !func_278(16))
				{
					GlobalFunc_159("TRI_HELP_TV", -1);
					iLocal_788 = 1;
				}
			}
		}
		else if (iVar0 == iLocal_782)
		{
			fVar1 = 0f;
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, 1), uParam0->f_26[iLocal_782 /*14*/].f_3, 1);
				if (fVar1 < 60f)
				{
					if (!iLocal_788 && !func_278(16))
					{
						GlobalFunc_159("TRI_HELP_TV", -1);
						iLocal_788 = 1;
					}
				}
			}
		}
	}
}





void func_523(var uParam0)//Position - 0x52186
{
	int iVar0;
	
	if (func_278(32))
	{
		return;
	}
	iVar0 = func_365(uParam0, &(uParam0->f_1735[0 /*206*/]));
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_1735[0 /*206*/].f_8) > 0.75f && iVar0 != 0)
	{
		func_542(uParam0);
		func_540(uParam0);
		func_534(uParam0);
		func_532(uParam0);
		func_530(uParam0);
		func_528(uParam0);
		func_526(uParam0);
		func_524();
	}
}

void func_524()//Position - 0x521F8
{
	char* sVar0;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (Local_752 <= 5)
		{
			if (GlobalFunc_7084(&uLocal_1007, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_814.f_173, Local_814.f_174)))
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						sVar0 = "MICHAEL_NORMAL";
						break;
					
					case 1:
						sVar0 = "FRANKLIN_NORMAL";
						break;
					
					case 2:
						sVar0 = "TREVOR_NORMAL";
						break;
				}
				func_525(PLAYER::PLAYER_PED_ID(), "TRIATHLON_COMMENT", sVar0, 4);
				GlobalFunc_6877(&uLocal_989);
				GlobalFunc_6877(&uLocal_1007);
			}
		}
	}
}

void func_525(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x52285
{
	GlobalFunc_5653(iParam0, sParam1, sParam2, iParam3);
}

void func_526(var uParam0)//Position - 0x52299
{
	char* sVar0;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (func_527(uParam0))
		{
			if (GlobalFunc_7084(&uLocal_774, 10f))
			{
				if (GlobalFunc_7084(&uLocal_1004, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_814.f_173, Local_814.f_174)))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					if (GlobalFunc_8315() == 0)
					{
						if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < 0.3f)
						{
							func_525(PLAYER::PLAYER_PED_ID(), "GETTING_OLD", "MICHAEL_NORMAL", 4);
						}
					}
					else
					{
						func_525(PLAYER::PLAYER_PED_ID(), "RACE_STAY_POSITION_OUT_OF_BREATH", sVar0, 4);
					}
					GlobalFunc_6877(&uLocal_1004);
					GlobalFunc_6877(&uLocal_989);
				}
			}
		}
	}
}

int func_527(var uParam0)//Position - 0x52368
{
	if (uParam0->f_1735[0 /*206*/].f_12 == uParam0->f_12)
	{
		if (!GlobalFunc_226(&uLocal_774))
		{
			GlobalFunc_7777(&uLocal_774);
		}
		return 1;
	}
	if (GlobalFunc_226(&uLocal_774))
	{
		GlobalFunc_235(&uLocal_774);
	}
	return 0;
}

void func_528(var uParam0)//Position - 0x523AC
{
	char* sVar0;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (func_529(uParam0))
		{
			if (GlobalFunc_7084(&uLocal_771, 10f))
			{
				if (GlobalFunc_7084(&uLocal_1001, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_814.f_173, Local_814.f_174)))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					func_525(PLAYER::PLAYER_PED_ID(), "RACE_STAY_POSITION_OUT_OF_BREATH", sVar0, 4);
					GlobalFunc_6877(&uLocal_1001);
					GlobalFunc_6877(&uLocal_989);
				}
			}
		}
	}
}

int func_529(var uParam0)//Position - 0x5244A
{
	if (uParam0->f_1735[0 /*206*/].f_12 == 2)
	{
		if (!GlobalFunc_226(&uLocal_771))
		{
			GlobalFunc_7777(&uLocal_771);
		}
		return 1;
	}
	if (GlobalFunc_226(&uLocal_771))
	{
		GlobalFunc_235(&uLocal_771);
	}
	return 0;
}

void func_530(var uParam0)//Position - 0x5248B
{
	char* sVar0;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (func_531(uParam0))
		{
			if (GlobalFunc_7084(&uLocal_768, 10f))
			{
				if (GlobalFunc_7084(&uLocal_998, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_814.f_173, Local_814.f_174)))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					func_525(PLAYER::PLAYER_PED_ID(), "RACE_STAY_1ST_OUT_OF_BREATH", sVar0, 4);
					GlobalFunc_6877(&uLocal_998);
					GlobalFunc_6877(&uLocal_989);
				}
			}
		}
	}
}

int func_531(var uParam0)//Position - 0x52529
{
	if (uParam0->f_1735[0 /*206*/].f_12 == 1)
	{
		if (!GlobalFunc_226(&uLocal_768))
		{
			GlobalFunc_7777(&uLocal_768);
		}
		return 1;
	}
	if (GlobalFunc_226(&uLocal_768))
	{
		GlobalFunc_235(&uLocal_768);
	}
	return 0;
}

void func_532(var uParam0)//Position - 0x5256A
{
	char* sVar0;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (func_533(uParam0))
		{
			if (GlobalFunc_7084(&uLocal_765, 10f))
			{
				if (GlobalFunc_7084(&uLocal_995, MISC::GET_RANDOM_FLOAT_IN_RANGE(Local_814.f_173, Local_814.f_174)))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							sVar0 = "MICHAEL_NORMAL";
							break;
						
						case 1:
							sVar0 = "FRANKLIN_NORMAL";
							break;
						
						case 2:
							sVar0 = "TREVOR_NORMAL";
							break;
					}
					func_525(PLAYER::PLAYER_PED_ID(), "RACE_STAY_POSITION_OUT_OF_BREATH", sVar0, 4);
					GlobalFunc_6877(&uLocal_995);
					GlobalFunc_6877(&uLocal_989);
				}
			}
		}
	}
}

int func_533(var uParam0)//Position - 0x52608
{
	if (!((uParam0->f_1735[0 /*206*/].f_12 == 1 || uParam0->f_1735[0 /*206*/].f_12 == 2) || uParam0->f_1735[0 /*206*/].f_12 == uParam0->f_12))
	{
		if (iLocal_750 == uParam0->f_1735[0 /*206*/].f_12)
		{
			if (!GlobalFunc_226(&uLocal_765))
			{
				GlobalFunc_7777(&uLocal_765);
			}
		}
		else
		{
			iLocal_750 = uParam0->f_1735[0 /*206*/].f_12;
			GlobalFunc_235(&uLocal_765);
		}
		return 1;
	}
	return 0;
}

void func_534(var uParam0)//Position - 0x52688
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (GlobalFunc_7084(&uLocal_992, MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)))
		{
			if (func_539(uParam0))
			{
				if (func_538(uParam0))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(Local_814.f_170, Local_814.f_171 + 1) < Local_814.f_172)
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								sVar1 = "MICHAEL_NORMAL";
								break;
							
							case 1:
								sVar1 = "FRANKLIN_NORMAL";
								break;
							
							case 2:
								sVar1 = "TREVOR_NORMAL";
								break;
						}
						sVar2 = GlobalFunc_1078(PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID()) < 30f, "RACE_RANKDOWN_OUT_OF_BREATH", "RACE_RANKDOWN");
						func_525(PLAYER::PLAYER_PED_ID(), sVar2, sVar1, 4);
					}
					else
					{
						iVar0 = func_537(uParam0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							func_535(iVar0, "GENERIC_INSULT_MED", 4);
						}
					}
					GlobalFunc_6877(&uLocal_992);
					GlobalFunc_6877(&uLocal_989);
				}
			}
		}
	}
}

void func_535(int iParam0, char* sParam1, int iParam2)//Position - 0x52774
{
	func_536(iParam0, sParam1, iParam2);
}

void func_536(var uParam0, var uParam1, int iParam2)//Position - 0x52786
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, uParam1, GlobalFunc_566(iParam2), 1);
}

var func_537(var uParam0)//Position - 0x5279D
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar10 /*206*/].f_8))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
			{
				if (!uParam0->f_1735[iVar10 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar10 /*206*/].f_9))
					{
						if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iVar10 /*206*/].f_8, uParam0->f_1735[iVar10 /*206*/].f_9, 0))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar10 /*206*/].f_9, 1) };
						}
						else
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar10 /*206*/].f_8, 1) };
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
					{
						if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[iVar10 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_9, 0))
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_9, 1) };
						}
						else
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, 1) };
						}
					}
					if (iVar10 == 1)
					{
						fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
						iVar6 = iVar10;
					}
					else
					{
						fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
						if (fVar7 < fVar8)
						{
							fVar8 = fVar7;
							iVar6 = iVar10;
						}
					}
				}
			}
		}
		iVar10++;
	}
	uVar9 = uParam0->f_1735[iVar6 /*206*/].f_8;
	return uVar9;
}

int func_538(var uParam0)//Position - 0x528F7
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar1 /*206*/].f_8))
		{
			if (!uParam0->f_1735[iVar1 /*206*/].f_8 == uParam0->f_1735[0 /*206*/].f_8)
			{
				fVar0 = GlobalFunc_156(uParam0->f_1735[iVar1 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_8, 1);
				if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_1735[iVar1 /*206*/].f_8))
				{
					if (fVar0 <= 11f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_539(var uParam0)//Position - 0x52980
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
	{
		if (iLocal_748 != -1)
		{
			iLocal_749 = uParam0->f_1735[0 /*206*/].f_12;
			if (iLocal_749 > iLocal_748)
			{
				iLocal_748 = iLocal_749;
				return 1;
			}
			else if (iLocal_749 == iLocal_748)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			iLocal_748 = uParam0->f_1735[0 /*206*/].f_12;
			return 0;
		}
	}
	iLocal_748 = iLocal_749;
	return 0;
}

void func_540(var uParam0)//Position - 0x529F3
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (GlobalFunc_7084(&uLocal_992, MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)))
		{
			if (func_541(uParam0))
			{
				if (func_538(uParam0))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(Local_814.f_170, Local_814.f_171 + 1) < Local_814.f_172)
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								sVar1 = "MICHAEL_NORMAL";
								break;
							
							case 1:
								sVar1 = "FRANKLIN_NORMAL";
								break;
							
							case 2:
								sVar1 = "TREVOR_NORMAL";
								break;
						}
						sVar2 = GlobalFunc_1078(PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID()) < 30f, "RACE_RANKUP_OUT_OF_BREATH", "RACE_RANKUP");
						func_525(PLAYER::PLAYER_PED_ID(), sVar2, sVar1, 4);
					}
					else
					{
						iVar0 = func_537(uParam0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							func_535(iVar0, "GENERIC_CURSE_MED", 4);
						}
					}
					GlobalFunc_6877(&uLocal_992);
					GlobalFunc_6877(&uLocal_989);
				}
			}
		}
	}
}

int func_541(var uParam0)//Position - 0x52ADF
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
	{
		if (iLocal_748 != -1)
		{
			iLocal_749 = uParam0->f_1735[0 /*206*/].f_12;
			if (iLocal_749 < iLocal_748)
			{
				iLocal_748 = iLocal_749;
				return 1;
			}
			else if (iLocal_749 == iLocal_748)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			iLocal_748 = uParam0->f_1735[0 /*206*/].f_12;
			return 0;
		}
	}
	iLocal_748 = iLocal_749;
	return 0;
}

void func_542(var uParam0)//Position - 0x52B52
{
	int iVar0;
	char* sVar1;
	
	if (GlobalFunc_7084(&uLocal_989, Local_814.f_169))
	{
		if (GlobalFunc_7084(&uLocal_992, MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f)))
		{
			if (func_543(uParam0))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(Local_814.f_170, Local_814.f_171 + 1) < Local_814.f_172)
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							sVar1 = "MICHAEL_NORMAL";
							break;
						
						case 1:
							sVar1 = "FRANKLIN_NORMAL";
							break;
						
						case 2:
							sVar1 = "TREVOR_NORMAL";
							break;
					}
					func_525(PLAYER::PLAYER_PED_ID(), "RACE_COLLIDE_OUT_OF_BREATH", sVar1, 4);
				}
				else
				{
					iVar0 = func_537(uParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						func_535(iVar0, "GENERIC_CURSE_MED", 4);
					}
				}
				GlobalFunc_6877(&uLocal_992);
				GlobalFunc_6877(&uLocal_989);
			}
		}
	}
}

int func_543(var uParam0)//Position - 0x52C1A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (uParam0->f_1735[iVar0 /*206*/].f_8 != uParam0->f_1735[0 /*206*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[iVar0 /*206*/].f_8))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_544(var uParam0)//Position - 0x52C95
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 > 0)
		{
			if (!GlobalFunc_747(uParam0->f_1735[iVar0 /*206*/].f_197, 1))
			{
				iVar1 = uParam0->f_1735[iVar0 /*206*/].f_11;
				if (iVar1 >= func_340() + 1)
				{
					iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					PED::SET_PED_HELMET_PROP_INDEX(uParam0->f_1735[iVar0 /*206*/].f_8, 0, 1);
					PED::SET_PED_HELMET_TEXTURE_INDEX(uParam0->f_1735[iVar0 /*206*/].f_8, iVar2);
					PED::SET_PED_HELMET(uParam0->f_1735[iVar0 /*206*/].f_8, 1);
					GlobalFunc_6594(&(uParam0->f_1735[iVar0 /*206*/].f_197), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_545(var uParam0)//Position - 0x52D2C
{
	int iVar0;
	int iVar1;
	
	if (iLocal_1284 != uParam0->f_1735[0 /*206*/].f_11)
	{
		iVar0 = uParam0->f_1735[0 /*206*/].f_11;
		switch (iLocal_736)
		{
			case 1:
				switch (iVar0)
				{
					case 0:
						iLocal_1098[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2004.35f, 3820.26f, 31.29f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[0], 0f, 0f, 26.93f, 2, 1);
						iLocal_1098[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2008.53f, 3822.45f, 31.27f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[1], 0f, 0f, 30.94f, 2, 1);
						iLocal_1098[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2014.15f, 3811.08f, 31.28f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[2], 0f, 0f, 29.79f, 2, 1);
						iLocal_1098[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 2009.98f, 3808.24f, 31.29f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[3], 0f, 0f, 32.09f, 2, 1);
						iLocal_1098[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1926.76f, 3779.54f, 31.3f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[4], 0f, 0f, 0f, 2, 1);
						iLocal_1098[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1922.26f, 3777f, 31.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[5], 0f, 0f, 32.66f, 2, 1);
						iLocal_1098[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1920.64f, 3762.73f, 31.34f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[6], 0f, 0f, -59.59f, 2, 1);
						iLocal_1098[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1917.69f, 3767.16f, 31.31f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[7], 0f, 0f, -52.71f, 2, 1);
						iLocal_1098[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1959.77f, 3728.88f, 31.36f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[8], 0f, 0f, -60.16f, 2, 1);
						iLocal_1098[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1961.34f, 3722.45f, 31.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[9], 0f, 0f, -108.29f, 2, 1);
						iLocal_1098[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1958.5f, 3717.41f, 31.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[10], 0f, 0f, 29.22f, 2, 1);
						iLocal_1098[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1954.45f, 3715.06f, 31.35f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[11], 0f, 0f, 28.07f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					
					case 4:
						iLocal_1098[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1807.02f, 3632.48f, 33.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[12], 0f, 0f, -63.6f, 2, 1);
						iLocal_1098[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1804.81f, 3636.01f, 33.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[13], 0f, 0f, -61.88f, 2, 1);
						iLocal_1098[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1794.72f, 3686.27f, 33.22f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[14], 0f, 0f, -61.88f, 2, 1);
						iLocal_1098[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1791.9f, 3690.92f, 33.25f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[15], 0f, 0f, -54.43f, 2, 1);
						iLocal_1098[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1784.15f, 3694.5f, 33.24f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[16], 0f, 0f, 26.93f, 2, 1);
						iLocal_1098[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1780.4f, 3692.03f, 33.26f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[17], 0f, 0f, 34.38f, 2, 1);
						iLocal_1098[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1710.76f, 3640.67f, 34.06f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[18], 0f, 0f, -55.58f, 2, 1);
						iLocal_1098[19] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1708.49f, 3644.04f, 34.07f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[19], 0f, 0f, -47.56f, 2, 1);
						iLocal_1098[20] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1683.38f, 3713.1f, 33.01f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[20], 0f, 0f, -61.31f, 2, 1);
						iLocal_1098[21] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1677.64f, 3720.92f, 33.01f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[21], 0f, 0f, -28.07f, 2, 1);
						iLocal_1098[22] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1612.28f, 3668.28f, 33.5f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[22], 0f, 0f, -4.58f, 2, 1);
						iLocal_1098[23] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1606.54f, 3665.35f, 33.5f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[23], 0f, 0f, 27.5f, 2, 1);
						iLocal_1098[24] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1598f, 3667.36f, 33.5f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[24], 0f, 0f, -65.32f, 2, 1);
						iLocal_1098[25] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1595.84f, 3671.44f, 33.52f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[25], 0f, 0f, -62.45f, 2, 1);
						iLocal_1098[26] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1578.86f, 3720.93f, 33.55f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[26], 0f, 0f, -55f, 2, 1);
						iLocal_1098[27] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1581.19f, 3717.19f, 33.55f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[27], 0f, 0f, -56.72f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					
					case 9:
						iVar1 = 0;
						while (iVar1 < 12)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1098[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_1098[iVar1]));
							}
							iVar1++;
						}
						iLocal_1098[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1538.91f, 3749.03f, 33.52f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[0], 0f, 0f, -50.42f, 2, 1);
						iLocal_1098[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1535.98f, 3752.04f, 33.53f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[1], 0f, 0f, -42.97f, 2, 1);
						iLocal_1098[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1666.49f, 3852.7f, 33.91f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[2], 0f, 0f, 44.12f, 2, 1);
						iLocal_1098[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1670.53f, 3856.54f, 33.91f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[3], 0f, 0f, 45.26f, 2, 1);
						iLocal_1098[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1745.85f, 3912.58f, 33.93f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[4], 0f, 0f, 25.78f, 2, 1);
						iLocal_1098[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1749.87f, 3914.58f, 33.93f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[5], 0f, 0f, 28.07f, 2, 1);
						iLocal_1098[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1854.29f, 3938.16f, 32.06f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[6], 0f, 0f, 0f, 2, 1);
						iLocal_1098[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1859.38f, 3937.73f, 32.06f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[7], 0f, 0f, 0f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					
					case 15:
						iVar1 = 12;
						while (iVar1 <= 100)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1098[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_1098[iVar1]));
							}
							iVar1++;
						}
						iLocal_1098[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1973.36f, 3891.21f, 31.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[8], 0f, 0f, -60.16f, 2, 1);
						iLocal_1098[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1976.07f, 3886.16f, 31.34f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[9], 0f, 0f, -67.61f, 2, 1);
						iLocal_1098[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1973.92f, 3877.91f, 31.35f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[10], 0f, 0f, 26.93f, 2, 1);
						iLocal_1098[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1969.69f, 3875.41f, 31.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[11], 0f, 0f, 25.78f, 2, 1);
						iLocal_1098[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1896.09f, 3831.12f, 31.4f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[12], 0f, 0f, 37.24f, 2, 1);
						iLocal_1098[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1892.08f, 3828.75f, 31.43f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[13], 0f, 0f, 32.09f, 2, 1);
						iLocal_1098[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1884.6f, 3830.7f, 31.41f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[14], 0f, 0f, -59.01f, 2, 1);
						iLocal_1098[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1882.81f, 3834.9f, 31.41f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[15], 0f, 0f, -60.16f, 2, 1);
						iLocal_1098[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1880.13f, 3838.67f, 31.41f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[16], 0f, 0f, -60.16f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					
					case 19:
						iVar1 = 0;
						while (iVar1 < 8)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1098[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_1098[iVar1]));
							}
							iVar1++;
						}
						iLocal_1098[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1773.32f, 3855.45f, 33.4f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[0], 0f, 0f, -61.88f, 2, 1);
						iLocal_1098[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1770.9f, 3859.71f, 33.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[1], 0f, 0f, -59.01f, 2, 1);
						iLocal_1098[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1785.65f, 3854.89f, 33.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[2], 0f, 0f, 22.92f, 2, 1);
						iLocal_1098[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1781.05f, 3852.64f, 33.43f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[3], 0f, 0f, 21.2f, 2, 1);
						iLocal_1098[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1776.57f, 3852.54f, 33.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[4], 0f, 0f, -18.91f, 2, 1);
						iLocal_1098[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1868.55f, 3905.49f, 32.08f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[5], 0f, 0f, 0f, 2, 1);
						iLocal_1098[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 1864.04f, 3904.22f, 32.08f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1098[6], 0f, 0f, 17.19f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
				}
				break;
			
			case 0:
				switch (iVar0)
				{
					case 0:
						iLocal_1200[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1251.88f, -1708.03f, 3.47f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[0], 0f, 0f, 35.52f, 2, 1);
						iLocal_1200[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1254.57f, -1698.15f, 3.24f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[1], 0f, 0f, -53.86f, 2, 1);
						iLocal_1200[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1291.87f, -1645.98f, 3.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[2], 0f, 0f, -56.15f, 2, 1);
						iLocal_1200[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1293.65f, -1643.15f, 3.38f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[3], 0f, 0f, -56.15f, 2, 1);
						iLocal_1200[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1303.26f, -1627.35f, 3.35f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[4], 0f, 0f, -56.15f, 2, 1);
						iLocal_1200[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1305.43f, -1624.25f, 3.36f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[5], 0f, 0f, -56.15f, 2, 1);
						iLocal_1200[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1312.92f, -1612.41f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[6], 0f, 0f, -63.6f, 2, 1);
						iLocal_1200[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1315.34f, -1608.29f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[7], 0f, 0f, -57.3f, 2, 1);
						iLocal_1200[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1317.18f, -1604.61f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[8], 0f, 0f, -61.88f, 2, 1);
						iLocal_1200[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1319.44f, -1600.76f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[9], 0f, 0f, -57.3f, 2, 1);
						iLocal_1200[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1321.94f, -1596.94f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[10], 0f, 0f, -61.31f, 2, 1);
						iLocal_1200[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1324.12f, -1593.29f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[11], 0f, 0f, -61.31f, 2, 1);
						iLocal_1200[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1326.12f, -1589.81f, 3.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[12], 0f, 0f, -63.6f, 2, 1);
						iLocal_1200[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1328.02f, -1586.82f, 3.36f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[13], 0f, 0f, -58.44f, 2, 1);
						iLocal_1200[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1339.3f, -1554.03f, 3.44f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[14], 0f, 0f, 85.94f, 2, 1);
						iLocal_1200[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1339.71f, -1550.58f, 3.44f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[15], 0f, 0f, -85.37f, 2, 1);
						iLocal_1200[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1380.21f, -1438.74f, 2.86f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[16], 0f, 0f, -71.62f, 2, 1);
						iLocal_1200[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1381.51f, -1434f, 2.77f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[17], 0f, 0f, -75.06f, 2, 1);
						iLocal_1200[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1382.52f, -1429.76f, 2.69f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[18], 0f, 0f, -73.34f, 2, 1);
						iLocal_1200[19] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1384.17f, -1425.3f, 2.63f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[19], 0f, 0f, -64.17f, 2, 1);
						iLocal_1221[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1357.89f, -1335.12f, 3.12f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[0], 0f, 0f, 84.22f, 2, 1);
						iLocal_1221[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1357f, -1331.86f, 3.2f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[1], 0f, 0f, 81.93f, 2, 1);
						iLocal_1221[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1354.14f, -1328.52f, 3.48f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[2], 0f, 0f, 16.04f, 2, 1);
						iLocal_1221[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1350.95f, -1328.05f, 3.48f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[3], 0f, 0f, 6.3f, 2, 1);
						iLocal_1221[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1330.99f, -1337.14f, 3.71f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[4], 0f, 0f, 29.22f, 2, 1);
						iLocal_1221[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1327.36f, -1334.4f, 3.68f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[5], 0f, 0f, 38.96f, 2, 1);
						iLocal_1221[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1322.91f, -1330.92f, 3.71f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[6], 0f, 0f, 50.42f, 2, 1);
						iLocal_1221[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1320.47f, -1326.51f, 3.73f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[7], 0f, 0f, 68.18f, 2, 1);
						iLocal_1221[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1358.19f, -1256.65f, 3.9f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[8], 0f, 0f, -74.48f, 2, 1);
						iLocal_1221[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1360.16f, -1251.53f, 3.9f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[9], 0f, 0f, -69.33f, 2, 1);
						iLocal_1221[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1361.65f, -1246.33f, 3.89f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[10], 0f, 0f, -76.2f, 2, 1);
						iLocal_1221[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1370.84f, -1178.08f, 3.45f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[11], 0f, 0f, -85.94f, 2, 1);
						iLocal_1221[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1370.87f, -1173.21f, 3.55f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[12], 0f, 0f, 82.51f, 2, 1);
						iLocal_1221[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1367.38f, -1110.23f, 3.43f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[13], 0f, 0f, 14.9f, 2, 1);
						iLocal_1221[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1362.66f, -1109.99f, 3.33f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[14], 0f, 0f, 5.73f, 2, 1);
						iLocal_1221[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1358.07f, -1109.26f, 3.25f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[15], 0f, 0f, 7.45f, 2, 1);
						iLocal_1242[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1316.74f, -1083.18f, 5.8f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[0], 0f, 0f, 22.35f, 2, 1);
						iLocal_1242[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1312.69f, -1081.74f, 5.95f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[1], 0f, 0f, 0f, 2, 1);
						iLocal_1242[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1307.1f, -1081.34f, 5.9f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[2], 0f, 0f, -14.9f, 2, 1);
						iLocal_1242[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1302.01f, -1082.5f, 5.88f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[3], 0f, 0f, -37.82f, 2, 1);
						iLocal_1242[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1299.4f, -1086.14f, 5.97f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[4], 0f, 0f, -70.47f, 2, 1);
						iLocal_1242[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1298.2f, -1090f, 6.06f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[5], 0f, 0f, -72.19f, 2, 1);
						iLocal_1242[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1293.63f, -1133.6f, 4.99f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[6], 0f, 0f, -94.54f, 2, 1);
						iLocal_1242[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1293.29f, -1138.75f, 4.81f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[7], 0f, 0f, 77.35f, 2, 1);
						iLocal_1242[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1307.44f, -1191.57f, 3.77f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[8], 0f, 0f, -67.61f, 2, 1);
						iLocal_1242[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1305.01f, -1196.22f, 3.92f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[9], 0f, 0f, -50.42f, 2, 1);
						iLocal_1242[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1300.14f, -1200.32f, 3.83f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[10], 0f, 0f, -16.62f, 2, 1);
						iLocal_1242[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1295.12f, -1200.71f, 3.89f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[11], 0f, 0f, 13.18f, 2, 1);
						iLocal_1242[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1290.7f, -1199.32f, 3.91f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[12], 0f, 0f, 26.93f, 2, 1);
						iLocal_1242[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1287.01f, -1197.73f, 3.77f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[13], 0f, 0f, 23.49f, 2, 1);
						iLocal_1242[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1280.56f, -1174.64f, 4.19f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[14], 0f, 0f, 25.78f, 2, 1);
						iLocal_1242[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1277.29f, -1172.75f, 4.44f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[15], 0f, 0f, 25.78f, 2, 1);
						iLocal_1263[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1257.79f, -1188.19f, 5.2f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[0], 0f, 0f, 17.19f, 2, 1);
						iLocal_1263[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1254.92f, -1186.69f, 5.51f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[1], 0f, 0f, 20.05f, 2, 1);
						iLocal_1263[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1221.57f, -1169.95f, 6.55f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[2], 0f, 0f, 9.17f, 2, 1);
						iLocal_1263[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1217.41f, -1168.71f, 6.72f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[3], 0f, 0f, 24.64f, 2, 1);
						iLocal_1263[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1213.66f, -1166.08f, 6.74f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[4], 0f, 0f, 45.84f, 2, 1);
						iLocal_1263[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1210.98f, -1161.85f, 6.7f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[5], 0f, 0f, 85.37f, 2, 1);
						iLocal_1263[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1216.02f, -1115.82f, 6.81f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[6], 0f, 0f, -72.77f, 2, 1);
						iLocal_1263[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1217.1f, -1112.19f, 6.85f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[7], 0f, 0f, -72.77f, 2, 1);
						iLocal_1263[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1259.74f, -1071.68f, 7.34f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[8], 0f, 0f, -63.6f, 2, 1);
						iLocal_1263[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1261.22f, -1068.47f, 7.46f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[9], 0f, 0f, -68.18f, 2, 1);
						iLocal_1263[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1262.85f, -1065.11f, 7.34f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[10], 0f, 0f, -71.62f, 2, 1);
						iLocal_1263[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1244.95f, -1038.79f, 7.51f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[11], 0f, 0f, -73.91f, 2, 1);
						iLocal_1263[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1246.41f, -1034.65f, 7.62f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[12], 0f, 0f, -73.91f, 2, 1);
						iLocal_1263[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1301.45f, -917.82f, 10.19f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[13], 0f, 0f, 101.99f, 2, 1);
						iLocal_1263[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1302.3f, -912.27f, 10.22f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[14], 0f, 0f, 81.93f, 2, 1);
						iLocal_1263[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1300.89f, -907.33f, 10.35f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[15], 0f, 0f, 56.15f, 2, 1);
						iLocal_1263[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1296.5f, -903.95f, 10.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[16], 0f, 0f, 19.48f, 2, 1);
						iLocal_1263[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1292.15f, -902.31f, 10.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[17], 0f, 0f, 18.91f, 2, 1);
						iLocal_1263[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1287.36f, -900.65f, 10.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[18], 0f, 0f, 14.9f, 2, 1);
						iLocal_1263[19] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1282.91f, -899.03f, 10.32f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1263[19], 0f, 0f, 19.48f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					
					case 15:
						iVar1 = 0;
						while (iVar1 < 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1200[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_1200[iVar1]));
							}
							iVar1++;
						}
						iLocal_1200[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1185.65f, -872.02f, 12.85f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[0], 0f, 0f, 31.51f, 2, 1);
						iLocal_1200[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1182.13f, -869.96f, 12.97f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[1], 0f, 0f, 25.21f, 2, 1);
						iLocal_1200[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1187.03f, -837.13f, 13.19f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[2], 0f, 0f, 33.23f, 2, 1);
						iLocal_1200[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1183.18f, -835.56f, 13.3f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[3], 0f, 0f, 0f, 2, 1);
						iLocal_1200[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1179.36f, -836.58f, 13.25f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[4], 0f, 0f, -19.48f, 2, 1);
						iLocal_1200[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1175.65f, -838.19f, 13.3f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[5], 0f, 0f, -21.2f, 2, 1);
						iLocal_1200[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1172.39f, -839.67f, 13.28f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[6], 0f, 0f, -26.36f, 2, 1);
						iLocal_1200[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1168.99f, -841.31f, 13.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[6], 0f, 0f, -32.09f, 2, 1);
						iLocal_1200[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1165.8f, -843.07f, 13.22f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[7], 0f, 0f, -28.65f, 2, 1);
						iLocal_1200[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1162.99f, -844.95f, 13.21f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[8], 0f, 0f, -53.86f, 2, 1);
						iLocal_1200[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1113.33f, -918.55f, 1.53f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[9], 0f, 0f, -60.16f, 2, 1);
						iLocal_1200[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1112.77f, -923.04f, 1.64f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[10], 0f, 0f, -91.1f, 2, 1);
						iLocal_1200[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1114.17f, -928.01f, 1.63f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[11], 0f, 0f, 60.73f, 2, 1);
						iLocal_1200[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1117.41f, -932.6f, 1.59f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[12], 0f, 0f, 45.84f, 2, 1);
						iLocal_1200[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1121.38f, -936.31f, 1.51f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[13], 0f, 0f, 21.2f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
					
					case 19:
						iVar1 = 0;
						while (iVar1 < 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1221[iVar1]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_1221[iVar1]));
							}
							iVar1++;
						}
						iLocal_1221[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1360.99f, -984.68f, 7.21f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[0], 0f, 0f, 24.64f, 2, 1);
						iLocal_1221[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1363.99f, -987.39f, 7.34f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[1], 0f, 0f, 59.01f, 2, 1);
						iLocal_1221[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1365.15f, -991.5f, 7.31f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[2], 0f, 0f, -88.81f, 2, 1);
						iLocal_1221[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1364.81f, -996.02f, 7.28f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[3], 0f, 0f, -76.78f, 2, 1);
						iLocal_1221[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1363.77f, -1000.48f, 7.23f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[4], 0f, 0f, -73.34f, 2, 1);
						iLocal_1221[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1362.08f, -1004.64f, 7.22f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[5], 0f, 0f, -57.87f, 2, 1);
						iLocal_1221[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -1360.13f, -1008.18f, 7.21f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[6], 0f, 0f, -55f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
				}
				break;
			
			case 2:
				switch (iVar0)
				{
					case 0:
						iLocal_1200[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -213.07f, 4183.79f, 42.6f, 1, 1, 0);
						ENTITY::SET_ENTITY_HEADING(iLocal_1200[0], 162.72f);
						iLocal_1200[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 104.62f, 3423.08f, 38.4f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[1], 0f, 0f, 22.92f, 2, 1);
						iLocal_1200[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 213.53f, 3395.94f, 37.39f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[2], 0f, 0f, -81.93f, 2, 1);
						iLocal_1200[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 213.91f, 3392.51f, 37.43f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[3], 0f, 0f, -81.93f, 2, 1);
						iLocal_1200[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 214.55f, 3388.98f, 37.43f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[4], 0f, 0f, 95.68f, 2, 1);
						iLocal_1200[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 206.06f, 3259.66f, 40.64f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[5], 0f, 0f, -83.65f, 2, 1);
						iLocal_1200[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 205.55f, 3255.18f, 40.75f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[6], 0f, 0f, -85.94f, 2, 1);
						iLocal_1200[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 231.66f, 3137.83f, 41.25f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[7], 0f, 0f, -88.24f, 2, 1);
						iLocal_1200[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 231.26f, 3132.59f, 41.28f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[8], 0f, 0f, 85.94f, 2, 1);
						iLocal_1200[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 202.56f, 3111.83f, 41.15f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[9], 0f, 0f, -75.06f, 2, 1);
						iLocal_1200[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 202.98f, 3108.23f, 41.17f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[10], 0f, 0f, -88.24f, 2, 1);
						iLocal_1200[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 224.14f, 2968.36f, 41.73f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[11], 0f, 0f, 56.72f, 2, 1);
						iLocal_1200[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 226.86f, 2972.91f, 41.71f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[12], 0f, 0f, 62.45f, 2, 1);
						iLocal_1200[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 229.18f, 2977.87f, 41.68f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[13], 0f, 0f, 69.33f, 2, 1);
						iLocal_1200[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 231.56f, 2983.72f, 41.6f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[14], 0f, 0f, -106.57f, 2, 1);
						iLocal_1200[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -80.66f, 2831.72f, 51.89f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[15], 0f, 0f, 71.62f, 2, 1);
						iLocal_1200[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -80.53f, 2825.88f, 52.06f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[16], 0f, 0f, -87.09f, 2, 1);
						iLocal_1200[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -78.46f, 2819.61f, 52.32f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1200[17], 0f, 0f, -76.2f, 2, 1);
						iLocal_1221[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -44.36f, 2789.68f, 55.32f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[0], 0f, 0f, 0f, 2, 1);
						iLocal_1221[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -38.9f, 2787.6f, 55.51f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[1], 0f, 0f, -30.37f, 2, 1);
						iLocal_1221[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -34.55f, 2784.3f, 55.75f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[2], 0f, 0f, -38.39f, 2, 1);
						iLocal_1221[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 280.01f, 2640.67f, 43.64f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[3], 0f, 0f, 15.47f, 2, 1);
						iLocal_1221[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 286.1f, 2643.15f, 43.65f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[4], 0f, 0f, 0f, 2, 1);
						iLocal_1221[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 293.96f, 2640.35f, 43.66f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[5], 0f, 0f, -71.05f, 2, 1);
						iLocal_1221[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 295.83f, 2635.74f, 43.65f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[6], 0f, 0f, -76.78f, 2, 1);
						iLocal_1221[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 714.05f, 2280.47f, 49.49f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[7], 0f, 0f, 120.32f, 2, 1);
						iLocal_1221[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 716.39f, 2274.91f, 49.38f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[8], 0f, 0f, -68.75f, 2, 1);
						iLocal_1221[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 724.59f, 2205.82f, 56.32f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[9], 0f, 0f, 68.18f, 2, 1);
						iLocal_1221[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 719.51f, 2199.87f, 57.14f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[10], 0f, 0f, 64.74f, 2, 1);
						iLocal_1221[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 715.4f, 2194.01f, 57.66f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[11], 0f, 0f, 58.44f, 2, 1);
						iLocal_1221[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 709.77f, 2188.46f, 58.3f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[12], 0f, 0f, 52.14f, 2, 1);
						iLocal_1221[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -82.68f, 2002.3f, 180.02f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[13], 0f, 0f, 21.2f, 2, 1);
						iLocal_1221[14] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 643.92f, 2175.31f, 63.6f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[14], 0f, 0f, -42.97f, 2, 1);
						iLocal_1221[15] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -182.31f, 1911.07f, 196.3f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[15], 0f, 0f, 94.72f, 2, 1);
						iLocal_1221[16] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -183.33f, 1901.75f, 195.87f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[16], 0f, 0f, 80.21f, 2, 1);
						iLocal_1221[17] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -172.88f, 1884.43f, 197.2f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[17], 0f, 0f, -61.88f, 2, 1);
						iLocal_1221[18] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -170.16f, 1880.49f, 197.21f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1221[18], 0f, 0f, -61.31f, 2, 1);
						iLocal_1242[0] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -4.54f, 1832.29f, 205.84f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[0], 0f, 0f, -55.58f, 2, 1);
						iLocal_1242[1] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -2.66f, 1828.43f, 206.37f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[1], 0f, 0f, -40.68f, 2, 1);
						iLocal_1242[2] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), -0.68f, 1824.21f, 206.99f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[2], 0f, 0f, -49.85f, 2, 1);
						iLocal_1242[3] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 146.99f, 1654.85f, 227.99f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[3], 0f, 0f, -57.87f, 2, 1);
						iLocal_1242[4] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 149f, 1650.24f, 228.06f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[4], 0f, 0f, -63.6f, 2, 1);
						iLocal_1242[5] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 229.63f, 1346.25f, 237.73f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[5], 0f, 0f, 84.22f, 2, 1);
						iLocal_1242[6] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 228.83f, 1343f, 237.63f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[6], 0f, 0f, 83.08f, 2, 1);
						iLocal_1242[7] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 228.56f, 1338.54f, 237.45f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[7], 0f, 0f, 89.38f, 2, 1);
						iLocal_1242[8] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 331.83f, 1007.23f, 209.5f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[8], 0f, 0f, -90.53f, 2, 1);
						iLocal_1242[9] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 332.03f, 1003.95f, 209.57f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[9], 0f, 0f, -93.97f, 2, 1);
						iLocal_1242[10] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 332.22f, 1000.55f, 209.52f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[10], 0f, 0f, 78.5f, 2, 1);
						iLocal_1242[11] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 302.02f, 1006.53f, 209.52f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[11], 0f, 0f, -88.24f, 2, 1);
						iLocal_1242[12] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 302.27f, 1003.18f, 209.56f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[12], 0f, 0f, -89.957f, 2, 1);
						iLocal_1242[13] = OBJECT::CREATE_OBJECT(joaat("prop_barrier_work06a"), 301.9f, 999.64f, 209.52f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_1242[13], 0f, 0f, -93.97f, 2, 1);
						iLocal_1284 = uParam0->f_1735[0 /*206*/].f_11;
						break;
				}
				break;
			}
	}
}

void func_546()//Position - 0x557D9
{
	func_564(&Local_2762);
	func_563(&Local_2762, Local_1069.f_6);
	switch (iLocal_7233)
	{
		case 0:
			if (func_365(&Local_2762, &(Local_2762.f_1735[0 /*206*/])) == 1)
			{
				iLocal_7233 = 1;
			}
			break;
		
		case 1:
			func_561(&Local_2762);
			GlobalFunc_164("SPR_OBJ_BIKE2", 7500, 0);
			func_362(Local_2762.f_1735[0 /*206*/].f_11);
			iLocal_7233 = 2;
			break;
		
		case 2:
			if (func_364(&Local_2762, 0, 1))
			{
				iLocal_7233 = 3;
				AUDIO::START_AUDIO_SCENE("TRI_BIKE_SCENE");
				AUDIO::STOP_AUDIO_SCENE("TRI_SWIM_SCENE");
			}
			break;
		
		case 3:
			if (HUD::DOES_BLIP_EXIST(uLocal_741))
			{
				HUD::REMOVE_BLIP(&uLocal_741);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_742))
			{
				HUD::REMOVE_BLIP(&uLocal_742);
			}
			if (Local_2762.f_1735[0 /*206*/].f_11 == func_340() + 1)
			{
				Local_2762.f_1735[0 /*206*/].f_11 = func_340() + 2;
			}
			func_338(Local_2762.f_1735[0 /*206*/].f_11);
			func_559(&Local_2762, PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())));
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())), 1);
			func_558(&Local_2762);
			func_555(&Local_2762);
			AUDIO::TRIGGER_MUSIC_EVENT("MGTR_ON_BIKE");
			iLocal_7233 = 4;
			break;
		
		case 4:
			if (func_365(&Local_2762, &(Local_2762.f_1735[0 /*206*/])) == 2)
			{
				iLocal_7233 = 8;
				AUDIO::TRIGGER_MUSIC_EVENT("MGTR_ON_FOOT");
				AUDIO::START_AUDIO_SCENE("TRI_RUN_SCENE");
				AUDIO::STOP_AUDIO_SCENE("TRI_BIKE_SCENE");
			}
			if (!func_364(&Local_2762, 0, 1))
			{
				iLocal_7233 = 5;
			}
			break;
		
		case 5:
			func_362(Local_2762.f_1735[0 /*206*/].f_11);
			func_551(&Local_2762);
			func_549("SPR_OBJ_BIKE1", 7500, 0, &uLocal_1383, 2);
			iLocal_7233 = 6;
			break;
		
		case 6:
			if (func_364(&Local_2762, 0, 0))
			{
				iLocal_7233 = 7;
			}
			break;
		
		case 7:
			if (GlobalFunc_663("SPR_OBJ_BIKE1", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_OBJ_BIKE1");
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_53))
			{
				HUD::REMOVE_BLIP(&uLocal_53);
			}
			func_338(Local_2762.f_1735[0 /*206*/].f_11);
			iLocal_7233 = 4;
			break;
		
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[0 /*206*/].f_9))
			{
				GlobalFunc_530(Local_2762.f_1735[0 /*206*/].f_9, 2.5f, 1, 1056964608, 0, 1);
				iLocal_7233 = 9;
			}
			break;
		
		case 9:
			if (func_448(&Local_2762, 0, 1))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_2762.f_1735[0 /*206*/].f_9) < 4f)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(Local_2762.f_1735[0 /*206*/].f_8, 0, 0);
					func_549("TRI_OBJ_RUN", 7500, 0, &uLocal_1383, 2);
					iLocal_7233 = 10;
				}
			}
			break;
		
		case 10:
			if (HUD::DOES_BLIP_EXIST(uLocal_53))
			{
				HUD::REMOVE_BLIP(&uLocal_53);
			}
			break;
	}
}



void func_549(char* sParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x55C35
{
	if (GlobalFunc_2987(*uParam3, iParam4))
	{
		return;
	}
	GlobalFunc_164(sParam0, iParam1, iParam2);
	GlobalFunc_812(uParam3, iParam4);
}


void func_551(var uParam0)//Position - 0x55C6D
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_53))
		{
			uLocal_53 = GlobalFunc_6783(uParam0->f_1735[0 /*206*/].f_9, 0, 0);
		}
	}
}




void func_555(var uParam0)//Position - 0x55D77
{
	int iVar0;
	int iVar1[7];
	int iVar9;
	
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = iVar0 + 1;
		iVar0++;
	}
	func_557(&iVar1);
	iVar9 = 0;
	while (iVar9 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar9 /*206*/].f_8))
		{
			if (iVar9 != 0)
			{
				uParam0->f_1735[iVar9 /*206*/].f_196 = iVar1[(iVar9 - 1)];
				func_556(uParam0, iVar9);
			}
			else
			{
				uParam0->f_1735[0 /*206*/].f_196 = -1;
			}
		}
		iVar9++;
	}
}

void func_556(var uParam0, int iParam1)//Position - 0x55DFE
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_9))
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uParam0->f_1735[iParam1 /*206*/].f_9, 100f);
	}
}

void func_557(int iParam0)//Position - 0x55E2D
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, *iParam0);
		uVar2 = (*iParam0)[iVar0];
		(*iParam0)[iVar0] = (*iParam0)[iVar1];
		(*iParam0)[iVar1] = uVar2;
		iVar0++;
	}
}

void func_558(var uParam0)//Position - 0x55E70
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!uParam0->f_1735[iVar0 /*206*/].f_9 == uParam0->f_1735[0 /*206*/].f_9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_9))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iVar0 /*206*/].f_9, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_9))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iVar0 /*206*/].f_9, 1);
		}
		iVar0++;
	}
}

void func_559(var uParam0, int iParam1)//Position - 0x55EEE
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_9))
			{
				if (iParam1 == uParam0->f_1735[iVar0 /*206*/].f_9)
				{
					uVar1 = uParam0->f_1735[iVar0 /*206*/].f_9;
					uParam0->f_1735[iVar0 /*206*/].f_9 = uParam0->f_1735[0 /*206*/].f_9;
					uParam0->f_1735[0 /*206*/].f_9 = uVar1;
					if (func_365(uParam0, &(uParam0->f_1735[iVar0 /*206*/])) == 1)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_1735[iVar0 /*206*/].f_8);
						func_491(uParam0, iVar0);
					}
					return;
				}
			}
		}
		iVar0++;
	}
}


void func_561(var uParam0)//Position - 0x55FAB
{
	if (!HUD::DOES_BLIP_EXIST(uLocal_742))
	{
		uLocal_742 = HUD::ADD_BLIP_FOR_COORD(func_562(uParam0));
		HUD::SET_BLIP_COLOUR(uLocal_742, 3);
		HUD::SET_BLIP_ALPHA(uLocal_742, 220);
		HUD::_SET_BLIP_SHRINK(uLocal_742, 1);
		HUD::SET_BLIP_PRIORITY(uLocal_742, 9);
		HUD::SET_BLIP_DISPLAY(uLocal_742, 4);
	}
}

Vector3 func_562(var uParam0)//Position - 0x55FF5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		if (uParam0->f_26[iVar0 /*14*/].f_11 == 6)
		{
			return uParam0->f_26[iVar0 /*14*/].f_3;
		}
		iVar0++;
	}
	return uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_3;
}

void func_563(var uParam0, float fParam1)//Position - 0x56043
{
	if (!iLocal_747)
	{
		if (func_448(uParam0, 0, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uParam0->f_1735[0 /*206*/].f_9, Local_744, 25f, 25f, 10f, 0, 1, 0))
			{
				if (PED::IS_PED_ON_ANY_BIKE(uParam0->f_1735[0 /*206*/].f_8))
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_1735[0 /*206*/].f_8, uParam1);
				}
				iLocal_747 = 1;
			}
		}
	}
}

void func_564(var uParam0)//Position - 0x560AA
{
	int iVar0;
	int iVar1;
	
	if (iLocal_743 < uParam0->f_12)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_12)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_9))
			{
				if (!func_565(uParam0->f_1735[iVar0 /*206*/].f_9) && !func_501(&(uParam0->f_1735[iVar0 /*206*/]), 8))
				{
					func_500(&(uParam0->f_1735[iVar0 /*206*/]), 8);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1735[iVar0 /*206*/].f_8, 36, 1);
					iLocal_743++;
					if (iVar0 != 0)
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iVar0 /*206*/].f_9, 0);
					}
				}
			}
			iVar0++;
		}
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (iVar1 != 0)
		{
			if (func_364(uParam0, iVar1, 1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_1735[iVar1 /*206*/].f_9, 0);
			}
		}
		iVar1++;
	}
}

int func_565(int iParam0)//Position - 0x56182
{
	int iVar0;
	int iVar1;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1)))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_566()//Position - 0x561BA
{
	func_567();
}

void func_567()//Position - 0x561C6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 100f;
	fVar1 = PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID());
	fVar2 = (1f - (fVar1 / fVar0));
	fVar2 = GlobalFunc_253(fVar2, 0f, 1f);
	Local_752 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Local_752.f_1) * fVar2));
}


void func_569(var uParam0)//Position - 0x5622C
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
	{
		iVar0 = uParam0->f_1735[0 /*206*/].f_11;
		switch (iLocal_751)
		{
			case 0:
				if (iVar0 == func_340() + 1)
				{
					iLocal_751 = 1;
				}
				break;
			
			case 1:
				func_570(1);
				iLocal_751 = 2;
				break;
			
			case 2:
				if (iVar0 == func_339() + 1)
				{
					iLocal_751 = 3;
				}
				break;
			
			case 3:
				func_570(1);
				iLocal_751 = 6;
				break;
			
			case 4:
				if (iVar0 == (uParam0->f_11 - 1))
				{
					iLocal_751 = 5;
				}
				break;
			
			case 5:
				func_570(1);
				iLocal_751 = 6;
				break;
			}
	}
}

void func_570(bool bParam0)//Position - 0x562D8
{
	if (bParam0)
	{
		if (Local_752 < (Local_752.f_1 / 2))
		{
			PLAYER::RESTORE_PLAYER_STAMINA(PLAYER::PLAYER_ID(), 0.33f);
		}
	}
	else
	{
		Local_752 = Local_752.f_1;
	}
}

void func_571(var uParam0, var uParam1)//Position - 0x5630D
{
	int iVar0;
	
	iVar0 = uParam0->f_1735[0 /*206*/].f_11;
	if (iVar0 == func_340() && !GlobalFunc_747(*uParam1, 1))
	{
		GlobalFunc_6594(uParam1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("MGTR_LAST_SWIM");
	}
	else if (iVar0 == func_339() && !GlobalFunc_747(*uParam1, 2))
	{
		GlobalFunc_6594(uParam1, 2);
		AUDIO::TRIGGER_MUSIC_EVENT("MGTR_LAST_CYCLE");
	}
	else if (iVar0 == (uParam0->f_11 - 2) && !GlobalFunc_747(*uParam1, 8))
	{
		GlobalFunc_6594(uParam1, 8);
		AUDIO::TRIGGER_MUSIC_EVENT("MGTR_LAST_FOOT");
		AUDIO::PREPARE_MUSIC_EVENT("MGTR_COMPLETE");
	}
}

void func_572()//Position - 0x563B0
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = false;
	bVar1 = false;
	if (PED::IS_PED_INJURED(iLocal_7232))
	{
		bVar0 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7231))
	{
		bVar0 = true;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_7231, 0))
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_7231))
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_7231))
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_7231) <= 500f)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_7231);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_7232);
		if (bVar1)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_7231);
			PED::DELETE_PED(&iLocal_7232);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_796))
		{
			CAM::DESTROY_CAM(uLocal_796, 0);
		}
		if (!func_278(134217728))
		{
			func_291(134217728);
			Local_2762.f_9 = MISC::GET_GAME_TIMER() + 2700;
			func_439(1);
		}
		func_575(iLocal_736, 0);
		func_573(&iLocal_7231);
	}
}

void func_573(int iParam0)//Position - 0x5648C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	char* sVar12;
	
	Var0 = { -20f, -15f, 20f };
	Var3 = { 0f, 0f, -2f };
	Var9 = { 0f, 0f, 0f };
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Var0) };
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_796))
	{
		uLocal_796 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var6, Var9, 30f, 0, 2);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_796, *iParam0, Var3, 0);
		CAM::POINT_CAM_AT_ENTITY(uLocal_796, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 1);
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_TEXT");
	GlobalFunc_726(sLocal_806);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	sVar12 = GlobalFunc_1078(iLocal_736 == 1, "TRI_BASIC_1", GlobalFunc_1078(iLocal_736 == 0, "TRI_BASIC_2", "TRI_BASIC_3"));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_726(sVar12);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GlobalFunc_726(sLocal_808);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GlobalFunc_726(sLocal_809);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GlobalFunc_726(sLocal_810);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GlobalFunc_726(sLocal_811);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
	GlobalFunc_726(sLocal_812);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GlobalFunc_726(sLocal_813);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "SET_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
	GlobalFunc_726(sLocal_807);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_805, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(MISC::GET_RANDOM_INT_IN_RANGE(0, 7));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_575(int iParam0, bool bParam1)//Position - 0x566BD
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (bParam1)
	{
		if (iParam0 == 1)
		{
			Var0 = { 2382.777f, 4323.49f, 56.0818f };
		}
		else if (iParam0 == 0)
		{
			Var0 = { -1250.543f, -1844.489f, 0.8696f };
		}
		else if (iParam0 == 2)
		{
			Var0 = { 1593.904f, 3854.204f, 30.3967f };
		}
	}
	else
	{
		Var0 = { Var3 };
		Var0.f_2 = (Var0.f_2 + 100f);
	}
	iLocal_7231 = VEHICLE::CREATE_VEHICLE(joaat("frogger"), Var0, 0, 1, 1);
	iLocal_7232 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_7231, 26, joaat("a_m_y_roadcyc_01"), -1, 1, 1);
	func_576(&iLocal_7232, &iLocal_7231);
}

void func_576(var uParam0, int iParam1)//Position - 0x56772
{
	if ((!PED::IS_PED_INJURED(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam1)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_VEHICLE_HELI_PROTECT(*uParam0, *iParam1, PLAYER::PLAYER_PED_ID(), 30f, 32, 25f, 35, 0);
	}
}

void func_577(var uParam0)//Position - 0x567BD
{
	AUDIO::STOP_SOUND(uParam0->f_14);
	AUDIO::STOP_SOUND(uParam0->f_15);
}

void func_578(struct<3> Param0)//Position - 0x567D5
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_7231))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_7231, Param0, 1, 0, 0, 1);
	}
	func_576(&iLocal_7232, &iLocal_7231);
}

void func_579(bool bParam0)//Position - 0x56801
{
	func_588(Local_2762.f_26[0 /*14*/].f_3);
	func_587();
	func_586();
	func_585();
	func_931();
	func_584();
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(0);
	GlobalFunc_5095(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT), -1);
	if (!bParam0)
	{
		func_580();
	}
	if (bParam0)
	{
		CAM::RENDER_SCRIPT_CAMS(0, false, 3000, 1, 0, 0);
	}
	func_363(32);
	func_363(131072);
	func_363(262144);
	func_363(524288);
	func_363(1048576);
	func_363(2097152);
	func_363(4194304);
	func_363(8388608);
	GlobalFunc_702(0, 1, 1);
}

void func_580()//Position - 0x568A2
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2762.f_4385))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2762.f_4385, 1);
		ENTITY::SET_ENTITY_COLLISION(Local_2762.f_4385, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2762.f_4386))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2762.f_4386, 1);
		ENTITY::SET_ENTITY_COLLISION(Local_2762.f_4386, 1, 0);
	}
}




void func_584()//Position - 0x57438
{
	GlobalFunc_235(&uLocal_989);
	GlobalFunc_235(&uLocal_765);
	GlobalFunc_235(&uLocal_768);
	GlobalFunc_235(&uLocal_771);
	GlobalFunc_235(&uLocal_992);
	GlobalFunc_235(&uLocal_995);
	GlobalFunc_235(&uLocal_998);
	GlobalFunc_235(&uLocal_1001);
	GlobalFunc_235(&uLocal_1004);
}

void func_585()//Position - 0x5747F
{
	if (HUD::DOES_BLIP_EXIST(uLocal_741))
	{
		HUD::REMOVE_BLIP(&uLocal_741);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_53))
	{
		HUD::REMOVE_BLIP(&uLocal_53);
	}
}

void func_586()//Position - 0x574A7
{
	int iVar0;
	
	iLocal_1013 = 0;
	iVar0 = 0;
	while (iVar0 < Local_2762.f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2762.f_1735[iVar0 /*206*/].f_8))
		{
			TASK::CLEAR_PED_TASKS(Local_2762.f_1735[iVar0 /*206*/].f_8);
		}
		iVar0++;
	}
}

void func_587()//Position - 0x574ED
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1098)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1098[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1098[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1200[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1200[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1221[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1221[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1242[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1242[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1263[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1263[iVar0]));
		}
		iVar0++;
	}
}

void func_588(struct<3> Param0)//Position - 0x57599
{
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
	MISC::CLEAR_AREA(Param0, 100f, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_PEDS(Param0, 100f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Param0, 100f, 0, 0, 1, 1, 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 100f, 0);
	FIRE::STOP_FIRE_IN_RANGE(Param0, 100f);
}

int func_589(var uParam0)//Position - 0x575F2
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	
	switch (uParam0->f_25)
	{
		case 0:
			GlobalFunc_5312(&uLocal_1382, 4);
			GlobalFunc_5312(&uLocal_1382, 128);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_929(uParam0);
			GlobalFunc_235(&(uParam0->f_18));
			iLocal_1394 = 0;
			if (!GlobalFunc_1088(&uLocal_1389))
			{
				GlobalFunc_1092(&uLocal_1389);
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (GlobalFunc_1088(&uLocal_1389) && !func_923(&(uParam0->f_18)))
				{
					if (Local_54 == 2)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MGTR_MUSIC_START");
						AUDIO::START_AUDIO_SCENE("TRI_SWIM_SCENE");
						AUDIO::STOP_AUDIO_SCENE("TRI_START_SCENE");
					}
					uParam0->f_13 = MISC::GET_GAME_TIMER() + 2000;
					if (GlobalFunc_747(uLocal_1382, 16))
					{
						GlobalFunc_5312(&uLocal_1382, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
					HUD::DISPLAY_HUD(1);
					func_921(uParam0);
					func_913(1, 1, 1);
					uParam0->f_25 = 7;
				}
			}
			break;
		
		case 2:
			func_910(uParam0);
			func_952(0, 0, 1);
			HUD::DISPLAY_HUD(0);
			if (!GlobalFunc_747(uLocal_1382, 1))
			{
				HUD::CLEAR_HELP(1);
				SYSTEM::SETTIMERA(0);
				uParam0->f_4371 = GlobalFunc_2407();
				func_869(uParam0);
				GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_54.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				GlobalFunc_5275(&(Local_54.f_290), 1);
				GlobalFunc_5850(&(Local_54.f_290), 1);
				GlobalFunc_6594(&uLocal_1382, 1);
			}
			if (!func_864(Local_2592.f_8))
			{
				func_863();
				func_860();
				func_291(64);
				GlobalFunc_9029(1);
				SYSTEM::SETTIMERA(0);
				func_857();
				func_856(0);
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
				GlobalFunc_778(1);
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					func_851(Local_54.f_58);
					iLocal_2603 = 1;
				}
				uParam0->f_25 = 3;
				func_847(uParam0, 0);
				GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_54.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				if (!PLAYER::IS_PLAYER_ONLINE())
				{
					GlobalFunc_813(&(Local_54.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
					iLocal_2760 = 1;
				}
				GlobalFunc_5275(&(Local_54.f_290), 1);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
			{
				if (GlobalFunc_1535(uParam0->f_1735[0 /*206*/].f_8) == joaat("weapon_unarmed"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				}
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
			}
			iVar0 = func_741(uParam0, Local_54.f_58);
			if (iVar0 == 1)
			{
				GlobalFunc_2252(&Local_1891);
				if (!Global_1835013.f_2)
				{
					if (!bLocal_0)
					{
						func_734(Local_54.f_58, uParam0->f_1735[0 /*206*/].f_13, GlobalFunc_254((4 - uParam0->f_1735[0 /*206*/].f_12), 0, 3));
					}
				}
				GlobalFunc_235(&uLocal_2617);
				GlobalFunc_5770();
				func_300();
				GlobalFunc_778(0);
				HUD::CLEAR_HELP(1);
				if (GlobalFunc_747(uLocal_1382, 1))
				{
					GlobalFunc_5312(&uLocal_1382, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (iLocal_736 == 0)
				{
					if (STREAMING::IS_IPL_ACTIVE("VB_08_TriAf01"))
					{
						STREAMING::REMOVE_IPL("VB_08_TriAf01");
					}
				}
				else if (iLocal_736 == 1)
				{
					if (STREAMING::IS_IPL_ACTIVE("CS4_08_TriAf02"))
					{
						STREAMING::REMOVE_IPL("CS4_08_TriAf02");
					}
				}
				else if (iLocal_736 == 2)
				{
					if (STREAMING::IS_IPL_ACTIVE("CH1_07_TriAf03"))
					{
						STREAMING::REMOVE_IPL("CH1_07_TriAf03");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_1285[1]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_1285[1]));
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_730(&iLocal_736);
				uParam0->f_25 = 4;
			}
			else if (iVar0 == 2)
			{
				if (!Global_1835013.f_2)
				{
					if (!bLocal_0)
					{
						func_734(Local_54.f_58, uParam0->f_1735[0 /*206*/].f_13, GlobalFunc_254((4 - uParam0->f_1735[0 /*206*/].f_12), 0, 3));
					}
				}
				GlobalFunc_235(&uLocal_2617);
				GlobalFunc_5770();
				func_300();
				iLocal_2761 = 0;
				iLocal_2760 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_291(512);
				func_363(1024);
				uParam0->f_1735[0 /*206*/].f_24 = 5;
				GlobalFunc_6531(&uLocal_1359, 0, 0);
				func_729();
				uParam0->f_25 = 7;
				uParam0->f_1735[0 /*206*/].f_11 = 0;
			}
			break;
		
		case 4:
			if (func_708())
			{
				uParam0->f_25 = 5;
			}
			break;
		
		case 5:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			if (Local_54 == 2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
				{
					if (GlobalFunc_1535(uParam0->f_1735[0 /*206*/].f_8) == joaat("weapon_unarmed"))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					}
				}
			}
			if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_2544))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
				if (!Local_54.f_287)
				{
					func_271(PLAYER::PLAYER_PED_ID());
					func_102(PLAYER::PLAYER_PED_ID(), &(Local_54.f_222), 0);
					Local_54.f_287 = 1;
				}
				if (uParam0->f_1735[0 /*206*/].f_12 <= 3)
				{
					switch (iLocal_736)
					{
						case 0:
							GlobalFunc_7610(141, 0, 0);
							break;
						
						case 1:
							GlobalFunc_7610(142, 0, 0);
							break;
						
						case 2:
							GlobalFunc_7610(143, 0, 0);
							break;
					}
					GlobalFunc_6594(&(Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRIATHLON_iBitFlags), 1);
				}
				GlobalFunc_812(&Global_96007, 262144);
				GlobalFunc_842(1, 0);
				GlobalFunc_4907();
				GlobalFunc_6877(&uLocal_2608);
				uParam0->f_25 = 6;
			}
			break;
		
		case 6:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			if (GlobalFunc_7084(&uLocal_2608, 1f))
			{
				if (Local_54.f_58 == 1)
				{
					Var1 = { 1742.2f, 3910.3f, 33.85f };
					fVar4 = 10.25f;
				}
				else if (Local_54.f_58 == 0)
				{
					Var1 = { -1339.908f, -1015.899f, 6.929f };
					fVar4 = 28.6984f;
				}
				else if (Local_54.f_58 == 2)
				{
					Var1 = { -2280.555f, 411.8955f, 173.6018f };
					fVar4 = 353.5356f;
				}
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, Var1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_1735[0 /*206*/].f_8, fVar4);
				}
				if (func_278(64))
				{
					if (Local_54.f_58 == 1)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1", 0);
					}
					else if (Local_54.f_58 == 0)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2", 0);
					}
					else if (Local_54.f_58 == 2)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3", 0);
					}
					MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 0);
				}
				func_702(&Local_2592, uParam0, Var1, fVar4);
				GlobalFunc_6877(&(uParam0->f_21));
				func_694(uParam0);
				func_363(512);
				func_913(1, 1, 1);
				uParam0->f_25 = 8;
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() > uParam0->f_13)
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1389);
			}
			else
			{
				if (MISC::GET_GAME_TIMER() > (uParam0->f_13 - 1900))
				{
					if (!iLocal_2759)
					{
						func_691(14);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						iLocal_2759 = 1;
						iLocal_734 = 1;
					}
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_1389, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			}
			if (!GlobalFunc_747(uLocal_1382, 16))
			{
				func_341(uParam0, 0, 1);
				func_341(uParam0, 1, 0);
				GlobalFunc_6594(&uLocal_1382, 16);
				func_856(1);
				HUD::SET_BLIP_COLOUR(uParam0->f_26[0 /*14*/].f_9, 5);
			}
			if (!func_629(uParam0))
			{
				func_619(uParam0);
				GlobalFunc_235(&(uParam0->f_18));
				uParam0->f_25 = 2;
				while (!func_618(&Local_2592))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_6877(&(uParam0->f_21));
				func_613(&Local_2592, uParam0, &iLocal_736, uParam0->f_1735[0 /*206*/].f_12 <= 3);
			}
			func_590(uParam0);
			break;
		
		case 8:
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2592.f_9) && GlobalFunc_226(&(uParam0->f_21)))
			{
				fVar5 = GlobalFunc_5182(&(uParam0->f_21));
				iVar6 = GlobalFunc_8315();
				if (iVar6 == 0)
				{
					bVar7 = fVar5 > 3.6f;
				}
				else if (iVar6 == 1)
				{
					bVar7 = fVar5 > 4.05f;
				}
				else if (iVar6 == 2)
				{
					bVar7 = fVar5 > 3.51f;
				}
				if (bVar7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2592.f_9))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2592.f_9, -1000f, 1);
						PHYSICS::ACTIVATE_PHYSICS(Local_2592.f_9);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2592.f_9));
					}
					GlobalFunc_235(&(uParam0->f_21));
				}
				if (iLocal_736 == 0)
				{
					Var8 = { -1332.922f, -1043.142f, 6.65f };
				}
				else if (iLocal_736 == 1)
				{
					Var8 = { 1759.435f, 3894.694f, 33.789f };
				}
				else
				{
					Var8 = { -2304.443f, 462.6692f, 173.4493f };
				}
				PATHFIND::DISABLE_NAVMESH_IN_AREA((Var8.x - 3f), (Var8.f_1 - 3f), (Var8.f_2 - 3f), (Var8.x + 3f), (Var8.f_1 + 3f), (Var8.f_2 + 3f), 0);
				return 1;
			}
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				return 0;
			}
			else if (!GlobalFunc_226(&uLocal_2614))
			{
				GlobalFunc_8641(&uLocal_2614);
			}
			else if (GlobalFunc_5182(&uLocal_2614) > 5f)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_590(var uParam0)//Position - 0x57F0C
{
	int iVar0;
	
	if (Local_54.f_289)
	{
		return;
	}
	if (!GlobalFunc_747(Local_54.f_420.f_77, 2))
	{
		GlobalFunc_173(&(Local_54.f_420.f_78), 8, 0, "TRINEWS", 0, 1);
		GlobalFunc_812(&(Local_54.f_420.f_77), 2);
	}
	if (func_278(32))
	{
		if (!GlobalFunc_747(Local_54.f_420.f_77, 1))
		{
			switch (func_365(uParam0, &(uParam0->f_1735[0 /*206*/])))
			{
				case 0:
					iVar0 = func_609(uParam0);
					if (iVar0 != -1)
					{
						if (Local_54.f_420.f_1[iVar0 /*4*/] == Local_54.f_420)
						{
							Local_54.f_420 = -1;
							if (!func_608())
							{
								GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_SWIM", 8, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
							}
						}
						else if (GlobalFunc_747(Local_54.f_420.f_1[iVar0 /*4*/].f_1, 1))
						{
							if (func_597(Local_54.f_420.f_1[iVar0 /*4*/], uParam0))
							{
								func_596(Local_54.f_420.f_1[iVar0 /*4*/]);
								Local_54.f_420 = Local_54.f_420.f_1[iVar0 /*4*/];
								Local_54.f_420.f_1[iVar0 /*4*/] = -1;
							}
							else
							{
								Local_54.f_420 = -1;
								if (!func_608())
								{
									GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_SWIM", 8, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
								}
							}
						}
						else
						{
							func_596(Local_54.f_420.f_1[iVar0 /*4*/]);
							Local_54.f_420 = Local_54.f_420.f_1[iVar0 /*4*/];
							Local_54.f_420.f_1[iVar0 /*4*/] = -1;
						}
					}
					else
					{
						Local_54.f_420 = -1;
						if (!func_608())
						{
							GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_SWIM", 8, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
						}
					}
					GlobalFunc_812(&(Local_54.f_420.f_77), 1);
					break;
				
				case 1:
					iVar0 = func_609(uParam0);
					if (iVar0 != -1)
					{
						if (Local_54.f_420.f_1[iVar0 /*4*/] == Local_54.f_420)
						{
							Local_54.f_420 = -1;
							if (!func_608())
							{
								GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_BIKE", 8, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
							}
						}
						else if (GlobalFunc_747(Local_54.f_420.f_1[iVar0 /*4*/].f_1, 1))
						{
							if (func_597(Local_54.f_420.f_1[iVar0 /*4*/], uParam0))
							{
								func_596(Local_54.f_420.f_1[iVar0 /*4*/]);
								Local_54.f_420 = Local_54.f_420.f_1[iVar0 /*4*/];
								Local_54.f_420.f_1[iVar0 /*4*/] = -1;
							}
							else
							{
								Local_54.f_420 = -1;
								if (!func_608())
								{
									GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_BIKE", 8, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
								}
							}
						}
						else
						{
							func_596(Local_54.f_420.f_1[iVar0 /*4*/]);
							Local_54.f_420 = Local_54.f_420.f_1[iVar0 /*4*/];
							Local_54.f_420.f_1[iVar0 /*4*/] = -1;
						}
					}
					else
					{
						Local_54.f_420 = -1;
						if (!func_608())
						{
							GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_BIKE", 8, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
						}
					}
					GlobalFunc_812(&(Local_54.f_420.f_77), 1);
					break;
				
				case 2:
					iVar0 = func_609(uParam0);
					if (iVar0 != -1)
					{
						if (Local_54.f_420.f_1[iVar0 /*4*/] == Local_54.f_420)
						{
							Local_54.f_420 = -1;
							if (!func_608())
							{
								GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_RUN", 8, 0, 0, 0);
							}
							else
							{
								GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
							}
						}
						else if (GlobalFunc_747(Local_54.f_420.f_1[iVar0 /*4*/].f_1, 1))
						{
							if (func_597(Local_54.f_420.f_1[iVar0 /*4*/], uParam0))
							{
								func_596(Local_54.f_420.f_1[iVar0 /*4*/]);
								Local_54.f_420 = Local_54.f_420.f_1[iVar0 /*4*/];
								Local_54.f_420.f_1[iVar0 /*4*/] = -1;
							}
							else
							{
								Local_54.f_420 = -1;
								if (!func_608())
								{
									GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_RUN", 8, 0, 0, 0);
								}
								else
								{
									GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
								}
							}
						}
						else
						{
							func_596(Local_54.f_420.f_1[iVar0 /*4*/]);
							Local_54.f_420 = Local_54.f_420.f_1[iVar0 /*4*/];
							Local_54.f_420.f_1[iVar0 /*4*/] = -1;
						}
					}
					else
					{
						Local_54.f_420 = -1;
						if (!func_608())
						{
							GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_RUN", 8, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_IRON", 8, 0, 0, 0);
						}
					}
					GlobalFunc_812(&(Local_54.f_420.f_77), 1);
					break;
			}
		}
		else if (!GlobalFunc_226(&(Local_54.f_420.f_68)))
		{
			GlobalFunc_7777(&(Local_54.f_420.f_68));
		}
		else if (GlobalFunc_5182(&(Local_54.f_420.f_68)) >= 15f)
		{
			GlobalFunc_811(&(Local_54.f_420.f_77), 1);
			GlobalFunc_235(&(Local_54.f_420.f_68));
		}
	}
	else if (GlobalFunc_747(Local_54.f_420.f_77, 1))
	{
		if (!GlobalFunc_226(&(Local_54.f_420.f_68)))
		{
			GlobalFunc_7777(&(Local_54.f_420.f_68));
		}
		else if (GlobalFunc_5182(&(Local_54.f_420.f_68)) >= 10f)
		{
			GlobalFunc_811(&(Local_54.f_420.f_77), 1);
			GlobalFunc_235(&(Local_54.f_420.f_68));
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		}
	}
	func_594();
	func_593(uParam0);
	func_592();
	func_591(uParam0);
}

void func_591(var uParam0)//Position - 0x58505
{
	int iVar0;
	bool bVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_9, 0))
		{
			bVar1 = false;
			iVar0 = 0;
			while (iVar0 < uParam0->f_12)
			{
				if (iVar0 != 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_9))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_1735[iVar0 /*206*/].f_9, uParam0->f_1735[0 /*206*/].f_9))
						{
							func_691(3);
							iVar0 = uParam0->f_12;
							bVar1 = true;
						}
					}
				}
				iVar0++;
			}
			if (!bVar1)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_1735[0 /*206*/].f_9))
				{
					func_691(4);
				}
			}
		}
	}
}

void func_592()//Position - 0x585C2
{
	if (Local_752 <= 5)
	{
		if (!GlobalFunc_747(Local_54.f_420.f_77, 4))
		{
			GlobalFunc_812(&(Local_54.f_420.f_77), 4);
			func_691(5);
		}
	}
	else if (GlobalFunc_747(Local_54.f_420.f_77, 4))
	{
		GlobalFunc_811(&(Local_54.f_420.f_77), 4);
	}
}

void func_593(var uParam0)//Position - 0x58611
{
	if (!GlobalFunc_226(&(Local_54.f_420.f_65)))
	{
		GlobalFunc_7777(&(Local_54.f_420.f_65));
	}
	if (GlobalFunc_5182(&(Local_54.f_420.f_65)) >= 2f)
	{
		Local_54.f_420.f_63 = Local_54.f_420.f_62;
		Local_54.f_420.f_62 = uParam0->f_1735[0 /*206*/].f_12;
		if (GlobalFunc_747(Local_54.f_420.f_77, 8))
		{
			if (GlobalFunc_5182(&(Local_54.f_420.f_74)) <= 60f)
			{
				if ((Local_54.f_420.f_64 - Local_54.f_420.f_62) >= 3)
				{
					func_691(7);
					GlobalFunc_235(&(Local_54.f_420.f_74));
					GlobalFunc_811(&(Local_54.f_420.f_77), 8);
				}
			}
			else
			{
				GlobalFunc_235(&(Local_54.f_420.f_74));
				GlobalFunc_811(&(Local_54.f_420.f_77), 8);
			}
		}
		else if (GlobalFunc_747(Local_54.f_420.f_77, 16))
		{
			if (GlobalFunc_5182(&(Local_54.f_420.f_74)) <= 60f)
			{
				if ((Local_54.f_420.f_62 - Local_54.f_420.f_64) >= 3)
				{
					func_691(6);
					GlobalFunc_235(&(Local_54.f_420.f_74));
					GlobalFunc_811(&(Local_54.f_420.f_77), 16);
				}
			}
			else
			{
				GlobalFunc_235(&(Local_54.f_420.f_74));
				GlobalFunc_811(&(Local_54.f_420.f_77), 16);
			}
		}
		if (Local_54.f_420.f_62 < Local_54.f_420.f_63)
		{
			if (!GlobalFunc_747(Local_54.f_420.f_77, 8))
			{
				GlobalFunc_6877(&(Local_54.f_420.f_74));
				GlobalFunc_812(&(Local_54.f_420.f_77), 8);
				GlobalFunc_811(&(Local_54.f_420.f_77), 16);
				Local_54.f_420.f_64 = Local_54.f_420.f_63;
			}
		}
		else if (Local_54.f_420.f_62 > Local_54.f_420.f_63)
		{
			if (!GlobalFunc_747(Local_54.f_420.f_77, 16))
			{
				GlobalFunc_6877(&(Local_54.f_420.f_74));
				GlobalFunc_812(&(Local_54.f_420.f_77), 16);
				GlobalFunc_811(&(Local_54.f_420.f_77), 8);
				Local_54.f_420.f_64 = Local_54.f_420.f_63;
			}
		}
		if (uParam0->f_1735[0 /*206*/].f_12 == 2 && Local_54.f_420.f_63 != 2)
		{
			func_691(13);
			if (GlobalFunc_226(&(Local_54.f_420.f_71)))
			{
				GlobalFunc_235(&(Local_54.f_420.f_71));
			}
		}
		else if (uParam0->f_1735[0 /*206*/].f_12 == 1)
		{
			if (Local_54.f_420.f_63 != 1)
			{
				func_691(9);
				if (GlobalFunc_226(&(Local_54.f_420.f_71)))
				{
					GlobalFunc_235(&(Local_54.f_420.f_71));
				}
			}
			else if (!GlobalFunc_226(&(Local_54.f_420.f_71)))
			{
				GlobalFunc_7777(&(Local_54.f_420.f_71));
			}
			else if (GlobalFunc_5182(&(Local_54.f_420.f_71)) > 60f)
			{
				GlobalFunc_235(&(Local_54.f_420.f_71));
				func_691(10);
			}
		}
		else if (uParam0->f_1735[0 /*206*/].f_12 == uParam0->f_12)
		{
			if (Local_54.f_420.f_63 != uParam0->f_12)
			{
				func_691(11);
				if (GlobalFunc_226(&(Local_54.f_420.f_71)))
				{
					GlobalFunc_235(&(Local_54.f_420.f_71));
				}
			}
			else if (!GlobalFunc_226(&(Local_54.f_420.f_71)))
			{
				GlobalFunc_7777(&(Local_54.f_420.f_71));
			}
			else if (GlobalFunc_5182(&(Local_54.f_420.f_71)) > 60f)
			{
				GlobalFunc_235(&(Local_54.f_420.f_71));
				func_691(12);
			}
		}
		GlobalFunc_6877(&(Local_54.f_420.f_65));
	}
}

void func_594()//Position - 0x58944
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if ((MISC::GET_GAME_TIMER() - Local_54.f_420.f_1[iVar0 /*4*/].f_2) >= 20000)
		{
			Local_54.f_420.f_1[iVar0 /*4*/] = -1;
		}
		iVar0++;
	}
}


void func_596(int iParam0)//Position - 0x58998
{
	switch (iParam0)
	{
		case 9:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_FIRSTM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_FIRSTF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_FIRSTT", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 10:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_FIRST2M", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_FIRST2F", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_FIRST2T", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 13:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_SECM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_SECF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_SECT", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 11:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_LASTM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_LASTF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_LASTT", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 12:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_LAST2M", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_LAST2F", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_LAST2T", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 14:
			GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_START", 8, 0, 0, 0);
			break;
		
		case 0:
			GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_NPCSW", 8, 0, 0, 0);
			break;
		
		case 1:
			GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_NPCBI", 8, 0, 0, 0);
			break;
		
		case 2:
			GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_NPCTR", 8, 0, 0, 0);
			break;
		
		case 5:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_STAMM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_STAMF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_STAMT", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 7:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_GAINM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_GAINF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_GAINT", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 6:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_BACKM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_BACKF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_BACKT", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 8:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_MISSM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_MISSF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_MISST", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 4:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_CRASH2M", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_CRASH2F", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_CRASH2T", 8, 0, 0, 0);
					break;
			}
			break;
		
		case 3:
			switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
			{
				case 0:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_CRASHM", 8, 0, 0, 0);
					break;
				
				case 1:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_CRASHF", 8, 0, 0, 0);
					break;
				
				case 2:
					GlobalFunc_10607(&(Local_54.f_420.f_78), "MGTRAUD", "MGTR_CRASHT", 8, 0, 0, 0);
					break;
			}
			break;
	}
}

int func_597(int iParam0, var uParam1)//Position - 0x58FCD
{
	switch (iParam0)
	{
		case 9:
		case 10:
			if (uParam1->f_1735[0 /*206*/].f_12 == 1)
			{
				return 1;
			}
			break;
		
		case 13:
			if (uParam1->f_1735[0 /*206*/].f_12 == 2)
			{
				return 1;
			}
			break;
		
		case 6:
			if (uParam1->f_1735[0 /*206*/].f_11 > 1)
			{
				return 1;
			}
			break;
		
		case 11:
		case 12:
			if (uParam1->f_1735[0 /*206*/].f_12 == uParam1->f_12)
			{
				return 1;
			}
			break;
	}
	return 0;
}











int func_608()//Position - 0x596B3
{
	int iVar0;
	
	if (Local_54.f_58 == 2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
		if ((iVar0 % 100) > 30)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_609(var uParam0)//Position - 0x596E7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 12;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_54.f_420.f_1[iVar0 /*4*/] != -1)
		{
			if (Local_54.f_420.f_1[iVar0 /*4*/].f_3 < iVar2 && Local_54.f_420 != Local_54.f_420.f_1[iVar0 /*4*/])
			{
				if (GlobalFunc_747(Local_54.f_420.f_1[iVar0 /*4*/].f_1, 1))
				{
					if (func_597(Local_54.f_420.f_1[iVar0 /*4*/], uParam0))
					{
						if (Local_54.f_420.f_1[iVar0 /*4*/].f_3 == 0)
						{
							return iVar0;
						}
						else
						{
							iVar2 = Local_54.f_420.f_1[iVar0 /*4*/].f_3;
							iVar1 = iVar0;
						}
					}
				}
				else if (Local_54.f_420.f_1[iVar0 /*4*/].f_3 == 0)
				{
					return iVar0;
				}
				else
				{
					iVar2 = Local_54.f_420.f_1[iVar0 /*4*/].f_3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}




void func_613(char* sParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x59882
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	char* sVar5;
	char cVar6[32];
	int iVar14;
	int iVar15;
	int iVar16;
	char* sVar17;
	char* sVar18;
	char* sVar19;
	char* sVar20;
	
	if (*iParam2 == 0)
	{
		fVar0 = 201.6718f;
		Var1 = { -1332.922f, -1043.142f, 6.65f };
	}
	else if (*iParam2 == 1)
	{
		fVar0 = 25.4602f;
		Var1 = { 1759.435f, 3894.694f, 33.789f };
	}
	else
	{
		fVar0 = 167.8617f;
		Var1 = { -2304.443f, 462.6692f, 173.4493f };
	}
	iVar4 = GlobalFunc_8315();
	if (iVar4 == 0)
	{
		sVar5 = "michael";
		fVar0 = (fVar0 - 180f);
	}
	else if (iVar4 == 1)
	{
		sVar5 = "franklin";
		fVar0 = (fVar0 - 180f);
	}
	else if (iVar4 == 2)
	{
		sVar5 = "trevor";
		fVar0 = (fVar0 - 180f);
	}
	sParam0->f_8 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, 0f, 0f, fVar0, 2);
	StringCopy(&cVar6, GlobalFunc_1078(bParam3, "win", "lose"), 32);
	StringConCat(&cVar6, "_race_", 32);
	StringConCat(&cVar6, sVar5, 32);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam1->f_1735[0 /*206*/].f_8);
	PED::CLEAR_PED_PROP(uParam1->f_1735[0 /*206*/].f_8, 1);
	PED::CLEAR_PED_PROP(uParam1->f_1735[0 /*206*/].f_8, 0);
	MISC::CLEAR_AREA_OF_PEDS(Var1, 3f, 0);
	PATHFIND::DISABLE_NAVMESH_IN_AREA((Var1.x - 3f), (Var1.f_1 - 3f), (Var1.f_2 - 3f), (Var1.x + 3f), (Var1.f_1 + 3f), (Var1.f_2 + 3f), 1);
	TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_1735[0 /*206*/].f_8, sParam0->f_8, sParam0, &cVar6, 1000f, -1000f, 0, 0, 1148846080, 0);
	StringConCat(&cVar6, "_cam", 32);
	if (CAM::DOES_CAM_EXIST(uLocal_2545))
	{
		CAM::DESTROY_CAM(uLocal_2545, 0);
	}
	uLocal_2545 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(uLocal_2545, 1);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2545, sParam0->f_8, &cVar6, sParam0);
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
	func_617(uParam1, iParam2);
	iVar14 = func_616(uParam1);
	iVar16 = 1;
	if (iVar14 >= 4)
	{
		iVar15 = 0;
		while (iVar15 < uParam1->f_1735)
		{
			if (uParam1->f_1735[iVar15 /*206*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1735[iVar15 /*206*/].f_8))
				{
					if (func_505(uParam1, &(uParam1->f_1735[iVar15 /*206*/])))
					{
						ENTITY::SET_ENTITY_COORDS(uParam1->f_1735[iVar15 /*206*/].f_8, func_615(*iParam2, iVar16), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam1->f_1735[iVar15 /*206*/].f_8, func_614(*iParam2, iVar16));
						if (uParam1->f_1735[iVar15 /*206*/].f_12 == 1)
						{
							sVar17 = func_503(iLocal_1091[0]);
							TASK::TASK_PLAY_ANIM(uParam1->f_1735[iVar15 /*206*/].f_8, iLocal_1091[0], sVar17, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0, 0, 0);
						}
						else
						{
							sVar18 = func_503(iLocal_1091[1]);
							TASK::TASK_PLAY_ANIM(uParam1->f_1735[iVar15 /*206*/].f_8, iLocal_1091[1], sVar18, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0, 0, 0);
						}
						iVar16++;
					}
				}
				if (iVar16 > 2)
				{
					iVar15 = uParam1->f_12;
				}
			}
			iVar15++;
		}
	}
	else
	{
		iVar15 = 0;
		while (iVar15 < uParam1->f_1735)
		{
			if (uParam1->f_1735[iVar15 /*206*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_1735[iVar15 /*206*/].f_8))
				{
					if (func_505(uParam1, &(uParam1->f_1735[iVar15 /*206*/])))
					{
						ENTITY::SET_ENTITY_COORDS(uParam1->f_1735[iVar15 /*206*/].f_8, func_615(*iParam2, iVar16), 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(uParam1->f_1735[iVar15 /*206*/].f_8, func_614(*iParam2, iVar16));
						if (uParam1->f_1735[iVar15 /*206*/].f_12 == 1)
						{
							sVar19 = func_503(iLocal_1091[0]);
							TASK::TASK_PLAY_ANIM(uParam1->f_1735[iVar15 /*206*/].f_8, iLocal_1091[0], sVar19, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0, 0, 0);
						}
						else
						{
							sVar20 = func_503(iLocal_1091[1]);
							TASK::TASK_PLAY_ANIM(uParam1->f_1735[iVar15 /*206*/].f_8, iLocal_1091[1], sVar20, 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0, 0, 0);
						}
						iVar15 = uParam1->f_12;
					}
				}
			}
			iVar15++;
		}
	}
}

float func_614(int iParam0, int iParam1)//Position - 0x59C84
{
	float fVar0;
	
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					fVar0 = 214.1666f;
					break;
				
				case 2:
					fVar0 = 136.9917f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					fVar0 = 20.6779f;
					break;
				
				case 2:
					fVar0 = 335.965f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					fVar0 = 192.4683f;
					break;
				
				case 2:
					fVar0 = 190.438f;
					break;
			}
			break;
	}
	return fVar0;
}

Vector3 func_615(int iParam0, int iParam1)//Position - 0x59D25
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					Var0 = { -1333.543f, -1034.355f, 6.6195f };
					break;
				
				case 2:
					Var0 = { -1328.618f, -1045.021f, 6.5493f };
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 1:
					Var0 = { 1755.561f, 3891.041f, 33.7649f };
					break;
				
				case 2:
					Var0 = { 1759.705f, 3889.213f, 33.7466f };
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
					Var0 = { -2299.475f, 465.903f, 173.4305f };
					break;
				
				case 2:
					Var0 = { -2300.443f, 462.901f, 173.4523f };
					break;
			}
			break;
	}
	return Var0;
}

int func_616(var uParam0)//Position - 0x59E17
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (uParam0->f_1735[iVar0 /*206*/].f_8 != PLAYER::PLAYER_PED_ID())
		{
			if (func_505(uParam0, &(uParam0->f_1735[iVar0 /*206*/])))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_617(var uParam0, var uParam1)//Position - 0x59E63
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	struct<3> Var8;
	float fVar11;
	
	if (*uParam1 == 0)
	{
		Var0 = { -1329.394f, -1051.358f, 6.5187f };
	}
	else if (*uParam1 == 1)
	{
		Var0 = { 1757.565f, 3897.907f, 33.8581f };
	}
	else
	{
		Var0 = { -2306.344f, 454.1608f, 173.4667f };
	}
	Var3 = { Var0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	fVar6 = SYSTEM::VMAG(Var3);
	iVar7 = 1;
	iVar7 = 1;
	while (iVar7 <= 7)
	{
		Var8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[iVar7 /*206*/].f_8, 0) };
		fVar11 = SYSTEM::VDIST(Var8, Var0);
		if (fVar11 < fVar6)
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iVar7 /*206*/].f_8, Var0 + Var3, 0, 1, 0, 1);
		}
		iVar7++;
	}
}

int func_618(char* sParam0)//Position - 0x59F2F
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_energy_drink")))
	{
		return 0;
	}
	return 1;
}

void func_619(var uParam0)//Position - 0x59F57
{
	int iVar0;
	
	if (!GlobalFunc_225(uParam0))
	{
		GlobalFunc_5693(uParam0);
	}
	func_627(uParam0);
	func_623(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_621(&(uParam0->f_1735[iVar0 /*206*/]));
		if (iVar0 != 0)
		{
			GlobalFunc_587(&(uParam0->f_1735[iVar0 /*206*/]));
		}
		iVar0++;
	}
}


void func_621(var uParam0)//Position - 0x59FB8
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (Local_54 != 0)
		{
			GlobalFunc_587();
		}
	}
}


void func_623(var uParam0)//Position - 0x59FDE
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			if (uParam0->f_1735[iVar0 /*206*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_626(Local_54.f_58);
				if (iVar1 <= 0 || iVar1 > uParam0->f_1735[iVar0 /*206*/].f_12)
				{
					func_625(Local_54.f_58, uParam0->f_1735[iVar0 /*206*/].f_12);
				}
				fVar2 = func_296(Local_54.f_58);
				if (fVar2 <= 0f || fVar2 > uParam0->f_1735[iVar0 /*206*/].f_13)
				{
					func_624(Local_54.f_58, uParam0->f_1735[iVar0 /*206*/].f_13);
					if (!bLocal_0)
					{
					}
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_624(int iParam0, var uParam1)//Position - 0x5A099
{
	Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRI_TIMES[iParam0] = uParam1;
}

void func_625(int iParam0, var uParam1)//Position - 0x5A0B0
{
	Global_SAVE_DATA.TRI_RANKS[iParam0] = uParam1;
}

int func_626(int iParam0)//Position - 0x5A0C5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_SAVE_DATA.TRI_RANKS[iParam0];
	return iVar0;
}

void func_627(var uParam0)//Position - 0x5A0DF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (uParam0->f_1735[iVar0 /*206*/].f_11 != uParam0->f_11)
		{
			uParam0->f_1735[iVar0 /*206*/].f_13 = (uParam0->f_1735[0 /*206*/].f_13 + (IntToFloat((uParam0->f_11 - uParam0->f_1735[iVar0 /*206*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}


int func_629(var uParam0)//Position - 0x5A17E
{
	float fVar0;
	int iVar1;
	struct<14> Var2;
	int iVar16;
	bool bVar17;
	struct<14> Var18;
	
	if (GlobalFunc_226(uParam0))
	{
		fVar0 = GlobalFunc_5182(uParam0);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_1735[iVar1 /*206*/].f_8) && uParam0->f_1735[iVar1 /*206*/].f_11 < uParam0->f_11)
		{
			bVar17 = false;
			if (uParam0->f_1735[iVar1 /*206*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar17 = true;
			}
			iVar16 = uParam0->f_1735[iVar1 /*206*/].f_11;
			if (uParam0->f_1735[iVar1 /*206*/].f_11 >= uParam0->f_11)
			{
				Var2 = { uParam0->f_26[(uParam0->f_11 - 1) /*14*/] };
			}
			else
			{
				Var2 = { uParam0->f_26[iVar16 /*14*/] };
			}
			if (uParam0->f_1735[iVar1 /*206*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				if (uParam0->f_1735[iVar1 /*206*/].f_11 > 0)
				{
					if (uParam0->f_26[(uParam0->f_1735[iVar1 /*206*/].f_11 - 1) /*14*/].f_13)
					{
						func_690(uParam0, (uParam0->f_1735[iVar1 /*206*/].f_11 - 1));
					}
				}
			}
			if (iVar16 != uParam0->f_11)
			{
				uParam0->f_1735[iVar1 /*206*/].f_13 = (fVar0 - uParam0->f_1735[iVar1 /*206*/].f_15);
				if (uParam0->f_1735[iVar1 /*206*/].f_13 < 0f)
				{
					uParam0->f_1735[iVar1 /*206*/].f_13 = 0f;
				}
			}
			if (!bVar17)
			{
				if (func_501(&(uParam0->f_1735[iVar1 /*206*/]), 4))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_1735[iVar1 /*206*/].f_8, 3f);
				}
			}
			if (bVar17)
			{
				if (uParam0->f_4395 == 2)
				{
					GlobalFunc_5824(SYSTEM::ROUND((GlobalFunc_5182(&uLocal_2611) * 1000f)), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
				}
			}
			if (!func_671(uParam0, &(uParam0->f_1735[iVar1 /*206*/]), bVar17))
			{
				if (bVar17)
				{
					if (PAD::IS_CONTROL_ENABLED(0, 75))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					}
					if ((PAD::IS_CONTROL_JUST_RELEASED(0, 75) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 75)) && !uParam0->f_4396)
					{
						uParam0->f_4395 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if ((PAD::IS_CONTROL_PRESSED(0, 75) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75)) || uParam0->f_4396)
					{
						switch (uParam0->f_4395)
						{
							case 0:
								GlobalFunc_6877(&uLocal_2611);
								uParam0->f_4395 = 1;
								break;
							
							case 1:
								if (GlobalFunc_5182(&uLocal_2611) > 0.4f)
								{
									GlobalFunc_6877(&uLocal_2611);
									uParam0->f_4395 = 2;
								}
								break;
							
							case 2:
								if (GlobalFunc_5182(&uLocal_2611) > 1.5f)
								{
									uParam0->f_4395 = 3;
									uParam0->f_1735[0 /*206*/].f_24 = 5;
									GlobalFunc_5312(&uLocal_1383, 1);
									func_291(1024);
									uParam0->f_4396 = 1;
								}
								break;
							
							case 3:
								uParam0->f_4395 = 4;
								break;
							
							case 4:
								if (!PAD::IS_CONTROL_PRESSED(0, 75) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
								{
									PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
									uParam0->f_4395 = 0;
									uParam0->f_4396 = 0;
								}
								break;
							}
						}
				}
				func_669(uParam0, iVar1);
				if (Local_54 == 0 && GlobalFunc_226(&uLocal_1379))
				{
					return 1;
				}
				if (bVar17)
				{
					if (uParam0->f_1735[iVar1 /*206*/].f_14 != 0f)
					{
						GlobalFunc_7777(&(uParam0->f_18));
					}
					if (GlobalFunc_747(uLocal_1382, 8))
					{
						func_341(uParam0, iVar16, 1);
						if (iVar16 < (uParam0->f_11 - 1))
						{
							func_341(uParam0, iVar16 + 1, 0);
						}
						GlobalFunc_5312(&uLocal_1382, 8);
					}
				}
				if (func_278(1024))
				{
					uParam0->f_10 = func_666(uParam0, &Var2, uParam0->f_1735[iVar1 /*206*/].f_8, iVar1);
					if (iVar16 < (uParam0->f_11 - 1))
					{
						Var18 = { uParam0->f_26[iVar16 + 1 /*14*/] };
					}
					else
					{
						Var18 = { Var2 };
					}
					func_665(&Var2, &Var18);
				}
				if (!bVar17)
				{
					func_664(uParam0, &(uParam0->f_1735[iVar1 /*206*/]));
				}
				if (uParam0->f_10 == 0)
				{
					uParam0->f_1735[iVar1 /*206*/].f_11++;
					iVar16 = uParam0->f_1735[iVar1 /*206*/].f_11;
					if (iVar16 >= (uParam0->f_11 - 1))
					{
						Var2 = { uParam0->f_26[(uParam0->f_11 - 1) /*14*/] };
					}
					else
					{
						Var2 = { uParam0->f_26[iVar16 /*14*/] };
					}
					if (bVar17)
					{
						if (iVar16 - 1) < (uParam0->f_11 - 1)
						{
							func_663(uParam0, (iVar16 - 1), 0);
							GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_26[(iVar16 - 1) /*14*/].f_10, 255, 255, 255, uParam0->f_26[(iVar16 - 1) /*14*/].f_8);
							GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_26[(iVar16 - 1) /*14*/].f_10, 255, 255, 255, uParam0->f_26[(iVar16 - 1) /*14*/].f_8);
							uParam0->f_26[(iVar16 - 1) /*14*/].f_13 = 1;
						}
						else
						{
							func_663(uParam0, (iVar16 - 1), 1);
						}
						if (iVar16 == uParam0->f_11)
						{
							if (!GlobalFunc_225(uParam0))
							{
								GlobalFunc_5693(uParam0);
							}
							AUDIO::TRIGGER_MUSIC_EVENT("MGTR_COMPLETE");
							AUDIO::START_AUDIO_SCENE("TRI_END_SCENE");
							AUDIO::STOP_AUDIO_SCENE("TRI_RUN_SCENE");
							return 0;
						}
						else
						{
							func_341(uParam0, iVar16, 1);
							if (iVar16 < (uParam0->f_11 - 1))
							{
								func_341(uParam0, iVar16 + 1, 0);
							}
						}
						if (uParam0->f_1735[iVar1 /*206*/].f_14 == 0f)
						{
							if (GlobalFunc_226(&(uParam0->f_18)))
							{
								GlobalFunc_235(&(uParam0->f_18));
							}
						}
						if (uParam0->f_11 > 0)
						{
							if (uParam0->f_4 > 0f)
							{
								if (iVar16 == SYSTEM::ROUND((IntToFloat(uParam0->f_11) / 2f)))
								{
									uParam0->f_1735[iVar1 /*206*/].f_14 = 0f;
									GlobalFunc_6877(&(uParam0->f_18));
								}
							}
						}
					}
					else if (uParam0->f_1735[iVar1 /*206*/].f_11 >= uParam0->f_11)
					{
						if (Local_54 != 2)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar1 /*206*/].f_8))
							{
								GlobalFunc_587(&(uParam0->f_1735[iVar1 /*206*/]));
							}
						}
					}
					else if (iVar1 != 0)
					{
						func_662(uParam0, uParam0->f_1735[iVar1 /*206*/].f_8, uParam0->f_1735[iVar1 /*206*/].f_9, uParam0->f_26[uParam0->f_1735[iVar1 /*206*/].f_11 /*14*/].f_3, uParam0->f_26[uParam0->f_1735[iVar1 /*206*/].f_11 /*14*/].f_11, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	if (func_278(1024))
	{
		func_656(uParam0);
		func_655(uParam0, &uLocal_53);
		func_654(uParam0, &uLocal_53);
		func_647(uParam0);
		func_646(uParam0);
		func_644(uParam0);
		GlobalFunc_587();
		func_642(uParam0);
		func_630(uParam0);
	}
	return 1;
}

void func_630(var uParam0)//Position - 0x5A7A5
{
	char* sVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRI_TIMES[Local_54.f_58] > 0f)
	{
		sVar0 = "";
		iVar1 = SYSTEM::CEIL((Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRI_TIMES[Local_54.f_58] * 1000f));
	}
	else
	{
		sVar0 = "-1";
		iVar1 = -1;
	}
	if (!func_278(32))
	{
		func_632(SYSTEM::FLOOR((uParam0->f_1735[0 /*206*/].f_13 * 1000f)), "TRI_HUD_TIME", -1, -1, "", uParam0->f_1735[0 /*206*/].f_12, uParam0->f_12, "", SYSTEM::CEIL((uParam0->f_1735[0 /*206*/].f_15 * 1000f)), 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar1, sVar0, 0, 1, -1, "", -1f, 1, 1, 1);
		func_631();
	}
	else
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	}
}

void func_631()//Position - 0x5A870
{
	Local_752.f_2 = 9;
	GlobalFunc_5824(Local_752, Local_752.f_1, "TRI_ENERGY", Local_752.f_2, -1, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
}

void func_632(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26, bool bParam27)//Position - 0x5A8A1
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	
	if (fParam24 > -1f)
	{
		GlobalFunc_5969(0, "", iParam22, iParam25, 9, 0, sParam23, 1, fParam24, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (GlobalFunc_1561(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		GlobalFunc_5824(iParam14, iParam15, sVar0, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (GlobalFunc_1561(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_637(iParam10, iParam11, sVar1, iParam22, iParam13, 7, 0, 0, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (GlobalFunc_1561(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		GlobalFunc_5967(iParam5, uParam6, sVar2, iParam9, iParam22, 6, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (GlobalFunc_1561(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (GlobalFunc_1561(sVar4))
		{
			if (!bParam27)
			{
				sVar4 = "TIMER_BESLAP";
			}
			else
			{
				sVar4 = "TIMER_BESTIME";
			}
		}
		GlobalFunc_5277(iParam18, sVar4, 0, 1, iParam22, iParam20, 4, 0, iParam26, 0, 0, 0, 0, 0);
	}
	sVar5 = sParam1;
	if (GlobalFunc_1561(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	if (bParam21)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	GlobalFunc_5277(iParam0, sVar5, iParam8, iVar6, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}





void func_637(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x5AC0F
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(4, iVar0);
		Global_1328872.f_2214[iVar0] = iParam0;
		Global_1328872.f_2214.f_138[iVar0] = iParam1;
		StringCopy(&(Global_1328872.f_2214.f_9[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_2214.f_147[iVar0] = uParam3;
		Global_1328872.f_2214.f_174[iVar0] = iParam5;
		Global_1328872.f_2214.f_156[iVar0] = uParam4;
		Global_1328872.f_2214.f_183[iVar0] = iParam6;
		Global_1328872.f_2214.f_218[iVar0] = iParam7;
		Global_1328872.f_2214.f_227[iVar0] = iParam8;
		Global_1328872.f_2214.f_236[iVar0] = iParam9;
		Global_1328872.f_2214.f_245[iVar0] = iParam10;
		if ((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION())
		{
			Global_1328872.f_764 = 1;
		}
	}
}





void func_642(var uParam0)//Position - 0x5AF8B
{
	if (uParam0->f_12 == -1)
	{
	}
}


void func_644(var uParam0)//Position - 0x5AFA3
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_645())
			{
				uParam0->f_17 = "SPR_EXIT_FAIL2";
				uParam0->f_1735[0 /*206*/].f_24 = 0;
			}
		}
	}
}

int func_645()//Position - 0x5AFDF
{
	var uVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if ((VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("tribike")) || VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("tribike3")))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_646(var uParam0)//Position - 0x5B039
{
	if (Local_54 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[0 /*206*/].f_9))
			{
				if (!GlobalFunc_226(&uLocal_1376))
				{
					GlobalFunc_8641(&uLocal_1376);
				}
				else if (PED::IS_PED_IN_VEHICLE(uParam0->f_1735[0 /*206*/].f_8, uParam0->f_1735[0 /*206*/].f_9, 0))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1735[0 /*206*/].f_9, joaat("sanchez")))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_1735[0 /*206*/].f_9))
						{
							GlobalFunc_6877(&uLocal_1376);
						}
						else if (GlobalFunc_5182(&uLocal_1376) >= 2.75f)
						{
							GlobalFunc_6877(&uLocal_1376);
							GlobalFunc_6877(&uLocal_1373);
							func_363(1024);
							uParam0->f_1735[0 /*206*/].f_24 = 5;
						}
					}
					else if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_1735[0 /*206*/].f_9))
					{
						GlobalFunc_6877(&uLocal_1376);
					}
					else if (GlobalFunc_5182(&uLocal_1376) >= 1.5f)
					{
						GlobalFunc_6877(&uLocal_1376);
						GlobalFunc_6877(&uLocal_1373);
						func_363(1024);
						uParam0->f_1735[0 /*206*/].f_24 = 5;
					}
				}
				else if (GlobalFunc_5182(&uLocal_1376) >= 1.5f)
				{
					GlobalFunc_6877(&uLocal_1376);
					GlobalFunc_6877(&uLocal_1373);
					func_363(1024);
					uParam0->f_1735[0 /*206*/].f_24 = 5;
				}
			}
			else if (GlobalFunc_226(&uLocal_1376))
			{
				GlobalFunc_6877(&uLocal_1376);
			}
		}
	}
	if (Local_54 == 2)
	{
		if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[0 /*206*/].f_9))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(uParam0->f_1735[0 /*206*/].f_9))
				{
					if (!GlobalFunc_226(&uLocal_1376))
					{
						GlobalFunc_8641(&uLocal_1376);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1735[0 /*206*/].f_9, 0))
					{
						GlobalFunc_6877(&uLocal_1376);
					}
					else if (GlobalFunc_5182(&uLocal_1376) >= 1.5f)
					{
						func_363(1024);
						uParam0->f_1735[0 /*206*/].f_24 = 5;
					}
				}
				else if (GlobalFunc_226(&uLocal_1376))
				{
					GlobalFunc_6877(&uLocal_1376);
				}
			}
		}
	}
}

void func_647(var uParam0)//Position - 0x5B256
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (Local_54 != 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (uParam0->f_1735[0 /*206*/].f_11 <= (uParam0->f_11 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9, 0);
				}
			}
			if (uParam0->f_1735[0 /*206*/].f_11 + 1 <= (uParam0->f_11 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9, 0);
				}
			}
			GlobalFunc_6877(&uLocal_1373);
			uParam0->f_17 = "SPR_HELP_WANT";
			func_363(1024);
			uParam0->f_1735[0 /*206*/].f_24 = 0;
		}
		else if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(6);
		}
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
		if (Local_54 == 1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
					{
						if (GlobalFunc_2506())
						{
							iVar0 = 0;
							while (iVar0 < GlobalFunc_760())
							{
								if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_759(iVar0)))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_759(iVar0));
									if (iVar1 != PLAYER::PLAYER_PED_ID() && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
									{
										PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
										PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
										PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
										return;
									}
								}
								iVar0++;
							}
						}
						if (GlobalFunc_4453())
						{
							iVar0 = 0;
							while (iVar0 < GlobalFunc_4452())
							{
								if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_4451(iVar0)))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar0));
									if (iVar1 != PLAYER::PLAYER_PED_ID() && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
											PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
										}
									}
								}
								iVar0++;
							}
						}
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uVar2 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_1735[0 /*206*/].f_8);
					if (!((VEHICLE::IS_VEHICLE_MODEL(uVar2, joaat("tribike")) || VEHICLE::IS_VEHICLE_MODEL(uVar2, joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(uVar2, joaat("tribike3"))))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}







void func_654(var uParam0, var uParam1)//Position - 0x5B549
{
	if (func_278(1024))
	{
		if ((Local_54 == 2 && uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 != 6) && uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 != 10)
		{
			return;
		}
		if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_1735[0 /*206*/].f_9) < 5)
		{
			GlobalFunc_6877(&uLocal_1373);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (uParam0->f_1735[0 /*206*/].f_11 <= (uParam0->f_11 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9, 0);
				}
			}
			if (uParam0->f_1735[0 /*206*/].f_11 + 1 <= (uParam0->f_11 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9, 0);
				}
			}
			func_363(1024);
			uParam0->f_17 = "SPR_RETR_DES";
			uParam0->f_1735[0 /*206*/].f_24 = 0;
		}
	}
}

void func_655(var uParam0, var uParam1)//Position - 0x5B668
{
	float fVar0;
	
	if (Local_54 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1735[0 /*206*/].f_9, 0))
			{
				func_291(2048);
			}
		}
		if (func_278(2048))
		{
			if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1735[0 /*206*/].f_9, 0))
				{
					fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_9, 1));
					if (fVar0 > 25f)
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam1))
						{
							*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(uParam0->f_1735[0 /*206*/].f_9);
							HUD::SET_BLIP_COLOUR(*uParam1, 3);
						}
						if (!GlobalFunc_226(&uLocal_1379))
						{
							GlobalFunc_8641(&uLocal_1379);
						}
						else
						{
							if (GlobalFunc_5182(&uLocal_1379) >= 10f)
							{
								func_549("SPR_TXIT_WARN", 15000, 0, &uLocal_1383, 1024);
							}
							if (GlobalFunc_5182(&uLocal_1379) >= 35f)
							{
								GlobalFunc_6877(&uLocal_1373);
								GlobalFunc_235(&uLocal_1379);
								if (HUD::DOES_BLIP_EXIST(*uParam1))
								{
									HUD::REMOVE_BLIP(uParam1);
									if (uParam0->f_1735[0 /*206*/].f_11 <= (uParam0->f_11 - 1))
									{
										if (HUD::DOES_BLIP_EXIST(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9))
										{
											HUD::SET_BLIP_DISPLAY(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_9, 0);
										}
									}
									if (uParam0->f_1735[0 /*206*/].f_11 + 1 <= (uParam0->f_11 - 2))
									{
										if (HUD::DOES_BLIP_EXIST(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9))
										{
											HUD::SET_BLIP_DISPLAY(uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 + 1 /*14*/].f_9, 0);
										}
									}
								}
								func_363(1024);
								uParam0->f_17 = "SPR_TXIT_FAIL";
								uParam0->f_1735[0 /*206*/].f_24 = 0;
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(*uParam1))
					{
						HUD::REMOVE_BLIP(uParam1);
					}
					GlobalFunc_235(&uLocal_1379);
					if (GlobalFunc_747(uLocal_1383, 1024))
					{
						GlobalFunc_5312(&uLocal_1383, 1024);
					}
					if (GlobalFunc_747(uLocal_1383, 2048))
					{
						GlobalFunc_5312(&uLocal_1383, 2048);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::REMOVE_BLIP(uParam1);
				}
				func_363(2048);
			}
		}
	}
}

void func_656(var uParam0)//Position - 0x5B8B4
{
	if (func_278(1024))
	{
		func_660(uParam0);
		func_657(uParam0);
	}
}

void func_657(var uParam0)//Position - 0x5B8D2
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_1735[0 /*206*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_1735[0 /*206*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_54 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_1735[0 /*206*/].f_9, 0))
				{
					func_291(2048);
				}
			}
			if (func_278(2048))
			{
				if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_549("SPR_HELP_DAMG", 5000, 0, &uLocal_1383, 2);
					}
				}
			}
		}
		else
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			func_549("SPR_HELP_DAMG", 5000, 0, &uLocal_1383, 2);
		}
	}
	if (Local_54 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_549("SPR_HELP_DAMG", 5000, 0, &uLocal_1383, 2);
		}
	}
}



void func_660(var uParam0)//Position - 0x5BA3E
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	bool bVar15;
	bool bVar16;
	
	Var0 = { uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_3 };
	if (uParam0->f_1735[0 /*206*/].f_11 > 0)
	{
		Var3 = { uParam0->f_26[(uParam0->f_1735[0 /*206*/].f_11 - 1) /*14*/].f_3 };
	}
	else
	{
		Var3 = { Local_54.f_3 };
	}
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
	fVar7 = fVar6;
	switch (Local_54)
	{
		case 1:
			if (uParam0->f_1735[0 /*206*/].f_11 == 0)
			{
				fVar6 = (fVar6 + 10f);
				fVar7 = (fVar7 + 100f);
			}
			else
			{
				fVar6 = (fVar6 + 50f);
				fVar7 = (fVar7 + 300f);
			}
			break;
		
		case 0:
			if (uParam0->f_1735[0 /*206*/].f_11 == 0)
			{
				fVar6 = (fVar6 + 200f);
				fVar7 = (fVar7 + 750f);
			}
			else
			{
				fVar6 = (fVar6 + 200f);
				fVar7 = (fVar7 + 9000f);
			}
			break;
		
		case 2:
			if (uParam0->f_1735[0 /*206*/].f_11 == 0)
			{
				fVar6 = (fVar6 + 10f);
				fVar7 = (fVar7 + 60f);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_8))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[0 /*206*/].f_8, 0))
				{
					fVar6 = (fVar6 + 20f);
					fVar7 = (fVar7 + 170f);
				}
				else
				{
					fVar6 = (fVar6 + 20f);
					fVar7 = (fVar7 + 70f);
				}
			}
			break;
	}
	Var8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1735[0 /*206*/].f_8, 1) };
	Var11 = { MISC::_0x21C235BC64831E5A(Var8, Var3, Var0, 1) };
	fVar14 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_54 == 1)
	{
		if (MISC::ABSF((Var11.f_2 - Var8.f_2)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		if (Local_54 == 2 && GlobalFunc_663("TRI_LEAVE_VEH", 0, 0))
		{
			HUD::CLEAR_THIS_PRINT("TRI_LEAVE_VEH");
		}
		GlobalFunc_6877(&uLocal_1373);
		func_363(1024);
		uParam0->f_1735[0 /*206*/].f_24 = 0;
		uParam0->f_17 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (Local_54 == 2)
		{
			if (!GlobalFunc_74("SPR_HELP_DIST_2"))
			{
				HUD::CLEAR_HELP(1);
				GlobalFunc_Display_Help_Text("SPR_HELP_DIST_2");
				func_691(8);
			}
		}
		else if (fVar14 <= (fVar7 - 15f))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				GlobalFunc_159("SPR_HELP_DIST", -1);
			}
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_549("SPR_HELP_WARN", 5000, 0, &uLocal_1383, 4);
		}
	}
	else
	{
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (GlobalFunc_74("SPR_HELP_DIST_2"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (GlobalFunc_747(uLocal_1383, 4))
		{
			GlobalFunc_5312(&uLocal_1383, 4);
		}
	}
}


void func_662(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, int iParam7)//Position - 0x5BD11
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		uParam2 = uParam2;
		uParam6 = uParam6;
		func_486(uParam0, Param3, iParam7);
	}
}

void func_663(var uParam0, int iParam1, bool bParam2)//Position - 0x5BD3A
{
	if (iParam1 < 0 || iParam1 > 121)
	{
		return;
	}
	func_294(&(uParam0->f_26[iParam1 /*14*/]));
	if (bParam2)
	{
		func_289(&(uParam0->f_26[iParam1 /*14*/]));
	}
	if (iParam1 + 1 < uParam0->f_11)
	{
		func_294(&(uParam0->f_26[iParam1 + 1 /*14*/]));
		func_289(&(uParam0->f_26[iParam1 + 1 /*14*/]));
	}
}

void func_664(var uParam0, var uParam1)//Position - 0x5BD9E
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (func_365(uParam0, uParam1) != 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_8) || PED::IS_PED_INJURED(uParam1->f_8))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_9) || ENTITY::IS_ENTITY_DEAD(uParam1->f_9))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_8, 1) && TASK::GET_SCRIPT_TASK_STATUS(uParam1->f_8, 242628503) != 1)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_9, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_8, 1) - Var0 * Vector(0.15f, 0.15f, 0.15f) };
		Var6 = { Var0 + Var3 };
		TASK::OPEN_SEQUENCE_TASK(&uVar9);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 3f, 20000, 3f, 1, 1193033728);
		TASK::TASK_ENTER_VEHICLE(0, uParam1->f_9, 20000, -1, 3f, 1, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam1->f_9, uParam1->f_205, 786485, 0, 8, -1, -1f, 0, 1073741824);
		TASK::CLOSE_SEQUENCE_TASK(uVar9);
		TASK::TASK_PERFORM_SEQUENCE(uParam1->f_8, uVar9);
		TASK::CLEAR_SEQUENCE_TASK(&uVar9);
	}
}

void func_665(var uParam0, var uParam1)//Position - 0x5BE9E
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_10 != 0 && !uParam0->f_13)
	{
		iVar4 = GlobalFunc_4622();
		func_355(GlobalFunc_6295(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_10, iVar0, iVar1, iVar2, GlobalFunc_2419(uParam0->f_3, 25, 200));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_10, iVar0, iVar1, iVar2, GlobalFunc_2419(uParam0->f_3, 25, 200));
	}
	if (uParam1->f_10 != 0 && !uParam1->f_13)
	{
		iVar5 = GlobalFunc_4622();
		func_355(GlobalFunc_6295(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_10, iVar0, iVar1, iVar2, GlobalFunc_2419(uParam1->f_3, 25, 200));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_10, iVar0, iVar1, iVar2, GlobalFunc_2419(uParam1->f_3, 25, 200));
	}
}

int func_666(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x5BF84
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	uVar0 = uVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return -1;
	}
	if (uParam1->f_11 == 6 || uParam1->f_11 == 10)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if ((uParam1->f_11 == 10 && !PED::IS_PED_RAGDOLL(iParam2)) || uParam1->f_11 != 10)
			{
				return -1;
			}
		}
		else if (!((PED::IS_PED_IN_MODEL(iParam2, joaat("tribike")) || PED::IS_PED_IN_MODEL(iParam2, joaat("tribike2"))) || PED::IS_PED_IN_MODEL(iParam2, joaat("tribike3"))))
		{
			return -1;
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam2))
	{
		return -1;
	}
	switch (uParam1->f_11)
	{
		case 8:
			switch (Local_54.f_58)
			{
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, 1753.24f, 3895.4f, 33.82f, 1762.06f, 3900.4f, 40.81f, 9.7f, 0, 1, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_691(2);
							}
						}
						GlobalFunc_7542(&uLocal_1359, 0);
						return 0;
					}
					break;
				
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1327.06f, -1041.91f, 6.4f, -1336.8f, -1047.55f, 13.47f, 9.7f, 0, 1, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_691(2);
							}
						}
						GlobalFunc_7542(&uLocal_1359, 0);
						return 0;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -2298.94f, 459.13f, 173.47f, -2310.46f, 460.32f, 180.47f, 9.7f, 0, 1, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_691(2);
							}
						}
						GlobalFunc_7542(&uLocal_1359, 0);
						return 0;
					}
					break;
			}
			break;
		
		case 10:
			switch (Local_54.f_58)
			{
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, 1974.43f, 3887.36f, 31.35f, 1961.63f, 3879.74f, 38.3f, 18f, 0, 1, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_691(1);
							}
						}
						return 0;
					}
					break;
				
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1172.74f, -844.98f, 13.36f, -1166.32f, -856.93f, 20.16f, 18f, 0, 1, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_691(1);
							}
						}
						return 0;
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1283.32f, 274.68f, 63.78f, -1275.79f, 283.86f, 70.86f, 12f, 0, 1, 0))
					{
						if (iParam2 != PLAYER::PLAYER_PED_ID())
						{
							if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
							{
								func_691(1);
							}
						}
						return 0;
					}
					break;
			}
			break;
		
		case 5:
			Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_4377[uParam0->f_1735[iParam3 /*206*/].f_11], 1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
			Var7 = { uParam1->f_3 - Var1 };
			Var10 = { Var4 - Var1 };
			fVar13 = GlobalFunc_168(Var7, Var10);
			if (ENTITY::IS_ENTITY_AT_COORD(iParam2, uParam1->f_3, uParam1->f_6, uParam1->f_6, uParam1->f_6, 0, 1, 0) && fVar13 >= 0f)
			{
				if (iParam2 == PLAYER::PLAYER_PED_ID())
				{
					GlobalFunc_7542(&uLocal_1359, 0);
					if (func_667(uParam1, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1395, "HUD_MINI_GAME_SOUNDSET", 1);
					}
				}
				return 0;
			}
			break;
		
		default:
			if (ENTITY::IS_ENTITY_AT_COORD(iParam2, uParam1->f_3, uParam1->f_6, uParam1->f_6, uParam1->f_6, 0, 1, 0))
			{
				if (iParam2 == PLAYER::PLAYER_PED_ID())
				{
					GlobalFunc_7542(&uLocal_1359, 0);
					if (func_667(uParam1, 8))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1395, "HUD_MINI_GAME_SOUNDSET", 1);
					}
				}
				else if (uParam1->f_11 == 9)
				{
					if (iParam2 != PLAYER::PLAYER_PED_ID())
					{
						if (uParam0->f_1735[iParam3 /*206*/].f_12 == 1)
						{
							func_691(0);
						}
					}
				}
				return 0;
			}
			break;
	}
	return -1;
}

bool func_667(var uParam0, int iParam1)//Position - 0x5C3C7
{
	return GlobalFunc_747(uParam0->f_12, iParam1);
}


void func_669(var uParam0, int iParam1)//Position - 0x5C3FA
{
	int iVar0;
	int iVar1;
	struct<206> Var2;
	float fVar208;
	float fVar209;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_12 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_12;
	Var2 = { uParam0->f_1735[iParam1 /*206*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_12)
	{
		if (Var2.f_8 != uParam0->f_1735[iVar1 /*206*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar1 /*206*/].f_8) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8))
			{
				if (Var2.f_11 > uParam0->f_1735[iVar1 /*206*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_1735[iVar1 /*206*/].f_11)
				{
					fVar208 = GlobalFunc_2264(Var2.f_8, uParam0->f_26[Var2.f_11 /*14*/].f_3, 1);
					fVar209 = GlobalFunc_2264(uParam0->f_1735[iVar1 /*206*/].f_8, uParam0->f_26[uParam0->f_1735[iVar1 /*206*/].f_11 /*14*/].f_3, 1);
					if (fVar208 < fVar209)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_1735[iParam1 /*206*/].f_12 = iVar0;
}


int func_671(var uParam0, var uParam1, bool bParam2)//Position - 0x5C534
{
	bool bVar0;
	
	switch (uParam1->f_24)
	{
		case 0:
			func_363(1024);
			func_688(uParam0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_687(uParam0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
				}
			}
			GlobalFunc_5751(&uLocal_2620, 1050253722, 1073741824);
			uParam1->f_24 = 1;
			break;
		
		case 1:
			Local_54.f_289 = 1;
			if (func_683(&(uParam0->f_4372), &uLocal_2620, "SPR_UI_FAILD", uParam0->f_17, &bVar0, 78, 7, 1, 1097859072, 1))
			{
				if (bVar0)
				{
					if (GlobalFunc_663("SPR_RETR_DES", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					GlobalFunc_4653(0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					}
					uParam0->f_4398 = 1;
					Local_54.f_289 = 0;
					func_291(512);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					func_729();
					uParam1->f_24 = 5;
				}
				else
				{
					GlobalFunc_7067(&uLocal_1373, 10f);
					GlobalFunc_4653(0);
					uParam0->f_4398 = 0;
					func_363(512);
					GRAPHICS::ANIMPOSTFX_STOP_ALL();
					uParam1->f_24 = 13;
				}
			}
			break;
		
		case 3:
			if (func_278(512))
			{
				func_363(1024);
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1735[0 /*206*/].f_9, 0))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_5210(&(Local_54.f_290), 1, 0, 0, 1);
					GlobalFunc_813(&(Local_54.f_290), "SPR_UI_RESET", 2, 201, 1, 1, 0);
					GlobalFunc_813(&(Local_54.f_290), "SPR_UI_QUIT", 2, 204, 1, 1, 0);
					GlobalFunc_813(&(Local_54.f_290), "SPR_UI_RESTART", 2, 203, 1, 1, 0);
					GlobalFunc_5275(&(Local_54.f_290), 1);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_1735[0 /*206*/].f_9, 0))
				{
					uParam1->f_24 = 4;
				}
			}
			else
			{
				uParam1->f_24 = 7;
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_1735[0 /*206*/].f_9, 4);
			}
			func_363(1024);
			if (GlobalFunc_5182(&uLocal_1373) <= 10f)
			{
				if (bParam2)
				{
					GlobalFunc_7512(&(Local_54.f_290), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 192))
					{
						func_291(512);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_24 = 5;
						if (!Local_54 == 2)
						{
							GlobalFunc_6531(&uLocal_1359, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
								}
							}
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_24 = 5;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 192))
					{
						func_363(512);
						if (!Local_54 == 2)
						{
							GlobalFunc_6531(&uLocal_1359, 0, 0);
						}
						if (Local_54 == 1)
						{
							Local_54.f_58 = -1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
									}
								}
							}
							uParam1->f_24 = 11;
						}
						else
						{
							GlobalFunc_7067(&uLocal_1373, 10f);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
									}
								}
							}
							uParam1->f_24 = 13;
						}
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_1735[0 /*206*/].f_9, 1);
				}
				uParam1->f_24 = 13;
			}
			break;
		
		case 5:
			if (GlobalFunc_4623(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				uParam1->f_24 = 7;
			}
			break;
		
		case 6:
			if (GlobalFunc_4623(500))
			{
				func_687(uParam0);
				GlobalFunc_235(uParam0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				uParam1->f_24 = 9;
			}
			break;
		
		case 7:
			if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
			{
				func_676(uParam1);
			}
			else
			{
				func_675(uParam1);
			}
			if (func_278(512))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_1735[0 /*206*/].f_8))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1735[0 /*206*/].f_8, joaat("weapon_unarmed"), 1);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(uParam0->f_1735[0 /*206*/].f_8, 1, 1, 1, 0);
				}
				func_373();
				uParam0->f_25 = 8;
			}
			else
			{
				if (bParam2)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
				}
				uParam1->f_24 = 8;
			}
			break;
		
		case 8:
			if (bParam2)
			{
				if (uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 6 || uParam0->f_26[uParam0->f_1735[0 /*206*/].f_11 /*14*/].f_11 == 10)
				{
					func_674(uParam0, uParam1);
				}
				else
				{
					func_673(uParam0, uParam1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				uParam1->f_24 = 10;
			}
			else
			{
				uParam1->f_24 = 12;
			}
			break;
		
		case 9:
			func_672(uParam1, Local_54.f_3, Local_54.f_6, 0f);
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_54.f_3, 100f, 0);
			func_370(uParam0);
			uParam1->f_24 = 11;
			break;
		
		case 10:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				func_291(1024);
				if (GlobalFunc_4625(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					uParam1->f_24 = 12;
				}
				return 0;
			}
			break;
		
		case 11:
			if (GlobalFunc_4625(500))
			{
				uParam0->f_25 = 8;
			}
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
				}
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
			}
			func_687(uParam0);
			GlobalFunc_235(uParam0);
			uParam0->f_25 = 8;
			break;
	}
	return 1;
}

void func_672(var uParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x5CBB4
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9) || !PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_8, Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_8, fParam4);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, fParam4);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam5);
		if (Local_54 != 0 && Local_54 != 2)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9);
			SYSTEM::WAIT(0);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) > 1.5f)
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1) };
					Var0.f_2 = (Var0.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) + 1.5f));
					ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Var0, 1, 0, 0, 1);
				}
			}
		}
	}
}

void func_673(var uParam0, var uParam1)//Position - 0x5CC8B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (uParam1->f_11 > 0)
	{
		Var3 = { uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
		Var6 = { uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
		Var9 = { uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
		Var3.f_2 = (Var3.f_2 + 10f);
		Var6.f_2 = (Var6.f_2 - 10f);
		if (WATER::TEST_PROBE_AGAINST_WATER(Var3, Var6, &Var9))
		{
			Var9.f_2 = (Var9.f_2 + -1f);
			ENTITY::SET_ENTITY_COORDS(uParam1->f_8, Var9, 1, 0, 0, 1);
		}
		else if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &(Var9.f_2)))
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_8, Var9, 1, 0, 0, 1);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam1->f_8, Var9, 1, 0, 0, 1);
		}
		Var0 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 - uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uParam1->f_8, uParam1->f_16, 1, 0, 0, 1);
		Var0 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 - uParam1->f_16 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8))
	{
		fVar12 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_8, fVar12);
	}
}

void func_674(var uParam0, var uParam1)//Position - 0x5CDC6
{
	struct<3> Var0;
	float fVar3;
	
	if (uParam1->f_11 > 0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_8, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9))
				{
					PED::SET_PED_INTO_VEHICLE(uParam1->f_8, uParam1->f_9, -1);
				}
			}
		}
		PED::SET_PED_COORDS_KEEP_VEHICLE(uParam1->f_8, uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3);
		Var0 = { uParam0->f_26[uParam1->f_11 /*14*/].f_3 - uParam0->f_26[(uParam1->f_11 - 1) /*14*/].f_3 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9))
	{
		fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
		ENTITY::SET_ENTITY_HEADING(uParam1->f_9, fVar3);
	}
}

void func_675(var uParam0)//Position - 0x5CE6B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000);
	}
}

void func_676(var uParam0)//Position - 0x5CE8A
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1) };
			Var0.f_2 = (Var0.f_2 + 3f);
			uParam0->f_9 = VEHICLE::CREATE_VEHICLE(joaat("tribike"), Var0, ENTITY::GET_ENTITY_HEADING(uParam0->f_8), 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_8, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
				}
			}
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_8, 0))
		{
		}
	}
}







int func_683(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x5D2CC
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(1);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (GlobalFunc_747(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GlobalFunc_726(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (GlobalFunc_747(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!GlobalFunc_747(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			GlobalFunc_5210(&(uParam1->f_10), 0, 1, 1, 1);
			GlobalFunc_813(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			GlobalFunc_813(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (GlobalFunc_747(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (GlobalFunc_747(iParam5, 8))
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!GlobalFunc_226(&(uParam1->f_1)))
			{
				GlobalFunc_7777(&(uParam1->f_1));
			}
			if (GlobalFunc_747(iParam5, 2))
			{
				if (!GlobalFunc_226(&(uParam1->f_4)))
				{
					GlobalFunc_7777(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (GlobalFunc_747(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			GlobalFunc_8003(uParam0, 0, 0);
			if (!GlobalFunc_747(iParam5, 16) && (GlobalFunc_5182(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				GlobalFunc_7512(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!GlobalFunc_747(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					GlobalFunc_810(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!GlobalFunc_747(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					GlobalFunc_810(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (GlobalFunc_747(iParam5, 2))
			{
				if (GlobalFunc_5182(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!GlobalFunc_747(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					GlobalFunc_810(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			GlobalFunc_8003(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (GlobalFunc_747(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			GlobalFunc_6877(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (GlobalFunc_5182(&(uParam1->f_4)) <= 0.1f)
			{
				GlobalFunc_8003(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}




void func_687(var uParam0)//Position - 0x5D7C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		func_663(uParam0, iVar0, 1);
		iVar0++;
	}
}

void func_688(var uParam0)//Position - 0x5D7EA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1735)
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1735[iVar0 /*206*/].f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1735[iVar0 /*206*/].f_10));
		}
		iVar0++;
	}
	func_687(uParam0);
	HUD::REMOVE_BLIP(&uLocal_53);
	HUD::REMOVE_BLIP(&uLocal_741);
	HUD::REMOVE_BLIP(&uLocal_742);
}


void func_690(var uParam0, int iParam1)//Position - 0x5D978
{
	uParam0->f_26[iParam1 /*14*/].f_8 = (uParam0->f_26[iParam1 /*14*/].f_8 - 25);
	if (uParam0->f_26[iParam1 /*14*/].f_8 > 0)
	{
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_26[iParam1 /*14*/].f_10, 255, 255, 255, uParam0->f_26[iParam1 /*14*/].f_8);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_26[iParam1 /*14*/].f_10, 255, 255, 255, uParam0->f_26[iParam1 /*14*/].f_8);
	}
	else
	{
		func_290(&(uParam0->f_26[iParam1 /*14*/].f_10));
		uParam0->f_26[iParam1 /*14*/].f_13 = 0;
	}
}

int func_691(int iParam0)//Position - 0x5D9F9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_54.f_420.f_1[iVar0 /*4*/] == -1)
		{
			Local_54.f_420.f_1[iVar0 /*4*/] = iParam0;
			Local_54.f_420.f_1[iVar0 /*4*/].f_2 = MISC::GET_GAME_TIMER();
			Local_54.f_420.f_1[iVar0 /*4*/].f_3 = func_693(iParam0);
			if (func_692(iParam0))
			{
				GlobalFunc_812(&(Local_54.f_420.f_1[iVar0 /*4*/].f_1), 1);
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_692(int iParam0)//Position - 0x5DA74
{
	switch (iParam0)
	{
		case 11:
		case 13:
		case 9:
		case 10:
		case 12:
		case 6:
			return 1;
			break;
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 14:
		case 8:
		case 7:
			return 0;
			break;
	}
	return 0;
}

int func_693(int iParam0)//Position - 0x5DAEC
{
	switch (iParam0)
	{
		case 5:
			return 8;
			break;
		
		case 3:
		case 4:
			return 7;
			break;
		
		case 11:
		case 12:
			return 6;
			break;
		
		case 13:
			return 5;
			break;
		
		case 7:
		case 6:
			return 4;
			break;
		
		case 9:
		case 10:
			return 2;
			break;
		
		case 8:
			return 3;
			break;
		
		case 0:
		case 1:
		case 2:
			return 1;
			break;
		
		case 14:
			return 0;
			break;
	}
	return 10;
}

void func_694(var uParam0)//Position - 0x5DB97
{
	float fVar0;
	
	GlobalFunc_235(uParam0);
	if (Local_54.f_58 != -1)
	{
		fVar0 = func_296(Local_54.f_58);
		if (fVar0 <= 0f || fVar0 > Local_54.f_60[Local_54.f_58])
		{
			fVar0 = Local_54.f_60[Local_54.f_58];
		}
		uParam0->f_3 = fVar0;
		uParam0->f_4 = (uParam0->f_3 / 2f);
	}
	func_286(uParam0);
	uParam0->f_11 = 0;
	func_695(uParam0);
	uParam0->f_12 = 0;
}

void func_695(var uParam0)//Position - 0x5DC03
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_696(uParam0, iVar0);
		iVar0++;
	}
}

void func_696(var uParam0, int iParam1)//Position - 0x5DC28
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_698(&(uParam0->f_1735[iParam1 /*206*/]));
	func_697(&(uParam0->f_1735[iParam1 /*206*/]));
}

void func_697(char* sParam0)//Position - 0x5DC5E
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_24 = 12;
	sParam0->f_16 = { Local_54.f_3 };
	sParam0->f_19 = Local_54.f_6;
	sParam0->f_21 = Local_54.f_7;
	sParam0->f_22 = Local_54.f_8;
	sParam0->f_23 = Local_54.f_9;
}

void func_698(var uParam0)//Position - 0x5DCC9
{
	GlobalFunc_6530(uParam0);
	func_700(uParam0);
	func_699(uParam0);
}

void func_699(var uParam0)//Position - 0x5DCE3
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_54.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_700(var uParam0)//Position - 0x5DD3B
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}


void func_702(char* sParam0, var uParam1, struct<3> Param2, float fParam5)//Position - 0x5DD71
{
	int iVar0;
	struct<8> Var1;
	char cVar9[32];
	char cVar17[32];
	
	sParam0->f_8 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, 0f, 0f, fParam5, 2);
	PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sParam0->f_8, 0);
	iVar0 = GlobalFunc_8315();
	StringCopy(&Var1, "triathlon_outro_", 32);
	if (iVar0 == 0)
	{
		StringConCat(&Var1, "michael", 32);
	}
	else if (iVar0 == 1)
	{
		StringConCat(&Var1, "franklin", 32);
	}
	else if (iVar0 == 2)
	{
		StringConCat(&Var1, "trevor", 32);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam1->f_1735[0 /*206*/].f_8);
	TASK::TASK_SYNCHRONIZED_SCENE(uParam1->f_1735[0 /*206*/].f_8, sParam0->f_8, sParam0, &Var1, 1000f, -2f, 2, 0, 1148846080, 0);
	GRAPHICS::FADE_UP_PED_LIGHT(1082130432);
	cVar9 = { Var1 };
	StringConCat(&cVar9, "_cam", 32);
	if (CAM::DOES_CAM_EXIST(uLocal_2545))
	{
		CAM::DESTROY_CAM(uLocal_2545, 0);
	}
	uLocal_2545 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(uLocal_2545, 1);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2545, sParam0->f_8, &cVar9, sParam0);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2545, uLocal_2552, 600, 1, 1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
	cVar17 = { Var1 };
	StringConCat(&cVar17, "_bottle", 32);
	sParam0->f_9 = OBJECT::CREATE_OBJECT(joaat("prop_energy_drink"), Param2, 1, 1, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(sParam0->f_9, sParam0->f_8, &cVar17, sParam0, 1000f, 1090519040, 0, 1148846080);
}






bool func_708()//Position - 0x5E769
{
	return func_709(&Local_1891, 0, 1065353216, 0, 0, 0);
}

int func_709(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x5E781
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	GlobalFunc_7629();
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_35463 = 1;
	if (!uParam0->f_563)
	{
		switch (GlobalFunc_6674(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + GlobalFunc_2259(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * GlobalFunc_2259(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + GlobalFunc_2259((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (GlobalFunc_2259(30f) - GlobalFunc_2259(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		GlobalFunc_778(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_711(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = GlobalFunc_253(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = GlobalFunc_253(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = GlobalFunc_253(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						GlobalFunc_5691(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				GlobalFunc_5691(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = GlobalFunc_253((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = GlobalFunc_253((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = GlobalFunc_253((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = GlobalFunc_253((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				GlobalFunc_778(0);
			}
			return !bVar0;
		}
	}
	GlobalFunc_778(0);
	return 1;
}


void func_711(var uParam0, float fParam1, bool bParam2)//Position - 0x5EEAC
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (GlobalFunc_2258() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				GlobalFunc_726(&(uParam0->f_5));
				GlobalFunc_726(&(uParam0->f_13));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		GlobalFunc_2257();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + GlobalFunc_2259((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * GlobalFunc_2258());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = GlobalFunc_2256(&(uParam0->f_13));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = GlobalFunc_2256(&(uParam0->f_550));
	fVar8 = (((0.119f + 0.05f) / GlobalFunc_2258()) / 2.5f);
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						GlobalFunc_5277((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - GlobalFunc_2259(6f));
	fVar1 = (fVar1 + (GlobalFunc_2259(30f) - GlobalFunc_2259((2f * 2f))));
	fVar11 = (fVar2 - GlobalFunc_2259((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = GlobalFunc_253((fVar11 / (0.6f * GlobalFunc_2259(25f))), 0f, 1f);
		GlobalFunc_2257();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (GlobalFunc_2259((2f - 0.5f)) - 0.001388889f)), fVar6, GlobalFunc_2255(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + GlobalFunc_2259((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar12 = GlobalFunc_253((fVar11 / (0.8f * GlobalFunc_2259(25f))), 0f, 1f);
			GlobalFunc_8253(uParam0, iVar17, (fVar1 + GlobalFunc_2259(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + GlobalFunc_2259(25f));
		iVar17++;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + GlobalFunc_2259(2f));
			fVar12 = GlobalFunc_253((fVar11 / (0.6f * GlobalFunc_2259(25f))), 0f, 1f);
			GlobalFunc_2257();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + GlobalFunc_2259((2f * 0.5f))), fVar6, GlobalFunc_2255(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar12 = GlobalFunc_253((fVar11 / (0.8f * GlobalFunc_2259(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			GlobalFunc_6942(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / GlobalFunc_2258()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / GlobalFunc_2258()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / GlobalFunc_2258()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / GlobalFunc_2258()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(1);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			GlobalFunc_5676(&(uParam0->f_550), fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			GlobalFunc_2257();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + GlobalFunc_2259((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + GlobalFunc_2253(4f)) - 0.006f);
				fVar43 = ((fVar1 + GlobalFunc_2259(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (GlobalFunc_2259(30f) - 2f));
		}
	}
}


















void func_729()//Position - 0x60751
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		Local_54.f_420.f_1[iVar0 /*4*/] = -1;
		iVar0++;
	}
	if (GlobalFunc_226(&(Local_54.f_420.f_65)))
	{
		GlobalFunc_235(&(Local_54.f_420.f_65));
	}
	if (GlobalFunc_226(&(Local_54.f_420.f_68)))
	{
		GlobalFunc_235(&(Local_54.f_420.f_68));
	}
	if (GlobalFunc_226(&(Local_54.f_420.f_71)))
	{
		GlobalFunc_235(&(Local_54.f_420.f_71));
	}
	if (GlobalFunc_226(&(Local_54.f_420.f_74)))
	{
		GlobalFunc_235(&(Local_54.f_420.f_74));
	}
	Local_54.f_420 = -1;
	Local_54.f_420.f_62 = 0;
	Local_54.f_420.f_63 = 0;
	Local_54.f_420.f_64 = 0;
	Local_54.f_420.f_77 = 0;
}

void func_730(int iParam0)//Position - 0x60802
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	iVar0 = 600;
	CAM::SET_CAM_ACTIVE(uLocal_2552, 1);
	iVar7 = GlobalFunc_8315();
	if (*iParam0 == 0)
	{
		if (iVar7 == 1)
		{
			Var1 = { -1340.147f, -1015.264f, 23f };
			Var4 = { 80f, 0f, -160.0018f };
		}
		else if (iVar7 == 0)
		{
			Var1 = { -1341.553f, -1016.514f, 23f };
			Var4 = { 80f, 0f, -66.7842f };
		}
		else if (iVar7 == 2)
		{
			Var1 = { -1340.875f, -1015.028f, 23f };
			Var4 = { 80f, 0.0854f, -133.9209f };
		}
	}
	else if (*iParam0 == 1)
	{
		if (iVar7 == 1)
		{
			Var1 = { 1760.162f, 3904.506f, 50f };
			Var4 = { 80f, 0f, -121.7289f };
		}
		else if (iVar7 == 0)
		{
			Var1 = { 1761.269f, 3901.981f, 50f };
			Var4 = { 80f, 0f, -28.4583f };
		}
		else if (iVar7 == 2)
		{
			Var1 = { 1760.727f, 3903.421f, 50f };
			Var4 = { 80f, 0.161f, -95.6354f };
		}
	}
	else if (iVar7 == 1)
	{
		Var1 = { -2279.956f, 414.1333f, 190f };
		Var4 = { 80f, 0f, 164.7893f };
	}
	else if (iVar7 == 0)
	{
		Var1 = { -2282.259f, 412.3413f, 190f };
		Var4 = { 80f, 0f, -101.946f };
	}
	else if (iVar7 == 2)
	{
		Var1 = { -2280.867f, 413.3051f, 190f };
		Var4 = { 80f, 0.1686f, -175.5375f };
	}
	CAM::SET_CAM_COORD(uLocal_2552, Var1);
	CAM::SET_CAM_ROT(uLocal_2552, Var4, 2);
	GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(SYSTEM::TO_FLOAT(iVar0));
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
}




int func_734(int iParam0, float fParam1, int iParam2)//Position - 0x60B0C
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 0;
	}
	StringCopy(&(Var7[0 /*8*/]), "Location", 32);
	if (iParam0 == 1)
	{
		StringCopy(&(Var0[0 /*6*/]), "TRIRace1", 24);
	}
	else if (iParam0 == 0)
	{
		StringCopy(&(Var0[0 /*6*/]), "TRIRace2", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(&(Var0[0 /*6*/]), "TRIRace3", 24);
	}
	if (GlobalFunc_5284(202, &Var0, &Var7, 1, -1, 1, 0))
	{
		fParam1 = (fParam1 * -1000f);
		GlobalFunc_5768(202, 131, SYSTEM::ROUND(fParam1), 0f, 0);
		GlobalFunc_5768(202, 96, iParam2, 0f, 0);
	}
	return 1;
}







int func_741(var uParam0, var uParam1)//Position - 0x60F75
{
	int iVar0;
	
	if (!HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(0);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) && func_278(67108864))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_MINI_GAME_SOUNDSET", 1);
		func_363(67108864);
		GlobalFunc_810(&(Local_54.f_290));
		GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
		GlobalFunc_813(&(Local_54.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			GlobalFunc_813(&(Local_54.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
			iLocal_2760 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_ONLINE() && !iLocal_2603)
	{
		iLocal_2603 = 1;
		iLocal_2760 = 0;
		GlobalFunc_810(&(Local_54.f_290));
		GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
		GlobalFunc_813(&(Local_54.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
	}
	else if (!PLAYER::IS_PLAYER_ONLINE() && iLocal_2603)
	{
		iLocal_2603 = 0;
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iLocal_2603 && !Global_1835013.f_1)
		{
			func_851(Local_54.f_58);
		}
		if (!func_278(67108864))
		{
			if (((!iLocal_2760 && Global_1835013.f_1) && Global_1835013.f_2) && iLocal_2761)
			{
				iLocal_2760 = 1;
				GlobalFunc_810(&(Local_54.f_290));
				GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_54.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				GlobalFunc_813(&(Local_54.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
			}
		}
		else
		{
			if (!Global_1835013.f_1)
			{
			}
			if (!Global_1835013.f_2)
			{
			}
			if (!iLocal_2761)
			{
			}
		}
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			if (!bLocal_0)
			{
				iVar0 = GlobalFunc_254((4 - uParam0->f_1735[0 /*206*/].f_12), 0, 3);
				func_734(Local_54.f_58, uParam0->f_1735[0 /*206*/].f_13, iVar0);
			}
			Global_1835013.f_2 = 1;
		}
		if (!iLocal_2761)
		{
			iLocal_2761 = GlobalFunc_9181(&uLocal_1454);
			if (iLocal_2761)
			{
				Global_1835388 = 1;
			}
		}
	}
	if (func_278(67108864))
	{
		if (func_837() && !func_836(uParam0, 1))
		{
			func_835(uParam0, 1);
			GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_54.f_290), "FE_HLP3", 2, 202, 1, 1, 0);
			GlobalFunc_813(&(Local_54.f_290), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		}
		else if (!func_837() && func_836(uParam0, 1))
		{
			func_834(uParam0, 1);
			GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_54.f_290), "FE_HLP3", 2, 202, 1, 1, 0);
		}
	}
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 211) && !func_278(67108864)) && iLocal_2760)
	{
		iLocal_2760 = 0;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "LEADERBOARD", "HUD_MINI_GAME_SOUNDSET", 1);
		func_291(67108864);
		GlobalFunc_810(&(Local_54.f_290));
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_54.f_290), "FE_HLP3", 2, 202, 1, 1, 0);
			if (func_837())
			{
				func_835(uParam0, 1);
				GlobalFunc_813(&(Local_54.f_290), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
		}
	}
	GlobalFunc_7512(&(Local_54.f_290), 1128792064, 1, 0, 1, 1065353216);
	if (func_278(67108864))
	{
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			if (GlobalFunc_7112(&(Local_54.f_217), 0))
			{
				func_363(67108864);
				GlobalFunc_5210(&(Local_54.f_290), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_54.f_290), "TRI_CONT", 2, 215, 1, 1, 0);
				GlobalFunc_813(&(Local_54.f_290), "SPR_SCLB", 2, 211, 1, 1, 0);
				iLocal_2760 = 1;
			}
		}
		else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4371))
		{
			func_748(uParam0, uParam1);
		}
		return 0;
	}
	else if (func_743())
	{
		func_708();
		if (!GlobalFunc_747(uLocal_1382, 4))
		{
			GlobalFunc_6594(&uLocal_1382, 4);
			if (uParam0->f_1735[0 /*206*/].f_12 < 4)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_UP", "HUD_MINI_GAME_SOUNDSET", 1);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "RACE_PLACED", "HUD_AWARDS", 1);
			}
		}
	}
	if (GlobalFunc_486())
	{
		SYSTEM::SETTIMERA(2000);
	}
	else if (SYSTEM::TIMERA() > 3000)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || PAD::IS_CONTROL_JUST_PRESSED(2, 215))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	return 0;
}


int func_743()//Position - 0x61401
{
	if (GlobalFunc_747(uLocal_1382, 128))
	{
		return 1;
	}
	if (GlobalFunc_7119(&Local_1891, 0, 0))
	{
		GlobalFunc_6594(&uLocal_1382, 128);
		return 1;
	}
	return 0;
}





void func_748(var uParam0, var uParam1)//Position - 0x61826
{
	func_749(&(uParam0->f_4371), uParam1);
	if (!Global_68505)
	{
		GlobalFunc_778(1);
	}
}

void func_749(var uParam0, var uParam1)//Position - 0x61846
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GlobalFunc_10804(uParam0, &uLocal_1454);
	}
	else
	{
		*uParam0 = GlobalFunc_2407();
	}
}





















































































void func_834(var uParam0, int iParam1)//Position - 0x68D77
{
	uParam0->f_4399 = (uParam0->f_4399 - (uParam0->f_4399 && iParam1));
}

void func_835(var uParam0, int iParam1)//Position - 0x68D92
{
	uParam0->f_4399 = (uParam0->f_4399 || iParam1);
}

bool func_836(var uParam0, int iParam1)//Position - 0x68DA7
{
	return (uParam0->f_4399 && iParam1) != 0;
}

bool func_837()//Position - 0x68DB9
{
	return GlobalFunc_2385(&uLocal_1454);
}










void func_847(var uParam0, int iParam1)//Position - 0x69498
{
	char[] cVar0[8];
	char* sVar1;
	int iVar2;
	
	if (Global_68505)
	{
		GlobalFunc_778(0);
	}
	if (!func_278(65536))
	{
		func_291(65536);
		switch (uParam0->f_1735[iParam1 /*206*/].f_12)
		{
			case 1:
				cVar0 = "SPR_1stpl";
				break;
			
			case 2:
				cVar0 = "SPR_2ndpl";
				break;
			
			case 3:
				cVar0 = "SPR_3rdpl";
				break;
			
			case 4:
				cVar0 = "SPR_4thpl";
				break;
			
			case 5:
				cVar0 = "SPR_5thpl";
				break;
			
			case 6:
				cVar0 = "SPR_6thpl";
				break;
			
			case 7:
				cVar0 = "SPR_7thpl";
				break;
			
			case 8:
				cVar0 = "SPR_8thpl";
				break;
		}
		GlobalFunc_2263(&Local_1891, cVar0, &(Local_54.f_69[Local_54.f_58 /*8*/]), 0);
		GlobalFunc_2262(&Local_1891, 18, "SPR_TIME", "", SYSTEM::ROUND((uParam0->f_1735[iParam1 /*206*/].f_13 * 1000f)), 0, 0, 0);
		sVar1 = "SPR_RESULT";
		if (uParam0->f_1735[iParam1 /*206*/].f_12 >= 1 && uParam0->f_1735[iParam1 /*206*/].f_12 <= 3)
		{
			switch (uParam0->f_1735[iParam1 /*206*/].f_12)
			{
				case 1:
					iVar2 = 3;
					break;
				
				case 2:
					iVar2 = 2;
					break;
				
				case 3:
					iVar2 = 1;
					break;
			}
			func_848(&Local_1891, 1, sVar1, uParam0->f_1735[iParam1 /*206*/].f_12, uParam0->f_12, 1, iVar2);
		}
		func_743();
	}
}

void func_848(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x6960C
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = uParam3;
	uParam0->f_555 = uParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}



void func_851(int iParam0)//Position - 0x696D6
{
	int iVar0;
	struct<8> Var1[2];
	
	if (iParam0 == 1)
	{
		iVar0 = 69;
		StringCopy(&(Var1[0 /*8*/]), "TRIRace1", 32);
		StringCopy(&(Var1[1 /*8*/]), "HUD_MG_TRI_ALA", 32);
	}
	else if (iParam0 == 0)
	{
		iVar0 = 70;
		StringCopy(&(Var1[0 /*8*/]), "TRIRace2", 32);
		StringCopy(&(Var1[1 /*8*/]), "HUD_MG_TRI_VES", 32);
	}
	else if (iParam0 == 2)
	{
		iVar0 = 71;
		StringCopy(&(Var1[0 /*8*/]), "TRIRace3", 32);
		StringCopy(&(Var1[1 /*8*/]), "HUD_MG_TRI_COY", 32);
	}
	GlobalFunc_7120(&uLocal_1454, iVar0, &(Var1[0 /*8*/]), &(Var1[1 /*8*/]), -1, -1, 0, 0);
}





void func_856(bool bParam0)//Position - 0x6DF49
{
	Local_1384 = bParam0;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_857()//Position - 0x6DF5D
{
	func_858();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_858()//Position - 0x6DF6E
{
	Local_1384 = 0;
	Local_1384.f_1 = { 0f, 0f, 0f };
	Local_1384.f_4 = 0;
}


void func_860()//Position - 0x6E003
{
	if (GlobalFunc_5599(24))
	{
		GlobalFunc_8032(24, Local_2604, fLocal_2607);
	}
}



void func_863()//Position - 0x6E09C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	iVar0 = 700;
	if (CAM::DOES_CAM_EXIST(uLocal_2545))
	{
		Var1 = { CAM::GET_CAM_COORD(uLocal_2545) };
		Var4 = { CAM::GET_CAM_ROT(uLocal_2545, 2) };
	}
	uLocal_2552 = CAM::CREATE_CAMERA(26379945, 0);
	CAM::SET_CAM_COORD(uLocal_2552, Var1);
	CAM::SET_CAM_ROT(uLocal_2552, Var4, 2);
	CAM::SET_CAM_FOV(uLocal_2552, 30f);
	CAM::SET_CAM_ACTIVE(uLocal_2552, 1);
	if (CAM::DOES_CAM_EXIST(uLocal_2545))
	{
		CAM::DESTROY_CAM(uLocal_2545, 0);
	}
	Var7 = { Var1 + Vector(20f, 0f, 0f) };
	Var10 = { Var4 + Vector(0f, 0f, 70f) };
	CAM::SET_CAM_PARAMS(uLocal_2552, Var7, Var10, 30f, iVar0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
	GRAPHICS::TRIGGER_SCREENBLUR_FADE_IN(SYSTEM::TO_FLOAT(iVar0));
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
}

int func_864(var uParam0)//Position - 0x6E174
{
	if (!iLocal_804)
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0) > 0.9f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_804 = 1;
			HUD::DISPLAY_RADAR(1);
			return 0;
		}
		else if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			func_438(0);
			HUD::DISPLAY_RADAR(0);
			return 1;
		}
	}
	return 0;
}





void func_869(var uParam0)//Position - 0x6E350
{
	func_871(uParam0);
	GlobalFunc_587(uParam0);
	SYSTEM::SETTIMERA(0);
}


void func_871(var uParam0)//Position - 0x6E371
{
	GlobalFunc_3491(&(uParam0->f_3384));
	GlobalFunc_6537(&(uParam0->f_3384.f_741));
	Local_1891.f_561 = 1;
	func_872(&(uParam0->f_3384));
}

void func_872(var uParam0)//Position - 0x6E39E
{
	GlobalFunc_6536(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	GlobalFunc_6536(&(uParam0->f_316[1 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 127f, 1);
	GlobalFunc_6536(&(uParam0->f_316[2 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[3 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 324f, 1);
	GlobalFunc_6536(&(uParam0->f_316[4 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 351f, 1);
	GlobalFunc_6536(&(uParam0->f_316[5 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 378f, 1);
	GlobalFunc_6536(&(uParam0->f_316[6 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 405f, 1);
	GlobalFunc_6536(&(uParam0->f_316[7 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 432f, 1);
	GlobalFunc_6536(&(uParam0->f_316[8 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 459f, 1);
	GlobalFunc_6536(&(uParam0->f_316[9 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 486f, 1);
	GlobalFunc_6536(&(uParam0->f_316[10 /*2*/]), 257f, 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[11 /*2*/]), 257f, 324f, 1);
	GlobalFunc_6536(&(uParam0->f_316[12 /*2*/]), 257f, 351f, 1);
	GlobalFunc_6536(&(uParam0->f_316[13 /*2*/]), 257f, 378f, 1);
	GlobalFunc_6536(&(uParam0->f_316[14 /*2*/]), 257f, 405f, 1);
	GlobalFunc_6536(&(uParam0->f_316[15 /*2*/]), 257f, 432f, 1);
	GlobalFunc_6536(&(uParam0->f_316[16 /*2*/]), 257f, 459f, 1);
	GlobalFunc_6536(&(uParam0->f_316[17 /*2*/]), 298f, 567f, 1);
	GlobalFunc_6536(&(uParam0->f_316[18 /*2*/]), 384f, 567f, 1);
	GlobalFunc_6536(&(uParam0->f_316[19 /*2*/]), 470f, 567f, 1);
	GlobalFunc_7543(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	GlobalFunc_4630(uParam0[0 /*9*/], 0, 0, 0, 255);
	GlobalFunc_7543(uParam0[1 /*9*/], 384f, 224f, 256f, 256f, 0);
	GlobalFunc_4630(uParam0[1 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(uParam0[2 /*9*/], 495f, 306f, 32f, 32f, 0);
	GlobalFunc_4630(uParam0[2 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(uParam0[3 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	GlobalFunc_4630(uParam0[3 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(uParam0[4 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	GlobalFunc_4630(uParam0[4 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(uParam0[5 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	GlobalFunc_4630(uParam0[5 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	GlobalFunc_4630(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	GlobalFunc_7543(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[1 /*8*/]), 70, 160, 130, 255);
	GlobalFunc_7543(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[2 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[3 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[4 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[5 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[6 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 79f, 1);
	GlobalFunc_3480(&(uParam0->f_420[7 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[8 /*8*/]), 257f, 483f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[8 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[9 /*8*/]), 342f, 483f, 84f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[9 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[10 /*8*/]), 428f, 483f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[10 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[11 /*8*/]), 257f, 564f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[11 /*8*/]), 107, 1);
	GlobalFunc_7543(&(uParam0->f_420[12 /*8*/]), 342f, 564f, 84f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[12 /*8*/]), 108, 1);
	GlobalFunc_7543(&(uParam0->f_420[13 /*8*/]), 428f, 564f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[13 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}






































void func_910(var uParam0)//Position - 0x6F370
{
	int iVar0;
	
	if (!iLocal_1013)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_12)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
			{
				if (iVar0 != 0)
				{
					func_912(uParam0, iVar0);
					PED::SET_PED_KEEP_TASK(uParam0->f_1735[iVar0 /*206*/].f_8, 1);
				}
			}
			iVar0++;
		}
		if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			func_911(uParam0);
		}
		GlobalFunc_8641(&uLocal_800);
		iLocal_1013 = 1;
	}
}

void func_911(var uParam0)//Position - 0x6F3E2
{
	char* sVar0;
	char* sVar1;
	
	switch (uParam0->f_1735[0 /*206*/].f_12)
	{
		case 1:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "MICHAEL_NORMAL";
					break;
				
				case 1:
					sVar0 = "FRANKLIN_NORMAL";
					break;
				
				case 2:
					sVar0 = "TREVOR_NORMAL";
					break;
			}
			func_525(PLAYER::PLAYER_PED_ID(), "RACE_WIN_POSITION_OUT_OF_BREATH", sVar0, 4);
			break;
		
		case 2:
		case 3:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "MICHAEL_NORMAL";
					break;
				
				case 1:
					sVar0 = "FRANKLIN_NORMAL";
					break;
				
				case 2:
					sVar0 = "TREVOR_NORMAL";
					break;
			}
			sVar1 = GlobalFunc_1078(PLAYER::GET_PLAYER_SPRINT_STAMINA_REMAINING(PLAYER::PLAYER_ID()) < 30f, "RACE_NEARLY_WIN_POSITION_OUT_OF_BREATH", "RACE_NEARLY_WIN");
			func_525(PLAYER::PLAYER_PED_ID(), sVar1, sVar0, 4);
			break;
		
		default:
			switch (GlobalFunc_8315())
			{
				case 0:
					sVar0 = "MICHAEL_NORMAL";
					break;
				
				case 1:
					sVar0 = "FRANKLIN_NORMAL";
					break;
				
				case 2:
					sVar0 = "TREVOR_NORMAL";
					break;
			}
			func_525(PLAYER::PLAYER_PED_ID(), "RACE_FINISHED_OUT_OF_BREATH", sVar0, 4);
			break;
	}
}

void func_912(var uParam0, int iParam1)//Position - 0x6F50A
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	char* sVar15;
	float fVar16;
	
	bVar0 = false;
	sVar1 = "mini@triathlon";
	iVar2 = uParam0->f_1735[iParam1 /*206*/].f_11;
	Var3 = { uParam0->f_26[iVar2 /*14*/].f_3 };
	Var6 = { GlobalFunc_4722(Var3, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f) };
	fVar16 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar16 < 0.33f)
	{
		sVar15 = "jog_idle_d";
	}
	else if (fVar16 < 0.66f)
	{
		sVar15 = "jog_idle_e";
	}
	else
	{
		sVar15 = "jog_idle_f";
	}
	if (iVar2 >= (uParam0->f_11 - 1))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
		Var9 = { uParam0->f_26[iVar2 + 1 /*14*/].f_3 };
		Var12 = { GlobalFunc_4722(Var9, 0f, 0f, 10f, 0f) };
		func_504(&Var12);
	}
	if (func_505(uParam0, &(uParam0->f_1735[iParam1 /*206*/])) && iParam1 != 0)
	{
		if (!TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, -2017877118) == 1 && !TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1735[iParam1 /*206*/].f_8, 713668775) == 1)
		{
			if (uParam0->f_1735[iParam1 /*206*/].f_12 == 1)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iParam1 /*206*/].f_8, sVar1, "male_unarmed_b", 2f, -2f, -1, 1, 0f, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iParam1 /*206*/].f_8, sVar1, sVar15, 2f, -2f, -1, 1, 0f, 0, 0, 0);
			}
		}
	}
	else if (iParam1 != 0)
	{
		if (bVar0)
		{
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_1015[iParam1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_1015[iParam1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 2f, 20000, 0.25f, 1, 1193033728);
			TASK::TASK_PLAY_ANIM(0, sVar1, sVar15, 2f, -2f, -1, 1, 0f, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1015[iParam1]);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_1015[iParam1]);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iParam1 /*206*/].f_8))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1735[iParam1 /*206*/].f_8, 0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uLocal_1015[iParam1]));
				TASK::OPEN_SEQUENCE_TASK(&(uLocal_1015[iParam1]));
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var6, 2f, 20000, 0.25f, 1, 1193033728);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var12, 2f, 20000, 0.25f, 1, 1193033728);
				TASK::TASK_PLAY_ANIM(0, sVar1, sVar15, 2f, -2f, -1, 1, 0f, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1015[iParam1]);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1735[iParam1 /*206*/].f_8, uLocal_1015[iParam1]);
			}
			else
			{
				PED::SET_PED_KEEP_TASK(uParam0->f_1735[iParam1 /*206*/].f_8, 1);
			}
		}
	}
}

void func_913(bool bParam0, bool bParam1, int iParam2)//Position - 0x6F7A7
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	GlobalFunc_8380(0, 1, iParam2, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	GlobalFunc_601(23, 0);
}








void func_921(var uParam0)//Position - 0x6F9D6
{
	int iVar0;
	
	GlobalFunc_6877(uParam0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (Local_54 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
	}
	func_291(1024);
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_922(&(uParam0->f_1735[iVar0 /*206*/]));
		if (iVar0 != 0)
		{
			func_662(uParam0, uParam0->f_1735[iVar0 /*206*/].f_8, uParam0->f_1735[iVar0 /*206*/].f_9, uParam0->f_26[uParam0->f_1735[iVar0 /*206*/].f_11 /*14*/].f_3, uParam0->f_26[uParam0->f_1735[iVar0 /*206*/].f_11 /*14*/].f_11, iVar0);
		}
		iVar0++;
	}
}

void func_922(var uParam0)//Position - 0x6FA72
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_23))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
		}
	}
}

int func_923(var uParam0)//Position - 0x6FAD5
{
	switch (iLocal_1394)
	{
		case 0:
			GlobalFunc_8641(uParam0);
			GlobalFunc_2659(&uLocal_1389, 3);
			iLocal_1394 = 1;
			break;
		
		case 1:
			if (GlobalFunc_7084(uParam0, 1f))
			{
				func_924(&uLocal_1389, 1, 0, 1, 3, 1, 0);
				iLocal_1394 = 2;
			}
			break;
		
		case 2:
			if (func_924(&uLocal_1389, 0, 0, 1, 3, 1, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_924(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x6FB47
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	if (!GlobalFunc_226(&(uParam0->f_2)))
	{
		GlobalFunc_6877(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	iVar3 = SYSTEM::FLOOR(GlobalFunc_5182(&(uParam0->f_2)));
	iVar4 = (iVar3 - iParam4);
	bVar5 = false;
	if (!GlobalFunc_747(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !GlobalFunc_747(uParam0->f_1, 1))
		{
			GlobalFunc_6594(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_2659(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !GlobalFunc_747(uParam0->f_1, 2))
		{
			GlobalFunc_6594(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_2659(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_747(uParam0->f_1, 4))
		{
			GlobalFunc_6594(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_2659(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_747(uParam0->f_1, 16))
		{
			if (MISC::ABSF((GlobalFunc_5182(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					GlobalFunc_6594(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !GlobalFunc_747(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			GlobalFunc_6594(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar6, &iVar7, &iVar8, &uVar9);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			GlobalFunc_726("CNTDWN_GO");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar5 = true;
			}
		}
	}
	else if (iVar4 == 1)
	{
		bVar5 = true;
	}
	if ((iParam2 && GlobalFunc_1080()) || iVar3 > 5)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			GlobalFunc_235(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}





void func_929(var uParam0)//Position - 0x6FE70
{
	uParam0->f_11 = uParam0->f_11;
}


void func_931()//Position - 0x6FEA4
{
	if (CAM::DOES_CAM_EXIST(uLocal_2546))
	{
		CAM::DESTROY_CAM(uLocal_2546, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_2547))
	{
		CAM::DESTROY_CAM(uLocal_2547, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_2548))
	{
		CAM::DESTROY_CAM(uLocal_2548, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_2549))
	{
		CAM::DESTROY_CAM(uLocal_2549, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_2550))
	{
		CAM::DESTROY_CAM(uLocal_2550, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_2551))
	{
		CAM::DESTROY_CAM(uLocal_2551, 0);
	}
}

void func_932(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x6FF18
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	struct<3> Var27;
	struct<3> Var30;
	float fVar33;
	struct<3> Var34;
	
	func_291(4096);
	func_950(uParam3);
	if (iLocal_736 == 1)
	{
		Var1 = { 2391.168f, 4283.487f, 32.2649f };
		Var7 = { 7.3105f, 0.0009f, -116.2334f };
		Var4 = { 2391.862f, 4283.146f, 32.3712f };
		Var10 = { 7.731f, 0.0009f, -115.5986f };
	}
	else if (iLocal_736 == 0)
	{
		Var1 = { -1269.5f, -2036.2f, 3.1f };
		Var7 = { 16.2f, 0f, -167.1f };
		Var4 = { -1269.5f, -2036.2f, 3.1f };
		Var10 = { 17.8f, 0f, -165.5f };
	}
	if (!func_278(8192) && iLocal_2602 > 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			if (iLocal_2602 > 8)
			{
				func_291(8192);
				iLocal_2602 = 26;
				if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_220))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_54.f_220))
					{
						ENTITY::DETACH_ENTITY(Local_54.f_220, 1, 1);
					}
				}
				GlobalFunc_4956();
			}
			else
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_291(8192);
				if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_220))
				{
					ENTITY::DETACH_ENTITY(Local_54.f_220, 1, 1);
				}
				GlobalFunc_4956();
				iLocal_2602 = 3;
			}
		}
	}
	switch (iLocal_2602)
	{
		case 0:
			func_947();
			if (CAM::IS_SCREEN_FADED_OUT() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > 1000f)
			{
				STREAMING::LOAD_SCENE(Param0);
				Var13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			HUD::CLEAR_PRINTS();
			if (!GlobalFunc_226(&uLocal_2583))
			{
				GlobalFunc_7777(&uLocal_2583);
			}
			else
			{
				GlobalFunc_6877(&uLocal_2583);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			func_946(1);
			break;
		
		case 1:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1372) >= 0.75f)
			{
				func_946(2);
				if (iLocal_736 == 1)
				{
					Var19 = { 2384.393f, 4317.631f, 49.1586f };
					Var16 = { 2383.047f, 4244.221f, 46.9973f };
					Var22 = { Var16 - Var19 };
					fVar25 = MISC::GET_HEADING_FROM_VECTOR_2D(Var22.x, Var22.f_1);
				}
				else if (iLocal_736 == 0)
				{
					Var19 = { -1254.424f, -2008.62f, 20.453f };
					Var16 = { -1307.857f, -2062.95f, 14.3542f };
					fVar25 = 148.1232f;
				}
				else if (iLocal_736 == 2)
				{
					Var19 = { 1612.566f, 3863.615f, 48.4078f };
					Var16 = { 1551.939f, 3818.152f, 49.4007f };
					Var22 = { Var16 - Var19 };
					fVar25 = MISC::GET_HEADING_FROM_VECTOR_2D(Var22.x, Var22.f_1);
				}
				if (!PED::IS_PED_INJURED(*uParam7) && !ENTITY::IS_ENTITY_DEAD(*uParam6))
				{
					ENTITY::SET_ENTITY_COORDS(*uParam6, Var19, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(*uParam6, fVar25);
					TASK::TASK_HELI_MISSION(*uParam7, *uParam6, 0, 0, Var16, 4, 30f, 3f, fVar25, 1, 1, -1082130432, 0);
				}
			}
			break;
		
		case 2:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1372) >= 1f)
			{
				func_946(3);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_54.f_221))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_54.f_221, ENTITY::GET_ENTITY_COORDS(Local_54.f_221, 1), 2f, 0);
			}
			if (!Local_54.f_288)
			{
				func_942();
				func_941();
				Local_54.f_288 = 1;
			}
			if (!func_278(8192))
			{
				iLocal_2602 = 4;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
				}
				func_940(uParam3);
				iLocal_2602 = 26;
			}
			break;
		
		case 4:
			if (iLocal_736 == 1)
			{
				fVar26 = 0f;
				Var27 = { 2407.528f, 4280.579f, 51.4604f };
				Var30 = { 10.5419f, 0f, 91.9416f };
			}
			else if (iLocal_736 == 0)
			{
				fVar26 = 0f;
				Var27 = { -1261.829f, -2046.983f, 18.0698f };
				Var30 = { 9.3682f, 0.0163f, 45.8717f };
			}
			else if (iLocal_736 == 2)
			{
				fVar26 = 0f;
				Var27 = { 1590.802f, 3819.313f, 45.5862f };
				Var30 = { 14.8126f, 0f, 36.9737f };
			}
			if (iLocal_736 != 2)
			{
				GlobalFunc_159("TRI_INTRO_GOAL", -1);
			}
			if (GlobalFunc_5182(&uLocal_2583) > fVar26)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2552))
				{
					CAM::DESTROY_CAM(uLocal_2552, 0);
				}
				uLocal_2552 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var27, Var30, 50f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_2552, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_220))
				{
					ENTITY::DETACH_ENTITY(Local_54.f_220, 1, 1);
				}
				iLocal_2602 = 5;
			}
			else if (func_278(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
				}
				func_940(uParam3);
				iLocal_2602 = 26;
			}
			break;
		
		case 5:
			if (iLocal_736 == 1)
			{
				fVar26 = 0f;
			}
			else if (iLocal_736 == 0)
			{
				fVar26 = 0f;
			}
			else if (iLocal_736 == 2)
			{
				fVar26 = 0f;
			}
			if (GlobalFunc_5182(&uLocal_2583) > fVar26)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
				}
				func_940(uParam3);
				if (!PED::IS_PED_INJURED(*uParam7) && !ENTITY::IS_ENTITY_DEAD(*uParam6))
				{
					func_946(6);
				}
			}
			else if (func_278(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
				}
				func_940(uParam3);
				iLocal_2602 = 26;
			}
			break;
		
		case 6:
			if (CAM::DOES_CAM_EXIST(*uParam5))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				if (func_278(8192))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
					}
					func_940(uParam3);
					iLocal_2602 = 26;
				}
				else
				{
					if (iLocal_736 != 2)
					{
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2547, uLocal_2552, 6215, 1, 1);
					}
					else
					{
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2547, uLocal_2552, 8125, 1, 1);
					}
					CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
					iLocal_2602 = 7;
				}
			}
			else
			{
				func_363(4096);
			}
			break;
		
		case 7:
			func_939(uParam3);
			if (iLocal_736 != 2)
			{
				if (GlobalFunc_5182(&uLocal_2583) > 6.215f)
				{
					func_946(9);
				}
			}
			else if (GlobalFunc_5182(&uLocal_2583) > 8.125f)
			{
				func_946(9);
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iLocal_736 == 2)
				{
					GlobalFunc_159("TRI_INTRO_IM1", -1);
				}
				iLocal_2602 = 8;
			}
			if (func_278(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
				}
				HUD::CLEAR_HELP(1);
				func_940(uParam3);
				iLocal_2602 = 26;
			}
			break;
		
		case 8:
			if (iLocal_736 == 2)
			{
				fVar0 = 8.125f;
			}
			else
			{
				fVar0 = 6.125f;
			}
			if (GlobalFunc_5182(&uLocal_2583) > fVar0)
			{
				func_946(9);
			}
			if (func_278(8192))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_16, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam3->f_1735[0 /*206*/].f_19);
				}
				HUD::CLEAR_HELP(1);
				func_940(uParam3);
				iLocal_2602 = 26;
			}
			break;
		
		case 9:
			if (CAM::DOES_CAM_EXIST(uLocal_2548))
			{
				if (iLocal_736 == 1)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2549, uLocal_2548, 5000, 0, 0);
				}
				else if (iLocal_736 == 0)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2549, uLocal_2548, 5000, 0, 0);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2549, uLocal_2548, 6000, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*uParam6))
				{
					if (iLocal_736 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(*uParam6, 2386.292f, 4232.555f, 36.912f, 1, 0, 0, 1);
					}
					else if (iLocal_736 == 0)
					{
						ENTITY::SET_ENTITY_COORDS(*uParam6, -1306.708f, -2067.314f, 13.6222f, 1, 0, 0, 1);
					}
				}
				if (iLocal_736 == 2)
				{
					HUD::CLEAR_THIS_PRINT("TRI_INTRO_IM2");
					GlobalFunc_159("TRI_INTRO_IM2", -1);
				}
				else
				{
					HUD::CLEAR_THIS_PRINT("TRI_INTRO_GOAL");
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_159("TRI_INTNS_KM", -1);
					}
					else
					{
						GlobalFunc_159("TRI_INTNS", -1);
					}
				}
				if (iLocal_736 == 2)
				{
					iLocal_2602 = 10;
				}
				else
				{
					iLocal_2602 = 11;
				}
			}
			else
			{
				func_363(4096);
			}
			break;
		
		case 11:
			if (GlobalFunc_5182(&uLocal_2583) > 1.5f)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(*uParam6))
				{
					Var34 = { ENTITY::GET_ENTITY_COORDS(*uParam6, 1) };
					fVar33 = GlobalFunc_830(Var34, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				}
				if (!PED::IS_PED_INJURED(*uParam7) && !ENTITY::IS_ENTITY_DEAD(*uParam6))
				{
					TASK::TASK_HELI_MISSION(*uParam7, *uParam6, 0, 0, Var34, 4, 30f, 3f, fVar33, 1, 1, -1082130432, 0);
				}
				iLocal_2602 = 10;
			}
			break;
		
		case 10:
			if (iLocal_736 == 2)
			{
				fVar0 = 6f;
			}
			else
			{
				fVar0 = 5f;
			}
			if (GlobalFunc_5182(&uLocal_2583) > fVar0)
			{
				if (iLocal_736 == 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), iLocal_1091[2], "idle_a", 8f, -8f, -1, 1, 0.5f, 0, 0, 0);
					}
					func_946(16);
				}
				else
				{
					if (CAM::DOES_CAM_EXIST(uLocal_2546))
					{
						CAM::DESTROY_CAM(uLocal_2546, 0);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_2552))
					{
						CAM::DESTROY_CAM(uLocal_2552, 0);
					}
					CAM::SHAKE_SCRIPT_GLOBAL("WOBBLY_SHAKE", 0.0002f);
					uLocal_2546 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2555, Local_2561, 35f, 0, 2);
					uLocal_2552 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2558, Local_2564, 35f, 0, 2);
					func_946(18);
				}
			}
			break;
		
		case 18:
			if (CAM::DOES_CAM_EXIST(uLocal_2552) && CAM::DOES_CAM_EXIST(uLocal_2546))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2552, uLocal_2546, 6100, 0, 0);
				HUD::CLEAR_THIS_PRINT("TRI_INTNS");
				if (MISC::IS_PC_VERSION())
				{
					if (GlobalFunc_663("TRI_INTNS_KM", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("TRI_INTNS_KM");
					}
				}
				GlobalFunc_159("TRI_NRG_INTRO", -1);
				iLocal_2602 = 19;
				uParam3->f_1735[0 /*206*/].f_12 = 1;
			}
			break;
		
		case 19:
			if (GlobalFunc_5182(&uLocal_2583) > 6f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), iLocal_1091[2], "idle_d", 8f, -8f, -1, 1, 0.05f, 0, 0, 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_2546))
				{
					CAM::DESTROY_CAM(uLocal_2546, 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_2547))
				{
					CAM::DESTROY_CAM(uLocal_2547, 0);
				}
				uLocal_2547 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2570, Local_2576, 20.7f, 0, 2);
				uLocal_2546 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2567, Local_2573, 20.7f, 0, 2);
				func_946(20);
			}
			break;
		
		case 20:
			if (CAM::DOES_CAM_EXIST(uLocal_2552))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2547, uLocal_2546, 4100, 0, 0);
				HUD::CLEAR_THIS_PRINT("TRI_NRG_INTRO");
				GlobalFunc_159("TRI_HP_LOSS", -1);
				iLocal_2602 = 21;
				func_630(uParam3);
			}
			break;
		
		case 21:
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
			if (GlobalFunc_5182(&uLocal_2583) > 4.1f)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_2546))
				{
					CAM::DESTROY_CAM(uLocal_2546, 0);
				}
				uLocal_2546 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var1, Var7, 20.7f, 0, 2);
				func_946(22);
			}
			func_630(uParam3);
			break;
		
		case 22:
			if (CAM::DOES_CAM_EXIST(uLocal_2552))
			{
				CAM::SET_CAM_PARAMS(uLocal_2552, Var4, Var10, 20.7f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2552, uLocal_2546, 4000, 0, 0);
				HUD::CLEAR_THIS_PRINT("TRI_HP_LOSS");
				iLocal_2602 = 23;
			}
			func_630(uParam3);
			break;
		
		case 23:
			if (GlobalFunc_5182(&uLocal_2583) > 4f)
			{
				func_946(26);
			}
			func_630(uParam3);
			break;
		
		case 16:
			if (CAM::DOES_CAM_EXIST(uLocal_2550))
			{
				if (iLocal_736 == 1)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2551, uLocal_2550, 4000, 0, 0);
				}
				else if (iLocal_736 == 0)
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2551, uLocal_2550, 4000, 0, 0);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2551, uLocal_2550, 6000, 0, 0);
				}
				if (iLocal_736 == 2)
				{
					HUD::CLEAR_THIS_PRINT("TRI_INTRO_IM2");
					GlobalFunc_159("TRI_INTRO_IM3", -1);
				}
				iLocal_2602 = 17;
			}
			else
			{
				func_363(4096);
			}
			break;
		
		case 17:
			if (GlobalFunc_5182(&uLocal_2583) > 6f)
			{
				func_946(26);
			}
			break;
		
		case 24:
			iLocal_2602 = 25;
			break;
		
		case 25:
			if (GlobalFunc_5182(&uLocal_2583) > 4f)
			{
				func_946(26);
			}
			break;
		
		case 26:
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) && func_934())
			{
				HUD::CLEAR_HELP(1);
				HUD::DISPLAY_RADAR(1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(900);
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2554, uLocal_2553, 5000, 0, 0);
				func_933(uParam3);
				func_576(uParam7, uParam6);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_363(8192);
				func_363(4096);
			}
			break;
	}
}

void func_933(var uParam0)//Position - 0x70C82
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
			if (iVar0 != 0)
			{
				sVar2 = GlobalFunc_1078(iVar1 == 1, "ig_2_gen_warmup_01", GlobalFunc_1078(iVar1 == 2, "ig_2_gen_warmup_02", GlobalFunc_1078(iVar1 == 3, "ig_2_gen_warmup_03", GlobalFunc_1078(iVar1 == 4, "ig_2_gen_warmup_04", GlobalFunc_1078(iVar1 == 5, "ig_2_gen_warmup_05", GlobalFunc_1078(iVar1 == 6, "ig_2_gen_warmup_06", GlobalFunc_1078(iVar1 == 7, "ig_2_gen_warmup_07", GlobalFunc_1078(iVar1 == 8, "ig_2_gen_warmup_08", GlobalFunc_1078(iVar1 == 9, "ig_2_gen_warmup_09", GlobalFunc_1078(iVar1 == 10, "ig_2_gen_warmup_10", GlobalFunc_1078(iVar1 == 11, "ig_2_gen_warmup_11", GlobalFunc_1078(iVar1 == 12, "ig_2_gen_warmup_12", "ig_2_gen_warmup_13"))))))))))));
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, "mini@triathlon", sVar2, 1000f, -8f, -1, 8320, 0.02f, 0, 0, 0);
			}
			else
			{
				sVar2 = "ig_2_gen_warmup_01";
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_1735[iVar0 /*206*/].f_8);
				if (func_278(8192))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, "mini@triathlon", sVar2, 1000f, -8f, -1, 8320, 0.15f, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, "mini@triathlon", sVar2, 1000f, -8f, -1, 8320, 0.25f, 0, 0, 0);
				}
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_1735[iVar0 /*206*/].f_8, 0, 0);
		}
		iVar0++;
	}
}

int func_934()//Position - 0x70E24
{
	struct<50> Var0;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &Var0, 1);
	switch (GlobalFunc_8315())
	{
		case 0:
			if ((Var0.f_13[3] == 13 && Var0.f_13[4] == 12) && Var0.f_13[6] == 8)
			{
				return 1;
			}
			break;
		
		case 2:
			if ((Var0.f_13[3] == 10 && Var0.f_13[4] == 10) && Var0.f_13[6] == 4)
			{
				return 1;
			}
			break;
		
		case 1:
			if ((Var0.f_13[3] == 5 && Var0.f_13[4] == 5) && Var0.f_13[6] == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}





void func_939(var uParam0)//Position - 0x71865
{
	int iVar0;
	float fVar1;
	char* sVar2;
	int iVar3;
	
	if (!func_278(16384))
	{
		sVar2 = "mini@triathlon";
		iVar0 = 0;
		while (iVar0 < uParam0->f_12)
		{
			iVar3 = uParam0->f_1735[iVar0 /*206*/].f_8;
			if (iVar0 == 0)
			{
				fVar1 = 1f;
			}
			else
			{
				fVar1 = GlobalFunc_512(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= 0.4f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 0.95f), MISC::GET_RANDOM_FLOAT_IN_RANGE(1.1f, 1.3f));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_a", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_a", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_b", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_b", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_c", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_c", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_d", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_d", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_e", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_e", fVar1);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar3, sVar2, "idle_f", 3))
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(iVar3, sVar2, "idle_f", fVar1);
				}
			}
			iVar0++;
		}
	}
	func_291(16384);
}

void func_940(var uParam0)//Position - 0x719BF
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			if (iVar0 != 0)
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, iLocal_1091[2], "idle_f", 8f, -8f, -1, 1, fVar1, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(uParam0->f_1735[iVar0 /*206*/].f_8, iLocal_1091[2], "idle_a", 8f, -8f, -1, 1, fVar1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_941()//Position - 0x71A5A
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	if (iVar0 == 0)
	{
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 7, 0, false);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 22, 0, false);
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 2, 0, false);
	}
	else if (iVar0 == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 22, 0, false);
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1, 5, 0, false);
	}
}

void func_942()//Position - 0x71AD9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(Local_54.f_222), 1);
	func_943(PLAYER::PLAYER_PED_ID(), 0);
	Local_54.f_287 = 0;
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 2);
	iVar1 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 2);
	iVar2 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1);
	iVar3 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::KNOCK_OFF_PED_PROP(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 1);
			PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_8315() == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 13, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 12, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 8, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, iVar2, iVar3, 0);
			}
			else if (GlobalFunc_8315() == 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 10, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 10, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, iVar2, iVar3, 0);
			}
			else if (GlobalFunc_8315() == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, iVar0, iVar1, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 1, iVar2, iVar3, 0);
			}
		}
	}
}

void func_943(int iParam0, int iParam1)//Position - 0x71C3B
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11154(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_102(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}



void func_946(int iParam0)//Position - 0x7245A
{
	GlobalFunc_6877(&uLocal_2583);
	iLocal_2602 = iParam0;
}

void func_947()//Position - 0x7246E
{
	switch (iLocal_736)
	{
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_2546))
			{
				uLocal_2546 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2405.776f, 4282.395f, 35.6522f, -1.3334f, 0f, 95.4363f, 30.3f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2547))
			{
				uLocal_2547 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2405.582f, 4280.512f, 33.9315f, 5.2742f, 0f, 91.9419f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2548))
			{
				uLocal_2548 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2386.636f, 4295.478f, 32.2856f, -1.1846f, 0.6029f, -150.5774f, 24.0182f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2549))
			{
				uLocal_2549 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2386.85f, 4295.096f, 32.2766f, -1.1846f, 0.6029f, -150.5774f, 24.0182f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2550))
			{
				uLocal_2550 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2403.025f, 4281.165f, 33.5233f, -5.6822f, 0f, 95.0976f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2551))
			{
				uLocal_2551 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2402.975f, 4281.742f, 33.5233f, -5.6822f, 0f, 95.0976f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2553))
			{
				uLocal_2553 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2398.089f, 4282.638f, 33.2085f, -6.7472f, 0f, 99.2434f, 40.01f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2554))
			{
				uLocal_2554 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2397.45f, 4282.561f, 33.1346f, -5.617f, 0f, 98.3052f, 40.01f, 0, 2);
			}
			Local_2555 = { 2389.727f, 4251.562f, 40.2787f };
			Local_2561 = { -20.559f, 0.6028f, -3.2381f };
			Local_2558 = { 2405.371f, 4256.757f, 40.7256f };
			Local_2564 = { -14.5943f, 0.6248f, 41.4011f };
			Local_2567 = { 2396.347f, 4271.725f, 32.4817f };
			Local_2573 = { 2.6718f, 0f, 3.2264f };
			Local_2570 = { 2396.292f, 4272.705f, 32.5122f };
			Local_2576 = { 2.0511f, 0f, 3.2264f };
			if (!CAM::DOES_CAM_EXIST(uLocal_2552))
			{
				uLocal_2552 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2555, Local_2561, 50f, 0, 2);
			}
			break;
		
		case 0:
			if (!CAM::DOES_CAM_EXIST(uLocal_2546))
			{
				uLocal_2546 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1260.5f, -2048.5f, 15.4f, 16.4f, 0f, 45.2f, 30.3f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2547))
			{
				uLocal_2547 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1261.45f, -2047.355f, 7.0256f, -2.7528f, 0.0163f, 45.8717f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2548))
			{
				uLocal_2548 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1261.422f, -2022.132f, 3.0495f, 5.1381f, 0f, 147.5967f, 33.6646f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2549))
			{
				uLocal_2549 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1261.781f, -2022.698f, 3.1098f, 5.1381f, 0f, 147.5967f, 33.6646f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2550))
			{
				uLocal_2550 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1266.98f, -2046.6f, 4.84f, -5.35f, 0f, 10.12f, 25.11f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2551))
			{
				uLocal_2551 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1266.49f, -2046.57f, 4.84f, -5.35f, 0f, 12.21f, 25.11f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2553))
			{
				uLocal_2553 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1265.701f, -2041.568f, 4.6619f, -5.0125f, 0f, 50.3428f, 40.0349f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2554))
			{
				uLocal_2554 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1266.161f, -2041.19f, 4.6097f, -5.0125f, 0f, 50.3428f, 40.0349f, 0, 2);
			}
			Local_2555 = { -1300f, -2059.4f, 12.3f };
			Local_2561 = { -16.4f, 0f, -52.8f };
			Local_2558 = { -1287.3f, -2066.5f, 10.7f };
			Local_2564 = { -10f, 0f, -15.2f };
			Local_2567 = { -1277.9f, -2047.9f, 4.3f };
			Local_2573 = { -2.3f, 0f, -56.3f };
			Local_2570 = { -1276.8f, -2046.7f, 4.3f };
			Local_2576 = { -2.3f, 0f, -56.3f };
			if (!CAM::DOES_CAM_EXIST(uLocal_2552))
			{
				uLocal_2552 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2555, Local_2561, 50f, 0, 2);
			}
			break;
		
		case 2:
			if (!CAM::DOES_CAM_EXIST(uLocal_2546))
			{
				uLocal_2546 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1589.068f, 3834.821f, 54.2202f, 5.3341f, -0.0003f, 71.4501f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2547))
			{
				uLocal_2547 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1590.123f, 3820.216f, 34.9406f, 5.1632f, 0f, 36.9737f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2548))
			{
				uLocal_2548 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1566.333f, 3823.054f, 32.711f, -1.062f, 0f, -63.9708f, 32.5918f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2549))
			{
				uLocal_2549 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1567.128f, 3823.441f, 32.6946f, -1.062f, 0f, -63.9708f, 32.5918f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2550))
			{
				uLocal_2550 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1585.411f, 3832.321f, 33.276f, 6.1917f, 0f, -152.8082f, 28.6127f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2551))
			{
				uLocal_2551 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1585.703f, 3831.754f, 33.346f, 6.7344f, 0f, -152.8082f, 28.6127f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2553))
			{
				uLocal_2553 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1589.515f, 3827.824f, 34.0188f, -5.4725f, 0f, 51.0998f, 40.0333f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_2554))
			{
				uLocal_2554 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1588.853f, 3828.359f, 33.9373f, -5.4725f, 0f, 51.0998f, 40.0333f, 0, 2);
			}
			break;
	}
}



void func_950(var uParam0)//Position - 0x72B92
{
	char* sVar0;
	
	if (!GlobalFunc_226(&uLocal_2586))
	{
		GlobalFunc_6877(&uLocal_2586);
	}
	if (!GlobalFunc_226(&uLocal_2589))
	{
		GlobalFunc_6877(&uLocal_2589);
	}
	func_509(uParam0, 4f, 6f);
	if (GlobalFunc_7084(&uLocal_2586, fLocal_2580))
	{
		iLocal_2582 = uParam0->f_1735[MISC::GET_RANDOM_INT_IN_RANGE(1, 8) /*206*/].f_8;
		if ((iLocal_2579 % 2) == 0)
		{
			if (GlobalFunc_745())
			{
				sVar0 = "A_M_Y_TRIATHLON_01_MINI_01";
			}
			else
			{
				sVar0 = "A_M_Y_TRIATHLON_01_MINI_02";
			}
		}
		else if (GlobalFunc_745())
		{
			sVar0 = "A_M_Y_TRIATHLON_01_MINI_03";
		}
		else
		{
			sVar0 = "A_M_Y_TRIATHLON_01_MINI_04";
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2582) && !PED::IS_PED_INJURED(iLocal_2582))
		{
			iLocal_2579++;
			fLocal_2580 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 10f);
			GlobalFunc_5653(iLocal_2582, "TRIATHLON_WARMUP", sVar0, 11);
			GlobalFunc_6877(&uLocal_2586);
		}
	}
}


void func_952(int iParam0, int iParam1, int iParam2)//Position - 0x72C86
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	GlobalFunc_6685(0);
	GlobalFunc_8380(1, 1, iParam2, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	GlobalFunc_601(23, 1);
}


void func_954(var uParam0)//Position - 0x72CF6
{
	func_970(uParam0);
	func_969(uParam0);
	func_968(uParam0);
	func_967();
	func_966(uParam0);
	func_965(uParam0);
	func_956(uParam0);
	func_955(uParam0);
}

void func_955(var uParam0)//Position - 0x72D2C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			func_493(&(uParam0->f_1735[iVar0 /*206*/]), 8);
		}
		iVar0++;
	}
}

void func_956(var uParam0)//Position - 0x72D5E
{
	func_961(uParam0);
	func_960();
	func_957(uParam0);
}

void func_957(var uParam0)//Position - 0x72D76
{
	func_959(uParam0);
	func_958(uParam0);
}

void func_958(var uParam0)//Position - 0x72D8A
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[0 /*206*/].f_9))
	{
		Local_1069.f_6 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_1735[0 /*206*/].f_9);
	}
	else
	{
		Local_1069.f_6 = 18.33f;
	}
}

void func_959(var uParam0)//Position - 0x72DC4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		uLocal_1051[iVar0] = uParam0->f_1735[iVar0 /*206*/].f_190;
		uLocal_1060[iVar0] = uParam0->f_1735[iVar0 /*206*/].f_191;
		iVar0++;
	}
}

void func_960()//Position - 0x72E05
{
	Local_1069 = 1.2f;
	Local_1069.f_1 = 2.8f;
	Local_1069.f_2 = 0.5f;
	Local_1069.f_3 = 2.8f;
	Local_1069.f_4 = 9.5f;
	Local_1069.f_5 = 28f;
}

void func_961(var uParam0)//Position - 0x72E47
{
	func_964(uParam0);
	func_963(uParam0);
	func_962(uParam0);
}

void func_962(var uParam0)//Position - 0x72E61
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			switch (iVar0)
			{
				case 0:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 0f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 0f;
					break;
				
				case 1:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				
				case 2:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 2.7f;
					break;
				
				case 3:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				
				case 4:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2.5f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				
				case 5:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2.2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 2.7f;
					break;
				
				case 6:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				
				case 7:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				
				default:
					uParam0->f_1735[iVar0 /*206*/].f_190 = 2f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 3f;
					break;
				}
		}
		iVar0++;
	}
}

void func_963(var uParam0)//Position - 0x72FCA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		uParam0->f_1735[iVar0 /*206*/].f_194 = 18.32f;
		uParam0->f_1735[iVar0 /*206*/].f_195 = 18.32f;
		iVar0++;
	}
}

void func_964(var uParam0)//Position - 0x73007
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			switch (iVar0)
			{
				case 0:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 0f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 0f;
					break;
				
				case 1:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.2f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.3f;
					break;
				
				case 2:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.3f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.2f;
					break;
				
				case 3:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.5f;
					break;
				
				case 4:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 2.5f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 3f;
					break;
				
				case 5:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 3f;
					break;
				
				case 6:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.1f;
					break;
				
				case 7:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.1f;
					uParam0->f_1735[iVar0 /*206*/].f_191 = 2.3f;
					break;
				
				default:
					uParam0->f_1735[iVar0 /*206*/].f_192 = 1.3f;
					uParam0->f_1735[iVar0 /*206*/].f_193 = 2.5f;
					break;
				}
		}
		iVar0++;
	}
}

void func_965(var uParam0)//Position - 0x73198
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			iLocal_1033[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_966(var uParam0)//Position - 0x731C3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		uParam0->f_1735[iVar0 /*206*/].f_198 = 0;
		GlobalFunc_7260(&(uParam0->f_1735[iVar0 /*206*/].f_199), 15f);
		iVar0++;
	}
}

void func_967()//Position - 0x73200
{
	iLocal_1076 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iLocal_1077 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
	iLocal_1078 = MISC::GET_RANDOM_INT_IN_RANGE(2, 5);
	iLocal_1079 = 0;
	iLocal_1080 = 0;
	iLocal_1081 = 0;
}

void func_968(var uParam0)//Position - 0x7322F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			if (iVar0 != 0)
			{
				PED::SET_PED_DIES_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8, 0);
			}
			PED::SET_PED_DIES_INSTANTLY_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8, 0);
			PED::SET_PED_MAX_TIME_IN_WATER(uParam0->f_1735[iVar0 /*206*/].f_8, 600f);
		}
		iVar0++;
	}
}

void func_969(var uParam0)//Position - 0x73299
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		switch (iLocal_736)
		{
			case 1:
				uParam0->f_1735[iVar0 /*206*/].f_205 = "Tri1_Bk_0";
				break;
			
			case 0:
				uParam0->f_1735[iVar0 /*206*/].f_205 = "Tri2_Bk_0";
				break;
			
			case 2:
				uParam0->f_1735[iVar0 /*206*/].f_205 = sLocal_1045;
				if (iVar0 == 0)
				{
					uParam0->f_1735[0 /*206*/].f_205 = sLocal_1049;
				}
				break;
		}
		iVar0++;
	}
}

void func_970(var uParam0)//Position - 0x7331A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar0 /*206*/].f_8))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1735[iVar0 /*206*/].f_8, 1);
		}
		iVar0++;
	}
}

void func_971(var uParam0, int iParam1)//Position - 0x7335A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	struct<3> Var27;
	
	if (uParam0->f_12 < iParam1)
	{
		iParam1 = uParam0->f_12;
	}
	iVar0 = (uParam0->f_12 / iParam1);
	bVar1 = false;
	fVar5 = -2f;
	fVar6 = 7f;
	if (iLocal_736 == 1)
	{
		fVar5 = -4f;
		fVar6 = 8f;
	}
	else if (iLocal_736 == 0)
	{
		fVar5 = -2.5f;
		fVar6 = 7f;
	}
	else if (iLocal_736 == 2)
	{
		fVar5 = -4f;
		fVar6 = 8f;
	}
	fVar7 = ((fVar5 * IntToFloat((iVar0 - 1))) / 2f);
	iVar2 = 0;
	while (iVar2 < uParam0->f_11)
	{
		if (uParam0->f_26[iVar2 /*14*/].f_11 == 6)
		{
			Var20 = { uParam0->f_26[iVar2 + 1 /*14*/].f_3 - uParam0->f_26[iVar2 /*14*/].f_3 };
			iVar23 = MISC::GET_HEADING_FROM_VECTOR_2D(Var20.x, Var20.f_1);
			Var11 = { uParam0->f_26[iVar2 /*14*/].f_3 };
			if (iLocal_736 == 1)
			{
				Var14 = { fVar5, -3f, 0f };
			}
			else if (iLocal_736 == 0)
			{
				Var14 = { fVar5, -3f, 0f };
			}
			else if (iLocal_736 == 2)
			{
				Var14 = { fVar5, -3f, 0f };
			}
			Var17 = { 0f, fVar6, 0f };
			iVar4 = 0;
			iVar3 = 0;
			while (iVar3 < uParam0->f_12)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1735[iVar3 /*206*/].f_9))
				{
					if (bVar1)
					{
						iVar24 = (iVar3 - iVar0);
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iVar24 /*206*/].f_9, Var17) };
						bVar1 = false;
						iVar4 = 0;
					}
					if (iVar4 > 0)
					{
						Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[(iVar3 - 1) /*206*/].f_9, Var14) };
					}
					else if (iVar3 > iVar4)
					{
						Var8 = { Var11 };
					}
					else
					{
						Var8 = { GlobalFunc_4722(Var11, iVar23, fVar7, 0f, 0f) };
					}
					Var8.f_2 = uParam0->f_26[iVar2 /*14*/].f_3.f_2;
					iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
					if (iVar26 > 1 && iVar26 < 33)
					{
						iVar25 = joaat("tribike");
					}
					else if (iVar26 > 33 && iVar26 < 66)
					{
						iVar25 = joaat("tribike2");
					}
					else
					{
						iVar25 = joaat("tribike3");
					}
					uParam0->f_1735[iVar3 /*206*/].f_9 = VEHICLE::CREATE_VEHICLE(iVar25, Var8, iVar23, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_1735[iVar3 /*206*/].f_9);
					iVar4++;
					if ((iVar3 + 1 % iVar0) == 0)
					{
						bVar1 = true;
					}
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < uParam0->f_12)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1735[iVar3 /*206*/].f_9))
				{
					if (iLocal_736 == 1)
					{
						Var27 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, 1f, 0f, 0f) };
						ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, Var27, 1, 0, 0, 1);
					}
					else if (iLocal_736 == 0)
					{
					}
					else if (iLocal_736 == 2)
					{
						Var27 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, 3.6f, 0f, 0f) };
						ENTITY::SET_ENTITY_COORDS(uParam0->f_1735[iVar3 /*206*/].f_9, Var27, 1, 0, 0, 1);
					}
				}
				iVar3++;
			}
			return;
		}
		iVar2++;
	}
}

int func_972(var uParam0)//Position - 0x7364B
{
	switch (uParam0->f_24)
	{
		case 0:
			GlobalFunc_7632(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			uParam0->f_4372 = GlobalFunc_816();
			switch (Local_54)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
					break;
				
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", 0);
					break;
				
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", 0);
					break;
			}
			uParam0->f_24 = 1;
			break;
		
		case 1:
			func_988(uParam0);
			GlobalFunc_1092(&uLocal_1389);
			uParam0->f_24 = 2;
			break;
		
		case 2:
			if (func_983(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (GlobalFunc_1088(&uLocal_1389))
					{
						switch (Local_54)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
								{
									uParam0->f_24 = 3;
								}
								break;
							
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_24 = 3;
								}
								break;
							
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon"))
								{
									uParam0->f_24 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			func_977(uParam0);
			func_973(uParam0);
			uParam0->f_24 = 4;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_973(var uParam0)//Position - 0x737A6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!func_974(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_974(var uParam0, int iParam1)//Position - 0x737D7
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_975(&(uParam0->f_1735[iParam1 /*206*/]), 0.5f);
}

int func_975(var uParam0, float fParam1)//Position - 0x73806
{
	if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
	{
		if (!func_976(&(uParam0->f_10), uParam0->f_8, fParam1))
		{
			return 0;
		}
	}
	return 1;
}

int func_976(var uParam0, int iParam1, float fParam2)//Position - 0x73830
{
	GlobalFunc_703(uParam0);
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(iParam1);
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		return 0;
	}
	HUD::SET_BLIP_COLOUR(*uParam0, 3);
	HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("OFF_OPP");
	HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	HUD::SET_BLIP_SCALE(*uParam0, uParam2);
	return 1;
}

int func_977(var uParam0)//Position - 0x73885
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (iVar0 != 0)
		{
			if (!func_978(uParam0, iVar0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_978(var uParam0, int iParam1)//Position - 0x738BC
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_979(&(uParam0->f_1735[iParam1 /*206*/]), 1);
	}
	return func_979(&(uParam0->f_1735[iParam1 /*206*/]), 0);
}

int func_979(var uParam0, bool bParam1)//Position - 0x73901
{
	if (!func_982(uParam0, bParam1) || !func_980(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_980(var uParam0)//Position - 0x73927
{
	char cVar0[16];
	
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_21, uParam0->f_22, -1, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_21, uParam0->f_22, uParam0->f_16, uParam0->f_19, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
		PED::SET_PED_LEG_IK_MODE(uParam0->f_8, 1);
		PED::SET_PED_STEERS_AROUND_OBJECTS(uParam0->f_8, 0);
	}
	if (uParam0->f_21 <= 3)
	{
	}
	else
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		if (func_981())
		{
			PED::SET_PED_HELMET(uParam0->f_8, 1);
			PED::GIVE_PED_HELMET(uParam0->f_8, 1, 4096, -1);
		}
	}
	return 1;
}

int func_981()//Position - 0x73A7A
{
	if (Local_54 != 1)
	{
		return 0;
	}
	if (Local_54.f_58 == 1 || Local_54.f_58 == 4)
	{
		return 0;
	}
	return 1;
}

int func_982(var uParam0, bool bParam1)//Position - 0x73AA6
{
	int iVar0;
	struct<3> Var1;
	char cVar4[16];
	
	if (bParam1)
	{
		if (Local_54 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
					}
				}
				else
				{
					if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
					{
						ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
					}
					if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
					{
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_8, 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_8, 0);
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_19);
		if (Local_54 == 0)
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
		}
	}
	else
	{
		if (uParam0->f_23 == 0)
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			return 0;
		}
	}
	if (Local_54 != 0)
	{
		if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) <= 10f)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9);
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) > 1.5f)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1) };
				Var1.f_2 = (Var1.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) + 1.5f));
				ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Var1, 1, 0, 0, 1);
			}
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
	if (Local_54 == 0)
	{
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar4, {*uParam0}, 4);
	StringConCat(&cVar4, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar4);
	if (uParam0->f_21 <= 3)
	{
		Local_54.f_1 = uParam0->f_9;
		VEHICLE::_0xC50CE861B55EAB8B(uParam0->f_9, 0);
	}
	return 1;
}

int func_983(var uParam0)//Position - 0x73D1A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		if (!func_984(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_984(var uParam0, int iParam1)//Position - 0x73D4B
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_985(&(uParam0->f_1735[iParam1 /*206*/]));
}

int func_985(var uParam0)//Position - 0x73D75
{
	if (!func_987(uParam0) || !func_986(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_986(var uParam0)//Position - 0x73D99
{
	if (uParam0->f_23 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_23);
}

bool func_987(var uParam0)//Position - 0x73DB5
{
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

void func_988(var uParam0)//Position - 0x73DD1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_989(uParam0, iVar0);
		iVar0++;
	}
}

void func_989(var uParam0, int iParam1)//Position - 0x73DF6
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_990(&(uParam0->f_1735[iParam1 /*206*/]));
}

void func_990(var uParam0)//Position - 0x73E1F
{
	GlobalFunc_4629(uParam0);
	func_991(uParam0);
}

void func_991(var uParam0)//Position - 0x73E33
{
	if (uParam0->f_23 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_23);
}



void func_994()//Position - 0x73E7A
{
	func_1021();
	func_1008();
	func_1007();
	func_1003();
	func_1002();
	func_1001();
	func_1000();
	func_999();
	func_998();
	switch (iLocal_736)
	{
		case 0:
			if (!STREAMING::IS_IPL_ACTIVE("AP1_04_TriAf01"))
			{
				STREAMING::REQUEST_IPL("AP1_04_TriAf01");
			}
			if (!STREAMING::IS_IPL_ACTIVE("VB_08_TriAf01"))
			{
				STREAMING::REQUEST_IPL("VB_08_TriAf01");
			}
			break;
		
		case 1:
			if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
			{
				STREAMING::REQUEST_IPL("CS2_06_TriAf02");
			}
			if (!STREAMING::IS_IPL_ACTIVE("CS4_08_TriAf02"))
			{
				STREAMING::REQUEST_IPL("CS4_08_TriAf02");
			}
			break;
		
		case 2:
			if (!STREAMING::IS_IPL_ACTIVE("CS4_04_TriAf03"))
			{
				STREAMING::REQUEST_IPL("CS4_04_TriAf03");
			}
			if (!STREAMING::IS_IPL_ACTIVE("CH1_07_TriAf03"))
			{
				STREAMING::REQUEST_IPL("CH1_07_TriAf03");
			}
			break;
	}
	func_995();
	iLocal_1288 = 0;
}

void func_995()//Position - 0x73F55
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	
	iVar0 = 0;
	while (iVar0 < Local_54.f_414)
	{
		func_997(iLocal_736, iVar0, &Var1, &Var4, &uVar7);
		if (!GlobalFunc_105(Var1))
		{
			Local_54.f_414[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Var1, Var4, uVar7, 0, 7);
		}
		iVar0++;
	}
}


void func_997(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x73FD1
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1285.288f, -2039.943f, 1.60045f };
					*uParam3 = { 4f, 10.2f, 10f };
					*uParam4 = 2.3168f;
					break;
				
				case 1:
					*uParam2 = { -1268.667f, -2024.78f, 1.5678f };
					*uParam3 = { 4f, 10.2f, 10f };
					*uParam4 = 2.4f;
					break;
				
				case 2:
					*uParam2 = { -1227.085f, -2053.458f, 12.98837f };
					*uParam3 = { 5f, 14f, 10f };
					*uParam4 = 2.6f;
					break;
				
				case 3:
					*uParam2 = { -1210.865f, -2052.289f, 13f };
					*uParam3 = { 1.96f, 3f, 10f };
					*uParam4 = 2.865f;
					break;
				
				case 4:
					*uParam2 = { -1215.452f, -2065.881f, 13f };
					*uParam3 = { 1.63f, 2.9f, 10f };
					*uParam4 = 2.685f;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2384.317f, 4268.876f, 30.44363f };
					*uParam3 = { 4f, 10f, 10f };
					*uParam4 = 6.047f;
					break;
				
				case 1:
					*uParam2 = { 2384.975f, 4289.719f, 30.32816f };
					*uParam3 = { 4f, 10f, 10f };
					*uParam4 = 3.238f;
					break;
				
				case 2:
					*uParam2 = { 2436.907f, 4282.85f, 35.5872f };
					*uParam3 = { 4.5f, 13f, 10f };
					*uParam4 = 3.019f;
					break;
				
				case 3:
					*uParam2 = { 2411.25f, 4298.006f, 34.98311f };
					*uParam3 = { 2.1f, 3.2f, 10f };
					*uParam4 = 1.19f;
					break;
				
				case 4:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = { 1.63f, 2.9f, 0f };
					*uParam4 = 2.685f;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1568.879f, 3829.782f, 30.95098f };
					*uParam3 = { 4f, 9.9f, 10f };
					*uParam4 = 2.107f;
					break;
				
				case 1:
					*uParam2 = { 1586.192f, 3842.765f, 30.538f };
					*uParam3 = { 4f, 9.9f, 10f };
					*uParam4 = 2.295f;
					break;
				
				case 2:
					*uParam2 = { 1594.002f, 3810.718f, 33.55904f };
					*uParam3 = { 4f, 12f, 10f };
					*uParam4 = 2.251f;
					break;
				
				case 3:
					*uParam2 = { 1604.679f, 3828.308f, 33.82485f };
					*uParam3 = { 1.96f, 3f, 10f };
					*uParam4 = 0.876f;
					break;
				
				case 4:
					*uParam2 = { 1607.135f, 3824.388f, 33.06039f };
					*uParam3 = { 1.63f, 2.9f, 0f };
					*uParam4 = 0f;
					break;
			}
			break;
	}
}

void func_998()//Position - 0x74318
{
	Local_814.f_168 = 0f;
}

void func_999()//Position - 0x74326
{
	iLocal_789 = 0;
	iLocal_803 = 1;
	iLocal_804 = 0;
}

void func_1000()//Position - 0x7433A
{
	iLocal_743 = 0;
	iLocal_7233 = 0;
}

void func_1001()//Position - 0x7434A
{
	iLocal_783 = 0;
	iLocal_784 = 0;
	iLocal_785 = 0;
	iLocal_786 = 0;
	iLocal_787 = 0;
	iLocal_788 = 0;
}

void func_1002()//Position - 0x7436A
{
	iLocal_738 = 0;
	iLocal_739 = 0;
	iLocal_740 = 0;
}

void func_1003()//Position - 0x7437E
{
	iLocal_1358 = -1;
	iLocal_1284 = -1;
	iLocal_751 = 0;
	func_1004();
}

void func_1004()//Position - 0x74396
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = GlobalFunc_8315();
	iVar1 = GlobalFunc_7717(iVar0, 1, -1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar1) / 100f);
	fVar3 = GlobalFunc_551(1f, 2f, fVar2);
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	if (iLocal_736 != 2)
	{
		iVar4 = SYSTEM::FLOOR((30000f * fVar3));
		Local_752 = iVar4;
		Local_752.f_1 = iVar4;
	}
	else
	{
		iVar4 = SYSTEM::FLOOR((200000f * fVar3));
		Local_752 = iVar4;
		Local_752.f_1 = iVar4;
	}
	Local_752.f_2 = 9;
	Local_752.f_12 = 0;
}



void func_1007()//Position - 0x7467B
{
	iLocal_748 = -1;
	iLocal_749 = 1;
	iLocal_750 = 1;
}

void func_1008()//Position - 0x7468F
{
	int iVar0;
	
	func_694(&Local_2762);
	switch (Local_54.f_58)
	{
		case 1:
			func_1020(&Local_2762);
			break;
		
		case 0:
			func_1019(&Local_2762);
			break;
		
		case 2:
			func_1010(&Local_2762);
			break;
	}
	iVar0 = 0;
	while (iVar0 < Local_2762.f_11)
	{
		func_1009(&(Local_2762.f_26[iVar0 /*14*/]), 4);
		iVar0++;
	}
}

void func_1009(var uParam0, int iParam1)//Position - 0x746FB
{
	GlobalFunc_6594(&(uParam0->f_12), iParam1);
}

void func_1010(var uParam0)//Position - 0x7470D
{
	func_694(uParam0);
	uParam0->f_11 = 121;
	uParam0->f_4394 = GlobalFunc_2280(1576.181f, 3820.501f, 36.0762f, 1592.272f, 3850.612f, 30.1675f);
	func_1016(&(uParam0->f_26[0 /*14*/]), 1541.59f, 3865.624f, 30f, 28.5097f, 5, 1);
	func_1016(&(uParam0->f_26[1 /*14*/]), 1396.551f, 3892.969f, 29.7452f, 10.25f, 5, 1);
	func_1016(&(uParam0->f_26[2 /*14*/]), 1138.21f, 3976.046f, 29.447f, 10.25f, 5, 1);
	func_1016(&(uParam0->f_26[3 /*14*/]), 712.9704f, 4066.695f, 29.7212f, 10.25f, 5, 1);
	func_1016(&(uParam0->f_26[4 /*14*/]), 255.5541f, 4208.643f, 29.5551f, 10.25f, 5, 1);
	func_1016(&(uParam0->f_26[5 /*14*/]), -45.4109f, 4207.424f, 29.7083f, 10.25f, 5, 1);
	func_1016(&(uParam0->f_26[6 /*14*/]), -143.3027f, 4126.344f, 29.7861f, 10.25f, 5, 1);
	func_1016(&(uParam0->f_26[7 /*14*/]), -190.1055f, 4149.486f, 32.7154f, 8.5f, 9, 1);
	func_1016(&(uParam0->f_26[8 /*14*/]), -220.9243f, 4160.343f, 40.7059f, 30f, 6, 1);
	func_1016(&(uParam0->f_26[9 /*14*/]), -244.2599f, 4080.055f, 35.5961f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[10 /*14*/]), -154.7997f, 3654.72f, 44.726f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[11 /*14*/]), 98.6574f, 3576.42f, 38.7147f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[12 /*14*/]), 212.3227f, 3375.498f, 37.9173f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[13 /*14*/]), 216.3569f, 3225.678f, 41.3119f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[14 /*14*/]), 206.4746f, 2951.859f, 42.506f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[15 /*14*/]), 35.7779f, 2839.554f, 54.3913f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[16 /*14*/]), -3.1643f, 2787.964f, 56.814f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[17 /*14*/]), 295.0326f, 2608.461f, 43.5912f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[18 /*14*/]), 714.5671f, 2264.617f, 49.8945f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[19 /*14*/]), 615.634f, 2182.31f, 66.0038f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[20 /*14*/]), 131.4739f, 2103.644f, 132.4106f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[21 /*14*/]), -111.6382f, 1982.544f, 184.3954f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[22 /*14*/]), -145.5816f, 1867.789f, 197.1513f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[23 /*14*/]), -3.6962f, 1794.032f, 210.8517f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[24 /*14*/]), 145.9352f, 1603.519f, 228.3462f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[25 /*14*/]), 261.1789f, 1177.092f, 223.9848f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[26 /*14*/]), 316.6269f, 994.8642f, 209.4468f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[27 /*14*/]), 282.5819f, 812.6506f, 188.1799f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[28 /*14*/]), 282.7051f, 609.9069f, 153.5032f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[29 /*14*/]), 658.921f, 337.9867f, 109.1328f, 12.25f, 6, 1);
	func_1016(&(uParam0->f_26[30 /*14*/]), 544.7078f, 251.8709f, 102.0525f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[31 /*14*/]), 413.3574f, 280.0153f, 101.9757f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[32 /*14*/]), 354.2403f, 118.6671f, 102.0757f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[33 /*14*/]), 279.1726f, -85.8864f, 69.0589f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[34 /*14*/]), 229.4545f, -217.7475f, 52.9352f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[35 /*14*/]), 180.5973f, -351.0063f, 42.9517f, 8.25f, 6, 1);
	func_1016(&(uParam0->f_26[36 /*14*/]), 115.0886f, -574.2975f, 42.752f, 8.25f, 6, 1);
	func_1016(&(uParam0->f_26[37 /*14*/]), 234.6226f, -626.2728f, 39.6405f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[38 /*14*/]), 188.5645f, -819.7612f, 29.8054f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[39 /*14*/]), 326.0977f, -852.5045f, 28.2416f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[40 /*14*/]), 483.9158f, -850.6833f, 36.2416f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[41 /*14*/]), 937.3954f, -856.1164f, 42.4537f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[42 /*14*/]), 990.613f, -987.3599f, 40.8976f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[43 /*14*/]), 1151.518f, -963.7252f, 46.0669f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[44 /*14*/]), 1239.504f, -1320.973f, 34.0043f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[45 /*14*/]), 1286.513f, -1522.061f, 42.0656f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[46 /*14*/]), 1358.846f, -1638.619f, 51.555f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[47 /*14*/]), 1430.037f, -1862.811f, 70.3993f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[48 /*14*/]), 1209.785f, -2067.132f, 43.0864f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[49 /*14*/]), 725.4492f, -2054.462f, 28.2452f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[50 /*14*/]), 433.5614f, -1995.15f, 22.0946f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[51 /*14*/]), 120.3836f, -1716.913f, 28.0946f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[52 /*14*/]), -2.6023f, -1696.185f, 28.2436f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[53 /*14*/]), -282.8844f, -1827.317f, 25.8542f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[54 /*14*/]), -396.1287f, -1742.943f, 18.8333f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[55 /*14*/]), -270.3039f, -1401.235f, 30.2402f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[56 /*14*/]), -262.8402f, -1099.275f, 22.6402f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[57 /*14*/]), -208.7454f, -893.9361f, 28.2402f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[58 /*14*/]), -537.0558f, -837.1454f, 28.2761f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[59 /*14*/]), -745.466f, -847.489f, 21.3518f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[60 /*14*/]), -816.8754f, -1034.609f, 12.2387f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[61 /*14*/]), -777.81f, -1113.4f, 9.7193f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[62 /*14*/]), -944.58f, -1210f, 4.13f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[63 /*14*/]), -1127.19f, -914.2028f, 1.8472f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[64 /*14*/]), -1219.47f, -875.814f, 11.8722f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[65 /*14*/]), -1277.869f, -951.8594f, 8.829f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[66 /*14*/]), -1165.579f, -1335.411f, 3.7237f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[67 /*14*/]), -1235.558f, -1378.927f, 3.0257f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[68 /*14*/]), -1302.796f, -1395.451f, 3.3884f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[69 /*14*/]), -1352.974f, -1325.808f, 3.3829f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[70 /*14*/]), -1554.629f, -1040.783f, 5.8866f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[71 /*14*/]), -1726.092f, -892.3452f, 6.6396f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[72 /*14*/]), -1665.6f, -812.0593f, 9.1065f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[73 /*14*/]), -2076.739f, -452.8402f, 10.6379f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[74 /*14*/]), -2003.075f, -392.1693f, 10.86f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[75 /*14*/]), -1725.076f, -559.6029f, 36.4546f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[76 /*14*/]), -1531.636f, -643.2426f, 28.0089f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[77 /*14*/]), -1280.296f, -483.4183f, 32.2343f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[78 /*14*/]), -1035.394f, -328.774f, 36.6021f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[79 /*14*/]), -1026.048f, -245.2742f, 36.7316f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[80 /*14*/]), -885.9824f, -171.8009f, 36.8401f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[81 /*14*/]), -711.6476f, -80.7477f, 36.852f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[82 /*14*/]), -724.5125f, -4.8137f, 36.762f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[83 /*14*/]), -763.7054f, 216.0177f, 74.6236f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[84 /*14*/]), -1064.826f, 269.2357f, 62.8327f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[85 /*14*/]), -1247.726f, 246.3995f, 62.9496f, 10.25f, 6, 1);
	func_1016(&(uParam0->f_26[86 /*14*/]), -1279.562f, 279.2627f, 63.7294f, 10.25f, 10, 1);
	func_1016(&(uParam0->f_26[87 /*14*/]), -1319.052f, 293.1328f, 63.4345f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[88 /*14*/]), -1342.357f, 275.8015f, 61.9475f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[89 /*14*/]), -1393.17f, 215.4598f, 57.458f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[90 /*14*/]), -1435.09f, 251.6832f, 59.3337f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[91 /*14*/]), -1458.159f, 256.2099f, 60.033f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[92 /*14*/]), -1499.327f, 235.0045f, 59.492f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[93 /*14*/]), -1529.284f, 238.8247f, 60.5239f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[94 /*14*/]), -1569.463f, 257.9413f, 57.5205f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[95 /*14*/]), -1594.829f, 287.8361f, 57.2619f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[96 /*14*/]), -1623.75f, 301.4466f, 57.8717f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[97 /*14*/]), -1656.574f, 296.004f, 59.5498f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[98 /*14*/]), -1712.513f, 270.9892f, 62.3434f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[99 /*14*/]), -1743.816f, 252.3242f, 64.4394f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[100 /*14*/]), -1786.567f, 216.4218f, 68.4275f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[101 /*14*/]), -1811.04f, 181.3422f, 73.5033f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[102 /*14*/]), -1827.318f, 144.5583f, 76.5298f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[103 /*14*/]), -1820.918f, 114.2446f, 73.833f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[104 /*14*/]), -1812.699f, 81.4093f, 70.0697f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[105 /*14*/]), -1818.634f, 59.8886f, 72.2574f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[106 /*14*/]), -1842.012f, 51.3808f, 74.7702f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[107 /*14*/]), -1872.094f, 62.4789f, 79.0515f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[108 /*14*/]), -1927.398f, 93.0551f, 86.902f, 7.25f, 7, 1);
	func_1016(&(uParam0->f_26[109 /*14*/]), -1972.309f, 105.4856f, 92.1224f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[110 /*14*/]), -2003.861f, 137.0806f, 100.509f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[111 /*14*/]), -2071.469f, 217.3437f, 118.424f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[112 /*14*/]), -2116.584f, 314.5495f, 127.0568f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[113 /*14*/]), -2137.906f, 384.4358f, 132.9872f, 10.25f, 7, 1);
	func_1016(&(uParam0->f_26[114 /*14*/]), -2164.005f, 501.8626f, 145.2572f, 9.25f, 7, 1);
	func_1016(&(uParam0->f_26[115 /*14*/]), -2178.569f, 536.1322f, 151.066f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[116 /*14*/]), -2208.505f, 567.5612f, 160.5232f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[117 /*14*/]), -2252.094f, 570.4734f, 167.6076f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[118 /*14*/]), -2277.36f, 546.6638f, 171.1524f, 5.25f, 7, 1);
	func_1016(&(uParam0->f_26[119 /*14*/]), -2294.691f, 507.9344f, 172.572f, 7.25f, 7, 1);
	func_1016(&(uParam0->f_26[120 /*14*/]), -2304.613f, 459.6466f, 173.3817f, 10.25f, 8, 1);
	uParam0->f_12 = 8;
	func_1015(&(uParam0->f_1735[0 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[0 /*206*/]), "Racer");
	func_1013(&(uParam0->f_1735[0 /*206*/]), PLAYER::PLAYER_PED_ID(), Local_54.f_1);
	GlobalFunc_4626(&(uParam0->f_1735[0 /*206*/]), 1587.044f, 3829.458f, 32.4371f, 49.4786f);
	func_1011(&(uParam0->f_1735[0 /*206*/]), 0, joaat("player_one"), 0);
	func_1015(&(uParam0->f_1735[1 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[1 /*206*/]), "Tim");
	func_1013(&(uParam0->f_1735[1 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[1 /*206*/]), 1590.069f, 3832.858f, 32.4121f, 52.9786f);
	func_1011(&(uParam0->f_1735[1 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[2 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[2 /*206*/]), "Bill");
	func_1013(&(uParam0->f_1735[2 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[2 /*206*/]), 1593.344f, 3836.458f, 32.28f, 65.0786f);
	func_1011(&(uParam0->f_1735[2 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[3 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[3 /*206*/]), "Fred");
	func_1013(&(uParam0->f_1735[3 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[3 /*206*/]), 1591.794f, 3834.658f, 32.385f, 66.7786f);
	func_1011(&(uParam0->f_1735[3 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[4 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[4 /*206*/]), "Chad");
	func_1013(&(uParam0->f_1735[4 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[4 /*206*/]), 1585.094f, 3827.983f, 32.415f, 49.4786f);
	func_1011(&(uParam0->f_1735[4 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[5 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[5 /*206*/]), "Travis");
	func_1013(&(uParam0->f_1735[5 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[5 /*206*/]), 1582.044f, 3824.458f, 32.57f, 28.0786f);
	func_1011(&(uParam0->f_1735[5 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[6 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[6 /*206*/]), "Kevin");
	func_1013(&(uParam0->f_1735[6 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[6 /*206*/]), 1588.419f, 3831.233f, 32.375f, 49.4786f);
	func_1011(&(uParam0->f_1735[6 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[7 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[7 /*206*/]), "Ted");
	func_1013(&(uParam0->f_1735[7 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[7 /*206*/]), 1583.419f, 3826.283f, 32.525f, 49.4786f);
	func_1011(&(uParam0->f_1735[7 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
}

void func_1011(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x75A51
{
	uParam0->f_21 = iParam1;
	uParam0->f_22 = iParam2;
	uParam0->f_23 = iParam3;
}


void func_1013(var uParam0, int iParam1, int iParam2)//Position - 0x75A83
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
}


void func_1015(var uParam0)//Position - 0x75AA5
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_24 = 12;
}

void func_1016(var uParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x75AC7
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam4;
	uParam0->f_11 = iParam5;
	if (bParam6)
	{
		func_1017(uParam0, 8);
	}
}

void func_1017(var uParam0, int iParam1)//Position - 0x75AF2
{
	if (!func_667(uParam0, iParam1))
	{
		GlobalFunc_6594(&(uParam0->f_12), iParam1);
	}
}


void func_1019(var uParam0)//Position - 0x75B41
{
	func_694(uParam0);
	uParam0->f_11 = 25;
	func_1016(&(uParam0->f_26[0 /*14*/]), -1288.264f, -2018.73f, 0.0728f, 8.5f, 5, 1);
	func_1016(&(uParam0->f_26[1 /*14*/]), -1327.798f, -1935.628f, 0.073f, 8.5f, 5, 1);
	func_1016(&(uParam0->f_26[2 /*14*/]), -1332.309f, -1827.805f, 0.073f, 8.5f, 5, 1);
	func_1016(&(uParam0->f_26[3 /*14*/]), -1301.09f, -1751.383f, 1.1172f, 8.5f, 9, 1);
	func_1016(&(uParam0->f_26[4 /*14*/]), -1264.783f, -1688.678f, 3.374f, 30f, 6, 0);
	func_1016(&(uParam0->f_26[5 /*14*/]), -1305.635f, -1630.68f, 3.44f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[6 /*14*/]), -1328.689f, -1593.931f, 3.3736f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[7 /*14*/]), -1343.499f, -1562.805f, 3.3357f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[8 /*14*/]), -1368.276f, -1515.959f, 3.3244f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[9 /*14*/]), -1400.455f, -1401.992f, 2.5794f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[10 /*14*/]), -1376.343f, -1362.777f, 2.4835f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[11 /*14*/]), -1328.771f, -1317.477f, 3.7066f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[12 /*14*/]), -1360.482f, -1206.115f, 3.3541f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[13 /*14*/]), -1357.586f, -1115.614f, 3.1734f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[14 /*14*/]), -1306.959f, -1100.001f, 5.9619f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[15 /*14*/]), -1288.018f, -1187.357f, 3.8367f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[16 /*14*/]), -1223.9f, -1150.66f, 6.6276f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[17 /*14*/]), -1256.766f, -1042.904f, 7.5296f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[18 /*14*/]), -1256.984f, -902.0996f, 10.4f, 8.5f, 6, 1);
	func_1016(&(uParam0->f_26[19 /*14*/]), -1169.927f, -851.2965f, 13.2923f, 8.5f, 10, 1);
	func_1016(&(uParam0->f_26[20 /*14*/]), -1128.279f, -931.3848f, 1.5733f, 8.5f, 7, 1);
	func_1016(&(uParam0->f_26[21 /*14*/]), -1182.294f, -963.3427f, 3.1804f, 8.5f, 7, 1);
	func_1016(&(uParam0->f_26[22 /*14*/]), -1248.371f, -986.171f, 1.9716f, 8.5f, 7, 1);
	func_1016(&(uParam0->f_26[23 /*14*/]), -1346.748f, -996.434f, 7.135f, 8.5f, 7, 1);
	func_1016(&(uParam0->f_26[24 /*14*/]), -1332.122f, -1044.812f, 6.646f, 8.5f, 8, 1);
	uParam0->f_12 = 8;
	func_1015(&(uParam0->f_1735[0 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[0 /*206*/]), "Player");
	func_1013(&(uParam0->f_1735[0 /*206*/]), PLAYER::PLAYER_PED_ID(), Local_54.f_1);
	GlobalFunc_4626(&(uParam0->f_1735[0 /*206*/]), -1268.06f, -2040.086f, 2.9789f, 39.946f);
	func_1011(&(uParam0->f_1735[0 /*206*/]), 0, joaat("player_one"), 0);
	func_1015(&(uParam0->f_1735[1 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[1 /*206*/]), "Tim");
	func_1013(&(uParam0->f_1735[1 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[1 /*206*/]), -1265.329f, -2036.513f, 2.9906f, 57.5f);
	func_1011(&(uParam0->f_1735[1 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[2 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[2 /*206*/]), "Bill");
	func_1013(&(uParam0->f_1735[2 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[2 /*206*/]), -1274.84f, -2046.258f, 3.0336f, 12.7531f);
	func_1011(&(uParam0->f_1735[2 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[3 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[3 /*206*/]), "Fred");
	func_1013(&(uParam0->f_1735[3 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[3 /*206*/]), -1273.222f, -2044.887f, 3.0603f, 21.6516f);
	func_1011(&(uParam0->f_1735[3 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[4 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[4 /*206*/]), "Chad");
	func_1013(&(uParam0->f_1735[4 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[4 /*206*/]), -1264.017f, -2034.607f, 2.9803f, 62.7488f);
	func_1011(&(uParam0->f_1735[4 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[5 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[5 /*206*/]), "Travis");
	func_1013(&(uParam0->f_1735[5 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[5 /*206*/]), -1266.709f, -2038.239f, 2.9831f, 51.7012f);
	func_1011(&(uParam0->f_1735[5 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[6 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[6 /*206*/]), "Kevin");
	func_1013(&(uParam0->f_1735[6 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[6 /*206*/]), -1269.638f, -2041.677f, 3.0068f, 47.4074f);
	func_1011(&(uParam0->f_1735[6 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[7 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[7 /*206*/]), "Ted");
	func_1013(&(uParam0->f_1735[7 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[7 /*206*/]), -1271.39f, -2043.209f, 2.955f, 31.5829f);
	func_1011(&(uParam0->f_1735[7 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
}

void func_1020(var uParam0)//Position - 0x7619E
{
	func_694(uParam0);
	uParam0->f_11 = 23;
	func_1016(&(uParam0->f_26[0 /*14*/]), 2344.307f, 4276.477f, 30f, 8.5f, 5, 1);
	func_1016(&(uParam0->f_26[1 /*14*/]), 2212.32f, 4205.143f, 30.336f, 8.5f, 5, 1);
	func_1016(&(uParam0->f_26[2 /*14*/]), 2216.175f, 4032.299f, 30.124f, 8.5f, 5, 1);
	func_1016(&(uParam0->f_26[3 /*14*/]), 2168.122f, 3905.125f, 30.175f, 8.5f, 9, 1);
	func_1016(&(uParam0->f_26[4 /*14*/]), 2142.95f, 3892.535f, 32.1f, 50f, 6, 0);
	func_1016(&(uParam0->f_26[5 /*14*/]), 2043.155f, 3834.413f, 34.8167f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[6 /*14*/]), 1972.66f, 3794.676f, 31.2204f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[7 /*14*/]), 1933.564f, 3760.569f, 31.32f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[8 /*14*/]), 1946.822f, 3717.275f, 31.1175f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[9 /*14*/]), 1804.947f, 3653.608f, 33.2508f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[10 /*14*/]), 1766.28f, 3675.336f, 33.2691f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[11 /*14*/]), 1706.061f, 3661.604f, 33.9931f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[12 /*14*/]), 1663.703f, 3708.038f, 33.0052f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[13 /*14*/]), 1593.494f, 3688.854f, 33.424f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[14 /*14*/]), 1554.166f, 3762.528f, 33.4527f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[15 /*14*/]), 1671.355f, 3866.297f, 33.8281f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[16 /*14*/]), 1751.2f, 3925.286f, 33.908f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[17 /*14*/]), 1867.413f, 3948.753f, 32.088f, 12f, 6, 1);
	func_1016(&(uParam0->f_26[18 /*14*/]), 1968.206f, 3884.297f, 31.2565f, 12f, 10, 1);
	func_1016(&(uParam0->f_26[19 /*14*/]), 1882.048f, 3848.572f, 31.3166f, 6.5f, 7, 1);
	func_1016(&(uParam0->f_26[20 /*14*/]), 1857.764f, 3893.701f, 32.0166f, 6.5f, 7, 1);
	func_1016(&(uParam0->f_26[21 /*14*/]), 1773.043f, 3870.598f, 33.3167f, 6.5f, 7, 1);
	func_1016(&(uParam0->f_26[22 /*14*/]), 1758.051f, 3897.696f, 33.8378f, 8.5f, 8, 1);
	uParam0->f_12 = 8;
	func_1015(&(uParam0->f_1735[0 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[0 /*206*/]), "Player");
	func_1013(&(uParam0->f_1735[0 /*206*/]), PLAYER::PLAYER_PED_ID(), Local_54.f_1);
	GlobalFunc_4626(&(uParam0->f_1735[0 /*206*/]), 2395.433f, 4281.86f, 31.6057f, 98f);
	func_1011(&(uParam0->f_1735[0 /*206*/]), 0, joaat("player_one"), 0);
	func_1015(&(uParam0->f_1735[1 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[1 /*206*/]), "Tim");
	func_1013(&(uParam0->f_1735[1 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[1 /*206*/]), 2397.083f, 4276.635f, 31.5807f, 85f);
	func_1011(&(uParam0->f_1735[1 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[2 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[2 /*206*/]), "Bill");
	func_1013(&(uParam0->f_1735[2 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[2 /*206*/]), 2394.108f, 4287.56f, 31.2057f, 120f);
	func_1011(&(uParam0->f_1735[2 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[3 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[3 /*206*/]), "Fred");
	func_1013(&(uParam0->f_1735[3 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[3 /*206*/]), 2397.683f, 4274.685f, 31.6057f, 75f);
	func_1011(&(uParam0->f_1735[3 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[4 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[4 /*206*/]), "Chad");
	func_1013(&(uParam0->f_1735[4 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[4 /*206*/]), 2394.933f, 4283.81f, 31.5307f, 98f);
	func_1011(&(uParam0->f_1735[4 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[5 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[5 /*206*/]), "Travis");
	func_1013(&(uParam0->f_1735[5 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[5 /*206*/]), 2396.683f, 4278.51f, 31.5807f, 98f);
	func_1011(&(uParam0->f_1735[5 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[6 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[6 /*206*/]), "Kevin");
	func_1013(&(uParam0->f_1735[6 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[6 /*206*/]), 2396.108f, 4279.91f, 31.6307f, 98f);
	func_1011(&(uParam0->f_1735[6 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
	func_1015(&(uParam0->f_1735[7 /*206*/]));
	GlobalFunc_4627(&(uParam0->f_1735[7 /*206*/]), "Ted");
	func_1013(&(uParam0->f_1735[7 /*206*/]), 0, 0);
	GlobalFunc_4626(&(uParam0->f_1735[7 /*206*/]), 2394.433f, 4285.635f, 31.2807f, 98f);
	func_1011(&(uParam0->f_1735[7 /*206*/]), 4, joaat("a_m_y_roadcyc_01"), 0);
}

void func_1021()//Position - 0x767B7
{
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iLocal_747 = 0;
}


void func_1023()//Position - 0x767EC
{
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 271, 1);
}

int func_1024(struct<8> Param0, var uParam8, var uParam9)//Position - 0x76889
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Local_2467.f_5)
	{
		case 0:
			func_311(PLAYER::PLAYER_PED_ID(), 357, 1);
			MISC::SET_MISSION_FLAG(1);
			GlobalFunc_138();
			AUDIO::START_AUDIO_SCENE("TRI_START_SCENE");
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_roadcyc_01"), 1);
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_sharktiger"), 1);
			Local_54 = 2;
			Local_54.f_1 = 0;
			Local_54.f_2 = 5;
			Local_54.f_7 = 0;
			Local_54.f_8 = joaat("a_m_y_roadcyc_01");
			Local_54.f_9 = 0;
			StringCopy(&(Local_54.f_10), "X:/gta5/titleupdate/dev_ng/common/data/script/xml/", 64);
			StringCopy(&(Local_54.f_26), "X:/gta5/script/dev/singleplayer/scripts/Minigames/", 64);
			StringCopy(&(Local_54.f_42), "SP_Races/", 16);
			StringCopy(&(Local_54.f_46), "Triathlon/", 32);
			StringCopy(&(Local_54.f_54), "Races/", 16);
			Local_54.f_218 = Param0.f_4;
			Local_54.f_221 = Param0.f_5;
			Local_54.f_219 = Param0.f_6;
			Local_54.f_220 = Param0.f_7;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_54.f_221, 1, 1);
			StringCopy(&(Local_54.f_69[1 /*8*/]), "TRI_BASIC_1", 32);
			StringCopy(&(Local_54.f_69[0 /*8*/]), "TRI_BASIC_2", 32);
			StringCopy(&(Local_54.f_69[2 /*8*/]), "TRI_BASIC_3", 32);
			Local_2467 = -1;
			Local_54.f_3 = { Param0.f_1 };
			Local_54.f_6 = 97f;
			Local_7220 = { Param0.f_1 };
			Local_54.f_58 = Param0;
			iLocal_736 = Param0;
			func_1059();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
			func_1053();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_LOD_MULTIPLIER(PLAYER::PLAYER_PED_ID(), 2f);
			}
			Local_2467.f_5 = 1;
			break;
		
		case 1:
			if (iLocal_736 == 1)
			{
				Var0 = { 2431.671f, 4281.272f, 37.1329f };
				Var3 = { -10.769f, 0f, -51.5263f };
			}
			else if (iLocal_736 == 0)
			{
				Var0 = { -1233.34f, -2053.191f, 14.859f };
				Var3 = { -23.6826f, 0f, -58.0414f };
			}
			else if (iLocal_736 == 2)
			{
				Var0 = { 1594.533f, 3807.804f, 35.0907f };
				Var3 = { -7.4446f, 0f, -84.6022f };
			}
			func_1053();
			if (STREAMING::HAS_ANIM_DICT_LOADED("mini@triathlonintro") && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_roadcyc_01")))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_54.f_220, 1, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_54.f_220, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				if (func_1052(uParam8, Var0, Var3))
				{
					func_372();
					func_1044();
					uParam9->f_4385 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1280.246f, -2005.127f, -3.6539f, 5f, joaat("prop_dock_bouy_1"), 1, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(uParam9->f_4385))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam9->f_4385, 0);
						ENTITY::SET_ENTITY_COLLISION(uParam9->f_4385, 0, 0);
					}
					uParam9->f_4386 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1339.051f, -1975.655f, -8.6079f, 20f, joaat("prop_dock_bouy_2"), 1, 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(uParam9->f_4386))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam9->f_4386, 0);
						ENTITY::SET_ENTITY_COLLISION(uParam9->f_4386, 0, 0);
					}
					if (Local_54.f_58 == 1)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1_Start", 0);
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_1", 1);
						TASK::SET_EXCLUSIVE_SCENARIO_GROUP("Triathlon_1");
						sLocal_1050 = "Triathlon_1";
					}
					else if (Local_54.f_58 == 0)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2_Start", 0);
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_2", 1);
						TASK::SET_EXCLUSIVE_SCENARIO_GROUP("Triathlon_2");
						sLocal_1050 = "Triathlon_2";
					}
					else if (Local_54.f_58 == 2)
					{
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3_Start", 0);
						TASK::SET_SCENARIO_GROUP_ENABLED("Triathlon_3", 1);
						TASK::SET_EXCLUSIVE_SCENARIO_GROUP("Triathlon_3");
						sLocal_1050 = "Triathlon_3";
					}
					Local_2467.f_5 = 2;
				}
			}
			break;
		
		case 2:
			func_1041(uParam9);
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_7220) > 1000f)
			{
				STREAMING::LOAD_SCENE(Local_7220);
			}
			Local_2467.f_5 = 3;
			break;
		
		case 3:
			if (func_1032() && func_1030(uParam9))
			{
				Local_2467.f_5 = 4;
			}
			break;
		
		case 4:
			GlobalFunc_587(Local_54.f_58);
			func_1028(Local_54.f_58, &Local_2762);
			GlobalFunc_6877(&(Local_2467.f_2));
			func_575(iLocal_736, 1);
			func_1025(&iLocal_7231);
			Local_2467.f_5 = 5;
			break;
		
		case 5:
			if (GlobalFunc_7084(&(Local_2467.f_2), 0.5f))
			{
				Local_2467.f_5 = 6;
			}
			break;
		
		case 6:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1065353216);
			Local_2467.f_5 = 7;
			GlobalFunc_6877(&(Local_2467.f_2));
			break;
		
		case 7:
			if (GlobalFunc_7084(&(Local_2467.f_2), 0.5f))
			{
				GlobalFunc_235(&(Local_2467.f_2));
				Local_2467.f_5 = 10;
			}
			break;
		
		case 10:
			PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
			if (Local_54.f_58 == 1)
			{
				PED::SET_PED_NON_CREATION_AREA(2366.77f, 4255.247f, 30.3808f, 2426.47f, 4332.712f, 35.244f);
			}
			else if (Local_54.f_58 == 0)
			{
				PED::SET_PED_NON_CREATION_AREA(-1289.149f, -2066.193f, 6.1378f, -1269.368f, -2017.138f, 0.8296f);
			}
			else if (Local_54.f_58 == 2)
			{
				PED::SET_PED_NON_CREATION_AREA(1564.825f, 3830.095f, 31.071f, 1605.515f, 3832.366f, 32.9927f);
			}
			return 0;
			break;
	}
	return 1;
}

void func_1025(var uParam0)//Position - 0x76DA4
{
	func_1027();
	func_1026();
	func_573(uParam0);
}

void func_1026()//Position - 0x76DBA
{
	switch (iLocal_736)
	{
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_798))
			{
				uLocal_798 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1764.244f, 3888.219f, 80.1004f, 6.3875f, 0f, 46.1461f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_799))
			{
				uLocal_799 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1764.244f, 3888.219f, 80.1004f, 6.3875f, 0f, -16.5562f, 50f, 0, 2);
			}
			break;
		
		case 0:
			if (!CAM::DOES_CAM_EXIST(uLocal_798))
			{
				uLocal_798 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1334.537f, -1034.428f, 37.556f, 8.4473f, 0f, 99.2059f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_799))
			{
				uLocal_799 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1334.537f, -1034.428f, 37.556f, 8.4473f, 0f, 49.8388f, 50f, 0, 2);
			}
			break;
		
		case 2:
			if (!CAM::DOES_CAM_EXIST(uLocal_798))
			{
				uLocal_798 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -2301.418f, 495.3127f, 224.8627f, 6.532f, 0f, -132.4508f, 50f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_799))
			{
				uLocal_799 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -2301.418f, 495.3127f, 224.8627f, 6.532f, 0f, 169.8684f, 50f, 0, 2);
			}
			break;
	}
}

void func_1027()//Position - 0x76F35
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, -15f, 15f) };
	Var3 = { 0f, 0f, 0f };
	if (!CAM::DOES_CAM_EXIST(uLocal_797))
	{
		uLocal_797 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var3, 50f, 0, 2);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_797, PLAYER::PLAYER_PED_ID(), -2.4646f, 2.427f, 1.3f, 1);
		CAM::POINT_CAM_AT_ENTITY(uLocal_797, PLAYER::PLAYER_PED_ID(), 0.0606f, -0.04f, 0.0745f, 0);
		CAM::SET_CAM_FOV(uLocal_797, 50f);
	}
}

void func_1028(int iParam0, var uParam1)//Position - 0x76FC3
{
	if (iParam0 == 1)
	{
		uParam1->f_4377[0] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 2347.905f, 4268.94f, 30.5569f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[0], 1);
		uParam1->f_4377[1] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 2221.448f, 4203.96f, 30.3139f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[1], 1);
		uParam1->f_4377[2] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 2208.533f, 4032.47f, 30.1761f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[2], 1);
	}
	else if (iParam0 == 0)
	{
		uParam1->f_4377[0] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -1282.69f, -2014.735f, 0.2113f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[0], 1);
		uParam1->f_4377[1] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -1321.108f, -1934.618f, 0.3026f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[1], 1);
		uParam1->f_4377[2] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -1323.605f, -1829.125f, 0.397f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[2], 1);
	}
	else if (iParam0 == 2)
	{
		uParam1->f_4377[0] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 1541.737f, 3857.782f, 30.1022f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[0], 1);
		uParam1->f_4377[1] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 1400.998f, 3899.673f, 30.3399f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[1], 1);
		uParam1->f_4377[2] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 1138.285f, 3967.375f, 30.3145f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[2], 1);
		uParam1->f_4377[3] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 718.037f, 4075.214f, 30.1365f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[3], 1);
		uParam1->f_4377[4] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), 256.9774f, 4198.98f, 30.1401f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[4], 1);
		uParam1->f_4377[5] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -39.6365f, 4202.092f, 29.9779f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[5], 1);
		uParam1->f_4377[6] = OBJECT::CREATE_OBJECT(joaat("prop_dock_bouy_3"), -138.2176f, 4133.324f, 30.1959f, 1, 1, 0);
		OBJECT::SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(uParam1->f_4377[6], 1);
	}
}


int func_1030(var uParam0)//Position - 0x7725B
{
	if (!func_1031(uParam0))
	{
		return 0;
	}
	switch (iLocal_736)
	{
		case 1:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri1_Bk_0"))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri1_Run"))
			{
				return 0;
			}
			return 1;
			break;
		
		case 0:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri2_Bk_0"))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri2_Run"))
			{
				return 0;
			}
			return 1;
			break;
		
		case 2:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Tri3_Run"))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1045))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1046))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1047))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1048))
			{
				return 0;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1049))
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_1031(var uParam0)//Position - 0x77341
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	
	iVar16 = 1;
	iVar17 = 0;
	while (iVar17 < uParam0->f_12)
	{
		if (iVar17 != 0)
		{
			switch (iLocal_736)
			{
				case 0:
					StringCopy(&cVar0, "triathlon_ves_racer", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "triathlon_ala_racer", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "triathlon_coy_racer", 64);
					break;
			}
			StringIntConCat(&cVar0, iVar17, 64);
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
			{
				iVar16 = 0;
			}
		}
		iVar17++;
	}
	return iVar16;
}

int func_1032()//Position - 0x773BA
{
	if (!func_1040())
	{
		return 0;
	}
	if (!func_1039())
	{
		return 0;
	}
	if (!func_1038())
	{
		return 0;
	}
	if (!func_1037())
	{
		return 0;
	}
	if (!func_1034())
	{
		return 0;
	}
	if (!func_1033())
	{
		return 0;
	}
	return 1;
}

int func_1033()//Position - 0x7740B
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CROWD_CHEER", 0))
	{
		return 0;
	}
	return 1;
}

int func_1034()//Position - 0x77426
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_805))
	{
		return 0;
	}
	if (!GlobalFunc_4998(0, -1))
	{
		return 0;
	}
	return 1;
}



int func_1037()//Position - 0x775BF
{
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("TRIATHLON"))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cLocal_1))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		return 0;
	}
	return 1;
}

int func_1038()//Position - 0x775F8
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		return 0;
	}
	return 1;
}

int func_1039()//Position - 0x7760E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1091)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(iLocal_1091[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("VEH@BIKE@COMMON@FRONT@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_SET_LOADED("random@escape_paparazzi@standing@"))
	{
		return 0;
	}
	return 1;
}

int func_1040()//Position - 0x77671
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("tribike")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("tribike2")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("tribike3")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_dock_bouy_3")))
	{
		return 0;
	}
	return 1;
}

void func_1041(var uParam0)//Position - 0x776E0
{
	func_1053();
	func_1042(uParam0);
}

void func_1042(var uParam0)//Position - 0x776F2
{
	switch (iLocal_736)
	{
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING("Tri1_Bk_0");
			TASK::REQUEST_WAYPOINT_RECORDING("Tri1_Run");
			break;
		
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING("Tri2_Bk_0");
			TASK::REQUEST_WAYPOINT_RECORDING("Tri2_Run");
			break;
		
		case 2:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1045);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1046);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1047);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1048);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1049);
			TASK::REQUEST_WAYPOINT_RECORDING("Tri3_Run");
			break;
	}
	func_1043(uParam0);
}

void func_1043(var uParam0)//Position - 0x77773
{
	char cVar0[64];
	int iVar16;
	
	iVar16 = 0;
	while (iVar16 < uParam0->f_12)
	{
		if (iVar16 != 0)
		{
			switch (iLocal_736)
			{
				case 0:
					StringCopy(&cVar0, "triathlon_ves_racer", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "triathlon_ala_racer", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "triathlon_coy_racer", 64);
					break;
			}
			StringIntConCat(&cVar0, iVar16, 64);
			TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
		}
		iVar16++;
	}
}

void func_1044()//Position - 0x777E0
{
	struct<3> Var0;
	struct<3> Var3;
	
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(7, 0);
	MISC::ENABLE_DISPATCH_SERVICE(8, 0);
	MISC::ENABLE_DISPATCH_SERVICE(9, 0);
	MISC::ENABLE_DISPATCH_SERVICE(10, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	switch (iLocal_736)
	{
		case 1:
			MISC::CLEAR_AREA_OF_VEHICLES(2110.01f, 4268.56f, 8.53f, 460f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(1847.275f, 3827.217f, 31.6549f, 330f, 0, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2289.135f, 4321.77f, 40.505f, 2253.114f, 3878.23f, 18.505f, 265f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2191.21f, 3896.372f, 23.924f, 2190.456f, 3875.386f, 39.924f, 70f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2025.35f, 3831.476f, 25.926f, 2030.913f, 3821.987f, 41.926f, 280f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1932.811f, 3739.47f, 24.371f, 1950.988f, 3749.985f, 40.371f, 70f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1877.811f, 3688.361f, 25.498f, 1888.06f, 3670.032f, 41.498f, 190f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1807.241f, 3669.025f, 25.904f, 1789.286f, 3658.134f, 41.904f, 70f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1743.463f, 3674.442f, 26.263f, 1754.072f, 3656.319f, 42.263f, 110f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1703.885f, 3686.683f, 26.358f, 1685.745f, 3676.104f, 42.358f, 110f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1635.022f, 3703.902f, 26.221f, 1645.492f, 3685.698f, 42.221f, 110f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1583.338f, 3720.986f, 26.221f, 1565.558f, 3709.811f, 42.221f, 130f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1617.29f, 3786.476f, 26.221f, 1592.07f, 3818.802f, 42.221f, 190f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1715.433f, 3885.008f, 26.221f, 1696.223f, 3909.338f, 42.221f, 130f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1801.187f, 3925.098f, 26.221f, 1794.713f, 3955.414f, 42.221f, 130f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1903.961f, 3912.521f, 24.221f, 1923.415f, 3959.665f, 40.221f, 170f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1921.498f, 3874.776f, 24.221f, 1936.966f, 3847.91f, 40.221f, 110f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1891.288f, 3871.255f, 24.221f, 1861.13f, 3864.079f, 40.221f, 80f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1816.318f, 3896.067f, 25.221f, 1828.275f, 3867.466f, 41.221f, 120f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1771.863f, 3892.823f, 26.221f, 1753.74f, 3882.215f, 42.221f, 90f, 0, 0, 1);
			func_1051(2290.914f, 4067.84f, 30.5179f, 1065353216);
			func_1051(2220.311f, 4436.533f, 30.1107f, 1065353216);
			func_1051(2049.687f, 4352.839f, 30.1496f, 1065353216);
			break;
		
		case 0:
			GlobalFunc_7621(25, 1, 0, 1, 0);
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1329.54f, -1783.29f, -20.99f, -1278.47f, -1666.56f, 23.43f, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(-1336.26f, -1786.84f, -2f, -1277.37f, -1663.03f, 9f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1347.77f, -1705.95f, -23.03f, -1247.42f, -1572.45f, 23.22f, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(-1347.77f, -1705.95f, -23.03f, -1247.42f, -1572.45f, 23.22f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1360.7f, -1589.52f, -3.87f, -1340.51f, -1500.11f, 6.09f, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(-1360.7f, -1589.52f, -3.87f, -1340.51f, -1500.11f, 6.09f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1416.93f, -1500.8f, -5.9f, -1349.71f, -1385.46f, 8.37f, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(-1416.93f, -1500.8f, -5.9f, -1349.71f, -1385.46f, 8.37f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1391.68f, -1409.03f, -3.95f, -1353.17f, -1300.24f, 7.6f, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(-1391.68f, -1409.03f, -3.95f, -1353.17f, -1300.24f, 7.6f);
			MISC::CLEAR_AREA_OF_VEHICLES(-1365.275f, -1451.609f, 4.3495f, 675f, 0, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1317.59f, -1763.79f, 0.92f, 6f, 0, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1278.97f, -1932.01f, -10f, 1191.09f, -2014.33f, 22.47f, 1200f, 1, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1703.19f, -2046.52f, -37.28f, -1279.62f, -1753.35f, 21.26f, 500f, 1, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1275.526f, -1669.598f, -2.474f, -1280.479f, -1672.984f, 10.474f, 125f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1328.572f, -1588.628f, -2.453f, -1333.682f, -1591.772f, 10.453f, 75f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1346.266f, -1533.706f, -2.449f, -1360.745f, -1540.515f, 10.449f, 105f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1376.607f, -1433.51f, -2.034f, -1400.276f, -1444.268f, 10.034f, 125f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1368.123f, -1379.432f, -3.892f, -1390.87f, -1317.475f, 9.892f, 135f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1331.716f, -1266.083f, -2.9f, -1356.625f, -1273.536f, 10.9f, 145f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1346.508f, -1157.917f, -2.378f, -1372.508f, -1157.917f, 10.378f, 115f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1320.172f, -1107.892f, -4.977f, -1329.571f, -1090.238f, 16.977f, 65f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1312.138f, -1138.175f, -2.019f, -1292.138f, -1138.329f, 12.019f, 95f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1253.094f, -1186.27f, -1.682f, -1265.201f, -1163.26f, 13.682f, 135f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1238.61f, -1030.409f, -8.791f, -1273.366f, -1039.79f, 18.791f, 295f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1214.013f, -907.341f, -8.548f, -1246.902f, -862.017f, 18.548f, 160f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1155.81f, -891.95f, -10.801f, -1133.376f, -878.807f, 20.801f, 120f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1173.853f, -943.301f, -3.183f, -1160.572f, -965.653f, 9.183f, 130f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1286.419f, -978.159f, -4.489f, -1286.617f, -994.158f, 14.489f, 130f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1346.018f, -1046.348f, -1.711f, -1323.297f, -1033.709f, 15.711f, 140f, 0, 0, 1);
			Var0 = { -1302.005f, -1779.373f, -2.155f };
			Var3 = { -1331.091f, -1749.161f, 2.789f };
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var3, 0, 1);
			break;
		
		case 2:
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 675f, 0, 0, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-230.567f, 4148.788f, 33.628f, -219.182f, 4144.995f, 49.628f, 145f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-242.724f, 4028.156f, 28.249f, -222.463f, 4036.729f, 44.249f, 95f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-236.16f, 3937.613f, 28.477f, -214.342f, 3934.785f, 44.477f, 125f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-218.068f, 3772.185f, 32.976f, -187.264f, 3780.85f, 48.976f, 225f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-149.866f, 3628.335f, 38.828f, -130.144f, 3653.535f, 53.828f, 225f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(7.534f, 3586.556f, 32.396f, 11.175f, 3618.348f, 48.396f, 225f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(83.41f, 3519.563f, 34.793f, 118.236f, 3516.078f, 44.793f, 205f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(161.356f, 3384.402f, 35.287f, 176.253f, 3416.074f, 45.287f, 205f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(211.2f, 3305.038f, 35.644f, 245.022f, 3296.038f, 45.644f, 205f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(201.909f, 3073.113f, 37.313f, 236.8f, 3075.87f, 47.313f, 295f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(172.832f, 2936.86f, 40.329f, 198.827f, 2913.424f, 50.329f, 155f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(24.765f, 2856.754f, 48.433f, 35.331f, 2823.387f, 62.433f, 195f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(4.779f, 2750.103f, 51.233f, 31.367f, 2798.25f, 65.233f, 235f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(145.456f, 2635.881f, 35.443f, 201.325f, 2712.716f, 59.443f, 235f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(283.407f, 2611.802f, 39.679f, 302.296f, 2618.374f, 49.679f, 75f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(353.296f, 2510.228f, 39.798f, 371.948f, 2526.875f, 49.798f, 185f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(542.405f, 2339.161f, 43.571f, 568.678f, 2381.702f, 48.571f, 425f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(705.415f, 2263.484f, 44.566f, 716.676f, 2296.623f, 56.566f, 295f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(695.232f, 2232.163f, 49.846f, 745.23f, 2232.558f, 59.846f, 105f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(613.376f, 2192.395f, 47.678f, 614.517f, 2172.428f, 87.678f, 185f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(430.02f, 2148.145f, 69.481f, 444.714f, 2121.99f, 109.481f, 195f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(219.651f, 2115.604f, 85.485f, 217.79f, 2085.662f, 149.485f, 285f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-31.857f, 2038.572f, 137.936f, -16.549f, 2012.771f, 203.936f, 295f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-42.146f, 1737.544f, 175.64f, 23.141f, 1813.29f, 241.64f, 475f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(133.18f, 1570.556f, 219.501f, 158.18f, 1570.551f, 241.501f, 175f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(172.87f, 1441.773f, 228.915f, 193.18f, 1456.351f, 250.915f, 175f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(234.385f, 1239.455f, 211.588f, 268.71f, 1246.295f, 251.588f, 355f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(286.787f, 1073.197f, 194.623f, 326.009f, 1081.046f, 234.623f, 175f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(288.456f, 909.196f, 217.008f, 323.109f, 904.281f, 189.008f, 185f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(284.596f, 762.277f, 170.424f, 299.393f, 764.733f, 198.424f, 185f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(265.143f, 676.3f, 145.153f, 309.172f, 667.003f, 185.153f, 145f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(302.641f, 577.48f, 149.325f, 313.087f, 588.245f, 159.325f, 95f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(325.258f, 523.143f, 148.179f, 340.223f, 522.12f, 158.179f, 95f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(336.271f, 456.256f, 142.987f, 349.631f, 463.076f, 152.987f, 55f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(395.685f, 422.968f, 137.985f, 398.965f, 447.752f, 147.985f, 95f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(447.861f, 372.691f, 138.028f, 501.875f, 383.059f, 138.028f, 115f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(592.66f, 322.263f, 117.328f, 583.714f, 376.53f, 135.328f, 165f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(597.491f, 315.62f, 98.659f, 629.928f, 265.144f, 114.659f, 165f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(502.54f, 276.64f, 98.108f, 496.197f, 259.794f, 108.108f, 195f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(375.999f, 212.344f, 93.103f, 398.405f, 203.744f, 113.103f, 205f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(314.004f, 42.642f, 67.914f, 336.455f, 34.157f, 109.914f, 295f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(239.999f, -144.154f, 42.44f, 272.028f, -155.56f, 84.44f, 205f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(189.844f, -282.718f, 26.418f, 221.345f, -295.514f, 68.418f, 205f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(119.513f, -476.605f, 37.141f, 151.697f, -487.569f, 49.141f, 265f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(177.935f, -617.074f, 37.079f, 189.995f, -585.285f, 49.079f, 165f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(187.797f, -721.593f, 25.341f, 219.79f, -733.1f, 43.341f, 245f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(223.003f, -856.936f, 21.201f, 234.487f, -824.934f, 39.201f, 165f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(650.029f, -877.933f, 23.751f, 650.731f, -823.937f, 47.751f, 690f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(944.824f, -934.767f, 32.724f, 995.498f, -916.107f, 52.724f, 180f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1070.454f, -981.505f, 38.962f, 1063.625f, -958.497f, 52.962f, 230f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1145.897f, -1098.933f, 20.561f, 1227.198f, -1077.81f, 80.561f, 1000f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1145.897f, -1098.933f, 20.561f, 1227.198f, -1077.81f, 80.561f, 1000f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1324.901f, -1776.794f, 45.925f, 1456.276f, -1750.4f, 85.925f, 460f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(1221.789f, -2006.202f, 24.364f, 1262.837f, -2101.758f, 64.364f, 460f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(806.686f, -2015.736f, 9.354f, 795.051f, -2119.083f, 49.354f, 790f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(323.806f, -1832.678f, 6.795f, 257.289f, -1912.625f, 46.795f, 710f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-239.763f, -1729.849f, 9.875f, -164.735f, -1864.336f, 49.875f, 530f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-258.619f, -1518.138f, 4.395f, -356.781f, -1483.784f, 44.395f, 690f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-160.67f, -1123.358f, 3.124f, -374.574f, -1116.961f, 43.124f, 500f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-525.382f, -796.191f, 18.881f, -535.791f, -879.543f, 40.881f, 630f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-799.832f, -913.989f, 7.844f, -740.698f, -938.465f, 29.844f, 630f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-812.214f, -1072.057f, 0.973f, -782.054f, -1056.361f, 22.973f, 150f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-870.227f, -1154.799f, -6.444f, -852.817f, -1184.003f, 16.444f, 230f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1044.686f, -1018.576f, -18.191f, -1074.69f, -1036.597f, 22.191f, 475f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1239.659f, -867.453f, -5.612f, -1220.347f, -895.436f, 29.612f, 150f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1252.833f, -1131.194f, 1.989f, -1202.302f, -1112.154f, 13.989f, 490f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1240.484f, -1350.328f, -2.141f, -1216.541f, -1398.73f, 10.141f, 190f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1399.979f, -1146.362f, -4.538f, -1534.428f, -1221.458f, 8.538f, 560f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1600.241f, -937.126f, 2.651f, -1724.148f, -845.677f, 14.538f, 150f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1873.631f, -615.433f, 5.385f, -1889.23f, -633.673f, 17.385f, 650f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2025.051f, -434.34f, 5.345f, -2066.297f, -399.486f, 17.345f, 120f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1912.926f, -482.324f, 1.968f, -1883.548f, -437.015f, 43.968f, 430f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1637.753f, -610.882f, 25.238f, -1619.315f, -587.217f, 41.238f, 255f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1387.339f, -584.663f, 22.275f, -1404.017f, -559.726f, 38.275f, 315f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1140.504f, -438.163f, 28.024f, -1166.388f, -384.033f, 44.024f, 355f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1012.658f, -293.632f, 29.915f, -1048.317f, -311.756f, 45.915f, 120f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-855.566f, -172.588f, 29.989f, -869.863f, -146.214f, 45.989f, 480f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-689.471f, -37.67f, 29.809f, -715.916f, -51.835f, 45.809f, 100f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-721.977f, 106.795f, 26.744f, -771.364f, 98.991f, 84.744f, 270f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1018.792f, 295.542f, 54.8f, -1024.618f, 185.696f, 76.8f, 490f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1330.464f, 309.088f, 51.596f, -1305.142f, 212.347f, 73.596f, 160f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1407.836f, 246.958f, 48.861f, -1432.525f, 229.915f, 70.861f, 140f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1477.162f, 261.072f, 56.639f, -1462.686f, 247.272f, 66.639f, 90f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1552.774f, 281.729f, 50.794f, -1575.409f, 248.749f, 66.794f, 190f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1774.927f, 321.237f, 48.227f, -1705.271f, 188.391f, 82.227f, 260f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1827.498f, 88.766f, 63.301f, -1802.62f, 120.088f, 85.301f, 90f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2025.797f, 173.784f, 57.746f, -1857.736f, 16.762f, 121.746f, 140f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2159.272f, 628.243f, 89.682f, -2082.667f, 124.029f, 177.682f, 130f, 0, 0, 1);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2361.799f, 453.168f, 128.538f, -2190.908f, 509.703f, 216.538f, 200f, 0, 0, 1);
			break;
	}
}







void func_1051(struct<3> Param0, float fParam3)//Position - 0x7D39C
{
	struct<3> Var0;
	
	Var0 = { 3f, 3f, 3f };
	PED::ADD_SCENARIO_BLOCKING_AREA(Param0 - Var0 * Vector(fParam3, fParam3, fParam3), Param0 + Var0 * Vector(fParam3, fParam3, fParam3), 0, 1, 1, 1);
}

int func_1052(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7D3CE
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar12;
	
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_54.f_218, 1, 1);
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_54.f_218, 0) };
		Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(Local_54.f_218) };
		uLocal_1372 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
		*uParam0 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		CAM::SET_CAM_ACTIVE(*uParam0, 1);
		CAM::RENDER_SCRIPT_CAMS(1, false, 3000, 1, 0, 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(*uParam0, uLocal_1372, "_table_sign_in_cam", "mini@triathlonintro");
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1372, "mini@triathlonintro", "_table_sign_in_michael", 1000f, -1000f, 0, 0, 1148846080, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 0, 1, 1, 0);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		}
		if (!PED::IS_PED_INJURED(Local_54.f_221))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_54.f_221);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_54.f_221, uLocal_1372, "mini@triathlonintro", "_table_sign_in_ped", 1000f, -1000f, 0, 0, 1148846080, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54.f_221, 0, 0);
		}
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_54.f_219, uLocal_1372, "_table_sign_in_clipboard", "mini@triathlonintro", 1f, 1090519040, 0, 1148846080);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_54.f_219);
		HUD::DISPLAY_RADAR(0);
		if (GlobalFunc_8315() == 0)
		{
			StringCopy(&Var6, "MGTR_introM", 24);
		}
		else if (GlobalFunc_8315() == 1)
		{
			StringCopy(&Var6, "MGTR_introF", 24);
		}
		else if (GlobalFunc_8315() == 2)
		{
			StringCopy(&Var6, "MGTR_introT", 24);
		}
		fVar12 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3000f);
		if (fVar12 < 1000f)
		{
			StringConCat(&Var6, "2", 24);
		}
		else if (fVar12 < 2000f)
		{
			StringConCat(&Var6, "3", 24);
		}
		GlobalFunc_173(&Local_814, 3, Local_54.f_221, "TRIRACER1", 0, 1);
		GlobalFunc_10607(&Local_814, "mgtraud", &Var6, 9, 0, 0, 0);
		return 1;
	}
	else if (!CAM::IS_CAM_INTERPOLATING(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_1053()//Position - 0x7D5C7
{
	func_1058();
	func_1057();
	func_1056();
	func_1055();
	func_1054();
}

void func_1054()//Position - 0x7D5E3
{
	uLocal_805 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
}

void func_1055()//Position - 0x7D5F7
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("TRIATHLON", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cLocal_1, 0);
}

void func_1056()//Position - 0x7D61A
{
	HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
}

void func_1057()//Position - 0x7D62C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_1091)
	{
		STREAMING::REQUEST_ANIM_DICT(iLocal_1091[iVar0]);
		iVar0++;
	}
	STREAMING::REQUEST_ANIM_DICT("VEH@BIKE@COMMON@FRONT@BASE");
	STREAMING::REQUEST_ANIM_SET("random@escape_paparazzi@standing@");
	STREAMING::REQUEST_ANIM_DICT("VEH@BICYCLE@ROADFRONT@BASE");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("mini@triathlonintro");
}

void func_1058()//Position - 0x7D680
{
	STREAMING::REQUEST_MODEL(joaat("tribike"));
	STREAMING::REQUEST_MODEL(joaat("tribike2"));
	STREAMING::REQUEST_MODEL(joaat("tribike3"));
	STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
	STREAMING::REQUEST_MODEL(joaat("frogger"));
	STREAMING::REQUEST_MODEL(joaat("prop_dock_bouy_3"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_roadcyc_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
}

void func_1059()//Position - 0x7D6D0
{
	func_871(&Local_2762);
	func_1067();
	func_1066();
	func_1065();
	func_1064();
	func_1063();
	func_1062();
	func_1061();
	func_1060();
	func_994();
}

void func_1060()//Position - 0x7D703
{
	Local_814.f_169 = 15f;
	Local_814.f_170 = 0;
	Local_814.f_171 = 10;
	Local_814.f_172 = (Local_814.f_171 / 2);
	Local_814.f_173 = 25f;
	Local_814.f_174 = 40f;
	if (iLocal_736 == 2)
	{
		Local_814.f_173 = 60f;
		Local_814.f_174 = 120f;
	}
	if (GlobalFunc_8315() == 0)
	{
		GlobalFunc_173(&Local_814, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_173(&Local_814, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_173(&Local_814, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	Local_814.f_165 = "MGTRAUD";
}

void func_1061()//Position - 0x7D7BE
{
	switch (iLocal_736)
	{
		case 1:
			Local_1042 = { 1750.35f, 3910.37f, 33.95f };
			break;
		
		case 0:
			Local_1042 = { -1326.66f, -1054.43f, 6.34f };
			break;
		
		case 2:
			Local_1042 = { -2306.02f, 446.45f, 173.48f };
			break;
	}
}

void func_1062()//Position - 0x7D825
{
	switch (iLocal_736)
	{
		case 1:
			iLocal_1096 = 9;
			break;
		
		case 0:
			iLocal_1096 = 11;
			break;
		
		case 2:
			iLocal_1096 = 13;
			break;
	}
}

void func_1063()//Position - 0x7D85F
{
	switch (iLocal_736)
	{
		case 1:
			Local_744 = { 1936f, 3931.37f, 31.49f };
			break;
		
		case 0:
			Local_744 = { -1229.05f, -880.58f, 11.65f };
			break;
		
		case 2:
			Local_744 = { -1241.35f, 231.29f, 63.51f };
			break;
	}
}

void func_1064()//Position - 0x7D8C6
{
	iLocal_777 = 1;
	iLocal_778 = 5;
	iLocal_779 = 16;
	iLocal_780 = 19;
	iLocal_781 = 2;
	iLocal_782 = 3;
}

void func_1065()//Position - 0x7D8E8
{
	if (iLocal_736 == 2)
	{
		sLocal_1045 = "Tri3_Bk_0";
		sLocal_1046 = "Tri3_Bk_1";
		sLocal_1047 = "Tri3_Bk_2";
		sLocal_1048 = "Tri3_Bk_3";
		sLocal_1049 = "Tri3_Bk_4";
	}
}

void func_1066()//Position - 0x7D91F
{
	sLocal_806 = "TRI_NEWS_00";
	sLocal_807 = "TRI_NEWS_01";
	sLocal_808 = "TRI_NEWS_02";
	sLocal_809 = "TRI_NEWS_03";
	sLocal_810 = "TRI_NEWS_04";
	sLocal_811 = "TRI_NEWS_05";
	sLocal_812 = "TRI_NEWS_06";
	sLocal_813 = "TRI_NEWS_07";
	if (iLocal_736 == 2)
	{
		sLocal_807 = "TRI_NEWS_30";
		sLocal_808 = "TRI_NEWS_31";
		sLocal_809 = "TRI_NEWS_32";
		sLocal_810 = "TRI_NEWS_33";
		sLocal_813 = "TRI_NEWS_34";
	}
}

void func_1067()//Position - 0x7D986
{
	iLocal_1091[0] = "mini@triathlon";
	iLocal_1091[1] = "mini@triathlon";
	iLocal_1091[2] = "mini@triathlon";
	iLocal_1091[3] = "mini@triathlon";
	sLocal_1082[0] = "male_one_handed_a";
	sLocal_1082[1] = "male_two_handed_a";
	sLocal_1082[2] = "male_unarmed_a";
	sLocal_1082[3] = "male_unarmed_b";
	sLocal_1087[0] = "jog_idle_d";
	sLocal_1087[1] = "jog_idle_e";
	sLocal_1087[2] = "jog_idle_f";
}


void func_1069()//Position - 0x7DA15
{
	if (func_278(33554432))
	{
		func_363(33554432);
	}
}

void func_1070(char[24] cParam0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x7DA32
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, cParam0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_27 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_28 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_27 = 0f;
				}
				else
				{
					fLocal_27 = (fLocal_27 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_27 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, cParam0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_32 = 0.14f;
				}
				else
				{
					fLocal_32 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_32)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_28.x, (Local_28.f_1 + fLocal_31));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_27 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_27 = 0f;
			}
		}
	}
}



















void func_1089(var uParam0, int iParam1)//Position - 0x7E952
{
	func_579(0);
	func_314(uParam0, iParam1);
	func_2();
}

