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
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	int iLocal_32[3] = { 0, 0, 0 };
	int iLocal_36[3] = { 0, 0, 0 };
	var uLocal_40 = 2;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	struct<16> Local_43[3];
	struct<22> Local_92[3];
	struct<22> Local_159[3];
	struct<3> Local_226[2];
	struct<3> Local_233[2];
	float fLocal_240[2] = { 0f, 0f };
	struct<7> Local_243[8];
	struct<7> Local_300[8];
	struct<3> Local_357[8];
	int iLocal_382[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_391[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_400[8];
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	float fLocal_442 = 0f;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	bool bLocal_451 = 0;
	int iLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	float fLocal_455 = 0f;
	float fLocal_456 = 0f;
	float fLocal_457 = 0f;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	struct<4> Local_472 = { 0, 0, 0, 0 } ;
	struct<15> Local_476 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<6> Local_533 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	struct<6> Local_541 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	struct<6> Local_549 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	struct<6> Local_557 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	struct<6> Local_565 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	struct<6> Local_573 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	struct<8> Local_581 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_589 = { 0, 0, 0, 0 } ;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	bool bLocal_608 = 0;
	float fLocal_609 = 0f;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	struct<3> Local_616 = { 0, 0, 0 } ;
	struct<3> Local_619 = { 0, 0, 0 } ;
	struct<3> Local_622 = { 0, 0, 0 } ;
	struct<3> Local_625 = { 0, 0, 0 } ;
	struct<3> Local_628 = { 0, 0, 0 } ;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	struct<3> Local_637 = { 0, 0, 0 } ;
	var uLocal_640 = 0;
	var uLocal_641 = 12;
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
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
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
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
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
	var uLocal_1025 = 0;
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
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
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
	var uLocal_1158 = 0;
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
	var uLocal_1229 = 0;
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
	var uLocal_1326 = 1065353216;
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
	int iLocal_1337 = 0;
	int iLocal_1338[3] = { 0, 0, 0 };
	int iLocal_1342[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_27 = 0.5f;
	fLocal_28 = 0.88f;
	fLocal_29 = 0.609375f;
	fLocal_30 = 0.266666f;
	fLocal_31 = 1.2f;
	iLocal_452 = 3;
	fLocal_455 = 80f;
	fLocal_456 = 140f;
	fLocal_457 = 180f;
	iLocal_463 = 1;
	iLocal_464 = 65;
	iLocal_465 = 49;
	iLocal_466 = 64;
	iLocal_612 = -1;
	iLocal_613 = -1;
	iLocal_614 = -1;
	MISC::SET_MINIGAME_IN_PROGRESS(1);
	GlobalFunc_7632(1);
	GlobalFunc_138();
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Yoga");
	bLocal_451 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_368();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	AUDIO::_0xE4E6DD5566D28C82();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	}
	while (!func_367())
	{
		SYSTEM::WAIT(0);
	}
	bLocal_608 = false;
	fLocal_609 = 1f;
	while (true)
	{
		if (iLocal_603 == 1)
		{
			func_366(&iLocal_469, &iLocal_470);
		}
		func_353();
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), 1);
		switch (iLocal_469)
		{
			case 0:
				if (func_341(iLocal_469, &iLocal_601, &iLocal_603, &uLocal_604, &uLocal_605))
				{
					func_340();
					iLocal_469 = 1;
				}
				break;
			
			case 1:
				if (func_341(iLocal_469, &iLocal_601, &iLocal_603, &uLocal_604, &uLocal_605))
				{
					if (func_327(&iLocal_602))
					{
						func_340();
						iLocal_469 = 2;
					}
				}
				break;
			
			case 2:
				if (func_341(iLocal_469, &iLocal_601, &iLocal_603, &uLocal_604, &uLocal_605))
				{
					if (func_326(&iLocal_602))
					{
						func_340();
						iLocal_469 = 3;
					}
				}
				break;
			
			case 3:
				if (func_341(iLocal_469, &iLocal_601, &iLocal_603, &uLocal_604, &uLocal_605))
				{
					if (func_325(&iLocal_602))
					{
						func_340();
						iLocal_469 = 4;
					}
				}
				break;
			
			case 4:
				if (func_341(iLocal_469, &iLocal_601, &iLocal_603, &uLocal_604, &uLocal_605))
				{
					if (func_280(&iLocal_602))
					{
						func_340();
						iLocal_469 = 5;
					}
				}
				break;
			
			case 5:
			case 6:
				if (func_341(iLocal_469, &iLocal_601, &iLocal_603, &uLocal_604, &uLocal_605))
				{
					if (func_9(&iLocal_602))
					{
						func_340();
						switch (iLocal_469)
						{
							case 5:
								iLocal_469 = 7;
								break;
							
							case 6:
								iLocal_469 = 8;
								break;
							}
						}
				}
				break;
			
			case 7:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), fLocal_609, 1);
				}
				GlobalFunc_7610(300, 0, 0);
				GlobalFunc_4907();
				func_368();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 8:
				func_368();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}









int func_9(int iParam0)//Position - 0xBAB
{
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			}
			*iParam0++;
			break;
		
		case 1:
			if (!bLocal_608)
			{
				STREAMING::REQUEST_ANIM_DICT("mini@yoga");
				STREAMING::REQUEST_MODEL(Local_541.f_1);
				STREAMING::REQUEST_MODEL(Local_573.f_1);
				STREAMING::REQUEST_ANIM_DICT("move_p_m_zero_idles@generic");
				GlobalFunc_5115(&uLocal_600);
				if ((((STREAMING::HAS_ANIM_DICT_LOADED("mini@yoga") && STREAMING::HAS_MODEL_LOADED(Local_541.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_573.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("move_p_m_zero_idles@generic")) && GlobalFunc_557(&uLocal_600))
				{
					*iParam0++;
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					*iParam0 = 30;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_613))
			{
				iLocal_613 = PED::CREATE_SYNCHRONIZED_SCENE(Local_622, Local_625, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_613, 1);
				if (func_276(&Local_541, 1))
				{
				}
				if (func_276(&Local_573, 1))
				{
					GlobalFunc_556(&uLocal_600, 1, 0);
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_613, "mini@yoga", "outro_1", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				uLocal_611 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_611, iLocal_613, "outro_1_cam", "mini@yoga");
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (iLocal_470 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_END"))
					{
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_541.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_573.f_1);
				STREAMING::NEW_LOAD_SCENE_START(Local_634, Local_637, 200f, 0);
				*iParam0++;
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_613))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_573) && !ENTITY::IS_ENTITY_DEAD(Local_573))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_573))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_613) >= 0.305f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_573, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_573, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_613) >= 1f)
				{
					if (iLocal_470 == 1)
					{
						func_13(0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_581.f_4, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_581.f_7);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_idles@generic", "fidget_impatient", 1000f, -1.5f, -1, 2, 0.445f, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							CAM::DESTROY_ALL_CAMS(0);
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							GlobalFunc_2943(&Local_573, 1);
							*iParam0 = 20;
						}
					}
					else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_614))
					{
						iLocal_614 = PED::CREATE_SYNCHRONIZED_SCENE(Local_628, Local_631, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_614, "mini@yoga", "outro_2", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_611, iLocal_614, "outro_2_cam", "mini@yoga");
						if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_END"))
						{
						}
						*iParam0 = 10;
					}
				}
			}
			break;
		
		case 10:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_614))
			{
				if (iLocal_606 == 1)
				{
					func_13(0);
					iLocal_606 = 0;
				}
				GlobalFunc_2943(&Local_541, 1);
				GlobalFunc_2943(&Local_573, 1);
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_614) >= 0.95f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 1785177548) == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_614) >= 1f)
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
					CAM::DESTROY_ALL_CAMS(0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::REMOVE_ANIM_DICT("mini@yoga");
					*iParam0 = 40;
				}
			}
			break;
		
		case 20:
			GlobalFunc_2943(&Local_541, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_idles@generic", "fidget_impatient", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_idles@generic", "fidget_impatient") >= 0.99f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						*iParam0 = 40;
					}
				}
			}
			break;
		
		case 30:
			if (bLocal_608 == 1)
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_581.f_4, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_581.f_7);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				GlobalFunc_2943(&Local_541, 1);
				GlobalFunc_2943(&Local_573, 1);
				if (iLocal_606 == 1)
				{
					func_13(0);
					iLocal_606 = 0;
				}
				*iParam0 = 40;
			}
			break;
		
		case 40:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				STREAMING::NEW_LOAD_SCENE_STOP();
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::REMOVE_ANIM_DICT("mini@yoga");
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				return 1;
			}
			break;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_613) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_614))
	{
		func_10(&Local_476, 0, 0f, 0.0005f);
	}
	return 0;
}

void func_10(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x113E
{
	if (iParam1 == 1)
	{
		switch (iParam0->f_7)
		{
			case 0:
				GRAPHICS::SET_TIMECYCLE_MODIFIER("STONED_CUTSCENE");
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(iParam0->f_50);
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				GlobalFunc_2906(&(iParam0->f_50), iParam0->f_51, 0.0001f, 1);
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(iParam0->f_50);
				break;
		}
	}
	else
	{
		GlobalFunc_2906(&(iParam0->f_50), fParam2, fParam3, 1);
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(iParam0->f_50);
	}
}



void func_13(int iParam0)//Position - 0x1267
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				func_130(PLAYER::PLAYER_PED_ID());
				break;
			
			case 1:
				func_14(PLAYER::PLAYER_PED_ID(), 0);
				break;
			}
	}
}

