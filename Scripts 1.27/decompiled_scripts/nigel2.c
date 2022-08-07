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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	struct<3> Local_33 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 10;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	bool bLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	bool bLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	bool bLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	bool bLocal_152 = 0;
	float fLocal_153[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_239[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_325[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_411[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_497[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_583 = 0f;
	float fLocal_584 = 0f;
	float fLocal_585 = 0f;
	float fLocal_586 = 0f;
	float fLocal_587[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_658[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_729[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_800[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_871[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_942[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1013[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1084[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1155[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1226[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1297 = 0f;
	float fLocal_1298 = 0f;
	float fLocal_1299 = 0f;
	float fLocal_1300 = 0f;
	float fLocal_1301 = 0f;
	float fLocal_1302 = 0f;
	float fLocal_1303 = 0f;
	float fLocal_1304 = 0f;
	float fLocal_1305 = 0f;
	float fLocal_1306 = 0f;
	float fLocal_1307 = 0f;
	float fLocal_1308 = 0f;
	float fLocal_1309 = 0f;
	float fLocal_1310 = 0f;
	float fLocal_1311 = 0f;
	float fLocal_1312 = 0f;
	float fLocal_1313 = 0f;
	float fLocal_1314 = 0f;
	float fLocal_1315 = 0f;
	float fLocal_1316 = 0f;
	float fLocal_1317 = 0f;
	int iLocal_1318[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1404[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1490[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1576[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1647[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1718[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1789[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1860 = 0;
	int iLocal_1861 = 0;
	int iLocal_1862 = 0;
	int iLocal_1863 = 0;
	int iLocal_1864 = 0;
	int iLocal_1865 = 0;
	int iLocal_1866 = 0;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	int iLocal_1869 = 0;
	int iLocal_1870 = 0;
	int iLocal_1871 = 0;
	int iLocal_1872 = 0;
	int iLocal_1873 = 0;
	int iLocal_1874 = 0;
	int iLocal_1875 = 0;
	int iLocal_1876 = 0;
	struct<3> Local_1877[85];
	struct<3> Local_2133[70];
	struct<3> Local_2344[70];
	struct<3> Local_2555 = { 0, 0, 0 } ;
	struct<3> Local_2558 = { 0, 0, 0 } ;
	struct<3> Local_2561 = { 0, 0, 0 } ;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	struct<3> Local_2570 = { 0, 0, 0 } ;
	struct<3> Local_2573 = { 0, 0, 0 } ;
	struct<3> Local_2576 = { 0, 0, 0 } ;
	struct<3> Local_2579 = { 0, 0, 0 } ;
	char cLocal_2582[64] = "";
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2685[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2756[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2827 = 0;
	int iLocal_2828 = 0;
	int iLocal_2829 = 0;
	int iLocal_2830[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2916[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2932[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3003[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3074[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3085 = 0;
	int iLocal_3086 = 0;
	int iLocal_3087 = 0;
	var uLocal_3088 = 15;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	int iLocal_3104 = 0;
	int iLocal_3105 = 0;
	int iLocal_3106 = 0;
	struct<61> Local_3107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3168 = 0;
	int iLocal_3169 = 0;
	int iLocal_3170[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3178[3] = { 0, 0, 0 };
	int iLocal_3182 = 0;
	int iLocal_3183[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3192 = 0;
	int iLocal_3193[2] = { 0, 0 };
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	bool bLocal_3205 = 0;
	int iLocal_3206 = 0;
	bool bLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	bool bLocal_3210 = 0;
	int iLocal_3211 = 0;
	bool bLocal_3212 = 0;
	bool bLocal_3213 = 0;
	bool bLocal_3214 = 0;
	int iLocal_3215[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3228 = 0;
	bool bLocal_3229 = 0;
	bool bLocal_3230 = 0;
	int iLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	bool bLocal_3239 = 0;
	int iLocal_3240 = 0;
	int iLocal_3241 = 0;
	int iLocal_3242 = 0;
	int iLocal_3243 = 0;
	var uLocal_3244 = 0;
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
	int iLocal_3260 = 0;
	int iLocal_3261 = 0;
	int iLocal_3262 = 0;
	float fLocal_3263 = 0f;
	float fLocal_3264 = 0f;
	float fLocal_3265 = 0f;
	float fLocal_3266 = 0f;
	float fLocal_3267 = 0f;
	float fLocal_3268 = 0f;
	int iLocal_3269 = 0;
	int iLocal_3270 = 0;
	int iLocal_3271 = 0;
	int iLocal_3272 = 0;
	struct<8> Local_3273 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	int iLocal_3285 = 0;
	int iLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_3295 = NULL;
	char* sLocal_3296 = NULL;
	char* sLocal_3297 = NULL;
	char* sLocal_3298 = NULL;
	char* sLocal_3299 = NULL;
	char* sLocal_3300 = NULL;
	char* sLocal_3301 = NULL;
	char* sLocal_3302 = NULL;
	var uLocal_3303 = 16;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
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
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	struct<7> Local_3468 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3475 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3482 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3489 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3496 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_3503 = { 0, 0 } ;
	struct<2> Local_3505[9];
	struct<2> Local_3524[4];
	struct<2> Local_3533[3];
	struct<2> Local_3540 = { 0, 0 } ;
	int iLocal_3542 = 0;
	char cLocal_3543[24] = "";
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	struct<3> Local_3549 = { 0, 0, 0 } ;
	struct<3> Local_3552 = { 0, 0, 0 } ;
	struct<3> Local_3555 = { 0, 0, 0 } ;
	struct<3> Local_3558 = { 0, 0, 0 } ;
	struct<3> Local_3561 = { 0, 0, 0 } ;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	fLocal_41 = 80f;
	fLocal_42 = 140f;
	fLocal_43 = 180f;
	iLocal_46 = 3;
	uLocal_91 = GlobalFunc_4946(64);
	uLocal_92 = GlobalFunc_4946(63);
	iLocal_93 = joaat("u_m_m_aldinapoli");
	iLocal_94 = joaat("premier");
	iLocal_110 = 1;
	iLocal_111 = 65;
	iLocal_112 = 49;
	iLocal_113 = 64;
	uLocal_117 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_118 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_122 = true;
	bLocal_129 = true;
	bLocal_151 = true;
	fLocal_1297 = 120f;
	fLocal_1298 = 0f;
	fLocal_1300 = 1f;
	fLocal_1301 = 0f;
	fLocal_1302 = 1f;
	fLocal_1303 = 30f;
	fLocal_1305 = 1f;
	fLocal_1306 = 5f;
	fLocal_1307 = 1f;
	fLocal_1308 = 1f;
	fLocal_1309 = 100f;
	fLocal_1310 = 100f;
	fLocal_1311 = 0f;
	fLocal_1312 = 7000f;
	fLocal_1313 = 0f;
	fLocal_1314 = 0f;
	fLocal_1315 = 0.3f;
	fLocal_1316 = 0.5f;
	fLocal_1317 = 50f;
	iLocal_1863 = -1;
	iLocal_1871 = -1;
	iLocal_1872 = -1;
	bLocal_3168 = true;
	sLocal_3295 = "Nigel2U";
	sLocal_3296 = "Nigel2Outro";
	sLocal_3297 = "Mrs_Thornhill";
	sLocal_3298 = "Nigel";
	sLocal_3299 = "Trevor";
	sLocal_3300 = func_564();
	sLocal_3301 = "Showroom_Car";
	sLocal_3302 = "EXL_2_abandoned_car";
	StringCopy(&cLocal_3543, "NMT_2_MCS_2", 24);
	Local_3107 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_3107);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10544(1);
		func_534();
	}
	func_527();
	if (GlobalFunc_Is_Mission_Retry())
	{
		GlobalFunc_4923(&Local_3107, 0, 1);
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(-1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				iLocal_3193[0] = 1;
				func_513(1, 0);
				break;
			
			case 1:
				GlobalFunc_4972(391.08f, -615.87f, 28.33f, 333.66f, 0, 0);
				func_513(3, 0);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_VSADN", 0);
		func_497(Local_3107.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_494();
			Local_3555 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
			switch (iLocal_3104)
			{
				case 0:
					func_416();
					break;
				
				case 1:
					func_364();
					break;
				
				case 2:
					func_293();
					break;
				
				case 3:
					func_285();
					break;
				
				case 4:
					func_92();
					break;
				
				case 5:
					func_46();
					break;
				
				case 6:
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				}
		}
		if (bLocal_3168 == 0)
		{
			func_1(iLocal_3105);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x2F4
{
	int iVar0;
	
	if (iLocal_3104 == iParam0)
	{
		if (GlobalFunc_188())
		{
			iVar0 = 0;
			if (iLocal_3104 == 2 || iLocal_3104 == 3)
			{
				iVar0 = Local_3489;
			}
			GlobalFunc_4967(iVar0, -1, 0);
		}
		func_34(iLocal_3104);
		func_32(iLocal_3104);
		if (iLocal_3104 == 3)
		{
			func_22(1, 0, 1);
		}
		else if (iLocal_3104 == 1)
		{
			func_22(0, 1, 1);
		}
		else
		{
			func_22(1, 1, 1);
		}
		bLocal_3168 = true;
		iLocal_3169 = 0;
		if (iLocal_3104 == 4)
		{
			GlobalFunc_79(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x383
{
	struct<3> Var0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_4935();
		HUD::CLEAR_PRINTS();
		switch (iLocal_3104)
		{
			case 0:
				if (iLocal_3106 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			case 1:
				if (iLocal_3106 == 1)
				{
					bLocal_3210 = true;
					func_14(Local_3475, &Local_3489, 0);
					func_14(Local_3468, &Local_3489, 2);
					func_14(Local_3482, &Local_3496, -1);
					if (GlobalFunc_4947(Local_3496))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3496))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3496);
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3496, 393.4298f, -621.3337f, 28.4891f, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION(Local_3496, -0.0081f, -0.0061f, 0.7994f, -0.6007f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3496);
					}
					STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
					while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel2"))
					{
						SYSTEM::WAIT(0);
					}
					func_12(1, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(393.38f, -617.53f, 27.91f, 50f, 0, 0, 0, 0, 0);
					if (!GlobalFunc_188())
					{
						func_14(PLAYER::PLAYER_PED_ID(), &Local_3489, -1);
						func_11(&Local_3489, 364.7079f, -608.3558f, 27.7364f, 246.4916f, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						if (iLocal_3169 == 0)
						{
							if (iLocal_3105 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 13, 5000, 0, 0);
									iLocal_3169 = 1;
								}
							}
						}
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 150f, 0, 0, 0, 0, 0);
					iLocal_3106 = 2;
				}
				break;
			
			case 2:
				if (iLocal_3106 == 1)
				{
					func_14(Local_3475, &Local_3489, 0);
					func_14(Local_3468, &Local_3489, 2);
					if (!GlobalFunc_188())
					{
						func_14(PLAYER::PLAYER_PED_ID(), &Local_3489, -1);
						Var0 = { 391.08f, -615.87f, 28.33f };
						func_11(&Local_3489, Var0, 333.66f, 0);
						if (iLocal_3169 == 0)
						{
							if (iLocal_3105 == 3)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 25f, 13, 5000, 0, 0);
									iLocal_3169 = 1;
								}
							}
						}
					}
					iLocal_3106 = 2;
				}
				break;
			
			case 3:
				if (iLocal_3106 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			default:
				break;
			}
	}
}









void func_11(int iParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x801
{
	if (GlobalFunc_115(*iParam0))
	{
		if (bParam5)
		{
			Param1.f_2 = -200f;
		}
		ENTITY::SET_ENTITY_COORDS(*iParam0, Param1, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
	}
}

void func_12(bool bParam0, bool bParam1)//Position - 0x839
{
	float fVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3540))
	{
		fVar0 = 115000f;
		fVar1 = 116821f;
		if (bParam1)
		{
			if (fLocal_3265 < (fVar0 - 3000f))
			{
				return;
			}
		}
		STREAMING::REQUEST_MODEL(Local_3540.f_1);
		if (bParam0)
		{
			while (!STREAMING::HAS_MODEL_LOADED(Local_3540.f_1))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bParam1)
		{
			if (fLocal_3265 < fVar0 || fLocal_3265 > fVar1)
			{
				return;
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(Local_3540.f_1))
		{
			Local_3540 = VEHICLE::CREATE_VEHICLE(Local_3540.f_1, 419.3891f, -604.8867f, 27.7732f, 0f, 1, 1);
		}
		if (GlobalFunc_4947(Local_3540))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3540.f_1);
			ENTITY::SET_ENTITY_QUATERNION(Local_3540, 0f, 0.0006f, 0.9996f, -0.0275f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3540, 1);
		}
	}
}


void func_14(int iParam0, int iParam1, int iParam2)//Position - 0x937
{
	int iVar0;
	
	if (GlobalFunc_115(iParam0) && GlobalFunc_4947(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			func_17(iParam0, *iParam1, iParam2);
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2);
			if (iVar0 != iParam0)
			{
				if (GlobalFunc_115(iVar0))
				{
					func_15(iVar0);
					func_14(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_15(int iParam0)//Position - 0x999
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 0f, 0f, 0f };
	fVar3 = 0f;
	if (GlobalFunc_115(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			while (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, 0, &Var0, 0))
			{
				SYSTEM::WAIT(0);
				Var0.x = (Var0.x + 2f);
			}
			fVar3 = ENTITY::GET_ENTITY_HEADING(iParam0);
			GlobalFunc_6523(iParam0, Var0, fVar3, 1, 1);
		}
	}
}


void func_17(int iParam0, int iParam1, int iParam2)//Position - 0xA3E
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		if (GlobalFunc_115(iParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(iParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, uParam2);
		}
	}
}





void func_22(int iParam0, int iParam1, int iParam2)//Position - 0xB43
{
	func_23(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}

void func_23(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xB77
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_47 != 0 && iLocal_47 != joaat("object")) && iLocal_47 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_32(int iParam0)//Position - 0xE2D
{
	switch (iParam0)
	{
		case 2:
			if (iLocal_3254 == 0)
			{
				while (!GlobalFunc_4613("NIGEL2_START", 0))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_3254++;
			}
			if (iLocal_3254 == 1)
			{
				while (!GlobalFunc_4613("NIGEL2_CAR", 0))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_3254++;
			}
			if (iLocal_3254 == 2)
			{
				while (!GlobalFunc_4613("NIGEL2_JUMP", 1))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_3254++;
			}
			break;
	}
}


void func_34(int iParam0)//Position - 0xED7
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 1:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(22f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				break;
			
			case 3:
				if (iLocal_3105 == 3)
				{
					func_14(PLAYER::PLAYER_PED_ID(), &Local_3489, -1);
					func_11(&Local_3489, 391.08f, -615.87f, 28.33f, 333.66f, 0);
					func_42(&cLocal_3543);
					func_41();
					while (!GlobalFunc_8027(1, 1093140480, 0))
					{
						func_42(&cLocal_3543);
						func_41();
						SYSTEM::WAIT(0);
					}
				}
				break;
			}
	}
}







void func_41()//Position - 0x1291
{
	if (GlobalFunc_115(Local_3475))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_3298, Local_3475, 0);
		}
	}
	if (GlobalFunc_115(Local_3468))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_3297, Local_3468, 0);
		}
	}
	if (GlobalFunc_115(Local_3482))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_3300, Local_3482, 0);
		}
	}
}

void func_42(char[4] cParam0)//Position - 0x12ED
{
	GlobalFunc_8380(1, 1, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE(cParam0, 8);
}




void func_46()//Position - 0x1406
{
	char* sVar0;
	var uVar1;
	
	sVar0 = 0;
	switch (iLocal_3106)
	{
		case 0:
			if (GlobalFunc_4613("NIGEL2_MISSION_FAIL", 0))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				func_90();
				if (GlobalFunc_4947(Local_3489))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_3489, 6f, 2, 0);
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3475))
				{
					if (PED::IS_PED_IN_GROUP(Local_3475))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_3475);
					}
					TASK::CLEAR_PED_TASKS(Local_3475);
					if ((iLocal_3245 == 7 || iLocal_3245 == 6) || iLocal_3245 == 4)
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3475, 2, 0);
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_3475, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3475, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						PED::SET_PED_KEEP_TASK(Local_3475, 1);
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
				{
					if (PED::IS_PED_IN_GROUP(Local_3468))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_3468);
					}
					TASK::CLEAR_PED_TASKS(Local_3468);
					if ((iLocal_3245 == 5 || iLocal_3245 == 4) || iLocal_3245 == 6)
					{
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3468, 2, 0);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_3468, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_3468, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							PED::SET_PED_KEEP_TASK(Local_3468, 1);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Local_3468, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_3468, 1);
						}
					}
				}
				if (GlobalFunc_4947(Local_3496))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3496))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3496);
					}
					if (!bLocal_3212)
					{
						func_64(0, 1);
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
				{
					if (bLocal_3212)
					{
						PED::SET_PED_KEEP_TASK(Local_3482, 1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_3482);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3482, 2, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3482, 8, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3482, 1, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3482, 32, 0);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3482, 64, 0);
						if ((GlobalFunc_4947(Local_3496) && PED::IS_PED_IN_VEHICLE(Local_3482, Local_3496, 0)) && GlobalFunc_4947(Local_3489))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_3496, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, 1);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_3482, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_3482, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
						PED::SET_PED_KEEP_TASK(Local_3482, 1);
					}
				}
				switch (iLocal_3245)
				{
					case 1:
						sVar0 = "NIGEL2_F1";
						break;
					
					case 2:
						sVar0 = "NIGEL2_F2";
						break;
					
					case 3:
						sVar0 = "NIGEL2_F3";
						break;
					
					case 4:
						sVar0 = "NIGEL2_F7";
						break;
					
					case 5:
						sVar0 = "NIGEL2_F4";
						break;
					
					case 6:
						sVar0 = "NIGEL2_F8";
						break;
					
					case 7:
						sVar0 = "NIGEL2_F5";
						break;
					
					case 8:
						sVar0 = "NIGEL2_F6";
						break;
					
					case 9:
						sVar0 = "NIGEL2_F10";
						break;
					
					case 10:
						sVar0 = "NIGEL2_F9";
						break;
					
					default:
						break;
				}
				if (iLocal_3245 == 0)
				{
					GlobalFunc_10544(1);
				}
				else
				{
					GlobalFunc_10816(sVar0, 1);
				}
				iLocal_3106 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (func_59(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_5129(279.4137f, -585.8815f, 42.3102f, 48.8028f);
					GlobalFunc_5166(276.27f, -584f, 42.73f, 337.4f);
				}
				func_47(1);
				func_534();
			}
			break;
	}
}

void func_47(bool bParam0)//Position - 0x17CF
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_52(&(Local_3505[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_52(&(Local_3524[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	if (GlobalFunc_115(Local_3482))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3482, 0);
		if (!PED::IS_PED_INJURED(Local_3482))
		{
			PED::SET_PED_KEEP_TASK(Local_3482, 1);
		}
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3482.f_1, 0);
	func_52(&Local_3482, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3468.f_1, 0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
	{
		PED::SET_PED_KEEP_TASK(Local_3468, 1);
	}
	func_52(&Local_3468, bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3475.f_1, 0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3475))
	{
		PED::SET_PED_KEEP_TASK(Local_3475, 1);
	}
	func_52(&Local_3475, bParam0);
	GlobalFunc_2346(&Local_3273);
	if (GlobalFunc_4947(Local_3489))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3489, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3489, 1);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3489, 1);
		if (iLocal_3242)
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_3489, 0);
			iLocal_3242 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3489))
	{
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_3489);
	}
	func_48(&Local_3489, bParam0);
	if (GlobalFunc_4947(Local_3496))
	{
		ENTITY::SET_ENTITY_PROOFS(Local_3496, 0, 0, 0, 0, 0, 0, 0, 0);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_3496, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3496, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3496, 1);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3496, 1);
		if (bLocal_3212)
		{
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3496, 0f);
		}
	}
	func_48(&Local_3496, bParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_48(&(Local_3533[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	func_48(&Local_3540, bParam0);
	func_52(&Local_3503, bParam0);
}

void func_48(var uParam0, bool bParam1)//Position - 0x1971
{
	if (bParam1)
	{
		GlobalFunc_6692(uParam0);
	}
	else
	{
		GlobalFunc_131(uParam0);
	}
}




void func_52(int iParam0, bool bParam1)//Position - 0x1A8B
{
	if (bParam1)
	{
		GlobalFunc_881(iParam0);
	}
	else
	{
		GlobalFunc_132(iParam0, 1, 0, 1);
	}
}







int func_59(int iParam0)//Position - 0x1BBB
{
	int iVar0;
	struct<3> Var1;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
	{
		return 0;
	}
	if (GlobalFunc_115(iParam0))
	{
		iVar0 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
		if (func_60(iVar0))
		{
			return 1;
		}
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var1) == iLocal_3261)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x1C11
{
	if ((((iParam0 == MISC::GET_HASH_KEY("v_40_Room1") || iParam0 == MISC::GET_HASH_KEY("v_40_Room2")) || iParam0 == MISC::GET_HASH_KEY("v_40_Room3")) || iParam0 == MISC::GET_HASH_KEY("v_40_Room4")) || iParam0 == MISC::GET_HASH_KEY("V_40_Room005"))
	{
		return 1;
	}
	return 0;
}




void func_64(bool bParam0, bool bParam1)//Position - 0x1CF1
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2582))
	{
		iLocal_135 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2598);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_151)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_88());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_84();
			func_83();
			func_80();
		}
		else
		{
			func_76();
			func_75();
		}
		if (bParam1)
		{
			GlobalFunc_9158(0);
		}
	}
}











void func_75()//Position - 0x227C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		iLocal_2830[iVar0] = 0;
		Local_1877[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_153[iVar0] = 0f;
		fLocal_239[iVar0] = 0f;
		fLocal_325[iVar0] = 0f;
		fLocal_411[iVar0] = 0f;
		iLocal_1318[iVar0] = 0;
		fLocal_497[iVar0] = 0f;
		iLocal_1404[iVar0] = 0;
		iLocal_2599[iVar0] = 0;
		iLocal_1490[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2916[iVar0] = 0;
		iVar0++;
	}
	iLocal_1860 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_2932[iVar0] = 0;
		Local_2133[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1013[iVar0] = 0f;
		fLocal_1084[iVar0] = 0f;
		fLocal_1155[iVar0] = 0f;
		fLocal_1226[iVar0] = 0f;
		iLocal_1789[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_3074[iVar0] = 0;
		iVar0++;
	}
	iLocal_1862 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_3003[iVar0] = 0;
		Local_2344[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_587[iVar0] = 0f;
		fLocal_658[iVar0] = 0f;
		fLocal_729[iVar0] = 0f;
		fLocal_800[iVar0] = 0f;
		iLocal_1576[iVar0] = 0;
		fLocal_871[iVar0] = 0f;
		iLocal_1647[iVar0] = 0;
		iLocal_2756[iVar0] = 0;
		iLocal_1718[iVar0] = 0;
		iVar0++;
	}
	iLocal_1861 = 0;
	iLocal_1864 = 0;
	iLocal_1867 = 0;
	iLocal_1868 = 0;
	iLocal_1869 = 0;
}

void func_76()//Position - 0x2409
{
	func_79();
	func_78();
	func_77();
}

void func_77()//Position - 0x241D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3003[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3003[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3003[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3003[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3003[iVar0]));
			}
		}
		iLocal_1647[iVar0] = 0;
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1576[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2756[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2756[iVar0]);
		}
		iVar0++;
	}
}

void func_78()//Position - 0x2513
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2932[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2932[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2932[iVar0]));
			}
		}
		iLocal_1789[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1865 = 0;
	iLocal_1862 = 0;
}

void func_79()//Position - 0x2590
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2830[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2830[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2830[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2830[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2830[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2830[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2830[iVar0]));
			}
		}
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1318[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582);
			}
		}
		iLocal_1404[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_2599[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2599[iVar0]);
		}
		iVar0++;
	}
	iLocal_1864 = 0;
	iLocal_1860 = 0;
}

void func_80()//Position - 0x268E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3003[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3003[iVar0]);
				}
			}
			func_82(iLocal_3003[iVar0]);
			GlobalFunc_2210(iLocal_3003[iVar0]);
		}
		iLocal_1647[iVar0] = 0;
		iLocal_1718[iVar0] = 0;
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1576[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2756[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2756[iVar0]);
		}
		iVar0++;
	}
	iLocal_1866 = 0;
}


