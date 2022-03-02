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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	struct<8> Local_27 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68[8];
	struct<3> Local_93[8];
	struct<3> Local_118[13];
	struct<3> Local_158[13];
	struct<3> Local_198[4];
	struct<6> Local_211[2];
	struct<14> Local_224[4];
	struct<17> Local_281[8];
	struct<6> Local_418 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_424 = { 0, 0, 0 } ;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	var uLocal_432 = 4;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 4;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 4;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 4;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 4;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 4;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 4;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 8;
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
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520[3] = { 0, 0, 0 };
	int iLocal_524[3] = { 0, 0, 0 };
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	int iLocal_540[2] = { 0, 0 };
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	int iLocal_550[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_573[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_580[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_588[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_595[1] = { 0 };
	int iLocal_597[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_604[1] = { 0 };
	int iLocal_606 = 0;
	bool bLocal_607 = 0;
	int iLocal_608 = 0;
	bool bLocal_609 = 0;
	int iLocal_610 = 0;
	bool bLocal_611 = 0;
	bool bLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	bool bLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	bool bLocal_621 = 0;
	bool bLocal_622 = 0;
	bool bLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	bool bLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	bool bLocal_630 = 0;
	int iLocal_631 = 0;
	bool bLocal_632 = 0;
	bool bLocal_633 = 0;
	bool bLocal_634 = 0;
	bool bLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	bool bLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	bool bLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	bool bLocal_646 = 0;
	bool bLocal_647 = 0;
	bool bLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	bool bLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	bool bLocal_654 = 0;
	bool bLocal_655 = 0;
	bool bLocal_656 = 0;
	int iLocal_657 = 0;
	bool bLocal_658 = 0;
	bool bLocal_659 = 0;
	bool bLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	bool bLocal_664 = 0;
	int iLocal_665 = 0;
	bool bLocal_666 = 0;
	bool bLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	bool bLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	bool bLocal_675 = 0;
	bool bLocal_676 = 0;
	bool bLocal_677 = 0;
	int iLocal_678 = 0;
	int iLocal_679 = 0;
	bool bLocal_680 = 0;
	bool bLocal_681 = 0;
	bool bLocal_682 = 0;
	bool bLocal_683 = 0;
	bool bLocal_684 = 0;
	bool bLocal_685 = 0;
	bool bLocal_686 = 0;
	int iLocal_687 = 0;
	bool bLocal_688 = 0;
	bool bLocal_689 = 0;
	int iLocal_690 = 0;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	bool bLocal_693 = 0;
	bool bLocal_694 = 0;
	int iLocal_695 = 0;
	bool bLocal_696 = 0;
	bool bLocal_697 = 0;
	bool bLocal_698 = 0;
	bool bLocal_699 = 0;
	bool bLocal_700 = 0;
	bool bLocal_701 = 0;
	bool bLocal_702 = 0;
	bool bLocal_703 = 0;
	bool bLocal_704 = 0;
	bool bLocal_705 = 0;
	bool bLocal_706 = 0;
	int iLocal_707 = 0;
	bool bLocal_708 = 0;
	bool bLocal_709 = 0;
	bool bLocal_710 = 0;
	bool bLocal_711 = 0;
	int iLocal_712 = 0;
	bool bLocal_713 = 0;
	bool bLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	bool bLocal_717 = 0;
	bool bLocal_718 = 0;
	bool bLocal_719 = 0;
	bool bLocal_720 = 0;
	bool bLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	bool bLocal_725 = 0;
	int iLocal_726 = 0;
	bool bLocal_727 = 0;
	bool bLocal_728 = 0;
	bool bLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	bool bLocal_733 = 0;
	bool bLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	bool bLocal_739 = 0;
	int iLocal_740 = 0;
	bool bLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	bool bLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	bool bLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	bool bLocal_752 = 0;
	int iLocal_753 = 0;
	bool bLocal_754 = 0;
	bool bLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	bool bLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	bool bLocal_766 = 0;
	bool bLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	bool bLocal_771 = 0;
	bool bLocal_772 = 0;
	int iLocal_773 = 0;
	bool bLocal_774 = 0;
	bool bLocal_775 = 0;
	bool bLocal_776 = 0;
	int iLocal_777 = 0;
	bool bLocal_778 = 0;
	bool bLocal_779 = 0;
	bool bLocal_780 = 0;
	bool bLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	bool bLocal_786 = 0;
	bool bLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	bool bLocal_790 = 0;
	bool bLocal_791 = 0;
	bool bLocal_792 = 0;
	bool bLocal_793 = 0;
	bool bLocal_794 = 0;
	bool bLocal_795 = 0;
	bool bLocal_796 = 0;
	bool bLocal_797 = 0;
	bool bLocal_798 = 0;
	bool bLocal_799 = 0;
	bool bLocal_800 = 0;
	bool bLocal_801 = 0;
	bool bLocal_802 = 0;
	bool bLocal_803 = 0;
	bool bLocal_804 = 0;
	int iLocal_805 = 0;
	bool bLocal_806 = 0;
	int iLocal_807 = 0;
	bool bLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	bool bLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	bool bLocal_816 = 0;
	bool bLocal_817 = 0;
	bool bLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	struct<3> Local_822 = { 0, 0, 0 } ;
	struct<3> Local_825 = { 0, 0, 0 } ;
	struct<3> Local_828 = { 0, 0, 0 } ;
	struct<3> Local_831 = { 0, 0, 0 } ;
	struct<3> Local_834 = { 0, 0, 0 } ;
	struct<3> Local_837 = { 0, 0, 0 } ;
	struct<3> Local_840 = { 0, 0, 0 } ;
	struct<3> Local_843 = { 0, 0, 0 } ;
	struct<3> Local_846 = { 0, 0, 0 } ;
	struct<3> Local_849 = { 0, 0, 0 } ;
	struct<3> Local_852 = { 0, 0, 0 } ;
	float fLocal_855 = 0f;
	float fLocal_856 = 0f;
	float fLocal_857 = 0f;
	float fLocal_858 = 0f;
	float fLocal_859 = 0f;
	float fLocal_860 = 0f;
	float fLocal_861 = 0f;
	float fLocal_862 = 0f;
	float fLocal_863 = 0f;
	float fLocal_864 = 0f;
	float fLocal_865 = 0f;
	float fLocal_866 = 0f;
	float fLocal_867 = 0f;
	float fLocal_868 = 0f;
	float fLocal_869 = 0f;
	float fLocal_870 = 0f;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	var uLocal_946 = 0;
	int iLocal_947 = 0;
	var uLocal_948[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_965[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_982 = 0;
	var uLocal_983 = 16;
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
	struct<6> Local_1151 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_1157[48] = "";
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 2;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 2;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 20;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1;
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
	var uLocal_1209 = 1065353216;
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
	var uLocal_1236 = -1;
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
	var uLocal_1266 = 1065353216;
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
	var uLocal_1293 = -1;
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
	var uLocal_1323 = 1065353216;
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
	var uLocal_1350 = -1;
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
	var uLocal_1380 = 1065353216;
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
	var uLocal_1407 = -1;
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
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 1065353216;
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
	var uLocal_1464 = -1;
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
	var uLocal_1494 = 1065353216;
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
	var uLocal_1521 = -1;
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
	var uLocal_1551 = 1065353216;
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
	var uLocal_1578 = -1;
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
	var uLocal_1608 = 1065353216;
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
	var uLocal_1635 = -1;
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
	var uLocal_1665 = 1065353216;
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
	var uLocal_1692 = -1;
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
	var uLocal_1722 = 1065353216;
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
	var uLocal_1749 = -1;
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
	var uLocal_1779 = 1065353216;
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
	var uLocal_1806 = -1;
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
	var uLocal_1836 = 1065353216;
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
	var uLocal_1863 = -1;
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
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 1065353216;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = -1;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 1065353216;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = -1;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 1065353216;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = -1;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 1065353216;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = -1;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 1065353216;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = -1;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 1065353216;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = -1;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 1065353216;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = -1;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 1065353216;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 16;
	var uLocal_2317 = 0;
	var uLocal_2318 = -1082130432;
	var uLocal_2319 = 0;
	var uLocal_2320 = -1082130432;
	var uLocal_2321 = 0;
	var uLocal_2322 = -1082130432;
	var uLocal_2323 = 0;
	var uLocal_2324 = -1082130432;
	var uLocal_2325 = 0;
	var uLocal_2326 = -1082130432;
	var uLocal_2327 = 0;
	var uLocal_2328 = -1082130432;
	var uLocal_2329 = 0;
	var uLocal_2330 = -1082130432;
	var uLocal_2331 = 0;
	var uLocal_2332 = -1082130432;
	var uLocal_2333 = 0;
	var uLocal_2334 = -1082130432;
	var uLocal_2335 = 0;
	var uLocal_2336 = -1082130432;
	var uLocal_2337 = 0;
	var uLocal_2338 = -1082130432;
	var uLocal_2339 = 0;
	var uLocal_2340 = -1082130432;
	var uLocal_2341 = 0;
	var uLocal_2342 = -1082130432;
	var uLocal_2343 = 0;
	var uLocal_2344 = -1082130432;
	var uLocal_2345 = 0;
	var uLocal_2346 = -1082130432;
	var uLocal_2347 = 0;
	var uLocal_2348 = -1082130432;
	var uLocal_2349 = 16;
	var uLocal_2350 = 0;
	var uLocal_2351 = -1082130432;
	var uLocal_2352 = 0;
	var uLocal_2353 = -1082130432;
	var uLocal_2354 = 0;
	var uLocal_2355 = -1082130432;
	var uLocal_2356 = 0;
	var uLocal_2357 = -1082130432;
	var uLocal_2358 = 0;
	var uLocal_2359 = -1082130432;
	var uLocal_2360 = 0;
	var uLocal_2361 = -1082130432;
	var uLocal_2362 = 0;
	var uLocal_2363 = -1082130432;
	var uLocal_2364 = 0;
	var uLocal_2365 = -1082130432;
	var uLocal_2366 = 0;
	var uLocal_2367 = -1082130432;
	var uLocal_2368 = 0;
	var uLocal_2369 = -1082130432;
	var uLocal_2370 = 0;
	var uLocal_2371 = -1082130432;
	var uLocal_2372 = 0;
	var uLocal_2373 = -1082130432;
	var uLocal_2374 = 0;
	var uLocal_2375 = -1082130432;
	var uLocal_2376 = 0;
	var uLocal_2377 = -1082130432;
	var uLocal_2378 = 0;
	var uLocal_2379 = -1082130432;
	var uLocal_2380 = 0;
	var uLocal_2381 = -1082130432;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = -1082130432;
	var uLocal_2399 = -1082130432;
	var uLocal_2400 = 1;
	var uLocal_2401 = 1;
	var uLocal_2402 = 1;
	var uLocal_2403 = -1;
	var uLocal_2404 = -1;
	var uLocal_2405 = -1;
	char* sLocal_2406 = NULL;
	char* sLocal_2407 = NULL;
	int iLocal_2408 = 0;
	int iLocal_2409 = 0;
	int iLocal_2410 = 0;
	int iLocal_2411 = 0;
	struct<3> Local_2412 = { 0, 0, 0 } ;
	struct<3> Local_2415 = { 0, 0, 0 } ;
	struct<3> Local_2418 = { 0, 0, 0 } ;
	struct<3> Local_2421 = { 0, 0, 0 } ;
	float fLocal_2424 = 0f;
	float fLocal_2425 = 0f;
	float fLocal_2426 = 0f;
	float fLocal_2427 = 0f;
	float fLocal_2428 = 0f;
	float fLocal_2429 = 0f;
	int iLocal_2430 = 0;
	int iLocal_2431 = 0;
	int iLocal_2432 = 0;
	int iLocal_2433 = 0;
	int iLocal_2434 = 0;
	int iLocal_2435 = 0;
	int iLocal_2436 = 0;
	int iLocal_2437 = 0;
	bool bLocal_2438 = 0;
	int iLocal_2439 = 0;
	char* sLocal_2440 = NULL;
	float fLocal_2441 = 0f;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_39 = 3;
	fLocal_42 = 80f;
	fLocal_43 = 140f;
	fLocal_44 = 180f;
	iLocal_50 = 1;
	iLocal_51 = 65;
	iLocal_52 = 49;
	iLocal_53 = 64;
	uLocal_57 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_58 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_59 = 1f;
	iLocal_935 = -1;
	iLocal_937 = AUDIO::GET_SOUND_ID();
	uLocal_938 = AUDIO::GET_SOUND_ID();
	uLocal_939 = AUDIO::GET_SOUND_ID();
	iLocal_940 = AUDIO::GET_SOUND_ID();
	sLocal_2406 = "missexile1_cargoplaneleadinoutexile_1_intleadin";
	sLocal_2407 = "shake_cam_all@";
	iLocal_2410 = -1;
	iLocal_2411 = -1;
	Local_2412 = { -818.494f, 178.903f, 71.232f };
	Local_2415 = { 0f, 0f, -4.68f };
	Local_2418 = { 1973.871f, 3820.796f, 33.042f };
	Local_2421 = { 0f, 0f, 43.56f };
	fLocal_2424 = 0.2f;
	fLocal_2425 = 0.1f;
	fLocal_2426 = 0.7f;
	fLocal_2427 = 0.676f;
	fLocal_2428 = 0.697f;
	fLocal_2429 = 0.676f;
	sLocal_2440 = "exile1_customswitch";
	fLocal_2441 = -9999f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_884();
		GlobalFunc_10632();
		func_880();
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_EX1", 0);
		if (func_806())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_804(0);
				func_800();
				func_799();
				switch (iLocal_62)
				{
					case 0:
						func_789();
						break;
					
					case 1:
					case 2:
					case 3:
						func_771();
						break;
					
					case 4:
						func_748();
						break;
					
					case 5:
						func_730();
						break;
					
					case 6:
						func_160();
						break;
					
					case 7:
						func_1();
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1DC
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	struct<3> Var5;
	int iVar8;
	struct<3> Var9;
	bool bVar12;
	
	if (!iLocal_608)
	{
		iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
		if (!bLocal_607)
		{
			if (!bLocal_741)
			{
				bLocal_741 = AUDIO::LOAD_STREAM("Plane_Wind_Pt2", "EXILE_1");
			}
			else if (!iLocal_742)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(1903.29f, 4085.2f, 1462.66f);
				iLocal_742 = 1;
			}
			else if (!iLocal_743)
			{
				AUDIO::SET_VARIABLE_ON_STREAM("INOUT", ((fLocal_864 - 1f) * -1f));
			}
			if (!bLocal_804)
			{
				bLocal_804 = AUDIO::PREPARE_MUSIC_EVENT("EXL1_JUMPED");
			}
			MISC::SET_WIND(1f);
			MISC::SET_WIND_SPEED(11.99f);
			MISC::SET_WIND_DIRECTION(2.92f);
			if (!iLocal_672)
			{
				iLocal_672 = 1;
			}
			if (!iLocal_687)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_890 + 300)
				{
					PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 1, 0, 0, 0, 0);
					iLocal_687 = 1;
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
				}
			}
			if (!bLocal_721)
			{
				if (iVar0 >= 1)
				{
					func_159(17);
					func_157(18);
					iLocal_931 = MISC::GET_GAME_TIMER();
					bLocal_721 = true;
				}
			}
			if (!iLocal_730)
			{
				if (iVar0 == 0)
				{
					GlobalFunc_574(167, 0);
					iLocal_730 = 1;
				}
			}
			else if (!iLocal_731)
			{
				if (iVar0 != 0)
				{
					GlobalFunc_571(0, -1);
					iLocal_731 = 1;
				}
			}
			if (bLocal_725 || bLocal_714)
			{
				if (!iLocal_805)
				{
					if (bLocal_804)
					{
						iLocal_805 = GlobalFunc_2867("EXL1_JUMPED");
					}
					else
					{
						iLocal_805 = 1;
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[0 /*3*/], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_68[0 /*3*/], 0))
			{
				if (!iLocal_819)
				{
					iLocal_819 = func_157(16);
				}
				if (!iLocal_789)
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 1, 0, 0, 0, 0);
					iLocal_789 = 1;
				}
				iLocal_942 = MISC::GET_GAME_TIMER() + 2000;
			}
			else
			{
				if (iLocal_789)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_942 || ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 20f)
					{
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
						iLocal_789 = 0;
					}
				}
				if (iLocal_819)
				{
					func_159(16);
					iLocal_819 = 0;
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_68[0 /*3*/], 1) };
			if (Var1.f_2 <= 1400f)
			{
				if (((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_68[0 /*3*/]) && !ENTITY::IS_ENTITY_IN_AIR(Local_68[0 /*3*/])) && !ENTITY::IS_ENTITY_ATTACHED(Local_68[0 /*3*/])) && (func_153(Local_68[0 /*3*/], &uVar4) < 3f || ENTITY::IS_ENTITY_IN_WATER(Local_68[0 /*3*/])))
				{
					AUDIO::STOP_SOUND(iLocal_940);
					VEHICLE::EXPLODE_VEHICLE(Local_68[0 /*3*/], 1, 0);
				}
			}
		}
		else
		{
			if (iLocal_789)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				iLocal_789 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_68[0 /*3*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_68[0 /*3*/]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == Local_68[0 /*3*/])
						{
							PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 1000, 1);
						}
					}
				}
			}
			if (iLocal_819)
			{
				func_159(16);
				iLocal_819 = 0;
			}
		}
		if (!bLocal_714)
		{
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_524[2], 1);
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_897)
			{
				PAD::SET_PAD_SHAKE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 128);
				func_152();
				iLocal_897 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1) };
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeCargoPlaneDive"), Var5.x, Var5.f_1, SYSTEM::FLOOR(ENTITY::GET_ENTITY_HEADING(iLocal_524[2])), 0);
				HUD::SET_RADAR_ZOOM_PRECISE(1f);
			}
			func_129();
			func_125(7);
			if (!iLocal_614)
			{
				iLocal_614 = 1;
			}
			else if (!bLocal_612)
			{
				if (!bLocal_607)
				{
					bLocal_612 = func_123("PF_JUMP", 1, 0);
				}
			}
			if (!bLocal_725)
			{
				if (Local_822.f_1 <= -23f)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_5913(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_524[2]) - 180f), 1103626240))
						{
							if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 3.2f)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(3), "jump_launch_l_to_skydive", 8f, -8f, -1, 180234, 0, 0, 0, 0);
								iLocal_919 = MISC::GET_GAME_TIMER();
								bLocal_725 = true;
							}
						}
					}
				}
			}
			if (fLocal_870 < 0f)
			{
				if (Local_822.f_1 <= -20f)
				{
					fLocal_870 = 0f;
				}
			}
			else if (!bLocal_725)
			{
				fLocal_870 = (fLocal_870 + (1f * SYSTEM::TIMESTEP()));
				if (fLocal_870 >= 1.2f)
				{
					func_119();
				}
			}
			if (((Local_822.f_1 <= -25f || Local_822.f_2 <= -7f) || Local_822.f_2 >= 7f) || bLocal_725)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[0 /*3*/], 0))
				{
					if (!Local_68[0 /*3*/].f_1)
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_68[0 /*3*/], 0);
						func_115(0, 0);
					}
				}
				PAD::SET_PAD_SHAKE(0, 10, 128);
				iLocal_913 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 1, 0, 0, 0, 0);
					GlobalFunc_553(169);
				}
				else
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_1149);
				}
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 0);
				ENTITY::_SET_ENTITY_DECALS_DISABLED(iLocal_524[2], 0);
				func_113(14, 0);
				func_113(15, 0);
				func_159(15);
				func_157(17);
				GRAPHICS::_0x02369D5C8A51FDCF(0);
				HUD::SET_RADAR_ZOOM_PRECISE(0f);
				iLocal_891 = MISC::GET_GAME_TIMER();
				HUD::SET_WAYPOINT_OFF();
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
				bLocal_714 = true;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[0 /*3*/], 0))
			{
				if (!iLocal_712)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68[0 /*3*/], 3.5f, 3.5f, 3.5f, 0, 1, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_68[0 /*3*/], 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_68[0 /*3*/], 1);
						iLocal_712 = 1;
					}
				}
				else if (!Local_68[0 /*3*/].f_1)
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_68[0 /*3*/])
					{
						func_112(0, 0);
					}
				}
			}
			if (!bLocal_714)
			{
				if (!STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_890 + 52000))
					{
						uLocal_1149 = STREAMING::STREAMVOL_CREATE_FRUSTUM(315.7f, 3782.6f, 30.1f, GlobalFunc_590(8.3f, 0.4f, -22f), 1500f, 12, 127);
					}
				}
				else
				{
					STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(38.74771f, 3802.386f, 30.7101f);
				}
			}
			if (MISC::GET_GAME_TIMER() >= (iLocal_890 + 60000))
			{
				if (func_109())
				{
					iLocal_608 = 1;
				}
			}
		}
		else
		{
			func_106();
			if (!iLocal_736)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_891 + 1000)
				{
					func_100(0);
					iLocal_736 = 1;
				}
			}
			if (!iLocal_737)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_891 + 800)
				{
					func_98(5, 1065353216);
					iLocal_737 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() <= iLocal_891 + 1500 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
			}
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (!Local_198[iVar8 /*3*/].f_2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_198[iVar8 /*3*/]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_198[iVar8 /*3*/], 50f, 50f, 8f, 0, 1, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Falling_Crates", "EXILE_1", 1);
							Local_198[iVar8 /*3*/].f_2 = 1;
						}
					}
				}
				iVar8++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[0 /*3*/], 0))
			{
				if (!iLocal_757)
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 5f);
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_68[0 /*3*/]))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_68[0 /*3*/]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68[0 /*3*/], 1);
							iLocal_757 = 1;
						}
					}
				}
				else
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2f);
					fLocal_868 = (fLocal_868 + (0.001f * SYSTEM::TIMESTEP()));
					if (fLocal_868 >= 0.008f)
					{
						fLocal_868 = 0.008f;
					}
				}
				if (!iLocal_784)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_68[0 /*3*/], 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_940, "Transition_Sound", Local_68[0 /*3*/], "EXILE_1", 0, 0);
						iLocal_784 = 1;
					}
				}
				else if (!iLocal_785)
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_68[0 /*3*/], 0))
					{
						iLocal_785 = 1;
					}
				}
			}
			if (!bLocal_607)
			{
				if (!iLocal_726)
				{
					if (bLocal_725)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_919 + 1000)
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1161760501, 0, 1, 0);
							TASK::TASK_SKY_DIVE(PLAYER::PLAYER_PED_ID(), 0);
							iLocal_726 = 1;
						}
					}
				}
				if (bLocal_725)
				{
					if (MISC::GET_GAME_TIMER() <= iLocal_919 + 2500)
					{
						PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
					}
				}
				Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (!bLocal_713)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_891 + 600)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) == 0)
						{
							bLocal_713 = func_86("EXL1_JUMP", 1, 0, 0, 0);
						}
						else
						{
							bLocal_713 = func_86("EXL1_JUMP2", 1, 0, 0, 0);
						}
						if (bLocal_713)
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
						}
					}
				}
				else if (!iLocal_715)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Var9.f_2 > 40f && ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							if (func_123("PF_PARA", 1, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 12f, 4);
								iLocal_715 = 1;
							}
						}
					}
				}
				else if (!iLocal_716)
				{
					if (!bLocal_721)
					{
						iLocal_716 = func_84("PF_FALLHLP", 0, 0);
					}
					else
					{
						iLocal_716 = 1;
					}
				}
				else if (!bLocal_717)
				{
					if (bLocal_721)
					{
						bLocal_717 = true;
						if (MISC::GET_GAME_TIMER() >= iLocal_912)
						{
							if (GlobalFunc_74("PF_FALLHLP"))
							{
								HUD::CLEAR_HELP(0);
								iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
					}
					else
					{
						bLocal_717 = func_84("PF_PARHLP", 0, 0);
					}
				}
				else if ((((((bLocal_721 && iVar0 < 3) && iVar0 != -1) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && fLocal_861 == 0f) && !iLocal_723)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_912)
					{
						if (GlobalFunc_74("PF_PARHLP"))
						{
							HUD::CLEAR_HELP(0);
							iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
					if (bLocal_720)
					{
						if (!bLocal_718)
						{
							bLocal_718 = func_84("PF_PARHLP2", 0, 0);
						}
						else if (!bLocal_719)
						{
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								bLocal_719 = func_84("PF_PARHLP3_KM", 0, 0);
							}
							else
							{
								bLocal_719 = func_84("PF_PARHLP3", 0, 0);
							}
						}
					}
				}
				else
				{
					if ((((GlobalFunc_74("PF_PARHLP") && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) || GlobalFunc_74("PF_PARHLP2")) || GlobalFunc_74("PF_PARHLP3")) || GlobalFunc_74("PF_FALLHLP"))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_912)
						{
							HUD::CLEAR_HELP(0);
							iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						if (GlobalFunc_74("PF_PARHLP3"))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_912)
							{
								HUD::CLEAR_HELP(0);
								iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
					}
				}
				func_119();
				bVar12 = false;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_524[2]) || !ENTITY::IS_ENTITY_DEAD(iLocal_524[2]))
					{
						if (((!iLocal_723 && !bLocal_727) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							GlobalFunc_10365(&Local_27, iLocal_524[2], 0, 0, 1, 1, 1);
							bVar12 = true;
						}
					}
				}
				if (!bVar12)
				{
					GlobalFunc_4948(&Local_27, 0, 0);
					if (iLocal_820)
					{
						func_159(19);
						iLocal_820 = 0;
					}
				}
				else if (!iLocal_820)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						iLocal_820 = func_157(19);
					}
				}
				else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_159(19);
					iLocal_820 = 0;
				}
				if (!bLocal_720)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
					{
						bLocal_720 = true;
					}
					else if ((bVar12 && !GlobalFunc_116(0)) && GlobalFunc_4953(1, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || bLocal_717)
						{
							bLocal_720 = func_84("PF_FALHLP", 0, 0);
						}
					}
				}
				else if ((CAM::IS_GAMEPLAY_HINT_ACTIVE() || GlobalFunc_116(0)) || !bVar12)
				{
					if (GlobalFunc_74("PF_FALHLP"))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_912)
						{
							HUD::CLEAR_HELP(0);
							iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
			}
			if (iLocal_722)
			{
				if (iLocal_431 == 2 || bLocal_607)
				{
					if (!GlobalFunc_111())
					{
						func_48();
					}
				}
			}
			else if (iLocal_723)
			{
				if (!iLocal_782)
				{
					if (!GlobalFunc_111())
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
						iLocal_782 = 1;
					}
				}
				if (!bLocal_806)
				{
					bLocal_806 = GlobalFunc_2867("EXL1_LANDED");
				}
				if (GlobalFunc_663("PF_LAND", 0, 0))
				{
					GlobalFunc_7206(0, 1, 0, 0);
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_918 + 3000)
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
					iLocal_722 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 10f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					fLocal_861 = (fLocal_861 + (1f * SYSTEM::TIMESTEP()));
					if (!iLocal_821)
					{
						func_159(18);
						iLocal_821 = 1;
					}
					if (fLocal_861 >= 1.5f)
					{
						if (!iLocal_724)
						{
							if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) == iLocal_913)
							{
							}
							iLocal_724 = 1;
						}
						iLocal_918 = MISC::GET_GAME_TIMER();
						iLocal_723 = 1;
					}
				}
				else
				{
					fLocal_861 = 0f;
				}
			}
			else
			{
				if (!bLocal_806)
				{
					bLocal_806 = GlobalFunc_2867("EXL1_LANDED");
				}
				if (!iLocal_821)
				{
					func_159(18);
					iLocal_821 = 1;
				}
				if (!bLocal_727)
				{
					bLocal_727 = func_123("PF_LAND", 1, 0);
				}
			}
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0xF6F
{
	int iVar0;
	
	switch (iLocal_67)
	{
		case 0:
			func_28(1, 1, 1, 1);
			func_113(14, 0);
			func_113(15, 0);
			func_113(3, 1);
			func_113(1, 1);
			func_27();
			iVar0 = 0;
			while (iVar0 < Local_68.x)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_68[iVar0 /*3*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_68[iVar0 /*3*/]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_118.x)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_118[iVar0 /*3*/]))
				{
					OBJECT::DELETE_OBJECT(&(Local_118[iVar0 /*3*/]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_281)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_281[iVar0 /*17*/]))
				{
					PED::DELETE_PED(&(Local_281[iVar0 /*17*/]));
				}
				iVar0++;
			}
			func_100(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_524[2], 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2]);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2], 6, func_26(), 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2], 37600f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_524[2], 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_524[2], 1f);
				AUDIO::STOP_STREAM();
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pt2_Fail", iLocal_524[2], "exile_1", 0, 0);
				func_98(5, 1065353216);
				func_98(1, 1065353216);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 38.74771f, 3802.386f, 30.7101f, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -25.7f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			func_23(6, 1, 2100);
			CAM::SHAKE_CAM(uLocal_543, "HAND_SHAKE", 0.6f);
			iLocal_873 = MISC::GET_GAME_TIMER();
			iLocal_67 = 1;
			break;
		
		case 1:
			if (!iLocal_746)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_524[2]) >= 39600f)
					{
						CAM::SHAKE_CAM(uLocal_544, "LARGE_EXPLOSION_SHAKE", 0.25f);
						func_98(6, 1065353216);
						func_98(7, 1065353216);
						func_98(8, 1065353216);
						iLocal_746 = 1;
						iLocal_67 = 2;
						func_3(8);
					}
				}
			}
			break;
		
		case 2:
			if (bLocal_609)
			{
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[2]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_524[2]));
				}
			}
			iLocal_764 = 1;
			break;
	}
}

void func_3(int iParam0)//Position - 0x11BF
{
	char* sVar0;
	
	if (func_109())
	{
		func_21();
		GlobalFunc_7206(1, 1, 1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("EXL1_MISSION_FAILED");
		iLocal_61 = 1;
		iLocal_63 = iParam0;
		switch (iLocal_63)
		{
			case 1:
				sVar0 = "PF_FAIL1";
				break;
			
			case 2:
				sVar0 = "PF_FAIL2";
				break;
			
			case 3:
				sVar0 = "PF_FAIL3";
				break;
			
			case 0:
				sVar0 = "PF_FAIL4";
				break;
			
			case 5:
				sVar0 = "PF_FAIL5";
				break;
			
			case 6:
				sVar0 = "PF_FAIL6";
				break;
			
			case 7:
				sVar0 = "PF_FAIL7";
				break;
			
			case 4:
				sVar0 = "PF_FAIL10";
				break;
			
			case 9:
				sVar0 = "PF_FAIL8";
				break;
			
			case 10:
				sVar0 = "PF_FAIL9";
				break;
			
			case 8:
				sVar0 = "CMN_TDIED";
				break;
			
			case 11:
				sVar0 = "PF_FAIL11";
				break;
			
			case 12:
				sVar0 = "CMN_MDIED";
				break;
			
			case 13:
				sVar0 = "PF_FAIL12";
				break;
			
			case 14:
				sVar0 = "PF_FAIL13";
				break;
			
			case 15:
				sVar0 = "PF_FAIL14";
				break;
		}
		GlobalFunc_10835(sVar0);
	}
}


















void func_21()//Position - 0x2300
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_536))
	{
		HUD::REMOVE_BLIP(&uLocal_536);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_538))
	{
		HUD::REMOVE_BLIP(&uLocal_538);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_537))
	{
		HUD::REMOVE_BLIP(&uLocal_537);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_539))
	{
		HUD::REMOVE_BLIP(&uLocal_539);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		GlobalFunc_589(&(Local_281[iVar0 /*17*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_540)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_540[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_540[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_211)
	{
		if (HUD::DOES_BLIP_EXIST(Local_211[iVar0 /*6*/].f_4))
		{
			HUD::REMOVE_BLIP(&(Local_211[iVar0 /*6*/].f_4));
		}
		iVar0++;
	}
}


void func_23(int iParam0, bool bParam1, int iParam2)//Position - 0x2435
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	func_25(iParam0, &Var0, &Var3, &fVar6);
	func_24(&uLocal_543);
	CAM::DETACH_CAM(uLocal_543);
	CAM::STOP_CAM_POINTING(uLocal_543);
	CAM::SET_CAM_COORD(uLocal_543, Var0);
	CAM::SET_CAM_ROT(uLocal_543, Var3, 2);
	CAM::SET_CAM_FOV(uLocal_543, fVar6);
	if (bParam1)
	{
		func_25(iParam0 + 1, &Var0, &Var3, &fVar6);
		func_24(&uLocal_544);
		CAM::SET_CAM_COORD(uLocal_544, Var0);
		CAM::SET_CAM_ROT(uLocal_544, Var3, 2);
		CAM::SET_CAM_FOV(uLocal_544, fVar6);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_544, uLocal_543, iParam2, 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

void func_24(var uParam0)//Position - 0x24D2
{
	if (CAM::DOES_CAM_EXIST(uLocal_544))
	{
		CAM::DESTROY_CAM(uLocal_544, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
}

void func_25(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x2515
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 315.7f, 3782.6f, 30.1f };
			*uParam2 = { 8.3f, 0.4f, -22f };
			*fParam3 = 27.6f;
			break;
		
		case 7:
			*uParam1 = { 316.5f, 3791.2f, 30.7f };
			*uParam2 = { 10.3f, 0.4f, -16.1f };
			*fParam3 = 27.6f;
			break;
	}
}

char* func_26()//Position - 0x2592
{
	return "planeFight";
}

void func_27()//Position - 0x259E
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.x, Var0.f_1, (Var0.f_2 + 1f), 1, false, 0, 1);
		}
	}
}

void func_28(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x25E3
{
	GlobalFunc_7206(1, 1, 1, 0);
	GlobalFunc_8316(bParam0, 1, 1, 0);
	if (bParam0)
	{
		func_35();
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		iLocal_872 = MISC::GET_GAME_TIMER();
	}
	else
	{
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_7632(0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_545))
			{
				CAM::DESTROY_CAM(uLocal_545, 0);
			}
			GlobalFunc_2866(&uLocal_543);
			GlobalFunc_2866(&uLocal_544);
			if (bParam3)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		iLocal_608 = 0;
		bLocal_609 = false;
		iLocal_610 = 0;
		bLocal_611 = false;
		iLocal_67 = 0;
		if (bParam2)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
}







void func_35()//Position - 0x2844
{
	GlobalFunc_7632(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
}













void func_48()//Position - 0x2B2F
{
	GlobalFunc_7621(6, 1, 0, 1, 0);
	GlobalFunc_5103(0, 0);
	func_880();
}




































int func_84(char* sParam0, bool bParam1, int iParam2)//Position - 0x7EA1
{
	if (iParam2 || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_109())
		{
			if (!bParam1)
			{
				GlobalFunc_159(sParam0, -1);
			}
			else
			{
				GlobalFunc_1(sParam0);
			}
			return 1;
		}
	}
	return 0;
}


int func_86(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x7EF1
{
	struct<2> Var0;
	
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!GlobalFunc_111() && func_109())
		{
			if (iParam2 == 0)
			{
				return GlobalFunc_10618(&uLocal_983, "EXL1AUD", sParam0, 8, iParam4, 0, 0);
			}
			else
			{
				StringCopy(&Var0, sParam0, 16);
				StringConCat(&Var0, "_", 16);
				StringIntConCat(&Var0, iParam2, 16);
				if (!bParam3)
				{
					return GlobalFunc_10630(&uLocal_983, "EXL1AUD", sParam0, &Var0, 8, iParam4, 0);
				}
				else
				{
					return GlobalFunc_10626(&uLocal_983, "EXL1AUD", sParam0, &Var0, 8, iParam4, 0);
				}
			}
		}
	}
	return 0;
}












void func_98(int iParam0, int iParam1)//Position - 0x863C
{
	char* sVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	bool bVar8;
	bool bVar9;
	
	if (!iLocal_965[iParam0])
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			Var4 = { 0f, 0f, 0f };
			uVar7 = iParam1;
			bVar8 = true;
			bVar9 = true;
			switch (iParam0)
			{
				case 0:
					sVar0 = "scr_ex1_moving_cloud";
					Var1 = { func_99(16) };
					Var4 = { 0f, 0f, 180f };
					bVar9 = false;
					break;
				
				case 1:
					sVar0 = "scr_ex1_cargo_engine_trail";
					Var1 = { func_99(15) };
					bVar8 = true;
					break;
				
				case 2:
					sVar0 = "scr_ex1_cargo_engine_burst";
					Var1 = { func_99(15) };
					bVar8 = false;
					break;
				
				case 3:
					sVar0 = "scr_ex1_cargo_smoke";
					Var1 = { 2.9f, -29.5f, -3.15734f };
					Var4 = { 0f, 0f, 90f };
					bVar8 = true;
					break;
				
				case 4:
					sVar0 = "scr_ex1_cargo_debris";
					Var1 = { func_99(17) };
					Var4 = { 0f, 0f, 0f };
					bVar8 = true;
					break;
				
				case 5:
					sVar0 = "scr_ex1_cargo_debris";
					Var1 = { func_99(17) };
					Var4 = { 0f, 0f, 0f };
					bVar8 = true;
					break;
				
				case 6:
					sVar0 = "scr_ex1_plane_exp";
					Var1 = { 0f, 31f, -3f };
					bVar8 = false;
					break;
				
				case 7:
					sVar0 = "scr_ex1_dust_impact";
					Var1 = { 0f, 31f, -3f };
					bVar8 = false;
					break;
				
				case 8:
					sVar0 = "scr_ex1_dust_settle";
					Var1 = { 0f, 31f, -3f };
					bVar8 = true;
					break;
				
				case 9:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { -2.7864f, -23.3082f, -2.3844f };
					bVar8 = true;
					break;
				
				case 10:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { -3.3518f, -21.8452f, -1.3641f };
					bVar8 = true;
					break;
				
				case 11:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { -2.9242f, -19.124f, -0.3526f };
					bVar8 = true;
					break;
				
				case 12:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { 3.055f, -21.4325f, -3.6115f };
					bVar8 = true;
					break;
				
				case 13:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { 2.9188f, -15.3878f, -3.0399f };
					bVar8 = true;
					break;
				
				case 14:
					sVar0 = "cs_ex1_sparking_wires_sm";
					Var1 = { -3.2248f, -19.7849f, -1.1471f };
					bVar8 = true;
					break;
				
				case 15:
					sVar0 = "cs_ex1_sparking_wires_sm";
					Var1 = { 0.6253f, -14.5067f, -0.3474f };
					bVar8 = true;
					break;
			}
			if (bVar8)
			{
				if (bVar9)
				{
					uLocal_948[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sVar0, iLocal_524[2], Var1, Var4, uVar7, 0, 0, 0);
				}
				else
				{
					uLocal_948[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], Var1), Var4, uVar7, 0, 0, 0, 0);
				}
				iLocal_965[iParam0] = 1;
			}
			else
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(sVar0, iLocal_524[2], Var1, Var4, iVar7, 0, 0, 0);
			}
		}
	}
}