void func_14(int iParam0, int iParam1)//Position - 0x12A5
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			switch (iParam1)
			{
				case 0:
					func_15(iParam0, 12, 7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				}
			}
	}
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x12F5
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
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
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11231(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11119(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 1))
							{
								func_15(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_15(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_15(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_15(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_15(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_15(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_15(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11231(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11231(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11071(iParam0, iVar10, &iVar4, 0))
		{
			func_15(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11070(iParam0, iVar10, &iVar4))
		{
			func_15(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



















































































































void func_130(int iParam0)//Position - 0x1D022
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
		func_138(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11119(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11119(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11119(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11119(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_138(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








void func_138(int iParam0, var uParam1, bool bParam2)//Position - 0x1D904
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
			if (GlobalFunc_11071(iParam0, iVar1, &iVar2, 0))
			{
				func_15(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11070(iParam0, iVar1, &iVar2))
			{
				func_15(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			GlobalFunc_11290(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				GlobalFunc_11290(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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










































































































































int func_276(var uParam0, int iParam1)//Position - 0x48556
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, uParam0->f_2, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, uParam0->f_2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_5, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, iParam1);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	return 0;
}




int func_280(int iParam0)//Position - 0x4860E
{
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(uLocal_610))
			{
				uLocal_610 = CAM::CREATE_CAMERA(26379945, 1);
				if (iLocal_471 == 0)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, -782.8024f, 187.4389f, 73.32661f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, -787.033f, 186.8823f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_471 == 1)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, 2870.826f, 5943.485f, 356.9121f, 11.16632f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, 2867.668f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(uLocal_610, "HAND_SHAKE", 0.25f);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_FAR_CLIP(uLocal_610, 500f);
			}
			*iParam0++;
			break;
		
		case 1:
			if (iLocal_607 == 0)
			{
				if (Local_476.f_7 == 1)
				{
					if (Local_476.f_9 == 4)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
							{
								iLocal_607 = 1;
							}
						}
					}
				}
			}
			if (iLocal_615 == 0)
			{
				func_324(&Local_476);
				func_10(&Local_476, 1, 0, 981668463);
				if (func_283(&Local_476, 2, 1, 0, 0, 1, iLocal_471, 1))
				{
					func_282();
					func_281(&Local_476, 0, 0);
					iLocal_607 = 0;
					*iParam0++;
				}
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_281(int iParam0, int iParam1, int iParam2)//Position - 0x487D3
{
	*iParam0 = 0;
	iParam0->f_1 = { 0f, 0f, 0f };
	iParam0->f_4 = { 0f, 0f, 0f };
	iParam0->f_7 = 0;
	iParam0->f_9 = 0;
	iParam0->f_19 = 0;
	iParam0->f_18 = 0;
	iParam0->f_14 = 0;
	iParam0->f_16 = 0;
	iParam0->f_41 = 0;
	iParam0->f_15 = 0;
	iParam0->f_47 = 0;
	iParam0->f_53 = 0;
	if (iParam1 == 1)
	{
		iParam0->f_50 = 0f;
		iParam0->f_51 = 0f;
	}
	if (iParam2 == 1)
	{
		iParam0->f_54 = 0f;
	}
}

void func_282()//Position - 0x4883E
{
	if (Local_476.f_14 > 0)
	{
		fLocal_609 = (fLocal_609 - (0.125f * SYSTEM::TO_FLOAT(Local_476.f_14)));
		if (fLocal_609 < 0f)
		{
			fLocal_609 = 0f;
		}
	}
}

int func_283(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x48871
{
	*uParam0 = PLAYER::PLAYER_PED_ID();
	uParam0->f_8 = iParam1;
	uParam0->f_11 = "missfam5_yoga";
	func_323(uParam0);
	func_322();
	switch (uParam0->f_7)
	{
		case 0:
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				ENTITY::SET_ENTITY_HEALTH(*uParam0, PED::GET_PED_MAX_HEALTH(*uParam0));
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(*uParam0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("weapon_unarmed"), 1);
				if (uParam0->f_54 == 0f)
				{
					PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
					PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, 1, "blushing");
				}
				uParam0->f_1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
				uParam0->f_4 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
				uLocal_438 = unk_0x67D02A194A2FC2BD("yoga_buttons");
				if (MISC::IS_PC_VERSION())
				{
					uLocal_439 = unk_0x67D02A194A2FC2BD("yoga_keys");
				}
				if (func_367() && func_321())
				{
					func_320(iParam1, iParam6);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, 1);
					func_319(uParam0, 0);
					uParam0->f_13 = 0;
					uParam0->f_18 = 0;
					uParam0->f_24 = AUDIO::GET_SOUND_ID();
					uParam0->f_25 = AUDIO::GET_SOUND_ID();
					uParam0->f_26 = AUDIO::GET_SOUND_ID();
					uParam0->f_15 = 0;
					uParam0->f_41 = 0;
					uParam0->f_20 = 0;
					uParam0->f_21 = 0;
					uParam0->f_22 = 0;
					uParam0->f_23 = 0;
					uParam0->f_37 = 0;
					uParam0->f_38 = 0;
					uParam0->f_42 = 0;
					uParam0->f_43 = 0;
					uParam0->f_44 = 0;
					uParam0->f_45 = 0;
					uParam0->f_47 = 0;
					uParam0->f_7 = 1;
					uParam0->f_48 = 32f;
					uParam0->f_49 = 0;
					uParam0->f_52 = 0;
					iLocal_433 = 0;
					iLocal_434 = 0;
					iLocal_435 = 0;
				}
			}
			break;
		
		case 1:
			if (func_302(uParam0, iParam1, 3, iParam2, 1.15f, iParam3, iParam4))
			{
				uParam0->f_7 = 6;
			}
			else if (uParam0->f_9 == 6)
			{
				uParam0->f_7 = 2;
			}
			if (uParam0->f_9 != 4 && uParam0->f_9 != 5)
			{
				func_296(uParam0, iParam1);
			}
			break;
		
		case 2:
			AUDIO::STOP_SOUND(uParam0->f_24);
			AUDIO::STOP_SOUND(uParam0->f_25);
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_26, "YOGA_FAIL", *uParam0, "FAMILY_5_SOUNDS", 0, 0);
			uParam0->f_14++;
			uParam0->f_12 = 1;
			uParam0->f_17 = uParam0->f_16;
			uParam0->f_56 = 0;
			uParam0->f_13 = 0;
			uParam0->f_16 = 0;
			uParam0->f_15 = 0;
			uParam0->f_41 = 0;
			uParam0->f_22 = 0;
			uParam0->f_42 = 0;
			uParam0->f_43 = 0;
			uParam0->f_35 = 0;
			uParam0->f_36 = 0;
			uParam0->f_44 = 0;
			uParam0->f_45 = 0;
			uParam0->f_49 = 0;
			uParam0->f_52 = 0;
			uParam0->f_51 = 0f;
			uParam0->f_54 = GlobalFunc_253((uParam0->f_54 - 0.08f), 0f, 0.5f);
			uParam0->f_53 = 0;
			func_293(&uLocal_438);
			if (MISC::IS_PC_VERSION())
			{
				func_293(&uLocal_439);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
				PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, 0, "blushing");
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 7))
			{
				case 1:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_1", 0);
					break;
				
				case 2:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_2", 0);
					break;
				
				case 3:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_3", 0);
					break;
				
				case 4:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_4", 0);
					break;
				
				case 5:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_5", 0);
					break;
				
				case 6:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_6", 0);
					break;
			}
			func_292(uParam0);
			uParam0->f_19 = MISC::GET_GAME_TIMER();
			uParam0->f_18 = 0;
			HUD::CLEAR_HELP(1);
			iLocal_433 = 0;
			iLocal_434 = 0;
			iLocal_435 = 0;
			uParam0->f_7 = 3;
			break;
		
		case 3:
			if (GlobalFunc_2521(1000, uParam0->f_19))
			{
				uParam0->f_12 = 0;
			}
			if (iParam7 == 1)
			{
				if (GlobalFunc_2521(1000, uParam0->f_19))
				{
					if (uParam0->f_53 == 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									GlobalFunc_5122(*uParam0, "GENERIC_CURSE_MED", 6);
									break;
							}
							uParam0->f_53 = 1;
						}
					}
				}
			}
			if (GlobalFunc_2521(2500, uParam0->f_19))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				uParam0->f_7 = 4;
			}
			break;
		
		case 4:
			uLocal_438 = unk_0x67D02A194A2FC2BD("yoga_buttons");
			if (MISC::IS_PC_VERSION())
			{
				uLocal_439 = unk_0x67D02A194A2FC2BD("yoga_keys");
			}
			if (func_321())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_440))
				{
					if (func_288(*uParam0, 2))
					{
						func_319(uParam0, 0);
						uParam0->f_9 = 0;
						uParam0->f_7 = 1;
					}
				}
				else if (GlobalFunc_2521(3000, uParam0->f_19))
				{
					if (!PED::IS_PED_INJURED(*uParam0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
						func_319(uParam0, 1);
						uParam0->f_19 = MISC::GET_GAME_TIMER();
						uParam0->f_7 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_288(*uParam0, 2))
			{
				uParam0->f_9 = 0;
				uParam0->f_7 = 1;
			}
			break;
		
		case 6:
			if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
			{
				if (func_286())
				{
					HUD::CLEAR_HELP(1);
					iLocal_433 = 0;
					iLocal_434 = 0;
					iLocal_435 = 0;
				}
				GlobalFunc_8039(GlobalFunc_6674(*uParam0), 1, iParam5);
				GlobalFunc_8039(GlobalFunc_6674(*uParam0), 2, iParam5);
				GlobalFunc_8039(GlobalFunc_6674(*uParam0), 3, iParam5);
				AUDIO::STOP_SOUND(uParam0->f_26);
				AUDIO::STOP_SOUND(uParam0->f_24);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_26);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_24);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_25);
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, 0);
				func_293(&uLocal_438);
				if (MISC::IS_PC_VERSION())
				{
					func_293(&uLocal_439);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_438);
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_439);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_440))
				{
					CAM::SET_CAM_ACTIVE(uLocal_440, 0);
					CAM::DESTROY_CAM(uLocal_440, 0);
				}
				uParam0->f_7 = 7;
			}
			break;
		
		case 7:
			GlobalFunc_184(117, 1);
			return 1;
			break;
	}
	return 0;
}



int func_286()//Position - 0x48F80
{
	if ((GlobalFunc_74("STICKS") || GlobalFunc_74("INHALE_NEW")) || GlobalFunc_74("EXHALE_NEW"))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (GlobalFunc_74("STICKS_KM"))
		{
			return 1;
		}
	}
	return 0;
}


int func_288(int iParam0, int iParam1)//Position - 0x48FE1
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) == 1)
		{
			if (iParam1 < 2)
			{
				return 1;
			}
			if (TASK::GET_SEQUENCE_PROGRESS(iParam0) == (iParam1 - 1))
			{
				return 1;
			}
		}
	}
	return 0;
}




void func_292(var uParam0)//Position - 0x49270
{
	char* sVar0;
	var uVar1;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_to_a1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a1_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_to_a1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "start_to_a1") <= 0.4f)
			{
				sVar0 = "midway_fail_from_a1_to_start";
			}
			else
			{
				sVar0 = "a1_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a1_to_a2", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a2_pose", 3))
		{
			sVar0 = "a2_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a2_to_a3", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a3_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a2_to_a3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "a2_to_a3") <= 0.55f)
			{
				sVar0 = "a2_fail_to_start";
			}
			else
			{
				sVar0 = "a3_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a3_to_b4", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "b4_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "a3_to_b4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "a3_to_b4") <= 0.625f)
			{
				sVar0 = "midway_fail_from_a3_to_start";
			}
			else
			{
				sVar0 = "b4_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_to_c1", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c1_pose", 3))
		{
			sVar0 = "c1_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c1_to_c2", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c2_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c1_to_c2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "c1_to_c2") <= 0.45f)
			{
				sVar0 = "c1_fail_to_start";
			}
			else
			{
				sVar0 = "c2_fail_to_start";
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c2_to_c3", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c3_pose", 3))
		{
			sVar0 = "c3_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c3_to_c4", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c4_pose", 3))
		{
			sVar0 = "c4_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c4_to_c5", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c5_pose", 3))
		{
			sVar0 = "c5_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c5_to_c6", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c6_pose", 3))
		{
			sVar0 = "c6_fail_to_start";
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c6_to_c7", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c7_pose", 3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "c6_to_c7", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, uParam0->f_11, "c6_to_c7") <= 0.65f)
			{
				sVar0 = "c6_fail_to_start";
			}
			else
			{
				sVar0 = "c2_fail_to_start";
			}
		}
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, sVar0, uParam0->f_1, uParam0->f_4, 4f, -4f, -1, 528384, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "start_pose", uParam0->f_1, uParam0->f_4, 4f, -8f, -1, 528385, 0f, 2, 1);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
	}
}

void func_293(var uParam0)//Position - 0x4963D
{
	iLocal_436 = 0;
	iLocal_437 = 0;
	iLocal_443 = 255;
	iLocal_444 = 255;
	iLocal_445 = 255;
	iLocal_446 = 255;
	iLocal_447 = 255;
	iLocal_448 = 255;
	func_294(&uLocal_40);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "REMOVE_BUTTONS");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}

void func_294(var uParam0)//Position - 0x49683
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}


void func_296(var uParam0, int iParam1)//Position - 0x496D2
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	HUD::SET_WIDESCREEN_FORMAT(1);
	if (((GRAPHICS::GET_IS_WIDESCREEN() == 0 || MISC::GET_PROFILE_SETTING(206) == 8) || MISC::GET_PROFILE_SETTING(206) == 9) || MISC::GET_PROFILE_SETTING(206) == 10)
	{
		fLocal_28 = 0.825f;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_439, fLocal_27, fLocal_28, (fLocal_29 * fLocal_31), (fLocal_30 * fLocal_31), 100, 100, 100, 255, 0);
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_438, fLocal_27, fLocal_28, (fLocal_29 * fLocal_31), (fLocal_30 * fLocal_31), 100, 100, 100, 255, 0);
		}
	}
	if (uParam0->f_9 != 3)
	{
		if (uParam0->f_16 < iLocal_32[iParam1])
		{
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				func_300(uParam0, iParam1, &uLocal_439);
			}
			else
			{
				func_300(uParam0, iParam1, &uLocal_438);
			}
		}
	}
	else if (uParam0->f_9 == 3)
	{
		iLocal_443 = 255;
		iLocal_444 = 255;
		iLocal_445 = 255;
		iLocal_446 = 255;
		iLocal_447 = 255;
		iLocal_448 = 255;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			func_299(uParam0, &uLocal_439);
		}
		else
		{
			func_299(uParam0, &uLocal_438);
		}
	}
	if (iLocal_436 == 1)
	{
		if (iLocal_437 == 0)
		{
			func_298(&uLocal_438);
			if (MISC::IS_PC_VERSION())
			{
				func_298(&uLocal_439);
			}
			iLocal_437 = 1;
		}
		if (uParam0->f_9 == 2)
		{
			HUD::GET_HUD_COLOUR(129, &iVar0, &iVar1, &iVar2, &uVar3);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				func_297(uParam0, &uLocal_439, iVar0, iVar1, iVar2);
			}
			else
			{
				func_297(uParam0, &uLocal_438, iVar0, iVar1, iVar2);
			}
		}
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_438, "REMOVE_BUTTONS");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_439, "REMOVE_BUTTONS");
		}
		func_294(&uLocal_40);
	}
}