void func_82(int iParam0)//Position - 0x2772
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
				if (bLocal_152)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_83()//Position - 0x280B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2932[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2932[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2932[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2932[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1865 = 0;
	iLocal_1862 = 0;
}

void func_84()//Position - 0x288E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2830[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2830[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2830[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2830[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2830[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2830[iVar0]);
				}
			}
			func_82(iLocal_2830[iVar0]);
			GlobalFunc_2210(iLocal_2830[iVar0]);
		}
		iLocal_1404[iVar0] = 0;
		iLocal_1490[iVar0] = 0;
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1318[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_2599[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2599[iVar0]);
		}
		iVar0++;
	}
	iLocal_1864 = 0;
	iLocal_1860 = 0;
}




int func_88()//Position - 0x29A2
{
	if (iLocal_2827 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2827;
}


void func_90()//Position - 0x29E9
{
	GlobalFunc_846(&(Local_3482.f_2));
	GlobalFunc_846(&(Local_3489.f_2));
	GlobalFunc_846(&(Local_3475.f_2));
	GlobalFunc_846(&(Local_3468.f_2));
}


void func_92()//Position - 0x2A35
{
	if (GlobalFunc_2311(iLocal_3259, 1000))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3475) && GlobalFunc_4947(Local_3489))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_3475, Local_3489, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3489))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3489);
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_3296);
				}
				if (!GlobalFunc_6964(Local_3475, -258271821))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_3475, Local_3489, 60f, 786469);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3475, 1);
					PED::SET_PED_KEEP_TASK(Local_3475, 1);
				}
			}
		}
		GlobalFunc_79(500, 1);
		GlobalFunc_11328(100, 1);
		func_534();
	}
}

































































































































































































void func_285()//Position - 0x274E7
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	switch (iLocal_3106)
	{
		case 0:
			if (!bLocal_3168)
			{
				if (!GlobalFunc_188())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				iLocal_3106 = 2;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				func_42(&cLocal_3543);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_3296);
				func_41();
				if (GlobalFunc_115(Local_3496))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_3496, 0, 0, 0, 1, 0, 0, 0, 0);
				}
				if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_3296) && !func_292(&Local_3468)) && !func_292(&Local_3475))
				{
					if (GlobalFunc_8027(1, 1093140480, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_3299, 0, 0, 0);
						if (GlobalFunc_115(Local_3475))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3475, sLocal_3298, 0, 0, 0);
						}
						if (GlobalFunc_115(Local_3468))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3468, sLocal_3297, 0, 0, 0);
						}
						if (GlobalFunc_115(Local_3482))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3482, sLocal_3300, 0, 0, 0);
						}
						if (GlobalFunc_115(Local_3489))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3489, sLocal_3301, 0, 0, 0);
						}
						if (GlobalFunc_115(Local_3496))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3496, sLocal_3302, 0, 0, 0);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_3496, 0), 4f);
						}
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						GlobalFunc_79(800, 0);
						MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 1, 1);
						func_288(392.86f, -621.04f, 27.97f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
						func_287(1);
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
						iLocal_3106 = 1;
					}
				}
				else
				{
					if (GlobalFunc_4947(Local_3489))
					{
						GlobalFunc_530(Local_3489, 10.5f, 1, 0f, 0, 1);
					}
					GlobalFunc_7629();
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3299, 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				bLocal_3239 = true;
			}
			if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3475) && GlobalFunc_IsPedNotInjuredOrDead(Local_3468)) && GlobalFunc_4947(Local_3489))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3298, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3475, Local_3489))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3475, Local_3489, -1);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3475, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3297, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3468, Local_3489))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3468, Local_3489, 0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3468, 1);
					PED::SET_PED_KEEP_TASK(Local_3468, 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3301, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3489, 1, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_3489, 17f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3489, 1);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3489))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Local_3489, 1, sLocal_3296, 35f, 786468);
					}
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3300, 0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3482, 0);
					func_52(&Local_3482, 1);
				}
			}
			if (!bLocal_3239)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iLocal_3106 = 2;
			}
			else
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (GlobalFunc_115(Local_3482))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3482, 0);
				}
				func_52(&Local_3482, 1);
				if (GlobalFunc_4947(Local_3489))
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3475))
					{
						if (!GlobalFunc_6964(Local_3475, -258271821))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3475, Local_3489))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3475, 1);
							}
						}
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3468, 1);
						PED::SET_PED_KEEP_TASK(Local_3468, 1);
					}
				}
				if (GlobalFunc_115(Local_3496))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_3496, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (bLocal_3168)
				{
					func_23(1, 1, 1, 1);
				}
				iLocal_3259 = MISC::GET_GAME_TIMER();
				func_286(4);
			}
			break;
	}
}

void func_286(int iParam0)//Position - 0x27924
{
	iLocal_3104 = iParam0;
	iLocal_3106 = 0;
}

void func_287(bool bParam0)//Position - 0x27935
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 341.2f, -645.83f, 25f };
	Var4 = { 429.1f, -572.89f, 35f };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var1, Var4, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 1);
	if (bParam0)
	{
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Var1, Var4);
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 0, 0);
	}
	PATHFIND::SET_PED_PATHS_IN_AREA(Var1, Var4, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(Var1, Var4);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar0 != 1)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3289[iVar0], 0);
		}
		iVar0++;
	}
	uLocal_3288 = PED::ADD_SCENARIO_BLOCKING_AREA(Var1, Var4, 0, 1, 1, 1);
	if (bParam0)
	{
		MISC::CLEAR_AREA_OF_OBJECTS(395.2476f, -615.0134f, 27.87107f, 20f, 0);
		MISC::CLEAR_AREA(395.2476f, -615.0134f, 27.87107f, 20f, 1, 0, 0, 0);
	}
}

void func_288(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x27A63
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		func_291(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11253(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_47 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_47 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_291(bool bParam0)//Position - 0x27C45
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(iVar0, bParam0, 32);
	}
	GlobalFunc_8380(1, 1, 0, 0);
}

int func_292(int iParam0)//Position - 0x27C81
{
	if (GlobalFunc_IsPedNotInjuredOrDead(*iParam0))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_293()//Position - 0x27CA2
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_3296);
	func_362();
	func_361(1090519040);
	switch (iLocal_3106)
	{
		case 0:
			func_358();
			iLocal_3260 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
			{
				if (iLocal_3204)
				{
					GlobalFunc_10693(&uLocal_19, Local_3482, 0, 0, 1, 1, 1);
				}
			}
			iLocal_3106 = 1;
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
			{
				if (iLocal_3204)
				{
					GlobalFunc_10693(&uLocal_19, Local_3482, 0, 0, 1, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3496))
				{
					fLocal_3264 = SYSTEM::VDIST(Local_3555, ENTITY::GET_ENTITY_COORDS(Local_3496, 0));
				}
				if ((GlobalFunc_4947(Local_3489) && GlobalFunc_IsPedNotInjuredOrDead(Local_3475)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489))
					{
						if (GlobalFunc_663("NIGEL2_04", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_04");
						}
						iLocal_3206 = 0;
						GlobalFunc_846(&(Local_3489.f_2));
						func_330(&iLocal_3241);
						if (!HUD::DOES_BLIP_EXIST(Local_3482.f_2))
						{
							Local_3482.f_2 = GlobalFunc_4955(Local_3482, 1, 0, 5);
						}
						else
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_3482, 0))
							{
								HUD::SET_BLIP_SCALE(Local_3482.f_2, 1f);
							}
							GlobalFunc_2216(Local_3482.f_2, Local_3482, 200f, 0.7f, iLocal_3241);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 381.9156f, -628.1014f, 22.93229f, 394.4772f, -606.127f, 35.77483f, 18.5f, 0, 1, 0))
						{
							if (func_327(&Local_3489))
							{
								if (GlobalFunc_2311(iLocal_3260, 500))
								{
									iLocal_3106 = 2;
								}
							}
							else
							{
								iLocal_3260 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							iLocal_3260 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						GlobalFunc_846(&(Local_3482.f_2));
						if (!HUD::DOES_BLIP_EXIST(Local_3489.f_2))
						{
							Local_3489.f_2 = GlobalFunc_5743(Local_3489, 1, 7);
						}
						if (!iLocal_3206)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							iLocal_3206 = 1;
						}
						if (!iLocal_3201)
						{
							GlobalFunc_164("NIGEL2_04", 7500, 1);
							iLocal_3250 = MISC::GET_GAME_TIMER();
							iLocal_3201 = 1;
						}
						else if (!GlobalFunc_111())
						{
							if (fLocal_3266 < 20f)
							{
								if (MISC::GET_GAME_TIMER() - iLocal_3250) > MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500)
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489, 0))
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
										{
											if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
											{
											}
										}
										else if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
										{
										}
									}
								}
							}
						}
						else
						{
							iLocal_3250 = MISC::GET_GAME_TIMER();
						}
						GlobalFunc_502();
						iLocal_3260 = MISC::GET_GAME_TIMER();
					}
				}
				func_311();
			}
			func_358();
			func_300();
			break;
		
		case 2:
			GlobalFunc_846(&(Local_3489.f_2));
			GlobalFunc_846(&(Local_3482.f_2));
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_4948(&uLocal_19, 0, 0);
			if (GlobalFunc_111())
			{
				GlobalFunc_5105();
			}
			if (!iLocal_3204)
			{
				func_295(0);
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_3204 = 1;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3282))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3282, 0);
			}
			iLocal_3542 = 2;
			GlobalFunc_2346(&Local_3273);
			STREAMING::REMOVE_PTFX_ASSET();
			if (!GlobalFunc_188() && bLocal_3168)
			{
				GlobalFunc_4613("NIGEL2_STOP", 0);
			}
			func_294(3);
			func_286(3);
			break;
	}
}

void func_294(int iParam0)//Position - 0x27FD4
{
	if (!GlobalFunc_188() && bLocal_3168)
	{
		if (iParam0 == iLocal_3254)
		{
			switch (iLocal_3254)
			{
				case 0:
					if (GlobalFunc_4613("NIGEL2_START", 0))
					{
						iLocal_3254++;
					}
					break;
				
				case 1:
					if (GlobalFunc_4613("NIGEL2_CAR", 0))
					{
						AUDIO::PREPARE_MUSIC_EVENT("NIGEL2_JUMP");
						iLocal_3254++;
					}
					break;
				
				case 2:
					if (GlobalFunc_4613("NIGEL2_JUMP", 1))
					{
						iLocal_3254++;
					}
					break;
				
				case 3:
					if (GlobalFunc_4613("NIGEL2_STOP", 0))
					{
						iLocal_3254++;
					}
					break;
				
				default:
					break;
				}
			}
	}
}

void func_295(bool bParam0)//Position - 0x28084
{
	if (bParam0)
	{
		if (!CAM::DOES_CAM_EXIST(uLocal_3244))
		{
			uLocal_3244 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		if (CAM::DOES_CAM_EXIST(uLocal_3244))
		{
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_COORD(uLocal_3244, Local_3558);
			CAM::SET_CAM_FOV(uLocal_3244, 14f);
			CAM::POINT_CAM_AT_ENTITY(uLocal_3244, Local_3489, Local_3561, 1);
			AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("NIGEL_02_SLOWMO_SETTING");
		}
	}
	else
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
		if (CAM::DOES_CAM_EXIST(uLocal_3244))
		{
			if (CAM::IS_CAM_ACTIVE(uLocal_3244))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::SET_CAM_ACTIVE(uLocal_3244, 0);
			}
			CAM::DESTROY_CAM(uLocal_3244, 0);
		}
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		MISC::SET_TIME_SCALE(1f);
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("NIGEL_02_SLOWMO_SETTING");
		bLocal_3205 = true;
	}
}





void func_300()//Position - 0x2826A
{
	if (!iLocal_3238)
	{
		if (GlobalFunc_1986(Local_3555, 307.3065f, -589.9595f, 42.302f, 200f))
		{
			if (func_302())
			{
				GlobalFunc_553(794);
				iLocal_3238 = 1;
			}
		}
	}
}


int func_302()//Position - 0x2831C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (GlobalFunc_2506())
	{
		iVar2 = GlobalFunc_760();
		if (iVar2 != 0)
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_759(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_306(ENTITY::GET_ENTITY_COORDS(iVar1, 0)))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
						{
							bVar3 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				return 1;
			}
		}
	}
	if (GlobalFunc_4453())
	{
		iVar4 = GlobalFunc_4452();
		if (iVar4 != 0)
		{
			bVar5 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_306(ENTITY::GET_ENTITY_COORDS(iVar1, 0)))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 1))
						{
							bVar5 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar5)
			{
				return 1;
			}
		}
	}
	return 0;
}




int func_306(struct<3> Param0)//Position - 0x28427
{
	int iVar0;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
	{
		return 0;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar0 == iLocal_3261)
		{
			return 1;
		}
	}
	return 0;
}





void func_311()//Position - 0x284A8
{
	float fVar0;
	
	fVar0 = 100f;
	if (iLocal_3236)
	{
		if (fLocal_3264 > fVar0)
		{
			GlobalFunc_553(793);
			iLocal_3236 = 0;
		}
	}
}


int func_313(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2853D
{
	if (iParam4 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (GlobalFunc_10618(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}














int func_327(int iParam0)//Position - 0x28BFD
{
	struct<3> Var0;
	
	if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(*iParam0, 5f))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(*iParam0))
	{
		return 1;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION_VELOCITY(*iParam0) };
	if (Var0.x > 0.2f || Var0.x < -0.2f)
	{
		return 0;
	}
	if (Var0.f_1 > 0.2f || Var0.f_1 < -0.2f)
	{
		return 0;
	}
	return 1;
}



void func_330(int iParam0)//Position - 0x28E26
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	if (GlobalFunc_111())
	{
		iLocal_3249 = MISC::GET_GAME_TIMER();
	}
	else
	{
		iLocal_3232 = 0;
	}
	if (iLocal_3233)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_3281))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_3281))
			{
				iLocal_3281 = 0;
				iLocal_3233 = 0;
			}
		}
		else
		{
			iLocal_3281 = 0;
			iLocal_3233 = 0;
		}
	}
	if (!ENTITY::IS_ENTITY_IN_AIR(Local_3489))
	{
		iLocal_3251 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_3104 == 1)
	{
		if (fLocal_3264 < ((200f / 100f) * (0.7f * 100f)))
		{
			if (fLocal_3265 > 3000f && fLocal_3265 < 7500f)
			{
				if (!iLocal_3192)
				{
					if (!GlobalFunc_111())
					{
						iVar9 = 0;
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							iVar9 = 1;
						}
						if (func_334(&uLocal_3303, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_13", 8, iVar9, 0))
						{
							iLocal_3232 = 1;
							iLocal_3192 = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 15500f && fLocal_3265 < 16000f)
			{
				if (!iLocal_3183[0])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, -1237.778f, -763.4679f, 26.42266f, -1186.703f, -829.4772f, 10.58047f, 31f, 0, 1, 0))
					{
						if (!GlobalFunc_111())
						{
							if (func_334(&uLocal_3303, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_1", 8, 0, 0))
							{
								iLocal_3232 = 1;
								iLocal_3183[0] = 1;
							}
						}
					}
				}
			}
			if (fLocal_3265 > 45500f && fLocal_3265 < 47500f)
			{
				if (!iLocal_3183[1])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, -664.5371f, -580.7943f, 29.30828f, -590.7203f, -581.1932f, 23.30828f, 13.5f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG_SP1", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
							iLocal_3232 = 1;
							iLocal_3183[1] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 69000f && fLocal_3265 < 71000f)
			{
				if (!iLocal_3183[2])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, -440.7857f, -828.3237f, 35.7356f, -511.8112f, -826.6559f, 27.66894f, 60f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG_SP2", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
							iLocal_3232 = 1;
							iLocal_3183[2] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 85000f && fLocal_3265 < 89000f)
			{
				if (!iLocal_3183[3])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, -432.3278f, -540.988f, 44.07163f, -433.2483f, -485.5649f, 22.47039f, 60f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG_SP3", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3183[3] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 104000f && fLocal_3265 < 110000f)
			{
				if (!iLocal_3183[4])
				{
					if (GlobalFunc_111())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4935();
							}
							if (func_334(&uLocal_3303, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_12", 8, 0, 0))
							{
								iLocal_3232 = 1;
								iLocal_3183[4] = 1;
							}
						}
					}
				}
			}
			if (fLocal_3265 > 113000f && fLocal_3265 < 116000f)
			{
				if (!iLocal_3183[5])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 254.9994f, -594.3826f, 49.60252f, 270.4643f, -527.226f, 39.68248f, 70f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_HOSP01", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
							iLocal_3232 = 1;
							iLocal_3183[5] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 118000f)
			{
				if (!iLocal_3183[6])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 338.0111f, -581.9055f, 41.57753f, 350.9869f, -586.7529f, 46.07751f, 6.75f, 0, 1, 0))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_HWH", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3183[6] = 1;
						}
					}
				}
				if (!iLocal_3183[7])
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 368.5714f, -594.9467f, 45.5422f, 389.5015f, -614.1279f, 27.11789f, 20.75f, 0, 1, 0))
					{
						if (!GlobalFunc_5710("NIG2_HWH", 1))
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_HWS", 8, 0, 0, 0))
							{
								iLocal_3232 = 1;
								iLocal_3183[7] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_3233)
	{
		if (!iLocal_3200)
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_3489) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_3489, 0, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_3489, 1, 1000)) || GlobalFunc_2311(iLocal_3255, 500))
			{
				StringCopy(&cVar1, "NIG2_FLIP_", 32);
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				StringIntConCat(&cVar1, iVar0, 32);
				if (iVar0 == 1)
				{
					AUDIO::INTERRUPT_CONVERSATION(Local_3475, "NIG2_CCAA", "NIGEL");
					iLocal_3200 = 1;
					iLocal_3281 = Local_3475;
					iLocal_3233 = 1;
					return;
				}
				else
				{
					AUDIO::INTERRUPT_CONVERSATION(Local_3468, "NIG2_CCAB", "MRSTHORNHILL");
					iLocal_3200 = 1;
					iLocal_3281 = Local_3468;
					iLocal_3233 = 1;
					return;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_AIR(Local_3489))
			{
				if (GlobalFunc_2311(iLocal_3251, 500))
				{
					if (!GlobalFunc_5710("NIG2_HWH", 1) && !GlobalFunc_5710("NIG2_HWS", 1))
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
						{
							StringCopy(&cVar1, "NIG2_CDAA", 32);
							AUDIO::INTERRUPT_CONVERSATION(Local_3475, &cVar1, "NIGEL");
							iLocal_3281 = Local_3475;
						}
						else
						{
							StringCopy(&cVar1, "NIG2_CDAB", 32);
							AUDIO::INTERRUPT_CONVERSATION(Local_3468, &cVar1, "MRSTHORNHILL");
							iLocal_3281 = Local_3468;
						}
						iLocal_3251 = MISC::GET_GAME_TIMER();
						iLocal_3233 = 1;
						iLocal_3200 = 1;
						return;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_AIR(Local_3489))
		{
			if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3489) || ((!VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_3489) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_3489, 0, 1000)) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_3489, 1, 1000)))
			{
				iLocal_3200 = 0;
			}
		}
		if (!iLocal_3232)
		{
			if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_CQAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_3475, &cVar1, "NIGEL");
					iLocal_3281 = Local_3475;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CPAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_3468, &cVar1, "MRSTHORNHILL");
					iLocal_3281 = Local_3468;
				}
				iLocal_3233 = 1;
				return;
			}
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_3489))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_COAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_3475, &cVar1, "NIGEL");
					iLocal_3281 = Local_3475;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CNAA", 32);
					AUDIO::INTERRUPT_CONVERSATION(Local_3468, &cVar1, "MRSTHORNHILL");
					iLocal_3281 = Local_3468;
				}
				iLocal_3233 = 1;
				return;
			}
		}
	}
	if (!iLocal_3232 && !iLocal_3233)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3496))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3496, PLAYER::PLAYER_PED_ID(), 1) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_5710("NIG2_SHOOTS", 1) && !GlobalFunc_5710("NIG2_SHOOTSN", 1))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
					{
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_SHOOTS", 8, 0, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3496);
							iLocal_3233 = 1;
							return;
						}
					}
					else if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_SHOOTSN", 8, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3496);
						iLocal_3233 = 1;
						return;
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3496);
			}
			if (!iLocal_3196)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3496, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE01", 8, 0, 0, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3496);
						iLocal_3232 = 1;
						iLocal_3196 = 1;
						return;
					}
				}
			}
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!iLocal_3197)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_WANTED", 8, 0, 0, 0))
				{
					iLocal_3197 = 1;
					iLocal_3232 = 1;
				}
			}
			else if (!iLocal_3198)
			{
				if (!GlobalFunc_5710("NIG2_WANTED", 1))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_POLICE", 8, 0, 0, 0))
					{
						iLocal_3198 = 1;
						iLocal_3232 = 1;
					}
				}
			}
		}
		if (iLocal_3104 == 1)
		{
			if (fLocal_3264 < ((200f / 100f) * (0.7f * 100f)))
			{
				if (!iLocal_3232 && !GlobalFunc_111())
				{
					if (GlobalFunc_2311(iLocal_3249, 500))
					{
						if (fLocal_3265 < 116000f)
						{
							if (!iLocal_3199)
							{
								if (fLocal_3265 > 20000f)
								{
									if (func_331())
									{
										if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_LEFT", 8, 0, 0, 0))
										{
											iLocal_3199 = 1;
										}
									}
								}
							}
							if (!iLocal_3170[0])
							{
								if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE02", 8, 0, 0, 0))
								{
									iLocal_3170[0] = 1;
								}
							}
							if (!iLocal_3170[1])
							{
								if (iLocal_3183[0] || fLocal_3265 > 16500f)
								{
									if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE05", 8, 0, 0, 0))
									{
										iLocal_3170[1] = 1;
									}
								}
							}
							else if (!iLocal_3170[2])
							{
								if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE08", 8, 0, 0, 0))
								{
									iLocal_3170[2] = 1;
								}
							}
							else if (!iLocal_3170[3])
							{
								if (iLocal_3183[1] || fLocal_3265 > 52500f)
								{
									if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE06", 8, 0, 0, 0))
									{
										iLocal_3170[3] = 1;
									}
								}
							}
							else if (!iLocal_3170[4])
							{
								if (iLocal_3183[2] || fLocal_3265 > 71500f)
								{
									if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE03", 8, 0, 0, 0))
									{
										iLocal_3170[4] = 1;
									}
								}
							}
							else if (!iLocal_3170[5])
							{
								if (iLocal_3183[3] || fLocal_3265 > 89500f)
								{
									if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE04", 8, 0, 0, 0))
									{
										iLocal_3170[5] = 1;
									}
								}
							}
							else if (!iLocal_3170[6])
							{
								if (!iLocal_3183[5])
								{
									if (iLocal_3183[4] || fLocal_3265 > 106500f)
									{
										if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
										{
											if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CHASE07", 8, 0, 0, 0))
											{
												iLocal_3170[6] = 1;
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
	if (fLocal_3264 > ((200f / 100f) * (0.7f * 100f)))
	{
		if (!iLocal_3232)
		{
			if (!iLocal_3178[2])
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				else if (!iLocal_3178[0])
				{
					if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CU01", 8, 0, 0, 0))
					{
						iLocal_3232 = 1;
						iLocal_3178[0] = 1;
					}
				}
				else if (!iLocal_3178[1])
				{
					if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
					{
						iLocal_3232 = 1;
						iLocal_3178[1] = 1;
					}
				}
				else if (!iLocal_3178[2])
				{
					if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
					{
						iLocal_3232 = 1;
						iLocal_3178[2] = 1;
					}
				}
			}
		}
	}
	else if (fLocal_3265 > 40000f)
	{
		if (fLocal_3265 < 58000f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -731.6891f, -657.8242f, 26.26911f, -448.3936f, -657.125f, 40.71734f, 40f, 0, 1, 0))
			{
				if (!iLocal_3182)
				{
					if (!iLocal_3178[1])
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3178[1] = 1;
							iLocal_3182 = 1;
						}
					}
					else
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3178[2] = 1;
							iLocal_3182 = 1;
						}
					}
				}
				*iParam0 = 1;
			}
		}
	}
}

int func_331()//Position - 0x29AC2
{
	if (PLAYER::_0xF10B44FD479D69F3(PLAYER::PLAYER_ID(), 2))
	{
		return 1;
	}
	return 0;
}



int func_334(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x29B3A
{
	if (iParam5 == 0)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (MISC::GET_PROFILE_SETTING(203) != 0)
			{
				return 0;
			}
		}
	}
	if (GlobalFunc_10630(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}
























void func_358()//Position - 0x2A99D
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (!bLocal_3205)
	{
		if (GlobalFunc_4947(Local_3489))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 373.2886f, -580.871f, 37.23948f, 359.6602f, -605.2207f, 29.13826f, 20f, 0, 1, 0) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, Local_3549, Local_3552, fLocal_3263, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 370.7054f, -596.1437f, 45.43948f, 361.3834f, -600.7f, 33.23949f, 6f, 0, 1, 0)))
				{
					func_294(2);
					if (iLocal_3204)
					{
						func_295(1);
						GlobalFunc_4948(&uLocal_19, 0, 0);
						iLocal_3204 = 0;
						iLocal_3243 = 1;
						fLocal_3268 = 1f;
						RECORDING::_0x48621C9FCA3EBD28(0);
					}
					if (iLocal_3237)
					{
						GlobalFunc_504(0, 795);
						iLocal_3237 = 0;
					}
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_3489, 1) };
					fVar3 = 0.2f;
					fVar4 = 0.9f;
					fVar5 = 2f;
					if (Var0.f_2 > 35.25f)
					{
						if (fLocal_3268 > fVar3)
						{
							fLocal_3268 = (fLocal_3268 - (fVar4 * SYSTEM::TIMESTEP()));
							if (fLocal_3268 < fVar3)
							{
								fLocal_3268 = fVar3;
							}
							MISC::SET_TIME_SCALE(fLocal_3268);
						}
					}
					else if (Var0.f_2 < 35f)
					{
						if (fLocal_3268 < 1f)
						{
							fLocal_3268 = (fLocal_3268 + (fVar5 * SYSTEM::TIMESTEP()));
							if (fLocal_3268 > 1f)
							{
								fLocal_3268 = 1f;
							}
							MISC::SET_TIME_SCALE(fLocal_3268);
						}
					}
					if (Var0.f_2 < 40f)
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3489))
						{
							if (!iLocal_3204)
							{
								func_295(0);
								RECORDING::_0x81CBAE94390F9F89();
								iLocal_3204 = 1;
							}
						}
					}
				}
				else if (!iLocal_3204)
				{
					func_295(0);
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_3204 = 1;
				}
			}
			else if (!iLocal_3204)
			{
				func_295(0);
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_3243 = 0;
				iLocal_3204 = 1;
			}
		}
		else if (!iLocal_3204)
		{
			func_295(0);
			RECORDING::_0x81CBAE94390F9F89();
			iLocal_3243 = 0;
			iLocal_3204 = 1;
		}
	}
	func_359();
}