Vector3 func_99(int iParam0)//Position - 0x8927
{
	switch (iParam0)
	{
		case 0:
			return 1982.1f, 3829.6f, 32.3f;
			break;
		
		case 1:
			return 1983.957f, 3823.334f, 31.34886f;
			break;
		
		case 2:
			return 2134.84f, 4784.11f, 39.97f;
			break;
		
		case 3:
			return -2834.33f, 3858.68f, 35f;
			break;
		
		case 4:
			return 2411.72f, 5802.24f, 100.29f;
			break;
		
		case 5:
			return 2758.59f, 4188.9f, 371.89f;
			break;
		
		case 6:
			return 510f, -3833f, 412f;
			break;
		
		case 7:
			return 1362f, -3890f, 750f;
			break;
		
		case 8:
			return 1989f, 4108f, 1456f;
			break;
		
		case 9:
			return -1.5f, -20.6f, -4f;
			break;
		
		case 10:
			return 2155.72f, 4808.02f, 40.19f;
			break;
		
		case 11:
			return 1982.63f, 3827.46f, 31.42f;
			break;
		
		case 12:
			return 2134.094f, 4797.407f, 40.12542f;
			break;
		
		case 13:
			return 0f, -23.8936f, -2.1f;
			break;
		
		case 14:
			return 0f, -24f, -3.55734f;
			break;
		
		case 15:
			return 27.4893f, -12.1439f, -1.92886f;
			break;
		
		case 16:
			return 0f, -125f, -13f;
			break;
		
		case 17:
			return 0f, -24f, -3.55734f;
			break;
		
		case 18:
			return 1953.298f, 3961.83f, 31.55935f;
			break;
		
		case 19:
			return 2047.9f, 4768.06f, 40.06f;
			break;
		
		case 20:
			return -3172.567f, 3162.309f, 5.71102f;
			break;
		
		case 21:
			return -830.426f, 168.64f, 68.80289f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_100(bool bParam0)//Position - 0x8B7B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		if (bParam0)
		{
			VEHICLE::_SET_VEHICLE_SHADOW_EFFECT(iLocal_524[2], 0, 255);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_532))
			{
				iLocal_532 = OBJECT::CREATE_OBJECT(func_101(18), ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS(iLocal_532, ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 1, false, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_532, ENTITY::GET_ENTITY_ROTATION(iLocal_524[2], 2), 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_532, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_532, 0, 0);
			}
		}
		else
		{
			VEHICLE::_REMOVE_VEHICLE_SHADOW_EFFECT(iLocal_524[2]);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_532))
			{
				OBJECT::DELETE_OBJECT(&iLocal_532);
			}
		}
	}
}

int func_101(int iParam0)//Position - 0x8C22
{
	switch (iParam0)
	{
		case 0:
			return GlobalFunc_4917(2);
			break;
		
		case 1:
			return GlobalFunc_4917(1);
			break;
		
		case 3:
			return GlobalFunc_4917(0);
			break;
		
		case 4:
			return GlobalFunc_4946(40);
			break;
		
		case 2:
			return GlobalFunc_4946(20);
			break;
		
		case 7:
			return joaat("s_m_y_blackops_01");
			break;
		
		case 6:
			return joaat("s_m_m_pilot_01");
			break;
		
		case 5:
			return joaat("s_m_m_pilot_02");
			break;
		
		case 8:
			return GlobalFunc_4931(2, 0);
			break;
		
		case 9:
			return joaat("duster");
			break;
		
		case 10:
			return joaat("cargoplane");
			break;
		
		case 12:
			return joaat("mesa3");
			break;
		
		case 11:
			return joaat("lazer");
			break;
		
		case 13:
			return joaat("prop_mil_crate_01");
			break;
		
		case 14:
			return joaat("prop_mil_crate_02");
			break;
		
		case 15:
			return joaat("prop_ld_test_01");
			break;
		
		case 16:
			return joaat("prop_phone_ing_03");
			break;
		
		case 17:
			return joaat("prop_phone_ing");
			break;
		
		case 18:
			return joaat("exile1_lightrig");
			break;
		
		case 19:
			return joaat("prop_chair_06");
			break;
		
		case 20:
			return joaat("p_police_radio_hset_s");
			break;
		
		case 21:
			return GlobalFunc_622();
			break;
	}
	return 0;
}





void func_106()//Position - 0x90A2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		iVar0 = 0;
		while (iVar0 < Local_198.x)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_198[iVar0 /*3*/]))
			{
				if (!Local_198[iVar0 /*3*/].f_1)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_922 + 800)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_198[iVar0 /*3*/], 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_198[iVar0 /*3*/], 2, -8f, -30f, 23f, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
						if (GlobalFunc_156(iLocal_524[2], Local_198[iVar0 /*3*/], 0) >= 40f)
						{
							Local_198[iVar0 /*3*/].f_1 = 1;
						}
					}
				}
				else if (bLocal_714)
				{
					if (MISC::GET_GAME_TIMER() <= iLocal_931 + 10000 || iLocal_931 < 0)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_198[iVar0 /*3*/], 30f, 30f, 100f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_IN_AIR(Local_198[iVar0 /*3*/]))
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(Local_198[iVar0 /*3*/], 1) };
								Var7 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(Local_198[iVar0 /*3*/], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
								if (Var1.f_2 < (Var4.f_2 - 5f))
								{
									Var7 = { Var7 * Vector(90f, 90f, 90f) };
								}
								else
								{
									Var7 = { Var7 * Vector(70f, 70f, 70f) };
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_198[iVar0 /*3*/], 2, Var7, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
								if (Var1.f_2 < (Var4.f_2 - 100f) || Var1.f_2 > (Var4.f_2 + 300f))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_198[iVar0 /*3*/]));
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



int func_109()//Position - 0x92F2
{
	if (iLocal_61 == 0 && !GlobalFunc_331())
	{
		return 1;
	}
	return 0;
}



void func_112(int iParam0, bool bParam1)//Position - 0x934E
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_68[iParam0 /*3*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68[iParam0 /*3*/]) || ENTITY::IS_ENTITY_DEAD(Local_68[iParam0 /*3*/]))
		{
			if (bParam1)
			{
				if (iLocal_895 < 0)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68[iParam0 /*3*/], 8f, 8f, 8f, 0, 1, 0))
					{
						iLocal_895 = iParam0;
						iLocal_896 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(600, 1000));
						bLocal_729 = true;
					}
				}
			}
			switch (iParam0)
			{
				case 0:
					sVar0 = "Car_01";
					break;
				
				case 1:
					sVar0 = "Car_01";
					break;
				
				case 2:
					sVar0 = "Car_02";
					break;
				
				case 3:
					sVar0 = "Car_03";
					break;
				
				case 4:
					sVar0 = "Car_03";
					break;
				
				case 5:
					sVar0 = "Car_01";
					break;
				
				case 6:
					sVar0 = "Car_01";
					break;
				
				case 7:
					sVar0 = "Car_02";
					break;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, sVar0, Local_68[iParam0 /*3*/], "EXILE_1", 0, 0);
			ENTITY::DETACH_ENTITY(Local_68[iParam0 /*3*/], 1, 1);
			if (iParam0 != 0)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_68[iParam0 /*3*/], 1);
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(Local_68[iParam0 /*3*/], 1);
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_68[iParam0 /*3*/], 0);
			}
		}
	}
	Local_68[iParam0 /*3*/].f_1 = 1;
}

void func_113(int iParam0, bool bParam1)//Position - 0x9498
{
	if (iLocal_965[iParam0])
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_948[iParam0]))
		{
			if (!bParam1)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_948[iParam0], 0);
			}
			else
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_948[iParam0], 0);
			}
		}
		iLocal_965[iParam0] = 0;
	}
}


void func_115(bool bParam0, bool bParam1)//Position - 0x9552
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_524[2]))
	{
		if (!bParam1)
		{
			iVar0 = 0;
			while (iVar0 < Local_68.x)
			{
				if (!Local_68[iVar0 /*3*/].f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_68[iVar0 /*3*/]))
					{
						iVar1 = iVar0;
						ENTITY::DETACH_ENTITY(Local_68[iVar0 /*3*/], 1, 1);
						if (iVar1 != 0)
						{
							VEHICLE::SET_VEHICLE_REDUCE_GRIP(Local_68[iVar0 /*3*/], 0);
						}
						if (func_118(iVar1))
						{
							fVar2 = 180f;
						}
						else
						{
							fVar2 = 0f;
						}
						if (bParam0)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_68[iVar0 /*3*/], iLocal_524[2], 0, 0, func_116(iVar1, 0), 0f, 0f, 0f, 0f, 0f, fVar2, 100000f, 1, 1, 1, 1, 2);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_68[iVar0 /*3*/], iLocal_524[2], 0, func_116(iVar1, 0), 0f, 0f, fVar2, 0, 0, 1, 0, 2, 1);
						}
					}
				}
				iVar0++;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_529, 0))
		{
			iVar0 = 0;
			while (iVar0 < Local_93.x)
			{
				if (!Local_93[iVar0 /*3*/].f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_93[iVar0 /*3*/]))
					{
						iVar3 = iVar0;
						ENTITY::DETACH_ENTITY(Local_93[iVar0 /*3*/], 1, 1);
						if (func_118(iVar3))
						{
							fVar4 = 180f;
						}
						else
						{
							fVar4 = 0f;
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_93[iVar0 /*3*/], iLocal_529, 0, func_116(iVar3, 0), 0f, 0f, fVar4, 0, 0, 1, 0, 2, 1);
					}
				}
				iVar0++;
			}
		}
	}
}

Vector3 func_116(int iParam0, bool bParam1)//Position - 0x96A6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	switch (iParam0)
	{
		case 0:
			fVar0 = 1.6f;
			fVar1 = 17f;
			break;
		
		case 1:
			fVar0 = 1.6f;
			fVar1 = -14.5f;
			break;
		
		case 2:
			fVar0 = -1.6f;
			fVar1 = -11.5f;
			break;
		
		case 3:
			fVar0 = -1.6f;
			fVar1 = -6f;
			break;
		
		case 4:
			fVar0 = -1.6f;
			fVar1 = 10.2f;
			break;
		
		case 5:
			fVar0 = -1.6f;
			fVar1 = 15.6f;
			break;
		
		case 6:
			fVar0 = 1.6f;
			fVar1 = 0f;
			break;
		
		case 7:
			fVar0 = 1.6f;
			fVar1 = 12f;
			break;
	}
	if (Local_68[iParam0 /*3*/].f_2 == 0)
	{
		fVar2 = -3.37f;
	}
	else
	{
		fVar2 = -3.2f;
	}
	if (bParam1)
	{
		return func_117(fVar0, fVar1, fVar2);
	}
	return fVar0, fVar1, fVar2;
}

Vector3 func_117(struct<3> Param0)//Position - 0x97A1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], Param0);
	}
	return 0f, 0f, 0f;
}

int func_118(int iParam0)//Position - 0x97CB
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 6:
		case 0:
			return 1;
			break;
		
		case 1:
		case 4:
		case 5:
		case 7:
			return 0;
			break;
	}
	return 0;
}

void func_119()//Position - 0x9819
{
	bool bVar0;
	
	switch (iLocal_431)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				iLocal_431 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_743)
			{
				AUDIO::STOP_STREAM();
				iLocal_743 = 1;
			}
			else if (!bLocal_739)
			{
				bLocal_739 = AUDIO::LOAD_STREAM("Pt2_Succeed", "EXILE_1");
			}
			else if (!iLocal_740)
			{
				AUDIO::PLAY_STREAM_FROM_VEHICLE(iLocal_524[2]);
				iLocal_740 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
				{
					fLocal_862 = (fLocal_862 + (0.8f * SYSTEM::TIMESTEP()));
					if (fLocal_862 >= 1.4f)
					{
						fLocal_862 = 1.4f;
					}
					if (!iLocal_746)
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_524[2]) >= 39600f)
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_524[2], 0, 0);
							func_98(6, 1065353216);
							func_98(7, 1065353216);
							func_98(8, 1065353216);
							iLocal_746 = 1;
						}
					}
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_524[2], fLocal_862);
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_524[2]) >= 43000f)
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				GlobalFunc_4948(&Local_27, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_68[0 /*3*/]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_68[0 /*3*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_68[0 /*3*/]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[2]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_524[2]));
				}
				GlobalFunc_7621(6, 1, 0, 1, 0);
				iLocal_431 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

char* func_120(int iParam0)//Position - 0x99A0
{
	switch (iParam0)
	{
		case 0:
			return "MISSEXILE1_CargoPlane";
			break;
		
		case 1:
			return "LADDERSBASE";
			break;
		
		case 2:
			return "LADDERS";
			break;
		
		case 3:
			return "MISSEXILE1_Cargoplanejumpout";
			break;
		
		case 4:
			return "CELLPHONE@";
			break;
		
		case 5:
			return "MISSEXILE1_CargoPlaneLeadInOutEXILE_1_INT";
			break;
		
		case 6:
			return "missexile1_cargoplaneleadinoutexile_1_intleadin";
			break;
	}
	return "invalid!";
}



int func_123(char* sParam0, int iParam1, int iParam2)//Position - 0x9A9E
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((iParam2 || !GlobalFunc_111()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_109())
			{
				GlobalFunc_2369(sParam0, 7500, 1);
				return 1;
			}
		}
	}
	return 0;
}


void func_125(int iParam0)//Position - 0x9B00
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	switch (iParam0)
	{
		case 5:
			iVar0 = 0;
			while (iVar0 < Local_68.x)
			{
				iVar1 = iVar0;
				if (iVar1 != 0)
				{
					if (!Local_68[iVar1 /*3*/].f_1)
					{
						if (Local_822.f_1 >= func_128(iVar1) || ((Local_281[3 /*17*/].f_9 == 2 || PED::IS_PED_INJURED(Local_281[3 /*17*/])) && iVar1 == 6))
						{
							func_112(iVar1, 1);
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_118.x)
			{
				if (!Local_118[iVar0 /*3*/].f_1)
				{
					if (Local_822.f_1 >= func_127(iVar0))
					{
						func_126(iVar0, 1);
					}
				}
				iVar0++;
			}
			break;
	}
	if (iLocal_62 == 7 || bLocal_612)
	{
		if (iLocal_893 < 3 && MISC::GET_GAME_TIMER() >= iLocal_894)
		{
			if (iLocal_895 >= 0)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_896)
				{
					if (bLocal_729)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_68[iLocal_895 /*3*/]))
						{
							if (ENTITY::IS_ENTITY_DEAD(Local_68[iLocal_895 /*3*/]) || !ENTITY::IS_ENTITY_DEAD(Local_68[iLocal_895 /*3*/]))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_68[iLocal_895 /*3*/], 8f, 8f, 8f, 0, 1, 0))
								{
									iLocal_895 = -1;
								}
							}
						}
						else
						{
							iLocal_895 = -1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_118[iLocal_895 /*3*/]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_118[iLocal_895 /*3*/], 8f, 8f, 8f, 0, 1, 0))
						{
							iLocal_895 = -1;
						}
					}
					else
					{
						iLocal_895 = -1;
					}
					if (iLocal_895 >= 0)
					{
						if (iLocal_62 == 5)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar2 = "EXL1_DODGE1";
							}
							else
							{
								sVar2 = "EXL1_CAR";
							}
							if (func_86(sVar2, 0, 0, 0, 0))
							{
								iLocal_895 = -1;
								iLocal_894 = MISC::GET_GAME_TIMER() + 8000;
								iLocal_875 += 3000;
								iLocal_893++;
							}
						}
					}
				}
			}
		}
	}
}

void func_126(int iParam0, bool bParam1)//Position - 0x9CE2
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_118[iParam0 /*3*/]))
	{
		if (bParam1)
		{
			if (iLocal_895 < 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_118[iParam0 /*3*/], 8f, 8f, 8f, 0, 1, 0))
				{
					iLocal_895 = iParam0;
					iLocal_896 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 800));
					bLocal_729 = false;
				}
			}
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_118[iParam0 /*3*/], 0);
		ENTITY::DETACH_ENTITY(Local_118[iParam0 /*3*/], 1, 0);
		ENTITY::APPLY_FORCE_TO_ENTITY(Local_118[iParam0 /*3*/], 3, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
	}
	Local_118[iParam0 /*3*/].f_1 = 1;
}

float func_127(int iParam0)//Position - 0x9D7C
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return -19.16f;
			break;
		
		case 1:
			return -19.16f;
			break;
		
		case 2:
			return -15.44f;
			break;
		
		case 3:
			return -15.34f;
			break;
		
		case 5:
			return 0.41f;
			break;
		
		case 6:
			return 0.42f;
			break;
		
		case 4:
			return 2.54f;
			break;
		
		case 7:
			return 3.9f;
			break;
	}
	return 1E+08f;
}

float func_128(int iParam0)//Position - 0x9E1C
{
	switch (iParam0)
	{
		case 0:
			return 500f;
			break;
		
		case 1:
			return -21.8f;
			break;
		
		case 2:
			return -12.9f;
			break;
		
		case 3:
			return -12.82f;
			break;
		
		case 4:
			return 9.98f;
			break;
		
		case 5:
			return 15.45f;
			break;
		
		case 6:
			return -20.4f;
			break;
		
		case 7:
			return -6.12f;
			break;
	}
	return -999999f;
}

void func_129()//Position - 0x9EB8
{
	func_151();
	func_146();
	func_143();
	func_142();
	func_141();
	func_106();
	func_132();
	if (iLocal_62 == 7)
	{
		func_130(0);
	}
}

void func_130(bool bParam0)//Position - 0x9EE7
{
	if (!bLocal_714)
	{
		if (!iLocal_662)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_937))
			{
				if (!bParam0)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_937, "Generic_Alarm_Fire_Electronic", func_131(), 0, 0, 0, 0);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_937, "Generic_Alarm_Fire_Electronic", 0, 1);
				}
				iLocal_662 = 1;
			}
		}
	}
}

Vector3 func_131()//Position - 0x9F34
{
	return func_117(0f, 0f, -0.6f);
}

void func_132()//Position - 0x9F47
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	int iVar12;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	iLocal_901 = 0;
	iVar0 = 0;
	while (iVar0 < Local_281)
	{
		if (iLocal_61 == 0)
		{
			GlobalFunc_661(Local_281[iVar0 /*17*/], &(Local_281[iVar0 /*17*/].f_1), -1, 0, 0, 0, -1082130432, 0);
		}
		if (PED::IS_PED_INJURED(Local_281[iVar0 /*17*/]))
		{
			if (!Local_281[iVar0 /*17*/].f_14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_281[iVar0 /*17*/]))
				{
					if (PED::IS_PED_DEAD_OR_DYING(Local_281[iVar0 /*17*/], 1))
					{
						GlobalFunc_565(163, 1, 0);
						Local_281[iVar0 /*17*/].f_14 = 1;
					}
				}
			}
			iLocal_901++;
		}
		else
		{
			Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_524[2], ENTITY::GET_ENTITY_COORDS(Local_281[iVar0 /*17*/], 1)) };
			fVar7 = (Var4.f_1 - Local_822.f_1);
			fVar8 = fVar7;
			if (fVar8 < 0f)
			{
				fVar8 = (fVar8 * -1f);
			}
			if (iVar0 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (((fVar7 > 1f && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && Local_281[iVar0 /*17*/].f_9 != 2)
					{
						PED::SET_PED_RESET_FLAG(Local_281[iVar0 /*17*/], 128, 1);
					}
				}
			}
			switch (Local_281[iVar0 /*17*/].f_9)
			{
				case 0:
					func_138(iVar0);
					break;
				
				case 1:
					if (!PED::IS_PED_IN_COMBAT(Local_281[iVar0 /*17*/], 0))
					{
						func_138(iVar0);
					}
					else if (func_137(iVar0, fVar7))
					{
						Local_281[iVar0 /*17*/].f_10 = (Local_281[iVar0 /*17*/].f_10 + (1f * SYSTEM::TIMESTEP()));
						if (Local_281[iVar0 /*17*/].f_10 >= func_136(iVar0))
						{
							func_134(iVar0);
						}
					}
					else
					{
						Local_281[iVar0 /*17*/].f_10 = (Local_281[iVar0 /*17*/].f_10 - (1f * SYSTEM::TIMESTEP()));
						if (Local_281[iVar0 /*17*/].f_10 < 0f)
						{
							Local_281[iVar0 /*17*/].f_10 = 0f;
						}
					}
					break;
				
				case 2:
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_281[iVar0 /*17*/], Local_281[iVar0 /*17*/].f_11, 0.5f, 0.5f, 1f, 0, 0, 0) || func_133(fVar7, fVar8)) || TASK::GET_SCRIPT_TASK_STATUS(Local_281[iVar0 /*17*/], 242628503) == 7)
					{
						func_138(iVar0);
					}
					break;
			}
			Var9 = { ENTITY::GET_ENTITY_COORDS(Local_281[iVar0 /*17*/], 1) };
			if (Var9.f_2 <= (Var1.f_2 - 10f))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_281[iVar0 /*17*/]));
			}
			if (!PED::IS_PED_INJURED(Local_281[iVar0 /*17*/]))
			{
				if (!Local_281[iVar0 /*17*/].f_16)
				{
					if (PED::IS_PED_RAGDOLL(Local_281[iVar0 /*17*/]))
					{
						iVar12 = 0;
						while (iVar12 < 8)
						{
							if (Local_68[iVar12 /*3*/].f_1)
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_68[iVar12 /*3*/]))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_68[iVar12 /*3*/], Local_281[iVar0 /*17*/]))
									{
										Local_281[iVar0 /*17*/].f_15 = MISC::GET_GAME_TIMER();
										Local_281[iVar0 /*17*/].f_16 = 1;
									}
								}
							}
							iVar12++;
						}
					}
				}
				else if (PED::IS_PED_RAGDOLL(Local_281[iVar0 /*17*/]))
				{
					if (MISC::GET_GAME_TIMER() >= Local_281[iVar0 /*17*/].f_15 + 2000)
					{
						PED::APPLY_DAMAGE_TO_PED(Local_281[iVar0 /*17*/], 1000, 1);
					}
				}
				else
				{
					Local_281[iVar0 /*17*/].f_16 = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_133(float fParam0, float fParam1)//Position - 0xA272
{
	if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fParam0 <= -0.8f)
		{
			return 1;
		}
	}
	else if (fParam1 <= 5f)
	{
		return 1;
	}
	return 0;
}

void func_134(int iParam0)//Position - 0xA2A4
{
	float fVar0;
	struct<3> Var1;
	
	if (!PED::IS_PED_INJURED(Local_281[iParam0 /*17*/]))
	{
		fVar0 = 2f;
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_281[iParam0 /*17*/], 1) };
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_946);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_946);
		switch (iParam0)
		{
			case 0:
				fVar0 = 1f;
				if (Var1.x >= 2929.46f)
				{
					func_135(iParam0, 2927.64f, 807.39f, 449.09f, fVar0, 0);
				}
				func_135(iParam0, 2927.39f, 811.11f, 448.28f, fVar0, 1);
				break;
			
			case 1:
				fVar0 = 1f;
				func_135(iParam0, 2927.36f, 811.42f, 448.22f, fVar0, 1);
				break;
			
			case 3:
				if (Var1.x >= 2928.53f)
				{
					func_135(iParam0, 2928.4f, 787.77f, 453.03f, fVar0, 0);
				}
				func_135(iParam0, 2928.2f, 811.43f, 448.22f, fVar0, 1);
				break;
			
			case 4:
				if (Var1.x >= 2928.53f)
				{
					func_135(iParam0, 2927.3f, 784.1f, 454.8f, fVar0, 0);
				}
				func_135(iParam0, 2928.3f, 812.7f, 448.6f, fVar0, 1);
				break;
			
			case 5:
				fVar0 = 1f;
				if (Var1.x >= 2928.53f)
				{
					func_135(iParam0, 2928.7f, 772.1f, 454.8f, fVar0, 0);
				}
				func_135(iParam0, 2927.39f, 811.11f, 448.28f, fVar0, 1);
				break;
			
			case 6:
				fVar0 = 1f;
				func_135(iParam0, 2927.35f, 810.3f, 448.14f, fVar0, 1);
				break;
			
			case 7:
				fVar0 = 1f;
				func_135(iParam0, 2928.7f, 772.9f, 448.14f, fVar0, 1);
				func_135(iParam0, 2929.2f, 813f, 448.1f, fVar0, 1);
				break;
		}
		TASK::CLOSE_SEQUENCE_TASK(uLocal_946);
		TASK::TASK_PERFORM_SEQUENCE(Local_281[iParam0 /*17*/], uLocal_946);
		Local_281[iParam0 /*17*/].f_9 = 2;
	}
}

void func_135(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0xA49C
{
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, PLAYER::PLAYER_PED_ID(), fParam4, 1, 0.5f, 4f, 0, 64, 0, -957453492, 20000);
	if (bParam5)
	{
		Local_281[iParam0 /*17*/].f_11 = { Param1 };
	}
}

float func_136(int iParam0)//Position - 0xA4DA
{
	switch (iParam0)
	{
		case 0:
			return 3f;
			break;
		
		case 1:
			return 2f;
			break;
		
		case 3:
			return 4f;
			break;
		
		case 4:
			return 2f;
			break;
		
		case 5:
			return 4f;
			break;
		
		case 6:
			return 7f;
			break;
		
		case 7:
			return 8f;
			break;
	}
	return 1E+11f;
}

int func_137(int iParam0, float fParam1)//Position - 0xA54D
{
	if (fParam1 > 0f && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
	{
		switch (iParam0)
		{
			case 0:
				if (PED::IS_PED_INJURED(Local_281[1 /*17*/]))
				{
					return 1;
				}
				break;
			
			case 1:
				return 1;
				break;
			
			case 3:
				if (PED::IS_PED_INJURED(Local_281[0 /*17*/]) && PED::IS_PED_INJURED(Local_281[1 /*17*/]))
				{
					return 1;
				}
				break;
			
			case 4:
				if ((((PED::IS_PED_INJURED(Local_281[0 /*17*/]) && PED::IS_PED_INJURED(Local_281[1 /*17*/])) && PED::IS_PED_INJURED(Local_281[3 /*17*/])) && PED::IS_PED_INJURED(Local_281[6 /*17*/])) && PED::IS_PED_INJURED(Local_281[7 /*17*/]))
				{
					return 1;
				}
				break;
			
			case 5:
				if (PED::IS_PED_INJURED(Local_281[7 /*17*/]))
				{
					return 1;
				}
				break;
			
			case 6:
				if ((PED::IS_PED_INJURED(Local_281[0 /*17*/]) && PED::IS_PED_INJURED(Local_281[1 /*17*/])) && PED::IS_PED_INJURED(Local_281[3 /*17*/]))
				{
					return 1;
				}
				break;
			
			case 7:
				if ((PED::IS_PED_INJURED(Local_281[0 /*17*/]) && PED::IS_PED_INJURED(Local_281[1 /*17*/])) && PED::IS_PED_INJURED(Local_281[3 /*17*/]))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_138(int iParam0)//Position - 0xA6A2
{
	if (!PED::IS_PED_INJURED(Local_281[iParam0 /*17*/]))
	{
		TASK::TASK_COMBAT_PED(Local_281[iParam0 /*17*/], PLAYER::PLAYER_PED_ID(), 0, 16);
		Local_281[iParam0 /*17*/].f_9 = 1;
	}
}



void func_141()//Position - 0xA89E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_118.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_118[iVar0 /*3*/]))
		{
			if (Local_118[iVar0 /*3*/].f_1)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_118[iVar0 /*3*/], 2, 0f, 3.5f, 10f, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
			}
		}
		iVar0++;
	}
}

void func_142()//Position - 0xA8F0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_68.x)
	{
		iVar1 = iVar0;
		if (!Local_68[iVar1 /*3*/].f_1)
		{
			bVar2 = false;
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[iVar1 /*3*/], 0))
			{
				bVar2 = true;
			}
			else if (iVar1 == 6)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_68[iVar1 /*3*/]) < 880)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				func_112(iVar1, 1);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[iVar0 /*3*/], 0))
			{
				VEHICLE::RESET_VEHICLE_WHEELS(Local_68[iVar0 /*3*/], 0);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_68[iVar1 /*3*/]))
		{
			if (iLocal_62 == 5)
			{
				if (iVar1 != 0)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_68[iVar1 /*3*/], 2, 0f, 6f, 0f, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
					fVar3 = 0f;
					if ((iVar1 == 1 || iVar1 == 6) || iVar1 == 7)
					{
						if (Local_424.f_1 <= -1f)
						{
							fVar3 = -1.3f;
						}
						else
						{
							fVar3 = -0.2f;
						}
					}
					else if (Local_424.f_1 >= 1f)
					{
						fVar3 = 1f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_68[iVar1 /*3*/], 2, fVar3, 0f, 0f, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_143()//Position - 0xAA09
{
	float fVar0;
	float fVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[2], 1, 1);
		if (Local_424.f_1 != Local_418.f_2)
		{
			fVar0 = func_145();
			if (Local_418 == 0)
			{
				Local_424.f_3 = (Local_424.f_3 + (3.5f * SYSTEM::TIMESTEP()));
				if (Local_424.f_3 > fVar0)
				{
					Local_424.f_3 = fVar0;
				}
			}
			else
			{
				fVar0 = (fVar0 * -1f);
				Local_424.f_3 = (Local_424.f_3 - (3.5f * SYSTEM::TIMESTEP()));
				if (Local_424.f_3 < fVar0)
				{
					Local_424.f_3 = fVar0;
				}
			}
			Local_424.f_1 = (Local_424.f_1 + (Local_424.f_3 * SYSTEM::TIMESTEP()));
			if (Local_418 == 0)
			{
				if (Local_424.f_1 >= Local_418.f_2)
				{
					Local_424.f_1 = Local_418.f_2;
				}
			}
			else if (Local_424.f_1 <= Local_418.f_2)
			{
				Local_424.f_1 = Local_418.f_2;
			}
			if (Local_424.f_1 > 180f)
			{
				Local_424.f_1 = (Local_424.f_1 - 360f);
			}
			else if (Local_424.f_1 < -180f)
			{
				Local_424.f_1 = (Local_424.f_1 + 360f);
			}
		}
		if (Local_424.x != Local_418.f_5)
		{
			fVar1 = func_144();
			if (Local_418.f_3 == 1)
			{
				Local_424.f_4 = (Local_424.f_4 + (1f * SYSTEM::TIMESTEP()));
				if (Local_424.f_4 > fVar1)
				{
					Local_424.f_4 = fVar1;
				}
			}
			else
			{
				fVar1 = (fVar1 * -1f);
				Local_424.f_4 = (Local_424.f_4 - (1f * SYSTEM::TIMESTEP()));
				if (Local_424.f_4 < fVar1)
				{
					Local_424.f_4 = fVar1;
				}
			}
			Local_424.x = (Local_424.x + (Local_424.f_4 * SYSTEM::TIMESTEP()));
			if (Local_418.f_3 == 1)
			{
				if (Local_424.x >= Local_418.f_5)
				{
					Local_424.x = Local_418.f_5;
				}
			}
			else if (Local_424.x <= Local_418.f_5)
			{
				Local_424.x = Local_418.f_5;
			}
			if (Local_424.x > 180f)
			{
				Local_424.x = (Local_424.x - 360f);
			}
			else if (Local_424.x < -180f)
			{
				Local_424.x = (Local_424.x + 360f);
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
		{
			VEHICLE::_0x5845066D8A1EA7F7(iLocal_524[2], Local_424, 2);
		}
	}
}

float func_144()//Position - 0xAC2A
{
	switch (Local_418.f_4)
	{
		case 0:
			return 1f;
			break;
		
		case 1:
			return 1.8f;
			break;
		
		case 2:
			return 4f;
			break;
	}
	return 0f;
}

float func_145()//Position - 0xAC68
{
	switch (Local_418.f_1)
	{
		case 0:
			return 1f;
			break;
		
		case 1:
			return 2f;
			break;
		
		case 2:
			return 8f;
			break;
		
		case 3:
			return 11f;
			break;
	}
	return 0f;
}

void func_146()//Position - 0xACB7
{
	int iVar0;
	
	iVar0 = 0;
	if (func_150())
	{
		iLocal_898++;
		iLocal_899 = 0;
		iVar0 = 1;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_900)
	{
		if (((Local_424.f_1 == Local_418.f_2 && Local_424.x == Local_418.f_5) || bLocal_728) || iVar0)
		{
			bLocal_728 = false;
			switch (iLocal_898)
			{
				case 0:
					switch (iLocal_899)
					{
						case 0:
							func_149(600);
							break;
						
						case 1:
							func_148(1, 1, -2f);
							break;
						
						case 2:
							func_148(0, 1, 3f);
							break;
						
						case 3:
							func_148(1, 1, -3f);
							break;
						
						case 4:
							func_148(0, 1, 2f);
							break;
						
						case 5:
							func_147(1);
							break;
					}
					break;
				
				case 1:
					switch (iLocal_899)
					{
						case 0:
							func_148(0, 1, 4f);
							break;
						
						case 1:
							func_148(1, 1, -4f);
							break;
						
						case 2:
							func_148(0, 1, 3f);
							break;
						
						case 3:
							func_148(1, 1, -4f);
							break;
						
						case 4:
							func_148(0, 1, 4f);
							break;
						
						case 5:
							func_147(1);
							break;
					}
					break;
				
				case 2:
					switch (iLocal_899)
					{
						case 0:
							func_148(1, 1, -4f);
							break;
						
						case 1:
							func_148(0, 1, 5f);
							break;
						
						case 2:
							func_148(1, 1, -3f);
							break;
						
						case 3:
							func_148(0, 1, 4f);
							break;
						
						case 4:
							func_148(1, 1, -3f);
							break;
						
						case 5:
							func_147(1);
							break;
					}
					break;
				
				case 3:
					switch (iLocal_899)
					{
						case 0:
							func_148(1, 2, -4f);
							break;
						
						case 1:
							func_148(0, 2, 5f);
							break;
						
						case 2:
							func_148(1, 2, -3f);
							break;
						
						case 3:
							func_148(0, 2, 4f);
							break;
						
						case 4:
							func_148(1, 2, -3f);
							break;
						
						case 5:
							func_147(1);
							break;
					}
					break;
			}
			if (iLocal_899 < 10)
			{
				if (!bLocal_728)
				{
					iLocal_899++;
				}
			}
		}
	}
}

void func_147(int iParam0)//Position - 0xAF16
{
	iLocal_899 = iParam0;
	bLocal_728 = true;
}

void func_148(int iParam0, int iParam1, float fParam2)//Position - 0xAF27
{
	if (Local_418.f_2 != fParam2)
	{
		Local_418 = iParam0;
		Local_418.f_1 = iParam1;
		Local_418.f_2 = fParam2;
		if (bLocal_667)
		{
			Local_418.f_2 = (Local_418.f_2 / 2f);
			Local_418.f_1 = 0;
		}
	}
}

void func_149(int iParam0)//Position - 0xAF65
{
	iLocal_900 = (MISC::GET_GAME_TIMER() + iParam0);
}

int func_150()//Position - 0xAF77
{
	float fVar0;
	
	switch (iLocal_898)
	{
		case 0:
		case 1:
			switch (iLocal_898)
			{
				case 0:
					fVar0 = -12.4f;
					break;
				
				case 1:
					fVar0 = 15.2f;
					break;
			}
			if (Local_822.f_1 >= fVar0)
			{
				return 1;
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

void func_151()//Position - 0xAFD7
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 88, 1);
		Local_822 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_524[2], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
		fVar0 = (Local_822.f_1 - -20.4f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 * -1f);
		}
		fLocal_864 = (fVar0 / 40.4f);
		if (fLocal_864 < 0f)
		{
			fLocal_864 = 0f;
		}
		else if (fLocal_864 > 1f)
		{
			fLocal_864 = 1f;
		}
	}
}

void func_152()//Position - 0xB05E
{
	CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.07f);
}

float func_153(int iParam0, var uParam1)//Position - 0xB073
{
	float fVar0;
	struct<3> Var1;
	
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, uParam1);
	if (*uParam1 < 0f)
	{
		*uParam1 = 0f;
	}
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, -181.6879f, 3545.775f, 62.87735f, 2463.765f, 4640.367f, 31.42104f, 0, 0, 0))
	{
		if (*uParam1 < 30f)
		{
			*uParam1 = 30f;
		}
	}
	fVar0 = (Var1.f_2 - *uParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}




bool func_157(int iParam0)//Position - 0xB1E6
{
	return AUDIO::START_AUDIO_SCENE(func_158(iParam0));
}

char* func_158(int iParam0)//Position - 0xB1F8
{
	switch (iParam0)
	{
		case 0:
			return "EXILE_1_DRIVE_TO_PLANE";
			break;
		
		case 1:
			return "EXILE_1_FLIGHT_MAIN";
			break;
		
		case 2:
			return "EXILE_1_CARGO_PLANE_APPEARS";
			break;
		
		case 3:
			return "EXILE_1_FOCUS_ON_CARGO_PLANE";
			break;
		
		case 4:
			return "EXILE_1_FLIGHT_START_CLIMB";
			break;
		
		case 5:
			return "EXILE_1_TREVOR_GETS_WARNING";
			break;
		
		case 6:
			return "EXILE_1_ENEMY_OPENS_FIRE";
			break;
		
		case 7:
			return "EXILE_1_SHOOTOUT_CARGO_HOLD";
			break;
		
		case 8:
			return "EXILE_1_HIJACK_THE_PLANE";
			break;
		
		case 9:
			return "EXILE_1_FLY_CARGO_PLANE";
			break;
		
		case 10:
			return "EXILE_1_FIGHTER_JETS_ARRIVE";
			break;
		
		case 11:
			return "EXILE_1_FIGHTER_JET_CAMERA";
			break;
		
		case 12:
			return "EXILE_1_COCKPIT_CUTSCENE";
			break;
		
		case 13:
			return "EXILE_1_ROCKETS_FIRED";
			break;
		
		case 14:
			return "EXILE_1_PLANE_GOING_DOWN";
			break;
		
		case 15:
			return "EXILE_1_ESCAPE_ON_FOOT";
			break;
		
		case 16:
			return "EXILE_1_ESCAPE_IN_CAR";
			break;
		
		case 17:
			return "EXILE_1_SKYDIVE";
			break;
		
		case 18:
			return "EXILE_1_DEPLOY_PARACHUTE";
			break;
		
		case 19:
			return "EXILE_1_FOCUS_ON_CRASHING_PLANE";
			break;
	}
	return "";
}

void func_159(int iParam0)//Position - 0xB34B
{
	AUDIO::STOP_AUDIO_SCENE(func_158(iParam0));
}