void func_297(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x49876
{
	if (PAD::IS_CONTROL_PRESSED(2, 228))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "BUTTON_PRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "BUTTON_DEPRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (PAD::IS_CONTROL_PRESSED(2, 229))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "BUTTON_PRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "BUTTON_DEPRESSED");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_BUTTON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_34);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_BUTTON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam0->f_34);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(50);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_298(var uParam0)//Position - 0x49966
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(*uParam0, "ADD_BUTTON_TO_LIST", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(*uParam0, "ADD_BUTTON_TO_LIST", SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_BUTTONS");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_INPUT_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_INPUT_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_299(var uParam0, var uParam1)//Position - 0x49A0E
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bLocal_451)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "HIDE_STICK_POINTER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "HIDE_STICK_POINTER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_28);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_443);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_444);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_445);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_446);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_447);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_448);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_300(var uParam0, int iParam1, var uParam2)//Position - 0x49B3D
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bLocal_451)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (GlobalFunc_74("STICKS"))
		{
			GlobalFunc_Display_Help_Text("STICKS_KM");
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (GlobalFunc_74("STICKS_KM"))
		{
			GlobalFunc_Display_Help_Text("STICKS");
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_92[iParam1 /*22*/][uParam0->f_16 /*3*/][0]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_92[iParam1 /*22*/][uParam0->f_16 /*3*/][1]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_443);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_444);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_445);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_446);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_447);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_448);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (uParam0->f_31 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "HIDE_STICK_POINTER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_HIGHLIGHT_ANGLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_29);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_32 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "HIDE_STICK_POINTER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_HIGHLIGHT_ANGLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_30);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}


int func_302(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)//Position - 0x49D1E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			if (func_312(uParam0, iParam1, uParam0->f_16, 0))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				func_311(uParam0, Local_43[iParam1 /*16*/][uParam0->f_16 * 2], Local_43[iParam1 /*16*/][uParam0->f_16 * 2 + 1]);
				uParam0->f_49 = 1;
				uParam0->f_52 = 1;
				uParam0->f_9 = 1;
			}
			else
			{
				if (iParam5 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (GlobalFunc_74("STICKS_KM"))
						{
							iVar0 = 1;
						}
					}
					if (!GlobalFunc_74("STICKS") && iVar0 == 0)
					{
						if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							if (!iLocal_433)
							{
								if (PAD::_IS_USING_KEYBOARD(2))
								{
									GlobalFunc_Display_Help_Text("STICKS_KM");
								}
								else
								{
									GlobalFunc_Display_Help_Text("STICKS");
								}
								iLocal_433 = 1;
								iLocal_434 = 0;
								iLocal_435 = 0;
							}
						}
					}
				}
				iLocal_436 = 0;
				iLocal_437 = 0;
			}
			break;
		
		case 1:
			if (func_312(uParam0, iParam1, uParam0->f_16, 1))
			{
				func_310(uParam0, iParam1, fParam4);
				if (func_288(*uParam0, 2))
				{
					SYSTEM::SETTIMERA(0);
					HUD::CLEAR_HELP(1);
					iLocal_436 = 1;
					uParam0->f_9 = 2;
					uParam0->f_10 = 3;
					uParam0->f_46 = MISC::GET_GAME_TIMER();
					if (iParam6 == 1 && uParam0->f_47 == 0)
					{
						uParam0->f_10 = 2;
					}
					uParam0->f_35 = 0;
					uParam0->f_36 = 0;
					uParam0->f_34 = 0f;
					uParam0->f_33 = 0f;
					uParam0->f_20 = 0;
					uParam0->f_22 = 0;
					uParam0->f_21 = 0;
					uParam0->f_23 = 0;
					uParam0->f_37 = 0;
					uParam0->f_38 = 0;
					uParam0->f_42 = 0;
					uParam0->f_43 = 0;
					uParam0->f_15 = 0;
					uParam0->f_41 = 0;
				}
			}
			else
			{
				uParam0->f_9 = 6;
			}
			break;
		
		case 2:
			if (func_312(uParam0, iParam1, uParam0->f_16, 1))
			{
				switch (uParam0->f_10)
				{
					case 2:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!GlobalFunc_74("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_434)
										{
											GlobalFunc_Display_Help_Text("INHALE_NEW");
											iLocal_433 = 0;
											iLocal_434 = 1;
											iLocal_435 = 0;
										}
									}
								}
							}
						}
						if (GlobalFunc_2521(2000, uParam0->f_46))
						{
							uParam0->f_47 = 1;
							uParam0->f_10 = 0;
						}
						break;
					
					case 3:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!GlobalFunc_74("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_434)
										{
											GlobalFunc_Display_Help_Text("INHALE_NEW");
											iLocal_433 = 0;
											iLocal_434 = 1;
											iLocal_435 = 0;
										}
									}
								}
							}
						}
						if (GlobalFunc_2521(500, uParam0->f_46))
						{
							uParam0->f_10 = 0;
						}
						break;
					
					case 0:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!GlobalFunc_74("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_434)
										{
											GlobalFunc_Display_Help_Text("INHALE_NEW");
											iLocal_433 = 0;
											iLocal_434 = 1;
											iLocal_435 = 0;
										}
									}
								}
							}
						}
						if (uParam0->f_35 == 0)
						{
							if (PAD::IS_CONTROL_PRESSED(2, 228) && PAD::IS_CONTROL_PRESSED(2, 229))
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
								{
									PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face", uParam0->f_11);
									AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_24, "YOGA_INHALE", *uParam0, "FAMILY_5_SOUNDS", 0, 0);
									uParam0->f_34 = 40f;
									uParam0->f_33 = 30f;
									uParam0->f_35 = 1;
									uParam0->f_36 = 0;
									uParam0->f_40 = 0;
									uParam0->f_37 = 0;
									uParam0->f_38 = 0;
									uParam0->f_42 = 0;
									uParam0->f_44 = 0;
									uParam0->f_45 = 0;
									uParam0->f_22 = 1;
									uParam0->f_23 = 0;
								}
							}
						}
						else
						{
							uParam0->f_34 = GlobalFunc_253((uParam0->f_34 + (uParam0->f_48 * SYSTEM::TIMESTEP())), 40f, 100f);
							uParam0->f_33 = GlobalFunc_253((uParam0->f_33 + (uParam0->f_48 * SYSTEM::TIMESTEP())), 30f, 90f);
							if ((AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25)) && (uParam0->f_33 == 90f && uParam0->f_34 == 100f))
							{
								if (uParam0->f_40 == 0)
								{
									uParam0->f_39 = (1200 + MISC::GET_RANDOM_INT_IN_RANGE(0, 401));
									uParam0->f_40 = MISC::GET_GAME_TIMER();
								}
								else if (GlobalFunc_2521(uParam0->f_39, uParam0->f_40))
								{
									uParam0->f_10 = 1;
									uParam0->f_21 = 0;
									uParam0->f_23 = 0;
									uParam0->f_55 = MISC::GET_GAME_TIMER();
									if (func_286())
									{
										HUD::CLEAR_HELP(1);
										SYSTEM::SETTIMERA(0);
										iLocal_433 = 0;
										iLocal_434 = 0;
										iLocal_435 = 0;
									}
								}
							}
						}
						if (func_309(uParam0, SYSTEM::FLOOR(uParam0->f_34), 40, 100))
						{
							uParam0->f_37 = 1;
						}
						else
						{
							uParam0->f_37 = 0;
						}
						break;
					
					case 1:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!GlobalFunc_74("EXHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_435)
										{
											GlobalFunc_Display_Help_Text("EXHALE_NEW");
											iLocal_433 = 0;
											iLocal_434 = 0;
											iLocal_435 = 1;
										}
									}
								}
							}
						}
						if (uParam0->f_36 == 0)
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 228) && !PAD::IS_CONTROL_PRESSED(2, 229))
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
								{
									iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
									switch (iVar1)
									{
										case 1:
										case 4:
										case 5:
											AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_25, "YOGA_EXHALE", *uParam0, "FAMILY_5_SOUNDS", 0, 0);
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_25, "Version", SYSTEM::TO_FLOAT(iVar1));
											PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face_exhale", uParam0->f_11);
											break;
										
										case 2:
										case 3:
											AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_25, "YOGA_EXHALE", *uParam0, "FAMILY_5_SOUNDS", 0, 0);
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_25, "Version", SYSTEM::TO_FLOAT(iVar1));
											PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face_exhale_oow", uParam0->f_11);
											break;
									}
									uParam0->f_34 = 100f;
									uParam0->f_33 = 90f;
									uParam0->f_36 = 1;
									uParam0->f_35 = 0;
									uParam0->f_40 = 0;
									uParam0->f_38 = 0;
									uParam0->f_23 = 1;
									uParam0->f_45 = 0;
								}
							}
							else if (GlobalFunc_2521(15000, uParam0->f_55))
							{
								uParam0->f_9 = 6;
							}
						}
						else
						{
							uParam0->f_34 = GlobalFunc_253((uParam0->f_34 - (uParam0->f_48 * SYSTEM::TIMESTEP())), 40f, 100f);
							uParam0->f_33 = GlobalFunc_253((uParam0->f_33 - (uParam0->f_48 * SYSTEM::TIMESTEP())), 30f, 90f);
							if ((AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25)) && (uParam0->f_33 == 30f && uParam0->f_34 == 40f))
							{
								if (uParam0->f_40 == 0)
								{
									uParam0->f_39 = (500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 251));
									uParam0->f_40 = MISC::GET_GAME_TIMER();
								}
								else if (GlobalFunc_2521(uParam0->f_39, uParam0->f_40))
								{
									uParam0->f_15++;
									uParam0->f_10 = 0;
									uParam0->f_20 = 0;
									uParam0->f_22 = 0;
								}
							}
						}
						if (func_305(uParam0, SYSTEM::FLOOR(uParam0->f_33), SYSTEM::FLOOR(uParam0->f_34), 40, 100))
						{
							uParam0->f_38 = 1;
							if (uParam0->f_37 == 1 && uParam0->f_38 == 1)
							{
								if (uParam0->f_42 == 0)
								{
									uParam0->f_41++;
									uParam0->f_42 = 1;
								}
								uParam0->f_43 = 1;
							}
						}
						if (uParam0->f_43 == 1)
						{
							uParam0->f_16++;
							uParam0->f_54 = GlobalFunc_253((uParam0->f_54 + 0.035f), uParam0->f_54, 0.5f);
							uParam0->f_51 = GlobalFunc_253((uParam0->f_51 + 0.01035f), uParam0->f_51, 0.145f);
							if (!PED::IS_PED_INJURED(*uParam0))
							{
								PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
								PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, 0, "blushing");
							}
							uParam0->f_44 = 0;
							uParam0->f_45 = 0;
							if (uParam0->f_16 == iLocal_32[iParam1])
							{
								if (iParam3 == 0)
								{
									uParam0->f_9 = 5;
								}
								else if (iParam3 == 1)
								{
									func_311(uParam0, Local_43[iParam1 /*16*/][(iLocal_36[iParam1] - 1)], "START_POSE");
									uParam0->f_49 = 1;
									uParam0->f_9 = 4;
								}
							}
							else
							{
								uParam0->f_15 = 0;
								uParam0->f_41 = 0;
								iLocal_436 = 0;
								iLocal_437 = 0;
								uParam0->f_27 = Local_92[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0];
								uParam0->f_28 = Local_92[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1];
								uParam0->f_9 = 3;
							}
						}
						else if (uParam0->f_15 == iParam2)
						{
							uParam0->f_9 = 6;
						}
						break;
				}
			}
			else
			{
				uParam0->f_9 = 6;
			}
			break;
		
		case 3:
			if (func_286())
			{
				HUD::CLEAR_HELP(1);
				iLocal_433 = 0;
				iLocal_434 = 0;
				iLocal_435 = 0;
			}
			uParam0->f_31 = 1;
			uParam0->f_32 = 1;
			func_303(Local_92[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0], Local_92[iParam1 /*22*/][uParam0->f_16 /*3*/][0], Local_159[iParam1 /*22*/][uParam0->f_16 /*3*/][0], &(uParam0->f_27), 4);
			func_303(Local_92[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1], Local_92[iParam1 /*22*/][uParam0->f_16 /*3*/][1], Local_159[iParam1 /*22*/][uParam0->f_16 /*3*/][1], &(uParam0->f_28), 4);
			if (uParam0->f_27 == Local_92[iParam1 /*22*/][uParam0->f_16 /*3*/][0] && uParam0->f_28 == Local_92[iParam1 /*22*/][uParam0->f_16 /*3*/][1])
			{
				uParam0->f_9 = 0;
			}
			break;
		
		case 4:
			if (func_286())
			{
				HUD::CLEAR_HELP(1);
				iLocal_433 = 0;
				iLocal_434 = 0;
				iLocal_435 = 0;
			}
			func_310(uParam0, iParam1, fParam4);
			if (func_288(*uParam0, 2))
			{
				HUD::CLEAR_HELP(1);
				uParam0->f_9 = 5;
			}
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_303(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4)//Position - 0x4A679
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = uParam1;
	if (iVar0 < iVar1)
	{
		if (iParam2 == 0)
		{
			*uParam3 = GlobalFunc_254((*uParam3 + iParam4), iVar0, iVar1);
		}
		else if (iParam2 == 1)
		{
			if (*uParam3 == iVar0)
			{
				*uParam3 = (360 + *uParam3);
			}
			*uParam3 = GlobalFunc_254((*uParam3 - iParam4), iVar1, (360 + iVar0));
		}
	}
	else if (iVar0 >= iVar1)
	{
		if (iParam2 == 0)
		{
			*uParam3 = GlobalFunc_254((*uParam3 + iParam4), iVar0, (360 + iVar1));
			if (*uParam3 == (360 + iVar1))
			{
				*uParam3 = iVar1;
			}
		}
		else if (iParam2 == 1)
		{
			*uParam3 = GlobalFunc_254((*uParam3 - iParam4), iVar1, iVar0);
		}
	}
}