void func_359()//Position - 0x2AB86
{
	struct<3> Var0;
	
	if (iLocal_3243)
	{
		if (GlobalFunc_4947(Local_3489))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_3489, 0) };
			if (Var0.f_2 < 35f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_3489) || VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3489))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_DROP_WRAP", Local_3489, 0, 0, 0);
					iLocal_3243 = 0;
				}
			}
		}
	}
}


void func_361(int iParam0)//Position - 0x2AC4C
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3482, "rcmnigel2", "die_horn", 3))
		{
			STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmnigel2"))
			{
				TASK::TASK_PLAY_ANIM(Local_3482, "rcmnigel2", "die_horn", iParam0, -8f, -1, 2, 0.9f, 0, 0, 0);
			}
		}
	}
}

void func_362()//Position - 0x2ACA1
{
	struct<3> Var0;
	
	Var0 = { 392.9445f, -619.5032f, 27.9764f };
	if (GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 100f))
	{
		if (!GlobalFunc_2233())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_3543, 8);
			func_41();
			iLocal_3240 = 1;
		}
	}
	else if (iLocal_3240)
	{
		if (!GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var0, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_3240 = 0;
			}
		}
		else
		{
			func_41();
		}
	}
	if (iLocal_3240)
	{
		if (GlobalFunc_2233())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_3240 = 0;
		}
	}
}


void func_364()//Position - 0x2AD48
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
	switch (iLocal_3106)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482) && GlobalFunc_4947(Local_3496))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3482, 1);
				PED::SET_PED_RESET_FLAG(Local_3482, 237, 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3496, "NIGEL_02_CHASE_CAR_MG", 0);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3468, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3475))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3475, 1);
			}
			if (GlobalFunc_4947(Local_3489))
			{
				if (!iLocal_3237)
				{
					GlobalFunc_504(Local_3489, 795);
					iLocal_3237 = 1;
				}
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3489, 1);
				iLocal_3242 = 1;
			}
			RECORDING::_0x293220DA1B46CEBC(0f, 15f, 1);
			func_415(fLocal_3267, Local_3555);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_3106 = 1;
			break;
		
		case 1:
			func_294(0);
			func_414();
			iLocal_3241 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(Local_3496))
			{
				fLocal_3264 = SYSTEM::VDIST(Local_3555, ENTITY::GET_ENTITY_COORDS(Local_3496, 0));
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
			{
				if (GlobalFunc_4947(Local_3496))
				{
					if (!bLocal_3210)
					{
						PED::SET_PED_RESET_FLAG(Local_3482, 237, 1);
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_3482, Local_3496) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_3496, -1) == Local_3482)
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3496))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_3496, 0);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3496, iLocal_3257, sLocal_3295, 1);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3496, 1);
								fLocal_3265 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3496);
								fLocal_3267 = 0.85f;
								VEHICLE::SET_PLAYBACK_SPEED(Local_3496, fLocal_3267);
								func_413();
								func_391(Local_3496, fLocal_3267);
								func_387();
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
								{
									if (!GlobalFunc_188() && bLocal_3168)
									{
										AUDIO::START_AUDIO_SCENE("NIGEL_02_CHASE");
									}
								}
								bLocal_3210 = true;
							}
						}
					}
					else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3496))
					{
						fLocal_3265 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3496);
						func_378(&fLocal_3267, fLocal_3265);
						VEHICLE::SET_PLAYBACK_SPEED(Local_3496, fLocal_3267);
						func_413();
						func_391(Local_3496, fLocal_3267);
						func_387();
						func_377();
						func_376();
						func_12(0, 1);
						if (fLocal_3265 > 82000f && fLocal_3265 < 105000f)
						{
							func_375();
						}
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_3496) < 800f)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3496, 800f);
						}
					}
					else if (!bLocal_3212)
					{
						func_64(0, 1);
						func_374();
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_3257, sLocal_3295);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3496, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
						{
							AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
						}
						func_287(0);
						func_373();
						if (fLocal_3265 < 124136f)
						{
							fLocal_3265 = (124136f + 1000f);
						}
						func_376();
						bLocal_3212 = true;
					}
					else
					{
						func_361(1090519040);
					}
				}
				if (iLocal_3204)
				{
					GlobalFunc_10693(&uLocal_19, Local_3482, 0, 0, 1, 1, 1);
				}
				func_372();
				func_371();
				func_370(fLocal_3265);
				func_367(Local_3555);
				func_366();
				func_311();
				func_415(fLocal_3267, Local_3555);
				if ((GlobalFunc_4947(Local_3489) && GlobalFunc_IsPedNotInjuredOrDead(Local_3475)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489))
					{
						if (GlobalFunc_663("NIGEL2_03", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_03");
						}
						if (GlobalFunc_663("NIGEL2_04", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_04");
						}
						GlobalFunc_846(&(Local_3489.f_2));
						if (iLocal_3242)
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_3489, 0);
							iLocal_3242 = 0;
						}
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3475, Local_3489) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_3468, Local_3489))
						{
							GlobalFunc_846(&(Local_3482.f_2));
							if (GlobalFunc_663("NIGEL2_04", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_04");
							}
						}
						else
						{
							if (!iLocal_3211)
							{
								if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_3489, -1) == PLAYER::PLAYER_PED_ID())
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3489, 1, 0);
									iLocal_3211 = 1;
								}
							}
							func_294(1);
							if (!bLocal_3207)
							{
								GlobalFunc_164("NIGEL2_01", 7500, 1);
								bLocal_3207 = true;
							}
							iLocal_3206 = 0;
							if (GlobalFunc_663("NIGEL2_05", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_05");
							}
							if (GlobalFunc_663("NIGEL2_08", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_08");
							}
							if (GlobalFunc_663("NIGEL2_09", 0, 0))
							{
								HUD::CLEAR_THIS_PRINT("NIGEL2_09");
							}
							func_330(&iLocal_3241);
							if (!HUD::DOES_BLIP_EXIST(Local_3482.f_2))
							{
								Local_3482.f_2 = GlobalFunc_4955(Local_3482, 1, 0, 5);
							}
							else
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_3482, 0))
								{
									HUD::SET_BLIP_SCALE(Local_3482.f_2, 1f);
								}
								GlobalFunc_2216(Local_3482.f_2, Local_3482, 200f, 0.7f, iLocal_3241);
							}
							if (bLocal_3210)
							{
								if (bLocal_3212)
								{
									if (fLocal_3264 < 25f)
									{
										iLocal_3106 = 2;
									}
								}
							}
						}
						func_365();
					}
					else
					{
						if (iLocal_3242)
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(Local_3489, 1);
							iLocal_3242 = 1;
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
						GlobalFunc_846(&(Local_3482.f_2));
						if (!HUD::DOES_BLIP_EXIST(Local_3489.f_2))
						{
							Local_3489.f_2 = GlobalFunc_5743(Local_3489, 1, 7);
						}
						if (!bLocal_3207)
						{
							if (!iLocal_3193[0])
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_DAWDM", 7, 0, 0, 0))
								{
									iLocal_3193[0] = 1;
								}
							}
							else if (!iLocal_3202)
							{
								if (!GlobalFunc_111())
								{
									GlobalFunc_164("NIGEL2_03", 7500, 1);
									iLocal_3202 = 1;
								}
							}
							else if (!iLocal_3193[1])
							{
								if ((!GlobalFunc_111() && PED::IS_PED_SITTING_IN_VEHICLE(Local_3475, Local_3489)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3468, Local_3489))
								{
									if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_SPOTSP", 8, 0, 0, 0))
									{
										iLocal_3193[1] = 1;
									}
								}
							}
						}
						else
						{
							if (!iLocal_3206)
							{
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								iLocal_3206 = 1;
							}
							if (!iLocal_3201)
							{
								GlobalFunc_164("NIGEL2_04", 7500, 1);
								iLocal_3250 = MISC::GET_GAME_TIMER();
								iLocal_3201 = 1;
							}
							else if (!GlobalFunc_111())
							{
								if (fLocal_3266 < 20f)
								{
									if (MISC::GET_GAME_TIMER() - iLocal_3250) > MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500)
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489, 0))
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 11) > 5)
											{
												if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
												{
												}
											}
											else if (func_313(&uLocal_3303, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
											{
											}
										}
									}
								}
							}
							else
							{
								iLocal_3250 = MISC::GET_GAME_TIMER();
							}
						}
						GlobalFunc_502();
					}
				}
			}
			func_358();
			func_300();
			break;
		
		case 2:
			if (!bLocal_3212)
			{
				func_64(0, 1);
				func_374();
				if (GlobalFunc_115(Local_3496))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3496))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3496);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_3496, 1);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_3257, sLocal_3295);
				func_287(0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
				{
					AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
				}
				if (fLocal_3265 < 124136f)
				{
					fLocal_3265 = (124136f + 1000f);
				}
				func_376();
				func_373();
				bLocal_3212 = true;
			}
			if (GlobalFunc_115(Local_3482))
			{
				if (iLocal_3204)
				{
					GlobalFunc_10693(&uLocal_19, Local_3482, 0, 0, 1, 1, 1);
				}
			}
			func_358();
			if (iLocal_3237)
			{
				GlobalFunc_504(0, 795);
				iLocal_3237 = 0;
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (bLocal_3229)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3283))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3283, 0);
				}
			}
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			func_286(2);
			break;
	}
}

void func_365()//Position - 0x2B486
{
	float fVar0;
	
	if (!bLocal_3229)
	{
		fVar0 = 115225f;
		if (fLocal_3265 > fVar0)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3283))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_3489) > 8f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
						{
							uLocal_3283 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_rcn2_debris_trail", Local_3489, 0f, -1.5f, -0.4f, 0f, 0f, 0f, 0.3f, 0, 0, 0);
							bLocal_3229 = true;
						}
					}
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3283))
	{
		if (ENTITY::GET_ENTITY_SPEED(Local_3489) < 4f || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_3489, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3283, 0);
			bLocal_3229 = false;
		}
	}
}

void func_366()//Position - 0x2B57C
{
	float fVar0;
	
	fVar0 = 115225f;
	if (!iLocal_3234)
	{
		if (!iLocal_3231)
		{
			if (fLocal_3265 > (fVar0 - 5000f))
			{
				STREAMING::REQUEST_PTFX_ASSET();
				iLocal_3231 = 1;
			}
		}
		else
		{
			if (fLocal_3265 > fVar0)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3282))
					{
						uLocal_3282 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_rcn2_ceiling_debris", 325f, -589f, 45f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_3234 = 1;
					}
				}
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				STREAMING::REQUEST_PTFX_ASSET();
			}
		}
	}
}

void func_367(struct<3> Param0)//Position - 0x2B604
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	
	bVar0 = false;
	iVar6 = 250;
	if (GlobalFunc_115(Local_3482))
	{
		iVar7 = 0;
		while (iVar7 <= 3)
		{
			if (Local_3524[iVar7 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_3265 >= 500f)
					{
						switch (iVar7)
						{
							case 0:
								iVar1 = iLocal_3269;
								Var2 = { -1262.53f, -731.25f, 21.88f };
								fVar5 = 47.38f;
								break;
							
							case 1:
								iVar1 = iLocal_3272;
								Var2 = { -1300.17f, -704.1f, 24.61f };
								fVar5 = -87.53f;
								break;
							
							case 2:
								iVar1 = iLocal_3272;
								Var2 = { -1298.33f, -704.16f, 24.53f };
								fVar5 = 83.96f;
								break;
							
							case 3:
								iVar1 = iLocal_3272;
								Var2 = { -1209.92f, -817.51f, 15.62f };
								fVar5 = 15.06f;
								break;
						}
						STREAMING::REQUEST_MODEL(iVar1);
						if (STREAMING::HAS_MODEL_LOADED(iVar1))
						{
							Local_3524[iVar7 /*2*/] = PED::CREATE_PED(26, iVar1, Var2, fVar5, 1, 1);
							if (GlobalFunc_IsPedNotInjuredOrDead(Local_3524[iVar7 /*2*/]))
							{
								Local_3524[iVar7 /*2*/].f_1 = 1;
								PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_3524[iVar7 /*2*/], 0);
								PED::SET_PED_KEEP_TASK(Local_3524[iVar7 /*2*/], 1);
							}
							if (iVar7 != 0)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
							}
							bVar0 = true;
						}
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_3252) > iVar6)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3524[iVar7 /*2*/]))
				{
					switch (Local_3524[iVar7 /*2*/].f_1)
					{
						case 1:
							if (GlobalFunc_155(Local_3482, Local_3524[iVar7 /*2*/], 150f))
							{
								if (iVar7 == 0 || iVar7 == 3)
								{
									TASK::TASK_USE_MOBILE_PHONE(Local_3524[iVar7 /*2*/], 1, 1);
									PED::SET_PED_KEEP_TASK(Local_3524[iVar7 /*2*/], 0);
									Local_3524[iVar7 /*2*/].f_1 = 4;
								}
								else if (iVar7 == 1)
								{
									if (GlobalFunc_IsPedNotInjuredOrDead(Local_3524[iVar7 + 1 /*2*/]))
									{
										TASK::TASK_CHAT_TO_PED(Local_3524[iVar7 /*2*/], Local_3524[iVar7 + 1 /*2*/], 17, 0f, 0f, 0f, 0f, 0f);
										PED::SET_PED_KEEP_TASK(Local_3524[iVar7 /*2*/], 0);
										Local_3524[iVar7 /*2*/].f_1 = 4;
									}
								}
								else if (iVar7 == 2)
								{
									if (GlobalFunc_IsPedNotInjuredOrDead(Local_3524[(iVar7 - 1) /*2*/]))
									{
										TASK::TASK_CHAT_TO_PED(Local_3524[iVar7 /*2*/], Local_3524[(iVar7 - 1) /*2*/], 16, 0f, 0f, 0f, 0f, 0f);
										PED::SET_PED_KEEP_TASK(Local_3524[iVar7 /*2*/], 0);
										Local_3524[iVar7 /*2*/].f_1 = 4;
									}
								}
							}
							break;
						
						case 4:
							if (GlobalFunc_155(Local_3482, Local_3524[iVar7 /*2*/], 3f))
							{
								TASK::CLEAR_PED_TASKS(Local_3524[iVar7 /*2*/]);
								TASK::OPEN_SEQUENCE_TASK(&uVar8);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_3482, -1);
								TASK::CLOSE_SEQUENCE_TASK(uVar8);
								TASK::TASK_PERFORM_SEQUENCE(Local_3524[iVar7 /*2*/], uVar8);
								TASK::CLEAR_SEQUENCE_TASK(&uVar8);
								Local_3524[iVar7 /*2*/].f_1 = 6;
							}
							if (!GlobalFunc_775(Local_3524[iVar7 /*2*/], Param0, 300f))
							{
								func_52(&(Local_3524[iVar7 /*2*/]), 0);
								Local_3524[iVar7 /*2*/].f_1 = 7;
							}
							break;
						
						case 6:
							if (!GlobalFunc_775(Local_3524[iVar7 /*2*/], Param0, 150f))
							{
								func_52(&(Local_3524[iVar7 /*2*/]), 0);
								Local_3524[iVar7 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (Local_3505[iVar7 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_3265 >= 111161f && iLocal_3262 > 1)
					{
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_3261) && INTERIOR::IS_INTERIOR_READY(iLocal_3261))
						{
							switch (iVar7)
							{
								case 0:
									iVar1 = iLocal_3271;
									Var2 = { 309.34f, -596.87f, 43.31f };
									fVar5 = 14.8f;
									break;
								
								case 1:
									iVar1 = iLocal_3271;
									Var2 = { 309.52f, -594.85f, 43.31f };
									fVar5 = 153.4102f;
									break;
								
								case 2:
									iVar1 = iLocal_3271;
									Var2 = { 316f, -588.77f, 42.3f };
									fVar5 = 207.556f;
									break;
								
								case 3:
									iVar1 = iLocal_3270;
									Var2 = { 317.1715f, -590.084f, 42.302f };
									fVar5 = 60.6f;
									break;
								
								case 4:
									iVar1 = iLocal_3271;
									Var2 = { 332.54f, -588.5f, 43.3f };
									fVar5 = 70.64f;
									break;
								
								case 5:
									iVar1 = iLocal_3271;
									Var2 = { 331.68f, -578.6f, 43.32f };
									fVar5 = 234.5983f;
									break;
								
								case 6:
									iVar1 = iLocal_3271;
									Var2 = { 362.56f, -589.32f, 43.33f };
									fVar5 = -21.77f;
									break;
								
								case 7:
									iVar1 = iLocal_3271;
									Var2 = { 363.3849f, -587.8508f, 42.3275f };
									fVar5 = 161.2689f;
									break;
								
								case 8:
									iVar1 = iLocal_3270;
									Var2 = { 358.5161f, -586.02f, 42.3275f };
									fVar5 = 67.7037f;
									break;
							}
							STREAMING::REQUEST_MODEL(iVar1);
							if (STREAMING::HAS_MODEL_LOADED(iVar1))
							{
								Local_3505[iVar7 /*2*/] = PED::CREATE_PED(26, iVar1, Var2, fVar5, 1, 1);
								if (GlobalFunc_IsPedNotInjuredOrDead(Local_3505[iVar7 /*2*/]))
								{
									Local_3505[iVar7 /*2*/].f_1 = 4;
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3505[iVar7 /*2*/], 1);
									PED::SET_PED_FLEE_ATTRIBUTES(Local_3505[iVar7 /*2*/], 4, 1);
									PED::SET_PED_KEEP_TASK(Local_3505[iVar7 /*2*/], 1);
									switch (iVar7)
									{
										case 0:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 1:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[iVar7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 2:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[2 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[2 /*2*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[2 /*2*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[2 /*2*/], 4, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[2 /*2*/], 5, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[2 /*2*/], 8, 0, 0, 0);
											break;
										
										case 3:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[3 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[3 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[3 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[3 /*2*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[3 /*2*/], 11, 0, 0, 0);
											break;
										
										case 4:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[4 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[4 /*2*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[4 /*2*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[4 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[4 /*2*/], 5, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[4 /*2*/], 8, 0, 0, 0);
											break;
										
										case 5:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[5 /*2*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[5 /*2*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[5 /*2*/], 3, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[5 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[5 /*2*/], 5, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 6:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[6 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[6 /*2*/], 2, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[6 /*2*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[6 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[6 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[6 /*2*/], 8, 0, 0, 0);
											break;
										
										case 7:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[7 /*2*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[7 /*2*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[7 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[7 /*2*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[7 /*2*/], 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 8:
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[8 /*2*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[8 /*2*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[8 /*2*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[8 /*2*/], 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_3505[8 /*2*/], 11, 1, 2, 0);
											break;
										}
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_3252) > iVar6)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3505[iVar7 /*2*/]))
				{
					switch (Local_3505[iVar7 /*2*/].f_1)
					{
						case 4:
							if (GlobalFunc_775(Local_3505[iVar7 /*2*/], Param0, 5f) || GlobalFunc_155(Local_3482, Local_3505[iVar7 /*2*/], 8f))
							{
								TASK::TASK_COWER(Local_3505[iVar7 /*2*/], -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3505[iVar7 /*2*/], 1);
								Local_3505[iVar7 /*2*/].f_1 = 6;
							}
							break;
						
						case 5:
							break;
						
						case 6:
							if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_3505[iVar7 /*2*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_3505[iVar7 /*2*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_3505[iVar7 /*2*/], 474215631) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_3505[iVar7 /*2*/], 474215631) != 0)
								{
									TASK::TASK_COWER(Local_3505[iVar7 /*2*/], -1);
								}
							}
							else if (!GlobalFunc_775(Local_3505[iVar7 /*2*/], Param0, 250f))
							{
								func_52(&(Local_3505[iVar7 /*2*/]), 0);
								Local_3505[iVar7 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar7++;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_3252) > iVar6)
	{
		iLocal_3252 = MISC::GET_GAME_TIMER();
	}
}



void func_370(float fParam0)//Position - 0x2C029
{
	int iVar0;
	
	switch (iLocal_3258)
	{
		case 0:
			if (fParam0 > 5000f)
			{
				PED::SET_PED_NON_CREATION_AREA(-1332.351f, -763.4576f, 10f, -1229.142f, -654.3546f, 42f);
				iLocal_3258++;
			}
			break;
		
		case 1:
			if (fParam0 > 10000f)
			{
				PED::SET_PED_NON_CREATION_AREA(-1274.148f, -842.6357f, 10f, -1139.836f, -703.7437f, 42f);
				iLocal_3258++;
			}
			break;
		
		case 2:
			if (fParam0 > 40000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 1);
				iLocal_3258++;
			}
			break;
		
		case 3:
			if (fParam0 > 54000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -513.4877f, -598.4955f, 30.89824f, -695.001f, -593.8384f, 19.30782f, 60f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -518.4041f, -622.8293f, 32.30106f, -608.4054f, -622.3588f, 26.78756f, 11f, 0, 1, 0))
				{
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(-497.2258f, -710.6161f, 32.22013f, 5.85f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-498.1823f, -719.3134f, 32.21197f, 2.15f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-497.9032f, -724.9741f, 32.21197f, 3.8f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-499.5668f, -731.9666f, 32.21197f, 7.3f, 0);
				}
				PATHFIND::SET_PED_PATHS_IN_AREA(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0, 0);
				PED::SET_PED_NON_CREATION_AREA(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f);
				uLocal_3289[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				uLocal_3289[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-489.7285f, -680.7455f, 22.0126f, -497.1978f, -690.007f, 41.80794f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 4:
			if (fParam0 > 61000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
				PED::SET_PED_NON_CREATION_AREA(-508.7908f, -764.6354f, 28f, -488.0437f, -702.8006f, 38f);
				uLocal_3289[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-503.0949f, -754.9647f, 29f, -494.7944f, -730.1296f, 37f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 5:
			if (fParam0 > 65000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0, 0);
				PED::SET_PED_NON_CREATION_AREA(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f);
				uLocal_3289[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 6:
			if (fParam0 > 75000f)
			{
				PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
				uLocal_3289[1] = PED::ADD_SCENARIO_BLOCKING_AREA(291.5848f, -588.8806f, 37f, 303.7603f, -579.5882f, 48f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 7:
			if (fParam0 > 114500f)
			{
				func_287(1);
				iLocal_3258++;
			}
			break;
	}
}

void func_371()//Position - 0x2C4F1
{
	if (!iLocal_3208)
	{
		if (fLocal_3265 > (114436f - 4000f))
		{
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_A", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_B", 0);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PANIC_WALLA_INTERIOR", 0);
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_A", 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_02_CRASH_B", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PANIC_WALLA_INTERIOR", 0))
			{
				iLocal_3208 = 1;
			}
		}
	}
	else
	{
		switch (iLocal_3246)
		{
			case 0:
				if (fLocal_3265 >= 114436f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOOR_CRASH", 299.5664f, -584.6757f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 1:
				if (fLocal_3265 >= 114936f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SCREAMS", 310.5149f, -595.4158f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					AUDIO::_0x062D5EAD4DA2FA6A();
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "PANIC_WALLA", 316.4345f, -589.3902f, 42.2919f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 2:
				if (fLocal_3265 >= 117166f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 325.66f, -589.01f, 42.3f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 3:
				if (fLocal_3265 >= 117736f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 330.13f, -585.72f, 42.42f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 4:
				if (fLocal_3265 >= 118186f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SCREAMS", 331.7845f, -578.5184f, 42.3167f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "PANIC_WALLA", 354.6585f, -584.2177f, 42.315f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 5:
				if (fLocal_3265 >= 118496f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WALL_CRASH", 337.89f, -582.38f, 42.33f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 6:
				if (fLocal_3265 >= 120986f)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "WINDOW_CRASH", 364.64f, -595.43f, 42.54f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_372()//Position - 0x2C750
{
	if (!GlobalFunc_188() && bLocal_3168)
	{
		if (iLocal_3542 == 0)
		{
			if (fLocal_3265 >= 99000f)
			{
				if (GlobalFunc_1986(Local_3555, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3273))
					{
						STREAMING::REQUEST_MODEL(Local_3273.f_7);
						if (STREAMING::HAS_MODEL_LOADED(Local_3273.f_7))
						{
							Local_3273 = OBJECT::CREATE_OBJECT(Local_3273.f_7, Local_3273.f_1, 1, 1, 0);
							if (GlobalFunc_115(Local_3273))
							{
								ENTITY::SET_ENTITY_ROTATION(Local_3273, Local_3273.f_4, 2, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3273, Local_3273.f_1, 0, 0, 1);
								ENTITY::FREEZE_ENTITY_POSITION(Local_3273, 1);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3273.f_7);
								iLocal_3542 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_3542 == 1)
		{
			if (fLocal_3265 >= 114436f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_3273))
				{
					GlobalFunc_2346(&Local_3273);
					iLocal_3542 = 2;
				}
			}
		}
		else if (iLocal_3542 == 2)
		{
		}
		if (iLocal_3248 == 0)
		{
			if (fLocal_3265 >= 99000f)
			{
				if (GlobalFunc_1986(Local_3555, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (iLocal_3262 > 3)
					{
						uLocal_3284 = OBJECT::GET_RAYFIRE_MAP_OBJECT(299.4302f, -584.8925f, 42.2629f, 100f, "DES_hospitaldoors");
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3284))
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284, 11);
							iLocal_3248++;
						}
					}
				}
			}
		}
		else if (iLocal_3248 == 1)
		{
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3284))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284) == 5)
				{
					if (fLocal_3265 >= 114436f)
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284, 6);
						iLocal_3248++;
					}
				}
				else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284) != 4)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284, 4);
				}
			}
			else
			{
				iLocal_3248 = (iLocal_3248 - 1);
			}
		}
	}
}

void func_373()//Position - 0x2C916
{
	STREAMING::REQUEST_ANIM_DICT("rcmnigel2");
	if (GlobalFunc_115(Local_3496))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3496);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3496, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_3496, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3496, 0);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_3496, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3496, 1, 1);
		AUDIO::SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Local_3496, 1f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_3496, 0f);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
	{
		func_361(1090519040);
		if (ENTITY::GET_ENTITY_HEALTH(Local_3482) > 110)
		{
			ENTITY::SET_ENTITY_HEALTH(Local_3482, 110);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_3482, 1);
		}
	}
	if (!CAM::IS_SPHERE_VISIBLE(393.38f, -617.53f, 27.91f, 30f))
	{
		MISC::CLEAR_AREA_OF_PEDS(393.38f, -617.53f, 27.91f, 35f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(393.38f, -617.53f, 27.91f, 8f, 0);
	}
}

