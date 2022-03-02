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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	int iLocal_52[3] = { 0, 0, 0 };
	int iLocal_56[3] = { 0, 0, 0 };
	var uLocal_60 = 2;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<16> Local_63[3];
	struct<22> Local_112[3];
	struct<22> Local_179[3];
	struct<3> Local_246[2];
	struct<3> Local_253[2];
	float fLocal_260[2] = { 0f, 0f };
	struct<7> Local_263[8];
	struct<7> Local_320[8];
	struct<3> Local_377[8];
	int iLocal_402[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_411[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_420[8];
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	float fLocal_462 = 0f;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	bool bLocal_471 = 0;
	struct<3> Local_472 = { 0, 0, 0 } ;
	struct<3> Local_475 = { 0, 0, 0 } ;
	struct<3> Local_478 = { 0, 0, 0 } ;
	struct<3> Local_481 = { 0, 0, 0 } ;
	struct<3> Local_484 = { 0, 0, 0 } ;
	struct<3> Local_487 = { 0, 0, 0 } ;
	struct<3> Local_490 = { 0, 0, 0 } ;
	struct<3> Local_493 = { 0, 0, 0 } ;
	struct<3> Local_496 = { 0, 0, 0 } ;
	struct<3> Local_499 = { 0, 0, 0 } ;
	struct<3> Local_502 = { 0, 0, 0 } ;
	struct<3> Local_505 = { 0, 0, 0 } ;
	struct<3> Local_508 = { 0, 0, 0 } ;
	struct<3> Local_511 = { 0, 0, 0 } ;
	struct<3> Local_514 = { 0, 0, 0 } ;
	struct<3> Local_517 = { 0, 0, 0 } ;
	struct<3> Local_520 = { 0, 0, 0 } ;
	struct<3> Local_523 = { 0, 0, 0 } ;
	struct<3> Local_526 = { 0, 0, 0 } ;
	struct<3> Local_529 = { 0, 0, 0 } ;
	struct<3> Local_532 = { 0, 0, 0 } ;
	float fLocal_535 = 0f;
	float fLocal_536 = 0f;
	struct<3> Local_537 = { 0, 0, 0 } ;
	struct<3> Local_540 = { 0, 0, 0 } ;
	struct<3> Local_543 = { 0, 0, 0 } ;
	struct<3> Local_546 = { 0, 0, 0 } ;
	float fLocal_549 = 0f;
	float fLocal_550 = 0f;
	struct<3> Local_551 = { 0, 0, 0 } ;
	struct<3> Local_554 = { 0, 0, 0 } ;
	struct<3> Local_557 = { 0, 0, 0 } ;
	struct<3> Local_560 = { 0, 0, 0 } ;
	float fLocal_563 = 0f;
	float fLocal_564 = 0f;
	struct<3> Local_565 = { 0, 0, 0 } ;
	struct<3> Local_568 = { 0, 0, 0 } ;
	struct<3> Local_571 = { 0, 0, 0 } ;
	struct<3> Local_574 = { 0, 0, 0 } ;
	struct<3> Local_577 = { 0, 0, 0 } ;
	struct<3> Local_580 = { 0, 0, 0 } ;
	struct<2> Local_583 = { 0, 0 } ;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	struct<2> Local_587 = { 0, 0 } ;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	var uLocal_594 = 0;
	struct<14> Local_595 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	struct<14> Local_611 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	struct<15> Local_627 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_642 = 0;
	struct<8> Local_643 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	struct<7> Local_659 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_666 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	struct<6> Local_677 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	struct<3> Local_688 = { 0, 0, 0 } ;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	struct<3> Local_699 = { 0, 0, 0 } ;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	struct<3> Local_710 = { 0, 0, 0 } ;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	struct<6> Local_721 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	struct<6> Local_732 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	int iLocal_743 = 0;
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
	struct<6> Local_754 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	struct<3> Local_765 = { 0, 0, 0 } ;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	struct<3> Local_776 = { 0, 0, 0 } ;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	struct<57> Local_787 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_844 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 3;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = -1;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 1000;
	var uLocal_879 = 1000;
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
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	var uLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	bool bLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	struct<3> Local_912 = { 0, 0, 0 } ;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	float fLocal_923 = 0f;
	float fLocal_924 = 0f;
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
	var uLocal_936 = 16;
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
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	int iLocal_1104 = 0;
	struct<6> Local_1105 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_1111 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	int iLocal_1120 = 0;
	int iLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	int iLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	struct<11> Local_1128 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0 } ;
	var uLocal_1139 = 0;
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	var uLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	int iLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	int iLocal_1163 = 0;
	int iLocal_1164 = 0;
	int iLocal_1165 = 0;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
	int iLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	int iLocal_1176 = 0;
	float fLocal_1177 = 0f;
	float fLocal_1178 = 0f;
	float fLocal_1179 = 0f;
	float fLocal_1180 = 0f;
	int iLocal_1181 = 0;
	int iLocal_1182 = 0;
	int iLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	int iLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1220 = 0;
	int iLocal_1221[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1235 = 10;
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
	var uLocal_1246 = 8;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	struct<7> Local_1255[1];
	struct<11> Local_1263[3];
	struct<3> Local_1297[6];
	struct<5> Local_1316 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_30 = 1;
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_47 = 0.5f;
	fLocal_48 = 0.88f;
	fLocal_49 = 0.609375f;
	fLocal_50 = 0.266666f;
	fLocal_51 = 1.2f;
	Local_472 = { 0f, 7f, 0.3f };
	Local_475 = { -3f, 6f, 0.2f };
	Local_478 = { -3f, 2f, 0.2f };
	Local_481 = { -3f, -2f, 0.2f };
	Local_484 = { -1.27f, 1.95f, 4.9f };
	Local_487 = { -789.529f, 187.843f, 72.835f };
	Local_490 = { 0f, 0f, 130f };
	Local_493 = { -789.529f, 187.843f, 72.84f };
	Local_496 = { 0f, 0f, 145f };
	Local_499 = { -789.229f, 187.843f, 72.85f };
	Local_502 = { 0f, 0f, 123.12f };
	Local_505 = { -788.83f, 185.793f, 72.855f };
	Local_508 = { 0f, 0f, 31.68f };
	Local_511 = { -788.83f, 185.793f, 72.84f };
	Local_514 = { 0f, 0f, 31.68f };
	Local_517 = { -788.979f, 185.743f, 72.86f };
	Local_520 = { 0f, 0f, 30f };
	Local_523 = { -782.8024f, 187.4389f, 73.32661f };
	Local_526 = { -786.7066f, 187.1463f, 72.72379f };
	Local_529 = { -3.540541f, 0f, 99.79994f };
	Local_532 = { 1.793574f, -0.025068f, 101.1528f };
	fLocal_535 = 39.3555f;
	fLocal_536 = 39.3555f;
	Local_537 = { -786.2944f, 187.577f, 72.84982f };
	Local_540 = { -786.6465f, 187.7178f, 72.84367f };
	Local_543 = { -1.207426f, 0.002569f, 105.2662f };
	Local_546 = { -1.207426f, 0.002569f, 108.2846f };
	fLocal_549 = 39.3555f;
	fLocal_550 = 39.3555f;
	Local_551 = { -786.2371f, 187.437f, 73.0122f };
	Local_554 = { -786.6021f, 187.2241f, 73.01046f };
	Local_557 = { -0.244137f, -0.022206f, 103.0853f };
	Local_560 = { -0.244137f, -0.022206f, 101.2779f };
	fLocal_563 = 39.3555f;
	fLocal_564 = 39.3555f;
	Local_565 = { 0f, 150f, 50f };
	Local_568 = { 0f, 0f, 0f };
	Local_571 = { -819.68f, 175.87f, 70.61f };
	Local_574 = { -806.04f, 173.59f, 75.74f };
	Local_577 = { -801.42f, 182.86f, 71.61f };
	Local_580 = { -1175.32f, -897.03f, 14.05f };
	StringCopy(&Local_583, "FAM5_GT4", 16);
	StringCopy(&Local_587, "CMN_GENGETINY", 16);
	iLocal_1148 = -1;
	iLocal_1149 = -1;
	iLocal_1150 = -1;
	iLocal_1151 = -1;
	iLocal_1152 = -1;
	iLocal_1153 = -1;
	fLocal_1177 = 1f;
	fLocal_1178 = 1f;
	fLocal_1179 = 1f;
	fLocal_1180 = 0.001f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_779(3);
		func_776();
		func_770(86, 1, 1, 1, 0);
		if ((Global_32360[117] == 1 || Global_32360[118] == 1) || Global_32360[170] == 1)
		{
			func_770(117, 0, 1, 1, 0);
			func_770(118, 0, 1, 1, 0);
			func_770(120, 0, 1, 1, 0);
			func_770(170, 0, 1, 1, 0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_199())
	{
		func_765(&iLocal_592, GlobalFunc_198());
		iLocal_905 = 1;
		if (Global_84544 == 1)
		{
			iLocal_592 = func_764(iLocal_592);
		}
	}
	else
	{
		GlobalFunc_11046(0, "YOGA - WARRIOR", 0, 0, 0, 1);
	}
	if (GlobalFunc_2(0))
	{
		if (!GlobalFunc_199())
		{
			iLocal_592 = 2;
			iLocal_905 = 1;
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
		}
	}
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Yoga");
	bLocal_471 = false;
	while (true)
	{
		if (iLocal_906 == 1)
		{
			func_720(&iLocal_592, &iLocal_593);
			func_719(Local_912, 50f);
		}
		func_718(&uLocal_594);
		func_717();
		if (iLocal_1166 == 1)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
		}
		RECORDING::_0x208784099002BC30("M_DidSomebodySayYoga", 0);
		switch (iLocal_592)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_669(&iLocal_903))
					{
						func_668();
						iLocal_592 = 1;
					}
				}
				break;
			
			case 1:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_642(&iLocal_903))
					{
						func_668();
						iLocal_592 = 2;
					}
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_600(&iLocal_903))
					{
						func_668();
						iLocal_592 = 3;
					}
				}
				break;
			
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					CLOCK::SET_CLOCK_TIME(iLocal_1168, iLocal_1169, iLocal_1170);
					if (func_599(&iLocal_903))
					{
						func_668();
						iLocal_592 = 4;
					}
				}
				break;
			
			case 4:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_598(&iLocal_903))
					{
						func_668();
						iLocal_592 = 5;
					}
				}
				break;
			
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					CLOCK::SET_CLOCK_TIME(iLocal_1168, iLocal_1169, iLocal_1170);
					if (func_597(&iLocal_903))
					{
						func_668();
						iLocal_592 = 6;
					}
				}
				break;
			
			case 6:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_596(&iLocal_903))
					{
						func_668();
						iLocal_592 = 7;
					}
				}
				break;
			
			case 7:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					CLOCK::SET_CLOCK_TIME(iLocal_1168, iLocal_1169, iLocal_1170);
					if (func_549(&iLocal_903))
					{
						func_668();
						PAD::_RESET_INPUT_MAPPING_SCHEME();
						iLocal_592 = 8;
					}
				}
				break;
			
			case 8:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_546(&iLocal_903))
					{
						func_668();
						iLocal_592 = 9;
					}
				}
				break;
			
			case 9:
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_537(&iLocal_903))
					{
						func_668();
						iLocal_592 = 10;
					}
				}
				break;
			
			case 10:
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_529(&iLocal_903))
					{
						func_668();
						iLocal_592 = 11;
					}
				}
				break;
			
			case 11:
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_512(&iLocal_903))
					{
						func_668();
						iLocal_592 = 12;
					}
				}
				break;
			
			case 12:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_497(&iLocal_903))
					{
						func_668();
						iLocal_592 = 13;
					}
				}
				break;
			
			case 13:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_463(&iLocal_903))
					{
						func_668();
						iLocal_592 = 14;
					}
				}
				break;
			
			case 14:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_462(&iLocal_903))
					{
						func_668();
						iLocal_592 = 15;
					}
				}
				break;
			
			case 15:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_455(&iLocal_903))
					{
						func_668();
						iLocal_592 = 16;
					}
				}
				break;
			
			case 16:
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_364(&iLocal_903))
					{
						func_668();
						iLocal_592 = 17;
					}
				}
				break;
			
			case 17:
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_311(&iLocal_903))
					{
						func_668();
						if (!GlobalFunc_2(0))
						{
							iLocal_592 = 18;
						}
						else
						{
							iLocal_592 = 19;
						}
					}
				}
				break;
			
			case 18:
				if (func_670(iLocal_592, &iLocal_902, &iLocal_906, &uLocal_904, &iLocal_905))
				{
					if (func_293(&iLocal_903))
					{
						func_668();
						iLocal_592 = 19;
					}
				}
				break;
			
			case 19:
				GlobalFunc_5103(0, 0);
				func_776();
				func_770(86, 1, 0, 1, 0);
				if ((Global_32360[117] == 0 || Global_32360[118] == 0) || Global_32360[170] == 0)
				{
					func_770(117, 1, 0, 1, 0);
					func_770(118, 1, 0, 1, 0);
					func_770(120, 1, 0, 1, 0);
					func_770(170, 1, 0, 1, 0);
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 20:
				func_280(&iLocal_593);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				func_779(3);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS");
				while (!GlobalFunc_145())
				{
					SYSTEM::WAIT(0);
				}
				if (iLocal_593 == 1)
				{
					GlobalFunc_5129(-791.1766f, 185.8434f, 71.8349f, 188.7433f);
				}
				if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(3);
				}
				func_776();
				func_770(86, 1, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
				if ((Global_32360[117] == 1 || Global_32360[118] == 1) || Global_32360[170] == 1)
				{
					func_770(117, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
					func_770(118, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
					func_770(120, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
					func_770(170, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0xA5F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				func_272();
				break;
			
			case 1:
				GlobalFunc_11317(PLAYER::PLAYER_PED_ID());
				break;
			
			case 2:
				func_264(PLAYER::PLAYER_PED_ID(), 0);
				break;
			
			case 3:
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
			
			case 4:
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 52, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
			
			case 5:
				GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 27, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
		}
		GlobalFunc_11316(PLAYER::PLAYER_PED_ID(), 1);
	}
}







































































































































































































































































void func_264(int iParam0, int iParam1)//Position - 0x4887F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			switch (iParam1)
			{
				case 0:
					GlobalFunc_11257(iParam0, 12, 7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					break;
				
				case 1:
					break;
				
				case 2:
					break;
				}
			}
	}
}








void func_272()//Position - 0x49187
{
	GlobalFunc_2000(&Global_91351);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_11304(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
	}
}








void func_280(var uParam0)//Position - 0x49628
{
	switch (*uParam0)
	{
		case 1:
			GlobalFunc_10835("FAM5_F_Y1");
			break;
		
		case 2:
			GlobalFunc_10835("CMN_GENSTCK");
			break;
		
		case 3:
			GlobalFunc_10835("CMN_MDEST");
			break;
		
		case 4:
			GlobalFunc_10835("FAM5_F_CLB");
			break;
		
		case 5:
			GlobalFunc_10835("CMN_ADIED");
			break;
		
		case 6:
			GlobalFunc_10835("FAM5_F_B1");
			break;
		
		case 7:
			GlobalFunc_10835("CMN_JDIED");
			break;
		
		case 8:
			GlobalFunc_10835("CMN_JLEFT");
			break;
		
		case 9:
			GlobalFunc_10835("FAM5_F_E0");
			break;
		
		case 10:
			GlobalFunc_10835("FAM5_F_E1");
			break;
		
		case 11:
			GlobalFunc_10835("FAM5_F_E2");
			break;
		
		case 0:
		case 12:
			GlobalFunc_10835("FAM5_FAIL");
			break;
	}
}













int func_293(int iParam0)//Position - 0x4A684
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_1(5);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
				GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_1316.f_1, Local_1316.f_4, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			*iParam0++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_5927("family_5_mcs_5_p5", 1) && Global_68505 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA(Local_1316.f_1, 25f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_1316.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_1316.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1316.f_1, 25f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_1316.f_1, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_1316.f_1, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 4:
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				GlobalFunc_8380(0, 1, 1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


















int func_311(int iParam0)//Position - 0x4AFDA
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("family_5_mcs_5_p4", 1))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1255[0 /*7*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1255[0 /*7*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1255[0 /*7*/], 0))
								{
									iLocal_1119 = 1;
								}
							}
						}
					}
					GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_677))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_677))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_677, "Amanda_Note", 1, Local_677.f_1, 0);
					}
				}
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME_INT");
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_1119 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1255[0 /*7*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_1255[0 /*7*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_1255[0 /*7*/], -824.9539f, 174.8554f, 69.8377f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(Local_1255[0 /*7*/], 157.3586f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1255[0 /*7*/]);
						}
					}
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_577, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f || ENTITY::IS_ENTITY_AT_COORD(iVar0, -826.78f, 177.64f, 72.13f, 12f, 12f, 8f, 0, 1, 0))
						{
							if (!GlobalFunc_4929(iVar0, 0, 1))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
								}
								GlobalFunc_2882(iVar0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -825.8718f, 157.3143f, 69.4619f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, 90f);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
								GlobalFunc_10236(iVar0, -825.8718f, 157.3143f, 69.4619f, 90f, 24, 0);
							}
						}
					}
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_1316.f_1, 25f, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_1316.f_1, 25f);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1316.f_1, 25f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_1316.f_1, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_1316.f_1, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				GlobalFunc_8380(0, 1, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				*iParam0++;
			}
			break;
		
		case 3:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			GlobalFunc_45(1, 1);
			*iParam0++;
			break;
		
		case 4:
			if (Global_68505 == 1)
			{
				*iParam0++;
			}
			break;
		
		case 5:
			if (!GlobalFunc_2(0))
			{
				return 1;
			}
			else if (Global_68505 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}





















































int func_364(int iParam0)//Position - 0x4E77D
{
	float fVar0;
	
	MISC::SET_BIT(&(Local_844.f_13), 20);
	func_454();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && GlobalFunc_1361(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
	{
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), 0);
		PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 281, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 62, 1);
	}
	else
	{
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), 1);
	}
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_1316.f_1, Local_1316.f_4, 0, 1, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 125, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			GlobalFunc_9132(0);
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			*iParam0++;
			break;
		
		case 1:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0);
				iLocal_1174 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_1174))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("missfam5_blackout");
			STREAMING::REQUEST_ANIM_DICT("move_m@drunk@verydrunk");
			func_445(5);
			if ((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("missfam5_blackout")) && STREAMING::HAS_ANIM_DICT_LOADED("move_m@drunk@verydrunk"))
			{
				*iParam0++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1148))
				{
					iLocal_1148 = PED::CREATE_SYNCHRONIZED_SCENE(-966.935f, 309.252f, 69.35f, 0f, 0f, -90f, 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1148, "missfam5_blackout", "vomit", 1000f, -2f, 0, 0, 1148846080, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					CAM::DESTROY_ALL_CAMS(0);
					uLocal_1122 = CAM::CREATE_CAMERA(964613260, 1);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1122, iLocal_1148, "vomit_cam", "missfam5_blackout");
					HUD::DISPLAY_HUD(0);
					HUD::DISPLAY_RADAR(0);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					GlobalFunc_5471(PLAYER::PLAYER_PED_ID(), 50000, 0);
					func_779(3);
					AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_YOGA_ON_DRUGS");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
					GRAPHICS::ANIMPOSTFX_STOP("DMT_flight");
					GRAPHICS::ANIMPOSTFX_PLAY("DrugsDrivingOut", 0, 0);
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1148))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_1123))
					{
						CAM::DESTROY_CAM(uLocal_1123, 0);
					}
					fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1148);
					if (fVar0 < 0.95f)
					{
						if (fVar0 > 0.53f && fVar0 < 0.635f)
						{
							if (iLocal_935 == 0)
							{
								func_441(5);
								iLocal_935 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_trev_puke", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
							}
						}
						else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_935))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_935, 0);
							iLocal_935 = 0;
						}
						if (iLocal_1188 == 0)
						{
							if (fVar0 > 0.925f)
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
									iLocal_1188 = 1;
								}
							}
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						STREAMING::REMOVE_ANIM_DICT("missfam5_blackout");
						*iParam0++;
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_1125 == 1)
			{
				SYSTEM::WAIT(500);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_440(3);
			func_440(5);
			STREAMING::REMOVE_PTFX_ASSET();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				CAM::SET_CAM_ACTIVE(uLocal_1122, 0);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				}
				CAM::DESTROY_CAM(uLocal_1122, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GlobalFunc_574(247, 0);
			*iParam0++;
			break;
		
		case 6:
			if (!func_438("FAM5_PUKE"))
			{
				if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_PUKE", 7, 0, 0, 0))
				{
					func_426("FAM5_PUKE", 1);
				}
			}
			if (CAM::_0x3044240D2E0FA842())
			{
				PAD::DISABLE_CONTROL_ACTION(1, 26, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 79, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
			}
			func_424(PLAYER::PLAYER_PED_ID(), &iLocal_1165);
			func_379(&Local_844, Local_577, 0.25f, 0.25f, 2f, 1, &Local_583, 1, 1, -1);
			if (GlobalFunc_331() || GlobalFunc_2233())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5_p4") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_577, 1) < (100f / 2f))
			{
				CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_5_p4", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_677))
				{
					if (func_376(&Local_677, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_677, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_677, 1);
					}
				}
			}
			else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5_p4") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_WAKE_UP_VOMIT"))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
					}
				}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME"))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_HOME");
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME"))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_577, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME");
					}
				}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME_INT"))
			{
				if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.5041f, -804.6584f, 179.532f, 78.74073f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.3972f, 179.2023f, 75.24073f, -809.9282f, 175.5625f, 78.74073f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.6328f, 74.65309f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.0684f, 75.24073f, -799.84f, 168.9565f, 78.74073f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.0944f, 180.6147f, 75.24073f, -816.7233f, 177.8068f, 78.86246f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.8663f, 175.5f, 75.24073f, -814.8033f, 173.923f, 78.74073f, 3.6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7128f, 167.798f, 75.24073f, -805.5717f, 175.1913f, 78.74073f, 3f, 0, 1, 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_HOME_INT");
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME_INT"))
			{
				if (((((((((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.5041f, -804.6584f, 179.532f, 78.74073f, 2.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.3972f, 179.2023f, 75.24073f, -809.9282f, 175.5625f, 78.74073f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.6328f, 74.65309f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.0684f, 75.24073f, -799.84f, 168.9565f, 78.74073f, 3.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.0944f, 180.6147f, 75.24073f, -816.7233f, 177.8068f, 78.86246f, 8f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.8663f, 175.5f, 75.24073f, -814.8033f, 173.923f, 78.74073f, 3.6f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7128f, 167.798f, 75.24073f, -805.5717f, 175.1913f, 78.74073f, 3f, 0, 1, 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME_INT");
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -801.42f, 182.86f, 73.1f, 2.25f, 2.25f, 2.25f, 0, 1, 0))
					{
						GlobalFunc_4935();
						GlobalFunc_5105();
						GlobalFunc_7139(&Local_844, 0);
						GlobalFunc_571(0, -1);
						iLocal_1157 = 1;
						*iParam0++;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -800.8f, 183.71f, 73.5f, 1.5f, 1.25f, 2f, 0, 1, 0))
				{
					GlobalFunc_4935();
					GlobalFunc_5105();
					GlobalFunc_7139(&Local_844, 0);
					GlobalFunc_571(0, -1);
					iLocal_1157 = 1;
					*iParam0++;
				}
			}
			break;
		
		case 7:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2f, 1, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		
		case 8:
			if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
					GlobalFunc_5105();
				}
				if (SYSTEM::TIMERA() > 5000 || !GlobalFunc_111())
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
					return 1;
				}
			}
			break;
	}
	return 0;
}












int func_376(int iParam0, int iParam1)//Position - 0x4F996
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_1, iParam0->f_2, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_5, 2, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, iParam1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}



int func_379(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, char* sParam8, bool bParam9, bool bParam10, int iParam11)//Position - 0x4FA34
{
	return GlobalFunc_8568(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 1, 0, 0, 0, 0, sParam8, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 0, bParam9, GlobalFunc_648(), 0, 0, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}













































void func_424(int iParam0, int iParam1)//Position - 0x52396
{
	int iVar0[16];
	int iVar17;
	struct<3> Var18;
	
	iVar17 = 0;
	if (*iParam1 == 0)
	{
		*iParam1 = MISC::GET_GAME_TIMER();
	}
	else if (GlobalFunc_2521(15000, *iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, 28);
			iVar17 = 0;
			while (iVar17 <= (iVar0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
				{
					if (!PED::IS_PED_INJURED(iVar0[iVar17]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0[iVar17], 0))
						{
							if (GlobalFunc_156(iVar0[iVar17], iParam0, 1) < 7.5f)
							{
								Var18 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0[iVar17], ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
								if (Var18.f_1 > 1f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0[iVar17]))
									{
										GlobalFunc_5122(iVar0[iVar17], "SEE_WEIRDO", 3);
										TASK::TASK_LOOK_AT_ENTITY(iVar0[iVar17], iParam0, 1000, 0, 2);
										*iParam1 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				iVar17++;
			}
		}
	}
}


void func_426(char* sParam0, bool bParam1)//Position - 0x524DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_438(sParam0))
		{
			iVar1 = iLocal_1189;
			if (iLocal_1220 < iVar1)
			{
				iLocal_1189[iLocal_1220] = iVar0;
				iLocal_1220++;
			}
		}
	}
	else
	{
		iVar2 = func_428(iVar0);
		if (iVar2 != -1)
		{
			iLocal_1189[iVar2] = 0;
			func_427();
			iLocal_1220 = (iLocal_1220 - 1);
		}
	}
}

void func_427()//Position - 0x52542
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1189;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_1189[iVar1] == 0)
		{
			if (iLocal_1189[iVar1 + 1] != 0)
			{
				iLocal_1189[iVar1] = iLocal_1189[iVar1 + 1];
				iLocal_1189[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_428(int iParam0)//Position - 0x52599
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1220)
	{
		if (iLocal_1189[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}










int func_438(char* sParam0)//Position - 0x52BCC
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_428(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}


void func_440(int iParam0)//Position - 0x52C35
{
	switch (iParam0)
	{
		case 1:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_YOGA_ALIENS");
			break;
		
		case 2:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_YOGA_CHIMPS");
			break;
		
		case 4:
		case 3:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_YOGA_DRUGS_01");
			break;
		
		case 5:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TAXI_VOMIT");
			break;
		
		case 6:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_WASH_FACE");
			break;
	}
}

void func_441(int iParam0)//Position - 0x52CA4
{
	switch (iParam0)
	{
		case 2:
			if (Local_1297[1 /*3*/].f_2 == 0)
			{
				if (Local_1297[1 /*3*/].f_1 == -1)
				{
					Local_1297[1 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FRONTEND(Local_1297[1 /*3*/].f_1, Local_1297[1 /*3*/], "FAMILY_5_SOUNDS", 1);
				Local_1297[1 /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_1297[0 /*3*/].f_2 == 0)
			{
				if (Local_1297[0 /*3*/].f_1 == -1)
				{
					Local_1297[0 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FRONTEND(Local_1297[0 /*3*/].f_1, Local_1297[0 /*3*/], "FAMILY_5_SOUNDS", 1);
				Local_1297[0 /*3*/].f_2 = 1;
			}
			break;
		
		case 3:
			if (Local_1297[2 /*3*/].f_2 == 0)
			{
				if (Local_1297[2 /*3*/].f_1 == -1)
				{
					Local_1297[2 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FRONTEND(Local_1297[2 /*3*/].f_1, Local_1297[2 /*3*/], "FAMILY_5_SOUNDS", 1);
				Local_1297[2 /*3*/].f_2 = 1;
			}
			break;
		
		case 4:
			if (Local_1297[3 /*3*/].f_2 == 0)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_1297[3 /*3*/].f_1, Local_1297[3 /*3*/], PLAYER::PLAYER_PED_ID(), "FAMILY_5_SOUNDS", 0, 0);
				Local_1297[3 /*3*/].f_2 = 1;
			}
			break;
		
		case 5:
			if (Local_1297[4 /*3*/].f_2 == 0)
			{
				if (Local_1297[4 /*3*/].f_1 == -1)
				{
					Local_1297[4 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_1297[4 /*3*/].f_1, Local_1297[4 /*3*/], PLAYER::PLAYER_PED_ID(), "FAMILY_5_SOUNDS", 0, 0);
				Local_1297[4 /*3*/].f_2 = 1;
			}
			break;
		
		case 6:
			if (Local_1297[5 /*3*/].f_2 == 0)
			{
				if (Local_1297[5 /*3*/].f_1 == -1)
				{
					Local_1297[5 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_COORD(Local_1297[5 /*3*/].f_1, Local_1297[5 /*3*/], -804.52f, 169.05f, 76.65f, "FAMILY_5_SOUNDS", 0, 0, 0);
				Local_1297[5 /*3*/].f_2 = 1;
			}
			break;
	}
}




void func_445(int iParam0)//Position - 0x52FB6
{
	uLocal_594 = iParam0;
}









void func_454()//Position - 0x53483
{
	if (iLocal_1157 == 0)
	{
		if (!func_438("FAM5_HOME1"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.7468f, 183.2968f, 70.84779f, -816.3809f, 178.6719f, 75.15309f, 5.5f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME1", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME1", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME2"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.3106f, 184.7098f, 69.00281f, -810.9091f, 182.6081f, 75.58835f, 2.4f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME2", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME2", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME3"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.9893f, 183.1671f, 73.50253f, -804.6068f, 179.5737f, 78.74073f, 2.35f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME3", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME3", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME9"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.9456f, 181.7493f, 66.15295f, -801.8423f, 168.5414f, 75.33471f, 7.6f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME9", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME9", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME5"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.7243f, 183.2228f, 71.74468f, -795.5848f, 177.6971f, 74.83471f, 6f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME5", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME5", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME8"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.3972f, 179.2023f, 75.24073f, -809.9282f, 175.5625f, 78.74073f, 4f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME8", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME8", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME6") && !func_438("FAM5_HOME10"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.0944f, 180.6147f, 75.24073f, -816.7233f, 177.8068f, 78.86246f, 5f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME6", 7, 0, 0, 0))
								{
									func_426("FAM5_HOME6", 1);
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME10", 7, 0, 0, 0))
								{
									func_426("FAM5_HOME10", 1);
								}
								break;
							}
						}
					}
				}
		}
		if (!func_438("FAM5_HOME4"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME4", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME4", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME7"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.0684f, 75.24073f, -799.84f, 168.9565f, 78.74073f, 3.5f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME7", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME7", 1);
						}
					}
				}
			}
		}
		if (!func_438("FAM5_HOME11"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -793.242f, 180.6204f, 68.83467f, -775.6157f, 187.1481f, 74.83467f, 24f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -795.8461f, 177.2149f, 74.83504f, -792.3773f, 167.7184f, 69.38876f, 8f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_HOME11", 7, 0, 0, 0))
						{
							func_426("FAM5_HOME11", 1);
						}
					}
				}
			}
		}
	}
}

int func_455(int iParam0)//Position - 0x53990
{
	struct<3> Var0;
	struct<3> Var3;
	
	CLOCK::SET_CLOCK_TIME(22, 0, 0);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_FAMILY5_CAMERA", 0);
	switch (*iParam0)
	{
		case 0:
			STATS::_0x629526ABA383BCAA();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 1, 0, 0, 0, 0);
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::_0x814AF7DCAACC597B(1);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::ANIMPOSTFX_STOP("DMT_flight_intro");
				GRAPHICS::ANIMPOSTFX_PLAY("DMT_flight", 0, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_flying", "falling_to_skydive", 3))
				{
					GlobalFunc_5476(1);
					CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
					GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
					GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), -2100f, 700.325f, 1200f, 128f, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					*iParam0++;
				}
				else
				{
					*iParam0++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1149))
				{
					STREAMING::REQUEST_ANIM_DICT("missfam5_flying");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_flying"))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
						GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), -2100f, 700.325f, 1200f, 128f, 0, 0, 0);
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1149))
						{
							iLocal_1149 = PED::CREATE_SYNCHRONIZED_SCENE(-900f, 100.325f, 800f, 0f, 0f, -139.21f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1149, "missfam5_flying", "falling_to_skydive", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
							CAM::DESTROY_ALL_CAMS(0);
							uLocal_1124 = CAM::CREATE_CAMERA(964613260, 1);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1124, iLocal_1149, "falling_to_skydive_cam", "missfam5_flying");
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						}
						*iParam0++;
					}
				}
				else
				{
					*iParam0++;
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_flying", "falling_to_skydive", 3))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(5f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.35f);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1149))
				{
					CAM::_0x59424BD75174C9B1();
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_FLYING"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_5_FLYING");
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1149) >= 0.715f)
					{
						if (iLocal_1118 == 0)
						{
							if (AUDIO::LOAD_STREAM("FLYING_STREAM", "FAMILY_5_SOUNDS"))
							{
								AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_1186 = 0;
								iLocal_1118 = 1;
							}
						}
					}
					if (iLocal_1147 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1149) >= 0.723f)
						{
							CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
							CAM::SHAKE_GAMEPLAY_CAM("FAMILY5_DRUG_TRIP_SHAKE", 1f);
							CAM::RENDER_SCRIPT_CAMS(false, 1, 3450, 0, 0, 0);
							iLocal_1147 = 1;
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1149) >= 1f)
					{
						TASK::TASK_SKY_DIVE(PLAYER::PLAYER_PED_ID(), 0);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1161760501, 0, 0, 0);
						if (CAM::DOES_CAM_EXIST(uLocal_1123))
						{
							CAM::DESTROY_CAM(uLocal_1123, 0);
						}
						fLocal_1178 = 1f;
						fLocal_1179 = 1f;
						fLocal_1180 = 0.01f;
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM");
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						*iParam0++;
					}
				}
			}
			break;
		
		case 3:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				iLocal_1186 = AUDIO::GET_STREAM_PLAY_TIME();
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_DRUG_FLIGHT_END", 0);
			func_459();
			func_457();
			PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 10f, 0f) };
			Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, -5f) };
			if (((((((iLocal_1186 >= 201000 || !AUDIO::IS_STREAM_PLAYING()) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0f, 0f, 0f, 1) > 8000f) || !func_456(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3f)) || !func_456(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 1f)) || !func_456(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var3, 1f))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "FLYING_STREAM_END_INSTANT", "FAMILY_5_SOUNDS", 1);
				iLocal_1172 = 1;
			}
			if (iLocal_1172 == 1)
			{
				uLocal_1123 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_1123, -967.5765f, 309.46f, 65.55226f, -89.49915f, 0.013776f, 37.20456f, 40f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				*iParam0++;
			}
			break;
		
		case 4:
			if (CAM::DOES_CAM_EXIST(uLocal_1123) && CAM::IS_CAM_RENDERING(uLocal_1123))
			{
				MISC::SET_TIME_SCALE(1f);
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_FLYING");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_DRUG_FLIGHT_END");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM");
				STREAMING::REMOVE_ANIM_DICT("missfam5_flying");
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
				}
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				RECORDING::_0x293220DA1B46CEBC(15f, 0f, 4);
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
				iLocal_1166 = 0;
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::_0x814AF7DCAACC597B(0);
				}
				STATS::_0x98E2BC1CA26287C3();
				return 1;
			}
			break;
	}
	return 0;
}