void func_160()//Position - 0xB35D
{
	float fVar0;
	var uVar1;
	struct<3> Var2;
	bool bVar5;
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	int iVar11;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar23;
	var uVar26;
	struct<3> Var27;
	
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	if (!iLocal_608)
	{
		if (!bLocal_734)
		{
			bLocal_734 = AUDIO::LOAD_STREAM("FLYBY", "EXILE_1");
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			if (!iLocal_678)
			{
				iLocal_678 = 1;
			}
			else
			{
				if (!iLocal_679)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_903 + 2000)
					{
						func_729();
						iLocal_679 = 1;
					}
				}
				if (!bLocal_683)
				{
					bLocal_683 = func_86("EXL1_PILOT", 0, 0, 0, 0);
					if (bLocal_683)
					{
						RECORDING::_0x293220DA1B46CEBC(4f, 8f, 4);
					}
				}
				else if (!bLocal_684)
				{
					bLocal_684 = func_86("EXL1_BEARING", 0, 0, 0, 0);
				}
				else if (!bLocal_612)
				{
					bLocal_612 = func_123("PF_FLYCG", 1, 0);
				}
				else if (!bLocal_682)
				{
					bLocal_682 = func_86("EXL1_PILOT2", 0, 0, 0, 0);
				}
				else if (!bLocal_680)
				{
					bLocal_680 = func_86("EXL1_HAILRON", 0, 0, 0, 0);
				}
				else if (!bLocal_681)
				{
					bLocal_681 = func_86("EXL1_RESP", 0, 0, 0, 0);
				}
			}
			if (!bLocal_801)
			{
				if (bLocal_688)
				{
					bLocal_801 = GlobalFunc_2867("EXL1_FIGHTER_JETS_APPEAR");
				}
			}
			if (!iLocal_663)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[2], 55f);
				if (MISC::GET_GAME_TIMER() >= iLocal_909)
				{
					iLocal_663 = 1;
				}
			}
			if (!bLocal_685)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_907 + 3000)
				{
					bLocal_685 = func_84("PF_TRNHLP", 0, 0);
				}
			}
			fVar0 = func_153(iLocal_524[2], &uVar1);
			func_728(iLocal_524[2], fVar0);
			Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1) };
			if (bLocal_681 && iLocal_430 != 1)
			{
				if (fVar0 < 135f && Var2.f_2 < 550f)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_924 && iLocal_430 < 4)
					{
						if (func_86("EXL1_TOOLOW", 0, 0, 0, 0))
						{
							iLocal_924 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 25000));
						}
					}
				}
			}
			if (iLocal_430 >= 2)
			{
				func_726();
			}
			if (!bLocal_703)
			{
				if (bLocal_689)
				{
					bLocal_703 = func_86("EXL1_RONJET2", 0, 1, 0, 0);
				}
			}
			else if (!bLocal_704)
			{
				bLocal_704 = func_86("EXL1_SHAKE2", 0, 0, 0, 0);
			}
			else if (!bLocal_705)
			{
				bLocal_705 = func_86("EXL1_TABOVE", 0, 0, 0, 0);
			}
			if (!bLocal_779)
			{
				if (iLocal_904 > 2)
				{
					func_113(4, 0);
					bLocal_779 = true;
				}
			}
			if (iLocal_429 < 2)
			{
				if (!bLocal_706)
				{
					if (bLocal_701)
					{
						bLocal_706 = func_86("EXL1_GOTME", 0, 0, 0, 0);
					}
				}
				else if (!iLocal_707)
				{
					if (Var2.f_2 >= 250f)
					{
						if (func_86("EXL1_SAVE", 0, 0, 0, 0))
						{
							iLocal_707 = 1;
							if (Var2.f_2 >= 550f)
							{
								bLocal_711 = false;
							}
							else
							{
								iLocal_911 = MISC::GET_GAME_TIMER();
								bLocal_711 = true;
							}
						}
					}
					else if (func_86("EXL1_CLIMB", 0, 0, 0, 0))
					{
						iLocal_707 = 1;
						iLocal_911 = MISC::GET_GAME_TIMER();
						bLocal_711 = true;
					}
				}
				else if (!bLocal_710)
				{
					if (bLocal_711)
					{
						bLocal_710 = func_123("PF_CLIMB", 1, 0);
						iLocal_875 = MISC::GET_GAME_TIMER() + 8000;
					}
				}
				else
				{
					func_725("EXL1_CURSE");
				}
			}
			bVar5 = false;
			if (bLocal_711)
			{
				if (Var2.f_2 < 550f)
				{
					if (iLocal_429 < 2)
					{
						if (MISC::GET_GAME_TIMER() >= (iLocal_911 + 38000))
						{
							bVar5 = true;
						}
					}
				}
				else if (GlobalFunc_663("PF_CLIMB", 0, 0))
				{
					GlobalFunc_7206(0, 1, 0, 0);
				}
			}
			if (iLocal_429 >= 1)
			{
				if (bLocal_686)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 90, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_892)
				{
					if (!bLocal_686)
					{
						if (iLocal_429 == 1)
						{
							iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(700, 1200);
						}
						else
						{
							iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1200, 1600);
						}
						bLocal_686 = true;
					}
					else if (iLocal_429 == 1)
					{
						iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 1600);
						bLocal_686 = false;
					}
					else
					{
						iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1100);
					}
					PAD::SET_PAD_SHAKE(0, 1000, 128);
					func_152();
					iLocal_892 = (MISC::GET_GAME_TIMER() + iVar6);
				}
			}
			func_720();
			func_717();
			if (iLocal_429 >= 1)
			{
				func_130(1);
			}
			if (!iLocal_695)
			{
				if (Local_224[1 /*14*/] == 3)
				{
					VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[2], 1);
					VEHICLE::SET_VEHICLE_RUDDER_BROKEN(iLocal_524[2], 0);
					iLocal_910 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_695 = 1;
				}
			}
			else if (!iLocal_750)
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[2], 0);
				iLocal_750 = 1;
			}
			if (((Local_224[0 /*14*/] == 3 || Local_224[1 /*14*/] == 3) || Local_224[2 /*14*/] == 3) || Local_224[3 /*14*/] == 3)
			{
				if (!bLocal_701)
				{
					bLocal_701 = func_86("EXL1_IMHIT", 0, 0, 0, 0);
				}
			}
			switch (iLocal_429)
			{
				case 0:
					if (Local_224[3 /*14*/] == 3)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_524[2], 1, 0f, 0f, 5f, 10f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						PAD::SET_PAD_SHAKE(0, 1000, 200);
						func_152();
						func_98(2, 1065353216);
						func_98(1, 1065353216);
						func_157(14);
						iLocal_908 = MISC::GET_GAME_TIMER();
						iLocal_892 = MISC::GET_GAME_TIMER() + 1200;
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_429 = 1;
					}
					break;
				
				case 1:
					if (!bLocal_808)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_908 + 2000)
						{
							func_159(13);
						}
					}
					bVar7 = false;
					if (MISC::GET_GAME_TIMER() >= iLocal_908 + 13000 && Var2.f_2 >= 550f)
					{
						PAD::SET_PAD_SHAKE(0, 1000, 200);
						func_152();
						bVar7 = true;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0, 75) && Var2.f_2 >= 250f)
					{
						bLocal_702 = true;
						bVar7 = true;
					}
					if (bVar7)
					{
						func_159(13);
						func_716(0);
						GlobalFunc_7206(0, 1, 0, 0);
						iLocal_908 = MISC::GET_GAME_TIMER();
						iLocal_892 = 0;
						bLocal_686 = false;
						iLocal_429 = 2;
					}
					break;
				
				case 2:
					if (!bLocal_702)
					{
						bLocal_702 = func_86("EXL1_BRKPLAN", 0, 0, 0, 0);
					}
					else if (!bLocal_708)
					{
						bLocal_708 = func_86("EXL1_ANGPAR", 0, 0, 0, 0);
						if (bLocal_708)
						{
							RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
						}
					}
					else if (!bLocal_709)
					{
						bLocal_709 = func_86("EXL1_ANGPAR2", 0, 0, 0, 0);
					}
					if (bLocal_686)
					{
						Var8 = { ENTITY::GET_ENTITY_ROTATION(iLocal_524[2], 2) };
						if (Var8.x >= -20f && fVar0 >= 65f)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_524[2], 0, 0f, 0f, 18f, 0f, -18f, 0f, 0, 1, 1, 1, 0, 1);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_524[2], 0, 0f, 0f, -18f, 0f, 18f, 0f, 0, 1, 1, 1, 0, 1);
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_908 + 4800)
					{
						if (!GlobalFunc_111())
						{
							if (!iLocal_769)
							{
								func_715();
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
								PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
								iLocal_769 = 1;
							}
							else
							{
								func_715();
								PAD::SET_PAD_SHAKE(0, 10, 128);
								iLocal_917 = 1;
								PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
								func_171(7, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1);
							}
						}
					}
					break;
			}
			if (!iLocal_692)
			{
				if (iLocal_430 == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[1 /*6*/], 0))
					{
						iVar11 = 0;
						switch (iLocal_514)
						{
							case 0:
								Var12 = { ENTITY::GET_ENTITY_COORDS(iLocal_530, 1) };
								Var15 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_530, 0f, 500f, 0f) };
								Var15.f_2 = Var12.f_2;
								uLocal_1148 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var12, Var15, 50f, 1, iLocal_524[2], 4);
								iLocal_514 = 1;
								break;
							
							case 1:
								iVar18 = SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_1148, &iVar19, &uVar20, &uVar23, &uVar26);
								if (iVar18 == 2)
								{
									if (iVar19 == 0)
									{
										iVar11 = 1;
										iLocal_514 = 0;
									}
									else
									{
										iLocal_514 = 0;
									}
								}
								else if (iVar18 == 0)
								{
									iLocal_514 = 0;
								}
								break;
						}
						if (iLocal_745 && iVar11)
						{
							Var27 = { ENTITY::GET_ENTITY_ROTATION(iLocal_524[2], 2) };
							if (func_170(Local_211[1 /*6*/], iLocal_524[2], 45f) && (((Var27.x < 25f && Var27.x > -25f) && Var27.f_1 < 30f) && Var27.f_1 > -30f))
							{
								if (bLocal_703 && bLocal_704)
								{
									if (!GlobalFunc_111())
									{
										if (func_109())
										{
											iLocal_917 = 0;
											iLocal_608 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() >= iLocal_910 && MISC::GET_GAME_TIMER() >= iLocal_907 + 3000) || bVar5)
			{
				if ((!ENTITY::IS_ENTITY_IN_AIR(iLocal_524[2]) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_524[2])) || bVar5)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_524[2], 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_524[2], 0, 0, 0, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[2], 1);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_524[2], 1);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_524[2], 1);
					VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iLocal_524[2], 1);
					bLocal_767 = true;
					if (bVar5)
					{
						VEHICLE::EXPLODE_VEHICLE(iLocal_524[2], 1, 0);
					}
				}
			}
			if (bLocal_767)
			{
				fLocal_869 = (fLocal_869 + (1f * SYSTEM::TIMESTEP()));
				if (fLocal_869 >= 2f)
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_524[2], 1, 0);
				}
			}
		}
	}
	else if (iLocal_917 == 0)
	{
		func_161();
	}
}

void func_161()//Position - 0xBCA5
{
	switch (iLocal_67)
	{
		case 0:
			func_28(1, 1, 1, 1);
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[1 /*6*/], 0)) && !PED::IS_PED_INJURED(Local_211[1 /*6*/].f_1)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_524[2], ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 1, false, 0, 1);
				Local_852 = { ENTITY::GET_ENTITY_ROTATION(iLocal_524[2], 2) };
				ENTITY::SET_ENTITY_ROTATION(iLocal_524[2], 0f, 0f, Local_852.f_2, 2, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_211[1 /*6*/], iLocal_524[2], 0, Local_837, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[0 /*6*/], 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_211[0 /*6*/], iLocal_524[2], 0, 30f, -40f, -6f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				if (!bLocal_779)
				{
					func_113(4, 0);
				}
				iLocal_691 = 0;
				Local_27.f_4 = MISC::GET_GAME_TIMER();
				Local_27.f_5 = 0;
				Local_27.f_7 = 0;
				iLocal_914 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(1f, 0f, 0f), 1, false, 0, 1);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_914, iLocal_524[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_524[2], "seat_dside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_914, func_120(0), "CALL_RADIO_PLAYER2", 1000f, -8f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[2], 1, 1);
				iLocal_519 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_524[2], 26, func_101(5), -1, 1, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_519, 0);
				iLocal_535 = OBJECT::CREATE_OBJECT(func_101(20), 0f, 1f, 2f, 1, 1, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_535, iLocal_914, "call_radio_radio", func_120(0), 1000f, 1090519040, 0, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_535);
				TASK::TASK_PLAY_ANIM(Local_211[1 /*6*/].f_1, func_120(0), "CALL_RADIO_SECURITY", 1000f, -8f, -1, 2, 0.15f, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_211[1 /*6*/].f_1, 0, 0);
			}
			func_169(4);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.06f);
			func_157(12);
			iLocal_811 = 0;
			iLocal_873 = MISC::GET_GAME_TIMER();
			iLocal_67 = 1;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[1 /*6*/], 0))
			{
				func_167(6.6f, 31.5f, 2.3f, 6.6f, 34.9f, 2.3f, &Local_846, 9f);
				func_167(0f, 28.3f, 2.6f, 0f, 32f, 2.5f, &Local_849, 9f);
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_543, iLocal_524[2], Local_846, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_543, iLocal_524[2], Local_849, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_524[2], 0f, 0f, Local_852.f_2, 2, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[2], 40f);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[2], 1, 1);
				Local_837.f_1 = (Local_837.f_1 + (0.9f * SYSTEM::TIMESTEP()));
				Local_837.f_2 = (Local_837.f_2 - (0.3f * SYSTEM::TIMESTEP()));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_211[1 /*6*/], iLocal_524[2], 0, Local_837, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			if (!bLocal_802)
			{
				if (bLocal_801)
				{
					bLocal_802 = GlobalFunc_2867("EXL1_DEADLY_FORCE");
				}
			}
			if (!bLocal_693)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_873 + 100)
				{
					bLocal_693 = func_86("EXL1_PLWAVE", 0, 0, 0, 0);
					if (bLocal_693)
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 8f, 4);
					}
				}
			}
			else if (!bLocal_694)
			{
				bLocal_694 = func_86("EXL1_FLIPOFF", 0, 0, 0, 0);
			}
			if (!bLocal_611)
			{
				if (GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_872 + 1000)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					bLocal_611 = true;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				bLocal_609 = true;
				iLocal_67 = 2;
			}
			if (!iLocal_811)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_873 + 8700)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_811 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_873 + 9000 && !bLocal_611)
			{
				iLocal_67 = 2;
			}
			break;
		
		case 2:
			if (bLocal_609)
			{
				GlobalFunc_4956();
				SYSTEM::WAIT(800);
			}
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[1 /*6*/], 0)) && !PED::IS_PED_INJURED(Local_211[1 /*6*/].f_1)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_524[2], 0);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[2], 55f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_535))
				{
					OBJECT::DELETE_OBJECT(&iLocal_535);
				}
				func_163(20);
				ENTITY::DETACH_ENTITY(Local_211[1 /*6*/], 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_211[1 /*6*/], 55f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[0 /*6*/], 0))
				{
					ENTITY::DETACH_ENTITY(Local_211[0 /*6*/], 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_211[0 /*6*/], 55f);
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_211[1 /*6*/].f_1);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_519))
				{
					PED::DELETE_PED(&iLocal_519);
				}
				TASK::STOP_ANIM_TASK(Local_211[1 /*6*/].f_1, func_120(0), "CALL_RADIO_SECURITY", -1056964608);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[2], -1);
			}
			Local_211[1 /*6*/].f_2 = 0;
			fLocal_866 = 0f;
			iLocal_513 = 3;
			func_162(3);
			func_159(12);
			func_28(0, 1, 1, 1);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
			iLocal_692 = 1;
			break;
	}
}

void func_162(int iParam0)//Position - 0xC233
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[iVar0 /*6*/], 0) && !PED::IS_PED_INJURED(Local_211[iVar0 /*6*/].f_1))
		{
			Var1 = { 0f, 0f, 0f };
			Var1 = { Var1 };
			switch (iParam0)
			{
				case 7:
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_211[iVar0 /*6*/].f_1, Local_211[iVar0 /*6*/], 2335f, 3397f, 500f, 40f, 0, func_101(11), 262144, 50f, 10000f);
					break;
				
				case 3:
					bLocal_689 = true;
					break;
				
				case 2:
					iLocal_906 = MISC::GET_GAME_TIMER();
					break;
				}
		}
		Local_211[iVar0 /*6*/].f_2 = MISC::GET_GAME_TIMER();
		iVar0++;
	}
	if (iParam0 == 5)
	{
		func_157(13);
		func_159(9);
		func_159(10);
	}
	iLocal_905 = MISC::GET_GAME_TIMER();
	iLocal_430 = iParam0;
}

void func_163(int iParam0)//Position - 0xC315
{
	var uVar0;
	
	if (iLocal_550[iParam0])
	{
		uVar0 = func_101(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(uVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_550[iParam0] = 0;
	}
}




void func_167(struct<3> Param0, struct<3> Param3, var uParam6, float fParam7)//Position - 0xC3A9
{
	func_168(Param0.x, Param3.x, uParam6, fParam7);
	func_168(Param0.f_1, Param3.f_1, &(uParam6->f_1), fParam7);
	func_168(Param0.f_2, Param3.f_2, &(uParam6->f_2), fParam7);
}

void func_168(float fParam0, float fParam1, var uParam2, float fParam3)//Position - 0xC3E1
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar1 = (fParam1 - fParam0);
	fVar2 = (fVar1 / fParam3);
	*uParam2 = (*uParam2 + (fVar2 * fVar0));
}

void func_169(int iParam0)//Position - 0xC409
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	char* sVar8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		fVar7 = 1f;
		sVar8 = "road_vibration_shake";
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, -18.5f, -3f };
				Var3 = { 0f, -50f, -3f };
				fVar6 = 28.98f;
				break;
			
			case 1:
				Var0 = { 0f, -18.5f, -3f };
				Var3 = { 0f, -50f, -3f };
				fVar6 = 26.75f;
				break;
			
			case 2:
				Var0 = { -3f, -45f, -2f };
				Var3 = { 0f, -20f, -2f };
				fVar6 = 24.92f;
				break;
			
			case 3:
				Var0 = { -1.8f, -16f, -1f };
				Var3 = { 1.5f, -30f, -2.3f };
				fVar6 = 28.43f;
				break;
			
			case 4:
				Var0 = { 6.6f, 31.5f, 2.3f };
				Var3 = { 0f, 28.3f, 2.6f };
				fVar6 = 45f;
				fVar7 = 1f;
				break;
			
			case 5:
				Var0 = { 6.6f, 34.9f, 2.3f };
				Var3 = { 0f, 32f, 2.5f };
				fVar6 = 45f;
				break;
			
			case 8:
				Var0 = { 0.9f, 29f, 2.1f };
				Var3 = { -3.2f, 27.6f, 2.45f };
				fVar6 = 35.8f;
				fVar7 = 1.5f;
				break;
			
			case 9:
				Var0 = { 0.75f, 29f, 2.1f };
				Var3 = { -3.2f, 27.9f, 1.82f };
				fVar6 = 35.8f;
				break;
		}
		Local_846 = { Var0 };
		Local_849 = { Var3 };
		func_24(&uLocal_543);
		CAM::ATTACH_CAM_TO_ENTITY(uLocal_543, iLocal_524[2], Var0, 1);
		CAM::POINT_CAM_AT_ENTITY(uLocal_543, iLocal_524[2], Var3, 1);
		CAM::SET_CAM_FOV(uLocal_543, fVar6);
		CAM::SET_CAM_INHERIT_ROLL_VEHICLE(uLocal_543, iLocal_524[2]);
		CAM::SHAKE_CAM(uLocal_543, sVar8, fVar7);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	}
}

int func_170(int iParam0, int iParam1, float fParam2)//Position - 0xC633
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		fVar0 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam0));
		fVar1 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam1));
		fVar2 = (fVar0 - fVar1);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
		if (fVar2 <= fParam2 || fVar2 >= (360f - fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_171(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xC69B
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { func_99(1) };
				fVar3 = 48f;
				break;
			
			case 1:
				Var0 = { func_99(2) + Vector(6f, 0f, 0f) };
				fVar3 = 27.5f;
				break;
			
			case 2:
				Var0 = { func_99(3) + Vector(6f, 0f, 0f) };
				fVar3 = -42.49f;
				break;
			
			case 3:
				Var0 = { func_99(4) + Vector(6f, 0f, 0f) };
				fVar3 = -169.9f;
				break;
			
			case 4:
				Var0 = { func_99(5) + Vector(6f, 0f, 0f) };
				fVar3 = -171.8f;
				break;
			
			case 5:
				Var0 = { 2930.5f, 810.389f, 448.3599f };
				fVar3 = 180f;
				break;
			
			case 6:
				Var0 = { func_99(7) + Vector(10f, 0f, 0f) };
				fVar3 = 121f;
				break;
			
			case 7:
				if (!bLocal_607)
				{
					Var0 = { 1904.1f, 4091.2f, 1458.9f };
					fVar3 = 160f;
				}
				else
				{
					Var0 = { func_99(18) };
					fVar3 = 21.38f;
				}
				break;
		}
		func_27();
		if (bParam5)
		{
			MISC::CLEAR_AREA(Var0, 10000f, 1, 0, 0, 0);
		}
		SYSTEM::WAIT(0);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
		if (GlobalFunc_199() && !iLocal_765)
		{
			GlobalFunc_5116(Var0, fVar3, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar3);
		}
	}
	func_709(iParam0, 1, 0);
	func_704(iParam0, 1, 0);
	func_700(iParam0, 1, 0);
	func_695(iParam0, 1, 0);
	func_690(iParam0, 1, 0);
	func_683(iParam0, 1, 0);
	func_678(iParam0, 1, 0);
	func_677(1);
	if (bParam10)
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	iLocal_66 = 0;
	func_675(iParam0, bParam9);
	if (bParam7)
	{
		func_21();
	}
	GlobalFunc_7206((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	if (bParam8)
	{
		GlobalFunc_4948(&Local_27, 0, 0);
		func_159(3);
		func_159(11);
		func_159(19);
		iLocal_815 = 0;
		iLocal_820 = 0;
	}
	if (bParam1)
	{
		iVar4 = func_674(iParam0);
		iVar5 = GlobalFunc_237(iVar4);
		if (GlobalFunc_8315() != iVar4)
		{
			while (!func_521(&(uLocal_432[iVar5]), iVar4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-1f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_9134(&uLocal_432, iVar5))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_10924(&uLocal_432, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			iVar6 = 0;
			while (iVar6 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[iVar6]))
				{
					PED::DELETE_PED(&(uLocal_432[iVar6]));
				}
				iVar6++;
			}
		}
	}
	if (bParam1 || iParam4)
	{
		if (bParam1)
		{
			iVar7 = 0;
			while (iVar7 <= 9)
			{
				GlobalFunc_200(&uLocal_983, iVar7);
				iVar7++;
			}
		}
		GlobalFunc_173(&uLocal_983, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		uLocal_432.f_6 = GlobalFunc_237(func_674(iParam0));
		func_465(iParam0);
		func_464(PLAYER::PLAYER_PED_ID(), func_674(iParam0), iParam0);
		if (bParam1)
		{
			GlobalFunc_2868();
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (iParam0 == 1)
	{
		GlobalFunc_2224(0);
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_1150))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_1150);
				}
				if (!GlobalFunc_199())
				{
					iVar8 = MISC::GET_GAME_TIMER() + 5000;
					if (!STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
					{
						func_461();
					}
					while (MISC::GET_GAME_TIMER() <= iVar8 && !STREAMING::STREAMVOL_HAS_LOADED(uLocal_1149))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 0);
			}
			func_460(0, bParam1);
			if (bParam1)
			{
				func_459();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[0], 0) && !PED::IS_PED_INJURED(iLocal_516))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_516, iLocal_524[0], 20000, 0, 1f, 1, 0);
				}
			}
			func_344(bParam1);
			if ((!PED::IS_PED_INJURED(iLocal_516) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[0], 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			}
			break;
		
		case 1:
			func_342();
			if (bParam1)
			{
				if (GlobalFunc_199())
				{
					if (GlobalFunc_7698())
					{
						if (GlobalFunc_5667(GlobalFunc_622(), 0f, 0f, 0f, 1))
						{
							iLocal_528 = GlobalFunc_9749(2134.08f, 4808.97f, 40.79f, 154.6f);
						}
					}
				}
				iLocal_550[21] = 0;
				func_460(1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[1], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_524[1]);
				}
			}
			else
			{
				func_288(2, func_99(6), 0f, 1, 1, 0);
				func_287();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_524[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 0);
			}
			GlobalFunc_173(&uLocal_983, 4, 0, "MERCPLANE", 0, 1);
			func_286();
			func_157(1);
			func_285(1);
			break;
		
		case 2:
			if (bParam1)
			{
				iLocal_430 = 0;
				bLocal_790 = true;
				bLocal_791 = true;
				bLocal_792 = true;
				bLocal_793 = false;
				bLocal_794 = false;
				bLocal_795 = false;
				bLocal_796 = false;
				iLocal_814 = 1;
				iLocal_874 = 2;
				iLocal_878 = 0;
				iLocal_920 = 0;
				iLocal_921 = 0;
				fLocal_859 = 0f;
				iLocal_876 = 4;
				fLocal_855 = 0.9f;
				fLocal_858 = 0f;
				iLocal_925 = -1;
				iLocal_652 = 1;
				iLocal_631 = 1;
				bLocal_632 = false;
				bLocal_633 = true;
				bLocal_634 = true;
				iLocal_636 = 1;
				bLocal_635 = true;
				iLocal_637 = 0;
				bLocal_638 = false;
				iLocal_639 = 0;
				iLocal_640 = 0;
				iLocal_641 = 0;
				iLocal_642 = 0;
				bLocal_643 = false;
				iLocal_644 = 0;
				bLocal_648 = true;
				iLocal_649 = 1;
				bLocal_651 = true;
				iLocal_650 = 0;
				iLocal_662 = 0;
				iLocal_663 = 0;
				iLocal_732 = 0;
				bLocal_733 = false;
				iLocal_815 = 0;
				bLocal_766 = false;
				bLocal_786 = false;
				iLocal_909 = MISC::GET_GAME_TIMER() + 400;
				iLocal_879 = (MISC::GET_GAME_TIMER() - 7000);
				func_286();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
				{
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 0);
				}
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[1], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_524[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[1], 55f);
				}
				func_285(2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 1);
				}
				GlobalFunc_173(&uLocal_983, 4, 0, "MERCPLANE", 0, 1);
				GlobalFunc_173(&uLocal_983, 3, 0, "NervousRon", 0, 1);
				func_157(2);
				GlobalFunc_2867("EXL1_RELOAD_AROUND_THE_COAST");
			}
			break;
		
		case 3:
			func_159(2);
			func_157(4);
			if (bParam1)
			{
				iLocal_430 = 0;
				bLocal_790 = true;
				bLocal_791 = true;
				bLocal_792 = true;
				bLocal_793 = true;
				bLocal_794 = true;
				bLocal_795 = false;
				bLocal_796 = false;
				iLocal_814 = 1;
				iLocal_874 = 2;
				fLocal_859 = 0f;
				iLocal_876 = 6;
				iLocal_878 = 0;
				fLocal_855 = 0.75f;
				fLocal_858 = 0f;
				iLocal_925 = -1;
				iLocal_652 = 1;
				iLocal_631 = 1;
				bLocal_632 = true;
				bLocal_633 = true;
				bLocal_634 = true;
				iLocal_636 = 1;
				bLocal_635 = true;
				iLocal_637 = 0;
				bLocal_638 = false;
				iLocal_639 = 0;
				iLocal_640 = 0;
				iLocal_641 = 0;
				iLocal_642 = 0;
				bLocal_643 = false;
				iLocal_644 = 0;
				bLocal_648 = true;
				iLocal_649 = 1;
				iLocal_650 = 0;
				bLocal_651 = true;
				iLocal_662 = 0;
				iLocal_663 = 0;
				iLocal_732 = 0;
				bLocal_733 = false;
				iLocal_815 = 0;
				bLocal_766 = false;
				iLocal_909 = MISC::GET_GAME_TIMER() + 400;
				func_286();
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[1], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_524[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[1], 55f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
				{
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 0);
				}
				func_285(3);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 1);
				}
				GlobalFunc_173(&uLocal_983, 4, 0, "MERCPLANE", 0, 1);
				GlobalFunc_173(&uLocal_983, 3, 0, "NervousRon", 0, 1);
				GlobalFunc_2867("EXL1_START_CLIMB_RT");
			}
			break;
		
		case 4:
			if (bParam1)
			{
				Global_86805 = 0;
				func_277(1, 0, 1, 0, 1);
				fLocal_855 = 0.7f;
				iLocal_815 = 0;
				iLocal_652 = 1;
				bLocal_766 = false;
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_173(&uLocal_983, 4, 0, "MERCPLANE", 0, 1);
				func_285(4);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
				{
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[1], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_524[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[1], 55f);
				}
				iLocal_874 = 2;
				GlobalFunc_173(&uLocal_983, 3, 0, "NervousRon", 0, 1);
				GlobalFunc_2867("EXL1_RELOAD_ENTER_CARGO");
			}
			else
			{
				func_276();
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
			{
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_524[1]);
			}
			func_273(1);
			iLocal_888 = MISC::GET_GAME_TIMER();
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_530))
			{
				OBJECT::DELETE_OBJECT(&iLocal_530);
			}
			GRAPHICS::_0x02369D5C8A51FDCF(1);
			AUDIO::STOP_STREAM();
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			func_272(1);
			if (bParam1)
			{
				func_271(5);
			}
			if (bParam1)
			{
				SYSTEM::WAIT(500);
			}
			if (!bParam1)
			{
				func_98(3, 1065353216);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_524[2], 1);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 1);
				ENTITY::_SET_ENTITY_DECALS_DISABLED(iLocal_524[2], 1);
			}
			if (bParam1)
			{
				func_270();
			}
			if (bParam1)
			{
				Global_86805 = 0;
				func_277(1, 1, 1, 1, 1);
				func_100(1);
				func_269(1);
				GlobalFunc_173(&uLocal_983, 4, 0, "MERCPLANE", 0, 1);
			}
			else
			{
				Global_86805 = 0;
			}
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_117(func_99(9)), 1, !bParam1, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_524[2]) - 90f));
				}
			}
			func_268(1);
			func_266();
			func_265(14000);
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
			if (bParam1)
			{
				func_264();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (bParam1)
			{
				SYSTEM::WAIT(500);
			}
			if (bParam1)
			{
				GlobalFunc_2867("EXL1_RELOAD_FIGHT_BEGINS");
			}
			else
			{
				GlobalFunc_2867("EXL1_FIGHT_BEGINS");
			}
			func_157(7);
			iLocal_889 = MISC::GET_GAME_TIMER();
			break;
		
		case 6:
			AUDIO::STOP_STREAM();
			func_286();
			func_100(0);
			HUD::SET_RADAR_ZOOM_PRECISE(0f);
			HUD::SET_WAYPOINT_OFF();
			GRAPHICS::_0x02369D5C8A51FDCF(1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[2], 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[2], -1);
				}
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_524[2], 0);
				VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_524[2], 0);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_524[2]);
				VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_524[2], 2, 1);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_524[2], 0);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 0);
				ENTITY::_SET_ENTITY_DECALS_DISABLED(iLocal_524[2], 1);
			}
			if (bParam1)
			{
				func_277(1, 0, 1, 0, 1);
				func_263(0);
			}
			func_262(1);
			AUDIO::_0x58BB377BEC7CD5F4(0, 1);
			func_261();
			GlobalFunc_173(&uLocal_983, 3, 0, "NervousRon", 0, 1);
			func_260(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_524[2], 4);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[2], 55f);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_524[2], 3);
			}
			MISC::CLEAR_AREA(func_99(7), 100f, 1, 0, 0, 0);
			if (bParam1)
			{
				GlobalFunc_2867("EXL1_RELOAD_FLY_CARGO");
			}
			func_159(8);
			func_157(9);
			iLocal_875 = MISC::GET_GAME_TIMER() + 8000;
			iLocal_907 = MISC::GET_GAME_TIMER();
			uLocal_537 = func_257(func_99(19), 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			break;
		
		case 7:
			GlobalFunc_2242();
			func_159(9);
			func_159(10);
			if (bParam1)
			{
				func_716(1);
			}
			GRAPHICS::_0x02369D5C8A51FDCF(1);
			iVar9 = 0;
			while (iVar9 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar9 /*6*/].f_1))
				{
					PED::DELETE_PED(&(Local_211[iVar9 /*6*/].f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar9 /*6*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_211[iVar9 /*6*/]));
				}
				iVar9++;
			}
			iVar9 = 0;
			while (iVar9 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_224[iVar9 /*14*/].f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_224[iVar9 /*14*/].f_1));
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_224[iVar9 /*14*/].f_2))
				{
					GRAPHICS::REMOVE_PARTICLE_FX(Local_224[iVar9 /*14*/].f_2, 0);
				}
				iVar9++;
			}
			AUDIO::_0x58BB377BEC7CD5F4(0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_524[2], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_524[2], 2);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 1);
				ENTITY::_SET_ENTITY_DECALS_DISABLED(iLocal_524[2], 1);
			}
			if (!bLocal_607)
			{
				func_271(7);
				if (bParam1)
				{
					SYSTEM::WAIT(500);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
				{
					VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_524[2], 1);
				}
				func_255(7);
				func_254();
				func_113(4, 0);
				func_113(1, 0);
				func_143();
				SYSTEM::WAIT(0);
				if (bParam1)
				{
					func_277(1, 0, 1, 0, 0);
				}
				if (!bParam1)
				{
					func_98(3, 1065353216);
					func_98(1, 1065353216);
				}
				func_263(1);
				func_261();
				func_262(0);
				iLocal_898 = 3;
				iLocal_899 = 1;
				if (!bParam1)
				{
					func_260(1);
				}
				func_115(0, 0);
				func_252();
				func_100(1);
				GlobalFunc_6685(0);
				func_729();
			}
			else
			{
				func_250();
				GlobalFunc_7206(1, 1, 1, 0);
				bLocal_714 = true;
				iLocal_723 = 1;
				iLocal_918 = (MISC::GET_GAME_TIMER() - 1500);
			}
			GlobalFunc_173(&uLocal_983, 3, 0, "NervousRon", 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			if (!bLocal_607)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(20f, 1065353216);
			}
			if (bParam1)
			{
			}
			if (!bLocal_607)
			{
				if (bParam1)
				{
					GlobalFunc_2867("EXL1_RELOAD_ESCAPE_CARGO");
				}
				else
				{
					GlobalFunc_2867("EXL1_READY_TO_JUMP");
				}
			}
			if (!bLocal_607)
			{
				func_159(13);
				func_159(14);
				func_157(15);
			}
			AUDIO::PLAY_SOUND_FROM_COORD(uLocal_939, "Transition_Sound", 1903.29f, 4085.2f, 1462.66f, "EXILE_1", 0, 0, 0);
			func_265(8000);
			iLocal_890 = MISC::GET_GAME_TIMER();
			break;
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iParam0 == 5)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(1);
	}
	else
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
	}
	if (iParam0 <= 4)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	}
	if (iParam0 > 0)
	{
		GlobalFunc_563(1);
	}
	else
	{
		GlobalFunc_563(0);
	}
	if (iParam0 == 0)
	{
		GlobalFunc_2434(3, 0);
	}
	else
	{
		GlobalFunc_2427(3, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
	}
	PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
	HUD::CLEAR_GPS_FLAGS();
	if (bParam1)
	{
		if (iParam0 > 0)
		{
			if (iParam0 != 5)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
	}
	PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	iVar10 = 0;
	if (iParam0 >= 7)
	{
		iVar10 = 1;
	}
	if (func_245(iParam0))
	{
		func_176(iParam0, func_244(iParam0), iVar10, 0, 0, iParam0 != 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_871 = 0;
		}
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_765)
		{
			if (GlobalFunc_199())
			{
				if (GlobalFunc_188())
				{
					switch (iParam0)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							iVar11 = iLocal_524[1];
							break;
						
						case 6:
							iVar11 = iLocal_524[2];
							break;
					}
					iVar12 = 1;
					if (iParam0 == 5 || iParam0 == 7)
					{
						if (!bLocal_607)
						{
							iVar12 = 0;
						}
					}
					GlobalFunc_5108(iVar11, -1, iVar12);
					iLocal_765 = 1;
				}
			}
		}
		switch (iParam0)
		{
			case 1:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				break;
			
			case 5:
				SYSTEM::WAIT(0);
				func_98(3, 1065353216);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 || PLAYER::_0xB9CF1F793A9F1BF1())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(8.4f, 1065353216);
				}
				break;
			
			case 6:
				SYSTEM::WAIT(0);
				func_98(4, 1065353216);
				iVar13 = MISC::GET_GAME_TIMER() + 1000;
				while (MISC::GET_GAME_TIMER() < iVar13)
				{
					SYSTEM::WAIT(0);
				}
				break;
			
			case 7:
				SYSTEM::WAIT(0);
				func_98(3, 1065353216);
				func_98(1, 1065353216);
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
			}
			break;
		
		case 5:
			if (!bParam1)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && !PLAYER::_0xB9CF1F793A9F1BF1())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(8.4f, 1065353216);
				}
			}
			break;
		
		case 7:
			if (!bLocal_607)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_172(), 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_524[2]) - 180f));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iLocal_935);
				PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), 6);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 1, 0);
				func_715();
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 1, 1, 0);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 500, 0, 1, 0);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			break;
	}
	if (bParam1)
	{
		if (bParam6)
		{
			if (!bLocal_607)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
		else if (bLocal_607)
		{
			if (iParam0 == 7)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	iLocal_922 = MISC::GET_GAME_TIMER();
	iLocal_62 = iParam0;
}

Vector3 func_172()//Position - 0xD96F
{
	return func_117(-0.8f, 22.4f, -3.8f);
}




void func_176(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xDA8B
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			uVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7706(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		GlobalFunc_10923(iParam0, sParam1, iParam4, bParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}




































































char* func_244(int iParam0)//Position - 0x14804
{
	switch (iParam0)
	{
		case 0:
			return "Get to airstrip";
			break;
		
		case 1:
			return "Follow cargo plane - out to sea";
			break;
		
		case 2:
			return "Follow cargo plane - around coast";
			break;
		
		case 3:
			return "Follow cargo plane - allow climb";
			break;
		
		case 4:
			return "Enter cargo plane";
			break;
		
		case 5:
			return "Fight on plane";
			break;
		
		case 6:
			return "Fly the plane";
			break;
		
		case 7:
			return "Escape the plane";
			break;
	}
	return "invalid";
}

int func_245(int iParam0)//Position - 0x14897
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
	}
	return 0;
}





void func_250()//Position - 0x149D3
{
	int iVar0;
	
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	func_27();
	TASK::REMOVE_COVER_POINT(uLocal_547);
	TASK::REMOVE_COVER_POINT(uLocal_548);
	TASK::REMOVE_COVER_POINT(uLocal_549);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	iVar0 = 0;
	while (iVar0 < Local_224)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_224[iVar0 /*14*/].f_12))
		{
			AUDIO::STOP_SOUND(Local_224[iVar0 /*14*/].f_12);
		}
		iVar0++;
	}
	HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f);
	AUDIO::STOP_STREAM();
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1149);
	}
	func_251();
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_113(iVar0, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_432[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_281)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_281[iVar0 /*17*/]))
		{
			PED::DELETE_PED(&(Local_281[iVar0 /*17*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_516))
	{
		PED::DELETE_PED(&iLocal_516);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_517))
	{
		PED::DELETE_PED(&iLocal_517);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_518))
	{
		PED::DELETE_PED(&iLocal_518);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_519))
	{
		PED::DELETE_PED(&iLocal_519);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_520[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_520[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar0 /*6*/].f_1))
		{
			PED::DELETE_PED(&(Local_211[iVar0 /*6*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar0 /*6*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_211[iVar0 /*6*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_524)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_524[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_528))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_528);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_529))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_529);
	}
	iVar0 = 0;
	while (iVar0 < Local_68.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iVar0 /*3*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_68[iVar0 /*3*/]));
			Local_68[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_93.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_93[iVar0 /*3*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_93[iVar0 /*3*/]));
			Local_93[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_118.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_118[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_118[iVar0 /*3*/]));
			Local_118[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_158.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_158[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_158[iVar0 /*3*/]));
			Local_158[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_198.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_198[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_198[iVar0 /*3*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_224)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_224[iVar0 /*14*/].f_1))
		{
			OBJECT::DELETE_OBJECT(&(Local_224[iVar0 /*14*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_530))
	{
		OBJECT::DELETE_OBJECT(&iLocal_530);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_531))
	{
		OBJECT::DELETE_OBJECT(&iLocal_531);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_532))
	{
		OBJECT::DELETE_OBJECT(&iLocal_532);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_533))
	{
		OBJECT::DELETE_OBJECT(&iLocal_533);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		OBJECT::DELETE_OBJECT(&iLocal_534);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_535))
	{
		OBJECT::DELETE_OBJECT(&iLocal_535);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_543))
	{
		CAM::DESTROY_CAM(uLocal_543, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_545))
	{
		CAM::DESTROY_CAM(uLocal_545, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_546))
	{
		CAM::DESTROY_CAM(uLocal_546, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_224)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_224[iVar0 /*14*/].f_2))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_224[iVar0 /*14*/].f_2, 0);
		}
		iVar0++;
	}
	MISC::CLEAR_AREA(func_99(1), 10000f, 1, 0, 0, 0);
}