void func_374()//Position - 0x2C9EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iLocal_2830;
	iVar1 = iLocal_3003;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_1318[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1318[iVar2], sLocal_3295);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_1576[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1576[iVar2], sLocal_3295);
		}
		iVar2++;
	}
}

void func_375()//Position - 0x2CA5E
{
	iLocal_133 = 1;
}

void func_376()//Position - 0x2CA69
{
	if (!iLocal_3228)
	{
		if (fLocal_3265 > 124136f)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_3482) < 200)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_3482, 200);
				}
			}
			if (GlobalFunc_4947(Local_3496))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_3496, 1000);
				if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_3496, 4))
				{
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_3496, 4, 1);
				}
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3496, 1);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_3496, 0);
				VEHICLE::SMASH_VEHICLE_WINDOW(Local_3496, 1);
				VEHICLE::POP_OUT_VEHICLE_WINDSCREEN(Local_3496);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_3496, 0f, 1f, 0.1f, 800f, 1850f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_3496, -0.2f, 1f, 0.5f, 50f, 650f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_3496, -0.7f, -0.2f, 0.3f, 50f, 500f, 1);
				iLocal_3228 = 1;
			}
		}
	}
}

void func_377()//Position - 0x2CB46
{
	if (((((((((((fLocal_3265 > 3000f && fLocal_3265 < 3800f) || (fLocal_3265 > 14750f && fLocal_3265 < 15250f)) || (fLocal_3265 > 28500f && fLocal_3265 < 29400f)) || (fLocal_3265 > 34000f && fLocal_3265 < 35250f)) || (fLocal_3265 > 38800f && fLocal_3265 < 41000f)) || (fLocal_3265 > 47000f && fLocal_3265 < 48300f)) || (fLocal_3265 > 56000f && fLocal_3265 < 57200f)) || (fLocal_3265 > 66750f && fLocal_3265 < 67250f)) || (fLocal_3265 > 68500f && fLocal_3265 < 70500f)) || (fLocal_3265 > 101500f && fLocal_3265 < 102500f)) || (fLocal_3265 > 114500f && fLocal_3265 < 116500f))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_3496, 1);
	}
	if ((((((fLocal_3265 > 6500f && fLocal_3265 < 7000f) || (fLocal_3265 > 7500f && fLocal_3265 < 8500f)) || (fLocal_3265 > 10500f && fLocal_3265 < 11250f)) || (fLocal_3265 > 11750f && fLocal_3265 < 12250f)) || (fLocal_3265 > 13250f && fLocal_3265 < 13500f)) || (fLocal_3265 > 14000f && fLocal_3265 < 14500f))
	{
		AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(Local_3496);
	}
}

void func_378(float fParam0, float fParam1)//Position - 0x2CD44
{
	bool bVar0;
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
	float fVar13;
	float fVar14;
	float fVar15;
	
	bVar0 = true;
	if (bVar0)
	{
		if (GlobalFunc_4947(Local_3489))
		{
			fVar1 = *fParam0;
			fVar2 = 9f;
			fVar3 = 20f;
			fVar4 = 36f;
			fVar5 = ((200f / 100f) * (0.7f * 100f));
			fVar6 = 30f;
			fVar7 = 0.7f;
			fVar8 = 0.45f;
			fVar9 = 1.6f;
			fVar10 = 0.04f;
			if (fParam1 > 0f && fParam1 < 6000f)
			{
				fVar2 = 1f;
				fVar3 = 10f;
				fVar4 = 22f;
				fVar6 = 45f;
				fVar9 = 1f;
				fVar10 = 0.02f;
			}
			else if (fParam1 > 12000f && fParam1 < 20000f)
			{
				fVar2 = 10.5f;
				fVar3 = 22f;
				fVar6 = 15f;
				fVar10 = 0.05f;
			}
			else if (fParam1 > 31000f && fParam1 < 35500f)
			{
				fVar2 = 9f;
				fVar3 = 20f;
				fVar6 = 20f;
				fVar9 = 1.8f;
			}
			else if (fParam1 > 37000f && fParam1 < 42500f)
			{
				fVar2 = 8f;
				fVar3 = 21f;
			}
			else if (fParam1 > 54500f && fParam1 < 58000f)
			{
				fVar2 = 8f;
				fVar3 = 22f;
			}
			else if (fParam1 > 58000f && fParam1 < 63500f)
			{
				fVar2 = 15f;
				fVar3 = 22f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 63500f && fParam1 < 72500f)
			{
				fVar2 = 10f;
				fVar3 = 20f;
				fVar4 = 30f;
			}
			else if (fParam1 > 72500f && fParam1 < 81500f)
			{
				fVar4 = 30f;
			}
			else if (fParam1 > 81500f && fParam1 < 84000f)
			{
				fVar4 = 25f;
			}
			else if (fParam1 > 88000f && fParam1 < 96500f)
			{
				fVar4 = 30f;
				fVar6 = 20f;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
				{
					fVar2 = 20f;
					fVar3 = 35f;
					fVar4 = 60f;
					fVar6 = 15f;
				}
			}
			else if (fParam1 > 96500f && fParam1 < 102500f)
			{
				fVar2 = 15f;
				fVar3 = 20f;
				fVar4 = 25f;
				fVar6 = 20f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 102500f && fParam1 < 107500f)
			{
				fVar2 = 15f;
				fVar3 = 25f;
				fVar4 = 40f;
			}
			else if (fParam1 > 107500f && fParam1 < 110500f)
			{
				fVar2 = 17f;
				fVar3 = 30f;
				fVar4 = 50f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 110500f && fParam1 < 114000f)
			{
				fVar2 = 20f;
				fVar3 = 35f;
				fVar4 = 55f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 114500f && fParam1 < 118000f)
			{
				fVar2 = 22f;
				fVar3 = 37f;
				fVar4 = 60f;
				fVar9 = 2f;
			}
			else if (fParam1 > 118000f)
			{
				fVar2 = 27f;
				fVar3 = 45f;
				fVar4 = 70f;
				fVar9 = 2f;
			}
			func_386(&fVar1, &Local_3489, Local_3496, fVar2, fVar3, fVar4, fVar5, fVar6, 1f, fVar7, fVar8, fVar9, 1, 0, 1097859072, 1);
			if (fParam1 > 114500f)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
				{
					fVar1 = 1.2f;
				}
				else if (fParam1 < 120000f)
				{
					fVar1 = 2.2f;
					fVar10 = 1f;
				}
			}
			GlobalFunc_2218(fParam0, fVar1, fVar10);
		}
	}
	else
	{
		fVar11 = *fParam0;
		fVar12 = 6f;
		fVar13 = 18f;
		fVar14 = 35f;
		fVar15 = 1.5f;
		if (fParam1 > 37000f && fParam1 < 42500f)
		{
			fVar12 = 8f;
			fVar13 = 22f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 54500f && fParam1 < 58000f)
		{
			fVar12 = 8f;
			fVar13 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 58000f && fParam1 < 63500f)
		{
			fVar13 = 15f;
			fVar14 = 22f;
		}
		else if (fParam1 > 63500f && fParam1 < 72500f)
		{
			fVar12 = 10f;
			fVar13 = 20f;
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 72500f && fParam1 < 81500f)
		{
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 81500f && fParam1 < 84000f)
		{
			fVar14 = 25f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 88000f && fParam1 < 96500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
			{
				fVar12 = 12f;
				fVar13 = 30f;
				fVar14 = 45f;
				fVar15 = 1.6f;
			}
		}
		else if (fParam1 > 96500f && fParam1 < 102500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 102500f && fParam1 < 107500f)
		{
			fVar12 = 12f;
			fVar13 = 25f;
			fVar14 = 40f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 107500f && fParam1 < 110500f)
		{
			fVar12 = 14f;
			fVar13 = 30f;
			fVar14 = 50f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 110500f && fParam1 < 114000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 55f;
			fVar15 = 1.9f;
		}
		else if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar12 = 40f;
			fVar13 = 50f;
			fVar14 = 70f;
			fVar15 = 3f;
		}
		else if (fParam1 > 118000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 65f;
			fVar15 = 2f;
		}
		func_379(Local_3496, PLAYER::PLAYER_PED_ID(), &fVar11, 1f, fVar12, fVar13, fVar14, fVar15, 1065353216, 1060320051, 1);
		if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar11 = 2.2f;
		}
		if (fParam1 > 114500f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
			{
				fVar11 = 1.2f;
			}
		}
		*fParam0 = fVar11;
	}
}

void func_379(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x2D4D7
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
	
	if (iLocal_135 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_135 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1308;
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
			iLocal_136 = 1;
		}
		else if (iLocal_136)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_136 = 0;
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
		fVar8 = ((fLocal_1315 * fParam3) * fVar1);
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
		fVar8 = ((fLocal_1316 * fParam3) * fVar1);
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
							fVar1 = (fVar1 * (fLocal_1306 - fLocal_1307));
							fVar1 = (fVar1 + fLocal_1307);
							fLocal_1305 = fVar1;
							if (fLocal_1305 < fLocal_1307)
							{
								fLocal_1305 = fLocal_1307;
							}
							if (fLocal_1305 > fLocal_1306)
							{
								fLocal_1305 = fLocal_1306;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1305);
						}
					}
				}
			}
		}
	}
}







void func_386(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x2D9DE
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, 1) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
	Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, Var0) };
	fVar9 = SYSTEM::VDIST(Var0, Var3);
	fVar10 = 0f;
	fVar11 = (fParam11 - 1f);
	fVar12 = (1f - fParam9);
	if (Var6.f_1 < 1f)
	{
		if (fVar9 > fParam5)
		{
			iVar13 = 0;
			if (fVar9 > fParam6)
			{
				if (fVar9 > (fParam6 * 2f))
				{
					iVar13 = 1;
				}
				fVar9 = fParam6;
			}
			fVar10 = ((fVar9 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || iVar13)
			{
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar10));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar9 > fParam4)
		{
			fVar10 = ((fVar9 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar12 * fVar10));
		}
		else
		{
			if (fVar9 < fParam3)
			{
				fVar9 = fParam3;
			}
			fVar10 = ((fParam4 - fVar9) / (fParam4 - fParam3));
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
			{
				*uParam0 = (1f + ((fVar10 * fVar11) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar10 * fVar11));
			}
		}
	}
	else
	{
		if (fVar9 > fParam7)
		{
			fVar9 = fParam7;
		}
		fVar10 = (fVar9 / fParam7);
		fVar14 = (ENTITY::GET_ENTITY_SPEED(iParam2) - ENTITY::GET_ENTITY_SPEED(*iParam1));
		if (fVar14 > 0f)
		{
			fVar10 = (fVar10 * 0.5f);
		}
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			*uParam0 = (2f + fVar10);
		}
		else if (ENTITY::GET_ENTITY_SPEED(*iParam1) < 5f && fVar14 > 0f)
		{
			*uParam0 = (0.6f + fVar10);
		}
		else
		{
			*uParam0 = (1f + fVar10);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar15 = fParam13;
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar15 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(*iParam1, -fVar15);
	}
}

void func_387()//Position - 0x2DBC2
{
	int iVar0;
	int iVar1;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_3253) > 50)
	{
		if (GlobalFunc_4947(iLocal_3003[3]))
		{
			if (fLocal_3265 > 28750f && fLocal_3265 < 29750f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[3], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[3], 2f);
				if (!iLocal_3215[0])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[3], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[0] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[3], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[3], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[5]))
		{
			if (fLocal_3265 > 34500f && fLocal_3265 < 35500f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[5], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[5], 2f);
				if (!iLocal_3215[1])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[5], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[1] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[5], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[5], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[8]))
		{
			if (!bLocal_3213)
			{
				bLocal_3213 = func_388(iLocal_3003[8], joaat("s_m_y_garbage"), 26);
			}
			if (fLocal_3265 > 46000f && fLocal_3265 < 47000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[8], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[8], 2f);
				if (!iLocal_3215[2])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[8], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[2] = 1;
				}
			}
			else if (fLocal_3265 > 47500f && fLocal_3265 < 48500f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[8], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[8], 2f);
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[8], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[8], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[9]))
		{
			if (!bLocal_3214)
			{
				bLocal_3214 = func_388(iLocal_3003[9], joaat("a_m_y_cyclist_01"), 26);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[16]))
		{
			if (fLocal_3265 > 69000f && fLocal_3265 < 71000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[16], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[16], 2f);
				if (!iLocal_3215[3])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[16], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[3] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[16], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[16], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_2830[17]))
		{
			if (!iLocal_3215[4])
			{
				if (fLocal_3265 > 78700f && fLocal_3265 < 79300f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2830[17], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[4] = 1;
				}
			}
		}
		if (GlobalFunc_4947(iLocal_2830[19]))
		{
			if (!iLocal_3215[4])
			{
				if (fLocal_3265 > 79950f && fLocal_3265 < 82300f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2830[19], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[4] = 1;
				}
			}
		}
		if (GlobalFunc_4947(iLocal_3003[20]))
		{
			if (!iLocal_3215[5])
			{
				if (fLocal_3265 > 84000f && fLocal_3265 < 84750f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[20], 3000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[5] = 1;
				}
			}
		}
		if (GlobalFunc_4947(iLocal_3003[21]))
		{
			if (fLocal_3265 > 88000f && fLocal_3265 < 90502f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[21], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[21], 2f);
				if (!iLocal_3215[6])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[21], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[6] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[21], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[21], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[23]))
		{
			if (fLocal_3265 > 84800f && fLocal_3265 < 87000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[23], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[23], 2f);
				if (!iLocal_3215[7])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[23], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[7] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[23], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[23], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_2830[21]))
		{
			if (!iLocal_3215[8])
			{
				if (fLocal_3265 > 98800f && fLocal_3265 < 99400f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2830[21], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[8] = 1;
				}
			}
		}
		if (GlobalFunc_4947(iLocal_2830[23]))
		{
			if (fLocal_3265 > 91200f && fLocal_3265 < 92200f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2830[23], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_2830[23], 2f);
				if (!iLocal_3215[9])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_2830[23], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[9] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2830[23], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_2830[23], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[28]))
		{
			if (fLocal_3265 > 93500f && fLocal_3265 < 95000f)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[28], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[28], 2f);
				if (!iLocal_3215[10])
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[28], 3500, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[10] = 1;
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[28], 1);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[28], 1f);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[29]))
		{
			if (!iLocal_3215[11])
			{
				if (fLocal_3265 > 104500f && fLocal_3265 < 105000f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_3003[29], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3215[11] = 1;
				}
			}
		}
		if (GlobalFunc_4947(iLocal_2932[31]))
		{
			if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(iLocal_2932[31], 2))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_2932[31], 2, 0, 0);
			}
			if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(iLocal_2932[31], 3))
			{
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_2932[31], 3, 0, 0);
			}
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_2932[31]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_2932[31], 1);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[22]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3003[22]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3003[22], 1);
			}
		}
		if (GlobalFunc_4947(iLocal_3003[19]))
		{
			iVar0 = -1;
			iVar1 = -1;
			VEHICLE::GET_VEHICLE_LIGHTS_STATE(iLocal_3003[19], &iVar0, &iVar1);
			if (iVar0 != 1)
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[19], 2);
				VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(iLocal_3003[19], 2f);
			}
			if (iLocal_3256 == -1)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[19]))
				{
					iLocal_3256 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3256, "FAKE_REVS_VEHICLE_02", iLocal_3003[19], "NIGEL_02_SOUNDSET", 0, 0);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3256))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[19]))
				{
					AUDIO::STOP_SOUND(iLocal_3256);
					AUDIO::RELEASE_SOUND_ID(iLocal_3256);
					iLocal_3256 = -1;
				}
			}
		}
		iLocal_3253 = MISC::GET_GAME_TIMER();
	}
}

int func_388(int iParam0, int iParam1, int iParam2)//Position - 0x2E330
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		bVar0 = false;
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			STREAMING::REQUEST_MODEL(iParam1);
			if (STREAMING::HAS_MODEL_LOADED(iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 0);
					PED::DELETE_PED(&iVar1);
				}
				iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam2, iParam1, -1, 0, 0);
				if (GlobalFunc_2222(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_2598);
				}
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar2, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar2, 0);
				PED::SET_PED_CONFIG_FLAG(iVar2, 32, 0);
				if (bLocal_152)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 8192, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 2, 0);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iParam0, 1);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
				GlobalFunc_2221(iVar2);
				return 1;
			}
		}
	}
	return 0;
}



void func_391(int iParam0, float fParam1)//Position - 0x2E4BB
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_150 = false;
	if (!bLocal_132)
	{
		if (bLocal_131)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_132 = true;
		}
	}
	else if (!bLocal_131)
	{
		GlobalFunc_2214();
		bLocal_132 = false;
	}
	if (bLocal_131)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_125)
	{
		if (iLocal_120)
		{
			fLocal_1302 = 0f;
		}
		else
		{
			fLocal_1302 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_130 = 1;
					}
					else
					{
						iLocal_130 = 0;
					}
				}
				fLocal_1299 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1300) * fLocal_1302));
				if (bLocal_129)
				{
					func_411(iParam0, fLocal_1299);
					func_410(iParam0, fLocal_1309);
					if (fLocal_1304 > 1000f)
					{
						if (iLocal_1876 == 0)
						{
							func_409(iParam0, fLocal_1309);
						}
						fVar0 = ((fLocal_1299 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1876) * 2000f));
						func_408(iParam0, fVar0, fLocal_1303);
						iLocal_1876++;
						if (iLocal_1876 > 2)
						{
							fLocal_1304 = 0f;
						}
					}
					else
					{
						iLocal_1876 = 0;
						fLocal_1304 = (fLocal_1304 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1299 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_137)
		{
			if (!iLocal_119)
			{
				func_405(iParam0, ((fParam1 * fLocal_1300) * fLocal_1302), 0);
				if (!iLocal_140)
				{
				}
				iLocal_140 = 0;
			}
			if (bLocal_122)
			{
				func_404(iParam0);
			}
			if (!iLocal_119)
			{
				func_394(iParam0, ((fParam1 * fLocal_1300) * fLocal_1302), 0);
			}
		}
		if (iLocal_127)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3085 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2555 = { ENTITY::GET_ENTITY_COORDS(iLocal_3085, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3085, &fLocal_583, &fLocal_584, &fLocal_585, &fLocal_586);
				}
			}
			iLocal_127 = 0;
		}
		if (iLocal_126)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3085))
			{
				GlobalFunc_2210(iLocal_3086);
				iLocal_3086 = iLocal_3085;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3086, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3086, Local_2555, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3086, fLocal_583, fLocal_584, fLocal_585, fLocal_586);
			}
			fLocal_1298 = fLocal_1301;
			iLocal_119 = 1;
			iLocal_126 = 0;
		}
		if (iLocal_119)
		{
			while (!func_392(&iParam0, fLocal_1298))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_120 = 1;
		}
		if (iLocal_133)
		{
			iLocal_133 = 0;
		}
	}
}

int func_392(int iParam0, float fParam1)//Position - 0x2E756
{
	if (!iLocal_134)
	{
		iLocal_119 = 1;
		func_76();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1863 == -1)
			{
				while (!func_393(iParam0, iLocal_1863, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_124)
				{
					iLocal_120 = 1;
					fLocal_1302 = 0f;
					iLocal_1864 = 0;
					iLocal_1866 = 0;
					iLocal_1865 = 0;
					iLocal_1860 = 0;
					iLocal_1861 = 0;
					iLocal_1862 = 0;
					iLocal_1867 = 0;
					iLocal_1868 = 0;
					iLocal_1869 = 0;
				}
			}
		}
		iLocal_134 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1300) * fLocal_1302));
				func_393(iParam0, iLocal_1863, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1299 = fParam1;
		iLocal_1870 = 0;
		iLocal_1873 = 0;
		fLocal_1314 = 0f;
		fLocal_1313 = 0f;
		func_394(*iParam0, ((1f * fLocal_1300) * fLocal_1302), 1);
		func_405(*iParam0, ((1f * fLocal_1300) * fLocal_1302), 1);
		func_404(*iParam0);
		if ((iLocal_1867 == 0 && iLocal_1868 == 0) && iLocal_1869 == 0)
		{
			iLocal_120 = 0;
			iLocal_119 = 0;
			iLocal_134 = 0;
			return 1;
		}
	}
	return 0;
}