int func_305(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4A74C
{
	int iVar0;
	int iVar1;
	
	iVar0 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 228) * 255f));
	iVar1 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 229) * 255f));
	if (iVar0 > 0 && iVar1 > 0)
	{
		uParam0->f_13 = GlobalFunc_254(func_307(iVar0, iVar1), iParam3, iParam4);
	}
	else
	{
		uParam0->f_13 = iParam3;
	}
	if (uParam0->f_23 == 1)
	{
		if (iParam2 == iParam3)
		{
			if (func_306(uParam0->f_13, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_306(int iParam0, int iParam1, int iParam2)//Position - 0x4A7CA
{
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0, int iParam1)//Position - 0x4A7E9
{
	return SYSTEM::CEIL(((SYSTEM::TO_FLOAT((func_308(iParam0) + func_308(iParam1))) / 200f) * 100f));
}

int func_308(int iParam0)//Position - 0x4A812
{
	return SYSTEM::CEIL(((100f / 255f) * SYSTEM::TO_FLOAT(iParam0)));
}

int func_309(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A830
{
	int iVar0;
	int iVar1;
	
	iVar0 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 228) * 255f));
	iVar1 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 229) * 255f));
	if (iVar0 > 0 && iVar1 > 0)
	{
		uParam0->f_13 = GlobalFunc_254(func_307(iVar0, iVar1), iParam2, iParam3);
	}
	else
	{
		uParam0->f_13 = iParam2;
	}
	if (uParam0->f_22 == 1)
	{
		if (iParam1 == iParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_310(var uParam0, int iParam1, var uParam2)//Position - 0x4A89F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_36[iParam1] - 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, Local_43[iParam1 /*16*/][iVar0], 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(*uParam0, uParam0->f_11, Local_43[iParam1 /*16*/][iVar0], uParam2);
		}
		iVar0++;
	}
}

void func_311(var uParam0, char* sParam1, char* sParam2)//Position - 0x4A8F3
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, sParam1, uParam0->f_1, uParam0->f_4, 4f, -4f, -1, 528384, 0f, 2, 1);
		TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, sParam2, uParam0->f_1, uParam0->f_4, 4f, -4f, -1, 528385, 0f, 2, 1);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_312(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A971
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	fLocal_442 = 0f;
	iLocal_443 = 255;
	iLocal_444 = 255;
	iLocal_445 = 255;
	iLocal_446 = 255;
	iLocal_447 = 255;
	iLocal_448 = 255;
	iVar1 = 0;
	iVar2 = 0;
	if (func_314(&(uParam0->f_29), &(uParam0->f_31), 0, Local_92[iParam1 /*22*/][iParam2 /*3*/][0], iParam3))
	{
		fLocal_442 = (fLocal_442 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_443, &iLocal_444, &iLocal_445, &uVar0);
		iVar1 = 1;
	}
	if (func_314(&(uParam0->f_30), &(uParam0->f_32), 1, Local_92[iParam1 /*22*/][iParam2 /*3*/][1], iParam3))
	{
		fLocal_442 = (fLocal_442 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_446, &iLocal_447, &iLocal_448, &uVar0);
		iVar2 = 1;
	}
	fLocal_442 = func_313(fLocal_442, 100f);
	PAD::SET_PAD_SHAKE(0, 10, SYSTEM::FLOOR(fLocal_442));
	if (iVar1 && iVar2)
	{
		return 1;
	}
	return 0;
}

float func_313(float fParam0, float fParam1)//Position - 0x4AA50
{
	if (fParam0 == fParam1)
	{
		return fParam0;
	}
	else if (fParam0 > fParam1)
	{
		return fParam1;
	}
	else if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam0;
}

int func_314(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4AA87
{
	*uParam0 = func_317(iParam2);
	*uParam1 = func_315(iParam2);
	if (*uParam1 == 0)
	{
		switch (iParam4)
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						if (*uParam0 >= 345 || *uParam0 <= 15)
						{
							return 1;
						}
						break;
					
					case 45:
						if (*uParam0 >= 30 && *uParam0 <= 60)
						{
							return 1;
						}
						break;
					
					case 90:
						if (*uParam0 >= 75 && *uParam0 <= 105)
						{
							return 1;
						}
						break;
					
					case 135:
						if (*uParam0 >= 120 && *uParam0 <= 150)
						{
							return 1;
						}
						break;
					
					case 180:
						if (*uParam0 >= 165 && *uParam0 <= 195)
						{
							return 1;
						}
						break;
					
					case 225:
						if (*uParam0 >= 210 && *uParam0 <= 240)
						{
							return 1;
						}
						break;
					
					case 270:
						if (*uParam0 >= 255 && *uParam0 <= 285)
						{
							return 1;
						}
						break;
					
					case 315:
						if (*uParam0 >= 300 && *uParam0 <= 330)
						{
							return 1;
						}
						break;
				}
				break;
			
			case 1:
				switch (iParam3)
				{
					case 0:
						if (*uParam0 >= 305 || *uParam0 <= 55)
						{
							return 1;
						}
						break;
					
					case 45:
						if (*uParam0 >= 350 || *uParam0 <= 100)
						{
							return 1;
						}
						break;
					
					case 90:
						if (*uParam0 >= 35 && *uParam0 <= 145)
						{
							return 1;
						}
						break;
					
					case 135:
						if (*uParam0 >= 80 && *uParam0 <= 190)
						{
							return 1;
						}
						break;
					
					case 180:
						if (*uParam0 >= 125 && *uParam0 <= 235)
						{
							return 1;
						}
						break;
					
					case 225:
						if (*uParam0 >= 170 && *uParam0 <= 280)
						{
							return 1;
						}
						break;
					
					case 270:
						if (*uParam0 >= 215 && *uParam0 <= 325)
						{
							return 1;
						}
						break;
					
					case 315:
						if (*uParam0 >= 260 || *uParam0 <= 10)
						{
							return 1;
						}
						break;
				}
				break;
			}
	}
	return 0;
}

int func_315(int iParam0)//Position - 0x4ACED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	var uVar5;
	var uVar6;
	
	GlobalFunc_612(&iVar0, &iVar1, &iVar2, &iVar3, 0);
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (bLocal_451)
		{
			uVar5 = iVar2;
			uVar6 = iVar3;
			iVar2 = iVar0;
			iVar3 = iVar1;
			iVar0 = uVar5;
			iVar1 = uVar6;
		}
	}
	switch (iParam0)
	{
		case 0:
			if (((PAD::_IS_USING_KEYBOARD(2) && iLocal_449 != 0) && iLocal_450 != 0) && bLocal_451 == 1)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar0), IntToFloat(iVar1), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (((PAD::_IS_USING_KEYBOARD(2) && iLocal_449 != 0) && iLocal_450 != 0) && bLocal_451 == 0)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar2), IntToFloat(iVar3), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_317(int iParam0)//Position - 0x4AEA3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	
	GlobalFunc_255(&iVar2, &iVar3, &iVar4, &iVar5, 0, 0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bLocal_451)
		{
			uVar6 = iVar4;
			uVar7 = iVar5;
			iVar4 = iVar2;
			iVar5 = iVar3;
			iVar2 = uVar6;
			iVar3 = uVar7;
			iVar2 = (iVar2 / 4);
			iVar3 = (iVar3 / 4);
			if (iVar2 == 0 || iVar3 == 0)
			{
				iVar2 = iLocal_449;
				iVar3 = iLocal_450;
			}
			iLocal_449 = iVar2;
			iLocal_450 = iVar3;
		}
		else
		{
			iVar4 = (iVar4 / 4);
			iVar5 = (iVar5 / 4);
			if (iVar4 == 0 || iVar5 == 0)
			{
				iVar4 = iLocal_449;
				iVar5 = iLocal_450;
			}
			iLocal_449 = iVar4;
			iLocal_450 = iVar5;
		}
	}
	iVar0 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3)));
	iVar1 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar4), SYSTEM::TO_FLOAT(iVar5)));
	if (iVar2 < 0)
	{
		iVar0 = (180 + (180 - iVar0));
	}
	if (iVar4 < 0)
	{
		iVar1 = (180 + (180 - iVar1));
	}
	switch (iParam0)
	{
		case 0:
			return iVar0;
			break;
		
		case 1:
			return iVar1;
			break;
	}
	return 0;
}


void func_319(var uParam0, int iParam1)//Position - 0x4B0C2
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "start_pose", 3))
		{
			if (iParam1 == 0)
			{
				TASK::TASK_PLAY_ANIM(*uParam0, uParam0->f_11, "start_pose", 4f, -8f, -1, 1, 0f, 0, 1, 0);
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
				{
					case 0:
						TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "fail_to_start_a", uParam0->f_1, uParam0->f_4, 1000f, -4f, -1, 528384, 0f, 2, 1);
						break;
					
					case 1:
						TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "fail_to_start_b", uParam0->f_1, uParam0->f_4, 1000f, -4f, -1, 528384, 0f, 2, 1);
						break;
					
					case 2:
						TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "fail_to_start_c", uParam0->f_1, uParam0->f_4, 1000f, -4f, -1, 528384, 0f, 2, 1);
						break;
				}
				TASK::TASK_PLAY_ANIM_ADVANCED(0, uParam0->f_11, "start_pose", uParam0->f_1, uParam0->f_4, 4f, -8f, -1, 528385, 0f, 2, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
				PED::PLAY_FACIAL_ANIM(*uParam0, "fail_face", uParam0->f_11);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(*uParam0, 0, 0);
			}
		}
	}
}