void func_251()//Position - 0x14DCD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_159(iVar0);
		iVar0++;
	}
}

void func_252()//Position - 0x14DEE
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	Var1 = { Var1 };
	Var4 = { Var4 };
	Var7 = { Var7 };
	Var10 = { Var10 };
	iVar0 = 0;
	while (iVar0 < Local_198.x)
	{
		Local_198[iVar0 /*3*/] = OBJECT::CREATE_OBJECT(func_101(14), func_253(iVar0, 1), 1, 1, 0);
		switch (iVar0)
		{
			case 0:
			case 2:
			case 3:
				Var1 = { 1f, 0f, 0f };
				Var4 = { -1f, 0f, 0f };
				Var7 = { 0f, 1f, 0f };
				Var10 = { 0f, -1f, 0f };
				break;
			
			case 1:
			case 4:
				Var1 = { -1f, 0f, 0f };
				Var4 = { 1f, 0f, 0f };
				Var7 = { 0f, -1f, 0f };
				Var10 = { 0f, 1f, 0f };
				break;
		}
		Local_198[iVar0 /*3*/].f_1 = 0;
		Local_198[iVar0 /*3*/].f_2 = 0;
		ENTITY::FREEZE_ENTITY_POSITION(Local_198[iVar0 /*3*/], 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_198[iVar0 /*3*/], 0);
		ENTITY::SET_ENTITY_LOD_DIST(Local_198[iVar0 /*3*/], 1000);
		iVar0++;
	}
}

Vector3 func_253(int iParam0, bool bParam1)//Position - 0x14EDB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	switch (iParam0)
	{
		case 0:
			fVar0 = 1.8f;
			fVar1 = 25f;
			fVar2 = -0.3f;
			break;
		
		case 1:
			fVar0 = -1.6f;
			fVar1 = 24.1f;
			fVar2 = -0.5f;
			break;
		
		case 2:
			fVar0 = -1.9f;
			fVar1 = 23.5f;
			fVar2 = -2.2f;
			break;
		
		case 3:
			fVar0 = -0.1f;
			fVar1 = 23.2f;
			fVar2 = -0.4f;
			break;
		
		case 4:
			fVar0 = -2f;
			fVar1 = -15.6f;
			fVar2 = -1.1f;
			break;
	}
	if (bParam1)
	{
		return func_117(fVar0, fVar1, fVar2);
	}
	return fVar0, fVar1, fVar2;
}

void func_254()//Position - 0x14F9B
{
	Local_424 = { Local_418.f_5, Local_418.f_2, 0f };
	Local_424.f_3 = 0f;
	Local_424.f_4 = 0f;
}

void func_255(int iParam0)//Position - 0x14FBF
{
	switch (iParam0)
	{
		case 5:
			Local_418.f_2 = 0f;
			Local_418.f_5 = 11.5f;
			break;
		
		case 7:
			Local_418.f_2 = 0f;
			Local_418.f_5 = 0f;
			break;
	}
}


int func_257(struct<3> Param0, int iParam3)//Position - 0x15008
{
	if (func_109())
	{
		return GlobalFunc_5914(Param0, iParam3);
	}
	return 0;
}



void func_260(bool bParam0)//Position - 0x15068
{
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(uLocal_938))
	{
		AUDIO::STOP_SOUND(iLocal_938);
	}
}

void func_261()//Position - 0x15098
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_68.x)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_68[iVar0 /*3*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_68[iVar0 /*3*/]));
			}
		}
		iVar0++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_524[2], 2, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[0 /*3*/], 0))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_68[0 /*3*/], 1, 1);
	}
}

void func_262(int iParam0)//Position - 0x15102
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_68.x)
	{
		if (!Local_68[iVar0 /*3*/].f_1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_68[iVar0 /*3*/]))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_68[iVar0 /*3*/], iParam0, iParam0, iParam0, iParam0, iParam0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_263(int iParam0)//Position - 0x1514E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_118.x)
	{
		iVar1 = iVar0;
		if (iVar1 < 8 || iParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_118[iVar0 /*3*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_118[iVar0 /*3*/]));
			}
		}
		iVar0++;
	}
}

void func_264()//Position - 0x15194
{
	uLocal_547 = TASK::ADD_COVER_POINT(2930.45f, 810.2f, 448.4f, 180f, 2, 0, 0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), 2930.5f, 810.2f, 448.4f, -1, 0, 0f, 1, 0, uLocal_547, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
}

void func_265(int iParam0)//Position - 0x151ED
{
	if (iParam0 >= 0)
	{
		iLocal_875 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		iLocal_875 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
	}
}

void func_266()//Position - 0x1521A
{
	int iVar0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		iVar0 = 0;
		while (iVar0 <= 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_520[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { 0f, 26.8826f, 2.077f };
						break;
					
					case 1:
						Var1 = { -0.710986f, 27.1286f, 1.99338f };
						break;
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_520[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_520[iVar0], func_117(Var1), 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_520[iVar0], 0f);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_520[iVar0], func_267(0), -1, 1, 1);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_520[iVar0], PLAYER::PLAYER_PED_ID(), -1, 1);
			}
			iVar0++;
		}
	}
}

int func_267(int iParam0)//Position - 0x152E5
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_appistol");
			break;
		
		case 2:
			return joaat("weapon_combatmg");
			break;
		
		case 1:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 3:
			return joaat("weapon_rpg");
			break;
		
		case 4:
			return joaat("weapon_pistol");
			break;
		
		case 5:
			return joaat("weapon_assaultrifle");
			break;
	}
	return joaat("weapon_unarmed");
}

void func_268(bool bParam0)//Position - 0x1535F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
		iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0);
		iVar3 = -1;
		bVar4 = true;
		if (((iVar1 != joaat("GROUP_PISTOL") && iVar1 != joaat("GROUP_SMG")) && iVar1 != joaat("GROUP_RIFLE")) && iVar1 != joaat("GROUP_MG"))
		{
			bVar4 = false;
		}
		else
		{
			switch (iVar1)
			{
				case joaat("GROUP_PISTOL"):
					iVar5 = 30;
					break;
				
				case joaat("GROUP_SMG"):
					iVar5 = 90;
					break;
				
				case joaat("GROUP_RIFLE"):
					iVar5 = 90;
					break;
				
				case joaat("GROUP_MG"):
					iVar5 = 100;
					break;
				
				case joaat("GROUP_SHOTGUN"):
					iVar5 = 12;
					break;
			}
			if (iVar2 < iVar5)
			{
				iVar3 = iVar5;
			}
		}
		if (bVar4)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, iParam0);
			if (iVar3 >= 0)
			{
				WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, 1));
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar0, iVar3);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), func_267(5), 90, 1, 1);
		}
	}
}

void func_269(bool bParam0)//Position - 0x15470
{
	if (bParam0)
	{
		func_98(10, 1065353216);
		func_98(11, 1065353216);
		func_98(12, 1065353216);
		func_98(14, 1065353216);
		func_98(15, 1065353216);
	}
	else
	{
		func_113(9, 1);
		func_113(10, 1);
		func_113(11, 1);
		func_113(12, 1);
		func_113(13, 1);
		func_113(14, 1);
		func_113(15, 1);
	}
}

void func_270()//Position - 0x154E8
{
	func_255(5);
	func_254();
	func_143();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_524[2], 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_524[2], 1);
	VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_524[2], 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_524[2], 2, 1);
	}
}

void func_271(int iParam0)//Position - 0x15538
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2]);
		}
		if (iParam0 == 5)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_524[2], 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2], iVar0, func_26(), 1);
		fLocal_862 = 1E-12f;
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_524[2], fLocal_862);
		ENTITY::SET_ENTITY_PROOFS(iLocal_524[2], 1, 1, 1, 1, 1, 0, 0, 0);
		VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[2], 0);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_524[2], 0);
		VEHICLE::CONTROL_LANDING_GEAR(iLocal_524[2], 3);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[2], 1, 1);
	}
}

void func_272(bool bParam0)//Position - 0x155E4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_516))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&iLocal_516);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_516);
		}
	}
	GlobalFunc_200(&uLocal_983, 3);
	func_163(2);
}

void func_273(bool bParam0)//Position - 0x15619
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (bParam0)
	{
		iLocal_914 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_914, iLocal_524[2], 0);
	}
	iVar0 = 1;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		iLocal_520[iVar0] = PED::CREATE_PED(26, func_101(7), 0f, 1f, 0f, 0f, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_520[iVar0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_520[iVar0], iLocal_982);
		GlobalFunc_593(iLocal_520[iVar0], 0);
		PED::SET_PED_KEEP_TASK(iLocal_520[iVar0], 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 208, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 249, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 188, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_520[iVar0], 0);
		func_274(iVar0, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_520[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_520[iVar0], 1);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_520[iVar0], 0);
		PED::SET_PED_CAN_RAGDOLL(iLocal_520[iVar0], 0);
		switch (iVar1)
		{
			case 1:
				iVar2 = func_267(2);
				sVar3 = "RampShooting_GUY2";
				PED::SET_PED_ACCURACY(iLocal_520[iVar0], 7);
				break;
			
			case 2:
				iVar2 = func_267(3);
				sVar3 = "RampShooting_GUY1";
				PED::SET_PED_ACCURACY(iLocal_520[iVar0], 100);
				break;
		}
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_520[iVar0], iVar2, -1, 1, 1);
		if (bParam0)
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_520[iVar0], iLocal_914, func_120(0), sVar3, 1000f, -1000f, 0, 0, 1148846080, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_520[iVar0], 0, 0);
		}
		if (iVar1 == 1)
		{
			GlobalFunc_173(&uLocal_983, 6, 0, "MERC1", 0, 1);
		}
		iVar0++;
	}
}

void func_274(int iParam0, bool bParam1)//Position - 0x157CE
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
	int iVar11;
	int iVar12;
	
	if (bParam1)
	{
		iVar0 = iLocal_520[iParam0];
	}
	else
	{
		iVar0 = Local_281[iParam0 /*17*/];
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		iVar9 = -1;
		iVar10 = -1;
		iVar11 = -1;
		iVar12 = -1;
		if (bParam1)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = 0;
					iVar5 = 1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					break;
				
				case 2:
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = 4;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 1;
					break;
				
				case 1:
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 2;
					iVar6 = 2;
					iVar7 = 1;
					iVar8 = 0;
					iVar11 = 0;
					iVar12 = 0;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 2;
					iVar11 = 0;
					iVar12 = 1;
					break;
				
				case 1:
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 5;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 1;
					break;
				
				case 2:
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = 1;
					iVar6 = 1;
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					iVar11 = 1;
					iVar12 = 0;
					break;
				
				case 3:
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 4;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					break;
				
				case 4:
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 4;
					iVar6 = 1;
					iVar7 = 0;
					iVar8 = 2;
					iVar11 = 0;
					iVar12 = 0;
					break;
				
				case 5:
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = 2;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 0;
					iVar11 = 0;
					iVar12 = 2;
					break;
				
				case 6:
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 1;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 2;
					break;
				
				case 7:
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 2;
					iVar4 = 1;
					iVar5 = 3;
					iVar6 = 0;
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					break;
				}
		}
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, iVar1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, iVar2, iVar3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, iVar4, iVar5, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, iVar6, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, iVar7, iVar8, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 9, 0, 0, 0);
		PED::CLEAR_PED_PROP(iVar0, 1);
		PED::CLEAR_PED_PROP(iVar0, 0);
		if (iVar9 >= 0)
		{
			PED::SET_PED_PROP_INDEX(iVar0, 1, iVar9, iVar10, false);
		}
		if (iVar11 >= 0)
		{
			PED::SET_PED_PROP_INDEX(iVar0, 0, iVar11, iVar12, false);
		}
	}
}


void func_276()//Position - 0x15AD0
{
	Global_86805 = 0;
	func_277(1, 0, 1, 0, 1);
	if (bLocal_796)
	{
		GlobalFunc_2867("EXL1_CARGO_DOORS_OPEN");
	}
}

void func_277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x15AF5
{
	if (bParam0)
	{
		func_283(bParam2, 0);
		if (bParam4)
		{
			func_280(bParam2, 0);
		}
	}
	if (bParam1)
	{
		func_278();
		if (bParam3)
		{
		}
	}
}

void func_278()//Position - 0x15B23
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_281)
	{
		Local_281[iVar0 /*17*/] = PED::CREATE_PED(26, func_101(7), func_279(iVar0), 0f, 1, 1);
		switch (iVar0)
		{
			case 1:
			case 5:
			case 6:
				iVar1 = func_267(1);
				break;
			
			default:
				iVar1 = func_267(0);
				break;
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_281[iVar0 /*17*/], iVar1, -1, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281[iVar0 /*17*/], 1);
		PED::SET_PED_KEEP_TASK(Local_281[iVar0 /*17*/], 1);
		PED::SET_PED_DIES_WHEN_INJURED(Local_281[iVar0 /*17*/], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_281[iVar0 /*17*/], iLocal_982);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_281[iVar0 /*17*/], 0, iLocal_982);
		PED::SET_PED_ACCURACY(Local_281[iVar0 /*17*/], 0);
		PED::_0x2735233A786B1BEF(Local_281[iVar0 /*17*/], 1f);
		GlobalFunc_593(Local_281[iVar0 /*17*/], 0);
		PED::SET_PED_CONFIG_FLAG(Local_281[iVar0 /*17*/], 208, 1);
		PED::SET_PED_CONFIG_FLAG(Local_281[iVar0 /*17*/], 118, 0);
		PED::SET_PED_CONFIG_FLAG(Local_281[iVar0 /*17*/], 249, 1);
		PED::SET_PED_CONFIG_FLAG(Local_281[iVar0 /*17*/], 188, 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_281[iVar0 /*17*/], 16);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_281[iVar0 /*17*/], 0);
		PED::SET_PED_CONFIG_FLAG(Local_281[iVar0 /*17*/], 132, 1);
		PED::SET_COMBAT_FLOAT(Local_281[iVar0 /*17*/], 1, 3f);
		PED::SET_COMBAT_FLOAT(Local_281[iVar0 /*17*/], 3, 1f);
		PED::SET_PED_CAN_RAGDOLL(Local_281[iVar0 /*17*/], 0);
		func_274(iVar0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_281[iVar0 /*17*/], PLAYER::PLAYER_PED_ID(), -1, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_281[iVar0 /*17*/], 0, 0);
		Local_281[iVar0 /*17*/].f_10 = 0f;
		Local_281[iVar0 /*17*/].f_9 = 0;
		Local_281[iVar0 /*17*/].f_14 = 0;
		Local_281[iVar0 /*17*/].f_16 = 0;
		iVar0++;
	}
}

Vector3 func_279(int iParam0)//Position - 0x15CCE
{
	float fVar0;
	float fVar1;
	
	switch (iParam0)
	{
		case 0:
			fVar0 = -2.1f;
			fVar1 = -16.7f;
			break;
		
		case 1:
			fVar0 = 0.2f;
			fVar1 = -10.1f;
			break;
		
		case 2:
			fVar0 = 1.9f;
			fVar1 = -4.9f;
			break;
		
		case 3:
			fVar0 = -0.4f;
			fVar1 = 1.2f;
			break;
		
		case 4:
			fVar0 = -2.2f;
			fVar1 = 5.8f;
			break;
		
		case 6:
			fVar0 = 1.1f;
			fVar1 = 8.5f;
			break;
		
		case 7:
			fVar0 = 0.1f;
			fVar1 = 18.9f;
			break;
		
		case 5:
			fVar0 = -2f;
			fVar1 = 20f;
			break;
	}
	return func_117(fVar0, fVar1, -4f);
}

void func_280(bool bParam0, bool bParam1)//Position - 0x15DA2
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	
	if (!bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Local_118.x)
		{
			iVar2 = iVar0;
			iVar3 = func_282(iVar2);
			if (iVar3 == 1)
			{
				uVar1 = func_101(13);
			}
			else
			{
				uVar1 = func_101(14);
			}
			Local_118[iVar0 /*3*/] = OBJECT::CREATE_OBJECT(uVar1, func_281(iVar2, 1), 1, 1, 0);
			Local_118[iVar0 /*3*/].f_2 = iVar3;
			Local_118[iVar0 /*3*/].f_1 = 0;
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_118[iVar0 /*3*/], 0);
			if (bParam0)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_118[iVar0 /*3*/], iLocal_524[2], 0, func_281(iVar2, 0), 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
			}
			iVar0++;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_529, 0))
	{
		iVar0 = 0;
		while (iVar0 < Local_158.x)
		{
			iVar5 = iVar0;
			iVar6 = func_282(iVar5);
			if (iVar6 == 1)
			{
				uVar4 = func_101(13);
			}
			else
			{
				uVar4 = func_101(14);
			}
			Local_158[iVar0 /*3*/] = OBJECT::CREATE_OBJECT(uVar4, func_281(iVar5, 1), 1, 1, 0);
			Local_158[iVar0 /*3*/].f_2 = iVar6;
			Local_158[iVar0 /*3*/].f_1 = 0;
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_158[iVar0 /*3*/], 0);
			if (bParam0)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_158[iVar0 /*3*/], iLocal_529, 0, func_281(iVar5, 0), 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
			}
			iVar0++;
		}
	}
}

Vector3 func_281(int iParam0, bool bParam1)//Position - 0x15EDF
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	switch (iParam0)
	{
		case 0:
			fVar0 = -1.81f;
			fVar1 = -19.6f;
			break;
		
		case 1:
			fVar0 = -2f;
			fVar1 = -18.2f;
			break;
		
		case 2:
			fVar0 = -2f;
			fVar1 = -14.9f;
			break;
		
		case 3:
			fVar0 = -0.7f;
			fVar1 = -15.5f;
			break;
		
		case 5:
			fVar0 = -1.9f;
			fVar1 = -0.2f;
			break;
		
		case 6:
			fVar0 = -0.7f;
			fVar1 = 0.3f;
			break;
		
		case 4:
			fVar0 = -1.9f;
			fVar1 = 2f;
			break;
		
		case 7:
			fVar0 = -1.6f;
			fVar1 = 4.7f;
			break;
		
		case 8:
			fVar0 = 0f;
			fVar1 = 0f;
			fVar2 = -3.45f;
			break;
		
		case 9:
			fVar0 = 1.3f;
			fVar1 = -0.4f;
			fVar2 = -3.45f;
			break;
		
		case 10:
			fVar0 = 2f;
			fVar1 = 0.9f;
			fVar2 = -3.45f;
			break;
		
		case 11:
			fVar0 = 0.4f;
			fVar1 = 0.3f;
			fVar2 = (-3.45f + 1.15f);
			break;
		
		case 12:
			fVar0 = 1.7f;
			fVar1 = 0.6f;
			fVar2 = (-3.45f + 1.15f);
			break;
	}
	if (iParam0 < 8)
	{
		if (Local_118[iParam0 /*3*/].f_2 == 1)
		{
			fVar2 = -3.45f;
		}
		else
		{
			fVar2 = -3.45f;
		}
	}
	else
	{
		fVar0 = (fVar0 + 0.3f);
		fVar1 = (fVar1 + 26.92f);
	}
	if (bParam1)
	{
		return func_117(fVar0, fVar1, fVar2);
	}
	return fVar0, fVar1, fVar2;
}

int func_282(int iParam0)//Position - 0x1608E
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
			return 1;
			break;
	}
	return 0;
}

void func_283(bool bParam0, bool bParam1)//Position - 0x160B7
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
	
	if (!bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Local_68.x)
		{
			iVar1 = iVar0;
			if (!Global_86805 || iVar1 != 0)
			{
				iVar3 = func_284(iVar1);
				if (iVar3 == 1)
				{
					iVar2 = func_101(12);
				}
				Local_68[iVar0 /*3*/].f_2 = iVar3;
				Local_68[iVar0 /*3*/] = VEHICLE::CREATE_VEHICLE(iVar2, func_116(iVar1, 1), 0f, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_68[iVar0 /*3*/], 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_68[iVar0 /*3*/], 0);
				Local_68[iVar0 /*3*/].f_1 = 0;
				switch (iVar1)
				{
					case 0:
					case 2:
					case 5:
					case 6:
						iVar4 = 0;
						break;
					
					case 1:
					case 3:
					case 4:
					case 7:
						iVar4 = 1;
						break;
				}
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_68[iVar0 /*3*/], iVar4);
				VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Local_68[iVar0 /*3*/], 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_68[iVar0 /*3*/], false);
				if (iVar1 == 0)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_68[iVar0 /*3*/], 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_93.x)
		{
			iVar5 = iVar0;
			iVar7 = func_284(iVar5);
			if (iVar7 == 1)
			{
				iVar6 = func_101(12);
			}
			Local_93[iVar0 /*3*/].f_2 = iVar7;
			Local_93[iVar0 /*3*/] = VEHICLE::CREATE_VEHICLE(iVar6, func_116(iVar5, 1), 0f, 1, 1);
			Local_93[iVar0 /*3*/].f_1 = 0;
			switch (iVar5)
			{
				case 0:
				case 2:
				case 5:
				case 6:
					iVar8 = 0;
					break;
				
				case 1:
				case 3:
				case 4:
				case 7:
					iVar8 = 1;
					break;
			}
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_93[iVar0 /*3*/], iVar8);
			iVar0++;
		}
	}
	if (bParam0)
	{
		func_115(0, bParam1);
	}
}

int func_284(int iParam0)//Position - 0x1626D
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 0:
			return 1;
			break;
		
		case 6:
		case 7:
			return 1;
			break;
	}
	return 1;
}

void func_285(int iParam0)//Position - 0x162BB
{
	float fVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::CONTROL_LANDING_GEAR(iLocal_524[2], 3);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2]);
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2], 1, func_26(), 1);
		if (iParam0 == 1)
		{
			fVar0 = 7500f;
		}
		else if (iParam0 == 2)
		{
			fVar0 = 101000f;
		}
		else if (iParam0 == 3)
		{
			fVar0 = 189100f;
		}
		else
		{
			fVar0 = (183000f + 20000f);
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2], fVar0);
	}
}

void func_286()//Position - 0x1634C
{
	iLocal_530 = OBJECT::CREATE_OBJECT(func_101(15), 0f, 2f, 4f, 1, 1, 0);
	ENTITY::SET_ENTITY_COLLISION(iLocal_530, 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_530, 0);
}

void func_287()//Position - 0x16378
{
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_524[2], "EXILE_1_CARGO_PLANE", 0);
}

void func_288(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1638F
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[iParam0], 0))
	{
		iVar0 = func_317(iParam0);
		if (iParam0 == 0)
		{
			func_290(&(iLocal_524[iParam0]), 2, Param1, fParam4, 0, 0);
		}
		else
		{
			iLocal_524[iParam0] = VEHICLE::CREATE_VEHICLE(func_101(iVar0), Param1, fParam4, 1, 1);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_524[iParam0]);
		if (!bParam5)
		{
			func_163(iVar0);
		}
		if (bParam7)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_524[iParam0], 0);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[iParam0], 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_524[iParam0], 1, 1, 1, 1, 1, 0, 0, 0);
		}
		if (!bParam6)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_524[iParam0]));
		}
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_524[iParam0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_524[iParam0], 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_524[iParam0], 1);
		switch (iParam0)
		{
			case 2:
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[iParam0], 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_524[iParam0], 1);
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_524[iParam0], 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_524[iParam0], 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_524[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[iParam0], 0);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_524[iParam0], 0);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_524[iParam0], 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_524[iParam0], 0);
				VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iLocal_524[iParam0], 0);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_524[iParam0], 6000);
				VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(iLocal_524[iParam0], 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[iParam0], 1, 1);
				func_260(1);
				iVar1 = 2;
				while (iVar1 <= 8)
				{
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_524[iParam0], iVar1, false);
					iVar1++;
				}
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_524[2], 7, true);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_524[iParam0], 3);
				GlobalFunc_743(iLocal_524[iParam0], 0);
				break;
			
			case 1:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_524[iParam0], 0);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_524[iParam0], 0);
				ENTITY::SET_ENTITY_HEALTH(iLocal_524[iParam0], 2000);
				break;
			}
	}
}


int func_290(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x165A6
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_5107(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}



























int func_317(int iParam0)//Position - 0x1A605
{
	switch (iParam0)
	{
		case 0:
			return 8;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 12;
}

























void func_342()//Position - 0x1CD12
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		OBJECT::DELETE_OBJECT(&iLocal_534);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_517))
	{
		PED::DELETE_PED(&iLocal_517);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_518))
	{
		PED::DELETE_PED(&iLocal_518);
	}
	func_163(3);
	func_163(4);
	func_163(19);
	func_343(5);
	bLocal_748 = true;
}

void func_343(int iParam0)//Position - 0x1CD66
{
	char* sVar0;
	
	if (iLocal_580[iParam0])
	{
		iLocal_580[iParam0] = 0;
		sVar0 = func_120(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar0);
		}
	}
}

void func_344(bool bParam0)//Position - 0x1CD97
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[0]))
	{
		PED::DELETE_PED(&(uLocal_432[0]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_534))
	{
		iLocal_534 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_101(19), 1976.806f, 3819.159f, 32.419f, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(iLocal_534, 124.33f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_534, 1);
		uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1974f, 3819f, 34f);
		if (INTERIOR::IS_VALID_INTERIOR(uVar0))
		{
			INTERIOR::_0x82EBB79E258FA2B7(iLocal_534, iVar0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_517))
	{
		func_521(&iLocal_517, 0, 1974.076f, 3818.745f, 32.43633f, 0f, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_517, 1862763509);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_517, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		uLocal_915 = PED::CREATE_SYNCHRONIZED_SCENE(1975.008f, 3821.327f, 33.426f, 0f, 0f, -150.11f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_517, uLocal_915, func_120(5), "_LeadOut_Michael", 1000f, -8f, 1, 144, 1148846080, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_517, 0, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_915, 1);
		GlobalFunc_11270(iLocal_517, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_517, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_517, 208, 1);
		GlobalFunc_7047(&iLocal_518, 40, 1974.076f, 3818.745f, 32.43633f, 0f, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_518, 1862763509);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_518, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		uLocal_916 = PED::CREATE_SYNCHRONIZED_SCENE(1976.7f, 3819.085f, 33.4576f, 0f, 0f, -58.44f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_518, uLocal_916, func_120(5), "_LeadOut_Patricia", 1000f, -8f, 1, 144, 1148846080, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_518, 0, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_916, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_518, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_518, 208, 1);
		if (bParam0)
		{
			GlobalFunc_2868();
			bVar1 = false;
			while (!bVar1)
			{
				if (!PED::IS_PED_INJURED(iLocal_517))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_517))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_518))
	{
		GlobalFunc_7047(&iLocal_518, 40, 1975.197f, 3820.662f, 32.44597f, 0f, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_518, 1862763509);
		if (bParam0)
		{
			GlobalFunc_2868();
			bVar2 = false;
			while (!bVar2)
			{
				if (!PED::IS_PED_INJURED(iLocal_518))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_518))
					{
						bVar2 = true;
					}
				}
				else
				{
					bVar2 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_517))
	{
		PED::SET_PED_KEEP_TASK(iLocal_517, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_517, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_517, 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_518))
	{
		PED::SET_PED_KEEP_TASK(iLocal_518, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_518, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_518, 1);
	}
}



















































































































void func_459()//Position - 0x390F6
{
	if (!PED::IS_PED_INJURED(iLocal_516))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_516);
		ENTITY::SET_ENTITY_COORDS(iLocal_516, func_99(11), 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_516, -5.8f);
	}
}

void func_460(int iParam0, bool bParam1)//Position - 0x3912D
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	
	if (PED::IS_PED_INJURED(iLocal_516))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { func_99(11) };
				fVar3 = -5.8f;
				break;
			
			case 1:
				Var0 = { func_99(12) };
				fVar3 = -179.12f;
				break;
		}
		GlobalFunc_7047(&iLocal_516, 20, Var0, fVar3, 0);
		if (bParam1)
		{
			GlobalFunc_2868();
			bVar4 = false;
			while (!bVar4)
			{
				if (!PED::IS_PED_INJURED(iLocal_516))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_516))
					{
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_516))
	{
		PED::SET_PED_PROP_INDEX(iLocal_516, 0, 0, 0, false);
		PED::SET_PED_PROP_INDEX(iLocal_516, 1, 0, 0, false);
		PED::SET_PED_KEEP_TASK(iLocal_516, 1);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_516, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_516, 206, 1);
		GlobalFunc_173(&uLocal_983, 3, iLocal_516, "NervousRon", 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_516, 1862763509);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_516, 0);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_516, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_516, 32, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_516, 182, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_516, 174, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_516, 1);
		switch (iParam0)
		{
			case 0:
				break;
			
			case 1:
				break;
			}
	}
}

void func_461()//Position - 0x3926A
{
	uLocal_1149 = STREAMING::STREAMVOL_CREATE_FRUSTUM(1983.293f, 3823.837f, 31.438f, GlobalFunc_590(0f, 0f, 34.6f), 3500f, 12, 127);
}



void func_464(int iParam0, int iParam1, int iParam2)//Position - 0x392BE
{
	iParam2 = iParam2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				break;
			}
	}
}

void func_465(int iParam0)//Position - 0x392E4
{
	switch (iParam0)
	{
		case 0:
			func_288(0, func_99(0), -60.09f, 1, 1, 0);
			break;
		
		case 1:
			func_288(2, func_99(6), 0f, 1, 1, 0);
			func_287();
			func_288(1, func_99(2), 27.5f, 1, 1, 0);
			break;
		
		case 2:
			func_288(2, func_99(6), 0f, 1, 1, 0);
			func_287();
			func_288(1, func_99(3), -42.49f, 1, 1, 0);
			break;
		
		case 3:
			func_288(2, func_99(6), 0f, 1, 1, 0);
			func_287();
			func_288(1, func_99(4), -169.9f, 1, 1, 0);
			break;
		
		case 4:
			func_288(2, func_99(6), 0f, 1, 1, 0);
			func_287();
			func_467();
			func_288(1, func_99(5), -171.8f, 1, 1, 0);
			break;
		
		case 5:
			func_288(2, func_99(6), 0f, 1, 1, 0);
			func_466();
			func_467();
			break;
		
		case 6:
			func_288(2, func_99(7), 121f, 1, 1, 0);
			func_466();
			break;
		
		case 7:
			func_288(2, func_99(8), 0f, 1, 1, 0);
			func_466();
			break;
	}
}

void func_466()//Position - 0x39420
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_524[2], 7, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_524[2], 8, true);
	}
}

void func_467()//Position - 0x3944F
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		iVar0 = 0;
		while (iVar0 <= 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_520[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = -1;
				}
				else
				{
					iVar1 = 0;
				}
				iLocal_520[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_524[2], 26, func_101(6), iVar1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_520[iVar0], 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_520[iVar0], 0);
				PED::SET_PED_DIES_WHEN_INJURED(iLocal_520[iVar0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_520[iVar0], 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_520[iVar0], 1, 1, 1, 1, 1, 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_520[iVar0], 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 208, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 118, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 249, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_520[iVar0], 188, 1);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_520[iVar0], 16);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_520[iVar0], 0);
				GlobalFunc_593(iLocal_520[iVar0], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_520[iVar0], iLocal_982);
				func_274(iVar0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_520[iVar0], 10, 1, 0, 0);
			}
			iVar0++;
		}
	}
}






















































int func_521(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x3F8F0
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			func_672(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11322(*iParam0);
			func_661(*iParam0, 1, 0);
			GlobalFunc_8030(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11335(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}












































































































































void func_661(int iParam0, bool bParam1, bool bParam2)//Position - 0x6B390
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = GlobalFunc_6674(uParam0);
	if (GlobalFunc_42(iVar0) && !PED::IS_PED_INJURED(uParam0))
	{
		GlobalFunc_7103(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar0 /*284*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 || (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1184 == -1 && iVar1 == 4))
				{
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0] != 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0], 0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1151[iVar1 /*4*/][iVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("sp0_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("sp1_parachute_current_tint"), &uVar2, -1);
		}
		else if (iVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("sp2_parachute_current_tint"), &uVar2, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), uVar2);
	}
}











int func_672(int iParam0, int iParam1, bool bParam2)//Position - 0x6C528
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4;
	if (iParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (iParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (iParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_87845[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_89952)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_89952[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_89952)
		{
			iVar1 = 0;
		}
		Global_89952[iVar1] = Global_87845[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_89952[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0))
					{
						TASK::CLEAR_PED_TASKS(Global_89952[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_89952[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1000f, -1, 1, 0);
					}
				}
			}
		}
	}
	Global_87845[iVar0] = iParam0;
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam1] = GlobalFunc_7626();
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[iParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_87845.f_47), iVar0);
	}
	return 1;
}


int func_674(int iParam0)//Position - 0x6C6B9
{
	iParam0 = iParam0;
	return 2;
}

