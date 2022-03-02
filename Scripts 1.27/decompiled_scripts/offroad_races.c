#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<423> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 8;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 4;
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
	var uLocal_499 = 4;
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
	var uLocal_514 = 4;
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
	var uLocal_529 = 4;
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
	var uLocal_544 = 4;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 4;
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
	var uLocal_574 = 4;
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
	var uLocal_589 = 4;
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
	bool bLocal_608 = 0;
	bool bLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = -1;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 1000;
	var uLocal_621 = 1000;
	var uLocal_622 = 0;
	char* sLocal_623 = NULL;
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
	bool bLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	struct<6> Local_640 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	struct<3> Local_648 = { 0, 0, 0 } ;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	int iLocal_653 = 0;
	char* sLocal_654 = NULL;
	char* sLocal_655 = NULL;
	char* sLocal_656 = NULL;
	struct<3> Local_657 = { 0, 0, 0 } ;
	struct<3> Local_660 = { 0, 0, 0 } ;
	struct<3> Local_663 = { 0, 0, 0 } ;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
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
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	var uLocal_694 = 6;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	int iLocal_701 = 0;
	struct<3> Local_702 = { 0, 0, 0 } ;
	var uLocal_705 = 16;
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
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
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
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
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
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	struct<3> Local_870[6];
	float fLocal_889[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	struct<16> Local_896 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_912[64] = "";
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 8;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 2;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 8;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 8;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	float fLocal_974 = 0f;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 3;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
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
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 4;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 2;
	var uLocal_1091 = 0;
	var uLocal_1092 = 4;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 4;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 12;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
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
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
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
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 3;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	int iLocal_1414 = 0;
	int iLocal_1415 = 0;
	int iLocal_1416 = 0;
	struct<8> Local_1417 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 1132396544;
	var uLocal_1430 = 1132396544;
	var uLocal_1431 = 1132396544;
	var uLocal_1432 = 0;
	var uLocal_1433 = -1082130432;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 8;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
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
	var uLocal_1493 = -1;
	var uLocal_1494 = 1092616192;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	int iLocal_1507 = 0;
	var uLocal_1508 = 0;
	bool bLocal_1509 = 0;
	int iLocal_1510 = 0;
	var uLocal_1511 = 0;
	float fLocal_1512 = 0f;
	float fLocal_1513 = 0f;
	int iLocal_1514 = 0;
	int iLocal_1515 = 0;
	int iLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 6;
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
	var uLocal_1542 = 16;
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
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
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
	var uLocal_1635 = 0;
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
	var uLocal_1706 = 0;
	bool bLocal_1707 = 0;
	var uLocal_1708 = 6;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	int iLocal_1715 = 0;
	int iLocal_1716 = 0;
	struct<3616> Local_1717 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 15;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 1084227584;
	var uLocal_5500 = 1075838976;
	var uLocal_5501 = 1084227584;
	var uLocal_5502 = 3;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 1077936128;
	var uLocal_5513 = 2;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 2;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 1065353216;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = -1;
	struct<3> Local_5525 = { 0, 0, 0 } ;
	float fLocal_5528 = 0f;
	int iLocal_5529 = 0;
	int iLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	struct<18> ScriptParam_0 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	iLocal_45 = -1;
	sLocal_623 = "SPR_UI_FAILD";
	sLocal_654 = "CHECKPOINT_NORMAL";
	sLocal_655 = "CHECKPOINT_MISSED";
	sLocal_656 = "CHECKPOINT_PERFECT";
	Local_657 = { 1694.74f, 3276.502f, 41.2796f };
	Local_660 = { 8.79494f, 0.59893f, 154.8464f };
	Local_663 = { 500f, 500f, 500f };
	fLocal_974 = ((0.05f + 0.275f) - 0.01f);
	bLocal_1509 = true;
	fLocal_1512 = 0.65f;
	fLocal_1513 = 0.83f;
	Local_5525 = { 2659.445f, 4304.7f, 44.5639f };
	fLocal_5528 = 258f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_873();
	}
	Local_1417.f_1 = 0;
	Local_1417.f_5 = 0;
	Local_1417.f_6 = 0;
	AUDIO::LOAD_STREAM("INTRO_STREAM", "DIRT_RACES_SOUNDSET");
	while (true)
	{
		switch (Local_1417.f_1)
		{
			case 0:
			case 1:
				if (!func_823(ScriptParam_0))
				{
					Local_1417.f_1 = 1;
				}
				if (GlobalFunc_226(&(Local_46.f_335)) && !Local_46.f_339)
				{
					if (GlobalFunc_5182(&(Local_46.f_335)) >= 0.5f)
					{
						Local_46.f_339 = 1;
					}
				}
				if (!func_2(ScriptParam_0))
				{
					Local_1417.f_1 = 2;
				}
				break;
			
			case 2:
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_873();
				}
				break;
		}
		if (bLocal_608)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		}
		GlobalFunc_587();
		SYSTEM::WAIT(0);
	}
}


int func_2(struct<18> Param0)//Position - 0x1DD
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_46.f_1))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46.f_1, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Local_46.f_1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Local_46.f_1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (Local_1717.f_11 != 0)
	{
		Local_1717.f_14 = (Local_1717.f_14 - 25);
		if (Local_1717.f_14 <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_1717.f_11);
			Local_1717.f_11 = 0;
		}
		else
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_1717.f_11, 255, 255, 255, GlobalFunc_3642(SYSTEM::CEIL((1.5f * IntToFloat(Local_1717.f_14))), 255));
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_1717.f_11, 255, 255, 255, Local_1717.f_14);
		}
	}
	switch (Local_1417.f_6)
	{
		case 0:
			fLocal_5528 = fLocal_5528;
			Local_1417 = -1;
			Local_46.f_11 = Param0;
			func_819();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
			}
			func_801(&Local_1717);
			func_800();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			if (GlobalFunc_2951(iLocal_639, 1))
			{
				GlobalFunc_6533(&iLocal_639, 1);
			}
			if (!Local_1717.f_1)
			{
				if (GlobalFunc_82())
				{
					if (!func_792(&Local_1717))
					{
						if (func_791(&Local_1717, Param0.f_16))
						{
							if (iLocal_686)
							{
								if (func_750(&Local_1717, &(Local_1717.f_396[0 /*203*/]), Param0.f_17))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
									{
									}
									func_748(&Local_1717);
									func_747(&Local_1717, &iLocal_5529, 1036831949);
									func_746(&Local_1717, &iLocal_5530, 1036831949, 0);
									func_725(&Local_1717);
									AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1717.f_396[0 /*203*/].f_9, 0);
									if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_2))
									{
										ENTITY::SET_ENTITY_VISIBLE(Local_46.f_2, 1);
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46.f_2, 1, 1);
									}
								}
							}
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_669))
			{
			}
			Local_1417.f_6 = 3;
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_2))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_46.f_2, 1);
			}
			if (Local_1717.f_1)
			{
				if (GlobalFunc_2951(iLocal_639, 1))
				{
					GlobalFunc_6533(&iLocal_639, 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				func_709();
				iLocal_5529 = 1;
				iLocal_5530 = 1;
				Local_1417.f_6 = 4;
				Local_1717.f_30 = 0;
			}
			else
			{
				func_801(&Local_1717);
				func_708(Local_46.f_11);
				func_725(&Local_1717);
				if (func_707())
				{
					Local_1417.f_6 = 5;
				}
			}
			break;
		
		case 4:
			if (!func_801(&Local_1717))
			{
				func_706(&Local_1717);
				func_705(&Local_1717);
				func_747(&Local_1717, &iLocal_5529, 1036831949);
				func_746(&Local_1717, &iLocal_5530, 1036831949, 0);
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				Local_1417.f_6 = 14;
				if (ENTITY::DOES_ENTITY_EXIST(Local_1717.f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(Local_1717.f_396[0 /*203*/].f_9))
				{
					AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1717.f_396[0 /*203*/].f_9, 1);
					AUDIO::SET_VEH_RADIO_STATION(Local_1717.f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK");
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 5000f, 0);
					GlobalFunc_7777(&(Local_1417.f_7));
				}
			}
			break;
		
		case 14:
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_5182(&(Local_1417.f_7)) > 5f)
			{
				GlobalFunc_235(&(Local_1417.f_7));
				STREAMING::NEW_LOAD_SCENE_STOP();
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				Local_1417.f_6 = 13;
			}
			break;
		
		case 13:
			if (GlobalFunc_4625(5000))
			{
				Local_1717.f_3 = ((CAM::DOES_CAM_EXIST(Local_46.f_333) && CAM::IS_CAM_ACTIVE(Local_46.f_333)) && CAM::IS_CAM_RENDERING(Local_46.f_333));
				Local_1717.f_1 = 0;
				Local_1717.f_30 = 0;
				if (Local_1717.f_3)
				{
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				Local_1417.f_6 = 10;
			}
			break;
		
		case 5:
			func_701();
			if (!func_801(&Local_1717))
			{
				if (GlobalFunc_4625(500))
				{
					if (func_725(&Local_1717))
					{
						Local_1717.f_30 = 0;
						iLocal_1716 = 0;
						Local_1417.f_6 = 10;
					}
				}
			}
			break;
		
		case 10:
			func_701();
			if (GlobalFunc_4625(500))
			{
				Local_1717.f_3615 = 0;
				iLocal_692 = 0;
				iLocal_689 = 0;
				Local_648.f_1 = 0;
				GlobalFunc_7260(&uLocal_5531, 10f);
				if (Local_1717.f_3)
				{
					Local_1717.f_31 = 8;
				}
				else
				{
					Local_1717.f_31 = 0;
				}
				Local_1417.f_6 = 11;
			}
			break;
		
		case 11:
			if (Local_1417 != 1)
			{
				if (GlobalFunc_2951(Local_648.f_1, 8) && !Local_1717.f_3615)
				{
					Local_1717.f_3615 = 1;
					iLocal_44 = 0;
					if (GlobalFunc_1720())
					{
						CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA_NAME(ENTITY::GET_ENTITY_MODEL(Local_1717.f_396[0 /*203*/].f_9));
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					}
					iLocal_45 = MISC::GET_GAME_TIMER() + 300;
				}
				func_696(&(Local_1717.f_396[0 /*203*/]));
				func_694(Local_46.f_11);
				if (!func_12(&Local_1717))
				{
					if (Local_1717.f_1)
					{
						Local_1417.f_6 = 3;
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < Local_1717.f_18)
						{
							if (iVar0 != 0)
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1717.f_396[iVar0 /*203*/].f_8) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1717.f_396[iVar0 /*203*/].f_8))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1717.f_396[iVar0 /*203*/].f_8));
								}
							}
							iVar0++;
						}
						SYSTEM::SETTIMERA(0);
						Local_1417.f_6 = 12;
					}
				}
				if (Local_1717.f_31 == 10)
				{
					func_5(&Local_1717);
				}
			}
			break;
		
		case 12:
			if (SYSTEM::TIMERA() >= 2000)
			{
				Local_1417.f_6 = 15;
			}
			break;
		
		case 15:
			func_4();
			func_3();
			PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
			PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			switch (Local_46.f_11)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				
				case 5:
					break;
				
				case 2:
					break;
			}
			return 0;
			break;
	}
	return 1;
}

void func_3()//Position - 0x829
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	TASK::RESET_EXCLUSIVE_SCENARIO_GROUP();
}

void func_4()//Position - 0x83D
{
	if (CAM::DOES_CAM_EXIST(uLocal_683))
	{
		CAM::DESTROY_CAM(uLocal_683, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_684))
	{
		CAM::DESTROY_CAM(uLocal_684, 0);
	}
}

void func_5(int iParam0)//Position - 0x869
{
	int iVar0;
	char cVar1[16];
	
	if (GlobalFunc_7950(&uLocal_5531, 5f))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_18)
		{
			if (iParam0->f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				func_9(iParam0, iVar0);
			}
			iVar0++;
		}
		GlobalFunc_4963(&uLocal_5531, 0f);
	}
	if (bLocal_1509)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_18)
		{
			if (iParam0->f_396[iVar0 /*203*/].f_11 < iParam0->f_17)
			{
				if (iParam0->f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && iParam0->f_2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_8) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_9))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_396[iVar0 /*203*/].f_8))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_396[iVar0 /*203*/].f_9, -1) != iParam0->f_396[iVar0 /*203*/].f_8)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_396[iVar0 /*203*/].f_8, -1794415470) != 1)
								{
									if (GlobalFunc_367(iParam0->f_396[iVar0 /*203*/].f_9, 0, 0, 0))
									{
										PED::SET_PED_HELMET(iParam0->f_396[iVar0 /*203*/].f_8, 1);
										TASK::TASK_ENTER_VEHICLE(iParam0->f_396[iVar0 /*203*/].f_8, iParam0->f_396[iVar0 /*203*/].f_9, -1, -1, 1073741824, 1, 0);
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_396[iVar0 /*203*/].f_8, -235832601) != 1 && GlobalFunc_5182(&(iParam0->f_5)) > 2f)
							{
								if (Local_46.f_11 + 1 >= 1 && Local_46.f_11 + 1 <= 6)
								{
									StringCopy(&cVar1, "Offroad_", 16);
									switch (Local_46.f_11)
									{
										case 0:
											StringIntConCat(&cVar1, 1, 16);
											break;
										
										case 1:
											StringIntConCat(&cVar1, 2, 16);
											break;
										
										case 2:
											StringIntConCat(&cVar1, 6, 16);
											break;
										
										case 3:
											StringIntConCat(&cVar1, 3, 16);
											break;
										
										case 4:
											StringIntConCat(&cVar1, 4, 16);
											break;
										
										case 5:
											StringIntConCat(&cVar1, 5, 16);
											break;
									}
									PED::SET_PED_HELMET(iParam0->f_396[iVar0 /*203*/].f_8, 1);
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_396[iVar0 /*203*/].f_8, iParam0->f_396[iVar0 /*203*/].f_9, &cVar1, 786468, 0, 24, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[iVar0 /*203*/].f_9), 0, 1073741824);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}




void func_9(int iParam0, int iParam1)//Position - 0xBCF
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > iParam0->f_396)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iParam1 /*203*/].f_9))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_9))
		{
			switch (Local_46.f_11)
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				
				case 5:
					break;
				
				case 2:
					break;
				
				default:
					break;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iParam1 /*203*/].f_8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iParam1 /*203*/].f_9))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_8, iParam0->f_396[iParam1 /*203*/].f_9, 0))
			{
				fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[iParam1 /*203*/].f_9);
				if (iParam0->f_396[0 /*203*/].f_11 == iParam0->f_396[iParam1 /*203*/].f_11)
				{
					fVar0 = (fVar0 * 0.9f);
				}
				else if (iParam0->f_396[iParam1 /*203*/].f_11 > iParam0->f_396[0 /*203*/].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_8, iParam0->f_396[iParam1 /*203*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_396[iParam1 /*203*/].f_9, -1))
					{
						PED::SET_PED_INTO_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_8, iParam0->f_396[iParam1 /*203*/].f_9, -1);
					}
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_396[iParam1 /*203*/].f_8, fVar0);
				}
			}
		}
	}
}



int func_12(int iParam0)//Position - 0xD9A
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	switch (iParam0->f_31)
	{
		case 0:
			switch (Local_46.f_11)
			{
				case 0:
					fLocal_1512 = 0.85f;
					fLocal_1513 = 0.9f;
					break;
				
				case 3:
					fLocal_1512 = 0.85f;
					fLocal_1513 = 0.9f;
					break;
				
				case 4:
					fLocal_1512 = 0.85f;
					fLocal_1513 = 0.9f;
					break;
				
				case 2:
					fLocal_1512 = 0.85f;
					fLocal_1513 = 0.9f;
					break;
			}
			GlobalFunc_6533(&iLocal_637, 4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_693(iParam0);
			if (Local_46 == 0)
			{
				func_692(iParam0);
				if (!GlobalFunc_2951(iLocal_637, 16))
				{
					func_683(iParam0, 0, 1);
					func_683(iParam0, 1, 0);
					func_682(&iLocal_637, 16);
				}
			}
			if (iParam0->f_1 || iParam0->f_3620)
			{
				GlobalFunc_235(&(iParam0->f_19));
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9))
				{
					AUDIO::SET_VEH_RADIO_STATION(iParam0->f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK");
				}
				iLocal_653 = 0;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			VEHICLE::SET_VEHICLE_HANDBRAKE(iParam0->f_396[0 /*203*/].f_9, 1);
			func_701();
			iVar0 = 0;
			while (iVar0 < iParam0->f_18)
			{
				if (iVar0 != 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_9))
					{
						VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iParam0->f_396[iVar0 /*203*/].f_9, 1);
					}
				}
				iVar0++;
			}
			iParam0->f_31 = 1;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9))
			{
				fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9);
				if ((ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer") || ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer2")) || ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer3"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar1 * fLocal_1512));
				}
				else if (ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("sanchez"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar1 * fLocal_1513));
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (!func_678(&(iParam0->f_19)))
			{
				AUDIO::STOP_SOUND(uLocal_1506);
				AUDIO::STOP_AUDIO_SCENE("RACE_INTRO_GENERIC");
				func_677(iParam0);
				if (GlobalFunc_2951(iLocal_637, 16))
				{
					GlobalFunc_6533(&iLocal_637, 16);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
				}
				HUD::DISPLAY_HUD(1);
				func_675(iParam0);
				iParam0->f_31 = 10;
				GlobalFunc_6877(&(Local_46.f_350));
			}
			else
			{
				func_701();
			}
			break;
		
		case 2:
			HUD::DISPLAY_HUD(0);
			if (!GlobalFunc_2951(iLocal_637, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_671(iParam0);
				func_656(iParam0);
				GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_46.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
				GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
				GlobalFunc_813(&(Local_46.f_153), "HUD_INPUT68", 2, 211, 1, 1, 0);
				GlobalFunc_5850(&(Local_46.f_153), 1);
				func_682(&iLocal_637, 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (GlobalFunc_663("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			func_650(iParam0, &(iParam0->f_396[0 /*203*/].f_9));
			if (CAM::DOES_CAM_EXIST(uLocal_685))
			{
				if (!CAM::IS_CAM_ACTIVE(uLocal_685))
				{
					CAM::SET_CAM_ACTIVE(uLocal_685, 1);
					if (CAM::IS_CINEMATIC_CAM_RENDERING())
					{
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 0, 0);
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
					CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.16f);
					SYSTEM::SETTIMERA(0);
					func_646();
					func_645(0);
					PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_396[0 /*203*/].f_9, 0))
					{
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_912))
						{
							VEHICLE::SET_VEHICLE_IS_RACING(iParam0->f_396[0 /*203*/].f_9, 0);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iParam0->f_396[0 /*203*/].f_9, &cLocal_912, 786485, 0, 8, -1, -1f, 0, 1073741824);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					}
					PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
					GlobalFunc_778(1);
					if (iParam0->f_396[0 /*203*/].f_12 <= 3)
					{
						if (func_643(ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9)))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MINI@RACING@BIKE@", "celebrate_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
						}
						else if (func_642(ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9)))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MINI@RACING@QUAD@", "celebrate_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
						}
					}
					func_641(iParam0);
					AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
					GlobalFunc_6877(&(Local_46.f_335));
					if (PLAYER::IS_PLAYER_ONLINE())
					{
						iLocal_1517 = 1;
						func_636(Local_46.f_11, &(Local_46.f_78[Local_46.f_11 /*8*/]));
					}
					iParam0->f_31 = 4;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_5182(&(Local_46.f_335)) >= 3.666f)
			{
				func_631(iParam0);
				CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_46.f_333, uLocal_685, 666, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 1000, 1);
				GlobalFunc_812(&Global_96007, 262144);
				GlobalFunc_4907();
				iParam0->f_31 = 5;
			}
			else if (GlobalFunc_5182(&(Local_46.f_335)) >= 2f)
			{
				if (!GlobalFunc_2951(iLocal_637, 4))
				{
					GlobalFunc_9029(1);
					if (!AUDIO::IS_MISSION_COMPLETE_PLAYING())
					{
						func_682(&iLocal_637, 4);
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					if (GlobalFunc_663("SPR_RETR_FAIL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
				}
			}
			break;
		
		case 5:
			if (!GlobalFunc_2951(iLocal_637, 512))
			{
				if (iParam0->f_396[0 /*203*/].f_12 > 1)
				{
					func_682(&iLocal_637, 512);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "RACE_PLACED", "HUD_AWARDS", 1);
				}
			}
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
			}
			iParam0->f_3585 = func_521(iParam0);
			if (Local_46.f_277.f_1 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_46.f_277.f_1);
				if (!STREAMING::HAS_MODEL_LOADED(Local_46.f_277.f_1))
				{
					STREAMING::REQUEST_MODEL(Local_46.f_277.f_1);
				}
			}
			if (iParam0->f_3585 == 1)
			{
				GlobalFunc_5770();
				func_508();
				if (Local_46.f_11 == 4 && Local_46.f_342)
				{
					if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
					{
						STREAMING::REQUEST_IPL("CS2_06_TriAf02");
					}
				}
				HUD::CLEAR_HELP(1);
				if (GlobalFunc_2951(iLocal_637, 1))
				{
					GlobalFunc_6533(&iLocal_637, 1);
				}
				GlobalFunc_810(&(Local_46.f_153));
				if (iParam0->f_396[0 /*203*/].f_12 == 1)
				{
					if (Local_46.f_152 != 1)
					{
						GlobalFunc_8039(GlobalFunc_8315(), 4, 3);
					}
				}
				if (Local_46.f_277.f_1 != 0)
				{
					if (STREAMING::HAS_MODEL_LOADED(Local_46.f_277.f_1) || !Local_46.f_151)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							}
							else
							{
								iVar2 = iParam0->f_396[0 /*203*/].f_9;
							}
							if (Local_46.f_2 != iVar2)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), iParam0->f_3603, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), iParam0->f_3606);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 1);
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_2))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(Local_46.f_2, iParam0->f_3603, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_46.f_2, iParam0->f_3606);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_46.f_2);
							}
							if (((ENTITY::DOES_ENTITY_EXIST(Local_46.f_2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46.f_2, 0)) && Local_46.f_2 != iVar2) || Local_46.f_151)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_396[0 /*203*/].f_9, 1, 1);
									VEHICLE::DELETE_VEHICLE(&(iParam0->f_396[0 /*203*/].f_9));
								}
								if (Local_46.f_151)
								{
									func_501(24, iParam0->f_3803, iParam0->f_3806);
								}
								else
								{
									ENTITY::SET_ENTITY_COLLISION(Local_46.f_2, 1, 0);
									ENTITY::SET_ENTITY_COORDS(Local_46.f_2, iParam0->f_3803, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_46.f_2, iParam0->f_3806);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_46.f_2);
									ENTITY::SET_ENTITY_VISIBLE(Local_46.f_2, 1);
								}
							}
						}
						if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
						{
							PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
						}
						else
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
						func_492(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
						func_243(PLAYER::PLAYER_PED_ID(), &(Local_46.f_356), 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						AUDIO::STOP_SCRIPTED_CONVERSATION(0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						GlobalFunc_6877(&uLocal_624);
						func_242(iParam0);
						CAM::SET_CAM_ACTIVE(uLocal_673, 1);
						GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 600, 0);
						GlobalFunc_9530(0, 0, 0);
						iParam0->f_31 = 11;
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), iParam0->f_3603, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), iParam0->f_3606);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_396[0 /*203*/].f_9, 1, 1);
					if (!Local_46.f_151)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_9, iParam0->f_3803, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_9, iParam0->f_3606);
						}
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_396[0 /*203*/].f_9));
					}
					if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
					else
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					func_492(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
					func_243(PLAYER::PLAYER_PED_ID(), &(Local_46.f_356), 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					GlobalFunc_6877(&uLocal_624);
					GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 600, 0);
					func_242(iParam0);
					CAM::SET_CAM_ACTIVE(uLocal_673, 1);
					GlobalFunc_9530(0, 0, 0);
					iParam0->f_31 = 11;
				}
			}
			else if (iParam0->f_3585 == 2)
			{
				GlobalFunc_5770();
				func_508();
				iLocal_1515 = 0;
				iLocal_1514 = 0;
				iLocal_1519 = 0;
				if (GlobalFunc_2951(iLocal_637, 1))
				{
					GlobalFunc_6533(&iLocal_637, 1);
				}
				if (iParam0->f_396[0 /*203*/].f_12 == 1)
				{
					if (Local_46.f_152 != 1)
					{
						GlobalFunc_8039(GlobalFunc_8315(), 4, 3);
					}
				}
				GlobalFunc_810(&(Local_46.f_153));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				GlobalFunc_6531(&uLocal_611, 0, 0);
				iParam0->f_31 = 11;
				iParam0->f_396[0 /*203*/].f_11 = 0;
				GlobalFunc_235(&(iParam0->f_19));
				iLocal_44 = 0;
				iParam0->f_3615 = 0;
				AUDIO::STOP_AUDIO_SCENE("OFFROAD_RACES_OUTRO_SCENE");
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				AUDIO::START_AUDIO_SCENE("RACE_INTRO_GENERIC");
			}
			break;
		
		case 11:
			if (func_214(iParam0))
			{
				if (iParam0->f_3585 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
					GlobalFunc_778(0);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_674, uLocal_673, 1500, 0, 1);
					GlobalFunc_6877(&uLocal_624);
					iParam0->f_31 = 12;
				}
				else if (iParam0->f_3585 == 2)
				{
					iParam0->f_2 = 0;
					iParam0->f_1 = 1;
					iLocal_653 = 0;
					iParam0->f_396[0 /*203*/].f_23 = 5;
					GlobalFunc_778(0);
					iParam0->f_31 = 10;
				}
			}
			break;
		
		case 12:
			if (GlobalFunc_5182(&uLocal_624) >= 1.5f && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					CAM::SET_CAM_ACTIVE(uLocal_674, 0);
					CAM::SET_CAM_ACTIVE(uLocal_675, 1);
					func_213(&uLocal_1511);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_675, uLocal_1511, "offroad_outro_cam", "MINI@RACING@QUAD@");
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1511, "MINI@RACING@QUAD@", "offroad_outro_mic", 1000f, -4f, 2, 0, 1148846080, 0);
								break;
							
							case 1:
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1511, "MINI@RACING@QUAD@", "offroad_outro_fra", 1000f, -4f, 2, 0, 1148846080, 0);
								break;
							
							case 2:
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_1511, "MINI@RACING@QUAD@", "offroad_outro_trv", 1000f, -4f, 2, 0, 1148846080, 0);
								break;
							}
					}
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_1511, 0);
					iParam0->f_31 = 13;
				}
				else
				{
					GlobalFunc_9545(1, 1, 0);
					iParam0->f_31 = 14;
				}
			}
			break;
		
		case 13:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_1511) >= 1f)
				{
					GlobalFunc_9545(1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iParam0->f_31 = 14;
				}
				else if (((PAD::GET_DISABLED_CONTROL_NORMAL(0, 218) < -0.2f || PAD::GET_DISABLED_CONTROL_NORMAL(0, 218) > 0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, 219) < -0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, 219) > 0.2f)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0, 1, 0);
					GlobalFunc_9545(1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iParam0->f_31 = 14;
				}
			}
			break;
		
		case 6:
			if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_1496))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
				if (iParam0->f_4)
				{
					if (Local_46.f_11 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_8, 1761.139f, 3903.328f, 34.7834f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_8, 15.177f);
						}
					}
					else if (Local_46.f_11 == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_8, -1340.348f, -1015.004f, 7.9419f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_8, 62.3626f);
						}
					}
					else if (Local_46.f_11 == 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_8, -2280.692f, 412.326f, 173.6019f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_8, 183.1624f);
						}
					}
				}
				func_189(iParam0);
				GlobalFunc_6877(&uLocal_1497);
				iParam0->f_31 = 7;
			}
			break;
		
		case 7:
			if (GlobalFunc_7084(&uLocal_1497, 0.5f))
			{
				GlobalFunc_235(&uLocal_1497);
				iParam0->f_1 = 0;
				iParam0->f_31 = 14;
			}
			break;
		
		case 8:
			if (CAM::IS_CAM_INTERPOLATING(Local_46.f_334))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 500, 0);
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				iParam0->f_31 = 9;
			}
			else if (!GlobalFunc_537(CAM::GET_CAM_COORD(Local_46.f_333), func_188() + Vector(1000f, 0f, 0f), 1056964608))
			{
				CAM::SET_CAM_COORD(Local_46.f_333, func_188() + Vector(1000f, 0f, 0f));
				CAM::SET_CAM_ROT(Local_46.f_333, func_186(), 2);
			}
			else if (CAM::DOES_CAM_EXIST(Local_46.f_334))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_46.f_334, Local_46.f_333, 500, 1, 1);
			}
			break;
		
		case 9:
			if (func_185(iParam0))
			{
				Local_46.f_338 = 0;
				iParam0->f_3620 = 0;
				iParam0->f_31 = 0;
			}
			break;
		
		case 10:
			if (!Local_46.f_338 && !iParam0->f_3620)
			{
				if (iLocal_44 == 1 || iLocal_44 == 2)
				{
					if (GlobalFunc_1720() && iLocal_44 == 2)
					{
						CAM::_SET_GAMEPLAY_CAM_VEHICLE_CAMERA_NAME(ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9));
					}
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 10f, 3, 0);
					Local_46.f_338 = 1;
				}
				else if (((PAD::IS_CONTROL_JUST_PRESSED(0, 71) || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_JUST_PRESSED(0, 1)) || PAD::IS_CONTROL_JUST_PRESSED(0, 2))
				{
					CAM::_0x59424BD75174C9B1();
					CAM::RENDER_SCRIPT_CAMS(0, 1, 1300, 1, 0, 0);
					Local_46.f_338 = 1;
				}
			}
			else if (Local_46.f_338 && !Local_46.f_340)
			{
				Local_46.f_340 = 1;
				func_184(iParam0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9))
			{
				fVar3 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9);
				if (ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer") || ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer2"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar3 * fLocal_1512));
				}
				else if (ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("sanchez"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar3 * fLocal_1513));
				}
			}
			if (GlobalFunc_5182(&(Local_46.f_350)) <= 1f && iLocal_653 > 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_648.x, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			}
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 305, 1);
			iVar0 = 0;
			while (iVar0 < iParam0->f_18)
			{
				if (iParam0->f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && !iParam0->f_396[iVar0 /*203*/].f_192)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_9))
					{
						if (!GlobalFunc_226(&(iParam0->f_396[iVar0 /*203*/].f_195)))
						{
							GlobalFunc_7777(&(iParam0->f_396[iVar0 /*203*/].f_195));
						}
						else if (GlobalFunc_5182(&(iParam0->f_396[iVar0 /*203*/].f_195)) > 1.5f)
						{
							GlobalFunc_235(&(iParam0->f_396[iVar0 /*203*/].f_195));
							iParam0->f_396[iVar0 /*203*/].f_192 = 1;
						}
						else if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_396[iVar0 /*203*/].f_9))
						{
							fVar4 = (GlobalFunc_5182(&(iParam0->f_396[iVar0 /*203*/].f_195)) / 1.5f);
							fVar5 = func_182(iParam0->f_3613, iParam0->f_3614, fVar4, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0->f_396[iVar0 /*203*/].f_9, fVar5);
						}
					}
				}
				iVar0++;
			}
			if (!GlobalFunc_2951(iLocal_637, 16))
			{
				func_683(iParam0, 0, 1);
				func_683(iParam0, 1, 0);
				func_682(&iLocal_637, 16);
				func_645(1);
			}
			if (!Local_46 == 2)
			{
				if (Local_46 == 1)
				{
					func_181(iParam0);
				}
				if (iParam0->f_2)
				{
					func_154(iParam0);
				}
				else
				{
					GlobalFunc_7542(&uLocal_611, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				}
			}
			if (!func_39(iParam0, Local_46))
			{
				if (Local_46.f_11 >= 0 && Local_46.f_11 < 7)
				{
					Local_46.f_152 = func_38(Local_46.f_11);
				}
				GlobalFunc_235(&(iParam0->f_19));
				AUDIO::STOP_AUDIO_SCENE("OFFROAD_RACES_DURING_RACE");
				AUDIO::START_AUDIO_SCENE("OFFROAD_RACES_OUTRO_SCENE");
				iParam0->f_31 = 2;
				GlobalFunc_235(&(iParam0->f_27));
			}
			if (iParam0->f_1 && iParam0->f_396[0 /*203*/].f_23 >= 11)
			{
				iParam0->f_31 = 1;
				iParam0->f_1 = 0;
			}
			break;
		
		case 14:
			AUDIO::STOP_AUDIO_SCENE("OFFROAD_RACES_OUTRO_SCENE");
			PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
			PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
			if (Local_46 == 0)
			{
				return 0;
			}
			else if (Local_46 == 1)
			{
				if (!CAM::_0x3044240D2E0FA842())
				{
					if (!GlobalFunc_2951(iLocal_637, 64))
					{
						if (!bLocal_608 && !iParam0->f_1)
						{
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0f, 3, 0);
						}
						func_682(&iLocal_637, 64);
					}
					else
					{
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
						if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_396[0 /*203*/].f_9, 0);
						}
						func_645(0);
						GlobalFunc_6533(&iLocal_637, 64);
						return 0;
					}
				}
			}
			else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				return 0;
			}
			else if (!GlobalFunc_226(&uLocal_1503))
			{
				GlobalFunc_8641(&uLocal_1503);
			}
			else if (GlobalFunc_5182(&uLocal_1503) > 5f)
			{
				return 0;
			}
			if (HUD::IS_HUD_HIDDEN())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9))
				{
				}
				HUD::DISPLAY_HUD(1);
			}
			func_13(iParam0);
			break;
	}
	return 1;
}