int func_456(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x53EF9
{
	int iVar0;
	var uVar1;
	var uVar4;
	var uVar7;
	var uVar8;
	
	uVar8 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param3, fParam6, 19, PLAYER::PLAYER_PED_ID(), 4);
	if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar8, &iVar0, &uVar1, &uVar4, &uVar7) != 2)
	{
	}
	if (iVar0 != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_457()//Position - 0x53F3C
{
	GlobalFunc_2917(&fLocal_1178, fLocal_1179, fLocal_1180, 1);
	MISC::SET_TIME_SCALE(fLocal_1178);
	if ((MISC::GET_GAME_TIMER() - iLocal_1187) > 0)
	{
		fLocal_1179 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.75f);
		fLocal_1180 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 0.001f);
		iLocal_1187 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
	}
}


void func_459()//Position - 0x53FFA
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	fVar0 = PAD::GET_CONTROL_NORMAL(0, 149);
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	fVar4 = (0f + ((fLocal_1177 * 30f) * SYSTEM::TIMESTEP()));
	if (fVar0 > 0.5f)
	{
		Local_565.f_2 = (50f + 10f);
	}
	else
	{
		Local_565.f_2 = 50f;
	}
	if (fVar0 < -0.5f)
	{
		if (iLocal_1184 == 0)
		{
			iLocal_1184 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_1183 = (MISC::GET_GAME_TIMER() - iLocal_1184);
		}
	}
	else
	{
		if (iLocal_1181 == 0)
		{
			iLocal_1181 = iLocal_1183;
			iLocal_1182 = MISC::GET_GAME_TIMER();
		}
		iLocal_1183 = 0;
		iLocal_1184 = 0;
	}
	if (iLocal_1181 != 0)
	{
		if (!GlobalFunc_2521(iLocal_1181, iLocal_1182))
		{
			if (fVar0 > 0.5f)
			{
				Local_565.f_1 = 25f;
				Local_565.f_2 = 400f;
			}
		}
		else
		{
			iLocal_1181 = 0;
			iLocal_1182 = 0;
			Local_565.f_1 = 150f;
			Local_565.f_2 = 50f;
		}
	}
	if (Var1.f_2 > 700f)
	{
		Local_565.f_2 = 0f;
	}
	if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, (Local_565.x * fVar4), (Local_565.f_1 * fVar4), (Local_565.f_2 * fVar4), Local_568, 0, 1, 0, 0, 0, 1);
	}
}



int func_462(int iParam0)//Position - 0x54238
{
	CLOCK::SET_CLOCK_TIME(22, 0, 0);
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5476(1);
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_1316.f_1, Local_1316.f_4, 0, 1, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
			*iParam0++;
			break;
		
		case 1:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
				iLocal_1174 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_1174))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_CUSTOM");
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_IPL("SpaceInterior");
			CUTSCENE::REQUEST_CUTSCENE("fam_5_mcs_6", 8);
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_5_mcs_6"))
			{
				GlobalFunc_8380(1, 1, 0, 0);
				GRAPHICS::ANIMPOSTFX_STOP("DMT_flight");
				GRAPHICS::SET_TIMECYCLE_MODIFIER("stoned_monkeys");
				CUTSCENE::START_CUTSCENE(2112);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien", 0, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien", 3, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien", 4, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^1", 0, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^1", 3, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^1", 4, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^2", 0, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^2", 3, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^2", 4, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^3", 0, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^3", 3, 0, 0, joaat("s_m_m_movalien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^3", 4, 0, 0, joaat("s_m_m_movalien_01"));
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(41.1f, -779.8f, 837f, 20f, 0);
				MISC::CLEAR_AREA(Local_1316.f_1, 25f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_1316.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_1316.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1316.f_1, 25f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_1316.f_1, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_1316.f_1, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missfam5_flying");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM", 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				switch (iLocal_1185)
				{
					case 0:
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 30465)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							GRAPHICS::SET_TIMECYCLE_MODIFIER("stoned_aliens");
							iLocal_1185++;
						}
						break;
					
					case 1:
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 48565)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							GRAPHICS::ANIMPOSTFX_PLAY("DMT_flight_intro", 0, 0);
							iLocal_1185++;
						}
						break;
					}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 28500)
				{
					if (!GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 52))
					{
						func_1(4);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
					GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), -2100f, 700.325f, 1200f, 128f, 0, 0, 0);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1149))
					{
						iLocal_1149 = PED::CREATE_SYNCHRONIZED_SCENE(-900f, 100.325f, 800f, 0f, 0f, -139.21f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1149, "missfam5_flying", "falling_to_skydive", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_1124 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1124, iLocal_1149, "falling_to_skydive_cam", "missfam5_flying");
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				STREAMING::REMOVE_IPL("SpaceInterior");
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (iLocal_1125 == 1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM", 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_LONG_SCREAM", "FAMILY_5_SOUNDS", 1);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_8380(0, 1, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			else if (iLocal_1125 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_1125 = 1;
				}
			}
			break;
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x546DD
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	MISC::SET_BIT(&(Local_844.f_13), 20);
	MISC::SET_BIT(&(Local_844.f_13), 9);
	MISC::SET_BIT(&(Local_844.f_13), 3);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	func_486(&(Local_627.f_7), GlobalFunc_1078(bLocal_907, "FAM5_SON7b", "FAM5_SON7"), GlobalFunc_1078(bLocal_907, "FAM5_SON8b", "FAM5_SON8"));
	func_481(&iLocal_1101, &(Local_627.f_8), GlobalFunc_1078(bLocal_907, "FAM5_SON7b", "FAM5_SON7"), GlobalFunc_1078(bLocal_907, "FAM5_SON8b", "FAM5_SON8"), GlobalFunc_1078(bLocal_907, "FAM5_SON9b", "FAM5_SON9"));
	func_474(0.5f, 1f, 2500, 2f, 2f);
	func_472(&Local_583);
	if (ENTITY::DOES_ENTITY_EXIST(Local_754))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_754))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_754, 1) > 15f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_754))
				{
					OBJECT::DELETE_OBJECT(&Local_754);
					ENTITY::REMOVE_MODEL_HIDE(Local_699.f_2, 1f, Local_699.f_1, false);
				}
			}
		}
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0) && !PED::IS_PED_INJURED(Local_627)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (*iParam0)
		{
			case 0:
				StringCopy(&Local_583, "FAM5_GT4", 16);
				if (func_438("FAM5_SON6"))
				{
					if (GlobalFunc_111())
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 2)
						{
							*iParam0++;
						}
					}
					else
					{
						*iParam0++;
					}
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("missfam5mcs_6");
				func_470(&Local_844, Local_571, Global_18, 0, Local_627, Local_659, &Local_583, "CMN_JLEAVE", &Local_587, "CMN_GENGETBCKY", 0, 1, 1, -1);
				if (iLocal_1155 != 0)
				{
					if (GlobalFunc_2521(30000, iLocal_1155))
					{
						iVar0 = 1;
					}
				}
				if (func_468(PLAYER::PLAYER_PED_ID(), Local_627, Local_659))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_571, 1) < 150f || iVar0 == 1)
					{
						iLocal_1102 = 1;
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							}
						}
						GlobalFunc_7139(&Local_844, 0);
						func_440(4);
						*iParam0++;
					}
				}
				break;
			
			case 2:
				STREAMING::REQUEST_ANIM_DICT("missfam5mcs_6");
				CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Local_659, 1);
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5mcs_6"))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_659))
					{
						if (GlobalFunc_530(Local_659, 5f, 1, 1056964608, 0, 1))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_659) && !FIRE::IS_ENTITY_ON_FIRE(Local_659))
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(Local_659, 1) };
								fVar3 = ENTITY::GET_ENTITY_HEADING(Local_659);
								if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var4, 1, &Var7, &uVar2, &uVar1, 0, 1077936128, 0))
								{
									ENTITY::SET_ENTITY_COORDS(Local_659, Var7, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(Local_659, fVar3);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_659);
								}
								MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(Local_659, 1), 2f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(Local_659, 1), 4f, 0, 0, 0, 0, 0);
								MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Local_659, 1), 3f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, 0f, -4f, 0.1689f), 3.5f, 0, 0, 0, 0, 0);
								uLocal_1154 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(ENTITY::GET_ENTITY_COORDS(Local_659, 1), 15f, 0f, 0);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
								{
									iLocal_1150 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1150, Local_659, 0);
									CAM::DESTROY_ALL_CAMS(0);
									uLocal_1122 = CAM::CREATE_CAMERA(964613260, 1);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1122, iLocal_1150, "Push_Michael_Out_Cam", "missfam5mcs_6");
									HUD::DISPLAY_HUD(0);
									HUD::DISPLAY_RADAR(0);
									CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_659, iLocal_1150, "Push_Michael_Out_Car", "missfam5mcs_6", 1000f, -1000f, 0, 1148846080);
									ENTITY::SET_ENTITY_COLLISION(Local_659, 0, 0);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_627);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_627, iLocal_1150, "missfam5mcs_6", "push_michael_out_jimmy", 1000f, -1000f, 4, 32, 1148846080, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_627, 0, 0);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_627, 32);
									if (ENTITY::DOES_ENTITY_EXIST(Local_666))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_666))
										{
											if (ENTITY::IS_ENTITY_ATTACHED(Local_666))
											{
												ENTITY::DETACH_ENTITY(Local_666, 0, 1);
											}
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_666, Local_627, PED::GET_PED_BONE_INDEX(Local_627, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										}
									}
									GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1150, "missfam5mcs_6", "push_michael_out_player0", 1000f, -1000f, 5, 32, 1000f, 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32);
									Local_627.f_14 = 0;
									iLocal_1142 = 0;
									iLocal_1143 = 0;
									iLocal_1144 = 0;
									iLocal_1145 = 0;
									iLocal_1146 = 0;
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									GlobalFunc_702(1, 0, 1);
									*iParam0++;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				func_467();
				STREAMING::REQUEST_ANIM_DICT("missfam5mcs_6drag");
				if (!PED::IS_PED_INJURED(Local_627))
				{
					PED::SET_PED_RESET_FLAG(Local_627, 310, 1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
				{
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					CAM::_0x62ECFCFDEE7885D6();
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) <= 0.63f)
					{
						CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Local_659, 1);
					}
					VEHICLE::_0xBE5C1255A1830FF5(Local_659, 1);
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_627, MISC::GET_HASH_KEY("Detach")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_666))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_666))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_666))
								{
									ENTITY::DETACH_ENTITY(Local_666, 0, 1);
								}
								OBJECT::DELETE_OBJECT(&Local_666);
							}
						}
					}
					if (CAM::DOES_CAM_EXIST(uLocal_1122))
					{
						if (!CAM::IS_CAM_RENDERING(uLocal_1122))
						{
							HUD::DISPLAY_HUD(0);
							HUD::DISPLAY_RADAR(0);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_DRUGS_FOCUS_CAM"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_5_DRUGS");
								AUDIO::START_AUDIO_SCENE("FAMILY_5_DRUGS_FOCUS_CAM");
							}
						}
						else if (iLocal_1145 == 0)
						{
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, -0.7309f, 2.714f, 0.4813f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, -3.6668f, 0.1784f, 0.4859f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, -2.1213f, 0.5363f, 0.4975f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, -1.4263f, 1.9211f, 4.8319f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, -3.342f, -0.523f, -0.1449f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, 0f, 4.5f, 0.25f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, -2.0859f, 4.1187f, 0.1689f), 3f);
							func_466(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, 0f, -4.25f, 0.1689f), 3f);
							iLocal_1145 = 1;
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) > 0.75f)
					{
						if (Local_627.f_14 == 0)
						{
							GlobalFunc_4948(&uLocal_869, 0, 0);
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_659, -1000f, 1);
							ENTITY::SET_ENTITY_COLLISION(Local_659, 1, 0);
							TASK::CLEAR_PED_TASKS(Local_627);
							PED::SET_PED_INTO_VEHICLE(Local_627, Local_659, -1);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_627, Local_659, PLAYER::PLAYER_PED_ID(), 8, 25f, 786484, 25f, 2f, 1);
							Local_627.f_9 = MISC::GET_GAME_TIMER();
							iLocal_1221[8] = 0;
							iLocal_1221[3] = 0;
							iLocal_1221[2] = 0;
							Local_627.f_14 = 1;
						}
					}
					else if (iLocal_1146 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) >= 0.35f)
						{
							iLocal_1145 = 0;
							iLocal_1146 = 1;
						}
					}
				}
				if (iLocal_1143 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) > 0.6275f)
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_1150);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_1150, ENTITY::GET_ENTITY_COORDS(Local_659, 1), ENTITY::GET_ENTITY_ROTATION(Local_659, 2), 2);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5mcs_6", "push_michael_out_player0", 1000f, -4f, -1, 4194304, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150), 0, 1, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
							iLocal_1143 = 1;
						}
					}
				}
				if (iLocal_1142 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) >= 0.778f)
						{
							if (iLocal_1144 == 1)
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1150, "missfam5mcs_6", "push_michael_out_player0", 1000f, -4f, 4, 2, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1f, 0, 0, 0, 0, 0);
								RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
								iLocal_1142 = 1;
							}
						}
					}
				}
				if (iLocal_1144 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
					{
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 10000, 10000, 0, 1, 1, 0);
							iLocal_1144 = 1;
						}
					}
				}
				if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 20000, 20000, 0, 1, 1, 0);
				}
				if (iLocal_1144 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) > 0.99f)
						{
							if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
								*iParam0++;
							}
							else
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
								*iParam0++;
							}
						}
					}
				}
				else if (iLocal_1144 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) > 0.99f)
						{
							*iParam0++;
						}
					}
					else
					{
						*iParam0++;
					}
				}
				break;
			
			case 4:
				func_467();
				iLocal_1150 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150, 0f);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1150, 1);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1.5f, 0, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1150, "missfam5mcs_6drag", "fam_5_mcs_6_drag_michael", 1000f, -1000f, 5, 2, 1000f, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1122, iLocal_1150, "fam_5_mcs_6_drag_cam", "missfam5mcs_6drag");
				RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
				*iParam0++;
				break;
			
			case 5:
				func_467();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_1123))
					{
						uLocal_1123 = CAM::CREATE_CAMERA(26379945, 0);
						CAM::SET_CAM_PARAMS(uLocal_1123, -20.19449f, -219.7964f, 37.58039f, -81.94504f, -1.126925f, -11.82833f, 29f, 0, 1, 1, 2);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1150) >= 0.99f)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_1123))
						{
							CAM::SET_CAM_ACTIVE(uLocal_1123, 1);
						}
						*iParam0++;
					}
				}
				break;
			
			case 6:
				func_467();
				if (CAM::DOES_CAM_EXIST(uLocal_1123) && CAM::IS_CAM_RENDERING(uLocal_1123))
				{
					*iParam0++;
				}
				break;
			
			case 7:
				func_467();
				if (CAM::DOES_CAM_EXIST(uLocal_1123) && CAM::IS_CAM_RENDERING(uLocal_1123))
				{
					CAM::SET_CINEMATIC_MODE_ACTIVE(0);
					GlobalFunc_4948(&uLocal_869, 0, 0);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_1154);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_627);
					PED::DELETE_PED(&Local_627);
					VEHICLE::DELETE_VEHICLE(&Local_659);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_DRUGS");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_DRUGS_FOCUS_CAM");
					STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6");
					STREAMING::REMOVE_ANIM_DICT("missfam5_drink");
					STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6drag");
					GRAPHICS::ANIMPOSTFX_STOP("DrugsDrivingIn");
					GRAPHICS::ANIMPOSTFX_PLAY("DMT_flight", 0, 1);
					GlobalFunc_5476(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
					return 1;
				}
				break;
			}
	}
	return 0;
}



void func_466(struct<3> Param0, float fParam3)//Position - 0x55354
{
	int iVar0;
	
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, fParam3, 0, 98309);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
	}
	MISC::CLEAR_AREA_OF_PEDS(Param0, fParam3, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam3, 0, 0, 0, 0, 0);
}

void func_467()//Position - 0x5539D
{
	if (CAM::DOES_CAM_EXIST(uLocal_1122))
	{
		if (CAM::IS_CAM_RENDERING(uLocal_1122))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0) && !PED::IS_PED_INJURED(Local_627))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_627, "missfam5mcs_6", "push_michael_out_jimmy", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_659, "missfam5mcs_6", "Push_Michael_Out_Car", 3))
				{
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(CAM::GET_CAM_COORD(uLocal_1122), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, 0f, 2.65f, -0.65f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_659, 0f, -2.65f, 1f), 2.25f, 0, 1))
					{
						if (ENTITY::IS_ENTITY_VISIBLE(Local_659))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_659, 0);
						}
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_659))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_659, 1);
					}
				}
			}
		}
	}
}

int func_468(int iParam0, int iParam1, int iParam2)//Position - 0x5545C
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam2) && PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam2))
			{
				if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam2) && !FIRE::IS_ENTITY_ON_FIRE(iParam2)) && !VEHICLE::IS_VEHICLE_STOPPED(iParam2))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
					if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var2, 1, &Var5, &uVar1, &iVar0, 0, 1077936128, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var5, 1) < (4.5f * IntToFloat(iVar0)))
						{
							Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_472) };
							Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_475) };
							Var14 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_478) };
							Var17 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_481) };
							Var20 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_484) };
							if (((((func_456(Var2, Var8, 0.5f) && func_456(Var2, Var11, 0.5f)) && func_456(Var2, Var14, 0.5f)) && func_456(Var2, Var17, 0.5f)) && func_456(Var2, Var20, 0.5f)) && func_469(iParam2, Var5, iVar0, 0.778f, -0.4f, -0.5f))
							{
								if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iParam0, iParam2, -1, 1, 1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_469(int iParam0, struct<2> Param1, var uParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x55606
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5mcs_6"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				Var3 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
				Var6 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam5mcs_6", "push_michael_out_player0", Var0, Var3, fParam5, 2) };
				Var9 = { Var6.x, Var6.f_1, (Var6.f_2 + fParam6) };
				Var12 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam5mcs_6", "push_michael_out_player0", Param1, Param1.f_1, Var0.f_2, Var3, fParam5, 2) };
				Var15 = { Var12.x, Var12.f_1, (Var12.f_2 + fParam7) };
				if (iParam4 == 1)
				{
					if (func_456(Var6, Var9, 0.5f) && func_456(Var12, Var15, 0.65f))
					{
						return 1;
					}
				}
				else if (func_456(Var6, Var9, 0.5f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_470(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x556F5
{
	return func_471(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_471(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x55729
{
	return GlobalFunc_8568(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, uParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

void func_472(char* sParam0)//Position - 0x55773
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_438(sParam0))
		{
			if (GlobalFunc_663(sParam0, 0, 0))
			{
				func_426(sParam0, 1);
			}
		}
		else if (!GlobalFunc_663(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}


void func_474(float fParam0, float fParam1, int iParam2, float fParam3, float fParam4)//Position - 0x557D5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_5459(PLAYER::PLAYER_PED_ID()))
		{
			if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
			{
				fLocal_923 = fParam0;
				fLocal_924 = fParam1;
				func_478(30000, fLocal_923, fLocal_924, 0);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				fLocal_923 = GlobalFunc_253((fLocal_923 + (0.1f * SYSTEM::TIMESTEP())), fParam0, fParam3);
				fLocal_924 = GlobalFunc_253((fLocal_924 + (0.12f * SYSTEM::TIMESTEP())), fParam1, fParam4);
				if ((fLocal_923 < fParam3 || fLocal_924 < fParam4) && SYSTEM::TIMERA() > iParam2)
				{
					func_476(fLocal_923);
					func_475(fLocal_924);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
}

void func_475(float fParam0)//Position - 0x55882
{
	if (!Global_35923)
	{
		return;
	}
	if (fParam0 < 0f || fParam0 > 5f)
	{
		return;
	}
	Global_35927 = fParam0;
}

void func_476(float fParam0)//Position - 0x558AD
{
	if (!Global_35923)
	{
		return;
	}
	Global_35929 = fParam0;
}


void func_478(int iParam0, float fParam1, float fParam2, int iParam3)//Position - 0x558EB
{
	func_479(-1, iParam0, fParam1, fParam2, iParam3, 1);
}

void func_479(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, bool bParam5)//Position - 0x55901
{
	int iVar0;
	
	if (Global_3)
	{
		return;
	}
	if (Global_35923)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_35922));
	}
	if (CAM::DOES_CAM_EXIST(uParam4))
	{
		CAM::SHAKE_CAM(uParam4, "DRUNK_SHAKE", fParam3);
		Global_35924 = uParam4;
	}
	else
	{
		Global_35924 = 0;
	}
	Global_35923 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_35925 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_35925 = -1;
		}
	}
	Global_35926 = uParam1;
	Global_35927 = fParam2;
	Global_35929 = fParam3;
	Global_35928 = fParam3;
}


void func_481(int iParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x559E0
{
	var uVar0;
	var uVar4;
	
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0) && !PED::IS_PED_INJURED(Local_627)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1102 == 0)
		{
			if (*iParam0 > 0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
				{
					if (GlobalFunc_111())
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
				}
				else if (GlobalFunc_111())
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
			}
			switch (*iParam0)
			{
				case 0:
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
					{
						if (!func_438("FAM5_SON6"))
						{
							if (!GlobalFunc_5172(&Local_844, 1))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_SON6", 7, 0, 0, 0))
									{
										func_426("FAM5_SON6", 1);
									}
								}
							}
						}
						else if (!GlobalFunc_111())
						{
							if (func_438(&Local_583) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_583))
							{
								*uParam1 = MISC::GET_GAME_TIMER();
								*iParam0++;
							}
						}
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.633f, -874.2281f, 17.85573f, -1168.236f, -901.4601f, 7.06499f, 35f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
						{
							if (!func_438(sParam2))
							{
								if (!GlobalFunc_5172(&Local_844, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam2, 7, 0, 0, 0))
										{
											func_426(sParam2, 1);
											*iParam0++;
										}
									}
								}
							}
						}
					}
					else if (!func_438("FAM5_DRIVEJ"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_844, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
								{
									if (GlobalFunc_2521(15000, *uParam1))
									{
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_DRIVEJ", 7, 0, 0, 0))
										{
											iLocal_1171++;
											*uParam1 = MISC::GET_GAME_TIMER();
											if (iLocal_1171 == 2)
											{
												func_426("FAM5_DRIVEJ", 1);
											}
										}
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (iLocal_920 == 0)
					{
						if (func_438(sParam2))
						{
							if (!GlobalFunc_111())
							{
								iLocal_920 = 1;
							}
							if (GlobalFunc_111())
							{
								MemCopy(&uVar0, {GlobalFunc_560()}, 4);
								if (!MISC::ARE_STRINGS_EQUAL(sParam2, &uVar0))
								{
									iLocal_920 = 1;
								}
							}
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
					{
						if (iLocal_919 == 1)
						{
							if (!func_438(sParam3))
							{
								if (!GlobalFunc_5172(&Local_844, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam3, 7, 0, 0, 0))
										{
											func_426(sParam3, 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam0++;
										}
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (iLocal_921 == 0)
					{
						if (func_438(sParam3))
						{
							if (GlobalFunc_111())
							{
								MemCopy(&uVar4, {GlobalFunc_560()}, 4);
								if (!MISC::ARE_STRINGS_EQUAL(sParam3, &uVar4))
								{
									iLocal_921 = 1;
								}
							}
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
					{
						if (GlobalFunc_2521(6000, *uParam1))
						{
							if (!func_438(sParam4))
							{
								if (!GlobalFunc_5172(&Local_844, 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam4, 7, 0, 0, 0))
										{
											func_426(sParam4, 1);
											*uParam1 = 0;
											*iParam0++;
										}
									}
								}
							}
						}
					}
					break;
				
				case 4:
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
					{
						if ((MISC::GET_GAME_TIMER() - *uParam1) > 0)
						{
							if (!GlobalFunc_5172(&Local_844, 1))
							{
								if (!GlobalFunc_111())
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
									{
										case 0:
											if (!func_438("FAM5_DRUNKM"))
											{
												if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_DRUNKM", 7, 0, 0, 0))
												{
													iLocal_1176++;
													*uParam1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
													if (iLocal_1176 >= 9)
													{
														func_426("FAM5_DRUNKM", 1);
													}
												}
											}
											break;
										
										case 1:
											if (!func_438("FAM5_DRUNKJ"))
											{
												if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_DRUNKJ", 7, 0, 0, 0))
												{
													iLocal_1175++;
													*uParam1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
													if (iLocal_1175 >= 3)
													{
														func_426("FAM5_DRUNKJ", 1);
													}
												}
											}
											break;
										}
									}
								}
							}
					}
					break;
			}
		}
		else
		{
			if (!func_438("FAM5_DSTOP"))
			{
				if (GlobalFunc_111())
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
					GlobalFunc_4956();
				}
				if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_DSTOP", 7, 0, 0, 0))
				{
					func_426("FAM5_DSTOP", 1);
				}
			}
			if (!func_438("FAM5_CAR"))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1150))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_844, 0))
						{
							if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_CAR", 7, 0, 0, 0))
							{
								func_426("FAM5_CAR", 1);
							}
						}
					}
				}
			}
		}
	}
}





void func_486(var uParam0, char* sParam1, char* sParam2)//Position - 0x55F86
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 3))
		{
			GlobalFunc_7629();
			PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_627))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_627, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_627, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 8f, -8f, -1, 1, 0f, 0, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_627, 1);
			}
			func_445(4);
			*uParam0++;
			break;
		
		case 1:
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0) && !PED::IS_PED_INJURED(Local_627)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_438(sParam1))
				{
					if ((GlobalFunc_5672(sParam1) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 5) || iLocal_920 == 1)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659) && PED::IS_PED_SITTING_IN_VEHICLE(Local_627, Local_659))
						{
							GlobalFunc_7629();
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_659, 0);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_659, 4);
							TASK::TASK_PLAY_ANIM(Local_627, "missfam5_drink", "Drink_Michael&Jimmy_Jimmy", 8f, -8f, -1, 0, 0f, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 8f, -4f, -1, 48, 0f, 0, 0, 0);
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0") > 0.389f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Drink_Sfx")))
				{
					func_441(4);
					GRAPHICS::ANIMPOSTFX_PLAY("DrugsDrivingIn", 0, 0);
					*uParam0++;
				}
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0") > 0.703f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Interrupt")))
				{
					iLocal_919 = 1;
					if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(Local_627)) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0))
					{
						TASK::STOP_ANIM_PLAYBACK(PLAYER::PLAYER_PED_ID(), 2, 1);
						TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
						TASK::STOP_ANIM_PLAYBACK(Local_627, 0, 0);
						TASK::TASK_PLAY_ANIM(Local_627, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 1000f, -8f, -1, 1, 0f, 0, 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_659, 1);
						*uParam0++;
					}
				}
			}
			break;
		
		case 4:
			if (func_438(sParam2))
			{
				if ((GlobalFunc_5672(sParam2) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 4) || iLocal_921 == 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_7057(PLAYER::PLAYER_PED_ID());
					}
					GlobalFunc_7632(1);
					func_441(3);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_ON_DRUGS");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_DRUGS");
					GlobalFunc_9132(1);
					GlobalFunc_585(65, 0);
					iLocal_1155 = MISC::GET_GAME_TIMER();
					RECORDING::_0x293220DA1B46CEBC(4f, 12f, 4);
					*uParam0++;
				}
			}
			break;
	}
}