void func_675(int iParam0, bool bParam1)//Position - 0x6C6C6
{
	int iVar0;
	
	if (bParam1)
	{
		func_676();
	}
	switch (iParam0)
	{
		case 0:
			iLocal_512 = 0;
			iLocal_625 = 0;
			iLocal_626 = 0;
			bLocal_627 = false;
			iLocal_628 = 0;
			bLocal_623 = false;
			bLocal_630 = false;
			iLocal_624 = 0;
			bLocal_812 = false;
			iLocal_813 = 0;
			bLocal_754 = false;
			bLocal_748 = false;
			iLocal_751 = 0;
			bLocal_752 = false;
			iLocal_753 = 0;
			bLocal_754 = false;
			bLocal_755 = false;
			iLocal_763 = 0;
			iLocal_874 = 3;
			iLocal_927 = 0;
			fLocal_867 = 0f;
			break;
		
		case 1:
			iLocal_430 = 0;
			iLocal_874 = 2;
			fLocal_859 = 0f;
			iLocal_878 = 0;
			iLocal_876 = 0;
			iLocal_920 = 0;
			iLocal_921 = 0;
			fLocal_855 = 0f;
			fLocal_858 = 0f;
			iLocal_925 = -1;
			bLocal_630 = false;
			iLocal_629 = 0;
			iLocal_652 = 0;
			iLocal_631 = 0;
			bLocal_632 = false;
			bLocal_633 = false;
			bLocal_634 = false;
			bLocal_635 = false;
			iLocal_636 = 0;
			iLocal_637 = 0;
			bLocal_638 = false;
			iLocal_639 = 0;
			iLocal_640 = 0;
			iLocal_641 = 0;
			iLocal_642 = 0;
			bLocal_643 = false;
			iLocal_644 = 0;
			bLocal_648 = false;
			iLocal_649 = 0;
			iLocal_650 = 0;
			bLocal_651 = false;
			iLocal_662 = 0;
			iLocal_663 = 1;
			bLocal_790 = false;
			bLocal_791 = false;
			bLocal_792 = false;
			bLocal_793 = false;
			bLocal_794 = false;
			bLocal_795 = false;
			bLocal_796 = false;
			iLocal_732 = 0;
			bLocal_733 = false;
			iLocal_814 = 0;
			iLocal_815 = 0;
			bLocal_766 = false;
			bLocal_786 = false;
			break;
		
		case 2:
			iLocal_65 = 0;
			break;
		
		case 3:
			iLocal_65 = 0;
			iLocal_510 = 0;
			bLocal_646 = false;
			iLocal_645 = 0;
			bLocal_647 = false;
			Local_831 = { 1.08245f, -18f, -3f };
			Local_834 = { -1.28529f, -13f, -3f };
			break;
		
		case 4:
			iLocal_65 = 0;
			iLocal_877 = 0;
			fLocal_860 = 0f;
			fLocal_865 = 1f;
			Local_831 = { 1.08245f, -37.7809f, -5.74982f };
			Local_834 = { -1.28529f, -32.7518f, -4.75798f };
			Local_840 = { 0f, 0f, 0f };
			bLocal_656 = false;
			bLocal_654 = false;
			bLocal_655 = false;
			iLocal_657 = 0;
			bLocal_658 = false;
			bLocal_659 = false;
			bLocal_660 = false;
			iLocal_653 = 0;
			bLocal_797 = false;
			bLocal_798 = false;
			iLocal_738 = 0;
			bLocal_664 = false;
			bLocal_816 = false;
			bLocal_817 = false;
			bLocal_744 = false;
			iLocal_747 = 0;
			iLocal_749 = 0;
			bLocal_741 = false;
			iLocal_742 = 0;
			iLocal_759 = 0;
			iLocal_760 = 0;
			bLocal_761 = false;
			bLocal_780 = false;
			bLocal_781 = false;
			iLocal_783 = 0;
			bLocal_787 = false;
			iLocal_926 = -1;
			iLocal_941 = -1;
			iLocal_944 = -1;
			break;
		
		case 5:
			iLocal_511 = 0;
			iLocal_898 = 0;
			iLocal_900 = 0;
			iLocal_899 = 0;
			iLocal_901 = 0;
			iLocal_893 = 0;
			iLocal_895 = -1;
			iLocal_687 = 0;
			bLocal_728 = false;
			bLocal_714 = false;
			bLocal_664 = false;
			iLocal_670 = 0;
			iLocal_672 = 0;
			iLocal_662 = 0;
			iLocal_661 = 0;
			iLocal_673 = 0;
			bLocal_671 = false;
			iLocal_665 = 0;
			iLocal_669 = 0;
			bLocal_666 = false;
			bLocal_667 = false;
			iLocal_668 = 0;
			iLocal_674 = 0;
			bLocal_675 = false;
			bLocal_676 = false;
			bLocal_677 = false;
			bLocal_799 = false;
			bLocal_800 = false;
			bLocal_741 = false;
			iLocal_742 = 0;
			iLocal_756 = 0;
			iLocal_758 = 0;
			iLocal_768 = 0;
			iLocal_770 = 0;
			bLocal_771 = false;
			bLocal_778 = false;
			iLocal_807 = 0;
			iLocal_788 = 0;
			bLocal_772 = false;
			iLocal_773 = 0;
			bLocal_774 = false;
			bLocal_775 = false;
			bLocal_776 = false;
			iLocal_932 = -1;
			iLocal_933 = -1;
			fLocal_864 = 1f;
			break;
		
		case 6:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_224[iVar0 /*14*/] = 0;
				iVar0++;
			}
			iLocal_429 = 0;
			iLocal_513 = 0;
			iLocal_430 = 0;
			iLocal_514 = 0;
			iLocal_678 = 0;
			iLocal_679 = 0;
			bLocal_680 = false;
			bLocal_681 = false;
			bLocal_682 = false;
			bLocal_683 = false;
			bLocal_684 = false;
			iLocal_692 = 0;
			bLocal_693 = false;
			bLocal_694 = false;
			bLocal_686 = false;
			bLocal_685 = false;
			bLocal_688 = false;
			bLocal_689 = false;
			bLocal_696 = false;
			bLocal_699 = false;
			bLocal_697 = false;
			bLocal_698 = false;
			bLocal_700 = false;
			bLocal_701 = false;
			bLocal_702 = false;
			bLocal_703 = false;
			bLocal_704 = false;
			bLocal_705 = false;
			bLocal_706 = false;
			iLocal_707 = 0;
			bLocal_708 = false;
			bLocal_709 = false;
			bLocal_711 = false;
			bLocal_710 = false;
			iLocal_690 = 0;
			iLocal_691 = 0;
			iLocal_663 = 0;
			iLocal_695 = 0;
			bLocal_801 = false;
			bLocal_802 = false;
			bLocal_803 = false;
			bLocal_734 = false;
			iLocal_735 = 0;
			bLocal_818 = false;
			iLocal_745 = 0;
			iLocal_750 = 0;
			bLocal_767 = false;
			bLocal_779 = false;
			iLocal_782 = 0;
			bLocal_808 = false;
			fLocal_869 = 0f;
			fLocal_866 = 0f;
			iLocal_904 = 0;
			iLocal_909 = MISC::GET_GAME_TIMER() + 400;
			Local_837 = { -19f, 20.7f, 3f };
			break;
		
		case 7:
			iLocal_431 = 0;
			iLocal_895 = -1;
			fLocal_861 = 0f;
			iLocal_662 = 0;
			iLocal_687 = 0;
			iLocal_712 = 0;
			iLocal_672 = 0;
			bLocal_714 = false;
			bLocal_713 = false;
			iLocal_715 = 0;
			iLocal_716 = 0;
			bLocal_717 = false;
			bLocal_718 = false;
			bLocal_719 = false;
			bLocal_720 = false;
			iLocal_723 = 0;
			iLocal_724 = 0;
			bLocal_727 = false;
			iLocal_722 = 0;
			bLocal_721 = false;
			bLocal_725 = false;
			iLocal_726 = 0;
			iLocal_746 = 0;
			bLocal_804 = false;
			iLocal_805 = 0;
			bLocal_806 = false;
			iLocal_730 = 0;
			iLocal_731 = 0;
			iLocal_736 = 0;
			iLocal_737 = 0;
			bLocal_739 = false;
			iLocal_740 = 0;
			bLocal_741 = false;
			iLocal_742 = 0;
			iLocal_743 = 0;
			iLocal_819 = 0;
			iLocal_820 = 0;
			iLocal_821 = 0;
			bLocal_667 = false;
			iLocal_757 = 0;
			iLocal_769 = 0;
			iLocal_784 = 0;
			iLocal_785 = 0;
			iLocal_789 = 0;
			fLocal_864 = 0f;
			fLocal_868 = 0.0027f;
			fLocal_870 = -1f;
			iLocal_931 = -1;
			break;
	}
}

void func_676()//Position - 0x6CBA6
{
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_67 = 0;
	iLocal_608 = 0;
	bLocal_609 = false;
	iLocal_610 = 0;
	bLocal_612 = false;
	iLocal_614 = 0;
	iLocal_613 = 0;
	bLocal_621 = false;
	bLocal_622 = false;
	iLocal_615 = 0;
	iLocal_616 = 0;
	iLocal_617 = 0;
	bLocal_618 = false;
	iLocal_875 = -1;
	iLocal_912 = 0;
}

void func_677(bool bParam0)//Position - 0x6CBEF
{
	HUD::REQUEST_ADDITIONAL_TEXT("PFIGHT", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_678(int iParam0, bool bParam1, bool bParam2)//Position - 0x6CC17
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (GlobalFunc_2869(iVar1, iParam0))
		{
			func_681(iVar1);
		}
		else if (!GlobalFunc_2869(iVar1, iLocal_62) || !bParam2)
		{
			func_680(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_679())
		{
			GlobalFunc_2868();
			while (!func_679())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_679()//Position - 0x6CC85
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_604[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					break;
				}
		}
		iVar0++;
	}
	return 1;
}

void func_680(int iParam0)//Position - 0x6CCBA
{
	if (iLocal_604[iParam0])
	{
		iLocal_604[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_681(int iParam0)//Position - 0x6CCE4
{
	iLocal_604[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			break;
	}
}


void func_683(int iParam0, bool bParam1, bool bParam2)//Position - 0x6CD21
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_689(iVar1, iParam0))
		{
			func_688(iVar1);
		}
		else if (!func_689(iVar1, iLocal_62) || !bParam2)
		{
			func_687(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_684())
		{
			GlobalFunc_2868();
			while (!func_684())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_684()//Position - 0x6CD8F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_597[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_685(iVar0), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_685(int iParam0)//Position - 0x6CDC7
{
	switch (iParam0)
	{
		case 0:
			return func_686();
			break;
		
		case 1:
			return "EXILE_1_CAR_01";
			break;
		
		case 2:
			return "EXILE_1_CAR_02";
			break;
		
		case 3:
			return "EXILE_1_CAR_03";
			break;
		
		case 4:
			return "EXILE_1_PT2_FAIL";
			break;
		
		case 5:
			return "EXILE_1_TRANSITION_WIND";
			break;
	}
	return "invalid!";
}

char* func_686()//Position - 0x6CE3F
{
	return "Alarms";
}

void func_687(int iParam0)//Position - 0x6CE4C
{
	var uVar0;
	
	if (iLocal_597[iParam0])
	{
		iLocal_597[iParam0] = 0;
		uVar0 = func_685(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uVar0);
	}
}

void func_688(int iParam0)//Position - 0x6CE74
{
	var uVar0;
	
	iLocal_597[iParam0] = 1;
	uVar0 = func_685(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uVar0, 0);
}

int func_689(int iParam0, int iParam1)//Position - 0x6CE94
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 6)
			{
				return 1;
			}
			break;
		
		case 1:
		case 2:
		case 3:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 4:
		case 5:
			if (iParam1 == 7)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_690(int iParam0, bool bParam1, bool bParam2)//Position - 0x6CEEF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_694(iVar1, iParam0))
		{
			func_693(iVar1);
		}
		else if (!func_694(iVar1, iLocal_62) || !bParam2)
		{
			func_692(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_691())
		{
			GlobalFunc_2868();
			while (!func_691())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_691()//Position - 0x6CF5D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_595[iVar0])
		{
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_692(int iParam0)//Position - 0x6CF8E
{
	if (iLocal_595[iParam0])
	{
		iLocal_595[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_693(int iParam0)//Position - 0x6CFB3
{
	iLocal_595[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_694(int iParam0, int iParam1)//Position - 0x6CFC7
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_695(int iParam0, bool bParam1, bool bParam2)//Position - 0x6CFEA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_699(iVar1, iParam0))
		{
			func_698(iVar1);
		}
		else if (!func_699(iVar1, iLocal_62) || !bParam2)
		{
			func_697(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_696())
		{
			GlobalFunc_2868();
			while (!func_696())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_696()//Position - 0x6D058
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_588[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_267(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_697(int iParam0)//Position - 0x6D08F
{
	var uVar0;
	
	if (iLocal_588[iParam0])
	{
		iLocal_588[iParam0] = 0;
		uVar0 = func_267(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(uVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(uVar0);
		}
	}
}

void func_698(int iParam0)//Position - 0x6D0C0
{
	var uVar0;
	
	iLocal_588[iParam0] = 1;
	uVar0 = func_267(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(uVar0, 31, 0);
}

int func_699(int iParam0, int iParam1)//Position - 0x6D0E1
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 3 || iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 4:
		case 5:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 2:
			if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_700(int iParam0, bool bParam1, bool bParam2)//Position - 0x6D169
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		if (func_703(iVar1, iParam0))
		{
			func_702(iVar1);
		}
		else if (!func_703(iVar1, iLocal_62) || !bParam2)
		{
			func_343(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_701())
		{
			GlobalFunc_2868();
			while (!func_701())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_701()//Position - 0x6D1D7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_580[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_120(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_702(int iParam0)//Position - 0x6D20E
{
	var uVar0;
	
	iLocal_580[iParam0] = 1;
	uVar0 = func_120(iParam0);
	STREAMING::REQUEST_ANIM_DICT(uVar0);
}

int func_703(int iParam0, int iParam1)//Position - 0x6D22C
{
	switch (iParam0)
	{
		case 0:
			if ((iParam1 == 5 || iParam1 == 6) || iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1:
		case 2:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 7)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_704(int iParam0, bool bParam1, bool bParam2)//Position - 0x6D2A3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_708(iVar0 + 1, iParam0))
		{
			func_707(iVar0 + 1);
		}
		else if (!func_708(iVar0 + 1, iLocal_62) || !bParam2)
		{
			func_706(iVar0 + 1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_705())
		{
			GlobalFunc_2868();
			while (!func_705())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_705()//Position - 0x6D315
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_573[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, func_26()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_706(int iParam0)//Position - 0x6D34E
{
	if (iLocal_573[(iParam0 - 1)])
	{
		iLocal_573[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, func_26()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, func_26());
		}
	}
}

void func_707(int iParam0)//Position - 0x6D383
{
	iLocal_573[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, func_26());
}

int func_708(int iParam0, int iParam1)//Position - 0x6D39F
{
	switch (iParam0)
	{
		case 1:
			if (((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam1 == 5 || iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 6:
			if (iParam1 >= 7)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_709(int iParam0, bool bParam1, bool bParam2)//Position - 0x6D412
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (func_712(iVar0, iParam0))
		{
			func_711(iVar0);
		}
		else if (!func_712(iVar0, iLocal_62) || !bParam2)
		{
			func_163(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_710())
		{
			GlobalFunc_2868();
			while (!func_710())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_710()//Position - 0x6D47D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iLocal_550[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_101(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_711(int iParam0)//Position - 0x6D4B6
{
	var uVar0;
	
	uVar0 = func_101(iParam0);
	STREAMING::REQUEST_MODEL(uVar0);
	iLocal_550[iParam0] = 1;
}

int func_712(int iParam0, int iParam1)//Position - 0x6D4D4
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 2:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
		
		case 3:
		case 4:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 >= 1 && iParam1 <= 4)
			{
				return 1;
			}
			break;
		
		case 10:
		case 18:
			if (iParam1 >= 1)
			{
				return 1;
			}
			break;
		
		case 6:
			if (iParam1 >= 1 && iParam1 <= 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 5 || iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 5:
		case 11:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 12:
			if (iParam1 >= 4)
			{
				return 1;
			}
			break;
		
		case 13:
		case 14:
			if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 7)
			{
				return 1;
			}
			break;
		
		case 15:
			if (((iParam1 == 6 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 20:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 21:
			if (iParam1 == 1)
			{
				if (GlobalFunc_199())
				{
					if (GlobalFunc_7698())
					{
						if (GlobalFunc_5667(GlobalFunc_622(), 0f, 0f, 0f, 1))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}



void func_715()//Position - 0x6D73F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	}
}

void func_716(bool bParam0)//Position - 0x6D768
{
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 3, 0);
	if (bParam0)
	{
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_717()//Position - 0x6D796
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	if (iLocal_62 == 6)
	{
		iVar0 = iLocal_524[2];
	}
	else
	{
		iVar0 = iLocal_524[1];
	}
	iVar1 = 0;
	while (iVar1 < Local_224)
	{
		if (iVar1 < 2)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
		switch (Local_224[iVar1 /*14*/])
		{
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[iVar2 /*6*/], 0))
				{
					fVar3 = 3f;
					if ((iVar1 % 2) != 0)
					{
						fVar3 = (fVar3 * -1f);
					}
					Local_224[iVar1 /*14*/].f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_211[iVar2 /*6*/], fVar3, 8f, 0f) };
					Local_224[iVar1 /*14*/].f_6 = { ENTITY::GET_ENTITY_ROTATION(Local_211[iVar2 /*6*/], 2) };
					Local_224[iVar1 /*14*/].f_9 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_211[iVar2 /*6*/], fVar3, 200f, 0f) - Local_224[iVar1 /*14*/].f_3) };
					Local_224[iVar1 /*14*/].f_1 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_SPACE_ROCKET")), Local_224[iVar1 /*14*/].f_3, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(Local_224[iVar1 /*14*/].f_1, Local_224[iVar1 /*14*/].f_6, 2, 1);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_224[iVar1 /*14*/].f_1, 0);
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_224[iVar1 /*14*/].f_12, "SPL_RPG_DIST_FLIGHT_MASTER", Local_224[iVar1 /*14*/].f_1, 0, 0, 0);
					if (func_170(Local_211[iVar2 /*6*/], iVar0, 60f))
					{
						Local_224[iVar1 /*14*/].f_13 = 8f;
					}
					else
					{
						Local_224[iVar1 /*14*/].f_13 = 0f;
					}
					Local_224[iVar1 /*14*/].f_2 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_ex1_heatseeker", ENTITY::GET_ENTITY_COORDS(Local_224[iVar1 /*14*/].f_1, 1), ENTITY::GET_ENTITY_ROTATION(Local_224[iVar1 /*14*/].f_1, 2), 1065353216, 0, 0, 0, 0);
					Local_224[iVar1 /*14*/] = 2;
				}
				break;
			
			case 2:
				Local_224[iVar1 /*14*/].f_13 = (Local_224[iVar1 /*14*/].f_13 + (1f * SYSTEM::TIMESTEP()));
				if (Local_224[iVar1 /*14*/].f_13 >= 8f)
				{
					Local_224[iVar1 /*14*/].f_13 = 8f;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (iLocal_62 == 6)
					{
						switch (iVar1)
						{
							case 0:
								Var7 = { -4f, -30f, 0f };
								break;
							
							case 1:
								Var7 = { 0.0122964f, -48.1696f, 6.5634f };
								break;
							
							case 2:
								Var7 = { 5f, -4f, -0.5f };
								break;
							
							case 3:
								Var7 = { 27.4893f, -12.1439f, -1.92886f };
								break;
						}
					}
					else
					{
						Var7 = { 0f, 0f, 0f };
					}
					Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var7) };
					Var10 = { 0f, 0f, 0f };
					Var10 = { GlobalFunc_107(Var4 - Local_224[iVar1 /*14*/].f_3) };
					Local_224[iVar1 /*14*/].f_9 = (Local_224[iVar1 /*14*/].f_9 + (((Var10.x - Local_224[iVar1 /*14*/].f_9) * Local_224[iVar1 /*14*/].f_13) * MISC::GET_FRAME_TIME()));
					Local_224[iVar1 /*14*/].f_9.f_1 = (Local_224[iVar1 /*14*/].f_9.f_1 + (((Var10.f_1 - Local_224[iVar1 /*14*/].f_9.f_1) * Local_224[iVar1 /*14*/].f_13) * MISC::GET_FRAME_TIME()));
					Local_224[iVar1 /*14*/].f_9.f_2 = (Local_224[iVar1 /*14*/].f_9.f_2 + (((Var10.f_2 - Local_224[iVar1 /*14*/].f_9.f_2) * Local_224[iVar1 /*14*/].f_13) * MISC::GET_FRAME_TIME()));
					Local_224[iVar1 /*14*/].f_6 = MISC::ATAN2(Local_224[iVar1 /*14*/].f_9.f_2, SYSTEM::VMAG(Local_224[iVar1 /*14*/].f_9, Local_224[iVar1 /*14*/].f_9.f_1, 0f));
					Local_224[iVar1 /*14*/].f_6.f_2 = func_719((MISC::ATAN2(Local_224[iVar1 /*14*/].f_9.f_1, Local_224[iVar1 /*14*/].f_9) - 90f));
					Local_224[iVar1 /*14*/].f_3 = { Local_224[iVar1 /*14*/].f_3 + Local_224[iVar1 /*14*/].f_9 * FtoV(MISC::GET_FRAME_TIME()) * Vector(100f, 100f, 100f) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_224[iVar1 /*14*/].f_1, Local_224[iVar1 /*14*/].f_3, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(Local_224[iVar1 /*14*/].f_1, Local_224[iVar1 /*14*/].f_6, 2, 1);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(Local_224[iVar1 /*14*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_224[iVar1 /*14*/].f_1, 0f, -0.2f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_224[iVar1 /*14*/].f_1, 2));
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_224[iVar1 /*14*/].f_3, Var4, 1) <= 2f)
					{
						func_718(iVar1);
						PAD::SET_PAD_SHAKE(0, 1000, 200);
						func_152();
					}
				}
				break;
		}
		iVar1++;
	}
}

void func_718(int iParam0)//Position - 0x6DBC0
{
	FIRE::ADD_EXPLOSION(Local_224[iParam0 /*14*/].f_3, 4, 1f, 1, 0, 1065353216);
	AUDIO::PLAY_SOUND_FROM_COORD(-1, "Jet_Explosions", Local_224[iParam0 /*14*/].f_3, "exile_1", 0, 0, 0);
	GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_224[iParam0 /*14*/].f_2, 0);
	OBJECT::DELETE_OBJECT(&(Local_224[iParam0 /*14*/].f_1));
	iLocal_910 = MISC::GET_GAME_TIMER() + 2000;
	Local_224[iParam0 /*14*/] = 3;
	if (!AUDIO::HAS_SOUND_FINISHED(Local_224[iParam0 /*14*/].f_12))
	{
		AUDIO::STOP_SOUND(Local_224[iParam0 /*14*/].f_12);
	}
	if (!bLocal_803)
	{
		bLocal_803 = GlobalFunc_2867("EXL1_MISSLE_HITS");
	}
}

float func_719(float fParam0)//Position - 0x6DC53
{
	float fVar0;
	
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fParam0 = (fParam0 + IntToFloat(SYSTEM::FLOOR((fVar0 / -360f)) + 1 * 360));
	}
	else if (fParam0 >= 360f)
	{
		fParam0 = (fVar0 % 360f);
	}
	return fParam0;
}

void func_720()//Position - 0x6DC97
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	float fVar30;
	float fVar31;
	float fVar32;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	struct<3> Var42;
	float fVar45;
	float fVar46;
	char* sVar47;
	struct<3> Var48;
	float fVar51;
	int iVar52;
	struct<2> Var53;
	struct<3> Var57;
	int iVar60;
	int iVar61;
	bool bVar62;
	struct<3> Var63;
	
	if (iLocal_62 == 6)
	{
		iVar1 = iLocal_524[2];
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_99(19), ENTITY::GET_ENTITY_COORDS(iVar1, 1), 0);
		}
	}
	else
	{
		iVar1 = iLocal_524[1];
	}
	if (iLocal_430 == 0)
	{
		bVar3 = false;
		if (iLocal_62 == 6)
		{
			if (fVar0 < 7700f)
			{
				bVar3 = true;
			}
		}
		else if (iLocal_732)
		{
			func_711(5);
			func_711(11);
			if (func_710())
			{
				if (iLocal_925 < 0)
				{
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_99(20), 0);
					iLocal_925 = SYSTEM::FLOOR((fVar4 * 2f));
					if (iLocal_925 >= 10000)
					{
						iLocal_925 = 10000;
					}
					iLocal_925 = (iLocal_925 + MISC::GET_GAME_TIMER());
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_925)
				{
					bVar3 = true;
				}
			}
		}
		if (bVar3)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				fVar12 = 0f;
				switch (iVar2)
				{
					case 0:
						Var5 = { 20f, 1000f, 45f };
						break;
					
					case 1:
						Var5 = { -20f, 1000f, 45f };
						break;
				}
				Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var17 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_530, func_99(20)) };
				if (iLocal_62 == 6)
				{
					Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_530, Var5) };
					fVar11 = (ENTITY::GET_ENTITY_HEADING(iLocal_530) - 180f);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var14, func_99(20), 0) < 2000f)
				{
					fVar11 = (ENTITY::GET_ENTITY_HEADING(iLocal_530) - 180f);
					if (Var17.f_1 < 0f)
					{
						Var5 = { Var5 * Vector(1f, -1f, -1f) };
						fVar11 = (fVar11 - 180f);
					}
					Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_530, Var5) };
				}
				else
				{
					Var20 = { Var14 - func_99(20) };
					fVar23 = MISC::GET_HEADING_FROM_VECTOR_2D(Var20.x, Var20.f_1);
					if (fVar23 > 360f)
					{
						fVar23 = (fVar23 - 360f);
					}
					else if (fVar23 < 0f)
					{
						fVar23 = (fVar23 + 360f);
					}
					Var8 = { func_99(20) + Var20 * Vector(0.4f, 0.4f, 0.4f) };
					Var24 = { 20f, 0f, 0f };
					if (iVar2 == 0)
					{
						Var24.x = (Var24.x * -1f);
					}
					Var8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var8, fVar23, Var24) };
					Var8.f_2 = (Var14.f_2 + 50f);
					fVar11 = fVar23;
				}
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var8, &fVar12);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				fVar13 = (fVar12 + 70f);
				if (Var8.f_2 < fVar13)
				{
					Var8.f_2 = fVar13;
				}
				Var27 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_530, Var8) };
				if (Var27.f_1 > 0f)
				{
					if (iVar2 == 0)
					{
						Local_211[iVar2 /*6*/].f_5 = 0;
					}
					else
					{
						Local_211[iVar2 /*6*/].f_5 = 1;
					}
				}
				else if (iVar2 == 0)
				{
					Local_211[iVar2 /*6*/].f_5 = 1;
				}
				else
				{
					Local_211[iVar2 /*6*/].f_5 = 0;
				}
				Local_211[iVar2 /*6*/] = VEHICLE::CREATE_VEHICLE(func_101(11), Var8, fVar11, 1, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_211[iVar2 /*6*/], 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_211[iVar2 /*6*/], 100f);
				ENTITY::SET_ENTITY_LOD_DIST(Local_211[iVar2 /*6*/], 900);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_211[iVar2 /*6*/], 0);
				VEHICLE::CONTROL_LANDING_GEAR(Local_211[iVar2 /*6*/], 3);
				VEHICLE::SET_VEHICLE_FORCE_AFTERBURNER(Local_211[iVar2 /*6*/], 1);
				ENTITY::SET_ENTITY_PROOFS(Local_211[iVar2 /*6*/], 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_CAN_BREAK(Local_211[iVar2 /*6*/], 0);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_211[iVar2 /*6*/], 0);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_211[iVar2 /*6*/], 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_211[iVar2 /*6*/], "EXILE_1_FIGHTER_JETS", 0);
				Local_211[iVar2 /*6*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_211[iVar2 /*6*/], 26, func_101(5), -1, 1, 1);
				PED::CLEAR_ALL_PED_PROPS(Local_211[iVar2 /*6*/].f_1);
				PED::SET_PED_PROP_INDEX(Local_211[iVar2 /*6*/].f_1, 0, 2, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_211[iVar2 /*6*/].f_1, 8, 0, 0, 0);
				if (iVar2 == 1)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_211[iVar2 /*6*/].f_1, 0, 1, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_211[iVar2 /*6*/].f_1, 0, 0, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_211[iVar2 /*6*/].f_1, 1);
				iVar2++;
			}
			func_24(&uLocal_546);
			CAM::POINT_CAM_AT_ENTITY(uLocal_546, iVar1, 0f, 10f, 0f, 1);
			Local_843 = { 0f, 0f, 6.5f };
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_546, Local_211[1 /*6*/], Local_843, 0);
			CAM::SET_CAM_FOV(uLocal_546, 60f);
			GlobalFunc_173(&uLocal_983, 8, 0, "MILITARYJET", 0, 1);
			GlobalFunc_173(&uLocal_983, 5, 0, "MILITARYJET2", 0, 1);
			func_162(1);
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[iVar2 /*6*/], 0) && !PED::IS_PED_INJURED(Local_211[iVar2 /*6*/].f_1))
			{
				fVar30 = 0f;
				fVar31 = 0f;
				fVar32 = 0f;
				Var39 = { ENTITY::GET_ENTITY_COORDS(Local_211[iVar2 /*6*/], 1) };
				Var42 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				switch (iLocal_430)
				{
					case 1:
						fVar31 = 140f;
						if (iLocal_62 == 6)
						{
							fVar45 = ((Var39.f_2 + 40f) - Var42.f_2);
							if (fVar45 > 0f)
							{
								fVar32 = (fVar45 * -15f);
								if (fVar32 < -140f)
								{
									fVar32 = -140f;
								}
							}
							if (Var39.f_2 < 100f)
							{
								fVar32 = 0f;
							}
						}
						if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2)
						{
							if (iLocal_62 == 6)
							{
								Var33 = { 15f, 30f, 0f };
							}
							else
							{
								Var33 = { 15f, 30f, 20f };
							}
							if (Local_211[iVar2 /*6*/].f_5)
							{
								Var33.x = (Var33.x * -1f);
							}
							Var36 = { func_724(Var33) };
							if (Var36.f_2 > 1260f)
							{
								Var36.f_2 = 1260f;
							}
							if (Var36.f_2 < 100f)
							{
								Var36.f_2 = 100f;
							}
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_211[iVar2 /*6*/].f_1, Local_211[iVar2 /*6*/], Var36, 10000f, 0, func_101(11), 262144, 50f, -1f);
							Local_211[iVar2 /*6*/].f_2 = MISC::GET_GAME_TIMER() + 1000;
						}
						fVar46 = GlobalFunc_156(iVar1, Local_211[iVar2 /*6*/], 0);
						if (iLocal_62 == 6)
						{
							if (fVar46 < 400f)
							{
								if (!iLocal_735)
								{
									if (bLocal_734)
									{
										AUDIO::PLAY_STREAM_FRONTEND();
										iLocal_735 = 1;
									}
								}
							}
							if (fVar46 < 320f)
							{
								func_162(2);
							}
							else if (!bLocal_688)
							{
								if (fVar46 < 380f)
								{
									if ((iLocal_871 % 2) == 0)
									{
										sVar47 = "EXL1_JETS";
									}
									else
									{
										sVar47 = "EXL1_SEEJET";
									}
									if (func_86(sVar47, 0, 0, 0, 0))
									{
										bLocal_680 = true;
										bLocal_681 = true;
										bLocal_688 = true;
										bLocal_682 = true;
									}
								}
								else if (!bLocal_818)
								{
									if (fVar46 < 650f)
									{
										bLocal_818 = func_157(10);
									}
								}
							}
						}
						else if (fVar46 < 800f)
						{
							func_162(5);
						}
						break;
					
					case 2:
						fVar31 = 140f;
						fVar30 = 25f;
						if (!bLocal_689)
						{
							bLocal_689 = func_86("EXL1_PLCALL1", 0, 0, 0, 0);
						}
						if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2)
						{
							Var33 = { 400f, 1000f, 0f };
							if (Local_211[iVar2 /*6*/].f_5)
							{
								Var33.x = (Var33.x * -1f);
							}
							Var48 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_530, Var33) };
							if (Var48.f_2 > 1260f)
							{
								Var48.f_2 = 1260f;
							}
							if (Var48.f_2 < 100f)
							{
								Var48.f_2 = 100f;
							}
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_211[iVar2 /*6*/].f_1, Local_211[iVar2 /*6*/], Var48, 40f, 0, func_101(11), 262144, 50f, -1f);
							ENTITY::SET_ENTITY_LOD_DIST(Local_211[iVar2 /*6*/], 2000);
							Local_211[iVar2 /*6*/].f_2 = MISC::GET_GAME_TIMER() + 1000;
						}
						if (func_170(Local_211[0 /*6*/], iVar1, 55f) || func_170(Local_211[1 /*6*/], iVar1, 55f))
						{
							func_162(3);
						}
						break;
					
					case 3:
						if (iLocal_904 < 5)
						{
							switch (iLocal_904)
							{
								case 0:
									fVar51 = 999999f;
									iVar52 = 21000;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										StringCopy(&Var53, "EXL1_PLCALL5", 16);
									}
									else
									{
										StringCopy(&Var53, "EXL1_PLCALL4", 16);
									}
									break;
								
								case 1:
									fVar51 = 999999f;
									iVar52 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										StringCopy(&Var53, "EXL1_REASON1", 16);
									}
									else
									{
										StringCopy(&Var53, "EXL1_REASON2", 16);
									}
									break;
								
								case 2:
									fVar51 = 4400f;
									iVar52 = 44000;
									StringCopy(&Var53, "EXL1_PLCALL2", 16);
									break;
								
								case 3:
									fVar51 = 3300f;
									iVar52 = 64000;
									StringCopy(&Var53, "EXL1_PLCALL3", 16);
									break;
								
								case 4:
									fVar51 = 999999f;
									iVar52 = 0;
									StringCopy(&Var53, "EXL1_REASON3", 16);
									break;
							}
							if (fVar0 < fVar51 || MISC::GET_GAME_TIMER() >= (iLocal_905 + iVar52))
							{
								if (func_86(&Var53, 0, 0, 0, 0))
								{
									iLocal_904++;
								}
							}
						}
						if (iVar2 == 1)
						{
							iLocal_745 = 0;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[1 /*6*/], 0))
							{
								Var57 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_524[2], ENTITY::GET_ENTITY_COORDS(Local_211[1 /*6*/], 1)) };
								switch (iLocal_513)
								{
									case 0:
										if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_211[1 /*6*/], iLocal_524[2]))
										{
											fLocal_866 = 0f;
										}
										else if (ENTITY::IS_ENTITY_AT_COORD(Local_211[1 /*6*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], 0f, -95f, 12f), 90f, 90f, 60f, 0, 1, 0))
										{
											fLocal_866 = (fLocal_866 + (1f * SYSTEM::TIMESTEP()));
											if (fLocal_866 >= 3f)
											{
												Local_211[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
												fLocal_866 = 0f;
												iLocal_513 = 1;
											}
										}
										else
										{
											fLocal_866 = 0f;
										}
										break;
									
									case 1:
										fVar31 = 15f;
										if ((((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_211[1 /*6*/], iLocal_524[2]) || Var57.f_1 <= -80f) || Var57.f_2 >= 40f) || Var57.f_1 >= 50f) || Var57.f_2 <= -40f) || Var57.x <= -75f) || Var57.x >= 75f)
										{
											Local_211[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_866 = 0f;
											iLocal_513 = 0;
										}
										else if ((Var39.f_2 > Var42.f_2 && !iLocal_809) || (Var39.f_2 < Var42.f_2 && iLocal_809))
										{
											Local_211[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_866 = 0f;
										}
										else if (ENTITY::IS_ENTITY_AT_COORD(Local_211[1 /*6*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], -25f, 35f, 0f), 35f, 35f, 60f, 0, 1, 0) || MISC::GET_GAME_TIMER() >= Local_211[1 /*6*/].f_2 + 8000)
										{
											fLocal_866 = (fLocal_866 + (1f * SYSTEM::TIMESTEP()));
											if (fLocal_866 >= 3f)
											{
												Local_211[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
												fLocal_866 = 0f;
												iLocal_513 = 2;
											}
										}
										else
										{
											fLocal_866 = 0f;
										}
										break;
									
									case 2:
										fVar31 = 15f;
										if ((((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_211[1 /*6*/], iLocal_524[2]) || Var57.f_1 <= -60f) || Var57.f_2 >= 40f) || Var57.f_1 >= 50f) || Var57.f_2 <= -40f) || Var57.x <= -75f) || Var57.x >= 75f)
										{
											Local_211[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_866 = 0f;
											iLocal_513 = 0;
										}
										else if ((Var39.f_2 > (Var42.f_2 - 8f) && !iLocal_809) || (Var39.f_2 < (Var42.f_2 - 8f) && iLocal_809))
										{
											Local_211[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_866 = 0f;
										}
										else if (ENTITY::IS_ENTITY_AT_COORD(Local_211[1 /*6*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], -25f, 28f, 0f), 30f, 30f, 25f, 0, 1, 0))
										{
											fLocal_866 = (fLocal_866 + (1f * SYSTEM::TIMESTEP()));
											if (fLocal_866 >= 1.5f)
											{
												iLocal_745 = 1;
											}
										}
										else
										{
											fLocal_866 = 0f;
										}
										break;
									
									case 3:
										fLocal_866 = (fLocal_866 + (1f * SYSTEM::TIMESTEP()));
										if (fLocal_866 >= 3f)
										{
											Local_211[1 /*6*/].f_2 = 0;
											fLocal_866 = 0f;
											iLocal_513 = 4;
										}
										break;
									
									case 4:
										break;
									}
								}
						}
						if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2)
						{
							if ((iLocal_513 == 0 || iLocal_513 == 4) || iVar2 == 0)
							{
								Var33 = { 35f, -50f, -6f };
							}
							else if (iLocal_513 == 2)
							{
								if (Var39.f_2 >= (Var42.f_2 - 8f))
								{
									Var33 = { 25f, 50f, 7f };
									iLocal_809 = 1;
								}
								else
								{
									Var33 = { 25f, 50f, -5f };
									iLocal_809 = 0;
								}
							}
							else if (iLocal_513 == 1)
							{
								if (Var39.f_2 >= (Var42.f_2 - 8f))
								{
									Var33 = { 25f, 50f, 25f };
									iLocal_809 = 1;
								}
								else
								{
									Var33 = { 25f, 50f, -25f };
									iLocal_809 = 0;
								}
							}
							else if (iLocal_513 == 3)
							{
								Var33 = { 55f, 80f, 35f };
							}
							if (Local_211[iVar2 /*6*/].f_5)
							{
								Var33.x = (Var33.x * -1f);
							}
							Var36 = { func_724(Var33) };
							TASK::TASK_PLANE_CHASE(Local_211[iVar2 /*6*/].f_1, iVar1, Var33);
							Local_211[iVar2 /*6*/].f_2 = (MISC::GET_GAME_TIMER() + 1000000);
						}
						if (fVar0 < 2400f || MISC::GET_GAME_TIMER() >= (iLocal_905 + 85000))
						{
							if (fVar0 < 2400f)
							{
							}
							func_162(4);
							Local_211[1 /*6*/].f_2 += 1200;
						}
						break;
					
					case 4:
						if (!bLocal_696)
						{
							if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1176.025f, 2000.566f, 19.16425f, 3427.568f, 6152.395f, -0.12149f, 0, 0, 0))
							{
								bLocal_696 = func_86("EXL1_WFREE", 0, 0, 0, 0);
							}
							else
							{
								bLocal_696 = func_86("EXL1_PLCALL6", 0, 0, 0, 0);
								bLocal_698 = true;
							}
						}
						else if (!bLocal_698)
						{
							if (!bLocal_697)
							{
								bLocal_697 = func_86("EXL1_WFREE2", 0, 0, 0, 0);
							}
						}
						if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2)
						{
							Var33 = { 37f, -60f, 5f };
							if (Local_211[iVar2 /*6*/].f_5)
							{
								Var33.x = (Var33.x * -1f);
							}
							Var36 = { func_724(Var33) };
							TASK::TASK_PLANE_CHASE(Local_211[iVar2 /*6*/].f_1, iVar1, Var33);
						}
						if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2 + 5500)
						{
							func_162(5);
						}
						break;
					
					case 5:
						iVar61 = 0;
						bVar62 = false;
						iVar60 = 0;
						while (iVar60 < 4)
						{
							if (Local_224[iVar60 /*14*/] == 0)
							{
								bVar62 = true;
								switch (iVar60)
								{
									case 0:
										iVar61 = 2500;
										break;
									
									case 1:
										iVar61 = 3000;
										break;
									
									case 2:
										iVar61 = 2800;
										break;
									
									case 3:
										iVar61 = 3600;
										break;
								}
								if (MISC::GET_GAME_TIMER() >= (Local_211[iVar2 /*6*/].f_2 + iVar61))
								{
									Local_224[iVar60 /*14*/] = 1;
								}
							}
							iVar60++;
						}
						if (!bVar62)
						{
							if (iLocal_62 != 6)
							{
								func_162(7);
							}
							else
							{
								func_162(6);
							}
						}
						break;
					
					case 6:
						if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2)
						{
							if (Var39.f_2 >= (Var42.f_2 - 6f))
							{
								Var33 = { 80f, 200f, 40f };
							}
							else
							{
								Var33 = { 80f, 200f, -20f };
							}
							if (Local_211[iVar2 /*6*/].f_5)
							{
								Var33.x = (Var33.x * -1f);
							}
							Var36 = { func_724(Var33) };
							TASK::TASK_PLANE_CHASE(Local_211[iVar2 /*6*/].f_1, iVar1, Var33);
							Local_211[iVar2 /*6*/].f_2 = (MISC::GET_GAME_TIMER() + 100000);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_905 + 4000)
						{
							func_162(7);
						}
						break;
					
					case 7:
						if (iLocal_62 == 6)
						{
							if (MISC::GET_GAME_TIMER() >= Local_211[iVar2 /*6*/].f_2)
							{
								Var33 = { 50f, 1000f, 5f };
								fVar31 = 40f;
								fVar32 = 80f;
								if (Local_211[iVar2 /*6*/].f_5)
								{
									Var33.x = (Var33.x * -1f);
								}
								Var63 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_530, Var33) };
								if (Var63.f_2 > 1260f)
								{
									Var63.f_2 = 1260f;
								}
								if (Var63.f_2 < 100f)
								{
									Var63.f_2 = 100f;
								}
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_211[iVar2 /*6*/].f_1, Local_211[iVar2 /*6*/], Var63, 1000f, 0, func_101(11), 262144, 50f, -1f);
								Local_211[iVar2 /*6*/].f_2 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
						break;
				}
				if (!bLocal_706)
				{
					if (!bLocal_699)
					{
						if (iLocal_430 >= 5)
						{
							bLocal_699 = func_86("EXL1_SHOOT", 0, 0, 0, 0);
						}
					}
					else if (!bLocal_700)
					{
						if (bLocal_701)
						{
							bLocal_700 = true;
						}
						else
						{
							bLocal_700 = func_86("EXL1_MISSILE", 0, 0, 0, 0);
						}
					}
				}
				if (iVar2 == 0)
				{
					if (fVar30 != 0f)
					{
						fVar30 = (fVar30 * -1f);
					}
				}
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_211[iVar2 /*6*/], 0, fVar30, 0f, 0f, 0f, 10f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_211[iVar2 /*6*/], 0, 0f, fVar31, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_211[iVar2 /*6*/], 0, 0f, 0f, fVar32, 0f, 0f, 0f, 0, 0, 1, 1, 0, 1);
				if ((bLocal_688 || iLocal_732) || iLocal_430 >= 2)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_211[iVar2 /*6*/].f_4))
					{
						Local_211[iVar2 /*6*/].f_4 = func_721(Local_211[iVar2 /*6*/], 1);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_211[iVar2 /*6*/].f_4))
			{
				HUD::REMOVE_BLIP(&(Local_211[iVar2 /*6*/].f_4));
			}
			iVar2++;
		}
	}
}