void func_13(int iParam0)//Position - 0x2183
{
	if (iParam0->f_396[0 /*203*/].f_12 == 1)
	{
		if (!GlobalFunc_2951(iLocal_637, 256))
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					GlobalFunc_10608(0, 1, 28, 500, 0);
					break;
				
				case 1:
					GlobalFunc_10608(1, 1, 28, 500, 0);
					break;
				
				case 2:
					GlobalFunc_10608(2, 1, 28, 500, 0);
					break;
			}
			func_682(&iLocal_637, 256);
		}
	}
}

























int func_38(int iParam0)//Position - 0x30B6
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_RANKS[iParam0];
	return iVar0;
}

int func_39(int iParam0, int iParam1)//Position - 0x30D2
{
	float fVar0;
	int iVar1;
	struct<11> Var2;
	struct<11> Var13;
	int iVar24;
	bool bVar25;
	char cVar26[16];
	
	if (GlobalFunc_226(&(iParam0->f_5)))
	{
		fVar0 = GlobalFunc_5182(&(iParam0->f_5));
	}
	func_152(iParam0->f_396[0 /*203*/].f_11, iParam0->f_2);
	iLocal_1510++;
	iVar1 = 0;
	while (iVar1 < iParam0->f_18)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_396[iVar1 /*203*/].f_8) && iParam0->f_396[iVar1 /*203*/].f_11 < iParam0->f_17)
		{
			if ((iLocal_1510 % iParam0->f_18) == iVar1)
			{
				func_150(iParam0, iVar1);
			}
			bVar25 = false;
			if (iParam0->f_396[iVar1 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar25 = true;
			}
			iVar24 = iParam0->f_396[iVar1 /*203*/].f_11;
			if (iParam0->f_396[iVar1 /*203*/].f_11 >= iParam0->f_17)
			{
				Var2 = { iParam0->f_32[(iParam0->f_17 - 1) /*11*/] };
			}
			else
			{
				Var2 = { iParam0->f_32[iVar24 /*11*/] };
			}
			if (iVar24 < (iParam0->f_17 - 1))
			{
				Var13 = { iParam0->f_32[iVar24 + 1 /*11*/] };
			}
			else
			{
				Var13 = { Var2 };
			}
			if (iVar24 != iParam0->f_17)
			{
				iParam0->f_396[iVar1 /*203*/].f_13 = (fVar0 - iParam0->f_396[iVar1 /*203*/].f_15);
				if (iParam0->f_396[iVar1 /*203*/].f_13 < 0f)
				{
					iParam0->f_396[iVar1 /*203*/].f_13 = 0f;
				}
			}
			if ((!bVar25 && !bLocal_608) && !bLocal_609)
			{
				if ((iLocal_1510 % iParam0->f_18) == iVar1)
				{
					func_148(&(iParam0->f_396[iVar1 /*203*/].f_9), &(iParam0->f_396[iVar1 /*203*/].f_10));
				}
			}
			if (!func_113(iParam0, &(iParam0->f_396[iVar1 /*203*/]), bVar25))
			{
				if (!bVar25 && (iLocal_1510 % iParam0->f_18) == iVar1)
				{
					func_111(iParam0, iVar1);
				}
				if (bVar25)
				{
					if (PAD::IS_CONTROL_ENABLED(0, 75))
					{
						PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					}
					if ((PAD::IS_CONTROL_JUST_RELEASED(0, 75) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 75)) && !iParam0->f_3618)
					{
						iParam0->f_3617 = 0;
						Local_46.f_341 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if ((PAD::IS_CONTROL_PRESSED(0, 75) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75)) || iParam0->f_3618)
					{
						switch (iParam0->f_3617)
						{
							case 0:
								Local_46.f_341 = 1;
								GlobalFunc_6877(&uLocal_1500);
								iParam0->f_3617 = 1;
								break;
							
							case 1:
								if (GlobalFunc_5182(&uLocal_1500) > 0.4f)
								{
									GlobalFunc_6877(&uLocal_1500);
									iParam0->f_3617 = 2;
								}
								break;
							
							case 2:
								if (GlobalFunc_5182(&uLocal_1500) > 1.5f)
								{
									iParam0->f_3617 = 3;
									iParam0->f_396[0 /*203*/].f_23 = 4;
									GlobalFunc_6533(&iLocal_638, 32768);
									iParam0->f_2 = 0;
									iParam0->f_3618 = 1;
									Local_46.f_341 = 0;
								}
								break;
							
							case 3:
								iParam0->f_3617 = 4;
								break;
							
							case 4:
								if (!PAD::IS_CONTROL_PRESSED(0, 75) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
								{
									PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
									iParam0->f_3617 = 0;
									iParam0->f_3618 = 0;
								}
								break;
							}
						}
				}
				if (bVar25)
				{
					if (iParam0->f_3617 == 2)
					{
						GlobalFunc_5824(SYSTEM::ROUND((GlobalFunc_5182(&uLocal_1500) * 1000f)), 1500, "RACES_RMETER", 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
					}
				}
				if ((!bVar25 && !bLocal_608) && !bLocal_609)
				{
					func_148(&(iParam0->f_396[iVar1 /*203*/].f_9), &(iParam0->f_396[iVar1 /*203*/].f_10));
				}
				if ((iLocal_1510 % iParam0->f_18) == iVar1)
				{
					func_108(iParam0, iVar1);
				}
				if (bVar25)
				{
					if (iParam0->f_396[iVar1 /*203*/].f_14 != 0f)
					{
						GlobalFunc_7777(&(iParam0->f_19));
					}
					if (GlobalFunc_2951(iLocal_637, 8))
					{
						func_683(iParam0, iVar24, 1);
						if (iVar24 < (iParam0->f_17 - 1))
						{
							func_683(iParam0, iVar24 + 1, 0);
						}
						GlobalFunc_6533(&iLocal_637, 8);
					}
				}
				if (iParam0->f_2 && bVar25)
				{
					iParam0->f_16 = func_104(iParam0, &Var2, &Var13, iParam0->f_396[iVar1 /*203*/].f_8);
					func_98(&Var2, &Var13);
				}
				else if (!bVar25)
				{
					iParam0->f_16 = func_104(iParam0, &Var2, &Var13, iParam0->f_396[iVar1 /*203*/].f_8);
					if (0 == iParam0->f_16)
					{
					}
				}
				if (iParam0->f_16 != -1)
				{
					iParam0->f_396[iVar1 /*203*/].f_11++;
					iVar24 = iParam0->f_396[iVar1 /*203*/].f_11;
					if (iVar24 >= (iParam0->f_17 - 1))
					{
						Var2 = { iParam0->f_32[(iParam0->f_17 - 1) /*11*/] };
					}
					else
					{
						Var2 = { iParam0->f_32[iVar24 /*11*/] };
					}
					if (bVar25)
					{
						func_95(iParam0, (iVar24 - 1));
						if (iVar24 == iParam0->f_17)
						{
							if (!GlobalFunc_225(&(iParam0->f_5)))
							{
								GlobalFunc_5693(&(iParam0->f_5));
							}
							if (iParam1 == 1)
							{
								iParam0->f_2 = 0;
								Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iRacePlaceEarned = 999;
								if (iParam0->f_396[iVar1 /*203*/].f_12 <= 3)
								{
									Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_iRacePlaceEarned = iParam0->f_396[iVar1 /*203*/].f_12;
									func_682(&(Global_SAVE_DATA.OFFROAD_iBitflags), 1);
								}
							}
							else if (iParam1 == 2)
							{
								if (iParam0->f_396[iVar1 /*203*/].f_12 <= 3)
								{
									func_682(&(Global_SAVE_DATA.TRIATHLON_SAVED_STRUCT.TRIATHLON_iBitFlags), 1);
								}
								AUDIO::TRIGGER_MUSIC_EVENT("MGTR_COMPLETE");
							}
							return 0;
						}
						else
						{
							func_683(iParam0, iVar24, 1);
							if (iVar24 < (iParam0->f_17 - 1))
							{
								func_683(iParam0, iVar24 + 1, 0);
							}
						}
						if (iParam0->f_396[iVar1 /*203*/].f_14 == 0f)
						{
							if (GlobalFunc_226(&(iParam0->f_19)))
							{
								GlobalFunc_235(&(iParam0->f_19));
							}
						}
						if (iParam0->f_17 > 0)
						{
							if (iParam0->f_13 > 0f)
							{
								if (iVar24 == SYSTEM::ROUND((IntToFloat(iParam0->f_17) / 2f)))
								{
									iParam0->f_396[iVar1 /*203*/].f_14 = 0f;
									GlobalFunc_6877(&(iParam0->f_19));
								}
							}
						}
					}
					else if (iParam0->f_396[iVar1 /*203*/].f_11 >= iParam0->f_17)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar1 /*203*/].f_8))
						{
							func_92(&(iParam0->f_396[iVar1 /*203*/]), 0);
						}
					}
					else
					{
						if (Local_46 != 1)
						{
							if (iVar1 != 0)
							{
								func_90(iParam0, iParam0->f_396[iVar1 /*203*/].f_8, iParam0->f_396[iVar1 /*203*/].f_9, iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/], iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/].f_8, iVar1);
							}
						}
						else
						{
							StringCopy(&cVar26, "Offroad_", 16);
							switch (Local_46.f_11)
							{
								case 0:
									StringIntConCat(&cVar26, 1, 16);
									break;
								
								case 1:
									StringIntConCat(&cVar26, 2, 16);
									break;
								
								case 2:
									StringIntConCat(&cVar26, 6, 16);
									break;
								
								case 3:
									StringIntConCat(&cVar26, 3, 16);
									break;
								
								case 4:
									StringIntConCat(&cVar26, 4, 16);
									break;
								
								case 5:
									StringIntConCat(&cVar26, 5, 16);
									break;
							}
							if (iVar1 > 0)
							{
								if (bLocal_1509)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar1 /*203*/].f_8) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar1 /*203*/].f_9))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_396[iVar1 /*203*/].f_8, -235832601) == 1)
										{
										}
										else if (iParam0->f_2)
										{
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_396[iVar1 /*203*/].f_8, iParam0->f_396[iVar1 /*203*/].f_9, &cVar26, 786468, 0, 24, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[iVar1 /*203*/].f_9), 0, 1073741824);
										}
									}
								}
								else if (iVar1 != 0)
								{
									func_90(iParam0, iParam0->f_396[iVar1 /*203*/].f_8, iParam0->f_396[iVar1 /*203*/].f_9, iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/], iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/].f_8, iVar1);
								}
							}
						}
						func_9(iParam0, iVar1);
					}
				}
			}
			else if (!bVar25)
			{
				iParam0->f_16 = func_104(iParam0, &Var2, &Var13, iParam0->f_396[iVar1 /*203*/].f_8);
				if (0 == iParam0->f_16)
				{
				}
			}
		}
		iVar1++;
	}
	if (iParam0->f_2 == 1)
	{
		func_85(iParam0);
		func_82(iParam0, &uLocal_1508);
		func_81(iParam0, &uLocal_1508);
		func_80(iParam0);
		func_79(iParam0);
		func_77(iParam0);
		func_72(iParam0);
		GlobalFunc_587();
		func_52(iParam0);
		func_40(iParam0);
	}
	return 1;
}

void func_40(int iParam0)//Position - 0x38DD
{
	char* sVar0;
	int iVar1;
	
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	if (Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_TIMES[Local_46.f_11] > 0f)
	{
		sVar0 = "SPR_TIMEBEST";
		iVar1 = SYSTEM::CEIL((Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_TIMES[Local_46.f_11] * 1000f));
	}
	else
	{
		sVar0 = "-1";
		iVar1 = -1;
	}
	GlobalFunc_1470();
	func_41(SYSTEM::FLOOR((iParam0->f_396[0 /*203*/].f_13 * 1000f)), "", -1, -1, "", iParam0->f_396[0 /*203*/].f_12, iParam0->f_18, "", SYSTEM::CEIL((iParam0->f_396[0 /*203*/].f_15 * 1000f)), 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar1, sVar0, 0, 1, -1, 0, -1082130432, 1, 1, 0);
}

void func_41(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26, bool bParam27)//Position - 0x399F
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
		func_46(iParam10, iParam11, sVar1, iParam22, iParam13, 7, 0, 0, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (GlobalFunc_1561(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_45(iParam5, uParam6, sVar2, iParam9, iParam22, 6, 0, 0, 0);
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




void func_45(int iParam0, var uParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x3C39
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(5, iVar0);
		Global_1328872.f_2468[iVar0] = iParam0;
		Global_1328872.f_2468.f_138[iVar0] = uParam1;
		StringCopy(&(Global_1328872.f_2468.f_9[iVar0 /*16*/]), sParam2, 64);
		Global_1328872.f_2468.f_156[iVar0] = uParam3;
		Global_1328872.f_2468.f_147[iVar0] = iParam4;
		Global_1328872.f_2468.f_174[iVar0] = iParam5;
		Global_1328872.f_2468.f_183[iVar0] = iParam6;
		Global_1328872.f_2468.f_218[iVar0] = iParam7;
		Global_1328872.f_2468.f_227[iVar0] = iParam8;
	}
}

void func_46(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3D06
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
		Global_1328872.f_2214.f_147[iVar0] = iParam3;
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






void func_52(int iParam0)//Position - 0x4092
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_70(iParam0, &bVar1);
	func_69(bVar1);
	func_60(iParam0, bVar0, bVar1);
	func_53(&(iParam0->f_396[0 /*203*/]), "Crash", &iLocal_691);
}

void func_53(var uParam0, char* sParam1, int iParam2)//Position - 0x40C7
{
	struct<2> Var0;
	
	if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
		{
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_690)
				{
					if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						StringCopy(&Var0, sParam1, 16);
						StringCopy(&Var0, "", 16);
						if (!GlobalFunc_2951(*iParam2, 16) && GlobalFunc_2951(*iParam2, 8))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8315() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_682(iParam2, 16);
									iLocal_690 = 1;
								}
							}
						}
						else if (!GlobalFunc_2951(*iParam2, 8) && GlobalFunc_2951(*iParam2, 4))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8315() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_682(iParam2, 8);
									iLocal_690 = 1;
								}
							}
						}
						else if (!GlobalFunc_2951(*iParam2, 4) && GlobalFunc_2951(*iParam2, 2))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8315() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_682(iParam2, 4);
									iLocal_690 = 1;
								}
							}
						}
						else if (!GlobalFunc_2951(*iParam2, 2) && GlobalFunc_2951(*iParam2, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8315() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_682(iParam2, 2);
									iLocal_690 = 1;
								}
							}
						}
						else if (!GlobalFunc_2951(*iParam2, 1))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8315() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (GlobalFunc_8315() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_682(iParam2, 1);
									iLocal_690 = 1;
								}
							}
						}
					}
				}
			}
			else if (!GlobalFunc_226(&uLocal_633))
			{
				GlobalFunc_8641(&uLocal_633);
			}
			else if (GlobalFunc_5182(&uLocal_633) >= 0f)
			{
				if (!GlobalFunc_2951(iLocal_639, 1))
				{
					func_54("SPR_EXIT_WARN", 10000, 0, &iLocal_638, 128);
					if (GlobalFunc_663("SPR_EXIT_WARN", 0, 0))
					{
						func_682(&iLocal_639, 1);
					}
				}
			}
		}
		else
		{
			iLocal_690 = 0;
		}
	}
}

void func_54(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x43FE
{
	if (GlobalFunc_2987(*iParam3, iParam4))
	{
		return;
	}
	GlobalFunc_164(sParam0, iParam1, iParam2);
	GlobalFunc_812(iParam3, iParam4);
}






void func_60(var uParam0, bool bParam1, bool bParam2)//Position - 0x467F
{
	if (bParam1)
	{
		func_61(bParam2, uParam0);
	}
}

void func_61(bool bParam0, var uParam1)//Position - 0x4694
{
	if (func_67(bParam0))
	{
		return;
	}
	else
	{
		if (GlobalFunc_111())
		{
		}
		func_62(bParam0, uParam1);
	}
}

void func_62(bool bParam0, var uParam1)//Position - 0x46BA
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
	if (iVar0 > 2000)
	{
		MemCopy(&uVar2, {func_65(func_66(bParam0), uParam1->f_3600, &uVar1)}, 4);
		if (bParam0)
		{
			func_64();
		}
		else
		{
			func_63();
		}
		uParam1->f_3600 = uVar1;
	}
}

void func_63()//Position - 0x4701
{
	switch (GlobalFunc_8315())
	{
		case 0:
			GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "MICHAEL_NORMAL", 10);
			break;
		
		case 1:
			GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 10);
			break;
		
		case 2:
			GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "TREVOR_NORMAL", 10);
			break;
	}
}

void func_64()//Position - 0x4763
{
	switch (GlobalFunc_8315())
	{
		case 0:
			GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "MICHAEL_NORMAL", 10);
			break;
		
		case 1:
			GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "FRANKLIN_NORMAL", 10);
			break;
		
		case 2:
			GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "TREVOR_NORMAL", 10);
			break;
	}
}

struct<6> func_65(struct<6> Param0, int iParam6, var uParam7)//Position - 0x47C5
{
	int iVar0;
	int iVar1;
	
	iVar0 = GlobalFunc_8315();
	StringConCat(&Param0, "_", 24);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	while (iVar1 == iParam6)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	}
	*uParam7 = iVar1;
	switch (iVar1)
	{
		case 1:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 1, 24);
					break;
				
				case 2:
					StringIntConCat(&Param0, 6, 24);
					break;
				
				case 1:
					StringIntConCat(&Param0, 11, 24);
					break;
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 2, 24);
					break;
				
				case 2:
					StringIntConCat(&Param0, 7, 24);
					break;
				
				case 1:
					StringIntConCat(&Param0, 12, 24);
					break;
			}
			break;
		
		case 3:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 3, 24);
					break;
				
				case 2:
					StringIntConCat(&Param0, 8, 24);
					break;
				
				case 1:
					StringIntConCat(&Param0, 13, 24);
					break;
			}
			break;
		
		case 4:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 4, 24);
					break;
				
				case 2:
					StringIntConCat(&Param0, 9, 24);
					break;
				
				case 1:
					StringIntConCat(&Param0, 14, 24);
					break;
			}
			break;
		
		case 5:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 5, 24);
					break;
				
				case 2:
					StringIntConCat(&Param0, 10, 24);
					break;
				
				case 1:
					StringIntConCat(&Param0, 15, 24);
					break;
			}
			break;
	}
	return Param0;
}

struct<6> func_66(bool bParam0)//Position - 0x492F
{
	struct<6> Var0;
	
	if (bParam0)
	{
		StringCopy(&Var0, "Rankup", 24);
	}
	else
	{
		StringCopy(&Var0, "Rankdn", 24);
	}
	return Var0;
}

int func_67(bool bParam0)//Position - 0x4953
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (GlobalFunc_111())
	{
		Var6 = { GlobalFunc_560() };
		Var0 = { func_66(bParam0) };
		if (MISC::ARE_STRINGS_EQUAL(&Var6, &Var0))
		{
			return 1;
		}
	}
	return 0;
}


void func_69(bool bParam0)//Position - 0x49A8
{
	if (GlobalFunc_8315() == 1)
	{
		if (bParam0)
		{
			PLAYER::SPECIAL_ABILITY_CHARGE_SMALL(PLAYER::PLAYER_ID(), 1, 1);
		}
	}
}

int func_70(var uParam0, var uParam1)//Position - 0x49C7
{
	int iVar0;
	
	iVar0 = 0;
	if (GlobalFunc_5182(&(uParam0->f_5)) > 10f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_8))
		{
			iLocal_929 = uParam0->f_396[0 /*203*/].f_12;
			if (iLocal_928 != -1 && iLocal_928 != 0)
			{
				if (iLocal_929 != iLocal_928)
				{
					iVar0 = 1;
					if (iLocal_929 < iLocal_928)
					{
						*uParam1 = 1;
					}
					else
					{
						*uParam1 = 0;
					}
					iLocal_928 = iLocal_929;
				}
			}
			else
			{
				iLocal_928 = iLocal_929;
			}
		}
	}
	return iVar0;
}


void func_72(int iParam0)//Position - 0x4A4D
{
	if (GlobalFunc_5182(&(iParam0->f_5)) > 15f)
	{
		if (Local_46 == 2)
		{
			if (ENTITY::GET_ENTITY_SPEED(iParam0->f_396[0 /*203*/].f_8) < 0.75f)
			{
				if (!GlobalFunc_226(&uLocal_630))
				{
					GlobalFunc_8641(&uLocal_630);
				}
				else if (GlobalFunc_5182(&uLocal_630) > 60f)
				{
					if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
					{
						if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
						{
							HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
						}
					}
					if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
					{
						if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
						{
							HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
						}
					}
					GlobalFunc_235(&uLocal_630);
					GlobalFunc_6877(&uLocal_624);
					iParam0->f_2 = 0;
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					Local_46.f_421 = 3;
					GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
					iParam0->f_396[0 /*203*/].f_23 = 0;
				}
				else if (GlobalFunc_5182(&uLocal_630) > 30f)
				{
					if (!GlobalFunc_2951(iLocal_637, 32))
					{
						func_73("SPR_IDLE_WARN", &iLocal_637, 32, 0);
					}
				}
			}
			else if (GlobalFunc_226(&uLocal_630))
			{
				GlobalFunc_6533(&iLocal_637, 32);
				GlobalFunc_6877(&uLocal_630);
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(iParam0->f_396[0 /*203*/].f_9) < 5f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!GlobalFunc_226(&uLocal_630))
			{
				GlobalFunc_8641(&uLocal_630);
			}
			else if (GlobalFunc_5182(&uLocal_630) > 60f)
			{
				if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
					}
				}
				if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
					}
				}
				GlobalFunc_6877(&uLocal_630);
				GlobalFunc_6877(&uLocal_624);
				iParam0->f_2 = 0;
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::CLEAR_HELP(1);
				Local_46.f_421 = 3;
				GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
				iParam0->f_396[0 /*203*/].f_23 = 0;
			}
			else if (GlobalFunc_5182(&uLocal_630) > 30f)
			{
				if (!GlobalFunc_2951(iLocal_637, 32))
				{
					func_73("SPR_IDLE_WARN", &iLocal_637, 32, 0);
				}
			}
		}
		else if (GlobalFunc_226(&uLocal_630))
		{
			GlobalFunc_6533(&iLocal_637, 32);
			GlobalFunc_6877(&uLocal_630);
		}
	}
	else if (GlobalFunc_226(&uLocal_630))
	{
		GlobalFunc_6533(&iLocal_637, 32);
		GlobalFunc_6877(&uLocal_630);
	}
}

void func_73(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4D50
{
	if (GlobalFunc_2987(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		GlobalFunc_159(sParam0, -1);
	}
	else
	{
		GlobalFunc_1(sParam0);
	}
	GlobalFunc_812(iParam1, iParam2);
}




void func_77(int iParam0)//Position - 0x4E02
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_396[0 /*203*/].f_9))
		{
			if (!GlobalFunc_226(&uLocal_627))
			{
				GlobalFunc_8641(&uLocal_627);
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam0->f_396[0 /*203*/].f_8, iParam0->f_396[0 /*203*/].f_9, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam0->f_396[0 /*203*/].f_9, joaat("sanchez")))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_396[0 /*203*/].f_9))
					{
						if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0->f_396[0 /*203*/].f_9, 3, 1500) || GlobalFunc_5182(&uLocal_627) >= 4f)
						{
							GlobalFunc_6877(&uLocal_627);
							GlobalFunc_6877(&uLocal_624);
							if (!GlobalFunc_74("SPR_HELP_DIST"))
							{
								GlobalFunc_1("SPR_HELP_DIST");
								Local_46.f_343 = 1;
							}
						}
					}
					else if (GlobalFunc_5182(&uLocal_627) >= 5f)
					{
						GlobalFunc_6877(&uLocal_627);
						GlobalFunc_6877(&uLocal_624);
						if (!GlobalFunc_74("SPR_HELP_DIST"))
						{
							GlobalFunc_1("SPR_HELP_DIST");
							Local_46.f_343 = 1;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_396[0 /*203*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0->f_396[0 /*203*/].f_9, 3, 1500) || GlobalFunc_5182(&uLocal_627) >= 4f)
					{
						GlobalFunc_6877(&uLocal_627);
						GlobalFunc_6877(&uLocal_624);
						if (!GlobalFunc_74("SPR_HELP_DIST"))
						{
							GlobalFunc_1("SPR_HELP_DIST");
							Local_46.f_343 = 1;
						}
					}
				}
				else if (GlobalFunc_5182(&uLocal_627) >= 5f)
				{
					GlobalFunc_6877(&uLocal_627);
					GlobalFunc_6877(&uLocal_624);
					if (!GlobalFunc_74("SPR_HELP_DIST"))
					{
						GlobalFunc_1("SPR_HELP_DIST");
						Local_46.f_343 = 1;
					}
				}
			}
			else if (GlobalFunc_5182(&uLocal_627) >= 5f)
			{
				GlobalFunc_6877(&uLocal_627);
				GlobalFunc_6877(&uLocal_624);
				if (!GlobalFunc_74("SPR_HELP_DIST"))
				{
					GlobalFunc_1("SPR_HELP_DIST");
					Local_46.f_343 = 1;
				}
			}
		}
		else if (GlobalFunc_226(&uLocal_627))
		{
			if ((GlobalFunc_74("SPR_HELP_DIST") && Local_46.f_343) && !Local_46.f_344)
			{
				Local_46.f_343 = 0;
				HUD::CLEAR_HELP(1);
			}
			else if (Local_46.f_343)
			{
				Local_46.f_343 = 0;
			}
			GlobalFunc_6877(&uLocal_627);
		}
	}
}


void func_79(int iParam0)//Position - 0x5039
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iParam0->f_396)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[iVar1 /*203*/].f_8))
		{
			if ((((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_explosion"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_grenade"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_grenadelauncher"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_stickybomb"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_rpg"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_molotov"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("weapon_proxmine"), 0))
			{
				bVar0 = true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[iVar1 /*203*/].f_9))
		{
			if ((((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_explosion"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_grenade"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_grenadelauncher"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_stickybomb"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_rpg"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_molotov"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("weapon_proxmine"), 0))
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
			}
		}
		if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
			}
		}
		GlobalFunc_235(&uLocal_630);
		GlobalFunc_6877(&uLocal_624);
		iParam0->f_2 = 0;
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		Local_46.f_421 = 1;
		GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
		iParam0->f_396[0 /*203*/].f_23 = 0;
	}
}

void func_80(int iParam0)//Position - 0x52D3
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
			}
		}
		if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
			}
		}
		GlobalFunc_6877(&uLocal_624);
		iParam0->f_2 = 0;
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		Local_46.f_421 = 1;
		GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
		iParam0->f_396[0 /*203*/].f_23 = 0;
	}
	else if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(6);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iVar0 != joaat("weapon_unarmed"))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					iParam0->f_3586 = 1;
					return;
				}
			}
		}
	}
}

void func_81(int iParam0, var uParam1)//Position - 0x5411
{
	if (iParam0->f_2)
	{
		if ((Local_46 == 2 && iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 != 6) && iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 != 10)
		{
			return;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_396[0 /*203*/].f_9, 0))
		{
			GlobalFunc_6877(&uLocal_624);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
				}
			}
			if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
				}
			}
			iParam0->f_2 = 0;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			Local_46.f_421 = 2;
			GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
			iParam0->f_396[0 /*203*/].f_23 = 0;
		}
	}
}

void func_82(int iParam0, var uParam1)//Position - 0x554F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_396[0 /*203*/].f_8, iParam0->f_396[0 /*203*/].f_9, 0))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iParam0->f_396[0 /*203*/].f_9))
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(iParam0->f_396[0 /*203*/].f_9);
					HUD::SET_BLIP_COLOUR(*uParam1, 3);
					if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
					{
						GlobalFunc_703(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6));
						func_83(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_7));
					}
					if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 2))
					{
						GlobalFunc_703(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6));
						func_83(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_7));
					}
				}
				if (!GlobalFunc_226(&uLocal_633))
				{
					GlobalFunc_8641(&uLocal_633);
				}
				else
				{
					if (GlobalFunc_5182(&uLocal_633) >= 1f)
					{
						HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
						if (!GlobalFunc_2951(iLocal_638, 128))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								func_54("SPR_EXIT_WARN", 10000, 0, &iLocal_638, 128);
								func_682(&iLocal_639, 1);
							}
						}
					}
					if (GlobalFunc_5182(&uLocal_633) >= 3f)
					{
						if (!GlobalFunc_2951(iLocal_638, 32768))
						{
							if (!GlobalFunc_74("SPR_HELP_DIST_2") && !GlobalFunc_74("SPR_HELP_DIST"))
							{
								HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
								func_73("SPR_HELP_DIST_2", &iLocal_638, 32768, 0);
							}
						}
					}
					if (GlobalFunc_5182(&uLocal_633) >= 35f)
					{
						GlobalFunc_235(&uLocal_633);
						if (GlobalFunc_74("SPR_IDLE_WARN"))
						{
							HUD::CLEAR_HELP(1);
						}
						GlobalFunc_6877(&uLocal_624);
						if (HUD::DOES_BLIP_EXIST(*uParam1))
						{
							HUD::REMOVE_BLIP(uParam1);
							if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
							{
								if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
								{
									HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 4);
								}
							}
							if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
							{
								if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
								{
									HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 4);
								}
							}
						}
						iParam0->f_2 = 0;
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						Local_46.f_421 = 4;
						GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
						iParam0->f_396[0 /*203*/].f_23 = 0;
					}
				}
			}
		}
		else
		{
			GlobalFunc_235(&uLocal_633);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
				if (!GlobalFunc_2951(iLocal_637, 8))
				{
					func_682(&iLocal_637, 8);
				}
			}
			GlobalFunc_235(&uLocal_633);
			if (GlobalFunc_663("SPR_EXIT_WARN", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_EXIT_WARN");
			}
			if (GlobalFunc_663("SPR_EXIT_FAIL", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_EXIT_FAIL");
			}
			if (GlobalFunc_2951(iLocal_638, 128))
			{
				GlobalFunc_6533(&iLocal_638, 128);
			}
			if (GlobalFunc_2951(iLocal_638, 32768))
			{
				GlobalFunc_6533(&iLocal_638, 32768);
			}
			if (GlobalFunc_2951(iLocal_638, 256))
			{
				GlobalFunc_6533(&iLocal_638, 256);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_396[0 /*203*/].f_9, 0))
		{
			if (GlobalFunc_663("SPR_EXIT_WARN", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_EXIT_WARN");
			}
			GlobalFunc_235(&uLocal_633);
			GlobalFunc_6877(&uLocal_624);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
				if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
					}
				}
				if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
					}
				}
			}
			iParam0->f_2 = 0;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			Local_46.f_421 = 4;
			GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
			iParam0->f_396[0 /*203*/].f_23 = 0;
		}
	}
	else if (GlobalFunc_663("SPR_EXIT_WARN", 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
}

void func_83(var uParam0)//Position - 0x59D0
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}


void func_85(int iParam0)//Position - 0x5A02
{
	if (iParam0->f_2)
	{
		func_89(iParam0);
		func_86(iParam0);
	}
}

void func_86(var uParam0)//Position - 0x5A1D
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_396[0 /*203*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_396[0 /*203*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_46 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_396[0 /*203*/].f_9, 0))
				{
					bLocal_636 = true;
				}
			}
			if (bLocal_636)
			{
				if (uParam0->f_32[uParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 == 6 || uParam0->f_32[uParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_54("SPR_HELP_DAMG", 5000, 0, &iLocal_638, 2);
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
			func_54("SPR_HELP_DAMG", 5000, 0, &iLocal_638, 2);
		}
	}
	if (Local_46 == 1)
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
			func_54("SPR_HELP_DAMG", 5000, 0, &iLocal_638, 2);
		}
	}
}



void func_89(var uParam0)//Position - 0x5BB4
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	bool bVar14;
	
	Var0 = { uParam0->f_32[uParam0->f_396[0 /*203*/].f_11 /*11*/] };
	if (uParam0->f_396[0 /*203*/].f_11 > 0)
	{
		Var3 = { uParam0->f_32[(uParam0->f_396[0 /*203*/].f_11 - 1) /*11*/] };
	}
	else
	{
		Var3 = { Local_46.f_4 };
	}
	fVar6 = 75f;
	Var7 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 1) };
	Var10 = { MISC::_0x21C235BC64831E5A(Var7, Var3, Var0, 1) };
	fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var10, Var7, 1);
	bVar14 = fVar13 >= fVar6;
	if (Local_46 == 1)
	{
		if (MISC::ABSF((Var10.f_2 - Var7.f_2)) > 15f)
		{
			bVar14 = true;
		}
	}
	if (bVar14)
	{
		if (!GlobalFunc_226(&(Local_46.f_353)))
		{
			GlobalFunc_7777(&(Local_46.f_353));
		}
		if ((!uParam0->f_3618 && !Local_46.f_341) && GlobalFunc_5182(&(Local_46.f_353)) >= 20f)
		{
			GlobalFunc_6877(&uLocal_624);
			uParam0->f_2 = 0;
			uParam0->f_396[0 /*203*/].f_23 = 0;
			uParam0->f_3617 = 0;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			Local_46.f_421 = 0;
			GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
		}
		else
		{
			if (!GlobalFunc_74("SPR_HELP_DIST_2") && !GlobalFunc_74("SPR_HELP_DIST"))
			{
				Local_46.f_344 = 1;
				GlobalFunc_1("SPR_HELP_DIST");
			}
			func_54("SPR_HELP_WARN", 20000, 0, &iLocal_638, 4);
		}
	}
	else
	{
		if (GlobalFunc_226(&(Local_46.f_353)))
		{
			GlobalFunc_235(&(Local_46.f_353));
		}
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if ((GlobalFunc_74("SPR_HELP_DIST") && Local_46.f_344) && !Local_46.f_343)
		{
			Local_46.f_344 = 0;
			HUD::CLEAR_HELP(1);
		}
		else if (Local_46.f_344)
		{
			Local_46.f_344 = 0;
		}
		if (GlobalFunc_2951(iLocal_638, 4))
		{
			GlobalFunc_6533(&iLocal_638, 4);
		}
	}
}