void func_320(int iParam0, int iParam1)//Position - 0x4B222
{
	iLocal_32[0] = 3;
	iLocal_32[1] = 4;
	iLocal_32[2] = 7;
	iLocal_36[0] = 7;
	Local_43[0 /*16*/][0] = "start_to_a1";
	Local_43[0 /*16*/][1] = "a1_pose";
	Local_43[0 /*16*/][2] = "a1_to_a2";
	Local_43[0 /*16*/][3] = "a2_pose";
	Local_43[0 /*16*/][4] = "a2_to_a3";
	Local_43[0 /*16*/][5] = "a3_pose";
	Local_43[0 /*16*/][6] = "a3_to_start";
	iLocal_36[1] = 9;
	Local_43[1 /*16*/][0] = "start_to_a1";
	Local_43[1 /*16*/][1] = "a1_pose";
	Local_43[1 /*16*/][2] = "a1_to_a2";
	Local_43[1 /*16*/][3] = "a2_pose";
	Local_43[1 /*16*/][4] = "a2_to_a3";
	Local_43[1 /*16*/][5] = "a3_pose";
	Local_43[1 /*16*/][6] = "a3_to_b4";
	Local_43[1 /*16*/][7] = "b4_pose";
	Local_43[1 /*16*/][8] = "b4_to_start";
	iLocal_36[2] = 15;
	Local_43[2 /*16*/][0] = "start_to_c1";
	Local_43[2 /*16*/][1] = "c1_pose";
	Local_43[2 /*16*/][2] = "c1_to_c2";
	Local_43[2 /*16*/][3] = "c2_pose";
	Local_43[2 /*16*/][4] = "c2_to_c3";
	Local_43[2 /*16*/][5] = "c3_pose";
	Local_43[2 /*16*/][6] = "c3_to_c4";
	Local_43[2 /*16*/][7] = "c4_pose";
	Local_43[2 /*16*/][8] = "c4_to_c5";
	Local_43[2 /*16*/][9] = "c5_pose";
	Local_43[2 /*16*/][10] = "c5_to_c6";
	Local_43[2 /*16*/][11] = "c6_pose";
	Local_43[2 /*16*/][12] = "c6_to_c7";
	Local_43[2 /*16*/][13] = "c7_pose";
	Local_43[2 /*16*/][14] = "c7_to_start";
	Local_92[0 /*22*/][0 /*3*/][0] = 180;
	Local_92[0 /*22*/][0 /*3*/][1] = 180;
	Local_159[0 /*22*/][0 /*3*/][0] = 0;
	Local_159[0 /*22*/][0 /*3*/][1] = 0;
	Local_92[0 /*22*/][1 /*3*/][0] = 270;
	Local_92[0 /*22*/][1 /*3*/][1] = 90;
	Local_159[0 /*22*/][1 /*3*/][0] = 0;
	Local_159[0 /*22*/][1 /*3*/][1] = 1;
	Local_92[0 /*22*/][2 /*3*/][0] = 315;
	Local_92[0 /*22*/][2 /*3*/][1] = 135;
	Local_159[0 /*22*/][2 /*3*/][0] = 0;
	Local_159[0 /*22*/][2 /*3*/][1] = 0;
	Local_92[1 /*22*/][0 /*3*/][0] = 225;
	Local_92[1 /*22*/][0 /*3*/][1] = 135;
	Local_159[1 /*22*/][0 /*3*/][0] = 0;
	Local_159[1 /*22*/][0 /*3*/][1] = 0;
	Local_92[1 /*22*/][1 /*3*/][0] = 315;
	Local_92[1 /*22*/][1 /*3*/][1] = 45;
	Local_159[1 /*22*/][1 /*3*/][0] = 0;
	Local_159[1 /*22*/][1 /*3*/][1] = 1;
	Local_92[1 /*22*/][2 /*3*/][0] = 270;
	Local_92[1 /*22*/][2 /*3*/][1] = 135;
	Local_159[1 /*22*/][2 /*3*/][0] = 1;
	Local_159[1 /*22*/][2 /*3*/][1] = 0;
	Local_92[1 /*22*/][3 /*3*/][0] = 225;
	Local_92[1 /*22*/][3 /*3*/][1] = 0;
	Local_159[1 /*22*/][3 /*3*/][0] = 1;
	Local_159[1 /*22*/][3 /*3*/][1] = 1;
	Local_92[2 /*22*/][0 /*3*/][0] = 270;
	Local_92[2 /*22*/][0 /*3*/][1] = 90;
	Local_159[2 /*22*/][0 /*3*/][0] = 0;
	Local_159[2 /*22*/][0 /*3*/][1] = 0;
	Local_92[2 /*22*/][1 /*3*/][0] = 180;
	Local_92[2 /*22*/][1 /*3*/][1] = 180;
	Local_159[2 /*22*/][1 /*3*/][0] = 1;
	Local_159[2 /*22*/][1 /*3*/][1] = 0;
	Local_92[2 /*22*/][2 /*3*/][0] = 225;
	Local_92[2 /*22*/][2 /*3*/][1] = 135;
	Local_159[2 /*22*/][2 /*3*/][0] = 0;
	Local_159[2 /*22*/][2 /*3*/][1] = 1;
	Local_92[2 /*22*/][3 /*3*/][0] = 180;
	Local_92[2 /*22*/][3 /*3*/][1] = 180;
	Local_159[2 /*22*/][3 /*3*/][0] = 1;
	Local_159[2 /*22*/][3 /*3*/][1] = 0;
	Local_92[2 /*22*/][4 /*3*/][0] = 0;
	Local_92[2 /*22*/][4 /*3*/][1] = 0;
	Local_159[2 /*22*/][4 /*3*/][0] = 0;
	Local_159[2 /*22*/][4 /*3*/][1] = 1;
	Local_92[2 /*22*/][5 /*3*/][0] = 225;
	Local_92[2 /*22*/][5 /*3*/][1] = 135;
	Local_159[2 /*22*/][5 /*3*/][0] = 1;
	Local_159[2 /*22*/][5 /*3*/][1] = 0;
	Local_92[2 /*22*/][6 /*3*/][0] = 45;
	Local_92[2 /*22*/][6 /*3*/][1] = 315;
	Local_159[2 /*22*/][6 /*3*/][0] = 0;
	Local_159[2 /*22*/][6 /*3*/][1] = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Local_243[0 /*7*/][0 /*3*/] = { -788.3289f, 187.7899f, 72.75751f };
					Local_300[0 /*7*/][0 /*3*/] = { -2.995436f, 0.021138f, 119.4073f };
					Local_357[0 /*3*/][0] = 38.84372f;
					Local_243[0 /*7*/][1 /*3*/] = { -788.3289f, 187.7899f, 72.75751f };
					Local_300[0 /*7*/][1 /*3*/] = { -2.995436f, 0.021138f, 119.4073f };
					Local_357[0 /*3*/][1] = 38.84372f;
					iLocal_391[0] = 0;
					Local_400[0 /*4*/][0] = 0;
					Local_400[0 /*4*/][1] = 0;
					Local_400[0 /*4*/][2] = 0;
					Local_243[1 /*7*/][0 /*3*/] = { -777.0726f, 178.2583f, 73.16133f };
					Local_300[1 /*7*/][0 /*3*/] = { 0.894393f, 0.026403f, 59.98003f };
					Local_357[1 /*3*/][0] = 38.4725f;
					Local_243[1 /*7*/][1 /*3*/] = { -777.0726f, 178.2583f, 73.16133f };
					Local_300[1 /*7*/][1 /*3*/] = { 0.894393f, 0.026403f, 59.98003f };
					Local_357[1 /*3*/][1] = 38.4725f;
					iLocal_391[1] = 0;
					Local_400[1 /*4*/][0] = 0;
					Local_400[1 /*4*/][1] = 0;
					Local_400[1 /*4*/][2] = 0;
					Local_243[2 /*7*/][0 /*3*/] = { -789.1757f, 189.2423f, 72.39192f };
					Local_300[2 /*7*/][0 /*3*/] = { 7.114471f, 0.02728f, 162.3243f };
					Local_357[2 /*3*/][0] = 39.13688f;
					Local_243[2 /*7*/][1 /*3*/] = { -789.1757f, 189.2423f, 72.39192f };
					Local_300[2 /*7*/][1 /*3*/] = { 7.114471f, 0.02728f, 162.3243f };
					Local_357[2 /*3*/][1] = 39.13688f;
					iLocal_391[2] = 0;
					Local_400[2 /*4*/][0] = 1;
					Local_400[2 /*4*/][1] = 0;
					Local_400[2 /*4*/][2] = 1;
					Local_243[3 /*7*/][0 /*3*/] = { -789.8099f, 186.5717f, 73.31319f };
					Local_300[3 /*7*/][0 /*3*/] = { -4.724632f, -0.029824f, 123.2596f };
					Local_357[3 /*3*/][0] = 36.66097f;
					Local_243[3 /*7*/][1 /*3*/] = { -789.8099f, 186.5717f, 73.31319f };
					Local_300[3 /*7*/][1 /*3*/] = { 2.853551f, -0.029824f, 107.2391f };
					Local_357[3 /*3*/][1] = 36.66097f;
					iLocal_382[3] = 2500;
					iLocal_391[3] = 0;
					Local_400[3 /*4*/][0] = 1;
					Local_400[3 /*4*/][1] = 1;
					Local_400[3 /*4*/][2] = 1;
					break;
				
				case 1:
					Local_243[0 /*7*/][0 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_300[0 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_357[0 /*3*/][0] = 39.35555f;
					Local_243[0 /*7*/][1 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_300[0 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_357[0 /*3*/][1] = 39.35555f;
					iLocal_391[0] = 0;
					Local_400[0 /*4*/][0] = 0;
					Local_400[0 /*4*/][1] = 0;
					Local_400[0 /*4*/][2] = 0;
					Local_243[1 /*7*/][0 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_300[1 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_357[1 /*3*/][0] = 39.35555f;
					Local_243[1 /*7*/][1 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_300[1 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_357[1 /*3*/][1] = 39.35555f;
					iLocal_391[1] = 0;
					Local_400[1 /*4*/][0] = 0;
					Local_400[1 /*4*/][1] = 0;
					Local_400[1 /*4*/][2] = 0;
					Local_243[2 /*7*/][0 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_300[2 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_357[2 /*3*/][0] = 39.35555f;
					Local_243[2 /*7*/][1 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_300[2 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_357[2 /*3*/][1] = 39.35555f;
					iLocal_391[2] = 0;
					Local_400[2 /*4*/][0] = 1;
					Local_400[2 /*4*/][1] = 0;
					Local_400[2 /*4*/][2] = 1;
					Local_243[3 /*7*/][0 /*3*/] = { 2863.847f, 5945.488f, 357.8748f };
					Local_300[3 /*7*/][0 /*3*/] = { 8.808952f, 0.000863f, 79.57675f };
					Local_357[3 /*3*/][0] = 39.35555f;
					Local_243[3 /*7*/][1 /*3*/] = { 2863.368f, 5945.402f, 357.9596f };
					Local_300[3 /*7*/][1 /*3*/] = { 14.60808f, 0.000863f, 76.6072f };
					Local_357[3 /*3*/][1] = 39.35555f;
					iLocal_382[3] = 3500;
					iLocal_391[3] = 0;
					Local_400[3 /*4*/][0] = 1;
					Local_400[3 /*4*/][1] = 1;
					Local_400[3 /*4*/][2] = 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					Local_243[0 /*7*/][0 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_300[0 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_357[0 /*3*/][0] = 39.35555f;
					Local_243[0 /*7*/][1 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_300[0 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_357[0 /*3*/][1] = 39.35555f;
					iLocal_391[0] = 0;
					Local_400[0 /*4*/][0] = 1;
					Local_400[0 /*4*/][1] = 0;
					Local_400[0 /*4*/][2] = 0;
					Local_243[1 /*7*/][0 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_300[1 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_357[1 /*3*/][0] = 39.35555f;
					Local_243[1 /*7*/][1 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_300[1 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_357[1 /*3*/][1] = 39.35555f;
					iLocal_391[1] = 0;
					Local_400[1 /*4*/][0] = 1;
					Local_400[1 /*4*/][1] = 0;
					Local_400[1 /*4*/][2] = 1;
					Local_243[2 /*7*/][0 /*3*/] = { -788.8512f, 184.0266f, 72.53404f };
					Local_300[2 /*7*/][0 /*3*/] = { 4.066512f, -0.006667f, 50.29233f };
					Local_357[2 /*3*/][0] = 35.45877f;
					Local_243[2 /*7*/][1 /*3*/] = { -788.8512f, 184.0266f, 72.53404f };
					Local_300[2 /*7*/][1 /*3*/] = { 4.066512f, -0.006667f, 50.29233f };
					Local_357[2 /*3*/][1] = 35.45877f;
					iLocal_391[2] = 1500;
					Local_400[2 /*4*/][0] = 1;
					Local_400[2 /*4*/][1] = 0;
					Local_400[2 /*4*/][2] = 1;
					Local_243[3 /*7*/][0 /*3*/] = { -789.0597f, 187.8396f, 72.44362f };
					Local_300[3 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_357[3 /*3*/][0] = 38.76796f;
					Local_243[3 /*7*/][1 /*3*/] = { -789.0597f, 187.8396f, 72.44362f };
					Local_300[3 /*7*/][1 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_357[3 /*3*/][1] = 38.76796f;
					iLocal_391[3] = 1500;
					Local_400[3 /*4*/][0] = 1;
					Local_400[3 /*4*/][1] = 0;
					Local_400[3 /*4*/][2] = 1;
					Local_243[4 /*7*/][0 /*3*/] = { -789.0597f, 187.8396f, 72.44362f };
					Local_300[4 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_357[4 /*3*/][0] = 38.76796f;
					Local_243[4 /*7*/][1 /*3*/] = { -790.0527f, 187.8779f, 73.24776f };
					Local_300[4 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.7771f };
					Local_357[4 /*3*/][1] = 39.35555f;
					iLocal_382[4] = 5000;
					iLocal_391[4] = 0;
					Local_400[4 /*4*/][0] = 1;
					Local_400[4 /*4*/][1] = 1;
					Local_400[4 /*4*/][2] = 1;
					break;
				
				case 1:
					Local_243[0 /*7*/][0 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_300[0 /*7*/][0 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_357[0 /*3*/][0] = 39.35555f;
					Local_243[0 /*7*/][1 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_300[0 /*7*/][1 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_357[0 /*3*/][1] = 39.35555f;
					iLocal_391[0] = 0;
					Local_400[0 /*4*/][0] = 1;
					Local_400[0 /*4*/][1] = 0;
					Local_400[0 /*4*/][2] = 0;
					Local_243[1 /*7*/][0 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_300[1 /*7*/][0 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_357[1 /*3*/][0] = 39.35555f;
					Local_243[1 /*7*/][1 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_300[1 /*7*/][1 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_357[1 /*3*/][1] = 39.35555f;
					iLocal_391[1] = 0;
					Local_400[1 /*4*/][0] = 1;
					Local_400[1 /*4*/][1] = 0;
					Local_400[1 /*4*/][2] = 1;
					Local_243[2 /*7*/][0 /*3*/] = { 2867.482f, 5947.726f, 358.184f };
					Local_300[2 /*7*/][0 /*3*/] = { 2.762805f, -0.036948f, 111.4235f };
					Local_357[2 /*3*/][0] = 39.35555f;
					Local_243[2 /*7*/][1 /*3*/] = { 2867.482f, 5947.726f, 358.184f };
					Local_300[2 /*7*/][1 /*3*/] = { 2.762805f, -0.036948f, 111.4235f };
					Local_357[2 /*3*/][1] = 39.35555f;
					iLocal_391[2] = 1500;
					Local_400[2 /*4*/][0] = 1;
					Local_400[2 /*4*/][1] = 0;
					Local_400[2 /*4*/][2] = 1;
					Local_243[3 /*7*/][0 /*3*/] = { 2863.663f, 5943.965f, 357.336f };
					Local_300[3 /*7*/][0 /*3*/] = { 12.7507f, 0.011422f, 62.85451f };
					Local_357[3 /*3*/][0] = 39.35555f;
					Local_243[3 /*7*/][1 /*3*/] = { 2863.663f, 5943.965f, 357.336f };
					Local_300[3 /*7*/][1 /*3*/] = { 12.7507f, 0.011422f, 62.85451f };
					Local_357[3 /*3*/][1] = 39.35555f;
					iLocal_391[3] = 1500;
					Local_400[3 /*4*/][0] = 1;
					Local_400[3 /*4*/][1] = 0;
					Local_400[3 /*4*/][2] = 1;
					Local_243[4 /*7*/][0 /*3*/] = { 2863.663f, 5943.965f, 357.336f };
					Local_300[4 /*7*/][0 /*3*/] = { 12.7507f, 0.011422f, 62.85451f };
					Local_357[4 /*3*/][0] = 39.35555f;
					Local_243[4 /*7*/][1 /*3*/] = { 2863.341f, 5944.931f, 357.7342f };
					Local_300[4 /*7*/][1 /*3*/] = { 19.264f, -0.043584f, 59.65453f };
					Local_357[4 /*3*/][1] = 39.35555f;
					iLocal_382[4] = 5000;
					iLocal_391[4] = 0;
					Local_400[4 /*4*/][0] = 1;
					Local_400[4 /*4*/][1] = 1;
					Local_400[4 /*4*/][2] = 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					Local_243[0 /*7*/][0 /*3*/] = { -790.0527f, 187.8779f, 73.24776f };
					Local_300[0 /*7*/][0 /*3*/] = { -0.7329f, -0.070113f, 153.7771f };
					Local_357[0 /*3*/][0] = 39.35555f;
					Local_243[0 /*7*/][1 /*3*/] = { -790.0527f, 187.8779f, 73.24776f };
					Local_300[0 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.7771f };
					Local_357[0 /*3*/][1] = 39.35555f;
					iLocal_391[0] = 0;
					Local_400[0 /*4*/][0] = 0;
					Local_400[0 /*4*/][1] = 0;
					Local_400[0 /*4*/][2] = 1;
					Local_243[1 /*7*/][0 /*3*/] = { -789.2074f, 185.4831f, 71.91133f };
					Local_300[1 /*7*/][0 /*3*/] = { 25.59699f, -0.035805f, 57.89385f };
					Local_357[1 /*3*/][0] = 38.16418f;
					Local_243[1 /*7*/][1 /*3*/] = { -789.2074f, 185.4831f, 71.91133f };
					Local_300[1 /*7*/][1 /*3*/] = { 25.59699f, -0.035805f, 57.89385f };
					Local_357[1 /*3*/][1] = 38.16418f;
					iLocal_391[1] = 0;
					Local_400[1 /*4*/][0] = 1;
					Local_400[1 /*4*/][1] = 0;
					Local_400[1 /*4*/][2] = 1;
					Local_243[2 /*7*/][0 /*3*/] = { -788.8375f, 183.6241f, 71.95374f };
					Local_300[2 /*7*/][0 /*3*/] = { 10.65726f, -0.03214f, 28.32474f };
					Local_357[2 /*3*/][0] = 39.14109f;
					Local_243[2 /*7*/][1 /*3*/] = { -788.8375f, 183.6241f, 71.95374f };
					Local_300[2 /*7*/][1 /*3*/] = { 10.65726f, -0.03214f, 28.32474f };
					Local_357[2 /*3*/][1] = 39.14109f;
					iLocal_391[2] = 1500;
					Local_400[2 /*4*/][0] = 1;
					Local_400[2 /*4*/][1] = 0;
					Local_400[2 /*4*/][2] = 1;
					Local_243[3 /*7*/][0 /*3*/] = { -788.9983f, 186.1042f, 72.04494f };
					Local_300[3 /*7*/][0 /*3*/] = { 5.022902f, -0.035508f, 79.21545f };
					Local_357[3 /*3*/][0] = 29.57394f;
					Local_243[3 /*7*/][1 /*3*/] = { -788.9983f, 186.1042f, 72.04494f };
					Local_300[3 /*7*/][1 /*3*/] = { 5.022902f, -0.035508f, 79.21545f };
					Local_357[3 /*3*/][1] = 29.57394f;
					iLocal_391[3] = 1500;
					Local_400[3 /*4*/][0] = 1;
					Local_400[3 /*4*/][1] = 0;
					Local_400[3 /*4*/][2] = 1;
					Local_243[4 /*7*/][0 /*3*/] = { -790.5131f, 188.4684f, 71.985f };
					Local_300[4 /*7*/][0 /*3*/] = { 10.31376f, -0.036726f, 167.2497f };
					Local_357[4 /*3*/][0] = 31.38586f;
					Local_243[4 /*7*/][1 /*3*/] = { -790.5131f, 188.4684f, 71.985f };
					Local_300[4 /*7*/][1 /*3*/] = { 10.31376f, -0.036726f, 167.2497f };
					Local_357[4 /*3*/][1] = 31.38586f;
					iLocal_391[4] = 1500;
					Local_400[4 /*4*/][0] = 1;
					Local_400[4 /*4*/][1] = 0;
					Local_400[4 /*4*/][2] = 1;
					Local_243[5 /*7*/][0 /*3*/] = { -786.6319f, 188.015f, 72.13353f };
					Local_300[5 /*7*/][0 /*3*/] = { 4.104248f, -0.02012f, 115.9409f };
					Local_357[5 /*3*/][0] = 38.67459f;
					Local_243[5 /*7*/][1 /*3*/] = { -787.8416f, 187.6716f, 72.22159f };
					Local_300[5 /*7*/][1 /*3*/] = { 4.104248f, -0.02012f, 118.8476f };
					Local_357[5 /*3*/][1] = 38.67459f;
					iLocal_382[5] = 25000;
					iLocal_391[5] = 1500;
					Local_400[5 /*4*/][0] = 1;
					Local_400[5 /*4*/][1] = 1;
					Local_400[5 /*4*/][2] = 1;
					Local_243[6 /*7*/][0 /*3*/] = { -787.4744f, 188.1071f, 72.18631f };
					Local_300[6 /*7*/][0 /*3*/] = { 4.013949f, 0.013702f, 116.1093f };
					Local_357[6 /*3*/][0] = 38.67459f;
					Local_243[6 /*7*/][1 /*3*/] = { -787.4744f, 188.1071f, 72.18631f };
					Local_300[6 /*7*/][1 /*3*/] = { 4.013949f, 0.013702f, 116.1093f };
					Local_357[6 /*3*/][1] = 38.67459f;
					iLocal_391[6] = 1500;
					Local_400[6 /*4*/][0] = 0;
					Local_400[6 /*4*/][1] = 0;
					Local_400[6 /*4*/][2] = 1;
					Local_243[7 /*7*/][0 /*3*/] = { -788.8564f, 186.7466f, 72.63398f };
					Local_300[7 /*7*/][0 /*3*/] = { 2.036967f, 0.013663f, 104.2461f };
					Local_357[7 /*3*/][0] = 38.67459f;
					Local_243[7 /*7*/][1 /*3*/] = { -788.8564f, 186.7466f, 72.63398f };
					Local_300[7 /*7*/][1 /*3*/] = { 13.55391f, 0.013663f, 104.2461f };
					Local_357[7 /*3*/][1] = 38.67459f;
					iLocal_382[7] = 3000;
					iLocal_391[7] = 1500;
					Local_400[7 /*4*/][0] = 1;
					Local_400[7 /*4*/][1] = 1;
					Local_400[7 /*4*/][2] = 1;
					break;
				
				case 1:
					Local_243[0 /*7*/][0 /*3*/] = { 2863.341f, 5944.931f, 357.7342f };
					Local_300[0 /*7*/][0 /*3*/] = { 19.264f, -0.043584f, 59.65453f };
					Local_357[0 /*3*/][0] = 39.35555f;
					Local_243[0 /*7*/][1 /*3*/] = { 2863.341f, 5944.931f, 357.7342f };
					Local_300[0 /*7*/][1 /*3*/] = { 19.264f, -0.043584f, 59.65453f };
					Local_357[0 /*3*/][1] = 39.35555f;
					iLocal_391[0] = 0;
					Local_400[0 /*4*/][0] = 0;
					Local_400[0 /*4*/][1] = 0;
					Local_400[0 /*4*/][2] = 1;
					Local_243[1 /*7*/][0 /*3*/] = { 2864.401f, 5936.752f, 358.6488f };
					Local_300[1 /*7*/][0 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_357[1 /*3*/][0] = 39.35555f;
					Local_243[1 /*7*/][1 /*3*/] = { 2864.401f, 5936.752f, 358.6488f };
					Local_300[1 /*7*/][1 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_357[1 /*3*/][1] = 39.35555f;
					iLocal_391[1] = 0;
					Local_400[1 /*4*/][0] = 1;
					Local_400[1 /*4*/][1] = 0;
					Local_400[1 /*4*/][2] = 1;
					Local_243[2 /*7*/][0 /*3*/] = { 2862.146f, 5943.193f, 357.363f };
					Local_300[2 /*7*/][0 /*3*/] = { 9.662308f, -0.009141f, 12.36575f };
					Local_357[2 /*3*/][0] = 39.35554f;
					Local_243[2 /*7*/][1 /*3*/] = { 2862.146f, 5943.193f, 357.363f };
					Local_300[2 /*7*/][1 /*3*/] = { 9.662308f, -0.009141f, 12.36575f };
					Local_357[2 /*3*/][1] = 39.35554f;
					iLocal_391[2] = 1500;
					Local_400[2 /*4*/][0] = 1;
					Local_400[2 /*4*/][1] = 0;
					Local_400[2 /*4*/][2] = 1;
					Local_243[3 /*7*/][0 /*3*/] = { 2863.213f, 5945.368f, 357.2806f };
					Local_300[3 /*7*/][0 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_357[3 /*3*/][0] = 39.35555f;
					Local_243[3 /*7*/][1 /*3*/] = { 2863.213f, 5945.368f, 357.2806f };
					Local_300[3 /*7*/][1 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_357[3 /*3*/][1] = 39.35555f;
					iLocal_391[3] = 1500;
					Local_400[3 /*4*/][0] = 1;
					Local_400[3 /*4*/][1] = 0;
					Local_400[3 /*4*/][2] = 1;
					Local_243[4 /*7*/][0 /*3*/] = { 2859.712f, 5949.607f, 357.3627f };
					Local_300[4 /*7*/][0 /*3*/] = { 10.39483f, -0.009141f, -152.2325f };
					Local_357[4 /*3*/][0] = 39.35555f;
					Local_243[4 /*7*/][1 /*3*/] = { 2859.712f, 5949.607f, 357.3627f };
					Local_300[4 /*7*/][1 /*3*/] = { 10.39483f, -0.009141f, -152.2325f };
					Local_357[4 /*3*/][1] = 39.35555f;
					iLocal_391[4] = 1500;
					Local_400[4 /*4*/][0] = 1;
					Local_400[4 /*4*/][1] = 0;
					Local_400[4 /*4*/][2] = 1;
					Local_243[5 /*7*/][0 /*3*/] = { 2870.432f, 5948.134f, 357.5579f };
					Local_300[5 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_357[5 /*3*/][0] = 39.35555f;
					Local_243[5 /*7*/][1 /*3*/] = { 2868.032f, 5947.472f, 357.7983f };
					Local_300[5 /*7*/][1 /*3*/] = { 6.054419f, 0.025583f, 108.7951f };
					Local_357[5 /*3*/][1] = 39.35555f;
					iLocal_382[5] = 25000;
					iLocal_391[5] = 1500;
					Local_400[5 /*4*/][0] = 1;
					Local_400[5 /*4*/][1] = 1;
					Local_400[5 /*4*/][2] = 1;
					Local_243[6 /*7*/][0 /*3*/] = { 2870.432f, 5948.134f, 357.5579f };
					Local_300[6 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_357[6 /*3*/][0] = 39.35555f;
					Local_243[6 /*7*/][1 /*3*/] = { 2870.432f, 5948.134f, 357.5579f };
					Local_300[6 /*7*/][1 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_357[6 /*3*/][1] = 39.35555f;
					iLocal_391[6] = 1500;
					Local_400[6 /*4*/][0] = 0;
					Local_400[6 /*4*/][1] = 0;
					Local_400[6 /*4*/][2] = 1;
					Local_243[7 /*7*/][0 /*3*/] = { 2863.629f, 5945.854f, 357.8456f };
					Local_300[7 /*7*/][0 /*3*/] = { 8.768853f, -0.026652f, 91.79684f };
					Local_357[7 /*3*/][0] = 39.35555f;
					Local_243[7 /*7*/][1 /*3*/] = { 2863.185f, 5946.305f, 358.1777f };
					Local_300[7 /*7*/][1 /*3*/] = { 8.00841f, -0.026652f, 105.2827f };
					Local_357[7 /*3*/][1] = 39.35555f;
					iLocal_382[7] = 3000;
					iLocal_391[7] = 0;
					Local_400[7 /*4*/][0] = 1;
					Local_400[7 /*4*/][1] = 1;
					Local_400[7 /*4*/][2] = 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			Local_226[0 /*3*/] = { -790.5889f, 186.5645f, 72.96992f };
			Local_233[0 /*3*/] = { -1.638374f, 0.042595f, -117.008f };
			fLocal_240[0] = 31.15711f;
			Local_226[1 /*3*/] = { -791.5944f, 188.7587f, 72.86561f };
			Local_233[1 /*3*/] = { 0.094575f, 0.05061f, -126.9435f };
			fLocal_240[1] = 28.4133f;
			break;
		
		case 1:
			Local_226[0 /*3*/] = { -789.1567f, 189.3443f, 72.05231f };
			Local_233[0 /*3*/] = { 12.43715f, -0.037231f, -164.0746f };
			fLocal_240[0] = 19.24769f;
			Local_226[1 /*3*/] = { -789.3468f, 185.2617f, 72.0984f };
			Local_233[1 /*3*/] = { 11.94678f, -0.005908f, 19.56699f };
			fLocal_240[1] = 23.4548f;
			break;
		
		case 2:
			Local_226[0 /*3*/] = { -790.5217f, 187.2879f, 73.18652f };
			Local_233[0 /*3*/] = { -0.678966f, -0.045711f, -139.5517f };
			fLocal_240[0] = 28.09401f;
			Local_226[1 /*3*/] = { -790.4249f, 186.1531f, 73.24126f };
			Local_233[1 /*3*/] = { -0.614909f, 0.001498f, -30.89652f };
			fLocal_240[1] = 32.06593f;
			break;
	}
}

int func_321()//Position - 0x4CF12
{
	if (MISC::IS_PC_VERSION())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_438) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_439))
		{
			return 1;
		}
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_438))
	{
		return 1;
	}
	return 0;
}

void func_322()//Position - 0x4CF4D
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 223))
	{
		if (bLocal_451 == 1)
		{
			bLocal_451 = false;
		}
		else
		{
			bLocal_451 = true;
		}
		iLocal_449 = 0;
		iLocal_450 = 0;
	}
}

void func_323(var uParam0)//Position - 0x4CF85
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (uParam0->f_52 == 1)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "A1_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C1_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "A1ANDC1_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "A2_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C2_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "A2ANDC2_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "A3_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C3_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "A3ANDC3_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "B4_POSE", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C4_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "B4ANDC4_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C5_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C5_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C6_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C6_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C7_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C7_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, "C8_POSE", 3))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0, "C8_FACE", uParam0->f_11);
				uParam0->f_52 = 0;
			}
		}
	}
}

void func_324(var uParam0)//Position - 0x4D144
{
	switch (uParam0->f_7)
	{
		case 1:
			if (uParam0->f_49 == 1)
			{
				if (Local_400[uParam0->f_16 /*4*/][0] == 1)
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_441))
					{
						uLocal_441 = CAM::CREATE_CAMERA(26379945, 0);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_441))
					{
						CAM::SET_CAM_PARAMS(uLocal_441, Local_243[uParam0->f_16 /*7*/][0 /*3*/], Local_300[uParam0->f_16 /*7*/][0 /*3*/], Local_357[uParam0->f_16 /*3*/][0], 0, 1, 1, 2);
						if (Local_400[uParam0->f_16 /*4*/][1] == 1)
						{
							CAM::SET_CAM_PARAMS(uLocal_441, Local_243[uParam0->f_16 /*7*/][1 /*3*/], Local_300[uParam0->f_16 /*7*/][1 /*3*/], Local_357[uParam0->f_16 /*3*/][1], iLocal_382[uParam0->f_16], 1, 1, 2);
						}
						CAM::SHAKE_CAM(uLocal_441, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uLocal_441, Local_400[uParam0->f_16 /*4*/][2]);
					}
				}
				uParam0->f_49 = 0;
			}
			break;
		
		case 3:
		case 4:
			if (CAM::DOES_CAM_EXIST(uLocal_441))
			{
				if (CAM::IS_CAM_RENDERING(uLocal_441) || CAM::IS_CAM_INTERPOLATING(uLocal_441))
				{
					if (iLocal_391[uParam0->f_17] == 0)
					{
						CAM::DESTROY_CAM(uLocal_441, 0);
					}
					else if (uParam0->f_56 == 0)
					{
						uParam0->f_56 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_2521(iLocal_391[uParam0->f_17], uParam0->f_56))
					{
						CAM::DESTROY_CAM(uLocal_441, 0);
					}
				}
			}
			break;
		
		case 7:
			if (CAM::DOES_CAM_EXIST(uLocal_441))
			{
				switch (uParam0->f_8)
				{
					case 0:
						CAM::SET_CAM_ACTIVE(uLocal_441, 0);
						break;
					
					default:
						break;
					}
			}
			break;
	}
}

int func_325(int iParam0)//Position - 0x4D2E4
{
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(uLocal_610))
			{
				uLocal_610 = CAM::CREATE_CAMERA(26379945, 1);
				if (iLocal_471 == 0)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, -782.8024f, 187.4389f, 73.32661f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, -787.033f, 186.8823f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_471 == 1)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, 2870.826f, 5943.485f, 356.9121f, 11.16632f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, 2867.668f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(uLocal_610, "HAND_SHAKE", 0.25f);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SET_CAM_FAR_CLIP(uLocal_610, 500f);
			}
			*iParam0++;
			break;
		
		case 1:
			if (iLocal_607 == 0)
			{
				if (Local_476.f_7 == 1)
				{
					if (Local_476.f_9 == 4)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
							{
								iLocal_607 = 1;
							}
						}
					}
				}
			}
			if (iLocal_615 == 0)
			{
				func_324(&Local_476);
				func_10(&Local_476, 1, 0, 981668463);
				if (func_283(&Local_476, 1, 1, 0, 0, 1, iLocal_471, 1))
				{
					func_282();
					func_281(&Local_476, 0, 0);
					iLocal_607 = 0;
					*iParam0++;
				}
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_326(int iParam0)//Position - 0x4D4A9
{
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(uLocal_610))
			{
				uLocal_610 = CAM::CREATE_CAMERA(26379945, 1);
				if (iLocal_471 == 0)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, -782.8024f, 187.4389f, 73.32661f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, -787.033f, 186.8823f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_471 == 1)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, 2870.826f, 5943.485f, 356.9121f, 11.16632f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, 2867.668f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(uLocal_610, "HAND_SHAKE", 0.25f);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				CAM::SET_CAM_FAR_CLIP(uLocal_610, 500f);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_610))
			{
				if (iLocal_471 == 0)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, -782.8024f, 187.4389f, 73.32661f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, -787.033f, 186.8823f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_471 == 1)
				{
					CAM::SET_CAM_PARAMS(uLocal_610, 2870.826f, 5943.485f, 356.9121f, 11.16632f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_610, 2867.668f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(uLocal_610, "HAND_SHAKE", 0.25f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			*iParam0++;
			break;
		
		case 1:
			if (iLocal_607 == 0)
			{
				if (Local_476.f_7 == 1)
				{
					if (Local_476.f_9 == 4)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
							{
								iLocal_607 = 1;
							}
						}
					}
				}
			}
			if (iLocal_615 == 0)
			{
				func_324(&Local_476);
				func_10(&Local_476, 1, 0, 981668463);
				if (func_283(&Local_476, 0, 1, 1, 0, 1, iLocal_471, 1))
				{
					func_282();
					func_281(&Local_476, 0, 0);
					iLocal_607 = 0;
					*iParam0++;
				}
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x4D74E
{
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("mini@yoga");
			STREAMING::REQUEST_MODEL(Local_541.f_1);
			STREAMING::REQUEST_MODEL(Local_573.f_1);
			GlobalFunc_5115(&uLocal_600);
			if (((STREAMING::HAS_ANIM_DICT_LOADED("mini@yoga") && STREAMING::HAS_MODEL_LOADED(Local_541.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_573.f_1)) && GlobalFunc_557(&uLocal_600))
			{
				*iParam0++;
			}
			break;
		
		case 1:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_612))
			{
				func_329(Local_589.f_4, Local_589.f_7, Local_589.f_10, Local_589, Local_589.f_3, 0, 0, 1, 0, 0);
				MISC::CLEAR_AREA(Local_472, 15f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_472, 20f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_472, 20f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_472, 20f, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_472, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_472, 20f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_472, 20f);
				iLocal_612 = PED::CREATE_SYNCHRONIZED_SCENE(Local_616, Local_619, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_612, 1);
				if (func_276(&Local_541, 1))
				{
				}
				if (func_276(&Local_573, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_573) && !ENTITY::IS_ENTITY_DEAD(Local_573))
					{
						GlobalFunc_556(&uLocal_600, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_573, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_612, "mini@yoga", "intro", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_611 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_611, iLocal_612, "intro_cam", "mini@yoga");
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_541.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_573.f_1);
				*iParam0++;
			}
			break;
		
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_612))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("YOGA_MINIGAME_TRANQUIL"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MGYG_START");
					AUDIO::START_AUDIO_SCENE("YOGA_MINIGAME_TRANQUIL");
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_573) && !ENTITY::IS_ENTITY_DEAD(Local_573))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_573))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_612) >= 0.395f)
						{
							ENTITY::DETACH_ENTITY(Local_573, 0, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_573, Local_573.f_2, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(Local_573, Local_573.f_5, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_573, 1);
						}
					}
				}
				if (iLocal_606 == 0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_612) >= 0.8f)
					{
						func_13(1);
						iLocal_606 = 1;
					}
				}
				if (((func_276(&Local_533, 1) && func_276(&Local_549, 1)) && func_276(&Local_557, 1)) && func_276(&Local_565, 1))
				{
					if (iLocal_606 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
							{
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_612))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_612) >= 1f)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					}
					func_328(PLAYER::PLAYER_PED_ID(), Local_472, Local_472.f_3, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 1000f, -8f, -1, 1, 0f, 0, 1, 0);
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_612))
			{
				if (iLocal_471 == 0)
				{
					uLocal_610 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_PARAMS(uLocal_610, -782.8024f, 187.4389f, 73.32661f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
				}
				else if (iLocal_471 == 1)
				{
					uLocal_610 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_PARAMS(uLocal_610, 2870.826f, 5943.485f, 356.9121f, 11.16632f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
				}
				CAM::DESTROY_CAM(uLocal_611, 0);
				STREAMING::REMOVE_ANIM_DICT("mini@yoga");
				return 1;
			}
			break;
	}
	return 0;
}

void func_328(int iParam0, struct<3> Param1, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4DBE7
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam5 == 1)
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(iParam0, Param1);
		}
		else if (iParam5 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
		}
		ENTITY::SET_ENTITY_HEADING(iParam0, uParam4);
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (iParam6 == 1)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (iParam7 == 1)
			{
				STREAMING::LOAD_SCENE(Param1);
			}
		}
	}
}

void func_329(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, var uParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x4DC54
{
	GlobalFunc_8961(Param0, Param3, fParam6, Param7, uParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}











void func_340()//Position - 0x4E742
{
	iLocal_601 = 1;
	iLocal_602 = 0;
	iLocal_607 = 0;
}

int func_341(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x4E756
{
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_347(PLAYER::PLAYER_PED_ID(), 1);
		}
		CLOCK::PAUSE_CLOCK(1);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_345(iParam0);
		func_281(&Local_476, 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_345(iParam0);
		func_344();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *uParam4 == 1)
		{
			func_328(PLAYER::PLAYER_PED_ID(), Local_472, Local_472.f_3, 0, 1, 0);
		}
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		func_343(0);
		switch (iParam0)
		{
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("YOGA_MINIGAME_TRANQUIL"))
				{
					AUDIO::START_AUDIO_SCENE("YOGA_MINIGAME_TRANQUIL");
					if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_START"))
					{
					}
				}
				if (iLocal_606 == 0)
				{
					func_13(1);
					iLocal_606 = 1;
				}
				if (((func_276(&Local_533, 0) && func_276(&Local_549, 1)) && func_276(&Local_557, 1)) && func_276(&Local_565, 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_533, Local_533.f_2, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_533, Local_533.f_5, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_533, 1);
					iLocal_1338[1] = 1;
					*iParam1++;
				}
				break;
			
			default:
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 4)
	{
		if (*uParam3 == 1 || *uParam4 == 1)
		{
			STREAMING::LOAD_SCENE(Local_472);
			MISC::CLEAR_AREA(Local_472, 15f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_PEDS(Local_472, 20f, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_472, 15f, 0, 0, 0, 0, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_472, 20f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			*uParam3 = 0;
			*uParam4 = 0;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_575(500);
			}
		}
		*iParam1++;
	}
	if (*iParam1 == 5)
	{
		*iParam2 = 1;
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		return 1;
	}
	return 0;
}


void func_343(int iParam0)//Position - 0x4E9CE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_1338 - 1))
	{
		iLocal_1338[iVar0] = iParam0;
		iVar0++;
	}
}

void func_344()//Position - 0x4E9F8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1342;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_1342[iVar1] = 0;
		iVar1++;
	}
}