int func_721(int iParam0, bool bParam1)//Position - 0x6EE24
{
	if (func_109())
	{
		return GlobalFunc_6783(iParam0, bParam1, 0);
	}
	return 0;
}



Vector3 func_724(struct<3> Param0)//Position - 0x6EEF7
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_530, Param0) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3);
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	fVar4 = (Var0.f_2 - fVar3);
	if (fVar4 <= 40f)
	{
		Var0.f_2 = (fVar3 + 40f);
	}
	return Var0;
}

void func_725(char* sParam0)//Position - 0x6EF47
{
	if (iLocal_875 < 0)
	{
		func_265(-1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_875)
	{
		if (func_86(sParam0, 0, 0, 0, 0))
		{
			func_265(-1);
		}
	}
}

void func_726()//Position - 0x6EF77
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iLocal_430 >= 2 && MISC::GET_GAME_TIMER() >= iLocal_906 + 2500)
	{
		if (!iLocal_690)
		{
			func_84("PF_JETHLP", 0, 0);
			iLocal_690 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_211[1 /*6*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(Local_211[1 /*6*/], 1) - ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1) };
			Var0.x = (Var3.x / 4f);
			if (Var0.x > 20f)
			{
				Var0.x = 20f;
			}
			else if (Var0.x < -20f)
			{
				Var0.x = -20f;
			}
			Var0.f_1 = (Var3.f_1 / 4f);
			if (Var0.f_1 > 20f)
			{
				Var0.f_1 = 20f;
			}
			else if (Var0.f_1 < -20f)
			{
				Var0.f_1 = -20f;
			}
			Var0.f_2 = 6.5f;
			if (Local_843.x < Var0.x)
			{
				Local_843.x = (Local_843.x + (3f * SYSTEM::TIMESTEP()));
				if (Local_843.x > Var0.x)
				{
					Local_843.x = Var0.x;
				}
			}
			else if (Local_843.x > Var0.x)
			{
				Local_843.x = (Local_843.x - (3f * SYSTEM::TIMESTEP()));
				if (Local_843.x < Var0.x)
				{
					Local_843.x = Var0.x;
				}
			}
			if (Local_843.f_1 < Var0.f_1)
			{
				Local_843.f_1 = (Local_843.f_1 + (3f * SYSTEM::TIMESTEP()));
				if (Local_843.f_1 > Var0.f_1)
				{
					Local_843.f_1 = Var0.f_1;
				}
			}
			else if (Local_843.f_1 > Var0.f_1)
			{
				Local_843.f_1 = (Local_843.f_1 - (3f * SYSTEM::TIMESTEP()));
				if (Local_843.f_1 < Var0.f_1)
				{
					Local_843.f_1 = Var0.f_1;
				}
			}
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_546, Local_211[1 /*6*/], Local_843, 0);
		}
		if (GlobalFunc_7635(&Local_27, 1, 0, 0) && iLocal_429 < 1)
		{
			if (!iLocal_691)
			{
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				iLocal_690 = 1;
				if (MISC::GET_GAME_TIMER() >= iLocal_912)
				{
					if (GlobalFunc_74("PF_JETHLP"))
					{
						HUD::CLEAR_HELP(0);
						iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
					}
				}
				GlobalFunc_2243();
				func_157(11);
				iLocal_691 = 1;
			}
		}
		else if (iLocal_691)
		{
			GlobalFunc_2242();
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			func_159(11);
			iLocal_691 = 0;
		}
	}
}


void func_728(int iParam0, float fParam1)//Position - 0x6F1C0
{
	struct<3> Var0;
	
	ENTITY::SET_ENTITY_COORDS(iLocal_530, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1, false, 0, 1);
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (iLocal_430 > 0)
	{
		if (Var0.f_1 > 360f)
		{
			Var0.f_1 = (Var0.f_1 - 360f);
		}
		else if (Var0.f_1 < 0f)
		{
			Var0.f_1 = (Var0.f_1 + 360f);
		}
		if ((Var0.f_1 > 70f && Var0.f_1 < 290f) || iLocal_430 < 3)
		{
			Var0.f_1 = 0f;
		}
		if ((Var0.x <= -10f && fParam1 < 80f) || fParam1 < 40f)
		{
			Var0.x = 0f;
		}
		ENTITY::SET_ENTITY_ROTATION(iLocal_530, Var0, 2, 1);
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_530, 0f, 0f, Var0.f_2, 2, 1);
	}
}

void func_729()//Position - 0x6F295
{
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_937))
	{
		AUDIO::STOP_SOUND(iLocal_937);
	}
	iLocal_662 = 0;
}

void func_730()//Position - 0x6F2B3
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar7;
	struct<3> Var8;
	int iVar11;
	struct<3> Var12;
	
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_524[2], 1);
	}
	if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (!iLocal_608)
	{
		func_747(1, 0);
		func_129();
		if (!iLocal_673)
		{
			if (bLocal_612)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					func_725("EXL1_UPPLAN");
				}
				else
				{
					func_725("EXL1_TBANT");
				}
			}
		}
		if (!iLocal_670)
		{
			func_98(0, 1065353216);
			iLocal_670 = 1;
		}
		if (MISC::GET_GAME_TIMER() >= iLocal_889 + 100)
		{
			if (!iLocal_672)
			{
				iLocal_672 = 1;
			}
		}
		if (!iLocal_687)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_889 + 500)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iVar0 = 0;
				while (iVar0 < Local_281)
				{
					if (!PED::IS_PED_INJURED(Local_281[iVar0 /*17*/]))
					{
						PED::SET_PED_CAN_RAGDOLL(Local_281[iVar0 /*17*/], 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_281[iVar0 /*17*/], 0);
					}
					iVar0++;
				}
				iLocal_687 = 1;
			}
		}
		iVar2 = 0;
		bVar3 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar1, joaat("component_at_ar_flsh")))
		{
			iVar2 = 1;
			if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar1, joaat("component_at_ar_flsh")))
			{
				bVar3 = true;
			}
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar1, joaat("component_at_pi_flsh")))
		{
			iVar2 = 1;
			if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar1, joaat("component_at_pi_flsh")))
			{
				bVar3 = true;
			}
		}
		if (!bLocal_671)
		{
			if (bVar3)
			{
				bLocal_671 = true;
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_889 + 800)
			{
				if (iVar2 && !bVar3)
				{
					bLocal_671 = func_84("PF_FLSHLP", 0, 0);
				}
			}
		}
		else if (bVar3)
		{
			if (GlobalFunc_74("PF_FLSHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_912 + 500)
				{
					HUD::CLEAR_HELP(0);
					iLocal_912 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (Local_822.f_2 <= -6f)
		{
			func_21();
			func_113(0, 0);
			func_3(5);
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1) };
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeCargoPlaneClimb"), Var4.x, Var4.f_1, SYSTEM::FLOOR(ENTITY::GET_ENTITY_HEADING(iLocal_524[2])), 0);
			HUD::SET_RADAR_ZOOM_PRECISE(1f);
		}
		if (MISC::GET_GAME_TIMER() >= iLocal_889 + 200)
		{
			func_125(5);
		}
		if (!bLocal_772)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
			{
				iLocal_932 = func_746();
				if (iLocal_932 >= 0)
				{
					GlobalFunc_173(&uLocal_983, 6, Local_281[iLocal_932 /*17*/], "MERRYPLANE1", 0, 1);
					bLocal_772 = true;
				}
			}
		}
		else if (!bLocal_774)
		{
			bLocal_774 = func_86("EXL1_MW1", 0, 0, 0, 0);
			iLocal_934 = MISC::GET_GAME_TIMER();
		}
		else if (!bLocal_775)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_934 + 12000)
			{
				bLocal_775 = func_86("EXL1_MW2", 0, 0, 0, 0);
			}
		}
		if (!bLocal_612)
		{
			if (bLocal_664)
			{
				bLocal_612 = func_123("PF_KILL", 1, 0);
			}
		}
		if (bLocal_612)
		{
			if (!iLocal_773)
			{
				if (Local_822.f_1 >= -4f)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111())
					{
						iLocal_933 = func_746();
						if (iLocal_933 >= 0)
						{
							GlobalFunc_173(&uLocal_983, 7, Local_281[iLocal_933 /*17*/], "MERRYPLANE2", 0, 1);
							iLocal_773 = 1;
						}
					}
				}
			}
			else if (!bLocal_776)
			{
				bLocal_776 = func_86("EXL1_MWCOM", 0, 0, 0, 0);
			}
		}
		if (!bLocal_664)
		{
			if (bLocal_772)
			{
				if (bLocal_774 || PED::IS_PED_INJURED(Local_281[iLocal_932 /*17*/]))
				{
					bLocal_664 = func_86("EXL1_MERCR", 0, 0, 0, 0);
				}
			}
		}
		if (!iLocal_661)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_889 + 3000)
			{
				iVar7 = 0;
				while (iVar7 < Local_281)
				{
					if (!PED::IS_PED_INJURED(Local_281[iVar7 /*17*/]))
					{
						PED::SET_PED_ACCURACY(Local_281[iVar7 /*17*/], 25);
					}
					iVar7++;
				}
				iLocal_661 = 1;
			}
		}
		if (!iLocal_673)
		{
			if (iLocal_901 == 8)
			{
				iLocal_673 = 1;
			}
		}
		else
		{
			func_737();
			if (iLocal_669)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 1) < 0.6f)
				{
					PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			if (Local_822.f_2 >= -0.6f)
			{
				if (!iLocal_668)
				{
					VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_524[2], 1);
					iLocal_668 = 1;
				}
			}
			else if (iLocal_668)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_524[2], 0);
				iLocal_668 = 0;
			}
			if (!bLocal_799)
			{
				bLocal_799 = GlobalFunc_2867("EXL1_HEAD_TO_COCKPIT");
			}
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (!iLocal_674)
			{
				if (!iLocal_669)
				{
					if (bLocal_667)
					{
						if (!iLocal_758)
						{
							iVar7 = 0;
							while (iVar7 < Local_281)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_281[iVar7 /*17*/]))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_281[iVar7 /*17*/]))
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_281[iVar7 /*17*/]));
									}
									else
									{
										PED::DELETE_PED(&(Local_281[iVar7 /*17*/]));
									}
								}
								iVar7++;
							}
							iLocal_758 = 1;
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_902)
						{
							iVar7 = 0;
							while (iVar7 <= 0)
							{
								if (!PED::IS_PED_INJURED(iLocal_520[iVar7]))
								{
									PED::SET_PED_ACCURACY(iLocal_520[iVar7], 20);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_946);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_946);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3600, 0);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_946);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_520[iVar7], uLocal_946);
									iLocal_923 = MISC::GET_GAME_TIMER();
									iLocal_669 = 1;
								}
								iVar7++;
							}
						}
					}
				}
				else
				{
					if (!iLocal_768)
					{
						if (!PED::IS_PED_INJURED(iLocal_520[0]))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_923 + 8000)
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_946);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2928.93f, 767.2f, 462.4f, PLAYER::PLAYER_PED_ID(), 1f, 0, 0.5f, 4f, 0, 64, 0, -957453492, 20000);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_946);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_520[iVar7], uLocal_946);
								iLocal_768 = 1;
							}
						}
					}
					if (!bLocal_666)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_923 + 1000)
						{
							bLocal_666 = func_86("EXL1_PILOTA", 0, 0, 0, 0);
						}
					}
					else if (!bLocal_677)
					{
						bLocal_677 = func_86("EXL1_PFIGHT", 0, 0, 0, 0);
					}
					if (!iLocal_665)
					{
						iVar7 = 0;
						while (iVar7 <= 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_520[iVar7]))
							{
								iLocal_540[iVar7] = func_735(iLocal_520[iVar7], 1);
							}
							iVar7++;
						}
						iLocal_665 = 1;
					}
				}
				if (bLocal_667)
				{
					iVar11 = 0;
					iVar7 = 0;
					while (iVar7 <= 0)
					{
						if (PED::IS_PED_INJURED(iLocal_520[iVar7]))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_540[iVar7]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_520[iVar7]))
								{
									GlobalFunc_565(163, 1, 0);
								}
								HUD::REMOVE_BLIP(&(iLocal_540[iVar7]));
							}
							iVar11++;
						}
						else
						{
							Var12 = { ENTITY::GET_ENTITY_COORDS(iLocal_520[iVar7], 1) };
							if (Var12.f_2 <= (Var8.f_2 - 10f))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_520[iVar7]));
							}
						}
						iVar7++;
					}
					if (iVar11 == 1)
					{
						iLocal_929 = MISC::GET_GAME_TIMER();
						iLocal_674 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_756)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_929 + 10000)
					{
						func_734(0, 0, -10f);
						iLocal_756 = 1;
					}
				}
				if (!bLocal_800)
				{
					bLocal_800 = GlobalFunc_2867("EXL1_COCKPIT_ENTERED");
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_539))
				{
					uLocal_539 = func_257(func_733(), 0);
					if (HUD::DOES_BLIP_EXIST(uLocal_539))
					{
						HUD::SET_BLIP_COLOUR(uLocal_539, 2);
						HUD::SET_BLIP_SCALE(uLocal_539, 0.7f);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_539, "PF_CONTROLS");
					}
				}
				if (!bLocal_676)
				{
					bLocal_676 = func_86("EXL1_PKILL", 0, 0, 0, 0);
				}
				else if (!bLocal_675)
				{
					bLocal_675 = func_123("PF_CONT", 1, 0);
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_929 + 30000)
				{
					bLocal_771 = true;
				}
				if (!iLocal_770)
				{
					if (Local_822.f_1 >= 27.2f)
					{
						iLocal_770 = 1;
					}
				}
				else if (Local_822.f_1 <= 26.9f)
				{
					iLocal_770 = 0;
				}
				if (iLocal_770 || bLocal_771)
				{
					if (!bLocal_771)
					{
						if (!iLocal_807)
						{
							GlobalFunc_1("PF_CONHLP");
							iLocal_807 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 23) || bLocal_771)
					{
						iLocal_608 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_912)
				{
					if (GlobalFunc_74("PF_CONHLP"))
					{
						HUD::CLEAR_HELP(0);
						iLocal_807 = 0;
						iLocal_912 = MISC::GET_GAME_TIMER() + 100;
					}
				}
			}
		}
	}
	else
	{
		func_731();
	}
}

void func_731()//Position - 0x6FB36
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_67)
	{
		case 0:
			func_28(1, 1, 1, 1);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
			func_732();
			func_263(0);
			func_115(0, 0);
			func_113(0, 0);
			func_269(0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0);
			iVar0 = 0;
			while (iVar0 < Local_281)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_281[iVar0 /*17*/]))
				{
					PED::DELETE_PED(&(Local_281[iVar0 /*17*/]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_520)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_520[iVar0]))
				{
					PED::DELETE_PED(&(iLocal_520[iVar0]));
				}
				iVar0++;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2]);
			}
			func_159(7);
			func_157(8);
			iLocal_914 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_914, iLocal_524[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_524[2], "seat_dside_f"));
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_914, func_120(0), "Sit_Pilot_Seat", 1000f, -8f, 2, 0, 1000f, 2);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_914, 0.04f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			func_113(3, 1);
			func_98(4, 1065353216);
			Var1 = { func_99(7) };
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				func_100(0);
				ENTITY::SET_ENTITY_COORDS(iLocal_524[2], 1592.9f, -3738.5f, Var1.f_2, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_524[2], 121f);
			}
			func_169(8);
			iLocal_811 = 0;
			iLocal_873 = MISC::GET_GAME_TIMER();
			iLocal_67 = 1;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_524[2], 0f, 0f, 121f, 2, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[2], 40f);
			}
			func_167(0.9f, 29f, 2.1f, 0.75f, 29f, 2.1f, &Local_846, 3f);
			func_167(-3.2f, 27.6f, 2.45f, -3.2f, 27.9f, 1.82f, &Local_849, 3f);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_543, iLocal_524[2], Local_846, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_543, iLocal_524[2], Local_849, 1);
			if (!iLocal_811)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_873 + 2700)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_811 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_873 + 3000)
			{
				iLocal_67 = 2;
			}
			break;
		
		case 2:
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			func_28(0, 1, 1, 1);
			func_171(6, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			break;
	}
}

void func_732()//Position - 0x6FE12
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_68.x)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iVar0 /*3*/]))
		{
			if (iVar0 != 0)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_68[iVar0 /*3*/]));
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_68[iVar0 /*3*/], 0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_68[iVar0 /*3*/]));
				Global_86805 = 1;
			}
		}
		iVar0++;
	}
}

Vector3 func_733()//Position - 0x6FE6B
{
	return func_117(0f, 29.32f, 2f);
}

void func_734(int iParam0, int iParam1, float fParam2)//Position - 0x6FE7E
{
	if (Local_418.f_5 != fParam2)
	{
		Local_418.f_3 = iParam0;
		Local_418.f_4 = iParam1;
		Local_418.f_5 = fParam2;
	}
}

int func_735(int iParam0, bool bParam1)//Position - 0x6FEA6
{
	if (func_109())
	{
		return GlobalFunc_6797(iParam0, bParam1, 145);
	}
	return 0;
}


void func_737()//Position - 0x6FF15
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	
	fVar4 = 0f;
	Var5 = { PED::GET_PED_EXTRACTED_DISPLACEMENT(PLAYER::PLAYER_PED_ID(), 0) };
	GlobalFunc_612(&uVar0, &iVar1, &uVar2, &uVar3, 0);
	Var8 = { func_744() };
	Var11 = { func_743() };
	if (iLocal_511 == 0)
	{
		Var14 = { Var8 };
	}
	else
	{
		Var14 = { Var11 };
	}
	if (!bLocal_667)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_537))
		{
			HUD::SET_BLIP_COORDS(uLocal_537, Var14);
		}
		else
		{
			uLocal_537 = func_257(Var14, 0);
		}
	}
	switch (iLocal_511)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var8, 0.5f, 0.4f, 1.3f, 0, 1, 1) && func_742(PLAYER::PLAYER_PED_ID(), iLocal_524[2], 40f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && ((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())))
			{
				func_740(1);
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "get_on_bottom_front_stand_high", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_120(1), "get_on_bottom_front_stand_high");
			}
			if (fVar4 >= 0.98f)
			{
				func_740(6);
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "get_off_bottom_front_stand", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_120(1), "get_off_bottom_front_stand");
			}
			else
			{
				func_740(0);
			}
			if (fVar4 >= 0.98f)
			{
				func_740(0);
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_120(2), "get_off_top_back_stand_right_hand", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_120(2), "get_off_top_back_stand_right_hand");
			}
			else
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 0);
				func_740(0);
			}
			if (fVar4 >= 0.98f)
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 0);
				func_740(0);
			}
			break;
		
		case 6:
			if (iVar1 < -100)
			{
				if (Local_825.f_2 < -0.2f)
				{
					func_740(4);
				}
			}
			else if (iVar1 > 100)
			{
				if (Local_825.f_2 > -2f)
				{
					func_740(5);
				}
				else
				{
					func_740(2);
				}
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "climb_up", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_120(1), "climb_up");
			}
			if (Local_825.f_2 >= -0.2f)
			{
				func_740(3);
			}
			else if (iVar1 >= -100)
			{
				if (fVar4 >= 0.9f)
				{
					func_740(6);
				}
			}
			break;
		
		case 5:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "climb_down", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_120(1), "climb_down");
			}
			if (fVar4 >= 0.9f)
			{
				if (iVar1 <= 100 || Local_825.f_2 <= -2f)
				{
					func_740(6);
				}
			}
			break;
	}
	if (iLocal_511 > 0)
	{
		PAD::_0x7F4724035FDCA1DD(0);
		CAM::_0xC8391C309684595A();
		CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_ON_EXILE1_LADDER_CAMERA", 1500);
	}
	if (iLocal_511 != 0 && iLocal_511 != 2)
	{
		GlobalFunc_2870(&Local_825, -0.75f, 0.4f);
		if (Local_825.f_2 >= -1.27f)
		{
			GlobalFunc_2870(&(Local_825.f_1), (22.64f + 0.07f), 0.4f);
		}
		else if (Local_825.f_2 >= -1.56f)
		{
			GlobalFunc_2870(&(Local_825.f_1), (22.64f + 0.02f), 0.4f);
		}
		else
		{
			GlobalFunc_2870(&(Local_825.f_1), 22.64f, 0.4f);
		}
		fVar17 = -5f;
		if (iLocal_511 == 6)
		{
			if (Local_825.f_2 < -2f)
			{
				fVar17 = -2.4987f;
			}
			else if (Local_825.f_2 < -1f)
			{
				fVar17 = -1.4952f;
			}
			else
			{
				fVar17 = -0.500924f;
			}
			fVar18 = 0.4f;
			fVar19 = 1f;
		}
		else if (iLocal_511 == 4 || iLocal_511 == 1)
		{
			if (fVar4 >= 0.8f)
			{
				if (Local_825.f_2 >= -0.500924f)
				{
					fVar17 = -0.500924f;
					fVar18 = 100f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 >= -0.700924f)
				{
					fVar17 = -0.500924f;
					fVar18 = 0.2f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 >= -1.4952f)
				{
					fVar17 = -1.4952f;
					fVar18 = 100f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 >= -1.6952f)
				{
					fVar17 = -1.4952f;
					fVar18 = 0.2f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 >= -2.4987f)
				{
					fVar17 = -2.4987f;
					fVar18 = 100f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 >= -2.6987f)
				{
					fVar17 = -2.4987f;
					fVar18 = 0.2f;
					fVar19 = 0.2f;
				}
			}
		}
		else if (iLocal_511 == 5)
		{
			if (fVar4 >= 0.8f)
			{
				if (Local_825.f_2 <= -0.300924f)
				{
					fVar17 = -0.500924f;
					fVar18 = 0.2f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 <= -0.500924f)
				{
					fVar17 = -0.500924f;
					fVar18 = 100f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 <= -1.0952f)
				{
					fVar17 = -1.4952f;
					fVar18 = 0.2f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 <= -1.4952f)
				{
					fVar17 = -1.4952f;
					fVar18 = 100f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 <= -2.0987f)
				{
					fVar17 = -2.4987f;
					fVar18 = 0.2f;
					fVar19 = 0.2f;
				}
				else if (Local_825.f_2 <= -2.4987f)
				{
					fVar17 = -2.4987f;
					fVar18 = 100f;
					fVar19 = 0.2f;
				}
			}
		}
		if (fVar17 > -5f)
		{
			fVar20 = (fVar17 - Local_825.f_2);
			if (fVar20 < 0f)
			{
				fVar20 = (fVar20 * -1f);
			}
			if (fVar20 < fVar19)
			{
				GlobalFunc_2870(&(Local_825.f_2), fVar17, fVar18);
			}
		}
		GlobalFunc_5915(&Local_828, 0f, 0f, 0f, 30f);
		Local_825.f_2 = (Local_825.f_2 + Var5.f_2);
		if (iLocal_511 != 1)
		{
			Local_825.x = (Local_825.x + Var5.x);
			Local_825.f_1 = (Local_825.f_1 + Var5.f_1);
		}
		if (iLocal_511 != 3)
		{
			if (Local_825.f_2 > -0.2f)
			{
				Local_825.f_2 = -0.2f;
			}
			if (Local_825.f_2 < -1.56f)
			{
				if (Local_825.f_1 > 22.64f)
				{
					Local_825.f_1 = 22.64f;
				}
			}
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_524[2], 0, Local_825, Local_828, 0, 0, 0, 1, 2, 1);
	}
}



void func_740(int iParam0)//Position - 0x70651
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_947 != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_947, iLocal_511 == 3);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			break;
		
		case 6:
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "base_left_hand_up", 8f, -8f, -1, 131073, 0, 0, 0, 0);
			break;
		
		case 4:
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "climb_up", 8f, -8f, -1, 131073, 0, 0, 0, 0);
			break;
		
		case 5:
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "climb_down", 8f, -8f, -1, 131073, 0, 0, 0, 0);
			break;
		
		case 1:
			if (!iLocal_788)
			{
				GlobalFunc_200(&uLocal_983, 4);
				if (!PED::IS_PED_INJURED(iLocal_520[0]))
				{
					GlobalFunc_173(&uLocal_983, 4, iLocal_520[0], "MERCPLANE", 0, 1);
				}
				iLocal_788 = 1;
			}
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_947, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			Local_825 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_524[2], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
			Local_828 = { ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_524[2], 2) };
			Local_828.x = GlobalFunc_2783(Local_828.x);
			Local_828.f_1 = GlobalFunc_2783(Local_828.f_1);
			Local_828.f_2 = GlobalFunc_2783(Local_828.f_2);
			func_741(&Local_828, 0f);
			func_741(&(Local_828.f_1), 0f);
			func_741(&(Local_828.f_2), 0f);
			GlobalFunc_7206(0, 1, 1, 0);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "get_on_bottom_front_stand_high", 4f, -8f, -1, 131074, 0.2f, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
			break;
		
		case 2:
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 0);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(1), "get_off_bottom_front_stand", 8f, -8f, -1, 131072, 0, 0, 0, 0);
			break;
		
		case 3:
			if (!bLocal_667)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_537))
				{
					HUD::REMOVE_BLIP(&uLocal_537);
					GlobalFunc_7206(0, 1, 0, 0);
				}
				PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.3f);
				iLocal_902 = MISC::GET_GAME_TIMER() + 800;
				bLocal_667 = true;
			}
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_120(2), "get_off_top_back_stand_right_hand", 8f, -8f, -1, 131072, 0, 0, 0, 0);
			break;
	}
	iLocal_511 = iParam0;
}

void func_741(var uParam0, float fParam1)//Position - 0x708C4
{
	float fVar0;
	
	fVar0 = (*uParam0 - fParam1);
	if (fVar0 < -90f)
	{
		*uParam0 = (*uParam0 + 360f);
	}
	else if (fVar0 > 90f)
	{
		*uParam0 = (*uParam0 - 360f);
	}
}

int func_742(int iParam0, int iParam1, float fParam2)//Position - 0x70905
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam0));
	fVar1 = GlobalFunc_2783(ENTITY::GET_ENTITY_HEADING(iParam1));
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	if (fVar2 <= fParam2 || fVar2 >= (360f - fParam2))
	{
		return 1;
	}
	return 0;
}

Vector3 func_743()//Position - 0x70957
{
	return func_117(-0.8f, 30f, 2f);
}

Vector3 func_744()//Position - 0x7096E
{
	return func_117(-0.8f, 22.7f, -3f);
}


int func_746()//Position - 0x70A5E
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 9999999f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((iVar0 != 1 && iVar0 != iLocal_932) && iVar0 != iLocal_933)
		{
			if (!PED::IS_PED_INJURED(Local_281[iVar0 /*17*/]))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_281[iVar0 /*17*/], 1), 0);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_747(bool bParam0, bool bParam1)//Position - 0x70ADD
{
	if (!bLocal_741)
	{
		bLocal_741 = AUDIO::LOAD_STREAM("Plane_Wind_Pt1", "EXILE_1");
	}
	else if (bParam0)
	{
		if (!iLocal_742)
		{
			if (bParam1)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2930f, 849.7f, 454.5f);
			}
			else
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2929.93f, 815.88f, 449.35f);
			}
			iLocal_742 = 1;
		}
		else if (bParam1)
		{
			AUDIO::SET_VARIABLE_ON_STREAM("INOUT", 0f);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_STREAM("INOUT", ((fLocal_864 - 1f) * -1f));
		}
	}
}

void func_748()//Position - 0x70B5D
{
	struct<3> Var0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	
	if (!iLocal_608)
	{
		func_747(0, 0);
		if (!bLocal_607)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_524[1]))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_524[1]) <= 700f)
				{
					PED::SET_AI_WEAPON_DAMAGE_MODIFIER(0.01f);
					if (!iLocal_759)
					{
						if (iLocal_749)
						{
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_524[1], 0, iLocal_982);
							iLocal_749 = 0;
						}
						else if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_524[1]) > 300f && ENTITY::GET_ENTITY_HEALTH(iLocal_524[1]) > 300)
						{
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_524[1], 1, iLocal_982);
							iLocal_749 = 1;
						}
					}
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_524[1], joaat("weapon_rpg"), 0))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_524[1], 1, 0);
				}
				if (!iLocal_759)
				{
					if (fLocal_857 >= 274000f)
					{
						if (iLocal_61 == 0)
						{
							if (!iLocal_760)
							{
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_524[1], 1, iLocal_982);
								if (!PED::IS_PED_INJURED(iLocal_520[1]))
								{
									PED::SET_PED_ACCURACY(iLocal_520[1], 100);
								}
								WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_524[1]);
								iLocal_760 = 1;
							}
							if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_524[1], func_267(2), 0))
							{
								if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_524[1]) > -400f)
								{
									ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_524[1], 0, iLocal_982);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_524[1], -400f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[1], 0, 0);
									iLocal_930 = MISC::GET_GAME_TIMER();
									iLocal_759 = 1;
								}
							}
						}
					}
				}
				else if (!bLocal_761)
				{
					if (iLocal_61 == 0)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_930 + 9500)
						{
							bLocal_761 = func_84("PF_GLDHLP", 0, 0);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
			{
				if (fLocal_860 < 1f)
				{
					fLocal_860 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_524[2], 2);
					if (fLocal_860 < 0.92f)
					{
						if (iLocal_944 < 0 || MISC::GET_GAME_TIMER() < iLocal_944 + 2000)
						{
							VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_524[2], 1);
						}
						else
						{
							VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_524[2], 0);
						}
						VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_524[2], 0);
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_524[2], 0);
						VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_524[2], 1);
						fLocal_860 = 1f;
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_524[2], 0);
					VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_524[2], 1);
				}
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_524[2], 2, 0, 1f);
				if (iLocal_944 < 0)
				{
					iLocal_944 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_524[2], ENTITY::GET_ENTITY_COORDS(iLocal_524[1], 1)) };
			if (!bLocal_607)
			{
				if (!bLocal_787)
				{
					func_770("EXL_1_MCS_1_P3_B", ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 400f, 500f);
				}
				else
				{
					func_770("EXL_1_MCS_1_P3_B", ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 2000f, 4000f);
				}
			}
			else
			{
				func_770("EXL_1_MCS_1_P3_B", ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 2000f, 4000f);
			}
			if (!bLocal_607)
			{
				if (!iLocal_783)
				{
					if (fLocal_865 >= 0.06f)
					{
						fLocal_865 = (fLocal_865 - (0.08f * SYSTEM::TIMESTEP()));
						if (fLocal_865 < 0.06f)
						{
							fLocal_865 = 0.06f;
						}
					}
					VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iLocal_524[1], fLocal_865);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_524[1], iLocal_524[2], 250f, 250f, 250f, 0, 0, 0))
					{
						iLocal_783 = 1;
					}
				}
				else
				{
					VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iLocal_524[1], 0f);
				}
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(iLocal_520[1]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ramp_Guard_L", iLocal_520[1], 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_520[2]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ramp_Guard_R", iLocal_520[2], 0);
					}
					iVar3 = func_101(7);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 2, 1, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 0, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 3, 1, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 4, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 8, 0, 2, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 9, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Hold_Guard_Front", 0, 0, 1, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 2, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 0, 1, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 3, 0, 5, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 4, 0, 2, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 8, 0, 1, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 9, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 2, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 0, 0, 2, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 3, 0, 1, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 4, 0, 1, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 8, 1, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 9, 0, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Hold_Guard_Rear", 0, 1, 0, iVar3);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Hold_Guard_Rear", 1, 0, 0, iVar3);
				}
				if (!bLocal_797)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_888 + 10000)
					{
						bLocal_797 = AUDIO::PREPARE_MUSIC_EVENT("EXL1_LAND_IN_CARGO_PLANE");
					}
				}
				func_759();
				GlobalFunc_2216(uLocal_537, iLocal_524[2], 3000f, 0.9f, 0);
				if (fLocal_856 >= 3100f)
				{
					if (!bLocal_787)
					{
						func_3(4);
					}
				}
				if (!iLocal_653)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_888 + 500)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_524[1]);
						}
						iLocal_653 = 1;
					}
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1]))
				{
					if (!bLocal_664)
					{
						if (func_86("EXL1_WARN4", 0, 0, 0, 0))
						{
							bLocal_664 = true;
							func_159(4);
							func_157(6);
						}
					}
					else if (!bLocal_744)
					{
						if (fLocal_857 >= 253000f)
						{
							bLocal_744 = func_86("EXL1_NEARLS", 0, 0, 0, 0);
						}
					}
					if (!bLocal_656)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_888 + 4000)
						{
							bLocal_656 = func_84("PF_CRSHLP", 0, 0);
						}
					}
				}
				if (!iLocal_738)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_914))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_914) >= 0.98f)
						{
							bVar4 = true;
						}
					}
					else
					{
						bVar4 = true;
					}
					if (bVar4)
					{
						func_757();
						iLocal_738 = 1;
					}
				}
				else
				{
					bVar5 = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], 0f, -133f, 0f), 90f, 90f, 60f, 0, 1, 0);
					if (bLocal_664)
					{
						if (bLocal_612)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1]))
							{
								if (!bLocal_655)
								{
									bVar6 = false;
									if (!PED::IS_PED_INJURED(iLocal_520[1]))
									{
										if (PED::IS_PED_SHOOTING(iLocal_520[1]))
										{
											bVar6 = true;
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_520[2]))
									{
										if (PED::IS_PED_SHOOTING(iLocal_520[2]))
										{
											bVar6 = true;
										}
									}
									if (bVar6)
									{
										if (iLocal_926 < 0)
										{
											iLocal_926 = MISC::GET_GAME_TIMER();
										}
										else if (MISC::GET_GAME_TIMER() >= iLocal_926 + 800)
										{
											bLocal_655 = func_86("EXL1_SHOOTD", 0, 0, 0, 0);
										}
									}
								}
								else if (!bLocal_654)
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_524[2], 1) < 80f && func_170(iLocal_524[1], iLocal_524[2], 30f))
									{
										bLocal_654 = func_86("EXL1_RAM", 0, 0, 0, 0);
									}
								}
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_520[1]))
					{
						if (iLocal_657)
						{
							if (!bVar5)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_520[1], iLocal_524[1], -1, 0);
								iLocal_657 = 0;
							}
						}
						else if (bVar5)
						{
							PED::SET_PED_SHOOT_RATE(iLocal_520[1], 100);
							TASK::TASK_SHOOT_AT_ENTITY(iLocal_520[1], iLocal_524[1], 99999999, -957453492);
							iLocal_657 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_520[2]))
					{
						if (iLocal_877 < 3)
						{
							if ((bVar5 && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_524[1], iLocal_520[2], 30f, 30f, 30f, 0, 0, 0)) && MISC::GET_GAME_TIMER() >= iLocal_928 + 5000)
							{
								Var10 = { Var0 - Local_840 };
								if (Var10.x >= 0f)
								{
									Var7.x = 38f;
								}
								else
								{
									Var7.x = -38f;
								}
								if (Var10.f_2 >= 0f)
								{
									Var7.f_2 = -30f;
								}
								else
								{
									Var7.f_2 = 30f;
								}
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_946);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_946);
								TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_524[1], 1) + Var7, 2000, -957453492);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_524[1], -1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_946);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_520[2], uLocal_946);
								iLocal_928 = MISC::GET_GAME_TIMER();
								iLocal_877++;
							}
						}
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], 0f, -47f, -3f), 12f, 12f, 12f, 0, 1, 0) || bLocal_607) || bLocal_787)
			{
				if (!bLocal_607)
				{
					bLocal_658 = true;
				}
				Var13 = { ENTITY::GET_ENTITY_ROTATION(iLocal_524[1], 2) };
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_524[2], 0f, -42f, -3f), 5f, 5f, 5f, 0, 1, 0) || bLocal_607) || bLocal_787)
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1]) || bLocal_607) || bLocal_787)
					{
						if (((func_170(iLocal_524[1], iLocal_524[2], 30f) && (Var13.f_1 <= 70f && Var13.f_1 >= -70f)) || bLocal_607) || bLocal_787)
						{
							if (func_109())
							{
								if (GlobalFunc_109())
								{
									iLocal_608 = 1;
								}
								else
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_524[1], 1, 1, 1, 1, 1, 0, 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_524[1], 1);
									VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_524[1], 0);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_524[1], 0);
									bLocal_787 = true;
								}
							}
						}
					}
				}
			}
			else if (!bLocal_607)
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1]))
				{
					if (!bLocal_659)
					{
						if (bLocal_658)
						{
							bLocal_659 = func_86("EXL1_AGAIN", 0, 0, 0, 0);
						}
					}
					if (!bLocal_660)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_524[1], iLocal_524[2]))
						{
							bLocal_660 = func_86("EXL1_CRASH", 0, 0, 0, 0);
						}
					}
				}
			}
			Local_840 = { Var0 };
		}
		if (!iLocal_608)
		{
			if (bLocal_787)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_524[1], 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (iLocal_941 < 0)
					{
						iLocal_941 = MISC::GET_GAME_TIMER();
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_941 + 30000)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("EXL1_MISSION_FAILED");
						func_754();
						func_171(5, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0);
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
			}
		}
	}
	else
	{
		func_749();
	}
}