int func_393(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2E888
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2582);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2582))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2582, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1871 && iParam1 != iLocal_1872)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2582, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2582, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2582, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2582, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2582))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2582);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2582, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1871 && iParam1 != iLocal_1872)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2582, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2582, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2582, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2582, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_394(int iParam0, float fParam1, bool bParam2)//Position - 0x2EA6E
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
		iVar0 = iLocal_1866;
		while (iVar0 < 70)
		{
			if (iLocal_1647[iVar0] != 99)
			{
				if (iLocal_1647[iVar0] == 0)
				{
					if (iLocal_1576[iVar0] > 0)
					{
						if (!iLocal_119)
						{
							if (fLocal_1299 > (fLocal_871[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2756[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1718[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2756[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1718[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1718[iVar0]), 1);
								iLocal_1647[iVar0]++;
								iLocal_1868++;
							}
						}
						else
						{
							fVar12 = (fLocal_1299 - fLocal_871[iVar0]);
							fVar12 = (fVar12 * fLocal_942[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_403(iLocal_1576[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2756[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1718[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2756[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1718[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1718[iVar0]), 1);
									iLocal_1647[iVar0]++;
									iLocal_1868++;
								}
								else
								{
									iLocal_1647[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1647[iVar0] = 99;
					}
				}
				else if (iLocal_1647[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582);
					if (MISC::IS_BIT_SET(iLocal_1718[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_146 && ((!MISC::IS_BIT_SET(iLocal_1718[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1718[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_88());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_88());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3003[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2756[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2756[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1576[iVar0], &cLocal_2582))
							{
								if (fLocal_1299 >= (fLocal_871[iVar0] - (fLocal_1312 * fParam1)))
								{
									if ((iLocal_133 || bParam2) || (!bLocal_150 && !func_402(Local_2344[iVar0 /*3*/], Var9, 5f, fLocal_1310)))
									{
										if (bLocal_129)
										{
											func_401(Local_2344[iVar0 /*3*/], Var9, fLocal_1303);
										}
										iLocal_3003[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2756[iVar0], Local_2344[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2756[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_3003[iVar0], 0);
										}
										if (iLocal_142 && !MISC::IS_BIT_SET(iLocal_1718[iVar0], 0))
										{
											func_400(iLocal_3003[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1718[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3003[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3003[iVar0], Local_2344[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_3003[iVar0], fLocal_587[iVar0], fLocal_658[iVar0], fLocal_729[iVar0], fLocal_800[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2756[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2756[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3003[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3003[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_3003[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2756[iVar0]);
										iLocal_1868 = (iLocal_1868 - 1);
										iLocal_1647[iVar0]++;
										bLocal_150 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3003[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3003[iVar0], Local_2344[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_3003[iVar0], fLocal_587[iVar0], fLocal_658[iVar0], fLocal_729[iVar0], fLocal_800[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2756[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2756[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3003[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3003[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2756[iVar0]);
							iLocal_1868 = (iLocal_1868 - 1);
							iLocal_1647[iVar0]++;
						}
					}
				}
				else if (iLocal_1647[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582);
					if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1718[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_146 && ((!MISC::IS_BIT_SET(iLocal_1718[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1718[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_88());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_88());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3003[iVar0]))
						{
							if (!bLocal_150 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3003[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_3003[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_133)
									{
										func_399(&(iLocal_3003[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1718[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
					{
						if (fLocal_1299 >= fLocal_871[iVar0])
						{
							if (11 > iLocal_1861)
							{
								fVar12 = (fLocal_1299 - fLocal_871[iVar0]);
								fVar12 = (fVar12 * fLocal_942[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1576[iVar0], &cLocal_2582))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3003[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1576[iVar0], fVar12, &cLocal_2582) };
										if (((!func_402(Var3, Var9, 5f, fLocal_1310) && func_402(Var6, Var9, 5f, fLocal_1310)) && !iLocal_133) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 1))
											{
												func_399(&(iLocal_3003[iVar0]), iVar19, 1);
											}
											iLocal_1861++;
											iLocal_1647[iVar0]++;
										}
										else if (((!bLocal_150 || MISC::IS_BIT_SET(iLocal_1718[iVar0], 1)) || iLocal_133) || bParam2)
										{
											if (func_393(&(iLocal_3003[iVar0]), iLocal_1576[iVar0], fVar12, 1, 0, 0, bLocal_148, bLocal_147))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_3003[iVar0], (fParam1 * fLocal_942[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1718[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3003[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_3003[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3003[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2756[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_3003[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 1))
												{
													func_399(&(iLocal_3003[iVar0]), iVar19, 1);
												}
												iLocal_1861++;
												iLocal_1647[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 1))
										{
											func_399(&(iLocal_3003[iVar0]), iVar19, 1);
										}
										iLocal_1861++;
										iLocal_1647[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 1))
								{
									func_399(&(iLocal_3003[iVar0]), iVar19, 1);
								}
								iLocal_1861++;
								iLocal_1647[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1718[iVar0], 1))
						{
							func_399(&(iLocal_3003[iVar0]), iVar19, 1);
						}
						iLocal_1861++;
						iLocal_1647[iVar0]++;
					}
				}
				else if (iLocal_1647[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3003[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_123 && !iLocal_120) && !bLocal_139) && (((!bLocal_148 && !bLocal_147) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3003[iVar0])) || func_398(iLocal_3003[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_141)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_3003[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_3003[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_3003[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_395(iLocal_3003[iVar0]);
												iLocal_1647[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_3003[iVar0], (fParam1 * fLocal_942[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3003[iVar0]);
							}
						}
						else
						{
							iLocal_1647[iVar0]++;
						}
					}
					else
					{
						iLocal_1647[iVar0]++;
					}
				}
				else if (iLocal_1647[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[iVar0]))
						{
							iLocal_1647[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3003[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3003[iVar0], (fParam1 * fLocal_942[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3003[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1576[iVar0], &cLocal_2582))
							{
								if (fLocal_1299 > (fLocal_871[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3003[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3003[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1647[iVar0]++;
					}
				}
				else if (iLocal_1647[iVar0] == 5)
				{
					if (!iLocal_3003[iVar0] == iLocal_3087)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3003[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3003[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_3003[iVar0]);
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
						if (!bLocal_131 && !bLocal_144)
						{
							if (iLocal_1576[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1576[iVar0], &cLocal_2582);
							}
						}
						if (!bLocal_121)
						{
							if (!bLocal_149)
							{
								GlobalFunc_2210(iLocal_3003[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3003[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_3003[iVar0]));
						}
					}
					iLocal_1861 = (iLocal_1861 - 1);
					iLocal_1647[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1866 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_80();
	}
}

void func_395(int iParam0)//Position - 0x2F66C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_82(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}



int func_398(var uParam0)//Position - 0x2F7AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_145)
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

int func_399(var uParam0, int iParam1, bool bParam2)//Position - 0x2F80B
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2598);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_88(), -1, 0, 0);
				if (bLocal_151)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_88());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_152)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_150 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_400(int iParam0)//Position - 0x2F900
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2828 >= -1 && iLocal_2829 >= -1)
	{
		while (iVar0 == iLocal_2828 || iVar0 == iLocal_2829)
		{
			iVar0++;
		}
	}
	else if (iLocal_2828 >= -1)
	{
		if (iVar0 == iLocal_2828)
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

void func_401(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2FA79
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_132)
	{
		if (!func_402(Param0, Param3, fParam6, 200f))
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

int func_402(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x2FAE9
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_132)
		{
			if (!iLocal_119)
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

float func_403(int iParam0)//Position - 0x2FB30
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2582);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2582))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2582);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2582);
	return uVar0;
}

void func_404(int iParam0)//Position - 0x2FB6C
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
		iVar0 = iLocal_1865;
		while (iVar0 < 70)
		{
			switch (iLocal_1789[iVar0])
			{
				case 0:
					if (!iLocal_2685[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2133[iVar0 /*3*/], fLocal_1297, fLocal_1297, fLocal_1297, 0, 1, 0))
						{
							iLocal_1867++;
							iLocal_1789[iVar0]++;
						}
					}
					else
					{
						iLocal_1789[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_1862)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2932[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2685[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2685[iVar0]))
							{
								if ((iLocal_119 || iLocal_133) || (!bLocal_150 && !func_402(Local_2133[iVar0 /*3*/], Var1, 5f, fLocal_1310)))
								{
									if (bLocal_129)
									{
										func_401(Local_2133[iVar0 /*3*/], Var1, fLocal_1303);
									}
									iLocal_2932[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2685[iVar0], Local_2133[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2685[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2932[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2932[iVar0], fLocal_1013[iVar0], fLocal_1084[iVar0], fLocal_1155[iVar0], fLocal_1226[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2685[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2932[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2932[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2685[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2932[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2932[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2932[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2932[iVar0], 1);
									iLocal_1867 = (iLocal_1867 - 1);
									iLocal_1862++;
									iLocal_1789[iVar0]++;
									bLocal_150 = true;
								}
							}
						}
						else
						{
							iLocal_1867 = (iLocal_1867 - 1);
							iLocal_1862++;
							iLocal_1789[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2932[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2932[iVar0], 1) };
						}
						if (fLocal_1311 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1311 * fLocal_1311))
						{
							if (!GlobalFunc_5654(iLocal_2932[iVar0], iParam0, 0))
							{
								if (!bLocal_121)
								{
									GlobalFunc_2210(iLocal_2932[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2932[iVar0]));
								}
								iLocal_1862 = (iLocal_1862 - 1);
								iLocal_1789[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1789[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1865 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_83();
	}
}

void func_405(int iParam0, float fParam1, int iParam2)//Position - 0x2FE63
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
			fLocal_1299 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1864;
		while (iVar0 < 85 && !bVar23)
		{
			if (iLocal_1404[iVar0] != 99)
			{
				if (iLocal_1404[iVar0] == 0)
				{
					if (iLocal_1318[iVar0] > 0 && iLocal_2599[iVar0] != 0)
					{
						if (!iLocal_119)
						{
							if (fLocal_1299 < (fLocal_497[iVar0] + 20000f))
							{
								if (fLocal_1299 >= (fLocal_497[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2599[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1490[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2599[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1490[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1490[iVar0]), 1);
									iLocal_1869++;
									iLocal_1404[iVar0]++;
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
								func_407(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1299 - fLocal_497[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_403(iLocal_1318[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2599[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1490[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2599[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1490[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1490[iVar0]), 1);
									iLocal_1869++;
									iLocal_1404[iVar0]++;
								}
								else
								{
									func_407(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_407(iVar0, 1090519040);
					}
				}
				else if (iLocal_1404[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1490[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_146 && ((!MISC::IS_BIT_SET(iLocal_1490[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1490[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_88());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_88());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2830[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2599[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2599[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1318[iVar0], &cLocal_2582)) && bVar17)
						{
							if (fLocal_1299 >= (fLocal_497[iVar0] - (fLocal_1312 * fParam1)))
							{
								if ((iLocal_133 || iParam2) || (!bLocal_150 && !func_402(Local_1877[iVar0 /*3*/], Var12, 5f, fLocal_1310)))
								{
									if (bLocal_129)
									{
										func_401(Local_1877[iVar0 /*3*/], Var12, fLocal_1303);
									}
									iLocal_2830[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2599[iVar0], Local_1877[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2599[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2830[iVar0], 0);
									}
									if (iLocal_142 && !MISC::IS_BIT_SET(iLocal_1490[iVar0], 0))
									{
										func_400(iLocal_2830[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2830[iVar0], Local_1877[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2830[iVar0], fLocal_153[iVar0], fLocal_239[iVar0], fLocal_325[iVar0], fLocal_411[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2599[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2599[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2830[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1490[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2830[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2830[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2830[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2830[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2830[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2599[iVar0]);
									iLocal_1869 = (iLocal_1869 - 1);
									iLocal_1404[iVar0]++;
									bLocal_150 = true;
								}
								else if (fLocal_1299 > fLocal_497[iVar0])
								{
									iLocal_1869 = (iLocal_1869 - 1);
									func_407(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1404[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1875 || iLocal_1875 == 0)) || iLocal_133) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1490[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_146 && ((!MISC::IS_BIT_SET(iLocal_1490[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1490[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_88());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_88());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2830[iVar0]))
							{
								if (!bLocal_150 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2830[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2830[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_133)
										{
											func_399(&(iLocal_2830[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1490[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2830[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582);
							if (fLocal_1299 >= fLocal_497[iVar0])
							{
								if (15 > iLocal_1860)
								{
									fVar15 = (fLocal_1299 - fLocal_497[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1318[iVar0], &cLocal_2582))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2830[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1318[iVar0], fVar15, &cLocal_2582) };
											if (!func_402(Var6, Var12, 5f, fLocal_1310) && func_402(Var9, Var12, 5f, fLocal_1310))
											{
												if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
												{
													func_399(&(iLocal_2830[iVar0]), iVar21, 0);
												}
												func_407(iVar0, 1090519040);
											}
											else if (((!bLocal_150 || MISC::IS_BIT_SET(iLocal_1490[iVar0], 1)) || iLocal_133) || iParam2)
											{
												if (func_393(&(iLocal_2830[iVar0]), iLocal_1318[iVar0], fVar15, 1, 0, 0, 1, bLocal_147))
												{
													if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
													{
														func_399(&(iLocal_2830[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2830[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2830[iVar0], fParam1);
													iLocal_1860++;
													iLocal_1404[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
											{
												func_399(&(iLocal_2830[iVar0]), iVar21, 0);
											}
											func_407(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582))
									{
										if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
										{
											func_399(&(iLocal_2830[iVar0]), iVar21, 0);
										}
										func_407(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
									{
										func_399(&(iLocal_2830[iVar0]), iVar21, 0);
									}
									func_407(iVar0, 1090519040);
								}
							}
							else if (iLocal_130 && !bLocal_138)
							{
								if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
								{
									func_399(&(iLocal_2830[iVar0]), iVar21, 0);
								}
								func_407(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1490[iVar0], 1))
							{
								func_399(&(iLocal_2830[iVar0]), iVar21, 0);
							}
							func_407(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1875 = iVar0;
					}
				}
				else if (iLocal_1404[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2830[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2830[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2830[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_128)
									{
										if ((!bLocal_123 && !iLocal_120) && func_398(iLocal_2830[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1874 || iLocal_1874 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2830[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2830[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1874 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_143 && !MISC::IS_BIT_SET(iLocal_1490[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1874 || iLocal_1874 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2830[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1874 = iVar0;
										}
									}
									if (bVar24)
									{
										func_395(iLocal_2830[iVar0]);
										iLocal_1404[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2830[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2830[iVar0]);
							}
						}
						else
						{
							iLocal_1404[iVar0]++;
						}
					}
					else
					{
						iLocal_1404[iVar0]++;
					}
				}
				else if (iLocal_1404[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2830[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2830[iVar0]))
						{
							iLocal_1404[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2830[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2830[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2830[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1318[iVar0], &cLocal_2582))
							{
								if (fLocal_1299 > (fLocal_497[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1318[iVar0], &cLocal_2582)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2830[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2830[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1404[iVar0]++;
					}
				}
				else if (iLocal_1404[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2830[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2830[iVar0]);
					}
					iLocal_1860 = (iLocal_1860 - 1);
					func_407(iVar0, fVar16);
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
			iLocal_1864 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1874 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1875 = 0;
		}
	}
	else
	{
		func_84();
	}
}


void func_407(int iParam0, float fParam1)//Position - 0x30A2E
{
	int iVar0;
	
	if (!iLocal_2599[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2599[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2830[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2830[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2830[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2830[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2830[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_152)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_121)
	{
		if (!bLocal_149)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2830[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2830[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2830[iParam0]));
		}
	}
	if (!bLocal_131 && !bLocal_144)
	{
		if (iLocal_1318[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1318[iParam0], &cLocal_2582);
		}
	}
	iLocal_1404[iParam0] = 99;
}

void func_408(int iParam0, float fParam1, float fParam2)//Position - 0x30B87
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
			func_401(Var1, Var10, fVar13);
		}
	}
}

void func_409(int iParam0, float fParam1)//Position - 0x30C0A
{
	if (!bLocal_132)
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

void func_410(int iParam0, float fParam1)//Position - 0x30C57
{
	if (!bLocal_132)
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

void func_411(int iParam0, float fParam1)//Position - 0x30CA4
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1313 + 2000f);
		fVar2 = (fLocal_1314 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1870 == 0)
				{
					Local_2570 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1313) };
					iLocal_1870++;
				}
				else if (iLocal_1870 == 1)
				{
					Local_2573 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar1) };
					iLocal_1870++;
				}
				else if (!bLocal_150)
				{
					if (Local_2570.x > Local_2573.x)
					{
						fVar3 = Local_2570.x;
						Local_2570.x = Local_2573.x;
						Local_2573.x = fVar3;
					}
					if (Local_2570.f_1 > Local_2573.f_1)
					{
						fVar3 = Local_2570.f_1;
						Local_2570.f_1 = Local_2573.f_1;
						Local_2573.f_1 = fVar3;
					}
					if (Local_2570.f_2 > Local_2573.f_2)
					{
						fVar3 = Local_2570.f_2;
						Local_2570.f_2 = Local_2573.f_2;
						Local_2573.f_2 = fVar3;
					}
					Local_2570 = { Local_2570 - Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
					Local_2573 = { Local_2573 + Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2570, Local_2573, 0, 0);
					fLocal_1313 = fVar1;
					iLocal_1870 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1873 == 0)
			{
				Local_2576 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1314) };
				iLocal_1873++;
			}
			else if (iLocal_1873 == 1)
			{
				Local_2579 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fVar2) };
				iLocal_1873++;
			}
			else if (!bLocal_150 && !bVar4)
			{
				if (Local_2576.x > Local_2579.x)
				{
					fVar3 = Local_2576.x;
					Local_2576.x = Local_2579.x;
					Local_2579.x = fVar3;
				}
				if (Local_2576.f_1 > Local_2579.f_1)
				{
					fVar3 = Local_2576.f_1;
					Local_2576.f_1 = Local_2579.f_1;
					Local_2579.f_1 = fVar3;
				}
				if (Local_2576.f_2 > Local_2579.f_2)
				{
					fVar3 = Local_2576.f_2;
					Local_2576.f_2 = Local_2579.f_2;
					Local_2579.f_2 = fVar3;
				}
				Local_2576 = { Local_2576 - Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
				Local_2579 = { Local_2579 + Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2576, Local_2579, 1);
				fLocal_1314 = fVar2;
				iLocal_1873 = 0;
			}
		}
	}
}


void func_413()//Position - 0x30F3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_3247) > 3)
	{
		iVar0 = 0;
		iVar1 = iLocal_3003;
		iVar2 = iLocal_2830;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iLocal_1576[iVar0] > 0)
			{
				if (fLocal_3265 > (fLocal_871[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1576[iVar0], sLocal_3295);
				}
				else if (fLocal_3265 > (fLocal_871[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3003[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1576[iVar0], sLocal_3295);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iLocal_1318[iVar0] > 0)
			{
				if (fLocal_3265 > (fLocal_497[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1318[iVar0], sLocal_3295);
				}
				else if (fLocal_3265 > (fLocal_497[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2830[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1318[iVar0], sLocal_3295);
					}
				}
			}
			iVar0++;
		}
		iLocal_3247 = MISC::GET_GAME_TIMER();
	}
}

void func_414()//Position - 0x3104B
{
	if (iLocal_3262 == 0)
	{
		GlobalFunc_7621(75, 1, 0, 1, 0);
		GlobalFunc_7621(76, 0, 0, 1, 0);
		iLocal_3261 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
		iLocal_3262 = 1;
	}
	else if (iLocal_3262 == 1)
	{
		if (!GlobalFunc_188())
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
			{
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_3261))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3261);
				}
				else
				{
					STREAMING::SET_INTERIOR_ACTIVE(iLocal_3261, 1);
					iLocal_3262 = 2;
				}
			}
			else
			{
				iLocal_3261 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_3262 == 2)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_3261))
			{
				GlobalFunc_7621(181, 0, 0, 1, 0);
				iLocal_3262 = 3;
			}
			else
			{
				iLocal_3262 = 1;
			}
		}
		else
		{
			iLocal_3262 = 1;
		}
	}
	else if (iLocal_3262 == 3)
	{
		if (!GlobalFunc_188())
		{
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_3261))
				{
					INTERIOR::REFRESH_INTERIOR(iLocal_3261);
					iLocal_3262 = 4;
				}
				else
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3261);
				}
			}
			else
			{
				iLocal_3261 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_3262 == 4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
		{
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_3261))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_3261);
			}
		}
		else
		{
			iLocal_3261 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(307.3065f, -589.9595f, 43.302f, "v_hospital");
		}
	}
}

void func_415(float fParam0, struct<3> Param1)//Position - 0x311BB
{
	float fVar0;
	
	if (GlobalFunc_4947(Local_3533[0 /*2*/]))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_3533[0 /*2*/], 1, 1);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_3533[0 /*2*/], 0, 1);
		if (fLocal_3265 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3533[0 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_48(&(Local_3533[0 /*2*/]), 0);
			}
		}
	}
	if (GlobalFunc_4947(Local_3533[1 /*2*/]))
	{
		if (fLocal_3265 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3533[1 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_48(&(Local_3533[1 /*2*/]), 0);
			}
		}
	}
	if (GlobalFunc_4947(Local_3533[2 /*2*/]))
	{
		if (Local_3503.f_1 == 0)
		{
			STREAMING::REQUEST_MODEL(iLocal_3269);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_3269))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_3503))
				{
					Local_3503 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3533[2 /*2*/], 26, iLocal_3269, -1, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3269);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3503, 1);
					Local_3503.f_1 = 1;
				}
			}
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3533[2 /*2*/]))
			{
				ENTITY::SET_ENTITY_QUATERNION(Local_3533[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
			}
		}
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3533[2 /*2*/]))
		{
			if (!iLocal_3235)
			{
				if (fLocal_3265 >= 200f)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3533[2 /*2*/], 2, sLocal_3295, 1);
					VEHICLE::SET_PLAYBACK_SPEED(Local_3533[2 /*2*/], fParam0);
					iLocal_3235 = 1;
				}
			}
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(Local_3533[2 /*2*/], fParam0);
			if (!iLocal_3209)
			{
				if (fLocal_3265 > 3500f && fLocal_3265 < 4500f)
				{
					VEHICLE::START_VEHICLE_HORN(Local_3533[2 /*2*/], 2000, MISC::GET_HASH_KEY("HELDDOWN"), 0);
					iLocal_3209 = 1;
				}
			}
		}
		if (fLocal_3265 > 10000f)
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_3533[2 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3533[2 /*2*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3533[2 /*2*/]);
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_3295);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3269);
				func_52(&Local_3503, 0);
				func_48(&(Local_3533[2 /*2*/]), 0);
			}
		}
	}
}

void func_416()//Position - 0x313DA
{
	switch (iLocal_3106)
	{
		case 0:
			if (!bLocal_3168)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
					if (iLocal_3169 == 0)
					{
						if (iLocal_3105 == 1)
						{
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
								iLocal_3169 = 1;
							}
						}
					}
					GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 1, 1);
				}
				GlobalFunc_881(&(Local_3107.f_28[0]));
				GlobalFunc_6692(&(Local_3107.f_35[0]));
				GlobalFunc_6692(&(Local_3107.f_35[1]));
				func_439();
				func_437(1);
				func_434();
				if (GlobalFunc_4947(Local_3489))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3489);
				}
				func_415(fLocal_3267, Local_3555);
				func_427(1);
				iLocal_3106 = 2;
			}
			else
			{
				func_426("NMT_2_RCM", 0);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sLocal_3300, 4, 0, 0, Local_3482.f_1);
				}
				if (GlobalFunc_8027(1, 1093140480, 0))
				{
					if (GlobalFunc_115(Local_3107.f_35[0]))
					{
						GlobalFunc_2372(&Local_3489, &(Local_3107.f_35[0]));
					}
					if (GlobalFunc_115(Local_3489))
					{
						VEHICLE::SET_VEHICLE_FIXED(Local_3489);
						ENTITY::SET_ENTITY_PROOFS(Local_3489, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_3107.f_35[1]))
					{
						GlobalFunc_2372(&Local_3496, &(Local_3107.f_35[1]));
					}
					if (GlobalFunc_115(Local_3496))
					{
						VEHICLE::SET_VEHICLE_FIXED(Local_3496);
						ENTITY::SET_ENTITY_PROOFS(Local_3496, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_3299, 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3475, sLocal_3298, 2, Local_3475.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3468, sLocal_3297, 2, Local_3468.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3482, sLocal_3300, 2, Local_3482.f_1, 0);
					if (GlobalFunc_4947(Local_3489))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3489, sLocal_3301, 0, 0, 0);
					}
					else
					{
						GlobalFunc_6692(&(Local_3107.f_35[0]));
						GlobalFunc_6692(&Local_3489);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3489, sLocal_3301, 2, Local_3489.f_1, 0);
					}
					if (GlobalFunc_4947(Local_3496))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3496, sLocal_3302, 0, 0, 0);
					}
					else
					{
						GlobalFunc_6692(&(Local_3107.f_35[1]));
						GlobalFunc_6692(&Local_3496);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3496, sLocal_3302, 2, Local_3496.f_1, 0);
					}
					GlobalFunc_79(800, 0);
					RECORDING::_0x48621C9FCA3EBD28(1);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					GlobalFunc_8954();
					func_288(-1310.7f, -640.22f, 26.54f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_439();
					GlobalFunc_881(&(Local_3107.f_28[0]));
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					func_437(0);
					func_415(fLocal_3267, Local_3555);
					iLocal_3106 = 1;
				}
			}
			break;
		
		case 1:
			func_415(fLocal_3267, Local_3555);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3475))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3298, 0)))
				{
					Local_3475 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3298, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3468))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3297, 0)))
				{
					Local_3468 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3297, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3482))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3300, 0)))
				{
					Local_3482 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3300, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3489))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3301, 0)))
				{
					Local_3489 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3301, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3496))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3302, 0)))
				{
					Local_3496 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3302, 0));
				}
			}
			if ((GlobalFunc_4947(Local_3489) && GlobalFunc_IsPedNotInjuredOrDead(Local_3475)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3298, 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3475, Local_3489))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3475, Local_3489, 0);
					}
					func_423();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3297, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3468, Local_3489))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3468, Local_3489, 2);
					}
					func_422();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3301, 0))
				{
					func_421();
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3489, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3489);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3489);
				}
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3489, 1);
				iLocal_3242 = 1;
			}
			if (GlobalFunc_4947(Local_3496) && GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3300, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3482, Local_3496))
					{
						PED::SET_PED_INTO_VEHICLE(Local_3482, Local_3496, -1);
					}
					func_419();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3302, 0))
				{
					func_417();
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_3496, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_3496);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(22f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-1312.556f, -664.3428f, 25.5716f, 150f, 0, 0, 0, 0, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_437(1);
				func_434();
				func_427(0);
				iLocal_3106 = 2;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 104000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 900 && CUTSCENE::GET_CUTSCENE_TIME() < 1480)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
				}
				func_437(0);
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Local_3489))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(Local_3489, 1);
				iLocal_3242 = 1;
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_3168)
				{
					func_23(1, 1, 1, 1);
					GlobalFunc_702(0, 0, 1);
				}
				iLocal_3241 = 0;
				GlobalFunc_4923(&Local_3107, 0, 1);
				func_415(fLocal_3267, Local_3555);
				func_286(1);
			}
			break;
	}
}

void func_417()//Position - 0x319AB
{
	if (GlobalFunc_4947(Local_3496))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_3496);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3496, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_3496, 0, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3496, 1, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3496, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3496, 1);
		VEHICLE::SET_VEHICLE_STRONG(Local_3496, 1);
		ENTITY::SET_ENTITY_HEALTH(Local_3496, 2000);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_3496, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3496, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3496, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3496, 0);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3496, 0, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3496, 3);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_3496, 0, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3496.f_1, 1);
		GlobalFunc_743(Local_3496, 1);
		ENTITY::SET_ENTITY_COORDS(Local_3496, Local_3496.f_3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_QUATERNION(Local_3496, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_3496, 1);
	}
}


void func_419()//Position - 0x31A95
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_3482, 4, 0, 0, 0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3482.f_1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_3482, 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_3482, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3482, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3482, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3482, 116, 0);
		PED::SET_PED_DIES_WHEN_INJURED(Local_3482, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3482, 1);
		if (PED::IS_PED_IN_GROUP(Local_3482))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_3482);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3482, iLocal_3285);
		GlobalFunc_173(&uLocal_3303, 3, Local_3482, "DINAPOLI", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_3482, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3482, 1);
	}
}


void func_421()//Position - 0x31BD1
{
	if (GlobalFunc_4947(Local_3489))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_3489);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3489, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_3489, 65, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3489, 1);
		VEHICLE::SET_VEHICLE_STRONG(Local_3489, 1);
		ENTITY::SET_ENTITY_HEALTH(Local_3489, 2000);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3489, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3489, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_3489, 5, 0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3489.f_1, 1);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_3489);
		GlobalFunc_743(Local_3489, 0);
	}
}

void func_422()//Position - 0x31C48
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3468))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_3468);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3468.f_1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_3468, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_3468, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3468, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3468, 132, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3468, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3468, 116, 0);
		if (PED::IS_PED_IN_GROUP(Local_3468))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_3468);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3468, iLocal_3286);
		GlobalFunc_173(&uLocal_3303, 5, Local_3468, "MRSTHORNHILL", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_3468, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3468, 1);
	}
}

void func_423()//Position - 0x31CDF
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3475))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_3475);
		PED::SET_PED_MODEL_IS_SUPPRESSED(Local_3475.f_1, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_3475, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_3475, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3475, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3475, 132, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3475, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3475, 116, 0);
		if (PED::IS_PED_IN_GROUP(Local_3475))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_3475);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3475, iLocal_3286);
		GlobalFunc_173(&uLocal_3303, 4, Local_3475, "NIGEL", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_3475, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3475, 1);
	}
}



void func_426(char* sParam0, bool bParam1)//Position - 0x31DA8
{
	func_291(bParam1);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_427(bool bParam0)//Position - 0x31DBE
{
	func_433(sLocal_3295, iLocal_3257, bParam0, 1);
	func_432();
	func_431(1);
	func_430(joaat("a_m_m_bevhills_02"));
	func_375();
	fLocal_1309 = 250f;
	bLocal_141 = true;
	func_429(1);
	bLocal_147 = true;
	func_428(1, 0, -1);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
}

void func_428(bool bParam0, int iParam1, int iParam2)//Position - 0x31E08
{
	if (bParam0)
	{
		iLocal_142 = 1;
		iLocal_2828 = iParam1;
		iLocal_2829 = iParam2;
	}
}

void func_429(bool bParam0)//Position - 0x31E22
{
	bLocal_152 = bParam0;
}

void func_430(int iParam0)//Position - 0x31E2E
{
	iLocal_2827 = iParam0;
}

void func_431(int iParam0)//Position - 0x31E3B
{
	bLocal_146 = iParam0;
}

void func_432()//Position - 0x31E47
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_1877[0 /*3*/] = { -1189.919f, -864.3419f, 13.5062f };
	fLocal_153[0] = 0.011f;
	fLocal_239[0] = -0.0057f;
	fLocal_325[0] = -0.4728f;
	fLocal_411[0] = 0.8811f;
	iLocal_1318[0] = 3;
	fLocal_497[0] = 12794f;
	iLocal_2599[0] = joaat("f620");
	Local_1877[1 /*3*/] = { -1168.025f, -846.5394f, 13.8245f };
	fLocal_153[1] = 0.0067f;
	fLocal_239[1] = 0.0025f;
	fLocal_325[1] = 0.3507f;
	fLocal_411[1] = 0.9364f;
	iLocal_1318[1] = 4;
	fLocal_497[1] = 12926f;
	iLocal_2599[1] = joaat("washington");
	Local_1877[2 /*3*/] = { -1052.359f, -730.7704f, 18.729f };
	fLocal_153[2] = -0.0125f;
	fLocal_239[2] = -0.0121f;
	fLocal_325[2] = 0.9079f;
	fLocal_411[2] = 0.4187f;
	iLocal_1318[2] = 14;
	fLocal_497[2] = 19594.96f;
	iLocal_2599[2] = joaat("serrano");
	Local_1877[3 /*3*/] = { -1050.453f, -743.3076f, 18.7718f };
	fLocal_153[3] = -0.0019f;
	fLocal_239[3] = -0.0002f;
	fLocal_325[3] = -0.3894f;
	fLocal_411[3] = 0.9211f;
	iLocal_1318[3] = 6;
	fLocal_497[3] = 20400f;
	iLocal_2599[3] = joaat("washington");
	Local_1877[4 /*3*/] = { -1032.554f, -734.0855f, 19.1223f };
	fLocal_153[4] = 0.0233f;
	fLocal_239[4] = -0.0077f;
	fLocal_325[4] = -0.4212f;
	fLocal_411[4] = 0.9066f;
	iLocal_1318[4] = 16;
	fLocal_497[4] = 19960.85f;
	iLocal_2599[4] = joaat("serrano");
	Local_1877[5 /*3*/] = { -865.4848f, -623.928f, 28.3187f };
	fLocal_153[5] = 0.0038f;
	fLocal_239[5] = -0.0257f;
	fLocal_325[5] = 0.9893f;
	fLocal_411[5] = -0.1433f;
	iLocal_1318[5] = 7;
	fLocal_497[5] = 28417f;
	iLocal_2599[5] = joaat("washington");
	Local_1877[6 /*3*/] = { -869.6063f, -612.9931f, 28.5539f };
	fLocal_153[6] = 0.005f;
	fLocal_239[6] = -0.0119f;
	fLocal_325[6] = 0.9777f;
	fLocal_411[6] = -0.2094f;
	iLocal_1318[6] = 8;
	fLocal_497[6] = 28417f;
	iLocal_2599[6] = joaat("serrano");
	Local_1877[7 /*3*/] = { -853.7338f, -652.7806f, 27.3348f };
	fLocal_153[7] = -0.0022f;
	fLocal_239[7] = -0.0021f;
	fLocal_325[7] = 0.7085f;
	fLocal_411[7] = 0.7057f;
	iLocal_1318[7] = 9;
	fLocal_497[7] = 28549f;
	iLocal_2599[7] = joaat("serrano");
	Local_1877[8 /*3*/] = { -797.3943f, -667.453f, 28.1434f };
	fLocal_153[8] = 0.0434f;
	fLocal_239[8] = 0.0031f;
	fLocal_325[8] = -0.7039f;
	fLocal_411[8] = 0.709f;
	iLocal_1318[8] = 10;
	fLocal_497[8] = 30654f;
	iLocal_2599[8] = joaat("feltzer2");
	Local_1877[9 /*3*/] = { -728.5153f, -661.8074f, 29.8396f };
	fLocal_153[9] = -0.0017f;
	fLocal_239[9] = 0.0032f;
	fLocal_325[9] = -0.7028f;
	fLocal_411[9] = 0.7114f;
	iLocal_1318[9] = 11;
	fLocal_497[9] = 33027f;
	iLocal_2599[9] = joaat("rapidgt");
	Local_1877[10 /*3*/] = { -595.1748f, -661.9557f, 31.8497f };
	fLocal_153[10] = 0.0098f;
	fLocal_239[10] = -0.0088f;
	fLocal_325[10] = -0.7017f;
	fLocal_411[10] = 0.7123f;
	iLocal_1318[10] = 15;
	fLocal_497[10] = 48186f;
	iLocal_2599[10] = joaat("sultan");
	Local_1877[11 /*3*/] = { -477.1852f, -644.7173f, 32.0538f };
	fLocal_153[11] = -0.0087f;
	fLocal_239[11] = 0.0318f;
	fLocal_325[11] = 0.0461f;
	fLocal_411[11] = 0.9984f;
	iLocal_1318[11] = 17;
	fLocal_497[11] = 55765.85f;
	iLocal_2599[11] = joaat("serrano");
	Local_1877[12 /*3*/] = { -489.0458f, -666.3751f, 32.3303f };
	fLocal_153[12] = 0.0113f;
	fLocal_239[12] = 0.0176f;
	fLocal_325[12] = -0.7063f;
	fLocal_411[12] = 0.7076f;
	iLocal_1318[12] = 23;
	fLocal_497[12] = 58613f;
	iLocal_2599[12] = joaat("asterope");
	Local_1877[13 /*3*/] = { -487.5655f, -744.9453f, 32.6015f };
	fLocal_153[13] = -0.0937f;
	fLocal_239[13] = 0.045f;
	fLocal_325[13] = 0.8793f;
	fLocal_411[13] = 0.4648f;
	iLocal_1318[13] = 19;
	fLocal_497[13] = 60459.32f;
	iLocal_2599[13] = joaat("bmx");
	Local_1877[14 /*3*/] = { -478.1905f, -835.1024f, 29.9746f };
	fLocal_153[14] = -0.0021f;
	fLocal_239[14] = -0.0021f;
	fLocal_325[14] = 0.7008f;
	fLocal_411[14] = 0.7134f;
	iLocal_1318[14] = 18;
	fLocal_497[14] = 64923.85f;
	iLocal_2599[14] = joaat("serrano");
	Local_1877[15 /*3*/] = { -430.6053f, -816.6718f, 36.8249f };
	fLocal_153[15] = -0.0001f;
	fLocal_239[15] = 0.0048f;
	fLocal_325[15] = 0.9993f;
	fLocal_411[15] = 0.0373f;
	iLocal_1318[15] = 28;
	fLocal_497[15] = 68551f;
	iLocal_2599[15] = joaat("asterope");
	Local_1877[16 /*3*/] = { -427.4086f, -762.012f, 36.6573f };
	fLocal_153[16] = 0.0001f;
	fLocal_239[16] = 0.0049f;
	fLocal_325[16] = 1f;
	fLocal_411[16] = 0.0047f;
	iLocal_1318[16] = 30;
	fLocal_497[16] = 70333f;
	iLocal_2599[16] = joaat("sultan");
	Local_1877[17 /*3*/] = { -476.9606f, -664.9507f, 31.9901f };
	fLocal_153[17] = -0.003f;
	fLocal_239[17] = -0.0083f;
	fLocal_325[17] = 0.7264f;
	fLocal_411[17] = -0.6872f;
	iLocal_1318[17] = 70;
	fLocal_497[17] = 77000f;
	iLocal_2599[17] = joaat("sultan");
	Local_1877[18 /*3*/] = { -436.342f, -650.5261f, 30.4239f };
	fLocal_153[18] = 0.0056f;
	fLocal_239[18] = 0.0224f;
	fLocal_325[18] = 0.7071f;
	fLocal_411[18] = 0.7068f;
	iLocal_1318[18] = 13;
	fLocal_497[18] = 77590f;
	iLocal_2599[18] = joaat("sultan");
	Local_1877[19 /*3*/] = { -420.96f, -656.3897f, 30.5754f };
	fLocal_153[19] = 0.0112f;
	fLocal_239[19] = 0.0112f;
	fLocal_325[19] = 0.707f;
	fLocal_411[19] = 0.707f;
	iLocal_1318[19] = 12;
	fLocal_497[19] = 78000f;
	iLocal_2599[19] = joaat("packer");
	Local_1877[20 /*3*/] = { -455.2408f, -535.85f, 24.7102f };
	fLocal_153[20] = -0.0022f;
	fLocal_239[20] = 0.0022f;
	fLocal_325[20] = -0.707f;
	fLocal_411[20] = 0.7072f;
	iLocal_1318[20] = 31;
	fLocal_497[20] = 80849f;
	iLocal_2599[20] = joaat("sultan");
	Local_1877[21 /*3*/] = { -421.8391f, -535.8503f, 24.7099f };
	fLocal_153[21] = -0.0024f;
	fLocal_239[21] = 0.0024f;
	fLocal_325[21] = -0.7071f;
	fLocal_411[21] = 0.7071f;
	iLocal_1318[21] = 32;
	fLocal_497[21] = 80849f;
	iLocal_2599[21] = joaat("sultan");
	Local_1877[22 /*3*/] = { -323.2696f, -519.5041f, 24.769f };
	fLocal_153[22] = -0.0086f;
	fLocal_239[22] = -0.0166f;
	fLocal_325[22] = -0.7001f;
	fLocal_411[22] = 0.7138f;
	iLocal_1318[22] = 34;
	fLocal_497[22] = 85280f;
	iLocal_2599[22] = joaat("asterope");
	Local_1877[23 /*3*/] = { -384.7831f, -496.5516f, 24.806f };
	fLocal_153[23] = -0.0022f;
	fLocal_239[23] = -0.0022f;
	fLocal_325[23] = 0.7072f;
	fLocal_411[23] = 0.7071f;
	iLocal_1318[23] = 33;
	fLocal_497[23] = 85722f;
	iLocal_2599[23] = joaat("landstalker");
	Local_1877[24 /*3*/] = { -299.8336f, -519.6835f, 24.804f };
	fLocal_153[24] = -0.0071f;
	fLocal_239[24] = -0.0166f;
	fLocal_325[24] = -0.7047f;
	fLocal_411[24] = 0.7093f;
	iLocal_1318[24] = 35;
	fLocal_497[24] = 86195f;
	iLocal_2599[24] = joaat("asterope");
	Local_1877[25 /*3*/] = { -296.6222f, -496.012f, 24.8684f };
	fLocal_153[25] = -0.0026f;
	fLocal_239[25] = -0.0022f;
	fLocal_325[25] = 0.7084f;
	fLocal_411[25] = 0.7058f;
	iLocal_1318[25] = 21;
	fLocal_497[25] = 87170.85f;
	iLocal_2599[25] = joaat("landstalker");
	Local_1877[26 /*3*/] = { -242.5362f, -502.0159f, 25.6451f };
	fLocal_153[26] = -0.0096f;
	fLocal_239[26] = -0.0094f;
	fLocal_325[26] = 0.7194f;
	fLocal_411[26] = 0.6945f;
	iLocal_1318[26] = 36;
	fLocal_497[26] = 88537f;
	iLocal_2599[26] = joaat("landstalker");
	Local_1877[27 /*3*/] = { -234.2082f, -530.1547f, 25.9344f };
	fLocal_153[27] = -0.0058f;
	fLocal_239[27] = 0.0064f;
	fLocal_325[27] = 0.7091f;
	fLocal_411[27] = -0.705f;
	iLocal_1318[27] = 39;
	fLocal_497[27] = 90066f;
	iLocal_2599[27] = joaat("rapidgt");
	Local_1877[28 /*3*/] = { -204.8521f, -534.9627f, 26.6094f };
	fLocal_153[28] = 0.0281f;
	fLocal_239[28] = 0.0002f;
	fLocal_325[28] = -0.6936f;
	fLocal_411[28] = 0.7198f;
	iLocal_1318[28] = 37;
	fLocal_497[28] = 91140f;
	iLocal_2599[28] = joaat("asterope");
	Local_1877[29 /*3*/] = { -186.2448f, -518.6406f, 27.3221f };
	fLocal_153[29] = -0.0061f;
	fLocal_239[29] = -0.0197f;
	fLocal_325[29] = -0.7053f;
	fLocal_411[29] = 0.7086f;
	iLocal_1318[29] = 41;
	fLocal_497[29] = 91890f;
	iLocal_2599[29] = joaat("fq2");
	Local_1877[30 /*3*/] = { -181.6259f, -523.8001f, 27.2923f };
	fLocal_153[30] = 0.0116f;
	fLocal_239[30] = -0.0124f;
	fLocal_325[30] = -0.7029f;
	fLocal_411[30] = 0.7111f;
	iLocal_1318[30] = 38;
	fLocal_497[30] = 92230f;
	iLocal_2599[30] = joaat("sultan");
	Local_1877[31 /*3*/] = { -152.8287f, -489.4706f, 28.3269f };
	fLocal_153[31] = -0.0213f;
	fLocal_239[31] = 0.0018f;
	fLocal_325[31] = 0.7254f;
	fLocal_411[31] = 0.688f;
	iLocal_1318[31] = 24;
	fLocal_497[31] = 92554.85f;
	iLocal_2599[31] = joaat("landstalker");
	Local_1877[32 /*3*/] = { -172.1277f, -500.8638f, 27.8326f };
	fLocal_153[32] = -0.0252f;
	fLocal_239[32] = -0.0296f;
	fLocal_325[32] = 0.7083f;
	fLocal_411[32] = 0.7048f;
	iLocal_1318[32] = 40;
	fLocal_497[32] = 94528f;
	iLocal_2599[32] = joaat("fq2");
	Local_1877[33 /*3*/] = { -114.866f, -500.2346f, 29.8111f };
	fLocal_153[33] = -0.0104f;
	fLocal_239[33] = -0.0098f;
	fLocal_325[33] = 0.7021f;
	fLocal_411[33] = 0.7119f;
	iLocal_1318[33] = 78;
	fLocal_497[33] = 95865.44f;
	iLocal_2599[33] = joaat("asterope");
	Local_1877[34 /*3*/] = { -129.1858f, -505.694f, 29.242f };
	fLocal_153[34] = -0.015f;
	fLocal_239[34] = -0.0163f;
	fLocal_325[34] = 0.7139f;
	fLocal_411[34] = 0.6999f;
	iLocal_1318[34] = 42;
	fLocal_497[34] = 95886f;
	iLocal_2599[34] = joaat("asterope");
	Local_1877[35 /*3*/] = { -55.6079f, -499.5939f, 31.8493f };
	fLocal_153[35] = -0.0116f;
	fLocal_239[35] = -0.0112f;
	fLocal_325[35] = 0.7134f;
	fLocal_411[35] = 0.7006f;
	iLocal_1318[35] = 25;
	fLocal_497[35] = 96787.85f;
	iLocal_2599[35] = joaat("landstalker");
	Local_1877[36 /*3*/] = { -87.112f, -504.988f, 30.9077f };
	fLocal_153[36] = -0.0159f;
	fLocal_239[36] = -0.0149f;
	fLocal_325[36] = 0.7118f;
	fLocal_411[36] = 0.702f;
	iLocal_1318[36] = 43;
	fLocal_497[36] = 97140f;
	iLocal_2599[36] = joaat("fq2");
	Local_1877[37 /*3*/] = { 26.5103f, -499.3918f, 34.2088f };
	fLocal_153[37] = -0.0005f;
	fLocal_239[37] = -0.0002f;
	fLocal_325[37] = 0.7186f;
	fLocal_411[37] = 0.6954f;
	iLocal_1318[37] = 79;
	fLocal_497[37] = 100001.4f;
	iLocal_2599[37] = joaat("packer");
	Local_1877[39 /*3*/] = { 70.5888f, -526.8503f, 33.7031f };
	fLocal_153[39] = -0.0004f;
	fLocal_239[39] = -0.0004f;
	fLocal_325[39] = -0.7039f;
	fLocal_411[39] = 0.7103f;
	iLocal_1318[39] = 46;
	fLocal_497[39] = 102948f;
	iLocal_2599[39] = joaat("ninef2");
	Local_1877[40 /*3*/] = { 99.8609f, -521.5526f, 33.5624f };
	fLocal_153[40] = 0.0145f;
	fLocal_239[40] = -0.0145f;
	fLocal_325[40] = 0.707f;
	fLocal_411[40] = -0.7069f;
	iLocal_1318[40] = 47;
	fLocal_497[40] = 104004f;
	iLocal_2599[40] = joaat("landstalker");
	Local_1877[41 /*3*/] = { 196.1974f, -526.9512f, 33.5498f };
	fLocal_153[41] = 0.0178f;
	fLocal_239[41] = -0.0178f;
	fLocal_325[41] = 0.7069f;
	fLocal_411[41] = -0.7068f;
	iLocal_1318[41] = 48;
	fLocal_497[41] = 107502f;
	iLocal_2599[41] = joaat("landstalker");
	Local_1877[42 /*3*/] = { 230.2825f, -516.1511f, 33.5591f };
	fLocal_153[42] = -0.0023f;
	fLocal_239[42] = 0.0023f;
	fLocal_325[42] = -0.7071f;
	fLocal_411[42] = 0.7071f;
	iLocal_1318[42] = 49;
	fLocal_497[42] = 108624f;
	iLocal_2599[42] = joaat("landstalker");
	Local_1877[44 /*3*/] = { 301.1906f, -521.55f, 33.4621f };
	fLocal_153[44] = 0.0001f;
	fLocal_239[44] = -0.0001f;
	fLocal_325[44] = 0.7071f;
	fLocal_411[44] = -0.7071f;
	iLocal_1318[44] = 50;
	fLocal_497[44] = 111198f;
	iLocal_2599[44] = joaat("sultan");
	Local_2133[0 /*3*/] = { -1200.091f, -849.0596f, 13.5431f };
	fLocal_1013[0] = -0.0171f;
	fLocal_1084[0] = -0.0063f;
	fLocal_1155[0] = 0.88f;
	fLocal_1226[0] = 0.4747f;
	iLocal_2685[0] = joaat("feltzer2");
	Local_2133[1 /*3*/] = { -1058.345f, -772.2757f, 18.8924f };
	fLocal_1013[1] = -0.0028f;
	fLocal_1084[1] = 0.0149f;
	fLocal_1155[1] = 0.3553f;
	fLocal_1226[1] = 0.9346f;
	iLocal_2685[1] = joaat("feltzer2");
	Local_2133[2 /*3*/] = { -1070.664f, -739.6081f, 18.8482f };
	fLocal_1013[2] = -0.0111f;
	fLocal_1084[2] = 0.0192f;
	fLocal_1155[2] = 0.9254f;
	fLocal_1226[2] = 0.3784f;
	iLocal_2685[2] = joaat("feltzer2");
	Local_2133[3 /*3*/] = { -1121.096f, -880.1656f, 7.6752f };
	fLocal_1013[3] = 0.0021f;
	fLocal_1084[3] = -0.0011f;
	fLocal_1155[3] = -0.4944f;
	fLocal_1226[3] = 0.8692f;
	iLocal_2685[3] = joaat("serrano");
	Local_2133[4 /*3*/] = { -1115.618f, -807.3134f, 16.6315f };
	fLocal_1013[4] = -0.0414f;
	fLocal_1084[4] = -0.0257f;
	fLocal_1155[4] = 0.8471f;
	fLocal_1226[4] = -0.5292f;
	iLocal_2685[4] = joaat("serrano");
	Local_2133[5 /*3*/] = { -1112.403f, -774.3158f, 18.3801f };
	fLocal_1013[5] = -0.0097f;
	fLocal_1084[5] = -0.0319f;
	fLocal_1155[5] = 0.5058f;
	fLocal_1226[5] = 0.862f;
	iLocal_2685[5] = joaat("serrano");
	Local_2133[6 /*3*/] = { -1130.529f, -792.3233f, 16.5972f };
	fLocal_1013[6] = -0.0307f;
	fLocal_1084[6] = -0.0293f;
	fLocal_1155[6] = 0.9133f;
	fLocal_1226[6] = 0.4051f;
	iLocal_2685[6] = joaat("feltzer2");
	Local_2133[7 /*3*/] = { -1045.39f, -778.9995f, 18.3863f };
	fLocal_1013[7] = 0.0118f;
	fLocal_1084[7] = 0.037f;
	fLocal_1155[7] = 0.5106f;
	fLocal_1226[7] = 0.859f;
	iLocal_2685[7] = joaat("serrano");
	Local_2133[8 /*3*/] = { -1034.826f, -739.7039f, 18.881f };
	fLocal_1013[8] = 0.0195f;
	fLocal_1084[8] = 0.019f;
	fLocal_1155[8] = -0.4353f;
	fLocal_1226[8] = 0.8999f;
	iLocal_2685[8] = joaat("radi");
	Local_2133[9 /*3*/] = { -1033.929f, -712.6562f, 19.4857f };
	fLocal_1013[9] = -0.0193f;
	fLocal_1084[9] = -0.0194f;
	fLocal_1155[9] = 0.9056f;
	fLocal_1226[9] = 0.4231f;
	iLocal_2685[9] = joaat("serrano");
	Local_2133[10 /*3*/] = { -1005.538f, -715.5715f, 20.3848f };
	fLocal_1013[10] = -0.044f;
	fLocal_1084[10] = -0.1329f;
	fLocal_1155[10] = -0.3895f;
	fLocal_1226[10] = 0.9103f;
	iLocal_2685[10] = joaat("bati");
	Local_2133[11 /*3*/] = { -980.4462f, -670.3936f, 22.8034f };
	fLocal_1013[11] = -0.0432f;
	fLocal_1084[11] = -0.0121f;
	fLocal_1155[11] = 0.8701f;
	fLocal_1226[11] = 0.4908f;
	iLocal_2685[11] = joaat("washington");
	Local_2133[12 /*3*/] = { -969.1606f, -664.5714f, 23.887f };
	fLocal_1013[12] = -0.046f;
	fLocal_1084[12] = -0.0213f;
	fLocal_1155[12] = 0.8534f;
	fLocal_1226[12] = 0.5187f;
	iLocal_2685[12] = joaat("rapidgt");
	Local_2133[13 /*3*/] = { -928.2644f, -652.7425f, 26.6901f };
	fLocal_1013[13] = -0.0303f;
	fLocal_1084[13] = -0.0054f;
	fLocal_1155[13] = 0.7573f;
	fLocal_1226[13] = 0.6524f;
	iLocal_2685[13] = joaat("rapidgt");
	Local_2133[14 /*3*/] = { -916.6693f, -650.6878f, 27.0863f };
	fLocal_1013[14] = -0.024f;
	fLocal_1084[14] = 0.0101f;
	fLocal_1155[14] = 0.7742f;
	fLocal_1226[14] = 0.6324f;
	iLocal_2685[14] = joaat("feltzer2");
	Local_2133[15 /*3*/] = { -790.8272f, -667.5106f, 28.4613f };
	fLocal_1013[15] = -0.0369f;
	fLocal_1084[15] = -0.005f;
	fLocal_1155[15] = 0.7209f;
	fLocal_1226[15] = -0.6921f;
	iLocal_2685[15] = joaat("rapidgt");
	Local_2133[16 /*3*/] = { -790.0645f, -647.0408f, 28.4882f };
	fLocal_1013[16] = -0.037f;
	fLocal_1084[16] = 0.0003f;
	fLocal_1155[16] = 0.7201f;
	fLocal_1226[16] = 0.6929f;
	iLocal_2685[16] = joaat("feltzer2");
	Local_2133[17 /*3*/] = { -716.8614f, -667.7233f, 29.6724f };
	fLocal_1013[17] = -0.0267f;
	fLocal_1084[17] = -0.0106f;
	fLocal_1155[17] = 0.7068f;
	fLocal_1226[17] = -0.7068f;
	iLocal_2685[17] = joaat("sultan");
	Local_2133[18 /*3*/] = { -653.5672f, -605.7774f, 32.8442f };
	fLocal_1013[18] = 0.0008f;
	fLocal_1084[18] = -0.0298f;
	fLocal_1155[18] = 0.9991f;
	fLocal_1226[18] = 0.031f;
	iLocal_2685[18] = joaat("radi");
	Local_2133[19 /*3*/] = { -598.4409f, -647.7642f, 31.2207f };
	fLocal_1013[19] = 0.0659f;
	fLocal_1084[19] = -0.1257f;
	fLocal_1155[19] = 0.6417f;
	fLocal_1226[19] = 0.7537f;
	iLocal_2685[19] = joaat("bati");
	Local_2133[20 /*3*/] = { -457.3376f, -774.9608f, 29.9679f };
	fLocal_1013[20] = -0.0002f;
	fLocal_1084[20] = 0f;
	fLocal_1155[20] = 0.7033f;
	fLocal_1226[20] = 0.7109f;
	iLocal_2685[20] = joaat("sultan");
	Local_2133[21 /*3*/] = { -506.0643f, -614.7634f, 29.6699f };
	fLocal_1013[21] = -0.0131f;
	fLocal_1084[21] = -0.1302f;
	fLocal_1155[21] = -0.0218f;
	fLocal_1226[21] = 0.9912f;
	iLocal_2685[21] = joaat("bati");
	Local_2133[22 /*3*/] = { -487.6026f, -614.804f, 30.58f };
	fLocal_1013[22] = 0.0002f;
	fLocal_1084[22] = 0f;
	fLocal_1155[22] = 0.9999f;
	fLocal_1226[22] = 0.0166f;
	iLocal_2685[22] = joaat("sultan");
	Local_2133[23 /*3*/] = { -856.7647f, -679.063f, 27.2491f };
	fLocal_1013[23] = -0.008f;
	fLocal_1084[23] = 0.0277f;
	fLocal_1155[23] = 0.0148f;
	fLocal_1226[23] = 0.9995f;
	iLocal_2685[23] = joaat("sultan");
	Local_2133[24 /*3*/] = { -750.8827f, -607.8928f, 29.5466f };
	fLocal_1013[24] = 0.0609f;
	fLocal_1084[24] = 0.0021f;
	fLocal_1155[24] = 0.9978f;
	fLocal_1226[24] = -0.0261f;
	iLocal_2685[24] = joaat("sultan");
	Local_2133[25 /*3*/] = { -477.1844f, -757.5135f, 30.1527f };
	fLocal_1013[25] = -0.0022f;
	fLocal_1084[25] = -0.0021f;
	fLocal_1155[25] = 0.7233f;
	fLocal_1226[25] = 0.6905f;
	iLocal_2685[25] = joaat("rapidgt");
	Local_2133[26 /*3*/] = { -471.01f, -624.55f, 30.58f };
	fLocal_1013[26] = 0.0001f;
	fLocal_1084[26] = -0.0002f;
	fLocal_1155[26] = -0.0144f;
	fLocal_1226[26] = 0.9999f;
	iLocal_2685[26] = joaat("sultan");
	Local_2133[27 /*3*/] = { -679.3469f, -593.3812f, 24.7059f };
	fLocal_1013[27] = -0.0011f;
	fLocal_1084[27] = 0.0004f;
	fLocal_1155[27] = 0.6772f;
	fLocal_1226[27] = 0.7358f;
	iLocal_2685[27] = joaat("sultan");
	Local_2133[28 /*3*/] = { 433.6576f, -608.7065f, 27.7732f };
	fLocal_1013[28] = -0.0003f;
	fLocal_1084[28] = 0.0005f;
	fLocal_1155[28] = 0.7774f;
	fLocal_1226[28] = -0.629f;
	iLocal_2685[28] = joaat("sultan");
	Local_2133[29 /*3*/] = { 416.3534f, -638.7431f, 27.8704f };
	fLocal_1013[29] = 0.0891f;
	fLocal_1084[29] = -0.0957f;
	fLocal_1155[29] = 0.7111f;
	fLocal_1226[29] = 0.6908f;
	iLocal_2685[29] = joaat("bati");
	Local_2133[30 /*3*/] = { 433.9501f, -603.2841f, 27.8743f };
	fLocal_1013[30] = 0.0794f;
	fLocal_1084[30] = -0.1039f;
	fLocal_1155[30] = 0.6505f;
	fLocal_1226[30] = 0.7482f;
	iLocal_2685[30] = joaat("bati");
	Local_2133[31 /*3*/] = { 291.0103f, -589.8865f, 42.9593f };
	fLocal_1013[31] = 0.0053f;
	fLocal_1084[31] = -0.0026f;
	fLocal_1155[31] = 0.9489f;
	fLocal_1226[31] = 0.3156f;
	iLocal_2685[31] = joaat("ambulance");
	Local_2344[0 /*3*/] = { -1104.283f, -775.1389f, 18.8468f };
	fLocal_587[0] = -0.0068f;
	fLocal_658[0] = -0.0121f;
	fLocal_729[0] = 0.9186f;
	fLocal_800[0] = 0.3949f;
	iLocal_1576[0] = 52;
	fLocal_871[0] = 16000f;
	fLocal_942[0] = 1f;
	iLocal_2756[0] = joaat("feltzer2");
	Local_2344[1 /*3*/] = { -1129.485f, -805.7412f, 15.9592f };
	fLocal_587[1] = 0.0303f;
	fLocal_658[1] = -0.0208f;
	fLocal_729[1] = -0.3298f;
	fLocal_800[1] = 0.9433f;
	iLocal_1576[1] = 5;
	fLocal_871[1] = 16488f;
	fLocal_942[1] = 1f;
	iLocal_2756[1] = joaat("washington");
	Local_2344[2 /*3*/] = { -998.2445f, -692.8199f, 21.5328f };
	fLocal_587[2] = -0.0136f;
	fLocal_658[2] = -0.0158f;
	fLocal_729[2] = 0.8929f;
	fLocal_800[2] = 0.4498f;
	iLocal_1576[2] = 53;
	fLocal_871[2] = 21412f;
	fLocal_942[2] = 1f;
	iLocal_2756[2] = joaat("feltzer2");
	Local_2344[3 /*3*/] = { -883.8546f, -655.3506f, 27.5493f };
	fLocal_587[3] = 0.0032f;
	fLocal_658[3] = -0.0018f;
	fLocal_729[3] = 0.712f;
	fLocal_800[3] = 0.7021f;
	iLocal_1576[3] = 54;
	fLocal_871[3] = 25000f;
	fLocal_942[3] = 1f;
	iLocal_2756[3] = joaat("feltzer2");
	Local_2344[4 /*3*/] = { -850.7409f, -661.5627f, 27.3668f };
	fLocal_587[4] = -0.0015f;
	fLocal_658[4] = 0.0017f;
	fLocal_729[4] = -0.6912f;
	fLocal_800[4] = 0.7227f;
	iLocal_1576[4] = 55;
	fLocal_871[4] = 28500f;
	fLocal_942[4] = 1f;
	iLocal_2756[4] = joaat("serrano");
	Local_2344[5 /*3*/] = { -721.2928f, -652.8879f, 29.816f };
	fLocal_587[5] = -0.0024f;
	fLocal_658[5] = -0.0102f;
	fLocal_729[5] = 0.6908f;
	fLocal_800[5] = 0.723f;
	iLocal_1576[5] = 56;
	fLocal_871[5] = 32500f;
	fLocal_942[5] = 1f;
	iLocal_2756[5] = joaat("serrano");
	Local_2344[6 /*3*/] = { -724.7061f, -648.64f, 29.7668f };
	fLocal_587[6] = -0.0212f;
	fLocal_658[6] = 0.005f;
	fLocal_729[6] = 0.7061f;
	fLocal_800[6] = 0.7078f;
	iLocal_1576[6] = 57;
	fLocal_871[6] = 32750f;
	fLocal_942[6] = 1f;
	iLocal_2756[6] = joaat("washington");
	Local_2344[7 /*3*/] = { -688.4173f, -579.6989f, 24.8499f };
	fLocal_587[7] = 0.0026f;
	fLocal_658[7] = -0.0029f;
	fLocal_729[7] = 0.7397f;
	fLocal_800[7] = -0.673f;
	iLocal_1576[7] = 58;
	fLocal_871[7] = 40273f;
	fLocal_942[7] = 1f;
	iLocal_2756[7] = joaat("washington");
	Local_2344[8 /*3*/] = { -563.1786f, -579.4122f, 25.3124f };
	fLocal_587[8] = 0.002f;
	fLocal_658[8] = 0.0021f;
	fLocal_729[8] = 0.7032f;
	fLocal_800[8] = 0.711f;
	iLocal_1576[8] = 59;
	fLocal_871[8] = 43500f;
	fLocal_942[8] = 1f;
	iLocal_2756[8] = joaat("trash");
	Local_2344[9 /*3*/] = { -556.1506f, -631.2017f, 30.562f };
	fLocal_587[9] = -0.0352f;
	fLocal_658[9] = 0.0378f;
	fLocal_729[9] = -0.6805f;
	fLocal_800[9] = 0.7309f;
	iLocal_1576[9] = 60;
	fLocal_871[9] = 51889f;
	fLocal_942[9] = 1f;
	iLocal_2756[9] = joaat("bmx");
	Local_2344[10 /*3*/] = { -445.0543f, -655.1606f, 31.3466f };
	fLocal_587[10] = 0.0076f;
	fLocal_658[10] = 0.0093f;
	fLocal_729[10] = 0.7136f;
	fLocal_800[10] = 0.7005f;
	iLocal_1576[10] = 61;
	fLocal_871[10] = 56772f;
	fLocal_942[10] = 1f;
	iLocal_2756[10] = joaat("sultan");
	Local_2344[11 /*3*/] = { -519.4122f, -666.3391f, 32.7365f };
	fLocal_587[11] = 0.0105f;
	fLocal_658[11] = 0.0179f;
	fLocal_729[11] = -0.6817f;
	fLocal_800[11] = 0.7313f;
	iLocal_1576[11] = 62;
	fLocal_871[11] = 57772f;
	fLocal_942[11] = 1f;
	iLocal_2756[11] = joaat("washington");
	Local_2344[12 /*3*/] = { -491.8959f, -716.5375f, 32.5585f };
	fLocal_587[12] = 0.1433f;
	fLocal_658[12] = 0.0787f;
	fLocal_729[12] = 0.9609f;
	fLocal_800[12] = -0.2234f;
	iLocal_1576[12] = 63;
	fLocal_871[12] = 60800f;
	fLocal_942[12] = 1.2f;
	iLocal_2756[12] = joaat("bmx");
	Local_2344[13 /*3*/] = { -492.3147f, -827.8944f, 29.9952f };
	fLocal_587[13] = -0.005f;
	fLocal_658[13] = 0.0046f;
	fLocal_729[13] = 0.0169f;
	fLocal_800[13] = 0.9998f;
	iLocal_1576[13] = 64;
	fLocal_871[13] = 64030f;
	fLocal_942[13] = 1f;
	iLocal_2756[13] = joaat("washington");
	Local_2344[14 /*3*/] = { -518.8372f, -756.7956f, 31.5421f };
	fLocal_587[14] = -0.0147f;
	fLocal_658[14] = -0.0264f;
	fLocal_729[14] = 0.9686f;
	fLocal_800[14] = -0.2467f;
	iLocal_1576[14] = 65;
	fLocal_871[14] = 64230f;
	fLocal_942[14] = 1f;
	iLocal_2756[14] = joaat("washington");
	Local_2344[15 /*3*/] = { -477.6166f, -806.7344f, 30.0523f };
	fLocal_587[15] = 0f;
	fLocal_658[15] = 0.0025f;
	fLocal_729[15] = -0.701f;
	fLocal_800[15] = 0.7132f;
	iLocal_1576[15] = 66;
	fLocal_871[15] = 66084f;
	fLocal_942[15] = 1f;
	iLocal_2756[15] = joaat("washington");
	Local_2344[16 /*3*/] = { -417.4774f, -836.1498f, 31.442f };
	fLocal_587[16] = -0.0077f;
	fLocal_658[16] = -0.0047f;
	fLocal_729[16] = 0.7025f;
	fLocal_800[16] = 0.7117f;
	iLocal_1576[16] = 67;
	fLocal_871[16] = 65384f;
	fLocal_942[16] = 1f;
	iLocal_2756[16] = joaat("benson");
	Local_2344[17 /*3*/] = { -413.1984f, -831.7321f, 30.8216f };
	fLocal_587[17] = -0.0237f;
	fLocal_658[17] = 0.0144f;
	fLocal_729[17] = 0.7088f;
	fLocal_800[17] = 0.7049f;
	iLocal_1576[17] = 68;
	fLocal_871[17] = 67078f;
	fLocal_942[17] = 1f;
	iLocal_2756[17] = joaat("sultan");
	Local_2344[18 /*3*/] = { -528.5989f, -840.7145f, 29.413f };
	fLocal_587[18] = -0.0237f;
	fLocal_658[18] = 0.0236f;
	fLocal_729[18] = 0.7098f;
	fLocal_800[18] = -0.7036f;
	iLocal_1576[18] = 69;
	fLocal_871[18] = 64606.32f;
	fLocal_942[18] = 1f;
	iLocal_2756[18] = joaat("sultan");
	Local_2344[19 /*3*/] = { -446.0574f, -767.6522f, 29.9676f };
	fLocal_587[19] = -0.0002f;
	fLocal_658[19] = 0.0001f;
	fLocal_729[19] = 0.711f;
	fLocal_800[19] = 0.7032f;
	iLocal_1576[19] = 51;
	fLocal_871[19] = 70071.85f;
	fLocal_942[19] = 1f;
	iLocal_2756[19] = joaat("sultan");
	Local_2344[20 /*3*/] = { -488.5203f, -523.8471f, 24.8363f };
	fLocal_587[20] = -0.001f;
	fLocal_658[20] = 0.0015f;
	fLocal_729[20] = 0.7208f;
	fLocal_800[20] = -0.6931f;
	iLocal_1576[20] = 71;
	fLocal_871[20] = 81355.85f;
	fLocal_942[20] = 1f;
	iLocal_2756[20] = joaat("landstalker");
	Local_2344[21 /*3*/] = { -305.7855f, -508.727f, 24.7583f };
	fLocal_587[21] = 0.0168f;
	fLocal_658[21] = -0.0137f;
	fLocal_729[21] = 0.7019f;
	fLocal_800[21] = 0.7119f;
	iLocal_1576[21] = 72;
	fLocal_871[21] = 86290.85f;
	fLocal_942[21] = 1f;
	iLocal_2756[21] = joaat("landstalker");
	Local_2344[22 /*3*/] = { 294.6554f, -576.5358f, 42.9547f };
	fLocal_587[22] = 0.0001f;
	fLocal_658[22] = 0.0078f;
	fLocal_729[22] = 0.2262f;
	fLocal_800[22] = 0.974f;
	iLocal_1576[22] = 73;
	fLocal_871[22] = 109000f;
	fLocal_942[22] = 1f;
	iLocal_2756[22] = joaat("ambulance");
	Local_2344[23 /*3*/] = { -393.8603f, -503.4236f, 25.4432f };
	fLocal_587[23] = 0.0016f;
	fLocal_658[23] = 0.0018f;
	fLocal_729[23] = 0.7075f;
	fLocal_800[23] = 0.7067f;
	iLocal_1576[23] = 74;
	fLocal_871[23] = 82431.85f;
	fLocal_942[23] = 1f;
	iLocal_2756[23] = joaat("packer");
	Local_2344[24 /*3*/] = { -527.6368f, -846.5891f, 29.9361f };
	fLocal_587[24] = 0.0422f;
	fLocal_658[24] = -0.0031f;
	fLocal_729[24] = -0.7009f;
	fLocal_800[24] = 0.712f;
	iLocal_1576[24] = 75;
	fLocal_871[24] = 62500f;
	fLocal_942[24] = 1f;
	iLocal_2756[24] = joaat("bus");
	Local_2344[25 /*3*/] = { 3.4457f, -533.8352f, 33.2443f };
	fLocal_587[25] = 0.0232f;
	fLocal_658[25] = 0.0045f;
	fLocal_729[25] = -0.6929f;
	fLocal_800[25] = 0.7206f;
	iLocal_1576[25] = 80;
	fLocal_871[25] = 100001.4f;
	fLocal_942[25] = 1f;
	iLocal_2756[25] = joaat("asterope");
	Local_2344[26 /*3*/] = { -483.5551f, -531.6314f, 24.8571f };
	fLocal_587[26] = 0.0034f;
	fLocal_658[26] = -0.0031f;
	fLocal_729[26] = -0.6972f;
	fLocal_800[26] = 0.7168f;
	iLocal_1576[26] = 76;
	fLocal_871[26] = 81217.44f;
	fLocal_942[26] = 1f;
	iLocal_2756[26] = joaat("asterope");
	Local_2344[27 /*3*/] = { -277.6243f, -508.3559f, 24.9767f };
	fLocal_587[27] = 0.0108f;
	fLocal_658[27] = -0.0139f;
	fLocal_729[27] = 0.7117f;
	fLocal_800[27] = 0.7023f;
	iLocal_1576[27] = 77;
	fLocal_871[27] = 87256.44f;
	fLocal_942[27] = 1f;
	iLocal_2756[27] = joaat("asterope");
	Local_2344[28 /*3*/] = { -201.7354f, -496.1847f, 27.3531f };
	fLocal_587[28] = -0.0125f;
	fLocal_658[28] = -0.0117f;
	fLocal_729[28] = 0.7296f;
	fLocal_800[28] = 0.6837f;
	iLocal_1576[28] = 82;
	fLocal_871[28] = 90798.32f;
	fLocal_942[28] = 1f;
	iLocal_2756[28] = joaat("packer");
	Local_2344[29 /*3*/] = { -118.4835f, -529.6654f, 29.6739f };
	fLocal_587[29] = 0.0116f;
	fLocal_658[29] = -0.0127f;
	fLocal_729[29] = -0.686f;
	fLocal_800[29] = 0.7274f;
	iLocal_1576[29] = 44;
	fLocal_871[29] = 94954.86f;
	fLocal_942[29] = 1f;
	iLocal_2756[29] = joaat("landstalker");
	iVar0 = 0;
	iVar1 = iLocal_3003;
	iVar2 = iLocal_2830;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fLocal_871[iVar0] >= 41011f)
		{
			fLocal_871[iVar0] = (fLocal_871[iVar0] - 43.5f);
		}
		if (fLocal_871[iVar0] >= 77018.5f)
		{
			fLocal_871[iVar0] = (fLocal_871[iVar0] - 78.5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (fLocal_497[iVar0] >= 41011f)
		{
			fLocal_497[iVar0] = (fLocal_497[iVar0] - 43.5f);
		}
		if (fLocal_497[iVar0] >= 77018.5f)
		{
			fLocal_497[iVar0] = (fLocal_497[iVar0] - 78.5f);
		}
		iVar0++;
	}
}

void func_433(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3471F
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2582, sParam0, 64);
	bLocal_129 = true;
	iLocal_134 = 0;
	iLocal_1860 = 0;
	iLocal_1861 = 0;
	iLocal_1862 = 0;
	iLocal_1863 = iParam1;
	iLocal_1864 = 0;
	iLocal_1865 = 0;
	iLocal_1866 = 0;
	iLocal_1870 = 0;
	iLocal_1873 = 0;
	iLocal_1871 = -1;
	iLocal_1872 = -1;
	iLocal_1874 = 0;
	iLocal_1875 = 0;
	fLocal_1313 = 0f;
	fLocal_1314 = 0f;
	fLocal_1299 = 0f;
	iLocal_135 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2558.x = (Var0.x - 100f);
		Local_2558.f_1 = (Var0.f_1 - 100f);
		Local_2558.f_2 = (Var0.f_2 - 100f);
		Local_2561.x = (Var0.x + 100f);
		Local_2561.f_1 = (Var0.f_1 + 100f);
		Local_2561.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2558, Local_2561, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2598);
	GlobalFunc_2512();
	if (bParam3)
	{
		GlobalFunc_9158(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
		PED::SET_CREATE_RANDOM_COPS(0);
	}
	func_75();
}

void func_434()//Position - 0x34840
{
	int iVar0;
	
	GlobalFunc_6692(&(Local_3107.f_35[0]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3489))
	{
		MISC::CLEAR_AREA(Local_3489.f_3, 2f, 1, 0, 0, 0);
		func_435(&Local_3489, Local_3489.f_3, Local_3489.f_6, 0, 1);
		func_421();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3489.f_1);
	GlobalFunc_6692(&(Local_3107.f_35[1]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3496))
	{
		MISC::CLEAR_AREA(Local_3496.f_3, 2f, 1, 0, 0, 0);
		Local_3496 = VEHICLE::CREATE_VEHICLE(Local_3496.f_1, Local_3496.f_3, Local_3496.f_6, 1, 1);
		if (GlobalFunc_4947(Local_3496))
		{
			ENTITY::SET_ENTITY_COORDS(Local_3496, Local_3496.f_3, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(Local_3496, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		}
		func_417();
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3496.f_1);
	if (GlobalFunc_4947(Local_3489))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3468))
		{
			Local_3468 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3489, 26, Local_3468.f_1, 2, 1, 1);
			func_422();
		}
		GlobalFunc_881(&(Local_3107.f_28[0]));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3475))
		{
			Local_3475 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3489, 26, Local_3475.f_1, 0, 1, 1);
			func_423();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3468.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3475.f_1);
	if (GlobalFunc_4947(Local_3496))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3482))
		{
			Local_3482 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3496, 26, Local_3482.f_1, -1, 1, 1);
			func_419();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3482.f_1);
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_3303, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3533[0 /*2*/]))
	{
		MISC::CLEAR_AREA(-1329.742f, -665.3537f, 26.3413f, 2f, 1, 0, 0, 0);
		Local_3533[0 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_3533[0 /*2*/].f_1, -1329.742f, -665.3537f, 26.3413f, 126.9722f, 1, 1);
	}
	if (GlobalFunc_4947(Local_3533[0 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_3533[0 /*2*/], -0.0318f, 0.0067f, 0.8936f, 0.4476f);
		if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_3533[0 /*2*/], 2))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3533[0 /*2*/], 2, 0, 0);
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_3533[0 /*2*/], 3))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_3533[0 /*2*/], 3, 0, 0);
		}
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_3533[0 /*2*/], 1, 1);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_3533[0 /*2*/], 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3533[1 /*2*/]))
	{
		MISC::CLEAR_AREA(-1329.751f, -676.4864f, 25.8557f, 2f, 1, 0, 0, 0);
		Local_3533[1 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_3533[1 /*2*/].f_1, -1329.751f, -676.4864f, 25.8557f, 307.7227f, 1, 1);
	}
	if (GlobalFunc_4947(Local_3533[1 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_3533[1 /*2*/], 0.0248f, 0.0142f, -0.4405f, 0.8973f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3533[2 /*2*/]))
	{
		MISC::CLEAR_AREA(-1336.317f, -680.9752f, 25.5144f, 2f, 1, 0, 0, 0);
		Local_3533[2 /*2*/] = VEHICLE::CREATE_VEHICLE(Local_3533[2 /*2*/].f_1, -1336.317f, -680.9752f, 25.5144f, 307.7227f, 1, 1);
	}
	if (GlobalFunc_4947(Local_3533[2 /*2*/]))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_3533[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (GlobalFunc_4947(Local_3533[iVar0 /*2*/]))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3533[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
	func_415(fLocal_3267, Local_3555);
	if (bLocal_3168)
	{
		if (bLocal_3230)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				GlobalFunc_79(800, 0);
			}
		}
	}
}

int func_435(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)//Position - 0x34BFE
{
	STREAMING::REQUEST_MODEL(iLocal_94);
	if (iParam6 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_94))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_94))
	{
		return 0;
	}
	func_436(uParam0, iLocal_94, Param1, fParam4);
	if (GlobalFunc_115(*uParam0))
	{
		VEHICLE::SET_VEHICLE_COLOURS(*uParam0, 65, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*uParam0, 5, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, "28BNT310");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, 0);
		if (iParam5 == 1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 10);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_94);
	return 1;
}