int func_497(int iParam0)//Position - 0x5658E
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1151))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_659, "missfam5leadinoutmcs_5", "leadout_car_door", 3))
			{
				GlobalFunc_2918();
			}
		}
		func_510();
		if (iLocal_1159 == 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5leadinoutmcs_5", "leadout_mic", 3))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uLocal_1122))
		{
			if (iLocal_1159 == 0)
			{
				if (GlobalFunc_4953(1, 1, 1))
				{
					if (!func_438("FAM5_HCAM"))
					{
						GlobalFunc_159("FAM5_HCAM", 10000);
						func_426("FAM5_HCAM", 1);
					}
				}
				if (GlobalFunc_7635(&uLocal_869, 1, 1, 1))
				{
					if (!CAM::IS_CAM_RENDERING(uLocal_1122))
					{
						HUD::DISPLAY_RADAR(0);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
							AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM");
						}
						if (GlobalFunc_74("FAM5_HCAM"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
				else if (CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					HUD::DISPLAY_RADAR(1);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM");
						AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
					}
				}
			}
		}
		if (iLocal_1159 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_659, "missfam5leadinoutmcs_5", "leadout_car_door", 3))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(Local_659))
					{
						if (CAM::DOES_CAM_EXIST(uLocal_1122))
						{
							if (CAM::IS_CAM_RENDERING(uLocal_1122))
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							}
						}
						HUD::CLEAR_HELP(1);
						HUD::DISPLAY_RADAR(1);
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						GlobalFunc_4948(&uLocal_869, 0, 0);
						iLocal_1159 = 1;
					}
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("family_5_mcs_5", 1))
			{
				GlobalFunc_4935();
				GlobalFunc_5105();
				if (!PED::IS_PED_INJURED(Local_627))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_627, "Jimmy", 0, Local_627.f_6, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_743, "Jimmy_necklace", 2, joaat("p_jimmyneck_03_s"), 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_710.x))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_710.x))
					{
						ENTITY::DETACH_ENTITY(Local_710.x, 0, 1);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_710.x, "Meth_Bag", 1, Local_710.f_1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_643))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_643);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_643, "Burgershot_drugdealer", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_659, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_659, 0, 0, 0f);
					}
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_659, 1))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_659, 1, 0, 0f);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_659, "Michaels_car", 0, 0, 0);
				}
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_TO_BURGERSHOT");
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (!PED::IS_PED_INJURED(Local_627))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_627, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_643))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Burgershot_drugdealer", Local_643, 0);
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 1, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::STOP_GAMEPLAY_HINT(1);
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_688.x))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_688.x))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_688.x))
						{
							ENTITY::DETACH_ENTITY(Local_688.x, 0, 1);
						}
						OBJECT::DELETE_OBJECT(&Local_688);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_659, 1, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_659, 1, 1);
				}
				MISC::CLEAR_AREA(-1176.364f, -887.574f, 12.8652f, 6f, 1, 1, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1176.364f, -887.574f, 12.8652f, 6f, 1, 0, 0, 0, 0);
				ENTITY::CREATE_MODEL_HIDE(Local_699.f_2, 1f, Local_699.f_1, 0);
				STREAMING::_0xEF39EE20C537E98C(-1179.8f, -882.04f, 14.75f, 0.53f, -0.85f, -0.04f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_666.f_1);
			STREAMING::REQUEST_MODEL(Local_754.f_1);
			STREAMING::REQUEST_ANIM_DICT("missfam5_drink");
			STREAMING::REQUEST_ANIM_DICT("missfam5leadinoutmcs_5");
			if (!func_438("FAM5_MCS5LO_P"))
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_10691(&uLocal_936, "FAM5AUD", "FAM5_MCS5LO", 7, 0, 0, 0, 0);
					func_426("FAM5_MCS5LO_P", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
			{
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_659, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_743))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Jimmy_necklace", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_necklace", 0)))
					{
						iLocal_743 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_necklace", 0));
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", Local_627.f_6))
			{
				if (!PED::IS_PED_INJURED(Local_627))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 1, 3, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_necklace", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_743))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_743))
					{
						OBJECT::DELETE_OBJECT(&iLocal_743);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Burgershot_drugdealer", 0))
			{
				if (iLocal_1125 == 0)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1151))
					{
						iLocal_1151 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_659, 1), ENTITY::GET_ENTITY_ROTATION(Local_659, 2), 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1151, 1);
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_1122 = CAM::CREATE_CAMERA(964613260, 1);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1122, iLocal_1151, "leadout_cam", "missfam5leadinoutmcs_5");
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_659, 1, 1, 1, 0);
						ENTITY::PLAY_ENTITY_ANIM(Local_659, "leadout_car_door", "missfam5leadinoutmcs_5", 1000f, 0, 0, 0, 0f, 262144);
						if (func_376(&Local_754, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_754, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_754, iLocal_1151, "leadout_door", "missfam5leadinoutmcs_5", 1000f, -4f, 0, 1148846080);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_627))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_627))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1153))
								{
									iLocal_1153 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_659, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_659, "seat_pside_f")), ENTITY::GET_ENTITY_ROTATION(Local_659, 2), 2);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_627);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_627, iLocal_1153, "missfam5leadinoutmcs_5", "leadout_alt_jimmy", 1000f, -4f, 4, 0, 1148846080, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_627, 1, 0);
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_643))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_643))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_643);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_643, iLocal_1151, "missfam5leadinoutmcs_5", "leadout_dealer", 1000f, -1000f, 0, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_643, 0, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, -1);
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5leadinoutmcs_5", "leadout_mic", 1000f, -4f, -1, 48, 0f, 0, 0, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
				GlobalFunc_8380(0, 1, 1, 0);
				if (iLocal_1125 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_659, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_659);
					}
					if (!PED::IS_PED_INJURED(Local_627))
					{
						PED::SET_PED_INTO_VEHICLE(Local_627, Local_659, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, -1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_643))
					{
						PED::DELETE_PED(&Local_643);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					*iParam0 = 4;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1151))
				{
					*iParam0++;
				}
			}
			else if (iLocal_1125 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_1125 = 1;
				}
			}
			break;
		
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1151))
			{
				if (!func_438("FAM5_MCS5LO"))
				{
					if (func_438("FAM5_MCS5LO_P"))
					{
						GlobalFunc_2207();
						func_426("FAM5_MCS5LO", 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_666))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1151) > 0.09f)
					{
						if (func_376(&Local_666, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_643))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_643))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_666, Local_643, PED::GET_PED_BONE_INDEX(Local_643, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
						}
					}
				}
				if (iLocal_1156 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_666))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_666))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_643))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_643))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1151) > 0.285f)
									{
										ENTITY::DETACH_ENTITY(Local_666, 0, 1);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_666, Local_627, PED::GET_PED_BONE_INDEX(Local_627, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
										iLocal_1156 = 1;
									}
								}
							}
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1151) > 0.575f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_659, "missfam5leadinoutmcs_5", "leadout_car_door", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_659, "leadout_car_door", "missfam5leadinoutmcs_5", -4f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_659, 1);
							TASK::CLEAR_PED_TASKS(Local_627);
							PED::SET_PED_INTO_VEHICLE(Local_627, Local_659, 0);
							TASK::TASK_PLAY_ANIM(Local_627, "missfam5leadinoutmcs_5", "leadout_alt_jimmy", 1000f, -4f, -1, 3, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1151), 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_627, 0, 0);
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1151) >= 1f)
				{
					if (CAM::DOES_CAM_EXIST(uLocal_1122))
					{
						if (CAM::IS_CAM_RENDERING(uLocal_1122))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
					}
					HUD::DISPLAY_RADAR(1);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(uLocal_1122, 0);
					CAM::DESTROY_ALL_CAMS(0);
					GlobalFunc_4948(&uLocal_869, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_643))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_643))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_643, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_643, 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_627))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_627))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							if (!PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_627, Local_659, 0);
							}
							TASK::TASK_PLAY_ANIM(Local_627, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 1000f, -8f, -1, 1, 0f, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_627, 0, 0);
						}
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					*iParam0++;
				}
			}
			break;
		
		case 4:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_666.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_699.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_754.f_1);
			STREAMING::REMOVE_ANIM_DICT("missfam5leadinoutmcs_5");
			HUD::DISPLAY_RADAR(1);
			GlobalFunc_4948(&uLocal_869, 0, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			*iParam0++;
			break;
		
		case 5:
			if (!GlobalFunc_111())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_643))
				{
					PED::DELETE_PED(&Local_643);
				}
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
	}
	return 0;
}













void func_510()//Position - 0x57804
{
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
}


int func_512(int iParam0)//Position - 0x5788C
{
	MISC::SET_BIT(&(Local_844.f_13), 20);
	GlobalFunc_2919(&Local_844, 1);
	func_523(&(Local_643.f_7));
	func_522(&(Local_627.f_7));
	func_518(&iLocal_1101, GlobalFunc_1078(bLocal_907, "FAM5_SON2b", "FAM5_SON2"), GlobalFunc_1078(bLocal_907, "FAM5_SON4b", "FAM5_SON4"));
	func_472(&Local_587);
	if (GlobalFunc_331() || GlobalFunc_2233())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1175.67f, -888.6f, 12.87f, 1) < 100f)
	{
		CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_5", 8);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (!PED::IS_PED_INJURED(Local_627))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_627, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_643))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_643))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Burgershot_drugdealer", Local_643, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 1, 0, 0, 0);
				}
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 1, 0, 0, 0);
			}
			iLocal_1126 = 1;
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	switch (*iParam0)
	{
		case 0:
			if ((!TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("family5d") && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("mansion_1")) && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("f5_jimmy1"))
			{
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5d");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(GlobalFunc_4931(0, 0), 3);
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
			{
				if (iLocal_918 == 0)
				{
					if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						if (((PAD::IS_CONTROL_PRESSED(0, 22) || PAD::IS_CONTROL_PRESSED(0, 21)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f)) > 20)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f)) > 20))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							RECORDING::_0x293220DA1B46CEBC(0f, 12f, 4);
							iLocal_918 = 1;
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659))
				{
					if (!PED::IS_PED_INJURED(Local_627))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_659, 1), Local_659.f_2, 1) > 100f)
							{
								iLocal_917 = 1;
							}
						}
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_BURGERSHOT"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_BURGERSHOT");
					}
				}
				else
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
				}
			}
			if (func_470(&Local_844, -1175.67f, -888.6f, 12.87f, 5f, 3.5f, 2f, 1, Local_627, Local_659, "", "CMN_JLEAVE", GlobalFunc_1078(HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON(), "", &Local_587), "CMN_GENGETBCKY", 0, 1, 1, -1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_659))
					{
						iLocal_1102 = 1;
						GlobalFunc_4935();
						func_517(&Local_1263, 1);
						func_516(&Local_721, 1);
						func_516(&Local_732, 1);
						func_770(86, 1, 0, 1, 0);
						RECORDING::_0x293220DA1B46CEBC(12f, 1f, 4);
						iLocal_1157 = 1;
						if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
						{
							iLocal_1160 = 1;
						}
						*iParam0++;
					}
				}
			}
			if (!func_438(&Local_587) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_587))
			{
				if (HUD::DOES_BLIP_EXIST(Local_844))
				{
					if (iLocal_1103 == 1)
					{
						func_514(&Local_587, 7500, 1);
					}
				}
			}
			else if (GlobalFunc_663(&Local_587, 0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0))
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if (!func_438("FAM5_GT3"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
				{
					if (func_438("FAM5_SON3"))
					{
						if (!GlobalFunc_5172(&Local_844, 1))
						{
							func_514("FAM5_GT3", 7500, 1);
						}
					}
				}
			}
			else if (GlobalFunc_663("FAM5_GT3", 0, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_844.f_5))
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if ((((ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/])) || ENTITY::DOES_ENTITY_EXIST(Local_721)) || ENTITY::DOES_ENTITY_EXIST(Local_732))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1316.f_1, 1) > 75f)
				{
					func_517(&Local_1263, 1);
					func_516(&Local_721, 1);
					func_516(&Local_732, 1);
					func_770(86, 1, 0, 1, 0);
				}
			}
			break;
		
		case 1:
			if (iLocal_1160 == 0)
			{
				func_513();
			}
			if (GlobalFunc_530(Local_659, 2.5f, 1, 0.75f, 0, 1))
			{
				if (iLocal_1158 == 1 && iLocal_1126 == 1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_513()//Position - 0x57E08
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_HINT_FOV(45.5f);
		CAM::SET_GAMEPLAY_COORD_HINT(Local_580, -1, 2500, 2000, 0);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(1.6f);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.88f);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.735f);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-1.2f);
	}
}

void func_514(char* sParam0, int iParam1, bool bParam2)//Position - 0x57E56
{
	if (!func_438(sParam0))
	{
		GlobalFunc_2523(sParam0, iParam1, 1);
		func_426(sParam0, bParam2);
	}
}


void func_516(int iParam0, bool bParam1)//Position - 0x57E92
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
		}
		if (bParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_517(int iParam0, bool bParam1)//Position - 0x57ECC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_516(iParam0[iVar0 /*11*/], bParam1);
		iVar0++;
	}
}

void func_518(int iParam0, char* sParam1, char* sParam2)//Position - 0x57EF9
{
	var uVar0;
	
	MemCopy(&uVar0, {GlobalFunc_560()}, 4);
	if (!PED::IS_PED_INJURED(Local_627) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1102 == 0)
		{
			switch (*iParam0)
			{
				case 0:
					if (GlobalFunc_111())
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_627, 8f, 8f, 4f, 0, 1, 0))
						{
							GlobalFunc_5105();
						}
					}
					if (!func_438("FAM5_PUSH"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_627))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_627))
							{
								if (iLocal_1164 == 0)
								{
									if ((PED::IS_PED_RAGDOLL(Local_627) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_627, PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_627, PLAYER::PLAYER_PED_ID(), 1))
									{
										if (GlobalFunc_111())
										{
											GlobalFunc_5105();
										}
										ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_627);
										iLocal_1164 = 1;
									}
								}
								if (iLocal_1164 == 1)
								{
									if (!PED::IS_PED_RAGDOLL(Local_627))
									{
										if (!GlobalFunc_111())
										{
											if (!GlobalFunc_5172(&Local_844, 0))
											{
												if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_PUSH", 7, 0, 0, 0))
												{
													iLocal_1164 = 0;
													iLocal_1163++;
													if (iLocal_1163 == 4)
													{
														func_426("FAM5_PUSH", 1);
													}
												}
											}
											else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_627))
											{
												GlobalFunc_5653(Local_627, "FAM5_DXAA", "JIMMY", 3);
												iLocal_1164 = 0;
												iLocal_1163++;
											}
										}
									}
								}
							}
						}
					}
					if (!func_438(sParam1))
					{
						if (HUD::DOES_BLIP_EXIST(Local_844))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_844, 1))
								{
									if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(Local_627))
									{
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam1, 9, 0, 0, 0))
										{
											func_426(sParam1, 1);
										}
									}
								}
							}
						}
					}
					else if (GlobalFunc_111() && MISC::ARE_STRINGS_EQUAL(&uVar0, sParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) || PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0)) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_627))
							{
								GlobalFunc_5105();
							}
						}
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							GlobalFunc_5105();
						}
					}
					else
					{
						iLocal_1103 = 1;
					}
					if (!func_438("FAM5_SON3"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) && PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_844, 1))
									{
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_SON3", 7, 0, 0, 0))
											{
												func_426("FAM5_SON3", 1);
												*iParam0++;
											}
										}
									}
								}
								else
								{
									if (GlobalFunc_620())
									{
										GlobalFunc_619(0);
									}
									if (GlobalFunc_5672(sParam1))
									{
										GlobalFunc_5105();
									}
								}
							}
						}
					}
					break;
				
				case 1:
					if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
					{
						if (GlobalFunc_663("FAM5_GT3", 0, 0))
						{
							StringCopy(&Local_1105, "", 24);
							StringCopy(&Local_1111, "", 24);
							*iParam0++;
						}
					}
					break;
				
				case 2:
					if (iLocal_1104 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
						{
							if (func_438("FAM5_WNTD1"))
							{
								if (func_438(sParam2) || func_438("FAM5_SON5"))
								{
									if (!GlobalFunc_5172(&Local_844, 1))
									{
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1105) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1111))
										{
											if (MISC::ARE_STRINGS_EQUAL(&Local_1105, sParam2) || MISC::ARE_STRINGS_EQUAL(&Local_1105, "FAM5_SON5"))
											{
												if (GlobalFunc_10626(&uLocal_936, "FAM5AUD", &Local_1105, &Local_1111, 7, 0, 0))
												{
													iLocal_1104 = 0;
													func_426("FAM5_WNTD1", 0);
												}
											}
										}
									}
								}
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
					{
						if (GlobalFunc_111())
						{
							if (GlobalFunc_620())
							{
								GlobalFunc_619(0);
							}
						}
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (iLocal_1104 == 0)
						{
							if (func_438(sParam2) || func_438("FAM5_SON5"))
							{
								if (GlobalFunc_111())
								{
									Local_1105 = { GlobalFunc_560() };
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_1105))
									{
										if (MISC::ARE_STRINGS_EQUAL(&Local_1105, sParam2) || MISC::ARE_STRINGS_EQUAL(&Local_1105, "FAM5_SON5"))
										{
											iLocal_1104 = 1;
											Local_1105 = { GlobalFunc_560() };
											Local_1111 = { GlobalFunc_514() };
											GlobalFunc_4956();
										}
									}
								}
							}
						}
						if (iLocal_1104 == 1)
						{
							if (!func_438("FAM5_WNTD1"))
							{
								if (!GlobalFunc_5172(&Local_844, 1))
								{
									if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_WNTD1", 8, 0, 0, 0))
									{
										func_426("FAM5_WNTD1", 1);
									}
								}
							}
						}
					}
					else if (GlobalFunc_111())
					{
						if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_844.f_5))
					{
						if (!func_438(sParam2))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_844, 1))
								{
									if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam2, 7, 0, 0, 0))
									{
										func_426(sParam2, 1);
									}
								}
							}
						}
						if (!func_438("FAM5_SON5"))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_643.f_2, 130f, 130f, 100f, 0, 1, 0))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_844, 1))
									{
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_SON5", 7, 0, 0, 0))
										{
											func_426("FAM5_SON5", 1);
										}
									}
								}
								else
								{
									GlobalFunc_4935();
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.633f, -874.2281f, 17.85573f, -1168.236f, -901.4601f, 7.06499f, 35f, 0, 1, 0))
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_5105();
							}
						}
					}
					break;
				}
		}
		if (iLocal_1157 == 1)
		{
			if (!func_438("FAM5_PREBS"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_643))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_643))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_643, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", 3))
								{
									if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_PREBS", 7, 0, 0, 0))
									{
										func_426("FAM5_PREBS", 1);
									}
								}
								else
								{
									func_426("FAM5_PREBS", 1);
								}
							}
						}
					}
				}
			}
		}
	}
}




void func_522(var uParam0)//Position - 0x58625
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(Local_627))
	{
		switch (*uParam0)
		{
			case 0:
				PED::SET_PED_CONFIG_FLAG(Local_627, 104, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_627, -1794415470) != 1)
					{
						GlobalFunc_2519(Local_627, -805.4584f, 174.9825f, 75.7407f, 336.1902f, 0, 0, 0);
						TASK::TASK_ENTER_VEHICLE(Local_627, Local_659, 60000, 0, 1f, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_627, -668482597, 0, 0, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) != 1)
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
								PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -805.6359f, 175.428f, 75.7407f, 1f, 60000, 0.25f, 5, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -804.6224f, 179.1443f, 75.7407f, 1f, 60000, 0.25f, 8192, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
							}
						}
						SYSTEM::WAIT(1000);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
					}
					*uParam0++;
				}
				break;
			
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
					{
						PED::SET_PED_RESET_FLAG(Local_627, 60, 1);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_627, -1794415470) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_627, Local_659, 60000, 0, 2f, 1, 0);
							}
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_627, 2f);
						}
					}
					if (PED::IS_PED_IN_VEHICLE(Local_627, Local_659, 0))
					{
						*uParam0++;
					}
				}
				break;
			}
	}
}

void func_523(var uParam0)//Position - 0x58804
{
	switch (*uParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_643.f_2, 1) < 200f)
			{
				*uParam0++;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_643) && !ENTITY::DOES_ENTITY_EXIST(Local_754))
			{
				STREAMING::REQUEST_MODEL(Local_643.f_6);
				STREAMING::REQUEST_MODEL(Local_754.f_1);
				if (STREAMING::HAS_MODEL_LOADED(Local_643.f_6) && STREAMING::HAS_MODEL_LOADED(Local_754.f_1))
				{
					Local_643 = PED::CREATE_PED(26, Local_643.f_6, Local_643.f_2, Local_643.f_5, 1, 1);
					if (func_376(&Local_754, 1))
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_754, 150);
						ENTITY::CREATE_MODEL_HIDE(Local_699.f_2, 1f, Local_699.f_1, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_643.f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_754.f_1);
				}
			}
			else
			{
				iLocal_1221[11] = 1;
				iLocal_1221[10] = 1;
				iLocal_1221[9] = 1;
				if (!PED::IS_PED_INJURED(Local_643))
				{
					PED::SET_PED_PROP_INDEX(Local_643, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_643, 1, 0, 0, false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_643, 150);
					PED::SET_PED_LOD_MULTIPLIER(Local_643, 5f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_643, 1);
					PED::SET_PED_CONFIG_FLAG(Local_643, 181, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_643, 132, 1);
					GlobalFunc_173(&uLocal_936, 5, Local_643, "FAM5DEALER", 0, 1);
				}
				func_526(&Local_643, 0);
				*uParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(Local_699.f_1);
			func_524(&Local_643, PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_524(int iParam0, int iParam1)//Position - 0x5898C
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	
	Var0 = { -1179.314f, -891.318f, 12.73f };
	Var3 = { 0f, 0f, -147.6f };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0) && !PED::IS_PED_INJURED(iParam1))
		{
			fVar6 = GlobalFunc_156(iParam1, *iParam0, 1);
			if (iParam0->f_15 != 5)
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
				{
					if (PED::IS_PED_IN_MELEE_COMBAT(iParam1))
					{
						if (fVar6 < 5f)
						{
							func_526(iParam0, 5);
						}
					}
					else if (fVar6 < 20f)
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar7, 1))
						{
							if (WEAPON::GET_WEAPONTYPE_GROUP(uVar7) != joaat("GROUP_MELEE") && WEAPON::GET_WEAPONTYPE_GROUP(uVar7) != joaat("GROUP_PETROLCAN"))
							{
								func_526(iParam0, 5);
							}
						}
					}
				}
				if (PED::IS_PED_IN_COMBAT(*iParam0, iParam1))
				{
					func_526(iParam0, 5);
				}
			}
			switch (iParam0->f_15)
			{
				case 0:
					if (fVar6 < 200f)
					{
						func_526(iParam0, 2);
					}
					break;
				
				case 2:
					if (iParam0->f_14 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("missfam5leadinoutmcs_5");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5leadinoutmcs_5"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", Var0, Var3, 1000f, -4f, -1, 790537, 0f, 2, 0);
							}
						}
						else
						{
							iParam0->f_14 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", 3))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_688.x))
						{
							if (func_376(&Local_688, 0))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_688.x, *iParam0, PED::GET_PED_BONE_INDEX(*iParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_710.x))
						{
							if (func_376(&Local_710, 0))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_710.x, *iParam0, PED::GET_PED_BONE_INDEX(*iParam0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer") > 0.95f)
						{
							if (iLocal_1157 == 1)
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", Var0, Var3, 4f, -4f, -1, 790538, 0f, 2, 0);
								func_526(iParam0, 3);
							}
						}
					}
					break;
				
				case 3:
					if (iParam0->f_14 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("missfam5leadinoutmcs_5");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5leadinoutmcs_5"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", Var0, Var3, 1000f, -4f, -1, 790538, 0f, 2, 0);
							}
						}
						else
						{
							iParam0->f_14 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", 0.85f);
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer") >= 0.98f)
						{
							iLocal_1158 = 1;
						}
					}
					break;
				
				case 5:
					if (iParam0->f_14 == 0)
					{
						func_525(*iParam0, iParam1, 300f, -1);
						iParam0->f_14 = 1;
					}
					break;
				}
			}
	}
}

void func_525(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x58CD0
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 4, 1);
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam1, fParam2, iParam3, 0, 0);
				PED::SET_PED_KEEP_TASK(iParam0, 1);
			}
		}
	}
}

void func_526(int iParam0, int iParam1)//Position - 0x58D18
{
	iParam0->f_14 = 0;
	iParam0->f_15 = iParam1;
}