void func_345(int iParam0)//Position - 0x4EA23
{
	struct<3> Var0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1) };
	}
	if (GlobalFunc_537(Var0, -790.906f, 186.293f, 71.835f, 15f))
	{
		iLocal_471 = 0;
		Local_589 = { -786.0774f, 193.2534f, 55.16871f };
		Local_589.f_3 = 88.5632f;
		Local_589.f_4 = { -783.8456f, 173.6588f, 75.97994f };
		Local_589.f_7 = { -793.906f, 189.293f, 71.8351f };
		Local_589.f_10 = 29.5f;
		Local_581 = { -791.5933f, 188.4993f, 71.8352f };
		Local_581.f_3 = 223.3349f;
		Local_581.f_4 = { -788.8267f, 185.6219f, 71.8352f };
		Local_581.f_7 = 223.7161f;
		Local_472 = { -790.906f, 186.293f, 71.8351f };
		Local_472.f_3 = 275.0742f;
		Local_616 = { -790.271f, 185.76f, 71.842f };
		Local_619 = { 0f, 0f, -65f };
		Local_622 = { -790.271f, 185.76f, 71.842f };
		Local_625 = { 0f, 0f, -65f };
		Local_628 = { -793.75f, 172.2f, 71.555f };
		Local_631 = { 0f, 0f, -162.24f };
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				Local_533.f_2 = { -791.0036f, 186.3552f, 71.8295f };
				Local_533.f_5 = { 0f, 0f, -87.1403f };
				Local_533.f_1 = joaat("prop_yoga_mat_03");
				break;
			
			case 4:
			case 5:
				Local_533.f_2 = { -791.48f, 186.325f, 71.835f };
				Local_533.f_5 = { 0f, 0f, 0f };
				Local_533.f_1 = joaat("prop_yoga_mat_03");
				break;
		}
		Local_549.f_2 = { -789.4f, 187.8659f, 71.8349f };
		Local_549.f_5 = { 0f, 0f, 105.48f };
		Local_549.f_1 = joaat("prop_mem_candle_04");
		Local_557.f_2 = { -789.47f, 187.5759f, 71.8349f };
		Local_557.f_5 = { 0f, 0f, -37.44f };
		Local_557.f_1 = joaat("prop_mem_candle_05");
		Local_565.f_2 = { -789.75f, 187.7759f, 71.8349f };
		Local_565.f_5 = { 0f, 0f, 52.2f };
		Local_565.f_1 = joaat("prop_mem_candle_06");
		Local_541.f_2 = { -790.647f, 188.616f, 71.908f };
		Local_541.f_5 = { 0f, 0f, -17f };
		Local_541.f_1 = joaat("prop_mp3_dock");
		Local_573.f_2 = { -790.6667f, 188.5546f, 71.9111f };
		Local_573.f_5 = { 0.3273f, -0.4297f, -18.2587f };
		Local_573.f_1 = joaat("prop_phone_ing");
		Local_634 = { -793.52f, 174.39f, 73.2f };
		Local_637 = { 0.26f, -0.97f, 0.03f };
	}
	else if (GlobalFunc_537(Var0, 2862.15f, 5945.49f, 357.11f, 15f))
	{
		iLocal_471 = 1;
		Local_589 = { 2840.019f, 5955.408f, 353.0921f };
		Local_589.f_3 = 225.4881f;
		Local_589.f_4 = { 2893.813f, 5906.263f, 368.2f };
		Local_589.f_7 = { 2833.079f, 5967.084f, 346.3311f };
		Local_589.f_10 = 63.5f;
		Local_581 = { 2861.384f, 5945.801f, 357.0977f };
		Local_581.f_3 = 75.974f;
		Local_581.f_4 = { 2857.62f, 5946.895f, 356.6815f };
		Local_581.f_7 = 74.0123f;
		Local_472 = { 2861.448f, 5945.858f, 357.0606f };
		Local_472.f_3 = 255.0873f;
		Local_616 = { 2862.325f, 5944.692f, 357.07f };
		Local_619 = { 0f, 0f, -85f };
		Local_622 = { 2862.325f, 5944.692f, 357.07f };
		Local_625 = { 0f, 0f, -85f };
		Local_628 = { 2859.625f, 5946.542f, 357.05f };
		Local_631 = { 0f, 0f, 82.8f };
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				Local_533.f_2 = { 2861.47f, 5945.9f, 357.06f };
				Local_533.f_5 = { 0f, -0.5f, 70f };
				Local_533.f_1 = joaat("prop_yoga_mat_03");
				break;
			
			case 4:
			case 5:
				Local_533.f_2 = { 2860.9f, 5946.04f, 357.06f };
				Local_533.f_5 = { 0f, -0.5f, -20f };
				Local_533.f_1 = joaat("prop_yoga_mat_03");
				break;
		}
		Local_549.f_2 = { 2864.176f, 5943.609f, 357.0612f };
		Local_549.f_5 = { 0f, 0f, 0f };
		Local_549.f_1 = joaat("prop_mem_candle_04");
		Local_557.f_2 = { 2863.931f, 5943.665f, 357.0606f };
		Local_557.f_5 = { 0f, 0f, 142.92f };
		Local_557.f_1 = joaat("prop_mem_candle_05");
		Local_565.f_2 = { 2864.084f, 5943.869f, 357.055f };
		Local_565.f_5 = { 0f, 0f, -95.76f };
		Local_565.f_1 = joaat("prop_mem_candle_06");
		Local_541.f_2 = { 2862.946f, 5947.504f, 357.131f };
		Local_541.f_5 = { 0f, 0f, -38.5f };
		Local_541.f_1 = joaat("prop_mp3_dock");
		Local_573.f_2 = { 2862.908f, 5947.454f, 357.1394f };
		Local_573.f_5 = { 0.2939f, -0.4187f, -38.2439f };
		Local_573.f_1 = joaat("prop_phone_ing");
		Local_634 = { 2861.51f, 5945.42f, 358.69f };
		Local_637 = { -0.98f, 0.17f, 0.03f };
	}
}