void func_749()//Position - 0x7163A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_142();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_524[2], 1);
	}
	switch (iLocal_67)
	{
		case 0:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_529, "EXL_Plane", 2, func_101(10), 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_520[1]))
			{
				ENTITY::DETACH_ENTITY(iLocal_520[1], 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_520[1], "Ramp_Guard_L", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_520[2]))
			{
				ENTITY::DETACH_ENTITY(iLocal_520[2], 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_520[2], "Ramp_Guard_R", 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_524[1]))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_524[1], 1, 1, 1, 1, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_524[1], 1);
			}
			RECORDING::_0x48621C9FCA3EBD28(4);
			iVar0 = 0;
			if (PLAYER::_0xB9CF1F793A9F1BF1() && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				iVar0 = 2048;
			}
			CUTSCENE::START_CUTSCENE(iVar0);
			CUTSCENE::SET_CUTSCENE_ORIGIN(2929f, 844f, 467f, 180f, -1);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_873 = MISC::GET_GAME_TIMER();
			iLocal_67 = 1;
			break;
		
		case 1:
			func_747(1, 1);
			if (!iLocal_610)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_753();
					GlobalFunc_4948(&Local_27, 0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
					{
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_524[2], 1);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 1000f, 1, 0, 0, 0);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_524[2], 0);
						func_159(6);
						func_159(4);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_524[2], 0);
					}
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar1 /*6*/].f_1))
						{
							PED::DELETE_PED(&(Local_211[iVar1 /*6*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_211[iVar1 /*6*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_211[iVar1 /*6*/]));
						}
						iVar1++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[1]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_524[1]));
					}
					if (bLocal_607)
					{
						SYSTEM::WAIT(0);
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_607 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_610 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_520[1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_520[1], 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_520[2]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_520[2], 1);
			}
			if (!iLocal_747)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 1500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("exile1_plane");
					GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
					func_752();
					iLocal_747 = 1;
				}
			}
			if (!bLocal_798)
			{
				bLocal_798 = GlobalFunc_2867("EXL1_LAND_IN_CARGO_PLANE");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_529))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("EXL_Plane", 0)))
				{
					iLocal_529 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("EXL_Plane", 0));
					VEHICLE::_SET_VEHICLE_SHADOW_EFFECT(iLocal_529, 255, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_529, 1, 1, 1, 1, 1, 0, 0, 0);
					VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_529, 0);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_529, 0);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_529, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_529, 0);
					VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iLocal_529, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_529, 3000);
					VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(iLocal_529, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_529, 1, 1);
					func_260(1);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_529, 1);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_529, 2, 0, 1f);
					iVar2 = 2;
					while (iVar2 <= 8)
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_529, iVar2, false);
						iVar2++;
					}
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_529, 7, true);
					VEHICLE::CONTROL_LANDING_GEAR(iLocal_529, 3);
					func_280(1, 1);
					func_283(1, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_529);
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 2287)
			{
				if (!bLocal_780)
				{
					func_751();
				}
				else if (!bLocal_781)
				{
					func_277(0, 1, 1, 1, 0);
					bLocal_781 = true;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ramp_Guard_L", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ramp_Guard_R", 0))
			{
				iVar3 = 1;
				while (iVar3 <= 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_520[iVar3]))
					{
						PED::DELETE_PED(&(iLocal_520[iVar3]));
					}
					iVar3++;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("EXL_Plane", 0))
			{
				iVar4 = 0;
				while (iVar4 < Local_93.x)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_93[iVar4 /*3*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_93[iVar4 /*3*/]));
						Local_93[iVar4 /*3*/].f_1 = 0;
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 < Local_158.x)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_158[iVar4 /*3*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_158[iVar4 /*3*/]));
						Local_158[iVar4 /*3*/].f_1 = 0;
					}
					iVar4++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_533))
				{
					OBJECT::DELETE_OBJECT(&iLocal_533);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_529))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_529);
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				bLocal_609 = true;
			}
			if (!bLocal_609)
			{
				if (!bLocal_778)
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
					{
						func_750();
						func_269(1);
						PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
						PED::_0xED3C76ADFA6D07C4(PLAYER::PLAYER_PED_ID());
						bLocal_778 = true;
					}
				}
				else
				{
					func_100(1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (!bLocal_780)
				{
					func_751();
					SYSTEM::WAIT(500);
				}
				if (!bLocal_781)
				{
					func_277(0, 1, 1, 1, 0);
					SYSTEM::WAIT(500);
				}
				if (bLocal_609)
				{
					if (!bLocal_778)
					{
						SYSTEM::WAIT(0);
						func_750();
						func_100(0);
						func_100(1);
						func_269(1);
						PED::_0xED3C76ADFA6D07C4(PLAYER::PLAYER_PED_ID());
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[1]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_524[1]));
				}
				RECORDING::_0x81CBAE94390F9F89();
				GlobalFunc_200(&uLocal_983, 6);
				func_28(0, 1, 1, 0);
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				RECORDING::_0x81CBAE94390F9F89();
				func_171(5, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			}
			break;
		
		case 2:
			break;
	}
}

void func_750()//Position - 0x71BC6
{
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_117(func_99(9)), 1, true, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_524[2]) - 90f));
	func_268(1);
	func_264();
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 || PLAYER::_0xB9CF1F793A9F1BF1())
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	else
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(8.4f, 1065353216);
	}
}

void func_751()//Position - 0x71C45
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_524[2], 2, 1);
	}
	func_271(5);
	func_466();
	func_115(0, 0);
	func_270();
	iVar0 = 0;
	while (iVar0 < Local_281)
	{
		if (!PED::IS_PED_INJURED(Local_281[iVar0 /*17*/]))
		{
			TASK::TASK_AIM_GUN_AT_COORD(Local_281[iVar0 /*17*/], 2930.5f, 810.5f, 449.1f, -1, 1, 0);
		}
		iVar0++;
	}
	bLocal_780 = true;
}

void func_752()//Position - 0x71CBE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_529, 0))
	{
		VEHICLE::_SET_VEHICLE_SHADOW_EFFECT(iLocal_529, 0, 255);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_533))
		{
			iLocal_533 = OBJECT::CREATE_OBJECT(func_101(18), ENTITY::GET_ENTITY_COORDS(iLocal_529, 1), 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_533, ENTITY::GET_ENTITY_COORDS(iLocal_529, 1), 1, false, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(iLocal_533, ENTITY::GET_ENTITY_ROTATION(iLocal_529, 2), 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_533, 1);
			ENTITY::SET_ENTITY_COLLISION(iLocal_533, 0, 0);
		}
	}
}

void func_753()//Position - 0x71D33
{
	GlobalFunc_7206(1, 1, 1, 0);
	GlobalFunc_8316(1, 1, 1, 0);
	func_35();
}

void func_754()//Position - 0x71D4F
{
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
	GlobalFunc_4948(&Local_27, 0, 0);
	func_729();
	func_260(0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_860();
	func_250();
}



void func_757()//Position - 0x71E0E
{
	int iVar0;
	struct<3> Var1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_520[iVar0]))
			{
				switch (iVar0)
				{
					case 1:
						Var1 = { Local_831 };
						break;
					
					case 2:
						Var1 = { Local_834 };
						break;
				}
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_520[iVar0], iLocal_524[2], 0, Var1, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_520[iVar0], iLocal_524[1], -1, 0);
			}
			iVar0++;
		}
	}
}


void func_759()//Position - 0x71FFF
{
	func_764(1, 0, 0);
	func_763();
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
	{
		if (iLocal_652 || iLocal_876 > 0)
		{
			GlobalFunc_10692(&Local_27, iLocal_524[2], 0, 0, 1, 1, 1);
		}
	}
	if (!iLocal_815)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			iLocal_815 = func_157(3);
		}
	}
	else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		func_159(3);
		iLocal_815 = 0;
	}
	if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]) || fLocal_857 >= 300000f)
	{
		func_3(3);
	}
}




void func_763()//Position - 0x72105
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_524[2], 1, 1);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
		{
			fLocal_856 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_524[2], 0);
			fLocal_857 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_524[2]);
			fVar1 = 0.1f;
			fVar2 = 0.1f;
			bVar3 = false;
			Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (iLocal_62 == 4)
			{
				if (fLocal_856 <= 310f)
				{
					fVar0 = 0.7f;
				}
				else
				{
					fVar0 = 0.6f;
				}
			}
			else if (!iLocal_631)
			{
				if ((((fLocal_856 <= 3000f || Var4.x < -381f) || Var4.x > 3356f) || Var4.f_1 > 5915f) || Var4.f_1 < 2005f)
				{
					if (fLocal_856 > 3000f)
					{
						bLocal_766 = true;
					}
					iLocal_631 = 1;
					bVar3 = true;
					fVar0 = 1.1f;
				}
				else
				{
					fVar0 = 0f;
				}
			}
			else if (fLocal_857 >= 183000f)
			{
				fVar0 = 0.55f;
				fVar2 = 0.04f;
			}
			else
			{
				fVar9 = 0.81f;
				fVar10 = 0.57f;
				fVar11 = 0.41f;
				if (fLocal_857 >= 160000f)
				{
					fVar7 = 900f;
					fVar8 = 1300f;
				}
				else if (fLocal_857 >= 120000f)
				{
					fVar7 = 1100f;
					fVar8 = 1600f;
				}
				else if (fLocal_857 >= 90600f)
				{
					fVar7 = 1200f;
					fVar8 = 1700f;
				}
				else if (fLocal_857 >= 51400f)
				{
					fVar7 = 1800f;
					fVar8 = 2000f;
					fVar9 = 1.8f;
				}
				else if (fLocal_857 >= 33900f)
				{
					fVar7 = 1600f;
					fVar8 = 2000f;
				}
				else
				{
					fVar7 = 1500f;
					fVar8 = 3200f;
					fVar10 = 1.1f;
					fVar9 = 1.1f;
				}
				if (fLocal_856 < fVar7)
				{
					fVar0 = fVar9;
				}
				else if (fLocal_856 > fVar8)
				{
					fVar0 = fVar11;
				}
				else
				{
					fVar0 = fVar10;
				}
			}
			if (fLocal_855 < fVar0)
			{
				if (bVar3)
				{
					fLocal_855 = fVar0;
				}
				else
				{
					fLocal_855 = (fLocal_855 + (fVar1 * SYSTEM::TIMESTEP()));
					if (fLocal_855 > fVar0)
					{
						fLocal_855 = fVar0;
					}
				}
			}
			else if (fLocal_855 > fVar0)
			{
				fLocal_855 = (fLocal_855 - (fVar2 * SYSTEM::TIMESTEP()));
				if (fLocal_855 < fVar0)
				{
					fLocal_855 = fVar0;
				}
			}
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_524[2], fLocal_855);
		}
	}
}

void func_764(bool bParam0, bool bParam1, bool bParam2)//Position - 0x7237E
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = false;
	if (bParam1)
	{
		if (!PED::IS_PED_INJURED(iLocal_516))
		{
			if (!PED::IS_PED_GROUP_MEMBER(iLocal_516, GlobalFunc_468()) && (iLocal_62 != 0 || bLocal_623))
			{
				bVar2 = false;
			}
		}
	}
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
		{
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_516))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_516, iLocal_524[1], 0))
					{
						bVar1 = false;
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar3 = false;
		}
	}
	if (bVar2)
	{
		if (bVar0)
		{
			iLocal_613 = 0;
			if (bParam0)
			{
				if (iLocal_874 < 2)
				{
					iLocal_874 = 2;
				}
			}
			if (bVar1)
			{
				if (bVar3)
				{
					bVar4 = true;
					iLocal_617 = 0;
					bLocal_618 = false;
					if (iLocal_62 > 0)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_537))
						{
							GlobalFunc_7206(0, 1, 0, 0);
							func_21();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
							{
								uLocal_537 = func_721(iLocal_524[2], 0);
							}
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(uLocal_536))
					{
						GlobalFunc_7206(0, 1, 0, 0);
						func_21();
						uLocal_536 = func_721(iLocal_524[1], 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_536))
						{
							HUD::SET_BLIP_ROUTE(uLocal_536, 1);
							HUD::SET_GPS_FLAGS(16, 10f);
						}
					}
					if (!bLocal_612)
					{
						if (iLocal_62 > 0)
						{
							if ((iLocal_62 == 1 || iLocal_62 == 2) || iLocal_62 == 3)
							{
								if (iLocal_614)
								{
									if (!iLocal_652)
									{
										bLocal_612 = func_123("PF_FLY", 1, 0);
										if (bLocal_612)
										{
											RECORDING::_0x293220DA1B46CEBC(3f, 20f, 4);
										}
									}
									else if (!bLocal_632)
									{
										bLocal_612 = func_123("PF_FLYLOW", 1, 0);
									}
									else if (bLocal_647)
									{
										bLocal_612 = func_123("PF_FCLOSE", 1, 0);
									}
								}
							}
							else if (bLocal_664)
							{
								bLocal_612 = func_123("PF_CRASH", 1, 0);
							}
						}
						else if (iLocal_614)
						{
							if (!GlobalFunc_111())
							{
								bLocal_612 = func_123("PF_GOAIR", 1, 1);
							}
						}
					}
				}
				else
				{
					if (!iLocal_617)
					{
						func_21();
						iLocal_617 = 1;
					}
					else
					{
						func_768();
					}
					if (!bLocal_618)
					{
						bLocal_618 = func_123("LOSE_WANTED", 1, 0);
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_538))
				{
					GlobalFunc_7206(0, 1, 0, 0);
					func_21();
					uLocal_538 = func_735(iLocal_516, 0);
				}
				if (!bLocal_621)
				{
					bLocal_621 = func_123("PF_WAIT", 1, 0);
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_536))
			{
				GlobalFunc_7206(0, 1, 0, 0);
				func_21();
				if (iLocal_874 == 0 || iLocal_874 == 2)
				{
					iLocal_613 = 1;
				}
				uLocal_536 = func_721(iLocal_524[1], 0);
			}
			if (iLocal_613)
			{
				switch (iLocal_874)
				{
					case 0:
						sVar5 = "PF_PLANE";
						break;
					
					case 2:
						sVar5 = "PF_PLANE2";
						break;
				}
				if (iLocal_62 > 0 || iLocal_615)
				{
					if (func_123(sVar5, 1, 0))
					{
						iLocal_613 = 0;
						iLocal_874++;
					}
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_516, 12f, 12f, 6f, 0, 1, 0))
	{
		if (bLocal_623 || iLocal_62 != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_516, GlobalFunc_468());
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_538))
		{
			GlobalFunc_7206(0, 1, 0, 0);
			func_21();
			uLocal_538 = func_735(iLocal_516, 0);
		}
		if (!bLocal_622)
		{
			bLocal_622 = func_123("PF_LEAVE", 1, 0);
		}
	}
	if (bParam1)
	{
		iVar6 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_516))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, 0))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == PED::GET_VEHICLE_PED_IS_IN(iLocal_516, 0))
					{
						iVar6 = 1;
					}
				}
			}
		}
		if (bVar4)
		{
			bVar4 = iVar6;
		}
	}
	if (bVar4)
	{
		if (GlobalFunc_331())
		{
			bVar4 = false;
		}
	}
	if (!bVar4)
	{
		if (!iLocal_616)
		{
			if (func_765())
			{
				GlobalFunc_4935();
			}
		}
	}
}

int func_765()//Position - 0x72776
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if ((((((((((MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_BANTERb") || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_BANTERc")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN3")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN5")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN6")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN7")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_HAVEHGR")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_NOHGR"))
		{
			iLocal_616 = 1;
			Local_1151 = { Var0 };
			cLocal_1157 = { GlobalFunc_514() };
			return 1;
		}
	}
	return 0;
}



void func_768()//Position - 0x72930
{
	if (HUD::DOES_BLIP_EXIST(uLocal_536))
	{
		HUD::REMOVE_BLIP(&uLocal_536);
	}
	if (GlobalFunc_663("PF_PLANE", 0, 0) || GlobalFunc_663("PF_PLANE2", 0, 0))
	{
		GlobalFunc_7206(1, 1, 0, 0);
	}
}


void func_770(char* sParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x72980
{
	switch (iLocal_66)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam4, fParam4, fParam4, 0, 1, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_66 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_66 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam5, fParam5, fParam5, 0, 1, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_66 = 0;
			}
			break;
	}
}

void func_771()//Position - 0x729F7
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	float fVar16;
	float fVar17;
	struct<6> Var18;
	float fVar24;
	float fVar25;
	float fVar26;
	bool bVar27;
	char* sVar28;
	bool bVar29;
	struct<3> Var30;
	struct<3> Var33;
	float fVar36;
	float fVar37;
	bool bVar38;
	
	if (!iLocal_608)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
		{
			fVar0 = func_153(iLocal_524[1], &fVar1);
			func_728(iLocal_524[1], fVar0);
		}
		if (!bLocal_790)
		{
			bLocal_790 = GlobalFunc_2867("EXL1_TAKE_OFF");
		}
		func_720();
		func_717();
		if (!bLocal_786)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var2.f_1 > 3791f && Var2.x < -2064f)
			{
				if (!func_788("EXIL2_U", 2))
				{
					bLocal_786 = GlobalFunc_10725(1, "EXIL2_U", 1, 0, 0, 0, 0, 1, 0, 1);
				}
			}
		}
		if (iLocal_732)
		{
			if (!iLocal_642)
			{
				GlobalFunc_7206(1, 0, 0, 0);
				iLocal_642 = 1;
			}
			else if (!bLocal_733)
			{
				bLocal_733 = func_86("EXL1_JETSUP", 0, 0, 0, 0);
			}
		}
		if (!bLocal_630)
		{
			if (!PED::IS_PED_INJURED(iLocal_516))
			{
				if (!iLocal_629)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_516, 0);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_946);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_946);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2158.336f, 4790.001f, 40.12202f, 1f, 40000, 0.25f, 0, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, 80.7f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_946);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_516, uLocal_946);
					iLocal_629 = 1;
				}
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_516, 360f, 360f, 360f, 0, 0, 0))
				{
					if (!GlobalFunc_111())
					{
						func_272(0);
						GlobalFunc_173(&uLocal_983, 3, 0, "NervousRon", 0, 1);
						bLocal_630 = true;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_528))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_528))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_528);
			}
			else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_528, 300f, 300f, 300f, 0, 0, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_528);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1) };
			func_759();
			if (!bLocal_766)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var8, 1) < 2400f)
				{
					bLocal_766 = true;
				}
			}
			if (bLocal_766)
			{
				fVar11 = 3000f;
				fVar12 = 0.9f;
			}
			else
			{
				fVar11 = 5000f;
				fVar12 = 0.95f;
			}
			GlobalFunc_2216(uLocal_537, iLocal_524[2], fVar11, fVar12, 0);
			if (fLocal_856 >= fVar11)
			{
				func_3(4);
			}
			if (!bLocal_632)
			{
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -909f, 5426f, -10f, -310f, 6078f, 200f, 0, 0, 0))
				{
					fVar13 = 130f;
				}
				else
				{
					fVar13 = 46f;
				}
				HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL((fVar1 + fVar13));
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1]))
			{
				if (bLocal_630)
				{
					if (!bLocal_635)
					{
						bLocal_635 = func_86("EXL1_COME", 0, 0, 0, 0);
					}
					else if (!iLocal_636)
					{
						if (func_86("EXL1_RADAR", 0, 0, 0, 0))
						{
							iLocal_636 = 1;
							iLocal_879 = MISC::GET_GAME_TIMER();
							iLocal_881 = MISC::GET_GAME_TIMER();
						}
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_881 + 2000)
					{
						if (!bLocal_634)
						{
							iLocal_879 = MISC::GET_GAME_TIMER();
							bLocal_633 = true;
							bLocal_634 = func_84("PF_LOWHLP", 0, 0);
						}
					}
				}
				if (bLocal_633)
				{
					if (!bLocal_632)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_879 + 8000)
						{
							if (fVar0 > fLocal_863)
							{
								bVar14 = true;
							}
							else
							{
								bVar14 = false;
							}
							if (fVar0 >= fVar13)
							{
								bVar15 = false;
								if ((fLocal_857 < (183000f - 10000f) || fLocal_857 > (183000f + 5000f)) || fLocal_858 >= 3f)
								{
									fLocal_858 = (fLocal_858 + (1f * SYSTEM::TIMESTEP()));
								}
								else
								{
									fLocal_858 = (fLocal_858 + (0.2f * SYSTEM::TIMESTEP()));
									bVar15 = true;
								}
								if (!bVar15)
								{
									if (!bLocal_643)
									{
										if (!iLocal_732)
										{
											GlobalFunc_7206(1, 0, 0, 0);
											bLocal_643 = true;
										}
									}
									else if (iLocal_921 < 4)
									{
										if (!iLocal_732)
										{
											if (!bLocal_638)
											{
												if (func_86("EXL1_THIGH", 0, 0, 0, 0))
												{
													GlobalFunc_565(162, 1, 0);
													bLocal_638 = true;
												}
											}
											else if (!iLocal_639)
											{
												if (fLocal_858 > 9f)
												{
													iLocal_639 = func_86("EXL1_TUHIGH", 0, 0, 0, 0);
												}
											}
										}
									}
								}
								if (!iLocal_662)
								{
									if (AUDIO::HAS_SOUND_FINISHED(iLocal_937))
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_885 + 1000)
										{
											AUDIO::PLAY_SOUND_FRONTEND(iLocal_937, "Altitude_Warning", "EXILE_1", 1);
											iLocal_885 = MISC::GET_GAME_TIMER();
											iLocal_662 = 1;
										}
									}
								}
								else
								{
									if (!iLocal_641)
									{
										if (fLocal_858 >= 3f)
										{
											iLocal_921++;
											if (iLocal_921 >= 5)
											{
												iLocal_732 = 1;
											}
											iLocal_641 = 1;
										}
									}
									if (!AUDIO::HAS_SOUND_FINISHED(iLocal_937))
									{
										fVar17 = (fVar0 - fVar13);
										if (bVar14)
										{
											switch (iLocal_878)
											{
												case 0:
													if (fVar17 >= 50f || fLocal_858 >= 7f)
													{
														iLocal_878++;
													}
													break;
												
												case 1:
													if (fVar17 >= 100f || fLocal_858 >= 12f)
													{
														iLocal_878++;
													}
													break;
												}
										}
										switch (iLocal_878)
										{
											case 0:
												fVar16 = 0f;
												break;
											
											case 1:
												fVar16 = 0.5f;
												break;
											
											case 2:
												fVar16 = 1f;
												break;
										}
										AUDIO::SET_VARIABLE_ON_SOUND(iLocal_937, "Intensity", fVar16);
									}
								}
								if (!iLocal_637)
								{
									if (iLocal_920 < 2)
									{
										if (fLocal_858 > 2.8f)
										{
											if (func_84("PF_DWNHLP", 0, 0))
											{
												iLocal_884 = MISC::GET_GAME_TIMER();
												iLocal_920++;
												iLocal_637 = 1;
											}
										}
									}
								}
								if (fLocal_858 > 15f)
								{
									iLocal_732 = 1;
								}
							}
							else
							{
								if (bLocal_638)
								{
									if (GlobalFunc_111())
									{
										Var18 = { GlobalFunc_560() };
										if (MISC::ARE_STRINGS_EQUAL(&Var18, "EXL1_THIGH"))
										{
											iLocal_880 = MISC::GET_GAME_TIMER() + 1000;
											iLocal_640 = 1;
										}
									}
								}
								fLocal_858 = (fLocal_858 - (5f * SYSTEM::TIMESTEP()));
								if (fLocal_858 <= 0f)
								{
									iLocal_878 = 0;
									fLocal_858 = 0f;
									iLocal_641 = 0;
									bLocal_643 = false;
									bLocal_638 = false;
									iLocal_639 = 0;
									iLocal_637 = 0;
									iLocal_662 = 0;
								}
								if (iLocal_640)
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_880)
									{
										iLocal_640 = 0;
									}
									else if (GlobalFunc_111())
									{
										iLocal_880 = MISC::GET_GAME_TIMER() + 1000;
									}
									else if (func_86("EXL1_ONIT", 0, 0, 0, 0))
									{
										iLocal_640 = 0;
									}
								}
								if (GlobalFunc_74("PF_DWNHLP"))
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_884 + 2500 && MISC::GET_GAME_TIMER() >= iLocal_912 + 1000)
									{
										iLocal_912 = MISC::GET_GAME_TIMER();
										HUD::CLEAR_HELP(0);
									}
								}
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_937))
								{
									if (iLocal_63 != 9)
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_885 + 1000 && !iLocal_732)
										{
											AUDIO::STOP_SOUND(iLocal_937);
											iLocal_885 = MISC::GET_GAME_TIMER();
											iLocal_662 = 0;
										}
									}
								}
							}
							fLocal_863 = fVar0;
						}
					}
				}
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1]))
			{
				if (!bLocal_791)
				{
					if (iLocal_876 > 0)
					{
						bLocal_791 = GlobalFunc_2867("EXL1_CARGO_PLANE_SPOTTED");
					}
				}
				else if (!bLocal_792)
				{
					if (iLocal_876 > 3)
					{
						bLocal_792 = GlobalFunc_2867("EXL1_SENSE_OF_STYLE");
					}
				}
				else if (!bLocal_793)
				{
					if (iLocal_876 > 5)
					{
						bLocal_793 = GlobalFunc_2867("EXL1_ON_YOUR_TOES");
					}
				}
				else if (!bLocal_794)
				{
					if (iLocal_645)
					{
						bLocal_794 = GlobalFunc_2867("EXL1_START_CLIMBING");
					}
				}
				else if (!bLocal_795)
				{
					if (iLocal_876 > 8)
					{
						bLocal_795 = GlobalFunc_2867("EXL1_IDENTIFY_YOURSELF");
					}
				}
				else if (!bLocal_796)
				{
					bLocal_796 = AUDIO::PREPARE_MUSIC_EVENT("EXL1_CARGO_DOORS_OPEN");
				}
				if (!iLocal_814)
				{
					if (iLocal_876 > 0)
					{
						if (func_157(2))
						{
							iLocal_814 = 1;
							func_159(1);
						}
					}
				}
				else if (!bLocal_816)
				{
					if (iLocal_876 > 6)
					{
						bLocal_816 = func_157(5);
					}
				}
				else if (!bLocal_817)
				{
					if (iLocal_876 > 11)
					{
						if (!GlobalFunc_111())
						{
							func_159(5);
						}
					}
				}
				if (!iLocal_663)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_524[1], 55f);
					if (MISC::GET_GAME_TIMER() >= iLocal_909)
					{
						iLocal_663 = 1;
					}
				}
				if (!iLocal_614)
				{
					if (!PED::IS_PED_INJURED(iLocal_516))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_516, func_99(12), 20f, 20f, 20f, 0, 0, 0))
						{
							iLocal_614 = func_86("EXL1_RADIO", 0, 0, 0, 0);
						}
						else
						{
							iLocal_614 = 1;
						}
					}
					else
					{
						iLocal_614 = 1;
					}
				}
				else if (iLocal_876 <= 11 && bLocal_612)
				{
					bVar27 = true;
					switch (iLocal_876)
					{
						case 0:
							bVar29 = false;
							Var30 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							Var33 = { ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1) };
							fVar36 = GlobalFunc_830(Var30, Var33);
							fVar36 = GlobalFunc_2783(fVar36);
							bVar29 = GlobalFunc_5913(iLocal_524[1], fVar36, 30f);
							if (!bVar29)
							{
								sVar28 = "EXL1_SEECG";
							}
							else
							{
								sVar28 = "EXL1_HORIZ";
							}
							fVar24 = 2750f;
							fVar25 = 2750f;
							fVar26 = 0f;
							break;
						
						case 1:
							sVar28 = "EXL1_RONENC";
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 0f;
							bVar27 = false;
							break;
						
						case 2:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar28 = "EXL1_PBAN1";
							}
							else
							{
								sVar28 = "EXL1_PBAN2";
							}
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 27000f;
							bVar27 = false;
							break;
						
						case 3:
							sVar28 = "EXL1_PBAN3";
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 76000f;
							bVar27 = false;
							break;
						
						case 4:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar28 = "EXL1_PBAN4";
							}
							else
							{
								sVar28 = "EXL1_PBAN5";
							}
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 116000f;
							bVar27 = false;
							break;
						
						case 5:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar28 = "EXL1_PBAN6";
							}
							else
							{
								sVar28 = "EXL1_PBAN7";
							}
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 154000f;
							bVar27 = false;
							break;
						
						case 6:
							sVar28 = "EXL1_WARN1";
							fVar24 = 950f;
							fVar25 = 600f;
							fVar26 = 55000f;
							break;
						
						case 7:
							sVar28 = "EXL1_RESP1";
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 55000f;
							bVar27 = false;
							break;
						
						case 8:
							sVar28 = "EXL1_WARN2";
							fVar24 = 720f;
							fVar25 = 250f;
							fVar26 = 93000f;
							break;
						
						case 9:
							sVar28 = "EXL1_RESP2";
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 93000f;
							bVar27 = false;
							break;
						
						case 10:
							sVar28 = "EXL1_WARN3";
							fVar24 = 480f;
							fVar25 = 150f;
							fVar26 = 135000f;
							break;
						
						case 11:
							sVar28 = "EXL1_RESP3";
							fVar24 = 3000f;
							fVar25 = 3000f;
							fVar26 = 135000f;
							bVar27 = false;
							break;
					}
					if (fLocal_857 >= fVar26)
					{
						fVar37 = (Var5.f_2 - Var8.f_2);
						if (fVar37 < 0f)
						{
							fVar37 = (fVar37 * -1f);
						}
						if (((((((fLocal_856 <= fVar24 && fVar37 <= fVar25) && !iLocal_662) && !bLocal_643) && !bLocal_638) && !iLocal_640) && !iLocal_732) && fLocal_859 == 0f)
						{
							if (((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_524[2]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_524[2])) || !bVar27) && (iLocal_876 <= 5 || bLocal_632))
							{
								if (func_86(sVar28, 0, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
									iLocal_876++;
								}
							}
						}
					}
				}
				if (!iLocal_652)
				{
					if (iLocal_876 > 1)
					{
						bLocal_612 = false;
						iLocal_652 = 1;
					}
				}
				else
				{
					if (!iLocal_732)
					{
						if (iLocal_62 == 1)
						{
							if (func_109())
							{
								if (fLocal_857 >= 88000f && fLocal_856 < 1500f)
								{
									func_171(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
								}
							}
						}
						else if (iLocal_62 == 2)
						{
							if (func_109())
							{
								if (bLocal_632)
								{
									func_171(3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
								}
							}
						}
					}
					if (!bLocal_632)
					{
						if (iLocal_62 == 2)
						{
							if ((fLocal_857 >= 183000f && (fLocal_856 < 900f || (Var5.x >= 1791f && Var5.f_1 <= 5915f))) && !iLocal_732)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_937))
								{
									AUDIO::STOP_SOUND(iLocal_937);
								}
								iLocal_640 = 0;
								iLocal_662 = 0;
								if (GlobalFunc_74("PF_DWNHLP"))
								{
									HUD::CLEAR_HELP(0);
								}
								bLocal_612 = false;
								iLocal_879 = MISC::GET_GAME_TIMER();
								iLocal_876 = 6;
								HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f);
								bLocal_632 = true;
							}
						}
					}
					else if (!iLocal_645)
					{
						if (func_86("EXL1_CANGO", 0, 0, 0, 0))
						{
							iLocal_645 = 1;
							iLocal_882 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						if (!bLocal_647)
						{
							bLocal_647 = func_86("EXL1_HEREGO", 0, 0, 0, 0);
						}
						if (!bLocal_646)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_882 + 2000)
							{
								bLocal_646 = func_84("PF_UPHLP", 0, 0);
							}
						}
					}
					if (iLocal_62 == 3)
					{
						switch (iLocal_510)
						{
							case 0:
								func_773();
								iLocal_510 = 1;
								break;
							
							case 1:
								if (func_710() && func_701())
								{
									func_467();
									iLocal_510 = 2;
								}
								break;
							
							case 2:
								break;
							}
						}
				}
				bVar38 = false;
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2179.34f, 3098.39f, 31.81f, 950f, 950f, 2000f, 0, 0, 0))
				{
					if (!iLocal_649)
					{
						if (func_86("EXL1_MBASE", 0, 0, 0, 0))
						{
							iLocal_649 = 1;
							iLocal_883 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						if (!bLocal_651)
						{
							bLocal_651 = func_86("EXL1_REACT", 0, 0, 0, 0);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_883 + 2000)
						{
							if (!bLocal_648)
							{
								bLocal_648 = func_84("PF_BASHLP", 0, 0);
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_886 + 250)
					{
						if (GlobalFunc_877(Var5, 3, 2000, 0))
						{
							iLocal_640 = 0;
							if (!iLocal_644)
							{
								if (!iLocal_732)
								{
									GlobalFunc_7206(1, 0, 0, 0);
									iLocal_644 = 1;
								}
							}
							if (!iLocal_650)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_887)
								{
									iLocal_650 = func_86("EXL1_FORT", 0, 0, 0, 0);
								}
							}
							fLocal_859 = (fLocal_859 + 0.25f);
							if (fLocal_859 >= 6f)
							{
								iLocal_732 = 1;
							}
						}
						else
						{
							bVar38 = true;
						}
						iLocal_886 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					bVar38 = true;
				}
				if (bVar38)
				{
					fLocal_859 = (fLocal_859 - (2f * SYSTEM::TIMESTEP()));
					if (fLocal_859 < 0f)
					{
						fLocal_859 = 0f;
					}
					if (iLocal_650)
					{
						iLocal_887 = MISC::GET_GAME_TIMER() + 3000;
						iLocal_650 = 0;
					}
					iLocal_644 = 0;
				}
				if (bLocal_632)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_524[2], 275f, 275f, 100f, 0, 1, 0) && iLocal_510 == 2)
					{
						if (func_170(iLocal_524[1], iLocal_524[2], 60f))
						{
							if (func_109())
							{
								func_171(4, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1);
							}
						}
					}
				}
			}
			else if (((GlobalFunc_74("PF_LOWHLP") || GlobalFunc_74("PF_DWNHLP")) || GlobalFunc_74("PF_BASHLP")) || GlobalFunc_74("PF_CRSHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_912)
				{
					HUD::CLEAR_HELP(0);
					iLocal_912 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	}
}


void func_773()//Position - 0x7469B
{
	func_711(7);
	func_711(12);
	func_711(13);
	func_711(14);
	func_702(0);
}















int func_788(char* sParam0, int iParam1)//Position - 0x75608
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam1 > 3)
	{
		return 0;
	}
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/]), sParam0))
			{
				if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar0 /*104*/].f_99[iParam1])
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_789()//Position - 0x7567C
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	GlobalFunc_10617(51, 4);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"), 4, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"), -1f, 1, 0);
	func_797(iLocal_516, &iLocal_751, &iLocal_927);
	switch (iLocal_512)
	{
		case 0:
			func_711(9);
			iLocal_512 = 1;
			break;
		
		case 1:
			if (func_710())
			{
				MISC::CLEAR_AREA(func_99(2), 10f, 1, 0, 0, 0);
				func_288(1, func_99(2), 27.5f, 1, 1, 0);
				iLocal_512 = 2;
			}
			break;
		
		case 2:
			break;
	}
	if (!iLocal_763)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_922 + 1000)
		{
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_1149);
			}
			iLocal_763 = 1;
		}
	}
	GlobalFunc_502();
	if (!bLocal_748)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1973.555f, 3818.524f, 32.43631f, 400f, 400f, 400f, 0, 0, 0))
		{
			func_342();
		}
		else
		{
			if (!bLocal_752)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1972.015f, 3817.516f, 35.51379f, 16f, 16f, 2f, 0, 0, 0))
				{
					fLocal_867 = (fLocal_867 + (1f * SYSTEM::TIMESTEP()));
					if (fLocal_867 >= 1.8f)
					{
						if (!PED::IS_PED_INJURED(iLocal_517))
						{
							bLocal_752 = func_86("EXL1_TRGOBAK", 0, 0, 0, 0);
						}
					}
				}
				else
				{
					fLocal_867 = 0f;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_517))
			{
				func_3(12);
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iLocal_517, 328, 1);
				if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_517, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_517, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_517, PLAYER::PLAYER_PED_ID(), 1))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_517, 1000, 1);
				}
			}
			if (PED::IS_PED_INJURED(iLocal_518))
			{
				func_3(13);
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iLocal_518, 328, 1);
				if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_518, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_518, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_518, PLAYER::PLAYER_PED_ID(), 1))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_518, 1000, 1);
				}
			}
		}
	}
	if (!iLocal_624)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, 0))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
			iLocal_624 = 1;
		}
	}
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		if (MISC::GET_GAME_TIMER() <= iLocal_922 + 1000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (!bLocal_623)
	{
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(iLocal_516) == PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))
			{
				bVar1 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_516, 20f, 20f, 20f, 0, 0, 0))
		{
			bVar1 = true;
		}
		if (GlobalFunc_2236() || func_794())
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_516, GlobalFunc_468());
			bLocal_623 = true;
		}
	}
	func_793();
	if (!bLocal_812)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[0], 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[0], 0))
			{
				bLocal_812 = func_157(0);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0) && !PED::IS_PED_INJURED(iLocal_516))
	{
		if (!iLocal_626)
		{
			func_764(0, 1, 1);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 0);
			if (PED::IS_PED_GROUP_MEMBER(iLocal_516, GlobalFunc_468()) || !bLocal_623)
			{
				if (bLocal_612)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_516, 0))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(iLocal_516, 0) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (iVar0 == 0)
							{
								if (!iLocal_615)
								{
									if ((iLocal_871 % 2) == 0)
									{
										iLocal_615 = func_86("EXL1_BANTERB", 0, 0, 0, 0);
									}
									else
									{
										iLocal_615 = func_86("EXL1_BANTERC", 0, 0, 0, 0);
									}
									if (iLocal_615)
									{
										RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
									}
								}
								else
								{
									if (!iLocal_753)
									{
										Var2 = { GlobalFunc_2209() };
										if (MISC::ARE_STRINGS_EQUAL(&Var2, "EXL1_BANTERb_33"))
										{
											GlobalFunc_4935();
											iLocal_753 = 1;
										}
									}
									else if (!bLocal_754)
									{
										if (GlobalFunc_466(2) == 2)
										{
											bLocal_754 = func_86("EXL1_HAVEHGR", 0, 0, 0, 0);
										}
										else
										{
											bLocal_754 = func_86("EXL1_NOHGR", 0, 0, 0, 0);
										}
									}
									else if (!bLocal_755)
									{
										bLocal_755 = func_86("EXL1_BANTERB", 0, 35, 1, 0);
									}
									if (iLocal_616)
									{
										if (func_790())
										{
											iLocal_616 = 0;
										}
									}
								}
							}
						}
					}
				}
				if (((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 10f, 10f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2124.434f, 4802.565f, 40.07504f, 16.5f, 16.5f, 4f, 0, 1, 0)) && PED::IS_PED_GROUP_MEMBER(iLocal_516, GlobalFunc_468())) && iVar0 == 0)
				{
					GlobalFunc_4935();
					iLocal_615 = 0;
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 1);
					GlobalFunc_9750(&(Global_93588.f_2167), &Global_93588, 0, 1, 1, 0);
					iLocal_626 = 1;
				}
			}
		}
		else
		{
			if (!iLocal_813)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_159(0);
					iLocal_813 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_516, 20f, 20f, 4f, 0, 1, 0))
			{
				if (iVar0 == 0)
				{
					if (!iLocal_615)
					{
						if (((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_524[1]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2137.271f, 4794.185f, 40.00207f, 2122.555f, 4787.165f, 43.99516f, 42f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2133.571f, 4809.394f, 40.00207f, 2112.329f, 4799.409f, 43.99516f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2135.302f, 4818.373f, 40.00207f, 2105.444f, 4804.136f, 43.99516f, 8f, 0, 1, 0))
						{
							iLocal_615 = func_86("EXL1_SEEPLNb", 0, 0, 0, 0);
							if (iLocal_615)
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 4f, 4);
							}
						}
					}
					else if (!bLocal_627)
					{
						if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_524[1])
						{
							bLocal_627 = func_86("EXL1_SHOUT", 0, 0, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_615 = 1;
			}
			func_764(1, 0, 0);
			if (!iLocal_628)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && (ENTITY::IS_ENTITY_AT_COORD(iLocal_516, 2124.434f, 4802.565f, 40.07504f, 16.5f, 16.5f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_516, iLocal_524[1], 14f, 14f, 4f, 0, 1, 0)))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_516, 0);
					PED::REMOVE_PED_FROM_GROUP(iLocal_516);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_946);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_946);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_99(12), 1f, 40000, 0.25f, 0, -179.12f);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_946);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_516, uLocal_946);
					iLocal_628 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_516, 20f, 20f, 4f, 0, 1, 0))
			{
				GlobalFunc_4935();
			}
			func_171(1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1);
		}
	}
	if (iLocal_62 == 0)
	{
		if (!iLocal_614)
		{
			if ((iLocal_871 % 2) == 0)
			{
				iLocal_614 = func_86("EXL1_RONPLAS", 0, 0, 0, 1);
			}
			else
			{
				iLocal_614 = func_86("EXL1_GOAIR2", 0, 0, 0, 1);
			}
		}
	}
}