void func_90(int iParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)//Position - 0x5D9F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (Local_46 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam2), 1, 0, 786468, 5f, -1f);
			}
		}
		else if (Local_46 == 2)
		{
			uParam6 = uParam6;
			func_91(iParam0, Param3, iParam7);
		}
	}
}

void func_91(var uParam0, struct<3> Param1, var uParam4)//Position - 0x5DF4
{
	uParam0->f_17 = uParam0->f_17;
	Param1 = { Param1 };
	uParam4 = uParam4;
}

void func_92(var uParam0, bool bParam1)//Position - 0x5E10
{
	char cVar0[32];
	struct<3> Var8;
	
	MemCopy(&cVar0, {Local_896}, 8);
	StringIntConCat(&cVar0, uParam0->f_12, 32);
	if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
	{
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
			}
			else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
			{
				if (!bParam1)
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_8, uParam0->f_9, &cVar0, 786469, 0, 8, -1, -1f, 0, 1073741824);
				}
				else
				{
					PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1), &Var8, 1, 1077936128, 0);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_8, uParam0->f_9, Var8, 14f, 1, uParam0->f_22, 786469, 10f, -1f);
					PED::SET_PED_KEEP_TASK(uParam0->f_8, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
				}
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_8, uParam0->f_9, Local_870[(uParam0->f_12 - 1) /*3*/], 10f, 0, 0, 786469, 0.5f, -1f);
			}
		}
	}
}



void func_95(int iParam0, int iParam1)//Position - 0x5F67
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_97(&(iParam0->f_32[iParam1 /*11*/]));
	func_96(&(iParam0->f_32[iParam1 /*11*/].f_7), &(iParam0->f_11), &(iParam0->f_14), iParam0->f_32[iParam1 /*11*/].f_8 == 1);
	if (iParam1 + 1 < iParam0->f_17)
	{
		func_97(&(iParam0->f_32[iParam1 + 1 /*11*/]));
		func_83(&(iParam0->f_32[iParam1 + 1 /*11*/].f_7));
	}
}

void func_96(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x5FDB
{
	func_83(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, 255, 255, 255, *uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam1, 255, 255, 255, *uParam2);
	}
}

void func_97(var uParam0)//Position - 0x6024
{
	GlobalFunc_703(&(uParam0->f_6));
}

void func_98(var uParam0, var uParam1)//Position - 0x6034
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_7 != 0)
	{
		iVar4 = GlobalFunc_4622();
		func_100(GlobalFunc_6295(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_7, iVar0, iVar1, iVar2, GlobalFunc_2419(*uParam0, 220, 255));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_7, iVar0, iVar1, iVar2, GlobalFunc_2419(*uParam0, 70, 240));
	}
	if (uParam1->f_7 != 0)
	{
		iVar5 = GlobalFunc_4622();
		func_100(GlobalFunc_6295(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_7, iVar0, iVar1, iVar2, GlobalFunc_2419(*uParam1, 220, 255));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_7, iVar0, iVar1, iVar2, GlobalFunc_2419(*uParam1, 70, 240));
	}
}


void func_100(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x6167
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(uParam0, 24, 31);
	*iParam2 = MISC::GET_BITS_IN_RANGE(uParam0, 16, 23);
	*iParam3 = MISC::GET_BITS_IN_RANGE(uParam0, 8, 15);
	*uParam4 = MISC::GET_BITS_IN_RANGE(uParam0, 0, 7);
}




int func_104(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x61FF
{
	var uVar0;
	
	uVar0 = uVar0;
	return func_105(uParam1, iParam3);
}

int func_105(var uParam0, int iParam1)//Position - 0x6213
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	struct<3> Var8;
	
	fVar7 = 5f;
	if (uParam0->f_3 < 15f)
	{
		fVar7 = uParam0->f_3;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (iParam1 != PLAYER::PLAYER_PED_ID())
		{
			if (GlobalFunc_713(iParam1, *uParam0, 1) <= (7.5f * fVar7))
			{
				if (uParam0->f_8 == 0 || uParam0->f_8 == 1)
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) - *uParam0 };
					Var4 = { -SYSTEM::SIN(uParam0->f_4), SYSTEM::COS(uParam0->f_4), 0f };
					fVar0 = GlobalFunc_168(Var1, Var4);
					if (fVar0 >= 0f)
					{
						return 0;
					}
				}
			}
		}
		Var8 = { (7.5f * 2.3f), (7.5f * 2.3f), 7.5f };
		if ((iParam1 == PLAYER::PLAYER_PED_ID() && PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0)) && ENTITY::IS_ENTITY_AT_COORD(iParam1, *uParam0, Var8, 0, 1, 0))
		{
			if (uParam0->f_8 == 0 || uParam0->f_8 == 1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) - *uParam0 };
				Var4 = { -SYSTEM::SIN(uParam0->f_4), SYSTEM::COS(uParam0->f_4), 0f };
				fVar0 = GlobalFunc_168(Var1, Var4);
				if (fVar0 >= 0f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_654, "HUD_MINI_GAME_SOUNDSET", 1);
					return 0;
				}
			}
		}
	}
	return -1;
}



void func_108(var uParam0, int iParam1)//Position - 0x63B6
{
	int iVar0;
	int iVar1;
	struct<203> Var2;
	float fVar205;
	float fVar206;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_18 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_18;
	Var2 = { uParam0->f_396[iParam1 /*203*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_18)
	{
		if (Var2.f_8 != uParam0->f_396[iVar1 /*203*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar1 /*203*/].f_8) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8))
			{
				if (Var2.f_11 > uParam0->f_396[iVar1 /*203*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_396[iVar1 /*203*/].f_11)
				{
					fVar205 = GlobalFunc_2264(Var2.f_8, uParam0->f_32[Var2.f_11 /*11*/], 1);
					fVar206 = GlobalFunc_2264(uParam0->f_396[iVar1 /*203*/].f_8, uParam0->f_32[uParam0->f_396[iVar1 /*203*/].f_11 /*11*/], 1);
					if (fVar205 < fVar206)
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
	uParam0->f_396[iParam1 /*203*/].f_12 = iVar0;
}



void func_111(var uParam0, int iParam1)//Position - 0x6621
{
	if ((func_112(uParam0, iParam1) && !uParam0->f_396[iParam1 /*203*/].f_193) && (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_396[iParam1 /*203*/].f_9) || VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_396[iParam1 /*203*/].f_9)))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uParam0->f_396[iParam1 /*203*/].f_9, 1), 7, 1f, 1, 0, 1065353216);
		uParam0->f_396[iParam1 /*203*/].f_193 = 1;
	}
}

int func_112(var uParam0, int iParam1)//Position - 0x6697
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	float fVar8;
	char cVar9[16];
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8) || ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_396[iParam1 /*203*/].f_8, -235832601) != 1)
	{
		return 0;
	}
	StringCopy(&cVar9, "Offroad_", 16);
	switch (Local_46.f_11)
	{
		case 0:
			StringIntConCat(&cVar9, 1, 16);
			break;
		
		case 1:
			StringIntConCat(&cVar9, 2, 16);
			break;
		
		case 2:
			StringIntConCat(&cVar9, 6, 16);
			break;
		
		case 3:
			StringIntConCat(&cVar9, 3, 16);
			break;
		
		case 4:
			StringIntConCat(&cVar9, 4, 16);
			break;
		
		case 5:
			StringIntConCat(&cVar9, 5, 16);
			break;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar9))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_396[iParam1 /*203*/].f_9, 1) };
	iVar6 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(uParam0->f_396[iParam1 /*203*/].f_9);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar9))
	{
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(&cVar9, &iVar7);
	}
	if (iVar6 <= 0 || (iVar7 - 1) == iVar6)
	{
		return 0;
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(&cVar9, iVar6, &Var3);
	if (Var0.f_2 < Var3.f_2)
	{
		fVar8 = (Var3.f_2 - Var0.f_2);
		if (fVar8 >= 20f)
		{
			return 1;
		}
	}
	return 0;
}

int func_113(var uParam0, var uParam1, bool bParam2)//Position - 0x67DC
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<3> Var6;
	var uVar9;
	struct<3> Var10;
	char cVar13[16];
	
	switch (uParam1->f_23)
	{
		case 0:
			func_147(uParam0);
			GlobalFunc_1020();
			if (uParam0->f_3586 && !uParam0->f_3587)
			{
				func_145(uParam0);
				uParam0->f_3587 = 1;
			}
			else if (uParam0->f_3586)
			{
			}
			uParam0->f_2 = 0;
			func_144(uParam0);
			if (GlobalFunc_663("SPR_HELP_DAMG", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
			}
			if (bParam2)
			{
				if (func_141(&(uParam0->f_22), &(Local_46.f_422), "SPR_UI_FAILD", func_143(Local_46.f_421), &bVar0, 76, 7, 1, 1097859072, 1))
				{
					if (bVar0)
					{
						uParam0->f_1 = 1;
						if (GlobalFunc_663("SPR_RETR_DES", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
						}
						if (!Local_46 == 2)
						{
							GlobalFunc_6531(&uLocal_611, 0, 0);
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
							else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							}
						}
						uParam1->f_23 = 4;
						uParam0->f_2 = 0;
						GlobalFunc_6531(&uLocal_611, 0, 0);
						uParam0->f_396[0 /*203*/].f_11 = 0;
						GlobalFunc_235(&(uParam0->f_19));
						iLocal_44 = 0;
						uParam0->f_3615 = 0;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						iLocal_653 = 0;
					}
					else
					{
						uParam0->f_1 = 0;
						if (!Local_46 == 2)
						{
							PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
						}
						if (Local_46.f_11 == 4 && Local_46.f_342)
						{
							if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
							{
								STREAMING::REQUEST_IPL("CS2_06_TriAf02");
							}
						}
						Local_46.f_11 = -1;
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
						bLocal_608 = true;
						iVar1 = 0;
						while (iVar1 < uParam0->f_18)
						{
							if (iVar1 != 0)
							{
								if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar1 /*203*/].f_10))
								{
									HUD::REMOVE_BLIP(&(uParam0->f_396[iVar1 /*203*/].f_10));
								}
							}
							iVar1++;
						}
						uParam1->f_23 = 12;
					}
				}
			}
			break;
		
		case 2:
			if (bParam2)
			{
				if (uParam0->f_1 == 1)
				{
					uParam0->f_2 = 0;
				}
			}
			else if (!uParam0->f_2)
			{
				uParam1->f_23 = 13;
			}
			uParam0->f_3617 = 0;
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_32[uParam1->f_11 /*11*/] };
			}
			if (bParam2)
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RESET", 2, 201, 1, 1, 0);
				GlobalFunc_813(&(Local_46.f_153), "FE_HLP16", 2, 204, 1, 1, 0);
				GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RESTART", 2, 203, 1, 1, 0);
			}
			if (bParam2)
			{
				uParam1->f_23 = 3;
			}
			else
			{
				uParam1->f_23 = 7;
			}
			break;
		
		case 3:
			uParam0->f_2 = 0;
			if (GlobalFunc_5182(&uLocal_624) <= 10f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (bParam2)
				{
					GlobalFunc_7512(&(Local_46.f_153), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 193))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						uParam1->f_23 = 4;
						if (!Local_46 == 2)
						{
							GlobalFunc_6531(&uLocal_611, 0, 0);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						uParam0->f_2 = 0;
						uParam0->f_396[0 /*203*/].f_11 = 0;
						GlobalFunc_235(&(uParam0->f_19));
						iLocal_44 = 0;
						uParam0->f_3615 = 0;
						iLocal_653 = 0;
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
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
					else if (PAD::IS_CONTROL_PRESSED(2, 201))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						uParam1->f_23 = 4;
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 192))
					{
						uParam0->f_1 = 0;
						if (!Local_46 == 2)
						{
							GlobalFunc_6531(&uLocal_611, 0, 0);
						}
						if (Local_46 == 1)
						{
							if (Local_46.f_11 == 4 && Local_46.f_342)
							{
								if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
								{
									STREAMING::REQUEST_IPL("CS2_06_TriAf02");
								}
							}
							Local_46.f_11 = -1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
							bLocal_608 = true;
							iVar2 = 0;
							while (iVar2 < uParam0->f_18)
							{
								if (iVar2 != 0)
								{
									if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar2 /*203*/].f_10))
									{
										HUD::REMOVE_BLIP(&(uParam0->f_396[iVar2 /*203*/].f_10));
									}
								}
								iVar2++;
							}
							iVar2 = 0;
							while (iVar2 < uParam0->f_17)
							{
								if (HUD::DOES_BLIP_EXIST(uParam0->f_32[iVar2 /*11*/].f_6))
								{
									HUD::REMOVE_BLIP(&(uParam0->f_32[iVar2 /*11*/].f_6));
								}
								iVar2++;
							}
							uParam1->f_23 = 12;
						}
						else
						{
							GlobalFunc_7067(&uLocal_624, 10f);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
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
							HUD::CLEAR_PRINTS();
							HUD::CLEAR_HELP(1);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
							func_147(uParam0);
							uParam0->f_396[0 /*203*/].f_23 = 0;
						}
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_396[0 /*203*/].f_9, 1);
				}
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				func_147(uParam0);
				Local_46.f_421 = 3;
				GlobalFunc_5751(&(Local_46.f_422), 1050253722, 1073741824);
				uParam0->f_396[0 /*203*/].f_23 = 0;
			}
			break;
		
		case 4:
			uParam0->f_3586 = 0;
			uParam0->f_3587 = 0;
			if (GlobalFunc_4623(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				uParam1->f_23 = 7;
			}
			break;
		
		case 5:
			uParam0->f_3586 = 0;
			uParam0->f_3587 = 0;
			uParam0->f_3 = 1;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			uParam1->f_23 = 7;
			break;
		
		case 6:
			if (GlobalFunc_4623(500))
			{
				func_144(uParam0);
				GlobalFunc_235(&(uParam0->f_5));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				uParam1->f_23 = 10;
			}
			break;
		
		case 7:
			if (uParam0->f_1)
			{
				func_130();
			}
			if (func_127(uParam1, 1))
			{
				if (uParam0->f_1)
				{
					uParam0->f_31 = 14;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
					}
					uParam1->f_23 = 8;
				}
			}
			break;
		
		case 8:
			bVar5 = false;
			iVar3 = 0;
			while (iVar3 < uParam0->f_18)
			{
				if (uParam0->f_396[iVar3 /*203*/].f_8 == uParam1->f_8)
				{
					if (uParam0->f_396[iVar3 /*203*/].f_11 == 0)
					{
						bVar5 = func_126(uParam0, iVar3);
					}
					else
					{
						bVar5 = func_123(uParam0, iVar3, 0);
					}
					iVar4 = iVar3;
				}
				iVar3++;
			}
			if (bVar5)
			{
				if (bParam2)
				{
					if ((uParam0->f_396[iVar4 /*203*/].f_11 - 1) >= 0)
					{
						Var6 = { uParam0->f_32[(uParam0->f_396[iVar4 /*203*/].f_11 - 1) /*11*/] };
						ENTITY::SET_ENTITY_COORDS(uParam0->f_396[iVar4 /*203*/].f_9, Var6, 1, 0, 0, 1);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[iVar4 /*203*/].f_9, 1);
						STREAMING::LOAD_SCENE(Var6);
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &uVar9))
						{
							Var6.f_2 = uVar9;
							ENTITY::SET_ENTITY_COORDS(uParam0->f_396[iVar4 /*203*/].f_9, Var6, 1, 0, 0, 1);
						}
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[iVar4 /*203*/].f_9, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					uParam1->f_23 = 11;
				}
				else
				{
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9) && uParam0->f_2)
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam1->f_9) > 1.5f)
				{
					Var10 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_9, 1) };
					Var10.f_2 = (Var10.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam1->f_9) + 1.5f));
					ENTITY::SET_ENTITY_COORDS(uParam1->f_9, Var10, 1, 0, 0, 1);
				}
				if (uParam1->f_8 != PLAYER::PLAYER_PED_ID())
				{
					StringCopy(&cVar13, "Offroad_", 16);
					switch (Local_46.f_11)
					{
						case 0:
							StringIntConCat(&cVar13, 1, 16);
							break;
						
						case 1:
							StringIntConCat(&cVar13, 2, 16);
							break;
						
						case 2:
							StringIntConCat(&cVar13, 6, 16);
							break;
						
						case 3:
							StringIntConCat(&cVar13, 3, 16);
							break;
						
						case 4:
							StringIntConCat(&cVar13, 4, 16);
							break;
						
						case 5:
							StringIntConCat(&cVar13, 5, 16);
							break;
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_8, uParam1->f_9, &cVar13, 786468, 0, 24, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_9), 0, 1073741824);
				}
			}
			uParam1->f_23 = 13;
			break;
		
		case 10:
			if (Local_46 == 0)
			{
				func_122(uParam1, 1);
				STREAMING::LOAD_SCENE(Local_46.f_4);
			}
			func_121(uParam1, Local_46.f_4, Local_46.f_7, 0f);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			uParam0->f_2 = 1;
			if (Local_46 == 0)
			{
				func_120(&(uParam0->f_396[iVar3 /*203*/]), 60f, 0);
			}
			if (GlobalFunc_4625(500))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
				{
					if (!PED::IS_PED_IN_VEHICLE(uParam0->f_396[0 /*203*/].f_8, uParam0->f_396[0 /*203*/].f_9, 0) && !Local_46 == 2)
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_396[0 /*203*/].f_8, uParam0->f_396[0 /*203*/].f_9, -1);
					}
				}
				if (bParam2 && Local_46 == 0)
				{
					func_119(&(uParam0->f_396[0 /*203*/]), 5f);
				}
				uParam1->f_23 = 13;
			}
			return 0;
			break;
		
		case 12:
			bLocal_608 = true;
			if (GlobalFunc_4625(500))
			{
				uParam0->f_31 = 14;
			}
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8))
				{
					if (func_118(uParam1))
					{
						if (uParam1->f_8 != PLAYER::PLAYER_PED_ID())
						{
							GlobalFunc_6877(&uLocal_624);
							uParam1->f_23 = 2;
							return 1;
						}
					}
					else if (uParam1->f_8 != PLAYER::PLAYER_PED_ID())
					{
						if (func_116(uParam0, uParam1))
						{
							func_114(uParam0, uParam1);
						}
					}
				}
			}
			return 0;
			break;
		
		case 14:
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
			func_144(uParam0);
			GlobalFunc_235(&(uParam0->f_5));
			uParam0->f_31 = 14;
			break;
	}
	return 1;
}

void func_114(var uParam0, var uParam1)//Position - 0x727D
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	char cVar7[16];
	float fVar11;
	float fVar12;
	
	StringCopy(&cVar7, "Offroad_", 16);
	switch (Local_46.f_11)
	{
		case 0:
			StringIntConCat(&cVar7, 1, 16);
			break;
		
		case 1:
			StringIntConCat(&cVar7, 2, 16);
			break;
		
		case 2:
			StringIntConCat(&cVar7, 6, 16);
			break;
		
		case 3:
			StringIntConCat(&cVar7, 3, 16);
			break;
		
		case 4:
			StringIntConCat(&cVar7, 4, 16);
			break;
		
		case 5:
			StringIntConCat(&cVar7, 5, 16);
			break;
	}
	if ((uParam0->f_396[0 /*203*/].f_11 - (uParam0->f_3601 - 1)) <= 0)
	{
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&cVar7, uParam0->f_32[((uParam0->f_396[0 /*203*/].f_11 - uParam0->f_3601) - 1) /*11*/], &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&cVar7, iVar0, &Var1);
	fVar11 = GlobalFunc_156(uParam1->f_9, PLAYER::PLAYER_PED_ID(), 0);
	fVar12 = GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Var1, 0);
	if (fVar12 > 10f)
	{
		if (fVar11 > 75f && !CAM::IS_SPHERE_VISIBLE(Var1, 3f))
		{
			if (fVar11 > 75f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam1->f_9, 1), 3f))
			{
				if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var1, 5f) || GlobalFunc_713(uParam1->f_9, Var1, 1) < 5f)
				{
					uParam1->f_11 = ((uParam0->f_396[0 /*203*/].f_11 - uParam0->f_3601) - 1);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cVar7, iVar0 + 1, &uVar4);
					ENTITY::SET_ENTITY_COORDS(uParam1->f_9, Var1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam1->f_9, uParam0->f_32[uParam1->f_11 /*11*/].f_4);
					if (!PED::IS_PED_IN_VEHICLE(uParam1->f_8, uParam1->f_9, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uParam1->f_8, uParam1->f_9, -1);
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_8, uParam1->f_9, &cVar7, 786468, iVar0, 16, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_9), 0, 1073741824);
				}
			}
		}
	}
}


int func_116(var uParam0, var uParam1)//Position - 0x749A
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam1->f_8 == PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_396[0 /*203*/].f_9, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = uParam0->f_396[0 /*203*/].f_11;
			iVar1 = uParam1->f_11;
			if ((iVar0 - iVar1) >= uParam0->f_3602 && ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_9))
			{
				if (!GlobalFunc_226(&(uParam0->f_3607)))
				{
					GlobalFunc_6877(&(uParam0->f_3607));
				}
				else if (GlobalFunc_5182(&(uParam0->f_3607)) < 0.8f)
				{
					return 0;
				}
				else
				{
					GlobalFunc_6877(&(uParam0->f_3607));
				}
				iVar2 = ((iVar0 - 1) - uParam0->f_3601);
				iVar2 = GlobalFunc_254(iVar2, 0, uParam0->f_17);
				uParam1->f_11 = iVar2;
				return 1;
			}
		}
	}
	return 0;
}


int func_118(var uParam0)//Position - 0x758E
{
	if (uParam0->f_22 != 0)
	{
		if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, 0))
			{
				return 1;
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, 0))
			{
				return 1;
			}
		}
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 10f)
				{
					if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
					{
						if (!GlobalFunc_226(&(uParam0->f_189)))
						{
							GlobalFunc_7777(&(uParam0->f_189));
						}
						if ((GlobalFunc_5182(&(uParam0->f_189)) > 5f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 225f) && ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_9))
						{
							GlobalFunc_235(&(uParam0->f_189));
							return 1;
						}
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 5000))
					{
						return 1;
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 20000))
					{
						return 1;
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 30000))
					{
						return 1;
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 60000))
					{
						return 1;
					}
				}
				else if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
				{
					if (GlobalFunc_226(&(uParam0->f_189)))
					{
						GlobalFunc_235(&(uParam0->f_189));
					}
				}
			}
		}
		else if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			if (GlobalFunc_226(&(uParam0->f_189)))
			{
				GlobalFunc_235(&(uParam0->f_189));
			}
		}
	}
	return 0;
}

void func_119(var uParam0, float fParam1)//Position - 0x770B
{
	uParam0->f_15 = uParam0->f_15;
	fParam1 = fParam1;
}

void func_120(var uParam0, float fParam1, int iParam2)//Position - 0x771F
{
	uParam0->f_19 = uParam0->f_19;
	fParam1 = fParam1;
	iParam2 = iParam2;
}

void func_121(var uParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x7737
{
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
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9);
	}
	if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
	{
	}
}

int func_122(var uParam0, bool bParam1)//Position - 0x77B3
{
	int iVar0;
	struct<3> Var1;
	
	if (bParam1)
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		FIRE::STOP_ENTITY_FIRE(uParam0->f_9);
		if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
		{
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			iVar0 = uParam0->f_9;
		}
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		else
		{
			uParam0->f_9 = VEHICLE::CREATE_VEHICLE(uParam0->f_22, uParam0->f_16, uParam0->f_19, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000);
			FIRE::STOP_ENTITY_FIRE(uParam0->f_9);
		}
		if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
		{
			if (Local_46 == 1)
			{
				if (iLocal_646 == 0 || iLocal_646 == -1)
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_9, iLocal_646);
				}
				if (uParam0->f_22 == joaat("mesa"))
				{
					if (iLocal_647 == 1)
					{
						if (VEHICLE::DOES_EXTRA_EXIST(uParam0->f_9, 1))
						{
							if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0->f_9, 1))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_9, 1, 1);
							}
						}
					}
					else if (VEHICLE::DOES_EXTRA_EXIST(uParam0->f_9, 1))
					{
						if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0->f_9, 1))
						{
							VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_9, 1, 0);
						}
					}
				}
			}
		}
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
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			return 0;
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_8, 3);
		VEHICLE::SET_VEHICLE_IS_RACING(uParam0->f_9, 1);
		PED::SET_DRIVER_ABILITY(uParam0->f_8, 1f);
		PED::SET_DRIVER_AGGRESSIVENESS(uParam0->f_8, 1f);
		PED::SET_DRIVER_RACING_MODIFIER(uParam0->f_8, 1f);
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 0);
	}
	if (uParam0->f_20 <= 3)
	{
		Local_46.f_1 = uParam0->f_9;
		VEHICLE::_0xC50CE861B55EAB8B(uParam0->f_9, 0);
	}
	return 1;
}

int func_123(var uParam0, int iParam1, bool bParam2)//Position - 0x7A1A
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9))
	{
		return 0;
	}
	Var0 = { uParam0->f_32[(uParam0->f_396[iParam1 /*203*/].f_11 - 1) /*11*/] };
	if ((func_125(uParam0, iParam1, Var0, 5f) || (uParam0->f_396[iParam1 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && CAM::IS_SPHERE_VISIBLE(Var0, 10f))) || (uParam0->f_396[iParam1 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && ENTITY::IS_ENTITY_VISIBLE(uParam0->f_396[iParam1 /*203*/].f_9)))
	{
		if (!GlobalFunc_226(&(uParam0->f_396[iParam1 /*203*/].f_198)))
		{
			GlobalFunc_7777(&(uParam0->f_396[iParam1 /*203*/].f_198));
		}
		if (GlobalFunc_5182(&(uParam0->f_396[iParam1 /*203*/].f_198)) >= 5f)
		{
			GlobalFunc_235(&(uParam0->f_396[iParam1 /*203*/].f_198));
			if (uParam0->f_396[iParam1 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				func_124(uParam0, iParam1, (uParam0->f_396[iParam1 /*203*/].f_11 - 1), bParam2);
			}
			return 1;
		}
		return 0;
	}
	func_124(uParam0, iParam1, (uParam0->f_396[iParam1 /*203*/].f_11 - 1), bParam2);
	return 1;
}

void func_124(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7B41
{
	float fVar0;
	float fVar1;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_17 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_18 - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8))
	{
		return;
	}
	if (uParam0->f_396[iParam1 /*203*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9))
		{
			return;
		}
	}
	fVar0 = uParam0->f_32[iParam2 /*11*/].f_4;
	fVar1 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar1 = 8f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar1 = 10f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar1 = 60f;
	}
	if (bParam3)
	{
		STREAMING::LOAD_SCENE(uParam0->f_32[iParam2 /*11*/]);
	}
	func_121(&(uParam0->f_396[iParam1 /*203*/]), uParam0->f_32[iParam2 /*11*/], fVar0, fVar1);
}

int func_125(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x7C42
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (iParam1 != iVar0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9))
			{
				if (GlobalFunc_713(uParam0->f_396[iVar0 /*203*/].f_9, Param2, 1) < fParam5)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(var uParam0, int iParam1)//Position - 0x7C98
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_18 - 1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8))
	{
		return 0;
	}
	if (uParam0->f_396[iParam1 /*203*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9))
		{
			return 0;
		}
	}
	switch (Local_46.f_11)
	{
		case 0:
			Var0 = { -1937.885f, 4443.319f, 36.5555f };
			fVar3 = 256.8476f;
			break;
		
		case 1:
			Var0 = { -517.2068f, 2000.553f, 204.616f };
			fVar3 = 20.3384f;
			break;
		
		case 3:
			Var0 = { -225.98f, 4224.74f, 44.36f };
			fVar3 = 80.2f;
			break;
		
		case 4:
			Var0 = { 1602.54f, 3837.21f, 33.72f };
			fVar3 = 308.94f;
			break;
		
		case 5:
			Var0 = { 2030.898f, 2134.197f, 92.5014f };
			fVar3 = 249.4471f;
			break;
		
		case 2:
			Var0 = { 2995.823f, 2774.861f, 41.9576f };
			fVar3 = 354.6729f;
			break;
		
		case 6:
			break;
	}
	if (func_125(uParam0, iParam1, Var0, 5f) || (uParam0->f_396[iParam1 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && CAM::IS_SPHERE_VISIBLE(Var0, 10f)))
	{
		return 0;
	}
	fVar4 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar4 = 8f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar4 = 10f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar4 = 60f;
	}
	func_121(&(uParam0->f_396[iParam1 /*203*/]), Var0, fVar3, fVar4);
	return 1;
}

int func_127(var uParam0, bool bParam1)//Position - 0x7E7F
{
	if (!func_122(uParam0, bParam1) || !func_128(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_128(var uParam0)//Position - 0x7EA5
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
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
			TASK::CLEAR_PED_TASKS(uParam0->f_8);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (uParam0->f_21 == joaat("a_m_y_motox_02"))
		{
		}
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	else
	{
		if (uParam0->f_21 == joaat("a_m_y_motox_02"))
		{
		}
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	if (uParam0->f_20 <= 3)
	{
	}
	else
	{
		PED::SET_DRIVER_ABILITY(uParam0->f_8, 1f);
		PED::SET_DRIVER_RACING_MODIFIER(uParam0->f_8, 1f);
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
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_8, 3);
		if (func_129())
		{
			PED::SET_PED_HELMET(uParam0->f_8, 1);
			PED::GIVE_PED_HELMET(uParam0->f_8, 1, 4096, -1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_8, 36, 1);
		}
	}
	return 1;
}

int func_129()//Position - 0x8033
{
	if (Local_46 != 1)
	{
		return 0;
	}
	switch (Local_46.f_11)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 0;
			break;
	}
	return 1;
}

void func_130()//Position - 0x809D
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 800f, 0);
}











int func_141(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x8460
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


char* func_143(int iParam0)//Position - 0x88D0
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 3:
			sVar0 = "OFF_FAIL_IDLE";
			break;
		
		case 0:
			sVar0 = "OFF_FAIL_DIST";
			break;
		
		case 1:
			sVar0 = "OFF_FAIL_KILL";
			break;
		
		case 2:
			sVar0 = "OFF_FAIL_VEH";
			break;
		
		case 4:
			sVar0 = "OFF_FAIL_EXIT";
			break;
	}
	return sVar0;
}

void func_144(var uParam0)//Position - 0x892C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		func_95(uParam0, iVar0);
		iVar0++;
	}
}

void func_145(var uParam0)//Position - 0x8951
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8))
		{
			if (PLAYER::PLAYER_PED_ID() != uParam0->f_396[iVar0 /*203*/].f_8)
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_396[iVar0 /*203*/].f_8);
				TASK::TASK_SMART_FLEE_PED(uParam0->f_396[iVar0 /*203*/].f_8, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
		}
		iVar0++;
	}
}


void func_147(var uParam0)//Position - 0x89DB
{
	int iVar0;
	
	if (!bLocal_609)
	{
		bLocal_609 = true;
		iVar0 = 1;
		while (iVar0 <= (uParam0->f_18 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar0 /*203*/].f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_396[iVar0 /*203*/].f_10));
			}
			iVar0++;
		}
	}
}

void func_148(var uParam0, var uParam1)//Position - 0x8A26
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!HUD::DOES_BLIP_EXIST(*uParam1))
		{
			*uParam1 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 0);
			HUD::SET_BLIP_COLOUR(*uParam1, 3);
			HUD::SET_BLIP_PRIORITY(*uParam1, 9);
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("OFF_OPP");
			HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
		}
		else
		{
			Var0 = { HUD::GET_BLIP_COORDS(*uParam1) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
			Var0.x = (Var0.x + ((Var3.x - Var0.x) / 10f));
			Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / 10f));
			Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / 10f));
			HUD::SET_BLIP_COORDS(*uParam1, Var0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		HUD::REMOVE_BLIP(uParam1);
	}
}


void func_150(var uParam0, int iParam1)//Position - 0x8B40
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9))
	{
		return;
	}
	if (PLAYER::PLAYER_PED_ID() == uParam0->f_396[iParam1 /*203*/].f_8)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3749)
	{
		if (func_151(uParam0, iParam1, iVar0))
		{
			if (uParam0->f_396[iParam1 /*203*/].f_202 != iVar0)
			{
				uParam0->f_396[iParam1 /*203*/].f_202 = iVar0;
				uParam0->f_396[iParam1 /*203*/].f_201++;
			}
			if (uParam0->f_3628[iVar0 /*8*/].f_7 < 0f)
			{
				fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_396[iParam1 /*203*/].f_9);
			}
			else
			{
				fVar1 = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_396[iParam1 /*203*/].f_9) * uParam0->f_3628[iVar0 /*8*/].f_7);
			}
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_396[iParam1 /*203*/].f_9) > 8f)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_396[iParam1 /*203*/].f_9, fVar1);
			}
		}
		iVar0++;
	}
}