void func_347(int iParam0, int iParam1)//Position - 0x4F039
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
				iVar1 = GlobalFunc_11119(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_138(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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






void func_353()//Position - 0x5018B
{
	if (CAM::IS_SCREEN_FADED_IN() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iLocal_615 == 0)
		{
			if (((iLocal_469 == 1 || iLocal_469 == 2) || iLocal_469 == 3) || iLocal_469 == 4)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					MISC::SET_GAME_PAUSED(1);
					iLocal_615 = 1;
				}
				func_354();
			}
		}
		else
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("YOGA_QUIT", "YOGA_QUIT_INST", 36, 0, 0, -1, 0, 0, 1);
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				iLocal_615 = 0;
				MISC::SET_GAME_PAUSED(0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				iLocal_469 = 6;
				bLocal_608 = true;
				func_340();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				iLocal_615 = 0;
				MISC::SET_GAME_PAUSED(0);
			}
		}
	}
}

void func_354()//Position - 0x50266
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1336))
	{
		if (iLocal_1337)
		{
			GlobalFunc_5330(&uLocal_640);
			GlobalFunc_1282(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 51, 1), "H_YOGA_QUIT", &uLocal_640, 0);
		}
		GlobalFunc_5329(&uLocal_1336, &uLocal_1327, &uLocal_640, GlobalFunc_1281(&uLocal_640));
	}
	else
	{
		uLocal_1336 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		iLocal_1337 = 1;
	}
}