void func_436(var uParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x34C89
{
	GlobalFunc_6692(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}

void func_437(bool bParam0)//Position - 0x34CC4
{
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL2", 0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_3257, sLocal_3295);
	STREAMING::REQUEST_MODEL(Local_3496.f_1);
	STREAMING::REQUEST_MODEL(Local_3489.f_1);
	STREAMING::REQUEST_MODEL(Local_3482.f_1);
	STREAMING::REQUEST_MODEL(Local_3468.f_1);
	STREAMING::REQUEST_MODEL(Local_3475.f_1);
	STREAMING::REQUEST_MODEL(Local_3533[0 /*2*/].f_1);
	STREAMING::REQUEST_MODEL(Local_3533[1 /*2*/].f_1);
	STREAMING::REQUEST_MODEL(Local_3533[2 /*2*/].f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_3295);
	if (bParam0)
	{
		while ((((((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_3257, sLocal_3295)) || !STREAMING::HAS_MODEL_LOADED(Local_3496.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3489.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3482.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3468.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3475.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3533[0 /*2*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3533[1 /*2*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3533[2 /*2*/].f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, sLocal_3295))
		{
			if (bLocal_3168)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					GlobalFunc_2350(0, 1);
					bLocal_3230 = true;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}


void func_439()//Position - 0x34E41
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { -1290f, -646.1f, 26.05f };
	fVar3 = 307.66f;
	GlobalFunc_10063(-1311.409f, -648.4133f, 24.92526f, -1289.028f, -632.043f, 29.5522f, 17.5f, Var0, fVar3, GlobalFunc_625(), 1, 0, 1, 0, 0);
	GlobalFunc_10063(-1319.69f, -655.7773f, 29.45839f, -1184.461f, -834.8201f, 12.34378f, 30f, Var0, fVar3, GlobalFunc_625(), 1, 0, 1, 0, 0);
	if (GlobalFunc_7091(0f, 0f, 0f, 1))
	{
		GlobalFunc_10697(Var0, fVar3, 0, 145);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 1);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 0, 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f);
	uLocal_3287 = PED::ADD_SCENARIO_BLOCKING_AREA(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_OBJECTS(-1297.8f, -637.42f, 25.55f, 16f, 0);
	uLocal_3289[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1315.68f, -682.7614f, 23.24123f, -1295.266f, -670.376f, 27.9768f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1305.332f, -676.3739f, 25.79325f, 10f, 1, 0, 0, 0);
	uLocal_3289[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1286.906f, -697.5593f, 21.7392f, -1279.698f, -691.5876f, 26.33636f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1287.702f, -698.1957f, 27.50166f, 10f, 1, 0, 0, 0);
	uLocal_3289[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-1270.72f, -723.8903f, 19.46898f, -1262.898f, -718.2786f, 24.43682f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1269.86f, -722.4664f, 21.54627f, 8f, 1, 0, 0, 0);
	uLocal_3289[3] = PED::ADD_SCENARIO_BLOCKING_AREA(-1268.057f, -731.5182f, 18.92047f, -1263.574f, -727.5502f, 24.05783f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1266.431f, -728.9227f, 21.08542f, 2.5f, 1, 0, 0, 0);
	uLocal_3289[3] = PED::ADD_SCENARIO_BLOCKING_AREA(-1237.024f, -777.4222f, 15.58289f, -1221.889f, -764.5969f, 20.58871f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1231.441f, -770.9479f, 17.70891f, 8.5f, 1, 0, 0, 0);
	uLocal_3289[4] = PED::ADD_SCENARIO_BLOCKING_AREA(-1222.448f, -786.7349f, 13.60073f, -1215.773f, -780.2021f, 20.43715f, 0, 1, 1, 1);
	MISC::CLEAR_AREA(-1222.008f, -783.6834f, 16.73119f, 7.5f, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-1459.2f, -736.9f, 23.6f, 50f, 0, 0, 0, 1, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-1332.2f, -537.6f, 31.5f, 30f, 0, 0, 0, 1, 0);
}























































void func_494()//Position - 0x38D9C
{
	if (bLocal_3168)
	{
		if (((iLocal_3104 != 5 && iLocal_3104 != 0) && iLocal_3104 != 3) && iLocal_3104 != 4)
		{
			func_495();
			if (iLocal_3245 != 0)
			{
				func_286(5);
			}
		}
	}
}

void func_495()//Position - 0x38DE0
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_3475) && ENTITY::DOES_ENTITY_EXIST(Local_3468))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_3475) || PED::IS_PED_INJURED(Local_3475))
		{
			iLocal_3245 = 5;
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_3468) || PED::IS_PED_INJURED(Local_3468))
		{
			iLocal_3245 = 7;
			return;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3475, PLAYER::PLAYER_PED_ID(), 1))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_3245 = 4;
			return;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3468, PLAYER::PLAYER_PED_ID(), 1))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			iLocal_3245 = 6;
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3482))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_3482) || PED::IS_PED_INJURED(Local_3482))
		{
			iLocal_3245 = 1;
			return;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_3496))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_3496) && FIRE::IS_ENTITY_ON_FIRE(Local_3496))
			{
				VEHICLE::EXPLODE_VEHICLE(Local_3496, 1, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3489))
	{
		if ((ENTITY::IS_ENTITY_DEAD(Local_3489) || ENTITY::IS_ENTITY_IN_WATER(Local_3489)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3489, 0))
		{
			iLocal_3245 = 3;
			return;
		}
		else if (iLocal_3104 != 0)
		{
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_3489))
			{
				if (GlobalFunc_2311(iLocal_3255, 3000))
				{
					iLocal_3245 = 3;
					return;
				}
			}
			else
			{
				iLocal_3255 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (((iLocal_3245 == 8 || iLocal_3245 == 9) || iLocal_3245 == 10) || iLocal_3245 == 2)
	{
		return;
	}
	if (iLocal_3104 == 1 || iLocal_3104 == 2)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3482))
		{
			if (fLocal_3264 > 200f)
			{
				iLocal_3245 = 2;
				return;
			}
			if (fLocal_3265 > 50000f && fLocal_3265 < 58000f)
			{
				if (iLocal_3182 || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 1, 0))
					{
						iLocal_3245 = 2;
						return;
					}
				}
			}
		}
		if ((GlobalFunc_4947(Local_3489) && GlobalFunc_115(Local_3475)) && GlobalFunc_115(Local_3468))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3475, Local_3489))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3468, Local_3489))
				{
					if (!iLocal_3203)
					{
						if (!GlobalFunc_775(Local_3475, Var0, 60f) || !GlobalFunc_775(Local_3468, Var0, 60f))
						{
							GlobalFunc_4935();
							GlobalFunc_164("NIGEL2_08", 7500, 1);
							iLocal_3203 = 1;
						}
					}
					else if (GlobalFunc_775(Local_3475, Var0, 30f) && GlobalFunc_775(Local_3468, Var0, 30f))
					{
						if (GlobalFunc_663("NIGEL2_08", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("NIGEL2_08");
						}
						iLocal_3203 = 0;
					}
					else if (!GlobalFunc_775(Local_3475, Var0, 100f) && !GlobalFunc_775(Local_3468, Var0, 100f))
					{
						iLocal_3245 = 8;
						return;
					}
				}
				else if (!iLocal_3203)
				{
					if (!GlobalFunc_775(Local_3475, Var0, 60f))
					{
						GlobalFunc_4935();
						GlobalFunc_164("NIGEL2_05", 7500, 1);
						iLocal_3203 = 1;
					}
				}
				else if (GlobalFunc_775(Local_3475, Var0, 30f))
				{
					if (GlobalFunc_663("NIGEL2_05", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_05");
					}
					iLocal_3203 = 0;
				}
				else if (!GlobalFunc_775(Local_3475, Var0, 100f))
				{
					iLocal_3245 = 9;
					return;
				}
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3468, Local_3489))
			{
				if (!iLocal_3203)
				{
					if (!GlobalFunc_775(Local_3468, Var0, 60f))
					{
						GlobalFunc_4935();
						GlobalFunc_164("NIGEL2_09", 7500, 1);
						iLocal_3203 = 1;
					}
				}
				else if (GlobalFunc_775(Local_3468, Var0, 30f))
				{
					if (GlobalFunc_663("NIGEL2_09", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_09");
					}
					iLocal_3203 = 0;
				}
				else if (!GlobalFunc_775(Local_3468, Var0, 100f))
				{
					iLocal_3245 = 10;
					return;
				}
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3489))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_3489, 1) };
				fLocal_3266 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var3);
				if (!iLocal_3203)
				{
					if (fLocal_3266 > 60f)
					{
						GlobalFunc_4935();
						GlobalFunc_164("NIGEL2_08", 7500, 1);
						iLocal_3203 = 1;
					}
				}
				else if (fLocal_3266 > 100f)
				{
					iLocal_3245 = 8;
					return;
				}
				else if (fLocal_3266 < 30f)
				{
					if (GlobalFunc_663("NIGEL2_08", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("NIGEL2_08");
					}
					iLocal_3203 = 0;
				}
				if (bLocal_3212)
				{
					if (fLocal_3264 < 35f)
					{
						if (func_496(Local_3489))
						{
							iLocal_3245 = 8;
							return;
						}
					}
				}
			}
		}
	}
}