int func_529(int iParam0)//Position - 0x58DEA
{
	var uVar0;
	
	switch (*iParam0)
	{
		case 0:
			if (iLocal_1117 == 0)
			{
				GlobalFunc_5649(5, 2, 6, 0, 0);
				GRAPHICS::SET_TV_VOLUME(-9f);
				iLocal_1117 = 1;
			}
			if (GlobalFunc_5927("family_5_mcs_4", 1))
			{
				if (iLocal_1117 == 1)
				{
					GlobalFunc_4935();
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					GlobalFunc_8380(1, 1, 1, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					if (!PED::IS_PED_INJURED(Local_627))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_627, "Jimmy", 0, Local_627.f_6, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_732))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_732))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_732))
							{
								ENTITY::DETACH_ENTITY(Local_732, 0, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_732, "Headset_Jimmy", 0, Local_732.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_732, "Headset_Jimmy", 2, Local_732.f_1, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_721))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_721))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_721))
							{
								ENTITY::DETACH_ENTITY(Local_721, 0, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_721, "Jimmy_Controller", 0, Local_721.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_721, "Jimmy_Controller", 2, Local_721.f_1, 0);
					}
					CUTSCENE::START_CUTSCENE(16);
					RECORDING::_0x48621C9FCA3EBD28(4);
					*iParam0++;
				}
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_627, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA(Local_1316.f_1, 50f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_1316.f_1, 50f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_1316.f_1, 50f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_1316.f_1, 50f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_1316.f_1, 50f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_659, Local_659.f_2, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_659, Local_659.f_5);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_659);
				}
				if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(3);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_721))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Jimmy_Controller", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_Controller", 0)))
					{
						Local_721 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_Controller", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_732))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Headset_Jimmy", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Headset_Jimmy", 0)))
					{
						Local_732 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Headset_Jimmy", 0));
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", Local_627.f_6))
			{
				if (!PED::IS_PED_INJURED(Local_627))
				{
					TASK::CLEAR_PED_TASKS(Local_627);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
					{
						if (iLocal_1125 == 1)
						{
							GlobalFunc_2519(Local_627, -805.53f, 175.98f, 75.7407f, 350.0319f, 0, 0, 0);
						}
						PED::FORCE_PED_MOTION_STATE(Local_627, -668482597, 0, 1, 0);
						TASK::TASK_ENTER_VEHICLE(Local_627, Local_659, 60000, 0, 1f, 1, 0);
					}
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 1, 3, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -805.6359f, 175.428f, 75.7407f, 1f, 60000, 0.25f, 5, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -804.6224f, 179.1443f, 75.7407f, 1f, 60000, 0.25f, 8192, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Headset_Jimmy", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_732))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_732))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_732, -806.598f, 170.28f, 76.475f, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_732, -94f, 0f, 0f, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_732, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Controller", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_721))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_721))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_721, Local_721.f_2, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_721, Local_721.f_5, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_721, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				GlobalFunc_8380(0, 1, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 12000)
				{
					if (iLocal_1117 == 1)
					{
						GlobalFunc_7063(1, 5);
						iLocal_1117 = 0;
					}
				}
				if (iLocal_1125 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						iLocal_1125 = 1;
					}
				}
			}
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5d");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
			break;
	}
	return 0;
}








int func_537(int iParam0)//Position - 0x59520
{
	func_545();
	func_544(Local_627, &(Local_627.f_7));
	func_543(&iLocal_1120);
	if (((!TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("family5b") && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("mansion_1")) && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("family5c")) && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("f5_jimmy1"))
	{
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5b");
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5c");
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
	}
	switch (*iParam0)
	{
		case 0:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 3, 0, 1);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1f, 0, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 3, 0, 1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			*iParam0++;
			break;
		
		case 1:
			if (!func_438("FAM5_GT2"))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_627.f_1))
				{
					if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						RECORDING::_0x293220DA1B46CEBC(0f, 7f, 4);
						Local_627.f_1 = GlobalFunc_5104(Local_574, 0);
						func_514("FAM5_GT2", 7500, 1);
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_627.f_1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0))
				{
					HUD::REMOVE_BLIP(&(Local_627.f_1));
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.722f, 75.74073f, -806.7071f, 174.1386f, 78.74073f, 2f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0))
			{
				if (func_438("FAM5_GT2"))
				{
					Local_627.f_1 = GlobalFunc_5104(Local_574, 0);
				}
			}
			if (iLocal_1117 == 0)
			{
				if (GlobalFunc_2920(5))
				{
					func_541(5, 1);
					GlobalFunc_5649(5, 2, 6, 0, 1);
					GRAPHICS::SET_TV_VOLUME(-9f);
					iLocal_1117 = 1;
				}
			}
			else if (!GlobalFunc_2920(5))
			{
				GlobalFunc_2798(5);
				iLocal_1117 = 0;
			}
			if (GlobalFunc_331() || GlobalFunc_2233())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_4") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_4", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_627, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
				}
			}
			if (!func_438("FAM5_GT4"))
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_627) > 50f)
				{
					func_514("FAM5_GT4", 7500, 1);
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.722f, 75.74073f, -806.7071f, 174.1386f, 78.74073f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.9653f, 175.4893f, 75.64073f, -800.5947f, 179.0899f, 79.24073f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6986f, 172.0152f, 75.64037f, -806.0113f, 175.4064f, 79.24073f, 3f, 0, 1, 0))
			{
				GlobalFunc_688();
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 102, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (iLocal_1102 == 1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -1056964608);
				}
				HUD::REMOVE_BLIP(&(Local_627.f_1));
				STREAMING::REMOVE_ANIM_DICT("missfam5_wet_walk");
				STREAMING::REMOVE_ANIM_DICT("missfam5mcs_4leadin");
				RECORDING::_0x293220DA1B46CEBC(5f, 1f, 4);
				return 1;
			}
			break;
	}
	return 0;
}




void func_541(int iParam0, int iParam1)//Position - 0x599F2
{
	if (iParam0 != -1)
	{
		Global_24504[iParam0 /*11*/].f_8 = iParam1;
	}
}


void func_543(int iParam0)//Position - 0x59A2B
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_922 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0))
			{
				if (!PED::IS_PED_INJURED(Local_627))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_627, -1, 0, 2);
					iLocal_922 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0))
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			iLocal_922 = 0;
		}
		switch (*iParam0)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_wet_walk"))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 1000f, -1.5f, -1, 0, 0f, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
				}
				else
				{
					*iParam0++;
				}
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 3))
				{
					if (iLocal_918 == 0)
					{
						iVar0 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f));
						iVar1 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f));
						if ((iVar0 < -50 || iVar0 > 50) || (iVar1 < -50 || iVar1 > 50))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_918 = 1;
						}
					}
				}
				break;
			}
	}
}

void func_544(int iParam0, var uParam1)//Position - 0x59BC3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			switch (*uParam1)
			{
				case 0:
					*uParam1++;
					break;
				
				case 1:
					STREAMING::REQUEST_ANIM_DICT("missfam5mcs_4leadin");
					if ((STREAMING::HAS_ANIM_DICT_LOADED("missfam5mcs_4leadin") && func_376(&Local_721, 0)) && func_376(&Local_732, 0))
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, "missfam5mcs_4leadin", "family_5_mcs_4_loop_jimmy", -806.26f, 170.664f, 77.52f, 0f, 0f, 98.28f, 1000f, -1000f, -1, 17567753, 0f, 2, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_721))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_721))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_721, 0, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_721, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_732))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_732))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_732, 0, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_732, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.02f, 0f, 0f, -180f, 90f, 0f, 0, 0, 0, 0, 2, 1);
							}
						}
						STREAMING::REMOVE_ANIM_DICT("missfam5mcs_4leadin");
						*uParam1++;
					}
					break;
				
				case 2:
					PED::SET_PED_RESET_FLAG(iParam0, 314, 1);
					PED::SET_PED_RESET_FLAG(iParam0, 129, 1);
					break;
				}
			}
	}
}

void func_545()//Position - 0x59D28
{
	if (!func_438("FAM5_SON1A"))
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_844, 1))
				{
					if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_SON1A", 7, 0, 0, 0))
					{
						func_426("FAM5_SON1A", 1);
					}
				}
				else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "FAM5_ATAA", "MICHAEL", 3);
					func_426("FAM5_SON1A", 1);
				}
			}
		}
	}
	if (!func_438("FAM5_SON1B"))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.5041f, -804.6584f, 179.532f, 78.74073f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_844, 1))
				{
					if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_SON1B", 7, 0, 0, 0))
					{
						func_426("FAM5_SON1B", 1);
					}
				}
			}
		}
	}
	if (!func_438("FAM5_SON1D"))
	{
		if (func_438("FAM5_SON1B"))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_844, 1))
				{
					if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_SON1D", 7, 0, 0, 0))
					{
						func_426("FAM5_SON1D", 1);
					}
				}
			}
		}
	}
	if (!func_438("FAM5_JROOM1"))
	{
		if (func_438("FAM5_SON1D"))
		{
			if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.5041f, -804.6584f, 179.532f, 78.74073f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.3972f, 179.2023f, 75.24073f, -809.9282f, 175.5625f, 78.74073f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.722f, 75.74073f, -806.7071f, 174.1386f, 78.74073f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_JROOM1", 7, 0, 0, 0))
						{
							func_426("FAM5_JROOM1", 1);
							func_426("FAM5_SON1A", 1);
							func_426("FAM5_SON1B", 1);
							func_426("FAM5_SON1C", 1);
							func_426("FAM5_SON1D", 1);
						}
					}
				}
			}
		}
	}
	else if (GlobalFunc_5672("FAM5_JROOM1"))
	{
		if (!GlobalFunc_620())
		{
			if (((((((((((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.5041f, -804.6584f, 179.532f, 78.74073f, 2.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.3972f, 179.2023f, 75.24073f, -809.9282f, 175.5625f, 78.74073f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.722f, 75.74073f, -806.7071f, 174.1386f, 78.74073f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.6328f, 74.65309f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.0684f, 75.24073f, -799.84f, 168.9565f, 78.74073f, 3.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.0944f, 180.6147f, 75.24073f, -816.7233f, 177.8068f, 78.86246f, 8f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.8663f, 175.5f, 75.24073f, -814.8033f, 173.923f, 78.74073f, 3.6f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7128f, 167.798f, 75.24073f, -805.5717f, 175.1913f, 78.74073f, 3f, 0, 1, 0))
			{
				GlobalFunc_619(1);
			}
		}
		else if (((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.5041f, -804.6584f, 179.532f, 78.74073f, 2.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.3972f, 179.2023f, 75.24073f, -809.9282f, 175.5625f, 78.74073f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.722f, 75.74073f, -806.7071f, 174.1386f, 78.74073f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.4128f, 184.6125f, 76.00282f, 2.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6793f, 183.0435f, 70.84778f, -816.2804f, 178.597f, 75.15309f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.5211f, 71.10547f, -795.6818f, 177.6922f, 74.83471f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.7001f, 185.8952f, 71.10547f, -800.207f, 176.4364f, 74.83471f, 4f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.318f, 71.33471f, -805.5256f, 178.1133f, 74.83471f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.6328f, 74.65309f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.0684f, 75.24073f, -799.84f, 168.9565f, 78.74073f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.0944f, 180.6147f, 75.24073f, -816.7233f, 177.8068f, 78.86246f, 8f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.8663f, 175.5f, 75.24073f, -814.8033f, 173.923f, 78.74073f, 3.6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.7128f, 167.798f, 75.24073f, -805.5717f, 175.1913f, 78.74073f, 3f, 0, 1, 0))
		{
			GlobalFunc_619(0);
		}
	}
	if (!func_438("FAM5_JROOM2"))
	{
		if (func_438("FAM5_JROOM1"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.722f, 75.74073f, -806.7071f, 174.1386f, 78.74073f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.5482f, 75.74007f, -806.509f, 166.3648f, 78.74073f, 4.5f, 0, 1, 0))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_844, 1))
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_JROOM2", 7, 0, 0, 0))
						{
							func_426("FAM5_JROOM2", 1);
						}
					}
				}
			}
		}
	}
	else if (!GlobalFunc_5672("FAM5_JROOM2"))
	{
		iLocal_1102 = 1;
	}
}

int func_546(int iParam0)//Position - 0x5A782
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("family_5_mcs_3", 1))
			{
				if (!PED::IS_PED_INJURED(Local_595))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_595, "Amanda", 1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_611))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_611, "Fabien", 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[0 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[0 /*11*/], "Michaels_YogaMat", 0, Local_1263[0 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[1 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[1 /*11*/], "Fabiens_YogaMat", 0, Local_1263[1 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[2 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[2 /*11*/], "Amandas_yogamat", 0, Local_1263[2 /*11*/].f_1, 0);
					}
				}
				GlobalFunc_8380(1, 1, 1, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_CHANGE_DOWN");
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_YOGA_MG");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REMOVE_ANIM_DICT("missfam5_yoga");
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
				if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					CAM::SET_CAM_ACTIVE(uLocal_1122, 0);
					CAM::DESTROY_CAM(uLocal_1122, 0);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				}
				CAM::DESTROY_ALL_CAMS(1);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_WETNESS_HEIGHT(PLAYER::PLAYER_PED_ID(), 2f);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_wet_walk"))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 1.5f, -1.5f, -1, 0, 0f, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (iLocal_1121 == 1)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS"))
					{
						iLocal_1121 = 0;
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
				{
					func_547(&Local_787, 0, 0, 981668463);
					if (Local_787.f_54 != 0f)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1, "blushing");
							Local_787.f_54 = 0f;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				GlobalFunc_8380(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_YOGA_TRANQUIL");
				AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1, "blushing");
				}
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("missfam5_wet_walk");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5b");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5c");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
			}
			break;
	}
	return 0;
}

void func_547(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x5AB25
{
	if (iParam1 == 1)
	{
		switch (uParam0->f_7)
		{
			case 0:
				GRAPHICS::SET_TIMECYCLE_MODIFIER("STONED_CUTSCENE");
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(uParam0->f_50);
				break;
			
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				GlobalFunc_2906(&(uParam0->f_50), uParam0->f_51, 0.0001f, 1);
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(uParam0->f_50);
				break;
		}
	}
	else
	{
		GlobalFunc_2906(&(uParam0->f_50), fParam2, fParam3, 1);
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(uParam0->f_50);
	}
}


int func_549(int iParam0)//Position - 0x5AC16
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (!CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_1122, Local_551, Local_557, fLocal_563, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_1122, Local_554, Local_560, fLocal_564, 25000, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
				CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				if (!CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
				if (CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_551, Local_557, fLocal_563, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_554, Local_560, fLocal_564, 25000, 1, 1, 2);
				}
			}
			func_595(&Local_787, 0, 0);
			if (!PED::IS_PED_INJURED(Local_595))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_595, "missfam5_yoga", "f_yogapose_c", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", "f_yogapose_c", Local_517, Local_520, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_611))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_611, "missfam5_yoga", "i_yogapose_c", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", "i_yogapose_c", Local_499, Local_502, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1263 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[iVar0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[iVar0 /*11*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_1263[iVar0 /*11*/], 1);
					}
				}
				iVar0++;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
			}
			*iParam0++;
			break;
		
		case 1:
			if (!func_438("FAM5_SUNBF"))
			{
				if (bLocal_907 == 0)
				{
					if (GlobalFunc_10630(&uLocal_936, "FAM5AUD", "FAM5_SUNBF", "FAM5_SUNBF_4", 9, 0, 0))
					{
						func_426("FAM5_SUNBF", 1);
					}
				}
				else if (GlobalFunc_10630(&uLocal_936, "FAM5AUD", "FAM5_SUNBF", "FAM5_SUNBF_3", 9, 0, 0))
				{
					func_426("FAM5_SUNBF", 1);
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		
		case 2:
			func_593(Local_595, PLAYER::PLAYER_PED_ID(), &(Local_595.f_13), &(Local_595.f_10), &(Local_595.f_9), &(Local_595.f_11), &(Local_595.f_12), 3000, 6000, 2000, 7500);
			func_593(Local_611, PLAYER::PLAYER_PED_ID(), &(Local_611.f_13), &(Local_611.f_10), &(Local_611.f_9), &(Local_611.f_11), &(Local_611.f_12), 3750, 7500, 3000, 8000);
			if (Local_787.f_7 == 4)
			{
				if (iLocal_1162 == -1)
				{
					iLocal_1162 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iLocal_1162 = -1;
			}
			func_547(&Local_787, 1, 0, 981668463);
			func_592(Local_787, iLocal_1162);
			func_590(Local_787, &iLocal_926, &iLocal_927, &iLocal_925, &iLocal_928, "FAM5_SUNIA", "FAM5_SUNIF", "FAM5_SUNPA", "FAM5_SUNPF", "FAM5_SUNE", &iLocal_929, "FAM5_SUNFB", &iLocal_930, "FAM5_SUNBC", &iLocal_931, "FAM5_SUNBTF", &iLocal_932, "FAM5_WARIN", &iLocal_933, "FAM5_WAREX", &iLocal_934, "FAM5_SUNDA", "FAM5_SUNDF", "FAM5_SUNF", 5);
			if (func_552(&Local_787, 2, 0, bLocal_907, 0, 1, 0, 0))
			{
				if (!GlobalFunc_111())
				{
					if (Local_787.f_14 == 0)
					{
						GlobalFunc_553(242);
					}
					func_595(&Local_787, 0, 0);
					func_550(&Local_1297);
					if (!PED::IS_PED_INJURED(Local_595))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_595);
						Local_595.f_13 = 0;
					}
					if (!PED::IS_PED_INJURED(Local_611))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_611);
						Local_611.f_13 = 0;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_1263 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1263[iVar0 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1263[iVar0 /*11*/]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_1263[iVar0 /*11*/], 0);
							}
						}
						iVar0++;
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
					return 1;
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_3", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", Local_595, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Fabien", Local_611, 0);
			}
			break;
	}
	return 0;
}

void func_550(int iParam0)//Position - 0x5B0DA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(iParam0[iVar0 /*3*/])->f_2 = 0;
		iVar0++;
	}
}


int func_552(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x5B175
{
	*uParam0 = PLAYER::PLAYER_PED_ID();
	uParam0->f_8 = iParam1;
	uParam0->f_11 = "missfam5_yoga";
	func_589(uParam0);
	func_588();
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
				uLocal_458 = unk_0x67D02A194A2FC2BD("yoga_buttons");
				if (MISC::IS_PC_VERSION())
				{
					uLocal_459 = unk_0x67D02A194A2FC2BD("yoga_keys");
				}
				if (func_587() && func_586())
				{
					func_585(iParam1, iParam6);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, 1);
					func_584(uParam0, 0);
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
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
				}
			}
			break;
		
		case 1:
			if (func_567(uParam0, iParam1, 3, iParam2, 1.15f, iParam3, iParam4))
			{
				uParam0->f_7 = 6;
			}
			else if (uParam0->f_9 == 6)
			{
				uParam0->f_7 = 2;
			}
			if (uParam0->f_9 != 4 && uParam0->f_9 != 5)
			{
				func_561(uParam0, iParam1);
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
			func_559(&uLocal_458);
			if (MISC::IS_PC_VERSION())
			{
				func_559(&uLocal_459);
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
			func_558(uParam0);
			uParam0->f_19 = MISC::GET_GAME_TIMER();
			uParam0->f_18 = 0;
			HUD::CLEAR_HELP(1);
			iLocal_453 = 0;
			iLocal_454 = 0;
			iLocal_455 = 0;
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
			uLocal_458 = unk_0x67D02A194A2FC2BD("yoga_buttons");
			if (MISC::IS_PC_VERSION())
			{
				uLocal_459 = unk_0x67D02A194A2FC2BD("yoga_keys");
			}
			if (func_586())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_460))
				{
					if (func_556(*uParam0, 2))
					{
						func_584(uParam0, 0);
						uParam0->f_9 = 0;
						uParam0->f_7 = 1;
					}
				}
				else if (GlobalFunc_2521(3000, uParam0->f_19))
				{
					if (!PED::IS_PED_INJURED(*uParam0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
						func_584(uParam0, 1);
						uParam0->f_19 = MISC::GET_GAME_TIMER();
						uParam0->f_7 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (func_556(*uParam0, 2))
			{
				uParam0->f_9 = 0;
				uParam0->f_7 = 1;
			}
			break;
		
		case 6:
			if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
			{
				if (func_555())
				{
					HUD::CLEAR_HELP(1);
					iLocal_453 = 0;
					iLocal_454 = 0;
					iLocal_455 = 0;
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
				func_559(&uLocal_458);
				if (MISC::IS_PC_VERSION())
				{
					func_559(&uLocal_459);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_458);
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_459);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_460))
				{
					CAM::SET_CAM_ACTIVE(uLocal_460, 0);
					CAM::DESTROY_CAM(uLocal_460, 0);
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



int func_555()//Position - 0x5B884
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

int func_556(int iParam0, int iParam1)//Position - 0x5B8D2
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


void func_558(var uParam0)//Position - 0x5B930
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

void func_559(var uParam0)//Position - 0x5BCFD
{
	iLocal_456 = 0;
	iLocal_457 = 0;
	iLocal_463 = 255;
	iLocal_464 = 255;
	iLocal_465 = 255;
	iLocal_466 = 255;
	iLocal_467 = 255;
	iLocal_468 = 255;
	func_560(&uLocal_60);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "REMOVE_BUTTONS");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
}

void func_560(var uParam0)//Position - 0x5BD43
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

void func_561(var uParam0, int iParam1)//Position - 0x5BD6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	HUD::SET_WIDESCREEN_FORMAT(1);
	if (((GRAPHICS::GET_IS_WIDESCREEN() == 0 || MISC::GET_PROFILE_SETTING(206) == 8) || MISC::GET_PROFILE_SETTING(206) == 9) || MISC::GET_PROFILE_SETTING(206) == 10)
	{
		fLocal_48 = 0.825f;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_459, fLocal_47, fLocal_48, (fLocal_49 * fLocal_51), (fLocal_50 * fLocal_51), 100, 100, 100, 255, 0);
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_458, fLocal_47, fLocal_48, (fLocal_49 * fLocal_51), (fLocal_50 * fLocal_51), 100, 100, 100, 255, 0);
		}
	}
	if (uParam0->f_9 != 3)
	{
		if (uParam0->f_16 < iLocal_52[iParam1])
		{
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				func_565(uParam0, iParam1, &uLocal_459);
			}
			else
			{
				func_565(uParam0, iParam1, &uLocal_458);
			}
		}
	}
	else if (uParam0->f_9 == 3)
	{
		iLocal_463 = 255;
		iLocal_464 = 255;
		iLocal_465 = 255;
		iLocal_466 = 255;
		iLocal_467 = 255;
		iLocal_468 = 255;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			func_564(uParam0, &uLocal_459);
		}
		else
		{
			func_564(uParam0, &uLocal_458);
		}
	}
	if (iLocal_456 == 1)
	{
		if (iLocal_457 == 0)
		{
			func_563(&uLocal_458);
			if (MISC::IS_PC_VERSION())
			{
				func_563(&uLocal_459);
			}
			iLocal_457 = 1;
		}
		if (uParam0->f_9 == 2)
		{
			HUD::GET_HUD_COLOUR(129, &iVar0, &iVar1, &iVar2, &uVar3);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				func_562(uParam0, &uLocal_459, iVar0, iVar1, iVar2);
			}
			else
			{
				func_562(uParam0, &uLocal_458, iVar0, iVar1, iVar2);
			}
		}
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_458, "REMOVE_BUTTONS");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_459, "REMOVE_BUTTONS");
		}
		func_560(&uLocal_60);
	}
}

void func_562(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5BF0F
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

void func_563(var uParam0)//Position - 0x5BFFF
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

void func_564(var uParam0, var uParam1)//Position - 0x5C0A8
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bLocal_471)
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
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_463);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_464);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_465);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_466);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_467);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_468);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_565(var uParam0, int iParam1, var uParam2)//Position - 0x5C1D7
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bLocal_471)
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
			GlobalFunc_1("STICKS_KM");
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (GlobalFunc_74("STICKS_KM"))
		{
			GlobalFunc_1("STICKS");
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_112[iParam1 /*22*/][uParam0->f_16 /*3*/][0]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_112[iParam1 /*22*/][uParam0->f_16 /*3*/][1]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_463);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_464);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_465);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_466);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_467);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_468);
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