int func_151(var uParam0, int iParam1, int iParam2)//Position - 0x8C34
{
	struct<3> Var0;
	struct<3> Var3;
	struct<7> Var6;
	
	if (uParam0->f_396[iParam1 /*203*/].f_201 > iParam2 && uParam0->f_396[iParam1 /*203*/].f_202 != iParam2)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_396[iParam1 /*203*/].f_8, 0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_396[iParam1 /*203*/].f_9))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_396[iParam1 /*203*/].f_8) };
	Var3 = { Var0 - uParam0->f_32[uParam0->f_396[iParam1 /*203*/].f_11 /*11*/] };
	if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var3.x, Var3.f_1) > 32.5f)
	{
		return 0;
	}
	Var6 = { uParam0->f_3628[iParam2 /*8*/] };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0->f_396[iParam1 /*203*/].f_8, Var6, Var6.f_3, Var6.f_6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_152(var uParam0, var uParam1)//Position - 0x8D2E
{
	uParam0 = uParam0;
	uParam1 = uParam1;
}


void func_154(int iParam0)//Position - 0x8D4F
{
	if (!Local_640)
	{
		if (func_179(Local_640.f_2))
		{
			Local_640.f_2 = { func_178(iParam0) };
		}
	}
	if (GlobalFunc_4624())
	{
		Local_640 = 1;
	}
	if (func_176(&Local_640) >= 1f && PAD::IS_CONTROL_JUST_RELEASED(0, 80))
	{
		Local_640 = 0;
	}
	if (Local_640 && GlobalFunc_4624())
	{
		func_175(&Local_640);
	}
	else
	{
		func_174(&Local_640);
	}
	if (Local_640)
	{
		if (!GlobalFunc_105(Local_640.f_2) && !func_179(Local_640.f_2))
		{
			func_155(&uLocal_611, Local_640.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_640.f_5))
			{
				CAM::DESTROY_CAM(Local_640.f_5, 0);
			}
			GlobalFunc_7542(&uLocal_611, 0);
			Local_640 = 0;
		}
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(Local_640.f_5))
		{
			CAM::DESTROY_CAM(Local_640.f_5, 0);
		}
		GlobalFunc_7542(&uLocal_611, 0);
		Local_640 = 0;
		return;
	}
}

void func_155(var uParam0, struct<3> Param1)//Position - 0x8E41
{
	func_156(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_156(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8E58
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_6531(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_157(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_157(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)//Position - 0x8E8E
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_167(uParam0, bParam6, bParam8, 0))
		{
			func_166(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (GlobalFunc_6696(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else if (GlobalFunc_6696(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
				{
					if (!GlobalFunc_74(iVar0))
					{
						GlobalFunc_159(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							GlobalFunc_158(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (GlobalFunc_74(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				GlobalFunc_6531(uParam0, iVar0, 1);
			}
		}
		if (!func_167(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !GlobalFunc_157(uParam0))
			{
				func_158(uParam0);
			}
		}
	}
}

void func_158(var uParam0)//Position - 0x9168
{
	if (GlobalFunc_162(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}








void func_166(var uParam0, struct<3> Param1, int iParam4)//Position - 0x9585
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_167(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x9621
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_171(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_171(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (GlobalFunc_157(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_171(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_171(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_171(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!GlobalFunc_6700(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_171(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_169(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (GlobalFunc_6698(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_6698(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_169(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_157(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!GlobalFunc_4953(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		GlobalFunc_163();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}


int func_169(bool bParam0, bool bParam1, bool bParam2)//Position - 0x99DF
{
	if (!GlobalFunc_4953(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}


int func_171(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A87
{
	if (!GlobalFunc_4953(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}



void func_174(int iParam0)//Position - 0x9B17
{
	iParam0->f_1 = 0f;
}

void func_175(int iParam0)//Position - 0x9B24
{
	iParam0->f_1 = (iParam0->f_1 + MISC::GET_FRAME_TIME());
}

float func_176(int iParam0)//Position - 0x9B39
{
	return iParam0->f_1;
}


Vector3 func_178(var uParam0)//Position - 0x9B54
{
	int iVar0;
	
	iVar0 = uParam0->f_396[0 /*203*/].f_11 + 1;
	if (iVar0 < uParam0->f_17)
	{
		return uParam0->f_32[iVar0 /*11*/];
	}
	return 0f, 0f, 0f;
}

int func_179(struct<3> Param0)//Position - 0x9B86
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, GlobalFunc_271(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}


void func_181(int iParam0)//Position - 0x9BCF
{
	if (iParam0->f_396[0 /*203*/].f_11 >= (iParam0->f_17 - 2))
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CROWD_CHEER", 0))
		{
			if (!*iParam0)
			{
				iParam0->f_3807 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_3807, "CROWD_CHEER_MASTER", iParam0->f_32[(iParam0->f_17 - 1) /*11*/], 0, 0, 0, 0);
				*iParam0 = 1;
			}
			else if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_3807))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_3807, "CROWD_CHEER_MASTER", iParam0->f_32[(iParam0->f_17 - 1) /*11*/], 0, 0, 0, 0);
			}
		}
	}
}

float func_182(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x9C5A
{
	if (bParam3)
	{
		fParam2 = GlobalFunc_253(fParam2, 0f, 1f);
	}
	return (fParam0 + (fParam2 * (fParam1 - fParam0)));
}


void func_184(int iParam0)//Position - 0x9CA3
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (!GlobalFunc_226(&(iParam0->f_8)))
	{
		GlobalFunc_7777(&(iParam0->f_8));
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (GlobalFunc_5182(&(iParam0->f_8)) > 2f)
	{
		fVar0 = 1E+09f;
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < iParam0->f_18)
		{
			if (iVar2 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar2 /*203*/].f_9))
				{
					fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0->f_396[iVar2 /*203*/].f_9, 1));
					if (fVar1 < fVar0)
					{
						iVar3 = iVar2;
						fVar0 = fVar1;
					}
				}
			}
			iVar2++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3599))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_3599, 0);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_396[iVar3 /*203*/].f_9, "OFFROAD_RACES_DURING_RACE_CLOSEST_VEHICLE", 0);
		iParam0->f_3599 = iParam0->f_396[iVar3 /*203*/].f_9;
		GlobalFunc_6877(&(iParam0->f_8));
	}
}

int func_185(int iParam0)//Position - 0x9D83
{
	if (CAM::IS_CAM_INTERPOLATING(Local_46.f_334))
	{
		return 0;
	}
	return 1;
}

Vector3 func_186()//Position - 0x9D9C
{
	switch (Local_46.f_11)
	{
		case 0:
			return 4.1808f, 0f, -106.0068f;
			break;
		
		case 1:
			return -6.8752f, 0f, 20.4662f;
			break;
		
		case 2:
			return 0.4905f, 0f, -8.4486f;
			break;
		
		case 3:
			return -3.7549f, 0f, 78.2621f;
			break;
		
		case 4:
			return -4.6307f, 0f, -53.0313f;
			break;
		
		case 5:
			return -3.4761f, 0f, -111.7504f;
			break;
	}
	return 0f, 0f, 0f;
}


Vector3 func_188()//Position - 0x9E86
{
	switch (Local_46.f_11)
	{
		case 0:
			return -1942.354f, 4444.596f, 37.9733f;
			break;
		
		case 1:
			return -514.8898f, 1994.259f, 207.3874f;
			break;
		
		case 2:
			return 2995.179f, 2770.271f, 43.711f;
			break;
		
		case 3:
			return -221.4457f, 4223.839f, 45.9477f;
			break;
		
		case 4:
			return 1598.88f, 3834.393f, 35.3646f;
			break;
		
		case 5:
			return 2024.328f, 2136.795f, 94.9573f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_189(int iParam0)//Position - 0x9F3C
{
	float fVar0;
	
	GlobalFunc_235(&(iParam0->f_5));
	if (Local_46.f_11 != -1)
	{
		fVar0 = func_201(Local_46.f_11);
		if (fVar0 <= 0f || fVar0 > Local_46.f_13[Local_46.f_11])
		{
			fVar0 = Local_46.f_13[Local_46.f_11];
		}
		iParam0->f_12 = fVar0;
		iParam0->f_13 = (iParam0->f_12 / 2f);
	}
	func_198(iParam0);
	iParam0->f_17 = 0;
	func_191(iParam0);
	iParam0->f_18 = 0;
	func_190(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
}

void func_190(struct<3> Param0)//Position - 0x9FB7
{
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
	MISC::CLEAR_AREA(Param0, 100f, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_PEDS(Param0, 100f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Param0, 100f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(Param0, (100f * 5f), 0);
	FIRE::STOP_FIRE_IN_RANGE(Param0, 100f);
}

void func_191(var uParam0)//Position - 0xA012
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		func_192(uParam0, iVar0);
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1)//Position - 0xA037
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_194(&(uParam0->f_396[iParam1 /*203*/]));
	func_193(&(uParam0->f_396[iParam1 /*203*/]));
}

void func_193(char* sParam0)//Position - 0xA06D
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
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_46.f_4 };
	sParam0->f_19 = Local_46.f_7;
	sParam0->f_20 = Local_46.f_8;
	sParam0->f_21 = Local_46.f_9;
	sParam0->f_22 = Local_46.f_10;
}

void func_194(var uParam0)//Position - 0xA0D7
{
	GlobalFunc_6530(uParam0);
	func_196(uParam0);
	func_195(uParam0);
}

void func_195(var uParam0)//Position - 0xA0F1
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_46.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_196(var uParam0)//Position - 0xA153
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 1);
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}


void func_198(int iParam0)//Position - 0xA193
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam0->f_17)
	{
		func_199(iParam0, iVar0);
		iVar0++;
	}
}

void func_199(var uParam0, int iParam1)//Position - 0xA1B8
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_97(&(uParam0->f_32[iParam1 /*11*/]));
	func_83(&(uParam0->f_32[iParam1 /*11*/].f_7));
	func_200(&(uParam0->f_32[iParam1 /*11*/]));
}

void func_200(var uParam0)//Position - 0xA1FB
{
	*uParam0 = { Local_46.f_4 };
	uParam0->f_3 = 10.25f;
	uParam0->f_8 = 0;
	uParam0->f_5 = 10f;
	uParam0->f_4 = 0f;
}

var func_201(int iParam0)//Position - 0xA229
{
	var uVar0;
	
	uVar0 = Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_TIMES[iParam0];
	return uVar0;
}












void func_213(var uParam0)//Position - 0xA4D5
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	*uParam0 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 2);
}

bool func_214(var uParam0)//Position - 0xA506
{
	return func_215(&(uParam0->f_3009), 0, 1065353216, 0, 0, 0);
}

int func_215(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0xA520
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
		func_217(uParam0, fParam2, bParam3);
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


void func_217(var uParam0, float fParam1, bool bParam2)//Position - 0xAC3C
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
	var uVar13;
	var uVar14;
	var uVar15;
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
	HUD::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
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
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (GlobalFunc_2259((2f - 0.5f)) - 0.001388889f)), fVar6, GlobalFunc_2255(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
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
			GlobalFunc_7949(uParam0, iVar17, (fVar1 + GlobalFunc_2259(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
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
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + GlobalFunc_2259((2f * 0.5f))), fVar6, GlobalFunc_2255(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + GlobalFunc_2259((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * GlobalFunc_2258())));
		if (fVar11 >= 0f)
		{
			fVar12 = GlobalFunc_253((fVar11 / (0.8f * GlobalFunc_2259(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
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
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
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

























void func_242(var uParam0)//Position - 0xC6F6
{
	if (CAM::DOES_CAM_EXIST(uLocal_673))
	{
		CAM::DESTROY_CAM(uLocal_673, 0);
	}
	uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_3763, uParam0->f_3766, 40f, 0, 2);
	if (CAM::DOES_CAM_EXIST(uLocal_674))
	{
		CAM::DESTROY_CAM(uLocal_674, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!uParam0->f_3623)
		{
			uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_3769, uParam0->f_3772, 40f, 0, 2);
		}
		else
		{
			uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_3775, uParam0->f_3778, 40f, 0, 2);
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_675))
	{
		CAM::DESTROY_CAM(uLocal_675, 0);
	}
	uLocal_675 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
}

void func_243(int iParam0, var uParam1, bool bParam2)//Position - 0xC7BB
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
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
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
				func_476(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11153(iParam0, iVar1, &iVar2))
			{
				func_476(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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









































































































































































































































int func_476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x50A6A
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
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
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
										func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
									func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								func_476(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_476(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_476(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_476(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_476(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_476(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_476(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
						func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_476(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_476(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11153(iParam0, iVar10, &iVar4))
		{
			func_476(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}
















void func_492(int iParam0)//Position - 0x53148
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
		func_243(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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
				func_243(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}









void func_501(int iParam0, struct<3> Param1, var uParam4)//Position - 0x53CBD
{
	if (GlobalFunc_6682(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		if (MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
		{
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1312[Global_67138.f_555[0 /*21*/].f_14 /*3*/] = { Param1 };
			Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_1382[Global_67138.f_555[0 /*21*/].f_14] = uParam4;
		}
	}
}







void func_508()//Position - 0x55819
{
	GlobalFunc_6915(&uLocal_977);
	GlobalFunc_2420();
}













int func_521(var uParam0)//Position - 0x55E54
{
	var uVar0;
	
	if (SYSTEM::TIMERA() < 2000)
	{
		return 0;
	}
	if (uParam0->f_396[0 /*203*/].f_12 <= 3)
	{
		switch (GlobalFunc_8315())
		{
			case 0:
				if (!GlobalFunc_10916(GlobalFunc_1432(), 12, 48))
				{
					GlobalFunc_6677("OFF_OUTFIT_M", 0, 0, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_11042(GlobalFunc_1432(), 12, 48, 1, 1);
				}
				break;
			
			case 1:
				if (!GlobalFunc_10916(GlobalFunc_1432(), 12, 42))
				{
					GlobalFunc_6677("OFF_OUTFIT_F", 0, 0, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_11042(GlobalFunc_1432(), 12, 42, 1, 1);
				}
				break;
			
			case 2:
				if (!GlobalFunc_10916(GlobalFunc_1432(), 12, 44))
				{
					GlobalFunc_6677("OFF_OUTFIT_T", 0, 0, -1, 10000, 7, 0, 0, 0);
					GlobalFunc_11042(GlobalFunc_1432(), 12, 44, 1, 1);
				}
				break;
			}
	}
	if (!HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (SYSTEM::TIMERA() > 3000 && uParam0->f_3619)
	{
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (!iLocal_1518)
			{
				GlobalFunc_810(&(Local_46.f_153));
				GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_46.f_153), "HUD_INPUT53", 2, 202, 1, 1, 0);
				if (iLocal_1519)
				{
					GlobalFunc_813(&(Local_46.f_153), "SCLB_PROFILE", 2, 217, 1, 1, 0);
				}
				iLocal_1518 = 1;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				uParam0->f_3619 = !uParam0->f_3619;
				iLocal_1518 = 0;
			}
			func_562(&(uParam0->f_3008), Local_46.f_11, &(Local_46.f_78[Local_46.f_11 /*8*/]));
			GlobalFunc_7512(&(Local_46.f_153), 1128792064, 1, 0, 1, 1065353216);
			if (GlobalFunc_2385(&uLocal_977))
			{
				if (!iLocal_1519)
				{
					iLocal_1519 = 1;
					iLocal_1518 = 0;
				}
			}
		}
		else if (GlobalFunc_7112(&iLocal_1414, 0))
		{
			uParam0->f_3619 = 0;
			iLocal_1414 = 0;
			GlobalFunc_810(&(Local_46.f_153));
			GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_46.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
			GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
			GlobalFunc_813(&(Local_46.f_153), "HUD_INPUT68", 2, 211, 1, 1, 0);
		}
	}
	else
	{
		if (!iLocal_1518)
		{
			GlobalFunc_810(&(Local_46.f_153));
			GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_46.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
			GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				GlobalFunc_813(&(Local_46.f_153), "HUD_INPUT68", 2, 211, 1, 1, 0);
			}
			iLocal_1518 = 1;
		}
		if (PLAYER::IS_PLAYER_ONLINE() && !iLocal_1517)
		{
			iLocal_1517 = 1;
			iLocal_1514 = 0;
			GlobalFunc_810(&(Local_46.f_153));
			GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_46.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
			GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
		}
		else if (!PLAYER::IS_PLAYER_ONLINE() && iLocal_1517)
		{
			iLocal_1517 = 0;
		}
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (iLocal_1517 && !Global_1835013.f_1)
			{
				func_636(Local_46.f_11, &(Local_46.f_78[Local_46.f_11 /*8*/]));
			}
			if (((!iLocal_1514 && Global_1835013.f_1) && Global_1835013.f_2) && iLocal_1515)
			{
				iLocal_1514 = 1;
				GlobalFunc_810(&(Local_46.f_153));
				GlobalFunc_5210(&(Local_46.f_153), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_46.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
				GlobalFunc_813(&(Local_46.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
				GlobalFunc_813(&(Local_46.f_153), "HUD_INPUT68", 2, 211, 1, 1, 0);
			}
			if (Global_1835013.f_1 && !Global_1835013.f_2)
			{
				func_548(Local_46.f_11, uParam0->f_396[0 /*203*/].f_13, uParam0->f_396[0 /*203*/].f_12, 1);
				iLocal_1516 = 1;
				Global_1835013.f_2 = 1;
			}
			if (!iLocal_1515)
			{
				iLocal_1515 = GlobalFunc_9181(&uLocal_977);
				if (iLocal_1515)
				{
					Global_1835388 = 1;
				}
			}
		}
		else
		{
			iLocal_1514 = 1;
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 211) && iLocal_1514)
		{
			uParam0->f_3619 = !uParam0->f_3619;
			iLocal_1514 = 0;
			iLocal_1518 = 0;
		}
		uVar0 = func_214(uParam0);
		if (SYSTEM::TIMERA() > 3000)
		{
			GlobalFunc_7512(&(Local_46.f_153), 1128792064, 1, 0, 1, 1065353216);
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || uVar0)
			{
				HUD::DISPLAY_RADAR(1);
				GlobalFunc_4907();
				GlobalFunc_842(0, 0);
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if (!iLocal_1516)
					{
						func_548(Local_46.f_11, uParam0->f_396[0 /*203*/].f_13, uParam0->f_396[0 /*203*/].f_12, 0);
					}
					else
					{
						iLocal_1516 = 0;
					}
				}
				func_523(uParam0, 300);
				return 1;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 216))
			{
				GlobalFunc_7512(&(Local_46.f_153), 1128792064, 1, 0, 1, 1065353216);
				iLocal_1415 = 0;
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if (!iLocal_1516)
					{
						func_548(Local_46.f_11, uParam0->f_396[0 /*203*/].f_13, uParam0->f_396[0 /*203*/].f_12, 0);
					}
					else
					{
						iLocal_1516 = 0;
					}
				}
				func_523(uParam0, 300);
				func_522(&(Local_46.f_346), &(Local_46.f_347), &(Local_46.f_345), &(Local_46.f_349), &(Local_46.f_348));
				return 2;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_522(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x56380
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam3 = 0;
	*uParam2 = 0;
	*uParam4 = 0;
}

void func_523(var uParam0, int iParam1)//Position - 0x5639C
{
	uParam0->f_3009.f_558 = (uParam0->f_3009.f_572 + iParam1);
	uParam0->f_3009.f_561 = 0;
}

























void func_548(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x56F11
{
	struct<6> Var0[3];
	struct<8> Var19[3];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var19[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var19[1 /*8*/]), "Location", 32);
	StringCopy(&(Var19[2 /*8*/]), "Type", 32);
	StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_02", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_03", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_04", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_05", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_06", 24);
			break;
	}
	StringCopy(&(Var0[2 /*6*/]), "OffroadRace", 24);
	if (bParam3)
	{
		if (GlobalFunc_5284(817, &Var0, &Var19, 3, -1, 1, 0))
		{
			GlobalFunc_5768(817, 131, -SYSTEM::FLOOR((fParam1 * 1000f)), 0f, 0);
			if (iParam2 == 1)
			{
				GlobalFunc_5768(817, 96, 3, 0f, 0);
			}
			else if (iParam2 == 2)
			{
				GlobalFunc_5768(817, 96, 2, 0f, 0);
			}
			else if (iParam2 == 3)
			{
				GlobalFunc_5768(817, 96, 1, 0f, 0);
			}
			else
			{
				GlobalFunc_5768(817, 96, 0, 0f, 0);
			}
			GlobalFunc_5768(817, 2, SYSTEM::FLOOR((fParam1 * 1000f)), 0f, 0);
			GlobalFunc_5768(817, 147, SYSTEM::FLOOR((fParam1 * 1000f)), 0f, 0);
			GlobalFunc_5768(817, 149, 0, 0f, 0);
			GlobalFunc_5768(817, 148, 0, 0f, 0);
			GlobalFunc_5768(817, 109, 1, 0f, 0);
			if (iParam2 == 1)
			{
				GlobalFunc_5768(817, 86, 1, 0f, 0);
			}
			else
			{
				GlobalFunc_5768(817, 86, 0, 0f, 0);
			}
			if (iParam2 == 2)
			{
				GlobalFunc_5768(817, 158, 1, 0f, 0);
			}
			else
			{
				GlobalFunc_5768(817, 158, 0, 0f, 0);
			}
			if (iParam2 == 3)
			{
				GlobalFunc_5768(817, 157, 1, 1f, 0);
			}
			else
			{
				GlobalFunc_5768(817, 157, 0, 0f, 0);
			}
		}
	}
	else if (GlobalFunc_5284(817, &Var0, &Var19, 3, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, -SYSTEM::FLOOR((fParam1 * 1000f)), 0f);
		if (iParam2 == 1)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 3, 0f);
		}
		else if (iParam2 == 2)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 2, 0f);
		}
		else if (iParam2 == 3)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 1, 0f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 0, 0f);
		}
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, SYSTEM::FLOOR((fParam1 * 1000f)), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(147, SYSTEM::FLOOR((fParam1 * 1000f)), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(149, 0, 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(148, 0, 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, 1, 0f);
		if (iParam2 == 1)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(86, 1, 0f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(86, 0, 0f);
		}
		if (iParam2 == 2)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(158, 1, 0f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(158, 0, 0f);
		}
		if (iParam2 == 3)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(157, 1, 1f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(157, 0, 0f);
		}
	}
}














void func_562(var uParam0, var uParam1, var uParam2)//Position - 0x57AAD
{
	GlobalFunc_10804(uParam0, &uLocal_977);
}





































































void func_631(var uParam0)//Position - 0x5EA36
{
	int iVar0;
	
	if (!GlobalFunc_225(&(uParam0->f_5)))
	{
		GlobalFunc_5693(&(uParam0->f_5));
	}
	func_635(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		func_632(&(uParam0->f_396[iVar0 /*203*/]));
		if (iVar0 != 0)
		{
			func_92(&(uParam0->f_396[iVar0 /*203*/]), 1);
		}
		iVar0++;
	}
}

void func_632(var uParam0)//Position - 0x5EA8E
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (Local_46 != 0)
		{
			func_633();
		}
	}
}

void func_633()//Position - 0x5EAAC
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_669))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_669, 0);
	}
	func_634();
}

void func_634()//Position - 0x5EACB
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_672))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_672))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_672, 1, 1);
			PED::DELETE_PED(&iLocal_672);
		}
	}
}

void func_635(var uParam0)//Position - 0x5EAF8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (uParam0->f_396[iVar0 /*203*/].f_11 != uParam0->f_17)
		{
			uParam0->f_396[iVar0 /*203*/].f_13 = (uParam0->f_396[0 /*203*/].f_13 + (IntToFloat((uParam0->f_17 - uParam0->f_396[iVar0 /*203*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_636(int iParam0, char[4] cParam1)//Position - 0x5EB5D
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "OR_RACE_01", 24);
			break;
		
		case 1:
			StringCopy(&Var0, "OR_RACE_02", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "OR_RACE_03", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "OR_RACE_04", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "OR_RACE_05", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "OR_RACE_06", 24);
			break;
	}
	GlobalFunc_7120(&uLocal_977, 80, &Var0, cParam1, iParam0, -1, 0, 0);
}





void func_641(var uParam0)//Position - 0x633CC
{
	AUDIO::STOP_SOUND(uParam0->f_3807);
}

int func_642(int iParam0)//Position - 0x633DD
{
	switch (iParam0)
	{
		case joaat("blazer"):
		case joaat("blazer2"):
			return 1;
			break;
	}
	return 0;
}

int func_643(int iParam0)//Position - 0x63400
{
	switch (iParam0)
	{
		case joaat("sanchez"):
			return 1;
			break;
	}
	return 0;
}


void func_645(bool bParam0)//Position - 0x63431
{
	Local_640 = bParam0;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_646()//Position - 0x63445
{
	func_647();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_647()//Position - 0x63456
{
	Local_640 = 0;
	Local_640.f_2 = { 0f, 0f, 0f };
	Local_640.f_5 = 0;
}



void func_650(var uParam0, var uParam1)//Position - 0x63588
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	func_651(uParam0);
	Local_46.f_333 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_3756, uParam0->f_3759, 50f, 0, 2);
	Local_46.f_334 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, func_188(), func_186(), 50f, 0, 2);
	CAM::SET_CAM_ACTIVE(uLocal_685, 1);
}

void func_651(var uParam0)//Position - 0x635EC
{
	if (!CAM::DOES_CAM_EXIST(uLocal_685))
	{
		uLocal_685 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uParam0->f_3750, uParam0->f_3753, uParam0->f_3762, 0, 2);
	}
}





void func_656(var uParam0)//Position - 0x637A6
{
	func_662(uParam0);
	func_660(uParam0);
	SYSTEM::SETTIMERA(0);
	if (Local_46.f_11 + 1 == 1)
	{
		GlobalFunc_7610(112, 0, 0);
	}
	else if (Local_46.f_11 + 1 == 2)
	{
		GlobalFunc_7610(113, 0, 0);
	}
	else if (Local_46.f_11 + 1 == 3)
	{
		GlobalFunc_7610(114, 0, 0);
	}
	else if (Local_46.f_11 + 1 == 4)
	{
		GlobalFunc_7610(115, 0, 0);
	}
	else if (Local_46.f_11 + 1 == 5)
	{
		GlobalFunc_7610(116, 0, 0);
	}
	else if (Local_46.f_11 + 1 == 6)
	{
		GlobalFunc_7610(117, 0, 0);
	}
	GlobalFunc_842(1, 0);
}




void func_660(var uParam0)//Position - 0x64049
{
	func_661(uParam0->f_3008, "OFFR_TITLE");
}

void func_661(var uParam0, char* sParam1)//Position - 0x6405F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_662(var uParam0)//Position - 0x64081
{
	int iVar0;
	char[] cVar1[8];
	
	GlobalFunc_5767(&(uParam0->f_3009));
	iVar0 = 0;
	cVar1 = "";
	if (uParam0->f_396[0 /*203*/].f_12 == 1)
	{
		iVar0 = 3;
		cVar1 = "SPR_1stpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 2)
	{
		iVar0 = 2;
		cVar1 = "SPR_2ndpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 3)
	{
		iVar0 = 1;
		cVar1 = "SPR_3rdpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 4)
	{
		iVar0 = 0;
		cVar1 = "SPR_4thpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 5)
	{
		iVar0 = 0;
		cVar1 = "SPR_5thpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 6)
	{
		iVar0 = 0;
		cVar1 = "SPR_6thpl";
	}
	GlobalFunc_2263(&(uParam0->f_3009), cVar1, &(Local_46.f_21[Local_46.f_11 /*8*/]), 0);
	GlobalFunc_2262(&(uParam0->f_3009), 18, "SPR_TIME", "", SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f)), 0, 0, 0);
	if ((iLocal_1415 && PLAYER::IS_PLAYER_ONLINE()) && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE()))
	{
		if (Local_46.f_348 > SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f)) || Local_46.f_348 <= 0)
		{
			Local_46.f_348 = SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f));
		}
		GlobalFunc_2262(&(uParam0->f_3009), 18, "SPR_BESTTIME", "", Local_46.f_348, 0, 0, 0);
		if (Local_46.f_349 > SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f)) || Local_46.f_349 <= 0)
		{
			Local_46.f_349 = SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f));
		}
		GlobalFunc_2262(&(uParam0->f_3009), 18, "LOB_SPLIT_0", "", Local_46.f_349, 0, 0, 0);
	}
	func_667(&(uParam0->f_3009), 1, "SPR_RESULT", uParam0->f_396[0 /*203*/].f_12, uParam0->f_18, 1, iVar0);
	GlobalFunc_7119(&(uParam0->f_3009), 1, 0);
}





void func_667(var uParam0, int iParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x6466D
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = uParam3;
	uParam0->f_555 = uParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}




void func_671(var uParam0)//Position - 0x64761
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8))
		{
			if (uParam0->f_396[iVar0 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_38(Local_46.f_11);
				if (iVar1 <= 0 || iVar1 > uParam0->f_396[iVar0 /*203*/].f_12)
				{
					if (Local_46.f_11 >= 0 && Local_46.f_11 < 7)
					{
						func_673(Local_46.f_11, uParam0->f_396[iVar0 /*203*/].f_12);
					}
				}
				fVar2 = func_201(Local_46.f_11);
				if (fVar2 <= 0f || fVar2 > uParam0->f_396[iVar0 /*203*/].f_13)
				{
					if (Local_46.f_11 >= 0 && Local_46.f_11 < 7)
					{
						func_672(Local_46.f_11, uParam0->f_396[iVar0 /*203*/].f_13);
					}
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_672(int iParam0, var uParam1)//Position - 0x64841
{
	Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_TIMES[iParam0] = uParam1;
}

void func_673(int iParam0, var uParam1)//Position - 0x64858
{
	Global_SAVE_DATA.OFFROAD_SAVED_STRUCT.OFFROAD_RANKS[iParam0] = uParam1;
}


void func_675(var uParam0)//Position - 0x6487E
{
	char cVar0[16];
	var uVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&cVar0, "Offroad_", 16);
	switch (Local_46.f_11)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 16);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 16);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 16);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 16);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 16);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 16);
			break;
	}
	iVar5 = iVar5;
	GlobalFunc_6877(&(uParam0->f_5));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	VEHICLE::SET_VEHICLE_HANDBRAKE(uParam0->f_396[0 /*203*/].f_9, 0);
	if (Local_46 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
	}
	uParam0->f_2 = 1;
	fVar7 = 1f;
	iVar8 = 0;
	while (iVar8 < uParam0->f_18)
	{
		func_676(&(uParam0->f_396[iVar8 /*203*/]));
		if ((iVar8 % 3) == 0 && iVar8 != 0)
		{
			fVar7 = (fVar7 - 0.02f);
		}
		if (Local_46 != 1)
		{
			if (iVar8 != 0)
			{
				func_90(uParam0, uParam0->f_396[iVar8 /*203*/].f_8, uParam0->f_396[iVar8 /*203*/].f_9, uParam0->f_32[uParam0->f_396[iVar8 /*203*/].f_11 /*11*/], uParam0->f_32[uParam0->f_396[iVar8 /*203*/].f_11 /*11*/].f_8, iVar8);
			}
		}
		else if (bLocal_1509)
		{
			if (iVar8 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar8 /*203*/].f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar8 /*203*/].f_9))
				{
					iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
					if (iVar6 < 500)
					{
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 500);
					}
					else
					{
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(400, 700);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar4);
					TASK::OPEN_SEQUENCE_TASK(&uVar4);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam0->f_396[iVar8 /*203*/].f_9, &cVar0, 786468, 0, 24, -1, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_396[iVar8 /*203*/].f_9) * fVar7), 0, 1073741824);
					TASK::CLOSE_SEQUENCE_TASK(uVar4);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_396[iVar8 /*203*/].f_8, uVar4);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_396[iVar8 /*203*/].f_9, 8f);
				}
			}
		}
		else if (iVar8 != 0)
		{
			func_90(uParam0, uParam0->f_396[iVar8 /*203*/].f_8, uParam0->f_396[iVar8 /*203*/].f_9, uParam0->f_32[uParam0->f_396[iVar8 /*203*/].f_11 /*11*/], uParam0->f_32[uParam0->f_396[iVar8 /*203*/].f_11 /*11*/].f_8, iVar8);
		}
		iVar8++;
	}
}

void func_676(var uParam0)//Position - 0x64ACC
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
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_22))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
		}
	}
}

void func_677(var uParam0)//Position - 0x64B2F
{
	int iVar0;
	
	AUDIO::START_AUDIO_SCENE("OFFROAD_RACES_DURING_RACE");
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_396[iVar0 /*203*/].f_9))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_396[iVar0 /*203*/].f_9, "OFFROAD_RACES_DURING_RACE_GENERAL_VEHICLES", 0);
			}
		}
		iVar0++;
	}
}