int func_496(int iParam0)//Position - 0x392D1
{
	struct<3> Var0;
	int iVar3;
	
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (INTERIOR::GET_INTERIOR_AT_COORDS(Var0) == iLocal_3261)
		{
			iVar3 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(iParam0);
			if (func_60(iVar3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_497(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x39321
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
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_32 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_33 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_32 = 0f;
				}
				else
				{
					fLocal_32 = (fLocal_32 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_32 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
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
					fLocal_37 = 0.14f;
				}
				else
				{
					fLocal_37 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_37)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_33.x, (Local_33.f_1 + fLocal_36));
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
					fLocal_32 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_32 = 0f;
			}
		}
	}
}
















void func_513(int iParam0, bool bParam1)//Position - 0x39D43
{
	func_522(bParam1, 1);
	if (!GlobalFunc_188())
	{
		GlobalFunc_4613("NIGEL2_MISSION_FAIL", 0);
	}
	if (bParam1)
	{
		func_514();
	}
	iLocal_3105 = iParam0;
	bLocal_3168 = false;
	if (GlobalFunc_188())
	{
		iLocal_3169 = 1;
	}
	else
	{
		iLocal_3169 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_3105 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_3169 = 1;
			}
		}
	}
	func_1(iLocal_3105);
}

void func_514()//Position - 0x39DE3
{
	func_515(1, 0);
	if (!GlobalFunc_188() && bLocal_3168)
	{
		while (!GlobalFunc_4613("NIGEL2_MISSION_FAIL", 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_188())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	func_527();
	func_286(0);
}

void func_515(bool bParam0, bool bParam1)//Position - 0x39E59
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	GlobalFunc_4935();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_7632(0);
	func_23(1, 1, 1, 1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	func_295(0);
	if (!iLocal_3204)
	{
		RECORDING::_0x81CBAE94390F9F89();
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 1, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3287, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3288, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3289[iVar0], 0);
		iVar0++;
	}
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 28f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	GlobalFunc_563(0);
	if (!GlobalFunc_188() && bLocal_3168)
	{
		GlobalFunc_4613("NIGEL2_MISSION_FAIL", 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3244))
	{
		CAM::SET_CAM_ACTIVE(uLocal_3244, 0);
		CAM::DESTROY_CAM(uLocal_3244, 0);
	}
	func_518(1, 1, 1);
	GlobalFunc_200(&uLocal_3303, 2);
	GlobalFunc_200(&uLocal_3303, 3);
	GlobalFunc_200(&uLocal_3303, 4);
	GlobalFunc_200(&uLocal_3303, 5);
	GlobalFunc_4948(&uLocal_19, 0, 0);
	CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
	MISC::SET_TIME_SCALE(1f);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3285);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3489.f_1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3496.f_1, 0);
	func_90();
	func_47(bParam0);
	func_516(bParam1);
	if (iLocal_3104 == 4)
	{
		GlobalFunc_7621(75, 2, 1, 1, 0);
		GlobalFunc_7621(76, 1, 1, 1, 0);
		GlobalFunc_7621(181, 2, 1, 1, 0);
	}
	else
	{
		GlobalFunc_7621(75, 0, 0, 1, 0);
		GlobalFunc_7621(76, 1, 0, 1, 0);
		GlobalFunc_7621(181, 1, 0, 1, 0);
	}
}