int func_567(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)//Position - 0x5C3B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			if (func_577(uParam0, iParam1, uParam0->f_16, 0))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				func_576(uParam0, Local_63[iParam1 /*16*/][uParam0->f_16 * 2], Local_63[iParam1 /*16*/][uParam0->f_16 * 2 + 1]);
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
							if (!iLocal_453)
							{
								if (PAD::_IS_USING_KEYBOARD(2))
								{
									GlobalFunc_1("STICKS_KM");
								}
								else
								{
									GlobalFunc_1("STICKS");
								}
								iLocal_453 = 1;
								iLocal_454 = 0;
								iLocal_455 = 0;
							}
						}
					}
				}
				iLocal_456 = 0;
				iLocal_457 = 0;
			}
			break;
		
		case 1:
			if (func_577(uParam0, iParam1, uParam0->f_16, 1))
			{
				func_575(uParam0, iParam1, fParam4);
				if (func_556(*uParam0, 2))
				{
					SYSTEM::SETTIMERA(0);
					HUD::CLEAR_HELP(1);
					iLocal_456 = 1;
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
			if (func_577(uParam0, iParam1, uParam0->f_16, 1))
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
										if (!iLocal_454)
										{
											GlobalFunc_1("INHALE_NEW");
											iLocal_453 = 0;
											iLocal_454 = 1;
											iLocal_455 = 0;
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
										if (!iLocal_454)
										{
											GlobalFunc_1("INHALE_NEW");
											iLocal_453 = 0;
											iLocal_454 = 1;
											iLocal_455 = 0;
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
										if (!iLocal_454)
										{
											GlobalFunc_1("INHALE_NEW");
											iLocal_453 = 0;
											iLocal_454 = 1;
											iLocal_455 = 0;
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
									if (func_555())
									{
										HUD::CLEAR_HELP(1);
										SYSTEM::SETTIMERA(0);
										iLocal_453 = 0;
										iLocal_454 = 0;
										iLocal_455 = 0;
									}
								}
							}
						}
						if (func_574(uParam0, SYSTEM::FLOOR(uParam0->f_34), 40, 100))
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
										if (!iLocal_455)
										{
											GlobalFunc_1("EXHALE_NEW");
											iLocal_453 = 0;
											iLocal_454 = 0;
											iLocal_455 = 1;
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
						if (func_570(uParam0, SYSTEM::FLOOR(uParam0->f_33), SYSTEM::FLOOR(uParam0->f_34), 40, 100))
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
							if (uParam0->f_16 == iLocal_52[iParam1])
							{
								if (iParam3 == 0)
								{
									uParam0->f_9 = 5;
								}
								else if (iParam3 == 1)
								{
									func_576(uParam0, Local_63[iParam1 /*16*/][(iLocal_56[iParam1] - 1)], "START_POSE");
									uParam0->f_49 = 1;
									uParam0->f_9 = 4;
								}
							}
							else
							{
								uParam0->f_15 = 0;
								uParam0->f_41 = 0;
								iLocal_456 = 0;
								iLocal_457 = 0;
								uParam0->f_27 = Local_112[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0];
								uParam0->f_28 = Local_112[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1];
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
			if (func_555())
			{
				HUD::CLEAR_HELP(1);
				iLocal_453 = 0;
				iLocal_454 = 0;
				iLocal_455 = 0;
			}
			uParam0->f_31 = 1;
			uParam0->f_32 = 1;
			func_568(Local_112[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0], Local_112[iParam1 /*22*/][uParam0->f_16 /*3*/][0], Local_179[iParam1 /*22*/][uParam0->f_16 /*3*/][0], &(uParam0->f_27), 4);
			func_568(Local_112[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1], Local_112[iParam1 /*22*/][uParam0->f_16 /*3*/][1], Local_179[iParam1 /*22*/][uParam0->f_16 /*3*/][1], &(uParam0->f_28), 4);
			if (uParam0->f_27 == Local_112[iParam1 /*22*/][uParam0->f_16 /*3*/][0] && uParam0->f_28 == Local_112[iParam1 /*22*/][uParam0->f_16 /*3*/][1])
			{
				uParam0->f_9 = 0;
			}
			break;
		
		case 4:
			if (func_555())
			{
				HUD::CLEAR_HELP(1);
				iLocal_453 = 0;
				iLocal_454 = 0;
				iLocal_455 = 0;
			}
			func_575(uParam0, iParam1, fParam4);
			if (func_556(*uParam0, 2))
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

void func_568(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4)//Position - 0x5CD13
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


int func_570(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5CDE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 228) * 255f));
	iVar1 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 229) * 255f));
	if (iVar0 > 0 && iVar1 > 0)
	{
		uParam0->f_13 = GlobalFunc_254(func_572(iVar0, iVar1), iParam3, iParam4);
	}
	else
	{
		uParam0->f_13 = iParam3;
	}
	if (uParam0->f_23 == 1)
	{
		if (iParam2 == iParam3)
		{
			if (func_571(uParam0->f_13, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_571(int iParam0, int iParam1, int iParam2)//Position - 0x5CE64
{
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_572(int iParam0, int iParam1)//Position - 0x5CE83
{
	return SYSTEM::CEIL(((SYSTEM::TO_FLOAT((func_573(iParam0) + func_573(iParam1))) / 200f) * 100f));
}

int func_573(int iParam0)//Position - 0x5CEAC
{
	return SYSTEM::CEIL(((100f / 255f) * SYSTEM::TO_FLOAT(iParam0)));
}

int func_574(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5CECA
{
	int iVar0;
	int iVar1;
	
	iVar0 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 228) * 255f));
	iVar1 = SYSTEM::ROUND((PAD::GET_DISABLED_CONTROL_NORMAL(2, 229) * 255f));
	if (iVar0 > 0 && iVar1 > 0)
	{
		uParam0->f_13 = GlobalFunc_254(func_572(iVar0, iVar1), iParam2, iParam3);
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

void func_575(var uParam0, int iParam1, float fParam2)//Position - 0x5CF39
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_56[iParam1] - 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, Local_63[iParam1 /*16*/][iVar0], 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(*uParam0, uParam0->f_11, Local_63[iParam1 /*16*/][iVar0], uParam2);
		}
		iVar0++;
	}
}

void func_576(var uParam0, char* sParam1, char* sParam2)//Position - 0x5CF8D
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

int func_577(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5D00B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	fLocal_462 = 0f;
	iLocal_463 = 255;
	iLocal_464 = 255;
	iLocal_465 = 255;
	iLocal_466 = 255;
	iLocal_467 = 255;
	iLocal_468 = 255;
	iVar1 = 0;
	iVar2 = 0;
	if (func_579(&(uParam0->f_29), &(uParam0->f_31), 0, Local_112[iParam1 /*22*/][iParam2 /*3*/][0], iParam3))
	{
		fLocal_462 = (fLocal_462 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_463, &iLocal_464, &iLocal_465, &uVar0);
		iVar1 = 1;
	}
	if (func_579(&(uParam0->f_30), &(uParam0->f_32), 1, Local_112[iParam1 /*22*/][iParam2 /*3*/][1], iParam3))
	{
		fLocal_462 = (fLocal_462 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_466, &iLocal_467, &iLocal_468, &uVar0);
		iVar2 = 1;
	}
	fLocal_462 = func_578(fLocal_462, 100f);
	PAD::SET_PAD_SHAKE(0, 10, SYSTEM::FLOOR(fLocal_462));
	if (iVar1 && iVar2)
	{
		return 1;
	}
	return 0;
}

float func_578(float fParam0, float fParam1)//Position - 0x5D0EA
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

int func_579(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5D121
{
	*uParam0 = func_582(iParam2);
	*uParam1 = func_580(iParam2);
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

int func_580(int iParam0)//Position - 0x5D387
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
		if (bLocal_471)
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
			if (((PAD::_IS_USING_KEYBOARD(2) && iLocal_469 != 0) && iLocal_470 != 0) && bLocal_471 == 1)
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
			if (((PAD::_IS_USING_KEYBOARD(2) && iLocal_469 != 0) && iLocal_470 != 0) && bLocal_471 == 0)
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


int func_582(int iParam0)//Position - 0x5D53D
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
		if (bLocal_471)
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
				iVar2 = iLocal_469;
				iVar3 = iLocal_470;
			}
			iLocal_469 = iVar2;
			iLocal_470 = iVar3;
		}
		else
		{
			iVar4 = (iVar4 / 4);
			iVar5 = (iVar5 / 4);
			if (iVar4 == 0 || iVar5 == 0)
			{
				iVar4 = iLocal_469;
				iVar5 = iLocal_470;
			}
			iLocal_469 = iVar4;
			iLocal_470 = iVar5;
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


void func_584(var uParam0, int iParam1)//Position - 0x5D75C
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

void func_585(int iParam0, int iParam1)//Position - 0x5D8BC
{
	iLocal_52[0] = 3;
	iLocal_52[1] = 4;
	iLocal_52[2] = 7;
	iLocal_56[0] = 7;
	Local_63[0 /*16*/][0] = "start_to_a1";
	Local_63[0 /*16*/][1] = "a1_pose";
	Local_63[0 /*16*/][2] = "a1_to_a2";
	Local_63[0 /*16*/][3] = "a2_pose";
	Local_63[0 /*16*/][4] = "a2_to_a3";
	Local_63[0 /*16*/][5] = "a3_pose";
	Local_63[0 /*16*/][6] = "a3_to_start";
	iLocal_56[1] = 9;
	Local_63[1 /*16*/][0] = "start_to_a1";
	Local_63[1 /*16*/][1] = "a1_pose";
	Local_63[1 /*16*/][2] = "a1_to_a2";
	Local_63[1 /*16*/][3] = "a2_pose";
	Local_63[1 /*16*/][4] = "a2_to_a3";
	Local_63[1 /*16*/][5] = "a3_pose";
	Local_63[1 /*16*/][6] = "a3_to_b4";
	Local_63[1 /*16*/][7] = "b4_pose";
	Local_63[1 /*16*/][8] = "b4_to_start";
	iLocal_56[2] = 15;
	Local_63[2 /*16*/][0] = "start_to_c1";
	Local_63[2 /*16*/][1] = "c1_pose";
	Local_63[2 /*16*/][2] = "c1_to_c2";
	Local_63[2 /*16*/][3] = "c2_pose";
	Local_63[2 /*16*/][4] = "c2_to_c3";
	Local_63[2 /*16*/][5] = "c3_pose";
	Local_63[2 /*16*/][6] = "c3_to_c4";
	Local_63[2 /*16*/][7] = "c4_pose";
	Local_63[2 /*16*/][8] = "c4_to_c5";
	Local_63[2 /*16*/][9] = "c5_pose";
	Local_63[2 /*16*/][10] = "c5_to_c6";
	Local_63[2 /*16*/][11] = "c6_pose";
	Local_63[2 /*16*/][12] = "c6_to_c7";
	Local_63[2 /*16*/][13] = "c7_pose";
	Local_63[2 /*16*/][14] = "c7_to_start";
	Local_112[0 /*22*/][0 /*3*/][0] = 180;
	Local_112[0 /*22*/][0 /*3*/][1] = 180;
	Local_179[0 /*22*/][0 /*3*/][0] = 0;
	Local_179[0 /*22*/][0 /*3*/][1] = 0;
	Local_112[0 /*22*/][1 /*3*/][0] = 270;
	Local_112[0 /*22*/][1 /*3*/][1] = 90;
	Local_179[0 /*22*/][1 /*3*/][0] = 0;
	Local_179[0 /*22*/][1 /*3*/][1] = 1;
	Local_112[0 /*22*/][2 /*3*/][0] = 315;
	Local_112[0 /*22*/][2 /*3*/][1] = 135;
	Local_179[0 /*22*/][2 /*3*/][0] = 0;
	Local_179[0 /*22*/][2 /*3*/][1] = 0;
	Local_112[1 /*22*/][0 /*3*/][0] = 225;
	Local_112[1 /*22*/][0 /*3*/][1] = 135;
	Local_179[1 /*22*/][0 /*3*/][0] = 0;
	Local_179[1 /*22*/][0 /*3*/][1] = 0;
	Local_112[1 /*22*/][1 /*3*/][0] = 315;
	Local_112[1 /*22*/][1 /*3*/][1] = 45;
	Local_179[1 /*22*/][1 /*3*/][0] = 0;
	Local_179[1 /*22*/][1 /*3*/][1] = 1;
	Local_112[1 /*22*/][2 /*3*/][0] = 270;
	Local_112[1 /*22*/][2 /*3*/][1] = 135;
	Local_179[1 /*22*/][2 /*3*/][0] = 1;
	Local_179[1 /*22*/][2 /*3*/][1] = 0;
	Local_112[1 /*22*/][3 /*3*/][0] = 225;
	Local_112[1 /*22*/][3 /*3*/][1] = 0;
	Local_179[1 /*22*/][3 /*3*/][0] = 1;
	Local_179[1 /*22*/][3 /*3*/][1] = 1;
	Local_112[2 /*22*/][0 /*3*/][0] = 270;
	Local_112[2 /*22*/][0 /*3*/][1] = 90;
	Local_179[2 /*22*/][0 /*3*/][0] = 0;
	Local_179[2 /*22*/][0 /*3*/][1] = 0;
	Local_112[2 /*22*/][1 /*3*/][0] = 180;
	Local_112[2 /*22*/][1 /*3*/][1] = 180;
	Local_179[2 /*22*/][1 /*3*/][0] = 1;
	Local_179[2 /*22*/][1 /*3*/][1] = 0;
	Local_112[2 /*22*/][2 /*3*/][0] = 225;
	Local_112[2 /*22*/][2 /*3*/][1] = 135;
	Local_179[2 /*22*/][2 /*3*/][0] = 0;
	Local_179[2 /*22*/][2 /*3*/][1] = 1;
	Local_112[2 /*22*/][3 /*3*/][0] = 180;
	Local_112[2 /*22*/][3 /*3*/][1] = 180;
	Local_179[2 /*22*/][3 /*3*/][0] = 1;
	Local_179[2 /*22*/][3 /*3*/][1] = 0;
	Local_112[2 /*22*/][4 /*3*/][0] = 0;
	Local_112[2 /*22*/][4 /*3*/][1] = 0;
	Local_179[2 /*22*/][4 /*3*/][0] = 0;
	Local_179[2 /*22*/][4 /*3*/][1] = 1;
	Local_112[2 /*22*/][5 /*3*/][0] = 225;
	Local_112[2 /*22*/][5 /*3*/][1] = 135;
	Local_179[2 /*22*/][5 /*3*/][0] = 1;
	Local_179[2 /*22*/][5 /*3*/][1] = 0;
	Local_112[2 /*22*/][6 /*3*/][0] = 45;
	Local_112[2 /*22*/][6 /*3*/][1] = 315;
	Local_179[2 /*22*/][6 /*3*/][0] = 0;
	Local_179[2 /*22*/][6 /*3*/][1] = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Local_263[0 /*7*/][0 /*3*/] = { -788.3289f, 187.7899f, 72.75751f };
					Local_320[0 /*7*/][0 /*3*/] = { -2.995436f, 0.021138f, 119.4073f };
					Local_377[0 /*3*/][0] = 38.84372f;
					Local_263[0 /*7*/][1 /*3*/] = { -788.3289f, 187.7899f, 72.75751f };
					Local_320[0 /*7*/][1 /*3*/] = { -2.995436f, 0.021138f, 119.4073f };
					Local_377[0 /*3*/][1] = 38.84372f;
					iLocal_411[0] = 0;
					Local_420[0 /*4*/][0] = 0;
					Local_420[0 /*4*/][1] = 0;
					Local_420[0 /*4*/][2] = 0;
					Local_263[1 /*7*/][0 /*3*/] = { -777.0726f, 178.2583f, 73.16133f };
					Local_320[1 /*7*/][0 /*3*/] = { 0.894393f, 0.026403f, 59.98003f };
					Local_377[1 /*3*/][0] = 38.4725f;
					Local_263[1 /*7*/][1 /*3*/] = { -777.0726f, 178.2583f, 73.16133f };
					Local_320[1 /*7*/][1 /*3*/] = { 0.894393f, 0.026403f, 59.98003f };
					Local_377[1 /*3*/][1] = 38.4725f;
					iLocal_411[1] = 0;
					Local_420[1 /*4*/][0] = 0;
					Local_420[1 /*4*/][1] = 0;
					Local_420[1 /*4*/][2] = 0;
					Local_263[2 /*7*/][0 /*3*/] = { -789.1757f, 189.2423f, 72.39192f };
					Local_320[2 /*7*/][0 /*3*/] = { 7.114471f, 0.02728f, 162.3243f };
					Local_377[2 /*3*/][0] = 39.13688f;
					Local_263[2 /*7*/][1 /*3*/] = { -789.1757f, 189.2423f, 72.39192f };
					Local_320[2 /*7*/][1 /*3*/] = { 7.114471f, 0.02728f, 162.3243f };
					Local_377[2 /*3*/][1] = 39.13688f;
					iLocal_411[2] = 0;
					Local_420[2 /*4*/][0] = 1;
					Local_420[2 /*4*/][1] = 0;
					Local_420[2 /*4*/][2] = 1;
					Local_263[3 /*7*/][0 /*3*/] = { -789.8099f, 186.5717f, 73.31319f };
					Local_320[3 /*7*/][0 /*3*/] = { -4.724632f, -0.029824f, 123.2596f };
					Local_377[3 /*3*/][0] = 36.66097f;
					Local_263[3 /*7*/][1 /*3*/] = { -789.8099f, 186.5717f, 73.31319f };
					Local_320[3 /*7*/][1 /*3*/] = { 2.853551f, -0.029824f, 107.2391f };
					Local_377[3 /*3*/][1] = 36.66097f;
					iLocal_402[3] = 2500;
					iLocal_411[3] = 0;
					Local_420[3 /*4*/][0] = 1;
					Local_420[3 /*4*/][1] = 1;
					Local_420[3 /*4*/][2] = 1;
					break;
				
				case 1:
					Local_263[0 /*7*/][0 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_320[0 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_377[0 /*3*/][0] = 39.35555f;
					Local_263[0 /*7*/][1 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_320[0 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_377[0 /*3*/][1] = 39.35555f;
					iLocal_411[0] = 0;
					Local_420[0 /*4*/][0] = 0;
					Local_420[0 /*4*/][1] = 0;
					Local_420[0 /*4*/][2] = 0;
					Local_263[1 /*7*/][0 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_320[1 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_377[1 /*3*/][0] = 39.35555f;
					Local_263[1 /*7*/][1 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_320[1 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_377[1 /*3*/][1] = 39.35555f;
					iLocal_411[1] = 0;
					Local_420[1 /*4*/][0] = 0;
					Local_420[1 /*4*/][1] = 0;
					Local_420[1 /*4*/][2] = 0;
					Local_263[2 /*7*/][0 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_320[2 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_377[2 /*3*/][0] = 39.35555f;
					Local_263[2 /*7*/][1 /*3*/] = { 2863.545f, 5942.737f, 357.6342f };
					Local_320[2 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.30919f };
					Local_377[2 /*3*/][1] = 39.35555f;
					iLocal_411[2] = 0;
					Local_420[2 /*4*/][0] = 1;
					Local_420[2 /*4*/][1] = 0;
					Local_420[2 /*4*/][2] = 1;
					Local_263[3 /*7*/][0 /*3*/] = { 2863.847f, 5945.488f, 357.8748f };
					Local_320[3 /*7*/][0 /*3*/] = { 8.808952f, 0.000863f, 79.57675f };
					Local_377[3 /*3*/][0] = 39.35555f;
					Local_263[3 /*7*/][1 /*3*/] = { 2863.368f, 5945.402f, 357.9596f };
					Local_320[3 /*7*/][1 /*3*/] = { 14.60808f, 0.000863f, 76.6072f };
					Local_377[3 /*3*/][1] = 39.35555f;
					iLocal_402[3] = 3500;
					iLocal_411[3] = 0;
					Local_420[3 /*4*/][0] = 1;
					Local_420[3 /*4*/][1] = 1;
					Local_420[3 /*4*/][2] = 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					Local_263[0 /*7*/][0 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_320[0 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_377[0 /*3*/][0] = 39.35555f;
					Local_263[0 /*7*/][1 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_320[0 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_377[0 /*3*/][1] = 39.35555f;
					iLocal_411[0] = 0;
					Local_420[0 /*4*/][0] = 1;
					Local_420[0 /*4*/][1] = 0;
					Local_420[0 /*4*/][2] = 0;
					Local_263[1 /*7*/][0 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_320[1 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_377[1 /*3*/][0] = 39.35555f;
					Local_263[1 /*7*/][1 /*3*/] = { -780.2706f, 181.499f, 72.13419f };
					Local_320[1 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.08578f };
					Local_377[1 /*3*/][1] = 39.35555f;
					iLocal_411[1] = 0;
					Local_420[1 /*4*/][0] = 1;
					Local_420[1 /*4*/][1] = 0;
					Local_420[1 /*4*/][2] = 1;
					Local_263[2 /*7*/][0 /*3*/] = { -788.8512f, 184.0266f, 72.53404f };
					Local_320[2 /*7*/][0 /*3*/] = { 4.066512f, -0.006667f, 50.29233f };
					Local_377[2 /*3*/][0] = 35.45877f;
					Local_263[2 /*7*/][1 /*3*/] = { -788.8512f, 184.0266f, 72.53404f };
					Local_320[2 /*7*/][1 /*3*/] = { 4.066512f, -0.006667f, 50.29233f };
					Local_377[2 /*3*/][1] = 35.45877f;
					iLocal_411[2] = 1500;
					Local_420[2 /*4*/][0] = 1;
					Local_420[2 /*4*/][1] = 0;
					Local_420[2 /*4*/][2] = 1;
					Local_263[3 /*7*/][0 /*3*/] = { -789.0597f, 187.8396f, 72.44362f };
					Local_320[3 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_377[3 /*3*/][0] = 38.76796f;
					Local_263[3 /*7*/][1 /*3*/] = { -789.0597f, 187.8396f, 72.44362f };
					Local_320[3 /*7*/][1 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_377[3 /*3*/][1] = 38.76796f;
					iLocal_411[3] = 1500;
					Local_420[3 /*4*/][0] = 1;
					Local_420[3 /*4*/][1] = 0;
					Local_420[3 /*4*/][2] = 1;
					Local_263[4 /*7*/][0 /*3*/] = { -789.0597f, 187.8396f, 72.44362f };
					Local_320[4 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_377[4 /*3*/][0] = 38.76796f;
					Local_263[4 /*7*/][1 /*3*/] = { -790.0527f, 187.8779f, 73.24776f };
					Local_320[4 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.7771f };
					Local_377[4 /*3*/][1] = 39.35555f;
					iLocal_402[4] = 5000;
					iLocal_411[4] = 0;
					Local_420[4 /*4*/][0] = 1;
					Local_420[4 /*4*/][1] = 1;
					Local_420[4 /*4*/][2] = 1;
					break;
				
				case 1:
					Local_263[0 /*7*/][0 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_320[0 /*7*/][0 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_377[0 /*3*/][0] = 39.35555f;
					Local_263[0 /*7*/][1 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_320[0 /*7*/][1 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_377[0 /*3*/][1] = 39.35555f;
					iLocal_411[0] = 0;
					Local_420[0 /*4*/][0] = 1;
					Local_420[0 /*4*/][1] = 0;
					Local_420[0 /*4*/][2] = 0;
					Local_263[1 /*7*/][0 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_320[1 /*7*/][0 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_377[1 /*3*/][0] = 39.35555f;
					Local_263[1 /*7*/][1 /*3*/] = { 2864.709f, 5941.522f, 357.4413f };
					Local_320[1 /*7*/][1 /*3*/] = { 12.51869f, 0.000864f, 32.2424f };
					Local_377[1 /*3*/][1] = 39.35555f;
					iLocal_411[1] = 0;
					Local_420[1 /*4*/][0] = 1;
					Local_420[1 /*4*/][1] = 0;
					Local_420[1 /*4*/][2] = 1;
					Local_263[2 /*7*/][0 /*3*/] = { 2867.482f, 5947.726f, 358.184f };
					Local_320[2 /*7*/][0 /*3*/] = { 2.762805f, -0.036948f, 111.4235f };
					Local_377[2 /*3*/][0] = 39.35555f;
					Local_263[2 /*7*/][1 /*3*/] = { 2867.482f, 5947.726f, 358.184f };
					Local_320[2 /*7*/][1 /*3*/] = { 2.762805f, -0.036948f, 111.4235f };
					Local_377[2 /*3*/][1] = 39.35555f;
					iLocal_411[2] = 1500;
					Local_420[2 /*4*/][0] = 1;
					Local_420[2 /*4*/][1] = 0;
					Local_420[2 /*4*/][2] = 1;
					Local_263[3 /*7*/][0 /*3*/] = { 2863.663f, 5943.965f, 357.336f };
					Local_320[3 /*7*/][0 /*3*/] = { 12.7507f, 0.011422f, 62.85451f };
					Local_377[3 /*3*/][0] = 39.35555f;
					Local_263[3 /*7*/][1 /*3*/] = { 2863.663f, 5943.965f, 357.336f };
					Local_320[3 /*7*/][1 /*3*/] = { 12.7507f, 0.011422f, 62.85451f };
					Local_377[3 /*3*/][1] = 39.35555f;
					iLocal_411[3] = 1500;
					Local_420[3 /*4*/][0] = 1;
					Local_420[3 /*4*/][1] = 0;
					Local_420[3 /*4*/][2] = 1;
					Local_263[4 /*7*/][0 /*3*/] = { 2863.663f, 5943.965f, 357.336f };
					Local_320[4 /*7*/][0 /*3*/] = { 12.7507f, 0.011422f, 62.85451f };
					Local_377[4 /*3*/][0] = 39.35555f;
					Local_263[4 /*7*/][1 /*3*/] = { 2863.341f, 5944.931f, 357.7342f };
					Local_320[4 /*7*/][1 /*3*/] = { 19.264f, -0.043584f, 59.65453f };
					Local_377[4 /*3*/][1] = 39.35555f;
					iLocal_402[4] = 5000;
					iLocal_411[4] = 0;
					Local_420[4 /*4*/][0] = 1;
					Local_420[4 /*4*/][1] = 1;
					Local_420[4 /*4*/][2] = 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					Local_263[0 /*7*/][0 /*3*/] = { -790.0527f, 187.8779f, 73.24776f };
					Local_320[0 /*7*/][0 /*3*/] = { -0.7329f, -0.070113f, 153.7771f };
					Local_377[0 /*3*/][0] = 39.35555f;
					Local_263[0 /*7*/][1 /*3*/] = { -790.0527f, 187.8779f, 73.24776f };
					Local_320[0 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.7771f };
					Local_377[0 /*3*/][1] = 39.35555f;
					iLocal_411[0] = 0;
					Local_420[0 /*4*/][0] = 0;
					Local_420[0 /*4*/][1] = 0;
					Local_420[0 /*4*/][2] = 1;
					Local_263[1 /*7*/][0 /*3*/] = { -789.2074f, 185.4831f, 71.91133f };
					Local_320[1 /*7*/][0 /*3*/] = { 25.59699f, -0.035805f, 57.89385f };
					Local_377[1 /*3*/][0] = 38.16418f;
					Local_263[1 /*7*/][1 /*3*/] = { -789.2074f, 185.4831f, 71.91133f };
					Local_320[1 /*7*/][1 /*3*/] = { 25.59699f, -0.035805f, 57.89385f };
					Local_377[1 /*3*/][1] = 38.16418f;
					iLocal_411[1] = 0;
					Local_420[1 /*4*/][0] = 1;
					Local_420[1 /*4*/][1] = 0;
					Local_420[1 /*4*/][2] = 1;
					Local_263[2 /*7*/][0 /*3*/] = { -788.8375f, 183.6241f, 71.95374f };
					Local_320[2 /*7*/][0 /*3*/] = { 10.65726f, -0.03214f, 28.32474f };
					Local_377[2 /*3*/][0] = 39.14109f;
					Local_263[2 /*7*/][1 /*3*/] = { -788.8375f, 183.6241f, 71.95374f };
					Local_320[2 /*7*/][1 /*3*/] = { 10.65726f, -0.03214f, 28.32474f };
					Local_377[2 /*3*/][1] = 39.14109f;
					iLocal_411[2] = 1500;
					Local_420[2 /*4*/][0] = 1;
					Local_420[2 /*4*/][1] = 0;
					Local_420[2 /*4*/][2] = 1;
					Local_263[3 /*7*/][0 /*3*/] = { -788.9983f, 186.1042f, 72.04494f };
					Local_320[3 /*7*/][0 /*3*/] = { 5.022902f, -0.035508f, 79.21545f };
					Local_377[3 /*3*/][0] = 29.57394f;
					Local_263[3 /*7*/][1 /*3*/] = { -788.9983f, 186.1042f, 72.04494f };
					Local_320[3 /*7*/][1 /*3*/] = { 5.022902f, -0.035508f, 79.21545f };
					Local_377[3 /*3*/][1] = 29.57394f;
					iLocal_411[3] = 1500;
					Local_420[3 /*4*/][0] = 1;
					Local_420[3 /*4*/][1] = 0;
					Local_420[3 /*4*/][2] = 1;
					Local_263[4 /*7*/][0 /*3*/] = { -790.5131f, 188.4684f, 71.985f };
					Local_320[4 /*7*/][0 /*3*/] = { 10.31376f, -0.036726f, 167.2497f };
					Local_377[4 /*3*/][0] = 31.38586f;
					Local_263[4 /*7*/][1 /*3*/] = { -790.5131f, 188.4684f, 71.985f };
					Local_320[4 /*7*/][1 /*3*/] = { 10.31376f, -0.036726f, 167.2497f };
					Local_377[4 /*3*/][1] = 31.38586f;
					iLocal_411[4] = 1500;
					Local_420[4 /*4*/][0] = 1;
					Local_420[4 /*4*/][1] = 0;
					Local_420[4 /*4*/][2] = 1;
					Local_263[5 /*7*/][0 /*3*/] = { -786.6319f, 188.015f, 72.13353f };
					Local_320[5 /*7*/][0 /*3*/] = { 4.104248f, -0.02012f, 115.9409f };
					Local_377[5 /*3*/][0] = 38.67459f;
					Local_263[5 /*7*/][1 /*3*/] = { -787.8416f, 187.6716f, 72.22159f };
					Local_320[5 /*7*/][1 /*3*/] = { 4.104248f, -0.02012f, 118.8476f };
					Local_377[5 /*3*/][1] = 38.67459f;
					iLocal_402[5] = 25000;
					iLocal_411[5] = 1500;
					Local_420[5 /*4*/][0] = 1;
					Local_420[5 /*4*/][1] = 1;
					Local_420[5 /*4*/][2] = 1;
					Local_263[6 /*7*/][0 /*3*/] = { -787.4744f, 188.1071f, 72.18631f };
					Local_320[6 /*7*/][0 /*3*/] = { 4.013949f, 0.013702f, 116.1093f };
					Local_377[6 /*3*/][0] = 38.67459f;
					Local_263[6 /*7*/][1 /*3*/] = { -787.4744f, 188.1071f, 72.18631f };
					Local_320[6 /*7*/][1 /*3*/] = { 4.013949f, 0.013702f, 116.1093f };
					Local_377[6 /*3*/][1] = 38.67459f;
					iLocal_411[6] = 1500;
					Local_420[6 /*4*/][0] = 0;
					Local_420[6 /*4*/][1] = 0;
					Local_420[6 /*4*/][2] = 1;
					Local_263[7 /*7*/][0 /*3*/] = { -788.8564f, 186.7466f, 72.63398f };
					Local_320[7 /*7*/][0 /*3*/] = { 2.036967f, 0.013663f, 104.2461f };
					Local_377[7 /*3*/][0] = 38.67459f;
					Local_263[7 /*7*/][1 /*3*/] = { -788.8564f, 186.7466f, 72.63398f };
					Local_320[7 /*7*/][1 /*3*/] = { 13.55391f, 0.013663f, 104.2461f };
					Local_377[7 /*3*/][1] = 38.67459f;
					iLocal_402[7] = 3000;
					iLocal_411[7] = 1500;
					Local_420[7 /*4*/][0] = 1;
					Local_420[7 /*4*/][1] = 1;
					Local_420[7 /*4*/][2] = 1;
					break;
				
				case 1:
					Local_263[0 /*7*/][0 /*3*/] = { 2863.341f, 5944.931f, 357.7342f };
					Local_320[0 /*7*/][0 /*3*/] = { 19.264f, -0.043584f, 59.65453f };
					Local_377[0 /*3*/][0] = 39.35555f;
					Local_263[0 /*7*/][1 /*3*/] = { 2863.341f, 5944.931f, 357.7342f };
					Local_320[0 /*7*/][1 /*3*/] = { 19.264f, -0.043584f, 59.65453f };
					Local_377[0 /*3*/][1] = 39.35555f;
					iLocal_411[0] = 0;
					Local_420[0 /*4*/][0] = 0;
					Local_420[0 /*4*/][1] = 0;
					Local_420[0 /*4*/][2] = 1;
					Local_263[1 /*7*/][0 /*3*/] = { 2864.401f, 5936.752f, 358.6488f };
					Local_320[1 /*7*/][0 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_377[1 /*3*/][0] = 39.35555f;
					Local_263[1 /*7*/][1 /*3*/] = { 2864.401f, 5936.752f, 358.6488f };
					Local_320[1 /*7*/][1 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_377[1 /*3*/][1] = 39.35555f;
					iLocal_411[1] = 0;
					Local_420[1 /*4*/][0] = 1;
					Local_420[1 /*4*/][1] = 0;
					Local_420[1 /*4*/][2] = 1;
					Local_263[2 /*7*/][0 /*3*/] = { 2862.146f, 5943.193f, 357.363f };
					Local_320[2 /*7*/][0 /*3*/] = { 9.662308f, -0.009141f, 12.36575f };
					Local_377[2 /*3*/][0] = 39.35554f;
					Local_263[2 /*7*/][1 /*3*/] = { 2862.146f, 5943.193f, 357.363f };
					Local_320[2 /*7*/][1 /*3*/] = { 9.662308f, -0.009141f, 12.36575f };
					Local_377[2 /*3*/][1] = 39.35554f;
					iLocal_411[2] = 1500;
					Local_420[2 /*4*/][0] = 1;
					Local_420[2 /*4*/][1] = 0;
					Local_420[2 /*4*/][2] = 1;
					Local_263[3 /*7*/][0 /*3*/] = { 2863.213f, 5945.368f, 357.2806f };
					Local_320[3 /*7*/][0 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_377[3 /*3*/][0] = 39.35555f;
					Local_263[3 /*7*/][1 /*3*/] = { 2863.213f, 5945.368f, 357.2806f };
					Local_320[3 /*7*/][1 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_377[3 /*3*/][1] = 39.35555f;
					iLocal_411[3] = 1500;
					Local_420[3 /*4*/][0] = 1;
					Local_420[3 /*4*/][1] = 0;
					Local_420[3 /*4*/][2] = 1;
					Local_263[4 /*7*/][0 /*3*/] = { 2859.712f, 5949.607f, 357.3627f };
					Local_320[4 /*7*/][0 /*3*/] = { 10.39483f, -0.009141f, -152.2325f };
					Local_377[4 /*3*/][0] = 39.35555f;
					Local_263[4 /*7*/][1 /*3*/] = { 2859.712f, 5949.607f, 357.3627f };
					Local_320[4 /*7*/][1 /*3*/] = { 10.39483f, -0.009141f, -152.2325f };
					Local_377[4 /*3*/][1] = 39.35555f;
					iLocal_411[4] = 1500;
					Local_420[4 /*4*/][0] = 1;
					Local_420[4 /*4*/][1] = 0;
					Local_420[4 /*4*/][2] = 1;
					Local_263[5 /*7*/][0 /*3*/] = { 2870.432f, 5948.134f, 357.5579f };
					Local_320[5 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_377[5 /*3*/][0] = 39.35555f;
					Local_263[5 /*7*/][1 /*3*/] = { 2868.032f, 5947.472f, 357.7983f };
					Local_320[5 /*7*/][1 /*3*/] = { 6.054419f, 0.025583f, 108.7951f };
					Local_377[5 /*3*/][1] = 39.35555f;
					iLocal_402[5] = 25000;
					iLocal_411[5] = 1500;
					Local_420[5 /*4*/][0] = 1;
					Local_420[5 /*4*/][1] = 1;
					Local_420[5 /*4*/][2] = 1;
					Local_263[6 /*7*/][0 /*3*/] = { 2870.432f, 5948.134f, 357.5579f };
					Local_320[6 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_377[6 /*3*/][0] = 39.35555f;
					Local_263[6 /*7*/][1 /*3*/] = { 2870.432f, 5948.134f, 357.5579f };
					Local_320[6 /*7*/][1 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_377[6 /*3*/][1] = 39.35555f;
					iLocal_411[6] = 1500;
					Local_420[6 /*4*/][0] = 0;
					Local_420[6 /*4*/][1] = 0;
					Local_420[6 /*4*/][2] = 1;
					Local_263[7 /*7*/][0 /*3*/] = { 2863.629f, 5945.854f, 357.8456f };
					Local_320[7 /*7*/][0 /*3*/] = { 8.768853f, -0.026652f, 91.79684f };
					Local_377[7 /*3*/][0] = 39.35555f;
					Local_263[7 /*7*/][1 /*3*/] = { 2863.185f, 5946.305f, 358.1777f };
					Local_320[7 /*7*/][1 /*3*/] = { 8.00841f, -0.026652f, 105.2827f };
					Local_377[7 /*3*/][1] = 39.35555f;
					iLocal_402[7] = 3000;
					iLocal_411[7] = 0;
					Local_420[7 /*4*/][0] = 1;
					Local_420[7 /*4*/][1] = 1;
					Local_420[7 /*4*/][2] = 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			Local_246[0 /*3*/] = { -790.5889f, 186.5645f, 72.96992f };
			Local_253[0 /*3*/] = { -1.638374f, 0.042595f, -117.008f };
			fLocal_260[0] = 31.15711f;
			Local_246[1 /*3*/] = { -791.5944f, 188.7587f, 72.86561f };
			Local_253[1 /*3*/] = { 0.094575f, 0.05061f, -126.9435f };
			fLocal_260[1] = 28.4133f;
			break;
		
		case 1:
			Local_246[0 /*3*/] = { -789.1567f, 189.3443f, 72.05231f };
			Local_253[0 /*3*/] = { 12.43715f, -0.037231f, -164.0746f };
			fLocal_260[0] = 19.24769f;
			Local_246[1 /*3*/] = { -789.3468f, 185.2617f, 72.0984f };
			Local_253[1 /*3*/] = { 11.94678f, -0.005908f, 19.56699f };
			fLocal_260[1] = 23.4548f;
			break;
		
		case 2:
			Local_246[0 /*3*/] = { -790.5217f, 187.2879f, 73.18652f };
			Local_253[0 /*3*/] = { -0.678966f, -0.045711f, -139.5517f };
			fLocal_260[0] = 28.09401f;
			Local_246[1 /*3*/] = { -790.4249f, 186.1531f, 73.24126f };
			Local_253[1 /*3*/] = { -0.614909f, 0.001498f, -30.89652f };
			fLocal_260[1] = 32.06593f;
			break;
	}
}

int func_586()//Position - 0x5F5F5
{
	if (MISC::IS_PC_VERSION())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_458) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_459))
		{
			return 1;
		}
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_458))
	{
		return 1;
	}
	return 0;
}

int func_587()//Position - 0x5F630
{
	STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
	HUD::REQUEST_ADDITIONAL_TEXT("YOGA", 3);
	if (((STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga") && HUD::HAS_ADDITIONAL_TEXT_LOADED(3)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_01", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_02", 0))
	{
		return 1;
	}
	return 0;
}

void func_588()//Position - 0x5F684
{
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 223))
	{
		if (bLocal_471 == 1)
		{
			bLocal_471 = false;
		}
		else
		{
			bLocal_471 = true;
		}
		iLocal_469 = 0;
		iLocal_470 = 0;
	}
}

void func_589(var uParam0)//Position - 0x5F6BC
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

void func_590(struct<46> Param0, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, int iParam57, int iParam58, int iParam59, int iParam60, char* sParam61, char* sParam62, char* sParam63, char* sParam64, char* sParam65, int iParam66, char* sParam67, int iParam68, char* sParam69, int iParam70, char* sParam71, int iParam72, char* sParam73, int iParam74, char* sParam75, int iParam76, char* sParam77, char* sParam78, char* sParam79, int iParam80)//Position - 0x5F87B
{
	switch (Param0.f_7)
	{
		case 0:
			*iParam59 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			*iParam76 = 0;
			if (*iParam57 == Param0.f_16)
			{
				if (Param0.f_9 == 0)
				{
					*iParam66 = 0;
					*iParam68 = 0;
					*iParam70 = 0;
					if (*iParam60 != Param0.f_14)
					{
						if (!func_438(sParam65))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam65, 7, 0, 0, 0))
								{
									func_426(sParam65, 1);
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						else if (!GlobalFunc_5672(sParam65))
						{
							func_426(sParam65, 0);
							*iParam60 = Param0.f_14;
							*iParam59 = MISC::GET_GAME_TIMER();
						}
					}
					if (!func_438(sParam61) || !func_438(sParam62))
					{
						if (GlobalFunc_2521(12500, *iParam59))
						{
							if (!GlobalFunc_111())
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam61, 7, 0, 0, 0))
										{
											func_426(sParam61, 1);
											func_426(sParam62, 1);
										}
										break;
									
									case 1:
										if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam62, 7, 0, 0, 0))
										{
											func_426(sParam61, 1);
											func_426(sParam62, 1);
										}
										break;
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
					}
					else if (!GlobalFunc_5672(sParam61) && !GlobalFunc_5672(sParam62))
					{
						func_426(sParam61, 0);
						func_426(sParam62, 0);
						*iParam59 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					*iParam59 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				*iParam66 = 0;
				*iParam58 = Param0.f_15;
				if (!func_438(sParam63) || !func_438(sParam64))
				{
					if (!GlobalFunc_111())
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam63, 7, 0, 0, 0))
								{
									func_426(sParam63, 1);
									func_426(sParam64, 1);
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam64, 7, 0, 0, 0))
								{
									func_426(sParam63, 1);
									func_426(sParam64, 1);
								}
								break;
						}
					}
					else
					{
						GlobalFunc_5105();
					}
				}
				else if (!GlobalFunc_5672(sParam63) && !GlobalFunc_5672(sParam63))
				{
					func_426(sParam63, 0);
					func_426(sParam63, 0);
					*iParam57 = Param0.f_16;
					*iParam59 = MISC::GET_GAME_TIMER();
				}
			}
			switch (Param0.f_9)
			{
				case 2:
					if (*iParam58 != Param0.f_15)
					{
						*iParam68 = 0;
						*iParam70 = 0;
						*iParam58 = Param0.f_15;
					}
					if (*iParam66 == 0)
					{
						if (!func_438(sParam67))
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam67, 7, 0, 0, 0))
								{
									func_426(sParam67, 1);
									*iParam66 = 1;
								}
							}
							else
							{
								GlobalFunc_5105();
							}
						}
						else if (!GlobalFunc_5672(sParam67))
						{
							func_426(sParam67, 0);
						}
					}
					if (*iParam68 == 0)
					{
						if (Param0.f_37 == 1 && Param0.f_38 == 1)
						{
							if (!func_438(sParam69))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam69, 7, 0, 0, 0))
									{
										func_426(sParam69, 1);
										*iParam68 = 1;
									}
								}
								else
								{
									GlobalFunc_5105();
								}
							}
							else if (!GlobalFunc_5672(sParam69))
							{
								func_426(sParam69, 0);
							}
						}
					}
					if (*iParam70 == 0)
					{
						if (Param0.f_44 == 1 || Param0.f_45 == 1)
						{
							if (!func_438(sParam71))
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam71, 7, 0, 0, 0))
									{
										func_426(sParam71, 1);
										*iParam70 = 1;
									}
								}
								else
								{
									GlobalFunc_5105();
								}
							}
							else if (!GlobalFunc_5672(sParam71))
							{
								func_426(sParam71, 0);
							}
						}
					}
					switch (Param0.f_10)
					{
						case 0:
							*iParam74 = 0;
							if (Param0.f_22 == 0)
							{
								if (*iParam72 == 0)
								{
									if (!func_438(sParam73))
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", GlobalFunc_1078(GlobalFunc_745(), sParam73, "FAM5_YOIA"), 7, 0, 0, 0))
											{
												func_426(sParam73, 1);
												*iParam72 = 1;
											}
										}
										else
										{
											GlobalFunc_5105();
										}
									}
									else if (!GlobalFunc_5672(sParam73))
									{
										func_426(sParam73, 0);
									}
								}
							}
							else
							{
								*iParam72 = 1;
							}
							break;
						
						case 1:
							*iParam72 = 0;
							*iParam68 = 0;
							if (Param0.f_23 == 0)
							{
								if (*iParam74 == 0)
								{
									if (!func_438(sParam75))
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", GlobalFunc_1078(GlobalFunc_745(), sParam75, "FAM5_YOEA"), 7, 0, 0, 0))
											{
												func_426(sParam75, 1);
												*iParam74 = 1;
											}
										}
										else
										{
											GlobalFunc_5105();
										}
									}
									else if (!GlobalFunc_5672(sParam75))
									{
										func_426(sParam75, 0);
									}
								}
							}
							else
							{
								*iParam74 = 1;
							}
							break;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			*iParam74 = 0;
			*iParam72 = 0;
			*iParam76 = 0;
			*iParam66 = 0;
			*iParam68 = 0;
			*iParam70 = 0;
			if (Param0.f_12 == 1)
			{
				*iParam59 = MISC::GET_GAME_TIMER();
				*iParam57 = Param0.f_16;
				*iParam58 = Param0.f_15;
				func_426(sParam77, 0);
				func_426(sParam78, 0);
				if (!func_438(sParam79))
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_1161 >= iParam80)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Param0))
							{
								if (AUDIO::HAS_SOUND_FINISHED(Param0.f_26))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
									{
										case 0:
											GlobalFunc_5122(Param0, "GENERIC_CURSE_MED", 6);
											break;
									}
									func_426(sParam79, 1);
								}
							}
						}
						else if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam79, 7, 0, 0, 0))
						{
							iLocal_1161++;
							func_426(sParam79, 1);
						}
					}
					else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Param0))
					{
						GlobalFunc_4956();
					}
					else
					{
						GlobalFunc_5105();
					}
				}
				else if (!GlobalFunc_5672(sParam79))
				{
					func_426(sParam79, 0);
				}
			}
			break;
		
		case 4:
		case 5:
			*iParam74 = 0;
			*iParam72 = 0;
			*iParam66 = 0;
			*iParam68 = 0;
			*iParam70 = 0;
			if (*iParam76 == 0)
			{
				if (!func_438(sParam77) || !func_438(sParam78))
				{
					if (!GlobalFunc_111())
					{
						switch (iLocal_1162)
						{
							case 0:
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam77, 7, 0, 0, 0))
								{
									func_426(sParam77, 1);
									func_426(sParam78, 1);
									*iParam76 = 1;
									*iParam57 = Param0.f_16;
									*iParam58 = Param0.f_15;
									*iParam59 = MISC::GET_GAME_TIMER();
									RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", sParam78, 7, 0, 0, 0))
								{
									func_426(sParam77, 1);
									func_426(sParam78, 1);
									*iParam76 = 1;
									*iParam57 = Param0.f_16;
									*iParam58 = Param0.f_15;
									*iParam59 = MISC::GET_GAME_TIMER();
									RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
								}
								break;
						}
					}
					else
					{
						GlobalFunc_5105();
					}
				}
			}
			break;
	}
}