int func_678(var uParam0)//Position - 0x64B82
{
	switch (iLocal_653)
	{
		case 0:
			iLocal_45 = -1;
			iLocal_44 = 0;
			GlobalFunc_8641(uParam0);
			GlobalFunc_1083(&Local_648, 3);
			iLocal_653 = 1;
			break;
		
		case 1:
			if (GlobalFunc_7084(uParam0, 1f))
			{
				func_679(&Local_648, 1, 0, 1, 3, 1, 0);
				iLocal_653 = 2;
			}
			break;
		
		case 2:
			if (func_679(&Local_648, 0, 0, 0, 3, 1, 0))
			{
				GlobalFunc_6877(&(Local_46.f_350));
				GlobalFunc_235(&(Local_648.f_2));
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_679(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x64C0C
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	var uVar7;
	var uVar8;
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
	if (!GlobalFunc_2951(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !GlobalFunc_2951(uParam0->f_1, 1))
		{
			func_682(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_1083(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !GlobalFunc_2951(uParam0->f_1, 2))
		{
			func_682(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_1083(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_2951(uParam0->f_1, 4))
		{
			func_682(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_1083(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_2951(uParam0->f_1, 16))
		{
			if (MISC::ABSF((GlobalFunc_5182(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_682(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !GlobalFunc_2951(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			func_682(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &uVar6, &uVar7, &uVar8, &uVar9);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			GlobalFunc_726("CNTDWN_GO");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uVar8);
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



void func_682(int iParam0, int iParam1)//Position - 0x64EF7
{
	GlobalFunc_812(iParam0, iParam1);
}

int func_683(int iParam0, int iParam1, bool bParam2)//Position - 0x64F07
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar3 = -1;
	fVar4 = 1.2f;
	if (iParam1 == (iParam0->f_17 - 1))
	{
		iVar3 = 38;
	}
	else if (!bParam2)
	{
		fVar4 = 0.7f;
	}
	if (!func_690(&(iParam0->f_32[iParam1 /*11*/]), iVar3, fVar4, iParam1, iParam0->f_17))
	{
		return 0;
	}
	if (bParam2)
	{
		Var5 = { iParam0->f_32[iParam1 /*11*/] };
		Var8 = { 0f, 0f, 0f };
		if (iParam1 < iParam0->f_17)
		{
			if (iParam1 != (iParam0->f_17 - 1))
			{
				if (!GlobalFunc_537(iParam0->f_32[iParam1 /*11*/], iParam0->f_32[iParam1 + 1 /*11*/], 1056964608))
				{
					Var5 = { iParam0->f_32[iParam1 + 1 /*11*/] };
					func_689(iParam0->f_32[iParam1 /*11*/], Var5);
				}
			}
			else
			{
				func_689(iParam0->f_32[iParam1 /*11*/], iParam0->f_32[iParam1 /*11*/]);
			}
		}
		if (Local_46 == 1)
		{
			if (Local_46.f_11 == 1)
			{
				if (GlobalFunc_2951(iParam0->f_32[8 /*11*/].f_10, 4))
				{
					GlobalFunc_6533(&(iParam0->f_32[8 /*11*/].f_10), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { iParam0->f_32[(iParam1 - 1) /*11*/] };
		}
		if (!func_684(Var8, &(iParam0->f_32[iParam1 /*11*/]), Var5, 10.25f))
		{
			return 0;
		}
		if (iParam1 + 1 < iParam0->f_17)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { iParam0->f_32[0 /*11*/] };
			}
			else
			{
				Var0 = { iParam0->f_32[iParam1 + 2 /*11*/] };
			}
			if (!func_684(iParam0->f_32[iParam1 /*11*/], &(iParam0->f_32[iParam1 + 1 /*11*/]), Var0, 10.25f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_684(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)//Position - 0x650BE
{
	if (!func_685(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_685(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)//Position - 0x650DF
{
	struct<3> Var0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	Var0 = { *uParam3 };
	func_83(&(uParam3->f_7));
	if (((((uParam3->f_8 != 2 && uParam3->f_8 != 3) && uParam3->f_8 != 4) && uParam3->f_8 != 5) && uParam3->f_8 != 0) && !func_688(uParam3, 4))
	{
		fVar8 = uParam3->f_2;
		fVar9 = 0.65f;
		Var0.f_2 = (fVar8 + (fVar9 * fParam7));
	}
	fParam7 = (8.5f * 1.333f);
	if (uParam3->f_8 == 0)
	{
		if (!func_688(uParam3, 4))
		{
			fVar10 = uParam3->f_2;
			fVar11 = 0.65f;
			Var0.f_2 = (fVar10 + (fVar11 * fParam7));
			uVar3 = GlobalFunc_6532(uParam3->f_8, Param0, Var0, Param4);
			func_100(GlobalFunc_6295(GlobalFunc_4622()), &iVar4, &iVar5, &iVar6, &uVar7);
			uParam3->f_7 = GRAPHICS::CREATE_CHECKPOINT(uVar3, Var0, Param4, fParam7, iVar4, iVar5, iVar6, GlobalFunc_2419(Var0, 220, 255), 0);
			HUD::GET_HUD_COLOUR(134, &iVar4, &iVar5, &iVar6, &uVar7);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam3->f_7, iVar4, iVar5, iVar6, GlobalFunc_2419(Var0, 70, 210));
			GRAPHICS::_SET_CHECKPOINT_SCALE(uParam3->f_7, 0.95f);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam3->f_7, 4f, 4f, 100f);
		}
	}
	else
	{
		uParam3->f_7 = GRAPHICS::CREATE_CHECKPOINT(func_686(uParam3->f_8, uParam3->f_9), Var0, Param4, fParam7, 254, 207, 12, GlobalFunc_2419(Var0, 220, 255), 0);
		HUD::GET_HUD_COLOUR(134, &iVar4, &iVar5, &iVar6, &uVar7);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam3->f_7, iVar4, iVar5, iVar6, GlobalFunc_2419(Var0, 70, 210));
		GRAPHICS::_SET_CHECKPOINT_SCALE(uParam3->f_7, 0.95f);
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam3->f_7, 4f, 4f, 100f);
	}
	if (uParam3->f_7 == 0)
	{
		return 0;
	}
	return 1;
}

int func_686(int iParam0, int iParam1)//Position - 0x6529F
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
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


bool func_688(var uParam0, int iParam1)//Position - 0x65469
{
	return GlobalFunc_2951(uParam0->f_10, iParam1);
}

void func_689(struct<3> Param0, struct<3> Param3)//Position - 0x6547B
{
	if (func_179(Param0))
	{
		Local_640.f_2 = { Param3 };
	}
	else
	{
		Local_640.f_2 = { Param0 };
	}
}

int func_690(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0x654A7
{
	if (!func_691(&(uParam0->f_6), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_9))
	{
		return 0;
	}
	return 1;
}

int func_691(var uParam0, struct<3> Param1, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8)//Position - 0x654D0
{
	GlobalFunc_703(uParam0);
	*uParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam4);
	}
	HUD::SET_BLIP_SCALE(*uParam0, uParam5);
	HUD::SET_BLIP_DISPLAY(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		HUD::SET_BLIP_COLOUR(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		HUD::SET_BLIP_COLOUR(*uParam0, 3);
	}
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

void func_692(var uParam0)//Position - 0x6557B
{
	uParam0->f_12 = uParam0->f_12;
}

void func_693(var uParam0)//Position - 0x6558B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 > 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_396[iVar0 /*203*/].f_8, 1);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9);
				}
			}
		}
		iVar0++;
	}
}

void func_694(int iParam0)//Position - 0x6564D
{
	if ((!iLocal_1415 && PLAYER::IS_PLAYER_ONLINE()) && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_AGE_RESTRICTED_PROFILE()))
	{
		switch (iParam0)
		{
			case 0:
				iLocal_1416 = 100;
				break;
			
			case 1:
				iLocal_1416 = 101;
				break;
			
			case 3:
				iLocal_1416 = 102;
				break;
			
			case 4:
				iLocal_1416 = 103;
				break;
			
			case 5:
				iLocal_1416 = 104;
				break;
			
			case 2:
				iLocal_1416 = 105;
				break;
		}
		iLocal_1415 = func_695(&(Local_46.f_346), &(Local_46.f_347), &(Local_46.f_345), iLocal_1416, &(Local_46.f_349), &(Local_46.f_348));
	}
}

int func_695(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)//Position - 0x656F7
{
	struct<69> Var0;
	struct<69> Var69;
	struct<13> Var138;
	struct<4> Var236;
	struct<13> Var244;
	
	Var0.f_3.f_1 = 4;
	Var69.f_3.f_1 = 4;
	Var138.f_19.f_1 = 4;
	Var244 = { GlobalFunc_318(PLAYER::PLAYER_ID()) };
	Var0 = 817;
	Var0.f_1 = 5;
	Var0.f_3 = 3;
	StringCopy(&(Var0.f_3.f_1[0 /*16*/]), "GameType", 32);
	StringCopy(&(Var0.f_3.f_1[1 /*16*/]), "Location", 32);
	StringCopy(&(Var0.f_3.f_1[2 /*16*/]), "Type", 32);
	StringCopy(&(Var0.f_3.f_1[0 /*16*/].f_8), "SP", 32);
	switch (iParam3)
	{
		case 0:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 1:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 2:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 3:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 4:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		
		case 5:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 6:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 7:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 8:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		
		case 100:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_01", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 101:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_02", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 102:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_03", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 103:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_04", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 104:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_05", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		case 105:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_06", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		
		default:
			break;
	}
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_8543(uParam1, uParam2, &Var0, 1, 1))
			{
				GlobalFunc_2070(&Var236, &Var0);
				if (*uParam2 && STATS::_0xA0F93D5465B3094D(&Var236))
				{
					if (Var236.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var138);
						if (!GlobalFunc_319(Var138))
						{
							*uParam0 = 2;
						}
						else
						{
							*uParam4 = STATS::_0x88578F6EC36B4A3A(0, 3);
							*uParam0 = 1;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					*uParam0 = 2;
				}
				GlobalFunc_5389(uParam1, uParam2, &Var0);
				Var0 = { Var69 };
			}
			break;
		
		case 1:
			if (GlobalFunc_8516(uParam1, uParam2, &Var0, &Var244))
			{
				GlobalFunc_2070(&Var236, &Var0);
				if (*uParam2 && STATS::_0xA0F93D5465B3094D(&Var236))
				{
					if (Var236.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var138);
						if (!GlobalFunc_319(Var138))
						{
							*uParam0 = 2;
						}
						else
						{
							*uParam5 = STATS::_0x88578F6EC36B4A3A(0, 3);
							*uParam0 = 2;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					*uParam0 = 2;
				}
				GlobalFunc_5389(uParam1, uParam2, &Var0);
				Var0 = { Var69 };
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_696(var uParam0)//Position - 0x65B57
{
	switch (iLocal_44)
	{
		case 0:
			if (iLocal_45 > 0)
			{
				if (MISC::GET_GAME_TIMER() < iLocal_45)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 71))
					{
						if (GlobalFunc_4947(uParam0->f_9) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9))
						{
							if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0->f_9)))
							{
								AUDIO::SET_VEHICLE_BOOST_ACTIVE(uParam0->f_9, 1);
							}
							GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
							iLocal_45 = MISC::GET_GAME_TIMER() + 1500;
							iLocal_44 = 1;
							CAM::_0x59424BD75174C9B1();
						}
					}
				}
				else
				{
					iLocal_44 = 2;
				}
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() > iLocal_45)
			{
				if (GlobalFunc_4947(uParam0->f_9) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0->f_9)))
					{
						AUDIO::SET_VEHICLE_BOOST_ACTIVE(uParam0->f_9, 0);
					}
					iLocal_44 = 2;
				}
			}
			else if (GlobalFunc_4947(uParam0->f_9) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_9, 0, 0f, 50f, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
			}
			break;
	}
}





void func_701()//Position - 0x65CDB
{
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 98, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 95, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 79, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 286, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 287, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 65, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 93, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 50, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
}




void func_705(var uParam0)//Position - 0x65E35
{
	iLocal_928 = -1;
	iLocal_929 = uParam0->f_396[0 /*203*/].f_12;
}

void func_706(var uParam0)//Position - 0x65E4E
{
	int iVar0;
	
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(uParam0->f_396[0 /*203*/].f_16, uParam0->f_32[0 /*11*/], 50f, 1, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_396[0 /*203*/].f_16, 100f, 1, 0, 0, 0, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_32[iVar0 /*11*/], 50f, 1, 0, 0, 0, 0);
		iVar0++;
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(uParam0->f_396[0 /*203*/].f_16, uParam0->f_32[0 /*11*/], 50f, 0, 0, 1);
	switch (Local_46.f_11)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, 0, 0, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, 1, 0, 0, 0, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1938.342f, 4443.261f, 36.4759f, 100f, 1, 0, 0, 0, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
			break;
		
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.1254f, 1987.582f, 205.3305f, -948.5215f, 2752.741f, 25.35144f, 300f, 0, 0, 1);
			break;
		
		case 3:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.286f, 0f, -229.0783f, 4227.072f, 50f, 250f, 1, 0, 0, 0, 0);
			break;
		
		case 4:
			break;
		
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 0, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, 1, 0, 0, 0, 0);
			break;
		
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", 0);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 1);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.948f, 2993.644f, -9.3564f, 2952.969f, 2530.636f, 177.1921f, 500f, 1, 0, 0, 0, 0);
			break;
		
		case 6:
			break;
	}
}

int func_707()//Position - 0x660CF
{
	char cVar0[16];
	
	if (!GlobalFunc_2951(iLocal_692, 16384))
	{
		StringCopy(&cVar0, "Offroad_", 16);
		switch (Local_46.f_11)
		{
			case 0:
				StringIntConCat(&cVar0, 1, 16);
				break;
			
			case 1:
				StringIntConCat(&cVar0, 2, 16);
				break;
			
			case 2:
				StringIntConCat(&cVar0, 6, 16);
				break;
			
			case 3:
				StringIntConCat(&cVar0, 3, 16);
				break;
			
			case 4:
				StringIntConCat(&cVar0, 4, 16);
				break;
			
			case 5:
				StringIntConCat(&cVar0, 5, 16);
				break;
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
		{
			func_682(&iLocal_692, 16384);
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_708(int iParam0)//Position - 0x66168
{
	char cVar0[32];
	int iVar8;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "orr_race1_post_rank", 32);
			iVar8 = 0;
			while (iVar8 < 6)
			{
				StringIntConCat(&cVar0, iVar8 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race1_post_rank", 32);
				iVar8++;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("orr_canyoncliffs_finish"))
			{
				TASK::REQUEST_WAYPOINT_RECORDING("orr_canyoncliffs_finish");
			}
			StringCopy(&Local_896, "orr_race1_post_rank", 64);
			StringCopy(&cLocal_912, "orr_canyoncliffs_finish", 64);
			Local_870[0 /*3*/] = { -212.7521f, 3803.012f, 38.3336f };
			fLocal_889[0] = 145.3736f;
			Local_870[1 /*3*/] = { -213.8073f, 3811.771f, 37.8089f };
			fLocal_889[1] = 144.8253f;
			Local_870[2 /*3*/] = { -214.4785f, 3814.849f, 37.6728f };
			fLocal_889[2] = 142.2629f;
			Local_870[3 /*3*/] = { -215.5335f, 3817.486f, 37.5397f };
			fLocal_889[3] = 143.4529f;
			Local_870[4 /*3*/] = { -216.7162f, 3819.57f, 37.3961f };
			fLocal_889[4] = 140.5308f;
			Local_870[5 /*3*/] = { -217.8613f, 3822.401f, 37.1999f };
			fLocal_889[5] = 152.032f;
			break;
		
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING("orr_ridgerun_finish");
			StringCopy(&cVar0, "orr_race2_post_rank", 32);
			iVar8 = 0;
			while (iVar8 < 5)
			{
				StringIntConCat(&cVar0, iVar8 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race2_post_rank", 32);
				iVar8++;
			}
			StringCopy(&Local_896, "orr_race2_post_rank", 64);
			StringCopy(&cLocal_912, "orr_ridgerun_finish", 64);
			Local_870[0 /*3*/] = { -1178.964f, 2589.407f, 14.3822f };
			fLocal_889[0] = 166.0974f;
			Local_870[0 /*3*/] = { -1182.05f, 2589.767f, 14.4012f };
			fLocal_889[0] = 170.4144f;
			Local_870[1 /*3*/] = { -1186.679f, 2588.235f, 14.3241f };
			fLocal_889[1] = 171.6951f;
			Local_870[2 /*3*/] = { -1190.099f, 2586.324f, 14.2684f };
			fLocal_889[2] = 178.707f;
			Local_870[3 /*3*/] = { -1194.204f, 2584.17f, 14.1352f };
			fLocal_889[3] = 181.7394f;
			break;
		
		case 3:
			TASK::REQUEST_WAYPOINT_RECORDING("orr_valleytrail_finish");
			StringCopy(&cVar0, "orr_race3_post_rank", 32);
			iVar8 = 0;
			while (iVar8 < 6)
			{
				StringIntConCat(&cVar0, iVar8 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race3_post_rank", 32);
				iVar8++;
			}
			StringCopy(&Local_896, "orr_race3_post_rank", 64);
			StringCopy(&cLocal_912, "orr_valleytrail_finish", 64);
			Local_870[0 /*3*/] = { -1876.48f, 4415.3f, 46.76f };
			fLocal_889[0] = 242.0357f;
			Local_870[1 /*3*/] = { -1880.11f, 4417.62f, 46.22f };
			fLocal_889[1] = 242.0357f;
			Local_870[2 /*3*/] = { -1883.44f, 4419.53f, 45.73f };
			fLocal_889[2] = 242.0357f;
			Local_870[3 /*3*/] = { -1887.3f, 4421.62f, 45.13f };
			fLocal_889[3] = 242.0357f;
			Local_870[4 /*3*/] = { -1891.44f, 4423.88f, 44.3f };
			fLocal_889[4] = 242.0357f;
			Local_870[5 /*3*/] = { -1895.06f, 4426.13f, 43.59f };
			fLocal_889[5] = 242.0357f;
			break;
		
		case 4:
			StringCopy(&cVar0, "orr_race4_post_rank", 32);
			iVar8 = 0;
			while (iVar8 < 5)
			{
				StringIntConCat(&cVar0, iVar8 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race4_post_rank", 32);
				iVar8++;
			}
			StringCopy(&Local_896, "orr_race4_post_rank", 64);
			TASK::REQUEST_WAYPOINT_RECORDING("orr_lakesidesplash_finish");
			StringCopy(&cLocal_912, "orr_lakesidesplash_finish", 64);
			Local_870[0 /*3*/] = { 1667.19f, 4562.59f, 41.6f };
			fLocal_889[0] = 270.1976f;
			Local_870[1 /*3*/] = { 1661.51f, 4562.63f, 42f };
			fLocal_889[1] = 270.1976f;
			Local_870[2 /*3*/] = { 1656.94f, 4562.33f, 42.12f };
			fLocal_889[2] = 270.1976f;
			Local_870[3 /*3*/] = { 1652.28f, 4562.09f, 42.28f };
			fLocal_889[3] = 270.1976f;
			Local_870[4 /*3*/] = { 1647.19f, 4561.91f, 42.56f };
			fLocal_889[4] = 270.1976f;
			break;
		
		case 5:
			TASK::REQUEST_WAYPOINT_RECORDING("orr_ecofriendly_finish");
			StringCopy(&cVar0, "orr_race5_post_rank", 32);
			iVar8 = 0;
			while (iVar8 < 6)
			{
				StringIntConCat(&cVar0, iVar8 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race5_post_rank", 32);
				iVar8++;
			}
			StringCopy(&Local_896, "orr_race5_post_rank", 64);
			StringCopy(&cLocal_912, "orr_ecofriendly_finish", 64);
			Local_870[0 /*3*/] = { 2528.1f, 1863.87f, 20.54f };
			fLocal_889[0] = 180.3076f;
			Local_870[1 /*3*/] = { 2527.99f, 1870.72f, 20.34f };
			fLocal_889[1] = 180.3076f;
			Local_870[2 /*3*/] = { 2527.84f, 1877.52f, 20.17f };
			fLocal_889[2] = 180.3076f;
			Local_870[3 /*3*/] = { 2527.71f, 1884.05f, 20.08f };
			fLocal_889[3] = 180.3076f;
			Local_870[4 /*3*/] = { 2527.6f, 1892.1f, 19.98f };
			fLocal_889[4] = 180.3076f;
			Local_870[5 /*3*/] = { 2527.49f, 1899.62f, 19.88f };
			fLocal_889[5] = 180.3076f;
			break;
		
		case 2:
			StringCopy(&cVar0, "orr_race6_post_rank", 32);
			iVar8 = 0;
			while (iVar8 < 6)
			{
				StringIntConCat(&cVar0, iVar8 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race6_post_rank", 32);
				iVar8++;
			}
			StringCopy(&Local_896, "orr_race6_post_rank", 64);
			TASK::REQUEST_WAYPOINT_RECORDING("orr_minewardspiral_finish");
			StringCopy(&cLocal_912, "orr_minewardspiral_finish", 64);
			Local_870[0 /*3*/] = { 2966.5f, 2890.26f, 58.41f };
			fLocal_889[0] = 126.6092f;
			Local_870[1 /*3*/] = { 2969.78f, 2892.81f, 58.46f };
			fLocal_889[1] = 126.6092f;
			Local_870[2 /*3*/] = { 2972.34f, 2895.33f, 58.41f };
			fLocal_889[2] = 126.6092f;
			Local_870[3 /*3*/] = { 2974.65f, 2897.74f, 58.4f };
			fLocal_889[3] = 126.6092f;
			Local_870[4 /*3*/] = { 2977.32f, 2900.29f, 58.56f };
			fLocal_889[4] = 126.6092f;
			Local_870[5 /*3*/] = { 2979.87f, 2902.49f, 58.75f };
			fLocal_889[5] = 126.6092f;
			break;
		
		case 6:
			TASK::REQUEST_WAYPOINT_RECORDING("OR_Post_7");
			StringCopy(&Local_896, "OR_Post_7", 64);
			Local_870[0 /*3*/] = { 1211.321f, 2377.747f, 62.4187f };
			fLocal_889[0] = 5.7949f;
			Local_870[1 /*3*/] = { 1211.276f, 2374.08f, 62.4053f };
			fLocal_889[1] = 346.0673f;
			Local_870[2 /*3*/] = { 1209.615f, 2371.051f, 62.0576f };
			fLocal_889[2] = 314.3206f;
			Local_870[3 /*3*/] = { 1205.509f, 2369.264f, 61.143f };
			fLocal_889[3] = 286.8246f;
			Local_870[4 /*3*/] = { 1200.05f, 2368.534f, 60.005f };
			fLocal_889[4] = 265.4383f;
			Local_870[5 /*3*/] = { 1194.959f, 2368.543f, 59.1379f };
			fLocal_889[5] = 267.241f;
			break;
			break;
	}
	fLocal_889[0] = fLocal_889[0];
}

void func_709()//Position - 0x6694E
{
	int iVar0;
	
	Local_1717 = 0;
	if (GlobalFunc_8315() == 2)
	{
		GlobalFunc_173(&uLocal_705, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (GlobalFunc_8315() == 0)
	{
		GlobalFunc_173(&uLocal_705, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8315() == 1)
	{
		GlobalFunc_173(&uLocal_705, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	GlobalFunc_173(&uLocal_705, 1, 0, "OR_Taunt", 0, 1);
	func_189(&Local_1717);
	switch (Local_46.f_11)
	{
		case 0:
			func_723(&Local_1717);
			break;
		
		case 1:
			func_722(&Local_1717);
			break;
		
		case 3:
			func_721(&Local_1717);
			break;
		
		case 4:
			func_720(&Local_1717);
			break;
		
		case 5:
			func_719(&Local_1717);
			break;
		
		case 2:
			func_711(&Local_1717);
			break;
	}
	if (func_129())
	{
		iVar0 = 0;
		while (iVar0 < Local_1717.f_18)
		{
			if (Local_1717.f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				Local_1717.f_396[iVar0 /*203*/].f_21 = func_710();
			}
			iVar0++;
		}
	}
}

int func_710()//Position - 0x66A71
{
	int iVar0;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) % 2);
	switch (iVar0)
	{
		case 0:
			return joaat("a_m_y_motox_01");
		
		case 1:
		default:
	}
	return joaat("a_m_y_motox_01");
}

void func_711(int iParam0)//Position - 0x66AA5
{
	func_718("MinewardSpiral");
	func_189(iParam0);
	iParam0->f_3785[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3785[1 /*3*/] = { 2992.58f, 2786.28f, 43.21f };
	iParam0->f_3785[2 /*3*/] = { 2995.76f, 2787.72f, 43.26f };
	iParam0->f_3796[0] = 1f;
	iParam0->f_3796[1] = 0f;
	iParam0->f_3799[0] = 2.3f;
	iParam0->f_3799[1] = 2.3f;
	iParam0->f_3802 = 1600f;
	iParam0->f_17 = 32;
	iParam0->f_3601 = 1;
	iParam0->f_3602 = 2;
	iParam0->f_3603 = { 2980.007f, 2887.962f, 58.5826f };
	iParam0->f_3606 = 124.045f;
	iParam0->f_3624 = { 2998.295f, 2764.288f, 41.8084f };
	iParam0->f_3627 = 330.3521f;
	iParam0->f_3803 = { 2993.196f, 2896.852f, 58.8192f };
	iParam0->f_3806 = 328.6752f;
	iParam0->f_3613 = 6f;
	iParam0->f_3614 = 18f;
	func_198(iParam0);
	iParam0->f_3750 = { 2986.79f, 2883.703f, 63.6161f };
	iParam0->f_3753 = { -5.6336f, -0.0026f, 102.4159f };
	iParam0->f_3762 = 35.2836f;
	iParam0->f_3756 = { 2985.169f, 2883.346f, 80.4381f };
	iParam0->f_3759 = { 24.6443f, -0.0026f, 102.4159f };
	iParam0->f_3763 = { 2976.633f, 2885.565f, 104.9947f };
	iParam0->f_3766 = { 42.4712f, -0.0019f, 130.0713f };
	iParam0->f_3769 = { 2982.371f, 2890.285f, 60.3559f };
	iParam0->f_3772 = { -6.1457f, 0.0053f, 130.5831f };
	iParam0->f_3783 = 3.5f;
	iParam0->f_3749 = 9;
	iParam0->f_3628[0 /*8*/] = { 2941.318f, 2840.509f, 57.7108f };
	iParam0->f_3628[0 /*8*/].f_3 = { 2918.521f, 2826.042f, 43.7679f };
	iParam0->f_3628[0 /*8*/].f_6 = 5f;
	iParam0->f_3628[0 /*8*/].f_7 = 0.5f;
	iParam0->f_3628[1 /*8*/] = { 2904.722f, 2773.682f, 58.7576f };
	iParam0->f_3628[1 /*8*/].f_3 = { 2930.713f, 2736.947f, 48.0526f };
	iParam0->f_3628[1 /*8*/].f_6 = 9f;
	iParam0->f_3628[1 /*8*/].f_7 = -1f;
	iParam0->f_3628[2 /*8*/] = { 2965.486f, 2871.721f, 61.1835f };
	iParam0->f_3628[2 /*8*/].f_3 = { 3009.263f, 2797.698f, 50.2022f };
	iParam0->f_3628[2 /*8*/].f_6 = 9f;
	iParam0->f_3628[2 /*8*/].f_7 = -1f;
	iParam0->f_3628[3 /*8*/] = { 2824.695f, 2884.227f, 55.1744f };
	iParam0->f_3628[3 /*8*/].f_3 = { 2857.785f, 2820.281f, 44.5227f };
	iParam0->f_3628[3 /*8*/].f_6 = 9f;
	iParam0->f_3628[3 /*8*/].f_7 = -1f;
	iParam0->f_3628[4 /*8*/] = { 2977.486f, 2939.126f, 82.2107f };
	iParam0->f_3628[4 /*8*/].f_3 = { 2961.479f, 2917.383f, 71.042f };
	iParam0->f_3628[4 /*8*/].f_6 = 9f;
	iParam0->f_3628[4 /*8*/].f_7 = -1f;
	iParam0->f_3628[5 /*8*/] = { 3039.69f, 2953.354f, 74.9672f };
	iParam0->f_3628[5 /*8*/].f_3 = { 3035.455f, 2908.553f, 64.3637f };
	iParam0->f_3628[5 /*8*/].f_6 = 9f;
	iParam0->f_3628[5 /*8*/].f_7 = -1f;
	iParam0->f_3628[6 /*8*/] = { 3015.062f, 2855.131f, 77.5502f };
	iParam0->f_3628[6 /*8*/].f_3 = { 3032.751f, 2818.144f, 67.7152f };
	iParam0->f_3628[6 /*8*/].f_6 = 9f;
	iParam0->f_3628[6 /*8*/].f_7 = -1f;
	iParam0->f_3628[7 /*8*/] = { 2904.722f, 2773.682f, 58.7576f };
	iParam0->f_3628[7 /*8*/].f_3 = { 2930.713f, 2736.947f, 48.0526f };
	iParam0->f_3628[7 /*8*/].f_6 = 9f;
	iParam0->f_3628[7 /*8*/].f_7 = -1f;
	iParam0->f_3628[8 /*8*/] = { 2946.503f, 2867.024f, 61.4466f };
	iParam0->f_3628[8 /*8*/].f_3 = { 2912.593f, 2843.979f, 50.5097f };
	iParam0->f_3628[8 /*8*/].f_6 = 9f;
	iParam0->f_3628[8 /*8*/].f_7 = -1f;
	func_717(&(iParam0->f_32[0 /*11*/]), 2979.924f, 2810.378f, 43.1119f, 32.8606f, 15f, 0, 0);
	func_717(&(iParam0->f_32[1 /*11*/]), 2948.297f, 2840.808f, 46.074f, 97.0967f, 15f, 0, 0);
	func_717(&(iParam0->f_32[2 /*11*/]), 2907.555f, 2819.535f, 52.9237f, 143.0102f, 15f, 0, 0);
	func_717(&(iParam0->f_32[3 /*11*/]), 2896.795f, 2785.093f, 53.6336f, 185.8202f, 15f, 0, 0);
	func_717(&(iParam0->f_32[4 /*11*/]), 2923.76f, 2744.933f, 52.6429f, 213.799f, 15f, 0, 0);
	func_717(&(iParam0->f_32[5 /*11*/]), 2978.967f, 2728.007f, 53.3941f, 318.1995f, 15f, 0, 0);
	func_717(&(iParam0->f_32[6 /*11*/]), 3017.38f, 2777.645f, 52.6012f, 20.8136f, 15f, 0, 0);
	func_717(&(iParam0->f_32[7 /*11*/]), 2972.667f, 2855.168f, 55.8068f, 42.1725f, 15f, 0, 0);
	func_717(&(iParam0->f_32[8 /*11*/]), 2929.99f, 2878.205f, 59.726f, 131.7729f, 15f, 0, 0);
	func_717(&(iParam0->f_32[9 /*11*/]), 2899.202f, 2852.994f, 63.2669f, 91.4971f, 15f, 0, 0);
	func_717(&(iParam0->f_32[10 /*11*/]), 2851.109f, 2865.775f, 55.7528f, 40f, 15f, 0, 0);
	func_717(&(iParam0->f_32[11 /*11*/]), 2817.607f, 2901.402f, 44.9261f, 178.296f, 0.5f, 0, 0);
	func_717(&(iParam0->f_32[12 /*11*/]), 2833.682f, 2871.719f, 47.2565f, 202.8879f, 15f, 0, 0);
	func_717(&(iParam0->f_32[13 /*11*/]), 2851.97f, 2827.021f, 51.576f, 209.3698f, 15f, 0, 0);
	func_717(&(iParam0->f_32[14 /*11*/]), 2877.89f, 2780.037f, 57.3181f, 208.8235f, 15f, 0, 0);
	func_717(&(iParam0->f_32[15 /*11*/]), 2913.54f, 2730.888f, 61.8753f, 205.3804f, 15f, 0, 0);
	func_717(&(iParam0->f_32[16 /*11*/]), 2956.193f, 2682.486f, 63.3001f, 262.9329f, 15f, 0, 0);
	func_717(&(iParam0->f_32[17 /*11*/]), 3010.529f, 2715.857f, 63.2056f, 287.6325f, 15f, 0, 0);
	func_717(&(iParam0->f_32[18 /*11*/]), 3047.156f, 2767.09f, 66.9343f, 8.3449f, 15f, 0, 0);
	func_717(&(iParam0->f_32[19 /*11*/]), 3021.054f, 2807.988f, 65.2655f, 34.6069f, 15f, 0, 0);
	func_717(&(iParam0->f_32[20 /*11*/]), 2991.971f, 2884.735f, 60.2772f, 353.71f, 15f, 0, 0);
	func_717(&(iParam0->f_32[21 /*11*/]), 3011.79f, 2945.661f, 65.9224f, 107.1971f, 2f, 0, 0);
	func_717(&(iParam0->f_32[22 /*11*/]), 2955.934f, 2911.658f, 70.9026f, 338.0471f, 2f, 0, 0);
	func_717(&(iParam0->f_32[23 /*11*/]), 2984.31f, 2945.62f, 78.5753f, 312.7021f, 15f, 0, 0);
	func_717(&(iParam0->f_32[24 /*11*/]), 3034.908f, 2967.004f, 70.6033f, 192.7614f, 15f, 0, 0);
	func_717(&(iParam0->f_32[25 /*11*/]), 3014.159f, 2879.141f, 71.7657f, 179.7664f, 15f, 0, 0);
	func_717(&(iParam0->f_32[26 /*11*/]), 3039.591f, 2812.7f, 70.0086f, 205.8111f, 15f, 0, 0);
	func_717(&(iParam0->f_32[27 /*11*/]), 3023.214f, 2733.869f, 60.6356f, 109.1779f, 15f, 0, 0);
	func_717(&(iParam0->f_32[28 /*11*/]), 2944.222f, 2713.849f, 53.418f, 40.0634f, 15f, 0, 0);
	func_717(&(iParam0->f_32[29 /*11*/]), 2896.593f, 2789.731f, 53.8335f, 350.9532f, 15f, 0, 0);
	func_717(&(iParam0->f_32[30 /*11*/]), 2919.053f, 2848.119f, 54.7335f, 304.1605f, 15f, 0, 0);
	func_717(&(iParam0->f_32[31 /*11*/]), 2963.216f, 2876.133f, 57.6815f, 303.8434f, 15f, 1, 0);
	iParam0->f_18 = 6;
	func_716(&(iParam0->f_396[0 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[0 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_46.f_1);
	GlobalFunc_4626(&(iParam0->f_396[0 /*203*/]), 2996.96f, 2773.84f, 42.41f, 20.89f);
	func_712(&(iParam0->f_396[0 /*203*/]), 0, joaat("player_one"), joaat("sanchez"));
	func_716(&(iParam0->f_396[1 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[1 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[1 /*203*/]), 2992.58f, 2786.28f, 43.21f, 26.81f);
	func_712(&(iParam0->f_396[1 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[2 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[2 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[2 /*203*/]), 2998.043f, 2784.221f, 42.5605f, 33.42f);
	func_712(&(iParam0->f_396[2 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[3 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[3 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[3 /*203*/]), 2994.91f, 2779.79f, 42.73f, 11.43f);
	func_712(&(iParam0->f_396[3 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[4 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[4 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[4 /*203*/]), 2999.44f, 2781.11f, 43.11f, 23.89f);
	func_712(&(iParam0->f_396[4 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[5 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[5 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[5 /*203*/]), 3000.06f, 2775.26f, 42.47f, 17.16f);
	func_712(&(iParam0->f_396[5 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
}

void func_712(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x67667
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}


void func_714(var uParam0, int iParam1, int iParam2)//Position - 0x67699
{
	if (iParam1 != 0)
	{
		uParam0->f_8 = iParam1;
	}
	if (iParam2 != 0)
	{
		uParam0->f_9 = iParam2;
	}
}


void func_716(var uParam0)//Position - 0x676C7
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_717(var uParam0, struct<3> Param1, float fParam4, float fParam5, int iParam6, int iParam7)//Position - 0x676E9
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam5;
	uParam0->f_8 = iParam6;
	uParam0->f_9 = iParam7;
	uParam0->f_4 = fParam4;
}

void func_718(char* sParam0)//Position - 0x67711
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sParam0))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED(sParam0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sParam0, 1);
				TASK::SET_EXCLUSIVE_SCENARIO_GROUP(sParam0);
			}
		}
	}
}

void func_719(int iParam0)//Position - 0x67749
{
	func_718("EcoFriendly");
	func_189(iParam0);
	iParam0->f_3785[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3785[1 /*3*/] = { 2050.881f, 2127.622f, 91.4509f };
	iParam0->f_3785[2 /*3*/] = { 2049.509f, 2123.871f, 91.4899f };
	iParam0->f_3796[0] = 1.2f;
	iParam0->f_3796[1] = 0f;
	iParam0->f_3799[0] = 2f;
	iParam0->f_3799[1] = 2f;
	iParam0->f_3802 = 1900f;
	iParam0->f_17 = 32;
	iParam0->f_3601 = 1;
	iParam0->f_3602 = 2;
	iParam0->f_3603 = { 2504.646f, 1998.727f, 19.1012f };
	iParam0->f_3606 = 206.8969f;
	iParam0->f_3624 = { 2048.633f, 2151.602f, 93.9434f };
	iParam0->f_3627 = 179.181f;
	iParam0->f_3803 = { 2524.673f, 1987.046f, 18.8377f };
	iParam0->f_3806 = 297.3222f;
	iParam0->f_3613 = 6f;
	iParam0->f_3614 = 18f;
	func_198(iParam0);
	iParam0->f_3750 = { 2499.19f, 2001.771f, 20.7579f };
	iParam0->f_3753 = { 7.6037f, 0.4053f, 22.4732f };
	iParam0->f_3762 = 45.5283f;
	iParam0->f_3756 = { 2502.339f, 1995.128f, 72.812f };
	iParam0->f_3759 = { 78.431f, 0.4019f, 22.4845f };
	iParam0->f_3763 = { 2505.437f, 1996.884f, 61.8389f };
	iParam0->f_3766 = { 64.8241f, -0.0019f, -147.0777f };
	iParam0->f_3769 = { 2502.634f, 2001.361f, 20.8696f };
	iParam0->f_3772 = { -6.2077f, 0.0009f, -146.539f };
	iParam0->f_3775 = { 2502.513f, 2006.229f, 21.5446f };
	iParam0->f_3778 = { -6.8036f, 0.0009f, -164.4838f };
	iParam0->f_3749 = 10;
	iParam0->f_3628[0 /*8*/] = { 2167.324f, 1977.03f, 112.7385f };
	iParam0->f_3628[0 /*8*/].f_3 = { 2205.897f, 1865.513f, 89.9993f };
	iParam0->f_3628[0 /*8*/].f_6 = 14f;
	iParam0->f_3628[0 /*8*/].f_7 = 0.65f;
	iParam0->f_3628[1 /*8*/] = { 2181.741f, 1720.485f, 106.2526f };
	iParam0->f_3628[1 /*8*/].f_3 = { 2126.277f, 1667.074f, 85.8048f };
	iParam0->f_3628[1 /*8*/].f_6 = 18f;
	iParam0->f_3628[1 /*8*/].f_7 = 0.65f;
	iParam0->f_3628[2 /*8*/] = { 2166.598f, 1804.395f, 115.9017f };
	iParam0->f_3628[2 /*8*/].f_3 = { 2072.238f, 1713.526f, 89.7735f };
	iParam0->f_3628[2 /*8*/].f_6 = 41f;
	iParam0->f_3628[2 /*8*/].f_7 = 0.65f;
	iParam0->f_3628[3 /*8*/] = { 2290.406f, 1936.941f, 136.6993f };
	iParam0->f_3628[3 /*8*/].f_3 = { 2258.399f, 1876.945f, 111.6761f };
	iParam0->f_3628[3 /*8*/].f_6 = 23f;
	iParam0->f_3628[3 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[4 /*8*/] = { 2260.006f, 2041.987f, 143.5354f };
	iParam0->f_3628[4 /*8*/].f_3 = { 2291.258f, 1981.594f, 119.662f };
	iParam0->f_3628[4 /*8*/].f_6 = 18f;
	iParam0->f_3628[4 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[5 /*8*/] = { 2162.319f, 2284.559f, 124.819f };
	iParam0->f_3628[5 /*8*/].f_3 = { 2173.939f, 2176.18f, 97.8743f };
	iParam0->f_3628[5 /*8*/].f_6 = 18f;
	iParam0->f_3628[5 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[6 /*8*/] = { 2077.626f, 2441.118f, 98.3924f };
	iParam0->f_3628[6 /*8*/].f_3 = { 2014.791f, 2376.684f, 73.026f };
	iParam0->f_3628[6 /*8*/].f_6 = 27f;
	iParam0->f_3628[6 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[7 /*8*/] = { 2225.084f, 2333.921f, 94.4721f };
	iParam0->f_3628[7 /*8*/].f_3 = { 2245.739f, 2208.612f, 67.6869f };
	iParam0->f_3628[7 /*8*/].f_6 = 27f;
	iParam0->f_3628[7 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[8 /*8*/] = { 2318.396f, 2328.963f, 86.1274f };
	iParam0->f_3628[8 /*8*/].f_3 = { 2304.876f, 2239.984f, 61.5653f };
	iParam0->f_3628[8 /*8*/].f_6 = 27f;
	iParam0->f_3628[8 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[9 /*8*/] = { 2415.408f, 2331.722f, 68.228f };
	iParam0->f_3628[9 /*8*/].f_3 = { 2482.094f, 2138.929f, 24.9998f };
	iParam0->f_3628[9 /*8*/].f_6 = 27f;
	iParam0->f_3628[9 /*8*/].f_7 = 0.7f;
	func_717(&(iParam0->f_32[0 /*11*/]), 2141.911f, 2052.62f, 90.6277f, 166.5133f, 15f, 0, 0);
	func_717(&(iParam0->f_32[1 /*11*/]), 2165.824f, 1975.166f, 93.4036f, 203.6161f, 15f, 0, 0);
	func_717(&(iParam0->f_32[2 /*11*/]), 2206.066f, 1867.395f, 102.8335f, 188.2386f, 15f, 0, 0);
	func_717(&(iParam0->f_32[3 /*11*/]), 2215.148f, 1764.056f, 96.0258f, 153.5908f, 15f, 0, 0);
	func_717(&(iParam0->f_32[4 /*11*/]), 2158.267f, 1701.619f, 93.9455f, 132.5378f, 15f, 0, 0);
	func_717(&(iParam0->f_32[5 /*11*/]), 2082.129f, 1653.05f, 95.5486f, 46.0799f, 15f, 0, 0);
	func_717(&(iParam0->f_32[6 /*11*/]), 2069.64f, 1704.767f, 101.9224f, 328.1978f, 15f, 0, 0);
	func_717(&(iParam0->f_32[7 /*11*/]), 2173.388f, 1791.856f, 106.1635f, 315.567f, 15f, 0, 0);
	func_717(&(iParam0->f_32[8 /*11*/]), 2262.277f, 1883.925f, 117.2448f, 337.8492f, 15f, 0, 0);
	func_717(&(iParam0->f_32[9 /*11*/]), 2298.1f, 1973.362f, 130.1531f, 31.9428f, 35f, 0, 0);
	func_717(&(iParam0->f_32[10 /*11*/]), 2240.982f, 2055.917f, 128.8369f, 69.9408f, 15f, 0, 0);
	func_717(&(iParam0->f_32[11 /*11*/]), 2187.064f, 2115.366f, 124.4313f, 69.7971f, 15f, 0, 0);
	func_717(&(iParam0->f_32[12 /*11*/]), 2175.135f, 2178.359f, 115.5291f, 333.4648f, 15f, 0, 0);
	func_717(&(iParam0->f_32[13 /*11*/]), 2155.706f, 2279.126f, 104.2192f, 9.3879f, 15f, 0, 0);
	func_717(&(iParam0->f_32[14 /*11*/]), 2155.471f, 2360.121f, 107.0664f, 342.6922f, 15f, 0, 0);
	func_717(&(iParam0->f_32[15 /*11*/]), 2125.402f, 2410.47f, 99.9028f, 85.3731f, 15f, 0, 0);
	func_717(&(iParam0->f_32[16 /*11*/]), 2025.532f, 2342.738f, 92.424f, 115.5183f, 1f, 0, 0);
	func_717(&(iParam0->f_32[17 /*11*/]), 2011.317f, 2364.262f, 87.7059f, 304.8824f, 0.3f, 0, 0);
	func_717(&(iParam0->f_32[18 /*11*/]), 2066.338f, 2431.389f, 84.2313f, 308.0472f, 15f, 0, 0);
	func_717(&(iParam0->f_32[19 /*11*/]), 2120.639f, 2450.425f, 87.4022f, 258.9786f, 15f, 0, 0);
	func_717(&(iParam0->f_32[20 /*11*/]), 2199.044f, 2440.765f, 86.1534f, 215.4235f, 15f, 0, 0);
	func_717(&(iParam0->f_32[21 /*11*/]), 2231.509f, 2356.282f, 75.5773f, 180.3866f, 15f, 0, 0);
	func_717(&(iParam0->f_32[22 /*11*/]), 2247.375f, 2238.617f, 79.7798f, 202.7603f, 15f, 0, 0);
	func_717(&(iParam0->f_32[23 /*11*/]), 2280.42f, 2173.15f, 76.9772f, 313.6382f, 15f, 0, 0);
	func_717(&(iParam0->f_32[24 /*11*/]), 2298.124f, 2223.864f, 76.3006f, 352.7675f, 15f, 0, 0);
	func_717(&(iParam0->f_32[25 /*11*/]), 2331.988f, 2336.148f, 71.2906f, 357.619f, 15f, 0, 0);
	func_717(&(iParam0->f_32[26 /*11*/]), 2302.194f, 2429.105f, 65.3744f, 326.6184f, 15f, 0, 0);
	func_717(&(iParam0->f_32[27 /*11*/]), 2358.045f, 2420.025f, 61.147f, 236.7312f, 15f, 0, 0);
	func_717(&(iParam0->f_32[28 /*11*/]), 2411.499f, 2360.247f, 59.7345f, 191.8318f, 15f, 0, 0);
	func_717(&(iParam0->f_32[29 /*11*/]), 2445.203f, 2244.778f, 46.9808f, 192.0339f, 15f, 0, 0);
	func_717(&(iParam0->f_32[30 /*11*/]), 2479.631f, 2116.394f, 32.8883f, 184.7639f, 15f, 0, 0);
	func_717(&(iParam0->f_32[31 /*11*/]), 2483.207f, 2026.745f, 23.1603f, 198.5985f, 15f, 1, 0);
	iParam0->f_18 = 6;
	func_716(&(iParam0->f_396[0 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[0 /*203*/]), "Player");
	func_714(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_46.f_1);
	GlobalFunc_4626(&(iParam0->f_396[0 /*203*/]), 2037.6f, 2136.15f, 93.15f, 238.07f);
	func_712(&(iParam0->f_396[0 /*203*/]), 0, joaat("player_one"), joaat("mesa"));
	func_716(&(iParam0->f_396[1 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[1 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[1 /*203*/]), 2046.772f, 2130.442f, 91.9486f, 233.1493f);
	func_712(&(iParam0->f_396[1 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("bjxl"));
	func_716(&(iParam0->f_396[2 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[2 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[2 /*203*/]), 2045.344f, 2126.352f, 91.9358f, 236.3633f);
	func_712(&(iParam0->f_396[2 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("mesa"));
	func_716(&(iParam0->f_396[3 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[3 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[3 /*203*/]), 2034.821f, 2138.885f, 92.6919f, 237.2035f);
	func_712(&(iParam0->f_396[3 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("bjxl"));
	func_716(&(iParam0->f_396[4 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[4 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[4 /*203*/]), 2041.237f, 2134.698f, 92.4401f, 232.9754f);
	func_712(&(iParam0->f_396[4 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("bfinjection"));
	func_716(&(iParam0->f_396[5 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[5 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[5 /*203*/]), 2039.413f, 2130.228f, 92.5788f, 241.4449f);
	func_712(&(iParam0->f_396[5 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sadler"));
}

void func_720(int iParam0)//Position - 0x683AC
{
	func_718("LakesideSplash");
	func_189(iParam0);
	iParam0->f_3785[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3785[1 /*3*/] = { 1609.405f, 3843.63f, 33.3039f };
	iParam0->f_3785[2 /*3*/] = { 1610.47f, 3842.26f, 33.61f };
	iParam0->f_3796[0] = 0.6f;
	iParam0->f_3796[1] = 0f;
	iParam0->f_3799[0] = 2.1f;
	iParam0->f_3799[1] = 2.1f;
	iParam0->f_3802 = 3000f;
	iParam0->f_17 = 23;
	iParam0->f_3601 = 1;
	iParam0->f_3602 = 3;
	iParam0->f_3603 = { 1771.862f, 4580.581f, 36.6618f };
	iParam0->f_3606 = 245.629f;
	iParam0->f_3624 = { 1604.701f, 3815.548f, 33.8019f };
	iParam0->f_3627 = 307.8146f;
	iParam0->f_3803 = { 1770.293f, 4563.532f, 36.8169f };
	iParam0->f_3806 = 260.4078f;
	iParam0->f_3613 = 6f;
	iParam0->f_3614 = 18f;
	func_198(iParam0);
	iParam0->f_3750 = { 1774.471f, 4582.74f, 38.2051f };
	iParam0->f_3753 = { -0.6042f, 0.0069f, -136.8127f };
	iParam0->f_3762 = 45.0174f;
	iParam0->f_3756 = { 1774.603f, 4582.596f, 56.7003f };
	iParam0->f_3759 = { 55.0201f, 0.0069f, -136.8127f };
	iParam0->f_3763 = { 1773.034f, 4579.839f, 67.4021f };
	iParam0->f_3766 = { 48.0699f, 0.0015f, -108.3325f };
	iParam0->f_3769 = { 1768.644f, 4581.377f, 38.4301f };
	iParam0->f_3772 = { -6.1888f, 0.0001f, -107.803f };
	iParam0->f_3749 = 10;
	iParam0->f_3628[0 /*8*/] = { 1889.741f, 3981.563f, 38.8384f };
	iParam0->f_3628[0 /*8*/].f_3 = { 1808.741f, 3981.563f, 27.8598f };
	iParam0->f_3628[0 /*8*/].f_6 = 9f;
	iParam0->f_3628[0 /*8*/].f_7 = -1f;
	iParam0->f_3628[1 /*8*/] = { 1925.476f, 3976.481f, 38.0079f };
	iParam0->f_3628[1 /*8*/].f_3 = { 1966.193f, 3957.321f, 27.4639f };
	iParam0->f_3628[1 /*8*/].f_6 = 9f;
	iParam0->f_3628[1 /*8*/].f_7 = -1f;
	iParam0->f_3628[2 /*8*/] = { 2169.178f, 3888.335f, 37.9252f };
	iParam0->f_3628[2 /*8*/].f_3 = { 2214.175f, 3887.77f, 27.4639f };
	iParam0->f_3628[2 /*8*/].f_6 = 9f;
	iParam0->f_3628[2 /*8*/].f_7 = -1f;
	iParam0->f_3628[3 /*8*/] = { 2320.415f, 3976.647f, 39.8941f };
	iParam0->f_3628[3 /*8*/].f_3 = { 2251.986f, 3910.75f, 28.9624f };
	iParam0->f_3628[3 /*8*/].f_6 = 9f;
	iParam0->f_3628[3 /*8*/].f_7 = -1f;
	iParam0->f_3628[4 /*8*/] = { 2371.606f, 4042.119f, 37.145f };
	iParam0->f_3628[4 /*8*/].f_3 = { 2343.242f, 4000.942f, 26.506f };
	iParam0->f_3628[4 /*8*/].f_6 = 9f;
	iParam0->f_3628[4 /*8*/].f_7 = -1f;
	iParam0->f_3628[5 /*8*/] = { 2388.561f, 4183.628f, 37.145f };
	iParam0->f_3628[5 /*8*/].f_3 = { 2378.303f, 4075.112f, 26.506f };
	iParam0->f_3628[5 /*8*/].f_6 = 14f;
	iParam0->f_3628[5 /*8*/].f_7 = -1f;
	iParam0->f_3628[6 /*8*/] = { 2455.368f, 4445.856f, 46.1903f };
	iParam0->f_3628[6 /*8*/].f_3 = { 2436.29f, 4338.539f, 32.4383f };
	iParam0->f_3628[6 /*8*/].f_6 = 14f;
	iParam0->f_3628[6 /*8*/].f_7 = -1f;
	iParam0->f_3628[7 /*8*/] = { 2294.331f, 4666.395f, 41.8361f };
	iParam0->f_3628[7 /*8*/].f_3 = { 2348.202f, 4662.665f, 28.3757f };
	iParam0->f_3628[7 /*8*/].f_6 = 9f;
	iParam0->f_3628[7 /*8*/].f_7 = -1f;
	iParam0->f_3628[8 /*8*/] = { 2110.394f, 4634.22f, 41.0296f };
	iParam0->f_3628[8 /*8*/].f_3 = { 2146.925f, 4652.833f, 27.2709f };
	iParam0->f_3628[8 /*8*/].f_6 = 9f;
	iParam0->f_3628[8 /*8*/].f_7 = -1f;
	iParam0->f_3628[9 /*8*/] = { 1749.124f, 4556.489f, 44.5424f };
	iParam0->f_3628[9 /*8*/].f_3 = { 1805.002f, 4575.425f, 30.402f };
	iParam0->f_3628[9 /*8*/].f_6 = 9f;
	iParam0->f_3628[9 /*8*/].f_7 = -1f;
	func_717(&(iParam0->f_32[0 /*11*/]), 1672.009f, 3892.235f, 33.2404f, 310.0604f, 15f, 0, 0);
	func_717(&(iParam0->f_32[1 /*11*/]), 1723.909f, 3939.301f, 32.7933f, 300.7313f, 15f, 0, 0);
	func_717(&(iParam0->f_32[2 /*11*/]), 1888.561f, 3980.466f, 30.9868f, 259.397f, 15f, 0, 0);
	func_717(&(iParam0->f_32[3 /*11*/]), 1959.523f, 3958.426f, 31.5639f, 233.6847f, 15f, 0, 0);
	func_717(&(iParam0->f_32[4 /*11*/]), 2017.407f, 3916.748f, 32.9635f, 236.8508f, 15f, 0, 0);
	func_717(&(iParam0->f_32[5 /*11*/]), 2085.501f, 3878.556f, 30.7581f, 272.6228f, 15f, 0, 0);
	func_717(&(iParam0->f_32[6 /*11*/]), 2256.276f, 3883.457f, 32.4238f, 336.0722f, 15f, 0, 0);
	func_717(&(iParam0->f_32[7 /*11*/]), 2286.803f, 3939.468f, 32.7243f, 308.4637f, 15f, 0, 0);
	func_717(&(iParam0->f_32[8 /*11*/]), 2366.81f, 4022.581f, 32.2681f, 334.459f, 15f, 0, 0);
	func_717(&(iParam0->f_32[9 /*11*/]), 2383.149f, 4147.77f, 32.851f, 331.0306f, 15f, 0, 0);
	func_717(&(iParam0->f_32[10 /*11*/]), 2424.846f, 4228.963f, 34.1509f, 354.7785f, 15f, 0, 0);
	func_717(&(iParam0->f_32[11 /*11*/]), 2427.842f, 4294.594f, 35.2968f, 348.9683f, 15f, 0, 0);
	func_717(&(iParam0->f_32[12 /*11*/]), 2443.338f, 4377.289f, 34.1383f, 351.4983f, 15f, 0, 0);
	func_717(&(iParam0->f_32[13 /*11*/]), 2458.302f, 4494.7f, 34.3521f, 7.2237f, 15f, 0, 0);
	func_717(&(iParam0->f_32[14 /*11*/]), 2443.695f, 4599.095f, 35.9352f, 42.8614f, 15f, 0, 0);
	func_717(&(iParam0->f_32[15 /*11*/]), 2331.24f, 4664.898f, 34.417f, 86.8863f, 15f, 0, 0);
	func_717(&(iParam0->f_32[16 /*11*/]), 2241.168f, 4668.543f, 31.8399f, 93.985f, 15f, 0, 0);
	func_717(&(iParam0->f_32[17 /*11*/]), 2118.464f, 4635.702f, 31.6723f, 125.8619f, 15f, 0, 0);
	func_717(&(iParam0->f_32[18 /*11*/]), 2031.166f, 4570.601f, 32.6676f, 99.1116f, 15f, 0, 0);
	func_717(&(iParam0->f_32[19 /*11*/]), 1948.654f, 4556.264f, 33.2397f, 68.1335f, 15f, 0, 0);
	func_717(&(iParam0->f_32[20 /*11*/]), 1908.049f, 4575.863f, 36.2975f, 79.7179f, 15f, 0, 0);
	func_717(&(iParam0->f_32[21 /*11*/]), 1863.613f, 4581.504f, 35.2547f, 98.7328f, 15f, 0, 0);
	func_717(&(iParam0->f_32[22 /*11*/]), 1791.347f, 4571.717f, 36.0361f, 104.3401f, 15f, 1, 0);
	iParam0->f_18 = 5;
	func_716(&(iParam0->f_396[0 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[0 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_46.f_1);
	GlobalFunc_4626(&(iParam0->f_396[0 /*203*/]), 1602.54f, 3837.21f, 33.72f, 308.94f);
	func_712(&(iParam0->f_396[0 /*203*/]), 0, joaat("player_one"), joaat("sanchez"));
	func_716(&(iParam0->f_396[1 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[1 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[1 /*203*/]), 1607.056f, 3841.721f, 33.3075f, 307.24f);
	func_712(&(iParam0->f_396[1 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[2 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[2 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[2 /*203*/]), 1608.262f, 3840.28f, 33.0403f, 311.44f);
	func_712(&(iParam0->f_396[2 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[3 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[3 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[3 /*203*/]), 1606.2f, 3838.41f, 33.62f, 307.44f);
	func_712(&(iParam0->f_396[3 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[4 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[4 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[4 /*203*/]), 1604.49f, 3840.42f, 34.18f, 308.19f);
	func_712(&(iParam0->f_396[4 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
}

void func_721(int iParam0)//Position - 0x68E02
{
	func_718("ValleyTrail");
	func_189(iParam0);
	iParam0->f_3785[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3785[1 /*3*/] = { -234.0323f, 4226.007f, 43.7916f };
	iParam0->f_3785[2 /*3*/] = { -234.0242f, 4228.985f, 43.835f };
	iParam0->f_3796[0] = 0.8f;
	iParam0->f_3796[1] = 0f;
	iParam0->f_3799[0] = 1.8f;
	iParam0->f_3799[1] = 1.8f;
	iParam0->f_3802 = 1300f;
	iParam0->f_17 = 22;
	iParam0->f_3601 = 1;
	iParam0->f_3602 = 4;
	iParam0->f_3603 = { -1921.741f, 4462.23f, 33.4587f };
	iParam0->f_3606 = 10.1185f;
	iParam0->f_3624 = { -212.5433f, 4226.658f, 43.992f };
	iParam0->f_3627 = 71.6442f;
	iParam0->f_3803 = { -1927.542f, 4480.66f, 29.855f };
	iParam0->f_3806 = 129.8399f;
	iParam0->f_3613 = 6f;
	iParam0->f_3614 = 18f;
	iParam0->f_3750 = { -1939.831f, 4468.409f, 33.3119f };
	iParam0->f_3753 = { -3.5928f, 0.0935f, -69.9291f };
	iParam0->f_3762 = 40.5327f;
	iParam0->f_3756 = { -1937.869f, 4469.087f, 65.6972f };
	iParam0->f_3759 = { 71.4933f, 0.0589f, -69.9981f };
	iParam0->f_3763 = { -1922.042f, 4464.49f, 69.2131f };
	iParam0->f_3766 = { 41.2757f, -0.0019f, 16.1333f };
	iParam0->f_3769 = { -1920.576f, 4459.126f, 35.237f };
	iParam0->f_3772 = { -6.1614f, -0.0002f, 16.6887f };
	iParam0->f_3749 = 3;
	iParam0->f_3628[0 /*8*/] = { -733.334f, 4399.325f, 65.4842f };
	iParam0->f_3628[0 /*8*/].f_3 = { -552.611f, 4355.336f, 11.7453f };
	iParam0->f_3628[0 /*8*/].f_6 = 27f;
	iParam0->f_3628[0 /*8*/].f_7 = 0.7f;
	iParam0->f_3628[1 /*8*/] = { -905.852f, 4375.275f, 24.3108f };
	iParam0->f_3628[1 /*8*/].f_3 = { -951.357f, 4354.556f, 10.5136f };
	iParam0->f_3628[1 /*8*/].f_6 = 9f;
	iParam0->f_3628[1 /*8*/].f_7 = -1f;
	iParam0->f_3628[1 /*8*/] = { -1426.591f, 4302.318f, 14.3013f };
	iParam0->f_3628[1 /*8*/].f_3 = { -1476.591f, 4302.318f, 0.3053f };
	iParam0->f_3628[1 /*8*/].f_6 = 14f;
	iParam0->f_3628[1 /*8*/].f_7 = -1f;
	func_198(iParam0);
	func_717(&(iParam0->f_32[0 /*11*/]), -269.5131f, 4227.974f, 43.1428f, 97.9608f, 15f, 0, 0);
	func_717(&(iParam0->f_32[1 /*11*/]), -330.7353f, 4242.254f, 42.3877f, 38.1068f, 15f, 0, 0);
	func_717(&(iParam0->f_32[2 /*11*/]), -417.2221f, 4290.236f, 56.6259f, 51.9004f, 15f, 0, 0);
	func_717(&(iParam0->f_32[3 /*11*/]), -506.6945f, 4359.448f, 66.3928f, 90.5887f, 15f, 0, 0);
	func_717(&(iParam0->f_32[4 /*11*/]), -566.9642f, 4357.096f, 58.142f, 70.7537f, 15f, 0, 0);
	func_717(&(iParam0->f_32[5 /*11*/]), -733.3773f, 4412.348f, 20.315f, 79.5961f, 15f, 0, 0);
	func_717(&(iParam0->f_32[6 /*11*/]), -825.9259f, 4411.589f, 19.3628f, 97.3463f, 15f, 0, 0);
	func_717(&(iParam0->f_32[7 /*11*/]), -898.7642f, 4377.721f, 16.3963f, 112.7456f, 15f, 0, 0);
	func_717(&(iParam0->f_32[8 /*11*/]), -974.6707f, 4349.182f, 11.7338f, 96.1166f, 15f, 0, 0);
	func_717(&(iParam0->f_32[9 /*11*/]), -1107.451f, 4379.542f, 11.8522f, 86.8279f, 15f, 0, 0);
	func_717(&(iParam0->f_32[10 /*11*/]), -1222.215f, 4364.588f, 7.0459f, 100.2219f, 15f, 0, 0);
	func_717(&(iParam0->f_32[11 /*11*/]), -1303.514f, 4340.472f, 5.7083f, 115.8464f, 15f, 0, 0);
	func_717(&(iParam0->f_32[12 /*11*/]), -1365.68f, 4298.609f, 1.4209f, 92.9491f, 15f, 0, 0);
	func_717(&(iParam0->f_32[13 /*11*/]), -1453.211f, 4302.764f, 1.4281f, 87.7785f, 15f, 0, 0);
	func_717(&(iParam0->f_32[14 /*11*/]), -1509.895f, 4308.517f, 4.683f, 74.4776f, 15f, 0, 0);
	func_717(&(iParam0->f_32[15 /*11*/]), -1593.907f, 4349.814f, 1.8808f, 44.8026f, 15f, 0, 0);
	func_717(&(iParam0->f_32[16 /*11*/]), -1657.484f, 4445.556f, 1.6662f, 61.0429f, 15f, 0, 0);
	func_717(&(iParam0->f_32[17 /*11*/]), -1756.256f, 4463.122f, 4.7861f, 60.7632f, 15f, 0, 0);
	func_717(&(iParam0->f_32[18 /*11*/]), -1813.362f, 4479.864f, 16.5623f, 75.1575f, 15f, 0, 0);
	func_717(&(iParam0->f_32[19 /*11*/]), -1846.518f, 4500.319f, 21.174f, 87.4783f, 1.5f, 0, 0);
	func_717(&(iParam0->f_32[20 /*11*/]), -1879.901f, 4482.657f, 25.0771f, 103.1315f, 2f, 0, 0);
	func_717(&(iParam0->f_32[21 /*11*/]), -1925.723f, 4468.952f, 31.425f, 153.8084f, 15f, 1, 0);
	iParam0->f_18 = 6;
	func_716(&(iParam0->f_396[0 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[0 /*203*/]), "Player");
	func_714(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_46.f_1);
	GlobalFunc_4626(&(iParam0->f_396[0 /*203*/]), -225.98f, 4224.74f, 44.36f, 44.36f);
	func_712(&(iParam0->f_396[0 /*203*/]), 0, joaat("player_one"), joaat("sanchez"));
	func_716(&(iParam0->f_396[1 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[1 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[1 /*203*/]), -231.8486f, 4225.461f, 43.8031f, 76.66f);
	func_712(&(iParam0->f_396[1 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[2 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[2 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[2 /*203*/]), -231.1335f, 4228.47f, 43.8715f, 80.88f);
	func_712(&(iParam0->f_396[2 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[3 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[3 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[3 /*203*/]), -228.85f, 4227.71f, 44.57f, 83.38f);
	func_712(&(iParam0->f_396[3 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[4 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[4 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[4 /*203*/]), -229.58f, 4225.21f, 44.34f, 75.78f);
	func_712(&(iParam0->f_396[4 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[5 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[5 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[5 /*203*/]), -225.41f, 4227.53f, 44.45f, 82.7f);
	func_712(&(iParam0->f_396[5 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
}

void func_722(int iParam0)//Position - 0x69668
{
	func_718("RidgeRun");
	func_189(iParam0);
	iParam0->f_3785[0 /*3*/] = { -516.1545f, 1999.374f, 204.7715f };
	iParam0->f_3785[1 /*3*/] = { -521.424f, 2014.816f, 203.0018f };
	iParam0->f_3785[2 /*3*/] = { -518.0005f, 2017.299f, 202.7044f };
	iParam0->f_3796[0] = 2.3f;
	iParam0->f_3796[1] = 0.5f;
	iParam0->f_3799[0] = 5f;
	iParam0->f_3799[1] = 5f;
	iParam0->f_3802 = 1500f;
	iParam0->f_3601 = 1;
	iParam0->f_3602 = 3;
	iParam0->f_17 = 16;
	iParam0->f_3603 = { -1104.229f, 2638.188f, 23.709f };
	iParam0->f_3606 = 110.3232f;
	iParam0->f_3624 = { -521.4766f, 1995.491f, 204.7503f };
	iParam0->f_3627 = 343.8705f;
	iParam0->f_3803 = { -1129.484f, 2614.237f, 18.2058f };
	iParam0->f_3806 = 115.8882f;
	iParam0->f_3613 = 3f;
	iParam0->f_3614 = 8f;
	func_198(iParam0);
	iParam0->f_3750 = { -1079.718f, 2619.582f, 31.9209f };
	iParam0->f_3753 = { 4.6559f, 0f, -46.3333f };
	iParam0->f_3762 = 42.2756f;
	iParam0->f_3756 = { -1080.921f, 2618.438f, 51.9764f };
	iParam0->f_3759 = { 75.9941f, -0.0119f, -46.2779f };
	iParam0->f_3763 = { -1103.859f, 2638.744f, 42.4107f };
	iParam0->f_3766 = { 50.5641f, 0.0013f, 116.3548f };
	iParam0->f_3769 = { -1101.382f, 2639.885f, 25.4833f };
	iParam0->f_3772 = { -6.2272f, 0.0009f, 116.8833f };
	iParam0->f_3775 = { -1098.319f, 2638.165f, 26.81f };
	iParam0->f_3778 = { -17.6339f, 0.0009f, 98.6135f };
	iParam0->f_3749 = 7;
	iParam0->f_3628[0 /*8*/] = { -597.733f, 2068.197f, 157.8279f };
	iParam0->f_3628[0 /*8*/].f_3 = { -621.634f, 2055.637f, 146.9955f };
	iParam0->f_3628[0 /*8*/].f_6 = 9f;
	iParam0->f_3628[0 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[1 /*8*/] = { -567.453f, 2147.054f, 148.2583f };
	iParam0->f_3628[1 /*8*/].f_3 = { -560.084f, 2121.08f, 134.4063f };
	iParam0->f_3628[1 /*8*/].f_6 = 9f;
	iParam0->f_3628[1 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[2 /*8*/] = { -734.955f, 2294.898f, 86.3563f };
	iParam0->f_3628[2 /*8*/].f_3 = { -689.331f, 2221.998f, 72.3165f };
	iParam0->f_3628[2 /*8*/].f_6 = 9f;
	iParam0->f_3628[2 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[3 /*8*/] = { -723.968f, 2348.136f, 76.6954f };
	iParam0->f_3628[3 /*8*/].f_3 = { -743.881f, 2329.903f, 62.8225f };
	iParam0->f_3628[3 /*8*/].f_6 = 9f;
	iParam0->f_3628[3 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[4 /*8*/] = { -711.953f, 2462.458f, 70.5703f };
	iParam0->f_3628[4 /*8*/].f_3 = { -715.006f, 2381.515f, 54.2646f };
	iParam0->f_3628[4 /*8*/].f_6 = 18f;
	iParam0->f_3628[4 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[5 /*8*/] = { -814.71f, 2659.98f, 63.285f };
	iParam0->f_3628[5 /*8*/].f_3 = { -852.704f, 2635.868f, 46.9925f };
	iParam0->f_3628[5 /*8*/].f_6 = 9f;
	iParam0->f_3628[5 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[6 /*8*/] = { -997f, 2692.443f, 46.3381f };
	iParam0->f_3628[6 /*8*/].f_3 = { -1029.413f, 2661.229f, 30.1374f };
	iParam0->f_3628[6 /*8*/].f_6 = 9f;
	iParam0->f_3628[6 /*8*/].f_7 = 0.8f;
	func_717(&(iParam0->f_32[0 /*11*/]), -573.6789f, 2037.167f, 187.8733f, 127.7385f, 15f, 0, 0);
	func_717(&(iParam0->f_32[1 /*11*/]), -595.3907f, 1963.89f, 171.9366f, 133.1126f, 15f, 0, 0);
	func_717(&(iParam0->f_32[2 /*11*/]), -633.6208f, 2025.7f, 158.291f, 7.3997f, 15f, 0, 0);
	func_717(&(iParam0->f_32[3 /*11*/]), -572.8118f, 2078.272f, 149.454f, 294.3077f, 15f, 0, 0);
	func_717(&(iParam0->f_32[4 /*11*/]), -570.9627f, 2162.036f, 134.7248f, 44.7838f, 15f, 0, 0);
	func_717(&(iParam0->f_32[5 /*11*/]), -598.9607f, 2125.704f, 127.2645f, 158.9312f, 15f, 0, 0);
	func_717(&(iParam0->f_32[6 /*11*/]), -676.9645f, 2168.953f, 104.7812f, 26.8194f, 15f, 0, 0);
	func_717(&(iParam0->f_32[7 /*11*/]), -720.4925f, 2272.29f, 75.6379f, 35.1564f, 15f, 0, 0);
	func_717(&(iParam0->f_32[8 /*11*/]), -707.4363f, 2461.557f, 61.3191f, 345.384f, 15f, 0, 0);
	func_717(&(iParam0->f_32[9 /*11*/]), -691.5254f, 2530.907f, 54.5241f, 47.9461f, 15f, 0, 0);
	func_717(&(iParam0->f_32[10 /*11*/]), -729.2248f, 2646.34f, 57.4402f, 12.3391f, 15f, 0, 0);
	func_717(&(iParam0->f_32[11 /*11*/]), -785.4009f, 2668.766f, 52.7145f, 105.7909f, 15f, 0, 0);
	func_717(&(iParam0->f_32[12 /*11*/]), -863.5698f, 2623.985f, 56.1686f, 138.3881f, 15f, 0, 0);
	func_717(&(iParam0->f_32[13 /*11*/]), -915.1938f, 2593.02f, 55.3226f, 32.3294f, 15f, 0, 0);
	func_717(&(iParam0->f_32[14 /*11*/]), -944.2743f, 2699.078f, 37.1145f, 66.8516f, 15f, 0, 0);
	func_717(&(iParam0->f_32[15 /*11*/]), -1040.934f, 2649.88f, 35.799f, 134.2195f, 15f, 1, 0);
	iParam0->f_18 = 5;
	func_716(&(iParam0->f_396[0 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[0 /*203*/]), "Player");
	func_714(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_46.f_1);
	GlobalFunc_4626(&(iParam0->f_396[0 /*203*/]), -516.1545f, 1999.374f, 204.7715f, 18.7907f);
	func_712(&(iParam0->f_396[0 /*203*/]), 0, joaat("player_one"), joaat("mesa"));
	func_716(&(iParam0->f_396[1 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[1 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[1 /*203*/]), -520.2454f, 2010.967f, 203.585f, 16.9522f);
	func_712(&(iParam0->f_396[1 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("dubsta2"));
	func_716(&(iParam0->f_396[2 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[2 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[2 /*203*/]), -516.7449f, 2013.236f, 203.7095f, 18.1295f);
	func_712(&(iParam0->f_396[2 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("mesa"));
	func_716(&(iParam0->f_396[3 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[3 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[3 /*203*/]), -518.3414f, 2005.449f, 204.1878f, 20.7231f);
	func_712(&(iParam0->f_396[3 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("patriot"));
	func_716(&(iParam0->f_396[4 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[4 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[4 /*203*/]), -514.8247f, 2008.574f, 204.3629f, 20.2278f);
	func_712(&(iParam0->f_396[4 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("bjxl"));
}

void func_723(int iParam0)//Position - 0x69F07
{
	func_718("CanyonCliffs");
	func_189(iParam0);
	iParam0->f_3785[0 /*3*/] = { -1938.34f, 4443.2f, 37.06f };
	iParam0->f_3785[1 /*3*/] = { -1930.38f, 4441.9f, 38.12f };
	iParam0->f_3785[2 /*3*/] = { -1931.254f, 4440.272f, 37.5294f };
	iParam0->f_3796[0] = 0f;
	iParam0->f_3796[1] = 1.3f;
	iParam0->f_3799[0] = 2.3f;
	iParam0->f_3799[1] = 2.3f;
	iParam0->f_3802 = 5000f;
	iParam0->f_17 = 24;
	iParam0->f_3601 = 1;
	iParam0->f_3602 = 4;
	iParam0->f_3603 = { -234.507f, 3902.683f, 36.8104f };
	iParam0->f_3606 = 206.9569f;
	iParam0->f_3624 = { -1952.168f, 4443.886f, 35.3932f };
	iParam0->f_3627 = 227.1812f;
	iParam0->f_3803 = { -224.4458f, 3894.961f, 36.4271f };
	iParam0->f_3806 = 178.6138f;
	iParam0->f_3613 = 6f;
	iParam0->f_3614 = 18f;
	func_198(iParam0);
	iParam0->f_3750 = { -236.2838f, 3891.383f, 37.9726f };
	iParam0->f_3753 = { 4.477f, -0.1545f, 25.6305f };
	iParam0->f_3762 = 35f;
	iParam0->f_3756 = { -235.3277f, 3889.145f, 69.6057f };
	iParam0->f_3759 = { 58.3046f, -0.1946f, 25.6488f };
	iParam0->f_3763 = { -236.3619f, 3905.715f, 51.1564f };
	iParam0->f_3766 = { 56.5776f, 0f, -155.0073f };
	iParam0->f_3769 = { -236.52f, 3905.316f, 38.5798f };
	iParam0->f_3772 = { -6.1578f, -0.0004f, -146.4747f };
	iParam0->f_3749 = 12;
	iParam0->f_3628[0 /*8*/] = { -1841.117f, 4404.597f, 63.867f };
	iParam0->f_3628[0 /*8*/].f_3 = { -1765.496f, 4363.641f, 40.2426f };
	iParam0->f_3628[0 /*8*/].f_6 = 9f;
	iParam0->f_3628[0 /*8*/].f_7 = 0.9f;
	iParam0->f_3628[1 /*8*/] = { -1546.062f, 4207.391f, 79.6808f };
	iParam0->f_3628[1 /*8*/].f_3 = { -1512.674f, 4220.854f, 55.5324f };
	iParam0->f_3628[1 /*8*/].f_6 = 9f;
	iParam0->f_3628[1 /*8*/].f_7 = 0.9f;
	iParam0->f_3628[2 /*8*/] = { -1416.089f, 4194.708f, 56.9551f };
	iParam0->f_3628[2 /*8*/].f_3 = { -1390.473f, 4169.413f, 40.4339f };
	iParam0->f_3628[2 /*8*/].f_6 = 9f;
	iParam0->f_3628[2 /*8*/].f_7 = -1f;
	iParam0->f_3628[3 /*8*/] = { -1322.066f, 4184.635f, 70.6514f };
	iParam0->f_3628[3 /*8*/].f_3 = { -1334.891f, 4141.501f, 54.5091f };
	iParam0->f_3628[3 /*8*/].f_6 = 9f;
	iParam0->f_3628[3 /*8*/].f_7 = -1f;
	iParam0->f_3628[4 /*8*/] = { -1178.216f, 4292.785f, 86.6735f };
	iParam0->f_3628[4 /*8*/].f_3 = { -1237.216f, 4292.785f, 67.532f };
	iParam0->f_3628[4 /*8*/].f_6 = 14f;
	iParam0->f_3628[4 /*8*/].f_7 = -1f;
	iParam0->f_3628[5 /*8*/] = { -1038.013f, 4234.87f, 128.0485f };
	iParam0->f_3628[5 /*8*/].f_3 = { -1036.901f, 4175.88f, 108.7185f };
	iParam0->f_3628[5 /*8*/].f_6 = 14f;
	iParam0->f_3628[5 /*8*/].f_7 = -1f;
	iParam0->f_3628[6 /*8*/] = { -941.876f, 4152.233f, 139.012f };
	iParam0->f_3628[6 /*8*/].f_3 = { -1000.261f, 4143.736f, 122.8091f };
	iParam0->f_3628[6 /*8*/].f_6 = 14f;
	iParam0->f_3628[6 /*8*/].f_7 = -1f;
	iParam0->f_3628[7 /*8*/] = { -936.788f, 4141.902f, 174.5561f };
	iParam0->f_3628[7 /*8*/].f_3 = { -897.218f, 4098.139f, 133.7419f };
	iParam0->f_3628[7 /*8*/].f_6 = 14f;
	iParam0->f_3628[7 /*8*/].f_7 = 0.6f;
	iParam0->f_3628[8 /*8*/] = { -871.811f, 4093.706f, 175.2417f };
	iParam0->f_3628[8 /*8*/].f_3 = { -827.555f, 4054.688f, 153.6356f };
	iParam0->f_3628[8 /*8*/].f_6 = 9f;
	iParam0->f_3628[8 /*8*/].f_7 = 0.8f;
	iParam0->f_3628[9 /*8*/] = { -709.295f, 4014.701f, 141.2825f };
	iParam0->f_3628[9 /*8*/].f_3 = { -659.343f, 4012.503f, 119.5238f };
	iParam0->f_3628[9 /*8*/].f_6 = 9f;
	iParam0->f_3628[9 /*8*/].f_7 = -1f;
	iParam0->f_3628[10 /*8*/] = { -488.41f, 3967.25f, 98.073f };
	iParam0->f_3628[10 /*8*/].f_3 = { -537.137f, 3956.036f, 76.3871f };
	iParam0->f_3628[10 /*8*/].f_6 = 9f;
	iParam0->f_3628[10 /*8*/].f_7 = -1f;
	iParam0->f_3628[11 /*8*/] = { -307.55f, 3988.647f, 53.323f };
	iParam0->f_3628[11 /*8*/].f_3 = { -255.138f, 3926.889f, 31.5805f };
	iParam0->f_3628[11 /*8*/].f_6 = 9f;
	iParam0->f_3628[11 /*8*/].f_7 = -1f;
	func_717(&(iParam0->f_32[0 /*11*/]), -1866.197f, 4416.57f, 47.6783f, 243.4072f, 15f, 0, 0);
	func_717(&(iParam0->f_32[1 /*11*/]), -1719.303f, 4323.626f, 64.5414f, 221.2501f, 15f, 0, 0);
	func_717(&(iParam0->f_32[2 /*11*/]), -1649.439f, 4210.078f, 82.7008f, 247.6203f, 15f, 0, 0);
	func_717(&(iParam0->f_32[3 /*11*/]), -1559.977f, 4206.744f, 75.5405f, 283.5007f, 15f, 0, 0);
	func_717(&(iParam0->f_32[4 /*11*/]), -1468.958f, 4225.536f, 52.2794f, 259.5412f, 15f, 0, 0);
	func_717(&(iParam0->f_32[5 /*11*/]), -1386.484f, 4165.806f, 51.7286f, 222.3696f, 15f, 0, 0);
	func_717(&(iParam0->f_32[6 /*11*/]), -1345.585f, 4126.963f, 61.804f, 307.3036f, 15f, 0, 0);
	func_717(&(iParam0->f_32[7 /*11*/]), -1321f, 4186.437f, 62.0636f, 339.138f, 15f, 0, 0);
	func_717(&(iParam0->f_32[8 /*11*/]), -1276.758f, 4278.825f, 65.3138f, 293.3126f, 15f, 0, 0);
	func_717(&(iParam0->f_32[9 /*11*/]), -1185.773f, 4291.904f, 78.4686f, 257.1151f, 15f, 0, 0);
	func_717(&(iParam0->f_32[10 /*11*/]), -1072.934f, 4272.621f, 100.6904f, 248.1561f, 15f, 0, 0);
	func_717(&(iParam0->f_32[11 /*11*/]), -1038.148f, 4229.422f, 115.7768f, 185.7003f, 15f, 0, 0);
	func_717(&(iParam0->f_32[12 /*11*/]), -1032.516f, 4165.056f, 118.9887f, 211.226f, 15f, 0, 0);
	func_717(&(iParam0->f_32[13 /*11*/]), -938.7848f, 4148.585f, 140.8003f, 223.9547f, 15f, 0, 0);
	func_717(&(iParam0->f_32[14 /*11*/]), -891.4792f, 4096.885f, 161.8249f, 251.5976f, 15f, 0, 0);
	func_717(&(iParam0->f_32[15 /*11*/]), -823.631f, 4051.689f, 162.4706f, 265.8944f, 15f, 0, 0);
	func_717(&(iParam0->f_32[16 /*11*/]), -753.7779f, 4038.203f, 147.1398f, 239.7252f, 15f, 0, 0);
	func_717(&(iParam0->f_32[17 /*11*/]), -654.0638f, 4013.689f, 126.4406f, 255.6974f, 15f, 0, 0);
	func_717(&(iParam0->f_32[18 /*11*/]), -591.6994f, 3972.394f, 113.3035f, 271.8129f, 15f, 0, 0);
	func_717(&(iParam0->f_32[19 /*11*/]), -515.1089f, 3960.313f, 87.3917f, 286.0931f, 15f, 0, 0);
	func_717(&(iParam0->f_32[20 /*11*/]), -425.4944f, 3943.495f, 65.9412f, 282.5892f, 15f, 0, 0);
	func_717(&(iParam0->f_32[21 /*11*/]), -379.7583f, 3981.864f, 52.2577f, 319.5195f, 15f, 0, 0);
	func_717(&(iParam0->f_32[22 /*11*/]), -330.6125f, 4012.509f, 45.0532f, 233.3578f, 15f, 0, 0);
	func_717(&(iParam0->f_32[23 /*11*/]), -252.5999f, 3920.977f, 39.36f, 222.7951f, 15f, 1, 0);
	iParam0->f_18 = 6;
	func_716(&(iParam0->f_396[0 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[0 /*203*/]), "Player");
	func_714(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_46.f_1);
	GlobalFunc_4626(&(iParam0->f_396[0 /*203*/]), -1938.34f, 4443.2f, 37.06f, 249.56f);
	func_712(&(iParam0->f_396[0 /*203*/]), 0, joaat("player_one"), joaat("sanchez"));
	func_716(&(iParam0->f_396[1 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[1 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[1 /*203*/]), -1932.596f, 4442.19f, 37.3184f, 261.2715f);
	func_712(&(iParam0->f_396[1 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[2 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[2 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[2 /*203*/]), -1933.257f, 4440.739f, 37.2692f, 256.9669f);
	func_712(&(iParam0->f_396[2 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
	func_716(&(iParam0->f_396[3 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[3 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[3 /*203*/]), -1935.01f, 4442.57f, 37.48f, 258.09f);
	func_712(&(iParam0->f_396[3 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[4 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[4 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[4 /*203*/]), -1935.5f, 4440.32f, 37.48f, 268.03f);
	func_712(&(iParam0->f_396[4 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("sanchez"));
	func_716(&(iParam0->f_396[5 /*203*/]));
	GlobalFunc_4627(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_714(&(iParam0->f_396[5 /*203*/]), 0, 0);
	GlobalFunc_4626(&(iParam0->f_396[5 /*203*/]), -1939.63f, 4440.46f, 37.25f, 253.32f);
	func_712(&(iParam0->f_396[5 /*203*/]), 4, joaat("a_m_y_genstreet_01"), joaat("blazer"));
}


int func_725(var uParam0)//Position - 0x6AB3D
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	
	iVar0 = 1;
	iVar1 = 1;
	StringCopy(&cVar2, "offroadrace", 64);
	switch (Local_46.f_11)
	{
		case 0:
			StringIntConCat(&cVar2, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar2, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar2, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar2, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar2, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar2, 5, 64);
			break;
	}
	StringConCat(&cVar2, "car", 64);
	if (iLocal_1716 > 2 && iLocal_1716 < 6)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			if (GlobalFunc_111())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			GlobalFunc_4935();
			HUD::CLEAR_PRINTS();
			GlobalFunc_2274(800);
			func_744(12);
		}
	}
	if (!bLocal_1707)
	{
		if (AUDIO::LOAD_STREAM("INTRO_STREAM", "DIRT_RACES_SOUNDSET"))
		{
			bLocal_1707 = true;
		}
	}
	switch (iLocal_1716)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			GlobalFunc_9530(0, 0, 0);
			if (!GlobalFunc_226(&uLocal_1520))
			{
				GlobalFunc_7777(&uLocal_1520);
			}
			else
			{
				GlobalFunc_6877(&uLocal_1520);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			if (func_129())
			{
				PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1, 4096, -1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, 1);
			}
			func_744(1);
			break;
		
		case 1:
			if (GlobalFunc_5182(&uLocal_1520) >= 2.5f)
			{
				func_744(3);
				GlobalFunc_6877(&uLocal_1520);
			}
			break;
		
		case 2:
			if (GlobalFunc_5182(&uLocal_1520) >= 0.4f)
			{
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				func_744(3);
				GlobalFunc_6877(&uLocal_1520);
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_673))
			{
				func_743(uParam0);
				func_706(uParam0);
				func_634();
				func_748(uParam0);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_674, uLocal_673, SYSTEM::ROUND((uParam0->f_3782 * 1000f)), 0, 0);
				func_742(uParam0);
				if (bLocal_1707)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
				}
				func_741();
			}
			else
			{
				func_744(12);
			}
			break;
		
		case 4:
			if (!GlobalFunc_2951(iLocal_1715, 8) && !GlobalFunc_111())
			{
				func_739(uParam0);
				func_682(&iLocal_1715, 8);
			}
			if (!uParam0->f_3621 && GlobalFunc_5182(&uLocal_1520) >= uParam0->f_3796[0])
			{
				if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_8) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_396[1 /*203*/].f_8, 0)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_396[1 /*203*/].f_8, uParam0->f_396[1 /*203*/].f_9, uParam0->f_3785[1 /*3*/], uParam0->f_3799[0], 0, uParam0->f_396[1 /*203*/].f_22, 262144, 0.1f, 5f);
					uParam0->f_3621 = 1;
				}
			}
			if (!uParam0->f_3622 && GlobalFunc_5182(&uLocal_1520) >= uParam0->f_3796[1])
			{
				if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_8) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_396[2 /*203*/].f_8, 0)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_396[2 /*203*/].f_8, uParam0->f_396[2 /*203*/].f_9, uParam0->f_3785[2 /*3*/], uParam0->f_3799[1], 0, uParam0->f_396[2 /*203*/].f_22, 262144, 0.1f, 5f);
					uParam0->f_3622 = 1;
				}
			}
			if ((GlobalFunc_5182(&uLocal_1520) >= (uParam0->f_3782 - 1.3f) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &cVar2)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[0 /*203*/].f_9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uParam0->f_396[0 /*203*/].f_9, 1, &cVar2, 1092616192, 262144);
				}
			}
			if (GlobalFunc_5182(&uLocal_1520) >= uParam0->f_3782)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_396[0 /*203*/].f_9, 1);
					AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
					AUDIO::SET_VEH_RADIO_STATION(uParam0->f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK");
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_676, uLocal_675, SYSTEM::ROUND((uParam0->f_3783 * 1000f)), 0, 1);
				func_741();
				GlobalFunc_7777(&uLocal_1520);
			}
			break;
		
		case 5:
			if (GlobalFunc_5182(&uLocal_1520) >= uParam0->f_3783)
			{
				GlobalFunc_6877(&uLocal_1520);
				CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_678, uLocal_677, SYSTEM::ROUND((uParam0->f_3784 * 1000f)), 0, 0);
				func_744(6);
				GlobalFunc_235(&(uParam0->f_19));
				iLocal_653 = 0;
			}
			else if (GlobalFunc_5182(&uLocal_1520) >= (uParam0->f_3783 - 0.2f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_396[0 /*203*/].f_9);
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_5182(&uLocal_1520) >= uParam0->f_3784)
			{
				iLocal_686 = 0;
				iLocal_687 = 0;
				iLocal_688 = 0;
				func_744(11);
			}
			if (GlobalFunc_5182(&uLocal_1520) >= 1f)
			{
				func_678(&(uParam0->f_19));
			}
			break;
		
		case 11:
			if (GlobalFunc_1720())
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (GlobalFunc_1720())
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				}
				GlobalFunc_6533(&iLocal_692, 4096);
				GlobalFunc_6533(&iLocal_1715, 1);
				GlobalFunc_6533(&iLocal_1715, 2);
				GlobalFunc_6533(&iLocal_1715, 4);
				GlobalFunc_6533(&iLocal_1715, 8);
				func_737();
				iVar0 = 1;
				iVar1 = 1;
				GlobalFunc_9545(1, 1, 1);
				return 1;
			}
			break;
		
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_634();
				func_748(uParam0);
				if (func_747(uParam0, &iVar0, 1036831949) && func_746(uParam0, &iVar1, 1036831949, 1))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					GlobalFunc_4628(800);
					func_744(11);
				}
			}
			else if (!CAM::DOES_CAM_EXIST(uLocal_673) || 1)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_744(11);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
			{
				AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_396[0 /*203*/].f_9, 1);
				AUDIO::SET_VEH_RADIO_STATION(uParam0->f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK");
			}
			uParam0->f_3620 = 1;
			break;
		
		case 7:
			if (CAM::DOES_CAM_EXIST(uLocal_679) && 0)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_680, uLocal_679, 3000, 1, 1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_672))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_672, -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_672, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (!GlobalFunc_2951(iLocal_1715, 1))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 2)
						{
							GlobalFunc_173(&uLocal_1542, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						}
						else if (GlobalFunc_8315() == 0)
						{
							GlobalFunc_173(&uLocal_1542, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						}
						else if (GlobalFunc_8315() == 1)
						{
							GlobalFunc_173(&uLocal_1542, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						}
						GlobalFunc_173(&uLocal_1542, 1, iLocal_672, "OR_Swap", 0, 1);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_669))
						{
							GlobalFunc_10630(&uLocal_1542, "SPR_OR", "OR_Cut01", "OR_Cut01_1", 8, 0, 0);
							func_682(&iLocal_1715, 1);
						}
						else
						{
							GlobalFunc_10630(&uLocal_1542, "SPR_OR", "OR_Cut02", "OR_Cut02_1", 8, 0, 0);
							func_682(&iLocal_1715, 1);
						}
						func_741();
					}
				}
			}
			else
			{
				GlobalFunc_2274(800);
				func_744(10);
			}
			break;
		
		case 8:
			if (CAM::DOES_CAM_EXIST(uLocal_680) && 0)
			{
				CAM::SET_CAM_ACTIVE(uLocal_680, 1);
			}
			else
			{
				GlobalFunc_2274(800);
				func_744(12);
			}
			break;
		
		case 9:
			if (CAM::DOES_CAM_EXIST(uLocal_681) && 0)
			{
				CAM::SET_CAM_ACTIVE(uLocal_681, 1);
				if (GlobalFunc_5182(&uLocal_1520) >= 1f)
				{
					GlobalFunc_6877(&uLocal_1520);
					func_741();
				}
			}
			else
			{
				GlobalFunc_2274(800);
				func_744(12);
			}
			break;
		
		case 10:
			if (GlobalFunc_5182(&uLocal_1520) >= 3f || 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_672))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS(iLocal_672);
				}
				uLocal_682 = uLocal_682;
				func_748(uParam0);
				func_726();
				GlobalFunc_6877(&uLocal_1520);
				func_744(3);
			}
			break;
	}
	return 0;
}

void func_726()//Position - 0x6B3F0
{
	if (iLocal_686)
	{
		if (!iLocal_688)
		{
			CAM::SET_CAM_ACTIVE(uLocal_673, 1);
		}
		return;
	}
	switch (Local_46.f_11)
	{
		case 0:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { -1934.736f, 4442.175f, 38.2098f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1934.764f, 4441.742f, 38.3865f, 4.0163f, -0.0469f, -100.6342f, 39.9908f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1932.875f, 4441.588f, 38.3544f, 10.6304f, -0.0316f, -105.3918f, 39.9908f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_675))
			{
				uLocal_675 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1934.569f, 4441.179f, 38.5273f, -10.8157f, -0.0428f, 50.6593f, 38.4614f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_676))
			{
				uLocal_676 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1936.452f, 4441.936f, 38.0959f, -9.9336f, -0.0428f, 47.3525f, 38.4614f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_677))
			{
				uLocal_677 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1943.691f, 4444.7f, 38.5172f, 5.3246f, -0.0005f, -111.0771f, 39.9908f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_678))
			{
				uLocal_678 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1943.202f, 4444.013f, 37.3637f, 2.6624f, -0.0005f, -104.1701f, 39.9908f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
		
		case 1:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { -518.5645f, 2011.686f, 205.3615f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_702, -10.1688f, -0.2245f, 20.8203f, 44.0808f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -519.1605f, 2013.016f, 205.5103f, -9.1715f, -0.2245f, 22.5841f, 44.0808f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_675))
			{
				uLocal_675 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -515.6855f, 2007.853f, 206.1012f, -0.4035f, -0.1892f, 163.2478f, 27.683f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_676))
			{
				uLocal_676 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -515.7711f, 2004.583f, 206.0598f, -0.3385f, -0.1892f, 163.0306f, 27.683f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_677))
			{
				uLocal_677 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -518.4795f, 1993.739f, 207.9673f, -7.2953f, -0.2214f, -3.5218f, 45.924f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_678))
			{
				uLocal_678 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -518.5731f, 1993.94f, 206.8376f, -8.4426f, -0.2214f, -5.8787f, 45.924f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
		
		case 3:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { -229.3903f, 4226.56f, 45.0182f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -229.2285f, 4226.661f, 45.0023f, -0.8733f, 0.0915f, 84.0911f, 41.6574f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -230.9695f, 4226.922f, 45.0704f, 2.394f, -0.0406f, 84.2233f, 41.6574f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_675))
			{
				uLocal_675 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -230.0989f, 4226.499f, 45.2705f, -6.5795f, -0.167f, -125.0428f, 39.01f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_676))
			{
				uLocal_676 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -228.9741f, 4225.894f, 45.1399f, -3.7667f, -0.167f, -129.7411f, 39.01f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_677))
			{
				uLocal_677 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -221.3025f, 4223.685f, 46.7736f, -2.7368f, -0.0008f, 70.4824f, 41.6574f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_678))
			{
				uLocal_678 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -221.6005f, 4223.791f, 45.38f, -4.8182f, -0.0008f, 70.4824f, 41.6574f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
		
		case 4:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { 1606.396f, 3839.926f, 34.8244f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_702, -2.9033f, -1.8249f, -46.6085f, 40.1711f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1607.886f, 3841.326f, 34.7757f, -0.5879f, -1.9369f, -45.4532f, 40.1711f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_675))
			{
				uLocal_675 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1607.938f, 3837.938f, 34.4804f, -4.4038f, -1.7706f, 108.5596f, 40.1711f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_676))
			{
				uLocal_676 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1606.563f, 3837.242f, 34.3664f, -3.1316f, -1.7706f, 107.7553f, 40.1711f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_677))
			{
				uLocal_677 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1599.768f, 3833.889f, 35.7868f, 0.5473f, -1.878f, -48.6451f, 40.1711f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_678))
			{
				uLocal_678 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1599.663f, 3833.747f, 34.6625f, -2.6611f, -1.878f, -48.6451f, 40.1711f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
		
		case 5:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { 2044.492f, 2130.29f, 93.3795f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2044.549f, 2130.042f, 93.4643f, -2.8529f, 0.2457f, -129.0125f, 40.8194f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2047.298f, 2128.214f, 93.4141f, 0.7893f, 0.1513f, -125.6504f, 40.8194f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_675))
			{
				uLocal_675 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2041.683f, 2131.102f, 94.2686f, -5.0825f, 0f, 76.3259f, 44.5242f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_676))
			{
				uLocal_676 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2039.339f, 2132.098f, 94.0928f, -5.3187f, 0f, 84.7292f, 44.5242f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_677))
			{
				uLocal_677 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2030.258f, 2139.139f, 96.2295f, -2.6047f, 0f, -130.7596f, 44.5242f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_678))
			{
				uLocal_678 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2031.409f, 2137.756f, 94.4353f, -3.9361f, 0f, -134.2198f, 44.5242f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
		
		case 2:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { 2996.691f, 2782.503f, 43.6393f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2996.845f, 2782.23f, 43.497f, 3.4209f, 0.0045f, 33.4847f, 47.0393f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2995.947f, 2783.485f, 43.6447f, 5.1925f, 0.0045f, 36.8585f, 47.0393f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_675))
			{
				uLocal_675 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2996.145f, 2780.477f, 43.3431f, -6.6951f, 0.0799f, 163.7419f, 41.8987f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_676))
			{
				uLocal_676 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2996.495f, 2777.875f, 43.1067f, -4.1896f, 0.0799f, 147.3135f, 41.8987f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_677))
			{
				uLocal_677 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2996.122f, 2771.097f, 44.5126f, 0.6591f, -0.0658f, 6.9874f, 42.7619f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_678))
			{
				uLocal_678 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2996.122f, 2771.112f, 43.1661f, 0.6591f, -0.0658f, 6.9874f, 42.7619f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
		
		case 6:
			iLocal_701 = 7000;
			if (!CAM::DOES_CAM_EXIST(uLocal_674))
			{
				Local_702 = { 1169.682f, 2389.442f, 58.449f };
				uLocal_674 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_702, -5.1495f, 0f, 179.1833f, 45f, 0, 2);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_673))
			{
				uLocal_673 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1163.763f, 2427.684f, 64.9889f, -4.8554f, 0f, 123.0232f, 50f, 0, 2);
			}
			if (!iLocal_688)
			{
			}
			iLocal_686 = 1;
			break;
	}
}











void func_737()//Position - 0x6C436
{
	func_738();
}

void func_738()//Position - 0x6C442
{
	if (CAM::DOES_CAM_EXIST(uLocal_682))
	{
		CAM::DESTROY_CAM(uLocal_682, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_681))
	{
		CAM::DESTROY_CAM(uLocal_681, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_680))
	{
		CAM::DESTROY_CAM(uLocal_680, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_679))
	{
		CAM::DESTROY_CAM(uLocal_679, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_673))
	{
		CAM::DESTROY_CAM(uLocal_673, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_674))
	{
		CAM::DESTROY_CAM(uLocal_674, 0);
	}
}

void func_739(var uParam0)//Position - 0x6C4B6
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_8))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
		switch (iVar0)
		{
			case 1:
				sVar1 = "MALE1";
				sVar2 = "ORR_GUY1C";
				break;
			
			case 2:
				sVar1 = "MALE2";
				sVar2 = "ORR_GUY2C";
				break;
			
			case 3:
				sVar1 = "MALE3";
				sVar2 = "ORR_GUY3C";
				break;
		}
		GlobalFunc_173(&uLocal_1542, iVar0, uParam0->f_396[1 /*203*/].f_8, sVar1, 0, 1);
		GlobalFunc_10618(&uLocal_1542, "ORRAUD", sVar2, 8, 0, 0, 0);
	}
}


void func_741()//Position - 0x6C59D
{
	GlobalFunc_6877(&uLocal_1520);
	iLocal_1716++;
}

void func_742(var uParam0)//Position - 0x6C5B4
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[1 /*203*/].f_9, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[2 /*203*/].f_9, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[3 /*203*/].f_9, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[4 /*203*/].f_9, 0);
	}
}

void func_743(var uParam0)//Position - 0x6C640
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &(uParam0->f_3588));
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3588[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3588[iVar1]))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3588[iVar1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_3588[iVar1], 1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3588[iVar1], 1, 0);
				}
			}
		}
		iVar1++;
	}
}

void func_744(int iParam0)//Position - 0x6C6BE
{
	GlobalFunc_6877(&uLocal_1520);
	iLocal_1716 = iParam0;
}


int func_746(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6C6F1
{
	var uVar0;
	
	iParam2 = iParam2;
	if (iParam3 || uParam0->f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
		{
		}
		switch (Local_46.f_11)
		{
			case 0:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -1937.885f, 4443.319f, 36.5555f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 256.8476f);
				break;
			
			case 1:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -517.2068f, 2000.553f, 204.616f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 20.3384f);
				break;
			
			case 3:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -225.98f, 4224.74f, 44.36f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 80.2f);
				break;
			
			case 4:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 1602.54f, 3837.21f, 33.72f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 308.94f);
				break;
			
			case 5:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2030.898f, 2134.197f, 92.5014f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 249.4471f);
				break;
			
			case 2:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2995.823f, 2774.861f, 41.9576f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 354.6729f);
				break;
			
			case 6:
				break;
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[0 /*203*/].f_9);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9))
	{
		switch (Local_46.f_11)
		{
			case 0:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -1946.785f, 4448.651f, 35.2621f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 230.0273f);
				break;
			
			case 1:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -517.9825f, 1991.624f, 205.1206f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 330.0374f);
				break;
			
			case 3:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -220.6522f, 4222.031f, 43.763f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 65.2566f);
				break;
			
			case 4:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 1596.716f, 3829.308f, 32.9941f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 316.0527f);
				break;
			
			case 5:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2031.772f, 2134.978f, 92.5141f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 243.1813f);
				break;
			
			case 2:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2993.994f, 2766.894f, 41.7335f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 20.89f);
				break;
			
			case 6:
				break;
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[0 /*203*/].f_9);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			switch (Local_46.f_11)
			{
				case 0:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, -1938.34f, 4443.2f, 37.06f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 249.56f);
					break;
				
				case 1:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, -512.3987f, 2001.489f, 204.8844f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 24.0095f);
					break;
				
				case 3:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, -225.98f, 4224.74f, 44.36f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 80.2f);
					break;
				
				case 4:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 1602.54f, 3837.21f, 33.72f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 308.94f);
					break;
				
				case 5:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 2037.6f, 2136.15f, 93.15f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 238.07f);
					break;
				
				case 2:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 2996.96f, 2773.84f, 42.41f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 20.89f);
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			switch (Local_46.f_11)
			{
				case 0:
					ENTITY::SET_ENTITY_COORDS(uVar0, -1938.34f, 4443.2f, 37.06f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar0, 249.56f);
					break;
				
				case 1:
					ENTITY::SET_ENTITY_COORDS(iVar0, -512.3987f, 2001.489f, 204.8844f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar0, 24.0095f);
					break;
				
				case 3:
					ENTITY::SET_ENTITY_COORDS(iVar0, -225.98f, 4224.74f, 44.36f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar0, 80.2f);
					break;
				
				case 4:
					ENTITY::SET_ENTITY_COORDS(iVar0, 1602.54f, 3837.21f, 33.72f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar0, 308.94f);
					break;
				
				case 5:
					ENTITY::SET_ENTITY_COORDS(iVar0, 2037.6f, 2136.15f, 93.15f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar0, 238.07f);
					break;
				
				case 2:
					ENTITY::SET_ENTITY_COORDS(iVar0, 2996.96f, 2773.84f, 42.41f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar0, 20.89f);
					break;
				
				case 6:
					break;
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
		}
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	return 1;
}

int func_747(var uParam0, int iParam1, int iParam2)//Position - 0x6CD42
{
	iParam2 = iParam2;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[1 /*203*/].f_9, "Racer 01");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[2 /*203*/].f_9, "Racer 02");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[3 /*203*/].f_9, "Racer 03");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[4 /*203*/].f_9, "Racer 04");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[5 /*203*/].f_9, "Racer 05");
	}
	switch (Local_46.f_11)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, -1932.596f, 4442.19f, 37.3184f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 261.2715f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, -1933.257f, 4440.739f, 37.2692f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 256.9669f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, -1935.01f, 4442.57f, 37.48f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 258.09f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, -1935.5f, 4440.32f, 37.48f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 268.03f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, -1939.63f, 4440.46f, 37.25f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 253.32f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9);
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, -520.2454f, 2010.967f, 203.585f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 16.9522f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, -516.7449f, 2013.236f, 203.7095f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 18.1295f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, -518.3414f, 2005.449f, 204.1878f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 20.7231f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, -514.8247f, 2008.574f, 204.3629f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 20.2278f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9);
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, -231.8486f, 4225.461f, 43.8031f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 76.66f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, -231.1335f, 4228.47f, 43.8715f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 80.88f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, -228.85f, 4227.71f, 44.57f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 83.38f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, -229.58f, 4225.21f, 44.34f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 75.78f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, -225.41f, 4227.53f, 44.45f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 82.7f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9);
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, 1607.056f, 3841.721f, 33.3075f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 307.24f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, 1608.262f, 3840.28f, 33.0403f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 311.44f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, 1606.2f, 3838.41f, 33.62f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 307.44f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, 1604.49f, 3840.42f, 34.18f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 308.19f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9);
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, 2046.772f, 2130.442f, 91.9486f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 233.1493f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, 2045.344f, 2126.352f, 91.9358f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 236.3633f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, 2034.821f, 2138.885f, 92.6919f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 237.2035f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, 2041.237f, 2134.698f, 92.4401f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 232.9754f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, 2039.413f, 2130.228f, 92.5788f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 241.4449f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9);
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, 2994.447f, 2782.591f, 42.455f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 26.81f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, 2998.043f, 2784.221f, 42.5605f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 33.42f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, 2994.91f, 2779.79f, 42.73f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 11.43f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, 2999.44f, 2781.11f, 43.11f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 23.89f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, 3000.06f, 2775.26f, 42.47f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 17.16f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9);
			}
			break;
		
		case 6:
			break;
	}
	return 1;
}

void func_748(var uParam0)//Position - 0x6D79C
{
	struct<3> Var0;
	float fVar3;
	
	if (!GlobalFunc_2951(iLocal_692, 32768))
	{
		Var0 = { uParam0->f_3624 };
		fVar3 = uParam0->f_3627;
		func_749(uParam0, Var0, fVar3);
		func_682(&iLocal_692, 32768);
	}
}

void func_749(var uParam0, struct<3> Param1, float fParam4)//Position - 0x6D7DF
{
	struct<3> Var0;
	
	Var0 = { 1f, 1f, 1f };
	if (uParam0->f_396[0 /*203*/].f_9 == iLocal_671)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_669))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_669, Param1, Var0, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_669, 1, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_669, Param1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_669, fParam4);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_669);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_672))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_672, 1, 1);
				PED::DELETE_PED(&iLocal_672);
			}
		}
	}
}

int func_750(var uParam0, var uParam1, int iParam2)//Position - 0x6D873
{
	int iVar0;
	
	iVar0 = func_790(iLocal_693);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar0 = SYSTEM::SHIFT_LEFT(1, iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		iVar0 = 0;
		if (func_129())
		{
			func_682(&iVar0, 2048);
		}
		else
		{
			func_682(&iVar0, 1024);
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_673))
	{
		if (iLocal_689)
		{
			return 1;
		}
		else
		{
			switch (iVar0)
			{
				case 2:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_669 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_669, 0))
					{
						GlobalFunc_10101(iLocal_669, uParam0->f_3624, uParam0->f_3627, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
						func_751(iLocal_669, 1);
					}
					Local_46.f_2 = iLocal_669;
					iLocal_671 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_671, 1, 0);
						iLocal_647 = 0;
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 8:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_669 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_669, 0))
					{
						GlobalFunc_10101(iLocal_669, uParam0->f_3624, uParam0->f_3627, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
						func_751(iLocal_669, 1);
					}
					Local_46.f_2 = iLocal_669;
					iLocal_671 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_671))
					{
						iLocal_671 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 32:
					iLocal_669 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_669, 0))
					{
						GlobalFunc_10101(iLocal_669, uParam0->f_3624, uParam0->f_3627, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
						func_751(iLocal_669, 1);
					}
					Local_46.f_2 = iLocal_669;
					iLocal_671 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_671, 1, 0);
					}
					iLocal_647 = 0;
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 64:
					iLocal_671 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 512:
					iLocal_671 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 1024:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_669 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_669, 0))
					{
						GlobalFunc_10101(iLocal_669, uParam0->f_3624, uParam0->f_3627, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
						func_751(iLocal_669, 0);
					}
					Local_46.f_2 = iLocal_669;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2))
					{
						iLocal_671 = iParam2;
					}
					else
					{
						iLocal_671 = VEHICLE::CREATE_VEHICLE(joaat("mesa"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_671, 1, 0);
						iLocal_647 = 0;
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 2048:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_669 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_669, 0))
					{
						GlobalFunc_10101(iLocal_669, uParam0->f_3624, uParam0->f_3627, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
						func_751(iLocal_669, 0);
					}
					Local_46.f_2 = iLocal_669;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2))
					{
						iLocal_671 = iParam2;
					}
					else
					{
						iLocal_671 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 256:
					iLocal_669 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_669, 0))
					{
						GlobalFunc_10101(iLocal_669, uParam0->f_3624, uParam0->f_3627, 24, 0);
						func_751(iLocal_669, 1);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
					}
					Local_46.f_2 = iLocal_669;
					if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_2))
					{
					}
					iLocal_671 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_671))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_671, 1);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_671) == 0)
						{
						}
						else
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_671);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_671, -1);
					}
					uParam1->f_9 = iLocal_671;
					iLocal_689 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_671);
					return 1;
					break;
				
				case 1:
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
					func_751(iLocal_669, 0);
					Local_46.f_2 = iLocal_669;
					uParam0->f_3623 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, 1, 1);
						VEHICLE::DELETE_VEHICLE(&iParam2);
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
					{
					}
					if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_669) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_669) == 0)
					{
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_669))
					{
						iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_669);
					}
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_669);
					uParam1->f_9 = iLocal_669;
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_669, joaat("mesa")))
					{
						if (VEHICLE::DOES_EXTRA_EXIST(iLocal_669, 1))
						{
							if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_669, 1))
							{
								iLocal_647 = 1;
							}
							else
							{
								iLocal_647 = 0;
							}
						}
					}
					iLocal_689 = 1;
					return 1;
					break;
				
				case 4:
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_669);
					func_751(iLocal_669, 0);
					Local_46.f_2 = iLocal_669;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, 1, 1);
							VEHICLE::DELETE_VEHICLE(&iParam2);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_669))
					{
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_669) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_669) == 0)
						{
						}
						else
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_669);
						}
					}
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_669);
					uParam1->f_9 = iLocal_669;
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_669, joaat("mesa")))
					{
						if (VEHICLE::DOES_EXTRA_EXIST(iLocal_669, 1))
						{
							if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_669, 1))
							{
								iLocal_647 = 1;
							}
							else
							{
								iLocal_647 = 0;
							}
						}
					}
					iLocal_689 = 1;
					return 1;
					break;
				
				case 16:
					if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, 1, 1);
						if (iLocal_670 != iParam2)
						{
							VEHICLE::DELETE_VEHICLE(&iParam2);
						}
						else
						{
							iLocal_670 = iParam2;
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
					{
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_670))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_670))
					{
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_670) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_670) == 0)
						{
						}
						else
						{
							iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_670);
						}
					}
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_670);
					uParam1->f_9 = iLocal_670;
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_670, joaat("mesa")))
					{
						if (VEHICLE::DOES_EXTRA_EXIST(iLocal_670, 1))
						{
							if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_670, 1))
							{
								iLocal_647 = 1;
							}
							else
							{
								iLocal_647 = 0;
							}
						}
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_670, 1, 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_670, -1);
					iLocal_689 = 1;
					return 1;
					break;
				
				case 128:
					if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, 1, 1);
						if (iParam2 != iLocal_670)
						{
							VEHICLE::DELETE_VEHICLE(&iParam2);
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, 0))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_670))
					{
						iLocal_646 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_670);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_670) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_670) == 0)
						{
						}
						else
						{
							uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_670);
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_670, 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_670, -1);
					}
					uParam1->f_9 = iLocal_670;
					iLocal_689 = 1;
					return 1;
					break;
				}
		}
	}
	else
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46.f_2))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46.f_2, 1, 0);
	}
	return 0;
}