void func_516(bool bParam0)//Position - 0x3A126
{
	int iVar0;
	
	iVar0 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_3261))
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_3261))
		{
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_3261, 0);
			INTERIOR::UNPIN_INTERIOR(iLocal_3261);
		}
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_3284))
	{
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284) != 10)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_3284, 9);
		}
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_3257, sLocal_3295);
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_3295);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_3296);
	func_374();
	func_64(0, 1);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3282))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3282, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3283))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3283, 0);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (GlobalFunc_4947(Local_3496))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3496, 0);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_02_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("NIGEL_02_CHASE");
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_3256);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	STREAMING::REMOVE_ANIM_DICT("rcmnigel2");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3273.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3496.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3489.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3482.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3468.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3475.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3269);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3270);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3271);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_3272);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3533[iVar0 /*2*/].f_1);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3540.f_1);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
}


void func_518(bool bParam0, int iParam1, int iParam2)//Position - 0x3A29C
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_23(iParam1, iParam2, 1, 1);
		}
	}
}




void func_522(bool bParam0, bool bParam1)//Position - 0x3A3B3
{
	if (bParam0)
	{
		func_518(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_288(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}





void func_527()//Position - 0x3A5BD
{
	func_531();
	GlobalFunc_9621(64, 2, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	AUDIO::SET_AGGRESSIVE_HORNS(1);
	GlobalFunc_563(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	GlobalFunc_3041();
}




void func_531()//Position - 0x3A83D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iLocal_3183[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_3170[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_3178[iVar0] = 0;
		iVar0++;
	}
	iLocal_3192 = 0;
	iLocal_3196 = 0;
	iLocal_3203 = 0;
	iLocal_3200 = 0;
	iLocal_3201 = 0;
	iLocal_3197 = 0;
	iLocal_3198 = 0;
	iLocal_3199 = 0;
	bLocal_3212 = false;
	bLocal_3210 = false;
	bLocal_3207 = false;
	iLocal_3202 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_3193[iVar0] = 0;
		iVar0++;
	}
	iLocal_3234 = 0;
	iLocal_3231 = 0;
	iLocal_3232 = 0;
	iLocal_3233 = 0;
	iLocal_3235 = 0;
	iLocal_3236 = 1;
	iLocal_3237 = 0;
	iLocal_3238 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iLocal_3215[iVar0] = 0;
		iVar0++;
	}
	iLocal_3209 = 0;
	iLocal_3211 = 0;
	iLocal_3204 = 1;
	bLocal_3205 = false;
	iLocal_3208 = 0;
	iLocal_3206 = 0;
	bLocal_3230 = false;
	iLocal_3228 = 0;
	bLocal_3229 = false;
	bLocal_3213 = false;
	bLocal_3214 = false;
	bLocal_3239 = false;
	iLocal_3240 = 0;
	iLocal_3241 = 0;
	iLocal_3242 = 0;
	iLocal_3243 = 0;
	iLocal_3245 = 0;
	iLocal_3252 = 0;
	iLocal_3247 = 0;
	iLocal_3253 = 0;
	iLocal_3254 = 0;
	iLocal_3255 = 0;
	iLocal_3248 = 0;
	iLocal_3249 = 0;
	iLocal_3246 = 0;
	iLocal_3250 = 0;
	iLocal_3251 = 0;
	iLocal_3256 = -1;
	iLocal_3257 = 1;
	iLocal_3258 = 0;
	fLocal_3264 = 0f;
	fLocal_3265 = 0f;
	fLocal_3263 = 20.75f;
	fLocal_3266 = 0f;
	Local_3549 = { 368.5714f, -594.9467f, 45.5422f };
	Local_3552 = { 389.5015f, -614.1279f, 29.618f };
	iLocal_3262 = 0;
	Local_3533[0 /*2*/].f_1 = joaat("boxville2");
	Local_3533[1 /*2*/].f_1 = joaat("washington");
	Local_3533[2 /*2*/].f_1 = joaat("washington");
	Local_3540.f_1 = joaat("sultan");
	iLocal_3269 = joaat("a_m_y_business_01");
	iLocal_3270 = joaat("s_m_m_doctor_01");
	iLocal_3271 = joaat("s_f_y_scrubs_01");
	iLocal_3272 = joaat("a_f_y_bevhills_03");
	Local_3496.f_1 = joaat("dubsta");
	Local_3496.f_3 = { -1290.73f, -634.603f, 26.1004f };
	Local_3496.f_6 = 126.961f;
	Local_3489.f_1 = func_533();
	Local_3489.f_3 = { -1304.01f, -644.58f, 25.91f };
	Local_3489.f_6 = 127.67f;
	Local_3482.f_1 = func_532();
	Local_3482.f_3 = { -1290.048f, -631.459f, 25.6863f };
	Local_3482.f_6 = 121.506f;
	Local_3468.f_1 = GlobalFunc_4946(63);
	Local_3468.f_3 = { -1309.61f, -640.33f, 26.53f };
	Local_3468.f_6 = -124f;
	Local_3475.f_1 = GlobalFunc_4946(64);
	Local_3475.f_3 = { -1310.24f, -640.19f, 26.53f };
	Local_3475.f_6 = -73.78f;
	Local_3273.f_1 = { 299.48f, -584.84f, 41.445f };
	Local_3273.f_4 = { 0f, 0f, -20f };
	Local_3273.f_7 = joaat("prop_hospitaldoors_start");
	iLocal_3542 = 0;
	Local_3558 = { 394.5f, -619.1f, 28.2f };
	Local_3561 = { 0f, 0f, 0f };
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_3285);
	iLocal_3286 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3285, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3285);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3285, iLocal_3286);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3286, iLocal_3285);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3286, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3286);
}

int func_532()//Position - 0x3ABA2
{
	return joaat("u_m_m_aldinapoli");
}

int func_533()//Position - 0x3ABAF
{
	return iLocal_94;
}

void func_534()//Position - 0x3ABB9
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
		func_515(0, 1);
	}
	func_535(&Local_3107, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_535(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3ABE0
{
	GlobalFunc_7101(uParam0, iParam1);
	GlobalFunc_8620(uParam0, bParam2);
	GlobalFunc_7100(uParam0, bParam3);
}





























char* func_564()//Position - 0x3B443
{
	return "Al_DiNapoli";
}