void func_592(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, int iParam57)//Position - 0x5FF24
{
	switch (Param0.f_7)
	{
		case 4:
			if (!CAM::DOES_CAM_EXIST(uLocal_460))
			{
				uLocal_460 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SHAKE_CAM(uLocal_460, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_PARAMS(uLocal_460, Local_246[iParam57 /*3*/], Local_253[iParam57 /*3*/], fLocal_260[iParam57], 0, 1, 1, 2);
				ENTITY::SET_ENTITY_VISIBLE(Param0, 0);
			}
			break;
		
		case 1:
		case 5:
			if (CAM::DOES_CAM_EXIST(uLocal_460))
			{
				CAM::DESTROY_CAM(uLocal_460, 0);
				ENTITY::SET_ENTITY_VISIBLE(Param0, 1);
			}
			break;
	}
}

void func_593(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x5FFB8
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (*uParam2 == 0)
			{
				if (*uParam6 == 0)
				{
					*uParam6 = MISC::GET_RANDOM_INT_IN_RANGE(iParam9, iParam10);
					*uParam4 = MISC::GET_GAME_TIMER();
				}
				if (GlobalFunc_2521(*uParam6, *uParam4))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 0, 2);
								break;
							
							case 1:
								TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 1, 2);
								break;
							
							case 2:
								TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 2, 2);
								break;
						}
						*uParam5 = MISC::GET_RANDOM_INT_IN_RANGE(iParam7, iParam8);
						*uParam3 = MISC::GET_GAME_TIMER();
						*uParam2 = 1;
					}
				}
			}
			else if (*uParam2 == 1)
			{
				if (*uParam5 == 0)
				{
					*uParam5 = MISC::GET_RANDOM_INT_IN_RANGE(iParam7, iParam8);
					*uParam3 = MISC::GET_GAME_TIMER();
				}
				if (GlobalFunc_2521(*uParam5, *uParam3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iParam0);
					*uParam6 = MISC::GET_RANDOM_INT_IN_RANGE(iParam9, iParam10);
					*uParam4 = MISC::GET_GAME_TIMER();
					*uParam2 = 0;
				}
			}
		}
	}
}


void func_595(var uParam0, int iParam1, int iParam2)//Position - 0x60107
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0;
	uParam0->f_9 = 0;
	uParam0->f_19 = 0;
	uParam0->f_18 = 0;
	uParam0->f_14 = 0;
	uParam0->f_16 = 0;
	uParam0->f_41 = 0;
	uParam0->f_15 = 0;
	uParam0->f_47 = 0;
	uParam0->f_53 = 0;
	if (iParam1 == 1)
	{
		uParam0->f_50 = 0f;
		uParam0->f_51 = 0f;
	}
	if (iParam2 == 1)
	{
		uParam0->f_54 = 0f;
	}
}

int func_596(int iParam0)//Position - 0x60172
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("family_5_mcs_2", 1))
			{
				if (!PED::IS_PED_INJURED(Local_595))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_595, "Amanda", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_611))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_611, "Fabien", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[0 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[0 /*11*/], "Michaels_YogaMat", 0, Local_1263[0 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[1 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[1 /*11*/], "Fabiens_YogaMat", 0, Local_1263[1 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[2 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[2 /*11*/], "Amandas_yogamat", 0, Local_1263[2 /*11*/].f_1, 0);
					}
				}
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_551, Local_557, fLocal_563, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
					CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
					CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				}
				else if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_551, Local_557, fLocal_563, 0, 1, 1, 2);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						if (iLocal_1125 == 1)
						{
							GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), -790.906f, 186.293f, 71.8351f, 275.0742f, 0, 0, 0);
						}
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 4f, -8f, -1, 1, 0f, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_595))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(Local_595, Local_517, Local_520.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", "f_yogapose_c", Local_517, Local_520, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_611))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(Local_611, Local_499, Local_502.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", "i_yogapose_c", Local_499, Local_502, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_551, Local_557, fLocal_563, 0, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (iLocal_1125 == 1)
						{
							SYSTEM::WAIT(500);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					GlobalFunc_8380(0, 0, 1, 0);
					RECORDING::_0x81CBAE94390F9F89();
					return 1;
				}
			}
			else
			{
				AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
				if (iLocal_1125 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_1125 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_597(int iParam0)//Position - 0x605E8
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (!CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_1122, Local_537, Local_543, fLocal_549, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_1122, Local_540, Local_546, fLocal_550, 25000, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
				CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				if (!CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
				if (CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_537, Local_543, fLocal_549, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_540, Local_546, fLocal_550, 25000, 1, 1, 2);
				}
			}
			func_595(&Local_787, 0, 0);
			if (!PED::IS_PED_INJURED(Local_595))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_595, "missfam5_yoga", "f_yogapose_b", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", "f_yogapose_b", Local_511, Local_514, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_611))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_611, "missfam5_yoga", "i_yogapose_b", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", "i_yogapose_b", Local_493, Local_496, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1263 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[iVar0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[iVar0 /*11*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_1263[iVar0 /*11*/], 1);
					}
				}
				iVar0++;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
			}
			*iParam0++;
			break;
		
		case 1:
			if (!func_438("FAM5_TRIB") && !func_438("FAM5_TRIBF"))
			{
				if (bLocal_907 == 0)
				{
					if (GlobalFunc_10630(&uLocal_936, "FAM5AUD", "FAM5_TRIB", "FAM5_TRIB_1", 7, 0, 0))
					{
						func_426("FAM5_TRIB", 1);
					}
				}
				else if (GlobalFunc_10630(&uLocal_936, "FAM5AUD", "FAM5_TRIBF", "FAM5_TRIBF_3", 7, 0, 0))
				{
					func_426("FAM5_TRIBF", 1);
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		
		case 2:
			func_593(Local_595, PLAYER::PLAYER_PED_ID(), &(Local_595.f_13), &(Local_595.f_10), &(Local_595.f_9), &(Local_595.f_11), &(Local_595.f_12), 3000, 6000, 2000, 7500);
			func_593(Local_611, PLAYER::PLAYER_PED_ID(), &(Local_611.f_13), &(Local_611.f_10), &(Local_611.f_9), &(Local_611.f_11), &(Local_611.f_12), 3750, 7500, 3000, 8000);
			if (Local_787.f_7 == 4)
			{
				if (iLocal_1162 == -1)
				{
					iLocal_1162 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iLocal_1162 = -1;
			}
			func_547(&Local_787, 1, 0, 981668463);
			func_592(Local_787, iLocal_1162);
			func_590(Local_787, &iLocal_926, &iLocal_927, &iLocal_925, &iLocal_928, "FAM5_TRIIA", "FAM5_TRIIF", "FAM5_TRIPA", "FAM5_TRIPF", "FAM5_TRIE", &iLocal_929, "FAM5_TRIFB", &iLocal_930, "FAM5_TRIBC", &iLocal_931, "FAM5_TRIBTF", &iLocal_932, "FAM5_WARIN", &iLocal_933, "FAM5_WAREX", &iLocal_934, "FAM5_TRIDA", "FAM5_TRIDF", "FAM5_TRIF", 4);
			if (func_552(&Local_787, 1, 0, bLocal_907, 0, 1, 0, 0))
			{
				if (!func_438("FAM5_TRIS"))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_TRIS", 7, 0, 0, 0))
						{
							func_426("FAM5_TRIS", 1);
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (Local_787.f_14 == 0)
					{
						GlobalFunc_553(241);
					}
					func_595(&Local_787, 0, 0);
					func_550(&Local_1297);
					if (!PED::IS_PED_INJURED(Local_595))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_595);
						Local_595.f_13 = 0;
					}
					if (!PED::IS_PED_INJURED(Local_611))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_611);
						Local_611.f_13 = 0;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_1263 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1263[iVar0 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1263[iVar0 /*11*/]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_1263[iVar0 /*11*/], 0);
							}
						}
						iVar0++;
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 4f, 4);
					return 1;
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_2", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", Local_595, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Fabien", Local_611, 0);
			}
			break;
	}
	return 0;
}

int func_598(int iParam0)//Position - 0x60AF3
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("family_5_mcs_1", 1))
			{
				if (!PED::IS_PED_INJURED(Local_595))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_595, "Amanda", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_611))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_611, "Fabien", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[0 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[0 /*11*/], "Michaels_YogaMat", 0, Local_1263[0 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[1 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[1 /*11*/], "Fabiens_YogaMat", 0, Local_1263[1 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[2 /*11*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[2 /*11*/], "Amandas_yogamat", 0, Local_1263[2 /*11*/].f_1, 0);
					}
				}
				GlobalFunc_8380(1, 1, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_CHANGE");
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_537, Local_543, fLocal_549, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
					CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
					CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				}
				else if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_537, Local_543, fLocal_549, 0, 1, 1, 2);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 1000f, -8f, -1, 1, 0f, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_595))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(Local_595, Local_511, Local_514.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", "f_yogapose_b", Local_511, Local_514, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_611))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(Local_611, Local_493, Local_496.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", "i_yogapose_b", Local_493, Local_496, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_537, Local_543, fLocal_549, 0, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					GlobalFunc_8380(0, 0, 1, 0);
					RECORDING::_0x81CBAE94390F9F89();
					return 1;
				}
			}
			else
			{
				AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
				if (iLocal_1125 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_1125 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_599(int iParam0)//Position - 0x60F43
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (!CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_1122, Local_523, Local_529, fLocal_535, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_1122, Local_526, Local_532, fLocal_536, 25000, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
				CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				if (!CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
				if (CAM::IS_CAM_RENDERING(uLocal_1122))
				{
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_523, Local_529, fLocal_535, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_526, Local_532, fLocal_536, 25000, 1, 1, 2);
				}
			}
			func_595(&Local_787, 1, 1);
			if (!PED::IS_PED_INJURED(Local_595))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_595, "missfam5_yoga", "f_yogapose_a", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", "f_yogapose_a", Local_505, Local_508, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_611))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_611, "missfam5_yoga", "i_yogapose_a", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", "i_yogapose_a", Local_487, Local_490, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1263 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1263[iVar0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1263[iVar0 /*11*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_1263[iVar0 /*11*/], 1);
					}
				}
				iVar0++;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
			}
			*iParam0++;
			break;
		
		case 1:
			if (!func_438("FAM5_WARB") && !func_438("FAM5_WARBF"))
			{
				if (bLocal_907 == 0)
				{
					if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_WARB", 7, 0, 0, 0))
					{
						func_426("FAM5_WARB", 1);
					}
				}
				else if (GlobalFunc_10630(&uLocal_936, "FAM5AUD", "FAM5_WARBF", "FAM5_WARBF_1", 7, 0, 0))
				{
					func_426("FAM5_WARBF", 1);
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		
		case 2:
			func_593(Local_595, PLAYER::PLAYER_PED_ID(), &(Local_595.f_13), &(Local_595.f_10), &(Local_595.f_9), &(Local_595.f_11), &(Local_595.f_12), 3000, 6000, 2000, 7500);
			func_593(Local_611, PLAYER::PLAYER_PED_ID(), &(Local_611.f_13), &(Local_611.f_10), &(Local_611.f_9), &(Local_611.f_11), &(Local_611.f_12), 3750, 7500, 3000, 8000);
			if (Local_787.f_7 == 4)
			{
				if (iLocal_1162 == -1)
				{
					iLocal_1162 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iLocal_1162 = -1;
			}
			func_547(&Local_787, 1, 0, 981668463);
			func_592(Local_787, iLocal_1162);
			func_590(Local_787, &iLocal_926, &iLocal_927, &iLocal_925, &iLocal_928, "FAM5_WARIA", "FAM5_WARIF", "FAM5_WARPA", "FAM5_WARPF", "FAM5_WARE", &iLocal_929, "FAM5_WARFB", &iLocal_930, "FAM5_WARBC", &iLocal_931, "FAM5_WARBTF", &iLocal_932, "FAM5_WARIN", &iLocal_933, "FAM5_WAREX", &iLocal_934, "FAM5_WARDA", "FAM5_WARDF", "FAM5_WARF", 2);
			if (func_552(&Local_787, 0, 0, 1, 1, 1, 0, 0))
			{
				if (!func_438("FAM5_WARS"))
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_936, "FAM5AUD", "FAM5_WARS", 7, 0, 0, 0))
						{
							func_426("FAM5_WARS", 1);
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (Local_787.f_14 == 0)
					{
						GlobalFunc_553(240);
					}
					func_595(&Local_787, 0, 0);
					func_550(&Local_1297);
					if (!PED::IS_PED_INJURED(Local_595))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_595);
						Local_595.f_13 = 0;
					}
					if (!PED::IS_PED_INJURED(Local_611))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_611);
						Local_611.f_13 = 0;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_1263 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1263[iVar0 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1263[iVar0 /*11*/]))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_1263[iVar0 /*11*/], 0);
							}
						}
						iVar0++;
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 3f, 4);
					return 1;
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_1", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", Local_595, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Fabien", Local_611, 0);
			}
			break;
	}
	return 0;
}