void func_751(int iParam0, int iParam1)//Position - 0x6E2E4
{
	Local_46.f_277 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam0);
	Local_46.f_277.f_1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_4932(iParam0, &(Local_46.f_277.f_2));
	Local_46.f_151 = iParam1;
}







































int func_790(int iParam0)//Position - 0x6FA91
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return iVar0;
		}
		iParam0 = SYSTEM::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return -1;
}

int func_791(var uParam0, int iParam1)//Position - 0x6FACF
{
	if (!GlobalFunc_2951(iLocal_692, 4096))
	{
		func_682(&iLocal_692, 4096);
	}
	else
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iLocal_672 = iParam1;
		ENTITY::SET_ENTITY_COORDS(iLocal_672, uParam0->f_396[0 /*203*/].f_16, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_672, uParam0->f_396[0 /*203*/].f_19);
		return 1;
	}
	else
	{
		iLocal_672 = PED::CREATE_PED(4, joaat("a_m_y_motox_01"), uParam0->f_396[0 /*203*/].f_16, uParam0->f_396[0 /*203*/].f_19, 1, 1);
		return 1;
	}
	return 0;
}

int func_792(var uParam0)//Position - 0x6FB5E
{
	if (!GlobalFunc_2951(iLocal_692, 8192))
	{
		func_793(&(uParam0->f_396[0 /*203*/]));
		func_682(&iLocal_692, 8192);
	}
	return 0;
}