int func_790()//Position - 0x75E06
{
	if (iLocal_616)
	{
		if (func_109())
		{
			if (GlobalFunc_10626(&uLocal_983, "EXL1AUD", &Local_1151, &cLocal_1157, 8, 0, 0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}



void func_793()//Position - 0x75E98
{
	if (!iLocal_625)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[0], 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_625 = 1;
		}
	}
}

int func_794()//Position - 0x75EC7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96384, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96385))
		{
			if (!PED::IS_PED_INJURED(Global_96385))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_96385, Global_96384, 0))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_96384, -2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}



void func_797(int iParam0, int iParam1, int iParam2)//Position - 0x75F95
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (*iParam1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (*iParam2 == 0)
				{
					*iParam2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 800));
				}
				else if (MISC::GET_GAME_TIMER() >= *iParam2)
				{
					func_798(iParam0, 0, iParam1, iParam2);
				}
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (*iParam2 == 0)
			{
				*iParam2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000));
			}
			else if (MISC::GET_GAME_TIMER() >= *iParam2)
			{
				func_798(iParam0, 1, iParam1, iParam2);
			}
		}
	}
}

void func_798(int iParam0, bool bParam1, var uParam2, var uParam3)//Position - 0x76029
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_USING_ACTION_MODE(iParam0, 1, -1, "DEFAULT_ACTION");
			*uParam3 = 0;
			*uParam2 = 1;
		}
		else
		{
			PED::SET_PED_USING_ACTION_MODE(iParam0, 0, -1, 0);
			*uParam3 = 0;
			*uParam2 = 0;
		}
	}
}

void func_799()//Position - 0x76069
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_532) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_532, ENTITY::GET_ENTITY_COORDS(iLocal_524[2], 1), 1, false, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_532, ENTITY::GET_ENTITY_ROTATION(iLocal_524[2], 2), 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_532, 1);
	}
}

void func_800()//Position - 0x760BD
{
	func_802();
	switch (iLocal_61)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_884();
				iLocal_606 = 1;
				func_880();
			}
			break;
	}
}


void func_802()//Position - 0x76122
{
	bool bVar0;
	bool bVar1;
	
	if (!iLocal_608)
	{
		if (iLocal_62 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_524[1]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
				{
					bVar0 = false;
					bVar1 = false;
					if (iLocal_759)
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_524[1]) || ENTITY::IS_ENTITY_IN_WATER(iLocal_524[1]))
						{
							bVar0 = true;
						}
						else if (MISC::GET_GAME_TIMER() >= iLocal_930 + 32000)
						{
							func_768();
							func_3(14);
						}
					}
					else
					{
						bVar1 = true;
						bVar0 = true;
					}
					if (bVar1)
					{
						if (iLocal_62 != 4)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_524[1]))
							{
								if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_524[1]) < 300f)
								{
									VEHICLE::EXPLODE_VEHICLE(iLocal_524[1], 1, 0);
								}
							}
						}
					}
					if (bVar0)
					{
						func_768();
						if (!PLAYER::HAS_PLAYER_LEFT_THE_WORLD(PLAYER::PLAYER_ID()))
						{
							func_3(1);
						}
						else
						{
							func_3(4);
						}
					}
				}
				else
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_524[1], 0) > 100f)
					{
						if (((iLocal_62 == 1 || iLocal_62 == 2) || iLocal_62 == 3) || iLocal_62 == 4)
						{
							func_3(6);
						}
					}
					if (((iLocal_62 == 1 || iLocal_62 == 2) || iLocal_62 == 3) || iLocal_62 == 4)
					{
						if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_524[1], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_524[1], 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_524[1], 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_524[1], 2, 30000))
						{
							func_768();
							func_3(11);
						}
					}
				}
			}
		}
		if (iLocal_62 <= 1)
		{
			if (!bLocal_630)
			{
				if (PED::IS_PED_INJURED(iLocal_516))
				{
					func_803();
					func_3(0);
				}
				else if (iLocal_62 == 0)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_516, 0) > 100f)
					{
						func_3(7);
					}
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[2], 0))
		{
			if (((((iLocal_62 == 1 || iLocal_62 == 2) || iLocal_62 == 3) || iLocal_62 == 4) || iLocal_62 == 6) || iLocal_62 == 5)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_537))
				{
					HUD::REMOVE_BLIP(&uLocal_537);
				}
				if ((GlobalFunc_663("PF_FLY", 0, 0) || GlobalFunc_663("PF_FCLOSE", 0, 0)) || GlobalFunc_663("PF_CRASH", 0, 0))
				{
					GlobalFunc_7206(1, 1, 0, 0);
				}
				if (iLocal_62 != 6 || !PLAYER::HAS_PLAYER_LEFT_THE_WORLD(PLAYER::PLAYER_ID()))
				{
					func_3(2);
				}
				else
				{
					func_3(15);
				}
			}
		}
	}
}

void func_803()//Position - 0x763B6
{
	if (HUD::DOES_BLIP_EXIST(uLocal_538))
	{
		HUD::REMOVE_BLIP(&uLocal_538);
	}
	if (GlobalFunc_663("PF_WAIT", 0, 0) || GlobalFunc_663("PF_LEAVE", 0, 0))
	{
		GlobalFunc_7206(1, 1, 0, 0);
	}
}

void func_804(bool bParam0)//Position - 0x763F6
{
	int iVar0;
	
	switch (iLocal_65)
	{
		case 0:
			if (func_805() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_62 + 1;
				}
				func_709(iVar0, 0, 1);
				func_704(iVar0, 0, 1);
				func_700(iVar0, 0, 1);
				func_695(iVar0, 0, 1);
				func_690(iVar0, 0, 1);
				func_683(iVar0, 0, 1);
				func_678(iVar0, 0, 1);
				func_677(0);
				iLocal_65 = 1;
			}
			break;
		
		case 1:
			if (((((((func_710() && func_705()) && func_701()) && func_696()) && func_691()) && func_684()) && func_679()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_65 = 2;
			}
			break;
	}
}

int func_805()//Position - 0x764C1
{
	switch (iLocal_62)
	{
		case 0:
			if (iLocal_626)
			{
				return 1;
			}
			break;
		
		case 1:
			return 1;
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
			if (iLocal_898 >= 2)
			{
				return 1;
			}
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
	}
	return 0;
}

int func_806()//Position - 0x76546
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_60)
	{
		case 0:
			GlobalFunc_7206(1, 1, 1, 0);
			GlobalFunc_2224(1);
			func_879(0);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
			}
			GlobalFunc_5671(2, 1);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 12f);
			iVar0 = 0;
			while (iVar0 < Local_224)
			{
				Local_224[iVar0 /*14*/].f_12 = AUDIO::GET_SOUND_ID();
				iVar0++;
			}
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI = 3;
			if (!GlobalFunc_199())
			{
				iLocal_871 = 0;
			}
			else
			{
				iLocal_871 = Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[14 /*6*/].f_1 + 1;
			}
			iLocal_2439 = 0;
			func_877(1);
			iLocal_60 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_199())
			{
				if (!iLocal_2439)
				{
					STREAMING::PREFETCH_SRL(sLocal_2440);
					STREAMING::_0xBEB2D9A1D9A8F55A(7, 7, 7, 7);
					iLocal_2439 = 1;
				}
				func_711(0);
				func_711(3);
				func_711(16);
				func_711(17);
				func_702(6);
				STREAMING::REQUEST_ANIM_DICT(sLocal_2407);
				GlobalFunc_5115(&uLocal_515);
				while ((((!func_710() || !func_701()) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2407)) || !GlobalFunc_557(&uLocal_515)) || !STREAMING::IS_SRL_LOADED())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.2843f, 178.9459f, 71.22786f, -816.6011f, 177.1724f, 73.22786f, 1f, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					}
					SYSTEM::WAIT(0);
				}
				iVar1 = MISC::GET_GAME_TIMER();
				while ((MISC::GET_GAME_TIMER() < iVar1 + 2000 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.2843f, 178.9459f, 71.22786f, -816.6011f, 177.1724f, 73.22786f, 1f, 0, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				iLocal_1164 = 1;
				iLocal_60 = 5;
			}
			else
			{
				CUTSCENE::STOP_CUTSCENE(0);
				func_871();
			}
			break;
		
		case 5:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (func_808(&uLocal_1165))
			{
				GlobalFunc_619(0);
				iLocal_60 = 6;
			}
			else
			{
				return 0;
			}
		
		case 6:
			return 1;
			break;
	}
	return 0;
}


int func_808(var uParam0)//Position - 0x76776
{
	int iVar0;
	float fVar1;
	struct<6> Var2;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_936)
	{
		case 0:
			GlobalFunc_556(&uLocal_515, 1, 20);
			break;
		
		case 1:
			GlobalFunc_556(&uLocal_515, 1, 21);
			break;
		
		case 2:
			GlobalFunc_556(&uLocal_515, 1, 3);
			break;
	}
	switch (iLocal_1164)
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_8316(1, 1, 1, 0);
			CAM::DESTROY_ALL_CAMS(0);
			func_869(uParam0, PLAYER::PLAYER_PED_ID(), uLocal_432[0]);
			GlobalFunc_7718(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			func_847(-816.459f, 178.285f, 76.232f, -823.844f, 175.655f, 64.887f, 8f, -821.736f, 182.8857f, 70.90462f, -57.6f, GlobalFunc_625(), 1, 0, 1, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-817.6671f, 177.7958f, 71.22737f, 18f, 0);
			FIRE::STOP_FIRE_IN_RANGE(-817.6671f, 177.7958f, 71.22737f, 18f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-817.6671f, 177.7958f, 71.22737f, 18f);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-5000f, -5000f, -1000f, 5000f, 5000f, 1000f, 0, 1);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			func_845();
			func_844(1);
			func_843();
			func_842();
			GlobalFunc_173(&uLocal_983, 0, uLocal_432[0], "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_983, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			STREAMING::BEGIN_SRL();
			fLocal_2441 = -9999f;
			CAM::DO_SCREEN_FADE_IN(800);
			iLocal_872 = MISC::GET_GAME_TIMER();
			iLocal_2430 = 0;
			iLocal_2431 = 0;
			iLocal_2432 = 0;
			iLocal_2433 = 0;
			iLocal_2434 = 0;
			iLocal_2435 = 0;
			iLocal_2436 = 0;
			iLocal_2437 = 0;
			iLocal_1164 = 2;
		
		case 2:
			if (GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_872 + 1000)
			{
				CAM::DO_SCREEN_FADE_OUT(800);
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::END_SRL();
				STREAMING::REMOVE_ANIM_DICT(sLocal_2407);
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
				bLocal_609 = true;
				CUTSCENE::STOP_CUTSCENE(0);
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_1149);
				}
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_1150))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_1150);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				GlobalFunc_8316(0, 1, 1, 0);
				func_871();
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
				}
				return 0;
			}
			else
			{
				func_840();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				fLocal_2441 = (fLocal_2441 + (MISC::GET_FRAME_TIME() * 1000f));
				if (fLocal_2441 < 0f)
				{
					fLocal_2441 = 0f;
				}
				STREAMING::SET_SRL_TIME(fLocal_2441);
				if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
				{
					iVar0 = iVar0;
					iVar0 = func_826(uParam0);
					fVar1 = fVar1;
					fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
					if (!iLocal_2430)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2410))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2410) >= fLocal_2424)
							{
								iLocal_2430 = 1;
							}
						}
					}
					if (iLocal_936 == 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2410))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2410) >= 0.548f)
							{
								iLocal_936 = 1;
							}
						}
					}
					if (!iLocal_2431)
					{
						if (fVar1 >= fLocal_2425)
						{
							func_825();
							iLocal_2431 = 1;
						}
					}
					if (!iLocal_2436)
					{
						if (fVar1 >= fLocal_2427)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, 0);
							iLocal_2436 = 1;
						}
					}
					if (!iLocal_2437)
					{
						if (fVar1 >= fLocal_2428)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, 0);
							iLocal_2437 = 1;
						}
					}
					if (!bLocal_2438)
					{
						if (fVar1 >= fLocal_2429)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_945 = MISC::GET_GAME_TIMER();
							bLocal_2438 = true;
						}
					}
					if (!iLocal_2435)
					{
						if (bLocal_2438)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_945 + 200)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_2435 = 1;
							}
						}
					}
					if (iLocal_2431 && !iLocal_2432)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2411))
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_2411, 0f);
						}
					}
					if (iVar0 > uParam0->f_1218)
					{
						INTERIOR::_0xAF348AFCB575A441("v_trailerrm");
					}
					if (!iLocal_2432)
					{
						if (iVar0 > uParam0->f_1218)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2411))
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_2411, 1f);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[1]))
							{
								PED::DELETE_PED(&(uLocal_432[1]));
							}
							iLocal_936 = 2;
							iLocal_2432 = 1;
						}
					}
					if (!iLocal_2433)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2410))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2410) >= 0.849f)
							{
								if (GlobalFunc_10626(&uLocal_983, "EXL1AUD", "EXL1_INT_LI", "EXL1_INT_LI_2", 8, 0, 0))
								{
									iLocal_943 = MISC::GET_GAME_TIMER();
									iLocal_2433 = 1;
								}
							}
						}
					}
					else if (!iLocal_810)
					{
						Var2 = { GlobalFunc_2209() };
						if (MISC::ARE_STRINGS_EQUAL(&Var2, "EXL1_INT_LI_2") && MISC::GET_GAME_TIMER() >= iLocal_943 + 1000)
						{
							GlobalFunc_619(1);
							iLocal_810 = 1;
						}
					}
					if (!iLocal_2434)
					{
						if (fVar1 >= fLocal_2426)
						{
							GlobalFunc_619(0);
							iLocal_2434 = 1;
						}
					}
					if (!iLocal_777)
					{
						STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(1969.672f, 3818.383f, 33.59213f);
						if (fVar1 >= 0.7f)
						{
							CUTSCENE::REQUEST_CUTSCENE("exile_1_int", 8);
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1969.672f, 3818.383f, 33.59213f, 1, false, 0, 1);
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
							iLocal_777 = 1;
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						STREAMING::END_SRL();
						STREAMING::REMOVE_ANIM_DICT(sLocal_2407);
						GlobalFunc_5114(&uLocal_515);
						iLocal_1164 = 3;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		
		case 3:
			if (GlobalFunc_109())
			{
				func_840();
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_432[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_432[0], "Michael", 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_432[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_432[2], "Trevor", 0, 0, 0);
					}
				}
				func_343(6);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_516, "Ron", 2, func_101(2), 0);
				if (GlobalFunc_7091(0f, 0f, 0f, 1))
				{
					GlobalFunc_10697(0f, 0f, 0f, 0f, 1, 1);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1969.672f, 3818.383f, 33.59213f, 10f, 10f, 10f, 0, 0, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1969.672f, 3818.383f, 33.59213f, 1, false, 0, 1);
				}
				GlobalFunc_562(14);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(1024);
				RECORDING::_0x48621C9FCA3EBD28(4);
				iLocal_610 = 0;
				bLocal_609 = false;
				iLocal_1164 = 4;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			STREAMING::SET_STREAMING(1);
			GlobalFunc_2872(&uLocal_432, 2, 2);
			GlobalFunc_9134(&uLocal_432, 2);
			GlobalFunc_10924(&uLocal_432, 0, 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2409))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409))
				{
					OBJECT::DELETE_OBJECT(&iLocal_2409);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2408))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2408))
				{
					OBJECT::DELETE_OBJECT(&iLocal_2408);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_432[2]))
				{
					if (!PED::IS_PED_INJURED(uLocal_432[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_432[2], 0);
						ENTITY::SET_ENTITY_VISIBLE(uLocal_432[2], 1);
					}
				}
			}
			MISC::SET_TIME_SCALE(1f);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::DESTROY_CAM(uParam0->f_1, 0);
				CAM::DESTROY_ALL_CAMS(0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			INTERIOR::UNPIN_INTERIOR(iLocal_1163);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_1164 = 5;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_516))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0)))
				{
					iLocal_516 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0));
				}
			}
			if (!iLocal_762)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 120167)
				{
					func_461();
					iLocal_762 = 1;
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 120000)
			{
				func_804(1);
			}
			if (!iLocal_619)
			{
				if (iLocal_65 == 2)
				{
					if (!iLocal_620)
					{
						func_810();
						iLocal_620 = 1;
					}
					else
					{
						func_465(0);
						iLocal_619 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				func_459();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[0], 0) && !PED::IS_PED_INJURED(iLocal_516))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_516, iLocal_524[0], 20000, 0, 1f, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				func_809();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_28(0, 1, 0, 1);
				func_871();
				GRAPHICS::_0xE3E2C1B4C59DBC77(6);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				GlobalFunc_8316(0, 1, 1, 0);
				iLocal_1164 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_809()//Position - 0x77030
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_99(1), 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 48f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
}

void func_810()//Position - 0x77067
{
	GlobalFunc_2871(func_99(1));
	GlobalFunc_2871(func_99(0));
}















void func_825()//Position - 0x776C1
{
	int iVar0;
	
	if (GlobalFunc_8315() == 0)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	else
	{
		iVar0 = uLocal_432[0];
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (!PED::IS_PED_INJURED(iVar0))
			{
				iLocal_2411 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2418, Local_2421, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
				TASK::CLEAR_PED_TASKS(iVar0);
				TASK::TASK_SYNCHRONIZED_SCENE(iVar0, iLocal_2411, sLocal_2406, "Michael_inTrailer", 1000f, -1000f, 4, 0, 1148846080, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_2411, 1f);
			}
		}
	}
}

int func_826(var uParam0)//Position - 0x77760
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_59 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_59 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_59 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_59 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_59);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		GlobalFunc_674(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							GlobalFunc_5158(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						
						case 3:
							GlobalFunc_5158(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), 0);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(GlobalFunc_673(), ""))
				{
					GlobalFunc_5158(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				GlobalFunc_672(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			GlobalFunc_672(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, 1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		GlobalFunc_671(0, 0, 1, 1);
	}
	else
	{
		GlobalFunc_671(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	GlobalFunc_670(uParam0);
	return iVar0;
}














void func_840()//Position - 0x78161
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		GlobalFunc_10914("Michael", joaat("player_zero"), 0);
		GlobalFunc_10914("Trevor", joaat("player_two"), 42);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ron", 3, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ron", 0, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ron", 1, 0, 0, 0);
	}
}


void func_842()//Position - 0x78313
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2408))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2408))
		{
			OBJECT::DELETE_OBJECT(&iLocal_2408);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_2410 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2412, Local_2415, 2);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2410, sLocal_2406, "Franklin_atHouse", 1000f, -1000f, 4, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				Var0 = { -818.394f, 178.903f, 60f };
				Var3 = { 0f, 0f, 0f };
				Var6 = { 0f, 0f, 0f };
				iLocal_2408 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_03"), Var0, 1, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2408))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2408, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), Var3, Var6, 0, 0, 0, 0, 2, 1);
				}
			}
		}
	}
}

void func_843()//Position - 0x78413
{
	struct<3> Var0;
	
	Var0 = { 1974.7f, 3819.7f, 33.4f };
	iLocal_1163 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_trailer");
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1163))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1163);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_1163))
		{
		}
	}
}

void func_844(bool bParam0)//Position - 0x7845C
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	
	Var0 = { 1975.3f, 3820.5f, 32.4f };
	fVar3 = -150f;
	func_521(&(uLocal_432[0]), 0, Var0, fVar3, 1, 0, 0);
	if (!PED::IS_PED_INJURED(uLocal_432[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_432[0], 1);
		ENTITY::SET_ENTITY_COLLISION(uLocal_432[0], 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_432[0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_432[0], 1862763509);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_432[0], 1);
		GlobalFunc_11270(uLocal_432[0], 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		if (bParam0)
		{
			Var4 = { 1975.3f, 3820.5f, 22.4f };
			Var7 = { 0f, 0f, 0f };
			Var10 = { 0f, 0f, 0f };
			iLocal_2409 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_phone_ing"), Var4, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2409))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2409))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2409, uLocal_432[0], PED::GET_PED_BONE_INDEX(uLocal_432[0], 60309), Var7, Var10, 0, 0, 0, 0, 2, 1);
				}
			}
		}
	}
}

void func_845()//Position - 0x7856B
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 1969.8f, 3818.4f, 33f };
	fVar3 = -60f;
	func_521(&(uLocal_432[2]), 2, Var0, fVar3, 1, 0, 0);
	if (!PED::IS_PED_INJURED(uLocal_432[2]))
	{
		func_846(uLocal_432[2]);
		GlobalFunc_11323(uLocal_432[2], 1);
	}
}

void func_846(int iParam0)//Position - 0x785C5
{
	GlobalFunc_11270(iParam0, 12, 42, 0, -1, 0, 0, 0, -1, -1, -1, 0);
}

void func_847(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x785E0
{
	func_848(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_848(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)//Position - 0x7860A
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam18)
			{
				GlobalFunc_186(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (GlobalFunc_4966(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (GlobalFunc_4929(iVar0, GlobalFunc_8315(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!GlobalFunc_105(Param11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							Param11.x = (Param11.x + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.x - Var4.x) > Param11.x)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param7, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam10);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param7, 1, false, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, false, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
				}
				iVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					ENTITY::SET_ENTITY_COORDS(iVar14, ENTITY::GET_ENTITY_COORDS(iVar14, 1), 1, false, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}





















void func_869(var uParam0, int iParam1, var uParam2)//Position - 0x79F7C
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -818.1516f, 176.7675f, 72.7135f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -4.2602f, -0.0064f, -48.9658f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 3;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 2000;
		uParam0->f_10[1 /*57*/].f_6 = { -818.319f, 176.7892f, 72.7218f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -3.6262f, -0.0064f, -51.0333f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 45f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 3;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 6500;
		uParam0->f_10[2 /*57*/].f_6 = { -819.9017f, 177.3299f, 72.4137f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 2.432f, -0.0064f, -59.8801f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 3;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 3;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 2200;
		uParam0->f_10[3 /*57*/].f_6 = { -820.1751f, 177.1052f, 71.8574f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { -1.7255f, -0.0064f, -60.144f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 45f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0.2f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 3;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 3700;
		uParam0->f_10[4 /*57*/].f_6 = { -820.1777f, 177.1036f, 71.7557f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -1.7255f, -0.0064f, -60.144f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 45f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 2;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 2;
		uParam0->f_10[4 /*57*/].f_35 = 1f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 3;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -820.1507f, 177.1195f, 72.805f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -1.6181f, 0.1296f, -59.978f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 45f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0.3f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 1;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_54 = 1;
		uParam0->f_10[7 /*57*/].f_2 = 3;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 0;
		uParam0->f_10[7 /*57*/].f_6 = { 1976.239f, 3820.676f, 32.5522f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -5.6554f, 0.0838f, 87.401f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 45f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0.5f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 1;
		uParam0->f_10[7 /*57*/].f_29 = 1f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[8 /*57*/].f_2 = 3;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 600;
		uParam0->f_10[8 /*57*/].f_6 = { 1976.172f, 3820.68f, 33.2294f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { -5.6609f, 0.0878f, 87.4019f };
		uParam0->f_10[8 /*57*/].f_18 = 0;
		uParam0->f_10[8 /*57*/].f_19 = 0;
		uParam0->f_10[8 /*57*/].f_20 = 0;
		uParam0->f_10[8 /*57*/].f_21 = 45f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0.5f;
		uParam0->f_10[8 /*57*/].f_53 = 2;
		uParam0->f_10[8 /*57*/].f_23 = 0.2f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0.67f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 1f;
		uParam0->f_10[8 /*57*/].f_34 = 0;
		uParam0->f_10[8 /*57*/].f_35 = 0f;
		uParam0->f_10[8 /*57*/].f_36 = 0;
		uParam0->f_10[8 /*57*/].f_37 = 0;
		uParam0->f_10[8 /*57*/].f_39 = 0f;
		uParam0->f_10[8 /*57*/].f_40 = 0f;
		uParam0->f_10[8 /*57*/].f_41 = 0;
		uParam0->f_10[8 /*57*/].f_42 = 0;
		uParam0->f_10[8 /*57*/].f_43 = 0;
		uParam0->f_10[8 /*57*/].f_38 = 0f;
		uParam0->f_10[8 /*57*/].f_45 = 0;
		uParam0->f_10[8 /*57*/].f_46 = 0;
		uParam0->f_10[8 /*57*/].f_47 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[9 /*57*/].f_2 = 3;
		uParam0->f_10[9 /*57*/].f_3 = -1;
		uParam0->f_10[9 /*57*/].f_4 = 0;
		uParam0->f_10[9 /*57*/].f_5 = 3700;
		uParam0->f_10[9 /*57*/].f_6 = { 1976.135f, 3820.578f, 33.5507f };
		uParam0->f_10[9 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_12 = 0f;
		uParam0->f_10[9 /*57*/].f_16 = 0f;
		uParam0->f_10[9 /*57*/].f_17 = 0;
		uParam0->f_10[9 /*57*/].f_9 = { -5.6609f, 0.0878f, 87.4019f };
		uParam0->f_10[9 /*57*/].f_18 = 0;
		uParam0->f_10[9 /*57*/].f_19 = 0;
		uParam0->f_10[9 /*57*/].f_20 = 0;
		uParam0->f_10[9 /*57*/].f_21 = 45f;
		uParam0->f_10[9 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_27 = 0;
		uParam0->f_10[9 /*57*/].f_50 = 0;
		uParam0->f_10[9 /*57*/].f_51 = 0f;
		uParam0->f_10[9 /*57*/].f_52 = 0f;
		uParam0->f_10[9 /*57*/].f_22 = 0.3f;
		uParam0->f_10[9 /*57*/].f_53 = 2;
		uParam0->f_10[9 /*57*/].f_23 = 0.2f;
		uParam0->f_10[9 /*57*/].f_28 = 0;
		uParam0->f_10[9 /*57*/].f_29 = 0f;
		uParam0->f_10[9 /*57*/].f_32 = 0f;
		uParam0->f_10[9 /*57*/].f_30 = 0;
		uParam0->f_10[9 /*57*/].f_31 = 0;
		uParam0->f_10[9 /*57*/].f_33 = 1f;
		uParam0->f_10[9 /*57*/].f_34 = 0;
		uParam0->f_10[9 /*57*/].f_35 = 0f;
		uParam0->f_10[9 /*57*/].f_36 = 0;
		uParam0->f_10[9 /*57*/].f_37 = 0;
		uParam0->f_10[9 /*57*/].f_39 = 0f;
		uParam0->f_10[9 /*57*/].f_40 = 0f;
		uParam0->f_10[9 /*57*/].f_41 = 0;
		uParam0->f_10[9 /*57*/].f_42 = 0;
		uParam0->f_10[9 /*57*/].f_43 = 0;
		uParam0->f_10[9 /*57*/].f_38 = 0f;
		uParam0->f_10[9 /*57*/].f_45 = 0;
		uParam0->f_10[9 /*57*/].f_46 = 0;
		uParam0->f_10[9 /*57*/].f_47 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[10 /*57*/].f_2 = 3;
		uParam0->f_10[10 /*57*/].f_3 = -1;
		uParam0->f_10[10 /*57*/].f_4 = 0;
		uParam0->f_10[10 /*57*/].f_5 = 2000;
		uParam0->f_10[10 /*57*/].f_6 = { 1976.082f, 3820.484f, 34.051f };
		uParam0->f_10[10 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_12 = 0f;
		uParam0->f_10[10 /*57*/].f_16 = 0f;
		uParam0->f_10[10 /*57*/].f_17 = 0;
		uParam0->f_10[10 /*57*/].f_9 = { -4.9828f, 0.0878f, 87.4019f };
		uParam0->f_10[10 /*57*/].f_18 = 0;
		uParam0->f_10[10 /*57*/].f_19 = 0;
		uParam0->f_10[10 /*57*/].f_20 = 0;
		uParam0->f_10[10 /*57*/].f_21 = 45f;
		uParam0->f_10[10 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_27 = 0;
		uParam0->f_10[10 /*57*/].f_50 = 0;
		uParam0->f_10[10 /*57*/].f_51 = 0f;
		uParam0->f_10[10 /*57*/].f_52 = 0f;
		uParam0->f_10[10 /*57*/].f_22 = 0f;
		uParam0->f_10[10 /*57*/].f_53 = 2;
		uParam0->f_10[10 /*57*/].f_23 = 0.2f;
		uParam0->f_10[10 /*57*/].f_28 = 0;
		uParam0->f_10[10 /*57*/].f_29 = 0f;
		uParam0->f_10[10 /*57*/].f_32 = 0f;
		uParam0->f_10[10 /*57*/].f_30 = 0;
		uParam0->f_10[10 /*57*/].f_31 = 0;
		uParam0->f_10[10 /*57*/].f_33 = 1f;
		uParam0->f_10[10 /*57*/].f_34 = 0;
		uParam0->f_10[10 /*57*/].f_35 = 0f;
		uParam0->f_10[10 /*57*/].f_36 = 0;
		uParam0->f_10[10 /*57*/].f_37 = 0;
		uParam0->f_10[10 /*57*/].f_39 = 0f;
		uParam0->f_10[10 /*57*/].f_40 = 0f;
		uParam0->f_10[10 /*57*/].f_41 = 0;
		uParam0->f_10[10 /*57*/].f_42 = 0;
		uParam0->f_10[10 /*57*/].f_43 = 0;
		uParam0->f_10[10 /*57*/].f_38 = 0f;
		uParam0->f_10[10 /*57*/].f_45 = 0;
		uParam0->f_10[10 /*57*/].f_46 = 0;
		uParam0->f_10[10 /*57*/].f_47 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 11;
		uParam0->f_1218 = 6;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile1_FranklinToMichael.txt";
		uParam0->f_1225 = "CameraInfo_Exile1_FranklinToMichael.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}


void func_871()//Position - 0x7B3EE
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_432[1]))
	{
		PED::DELETE_PED(&(uLocal_432[1]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_101(1));
	PED::ADD_RELATIONSHIP_GROUP("Enemy Group", &iLocal_982);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_982);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_982, 1862763509);
	STREAMING::SET_STREAMING(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_199())
		{
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED() && !bLocal_609)
			{
				func_171(0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
			}
			else
			{
				func_810();
				SYSTEM::WAIT(0);
				func_171(0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1);
			}
		}
		else if (func_873())
		{
		}
		else
		{
			iVar0 = GlobalFunc_198();
			if (iVar0 == 0)
			{
				func_171(0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1);
			}
			else
			{
				func_171(iVar0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			}
		}
		if (!bLocal_607)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	iLocal_60 = 6;
}


int func_873()//Position - 0x7B522
{
	int iVar0;
	
	if (GlobalFunc_199())
	{
		if (Global_84544 == 1)
		{
			switch (GlobalFunc_198())
			{
				case 0:
					iVar0 = 1;
					break;
				
				case 1:
					iVar0 = 2;
					break;
				
				case 2:
					iVar0 = 3;
					break;
				
				case 3:
					iVar0 = 4;
					break;
				
				case 4:
					iVar0 = 4;
					bLocal_607 = true;
					break;
				
				case 5:
					iVar0 = 6;
					break;
				
				case 6:
					iVar0 = 7;
					break;
				
				case 7:
					iVar0 = 7;
					bLocal_607 = true;
					break;
			}
			func_754();
			func_171(iVar0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1);
			if (!bLocal_607)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
		}
	}
	return 0;
}




void func_877(int iParam0)//Position - 0x7B60B
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_101(8), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_101(12), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_101(10), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_101(9), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_101(11), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_101(7), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_101(5), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_101(2), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cuban800"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("stunt"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("titan"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("jet"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("shamal"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("luxor"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mammatus"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("velum"), iParam0);
}


void func_879(int iParam0)//Position - 0x7B6EC
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1902.742f, 4689.527f, 0f, 2188.947f, 4834.079f, 100.6961f, iParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1003.4f, 2968.3f, -10f, 1778f, 3357.1f, 150f, iParam0, 1);
}

void func_880()//Position - 0x7B73A
{
	int iVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("EXL1_MISSION_FAILED");
	func_251();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	GlobalFunc_7206(1, 1, 1, 0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	AUDIO::_0x58BB377BEC7CD5F4(0, 0);
	GlobalFunc_619(0);
	HUD::_SET_MINIMAP_ALTITUDE_INDICATOR_LEVEL(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_68[0 /*3*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_68[0 /*3*/]))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68[0 /*3*/], 0);
		}
	}
	GRAPHICS::_0x02369D5C8A51FDCF(0);
	GlobalFunc_4956();
	TASK::REMOVE_COVER_POINT(uLocal_547);
	TASK::REMOVE_COVER_POINT(uLocal_548);
	TASK::REMOVE_COVER_POINT(uLocal_549);
	STREAMING::SET_STREAMING(1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1149))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1149);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1150))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1150);
	}
	HUD::CLEAR_GPS_FLAGS();
	MISC::SET_WIND(-1f);
	MISC::SET_WIND_DIRECTION(-1f);
	PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1163))
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_1163))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_1163);
		}
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	if (iLocal_935 >= 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), iLocal_935);
	}
	PAD::SET_PAD_SHAKE(0, 0, 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_524[1], 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_524[1], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_524[1], 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_524[2]))
	{
		VEHICLE::_REMOVE_VEHICLE_SHADOW_EFFECT(iLocal_524[2]);
		if (iLocal_62 == 5 || (iLocal_62 == 7 && !bLocal_714))
		{
			if (iLocal_764)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_524[2]));
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_524[2]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_524[2]);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_524[2], 1);
				VEHICLE::_0x1CF38D529D7441D9(iLocal_524[2], 1);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iLocal_965[iVar0])
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_948[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_948[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 215, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 216, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 217, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 221, 0);
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
		}
	}
	func_881();
	CUTSCENE::REMOVE_CUTSCENE();
	func_879(1);
	GlobalFunc_2224(0);
	func_877(0);
	if (!PED::IS_PED_INJURED(iLocal_516))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_516);
	}
	if (iLocal_606)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_516))
		{
			PED::DELETE_PED(&iLocal_516);
		}
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_937))
	{
		AUDIO::STOP_SOUND(iLocal_937);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_938))
	{
		AUDIO::STOP_SOUND(iLocal_938);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_939))
	{
		AUDIO::STOP_SOUND(iLocal_939);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_940))
	{
		AUDIO::STOP_SOUND(iLocal_940);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_937);
	AUDIO::RELEASE_SOUND_ID(iLocal_938);
	AUDIO::RELEASE_SOUND_ID(iLocal_939);
	AUDIO::RELEASE_SOUND_ID(iLocal_940);
	iVar0 = 0;
	while (iVar0 < Local_224)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_224[iVar0 /*14*/].f_12))
		{
			AUDIO::STOP_SOUND(Local_224[iVar0 /*14*/].f_12);
		}
		AUDIO::RELEASE_SOUND_ID(Local_224[iVar0 /*14*/].f_12);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(func_685(iVar0));
		iVar0++;
	}
	AUDIO::STOP_STREAM();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_881()//Position - 0x7BAA9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	}
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_7632(0);
	GlobalFunc_4948(&Local_27, 0, 0);
	func_159(3);
	func_159(11);
	func_159(19);
	iLocal_815 = 0;
	iLocal_820 = 0;
}



void func_884()//Position - 0x7BBC4
{
	GlobalFunc_5671(2, 0);
	GlobalFunc_5129(-822.2574f, 177.2771f, 70.32091f, 107.4f);
}