int func_600(int iParam0)//Position - 0x61448
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_2202(4))
			{
				GlobalFunc_2798(4);
			}
			if (GlobalFunc_5927("family_5_int", 1))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_595, "Amanda", 2, Local_595.f_6, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_611, "Fabien", 2, Local_611.f_6, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[0 /*11*/], "Michaels_YogaMat", 2, Local_1263[0 /*11*/].f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[1 /*11*/], "Fabiens_YogaMat", 2, Local_1263[1 /*11*/].f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1263[2 /*11*/], "Amandas_yogamat", 2, Local_1263[2 /*11*/].f_1, 0);
				GlobalFunc_8380(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), joaat("player_zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_908 == 1)
				{
					GlobalFunc_9025(&Local_1128, 0, 0, 2000, 1, 1, 0, 1);
					CLOCK::SET_CLOCK_TIME(iLocal_1167, 0, 0);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				GlobalFunc_7695(0);
				GlobalFunc_6791(0, 0);
				if (GlobalFunc_7984() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (GlobalFunc_2251() == PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
						{
							GlobalFunc_2882(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -867.9103f, 158.2215f, 63.9014f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 174.2918f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
							GlobalFunc_10735(-867.9103f, 158.2215f, 63.9014f, 174.2918f, 0, 145);
							GlobalFunc_76(24);
						}
					}
				}
				MISC::CLEAR_AREA(Local_1316.f_1, 5000f, 1, 0, 0, 0);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
				if (!GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(2);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1.2f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1.2f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 1, 0, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_765.x))
				{
					OBJECT::DELETE_OBJECT(&Local_765);
					ENTITY::REMOVE_MODEL_HIDE(Local_765.f_2, 1f, Local_765.f_1, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_776.x))
				{
					OBJECT::DELETE_OBJECT(&Local_776);
					ENTITY::REMOVE_MODEL_HIDE(Local_776.f_2, 1f, Local_776.f_1, false);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
				iLocal_1173 = 0;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (iLocal_1173 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 80650)
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 1, 0, 1);
						}
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1f, 0, 0);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 1, 0, 1);
						}
						iLocal_1173 = 1;
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_595))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Amanda", Local_595.f_6))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amanda", 0)))
					{
						Local_595 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amanda", 0));
						func_626(Local_595, 1862763509, 0, 1, 0, 0);
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_595, 1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_611))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Fabien", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabien", 0)))
					{
						Local_611 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabien", 0));
						func_626(Local_611, 1862763509, 0, 1, 0, 0);
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_611, 1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Michaels_YogaMat", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_YogaMat", 0)))
					{
						Local_1263[0 /*11*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_YogaMat", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Fabiens_YogaMat", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabiens_YogaMat", 0)))
					{
						Local_1263[1 /*11*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabiens_YogaMat", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Amandas_yogamat", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amandas_yogamat", 0)))
					{
						Local_1263[2 /*11*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amandas_yogamat", 0));
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_PARAMS(uLocal_1122, Local_523, Local_529, fLocal_535, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
					CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
					CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), -790.906f, 186.293f, 71.8351f, 275.0742f, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 1000f, -8f, -1, 1, 0f, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					}
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_595))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(Local_595, Local_505, Local_508.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", "f_yogapose_a", Local_505, Local_508, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_611))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						GlobalFunc_2519(Local_611, Local_487, Local_490.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", "i_yogapose_a", Local_487, Local_490, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((((((func_601(&Local_595, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1) && func_601(&Local_611, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1)) && func_376(&(Local_1263[0 /*11*/]), 0)) && func_376(&(Local_1263[1 /*11*/]), 0)) && func_376(&(Local_1263[2 /*11*/]), 0)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga")) && AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
				{
					if (iLocal_1125 == 1)
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START(-782.81f, 187.44f, 73.33f, -0.98f, -0.17f, -0.06f, 20f, 0);
							iLocal_1174 = MISC::GET_GAME_TIMER();
						}
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_1174))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							GlobalFunc_8380(0, 0, 1, 0);
							return 1;
						}
					}
					else
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						GlobalFunc_8380(0, 0, 1, 0);
						return 1;
					}
				}
			}
			else
			{
				if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_01", 0))
				{
				}
				if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_02", 0))
				{
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_TRANQUIL"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 75500)
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_TRANQUIL");
					}
				}
				if (iLocal_1121 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 88000)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_START"))
						{
							iLocal_1121 = 1;
						}
					}
				}
				AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
				if (iLocal_1125 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_1125 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_601(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x61D9A
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (GlobalFunc_7102(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_626(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (GlobalFunc_7220(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_626(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_621(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_626(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_602(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_626(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_602(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x61F79
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8386(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11317(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11332(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}



















int func_621(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x63EBB
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8386(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11317(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11332(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}





void func_626(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x640DB
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, iParam4);
			PED::SET_PED_AS_ENEMY(iParam0, iParam5);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		}
	}
}
















int func_642(int iParam0)//Position - 0x64817
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (*iParam0)
	{
		case 0:
			if (iLocal_909 == 0)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					Local_1128.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(Local_1128.f_4, -839.5142f, 180.321f, 71.61797f, 10.80582f, 0f, -101.1842f, 5000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(Local_1128.f_4, -839.3057f, 180.2798f, 72.14842f, 10.33049f, 0f, -100.1209f, 5000, 3, 2);
					CAM::SET_CAM_FOV(Local_1128.f_4, 40.63326f);
					CAM::SET_CAM_ACTIVE(Local_1128.f_4, 1);
					GlobalFunc_9025(&Local_1128, 1, 0, 2000, 1, 1, 0, 1);
					*iParam0++;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				*iParam0++;
			}
			break;
		
		case 1:
			iVar0 = CLOCK::GET_CLOCK_HOURS();
			iLocal_1167 = iVar0 + 2;
			GlobalFunc_741(21, &iVar1, &iVar2);
			if (iLocal_1167 > iVar1 || iLocal_1167 < iVar2)
			{
				iLocal_1167 = 9;
			}
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_1316.f_1, Local_1316.f_4, 0, 0, 0);
			if (!GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
			{
				func_1(2);
			}
			if (GlobalFunc_2202(4))
			{
				GlobalFunc_2798(4);
			}
			iLocal_908 = 1;
			*iParam0++;
			break;
		
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("family_5_int", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_10914("Michael", joaat("player_zero"), 7);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
				iLocal_1127 = 1;
			}
			if (iLocal_909 == 0)
			{
				if (CAM::DOES_CAM_EXIST(Local_1128.f_4))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_1122))
					{
						CAM::DESTROY_CAM(uLocal_1122, 0);
					}
				}
				if (GlobalFunc_9141(iLocal_1167, 0, "EXTRASUNNY", "cirrocumulus", &Local_1128, -1082130432, 24, 1, 1065353216))
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (iLocal_1127 == 1)
					{
						*iParam0++;
					}
				}
				if (GlobalFunc_4926(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					iLocal_909 = 1;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(Local_1128.f_10))
					{
						AUDIO::STOP_SOUND(Local_1128.f_10);
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					}
				}
				if (iLocal_1127 == 1)
				{
					*iParam0++;
				}
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}


























void func_668()//Position - 0x657A7
{
	iLocal_902 = 1;
	iLocal_903 = 0;
	iLocal_1101 = 0;
	iLocal_925 = 0;
	iLocal_926 = 0;
	iLocal_927 = 0;
	iLocal_928 = 0;
	Local_595.f_7 = 0;
	Local_595.f_11 = 0;
	Local_595.f_12 = 0;
	Local_595.f_13 = 0;
	Local_611.f_7 = 0;
	Local_611.f_11 = 0;
	Local_611.f_12 = 0;
	Local_611.f_13 = 0;
	Local_627.f_7 = 0;
	Local_643.f_7 = 0;
	iLocal_1102 = 0;
	iLocal_1103 = 0;
	iLocal_1104 = 0;
	iLocal_1125 = 0;
	iLocal_1126 = 0;
	iLocal_929 = 0;
	iLocal_930 = 0;
	iLocal_931 = 0;
	iLocal_933 = 0;
	iLocal_932 = 0;
	iLocal_934 = 0;
	iLocal_917 = 0;
	iLocal_918 = 0;
	iLocal_1119 = 0;
	iLocal_919 = 0;
	iLocal_920 = 0;
	iLocal_921 = 0;
	iLocal_922 = 0;
	iLocal_1120 = 0;
	iLocal_1155 = 0;
	bLocal_907 = false;
	iLocal_1152 = -1;
	iLocal_1150 = -1;
	iLocal_1151 = -1;
	iLocal_1156 = 0;
	iLocal_1157 = 0;
	iLocal_1158 = 0;
	iLocal_1159 = 0;
	iLocal_1160 = 0;
	iLocal_1161 = 0;
	iLocal_1162 = 0;
	iLocal_1163 = 0;
	iLocal_1164 = 0;
	iLocal_1165 = 0;
	iLocal_1171 = 0;
	StringCopy(&Local_587, "CMN_GENGETINY", 16);
	iLocal_1172 = 0;
	iLocal_1173 = 0;
	iLocal_1174 = 0;
	iLocal_1175 = 0;
	iLocal_1176 = 0;
	iLocal_1185 = 0;
	iLocal_1186 = 0;
	iLocal_1187 = 0;
	iLocal_1147 = 0;
	iLocal_1118 = 0;
	iLocal_1181 = 0;
	iLocal_1182 = 0;
	iLocal_1183 = 0;
	iLocal_1184 = 0;
	StringCopy(&Local_1105, "", 24);
	StringCopy(&Local_1111, "", 24);
	iLocal_1188 = 0;
}

int func_669(var uParam0)//Position - 0x658E7
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 451360105) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) == 1)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_591 = 1;
						*uParam0++;
					}
				}
				else
				{
					iLocal_591 = 0;
					*uParam0++;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missfam2mcs_intp1");
			STREAMING::REQUEST_MODEL(Local_765.f_1);
			STREAMING::REQUEST_MODEL(Local_776.f_1);
			if ((STREAMING::HAS_ANIM_DICT_LOADED("missfam2mcs_intp1") && STREAMING::HAS_MODEL_LOADED(Local_765.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_776.f_1))
			{
				switch (iLocal_591)
				{
					case 0:
						*uParam0++;
						break;
					
					case 1:
						*uParam0++;
						break;
					}
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1152))
			{
				FIRE::STOP_FIRE_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				MISC::CLEAR_AREA_OF_PROJECTILES(-817.305f, 179.33f, 71.241f, 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				iLocal_1152 = PED::CREATE_SYNCHRONIZED_SCENE(-817.305f, 179.33f, 71.225f, 0f, 0f, -113f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1152, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1152, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 0, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 1, 0, 1);
				}
				ENTITY::CREATE_MODEL_HIDE(Local_765.f_2, 1f, Local_765.f_1, 0);
				ENTITY::CREATE_MODEL_HIDE(Local_776.f_2, 1f, Local_776.f_1, 0);
				Local_765.x = OBJECT::CREATE_OBJECT(Local_765.f_1, -816.72f, 179.1f, 72.83f, 1, 1, 0);
				Local_776.x = OBJECT::CREATE_OBJECT(Local_776.f_1, -816.11f, 177.51f, 72.83f, 1, 1, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_765.x, iLocal_1152, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_776.x, iLocal_1152, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1148846080);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_765.x);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_776.x);
				CAM::DESTROY_ALL_CAMS(0);
				uLocal_1122 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_1122, iLocal_1152, "fam5_intro_cam", "missfam2mcs_intp1");
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_765.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_776.f_1);
				STREAMING::NEW_LOAD_SCENE_START(-839.51f, 180.32f, 71.61f, 1f, -0.2f, 0.2f, 1500f, 0);
				iLocal_1174 = MISC::GET_GAME_TIMER();
				iLocal_1127 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				if (GlobalFunc_7984())
				{
					if ((((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
						}
						GlobalFunc_7695(24);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -867.9103f, 158.2215f, 63.9014f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 174.2918f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
					}
				}
				MISC::CLEAR_AREA(-817.305f, 179.33f, 71.241f, 500f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(-817.305f, 179.33f, 71.241f, 500f, 0);
				MISC::CLEAR_AREA_OF_COPS(-817.305f, 179.33f, 71.241f, 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-817.305f, 179.33f, 71.241f, 500f, 0, 0, 0, 0, 0);
				*uParam0++;
			}
			break;
		
		case 4:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (CAM::DOES_CAM_EXIST(uLocal_1122))
			{
				if (iLocal_909 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1152))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1152) >= 0.99f)
						{
							if (iLocal_1127 == 1)
							{
								*uParam0++;
							}
						}
						if (GlobalFunc_4926(1000))
						{
							CAM::DO_SCREEN_FADE_OUT(800);
							iLocal_909 = 1;
						}
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (iLocal_1127 == 1)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_765.x, 0f, 0);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_776.x, 0f, 0);
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						CAM::DESTROY_CAM(uLocal_1122, 0);
						CAM::DESTROY_ALL_CAMS(0);
						*uParam0++;
					}
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_int", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_10914("Michael", joaat("player_zero"), 7);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
				iLocal_1127 = 1;
			}
			break;
		
		case 5:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (iLocal_909 == 0)
			{
				if (CAM::DOES_CAM_EXIST(uLocal_1122))
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_1174))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
						}
						return 1;
					}
				}
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_670(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x65F33
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::REQUEST_ADDITIONAL_TEXT("FAM5", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FAM5AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		if (HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		func_716();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_y_burgerdrug_01"), 1);
		GlobalFunc_2224(1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_7695(0);
			GlobalFunc_6791(0, 0);
		}
		GlobalFunc_52(0, 1);
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 245);
		GlobalFunc_6682(&uLocal_881, 0);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 0);
		if (iLocal_1141 == 0)
		{
			iLocal_1141 = GlobalFunc_2533(-1181.24f, -884.43f, 12.8f, 2f, 2f, 2f);
			MISC::CLEAR_AREA_OF_PEDS(-1181.24f, -884.43f, 12.8f, 2f, 0);
		}
		if (iLocal_1140 == 0)
		{
			iLocal_1140 = GlobalFunc_2533(-964.29f, 307.89f, 70.39f, 16f, 6f, 3f);
			MISC::CLEAR_AREA_OF_PEDS(-964.29f, 307.89f, 70.39f, 10f, 0);
		}
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_710(iParam0);
		GlobalFunc_2535(&uLocal_1235, &uLocal_910);
		GlobalFunc_2534(&uLocal_1246, &uLocal_911);
		func_707();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_1316.f_1, Local_1316.f_4, 0, 1, 0);
			if (*uParam3 == 1)
			{
				if (((iParam0 == 2 || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
				{
					switch (iParam0)
					{
						case 2:
						case 10:
						case 11:
						case 17:
							Local_912 = { Local_1316.f_1 };
							break;
						
						case 9:
							Local_912 = { Local_627.f_2 };
							break;
					}
					while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_912)))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_912));
						SYSTEM::WAIT(0);
					}
				}
			}
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
				case 8:
				case 9:
				case 10:
				case 11:
					func_770(86, 0, 0, 1, 0);
					break;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			iLocal_909 = 0;
			iLocal_1127 = 0;
		}
		if (*iParam4 == 1)
		{
			GlobalFunc_5196(Local_1316.f_1, Local_1316.f_4, 1, 0);
		}
		func_702(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (GlobalFunc_2531(&uLocal_1235, &uLocal_910))
		{
			if (GlobalFunc_2530(&uLocal_1246, &uLocal_911))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_699(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				if (GlobalFunc_2(0))
				{
					if (!GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
					{
						func_1(2);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							*iParam1++;
						}
					}
				}
				else
				{
					*iParam1++;
				}
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (func_601(&Local_595, 0, 1862763509, 0, 17, 0, 0, 0, 0, -1, 1))
				{
					iLocal_1221[5] = 1;
					if (func_601(&Local_611, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1))
					{
						iLocal_1221[6] = 1;
						iLocal_1221[1] = 1;
						if ((func_376(&(Local_1263[0 /*11*/]), 0) && func_376(&(Local_1263[1 /*11*/]), 0)) && func_376(&(Local_1263[2 /*11*/]), 0))
						{
							if (iLocal_916 == 0)
							{
								if (!PED::IS_PED_INJURED(Local_595))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_595, 2, 4, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_595, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_595, 4, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_595, 10, 1, 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_611))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_611, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_611, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_611, 4, 0, 0, 0);
								}
								iLocal_916 = 1;
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 1);
							}
							if (!PED::IS_PED_INJURED(Local_595))
							{
								PED::SET_FORCE_FOOTSTEP_UPDATE(Local_595, 1);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_595, 8192);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_595, 16);
							}
							if (!PED::IS_PED_INJURED(Local_611))
							{
								PED::SET_FORCE_FOOTSTEP_UPDATE(Local_611, 1);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_611, 8192);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_611, 16);
							}
							*iParam1++;
						}
					}
				}
				break;
			
			case 9:
				if (func_601(&Local_627, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1))
				{
					iLocal_1221[7] = 1;
					iLocal_1221[8] = 1;
					if (func_679(&Local_659, 1, 0, 0, 1, -1, -1, -1))
					{
						iLocal_1221[3] = 1;
						iLocal_1221[2] = 1;
						if ((func_376(&(Local_1263[0 /*11*/]), 0) && func_376(&(Local_1263[1 /*11*/]), 0)) && func_376(&(Local_1263[2 /*11*/]), 0))
						{
							GlobalFunc_503(Local_659, -1);
							GlobalFunc_504(Local_659, 243);
							*iParam1++;
						}
					}
				}
				break;
			
			case 10:
				if (func_601(&Local_627, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1))
				{
					iLocal_1221[7] = 1;
					iLocal_1221[8] = 1;
					if (func_679(&Local_659, 1, 0, 0, 1, -1, -1, -1))
					{
						iLocal_1221[3] = 1;
						iLocal_1221[2] = 1;
						if ((((func_376(&(Local_1263[0 /*11*/]), 0) && func_376(&(Local_1263[1 /*11*/]), 0)) && func_376(&(Local_1263[2 /*11*/]), 0)) && func_376(&Local_721, 0)) && func_376(&Local_732, 0))
						{
							GlobalFunc_503(Local_659, -1);
							GlobalFunc_504(Local_659, 243);
							*iParam1++;
						}
					}
				}
				break;
			
			case 11:
				if (func_679(&Local_659, 1, 0, 0, 1, -1, -1, -1))
				{
					iLocal_1221[3] = 1;
					iLocal_1221[2] = 1;
					iLocal_1221[4] = 1;
					if (func_601(&Local_627, 0, 1862763509, 0, 14, 0, 0, 0, 0, -1, 1))
					{
						iLocal_1221[7] = 1;
						iLocal_1221[8] = 1;
						if (!PED::IS_PED_INJURED(Local_627))
						{
							ENTITY::SET_ENTITY_LOD_DIST(Local_627, 150);
							PED::SET_PED_LOD_MULTIPLIER(Local_627, 5f);
						}
						if ((((func_376(&(Local_1263[0 /*11*/]), 0) && func_376(&(Local_1263[1 /*11*/]), 0)) && func_376(&(Local_1263[2 /*11*/]), 0)) && func_376(&Local_721, 1)) && func_376(&Local_732, 1))
						{
							GlobalFunc_503(Local_659, -1);
							GlobalFunc_504(Local_659, 243);
							*iParam1++;
						}
					}
				}
				break;
			
			case 12:
				if (func_679(&Local_659, 1, 0, 0, 1, -1, -1, -1))
				{
					iLocal_1221[3] = 1;
					iLocal_1221[2] = 1;
					iLocal_1221[4] = 1;
					if (func_601(&Local_627, 0, 1862763509, 0, 14, 0, 0, 0, Local_659, 0, 1))
					{
						iLocal_1221[7] = 1;
						iLocal_1221[8] = 1;
						if (!PED::IS_PED_INJURED(Local_627))
						{
							ENTITY::SET_ENTITY_LOD_DIST(Local_627, 150);
							PED::SET_PED_LOD_MULTIPLIER(Local_627, 5f);
						}
						if (func_601(&Local_643, 0, 1862763509, 0, 145, 0, 0, 0, 0, -1, 1) && func_376(&Local_754, 0))
						{
							if (*uParam3 == 1 || *iParam4 == 1)
							{
								if (!PED::IS_PED_INJURED(Local_643))
								{
									PED::SET_PED_PROP_INDEX(Local_643, 0, 0, 0, false);
									PED::SET_PED_PROP_INDEX(Local_643, 1, 0, 0, false);
								}
							}
							iLocal_1221[11] = 1;
							iLocal_1221[10] = 1;
							iLocal_1221[9] = 1;
							GlobalFunc_503(Local_659, -1);
							GlobalFunc_504(Local_659, 243);
							*iParam1++;
						}
					}
				}
				break;
			
			case 13:
				if (func_679(&Local_659, 1, 0, 0, 1, -1, -1, -1))
				{
					iLocal_1221[3] = 1;
					iLocal_1221[2] = 1;
					iLocal_1221[4] = 1;
					if (func_601(&Local_627, 0, 1862763509, 0, 14, 0, 0, 0, Local_659, 0, 1))
					{
						iLocal_1221[7] = 1;
						iLocal_1221[8] = 1;
						if (!PED::IS_PED_INJURED(Local_627))
						{
							ENTITY::SET_ENTITY_LOD_DIST(Local_627, 150);
							PED::SET_PED_LOD_MULTIPLIER(Local_627, 5f);
						}
						if (func_376(&Local_666, 0))
						{
							if (!PED::IS_PED_INJURED(Local_627))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_666, Local_627, PED::GET_PED_BONE_INDEX(Local_627, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							GlobalFunc_503(Local_659, -1);
							GlobalFunc_504(Local_659, 243);
							*iParam1++;
						}
					}
				}
				break;
			
			case 16:
				if (func_679(&(Local_1255[0 /*7*/]), 0, 0, 145, 1, -1, -1, -1))
				{
					*iParam1++;
				}
				break;
			
			default:
				*iParam1++;
				break;
		}
		if (iLocal_915 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_627))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 1, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 3, 6, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 4, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 6, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_627, 10, 3, 0, 0);
					iLocal_915 = 1;
				}
			}
		}
	}
	if (*iParam1 == 5)
	{
		GlobalFunc_9132(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				if (Global_32360[86] == 1)
				{
					func_770(86, 0, 0, 1, 0);
				}
				if ((Global_32360[117] == 1 || Global_32360[118] == 1) || Global_32360[170] == 1)
				{
					func_770(117, 0, 0, 1, 0);
					func_770(118, 0, 0, 1, 0);
					func_770(120, 0, 0, 1, 0);
					func_770(170, 0, 0, 1, 0);
				}
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				if (!GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(2);
				}
				if (Global_32360[86] == 1)
				{
					func_770(86, 0, 0, 1, 0);
				}
				if ((Global_32360[117] == 1 || Global_32360[118] == 1) || Global_32360[170] == 1)
				{
					func_770(117, 0, 0, 1, 0);
					func_770(118, 0, 0, 1, 0);
					func_770(120, 0, 0, 1, 0);
					func_770(170, 0, 0, 1, 0);
				}
				break;
			
			case 10:
			case 11:
				if (Global_32360[86] == 1)
				{
					func_770(86, 0, 0, 1, 0);
				}
				if ((Global_32360[117] == 1 || Global_32360[118] == 1) || Global_32360[170] == 1)
				{
					func_770(117, 0, 0, 1, 0);
					func_770(118, 0, 0, 1, 0);
					func_770(120, 0, 0, 1, 0);
					func_770(170, 0, 0, 1, 0);
				}
				break;
			
			case 12:
				if (Global_32360[86] == 0)
				{
					func_770(86, 1, 0, 1, 0);
				}
				if ((Global_32360[117] == 0 || Global_32360[118] == 0) || Global_32360[170] == 0)
				{
					func_770(117, 1, 0, 1, 0);
					func_770(118, 1, 0, 1, 0);
					func_770(120, 1, 0, 1, 0);
					func_770(170, 1, 0, 1, 0);
				}
				break;
			
			case 14:
			case 15:
			case 16:
				switch (iParam0)
				{
					case 15:
					case 16:
						if (!GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 12, 52))
						{
							func_1(4);
						}
						break;
				}
				if (Global_32360[86] == 0)
				{
					func_770(86, 1, 0, 1, 0);
				}
				if ((Global_32360[117] == 0 || Global_32360[118] == 0) || Global_32360[170] == 0)
				{
					func_770(117, 1, 0, 1, 0);
					func_770(118, 1, 0, 1, 0);
					func_770(120, 1, 0, 1, 0);
					func_770(170, 1, 0, 1, 0);
				}
				break;
			
			case 17:
			case 18:
				if (Global_32360[86] == 0)
				{
					func_770(86, 1, 0, 1, 0);
				}
				if ((Global_32360[117] == 0 || Global_32360[118] == 0) || Global_32360[170] == 0)
				{
					func_770(117, 1, 0, 1, 0);
					func_770(118, 1, 0, 1, 0);
					func_770(120, 1, 0, 1, 0);
					func_770(170, 1, 0, 1, 0);
				}
				break;
		}
		switch (iParam0)
		{
			case 3:
			case 5:
			case 7:
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
				break;
			
			default:
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				break;
		}
		switch (iParam0)
		{
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				}
				break;
			
			case 14:
			case 15:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				}
				break;
			
			default:
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				break;
		}
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (iParam0 == 9)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_WETNESS_HEIGHT(PLAYER::PLAYER_PED_ID(), 2f);
				}
			}
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				*iParam1++;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 6)
	{
		GlobalFunc_200(&uLocal_936, 0);
		GlobalFunc_200(&uLocal_936, 1);
		GlobalFunc_200(&uLocal_936, 2);
		GlobalFunc_200(&uLocal_936, 3);
		GlobalFunc_200(&uLocal_936, 4);
		GlobalFunc_200(&uLocal_936, 5);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_936, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
		switch (iParam0)
		{
			case 0:
				GlobalFunc_7632(0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
			
			case 1:
			case 2:
				GlobalFunc_7632(1);
				HUD::DISPLAY_RADAR(0);
				break;
			
			case 3:
			case 5:
			case 7:
				GlobalFunc_7632(1);
				if (!PED::IS_PED_INJURED(Local_595))
				{
					GlobalFunc_173(&uLocal_936, 1, Local_595, "AMANDA", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_611))
				{
					GlobalFunc_173(&uLocal_936, 3, Local_611, "FABIAN", 0, 1);
				}
				HUD::DISPLAY_RADAR(0);
				AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
				break;
			
			case 4:
			case 6:
			case 8:
				GlobalFunc_7632(1);
				HUD::DISPLAY_RADAR(0);
				break;
			
			case 9:
				GlobalFunc_7632(0);
				if (!PED::IS_PED_INJURED(Local_627))
				{
					GlobalFunc_173(&uLocal_936, 2, Local_627, "JIMMY", 0, 0);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
			
			case 10:
				GlobalFunc_7632(1);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
			
			case 11:
				GlobalFunc_7632(0);
				if (!PED::IS_PED_INJURED(Local_627))
				{
					GlobalFunc_173(&uLocal_936, 2, Local_627, "JIMMY", 0, 1);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
			
			case 12:
				GlobalFunc_7632(1);
				if (!PED::IS_PED_INJURED(Local_627))
				{
					GlobalFunc_173(&uLocal_936, 2, Local_627, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_643))
				{
					GlobalFunc_173(&uLocal_936, 5, Local_643, "FAM5DEALER", 0, 1);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
			
			case 13:
				GlobalFunc_7632(0);
				if (!PED::IS_PED_INJURED(Local_627))
				{
					GlobalFunc_173(&uLocal_936, 2, Local_627, "JIMMY", 0, 1);
				}
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
			
			case 14:
			case 15:
				GlobalFunc_7632(1);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				break;
			
			case 16:
				GlobalFunc_7632(1);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				break;
			
			case 17:
			case 18:
				GlobalFunc_7632(1);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		GlobalFunc_699();
		GlobalFunc_585(65, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(1);
		GlobalFunc_699();
		func_541(5, 0);
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				*iParam1++;
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				GlobalFunc_696();
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_TRANQUIL"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_TRANQUIL");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_MG"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_MG");
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				*iParam1++;
				break;
			
			case 9:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GlobalFunc_696();
				func_541(5, 1);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(0);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, 0, 0, 0);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				*iParam1++;
				break;
			
			case 10:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, 0, 0, 0);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				*iParam1++;
				break;
			
			case 11:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), 1);
				VEHICLE::_0x9A75585FB2E54FAD(-1174.32f, -887.45f, 14.41f, 25f);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, 0, 1);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, 0, 0, 0);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
				}
				*iParam1++;
				break;
			
			case 12:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(1);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(0);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), 1);
				VEHICLE::_0x9A75585FB2E54FAD(-1174.32f, -887.45f, 14.41f, 25f);
				*iParam1++;
				break;
			
			case 13:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GlobalFunc_585(65, 1);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
				GlobalFunc_696();
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(0);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), 1);
				VEHICLE::_0x9A75585FB2E54FAD(-1174.32f, -887.45f, 14.41f, 25f);
				*iParam1++;
				break;
			
			case 14:
			case 15:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_ON_DRUGS"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_ON_DRUGS");
				}
				GlobalFunc_563(1);
				*iParam1++;
				break;
			
			case 16:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				CLOCK::ADVANCE_CLOCK_TIME_TO(6, 0, 0);
				GlobalFunc_563(0);
				VEHICLE::_0x9A75585FB2E54FAD(-941.51f, 308.92f, 70.21f, 10f);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, 0, 1);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, 0, 0, 0);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, 0, 1);
				}
				*iParam1++;
				break;
			
			case 17:
			case 18:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, 0, 1);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, 0, 1);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, 0, 0, 0);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, 0, 1);
				}
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 8)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				GlobalFunc_4967(0, -1, 0);
			}
			else
			{
				STREAMING::LOAD_SCENE(Local_1316.f_1);
				SYSTEM::WAIT(1000);
			}
			switch (iParam0)
			{
				case 12:
				case 13:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_659, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_659);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_659, 1, 1);
						}
					}
					break;
			}
			switch (iParam0)
			{
				case 3:
				case 5:
				case 7:
					if (iLocal_1121 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_RESTART"))
						{
							iLocal_1121 = 1;
						}
					}
					if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
					{
					}
					break;
				
				case 4:
				case 6:
				case 8:
					if (iLocal_1121 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_RESTART"))
						{
							iLocal_1121 = 1;
						}
					}
					break;
				
				default:
					if (iLocal_1121 == 1)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS"))
						{
							iLocal_1121 = 0;
						}
					}
					break;
			}
			switch (iParam0)
			{
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
					break;
				
				default:
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 3:
				case 5:
				case 7:
					switch (iParam0)
					{
						case 3:
							sVar0 = "start_pose";
							sVar1 = "f_yogapose_a";
							sVar2 = "i_yogapose_a";
							Var3 = { Local_505 };
							Var6 = { Local_508 };
							Var9 = { Local_487 };
							Var12 = { Local_490 };
							break;
						
						case 5:
							sVar0 = "start_pose";
							sVar1 = "f_yogapose_b";
							sVar2 = "i_yogapose_b";
							Var3 = { Local_511 };
							Var6 = { Local_514 };
							Var9 = { Local_493 };
							Var12 = { Local_496 };
							break;
						
						case 7:
							sVar0 = "start_pose";
							sVar1 = "f_yogapose_c";
							sVar2 = "i_yogapose_c";
							Var3 = { Local_517 };
							Var6 = { Local_520 };
							Var9 = { Local_499 };
							Var12 = { Local_502 };
							break;
					}
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(Local_595)) && ENTITY::DOES_ENTITY_EXIST(Local_611))
					{
						if (((((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_595)) && !ENTITY::IS_ENTITY_DEAD(Local_611)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_595)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_611))
						{
							if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", sVar0, 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_595, "missfam5_yoga", sVar1, 3)) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_611, "missfam5_yoga", sVar2, 3)) && CAM::DOES_CAM_EXIST(uLocal_1122)) && CAM::IS_CAM_RENDERING(uLocal_1122))
							{
								if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::NEW_LOAD_SCENE_START(-782.81f, 187.44f, 73.33f, -0.98f, -0.17f, -0.06f, 20f, 0);
									iLocal_1174 = MISC::GET_GAME_TIMER();
								}
								if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_1174))
								{
									STREAMING::NEW_LOAD_SCENE_STOP();
									*iParam1++;
								}
							}
							else
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", sVar0, 3))
									{
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", sVar0, 1000f, -8f, -1, 1, 0f, 0, 1, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
									}
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_595, "missfam5_yoga", sVar1, 3))
									{
										TASK::TASK_PLAY_ANIM_ADVANCED(Local_595, "missfam5_yoga", sVar1, Var3, Var6, 1000f, -8f, -1, 267273, 0f, 2, 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_595, 0, 0);
									}
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_611, "missfam5_yoga", sVar2, 3))
									{
										TASK::TASK_PLAY_ANIM_ADVANCED(Local_611, "missfam5_yoga", sVar2, Var9, Var12, 1000f, -8f, -1, 267273, 0f, 2, 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_611, 0, 0);
									}
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
								}
								if (!CAM::DOES_CAM_EXIST(uLocal_1122))
								{
									uLocal_1122 = CAM::CREATE_CAMERA(26379945, 1);
									CAM::SET_CAM_PARAMS(uLocal_1122, -782.8024f, 187.4389f, 73.32661f, -3.540541f, 0f, 99.79994f, 39.3555f, 0, 1, 1, 2);
									CAM::SHAKE_CAM(uLocal_1122, "HAND_SHAKE", 0.125f);
									CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
									CAM::SET_CAM_FAR_CLIP(uLocal_1122, 500f);
									HUD::DISPLAY_RADAR(0);
									HUD::DISPLAY_HUD(0);
									CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
								}
							}
						}
					}
					break;
				
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 10)
	{
		switch (iParam0)
		{
			case 3:
				iLocal_1168 = CLOCK::GET_CLOCK_HOURS();
				iLocal_1169 = CLOCK::GET_CLOCK_MINUTES();
				iLocal_1170 = CLOCK::GET_CLOCK_SECONDS();
				GlobalFunc_11046(0, "YOGA - WARRIOR", 0, 0, 0, 1);
				break;
			
			case 5:
				iLocal_1168 = CLOCK::GET_CLOCK_HOURS();
				iLocal_1169 = CLOCK::GET_CLOCK_MINUTES();
				iLocal_1170 = CLOCK::GET_CLOCK_SECONDS();
				GlobalFunc_11046(1, "YOGA - TRIANGLE", 0, 0, 0, 1);
				break;
			
			case 7:
				iLocal_1168 = CLOCK::GET_CLOCK_HOURS();
				iLocal_1169 = CLOCK::GET_CLOCK_MINUTES();
				iLocal_1170 = CLOCK::GET_CLOCK_SECONDS();
				GlobalFunc_11046(2, "YOGA - SUNSALUTATION", 0, 0, 0, 1);
				break;
			
			case 9:
				GlobalFunc_11046(3, "GO TO JIMMY'S ROOM", 0, 0, 0, 1);
				break;
			
			case 11:
				GlobalFunc_11046(4, "GO TO BURGER SHOT", 0, 0, 0, 1);
				break;
			
			case 13:
				GlobalFunc_11046(5, "DRIVE HOME", 0, 0, 0, 1);
				break;
			
			case 16:
				GlobalFunc_11046(6, "GO HOME WASTED", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		switch (iParam0)
		{
			case 3:
			case 5:
			case 7:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				break;
			
			default:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		return 1;
	}
	return 0;
}









int func_679(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)//Position - 0x68012
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_698(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_694(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (func_680(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_680(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x681BF
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, uParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				GlobalFunc_5811(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_5120(iParam0);
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














int func_694(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x6B9C9
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				GlobalFunc_7141(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}




int func_698(int iParam0, struct<3> Param1, var uParam4)//Position - 0x6C5CD
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

void func_699(int iParam0)//Position - 0x6C756
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_1221 - 1))
	{
		iLocal_1221[iVar0] = iParam0;
		iVar0++;
	}
}



void func_702(int iParam0)//Position - 0x6C80A
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_595))
			{
				GlobalFunc_2532(Local_595.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_611))
			{
				GlobalFunc_2532(Local_611.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[0 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[1 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[2 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			GlobalFunc_5928("missfam5_yoga", &uLocal_1246, 8, &uLocal_911);
			break;
		
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_595))
			{
				GlobalFunc_2532(Local_595.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_611))
			{
				GlobalFunc_2532(Local_611.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[0 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[1 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[2 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			GlobalFunc_5928("missfam5_wet_walk", &uLocal_1246, 8, &uLocal_911);
			break;
		
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				GlobalFunc_2532(Local_627.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[0 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[1 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[2 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				GlobalFunc_2532(Local_659.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			GlobalFunc_5928("missfam5_wet_walk", &uLocal_1246, 8, &uLocal_911);
			break;
		
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				GlobalFunc_2532(Local_627.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[0 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[1 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[2 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				GlobalFunc_2532(Local_659.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				GlobalFunc_2532(Local_659.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			break;
		
		case 11:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				GlobalFunc_2532(Local_627.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[0 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[0 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[1 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[1 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1263[2 /*11*/]))
			{
				GlobalFunc_2532(Local_1263[2 /*11*/].f_1, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				GlobalFunc_2532(Local_659.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			break;
		
		case 12:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				GlobalFunc_2532(Local_627.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_643))
			{
				GlobalFunc_2532(Local_643.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				GlobalFunc_2532(Local_659.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			break;
		
		case 13:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				GlobalFunc_2532(Local_627.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				GlobalFunc_2532(Local_659.f_6, &uLocal_1235, 10, &uLocal_910);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_666))
			{
				GlobalFunc_2532(Local_666.f_1, &uLocal_1235, 10, &uLocal_910);
			}
			GlobalFunc_5928("missfam5_drink", &uLocal_1246, 8, &uLocal_911);
			break;
		
		case 16:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1255[0 /*7*/]))
			{
				GlobalFunc_2532(Local_1255[0 /*7*/].f_6, &uLocal_1235, 10, &uLocal_910);
			}
			GlobalFunc_5928("missfam5_blackout", &uLocal_1246, 8, &uLocal_911);
			break;
	}
}





void func_707()//Position - 0x6CE6A
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1189;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_1189[iVar1] = 0;
		iVar1++;
	}
	iLocal_1220 = 0;
}



void func_710(int iParam0)//Position - 0x6CF21
{
	func_711(iParam0);
	Local_765.f_2 = { -816.716f, 179.098f, 72.8274f };
	Local_765.f_1 = joaat("v_ilev_mm_doorm_l");
	Local_776.f_2 = { -816.1068f, 177.5108f, 72.8274f };
	Local_776.f_1 = joaat("v_ilev_mm_doorm_r");
	Local_699.f_2 = { -1179.292f, -891.4589f, 13.8687f };
	Local_699.f_1 = joaat("prop_bs_map_door_01");
	Local_754.f_2 = { -1179.29f, -891.459f, 13.8687f };
	Local_754.f_5 = { 0f, 0f, 124.1f };
	Local_754.f_1 = joaat("p_bs_map_door_01_s");
	switch (iParam0)
	{
		case 0:
			Local_1316.f_1 = { -823.9692f, 179.8976f, 70.5228f };
			Local_1316.f_4 = 260.0065f;
			break;
		
		case 1:
		case 2:
			Local_1316.f_1 = { -805.9919f, 170.962f, 71.8447f };
			Local_1316.f_4 = 293.2728f;
			Local_595.f_2 = { -789.032f, 185.876f, 71.8353f };
			Local_595.f_5 = 26.70785f;
			Local_595.f_6 = GlobalFunc_4946(17);
			Local_611.f_2 = { -789.419f, 187.649f, 71.8353f };
			Local_611.f_5 = 141.3057f;
			Local_611.f_6 = joaat("ig_fabien");
			break;
		
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			Local_1316.f_1 = { -790.906f, 186.293f, 71.8351f };
			Local_1316.f_4 = 275.0742f;
			Local_595.f_2 = { -789.032f, 185.876f, 71.8353f };
			Local_595.f_5 = 26.70785f;
			Local_595.f_6 = GlobalFunc_4946(17);
			Local_611.f_2 = { -789.419f, 187.649f, 71.8353f };
			Local_611.f_5 = 141.3057f;
			Local_611.f_6 = joaat("ig_fabien");
			break;
		
		case 9:
			Local_1316.f_1 = { -789.995f, 181.611f, 71.835f };
			Local_1316.f_4 = 92.55132f;
			Local_627.f_2 = { -805.7374f, 168.7947f, 75.7409f };
			Local_627.f_5 = 132f;
			Local_627.f_6 = GlobalFunc_4946(14);
			Local_659.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_659.f_5 = 137.1847f;
			Local_659.f_6 = GlobalFunc_4931(0, 0);
			Local_721.f_2 = { -808.22f, 168.81f, 75.75f };
			Local_721.f_1 = joaat("prop_controller_01");
			Local_732.f_2 = { -808.35f, 169.36f, 75.75f };
			Local_732.f_1 = joaat("prop_headset_01");
			break;
		
		case 10:
			Local_1316.f_1 = { -804.9048f, 179.4079f, 75.7408f };
			Local_1316.f_4 = 185.1595f;
			Local_627.f_2 = { -808.5767f, 169.9767f, 75.7406f };
			Local_627.f_5 = 89.3525f;
			Local_627.f_6 = GlobalFunc_4946(14);
			Local_659.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_659.f_5 = 137.1847f;
			Local_659.f_6 = GlobalFunc_4931(0, 0);
			Local_721.f_2 = { -806.184f, 170.435f, 76.47f };
			Local_721.f_5 = { -64f, 50f, -92f };
			Local_721.f_1 = joaat("prop_controller_01");
			Local_732.f_2 = { -806.598f, 170.28f, 76.475f };
			Local_732.f_5 = { -94f, 0f, 0f };
			Local_732.f_1 = joaat("prop_headset_01");
			break;
		
		case 11:
			Local_1316.f_1 = { -807.127f, 172.5753f, 75.7407f };
			Local_1316.f_4 = 324.5707f;
			Local_659.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_659.f_5 = 137.1847f;
			Local_659.f_6 = GlobalFunc_4931(0, 0);
			Local_627.f_2 = { -804.8173f, 176.2879f, 75.7408f };
			Local_627.f_5 = 335.1849f;
			Local_627.f_6 = GlobalFunc_4946(14);
			Local_643.f_2 = { -1177.89f, -892.36f, 12.76f };
			Local_643.f_5 = 315.7144f;
			Local_643.f_6 = joaat("u_m_y_burgerdrug_01");
			Local_721.f_2 = { -806.184f, 170.435f, 76.47f };
			Local_721.f_5 = { -64f, 50f, -92f };
			Local_721.f_1 = joaat("prop_controller_01");
			Local_732.f_2 = { -806.598f, 170.28f, 76.475f };
			Local_732.f_5 = { -94f, 0f, 0f };
			Local_732.f_1 = joaat("prop_headset_01");
			Local_688.f_2 = { -1176.78f, -892.36f, 12.93f };
			Local_688.f_1 = joaat("prop_cs_ciggy_01");
			Local_710.f_2 = { -1176.78f, -892.36f, 12.93f };
			Local_710.f_1 = joaat("p_meth_bag_01_s");
			break;
		
		case 12:
			Local_1316.f_1 = { -1175.533f, -886.3669f, 12.9041f };
			Local_1316.f_4 = 211.4735f;
			Local_659.f_2 = { -1176.4f, -887.6f, 12.864f };
			Local_659.f_5 = 212.06f;
			Local_659.f_6 = GlobalFunc_4931(0, 0);
			Local_627.f_2 = { -1176.74f, -887.948f, 12.5514f };
			Local_627.f_5 = 199.7749f;
			Local_627.f_6 = GlobalFunc_4946(14);
			Local_643.f_2 = { -1177.89f, -892.36f, 12.76f };
			Local_643.f_5 = 315.7144f;
			Local_643.f_6 = joaat("u_m_y_burgerdrug_01");
			Local_666.f_2 = { -1180.36f, -892.87f, 12.8f };
			Local_666.f_5 = { 0f, 0f, 0f };
			Local_666.f_8 = { 0f, 0f, 0f };
			Local_666.f_1 = joaat("prop_cs_bs_cup");
			break;
		
		case 13:
			Local_1316.f_1 = { -1175.533f, -886.3669f, 12.9041f };
			Local_1316.f_4 = 211.4735f;
			Local_659.f_2 = { -1176.4f, -887.6f, 12.864f };
			Local_659.f_5 = 212.06f;
			Local_659.f_6 = GlobalFunc_4931(0, 0);
			Local_627.f_2 = { -1176.74f, -887.948f, 12.5514f };
			Local_627.f_5 = 199.7749f;
			Local_627.f_6 = GlobalFunc_4946(14);
			Local_666.f_2 = { -1176.571f, -888.149f, 13.6039f };
			Local_666.f_5 = { 0f, 0f, 0f };
			Local_666.f_8 = { 0f, -0.06f, 0.03f };
			Local_666.f_1 = joaat("prop_cs_bs_cup");
			break;
		
		case 14:
			Local_1316.f_1 = { -20.2621f, -219.8899f, 45.1815f };
			Local_1316.f_4 = 352.7035f;
			break;
		
		case 15:
			Local_1316.f_1 = { -20.2621f, -219.8899f, 45.1815f };
			Local_1316.f_4 = 352.7035f;
			break;
		
		case 16:
			Local_1316.f_1 = { -966.9352f, 309.2517f, 69.2397f };
			Local_1316.f_4 = 252.8672f;
			Local_1255[0 /*7*/].f_2 = { -946.8423f, 313f, 70.34f };
			Local_1255[0 /*7*/].f_5 = 269.0366f;
			Local_1255[0 /*7*/].f_6 = joaat("scorcher");
			Local_677.f_2 = { -800.663f, 184.017f, 72.525f };
			Local_677.f_5 = { 0f, 0f, 20f };
			Local_677.f_1 = joaat("prop_amanda_note_01");
			break;
		
		case 17:
			Local_1316.f_1 = { -802.3392f, 182.5324f, 71.6055f };
			Local_1316.f_4 = 293.7678f;
			Local_677.f_2 = { -800.663f, 184.017f, 72.525f };
			Local_677.f_5 = { 0f, 0f, 20f };
			Local_677.f_1 = joaat("prop_amanda_note_01");
			break;
		
		case 18:
			Local_1316.f_1 = { -820.5433f, 176.9832f, 70.6124f };
			Local_1316.f_4 = 44.9042f;
			break;
	}
}

void func_711(int iParam0)//Position - 0x6D6F0
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			Local_1263[0 /*11*/].f_2 = { -791.1636f, 186.4052f, 71.8295f };
			Local_1263[0 /*11*/].f_5 = { 0f, 0f, -85.0403f };
			Local_1263[0 /*11*/].f_1 = joaat("prop_yoga_mat_01");
			Local_1263[1 /*11*/].f_2 = { -789.3542f, 187.8925f, 71.8295f };
			Local_1263[1 /*11*/].f_5 = { 0f, 0f, -18.5437f };
			Local_1263[1 /*11*/].f_1 = joaat("prop_yoga_mat_02");
			Local_1263[2 /*11*/].f_2 = { -789.007f, 185.9859f, 71.8295f };
			Local_1263[2 /*11*/].f_5 = { 0f, 0f, 31.6581f };
			Local_1263[2 /*11*/].f_1 = joaat("prop_yoga_mat_03");
			break;
		
		case 4:
		case 5:
			Local_1263[0 /*11*/].f_2 = { -791.152f, 186.2719f, 71.8295f };
			Local_1263[0 /*11*/].f_5 = { 0f, 0f, -85.0403f };
			Local_1263[0 /*11*/].f_1 = joaat("prop_yoga_mat_01");
			Local_1263[1 /*11*/].f_2 = { -789.3542f, 187.8925f, 71.8295f };
			Local_1263[1 /*11*/].f_5 = { 0f, 0f, -18.5437f };
			Local_1263[1 /*11*/].f_1 = joaat("prop_yoga_mat_02");
			Local_1263[2 /*11*/].f_2 = { -789.007f, 185.9859f, 71.8295f };
			Local_1263[2 /*11*/].f_5 = { 0f, 0f, 31.6581f };
			Local_1263[2 /*11*/].f_1 = joaat("prop_yoga_mat_03");
			break;
		
		default:
			Local_1263[0 /*11*/].f_2 = { -791.53f, 186.375f, 71.835f };
			Local_1263[0 /*11*/].f_5 = { 0f, 0f, 0f };
			Local_1263[0 /*11*/].f_1 = joaat("prop_yoga_mat_01");
			Local_1263[1 /*11*/].f_2 = { -789.164f, 188.236f, 71.835f };
			Local_1263[1 /*11*/].f_5 = { 0f, 0f, -108f };
			Local_1263[1 /*11*/].f_1 = joaat("prop_yoga_mat_02");
			Local_1263[2 /*11*/].f_2 = { -788.613f, 185.352f, 71.835f };
			Local_1263[2 /*11*/].f_5 = { 0f, 0f, -238.91f };
			Local_1263[2 /*11*/].f_1 = joaat("prop_yoga_mat_03");
			break;
	}
}





void func_716()//Position - 0x6D9DE
{
	int iVar0;
	
	Local_1297[0 /*3*/] = "DRUGS_ALIENS";
	Local_1297[1 /*3*/] = "DRUGS_CHIMPS";
	Local_1297[2 /*3*/] = "DRUGS_HEARTBEAT";
	Local_1297[3 /*3*/] = "DRUGS_TAKE";
	Local_1297[4 /*3*/] = "DRUGS_VOMIT";
	Local_1297[5 /*3*/] = "TAP_LOOP";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1297.x - 1))
	{
		Local_1297[iVar0 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
}

void func_717()//Position - 0x6DA4E
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_ON_DRUGS"))
	{
		AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_5_YOGA_ON_DRUGS", "DrugsEffect", ((SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f)) * 0.5f) + 0.5f));
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_5_YOGA_ON_DRUGS", "DrugsEffectSpeech", (((0.5f * SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f))) * 0.5f) + 0.5f));
	}
}

void func_718(var uParam0)//Position - 0x6DADD
{
	switch (*uParam0)
	{
		case 2:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_CHIMPS", 0))
			{
				*uParam0 = 0;
			}
			break;
		
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_ALIENS", 0))
			{
				*uParam0 = 0;
			}
			break;
		
		case 3:
		case 4:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_DRUGS_01", 0))
			{
				*uParam0 = 0;
			}
			break;
		
		case 5:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAXI_VOMIT", 0))
			{
				*uParam0 = 0;
			}
			break;
		
		case 6:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_WASH_FACE", 0))
			{
				*uParam0 = 0;
			}
			break;
	}
}

void func_719(struct<3> Param0, float fParam3)//Position - 0x6DB75
{
	if (!GlobalFunc_100(Param0, 0f, 0f, 0f))
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > fParam3)
			{
				INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
			}
		}
	}
}

void func_720(int iParam0, var uParam1)//Position - 0x6DBBF
{
	if (*iParam0 != 19 && *iParam0 != 20)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if ((*iParam0 == 3 || *iParam0 == 5) || *iParam0 == 7)
			{
				if (iLocal_1221[1] == 1)
				{
					if (Local_787.f_14 >= 3)
					{
						*uParam1 = 1;
						*iParam0 = 20;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_595))
			{
				if (iLocal_1221[5] == 1)
				{
					if (PED::IS_PED_INJURED(Local_595))
					{
						*uParam1 = 5;
						*iParam0 = 20;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_611))
			{
				if (iLocal_1221[6] == 1)
				{
					if (PED::IS_PED_INJURED(Local_611))
					{
						*uParam1 = 6;
						*iParam0 = 20;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_627))
			{
				if (iLocal_1221[7] == 1)
				{
					if (PED::IS_PED_INJURED(Local_627))
					{
						*uParam1 = 7;
						*iParam0 = 20;
					}
				}
				if (iLocal_1221[8] == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_844.f_1[0]) || HUD::DOES_BLIP_EXIST(Local_627.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_627))
						{
							if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_627) > 100f || iLocal_917 == 1)
							{
								*uParam1 = 8;
								*iParam0 = 20;
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_659))
			{
				if (iLocal_1221[2] == 1)
				{
					if (GlobalFunc_2226(&Local_659))
					{
						*uParam1 = 2;
						*iParam0 = 20;
					}
				}
				if (iLocal_1221[3] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 1) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_659, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_659, joaat("weapon_molotov"), 0)))
					{
						*uParam1 = 3;
						*iParam0 = 20;
					}
				}
				if (iLocal_1221[4] == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_844) || HUD::DOES_BLIP_EXIST(Local_659.f_1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_659, 1) > 100f)
							{
								*uParam1 = 4;
								*iParam0 = 20;
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_643))
			{
				if (iLocal_1221[11] == 1)
				{
					if (PED::IS_PED_INJURED(Local_643))
					{
						*uParam1 = 11;
						*iParam0 = 20;
					}
				}
				if (iLocal_1221[10] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_643))
					{
						if (((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_643, PLAYER::PLAYER_PED_ID(), 1) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_643, Local_659, 1))) || func_722(PLAYER::PLAYER_PED_ID(), 1, Local_643, 1, 2.5f)) || func_721(PLAYER::PLAYER_PED_ID(), Local_643, 3f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_643, PLAYER::PLAYER_PED_ID())) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 50)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 132)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 86)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 59)) || PED::HAS_PED_RECEIVED_EVENT(Local_643, 60)) || (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1163.59f, -901.6f, 1.64f, -1184.38f, -870.28f, 20.92f, 32f, 0, 1, 0))) || PED::IS_PED_FLEEING(Local_643))
						{
							AUDIO::PLAY_PAIN(Local_643, 5, 0, 0);
							if (!PED::IS_PED_FLEEING(Local_643))
							{
								func_525(Local_643, PLAYER::PLAYER_PED_ID(), 300f, -1);
							}
							*uParam1 = 10;
							*iParam0 = 20;
						}
					}
				}
			}
		}
	}
}