void func_793(var uParam0)//Position - 0x6FB8B
{
	if (Local_46 != 1)
	{
		return;
	}
	if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_129())
		{
			if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iLocal_669 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
				{
					if (func_795(iLocal_669, func_129()))
					{
						iLocal_688 = 0;
						func_682(&iLocal_693, 1);
					}
					else
					{
						func_682(&iLocal_693, 2);
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			iLocal_669 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_669))
			{
				if (func_795(iLocal_669, func_129()))
				{
					iLocal_688 = 0;
					func_682(&iLocal_693, 4);
				}
				else
				{
					iLocal_688 = 1;
					func_682(&iLocal_693, 8);
				}
			}
		}
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (func_794())
			{
				if (!func_129())
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						if (GlobalFunc_156(PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 1) < 20f)
						{
							iLocal_670 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_670))
							{
								if (func_795(iLocal_670, func_129()))
								{
									iLocal_688 = 0;
									func_682(&iLocal_693, 16);
								}
								else
								{
									func_682(&iLocal_693, 32);
								}
							}
						}
						else
						{
							func_682(&iLocal_693, 64);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (GlobalFunc_156(PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						iLocal_670 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_670))
						{
							if (func_795(iLocal_670, func_129()))
							{
								iLocal_688 = 0;
								func_682(&iLocal_693, 128);
							}
							else
							{
								func_682(&iLocal_693, 256);
							}
						}
					}
					else
					{
						func_682(&iLocal_693, 512);
					}
				}
			}
			else if (!func_129())
			{
				func_682(&iLocal_693, 1024);
			}
			else
			{
				func_682(&iLocal_693, 2048);
			}
		}
	}
	else if (!func_129())
	{
		func_682(&iLocal_693, 1024);
	}
	else
	{
		func_682(&iLocal_693, 2048);
	}
}