void func_366(var uParam0, var uParam1)//Position - 0x5080A
{
	if (*uParam0 != 7)
	{
		if (*uParam0 != 8)
		{
			if ((*uParam0 == 2 || *uParam0 == 3) || *uParam0 == 4)
			{
				if (iLocal_1338[1] == 1)
				{
					if (Local_476.f_14 == 3)
					{
						if (Local_476.f_7 == 4)
						{
							if (func_288(Local_476, 2))
							{
								func_340();
								*uParam1 = 1;
								*uParam0 = 6;
							}
						}
					}
				}
			}
		}
	}
}

int func_367()//Position - 0x50872
{
	STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
	HUD::REQUEST_ADDITIONAL_TEXT("YOGA", 3);
	if (((STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga") && HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_01", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_02", 0))
	{
		return 1;
	}
	return 0;
}

void func_368()//Position - 0x508C6
{
	if (CAM::DOES_CAM_EXIST(uLocal_610))
	{
		CAM::SET_CAM_ACTIVE(uLocal_610, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_610, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1, "blushing");
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	GlobalFunc_2943(&Local_541, 1);
	GlobalFunc_2943(&Local_533, 1);
	GlobalFunc_2943(&Local_549, 1);
	GlobalFunc_2943(&Local_557, 1);
	GlobalFunc_2943(&Local_565, 1);
	GlobalFunc_2943(&Local_573, 1);
	GlobalFunc_5114(&uLocal_600);
	GlobalFunc_110();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_7632(0);
	GlobalFunc_139();
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("YOGA_MINIGAME_TRANQUIL"))
	{
		AUDIO::STOP_AUDIO_SCENE("YOGA_MINIGAME_TRANQUIL");
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (iLocal_606 == 1)
	{
		func_13(0);
		iLocal_606 = 0;
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1336);
	if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_END"))
	{
	}
	CLOCK::PAUSE_CLOCK(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PAD::_RESET_INPUT_MAPPING_SCHEME();
}












