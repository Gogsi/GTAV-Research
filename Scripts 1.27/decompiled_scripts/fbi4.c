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
	int iLocal_28 = 0;
	bool bLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = 0;
	bool bLocal_37 = 0;
	int iLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	float fLocal_61[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_102[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_143[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_184[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_225[40] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	float fLocal_270[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_293[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_316[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_339[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_362[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_385[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_408[4] = { 0f, 0f, 0f, 0f };
	float fLocal_413[4] = { 0f, 0f, 0f, 0f };
	float fLocal_418[4] = { 0f, 0f, 0f, 0f };
	float fLocal_423[4] = { 0f, 0f, 0f, 0f };
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	float fLocal_434 = 0f;
	float fLocal_435 = 0f;
	float fLocal_436 = 0f;
	float fLocal_437 = 0f;
	float fLocal_438 = 0f;
	float fLocal_439 = 0f;
	float fLocal_440 = 0f;
	float fLocal_441 = 0f;
	float fLocal_442 = 0f;
	float fLocal_443 = 0f;
	float fLocal_444 = 0f;
	float fLocal_445 = 0f;
	float fLocal_446 = 0f;
	float fLocal_447 = 0f;
	float fLocal_448 = 0f;
	int iLocal_449[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_490[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_531[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_572[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_595[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_618[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_641[4] = { 0, 0, 0, 0 };
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	struct<3> Local_663[40];
	struct<3> Local_784[4];
	struct<3> Local_797[22];
	struct<3> Local_864 = { 0, 0, 0 } ;
	struct<3> Local_867 = { 0, 0, 0 } ;
	struct<3> Local_870 = { 0, 0, 0 } ;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	struct<3> Local_879 = { 0, 0, 0 } ;
	struct<3> Local_882 = { 0, 0, 0 } ;
	struct<3> Local_885 = { 0, 0, 0 } ;
	struct<3> Local_888 = { 0, 0, 0 } ;
	char cLocal_891[64] = "";
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_949[4] = { 0, 0, 0, 0 };
	int iLocal_954[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980[40] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1021[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1036[4] = { 0, 0, 0, 0 };
	int iLocal_1041[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1064[4] = { 0, 0, 0, 0 };
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	int iLocal_1071 = 0;
	var uLocal_1072 = 14;
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
	int iLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	float fLocal_1090 = 0f;
	float fLocal_1091 = 0f;
	float fLocal_1092 = 0f;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	int iLocal_1098 = 0;
	int iLocal_1099 = 0;
	int iLocal_1100 = 0;
	int iLocal_1101 = 0;
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
	struct<3> Local_1116 = { 0, 0, 0 } ;
	struct<3> Local_1119 = { 0, 0, 0 } ;
	int iLocal_1122 = 0;
	var uLocal_1123 = 0;
	float fLocal_1124 = 0f;
	int iLocal_1125 = 0;
	int iLocal_1126[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1163[3] = { 0, 0, 0 };
	int iLocal_1167[3] = { 0, 0, 0 };
	int iLocal_1171[4] = { 0, 0, 0, 0 };
	struct<7> Local_1176 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	struct<10> Local_1191 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	struct<7> Local_1206 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	struct<15> Local_1221[14];
	struct<15> Local_1432[2];
	struct<14> Local_1463 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1477 = 0;
	struct<8> Local_1478 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	struct<15> Local_1493[8];
	struct<14> Local_1614 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1628 = 0;
	struct<7> Local_1629 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	struct<15> Local_1644 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	struct<15> Local_1664 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	struct<17> Local_1684 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	struct<17> Local_1704 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	struct<20> Local_1724[36];
	struct<20> Local_2445[4];
	struct<20> Local_2526[2];
	struct<15> Local_2567 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	struct<11> Local_2587 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	struct<11> Local_2607 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	struct<16> Local_2627 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	struct<20> Local_2647[3];
	struct<20> Local_2708[3];
	struct<20> Local_2769[2];
	int iLocal_2810 = 0;
	struct<5> Local_2811[24];
	struct<21> Local_2932 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	struct<3> Local_2956 = { 0, 0, 0 } ;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	struct<13> Local_2980 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	struct<3> Local_3004 = { 0, 0, 0 } ;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	struct<13> Local_3028 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	struct<10> Local_3052[2];
	struct<6> Local_3073 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_3079 = 0;
	var uLocal_3080 = 1092616192;
	var uLocal_3081 = 1101004800;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 3;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 4;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 4;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 4;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 4;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 4;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 4;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 4;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	struct<20> Local_3142 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	int iLocal_3176 = 0;
	int iLocal_3177 = 0;
	bool bLocal_3178 = 0;
	bool bLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	bool bLocal_3183 = 0;
	int iLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	bool bLocal_3188 = 0;
	int iLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	bool bLocal_3193 = 0;
	bool bLocal_3194 = 0;
	int iLocal_3195 = 0;
	bool bLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	bool bLocal_3202 = 0;
	bool bLocal_3203 = 0;
	bool bLocal_3204 = 0;
	bool bLocal_3205 = 0;
	int iLocal_3206 = 0;
	int iLocal_3207 = 0;
	bool bLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	bool bLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	bool bLocal_3216 = 0;
	bool bLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222 = 0;
	int iLocal_3223 = 0;
	int iLocal_3224 = 0;
	int iLocal_3225 = 0;
	int iLocal_3226 = 0;
	int iLocal_3227 = 0;
	int iLocal_3228 = 0;
	int iLocal_3229 = 0;
	int iLocal_3230 = 0;
	int iLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	int iLocal_3239 = 0;
	int iLocal_3240 = 0;
	int iLocal_3241 = 0;
	int iLocal_3242 = 0;
	int iLocal_3243 = 0;
	int iLocal_3244 = 0;
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250 = 0;
	int iLocal_3251 = 0;
	int iLocal_3252 = 0;
	int iLocal_3253 = 0;
	int iLocal_3254 = 0;
	int iLocal_3255 = 0;
	int iLocal_3256 = 0;
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int iLocal_3260[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3281 = 0;
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	int iLocal_3284 = 0;
	int iLocal_3285 = 0;
	int iLocal_3286 = 0;
	int iLocal_3287 = 0;
	int iLocal_3288 = 0;
	int iLocal_3289 = 0;
	int iLocal_3290 = 0;
	int iLocal_3291 = 0;
	int iLocal_3292 = 0;
	int iLocal_3293 = 0;
	int iLocal_3294 = 0;
	int iLocal_3295 = 0;
	int iLocal_3296 = 0;
	int iLocal_3297 = 0;
	var uLocal_3298 = 0;
	int iLocal_3299 = 0;
	int iLocal_3300 = 0;
	int iLocal_3301 = 0;
	int iLocal_3302 = 0;
	var uLocal_3303 = 0;
	int iLocal_3304 = 0;
	int iLocal_3305 = 0;
	int iLocal_3306 = 0;
	int iLocal_3307 = 0;
	int iLocal_3308 = 0;
	int iLocal_3309 = 0;
	int iLocal_3310 = 0;
	int iLocal_3311 = 0;
	int iLocal_3312 = 0;
	int iLocal_3313 = 0;
	int iLocal_3314 = 0;
	int iLocal_3315 = 0;
	int iLocal_3316 = 0;
	int iLocal_3317[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	int iLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364 = 0;
	int iLocal_3365 = 0;
	int iLocal_3366 = 0;
	int iLocal_3367[2] = { 0, 0 };
	int iLocal_3370 = 0;
	int iLocal_3371 = 0;
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	int iLocal_3374 = 0;
	int iLocal_3375 = 0;
	int iLocal_3376 = 0;
	int iLocal_3377 = 0;
	int iLocal_3378 = 0;
	int iLocal_3379 = 0;
	int iLocal_3380 = 0;
	int iLocal_3381 = 0;
	int iLocal_3382 = 0;
	int iLocal_3383 = 0;
	int iLocal_3384 = 0;
	int iLocal_3385 = 0;
	int iLocal_3386 = 0;
	int iLocal_3387 = 0;
	int iLocal_3388 = 0;
	int iLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	int iLocal_3399 = 0;
	int iLocal_3400 = 0;
	int iLocal_3401[2] = { 0, 0 };
	int iLocal_3404 = 0;
	int iLocal_3405 = 0;
	int iLocal_3406 = 0;
	int iLocal_3407 = 0;
	int iLocal_3408 = 0;
	int iLocal_3409 = 0;
	int iLocal_3410 = 0;
	struct<3> Local_3411 = { 0, 0, 0 } ;
	struct<3> Local_3414 = { 0, 0, 0 } ;
	struct<3> Local_3417 = { 0, 0, 0 } ;
	struct<3> Local_3420 = { 0, 0, 0 } ;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	struct<3> Local_3426 = { 0, 0, 0 } ;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	struct<3> Local_3432 = { 0, 0, 0 } ;
	struct<3> Local_3435[2];
	float fLocal_3442 = 0f;
	float fLocal_3443 = 0f;
	float fLocal_3444 = 0f;
	float fLocal_3445 = 0f;
	char* sLocal_3446 = NULL;
	char* sLocal_3447 = NULL;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	struct<165> Local_3472[2];
	var uLocal_3803 = 0;
	int iLocal_3804 = 0;
	var uLocal_3805 = 0;
	int iLocal_3806 = 0;
	struct<3> Local_3807 = { 0, 0, 0 } ;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	int iLocal_3828 = 0;
	int iLocal_3829 = 0;
	int iLocal_3830 = 0;
	int iLocal_3831 = 0;
	int iLocal_3832 = 0;
	int iLocal_3833 = 0;
	int iLocal_3834 = 0;
	int iLocal_3835 = 0;
	float fLocal_3836 = 0f;
	int iLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 2;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 2;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 20;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = -1;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 1065353216;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = -1;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 1065353216;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = -1;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 1065353216;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = -1;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 1065353216;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = -1;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 1065353216;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = -1;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 1065353216;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = -1;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 1065353216;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = -1;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 1065353216;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = -1;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 1065353216;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = -1;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 1065353216;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = -1;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 1065353216;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = -1;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 1065353216;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = -1;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 1065353216;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = -1;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 1065353216;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = -1;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 1065353216;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = -1;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 1065353216;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = -1;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 1065353216;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = -1;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 1065353216;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = -1;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 1065353216;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = -1;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 1065353216;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 16;
	var uLocal_4990 = 0;
	var uLocal_4991 = -1082130432;
	var uLocal_4992 = 0;
	var uLocal_4993 = -1082130432;
	var uLocal_4994 = 0;
	var uLocal_4995 = -1082130432;
	var uLocal_4996 = 0;
	var uLocal_4997 = -1082130432;
	var uLocal_4998 = 0;
	var uLocal_4999 = -1082130432;
	var uLocal_5000 = 0;
	var uLocal_5001 = -1082130432;
	var uLocal_5002 = 0;
	var uLocal_5003 = -1082130432;
	var uLocal_5004 = 0;
	var uLocal_5005 = -1082130432;
	var uLocal_5006 = 0;
	var uLocal_5007 = -1082130432;
	var uLocal_5008 = 0;
	var uLocal_5009 = -1082130432;
	var uLocal_5010 = 0;
	var uLocal_5011 = -1082130432;
	var uLocal_5012 = 0;
	var uLocal_5013 = -1082130432;
	var uLocal_5014 = 0;
	var uLocal_5015 = -1082130432;
	var uLocal_5016 = 0;
	var uLocal_5017 = -1082130432;
	var uLocal_5018 = 0;
	var uLocal_5019 = -1082130432;
	var uLocal_5020 = 0;
	var uLocal_5021 = -1082130432;
	var uLocal_5022 = 16;
	var uLocal_5023 = 0;
	var uLocal_5024 = -1082130432;
	var uLocal_5025 = 0;
	var uLocal_5026 = -1082130432;
	var uLocal_5027 = 0;
	var uLocal_5028 = -1082130432;
	var uLocal_5029 = 0;
	var uLocal_5030 = -1082130432;
	var uLocal_5031 = 0;
	var uLocal_5032 = -1082130432;
	var uLocal_5033 = 0;
	var uLocal_5034 = -1082130432;
	var uLocal_5035 = 0;
	var uLocal_5036 = -1082130432;
	var uLocal_5037 = 0;
	var uLocal_5038 = -1082130432;
	var uLocal_5039 = 0;
	var uLocal_5040 = -1082130432;
	var uLocal_5041 = 0;
	var uLocal_5042 = -1082130432;
	var uLocal_5043 = 0;
	var uLocal_5044 = -1082130432;
	var uLocal_5045 = 0;
	var uLocal_5046 = -1082130432;
	var uLocal_5047 = 0;
	var uLocal_5048 = -1082130432;
	var uLocal_5049 = 0;
	var uLocal_5050 = -1082130432;
	var uLocal_5051 = 0;
	var uLocal_5052 = -1082130432;
	var uLocal_5053 = 0;
	var uLocal_5054 = -1082130432;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = -1082130432;
	var uLocal_5072 = -1082130432;
	var uLocal_5073 = 1;
	var uLocal_5074 = 1;
	var uLocal_5075 = 1;
	var uLocal_5076 = -1;
	var uLocal_5077 = -1;
	var uLocal_5078 = -1;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 2;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 2;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 20;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = -1;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 1065353216;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = -1;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 1065353216;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = -1;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 1065353216;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = -1;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 1065353216;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = -1;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
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
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 1065353216;
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
	var uLocal_5378 = -1;
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
	var uLocal_5408 = 1065353216;
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
	var uLocal_5435 = -1;
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
	var uLocal_5465 = 1065353216;
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
	var uLocal_5492 = -1;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 1065353216;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = -1;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 1065353216;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = -1;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 1065353216;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = -1;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 1065353216;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = -1;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 1065353216;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = -1;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 1065353216;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = -1;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 1065353216;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = -1;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 1065353216;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = -1;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 1065353216;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = -1;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 1065353216;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = -1;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 1065353216;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = -1;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 1065353216;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = -1;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 1065353216;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 16;
	var uLocal_6231 = 0;
	var uLocal_6232 = -1082130432;
	var uLocal_6233 = 0;
	var uLocal_6234 = -1082130432;
	var uLocal_6235 = 0;
	var uLocal_6236 = -1082130432;
	var uLocal_6237 = 0;
	var uLocal_6238 = -1082130432;
	var uLocal_6239 = 0;
	var uLocal_6240 = -1082130432;
	var uLocal_6241 = 0;
	var uLocal_6242 = -1082130432;
	var uLocal_6243 = 0;
	var uLocal_6244 = -1082130432;
	var uLocal_6245 = 0;
	var uLocal_6246 = -1082130432;
	var uLocal_6247 = 0;
	var uLocal_6248 = -1082130432;
	var uLocal_6249 = 0;
	var uLocal_6250 = -1082130432;
	var uLocal_6251 = 0;
	var uLocal_6252 = -1082130432;
	var uLocal_6253 = 0;
	var uLocal_6254 = -1082130432;
	var uLocal_6255 = 0;
	var uLocal_6256 = -1082130432;
	var uLocal_6257 = 0;
	var uLocal_6258 = -1082130432;
	var uLocal_6259 = 0;
	var uLocal_6260 = -1082130432;
	var uLocal_6261 = 0;
	var uLocal_6262 = -1082130432;
	var uLocal_6263 = 16;
	var uLocal_6264 = 0;
	var uLocal_6265 = -1082130432;
	var uLocal_6266 = 0;
	var uLocal_6267 = -1082130432;
	var uLocal_6268 = 0;
	var uLocal_6269 = -1082130432;
	var uLocal_6270 = 0;
	var uLocal_6271 = -1082130432;
	var uLocal_6272 = 0;
	var uLocal_6273 = -1082130432;
	var uLocal_6274 = 0;
	var uLocal_6275 = -1082130432;
	var uLocal_6276 = 0;
	var uLocal_6277 = -1082130432;
	var uLocal_6278 = 0;
	var uLocal_6279 = -1082130432;
	var uLocal_6280 = 0;
	var uLocal_6281 = -1082130432;
	var uLocal_6282 = 0;
	var uLocal_6283 = -1082130432;
	var uLocal_6284 = 0;
	var uLocal_6285 = -1082130432;
	var uLocal_6286 = 0;
	var uLocal_6287 = -1082130432;
	var uLocal_6288 = 0;
	var uLocal_6289 = -1082130432;
	var uLocal_6290 = 0;
	var uLocal_6291 = -1082130432;
	var uLocal_6292 = 0;
	var uLocal_6293 = -1082130432;
	var uLocal_6294 = 0;
	var uLocal_6295 = -1082130432;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = -1082130432;
	var uLocal_6313 = -1082130432;
	var uLocal_6314 = 1;
	var uLocal_6315 = 1;
	var uLocal_6316 = 1;
	var uLocal_6317 = -1;
	var uLocal_6318 = -1;
	var uLocal_6319 = -1;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 2;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 2;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 20;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = -1;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 1065353216;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = -1;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 1065353216;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = -1;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 1065353216;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = -1;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 1065353216;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = -1;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 1065353216;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = -1;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 1065353216;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = -1;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 1065353216;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = -1;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 1065353216;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = -1;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 1065353216;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = -1;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 1065353216;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = -1;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 1065353216;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = -1;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 1065353216;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = -1;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = 0;
	var uLocal_7048 = 1065353216;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = -1;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = 0;
	var uLocal_7105 = 1065353216;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = -1;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 1065353216;
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
	var uLocal_7175 = 0;
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
	var uLocal_7189 = -1;
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
	var uLocal_7201 = 0;
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
	var uLocal_7219 = 1065353216;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = -1;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 1065353216;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 0;
	var uLocal_7299 = 0;
	var uLocal_7300 = 0;
	var uLocal_7301 = 0;
	var uLocal_7302 = 0;
	var uLocal_7303 = -1;
	var uLocal_7304 = 0;
	var uLocal_7305 = 0;
	var uLocal_7306 = 0;
	var uLocal_7307 = 0;
	var uLocal_7308 = 0;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 0;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 1065353216;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = -1;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 0;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 0;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 0;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 1065353216;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = -1;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = 0;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 1065353216;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 16;
	var uLocal_7472 = 0;
	var uLocal_7473 = -1082130432;
	var uLocal_7474 = 0;
	var uLocal_7475 = -1082130432;
	var uLocal_7476 = 0;
	var uLocal_7477 = -1082130432;
	var uLocal_7478 = 0;
	var uLocal_7479 = -1082130432;
	var uLocal_7480 = 0;
	var uLocal_7481 = -1082130432;
	var uLocal_7482 = 0;
	var uLocal_7483 = -1082130432;
	var uLocal_7484 = 0;
	var uLocal_7485 = -1082130432;
	var uLocal_7486 = 0;
	var uLocal_7487 = -1082130432;
	var uLocal_7488 = 0;
	var uLocal_7489 = -1082130432;
	var uLocal_7490 = 0;
	var uLocal_7491 = -1082130432;
	var uLocal_7492 = 0;
	var uLocal_7493 = -1082130432;
	var uLocal_7494 = 0;
	var uLocal_7495 = -1082130432;
	var uLocal_7496 = 0;
	var uLocal_7497 = -1082130432;
	var uLocal_7498 = 0;
	var uLocal_7499 = -1082130432;
	var uLocal_7500 = 0;
	var uLocal_7501 = -1082130432;
	var uLocal_7502 = 0;
	var uLocal_7503 = -1082130432;
	var uLocal_7504 = 16;
	var uLocal_7505 = 0;
	var uLocal_7506 = -1082130432;
	var uLocal_7507 = 0;
	var uLocal_7508 = -1082130432;
	var uLocal_7509 = 0;
	var uLocal_7510 = -1082130432;
	var uLocal_7511 = 0;
	var uLocal_7512 = -1082130432;
	var uLocal_7513 = 0;
	var uLocal_7514 = -1082130432;
	var uLocal_7515 = 0;
	var uLocal_7516 = -1082130432;
	var uLocal_7517 = 0;
	var uLocal_7518 = -1082130432;
	var uLocal_7519 = 0;
	var uLocal_7520 = -1082130432;
	var uLocal_7521 = 0;
	var uLocal_7522 = -1082130432;
	var uLocal_7523 = 0;
	var uLocal_7524 = -1082130432;
	var uLocal_7525 = 0;
	var uLocal_7526 = -1082130432;
	var uLocal_7527 = 0;
	var uLocal_7528 = -1082130432;
	var uLocal_7529 = 0;
	var uLocal_7530 = -1082130432;
	var uLocal_7531 = 0;
	var uLocal_7532 = -1082130432;
	var uLocal_7533 = 0;
	var uLocal_7534 = -1082130432;
	var uLocal_7535 = 0;
	var uLocal_7536 = -1082130432;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = -1082130432;
	var uLocal_7554 = -1082130432;
	var uLocal_7555 = 1;
	var uLocal_7556 = 1;
	var uLocal_7557 = 1;
	var uLocal_7558 = -1;
	var uLocal_7559 = -1;
	var uLocal_7560 = -1;
	struct<3> Local_7561 = { 0, 0, 0 } ;
	float fLocal_7564 = 0f;
	int iLocal_7565 = 0;
	float fLocal_7566 = 0f;
	float fLocal_7567 = 0f;
	float fLocal_7568 = 0f;
	float fLocal_7569 = 0f;
	int iLocal_7570 = 0;
	int iLocal_7571 = 0;
	int iLocal_7572 = 0;
	int iLocal_7573 = 0;
	int iLocal_7574 = 0;
	int iLocal_7575 = 0;
	float fLocal_7576 = 0f;
	float fLocal_7577 = 0f;
	int iLocal_7578 = 0;
	float fLocal_7579 = 0f;
	float fLocal_7580 = 0f;
	float fLocal_7581 = 0f;
	float fLocal_7582 = 0f;
	float fLocal_7583 = 0f;
	float fLocal_7584 = 0f;
	int iLocal_7585 = 0;
	int iLocal_7586 = 0;
	int iLocal_7587 = 0;
	int iLocal_7588 = 0;
	int iLocal_7589 = 0;
	int iLocal_7590 = 0;
	int iLocal_7591 = 0;
	int iLocal_7592 = 0;
	int iLocal_7593 = 0;
	int iLocal_7594 = 0;
	int iLocal_7595 = 0;
	int iLocal_7596 = 0;
	int iLocal_7597 = 0;
	int iLocal_7598 = 0;
	char* sLocal_7599 = NULL;
	char* sLocal_7600 = NULL;
	float fLocal_7601 = 0f;
	int iLocal_7602 = 0;
	int iLocal_7603 = 0;
	var uLocal_7604 = 0;
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
	bLocal_30 = true;
	bLocal_37 = true;
	bLocal_59 = true;
	fLocal_428 = 120f;
	fLocal_429 = 0f;
	fLocal_431 = 1f;
	fLocal_432 = 0f;
	fLocal_433 = 1f;
	fLocal_434 = 30f;
	fLocal_436 = 1f;
	fLocal_437 = 5f;
	fLocal_438 = 1f;
	fLocal_439 = 1f;
	fLocal_440 = 100f;
	fLocal_441 = 100f;
	fLocal_442 = 0f;
	fLocal_443 = 7000f;
	fLocal_444 = 0f;
	fLocal_445 = 0f;
	fLocal_446 = 0.3f;
	fLocal_447 = 0.5f;
	fLocal_448 = 50f;
	iLocal_649 = -1;
	iLocal_657 = -1;
	iLocal_658 = -1;
	iLocal_1087 = 3;
	fLocal_1090 = 80f;
	fLocal_1091 = 140f;
	fLocal_1092 = 180f;
	iLocal_1098 = 1;
	iLocal_1099 = 65;
	iLocal_1100 = 49;
	iLocal_1101 = 64;
	Local_1116 = { 0f, 0f, 0f };
	Local_1119 = { 0f, 0f, 0f };
	iLocal_1122 = -1;
	fLocal_1124 = 1f;
	iLocal_3299 = -1;
	iLocal_3409 = AUDIO::GET_SOUND_ID();
	iLocal_3410 = AUDIO::GET_SOUND_ID();
	fLocal_3442 = 0.6f;
	fLocal_3443 = 1f;
	fLocal_3444 = 1f;
	fLocal_3445 = 1f;
	fLocal_3836 = 0.05f;
	Local_7561 = { 790.8106f, -2330.13f, 61.095f };
	fLocal_7564 = 137.22f;
	iLocal_7565 = -1;
	fLocal_7566 = 0.402f;
	fLocal_7567 = 0.54f;
	fLocal_7568 = 0.577f;
	fLocal_7569 = 0.808f;
	iLocal_7571 = 3;
	iLocal_7572 = 4;
	iLocal_7573 = 4250;
	iLocal_7574 = 3500;
	iLocal_7575 = 9250;
	fLocal_7576 = 11000f;
	fLocal_7577 = 19000f;
	iLocal_7578 = 0.575f;
	fLocal_7579 = 0.97f;
	fLocal_7580 = 0.8f;
	fLocal_7581 = 0.402f;
	fLocal_7582 = 0.454f;
	fLocal_7583 = 0.577f;
	fLocal_7584 = 0.663f;
	sLocal_7599 = "shake_cam_all@";
	sLocal_7600 = "fbi_4_binoculars";
	fLocal_7601 = 0f;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_7621(1, 0, 1, 1, 0);
		GlobalFunc_5695(PLAYER::PLAYER_PED_ID(), GlobalFunc_8315());
		GlobalFunc_10632();
		func_941();
	}
	func_931();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_3176)
		{
			if (func_921())
			{
				func_910();
			}
		}
		GlobalFunc_587();
		func_908();
		RECORDING::_0x208784099002BC30("M_BLITZ_PLAY", 0);
		switch (iLocal_1125)
		{
			case 0:
				func_893();
				break;
			
			case 16:
				func_891();
				break;
			
			case 1:
				func_835();
				break;
			
			case 2:
				func_828();
				break;
			
			case 3:
				func_822();
				break;
			
			case 4:
				func_813();
				break;
			
			case 5:
				func_805();
				break;
			
			case 6:
				func_738();
				break;
			
			case 7:
				func_720();
				break;
			
			case 8:
				func_694();
				break;
			
			case 9:
				func_678();
				break;
			
			case 10:
				func_646();
				break;
			
			case 11:
				func_579();
				break;
			
			case 12:
				func_560();
				break;
			
			case 17:
				func_539();
				break;
			
			case 13:
				func_538();
				break;
			
			case 14:
				func_270();
				break;
			
			case 15:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x33F
{
	if (GlobalFunc_588(&iLocal_3309, 7000))
	{
		if (GlobalFunc_145())
		{
			func_2();
		}
	}
}

void func_2()//Position - 0x35F
{
	GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
	func_3();
	MISC::CLEAR_AREA(1391.53f, -2063.67f, 52.79f, 10000f, 1, 0, 0, 0);
	GlobalFunc_7621(1, 0, 1, 1, 0);
	func_941();
}

void func_3()//Position - 0x39C
{
	int iVar0;
	
	iVar0 = 0;
	MISC::CLEAR_AREA(1376.45f, -2083.29f, 55.51f, 10000f, 1, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_1644))
	{
		PED::DELETE_PED(&Local_1644);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1664))
	{
		PED::DELETE_PED(&Local_1664);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1684))
	{
		PED::DELETE_PED(&Local_1684);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1704))
	{
		PED::DELETE_PED(&Local_1704);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1724 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1724[iVar0 /*20*/]))
		{
			PED::DELETE_PED(&(Local_1724[iVar0 /*20*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2445 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2445[iVar0 /*20*/]))
		{
			PED::DELETE_PED(&(Local_2445[iVar0 /*20*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2526 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2526[iVar0 /*20*/]))
		{
			PED::DELETE_PED(&(Local_2526[iVar0 /*20*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2567))
	{
		PED::DELETE_PED(&Local_2567);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2587))
	{
		PED::DELETE_PED(&Local_2587);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2607))
	{
		PED::DELETE_PED(&Local_2607);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2627))
	{
		PED::DELETE_PED(&Local_2627);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
	{
		PED::DELETE_PED(&(uLocal_3098[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
	{
		PED::DELETE_PED(&(uLocal_3098[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
	{
		PED::DELETE_PED(&(uLocal_3098[2]));
	}
	func_4();
	if (ENTITY::DOES_ENTITY_EXIST(Local_2932))
	{
		OBJECT::DELETE_OBJECT(&Local_2932);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_3052 - 1))
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(Local_3052[iVar0 /*10*/])))
		{
			PHYSICS::DELETE_ROPE(&(Local_3052[iVar0 /*10*/]));
		}
		iVar0++;
	}
}

void func_4()//Position - 0x561
{
	int iVar0;
	
	iVar0 = 0;
	GlobalFunc_2873(&Local_1176, 0);
	GlobalFunc_2873(&Local_1191, 0);
	GlobalFunc_2873(&Local_1206, 0);
	GlobalFunc_2873(&Local_1463, 0);
	iVar0 = 0;
	while (iVar0 <= (Local_1221 - 1))
	{
		GlobalFunc_2873(&(Local_1221[iVar0 /*15*/]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1432 - 1))
	{
		GlobalFunc_2873(&(Local_1432[iVar0 /*15*/]), 0);
		iVar0++;
	}
}










































































































































































































































































void func_270()//Position - 0x47C75
{
	func_533();
	switch (iLocal_3828)
	{
		case 0:
			func_482();
			break;
		
		case 1:
			PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
			STREAMING::LOAD_ALL_OBJECTS_NOW();
			func_436(2, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 790.8106f, -2330.13f, 61.2638f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.0764f);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, 0, "michael", 0, 1);
			iLocal_3223 = 4;
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
			STREAMING::REQUEST_MODEL(Local_1176.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_1206.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_2932.f_2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
			STREAMING::REQUEST_ANIM_DICT("missfbi4");
			STREAMING::REQUEST_ANIM_DICT("misssagrab");
			TASK::REQUEST_WAYPOINT_RECORDING("heat1");
			TASK::REQUEST_WAYPOINT_RECORDING("heat2");
			TASK::REQUEST_WAYPOINT_RECORDING("heat3");
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
			STREAMING::LOAD_SCENE(790.8106f, -2330.13f, 61.2638f);
			func_431(1, 1, 0f, 0f, 0, 1);
			iLocal_1125 = 2;
			break;
		
		case 2:
			func_428();
			break;
		
		case 3:
			func_426();
			func_425(PLAYER::PLAYER_PED_ID(), 0);
			func_425(PLAYER::PLAYER_PED_ID(), 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5, 1, 1);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) < 5)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 1);
			break;
		
		case 4:
			Global_86819 = 4;
			func_395();
			break;
		
		case 5:
			func_325();
			break;
		
		case 6:
			func_271();
			break;
	}
}

void func_271()//Position - 0x47F27
{
	if (iLocal_3832)
	{
		GlobalFunc_5116(-2557.475f, 1912.891f, 167.8713f, 46.22f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_2567.f_1);
	STREAMING::REQUEST_MODEL(Local_1463.f_1);
	STREAMING::REQUEST_MODEL(Local_1614.f_1);
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	if (iLocal_3832)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((!STREAMING::HAS_MODEL_LOADED(Local_2567.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1463.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1614.f_1)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(-2557.475f, 1912.891f, 167.8713f, 1000f, 1, 0, 0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_436(0, 1);
	func_317(PLAYER::PLAYER_PED_ID());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2557.475f, 1912.891f, 167.8713f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 46.2899f);
	Local_1463 = VEHICLE::CREATE_VEHICLE(Local_1463.f_1, Local_1463.f_3, Local_1463.f_6, 1, 1);
	VEHICLE::REMOVE_VEHICLE_WINDOW(Local_1463, 0);
	VEHICLE::REMOVE_VEHICLE_WINDOW(Local_1463, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1463);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1463, 0, 0);
	GlobalFunc_7102(&Local_2567, 29, Local_2567.f_3, Local_2567.f_9, 1);
	func_313(Local_2567, 0);
	func_312(&Local_2567, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2567, 1);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 3, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 4, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 8, 4, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 10, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_2567, 11, 0, 0, 0);
	func_280(&Local_1614, 0, -2551.931f, 1912.036f, 168.0432f, 244.1441f, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE("FBI_4_MCS_2_CONCAT", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		if (!PED::IS_PED_INJURED(Local_2567))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("devin", Local_2567, 0);
		}
		SYSTEM::WAIT(0);
	}
	if (!iLocal_3832)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	if (!PED::IS_PED_INJURED(Local_2567))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2567, "devin", 0, Local_2567.f_1, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1463, 0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1463, "devins_car", 0, Local_1463.f_1, 0);
	}
	GlobalFunc_8316(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_3255 = 1;
	CAM::DO_SCREEN_FADE_IN(800);
	iLocal_1125 = 12;
}









int func_280(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x4842F
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
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
				GlobalFunc_5121(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
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
				GlobalFunc_194(*iParam0, iParam1);
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
				GlobalFunc_5121(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
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
				GlobalFunc_194(*iParam0, iParam1);
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
				GlobalFunc_5121(iParam0, &(Var5.f_31), &(Var5.f_57));
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
					GlobalFunc_194(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}
































void func_312(int iParam0, bool bParam1)//Position - 0x4CDB8
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3834, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3834);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3835);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3834, iLocal_3835);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3835, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3835, iLocal_3834);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3834, joaat("COP"));
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_3834);
			PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, 0, 0);
			PED::SET_PED_ACCURACY(*iParam0, 60);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
			}
		}
	}
}

void func_313(int iParam0, bool bParam1)//Position - 0x4CEA0
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 0, 0);
	PED::SET_PED_CAN_RAGDOLL(iParam0, 0);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, 1);
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 174, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 169, 1);
	}
}




void func_317(int iParam0)//Position - 0x4D037
{
	func_319(iParam0);
	func_318(iParam0);
}

void func_318(int iParam0)//Position - 0x4D04B
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (iVar0 == 0)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] == -99 || !GlobalFunc_11257(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				GlobalFunc_11257(iParam0, 14, 38, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (iVar0 == 1)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] == -99 || !GlobalFunc_11257(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				GlobalFunc_11257(iParam0, 14, 30, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (iVar0 == 2)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] == -99 || !GlobalFunc_11257(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				GlobalFunc_11257(iParam0, 14, 53, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
}

void func_319(int iParam0)//Position - 0x4D1A6
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (iVar0 == 0)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] == -99 || !GlobalFunc_11257(iParam0, 12, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				GlobalFunc_11257(iParam0, 12, 21, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (iVar0 == 1)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] == -99 || !GlobalFunc_11257(iParam0, 12, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				GlobalFunc_11257(iParam0, 12, 13, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (iVar0 == 2)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] == -99 || !GlobalFunc_11257(iParam0, 12, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0))
			{
				GlobalFunc_11257(iParam0, 12, 19, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
}






void func_325()//Position - 0x4D48E
{
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 0, 1);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 10000f, 1, 0, 0, 0);
	if (iLocal_3832)
	{
		GlobalFunc_5116(897.9976f, -2351.927f, 29.4873f, 203.22f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1191.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1191.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1221[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_2980.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
	if (iLocal_3832)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(Local_1176.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1191.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1221[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2980.f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3409, "SIRENS_DISTANT_01_MASTER", 844.7f, -2213.3f, 57.9f, 0, 0, 0, 0);
	GlobalFunc_7621(1, 1, 0, 1, 0);
	func_394();
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, 1);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	MISC::SET_FAKE_WANTED_LEVEL(1);
	Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 901.9453f, -2383.368f, 29.2789f, 341.1729f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 2);
	ENTITY::SET_ENTITY_PROOFS(Local_1176, 1, 1, 1, 1, 1, 0, 0, 0);
	GlobalFunc_534(Local_1176, 0);
	Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 896.0925f, -2364.399f, 29.4761f, 84.1277f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1206, 0f, 6.5f, 0.5f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1206, -2f, -0.5f, 0.5f, 1000f, 1000f, 1);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1206, 0);
	GlobalFunc_2875(&Local_1206);
	GlobalFunc_534(Local_1206, 1);
	Local_1221[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[0 /*15*/].f_1, 891.0364f, -2354.091f, 29.3747f, 64.0679f, 1, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1221[0 /*15*/], 0f, 6.5f, 0.5f, 500f, 500f, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1221[0 /*15*/]);
	Local_1221[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[1 /*15*/].f_1, 895.6796f, -2344.69f, 29.4389f, 101.3151f, 1, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1221[1 /*15*/], -0.5f, 6.5f, 0.5f, 500f, 500f, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1221[1 /*15*/]);
	Local_1221[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[2 /*15*/].f_1, 902.2714f, -2343.174f, 29.5052f, 150.328f, 1, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1221[2 /*15*/], 0.5f, 6.5f, 0.5f, 500f, 500f, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1221[2 /*15*/]);
	Local_1221[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[3 /*15*/].f_1, 917.7601f, -2331.909f, 29.3799f, 176.3431f, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1221[3 /*15*/]);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	if (GlobalFunc_8315() != 1)
	{
		func_436(1, 0);
	}
	func_317(PLAYER::PLAYER_PED_ID());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_390(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 897.9976f, -2351.927f, 29.4873f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.2388f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	if (GlobalFunc_78(25, 0))
	{
		GlobalFunc_6682(&Local_3807, 25);
	}
	else
	{
		bLocal_3196 = true;
		Local_3807 = { 1121.031f, -1249.908f, 19.5717f };
	}
	Local_1684.f_14 = 1;
	Local_1704.f_14 = 1;
	if (!iLocal_3832)
	{
		STREAMING::LOAD_SCENE(890.4393f, -2346.476f, 29.3413f);
	}
	Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, 904.981f, -2367.179f, 30.15f, 175.2936f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1191, 890.495f, -2365.6f, 30.5039f, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(Local_1191, 0f, 91.8056f, 173.211f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1191, 1);
	VEHICLE::_0x1CF38D529D7441D9(Local_1191, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1191, -2f, -0.5f, 0.5f, 1000f, 1000f, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 2, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 3, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1191, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1191, 0);
	GlobalFunc_2875(&Local_1191);
	Local_2980 = OBJECT::CREATE_OBJECT(Local_2980.f_2, Local_2980.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_2980, Local_2980.f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2980, 1);
	iLocal_3225 = MISC::GET_GAME_TIMER();
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_588(&iLocal_3225, 2000))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_2919(&Local_3073, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_GETAWAY_RESTART");
	GlobalFunc_11089(4, "burn the truck", 1, 0, 0, 1);
	iLocal_1125 = 8;
	func_431(0, 1, 0f, 0f, 0, 1);
}

































































void func_390(int iParam0)//Position - 0x55C77
{
	int iVar0;
	
	iVar0 = GlobalFunc_2284(GlobalFunc_6674(iParam0));
	if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, 1);
	}
}




void func_394()//Position - 0x55D61
{
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(12, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(6, 0);
	MISC::ENABLE_DISPATCH_SERVICE(7, 0);
	MISC::ENABLE_DISPATCH_SERVICE(8, 0);
	MISC::ENABLE_DISPATCH_SERVICE(9, 0);
	MISC::ENABLE_DISPATCH_SERVICE(10, 0);
	MISC::ENABLE_DISPATCH_SERVICE(11, 0);
	MISC::ENABLE_DISPATCH_SERVICE(12, 0);
	MISC::ENABLE_DISPATCH_SERVICE(13, 0);
}

void func_395()//Position - 0x55DC4
{
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 0, 1);
	MISC::CLEAR_AREA(Local_1206.f_3, 1000f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 1000f, 1, 0, 0, 0);
	if (iLocal_3832)
	{
		GlobalFunc_5116(873.9058f, -2353.096f, 29.3312f, 13.2f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(Local_1724[0 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1724[8 /*20*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1191.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1191.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1221[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_1432[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_2980.f_2);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_1221[0 /*15*/].f_1, 15);
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1432[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1432[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[2 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[3 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[4 /*15*/].f_13, "lkfbi4");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[5 /*15*/].f_13, "lkfbi4");
	AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
	if (iLocal_3832)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !STREAMING::HAS_MODEL_LOADED(Local_1724[0 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1724[8 /*20*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1176.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1191.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1221[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1432[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2980.f_2)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1221[0 /*15*/].f_1)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1432[0 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1432[1 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[0 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[1 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[2 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[3 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[4 /*15*/].f_13, "lkfbi4")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[5 /*15*/].f_13, "lkfbi4")) || !AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 10000f, 1, 0, 0, 0);
	GlobalFunc_7621(1, 1, 0, 1, 0);
	AUDIO::DISTANT_COP_CAR_SIRENS(1);
	Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 901.9453f, -2383.368f, 29.2789f, 341.1729f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 2);
	ENTITY::SET_ENTITY_PROOFS(Local_1176, 1, 1, 1, 1, 1, 0, 0, 0);
	GlobalFunc_534(Local_1176, 0);
	Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 896.0925f, -2364.399f, 29.4761f, 84.1277f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1206, 0f, 6.5f, 0.5f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1206, 0);
	GlobalFunc_2875(&Local_1206);
	GlobalFunc_534(Local_1206, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_436(1, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	func_317(PLAYER::PLAYER_PED_ID());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 873.9058f, -2353.096f, 29.3312f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 13.92f);
	func_425(PLAYER::PLAYER_PED_ID(), 1);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), 873.256f, -2352.71f, 29.3307f, -1, 1, 0f, 1, 1, uLocal_3470, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	func_404(&(uLocal_3098[2]), 2, 804.7164f, -2330.207f, 61.0967f, 264.4371f, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(uLocal_3098[2], 1, -1, 0);
	func_317(uLocal_3098[2]);
	GlobalFunc_11257(uLocal_3098[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_403(uLocal_3098[2]);
	func_313(uLocal_3098[2], 0);
	func_312(&(uLocal_3098[2]), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, uLocal_3098[2], "TREVOR", 0, 1);
	uLocal_3451 = GlobalFunc_6797(uLocal_3098[2], 0, 145);
	HUD::SET_BLIP_DISPLAY(uLocal_3451, 2);
	HUD::SET_BLIP_SCALE(uLocal_3451, 0.5f);
	GlobalFunc_2903(uLocal_3098[2], 1500);
	func_404(&(uLocal_3098[0]), 0, Local_3420, 262f, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(uLocal_3098[0], 1, -1, 0);
	func_317(uLocal_3098[0]);
	GlobalFunc_11257(uLocal_3098[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, uLocal_3098[0], "michael", 0, 1);
	uLocal_3450 = GlobalFunc_6797(uLocal_3098[0], 0, 145);
	HUD::SET_BLIP_DISPLAY(uLocal_3450, 2);
	HUD::SET_BLIP_SCALE(uLocal_3450, 0.5f);
	GlobalFunc_2903(uLocal_3098[0], 1500);
	func_396(uLocal_3098[0]);
	func_313(uLocal_3098[0], 0);
	func_312(&(uLocal_3098[0]), 1);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_3098[0], 881.53f, -2334.04f, 33.91f, -1, 0, 0f, 0, 0, uLocal_3468, 0);
	iLocal_3229 = 6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_1206, 0);
		ENTITY::SET_ENTITY_PROOFS(Local_1206, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	switch (Global_86819)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PED::SET_CREATE_RANDOM_COPS(0);
			MISC::SET_FAKE_WANTED_LEVEL(4);
			iLocal_3240 = 4;
			iLocal_3229 = 6;
			iLocal_3254 = 1;
			iLocal_3292 = MISC::GET_GAME_TIMER();
			iLocal_3292 = (iLocal_3292 - 6000);
			break;
	}
	if (!iLocal_3832)
	{
		STREAMING::LOAD_SCENE(873.3599f, -2352.411f, 29.3306f);
	}
	Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, 904.981f, -2367.179f, 30.15f, 175.2936f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1191, 890.495f, -2365.6f, 30.5039f, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(Local_1191, 0f, 91.8056f, 173.211f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1191, 1);
	VEHICLE::_0x1CF38D529D7441D9(Local_1191, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1191, -2f, -0.5f, 0.5f, 1000f, 1000f, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 2, 1);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 3, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1191, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1191, 0);
	GlobalFunc_2875(&Local_1191);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 2, 0);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 3, 0);
	MISC::CLEAR_AREA(904.981f, -2367.179f, 30.15f, 100f, 1, 0, 0, 0);
	Local_2980 = OBJECT::CREATE_OBJECT(Local_2980.f_2, Local_2980.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_2980, Local_2980.f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2980, 1);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !(!PED::IS_PED_INJURED(uLocal_3098[0]) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uLocal_3098[0])))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3409, "Distant_Sirens_Skip_Start", 913.6f, -2301.6f, 34f, "FBI_04_HEAT_SOUNDS", 0, 0, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_COVER_RESTART");
	iLocal_3246 = 22;
	Local_1684.f_14 = 1;
	iLocal_3250 = 22;
	Local_1704.f_14 = 1;
	func_431(0, 1, -88f, 0f, 0, 1);
	GlobalFunc_11089(3, "Start of Shootout", 0, 0, 0, 1);
	iLocal_1125 = 6;
}

void func_396(int iParam0)//Position - 0x567D0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!func_398(iParam0, joaat("GROUP_SNIPER")))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_sniperrifle"), 200, 0, 0);
			}
			else if (func_397(iParam0, joaat("GROUP_SNIPER"), &iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 200)
				{
					WEAPON::SET_PED_AMMO(iParam0, iVar0, 200);
				}
				if (iVar0 == joaat("weapon_heavysniper"))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar0, joaat("component_at_ar_supp")))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar0, joaat("component_at_ar_supp"));
					}
				}
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_heavysniper"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_heavysniper"), 200, 0, 0);
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("weapon_heavysniper"), joaat("component_at_ar_supp")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, joaat("weapon_heavysniper"), joaat("component_at_ar_supp"));
				}
			}
			else
			{
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("weapon_heavysniper"), joaat("component_at_ar_supp")))
				{
					WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, joaat("weapon_heavysniper"), joaat("component_at_ar_supp"));
				}
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_heavysniper")) < 200)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_heavysniper"), 200);
				}
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_grenade"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_grenade"), 15, 0, 0);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_grenade")) < 15)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_grenade"), 15);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_combatmg"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_combatmg"), 500, 1, 1);
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("weapon_combatmg"), joaat("component_combatmg_clip_01"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("weapon_combatmg"), joaat("component_at_scope_medium"));
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("weapon_combatmg"), joaat("component_at_ar_afgrip"));
			}
			else
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_combatmg")) < 500)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_combatmg"), 500);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("weapon_combatmg"), joaat("component_combatmg_clip_01")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("weapon_combatmg"), joaat("component_combatmg_clip_01"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("weapon_combatmg"), joaat("component_at_scope_medium")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("weapon_combatmg"), joaat("component_at_scope_medium"));
				}
				if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, joaat("weapon_combatmg"), joaat("component_at_ar_afgrip")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, joaat("weapon_combatmg"), joaat("component_at_ar_afgrip"));
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_combatmg"), 1);
			}
		}
	}
}

int func_397(int iParam0, int iParam1, var uParam2)//Position - 0x56A05
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar2 = GlobalFunc_223(iVar0);
			if (iVar2 != 0)
			{
				iVar1 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, GlobalFunc_223(iVar0));
				if (iVar1 != 0 && iVar1 != joaat("weapon_unarmed"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						*uParam2 = iVar1;
						return 1;
					}
				}
			}
			iVar0++;
		}
		iVar4 = FILES::GET_NUM_DLC_WEAPONS();
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
			{
				iVar1 = Var5.f_1;
				if (iVar1 != 0 && iVar1 != joaat("weapon_unarmed"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						*uParam2 = iVar1;
						return 1;
					}
				}
			}
			iVar3++;
		}
	}
	return 0;
}

int func_398(int iParam0, int iParam1)//Position - 0x56AC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar2 = GlobalFunc_223(iVar0);
			if (iVar2 != 0)
			{
				iVar1 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
				if (iVar1 != 0 && iVar1 != joaat("weapon_unarmed"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
		iVar4 = FILES::GET_NUM_DLC_WEAPONS();
		iVar3 = 0;
		while (iVar3 < iVar4)
		{
			if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
			{
				iVar1 = Var5.f_1;
				if (iVar1 != 0 && iVar1 != joaat("weapon_unarmed"))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iVar1) == iParam1)
					{
						return 1;
					}
				}
			}
			iVar3++;
		}
	}
	return 0;
}





void func_403(int iParam0)//Position - 0x56CEC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!func_398(iParam0, joaat("GROUP_SNIPER")))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_sniperrifle"), 200, 0, 0);
			}
			else if (func_397(iParam0, joaat("GROUP_SNIPER"), &iVar0))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 200)
				{
					WEAPON::SET_PED_AMMO(iParam0, iVar0, 200);
				}
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_rpg"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_rpg"), 16, 1, 1);
			}
			else
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_rpg")) < 16)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_rpg"), 16);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_rpg"), 1);
			}
		}
	}
}

int func_404(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x56D9A
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8569(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11318(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11333(*uParam0, bParam8);
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





















void func_425(int iParam0, int iParam1)//Position - 0x589F9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_pumpshotgun"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_pumpshotgun"), 200, 0, 0);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_pumpshotgun")) < 200)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_pumpshotgun"), 200);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_heavysniper"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_heavysniper"), 200, 0, 0);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_heavysniper")) < 200)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_heavysniper"), 200);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_grenade"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_grenade"), 15, 0, 0);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_grenade")) < 15)
			{
				WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_grenade"), 15);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_carbinerifle"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_carbinerifle"), 800, iParam1, iParam1);
			}
			else
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, joaat("weapon_carbinerifle")) < 800)
				{
					WEAPON::SET_PED_AMMO(iParam0, joaat("weapon_carbinerifle"), 800);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_carbinerifle"), iParam1);
			}
		}
	}
}

void func_426()//Position - 0x58B22
{
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 0, 1);
	MISC::CLEAR_AREA(Local_1206.f_3, 1000f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 1000f, 1, 0, 0, 0);
	if (iLocal_3832)
	{
		GlobalFunc_5116(890.4393f, -2346.476f, 29.3413f, 184.3769f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(Local_1644.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1644.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1191.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1191.f_1, 1);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatmg")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_combatmg"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_carbinerifle"), 31, 0);
	STREAMING::REQUEST_MODEL(Local_2980.f_2);
	STREAMING::REQUEST_MODEL(Local_3028.f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("misssagrab");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	if (iLocal_3832)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !STREAMING::HAS_MODEL_LOADED(Local_1644.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1176.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1191.f_1)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatmg")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_combatmg"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_carbinerifle")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_carbinerifle"))) || !STREAMING::HAS_MODEL_LOADED(Local_2980.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_3028.f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) || !STREAMING::HAS_ANIM_DICT_LOADED("missheat")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0)) || !AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_7621(1, 1, 0, 1, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_436(1, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
	func_317(PLAYER::PLAYER_PED_ID());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 890.4393f, -2346.476f, 29.3413f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 184.3769f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	func_425(PLAYER::PLAYER_PED_ID(), 0);
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5, 1, 1);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) < 5)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 901.9453f, -2383.368f, 29.2789f, 341.1729f, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 2);
	ENTITY::SET_ENTITY_PROOFS(Local_1176, 1, 1, 1, 1, 1, 0, 0, 0);
	GlobalFunc_534(Local_1176, 0);
	Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 896.0925f, -2364.399f, 29.4761f, 84.1277f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1206);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1206, 0f, 6.5f, 0.5f, 375f, 375f, 1);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1206, 0);
	GlobalFunc_2875(&Local_1206);
	GlobalFunc_534(Local_1206, 1);
	func_404(&(uLocal_3098[0]), 0, 894.0912f, -2349.348f, 29.4448f, 163.8641f, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(uLocal_3098[0], 1, -1, 0);
	func_317(uLocal_3098[0]);
	GlobalFunc_11257(uLocal_3098[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_396(uLocal_3098[0]);
	func_313(uLocal_3098[0], 0);
	func_312(&(uLocal_3098[0]), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, uLocal_3098[0], "michael", 0, 1);
	uLocal_3450 = GlobalFunc_6797(uLocal_3098[0], 0, 145);
	HUD::SET_BLIP_DISPLAY(uLocal_3450, 2);
	HUD::SET_BLIP_SCALE(uLocal_3450, 0.5f);
	TASK::TASK_AIM_GUN_AT_COORD(uLocal_3098[0], 891.74f, -2358.18f, 30.71f, -1, 1, 0);
	PED::FORCE_PED_MOTION_STATE(uLocal_3098[0], 1063765679, 0, 0, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3098[0], 0, 0);
	func_404(&(uLocal_3098[2]), 2, 804.7164f, -2330.207f, 61.0967f, 264.4371f, 0, 0, 0);
	func_317(uLocal_3098[2]);
	GlobalFunc_11257(uLocal_3098[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_403(uLocal_3098[2]);
	func_313(uLocal_3098[2], 0);
	func_312(&(uLocal_3098[2]), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, uLocal_3098[2], "TREVOR", 0, 1);
	uLocal_3451 = GlobalFunc_6797(uLocal_3098[2], 0, 145);
	HUD::SET_BLIP_DISPLAY(uLocal_3450, 2);
	HUD::SET_BLIP_SCALE(uLocal_3450, 0.5f);
	Local_2932 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_2932.f_2, 889.84f, -2361.97f, 30.58f, 1, 1, 0);
	ENTITY::SET_ENTITY_HEALTH(Local_2932, Local_2932.f_20);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2932, 1);
	ENTITY::SET_ENTITY_HEADING(Local_2932, 90f);
	iLocal_3191 = 1;
	if (!PED::IS_PED_INJURED(Local_1644))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_1644, 2);
	}
	if (!PED::IS_PED_INJURED(Local_1664))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_1664, 2);
	}
	if (!iLocal_3832)
	{
		STREAMING::LOAD_SCENE(890.4393f, -2346.476f, 29.3413f);
	}
	Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, 880f, -2357.4f, 30.15f, 175.2936f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_1191, 1, 1, 1, 1, 1, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_1191, 890.495f, -2365.6f, 30.5039f, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(Local_1191, 0f, 91.8056f, 173.211f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1191, 1);
	VEHICLE::_0x1CF38D529D7441D9(Local_1191, 1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_1191, -2f, -0.5f, 0.5f, 1000f, 1000f, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1191, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 2);
	AUDIO::SET_HORN_ENABLED(Local_1191, 0);
	GlobalFunc_2875(&Local_1191);
	Local_1644 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1644.f_1, -1, 1, 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1644, 1);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1644, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1644, 1);
	ENTITY::SET_ENTITY_HEALTH(Local_1644, 2);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1644);
	Local_1664 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1664.f_1, 0, 1, 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1664, 1);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1664, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1664, 1);
	ENTITY::SET_ENTITY_HEALTH(Local_1664, 2);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1664);
	Local_2980 = OBJECT::CREATE_OBJECT(Local_2980.f_2, Local_2980.f_3, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(Local_2980, Local_2980.f_12, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_2980, 1);
	while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_3098[0])) || !GlobalFunc_591(uLocal_3098[2]))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_EXPLODE_RESTART_ST");
	iLocal_3229 = 1;
	iLocal_3230 = 2;
	iLocal_3283 = 22;
	iLocal_3308 = MISC::GET_GAME_TIMER();
	GlobalFunc_11089(2, "Detonate C4", 0, 0, 0, 1);
	func_431(0, 1, 0f, 0f, 0, 1);
	iLocal_1125 = 5;
}


void func_428()//Position - 0x595A9
{
	PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 0, 1);
	MISC::CLEAR_AREA(Local_1206.f_3, 1000f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(890.4393f, -2346.476f, 29.3413f, 10000f, 1, 0, 0, 0);
	if (iLocal_3832)
	{
		GlobalFunc_5116(989.9289f, -2373.23f, 29.5308f, 80.8604f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(Local_1644.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1644.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1191.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1191.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2980.f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatmg")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_combatmg"), 31, 0);
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("misssagrab");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
	AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
	if (iLocal_3832)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !STREAMING::HAS_MODEL_LOADED(Local_1644.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1176.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1191.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_2980.f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatmg")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_combatmg"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) || !STREAMING::HAS_ANIM_DICT_LOADED("missheat")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0)) || !AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS"))
	{
		SYSTEM::WAIT(0);
	}
	Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 1024.197f, -2376.524f, 29.5306f, 85.759f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1206, 1, 1);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 12, "lkcountry", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 6250f);
	VEHICLE::SET_PLAYBACK_SPEED(Local_1206, 0f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1206, 1);
	GlobalFunc_534(Local_1206, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_436(1, 0);
	func_317(PLAYER::PLAYER_PED_ID());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 890.4393f, -2346.476f, 29.3413f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 184.3769f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206, -1);
	AUDIO::SET_VEH_RADIO_STATION(Local_1206, "OFF");
	Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 906.2f, -2375.501f, 30.532f, 250.22f, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_1176, 1, 1, 1, 1, 1, 0, 0, 0);
	GlobalFunc_534(Local_1176, 0);
	func_430(&(uLocal_3098[0]), 0, Local_1176, -1, 0, 0, 0);
	func_317(uLocal_3098[0]);
	GlobalFunc_11257(uLocal_3098[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, uLocal_3098[0], "michael", 0, 1);
	if (!iLocal_3832)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	uLocal_3805 = STREAMING::STREAMVOL_CREATE_SPHERE(904.981f, -2367.179f, 30.15f, 7f, 1, 127);
	while (!STREAMING::STREAMVOL_HAS_LOADED(uLocal_3805))
	{
		SYSTEM::WAIT(0);
	}
	Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, 904.981f, -2367.179f, 30.15f, 175.2936f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1191);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1191, 0, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1191, "FBI_4_STOCKADE_GROUP", 0);
	Local_1644 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1644.f_1, -1, 1, 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1644, 1);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1644, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1644, 1);
	Local_1664 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1664.f_1, 0, 1, 1);
	PED::SET_PED_DIES_WHEN_INJURED(Local_1664, 1);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1664, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1664, 1);
	SYSTEM::WAIT(0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
	{
		VEHICLE::SET_PLAYBACK_SPEED(Local_1206, 1f);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("fbi4_TRUCK_RAM_RESTART_ST");
	STREAMING::STREAMVOL_DELETE(uLocal_3805);
	iLocal_3245 = MISC::GET_GAME_TIMER();
	iLocal_3806 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
	CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
	func_431(1, 1, 0f, 0f, 0, 1);
	GlobalFunc_164("cntry_god3", 7500, 1);
	GlobalFunc_11089(1, "Ram money truck", 0, 0, 0, 1);
	iLocal_1125 = 4;
}


int func_430(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x59D4B
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
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8569(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11318(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11333(*uParam0, bParam6);
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

void func_431(bool bParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, int iParam5)//Position - 0x59DFD
{
	GlobalFunc_8316(0, 1, iParam5, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
		if (bParam1)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam2);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam3, 1065353216);
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (bParam4)
	{
		func_432();
	}
	else
	{
		func_394();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_432()//Position - 0x59E9B
{
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(12, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(6, 1);
	MISC::ENABLE_DISPATCH_SERVICE(7, 1);
	MISC::ENABLE_DISPATCH_SERVICE(8, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(11, 1);
	MISC::ENABLE_DISPATCH_SERVICE(12, 1);
	MISC::ENABLE_DISPATCH_SERVICE(13, 1);
}




int func_436(int iParam0, bool bParam1)//Position - 0x59FCD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	
	Global_17098.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = GlobalFunc_584(iParam0);
	iVar1 = GlobalFunc_4917(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_430(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_404(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	func_439(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}



int func_439(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x5A185
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar22;
	var uVar23;
	char* sVar24;
	
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = GlobalFunc_8315();
		if (!uParam0->f_23)
		{
			GlobalFunc_9198(iVar0, 0);
		}
		GlobalFunc_5127(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, 1);
		iVar2 = GlobalFunc_584(uParam0->f_7);
		GlobalFunc_9198((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (GlobalFunc_42(GlobalFunc_8315()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 0);
		}
		if (GlobalFunc_6687(0) || GlobalFunc_6687(3))
		{
			if (Global_17098.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (MISC::IS_BIT_SET(Global_81119[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_81119[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_81155[Global_68514.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_17098.f_13 = 0;
		uParam0->f_5 = GlobalFunc_237(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = GlobalFunc_237(iVar2);
		uParam0->f_7 = 4;
		iVar22 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_7709(iVar22);
		PED::_0xE861D0B05C7662B8(iVar22, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)));
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, 1);
				GlobalFunc_7709(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar24 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar23);
			if (!MISC::IS_STRING_NULL(sVar24))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar24, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 0, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_87649 = 1;
		GlobalFunc_5126(PLAYER::PLAYER_PED_ID());
		GlobalFunc_8376();
		GlobalFunc_582(iVar2);
		GlobalFunc_8999();
		GlobalFunc_8375(iVar2);
		GlobalFunc_10873(GlobalFunc_4933(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), GlobalFunc_485(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), GlobalFunc_485(68));
		}
		GlobalFunc_6801(iVar2, &iVar22);
		if (((GlobalFunc_39(0) || GlobalFunc_39(3)) || GlobalFunc_39(2)) || GlobalFunc_39(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 0);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar22, 32, 1);
			PED::SET_PED_CONFIG_FLAG(iVar22, 250, 1);
		}
		if (!GlobalFunc_579())
		{
			GlobalFunc_8382();
		}
		Global_87286 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}











































void func_482()//Position - 0x5F84B
{
	if (iLocal_3832)
	{
		GlobalFunc_5116(1376.857f, -2079.459f, 50.9983f, 16.5575f, 0, 0);
	}
	GlobalFunc_7621(1, 0, 0, 1, 0);
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1478.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1478.f_1, 1);
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	STREAMING::REQUEST_MODEL(Local_2956.f_2);
	iLocal_3804 = unk_0x67D02A194A2FC2BD("binoculars");
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(25, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkheat");
	if (iLocal_3832)
	{
		GlobalFunc_5108(0, -1, 1);
	}
	while (((((((((((((((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_1176.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1478.f_1)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !STREAMING::HAS_MODEL_LOADED(Local_2956.f_2)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3804)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("missheat")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(25, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkheat"))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (GlobalFunc_2881(&uLocal_3466))
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_3466, 1400.629f, -2053.28f, 50.9983f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_3466, 78.1507f);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1379.4f, -2074.778f, 50.9988f, 50f, 50f, 50f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1400.629f, -2053.28f, 50.9983f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 78.1507f);
			}
		}
	}
	PATHFIND::SET_ROADS_IN_AREA(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, 0, 1);
	MISC::CLEAR_AREA(1379.374f, -2074.824f, 50.9985f, 1000f, 1, 0, 0, 0);
	Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 1381.472f, -2072.245f, 50.9981f, 38.334f, 1, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
	GlobalFunc_534(Local_1176, 0);
	Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 1374.858f, -2077.374f, 50.9981f, 37.5148f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	GlobalFunc_534(Local_1206, 1);
	func_280(&Local_1478, 2, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(101, 1450f, "lkheat"), 40.3225f, 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1478, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1478, 3);
	func_436(0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_317(PLAYER::PLAYER_PED_ID());
	GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1376.857f, -2079.459f, 50.9983f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 16.5575f);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	func_430(&(uLocal_3098[2]), 2, Local_1478, -1, 0, 0, 0);
	func_317(uLocal_3098[2]);
	GlobalFunc_11257(uLocal_3098[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_313(uLocal_3098[2], 0);
	func_312(&(uLocal_3098[2]), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, uLocal_3098[2], "trevor", 0, 1);
	func_526("lkheat", 101, 1, 1);
	func_525();
	fLocal_440 = 200f;
	iLocal_49 = 1;
	iLocal_55 = 1;
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1478, 101, "lkheat", 1);
	func_487(Local_1478, 1f);
	func_483(Local_1478, 2000f);
	func_487(Local_1478, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1478, 1);
	func_430(&(uLocal_3098[1]), 1, Local_1206, -1, 0, 0, 0);
	func_317(uLocal_3098[1]);
	GlobalFunc_11257(uLocal_3098[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	func_313(uLocal_3098[1], 0);
	func_312(&(uLocal_3098[1]), 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_3098[1], 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, uLocal_3098[1], "franklin", 0, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 102, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 800f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1206, 1);
	if (!iLocal_3832)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	SYSTEM::WAIT(0);
	while ((!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()) || !GlobalFunc_591(uLocal_3098[1])) || !GlobalFunc_591(uLocal_3098[2]))
	{
		SYSTEM::WAIT(0);
	}
	func_431(1, 1, 0f, 0f, 0, 1);
	iLocal_3225 = MISC::GET_GAME_TIMER();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_SWITCH_BINOC_ST");
	GlobalFunc_11089(0, "Enter ambulance at FIB depot", 0, 0, 0, 1);
	iLocal_1125 = 1;
}

void func_483(int iParam0, float fParam1)//Position - 0x60178
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_486();
			func_485(&iParam0, iLocal_649, fParam1, 1, 0, 1, 0, 0);
			fLocal_430 = fParam1;
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (iLocal_595[iVar0] > 2 && iLocal_595[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1041[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1041[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_362[iVar0]);
								fVar1 = (fVar1 * fLocal_385[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_484(iLocal_572[iVar0]))
									{
										func_485(&(iLocal_1041[iVar0]), iLocal_572[iVar0], fVar1, 1, 0, 1, bLocal_56, iLocal_55);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_595[iVar0] = 99;
						iLocal_647 = (iLocal_647 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (iLocal_490[iVar0] > 2 && iLocal_490[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_980[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_980[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_980[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_225[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_484(iLocal_449[iVar0]))
									{
										func_485(&(iLocal_980[iVar0]), iLocal_449[iVar0], fVar1, 1, 0, 1, 1, iLocal_55);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_490[iVar0] = 99;
						iLocal_646 = (iLocal_646 - 1);
					}
				}
				iVar0++;
			}
			iLocal_650 = 0;
			iLocal_652 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_641[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1036[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1036[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1036[iVar0], 1, 0);
							iLocal_648++;
							iLocal_641[iVar0] = 2;
						}
					}
					else
					{
						iLocal_641[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_651 = 0;
			iLocal_656 = 0;
			iLocal_659 = 0;
			fLocal_445 = fParam1;
			fLocal_444 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_867 = { Var3 - Vector(100f, 100f, 100f) };
			Local_870 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 0);
		}
	}
}

float func_484(int iParam0)//Position - 0x60422
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_891);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_891))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_891);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_891);
	return uVar0;
}

int func_485(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x6045E
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_891);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_891))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_891, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_657 && iParam1 != iLocal_658)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_891, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_891, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_891, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_891, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_891))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_891);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_891, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_657 && iParam1 != iLocal_658)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_891, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_891, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_891, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_891, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_486()//Position - 0x60644
{
	iLocal_41 = 1;
}

void func_487(int iParam0, float fParam1)//Position - 0x6064F
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_58 = false;
	if (!bLocal_40)
	{
		if (bLocal_39)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_40 = true;
		}
	}
	else if (!bLocal_39)
	{
		GlobalFunc_2214();
		bLocal_40 = false;
	}
	if (bLocal_39)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_33)
	{
		if (iLocal_28)
		{
			fLocal_433 = 0f;
		}
		else
		{
			fLocal_433 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_38 = 1;
					}
					else
					{
						iLocal_38 = 0;
					}
				}
				fLocal_430 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_431) * fLocal_433));
				if (bLocal_37)
				{
					func_521(iParam0, fLocal_430);
					GlobalFunc_2913(iParam0, fLocal_440);
					if (fLocal_435 > 1000f)
					{
						if (iLocal_662 == 0)
						{
							GlobalFunc_2912(iParam0, fLocal_440);
						}
						fVar0 = ((fLocal_430 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_662) * 2000f));
						func_518(iParam0, fVar0, fLocal_434);
						iLocal_662++;
						if (iLocal_662 > 2)
						{
							fLocal_435 = 0f;
						}
					}
					else
					{
						iLocal_662 = 0;
						fLocal_435 = (fLocal_435 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_430 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_45)
		{
			if (!iLocal_27)
			{
				func_514(iParam0, ((fParam1 * fLocal_431) * fLocal_433), 0);
				if (!iLocal_48)
				{
				}
				iLocal_48 = 0;
			}
			if (bLocal_30)
			{
				func_510(iParam0);
			}
			if (!iLocal_27)
			{
				func_494(iParam0, ((fParam1 * fLocal_431) * fLocal_433), 0);
			}
		}
		if (iLocal_35)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_1069 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_864 = { ENTITY::GET_ENTITY_COORDS(iLocal_1069, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_1069, &uLocal_266, &uLocal_267, &uLocal_268, &uLocal_269);
				}
			}
			iLocal_35 = 0;
		}
		if (iLocal_34)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1069))
			{
				GlobalFunc_3006(iLocal_1070);
				iLocal_1070 = iLocal_1069;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1070, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1070, Local_864, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_1070, uLocal_266, uLocal_267, uLocal_268, uLocal_269);
			}
			fLocal_429 = fLocal_432;
			iLocal_27 = 1;
			iLocal_34 = 0;
		}
		if (iLocal_27)
		{
			while (!func_488(&iParam0, fLocal_429))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_28 = 1;
		}
		if (iLocal_41)
		{
			iLocal_41 = 0;
		}
	}
}

int func_488(int iParam0, float fParam1)//Position - 0x608EA
{
	if (!iLocal_42)
	{
		iLocal_27 = 1;
		func_489();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_649 == -1)
			{
				while (!func_485(iParam0, iLocal_649, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_32)
				{
					iLocal_28 = 1;
					fLocal_433 = 0f;
					iLocal_650 = 0;
					iLocal_652 = 0;
					iLocal_651 = 0;
					iLocal_646 = 0;
					iLocal_647 = 0;
					iLocal_648 = 0;
					iLocal_653 = 0;
					iLocal_654 = 0;
					iLocal_655 = 0;
				}
			}
		}
		iLocal_42 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_431) * fLocal_433));
				func_485(iParam0, iLocal_649, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_430 = fParam1;
		iLocal_656 = 0;
		iLocal_659 = 0;
		fLocal_445 = 0f;
		fLocal_444 = 0f;
		func_494(*iParam0, ((1f * fLocal_431) * fLocal_433), 1);
		func_514(*iParam0, ((1f * fLocal_431) * fLocal_433), 1);
		func_510(*iParam0);
		if ((iLocal_653 == 0 && iLocal_654 == 0) && iLocal_655 == 0)
		{
			iLocal_28 = 0;
			iLocal_27 = 0;
			iLocal_42 = 0;
			return 1;
		}
	}
	return 0;
}

void func_489()//Position - 0x60A1C
{
	func_492();
	func_491();
	func_490();
}

void func_490()//Position - 0x60A30
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1041[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1041[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1041[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1041[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1041[iVar0]));
			}
		}
		iLocal_595[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_572[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_954[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_954[iVar0]);
		}
		iVar0++;
	}
}

void func_491()//Position - 0x60B26
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1036[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1036[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1036[iVar0]));
			}
		}
		iLocal_641[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_949[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_949[iVar0]);
		}
		iVar0++;
	}
	iLocal_651 = 0;
	iLocal_648 = 0;
}

void func_492()//Position - 0x60BA1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_980[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_980[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_980[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_980[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_980[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_980[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_980[iVar0]));
			}
		}
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_449[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891);
			}
		}
		iLocal_490[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_908[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_908[iVar0]);
		}
		iVar0++;
	}
	iLocal_650 = 0;
	iLocal_646 = 0;
}


void func_494(int iParam0, float fParam1, bool bParam2)//Position - 0x60CB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar16 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar17 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar18 = false;
	if (bVar15)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = iLocal_652;
		while (iVar0 < 22)
		{
			if (iLocal_595[iVar0] != 99)
			{
				if (iLocal_595[iVar0] == 0)
				{
					if (iLocal_572[iVar0] > 0)
					{
						if (!iLocal_27)
						{
							if (fLocal_430 > (fLocal_362[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_954[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_618[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_954[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_618[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_618[iVar0]), 1);
								iLocal_595[iVar0]++;
								iLocal_654++;
							}
						}
						else
						{
							fVar12 = (fLocal_430 - fLocal_362[iVar0]);
							fVar12 = (fVar12 * fLocal_385[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_484(iLocal_572[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_954[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_618[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_954[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_618[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_618[iVar0]), 1);
									iLocal_595[iVar0]++;
									iLocal_654++;
								}
								else
								{
									iLocal_595[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_595[iVar0] = 99;
					}
				}
				else if (iLocal_595[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891);
					if (MISC::IS_BIT_SET(iLocal_618[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_618[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_618[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_507());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_507());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1041[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_954[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_954[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_572[iVar0], &cLocal_891))
							{
								if (fLocal_430 >= (fLocal_362[iVar0] - (fLocal_443 * fParam1)))
								{
									if ((iLocal_41 || bParam2) || (!bLocal_58 && !func_506(Local_797[iVar0 /*3*/], Var9, 5f, fLocal_441)))
									{
										if (bLocal_37)
										{
											func_505(Local_797[iVar0 /*3*/], Var9, fLocal_434);
										}
										iLocal_1041[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_954[iVar0], Local_797[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_954[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_1041[iVar0], 0);
										}
										if (uLocal_50 && !MISC::IS_BIT_SET(iLocal_618[iVar0], 0))
										{
											func_504(iLocal_1041[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_618[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1041[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1041[iVar0], Local_797[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_1041[iVar0], fLocal_270[iVar0], fLocal_293[iVar0], fLocal_316[iVar0], fLocal_339[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_954[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_954[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1041[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1041[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1041[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_1041[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_954[iVar0]);
										iLocal_654 = (iLocal_654 - 1);
										iLocal_595[iVar0]++;
										bLocal_58 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1041[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_1041[iVar0], Local_797[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_1041[iVar0], fLocal_270[iVar0], fLocal_293[iVar0], fLocal_316[iVar0], fLocal_339[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_954[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_954[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1041[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_1041[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_954[iVar0]);
							iLocal_654 = (iLocal_654 - 1);
							iLocal_595[iVar0]++;
						}
					}
				}
				else if (iLocal_595[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891);
					if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_618[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_618[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_618[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_507());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_507());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1041[iVar0]))
						{
							if (!bLocal_58 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_1041[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_1041[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_41)
									{
										func_502(&(iLocal_1041[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_618[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
					{
						if (fLocal_430 >= fLocal_362[iVar0])
						{
							if (15 > iLocal_647)
							{
								fVar12 = (fLocal_430 - fLocal_362[iVar0]);
								fVar12 = (fVar12 * fLocal_385[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_572[iVar0], &cLocal_891))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_1041[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_572[iVar0], fVar12, &cLocal_891) };
										if (((!func_506(Var3, Var9, 5f, fLocal_441) && func_506(Var6, Var9, 5f, fLocal_441)) && !iLocal_41) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 1))
											{
												func_502(&(iLocal_1041[iVar0]), iVar19, 1);
											}
											iLocal_647++;
											iLocal_595[iVar0]++;
										}
										else if (((!bLocal_58 || MISC::IS_BIT_SET(iLocal_618[iVar0], 1)) || iLocal_41) || bParam2)
										{
											if (func_485(&(iLocal_1041[iVar0]), iLocal_572[iVar0], fVar12, 1, 0, 0, bLocal_56, iLocal_55))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_1041[iVar0], (fParam1 * fLocal_385[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_618[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1041[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_1041[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_1041[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_954[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1041[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 1))
												{
													func_502(&(iLocal_1041[iVar0]), iVar19, 1);
												}
												iLocal_647++;
												iLocal_595[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 1))
										{
											func_502(&(iLocal_1041[iVar0]), iVar19, 1);
										}
										iLocal_647++;
										iLocal_595[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 1))
								{
									func_502(&(iLocal_1041[iVar0]), iVar19, 1);
								}
								iLocal_647++;
								iLocal_595[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_618[iVar0], 1))
						{
							func_502(&(iLocal_1041[iVar0]), iVar19, 1);
						}
						iLocal_647++;
						iLocal_595[iVar0]++;
					}
				}
				else if (iLocal_595[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1041[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1041[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_31 && !iLocal_28) && !bLocal_47) && (((!bLocal_56 && !iLocal_55) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1041[iVar0])) || func_501(iLocal_1041[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (iLocal_49)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_1041[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_1041[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_1041[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												GlobalFunc_5929(iLocal_1041[iVar0]);
												iLocal_595[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_1041[iVar0], (fParam1 * fLocal_385[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1041[iVar0]);
							}
						}
						else
						{
							iLocal_595[iVar0]++;
						}
					}
					else
					{
						iLocal_595[iVar0]++;
					}
				}
				else if (iLocal_595[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1041[iVar0]))
						{
							iLocal_595[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1041[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_1041[iVar0], (fParam1 * fLocal_385[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1041[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_572[iVar0], &cLocal_891))
							{
								if (fLocal_430 > (fLocal_362[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1041[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1041[iVar0]);
							}
						}
					}
					else
					{
						iLocal_595[iVar0]++;
					}
				}
				else if (iLocal_595[iVar0] == 5)
				{
					if (!iLocal_1041[iVar0] == iLocal_1071)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1041[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_1041[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_39 && !bLocal_52)
						{
							if (iLocal_572[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891);
							}
						}
						if (!bLocal_29)
						{
							if (!bLocal_57)
							{
								GlobalFunc_3006(iLocal_1041[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_1041[iVar0]));
						}
					}
					iLocal_647 = (iLocal_647 - 1);
					iLocal_595[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_652 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_495();
	}
}

void func_495()//Position - 0x618B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1041[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1041[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1041[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1041[iVar0]);
				}
			}
			GlobalFunc_2911(iLocal_1041[iVar0]);
			GlobalFunc_3006(iLocal_1041[iVar0]);
		}
		iLocal_595[iVar0] = 0;
		iLocal_618[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_572[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_572[iVar0], &cLocal_891);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_954[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_954[iVar0]);
		}
		iVar0++;
	}
	iLocal_652 = 0;
}






int func_501(int iParam0)//Position - 0x61B7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_53)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, uParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_502(var uParam0, int iParam1, bool bParam2)//Position - 0x61BDA
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_907);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, 1);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_507(), -1, 0, 0);
				if (bLocal_59)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_507());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_60)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_58 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_504(int iParam0)//Position - 0x61CE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_978 >= -1 && iLocal_979 >= -1)
	{
		while (iVar0 == iLocal_978 || iVar0 == iLocal_979)
		{
			iVar0++;
		}
	}
	else if (iLocal_978 >= -1)
	{
		if (iVar0 == iLocal_978)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0, 0, 0);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_505(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x61E5F
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_40)
	{
		if (!func_506(Param0, Param3, fParam6, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_506(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x61ECF
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_40)
		{
			if (!iLocal_27)
			{
				if (SYSTEM::VMAG2(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_507()//Position - 0x61F16
{
	if (iLocal_977 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_977;
}



void func_510(int iParam0)//Position - 0x61FBA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_651;
		while (iVar0 < 4)
		{
			switch (iLocal_641[iVar0])
			{
				case 0:
					if (!iLocal_949[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_784[iVar0 /*3*/], fLocal_428, fLocal_428, fLocal_428, 0, 1, 0))
						{
							iLocal_653++;
							iLocal_641[iVar0]++;
						}
					}
					else
					{
						iLocal_641[iVar0] = 99;
					}
					break;
				
				case 1:
					if (4 > iLocal_648)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1036[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_949[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_949[iVar0]))
							{
								if ((iLocal_27 || iLocal_41) || (!bLocal_58 && !func_506(Local_784[iVar0 /*3*/], Var1, 5f, fLocal_441)))
								{
									if (bLocal_37)
									{
										func_505(Local_784[iVar0 /*3*/], Var1, fLocal_434);
									}
									iLocal_1036[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_949[iVar0], Local_784[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_949[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_1036[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_1036[iVar0], fLocal_408[iVar0], fLocal_413[iVar0], fLocal_418[iVar0], fLocal_423[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_949[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_1036[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_1036[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_949[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_1036[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_1036[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_1036[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_1036[iVar0], 1);
									iLocal_653 = (iLocal_653 - 1);
									iLocal_648++;
									iLocal_641[iVar0]++;
									bLocal_58 = true;
								}
							}
						}
						else
						{
							iLocal_653 = (iLocal_653 - 1);
							iLocal_648++;
							iLocal_641[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1036[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_1036[iVar0], 1) };
						}
						if (fLocal_442 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_442 * fLocal_442))
						{
							if (!GlobalFunc_5654(iLocal_1036[iVar0], iParam0, 0))
							{
								if (!bLocal_29)
								{
									GlobalFunc_3006(iLocal_1036[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_1036[iVar0]));
								}
								iLocal_648 = (iLocal_648 - 1);
								iLocal_641[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_641[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_651 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_511();
	}
}

void func_511()//Position - 0x622AF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1036[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1036[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_1036[iVar0], 1, 0);
			}
			GlobalFunc_3006(iLocal_1036[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_949[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_949[iVar0]);
		}
		iVar0++;
	}
	iLocal_651 = 0;
	iLocal_648 = 0;
}



void func_514(int iParam0, float fParam1, int iParam2)//Position - 0x6234A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	uVar19 = PED::CAN_CREATE_RANDOM_DRIVER();
	uVar20 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar18)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_430 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_650;
		while (iVar0 < 40 && !bVar23)
		{
			if (iLocal_490[iVar0] != 99)
			{
				if (iLocal_490[iVar0] == 0)
				{
					if (iLocal_449[iVar0] > 0 && iLocal_908[iVar0] != 0)
					{
						if (!iLocal_27)
						{
							if (fLocal_430 < (fLocal_225[iVar0] + 20000f))
							{
								if (fLocal_430 >= (fLocal_225[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_908[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_531[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_908[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_531[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_531[iVar0]), 1);
									iLocal_655++;
									iLocal_490[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_517(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_430 - fLocal_225[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_484(iLocal_449[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_908[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_531[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_908[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_531[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_531[iVar0]), 1);
									iLocal_655++;
									iLocal_490[iVar0]++;
								}
								else
								{
									func_517(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_517(iVar0, 1090519040);
					}
				}
				else if (iLocal_490[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_531[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_531[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_531[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_507());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_507());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_980[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_908[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_908[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_449[iVar0], &cLocal_891)) && bVar17)
						{
							if (fLocal_430 >= (fLocal_225[iVar0] - (fLocal_443 * fParam1)))
							{
								if ((iLocal_41 || iParam2) || (!bLocal_58 && !func_506(Local_663[iVar0 /*3*/], Var12, 5f, fLocal_441)))
								{
									if (bLocal_37)
									{
										func_505(Local_663[iVar0 /*3*/], Var12, fLocal_434);
									}
									iLocal_980[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_908[iVar0], Local_663[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_908[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_980[iVar0], 0);
									}
									if (uLocal_50 && !MISC::IS_BIT_SET(iLocal_531[iVar0], 0))
									{
										func_504(iLocal_980[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_980[iVar0], Local_663[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_980[iVar0], fLocal_61[iVar0], fLocal_102[iVar0], fLocal_143[iVar0], fLocal_184[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_908[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_908[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_980[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_531[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_980[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_980[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_980[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_980[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_980[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_908[iVar0]);
									iLocal_655 = (iLocal_655 - 1);
									iLocal_490[iVar0]++;
									bLocal_58 = true;
								}
								else if (fLocal_430 > fLocal_225[iVar0])
								{
									iLocal_655 = (iLocal_655 - 1);
									func_517(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_490[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_661 || iLocal_661 == 0)) || iLocal_41) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_531[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_54 && ((!MISC::IS_BIT_SET(iLocal_531[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_531[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_507());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_507());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_980[iVar0]))
							{
								if (!bLocal_58 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_980[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_980[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_41)
										{
											func_502(&(iLocal_980[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_531[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_980[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891);
							if (fLocal_430 >= fLocal_225[iVar0])
							{
								if (14 > iLocal_646)
								{
									fVar15 = (fLocal_430 - fLocal_225[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_449[iVar0], &cLocal_891))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_980[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_449[iVar0], fVar15, &cLocal_891) };
											if (!func_506(Var6, Var12, 5f, fLocal_441) && func_506(Var9, Var12, 5f, fLocal_441))
											{
												if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
												{
													func_502(&(iLocal_980[iVar0]), iVar21, 0);
												}
												func_517(iVar0, 1090519040);
											}
											else if (((!bLocal_58 || MISC::IS_BIT_SET(iLocal_531[iVar0], 1)) || iLocal_41) || iParam2)
											{
												if (func_485(&(iLocal_980[iVar0]), iLocal_449[iVar0], fVar15, 1, 0, 0, 1, iLocal_55))
												{
													if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
													{
														func_502(&(iLocal_980[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_980[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_980[iVar0], fParam1);
													iLocal_646++;
													iLocal_490[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
											{
												func_502(&(iLocal_980[iVar0]), iVar21, 0);
											}
											func_517(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891))
									{
										if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
										{
											func_502(&(iLocal_980[iVar0]), iVar21, 0);
										}
										func_517(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
									{
										func_502(&(iLocal_980[iVar0]), iVar21, 0);
									}
									func_517(iVar0, 1090519040);
								}
							}
							else if (iLocal_38 && !bLocal_46)
							{
								if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
								{
									func_502(&(iLocal_980[iVar0]), iVar21, 0);
								}
								func_517(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_531[iVar0], 1))
							{
								func_502(&(iLocal_980[iVar0]), iVar21, 0);
							}
							func_517(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_661 = iVar0;
					}
				}
				else if (iLocal_490[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_980[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_980[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_980[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_36)
									{
										if ((!bLocal_31 && !iLocal_28) && func_501(iLocal_980[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_660 || iLocal_660 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_980[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_980[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_660 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_51 && !MISC::IS_BIT_SET(iLocal_531[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_660 || iLocal_660 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_980[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_660 = iVar0;
										}
									}
									if (bVar24)
									{
										GlobalFunc_5929(iLocal_980[iVar0]);
										iLocal_490[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_980[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_980[iVar0]);
							}
						}
						else
						{
							iLocal_490[iVar0]++;
						}
					}
					else
					{
						iLocal_490[iVar0]++;
					}
				}
				else if (iLocal_490[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_980[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_980[iVar0]))
						{
							iLocal_490[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_980[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_980[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_980[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_449[iVar0], &cLocal_891))
							{
								if (fLocal_430 > (fLocal_225[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_980[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_980[iVar0]);
							}
						}
					}
					else
					{
						iLocal_490[iVar0]++;
					}
				}
				else if (iLocal_490[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_980[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_980[iVar0]);
					}
					iLocal_646 = (iLocal_646 - 1);
					func_517(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_650 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_660 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_661 = 0;
		}
	}
	else
	{
		func_515();
	}
}

void func_515()//Position - 0x62EA6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_980[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_980[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_980[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_980[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_980[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_980[iVar0]);
				}
			}
			GlobalFunc_2911(iLocal_980[iVar0]);
			GlobalFunc_3006(iLocal_980[iVar0]);
		}
		iLocal_490[iVar0] = 0;
		iLocal_531[iVar0] = 0;
		if (!bLocal_39 && !bLocal_52)
		{
			if (iLocal_449[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_449[iVar0], &cLocal_891);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!iLocal_908[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_908[iVar0]);
		}
		iVar0++;
	}
	iLocal_650 = 0;
	iLocal_646 = 0;
}


void func_517(int iParam0, float fParam1)//Position - 0x62FF7
{
	int iVar0;
	
	if (!iLocal_908[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_908[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_980[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_980[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_980[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_980[iParam0], -1);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_980[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_60)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_29)
	{
		if (!bLocal_57)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_3006(iLocal_980[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_980[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_980[iParam0]));
		}
	}
	if (!bLocal_39 && !bLocal_52)
	{
		if (iLocal_449[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_449[iParam0], &cLocal_891);
		}
	}
	iLocal_490[iParam0] = 99;
}

void func_518(int iParam0, float fParam1, float fParam2)//Position - 0x63150
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_505(Var1, Var10, fVar13);
		}
	}
}



void func_521(int iParam0, float fParam1)//Position - 0x6326D
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_444 + 2000f);
		fVar2 = (fLocal_445 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_656 == 0)
				{
					Local_879 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_444) };
					iLocal_656++;
				}
				else if (iLocal_656 == 1)
				{
					Local_882 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_656++;
				}
				else if (!bLocal_58)
				{
					if (Local_879.x > Local_882.x)
					{
						fVar3 = Local_879.x;
						Local_879.x = Local_882.x;
						Local_882.x = fVar3;
					}
					if (Local_879.f_1 > Local_882.f_1)
					{
						fVar3 = Local_879.f_1;
						Local_879.f_1 = Local_882.f_1;
						Local_882.f_1 = fVar3;
					}
					if (Local_879.f_2 > Local_882.f_2)
					{
						fVar3 = Local_879.f_2;
						Local_879.f_2 = Local_882.f_2;
						Local_882.f_2 = fVar3;
					}
					Local_879 = { Local_879 - Vector(fLocal_448, fLocal_448, fLocal_448) };
					Local_882 = { Local_882 + Vector(fLocal_448, fLocal_448, fLocal_448) };
					PATHFIND::SET_ROADS_IN_AREA(Local_879, Local_882, 0, 0);
					fLocal_444 = fVar1;
					iLocal_656 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_659 == 0)
			{
				Local_885 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_445) };
				iLocal_659++;
			}
			else if (iLocal_659 == 1)
			{
				Local_888 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_659++;
			}
			else if (!bLocal_58 && !bVar4)
			{
				if (Local_885.x > Local_888.x)
				{
					fVar3 = Local_885.x;
					Local_885.x = Local_888.x;
					Local_888.x = fVar3;
				}
				if (Local_885.f_1 > Local_888.f_1)
				{
					fVar3 = Local_885.f_1;
					Local_885.f_1 = Local_888.f_1;
					Local_888.f_1 = fVar3;
				}
				if (Local_885.f_2 > Local_888.f_2)
				{
					fVar3 = Local_885.f_2;
					Local_885.f_2 = Local_888.f_2;
					Local_888.f_2 = fVar3;
				}
				Local_885 = { Local_885 - Vector(fLocal_448, fLocal_448, fLocal_448) };
				Local_888 = { Local_888 + Vector(fLocal_448, fLocal_448, fLocal_448) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_885, Local_888, 1);
				fLocal_445 = fVar2;
				iLocal_659 = 0;
			}
		}
	}
}




void func_525()//Position - 0x635CF
{
	Local_797[0 /*3*/] = { 1422.353f, -1877.097f, 70.8741f };
	fLocal_270[0] = -0.0341f;
	fLocal_293[0] = -0.0104f;
	fLocal_316[0] = 0.9968f;
	fLocal_339[0] = 0.0712f;
	iLocal_572[0] = 1;
	fLocal_362[0] = 0f;
	fLocal_385[0] = 1f;
	iLocal_954[0] = joaat("intruder");
	Local_797[1 /*3*/] = { 1271.802f, -2046.953f, 43.9714f };
	fLocal_270[1] = -0.0056f;
	fLocal_293[1] = 0.0029f;
	fLocal_316[1] = -0.5599f;
	fLocal_339[1] = 0.8285f;
	iLocal_572[1] = 2;
	fLocal_362[1] = 9000f;
	fLocal_385[1] = 1f;
	iLocal_954[1] = joaat("intruder");
	Local_797[2 /*3*/] = { 1121.799f, -2084.063f, 39.4448f };
	fLocal_270[2] = -0.0369f;
	fLocal_293[2] = 0.0405f;
	fLocal_316[2] = 0.7168f;
	fLocal_339[2] = -0.6952f;
	iLocal_572[2] = 3;
	fLocal_362[2] = 2000f;
	fLocal_385[2] = 1f;
	iLocal_954[2] = joaat("intruder");
	Local_797[4 /*3*/] = { 1198.348f, -1975.261f, 41.4057f };
	fLocal_270[4] = -0.0144f;
	fLocal_293[4] = 0.0367f;
	fLocal_316[4] = 0.9809f;
	fLocal_339[4] = -0.1905f;
	iLocal_572[4] = 5;
	fLocal_362[4] = 6500f;
	fLocal_385[4] = 1f;
	iLocal_954[4] = joaat("utillitruck3");
	Local_797[5 /*3*/] = { 1068.988f, -2081.002f, 33.3438f };
	fLocal_270[5] = -0.0391f;
	fLocal_293[5] = 0.0363f;
	fLocal_316[5] = 0.7185f;
	fLocal_339[5] = -0.6935f;
	iLocal_572[5] = 6;
	fLocal_362[5] = 5500f;
	fLocal_385[5] = 1f;
	iLocal_954[5] = joaat("utillitruck3");
	Local_797[6 /*3*/] = { 963.4304f, -2086.325f, 30.2687f };
	fLocal_270[6] = 0.005f;
	fLocal_293[6] = -0.0043f;
	fLocal_316[6] = -0.7028f;
	fLocal_339[6] = 0.7114f;
	iLocal_572[6] = 7;
	fLocal_362[6] = 7500f;
	fLocal_385[6] = 1f;
	iLocal_954[6] = joaat("speedo");
	Local_797[8 /*3*/] = { 907.752f, -2083f, 30.0697f };
	fLocal_270[8] = 0.0014f;
	fLocal_293[8] = -0.0038f;
	fLocal_316[8] = 0.7314f;
	fLocal_339[8] = -0.682f;
	iLocal_572[8] = 9;
	fLocal_362[8] = 10000f;
	fLocal_385[8] = 1f;
	iLocal_954[8] = joaat("speedo");
	Local_797[9 /*3*/] = { 932.7582f, -2037.153f, 29.8118f };
	fLocal_270[9] = -0.0265f;
	fLocal_293[9] = -0.007f;
	fLocal_316[9] = 0.9995f;
	fLocal_339[9] = 0.0158f;
	iLocal_572[9] = 10;
	fLocal_362[9] = 14500f;
	fLocal_385[9] = 1f;
	iLocal_954[9] = joaat("intruder");
	Local_797[11 /*3*/] = { 1102.165f, -2071.463f, 37.002f };
	fLocal_270[11] = -0.0721f;
	fLocal_293[11] = -0.0486f;
	fLocal_316[11] = 0.6862f;
	fLocal_339[11] = 0.7222f;
	iLocal_572[11] = 12;
	fLocal_362[11] = 15700f;
	fLocal_385[11] = 1f;
	iLocal_954[11] = joaat("intruder");
	Local_797[12 /*3*/] = { 929.1259f, -2132.273f, 29.7939f };
	fLocal_270[12] = -0.004f;
	fLocal_293[12] = -0.0066f;
	fLocal_316[12] = -0.0359f;
	fLocal_339[12] = 0.9993f;
	iLocal_572[12] = 13;
	fLocal_362[12] = 16500f;
	fLocal_385[12] = 1f;
	iLocal_954[12] = joaat("speedo");
	Local_797[13 /*3*/] = { 927.9391f, -2152.367f, 30.0681f };
	fLocal_270[13] = 0f;
	fLocal_293[13] = -0.0014f;
	fLocal_316[13] = -0.0385f;
	fLocal_339[13] = 0.9993f;
	iLocal_572[13] = 14;
	fLocal_362[13] = 20000f;
	fLocal_385[13] = 1f;
	iLocal_954[13] = joaat("utillitruck3");
	Local_797[14 /*3*/] = { 867.0321f, -2104.532f, 29.8221f };
	fLocal_270[14] = -0.0044f;
	fLocal_293[14] = -0.0205f;
	fLocal_316[14] = -0.0787f;
	fLocal_339[14] = 0.9967f;
	iLocal_572[14] = 15;
	fLocal_362[14] = 18000f;
	fLocal_385[14] = 1f;
	iLocal_954[14] = joaat("speedo");
	Local_663[17 /*3*/] = { 792.7391f, -2071.552f, 28.9547f };
	fLocal_61[17] = -0.004f;
	fLocal_102[17] = -0.0208f;
	fLocal_143[17] = -0.5235f;
	fLocal_184[17] = 0.8518f;
	iLocal_449[17] = 18;
	fLocal_225[17] = 27148f;
	iLocal_908[17] = joaat("feltzer2");
	Local_663[18 /*3*/] = { 789.3976f, -2078.59f, 28.954f };
	fLocal_61[18] = 0.0042f;
	fLocal_102[18] = -0.0002f;
	fLocal_143[18] = -0.0429f;
	fLocal_184[18] = 0.9991f;
	iLocal_449[18] = 19;
	fLocal_225[18] = 27214f;
	iLocal_908[18] = joaat("fq2");
	Local_663[19 /*3*/] = { 760.3094f, -2127.563f, 28.816f };
	fLocal_61[19] = -0.0005f;
	fLocal_102[19] = -0.0036f;
	fLocal_143[19] = 0.9988f;
	fLocal_184[19] = 0.0494f;
	iLocal_449[19] = 20;
	fLocal_225[19] = 30513f;
	iLocal_908[19] = joaat("serrano");
	Local_663[20 /*3*/] = { 753.7613f, -2140.944f, 28.8163f };
	fLocal_61[20] = -0.0021f;
	fLocal_102[20] = -0.0121f;
	fLocal_143[20] = 0.9987f;
	fLocal_184[20] = 0.0494f;
	iLocal_449[20] = 21;
	fLocal_225[20] = 30579f;
	iLocal_908[20] = joaat("fq2");
	Local_663[21 /*3*/] = { 780.1787f, -2120.84f, 28.8168f };
	fLocal_61[21] = -0.0044f;
	fLocal_102[21] = 0f;
	fLocal_143[21] = -0.0484f;
	fLocal_184[21] = 0.9988f;
	iLocal_449[21] = 22;
	fLocal_225[21] = 30843f;
	iLocal_908[21] = joaat("serrano");
	Local_663[22 /*3*/] = { 750.2296f, -2242.933f, 28.8457f };
	fLocal_61[22] = -0.0002f;
	fLocal_102[22] = -0.0035f;
	fLocal_143[22] = 0.9991f;
	fLocal_184[22] = 0.0431f;
	iLocal_449[22] = 23;
	fLocal_225[22] = 35727f;
	iLocal_908[22] = joaat("radi");
	Local_663[23 /*3*/] = { 781.4967f, -2233.732f, 28.8944f };
	fLocal_61[23] = 0.0052f;
	fLocal_102[23] = -0.0057f;
	fLocal_143[23] = 0.6125f;
	fLocal_184[23] = 0.7904f;
	iLocal_449[23] = 24;
	fLocal_225[23] = 36255f;
	iLocal_908[23] = joaat("bison");
	Local_663[24 /*3*/] = { 772.0815f, -2276.501f, 28.6292f };
	fLocal_61[24] = 0.0161f;
	fLocal_102[24] = -0.0006f;
	fLocal_143[24] = -0.0421f;
	fLocal_184[24] = 0.999f;
	iLocal_449[24] = 25;
	fLocal_225[24] = 36915f;
	iLocal_908[24] = joaat("fq2");
	Local_663[25 /*3*/] = { 763.6131f, -2310.326f, 26.7922f };
	fLocal_61[25] = 0.0355f;
	fLocal_102[25] = -0.0023f;
	fLocal_143[25] = -0.0452f;
	fLocal_184[25] = 0.9983f;
	iLocal_449[25] = 26;
	fLocal_225[25] = 38235f;
	iLocal_908[25] = joaat("bison");
	Local_663[26 /*3*/] = { 766.6949f, -2338.007f, 24.7797f };
	fLocal_61[26] = 0.0396f;
	fLocal_102[26] = -0.0014f;
	fLocal_143[26] = -0.0413f;
	fLocal_184[26] = 0.9984f;
	iLocal_449[26] = 27;
	fLocal_225[26] = 39225f;
	iLocal_908[26] = joaat("bison");
}

void func_526(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x63EB3
{
	struct<3> Var0;
	
	StringCopy(&cLocal_891, sParam0, 64);
	bLocal_37 = true;
	iLocal_42 = 0;
	iLocal_646 = 0;
	iLocal_647 = 0;
	iLocal_648 = 0;
	iLocal_649 = iParam1;
	iLocal_650 = 0;
	iLocal_651 = 0;
	iLocal_652 = 0;
	iLocal_656 = 0;
	iLocal_659 = 0;
	iLocal_657 = -1;
	iLocal_658 = -1;
	iLocal_660 = 0;
	iLocal_661 = 0;
	fLocal_444 = 0f;
	fLocal_445 = 0f;
	fLocal_430 = 0f;
	iLocal_43 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_867.x = (Var0.x - 100f);
		Local_867.f_1 = (Var0.f_1 - 100f);
		Local_867.f_2 = (Var0.f_2 - 100f);
		Local_870.x = (Var0.x + 100f);
		Local_870.f_1 = (Var0.f_1 + 100f);
		Local_870.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_867, Local_870, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_907);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9191(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_527();
}

void func_527()//Position - 0x63FD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iLocal_980[iVar0] = 0;
		Local_663[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_61[iVar0] = 0f;
		fLocal_102[iVar0] = 0f;
		fLocal_143[iVar0] = 0f;
		fLocal_184[iVar0] = 0f;
		iLocal_449[iVar0] = 0;
		fLocal_225[iVar0] = 0f;
		iLocal_490[iVar0] = 0;
		iLocal_908[iVar0] = 0;
		iLocal_531[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iLocal_1021[iVar0] = 0;
		iVar0++;
	}
	iLocal_646 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_1036[iVar0] = 0;
		Local_784[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_408[iVar0] = 0f;
		fLocal_413[iVar0] = 0f;
		fLocal_418[iVar0] = 0f;
		fLocal_423[iVar0] = 0f;
		iLocal_641[iVar0] = 0;
		iLocal_949[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_1064[iVar0] = 0;
		iVar0++;
	}
	iLocal_648 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_1041[iVar0] = 0;
		Local_797[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_270[iVar0] = 0f;
		fLocal_293[iVar0] = 0f;
		fLocal_316[iVar0] = 0f;
		fLocal_339[iVar0] = 0f;
		iLocal_572[iVar0] = 0;
		fLocal_362[iVar0] = 0f;
		iLocal_595[iVar0] = 0;
		iLocal_954[iVar0] = 0;
		iLocal_618[iVar0] = 0;
		iVar0++;
	}
	iLocal_647 = 0;
	iLocal_650 = 0;
	iLocal_653 = 0;
	iLocal_654 = 0;
	iLocal_655 = 0;
}






void func_533()//Position - 0x642BC
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_3181 = 0;
	iLocal_3182 = 0;
	iLocal_3176 = 0;
	iLocal_3177 = 0;
	bLocal_3178 = false;
	bLocal_3179 = false;
	iLocal_3180 = 0;
	iLocal_3181 = 0;
	iLocal_3182 = 0;
	bLocal_3183 = false;
	iLocal_3184 = 0;
	iLocal_3185 = 0;
	iLocal_3186 = 0;
	iLocal_3187 = 0;
	bLocal_3188 = false;
	iLocal_3189 = 0;
	iLocal_3190 = 0;
	iLocal_3191 = 0;
	iLocal_3192 = 0;
	bLocal_3193 = false;
	bLocal_3194 = false;
	iLocal_3195 = 0;
	bLocal_3196 = false;
	iLocal_3197 = 0;
	iLocal_3198 = 0;
	iLocal_3199 = 0;
	iLocal_3200 = 0;
	iLocal_3201 = 0;
	bLocal_3202 = false;
	bLocal_3203 = false;
	bLocal_3204 = false;
	bLocal_3205 = false;
	iLocal_3206 = 0;
	iLocal_3207 = 0;
	bLocal_3208 = false;
	iLocal_3209 = 0;
	iLocal_3210 = 0;
	iLocal_3211 = 0;
	iLocal_3212 = 0;
	bLocal_3213 = false;
	iLocal_3214 = 0;
	bLocal_3216 = false;
	bLocal_3217 = false;
	iLocal_3218 = 0;
	iLocal_3219 = 0;
	iLocal_3220 = 0;
	iLocal_3221 = 0;
	iLocal_3222 = 0;
	iLocal_3223 = 0;
	iLocal_3224 = 0;
	iLocal_3226 = 0;
	iLocal_3227 = 0;
	iLocal_3228 = 0;
	iLocal_3229 = 0;
	iLocal_3230 = 0;
	iLocal_3234 = 0;
	iLocal_3235 = 0;
	iLocal_3236 = 0;
	iLocal_3237 = 0;
	iLocal_3238 = 0;
	iLocal_3240 = 0;
	iLocal_3247 = 0;
	iLocal_3248 = 0;
	iLocal_3246 = 0;
	iLocal_3250 = 0;
	iLocal_3251 = 0;
	iLocal_3252 = 0;
	iLocal_3253 = 0;
	iLocal_3254 = 0;
	iLocal_3255 = 0;
	iLocal_3256 = 0;
	iLocal_3281 = 0;
	iLocal_3282 = 0;
	iLocal_3283 = 0;
	iLocal_3284 = 0;
	iLocal_3286 = 0;
	iLocal_3287 = 0;
	iLocal_3289 = 0;
	iLocal_3290 = 0;
	iLocal_3291 = 0;
	iLocal_3293 = 0;
	iLocal_3294 = 0;
	iLocal_3295 = 0;
	iLocal_3296 = 0;
	iLocal_3297 = 0;
	iLocal_3300 = 0;
	iLocal_3301 = 0;
	iLocal_3302 = 0;
	iLocal_3306 = 0;
	iLocal_3307 = 0;
	iLocal_3244 = 0;
	iLocal_3308 = 0;
	iLocal_3309 = 0;
	iLocal_3310 = 0;
	iLocal_3311 = 0;
	iLocal_3312 = 0;
	iLocal_3313 = 0;
	iLocal_3314 = 0;
	iLocal_3315 = 0;
	iLocal_3316 = 0;
	iLocal_3287 = 0;
	iLocal_3354 = 0;
	iLocal_3355 = 0;
	iLocal_3356 = 0;
	iLocal_3357 = 0;
	iLocal_3358 = 0;
	iLocal_3359 = 0;
	iLocal_3259 = 0;
	iLocal_3360 = 0;
	iLocal_3361 = 0;
	iLocal_3362 = 0;
	iLocal_3364 = 0;
	iLocal_3365 = 0;
	iLocal_3366 = 0;
	iLocal_3370 = 0;
	iLocal_3371 = 0;
	iLocal_3372 = 0;
	iLocal_3373 = 0;
	iLocal_3374 = 0;
	iLocal_3375 = 0;
	iLocal_3376 = 0;
	iLocal_3377 = 0;
	iLocal_3378 = 0;
	iLocal_3379 = 0;
	iLocal_3380 = 0;
	iLocal_3381 = 0;
	iLocal_3382 = 0;
	iLocal_3383 = 0;
	iLocal_3384 = 0;
	iLocal_3385 = 0;
	iLocal_3386 = 0;
	iLocal_3387 = 0;
	iLocal_3388 = 0;
	iLocal_3389 = 0;
	iLocal_3390 = 0;
	iLocal_3391 = 0;
	iLocal_3392 = 0;
	iLocal_3393 = 0;
	iLocal_3394 = 0;
	iLocal_3395 = 0;
	iLocal_3396 = 0;
	iLocal_3397 = 0;
	iLocal_3398 = 0;
	iLocal_3399 = 0;
	iLocal_3400 = 0;
	iLocal_3404 = 0;
	iLocal_3405 = 0;
	iLocal_3406 = 0;
	iLocal_3407 = 0;
	iLocal_3408 = 0;
	fLocal_3443 = 1f;
	fLocal_3444 = 1f;
	fLocal_3445 = 1f;
	GlobalFunc_729(&uLocal_3098, 0, 0);
	GlobalFunc_729(&uLocal_3098, 1, 0);
	GlobalFunc_729(&uLocal_3098, 2, 0);
	iLocal_3806 = 1;
	iLocal_3837 = 0;
	Local_3420 = { 881.0168f, -2333.912f, 33.9075f };
	Local_2587.f_1 = GlobalFunc_4946(30);
	Local_2587.f_3 = { 1392.27f, -2071.484f, 51.0172f };
	Local_2587.f_10 = 200;
	Local_2607.f_1 = GlobalFunc_4946(23);
	Local_2607.f_3 = { 1393.04f, -2069.232f, 51.0114f };
	Local_2607.f_10 = 200;
	Local_2627.f_1 = GlobalFunc_4946(67);
	Local_2627.f_3 = { 1390.123f, -2070.553f, 51.0074f };
	Local_2627.f_15 = joaat("weapon_unarmed");
	Local_2627.f_10 = 200;
	Local_1478.f_1 = GlobalFunc_4931(2, 0);
	Local_1176.f_1 = joaat("trash");
	Local_1176.f_3 = { 959.5624f, -2071.308f, 29.6226f };
	Local_1176.f_6 = 87.4847f;
	Local_1206.f_1 = joaat("towtruck");
	Local_1206.f_3 = { 1022.351f, -2376.316f, 29.5306f };
	Local_1206.f_6 = 85.1557f;
	Local_1644.f_1 = joaat("s_m_m_armoured_01");
	Local_1664.f_1 = joaat("s_m_m_armoured_01");
	Local_1684.f_3 = { 855.28f, -2374.2f, 43.26f };
	Local_1684.f_9 = 7.2f;
	Local_1684.f_1 = joaat("s_m_m_armoured_01");
	Local_1684.f_10 = 200;
	StringCopy(&(Local_1684.f_16), "army guy", 16);
	Local_1704.f_3 = { 855.28f, -2374.2f, 44.26f };
	Local_1704.f_9 = 7.2f;
	Local_1704.f_1 = joaat("s_m_m_armoured_01");
	Local_1704.f_10 = 200;
	StringCopy(&(Local_1704.f_16), "army guy 2", 16);
	Local_1191.f_1 = joaat("stockade");
	Local_1191.f_3 = { 736.8857f, -2730.563f, 6.3323f };
	Local_1191.f_6 = 0.3915f;
	Local_1191.f_9 = 1000;
	Local_1614.f_1 = GlobalFunc_4931(0, 0);
	Local_1614.f_3 = { -823.5428f, 181.3025f, 70.6662f };
	Local_1614.f_6 = 142.815f;
	Local_1493[0 /*15*/].f_3 = { 736.4277f, -2347.022f, 24.0021f };
	Local_1493[0 /*15*/].f_1 = joaat("stanier");
	Local_1493[0 /*15*/].f_13 = 201;
	Local_1493[1 /*15*/].f_3 = { 730.5193f, -2405.836f, 20.1767f };
	Local_1493[1 /*15*/].f_1 = joaat("stanier");
	Local_1493[1 /*15*/].f_13 = 202;
	Local_1493[2 /*15*/].f_3 = { 639.3552f, -2504.716f, 17.436f };
	Local_1493[2 /*15*/].f_1 = joaat("stanier");
	Local_1493[2 /*15*/].f_13 = 203;
	Local_1493[3 /*15*/].f_3 = { 682.7643f, -2493.155f, 19.71f };
	Local_1493[3 /*15*/].f_1 = joaat("stanier");
	Local_1493[3 /*15*/].f_13 = 204;
	Local_1493[4 /*15*/].f_3 = { 736.4277f, -2347.022f, 24.0021f };
	Local_1493[4 /*15*/].f_1 = joaat("stanier");
	Local_1493[4 /*15*/].f_13 = 201;
	Local_1493[5 /*15*/].f_3 = { 730.5193f, -2405.836f, 20.1767f };
	Local_1493[5 /*15*/].f_1 = joaat("stanier");
	Local_1493[5 /*15*/].f_13 = 201;
	Local_1493[6 /*15*/].f_3 = { 639.3552f, -2504.716f, 17.436f };
	Local_1493[6 /*15*/].f_1 = joaat("stanier");
	Local_1493[6 /*15*/].f_13 = 203;
	Local_1493[7 /*15*/].f_3 = { 682.7643f, -2493.155f, 19.71f };
	Local_1493[7 /*15*/].f_1 = joaat("stanier");
	Local_1493[7 /*15*/].f_13 = 204;
	Local_3411 = { 906.2f, -2375.501f, 30.532f };
	Local_2932.f_2 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stickybomb"));
	Local_2932.f_3 = { 872f, -2369f, 36.72f };
	Local_2932.f_20 = 1000;
	Local_2956.f_2 = joaat("prop_binoc_01");
	Local_3028.f_2 = joaat("prop_cs_envolope_01");
	Local_3028.f_3 = { 890.1637f, -2363.363f, 29.77f };
	Local_3028.f_12 = { 0f, 0f, 0f };
	Local_2980.f_2 = joaat("prop_securityvan_lightrig");
	Local_2980.f_3 = { 890.365f, -2367.289f, 28.104f };
	Local_2980.f_12 = { 0f, 0f, -0.11f };
	iVar0 = 0;
	while (iVar0 <= (Local_1724 - 1))
	{
		Local_1724[iVar0 /*20*/].f_14 = 0;
		iLocal_1126[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2647 - 1))
	{
		Local_2647[iVar0 /*20*/].f_14 = 0;
		iLocal_1163[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2708 - 1))
	{
		Local_2708[iVar0 /*20*/].f_14 = 0;
		iLocal_1167[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2769 - 1))
	{
		iLocal_3401[iVar0] = 0;
		iVar0++;
	}
	Local_1724[0 /*20*/].f_6 = { 883.9125f, -2361.335f, 29.2142f };
	Local_1724[0 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[0 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[0 /*20*/].f_12 = 1;
	Local_1724[0 /*20*/].f_10 = 200;
	Local_1724[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[0 /*20*/].f_16), "police man 0", 16);
	Local_1724[1 /*20*/].f_6 = { 886.4715f, -2342.363f, 29.33342f };
	Local_1724[1 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[1 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[1 /*20*/].f_12 = 1;
	Local_1724[1 /*20*/].f_10 = 200;
	Local_1724[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[1 /*20*/].f_16), "police man 1", 16);
	Local_1724[2 /*20*/].f_6 = { 888.0029f, -2362.344f, 29.2334f };
	Local_1724[2 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[2 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[2 /*20*/].f_12 = 0;
	Local_1724[2 /*20*/].f_10 = 200;
	Local_1724[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[2 /*20*/].f_16), "police man 2", 16);
	Local_1724[3 /*20*/].f_6 = { 891.9032f, -2362.348f, 29.3657f };
	Local_1724[3 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[3 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[3 /*20*/].f_12 = 1;
	Local_1724[3 /*20*/].f_10 = 200;
	Local_1724[3 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[3 /*20*/].f_16), "police man 3", 16);
	Local_1724[4 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_1724[4 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[4 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[4 /*20*/].f_12 = 0;
	Local_1724[4 /*20*/].f_10 = 200;
	Local_1724[4 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[4 /*20*/].f_16), "police man 4", 16);
	Local_1724[5 /*20*/].f_6 = { 886.3158f, -2343.946f, 29.3304f };
	Local_1724[5 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[5 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[5 /*20*/].f_12 = 1;
	Local_1724[5 /*20*/].f_10 = 200;
	Local_1724[5 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[5 /*20*/].f_16), "police man 5", 16);
	Local_1724[6 /*20*/].f_6 = { 886.8484f, -2341.622f, 29.3343f };
	Local_1724[6 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[6 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[6 /*20*/].f_12 = 0;
	Local_1724[6 /*20*/].f_10 = 200;
	Local_1724[6 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[6 /*20*/].f_16), "police man 6", 16);
	Local_1724[7 /*20*/].f_6 = { 899.53f, -2346.007f, 29.5092f };
	Local_1724[7 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[7 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[7 /*20*/].f_12 = 1;
	Local_1724[7 /*20*/].f_10 = 200;
	Local_1724[7 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[7 /*20*/].f_16), "police man 7", 16);
	Local_1724[8 /*20*/].f_3 = { 962.9001f, -2379.581f, 40.1731f };
	Local_1724[8 /*20*/].f_9 = 85.5324f;
	Local_1724[8 /*20*/].f_6 = { 925.729f, -2375.898f, 40.1731f };
	Local_1724[8 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[8 /*20*/].f_15 = joaat("weapon_sniperrifle");
	Local_1724[8 /*20*/].f_12 = 1;
	Local_1724[8 /*20*/].f_10 = 120;
	Local_1724[8 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[8 /*20*/].f_16), "police man 8", 16);
	Local_1724[9 /*20*/].f_3 = { 944.7178f, -2401.494f, 40.1731f };
	Local_1724[9 /*20*/].f_9 = 75.9638f;
	Local_1724[9 /*20*/].f_6 = { 922.8425f, -2400.809f, 40.2425f };
	Local_1724[9 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[9 /*20*/].f_15 = joaat("weapon_sniperrifle");
	Local_1724[9 /*20*/].f_12 = 1;
	Local_1724[9 /*20*/].f_10 = 120;
	Local_1724[9 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[9 /*20*/].f_16), "police man 9", 16);
	Local_1724[10 /*20*/].f_6 = { 894.138f, -2346.749f, 29.4404f };
	Local_1724[10 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[10 /*20*/].f_15 = joaat("weapon_carbinerifle");
	Local_1724[10 /*20*/].f_12 = 1;
	Local_1724[10 /*20*/].f_10 = 200;
	Local_1724[10 /*20*/].f_11 = 2;
	StringCopy(&(Local_1724[10 /*20*/].f_16), "police man 10", 16);
	Local_1724[11 /*20*/].f_6 = { 886.7021f, -2345.017f, 29.3304f };
	Local_1724[11 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[11 /*20*/].f_15 = joaat("weapon_carbinerifle");
	Local_1724[11 /*20*/].f_12 = 1;
	Local_1724[11 /*20*/].f_10 = 200;
	Local_1724[11 /*20*/].f_11 = 2;
	StringCopy(&(Local_1724[11 /*20*/].f_16), "police man 11", 16);
	Local_1724[12 /*20*/].f_3 = { 845.1862f, -2253.644f, 29.2907f };
	Local_1724[12 /*20*/].f_9 = 177.1563f;
	Local_1724[12 /*20*/].f_6 = { 843.8444f, -2315.916f, 29.3346f };
	Local_1724[12 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[12 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[12 /*20*/].f_12 = 1;
	Local_1724[12 /*20*/].f_10 = 200;
	Local_1724[12 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[12 /*20*/].f_16), "police man 12", 16);
	Local_1724[13 /*20*/].f_3 = { 846.6603f, -2270.791f, 29.3452f };
	Local_1724[13 /*20*/].f_9 = 186.9243f;
	Local_1724[13 /*20*/].f_6 = { 857.6421f, -2312.731f, 29.3462f };
	Local_1724[13 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[13 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[13 /*20*/].f_12 = 1;
	Local_1724[13 /*20*/].f_10 = 200;
	Local_1724[13 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[13 /*20*/].f_16), "police man 13", 16);
	Local_1724[14 /*20*/].f_3 = { 949.6615f, -2374.866f, 29.8815f };
	Local_1724[14 /*20*/].f_9 = 115.1845f;
	Local_1724[14 /*20*/].f_6 = { 885.1977f, -2361.141f, 29.2205f };
	Local_1724[14 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[14 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[14 /*20*/].f_12 = 0;
	Local_1724[14 /*20*/].f_10 = 200;
	Local_1724[14 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[14 /*20*/].f_16), "police man 14", 16);
	Local_1724[15 /*20*/].f_3 = { 957.048f, -2366.364f, 29.5281f };
	Local_1724[15 /*20*/].f_9 = 135.4363f;
	Local_1724[15 /*20*/].f_6 = { 886.9384f, -2344.653f, 29.3308f };
	Local_1724[15 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[15 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[15 /*20*/].f_12 = 1;
	Local_1724[15 /*20*/].f_10 = 200;
	Local_1724[15 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[15 /*20*/].f_16), "police man 15", 16);
	Local_1724[16 /*20*/].f_3 = { 864.4395f, -2251.64f, 29.4899f };
	Local_1724[16 /*20*/].f_9 = 176.214f;
	Local_1724[16 /*20*/].f_6 = { 855.1099f, -2305.227f, 29.34599f };
	Local_1724[16 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[16 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[16 /*20*/].f_12 = 0;
	Local_1724[16 /*20*/].f_10 = 200;
	Local_1724[16 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[16 /*20*/].f_16), "police man 16", 16);
	Local_1724[17 /*20*/].f_3 = { 868.1833f, -2259.834f, 37.789f };
	Local_1724[17 /*20*/].f_9 = 171.4895f;
	Local_1724[17 /*20*/].f_6 = { 854.8495f, -2296.7f, 29.3433f };
	Local_1724[17 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[17 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[17 /*20*/].f_12 = 1;
	Local_1724[17 /*20*/].f_10 = 200;
	Local_1724[17 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[17 /*20*/].f_16), "police man 17", 16);
	Local_1724[18 /*20*/].f_3 = { 836.7518f, -2249.353f, 29.1574f };
	Local_1724[18 /*20*/].f_9 = 243.6401f;
	Local_1724[18 /*20*/].f_6 = { 845.2686f, -2304.28f, 29.33778f };
	Local_1724[18 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[18 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[18 /*20*/].f_12 = 0;
	Local_1724[18 /*20*/].f_10 = 200;
	Local_1724[18 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[18 /*20*/].f_16), "police man 18", 16);
	Local_1724[19 /*20*/].f_3 = { 866.9947f, -2251.456f, 29.5108f };
	Local_1724[19 /*20*/].f_9 = 93.528f;
	Local_1724[19 /*20*/].f_6 = { 861.5505f, -2324.327f, 29.3458f };
	Local_1724[19 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[19 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[19 /*20*/].f_12 = 1;
	Local_1724[19 /*20*/].f_10 = 200;
	Local_1724[19 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[19 /*20*/].f_16), "police man 19", 16);
	Local_1724[20 /*20*/].f_3 = { 831.0994f, -2250.994f, 29.0958f };
	Local_1724[20 /*20*/].f_9 = 266.1835f;
	Local_1724[20 /*20*/].f_6 = { 847.2873f, -2287.962f, 29.33541f };
	Local_1724[20 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[20 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[20 /*20*/].f_12 = 0;
	Local_1724[20 /*20*/].f_10 = 200;
	Local_1724[20 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[20 /*20*/].f_16), "police man 20", 16);
	Local_1724[20 /*20*/].f_14 = 1;
	Local_1724[21 /*20*/].f_6 = { 862.5962f, -2283.88f, 37.7922f };
	Local_1724[21 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[21 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[21 /*20*/].f_12 = 1;
	Local_1724[21 /*20*/].f_10 = 150;
	Local_1724[21 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[21 /*20*/].f_16), "police man 21", 16);
	Local_1724[22 /*20*/].f_6 = { 864.5548f, -2284.065f, 37.79219f };
	Local_1724[22 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[22 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[22 /*20*/].f_12 = 0;
	Local_1724[22 /*20*/].f_10 = 150;
	Local_1724[22 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[22 /*20*/].f_16), "police man 22", 16);
	Local_1724[23 /*20*/].f_6 = { 847.0486f, -2308.661f, 29.33128f };
	Local_1724[23 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[23 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[23 /*20*/].f_12 = 1;
	Local_1724[23 /*20*/].f_10 = 150;
	Local_1724[23 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[23 /*20*/].f_16), "police man 23", 16);
	Local_1724[24 /*20*/].f_6 = { 844.2418f, -2315.341f, 29.3346f };
	Local_1724[24 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[24 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[24 /*20*/].f_12 = 0;
	Local_1724[24 /*20*/].f_10 = 150;
	Local_1724[24 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[24 /*20*/].f_16), "police man 24", 16);
	Local_1724[25 /*20*/].f_6 = { 858.5804f, -2313.156f, 29.34623f };
	Local_1724[25 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[25 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[25 /*20*/].f_12 = 1;
	Local_1724[25 /*20*/].f_10 = 150;
	Local_1724[25 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[25 /*20*/].f_16), "police man 25", 16);
	Local_1724[26 /*20*/].f_6 = { 852.4091f, -2315.251f, 29.34282f };
	Local_1724[26 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[26 /*20*/].f_15 = joaat("weapon_smg");
	Local_1724[26 /*20*/].f_12 = 0;
	Local_1724[26 /*20*/].f_10 = 150;
	Local_1724[26 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[26 /*20*/].f_16), "police man 26", 16);
	Local_1724[26 /*20*/].f_14 = 1;
	Local_1724[27 /*20*/].f_6 = { 884.3048f, -2361.239f, 29.2162f };
	Local_1724[27 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[27 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[27 /*20*/].f_12 = 1;
	Local_1724[27 /*20*/].f_10 = 200;
	Local_1724[27 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[27 /*20*/].f_16), "police man 27", 16);
	Local_1724[28 /*20*/].f_6 = { 890.2f, -2347.5f, 29.3346f };
	Local_1724[28 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[28 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[28 /*20*/].f_12 = 1;
	Local_1724[28 /*20*/].f_10 = 200;
	Local_1724[28 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[28 /*20*/].f_16), "police man 28", 16);
	Local_1724[29 /*20*/].f_3 = { 957.1928f, -2366.227f, 29.5267f };
	Local_1724[29 /*20*/].f_9 = 75.0198f;
	Local_1724[29 /*20*/].f_6 = { 896.0663f, -2355.383f, 29.4741f };
	Local_1724[29 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[29 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[29 /*20*/].f_12 = 1;
	Local_1724[29 /*20*/].f_10 = 200;
	Local_1724[29 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[29 /*20*/].f_16), "police man 29", 16);
	Local_1724[30 /*20*/].f_3 = { 950.1217f, -2375.131f, 29.8892f };
	Local_1724[30 /*20*/].f_9 = 38.0107f;
	Local_1724[30 /*20*/].f_6 = { 888.488f, -2358.472f, 29.2735f };
	Local_1724[30 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[30 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[30 /*20*/].f_12 = 1;
	Local_1724[30 /*20*/].f_10 = 200;
	Local_1724[30 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[30 /*20*/].f_16), "police man 30", 16);
	Local_1724[31 /*20*/].f_3 = { 969.2328f, -2382.315f, 40.2425f };
	Local_1724[31 /*20*/].f_9 = 104.0753f;
	Local_1724[31 /*20*/].f_6 = { 923.9522f, -2394.885f, 47.057f };
	Local_1724[31 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_1724[31 /*20*/].f_15 = joaat("weapon_sniperrifle");
	Local_1724[31 /*20*/].f_12 = 1;
	Local_1724[31 /*20*/].f_10 = 200;
	Local_1724[31 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[31 /*20*/].f_16), "police man 31", 16);
	Local_1724[32 /*20*/].f_6 = { 858.5545f, -2312.776f, 29.3462f };
	Local_1724[32 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[32 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[32 /*20*/].f_12 = 1;
	Local_1724[32 /*20*/].f_10 = 200;
	Local_1724[32 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[32 /*20*/].f_16), "police man 32", 16);
	Local_1724[33 /*20*/].f_6 = { 848.8008f, -2302.244f, 29.3291f };
	Local_1724[33 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[33 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[33 /*20*/].f_12 = 1;
	Local_1724[33 /*20*/].f_10 = 200;
	Local_1724[33 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[33 /*20*/].f_16), "police man 33", 16);
	Local_1724[34 /*20*/].f_3 = { 847.2f, -2270.3f, 29.5123f };
	Local_1724[34 /*20*/].f_9 = 250.8976f;
	Local_1724[34 /*20*/].f_6 = { 844.4641f, -2315.198f, 29.3346f };
	Local_1724[34 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[34 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[34 /*20*/].f_12 = 1;
	Local_1724[34 /*20*/].f_10 = 200;
	Local_1724[34 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[34 /*20*/].f_16), "police man 34", 16);
	Local_1724[35 /*20*/].f_3 = { 856.1734f, -2266.66f, 35.1378f };
	Local_1724[35 /*20*/].f_9 = 178.9939f;
	Local_1724[35 /*20*/].f_6 = { 855.016f, -2297.272f, 29.3439f };
	Local_1724[35 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_1724[35 /*20*/].f_15 = joaat("weapon_pistol");
	Local_1724[35 /*20*/].f_12 = 1;
	Local_1724[35 /*20*/].f_10 = 200;
	Local_1724[35 /*20*/].f_11 = 5;
	StringCopy(&(Local_1724[35 /*20*/].f_16), "police man 35", 16);
	Local_1221[0 /*15*/].f_3 = { 866.4801f, -2240.585f, 29.4915f };
	Local_1221[0 /*15*/].f_6 = 264.0104f;
	Local_1221[0 /*15*/].f_1 = joaat("police3");
	Local_1221[0 /*15*/].f_13 = 11;
	Local_1221[1 /*15*/].f_3 = { 850.8638f, -2238.832f, 29.5151f };
	Local_1221[1 /*15*/].f_6 = 264.1243f;
	Local_1221[1 /*15*/].f_1 = joaat("police3");
	Local_1221[1 /*15*/].f_13 = 12;
	Local_1221[2 /*15*/].f_3 = { 1035.116f, -2417.376f, 28.2291f };
	Local_1221[2 /*15*/].f_6 = 173.4809f;
	Local_1221[2 /*15*/].f_1 = joaat("police3");
	Local_1221[2 /*15*/].f_13 = 13;
	Local_1221[3 /*15*/].f_3 = { 1036.79f, -2402.294f, 28.8534f };
	Local_1221[3 /*15*/].f_6 = 173.5939f;
	Local_1221[3 /*15*/].f_1 = joaat("police3");
	Local_1221[3 /*15*/].f_13 = 14;
	Local_1221[4 /*15*/].f_3 = { 1041.892f, -2349.553f, 29.5271f };
	Local_1221[4 /*15*/].f_6 = 173.2809f;
	Local_1221[4 /*15*/].f_1 = joaat("police3");
	Local_1221[4 /*15*/].f_13 = 6;
	Local_1221[5 /*15*/].f_3 = { 810.7969f, -2240.977f, 29.4969f };
	Local_1221[5 /*15*/].f_6 = -98.9281f;
	Local_1221[5 /*15*/].f_1 = joaat("police3");
	Local_1221[5 /*15*/].f_13 = 2;
	Local_1221[6 /*15*/].f_3 = { 1035.108f, -2404.438f, 28.7375f };
	Local_1221[6 /*15*/].f_6 = 172.0542f;
	Local_1221[6 /*15*/].f_1 = joaat("police3");
	Local_1221[6 /*15*/].f_13 = 3;
	Local_1221[7 /*15*/].f_3 = { 1041.892f, -2349.553f, 29.5271f };
	Local_1221[7 /*15*/].f_6 = 173.2809f;
	Local_1221[7 /*15*/].f_1 = joaat("police3");
	Local_1221[7 /*15*/].f_13 = 6;
	Local_1221[8 /*15*/].f_3 = { 1035.638f, -2392.111f, 29.1724f };
	Local_1221[8 /*15*/].f_6 = 173.2055f;
	Local_1221[8 /*15*/].f_1 = joaat("police3");
	Local_1221[8 /*15*/].f_13 = 5;
	Local_1221[9 /*15*/].f_3 = { 884.7551f, -2082.003f, 29.5991f };
	Local_1221[9 /*15*/].f_6 = 260.9446f;
	Local_1221[9 /*15*/].f_1 = joaat("police3");
	Local_1221[9 /*15*/].f_13 = 4;
	Local_1221[10 /*15*/].f_3 = { 899.9318f, -2076.039f, 29.7546f };
	Local_1221[10 /*15*/].f_6 = 261.255f;
	Local_1221[10 /*15*/].f_1 = joaat("police3");
	Local_1221[10 /*15*/].f_13 = 7;
	Local_1221[11 /*15*/].f_3 = { 760.2631f, -2410.385f, 19.4231f };
	Local_1221[11 /*15*/].f_6 = 178.6288f;
	Local_1221[11 /*15*/].f_1 = joaat("police3");
	Local_1221[11 /*15*/].f_13 = 10;
	Local_1221[12 /*15*/].f_3 = { 899.9318f, -2076.039f, 29.7546f };
	Local_1221[12 /*15*/].f_6 = 261.255f;
	Local_1221[12 /*15*/].f_1 = joaat("police3");
	Local_1221[12 /*15*/].f_13 = 8;
	Local_1221[13 /*15*/].f_3 = { 875.1038f, -2074.469f, 29.482f };
	Local_1221[13 /*15*/].f_6 = 261.4077f;
	Local_1221[13 /*15*/].f_1 = joaat("police3");
	Local_1221[13 /*15*/].f_13 = 9;
	Local_2647[0 /*20*/].f_3 = { 949.6615f, -2374.866f, 29.8815f };
	Local_2647[0 /*20*/].f_9 = 115.1845f;
	Local_2647[0 /*20*/].f_6 = { 885.1977f, -2361.141f, 29.2205f };
	Local_2647[0 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_2647[0 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2647[0 /*20*/].f_12 = 1;
	Local_2647[0 /*20*/].f_10 = 200;
	Local_2647[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_2647[0 /*20*/].f_16), "backup_front 0", 16);
	Local_2647[1 /*20*/].f_3 = { 957.048f, -2366.364f, 29.5281f };
	Local_2647[1 /*20*/].f_9 = 135.4363f;
	Local_2647[1 /*20*/].f_6 = { 892.1824f, -2361.958f, 29.3794f };
	Local_2647[1 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_2647[1 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2647[1 /*20*/].f_12 = 1;
	Local_2647[1 /*20*/].f_10 = 200;
	Local_2647[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_2647[1 /*20*/].f_16), "backup_front 1", 16);
	Local_2647[2 /*20*/].f_3 = { 904.8995f, -2267.178f, 29.5456f };
	Local_2647[2 /*20*/].f_9 = 210.877f;
	Local_2647[2 /*20*/].f_6 = { 898.52f, -2356.461f, 29.4943f };
	Local_2647[2 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_2647[2 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2647[2 /*20*/].f_12 = 1;
	Local_2647[2 /*20*/].f_10 = 200;
	Local_2647[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_2647[2 /*20*/].f_16), "backup_front 2", 16);
	Local_2708[0 /*20*/].f_3 = { 845.1862f, -2253.644f, 29.2907f };
	Local_2708[0 /*20*/].f_9 = 177.1563f;
	Local_2708[0 /*20*/].f_6 = { 843.8444f, -2315.916f, 29.3346f };
	Local_2708[0 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_2708[0 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2708[0 /*20*/].f_12 = 1;
	Local_2708[0 /*20*/].f_10 = 200;
	Local_2708[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_2708[0 /*20*/].f_16), "backup_alley 0", 16);
	Local_2708[1 /*20*/].f_3 = { 834.8723f, -2250.627f, 29.1487f };
	Local_2708[1 /*20*/].f_9 = 263.29f;
	Local_2708[1 /*20*/].f_6 = { 857.6421f, -2312.731f, 29.3462f };
	Local_2708[1 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_2708[1 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2708[1 /*20*/].f_12 = 1;
	Local_2708[1 /*20*/].f_10 = 200;
	Local_2708[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_2708[1 /*20*/].f_16), "backup_alley 1", 16);
	Local_2708[2 /*20*/].f_3 = { 864.4395f, -2251.64f, 29.4899f };
	Local_2708[2 /*20*/].f_9 = 176.214f;
	Local_2708[2 /*20*/].f_6 = { 855.1099f, -2305.227f, 29.34599f };
	Local_2708[2 /*20*/].f_1 = joaat("s_m_y_cop_01");
	Local_2708[2 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2708[2 /*20*/].f_12 = 1;
	Local_2708[2 /*20*/].f_10 = 200;
	Local_2708[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_2708[2 /*20*/].f_16), "backup_alley 2", 16);
	Local_1432[0 /*15*/].f_3 = { 775.1086f, -2442.444f, 38.1976f };
	Local_1432[0 /*15*/].f_6 = -102.3257f;
	Local_1432[0 /*15*/].f_1 = joaat("polmav");
	Local_1432[0 /*15*/].f_13 = 15;
	Local_1432[1 /*15*/].f_3 = { 794.2238f, -2356.914f, 40.3881f };
	Local_1432[1 /*15*/].f_6 = -6.2599f;
	Local_1432[1 /*15*/].f_1 = joaat("polmav");
	Local_1432[1 /*15*/].f_13 = 16;
	Local_2526[0 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_2526[0 /*20*/].f_10 = 200;
	Local_2526[0 /*20*/].f_15 = joaat("weapon_unarmed");
	Local_2526[0 /*20*/].f_12 = 1;
	Local_2526[1 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_2526[1 /*20*/].f_10 = 200;
	Local_2526[1 /*20*/].f_15 = joaat("weapon_unarmed");
	Local_2526[1 /*20*/].f_12 = 1;
	Local_2445[0 /*20*/].f_6 = { 888.0029f, -2362.344f, 29.2334f };
	Local_2445[0 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_2445[0 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2445[0 /*20*/].f_12 = 1;
	Local_2445[0 /*20*/].f_10 = 200;
	Local_2445[0 /*20*/].f_11 = 5;
	StringCopy(&(Local_2445[0 /*20*/].f_16), "absail 0", 16);
	Local_2445[1 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_2445[1 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_2445[1 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2445[1 /*20*/].f_12 = 0;
	Local_2445[1 /*20*/].f_10 = 200;
	Local_2445[1 /*20*/].f_11 = 5;
	StringCopy(&(Local_2445[1 /*20*/].f_16), "absail 1", 16);
	Local_2445[2 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_2445[2 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_2445[2 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2445[2 /*20*/].f_12 = 1;
	Local_2445[2 /*20*/].f_10 = 200;
	Local_2445[2 /*20*/].f_11 = 5;
	StringCopy(&(Local_2445[2 /*20*/].f_16), "absail 2", 16);
	Local_2445[3 /*20*/].f_6 = { 893.09f, -2346.84f, 29.4129f };
	Local_2445[3 /*20*/].f_1 = joaat("s_m_y_swat_01");
	Local_2445[3 /*20*/].f_15 = joaat("weapon_pistol");
	Local_2445[3 /*20*/].f_12 = 0;
	Local_2445[3 /*20*/].f_10 = 200;
	Local_2445[3 /*20*/].f_11 = 5;
	StringCopy(&(Local_2445[3 /*20*/].f_16), "absail 3", 16);
	Local_1629.f_3 = { 1109.891f, -1243.898f, 19.5119f };
	Local_1629.f_6 = 64.3406f;
	Local_1629.f_1 = joaat("fugitive");
	Local_3435[0 /*3*/] = { 1201.412f, -1412.478f, 34.2269f };
	Local_3435[1 /*3*/] = { 1489.859f, -1484.127f, 66.8696f };
	Local_2567.f_3 = { -2595f, 1930.16f, 166.2958f };
	Local_2567.f_9 = 94.5464f;
	Local_2567.f_1 = GlobalFunc_4946(29);
	Local_3004.f_2 = joaat("prop_phone_ing");
	Local_1463.f_3 = { -2592.689f, 1930.749f, 166.2953f };
	Local_1463.f_6 = 95.2679f;
	Local_1463.f_1 = GlobalFunc_5112(29, 0);
	Local_1463.f_13 = 20;
	Local_2769[0 /*20*/].f_3 = { -2558.413f, 1914.546f, 167.8589f };
	Local_2769[0 /*20*/].f_9 = 228.9937f;
	Local_2769[0 /*20*/].f_1 = joaat("s_m_y_devinsec_01");
	Local_2769[0 /*20*/].f_10 = 200;
	Local_2769[0 /*20*/].f_15 = joaat("weapon_combatpistol");
	StringCopy(&(Local_2769[0 /*20*/].f_16), "security  0", 16);
	Local_2769[1 /*20*/].f_3 = { -2559.465f, 1912.711f, 167.8373f };
	Local_2769[1 /*20*/].f_9 = 245.3184f;
	Local_2769[1 /*20*/].f_1 = joaat("s_m_y_devinsec_01");
	Local_2769[1 /*20*/].f_10 = 200;
	Local_2769[1 /*20*/].f_15 = joaat("weapon_combatpistol");
	StringCopy(&(Local_2769[1 /*20*/].f_16), "security  1", 16);
	iLocal_3304 = 0;
	iLocal_3305 = 0;
	Local_2811[0 /*5*/].f_1 = { -1.2f, 4.2f, -0.7f };
	Local_2811[1 /*5*/].f_1 = { -0.4f, 4.2f, -0.7f };
	Local_2811[2 /*5*/].f_1 = { 0.4f, 4.2f, -0.7f };
	Local_2811[3 /*5*/].f_1 = { 1.2f, 4.2f, -0.7f };
	Local_2811[4 /*5*/].f_1 = { 1.2f, 4.2f, -0.7f };
	Local_2811[5 /*5*/].f_1 = { 1.2f, 2.9f, -0.7f };
	Local_2811[6 /*5*/].f_1 = { 1.2f, 1.6f, -0.7f };
	Local_2811[7 /*5*/].f_1 = { 1.2f, 0.3f, -0.7f };
	Local_2811[8 /*5*/].f_1 = { 1.2f, -1f, -0.7f };
	Local_2811[9 /*5*/].f_1 = { 1.2f, -2.3f, -0.7f };
	Local_2811[10 /*5*/].f_1 = { 1.2f, -3.6f, -0.7f };
	Local_2811[11 /*5*/].f_1 = { 1.2f, -4.9f, -0.7f };
	Local_2811[12 /*5*/].f_1 = { -1.2f, -5.1f, -0.7f };
	Local_2811[13 /*5*/].f_1 = { -0.4f, -5.1f, -0.7f };
	Local_2811[14 /*5*/].f_1 = { 0.4f, -5.1f, -0.7f };
	Local_2811[15 /*5*/].f_1 = { 1.2f, -5.1f, -0.7f };
	Local_2811[16 /*5*/].f_1 = { -1.3f, -4.9f, -0.7f };
	Local_2811[17 /*5*/].f_1 = { -1.3f, -3.6f, -0.7f };
	Local_2811[18 /*5*/].f_1 = { -1.3f, -2.3f, -0.7f };
	Local_2811[19 /*5*/].f_1 = { -1.3f, -1f, -0.7f };
	Local_2811[20 /*5*/].f_1 = { -1.3f, 0.3f, -0.7f };
	Local_2811[21 /*5*/].f_1 = { -1.3f, 1.6f, -0.7f };
	Local_2811[22 /*5*/].f_1 = { -1.3f, 2.9f, -0.7f };
	Local_2811[23 /*5*/].f_1 = { -1.3f, 4.2f, -0.7f };
	iVar0 = 0;
	while (iVar0 <= (Local_2445 - 1))
	{
		iLocal_1171[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2445 - 1))
	{
		Local_2445[iVar0 /*20*/].f_14 = 0;
		iLocal_1171[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2811 - 1))
	{
		Local_2811[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3367 - 1))
	{
		iLocal_3367[iVar0] = 0;
		iVar0++;
	}
	Local_1684.f_14 = 0;
	Local_1704.f_14 = 0;
	func_534();
}

void func_534()//Position - 0x66790
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3260)
	{
		iLocal_3260[iVar0] = 0;
		iVar0++;
	}
}




void func_538()//Position - 0x66C0D
{
	func_2();
}

void func_539()//Position - 0x66C19
{
	switch (iLocal_3371)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1629, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1629))
				{
					iLocal_3225 = MISC::GET_GAME_TIMER();
					iLocal_3371++;
				}
			}
			else
			{
				iLocal_3371++;
			}
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_3225, 20022))
			{
				func_540();
			}
			break;
	}
}

void func_540()//Position - 0x66C7F
{
	GlobalFunc_5103(0, 0);
	GlobalFunc_9804(8, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
	GlobalFunc_4927(25, 0);
	if ((iLocal_3829 && iLocal_3830) && iLocal_3831)
	{
	}
	func_941();
}




















int func_560()//Position - 0x6718B
{
	int iVar0;
	
	switch (iLocal_3255)
	{
		case 0:
			if (GlobalFunc_109())
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (ENTITY::IS_ENTITY_ATTACHED(Local_3004.x))
				{
					ENTITY::DETACH_ENTITY(Local_3004.x, 1, 1);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3004.x, "davenortons_phone", 1, Local_3004.f_2, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2567, "devin", 0, Local_2567.f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1463, "devins_car", 0, Local_1463.f_1, 0);
				if (!PED::IS_PED_INJURED(Local_2769[0 /*20*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2769[0 /*20*/], "FIB_Security_Guy", 0, Local_2769[0 /*20*/].f_1, 0);
				}
				if (!PED::IS_PED_INJURED(Local_2769[1 /*20*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2769[1 /*20*/], "FIB_Security_Guy^1", 0, Local_2769[1 /*20*/].f_1, 0);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				iVar0 = 0;
				while (iVar0 <= (Local_2769 - 1))
				{
					iLocal_3401[iVar0] = 23;
					iVar0++;
				}
				iLocal_3255++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				GlobalFunc_9805(-2556.251f, 1908.599f, 167.581f, -2552.673f, 1915.53f, 171.481f, 9.1f, -2551.931f, 1912.036f, 168.0432f, 244.1441f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
				func_563(-2551.931f, 1912.036f, 168.0432f, 244.1441f);
				MISC::CLEAR_AREA(-2551.931f, 1912.036f, 168.0432f, 10000f, 1, 0, 0, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_3255++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
					{
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_3255 = 22;
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2567))
				{
					PED::DELETE_PED(&Local_2567);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2769 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2769[iVar0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2769[iVar0 /*20*/]));
					}
					iVar0++;
				}
				func_561(0, 0, 0, 0, 0, 3000, 1, 1);
				func_540();
			}
			break;
		
		case 22:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2567))
				{
					PED::DELETE_PED(&Local_2567);
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2769 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2769[iVar0 /*20*/]))
					{
						PED::DELETE_PED(&(Local_2769[iVar0 /*20*/]));
					}
					iVar0++;
				}
				RECORDING::_0x81CBAE94390F9F89();
				func_431(1, 1, 0, 0, 1, 1);
				func_540();
			}
			break;
	}
	return 0;
}

void func_561(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7)//Position - 0x6748D
{
	GlobalFunc_657();
	GlobalFunc_8316(0, 1, iParam7, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(0);
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, iParam5, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
			}
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (bParam6)
	{
		func_432();
	}
	else
	{
		func_394();
	}
}


void func_563(struct<3> Param0, float fParam3)//Position - 0x67561
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			func_564(iVar0, Param0, fParam3, 24, 0);
		}
	}
}

void func_564(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x67591
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
		GlobalFunc_8387(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		GlobalFunc_9200(iParam5, iParam0, 0);
	}
}















void func_579()//Position - 0x6830F
{
	if (func_590())
	{
		iLocal_1125 = 12;
	}
	func_589();
	func_587();
	func_580();
}

void func_580()//Position - 0x6832F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_2769 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_2769[iVar0 /*20*/]))
		{
			if (iLocal_3401[iVar0] != 22)
			{
				if (func_586(&(Local_2769[iVar0 /*20*/]), &(Local_2769[iVar0 /*20*/].f_10), Local_2769[iVar0 /*20*/].f_14) || PED::IS_PED_RAGDOLL(Local_2769[iVar0 /*20*/]))
				{
					iLocal_3401[0] = 22;
					iLocal_3401[1] = 22;
					iLocal_3209 = 1;
				}
			}
			switch (iLocal_3401[iVar0])
			{
				case 0:
					TASK::TASK_LOOK_AT_ENTITY(Local_2769[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					iLocal_3401[iVar0] = 1;
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_2769[iVar0 /*20*/], Local_2769[iVar0 /*20*/].f_3, 0.3f, 0.3f, 2f, 0, 1, 0))
					{
						if (func_585(Local_2769[iVar0 /*20*/], 713668775, -2, 1))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_2769[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2769[iVar0 /*20*/], Local_2769[iVar0 /*20*/].f_3, 1f, -1, 0.2f, 512, Local_2769[iVar0 /*20*/].f_9);
						}
					}
					else if (func_585(Local_2769[iVar0 /*20*/], 713668775, -2, 1))
					{
						if (func_585(Local_2769[iVar0 /*20*/], 242628503, -2, 1))
						{
							switch (iVar0)
							{
								case 0:
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@bouncer@idle_a", "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_2769[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									break;
								
								case 1:
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PLAY_ANIM(0, "mini@strip_club@idles@bouncer@idle_c", "idle_c", 8f, -8f, -1, 1, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_2769[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									break;
								}
							}
					}
					break;
				
				case 22:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2769[iVar0 /*20*/], 0);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2769[iVar0 /*20*/], Local_2769[iVar0 /*20*/].f_6, 2f, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2769[iVar0 /*20*/], 51, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_2769[iVar0 /*20*/], 50, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2769[iVar0 /*20*/], 200f, 0);
					iLocal_3401[iVar0] = 23;
					break;
				
				case 23:
					break;
			}
		}
		else if (!Local_2769[iVar0 /*20*/].f_14)
		{
			STREAMING::REQUEST_MODEL(Local_2769[iVar0 /*20*/].f_1);
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@bouncer@idle_a");
			STREAMING::REQUEST_ANIM_DICT("mini@strip_club@idles@bouncer@idle_c");
			if ((STREAMING::HAS_MODEL_LOADED(Local_2769[iVar0 /*20*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@bouncer@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("mini@strip_club@idles@bouncer@idle_c"))
			{
				func_582(&(Local_2769[iVar0 /*20*/]), 0);
				func_581(&(Local_2769[iVar0 /*20*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_581(var uParam0, bool bParam1)//Position - 0x68611
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3834, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3834);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3835, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_3835);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3835);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3834, iLocal_3835);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3835, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3835, iLocal_3834);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_3835);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 9, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 29, 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
	}
}

void func_582(var uParam0, bool bParam1)//Position - 0x686EB
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, 0, 0, 0, 0);
	*uParam0 = PED::CREATE_PED(6, uParam0->f_1, uParam0->f_3, uParam0->f_9, 1, 1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_15, -1, 1, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_11);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_10);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_10);
	if (uParam0->f_12)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_13)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_14 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_16));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	if (bParam1)
	{
		uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
		HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	}
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	GlobalFunc_593(*uParam0, 0);
	GlobalFunc_722(*uParam0, 311);
}



int func_585(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x688FE
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (bParam3)
	{
		if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam2)
		{
			return 1;
		}
	}
	else if (iVar0 == 7 || iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_586(int iParam0, var uParam1, bool bParam2)//Position - 0x68952
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1) || iVar0 < *uParam1) || PED::IS_PED_RESPONDING_TO_EVENT(*iParam0, 17))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (bParam2)
	{
		return 1;
	}
	return 0;
}

void func_587()//Position - 0x689BA
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[1]))
		{
			switch (iLocal_3259)
			{
				case 0:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 0)
						{
							PED::SET_PED_KEEP_TASK(uLocal_3098[1], 1);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[1], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_3259++;
						}
					}
					break;
				
				case 1:
					break;
				}
			}
	}
}


void func_589()//Position - 0x68A74
{
	if (!PED::IS_PED_INJURED(Local_2567))
	{
		switch (iLocal_3252)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_2567, Local_2567.f_3, 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					if (func_585(Local_2567, 242628503, -2, 1))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2567, 1);
						TASK::CLEAR_PED_TASKS(Local_2567);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_2567.f_3, 1f, -1, 0.25f, 0, 1193033728);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
						TASK::TASK_PERFORM_SEQUENCE(Local_2567, uLocal_3464);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
					}
				}
				break;
			
			case 2:
				break;
		}
	}
	else if (!Local_2567.f_14)
	{
		STREAMING::REQUEST_MODEL(Local_2567.f_1);
		STREAMING::REQUEST_MODEL(Local_1463.f_1);
		STREAMING::REQUEST_MODEL(Local_3004.f_2);
		STREAMING::REQUEST_ANIM_DICT("missfbi4");
		if (((STREAMING::HAS_MODEL_LOADED(Local_2567.f_1) && STREAMING::HAS_MODEL_LOADED(Local_1463.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_3004.f_2)) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4"))
		{
			Local_1463 = VEHICLE::CREATE_VEHICLE(Local_1463.f_1, Local_1463.f_3, Local_1463.f_6, 1, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1463, 3);
			VEHICLE::REMOVE_VEHICLE_WINDOW(Local_1463, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(Local_1463, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1463);
			VEHICLE::SET_VEHICLE_COLOURS(Local_1463, 0, 0);
			GlobalFunc_7102(&Local_2567, 29, Local_2567.f_3, Local_2567.f_9, 1);
			func_313(Local_2567, 0);
			func_312(&Local_2567, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2567, 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 3, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 4, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 8, 4, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2567, 11, 0, 0, 0);
			Local_3004.x = OBJECT::CREATE_OBJECT(Local_3004.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2567, 0f, 0f, 5f), 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3004.x, Local_2567, PED::GET_PED_BONE_INDEX(Local_2567, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			Local_3414 = { ENTITY::GET_ENTITY_COORDS(Local_1463, 1) };
			Local_3417 = { ENTITY::GET_ENTITY_ROTATION(Local_1463, 2) };
			iLocal_3299 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3414, Local_3417, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_2567, iLocal_3299, "missfbi4", "Idle_Loop_Devin", 1000f, -4f, 1, 0, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3299, 1);
			iLocal_3252++;
		}
	}
}

int func_590()//Position - 0x68D21
{
	switch (iLocal_3315)
	{
		case 0:
			GlobalFunc_9193(&Local_3073, -2552.443f, 1911.093f, 167.9768f, 0.01f, 0.01f, 2f, 0, "cntry_god5", 1, 1, -1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2567))
			{
				GlobalFunc_650(ENTITY::GET_ENTITY_COORDS(Local_2567, 1), 100f, 120f, "FBI_4_MCS_2_CONCAT");
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("devin", Local_2567, 0);
					if (!PED::IS_PED_INJURED(Local_2769[0 /*20*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Security_Guy", Local_2769[0 /*20*/], 0);
					}
					if (!PED::IS_PED_INJURED(Local_2769[1 /*20*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Security_Guy^1", Local_2769[1 /*20*/], 0);
					}
				}
				func_598();
				if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2556.251f, 1908.599f, 167.581f, -2552.673f, 1915.53f, 171.481f, 9.1f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_GO_TO_MEETING"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_4_GO_TO_MEETING");
						}
						if (GlobalFunc_2881(&iLocal_3467))
						{
							GlobalFunc_530(iLocal_3467, 4f, 1, 1056964608, 0, 1);
							iLocal_3315++;
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2557.516f, 1909.942f, 167.877f, -2554.61f, 1915.979f, 171.377f, 4f, 0, 1, 0))
						{
							if (CUTSCENE::HAS_CUTSCENE_LOADED())
							{
								if (func_591(1, 1, 1, 0, 1))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("fbi4_DEPOT_STOP_TRACK");
									func_560();
									return 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_530(iLocal_3467, 4f, 1, 1056964608, 0, 1))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (func_591(1, 1, 1, 1, 1))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("fbi4_DEPOT_STOP_TRACK");
						func_560();
						return 1;
					}
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_591(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x68F03
{
	if (GlobalFunc_552(1, 0, 1) || iParam3)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
		GlobalFunc_8316(1, 1, iParam4, 0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		if (bParam2)
		{
			GlobalFunc_4956();
		}
		else
		{
			GlobalFunc_4935();
		}
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
		HUD::DISPLAY_HUD(0);
		HUD::DISPLAY_RADAR(0);
		CAM::SET_WIDESCREEN_BORDERS(1, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
		}
		func_394();
		return 1;
	}
	return 0;
}







void func_598()//Position - 0x6928B
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() || CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		if (!iLocal_3215)
		{
			STREAMING::_0xF8155A7F03DDFC8E(2);
			iLocal_3215 = 1;
		}
	}
	else if (iLocal_3215)
	{
		iLocal_3215 = 0;
	}
}
















































void func_646()//Position - 0x6BD34
{
	int iVar0;
	
	switch (iLocal_3312)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_DESTROY_TRUCK"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_DESTROY_TRUCK");
			}
			HUD::CLEAR_PRINTS();
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			MISC::SET_FAKE_WANTED_LEVEL(0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PED::SET_CREATE_RANDOM_COPS(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
			if (GlobalFunc_2881(&iVar0))
			{
				GlobalFunc_7976(PLAYER::PLAYER_PED_ID(), iVar0, &(Global_89503[1 /*74*/]), &(Global_89734[1 /*3*/]), &(Global_89744[1]), &(Global_89726[1]), &(Global_2544853[1]), 0);
			}
			GlobalFunc_9134(&uLocal_3098, 0);
			Local_3142.f_12 = uLocal_3098[0];
			iLocal_3312++;
			break;
		
		case 1:
			if (func_649(&Local_3142, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_3142.f_18)
				{
					if (!Local_3142.f_19)
					{
						if (func_439(&uLocal_3098, 0, 0, 0))
						{
							Local_3142.f_19 = 1;
						}
					}
				}
				func_648();
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT("misscommon@std_take_off_masks");
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1614.f_3, Local_1614.f_6, -200f, 200f, 200f), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1614.f_3, Local_1614.f_6, 200f, -200f, -200f), 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1614, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1614))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1614);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_1629))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1629);
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_GO_TO_MEETING");
				ENTITY::FREEZE_ENTITY_POSITION(Local_1614, 0);
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
				iLocal_1125 = 11;
			}
			break;
	}
}


void func_648()//Position - 0x6BF2C
{
	int iVar0;
	
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
		switch (iLocal_3404)
		{
			case 0:
				if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1614, 0))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1614, 1), 200f, 1, 0, 0, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1614))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1614, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1614)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1614, Local_1614.f_13, "lkheat", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
							}
						}
						iLocal_3404++;
					}
				}
				break;
			
			case 1:
				if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1614, 0))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1614, 1), 200f, 1, 0, 0, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1614))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1614, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1614)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1614, Local_1614.f_13, "lkheat", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
							}
							iLocal_3404++;
						}
					}
				}
				break;
			
			case 2:
				if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1614, 0))
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1614, 1), 200f, 1, 0, 0, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1614))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1614, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1614)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1614, Local_1614.f_13, "lkheat", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
							}
						}
						iLocal_3404++;
					}
				}
				break;
			
			case 3:
				if (iVar0 >= 9)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1614, 0))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1614, 1), 200f, 1, 0, 0, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1614))
						{
							VEHICLE::SET_PLAYBACK_SPEED(Local_1614, 1f);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1614)));
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1614, Local_1614.f_13, "lkheat", 1);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, 5000f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1614, 0);
						iLocal_3404++;
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_649(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)//Position - 0x6C1B7
{
	return func_650(uParam0, 0, iParam1, iParam2, fParam3, fParam4, bParam5, bParam6, iParam7, 2, 0, bParam8, iParam9);
	return 1;
}

int func_650(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x6C1DE
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_87286 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
						GlobalFunc_750(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				}
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(uParam8))
				{
					iVar0 |= 2;
				}
				if (GlobalFunc_268())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, uParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
					}
					switch (GlobalFunc_6674(uParam0->f_13))
					{
						case 0:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_12);
					GlobalFunc_749(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_17098.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_17098.f_109 == -1)
					{
						Global_17098.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_17098.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
					Global_17098.f_109 = -1;
					Global_17098.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_17098.f_111)
			{
			}
			if (GlobalFunc_747(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_89750 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						GlobalFunc_737();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar8 = 20f;
						fVar9 = SYSTEM::VDIST2(Var2, Var5);
						if (fVar9 < (fVar8 * fVar8))
						{
							GlobalFunc_737();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						GlobalFunc_7981(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				GlobalFunc_737();
			}
			if (!uParam0->f_22)
			{
				GlobalFunc_7981(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar10 = GlobalFunc_5187();
		if (((iVar10 != 8 && iVar10 != 9) && iVar10 != 10) && iVar10 != 55)
		{
			GlobalFunc_7632(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::_CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, 1, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar11 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, 0);
					GlobalFunc_750(iVar11, 1);
				}
			}
		}
		GlobalFunc_749(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		}
		GlobalFunc_748(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}




























void func_678()//Position - 0x6D494
{
	func_693();
	func_692();
	func_691();
	switch (iLocal_3311)
	{
		case 0:
			Local_3432 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1629, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				Local_1629.f_2 = GlobalFunc_6783(Local_1629, 0, 0);
				GlobalFunc_164("cntry_god35", 7500, 1);
			}
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, 0, "michael", 0, 1);
			iLocal_3225 = MISC::GET_GAME_TIMER();
			iLocal_3311++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1629, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1629))
				{
					if (HUD::DOES_BLIP_EXIST(Local_1629.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_1629.f_2));
					}
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					GlobalFunc_164("cntry_god36", 7500, 1);
					iLocal_3311 = 2;
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_1629.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1629.f_2));
				}
				GlobalFunc_164("cntry_god36", 7500, 1);
				iLocal_3311 = 2;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3432, 1) > 200f)
			{
				iLocal_3311 = 2;
			}
			break;
		
		case 2:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3432, 1) > 200f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_1629.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1629.f_2));
				}
				if (GlobalFunc_10638(&(Local_3472[0 /*165*/]), 0, "HeatAud", "fbi4_phoneM", 8, 1, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					HUD::CLEAR_THIS_PRINT("cntry_god36");
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1176);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1176.f_1);
					iLocal_3311++;
				}
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			STREAMING::REQUEST_MODEL(Local_1614.f_1);
			STREAMING::REQUEST_MODEL(Local_2567.f_1);
			STREAMING::REQUEST_MODEL(Local_1463.f_1);
			VEHICLE::REQUEST_VEHICLE_RECORDING(301, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(302, "lkheat");
			if ((((((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) && STREAMING::HAS_MODEL_LOADED(Local_1614.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2567.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1463.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(301, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(302, "lkheat")) && GlobalFunc_1993())
			{
				switch (func_680(PLAYER::PLAYER_PED_ID(), &Local_3435))
				{
					case 0:
						Local_1614.f_3 = { -2855.658f, 1280.972f, 59.1824f };
						Local_1614.f_6 = 277.9344f;
						Local_1614.f_13 = 301;
						break;
					
					case 1:
						Local_1614.f_3 = { -2033.492f, 1993.021f, 188.9565f };
						Local_1614.f_6 = 30.3781f;
						Local_1614.f_13 = 302;
						break;
				}
				GlobalFunc_2518(&uLocal_3098, 0, 1);
				GlobalFunc_2518(&uLocal_3098, 1, 0);
				GlobalFunc_2518(&uLocal_3098, 2, 0);
				GlobalFunc_729(&uLocal_3098, 0, 0);
				GlobalFunc_729(&uLocal_3098, 1, 0);
				GlobalFunc_729(&uLocal_3098, 2, 0);
				MISC::CLEAR_AREA(Local_1614.f_3, 20f, 1, 0, 0, 0);
				func_280(&Local_1614, 0, Local_1614.f_3, Local_1614.f_6, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1614, Local_1614.f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1614, 5000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1614, 1);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1614, 0f);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1614, 1);
				PATHFIND::SET_ROADS_IN_AREA(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1614.f_3, Local_1614.f_6, -200f, 200f, 200f), OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_1614.f_3, Local_1614.f_6, 200f, -200f, -200f), 0, 1);
				func_430(&(uLocal_3098[0]), 0, Local_1614, -1, 0, 0, 0);
				GlobalFunc_11257(uLocal_3098[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, uLocal_3098[0], "michael", 0, 1);
				GlobalFunc_2518(&uLocal_3098, 0, 1);
				Local_3432 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				iLocal_1125 = 10;
			}
			break;
	}
}


int func_680(int iParam0, var uParam1)//Position - 0x6D8A2
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (*uParam1 - 1))
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), *(uParam1[iVar3 /*3*/]), 1);
		if (iVar3 == 0)
		{
			fVar0 = fVar1;
			iVar2 = 0;
		}
		else if (fVar1 > fVar0)
		{
			fVar0 = fVar1;
			iVar2 = iVar3;
		}
		iVar3++;
	}
	return iVar2;
}











void func_691()//Position - 0x6DF2A
{
	int iVar0;
	
	switch (iLocal_3405)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("misscommon@std_take_off_masks");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misscommon@std_take_off_masks"))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_2881(&iVar0))
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds", 8f, -8f, -1, 0, 0, 0, 0, 0);
								iLocal_3405++;
							}
							else
							{
								iLocal_3405 = 2;
							}
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_3405 = 2;
							}
						}
					}
				}
			}
			break;
		
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds") > 0.25f)
				{
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[1] == 14)
					{
						GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					else
					{
						GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iLocal_3405++;
				}
			}
			break;
		
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misscommon@std_take_off_masks", "take_off_mask_ds", 3))
			{
				STREAMING::REMOVE_ANIM_DICT("misscommon@std_take_off_masks");
				iLocal_3405++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_692()//Position - 0x6E0A8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1629))
	{
		Local_1629 = GlobalFunc_104(25);
		if (ENTITY::DOES_ENTITY_EXIST(Local_1629))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1629, 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1629, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_1629, 0, 1, 1, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_693()//Position - 0x6E0F1
{
	switch (iLocal_3380)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3807, 1) < 100f)
			{
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_GARBAGE_TRUCK_EXPLODE", 0);
				iLocal_3380++;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(Local_1176))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3410, "Garbage_Truck_Explosion", ENTITY::GET_ENTITY_COORDS(Local_1176, 0), "FBI_04_HEAT_SOUNDS", 0, 0, 0);
				iLocal_3380++;
			}
			break;
		
		case 2:
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_3410))
			{
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_3380++;
			}
			break;
		
		case 3:
			break;
	}
}

int func_694()//Position - 0x6E198
{
	func_692();
	func_719();
	func_718();
	func_715();
	func_714();
	GlobalFunc_587();
	func_693();
	func_712();
	if (func_703())
	{
		iLocal_1125 = 9;
		return 1;
	}
	func_702();
	func_587();
	func_698();
	if (!iLocal_3184)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 882.5773f, -2347.359f, 29.3307f, 1) > 150f)
		{
			func_696();
			PED::ADD_SCENARIO_BLOCKING_AREA(965.2f, -1693f, -100f, 1144.9f, -1929.1f, 100f, 0, 1, 1, 1);
		}
	}
	func_695();
	return 0;
}

void func_695()//Position - 0x6E239
{
	if (!iLocal_3200)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 882.5773f, -2347.359f, 29.3307f, 1) > 250f)
		{
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			MISC::SET_FAKE_WANTED_LEVEL(0);
			PLAYER::SET_MAX_WANTED_LEVEL(1);
			PED::SET_CREATE_RANDOM_COPS(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			func_432();
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(4, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(7, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(8, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(9, 0);
			MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(10, 0);
			iLocal_3200 = 1;
		}
	}
}

void func_696()//Position - 0x6E2CA
{
	int iVar0;
	
	iVar0 = 0;
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 1, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 1);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1206);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1206.f_1);
	iVar0 = 0;
	while (iVar0 <= (Local_1724 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1724[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1724[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1221 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1221[iVar0 /*15*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[iVar0 /*15*/], 0))
			{
				GlobalFunc_565(315, 1, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1221 - 1))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1221[iVar0 /*15*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1221[iVar0 /*15*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2445 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2445[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2445[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2647 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2647[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2647[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2708 - 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2708[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2708[iVar0 /*20*/].f_1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1432 - 1))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1432[iVar0 /*15*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1432[iVar0 /*15*/].f_1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[iVar0 /*20*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2526[iVar0 /*20*/].f_1);
		iVar0++;
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1191);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1191.f_1);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1644);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1664);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1684);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1704);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1684.f_1);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2932);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2932.f_2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_swat_01"));
	VEHICLE::REMOVE_VEHICLE_ASSET(Local_1221[0 /*15*/].f_1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(16, "lkcountry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1432[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1432[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1221[0 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1221[1 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1221[2 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1221[3 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1221[4 /*15*/].f_13, "lkfbi4");
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1221[5 /*15*/].f_13, "lkfbi4");
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_3184 = 1;
}


void func_698()//Position - 0x6E70B
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[2]))
		{
			switch (iLocal_3407)
			{
				case 0:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 1)
						{
							if (((((func_701(&Local_1724, 1) && func_700(&Local_2647)) && func_700(&Local_2708)) || !PED::IS_PED_IN_COMBAT(uLocal_3098[2], 0)) || func_699(uLocal_3098[2], 40f)) || GlobalFunc_588(&iLocal_3379, 15000))
							{
								PED::SET_PED_KEEP_TASK(uLocal_3098[2], 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_SMART_FLEE_COORD(0, 901.9453f, -2383.368f, 29.2789f, 5000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[2], uLocal_3464);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_3098[2]);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3098[2]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(2));
								iLocal_3407++;
							}
						}
					}
					break;
				
				case 1:
					break;
				}
			}
	}
}

int func_699(int iParam0, float fParam1)//Position - 0x6E825
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_1724 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1724[iVar0 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(Local_1724[iVar0 /*20*/], 1), 1) < fParam1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2647 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2647[iVar0 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_2647[iVar0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(Local_2647[iVar0 /*20*/], 1), 1) < fParam1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2708 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2708[iVar0 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_2708[iVar0 /*20*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(Local_2708[iVar0 /*20*/], 1), 1) < fParam1)
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_700(int iParam0)//Position - 0x6E92D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*20*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*20*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*20*/]);
				if ((*iParam0)[iVar1 /*20*/] == Local_2647[iVar1 /*20*/])
				{
					iLocal_3386++;
				}
				else if ((*iParam0)[iVar1 /*20*/] == Local_2708[iVar1 /*20*/])
				{
					iLocal_3387++;
				}
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	iLocal_3386 = iLocal_3386;
	iLocal_3387 = iLocal_3387;
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}

int func_701(int iParam0, bool bParam1)//Position - 0x6E9D0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*20*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar0 /*20*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0 /*20*/]);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar0 /*20*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar0 /*20*/])->f_2));
				}
				iVar1++;
			}
		}
		else if ((iParam0[iVar0 /*20*/])->f_14)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		return 1;
	}
	return 0;
}

void func_702()//Position - 0x6EA5C
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[0]))
		{
			switch (iLocal_3373)
			{
				case 0:
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_8315() == 1)
						{
							if (((((func_701(&Local_1724, 1) && func_700(&Local_2647)) && func_700(&Local_2708)) || !PED::IS_PED_IN_COMBAT(uLocal_3098[0], 0)) || func_699(uLocal_3098[0], 40f)) || GlobalFunc_588(&iLocal_3379, 15000))
							{
								TASK::CLEAR_PED_TASKS(uLocal_3098[0]);
								func_313(uLocal_3098[0], 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
								PED::SET_PED_KEEP_TASK(uLocal_3098[0], 1);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_SMART_FLEE_COORD(0, 901.9453f, -2383.368f, 29.2789f, 5000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[0], uLocal_3464);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_3098[0]);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3098[0]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
								iLocal_3373++;
							}
						}
					}
					break;
				
				case 1:
					break;
				}
			}
	}
}

int func_703()//Position - 0x6EB96
{
	if (ENTITY::IS_ENTITY_DEAD(Local_1176))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		iLocal_3301 = 3;
	}
	switch (iLocal_3301)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 1);
				GlobalFunc_5917(&Local_1176);
			}
			iLocal_3301++;
			break;
		
		case 1:
			if (!func_709("FBI4_ENTER_VEHICLE_MA"))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI4_ENTER_VEHICLE_MA");
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					func_706("FBI4_ENTER_VEHICLE_MA", 1);
				}
			}
			if (GlobalFunc_9194(&Local_3073, Local_3807, 30f, 30f, 2f, 0, Local_1176, "cntry_god27", "cntry_god14", "cntry_god13", 0, 0, 1, -1))
			{
				GlobalFunc_5652(&Local_3073, 1, 0);
				func_704();
				VEHICLE::_0x4D9D109F63FEE1D4(Local_1176, 1);
				GlobalFunc_164("cntry_god28", 7500, 1);
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_3301 = 3;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 100f, 100f, 100f, 0, 1, 0))
			{
				if (iLocal_3400 == 0)
				{
					iLocal_3400 = MISC::GET_GAME_TIMER();
				}
				if (GlobalFunc_588(&iLocal_3400, 100000))
				{
					func_704();
					bLocal_3208 = true;
					iLocal_3301 = 3;
				}
			}
			else
			{
				bLocal_3208 = false;
			}
			break;
		
		case 2:
			iLocal_3301++;
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 100f, 100f, 100f, 0, 1, 0))
			{
				if (iLocal_3400 == 0)
				{
					iLocal_3400 = MISC::GET_GAME_TIMER();
				}
				if (GlobalFunc_588(&iLocal_3400, 100000))
				{
					bLocal_3208 = true;
				}
			}
			else
			{
				bLocal_3208 = false;
			}
			if (!bLocal_3208)
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 40f, 40f, 15f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_1176.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_1176.f_2));
					}
					bLocal_3194 = true;
					GlobalFunc_9194(&Local_3073, Local_3807, 20f, 20f, 10f, 1, Local_1176, "", "cntry_god14", "cntry_god13", 1, 0, 1, -1);
				}
				else
				{
					if (!iLocal_3207)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 15f, 15f, 10f, 0, 1, 0))
							{
								if (GlobalFunc_530(Local_1176, 5f, 1, 1056964608, 0, 1))
								{
									iLocal_3207 = 1;
								}
							}
						}
					}
					if (!iLocal_3201)
					{
						if (!HUD::DOES_BLIP_EXIST(Local_1176.f_2))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176))
							{
								if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
								{
									HUD::REMOVE_BLIP(&(Local_3073.f_5));
								}
								if (HUD::DOES_BLIP_EXIST(Local_3073))
								{
									HUD::REMOVE_BLIP(&Local_3073);
								}
								GlobalFunc_164("cntry_god25", 12000, 1);
								Local_1176.f_2 = GlobalFunc_6783(Local_1176, 1, 0);
								iLocal_3201 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 20f, 20f, 10f, 0, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
						{
							HUD::REMOVE_BLIP(&(Local_3073.f_5));
						}
						if (HUD::DOES_BLIP_EXIST(Local_3073))
						{
							HUD::REMOVE_BLIP(&Local_3073);
						}
						if (!HUD::DOES_BLIP_EXIST(Local_1176.f_2))
						{
							if (iLocal_3201)
							{
								Local_1176.f_2 = GlobalFunc_6783(Local_1176, 1, 0);
							}
						}
						bLocal_3194 = false;
					}
					else if (bLocal_3194)
					{
						if (!HUD::DOES_BLIP_EXIST(Local_1176.f_2))
						{
							GlobalFunc_9194(&Local_3073, Local_3807, 0.01f, 0.01f, 10f, 1, Local_1176, "cntry_god24", "cntry_god14", "cntry_god13", 1, 0, 1, -1);
						}
					}
				}
			}
			else
			{
				if (!iLocal_3201)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_1176.f_2))
					{
						GlobalFunc_164("cntry_god25", 12000, 1);
						Local_1176.f_2 = GlobalFunc_6783(Local_1176, 1, 0);
						iLocal_3201 = 1;
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_1176.f_2))
				{
					Local_1176.f_2 = GlobalFunc_6783(Local_1176, 1, 0);
				}
				if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_3073.f_5));
				}
				if (HUD::DOES_BLIP_EXIST(Local_3073))
				{
					HUD::REMOVE_BLIP(&Local_3073);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_1176))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				GlobalFunc_5652(&Local_3073, 1, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (!ENTITY::IS_ENTITY_IN_WATER(Local_1176))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_1176, 0), 0, 2f, 1, 0, 1065353216);
				}
				if (HUD::DOES_BLIP_EXIST(Local_1176.f_2))
				{
					HUD::REMOVE_BLIP(&(Local_1176.f_2));
				}
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3389 = MISC::GET_GAME_TIMER();
				return 1;
			}
			break;
		
		case 4:
			break;
	}
	return 0;
}

void func_704()//Position - 0x6F016
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 5000, 0, 0);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan")) < 5000)
	{
		WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_petrolcan"), 5000);
	}
}


void func_706(char* sParam0, bool bParam1)//Position - 0x6F0B7
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_3260)
		{
			if (iLocal_3260[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_3260[iVar1] == 0)
			{
				iLocal_3260[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_708(iVar0);
		if (iVar3 != -1)
		{
			iLocal_3260[iVar3] = 0;
			func_707();
		}
	}
}

void func_707()//Position - 0x6F132
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_3260 - 1))
	{
		if (iLocal_3260[iVar0] == 0)
		{
			if (iLocal_3260[iVar0 + 1] != 0)
			{
				iLocal_3260[iVar0] = iLocal_3260[iVar0 + 1];
				iLocal_3260[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_708(int iParam0)//Position - 0x6F185
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_3260)
	{
		if (iLocal_3260[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_3260[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_709(char* sParam0)//Position - 0x6F1C8
{
	return func_708(MISC::GET_HASH_KEY(sParam0)) != -1;
}



void func_712()//Position - 0x6F27A
{
	switch (iLocal_3391)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_COPS_ARRIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_COPS_ARRIVE");
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_GO_TO_ALLEYWAY");
				iLocal_3391++;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_1176.f_2))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_GO_TO_ALLEYWAY"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_GO_TO_ALLEYWAY");
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_DESTROY_TRUCK");
				iLocal_3391++;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_1176))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_GO_TO_ALLEYWAY"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_GO_TO_ALLEYWAY");
				}
				iLocal_3391++;
			}
			break;
		
		case 3:
			break;
	}
}


void func_714()//Position - 0x6F345
{
	int iVar0;
	
	switch (iLocal_3306)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_ENTER_VEHICLE_MA");
				func_706("FBI4_ENTER_VEHICLE_MA", 1);
				iLocal_3306++;
			}
			break;
		
		case 1:
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
			{
				if (iVar0 == joaat("weapon_petrolcan"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI4_PETROL");
					iLocal_3306 = 2;
				}
			}
			AUDIO::PREPARE_MUSIC_EVENT("FBI4_PETROL_EXPLODE");
			if (ENTITY::IS_ENTITY_DEAD(Local_1176))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_PETROL_EXPLODE");
				iLocal_3306 = 2;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_1176))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_PETROL_EXPLODE");
				iLocal_3306++;
			}
			break;
		
		case 3:
			break;
	}
}

void func_715()//Position - 0x6F407
{
	if (!GlobalFunc_5172(&Local_3073, 0))
	{
		switch (iLocal_3284)
		{
			case 0:
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 0);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 2);
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_SHOOTOUT_MID_MA");
				func_706("fbi4_SHOOTOUT_MID_MA", 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, 0, "michael", 0, 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, 0, "TREVOR", 0, 1);
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_end_1", 7, 0, 0, 0))
				{
					iLocal_3284 = 2;
				}
				else
				{
					iLocal_3284 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_end_1", 7, 0, 0, 0))
				{
					iLocal_3284++;
				}
				break;
			
			case 2:
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_end_2", 7, 0, 0, 0))
				{
					iLocal_3284++;
				}
				break;
			
			case 3:
				break;
			}
	}
}



void func_718()//Position - 0x6F56E
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1629))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1176))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1629, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1629) || GlobalFunc_588(&iLocal_3389, 3500))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_1629, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_1176))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1629, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1629))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_1629, 0, 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_719()//Position - 0x6F5F8
{
	if (bLocal_3196)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1629))
		{
			STREAMING::REQUEST_MODEL(Local_1629.f_1);
			if (STREAMING::HAS_MODEL_LOADED(Local_1629.f_1))
			{
				MISC::CLEAR_AREA(Local_1629.f_3, 10f, 1, 0, 0, 0);
				Local_1629 = VEHICLE::CREATE_VEHICLE(Local_1629.f_1, Local_1629.f_3, Local_1629.f_6, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_1629, 0, 1, 1, 0, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1629);
			}
		}
	}
}

void func_720()//Position - 0x6F66B
{
	switch (iLocal_3310)
	{
		case 0:
			if (!func_709("cntry_help6"))
			{
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					GlobalFunc_164("cntry_help6", 7500, 1);
					func_706("cntry_help6", 1);
				}
			}
			if (GlobalFunc_10061(&uLocal_3098, 1, 1))
			{
				if (GlobalFunc_751(&uLocal_3098, 1))
				{
					if (func_722())
					{
						func_721();
						iLocal_3310++;
					}
				}
			}
			else if (GlobalFunc_588(&iLocal_3406, 12500))
			{
				GlobalFunc_9134(&uLocal_3098, 1);
				func_722();
				func_721();
				iLocal_3310++;
			}
			break;
		
		case 1:
			if (func_649(&Local_3142, 3, 0, 999f, 999f, 0, 0, 0, 0, 0))
			{
				if (Local_3142.f_18)
				{
					if (!Local_3142.f_19)
					{
						if (func_439(&uLocal_3098, 1, 0, 0))
						{
							if (!PED::IS_PED_INJURED(uLocal_3098[1]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[1], 1);
								TASK::CLEAR_PED_TASKS(uLocal_3098[1]);
							}
							if (!PED::IS_PED_INJURED(uLocal_3098[2]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[2], 1);
								TASK::CLEAR_PED_TASKS(uLocal_3098[2]);
							}
							Local_3142.f_19 = 1;
						}
					}
				}
			}
			else
			{
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3098[2], 806.297f, -2289.667f, 50.598f, 796.823f, -2421.828f, 64.098f, 37f, 0, 1, 0) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3098[2], 1), 1) > 30f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_3098[2])))
				{
					PED::DELETE_PED(&(uLocal_3098[2]));
				}
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3379 = MISC::GET_GAME_TIMER();
				GlobalFunc_11089(4, "burn the truck", 1, 0, 0, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1176, 1);
					ENTITY::SET_ENTITY_PROOFS(Local_1176, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				GlobalFunc_2919(&Local_3073, 1);
				iLocal_1125 = 8;
			}
			break;
	}
}

void func_721()//Position - 0x6F85F
{
	HUD::CLEAR_PRINTS();
	func_706("cntry_help6", 1);
	if (HUD::DOES_BLIP_EXIST(uLocal_3451))
	{
		HUD::REMOVE_BLIP(&uLocal_3451);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3450))
	{
		HUD::REMOVE_BLIP(&uLocal_3450);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3452))
	{
		HUD::REMOVE_BLIP(&uLocal_3452);
	}
}

int func_722()//Position - 0x6F8A8
{
	Local_3142.f_12 = uLocal_3098[1];
	if (HUD::DOES_BLIP_EXIST(uLocal_3452))
	{
		HUD::REMOVE_BLIP(&uLocal_3452);
	}
	HUD::CLEAR_HELP(1);
	bLocal_3183 = true;
	iLocal_3830 = 1;
	return 1;
}
















int func_738()//Position - 0x70E65
{
	func_804();
	func_803();
	func_802(&(Local_1724[8 /*20*/]));
	func_802(&(Local_1724[9 /*20*/]));
	func_802(&(Local_1724[31 /*20*/]));
	if (func_790())
	{
		return 1;
	}
	func_787();
	func_784();
	func_783();
	func_782();
	func_781();
	func_779();
	func_777();
	if (Global_3)
	{
		func_776();
	}
	func_774();
	func_773();
	func_767();
	func_763();
	func_745();
	func_743();
	func_742();
	func_741();
	func_739();
	return 0;
}

void func_739()//Position - 0x70EED
{
	switch (iLocal_3294)
	{
		case 0:
			if (AUDIO::PREPARE_MUSIC_EVENT("fbi4_SHOOTOUT_MA"))
			{
				if (((bLocal_3178 || func_740(&(Local_1221[0 /*15*/]), 30f)) || func_740(&(Local_1221[1 /*15*/]), 30f)) || func_740(&(Local_1221[2 /*15*/]), 30f))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || CAM::DOES_CAM_EXIST(Local_3142.f_9))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("fbi4_SHOOTOUT_MA");
						iLocal_3294++;
					}
				}
			}
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
}

int func_740(var uParam0, float fParam1)//Position - 0x70F95
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(*uParam0, 1), 1) < fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_741()//Position - 0x70FD3
{
	if (!PED::IS_PED_INJURED(Local_1704))
	{
		switch (iLocal_3250)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3233) >= 0.25f)
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1704);
						ENTITY::SET_ENTITY_HEALTH(Local_1704, 200);
						PED::SET_PED_MAX_HEALTH(Local_1704, 200);
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1704, 1);
						ENTITY::SET_ENTITY_PROOFS(Local_1704, 0, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_1704, 1, 0);
						iLocal_3250 = 1;
					}
					else if (ENTITY::GET_ENTITY_HEALTH(Local_1704) <= 9900)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_1704, 1, 1, 1, 1, 1, 0, 0, 0);
						iLocal_3250 = 3;
					}
				}
				break;
			
			case 1:
				if (func_586(&Local_1704, &(Local_1704.f_10), Local_1704.f_14))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3233))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3233) >= 0.25f)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 1193033728);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1704, uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_3250++;
						}
					}
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3233))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3233) >= 0.655f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 1193033728);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
						TASK::TASK_PERFORM_SEQUENCE(Local_1704, uLocal_3464);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
						iLocal_3250++;
					}
				}
				else
				{
					iLocal_3250++;
				}
				break;
			
			case 2:
				PED::SET_PED_CONFIG_FLAG(Local_1704, 208, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1704);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1704.f_1);
				iLocal_3250++;
				break;
			
			case 3:
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3233) >= 0.262f)
				{
					PED::SET_PED_TO_RAGDOLL(Local_1704, 2000, 3000, 0, 1, 1, 0);
					TASK::CLEAR_PED_TASKS(Local_1704);
					ENTITY::SET_ENTITY_HEALTH(Local_1704, 2);
				}
				break;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1704))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1704);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1704.f_1);
		}
		if (!Local_1704.f_14)
		{
			Local_1704 = PED::CREATE_PED(26, Local_1704.f_1, Local_1704.f_3, Local_1704.f_9, 1, 1);
			Local_1704.f_14 = 1;
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_1704, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_1704, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_1704, 10000);
			PED::SET_PED_MAX_HEALTH(Local_1704, 10000);
			ENTITY::SET_ENTITY_PROOFS(Local_1704, 0, 1, 1, 1, 1, 0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1704, 55);
			PED::SET_PED_CONFIG_FLAG(Local_1704, 208, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_1704, 1);
			PED::SET_PED_KEEP_TASK(Local_1704, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1704, 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 7, Local_1704, "AGENT2", 0, 1);
			PED::SET_PED_NAME_DEBUG(Local_1704, &(Local_1704.f_16));
			Local_3414 = { 0f, 0f, 0f };
			Local_3417 = { 0f, 0f, 0f };
			uLocal_3233 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3414, Local_3417, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_1704, uLocal_3233, "missfbi4", "push_agents_agent2", 1000f, -4f, 5, 0, 1148846080, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3233, Local_1191, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1704, 0, 0);
		}
	}
}

void func_742()//Position - 0x71347
{
	if (!PED::IS_PED_INJURED(Local_1684))
	{
		switch (iLocal_3246)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3232))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3232) >= 0.28f)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_1684, 0, 0, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_1684, 1, 0);
					}
				}
				if (func_586(&Local_1684, &(Local_1684.f_10), Local_1684.f_14))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 1193033728);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 1193033728);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
					TASK::TASK_PERFORM_SEQUENCE(Local_1684, uLocal_3464);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
					iLocal_3246 = 1;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3232))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3232) >= 1f)
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 898.86f, -2361.77f, 29.37f, 2f, -1, -1f, 1, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 908.22f, -2370.33f, 29.55f, 2f, -1, -1f, 1, 1193033728);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
						TASK::TASK_PERFORM_SEQUENCE(Local_1684, uLocal_3464);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
						iLocal_3246 = 1;
					}
				}
				else
				{
					iLocal_3246 = 1;
				}
				break;
			
			case 1:
				PED::SET_PED_CONFIG_FLAG(Local_1684, 208, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1684);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1684.f_1);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 6);
				iLocal_3246++;
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1684))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1684);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1684.f_1);
			GlobalFunc_200(&(Local_3472[0 /*165*/]), 6);
		}
		if (!Local_1684.f_14)
		{
			Local_1684 = PED::CREATE_PED(26, Local_1684.f_1, Local_1684.f_3, Local_1684.f_9, 1, 1);
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_1684, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1684, 54);
			PED::SET_PED_CONFIG_FLAG(Local_1684, 208, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_1684, 1);
			PED::SET_PED_KEEP_TASK(Local_1684, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1684, 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 6, Local_1684, "AGENT1", 0, 1);
			PED::SET_PED_NAME_DEBUG(Local_1684, &(Local_1684.f_16));
			Local_1684.f_14 = 1;
			Local_3414 = { 0f, 0f, 0f };
			Local_3417 = { 0f, 0f, 0f };
			uLocal_3232 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3414, Local_3417, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_1684, uLocal_3232, "missfbi4", "push_agents_agent1", 1000f, -4f, 1, 0, 1148846080, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3232, Local_1191, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1684, 0, 0);
		}
	}
}

void func_743()//Position - 0x715FA
{
	if (!Global_86820)
	{
		if (GlobalFunc_8315() == 0 && !CAM::DOES_CAM_EXIST(Local_3142.f_9))
		{
			if (iLocal_3399 == 0)
			{
				iLocal_3399 = MISC::GET_GAME_TIMER();
			}
			else if (GlobalFunc_588(&iLocal_3399, 3000))
			{
				if (MISC::IS_PC_VERSION())
				{
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_159("cntry_help11_KM", -1);
					}
					else
					{
						GlobalFunc_159("cntry_help11", -1);
					}
				}
				else
				{
					GlobalFunc_159("cntry_help11", -1);
				}
				Global_86820 = 1;
			}
		}
	}
}


void func_745()//Position - 0x7168F
{
	int iVar0;
	int iVar1;
	
	if ((!GlobalFunc_2878(&uLocal_3098) && !Local_3142.f_16) && bLocal_3179)
	{
		switch (iLocal_3240)
		{
			case 0:
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_van0", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(10f, 15f, 4);
						iLocal_3240++;
					}
				}
				break;
			
			case 1:
				if (!func_709("heat_killM"))
				{
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						if ((!ENTITY::DOES_ENTITY_EXIST(Local_1684) && Local_1684.f_14) && (!ENTITY::DOES_ENTITY_EXIST(Local_1704) && Local_1704.f_14))
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_killM", 7, 0, 0, 0))
							{
								func_706("heat_killM", 1);
							}
						}
					}
				}
				if (iLocal_3229 > 3)
				{
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "sirens", 7, 0, 0, 0))
						{
							iLocal_3240++;
						}
					}
				}
				break;
			
			case 2:
				iLocal_3240++;
				break;
			
			case 3:
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "cops_wave_0", 7, 0, 0, 0))
					{
						iLocal_3240++;
					}
				}
				break;
			
			case 4:
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 873.3599f, -2352.411f, 29.3306f, 4f, 4f, 2f, 0, 1, 0) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 873.3599f, -2352.411f, 29.3306f, 4f, 4f, 2f, 0, 1, 0) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_cover", 7, 0, 0, 0))
						{
							iLocal_3240++;
						}
					}
					else if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_cover2", 7, 0, 0, 0))
					{
						iLocal_3240++;
					}
				}
				break;
			
			case 5:
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "get_ready_0", 7, 0, 0, 0))
				{
					iLocal_3240++;
				}
				break;
			
			case 6:
				iLocal_3240++;
				break;
			
			case 7:
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "get_ready_1", 7, 0, 0, 0))
					{
						iLocal_3240++;
					}
				}
				break;
			
			case 8:
				if (bLocal_3178)
				{
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						HUD::CLEAR_PRINTS();
						GlobalFunc_164("cntry_god9", 7500, 1);
						iLocal_3240++;
					}
				}
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
			
			case 22:
				break;
		}
		if (iLocal_3240 > 8)
		{
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				if (func_760())
				{
					return;
				}
				if (func_758())
				{
					return;
				}
				if (func_754())
				{
					return;
				}
				if (func_753())
				{
					return;
				}
				if (func_752())
				{
					return;
				}
				if (func_751())
				{
					return;
				}
				if (!func_709("instruct_1"))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "instruct_1", 7, 0, 0, 0))
					{
						func_706("instruct_1", 1);
					}
				}
				if (!func_709("trevor_rpg"))
				{
					if (bLocal_3178)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_3098[2], joaat("weapon_rpg"), 0))
							{
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "trevor_rpg", 7, 0, 0, 0))
								{
									func_706("trevor_rpg", 1);
								}
							}
						}
					}
				}
				if (!func_709("rpg_M_respon"))
				{
					if (GlobalFunc_8315() == 0)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(4, Local_3426, 10f))
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "rpg_M_respon", 7, 0, 0, 0))
							{
								func_706("rpg_M_respon", 1);
							}
						}
					}
				}
				if (!func_709("rpg_f_respon"))
				{
					if (GlobalFunc_8315() == 1)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(4, Local_3426, 10f))
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "rpg_f_respon", 7, 0, 0, 0))
							{
								func_706("rpg_f_respon", 1);
							}
						}
					}
				}
				if (!func_709("all_out"))
				{
					if (GlobalFunc_8315() == 2)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_rpg"), 0))
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "all_out", 7, 0, 0, 0))
							{
								func_706("all_out", 1);
							}
						}
					}
				}
			}
			if (!func_709("fbi4_norock"))
			{
				if (GlobalFunc_8315() == 2)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_rpg"), 0))
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_norock", 6, 0, 0, 0))
						{
							func_706("fbi4_norock", 1);
							iLocal_3239 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
		if (bLocal_3178)
		{
			iVar0 = (func_746() - iLocal_3291);
			if (iVar0 > iLocal_3290)
			{
				iLocal_3290 = iVar0;
				iLocal_3383 = MISC::GET_GAME_TIMER();
			}
			if (GlobalFunc_588(&iLocal_3239, 7000))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_M_att0", 6, 0, 0, 0))
								{
									iLocal_3239 = MISC::GET_GAME_TIMER();
								}
								break;
							
							case 1:
								if ((MISC::GET_GAME_TIMER() - iLocal_3383) < 1000)
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FShoot1", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
								else if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_F_att0", 6, 0, 0, 0))
								{
									iLocal_3239 = MISC::GET_GAME_TIMER();
								}
								break;
							
							case 2:
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
								if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 10f)
								{
									if (iVar1 == joaat("weapon_rpg"))
									{
										if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_T_att0", 6, 0, 0, 0))
										{
											iLocal_3239 = MISC::GET_GAME_TIMER();
										}
									}
									else if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_rattack", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
								break;
							}
					}
				}
				else if (!GlobalFunc_5172(&Local_3073, 0))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (!PED::IS_PED_INJURED(uLocal_3098[2]))
							{
								if (PED::IS_PED_SHOOTING(uLocal_3098[2]))
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_t_att0", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (!PED::IS_PED_INJURED(uLocal_3098[1]))
							{
								if (PED::IS_PED_SHOOTING(uLocal_3098[1]))
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_F_att0", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						
						case 1:
							if (!PED::IS_PED_INJURED(uLocal_3098[0]))
							{
								if (PED::IS_PED_SHOOTING(uLocal_3098[0]))
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_M_att0", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (!PED::IS_PED_INJURED(uLocal_3098[2]))
							{
								if (PED::IS_PED_SHOOTING(uLocal_3098[2]))
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_t_att0", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						
						case 2:
							if (!PED::IS_PED_INJURED(uLocal_3098[0]))
							{
								if (PED::IS_PED_SHOOTING(uLocal_3098[0]))
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_M_att0", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (!PED::IS_PED_INJURED(uLocal_3098[1]))
							{
								if (PED::IS_PED_SHOOTING(uLocal_3098[1]))
								{
									if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FShoot1", 6, 0, 0, 0))
									{
										iLocal_3239 = MISC::GET_GAME_TIMER();
									}
								}
							}
							break;
						}
					}
				}
		}
	}
	else if (!bLocal_3179)
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4935();
		}
	}
}

int func_746()//Position - 0x71E8C
{
	return (((func_750() + func_749()) + func_748()) + func_747());
}

int func_747()//Position - 0x71EA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("sp0_helis_exploded"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("sp1_helis_exploded"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("sp2_helis_exploded"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_748()//Position - 0x71EDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("sp0_cars_cops_exploded"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("sp1_cars_cops_exploded"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("sp2_cars_cops_exploded"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_749()//Position - 0x71F14
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("sp0_kills_swat"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("sp1_kills_swat"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("sp2_kills_swat"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_750()//Position - 0x71F4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("sp0_kills_cop"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("sp1_kills_cop"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("sp2_kills_cop"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

int func_751()//Position - 0x71F82
{
	if (!func_709("fbi4_FrNice"))
	{
		if (Local_2526[1 /*20*/].f_14)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FrNice", 7, 0, 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("cntry_god34");
					func_706("fbi4_FrNice", 1);
					iLocal_3395 = 5;
				}
			}
		}
	}
	switch (iLocal_3395)
	{
		case 0:
			switch (GlobalFunc_8315())
			{
				case 0:
				case 1:
					if (Local_2526[1 /*20*/].f_14)
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "sniper_chopt", 7, 0, 0, 0))
						{
							iLocal_3395++;
							return 1;
						}
					}
					break;
				
				case 2:
					if (Local_2526[1 /*20*/].f_14)
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "sniper_chopm", 7, 0, 0, 0))
						{
							iLocal_3395++;
							return 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				GlobalFunc_164("cntry_god34", 7500, 1);
				iLocal_3395++;
				return 1;
			}
			break;
		
		case 2:
			if (Local_2526[1 /*20*/].f_14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FrHeli", 7, 0, 0, 0))
					{
						iLocal_3395++;
						return 1;
					}
				}
			}
			break;
		
		case 3:
			if (Local_2526[1 /*20*/].f_14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (!func_709("sniper_chopf"))
							{
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "sniper_chopf", 7, 0, 0, 0))
								{
									func_706("sniper_chopf", 1);
									return 1;
								}
							}
							break;
						
						case 1:
							if (!func_709("sniper_chopm"))
							{
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "sniper_chopm", 7, 0, 0, 0))
								{
									func_706("sniper_chopm", 1);
									return 1;
								}
							}
							break;
						
						case 2:
							if (!func_709("sniper_chopf"))
							{
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "sniper_chopm", 7, 0, 0, 0))
								{
									func_706("sniper_chopf", 1);
									return 1;
								}
							}
							break;
						}
					}
			}
			break;
		
		case 5:
			break;
	}
	return 0;
}

int func_752()//Position - 0x721DF
{
	if (iLocal_3394 < 2)
	{
		if (bLocal_3205)
		{
			HUD::CLEAR_THIS_PRINT("cntry_god33");
			iLocal_3394 = 2;
		}
	}
	switch (iLocal_3394)
	{
		case 0:
			if (Local_1724[34 /*20*/].f_14)
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_micleft", 7, 0, 0, 0))
				{
					iLocal_3394++;
					return 1;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				GlobalFunc_164("cntry_god33", 7500, 1);
				iLocal_3394++;
				return 1;
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_753()//Position - 0x7227D
{
	if (!bLocal_3183)
	{
		switch (iLocal_3281)
		{
			case 0:
				if (GlobalFunc_588(&iLocal_3249, 7000))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_info0", 7, 0, 0, 0))
					{
						iLocal_3249 = MISC::GET_GAME_TIMER();
						iLocal_3281++;
						return 1;
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_588(&iLocal_3249, 20000))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_info1", 7, 0, 0, 0))
					{
						iLocal_3249 = MISC::GET_GAME_TIMER();
						iLocal_3281++;
						return 1;
					}
				}
				break;
			
			case 2:
				break;
			}
	}
	return 0;
}

int func_754()//Position - 0x72326
{
	int iVar0;
	
	if (bLocal_3204)
	{
		if ((!PED::IS_PED_INJURED(Local_1724[8 /*20*/]) || !PED::IS_PED_INJURED(Local_1724[9 /*20*/])) || !PED::IS_PED_INJURED(Local_1724[31 /*20*/]))
		{
			iVar0 = func_757();
			if (!func_709("fbi4_first"))
			{
				if (iVar0 == 1)
				{
					if (bLocal_3217)
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_first", 7, 0, 0, 0))
						{
							func_706("fbi4_first", 1);
							return 1;
						}
					}
				}
			}
			if (!func_709("f_snip_react"))
			{
				if (func_709("fbi4_first"))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "f_snip_react", 7, 0, 0, 0))
					{
						func_706("f_snip_react", 1);
						return 1;
					}
				}
			}
			if (!func_709("fbi4_second"))
			{
				if (iVar0 == 2)
				{
					if (bLocal_3217)
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_second", 7, 0, 0, 0))
						{
							func_706("fbi4_second", 1);
							return 1;
						}
					}
				}
			}
			if (!func_709("t_snip_see"))
			{
				if (iLocal_3316 > 1)
				{
					if (GlobalFunc_8315() == 2)
					{
						if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "t_snip_see", 7, 0, 0, 0))
							{
								func_706("t_snip_see", 1);
								return 1;
							}
						}
					}
				}
			}
			switch (iLocal_3316)
			{
				case 0:
					if (func_756())
					{
						if (GlobalFunc_8315() != 1)
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "f_snipers2", 7, 0, 0, 0))
							{
								iLocal_3316++;
								return 1;
							}
						}
						else if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "m_snipers2", 7, 0, 0, 0))
						{
							iLocal_3316++;
							return 1;
						}
					}
					break;
				
				case 1:
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						GlobalFunc_164("cntry_god32", 7500, 1);
						iLocal_3316++;
						return 1;
					}
					break;
				
				case 2:
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "snip_on_roof", 7, 0, 0, 0))
					{
						iLocal_3316++;
						return 1;
					}
					break;
				
				case 3:
					if (GlobalFunc_8315() != 1)
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "f_snip_help", 7, 0, 0, 0))
						{
							iLocal_3316++;
							iLocal_3354 = MISC::GET_GAME_TIMER();
							return 1;
						}
					}
					else if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "m_snip_help", 7, 0, 0, 0))
					{
						iLocal_3316++;
						iLocal_3354 = MISC::GET_GAME_TIMER();
						return 1;
					}
					break;
				
				case 4:
					if (GlobalFunc_588(&iLocal_3354, 30000))
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "f_snipers", 7, 0, 0, 0))
								{
									iLocal_3316++;
									return 1;
								}
								break;
							
							case 1:
								if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "m_snipers", 7, 0, 0, 0))
								{
									iLocal_3316++;
									return 1;
								}
								break;
							
							case 2:
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "m_snipers", 7, 0, 0, 0))
										{
											iLocal_3316++;
											return 1;
										}
										break;
									
									case 1:
										if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "f_snipers", 7, 0, 0, 0))
										{
											iLocal_3316++;
											return 1;
										}
										break;
								}
								break;
							}
					}
					break;
				
				case 5:
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "snip_on_roof", 7, 0, 0, 0))
					{
						iLocal_3354 = MISC::GET_GAME_TIMER();
						iLocal_3316 = 4;
						return 1;
					}
					break;
			}
		}
		else
		{
			if (GlobalFunc_663("cntry_god32", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("cntry_god32");
			}
			if (!func_709("fbi4_gone"))
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_gone", 7, 0, 0, 0))
				{
					func_706("fbi4_gone", 1);
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_756()//Position - 0x72753
{
	if (!iLocal_3211)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1724[8 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1724[8 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_1724[8 /*20*/], Local_1724[8 /*20*/].f_6, 1f, 1f, 2f, 0, 1, 0))
				{
					iLocal_3211 = 1;
					return 1;
				}
			}
		}
		else if (Local_1724[8 /*20*/].f_14)
		{
			iLocal_3211 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1724[9 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1724[9 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_1724[9 /*20*/], Local_1724[9 /*20*/].f_6, 1f, 1f, 2f, 0, 1, 0))
				{
					iLocal_3211 = 1;
					return 1;
				}
			}
		}
		else if (Local_1724[9 /*20*/].f_14)
		{
			iLocal_3211 = 1;
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1724[31 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1724[31 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_1724[31 /*20*/], Local_1724[31 /*20*/].f_6, 1f, 1f, 2f, 0, 1, 0))
				{
					iLocal_3211 = 1;
					return 1;
				}
			}
		}
		else if (Local_1724[31 /*20*/].f_14)
		{
			iLocal_3211 = 1;
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_757()//Position - 0x7287B
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_1724[8 /*20*/]))
	{
		if (PED::IS_PED_INJURED(Local_1724[8 /*20*/]))
		{
			iVar0++;
		}
	}
	else if (Local_1724[8 /*20*/].f_14)
	{
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1724[9 /*20*/]))
	{
		if (PED::IS_PED_INJURED(Local_1724[9 /*20*/]))
		{
			iVar0++;
		}
	}
	else if (Local_1724[9 /*20*/].f_14)
	{
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1724[31 /*20*/]))
	{
		if (PED::IS_PED_INJURED(Local_1724[31 /*20*/]))
		{
			iVar0++;
		}
	}
	else if (Local_1724[31 /*20*/].f_14)
	{
		iVar0++;
	}
	return iVar0;
}

int func_758()//Position - 0x7292D
{
	if (iLocal_3393 < 3)
	{
		if (bLocal_3204)
		{
			if (GlobalFunc_663("cntry_god31", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("cntry_god31");
			}
			iLocal_3393 = 3;
		}
	}
	switch (iLocal_3393)
	{
		case 0:
			if (bLocal_3203)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_clearm", 7, 0, 0, 0))
							{
								iLocal_3393++;
								return 1;
							}
							break;
						
						case 1:
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_clearf", 7, 0, 0, 0))
							{
								iLocal_3393++;
								return 1;
							}
							break;
					}
				}
				else
				{
					iLocal_3393++;
				}
			}
			break;
		
		case 1:
			if (func_759())
			{
				iLocal_3212 = 1;
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				GlobalFunc_164("cntry_god31", 7500, 1);
				func_706("cntry_god31", 1);
				iLocal_3393++;
				return 1;
			}
			break;
		
		case 3:
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FrGot", 7, 0, 0, 0))
				{
					iLocal_3393++;
					return 1;
				}
			}
			break;
		
		case 4:
			break;
	}
	return 0;
}

int func_759()//Position - 0x72AAB
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3098[0], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
		{
			if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_MFront", 7, 0, 0, 0))
			{
				iLocal_3393++;
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3098[1], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
		{
			if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FFront", 7, 0, 0, 0))
			{
				iLocal_3393++;
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3098[2], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
		{
			if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_Tfront", 7, 0, 0, 0))
			{
				iLocal_3393++;
				return 1;
			}
		}
	}
	return 0;
}

int func_760()//Position - 0x72BEC
{
	if (iLocal_3378 < 5)
	{
		if (iLocal_3378 > 2)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0) || func_761())
			{
				iLocal_3378 = 5;
			}
		}
	}
	switch (iLocal_3378)
	{
		case 0:
			if (Local_1724[12 /*20*/].f_14)
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_frankB", 7, 0, 0, 0))
				{
					iLocal_3378++;
					return 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "alleycops1", 7, 0, 0, 0))
			{
				iLocal_3378++;
				return 1;
			}
			break;
		
		case 2:
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				GlobalFunc_164("cntry_god30", 7500, 1);
				iLocal_3378++;
				return 1;
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0) && !func_761())
			{
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_frankB2", 7, 0, 0, 0))
					{
						iLocal_3378++;
						return 1;
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0) && !func_761())
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_frankB3", 7, 0, 0, 0))
				{
					iLocal_3378++;
					return 1;
				}
			}
			break;
		
		case 5:
			break;
	}
	return 0;
}

int func_761()//Position - 0x72DD1
{
	int iVar0;
	
	iVar0 = 12;
	while (iVar0 <= 13)
	{
		if (Local_1724[iVar0 /*20*/].f_14)
		{
			if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 16;
	while (iVar0 <= 18)
	{
		if (Local_1724[iVar0 /*20*/].f_14)
		{
			if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}


void func_763()//Position - 0x72E92
{
	switch (iLocal_3377)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
			{
				GlobalFunc_2518(&uLocal_3098, 0, 0);
			}
			iLocal_2810 = 4;
			if (bLocal_3203)
			{
				if (iLocal_3212)
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 1);
							GlobalFunc_2511(&uLocal_3098, 1, 2, 0);
							iLocal_2810 = 1;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
							break;
						
						case 1:
							GlobalFunc_2518(&uLocal_3098, 0, 1);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2511(&uLocal_3098, 0, 2, 0);
							iLocal_2810 = 0;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
							break;
						
						case 2:
							if (iLocal_3358 == 1)
							{
								GlobalFunc_2518(&uLocal_3098, 0, 0);
								GlobalFunc_2518(&uLocal_3098, 2, 0);
								GlobalFunc_2518(&uLocal_3098, 1, 1);
								GlobalFunc_2511(&uLocal_3098, 1, 2, 0);
								iLocal_2810 = 1;
								iLocal_3376 = MISC::GET_GAME_TIMER();
								iLocal_3377++;
							}
							else if (iLocal_3359 == 1)
							{
								GlobalFunc_2518(&uLocal_3098, 0, 1);
								GlobalFunc_2518(&uLocal_3098, 2, 0);
								GlobalFunc_2518(&uLocal_3098, 1, 0);
								GlobalFunc_2511(&uLocal_3098, 0, 2, 0);
								iLocal_2810 = 0;
								iLocal_3376 = MISC::GET_GAME_TIMER();
								iLocal_3377++;
							}
							else
							{
								GlobalFunc_2518(&uLocal_3098, 0, 0);
								GlobalFunc_2518(&uLocal_3098, 2, 0);
								GlobalFunc_2518(&uLocal_3098, 1, 1);
								GlobalFunc_2511(&uLocal_3098, 1, 2, 0);
								iLocal_2810 = 1;
								iLocal_3376 = MISC::GET_GAME_TIMER();
								iLocal_3377++;
							}
							break;
						}
					}
			}
			break;
		
		case 1:
			if (!Local_1724[8 /*20*/].f_14)
			{
				if (GlobalFunc_8315() != GlobalFunc_584(iLocal_2810) && iLocal_2810 != 4)
				{
					if (GlobalFunc_588(&iLocal_3376, 10000))
					{
						GlobalFunc_3007(&uLocal_3098, iLocal_2810, 1);
						func_764(iLocal_2810);
					}
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						if (func_709("cntry_god31"))
						{
							switch (GlobalFunc_584(iLocal_2810))
							{
								case 0:
									if (GlobalFunc_588(&iLocal_3392, 20000))
									{
										if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_MFront", 7, 0, 0, 0))
										{
											iLocal_3392 = MISC::GET_GAME_TIMER();
										}
									}
									break;
								
								case 1:
									if (GlobalFunc_588(&iLocal_3392, 20000))
									{
										if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_FFront", 7, 0, 0, 0))
										{
											iLocal_3392 = MISC::GET_GAME_TIMER();
										}
									}
									break;
								}
							}
						}
				}
			}
			else
			{
				GlobalFunc_3007(&uLocal_3098, iLocal_2810, 0);
				iLocal_2810 = 4;
				if (func_756())
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 1);
							GlobalFunc_2511(&uLocal_3098, 2, 0, 1);
							iLocal_2810 = 2;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
							break;
						
						case 1:
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 1);
							GlobalFunc_2511(&uLocal_3098, 2, 0, 1);
							iLocal_2810 = 2;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
							break;
						
						case 2:
							break;
						}
					}
			}
			if (Local_1724[34 /*20*/].f_14)
			{
				iLocal_3377 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_8315() != GlobalFunc_584(iLocal_2810) && iLocal_2810 != 4)
			{
				if (GlobalFunc_588(&iLocal_3376, 10000))
				{
				}
			}
			if (Local_1724[34 /*20*/].f_14)
			{
				GlobalFunc_3007(&uLocal_3098, iLocal_2810, 0);
				iLocal_2810 = 4;
				switch (GlobalFunc_8315())
				{
					case 0:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[34 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 1);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2511(&uLocal_3098, 1, 0, 1);
							iLocal_2810 = 1;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						else
						{
							iLocal_3377++;
						}
						break;
					
					case 1:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[34 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							GlobalFunc_2518(&uLocal_3098, 0, 1);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2511(&uLocal_3098, 2, 0, 1);
							iLocal_2810 = 0;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						else
						{
							iLocal_3377++;
						}
						break;
					
					case 2:
						if (iLocal_3358 == 1)
						{
							GlobalFunc_2518(&uLocal_3098, 0, 1);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2511(&uLocal_3098, 0, 2, 0);
							iLocal_2810 = 0;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						else if (iLocal_3359 == 1)
						{
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 1);
							GlobalFunc_2511(&uLocal_3098, 1, 2, 0);
							iLocal_2810 = 1;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						else
						{
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 1);
							GlobalFunc_2511(&uLocal_3098, 1, 2, 0);
							iLocal_2810 = 2;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						break;
					}
			}
			break;
		
		case 3:
			if (GlobalFunc_8315() != GlobalFunc_584(iLocal_2810) && iLocal_2810 != 4)
			{
				if (GlobalFunc_588(&iLocal_3376, 10000))
				{
					GlobalFunc_3007(&uLocal_3098, iLocal_2810, 1);
				}
			}
			if (Local_1724[10 /*20*/].f_14)
			{
				GlobalFunc_3007(&uLocal_3098, iLocal_2810, 0);
				iLocal_2810 = 4;
				switch (GlobalFunc_8315())
				{
					case 0:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[10 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 1);
							GlobalFunc_2511(&uLocal_3098, 2, 0, 1);
							iLocal_2810 = 2;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						break;
					
					case 1:
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1724[10 /*20*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							GlobalFunc_2518(&uLocal_3098, 0, 0);
							GlobalFunc_2518(&uLocal_3098, 1, 0);
							GlobalFunc_2518(&uLocal_3098, 2, 1);
							GlobalFunc_2511(&uLocal_3098, 2, 0, 1);
							iLocal_2810 = 2;
							iLocal_3376 = MISC::GET_GAME_TIMER();
							iLocal_3377++;
						}
						break;
					
					case 2:
						break;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
				{
					iLocal_3377 = 4;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_8315() != GlobalFunc_584(iLocal_2810) && iLocal_2810 != 4)
			{
				if (GlobalFunc_588(&iLocal_3376, 10000))
				{
					GlobalFunc_3007(&uLocal_3098, iLocal_2810, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
			{
				GlobalFunc_3007(&uLocal_3098, iLocal_2810, 0);
				iLocal_3377++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_764(int iParam0)//Position - 0x73543
{
	if (GlobalFunc_588(&iLocal_3375, 1000))
	{
		switch (iParam0)
		{
			case 0:
				ENTITY::SET_ENTITY_HEALTH(uLocal_3098[0], (ENTITY::GET_ENTITY_HEALTH(uLocal_3098[0]) - 15));
				break;
			
			case 1:
				ENTITY::SET_ENTITY_HEALTH(uLocal_3098[1], (ENTITY::GET_ENTITY_HEALTH(uLocal_3098[1]) - 15));
				break;
		}
		iLocal_3375 = MISC::GET_GAME_TIMER();
	}
}



void func_767()//Position - 0x735DD
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_3234)
	{
		case 0:
			if (bLocal_3178)
			{
				if (GlobalFunc_10061(&uLocal_3098, 1, 1))
				{
					HUD::CLEAR_HELP(1);
					if (GlobalFunc_751(&uLocal_3098, 0))
					{
						if (func_772())
						{
							iLocal_3234++;
						}
					}
					else if (GlobalFunc_751(&uLocal_3098, 1))
					{
						if (func_722())
						{
							iLocal_3234++;
						}
					}
					else if (GlobalFunc_751(&uLocal_3098, 2))
					{
						if (func_771())
						{
							iLocal_3234++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_649(&Local_3142, 3, 0, 999f, 999f, 0, 0, 0, 0, 0))
			{
				if (Local_3142.f_18)
				{
					if (!Local_3142.f_19)
					{
						if (func_439(&uLocal_3098, 1, 1, 0))
						{
							PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), 1);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0);
							switch (GlobalFunc_8315())
							{
								case 0:
									AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_MICHAEL");
									iLocal_3399 = 0;
									break;
								
								case 1:
									AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
									break;
								
								case 2:
									AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_TREVOR");
									break;
							}
							func_313(uLocal_3098[uLocal_3098.f_5], 0);
							func_312(&(uLocal_3098[uLocal_3098.f_5]), 0);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_3098[uLocal_3098.f_5], "FBI_4_BUDDIES_GROUP", 0);
							WEAPON::GET_CURRENT_PED_WEAPON(uLocal_3098[uLocal_3098.f_5], &iVar0, 1);
							if (uLocal_3098.f_5 != 2)
							{
								if (iVar0 == joaat("weapon_grenadelauncher") || iVar0 == joaat("weapon_rpg"))
								{
									if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_3098[uLocal_3098.f_5], joaat("weapon_pistol"), 0))
									{
										WEAPON::GIVE_WEAPON_TO_PED(uLocal_3098[uLocal_3098.f_5], joaat("weapon_pistol"), 200, 0, 1);
									}
									else
									{
										if (WEAPON::GET_AMMO_IN_PED_WEAPON(uLocal_3098[uLocal_3098.f_5], joaat("weapon_pistol")) < 200)
										{
											WEAPON::SET_PED_AMMO(uLocal_3098[uLocal_3098.f_5], joaat("weapon_pistol"), 200);
										}
										WEAPON::SET_CURRENT_PED_WEAPON(uLocal_3098[uLocal_3098.f_5], joaat("weapon_pistol"), 0);
									}
								}
							}
							switch (uLocal_3098.f_5)
							{
								case 0:
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_MICHAEL"))
									{
										AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_MICHAEL");
									}
									func_770();
									break;
								
								case 1:
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_FRANKLIN"))
									{
										AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
									}
									func_769();
									break;
								
								case 2:
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_TREVOR"))
									{
										AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_TREVOR");
									}
									Var1 = { ENTITY::GET_ENTITY_COORDS(uLocal_3098[uLocal_3098.f_5], 1) };
									if (Var1.f_2 > 40f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_3098[uLocal_3098.f_5]))
										{
											ENTITY::SET_ENTITY_COORDS(uLocal_3098[uLocal_3098.f_5], 804.7164f, -2330.207f, 61.0967f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(uLocal_3098[uLocal_3098.f_5], 264.4371f);
										}
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[uLocal_3098.f_5], 804.7164f, -2330.207f, 61.09672f, 0.75f, 0, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[uLocal_3098.f_5], 1);
									}
									else
									{
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[uLocal_3098.f_5], 871.4848f, -2339.364f, 29.3369f, 2f, 0, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
									}
									iLocal_3288 = MISC::GET_GAME_TIMER();
									GlobalFunc_2903(uLocal_3098[2], 1500);
									break;
							}
							if (iLocal_1126[8] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_1724[8 /*20*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_1724[8 /*20*/], uLocal_3098[uLocal_3098.f_5], 2000, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1724[8 /*20*/], 0, 0);
									iLocal_3317[8] = 0;
								}
							}
							if (iLocal_1126[9] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_1724[9 /*20*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_1724[9 /*20*/], uLocal_3098[uLocal_3098.f_5], 2000, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1724[9 /*20*/], 0, 0);
									iLocal_3317[9] = 0;
								}
							}
							if (iLocal_1126[31] == 1)
							{
								if (!PED::IS_PED_INJURED(Local_1724[31 /*20*/]))
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_1724[31 /*20*/], uLocal_3098[uLocal_3098.f_5], 2000, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1724[31 /*20*/], 0, 0);
									iLocal_3317[31] = 0;
								}
							}
							if (!bLocal_3205)
							{
								if (GlobalFunc_8315() != 2)
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_3098[2], 1);
								}
								else
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
								}
							}
							else if (GlobalFunc_8315() != 2)
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_3098[2], 0);
							}
							GlobalFunc_565(313, 1, 0);
							Local_3142.f_19 = 1;
						}
					}
				}
			}
			else
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						break;
					
					case 1:
						break;
					
					case 2:
						GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_T_att0", 7, 0, 0, 0);
						break;
				}
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
				func_768();
				iLocal_3234 = 0;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_768()//Position - 0x73AAA
{
	switch (uLocal_3098.f_5)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(uLocal_3450))
			{
				uLocal_3450 = GlobalFunc_6797(uLocal_3098[0], 0, 145);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_3450, true);
				HUD::SET_BLIP_DISPLAY(uLocal_3450, 2);
				HUD::SET_BLIP_SCALE(uLocal_3450, 0.5f);
			}
			if (!PED::IS_PED_INJURED(uLocal_3098[0]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_3098[0], 0);
			}
			break;
		
		case 1:
			if (!HUD::DOES_BLIP_EXIST(uLocal_3452))
			{
				uLocal_3452 = GlobalFunc_6797(uLocal_3098[1], 0, 145);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_3452, true);
				HUD::SET_BLIP_DISPLAY(uLocal_3452, 2);
				HUD::SET_BLIP_SCALE(uLocal_3452, 0.5f);
			}
			if (!PED::IS_PED_INJURED(uLocal_3098[1]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_3098[1], 0);
			}
			break;
		
		case 2:
			if (!HUD::DOES_BLIP_EXIST(uLocal_3451))
			{
				uLocal_3451 = GlobalFunc_6797(uLocal_3098[2], 0, 145);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_3451, true);
				HUD::SET_BLIP_DISPLAY(uLocal_3451, 2);
				HUD::SET_BLIP_SCALE(uLocal_3451, 0.5f);
			}
			if (!PED::IS_PED_INJURED(uLocal_3098[2]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_3098[2], 0);
			}
			break;
	}
}

void func_769()//Position - 0x73BC7
{
	if (!iLocal_3197)
	{
		if (Local_1724[12 /*20*/].f_14)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3098[uLocal_3098.f_5], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
			{
				iLocal_3359 = 1;
				iLocal_3197 = 1;
			}
		}
	}
	switch (iLocal_3359)
	{
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[uLocal_3098.f_5], 874.0164f, -2353.893f, 29.3324f, 2.5f, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_3098[uLocal_3098.f_5], 200f, 0);
			GlobalFunc_2903(uLocal_3098[uLocal_3098.f_5], 1500);
			break;
		
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[uLocal_3098.f_5], 845.3195f, -2332.202f, 29.3346f, 2.5f, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_3098[uLocal_3098.f_5], 200f, 0);
			GlobalFunc_2903(uLocal_3098[uLocal_3098.f_5], 1500);
			break;
	}
}

void func_770()//Position - 0x73CCD
{
	if (!iLocal_3197)
	{
		if (Local_1724[12 /*20*/].f_14)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_3098[uLocal_3098.f_5], 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
			{
				iLocal_3358 = 1;
				iLocal_3197 = 1;
			}
		}
	}
	switch (iLocal_3358)
	{
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[uLocal_3098.f_5], Local_3420, 1.5f, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_3098[uLocal_3098.f_5], 200f, 0);
			GlobalFunc_2903(uLocal_3098[uLocal_3098.f_5], 1500);
			break;
		
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[uLocal_3098.f_5], 845.3195f, -2332.202f, 29.3346f, 2.5f, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_3098[uLocal_3098.f_5], 200f, 0);
			GlobalFunc_2903(uLocal_3098[uLocal_3098.f_5], 1500);
			break;
		
		case 2:
			break;
	}
}

int func_771()//Position - 0x73DD2
{
	WEAPON::REFILL_AMMO_INSTANTLY(uLocal_3098[2]);
	Local_3142.f_12 = uLocal_3098[2];
	if (HUD::DOES_BLIP_EXIST(uLocal_3451))
	{
		HUD::REMOVE_BLIP(&uLocal_3451);
	}
	HUD::CLEAR_HELP(1);
	bLocal_3183 = true;
	iLocal_3831 = 1;
	iLocal_3289 = 2;
	return 1;
}

int func_772()//Position - 0x73E13
{
	Local_3142.f_12 = uLocal_3098[0];
	if (HUD::DOES_BLIP_EXIST(uLocal_3450))
	{
		HUD::REMOVE_BLIP(&uLocal_3450);
	}
	HUD::CLEAR_HELP(1);
	bLocal_3183 = true;
	iLocal_3829 = 1;
	return 1;
}

void func_773()//Position - 0x73E45
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[2]))
		{
			switch (iLocal_3289)
			{
				case 0:
					if (bLocal_3178)
					{
						if (GlobalFunc_588(&iLocal_3288, 20000))
						{
							TASK::TASK_SHOOT_AT_COORD(uLocal_3098[2], 925.45f, -2343.15f, 31.98f, 5000, 0);
							Local_3426 = { 925.45f, -2343.15f, 31.98f };
							iLocal_3288 = MISC::GET_GAME_TIMER();
							iLocal_3289++;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_588(&iLocal_3288, 30000))
					{
						if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(913.23f, -2360.12f, 80f, 40f))
						{
							Local_3426 = { 913.23f, -2360.12f, 60f };
						}
						else
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
							{
								case 0:
									Local_3426 = { 913.5f, -2357.29f, 30.4f };
									break;
								
								case 1:
									Local_3426 = { 911f, -2337.11f, 30.02f };
									break;
								
								case 2:
									Local_3426 = { 920.75f, -2364.49f, 30.22f };
									break;
								
								case 3:
									Local_3426 = { 925.45f, -2343.15f, 31.98f };
									break;
								}
						}
						TASK::TASK_SHOOT_AT_COORD(uLocal_3098[2], Local_3426, 5000, 0);
						iLocal_3288 = MISC::GET_GAME_TIMER();
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
					{
						iLocal_3289++;
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_3098[2], 1630799643) != 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_3098[2], Local_1432[1 /*15*/], -1, 0);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_3098[2], Local_1432[1 /*15*/], -1, 0, 2);
							}
						}
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(uLocal_3098[2]);
						iLocal_3288 = MISC::GET_GAME_TIMER();
						iLocal_3289 = 1;
					}
					break;
				
				case 22:
					break;
				}
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 195, 1);
	}
}

void func_774()//Position - 0x74056
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[0]))
		{
			switch (iLocal_3229)
			{
				case 0:
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_3098[0], joaat("weapon_combatmg"), 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 894.0912f, -2349.348f, 29.4448f, 891.74f, -2358.18f, 30.71f, 2f, 0, 0.5f, 1f, 0, 0, 1, -957453492);
					TASK::TASK_AIM_GUN_AT_COORD(0, 891.74f, -2358.18f, 30.71f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[0], uLocal_3464);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
					iLocal_3229++;
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_3098[0], 894.0912f, -2349.348f, 29.4448f, 1f, 1f, 2f, 0, 1, 0))
					{
						if (func_585(uLocal_3098[0], 242628503, 1, 1))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
							TASK::CLEAR_PED_TASKS(uLocal_3098[0]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 894.0912f, -2349.348f, 29.4448f, 891.74f, -2358.18f, 30.71f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_COORD(0, 891.74f, -2358.18f, 30.71f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[0], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
						}
					}
					break;
				
				case 2:
					func_313(uLocal_3098[0], 0);
					Local_3414 = { 0f, 0f, 0f };
					Local_3417 = { 0f, 0f, 0f };
					uLocal_3231 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3414, Local_3417, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_3098[0], uLocal_3231, "missfbi4", "push_agents_player0", 1000f, -8f, 5, 0, 1148846080, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3231, Local_1191, 0);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3098[0], 0, 0);
					iLocal_3229++;
					break;
				
				case 3:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3231))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_3028))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_3028))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.483f)
								{
									OBJECT::DELETE_OBJECT(&Local_3028);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3028.f_2);
								}
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.6f)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_3231) >= 0.82f)
							{
								if (!PED::IS_PED_INJURED(Local_1684) && !PED::IS_PED_INJURED(Local_1684))
								{
									GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "van_scene_3", 7, 0, 0, 0);
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
								TASK::TASK_AIM_GUN_AT_COORD(0, 887.65f, -2360.66f, 30.85f, 100, 1, 0);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat3", 0, 138, -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[0], uLocal_3464);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								iLocal_7602 = 1;
								iLocal_7603 = 0;
								uLocal_7604 = uLocal_3468;
								iLocal_3229++;
							}
						}
					}
					break;
				
				case 4:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_3098[0]))
					{
						iLocal_3229++;
					}
					break;
				
				case 5:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_3098[0]))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_3098[0], 2f, 0);
						TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(uLocal_3098[0], 900.25f, -2338.46f, 30.96f, 0);
					}
					if (!PED::IS_PED_IN_COVER(uLocal_3098[0], 0))
					{
						if (iLocal_7602)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_3098[0]) && TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_3098[0]) > 13)
							{
								if (func_775(uLocal_3098[0], 881.53f, -2334.04f, 33.91f, 2f, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 878.698f, -2332.427f, 31.493f, 878.277f, -2336.807f, 36.593f, 7f, 0, 1, 0))
								{
									Local_3420 = { 871.79f, -2344.442f, 29.33137f };
									uLocal_7604 = uLocal_3469;
									iLocal_7603 = 1;
									iLocal_7602 = 0;
								}
							}
						}
						else if (func_775(uLocal_3098[0], 871.79f, -2344.442f, 29.33137f, 2f, 1))
						{
							Local_3420 = { 881.53f, -2334.04f, 33.91f };
							uLocal_7604 = uLocal_3468;
							iLocal_7603 = 1;
							iLocal_7602 = 1;
						}
						if (ENTITY::IS_ENTITY_AT_COORD(uLocal_3098[0], Local_3420, 2f, 2f, 2f, 0, 1, 0))
						{
							if ((((((!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_3098[0]) && !PED::IS_PED_IN_COVER(uLocal_3098[0], 0)) && !PED::IS_PED_GOING_INTO_COVER(uLocal_3098[0])) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_3098[0], -1959848946) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_3098[0], -1716541277) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_3098[0], 1812035420) != 1) || iLocal_7603)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_3098[0], Local_3420, -1, 0, 0f, 0, 0, uLocal_7604, 0);
								iLocal_7603 = 0;
							}
						}
						else if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_3098[0], 713668775) != 1 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_3098[0])) || iLocal_7603)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_3098[0], Local_3420, 2f, -1, 0.2f, 0, 1193033728);
							iLocal_7603 = 0;
						}
					}
					else
					{
						iLocal_3229++;
					}
					break;
				
				case 6:
					if (iLocal_3254 > 1)
					{
						func_313(uLocal_3098[0], 0);
						func_312(&(uLocal_3098[0]), 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_3098[0], Local_3420, 1.5f, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_3098[0], 200f, 0);
						iLocal_3229++;
					}
					break;
				
				case 7:
					break;
				}
			}
	}
}

int func_775(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x74610
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		fVar6 = SYSTEM::VDIST(Var3, Param1);
		fVar7 = SYSTEM::VDIST(Var0, Param1);
		if (fVar6 < fParam4)
		{
			if (fVar7 < fVar6 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, 1f, 1f, 2f, 0, 1, 0))
			{
				if (bParam5)
				{
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_776()//Position - 0x7469A
{
	switch (iLocal_3374)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1221[1 /*15*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1221[1 /*15*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1724[2 /*20*/]))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[2 /*20*/], Local_1221[1 /*15*/]))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_1221[1 /*15*/], 0);
							iLocal_3374++;
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_1221[1 /*15*/], 0);
						iLocal_3374++;
					}
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1221[3 /*15*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1221[3 /*15*/]))
				{
					if (!PED::IS_PED_INJURED(Local_1724[6 /*20*/]))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[6 /*20*/], Local_1221[3 /*15*/]))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_1221[3 /*15*/], 0);
							iLocal_3374++;
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_SIREN(Local_1221[3 /*15*/], 0);
						iLocal_3374++;
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_777()//Position - 0x74791
{
	int iVar0;
	
	iVar0 = 0;
	switch (iLocal_3287)
	{
		case 0:
			if (((ENTITY::DOES_ENTITY_EXIST(Local_1221[0 /*15*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1221[1 /*15*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1221[2 /*15*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1221[3 /*15*/]))
			{
				if (((!ENTITY::IS_ENTITY_DEAD(Local_1221[0 /*15*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1221[1 /*15*/])) && !ENTITY::IS_ENTITY_DEAD(Local_1221[2 /*15*/])) && !ENTITY::IS_ENTITY_DEAD(Local_1221[3 /*15*/]))
				{
					if (((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[0 /*15*/]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[1 /*15*/])) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[2 /*15*/])) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[3 /*15*/]))
					{
						iVar0 = 0;
						while (iVar0 <= 3)
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1221[iVar0 /*15*/]);
							iVar0++;
						}
						iLocal_3287 = 1;
					}
				}
				else
				{
					iLocal_3287 = 2;
				}
			}
			break;
		
		case 1:
			if (func_778(&Local_1724) >= (Local_1724 - 4))
			{
				iLocal_3287 = 2;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1221[iVar0 /*15*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[iVar0 /*15*/], 0))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1221[iVar0 /*15*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								Local_1221[iVar0 /*15*/].f_9 = ENTITY::GET_ENTITY_HEALTH(Local_1221[iVar0 /*15*/]);
								Local_1221[iVar0 /*15*/].f_10 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1221[iVar0 /*15*/]);
								Local_1221[iVar0 /*15*/].f_11 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1221[iVar0 /*15*/]);
								if ((ENTITY::GET_ENTITY_HEALTH(Local_1221[iVar0 /*15*/]) < 700 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1221[iVar0 /*15*/]) < 700f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1221[iVar0 /*15*/]) < 700f)
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[iVar0 /*15*/]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[iVar0 /*15*/]);
									}
									FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1221[iVar0 /*15*/], 1), 7, 1f, 1, 0, 1065353216);
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1221[iVar0 /*15*/]));
									iLocal_3287 = 2;
									return;
								}
								else
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1221[iVar0 /*15*/]);
								}
							}
						}
					}
					iVar0++;
				}
			}
			break;
		
		case 2:
			if (func_778(&Local_1724) >= (Local_1724 - 4))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_1221 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1221[iVar0 /*15*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[iVar0 /*15*/], 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1221[iVar0 /*15*/]);
						}
					}
					iVar0++;
				}
				iLocal_3287 = 3;
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 <= (Local_1221 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1221[iVar0 /*15*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[iVar0 /*15*/], 0))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1221[iVar0 /*15*/], PLAYER::PLAYER_PED_ID(), 1))
						{
							if ((ENTITY::GET_ENTITY_HEALTH(Local_1221[iVar0 /*15*/]) < 700 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1221[iVar0 /*15*/]) < 700f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1221[iVar0 /*15*/]) < 700f)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[iVar0 /*15*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[iVar0 /*15*/]);
								}
								VEHICLE::EXPLODE_VEHICLE(Local_1221[iVar0 /*15*/], 1, 0);
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1221[iVar0 /*15*/]));
								iLocal_3287 = 22;
								return;
							}
							else
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1221[iVar0 /*15*/]);
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 22:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1221[5 /*15*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[5 /*15*/], 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[5 /*15*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1221[5 /*15*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(Local_1221[5 /*15*/]) < 500 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1221[5 /*15*/]) < 500f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1221[5 /*15*/]) < 500f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[5 /*15*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[5 /*15*/]);
						}
						VEHICLE::EXPLODE_VEHICLE(Local_1221[5 /*15*/], 1, 0);
					}
					else
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1221[5 /*15*/]);
					}
				}
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1221[5 /*15*/]);
			}
		}
	}
}

int func_778(int iParam0)//Position - 0x74BAC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*20*/])->f_14)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*20*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_779()//Position - 0x74BF0
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2526[1 /*20*/]))
		{
			if (!PED::IS_PED_INJURED(Local_2526[1 /*20*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[1 /*15*/]))
					{
						switch (iLocal_3370)
						{
							case 0:
								if (func_585(Local_2526[1 /*20*/], 242628503, -2, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_HELI_MISSION(0, Local_1432[1 /*15*/], 0, 0, 834.8f, -2327.7f, 68f, 4, 10f, 1f, 173.2674f, 15, 10, -1082130432, 0);
									TASK::TASK_HELI_MISSION(0, Local_1432[1 /*15*/], 0, 0, 813.1f, -2338.4f, 68f, 4, 10f, 1f, 173.2674f, 15, 10, -1082130432, 0);
									TASK::TASK_HELI_MISSION(0, Local_1432[1 /*15*/], 0, 0, 811.4f, -2313.22f, 68f, 4, 10f, 1f, 0f, 15, 10, -1082130432, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_2526[1 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								}
								break;
							
							case 1:
								break;
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_HEALTH(Local_2526[1 /*20*/], 2);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[1 /*20*/]));
					if (!PED::IS_PED_INJURED(Local_1724[10 /*20*/]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[10 /*20*/], Local_1432[1 /*15*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_1724[10 /*20*/], 2);
						}
					}
					if (!PED::IS_PED_INJURED(Local_1724[11 /*20*/]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[11 /*20*/], Local_1432[1 /*15*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_1724[11 /*20*/], 2);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_1432[1 /*15*/]))
					{
						VEHICLE::EXPLODE_VEHICLE(Local_1432[1 /*15*/], 1, 0);
					}
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_1432[1 /*15*/], 0), 0, 1f, 1, 0, 1065353216);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1432[1 /*15*/]));
					func_780(1);
				}
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[1 /*20*/]));
				iLocal_3367[1] = MISC::GET_GAME_TIMER();
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_1432[1 /*15*/]))
		{
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_1432[1 /*15*/]) < 2.2f || (iLocal_3367[1] != 0 && GlobalFunc_588(&(iLocal_3367[1]), 7000)))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_1432[1 /*15*/], 0, 0, 0, 0, 0, 0, 0, 0);
				VEHICLE::EXPLODE_VEHICLE(Local_1432[1 /*15*/], 1, 0);
				VEHICLE::EXPLODE_VEHICLE(Local_1432[1 /*15*/], 1, 0);
				if (!PED::IS_PED_INJURED(Local_2526[1 /*20*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_2526[1 /*20*/], 2);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[1 /*20*/]));
				}
				if (!PED::IS_PED_INJURED(Local_1724[10 /*20*/]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[10 /*20*/], Local_1432[1 /*15*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_1724[10 /*20*/], 2);
					}
				}
				if (!PED::IS_PED_INJURED(Local_1724[11 /*20*/]))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[11 /*20*/], Local_1432[1 /*15*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_1724[11 /*20*/], 2);
					}
				}
				func_780(1);
			}
		}
		else
		{
			func_780(1);
		}
	}
}

void func_780(bool bParam0)//Position - 0x74EEA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_2445 - 1))
	{
		if (iLocal_1171[iVar0] < 6)
		{
			if (!PED::IS_PED_INJURED(Local_2445[iVar0 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Local_2445[iVar0 /*20*/]))
				{
					ENTITY::DETACH_ENTITY(Local_2445[iVar0 /*20*/], 1, 1);
				}
				PED::SET_PED_GRAVITY(Local_2445[iVar0 /*20*/], 1);
			}
			else
			{
				Local_2445[iVar0 /*20*/].f_14 = 1;
			}
			iLocal_1171[iVar0] = 6;
		}
		iVar0++;
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_3052[0 /*10*/])))
	{
		PHYSICS::DELETE_ROPE(&(Local_3052[0 /*10*/]));
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_3052[1 /*10*/])))
	{
		PHYSICS::DELETE_ROPE(&(Local_3052[1 /*10*/]));
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[1 /*15*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1432[1 /*15*/]);
		}
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(Local_2526[1 /*20*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_2526[1 /*20*/]);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
				TASK::TASK_HELI_MISSION(0, Local_1432[1 /*15*/], 0, 0, 0f, 0f, 0f, 4, 25f, 0f, -1f, 70, 65, -1082130432, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
				TASK::TASK_PERFORM_SEQUENCE(Local_2526[1 /*20*/], uLocal_3464);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
			}
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[1 /*20*/]));
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1432[1 /*15*/]));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1432[1 /*15*/].f_1);
}

void func_781()//Position - 0x75034
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1432[0 /*15*/]))
	{
		if (!PED::IS_PED_INJURED(Local_2526[0 /*20*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[0 /*15*/], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[0 /*15*/]))
				{
					switch (iLocal_3372)
					{
						case 0:
							VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_1432[0 /*15*/], 1, 1);
							TASK::TASK_VEHICLE_AIM_AT_COORD(Local_2526[0 /*20*/], 863.7f, -2272f, 38f);
							iLocal_3372++;
							break;
						
						case 1:
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 28000f)
							{
								TASK::TASK_VEHICLE_AIM_AT_COORD(Local_2526[0 /*20*/], 864.3f, -2266.9f, 38.8f);
								iLocal_3372++;
							}
							break;
						
						case 2:
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 31000f)
							{
								TASK::TASK_VEHICLE_AIM_AT_COORD(Local_2526[0 /*20*/], 850f, -2305f, 30f);
								iLocal_3372++;
							}
							break;
						
						case 3:
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 45000f)
							{
								TASK::TASK_VEHICLE_AIM_AT_COORD(Local_2526[0 /*20*/], 841f, -2230f, 38f);
								iLocal_3372++;
							}
							break;
						
						case 4:
							break;
					}
				}
				else
				{
					PED::DELETE_PED(&(Local_2526[0 /*20*/]));
					VEHICLE::DELETE_VEHICLE(&(Local_1432[0 /*15*/]));
					VEHICLE::REMOVE_VEHICLE_RECORDING(Local_1432[0 /*15*/].f_13, "lkfbi4");
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(Local_2526[0 /*20*/], 2);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[0 /*20*/]));
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_1432[0 /*15*/], 0), 0, 1056964608, 1, 0, 1065353216);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1432[0 /*15*/]));
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1432[0 /*15*/]))
			{
				VEHICLE::EXPLODE_VEHICLE(Local_1432[0 /*15*/], 1, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2526[0 /*20*/]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1432[0 /*15*/]));
		}
	}
}

void func_782()//Position - 0x75206
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_2708 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_2708[iVar0 /*20*/]))
		{
			switch (iLocal_1167[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2708[iVar0 /*20*/], 37, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2708[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2708[iVar0 /*20*/], Local_2708[iVar0 /*20*/].f_6, 5f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2708[iVar0 /*20*/], 200f, 0);
							iLocal_1167[iVar0] = 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							break;
					}
					break;
				
				case 5:
					break;
				}
		}
		iVar0++;
	}
}

void func_783()//Position - 0x752E7
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_2647 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_2647[iVar0 /*20*/]))
		{
			switch (iLocal_1163[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2647[iVar0 /*20*/], 37, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2647[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2647[iVar0 /*20*/], Local_2647[iVar0 /*20*/].f_6, 5f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2647[iVar0 /*20*/], 200f, 0);
							iLocal_1163[iVar0] = 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							break;
					}
					break;
				
				case 5:
					break;
				}
		}
		iVar0++;
	}
}

int func_784()//Position - 0x753C8
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_1724 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
		{
			switch (iLocal_1126[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[0 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[0 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[0 /*15*/].f_13, "lkfbi4")
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									else
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 1, 0, 0, 0, 0, 0, 0, 0);
									}
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[0 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[0 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[0 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 1:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[0 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[0 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									iLocal_1126[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 2:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[1 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[1 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[1 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[1 /*15*/].f_13, "lkfbi4")
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									else
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 1, 0, 0, 0, 0, 0, 0, 0);
									}
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[1 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[1 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[1 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[1 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[1 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									iLocal_1126[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[2 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[2 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[2 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[2 /*15*/].f_13, "lkfbi4")
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
									}
									else
									{
										ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 1, 0, 0, 0, 0, 0, 0, 0);
									}
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[2 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[2 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[2 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 5:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[2 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[2 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									iLocal_1126[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 6:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[3 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[3 /*15*/]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[3 /*15*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
									iLocal_1126[iVar0] = 5;
								}
								else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[3 /*15*/]) + 3000f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[3 /*15*/].f_13, "lkfbi4")
								{
									ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
								}
								else
								{
									ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 1, 0, 0, 0, 0, 0, 0, 0);
								}
							}
							else
							{
								ENTITY::SET_ENTITY_PROOFS(Local_1724[iVar0 /*20*/], 0, 0, 0, 0, 0, 0, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 7:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[3 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[3 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									iLocal_1126[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 8:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1724[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, 0, 0.5f, 0.5f, 1, 512, 0, -957453492);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							fLocal_3444 = 0f;
							iLocal_3355 = MISC::GET_GAME_TIMER();
							iLocal_1126[iVar0] = 1;
							break;
						
						case 9:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1724[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, 0, 0.5f, 0.5f, 1, 512, 0, -957453492);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							fLocal_3445 = 0f;
							iLocal_3356 = MISC::GET_GAME_TIMER();
							iLocal_1126[iVar0] = 1;
							break;
						
						case 10:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[iVar0 /*20*/], Local_1432[1 /*15*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[1 /*15*/]))
										{
											if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[1 /*15*/]) > 13000f)
											{
												iLocal_1126[iVar0] = 1;
											}
										}
									}
									else
									{
										iLocal_1126[iVar0] = 1;
									}
								}
								else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1724[iVar0 /*20*/]))
								{
									iLocal_1126[iVar0] = 1;
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/], 2);
								}
							}
							else
							{
								iLocal_1126[iVar0] = 1;
							}
							break;
						
						case 11:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[iVar0 /*20*/], Local_1432[1 /*15*/]))
									{
										if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[1 /*15*/]))
										{
											if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[1 /*15*/]) > 13000f)
											{
												iLocal_1126[iVar0] = 1;
											}
										}
									}
									else
									{
										iLocal_1126[iVar0] = 1;
									}
								}
								else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_1724[iVar0 /*20*/]))
								{
									iLocal_1126[iVar0] = 1;
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/], 2);
								}
							}
							else
							{
								iLocal_1126[iVar0] = 1;
							}
							break;
						
						case 12:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 13:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 14:
						case 15:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 5;
							break;
						
						case 16:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 17:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 18:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 19:
						case 20:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_PAUSE(0, 1500);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 21:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[0 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 27000f)
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1724[iVar0 /*20*/].f_6, 847.3f, -2326.2f, 31f, 2f, 0, 0.5f, 0.5f, 1, 4608, 0, -957453492);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
										TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
										iLocal_1126[iVar0] = 1;
									}
								}
							}
							break;
						
						case 22:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[0 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 27000f)
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1724[iVar0 /*20*/].f_6, 847.3f, -2326.2f, 31f, 2f, 0, 0.5f, 0.5f, 1, 4608, 0, -957453492);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
										TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
										iLocal_1126[iVar0] = 1;
									}
								}
							}
							break;
						
						case 23:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 3, 136, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 24:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_PAUSE(0, 1000);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 5, 172, -1);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 25:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_PAUSE(0, 2000);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 5, 136, -1);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 26:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_PAUSE(0, 3000);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "heat1", 5, 168, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 27:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[4 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[4 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[4 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[4 /*15*/].f_13, "lkfbi4")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[4 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 28:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[4 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[4 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									iLocal_1126[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 29:
						case 30:
						case 34:
						case 35:
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 5;
							break;
						
						case 31:
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_AIM_GUN_AT_COORD(0, 877.1f, -2353.6f, 40f, 5500, 0, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 932.2432f, -2378.912f, 40.2425f, 877.1f, -2353.6f, 40f, 2f, 0, 0.5f, 0.5f, 1, 0, 0, -957453492);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1724[iVar0 /*20*/].f_6, 2f, 20000, 0.25f, 0, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
							iLocal_1126[iVar0] = 1;
							break;
						
						case 32:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[5 /*15*/], 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[5 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1221[5 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_1221[5 /*15*/].f_13, "lkfbi4")
									{
										MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_1221[5 /*15*/], 1), 2f, 1, 0, 0, 0);
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1221[5 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 33:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1221[5 /*15*/], 0))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1221[5 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_PAUSE(0, 250);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
									iLocal_1126[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 15:
						case 28:
						case 33:
							if (func_585(Local_1724[iVar0 /*20*/], 242628503, -2, 1))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 8:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 1f, 1f, 2f, 0, 1, 0))
							{
								if (func_585(Local_1724[iVar0 /*20*/], 242628503, -2, 1) || func_585(Local_1724[iVar0 /*20*/], 242628503, 1, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1724[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, 0, 0.5f, 0.5f, 1, 512, 0, -957453492);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								}
							}
							else if (GlobalFunc_588(&(iLocal_3317[iVar0]), 7500))
							{
								switch (GlobalFunc_8315())
								{
									case 2:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_3098[1], 0f, 0f, fLocal_3444), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, uLocal_3098[1], -1, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
										TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
										iLocal_3317[iVar0] = MISC::GET_GAME_TIMER();
										PED::GET_PED_MAX_HEALTH(uLocal_3098[1]);
										break;
									
									case 0:
									case 1:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, fLocal_3444), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
										TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
										iLocal_3317[iVar0] = MISC::GET_GAME_TIMER();
										break;
								}
								if (GlobalFunc_588(&iLocal_3355, 10000))
								{
									fLocal_3444 = (fLocal_3444 - 0.2f);
									if (fLocal_3444 < 0f)
									{
										fLocal_3444 = 0f;
									}
									iLocal_3355 = MISC::GET_GAME_TIMER();
								}
							}
							if (func_786(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/], 2);
							}
							break;
						
						case 9:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 1f, 1f, 2f, 0, 1, 0))
							{
								if (func_585(Local_1724[iVar0 /*20*/], 242628503, -2, 1) || func_585(Local_1724[iVar0 /*20*/], 242628503, 1, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1724[iVar0 /*20*/].f_6, 879.7f, -2354.9f, 42.2f, 2f, 0, 0.5f, 0.5f, 1, 512, 0, -957453492);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								}
							}
							else
							{
								if (GlobalFunc_588(&(iLocal_3317[iVar0]), 10500))
								{
									switch (GlobalFunc_8315())
									{
										case 2:
											TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
											TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_3098[1], 0f, 0f, fLocal_3445), 4000, 0);
											TASK::TASK_AIM_GUN_AT_ENTITY(0, uLocal_3098[1], -1, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
											TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
											iLocal_3317[iVar0] = MISC::GET_GAME_TIMER();
											break;
										
										case 0:
										case 1:
											TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
											TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, fLocal_3445), 4000, 0);
											TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
											TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
											iLocal_3317[iVar0] = MISC::GET_GAME_TIMER();
											break;
										}
								}
								if (GlobalFunc_588(&iLocal_3356, 20000))
								{
									fLocal_3445 = (fLocal_3445 - 0.2f);
									if (fLocal_3445 < 0f)
									{
										fLocal_3445 = 0f;
									}
									iLocal_3356 = MISC::GET_GAME_TIMER();
								}
							}
							if (func_786(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/], 2);
							}
							break;
						
						case 10:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[iVar0 /*20*/], Local_1432[1 /*15*/]))
									{
										if (func_585(Local_1724[iVar0 /*20*/], 2104565373, -2, 0))
										{
											switch (GlobalFunc_8315())
											{
												case 2:
													TASK::TASK_DRIVE_BY(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 2f, 300f, 50, 0, -957453492);
													break;
												
												case 0:
												case 1:
													TASK::TASK_DRIVE_BY(Local_1724[iVar0 /*20*/], uLocal_3098[2], 0, 0f, 0f, 2f, 300f, 50, 0, -957453492);
													break;
											}
											iLocal_3317[10] = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
								else
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
									iLocal_1126[iVar0] = 5;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 11:
							if (ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[1 /*15*/], 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1724[iVar0 /*20*/], Local_1432[1 /*15*/]))
									{
										if (func_585(Local_1724[iVar0 /*20*/], 2104565373, -2, 0))
										{
											switch (GlobalFunc_8315())
											{
												case 2:
													TASK::TASK_DRIVE_BY(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 2f, 300f, 50, 0, -957453492);
													break;
												
												case 0:
												case 1:
													TASK::TASK_DRIVE_BY(Local_1724[iVar0 /*20*/], uLocal_3098[2], 0, 0f, 0f, 2f, 300f, 50, 0, -957453492);
													break;
											}
											iLocal_3317[11] = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
										iLocal_1126[iVar0] = 5;
									}
								}
								else
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
									iLocal_1126[iVar0] = 5;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 12:
						case 13:
						case 16:
						case 17:
						case 18:
							if (func_785() || func_586(&(Local_1724[iVar0 /*20*/]), &(Local_1724[iVar0 /*20*/].f_10), Local_1724[iVar0 /*20*/].f_14))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_1724[iVar0 /*20*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 50, 1);
								PED::SET_PED_CONFIG_FLAG(Local_1724[iVar0 /*20*/], 286, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 19:
						case 20:
							if (func_585(Local_1724[iVar0 /*20*/], 242628503, -2, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 51, 1);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 5;
							}
							break;
						
						case 21:
						case 22:
							if (func_585(Local_1724[iVar0 /*20*/], 242628503, -2, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 1f, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
								iLocal_1126[iVar0] = 3;
							}
							break;
						
						case 23:
						case 24:
						case 25:
						case 26:
							Var1 = { 0f, 0f, 0f };
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1724[iVar0 /*20*/]))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1724[iVar0 /*20*/], 2f, 0);
								TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Local_1724[iVar0 /*20*/], 849f, -2328.6f, 31.1f, 0);
							}
							TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("heat1", &iLocal_3362);
							iLocal_3362 = (iLocal_3362 - 1);
							Local_1724[iVar0 /*20*/].f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1724[iVar0 /*20*/], 1) };
							if (TASK::WAYPOINT_RECORDING_GET_COORD("heat1", iLocal_3362, &Var1))
							{
								if ((ENTITY::IS_ENTITY_AT_COORD(Local_1724[iVar0 /*20*/], Var1, 1f, 1f, 1.6f, 0, 1, 0) || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1724[iVar0 /*20*/]) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_1724[iVar0 /*20*/]) > 11)) || Local_1724[iVar0 /*20*/].f_3.f_2 < 30.5f)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 51, 1);
									PED::SET_PED_CONFIG_FLAG(Local_1724[iVar0 /*20*/], 286, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 2f, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
									iLocal_1126[iVar0] = 5;
								}
							}
							break;
						
						case 31:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_1724[iVar0 /*20*/], Local_1724[iVar0 /*20*/].f_6, 1f, 1f, 2f, 0, 1, 0))
							{
								if (func_585(Local_1724[iVar0 /*20*/], 242628503, -2, 1) || func_585(Local_1724[iVar0 /*20*/], 242628503, 1, 1))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1724[iVar0 /*20*/].f_6, 2f, 20000, 0.5f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
									TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
								}
							}
							else if (GlobalFunc_588(&(iLocal_3317[iVar0]), 12000))
							{
								switch (GlobalFunc_8315())
								{
									case 0:
									case 2:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_3098[1], 0f, 0f, fLocal_3444), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, uLocal_3098[1], -1, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
										TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
										iLocal_3317[iVar0] = MISC::GET_GAME_TIMER();
										break;
									
									case 1:
										TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
										TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.2f), 4000, 0);
										TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
										TASK::TASK_PERFORM_SEQUENCE(Local_1724[iVar0 /*20*/], uLocal_3464);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
										iLocal_3317[iVar0] = MISC::GET_GAME_TIMER();
										break;
									}
							}
							if (func_786(Local_1724[iVar0 /*20*/], PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/], 2);
							}
							break;
					}
					break;
				
				case 3:
					switch (iVar0)
					{
						case 21:
						case 22:
							iVar4 = 0;
							if ((((Local_1724[21 /*20*/].f_14 && Local_1724[22 /*20*/].f_14) && Local_1724[23 /*20*/].f_14) && Local_1724[24 /*20*/].f_14) && Local_1724[25 /*20*/].f_14)
							{
								iVar5 = 21;
								while (iVar5 <= 25)
								{
									if (PED::IS_PED_INJURED(Local_1724[iVar5 /*20*/]))
									{
										iVar4++;
									}
									iVar5++;
								}
								if (iVar4 >= 2)
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], 0);
									PED::SET_PED_COMBAT_MOVEMENT(Local_1724[iVar0 /*20*/], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 50, 1);
									PED::SET_PED_CONFIG_FLAG(Local_1724[iVar0 /*20*/], 286, 1);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
									iLocal_1126[iVar0] = 5;
								}
							}
							break;
					}
					break;
				
				case 5:
					break;
				}
		}
		iVar0++;
	}
	return 0;
}

int func_785()//Position - 0x773B6
{
	if (bLocal_3202)
	{
		if (iLocal_3381 == 0)
		{
			iLocal_3381 = MISC::GET_GAME_TIMER();
		}
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 840.267f, -2312.316f, 29.342f, 863.364f, -2314.499f, 32.342f, 72f, 0, 1, 0))
		{
			if (GlobalFunc_588(&iLocal_3381, 15000))
			{
				return 1;
			}
		}
		else
		{
			if (iLocal_3382 == 0)
			{
				iLocal_3382 = MISC::GET_GAME_TIMER();
			}
			if (GlobalFunc_588(&iLocal_3382, 10000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_786(int iParam0, int iParam1)//Position - 0x77438
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, 1))
			{
				if (iVar0 == joaat("weapon_heavysniper") || iVar0 == joaat("weapon_sniperrifle"))
				{
					if ((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_heavysniper"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_sniperrifle"), 0)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_787()//Position - 0x774AD
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "REACT_Explosion", 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi4", "REACT_Explosion") > 0.7f)
		{
			func_788(-2017877118, 1);
		}
	}
}

void func_788(int iParam0, bool bParam1)//Position - 0x774F0
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0) == 1)
	{
		iVar4 = 28;
		GlobalFunc_612(&iVar0, &iVar1, &uVar2, &iVar3, 0);
		if (!PAD::IS_LOOK_INVERTED())
		{
			iVar3 = (iVar3 * -1);
		}
		if (bParam1)
		{
			if (((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		else if ((((((((iVar1 > iVar4 || iVar1 < (iVar4 * -1)) || iVar0 > iVar4) || iVar0 < (iVar4 * -1)) || PAD::IS_CONTROL_PRESSED(0, 21)) || PAD::IS_CONTROL_PRESSED(0, 22)) || PAD::IS_CONTROL_PRESSED(0, 23)) || PAD::IS_CONTROL_PRESSED(0, 24)) || PAD::IS_CONTROL_PRESSED(0, 25))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}


int func_790()//Position - 0x776AD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	switch (iLocal_3254)
	{
		case 0:
			func_801();
			if (iLocal_3229 > 3)
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1191, 0);
				AUDIO::DISTANT_COP_CAR_SIRENS(1);
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3409, "Distant_Sirens", 913.6f, -2301.6f, 34f, "FBI_04_HEAT_SOUNDS", 0, 0, 0);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
				{
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1191, 1);
				}
				GlobalFunc_2903(uLocal_3098[0], 4000);
				GlobalFunc_2903(uLocal_3098[2], 4000);
				iLocal_3229 = 4;
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3292 = MISC::GET_GAME_TIMER();
				if (ENTITY::DOES_ENTITY_EXIST(Local_1644))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1644);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1644.f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_1664))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1664);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1664.f_1);
				STREAMING::REMOVE_PTFX_ASSET();
				STREAMING::REMOVE_ANIM_DICT("missfbi4");
				STREAMING::REMOVE_ANIM_DICT("misssagrab");
				STREAMING::REMOVE_ANIM_DICT("missheat");
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				iLocal_3254++;
				GlobalFunc_11089(3, "Start of Shootout", 0, 0, 0, 1);
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_1724[0 /*20*/].f_1);
			STREAMING::REQUEST_MODEL(Local_1724[8 /*20*/].f_1);
			STREAMING::REQUEST_MODEL(Local_1221[0 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_1432[0 /*15*/].f_1);
			VEHICLE::REQUEST_VEHICLE_ASSET(Local_1221[0 /*15*/].f_1, 15);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1432[0 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1432[1 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[0 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[1 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[2 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[3 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[4 /*15*/].f_13, "lkfbi4");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1221[5 /*15*/].f_13, "lkfbi4");
			if (bLocal_3179)
			{
				if ((((((((((((STREAMING::HAS_MODEL_LOADED(Local_1724[0 /*20*/].f_1) && STREAMING::HAS_MODEL_LOADED(Local_1724[8 /*20*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1221[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1432[0 /*15*/].f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1221[0 /*15*/].f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1432[0 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1432[1 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[0 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[1 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[2 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[3 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[4 /*15*/].f_13, "lkfbi4")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1221[5 /*15*/].f_13, "lkfbi4"))
				{
					if (GlobalFunc_588(&iLocal_3292, 10000))
					{
						iLocal_3291 = func_746();
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
						STREAMING::SET_PED_POPULATION_BUDGET(0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						PED::SET_CREATE_RANDOM_COPS(0);
						MISC::SET_FAKE_WANTED_LEVEL(4);
						Local_1221[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[0 /*15*/].f_1, Local_1221[0 /*15*/].f_3, Local_1221[0 /*15*/].f_6, 1, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1221[0 /*15*/], 1);
						VEHICLE::SET_VEHICLE_SIREN(Local_1221[0 /*15*/], 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1221[0 /*15*/], Local_1221[0 /*15*/].f_13, "lkfbi4", 1);
						Local_1221[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[2 /*15*/].f_1, Local_1221[2 /*15*/].f_3, Local_1221[2 /*15*/].f_6, 1, 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1221[2 /*15*/], 1);
						VEHICLE::SET_VEHICLE_SIREN(Local_1221[2 /*15*/], 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1221[2 /*15*/], Local_1221[2 /*15*/].f_13, "lkfbi4", 1);
						func_800(&(Local_1724[0 /*20*/]), &(Local_1221[0 /*15*/]), -1, 0);
						func_581(&(Local_1724[0 /*20*/]), 1);
						func_800(&(Local_1724[1 /*20*/]), &(Local_1221[0 /*15*/]), 0, 0);
						func_581(&(Local_1724[1 /*20*/]), 1);
						func_800(&(Local_1724[4 /*20*/]), &(Local_1221[2 /*15*/]), -1, 0);
						func_581(&(Local_1724[4 /*20*/]), 1);
						func_800(&(Local_1724[5 /*20*/]), &(Local_1221[2 /*15*/]), 0, 0);
						func_581(&(Local_1724[5 /*20*/]), 1);
						iLocal_3291 = func_746();
						iLocal_3292 = MISC::GET_GAME_TIMER();
						iLocal_3254++;
					}
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_3292, 1500))
			{
				Local_1221[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[1 /*15*/].f_1, Local_1221[1 /*15*/].f_3, Local_1221[1 /*15*/].f_6, 1, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1221[1 /*15*/], 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_1221[1 /*15*/], 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1221[1 /*15*/], Local_1221[1 /*15*/].f_13, "lkfbi4", 1);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1221[1 /*15*/], 0.9f);
				Local_1221[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[3 /*15*/].f_1, Local_1221[3 /*15*/].f_3, Local_1221[3 /*15*/].f_6, 1, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1221[3 /*15*/], 1);
				VEHICLE::SET_VEHICLE_SIREN(Local_1221[3 /*15*/], 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1221[3 /*15*/], Local_1221[3 /*15*/].f_13, "lkfbi4", 1);
				func_800(&(Local_1724[2 /*20*/]), &(Local_1221[1 /*15*/]), -1, 0);
				func_581(&(Local_1724[2 /*20*/]), 1);
				func_800(&(Local_1724[3 /*20*/]), &(Local_1221[1 /*15*/]), 0, 0);
				func_581(&(Local_1724[3 /*20*/]), 1);
				func_800(&(Local_1724[6 /*20*/]), &(Local_1221[3 /*15*/]), -1, 0);
				func_581(&(Local_1724[6 /*20*/]), 1);
				func_800(&(Local_1724[7 /*20*/]), &(Local_1221[3 /*15*/]), 0, 0);
				func_581(&(Local_1724[7 /*20*/]), 1);
				iLocal_3254++;
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_3292, 10000))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_PREP_FOR_COPS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_PREP_FOR_COPS");
				}
				AUDIO::START_AUDIO_SCENE("FBI_4_COPS_ARRIVE");
				AUDIO::START_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_3098[0], "FBI_4_BUDDIES_GROUP", 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_3098[2], "FBI_4_BUDDIES_GROUP", 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(uLocal_3098[0], 1, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(uLocal_3098[2], 1, -1, 0);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3409))
				{
					AUDIO::STOP_SOUND(iLocal_3409);
				}
				AUDIO::DISTANT_COP_CAR_SIRENS(0);
				GlobalFunc_2511(&uLocal_3098, 0, 2, 1);
				bLocal_3178 = true;
				iLocal_3249 = MISC::GET_GAME_TIMER();
				iLocal_3288 = MISC::GET_GAME_TIMER();
				iLocal_3254++;
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&iLocal_3249, 2000))
			{
				GlobalFunc_159("cntry_help5", 13000);
				iLocal_3292 = MISC::GET_GAME_TIMER();
				iLocal_3254++;
			}
			break;
		
		case 5:
			if (bLocal_3179)
			{
				if (func_778(&Local_1724) >= 1 || GlobalFunc_588(&iLocal_3292, 5000))
				{
					func_582(&(Local_1724[14 /*20*/]), 0);
					func_581(&(Local_1724[14 /*20*/]), 1);
					func_582(&(Local_1724[15 /*20*/]), 0);
					func_581(&(Local_1724[15 /*20*/]), 1);
					iLocal_3292 = MISC::GET_GAME_TIMER();
					iLocal_3254++;
				}
			}
			break;
		
		case 6:
			if (func_778(&Local_1724) >= 7)
			{
				if (func_799())
				{
					GlobalFunc_2518(&uLocal_3098, 1, 0);
					GlobalFunc_2518(&uLocal_3098, 2, 0);
					GlobalFunc_2518(&uLocal_3098, 0, 1);
					GlobalFunc_2511(&uLocal_3098, 0, 2, 1);
					bLocal_3202 = true;
					iLocal_3381 = MISC::GET_GAME_TIMER();
					iLocal_3254++;
				}
			}
			break;
		
		case 7:
			func_797();
			iLocal_3363 = 0;
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iLocal_3363++;
				}
				iVar0++;
			}
			iVar0 = 16;
			while (iVar0 <= 18)
			{
				if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iLocal_3363++;
				}
				iVar0++;
			}
			if (iLocal_3363 >= 1)
			{
				func_582(&(Local_1724[19 /*20*/]), 0);
				func_581(&(Local_1724[19 /*20*/]), 1);
				Local_1432[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1432[0 /*15*/].f_1, Local_1432[0 /*15*/].f_3, Local_1432[0 /*15*/].f_6, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1432[0 /*15*/], 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1432[0 /*15*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1432[0 /*15*/], Local_1432[0 /*15*/].f_13, "lkfbi4", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1432[0 /*15*/], 5000f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1432[0 /*15*/], 2.2f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1432[0 /*15*/], 1);
				func_800(&(Local_2526[0 /*20*/]), &(Local_1432[0 /*15*/]), -1, 0);
				func_581(&(Local_2526[0 /*20*/]), 1);
				func_800(&(Local_1724[21 /*20*/]), &(Local_1432[0 /*15*/]), 1, 0);
				func_581(&(Local_1724[21 /*20*/]), 1);
				PED::ADD_ARMOUR_TO_PED(Local_1724[21 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[21 /*20*/]));
				func_800(&(Local_1724[22 /*20*/]), &(Local_1432[0 /*15*/]), 2, 0);
				func_581(&(Local_1724[22 /*20*/]), 1);
				PED::ADD_ARMOUR_TO_PED(Local_1724[22 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[22 /*20*/]));
				VEHICLE::REQUEST_VEHICLE_ASSET(Local_1432[0 /*15*/].f_1, 15);
				iLocal_3254++;
			}
			break;
		
		case 8:
			func_797();
			if (!ENTITY::IS_ENTITY_DEAD(Local_1432[0 /*15*/]))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 28000f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_1432[0 /*15*/], 0.1f);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1432[0 /*15*/]) > 28500f)
				{
					if (!Local_1724[23 /*20*/].f_14)
					{
						if (!PED::IS_PED_INJURED(Local_1724[21 /*20*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_1724[21 /*20*/], Local_1432[0 /*15*/], 0))
							{
								func_800(&(Local_1724[23 /*20*/]), &(Local_1432[0 /*15*/]), 1, 0);
								func_581(&(Local_1724[23 /*20*/]), 1);
								PED::ADD_ARMOUR_TO_PED(Local_1724[23 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[23 /*20*/]));
							}
						}
						else
						{
							func_800(&(Local_1724[23 /*20*/]), &(Local_1432[0 /*15*/]), 1, 0);
							func_581(&(Local_1724[23 /*20*/]), 1);
							PED::ADD_ARMOUR_TO_PED(Local_1724[23 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[23 /*20*/]));
						}
					}
					if (!Local_1724[24 /*20*/].f_14)
					{
						if (!PED::IS_PED_INJURED(Local_1724[22 /*20*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_1724[22 /*20*/], Local_1432[0 /*15*/], 0))
							{
								func_800(&(Local_1724[24 /*20*/]), &(Local_1432[0 /*15*/]), 2, 0);
								func_581(&(Local_1724[24 /*20*/]), 1);
								PED::ADD_ARMOUR_TO_PED(Local_1724[24 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[24 /*20*/]));
							}
						}
						else
						{
							func_800(&(Local_1724[24 /*20*/]), &(Local_1432[0 /*15*/]), 2, 0);
							func_581(&(Local_1724[24 /*20*/]), 1);
							PED::ADD_ARMOUR_TO_PED(Local_1724[24 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[24 /*20*/]));
						}
					}
					if (!Local_1724[25 /*20*/].f_14)
					{
						if (Local_1724[23 /*20*/].f_14)
						{
							if (!PED::IS_PED_INJURED(Local_1724[23 /*20*/]))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_1724[23 /*20*/], Local_1432[0 /*15*/], 0))
								{
									func_800(&(Local_1724[25 /*20*/]), &(Local_1432[0 /*15*/]), 1, 0);
									func_581(&(Local_1724[25 /*20*/]), 1);
									PED::ADD_ARMOUR_TO_PED(Local_1724[25 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[25 /*20*/]));
								}
							}
							else
							{
								func_800(&(Local_1724[25 /*20*/]), &(Local_1432[0 /*15*/]), 1, 0);
								func_581(&(Local_1724[25 /*20*/]), 1);
								PED::ADD_ARMOUR_TO_PED(Local_1724[25 /*20*/], -PED::GET_PED_ARMOUR(Local_1724[25 /*20*/]));
							}
						}
					}
				}
			}
			else
			{
				Local_1724[23 /*20*/].f_14 = 1;
				Local_1724[24 /*20*/].f_14 = 1;
				Local_1724[25 /*20*/].f_14 = 1;
			}
			if ((Local_1724[23 /*20*/].f_14 && Local_1724[24 /*20*/].f_14) && Local_1724[25 /*20*/].f_14)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1432[0 /*15*/], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1432[0 /*15*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_1432[0 /*15*/], 1.1f);
					}
				}
				iLocal_3254++;
			}
			break;
		
		case 9:
			func_797();
			iLocal_3363 = 0;
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iLocal_3363++;
				}
				iVar0++;
			}
			iVar0 = 16;
			while (iVar0 <= 19)
			{
				if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iLocal_3363++;
				}
				iVar0++;
			}
			iVar0 = 21;
			while (iVar0 <= 25)
			{
				if (PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iLocal_3363++;
				}
				iVar0++;
			}
			if (iLocal_3363 >= 8)
			{
				if (func_796())
				{
					iVar0 = 0;
					while (iVar0 <= 7)
					{
						if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
						{
							iLocal_3366++;
						}
						iVar0++;
					}
					iVar0 = 14;
					while (iVar0 <= 15)
					{
						if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
						{
							iLocal_3366++;
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_2647 - 1))
					{
						if (!PED::IS_PED_INJURED(Local_2647[iVar0 /*20*/]))
						{
							iLocal_3366++;
						}
						iVar0++;
					}
					iLocal_3384 = iLocal_3366 + 4;
					bLocal_3203 = true;
					RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
					iLocal_3254++;
				}
			}
			break;
		
		case 10:
			func_794();
			iVar1 = 0;
			iVar0 = 27;
			while (iVar0 <= 30)
			{
				if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 14;
			while (iVar0 <= 15)
			{
				if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_2647 - 1))
			{
				if (!PED::IS_PED_INJURED(Local_2647[iVar0 /*20*/]))
				{
					iVar1++;
				}
				iVar0++;
			}
			if ((iLocal_3384 - iVar1) >= 3)
			{
				func_582(&(Local_1724[8 /*20*/]), 0);
				func_581(&(Local_1724[8 /*20*/]), 1);
				HUD::REMOVE_BLIP(&(Local_1724[8 /*20*/].f_2));
				func_582(&(Local_1724[9 /*20*/]), 0);
				func_581(&(Local_1724[9 /*20*/]), 1);
				HUD::REMOVE_BLIP(&(Local_1724[9 /*20*/].f_2));
				func_582(&(Local_1724[31 /*20*/]), 0);
				func_581(&(Local_1724[31 /*20*/]), 1);
				HUD::REMOVE_BLIP(&(Local_1724[31 /*20*/].f_2));
				if (GlobalFunc_8315() != 2)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_3098[2], joaat("weapon_sniperrifle"), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_3098[2], joaat("weapon_sniperrifle"), 1);
					}
				}
				bLocal_3204 = true;
				iLocal_3292 = 0;
				iLocal_3254++;
			}
			break;
		
		case 11:
			func_797();
			func_794();
			iLocal_3292 = 0;
			iLocal_3254++;
			break;
		
		case 12:
			func_797();
			func_794();
			if ((PED::IS_PED_INJURED(Local_1724[8 /*20*/]) && PED::IS_PED_INJURED(Local_1724[9 /*20*/])) && PED::IS_PED_INJURED(Local_1724[31 /*20*/]))
			{
				if (iLocal_3292 == 0)
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
					iLocal_3292 = MISC::GET_GAME_TIMER();
				}
				if (!Local_1724[34 /*20*/].f_14)
				{
					func_582(&(Local_1724[34 /*20*/]), 0);
					func_581(&(Local_1724[34 /*20*/]), 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
				{
					if (iLocal_3358 > 0)
					{
						if (!iLocal_3199)
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_3098[0], 845.8183f, -2332.28f, 29.3346f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_3098[0], 75.8831f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(uLocal_3098[0], 845.6603f, -2332.308f, 29.3346f, -1, 0, 0f, 1, 0, uLocal_3471, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3098[0], 0, 0);
							iLocal_3199 = 1;
						}
					}
				}
				if ((GlobalFunc_8315() == 0 || GlobalFunc_8315() == 1) || GlobalFunc_588(&iLocal_3292, 10000))
				{
					iVar2 = 0;
					Local_1221[5 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[5 /*15*/].f_1, Local_1221[5 /*15*/].f_3, Local_1221[5 /*15*/].f_6, 1, 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1221[5 /*15*/], 1);
					VEHICLE::SET_VEHICLE_SIREN(Local_1221[5 /*15*/], 1);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1221[5 /*15*/], Local_1221[5 /*15*/].f_13, "lkfbi4", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1221[5 /*15*/], 1500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1221[5 /*15*/], 1);
					func_800(&(Local_1724[32 /*20*/]), &(Local_1221[5 /*15*/]), -1, 0);
					func_581(&(Local_1724[32 /*20*/]), 1);
					func_800(&(Local_1724[33 /*20*/]), &(Local_1221[5 /*15*/]), 0, 0);
					func_581(&(Local_1724[33 /*20*/]), 1);
					func_582(&(Local_1724[35 /*20*/]), 0);
					func_581(&(Local_1724[35 /*20*/]), 1);
					iVar0 = 12;
					while (iVar0 <= 13)
					{
						if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iVar0 = 16;
					while (iVar0 <= 18)
					{
						if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iVar0 = 21;
					while (iVar0 <= 25)
					{
						if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_2708 - 1))
					{
						if (!PED::IS_PED_INJURED(Local_2708[iVar0 /*20*/]))
						{
							iVar2++;
						}
						iVar0++;
					}
					iLocal_3385 = iVar2 + 4;
					iLocal_3254++;
				}
			}
			break;
		
		case 13:
			iVar3 = 0;
			iVar0 = 12;
			while (iVar0 <= 13)
			{
				if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 16;
			while (iVar0 <= 18)
			{
				if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 21;
			while (iVar0 <= 25)
			{
				if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 32;
			while (iVar0 <= 35)
			{
				if (!PED::IS_PED_INJURED(Local_1724[32 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_2708 - 1))
			{
				if (!PED::IS_PED_INJURED(Local_2708[iVar0 /*20*/]))
				{
					iVar3++;
				}
				iVar0++;
			}
			if ((iLocal_3385 - iVar3) >= 3)
			{
				Local_1432[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1432[1 /*15*/].f_1, Local_1432[1 /*15*/].f_3, Local_1432[1 /*15*/].f_6, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(Local_1432[1 /*15*/], 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_1432[1 /*15*/]);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1432[1 /*15*/], Local_1432[1 /*15*/].f_13, "lkfbi4", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1432[1 /*15*/], 1000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1432[1 /*15*/], 1);
				VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_1432[1 /*15*/], 1, 1);
				func_800(&(Local_2526[1 /*20*/]), &(Local_1432[1 /*15*/]), -1, 0);
				func_581(&(Local_2526[1 /*20*/]), 1);
				func_800(&(Local_1724[10 /*20*/]), &(Local_1432[1 /*15*/]), 1, 0);
				func_581(&(Local_2526[1 /*20*/]), 1);
				func_800(&(Local_1724[11 /*20*/]), &(Local_1432[1 /*15*/]), 2, 0);
				func_581(&(Local_2526[1 /*20*/]), 1);
				bLocal_3205 = true;
				if (GlobalFunc_8315() != 2)
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_3098[2], joaat("weapon_rpg"), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_3098[2], joaat("weapon_rpg"), 1);
					}
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_3098[2], 0);
				}
				MISC::SET_FAKE_WANTED_LEVEL(3);
				iLocal_3254++;
			}
			break;
		
		case 14:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1432[1 /*15*/]))
			{
				GlobalFunc_2518(&uLocal_3098, 0, 0);
				GlobalFunc_2518(&uLocal_3098, 1, 0);
				GlobalFunc_2518(&uLocal_3098, 2, 0);
				GlobalFunc_553(308);
				iVar0 = 0;
				while (iVar0 <= (Local_1724 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/]) > 125)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_1724[iVar0 /*20*/], 125);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1724[iVar0 /*20*/], 37, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1724[iVar0 /*20*/], 0);
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_1724[iVar0 /*20*/], 886.087f, -2332.138f, 29.331f, 883.225f, -2365.516f, 32.331f, 15.5f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1724[iVar0 /*20*/], 200f, 0);
							iLocal_1126[iVar0] = 5;
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2647 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_2647[iVar0 /*20*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_2647[iVar0 /*20*/]) > 125)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_2647[iVar0 /*20*/], 125);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2647[iVar0 /*20*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2647[iVar0 /*20*/], 37, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2647[iVar0 /*20*/], 0);
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_2647[iVar0 /*20*/], 886.087f, -2332.138f, 29.331f, 883.225f, -2365.516f, 32.331f, 15.5f, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2647[iVar0 /*20*/], 200f, 0);
							iLocal_1163[iVar0] = 5;
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (Local_2708 - 1))
				{
					if (!PED::IS_PED_INJURED(Local_2708[iVar0 /*20*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_2708[iVar0 /*20*/]) > 125)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_2708[iVar0 /*20*/], 125);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2708[iVar0 /*20*/], 0);
						}
					}
					iVar0++;
				}
				MISC::SET_FAKE_WANTED_LEVEL(2);
				RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
				iLocal_3254++;
			}
			break;
		
		case 15:
			iVar4 = ((func_778(&Local_1724) + func_792(&Local_2647)) + func_792(&Local_2708));
			if (iVar4 >= 39)
			{
				MISC::SET_FAKE_WANTED_LEVEL(1);
				iLocal_3254++;
			}
			switch (GlobalFunc_8315())
			{
				case 0:
					GlobalFunc_2511(&uLocal_3098, 1, 2, 2);
					break;
				
				case 1:
					GlobalFunc_2511(&uLocal_3098, 2, 0, 2);
					break;
				
				case 2:
					GlobalFunc_2511(&uLocal_3098, 0, 1, 0);
					break;
			}
			break;
		
		case 16:
			if (!GlobalFunc_2878(&uLocal_3098) && !Local_3142.f_16)
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_end_0", 7, 0, 0, 0))
				{
					func_791();
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3409))
					{
						AUDIO::STOP_SOUND(iLocal_3409);
					}
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3409, "Distant_Sirens", 844.7f, -2213.3f, 57.9f, 0, 0, 0, 0);
					func_534();
					PED::ADD_SCENARIO_BLOCKING_AREA(965.2f, -1693f, -100f, 1144.9f, -1929.1f, 100f, 0, 1, 1, 1);
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
					{
						func_313(uLocal_3098[2], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[2], 1);
						TASK::CLEAR_PED_TASKS(uLocal_3098[2]);
					}
					func_780(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 1);
						VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_1191, 1);
						GlobalFunc_5917(&Local_1191);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 1);
					}
					if (GlobalFunc_78(25, 0))
					{
						GlobalFunc_6682(&Local_3807, 25);
					}
					else
					{
						bLocal_3196 = true;
						Local_3807 = { 1121.03f, -1249.9f, 19.57f };
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_3098[0], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_3098[1], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_3098[2], 0);
					}
					if (GlobalFunc_8315() == 1)
					{
						GlobalFunc_2518(&uLocal_3098, 0, 0);
						GlobalFunc_2518(&uLocal_3098, 1, 0);
						GlobalFunc_2518(&uLocal_3098, 2, 0);
						GlobalFunc_729(&uLocal_3098, 0, 1);
						GlobalFunc_729(&uLocal_3098, 1, 1);
						GlobalFunc_729(&uLocal_3098, 2, 1);
						if (HUD::DOES_BLIP_EXIST(uLocal_3451))
						{
							HUD::REMOVE_BLIP(&uLocal_3451);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_3450))
						{
							HUD::REMOVE_BLIP(&uLocal_3450);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_3452))
						{
							HUD::REMOVE_BLIP(&uLocal_3452);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_3098[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						GlobalFunc_11089(4, "burn the truck", 1, 0, 0, 1);
						iLocal_3225 = MISC::GET_GAME_TIMER();
						iLocal_3379 = MISC::GET_GAME_TIMER();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1176, 1);
							ENTITY::SET_ENTITY_PROOFS(Local_1176, 0, 0, 0, 0, 0, 0, 0, 0);
						}
						GlobalFunc_2919(&Local_3073, 1);
						iLocal_1125 = 8;
					}
					else
					{
						GlobalFunc_2518(&uLocal_3098, 0, 0);
						GlobalFunc_2518(&uLocal_3098, 1, 1);
						GlobalFunc_2518(&uLocal_3098, 2, 0);
						GlobalFunc_729(&uLocal_3098, 0, 1);
						GlobalFunc_729(&uLocal_3098, 1, 0);
						GlobalFunc_729(&uLocal_3098, 2, 1);
						GlobalFunc_2511(&uLocal_3098, 1, 0, 1);
						iLocal_3406 = MISC::GET_GAME_TIMER();
						iLocal_1125 = 7;
					}
					return 1;
				}
			}
			break;
	}
	func_701(&Local_1724, 1);
	func_700(&Local_2647);
	func_700(&Local_2708);
	return 0;
}

void func_791()//Position - 0x78F05
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_SHOOTOUT_TREVOR"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_4_SHOOTOUT_TREVOR");
	}
}

int func_792(int iParam0)//Position - 0x78F4C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*20*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}


void func_794()//Position - 0x78FF6
{
	if (bLocal_3179)
	{
		switch (iLocal_3365)
		{
			case 0:
				if (func_792(&Local_2708) >= 2)
				{
					func_795();
					func_795();
					iLocal_3365++;
				}
				break;
			
			case 1:
				if (func_792(&Local_2708) >= 1)
				{
					func_795();
					iLocal_3365++;
				}
				break;
			
			case 2:
				if (func_792(&Local_2708) >= 2)
				{
					func_795();
					iLocal_3365++;
				}
				break;
			
			case 3:
				if (func_792(&Local_2708) >= 3)
				{
					func_795();
					func_795();
					iLocal_3365 = 0;
				}
				break;
			}
	}
}

void func_795()//Position - 0x79090
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = iLocal_3361;
	while (iVar0 <= (Local_2708 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2708[iVar0 /*20*/]))
		{
			func_582(&(Local_2708[iVar0 /*20*/]), 0);
			func_581(&(Local_2708[iVar0 /*20*/]), 1);
			iLocal_1167[iVar0] = 0;
			iLocal_3361++;
			if (iLocal_3361 >= Local_2708)
			{
				iLocal_3361 = 0;
			}
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3361 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2708[iVar0 /*20*/]))
		{
			func_582(&(Local_2708[iVar0 /*20*/]), 0);
			func_581(&(Local_2708[iVar0 /*20*/]), 1);
			iLocal_1167[iVar0] = 0;
			iLocal_3361++;
			if (iLocal_3361 >= Local_2708)
			{
				iLocal_3361 = 0;
			}
			return;
		}
		iVar0++;
	}
}

int func_796()//Position - 0x79157
{
	switch (iLocal_3398)
	{
		case 0:
			Local_1221[4 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1221[4 /*15*/].f_1, Local_1221[4 /*15*/].f_3, Local_1221[4 /*15*/].f_6, 1, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1221[4 /*15*/], 1);
			VEHICLE::SET_VEHICLE_SIREN(Local_1221[4 /*15*/], 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1221[4 /*15*/], Local_1221[4 /*15*/].f_13, "lkfbi4", 1);
			func_800(&(Local_1724[27 /*20*/]), &(Local_1221[4 /*15*/]), -1, 0);
			func_581(&(Local_1724[27 /*20*/]), 1);
			func_800(&(Local_1724[28 /*20*/]), &(Local_1221[4 /*15*/]), 0, 0);
			func_581(&(Local_1724[28 /*20*/]), 1);
			iLocal_3398++;
			break;
		
		case 1:
			func_582(&(Local_1724[29 /*20*/]), 0);
			func_581(&(Local_1724[29 /*20*/]), 1);
			iLocal_3398++;
			break;
		
		case 2:
			func_582(&(Local_1724[30 /*20*/]), 0);
			func_581(&(Local_1724[30 /*20*/]), 1);
			iLocal_3398++;
			return 1;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_797()//Position - 0x7926E
{
	int iVar0;
	
	if (bLocal_3179)
	{
		iVar0 = 0;
		iLocal_3396 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_1724 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_1724[iVar0 /*20*/]))
			{
				iLocal_3396++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_2647 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_2647[iVar0 /*20*/]))
			{
				iLocal_3396++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_2708 - 1))
		{
			if (!PED::IS_PED_INJURED(Local_2708[iVar0 /*20*/]))
			{
				iLocal_3396++;
			}
			iVar0++;
		}
		if (iLocal_3396 < 10)
		{
			switch (iLocal_3364)
			{
				case 0:
					if (func_792(&Local_2647) >= 2)
					{
						func_798();
						func_798();
						iLocal_3364++;
					}
					break;
				
				case 1:
					if (func_792(&Local_2647) >= 1)
					{
						func_798();
						iLocal_3364++;
					}
					break;
				
				case 2:
					if (func_792(&Local_2647) >= 2)
					{
						func_798();
						func_798();
						iLocal_3364 = 0;
					}
					break;
				}
			}
	}
}

void func_798()//Position - 0x7937E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = iLocal_3360;
	while (iVar0 <= (Local_2647 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2647[iVar0 /*20*/]))
		{
			func_582(&(Local_2647[iVar0 /*20*/]), 0);
			func_581(&(Local_2647[iVar0 /*20*/]), 1);
			iLocal_1163[iVar0] = 0;
			iLocal_3360++;
			if (iLocal_3360 >= Local_2647)
			{
				iLocal_3360 = 0;
			}
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_3360 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2647[iVar0 /*20*/]))
		{
			func_582(&(Local_2647[iVar0 /*20*/]), 0);
			func_581(&(Local_2647[iVar0 /*20*/]), 1);
			iLocal_1163[iVar0] = 0;
			iLocal_3360++;
			if (iLocal_3360 >= Local_2647)
			{
				iLocal_3360 = 0;
			}
			return;
		}
		iVar0++;
	}
}

int func_799()//Position - 0x79445
{
	switch (iLocal_3397)
	{
		case 0:
			func_582(&(Local_1724[12 /*20*/]), 0);
			func_581(&(Local_1724[12 /*20*/]), 1);
			iLocal_3397++;
			break;
		
		case 1:
			func_582(&(Local_1724[13 /*20*/]), 0);
			func_581(&(Local_1724[13 /*20*/]), 1);
			iLocal_3397++;
			break;
		
		case 2:
			func_582(&(Local_1724[16 /*20*/]), 0);
			func_581(&(Local_1724[16 /*20*/]), 1);
			iLocal_3397++;
			break;
		
		case 3:
			func_582(&(Local_1724[17 /*20*/]), 0);
			func_581(&(Local_1724[17 /*20*/]), 1);
			iLocal_3397++;
			break;
		
		case 4:
			func_582(&(Local_1724[18 /*20*/]), 0);
			func_581(&(Local_1724[18 /*20*/]), 1);
			iLocal_3397++;
			return 1;
			break;
		
		case 5:
			return 1;
			break;
	}
	return 0;
}

void func_800(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x79534
{
	MISC::CLEAR_AREA(uParam0->f_3, 2f, 1, 0, 0, 0);
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam1, 6, uParam0->f_1, iParam2, 1, 1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, 1);
	PED::SET_PED_AS_ENEMY(*uParam0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, 1, 0);
	PED::SET_PED_KEEP_TASK(*uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_15, -1, 1, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_11);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_10);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_10);
	if (uParam0->f_12)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, 1);
	}
	if (uParam0->f_13)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_MONEY(*uParam0, 0);
	uParam0->f_14 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_16));
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	if (bParam3)
	{
		uParam0->f_2 = GlobalFunc_6797(*uParam0, 1, 145);
		HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	}
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
	GlobalFunc_722(*uParam0, 311);
	GlobalFunc_593(*uParam0, 0);
}

void func_801()//Position - 0x79659
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 893.272f, -2360.499f, 29.293f, 886.701f, -2359.877f, 31.893f, 5.5f, 0, 1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1684) || ENTITY::DOES_ENTITY_EXIST(Local_1704))
		{
			if (!PED::IS_PED_INJURED(Local_1684) || !PED::IS_PED_INJURED(Local_1704))
			{
				if (!PED::IS_PED_INJURED(Local_1684))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 150319005) != 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1684, 2000, 0, 2);
					}
				}
				else if (!PED::IS_PED_INJURED(Local_1704))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 150319005) != 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1704, 2000, 0, 2);
					}
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 150319005) == 1)
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 150319005) == 1)
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
}

void func_802(var uParam0)//Position - 0x79755
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (PED::IS_PED_INJURED(*uParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (GlobalFunc_8315() == 2)
				{
					bLocal_3217 = true;
				}
				else
				{
					bLocal_3217 = false;
				}
			}
		}
	}
}

void func_803()//Position - 0x79793
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_3098[0], 227, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[1]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_3098[1], 227, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3098[2]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_3098[2], 227, 1);
		}
	}
}

void func_804()//Position - 0x79813
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 787.998f, -2336.441f, 29.2f, 933.748f, -2351.246f, 80.35f, 126.3f, 0, 1, 0))
	{
		bLocal_3179 = true;
		if (iLocal_3180)
		{
			if (GlobalFunc_663(sLocal_3446, 0, 0))
			{
				HUD::CLEAR_THIS_PRINT(sLocal_3446);
				iLocal_3180 = 0;
			}
		}
		iLocal_3241 = MISC::GET_GAME_TIMER();
	}
	else
	{
		bLocal_3179 = false;
		if (!iLocal_3180)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					GlobalFunc_164("cntry_area1", 7500, 1);
					sLocal_3446 = "cntry_area1";
					break;
				
				case 1:
					GlobalFunc_164("cntry_area2", 7500, 1);
					sLocal_3446 = "cntry_area2";
					break;
				
				case 2:
					GlobalFunc_164("cntry_area0", 7500, 1);
					sLocal_3446 = "cntry_area0";
					break;
			}
			iLocal_3180 = 1;
		}
		if (GlobalFunc_588(&iLocal_3241, 10000))
		{
			if (!Local_3142.f_16)
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						sLocal_3447 = "cntry_fail10";
						break;
					
					case 1:
						sLocal_3447 = "cntry_fail11";
						break;
					
					case 2:
						sLocal_3447 = "cntry_fail9";
						break;
				}
				iLocal_3189 = 1;
			}
		}
	}
}

void func_805()//Position - 0x7993F
{
	GlobalFunc_587();
	func_774();
	func_811();
	func_804();
	func_810();
	func_809();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	switch (iLocal_3230)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_3028.f_2);
			Local_1684 = PED::CREATE_PED(26, Local_1684.f_1, Local_1684.f_3, Local_1684.f_9, 1, 1);
			ENTITY::SET_ENTITY_COLLISION(Local_1684, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1684, 1);
			ENTITY::SET_ENTITY_VISIBLE(Local_1684, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1684, 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 6, Local_1684, "AGENT1", 0, 1);
			PED::SET_PED_NAME_DEBUG(Local_1684, &(Local_1684.f_16));
			iLocal_3230++;
			break;
		
		case 1:
			if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("weapon_stickybomb"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("weapon_proxmine"), 0))
			{
				RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_PLANT_BOMB_MA");
				TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Heat1assists");
				if (HUD::DOES_BLIP_EXIST(uLocal_3449))
				{
					HUD::REMOVE_BLIP(&uLocal_3449);
				}
				HUD::CLEAR_THIS_PRINT("cntry_god7");
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
				iLocal_3177 = 0;
				iLocal_3239 = MISC::GET_GAME_TIMER();
				iLocal_3191 = 1;
				GlobalFunc_11089(2, "Detonate C4", 0, 0, 0, 1);
				iLocal_3230++;
			}
			break;
		
		case 2:
			if (!func_709("cntry_god8"))
			{
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					GlobalFunc_164("cntry_god8", 5000, 1);
					func_706("cntry_god8", 1);
				}
			}
			if (!iLocal_3177)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 891.7935f, -2357.598f, 29.3537f, 1) > 6f)
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_159("cntry_help3", -1);
					iLocal_3225 = MISC::GET_GAME_TIMER();
					iLocal_3177 = 1;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 891.7935f, -2357.598f, 29.3537f, 1) < 50f)
			{
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (!func_709("heat_c4_3"))
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_c4_3", 7, 0, 0, 0))
						{
							func_706("heat_c4_3", 1);
						}
					}
					else if (GlobalFunc_588(&iLocal_3225, 10000))
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_c4_4", 7, 0, 0, 0))
						{
							iLocal_3225 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (!func_709("heat_c4_5"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 891.7935f, -2357.598f, 29.3537f, 1) > 22f)
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_c4_5", 6, 0, 0, 0))
					{
						func_706("heat_c4_5", 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 893.067f, -2361.493f, 29.32f, 887.091f, -2360.959f, 33.32f, 4.5f, 0, 1, 0))
			{
				iLocal_3190 = 1;
			}
			else if (GlobalFunc_588(&iLocal_3239, 10000) || iLocal_3190)
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "fbi4_c4_0", 7, 0, 0, 0))
				{
					iLocal_3239 = MISC::GET_GAME_TIMER();
					iLocal_3190 = 0;
				}
			}
			if (func_808())
			{
				WEAPON::REMOVE_ALL_PROJECTILES_OF_TYPE(joaat("weapon_grenade"), 0);
				MISC::CLEAR_AREA(889.7f, -2362.58f, 30.24f, 50f, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1191, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_1191, 1, 1, 1, 1, 1, 0, 0, 0);
				HUD::CLEAR_HELP(1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_RIG_EXPLOSIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_RIG_EXPLOSIVES");
				}
				iLocal_3225 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 893.067f, -2361.493f, 29.32f, 887.091f, -2360.959f, 33.32f, 4.5f, 0, 1, 0))
				{
					if (func_591(1, 1, 1, 1, 0))
					{
						func_806();
						iLocal_3230++;
					}
				}
				else
				{
					FIRE::ADD_EXPLOSION_WITH_USER_VFX(889.7f, -2362.58f, 30.24f, 0, MISC::GET_HASH_KEY("EXP_VFXTAG_FBI4_TRUCK_DOORS"), 0.5f, 1, 0, 1065353216);
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_3258, "FBI_04_HEAT_C4_DOORS", 0, 1);
					OBJECT::DELETE_OBJECT(&Local_2932);
					ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 2);
				}
			}
			break;
		
		case 3:
			if (func_806())
			{
				if (STREAMING::HAS_MODEL_LOADED(Local_3028.f_2))
				{
					Local_3028 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_3028.f_2, Local_3028.f_3, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(Local_3028, Local_3028.f_12, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3028, 1);
				}
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 0);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 1);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 2);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 3);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 4);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 5);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 6);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 7);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, uLocal_3098[0], "michael", 0, 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, uLocal_3098[2], "trevor", 0, 1);
				iLocal_3229 = 2;
				func_774();
				func_742();
				func_741();
				iLocal_3225 = MISC::GET_GAME_TIMER();
				GlobalFunc_11089(2, "Detonate C4", 0, 0, 0, 1);
				iLocal_1125 = 6;
			}
			break;
	}
}

int func_806()//Position - 0x79E9D
{
	struct<3> Var0;
	
	switch (iLocal_3256)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1684))
			{
				PED::DELETE_PED(&Local_1684);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1684.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1664))
			{
				PED::DELETE_PED(&Local_1664);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1664.f_1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_1176, 1, 1, 1, 1, 1, 0, 0, 0);
			}
			MISC::CLEAR_AREA(889.7411f, -2345.456f, 29.3307f, 1000f, 1, 0, 0, 0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PED::SET_CREATE_RANDOM_COPS(0);
			if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_1191, 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1));
			}
			if (func_807())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 890.4393f, -2346.476f, 29.3416f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 184.3769f);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 3, 0, 0);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) < 3)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 3);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_1176, 901.9453f, -2383.368f, 29.2789f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1176, 341.1729f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_1206, 898.3076f, -2364.362f, 29.4919f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1206, 87.458f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1206);
			}
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 2, 0);
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_1191, 3, 0);
			FIRE::ADD_EXPLOSION_WITH_USER_VFX(889.7f, -2362.58f, 30.24f, 0, MISC::GET_HASH_KEY("EXP_VFXTAG_FBI4_TRUCK_DOORS"), 0.5f, 1, 0, 1065353216);
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_3258, "FBI_04_HEAT_C4_DOORS", 0, 1);
			OBJECT::DELETE_OBJECT(&Local_2932);
			uLocal_3454 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 888.9351f, -2355.473f, 29.95538f, 4.753477f, -1.775736f, -163.738f, 36.00951f, 0, 2);
			CAM::SET_CAM_ACTIVE(uLocal_3454, 1);
			CAM::SHAKE_CAM(uLocal_3454, "SMALL_EXPLOSION_SHAKE", 0.5f);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			AUDIO::TRIGGER_MUSIC_EVENT("fbi4_EXPLODE_MA");
			AUDIO::START_AUDIO_SCENE("FBI_4_EXPLOSION_RAYFIRE");
			iLocal_3225 = MISC::GET_GAME_TIMER();
			iLocal_3256++;
			break;
		
		case 1:
			if (GlobalFunc_588(&iLocal_3225, 1100))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_EXPLOSION_RAYFIRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_EXPLOSION_RAYFIRE");
				}
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "REACT_Explosion", 1000f, -4f, -1, 131072, 0.2f, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				AUDIO::START_AUDIO_SCENE("FBI_4_PREP_FOR_COPS");
				RECORDING::_0x81CBAE94390F9F89();
				func_561(0, 1, 0, 0f, 0f, 3000, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 22:
			break;
	}
	return 0;
}

int func_807()//Position - 0x7A1DE
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 897.491f, -2352.488f, 29.431f, 860.245f, -2349.099f, 32.331f, 28.2f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 897.491f, -2352.488f, 29.431f, 860.245f, -2349.099f, 32.331f, 28.2f, 0, 1, 0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 897.957f, -2352.269f, 29.358f, 884.508f, -2351.092f, 33.658f, 12.3f, 0, 1, 0))
		{
			if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
			{
				return 1;
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 894.352f, -2355.901f, 29.401f, 889.687f, -2355.331f, 33.641f, 13.4f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_808()//Position - 0x7A2C6
{
	if (!iLocal_3191)
	{
		if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("weapon_stickybomb"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("weapon_proxmine"), 0)) || (ENTITY::DOES_ENTITY_EXIST(Local_2932) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2932, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f, 0, 1, 0)))
		{
			iLocal_3191 = 1;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_2932))
	{
		if ((PAD::IS_CONTROL_PRESSED(0, 47) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(40, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f))
		{
			return 1;
		}
	}
	else if (((PAD::IS_CONTROL_PRESSED(0, 47) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(40, 891.202f, -2361.976f, 28.324f, 888.773f, -2361.656f, 31.824f, 1f)) || ENTITY::GET_ENTITY_HEALTH(Local_2932) < 990)
	{
		return 1;
	}
	return 0;
}

void func_809()//Position - 0x7A460
{
	switch (iLocal_3390)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206))
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_RIG_EXPLOSIVES");
					iLocal_3390++;
				}
			}
			break;
		
		case 1:
			break;
	}
}

void func_810()//Position - 0x7A4AE
{
	if (!bLocal_3179)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_3449))
		{
			HUD::REMOVE_BLIP(&uLocal_3449);
		}
	}
	else
	{
		switch (iLocal_3230)
		{
			case 0:
			case 1:
				if (!HUD::DOES_BLIP_EXIST(uLocal_3449))
				{
					uLocal_3449 = GlobalFunc_5104(889.7667f, -2361.806f, 29.2762f, 0);
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_3449, true);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_3449, "cntry_god21");
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_811()//Position - 0x7A527
{
	if (!GlobalFunc_5172(&Local_3073, 0))
	{
		switch (iLocal_3283)
		{
			case 0:
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_plant", 7, 0, 0, 0))
				{
					iLocal_3283++;
				}
				break;
			
			case 1:
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_c4_1", 7, 0, 0, 0))
				{
					iLocal_3283++;
				}
				break;
			
			case 2:
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_3449))
					{
						iLocal_3239 = MISC::GET_GAME_TIMER();
						GlobalFunc_164("cntry_god7", 7500, 1);
					}
					iLocal_3283++;
				}
				break;
			
			case 3:
				if (!HUD::DOES_BLIP_EXIST(uLocal_3449))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 891.7935f, -2357.598f, 29.3537f, 1) < 50f)
					{
						if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "fbi4_c4_0", 7, 0, 0, 0))
						{
							iLocal_3283++;
						}
					}
				}
				else if (GlobalFunc_588(&iLocal_3239, 15000))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_remind", 7, 0, 0, 0))
					{
						iLocal_3283++;
					}
				}
				break;
			}
	}
}


void func_813()//Position - 0x7A66E
{
	if (iLocal_3227 < 1)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (iLocal_3227)
	{
		case 0:
			func_821();
			func_820(0);
			func_818();
			if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
			{
				AUDIO::PREPARE_MUSIC_EVENT("FBI4_TRUCK_RAM_MA");
			}
			func_817();
			if (HUD::DOES_BLIP_EXIST(Local_1191.f_2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 907.426f, -2371.301f, 29.55f, 908.093f, -2362.426f, 33.55f, 5.8f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_HEADING(Local_1206) > 45f && ENTITY::GET_ENTITY_HEADING(Local_1206) < 135f)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1206, Local_1191))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_1206) >= 5f)
							{
								if (func_591(1, 1, 1, 0, 1))
								{
									func_814();
									iLocal_3227++;
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_814())
			{
				iLocal_3308 = MISC::GET_GAME_TIMER();
				uLocal_3449 = GlobalFunc_5104(889.7667f, -2361.806f, 29.2762f, 0);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_3449, true);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_3449, "cntry_god21");
				iLocal_3177 = 0;
				iLocal_1125 = 5;
			}
			break;
		
		case 2:
			break;
	}
}

int func_814()//Position - 0x7A79A
{
	float fVar0;
	
	GlobalFunc_587();
	if (ENTITY::DOES_ENTITY_EXIST(Local_1191))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1191);
		}
	}
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	if (GlobalFunc_4926(1000))
	{
		iLocal_3228 = 22;
	}
	func_820(fVar0);
	switch (iLocal_3228)
	{
		case 0:
			func_534();
			HUD::REMOVE_BLIP(&(Local_1191.f_2));
			RECORDING::_0x293220DA1B46CEBC(1f, 2f, 3);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_PICKUP_TRUCK_INT"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_PICKUP_TRUCK_INT");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			PATHFIND::SET_ROADS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f, 0, 0);
			PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
			PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
			MISC::CLEAR_AREA(906.2467f, -2357.915f, 30.94336f, 10000f, 1, 0, 0, 0);
			uLocal_3454 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 906.0424f, -2377.926f, 30.72413f, 0.229425f, -1.864868f, 12.6026f, 39.64163f, 0, 2);
			uLocal_3455 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 907.6775f, -2369.175f, 31.80255f, -5.724536f, 0.207416f, 57.18651f, 37f, 0, 2);
			uLocal_3456 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 900.2029f, -2367.95f, 32.18867f, -13.27257f, 0.458764f, 56.31219f, 35f, 0, 2);
			uLocal_3457 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 881.2092f, -2372.341f, 34.58205f, -14.49448f, 3.857126f, -69.51784f, 27.69079f, 0, 2);
			uLocal_3458 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 879.637f, -2374.733f, 30.37368f, -2.835233f, 3.857126f, -52.99608f, 26.47429f, 0, 2);
			uLocal_3459 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 899.6381f, -2368.813f, 30.39501f, 5.178746f, 1.312154f, 55.96893f, 50f, 0, 2);
			uLocal_3460 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 879.637f, -2374.733f, 30.37368f, -2.835233f, 3.857126f, -52.99608f, 25.8f, 0, 2);
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			func_425(PLAYER::PLAYER_PED_ID(), 0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5, 1, 1);
			}
			else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb")) < 5)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 5);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), 1);
			PED::SET_PED_USING_ACTION_MODE(uLocal_3098[0], 1, -1, 0);
			func_396(uLocal_3098[0]);
			func_313(uLocal_3098[0], 0);
			func_312(&(uLocal_3098[0]), 1);
			uLocal_3450 = GlobalFunc_6797(uLocal_3098[0], 0, 145);
			HUD::SET_BLIP_DISPLAY(uLocal_3450, 2);
			HUD::SET_BLIP_SCALE(uLocal_3450, 0.5f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
			func_404(&(uLocal_3098[2]), 2, 804.7164f, -2330.207f, 61.0967f, 264.4371f, 0, 0, 0);
			func_317(uLocal_3098[2]);
			GlobalFunc_11257(uLocal_3098[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			func_403(uLocal_3098[2]);
			func_313(uLocal_3098[2], 0);
			func_312(&(uLocal_3098[2]), 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, uLocal_3098[2], "TREVOR", 0, 1);
			uLocal_3451 = GlobalFunc_6797(uLocal_3098[2], 0, 145);
			HUD::SET_BLIP_DISPLAY(uLocal_3451, 2);
			HUD::SET_BLIP_SCALE(uLocal_3451, 0.5f);
			GlobalFunc_2875(&Local_1191);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1191, 3, "lkcountry", 1);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1191, 1);
			GlobalFunc_2875(&Local_1206);
			VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_1206, 0);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 4, "lkcountry", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 8375f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1206, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_1176, 901.9453f, -2383.368f, 29.2789f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1176, 341.1729f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
			}
			MISC::SET_TIME_SCALE(0.4f);
			AUDIO::PLAY_STREAM_FRONTEND();
			AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_FIB4_TRUCK_SMASH");
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_3098[0]);
			ENTITY::SET_ENTITY_COORDS(uLocal_3098[0], 907.141f, -2376.71f, 29.53554f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_3098[0], 9.7089f);
			func_774();
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3098[0], 0, 0);
			uLocal_3463 = CAM::CREATE_CAMERA(964613260, 1);
			CAM::PLAY_CAM_ANIM(uLocal_3463, "fbi4_RAMCAM_CAM", "missfbi4", 921.402f, -2362.843f, 29.479f, 0f, 0f, -2.25f, 0, 2);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			AUDIO::START_AUDIO_SCENE("FBI_4_COLLISION_RAYFIRE");
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_3225 = MISC::GET_GAME_TIMER();
			iLocal_3228++;
			break;
		
		case 1:
			if (fVar0 > 80f)
			{
				GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "ram_cut_1", 7, 0, 0, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_fbi4_trucks_crash", Local_1206, 0f, 5f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_TRUCK_RAM_MA");
				iLocal_3228++;
			}
			break;
		
		case 2:
			if (fVar0 > 600f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_3454, 0);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_1206, 0f, 6.5f, 0.5f, 375f, 400f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_1191, -2f, -0.5f, 0.5f, 1000f, 1000f, 1);
				if (!PED::IS_PED_INJURED(Local_1644))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_1644, "missheat", "Guard_Dead_DS", ENTITY::GET_ENTITY_COORDS(Local_1191, 1), ENTITY::GET_ENTITY_ROTATION(Local_1191, 2), 1000f, -1000f, -1, 2, 0, 2, 0);
				}
				if (!PED::IS_PED_INJURED(Local_1664))
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_1664, "missheat", "Guard_Dead_PS", ENTITY::GET_ENTITY_COORDS(Local_1191, 1), ENTITY::GET_ENTITY_ROTATION(Local_1191, 2), 1000f, -1000f, -1, 2, 0, 2, 0);
				}
				iLocal_3225 = MISC::GET_GAME_TIMER();
				MISC::SET_TIME_SCALE(0.4f);
				uLocal_3463 = CAM::CREATE_CAMERA(964613260, 1);
				CAM::PLAY_CAM_ANIM(uLocal_3463, "fbi4_WALLCRUSH_CAM", "missfbi4", 921.677f, -2360.643f, 28.779f, 0f, 0f, 0.25f, 0, 2);
				ENTITY::SET_ENTITY_COORDS(uLocal_3098[0], 905.511f, -2373.917f, 29.53282f, 1, 1, 1, 1);
				iLocal_3228++;
			}
			break;
		
		case 3:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_3463) >= 0.3f)
			{
				VEHICLE::SET_VEHICLE_DAMAGE(Local_1191, 0f, -1.5f, 2f, 1000f, 1000f, 1);
				bLocal_3216 = true;
				iLocal_3228++;
			}
			break;
		
		case 4:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_3463) >= 0.97f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_3228++;
				}
			}
			else
			{
				iLocal_3228++;
			}
			break;
		
		case 5:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_3463) >= 1f)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_1191, 1);
				VEHICLE::_0x1CF38D529D7441D9(Local_1191, 1);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
				}
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3228++;
			}
			break;
		
		case 6:
			MISC::SET_TIME_SCALE(1f);
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_FIB4_TRUCK_SMASH");
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1206))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1206);
			}
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1206);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1191, 1);
			VEHICLE::_0x1CF38D529D7441D9(Local_1191, 1);
			iLocal_3225 = MISC::GET_GAME_TIMER();
			iLocal_3228++;
			break;
		
		case 7:
			Local_1206.f_3 = { ENTITY::GET_ENTITY_COORDS(Local_1206, 1) };
			Local_1206.f_6 = ENTITY::GET_ENTITY_HEADING(Local_1206);
			Local_1206.f_3 = { 896.0892f, -2364.416f, 29.4761f };
			Local_1206.f_6 = 84.0784f;
			ENTITY::SET_ENTITY_COORDS(Local_1206, Local_1206.f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1206, Local_1206.f_6);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1206);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1206);
			Local_2980 = OBJECT::CREATE_OBJECT(Local_2980.f_2, Local_2980.f_3, 1, 1, 0);
			ENTITY::SET_ENTITY_ROTATION(Local_2980, Local_2980.f_12, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_2980, 1);
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "ram_cut_2", 7, 0, 0, 0);
			if (!PED::IS_PED_INJURED(Local_1644))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_1644, 2);
			}
			if (!PED::IS_PED_INJURED(Local_1664))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_1664, 2);
			}
			AUDIO::SET_HORN_ENABLED(Local_1191, 0);
			AUDIO::STOP_AUDIO_SCENE("RURAL_BANK_HEIST_SETUP_HIJACK_SCENE");
			CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_3806);
			func_561(0, 1, 0, -30f, 0f, 1500, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			iLocal_3228++;
			break;
		
		case 8:
			if (!CAM::_0x3044240D2E0FA842())
			{
				AUDIO::STOP_STREAM();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_COLLISION_RAYFIRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_COLLISION_RAYFIRE");
				}
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 3);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 4);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 5);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 6);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 7);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_1191, 2);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_1191, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 2);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 2);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1206, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
		
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
			else
			{
				AUDIO::STOP_STREAM();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_COLLISION_RAYFIRE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_COLLISION_RAYFIRE");
				}
				AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_FIB4_TRUCK_SMASH");
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2980))
				{
					Local_2980 = OBJECT::CREATE_OBJECT(Local_2980.f_2, Local_2980.f_3, 1, 1, 0);
					ENTITY::SET_ENTITY_ROTATION(Local_2980, Local_2980.f_12, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2980, 1);
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				AUDIO::STOP_STREAM();
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3803))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3803, 9);
					iLocal_3247 = 22;
				}
				MISC::SET_TIME_SCALE(1f);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 3);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 4);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 5);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 6);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 7);
				if (!PED::IS_PED_INJURED(Local_1644))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1644, 2);
				}
				if (!PED::IS_PED_INJURED(Local_1664))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1664, 2);
				}
				AUDIO::SET_HORN_ENABLED(Local_1191, 0);
				if (!bLocal_3216)
				{
					VEHICLE::SET_VEHICLE_DAMAGE(Local_1191, 0f, -1.5f, 2f, 1000f, 1000f, 1);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
				}
				GlobalFunc_2875(&Local_1191);
				ENTITY::FREEZE_ENTITY_POSITION(Local_1191, 1);
				VEHICLE::_0x1CF38D529D7441D9(Local_1191, 1);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_1191, 2);
				VEHICLE::FIX_VEHICLE_WINDOW(Local_1191, 3);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 2);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1206))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_1206);
				}
				GlobalFunc_2875(&Local_1206);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1206, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_3098[0]);
				ENTITY::SET_ENTITY_COORDS(uLocal_3098[0], 908.1069f, -2371.983f, 29.5291f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_3098[0], 25.6402f);
				iLocal_3229 = 0;
				func_774();
				AUDIO::STOP_AUDIO_SCENE("RURAL_BANK_HEIST_SETUP_HIJACK_SCENE");
				AUDIO::STOP_SOUND(iLocal_3257);
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_3806);
				func_431(0, 1, -30f, 0f, 0, 1);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
	}
	return 0;
}



void func_817()//Position - 0x7B3C7
{
	int iVar0;
	
	iVar0 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
	if (iVar0 != 4)
	{
		iLocal_3806 = iVar0;
	}
}

void func_818()//Position - 0x7B3E0
{
	if (HUD::DOES_BLIP_EXIST(Local_1191.f_2))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206))
		{
			if (GlobalFunc_663("cntry_god3", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("cntry_god3");
			}
			HUD::REMOVE_BLIP(&(Local_1191.f_2));
			Local_1206.f_2 = GlobalFunc_6783(Local_1206, 0, 0);
			if (!func_709("heat_getout"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3098[0], 1), 1) < 20f)
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_getout", 7, 0, 0, 0))
					{
						func_706("heat_getout", 1);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_3833, 0))
			{
				if (!GlobalFunc_5172(&Local_3073, 0))
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_164("cntry_god15", 7500, 1);
					MISC::SET_BIT(&iLocal_3833, 0);
				}
			}
		}
	}
	else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206))
	{
		if (GlobalFunc_663("cntry_god15", 0, 0))
		{
			HUD::CLEAR_THIS_PRINT("cntry_god15");
		}
		if (HUD::DOES_BLIP_EXIST(Local_1206.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_1206.f_2));
		}
		Local_1191.f_2 = GlobalFunc_6783(Local_1191, 1, 0);
	}
}


int func_820(float fParam0)//Position - 0x7B514
{
	switch (iLocal_3247)
	{
		case 0:
			uLocal_3803 = OBJECT::GET_RAYFIRE_MAP_OBJECT(890.3647f, -2367.289f, 28.10582f, 10f, "DES_Smash2");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3803))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3803, 4);
				iLocal_3247++;
			}
			break;
		
		case 1:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3803) == 5)
			{
				if (fParam0 > 1100f)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3803, 6);
					iLocal_3247++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
		
		case 22:
			break;
	}
	return 0;
}

void func_821()//Position - 0x7B5AD
{
	if (!iLocal_3210)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1206, 1), ENTITY::GET_ENTITY_COORDS(Local_1191, 1), 1) < 18f)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Securicar_Horn", ENTITY::GET_ENTITY_COORDS(Local_1191, 1), "FBI_04_HEAT_SOUNDS", 0, 0, 0);
			iLocal_3210 = 1;
		}
	}
	if (GlobalFunc_588(&iLocal_3314, 4000))
	{
		VEHICLE::START_VEHICLE_HORN(Local_1191, 2500, 0, 0);
		iLocal_3314 = MISC::GET_GAME_TIMER();
	}
}

void func_822()//Position - 0x7B618
{
	if (iLocal_3224 < 1)
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
	switch (iLocal_3224)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(uLocal_3098[1], Local_1206, 0))
				{
					if (func_585(uLocal_3098[1], 242628503, -2, 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
						TASK::TASK_ENTER_VEHICLE(0, Local_1206, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_3098[1], uLocal_3464);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
					}
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1176))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1176);
				iLocal_3225 = 0;
				iLocal_3244 = 0;
			}
			if (!func_709("park_truck"))
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "park_truck", 7, 0, 0, 0))
				{
					func_706("park_truck", 1);
				}
			}
			GlobalFunc_9194(&Local_3073, 906.2f, -2375.501f, 29.532f, 0.01f, 0.01f, 2f, 0, Local_1176, "cntry_god2", "cntry_god14", "cntry_god13", 1, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
			{
				if (!func_709("cntry_help8"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.759f, -2375.988f, 29.409f, 896.07f, -2373.784f, 33.4f, 55f, 0, 1, 0))
					{
						GlobalFunc_159("cntry_help8", -1);
						func_706("cntry_help8", 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 912.891f, -2376.258f, 29.409f, 900.659f, -2374.972f, 33.309f, 16.8f, 0, 1, 0))
				{
					if (!func_709("stop_truck"))
					{
						if (!GlobalFunc_5172(&Local_3073, 0))
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "stop_truck", 7, 0, 0, 0))
							{
								func_706("stop_truck", 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
					{
						HUD::REMOVE_BLIP(&(Local_3073.f_5));
					}
					Local_1176.f_6 = ENTITY::GET_ENTITY_HEADING(Local_1176);
					if ((Local_1176.f_6 > 215f && Local_1176.f_6 < 305f) || (Local_1176.f_6 > 50f && Local_1176.f_6 < 140f))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_1176) < 0.5f)
						{
							if (GlobalFunc_74("cntry_help8"))
							{
								HUD::CLEAR_HELP(1);
							}
							if (!GlobalFunc_5172(&Local_3073, 0))
							{
								if (func_709("stop_truck"))
								{
									if (iLocal_3244 == 0)
									{
										iLocal_3244 = MISC::GET_GAME_TIMER();
									}
									if (GlobalFunc_588(&iLocal_3244, 500))
									{
										if (func_591(0, 1, 1, 0, 1))
										{
											GlobalFunc_5652(&Local_3073, 1, 0);
											iLocal_3224++;
										}
									}
								}
							}
						}
						else
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_1176) > 5f)
							{
								func_826();
							}
							iLocal_3244 = 0;
						}
					}
					else
					{
						iLocal_3244 = 0;
						func_826();
						if (!func_709("cntry_help8"))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_1176) < 2f)
							{
								if (iLocal_3225 == 0)
								{
									iLocal_3225 = MISC::GET_GAME_TIMER();
								}
								if (GlobalFunc_588(&iLocal_3225, 2000))
								{
									GlobalFunc_1("cntry_help8");
									func_706("cntry_help8", 1);
								}
							}
						}
						else if (!GlobalFunc_74("cntry_help8"))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_1176) < 2f)
							{
								GlobalFunc_1("cntry_help8");
							}
						}
					}
				}
				else
				{
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 906.2f, -2375.501f, 29.732f, 0.01f, 0.01f, 2f, 1, 1, 0);
					func_826();
					iLocal_3244 = 0;
				}
			}
			else
			{
				func_826();
				iLocal_3244 = 0;
				if (GlobalFunc_74("cntry_help8"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			break;
		
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT("fbi4_PARK_AMBULANCE_OS");
			STREAMING::REQUEST_MODEL(Local_1191.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1191.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_1644.f_1);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_1644.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_2980.f_2);
			STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatmg")));
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_combatmg"), 31, 0);
			AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS");
			GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "in_pos_2", 7, 0, 0, 0);
			RECORDING::_0x293220DA1B46CEBC(5f, 15f, 4);
			iLocal_3225 = MISC::GET_GAME_TIMER();
			iLocal_3224++;
			break;
		
		case 2:
			if (((((((STREAMING::HAS_MODEL_LOADED(Local_1191.f_1) && STREAMING::HAS_MODEL_LOADED(Local_1644.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_2980.f_2)) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_combatmg")))) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_combatmg"))) && AUDIO::LOAD_STREAM("Truck_Crash_Stream", "FBI_04_HEAT_SOUNDS")) && AUDIO::PREPARE_MUSIC_EVENT("fbi4_PARK_AMBULANCE_OS")) && !GlobalFunc_5172(&Local_3073, 0))
			{
				PHYSICS::ACTIVATE_PHYSICS(Local_1176);
				iLocal_3224++;
			}
			break;
		
		case 3:
			if (func_823())
			{
				GlobalFunc_11089(1, "Ram money truck", 0, 0, 0, 1);
				iLocal_1125 = 4;
			}
			break;
	}
}

int func_823()//Position - 0x7BAEF
{
	if (GlobalFunc_4926(1000))
	{
		iLocal_3226 = 22;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1191))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
		{
		}
	}
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	switch (iLocal_3226)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_BLOCK_THE_STREET"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_BLOCK_THE_STREET");
			}
			AUDIO::START_AUDIO_SCENE("FBI_4_TRUCK_SMASH_MAIN");
			ENTITY::SET_ENTITY_PROOFS(Local_1176, 1, 1, 1, 1, 1, 0, 0, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 1);
			GlobalFunc_200(&(Local_3472[0 /*165*/]), 0);
			GlobalFunc_200(&(Local_3472[0 /*165*/]), 1);
			GlobalFunc_200(&(Local_3472[0 /*165*/]), 2);
			GlobalFunc_200(&(Local_3472[0 /*165*/]), 3);
			GlobalFunc_200(&(Local_3472[0 /*165*/]), 4);
			PED::SET_PED_NON_CREATION_AREA(770f, -1982.81f, 100f, 1045f, -2500f, -100f);
			VEHICLE::SET_DISTANT_CARS_ENABLED(0);
			MISC::CLEAR_AREA(922.4016f, -2156.801f, 29.4934f, 1000f, 1, 0, 0, 0);
			uLocal_3454 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 910.2145f, -2388.131f, 34.77703f, -2.897402f, 3E-06f, 13.47105f, 36.06252f, 0, 2);
			uLocal_3455 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 910.2325f, -2388.203f, 33.27606f, -2.897402f, 3E-06f, 13.47105f, 34.06252f, 0, 2);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
			VEHICLE::SET_VEHICLE_FIXED(Local_1206);
			ENTITY::SET_ENTITY_COORDS(Local_1206, 1024.197f, -2376.524f, 29.5306f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_1206, 85.759f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1206.f_1);
			PED::SET_PED_INTO_VEHICLE(uLocal_3098[1], Local_1206, -1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, uLocal_3098[1], "franklin", 0, 1);
			GlobalFunc_9134(&uLocal_3098, 1);
			func_439(&uLocal_3098, 1, 0, 0);
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
			ENTITY::SET_ENTITY_COORDS(Local_1176, Local_3411, 1, 0, 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
			PHYSICS::ACTIVATE_PHYSICS(Local_1176);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[0], 1);
			TASK::TASK_LOOK_AT_COORD(uLocal_3098[0], 907.64f, -2373.35f, 31.5f, 5000, 0, 2);
			Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, 922.4016f, -2156.801f, 29.4934f, 174.54f, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1191, 3);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1191, 0, 0);
			Local_1191.f_2 = GlobalFunc_6783(Local_1191, 1, 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1191, "FBI_4_STOCKADE_GROUP", 0);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_1191, 1);
			Local_1644 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1644.f_1, -1, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_1644, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1644, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1644, 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 6, Local_1644, "AGENT1", 0, 1);
			Local_1664 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1664.f_1, 0, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_1664, 1);
			AUDIO::DISABLE_PED_PAIN_AUDIO(Local_1664, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1664, 1);
			GlobalFunc_173(&(Local_3472[0 /*165*/]), 7, Local_1664, "AGENT2", 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1191, 2, "lkcountry", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1191, 7500f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1191, 1);
			uLocal_3456 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3456, Local_1191, 2.18f, -0.3f, 0.32f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3456, Local_1191, 1.4f, 8f, 0.6f, 1);
			CAM::SET_CAM_FOV(uLocal_3456, 50f);
			uLocal_3457 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3457, Local_1191, 2.21f, -0.8f, 1.63f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3457, Local_1191, -0.8f, 8f, 0.7f, 1);
			CAM::SET_CAM_FOV(uLocal_3457, 35f);
			uLocal_3458 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3458, Local_1191, 1.58f, 5.83f, 0.78f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3458, Local_1191, -1.2f, 0.2f, 1.1f, 1);
			CAM::SET_CAM_FOV(uLocal_3458, 32f);
			uLocal_3461 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3461, Local_1191, 0.82f, 4.85f, 1.43f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3461, Local_1191, -0.6f, -0.2f, 1.4f, 1);
			CAM::SET_CAM_FOV(uLocal_3461, 32f);
			uLocal_3459 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3459, Local_1206, -0.21f, 0.75f, 1.35f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3459, Local_1206, -3.1f, 20f, -1.3f, 1);
			CAM::SET_CAM_FOV(uLocal_3459, 45f);
			uLocal_3460 = CAM::CREATE_CAM("default_scripted_camera", 0);
			CAM::ATTACH_CAM_TO_ENTITY(uLocal_3460, Local_1206, -0.21f, 0.8f, 1.35f, 1);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3460, Local_1206, -3.1f, 20f, -1.3f, 1);
			CAM::SET_CAM_FOV(uLocal_3460, 45f);
			uLocal_3805 = STREAMING::STREAMVOL_CREATE_SPHERE(905.92f, -2367.47f, 30.54f, 20f, 1, 127);
			Local_3414 = { 892.138f, -2368.97f, 30.939f };
			Local_3417 = { 0f, 0f, 0f };
			CAM::SET_CAM_ACTIVE(uLocal_3456, 1);
			CAM::SHAKE_CAM(uLocal_3456, "ROAD_VIBRATION_SHAKE", 2.5f);
			uLocal_3463 = CAM::CREATE_CAMERA(964613260, 1);
			CAM::PLAY_CAM_ANIM(uLocal_3463, "fbi4_garagetruck_block_cam", "missfbi4", Local_3414, Local_3417, 0, 2);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_3225 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("fbi4_PARK_AMBULANCE_OS");
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1206, "FBI_4_TOWTRUCK_GROUP", 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_3226++;
			break;
		
		case 1:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_3463) >= 1f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_3463, 0);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
				CAM::SET_CAM_ACTIVE(uLocal_3456, 1);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3226++;
			}
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_3225, 2000))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3457, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3456, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3458, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3461, uLocal_3458, 3000, 0, 1);
				CAM::SHAKE_CAM(uLocal_3461, "ROAD_VIBRATION_SHAKE", 2.5f);
				GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "amb_cut_1", 7, 0, 0, 0);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3226++;
			}
			break;
		
		case 3:
			if (GlobalFunc_588(&iLocal_3225, 2000))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3461, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3458, 0);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1191, 1000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1191, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_1206, 2);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 15, "lkcountry", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 1500f);
				Local_3414 = { 924.627f, -2362f, 29.516f };
				Local_3417 = { 0f, 0f, 0f };
				CAM::PLAY_CAM_ANIM(uLocal_3463, "fbi4_securityvan_blocked_cam", "missfbi4", Local_3414, Local_3417, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_3463, 1);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3226++;
			}
			break;
		
		case 4:
			if (GlobalFunc_588(&iLocal_3225, 1000))
			{
				GlobalFunc_4956();
				AUDIO::TRIGGER_MUSIC_EVENT("fbi4_PRE_TRUCK_RAM_MA");
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3226++;
			}
			break;
		
		case 5:
			if (!AUDIO::IS_MUSIC_ONESHOT_PLAYING())
			{
				AUDIO::PREPARE_MUSIC_EVENT("FBI4_RAM_OS");
			}
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(uLocal_3463) >= 1f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_3463, 0);
				MISC::CLEAR_AREA(1030.147f, -2376.798f, 29.4686f, 150f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(Local_1191, 904.981f, -2367.179f, 30.15f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1191, 175.2936f);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1206))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1206);
				}
				ENTITY::SET_ENTITY_COORDS(Local_1206, 1030.147f, -2376.798f, 29.4686f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1206, 86.1538f);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 12, "lkcountry", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 4500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1206, 1f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1206, 1);
				CAM::DESTROY_CAM(uLocal_3463, 0);
				Local_3414 = { 0f, 0f, 0f };
				Local_3417 = { 0f, 0f, 0f };
				iLocal_3232 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3414, Local_3417, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
				{
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_3232, Local_1206, 0);
				}
				uLocal_3463 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_3463, iLocal_3232, "fbi4_franklin_truck_cam", "missfbi4");
				CAM::SET_CAM_ACTIVE(uLocal_3463, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				GlobalFunc_4956();
				GlobalFunc_5157(&(Local_3472[0 /*165*/]), "heataud", "amb_cut_2", 7, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI4_RAM_OS");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1206, 0);
				AUDIO::START_AUDIO_SCENE("FBI_4_PICKUP_TRUCK_INT");
				iLocal_3226++;
			}
			break;
		
		case 6:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1206) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(12, "lkcountry")
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_TRUCK_SMASH_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_TRUCK_SMASH_MAIN");
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_1191, 0);
				iLocal_3806 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
				STREAMING::STREAMVOL_DELETE(uLocal_3805);
				VEHICLE::SET_DISTANT_CARS_ENABLED(1);
				iLocal_3245 = MISC::GET_GAME_TIMER();
				RECORDING::_0x81CBAE94390F9F89();
				func_561(0, 1, 0, 0f, 0f, 3000, 0, 1);
				GlobalFunc_164("cntry_god3", 7500, 1);
				return 1;
			}
			break;
		
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
			}
			else
			{
				RECORDING::_0x13B350B8AD0EEE10();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_TRUCK_SMASH_MAIN"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_TRUCK_SMASH_MAIN");
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_1191, 0);
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
				while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry"))
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::STREAMVOL_DELETE(uLocal_3805);
				VEHICLE::SET_DISTANT_CARS_ENABLED(1);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
				}
				ENTITY::SET_ENTITY_COORDS(Local_1191, 904.981f, -2367.179f, 30.15f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1191, 175.2936f);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1206))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1206);
				}
				ENTITY::SET_ENTITY_COORDS(Local_1206, 1030.147f, -2376.798f, 29.4686f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_1206, 86.1538f);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_1206, 2);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 12, "lkcountry", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 6500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1206, 1f);
				iLocal_3806 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1206, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_PICKUP_TRUCK_INT"))
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_PICKUP_TRUCK_INT");
				}
				iLocal_3245 = MISC::GET_GAME_TIMER();
				func_431(1, 1, 0f, 0f, 0, 1);
				GlobalFunc_164("cntry_god3", 7500, 1);
				RECORDING::_0x81CBAE94390F9F89();
				return 1;
			}
			break;
	}
	return 0;
}



void func_826()//Position - 0x7C603
{
	if (!func_709("park_truck"))
	{
		if (func_709("stop_truck"))
		{
			if (!GlobalFunc_5172(&Local_3073, 0))
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "park_truck", 7, 0, 0, 0))
				{
					func_706("park_truck", 1);
				}
			}
		}
	}
	if (!func_709("heat_tofar0"))
	{
		if (!GlobalFunc_5172(&Local_3073, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_3098[1], 1), 1016.747f, -2375.797f, 29.5309f, 1) < 55f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3098[1], 1), 1) < 15f)
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_tofar0", 6, 0, 0, 0))
					{
						func_706("heat_tofar0", 1);
					}
				}
			}
		}
	}
}


void func_828()//Position - 0x7C6FF
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_3223)
	{
		case 0:
			if (func_834(&Local_3142, uLocal_3458, 2, 0, 1148829696, 1148829696, 0, 0, 0, 2))
			{
				if (Local_3142.f_18)
				{
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					CAM::SET_CAM_ACTIVE(uLocal_3458, 1);
					if (!Local_3142.f_19)
					{
						if (func_439(&uLocal_3098, 0, 0, 0))
						{
							Local_3142.f_19 = 1;
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 0);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 1);
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
							{
								PED::DELETE_PED(&(uLocal_3098[0]));
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(0));
							if (ENTITY::DOES_ENTITY_EXIST(Local_1176))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1176);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1176.f_1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_1478))
							{
								VEHICLE::DELETE_VEHICLE(&Local_1478);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1478.f_1);
							Local_2956.x = OBJECT::CREATE_OBJECT(Local_2956.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 40f), 1, 1, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2956.x, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 137.22f);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheat", "binoculars_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						}
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
			else
			{
				STREAMING::STREAMVOL_DELETE(uLocal_3805);
				uLocal_3805 = STREAMING::STREAMVOL_CREATE_SPHERE(740.894f, -2475.923f, 19.3226f, 50f, 1, 127);
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
				func_591(0, 1, 1, 0, 1);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, 0, "michael", 0, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3459, uLocal_3458, 2500, 0, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				iLocal_3223++;
			}
			break;
		
		case 1:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_3459))
			{
				func_831();
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3223++;
			}
			break;
		
		case 2:
			if (func_831())
			{
				STREAMING::STREAMVOL_DELETE(uLocal_3805);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3223++;
			}
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heatAUD", "van_cut_1", 7, 0, 0, 0))
				{
					iLocal_3223++;
				}
			}
			break;
		
		case 4:
			if (((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_1176.f_1) && STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) && STREAMING::HAS_MODEL_LOADED(Local_2932.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) && STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0))
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(945.8f, -2080.8f, 100f, 1015.3f, -2035.2f, -100f, 0, 1);
				MISC::CLEAR_AREA(Local_1176.f_3, 50f, 1, 0, 0, 0);
				uLocal_3805 = STREAMING::STREAMVOL_CREATE_SPHERE(937.2f, -2080.8f, 30f, 20f, 1, 127);
				Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, Local_1176.f_3, Local_1176.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1176, 11, "lkcountry", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1176, 5200f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1176, 1);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1176, 0f);
				GlobalFunc_534(Local_1176, 0);
				func_430(&(uLocal_3098[0]), 0, Local_1176, -1, 0, 0, 0);
				func_317(uLocal_3098[0]);
				GlobalFunc_11257(uLocal_3098[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				func_313(uLocal_3098[0], 0);
				func_312(&(uLocal_3098[0]), 1);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, uLocal_3098[0], "michael", 0, 1);
				Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 1024.197f, -2376.524f, 29.5306f, 85.759f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1206, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 3);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
				GlobalFunc_534(Local_1206, 1);
				func_430(&(uLocal_3098[1]), 1, Local_1206, -1, 0, 0, 0);
				func_317(uLocal_3098[1]);
				GlobalFunc_11257(uLocal_3098[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, uLocal_3098[1], "franklin", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[1], 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_BINOCULARS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
				}
				iLocal_3223++;
			}
			break;
		
		case 5:
			GlobalFunc_9134(&uLocal_3098, 0);
			func_829();
			break;
		
		case 6:
			if (func_649(&Local_3142, 2, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_3142.f_18)
				{
					if (!Local_3142.f_19)
					{
						if (func_439(&uLocal_3098, 1, 1, 0))
						{
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
							Local_3142.f_19 = 1;
						}
					}
				}
				if (!iLocal_3198)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
						if (iVar0 == 9)
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1176))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_1176, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1176, (5200f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1176)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1176, 1);
								iLocal_3198 = 1;
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1176, 11, "lkcountry", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1176, 5200f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1176, 1);
								iLocal_3198 = 1;
							}
						}
					}
				}
				if (GlobalFunc_588(&iLocal_3225, 2500))
				{
					MISC::CLEAR_AREA(Local_1176.f_3, 100f, 1, 0, 0, 0);
				}
			}
			else
			{
				STREAMING::STREAMVOL_DELETE(uLocal_3805);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1176, 0);
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2956.x))
				{
					ENTITY::DETACH_ENTITY(Local_2956.x, 1, 1);
					OBJECT::DELETE_OBJECT(&Local_2956);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2956.f_2);
				if (!PED::IS_PED_INJURED(uLocal_3098[uLocal_3098.f_5]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_3098[uLocal_3098.f_5], 1);
				}
				if (!PED::IS_PED_INJURED(Local_1644))
				{
					PED::DELETE_PED(&Local_1644);
				}
				if (!PED::IS_PED_INJURED(Local_1664))
				{
					PED::DELETE_PED(&Local_1664);
				}
				if (!PED::IS_PED_INJURED(iLocal_3465))
				{
					GlobalFunc_200(&(Local_3472[0 /*165*/]), 1);
					PED::DELETE_PED(&iLocal_3465);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
					}
					VEHICLE::DELETE_VEHICLE(&Local_1191);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1176))
				{
					Var1 = { ENTITY::GET_ENTITY_VELOCITY(Local_1176) };
					Var1 = { Var1 * Vector(1.2f, 1.2f, 1.2f) };
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1176);
					ENTITY::SET_ENTITY_VELOCITY(Local_1176, Var1);
				}
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 0);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
				GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_move", 9, 0, 0, 0);
				AUDIO::START_AUDIO_SCENE("FBI_4_BLOCK_THE_STREET");
				iLocal_1125 = 3;
			}
			break;
	}
}

void func_829()//Position - 0x7CED9
{
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_2518(&uLocal_3098, 0, 0);
	GlobalFunc_729(&uLocal_3098, 1, 0);
	func_830();
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1176, 1);
	iLocal_3223++;
}

int func_830()//Position - 0x7CF11
{
	Local_3142.f_12 = uLocal_3098[0];
	return 1;
}

int func_831()//Position - 0x7CF25
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	GlobalFunc_587();
	if (GlobalFunc_4926(1000))
	{
		iLocal_3238 = 22;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
		{
			fVar1 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1191);
		}
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	switch (iLocal_3238)
	{
		case 0:
			if ((STREAMING::HAS_MODEL_LOADED(Local_1191.f_1) && STREAMING::HAS_MODEL_LOADED(Local_1644.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1493[0 /*15*/].f_1))
			{
				func_832(1, 1);
				PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 1);
				PATHFIND::SET_PED_PATHS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, 0, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 0, 1);
				PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, 0, 1);
				MISC::CLEAR_AREA(790.83f, -2330.06f, 62.67f, 1000f, 1, 0, 0, 0);
				Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, Local_1191.f_3, Local_1191.f_6, 1, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
				ENTITY::SET_ENTITY_PROOFS(Local_1191, 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1191, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1191, 1, "lkcountry", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1191, 6000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1191, 1);
				Local_1644 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1644.f_1, 0, 1, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_1644, 1);
				PED::_0x733C87D4CE22BEA2(Local_1644);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1644, 1);
				Local_1664 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1664.f_1, -1, 1, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_1664, 1);
				PED::_0x733C87D4CE22BEA2(Local_1664);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1664, 1);
				Local_1493[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[0 /*15*/].f_1, Local_1493[0 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[0 /*15*/], Local_1493[0 /*15*/].f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[0 /*15*/], 7000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[0 /*15*/], 1);
				Local_1493[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[1 /*15*/].f_1, Local_1493[1 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[1 /*15*/], Local_1493[1 /*15*/].f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[1 /*15*/], 7000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[1 /*15*/], 1);
				Local_1493[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[2 /*15*/].f_1, Local_1493[2 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[2 /*15*/], Local_1493[2 /*15*/].f_13, "lkheat", 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[2 /*15*/], 1);
				Local_1493[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[3 /*15*/].f_1, Local_1493[3 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[3 /*15*/], Local_1493[3 /*15*/].f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[3 /*15*/], 7000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[3 /*15*/], 1);
				Local_1493[7 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[7 /*15*/].f_1, Local_1493[7 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[7 /*15*/], Local_1493[7 /*15*/].f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[7 /*15*/], 4200f);
				uLocal_3454 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 768.6289f, -2357.275f, 57.67293f, -5.133545f, 0.001094f, 153.9442f, 28f, 0, 2);
				uLocal_3455 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 768.7133f, -2356.751f, 57.85367f, -18.86613f, -0.410374f, 158.9424f, 28f, 0, 2);
				uLocal_3456 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 768.7133f, -2356.751f, 57.85367f, -18.86613f, -0.410374f, 158.9424f, 28f, 0, 2);
				uLocal_3457 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 765.1454f, -2378.904f, 50.21748f, -13.95837f, 0f, 172.8386f, 22.25109f, 0, 2);
				uLocal_3460 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 765.1417f, -2378.912f, 50.21524f, -25.08031f, -0.25713f, 167.9347f, 20.2085f, 0, 2);
				uLocal_3458 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 757.3936f, -2407.696f, 20.08319f, 3.599488f, 0.001119f, 156.8176f, 36.71302f, 0, 2);
				uLocal_3459 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 757.8994f, -2406.809f, 20.13409f, 4.586555f, 0f, 158.101f, 36.71302f, 0, 2);
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
				bLocal_3188 = true;
				CAM::SET_CAM_ACTIVE(uLocal_3454, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3455, uLocal_3454, 5500, 0, 1);
				GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(1);
				CAM::SHAKE_CAM(uLocal_3457, "HAND_SHAKE", 1f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
				STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
				STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
				STREAMING::REQUEST_MODEL(Local_1176.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_1206.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_2932.f_2);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
				STREAMING::REQUEST_ANIM_DICT("missfbi4");
				STREAMING::REQUEST_ANIM_DICT("misssagrab");
				TASK::REQUEST_WAYPOINT_RECORDING("heat1");
				TASK::REQUEST_WAYPOINT_RECORDING("heat2");
				TASK::REQUEST_WAYPOINT_RECORDING("heat3");
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
				GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_looks", 7, 0, 0, 0);
				iLocal_3238++;
			}
			break;
		
		case 1:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_3455))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3454, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3455, 0);
				Local_1493[4 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[4 /*15*/].f_1, Local_1493[4 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[4 /*15*/], Local_1493[0 /*15*/].f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[4 /*15*/], 3000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[4 /*15*/], 1);
				Local_1493[5 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[5 /*15*/].f_1, Local_1493[5 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[5 /*15*/], Local_1493[5 /*15*/].f_13, "lkheat", 1);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[5 /*15*/], 5250f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[5 /*15*/], 1);
				Local_1493[6 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[6 /*15*/].f_1, Local_1493[6 /*15*/].f_3, 0f, 1, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[6 /*15*/], Local_1493[6 /*15*/].f_13, "lkheat", 1);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[6 /*15*/], 1);
				CAM::SET_CAM_ACTIVE(uLocal_3456, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3457, uLocal_3456, 5500, 0, 1);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3238++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			break;
		
		case 2:
			if (GlobalFunc_588(&iLocal_3225, 3000))
			{
				GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "van_cut_0", 7, 0, 0, 0);
				iLocal_3238++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			break;
		
		case 3:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_3457))
			{
				CAM::SET_CAM_ACTIVE(uLocal_3456, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3457, 1);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3460, uLocal_3457, 3000, 0, 1);
				iLocal_3238++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			break;
		
		case 4:
			if (fVar1 > 20277f)
			{
				CAM::SET_CAM_ACTIVE(uLocal_3457, 0);
				CAM::SET_CAM_ACTIVE(uLocal_3460, 0);
				GlobalFunc_4956();
				GlobalFunc_5157(&(Local_3472[0 /*165*/]), "heataud", "van_cut_0b", 7, 0, 0);
				VEHICLE::SET_PLAYBACK_SPEED(Local_1191, 0.8f);
				CAM::SET_CAM_ACTIVE(uLocal_3458, 1);
				AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
				CAM::SHAKE_CAM(uLocal_3458, "ROAD_VIBRATION_SHAKE", 1f);
				bLocal_3188 = false;
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3238++;
			}
			else
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
			}
			break;
		
		case 5:
			if (GlobalFunc_588(&iLocal_3225, 1800))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_1493 - 1))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1493[iVar0 /*15*/].f_1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1493[iVar0 /*15*/]));
					iVar0++;
				}
				PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, 1, 1);
				PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 1);
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3804);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
				}
				PED::DELETE_PED(&Local_1644);
				PED::DELETE_PED(&Local_1664);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1644.f_1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_TRUCK"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
				}
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				func_561(0, 1, 0, 0f, 0f, 3000, 0, 1);
				return 1;
			}
			break;
		
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
				if (bLocal_3188)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
				}
			}
			else
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_TRUCK"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
				}
				iVar0 = 0;
				while (iVar0 <= (Local_1493 - 1))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1493[iVar0 /*15*/].f_1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1493[iVar0 /*15*/]));
					iVar0++;
				}
				STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
				STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
				STREAMING::REQUEST_MODEL(Local_1176.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_1206.f_1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
				STREAMING::REQUEST_MODEL(Local_2932.f_2);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
				STREAMING::REQUEST_ANIM_DICT("missfbi4");
				STREAMING::REQUEST_ANIM_DICT("misssagrab");
				TASK::REQUEST_WAYPOINT_RECORDING("heat1");
				TASK::REQUEST_WAYPOINT_RECORDING("heat2");
				TASK::REQUEST_WAYPOINT_RECORDING("heat3");
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0);
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
				while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_1176.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(Local_2932.f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0))
				{
					SYSTEM::WAIT(0);
				}
				PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, 1, 1);
				PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 1);
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3804);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
				}
				PED::DELETE_PED(&Local_1644);
				PED::DELETE_PED(&Local_1664);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1644.f_1);
				VEHICLE::DELETE_VEHICLE(&Local_1191);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1191.f_1);
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				func_431(0, 1, 0f, 0f, 0, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_832(bool bParam0, bool bParam1)//Position - 0x7DC9D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_891))
	{
		iLocal_43 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_907);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_59)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_507());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_515();
			func_511();
			func_495();
		}
		else
		{
			func_489();
			func_527();
		}
		if (bParam1)
		{
			GlobalFunc_9191(0);
		}
	}
}


int func_834(var uParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7DD61
{
	return func_650(uParam0, uParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, iParam8, iParam9, 0, 0, 0);
	return 1;
}

void func_835()//Position - 0x7DD88
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 913.6f, -2229.3f, 29.4f };
	if (iLocal_3253 < 2)
	{
		func_890();
	}
	if (!iLocal_3214)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(Local_1176))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_1176))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176, 0))
				{
					if (SYSTEM::VDIST2(Var3, Var0) <= 32400f)
					{
						STREAMING::PREFETCH_SRL(sLocal_7600);
						STREAMING::_0xBEB2D9A1D9A8F55A(3, 3, 3, 3);
						STREAMING::_0xF8155A7F03DDFC8E(2);
						iLocal_3214 = 1;
					}
				}
			}
		}
	}
	switch (iLocal_3253)
	{
		case 0:
			if (!func_709("over_take0"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1129.308f, -2095.91f, 32.359f, 1129.251f, -2062.817f, 48.059f, 115f, 0, 1, 0))
					{
						if (func_889())
						{
							if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "over_take0", 6, 0, 0, 0))
							{
								func_706("over_take0", 1);
							}
						}
					}
				}
			}
			if (!func_709("FBI_4_DRIVE_TO_CYPRUS_FLATS"))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176))
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_DRIVE_TO_CYPRUS_FLATS");
					func_706("FBI_4_DRIVE_TO_CYPRUS_FLATS", 1);
				}
			}
			if (GlobalFunc_9194(&Local_3073, Var0, 2f, 2f, 2f, 1, Local_1176, "cntry_god18", "cntry_god23", "cntry_god13", 1, 0, 1, -1))
			{
				GlobalFunc_5652(&Local_3073, 1, 0);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				GlobalFunc_530(Local_1176, 7f, 1, 1056964608, 0, 1);
				iLocal_3225 = MISC::GET_GAME_TIMER();
				iLocal_3837 = 1;
				iLocal_3253++;
			}
			break;
		
		case 1:
			if (GlobalFunc_530(Local_1176, 7f, 1, 1056964608, 0, 1))
			{
				if (func_888())
				{
					if (!GlobalFunc_5172(&Local_3073, 0))
					{
						if (func_591(1, 1, 1, 0, 1))
						{
							func_843(&uLocal_3838, &uLocal_5079, &uLocal_6320);
							RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
							iLocal_3253++;
						}
					}
				}
			}
			break;
		
		case 2:
			if (func_843(&uLocal_3838, &uLocal_5079, &uLocal_6320))
			{
				iLocal_3253++;
			}
			break;
		
		case 3:
			func_842();
			if (((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_1176.f_1) && STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) && STREAMING::HAS_MODEL_LOADED(Local_2932.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkcountry")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkcountry")) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) && STREAMING::HAS_ANIM_DICT_LOADED("misssagrab")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("heat3")) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2956.x))
				{
					ENTITY::DETACH_ENTITY(Local_2956.x, 1, 1);
					OBJECT::DELETE_OBJECT(&Local_2956);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_2956.f_2);
				if (!PED::IS_PED_INJURED(uLocal_3098[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_3098[1], 1);
				}
				if (!PED::IS_PED_INJURED(Local_1644))
				{
					PED::DELETE_PED(&Local_1644);
				}
				if (!PED::IS_PED_INJURED(Local_1664))
				{
					PED::DELETE_PED(&Local_1664);
				}
				if (!PED::IS_PED_INJURED(iLocal_3465))
				{
					GlobalFunc_200(&(Local_3472[0 /*165*/]), 1);
					PED::DELETE_PED(&iLocal_3465);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
					}
					VEHICLE::DELETE_VEHICLE(&Local_1191);
				}
				STREAMING::REMOVE_ANIM_DICT(sLocal_7599);
				Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 1024.197f, -2376.524f, 29.5306f, 85.759f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1206, 1, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 3);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
				GlobalFunc_534(Local_1206, 1);
				func_430(&(uLocal_3098[1]), 1, Local_1206, -1, 0, 0, 0);
				func_317(uLocal_3098[1]);
				GlobalFunc_11257(uLocal_3098[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, uLocal_3098[1], "franklin", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3098[1], 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_BINOCULARS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
				}
				GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
				GlobalFunc_200(&(Local_3472[0 /*165*/]), 0);
				GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
				GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_move", 9, 0, 0, 0);
				AUDIO::START_AUDIO_SCENE("FBI_4_BLOCK_THE_STREET");
				iLocal_1125 = 3;
			}
			break;
		
		case 4:
			break;
	}
	func_841();
	if (!iLocal_3186)
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1206))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1206) > 18000f)
			{
				VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_1206, 786603);
				iLocal_3186 = 1;
			}
		}
	}
	func_836();
}

void func_836()//Position - 0x7E309
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1478, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1478))
		{
			switch (iLocal_3295)
			{
				case 0:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1478) > 18000f)
					{
						iLocal_3295++;
					}
					func_487(Local_1478, 1f);
					break;
				
				case 1:
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_1478) < 44300f)
					{
						func_837(Local_1478, PLAYER::PLAYER_PED_ID(), &(Local_1478.f_7), 1f, 260f, 280f, 320f, 1.2f, 1f, 1f, 1);
						func_487(Local_1478, Local_1478.f_7);
					}
					else
					{
						func_832(0, 1);
						PATHFIND::SET_ROADS_IN_AREA(885.8f, -2086.9f, 100f, 941.9f, -2463f, -100f, 0, 1);
						iLocal_3295++;
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_837(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x7E3E2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_43 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_43 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_439;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = GlobalFunc_2916(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (GlobalFunc_5657(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (GlobalFunc_2915(iParam0, iParam1) < fParam5)
			{
				fVar1 = GlobalFunc_2914(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_44 = 1;
		}
		else if (iLocal_44)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_44 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_446 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_447 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_437 - fLocal_438));
							fVar1 = (fVar1 + fLocal_438);
							fLocal_436 = fVar1;
							if (fLocal_436 < fLocal_438)
							{
								fLocal_436 = fLocal_438;
							}
							if (fLocal_436 > fLocal_437)
							{
								fLocal_436 = fLocal_437;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_436);
						}
					}
				}
			}
		}
	}
}




void func_841()//Position - 0x7E804
{
	switch (iLocal_3286)
	{
		case 0:
			iLocal_3286++;
			break;
		
		case 1:
			iLocal_3286++;
			break;
		
		case 2:
			switch (iLocal_3285)
			{
				case 0:
					break;
			}
			break;
	}
	if (!func_709("fbi4_ram0"))
	{
		if (!GlobalFunc_5172(&Local_3073, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_3073.f_5))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1206, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "fbi4_ram0", 6, 0, 0, 0))
					{
						func_706("fbi4_ram0", 1);
					}
				}
			}
		}
	}
	if (!func_709("heat_tofar0"))
	{
		if (!GlobalFunc_5172(&Local_3073, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_3098[1], 1), 1016.747f, -2375.797f, 29.5309f, 1) < 55f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_3098[1], 1), 1) < 15f)
				{
					if (GlobalFunc_10618(&(Local_3472[0 /*165*/]), "heataud", "heat_tofar0", 6, 0, 0, 0))
					{
						func_706("heat_tofar0", 1);
					}
				}
			}
		}
	}
}

void func_842()//Position - 0x7E940
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_2932.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("misssagrab");
	TASK::REQUEST_WAYPOINT_RECORDING("heat1");
	TASK::REQUEST_WAYPOINT_RECORDING("heat2");
	TASK::REQUEST_WAYPOINT_RECORDING("heat3");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_04_HEAT_02", 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\SIREN_DISTANT", 0);
}

int func_843(var uParam0, var uParam1, var uParam2)//Position - 0x7EA36
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	
	iVar2 = 0;
	iVar2 = iVar2;
	switch (iLocal_3837)
	{
		case 0:
			break;
		
		case 1:
			GlobalFunc_2875(&Local_1176);
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(885.8f, -2086.9f, 100f, 941.9f, -2463f, -100f, 1);
			func_887();
			func_886();
			func_885();
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_DRIVE_TO_CYPRUS_FLATS"))
			{
				AUDIO::STOP_AUDIO_SCENE("FBI_4_DRIVE_TO_CYPRUS_FLATS");
			}
			CAM::DESTROY_ALL_CAMS(0);
			func_884(uParam0, Local_1176, uLocal_3098[2]);
			GlobalFunc_7718(uParam0);
			MISC::CLEAR_AREA_OF_VEHICLES(913.3915f, -2231.692f, 29.385f, 100f, 0, 0, 0, 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1176, -1);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!func_709("in_pos_1_1"))
			{
				if (GlobalFunc_10630(&(Local_3472[0 /*165*/]), "heataud", "in_pos_1", "in_pos_1_1", 7, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 30f, 4);
					func_706("in_pos_1_1", 1);
				}
			}
			iLocal_7585 = 0;
			iLocal_7586 = 0;
			iLocal_7587 = 0;
			iLocal_7588 = 0;
			iLocal_7589 = 0;
			iLocal_7590 = 0;
			iLocal_7591 = 0;
			iLocal_7592 = 0;
			iLocal_7593 = 0;
			iLocal_7594 = 0;
			iLocal_7595 = 0;
			iLocal_7596 = 0;
			iLocal_7597 = 0;
			iLocal_7598 = 0;
			func_866(uLocal_3098[2]);
			STREAMING::BEGIN_SRL();
			fLocal_7601 = -9999f;
			SYSTEM::SETTIMERA(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FBI4_SWITCH_1");
			iLocal_3837 = 2;
		
		case 2:
			func_865();
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = func_851(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				iLocal_7585 = iLocal_7585;
				iLocal_7586 = iLocal_7586;
				fLocal_7568 = fLocal_7568;
				fLocal_7567 = fLocal_7567;
				if (!iLocal_3218)
				{
					if (fVar1 >= fLocal_7566)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3408 = MISC::GET_GAME_TIMER();
						iLocal_3218 = 1;
					}
				}
				else if (!iLocal_3222)
				{
					if (GlobalFunc_588(&iLocal_3408, 200))
					{
						iLocal_7565 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_7565, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3222 = 1;
					}
				}
				if (!iLocal_7595)
				{
					if (fVar1 >= fLocal_7581)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, 0);
						iLocal_7595 = 1;
					}
				}
				if (!iLocal_7596)
				{
					if (fVar1 >= fLocal_7582)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
						iLocal_7596 = 1;
					}
				}
				if (!iLocal_3219)
				{
					if (fVar1 >= 0.5f)
					{
						iLocal_3219 = 1;
					}
				}
				if (!iLocal_7589)
				{
					if (SYSTEM::TIMERA() > iLocal_7573)
					{
						GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "heat_looks", 7, 0, 0, 0);
						iLocal_7589 = 1;
					}
				}
				if (!iLocal_7592)
				{
					if (iVar0 >= 3)
					{
						MISC::CLEAR_AREA(790.83f, -2330.06f, 62.67f, 10000f, 1, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(Local_1176, 175.1171f);
						ENTITY::SET_ENTITY_COORDS(Local_1176, 913.3915f, -2231.692f, 29.385f, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
						func_850();
						iLocal_7592 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
						{
							CAM::DESTROY_CAM(uParam0->f_1, 0);
						}
					}
					CAM::DESTROY_ALL_CAMS(0);
					iLocal_3837 = 3;
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
		
		case 3:
			CAM::DESTROY_ALL_CAMS(0);
			func_849(uParam1, uLocal_3098[2], Local_1191);
			GlobalFunc_7718(uParam1);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam1->f_1, iLocal_7572 + 1, 4);
			CAM::SET_CAM_ACTIVE(uParam1->f_1, 1);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("telescope");
			func_850();
			func_848();
			SYSTEM::SETTIMERA(0);
			iLocal_3837 = 4;
		
		case 4:
			func_865();
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				iVar0 = func_851(uParam1);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam1->f_1);
				if (!iLocal_7593 && !CAM::IS_CAM_SPLINE_PAUSED(uParam1->f_1))
				{
					if (iVar0 >= iLocal_7570 && iVar0 <= iLocal_7571)
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_3804, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					}
				}
				if (!iLocal_7593)
				{
					if (CAM::IS_CAM_SPLINE_PAUSED(uParam1->f_1))
					{
						CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam1->f_1, iLocal_7572 + 1, 0);
						func_847();
						func_846(uLocal_3098[2], iLocal_7578);
						if (ENTITY::DOES_ENTITY_EXIST(Local_1191))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_1191))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1191, 1, "lkcountry", 1);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1191, fLocal_7577);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1191, 1);
								AUDIO::START_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
							}
						}
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						iLocal_7593 = 1;
					}
				}
				if (!iLocal_7590)
				{
					if (SYSTEM::TIMERA() > iLocal_7574)
					{
						GlobalFunc_10618(&(Local_3472[0 /*165*/]), "HeatAud", "van_cut_0", 7, 0, 0, 0);
						iLocal_7590 = 1;
					}
				}
				if (!iLocal_7591)
				{
					if (SYSTEM::TIMERA() > iLocal_7575)
					{
						GlobalFunc_4956();
						GlobalFunc_5157(&(Local_3472[0 /*165*/]), "heataud", "van_cut_0b", 7, 0, 0);
						iLocal_7591 = 1;
					}
				}
				if (!iLocal_7594)
				{
					if (fVar1 >= fLocal_7579)
					{
						CAM::SHAKE_CAM(uParam1->f_1, "SKY_DIVING_SHAKE", fLocal_7580);
						iLocal_7594 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam1->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
						{
							CAM::DESTROY_CAM(uParam1->f_1, 0);
						}
					}
					CAM::DESTROY_ALL_CAMS(0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_TRUCK"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_TRUCK");
					}
					func_845();
					iLocal_3837 = 5;
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
		
		case 5:
			func_844(uParam2, uLocal_3098[2], Local_1176);
			GlobalFunc_7718(uParam2);
			CAM::SET_CAM_ACTIVE(uParam2->f_1, 1);
			SYSTEM::SETTIMERA(0);
			func_842();
			iLocal_3837 = 6;
		
		case 6:
			func_865();
			if (CAM::IS_CAM_ACTIVE(uParam2->f_1))
			{
				iVar0 = func_851(uParam2);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam2->f_1);
				if (!iLocal_3220)
				{
					if (fVar1 > 0.55f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3408 = MISC::GET_GAME_TIMER();
						iLocal_3220 = 1;
					}
				}
				else if (!iLocal_7587)
				{
					fLocal_7568 = fLocal_7568;
					if (GlobalFunc_588(&iLocal_3408, 200))
					{
						iLocal_7565 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_7565, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_7587 = 1;
					}
				}
				if (!iLocal_7588)
				{
					if (fVar1 > fLocal_7569)
					{
						Var3 = { 914.7f, -2216.7f, 34.8f };
						Var6 = { -5.3f, 0f, 174.9f };
						STREAMING::_0xEF39EE20C537E98C(Var3, Var6);
						iLocal_7588 = 1;
					}
				}
				if (!iLocal_7597)
				{
					if (fVar1 >= fLocal_7583)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorIn", 0, 0);
						iLocal_7597 = 1;
					}
				}
				if (!iLocal_7598)
				{
					if (fVar1 >= fLocal_7584)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
						iLocal_7598 = 1;
					}
				}
				if (!iLocal_3221)
				{
					if (fVar1 >= 0.75f)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_7565))
						{
							AUDIO::STOP_SOUND(iLocal_7565);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_3221 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_4_CUTSCENE_BINOCULARS"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_4_CUTSCENE_BINOCULARS");
					}
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam2->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam2->f_1))
						{
							CAM::DESTROY_CAM(uParam2->f_1, 0);
						}
					}
					CAM::DESTROY_ALL_CAMS(0);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					CAM::SET_WIDESCREEN_BORDERS(0, 500);
					AUDIO::STOP_SOUND(iLocal_7565);
					SYSTEM::SETTIMERA(0);
					GlobalFunc_5917(&Local_1176);
					func_561(0, 1, 0, 0f, 0f, 3000, 0, 1);
					iLocal_3837 = 7;
				}
			}
			break;
		
		case 7:
			func_865();
			if (SYSTEM::TIMERA() > 100)
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::END_SRL();
				iLocal_3837 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_844(var uParam0, var uParam1, int iParam2)//Position - 0x7F1E3
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 0.2801f, 1.2967f, 0.5344f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { -0.1119f, 0.0055f, 0.4533f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
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
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 3000;
		uParam0->f_10[1 /*57*/].f_6 = { -1.0713f, -0.7852f, 0.5344f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { -3.4369f, 0f, -53.5033f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 45f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
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
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -1.1351f, -0.8325f, -0.7892f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -3.4369f, 0f, -53.5033f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 2;
		uParam0->f_10[2 /*57*/].f_29 = 0.2f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 100f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 200;
		uParam0->f_10[2 /*57*/].f_38 = 0.4f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 3.3398f, -7.5898f, 7.7279f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_9 = { -2.3801f, -0.0023f, 36.1109f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 1f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
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
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { 3.5008f, -7.8098f, 1.1697f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_9 = { -2.3801f, -0.0023f, 36.1112f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
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
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 1000;
		uParam0->f_10[6 /*57*/].f_6 = { 3.4317f, -7.7129f, 1.1648f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_9 = { -2.3801f, -0.0023f, 36.1112f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 50f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB4_TrevorToTruck.txt";
		uParam0->f_1225 = "CameraInfo_FIB4_TrevorToTruck.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = uParam1;
	uParam0->f_4[1] = iParam2;
}

void func_845()//Position - 0x7FCC9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1493)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1493[iVar0 /*15*/].f_1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1493[iVar0 /*15*/]));
		iVar0++;
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, 1);
	PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 1);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3804);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1191, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1191))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1191);
		}
	}
	PED::DELETE_PED(&Local_1644);
	PED::DELETE_PED(&Local_1664);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1644.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_846(int iParam0, int iParam1)//Position - 0x7FDA3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			TASK::TASK_PLAY_ANIM(iParam0, "missfbi4", "_binoculars_trevor", 1000f, -8f, -1, 1, iParam1, 0, 0, 0);
			TASK::TASK_LOOK_AT_COORD(iParam0, 788.3f, -2333.5f, 61.6f, -1, 10240, 2);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
		}
	}
}

void func_847()//Position - 0x7FE07
{
	Local_1493[4 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[4 /*15*/].f_1, Local_1493[4 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[4 /*15*/], Local_1493[0 /*15*/].f_13, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[4 /*15*/], 3000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[4 /*15*/], 1);
	Local_1493[5 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[5 /*15*/].f_1, Local_1493[5 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[5 /*15*/], Local_1493[5 /*15*/].f_13, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[5 /*15*/], 5250f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[5 /*15*/], 1);
	Local_1493[6 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[6 /*15*/].f_1, Local_1493[6 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[6 /*15*/], Local_1493[6 /*15*/].f_13, "lkheat", 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[6 /*15*/], 1);
}

void func_848()//Position - 0x7FEF3
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1191))
	{
		VEHICLE::DELETE_VEHICLE(&Local_1191);
	}
	Local_1191 = VEHICLE::CREATE_VEHICLE(Local_1191.f_1, Local_1191.f_3, Local_1191.f_6, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_1191))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1191))
		{
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1191, 1);
			ENTITY::SET_ENTITY_PROOFS(Local_1191, 1, 1, 1, 1, 1, 0, 0, 0);
			Local_1644 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1644.f_1, 0, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1644))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1644))
				{
					PED::SET_PED_DIES_WHEN_INJURED(Local_1644, 1);
					PED::_0x733C87D4CE22BEA2(Local_1644);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1644, 1);
				}
			}
			Local_1664 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1191, 26, Local_1664.f_1, -1, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_1664))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1664))
				{
					PED::SET_PED_DIES_WHEN_INJURED(Local_1664, 1);
					PED::_0x733C87D4CE22BEA2(Local_1664);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1664, 1);
				}
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1191, 1, "lkcountry", 1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1191, fLocal_7576);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1191, 1);
		}
	}
}

void func_849(var uParam0, var uParam1, var uParam2)//Position - 0x7FFF2
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 768.7385f, -2357.312f, 57.6729f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -17.0247f, 0.0011f, 153.7904f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 15f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 3;
		uParam0->f_10[0 /*57*/].f_23 = 0.25f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 1f;
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
		uParam0->f_10[1 /*57*/].f_6 = { 768.7133f, -2356.751f, 57.8537f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -18.4764f, -0.4104f, 161.6453f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 15f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 3;
		uParam0->f_10[1 /*57*/].f_23 = 0.25f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 1f;
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
		uParam0->f_10[2 /*57*/].f_5 = 2000;
		uParam0->f_10[2 /*57*/].f_6 = { 768.7133f, -2356.751f, 57.8537f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -12.7536f, -0.4104f, 170.3669f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 15f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 3;
		uParam0->f_10[2 /*57*/].f_23 = 0.25f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 1f;
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
		uParam0->f_10[3 /*57*/].f_5 = 3000;
		uParam0->f_10[3 /*57*/].f_6 = { 765.1157f, -2378.9f, 50.2175f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { -14.0014f, 0f, 169.4132f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 10f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 3;
		uParam0->f_10[3 /*57*/].f_23 = 0.25f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 1f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 1f;
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
		uParam0->f_10[4 /*57*/].f_54 = 1;
		uParam0->f_10[5 /*57*/].f_2 = 3;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 0;
		uParam0->f_10[5 /*57*/].f_6 = { 759.9988f, -2387.277f, 21.0888f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 1.0832f, 0f, 161.7656f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 25.37f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 1f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 1f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
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
		uParam0->f_10[6 /*57*/].f_2 = 3;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 2500;
		uParam0->f_10[6 /*57*/].f_6 = { 758.6471f, -2387.277f, 21.0888f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 1.0832f, 0f, 161.036f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 25.37f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.5f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 1f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 1f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB4_BinocularsScene.txt";
		uParam0->f_1225 = "CameraInfo_FIB4_BinocularsScene.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = uParam1;
	uParam0->f_4[1] = uParam2;
}

void func_850()//Position - 0x80BA0
{
	Local_1493[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[0 /*15*/].f_1, Local_1493[0 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[0 /*15*/], Local_1493[0 /*15*/].f_13, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[0 /*15*/], 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[0 /*15*/], 1);
	Local_1493[1 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[1 /*15*/].f_1, Local_1493[1 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[1 /*15*/], Local_1493[1 /*15*/].f_13, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[1 /*15*/], 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[1 /*15*/], 1);
	Local_1493[2 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[2 /*15*/].f_1, Local_1493[2 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[2 /*15*/], Local_1493[2 /*15*/].f_13, "lkheat", 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[2 /*15*/], 1);
	Local_1493[3 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[3 /*15*/].f_1, Local_1493[3 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[3 /*15*/], Local_1493[3 /*15*/].f_13, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[3 /*15*/], 7000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[3 /*15*/], 1);
	Local_1493[7 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_1493[7 /*15*/].f_1, Local_1493[7 /*15*/].f_3, 0f, 1, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1493[7 /*15*/], Local_1493[7 /*15*/].f_13, "lkheat", 1);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1493[7 /*15*/], 4200f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1493[7 /*15*/], 1);
}

int func_851(var uParam0)//Position - 0x80D2E
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
				fLocal_1124 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_1124 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_1124 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_1124 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_1124);
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














void func_865()//Position - 0x81734
{
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	fLocal_7601 = (fLocal_7601 + (MISC::GET_FRAME_TIME() * 1000f));
	if (fLocal_7601 < 0f)
	{
		fLocal_7601 = 0f;
	}
	STREAMING::SET_SRL_TIME(fLocal_7601);
}

void func_866(int iParam0)//Position - 0x81765
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
			ENTITY::SET_ENTITY_COORDS(iParam0, Local_7561, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iParam0, fLocal_7564);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, 1);
			Local_2956.x = OBJECT::CREATE_OBJECT(Local_2956.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 40f), 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2956.x))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2956.x))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2956.x, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			func_846(iParam0, 0);
		}
	}
}


















void func_884(var uParam0, int iParam1, var uParam2)//Position - 0x829A1
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -5.375f, -4.6971f, 1.3159f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_9 = { -2.9126f, 1.2595f, 0.9778f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
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
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 3500;
		uParam0->f_10[1 /*57*/].f_6 = { -4.9301f, -3.6343f, 1.3798f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_9 = { -2.9214f, 1.2467f, 1.1996f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 45f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
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
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -4.984f, -3.4091f, 6.9017f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_9 = { -3.2586f, 0.8236f, 7.1985f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 100;
		uParam0->f_10[2 /*57*/].f_42 = 100;
		uParam0->f_10[2 /*57*/].f_43 = 800;
		uParam0->f_10[2 /*57*/].f_38 = 0.4f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { -0.1211f, 1.082f, -0.0704f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_9 = { -14.6695f, -0.002f, 170.824f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 45f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 1f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
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
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -0.1532f, 0.8833f, 0.698f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_9 = { -14.6696f, -0.002f, 170.824f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 45f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 0f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
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
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 4000;
		uParam0->f_10[6 /*57*/].f_6 = { -0.2473f, 0.8093f, 0.6748f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_9 = { -14.6696f, -0.002f, 170.824f };
		uParam0->f_10[6 /*57*/].f_18 = 0;
		uParam0->f_10[6 /*57*/].f_19 = 0;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 45f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 1;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FIB4_TruckToTrevor.txt";
		uParam0->f_1225 = "CameraInfo_FIB4_TruckToTrevor.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_885()//Position - 0x8344A
{
	STREAMING::REQUEST_MODEL(Local_1191.f_1);
	STREAMING::REQUEST_MODEL(Local_1644.f_1);
	STREAMING::REQUEST_MODEL(Local_1493[0 /*15*/].f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkcountry");
	iLocal_3804 = unk_0x67D02A194A2FC2BD("binoculars");
}

void func_886()//Position - 0x834E6
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]))
	{
		PED::DELETE_PED(&(uLocal_3098[1]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4917(1));
	if (ENTITY::DOES_ENTITY_EXIST(Local_1206))
	{
		VEHICLE::DELETE_VEHICLE(&Local_1206);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1206.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_1478))
	{
		VEHICLE::DELETE_VEHICLE(&Local_1478);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1478.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_1614))
	{
		VEHICLE::DELETE_VEHICLE(&Local_1614);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1614.f_1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
}

void func_887()//Position - 0x83566
{
	func_832(1, 1);
	PATHFIND::SET_ROADS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(798.06f, -1982.81f, 100f, 1013.58f, -2445.88f, -100f, 0, 0);
	PED::ADD_SCENARIO_BLOCKING_AREA(798.06f, -1982.81f, 100f, 1372.22f, -2752.3f, -100f, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(935.9f, -2390.9f, 100f, 899.3f, -2319.6f, -100f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(1034f, -2873.8f, 100f, 164.1f, -1944.8f, -100f, 0, 1);
}

int func_888()//Position - 0x8364F
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_2956.f_2))
	{
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missfbi4"))
	{
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("missheat"))
	{
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3804))
	{
	}
	if (!AUDIO::PREPARE_MUSIC_EVENT("FBI4_SWITCH_1"))
	{
	}
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
	}
	if (!STREAMING::IS_SRL_LOADED())
	{
	}
	if (((((((STREAMING::HAS_MODEL_LOADED(Local_2956.f_2) && STREAMING::HAS_ANIM_DICT_LOADED("missfbi4")) && STREAMING::HAS_ANIM_DICT_LOADED("missheat")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_7599)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3804)) && AUDIO::PREPARE_MUSIC_EVENT("FBI4_SWITCH_1")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::IS_SRL_LOADED())
	{
		return 1;
	}
	return 0;
}

int func_889()//Position - 0x8370B
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_3098[1], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_3098[1], 0f, 3f, 0f) - ENTITY::GET_ENTITY_COORDS(uLocal_3098[1], 1) };
	if (GlobalFunc_168(Var0, Var3) < 0f)
	{
		return 1;
	}
	return 0;
}

void func_890()//Position - 0x8375F
{
	STREAMING::REQUEST_MODEL(Local_2956.f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi4");
	STREAMING::REQUEST_ANIM_DICT("missheat");
	STREAMING::REQUEST_ANIM_DICT(sLocal_7599);
	iLocal_3804 = unk_0x67D02A194A2FC2BD("binoculars");
	AUDIO::PREPARE_MUSIC_EVENT("FBI4_SWITCH_1");
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_891()//Position - 0x837A3
{
	int iVar0;
	
	switch (iLocal_3357)
	{
		case 0:
			GlobalFunc_7621(1, 0, 0, 1, 0);
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
			STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
			STREAMING::REQUEST_MODEL(Local_1176.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_1206.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
			STREAMING::REQUEST_MODEL(Local_1478.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1478.f_1, 1);
			STREAMING::REQUEST_ANIM_DICT("missfbi4");
			STREAMING::REQUEST_ANIM_DICT("missheat");
			STREAMING::REQUEST_MODEL(Local_2956.f_2);
			iLocal_3804 = unk_0x67D02A194A2FC2BD("binoculars");
			STREAMING::REQUEST_PTFX_ASSET();
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkcountry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(25, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkheat");
			VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkheat");
			STREAMING::REQUEST_ANIM_DICT("missfbi4leadinoutfbi_4_mcs_3");
			while (((((((((((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_1176.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1478.f_1)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkcountry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(25, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkheat")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkheat")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi4leadinoutfbi_4_mcs_3"))
			{
				SYSTEM::WAIT(0);
			}
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			MISC::CLEAR_AREA(1376.082f, -2082.048f, 50.9983f, 40f, 1, 0, 0, 0);
			PATHFIND::SET_ROADS_IN_AREA(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, 0, 1);
			func_404(&(uLocal_3098[0]), 0, 1376.082f, -2082.048f, 50.9983f, 46.596f, 0, 0, 0);
			GlobalFunc_11257(PLAYER::PLAYER_PED_ID(), 12, 36, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			Local_3414 = { 1377.63f, -2082.943f, 50.997f };
			Local_3417 = { 0f, 0f, 130.5f };
			iLocal_3231 = PED::CREATE_SYNCHRONIZED_SCENE(Local_3414, Local_3417, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(uLocal_3098[0], iLocal_3231, "missfbi4leadinoutfbi_4_mcs_3", "_leadin_michael", 1000f, -1000f, 0, 0, 1148846080, 0);
			Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 1381.472f, -2072.245f, 50.9981f, 38.334f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1176);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1176, 1);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_1176, 0, 0);
			GlobalFunc_534(Local_1176, 0);
			Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 1377.14f, -2076.2f, 52f, 40.03813f, 1, 1);
			VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1206);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1206, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1206, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 3);
			VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1206);
			GlobalFunc_534(Local_1206, 1);
			func_280(&Local_1478, 2, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(101, 1450f, "lkheat"), 40.3225f, 0, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1478, 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1478, 3);
			iLocal_3357++;
			break;
		
		case 1:
			CUTSCENE::REQUEST_CUTSCENE("fbi_4_mcs_3_concat", 8);
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!Global_10)
				{
					iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
					if ((iVar0 >= 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < 1) && CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GlobalFunc_576();
						Global_10 = 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.038f, -2063.979f, 50.62326f, 1360.417f, -2085.506f, 57.87326f, 14.625f, 0, 1, 0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3098[0], "michael", 0, GlobalFunc_4917(0), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1176, "fbi_bin_lorry", 0, joaat("trash"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1206, "fbi_truck", 0, joaat("towtruck"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
					CUTSCENE::START_CUTSCENE(0);
					iLocal_3282 = 1;
					iLocal_1125 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
}


void func_893()//Position - 0x83FA1
{
	int iVar0;
	
	switch (iLocal_3282)
	{
		case 0:
			GlobalFunc_7621(1, 0, 0, 1, 0);
			switch (GlobalFunc_8315())
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("fbi_4_mcs_3_concat", 8);
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
						{
							Local_1176 = Global_86864[0];
							Local_1206 = Global_86864[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1176, 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1206, 1, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklin", 2, GlobalFunc_4917(1), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevors_car", 2, Local_1478.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1176, "fbi_bin_lorry", 0, joaat("trash"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1206, "fbi_truck", 0, joaat("towtruck"), 0);
							GlobalFunc_8316(1, 1, 1, 0);
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::_0x48621C9FCA3EBD28(4);
							iLocal_3282++;
						}
					}
					break;
				
				case 1:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_4_mcs_3_concat", 14, 8);
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
						{
							bLocal_3213 = true;
							uLocal_3098[0] = Global_86864.f_9[0];
							Local_1176 = Global_86864[0];
							Local_1206 = Global_86864[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_3098[0], 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1176, 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1206, 1, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3098[0], "michael", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevors_car", 2, Local_1478.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1176, "fbi_bin_lorry", 0, joaat("trash"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1206, "fbi_truck", 0, joaat("towtruck"), 0);
							GlobalFunc_8316(1, 1, 1, 0);
							CUTSCENE::START_CUTSCENE(256);
							RECORDING::_0x48621C9FCA3EBD28(3);
							iLocal_3282++;
						}
					}
					break;
				
				case 2:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_4_mcs_3_concat", 12, 8);
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if ((((ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[0])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[1])) && ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
						{
							bLocal_3213 = true;
							uLocal_3098[0] = Global_86864.f_9[0];
							uLocal_3098[1] = Global_86864.f_9[1];
							Local_1176 = Global_86864[0];
							Local_1206 = Global_86864[1];
							Local_1478 = Global_86864[2];
							if (!ENTITY::IS_ENTITY_DEAD(Local_1478))
							{
								VEHICLE::SET_VEHICLE_FIXED(Local_1478);
								ENTITY::SET_ENTITY_HEALTH(Local_1478, 1000);
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_1478, 1000f);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_1478, 1000f);
							}
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_3098[0], 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_3098[1], 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1176, 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1206, 1, 1);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1478, 1, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3098[0], "michael", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3098[1], "franklin", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1478, "trevors_car", 0, Local_1478.f_1, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1176, "fbi_bin_lorry", 0, joaat("trash"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1206, "fbi_truck", 0, joaat("towtruck"), 0);
							GlobalFunc_8316(1, 1, 1, 0);
							CUTSCENE::START_CUTSCENE(256);
							RECORDING::_0x48621C9FCA3EBD28(4);
							iLocal_3282++;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
				GlobalFunc_562(38);
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (iVar0 != Local_1478)
				{
					GlobalFunc_8365(1401.59f, -2053.698f, 50.9983f, 4f, 0);
					GlobalFunc_9805(1351.419f, -2065.903f, 46.098f, 1395.749f, -2028.968f, 58.998f, 80f, 1401.59f, -2053.698f, 50.9983f, 80.931f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
					func_563(1401.59f, -2053.698f, 50.9983f, 80.931f);
				}
				PATHFIND::SET_ROADS_IN_AREA(1412.83f, -1954.96f, -100f, 1406.5f, -1941.47f, 100f, 0, 1);
				MISC::CLEAR_AREA(1379.374f, -2074.824f, 50.9985f, 1000f, 1, 0, 0, 0);
				GlobalFunc_5652(&Local_3073, 1, 0);
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_1206, 1, 1, 1);
				func_902();
				func_901();
				iLocal_3282++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					func_902();
					func_901();
					switch (GlobalFunc_8315())
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1))))
							{
								uLocal_3098[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)));
							}
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2))))
							{
								uLocal_3098[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)));
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1478))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1)))
								{
									Local_1478 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1));
									if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 6)
									{
										VEHICLE::SET_VEHICLE_LIGHTS(Local_1478, 3);
									}
								}
							}
							if (!iLocal_3206)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]) && ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
								{
									func_897(PLAYER::PLAYER_PED_ID());
									func_897(uLocal_3098[1]);
									func_897(uLocal_3098[2]);
									iLocal_3206 = 1;
								}
							}
							if (!iLocal_3195)
							{
								if (CUTSCENE::GET_CUTSCENE_TIME() >= 84000)
								{
									func_317(PLAYER::PLAYER_PED_ID());
									func_317(uLocal_3098[1]);
									func_317(uLocal_3098[2]);
									iLocal_3195 = 1;
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_3098[1], Local_1206, -1);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
							}
							break;
						
						case 1:
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2))))
							{
								uLocal_3098[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)));
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1478))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1)))
								{
									Local_1478 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1));
									if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 6)
									{
										VEHICLE::SET_VEHICLE_LIGHTS(Local_1478, 3);
									}
								}
							}
							if (!iLocal_3206)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
								{
									func_897(PLAYER::PLAYER_PED_ID());
									func_897(uLocal_3098[0]);
									func_897(uLocal_3098[2]);
									iLocal_3206 = 1;
								}
							}
							if (!iLocal_3195)
							{
								if (CUTSCENE::GET_CUTSCENE_TIME() >= 84000)
								{
									func_317(PLAYER::PLAYER_PED_ID());
									func_317(uLocal_3098[0]);
									func_317(uLocal_3098[2]);
									iLocal_3195 = 1;
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206, -1);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
								{
									GlobalFunc_9134(&uLocal_3098, 0);
									func_439(&uLocal_3098, 1, 1, 0);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									GlobalFunc_9134(&uLocal_3098, 0);
									func_439(&uLocal_3098, 1, 1, 0);
								}
							}
							break;
						
						case 2:
							if (!iLocal_3206)
							{
								func_897(PLAYER::PLAYER_PED_ID());
								func_897(uLocal_3098[0]);
								func_897(uLocal_3098[1]);
								iLocal_3206 = 1;
							}
							if (!iLocal_3195)
							{
								if (CUTSCENE::GET_CUTSCENE_TIME() >= 84000)
								{
									func_317(PLAYER::PLAYER_PED_ID());
									func_317(uLocal_3098[0]);
									func_317(uLocal_3098[1]);
									iLocal_3195 = 1;
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_3098[1], Local_1206, -1);
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
								{
									GlobalFunc_9134(&uLocal_3098, 0);
									func_439(&uLocal_3098, 1, 1, 0);
								}
							}
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									GlobalFunc_9134(&uLocal_3098, 0);
									func_439(&uLocal_3098, 1, 1, 0);
								}
							}
							break;
					}
				}
				else
				{
					RECORDING::_0x13B350B8AD0EEE10();
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					iLocal_3282++;
				}
			}
			else
			{
				RECORDING::_0x81CBAE94390F9F89();
				func_896();
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1))))
						{
							uLocal_3098[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)));
						}
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2))))
						{
							uLocal_3098[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)));
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1478))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1)))
							{
								Local_1478 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1));
							}
						}
						if (!iLocal_3206)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[1]) && ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
							{
								func_897(PLAYER::PLAYER_PED_ID());
								func_897(uLocal_3098[1]);
								func_897(uLocal_3098[2]);
								iLocal_3206 = 1;
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
						{
							RECORDING::_0x81CBAE94390F9F89();
						}
						break;
					
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2))))
						{
							uLocal_3098[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", GlobalFunc_4917(2)));
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_1478))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1)))
							{
								Local_1478 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevors_car", Local_1478.f_1));
							}
						}
						if (!iLocal_3206)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
							{
								func_897(PLAYER::PLAYER_PED_ID());
								func_897(uLocal_3098[0]);
								func_897(uLocal_3098[2]);
								iLocal_3206 = 1;
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206, -1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
						{
							GlobalFunc_9134(&uLocal_3098, 0);
							func_439(&uLocal_3098, 1, 1, 0);
							RECORDING::_0x81CBAE94390F9F89();
						}
						break;
					
					case 2:
						if (!iLocal_3206)
						{
							func_897(PLAYER::PLAYER_PED_ID());
							func_897(uLocal_3098[0]);
							func_897(uLocal_3098[1]);
							iLocal_3206 = 1;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("franklin", GlobalFunc_4917(1)))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_3098[1], Local_1206, -1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", GlobalFunc_4917(0)))
						{
							GlobalFunc_9134(&uLocal_3098, 0);
							func_439(&uLocal_3098, 1, 1, 0);
							RECORDING::_0x81CBAE94390F9F89();
						}
						break;
				}
			}
			else
			{
				func_902();
				func_901();
				if ((((func_895() && func_894()) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uLocal_3098[1])) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uLocal_3098[2]))
				{
					RECORDING::_0x81CBAE94390F9F89();
					switch (GlobalFunc_8315())
					{
						case 0:
							if (!iLocal_3195)
							{
								func_317(PLAYER::PLAYER_PED_ID());
								func_317(uLocal_3098[1]);
								func_317(uLocal_3098[2]);
								iLocal_3195 = 1;
							}
							break;
					}
					while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						SYSTEM::WAIT(0);
					}
					func_921();
					func_896();
				}
			}
			break;
	}
}

int func_894()//Position - 0x84B66
{
	if ((((((((((((((((((((((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkcountry") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(24, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(25, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(26, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(203, "lkheat")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, "lkheat"))
	{
		return 1;
	}
	return 0;
}

int func_895()//Position - 0x84D5B
{
	if (((((((STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) && STREAMING::HAS_MODEL_LOADED(Local_1176.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1176.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_1478.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "lkheat"))
	{
		return 1;
	}
	return 0;
}

void func_896()//Position - 0x84DD8
{
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_3098[1]);
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uLocal_3098[2]);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	PED::SET_PED_INTO_VEHICLE(uLocal_3098[2], Local_1478, -1);
	func_313(uLocal_3098[2], 0);
	func_312(&(uLocal_3098[2]), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 2, uLocal_3098[2], "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(uLocal_3098[1], Local_1206, -1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_3098[1], 1);
	func_313(uLocal_3098[1], 0);
	func_312(&(uLocal_3098[1]), 1);
	GlobalFunc_173(&(Local_3472[0 /*165*/]), 1, uLocal_3098[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_1176, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1176, 0);
	ENTITY::SET_ENTITY_COLLISION(Local_1176, 1, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1176, 1);
	GlobalFunc_534(Local_1176, 0);
	ENTITY::SET_ENTITY_VISIBLE(Local_1478, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1478, 0);
	ENTITY::SET_ENTITY_COLLISION(Local_1478, 1, 0);
	func_526("lkheat", 101, 1, 1);
	func_525();
	fLocal_440 = 200f;
	iLocal_49 = 1;
	iLocal_55 = 1;
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1478, 101, "lkheat", 1);
	func_487(Local_1478, 1f);
	func_483(Local_1478, 2000f);
	func_487(Local_1478, 1f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1478, 1, 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1478, 1);
	ENTITY::SET_ENTITY_VISIBLE(Local_1206, 1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1206, 0);
	ENTITY::SET_ENTITY_COLLISION(Local_1206, 1, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 3);
	VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_1206, 1);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1206, 102, "lkheat", 0);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1206, 800f);
	VEHICLE::SET_PLAYBACK_SPEED(Local_1206, 1f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1478, 1, 1);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_1206, 0);
	GlobalFunc_534(Local_1206, 1);
	if (bLocal_3213)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_561(0, 0, 0, 0f, 0f, 3000, 0, 1);
	}
	else
	{
		func_431(0, 0, 0f, 0f, 0, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
	}
	iLocal_3225 = MISC::GET_GAME_TIMER();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_SWITCH_BINOC_ST");
	iLocal_1125 = 1;
}

void func_897(int iParam0)//Position - 0x85015
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (iVar0 == 0)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] == -99)
			{
				GlobalFunc_11047(iParam0, 21);
			}
			else
			{
				GlobalFunc_11047(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0]);
			}
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] == -99)
			{
				GlobalFunc_10927(iParam0, 14, 38);
			}
			else
			{
				GlobalFunc_10927(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0]);
			}
		}
		else if (iVar0 == 1)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] == -99)
			{
				GlobalFunc_11047(iParam0, 13);
			}
			else
			{
				GlobalFunc_11047(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0]);
			}
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] == -99)
			{
				GlobalFunc_10927(iParam0, 14, 30);
			}
			else
			{
				GlobalFunc_10927(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0]);
			}
		}
		else if (iVar0 == 2)
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0] == -99)
			{
				GlobalFunc_11047(iParam0, 19);
			}
			else
			{
				GlobalFunc_11047(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[iVar0]);
			}
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0] == -99)
			{
				GlobalFunc_10927(iParam0, 14, 53);
			}
			else
			{
				GlobalFunc_10927(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1627[iVar0], Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1623[iVar0]);
			}
		}
	}
}




void func_901()//Position - 0x85360
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_1176.f_1, 15);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1478.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1478.f_1, 1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
}

void func_902()//Position - 0x853D2
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkcountry");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(20, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(21, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(22, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(23, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(24, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(25, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(26, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(27, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(203, "lkheat");
	VEHICLE::REQUEST_VEHICLE_RECORDING(204, "lkheat");
}






void func_908()//Position - 0x8578E
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
}


void func_910()//Position - 0x857B2
{
	if (bLocal_3193)
	{
		iLocal_3309 = MISC::GET_GAME_TIMER();
	}
	while (!GlobalFunc_588(&iLocal_3309, 4000))
	{
		SYSTEM::WAIT(0);
	}
	func_920();
	iLocal_3176 = 1;
	iLocal_3225 = MISC::GET_GAME_TIMER();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_MISSION_FAIL");
	GlobalFunc_10835(sLocal_3447);
	iLocal_1125 = 15;
}










void func_920()//Position - 0x8662A
{
	int iVar0;
	
	iVar0 = 0;
	if (HUD::DOES_BLIP_EXIST(uLocal_3448))
	{
		HUD::REMOVE_BLIP(&uLocal_3448);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3453))
	{
		HUD::REMOVE_BLIP(&uLocal_3453);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3449))
	{
		HUD::REMOVE_BLIP(&uLocal_3449);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1724 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_1724[iVar0 /*20*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_1724[iVar0 /*20*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_2445 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_2445[iVar0 /*20*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_2445[iVar0 /*20*/].f_2));
		}
		iVar0++;
	}
}

int func_921()//Position - 0x866CE
{
	switch (iLocal_1125)
	{
		case 0:
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
				sLocal_3447 = "cntry_fail7";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[2])))
			{
				sLocal_3447 = "cntry_fail8";
				return 1;
			}
			if (GlobalFunc_693(&Local_1478))
			{
				sLocal_3447 = "cntry_fail19";
				return 1;
			}
			if (GlobalFunc_693(&Local_1176))
			{
				sLocal_3447 = "cntry_fail3";
				return 1;
			}
			if (GlobalFunc_693(&Local_1206))
			{
				sLocal_3447 = "cntry_fail19";
				return 1;
			}
			if (GlobalFunc_8315() == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_3098[0], PLAYER::PLAYER_PED_ID(), 1))
					{
						sLocal_3447 = "cntry_fail18";
						return 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[2]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_3098[2], PLAYER::PLAYER_PED_ID(), 1))
					{
						sLocal_3447 = "cntry_fail18";
						return 1;
					}
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3098[0]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_3098[0], PLAYER::PLAYER_PED_ID(), 1))
					{
						sLocal_3447 = "cntry_fail18";
						return 1;
					}
				}
			}
			if (GlobalFunc_693(&Local_1176))
			{
				sLocal_3447 = "cntry_fail3";
				return 1;
			}
			if (GlobalFunc_693(&Local_1206))
			{
				sLocal_3447 = "cntry_fail4";
				return 1;
			}
			break;
		
		case 16:
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
			}
			if (GlobalFunc_694(&(uLocal_3098[2])))
			{
			}
			if (GlobalFunc_693(&Local_1478))
			{
			}
			if (GlobalFunc_693(&Local_1176))
			{
			}
			if (GlobalFunc_693(&Local_1206))
			{
			}
			break;
		
		case 1:
			if (GlobalFunc_693(&Local_1176))
			{
				sLocal_3447 = "cntry_fail3";
				return 1;
			}
			if (GlobalFunc_692(&Local_1176))
			{
				sLocal_3447 = "cntry_fail12";
				return 1;
			}
			if (GlobalFunc_693(&Local_1206))
			{
				sLocal_3447 = "cntry_fail4";
				return 1;
			}
			if (GlobalFunc_693(&Local_1478))
			{
				sLocal_3447 = "cntry_fail19";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
				sLocal_3447 = "cntry_fail7";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[2])))
			{
				sLocal_3447 = "cntry_fail8";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1176, 1), 1) > 200f)
			{
				sLocal_3447 = "cntry_fail22";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 972.8909f, -2073.692f, 30.5f, 1) > 500f)
			{
				sLocal_3447 = "cntry_fail10";
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_693(&Local_1191))
			{
				sLocal_3447 = "cntry_fail2";
				return 1;
			}
			if (GlobalFunc_694(&Local_1644))
			{
				sLocal_3447 = "cntry_fail0";
				return 1;
			}
			if (GlobalFunc_694(&Local_1664))
			{
				sLocal_3447 = "cntry_fail1";
				return 1;
			}
			if (GlobalFunc_694(&iLocal_3465))
			{
				sLocal_3447 = "cntry_fail6";
				return 1;
			}
			if (GlobalFunc_693(&Local_1176))
			{
				sLocal_3447 = "cntry_fail3";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_3447 = "cntry_fail6";
				return 1;
			}
			break;
		
		case 3:
			if (GlobalFunc_693(&Local_1176))
			{
				sLocal_3447 = "cntry_fail3";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
				sLocal_3447 = "cntry_fail7";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[uLocal_3098.f_5])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_693(&Local_1191))
			{
				sLocal_3447 = "cntry_fail2";
				return 1;
			}
			if (GlobalFunc_692(&Local_1176))
			{
				sLocal_3447 = "cntry_fail12";
				return 1;
			}
			if (GlobalFunc_693(&Local_1206))
			{
				sLocal_3447 = "cntry_fail4";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_3447 = "cntry_fail6";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 972.8909f, -2073.692f, 30.5f, 1) > 500f)
			{
				sLocal_3447 = "cntry_fail10";
				return 1;
			}
			break;
		
		case 4:
			if (GlobalFunc_693(&Local_1176))
			{
				sLocal_3447 = "cntry_fail3";
				return 1;
			}
			if (GlobalFunc_693(&Local_1206))
			{
				sLocal_3447 = "cntry_fail4";
				return 1;
			}
			if (GlobalFunc_693(&Local_1191))
			{
				sLocal_3447 = "cntry_fail2";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_692(&Local_1206))
			{
				sLocal_3447 = "cntry_fail20";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1191, 1), 1) > 150f)
			{
				sLocal_3447 = "cntry_fail11";
				return 1;
			}
			if (iLocal_3227 == 0)
			{
				if (func_925())
				{
					if (!PED::IS_PED_INJURED(Local_1644))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_1644, Local_1191))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_1191, 20f, 262144);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
							TASK::TASK_PERFORM_SEQUENCE(Local_1644, uLocal_3464);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
						}
					}
					else if (!PED::IS_PED_INJURED(Local_1664))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
						TASK::TASK_PERFORM_SEQUENCE(Local_1644, uLocal_3464);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
					}
					HUD::CLEAR_PRINTS();
					sLocal_3447 = "cntry_fail6";
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					iLocal_3225 = MISC::GET_GAME_TIMER();
					iLocal_1125 = 13;
					return 1;
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_3447 = "cntry_fail6";
				return 1;
			}
			break;
		
		case 5:
			if (GlobalFunc_693(&Local_1191))
			{
				sLocal_3447 = "cntry_fail2";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
				sLocal_3447 = "cntry_fail7";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[2])))
			{
				sLocal_3447 = "cntry_fail8";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				sLocal_3447 = "cntry_fail6";
				return 1;
			}
			if (iLocal_3256 == 0)
			{
				if (GlobalFunc_588(&iLocal_3308, 90000000))
				{
					sLocal_3447 = "cntry_fail26";
					AUDIO::DISTANT_COP_CAR_SIRENS(1);
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3409, "Distant_Sirens", 913.6f, -2301.6f, 34f, 0, 0, 0, 0);
					bLocal_3193 = true;
					return 1;
				}
			}
			if ((func_924(joaat("weapon_stickybomb")) && !MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(891.034f, -2362.032f, 29.282f, 888.756f, -2361.72f, 31.622f, 1.1f, joaat("weapon_stickybomb"), 0)) && !iLocal_3191)
			{
				if (GlobalFunc_588(&iLocal_3388, 2500))
				{
					sLocal_3447 = "cntry_god22";
					return 1;
				}
			}
			else
			{
				iLocal_3388 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_3189)
			{
				return 1;
			}
			break;
		
		case 6:
		case 7:
			if (!Local_3142.f_16)
			{
				if (GlobalFunc_694(&(uLocal_3098[0])))
				{
					sLocal_3447 = "cntry_fail5";
					return 1;
				}
				if (GlobalFunc_694(&(uLocal_3098[1])))
				{
					sLocal_3447 = "cntry_fail7";
					return 1;
				}
				if (GlobalFunc_694(&(uLocal_3098[2])))
				{
					sLocal_3447 = "cntry_fail8";
					return 1;
				}
				if (iLocal_3189)
				{
					return 1;
				}
			}
			break;
		
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(Local_1176))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_1176))
				{
					if (!bLocal_3208)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 50f, 50f, 50f, 0, 0, 0))
						{
							sLocal_3447 = "cntry_fail25";
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_COORD(Local_1176, Local_3807, 110f, 110f, 110f, 0, 0, 0))
					{
						sLocal_3447 = "cntry_fail25";
						return 1;
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_1176.f_2))
			{
				if (GlobalFunc_692(&Local_1176))
				{
					sLocal_3447 = "cntry_fail24";
					return 1;
				}
			}
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
				sLocal_3447 = "cntry_fail7";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[2])))
			{
				sLocal_3447 = "cntry_fail8";
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1176, 1), 1) > 200f)
				{
					sLocal_3447 = "cntry_fail22";
					return 1;
				}
			}
			break;
		
		case 11:
			if (GlobalFunc_694(&(uLocal_3098[0])))
			{
				sLocal_3447 = "cntry_fail5";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[1])))
			{
				sLocal_3447 = "cntry_fail7";
				return 1;
			}
			if (GlobalFunc_694(&(uLocal_3098[2])))
			{
				sLocal_3447 = "cntry_fail8";
				return 1;
			}
			if (GlobalFunc_694(&Local_2567))
			{
				sLocal_3447 = "cntry_fail13";
				func_923();
				return 1;
			}
			if (GlobalFunc_693(&Local_1463))
			{
				sLocal_3447 = "cntry_fail14";
				func_923();
				return 1;
			}
			if (iLocal_3209)
			{
				sLocal_3447 = "cntry_fail18";
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2567) && ENTITY::DOES_ENTITY_EXIST(Local_1463))
			{
				if (func_586(&Local_2567, &(Local_2567.f_10), Local_2567.f_14))
				{
				}
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_2567, 1), 15f))
				{
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_1463, ENTITY::GET_ENTITY_COORDS(Local_1463, 1), 2f, 2f, 2f, 0, 1, 0))
				{
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1463, PLAYER::PLAYER_PED_ID(), 1))
				{
				}
				if (func_922())
				{
				}
				if (((((func_586(&Local_2567, &(Local_2567.f_10), Local_2567.f_14) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_2567, 1), 15f)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_2567, 1), 4f, 1)) || !ENTITY::IS_ENTITY_AT_COORD(Local_1463, ENTITY::GET_ENTITY_COORDS(Local_1463, 1), 2f, 2f, 2f, 0, 1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1463, PLAYER::PLAYER_PED_ID(), 1)) || func_922())
				{
					func_923();
					TASK::OPEN_SEQUENCE_TASK(&uLocal_3464);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_3464);
					TASK::TASK_PERFORM_SEQUENCE(Local_2567, uLocal_3464);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_3464);
					sLocal_3447 = "cntry_fail18";
					return 1;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2567, 1), 1) < 30f)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						sLocal_3447 = "cntry_fail18";
						return 1;
					}
				}
			}
			break;
		
		case 12:
			if (GlobalFunc_694(&Local_2567))
			{
				sLocal_3447 = "cntry_fail13";
				return 1;
			}
			if (GlobalFunc_693(&Local_1463))
			{
				sLocal_3447 = "cntry_fail14";
				return 1;
			}
			break;
	}
	return 0;
}

int func_922()//Position - 0x87174
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2560.765f, 1899.763f, 166.057f, -2553.95f, 1898.684f, 171.157f, 15.9f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2558.312f, 1900.146f, 166.87f, -2604.425f, 1926.876f, 174.5f, 16.2f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2559.274f, 1911.036f, 166.87f, -2604.942f, 1934.406f, 174.5f, 24.1f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_923()//Position - 0x8721A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Local_2769 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_2769[iVar0 /*20*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2769[iVar0 /*20*/], 0);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_2769[iVar0 /*20*/], Local_2769[iVar0 /*20*/].f_6, 2f, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_2769[iVar0 /*20*/], 51, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_2769[iVar0 /*20*/], 50, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2769[iVar0 /*20*/], 200f, 0);
		}
		iVar0++;
	}
}

int func_924(int iParam0)//Position - 0x87299
{
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0) < 1)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_925()//Position - 0x872C9
{
	if ((GlobalFunc_588(&iLocal_3245, 42000) || func_927()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 907.426f, -2371.301f, 29.55f, 908.093f, -2362.426f, 33.55f, 6f, 0, 1, 0))
		{
			if ((func_586(&Local_1644, &(Local_1644.f_10), Local_1644.f_14) || func_586(&Local_1664, &(Local_1664.f_10), Local_1664.f_14)) || func_926(&Local_1191, &(Local_1191.f_9)))
			{
				return 1;
			}
		}
		else if (ENTITY::GET_ENTITY_HEADING(Local_1206) > 45f && ENTITY::GET_ENTITY_HEADING(Local_1206) < 135f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1206, Local_1191))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_1206) < 5f)
				{
					return 1;
				}
			}
		}
		else
		{
			if (func_586(&Local_1644, &(Local_1644.f_10), Local_1644.f_14))
			{
			}
			if (func_586(&Local_1664, &(Local_1664.f_10), Local_1664.f_14))
			{
			}
			if (func_926(&Local_1191, &(Local_1191.f_9)))
			{
			}
			if ((func_586(&Local_1644, &(Local_1644.f_10), Local_1644.f_14) || func_586(&Local_1664, &(Local_1664.f_10), Local_1664.f_14)) || func_926(&Local_1191, &(Local_1191.f_9)))
			{
				return 1;
			}
		}
	}
	else
	{
		if (func_586(&Local_1644, &(Local_1644.f_10), Local_1644.f_14))
		{
		}
		if (func_586(&Local_1664, &(Local_1664.f_10), Local_1664.f_14))
		{
		}
		if (func_926(&Local_1191, &(Local_1191.f_9)))
		{
		}
		if ((func_586(&Local_1644, &(Local_1644.f_10), Local_1644.f_14) || func_586(&Local_1664, &(Local_1664.f_10), Local_1664.f_14)) || func_926(&Local_1191, &(Local_1191.f_9)))
		{
			return 1;
		}
	}
	return 0;
}

int func_926(int iParam0, var uParam1)//Position - 0x874B2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(*iParam0);
			if (((VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(*iParam0) < IntToFloat(*uParam1) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(*iParam0) < IntToFloat(*uParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), 1)) || iVar0 < *uParam1)
			{
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

int func_927()//Position - 0x87523
{
	if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1206))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 875.867f, -2347.926f, 27.521f, 925.899f, -2352.039f, 35.521f, 190.8f, 0, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 913.41f, -2369.405f, 27.55f, 914.169f, -2360.739f, 33.55f, 22.9f, 0, 1, 0))
			{
				if (!iLocal_3181)
				{
					iLocal_3242 = MISC::GET_GAME_TIMER();
					iLocal_3181 = 1;
				}
				else if (GlobalFunc_588(&iLocal_3242, 5000))
				{
					return 1;
				}
			}
			else if (!iLocal_3182)
			{
				iLocal_3243 = MISC::GET_GAME_TIMER();
				iLocal_3182 = 1;
			}
			else if (GlobalFunc_588(&iLocal_3243, 5000))
			{
				return 1;
			}
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 913.41f, -2369.405f, 27.55f, 914.169f, -2360.739f, 33.55f, 22.9f, 0, 1, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 875.867f, -2347.926f, 27.521f, 925.899f, -2352.039f, 35.521f, 190.8f, 0, 1, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_1191, 1), 1) < 7f)
			{
				return 1;
			}
		}
	}
	return 0;
}




void func_931()//Position - 0x87718
{
	int iVar0;
	
	GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
	func_940();
	func_939();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
	GlobalFunc_696();
	PED::ADD_SCENARIO_BLOCKING_AREA(1570.8f, -1923.1f, 100f, 1258.2f, -2153.2f, -100f, 0, 1, 1, 1);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(891.696f, -2368.981f, 29.853f, 8.675f, 0.75f, 2.125f, GlobalFunc_723(-44.4f), 0, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(884.755f, -2365.731f, 29.785f, 7.325f, 0.75f, 2.125f, GlobalFunc_723(-4.7f), 0, 7);
	TASK::ADD_COVER_BLOCKING_AREA(843.7094f, -2302.698f, 29.3429f, 846.3494f, -2306.49f, 29.33395f, 1, 0, 1, 0);
	uLocal_3468 = TASK::ADD_COVER_POINT(881.53f, -2334.04f, 33.91f, 269.9536f, 0, 0, 0, 0);
	uLocal_3469 = TASK::ADD_COVER_POINT(871.79f, -2344.442f, 29.33137f, 273.9499f, 0, 0, 0, 0);
	uLocal_3470 = TASK::ADD_COVER_POINT(873.8578f, -2353.03f, 29.33141f, 281.0534f, 0, 0, 0, 0);
	uLocal_3471 = TASK::ADD_COVER_POINT(845.6603f, -2332.308f, 29.3346f, 348.7454f, 0, 0, 0, 0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	PED::_0xF2BEBCDFAFDAA19E(0);
	func_533();
	Global_9 = 1;
	if (!Global_3)
	{
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[0] == -99)
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[0] = 21;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[1] = 13;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1631[2] = 19;
		}
	}
	if (GlobalFunc_199())
	{
		iLocal_3832 = 1;
		if (!Global_84544)
		{
			switch (GlobalFunc_198())
			{
				case 0:
					func_482();
					break;
				
				case 1:
					func_428();
					break;
				
				case 2:
					func_426();
					break;
				
				case 3:
					func_395();
					break;
				
				case 4:
					func_325();
					break;
			}
		}
		else
		{
			iVar0 = GlobalFunc_198() + 1;
			switch (iVar0)
			{
				case 1:
					func_428();
					break;
				
				case 2:
					func_426();
					break;
				
				case 3:
					func_395();
					break;
				
				case 4:
					func_325();
					break;
				
				case 5:
					func_271();
					break;
				}
		}
		iLocal_3832 = 0;
	}
	else
	{
		Global_86819 = 4;
		if (!GlobalFunc_2(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			GlobalFunc_11089(0, "Start of mission", 0, 0, 0, 1);
		}
		else
		{
			func_932();
		}
	}
}

void func_932()//Position - 0x879D5
{
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(0));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(1));
	STREAMING::REQUEST_MODEL(GlobalFunc_4917(2));
	STREAMING::REQUEST_MODEL(Local_1176.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1176.f_1, 1);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_1176.f_1, 15);
	STREAMING::REQUEST_MODEL(Local_1206.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1206.f_1, 1);
	STREAMING::REQUEST_MODEL(Local_1478.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_1478.f_1, 1);
	while ((((((!STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(0)) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(2))) || !STREAMING::HAS_MODEL_LOADED(GlobalFunc_4917(1))) || !STREAMING::HAS_MODEL_LOADED(Local_1176.f_1)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_1176.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1206.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_1478.f_1))
	{
		SYSTEM::WAIT(0);
	}
	GlobalFunc_7621(1, 0, 0, 1, 0);
	MISC::CLEAR_AREA(1377.909f, -2071.441f, 50.9983f, 1000f, 1, 0, 0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	func_436(0, 0);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1368.444f, -2072.823f, 50.9983f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 235.72f);
	Local_1176 = VEHICLE::CREATE_VEHICLE(Local_1176.f_1, 1381.472f, -2072.245f, 50.9981f, 38.334f, 1, 1);
	AUDIO::_0x43FA0DFC5DF87815(Local_1176, 0);
	GlobalFunc_534(Local_1176, 0);
	Local_1206 = VEHICLE::CREATE_VEHICLE(Local_1206.f_1, 1374.858f, -2077.374f, 50.9981f, 37.5148f, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Local_1206, 0, 0);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1206, 3);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1206, 1);
	GlobalFunc_534(Local_1206, 1);
	CUTSCENE::REQUEST_CUTSCENE("fbi_4_mcs_3_concat", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("franklin", PLAYER::PLAYER_PED_ID(), 0);
		GlobalFunc_11116(0, "michael", 2);
		GlobalFunc_11116(2, "trevor", 2);
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_START(1368.444f, -2072.823f, 50.9983f, GlobalFunc_590(0f, 0f, 235.72f), 10f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "franklin", 2, GlobalFunc_4917(1), 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, GlobalFunc_4917(2), 0);
	CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevors_car", 2, Local_1478.f_1, 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1176, 0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1176, "fbi_bin_lorry", 0, joaat("trash"), 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1206, 0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1206, "fbi_truck", 0, joaat("towtruck"), 0);
	}
	GlobalFunc_8316(1, 1, 1, 0);
	CUTSCENE::START_CUTSCENE(0);
	iLocal_3282 = 1;
}







void func_939()//Position - 0x883F3
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_3834);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_3835);
}

void func_940()//Position - 0x88415
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	HUD::REQUEST_ADDITIONAL_TEXT("heataud", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("CNTRY1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_941()//Position - 0x88453
{
	GlobalFunc_562(38);
	GlobalFunc_4935();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	}
	GlobalFunc_200(&(Local_3472[0 /*165*/]), 0);
	GlobalFunc_200(&(Local_3472[0 /*165*/]), 1);
	GlobalFunc_200(&(Local_3472[0 /*165*/]), 2);
	GlobalFunc_200(&(Local_3472[0 /*165*/]), 3);
	GlobalFunc_200(&(Local_3472[0 /*165*/]), 4);
	if (!GlobalFunc_142())
	{
		MISC::SET_TIME_SCALE(1f);
	}
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	STREAMING::END_SRL();
	GlobalFunc_699();
	AUDIO::DISTANT_COP_CAR_SIRENS(0);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3409))
	{
		AUDIO::STOP_SOUND(iLocal_3409);
	}
	MISC::RESET_DISPATCH_SPAWN_BLOCKING_AREAS();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::CLEAR_PED_NON_CREATION_AREA();
	VEHICLE::SET_DISTANT_CARS_ENABLED(1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(945.8f, -2080.8f, 100f, 1015.3f, -2035.2f, 32.3f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(924.63f, -2338.35f, 100f, 906.44f, -2371.57f, -100f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(906.8f, -2322f, 100f, 844f, -2365.1f, -100f, 1, 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	TASK::REMOVE_WAYPOINT_RECORDING("heat1");
	if (!iLocal_3804 == 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3804);
	}
	STREAMING::STREAMVOL_DELETE(uLocal_3805);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI4_MISSION_FAIL");
	STREAMING::END_SRL();
	SCRIPT::TERMINATE_THIS_THREAD();
}