int func_794()//Position - 0x6FDB8
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
				{
					return 0;
				}
				else if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
				{
					return 0;
				}
				else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 1;
}

int func_795(int iParam0, bool bParam1)//Position - 0x6FE2C
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("kalahari"))
	{
		return !bParam1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("huntley"))
	{
		return !bParam1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("dubsta3"))
	{
		return !bParam1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("bfinjection"):
		case joaat("baller"):
		case joaat("bison"):
		case joaat("bison2"):
		case joaat("bjxl"):
		case joaat("bobcatxl"):
		case joaat("cavalcade"):
		case joaat("dubsta"):
		case joaat("dubsta2"):
		case joaat("fbi2"):
		case joaat("gresley"):
		case joaat("granger"):
		case joaat("mesa"):
		case joaat("patriot"):
		case joaat("rancherxl"):
		case joaat("rebel"):
		case joaat("rebel2"):
		case joaat("rocoto"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("serrano"):
		case joaat("monster"):
		case joaat("crusader"):
			return !bParam1;
			break;
		
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("blazer3"):
		case joaat("sanchez"):
			return bParam1;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("bodhi2"):
			return (!bParam1 && GlobalFunc_8315() == 2);
			break;
	}
	return 0;
}





void func_800()//Position - 0x6FFAE
{
	if (func_129())
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, 0, 0, 0);
		if (GlobalFunc_8315() == 0)
		{
			func_476(PLAYER::PLAYER_PED_ID(), 12, 48, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else if (GlobalFunc_8315() == 2)
		{
			func_476(PLAYER::PLAYER_PED_ID(), 12, 44, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else if (GlobalFunc_8315() == 1)
		{
			func_476(PLAYER::PLAYER_PED_ID(), 12, 42, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
}

int func_801(var uParam0)//Position - 0x70028
{
	VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(0.2f);
	switch (uParam0->f_30)
	{
		case 0:
			func_814(uParam0);
			bLocal_609 = false;
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			GlobalFunc_7632(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			uParam0->f_3008 = GlobalFunc_2407();
			uParam0->f_22 = GlobalFunc_816();
			switch (Local_46)
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
			if (func_806(uParam0))
			{
				func_804(uParam0);
				uParam0->f_30 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_1092(&Local_648);
			uParam0->f_30 = 2;
			break;
		
		case 2:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_3008))
				{
					if (GlobalFunc_1088(&Local_648))
					{
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
						{
							uParam0->f_30 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_46 == 1)
			{
				uParam0->f_30 = 4;
			}
			else
			{
				func_804(uParam0);
				uParam0->f_30 = 4;
			}
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



int func_804(var uParam0)//Position - 0x701B5
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (iVar0 != 0)
		{
			if (!func_805(uParam0, iVar0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_805(var uParam0, int iParam1)//Position - 0x701EC
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_127(&(uParam0->f_396[iParam1 /*203*/]), 1);
	}
	return func_127(&(uParam0->f_396[iParam1 /*203*/]), 0);
}

int func_806(var uParam0)//Position - 0x70231
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!func_807(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_807(var uParam0, int iParam1)//Position - 0x70262
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_808(&(uParam0->f_396[iParam1 /*203*/]));
}

int func_808(var uParam0)//Position - 0x7028C
{
	if (!func_810(uParam0) || !func_809(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_809(var uParam0)//Position - 0x702B0
{
	if (uParam0->f_22 == 0 || uParam0->f_22 == joaat("rebel"))
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

bool func_810(var uParam0)//Position - 0x702DD
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}




void func_814(var uParam0)//Position - 0x70396
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		func_815(uParam0, iVar0);
		iVar0++;
	}
}

void func_815(var uParam0, int iParam1)//Position - 0x703BB
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_816(&(uParam0->f_396[iParam1 /*203*/]));
}

void func_816(var uParam0)//Position - 0x703E4
{
	func_818(uParam0);
	GlobalFunc_4629(uParam0);
}


void func_818(var uParam0)//Position - 0x70413
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	if (uParam0->f_21 == joaat("a_m_y_motox_02"))
	{
	}
	STREAMING::REQUEST_MODEL(uParam0->f_21);
}

void func_819()//Position - 0x7043A
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Offroad_", 16);
	switch (Local_46.f_11)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 16);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 16);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 16);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 16);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 16);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 16);
			break;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
}




int func_823(struct<11> Param0, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17)//Position - 0x70511
{
	int iVar0;
	char cVar1[64];
	char* sVar17;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	GlobalFunc_601(23, 1);
	switch (Local_1417.f_5)
	{
		case 0:
			GlobalFunc_138();
			HUD::DISPLAY_RADAR(0);
			HUD::SET_WAYPOINT_OFF();
			HUD::CLEAR_GPS_PLAYER_WAYPOINT();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			GlobalFunc_696();
			GlobalFunc_2362(0);
			func_869(&Local_1717);
			Local_46.f_4 = { Param0.f_1 };
			Local_5525 = { Param0.f_1 };
			Local_46.f_11 = Param0;
			func_866(PLAYER::PLAYER_PED_ID(), 0);
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(Local_46.f_356), 1);
			func_190(Local_5525);
			func_709();
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_5525, 60f, 0);
			StringCopy(&cVar1, "offroadrace", 64);
			switch (Local_46.f_11)
			{
				case 0:
					StringIntConCat(&cVar1, 1, 64);
					break;
				
				case 1:
					StringIntConCat(&cVar1, 2, 64);
					break;
				
				case 2:
					StringIntConCat(&cVar1, 6, 64);
					break;
				
				case 3:
					StringIntConCat(&cVar1, 3, 64);
					break;
				
				case 4:
					StringIntConCat(&cVar1, 4, 64);
					break;
				
				case 5:
					StringIntConCat(&cVar1, 5, 64);
					break;
			}
			StringConCat(&cVar1, "car", 64);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, &cVar1);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Param0.f_4)
			{
				if (iVar0 < Local_1717.f_396)
				{
					Local_1717.f_396[iVar0 + 1 /*203*/].f_8 = Param0.f_4[iVar0];
					Local_1717.f_396[iVar0 + 1 /*203*/].f_9 = Param0.f_10[iVar0];
					if (ENTITY::DOES_ENTITY_EXIST(Local_1717.f_396[iVar0 + 1 /*203*/].f_8))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1717.f_396[iVar0 + 1 /*203*/].f_8, 1, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1717.f_396[iVar0 + 1 /*203*/].f_9))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1717.f_396[iVar0 + 1 /*203*/].f_9, 1, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_1717.f_396[iVar0 + 1 /*203*/].f_9, 1);
						VEHICLE::SET_VEHICLE_IS_RACING(Local_1717.f_396[iVar0 + 1 /*203*/].f_9, 1);
					}
				}
				iVar0++;
			}
			switch (Local_46.f_11)
			{
				case 0:
					sVar17 = "CanyonCliffs_Start";
					break;
				
				case 1:
					sVar17 = "RidgeRun_Start";
					break;
				
				case 3:
					sVar17 = "ValleyTrail_Start";
					break;
				
				case 4:
					sVar17 = "LakesideSplash_Start";
					break;
				
				case 5:
					sVar17 = "EcoFriendly_Start";
					break;
				
				case 2:
					sVar17 = "MinewardSpiral_Start";
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
			{
				if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar17))
				{
					if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar17))
					{
						TASK::SET_SCENARIO_GROUP_ENABLED(sVar17, 0);
					}
				}
			}
			switch (Local_46.f_11)
			{
				case 0:
					sVar17 = "CanyonCliffs";
					break;
				
				case 1:
					sVar17 = "RidgeRun";
					break;
				
				case 3:
					sVar17 = "ValleyTrail";
					break;
				
				case 4:
					sVar17 = "LakesideSplash";
					break;
				
				case 5:
					sVar17 = "EcoFriendly";
					break;
				
				case 2:
					sVar17 = "MinewardSpiral";
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
			{
				if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar17))
				{
					if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar17))
					{
						TASK::SET_SCENARIO_GROUP_ENABLED(sVar17, 1);
					}
				}
			}
			func_647();
			Local_46.f_339 = 0;
			func_825(&Local_1717);
			func_746(&Local_1717, &iLocal_5530, 1036831949, 0);
			GRAPHICS::ANIMPOSTFX_STOP("SwitchSceneNeutral");
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
			func_824();
			GlobalFunc_6877(&(Local_46.f_335));
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
			}
			SYSTEM::WAIT(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_726();
			}
			VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(1);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
			}
			Local_1417.f_5 = 2;
			func_801(&Local_1717);
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("MINI@RACING@BIKE@");
			STREAMING::REQUEST_ANIM_DICT("MINI@RACING@QUAD@");
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			if (Local_46.f_11 == 0)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14c"));
				STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14e"));
			}
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", 0);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", 0);
			Local_1717.f_3008 = GlobalFunc_2407();
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			STREAMING::NEW_LOAD_SCENE_STOP();
			Local_1417.f_5 = 3;
			break;
		
		case 3:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_1717.f_3008))
			{
				AUDIO::START_AUDIO_SCENE("RACE_INTRO_GENERIC");
				if (Local_46.f_11 == 4)
				{
					if (STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
					{
						Local_46.f_342 = 1;
						STREAMING::REMOVE_IPL("CS2_06_TriAf02");
					}
				}
				Local_1417.f_5 = 6;
			}
			break;
		
		case 4:
			Local_1417.f_5 = 5;
			GlobalFunc_6877(&(Local_1417.f_2));
			break;
		
		case 5:
			if (GlobalFunc_7084(&(Local_1417.f_2), 0.5f))
			{
				Local_1417.f_5 = 6;
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_1417.f_5 = 9;
			}
			else
			{
				Local_1417.f_5 = 9;
				GlobalFunc_235(&(Local_1417.f_2));
			}
			break;
		
		case 7:
			if (GlobalFunc_7084(&(Local_1417.f_2), 0.5f))
			{
				Local_1417.f_5 = 8;
			}
			break;
		
		case 8:
			Local_1417.f_5 = 9;
			break;
		
		case 9:
			if (GlobalFunc_226(&(Local_1417.f_2)))
			{
				GlobalFunc_235(&(Local_1417.f_2));
			}
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_824()//Position - 0x70A34
{
	switch (Local_46.f_11)
	{
		case 0:
			uLocal_683 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1696.211f, 4309.484f, 78.3513f, -17.1796f, 0f, 57.1903f, 42.5736f, 0, 2);
			uLocal_684 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1694.793f, 4311.826f, 78.298f, -17.1796f, 0f, 58.2317f, 42.5736f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_684, uLocal_683, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			break;
		
		case 1:
			uLocal_683 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -634.2543f, 1916.109f, 192.3409f, -9.1154f, 0f, -9.1071f, 45.0104f, 0, 2);
			uLocal_684 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -641.3137f, 1917.626f, 190.8026f, -9.1154f, 0f, -15.3093f, 45.0104f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_684, uLocal_683, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			break;
		
		case 3:
			uLocal_683 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -236.4628f, 4240.527f, 75.4924f, -8.8267f, 0f, 79.9126f, 50f, 0, 2);
			uLocal_684 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -235.1967f, 4236.572f, 71.9846f, -8.8267f, 0f, 79.9126f, 50f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_684, uLocal_683, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			break;
		
		case 4:
			uLocal_683 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1796.466f, 4040.912f, 48.7151f, -4.5857f, -0.0023f, -137.7639f, 44.9933f, 0, 2);
			uLocal_684 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1791.121f, 4036.07f, 48.7158f, -4.8249f, 0.0628f, -133.4925f, 44.9933f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_684, uLocal_683, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			break;
		
		case 5:
			uLocal_683 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2071.471f, 2157.514f, 147.487f, -7.5491f, 0.0781f, -126.4479f, 45.0214f, 0, 2);
			uLocal_684 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 2073.758f, 2160.364f, 147.2902f, -10.4994f, 0.2542f, -133.5917f, 45.0214f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_684, uLocal_683, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			break;
		
		case 2:
			uLocal_683 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 3098.061f, 2697.896f, 105.0805f, -14.244f, -0.0027f, 61.1833f, 45.0418f, 0, 2);
			uLocal_684 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 3101.743f, 2706.193f, 105.0836f, -14.3949f, 0.0565f, 66.3009f, 45.0418f, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_684, uLocal_683, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			break;
	}
	CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.3f);
}

void func_825(var uParam0)//Position - 0x70D5E
{
	GlobalFunc_3491(&(uParam0->f_2021));
	GlobalFunc_6537(&(uParam0->f_2021.f_741));
	func_826(&(uParam0->f_2021));
}

void func_826(var uParam0)//Position - 0x70D84
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
	GlobalFunc_4630(&(uParam0->f_420[1 /*8*/]), 80, 80, 80, 255);
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
	GlobalFunc_7543(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[7 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[8 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[9 /*8*/]), 257f, 456f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[9 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[11 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[12 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[13 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[14 /*8*/]), 257f, 564f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[14 /*8*/]), 107, 1);
	GlobalFunc_7543(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[15 /*8*/]), 108, 1);
	GlobalFunc_7543(&(uParam0->f_420[16 /*8*/]), 428f, 564f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}








































void func_866(int iParam0, int iParam1)//Position - 0x726DC
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
					func_243(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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



void func_869(var uParam0)//Position - 0x72EFB
{
	Local_46 = 1;
	Local_46.f_1 = 0;
	Local_46.f_3 = 0;
	Local_46.f_7 = 97f;
	Local_46.f_8 = 4;
	Local_46.f_9 = joaat("a_m_y_motox_01");
	Local_46.f_10 = joaat("bjxl");
	StringCopy(&(Local_46.f_21[0 /*8*/]), "CANYONCLIFFS", 32);
	Local_46.f_13[0] = 165f;
	StringCopy(&(Local_46.f_21[1 /*8*/]), "RIDGERUN", 32);
	Local_46.f_13[1] = 80f;
	StringCopy(&(Local_46.f_21[2 /*8*/]), "MINEWARD", 32);
	Local_46.f_13[2] = 165f;
	StringCopy(&(Local_46.f_21[3 /*8*/]), "VALLEYTRAIL", 32);
	Local_46.f_13[3] = 165f;
	StringCopy(&(Local_46.f_21[4 /*8*/]), "LAKESIDE", 32);
	Local_46.f_13[4] = 165f;
	StringCopy(&(Local_46.f_21[5 /*8*/]), "ECOFRIENDLY", 32);
	Local_46.f_13[5] = 165f;
}




void func_873()//Position - 0x73049
{
	GlobalFunc_601(23, 0);
	GRAPHICS::ANIMPOSTFX_STOP("SwitchSceneNetural");
	GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameEndMichael");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameEndFranklin");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameEndTrevor");
	switch (Local_46.f_11)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 2:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("QUARRY"))
			{
				TASK::SET_EXCLUSIVE_SCENARIO_GROUP("QUARRY");
			}
			break;
	}
	if (GlobalFunc_2951(iLocal_637, 1))
	{
		GlobalFunc_6533(&iLocal_637, 1);
		GlobalFunc_778(0);
	}
	GlobalFunc_5772(&(Local_1717.f_3008));
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, 0);
	}
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	GlobalFunc_699();
	GlobalFunc_2362(1);
	GlobalFunc_139();
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_876(&Local_1717, 0);
	PAD::ENABLE_CONTROL_ACTION(0, 75, 1);
	PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
	GlobalFunc_6531(&uLocal_611, 0, 0);
	if (bLocal_608)
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(0);
	}
	GlobalFunc_5848();
	SCRIPT::TERMINATE_THIS_THREAD();
}



void func_876(var uParam0, bool bParam1)//Position - 0x7323B
{
	char cVar0[64];
	
	StringCopy(&cVar0, "offroadrace", 64);
	switch (Local_46.f_11)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	if (bParam1)
	{
		func_189(uParam0);
	}
	else
	{
		func_878(uParam0);
	}
	func_877(uParam0);
	GlobalFunc_7632(0);
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	SCRIPT::SET_NO_LOADING_SCREEN(0);
	if (Local_46.f_11 != -1)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, &cVar0);
	}
	if (iLocal_1507)
	{
		GlobalFunc_164("SPR_MOVE_FAIL", 5000, 0);
		iLocal_1507 = 0;
	}
}

void func_877(var uParam0)//Position - 0x73305
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3588[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3588[iVar0]))
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3588[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_3588[iVar0], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_3588[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_878(var uParam0)//Position - 0x73371
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9))
		{
			if (uParam0->f_396[iVar0 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar0 /*203*/].f_10))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_396[iVar0 /*203*/].f_10));
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_396[iVar0 /*203*/].f_8);
				}
				else
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_396[iVar0 /*203*/].f_8, 1805844857) != 1)
					{
						TASK::TASK_STAND_STILL(uParam0->f_396[iVar0 /*203*/].f_8, -1);
					}
					PED::SET_PED_KEEP_TASK(uParam0->f_396[iVar0 /*203*/].f_8, 1);
				}
			}
		}
		iVar0++;
	}
}