int func_721(int iParam0, int iParam1, float fParam2)//Position - 0x6DF52
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_petrolcan"))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &uVar4))
						{
							Var1.f_2 = uVar4;
						}
						if (PED::IS_PED_SHOOTING(iParam0) && GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(Var1, fParam2))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_722(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x6DFC8
{
	struct<3> Var0;
	var uVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				if (iParam3 == 1)
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3))
					{
						Var0.f_2 = uVar3;
					}
					if (func_723(iParam0, iParam1, Var0, fParam4))
					{
						return 1;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam2, iParam0, 0))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam2, 0, 2))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam2);
						WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iParam2);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_723(int iParam0, var uParam1, struct<3> Param2, var uParam5)//Position - 0x6E04E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return MISC::IS_BULLET_IN_AREA(Param2, uParam5, uParam1);
		}
	}
	return 0;
}









































int func_764(int iParam0)//Position - 0x72C40
{
	var uVar0;
	var uVar1;
	
	switch (iParam0)
	{
		case 3:
		case 5:
		case 7:
			return 8;
			break;
		
		case 17:
			return 17;
			break;
	}
	uVar0 = iParam0 + 1;
	uVar1 = uVar0;
	return uVar1;
}

void func_765(var uParam0, int iParam1)//Position - 0x72C83
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		*uParam0 = 3;
		GlobalFunc_741(21, &iVar0, &iVar1);
		if (!GlobalFunc_5183(iVar1, iVar0))
		{
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
		}
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 5;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 7;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 9;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 11;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 13;
	}
	else if (iParam1 == 6)
	{
		*uParam0 = 16;
	}
	bLocal_907 = true;
}





void func_770(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x72E14
{
	if (iParam0 != 198)
	{
		if (Global_68245)
		{
			Global_2422140.f_73.f_226[iParam0] = iParam1;
		}
		else
		{
			Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[iParam0] = iParam1;
		}
		Global_31962[iParam0] = bParam2;
		Global_32161[iParam0] = 1;
		func_773(iParam0, bParam3, iParam4, 0);
		GlobalFunc_4920(iParam0, iParam1);
	}
}



bool func_773(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x72F8C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	GlobalFunc_60(&Var3, iParam0);
	if (GlobalFunc_4921())
	{
		iVar1 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT.f_226[iParam0];
	}
	else
	{
		iVar1 = Global_2422140.f_73.f_226[iParam0];
	}
	iVar2 = Global_32360[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_31962[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_33556[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_33357[iParam0] = 1;
					Global_33556[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_50)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_50)))
							{
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar100);
						}
					}
					Global_33556[iParam0] = 1;
					Global_33357[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f)
					{
						uVar98 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uVar98))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98, 3);
								Global_33556[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98) != 7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uVar98, 10);
									Global_33556[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						MISC::CLEAR_BIT(&(Global_31709[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						MISC::SET_BIT(&(Global_31709[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32161[iParam0] = 0;
				Global_32360[iParam0] = iVar1;
				if (!GlobalFunc_4921())
				{
					if (!Global_32957[iParam0])
					{
						Global_32957[iParam0] = 1;
						Global_33156++;
					}
				}
			}
		}
	}
	return bVar0;
}



void func_776()//Position - 0x771C3
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_659))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_659, 0))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_659, true, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_659, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_659))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_659) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_659, 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_659);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_659);
		}
	}
	func_778(&Local_595, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_778(&Local_611, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_778(&Local_627, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_778(&Local_643, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_1255[0 /*7*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1255[0 /*7*/]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1255[0 /*7*/]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1255[0 /*7*/], 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1255[0 /*7*/]));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_754))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_699.f_2, 1f, Local_699.f_1, !CAM::IS_SCREEN_FADED_OUT());
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_765.x))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_765.f_2, 1f, Local_765.f_1, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_776.x))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_776.f_2, 1f, Local_776.f_1, false);
	}
	func_516(&iLocal_743, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_721, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_732, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_666, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_677, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_688, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_710, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_699, 0);
	func_516(&Local_754, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_765, CAM::IS_SCREEN_FADED_OUT());
	func_516(&Local_776, CAM::IS_SCREEN_FADED_OUT());
	func_517(&Local_1263, CAM::IS_SCREEN_FADED_OUT());
	STREAMING::REMOVE_ANIM_DICT("missfam5_yoga");
	STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6");
	STREAMING::REMOVE_ANIM_DICT("missfam5_drink");
	STREAMING::REMOVE_ANIM_DICT("missfam5_flying");
	STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6drag");
	STREAMING::REMOVE_ANIM_DICT("missfam5_wet_walk");
	STREAMING::REMOVE_ANIM_DICT("missfam5_blackout");
	STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
	STREAMING::REMOVE_ANIM_DICT("missfam5mcs_4leadin");
	STREAMING::REMOVE_ANIM_DICT("missfam5leadinoutmcs_5");
	GlobalFunc_110();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(1);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_y_burgerdrug_01"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), 0);
	VEHICLE::REMOVE_VEHICLE_ASSET(GlobalFunc_4931(0, 0));
	GlobalFunc_7632(0);
	GlobalFunc_699();
	GlobalFunc_8380(0, 1, 1, 0);
	HUD::DISPLAY_RADAR(1);
	GlobalFunc_5476(1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::_0x324C5AA411DA7737(1);
	if (CAM::DOES_CAM_EXIST(uLocal_1122))
	{
		CAM::SET_CAM_ACTIVE(uLocal_1122, 0);
		CAM::DESTROY_CAM(uLocal_1122, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1123))
	{
		CAM::SET_CAM_ACTIVE(uLocal_1123, 0);
		CAM::DESTROY_CAM(uLocal_1123, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_1124))
	{
		CAM::SET_CAM_ACTIVE(uLocal_1124, 0);
		CAM::DESTROY_CAM(uLocal_1124, 0);
	}
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::STOP_STREAM();
	func_779(6);
	func_779(5);
	func_779(4);
	func_779(2);
	func_779(1);
	func_779(3);
	func_777();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_DRUG_FLIGHT_END");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM");
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", 1);
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	GRAPHICS::ANIMPOSTFX_STOP("DMT_flight");
	GRAPHICS::ANIMPOSTFX_STOP("DrugsDrivingIn");
	GRAPHICS::ANIMPOSTFX_STOP("DrugsDrivingOut");
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(0);
	if (iLocal_1121 == 1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS");
		iLocal_1121 = 0;
	}
	AUDIO::CANCEL_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
	GlobalFunc_8395(PLAYER::PLAYER_PED_ID());
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1850241841);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 0, 0, 1);
	}
	GlobalFunc_2224(0);
	func_541(5, 0);
	GlobalFunc_563(0);
	GlobalFunc_9132(0);
	GlobalFunc_585(65, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_1154);
	GRAPHICS::SET_TV_VOLUME(0f);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("mansion_1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("family5b");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("family5c");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("family5d");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("f5_jimmy1");
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_935))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_935, 0);
	}
	GlobalFunc_52(1, 1);
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	STREAMING::REMOVE_IPL("SpaceInterior");
	STATS::_0x98E2BC1CA26287C3();
	AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
}

void func_777()//Position - 0x776CC
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1297.x - 1))
	{
		if (Local_1297[iVar0 /*3*/].f_1 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(Local_1297[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
}

void func_778(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x77707
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*uParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*uParam0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*uParam0))
				{
					if (PED::IS_PED_GROUP_MEMBER(*uParam0, GlobalFunc_468()))
					{
						PED::REMOVE_PED_FROM_GROUP(*uParam0);
					}
					PED::SET_PED_KEEP_TASK(*uParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (PED::IS_PED_INJURED(*uParam0) || !PED::IS_PED_INJURED(*uParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
				}
				PED::DELETE_PED(uParam0);
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1));
				}
			}
		}
		uParam0->f_9 = 0;
		uParam0->f_7 = 0;
		uParam0->f_14 = 0;
		uParam0->f_15 = 0;
	}
}

void func_779(int iParam0)//Position - 0x7781D
{
	switch (iParam0)
	{
		case 2:
			if (Local_1297[1 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_1297[1 /*3*/].f_1);
			}
			break;
		
		case 1:
			if (Local_1297[0 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_1297[0 /*3*/].f_1);
			}
			break;
		
		case 3:
			if (Local_1297[2 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_1297[2 /*3*/].f_1);
			}
			break;
		
		case 5:
			if (Local_1297[4 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_1297[4 /*3*/].f_1);
			}
			break;
		
		case 6:
			if (Local_1297[5 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_1297[5 /*3*/].f_1);
			}
			break;
	}
}



