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
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 8;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	bool bLocal_113 = 0;
	bool bLocal_114 = 0;
	bool bLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	float fLocal_123[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_241[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_359[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_477[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_595[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	float fLocal_717[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_756[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_795[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_834[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_873[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_912[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_951[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_967[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_983[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_999[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1015 = 0f;
	float fLocal_1016 = 0f;
	float fLocal_1017 = 0f;
	float fLocal_1018 = 0f;
	float fLocal_1019 = 0f;
	float fLocal_1020 = 0f;
	float fLocal_1021 = 0f;
	float fLocal_1022 = 0f;
	float fLocal_1023 = 0f;
	float fLocal_1024 = 0f;
	float fLocal_1025 = 0f;
	float fLocal_1026 = 0f;
	float fLocal_1027 = 0f;
	float fLocal_1028 = 0f;
	float fLocal_1029 = 0f;
	float fLocal_1030 = 0f;
	float fLocal_1031 = 0f;
	float fLocal_1032 = 0f;
	float fLocal_1033 = 0f;
	float fLocal_1034 = 0f;
	float fLocal_1035 = 0f;
	int iLocal_1036[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1154[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1272[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1390[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1429[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1468[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1507[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1523 = 0;
	int iLocal_1524 = 0;
	int iLocal_1525 = 0;
	int iLocal_1526 = 0;
	int iLocal_1527 = 0;
	int iLocal_1528 = 0;
	int iLocal_1529 = 0;
	int iLocal_1530 = 0;
	int iLocal_1531 = 0;
	int iLocal_1532 = 0;
	int iLocal_1533 = 0;
	int iLocal_1534 = 0;
	int iLocal_1535 = 0;
	int iLocal_1536 = 0;
	int iLocal_1537 = 0;
	int iLocal_1538 = 0;
	int iLocal_1539 = 0;
	struct<3> Local_1540[117];
	struct<3> Local_1892[15];
	struct<3> Local_1938[38];
	struct<3> Local_2053 = { 0, 0, 0 } ;
	struct<3> Local_2056 = { 0, 0, 0 } ;
	struct<3> Local_2059 = { 0, 0, 0 } ;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	struct<3> Local_2068 = { 0, 0, 0 } ;
	struct<3> Local_2071 = { 0, 0, 0 } ;
	struct<3> Local_2074 = { 0, 0, 0 } ;
	struct<3> Local_2077 = { 0, 0, 0 } ;
	char cLocal_2080[64] = "";
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	int iLocal_2096 = 0;
	int iLocal_2097[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2215[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2231[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2270 = 0;
	int iLocal_2271 = 0;
	int iLocal_2272 = 0;
	int iLocal_2273[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2391[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2407[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2423[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2462[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2473 = 0;
	int iLocal_2474 = 0;
	int iLocal_2475 = 0;
	var uLocal_2476 = 15;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	bool bLocal_2492 = 0;
	bool bLocal_2493 = 0;
	bool bLocal_2494 = 0;
	bool bLocal_2495 = 0;
	int iLocal_2496 = 0;
	int iLocal_2497 = 0;
	int iLocal_2498 = 0;
	int iLocal_2499 = 0;
	int iLocal_2500 = 0;
	int iLocal_2501 = 0;
	int iLocal_2502 = 0;
	int iLocal_2503 = 0;
	int iLocal_2504 = 0;
	int iLocal_2505 = 0;
	int iLocal_2506 = 0;
	bool bLocal_2507 = 0;
	bool bLocal_2508 = 0;
	int iLocal_2509 = 0;
	int iLocal_2510 = 0;
	int iLocal_2511 = 0;
	int iLocal_2512 = 0;
	bool bLocal_2513 = 0;
	bool bLocal_2514 = 0;
	int iLocal_2515 = 0;
	int iLocal_2516 = 0;
	int iLocal_2517 = 0;
	int iLocal_2518 = 0;
	bool bLocal_2519 = 0;
	bool bLocal_2520 = 0;
	int iLocal_2521 = 0;
	bool bLocal_2522 = 0;
	bool bLocal_2523 = 0;
	int iLocal_2524 = 0;
	bool bLocal_2525 = 0;
	int iLocal_2526 = 0;
	bool bLocal_2527 = 0;
	int iLocal_2528 = 0;
	bool bLocal_2529 = 0;
	bool bLocal_2530 = 0;
	int iLocal_2531 = 0;
	bool bLocal_2532 = 0;
	int iLocal_2533 = 0;
	bool bLocal_2534 = 0;
	bool bLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	bool bLocal_2540 = 0;
	bool bLocal_2541 = 0;
	int iLocal_2542 = 0;
	int iLocal_2543 = 0;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	int iLocal_2546[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_2627 = 0f;
	float fLocal_2628 = 0f;
	float fLocal_2629 = 0f;
	float fLocal_2630 = 0f;
	float fLocal_2631 = 0f;
	float fLocal_2632 = 0f;
	float fLocal_2633 = 0f;
	float fLocal_2634 = 0f;
	float fLocal_2635 = 0f;
	float fLocal_2636 = 0f;
	float fLocal_2637 = 0f;
	float fLocal_2638 = 0f;
	float fLocal_2639 = 0f;
	float fLocal_2640 = 0f;
	float fLocal_2641 = 0f;
	int iLocal_2642 = 0;
	int iLocal_2643 = 0;
	int iLocal_2644 = 0;
	int iLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	int iLocal_2651 = 0;
	int iLocal_2652 = 0;
	int iLocal_2653 = 0;
	int iLocal_2654 = 0;
	int iLocal_2655 = 0;
	int iLocal_2656 = 0;
	int iLocal_2657[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2668 = 0;
	int iLocal_2669 = 0;
	int iLocal_2670 = 0;
	int iLocal_2671 = 0;
	int iLocal_2672 = 0;
	int iLocal_2673 = 0;
	int iLocal_2674 = 0;
	int iLocal_2675 = 0;
	int iLocal_2676 = 0;
	int iLocal_2677 = 0;
	int iLocal_2678 = 0;
	var uLocal_2679 = 0;
	int iLocal_2680 = 0;
	int iLocal_2681 = 0;
	int iLocal_2682 = 0;
	int iLocal_2683 = 0;
	int iLocal_2684 = 0;
	int iLocal_2685 = 0;
	int iLocal_2686 = 0;
	int iLocal_2687 = 0;
	int iLocal_2688 = 0;
	int iLocal_2689 = 0;
	int iLocal_2690 = 0;
	int iLocal_2691 = 0;
	int iLocal_2692 = 0;
	int iLocal_2693 = 0;
	int iLocal_2694 = 0;
	int iLocal_2695 = 0;
	int iLocal_2696 = 0;
	int iLocal_2697 = 0;
	int iLocal_2698 = 0;
	int iLocal_2699 = 0;
	int iLocal_2700 = 0;
	int iLocal_2701 = 0;
	int iLocal_2702 = 0;
	int iLocal_2703 = 0;
	int iLocal_2704 = 0;
	int iLocal_2705 = 0;
	int iLocal_2706 = 0;
	int iLocal_2707 = 0;
	int iLocal_2708 = 0;
	int iLocal_2709 = 0;
	int iLocal_2710 = 0;
	int iLocal_2711 = 0;
	int iLocal_2712 = 0;
	int iLocal_2713 = 0;
	int iLocal_2714 = 0;
	int iLocal_2715 = 0;
	int iLocal_2716 = 0;
	int iLocal_2717 = 0;
	int iLocal_2718 = 0;
	int iLocal_2719 = 0;
	int iLocal_2720 = 0;
	var uLocal_2721 = 10;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	struct<3> Local_2732 = { 0, 0, 0 } ;
	struct<3> Local_2735 = { 0, 0, 0 } ;
	struct<3> Local_2738 = { 0, 0, 0 } ;
	struct<3> Local_2741 = { 0, 0, 0 } ;
	struct<3> Local_2744 = { 0, 0, 0 } ;
	struct<3> Local_2747 = { 0, 0, 0 } ;
	struct<3> Local_2750 = { 0, 0, 0 } ;
	struct<3> Local_2753 = { 0, 0, 0 } ;
	struct<3> Local_2756 = { 0, 0, 0 } ;
	struct<3> Local_2759 = { 0, 0, 0 } ;
	struct<3> Local_2762 = { 0, 0, 0 } ;
	struct<3> Local_2765 = { 0, 0, 0 } ;
	struct<3> Local_2768 = { 0, 0, 0 } ;
	struct<3> Local_2771 = { 0, 0, 0 } ;
	struct<3> Local_2774 = { 0, 0, 0 } ;
	struct<3> Local_2777 = { 0, 0, 0 } ;
	struct<3> Local_2780 = { 0, 0, 0 } ;
	char* sLocal_2783 = NULL;
	char* sLocal_2784 = NULL;
	char* sLocal_2785 = NULL;
	char* sLocal_2786 = NULL;
	char* sLocal_2787 = NULL;
	char* sLocal_2788 = NULL;
	char* sLocal_2789 = NULL;
	char* sLocal_2790 = NULL;
	char* sLocal_2791 = NULL;
	char* sLocal_2792 = NULL;
	char* sLocal_2793 = NULL;
	char* sLocal_2794 = NULL;
	char* sLocal_2795 = NULL;
	char* sLocal_2796 = NULL;
	char* sLocal_2797 = NULL;
	char* sLocal_2798 = NULL;
	char* sLocal_2799 = NULL;
	char* sLocal_2800 = NULL;
	var uLocal_2801 = 0;
	int iLocal_2802 = 0;
	int iLocal_2803 = 0;
	int iLocal_2804 = 0;
	int iLocal_2805 = 0;
	var uLocal_2806 = 0;
	int iLocal_2807 = 0;
	int iLocal_2808[4] = { 0, 0, 0, 0 };
	int iLocal_2813[1] = { 0 };
	int iLocal_2815[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2836 = 0;
	int iLocal_2837 = 0;
	int iLocal_2838 = 0;
	int iLocal_2839 = 0;
	int iLocal_2840[2] = { 0, 0 };
	int iLocal_2843 = 0;
	int iLocal_2844 = 0;
	int iLocal_2845 = 0;
	int iLocal_2846[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2857[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2878[2] = { 0, 0 };
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	int iLocal_2887[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2896 = 0;
	int iLocal_2897 = 0;
	int iLocal_2898[2] = { 0, 0 };
	int iLocal_2901 = 0;
	int iLocal_2902 = 0;
	int iLocal_2903 = 0;
	int iLocal_2904[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2921[2] = { 0, 0 };
	int iLocal_2924[2] = { 0, 0 };
	var uLocal_2927 = 0;
	int iLocal_2928[2] = { 0, 0 };
	int iLocal_2931 = 0;
	int iLocal_2932 = 0;
	int iLocal_2933 = 0;
	int iLocal_2934 = 0;
	int iLocal_2935 = 0;
	int iLocal_2936 = 0;
	int iLocal_2937 = 0;
	int iLocal_2938 = 0;
	int iLocal_2939 = 0;
	int iLocal_2940 = 0;
	int iLocal_2941 = 0;
	int iLocal_2942 = 0;
	int iLocal_2943 = 0;
	int iLocal_2944 = 0;
	int iLocal_2945 = 0;
	int iLocal_2946 = 0;
	int iLocal_2947 = 0;
	int iLocal_2948 = 0;
	int iLocal_2949 = 0;
	int iLocal_2950 = 0;
	int iLocal_2951 = 0;
	int iLocal_2952 = 0;
	int iLocal_2953 = 0;
	int iLocal_2954 = 0;
	int iLocal_2955 = 0;
	int iLocal_2956 = 0;
	int iLocal_2957 = 0;
	int iLocal_2958 = 0;
	int iLocal_2959 = 0;
	int iLocal_2960 = 0;
	int iLocal_2961 = 0;
	int iLocal_2962 = 0;
	int iLocal_2963 = 0;
	int iLocal_2964 = 0;
	int iLocal_2965 = 0;
	struct<5> Local_2966 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_2971 = { 0, 0, 0 } ;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	struct<2> Local_2976 = { 0, 0 } ;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	struct<5> Local_2981[4];
	struct<5> Local_3002[2];
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	struct<7> Local_3018[6];
	struct<3> Local_3061 = { 0, 0, 0 } ;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	struct<5> Local_3066[2];
	struct<7> Local_3077[2];
	struct<2> Local_3092 = { 0, 0 } ;
	struct<14> Local_3094 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 3;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 4;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
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
	var uLocal_3137 = 4;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 4;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 4;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 4;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	int iLocal_3163 = 0;
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	int iLocal_3166 = 0;
	char* sLocal_3167 = NULL;
	struct<10> Local_3168[16];
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = -1;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 1000;
	var uLocal_3343 = 1000;
	var uLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_57 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_58 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_92 = true;
	bLocal_99 = true;
	bLocal_121 = true;
	fLocal_1015 = 120f;
	fLocal_1016 = 0f;
	fLocal_1018 = 1f;
	fLocal_1019 = 0f;
	fLocal_1020 = 1f;
	fLocal_1021 = 30f;
	fLocal_1023 = 1f;
	fLocal_1024 = 5f;
	fLocal_1025 = 1f;
	fLocal_1026 = 1f;
	fLocal_1027 = 100f;
	fLocal_1028 = 100f;
	fLocal_1029 = 0f;
	fLocal_1030 = 7000f;
	fLocal_1031 = 0f;
	fLocal_1032 = 0f;
	fLocal_1033 = 0.3f;
	fLocal_1034 = 0.5f;
	fLocal_1035 = 50f;
	iLocal_1526 = -1;
	iLocal_1534 = -1;
	iLocal_1535 = -1;
	bLocal_2507 = true;
	bLocal_2508 = true;
	bLocal_2530 = true;
	fLocal_2627 = 0f;
	fLocal_2628 = 0f;
	fLocal_2629 = 0f;
	fLocal_2630 = 123.744f;
	fLocal_2631 = -77.7f;
	fLocal_2632 = -87.9f;
	fLocal_2633 = 322.2873f;
	fLocal_2634 = 316.722f;
	fLocal_2635 = 251.8757f;
	fLocal_2636 = 0.4923f;
	fLocal_2637 = 0f;
	fLocal_2638 = 17.3f;
	fLocal_2639 = -160.9f;
	fLocal_2640 = 153.3213f;
	fLocal_2641 = 159.5713f;
	iLocal_2668 = -1;
	iLocal_2669 = -1;
	iLocal_2686 = -1;
	iLocal_2687 = -1;
	iLocal_2688 = -1;
	iLocal_2689 = -1;
	iLocal_2690 = -1;
	iLocal_2719 = -1;
	Local_2732 = { -31.17f, -1090.754f, 25.4344f };
	Local_2735 = { 0f, 0f, 0f };
	Local_2738 = { -25.4559f, -1426.998f, 29.656f };
	Local_2741 = { -56.8445f, -1107.244f, 24.4344f };
	Local_2744 = { -33.6656f, -1092.602f, 30.4344f };
	Local_2747 = { -16.1017f, -1079.592f, 25.6721f };
	Local_2750 = { -40.54f, -1096.27f, 25.43f };
	Local_2753 = { -42f, -1095.5f, 25.43f };
	Local_2756 = { -1899.216f, -593.5246f, 10.8973f };
	Local_2759 = { -1899.791f, -594.6526f, 10.8853f };
	Local_2762 = { -1883.565f, -575.7982f, 10.7861f };
	Local_2765 = { -24.9598f, -1437.647f, 29.6552f };
	Local_2768 = { -42.95f, -1097.3f, 25.41f };
	Local_2771 = { -43.98f, -1095.47f, 25.41f };
	Local_2774 = { -29.9308f, -1089.822f, 25.4221f };
	Local_2777 = { -34.2931f, -1089.394f, 25.4222f };
	Local_2780 = { -1663.97f, -1126.7f, 30.7f };
	sLocal_2783 = "mattarmenian";
	sLocal_2784 = "armenian_1_int";
	sLocal_2785 = "armenian_1_mcs_1";
	sLocal_2786 = "arm_1_mcs_2_concat";
	sLocal_2787 = "missarmenian1walktocar";
	sLocal_2788 = "missarmenian1@dealership";
	sLocal_2789 = "missarmenian1banter";
	sLocal_2790 = "missarmenian1movieextras";
	sLocal_2791 = "missarmenian1ig_13";
	sLocal_2792 = "missarmenian1leadinout";
	sLocal_2793 = "missarmenian1leadinoutarmenian_1_mcs_1_leadinout";
	sLocal_2794 = "arm1_01";
	sLocal_2795 = "arm1_05";
	sLocal_2796 = "missarmenian1driving_taunts@lamar_1";
	sLocal_2797 = "missarmenian1driving_taunts@lamar_2";
	sLocal_2798 = "missarmenian1driving_taunts@franklin";
	sLocal_2799 = "missarmenian1leadinoutarm_1_ig_14_leadinout";
	sLocal_2800 = "MISSFINALE_C2IG_5";
	iLocal_2943 = joaat("ninef2");
	iLocal_2944 = joaat("rapidgt2");
	iLocal_2945 = joaat("manana");
	iLocal_2946 = joaat("p_sec_gate_01_s");
	iLocal_2947 = joaat("p_sec_gate_01_s_col");
	iLocal_2948 = joaat("s_m_m_armoured_01");
	iLocal_2949 = joaat("s_m_m_security_01");
	iLocal_2950 = joaat("a_m_y_beach_02");
	iLocal_2951 = joaat("p_cs_shirt_01_s");
	iLocal_2952 = joaat("v_ilev_fa_warddoorl");
	iLocal_2953 = joaat("v_ilev_fa_warddoorr");
	iLocal_2954 = joaat("prop_ld_health_pack");
	iLocal_2955 = joaat("jetmax");
	iLocal_2956 = joaat("marquis");
	iLocal_2957 = joaat("a_m_y_beach_01");
	iLocal_2958 = joaat("prop_phone_ing");
	iLocal_2959 = joaat("prop_ld_ferris_wheel");
	iLocal_2960 = joaat("prop_ferris_car_01");
	iLocal_2961 = joaat("a_f_y_beach_01");
	iLocal_2962 = joaat("a_m_y_beach_01");
	iLocal_2963 = joaat("a_f_y_fitness_02");
	iLocal_2964 = joaat("a_m_y_beachvesp_01");
	iLocal_2965 = joaat("a_f_y_hipster_02");
	iLocal_3166 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		GlobalFunc_10632();
		iLocal_3165 = 1;
		Global_85392 = 3;
		func_806();
	}
	func_792();
	CLOCK::SET_CLOCK_TIME(8, 0, 0);
	CLOCK::SET_CLOCK_DATE(6, 5, 2009);
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			MISC::_0x7EC6F9A478A6A512();
			func_789(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_789(4, 0);
		}
		else if (iVar0 == 2)
		{
			if (Global_84544)
			{
				func_789(5, 0);
			}
			else
			{
				func_789(6, 0);
			}
		}
		else if (iVar0 == 3)
		{
			if (Global_84544)
			{
				func_789(9, 0);
			}
			else
			{
				func_789(10, 0);
			}
		}
		else if (iVar0 > 3)
		{
			if (Global_84544)
			{
				func_789(11, 0);
			}
			else
			{
				func_789(11, 0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		bLocal_2534 = true;
	}
	else
	{
		func_759(0, "OPENING_CUTSCENE", 0, 0, 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("M_FranklinAndLamar", 0);
		if (bLocal_2534)
		{
			if (iLocal_3165 == 1)
			{
				bLocal_2534 = false;
			}
		}
		if (!GlobalFunc_485(138))
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				GlobalFunc_585(138, 1);
			}
		}
		if (iLocal_3164 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_3077[0 /*7*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
					{
						func_744(4);
					}
					else
					{
						func_744(3);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3077[1 /*7*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
					{
						func_744(4);
					}
					else
					{
						func_744(3);
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_3077[iLocal_2643 /*7*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				func_744(2);
			}
		}
		if (iLocal_3164 > 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_3077[iLocal_2643 /*7*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
				{
					if (GlobalFunc_2226(&(Local_3077[iLocal_2643 /*7*/])))
					{
						func_744(7);
					}
				}
			}
		}
		if (iLocal_3164 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2804))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
				{
					if (iLocal_3164 > 9)
					{
						if (GlobalFunc_2226(&iLocal_2804))
						{
							func_744(8);
						}
					}
				}
				else
				{
					func_744(6);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2966))
		{
			if (PED::IS_PED_INJURED(Local_2966))
			{
				func_744(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2971.x))
		{
			if (PED::IS_PED_INJURED(Local_2971.x))
			{
				func_744(19);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2976))
		{
			if (PED::IS_PED_INJURED(Local_2976))
			{
				func_744(20);
			}
		}
		if (iLocal_3164 > 5)
		{
			func_742();
		}
		if (iLocal_3164 >= 10)
		{
			GlobalFunc_10061(&uLocal_3119, 1, 1);
		}
		if (!iLocal_2545)
		{
			if (iLocal_3164 >= 6)
			{
				GlobalFunc_5125(4, PLAYER::PLAYER_PED_ID());
				iLocal_2545 = 1;
			}
		}
		switch (iLocal_3164)
		{
			case 0:
				func_475();
				break;
			
			case 1:
				func_473();
				break;
			
			case 2:
				func_471();
				break;
			
			case 3:
			case 4:
				func_383();
				break;
			
			case 5:
				func_355();
				break;
			
			case 6:
				func_338();
				break;
			
			case 7:
				func_333();
				break;
			
			case 8:
				func_329();
				break;
			
			case 9:
				func_315();
				break;
			
			case 10:
				func_231();
				break;
			
			case 11:
				func_2();
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				break;
			
			case 17:
				break;
			
			case 18:
				break;
			
			case 19:
				break;
		}
		func_1();
	}
}

void func_1()//Position - 0x7CB
{
	float fVar0;
	
	if (!Local_3092.f_1)
	{
		if (iLocal_3164 == 3)
		{
			if (bLocal_2507)
			{
			}
			else if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2648, sLocal_2783))
			{
				fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783);
				Local_3092 = ((fLocal_2627 / fVar0) * 99f);
				PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_3092 / 100f), 1);
			}
		}
		else if (iLocal_3164 == 6)
		{
			if (!bLocal_2507)
			{
				if (!Local_3092.f_1)
				{
					Local_3092 = (Local_3092 + (1f * SYSTEM::TIMESTEP()));
					if (Local_3092 > 100f)
					{
						Local_3092 = 100f;
					}
					PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_3092 / 100f), 1);
				}
			}
		}
	}
}

void func_2()//Position - 0x885
{
	bool bVar0;
	struct<3> Var1;
	
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (bLocal_2534)
			{
				GlobalFunc_5116(-13.9541f, -1446.656f, 30.5515f, 335.0142f, 0, 0);
				iLocal_2642 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -13.9541f, -1446.656f, 30.5515f, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(-13.9541f, -1446.656f, 30.5515f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_2642 = 99;
			}
		}
		else if (func_225(-17.8292f, -1458.012f, 29.4598f, 0, 0) && func_187(Local_2765, fLocal_2636, 0))
		{
			GlobalFunc_5108(0, -1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2804, -1);
				if (!PED::IS_PED_INJURED(Local_2966))
				{
					PED::SET_PED_INTO_VEHICLE(Local_2966, iLocal_2804, 0);
				}
			}
			iLocal_3165 = 0;
		}
	}
	if (iLocal_3165 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_2786, 8);
		STREAMING::REQUEST_MODEL(iLocal_2951);
		STREAMING::REQUEST_MODEL(iLocal_2952);
		STREAMING::REQUEST_MODEL(iLocal_2953);
		STREAMING::REQUEST_MODEL(iLocal_2954);
		func_98(sLocal_2786);
		if (((((STREAMING::HAS_MODEL_LOADED(iLocal_2951) && STREAMING::HAS_MODEL_LOADED(iLocal_2952)) && STREAMING::HAS_MODEL_LOADED(iLocal_2953)) && STREAMING::HAS_MODEL_LOADED(iLocal_2954)) && SYSTEM::TIMERA() > 1000) && (!GlobalFunc_111() || GlobalFunc_620()))
		{
			bVar0 = false;
			if (MISC::IS_PC_VERSION())
			{
				bVar0 = GlobalFunc_Has_Cutscene_Loaded();
			}
			else
			{
				bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
			}
			if (bVar0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GO_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_1_GO_HOME");
				}
				iLocal_2896 = OBJECT::CREATE_OBJECT(iLocal_2951, -11.7f, -1439.255f, 30.099f, 1, 1, 0);
				iLocal_2897 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2954, -17.92f, -1436.34f, 30.2033f, 1, 1, 0);
				ENTITY::SET_ENTITY_HEADING(iLocal_2897, -158.75f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2897, 1);
				iLocal_2898[0] = OBJECT::CREATE_OBJECT(iLocal_2952, -12.7f, -1439.255f, 20.099f, 1, 1, 0);
				iLocal_2898[1] = OBJECT::CREATE_OBJECT(iLocal_2953, -10.7f, -1439.255f, 20.099f, 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2951);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2954);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2952);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2953);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2896, "Franklins_shirt", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2898[0], "Closet_Door_L", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2898[1], "Closet_Door_R", 0, 0, 0);
				ENTITY::CREATE_MODEL_HIDE(-18.3539f, -1438.784f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), 0);
				ENTITY::CREATE_MODEL_HIDE(-18.3594f, -1438.133f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), 0);
				GlobalFunc_10617(48, 0);
				GlobalFunc_10617(47, 0);
				OBJECT::_DOOR_CONTROL(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, 1, 0f, 0f, -1f);
				GlobalFunc_4956();
				GlobalFunc_8316(1, 1, 1, 0);
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
				CUTSCENE::START_CUTSCENE(8);
				RECORDING::_0x48621C9FCA3EBD28(4);
				if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
				{
					Global_85392 = 1;
				}
				iLocal_2642 = 0;
				iLocal_2501 = 0;
				iLocal_3165 = 1;
			}
		}
	}
	if (iLocal_3165 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_2501 = 1;
			iLocal_3165 = 3;
		}
		if (iLocal_2932 == 0)
		{
			iLocal_2932 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.6461f, -1437.332f, 31.116f, "v_franklins");
		}
		else if (!INTERIOR::IS_INTERIOR_READY(iLocal_2932))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2932);
		}
		Var1 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2896))
		{
			STREAMING::REQUEST_MODEL(iLocal_2951);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_2951))
			{
				iLocal_2896 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2951, -19.126f, -1438.791f, 31.6833f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_2896, -3.744568f, -0.022376f, 14.53727f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2896, 1);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2896, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2951);
			}
		}
		switch (iLocal_2642)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2804, -25.169f, -1427.966f, 29.6567f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_2804, 0.9548f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2804, 0, 0);
						VEHICLE::SET_VEHICLE_FIXED(iLocal_2804);
					}
					func_57(&Local_2966, 1);
					MISC::CLEAR_AREA(-17.8292f, -1458.012f, 29.4598f, 100f, 1, 0, 0, 0);
					GlobalFunc_2204();
					iLocal_2642++;
				}
				break;
			
			case 1:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 21500)
				{
					GlobalFunc_159("AR1_BARBERS", 7000);
					iLocal_2642++;
				}
				break;
			
			case 2:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 26700)
				{
					if (GlobalFunc_2203(0))
					{
						GlobalFunc_5649(0, 0, 1, 0, 0);
					}
					GlobalFunc_2201(19, 1);
					GlobalFunc_2201(20, 1);
					GlobalFunc_2201(21, 1);
					GlobalFunc_2201(22, 1);
					GlobalFunc_2201(23, 1);
					GlobalFunc_2201(24, 1);
					GlobalFunc_2201(25, 1);
					SYSTEM::SETTIMERA(0);
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 3:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((Var1.f_2 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				if (SYSTEM::TIMERA() > 3000)
				{
					GlobalFunc_159("AR1_SAVE1", -1);
					HUD::DISPLAY_RADAR(1);
					CUTSCENE::REGISTER_SYNCHRONISED_SCRIPT_SPEECH();
					if (!HUD::DOES_BLIP_EXIST(uLocal_2881))
					{
						uLocal_2881 = GlobalFunc_5104(-14.3803f, -1438.514f, 30.1015f, 0);
						HUD::SET_BLIP_SPRITE(uLocal_2881, 40);
						HUD::SET_BLIP_FLASHES(uLocal_2881, 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 4:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((Var1.f_2 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				CUTSCENE::REGISTER_SYNCHRONISED_SCRIPT_SPEECH();
				if (SYSTEM::TIMERB() > 5000)
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-14.8691f, -1441.159f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.159f, 31.1932f, 1, 0f, 0);
					}
					HUD::DISPLAY_RADAR(0);
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 5:
				if (!iLocal_2533)
				{
					if (GlobalFunc_74("AR1_SAVE1"))
					{
						if (SYSTEM::TIMERA() > 8750)
						{
							HUD::CLEAR_HELP(0);
							iLocal_2533 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 9500)
				{
					GlobalFunc_159("AR1_TVHELP", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 6:
				if (SYSTEM::TIMERB() > 5000)
				{
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 7:
				if (!iLocal_2533)
				{
					if (GlobalFunc_74("AR1_TVHELP"))
					{
						if (SYSTEM::TIMERA() > 15000)
						{
							HUD::CLEAR_HELP(0);
							iLocal_2533 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 16000)
				{
					GlobalFunc_159("AR1_MEDIHELP", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 8:
				if (SYSTEM::TIMERB() > 5000)
				{
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 9:
				if (!iLocal_2533)
				{
					if (GlobalFunc_74("AR1_MEDIHELP"))
					{
						if (SYSTEM::TIMERA() > 22500)
						{
							HUD::CLEAR_HELP(0);
							iLocal_2533 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 23500)
				{
					OBJECT::_DOOR_CONTROL(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, 0, 0f, 0f, 0f);
					GlobalFunc_159("AR1_SAVE2", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERB() > 5000)
				{
					GlobalFunc_159("AR1_SAVE2B", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 11:
				if (SYSTEM::TIMERB() > 5000)
				{
					SYSTEM::SETTIMERB(0);
					iLocal_2533 = 0;
					iLocal_2642++;
				}
				break;
			
			case 12:
				if (!iLocal_2533)
				{
					if (GlobalFunc_74("AR1_SAVE2B"))
					{
						if (SYSTEM::TIMERA() > 35000)
						{
							HUD::CLEAR_HELP(0);
							iLocal_2533 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 36000)
				{
					GlobalFunc_159("AR1_SAVE3", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 13:
				if (SYSTEM::TIMERB() > 7000)
				{
					HUD::CLEAR_HELP(0);
					iLocal_2642++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2896))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_shirt", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2896, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2898[0]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Closet_Door_L", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2898[0], 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2898[1]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Closet_Door_R", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2898[1], 1);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2896))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2896, 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_3165 = 2;
		}
	}
	if (iLocal_3165 == 2)
	{
		func_57(&Local_2966, 1);
		HUD::CLEAR_HELP(1);
		RECORDING::_0x81CBAE94390F9F89();
		if (iLocal_2501 && CAM::IS_SCREEN_FADED_OUT())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			GlobalFunc_2200(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 1, 10000);
		}
		func_31();
		OBJECT::_DOOR_CONTROL(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, 0, 0f, 0f, 0f);
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-14.8691f, -1441.159f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.159f, 31.1932f, 1, 0f, 0);
		}
		GlobalFunc_8316(0, 1, 1, 0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		GlobalFunc_2204();
		func_4(0);
	}
	if (iLocal_3165 == 3)
	{
		GlobalFunc_2195();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_2501 = 1;
		iLocal_3165 = 1;
	}
}


void func_4(bool bParam0)//Position - 0x1256
{
	if (bParam0)
	{
		if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_2204();
	}
	GlobalFunc_10944(5, 1);
	GlobalFunc_4927(2, 1);
	PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(1));
	func_31();
	GlobalFunc_2196(6, 0, 1);
	GlobalFunc_5103(0, 0);
	func_806();
}



























void func_31()//Position - 0x2113
{
	GlobalFunc_9131(0, 1, 0);
	GlobalFunc_9131(1, 1, 0);
	GlobalFunc_9131(2, 1, 0);
	GlobalFunc_9131(3, 1, 0);
	GlobalFunc_9131(4, 1, 0);
	GlobalFunc_9131(5, 1, 0);
	GlobalFunc_9131(6, 1, 0);
}


























void func_57(int iParam0, bool bParam1)//Position - 0x2C3B
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, 1, 0);
			}
			if (PED::IS_PED_GROUP_MEMBER(*iParam0, GlobalFunc_468()))
			{
				PED::REMOVE_PED_FROM_GROUP(*iParam0);
			}
			if (!bParam1)
			{
				PED::SET_PED_KEEP_TASK(*iParam0, 1);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}









































void func_98(char* sParam0)//Position - 0x725A
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (iVar0 == 846233810)
		{
			GlobalFunc_11060("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 11, 0, 0, 0);
		}
		else if (iVar0 == 2029898270)
		{
			GlobalFunc_11060("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_2966, 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Siemon", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 3, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 8, 3, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 10, 2, 0, 0);
		}
		else if (iVar0 == -2000131661)
		{
			GlobalFunc_11060("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lamar", Local_2966, 0);
			}
		}
	}
}

























































































int func_187(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x1E09C
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
	{
		GlobalFunc_7046(1, 1);
		if (GlobalFunc_7045(1, 1))
		{
			if (bParam4)
			{
				return 1;
			}
			else if (func_188(&iLocal_2804, 1, Param0, fParam3, 1, 1))
			{
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_2804, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_2804, 1, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2804, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_2804, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2804, 1);
				AUDIO::_0x6FDDAD856E36988A(iLocal_2804, 1);
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

int func_188(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x1E11E
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
					func_189(iParam1, iParam0, 0, 1);
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

void func_189(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1EF04
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((GlobalFunc_42(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
	{
		if (iParam2 > Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_198(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 1;
			}
			else
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
			}
		}
		else
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_24 = 0;
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62));
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_65 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_69), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_70), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_71));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_68), 31);
		}
		Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3209[iParam0] = 10;
		if ((VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) < 255) && GlobalFunc_6706(*iParam1, 0, &uVar0))
		{
			GlobalFunc_102(iParam1, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_57));
			if (bParam3)
			{
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_40 = 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_63;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_60;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_5 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_61;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_6 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_62;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_10 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_66;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_16 = !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_64;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_19 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_27 };
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_23 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_26;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_7 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[11];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[12];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_9 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[23];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_11 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[4];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[15];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_13 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[16];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_14 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[14];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_15 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[22];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_18 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[20];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_17 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_31[18];
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_31 = GlobalFunc_192(*iParam1);
				Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				GlobalFunc_4968(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_7, iVar3, 1, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				GlobalFunc_4968(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[iParam2 /*223*/][iParam0 /*74*/].f_6, -1, iVar3, 0, &(Global_SAVE_DATA.SOCIAL_SAVED_DATA_STRUCT[iParam0 /*43*/].f_2));
			}
		}
	}
}









void func_198(int iParam0, int iParam1)//Position - 0x21681
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_202(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4800[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4798 = iParam1;
	Global_68043 = iParam0;
	Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4796 = 1;
	GlobalFunc_4932(iParam0, &(Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4742));
}




int func_202(int iParam0)//Position - 0x21C8F
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || GlobalFunc_5651(iParam0, 0, 0)) || GlobalFunc_5651(iParam0, 1, 0)) || GlobalFunc_5651(iParam0, 2, 0)) || GlobalFunc_99(iParam0) != 145) || GlobalFunc_87(iParam0)) || GlobalFunc_86(iParam0)) || GlobalFunc_85(iParam0)) || GlobalFunc_7044(iParam0)) || !GlobalFunc_7043(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (GlobalFunc_86(iParam0))
		{
		}
		if (GlobalFunc_86(iParam0))
		{
		}
		if (GlobalFunc_5651(iParam0, 0, 0))
		{
		}
		if (GlobalFunc_5651(iParam0, 1, 0))
		{
		}
		if (GlobalFunc_5651(iParam0, 2, 0))
		{
		}
		if (GlobalFunc_99(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}























int func_225(struct<3> Param0, float fParam3, int iParam4)//Position - 0x22A36
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2966) || iParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2966))
		{
			if (GlobalFunc_7047(&Local_2966, 19, Param0, fParam3, 1))
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
			PED::SET_PED_COMPONENT_VARIATION(Local_2966, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2966, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2966, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2966, 5, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2966, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2966, 8, 0, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_2966, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2966, 1862763509);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 182, 1);
			GlobalFunc_173(&Local_3168, 5, Local_2966, "LAMAR", 0, 1);
			return 1;
		}
	}
	else
	{
		if (Local_3168[5 /*10*/] != Local_2966)
		{
			GlobalFunc_173(&Local_3168, 5, Local_2966, "LAMAR", 0, 1);
		}
		return 1;
	}
	return 0;
}






void func_231()//Position - 0x22D48
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	int iVar6[1];
	float fVar8;
	int iVar9;
	struct<2> Var10;
	var uVar14;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	
	if (iLocal_3165 == 4)
	{
		if (iLocal_2931 == 0)
		{
			iLocal_2931 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2931);
		if (bLocal_2534)
		{
			GlobalFunc_5116(Local_2750, fLocal_2631, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2631);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			STREAMING::LOAD_SCENE(Local_2750);
			SYSTEM::WAIT(0);
		}
		func_314();
		while ((((((((((!INTERIOR::IS_INTERIOR_READY(iLocal_2931) || !func_313(0)) || !func_312(0)) || !ENTITY::DOES_ENTITY_EXIST(Local_2966)) || !ENTITY::DOES_ENTITY_EXIST(Local_3077[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_3077[1 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_2804)) || !ENTITY::DOES_ENTITY_EXIST(Local_2976)) || !ENTITY::DOES_ENTITY_EXIST(Local_2971.x)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(GlobalFunc_4931(1, 1))) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2793))
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(GlobalFunc_4931(1, 1), 3);
			STREAMING::REQUEST_ANIM_DICT(sLocal_2793);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2931);
			func_225(Local_2753, fLocal_2632, 0);
			func_311(34.0424f, -638.7692f, 30.6252f, 0);
			func_310(44.0424f, -638.7692f, 30.6252f, 0);
			func_187(Local_2747, fLocal_2630, 0);
			func_309(Local_2768, fLocal_2638, 0);
			func_306(Local_2771, fLocal_2639, 0);
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(0, -1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		func_305();
		func_304();
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2631);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], -30.5774f, -1090.563f, 25.4222f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 159.6013f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 1);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[iLocal_2643 /*7*/], 0);
		}
		iLocal_2689 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, GlobalFunc_723(-67.2459f), 0, 7);
		iLocal_2690 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, 72.3459f, 0, 7);
		func_302();
		iLocal_2642 = 99;
		iLocal_2515 = 1;
		iLocal_3165 = 0;
	}
	if (iLocal_3165 == 0)
	{
		if (iLocal_2931 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_2931))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_2931);
				iLocal_2931 = 0;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[0 /*7*/], 0, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[0 /*7*/], 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[1 /*7*/], 0, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[1 /*7*/], 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_2804);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -38.077f, -1096.467f, 25.4223f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 296.617f);
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				ENTITY::SET_ENTITY_COORDS(Local_2966, Local_2753, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_2966, fLocal_2632);
			}
			while (!func_313(0))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_2642 != 99)
			{
				GlobalFunc_2200(Local_2750, 100f, 1, 5000);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0) && !PED::IS_PED_INJURED(Local_2966))
			{
				TASK::TASK_ENTER_VEHICLE(Local_2966, iLocal_2804, 40000, 0, 1f, 1, 0);
			}
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 296.617f, 0, 0);
			SYSTEM::WAIT(500);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		func_301(1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GO_HOME"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_GO_HOME");
		}
		if (!PED::IS_PED_INJURED(Local_2976) && !PED::IS_PED_INJURED(Local_2971.x))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2793))
			{
				iLocal_2708 = PED::CREATE_SYNCHRONIZED_SCENE(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2971.x, iLocal_2708, sLocal_2793, "_leadout_simeon", 1000f, -1.5f, 5, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2976, iLocal_2708, sLocal_2793, "_leadout_jimmy", 1000f, -1.5f, 5, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2708, 0f);
			}
			TASK::TASK_LOOK_AT_ENTITY(Local_2971.x, Local_2976, -1, 2048, 2);
		}
		GlobalFunc_2204();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[0 /*7*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[0 /*7*/], 0);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_3077[0 /*7*/], 1);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3077[0 /*7*/]);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[1 /*7*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[1 /*7*/], 0);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_3077[1 /*7*/], 1);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3077[1 /*7*/]);
		}
		func_300(&(iLocal_2813[0]), 0);
		func_299();
		GlobalFunc_10617(48, 1);
		GlobalFunc_10617(47, 1);
		func_759(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		SYSTEM::SETTIMERA(0);
		Local_2971.f_2 = 0;
		iLocal_2700 = 0;
		iLocal_2711 = 0;
		iLocal_2642 = 0;
		iLocal_2521 = 0;
		iLocal_3165 = 1;
	}
	if (iLocal_3165 == 1)
	{
		GlobalFunc_10617(49, 3);
		if (SYSTEM::TIMERA() < 3000)
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			if (!iLocal_2521)
			{
				MISC::SET_BIT(&(Local_3094.f_13), 10);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_2966, 1f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2804) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2804))
				{
					MISC::CLEAR_BIT(&(Local_3094.f_13), 10);
					if (!PED::IS_PED_IN_VEHICLE(Local_2966, iLocal_2804, 0))
					{
						TASK::TASK_ENTER_VEHICLE(Local_2966, iLocal_2804, 20000, 0, 2f, 1, 0);
					}
					iLocal_2521 = 1;
				}
			}
		}
		switch (iLocal_2642)
		{
			case 0:
				if (!HUD::DOES_BLIP_EXIST(uLocal_2881))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
					{
						uLocal_2881 = GlobalFunc_6783(iLocal_2804, 0, 0);
					}
				}
				if (!iLocal_2546[62])
				{
					if (!GlobalFunc_5172(&Local_3094, 1))
					{
						GlobalFunc_173(&Local_3168, 6, Local_2976, "JIMMY", 0, 1);
						GlobalFunc_173(&Local_3168, 4, Local_2971.x, "SIMEON", 0, 1);
						if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_GETINJ", 7, 0, 0, 0))
						{
							iLocal_2546[62] = 1;
						}
					}
				}
				else if (GlobalFunc_10630(&Local_3168, "ARM1AUD", "ARM1_LEAVEG", "ARM1_LEAVEG_1", 7, 0, 0))
				{
					iLocal_2546[53] = 1;
					iLocal_2642++;
				}
				break;
			
			case 1:
				if (HUD::DOES_BLIP_EXIST(uLocal_2881))
				{
					HUD::REMOVE_BLIP(&uLocal_2881);
				}
				if (func_250(&Local_3094, Local_2738, 0.001f, 0.001f, 2f, 1, Local_2966, iLocal_2804, "AR1_HOME", "AR1_WAIT", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1))
				{
					iLocal_2642++;
				}
				else if (HUD::DOES_BLIP_EXIST(Local_3094.f_5))
				{
					if (!iLocal_2546[54])
					{
						if (iLocal_2700 == 0)
						{
							iLocal_2700 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_2700) > 7000)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (GlobalFunc_663("AR1_HOME", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								GlobalFunc_159("AR1_VIEWSTATS", 15000);
								iLocal_2546[54] = 1;
								iLocal_2700 = 0;
							}
						}
					}
					else if (!iLocal_2546[55])
					{
						if (!PAD::IS_CONTROL_PRESSED(0, 19))
						{
							iLocal_2700 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_2700) > 250 && GlobalFunc_126(1))
						{
							GlobalFunc_159("AR1_VIEWSTATS2", 15000);
							iLocal_2546[55] = 1;
						}
					}
					if (iLocal_2515)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(GlobalFunc_4931(1, 1));
						iLocal_2515 = 0;
					}
					fVar1 = 12f;
					fVar2 = ENTITY::GET_ENTITY_SPEED(iLocal_2804);
					if (fVar2 < 3f)
					{
						fVar2 = 3f;
					}
					else if (fVar2 > fVar1)
					{
						fVar2 = fVar1;
					}
					fVar0 = (2f + (((fVar2 - 3f) / (fVar1 - 3f)) * 8.5f));
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.6771f, -1427.279f, 29.66922f, -23.04911f, -1427.3f, 32.1599f, fVar0, 0, 1, 0) && GlobalFunc_552(1, 1, 1))
					{
						GlobalFunc_5652(&Local_3094, 1, 0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						fLocal_2637 = fVar2;
						iLocal_2642++;
					}
					else if (SYSTEM::TIMERA() > 1000 && GlobalFunc_631(PLAYER::PLAYER_PED_ID(), Local_2966))
					{
						if (GlobalFunc_620())
						{
							GlobalFunc_619(0);
						}
						if (!iLocal_2546[56])
						{
							if (!GlobalFunc_5172(&Local_3094, 1))
							{
								if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_DRIV2A", 7, 0, 0, 0))
								{
									iLocal_2546[56] = 1;
								}
							}
						}
						else if (!iLocal_2546[58])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -16.96474f, -1462.947f, 29.15786f, -17.41634f, -1431.48f, 36.68279f, 22.25f, 0, 1, 0))
							{
								if (!GlobalFunc_5172(&Local_3094, 1))
								{
									if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
									{
										iLocal_2546[58] = 1;
									}
								}
								else
								{
									GlobalFunc_5105();
								}
							}
						}
					}
				}
				else if (iLocal_2546[56] || iLocal_2546[58])
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
				break;
			
			case 2:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 27, 1);
					if (fLocal_2637 > 3f && fLocal_2637 < 12f)
					{
						fVar5 = 2f;
					}
					else
					{
						fVar5 = 3.5f;
					}
					if (GlobalFunc_530(iVar3, fVar5, 1, 1056964608, 0, 1))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
				if (!iLocal_2546[58])
				{
					if (GlobalFunc_5172(&Local_3094, 0))
					{
						GlobalFunc_5105();
					}
					else if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
					{
						iLocal_2546[58] = 1;
					}
				}
				else if (bVar4)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
					iLocal_3165 = 2;
				}
				break;
		}
		if (MISC::IS_PC_VERSION())
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2738) < (20f * 20f))
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_2786, 8);
				func_98(sLocal_2786);
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2738) > (30f * 30f))
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2738) < (100f * 100f))
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_2786, 8);
			func_98(sLocal_2786);
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2738) > (120f * 120f))
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_3094.f_5))
		{
			if (!iLocal_2546[59])
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -24.22909f, -1451.201f, 29.76049f, -23.50623f, -1430.866f, 32.15756f, 7f, 0, 1, 0))
				{
					GlobalFunc_159("AR1_GARHELP1", 15000);
					iLocal_2546[59] = 1;
				}
			}
		}
		if (!iLocal_2546[60])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2804, 1)) < 225f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2804))
				{
					GlobalFunc_159("AR1_UNIQUE", 15000);
					iLocal_2546[60] = 1;
				}
			}
		}
		else if (!iLocal_2546[61])
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				GlobalFunc_159("AR1_APPHELP", 15000);
				iLocal_2546[61] = 1;
			}
		}
		if (!PED::IS_PED_INJURED(Local_2971.x) && !PED::IS_PED_INJURED(Local_2976))
		{
			switch (Local_2971.f_2)
			{
				case 0:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2708) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2708) > 0f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2708))
					{
						PED::GET_PED_NEARBY_VEHICLES(Local_2971.x, &iVar6);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6[0], 0))
						{
							TASK::TASK_ENTER_VEHICLE(Local_2976, iVar6[0], 20000, -1, 1f, 1, 0);
							TASK::TASK_ENTER_VEHICLE(Local_2971.x, iVar6[0], 20000, 0, 1f, 1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2976, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2971.x, 1);
							iLocal_2713 = 0;
							iLocal_2714 = 0;
							Local_2971.f_2++;
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_2976))
					{
						iVar6[0] = PED::GET_VEHICLE_PED_IS_IN(Local_2976, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar6[0]))
						{
							fVar8 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar6[0], 1));
							if (fVar8 < 225f)
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_2712) > 0)
								{
									iVar9 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
									if (iVar9 != 0)
									{
										if (!GlobalFunc_5172(&Local_3094, 1))
										{
											if (!iLocal_2546[76])
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RADIO1", 7, 0, 0, 0))
												{
													VEHICLE::SET_VEHICLE_ENGINE_ON(iVar6[0], 1, 1);
													AUDIO::SET_VEHICLE_RADIO_LOUD(iVar6[0], 1);
													AUDIO::SET_VEH_RADIO_STATION(iVar6[0], "RADIO_01_CLASS_ROCK");
													iLocal_2546[76] = 1;
													iLocal_2712 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 13000));
												}
											}
											else if (iLocal_2713 < 5)
											{
												if (iLocal_2713 == 0)
												{
													StringCopy(&Var10, "ARM1_GETINJ2", 16);
												}
												else if (iLocal_2713 == 1)
												{
													StringCopy(&Var10, "ARM1_GETINJ3", 16);
												}
												else if (iLocal_2713 == 2)
												{
													StringCopy(&Var10, "ARM1_GETINJ4", 16);
												}
												else if (iLocal_2713 == 3)
												{
													StringCopy(&Var10, "ARM1_GETINJ5", 16);
												}
												else if (iLocal_2713 == 4)
												{
													StringCopy(&Var10, "ARM1_GETINJ6", 16);
												}
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", &Var10, 7, 0, 0, 0))
												{
													iLocal_2713++;
													iLocal_2712 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 13000));
												}
											}
											else if (!iLocal_2546[77])
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_FNKLEV1", 7, 0, 0, 0))
												{
													TASK::TASK_LOOK_AT_ENTITY(Local_2971.x, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
													iLocal_2546[77] = 1;
												}
											}
										}
									}
								}
							}
							MemCopy(&uVar14, {GlobalFunc_560()}, 4);
							if (MISC::ARE_STRINGS_EQUAL(&uVar14, "ARM1_GETINJ"))
							{
								if (fVar8 > 400f)
								{
									GlobalFunc_5105();
								}
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_2711) > 0)
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6[0], PLAYER::PLAYER_PED_ID(), 1))
								{
									func_744(18);
									iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
									iVar19 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
									if (iVar18 == 0)
									{
										if (iVar19 == 0)
										{
											GlobalFunc_5130(Local_2976, "GENERIC_INSULT_MED", 3);
										}
										else
										{
											GlobalFunc_5130(Local_2976, "GENERIC_CURSE_MED", 3);
										}
										iLocal_2711 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
									else if (iLocal_2714 < 3)
									{
										if (!GlobalFunc_5172(&Local_3094, 1))
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_FNKLEV2", 7, 0, 0, 0))
											{
												iLocal_2711 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
												iLocal_2714++;
											}
										}
									}
									else
									{
										if (iVar19 == 0)
										{
											GlobalFunc_5130(Local_2976, "GENERIC_INSULT_HIGH", 3);
										}
										else
										{
											GlobalFunc_5130(Local_2976, "GENERIC_CURSE_HIGH", 3);
										}
										iLocal_2711 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
								}
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar6[0]);
							iVar20 = 0;
							while (iVar20 < iLocal_2808)
							{
								if (iLocal_2808[iVar20] != iVar6[0])
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2808[iVar20], PLAYER::PLAYER_PED_ID(), 1))
									{
										func_744(18);
									}
								}
								iVar20++;
							}
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6[0], 0))
							{
								func_744(14);
							}
						}
					}
					break;
				}
		}
		fVar21 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -20.2493f, -1082.746f, 25.6579f);
		if (iLocal_2931 != 0)
		{
			if (fVar21 > 1600f)
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_2931))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_2931);
					iLocal_2931 = 0;
				}
			}
		}
		if (fVar21 > 10000f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2976))
			{
				func_57(&Local_2976, 1);
				func_57(&Local_2971, 1);
				STREAMING::REMOVE_ANIM_DICT(sLocal_2793);
				GlobalFunc_504(0, -1);
				func_300(&(Local_3077[0 /*7*/]), 0);
				func_300(&(Local_3077[1 /*7*/]), 0);
				if (iLocal_2503)
				{
					func_300(&(iLocal_2808[0]), 0);
					func_300(&(iLocal_2808[1]), 0);
					func_300(&(iLocal_2808[2]), 0);
					func_300(&(iLocal_2808[3]), 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2741, Local_2744, true, 1);
					iLocal_2503 = 0;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3077[0 /*7*/]))
		{
			if (fVar21 > 22500f)
			{
				func_300(&(Local_3077[0 /*7*/]), 0);
				func_300(&(Local_3077[1 /*7*/]), 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_2966) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2966, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 90000f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2804, 0))
			{
				func_744(9);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2804, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 90000f)
			{
				func_744(13);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
		{
			if ((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[0 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[0 /*7*/], joaat("weapon_unarmed"), 0)) || (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[1 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[1 /*7*/], joaat("weapon_unarmed"), 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_3077[0 /*7*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_3077[1 /*7*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3077[0 /*7*/], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3077[1 /*7*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_744(12);
				}
			}
		}
	}
	if (iLocal_3165 == 2)
	{
		func_233();
		func_300(&(Local_3077[iLocal_2643 /*7*/]), 1);
		func_300(&(Local_3077[iLocal_2644 /*7*/]), 1);
		func_57(&Local_2976, 1);
		func_57(&Local_2971, 1);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2793);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (iLocal_2689 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2689);
			iLocal_2689 = -1;
		}
		if (iLocal_2690 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2690);
			iLocal_2690 = -1;
		}
		iVar22 = 0;
		iVar22 = 0;
		while (iVar22 < iLocal_2887)
		{
			GlobalFunc_2206(&(iLocal_2887[iVar22]), 0);
			iVar22++;
		}
		SYSTEM::SETTIMERA(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 11;
	}
	if (iLocal_3165 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
		{
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_2966, iLocal_2804, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_2966, iLocal_2804, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2804, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2804, -1);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_2804, Local_2738, 1, 0, 0, 1);
		}
		STREAMING::LOAD_SCENE(Local_2738);
		iLocal_3165 = 1;
	}
}


void func_233()//Position - 0x24039
{
	if (HUD::DOES_BLIP_EXIST(uLocal_2881))
	{
		HUD::REMOVE_BLIP(&uLocal_2881);
	}
	if (HUD::DOES_BLIP_EXIST(Local_2966.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_2966.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_2976.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_2976.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_2971.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_2971.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2882))
	{
		HUD::REMOVE_BLIP(&uLocal_2882);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2883))
	{
		HUD::REMOVE_BLIP(&uLocal_2883);
	}
	HUD::REMOVE_BLIP(&(Local_3077[0 /*7*/].f_1));
	HUD::REMOVE_BLIP(&(Local_3077[1 /*7*/].f_1));
}

















bool func_250(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x248F4
{
	return func_251(uParam0, Param1, Param4, iParam7, iParam8, 0, 0, iParam9, sParam10, sParam11, sParam11, sParam11, sParam11, sParam12, sParam13, bParam14, bParam15, bParam16, iParam17);
}

int func_251(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, char* sParam17, char* sParam18, bool bParam19, bool bParam20, bool bParam21, int iParam22)//Position - 0x24928
{
	return func_252(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, iParam8, iParam9, iParam10, iParam11, sParam12, sParam13, sParam14, sParam15, sParam16, sParam17, bParam19, bParam20, sParam18, 0, 0, bParam21, iParam22, 0, 0, 0, 1, 1065353216);
}

int func_252(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x24972
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	GlobalFunc_647(uParam0);
	GlobalFunc_646(uParam0);
	GlobalFunc_502();
	if (GlobalFunc_7931(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		GlobalFunc_635(sParam20);
		GlobalFunc_635(sParam21);
		GlobalFunc_635(sParam22);
		GlobalFunc_635(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, 0))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 23);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (GlobalFunc_5146(uParam0, iParam29))
				{
					MISC::SET_BIT(&(uParam0->f_13), 3);
					if (!MISC::IS_BIT_SET(uParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(uParam0->f_13), 4);
					}
					MISC::SET_BIT(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				GlobalFunc_635(sParam24);
				GlobalFunc_635(sParam27);
				GlobalFunc_635("MORE_SEATS");
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						GlobalFunc_635(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(uParam0);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*uParam0))
						{
							HUD::REMOVE_BLIP(uParam0);
						}
						uParam0->f_5 = GlobalFunc_5104(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					else if (!GlobalFunc_537(Var3, HUD::GET_BLIP_COORDS(uParam0->f_5), 0.1f))
					{
						HUD::SET_BLIP_COORDS(uParam0->f_5, Var3);
						if (bParam35)
						{
							GlobalFunc_714(uParam0->f_5, uParam0);
						}
					}
					if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 2))
						{
							GlobalFunc_5145(uParam0, sParam19, 0);
							MISC::SET_BIT(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (MISC::IS_BIT_SET(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar2], GlobalFunc_468()) || !GlobalFunc_5144(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (GlobalFunc_5143(uParam0))
							{
								GlobalFunc_635(sParam19);
								GlobalFunc_635(sParam24);
								GlobalFunc_635(sParam20);
								GlobalFunc_635(sParam21);
								GlobalFunc_635(sParam22);
								GlobalFunc_635(sParam23);
								GlobalFunc_635("LOSE_WANTED");
								GlobalFunc_635("MORE_SEATS");
								GlobalFunc_635(sParam27);
								GlobalFunc_5652(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!MISC::IS_BIT_SET(uParam0->f_13, 9) && !MISC::IS_BIT_SET(uParam0->f_13, 22)))
				{
					GlobalFunc_635(sParam24);
					GlobalFunc_635(sParam27);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_5) || HUD::DOES_BLIP_EXIST(*uParam0))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_5));
						HUD::REMOVE_BLIP(uParam0);
						GlobalFunc_635(sParam19);
					}
					if ((!GlobalFunc_5172(uParam0, 1) && !GlobalFunc_633(uParam0)) && !MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							GlobalFunc_5145(uParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(uParam0->f_13), 0);
						MISC::CLEAR_BIT(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_13, 0))
					{
						GlobalFunc_635("LOSE_WANTED");
						MISC::CLEAR_BIT(&(uParam0->f_13), 0);
						MISC::SET_BIT(&(uParam0->f_13), 1);
					}
					if (MISC::IS_BIT_SET(uParam0->f_13, 1))
					{
						if (!GlobalFunc_5172(uParam0, 1))
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
							{
								GlobalFunc_5130(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(uParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*uParam0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_5));
								GlobalFunc_635(sParam19);
							}
							*uParam0 = GlobalFunc_6783(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*uParam0, 2);
							if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_714(*uParam0, uParam0);
							}
						}
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
									{
										GlobalFunc_5145(uParam0, sParam27, 0);
										MISC::SET_BIT(&(uParam0->f_13), 4);
									}
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam24, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
								if (!MISC::IS_BIT_SET(uParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(uParam0->f_17[0]))
									{
										GlobalFunc_5130(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
					GlobalFunc_635(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!GlobalFunc_5172(uParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(uParam0->f_17[iVar9]))
									{
										GlobalFunc_5130(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									GlobalFunc_5145(uParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(uParam0->f_13), 13);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 3);
								MISC::CLEAR_BIT(&(uParam0->f_13), 4);
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								if (MISC::IS_BIT_SET(uParam0->f_13, 9))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!GlobalFunc_5172(uParam0, 2))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_13, 3))
						{
							GlobalFunc_5145(uParam0, sParam24, 0);
							MISC::SET_BIT(&(uParam0->f_13), 3);
							MISC::CLEAR_BIT(&(uParam0->f_13), 4);
						}
						else if (MISC::IS_BIT_SET(uParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
								{
									GlobalFunc_5145(uParam0, sParam27, 0);
									MISC::SET_BIT(&(uParam0->f_13), 4);
								}
							}
							else if (!MISC::IS_BIT_SET(uParam0->f_13, 4))
							{
								GlobalFunc_5145(uParam0, sParam24, 0);
								MISC::SET_BIT(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(uParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 0);
		}
		GlobalFunc_635(sParam19);
		GlobalFunc_635(sParam24);
		GlobalFunc_635(sParam27);
		GlobalFunc_635(sParam24);
		GlobalFunc_635("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*uParam0))
		{
			HUD::REMOVE_BLIP(uParam0);
		}
	}
	MISC::CLEAR_BIT(&(uParam0->f_13), 11);
	MISC::CLEAR_BIT(&(uParam0->f_13), 12);
	return 0;
}















































void func_299()//Position - 0x27561
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_2546;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_2546[iVar1] = 0;
		iVar1++;
	}
}

void func_300(int iParam0, bool bParam1)//Position - 0x2758C
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_301(bool bParam0)//Position - 0x275DE
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-44.9779f, -1093.988f, 19.4526f, -30.0332f, -1074.433f, 39.4526f, !bParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-20.801f, -1084.057f, 20.8603f, -3.4886f, -1050.998f, 31.8603f, !bParam0, 1);
	if (bParam0)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(-37f, -1087f, 26f, 5f, 0, 0, 0, 0, 0);
	}
}

void func_302()//Position - 0x27650
{
	if (iLocal_2939 == 0)
	{
		iLocal_2939 = PED::ADD_SCENARIO_BLOCKING_AREA(-49.41105f, -1078.832f, 20.47327f, -44.08052f, -1071.936f, 39.47327f, 0, 1, 1, 1);
	}
	if (iLocal_2940 == 0)
	{
		iLocal_2940 = PED::ADD_SCENARIO_BLOCKING_AREA(-54.5514f, -1111.473f, 22.2924f, -39.9018f, -1104.013f, 39.7759f, 0, 1, 1, 1);
	}
}


void func_304()//Position - 0x276C8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
	{
		VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[0 /*7*/], 1);
		VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[1 /*7*/], 1);
	}
}

void func_305()//Position - 0x27704
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
	{
		ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2644 /*7*/], fLocal_2641);
		ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], Local_2777, 1, 0, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[iLocal_2644 /*7*/], 0);
	}
}

int func_306(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x2775A
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2971.x))
	{
		GlobalFunc_7049(18);
		if (GlobalFunc_7048(18))
		{
			if (!bParam4)
			{
				if (GlobalFunc_7047(&Local_2971, 18, Param0, fParam3, 1))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_2971.x, 3, 1, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_2971.x, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2971.x, 1862763509);
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}



int func_309(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x27810
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2976))
	{
		GlobalFunc_7049(14);
		if (GlobalFunc_7048(14))
		{
			if (!bParam4)
			{
				if (GlobalFunc_7047(&Local_2976, 14, Param0, fParam3, 1))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 3, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 6, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 8, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_2976, 10, 2, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_2976, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2976, 1862763509);
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_310(struct<3> Param0, float fParam3)//Position - 0x278BA
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3077[1 /*7*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_2944);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2944))
		{
			Local_3077[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_2944, Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[1 /*7*/]);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_3077[1 /*7*/], 0f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_3077[1 /*7*/], 28, 28);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_3077[1 /*7*/], 23, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_3077[1 /*7*/], 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3077[1 /*7*/], 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3077[1 /*7*/], 0);
			ENTITY::SET_ENTITY_HEALTH(Local_3077[1 /*7*/], 2000);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_3077[1 /*7*/], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_3077[1 /*7*/], "2603AM56");
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3077[1 /*7*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3077[1 /*7*/], 0);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3077[1 /*7*/], 0);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3077[1 /*7*/], 0);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_3077[1 /*7*/], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2944);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_311(struct<3> Param0, float fParam3)//Position - 0x279B9
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3077[0 /*7*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_2943);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2943))
		{
			Local_3077[0 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_2943, Param0, fParam3, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[0 /*7*/]);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_3077[0 /*7*/], 0f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_3077[0 /*7*/], 111, 111);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_3077[0 /*7*/], 111, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_3077[0 /*7*/], 2000);
			VEHICLE::SET_VEHICLE_STRONG(Local_3077[0 /*7*/], 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3077[0 /*7*/], 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3077[0 /*7*/], 0);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_3077[0 /*7*/], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_3077[0 /*7*/], "5912FL34");
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3077[0 /*7*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3077[0 /*7*/], 0);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(Local_3077[0 /*7*/], 0);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_3077[0 /*7*/], 0);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_3077[0 /*7*/], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2943);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_312(bool bParam0)//Position - 0x27AB8
{
	struct<3> Var0;
	int iVar3;
	
	if (!iLocal_2503)
	{
		Var0 = { Local_2741 + Vector((Local_2744.f_2 - Local_2744.f_2), (Local_2744.f_1 - Local_2744.f_1), (Local_2744.x - Local_2741.x)) };
		MISC::CLEAR_AREA_OF_VEHICLES(Var0, 30f, 0, 0, 0, 0, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2741, Local_2744, false, 1);
		iLocal_2503 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("bjxl"));
	STREAMING::REQUEST_MODEL(joaat("ninef"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) && STREAMING::HAS_MODEL_LOADED(joaat("ninef")))
	{
		if (!bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2808[0]))
			{
				iLocal_2808[0] = VEHICLE::CREATE_VEHICLE(joaat("ninef"), -49.9f, -1094.7f, 26.1366f, 96.8607f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2808[0], 31, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2808[0], 42, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2808[0], 1);
				iLocal_2808[1] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -46.5f, -1097.5f, 26.35f, 108.8107f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2808[1], 126, 126);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2808[1], 126, 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_2808[1], "57EIG117");
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2808[1], 1);
				iLocal_2808[2] = VEHICLE::CREATE_VEHICLE(joaat("ninef"), -41.7f, -1099.5f, 26.0304f, 137.6117f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2808[2], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2808[2], 15, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2808[2], 1);
				iLocal_2808[3] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.8f, -1101.2f, 26.0912f, 151.7322f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2808[3], 1, 111);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2808[3], 4, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2808[3], 1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ninef"));
			iVar3 = 0;
			iVar3 = 0;
			while (iVar3 < iLocal_2808)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2808[iVar3], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2808[iVar3], 0);
				}
				iVar3++;
			}
		}
		return 1;
	}
	return 0;
}

int func_313(bool bParam0)//Position - 0x27CD1
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2813[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("blista"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("blista")))
		{
			if (!bParam0)
			{
				MISC::CLEAR_AREA(-11.6041f, -1080.867f, 25.6721f, 20f, 1, 0, 0, 0);
				iLocal_2813[0] = VEHICLE::CREATE_VEHICLE(joaat("blista"), -8.6907f, -1082.098f, 25.6721f, 128.8319f, 1, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_314()//Position - 0x27D58
{
	if (iLocal_2643 == iLocal_2644)
	{
		iLocal_2643 = Global_86801;
		if (iLocal_2643 == 0)
		{
			iLocal_2644 = 1;
		}
		else
		{
			iLocal_2644 = 0;
		}
	}
}

void func_315()//Position - 0x27D82
{
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (iLocal_2931 == 0)
			{
				iLocal_2931 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2768, 1, 0, 0, 1);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2931);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_2931))
			{
				if (bLocal_2534)
				{
					GlobalFunc_5116(Local_2768, 335.0142f, 0, 0);
					iLocal_2642 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2768, 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					STREAMING::LOAD_SCENE(Local_2768);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_2642 = 99;
				}
			}
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_2793);
			func_314();
			if ((((((((func_225(Local_2753, fLocal_2632, 0) && func_311(34.0424f, -638.7692f, 30.6252f, 0)) && func_310(44.0424f, -638.7692f, 30.6252f, 0)) && func_187(Local_2747, fLocal_2630, 0)) && func_309(Local_2768, fLocal_2638, 0)) && func_306(Local_2771, fLocal_2639, 0)) && func_313(0)) && func_312(0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2793))
			{
				GlobalFunc_5108(0, -1, 0);
				func_305();
				func_304();
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2631);
				func_302();
				iLocal_2515 = 1;
				iLocal_3165 = 0;
			}
		}
	}
	if (iLocal_3165 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_2785, 8);
		func_98(sLocal_2785);
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[0 /*7*/]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[0 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[1 /*7*/]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[1 /*7*/], 1);
		}
		if (GlobalFunc_Has_Cutscene_Loaded() && (!GlobalFunc_5172(&Local_3094, 1) || SYSTEM::TIMERA() > 5000))
		{
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_2966);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2966, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_2976))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2976, "Jimmy", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_2971.x))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2971.x, "Siemon", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2808[0], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2808[0], "ninef^1", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2808[1], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2808[1], "Jimmys_Car", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2808[2], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2808[2], "Franklin_stealcar", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2808[3], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2808[3], "bjxl^1", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			iLocal_2689 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, GlobalFunc_723(-67.2459f), 0, 7);
			iLocal_2690 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, GlobalFunc_723(72.3459f), 0, 7);
			GlobalFunc_4956();
			GlobalFunc_8316(1, 1, 1, 0);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			RECORDING::_0x48621C9FCA3EBD28(4);
			SYSTEM::SETTIMERB(0);
			SYSTEM::SETTIMERA(0);
			iLocal_2642 = 0;
			iLocal_3165 = 1;
		}
	}
	if (iLocal_3165 == 1)
	{
		switch (iLocal_2642)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2643 /*7*/], 1, 0);
						ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], Local_2774, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], fLocal_2640);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[iLocal_2643 /*7*/]);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3077[iLocal_2643 /*7*/], 3);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 0, 0);
					}
					CAM::STOP_GAMEPLAY_HINT(1);
					STREAMING::REMOVE_ANIM_DICT(sLocal_2799);
					STREAMING::REMOVE_ANIM_DICT(sLocal_2793);
					GlobalFunc_2204();
					iLocal_2642++;
				}
				break;
		}
		func_187(Local_2747, fLocal_2630, 0);
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_2501 = 1;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_3165 = 2;
		}
		else
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, fLocal_2631, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_2966)))
				{
					ENTITY::SET_ENTITY_COORDS(Local_2966, Local_2753, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_2966, fLocal_2632);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
					{
						TASK::TASK_ENTER_VEHICLE(Local_2966, iLocal_2804, 40000, 0, 1f, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_2966, -668482597, 0, 1, 0);
					}
				}
			}
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_2793);
	}
	if (iLocal_3165 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		func_233();
		GlobalFunc_8316(0, 1, 1, 0);
		SYSTEM::SETTIMERA(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 10;
		GlobalFunc_9804(1, 0);
	}
	if (iLocal_3165 == 3)
	{
		GlobalFunc_2195();
		RECORDING::_0x81CBAE94390F9F89();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE() || !func_187(Local_2747, fLocal_2630, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2804, Local_2747, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2804, fLocal_2630);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2643 /*7*/], 1, 0);
			ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], fLocal_2640);
			ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], Local_2774, 1, 0, 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[iLocal_2643 /*7*/]);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3077[iLocal_2643 /*7*/], 3);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 0, 0);
		}
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			ENTITY::SET_ENTITY_COORDS(Local_2966, Local_2753, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_2966, fLocal_2632);
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2631);
		iLocal_3165 = 2;
	}
}














void func_329()//Position - 0x28678
{
	int iVar0;
	
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (iLocal_2931 == 0)
			{
				iLocal_2931 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2931);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_2931))
			{
				if (bLocal_2534)
				{
					GlobalFunc_5116(Local_2750, 335.0142f, 0, 0);
					iLocal_2642 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2750, 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
					STREAMING::LOAD_SCENE(Local_2750);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iLocal_2642 = 99;
				}
			}
		}
		else
		{
			func_314();
			if (((((func_225(Local_2753, fLocal_2632, 0) && func_311(34.0424f, -638.7692f, 30.6252f, 0)) && func_310(44.0424f, -638.7692f, 30.6252f, 0)) && func_187(Local_2747, fLocal_2630, 0)) && func_313(0)) && func_312(0))
			{
				GlobalFunc_5108(0, -1, 0);
				func_305();
				func_304();
				func_302();
				iLocal_2515 = 1;
				bLocal_2541 = false;
				iLocal_3165 = 0;
			}
		}
	}
	if (iLocal_3165 == 0)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_2793);
		STREAMING::REQUEST_ANIM_DICT(sLocal_2799);
		STREAMING::REQUEST_MODEL(iLocal_2958);
		if ((((((func_309(Local_2768, fLocal_2638, 0) && func_306(Local_2771, fLocal_2639, 0)) && func_225(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2793)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2799)) && STREAMING::HAS_MODEL_LOADED(iLocal_2958)) && (!PED::IS_PED_INJURED(Local_2966) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_2966)))
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_173(&Local_3168, 6, Local_2976, "JIMMY", 0, 1);
				GlobalFunc_173(&Local_3168, 4, Local_2971.x, "SIMEON", 0, 1);
				GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
				while (!func_313(0))
				{
					SYSTEM::WAIT(0);
				}
				if (iLocal_2642 != 99)
				{
					GlobalFunc_2200(Local_2774, 300f, 1, 10000);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				if (!bLocal_2541)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/]);
					}
					ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2643 /*7*/], 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 0);
					ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], fLocal_2640);
					ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], Local_2774, 1, 0, 0, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 0, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[iLocal_2643 /*7*/], 0);
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					if (CAM::IS_SCREEN_FADED_OUT() && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						SYSTEM::WAIT(100);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 100, 0);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3077[iLocal_2643 /*7*/], 1);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2644 /*7*/], 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[iLocal_2644 /*7*/], 0);
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2644 /*7*/], fLocal_2641);
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], Local_2777, 1, 0, 0, 1);
			}
			iVar0 = 0;
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2966);
				Local_2966.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2799, "leadin_loop", 1000f, -4f, 5, 145, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_2966.f_4, 1f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2966.f_4, 1);
					iVar0 = 1;
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2799, "leadin_action", 1000f, -4f, 5, 145, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_2966.f_4, 0.98f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2966.f_4, 0);
				}
				TASK::TASK_LOOK_AT_ENTITY(Local_2966, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				iLocal_2902 = OBJECT::CREATE_OBJECT(iLocal_2958, -30.99f, -1094.082f, 25.423f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2902, Local_2966, PED::GET_PED_BONE_INDEX(Local_2966, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2958);
			}
			HUD::CLEAR_HELP(1);
			CAM::DESTROY_ALL_CAMS(0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(0, 1, 1, 0);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-66.2173f, -1121.954f, 14.8642f, -41.2857f, -1111.164f, 34.8642f, true, 1);
			STREAMING::REMOVE_ANIM_DICT(sLocal_2788);
			func_301(1);
			func_299();
			AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_ON");
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3077[0 /*7*/]))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[0 /*7*/], 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_3077[1 /*7*/]))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[1 /*7*/], 1);
					}
					SYSTEM::WAIT(0);
				}
			}
			if (iVar0 && !PED::IS_PED_INJURED(Local_2966))
			{
				Local_2966.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2799, "leadin_action", 8f, -4f, 5, 145, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(Local_2966.f_4, 0.97f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_2966.f_4, 0);
			}
			if (!PED::IS_PED_INJURED(Local_2976) && !PED::IS_PED_INJURED(Local_2971.x))
			{
				iLocal_2708 = PED::CREATE_SYNCHRONIZED_SCENE(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2971.x, iLocal_2708, sLocal_2793, "_leadin_simeon", 1000f, -1.5f, 5, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_2976, iLocal_2708, sLocal_2793, "_leadin_jimmy", 1000f, -1.5f, 5, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2708, 0.35f);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_331();
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			SYSTEM::SETTIMERA(0);
			iLocal_2642 = 0;
			iLocal_3165 = 1;
		}
	}
	if (iLocal_3165 == 1)
	{
		func_331();
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		if ((!iLocal_2546[52] && !PED::IS_PED_INJURED(Local_2971.x)) && !PED::IS_PED_INJURED(Local_2976))
		{
			GlobalFunc_2207();
			iLocal_2546[52] = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[0 /*7*/]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[0 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[1 /*7*/]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[1 /*7*/], 1);
		}
		if (iLocal_2542)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				CAM::_0x2A2173E46DAECD12(1, iLocal_3166);
				iLocal_2542 = 0;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			}
		}
		switch (iLocal_2642)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.0797f, -1094.802f, 25.17234f, -35.01475f, -1097.344f, 27.67234f, 9.5f, 0, 1, 0))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(iLocal_2808[1], 0), -1, 2500, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.6f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.015f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.05f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -39.6f, -1097f, 25.6f, 1f, -1, 0.25f, 5, 40000f);
					if (!PED::IS_PED_INJURED(Local_2971.x))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2971.x, -1, 2048, 2);
					}
					iLocal_2642++;
				}
				break;
		}
		if ((!PED::IS_PED_INJURED(Local_2971.x) && !PED::IS_PED_INJURED(Local_2976)) && !PED::IS_PED_INJURED(Local_2966))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_2971.f_1))
			{
				Local_2971.f_1 = GlobalFunc_6783(Local_2971.x, 0, 0);
			}
			PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.87f);
			if (GlobalFunc_5172(&Local_3094, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2708) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2708) >= 0.9f)
				{
					GlobalFunc_5105();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2902))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_2966, -2033458239))
				{
					GlobalFunc_2206(&iLocal_2902, 1);
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -38.59081f, -1095.907f, 25.4223f, -51.04851f, -1100.539f, 27.4223f, 10.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.40492f, -1086.267f, 25.57324f, -31.38518f, -1084.528f, 27.57324f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.61462f, -1108.704f, 25.45593f, -38.44304f, -1110.918f, 27.43603f, 2.25f, 0, 1, 0)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2708) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2708) >= 0.99f))
			{
				iLocal_3165 = 2;
			}
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_2785, 8);
		func_98(sLocal_2785);
	}
	if (iLocal_3165 == 2)
	{
		func_233();
		GlobalFunc_5105();
		GlobalFunc_2206(&iLocal_2902, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 9;
	}
	if (iLocal_3165 == 3)
	{
		iLocal_3165 = 2;
	}
}


void func_331()//Position - 0x2902D
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 143, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 262, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 261, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 45, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
}


void func_333()//Position - 0x2911D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	int iVar10;
	int iVar11;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (bLocal_2534)
			{
				GlobalFunc_5116(Local_2747, 335.0142f, 0, 0);
				iLocal_2642 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2747, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(Local_2747);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_2642 = 99;
			}
		}
		else
		{
			if (iLocal_2931 == 0)
			{
				iLocal_2931 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2931);
			func_314();
			if ((((func_225(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0) && func_311(34.0424f, -638.7692f, 30.6252f, 0)) && func_310(44.0424f, -638.7692f, 30.6252f, 0)) && func_187(Local_2747, fLocal_2630, 0)) && INTERIOR::IS_INTERIOR_READY(iLocal_2931))
			{
				GlobalFunc_5108(0, -1, 0);
				func_337();
				func_305();
				func_304();
				func_302();
				func_301(1);
				bLocal_2535 = false;
				iLocal_3165 = 0;
			}
		}
	}
	if (iLocal_3165 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		VEHICLE::REQUEST_VEHICLE_RECORDING(330, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(331, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(332, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(333, sLocal_2783);
		STREAMING::REQUEST_ANIM_DICT(sLocal_2788);
		if (((((func_312(1) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(330, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(331, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(332, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(333, sLocal_2783)) && (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2788) || !bLocal_2530))
		{
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_233();
			GlobalFunc_5652(&Local_3094, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2804, Local_2747, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2804, fLocal_2630);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2804);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2644 /*7*/], 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3077[iLocal_2644 /*7*/], 3);
			}
			func_300(&(iLocal_2808[0]), 1);
			func_300(&(iLocal_2808[1]), 1);
			func_300(&(iLocal_2808[2]), 1);
			func_300(&(iLocal_2808[3]), 1);
			VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
			MISC::CLEAR_AREA(-42.8436f, -1111.725f, 25.4355f, 100f, 1, 0, 0, 0);
			func_312(0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-66.2173f, -1121.954f, 14.8642f, -41.2857f, -1111.164f, 34.8642f, false, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_DEALERSHIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_TO_DEALERSHIP");
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_2808)
			{
				if (iVar0 == 0)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2808[0], -49.9f, -1094.7f, 26.0416f, 0, 0, 1);
				}
				else if (iVar0 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2808[1], -46.5f, -1097.5f, 26.35f, 0, 0, 1);
				}
				else if (iVar0 == 2)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2808[2], -41.7f, -1099.5f, 26.0304f, 0, 0, 1);
				}
				else if (iVar0 == 3)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2808[3], -36.8f, -1101.2f, 26.3321f, 0, 0, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2808[iVar0], 1);
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_2966, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_2966, 0);
				ENTITY::SET_ENTITY_COLLISION(Local_2966, 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2966, 0);
			}
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1), 10f, 1, 0, 0, 0);
			MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1), 200f, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3077[iLocal_2643 /*7*/], 1);
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
				}
				if (ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2643 /*7*/]) < 30f)
				{
					Var1 = { ENTITY::GET_ENTITY_ROTATION(Local_3077[iLocal_2643 /*7*/], 2) };
					if (MISC::ABSF(Var1.f_1) < 30f && MISC::ABSF(Var1.x) < 45f)
					{
						bLocal_2535 = true;
					}
				}
			}
			if (bLocal_2535)
			{
				if (!bLocal_2514)
				{
					PATHFIND::SET_ROADS_IN_AREA(-89.0913f, -1133.143f, 0.886f, 13.5596f, -1053.273f, 53.886f, 1, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -27.3f, -1082f, 26.2f, 15f, 0, ENTITY::GET_ENTITY_MODEL(Local_3077[iLocal_2643 /*7*/]), 4456448, 2f, 5f);
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				if (!bLocal_2514)
				{
					if (iLocal_2643 == 0)
					{
						if (bLocal_2513)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/], 330, sLocal_2783, 1);
							GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), 4535f);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/], 331, sLocal_2783, 1);
							GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), 2200f);
						}
					}
					else if (bLocal_2513)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/], 332, sLocal_2783, 1);
						GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), 4435f);
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/], 333, sLocal_2783, 1);
						GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), 3000f);
					}
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2643 /*7*/], 1);
				}
			}
			CAM::DESTROY_ALL_CAMS(0);
			if (bLocal_2530)
			{
				uLocal_2884 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				if (bLocal_2513)
				{
					iLocal_2678 = PED::CREATE_SYNCHRONIZED_SCENE(-58.096f, -1099.135f, 25.565f, 0f, 0f, -20f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "car_dealership_int_ltr_cam", sLocal_2788);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2678, 0f);
				}
				else
				{
					iLocal_2678 = PED::CREATE_SYNCHRONIZED_SCENE(-58.096f, -1101.335f, 25.565f, 0f, 0f, -20f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "car_dealership_int_rtl_cam", sLocal_2788);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2678, 0f);
				}
			}
			else
			{
				uLocal_2884 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uLocal_2884, 2);
				if (bLocal_2514)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_2884, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.54986f, -1116.585f, 27.78851f, 0.939515f, -0.028141f, -58.80625f, 35.0707f, 1, 2), 0, 3);
				}
				else if (bLocal_2513)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_2884, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.71259f, -1116.481f, 27.74226f, 0.890156f, -0.013359f, -38.18335f, 35.0707f, 1, 2), 0, 3);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_2884, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.88025f, -1116.144f, 27.74217f, 0.890156f, -0.013359f, -94.54407f, 35.0707f, 1, 2), 0, 3);
				}
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_2884, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.58225f, -1116.546f, 27.78374f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, 1, 2), 5000, 1);
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uLocal_2884, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.09956f, -1117.414f, 27.78397f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, 1, 2), 6700, 1);
			}
			CAM::SET_CAM_ACTIVE(uLocal_2884, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			GlobalFunc_8316(1, 1, 1, 0);
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_OFF");
			if (bLocal_2514)
			{
				SYSTEM::SETTIMERB(1500);
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
			RECORDING::_0x293220DA1B46CEBC(4f, 12f, 4);
			GlobalFunc_2204();
			bLocal_2541 = false;
			iLocal_2501 = 0;
			iLocal_2642 = 0;
			iLocal_3165 = 1;
		}
	}
	if (iLocal_3165 == 1)
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		func_225(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0);
		switch (iLocal_2642)
		{
			case 0:
				if (SYSTEM::TIMERB() > 4500 && !bLocal_2541)
				{
					ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2643 /*7*/], 0, 0);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 1);
					}
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_2793);
				STREAMING::REQUEST_ANIM_DICT(sLocal_2799);
				if (bLocal_2513)
				{
					Var4 = { Local_2768 };
					Var7 = { Local_2771 };
				}
				else
				{
					Var4 = { -51.6f, -1091.9f, 25.9f };
					Var7 = { -51f, -1090.1f, 25.7f };
				}
				if (func_309(Var4, fLocal_2638, 0) && func_306(Var7, fLocal_2639, 0))
				{
					GlobalFunc_173(&Local_3168, 6, Local_2976, "JIMMY", 0, 1);
					GlobalFunc_173(&Local_3168, 4, Local_2971.x, "SIMEON", 0, 1);
					GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
					if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2793) && SYSTEM::TIMERB() > 8500)
					{
						iLocal_3165 = 2;
					}
				}
				if (!iLocal_2546[51])
				{
					if (SYSTEM::TIMERB() > 2500)
					{
						GlobalFunc_159("AR1_SHOWROOM", 13000);
						iLocal_2546[51] = 1;
					}
				}
				if (!iLocal_2542)
				{
					if (SYSTEM::TIMERB() > 8300)
					{
						iVar10 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
						iVar11 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1);
						if (((iVar10 == 4 && iVar11 != 4) && CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4) || (iVar10 != 4 && (iVar11 == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)))
						{
							iLocal_3166 = iVar11;
							CAM::_0x2A2173E46DAECD12(1, iVar10);
							iLocal_2542 = 1;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_3077[iLocal_2643 /*7*/]))
					{
						if (SYSTEM::TIMERB() > 8000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 0, 0);
						}
					}
				}
				if (SYSTEM::TIMERB() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3077[0 /*7*/]))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[0 /*7*/], 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_3077[1 /*7*/]))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[1 /*7*/], 1);
					}
				}
				break;
		}
		if (GlobalFunc_4926(1000))
		{
			iLocal_2501 = 1;
			iLocal_3165 = 3;
		}
		func_313(0);
	}
	if (iLocal_3165 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(330, sLocal_2783);
		VEHICLE::REMOVE_VEHICLE_RECORDING(331, sLocal_2783);
		VEHICLE::REMOVE_VEHICLE_RECORDING(332, sLocal_2783);
		VEHICLE::REMOVE_VEHICLE_RECORDING(333, sLocal_2783);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-89.0913f, -1133.143f, 0.886f, 13.5596f, -1053.273f, 53.886f, 1);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 8;
	}
	if (iLocal_3165 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2804, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_2804, Local_2747, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_2804, fLocal_2630);
		}
		bLocal_2541 = false;
		iLocal_3165 = 2;
	}
}




void func_337()//Position - 0x29CC9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
		}
	}
}

void func_338()//Position - 0x29D07
{
	struct<58> Var0;
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	int iVar78;
	
	if (iLocal_3165 == 4)
	{
		if (bLocal_2534)
		{
			GlobalFunc_5116(35.2234f, -646.9493f, 30.6292f, 335.0142f, 0, 0);
			iLocal_2642 = 99;
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 35.2234f, -646.9493f, 30.6292f, 1, 0, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			STREAMING::LOAD_SCENE(35.2234f, -646.9493f, 30.6292f);
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			iLocal_2642 = 99;
		}
		func_314();
		GlobalFunc_7621(180, 0, 0, 1, 0);
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_2783);
		while (((((!ENTITY::DOES_ENTITY_EXIST(Local_2966) || !ENTITY::DOES_ENTITY_EXIST(Local_3077[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_3077[1 /*7*/])) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_2783))
		{
			func_225(-25.356f, -1086.305f, 25.5721f, 52.8017f, 0);
			func_311(34.0424f, -638.7692f, 30.6252f, 0);
			func_310(44.0424f, -638.7692f, 30.6252f, 0);
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_2783);
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(0, -1, 0);
		func_337();
		func_305();
		func_304();
		func_349();
		PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		PED::SET_CREATE_RANDOM_COPS(0);
		MISC::CLEAR_AREA_OF_COPS(44.4942f, -634.8408f, 34.55825f, 400f, 0);
		iLocal_2802 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 87.5619f, -588.9714f, 30.599f, 160.1988f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2802, 1, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_2802, 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_2802, 300, sLocal_2783, 1, 0, 786603);
		GlobalFunc_2208(&iLocal_2802, 10500f);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
		iLocal_2840[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2802, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2840[0], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2840[0], 2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2840[0], 0);
		iLocal_2840[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2802, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_2840[1], joaat("weapon_pistol"), -1, 0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2840[1], 2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2840[1], 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			ENTITY::SET_ENTITY_COORDS(Local_2966, -32.912f, -1086.304f, 29.2035f, 1, 0, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_2966, 1);
			ENTITY::SET_ENTITY_COLLISION(Local_2966, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_2966, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 1, 1);
			if (iLocal_2643 == 0)
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 337.9254f);
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 35.9457f, -646.1738f, 30.6258f, 1, 0, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 335.015f);
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 35.2234f, -646.9493f, 30.6292f, 1, 0, 0, 1);
			}
		}
		GlobalFunc_7621(180, 0, 0, 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-50.5f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		SYSTEM::WAIT(500);
		iLocal_3165 = 0;
	}
	if (iLocal_3165 == 0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_MAX_WANTED_LEVEL(2);
		PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		PED::SET_CREATE_RANDOM_COPS(0);
		MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0);
		GlobalFunc_563(1);
		bLocal_2514 = false;
		bLocal_2513 = false;
		iLocal_2516 = 0;
		if (bLocal_2540)
		{
			Local_3092.f_1 = 0;
		}
		if (!Local_3092.f_1)
		{
			iLocal_2546[19] = 0;
		}
		func_302();
		func_301(1);
		GlobalFunc_601(9, 1);
		func_346(1);
		GlobalFunc_10617(48, 1);
		GlobalFunc_10617(47, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_LOSE_COPS");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0, 0, 0, 0, 0);
		}
		GlobalFunc_2204();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_3077[iLocal_2643 /*7*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_3077[iLocal_2643 /*7*/], 0);
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 0);
		}
		GlobalFunc_574(2, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		RECORDING::_0x293220DA1B46CEBC(0f, 15f, 3);
		func_759(2, "LOSE_COPS", 0, 0, 0, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_2536 = 0;
		iLocal_2685 = 0;
		iLocal_2684 = MISC::GET_GAME_TIMER();
		iLocal_2702 = 0;
		iLocal_2642 = 0;
		iLocal_3165 = 1;
	}
	if (iLocal_3165 == 1)
	{
		func_344(0, 1);
		if ((MISC::GET_GAME_TIMER() - iLocal_2684) < 7000)
		{
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2802, 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2802))
			{
				if (iLocal_2685 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_2840[0]))
					{
						TASK::TASK_ARREST_PED(iLocal_2840[0], PLAYER::PLAYER_PED_ID());
					}
					if (!PED::IS_PED_INJURED(iLocal_2840[1]))
					{
						TASK::TASK_ARREST_PED(iLocal_2840[1], PLAYER::PLAYER_PED_ID());
					}
					iLocal_2685 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_2685) > 2000)
				{
					func_57(&(iLocal_2840[0]), 0);
					func_57(&(iLocal_2840[1]), 0);
					func_300(&iLocal_2802, 0);
				}
			}
		}
		switch (iLocal_2642)
		{
			case 0:
				if ((MISC::GET_GAME_TIMER() - iLocal_2684) > 120000 || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PED::SET_CREATE_RANDOM_COPS(1);
					iLocal_2642++;
				}
				break;
		}
		if (!iLocal_2546[75])
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_02", 0);
				iLocal_2546[75] = 1;
			}
		}
		if (func_342(&Local_3094, Local_2732, 0.001f, 0.001f, 2f, 1, Local_3077[iLocal_2643 /*7*/], "AR1_GOGARAGE", "", "CMN_GENGETBCK", 1, 0, 1, -1))
		{
			iLocal_3165 = 2;
		}
		if (!iLocal_2536)
		{
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_01", 0);
				iLocal_2536 = 1;
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_3094.f_5))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_2732) < 10000f)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(330, sLocal_2783);
				VEHICLE::REQUEST_VEHICLE_RECORDING(331, sLocal_2783);
				VEHICLE::REQUEST_VEHICLE_RECORDING(332, sLocal_2783);
				VEHICLE::REQUEST_VEHICLE_RECORDING(333, sLocal_2783);
				Var0.f_11 = 12;
				Var0.f_31 = 25;
				Var0.f_57 = 2;
				GlobalFunc_97(1, &Var0, 0);
				STREAMING::REQUEST_MODEL(Var0);
			}
			bVar74 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -58.52349f, -1072.446f, 25.51242f, -47.36769f, -1076.728f, 28.77682f, 14.75f, 0, 1, 0);
			bVar75 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -11.13597f, -1091.419f, 25.42208f, -24.34815f, -1126.346f, 29.78418f, 13f, 0, 1, 0);
			if (bVar74 || bVar75)
			{
				bLocal_2513 = bVar74;
				iLocal_3165 = 2;
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.30199f, -1092.126f, 25.43398f, -34.19631f, -1089.122f, 28.43427f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.19282f, -1086.231f, 25.43401f, -35.28241f, -1094.512f, 28.43435f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.85529f, -1088.089f, 25.43394f, -28.94933f, -1094.195f, 28.43419f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.09365f, -1085.448f, 25.60689f, -32.26557f, -1081.161f, 28.40192f, 7.75f, 0, 1, 0))
			{
				bLocal_2514 = true;
				iLocal_3165 = 2;
			}
		}
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			func_57(&Local_2966, 1);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], 0))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!iLocal_2546[45])
						{
							GlobalFunc_159("AR1_COPHELP1", 13000);
							iLocal_2546[45] = 1;
							HUD::FLASH_WANTED_DISPLAY(1);
						}
						else if (!iLocal_2546[46])
						{
							HUD::FLASH_WANTED_DISPLAY(0);
							GlobalFunc_159("AR1_COPHELP2", 13000);
							iLocal_2546[46] = 1;
						}
						else if (!iLocal_2546[47])
						{
							GlobalFunc_159("AR1_COPHELP2B", 13000);
							iLocal_2546[47] = 1;
						}
						else if (!iLocal_2546[48])
						{
							GlobalFunc_159("AR1_COPHELP3", 13000);
							iLocal_2546[48] = 1;
						}
						else if (!iLocal_2546[49])
						{
							GlobalFunc_159("AR1_DUCKHELP", 13000);
							iLocal_2546[49] = 1;
						}
					}
				}
				if (!iLocal_2546[50])
				{
					if (!GlobalFunc_5172(&Local_3094, 0))
					{
						GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_MED", 4);
						iLocal_2546[50] = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.09365f, -1085.448f, 25.60689f, -32.26557f, -1081.161f, 28.40192f, 7.75f, 0, 1, 0))
			{
				func_744(22);
			}
		}
		else
		{
			if (!iLocal_2546[49] && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				GlobalFunc_159("AR1_DUCKHELP", 13000);
				iLocal_2546[49] = 1;
			}
			if (!iLocal_2516)
			{
				HUD::FLASH_WANTED_DISPLAY(0);
				GlobalFunc_571(0, -1);
				iLocal_2516 = 1;
			}
		}
		if (iLocal_2546[49] && GlobalFunc_74("AR1_DUCKHELP"))
		{
			if (PAD::IS_CONTROL_PRESSED(0, 73))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_2720) > 500)
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				iLocal_2720 = MISC::GET_GAME_TIMER();
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_3094))
		{
			if (!Local_3092.f_1)
			{
				if (iLocal_2546[49] || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_2546[19])
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								GlobalFunc_159("AR1_RAGEBAR_KM", 13000);
							}
							else
							{
								GlobalFunc_159("AR1_RAGEBAR", 13000);
							}
							iLocal_2546[19] = 1;
							HUD::FLASH_ABILITY_BAR(10000);
						}
					}
				}
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
				{
					func_340();
					Local_3092.f_1 = 1;
				}
			}
		}
		else
		{
			if (GlobalFunc_74("AR1_RAGEBAR"))
			{
				func_340();
			}
			if (MISC::IS_PC_VERSION())
			{
				if (GlobalFunc_74("AR1_RAGEBAR_KM"))
				{
					func_340();
				}
			}
		}
		if (iLocal_2931 == 0)
		{
			iLocal_2931 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		bVar76 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -38.62f, -1099.01f, 27.31f) > 62500f;
		bVar77 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -38.62f, -1099.01f, 27.31f) < 40000f;
		if (bVar77)
		{
			func_187(Local_2747, fLocal_2630, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_2788);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_2931))
			{
				if (!func_339())
				{
					func_312(0);
				}
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2931);
			}
		}
		else if (bVar76)
		{
			func_312(1);
			func_300(&(iLocal_2808[0]), 1);
			func_300(&(iLocal_2808[1]), 1);
			func_300(&(iLocal_2808[2]), 1);
			func_300(&(iLocal_2808[3]), 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2804))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_2804, 1)) > 40000f)
				{
					func_300(&iLocal_2804, 1);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_2788);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_2931))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_2931);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1)) > 40000f)
			{
				func_744(13);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -26.27152f, -1083.751f, 25.43581f) < 40000f)
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-46.17491f, -1105.761f, 26.16539f, 35f, 0);
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -26.27152f, -1083.751f, 25.43581f) > 62500f)
		{
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		switch (iLocal_2702)
		{
			case 0:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("ARM_1_LOSE_COPS");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_DEALERSHIP"))
					{
						AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_TO_DEALERSHIP");
					}
					iLocal_2702++;
				}
				break;
			}
	}
	if (iLocal_3165 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		iVar78 = 0;
		iVar78 = 0;
		while (iVar78 < iLocal_2921)
		{
			GlobalFunc_2206(&(iLocal_2921[iVar78]), 0);
			iVar78++;
		}
		iVar78 = 0;
		while (iVar78 < iLocal_2924)
		{
			GlobalFunc_2206(&(iLocal_2924[iVar78]), 0);
			iVar78++;
		}
		STREAMING::REMOVE_ANIM_DICT("map_objects");
		GlobalFunc_563(0);
		GlobalFunc_7621(180, 0, 0, 1, 0);
		HUD::FLASH_WANTED_DISPLAY(0);
		GlobalFunc_601(9, 0);
		GlobalFunc_5105();
		SYSTEM::SETTIMERA(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 7;
	}
	if (iLocal_3165 == 3)
	{
		func_789(7, 1);
	}
}

int func_339()//Position - 0x2AA9F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2808[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2808[1]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2808[2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2808[3]))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_340()//Position - 0x2AAE0
{
	if ((GlobalFunc_74("AR1_RAGEBAR") || GlobalFunc_74("AR1_RAGEHOW")) || GlobalFunc_74("AR1_RAGESTAT"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (GlobalFunc_74("AR1_RAGEBAR_KM"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	HUD::FLASH_ABILITY_BAR(0);
}


bool func_342(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x2ABCA
{
	return func_252(uParam0, Param1, Param4, GlobalFunc_649(), GlobalFunc_649(), iParam7, 5, 0, 0, 0, iParam8, sParam9, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}


int func_344(bool bParam0, bool bParam1)//Position - 0x2AC23
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2924[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_2946);
		STREAMING::REQUEST_MODEL(iLocal_2947);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2946) && STREAMING::HAS_MODEL_LOADED(iLocal_2947))
		{
			if (!bParam0)
			{
				if (!bParam1)
				{
					iLocal_2921[0] = OBJECT::CREATE_OBJECT(iLocal_2946, -72.785f, -682.29f, 32.77f, 1, 1, 0);
					iLocal_2921[1] = OBJECT::CREATE_OBJECT(iLocal_2946, 25f, -664.5f, 30.76f, 1, 1, 0);
					ENTITY::SET_ENTITY_HEADING(iLocal_2921[0], 69.743f);
					ENTITY::SET_ENTITY_HEADING(iLocal_2921[1], 339.996f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2921[0], 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2921[1], 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_2921[0], 250);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_2921[1], 250);
				}
				iLocal_2924[0] = OBJECT::CREATE_OBJECT(iLocal_2947, -72.785f, -682.29f, 32.87f, 1, 1, 0);
				iLocal_2924[1] = OBJECT::CREATE_OBJECT(iLocal_2947, 25f, -664.5f, 30.86f, 1, 1, 0);
				ENTITY::SET_ENTITY_HEADING(iLocal_2924[0], -110.257f);
				ENTITY::SET_ENTITY_HEADING(iLocal_2924[1], 339.996f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2924[0], 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2924[1], 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_2924[0], 250);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_2924[1], 250);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2946);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2947);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}


void func_346(bool bParam0)//Position - 0x2ADE1
{
	if (bParam0)
	{
		if (iLocal_2668 == -1)
		{
			iLocal_2668 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(25.40665f, -664.5241f, 30.37865f, 10.39396f, -690.48f, 35.73986f, 19.25f);
		}
		if (iLocal_2669 == -1)
		{
			iLocal_2669 = MISC::_ADD_DISPATCH_SPAWN_BLOCKING_ANGLED_AREA(14.52216f, -684.6943f, 30.08809f, -85.90411f, -678.752f, 38.47314f, 52.5f);
		}
	}
	else
	{
		if (iLocal_2668 != -1)
		{
			MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_2668);
			iLocal_2668 = -1;
		}
		if (iLocal_2669 != -1)
		{
			MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_2669);
			iLocal_2669 = -1;
		}
	}
}



void func_349()//Position - 0x2AEC5
{
	Local_3092 = 99f;
	PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_3092 / 100f), 1);
}






void func_355()//Position - 0x2F1FD
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	
	Var0 = { 39.0428f, -638.7694f, 30.6267f };
	fVar3 = 335.0152f;
	if (iLocal_2644 == 0)
	{
		Var0 = { 39.3644f, -638.0751f, 30.6267f };
		fVar3 = 335.0097f;
	}
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (bLocal_2534)
			{
				GlobalFunc_5116(Var0, fVar3, 0, 0);
				iLocal_2642 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_2642 = 99;
			}
		}
		else
		{
			func_314();
			if ((func_225(Var0 + Vector(3f, 1f, 0f), 0, 0) && func_311(Var0, 0)) && func_310(Var0 + Vector(0f, 3f, 0f), 0))
			{
				GlobalFunc_5108(0, -1, 0);
				func_337();
				func_382();
				func_304();
				func_381();
				func_349();
				func_380();
				PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3077[iLocal_2644 /*7*/], "ARM_1_LAMARS_CAR", 0);
				}
				bLocal_2508 = true;
				iLocal_3165 = 0;
			}
		}
	}
	if (iLocal_3165 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2645, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2646, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2647, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_2783);
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		STREAMING::REQUEST_ANIM_DICT("map_objects");
		STREAMING::REQUEST_ANIM_DICT(sLocal_2789);
		if (((((((((func_344(1, 0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2645, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2646, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2647, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_2783)) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("map_objects")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2789)) && (bLocal_2508 || (!bLocal_2508 && SYSTEM::TIMERB() > 1000)))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/]);
				}
				if (iLocal_2644 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_2783);
				}
				else
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_2783);
				}
				VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_3077[iLocal_2644 /*7*/], 0, 0);
				VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_3077[iLocal_2644 /*7*/], 1, 0);
			}
			func_362(0, 1);
			func_361();
			func_300(&iLocal_2803, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
			GlobalFunc_2206(&iLocal_2901, 0);
			func_57(&Local_3061, 1);
			if (iLocal_2934 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_2934);
				iLocal_2934 = 0;
			}
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Local_2966);
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_2966, 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_2966, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2966, 20000, 2096, 4);
				TASK::TASK_LOOK_AT_ENTITY(Local_2966, PLAYER::PLAYER_PED_ID(), 20000, 2096, 4);
			}
			func_344(0, 0);
			ENTITY::PLAY_ENTITY_ANIM(iLocal_2921[1], "p_sec_gate_01_s_close", "map_objects", 4f, 0, 1, 0, 0, 0);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2921[1]);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_2921[1], 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_2924[0], 0, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_2924[1], 0, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_4956();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			PED::SET_CREATE_RANDOM_COPS(0);
			MISC::CLEAR_AREA(44.4942f, -634.8408f, 34.55825f, 200f, 1, 0, 0, 0);
			iLocal_2802 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 7.542f, -578.0831f, 36.6983f, 336.2658f, 1, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2802, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			iLocal_2840[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2802, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2840[0], joaat("weapon_pistol"), -1, 0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2840[0], 2, 0);
			iLocal_2840[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2802, 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_2840[1], joaat("weapon_pistol"), -1, 0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_2840[1], 2, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3077[iLocal_2643 /*7*/], 1);
				VEHICLE::ROLL_DOWN_WINDOWS(Local_3077[iLocal_2643 /*7*/]);
				VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[iLocal_2643 /*7*/], 1);
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
				}
			}
			AUDIO::STOP_AUDIO_SCENES();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01");
			if (bLocal_2508)
			{
				fVar4 = func_359(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1), iLocal_2647, sLocal_2783, 20);
				fVar5 = func_359(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], 1), iLocal_2646, sLocal_2783, 20);
				if (fVar4 < 1000f)
				{
					fVar4 = 1000f;
				}
				if (fVar5 < 1000f)
				{
					fVar5 = 1000f;
				}
				if (MISC::ABSF((fVar5 - fVar4)) < 750f)
				{
					if ((fVar5 - fVar4) > 0f)
					{
						fVar5 = (fVar5 + 500f);
					}
					else
					{
						fVar4 = (fVar4 + 500f);
					}
				}
				if (bLocal_2492)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/], iLocal_2646, sLocal_2783, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_2208(&(Local_3077[iLocal_2644 /*7*/]), 2500f);
						}
						else
						{
							GlobalFunc_2208(&(Local_3077[iLocal_2644 /*7*/]), fVar5);
						}
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2644 /*7*/], 1);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_3077[iLocal_2644 /*7*/], 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lamar_Throttle_Blip", Local_3077[iLocal_2644 /*7*/], 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/], iLocal_2647, sLocal_2783, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), 1500f);
						}
						else
						{
							GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), fVar4);
						}
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2643 /*7*/], 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Franklin_Throttle_Blip", Local_3077[iLocal_2643 /*7*/], 0, 0, 0);
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/], iLocal_2646, sLocal_2783, 1);
						GlobalFunc_2208(&(Local_3077[iLocal_2644 /*7*/]), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2646, sLocal_2783) - 200f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2644 /*7*/], 1);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_3077[iLocal_2644 /*7*/], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/], iLocal_2647, sLocal_2783, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), 1500f);
						}
						else
						{
							GlobalFunc_2208(&(Local_3077[iLocal_2643 /*7*/]), fVar4);
						}
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2643 /*7*/], 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Franklin_Throttle_Blip", Local_3077[iLocal_2643 /*7*/], 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_2966))
					{
						TASK::TASK_LOOK_AT_COORD(Local_2966, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3077[iLocal_2644 /*7*/], -2.5729f, 0.4432f, 0.4889f), 20000, 2096, 4);
					}
				}
				uLocal_2884 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				if (bLocal_2522)
				{
					CAM::SET_CAM_PARAMS(uLocal_2884, 43.50769f, -636.9529f, 31.88593f, -5.839731f, -0.072286f, 141.0281f, 28.4257f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_2884, 43.44817f, -636.9048f, 31.88602f, -5.839731f, -0.072286f, 141.0281f, 28.4257f, 6500, 0, 0, 2);
				}
				else
				{
					CAM::SET_CAM_PARAMS(uLocal_2884, 44.4942f, -634.8408f, 34.55825f, -9.333186f, 0.007438f, 141.6949f, 34.99998f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_2884, 45.33989f, -634.41f, 31.49674f, -1.446978f, -0.011956f, 131.2897f, 34.99998f, 4500, 3, 3, 2);
				}
				CAM::SHAKE_CAM(uLocal_2884, "HAND_SHAKE", 0.05f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_RADAR(0);
				HUD::DISPLAY_HUD(0);
				GlobalFunc_8316(1, 1, 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_3077[iLocal_2643 /*7*/], 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_3077[iLocal_2643 /*7*/], 1);
				VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], 1), 40.40989f, -635.81f, 31.09674f) > SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1), 40.40989f, -635.81f, 31.09674f))
					{
						GlobalFunc_553(5);
					}
				}
			}
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			AUDIO::START_AUDIO_SCENE("ARM_1_COPS_ARRIVE");
			GlobalFunc_2204();
			SYSTEM::SETTIMERB(0);
			SYSTEM::SETTIMERA(0);
			Local_2966.f_2 = 0;
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_2678 = -1;
			bLocal_2529 = false;
			iLocal_2543 = 0;
			iLocal_2642 = 0;
			iLocal_3165 = 1;
		}
	}
	if (iLocal_3165 == 1)
	{
		func_357(1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2678))
		{
			fVar6 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2678);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[iLocal_2644 /*7*/]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[iLocal_2644 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[iLocal_2643 /*7*/]))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[iLocal_2643 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_2921[1]))
		{
			if (SYSTEM::TIMERB() > 10)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_2921[1], 1);
			}
		}
		switch (iLocal_2642)
		{
			case 0:
				if (!iLocal_2546[43])
				{
					if (bLocal_2493)
					{
						if (bLocal_2494)
						{
							if (GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_DISS4", 7, 0, 0, 0, 0))
							{
								iLocal_2546[43] = 1;
							}
						}
						else if (GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_DISS3", 7, 0, 0, 0, 0))
						{
							iLocal_2546[43] = 1;
						}
					}
					else if (bLocal_2492)
					{
						if (GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_DISS1", 7, 0, 0, 0, 0))
						{
							iLocal_2546[43] = 1;
						}
					}
					else if (GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_DISS2", 7, 0, 0, 0, 0))
					{
						iLocal_2546[43] = 1;
					}
				}
				if (bLocal_2508)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
						{
							if ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2646, sLocal_2783) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3077[iLocal_2644 /*7*/])) < 200f)
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_3077[iLocal_2644 /*7*/], 0f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
						{
							if ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2647, sLocal_2783) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3077[iLocal_2643 /*7*/])) < 200f)
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_3077[iLocal_2643 /*7*/], 0f);
							}
						}
					}
				}
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
				STREAMING::REQUEST_ANIM_DICT(sLocal_2789);
				if (((((SYSTEM::TIMERB() > 4500 || !bLocal_2508) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2789)) && iLocal_2546[43])
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0)) && !PED::IS_PED_INJURED(Local_2966))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/]);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2646, sLocal_2783);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 0);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/], iLocal_2645, sLocal_2783, 0);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2644 /*7*/], 0);
						VEHICLE::SET_PLAYBACK_SPEED(Local_3077[iLocal_2644 /*7*/], 0f);
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2655, "Idling_Throttle_Blip_Loop", Local_3077[iLocal_2644 /*7*/], "ARM_1_SOUNDSET", 0, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/]);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2647, sLocal_2783);
						ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], Var0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], fVar3);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[iLocal_2643 /*7*/]);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2966);
						TASK::TASK_CLEAR_LOOK_AT(Local_2966);
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						Local_2966.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_2677 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_2643 == 0)
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_2677, Local_3077[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[0 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_2966.f_4, Local_3077[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_2677, Local_3077[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[1 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_2966.f_4, Local_3077[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[0 /*7*/], "seat_dside_f"));
						}
						if (bLocal_2493)
						{
							if (bLocal_2494)
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2789, "CarRace_Banter_bothtrashed_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2789, "CarRace_Banter_bothtrashed_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
								bLocal_2529 = true;
							}
							else
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2789, "CarRace_Banter_thatbucket_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2789, "CarRace_Banter_thatbucket_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
								bLocal_2529 = true;
							}
						}
						else if (bLocal_2492)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2789, "CarRace_Banter_FlowThrough_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2789, "CarRace_Banter_FlowThrough_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
							bLocal_2529 = true;
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2789, "CarRace_Banter_MoveSome_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2789, "CarRace_Banter_MoveSome_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
							bLocal_2529 = true;
						}
					}
					CAM::DESTROY_ALL_CAMS(0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (bLocal_2529)
					{
						uLocal_2884 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
						iLocal_2678 = PED::CREATE_SYNCHRONIZED_SCENE(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						if (bLocal_2493)
						{
							if (bLocal_2494)
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "CarRace_Banter_bothtrashed_cam", sLocal_2789);
							}
							else
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "CarRace_Banter_thatbucket_cam", sLocal_2789);
							}
						}
						else if (bLocal_2492)
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "carrace_banter_flowthrough_cam", sLocal_2789);
						}
						else
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "carrace_banter_movesome_cam", sLocal_2789);
						}
					}
					else
					{
						uLocal_2884 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						if (iLocal_2644 == 1)
						{
							CAM::SET_CAM_PARAMS(uLocal_2884, 36.59747f, -637.1707f, 31.80989f, -3.324733f, -0.009855f, -122.2542f, 21.89666f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uLocal_2884, 36.59521f, -637.1694f, 31.76422f, -3.324733f, -0.009855f, -122.2542f, 21.89666f, 15000, 0, 0, 2);
						}
						else
						{
							CAM::SET_CAM_PARAMS(uLocal_2884, 36.91358f, -636.7665f, 31.83924f, -3.589668f, -0.002839f, -124.8351f, 21.70874f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uLocal_2884, 36.91154f, -636.7663f, 31.80007f, -3.589668f, -0.002839f, -124.8351f, 21.70874f, 15000, 0, 0, 2);
						}
					}
					if (!bLocal_2508)
					{
						CAM::SHAKE_CAM(uLocal_2884, "HAND_SHAKE", 0.05f);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						HUD::DISPLAY_RADAR(0);
						HUD::DISPLAY_HUD(0);
						CAM::SET_WIDESCREEN_BORDERS(1, 0);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 1:
				if (!iLocal_2546[42])
				{
					GlobalFunc_2207();
					iLocal_2546[42] = 1;
				}
				else if (!GlobalFunc_5172(&Local_3094, 0) || SYSTEM::TIMERB() > 20000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2802, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_2840[0]) && !PED::IS_PED_SITTING_IN_VEHICLE(iLocal_2840[0], iLocal_2802))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2840[0], iLocal_2802, -1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2802, 1, 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_2802, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2802, 2);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2802, 1);
						SYSTEM::SETTIMERB(0);
						iLocal_2642++;
					}
				}
				break;
			
			case 2:
				VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_2783);
				if ((SYSTEM::TIMERB() > 1000 || fVar6 > 0.99f) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_2783))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2802, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2802))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2802);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_2783);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_2802, 300, sLocal_2783, 1, 0, 786603);
						GlobalFunc_2208(&iLocal_2802, 500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2802, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2802, 0.1f);
					}
					if (!PED::IS_PED_INJURED(Local_2966))
					{
						Local_2966.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_2677 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_2643 == 0)
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_2677, Local_3077[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[0 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_2966.f_4, Local_3077[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_2677, Local_3077[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[1 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_2966.f_4, Local_3077[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_3077[0 /*7*/], "seat_dside_f"));
						}
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2789, "CarRace_Banter_cops_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2677, 0.1f);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2789, "CarRace_Banter_cops_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					if (bLocal_2529)
					{
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_2884 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
						iLocal_2678 = PED::CREATE_SYNCHRONIZED_SCENE(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, "CarRace_Banter_cops_cam", sLocal_2789);
					}
					else
					{
						CAM::SHAKE_CAM(uLocal_2884, "HAND_SHAKE", 0.05f);
						CAM::SET_CAM_PARAMS(uLocal_2884, 46.84201f, -636.4459f, 31.56392f, -0.180864f, 0.105875f, 110.3526f, 30.89239f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_2884, 46.88197f, -636.5637f, 31.60283f, -0.098123f, 0.105875f, 105.78f, 30.89239f, 16000, 0, 0, 2);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 3:
				if (!iLocal_2546[44])
				{
					if (!GlobalFunc_5172(&Local_3094, 0))
					{
						GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_COPS", 7, 0, 0, 0);
					}
					MemCopy(&uVar7, {GlobalFunc_2209()}, 4);
					if (MISC::ARE_STRINGS_EQUAL(&uVar7, "ARM1_COPS_3"))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_2546[44] = 1;
					}
				}
				if (SYSTEM::TIMERB() > 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_3077[iLocal_2644 /*7*/], 1f);
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2655))
						{
							AUDIO::STOP_SOUND(iLocal_2655);
						}
						SYSTEM::SETTIMERB(0);
						iLocal_2642++;
					}
				}
				break;
			
			case 4:
				if (!iLocal_2543)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
					{
						if (SYSTEM::TIMERB() > 2200)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_2543 = 1;
						}
					}
				}
				if (SYSTEM::TIMERB() > 2500 || fVar6 > 0.99f)
				{
					iLocal_3165 = 2;
				}
				break;
		}
		if (GlobalFunc_4926(1000))
		{
			iLocal_3165 = 3;
		}
	}
	if (iLocal_3165 == 2)
	{
		RECORDING::_0x81CBAE94390F9F89();
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
		HUD::CLEAR_HELP(1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
		func_357(0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_2924[0], 1, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_2924[1], 1, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -8f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 0);
		}
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2966, -8f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2966);
			TASK::TASK_CLEAR_LOOK_AT(Local_2966);
			ENTITY::SET_ENTITY_COORDS(Local_2966, -32.912f, -1086.304f, 29.2035f, 1, 0, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_2966, 1);
			ENTITY::SET_ENTITY_COLLISION(Local_2966, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_2966, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/]);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2647, sLocal_2783);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2643 /*7*/], 0);
			if (iLocal_2643 == 0)
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 337.9254f);
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 35.9457f, -646.1738f, 30.6258f, 1, 0, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 335.015f);
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 35.2234f, -646.9493f, 30.6292f, 1, 0, 0, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/]);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2646, sLocal_2783);
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_2645, sLocal_2783);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3077[iLocal_2644 /*7*/], 0);
			func_305();
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_2200(35.9457f, -646.1738f, 30.6258f, 200f, 1, 5000);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2802, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2802))
			{
				GlobalFunc_2208(&iLocal_2802, 10500f);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_2802, 1f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2802, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_2840[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2840[0], 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_2840[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2840[1], 0);
			}
		}
		MISC::CLEAR_AREA_OF_VEHICLES(81.9f, -600.2f, 32.5f, 30f, 0, 0, 0, 0, 0);
		if ((CAM::DOES_CAM_EXIST(uLocal_2884) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4) && CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
		{
			CAM::DESTROY_CAM(uLocal_2884, 0);
			if (iLocal_2643 == 0)
			{
				uLocal_2884 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 34.02319f, -647.5784f, 31.91944f, -1.429148f, 0f, -47.80906f, 50.02792f, 1, 2);
			}
			else
			{
				uLocal_2884 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 33.33243f, -648.7061f, 31.86157f, -0.377383f, 0f, -47.84317f, 50.02792f, 1, 2);
			}
			SYSTEM::WAIT(0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_2789);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		AUDIO::STOP_AUDIO_SCENE("ARM_1_COPS_ARRIVE");
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-50.5f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_3165 = 0;
		iLocal_3164 = 6;
	}
	if (iLocal_3165 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_3077[iLocal_2644 /*7*/]))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[iLocal_2644 /*7*/], 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_3077[iLocal_2643 /*7*/]))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_3077[iLocal_2643 /*7*/], 1);
				}
				SYSTEM::WAIT(0);
			}
		}
		HUD::CLEAR_PRINTS();
		GlobalFunc_4956();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2802, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2802))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2802);
			}
			VEHICLE::SET_VEHICLE_SIREN(iLocal_2802, 1);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2802, 2);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2802, 1);
			VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_2783);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2802, 300, sLocal_2783, 1);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2655))
		{
			AUDIO::STOP_SOUND(iLocal_2655);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2921[1]))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2921[1], "map_objects", "p_sec_gate_01_s_close", 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_2921[1], "map_objects", "p_sec_gate_01_s_close", 0.99f);
			}
		}
		iLocal_3165 = 2;
	}
}


int func_357(bool bParam0)//Position - 0x30B27
{
	if (bParam0)
	{
		if (iLocal_2936 == 0)
		{
			iLocal_2936 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(89.7f, -694.9f, 32.7f, "dt1_05_carpark");
		}
		else if (INTERIOR::IS_INTERIOR_READY(iLocal_2936))
		{
			return 1;
		}
		else
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2936);
		}
	}
	else if (iLocal_2936 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2936);
		iLocal_2936 = 0;
	}
	return 0;
}


float func_359(struct<3> Param0, int iParam3, char* sParam4, int iParam5)//Position - 0x30BF8
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam3, sParam4);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}


void func_361()//Position - 0x30CE4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2423)
	{
		if (iLocal_1390[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1390[iVar0], sLocal_2783);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2273)
	{
		if (iLocal_1036[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1036[iVar0], sLocal_2783);
		}
		iVar0++;
	}
}

void func_362(bool bParam0, bool bParam1)//Position - 0x30D49
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2080))
	{
		iLocal_105 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2096);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_121)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_378());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_374();
			func_373();
			func_370();
		}
		else
		{
			func_366();
			func_365();
		}
		if (bParam1)
		{
			GlobalFunc_9132(0);
		}
	}
}



void func_365()//Position - 0x30E5F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iLocal_2273[iVar0] = 0;
		Local_1540[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_123[iVar0] = 0f;
		fLocal_241[iVar0] = 0f;
		fLocal_359[iVar0] = 0f;
		fLocal_477[iVar0] = 0f;
		iLocal_1036[iVar0] = 0;
		fLocal_595[iVar0] = 0f;
		iLocal_1154[iVar0] = 0;
		iLocal_2097[iVar0] = 0;
		iLocal_1272[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2391[iVar0] = 0;
		iVar0++;
	}
	iLocal_1523 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2407[iVar0] = 0;
		Local_1892[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_951[iVar0] = 0f;
		fLocal_967[iVar0] = 0f;
		fLocal_983[iVar0] = 0f;
		fLocal_999[iVar0] = 0f;
		iLocal_1507[iVar0] = 0;
		iLocal_2215[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_2462[iVar0] = 0;
		iVar0++;
	}
	iLocal_1525 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		iLocal_2423[iVar0] = 0;
		Local_1938[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_717[iVar0] = 0f;
		fLocal_756[iVar0] = 0f;
		fLocal_795[iVar0] = 0f;
		fLocal_834[iVar0] = 0f;
		iLocal_1390[iVar0] = 0;
		fLocal_873[iVar0] = 0f;
		iLocal_1429[iVar0] = 0;
		iLocal_2231[iVar0] = 0;
		iLocal_1468[iVar0] = 0;
		iVar0++;
	}
	iLocal_1524 = 0;
	iLocal_1527 = 0;
	iLocal_1530 = 0;
	iLocal_1531 = 0;
	iLocal_1532 = 0;
}

void func_366()//Position - 0x30FEC
{
	func_369();
	func_368();
	func_367();
}

void func_367()//Position - 0x31000
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2423[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2423[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2423[iVar0]));
			}
		}
		iLocal_1429[iVar0] = 0;
		if (!bLocal_101 && !bLocal_114)
		{
			if (iLocal_1390[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_2231[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2231[iVar0]);
		}
		iVar0++;
	}
}

void func_368()//Position - 0x310F6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2407[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2407[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2407[iVar0]));
			}
		}
		iLocal_1507[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2215[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2215[iVar0]);
		}
		iVar0++;
	}
	iLocal_1528 = 0;
	iLocal_1525 = 0;
}

void func_369()//Position - 0x31173
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2273[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2273[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2273[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2273[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2273[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2273[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2273[iVar0]));
			}
		}
		if (!bLocal_101 && !bLocal_114)
		{
			if (iLocal_1036[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080);
			}
		}
		iLocal_1154[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_2097[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2097[iVar0]);
		}
		iVar0++;
	}
	iLocal_1527 = 0;
	iLocal_1523 = 0;
}

void func_370()//Position - 0x31271
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2423[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[iVar0]);
				}
			}
			func_372(iLocal_2423[iVar0]);
			GlobalFunc_2210(iLocal_2423[iVar0]);
		}
		iLocal_1429[iVar0] = 0;
		iLocal_1468[iVar0] = 0;
		if (!bLocal_101 && !bLocal_114)
		{
			if (iLocal_1390[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_2231[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2231[iVar0]);
		}
		iVar0++;
	}
	iLocal_1529 = 0;
}


void func_372(int iParam0)//Position - 0x31355
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, 1);
				if (bLocal_122)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_373()//Position - 0x313EE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2407[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2407[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2407[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2407[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2215[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2215[iVar0]);
		}
		iVar0++;
	}
	iLocal_1528 = 0;
	iLocal_1525 = 0;
}

void func_374()//Position - 0x31471
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2273[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2273[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2273[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2273[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2273[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2273[iVar0]);
				}
			}
			func_372(iLocal_2273[iVar0]);
			GlobalFunc_2210(iLocal_2273[iVar0]);
		}
		iLocal_1154[iVar0] = 0;
		iLocal_1272[iVar0] = 0;
		if (!bLocal_101 && !bLocal_114)
		{
			if (iLocal_1036[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_2097[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2097[iVar0]);
		}
		iVar0++;
	}
	iLocal_1527 = 0;
	iLocal_1523 = 0;
}




int func_378()//Position - 0x31585
{
	if (iLocal_2270 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2270;
}


void func_380()//Position - 0x315CC
{
	STREAMING::REMOVE_IPL("DT1_03_Shutter");
	GlobalFunc_7621(180, 1, 0, 1, 0);
}

void func_381()//Position - 0x315E6
{
	if (iLocal_2644 == 1)
	{
		iLocal_2645 = 9;
		iLocal_2646 = 313;
		iLocal_2647 = 312;
	}
	else
	{
		iLocal_2645 = 8;
		iLocal_2646 = 311;
		iLocal_2647 = 310;
	}
}

void func_382()//Position - 0x3161A
{
	if (!PED::IS_PED_INJURED(Local_2966))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_2966, Local_3077[iLocal_2644 /*7*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_2966, Local_3077[iLocal_2644 /*7*/], -1);
			}
		}
	}
}

void func_383()//Position - 0x31661
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	var uVar14;
	struct<6> Var15;
	char cVar21[24];
	struct<6> Var27;
	char cVar33[24];
	int iVar39;
	char* sVar40;
	int iVar41;
	bool bVar42;
	bool bVar43;
	int iVar44;
	int iVar45;
	bool bVar46;
	struct<6> Var47;
	
	fVar0 = 1250f;
	if (iLocal_3164 == 4)
	{
		fVar0 = 83500f;
	}
	if (iLocal_3165 == 4)
	{
		Var1 = { Local_3077[0 /*7*/].f_2 };
		fVar4 = fLocal_2634;
		if (iLocal_3164 == 4)
		{
			Var1 = { -1155.198f, -873.2174f, 10.6185f };
			fVar4 = -150f;
		}
		if (bLocal_2534)
		{
			GlobalFunc_5116(Var1, fVar4, 0, 0);
			iLocal_2642 = 99;
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar4);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			iLocal_2642 = 99;
		}
		func_314();
		STREAMING::REQUEST_MODEL(iLocal_2950);
		while ((((!func_470() || !ENTITY::DOES_ENTITY_EXIST(Local_2966)) || !ENTITY::DOES_ENTITY_EXIST(Local_3077[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_3077[1 /*7*/])) || !STREAMING::HAS_MODEL_LOADED(iLocal_2950))
		{
			func_225(Local_2756, 0, 0);
			func_311(Local_3077[0 /*7*/].f_2, Local_3077[0 /*7*/].f_5);
			func_310(Local_3077[1 /*7*/].f_2, Local_3077[1 /*7*/].f_5);
			STREAMING::REQUEST_MODEL(iLocal_2950);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", 0);
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(0, -1, 0);
		func_337();
		func_382();
		func_304();
		func_469(1);
		PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
		if (iLocal_3164 == 3)
		{
			iLocal_2844 = PED::CREATE_PED(26, iLocal_2950, -1886.833f, -579.0045f, 10.8163f, 315.0557f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 8, 1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_2844, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2950);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			if (iLocal_3164 == 4)
			{
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], -1153.198f, -875.2174f, 10.6185f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], -150f);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 1, 1);
		}
		AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::FREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::SET_RADIO_AUTO_UNFREEZE(0);
		AUDIO::SET_RADIO_TRACK("RADIO_03_HIPHOP_NEW", "ARM1_RADIO_STARTS");
		func_468(sLocal_2783, iLocal_2648, 1, 1);
		func_466();
		func_465(1);
		func_464(joaat("a_m_m_bevhills_02"));
		iLocal_111 = 1;
		bLocal_117 = true;
		fLocal_1027 = 200f;
		iLocal_1534 = iLocal_1390[15];
		func_463((fVar0 + 4000f), (fVar0 - 5000f));
		SYSTEM::WAIT(500);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/], iLocal_2648, sLocal_2783, 1);
			GlobalFunc_2208(&(Local_3077[iLocal_2644 /*7*/]), fVar0);
			func_462(Local_3077[iLocal_2644 /*7*/], fVar0);
			if (iLocal_3164 == 3)
			{
				PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 210.9189f);
				ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], -1153.198f, -875.2174f, 10.6185f, 1, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[iLocal_2643 /*7*/]);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SYSTEM::WAIT(100);
			iLocal_3165 = 0;
		}
	}
	if (iLocal_3165 == 0)
	{
		func_381();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
		STREAMING::SET_PED_POPULATION_BUDGET(2);
		iLocal_2496 = 0;
		iLocal_2497 = 0;
		iLocal_2498 = 0;
		bLocal_2495 = false;
		iLocal_2504 = 0;
		iLocal_2505 = 0;
		iLocal_2517 = 0;
		iLocal_2528 = 0;
		iLocal_2531 = 0;
		iLocal_2538 = 0;
		fLocal_2628 = 1f;
		iLocal_2653 = 0;
		Local_3092.f_1 = 0;
		Local_3092 = 0f;
		func_299();
		GlobalFunc_2224(1);
		func_460(1);
		func_459(1);
		GlobalFunc_563(1);
		GlobalFunc_585(61, 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		AUDIO::UNFREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::SET_RADIO_AUTO_UNFREEZE(1);
		GlobalFunc_2223(Local_3077[iLocal_2643 /*7*/], -1);
		GlobalFunc_504(Local_3077[iLocal_2643 /*7*/], -1);
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 1);
			iLocal_2682 = ENTITY::GET_ENTITY_HEALTH(Local_3077[iLocal_2643 /*7*/]);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_3077[iLocal_2644 /*7*/]);
			VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_3077[iLocal_2644 /*7*/], 1);
			VEHICLE::_0x1F9FB66F3A3842D2(Local_3077[iLocal_2644 /*7*/], 1);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3077[iLocal_2644 /*7*/], "ARM_1_LAMARS_CAR", 0);
			iLocal_2683 = ENTITY::GET_ENTITY_HEALTH(Local_3077[iLocal_2644 /*7*/]);
		}
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2966, 1);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 116, 0);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 118, 0);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 208, 1);
			PED::SET_PED_LOD_MULTIPLIER(Local_2966, 2f);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GET_IN_CAR_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_1_GET_IN_CAR_SCENE");
		}
		if (iLocal_3164 == 3)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_START"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_START");
			}
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
		}
		else
		{
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
			iLocal_2546[1] = 1;
			iLocal_2546[12] = 1;
			iLocal_2546[13] = 1;
			iLocal_2546[14] = 1;
			iLocal_2546[15] = 1;
			iLocal_2546[16] = 1;
			if (bLocal_2507)
			{
				iLocal_2546[19] = 1;
				iLocal_2546[20] = 1;
				iLocal_2546[21] = 1;
				Local_3092.f_1 = 1;
				bLocal_2540 = true;
			}
			func_759(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		iLocal_2686 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-334.1819f, -673.7113f, 33.33865f, 28.25f, 3f, 3f, 175.8f, 0, 7);
		iLocal_2687 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1138.2f, -723.6f, 20f, 10f, 10f, 3f, 91.3f, 0, 7);
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 500)
			{
				func_463((fVar0 + 5000f), (fVar0 - 5000f));
				func_457();
				func_456();
				func_430(Local_3077[iLocal_2644 /*7*/], 1f);
				SYSTEM::WAIT(0);
			}
			if (iLocal_3164 == 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3077[iLocal_2643 /*7*/], 20f);
				}
			}
			CAM::DO_SCREEN_FADE_IN(800);
			while (!CAM::IS_SCREEN_FADED_IN())
			{
				func_463((fVar0 + 5000f), (fVar0 - 5000f));
				func_456();
				func_430(Local_3077[iLocal_2644 /*7*/], 1f);
				GlobalFunc_7629();
				SYSTEM::WAIT(0);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 1);
		}
		if (iLocal_3164 == 3)
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
		}
		iLocal_3346 = MISC::GET_GAME_TIMER();
		func_380();
		iLocal_2701 = 0;
		iLocal_2703 = 0;
		iLocal_2704 = 0;
		iLocal_2705 = 0;
		iLocal_2691 = 0;
		bLocal_2520 = false;
		iLocal_2692 = 0;
		iLocal_2510 = 0;
		bLocal_2525 = false;
		iLocal_2642 = 0;
		iLocal_3165 = 1;
	}
	if (iLocal_3165 == 1)
	{
		GlobalFunc_7629();
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!PED::IS_PED_INJURED(iLocal_2844))
		{
			if (!bLocal_2520)
			{
				if ((fLocal_2627 > 15000f || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0) && ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2643 /*7*/]) > 1f)) || CAM::IS_SPHERE_VISIBLE(-1885f, -577.6f, 12.1f, 1f))
				{
					bLocal_2520 = true;
				}
			}
			else if (!PED::IS_PED_IN_COMBAT(iLocal_2844, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2844, 780511057) != 1)
			{
				TASK::TASK_COMBAT_PED(iLocal_2844, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			if (SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(iLocal_2844, 1)) > 2500f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2844))
				{
					func_57(&iLocal_2844, 0);
				}
			}
		}
		if (iLocal_3345 == 0 && (MISC::GET_GAME_TIMER() - iLocal_3346) > 10000)
		{
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_3345 = 1;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_2797);
		STREAMING::REQUEST_ANIM_DICT(sLocal_2796);
		STREAMING::REQUEST_ANIM_DICT(sLocal_2798);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
		{
			if (iLocal_2642 == 0)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
				{
					fVar8 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3077[iLocal_2643 /*7*/]);
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_3077[iLocal_2643 /*7*/]) != 4)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3077[iLocal_2643 /*7*/], 4);
					}
					if ((iLocal_2643 == 1 && fVar8 > 3900f) || (iLocal_2643 == 0 && fVar8 > 3600f))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/]);
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3077[iLocal_2643 /*7*/].f_6, sLocal_2783);
					}
				}
				else if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_3077[iLocal_2643 /*7*/]) != 1)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3077[iLocal_2643 /*7*/], 1);
				}
			}
			fVar9 = SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], 1));
			iVar10 = VEHICLE::GET_CLOSEST_VEHICLE(Var5, 10f, 0, GlobalFunc_2220());
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
			{
				fLocal_2627 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3077[iLocal_2644 /*7*/]);
				if (bLocal_2519)
				{
					func_423(&fLocal_2628, Local_3077[iLocal_2643 /*7*/], Local_3077[iLocal_2644 /*7*/]);
				}
				else
				{
					func_422(&fLocal_2628, Local_3077[iLocal_2643 /*7*/], Local_3077[iLocal_2644 /*7*/]);
				}
				fLocal_1030 = 7000f;
				func_456();
				func_430(Local_3077[iLocal_2644 /*7*/], fLocal_2628);
				VEHICLE::SET_PLAYBACK_SPEED(Local_3077[iLocal_2644 /*7*/], fLocal_2628);
				func_419();
				func_418(&(Local_3077[iLocal_2644 /*7*/]), fLocal_2627);
				if (!iLocal_2510)
				{
					if (fLocal_2627 > 50500f && fLocal_2627 < 51100f)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2644 /*7*/], 0, 0);
						iLocal_2510 = 1;
					}
				}
				else if (fLocal_2627 > 51100f)
				{
					ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2644 /*7*/], 1, 0);
					iLocal_2510 = 0;
				}
				if (!bLocal_2495)
				{
					if (fLocal_2627 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783) - 4000f))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/]);
						}
						func_362(0, 1);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3077[iLocal_2644 /*7*/]);
						bLocal_2492 = false;
						bLocal_2495 = true;
					}
				}
				if (!iLocal_2528)
				{
					if (iLocal_2644 == 0 && fLocal_2627 >= 54635f)
					{
						iVar11 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1052.49f, -476.15f, 36.66f, 5f, joaat("prop_sec_barrier_ld_01a"), 0, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_3077[iLocal_2644 /*7*/], 1);
							OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iVar11, 1, 0);
							OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iVar11, 2, 0);
						}
						iLocal_2528 = 1;
					}
				}
				else if (fLocal_2627 > 56000f && fLocal_2627 < 56500f)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_3077[iLocal_2644 /*7*/], 0);
				}
			}
			if (iLocal_3164 == 3)
			{
				if (fLocal_2627 > 83000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0) && ENTITY::IS_ENTITY_ON_SCREEN(Local_3077[iLocal_2644 /*7*/]))
					{
						func_759(1, "CHASE_MID_POINT", 0, 0, 0, 1);
						iLocal_3164 = 4;
					}
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], 0))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				}
			}
			if (fLocal_2627 < 28500f)
			{
				fVar12 = 160000f;
			}
			else
			{
				fVar12 = 60000f;
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/]))
			{
				func_417(iVar10);
				func_416(iVar10);
				if (GlobalFunc_663("CMN_GENGETBCK", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (!bLocal_100)
				{
					iLocal_2676 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_2507)
				{
					if (!iLocal_2546[19])
					{
						if (((iLocal_2546[1] && (iLocal_2546[12] || !GlobalFunc_4953(1, 1, 0))) && !GlobalFunc_663("AR1_CHASE", 0, 0)) && fLocal_2627 > 17200f)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (iLocal_2691 == 0)
								{
									iLocal_2691 = MISC::GET_GAME_TIMER();
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_2691) > 2500)
								{
									if (PAD::_IS_USING_KEYBOARD(0))
									{
										GlobalFunc_159("AR1_RAGEBAR_KM", 17000);
									}
									else
									{
										GlobalFunc_159("AR1_RAGEBAR", 17000);
									}
									iLocal_2546[19] = 1;
									iLocal_2691 = 0;
									PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
									HUD::FLASH_ABILITY_BAR(10000);
								}
							}
						}
					}
					else if (!iLocal_2546[20])
					{
						if (iLocal_2691 == 0)
						{
							if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
							{
								iLocal_2691 = MISC::GET_GAME_TIMER();
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_2691) > 2000)
						{
							GlobalFunc_159("AR1_RAGEHOW", 13000);
							iLocal_2546[20] = 1;
							iLocal_2691 = MISC::GET_GAME_TIMER();
							HUD::FLASH_ABILITY_BAR(0);
						}
					}
					else if (!iLocal_2546[21])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2691) > 10000 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_159("AR1_RAGESTAT", 13000);
							iLocal_2546[21] = 1;
							iLocal_2691 = MISC::GET_GAME_TIMER();
							HUD::FLASH_ABILITY_BAR(0);
						}
					}
					else if (!iLocal_2546[22])
					{
						if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							iLocal_2691 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_2691) > 500 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (PAD::_IS_USING_KEYBOARD(0))
							{
								GlobalFunc_159("AR1_RAGEDEACT_KM", 13000);
							}
							else
							{
								GlobalFunc_159("AR1_RAGEDEACT", 13000);
							}
							iLocal_2546[22] = 1;
							iLocal_2691 = MISC::GET_GAME_TIMER();
						}
					}
					if (!Local_3092.f_1)
					{
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							func_340();
							Local_3092.f_1 = 1;
						}
					}
				}
				if (iLocal_2546[1])
				{
					if (!iLocal_2546[12])
					{
						if (iLocal_2692 == 0)
						{
							iLocal_2692 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_2692) > 5000)
						{
							if ((PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && GlobalFunc_4953(1, 1, 0)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_2546[12] = 1;
								iLocal_2692 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (GlobalFunc_74("AR1_CAMHELP"))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2692) > 6000)
						{
							HUD::CLEAR_HELP(0);
							iLocal_2692 = MISC::GET_GAME_TIMER();
						}
					}
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((fLocal_2627 > 60000f && !iLocal_2546[13]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1210.676f, -578.6287f, 25.42328f, -1272.775f, -627.6569f, 37.72716f, 25f, 0, 1, 0)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							GlobalFunc_159("AR1_BRAKE", 13000);
							iLocal_2546[13] = 1;
						}
						if (fLocal_2627 > 100000f)
						{
							VEHICLE::GET_VEHICLE_LIGHTS_STATE(Local_3077[iLocal_2643 /*7*/], &iVar13, &uVar14);
							if (!iLocal_2546[23])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -349.8183f, -716.8513f, 37.1367f, -351.9376f, -819.9261f, 29.76863f, 16.5f, 0, 1, 0))
								{
									if (iVar13 == 0)
									{
										GlobalFunc_159("AR1_HEADHELP", 13000);
										iLocal_2546[23] = 1;
									}
									else
									{
										iLocal_2546[23] = 1;
									}
								}
							}
						}
						if (fLocal_2627 > 70000f)
						{
							if (!iLocal_2546[24])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1134.825f, -900.8605f, 30.00168f, -1002.171f, -1127.49f, -2.783524f, 27.5f, 0, 1, 0))
								{
									GlobalFunc_159("AR1_JUMPHELP", 13000);
									iLocal_2546[24] = 1;
								}
							}
						}
						if (fLocal_2627 > 100500f && fLocal_2627 < 106500f)
						{
							if (!iLocal_2546[79])
							{
								GlobalFunc_159("AR1_VEHCAMH", 13000);
								iLocal_2546[79] = 1;
							}
						}
						if (fLocal_2627 > 125000f)
						{
							if (!iLocal_2546[25])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -150.1928f, -653.9603f, 38.70139f, -69.53586f, -683.4604f, 31.17117f, 16.5f, 0, 1, 0))
								{
									GlobalFunc_159("AR1_JUMPHELP2", 13000);
									iLocal_2546[25] = 1;
								}
							}
						}
					}
					if (iLocal_2546[79])
					{
						if (GlobalFunc_74("AR1_VEHCAMH"))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(0, 0))
							{
								HUD::CLEAR_HELP(1);
							}
						}
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_2699) > 10000)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2676) > 0)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3077[iLocal_2643 /*7*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3077[iLocal_2644 /*7*/], 0f, 1f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3077[iLocal_2644 /*7*/], 0f, 8f, 2f), 4f, 0, 1, 0))
							{
								VEHICLE::START_VEHICLE_HORN(Local_3077[iLocal_2644 /*7*/], 1500, 0, 0);
								iLocal_2699 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (!GlobalFunc_5172(&Local_3094, 1))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (iLocal_2651 == 0 || ((MISC::GET_GAME_TIMER() - iLocal_2651) > 20000 && fLocal_2627 < 144600f))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_3077[0 /*7*/], Local_3077[1 /*7*/]))
								{
									if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_CRASH", 7, 0, 0, 0))
									{
										Var15 = { GlobalFunc_2209() };
										if (MISC::ARE_STRINGS_EQUAL(&Var15, "ARM1_CRASH_01"))
										{
											StringCopy(&cVar21, "thatscominoutourchecks", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var15, "ARM1_CRASH_02"))
										{
											StringCopy(&cVar21, "stoprubbinup", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var15, "ARM1_CRASH_03"))
										{
											StringCopy(&cVar21, "imabouttotake", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var15, "ARM1_CRASH_04"))
										{
											StringCopy(&cVar21, "imgonnatell", 24);
										}
										else if (MISC::ARE_STRINGS_EQUAL(&Var15, "ARM1_CRASH_05"))
										{
											StringCopy(&cVar21, "ayyofrank", 24);
										}
										else
										{
											StringCopy(&cVar21, "stoprubbinup", 24);
										}
										if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2797))
										{
											TASK::TASK_PLAY_ANIM(Local_2966, sLocal_2797, &cVar21, 8f, -8f, -1, 32, 0, 0, 0, 0);
										}
										iLocal_2651 = MISC::GET_GAME_TIMER();
										iLocal_2504 = 0;
										iLocal_2505 = 0;
									}
								}
							}
							if ((MISC::GET_GAME_TIMER() - iLocal_2652) > 16000 && !iLocal_2505)
							{
								if (!iLocal_2504)
								{
									if ((fLocal_2627 > 20000f && fLocal_2627 < 144600f) && (fLocal_2627 < 55000f || fLocal_2627 > 60500f))
									{
										if (fVar9 < 400f)
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_TEASE", 7, 0, 0, 0))
											{
												Var27 = { GlobalFunc_2209() };
												if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_01"))
												{
													StringCopy(&cVar33, "hahahakeepup", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_02"))
												{
													StringCopy(&cVar33, "manthisismeanttobe", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_03"))
												{
													StringCopy(&cVar33, "rememberthis", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_04"))
												{
													StringCopy(&cVar33, "cmonfrank", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_05"))
												{
													StringCopy(&cVar33, "youaintfuckin", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_06"))
												{
													StringCopy(&cVar33, "skoolinyoass", 24);
												}
												else if (MISC::ARE_STRINGS_EQUAL(&Var27, "ARM1_TEASE_07"))
												{
													StringCopy(&cVar33, "keeppoping", 24);
												}
												else
												{
													StringCopy(&cVar33, "cmonmynigga", 24);
												}
												if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2796))
												{
													TASK::TASK_PLAY_ANIM(Local_2966, sLocal_2796, &cVar33, 8f, -8f, -1, 32, 0, 0, 0, 0);
												}
												iLocal_2504 = 1;
											}
										}
									}
								}
								else if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RESP", 7, 0, 0, 0))
								{
									iLocal_2652 = MISC::GET_GAME_TIMER();
									iLocal_2504 = 0;
								}
							}
							if (!iLocal_2505)
							{
								if (!iLocal_2504)
								{
									if (!iLocal_2546[26])
									{
										if (fLocal_2627 > 8000f && fLocal_2627 < 15000f)
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RING", 7, 0, 0, 0))
											{
												iLocal_2546[26] = 1;
												bLocal_2525 = true;
											}
										}
									}
									else if (!iLocal_2546[72])
									{
										if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_INDIC", 7, 0, 0, 0))
										{
											iLocal_2546[72] = 1;
											iLocal_2505 = 1;
										}
									}
									if (fVar9 < 2500f)
									{
										if (fLocal_2627 > 42000f && fLocal_2627 < 43000f)
										{
											iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_2627 > 48000f && fLocal_2627 < 49000f)
										{
											iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_2627 > 49000f && fLocal_2627 < 52000f)
										{
											if (!iLocal_2546[73])
											{
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
												{
													if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_STDIO", 7, 0, 0, 0))
													{
														iLocal_2505 = 0;
														iLocal_2504 = 0;
														iLocal_2546[73] = 1;
													}
												}
												else if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_STDIO2", 7, 0, 0, 0))
												{
													iLocal_2505 = 0;
													iLocal_2504 = 0;
													iLocal_2546[73] = 1;
												}
											}
										}
										if (fLocal_2627 > 61000f && fLocal_2627 < 62000f)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_ALLEY", 7, 0, 0, 0);
											}
											else
											{
												iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_ALLEY2", 7, 0, 0, 0);
											}
										}
										if (fLocal_2627 > 78000f && fLocal_2627 < 79000f)
										{
											iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_2627 > 95500f && fLocal_2627 < 96500f)
										{
											iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_2627 > 119300f && fLocal_2627 < 120300f)
										{
											iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_2627 > 123500f && fLocal_2627 < 124500f)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_PARK", 7, 0, 0, 0);
											}
											else
											{
												iLocal_2505 = GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_PARK3", 7, 0, 0, 0);
											}
										}
									}
								}
							}
							else if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_OKAY", 7, 0, 0, 0))
							{
								iLocal_2505 = 0;
								iLocal_2504 = 0;
							}
							if (!iLocal_2504 && !iLocal_2505)
							{
								if (fLocal_2627 > 141500f && fLocal_2627 < 142500f)
								{
									if (!iLocal_2546[28])
									{
										if (fVar9 < 2500f)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_BANK", 7, 0, 0, 0))
												{
													iLocal_2546[28] = 1;
													iLocal_2505 = 0;
													iLocal_2504 = 0;
												}
											}
											else if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_BANK2", 7, 0, 0, 0))
											{
												iLocal_2546[28] = 1;
												iLocal_2505 = 0;
												iLocal_2504 = 0;
											}
										}
									}
								}
								if (fLocal_2627 > 50000f)
								{
									if (!iLocal_2546[15])
									{
										if (iLocal_2546[0])
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1055.957f, -480.5382f, 42.98192f, -1169.248f, -545.5168f, 27.53709f, 24f, 0, 1, 0))
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_ALIEN", 7, 0, 0, 0))
												{
													iLocal_2546[15] = 1;
													iLocal_2505 = 0;
													iLocal_2504 = 0;
												}
											}
											else
											{
												iLocal_2546[15] = 1;
												iLocal_2505 = 0;
												iLocal_2504 = 0;
											}
										}
									}
								}
								if (fLocal_2627 > 87150f && fLocal_2627 < 88150f)
								{
									if (!iLocal_2546[29])
									{
										if (fVar9 < 2500f)
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_HILL", 7, 0, 0, 0))
											{
												iLocal_2546[29] = 1;
												iLocal_2505 = 0;
												iLocal_2504 = 0;
											}
										}
									}
								}
								if (fLocal_2627 > 20000f && fVar9 > 6400f)
								{
									if (!bLocal_2495)
									{
										if (!iLocal_2546[30])
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_2696) > 10000)
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_WRONG", 7, 0, 0, 0))
												{
													iLocal_2546[30] = 1;
													iLocal_2505 = 0;
													iLocal_2504 = 0;
													iLocal_2694++;
													iLocal_2696 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
									if (!iLocal_2546[31])
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_2697) > 10000 && (MISC::GET_GAME_TIMER() - iLocal_2696) > 4000)
										{
											if (fVar9 > 10000f)
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_2546[31] = 1;
													iLocal_2505 = 0;
													iLocal_2504 = 0;
													iLocal_2695++;
													iLocal_2697 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
									if (!iLocal_2546[32])
									{
										if ((MISC::GET_GAME_TIMER() - iLocal_2698) > 10000 && (MISC::GET_GAME_TIMER() - iLocal_2697) > 4000)
										{
											if (fVar9 > 22500f)
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_2546[32] = 1;
													iLocal_2505 = 0;
													iLocal_2504 = 0;
													iLocal_2695++;
													iLocal_2698 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								else
								{
									if (iLocal_2694 < 4)
									{
										iLocal_2546[30] = 1;
									}
									if (iLocal_2695 < 5)
									{
										iLocal_2546[31] = 1;
										iLocal_2546[32] = 1;
									}
								}
								if (((fLocal_2627 > 25000f && fLocal_2627 < 144600f) && (MISC::GET_GAME_TIMER() - iLocal_2675) > 15000) && (MISC::GET_GAME_TIMER() - iLocal_2676) > 0)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_2676) < 1000 && fVar9 < 400f)
									{
										if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_FRONT4", 7, 0, 0, 0))
										{
											iLocal_2505 = 0;
											iLocal_2504 = 0;
											iLocal_2675 = MISC::GET_GAME_TIMER();
										}
									}
									if (((MISC::GET_GAME_TIMER() - iLocal_2676) > 2000 && fVar9 < 3600f) && fVar9 > 400f)
									{
										if (!iLocal_2546[33])
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_FRONT1", 7, 0, 0, 0))
											{
												iLocal_2505 = 0;
												iLocal_2504 = 0;
												iLocal_2546[33] = 1;
												iLocal_2675 = MISC::GET_GAME_TIMER();
											}
										}
										else if (!iLocal_2546[34])
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_FRONT2", 7, 0, 0, 0))
											{
												iLocal_2505 = 0;
												iLocal_2504 = 0;
												iLocal_2546[34] = 1;
												iLocal_2675 = MISC::GET_GAME_TIMER();
											}
										}
										else if (!iLocal_2546[35])
										{
											if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_FRONT3", 7, 0, 0, 0))
											{
												iLocal_2505 = 0;
												iLocal_2504 = 0;
												iLocal_2546[35] = 1;
												iLocal_2675 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								if ((MISC::GET_GAME_TIMER() - iLocal_2674) > 10000)
								{
									if (fVar9 < 2500f)
									{
										if (((fLocal_2627 > 17000f && fLocal_2627 < 25000f) || (fLocal_2627 > 32000f && fLocal_2627 < 39500f)) || (fLocal_2627 > 102000f && fLocal_2627 < 108000f))
										{
											iVar39 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
											if (iVar39 == 0)
											{
												sVar40 = "ARM1_CHAT1";
												iVar41 = 65;
											}
											else if (iVar39 == 1)
											{
												sVar40 = "ARM1_CHAT2";
												iVar41 = 66;
											}
											else if (iVar39 == 2)
											{
												sVar40 = "ARM1_CHAT3";
												iVar41 = 67;
											}
											else if (iVar39 == 3)
											{
												sVar40 = "ARM1_CHAT4";
												iVar41 = 68;
											}
											else if (iVar39 == 4)
											{
												sVar40 = "ARM1_CHAT6";
												iVar41 = 70;
											}
											else
											{
												sVar40 = "ARM1_CHAT7";
												iVar41 = 71;
											}
											if (!iLocal_2546[16] && !iLocal_2546[17])
											{
												if (!iLocal_2546[37])
												{
													if (!iLocal_2546[26])
													{
														sVar40 = "ARM1_RING";
														iVar41 = 18;
													}
													else
													{
														iLocal_2546[37] = 1;
													}
												}
												if (iLocal_2546[37])
												{
													if (GlobalFunc_7050() == 0)
													{
														sVar40 = "ARM1_TOW2";
														iVar41 = 17;
													}
													else
													{
														sVar40 = "ARM1_TOW2";
														iVar41 = 17;
													}
												}
											}
											if (!iLocal_2546[iVar41])
											{
												if (GlobalFunc_10618(&Local_3168, "ARM1AUD", sVar40, 7, 0, 0, 0))
												{
													if (MISC::ARE_STRINGS_EQUAL(sVar40, "ARM1_RING"))
													{
														iLocal_2546[37] = 1;
														bLocal_2525 = true;
													}
													else
													{
														iLocal_2505 = 0;
														iLocal_2504 = 0;
														iLocal_2546[iVar41] = 1;
														iLocal_2674 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (fLocal_2627 > 10000f)
					{
						bVar42 = false;
						if (((iVar10 == iLocal_2423[0] || iVar10 == iLocal_2423[1]) || iVar10 == iLocal_2423[6]) || iVar10 == iLocal_2273[114])
						{
							bVar42 = true;
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_2656) > 3000 || (bVar42 && (MISC::GET_GAME_TIMER() - iLocal_2656) > 1000))
						{
							if (!GlobalFunc_111())
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar10) && iVar10 != Local_3077[iLocal_2644 /*7*/])
								{
									bVar43 = false;
									iVar44 = 0;
									if (bVar42)
									{
										iVar44 = 1;
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar10, Local_3077[iLocal_2643 /*7*/]))
									{
										bVar43 = true;
									}
									else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar10)) > 2f)
									{
										if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iVar10) - ENTITY::GET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/]))) > 60f)
										{
											iVar44 = 1;
										}
									}
									if (bVar43 || iVar44)
									{
										iLocal_2843 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar10, -1);
										if (!PED::IS_PED_INJURED(iLocal_2843))
										{
											if (bVar43)
											{
												GlobalFunc_5130(iLocal_2843, "GENERIC_CURSE_HIGH", 6);
											}
											else
											{
												GlobalFunc_5130(iLocal_2843, "GENERIC_INSULT_HIGH", 6);
											}
											iLocal_2656 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
				if (!bLocal_2495)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_3077[iLocal_2644 /*7*/].f_1))
					{
						func_233();
						Local_3077[iLocal_2644 /*7*/].f_1 = GlobalFunc_6783(Local_3077[iLocal_2644 /*7*/], 0, 0);
					}
					GlobalFunc_2216(Local_3077[iLocal_2644 /*7*/].f_1, Local_3077[iLocal_2644 /*7*/], SYSTEM::SQRT(fVar12), 0.8f, 0);
					if (!iLocal_2546[38])
					{
						if (!PED::IS_PED_INJURED(iLocal_2844))
						{
							if (bLocal_2520)
							{
								GlobalFunc_173(&Local_3168, 7, iLocal_2844, "BABYDICK", 0, 1);
								GlobalFunc_5653(iLocal_2844, "ARM1_CUAA", "BABYDICK", 6);
								iLocal_2546[38] = 1;
							}
						}
						else
						{
							iLocal_2546[38] = 1;
						}
					}
					if (!iLocal_2546[1])
					{
						if (!GlobalFunc_5172(&Local_3094, 2))
						{
							GlobalFunc_164("AR1_CHASE", 6000, 0);
							iLocal_2546[1] = 1;
						}
					}
					if ((fLocal_2627 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783) - 6000f) && fVar9 < 400f) || (fLocal_2627 > 135000f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 13.99176f, -675.8222f, 31.48455f, 20.46627f, -688.1566f, 34.48455f, 4f, 0, 1, 0)))
					{
						bLocal_2492 = true;
						bLocal_2508 = true;
						iLocal_3165 = 2;
					}
				}
				else
				{
					Local_2735 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3077[iLocal_2644 /*7*/], -6f, 0f, 0f) };
					if (!HUD::DOES_BLIP_EXIST(uLocal_2881))
					{
						func_233();
						uLocal_2881 = GlobalFunc_5104(Local_2735, 0);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_2883))
					{
						uLocal_2883 = GlobalFunc_5104(-88.1825f, -675.9736f, 34.2665f, 1);
						HUD::SET_BLIP_ALPHA(uLocal_2883, 0);
					}
					if (!iLocal_2546[39] && !GlobalFunc_5172(&Local_3094, 2))
					{
						GlobalFunc_164("AR1_PARK", 7500, 0);
						iLocal_2546[39] = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1), Local_2735) < 25f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						bLocal_2492 = false;
						bLocal_2508 = false;
						iLocal_3165 = 2;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3077[iLocal_2643 /*7*/], 25.32066f, -664.571f, 30.62743f, 13.76605f, -690.2087f, 36.02796f, 12.75f, 0, 1, 0))
					{
						bLocal_2492 = false;
						bLocal_2508 = true;
						iLocal_3165 = 2;
					}
				}
				if (fLocal_2627 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783) - 55000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2645, sLocal_2783);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2646, sLocal_2783);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2647, sLocal_2783);
					VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_2783);
					if (fLocal_2627 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783) - 20000f))
					{
						STREAMING::REQUEST_MODEL(joaat("police3"));
						STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
						func_344(1, 0);
						STREAMING::REQUEST_ANIM_DICT("map_objects");
						STREAMING::REQUEST_ANIM_DICT(sLocal_2789);
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(Local_3077[iLocal_2643 /*7*/].f_1))
				{
					func_233();
					Local_3077[iLocal_2643 /*7*/].f_1 = GlobalFunc_6783(Local_3077[iLocal_2643 /*7*/], 0, 0);
				}
				if (GlobalFunc_663("AR1_PARK", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (!iLocal_2546[40])
				{
					GlobalFunc_164("CMN_GENGETBCK", 7500, 0);
					iLocal_2546[40] = 1;
				}
				if ((((GlobalFunc_74("AR1_CAMHELP") || GlobalFunc_74("AR1_HEADHELP")) || GlobalFunc_74("AR1_HINTHELP")) || GlobalFunc_74("AR1_BRAKE")) || GlobalFunc_74("AR1_VEHCAMH"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_340();
				iLocal_2505 = 0;
				iLocal_2504 = 0;
				if (SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 1)) > 40000f)
				{
					func_744(13);
				}
			}
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				if (fVar9 > fVar12)
				{
					func_744(5);
				}
				if (FIRE::IS_ENTITY_ON_FIRE(Local_2966))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_2716) > 1000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_2966, 0);
					}
				}
				else
				{
					iLocal_2716 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[iLocal_2644 /*7*/]))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
			{
				if (SYSTEM::TIMERA() > 10000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 1);
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3077[iLocal_2644 /*7*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						iVar45 = (VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_OFF_BONES(Local_3077[iLocal_2644 /*7*/]) + VEHICLE::_GET_VEHICLE_NUMBER_OF_BROKEN_BONES(Local_3077[iLocal_2644 /*7*/]));
						if ((VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_3077[iLocal_2644 /*7*/]) < 200f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_3077[iLocal_2644 /*7*/]) < 200f) || iVar45 > 2)
						{
							func_744(21);
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_2718) > 0)
						{
							GlobalFunc_5130(Local_2966, "GENERIC_INSULT_HIGH", 3);
							TASK::TASK_LOOK_AT_ENTITY(Local_2966, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
							iLocal_2718 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3077[iLocal_2644 /*7*/]);
						}
					}
				}
			}
			if (FIRE::IS_ENTITY_ON_FIRE(Local_3077[iLocal_2644 /*7*/]))
			{
				func_744(21);
			}
		}
		if (iLocal_3164 == 3)
		{
			GlobalFunc_10692(&uLocal_3333, Local_3077[iLocal_2644 /*7*/], "AR1_CAMHELP", 0, 1, 1, 1);
		}
		else
		{
			GlobalFunc_10692(&uLocal_3333, Local_3077[iLocal_2644 /*7*/], "AR1_CAMHELP", 0, 1, 0, 1);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !PAD::IS_CONTROL_PRESSED(0, 80))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_2717) > 5000 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!iLocal_2546[78])
				{
					GlobalFunc_159("AR1_CAMHELP2", -1);
					iLocal_2546[78] = 1;
				}
			}
		}
		else
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && GlobalFunc_74("AR1_CAMHELP2"))
			{
				HUD::CLEAR_HELP(1);
			}
			iLocal_2717 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_3164 == 3)
		{
			switch (iLocal_2701)
			{
				case 0:
					if (bLocal_2525)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_START");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_PHONE_LAMAR");
						}
						iLocal_2701++;
					}
					break;
				
				case 1:
					Var47 = { GlobalFunc_560() };
					if (iLocal_2546[26])
					{
						if (iLocal_2546[72])
						{
							if (!MISC::ARE_STRINGS_EQUAL("ARM1_INDIC", &Var47))
							{
								bVar46 = true;
							}
						}
					}
					else if (iLocal_2546[16] || iLocal_2546[17])
					{
						if (!MISC::ARE_STRINGS_EQUAL("ARM1_TOW", &Var47) && !MISC::ARE_STRINGS_EQUAL("ARM1_TOW2", &Var47))
						{
							bVar46 = true;
						}
					}
					if (bVar46)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_PHONE_LAMAR");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_FOLLOW_LAMAR"))
						{
							AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_FOLLOW_LAMAR");
						}
						iLocal_2701++;
					}
					break;
			}
			switch (iLocal_2703)
			{
				case 0:
					if (fLocal_2627 > 51500f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1048.17f, -473.1709f, 43.59984f, -1062.492f, -486.3139f, 30.66454f, 26.25f, 0, 1, 0))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_FOLLOW_LAMAR"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_FOLLOW_LAMAR");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_STUDIO"))
							{
								AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_STUDIO");
							}
							iLocal_2703++;
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1214.699f, -582.2675f, 34.07594f, -1209.03f, -578.9652f, 21.30647f, 26.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1048.203f, -472.5669f, 43.38507f, -1046.014f, -466.9206f, 30.80215f, 45.75f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_STUDIO"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_STUDIO");
						}
						iLocal_2703++;
					}
					break;
				
				case 2:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_CANALS"))
					{
						AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_TO_CANALS");
					}
					iLocal_2703++;
					break;
				}
		}
		switch (iLocal_2704)
		{
			case 0:
				if (fLocal_2627 > 80000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1169.196f, -849.9986f, 21.09482f, -961.9859f, -1197.101f, -1.209268f, 136.5f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_CANALS"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_TO_CANALS");
						}
						iLocal_2704++;
					}
				}
				break;
			
			case 1:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_OVER_BRIDGES"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_OVER_BRIDGES");
				}
				iLocal_2704++;
				break;
		}
		switch (iLocal_2705)
		{
			case 0:
				if (fLocal_2627 > 120000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -313.1678f, -834.3452f, 40.87144f, -288.5447f, -647.5313f, 27.05053f, 115.5f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_OVER_BRIDGES"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_OVER_BRIDGES");
						}
						iLocal_2705++;
					}
				}
				break;
			
			case 1:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_GARAGE"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_GARAGE");
				}
				iLocal_2705++;
				break;
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LAMAR_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_LAMAR_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LAMAR_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_1_LAMAR_FOCUS_CAM");
		}
		if (!bLocal_2507)
		{
			PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
		}
		if (SYSTEM::VDIST2(Var5, -202.4f, -638.9f, 33.7f) < 22500f)
		{
			if (iLocal_2935 == 0)
			{
				iLocal_2935 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-202.4f, -638.9f, 33.7f, "dt1_02_carpark");
			}
			else if (!INTERIOR::IS_INTERIOR_READY(iLocal_2935))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2935);
			}
		}
		else if (SYSTEM::VDIST2(Var5, -202.4f, -638.9f, 33.7f) > 40000f)
		{
			if (iLocal_2935 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_2935);
				iLocal_2935 = 0;
			}
		}
		if (fLocal_2627 > 100000f)
		{
			if (SYSTEM::VDIST2(Var5, 34f, -638.5f, 31.6f) < 22500f)
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(46.6f, -624.3f, 32.1f, GlobalFunc_590(-1.1f, 0f, 137.4f), 100f, 0);
				}
			}
			else if (SYSTEM::VDIST2(Var5, 34f, -638.5f, 31.6f) > 40000f)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
		}
	}
	if (iLocal_3165 == 2)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_233();
		GlobalFunc_2224(0);
		func_459(0);
		GlobalFunc_563(0);
		GlobalFunc_5652(&Local_3094, 1, 0);
		GlobalFunc_4948(&uLocal_3333, 0, 0);
		if (iLocal_2935 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_2935);
			iLocal_2935 = 0;
		}
		func_1();
		bLocal_2493 = false;
		bLocal_2494 = false;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			VEHICLE::_0x1F9FB66F3A3842D2(Local_3077[iLocal_2644 /*7*/], 0);
			VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 0);
			if (iLocal_2510)
			{
				ENTITY::SET_ENTITY_COLLISION(Local_3077[iLocal_2644 /*7*/], 1, 0);
				iLocal_2510 = 0;
			}
			if ((iLocal_2682 - ENTITY::GET_ENTITY_HEALTH(Local_3077[iLocal_2643 /*7*/])) > 250)
			{
				GlobalFunc_585(61, 1);
				bLocal_2493 = true;
			}
			if ((iLocal_2683 - ENTITY::GET_ENTITY_HEALTH(Local_3077[iLocal_2644 /*7*/])) > 250)
			{
				bLocal_2494 = true;
			}
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3077[iLocal_2643 /*7*/], 0f);
		}
		GlobalFunc_2215(iLocal_2805);
		func_300(&iLocal_2805, 1);
		if (iLocal_2686 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2686);
			iLocal_2686 = -1;
		}
		if (iLocal_2687 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2687);
			iLocal_2687 = -1;
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_2790);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2797);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2796);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2798);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		AUDIO::SET_AGGRESSIVE_HORNS(0);
		SYSTEM::SETTIMERB(0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		func_460(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 5;
	}
	if (iLocal_3165 == 3)
	{
		func_789(5, 1);
	}
}

































void func_416(int iParam0)//Position - 0x3510E
{
	struct<3> Var0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_2654) > 5000)
	{
		if (!GlobalFunc_5172(&Local_3094, 1))
		{
			if (iParam0 != Local_3077[iLocal_2644 /*7*/])
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3077[iLocal_2643 /*7*/], iParam0, 1))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2643 /*7*/]) > 15f && ENTITY::GET_ENTITY_SPEED(iParam0) > 1f)
						{
							if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
							{
								Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_3077[iLocal_2643 /*7*/], ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
								if (Var0.f_1 < -1.5f && Var0.f_1 > -5f)
								{
									if (MISC::ABSF(Var0.x) < 4f)
									{
										if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_NEAR", 7, 0, 0, 0))
										{
											iLocal_2654 = MISC::GET_GAME_TIMER();
											if ((fLocal_2627 < 144600f && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(Local_3077[iLocal_2643 /*7*/]) == 2) && ENTITY::IS_ENTITY_UPRIGHT(Local_3077[iLocal_2643 /*7*/], 1119092736))
											{
												if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2798) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2798, "learnhowtouseastick", 3))
												{
													TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2798, "learnhowtouseastick", 8f, -8f, -1, 32, 0, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_417(int iParam0)//Position - 0x35281
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_2653) > 2000)
	{
		if (iParam0 != Local_3077[iLocal_2644 /*7*/])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 9f)
				{
					if ((ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2643 /*7*/]) - ENTITY::GET_ENTITY_SPEED(iParam0)) > 3f || MISC::ABSF((ENTITY::GET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, 0);
							iLocal_2653 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_418(var uParam0, float fParam1)//Position - 0x3532B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if ((((((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 23000f && fParam1 < 25000f)) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 50500f)) || (fParam1 > 60500f && fParam1 < 63500f)) || (fParam1 > 78750f && fParam1 < 80500f)) || (fParam1 > 95750f && fParam1 < 98000f)) || (fParam1 > 110750f && fParam1 < 113000f)) || (fParam1 > 119000f && fParam1 < 121000f)) || (fParam1 > 123750f && fParam1 < 126000f))
		{
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(*uParam0, 1);
		}
		if (((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 51000f)) || (fParam1 > 71250f && fParam1 < 73200f)) || (fParam1 > 74250f && fParam1 < 76000f)) || (fParam1 > 110750f && fParam1 < 113500f)) || (fParam1 > 119000f && fParam1 < 121250f))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, 1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, 0);
		}
		if ((((((fParam1 > 23000f && fParam1 < 25000f) || (fParam1 > 61000f && fParam1 < 64000f)) || (fParam1 > 78500f && fParam1 < 81000f)) || (fParam1 > 95750f && fParam1 < 98500f)) || (fParam1 > 115000f && fParam1 < 115750f)) || (fParam1 > 123500f && fParam1 < 126500f))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, 1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, 0);
		}
	}
}

void func_419()//Position - 0x355D4
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	int iVar9[3];
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	float fVar17;
	struct<3> Var18;
	struct<3> Var21;
	char cVar24[64];
	char cVar40[64];
	int iVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64[4];
	int iVar69;
	int iVar70;
	int iVar71;
	struct<3> Var72;
	float fVar75;
	bool bVar76;
	int iVar77;
	char* sVar78;
	struct<3> Var79;
	
	bVar0 = false;
	bVar1 = false;
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!PED::IS_PED_INJURED(Local_2966))
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(Local_2966, 1) };
	}
	if (!iLocal_2531)
	{
		bVar8 = false;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[9]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2423[9], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar8 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[10]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2423[10], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar8 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[11]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2423[11], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar8 = true;
			}
		}
		if (bVar8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[9]))
			{
				iVar9[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[9], -1);
				if (!PED::IS_PED_INJURED(iVar9[0]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[9]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[9]);
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar9[0], iLocal_2423[9], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
					PED::SET_PED_KEEP_TASK(iVar9[0], 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[10]))
			{
				iVar9[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[10], -1);
				if (!PED::IS_PED_INJURED(iVar9[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[10]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[10]);
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar9[1], iLocal_2423[10], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
					PED::SET_PED_KEEP_TASK(iVar9[1], 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[11]))
			{
				iVar9[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[11], -1);
				if (!PED::IS_PED_INJURED(iVar9[2]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[11]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[11]);
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar9[2], iLocal_2423[11], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
					PED::SET_PED_KEEP_TASK(iVar9[2], 1);
				}
			}
			iLocal_2531 = 1;
		}
	}
	if (iLocal_2231[9] == joaat("cruiser"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[9]))
		{
			if (!iLocal_2511)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2423[9], 1), Var2) < 100f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bike_Bell", iLocal_2423[9], "ARM_1_SOUNDSET", 0, 0);
					iLocal_2511 = 1;
				}
			}
		}
		else
		{
			iLocal_2511 = 0;
		}
	}
	if (iLocal_2231[15] == joaat("packer"))
	{
		if (iLocal_1429[15] < 99 && fLocal_2627 < (fLocal_873[15] + 10000f))
		{
			if (fLocal_2627 > (fLocal_873[15] - 10000f) && !ENTITY::DOES_ENTITY_EXIST(iLocal_2807))
			{
				STREAMING::REQUEST_MODEL(joaat("tanker"));
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(993, sLocal_2783);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[15], 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2807))
			{
				if (fLocal_2627 < (fLocal_873[15] + 10000f))
				{
					STREAMING::REQUEST_MODEL(joaat("tanker"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")) && !bVar0)
					{
						iLocal_2807 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2423[15], 0f, -10f, 0f), ENTITY::GET_ENTITY_HEADING(iLocal_2423[15]), 1, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2807, 1);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2423[15], 1);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2423[15], iLocal_2807, 1065353216);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
						bVar0 = true;
					}
				}
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[15]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2807))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2807))
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(993, sLocal_2783);
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(993, sLocal_2783))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2807, 993, sLocal_2783, 1);
							GlobalFunc_2208(&iLocal_2807, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2423[15]));
						}
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_2807, fLocal_2628);
					}
				}
				if (!iLocal_2496 && (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iLocal_2423[15], 1)) < 625f || SYSTEM::VDIST2(Var5, ENTITY::GET_ENTITY_COORDS(iLocal_2423[15], 1)) < 400f))
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2423[15], 3000, -2087385909, 0);
					iLocal_2496 = 1;
				}
			}
			else if (fLocal_2627 > (fLocal_873[15] + 10000f) && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2423[15]) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
			{
				func_300(&(iLocal_2423[15]), 0);
				func_300(&iLocal_2807, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2423[15]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2807))
			{
				func_300(&iLocal_2807, 0);
			}
		}
	}
	if (iLocal_2231[32] == joaat("bus"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[32]))
		{
			if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iLocal_2423[32], 1)) < 900f)
			{
				if (!iLocal_2497)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2423[32], 3000, -2087385909, 0);
					if (iLocal_2680 == 0)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2423[32], 2);
						iLocal_2680 = MISC::GET_GAME_TIMER();
					}
					RECORDING::_0x293220DA1B46CEBC(2f, 2f, 2);
					iLocal_2497 = 1;
				}
			}
			if (iLocal_2497 && iLocal_2680 != 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_2680) > 2000)
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2423[32], 1);
					iLocal_2680 = 0;
				}
			}
		}
		else
		{
			iLocal_2497 = 0;
			iLocal_2680 = 0;
		}
	}
	if (iLocal_2231[33] == joaat("burrito3"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[33], 0))
		{
			if (!iLocal_2538)
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2423[33], 111, 111);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2423[33], 111, 111);
				iLocal_2538 = 1;
			}
			if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(iLocal_2423[33], 1)) < 100f)
			{
				if (!iLocal_2498)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2423[33], 2000, -2087385909, 0);
					iLocal_2498 = 1;
				}
			}
		}
		else
		{
			iLocal_2498 = 0;
			iLocal_2538 = 0;
		}
	}
	if (iLocal_2231[14] == joaat("benson"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[14], 0))
		{
			if (!iLocal_2499)
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2423[14], 4, 4);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2423[14], 4, 4);
				iLocal_2499 = 1;
			}
		}
		else
		{
			iLocal_2499 = 0;
		}
	}
	if (iLocal_2097[91] == joaat("maverick"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2273[91], 0))
		{
			if (!iLocal_2500)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2273[91], 1, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_2273[91]);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_2273[91], 128, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2273[91], 128, 0);
				iLocal_2500 = 1;
			}
		}
		else
		{
			iLocal_2500 = 0;
		}
	}
	iVar13 = 0;
	bVar14 = false;
	bVar15 = false;
	iVar16 = 0;
	fVar17 = 0f;
	iVar56 = joaat("s_m_m_movalien_01");
	if (fLocal_2627 < 43000f)
	{
		iVar13 = 0;
		while (iVar13 < Local_2981)
		{
			Local_2981[iVar13 /*5*/].f_2 = 0;
			iVar13++;
		}
		iVar13 = 0;
		while (iVar13 < Local_3002)
		{
			Local_3002[iVar13 /*5*/].f_2 = 0;
			iVar13++;
		}
	}
	else
	{
		iVar13 = 0;
		while (iVar13 < Local_2981)
		{
			if (iVar13 == 0)
			{
				StringCopy(&cVar40, "largegroup_flee_r_f_a", 64);
			}
			else if (iVar13 == 1)
			{
				StringCopy(&cVar40, "largegroup_flee_l_f_b", 64);
			}
			else if (iVar13 == 2)
			{
				StringCopy(&cVar40, "largegroup_flee_l_m_c", 64);
			}
			else if (iVar13 == 3)
			{
				StringCopy(&cVar40, "largegroup_flee_r_m_d", 64);
			}
			if (Local_2981[iVar13 /*5*/].f_2 == 0)
			{
				if (fLocal_2627 < 55000f)
				{
					STREAMING::REQUEST_MODEL(iVar56);
					STREAMING::REQUEST_ANIM_DICT(sLocal_2790);
					if ((STREAMING::HAS_MODEL_LOADED(iVar56) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2790)) && !bVar0)
					{
						if (iVar13 == 0)
						{
							StringCopy(&cVar24, "largegroup_loop_f_a", 64);
						}
						else if (iVar13 == 1)
						{
							StringCopy(&cVar24, "largegroup_loop_f_b", 64);
						}
						else if (iVar13 == 2)
						{
							StringCopy(&cVar24, "largegroup_loop_m_c", 64);
						}
						else if (iVar13 == 3)
						{
							StringCopy(&cVar24, "largegroup_loop_m_d", 64);
						}
						Var18 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_2790, &cVar24, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0, 2) };
						Var21 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_2790, &cVar24, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0, 2) };
						Local_2981[iVar13 /*5*/] = PED::CREATE_PED(26, iVar56, Var18, Var21.f_2, 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2981[iVar13 /*5*/], Var18, 0, 0, 1);
						TASK::TASK_PLAY_ANIM(Local_2981[iVar13 /*5*/], sLocal_2790, &cVar24, 1000f, -8f, -1, 9, 0, 0, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_2981[iVar13 /*5*/], 1);
						ENTITY::SET_ENTITY_COLLISION(Local_2981[iVar13 /*5*/], 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2981[iVar13 /*5*/], 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2981[iVar13 /*5*/], 1);
						if (iVar13 == 2)
						{
							GlobalFunc_173(&Local_3168, 2, Local_2981[iVar13 /*5*/], "EXTRA1", 0, 1);
						}
						else if (iVar13 == 3)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar56);
							GlobalFunc_173(&Local_3168, 3, Local_2981[iVar13 /*5*/], "EXTRA2", 0, 1);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_2981[iVar13 /*5*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_2981[iVar13 /*5*/], 3, 0, 0, 0);
						if ((iVar13 % 2) == 0)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_2981[iVar13 /*5*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_2981[iVar13 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_2981[iVar13 /*5*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_2981[iVar13 /*5*/], 5, 0, 0, 0);
						}
						Local_2981[iVar13 /*5*/].f_2 = 1;
						Local_2981[iVar13 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_2981[iVar13 /*5*/]))
				{
					fVar17 = SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(Local_2981[iVar13 /*5*/], 1));
					if (fVar17 < 1600f)
					{
						iVar16 = 1;
					}
					if (Local_2981[iVar13 /*5*/].f_2 == 1)
					{
						if (!bVar14)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
							{
								fVar57 = (SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(Local_2981[iVar13 /*5*/], 1)) / ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2643 /*7*/]));
								fVar58 = (SYSTEM::VDIST(Var5, ENTITY::GET_ENTITY_COORDS(Local_2981[iVar13 /*5*/], 1)) / ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2644 /*7*/]));
								if (fVar57 < 2f)
								{
									bVar15 = true;
								}
								else if (fVar58 < 3f)
								{
									if (fLocal_2628 > 0.7f)
									{
										bVar15 = true;
									}
								}
								bVar14 = true;
							}
						}
						if (bVar15)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_2981[iVar13 /*5*/], 0);
							ENTITY::SET_ENTITY_COLLISION(Local_2981[iVar13 /*5*/], 1, 0);
							if (iVar13 == 0)
							{
								TASK::TASK_PLAY_ANIM(Local_2981[iVar13 /*5*/], sLocal_2790, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar13 == 1)
							{
								TASK::TASK_PLAY_ANIM(Local_2981[iVar13 /*5*/], sLocal_2790, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar13 == 2)
							{
								TASK::TASK_PLAY_ANIM(Local_2981[iVar13 /*5*/], sLocal_2790, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar13 == 3)
							{
								TASK::TASK_PLAY_ANIM(Local_2981[iVar13 /*5*/], sLocal_2790, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							Local_2981[iVar13 /*5*/].f_2++;
						}
					}
					else if (Local_2981[iVar13 /*5*/].f_2 == 2)
					{
						if (PED::IS_PED_RAGDOLL(Local_2981[iVar13 /*5*/]))
						{
							Local_2981[iVar13 /*5*/].f_2 = 100;
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2981[iVar13 /*5*/], sLocal_2790, &cVar40, 3) || ENTITY::GET_ENTITY_SPEED(Local_2981[iVar13 /*5*/]) < 0.1f)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2981[iVar13 /*5*/], 1), Var2) < 100f)
							{
								Local_2981[iVar13 /*5*/].f_2 = 100;
							}
						}
					}
					else if (Local_2981[iVar13 /*5*/].f_2 == 100)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2981[iVar13 /*5*/], 1805844857) != 1)
						{
							TASK::TASK_SMART_FLEE_PED(Local_2981[iVar13 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_2981[iVar13 /*5*/], 1);
						}
					}
				}
				else if (Local_3168[2 /*10*/] == Local_2981[iVar13 /*5*/])
				{
					GlobalFunc_200(&Local_3168, 2);
				}
				else if (Local_3168[3 /*10*/] == Local_2981[iVar13 /*5*/])
				{
					GlobalFunc_200(&Local_3168, 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2981[iVar13 /*5*/]))
				{
					if ((fLocal_2627 > 64000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !bVar1)
					{
						if (!PED::IS_PED_INJURED(Local_2981[iVar13 /*5*/]))
						{
							TASK::TASK_SMART_FLEE_PED(Local_2981[iVar13 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_2981[iVar13 /*5*/], 1);
						}
						func_57(&(Local_2981[iVar13 /*5*/]), 0);
						bVar1 = true;
					}
				}
				else if (iVar13 == 0)
				{
					if (iLocal_3164 == 4)
					{
						STREAMING::REMOVE_ANIM_DICT(sLocal_2790);
					}
				}
			}
			iVar13++;
		}
		if (iVar16 && !iLocal_2546[0])
		{
			if (!GlobalFunc_5172(&Local_3094, 1))
			{
				if (!PED::IS_PED_INJURED(Local_3168[2 /*10*/]) && !PED::IS_PED_INJURED(Local_3168[3 /*10*/]))
				{
					if (GlobalFunc_10630(&Local_3168, "ARM1AUD", "ARM1_EXTRAS2", "ARM1_EXTRAS2_1", 7, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2.5f, 4.5f, 3);
						iLocal_2546[0] = 1;
					}
				}
			}
		}
		bVar14 = false;
		bVar15 = false;
		iVar13 = 0;
		while (iVar13 < Local_3002)
		{
			if (Local_3002[iVar13 /*5*/].f_2 == 0)
			{
				if (fLocal_2627 < 55000f)
				{
					STREAMING::REQUEST_MODEL(iVar56);
					STREAMING::REQUEST_ANIM_DICT(sLocal_2790);
					if ((STREAMING::HAS_MODEL_LOADED(iVar56) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2790)) && !bVar0)
					{
						if (iVar13 == 0)
						{
							StringCopy(&cVar24, "smallgroup_loop_f_a", 64);
						}
						else if (iVar13 == 1)
						{
							StringCopy(&cVar24, "smallgroup_loop_m_b", 64);
						}
						Var18 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_2790, &cVar24, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0, 2) };
						Var21 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_2790, &cVar24, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0, 2) };
						Local_3002[iVar13 /*5*/] = PED::CREATE_PED(26, iVar56, Var18, Var21.f_2, 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3002[iVar13 /*5*/], Var18, 0, 0, 1);
						TASK::TASK_PLAY_ANIM(Local_3002[iVar13 /*5*/], sLocal_2790, &cVar24, 1000f, -8f, -1, 9, 0, 0, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3002[iVar13 /*5*/], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3002[iVar13 /*5*/], 1);
						if (iVar13 == 1)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar56);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_3002[iVar13 /*5*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_3002[iVar13 /*5*/], 3, 0, 0, 0);
						if ((iVar13 % 2) == 0)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_3002[iVar13 /*5*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_3002[iVar13 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_3002[iVar13 /*5*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_3002[iVar13 /*5*/], 5, 0, 0, 0);
						}
						Local_3002[iVar13 /*5*/].f_2 = 1;
						Local_3002[iVar13 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_3002[iVar13 /*5*/]))
				{
					if (iVar13 == 0)
					{
						StringCopy(&cVar40, "smallgroup_flee_f_a", 64);
					}
					else if (iVar13 == 1)
					{
						StringCopy(&cVar40, "smallgroup_flee_m_b", 64);
					}
					if (Local_3002[iVar13 /*5*/].f_2 == 1)
					{
						if (!bVar14 && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
						{
							fVar59 = (SYSTEM::VDIST(Var2, ENTITY::GET_ENTITY_COORDS(Local_3002[iVar13 /*5*/], 1)) / ENTITY::GET_ENTITY_SPEED(Local_3077[iLocal_2643 /*7*/]));
							bVar15 = fVar59 < 1.8f;
							bVar14 = true;
						}
						if (bVar15)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_3002[iVar13 /*5*/], 0);
							TASK::TASK_PLAY_ANIM(Local_3002[iVar13 /*5*/], sLocal_2790, &cVar40, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							Local_3002[iVar13 /*5*/].f_2++;
						}
					}
					else if (Local_3002[iVar13 /*5*/].f_2 == 2)
					{
						if (PED::IS_PED_RAGDOLL(Local_3002[iVar13 /*5*/]))
						{
							Local_3002[iVar13 /*5*/].f_2 = 100;
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3002[iVar13 /*5*/], sLocal_2790, &cVar40, 3))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3002[iVar13 /*5*/], 1), Var2) < 100f)
							{
								Local_2981[iVar13 /*5*/].f_2 = 100;
							}
						}
						else
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(Local_3002[iVar13 /*5*/], sLocal_2790, &cVar40, 0.95f);
						}
					}
					else if (Local_2981[iVar13 /*5*/].f_2 == 100)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_3002[iVar13 /*5*/], 1805844857) != 1)
						{
							TASK::TASK_SMART_FLEE_PED(Local_3002[iVar13 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_3002[iVar13 /*5*/], 1);
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_3002[iVar13 /*5*/]) && (fLocal_2627 > 64000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && !bVar1)
				{
					if (!PED::IS_PED_INJURED(Local_3002[iVar13 /*5*/]))
					{
						TASK::TASK_SMART_FLEE_PED(Local_3002[iVar13 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(Local_3002[iVar13 /*5*/], 1);
					}
					func_57(&(Local_3002[iVar13 /*5*/]), 0);
					bVar1 = true;
				}
			}
			iVar13++;
		}
	}
	STATS::STAT_GET_INT(joaat("sp0_kills"), &iVar60, -1);
	STATS::STAT_GET_INT(joaat("sp1_kills"), &iVar61, -1);
	STATS::STAT_GET_INT(joaat("sp2_kills"), &iVar62, -1);
	iVar63 = ((iVar60 + iVar61) + iVar62);
	if (!iLocal_2517 && Local_2981[0 /*5*/].f_2 > 0)
	{
		if (iVar63 > iLocal_2693)
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar64, -1);
			iVar13 = 0;
			while (iVar13 < iVar64)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar64[iVar13]))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar64[iVar13]) == iVar56)
					{
						if (PED::IS_PED_INJURED(iVar64[iVar13]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar64[iVar13], 0), ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], 0)) < 100f)
							{
								GlobalFunc_553(6);
								iLocal_2517 = 1;
							}
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar64[iVar13], PLAYER::PLAYER_PED_ID(), 1))
						{
							GlobalFunc_553(6);
							iLocal_2517 = 1;
						}
					}
				}
				iVar13++;
			}
		}
		iVar69 = 0;
		while (iVar69 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar71 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar69);
			if (iVar71 == 139)
			{
				SCRIPT::GET_EVENT_DATA(0, iVar69, &iVar70, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar70))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar70) == iVar56)
					{
						GlobalFunc_553(6);
						iLocal_2517 = 1;
					}
				}
			}
			iVar69++;
		}
	}
	iLocal_2693 = iVar63;
	if (fLocal_2627 < 20000f)
	{
		Local_3066[0 /*5*/].f_2 = 0;
		Local_3066[1 /*5*/].f_2 = 0;
	}
	else if (fLocal_2627 > 43000f)
	{
		iVar13 = 0;
		while (iVar13 < Local_3066)
		{
			switch (Local_3066[iVar13 /*5*/].f_2)
			{
				case 0:
					if (iVar13 == 0)
					{
						Var72 = { -1048.134f, -476.2388f, 35.805f };
						fVar75 = 316.5925f;
					}
					else
					{
						Var72 = { -1210.121f, -570.0335f, 26.3435f };
						fVar75 = 295.8782f;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var72) < 40000f)
					{
						STREAMING::REQUEST_MODEL(iLocal_2949);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_2949) && !bVar0)
						{
							Local_3066[iVar13 /*5*/] = PED::CREATE_PED(26, iLocal_2949, Var72, fVar75, 1, 1);
							TASK::TASK_LOOK_AT_ENTITY(Local_3066[iVar13 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3066[iVar13 /*5*/], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2949);
							Local_3066[iVar13 /*5*/].f_2++;
							bVar0 = true;
						}
					}
					break;
				
				case 1:
					bVar76 = false;
					if (!PED::IS_PED_INJURED(Local_3066[iVar13 /*5*/]))
					{
						if (iVar13 == 0)
						{
							if (!PED::IS_PED_INJURED(Local_2966))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3066[iVar13 /*5*/], 1)) < 900f || (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1)) < 900f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3066[iVar13 /*5*/], 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1)) < 100f))
								{
									bVar76 = true;
								}
							}
						}
						else
						{
							bVar76 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3066[iVar13 /*5*/], 1)) < 6400f;
						}
						if (bVar76)
						{
							GlobalFunc_5130(Local_3066[iVar13 /*5*/], "FIGHT", 6);
							Local_3066[iVar13 /*5*/].f_2++;
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_INJURED(Local_3066[iVar13 /*5*/]))
					{
						if ((!PED::IS_PED_IN_COMBAT(Local_3066[iVar13 /*5*/], 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_3066[iVar13 /*5*/], 780511057) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_3066[iVar13 /*5*/], 242628503) != 1)
						{
							TASK::TASK_COMBAT_PED(Local_3066[iVar13 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(Local_3066[iVar13 /*5*/], 1);
						}
					}
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3066[iVar13 /*5*/]))
			{
				if (PED::IS_PED_INJURED(Local_3066[iVar13 /*5*/]))
				{
					func_57(&(Local_3066[iVar13 /*5*/]), 0);
				}
				else if (fLocal_2627 > 66000f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3066[iVar13 /*5*/], 1)) > 10000f)
					{
						func_57(&(Local_3066[iVar13 /*5*/]), 0);
					}
				}
			}
			iVar13++;
		}
	}
	if (fLocal_2627 < 60000f)
	{
		iVar13 = 0;
		while (iVar13 < Local_3018)
		{
			Local_3018[iVar13 /*7*/].f_1 = 0;
			iVar13++;
		}
	}
	else
	{
		iVar77 = joaat("a_c_seagull");
		sVar78 = "creatures@gull@move";
		iVar13 = 0;
		while (iVar13 < Local_3018)
		{
			if (Local_3018[iVar13 /*7*/].f_1 == 0)
			{
				if (fLocal_2627 < 72000f)
				{
					STREAMING::REQUEST_MODEL(iVar77);
					STREAMING::REQUEST_ANIM_DICT(sVar78);
					if ((STREAMING::HAS_MODEL_LOADED(iVar77) && STREAMING::HAS_ANIM_DICT_LOADED(sVar78)) && !bVar0)
					{
						if (iVar13 == 0)
						{
							Local_3018[iVar13 /*7*/] = PED::CREATE_PED(26, iVar77, Vector(19.3756f, -730.0198f, -1161.135f) + Vector(-0.15f, 0f, 0f), 278.8218f, 1, 1);
						}
						else if (iVar13 == 1)
						{
							Local_3018[iVar13 /*7*/] = PED::CREATE_PED(26, iVar77, Vector(19.4617f, -728.611f, -1160.762f) + Vector(-0.15f, 0f, 0f), 322.6699f, 1, 1);
						}
						else if (iVar13 == 2)
						{
							Local_3018[iVar13 /*7*/] = PED::CREATE_PED(26, iVar77, Vector(19.5456f, -727.3837f, -1162.735f) + Vector(-0.15f, 0f, 0f), 32.0168f, 1, 1);
						}
						else if (iVar13 == 3)
						{
							Local_3018[iVar13 /*7*/] = PED::CREATE_PED(26, iVar77, Vector(19.3279f, -730.7355f, -1160.644f) + Vector(-0.15f, 0f, 0f), 152.0615f, 1, 1);
						}
						else if (iVar13 == 4)
						{
							Local_3018[iVar13 /*7*/] = PED::CREATE_PED(26, iVar77, Vector(19.4121f, -730.381f, -1155.033f) + Vector(-0.15f, 0f, 0f), 352.3865f, 1, 1);
						}
						else if (iVar13 == 5)
						{
							Local_3018[iVar13 /*7*/] = PED::CREATE_PED(26, iVar77, Vector(19.7718f, -723.8991f, -1152.808f) + Vector(-0.15f, 0f, 0f), 25.9012f, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar77);
						}
						TASK::TASK_PLAY_ANIM(Local_3018[iVar13 /*7*/], sVar78, "idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3018[iVar13 /*7*/], 1);
						PED::SET_PED_CAN_RAGDOLL(Local_3018[iVar13 /*7*/], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3018[iVar13 /*7*/], 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_3018[iVar13 /*7*/], 1);
						ENTITY::SET_ENTITY_COLLISION(Local_3018[iVar13 /*7*/], 0, 0);
						Local_3018[iVar13 /*7*/].f_1 = 1;
						Local_3018[iVar13 /*7*/].f_6 = 0f;
						bVar0 = true;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_3018[iVar13 /*7*/]))
			{
				if (!PED::IS_PED_INJURED(Local_3018[iVar13 /*7*/]))
				{
					switch (Local_3018[iVar13 /*7*/].f_1)
					{
						case 1:
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_1_BIRDS", 0))
							{
								Var79 = { ENTITY::GET_ENTITY_COORDS(Local_3018[iVar13 /*7*/], 1) };
								if (SYSTEM::VDIST2(Var2, Var79) < 900f || (SYSTEM::VDIST2(Var5, Var79) < 900f && fLocal_2628 > 0.7f))
								{
									if (iVar13 == 0)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Birds", Local_3018[iVar13 /*7*/], "ARM_1_SOUNDSET", 0, 0);
										if (SYSTEM::VDIST2(Var2, Var79) < 2500f)
										{
											RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
										}
									}
									Local_3018[iVar13 /*7*/].f_2 = MISC::GET_GAME_TIMER();
									Local_3018[iVar13 /*7*/].f_1++;
								}
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - Local_3018[iVar13 /*7*/].f_2) > 500)
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_3018[iVar13 /*7*/], 0);
								ENTITY::SET_ENTITY_COLLISION(Local_3018[iVar13 /*7*/], 1, 0);
								Local_3018[iVar13 /*7*/].f_3 = { GlobalFunc_590(ENTITY::GET_ENTITY_ROTATION(Local_3018[iVar13 /*7*/], 2) + Vector(0f, 0f, 45f)) };
								Local_3018[iVar13 /*7*/].f_6 = (Local_3018[iVar13 /*7*/].f_6 + ((14f - Local_3018[iVar13 /*7*/].f_6) * 0.5f));
								ENTITY::SET_ENTITY_VELOCITY(Local_3018[iVar13 /*7*/], Local_3018[iVar13 /*7*/].f_3 * Vector(Local_3018[iVar13 /*7*/].f_6, Local_3018[iVar13 /*7*/].f_6, Local_3018[iVar13 /*7*/].f_6));
								TASK::TASK_PLAY_ANIM(Local_3018[iVar13 /*7*/], sVar78, "flapping", 4f, -8f, -1, 9, 0, 0, 0, 0);
								Local_3018[iVar13 /*7*/].f_1++;
							}
							break;
						
						case 3:
							Local_3018[iVar13 /*7*/].f_6 = (Local_3018[iVar13 /*7*/].f_6 + ((14f - Local_3018[iVar13 /*7*/].f_6) * 0.5f));
							ENTITY::SET_ENTITY_VELOCITY(Local_3018[iVar13 /*7*/], Local_3018[iVar13 /*7*/].f_3 * Vector(Local_3018[iVar13 /*7*/].f_6, Local_3018[iVar13 /*7*/].f_6, Local_3018[iVar13 /*7*/].f_6));
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3018[iVar13 /*7*/], sVar78, "flapping", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_3018[iVar13 /*7*/], sVar78, "flapping", 4f);
								Local_3018[iVar13 /*7*/].f_1++;
							}
							break;
						
						case 4:
							Local_3018[iVar13 /*7*/].f_6 = (Local_3018[iVar13 /*7*/].f_6 + ((14f - Local_3018[iVar13 /*7*/].f_6) * 0.5f));
							ENTITY::SET_ENTITY_VELOCITY(Local_3018[iVar13 /*7*/], Local_3018[iVar13 /*7*/].f_3 * Vector(Local_3018[iVar13 /*7*/].f_6, Local_3018[iVar13 /*7*/].f_6, Local_3018[iVar13 /*7*/].f_6));
							break;
						}
				}
				if ((fLocal_2627 > 82000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !bVar1)
				{
					func_57(&(Local_3018[iVar13 /*7*/]), 0);
					bVar1 = true;
				}
			}
			else if (iVar13 == 0)
			{
				STREAMING::REMOVE_ANIM_DICT(sVar78);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ARM_1_BIRDS");
			}
			iVar13++;
		}
	}
	if (fLocal_2627 < 20000f)
	{
		Local_3061.f_2 = 0;
	}
	else if (fLocal_2627 > 120000f)
	{
		switch (Local_3061.f_2)
		{
			case 0:
				STREAMING::REQUEST_MODEL(iLocal_2948);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_2948) && !bVar0)
				{
					Local_3061.x = PED::CREATE_PED(26, iLocal_2948, -73.6282f, -676.848f, 32.9306f, 69.2552f, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3061.x, 1);
					TASK::TASK_STAND_STILL(Local_3061.x, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3061.x, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2948);
					Local_3061.f_2++;
					bVar0 = true;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(Local_3061.x))
				{
					if (ENTITY::IS_ENTITY_STATIC(Local_3061.x))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3061.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 2500f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_3061.x, 0);
						}
					}
					else if ((fLocal_2627 < 144600f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3061.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 25f) || fLocal_2627 > 145600f)
					{
						Local_3061.f_2++;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(Local_3061.x))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_3061.x, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_3061.x, 780511057) != 1)
					{
						GlobalFunc_5130(Local_3061.x, "FIGHT", 24);
						TASK::TASK_COMBAT_PED(Local_3061.x, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				break;
		}
		if (Local_3061.f_2 > 0)
		{
			if (PED::IS_PED_INJURED(Local_3061.x))
			{
				func_57(&Local_3061, 0);
			}
		}
	}
	if (iLocal_2215[14] == joaat("stockade"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2407[14]))
		{
			if (!ENTITY::IS_ENTITY_STATIC(iLocal_2407[14]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2407[14], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2407[14], 0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2901))
	{
		if (SYSTEM::VDIST2(Var2, -7.1741f, -658.6362f, 33.8238f) < 10000f)
		{
			func_420(-7.1741f, -658.6362f, 33.8238f, 0f, 0f, 4.5837f, 0);
		}
	}
}

int func_420(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x37238
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2901))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_vault_shutter"));
		if (!bParam6)
		{
			if (iLocal_2934 == 0)
			{
				iLocal_2934 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-7.9f, -662.2f, 34.7f, "dt1_03_carpark");
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2934);
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_vault_shutter")))
		{
			if (!bParam6)
			{
				if (iLocal_2934 != 0)
				{
					if (INTERIOR::IS_INTERIOR_READY(iLocal_2934))
					{
						iLocal_2901 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_vault_shutter"), Param0, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_2901, Param3, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2901, 1);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_2901, iLocal_2934, -565398557);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_vault_shutter"));
						return 1;
					}
				}
			}
			else
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


void func_422(float fParam0, int iParam1, int iParam2)//Position - 0x37319
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	bool bVar20;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
		fVar6 = SYSTEM::VDIST(Var0, Var3);
		fVar7 = 4.5f;
		fVar8 = 7f;
		fVar9 = 40f;
		fVar10 = 100f;
		fVar11 = 30f;
		fVar12 = 1f;
		fVar13 = 0f;
		fVar14 = 0f;
		fVar15 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(iParam1));
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
		{
			fVar13 = 0.025f;
			fVar14 = -35f;
		}
		else
		{
			fVar13 = 0.01f;
			fVar14 = -15f;
		}
		if (fLocal_2627 < 7500f)
		{
			fVar8 = 10f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 8000f && fLocal_2627 < 12000f)
		{
			fVar8 = 30f;
			fVar9 = 55f;
		}
		if (fLocal_2627 > 26000f && fLocal_2627 < 30000f)
		{
			fVar8 = 13f;
			fVar9 = 45f;
		}
		if (fLocal_2627 > 40000f && fLocal_2627 < 45500f)
		{
			fVar8 = 15f;
			fVar9 = 45f;
		}
		if (fLocal_2627 > 46000f && fLocal_2627 < 51000f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 22f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 60000f && fLocal_2627 < 64000f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 22f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 65000f && fLocal_2627 < 70000f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 15f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 77500f && fLocal_2627 < 81500f)
		{
			fVar8 = 18f;
			fVar9 = 45f;
		}
		if (fLocal_2627 > 83500f && fLocal_2627 < 87500f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 20f;
			fVar9 = 45f;
		}
		if (fLocal_2627 > 87500f && fLocal_2627 < 98500f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 25f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 108000f && fLocal_2627 < 113500f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 22f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 119000f && fLocal_2627 < 121500f)
		{
			fVar8 = 25f;
			fVar9 = 50f;
		}
		if (fLocal_2627 > 122000f && fLocal_2627 < 125000f)
		{
			fVar8 = 15f;
			fVar9 = 45f;
		}
		if (fLocal_2627 > 126000f && fLocal_2627 < 131500f)
		{
			fVar8 = 11f;
			fVar9 = 30f;
			fVar10 = 60f;
		}
		if (fLocal_2627 > 131500f && fLocal_2627 < 137700f)
		{
			fVar13 = (fVar13 * 0.7f);
			fVar8 = 12f;
			fVar9 = 45f;
		}
		if (fLocal_2627 > 140900f && fLocal_2627 < 144600f)
		{
			fVar8 = 15f;
			fVar9 = 30f;
		}
		if (fLocal_2627 > 145600f && fLocal_2627 < 149400f)
		{
			fVar8 = 8f;
			fVar9 = 20f;
			fVar10 = 80f;
		}
		fVar16 = 0f;
		Var17 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
		if (Var17.f_1 < 1f)
		{
			if (fVar6 > fVar9)
			{
				bVar20 = false;
				if (fVar6 > fVar10)
				{
					if (fVar6 > 200f)
					{
						bVar20 = true;
					}
					fVar6 = fVar10;
				}
				fVar16 = ((fVar6 - fVar9) / (fVar10 - fVar9));
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam2) && !bVar20)
				{
					if (fVar15 > 10f)
					{
						fVar12 = (0.7f - (0.2f * fVar16));
					}
					else
					{
						fVar12 = (0.7f - (0.1f * fVar16));
					}
				}
				else
				{
					fVar12 = (0.7f - (0.5f * fVar16));
				}
				fVar14 = (fVar14 * 0.5f);
			}
			else if (fVar6 > fVar8)
			{
				fVar16 = ((fVar6 - fVar8) / (fVar9 - fVar8));
				fVar12 = (1f - (0.3f * fVar16));
			}
			else
			{
				if (fVar6 < fVar7)
				{
					fVar6 = fVar7;
				}
				fVar16 = ((fVar8 - fVar6) / (fVar8 - fVar7));
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
				{
					fVar12 = (1f + (fVar16 * 2f));
				}
				else
				{
					fVar12 = (1f + fVar16);
				}
			}
		}
		else
		{
			if (fVar6 > fVar11)
			{
				fVar6 = fVar11;
			}
			fVar16 = (fVar6 / fVar11);
			if (fVar15 > 0f)
			{
				fVar16 = (fVar16 * 0.5f);
			}
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				fVar12 = (2f + fVar16);
			}
			else if (ENTITY::GET_ENTITY_SPEED(iParam1) < 5f && fVar15 > 0f)
			{
				fVar12 = (0.6f + fVar16);
			}
			else
			{
				fVar12 = (1f + fVar16);
			}
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			fVar12 = 1f;
		}
		if (fLocal_2627 < 19000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2013.521f, -410.929f, 10.10326f, -2005.117f, -399.6596f, 15.68106f, 14f, 0, 1, 0))
			{
				if (fVar12 < 1f)
				{
					fVar12 = 1f;
				}
			}
		}
		if (fLocal_2627 > 65000f && fLocal_2627 < 78000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1327.701f, -648.2095f, 35.88271f, -1196.131f, -817.1476f, 13.71532f, 33.75f, 0, 1, 0))
			{
				if (fLocal_2627 < 75000f)
				{
					fVar12 = 1.5f;
				}
				else
				{
					fVar12 = 1.2f;
				}
			}
		}
		if (fLocal_2627 > 86500f && fLocal_2627 < 96500f)
		{
			if (fVar12 < 0.7f)
			{
				fVar12 = 0.7f;
			}
		}
		if (fLocal_2627 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783) - 4000f))
		{
			if (fVar12 < 1f)
			{
				fVar12 = 1f;
			}
		}
		else if (fLocal_2627 > 137400f)
		{
			if (fVar12 > 1f)
			{
				fVar12 = 1f;
			}
		}
		if (*fParam0 < 1f && fVar12 > *fParam0)
		{
			fVar13 = (fVar13 * 2f);
		}
		if (fVar12 > 1f)
		{
			fVar14 = (fVar14 - ((fVar12 - 1f) * 10f));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3077[iLocal_2643 /*7*/], fVar14);
		*fParam0 = (*fParam0 + ((((fVar12 - *fParam0) * fVar13) * 30f) * SYSTEM::TIMESTEP()));
	}
}

void func_423(float fParam0, int iParam1, int iParam2)//Position - 0x3798E
{
	float fVar0;
	float fVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		fVar0 = 1f;
		fVar1 = 0.01f;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
		{
			fVar1 = 0.025f;
		}
		if (fLocal_2627 < 7500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 8000f && fLocal_2627 < 12000f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 26000f && fLocal_2627 < 30000f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 20f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 40000f && fLocal_2627 < 45500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 46000f && fLocal_2627 < 51000f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 45f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 60000f && fLocal_2627 < 64000f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 50f, 60f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 77500f && fLocal_2627 < 81500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 25f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 83500f && fLocal_2627 < 87500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 30f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 87500f && fLocal_2627 < 98500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 40f, 60f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
			fVar1 = (fVar1 * 0.7f);
		}
		else if (fLocal_2627 > 108000f && fLocal_2627 < 113500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 35f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 119000f && fLocal_2627 < 121500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 35f, 55f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 122000f && fLocal_2627 < 125000f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 20f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 126000f && fLocal_2627 < 131500f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 15f, 30f, 60f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 131500f && fLocal_2627 < 137700f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 15f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 140900f && fLocal_2627 < 144600f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 15f, 30f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else if (fLocal_2627 > 145600f && fLocal_2627 < 149400f)
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 8f, 20f, 80f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		else
		{
			GlobalFunc_2219(&fVar0, &iParam1, iParam2, 4.5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 15f, 25f, 1);
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1))
		{
			fVar0 = 1f;
		}
		if (fLocal_2627 < 19000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2013.521f, -410.929f, 10.10326f, -2005.117f, -399.6596f, 15.68106f, 14f, 0, 1, 0))
			{
				if (fVar0 < 1f)
				{
					fVar0 = 1f;
				}
			}
		}
		if (fLocal_2627 > 65000f && fLocal_2627 < 78000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1327.701f, -648.2095f, 35.88271f, -1196.131f, -817.1476f, 13.71532f, 33.75f, 0, 1, 0))
			{
				if (fLocal_2627 < 75000f)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 1.2f;
				}
			}
		}
		if (fLocal_2627 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_2648, sLocal_2783) - 4000f))
		{
			if (fVar0 < 1f)
			{
				fVar0 = 1f;
			}
		}
		else if (fLocal_2627 > 137600f)
		{
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
		GlobalFunc_2218(fParam0, fVar0, fVar1);
	}
}







void func_430(int iParam0, float fParam1)//Position - 0x383A5
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_120 = false;
	if (!bLocal_102)
	{
		if (bLocal_101)
		{
			func_455();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_102 = true;
		}
	}
	else if (!bLocal_101)
	{
		GlobalFunc_2214();
		bLocal_102 = false;
	}
	if (bLocal_101)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_95)
	{
		if (iLocal_90)
		{
			fLocal_1020 = 0f;
		}
		else
		{
			fLocal_1020 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						bLocal_100 = true;
					}
					else
					{
						bLocal_100 = false;
					}
				}
				fLocal_1017 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1018) * fLocal_1020));
				if (bLocal_99)
				{
					func_453(iParam0, fLocal_1017);
					func_452(iParam0, fLocal_1027);
					if (fLocal_1022 > 1000f)
					{
						if (iLocal_1539 == 0)
						{
							func_451(iParam0, fLocal_1027);
						}
						fVar0 = ((fLocal_1017 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1539) * 2000f));
						func_450(iParam0, fVar0, fLocal_1021);
						iLocal_1539++;
						if (iLocal_1539 > 2)
						{
							fLocal_1022 = 0f;
						}
					}
					else
					{
						iLocal_1539 = 0;
						fLocal_1022 = (fLocal_1022 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1017 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_107)
		{
			if (!iLocal_89)
			{
				func_447(iParam0, ((fParam1 * fLocal_1018) * fLocal_1020), 0);
				if (!iLocal_110)
				{
				}
				iLocal_110 = 0;
			}
			if (bLocal_92)
			{
				func_446(iParam0);
			}
			if (!iLocal_89)
			{
				func_433(iParam0, ((fParam1 * fLocal_1018) * fLocal_1020), 0);
			}
		}
		if (iLocal_97)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_2473 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2053 = { ENTITY::GET_ENTITY_COORDS(iLocal_2473, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_2473, &uLocal_713, &uLocal_714, &uLocal_715, &uLocal_716);
				}
			}
			iLocal_97 = 0;
		}
		if (iLocal_96)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2473))
			{
				GlobalFunc_2210(iLocal_2474);
				iLocal_2474 = iLocal_2473;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2474, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2474, Local_2053, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_2474, uLocal_713, uLocal_714, uLocal_715, uLocal_716);
			}
			fLocal_1016 = fLocal_1019;
			iLocal_89 = 1;
			iLocal_96 = 0;
		}
		if (iLocal_89)
		{
			while (!func_431(&iParam0, fLocal_1016))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_90 = 1;
		}
		if (iLocal_103)
		{
			iLocal_103 = 0;
		}
	}
}

int func_431(int iParam0, float fParam1)//Position - 0x38640
{
	if (!iLocal_104)
	{
		iLocal_89 = 1;
		func_366();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1526 == -1)
			{
				while (!func_432(iParam0, iLocal_1526, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_94)
				{
					iLocal_90 = 1;
					fLocal_1020 = 0f;
					iLocal_1527 = 0;
					iLocal_1529 = 0;
					iLocal_1528 = 0;
					iLocal_1523 = 0;
					iLocal_1524 = 0;
					iLocal_1525 = 0;
					iLocal_1530 = 0;
					iLocal_1531 = 0;
					iLocal_1532 = 0;
				}
			}
		}
		iLocal_104 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1018) * fLocal_1020));
				func_432(iParam0, iLocal_1526, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1017 = fParam1;
		iLocal_1533 = 0;
		iLocal_1536 = 0;
		fLocal_1032 = 0f;
		fLocal_1031 = 0f;
		func_433(*iParam0, ((1f * fLocal_1018) * fLocal_1020), 1);
		func_447(*iParam0, ((1f * fLocal_1018) * fLocal_1020), 1);
		func_446(*iParam0);
		if ((iLocal_1530 == 0 && iLocal_1531 == 0) && iLocal_1532 == 0)
		{
			iLocal_90 = 0;
			iLocal_89 = 0;
			iLocal_104 = 0;
			return 1;
		}
	}
	return 0;
}

int func_432(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x38772
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2080);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2080))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2080, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1534 && iParam1 != iLocal_1535)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2080, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2080, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2080, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2080, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2080))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2080);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2080, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1534 && iParam1 != iLocal_1535)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2080, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2080, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2080, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2080, 1);
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

void func_433(int iParam0, float fParam1, bool bParam2)//Position - 0x38958
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
		iVar0 = iLocal_1529;
		while (iVar0 < 38)
		{
			if (iLocal_1429[iVar0] != 99)
			{
				if (iLocal_1429[iVar0] == 0)
				{
					if (iLocal_1390[iVar0] > 0)
					{
						if (!iLocal_89)
						{
							if (fLocal_1017 > (fLocal_873[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2231[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1468[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2231[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1468[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1468[iVar0]), 1);
								iLocal_1429[iVar0]++;
								iLocal_1531++;
							}
						}
						else
						{
							fVar12 = (fLocal_1017 - fLocal_873[iVar0]);
							fVar12 = (fVar12 * fLocal_912[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_444(iLocal_1390[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2231[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1468[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2231[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1468[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1468[iVar0]), 1);
									iLocal_1429[iVar0]++;
									iLocal_1531++;
								}
								else
								{
									iLocal_1429[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1429[iVar0] = 99;
					}
				}
				else if (iLocal_1429[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080);
					if (MISC::IS_BIT_SET(iLocal_1468[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_116 && ((!MISC::IS_BIT_SET(iLocal_1468[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1468[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_378());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_378());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2423[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2231[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2231[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1390[iVar0], &cLocal_2080))
							{
								if (fLocal_1017 >= (fLocal_873[iVar0] - (fLocal_1030 * fParam1)))
								{
									if ((iLocal_103 || bParam2) || (!bLocal_120 && !func_443(Local_1938[iVar0 /*3*/], Var9, 5f, fLocal_1028)))
									{
										if (bLocal_99)
										{
											func_442(Local_1938[iVar0 /*3*/], Var9, fLocal_1021);
										}
										iLocal_2423[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2231[iVar0], Local_1938[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2231[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2423[iVar0], 0);
										}
										if (uLocal_112 && !MISC::IS_BIT_SET(iLocal_1468[iVar0], 0))
										{
											func_441(iLocal_2423[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1468[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2423[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2423[iVar0], Local_1938[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2423[iVar0], fLocal_717[iVar0], fLocal_756[iVar0], fLocal_795[iVar0], fLocal_834[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2231[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2231[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2423[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2423[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2423[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2423[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2231[iVar0]);
										iLocal_1531 = (iLocal_1531 - 1);
										iLocal_1429[iVar0]++;
										bLocal_120 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2423[iVar0], Local_1938[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2423[iVar0], fLocal_717[iVar0], fLocal_756[iVar0], fLocal_795[iVar0], fLocal_834[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2231[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2231[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2423[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2423[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2231[iVar0]);
							iLocal_1531 = (iLocal_1531 - 1);
							iLocal_1429[iVar0]++;
						}
					}
				}
				else if (iLocal_1429[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080);
					if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1468[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_116 && ((!MISC::IS_BIT_SET(iLocal_1468[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1468[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_378());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_378());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[iVar0]))
						{
							if (!bLocal_120 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2423[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2423[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_103)
									{
										func_439(&(iLocal_2423[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1468[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
					{
						if (fLocal_1017 >= fLocal_873[iVar0])
						{
							if (12 > iLocal_1524)
							{
								fVar12 = (fLocal_1017 - fLocal_873[iVar0]);
								fVar12 = (fVar12 * fLocal_912[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1390[iVar0], &cLocal_2080))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2423[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1390[iVar0], fVar12, &cLocal_2080) };
										if (((!func_443(Var3, Var9, 5f, fLocal_1028) && func_443(Var6, Var9, 5f, fLocal_1028)) && !iLocal_103) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 1))
											{
												func_439(&(iLocal_2423[iVar0]), iVar19, 1);
											}
											iLocal_1524++;
											iLocal_1429[iVar0]++;
										}
										else if (((!bLocal_120 || MISC::IS_BIT_SET(iLocal_1468[iVar0], 1)) || iLocal_103) || bParam2)
										{
											if (func_432(&(iLocal_2423[iVar0]), iLocal_1390[iVar0], fVar12, 1, 0, 0, bLocal_118, bLocal_117))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2423[iVar0], (fParam1 * fLocal_912[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1468[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2423[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2423[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2423[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2231[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2423[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 1))
												{
													func_439(&(iLocal_2423[iVar0]), iVar19, 1);
												}
												iLocal_1524++;
												iLocal_1429[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 1))
										{
											func_439(&(iLocal_2423[iVar0]), iVar19, 1);
										}
										iLocal_1524++;
										iLocal_1429[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 1))
								{
									func_439(&(iLocal_2423[iVar0]), iVar19, 1);
								}
								iLocal_1524++;
								iLocal_1429[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1468[iVar0], 1))
						{
							func_439(&(iLocal_2423[iVar0]), iVar19, 1);
						}
						iLocal_1524++;
						iLocal_1429[iVar0]++;
					}
				}
				else if (iLocal_1429[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_93 && !iLocal_90) && !bLocal_109) && (((!bLocal_118 && !bLocal_117) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2423[iVar0])) || func_438(iLocal_2423[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (iLocal_111)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2423[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2423[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2423[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_434(iLocal_2423[iVar0]);
												iLocal_1429[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2423[iVar0], (fParam1 * fLocal_912[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[iVar0]);
							}
						}
						else
						{
							iLocal_1429[iVar0]++;
						}
					}
					else
					{
						iLocal_1429[iVar0]++;
					}
				}
				else if (iLocal_1429[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[iVar0]))
						{
							iLocal_1429[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2423[iVar0], (fParam1 * fLocal_912[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1390[iVar0], &cLocal_2080))
							{
								if (fLocal_1017 > (fLocal_873[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2423[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1429[iVar0]++;
					}
				}
				else if (iLocal_1429[iVar0] == 5)
				{
					if (!iLocal_2423[iVar0] == iLocal_2475)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2423[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2423[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2423[iVar0]);
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
						if (!bLocal_101 && !bLocal_114)
						{
							if (iLocal_1390[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1390[iVar0], &cLocal_2080);
							}
						}
						if (!bLocal_91)
						{
							if (!bLocal_119)
							{
								GlobalFunc_2210(iLocal_2423[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2423[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2423[iVar0]));
						}
					}
					iLocal_1524 = (iLocal_1524 - 1);
					iLocal_1429[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1529 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_370();
	}
}

void func_434(int iParam0)//Position - 0x39556
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_372(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_438(var uParam0)//Position - 0x396B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_115)
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

int func_439(var uParam0, int iParam1, bool bParam2)//Position - 0x39716
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2096);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_378(), -1, 0, 0);
				if (bLocal_121)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_378());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_122)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_120 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_441(int iParam0)//Position - 0x39822
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2271 >= -1 && iLocal_2272 >= -1)
	{
		while (iVar0 == iLocal_2271 || iVar0 == iLocal_2272)
		{
			iVar0++;
		}
	}
	else if (iLocal_2271 >= -1)
	{
		if (iVar0 == iLocal_2271)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
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

void func_442(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x3999B
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_102)
	{
		if (!func_443(Param0, Param3, fParam6, 200f))
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

int func_443(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x39A0B
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_102)
		{
			if (!iLocal_89)
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

float func_444(int iParam0)//Position - 0x39A52
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2080);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2080))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2080);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2080);
	return uVar0;
}


void func_446(int iParam0)//Position - 0x39B08
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
		iVar0 = iLocal_1528;
		while (iVar0 < 15)
		{
			switch (iLocal_1507[iVar0])
			{
				case 0:
					if (!iLocal_2215[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_1892[iVar0 /*3*/], fLocal_1015, fLocal_1015, fLocal_1015, 0, 1, 0))
						{
							iLocal_1530++;
							iLocal_1507[iVar0]++;
						}
					}
					else
					{
						iLocal_1507[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_1525)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2407[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2215[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2215[iVar0]))
							{
								if ((iLocal_89 || iLocal_103) || (!bLocal_120 && !func_443(Local_1892[iVar0 /*3*/], Var1, 5f, fLocal_1028)))
								{
									if (bLocal_99)
									{
										func_442(Local_1892[iVar0 /*3*/], Var1, fLocal_1021);
									}
									iLocal_2407[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2215[iVar0], Local_1892[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2215[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2407[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2407[iVar0], fLocal_951[iVar0], fLocal_967[iVar0], fLocal_983[iVar0], fLocal_999[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2215[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2407[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2407[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2215[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2407[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2407[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2407[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2407[iVar0], 1);
									iLocal_1530 = (iLocal_1530 - 1);
									iLocal_1525++;
									iLocal_1507[iVar0]++;
									bLocal_120 = true;
								}
							}
						}
						else
						{
							iLocal_1530 = (iLocal_1530 - 1);
							iLocal_1525++;
							iLocal_1507[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2407[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2407[iVar0], 1) };
						}
						if (fLocal_1029 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1029 * fLocal_1029))
						{
							if (!GlobalFunc_5654(iLocal_2407[iVar0], iParam0, 0))
							{
								if (!bLocal_91)
								{
									GlobalFunc_2210(iLocal_2407[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2407[iVar0]));
								}
								iLocal_1525 = (iLocal_1525 - 1);
								iLocal_1507[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1507[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1528 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_373();
	}
}

void func_447(int iParam0, float fParam1, int iParam2)//Position - 0x39DFF
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
			fLocal_1017 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1527;
		while (iVar0 < 117 && !bVar23)
		{
			if (iLocal_1154[iVar0] != 99)
			{
				if (iLocal_1154[iVar0] == 0)
				{
					if (iLocal_1036[iVar0] > 0 && iLocal_2097[iVar0] != 0)
					{
						if (!iLocal_89)
						{
							if (fLocal_1017 < (fLocal_595[iVar0] + 20000f))
							{
								if (fLocal_1017 >= (fLocal_595[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2097[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1272[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2097[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1272[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1272[iVar0]), 1);
									iLocal_1532++;
									iLocal_1154[iVar0]++;
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
								func_449(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1017 - fLocal_595[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_444(iLocal_1036[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2097[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1272[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2097[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1272[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1272[iVar0]), 1);
									iLocal_1532++;
									iLocal_1154[iVar0]++;
								}
								else
								{
									func_449(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_449(iVar0, 1090519040);
					}
				}
				else if (iLocal_1154[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1272[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_116 && ((!MISC::IS_BIT_SET(iLocal_1272[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1272[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_378());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_378());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2273[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2097[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2097[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1036[iVar0], &cLocal_2080)) && bVar17)
						{
							if (fLocal_1017 >= (fLocal_595[iVar0] - (fLocal_1030 * fParam1)))
							{
								if ((iLocal_103 || iParam2) || (!bLocal_120 && !func_443(Local_1540[iVar0 /*3*/], Var12, 5f, fLocal_1028)))
								{
									if (bLocal_99)
									{
										func_442(Local_1540[iVar0 /*3*/], Var12, fLocal_1021);
									}
									iLocal_2273[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2097[iVar0], Local_1540[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2097[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2273[iVar0], 0);
									}
									if (uLocal_112 && !MISC::IS_BIT_SET(iLocal_1272[iVar0], 0))
									{
										func_441(iLocal_2273[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2273[iVar0], Local_1540[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2273[iVar0], fLocal_123[iVar0], fLocal_241[iVar0], fLocal_359[iVar0], fLocal_477[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2097[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2097[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2273[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1272[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2273[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2273[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2273[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2273[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2273[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2097[iVar0]);
									iLocal_1532 = (iLocal_1532 - 1);
									iLocal_1154[iVar0]++;
									bLocal_120 = true;
								}
								else if (fLocal_1017 > fLocal_595[iVar0])
								{
									iLocal_1532 = (iLocal_1532 - 1);
									func_449(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1154[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1538 || iLocal_1538 == 0)) || iLocal_103) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1272[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_116 && ((!MISC::IS_BIT_SET(iLocal_1272[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1272[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_378());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_378());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2273[iVar0]))
							{
								if (!bLocal_120 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2273[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2273[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_103)
										{
											func_439(&(iLocal_2273[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1272[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2273[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080);
							if (fLocal_1017 >= fLocal_595[iVar0])
							{
								if (15 > iLocal_1523)
								{
									fVar15 = (fLocal_1017 - fLocal_595[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1036[iVar0], &cLocal_2080))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2273[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1036[iVar0], fVar15, &cLocal_2080) };
											if (!func_443(Var6, Var12, 5f, fLocal_1028) && func_443(Var9, Var12, 5f, fLocal_1028))
											{
												if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
												{
													func_439(&(iLocal_2273[iVar0]), iVar21, 0);
												}
												func_449(iVar0, 1090519040);
											}
											else if (((!bLocal_120 || MISC::IS_BIT_SET(iLocal_1272[iVar0], 1)) || iLocal_103) || iParam2)
											{
												if (func_432(&(iLocal_2273[iVar0]), iLocal_1036[iVar0], fVar15, 1, 0, 0, 1, bLocal_117))
												{
													if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
													{
														func_439(&(iLocal_2273[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2273[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2273[iVar0], fParam1);
													iLocal_1523++;
													iLocal_1154[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
											{
												func_439(&(iLocal_2273[iVar0]), iVar21, 0);
											}
											func_449(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080))
									{
										if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
										{
											func_439(&(iLocal_2273[iVar0]), iVar21, 0);
										}
										func_449(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
									{
										func_439(&(iLocal_2273[iVar0]), iVar21, 0);
									}
									func_449(iVar0, 1090519040);
								}
							}
							else if (bLocal_100 && !bLocal_108)
							{
								if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
								{
									func_439(&(iLocal_2273[iVar0]), iVar21, 0);
								}
								func_449(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1272[iVar0], 1))
							{
								func_439(&(iLocal_2273[iVar0]), iVar21, 0);
							}
							func_449(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1538 = iVar0;
					}
				}
				else if (iLocal_1154[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2273[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2273[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2273[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_98)
									{
										if ((!bLocal_93 && !iLocal_90) && func_438(iLocal_2273[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1537 || iLocal_1537 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2273[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2273[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1537 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_113 && !MISC::IS_BIT_SET(iLocal_1272[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1537 || iLocal_1537 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2273[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1537 = iVar0;
										}
									}
									if (bVar24)
									{
										func_434(iLocal_2273[iVar0]);
										iLocal_1154[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2273[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2273[iVar0]);
							}
						}
						else
						{
							iLocal_1154[iVar0]++;
						}
					}
					else
					{
						iLocal_1154[iVar0]++;
					}
				}
				else if (iLocal_1154[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2273[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2273[iVar0]))
						{
							iLocal_1154[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2273[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2273[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2273[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1036[iVar0], &cLocal_2080))
							{
								if (fLocal_1017 > (fLocal_595[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1036[iVar0], &cLocal_2080)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2273[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2273[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1154[iVar0]++;
					}
				}
				else if (iLocal_1154[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2273[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2273[iVar0]);
					}
					iLocal_1523 = (iLocal_1523 - 1);
					func_449(iVar0, fVar16);
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
			iLocal_1527 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1537 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1538 = 0;
		}
	}
	else
	{
		func_374();
	}
}


void func_449(int iParam0, float fParam1)//Position - 0x3A9C9
{
	int iVar0;
	
	if (!iLocal_2097[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2097[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2273[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2273[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2273[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2273[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2273[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_122)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_91)
	{
		if (!bLocal_119)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2273[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2273[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2273[iParam0]));
		}
	}
	if (!bLocal_101 && !bLocal_114)
	{
		if (iLocal_1036[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1036[iParam0], &cLocal_2080);
		}
	}
	iLocal_1154[iParam0] = 99;
}

void func_450(int iParam0, float fParam1, float fParam2)//Position - 0x3AB22
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
			func_442(Var1, Var10, fVar13);
		}
	}
}

void func_451(int iParam0, float fParam1)//Position - 0x3ABA5
{
	if (!bLocal_102)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_452(int iParam0, float fParam1)//Position - 0x3ABF2
{
	if (!bLocal_102)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_453(int iParam0, float fParam1)//Position - 0x3AC3F
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1031 + 2000f);
		fVar2 = (fLocal_1032 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1533 == 0)
				{
					Local_2068 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1031) };
					iLocal_1533++;
				}
				else if (iLocal_1533 == 1)
				{
					Local_2071 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_1533++;
				}
				else if (!bLocal_120)
				{
					if (Local_2068.x > Local_2071.x)
					{
						fVar3 = Local_2068.x;
						Local_2068.x = Local_2071.x;
						Local_2071.x = fVar3;
					}
					if (Local_2068.f_1 > Local_2071.f_1)
					{
						fVar3 = Local_2068.f_1;
						Local_2068.f_1 = Local_2071.f_1;
						Local_2071.f_1 = fVar3;
					}
					if (Local_2068.f_2 > Local_2071.f_2)
					{
						fVar3 = Local_2068.f_2;
						Local_2068.f_2 = Local_2071.f_2;
						Local_2071.f_2 = fVar3;
					}
					Local_2068 = { Local_2068 - Vector(fLocal_1035, fLocal_1035, fLocal_1035) };
					Local_2071 = { Local_2071 + Vector(fLocal_1035, fLocal_1035, fLocal_1035) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2068, Local_2071, 0, 0);
					fLocal_1031 = fVar1;
					iLocal_1533 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1536 == 0)
			{
				Local_2074 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1032) };
				iLocal_1536++;
			}
			else if (iLocal_1536 == 1)
			{
				Local_2077 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_1536++;
			}
			else if (!bLocal_120 && !bVar4)
			{
				if (Local_2074.x > Local_2077.x)
				{
					fVar3 = Local_2074.x;
					Local_2074.x = Local_2077.x;
					Local_2077.x = fVar3;
				}
				if (Local_2074.f_1 > Local_2077.f_1)
				{
					fVar3 = Local_2074.f_1;
					Local_2074.f_1 = Local_2077.f_1;
					Local_2077.f_1 = fVar3;
				}
				if (Local_2074.f_2 > Local_2077.f_2)
				{
					fVar3 = Local_2074.f_2;
					Local_2074.f_2 = Local_2077.f_2;
					Local_2077.f_2 = fVar3;
				}
				Local_2074 = { Local_2074 - Vector(fLocal_1035, fLocal_1035, fLocal_1035) };
				Local_2077 = { Local_2077 + Vector(fLocal_1035, fLocal_1035, fLocal_1035) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2074, Local_2077, 1);
				fLocal_1032 = fVar2;
				iLocal_1536 = 0;
			}
		}
	}
}


void func_455()//Position - 0x3AF2D
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, false, 1);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	VEHICLE::SET_GARBAGE_TRUCKS(0);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(0);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_456()//Position - 0x3AF77
{
	iLocal_110 = 1;
}

void func_457()//Position - 0x3AF82
{
	iLocal_103 = 1;
}


void func_459(bool bParam0)//Position - 0x3AF9F
{
	if (bParam0)
	{
		if (iLocal_2937 == 0)
		{
			iLocal_2937 = PED::ADD_SCENARIO_BLOCKING_AREA(-1196.229f, -575.1415f, 0.879524f, -1035.999f, -474.7514f, 68.87952f, 0, 1, 1, 1);
		}
		PATHFIND::SET_PED_PATHS_IN_AREA(-1714.315f, -567.0828f, 30.83458f, -1680.67f, -557.9427f, 39.83458f, 0, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, 0, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, 0, 0);
		PATHFIND::SET_PED_PATHS_IN_AREA(-1287.162f, -651.963f, 25.4564f, -1256.621f, -625.6708f, 29.6292f, 0, 0);
		PED::SET_PED_NON_CREATION_AREA(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f);
	}
	else
	{
		if (iLocal_2937 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2937, 0);
			iLocal_2937 = 0;
		}
		if (iLocal_2938 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2938, 0);
			iLocal_2938 = 0;
		}
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1714.315f, -567.0828f, 30.83458f, -1680.67f, -557.9427f, 39.83458f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-373.6247f, -835.738f, 30.4071f, -327.3391f, -822.5929f, 38.0959f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-353.9807f, -683.04f, 30.5587f, -316.4468f, -669.6537f, 37.2847f, 0);
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1287.162f, -651.963f, 25.4564f, -1256.621f, -625.6708f, 29.6292f, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_460(bool bParam0)//Position - 0x3B147
{
	if (bParam0)
	{
		if (!iLocal_2526)
		{
			ENTITY::CREATE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"), 1);
			ENTITY::CREATE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"), 1);
			ENTITY::CREATE_FORCED_OBJECT(-1208.322f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"), 1);
			iLocal_2526 = 1;
		}
	}
	else if (iLocal_2526)
	{
		ENTITY::REMOVE_FORCED_OBJECT(-1052.49f, -476.15f, 36.6f, 5f, joaat("prop_sec_barrier_ld_01a"));
		ENTITY::REMOVE_FORCED_OBJECT(-1207.25f, -578.08f, 26.17f, 5f, joaat("prop_sec_barier_03b"));
		ENTITY::REMOVE_FORCED_OBJECT(-1208.322f, -579.1413f, 26.27f, 5f, joaat("prop_sec_barier_base_01"));
		iLocal_2526 = 0;
	}
}


void func_462(int iParam0, float fParam1)//Position - 0x3B215
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_457();
			func_432(&iParam0, iLocal_1526, fParam1, 1, 0, 1, 0, 0);
			fLocal_1017 = fParam1;
			iVar0 = 0;
			while (iVar0 < 38)
			{
				if (iLocal_1429[iVar0] > 2 && iLocal_1429[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2423[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2423[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2423[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_873[iVar0]);
								fVar1 = (fVar1 * fLocal_912[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_444(iLocal_1390[iVar0]))
									{
										func_432(&(iLocal_2423[iVar0]), iLocal_1390[iVar0], fVar1, 1, 0, 1, bLocal_118, bLocal_117);
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
						iLocal_1429[iVar0] = 99;
						iLocal_1524 = (iLocal_1524 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 117)
			{
				if (iLocal_1154[iVar0] > 2 && iLocal_1154[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2273[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2273[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2273[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_595[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_444(iLocal_1036[iVar0]))
									{
										func_432(&(iLocal_2273[iVar0]), iLocal_1036[iVar0], fVar1, 1, 0, 1, 1, bLocal_117);
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
						iLocal_1154[iVar0] = 99;
						iLocal_1523 = (iLocal_1523 - 1);
					}
				}
				iVar0++;
			}
			iLocal_1527 = 0;
			iLocal_1529 = 0;
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (iLocal_1507[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2407[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2407[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2407[iVar0], 1, 0);
							iLocal_1525++;
							iLocal_1507[iVar0] = 2;
						}
					}
					else
					{
						iLocal_1507[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_1528 = 0;
			iLocal_1533 = 0;
			iLocal_1536 = 0;
			fLocal_1032 = fParam1;
			fLocal_1031 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_2056 = { Var3 - Vector(100f, 100f, 100f) };
			Local_2059 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_2056, Local_2059, 0, 0);
		}
	}
}

void func_463(float fParam0, float fParam1)//Position - 0x3B4C1
{
	int iVar0;
	
	if (fLocal_2627 < fParam0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_2273)
		{
			if (iLocal_1036[iVar0] != 0)
			{
				if (fLocal_595[iVar0] < fParam0 && fLocal_595[iVar0] > (fParam1 - 10000f))
				{
					STREAMING::REQUEST_MODEL(iLocal_2097[iVar0]);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1036[iVar0], sLocal_2783);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_2423)
		{
			if (iLocal_1390[iVar0] != 0)
			{
				if (fLocal_873[iVar0] < fParam0 && fLocal_873[iVar0] > (fParam1 - 10000f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2423[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2231[iVar0]);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1390[iVar0], sLocal_2783);
				}
			}
			iVar0++;
		}
	}
}

void func_464(int iParam0)//Position - 0x3B598
{
	iLocal_2270 = iParam0;
}

void func_465(int iParam0)//Position - 0x3B5A5
{
	bLocal_116 = iParam0;
}

void func_466()//Position - 0x3B5B1
{
	Local_1540[0 /*3*/] = { -1869.447f, -533.4042f, 11.262f };
	fLocal_123[0] = -0.0008f;
	fLocal_241[0] = -0.0089f;
	fLocal_359[0] = 0.4259f;
	fLocal_477[0] = 0.9047f;
	iLocal_1036[0] = 47;
	fLocal_595[0] = 2000f;
	iLocal_2097[0] = joaat("intruder");
	Local_1540[1 /*3*/] = { -2017.498f, -425.4558f, 11.0772f };
	fLocal_123[1] = -0.0102f;
	fLocal_241[1] = -0.0039f;
	fLocal_359[1] = 0.4351f;
	fLocal_477[1] = 0.9003f;
	iLocal_1036[1] = 250;
	fLocal_595[1] = 2050f;
	iLocal_2097[1] = joaat("intruder");
	Local_1540[2 /*3*/] = { -2140.079f, -363.5818f, 12.776f };
	fLocal_123[2] = 0.0018f;
	fLocal_241[2] = -0.0046f;
	fLocal_359[2] = 0.8084f;
	fLocal_477[2] = -0.5886f;
	iLocal_1036[2] = 251;
	fLocal_595[2] = 2100f;
	iLocal_2097[2] = joaat("intruder");
	Local_1540[3 /*3*/] = { -1994.432f, -437.5106f, 11.7305f };
	fLocal_123[3] = -0.0021f;
	fLocal_241[3] = -0.0005f;
	fLocal_359[3] = 0.4319f;
	fLocal_477[3] = 0.9019f;
	iLocal_1036[3] = 284;
	fLocal_595[3] = 2500f;
	iLocal_2097[3] = joaat("bus");
	Local_1540[4 /*3*/] = { -1924.532f, -488.042f, 11.3844f };
	fLocal_123[4] = -0.0082f;
	fLocal_241[4] = -0.0039f;
	fLocal_359[4] = 0.4332f;
	fLocal_477[4] = 0.9012f;
	iLocal_1036[4] = 67;
	fLocal_595[4] = 3000f;
	iLocal_2097[4] = joaat("manana");
	Local_1540[5 /*3*/] = { -1941.44f, -481.0277f, 11.408f };
	fLocal_123[5] = -0.0022f;
	fLocal_241[5] = -0.0095f;
	fLocal_359[5] = 0.4264f;
	fLocal_477[5] = 0.9045f;
	iLocal_1036[5] = 68;
	fLocal_595[5] = 3050f;
	iLocal_2097[5] = joaat("intruder");
	Local_1540[6 /*3*/] = { -2057.131f, -404.9521f, 10.7321f };
	fLocal_123[6] = 0.0017f;
	fLocal_241[6] = -0.0034f;
	fLocal_359[6] = 0.9104f;
	fLocal_477[6] = -0.4136f;
	iLocal_1036[6] = 30;
	fLocal_595[6] = 5000f;
	iLocal_2097[6] = joaat("manana");
	Local_1540[7 /*3*/] = { -2036.544f, -436.0986f, 11.0454f };
	fLocal_123[7] = 0.0002f;
	fLocal_241[7] = 0.0039f;
	fLocal_359[7] = 0.9073f;
	fLocal_477[7] = -0.4204f;
	iLocal_1036[7] = 31;
	fLocal_595[7] = 5040f;
	iLocal_2097[7] = joaat("manana");
	Local_1540[8 /*3*/] = { -1984.741f, -437.6598f, 11.2996f };
	fLocal_123[8] = -0.0053f;
	fLocal_241[8] = -0.0097f;
	fLocal_359[8] = 0.4337f;
	fLocal_477[8] = 0.901f;
	iLocal_1036[8] = 32;
	fLocal_595[8] = 5080f;
	iLocal_2097[8] = joaat("intruder");
	Local_1540[9 /*3*/] = { -1927.496f, -498.7926f, 11.3251f };
	fLocal_123[9] = 0.0041f;
	fLocal_241[9] = 0.0017f;
	fLocal_359[9] = 0.4102f;
	fLocal_477[9] = 0.912f;
	iLocal_1036[9] = 35;
	fLocal_595[9] = 5120f;
	iLocal_2097[9] = joaat("intruder");
	Local_1540[10 /*3*/] = { -2114.016f, -377.4624f, 12.3287f };
	fLocal_123[10] = -0.0107f;
	fLocal_241[10] = -0.0139f;
	fLocal_359[10] = 0.85f;
	fLocal_477[10] = -0.5266f;
	iLocal_1036[10] = 36;
	fLocal_595[10] = 5160f;
	iLocal_2097[10] = joaat("intruder");
	Local_1540[11 /*3*/] = { -2155.57f, -357.4149f, 12.5796f };
	fLocal_123[11] = -0.0008f;
	fLocal_241[11] = -0.0001f;
	fLocal_359[11] = 0.8151f;
	fLocal_477[11] = -0.5793f;
	iLocal_1036[11] = 33;
	fLocal_595[11] = 5200f;
	iLocal_2097[11] = joaat("manana");
	Local_1540[12 /*3*/] = { -1955.973f, -417.3983f, 17.2001f };
	fLocal_123[12] = -0.0326f;
	fLocal_241[12] = -0.0247f;
	fLocal_359[12] = 0.4751f;
	fLocal_477[12] = 0.879f;
	iLocal_1036[12] = 39;
	fLocal_595[12] = 9500f;
	iLocal_2097[12] = joaat("intruder");
	Local_1540[13 /*3*/] = { -1760.451f, -547.8943f, 35.8235f };
	fLocal_123[13] = -0.0664f;
	fLocal_241[13] = -0.0238f;
	fLocal_359[13] = 0.4498f;
	fLocal_477[13] = 0.8904f;
	iLocal_1036[13] = 44;
	fLocal_595[13] = 14100f;
	iLocal_2097[13] = joaat("manana");
	Local_1540[14 /*3*/] = { -1883.877f, -465.7772f, 23.5569f };
	fLocal_123[14] = -0.0264f;
	fLocal_241[14] = -0.0213f;
	fLocal_359[14] = 0.4694f;
	fLocal_477[14] = 0.8823f;
	iLocal_1036[14] = 43;
	fLocal_595[14] = 16733f;
	iLocal_2097[14] = joaat("intruder");
	Local_1540[15 /*3*/] = { -1844.132f, -499.3117f, 27.1005f };
	fLocal_123[15] = -0.0111f;
	fLocal_241[15] = 0.0344f;
	fLocal_359[15] = 0.8823f;
	fLocal_477[15] = -0.4693f;
	iLocal_1036[15] = 46;
	fLocal_595[15] = 16781f;
	iLocal_2097[15] = joaat("intruder");
	Local_1540[16 /*3*/] = { -1669.54f, -574.1034f, 33.3805f };
	fLocal_123[16] = 0.0115f;
	fLocal_241[16] = -0.0228f;
	fLocal_359[16] = 0.8892f;
	fLocal_477[16] = -0.4567f;
	iLocal_1036[16] = 252;
	fLocal_595[16] = 20000f;
	iLocal_2097[16] = joaat("intruder");
	Local_1540[17 /*3*/] = { -1553.639f, -643.6885f, 28.7234f };
	fLocal_123[17] = 0.0099f;
	fLocal_241[17] = -0.0012f;
	fLocal_359[17] = 0.6289f;
	fLocal_477[17] = 0.7774f;
	iLocal_1036[17] = 253;
	fLocal_595[17] = 20050f;
	iLocal_2097[17] = joaat("intruder");
	Local_1540[18 /*3*/] = { -1612.959f, -618.0091f, 31.3797f };
	fLocal_123[18] = 0.0086f;
	fLocal_241[18] = -0.026f;
	fLocal_359[18] = 0.9021f;
	fLocal_477[18] = -0.4307f;
	iLocal_1036[18] = 254;
	fLocal_595[18] = 20100f;
	iLocal_2097[18] = joaat("manana");
	Local_1540[19 /*3*/] = { -1598.341f, -514.3162f, 34.7884f };
	fLocal_123[19] = -0.0217f;
	fLocal_241[19] = -0.001f;
	fLocal_359[19] = 0.9766f;
	fLocal_477[19] = 0.214f;
	iLocal_1036[19] = 255;
	fLocal_595[19] = 20150f;
	iLocal_2097[19] = joaat("manana");
	Local_1540[21 /*3*/] = { -1664.326f, -561.4086f, 33.5174f };
	fLocal_123[21] = 0.0283f;
	fLocal_241[21] = 0.0288f;
	fLocal_359[21] = 0.2157f;
	fLocal_477[21] = 0.9756f;
	iLocal_1036[21] = 50;
	fLocal_595[21] = 21869f;
	iLocal_2097[21] = joaat("intruder");
	Local_1540[22 /*3*/] = { -1617.147f, -600.6409f, 32.0157f };
	fLocal_123[22] = 0.026f;
	fLocal_241[22] = 0.0126f;
	fLocal_359[22] = 0.4342f;
	fLocal_477[22] = 0.9003f;
	iLocal_1036[22] = 72;
	fLocal_595[22] = 22500f;
	iLocal_2097[22] = joaat("manana");
	Local_1540[23 /*3*/] = { -1650.525f, -560.737f, 33.0326f };
	fLocal_123[23] = 0.0204f;
	fLocal_241[23] = -0.0131f;
	fLocal_359[23] = 0.8283f;
	fLocal_477[23] = 0.5597f;
	iLocal_1036[23] = 51;
	fLocal_595[23] = 22584f;
	iLocal_2097[23] = joaat("manana");
	Local_1540[24 /*3*/] = { -1626.837f, -568.3124f, 33.0075f };
	fLocal_123[24] = 0.0218f;
	fLocal_241[24] = 0.0175f;
	fLocal_359[24] = -0.418f;
	fLocal_477[24] = 0.908f;
	iLocal_1036[24] = 34;
	fLocal_595[24] = 25000f;
	iLocal_2097[24] = joaat("manana");
	Local_1540[25 /*3*/] = { -1553.567f, -492.1296f, 35.1499f };
	fLocal_123[25] = -0.0086f;
	fLocal_241[25] = -0.0063f;
	fLocal_359[25] = 0.87f;
	fLocal_477[25] = 0.4929f;
	iLocal_1036[25] = 49;
	fLocal_595[25] = 25050f;
	iLocal_2097[25] = joaat("manana");
	Local_1540[26 /*3*/] = { -1566.882f, -512.4595f, 35.1885f };
	fLocal_123[26] = 0.001f;
	fLocal_241[26] = -0.009f;
	fLocal_359[26] = -0.484f;
	fLocal_477[26] = 0.875f;
	iLocal_1036[26] = 57;
	fLocal_595[26] = 27000f;
	iLocal_2097[26] = joaat("pcj");
	Local_1540[27 /*3*/] = { -1405.661f, -398.7107f, 36.196f };
	fLocal_123[27] = -0.001f;
	fLocal_241[27] = -0.0172f;
	fLocal_359[27] = 0.8676f;
	fLocal_477[27] = 0.4969f;
	iLocal_1036[27] = 79;
	fLocal_595[27] = 28900f;
	iLocal_2097[27] = joaat("intruder");
	Local_1540[29 /*3*/] = { -1385.979f, -406.3781f, 36.1497f };
	fLocal_123[29] = 0.003f;
	fLocal_241[29] = 0.0057f;
	fLocal_359[29] = -0.4769f;
	fLocal_477[29] = 0.8789f;
	iLocal_1036[29] = 256;
	fLocal_595[29] = 30000f;
	iLocal_2097[29] = joaat("manana");
	Local_1540[30 /*3*/] = { -1511.846f, -486.1111f, 35.2985f };
	fLocal_123[30] = 0.0015f;
	fLocal_241[30] = 0.001f;
	fLocal_359[30] = -0.4916f;
	fLocal_477[30] = 0.8708f;
	iLocal_1036[30] = 61;
	fLocal_595[30] = 30912f;
	iLocal_2097[30] = joaat("intruder");
	Local_1540[31 /*3*/] = { -1503.279f, -453.5208f, 35.1137f };
	fLocal_123[31] = 0.0005f;
	fLocal_241[31] = 0.0009f;
	fLocal_359[31] = 0.8742f;
	fLocal_477[31] = 0.4855f;
	iLocal_1036[31] = 62;
	fLocal_595[31] = 30962f;
	iLocal_2097[31] = joaat("intruder");
	Local_1540[32 /*3*/] = { -1441.961f, -436.8392f, 35.318f };
	fLocal_123[32] = 0.0051f;
	fLocal_241[32] = -0.0027f;
	fLocal_359[32] = -0.4849f;
	fLocal_477[32] = 0.8746f;
	iLocal_1036[32] = 60;
	fLocal_595[32] = 31000f;
	iLocal_2097[32] = joaat("manana");
	Local_1540[33 /*3*/] = { -1429.472f, -475.7137f, 33.7061f };
	fLocal_123[33] = 0.0134f;
	fLocal_241[33] = 0.0239f;
	fLocal_359[33] = 0.2968f;
	fLocal_477[33] = 0.9545f;
	iLocal_1036[33] = 56;
	fLocal_595[33] = 31050f;
	iLocal_2097[33] = joaat("intruder");
	Local_1540[35 /*3*/] = { -1280.433f, -384.1887f, 36.0295f };
	fLocal_123[35] = 0.0126f;
	fLocal_241[35] = 0.0032f;
	fLocal_359[35] = 0.2431f;
	fLocal_477[35] = 0.9699f;
	iLocal_1036[35] = 257;
	fLocal_595[35] = 33000f;
	iLocal_2097[35] = joaat("manana");
	Local_1540[36 /*3*/] = { -1343.594f, -355.1015f, 36.2497f };
	fLocal_123[36] = -0.0052f;
	fLocal_241[36] = -0.0032f;
	fLocal_359[36] = 0.8108f;
	fLocal_477[36] = 0.5852f;
	iLocal_1036[36] = 69;
	fLocal_595[36] = 33994f;
	iLocal_2097[36] = joaat("manana");
	Local_1540[37 /*3*/] = { -1216.532f, -307.827f, 37.3348f };
	fLocal_123[37] = -0.0036f;
	fLocal_241[37] = 0.0027f;
	fLocal_359[37] = -0.5369f;
	fLocal_477[37] = 0.8436f;
	iLocal_1036[37] = 65;
	fLocal_595[37] = 35000f;
	iLocal_2097[37] = joaat("manana");
	Local_1540[38 /*3*/] = { -1105.849f, -222.9649f, 37.3392f };
	fLocal_123[38] = -0.006f;
	fLocal_241[38] = 0.0021f;
	fLocal_359[38] = 0.8546f;
	fLocal_477[38] = 0.5192f;
	iLocal_1036[38] = 258;
	fLocal_595[38] = 36000f;
	iLocal_2097[38] = joaat("manana");
	Local_1540[39 /*3*/] = { -1080.295f, -214.4883f, 37.4765f };
	fLocal_123[39] = -0.0017f;
	fLocal_241[39] = -0.0037f;
	fLocal_359[39] = 0.8656f;
	fLocal_477[39] = 0.5006f;
	iLocal_1036[39] = 259;
	fLocal_595[39] = 36100f;
	iLocal_2097[39] = joaat("intruder");
	Local_1540[40 /*3*/] = { -1193.581f, -297.1006f, 37.7095f };
	fLocal_123[40] = -0.001f;
	fLocal_241[40] = 0.0003f;
	fLocal_359[40] = -0.5278f;
	fLocal_477[40] = 0.8494f;
	iLocal_1036[40] = 260;
	fLocal_595[40] = 36200f;
	iLocal_2097[40] = joaat("burrito3");
	Local_1540[41 /*3*/] = { -1020.427f, -177.1401f, 37.4026f };
	fLocal_123[41] = -0.0125f;
	fLocal_241[41] = 0.0031f;
	fLocal_359[41] = 0.8613f;
	fLocal_477[41] = 0.5079f;
	iLocal_1036[41] = 261;
	fLocal_595[41] = 36300f;
	iLocal_2097[41] = joaat("intruder");
	Local_1540[42 /*3*/] = { -1267.442f, -336.0135f, 36.4325f };
	fLocal_123[42] = -0.0032f;
	fLocal_241[42] = -0.0065f;
	fLocal_359[42] = -0.51f;
	fLocal_477[42] = 0.8602f;
	iLocal_1036[42] = 70;
	fLocal_595[42] = 37000f;
	iLocal_2097[42] = joaat("intruder");
	Local_1540[44 /*3*/] = { -1272.121f, -343.9194f, 36.2108f };
	fLocal_123[44] = 0.0064f;
	fLocal_241[44] = -0.004f;
	fLocal_359[44] = -0.5243f;
	fLocal_477[44] = 0.8515f;
	iLocal_1036[44] = 75;
	fLocal_595[44] = 37140f;
	iLocal_2097[44] = joaat("intruder");
	Local_1540[45 /*3*/] = { -1031.842f, -289.7789f, 37.6673f };
	fLocal_123[45] = -0.007f;
	fLocal_241[45] = -0.0007f;
	fLocal_359[45] = 0.2092f;
	fLocal_477[45] = 0.9778f;
	iLocal_1036[45] = 85;
	fLocal_595[45] = 37200f;
	iLocal_2097[45] = joaat("burrito3");
	Local_1540[48 /*3*/] = { -1284.529f, -330.2454f, 36.3752f };
	fLocal_123[48] = -0.0032f;
	fLocal_241[48] = -0.0043f;
	fLocal_359[48] = 0.852f;
	fLocal_477[48] = 0.5235f;
	iLocal_1036[48] = 201;
	fLocal_595[48] = 37950f;
	iLocal_2097[48] = joaat("intruder");
	Local_1540[49 /*3*/] = { -961.5755f, -200.8471f, 37.1363f };
	fLocal_123[49] = -0.0379f;
	fLocal_241[49] = 0.02f;
	fLocal_359[49] = 0.8755f;
	fLocal_477[49] = 0.4814f;
	iLocal_1036[49] = 262;
	fLocal_595[49] = 39000f;
	iLocal_2097[49] = joaat("intruder");
	Local_1540[50 /*3*/] = { -1030.6f, -250.964f, 37.2496f };
	fLocal_123[50] = 0.0131f;
	fLocal_241[50] = 0.0248f;
	fLocal_359[50] = -0.5153f;
	fLocal_477[50] = 0.8565f;
	iLocal_1036[50] = 263;
	fLocal_595[50] = 39050f;
	iLocal_2097[50] = joaat("manana");
	Local_1540[51 /*3*/] = { -1212.09f, -293.2291f, 37.3428f };
	fLocal_123[51] = 0.0037f;
	fLocal_241[51] = 0.0035f;
	fLocal_359[51] = 0.8554f;
	fLocal_477[51] = 0.5179f;
	iLocal_1036[51] = 202;
	fLocal_595[51] = 39600f;
	iLocal_2097[51] = joaat("manana");
	Local_1540[52 /*3*/] = { -1045.851f, -276.7056f, 37.2715f };
	fLocal_123[52] = -0.0005f;
	fLocal_241[52] = 0f;
	fLocal_359[52] = 0.9753f;
	fLocal_477[52] = -0.2209f;
	iLocal_1036[52] = 73;
	fLocal_595[52] = 40000f;
	iLocal_2097[52] = joaat("manana");
	Local_1540[53 /*3*/] = { -1018.158f, -236.3702f, 37.3773f };
	fLocal_123[53] = 0.0028f;
	fLocal_241[53] = -0.0089f;
	fLocal_359[53] = 0.8524f;
	fLocal_477[53] = 0.5227f;
	iLocal_1036[53] = 94;
	fLocal_595[53] = 40200f;
	iLocal_2097[53] = joaat("intruder");
	Local_1540[54 /*3*/] = { -992.8951f, -381.1576f, 37.394f };
	fLocal_123[54] = 0.0005f;
	fLocal_241[54] = -0.0092f;
	fLocal_359[54] = 0.9712f;
	fLocal_477[54] = -0.2382f;
	iLocal_1036[54] = 170;
	fLocal_595[54] = 42500f;
	iLocal_2097[54] = joaat("manana");
	Local_1540[55 /*3*/] = { -943.202f, -420.0762f, 37.3229f };
	fLocal_123[55] = -0.0044f;
	fLocal_241[55] = 0.0127f;
	fLocal_359[55] = 0.8549f;
	fLocal_477[55] = 0.5186f;
	iLocal_1036[55] = 264;
	fLocal_595[55] = 43000f;
	iLocal_2097[55] = joaat("intruder");
	Local_1540[56 /*3*/] = { -973.2485f, -426.7131f, 37.4479f };
	fLocal_123[56] = -0.0159f;
	fLocal_241[56] = -0.0064f;
	fLocal_359[56] = 0.9638f;
	fLocal_477[56] = -0.2662f;
	iLocal_1036[56] = 265;
	fLocal_595[56] = 43200f;
	iLocal_2097[56] = joaat("intruder");
	Local_1540[57 /*3*/] = { -1003.615f, -333.3123f, 36.9974f };
	fLocal_123[57] = 0f;
	fLocal_241[57] = 0f;
	fLocal_359[57] = 0.2417f;
	fLocal_477[57] = 0.9703f;
	iLocal_1036[57] = 86;
	fLocal_595[57] = 43753f;
	iLocal_2097[57] = joaat("intruder");
	Local_1540[58 /*3*/] = { -910.7939f, -480.5219f, 36.1598f };
	fLocal_123[58] = -0.0004f;
	fLocal_241[58] = -0.0009f;
	fLocal_359[58] = 0.8607f;
	fLocal_477[58] = 0.509f;
	iLocal_1036[58] = 266;
	fLocal_595[58] = 44000f;
	iLocal_2097[58] = joaat("manana");
	Local_1540[59 /*3*/] = { -903.4105f, -534.6552f, 34.3315f };
	fLocal_123[59] = 0.025f;
	fLocal_241[59] = 0.0193f;
	fLocal_359[59] = 0.2328f;
	fLocal_477[59] = 0.972f;
	iLocal_1036[59] = 267;
	fLocal_595[59] = 44200f;
	iLocal_2097[59] = joaat("manana");
	Local_1540[60 /*3*/] = { -1001.246f, -349.769f, 37.5263f };
	fLocal_123[60] = -0.0195f;
	fLocal_241[60] = -0.0038f;
	fLocal_359[60] = 0.2914f;
	fLocal_477[60] = 0.9564f;
	iLocal_1036[60] = 89;
	fLocal_595[60] = 45271f;
	iLocal_2097[60] = joaat("intruder");
	Local_1540[61 /*3*/] = { -944.2744f, -457.4497f, 37.0746f };
	fLocal_123[61] = 0.0051f;
	fLocal_241[61] = -0.0062f;
	fLocal_359[61] = 0.2376f;
	fLocal_477[61] = 0.9713f;
	iLocal_1036[61] = 90;
	fLocal_595[61] = 46500f;
	iLocal_2097[61] = joaat("intruder");
	Local_1540[62 /*3*/] = { -1066.392f, -457.1241f, 36.0125f };
	fLocal_123[62] = -0.021f;
	fLocal_241[62] = -0.0058f;
	fLocal_359[62] = 0.8835f;
	fLocal_477[62] = -0.468f;
	iLocal_1036[62] = 108;
	fLocal_595[62] = 47600f;
	iLocal_2097[62] = joaat("manana");
	func_467(62, 0);
	Local_1540[63 /*3*/] = { -1372.2f, -703.8073f, 23.8866f };
	fLocal_123[63] = 0.0254f;
	fLocal_241[63] = 0.0194f;
	fLocal_359[63] = -0.435f;
	fLocal_477[63] = 0.8999f;
	iLocal_1036[63] = 95;
	fLocal_595[63] = 52500f;
	iLocal_2097[63] = joaat("manana");
	Local_1540[64 /*3*/] = { -1359.666f, -694.3884f, 24.9078f };
	fLocal_123[64] = 0.0261f;
	fLocal_241[64] = 0.0166f;
	fLocal_359[64] = -0.4655f;
	fLocal_477[64] = 0.8845f;
	iLocal_1036[64] = 13;
	fLocal_595[64] = 54500f;
	iLocal_2097[64] = joaat("pcj");
	Local_1540[65 /*3*/] = { -1251.42f, -580.7559f, 27.7332f };
	fLocal_123[65] = 0.0033f;
	fLocal_241[65] = -0.0427f;
	fLocal_359[65] = 0.9369f;
	fLocal_477[65] = -0.347f;
	iLocal_1036[65] = 93;
	fLocal_595[65] = 55000f;
	iLocal_2097[65] = joaat("intruder");
	Local_1540[66 /*3*/] = { -1186.866f, -629.9144f, 23.4611f };
	fLocal_123[66] = 0.0371f;
	fLocal_241[66] = 0.0124f;
	fLocal_359[66] = 0.3335f;
	fLocal_477[66] = 0.942f;
	iLocal_1036[66] = 268;
	fLocal_595[66] = 55050f;
	iLocal_2097[66] = joaat("manana");
	Local_1540[67 /*3*/] = { -1104.092f, -750.3582f, 18.9453f };
	fLocal_123[67] = -0.0083f;
	fLocal_241[67] = -0.0215f;
	fLocal_359[67] = 0.9362f;
	fLocal_477[67] = -0.3506f;
	iLocal_1036[67] = 115;
	fLocal_595[67] = 66000f;
	iLocal_2097[67] = joaat("manana");
	Local_1540[68 /*3*/] = { -1100.658f, -748.1008f, 19.0332f };
	fLocal_123[68] = 0.0156f;
	fLocal_241[68] = -0.0216f;
	fLocal_359[68] = 0.9336f;
	fLocal_477[68] = -0.3572f;
	iLocal_1036[68] = 116;
	fLocal_595[68] = 66050f;
	iLocal_2097[68] = joaat("pcj");
	Local_1540[69 /*3*/] = { -1109.135f, -719.9675f, 19.9357f };
	fLocal_123[69] = 0.0113f;
	fLocal_241[69] = -0.0008f;
	fLocal_359[69] = 0.3447f;
	fLocal_477[69] = 0.9386f;
	iLocal_1036[69] = 154;
	fLocal_595[69] = 66100f;
	iLocal_2097[69] = joaat("intruder");
	Local_1540[70 /*3*/] = { -1161.234f, -685.1978f, 21.6411f };
	fLocal_123[70] = -0.0033f;
	fLocal_241[70] = -0.0261f;
	fLocal_359[70] = 0.9396f;
	fLocal_477[70] = -0.3413f;
	iLocal_1036[70] = 156;
	fLocal_595[70] = 66500f;
	iLocal_2097[70] = joaat("intruder");
	Local_1540[71 /*3*/] = { -1094.919f, -761.551f, 18.9358f };
	fLocal_123[71] = -0.0024f;
	fLocal_241[71] = -0.0034f;
	fLocal_359[71] = 0.9406f;
	fLocal_477[71] = -0.3395f;
	iLocal_1036[71] = 272;
	fLocal_595[71] = 69000f;
	iLocal_2097[71] = joaat("intruder");
	Local_1540[72 /*3*/] = { -1085.727f, -737.9604f, 18.5164f };
	fLocal_123[72] = 0.0186f;
	fLocal_241[72] = 0.0051f;
	fLocal_359[72] = 0.2729f;
	fLocal_477[72] = 0.9619f;
	iLocal_1036[72] = 101;
	fLocal_595[72] = 69902f;
	iLocal_2097[72] = joaat("intruder");
	Local_1540[73 /*3*/] = { -1191.977f, -862.7239f, 13.4924f };
	fLocal_123[73] = 0.0167f;
	fLocal_241[73] = -0.0078f;
	fLocal_359[73] = -0.4888f;
	fLocal_477[73] = 0.8722f;
	iLocal_1036[73] = 109;
	fLocal_595[73] = 70000f;
	iLocal_2097[73] = joaat("pcj");
	Local_1540[74 /*3*/] = { -1017.11f, -801.2603f, 16.2402f };
	fLocal_123[74] = 0.0237f;
	fLocal_241[74] = -0.0005f;
	fLocal_359[74] = 0.5066f;
	fLocal_477[74] = 0.8619f;
	iLocal_1036[74] = 269;
	fLocal_595[74] = 70050f;
	iLocal_2097[74] = joaat("manana");
	Local_1540[75 /*3*/] = { -1042.967f, -723.3073f, 19.0664f };
	fLocal_123[75] = -0.0227f;
	fLocal_241[75] = -0.0131f;
	fLocal_359[75] = 0.9117f;
	fLocal_477[75] = 0.4101f;
	iLocal_1036[75] = 270;
	fLocal_595[75] = 70100f;
	iLocal_2097[75] = joaat("manana");
	Local_1540[76 /*3*/] = { -986.264f, -811.2874f, 15.3855f };
	fLocal_123[76] = 0.0037f;
	fLocal_241[76] = 0.0064f;
	fLocal_359[76] = 0.497f;
	fLocal_477[76] = 0.8677f;
	iLocal_1036[76] = 271;
	fLocal_595[76] = 70150f;
	iLocal_2097[76] = joaat("manana");
	Local_1540[78 /*3*/] = { -1099.207f, -723.0576f, 19.5426f };
	fLocal_123[78] = 0.0172f;
	fLocal_241[78] = 0.0138f;
	fLocal_359[78] = 0.2758f;
	fLocal_477[78] = 0.961f;
	iLocal_1036[78] = 96;
	fLocal_595[78] = 70242f;
	iLocal_2097[78] = joaat("intruder");
	Local_1540[79 /*3*/] = { -1128.739f, -796.869f, 16.4235f };
	fLocal_123[79] = -0.0331f;
	fLocal_241[79] = -0.0425f;
	fLocal_359[79] = 0.9062f;
	fLocal_477[79] = 0.4193f;
	iLocal_1036[79] = 104;
	fLocal_595[79] = 74000f;
	iLocal_2097[79] = joaat("manana");
	Local_1540[80 /*3*/] = { -1155.636f, -834.2766f, 13.8095f };
	fLocal_123[80] = 0.0081f;
	fLocal_241[80] = -0.0058f;
	fLocal_359[80] = -0.4207f;
	fLocal_477[80] = 0.9071f;
	iLocal_1036[80] = 105;
	fLocal_595[80] = 74050f;
	iLocal_2097[80] = joaat("manana");
	Local_1540[81 /*3*/] = { -1175.993f, -835.8189f, 13.826f };
	fLocal_123[81] = -0.0051f;
	fLocal_241[81] = 0.0066f;
	fLocal_359[81] = 0.9051f;
	fLocal_477[81] = 0.4251f;
	iLocal_1036[81] = 273;
	fLocal_595[81] = 75000f;
	iLocal_2097[81] = joaat("intruder");
	Local_1540[82 /*3*/] = { -1110.68f, -919.0346f, 2.2867f };
	fLocal_123[82] = -0.0002f;
	fLocal_241[82] = -0.0064f;
	fLocal_359[82] = 0.8645f;
	fLocal_477[82] = 0.5025f;
	iLocal_1036[82] = 203;
	fLocal_595[82] = 82357f;
	iLocal_2097[82] = joaat("manana");
	Local_1540[83 /*3*/] = { -1014.5f, -1099.901f, 1.3071f };
	fLocal_123[83] = -0.0089f;
	fLocal_241[83] = -0.0024f;
	fLocal_359[83] = 0.2603f;
	fLocal_477[83] = 0.9655f;
	iLocal_1036[83] = 113;
	fLocal_595[83] = 84818f;
	iLocal_2097[83] = joaat("intruder");
	Local_1540[84 /*3*/] = { -989.3825f, -1154.471f, 2.0856f };
	fLocal_123[84] = -0.0107f;
	fLocal_241[84] = 0.0386f;
	fLocal_359[84] = 0.9645f;
	fLocal_477[84] = -0.2611f;
	iLocal_1036[84] = 119;
	fLocal_595[84] = 86732f;
	iLocal_2097[84] = joaat("intruder");
	Local_1540[85 /*3*/] = { -925.1222f, -1200.272f, 4.4888f };
	fLocal_123[85] = 0.0002f;
	fLocal_241[85] = 0f;
	fLocal_359[85] = 0.8763f;
	fLocal_477[85] = 0.4818f;
	iLocal_1036[85] = 134;
	fLocal_595[85] = 92700f;
	iLocal_2097[85] = joaat("manana");
	Local_1540[86 /*3*/] = { -983.4543f, -1252.494f, 5.2503f };
	fLocal_123[86] = -0.004f;
	fLocal_241[86] = 0.0161f;
	fLocal_359[86] = -0.5021f;
	fLocal_477[86] = 0.8646f;
	iLocal_1036[86] = 274;
	fLocal_595[86] = 93000f;
	iLocal_2097[86] = joaat("intruder");
	Local_1540[87 /*3*/] = { -849.5126f, -1152.512f, 6.0559f };
	fLocal_123[87] = -0.0229f;
	fLocal_241[87] = -0.019f;
	fLocal_359[87] = 0.7997f;
	fLocal_477[87] = 0.5997f;
	iLocal_1036[87] = 130;
	fLocal_595[87] = 95518f;
	iLocal_2097[87] = joaat("manana");
	Local_1540[88 /*3*/] = { -848.8896f, -1205.208f, 5.6769f };
	fLocal_123[88] = -0.0236f;
	fLocal_241[88] = -0.0291f;
	fLocal_359[88] = 0.2576f;
	fLocal_477[88] = 0.9655f;
	iLocal_1036[88] = 126;
	fLocal_595[88] = 97000f;
	iLocal_2097[88] = joaat("intruder");
	Local_1540[89 /*3*/] = { -873.4331f, -1135.991f, 6.2755f };
	fLocal_123[89] = 0.0124f;
	fLocal_241[89] = -0.0485f;
	fLocal_359[89] = 0.9657f;
	fLocal_477[89] = -0.2547f;
	iLocal_1036[89] = 125;
	fLocal_595[89] = 97050f;
	iLocal_2097[89] = joaat("manana");
	Local_1540[91 /*3*/] = { -667.5715f, -873.9283f, 41.4232f };
	fLocal_123[91] = 0.0242f;
	fLocal_241[91] = -0.0155f;
	fLocal_359[91] = -0.6235f;
	fLocal_477[91] = 0.7813f;
	iLocal_1036[91] = 25;
	fLocal_595[91] = 104000f;
	iLocal_2097[91] = joaat("maverick");
	Local_1540[92 /*3*/] = { -668.2998f, -1048.541f, 16.3267f };
	fLocal_123[92] = 0.0058f;
	fLocal_241[92] = -0.0334f;
	fLocal_359[92] = 0.8869f;
	fLocal_477[92] = 0.4606f;
	iLocal_1036[92] = 26;
	fLocal_595[92] = 104500f;
	iLocal_2097[92] = joaat("intruder");
	Local_1540[93 /*3*/] = { -646.0926f, -913.8471f, 23.5267f };
	fLocal_123[93] = -0.0178f;
	fLocal_241[93] = -0.0373f;
	fLocal_359[93] = 0.999f;
	fLocal_477[93] = 0.0153f;
	iLocal_1036[93] = 136;
	fLocal_595[93] = 106500f;
	iLocal_2097[93] = joaat("intruder");
	Local_1540[94 /*3*/] = { -636.0123f, -980.1482f, 20.8531f };
	fLocal_123[94] = 0.0095f;
	fLocal_241[94] = -0.0064f;
	fLocal_359[94] = -0.0199f;
	fLocal_477[94] = 0.9997f;
	iLocal_1036[94] = 276;
	fLocal_595[94] = 107000f;
	iLocal_2097[94] = joaat("manana");
	Local_1540[95 /*3*/] = { -679.2947f, -959.8151f, 20.1611f };
	fLocal_123[95] = 0.039f;
	fLocal_241[95] = 0.0031f;
	fLocal_359[95] = -0.7025f;
	fLocal_477[95] = 0.7106f;
	iLocal_1036[95] = 277;
	fLocal_595[95] = 108000f;
	iLocal_2097[95] = joaat("manana");
	Local_1540[96 /*3*/] = { -645.9667f, -872.5993f, 24.0909f };
	fLocal_123[96] = -0.0308f;
	fLocal_241[96] = 0.003f;
	fLocal_359[96] = 0.9995f;
	fLocal_477[96] = -0.0065f;
	iLocal_1036[96] = 278;
	fLocal_595[96] = 108050f;
	iLocal_2097[96] = joaat("manana");
	Local_1540[97 /*3*/] = { -532.2497f, -1015.102f, 22.4589f };
	fLocal_123[97] = 0.0006f;
	fLocal_241[97] = 0.0229f;
	fLocal_359[97] = 0.0582f;
	fLocal_477[97] = 0.998f;
	iLocal_1036[97] = 279;
	fLocal_595[97] = 112000f;
	iLocal_2097[97] = joaat("manana");
	Local_1540[98 /*3*/] = { -492.1226f, -871.4891f, 29.2373f };
	fLocal_123[98] = 0.0305f;
	fLocal_241[98] = -0.0002f;
	fLocal_359[98] = -0.0364f;
	fLocal_477[98] = 0.9989f;
	iLocal_1036[98] = 152;
	fLocal_595[98] = 114001f;
	iLocal_2097[98] = joaat("manana");
	Local_1540[99 /*3*/] = { -477.283f, -845.0166f, 29.9852f };
	fLocal_123[99] = -0.0032f;
	fLocal_241[99] = -0.0105f;
	fLocal_359[99] = 0.7135f;
	fLocal_477[99] = -0.7006f;
	iLocal_1036[99] = 148;
	fLocal_595[99] = 116000f;
	iLocal_2097[99] = joaat("intruder");
	Local_1540[100 /*3*/] = { -517.6269f, -758.5123f, 31.4468f };
	fLocal_123[100] = -0.0165f;
	fLocal_241[100] = -0.026f;
	fLocal_359[100] = 0.9731f;
	fLocal_477[100] = -0.2283f;
	iLocal_1036[100] = 280;
	fLocal_595[100] = 117000f;
	iLocal_2097[100] = joaat("manana");
	Local_1540[101 /*3*/] = { -496.5247f, -816.1506f, 30.0963f };
	fLocal_123[101] = -0.0035f;
	fLocal_241[101] = -0.0011f;
	fLocal_359[101] = -0.0339f;
	fLocal_477[101] = 0.9994f;
	iLocal_1036[101] = 281;
	fLocal_595[101] = 117050f;
	iLocal_2097[101] = joaat("intruder");
	Local_1540[102 /*3*/] = { -502.5592f, -804.7895f, 30.2477f };
	fLocal_123[102] = 0.0037f;
	fLocal_241[102] = -0.0047f;
	fLocal_359[102] = 0.9996f;
	fLocal_477[102] = -0.0291f;
	iLocal_1036[102] = 157;
	fLocal_595[102] = 118845f;
	iLocal_2097[102] = joaat("intruder");
	Local_1540[103 /*3*/] = { -367.6438f, -834.8538f, 31.2414f };
	fLocal_123[103] = -0.0128f;
	fLocal_241[103] = 0.0035f;
	fLocal_359[103] = 0.6848f;
	fLocal_477[103] = 0.7286f;
	iLocal_1036[103] = 158;
	fLocal_595[103] = 119000f;
	iLocal_2097[103] = joaat("pcj");
	Local_1540[104 /*3*/] = { -286.6659f, -846.1884f, 31.3065f };
	fLocal_123[104] = -0.0127f;
	fLocal_241[104] = -0.0018f;
	fLocal_359[104] = 0.6461f;
	fLocal_477[104] = 0.7631f;
	iLocal_1036[104] = 282;
	fLocal_595[104] = 120000f;
	iLocal_2097[104] = joaat("intruder");
	Local_1540[105 /*3*/] = { -233.8871f, -869.6703f, 29.988f };
	fLocal_123[105] = 0.0115f;
	fLocal_241[105] = 0.0067f;
	fLocal_359[105] = 0.5974f;
	fLocal_477[105] = 0.8018f;
	iLocal_1036[105] = 283;
	fLocal_595[105] = 120050f;
	iLocal_2097[105] = joaat("intruder");
	Local_1540[106 /*3*/] = { -507.5561f, -826.8052f, 29.621f };
	fLocal_123[106] = 0f;
	fLocal_241[106] = -0.0021f;
	fLocal_359[106] = 1f;
	fLocal_477[106] = 0.0026f;
	iLocal_1036[106] = 155;
	fLocal_595[106] = 120449f;
	iLocal_2097[106] = joaat("intruder");
	Local_1540[107 /*3*/] = { -387.642f, -844.1628f, 31.0928f };
	fLocal_123[107] = -0.0048f;
	fLocal_241[107] = 0.0048f;
	fLocal_359[107] = 0.735f;
	fLocal_477[107] = -0.6781f;
	iLocal_1036[107] = 205;
	fLocal_595[107] = 123701f;
	iLocal_2097[107] = joaat("manana");
	Local_1540[108 /*3*/] = { -332.0064f, -860.2901f, 31.1178f };
	fLocal_123[108] = -0.0038f;
	fLocal_241[108] = 0.0044f;
	fLocal_359[108] = 0.7627f;
	fLocal_477[108] = -0.6467f;
	iLocal_1036[108] = 206;
	fLocal_595[108] = 124493f;
	iLocal_2097[108] = joaat("manana");
	Local_1540[109 /*3*/] = { -316.7719f, -857.1534f, 31.1568f };
	fLocal_123[109] = -0.003f;
	fLocal_241[109] = 0.0034f;
	fLocal_359[109] = 0.7628f;
	fLocal_477[109] = -0.6466f;
	iLocal_1036[109] = 207;
	fLocal_595[109] = 124955f;
	iLocal_2097[109] = joaat("manana");
	Local_1540[110 /*3*/] = { -369.826f, -661.4047f, 31.1689f };
	fLocal_123[110] = 0.0061f;
	fLocal_241[110] = -0.0061f;
	fLocal_359[110] = -0.7071f;
	fLocal_477[110] = 0.7071f;
	iLocal_1036[110] = 166;
	fLocal_595[110] = 130000f;
	iLocal_2097[110] = joaat("intruder");
	Local_1540[111 /*3*/] = { -248.7058f, -603.2553f, 33.5757f };
	fLocal_123[111] = -0.0274f;
	fLocal_241[111] = -0.0092f;
	fLocal_359[111] = 0.9839f;
	fLocal_477[111] = 0.1762f;
	iLocal_1036[111] = 285;
	fLocal_595[111] = 130050f;
	iLocal_2097[111] = joaat("intruder");
	Local_1540[112 /*3*/] = { -247.1978f, -612.5249f, 33.4505f };
	fLocal_123[112] = -0.0124f;
	fLocal_241[112] = -0.0091f;
	fLocal_359[112] = 0.9849f;
	fLocal_477[112] = 0.1726f;
	iLocal_1036[112] = 286;
	fLocal_595[112] = 130100f;
	iLocal_2097[112] = joaat("manana");
	Local_1540[113 /*3*/] = { -243.4324f, -620.572f, 33.707f };
	fLocal_123[113] = -0.0019f;
	fLocal_241[113] = -0.0092f;
	fLocal_359[113] = 0.9875f;
	fLocal_477[113] = 0.1574f;
	iLocal_1036[113] = 287;
	fLocal_595[113] = 130150f;
	iLocal_2097[113] = joaat("burrito3");
	Local_1540[114 /*3*/] = { -277.3765f, -654.3015f, 32.7939f };
	fLocal_123[114] = -0.0041f;
	fLocal_241[114] = 0.0062f;
	fLocal_359[114] = 0.6547f;
	fLocal_477[114] = 0.7558f;
	iLocal_1036[114] = 208;
	fLocal_595[114] = 133831f;
	iLocal_2097[114] = joaat("intruder");
	Local_1540[115 /*3*/] = { -226.6089f, -599.454f, 33.7347f };
	fLocal_123[115] = 0.0071f;
	fLocal_241[115] = -0.0012f;
	fLocal_359[115] = -0.1741f;
	fLocal_477[115] = 0.9847f;
	iLocal_1036[115] = 164;
	fLocal_595[115] = 137506f;
	iLocal_2097[115] = joaat("intruder");
	Local_1938[0 /*3*/] = { -1829.17f, -579.5376f, 10.9467f };
	fLocal_717[0] = -0.0059f;
	fLocal_756[0] = -0.0026f;
	fLocal_795[0] = 0.4222f;
	fLocal_834[0] = 0.9065f;
	iLocal_1390[0] = 38;
	fLocal_873[0] = 0f;
	fLocal_912[0] = 1f;
	iLocal_2231[0] = joaat("manana");
	Local_1938[1 /*3*/] = { -1940.012f, -473.7903f, 11.9182f };
	fLocal_717[1] = -0.004f;
	fLocal_756[1] = 0.0114f;
	fLocal_795[1] = 0.4266f;
	fLocal_834[1] = 0.9043f;
	iLocal_1390[1] = 516;
	fLocal_873[1] = 1500f;
	fLocal_912[1] = 1f;
	iLocal_2231[1] = joaat("flatbed");
	Local_1938[2 /*3*/] = { -1893.909f, -519.8182f, 11.2157f };
	fLocal_717[2] = 0.001f;
	fLocal_756[2] = 0.0005f;
	fLocal_795[2] = 0.4314f;
	fLocal_834[2] = 0.9022f;
	iLocal_1390[2] = 52;
	fLocal_873[2] = 2000f;
	fLocal_912[2] = 1f;
	iLocal_2231[2] = joaat("youga");
	Local_1938[3 /*3*/] = { -1875.374f, -542.2328f, 11.2263f };
	fLocal_717[3] = -0.007f;
	fLocal_756[3] = -0.0033f;
	fLocal_795[3] = 0.4363f;
	fLocal_834[3] = 0.8998f;
	iLocal_1390[3] = 45;
	fLocal_873[3] = 3000f;
	fLocal_912[3] = 1f;
	iLocal_2231[3] = joaat("manana");
	Local_1938[4 /*3*/] = { -1732.982f, -524.2459f, 37.3373f };
	fLocal_717[4] = 0.0203f;
	fLocal_756[4] = -0.025f;
	fLocal_795[4] = 0.9005f;
	fLocal_834[4] = -0.4336f;
	iLocal_1390[4] = 501;
	fLocal_873[4] = 19000f;
	fLocal_912[4] = 1f;
	iLocal_2231[4] = joaat("intruder");
	Local_1938[5 /*3*/] = { -1568.396f, -522.3314f, 34.8755f };
	fLocal_717[5] = -0.001f;
	fLocal_756[5] = 0.0003f;
	fLocal_795[5] = -0.4567f;
	fLocal_834[5] = 0.8896f;
	iLocal_1390[5] = 54;
	fLocal_873[5] = 27947f;
	fLocal_912[5] = 1f;
	iLocal_2231[5] = joaat("intruder");
	Local_1938[6 /*3*/] = { -1405.994f, -412.4767f, 36.0144f };
	fLocal_717[6] = -0.0127f;
	fLocal_756[6] = 0.0028f;
	fLocal_795[6] = -0.4831f;
	fLocal_834[6] = 0.8754f;
	iLocal_1390[6] = 509;
	fLocal_873[6] = 28000f;
	fLocal_912[6] = 1f;
	iLocal_2231[6] = joaat("manana");
	Local_1938[7 /*3*/] = { -1518.792f, -386.8024f, 41.1265f };
	fLocal_717[7] = 0.0254f;
	fLocal_756[7] = -0.0525f;
	fLocal_795[7] = 0.9088f;
	fLocal_834[7] = -0.4131f;
	iLocal_1390[7] = 23;
	fLocal_873[7] = 29000f;
	fLocal_912[7] = 1f;
	iLocal_2231[7] = joaat("intruder");
	Local_1938[8 /*3*/] = { -1350.02f, -427.0193f, 34.9505f };
	fLocal_717[8] = 0.0377f;
	fLocal_756[8] = 0.0064f;
	fLocal_795[8] = 0.3218f;
	fLocal_834[8] = 0.946f;
	iLocal_1390[8] = 510;
	fLocal_873[8] = 31000f;
	fLocal_912[8] = 1f;
	iLocal_2231[8] = joaat("intruder");
	Local_1938[9 /*3*/] = { -1007.464f, -361.0907f, 37.5214f };
	fLocal_717[9] = -0.0193f;
	fLocal_756[9] = 0.011f;
	fLocal_795[9] = 0.9759f;
	fLocal_834[9] = -0.2173f;
	iLocal_1390[9] = 503;
	fLocal_873[9] = 43500f;
	fLocal_912[9] = 1f;
	iLocal_2231[9] = joaat("cruiser");
	Local_1938[10 /*3*/] = { -1007.293f, -357.3345f, 37.5357f };
	fLocal_717[10] = -0.0075f;
	fLocal_756[10] = 0.0251f;
	fLocal_795[10] = 0.972f;
	fLocal_834[10] = -0.2335f;
	iLocal_1390[10] = 502;
	fLocal_873[10] = 44000f;
	fLocal_912[10] = 1f;
	iLocal_2231[10] = joaat("cruiser");
	Local_1938[11 /*3*/] = { -1010.937f, -358.4532f, 37.5252f };
	fLocal_717[11] = -0.0052f;
	fLocal_756[11] = 0.0138f;
	fLocal_795[11] = 0.9724f;
	fLocal_834[11] = -0.233f;
	iLocal_1390[11] = 504;
	fLocal_873[11] = 44100f;
	fLocal_912[11] = 1f;
	iLocal_2231[11] = joaat("cruiser");
	Local_1938[12 /*3*/] = { -1013.893f, -392.8538f, 36.0627f };
	fLocal_717[12] = 0.0589f;
	fLocal_756[12] = -0.0367f;
	fLocal_795[12] = -0.5154f;
	fLocal_834[12] = 0.8542f;
	iLocal_1390[12] = 84;
	fLocal_873[12] = 46000f;
	fLocal_912[12] = 1f;
	iLocal_2231[12] = joaat("manana");
	Local_1938[14 /*3*/] = { -1294.739f, -621.9509f, 26.9939f };
	fLocal_717[14] = 0.0257f;
	fLocal_756[14] = 0.0005f;
	fLocal_795[14] = 0.281f;
	fLocal_834[14] = 0.9594f;
	iLocal_1390[14] = 511;
	fLocal_873[14] = 55000f;
	fLocal_912[14] = 1f;
	iLocal_2231[14] = joaat("benson");
	Local_1938[15 /*3*/] = { -1138.311f, -811.2895f, 15.7751f };
	fLocal_717[15] = 0.0298f;
	fLocal_756[15] = -0.0129f;
	fLocal_795[15] = -0.4436f;
	fLocal_834[15] = 0.8956f;
	iLocal_1390[15] = 992;
	fLocal_873[15] = 67000f;
	fLocal_912[15] = 1f;
	iLocal_2231[15] = joaat("packer");
	Local_1938[16 /*3*/] = { -1163.071f, -741.886f, 19.4365f };
	fLocal_717[16] = -0.002f;
	fLocal_756[16] = -0.0283f;
	fLocal_795[16] = 0.9308f;
	fLocal_834[16] = -0.3644f;
	iLocal_1390[16] = 515;
	fLocal_873[16] = 69000f;
	fLocal_912[16] = 1f;
	iLocal_2231[16] = joaat("burrito3");
	Local_1938[17 /*3*/] = { -1201.002f, -821.8204f, 14.7233f };
	fLocal_717[17] = -0.016f;
	fLocal_756[17] = -0.0359f;
	fLocal_795[17] = 0.8871f;
	fLocal_834[17] = -0.4599f;
	iLocal_1390[17] = 512;
	fLocal_873[17] = 71500f;
	fLocal_912[17] = 1f;
	iLocal_2231[17] = joaat("youga");
	Local_1938[18 /*3*/] = { -1259.113f, -907.3938f, 10.8468f };
	fLocal_717[18] = 0.0139f;
	fLocal_756[18] = -0.0091f;
	fLocal_795[18] = -0.4673f;
	fLocal_834[18] = 0.884f;
	iLocal_1390[18] = 513;
	fLocal_873[18] = 71600f;
	fLocal_912[18] = 1f;
	iLocal_2231[18] = joaat("manana");
	Local_1938[19 /*3*/] = { -960.4544f, -1235.358f, 5.109f };
	fLocal_717[19] = -0.0003f;
	fLocal_756[19] = 0.0005f;
	fLocal_795[19] = -0.5006f;
	fLocal_834[19] = 0.8657f;
	iLocal_1390[19] = 11;
	fLocal_873[19] = 83000f;
	fLocal_912[19] = 1f;
	iLocal_2231[19] = joaat("benson");
	Local_1938[20 /*3*/] = { -1030.321f, -1135.573f, 1.6671f };
	fLocal_717[20] = 0.0094f;
	fLocal_756[20] = -0.0037f;
	fLocal_795[20] = -0.4742f;
	fLocal_834[20] = 0.8804f;
	iLocal_1390[20] = 507;
	fLocal_873[20] = 88000f;
	fLocal_912[20] = 1f;
	iLocal_2231[20] = joaat("intruder");
	Local_1938[21 /*3*/] = { -776.4766f, -1115.119f, 10.0461f };
	fLocal_717[21] = 0.0003f;
	fLocal_756[21] = 0f;
	fLocal_795[21] = 0.8673f;
	fLocal_834[21] = 0.4978f;
	iLocal_1390[21] = 20;
	fLocal_873[21] = 96000f;
	fLocal_912[21] = 1f;
	iLocal_2231[21] = joaat("manana");
	Local_1938[22 /*3*/] = { -729.9686f, -1088.154f, 11.462f };
	fLocal_717[22] = -0.0111f;
	fLocal_756[22] = -0.0437f;
	fLocal_795[22] = 0.8583f;
	fLocal_834[22] = 0.5112f;
	iLocal_1390[22] = 506;
	fLocal_873[22] = 98000f;
	fLocal_912[22] = 1f;
	iLocal_2231[22] = joaat("intruder");
	Local_1938[23 /*3*/] = { -792.2863f, -1091.038f, 10.797f };
	fLocal_717[23] = -0.0186f;
	fLocal_756[23] = -0.0192f;
	fLocal_795[23] = 0.9698f;
	fLocal_834[23] = -0.2422f;
	iLocal_1390[23] = 12;
	fLocal_873[23] = 100700f;
	fLocal_912[23] = 1f;
	iLocal_2231[23] = joaat("benson");
	Local_1938[24 /*3*/] = { -733.6007f, -1164.01f, 9.9703f };
	fLocal_717[24] = -0.0104f;
	fLocal_756[24] = -0.0027f;
	fLocal_795[24] = 0.2836f;
	fLocal_834[24] = 0.9589f;
	iLocal_1390[24] = 17;
	fLocal_873[24] = 101000f;
	fLocal_912[24] = 1f;
	iLocal_2231[24] = joaat("intruder");
	Local_1938[25 /*3*/] = { -799.6644f, -1066.371f, 11.3241f };
	fLocal_717[25] = 0.0092f;
	fLocal_756[25] = -0.0294f;
	fLocal_795[25] = 0.9687f;
	fLocal_834[25] = -0.2464f;
	iLocal_1390[25] = 132;
	fLocal_873[25] = 101500f;
	fLocal_912[25] = 1f;
	iLocal_2231[25] = joaat("manana");
	Local_1938[26 /*3*/] = { -641.2161f, -945.9627f, 21.1608f };
	fLocal_717[26] = -0.0126f;
	fLocal_756[26] = -0.0188f;
	fLocal_795[26] = 0.9977f;
	fLocal_834[26] = 0.064f;
	iLocal_1390[26] = 24;
	fLocal_873[26] = 103000f;
	fLocal_912[26] = 1f;
	iLocal_2231[26] = joaat("manana");
	Local_1938[28 /*3*/] = { -622.8137f, -964.5755f, 20.95f };
	fLocal_717[28] = -0.0052f;
	fLocal_756[28] = -0.0167f;
	fLocal_795[28] = -0.4032f;
	fLocal_834[28] = 0.915f;
	iLocal_1390[28] = 149;
	fLocal_873[28] = 109446f;
	fLocal_912[28] = 1f;
	iLocal_2231[28] = joaat("intruder");
	Local_1938[29 /*3*/] = { -527.2289f, -948.6147f, 22.9859f };
	fLocal_717[29] = 0.0037f;
	fLocal_756[29] = 0.0266f;
	fLocal_795[29] = -0.1871f;
	fLocal_834[29] = 0.982f;
	iLocal_1390[29] = 514;
	fLocal_873[29] = 113000f;
	fLocal_912[29] = 1f;
	iLocal_2231[29] = joaat("manana");
	Local_1938[30 /*3*/] = { -507.5158f, -866.4927f, 29.2588f };
	fLocal_717[30] = -0.0191f;
	fLocal_756[30] = -0.0472f;
	fLocal_795[30] = 0.9921f;
	fLocal_834[30] = 0.1146f;
	iLocal_1390[30] = 22;
	fLocal_873[30] = 114000f;
	fLocal_912[30] = 1f;
	iLocal_2231[30] = joaat("intruder");
	Local_1938[31 /*3*/] = { -510.2627f, -885.1514f, 27.9052f };
	fLocal_717[31] = -0.0331f;
	fLocal_756[31] = -0.0438f;
	fLocal_795[31] = 0.9805f;
	fLocal_834[31] = 0.1885f;
	iLocal_1390[31] = 165;
	fLocal_873[31] = 115000f;
	fLocal_912[31] = 1f;
	iLocal_2231[31] = joaat("intruder");
	Local_1938[32 /*3*/] = { -387.9428f, -838.6669f, 31.4645f };
	fLocal_717[32] = -0.0002f;
	fLocal_756[32] = 0f;
	fLocal_795[32] = 0.6826f;
	fLocal_834[32] = 0.7308f;
	iLocal_1390[32] = 159;
	fLocal_873[32] = 117750f;
	fLocal_912[32] = 0.9f;
	iLocal_2231[32] = joaat("bus");
	Local_1938[33 /*3*/] = { -358.8373f, -747.3198f, 33.7962f };
	fLocal_717[33] = 0.0007f;
	fLocal_756[33] = -0.0008f;
	fLocal_795[33] = 0.7083f;
	fLocal_834[33] = 0.7059f;
	iLocal_1390[33] = 21;
	fLocal_873[33] = 128000f;
	fLocal_912[33] = 1f;
	iLocal_2231[33] = joaat("burrito3");
	Local_1938[34 /*3*/] = { -142.616f, -753.6062f, 33.9993f };
	fLocal_717[34] = 0.0337f;
	fLocal_756[34] = -0.0062f;
	fLocal_795[34] = -0.173f;
	fLocal_834[34] = 0.9843f;
	iLocal_1390[34] = 15;
	fLocal_873[34] = 134600f;
	fLocal_912[34] = 1f;
	iLocal_2231[34] = joaat("benson");
	Local_1938[35 /*3*/] = { -100.8266f, -622.9727f, 35.7906f };
	fLocal_717[35] = -0.0093f;
	fLocal_756[35] = -0.005f;
	fLocal_795[35] = 0.983f;
	fLocal_834[35] = 0.1832f;
	iLocal_1390[35] = 168;
	fLocal_873[35] = 140400f;
	fLocal_912[35] = 1f;
	iLocal_2231[35] = joaat("intruder");
	Local_1892[0 /*3*/] = { -963.3202f, -453.4057f, 36.7332f };
	fLocal_951[0] = 0.033f;
	fLocal_967[0] = -0.0051f;
	fLocal_983[0] = 0.9744f;
	fLocal_999[0] = -0.2222f;
	iLocal_2215[0] = joaat("burrito3");
	Local_1892[1 /*3*/] = { -1116.961f, -779.3914f, 17.4599f };
	fLocal_951[1] = -0.0053f;
	fLocal_967[1] = -0.0372f;
	fLocal_983[1] = 0.5192f;
	fLocal_999[1] = 0.8538f;
	iLocal_2215[1] = joaat("intruder");
	Local_1892[2 /*3*/] = { -1143.354f, -748.5402f, 19.1161f };
	fLocal_951[2] = 0.0336f;
	fLocal_967[2] = 0.01f;
	fLocal_983[2] = -0.5869f;
	fLocal_999[2] = 0.8089f;
	iLocal_2215[2] = joaat("manana");
	Local_1892[3 /*3*/] = { -1129.971f, -755.3607f, 18.938f };
	fLocal_951[3] = 0.0135f;
	fLocal_967[3] = -0.0293f;
	fLocal_983[3] = 0.8093f;
	fLocal_999[3] = 0.5865f;
	iLocal_2215[3] = joaat("intruder");
	Local_1892[4 /*3*/] = { -1329.249f, -396.6274f, 36.1102f };
	fLocal_951[4] = 0f;
	fLocal_967[4] = -0.0024f;
	fLocal_983[4] = 0.9673f;
	fLocal_999[4] = -0.2538f;
	iLocal_2215[4] = joaat("manana");
	Local_1892[5 /*3*/] = { -1341.762f, -403.7986f, 36.0021f };
	fLocal_951[5] = -0.005f;
	fLocal_967[5] = -0.0058f;
	fLocal_983[5] = 0.9646f;
	fLocal_999[5] = -0.2634f;
	iLocal_2215[5] = joaat("intruder");
	Local_1892[6 /*3*/] = { -1322.946f, -383.0046f, 36.1916f };
	fLocal_951[6] = 0.0043f;
	fLocal_967[6] = 0.0031f;
	fLocal_983[6] = -0.4992f;
	fLocal_999[6] = 0.8665f;
	iLocal_2215[6] = joaat("manana");
	Local_1892[7 /*3*/] = { -1838.424f, -510.6184f, 27.6644f };
	fLocal_951[7] = -0.0368f;
	fLocal_967[7] = -0.0152f;
	fLocal_983[7] = 0.8217f;
	fLocal_999[7] = 0.5685f;
	iLocal_2215[7] = joaat("intruder");
	Local_1892[8 /*3*/] = { -1857.226f, -498.4425f, 26.0763f };
	fLocal_951[8] = -0.034f;
	fLocal_967[8] = -0.0146f;
	fLocal_983[8] = 0.8269f;
	fLocal_999[8] = 0.5612f;
	iLocal_2215[8] = joaat("burrito3");
	Local_1892[9 /*3*/] = { -1146.891f, -850.3187f, 14.2053f };
	fLocal_951[9] = 0.0276f;
	fLocal_967[9] = 0.0353f;
	fLocal_983[9] = -0.4192f;
	fLocal_999[9] = 0.9068f;
	iLocal_2215[9] = joaat("packer");
	Local_1892[10 /*3*/] = { -358.9616f, -754.4509f, 33.5192f };
	fLocal_951[10] = 0.0094f;
	fLocal_967[10] = 0.0004f;
	fLocal_983[10] = 0.7147f;
	fLocal_999[10] = -0.6994f;
	iLocal_2215[10] = joaat("intruder");
	Local_1892[11 /*3*/] = { -358.6446f, -768.9286f, 33.5192f };
	fLocal_951[11] = 0.0007f;
	fLocal_967[11] = -0.0093f;
	fLocal_983[11] = 0.7056f;
	fLocal_999[11] = 0.7085f;
	iLocal_2215[11] = joaat("intruder");
	Local_1892[12 /*3*/] = { -342.1623f, -767.6207f, 33.5187f };
	fLocal_951[12] = 0.0006f;
	fLocal_967[12] = -0.0094f;
	fLocal_983[12] = 0.7064f;
	fLocal_999[12] = 0.7078f;
	iLocal_2215[12] = joaat("intruder");
	Local_1892[13 /*3*/] = { -342.2834f, -753.7252f, 33.518f };
	fLocal_951[13] = 0.0093f;
	fLocal_967[13] = 0.0006f;
	fLocal_983[13] = 0.7134f;
	fLocal_999[13] = -0.7007f;
	iLocal_2215[13] = joaat("intruder");
	Local_1892[14 /*3*/] = { -6.5124f, -667.6953f, 31.338f };
	fLocal_951[14] = -0.0001f;
	fLocal_967[14] = 0.0003f;
	fLocal_983[14] = 0.9997f;
	fLocal_999[14] = -0.0264f;
	iLocal_2215[14] = joaat("stockade");
	MISC::SET_BIT(&(iLocal_1272[34]), 3);
}

void func_467(int iParam0, bool bParam1)//Position - 0x3F42E
{
	if (iParam0 > -1 && iParam0 < iLocal_1272)
	{
		if (bParam1)
		{
			MISC::CLEAR_BIT(&(iLocal_1272[iParam0]), 4);
		}
		else
		{
			MISC::SET_BIT(&(iLocal_1272[iParam0]), 4);
		}
	}
}

void func_468(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3F468
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2080, sParam0, 64);
	bLocal_99 = true;
	iLocal_104 = 0;
	iLocal_1523 = 0;
	iLocal_1524 = 0;
	iLocal_1525 = 0;
	iLocal_1526 = iParam1;
	iLocal_1527 = 0;
	iLocal_1528 = 0;
	iLocal_1529 = 0;
	iLocal_1533 = 0;
	iLocal_1536 = 0;
	iLocal_1534 = -1;
	iLocal_1535 = -1;
	iLocal_1537 = 0;
	iLocal_1538 = 0;
	fLocal_1031 = 0f;
	fLocal_1032 = 0f;
	fLocal_1017 = 0f;
	iLocal_105 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2056.x = (Var0.x - 100f);
		Local_2056.f_1 = (Var0.f_1 - 100f);
		Local_2056.f_2 = (Var0.f_2 - 100f);
		Local_2059.x = (Var0.x + 100f);
		Local_2059.f_1 = (Var0.f_1 + 100f);
		Local_2059.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2056, Local_2059, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2096);
	func_455();
	if (bParam3)
	{
		GlobalFunc_9132(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_365();
}

void func_469(bool bParam0)//Position - 0x3F58A
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1886.4f, -584.1f, 5.4f, -1872.8f, -575f, 17.5f, !bParam0, 1);
}

int func_470()//Position - 0x3F5B8
{
	if (iLocal_2644 == 1)
	{
		iLocal_2648 = 5;
	}
	else
	{
		iLocal_2648 = 5;
	}
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_2648, sLocal_2783);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_2648, sLocal_2783))
	{
		return 1;
	}
	return 0;
}

void func_471()//Position - 0x3F5EE
{
	char cVar0[64];
	float fVar16;
	float fVar17;
	bool bVar18;
	bool bVar19;
	float fVar20;
	
	RECORDING::_0x208784099002BC30("M_FranklinAndLamar", 0);
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (bLocal_2534)
			{
				GlobalFunc_5116(Local_2759, fLocal_2634, 0, 0);
				iLocal_2642 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2759, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				STREAMING::LOAD_SCENE(Local_2759);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_2642 = 99;
			}
		}
		else if ((func_225(Local_2756, 0, 0) && func_311(Local_3077[0 /*7*/].f_2, Local_3077[0 /*7*/].f_5)) && func_310(Local_3077[1 /*7*/].f_2, Local_3077[1 /*7*/].f_5))
		{
			func_314();
			GlobalFunc_5108(0, -1, 0);
			func_337();
			func_469(1);
			PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
			bLocal_2527 = false;
			bLocal_2532 = false;
			iLocal_3165 = 0;
		}
	}
	if (iLocal_3165 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3077[0 /*7*/].f_6, sLocal_2783);
		VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3077[1 /*7*/].f_6, sLocal_2783);
		STREAMING::REQUEST_ANIM_DICT(sLocal_2787);
		STREAMING::REQUEST_MODEL(iLocal_2950);
		if (((((func_470() && ((iLocal_2643 == 0 && AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0)) || (iLocal_2643 == 1 && AUDIO::LOAD_STREAM("ARM_1_IG_2_LAMAR_DRIVES_OFF_ALT", 0)))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3077[0 /*7*/].f_6, sLocal_2783)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_3077[1 /*7*/].f_6, sLocal_2783)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2787)) && STREAMING::HAS_MODEL_LOADED(iLocal_2950))
		{
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_233();
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
			func_468(sLocal_2783, iLocal_2648, 0, 1);
			func_466();
			fLocal_2627 = 0f;
			func_465(1);
			func_464(joaat("a_m_m_bevhills_02"));
			iLocal_111 = 1;
			bLocal_117 = true;
			fLocal_1027 = 200f;
			iLocal_1534 = iLocal_1390[15];
			GlobalFunc_4956();
			iLocal_2844 = PED::CREATE_PED(26, iLocal_2950, -1886.833f, -579.0045f, 10.8163f, 315.0557f, 1, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2844, 8, 1, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_2844, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2950);
			StringCopy(&cVar0, "", 64);
			bLocal_2529 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Local_3077[iLocal_2643 /*7*/], 1);
			}
			SYSTEM::WAIT(0);
			if (iLocal_2644 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0) && !PED::IS_PED_INJURED(Local_2966))
				{
					TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_2966, 1);
					uLocal_2709 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2644 /*7*/], uLocal_2709, "carrace_walktocar_ninef2_car_ninef2", sLocal_2787, 1000f, -1000f, 0, 1148846080);
					Local_2966.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2966);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2787, "carrace_walktocar_ninef2_lamar", 1000f, -1000f, 4, 0, 1148846080, 0);
					fVar16 = SYSTEM::VDIST2(-1883.3f, -576.7f, 11.2f, ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], 1));
					fVar17 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2966, 1), ENTITY::GET_ENTITY_COORDS(Local_3077[iLocal_2644 /*7*/], 1));
					if ((fVar16 - fVar17) < 4f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.02f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_2709, 0.02f);
					}
					else if ((fVar16 - fVar17) < 9f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.07f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.07f);
					}
					else if ((fVar16 - fVar17) < 16f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.09f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.09f);
					}
					else if ((fVar16 - fVar17) < 25f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.11f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.11f);
					}
					else
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.13f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.13f);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2966, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3077[iLocal_2644 /*7*/]);
					StringCopy(&cVar0, "carrace_walktocar_ninef2_cam", 64);
				}
			}
			else if (iLocal_2644 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0) && !PED::IS_PED_INJURED(Local_2966))
				{
					iLocal_2709 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					ENTITY::FREEZE_ENTITY_POSITION(Local_3077[iLocal_2644 /*7*/], 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2644 /*7*/], iLocal_2709, "carrace_walktocar_rapidgt_car_rapidgt2", sLocal_2787, 1000f, -1000f, 0, 1148846080);
					bVar18 = PED::IS_PED_IN_VEHICLE(Local_2966, Local_3077[1 /*7*/], 0);
					bVar19 = false;
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2966);
					Local_2966.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_2966, Local_2966.f_4, sLocal_2787, "carrace_walktocar_rapidgt_lamar", 1000f, -1000f, 4, 0, 1148846080, 0);
					if (bLocal_2532 || bVar18)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3077[1 /*7*/], 0) > 0.3f)
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.14f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.14f);
						}
						else if (bVar18)
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.25f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.25f);
						}
						else
						{
							PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.14f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.14f);
						}
						bVar19 = true;
					}
					else if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3077[1 /*7*/], 0) > 0f)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.14f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.14f);
						bVar19 = true;
					}
					else if (bLocal_2527)
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.08f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.08f);
					}
					else
					{
						PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4, 0.03f);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, 0.03f);
					}
					if (bVar19)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3077[iLocal_2643 /*7*/], 0, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3077[iLocal_2643 /*7*/], 1, 1);
						}
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2966, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3077[iLocal_2644 /*7*/]);
					StringCopy(&cVar0, "carrace_walktocar_rapidgt_cam", 64);
				}
			}
			uLocal_2884 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			if (iLocal_2643 == 0)
			{
				iLocal_2678 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
			}
			else
			{
				iLocal_2678 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_2884, iLocal_2678, &cVar0, sLocal_2787);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2678, PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_2966.f_4));
			GlobalFunc_2214();
			MISC::CLEAR_AREA_OF_OBJECTS(-1878.621f, -577.6438f, 10.7868f, 100f, 0);
			MISC::CLEAR_AREA_OF_PEDS(-1878.621f, -577.6438f, 10.7868f, 100f, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-1878.621f, -577.6438f, 10.7868f, 100f, 0);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1886.994f, -585.902f, 6.540985f, -1852.677f, -542.4524f, 20.40304f, 22.25f, 0, 0, 0, 0, 0);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1865.273f, -558.1036f, 10.63799f, -1879.193f, -575.1031f, 15.43019f, 16.75f, 0, 0, 0, 0, 0);
			VEHICLE::_0x9A75585FB2E54FAD(-1910.6f, -531.3f, 11.2f, 30f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[0 /*7*/], Local_3077[0 /*7*/].f_5);
				ENTITY::SET_ENTITY_COORDS(Local_3077[0 /*7*/], Local_3077[0 /*7*/].f_2, 1, 0, 0, 1);
				if (iLocal_2643 == 0)
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[0 /*7*/], 0, 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
			{
				ENTITY::SET_ENTITY_HEADING(Local_3077[1 /*7*/], Local_3077[1 /*7*/].f_5);
				ENTITY::SET_ENTITY_COORDS(Local_3077[1 /*7*/], Local_3077[1 /*7*/].f_2, 1, 0, 0, 1);
				if (iLocal_2643 == 1)
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[1 /*7*/], 0, 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_3077[iLocal_2644 /*7*/], 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_CHOOSE_CAR"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_1_CHOOSE_CAR");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GET_IN_CAR_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_GET_IN_CAR_SCENE");
			}
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2966, -1, 2048, 2);
			}
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
			STREAMING::REMOVE_ANIM_DICT(sLocal_2791);
			GlobalFunc_8316(1, 1, 1, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			GlobalFunc_2204();
			if (iLocal_2644 == 0)
			{
				GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_CHOICE2", 7, 0, 0, 0);
			}
			else if (!bLocal_2532)
			{
				GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_CHOICE", 7, 0, 0, 0);
			}
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_2543 = 0;
			iLocal_2642 = 0;
			iLocal_3165 = 1;
		}
	}
	if (iLocal_3165 == 1)
	{
		func_463(5000f, 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", 0);
		fVar20 = 0f;
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2678))
		{
			fVar20 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2678);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
		{
			if (((iLocal_2644 == 1 && fVar20 > 0.19f) && fVar20 < 0.39f) || ((iLocal_2644 == 0 && fVar20 > 0.09f) && fVar20 < 0.3f))
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3077[iLocal_2643 /*7*/], 0) < 0.01f)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3077[iLocal_2643 /*7*/], 0, 1);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3077[iLocal_2643 /*7*/], 0, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3077[iLocal_2643 /*7*/], 0) * 0.9f));
				}
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3077[iLocal_2643 /*7*/], 1) < 0.01f)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3077[iLocal_2643 /*7*/], 1, 1);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_3077[iLocal_2643 /*7*/], 1, 0, (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_3077[iLocal_2643 /*7*/], 1) * 0.9f));
				}
			}
		}
		switch (iLocal_2642)
		{
			case 0:
				if (iLocal_2643 == 0)
				{
					AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0);
				}
				else
				{
					AUDIO::LOAD_STREAM("ARM_1_IG_2_LAMAR_DRIVES_OFF_ALT", 0);
				}
				if ((iLocal_2644 == 0 && fVar20 > 0.23f) || (iLocal_2644 == 1 && fVar20 > 0.25f))
				{
					iLocal_2677 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (iLocal_2644 == 0)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2787, "carrace_walktocar_ninef2_franklin", 1000f, -1000f, 4, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2643 /*7*/], iLocal_2709, "carrace_walktocar_ninef2_car_rapidgt2", sLocal_2787, 1000f, -1000f, 0, 1148846080);
					}
					else if (iLocal_2644 == 1)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_2677, sLocal_2787, "carrace_walktocar_rapidgt_franklin", 1000f, -1000f, 4, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2643 /*7*/], iLocal_2709, "carrace_walktocar_rapidgt_car_ninef2", sLocal_2787, 1000f, -1000f, 0, 1148846080);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						VEHICLE::ROLL_DOWN_WINDOWS(Local_3077[iLocal_2643 /*7*/]);
					}
					AUDIO::PLAY_STREAM_FRONTEND();
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2677, fVar20);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 1:
				if ((iLocal_2644 == 0 && fVar20 > 0.25f) || (iLocal_2644 == 1 && fVar20 > 0.24f))
				{
					VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[iLocal_2643 /*7*/], 0);
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 2:
				if ((iLocal_2644 == 0 && fVar20 > 0.272f) || (iLocal_2644 == 1 && fVar20 > 0.24f))
				{
					if (!iLocal_2546[10])
					{
						if ((iLocal_2644 == 0 && GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_RACE2", 7, 0, 0, 0, 0)) || (iLocal_2644 == 1 && GlobalFunc_10691(&Local_3168, "ARM1AUD", "ARM1_RACE", 7, 0, 0, 0, 0)))
						{
							iLocal_2546[10] = 1;
						}
						else
						{
							GlobalFunc_5105();
						}
					}
				}
				if ((iLocal_2644 == 0 && fVar20 > 0.32f) || (iLocal_2644 == 1 && fVar20 > 0.3f))
				{
					if (iLocal_2644 == 0)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[iLocal_2644 /*7*/], 0);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 3:
				if ((iLocal_2644 == 0 && fVar20 > 0.33f) || (iLocal_2644 == 1 && fVar20 > 0.34f))
				{
					if ((iLocal_2644 == 0 && GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_RACE2", 7, 0, 0, 0)) || (iLocal_2644 == 1 && GlobalFunc_10626(&Local_3168, "ARM1AUD", "ARM1_RACE", "ARM1_RACE_3", 7, 0, 0)))
					{
						iLocal_2546[9] = 1;
						SYSTEM::SETTIMERB(0);
						iLocal_2642++;
					}
					else
					{
						GlobalFunc_5105();
					}
				}
				break;
			
			case 4:
				if ((iLocal_2644 == 0 && fVar20 > 0.39f) || (iLocal_2644 == 1 && fVar20 > 0.39f))
				{
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1865.273f, -558.1036f, 10.63799f, -1879.193f, -575.1031f, 15.43019f, 16.75f, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					if (iLocal_2644 == 1)
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[iLocal_2644 /*7*/], 0);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 5:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!iLocal_2546[11])
				{
					if (SYSTEM::TIMERB() > 1500)
					{
						GlobalFunc_159("AR1_CONVHELP", 9000);
						iLocal_2546[11] = 1;
					}
				}
				if ((iLocal_2644 == 0 && fVar20 > 0.65f) || (iLocal_2644 == 1 && fVar20 > 0.65f))
				{
					if (iLocal_2644 == 0)
					{
						iLocal_2709 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.85f, 1f, 0f, 139.04f, 2);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2644 /*7*/], iLocal_2709, "carrace_walktocar_ninef2_car_ninef2", sLocal_2787, 1000f, -1000f, 0, 1148846080);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, fVar20);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3077[iLocal_2644 /*7*/]);
					}
					else
					{
						iLocal_2709 = PED::CREATE_SYNCHRONIZED_SCENE(-1883.15f, -579.6f, 10.8f, 1f, 0f, 139.04f, 2);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2644 /*7*/], iLocal_2709, "carrace_walktocar_rapidgt_car_rapidgt2", sLocal_2787, 1000f, -1000f, 0, 1148846080);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2709, fVar20);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3077[iLocal_2644 /*7*/]);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 6:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!iLocal_2546[11])
				{
					GlobalFunc_159("AR1_CONVHELP", 9000);
					iLocal_2546[11] = 1;
				}
				if ((iLocal_2644 == 0 && fVar20 > 0.87f) || (iLocal_2644 == 1 && fVar20 > 0.95f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3077[iLocal_2643 /*7*/], 1, 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_2642++;
				}
				break;
			
			case 7:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!iLocal_2543)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
					{
						if ((iLocal_2644 == 0 && SYSTEM::TIMERB() > 2560) || (iLocal_2644 == 1 && SYSTEM::TIMERB() > 350))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_2543 = 1;
						}
					}
				}
				if ((iLocal_2644 == 0 && fVar20 > 0.99f) || (iLocal_2644 == 1 && fVar20 > 0.99f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
					{
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[iLocal_2644 /*7*/], 1);
						if (!PED::IS_PED_INJURED(Local_2966))
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_2966, -8f, 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2966);
							PED::SET_PED_INTO_VEHICLE(Local_2966, Local_3077[iLocal_2644 /*7*/], -1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2966, 0, 0);
						}
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2644 /*7*/], 0))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2644 /*7*/], -1000f, 1);
						VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3077[iLocal_2644 /*7*/], 1);
						VEHICLE::SET_VEHICLE_FIXED(Local_3077[iLocal_2644 /*7*/]);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2644 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/]);
							VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3077[iLocal_2644 /*7*/].f_6, sLocal_2783);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2644 /*7*/], iLocal_2648, sLocal_2783, 1);
						GlobalFunc_2208(&(Local_3077[iLocal_2644 /*7*/]), 2000f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3077[iLocal_2644 /*7*/], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3077[iLocal_2643 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3077[iLocal_2643 /*7*/]);
						}
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3077[iLocal_2643 /*7*/], 1);
						if (iLocal_2643 == 1)
						{
							ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 321.0557f);
							ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], -1880.045f, -577.4576f, 10.7658f, 1, 0, 0, 1);
						}
						else
						{
							ENTITY::SET_ENTITY_HEADING(Local_3077[iLocal_2643 /*7*/], 320.1515f);
							ENTITY::SET_ENTITY_COORDS(Local_3077[iLocal_2643 /*7*/], -1878.438f, -579.7686f, 10.7883f, 1, 0, 0, 1);
						}
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_3077[iLocal_2643 /*7*/], -1000f, 1);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -1000f, 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[iLocal_2643 /*7*/], -1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2844))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_2844, 1);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_2844, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					func_455();
					MISC::CLEAR_AREA_OF_VEHICLES(-1883.705f, -578.8252f, 11.33023f, 500f, 0, 0, 0, 0, 0);
					func_457();
					func_456();
					func_430(Local_3077[iLocal_2644 /*7*/], 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					iLocal_3165 = 2;
				}
				break;
		}
		if (GlobalFunc_4926(1000))
		{
			iLocal_3165 = 3;
		}
	}
	if (iLocal_3165 == 2)
	{
		GlobalFunc_5105();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_2966);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_2787);
		VEHICLE::_0x0A436B8643716D14();
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 3;
	}
	if (iLocal_3165 == 3)
	{
		func_789(3, 1);
	}
}


void func_473()//Position - 0x409AD
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	
	if (iLocal_3165 == 4)
	{
		if (iLocal_2642 != 99)
		{
			if (bLocal_2534)
			{
				GlobalFunc_5116(Local_2759, fLocal_2634, 0, 0);
				iLocal_2642 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2759, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2634);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				func_474(-1902.568f, -598.1853f, 12.7282f, GlobalFunc_590(-3f, 0f, -43.2776f), 130f, 0, 10000);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				iLocal_2642 = 99;
			}
		}
		else if ((func_225(Local_2756, fLocal_2633, 0) && func_311(Local_3077[0 /*7*/].f_2, Local_3077[0 /*7*/].f_5)) && func_310(Local_3077[1 /*7*/].f_2, Local_3077[1 /*7*/].f_5))
		{
			GlobalFunc_5108(0, -1, 0);
			MISC::CLEAR_AREA(Local_3077[0 /*7*/].f_2, 100f, 1, 0, 0, 0);
			PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-1889.1f, -586f, 12.5f, 3f, 3);
			iLocal_3165 = 0;
		}
	}
	if (iLocal_3165 == 0)
	{
		iLocal_2688 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1900.789f, -595.2253f, 11.0273f, 2f, 2f, 3f, 139.6549f, 0, 7);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_CHOOSE_CAR"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_CHOOSE_CAR");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (iLocal_2642 != 99)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2759, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2634);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				func_474(-1902.568f, -598.1853f, 12.7282f, GlobalFunc_590(-3f, 0f, -43.2776f), 130f, 0, 10000);
			}
			SYSTEM::WAIT(0);
			while ((!func_311(Local_3077[0 /*7*/].f_2, Local_3077[0 /*7*/].f_5) || !func_310(Local_3077[1 /*7*/].f_2, Local_3077[1 /*7*/].f_5)) || !func_225(-1883.565f, -575.7982f, 10.7861f, 251.8757f, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_3077[0 /*7*/], Local_3077[0 /*7*/].f_2, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_3077[0 /*7*/], Local_3077[0 /*7*/].f_5);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[0 /*7*/]);
			}
			STREAMING::REQUEST_ANIM_DICT(sLocal_2792);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2792))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_2966) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam", 3))
			{
				ENTITY::SET_ENTITY_COORDS(Local_2966, Local_2756, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_2966, fLocal_2633);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_2966, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2966, 1);
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam", -1900.33f, -595.638f, 12.233f, 0f, 0f, 48f, 1000f, -1.5f, -1, 790530, 0.462f, 2, 0);
				TASK::TASK_PLAY_ANIM(Local_2966, sLocal_2792, "ARM1_INT_leadout_gatewalk_lam_facial", 1000f, -4f, -1, 32, 0.462f, 0, 0, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_2966, 144);
				Local_2966.f_2 = 0;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1901.163f, -594.9855f, 11.6781f, 2f, joaat("prop_burto_gate_01"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_burto_gate_01"), -1901.163f, -594.9855f, 11.6781f, 1, 0f, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2759, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2634);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SYSTEM::WAIT(0);
		}
		PED::SET_PED_NON_CREATION_AREA(-1894.984f, -583.5402f, 0f, -1865.476f, -563.2835f, 18.1544f);
		GlobalFunc_173(&Local_3168, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		func_469(1);
		GlobalFunc_2204();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[0 /*7*/], 1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_3077[1 /*7*/], -1880.751f, -577.1409f, 10.769f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_3077[1 /*7*/], Local_3077[1 /*7*/].f_5);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3077[1 /*7*/]);
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[1 /*7*/], 1);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::FREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::SET_RADIO_AUTO_UNFREEZE(0);
		AUDIO::SET_RADIO_TRACK("RADIO_03_HIPHOP_NEW", "ARM1_RADIO_STARTS");
		GlobalFunc_563(1);
		iLocal_2670 = MISC::GET_GAME_TIMER();
		iLocal_2671 = 0;
		iLocal_2715 = 0;
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			PED::SET_PED_CONFIG_FLAG(Local_2966, 118, 0);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 208, 1);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 185, 1);
		}
		iLocal_2673 = 0;
		iLocal_2706 = 0;
		bLocal_2532 = false;
		bLocal_2527 = false;
		iLocal_2518 = 0;
		iLocal_2512 = 0;
		iLocal_2642 = 0;
		iLocal_3165 = 1;
	}
	if (iLocal_3165 == 1)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_2794);
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_2795);
		GlobalFunc_7629();
		if (!iLocal_2546[3])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1900.441f, -595.7698f, 10.6467f, -1884.65f, -576.9808f, 13.57164f, 7.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1886.852f, -594.8099f, 10.66331f, -1895.973f, -587.2581f, 13.38695f, 18.75f, 0, 1, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
		}
		if (CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1877.904f, -574.5812f, 10.63396f, -1897.585f, -598.0198f, 14.40688f, 12f, 0, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1873.637f, -578.7437f, 10.62791f, -1877.222f, -582.7633f, 20.0994f, 2.5f, 0, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		}
		if (!iLocal_2518 && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_2794))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_2794, 1, 1065353216, 1056964608);
			iLocal_2518 = 1;
		}
		if (!iLocal_2546[41])
		{
			if (!GlobalFunc_485(138))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("CMN_FPSHELP", 10000);
					iLocal_2546[41] = 1;
				}
			}
			else
			{
				iLocal_2546[41] = 1;
			}
		}
		else if (GlobalFunc_485(138) && GlobalFunc_74("CMN_FPSHELP"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[1 /*7*/], 0))
		{
			switch (iLocal_2642)
			{
				case 0:
					if (!iLocal_2546[1])
					{
						if (!GlobalFunc_5172(&Local_3094, 2))
						{
							iLocal_2546[1] = 1;
						}
					}
					if (!HUD::DOES_BLIP_EXIST(Local_2966.f_1))
					{
						func_233();
						Local_2966.f_1 = GlobalFunc_6783(Local_2966, 0, 0);
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1)) > 900f)
					{
						if (!iLocal_2546[2])
						{
							GlobalFunc_164("AR1_WAIT", 7500, 0);
							iLocal_2546[2] = 1;
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1885.959f, -578.54f, 10.84805f, -1886.865f, -579.6785f, 13.60168f, 4.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.454f, -580.2959f, 16.11872f, -1878.338f, -575.3038f, 5.633518f, 11.5f, 0, 1, 0))
					{
						iLocal_2642++;
					}
					break;
				
				case 1:
					if (!iLocal_2546[3])
					{
						if (iLocal_2546[8])
						{
							if (!GlobalFunc_5172(&Local_3094, 2))
							{
								GlobalFunc_164("AR1_CHOOSE", 7500, 0);
								iLocal_2715 = MISC::GET_GAME_TIMER();
								iLocal_2546[3] = 1;
							}
						}
					}
					else if (!iLocal_2546[4])
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2715) > 5000)
						{
							GlobalFunc_159("AR1_CARHELP", -1);
							iLocal_2546[4] = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_2966))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1)) > 1600f)
						{
							if (!HUD::DOES_BLIP_EXIST(Local_2966.f_1))
							{
								func_233();
								Local_2966.f_1 = GlobalFunc_6783(Local_2966, 0, 0);
							}
							if (!iLocal_2546[2])
							{
								GlobalFunc_164("AR1_WAIT", 7500, 0);
								iLocal_2546[2] = 1;
							}
						}
						else
						{
							if (!HUD::DOES_BLIP_EXIST(Local_3077[0 /*7*/].f_1))
							{
								if (!GlobalFunc_663("AR1_CHOOSE", 0, 0) && iLocal_2546[3])
								{
									HUD::CLEAR_PRINTS();
								}
								func_233();
								Local_3077[0 /*7*/].f_1 = GlobalFunc_6783(Local_3077[0 /*7*/], 0, 0);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_3077[1 /*7*/].f_1))
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_2966, Local_3077[1 /*7*/], 0))
								{
									Local_3077[1 /*7*/].f_1 = GlobalFunc_6783(Local_3077[1 /*7*/], 0, 0);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(Local_2966, Local_3077[1 /*7*/], 0))
							{
								HUD::REMOVE_BLIP(&(Local_3077[1 /*7*/].f_1));
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (iVar0 == Local_3077[0 /*7*/] || iVar0 == Local_3077[1 /*7*/])
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (ENTITY::IS_ENTITY_STATIC(iVar0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
					}
				}
				if (GlobalFunc_74("AR1_CARHELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (iVar0 == Local_3077[0 /*7*/])
				{
					iLocal_2643 = 0;
					iLocal_2644 = 1;
					if ((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 0) > 0.1f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 1) > 0.1f) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0);
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_3165 = 2;
						}
					}
				}
				else if (iVar0 == Local_3077[1 /*7*/])
				{
					iLocal_2643 = 1;
					iLocal_2644 = 0;
					if ((VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 0) > 0.1f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iVar0, 1) > 0.1f) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						AUDIO::LOAD_STREAM("ARM_1_IG_2_LAMAR_DRIVES_OFF_ALT", 0);
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							iLocal_3165 = 2;
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && iLocal_2512)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && !(iVar0 == Local_3077[0 /*7*/] || iVar0 == Local_3077[1 /*7*/])) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1877.3f, -582.2f, 11.4f) < 1.7f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1877.3f, -582.2f, 11.4f) < 1.7f && iVar0 != 0)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_2512 = 0;
				}
			}
			if ((iVar0 == Local_3077[0 /*7*/] || iVar0 == Local_3077[1 /*7*/]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1877.5f, -582f, 11.3f) > 2f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
				iLocal_2512 = 1;
			}
			if (!PED::IS_PED_INJURED(Local_2966))
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_2792);
				STREAMING::REQUEST_ANIM_DICT(sLocal_2791);
				fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1));
				if (!bLocal_2527)
				{
					if (iVar0 == Local_3077[0 /*7*/] || ((iVar0 == Local_3077[1 /*7*/] && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar0, 1)) < 4f) && !bLocal_2532))
					{
						if (iLocal_2706 == 0)
						{
							iLocal_2706 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_2706) > 200)
						{
							if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
							{
								if (iVar0 == Local_3077[1 /*7*/])
								{
									if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_2795))
									{
										TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_2795, &iVar2);
										TASK::OPEN_SEQUENCE_TASK(&uVar3);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_2795, 0, 2, (iVar2 - 2));
										TASK::TASK_ENTER_VEHICLE(0, Local_3077[0 /*7*/], -1, -1, 1f, 1, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar3);
										TASK::TASK_PERFORM_SEQUENCE(Local_2966, uVar3);
										TASK::CLEAR_SEQUENCE_TASK(&uVar3);
									}
								}
								else
								{
									ENTITY::FREEZE_ENTITY_POSITION(Local_3077[1 /*7*/], 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2966, 0))
									{
										TASK::TASK_ENTER_VEHICLE(Local_2966, Local_3077[1 /*7*/], -1, -1, 1f, 1, 0);
									}
								}
								bLocal_2527 = true;
							}
						}
					}
				}
				if (!bLocal_2532)
				{
					if (((iVar0 == 0 && Local_2966.f_2 > 0) && !bLocal_2527) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.789f, -577.9081f, 10.75321f, -1879.882f, -579.3406f, 12.55453f, 1f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.007f, -577.8416f, 10.66559f, -1879.743f, -582.3688f, 12.60418f, 2f, 0, 1, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_3077[1 /*7*/], 0);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3077[1 /*7*/], 0);
							TASK::TASK_ENTER_VEHICLE(Local_2966, Local_3077[1 /*7*/], -1, -1, 1f, 1, 0);
							AUDIO::LOAD_STREAM("ARM_1_IG_1_LAMAR_DRIVES_OFF", 0);
							bLocal_2532 = true;
						}
					}
				}
				else if (!iLocal_2546[74] && !GlobalFunc_5172(&Local_3094, 1))
				{
					if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_CHOICE", 7, 0, 0, 0))
					{
						iLocal_2546[74] = 1;
					}
				}
				switch (Local_2966.f_2)
				{
					case 0:
						if (fVar1 < 400f && !GlobalFunc_5172(&Local_3094, 1))
						{
							if (!iLocal_2546[5])
							{
								if (GlobalFunc_10630(&Local_3168, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_1", 7, 0, 0))
								{
									iLocal_2546[5] = 1;
								}
							}
							else if (!iLocal_2546[6])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2966, -1885.659f, -577.9509f, 10.84654f, -1887.837f, -580.5494f, 14.10414f, 4.75f, 0, 1, 0))
								{
									if (GlobalFunc_10630(&Local_3168, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_3", 7, 0, 0))
									{
										iLocal_2546[6] = 1;
									}
								}
							}
							else if (!iLocal_2546[7])
							{
								if (GlobalFunc_10630(&Local_3168, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_4", 7, 0, 0))
								{
									iLocal_2546[7] = 1;
								}
							}
						}
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam") >= 0.99f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam", 3))
						{
							Local_2966.f_2++;
						}
						break;
					
					case 1:
						if ((((iLocal_2642 > 0 && !bLocal_2532) && !iLocal_2546[8]) && !GlobalFunc_5172(&Local_3094, 1)) && !(iVar0 == Local_3077[0 /*7*/] || iVar0 == Local_3077[1 /*7*/]))
						{
							if (GlobalFunc_10630(&Local_3168, "ARM1AUD", "ARM1_INTP6", "ARM1_INTP6_5", 7, 0, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar4);
								TASK::TASK_PLAY_ANIM(0, sLocal_2792, "arm1_int_leadout_action_lam", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, sLocal_2792, "arm1_int_leadout_loop_2_lam", 4f, -4f, -1, 262144, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, sLocal_2792, "arm1_int_leadout_loop_lam", 4f, -4f, -1, 262145, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar4);
								TASK::TASK_PERFORM_SEQUENCE(Local_2966, uVar4);
								TASK::CLEAR_SEQUENCE_TASK(&uVar4);
								iLocal_2546[8] = 1;
								iLocal_2671 = 0;
								iLocal_2670 = MISC::GET_GAME_TIMER();
							}
						}
						if (iVar0 != Local_3077[0 /*7*/] && iVar0 != Local_3077[1 /*7*/])
						{
							if (((((!GlobalFunc_5172(&Local_3094, 0) && iLocal_2546[8]) && iLocal_2671 < 4) && !bLocal_2532) && (MISC::GET_GAME_TIMER() - iLocal_2670) > 15000) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_2966, 1)) < 400f)
							{
								if (GlobalFunc_10618(&Local_3168, "ARM1AUD", "ARM1_HURRY", 7, 0, 0, 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_2966, PLAYER::PLAYER_PED_ID(), 3000, 13, 2);
									if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2791) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.812f, -577.2666f, 10.82397f, -1899.143f, -595.4661f, 13.87323f, 5f, 0, 1, 0))
									{
										iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										TASK::OPEN_SEQUENCE_TASK(&uVar6);
										if (iVar5 == 0)
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_2791, "lamar_idle_01", 1.5f, 1.5f, -1, 262144, 0, 0, 0, 0);
										}
										else if (iVar5 == 1)
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_2791, "lamar_idle_02", 1.5f, 1.5f, -1, 262144, 0, 0, 0, 0);
										}
										else
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_2791, "lamar_idle_03", 1.5f, 1.5f, -1, 262144, 0, 0, 0, 0);
										}
										TASK::TASK_PLAY_ANIM(0, sLocal_2792, "arm1_int_leadout_loop_lam", 1.5f, 1.5f, -1, 262145, 0, 0, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uVar6);
										TASK::TASK_PERFORM_SEQUENCE(Local_2966, uVar6);
										TASK::CLEAR_SEQUENCE_TASK(&uVar6);
									}
									iLocal_2671++;
									iLocal_2670 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 3000));
								}
							}
							if (!bLocal_2527 && !bLocal_2532)
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2966, 1), Local_2762) > 3f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_2966, 713668775) != 1 && !MISC::IS_POSITION_OCCUPIED(Local_2762, 0.5f, 0, 1, 0, 0, 0, Local_3077[1 /*7*/], 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_2966, Local_2762, 1f, 20000, 0.5f, 0, fLocal_2635);
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2792) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2791))
								{
									if (((((((!TASK::IS_PED_WALKING(Local_2966) && !PED::IS_PED_RAGDOLL(Local_2966)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_loop_lam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_action_lam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_loop_2_lam", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2791, "lamar_idle_01", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2791, "lamar_idle_02", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2791, "lamar_idle_03", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_loop_lam", 4f, -4f, -1, 262145, 0, 0, 0, 0);
									}
								}
							}
						}
						break;
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_2966, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 4900f)
				{
					func_744(9);
				}
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3077[0 /*7*/].f_6, sLocal_2783);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_3077[1 /*7*/].f_6, sLocal_2783);
			STREAMING::REQUEST_ANIM_DICT(sLocal_2787);
			STREAMING::REQUEST_MODEL(iLocal_2950);
			if (iLocal_2672 == 0)
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[0 /*7*/], joaat("weapon_unarmed"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[1 /*7*/], joaat("weapon_unarmed"), 0))
				{
					iLocal_2673++;
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3077[0 /*7*/]);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3077[1 /*7*/]);
				}
				if (((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[0 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[0 /*7*/], joaat("weapon_unarmed"), 0)) || (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[1 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3077[1 /*7*/], joaat("weapon_unarmed"), 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_3077[0 /*7*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_3077[1 /*7*/])) || iLocal_2673 > 3)
				{
					iLocal_2672 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_2672) > 750)
			{
				func_744(11);
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_744(10);
			}
		}
	}
	if (iLocal_3165 == 2)
	{
		RECORDING::_0x293220DA1B46CEBC(3f, 0f, 4);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
		Global_86801 = iLocal_2643;
		if (iLocal_2643 == 0)
		{
			GlobalFunc_553(1);
		}
		if (!PED::IS_PED_INJURED(Local_2966))
		{
			PED::SET_PED_CONFIG_FLAG(Local_2966, 118, 1);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 208, 0);
			PED::SET_PED_CONFIG_FLAG(Local_2966, 185, 0);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_2966, 144);
			TASK::TASK_CLEAR_LOOK_AT(Local_2966);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_2792);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_2794);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_2795);
		if (iLocal_2688 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2688);
			iLocal_2688 = -1;
		}
		func_299();
		GlobalFunc_563(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 2;
	}
	if (iLocal_3165 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[0 /*7*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[0 /*7*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3077[0 /*7*/], -1);
			}
		}
		iLocal_3165 = 1;
	}
}

void func_474(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, int iParam8)//Position - 0x41E2A
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	while ((MISC::GET_GAME_TIMER() - iVar0) < iParam8)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START(Param0, Param3, fParam6, iParam7);
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			iVar0 = 0;
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_475()//Position - 0x41E76
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iLocal_3165 == 4)
	{
		iLocal_3165 = 0;
	}
	if (iLocal_3165 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		GlobalFunc_2195();
		SYSTEM::SETTIMERA(0);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
		iLocal_2537 = 0;
		if (GlobalFunc_8315() != 1)
		{
			while (!func_497(1, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1907.35f, -577.2352f, 19.1223f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 136.9707f);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("clear");
		CUTSCENE::REQUEST_CUTSCENE(sLocal_2784, 8);
		STREAMING::_0xBEB2D9A1D9A8F55A(9, 9, 9, 9);
		while (SYSTEM::TIMERA() < 10000)
		{
			if (func_496())
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1907.4f, -577.8f, 18.8f, 10f, 0);
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::SETTIMERA(100000);
				}
			}
			func_98(sLocal_2784);
			SYSTEM::WAIT(0);
		}
		func_98(sLocal_2784);
		while (!CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_98(sLocal_2784);
			SYSTEM::WAIT(0);
		}
		while ((!MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 1) && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) && !GlobalFunc_Is_Mission_Retry())
		{
			SYSTEM::WAIT(0);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		if (!GlobalFunc_Is_Mission_Retry() && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			GlobalFunc_2225();
		}
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2966, "Lamar", 2, GlobalFunc_4946(19), 0);
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 1, 0, 0, 0);
		GlobalFunc_8316(1, 1, 1, 0);
		GlobalFunc_9132(1);
		func_494(1);
		CUTSCENE::START_CUTSCENE(0);
		STREAMING::_0xF8155A7F03DDFC8E(1);
		SYSTEM::WAIT(50);
		PED::GET_CLOSEST_PED(-1907.4f, -577.5f, 19.2f, 5f, 0, 1, &iVar0, 1, 1, -1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iVar0, 11, 0, 0, 0);
		}
		SCRIPT::SHUTDOWN_LOADING_SCREEN();
		GRAPHICS::_0x25FC3E33A31AD0C9(0);
		GlobalFunc_2204();
		iLocal_3163 = 0;
		iLocal_2707 = 0;
		iLocal_2501 = 0;
		iLocal_2502 = 0;
		iLocal_2642 = 0;
		iLocal_3165 = 1;
	}
	if (iLocal_3165 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_2501 = 1;
			iLocal_3165 = 3;
		}
		func_487();
		func_478();
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_3165 = 2;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2839))
		{
			if (!iLocal_2502)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 109000)
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("carbonizzare", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("carbonizzare", 0)))
						{
							iLocal_2839 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("carbonizzare", 0));
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2839))
							{
								VEHICLE::LOWER_CONVERTIBLE_ROOF(iLocal_2839, 1);
								VEHICLE::SET_VEHICLE_COLOURS(iLocal_2839, 28, 0);
								VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2839, 0, 156);
								iLocal_2502 = 1;
							}
						}
					}
				}
			}
		}
		else if (CUTSCENE::GET_CUTSCENE_TIME() > 125000)
		{
			func_300(&iLocal_2839, 0);
		}
		switch (iLocal_2642)
		{
			case 0:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 105000)
				{
					if (iLocal_2933 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_2933);
						iLocal_2933 = 0;
					}
					iLocal_2642++;
				}
				break;
			
			case 1:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 210000)
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					iLocal_2642++;
				}
				break;
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-41f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_2966))
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > 207200)
			{
				iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_2966 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (!PED::IS_PED_INJURED(Local_2966))
					{
						func_225(0f, 0f, 0f, 0f, 1);
					}
				}
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 210000)
		{
			func_311(Local_3077[0 /*7*/].f_2, Local_3077[0 /*7*/].f_5);
			func_310(Local_3077[1 /*7*/].f_2, Local_3077[1 /*7*/].f_5);
			STREAMING::REQUEST_ANIM_DICT(sLocal_2792);
			if (!PED::IS_PED_INJURED(Local_2966) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2792))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", 0))
				{
					if (!iLocal_2501 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam", 3))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_2966, sLocal_2792, "arm1_int_leadout_gatewalk_lam", -1900.33f, -595.638f, 12.233f, 0f, 0f, 48f, 1000f, -1.5f, -1, 790530, 0.526f, 2, 0);
						TASK::TASK_PLAY_ANIM(Local_2966, sLocal_2792, "ARM1_INT_leadout_gatewalk_lam_facial", 2f, -4f, -1, 32, 0.526f, 0, 0, 0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_2966, 144);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_2966, 0, 0);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1901.163f, -594.9855f, 11.6781f, 2f, joaat("prop_burto_gate_01"), 0))
						{
							OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_burto_gate_01"), -1901.163f, -594.9855f, 11.6781f, 1, 1f, 0);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2966, 1);
					Local_2966.f_2 = 0;
				}
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
		{
			if (!iLocal_2501)
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, -39.7f, 0, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1901.163f, -594.9855f, 11.6781f, 2f, joaat("prop_burto_gate_01"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_burto_gate_01"), -1901.163f, -594.9855f, 11.6781f, 1, 0f, 0);
			}
			RECORDING::_0x293220DA1B46CEBC(10f, 4f, 4);
		}
	}
	if (iLocal_3165 == 2)
	{
		GlobalFunc_8316(0, 1, 1, 0);
		if (iLocal_2933 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_2933);
			iLocal_2933 = 0;
		}
		func_57(&iLocal_2845, 1);
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iLocal_2846)
		{
			func_57(&(iLocal_2846[iVar2]), 1);
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iLocal_2904)
		{
			GlobalFunc_2206(&(iLocal_2904[iVar2]), 1);
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iLocal_2857)
		{
			if (((CAM::IS_SCREEN_FADED_OUT() || (!PED::IS_PED_INJURED(iLocal_2857[iVar2]) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_2857[iVar2], 0))) || iVar2 == 0) || (!PED::IS_PED_INJURED(iLocal_2857[iVar2]) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iLocal_2857[iVar2])))
			{
				func_57(&(iLocal_2857[iVar2]), 1);
			}
			else if (!PED::IS_PED_INJURED(iLocal_2857[iVar2]))
			{
				TASK::TASK_WANDER_STANDARD(iLocal_2857[iVar2], 1193033728, 0);
				PED::SET_PED_KEEP_TASK(iLocal_2857[iVar2], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2857[iVar2], 0);
				func_57(&(iLocal_2857[iVar2]), 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < iLocal_2815)
		{
			func_300(&(iLocal_2815[iVar2]), 1);
			iVar2++;
		}
		GlobalFunc_2206(&iLocal_2903, 1);
		func_300(&iLocal_2837, 1);
		func_300(&iLocal_2838, 1);
		if (iLocal_2502)
		{
			func_300(&iLocal_2839, 0);
		}
		if (iLocal_2878[0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2878[0], 0);
			iLocal_2878[0] = 0;
		}
		if (iLocal_2878[1] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2878[1], 0);
			iLocal_2878[1] = 0;
		}
		GRAPHICS::_0x25FC3E33A31AD0C9(1);
		func_477();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2955);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2957);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2960);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2959);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2961);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2962);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cavalcade"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("alpha"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2963);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2965);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2964);
		VEHICLE::REMOVE_VEHICLE_RECORDING(601, sLocal_2783);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2800);
		STREAMING::REMOVE_PTFX_ASSET();
		STREAMING::REQUEST_IPL("ferris_finale_Anim");
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			CLOCK::SET_CLOCK_TIME(8, 0, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("clear");
		}
		if (iLocal_2537)
		{
			func_476();
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_2927);
			iLocal_2537 = 0;
		}
		GlobalFunc_9132(0);
		func_494(0);
		iLocal_2642 = 0;
		iLocal_3165 = 0;
		iLocal_3164 = 1;
	}
	if (iLocal_3165 == 3)
	{
		GlobalFunc_2195();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2966))
			{
				iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lamar", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					Local_2966 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					if (!PED::IS_PED_INJURED(Local_2966))
					{
						func_225(0f, 0f, 0f, 0f, 1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2839))
			{
				iVar4 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("carbonizzare", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					iLocal_2839 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar4);
					iLocal_2502 = 1;
				}
			}
			SYSTEM::WAIT(0);
		}
		iLocal_3163 = 22;
		iLocal_2501 = 1;
		iLocal_3165 = 2;
	}
}

void func_476()//Position - 0x4273C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "REMOVE_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_477()//Position - 0x42755
{
	STREAMING::REMOVE_ANIM_DICT("move_f@jogger");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_mobile@female@text@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_tourist_mobile@female@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_b@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_smoking@female@base");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_hang_out_street@female_arms_crossed@base");
}

void func_478()//Position - 0x4279C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	}
	if (CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
	{
		bVar2 = true;
	}
	if (iVar0 < 107000)
	{
		iLocal_3163 = 0;
	}
	switch (iLocal_3163)
	{
		case 0:
			if (iVar0 > 107000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_MONTAGE_MUTES"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_MONTAGE_MUTES");
				}
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				STREAMING::SET_PED_POPULATION_BUDGET(1);
				iLocal_2681 = 0;
				iLocal_3163 = 1;
			}
			if (iVar0 > 102000)
			{
				STREAMING::REQUEST_MODEL(joaat("cavalcade"));
				STREAMING::REQUEST_MODEL(joaat("alpha"));
				STREAMING::REQUEST_MODEL(iLocal_2964);
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("cavalcade"));
			STREAMING::REQUEST_MODEL(joaat("alpha"));
			STREAMING::REQUEST_MODEL(iLocal_2964);
			if (iVar0 > 110000)
			{
				if (iLocal_2681 < iLocal_2815)
				{
					if (iLocal_2681 == 0)
					{
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1975.175f, -466.1514f, 8.161919f, -1753.042f, -647.6066f, 15.55647f, 40.25f, 0, 0, 0, 0, 0);
						func_486(joaat("cavalcade"), iLocal_2964, -1964.73f, -495.2604f, 11.49414f, -129.5f, iLocal_2681, 15f, 1);
					}
					else if (iLocal_2681 == 1)
					{
						func_486(joaat("alpha"), iLocal_2964, -1938.365f, -509.8012f, 10.94641f, -129.5f, iLocal_2681, 17.5f, 1);
					}
					else if (iLocal_2681 == 2)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1862.437f, -538.8177f, 11.62354f, 50.7f, iLocal_2681, 15f, 1);
					}
					else if (iLocal_2681 == 3)
					{
						func_486(joaat("alpha"), iLocal_2964, -1814.225f, -577.8256f, 11.20173f, 50.7f, iLocal_2681, 15f, 0);
					}
					else if (iLocal_2681 == 4)
					{
						func_486(joaat("alpha"), iLocal_2964, -1889.469f, -523.0052f, 11.19673f, 50.7f, iLocal_2681, 17.5f, 0);
					}
					else if (iLocal_2681 == 5)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1896.674f, -509.762f, 11.15261f, 50.7f, iLocal_2681, 15f, 0);
					}
					else if (iLocal_2681 == 6)
					{
						func_486(joaat("alpha"), iLocal_2964, -1872.837f, -544.3777f, 11.21608f, 50.7f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 7)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1902.065f, -539.5585f, 11.04157f, -129.5f, iLocal_2681, 17.5f, 0);
					}
					else if (iLocal_2681 == 8)
					{
						func_486(joaat("alpha"), iLocal_2964, -1939.535f, -500.9755f, 11.2654f, -129.5f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 9)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1883.367f, -554.1348f, 10.8461f, -129.5f, iLocal_2681, 17.5f, 0);
					}
					else if (iLocal_2681 == 10)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1953.545f, -496.8808f, 12.01149f, -129.5f, iLocal_2681, 17.5f, 0);
					}
					else if (iLocal_2681 == 11)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1971.762f, -474.7435f, 11.88385f, -129.5f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 12)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1915.928f, -520.5757f, 11.61854f, -129.5f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 13)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1895.09f, -537.9584f, 12.23541f, -129.5f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 14)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1788.682f, -605.7755f, 10.99453f, 50.7f, iLocal_2681, 17.5f, 0);
					}
					else if (iLocal_2681 == 15)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1796.479f, -606.5887f, 10.79278f, 50.7f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 16)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1830.822f, -578.4476f, 11.58502f, 50.7f, iLocal_2681, 20f, 0);
					}
					else if (iLocal_2681 == 17)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1829.73f, -565.704f, 11.65364f, 50.7f, iLocal_2681, 15f, 0);
					}
					else if (iLocal_2681 == 18)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1848.126f, -557.549f, 11.95744f, 50.7f, iLocal_2681, 17.5f, 0);
					}
					else if (iLocal_2681 == 19)
					{
						func_486(joaat("cavalcade"), iLocal_2964, -1908.516f, -515.022f, 12.00384f, 50.7f, iLocal_2681, 20f, 0);
					}
					iLocal_2681++;
				}
			}
			if (bVar2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cavalcade"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("alpha"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2964);
				func_485(0);
				iLocal_3163 = 2;
			}
			break;
		
		case 2:
			func_485(0);
			if (bVar2)
			{
				iLocal_3163 = 3;
			}
			break;
		
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_485(0);
			if (bVar2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2815[0]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2815[0], -1742.429f, -681.9137f, 10.03336f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2815[0], -132.3163f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2815[0]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2815[0], 15f);
					if (!PED::IS_PED_INJURED(iLocal_2857[0]))
					{
						TASK::TASK_VEHICLE_MISSION(iLocal_2857[0], iLocal_2815[0], 0, 1, 15f, 786603, 5f, 5f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_2857[0], 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2815[1]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2815[1], -1744.738f, -688.3665f, 9.544968f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2815[1], -130.6998f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2815[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2815[1], 15f);
					if (!PED::IS_PED_INJURED(iLocal_2857[1]))
					{
						TASK::TASK_VEHICLE_MISSION(iLocal_2857[1], iLocal_2815[1], 0, 1, 15f, 786603, 5f, 5f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_2857[1], 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2815[2]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2815[2], -1759.99f, -666.7789f, 9.905796f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2815[2], -133.3606f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2815[2]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2815[2], 15f);
					if (!PED::IS_PED_INJURED(iLocal_2857[2]))
					{
						TASK::TASK_VEHICLE_MISSION(iLocal_2857[2], iLocal_2815[2], 0, 1, 15f, 786603, 5f, 5f, 1);
						PED::SET_PED_KEEP_TASK(iLocal_2857[2], 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2815[3]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2815[3], -1734.686f, -734.4443f, 9.4153f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_2815[3], 139.5574f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2815[3]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2815[3], 0f);
					func_57(&(iLocal_2857[3]), 1);
				}
				iVar1 = 0;
				while (iVar1 < iLocal_2857)
				{
					if (iVar1 > 3)
					{
						func_57(&(iLocal_2857[iVar1]), 1);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_2815)
				{
					if (iVar1 > 3)
					{
						func_300(&(iLocal_2815[iVar1]), 1);
					}
					iVar1++;
				}
				iLocal_3163 = 4;
			}
			break;
		
		case 4:
			func_484(1);
			func_485(1);
			if (bVar2)
			{
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				iVar1 = 0;
				while (iVar1 < iLocal_2857)
				{
					func_57(&(iLocal_2857[iVar1]), 1);
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_2815)
				{
					func_300(&(iLocal_2815[iVar1]), 1);
					iVar1++;
				}
				iLocal_3163 = 5;
			}
			break;
		
		case 5:
			STREAMING::REQUEST_MODEL(iLocal_2955);
			STREAMING::REQUEST_MODEL(iLocal_2957);
			VEHICLE::REQUEST_VEHICLE_RECORDING(601, sLocal_2783);
			STREAMING::REQUEST_PTFX_ASSET();
			func_484(1);
			if (bVar2)
			{
				if (iVar0 < 129500)
				{
					func_484(0);
					STREAMING::REMOVE_IPL("ferris_finale_Anim");
				}
				iLocal_3163 = 6;
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2903))
			{
				func_483(0);
			}
			STREAMING::REQUEST_MODEL(iLocal_2955);
			STREAMING::REQUEST_MODEL(iLocal_2957);
			VEHICLE::REQUEST_VEHICLE_RECORDING(601, sLocal_2783);
			STREAMING::REQUEST_PTFX_ASSET();
			if (bVar2)
			{
				if (iVar0 < 132000)
				{
					if ((STREAMING::HAS_MODEL_LOADED(iLocal_2955) && STREAMING::HAS_MODEL_LOADED(iLocal_2957)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(601, sLocal_2783))
					{
						iLocal_2837 = VEHICLE::CREATE_VEHICLE(iLocal_2955, -1657.1f, -1174f, 0.5f, 91.6f, 1, 1);
						iLocal_2845 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2837, 26, iLocal_2957, -1, 1, 1);
						VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_2837, 5f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_2837, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_2837, 0, 111);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_2837, 3, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2837, 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2837, 601, sLocal_2783, 0);
						GlobalFunc_2208(&iLocal_2837, 2450f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2837, 0);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_2837, 1);
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							iLocal_2878[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_water_boat_prop", iLocal_2837, 0f, -4.6f, -1f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							iLocal_2878[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_water_boat_Jetmax_bow", iLocal_2837, 0f, 4.2f, -0.5f, 0f, 0f, 180f, 1065353216, 0, 0, 0);
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_2878[0], "forward", 1f, 0);
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_2878[1], "speed", 1f, 0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2845, 1);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2955);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2957);
				}
				CLOCK::SET_CLOCK_TIME(9, 30, 0);
				iLocal_2710 = 0;
				iLocal_3163 = 7;
			}
			break;
		
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2903))
			{
				func_483(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2837) && !PED::IS_PED_INJURED(iLocal_2845))
			{
				if (iLocal_2710 == 0)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2837))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2837) > 2850f)
						{
							iLocal_2710++;
						}
					}
				}
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(602, sLocal_2783);
			if (bVar2)
			{
				iVar1 = 0;
				while (iVar1 < iLocal_2846)
				{
					func_57(&(iLocal_2846[iVar1]), 1);
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_2904)
				{
					GlobalFunc_2206(&(iLocal_2904[iVar1]), 1);
					iVar1++;
				}
				GlobalFunc_2206(&iLocal_2903, 1);
				STREAMING::REMOVE_ANIM_DICT(sLocal_2800);
				STREAMING::REQUEST_IPL("ferris_finale_Anim");
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2837))
				{
					if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_2837) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2837))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2837);
					}
					VEHICLE::REMOVE_VEHICLE_RECORDING(601, sLocal_2783);
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(602, sLocal_2783))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2837, 602, sLocal_2783, 0);
						GlobalFunc_2208(&iLocal_2837, 6250f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_2837, 0);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(iLocal_2837, 1);
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2956);
				CLOCK::SET_CLOCK_TIME(9, 0, 0);
				iLocal_2710 = 0;
				iLocal_3163 = 8;
			}
			break;
		
		case 8:
			if (iLocal_2710 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2837) && !PED::IS_PED_INJURED(iLocal_2845))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2837))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2837) > 6350f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2837);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_2845, iLocal_2837, -1852.052f, -1318.397f, 0.496157f, 40f, 0, iLocal_2955, 16777280, 1f, 100f);
							iLocal_2710++;
						}
					}
				}
			}
			if (bVar2)
			{
				func_57(&iLocal_2845, 1);
				func_300(&iLocal_2837, 1);
				func_300(&iLocal_2838, 1);
				if (iLocal_2878[0] != 0)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2878[0], 0);
					iLocal_2878[0] = 0;
				}
				if (iLocal_2878[1] != 0)
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2878[1], 0);
					iLocal_2878[1] = 0;
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(601, sLocal_2783);
				VEHICLE::REMOVE_VEHICLE_RECORDING(602, sLocal_2783);
				STREAMING::REMOVE_PTFX_ASSET();
				CLOCK::SET_CLOCK_TIME(8, 0, 0);
				iLocal_3163 = 9;
			}
			break;
		
		case 9:
			if (bVar2)
			{
				iLocal_2544 = 0;
				iLocal_3163 = 10;
			}
			break;
		
		case 10:
			if (!iLocal_2544)
			{
				if (bVar2 || iVar0 > 141400)
				{
					iVar9 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1801.297f, -883.5159f, 3.5508f, 3f, joaat("prop_beach_parasol_03"), 0, 0, 1);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar9) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar9)) && ENTITY::IS_ENTITY_VISIBLE(iVar9))
					{
					}
					iLocal_2544 = 1;
				}
			}
			if (bVar2)
			{
				iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.157f, -905.8969f, 2.0968f, 3f, joaat("prop_surf_board_04"), 0, 0, 1);
				iVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.157f, -905.8969f, 2.0968f, 3f, joaat("prop_surf_board_ldn_02"), 0, 0, 1);
				iVar5 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.157f, -905.8969f, 2.0968f, 3f, joaat("prop_surf_board_ldn_04"), 0, 0, 1);
				iVar6 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.157f, -905.8969f, 2.0968f, 3f, joaat("prop_coolbox_01"), 0, 0, 1);
				iVar7 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1816.157f, -905.8969f, 2.0968f, 3f, joaat("prop_beach_bag_01b"), 0, 0, 1);
				iVar10 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1790.435f, -881.3105f, 5.3852f, 3f, joaat("prop_beach_lilo_01"), 0, 0, 1);
				iVar8 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1801.297f, -883.5159f, 3.5508f, 3f, joaat("prop_beach_bag_01b"), 0, 0, 1);
				iVar11 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1801.297f, -883.5159f, 3.5508f, 3f, joaat("prop_beachball_01"), 0, 0, 1);
				if ((((((ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar3)) && ENTITY::IS_ENTITY_VISIBLE(iVar3)) && ((ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar4)) && ENTITY::IS_ENTITY_VISIBLE(iVar4))) && ((ENTITY::DOES_ENTITY_EXIST(iVar5) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar5)) && ENTITY::IS_ENTITY_VISIBLE(iVar5))) && ((ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar6)) && ENTITY::IS_ENTITY_VISIBLE(iVar6))) && ((ENTITY::DOES_ENTITY_EXIST(iVar7) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar7)) && ENTITY::IS_ENTITY_VISIBLE(iVar7)))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar3, -1808.083f, -855.4938f, 6.3014f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar3, 0f, -2.5f, 140.04f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar3, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar4, -1807.404f, -854.8961f, 5.7159f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar4, -79.92f, 77.4f, -62.64f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar4, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar5, -1806.46f, -856.6586f, 5.8052f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar5, 79.92f, 87.48f, 92.52f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar5, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar6, -1807.953f, -855.9752f, 5.5244f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar6, 0f, 0f, 102.6f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar6, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar7, -1808.091f, -856.6115f, 5.5709f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar7, 0.9658f, 8.5644f, -142.56f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar7, 1);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar10) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar10)) && ENTITY::IS_ENTITY_VISIBLE(iVar10))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar10, -1805.205f, -868.6416f, 4.88f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar10, 10.08f, 2.52f, -44.8016f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar10, 1);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar8)) && ENTITY::IS_ENTITY_VISIBLE(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar8, -1806.235f, -867.9008f, 4.8612f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar8, -2.52f, 15.12f, -115.3976f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar8, 1);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar11) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar11)) && ENTITY::IS_ENTITY_VISIBLE(iVar11))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar11, -1806.303f, -868.5082f, 4.9113f, 0, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(iVar11, 0f, 0f, -44.9999f, 2, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iVar11, 1);
				}
				iLocal_3163 = 11;
			}
			break;
		
		case 11:
			if (bVar2)
			{
				iLocal_3163 = 12;
			}
			break;
		
		case 12:
			STREAMING::REQUEST_MODEL(iLocal_2965);
			STREAMING::REQUEST_MODEL(iLocal_2964);
			STREAMING::REQUEST_MODEL(iLocal_2963);
			func_482();
			if (iVar0 < 147500 && func_481())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[0]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2965))
					{
						iLocal_2857[0] = PED::CREATE_PED(26, iLocal_2965, -1773.272f, -707.4338f, 9.775657f, 143.8f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[0], "amb@world_human_smoking@female@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[1]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2965))
					{
						iLocal_2857[1] = PED::CREATE_PED(26, iLocal_2965, -1780.795f, -707.4968f, 9.633821f, 127.3f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[1], "amb@world_human_stand_mobile@female@text@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[2]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2964))
					{
						iLocal_2857[2] = PED::CREATE_PED(26, iLocal_2964, -1809.953f, -683.1652f, 9.4015f, 203.0419f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[2], "amb@world_human_hang_out_street@male_b@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[3]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2965))
					{
						iLocal_2857[3] = PED::CREATE_PED(26, iLocal_2965, -1799.86f, -690.1613f, 9.609697f, 145.5f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[3], "amb@world_human_tourist_mobile@female@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[4]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2964))
					{
						iLocal_2857[4] = PED::CREATE_PED(26, iLocal_2964, -1827.309f, -660.8422f, 9.916418f, -157.6f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[4], "amb@world_human_hang_out_street@male_b@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[5]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2964))
					{
						iLocal_2857[5] = PED::CREATE_PED(26, iLocal_2964, -1826.733f, -661.9673f, 9.725348f, 20.3f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[5], "amb@world_human_hang_out_street@male_a@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[6]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2964))
					{
						iLocal_2857[6] = PED::CREATE_PED(26, iLocal_2964, -1809.357f, -684.6357f, 9.412f, 21.1289f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[6], "amb@world_human_hang_out_street@male_a@base", "base", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2857[7]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_2963))
					{
						iLocal_2857[7] = PED::CREATE_PED(26, iLocal_2963, -1817.061f, -682.0644f, 9.412f, 230.3514f, 1, 1);
						TASK::TASK_PLAY_ANIM(iLocal_2857[7], "move_f@jogger", "run", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2857[7], 0, 0);
					}
				}
			}
			if (bVar2 && iVar0 > 146000)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2965);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2964);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2963);
				iLocal_3163 = 14;
			}
			break;
		
		case 14:
			if (bVar2)
			{
				func_480(iLocal_2857[0], -1868.033f, -625.9962f, 10.2611f, 336.5973f, "amb@world_human_smoking@female@base", "base", 1);
				func_480(iLocal_2857[1], -1881.984f, -618.1794f, 10.4857f, 150.3923f, "amb@world_human_stand_mobile@female@text@base", "base", 1);
				func_480(iLocal_2857[3], -1893.5f, -602.4f, 10.8224f, 151.6628f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_480(iLocal_2857[2], -1867.446f, -624.8217f, 10.341f, 124.0036f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[4], -1868.4f, -625.2f, 10.236f, -116.2f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[5], -1830.21f, -664.5304f, 9.3778f, 299.2157f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[6], -1829.201f, -663.9257f, 9.3505f, 119.4014f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_479(iLocal_2857[7]);
				iLocal_3163 = 15;
			}
			break;
		
		case 15:
			if (bVar2)
			{
				func_480(iLocal_2857[0], -1983.543f, -529.3809f, 10.6952f, 230.9089f, "move_f@jogger", "run", 1);
				func_480(iLocal_2857[1], -1919.445f, -588.8778f, 10.6731f, 170.896f, "amb@world_human_stand_mobile@female@text@base", "base", 1);
				func_480(iLocal_2857[2], -1918.506f, -581.2005f, 10.8527f, 202.4282f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[4], -1917.551f, -582.8298f, 10.7776f, 35.8903f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[5], -1932.975f, -569.0629f, 10.8524f, 135.6026f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[7], -1906.123f, -602.3423f, 10.6828f, 50.9085f, "move_f@jogger", "run", 1);
				func_479(iLocal_2857[3]);
				func_479(iLocal_2857[6]);
				iLocal_3163 = 16;
			}
			break;
		
		case 16:
			if (bVar2)
			{
				func_480(iLocal_2857[0], -1891.161f, -712.9316f, 6.5149f, 191.8786f, "amb@world_human_tourist_mobile@female@base", "base", 1);
				func_480(iLocal_2857[2], -1878.515f, -696.8825f, 8.394f, 32.476f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[4], -1879.15f, -695.0729f, 8.4385f, 205.4313f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[5], -1893.169f, -631.4039f, 10.1937f, 155.5788f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[1], -1893.838f, -632.8634f, 10.0878f, 325.8723f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_480(iLocal_2857[7], -1883.546f, -725.7193f, 6.3307f, 225.0816f, "move_f@jogger", "run", 1);
				func_479(iLocal_2857[6]);
				func_479(iLocal_2857[3]);
				CLOCK::SET_CLOCK_TIME(8, 0, 0);
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("clear");
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				iLocal_3163 = 17;
			}
			break;
		
		case 17:
			if (bVar2)
			{
				func_480(iLocal_2857[0], -1912.066f, -602.6298f, 10.5848f, 294.1278f, "amb@world_human_smoking@female@base", "base", 1);
				func_480(iLocal_2857[1], -1898.803f, -603.161f, 10.6174f, 207.0302f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_480(iLocal_2857[2], -1897.501f, -604.726f, 10.6416f, 66.181f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[4], -1899.645f, -603.7774f, 10.6646f, 256.1585f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[7], -1906.102f, -604.9014f, 10.6828f, 229.4289f, "move_f@jogger", "run", 1);
				func_479(iLocal_2857[3]);
				func_479(iLocal_2857[5]);
				func_479(iLocal_2857[6]);
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_3163 = 18;
			}
			break;
		
		case 18:
			if (bVar2)
			{
				func_480(iLocal_2857[0], -1881.948f, -607.5357f, 14.4512f, 129.3375f, "amb@world_human_smoking@female@base", "base", 1);
				func_480(iLocal_2857[1], -1904.558f, -593.6984f, 10.8258f, 37.8397f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_480(iLocal_2857[2], -1889.823f, -605.4258f, 10.8539f, 170.2484f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[4], -1889.409f, -606.6351f, 10.8001f, 30.0624f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[5], -1905.26f, -592.3629f, 10.8546f, 177.2372f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[6], -1905.29f, -593.6451f, 10.7538f, 343.4001f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[7], -1964.464f, -554.6491f, 10.6827f, 230.4146f, "move_f@jogger", "run", 1);
				func_479(iLocal_2857[3]);
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_3163 = 19;
			}
			break;
		
		case 19:
			if (bVar2)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_MONTAGE_MUTES"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_1_MONTAGE_MUTES");
				}
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_3163 = 20;
			}
			break;
		
		case 20:
			if (bVar2)
			{
				func_480(iLocal_2857[1], -1868.51f, -641.648f, 10.0853f, 182.5072f, "amb@world_human_hang_out_street@female_arms_crossed@base", "base", 1);
				func_480(iLocal_2857[3], -1857.738f, -634.5464f, 10.0832f, 150.5682f, "amb@world_human_stand_mobile@female@text@base", "base", 1);
				func_480(iLocal_2857[2], -1867.715f, -642.4875f, 10.1098f, 78.587f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[4], -1868.994f, -642.2708f, 10.124f, 275.0369f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[5], -1869.91f, -632.1488f, 10.131f, 224.8968f, "amb@world_human_hang_out_street@male_b@base", "base", 1);
				func_480(iLocal_2857[6], -1869.025f, -633.5297f, 10.1163f, 36.4653f, "amb@world_human_hang_out_street@male_a@base", "base", 1);
				func_480(iLocal_2857[7], -1880.808f, -626.5896f, 10.3331f, 229.4668f, "move_f@jogger", "run", 1);
				MISC::CLEAR_AREA_OF_PEDS(-1849.9f, -592.3f, 18.3f, 35f, 0);
				iLocal_3163 = 21;
			}
			break;
		
		case 21:
			if (bVar2)
			{
				iLocal_3163 = 22;
			}
			break;
		
		case 22:
			break;
	}
}

void func_479(int iParam0)//Position - 0x4430D
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		ENTITY::SET_ENTITY_COORDS(iParam0, Var0.x, Var0.f_1, -10f, 1, 0, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, 1);
		ENTITY::SET_ENTITY_VISIBLE(iParam0, 0);
	}
}

void func_480(int iParam0, struct<3> Param1, float fParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x4434D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam7)
		{
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iParam0, 0);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iParam0, 1);
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
		TASK::TASK_PLAY_ANIM(iParam0, sParam5, sParam6, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
	}
}

int func_481()//Position - 0x443B2
{
	if ((((((STREAMING::HAS_ANIM_DICT_LOADED("move_f@jogger") && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_stand_mobile@female@text@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_tourist_mobile@female@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_b@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@male_a@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_smoking@female@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_hang_out_street@female_arms_crossed@base"))
	{
		return 1;
	}
	return 0;
}

void func_482()//Position - 0x4441F
{
	STREAMING::REQUEST_ANIM_DICT("move_f@jogger");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_mobile@female@text@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_tourist_mobile@female@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_b@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@male_a@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@base");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_hang_out_street@female_arms_crossed@base");
}

void func_483(bool bParam0)//Position - 0x44466
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_2903, 2) };
	Var0.x = (Var0.x - (5f * SYSTEM::TIMESTEP()));
	ENTITY::SET_ENTITY_ROTATION(iLocal_2903, Var0.x, Var0.f_1, Var0.f_2, 2, 1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iLocal_2904)
	{
		fVar4 = (IntToFloat(iVar3) * 22.5f);
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2903, 0f, (15.3f * SYSTEM::COS(fVar4)), (15.3f * SYSTEM::SIN(fVar4))) };
		if (bParam0)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2904[iVar3], Var5, 0, 0, 1);
		}
		else
		{
			OBJECT::SLIDE_OBJECT(iLocal_2904[iVar3], Var5, 1f, 1f, 1f, 0);
		}
		iVar3++;
	}
}

int func_484(bool bParam0)//Position - 0x4450C
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2903))
	{
		STREAMING::REQUEST_MODEL(iLocal_2959);
		STREAMING::REQUEST_MODEL(iLocal_2960);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_2959) && STREAMING::HAS_MODEL_LOADED(iLocal_2960))
		{
			if (bParam0)
			{
				return 1;
			}
			else
			{
				iLocal_2903 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2959, Local_2780, 1, 1, 0);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_2903, 500);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2903, 1);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_2904)
				{
					fVar1 = (IntToFloat(iVar0) * 22.5f);
					Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2903, 0f, (15.3f * SYSTEM::COS(fVar1)), (15.3f * SYSTEM::SIN(fVar1))) };
					iLocal_2904[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_2960, Var2, 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_2904[iVar0], 500);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2904[iVar0], 1);
					iVar0++;
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2959);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2960);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_485(bool bParam0)//Position - 0x44602
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	fVar1 = 15f;
	iVar0 = 0;
	while (iVar0 < iLocal_2815)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2815[iVar0]) && (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2815[iVar0], -1) || !bParam0))
		{
			if ((((((iVar0 == 1 || iVar0 == 4) || iVar0 == 7) || iVar0 == 9) || iVar0 == 10) || iVar0 == 14) || iVar0 == 18)
			{
				fVar1 = 17.5f;
			}
			else if (((((((iVar0 == 6 || iVar0 == 8) || iVar0 == 11) || iVar0 == 12) || iVar0 == 13) || iVar0 == 15) || iVar0 == 16) || iVar0 == 19)
			{
				fVar1 = 20f;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_2815[iVar0], fVar1);
		}
		iVar0++;
	}
}

void func_486(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x4470B
{
	if (STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		iLocal_2815[iParam6] = VEHICLE::CREATE_VEHICLE(iParam0, Param2, fParam5, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2815[iParam6]);
		if (bParam8)
		{
			iLocal_2857[iParam6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2815[iParam6], 26, iParam1, -1, 1, 1);
			TASK::TASK_STAND_STILL(iLocal_2857[iParam6], -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2857[iParam6], 1);
		}
		if (fParam7 > 0f)
		{
		}
	}
}

void func_487()//Position - 0x44785
{
	int iVar0;
	
	iVar0 = 0;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iVar0 = CUTSCENE::GET_CUTSCENE_TIME();
	}
	if (!iLocal_2537)
	{
		uLocal_2927 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
		iLocal_2537 = 1;
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_2927) && !bLocal_2523)
	{
		switch (iLocal_2707)
		{
			case 0:
				if (iVar0 >= 5533)
				{
					func_493("art", 105f, 115f, "right", 0.333f, 0.333f);
					func_492("art", "Art Director", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("art", "AARON GARBUT", 50f, ",", 1);
					func_490("art", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 1:
				if (iVar0 >= 9266)
				{
					func_489("art", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 2:
				if (iVar0 >= 10700)
				{
					func_493("techdir", 120f, 450f, "right", 0.333f, 0.333f);
					func_492("techdir", "Technical Director", 0f, "HUD_COLOUR_TREVOR", 1);
					func_491("techdir", "ADAM FOWLER", 110f, ",", 1);
					func_490("techdir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 3:
				if (iVar0 >= 14400)
				{
					func_489("techdir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 4:
				if (iVar0 >= 17900)
				{
					func_493("gamedes", 85f, 225f, "right", 0.333f, 0.333f);
					func_492("gamedes", "Game Design", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_491("gamedes", "LESLIE BENZIES,IMRAN SARWAR", 50f, ",", 1);
					func_490("gamedes", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 5:
				if (iVar0 >= 21633)
				{
					func_489("gamedes", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 6:
				if (iVar0 >= 26133)
				{
					if (CAM::_0x4879E4FE39074CDF())
					{
						func_493("written", 0f, 50f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_493("written", 0f, 40f, "left", 0.333f, 0.333f);
					}
					func_492("written", "Written By", 80f, "HUD_COLOUR_MICHAEL", 1);
					func_491("written", "DAN HOUSER,RUPERT HUMPHRIES,MICHAEL UNSWORTH", 145f, ",", 1);
					func_490("written", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 7:
				if (iVar0 >= 30500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("written");
					iLocal_2707++;
				}
				break;
			
			case 8:
				if (iVar0 >= 36533)
				{
					func_493("assocart", 85f, 430f, "right", 0.333f, 0.333f);
					func_492("assocart", "Associate Art Directors", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("assocart", "ADAM COCHRANE,MICHAEL KANE", 75f, ",", 1);
					func_490("assocart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 9:
				if (iVar0 >= 40233)
				{
					func_489("assocart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 10:
				if (iVar0 >= 42700)
				{
					func_493("assisart", 0f, 440f, "left", 0.333f, 0.333f);
					func_492("assisart", "Assistant Art Director", 105f, "HUD_COLOUR_TREVOR", 1);
					func_491("assisart", "IAN McQUE", 265f, ",", 1);
					func_490("assisart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 11:
				if (iVar0 >= 46436)
				{
					func_489("assisart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 12:
				if (iVar0 >= 49633)
				{
					func_493("globart", 90f, 390f, "right", 0.333f, 0.333f);
					func_492("globart", "Global Lead Technical Artist", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_491("globart", "RICK STIRLING", 125f, ",", 1);
					func_490("globart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 13:
				if (iVar0 >= 53000 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("globart");
					iLocal_2707++;
				}
				break;
			
			case 14:
				if (iVar0 >= 58133)
				{
					func_493("leadcut", 0f, 395f, "left", 0.333f, 0.333f);
					func_492("leadcut", "Lead Cutscene Animation", 100f, "HUD_COLOUR_MICHAEL", 1);
					func_491("leadcut", "DERMOT BAILIE,FELIPE BUSQUETS", 248f, ",", 1);
					func_490("leadcut", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 15:
				if (iVar0 >= 61800)
				{
					func_489("leadcut", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 16:
				if (iVar0 >= 65266)
				{
					func_493("ingame", 95f, 320f, "right", 0.333f, 0.333f);
					func_492("ingame", "Lead Ingame Animation", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("ingame", "JIM JAGGER,MARK TENNANT", 115f, ",", 1);
					func_490("ingame", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 17:
				if (iVar0 >= 69366)
				{
					func_489("ingame", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 18:
				if (iVar0 >= 80133)
				{
					func_493("animdir", 0f, 410f, "left", 0.333f, 0.333f);
					func_492("animdir", "Animation Director", 190f, "HUD_COLOUR_TREVOR", 1);
					func_491("animdir", "ROB NELSON", 295f, ",", 1);
					func_490("animdir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 19:
				if (iVar0 >= 83833)
				{
					func_489("animdir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 20:
				if (iVar0 >= 90166)
				{
					func_493("cutdir", 0f, 335f, "left", 0.333f, 0.333f);
					func_492("cutdir", "Cutscene Director", 115f, "HUD_COLOUR_FREEMODE", 1);
					func_491("cutdir", "ROD EDGE", 195f, ",", 1);
					func_490("cutdir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 21:
				if (iVar0 >= 93933)
				{
					func_489("cutdir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 22:
				if (iVar0 >= 95600)
				{
					func_493("leadenv", 90f, 410f, "right", 0.333f, 0.333f);
					func_492("leadenv", "Principal Lead Environment Artist", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_491("leadenv", "WAYLAND STANDING", 110f, ",", 1);
					func_490("leadenv", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 23:
				if (iVar0 >= 99200)
				{
					func_489("leadenv", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 24:
				if (iVar0 >= 106766)
				{
					func_493("envart", 85f, 315f, "right", 0.333f, 0.333f);
					func_492("envart", "Lead Environment Artists", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("envart", "MICHAEL PIRSO,ABHISHEK AGRAWAL,JODY PILESKI", 60f, ",", 1);
					func_490("envart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 25:
				if (iVar0 >= 110566)
				{
					func_489("envart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 26:
				if (iVar0 >= 114866)
				{
					func_493("vehart", 0f, 180f, "left", 0.333f, 0.333f);
					func_492("vehart", "Lead Vehicle Artist", 110f, "HUD_COLOUR_TREVOR", 1);
					func_491("vehart", "JOLYON ORME", 170f, ",", 1);
					func_490("vehart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 27:
				if (iVar0 >= 117300 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("vehart");
					iLocal_2707++;
				}
				break;
			
			case 28:
				if (iVar0 >= 124866)
				{
					func_493("princart", 0f, 370f, "left", 0.333f, 0.333f);
					func_492("princart", "Principal Artists", 105f, "HUD_COLOUR_FREEMODE", 1);
					func_491("princart", "DAVE COOPER,IAIN McNAUGHTON", 195f, ",", 1);
					func_490("princart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 29:
				if (iVar0 >= 127400)
				{
					func_489("princart", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 30:
				if (iVar0 >= 133733)
				{
					func_493("princlight", 100f, 75f, "right", 0.333f, 0.333f);
					func_492("princlight", "Principal Lighting Artist", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_491("princlight", "OWEN SHEPHERD", 90f, ",", 1);
					func_490("princlight", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 31:
				if (iVar0 >= 136366)
				{
					func_489("princlight", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 32:
				if (iVar0 >= 139166)
				{
					if (GRAPHICS::GET_IS_HIDEF() && !CAM::_0x4879E4FE39074CDF())
					{
						func_493("outsource", 175f, 15f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_493("outsource", 175f, 50f, "right", 0.333f, 0.333f);
					}
					func_492("outsource", "Outsource Manager", 0f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("outsource", "SCOTT WILSON", 75f, ",", 1);
					func_490("outsource", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 33:
				if (iVar0 >= 141500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("outsource");
					iLocal_2707++;
				}
				break;
			
			case 34:
				if (iVar0 >= 144500)
				{
					func_493("2D", 0f, 85f, "left", 0.333f, 0.333f);
					func_492("2D", "2D/UI Director", 110f, "HUD_COLOUR_TREVOR", 1);
					func_491("2D", "STUART PETRI", 135f, ",", 1);
					func_490("2D", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 35:
				if (iVar0 >= 147500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("2D");
					iLocal_2707++;
				}
				break;
			
			case 36:
				if (iVar0 >= 152633)
				{
					func_493("Music", 110f, 405f, "right", 0.333f, 0.333f);
					func_492("Music", "Music Director", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_491("Music", "CRAIG CONNER", 30f, ",", 1);
					func_490("Music", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 37:
				if (iVar0 >= 156100)
				{
					func_489("Music", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 38:
				if (iVar0 >= 156700)
				{
					func_493("Musicpro", 250f, 380f, "right", 0.333f, 0.333f);
					func_492("Musicpro", "Music Producer", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_491("Musicpro", "IVAN PAVLOVICH", 45f, ",", 1);
					func_490("Musicpro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 39:
				if (iVar0 >= 159600)
				{
					func_489("Musicpro", 0f);
					iLocal_2707++;
				}
				break;
			
			case 40:
				if (iVar0 >= 161900)
				{
					func_493("audiodir", 0f, 405f, "left", 0.333f, 0.333f);
					func_492("audiodir", "Audio Director", 180f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("audiodir", "MATTHEW SMITH", 215f, ",", 1);
					func_490("audiodir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 41:
				if (iVar0 >= 165566)
				{
					func_489("audiodir", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 42:
				if (iVar0 >= 166366)
				{
					if (GRAPHICS::GET_IS_HIDEF() && !CAM::_0x4879E4FE39074CDF())
					{
						func_493("leadaud", 40f, 25f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_493("leadaud", 40f, 48f, "right", 0.333f, 0.333f);
					}
					func_492("leadaud", "Lead Audio Programmer", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_491("leadaud", "ALASTAIR MACGREGOR", 55f, ",", 1);
					func_492("leadaud", "Lead Sound Designers", 30f, "HUD_COLOUR_MICHAEL", 1);
					func_491("leadaud", "JEFFREY WHITCHER,STEVE DONOHOE", 85f, ",", 1);
					func_492("leadaud", "Dialogue Supervisor", 60f, "HUD_COLOUR_MICHAEL", 1);
					func_491("leadaud", "WILL MORTON", 115f, ",", 1);
					func_490("leadaud", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 43:
				if (iVar0 >= 168833)
				{
					func_489("leadaud", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 44:
				if (iVar0 >= 170133)
				{
					func_493("score", 0f, 325f, "left", 0.333f, 0.333f);
					func_492("score", "Original Score", 80f, "HUD_COLOUR_TREVOR", 1);
					func_491("score", "TANGERINE DREAM,WOODY JACKSON,ALCHEMIST & OH NO", 165f, ",", 1);
					func_490("score", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 45:
				if (iVar0 >= 173033)
				{
					func_489("score", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 46:
				if (iVar0 >= 175066)
				{
					func_493("assotech", 80f, 365f, "right", 0.333f, 0.333f);
					func_492("assotech", "Associate Technical Directors", 0f, "HUD_COLOUR_FREEMODE", 1);
					func_491("assotech", "PHIL HOOKER,KLAAS SCHILSTRA", 125f, ",", 1);
					func_490("assotech", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 47:
				if (iVar0 >= 178700)
				{
					func_489("assotech", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 48:
				if (iVar0 >= 180500)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_493("assitech", 0f, 325f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_493("assitech", 0f, 305f, "left", 0.333f, 0.333f);
					}
					func_492("assitech", "Assistant Technical Directors", 190f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("assitech", "HUGUES ST-PIERRE,TOM SHEPHERD,BRETT LAMING,KEVIN HOARE", 245f, ",", 1);
					func_490("assitech", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 49:
				if (iVar0 >= 183800)
				{
					func_489("assitech", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 50:
				if (iVar0 >= 185066)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_493("proglead", 0f, 280f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_493("proglead", 0f, 260f, "left", 0.333f, 0.333f);
					}
					func_492("proglead", "Programming Leads", 125f, "HUD_COLOUR_MICHAEL", 1);
					func_491("proglead", "ALEX HADJADJ,BEN LYONS,CHRIS SWINHOE,COLIN ENTWISTLE,DAVID HYND", 215f, ",", 1);
					func_490("proglead", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 51:
				if (iVar0 >= 188100)
				{
					func_489("proglead", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 52:
				if (iVar0 >= 189066)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_493("proglead2", 0f, 280f, "left", 0.333f, 0.333f);
					}
					else
					{
						func_493("proglead2", 0f, 260f, "left", 0.333f, 0.333f);
					}
					func_492("proglead2", "Programming Leads", 125f, "HUD_COLOUR_MICHAEL", 1);
					func_491("proglead2", "DANIEL YELLAND,JOHN WHYTE,JONATHON ASHCROFT,MICHAEL KREHAN", 215f, ",", 1);
					func_490("proglead2", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 53:
				if (iVar0 >= 192066)
				{
					func_489("proglead2", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 54:
				if (iVar0 >= 193266)
				{
					if (GRAPHICS::GET_IS_HIDEF())
					{
						func_493("toollead", 125f, 395f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_493("toollead", 125f, 355f, "right", 0.333f, 0.333f);
					}
					func_492("toollead", "Lead Tools Programmers", 0f, "HUD_COLOUR_TREVOR", 1);
					func_491("toollead", "DAVID MUIR,LUKE OPENSHAW", 75f, ",", 1);
					func_490("toollead", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 55:
				if (iVar0 >= 195833)
				{
					func_489("toollead", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 56:
				if (iVar0 >= 196733)
				{
					func_493("scripter", 0f, 355f, "left", 0.333f, 0.333f);
					func_492("scripter", "Lead Scripters", 120f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("scripter", "BENJAMIN ROLLINSON,KENNETH ROSS,MATTHEW BOOTON", 185f, ",", 1);
					func_490("scripter", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 57:
				if (iVar0 >= 200033)
				{
					func_489("scripter", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 58:
				if (iVar0 >= 200666)
				{
					func_493("scripter2", 0f, 355f, "left", 0.333f, 0.333f);
					func_492("scripter2", "Lead Scripters", 120f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("scripter2", "ROBERT BRAY,ROSS WALLACE", 185f, ",", 1);
					func_490("scripter2", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 59:
				if (iVar0 >= 203966)
				{
					func_489("scripter2", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 60:
				if (iVar0 >= 207166)
				{
					func_493("studio", 90f, 345f, "right", 0.333f, 0.333f);
					func_492("studio", "Studio Director", 0f, "HUD_COLOUR_TREVOR", 1);
					func_491("studio", "ANDREW SEMPLE", 35f, ",", 1);
					func_490("studio", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 61:
				if (iVar0 >= 210500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("studio");
					iLocal_2707++;
				}
				break;
			
			case 62:
				if (iVar0 >= 212500)
				{
					func_493("assispro", 0f, 420f, "left", 0.333f, 0.333f);
					func_492("assispro", "Assistant Producer", 90f, "HUD_COLOUR_FREEMODE", 1);
					func_491("assispro", "WILLIAM MILLS", 125f, ",", 1);
					func_490("assispro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 63:
				if (iVar0 >= 216036)
				{
					func_489("assispro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 64:
				if (iVar0 >= 219400)
				{
					func_493("copro", 105f, 320f, "right", 0.333f, 0.333f);
					func_492("copro", "Co-Producer", 0f, "HUD_COLOUR_MICHAEL", 1);
					func_491("copro", "IMRAN SARWAR", 35f, ",", 1);
					func_490("copro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 65:
				if (iVar0 >= 222866)
				{
					func_489("copro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 66:
				if (iVar0 > 225566)
				{
					func_493("pro", 0f, 125f, "left", 0.333f, 0.333f);
					func_492("pro", "Producer", 120f, "HUD_COLOUR_FRANKLIN", 1);
					func_491("pro", "LESLIE BENZIES", 165f, ",", 1);
					func_490("pro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 67:
				if (iVar0 > 228500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					func_488("pro");
					iLocal_2707++;
				}
				break;
			
			case 68:
				if (iVar0 > 230666)
				{
					if (CAM::_0x4879E4FE39074CDF())
					{
						func_493("execpro", 215f, 50f, "right", 0.333f, 0.333f);
					}
					else
					{
						func_493("execpro", 215f, 45f, "right", 0.333f, 0.333f);
					}
					func_492("execpro", "Executive Producer", 0f, "HUD_COLOUR_TREVOR", 1);
					func_491("execpro", "SAM HOUSER", 95f, ",", 1);
					func_490("execpro", 0.1666f);
					iLocal_2707++;
				}
				break;
			
			case 69:
				if (iVar0 > 235333)
				{
					func_489("execpro", 0.1666f);
					iLocal_2707++;
				}
				break;
		}
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_2927, 255, 255, 255, 255, 0);
	}
}

void func_488(char* sParam0)//Position - 0x45F9C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "REMOVE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_489(char* sParam0, float fParam1)//Position - 0x45FC8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "HIDE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_490(char* sParam0, float fParam1)//Position - 0x45FFA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "SHOW_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_491(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)//Position - 0x4602C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "ADD_NAMES_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_492(char* sParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)//Position - 0x4608A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "ADD_ROLE_TO_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_493(char* sParam0, float fParam1, float fParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x460E8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_2927, "SETUP_CREDIT_BLOCK");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_494(bool bParam0)//Position - 0x4613F
{
	if (bParam0)
	{
		if (iLocal_2942 == 0)
		{
			iLocal_2942 = PED::ADD_SCENARIO_BLOCKING_AREA(-1862.303f, -607.0848f, 12.0363f, -1812.544f, -526.8602f, 36.9263f, 0, 1, 1, 1);
			PED::SET_PED_NON_CREATION_AREA(-1862.303f, -607.0848f, 13.0363f, -1812.544f, -526.8602f, 70.9263f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1862.303f, -607.0848f, 13.0363f, -1812.544f, -526.8602f, 70.9263f, 0, 0);
		}
		if (iLocal_2719 == -1)
		{
			iLocal_2719 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1839f, -579.4f, 15f, 10f, 70f, 10f, GlobalFunc_723(139.8f), 0, 7);
		}
	}
	else
	{
		if (iLocal_2942 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2942, 0);
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1862.303f, -607.0848f, 13.0363f, -1812.544f, -526.8602f, 70.9263f, 0);
			iLocal_2942 = 0;
		}
		if (iLocal_2719 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2719);
			iLocal_2719 = -1;
		}
	}
}


int func_496()//Position - 0x462CA
{
	if (iLocal_2933 == 0)
	{
		iLocal_2933 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1906.786f, -573.7576f, 19.0773f, "v_psycheoffice");
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iLocal_2933))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2933);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_497(int iParam0, bool bParam1)//Position - 0x46310
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
		func_719(&(Global_17052[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2));
		func_534(&(Global_17052[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_17052.f_7 = iParam0;
	Global_17052.f_39 = 1;
	GlobalFunc_10946(&Global_17052, 0, 0, 0);
	GlobalFunc_5124(iParam0);
	return 1;
}





































int func_534(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x48D37
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
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8364(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_711(*iParam0);
			GlobalFunc_7933(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7932(*iParam0);
			func_536(*iParam0, bParam8);
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


int func_536(int iParam0, bool bParam1)//Position - 0x48E4F
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_554(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_554(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10915(iParam0, 3, 169))
					{
						GlobalFunc_11257(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 20))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 21))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 22))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 10))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 50))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 59))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 22))
			{
				GlobalFunc_11257(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10915(iParam0, 12, 13))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 14))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 4))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 3))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 82))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 76))
			{
				GlobalFunc_11257(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 1))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10915(iParam0, 12, 12))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 15))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10915(iParam0, 3, 71))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 17))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 18))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 19))
			{
				if (!GlobalFunc_10917(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10915(iParam0, 12, 7))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 6))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 14, 88))
			{
				GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10915(iParam0, 8, 17))
			{
				GlobalFunc_11257(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10915(iParam0, 12, 11))
			{
				GlobalFunc_11257(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}


















void func_554(int iParam0, int iParam1)//Position - 0x4D3E4
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
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_556(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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


void func_556(int iParam0, var uParam1, bool bParam2)//Position - 0x4D65C
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
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11257(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11257(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_559(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_559(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_559(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x4D8F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11041(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_559(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			func_641(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_559(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_559(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_559(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_559(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_559(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_559(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_559(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_641(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11041(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_600(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_641(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9000(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_559(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_559(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_559(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_559(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = GlobalFunc_11041(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11041(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_559(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_559(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_559(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_559(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11159(iParam0, &uVar4))
		{
			func_559(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_559(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_559(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_559(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_559(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}









































void func_600(int iParam0, int iParam1, bool bParam2)//Position - 0x539B5
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_624(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_601(iParam0, bParam2, 0);
}

void func_601(int iParam0, bool bParam1, bool bParam2)//Position - 0x539F8
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = GlobalFunc_11161(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = GlobalFunc_11160(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5658(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}























void func_624(int iParam0, int iParam1)//Position - 0x5AABD
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		iVar13 = GlobalFunc_303(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					GlobalFunc_9004(13, 0, Global_68104);
					GlobalFunc_9004(14, 0, Global_68104);
					GlobalFunc_9004(15, 0, Global_68104);
					GlobalFunc_9004(16, 0, Global_68104);
					GlobalFunc_9004(71, 0, Global_68104);
					GlobalFunc_9004(72, 0, Global_68104);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9004(73, 0, Global_68104);
						GlobalFunc_9004(74, 0, Global_68104);
						GlobalFunc_9004(75, 0, Global_68104);
						GlobalFunc_9004(76, 0, Global_68104);
						GlobalFunc_9004(77, 0, Global_68104);
						GlobalFunc_9004(78, 0, Global_68104);
						GlobalFunc_9004(79, 0, Global_68104);
						GlobalFunc_9004(80, 0, Global_68104);
						GlobalFunc_9004(81, 0, Global_68104);
						GlobalFunc_9004(82, 0, Global_68104);
						GlobalFunc_9004(83, 0, Global_68104);
						GlobalFunc_9004(84, 0, Global_68104);
						GlobalFunc_9004(85, 0, Global_68104);
						GlobalFunc_9004(86, 0, Global_68104);
						GlobalFunc_9004(90, 0, Global_68104);
						GlobalFunc_9004(91, 0, Global_68104);
						GlobalFunc_9004(124, 0, Global_68104);
						GlobalFunc_9004(125, 0, Global_68104);
						GlobalFunc_9004(87, 0, Global_68104);
						GlobalFunc_9004(88, 0, Global_68104);
						GlobalFunc_9004(89, 0, Global_68104);
						iVar15 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									GlobalFunc_9004((129 + iVar14), 0, Global_68104);
								}
							}
							iVar14++;
						}
					}
					else
					{
						GlobalFunc_9004(73, 0, Global_68104);
						GlobalFunc_9004(74, 0, Global_68104);
						GlobalFunc_9004(75, 0, Global_68104);
						GlobalFunc_9004(76, 0, Global_68104);
						GlobalFunc_9004(77, 0, Global_68104);
						GlobalFunc_9004(78, 0, Global_68104);
						GlobalFunc_9004(79, 0, Global_68104);
						GlobalFunc_9004(80, 0, Global_68104);
						GlobalFunc_9004(81, 0, Global_68104);
						GlobalFunc_9004(82, 0, Global_68104);
						GlobalFunc_9004(83, 0, Global_68104);
						GlobalFunc_9004(84, 0, Global_68104);
						GlobalFunc_9004(85, 0, Global_68104);
						GlobalFunc_9004(92, 0, Global_68104);
						GlobalFunc_9004(87, 0, Global_68104);
						GlobalFunc_9004(88, 0, Global_68104);
						GlobalFunc_9004(89, 0, Global_68104);
						iVar32 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									GlobalFunc_9004((129 + iVar31), 0, Global_68104);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						GlobalFunc_9004(93, 0, Global_68104);
						GlobalFunc_9004(94, 0, Global_68104);
						GlobalFunc_9004(95, 0, Global_68104);
						GlobalFunc_9004(96, 0, Global_68104);
						GlobalFunc_9004(97, 0, Global_68104);
						GlobalFunc_9004(98, 0, Global_68104);
						GlobalFunc_9004(99, 0, Global_68104);
						GlobalFunc_9004(100, 0, Global_68104);
						GlobalFunc_9004(101, 0, Global_68104);
						GlobalFunc_9004(102, 0, Global_68104);
						GlobalFunc_9004(103, 0, Global_68104);
						GlobalFunc_9004(104, 0, Global_68104);
						GlobalFunc_9004(105, 0, Global_68104);
						GlobalFunc_9004(106, 0, Global_68104);
						GlobalFunc_9004(107, 0, Global_68104);
						GlobalFunc_9004(108, 0, Global_68104);
						GlobalFunc_9004(109, 0, Global_68104);
						GlobalFunc_9004(110, 0, Global_68104);
						GlobalFunc_9004(111, 0, Global_68104);
						GlobalFunc_9004(112, 0, Global_68104);
						GlobalFunc_9004(113, 0, Global_68104);
						GlobalFunc_9004(114, 0, Global_68104);
						GlobalFunc_9004(115, 0, Global_68104);
						GlobalFunc_9004(116, 0, Global_68104);
						GlobalFunc_9004(117, 0, Global_68104);
						GlobalFunc_9004(123, 0, Global_68104);
						iVar49 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									GlobalFunc_9004((129 + iVar48), 0, Global_68104);
								}
							}
							iVar48++;
						}
					}
					else
					{
						GlobalFunc_9004(93, 0, Global_68104);
						GlobalFunc_9004(94, 0, Global_68104);
						GlobalFunc_9004(95, 0, Global_68104);
						GlobalFunc_9004(96, 0, Global_68104);
						GlobalFunc_9004(97, 0, Global_68104);
						GlobalFunc_9004(98, 0, Global_68104);
						GlobalFunc_9004(99, 0, Global_68104);
						GlobalFunc_9004(100, 0, Global_68104);
						GlobalFunc_9004(101, 0, Global_68104);
						GlobalFunc_9004(102, 0, Global_68104);
						GlobalFunc_9004(103, 0, Global_68104);
						GlobalFunc_9004(104, 0, Global_68104);
						GlobalFunc_9004(105, 0, Global_68104);
						GlobalFunc_9004(106, 0, Global_68104);
						GlobalFunc_9004(107, 0, Global_68104);
						GlobalFunc_9004(108, 0, Global_68104);
						GlobalFunc_9004(109, 0, Global_68104);
						GlobalFunc_9004(110, 0, Global_68104);
						GlobalFunc_9004(111, 0, Global_68104);
						GlobalFunc_9004(112, 0, Global_68104);
						GlobalFunc_9004(113, 0, Global_68104);
						GlobalFunc_9004(114, 0, Global_68104);
						GlobalFunc_9004(115, 0, Global_68104);
						GlobalFunc_9004(116, 0, Global_68104);
						GlobalFunc_9004(117, 0, Global_68104);
						GlobalFunc_9004(118, 0, Global_68104);
						GlobalFunc_9004(119, 0, Global_68104);
						GlobalFunc_9004(120, 0, Global_68104);
						GlobalFunc_9004(121, 0, Global_68104);
						GlobalFunc_9004(122, 0, Global_68104);
						GlobalFunc_9004(123, 0, Global_68104);
						iVar66 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									GlobalFunc_9004((129 + iVar65), 0, Global_68104);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (GlobalFunc_5658(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						GlobalFunc_9004(Var0.f_11, 0, Global_68104);
					}
				}
				iVar82++;
			}
		}
	}
}

















void func_641(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x60338
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_6669(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_6669(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			func_624(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					func_624(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_642(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}

void func_642(int iParam0, int iParam1)//Position - 0x6045E
{
	int iVar0;
	struct<6> Var1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = GlobalFunc_303(iParam0);
			if (!GlobalFunc_8361(iParam1, -1))
			{
				if (GlobalFunc_5658(&Var1, iParam1, iVar0, iParam0, -1))
				{
					PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					GlobalFunc_294(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}





































































void func_711(int iParam0)//Position - 0x7B0FE
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
		func_556(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11038(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11038(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11038(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_556(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_719(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7BB0C
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
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, 1, 1);
				GlobalFunc_8364(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_711(*iParam0);
				GlobalFunc_7933(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7932(*iParam0);
				func_536(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
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























void func_742()//Position - 0x7D4DF
{
	int iVar0;
	
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -51.4f, -1097.6f, 26.4f) < 10000f)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -31.38349f, -1108.249f, 25.42573f, -34.1087f, -1115.329f, 28.92233f, 5.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -33.77984f, -1107.205f, 25.44551f, -57.51499f, -1098.496f, 29.82334f, 6f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -59.33848f, -1090.888f, 25.00315f, -26.98739f, -1103.201f, 28.92233f, 10.25f, 0, 1, 0))
				{
					if (!iLocal_2524)
					{
						func_744(16);
					}
					else
					{
						func_744(15);
					}
					iLocal_2524 = 0;
				}
				else
				{
					iLocal_2524 = 1;
				}
			}
			else
			{
				iLocal_2524 = 0;
			}
		}
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.24f, 25.25259f, 26.5f, 1, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.24f, 25.25259f, 26.5f))
		{
			func_744(17);
		}
		if ((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -31.38349f, -1108.249f, 25.42573f, -34.1087f, -1115.329f, 28.92233f, 5.5f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -33.77984f, -1107.205f, 25.44551f, -57.51499f, -1098.496f, 29.82334f, 6f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -59.33848f, -1090.888f, 25.00315f, -26.98739f, -1103.201f, 28.92233f, 10.25f))
		{
			func_744(14);
		}
	}
}


void func_744(int iParam0)//Position - 0x7D709
{
	if (!iLocal_2506)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		func_233();
		GlobalFunc_5652(&Local_3094, 1, 0);
		GlobalFunc_4935();
		GlobalFunc_10944(5, 0);
		if (iLocal_2509)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
			HUD::CLEAR_GPS_MULTI_ROUTE();
			iLocal_2509 = 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[0 /*7*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[0 /*7*/], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_3077[1 /*7*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_3077[1 /*7*/], 0);
		}
		if (!PED::IS_PED_INJURED(Local_2971.x))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_2971.x, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(Local_2971.x, 1);
		}
		if (!PED::IS_PED_INJURED(Local_2976))
		{
			TASK::TASK_SMART_FLEE_COORD(Local_2976, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 200f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(Local_2976, 1);
		}
		switch (iParam0)
		{
			case 0:
				break;
			
			case 3:
				sLocal_3167 = "AR1_FAILCAR2";
				break;
			
			case 2:
				sLocal_3167 = "AR1_FAILCAR";
				break;
			
			case 4:
				sLocal_3167 = "AR1_FAILCARS";
				break;
			
			case 1:
				sLocal_3167 = "AR1_FAILBUDDY";
				break;
			
			case 5:
				sLocal_3167 = "AR1_FAILLOST";
				break;
			
			case 9:
				sLocal_3167 = "AR1_FAILLEFT";
				break;
			
			case 6:
				sLocal_3167 = "CMN_GENDEST";
				break;
			
			case 7:
				sLocal_3167 = "AR1_STUCK";
				break;
			
			case 8:
				sLocal_3167 = "AR1_FRANSTUCK";
				break;
			
			case 10:
				sLocal_3167 = "AR1_FAILCOPS";
				break;
			
			case 11:
				sLocal_3167 = "AR1_FAILDAM";
				break;
			
			case 12:
				sLocal_3167 = "AR1_FAILDAMAF";
				break;
			
			case 13:
				sLocal_3167 = "AR1_FAILCARLEF";
				break;
			
			case 14:
				sLocal_3167 = "AR1_FAILSHOW1";
				break;
			
			case 15:
				sLocal_3167 = "AR1_FAILSHOW2";
				break;
			
			case 16:
				sLocal_3167 = "AR1_FAILSHOW3";
				break;
			
			case 17:
				sLocal_3167 = "AR1_FAILSHOW4";
				break;
			
			case 19:
				sLocal_3167 = "AR1_FAILSIMDEAD";
				break;
			
			case 20:
				sLocal_3167 = "AR1_FAILJIMDEAD";
				break;
			
			case 21:
				sLocal_3167 = "AR1_FAILDAM2";
				break;
			
			case 22:
				sLocal_3167 = "AR1_FCOPSDEAL";
				break;
			
			case 18:
				sLocal_3167 = "AR1_FAILSHOW5";
				break;
		}
		GlobalFunc_10835(sLocal_3167);
		while (!GlobalFunc_145())
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_2966))
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_2966, GlobalFunc_468()) || GlobalFunc_2227(PLAYER::PLAYER_PED_ID(), Local_2966))
			{
				func_57(&Local_2966, 1);
			}
		}
		iLocal_2506 = 1;
		func_806();
	}
}















void func_759(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7E8CB
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
		if (iParam0 != Global_Current_Checkpoint)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_Current_Checkpoint)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_Current_Checkpoint)
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7706(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		func_760(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}

void func_760(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7EA44
{
	func_761(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_761(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7EA60
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7700(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_763(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}


void func_763(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7F906
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = GlobalFunc_6674(iParam2);
	}
	if (func_769(iParam2, &iVar0, iParam3, iParam5))
	{
		GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				GlobalFunc_8370(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}






int func_769(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7FBA7
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (GlobalFunc_5651(*uParam1, GlobalFunc_8315(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}




















void func_789(int iParam0, bool bParam1)//Position - 0x82E2C
{
	GlobalFunc_2195();
	iLocal_2642 = 0;
	iLocal_3164 = iParam0;
	iLocal_3165 = 4;
	func_806();
	if (bParam1)
	{
		if (iLocal_3164 >= 10)
		{
			func_759(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		}
		else if (iLocal_3164 >= 6)
		{
			func_759(2, "LOSE_COPS", 0, 0, 0, 1);
		}
		else if (iLocal_3164 >= 4)
		{
			func_759(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		else
		{
			func_759(0, "CHOOSE_CAR", 0, 0, 0, 1);
		}
	}
}



void func_792()//Position - 0x82EF1
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5385(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	HUD::REQUEST_ADDITIONAL_TEXT("ARM1", 0);
	GlobalFunc_173(&Local_3168, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 182, 1);
	Local_3077[0 /*7*/].f_2 = { -1878.579f, -579.5922f, 10.777f };
	Local_3077[0 /*7*/].f_5 = 320.3026f;
	Local_3077[0 /*7*/].f_6 = 1;
	Local_3077[1 /*7*/].f_2 = { -1881.198f, -577.008f, 10.769f };
	Local_3077[1 /*7*/].f_5 = 319.7534f;
	Local_3077[1 /*7*/].f_6 = 2;
	iLocal_2657[0] = 901;
	iLocal_2657[1] = 902;
	iLocal_2657[2] = 903;
	iLocal_2657[3] = 904;
	iLocal_2657[4] = 905;
	iLocal_2657[5] = 906;
	iLocal_2657[6] = 907;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 0), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
	iLocal_2941 = PED::ADD_SCENARIO_BLOCKING_AREA(50.2705f, -636.6755f, 5.3062f, 74.2078f, -610.5507f, 42.6258f, 0, 1, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(-112.6669f, -1539.642f, 20.2851f, 74.2658f, -1438.424f, 42.8005f, 0, 1);
	func_301(1);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_UNLOCK(GlobalFunc_4917(1));
	PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
	GlobalFunc_10617(135, 1);
	GlobalFunc_10617(136, 1);
	GlobalFunc_10617(137, 1);
	GlobalFunc_10617(138, 1);
	GlobalFunc_695(0);
	GlobalFunc_7678(1, 0);
	GlobalFunc_7621(98, 1, 0, 1, 0);
	GlobalFunc_7934(45, 0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("clear", 20f);
	iLocal_2655 = AUDIO::GET_SOUND_ID();
	Global_85392 = 3;
}














void func_806()//Position - 0x8419F
{
	int iVar0;
	
	GlobalFunc_842(0, 0);
	GRAPHICS::_0x25FC3E33A31AD0C9(1);
	HUD::CLEAR_HELP(1);
	HUD::FLASH_WANTED_DISPLAY(0);
	GlobalFunc_5385(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	PED::SET_CREATE_RANDOM_COPS(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	AUDIO::SET_RADIO_AUTO_UNFREEZE(1);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	VEHICLE::_0x0A436B8643716D14();
	MISC::RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(1);
	GlobalFunc_7632(0);
	GlobalFunc_4937(0, 0);
	GlobalFunc_2224(0);
	GlobalFunc_601(9, 0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_563(0);
	GlobalFunc_9132(0);
	STREAMING::NEW_LOAD_SCENE_STOP();
	CAM::STOP_GAMEPLAY_HINT(0);
	STREAMING::_0x20C6C7E4EB082A7F(0);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		if (iLocal_3165 == 4)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
	{
		if (iLocal_3165 == 4)
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		}
		CUTSCENE::STOP_CUTSCENE(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	if (iLocal_3165 == 4)
	{
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_2539)
	{
		RECORDING::_0x81CBAE94390F9F89();
		iLocal_2539 = 0;
	}
	GlobalFunc_7621(180, 0, 0, 1, 0);
	func_459(0);
	func_494(0);
	func_346(0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2928)
	{
		if (iLocal_2928[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2928[iVar0], 0);
			iLocal_2928[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_2878[0] != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2878[0], 0);
		iLocal_2878[0] = 0;
	}
	if (iLocal_2878[1] != 0)
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2878[1], 0);
		iLocal_2878[1] = 0;
	}
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (iLocal_2939 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2939, 0);
		iLocal_2939 = 0;
	}
	if (iLocal_2940 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2940, 0);
		iLocal_2940 = 0;
	}
	GlobalFunc_200(&Local_3168, 5);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3077[iLocal_2643 /*7*/], 0))
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3077[iLocal_2643 /*7*/], 0f);
	}
	CAM::DESTROY_ALL_CAMS(0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (!CAM::_0x3044240D2E0FA842())
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	if (iLocal_2537)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_2927);
		iLocal_2537 = 0;
	}
	func_233();
	func_810(0);
	func_809(0);
	func_808(0);
	if (iLocal_2542)
	{
		CAM::_0x2A2173E46DAECD12(1, iLocal_3166);
		iLocal_2542 = 0;
	}
	if (iLocal_2503)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2741, Local_2744, true, 1);
		iLocal_2503 = 0;
	}
	if (iLocal_2509)
	{
		HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iLocal_2509 = 0;
	}
	if (iLocal_2931 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2931);
		iLocal_2931 = 0;
	}
	if (iLocal_2932 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2932);
		iLocal_2932 = 0;
	}
	if (iLocal_2933 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2933);
		iLocal_2933 = 0;
	}
	if (iLocal_2934 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2934);
		iLocal_2934 = 0;
	}
	if (iLocal_2935 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_2935);
		iLocal_2935 = 0;
	}
	func_460(0);
	func_357(0);
	func_469(0);
	ENTITY::REMOVE_MODEL_HIDE(-18.3539f, -1438.784f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), 1);
	ENTITY::REMOVE_MODEL_HIDE(-18.3594f, -1438.133f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), 1);
	STREAMING::REQUEST_IPL("ferris_finale_Anim");
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (iLocal_2686 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2686);
		iLocal_2686 = -1;
	}
	if (iLocal_2687 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2687);
		iLocal_2687 = -1;
	}
	if (iLocal_2688 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2688);
		iLocal_2688 = -1;
	}
	if (iLocal_2689 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2689);
		iLocal_2689 = -1;
	}
	if (iLocal_2690 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_2690);
		iLocal_2690 = -1;
	}
	GlobalFunc_10617(48, 0);
	GlobalFunc_10617(47, 0);
	GlobalFunc_2201(19, 0);
	GlobalFunc_2201(20, 0);
	GlobalFunc_2201(21, 0);
	GlobalFunc_2201(22, 0);
	GlobalFunc_2201(23, 0);
	GlobalFunc_2201(24, 0);
	GlobalFunc_2201(25, 0);
	GlobalFunc_4948(&uLocal_3333, 0, 0);
	if (iLocal_3165 != 4)
	{
		GlobalFunc_5105();
		GlobalFunc_695(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef2"), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt2"), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ninef"), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(1, 0), 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
		if (iLocal_2941 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2941, 0);
		}
		GlobalFunc_10617(135, 0);
		GlobalFunc_10617(136, 0);
		GlobalFunc_10617(137, 0);
		GlobalFunc_10617(138, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-112.6669f, -1539.642f, 20.2851f, 74.2658f, -1438.424f, 42.8005f, 1);
		func_301(0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		GlobalFunc_5081(1, 1);
		GlobalFunc_7621(98, 0, 1, 1, 0);
		GlobalFunc_5661(45, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 182, 1);
		}
		GlobalFunc_583(4, PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::RELEASE_SOUND_ID(iLocal_2655);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		HUD::CLEAR_PRINTS();
		func_299();
		GlobalFunc_5652(&Local_3094, 1, 0);
		GlobalFunc_10944(5, 0);
		func_362(0, 1);
		Global_85392 = 3;
		AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_ON");
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_2794);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_2795);
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3077[0 /*7*/].f_6, sLocal_2783);
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_3077[1 /*7*/].f_6, sLocal_2783);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2787);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2789);
		STREAMING::REMOVE_ANIM_DICT("map_objects");
		STREAMING::REMOVE_ANIM_DICT(sLocal_2790);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2792);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2793);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2797);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2796);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2798);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2788);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2799);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2791);
		STREAMING::REMOVE_ANIM_DICT(sLocal_2800);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2950);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2943);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2944);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2945);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2946);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2947);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2948);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2949);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2950);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2951);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2951);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2952);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2953);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2954);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2955);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2956);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2957);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2958);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2959);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2960);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2961);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2962);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2963);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2965);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2964);
		GlobalFunc_7052(14);
		GlobalFunc_7052(18);
		MISC::CLEAR_AREA(0f, 0f, 0f, 10000f, 1, 0, 0, 0);
		GlobalFunc_4956();
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	}
}


void func_808(bool bParam0)//Position - 0x848D6
{
	int iVar0;
	
	func_300(&(Local_3077[0 /*7*/]), bParam0);
	func_300(&(Local_3077[1 /*7*/]), bParam0);
	func_300(&uLocal_2801, 1);
	func_300(&iLocal_2802, bParam0);
	func_300(&iLocal_2803, bParam0);
	func_300(&iLocal_2804, bParam0);
	func_300(&iLocal_2805, 1);
	func_300(&uLocal_2806, bParam0);
	func_300(&iLocal_2807, bParam0);
	func_300(&uLocal_2836, bParam0);
	func_300(&iLocal_2838, bParam0);
	func_300(&iLocal_2837, bParam0);
	func_300(&iLocal_2839, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2808)
	{
		func_300(&(iLocal_2808[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2813)
	{
		func_300(&(iLocal_2813[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2815)
	{
		func_300(&(iLocal_2815[iVar0]), bParam0);
		iVar0++;
	}
}

void func_809(bool bParam0)//Position - 0x849BC
{
	int iVar0;
	
	func_57(&Local_2966, bParam0);
	func_57(&Local_2971, bParam0);
	func_57(&Local_2976, bParam0);
	func_57(&Local_3061, bParam0);
	func_57(&(iLocal_2840[0]), bParam0);
	func_57(&(iLocal_2840[1]), bParam0);
	func_57(&uLocal_3013, bParam0);
	func_57(&iLocal_2844, bParam0);
	func_57(&iLocal_2845, bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_2981)
	{
		func_57(&(Local_2981[iVar0 /*5*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_3002)
	{
		func_57(&(Local_3002[iVar0 /*5*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_3018)
	{
		func_57(&(Local_3018[iVar0 /*7*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_3066)
	{
		func_57(&(Local_3066[iVar0 /*5*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2846)
	{
		func_57(&(iLocal_2846[iVar0]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2857)
	{
		func_57(&(iLocal_2857[iVar0]), bParam0);
		iVar0++;
	}
}

void func_810(bool bParam0)//Position - 0x84AE4
{
	int iVar0;
	
	GlobalFunc_2206(&uLocal_2886, bParam0);
	GlobalFunc_2206(&iLocal_2896, bParam0);
	GlobalFunc_2206(&(iLocal_2898[0]), bParam0);
	GlobalFunc_2206(&(iLocal_2898[1]), bParam0);
	GlobalFunc_2206(&iLocal_2901, bParam0);
	GlobalFunc_2206(&iLocal_2903, bParam0);
	GlobalFunc_2206(&iLocal_2897, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_2887)
	{
		GlobalFunc_2206(&(iLocal_2887[iVar0]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2904)
	{
		GlobalFunc_2206(&(iLocal_2904[iVar0]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2921)
	{
		GlobalFunc_2206(&(iLocal_2921[iVar0]), 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_2924)
	{
		GlobalFunc_2206(&(iLocal_2924[iVar0]), 0);
		iVar0++;
	}
}






