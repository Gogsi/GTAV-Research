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
	struct<4> Local_48[10];
	bool bLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	bool bLocal_132 = 0;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	bool bLocal_135 = 0;
	bool bLocal_136 = 0;
	bool bLocal_137 = 0;
	bool bLocal_138 = 0;
	bool bLocal_139 = 0;
	float fLocal_140[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_246[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_352[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_458[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_564[105] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_670 = 0f;
	float fLocal_671 = 0f;
	float fLocal_672 = 0f;
	float fLocal_673 = 0f;
	float fLocal_674[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_725[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_776[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_827[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_878[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_929[50] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_980[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1051[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1122[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1193[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1264 = 0f;
	float fLocal_1265 = 0f;
	float fLocal_1266 = 0f;
	float fLocal_1267 = 0f;
	float fLocal_1268 = 0f;
	float fLocal_1269 = 0f;
	float fLocal_1270 = 0f;
	float fLocal_1271 = 0f;
	float fLocal_1272 = 0f;
	float fLocal_1273 = 0f;
	float fLocal_1274 = 0f;
	float fLocal_1275 = 0f;
	float fLocal_1276 = 0f;
	float fLocal_1277 = 0f;
	float fLocal_1278 = 0f;
	float fLocal_1279 = 0f;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	float fLocal_1282 = 0f;
	float fLocal_1283 = 0f;
	float fLocal_1284 = 0f;
	int iLocal_1285[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1391[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1497[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1603[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1654[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1705[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1756[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	int iLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841 = 0;
	int iLocal_1842 = 0;
	int iLocal_1843 = 0;
	struct<3> Local_1844[105];
	struct<3> Local_2160[70];
	struct<3> Local_2371[50];
	struct<3> Local_2522 = { 0, 0, 0 } ;
	struct<3> Local_2525 = { 0, 0, 0 } ;
	struct<3> Local_2528 = { 0, 0, 0 } ;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	struct<3> Local_2537 = { 0, 0, 0 } ;
	struct<3> Local_2540 = { 0, 0, 0 } ;
	struct<3> Local_2543 = { 0, 0, 0 } ;
	struct<3> Local_2546 = { 0, 0, 0 } ;
	char cLocal_2549[64] = "";
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	int iLocal_2565 = 0;
	int iLocal_2566[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2672[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2743[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2794 = 0;
	int iLocal_2795 = 0;
	int iLocal_2796 = 0;
	int iLocal_2797[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2903[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2924[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2995[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3046[5] = { 0, 0, 0, 0, 0 };
	int iLocal_3052 = 0;
	int iLocal_3053 = 0;
	int iLocal_3054 = 0;
	var uLocal_3055 = 20;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	int iLocal_3076 = 0;
	int iLocal_3077 = 0;
	int iLocal_3078 = 0;
	struct<61> Local_3079 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3140 = 0;
	int iLocal_3141 = 0;
	int iLocal_3142 = 0;
	int iLocal_3143 = 0;
	int iLocal_3144[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3151 = 0;
	int iLocal_3152 = 0;
	int iLocal_3153 = 0;
	int iLocal_3154 = 0;
	bool bLocal_3155 = 0;
	int iLocal_3156 = 0;
	int iLocal_3157 = 0;
	int iLocal_3158[3] = { 0, 0, 0 };
	int iLocal_3162 = 0;
	int iLocal_3163 = 0;
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	int iLocal_3166 = 0;
	int iLocal_3167 = 0;
	int iLocal_3168 = 0;
	int iLocal_3169 = 0;
	int iLocal_3170 = 0;
	int iLocal_3171 = 0;
	int iLocal_3172 = 0;
	int iLocal_3173 = 0;
	int iLocal_3174 = 0;
	bool bLocal_3175 = 0;
	int iLocal_3176 = 0;
	int iLocal_3177 = 0;
	bool bLocal_3178 = 0;
	int iLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	int iLocal_3183 = 0;
	bool bLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	bool bLocal_3187 = 0;
	int iLocal_3188 = 0;
	int iLocal_3189 = 0;
	bool bLocal_3190 = 0;
	int iLocal_3191 = 0;
	bool bLocal_3192 = 0;
	bool bLocal_3193 = 0;
	bool bLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	int iLocal_3200 = 0;
	float fLocal_3201 = 0f;
	float fLocal_3202 = 0f;
	float fLocal_3203 = 0f;
	float fLocal_3204 = 0f;
	float fLocal_3205 = 0f;
	float fLocal_3206 = 0f;
	float fLocal_3207 = 0f;
	float fLocal_3208 = 0f;
	float fLocal_3209 = 0f;
	float fLocal_3210 = 0f;
	float fLocal_3211 = 0f;
	float fLocal_3212 = 0f;
	float fLocal_3213 = 0f;
	float fLocal_3214 = 0f;
	float fLocal_3215 = 0f;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
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
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
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
	int iLocal_3260 = 0;
	int iLocal_3261 = 0;
	int iLocal_3262 = 0;
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	struct<8> Local_3266[4];
	int iLocal_3299 = 0;
	int iLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302[2] = { 0, 0 };
	char* sLocal_3305 = NULL;
	char* sLocal_3306 = NULL;
	char* sLocal_3307 = NULL;
	char* sLocal_3308 = NULL;
	char* sLocal_3309 = NULL;
	char* sLocal_3310 = NULL;
	char* sLocal_3311 = NULL;
	char* sLocal_3312 = NULL;
	char* sLocal_3313 = NULL;
	char* sLocal_3314 = NULL;
	char* sLocal_3315 = NULL;
	char* sLocal_3316 = NULL;
	char* sLocal_3317 = NULL;
	char[] cLocal_3318[8] = 0;
	char* sLocal_3319 = NULL;
	char* sLocal_3320 = NULL;
	var uLocal_3321 = 16;
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
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	struct<7> Local_3486 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3493 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_3500 = { 0, 0 } ;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	struct<3> Local_3507 = { 0, 0, 0 } ;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	struct<2> Local_3514 = { 0, 0 } ;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	struct<7> Local_3521 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3528 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3535 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_3542 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_3553 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_3564 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_3575 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_3586 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_3597 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_3613 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_3619 = { 0, 0, 0 } ;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	char cLocal_3625[24] = "";
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	char cLocal_3631[24] = "";
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	struct<3> Local_3637 = { 0, 0, 0 } ;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	char cLocal_3643[24] = "";
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	char cLocal_3649[24] = "";
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	struct<3> Local_3655 = { 0, 0, 0 } ;
	struct<3> Local_3658 = { 0, 0, 0 } ;
	struct<3> Local_3661 = { 0, 0, 0 } ;
	struct<3> Local_3664 = { 0, 0, 0 } ;
	struct<3> Local_3667 = { 0, 0, 0 } ;
	struct<3> Local_3670 = { 0, 0, 0 } ;
	struct<3> Local_3673 = { 0, 0, 0 } ;
	struct<3> Local_3676 = { 0, 0, 0 } ;
	struct<3> Local_3679[2];
	struct<3> Local_3686[2];
	struct<3> Local_3693 = { 0, 0, 0 } ;
	struct<3> Local_3696 = { 0, 0, 0 } ;
	struct<3> Local_3699[2];
	struct<3> Local_3706[2];
	struct<3> Local_3713 = { 0, 0, 0 } ;
	struct<3> Local_3716 = { 0, 0, 0 } ;
	struct<3> Local_3719 = { 0, 0, 0 } ;
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
	uLocal_91 = GlobalFunc_4946(50);
	iLocal_92 = joaat("pcj");
	iLocal_97 = 1;
	iLocal_98 = 65;
	iLocal_99 = 49;
	iLocal_100 = 64;
	uLocal_104 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_105 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_109 = true;
	iLocal_116 = 1;
	bLocal_138 = true;
	fLocal_1264 = 120f;
	fLocal_1265 = 0f;
	fLocal_1267 = 1f;
	fLocal_1268 = 0f;
	fLocal_1269 = 1f;
	fLocal_1270 = 30f;
	fLocal_1272 = 1f;
	fLocal_1273 = 5f;
	fLocal_1274 = 1f;
	fLocal_1275 = 1f;
	fLocal_1276 = 100f;
	fLocal_1277 = 100f;
	fLocal_1278 = 0f;
	fLocal_1279 = 7000f;
	fLocal_1280 = 0f;
	fLocal_1281 = 0f;
	fLocal_1282 = 0.3f;
	fLocal_1283 = 0.5f;
	fLocal_1284 = 50f;
	iLocal_1830 = -1;
	iLocal_1838 = -1;
	iLocal_1839 = -1;
	bLocal_3184 = true;
	bLocal_3192 = true;
	sLocal_3305 = "rcmpaparazzo1ig_2";
	sLocal_3306 = "rcmpaparazzo1ig_1";
	sLocal_3307 = "Franklin";
	sLocal_3308 = "Beverly";
	sLocal_3309 = "Beverlys_camera";
	sLocal_3310 = "Camera_Flash";
	sLocal_3311 = "PAP_Bike";
	sLocal_3312 = "Miranda_Car";
	sLocal_3313 = "Miranda";
	sLocal_3314 = "Miranda_Bodyguard";
	sLocal_3315 = "atk_punch_left_pap";
	sLocal_3316 = "RCM_Paparazzo";
	sLocal_3317 = "Distant_Camera_Flash";
	cLocal_3318 = "PAP1AUD";
	sLocal_3319 = "PAPARAZZO_01_SOUNDSET";
	sLocal_3320 = "Pap1U";
	StringCopy(&Local_3597, "point_45_left_pap", 64);
	StringCopy(&Local_3613, "", 24);
	StringCopy(&Local_3619, "", 24);
	StringCopy(&cLocal_3625, "rcmpaparazzo1ig_1_waive", 24);
	StringCopy(&cLocal_3631, "waive_comeback_f", 24);
	StringCopy(&Local_3637, "", 24);
	StringCopy(&cLocal_3643, "PAP_1_MCS_1", 24);
	StringCopy(&cLocal_3649, "rcmpaparazzo1", 24);
	Local_3079 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_3079);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_634();
	}
	func_632();
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(-152.3902f, 279.5714f, 92.8134f, 106.6662f, 0, 0);
				bLocal_3155 = true;
				func_620(1, 0);
				break;
			
			case 1:
				GlobalFunc_4972(-1736.533f, -508.0815f, 37.98f, 192.1f, 0, 0);
				func_620(3, 0);
				iLocal_3228 = Global_Mission_Fail_State.f_12[0];
				break;
			
			case 2:
				GlobalFunc_4972(-1586.648f, -533.9604f, 34.4623f, 307.1855f, 0, 0);
				func_620(4, 0);
				iLocal_3157 = 1;
				iLocal_3228 = Global_Mission_Fail_State.f_12[0];
				break;
			
			case 3:
				GlobalFunc_4972(Local_3670, 221.0758f, 0, 0);
				func_620(5, 0);
				iLocal_3228 = Global_Mission_Fail_State.f_12[0];
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_P", 0);
		func_604(Local_3079.f_9, 0, 0, 0, 0, 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_589();
			func_588();
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::_0xC3376F42B1FACCC6(PLAYER::PLAYER_ID());
			switch (iLocal_3076)
			{
				case 0:
					func_536();
					break;
				
				case 1:
					func_528();
					break;
				
				case 2:
					func_523();
					break;
				
				case 3:
					func_470();
					break;
				
				case 4:
					func_469();
					break;
				
				case 7:
					func_339();
					break;
				
				case 5:
					func_331();
					break;
				
				case 6:
					func_219();
					break;
				
				case 8:
					func_188();
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					break;
				}
		}
		if (bLocal_3184 == 0)
		{
			func_1(iLocal_3077);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0x3C4
{
	if (iLocal_3076 == iParam0)
	{
		if (GlobalFunc_188())
		{
			GlobalFunc_4967(0, -1, 0);
		}
		func_83(iLocal_3076);
		func_78(iLocal_3076);
		if (iLocal_3076 == 5)
		{
			func_68(1, 0, 1);
		}
		else if (iLocal_3076 == 1)
		{
			func_68(0, 1, 1);
		}
		else
		{
			func_68(1, 1, 1);
		}
		bLocal_3184 = true;
		iLocal_3185 = 0;
		if (iLocal_3076 == 6)
		{
			GlobalFunc_79(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x437
{
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
		}
		GlobalFunc_4935();
		HUD::CLEAR_PRINTS();
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		switch (iLocal_3076)
		{
			case 0:
				if (iLocal_3078 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			case 1:
				if (iLocal_3078 == 1)
				{
					if (GlobalFunc_4947(Local_3521))
					{
						if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
						{
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1, 4096, -1);
						}
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
							{
								func_56(Local_3486, &Local_3521, 0);
							}
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3521, 1, 1);
					}
					iLocal_3188 = 1;
					fLocal_3202 = 10f;
					if (!GlobalFunc_188())
					{
						if (GlobalFunc_4947(Local_3521))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
							{
								func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
							}
						}
						GlobalFunc_5705(Local_3521, -1434.515f, -67.2538f, 51.678f, 130.5866f, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						func_54(1);
						if (iLocal_3185 == 0)
						{
							if (iLocal_3077 == 2)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_3185 = 1;
								}
							}
						}
					}
					if (GlobalFunc_4947(Local_3528))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3528, 1, sLocal_3320, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3528, 56000f);
						func_45(Local_3528, 56000f);
						iLocal_125 = 1;
						func_44();
						func_43();
						func_3(Local_3528, fLocal_3214);
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0, 0, 0, 0, 0);
					iLocal_3078 = 2;
				}
				break;
			
			case 2:
				if (iLocal_3078 == 1)
				{
					if (GlobalFunc_4947(Local_3521))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
							{
								func_56(Local_3486, &Local_3521, 0);
							}
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 1000f, -2f, -1, 17, 0, 0, 0, 0);
							}
						}
					}
					if (GlobalFunc_4947(Local_3528))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
						{
							VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_3528);
						}
					}
					if (GlobalFunc_4947(Local_3535))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
						{
							VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_3535);
						}
					}
					if (iLocal_3077 == 3)
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Pap1PV");
						while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Pap1PV"))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (!GlobalFunc_188())
					{
						if (GlobalFunc_4947(Local_3521))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
							{
								func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
							}
						}
						GlobalFunc_5705(Local_3521, -1736.533f, -508.0815f, 37.98f, 192.1f, 0, 1);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_3185 == 0)
						{
							if (iLocal_3077 == 3)
							{
								GlobalFunc_8533(-1727.604f, -524.8994f, 36.6081f, 75f, 13, 5000, 0, 0);
								iLocal_3185 = 1;
							}
						}
					}
					iLocal_3158[0] = 1;
					iLocal_3158[1] = 1;
					iLocal_3234 = 4;
					iLocal_3231 = 0;
					fLocal_3214 = 1f;
					fLocal_3202 = 10f;
					fLocal_3205 = 10f;
					iLocal_3078 = 2;
				}
				break;
			
			case 3:
				if (iLocal_3078 == 1)
				{
					if (GlobalFunc_4947(Local_3521))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
							{
								func_56(Local_3486, &Local_3521, 0);
							}
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3521))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3521);
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
						}
						SYSTEM::WAIT(0);
					}
					if (GlobalFunc_4947(Local_3528))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3528);
						}
					}
					if (GlobalFunc_4947(Local_3535))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3535);
						}
					}
					if (!GlobalFunc_188())
					{
						if (GlobalFunc_4947(Local_3521))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
							{
								func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
							}
						}
						GlobalFunc_5705(Local_3521, -1586.648f, -533.9604f, 34.4623f, 307.1855f, 0, 1);
						if (GlobalFunc_4947(Local_3521))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3521);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_3185 == 0)
						{
							if (iLocal_3077 == 4)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_3185 = 1;
								}
							}
						}
					}
					GlobalFunc_5705(Local_3535, -1594.517f, -537.8604f, 34.2018f, 307.7577f, 0, 1);
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514) && GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
					{
						TASK::CLEAR_PED_TASKS(Local_3507.x);
						TASK::CLEAR_PED_TASKS(Local_3514);
						if (GlobalFunc_4947(Local_3535))
						{
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3535);
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3514, Local_3535))
							{
								func_56(Local_3514, &Local_3535, -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3507.x, Local_3535))
							{
								func_56(Local_3507.x, &Local_3535, 0);
							}
							while (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3514, Local_3535) || !PED::IS_PED_SITTING_IN_VEHICLE(Local_3507.x, Local_3535))
							{
								SYSTEM::WAIT(0);
							}
						}
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
					{
						AUDIO::STOP_PED_SPEAKING(Local_3507.x, 1);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_3507.x, 1);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_3507.x, 0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3507.x))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_3507.x);
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_3507.x, 1, 2f, 0f, -4f, 0f, 0.21f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_3507.x, 20), 1, 1, 1, 0, 1);
							}
							ENTITY::SET_ENTITY_HEALTH(Local_3507.x, 0);
						}
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
					{
						AUDIO::STOP_PED_SPEAKING(Local_3514, 1);
						AUDIO::DISABLE_PED_PAIN_AUDIO(Local_3514, 1);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_3514, 0))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3514, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3514))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_3514);
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_3514, 1, 2f, 0f, -4f, 0f, 0.21f, 0f, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_3514, 20), 1, 1, 1, 0, 1);
							}
						}
						ENTITY::SET_ENTITY_HEALTH(Local_3514, 0);
					}
					if (GlobalFunc_4947(Local_3535))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_3535, 1, 2f, 1f, -4f, 0f, 0.21f, 0f, 0, 1, 1, 1, 0, 1);
					}
					SYSTEM::WAIT(750);
					fLocal_3202 = 10f;
					fLocal_3205 = 10f;
					iLocal_3078 = 2;
				}
				break;
			
			case 4:
				if (iLocal_3078 == 1)
				{
					if (GlobalFunc_4947(Local_3521))
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
							{
								func_56(Local_3486, &Local_3521, 0);
							}
						}
					}
					if (!GlobalFunc_188())
					{
						if (GlobalFunc_4947(Local_3521))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
							{
								func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
							}
							GlobalFunc_5705(Local_3521, Local_3670, 221.0758f, 0, 1);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						if (iLocal_3185 == 0)
						{
							if (iLocal_3077 == 5)
							{
								if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
									iLocal_3185 = 1;
								}
							}
						}
					}
					iLocal_3157 = 1;
					iLocal_3181 = 1;
					iLocal_3078 = 2;
				}
				break;
			
			case 5:
				if (iLocal_3078 == 1)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						CUTSCENE::STOP_CUTSCENE(0);
					}
				}
				break;
			
			case 7:
				if (iLocal_3078 == 1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					iLocal_3078 = 2;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_3(int iParam0, float fParam1)//Position - 0xB89
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_137 = false;
	if (!bLocal_119)
	{
		if (bLocal_118)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_119 = true;
		}
	}
	else if (!bLocal_118)
	{
		GlobalFunc_2214();
		bLocal_119 = false;
	}
	if (bLocal_118)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_112)
	{
		if (iLocal_107)
		{
			fLocal_1269 = 0f;
		}
		else
		{
			fLocal_1269 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_117 = 1;
					}
					else
					{
						iLocal_117 = 0;
					}
				}
				fLocal_1266 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1267) * fLocal_1269));
				if (iLocal_116)
				{
					func_39(iParam0, fLocal_1266);
					func_38(iParam0, fLocal_1276);
					if (fLocal_1271 > 1000f)
					{
						if (iLocal_1843 == 0)
						{
							func_37(iParam0, fLocal_1276);
						}
						fVar0 = ((fLocal_1266 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1843) * 2000f));
						func_36(iParam0, fVar0, fLocal_1270);
						iLocal_1843++;
						if (iLocal_1843 > 2)
						{
							fLocal_1271 = 0f;
						}
					}
					else
					{
						iLocal_1843 = 0;
						fLocal_1271 = (fLocal_1271 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1266 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_124)
		{
			if (!iLocal_106)
			{
				func_32(iParam0, ((fParam1 * fLocal_1267) * fLocal_1269), 0);
				if (!iLocal_127)
				{
				}
				iLocal_127 = 0;
			}
			if (bLocal_109)
			{
				func_28(iParam0);
			}
			if (!iLocal_106)
			{
				func_11(iParam0, ((fParam1 * fLocal_1267) * fLocal_1269), 0);
			}
		}
		if (iLocal_114)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3052 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2522 = { ENTITY::GET_ENTITY_COORDS(iLocal_3052, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3052, &uLocal_670, &uLocal_671, &uLocal_672, &uLocal_673);
				}
			}
			iLocal_114 = 0;
		}
		if (iLocal_113)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3052))
			{
				GlobalFunc_2210(iLocal_3053);
				iLocal_3053 = iLocal_3052;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3053, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3053, Local_2522, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3053, uLocal_670, uLocal_671, uLocal_672, uLocal_673);
			}
			fLocal_1265 = fLocal_1268;
			iLocal_106 = 1;
			iLocal_113 = 0;
		}
		if (iLocal_106)
		{
			while (!func_4(&iParam0, fLocal_1265))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_107 = 1;
		}
		if (iLocal_120)
		{
			iLocal_120 = 0;
		}
	}
}

int func_4(int iParam0, float fParam1)//Position - 0xE24
{
	if (!iLocal_121)
	{
		iLocal_106 = 1;
		func_6();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1830 == -1)
			{
				while (!func_5(iParam0, iLocal_1830, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_111)
				{
					iLocal_107 = 1;
					fLocal_1269 = 0f;
					iLocal_1831 = 0;
					iLocal_1833 = 0;
					iLocal_1832 = 0;
					iLocal_1827 = 0;
					iLocal_1828 = 0;
					iLocal_1829 = 0;
					iLocal_1834 = 0;
					iLocal_1835 = 0;
					iLocal_1836 = 0;
				}
			}
		}
		iLocal_121 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1267) * fLocal_1269));
				func_5(iParam0, iLocal_1830, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1266 = fParam1;
		iLocal_1837 = 0;
		iLocal_1840 = 0;
		fLocal_1281 = 0f;
		fLocal_1280 = 0f;
		func_11(*iParam0, ((1f * fLocal_1267) * fLocal_1269), 1);
		func_32(*iParam0, ((1f * fLocal_1267) * fLocal_1269), 1);
		func_28(*iParam0);
		if ((iLocal_1834 == 0 && iLocal_1835 == 0) && iLocal_1836 == 0)
		{
			iLocal_107 = 0;
			iLocal_106 = 0;
			iLocal_121 = 0;
			return 1;
		}
	}
	return 0;
}

int func_5(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xF56
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2549);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2549))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2549, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1838 && iParam1 != iLocal_1839)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2549, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2549, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2549, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2549, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2549))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2549);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_2549, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1838 && iParam1 != iLocal_1839)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2549, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_2549, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2549, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_2549, 1);
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

void func_6()//Position - 0x113C
{
	func_9();
	func_8();
	func_7();
}

void func_7()//Position - 0x1150
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2995[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2995[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2995[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2995[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2995[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2995[iVar0]));
			}
		}
		iLocal_1654[iVar0] = 0;
		if (!bLocal_118 && !bLocal_131)
		{
			if (iLocal_1603[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2743[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2743[iVar0]);
		}
		iVar0++;
	}
}

void func_8()//Position - 0x1246
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2924[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2924[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2924[iVar0]));
			}
		}
		iLocal_1756[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2672[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2672[iVar0]);
		}
		iVar0++;
	}
	iLocal_1832 = 0;
	iLocal_1829 = 0;
}

void func_9()//Position - 0x12C3
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2797[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2797[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2797[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2797[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2797[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2797[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2797[iVar0]));
			}
		}
		if (!bLocal_118 && !bLocal_131)
		{
			if (iLocal_1285[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549);
			}
		}
		iLocal_1391[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (!iLocal_2566[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2566[iVar0]);
		}
		iVar0++;
	}
	iLocal_1831 = 0;
	iLocal_1827 = 0;
}


void func_11(int iParam0, float fParam1, bool bParam2)//Position - 0x13D8
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
		iVar0 = iLocal_1833;
		while (iVar0 < 50)
		{
			if (iLocal_1654[iVar0] != 99)
			{
				if (iLocal_1654[iVar0] == 0)
				{
					if (iLocal_1603[iVar0] > 0)
					{
						if (!iLocal_106)
						{
							if (fLocal_1266 > (fLocal_878[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2743[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1705[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2743[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1705[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1705[iVar0]), 1);
								iLocal_1654[iVar0]++;
								iLocal_1835++;
							}
						}
						else
						{
							fVar12 = (fLocal_1266 - fLocal_878[iVar0]);
							fVar12 = (fVar12 * fLocal_929[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_26(iLocal_1603[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2743[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1705[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2743[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1705[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1705[iVar0]), 1);
									iLocal_1654[iVar0]++;
									iLocal_1835++;
								}
								else
								{
									iLocal_1654[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1654[iVar0] = 99;
					}
				}
				else if (iLocal_1654[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549);
					if (MISC::IS_BIT_SET(iLocal_1705[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_133 && ((!MISC::IS_BIT_SET(iLocal_1705[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1705[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_24());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_24());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2995[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2743[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2743[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1603[iVar0], &cLocal_2549))
							{
								if (fLocal_1266 >= (fLocal_878[iVar0] - (fLocal_1279 * fParam1)))
								{
									if ((iLocal_120 || bParam2) || (!bLocal_137 && !func_23(Local_2371[iVar0 /*3*/], Var9, 5f, fLocal_1277)))
									{
										if (iLocal_116)
										{
											func_22(Local_2371[iVar0 /*3*/], Var9, fLocal_1270);
										}
										iLocal_2995[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2743[iVar0], Local_2371[iVar0 /*3*/], 0, 0, 0);
										if (iLocal_2743[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_2995[iVar0], 0);
										}
										if (iLocal_129 && !MISC::IS_BIT_SET(iLocal_1705[iVar0], 0))
										{
											func_21(iLocal_2995[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1705[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2995[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2995[iVar0], Local_2371[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_2995[iVar0], fLocal_674[iVar0], fLocal_725[iVar0], fLocal_776[iVar0], fLocal_827[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2743[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2743[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2995[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2995[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2995[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_2995[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2743[iVar0]);
										iLocal_1835 = (iLocal_1835 - 1);
										iLocal_1654[iVar0]++;
										bLocal_137 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2995[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2995[iVar0], Local_2371[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_2995[iVar0], fLocal_674[iVar0], fLocal_725[iVar0], fLocal_776[iVar0], fLocal_827[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2743[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2743[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2995[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2995[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2743[iVar0]);
							iLocal_1835 = (iLocal_1835 - 1);
							iLocal_1654[iVar0]++;
						}
					}
				}
				else if (iLocal_1654[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549);
					if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1705[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_133 && ((!MISC::IS_BIT_SET(iLocal_1705[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1705[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_24());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_24());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2995[iVar0]))
						{
							if (!bLocal_137 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2995[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2995[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_120)
									{
										func_19(&(iLocal_2995[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1705[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
					{
						if (fLocal_1266 >= fLocal_878[iVar0])
						{
							if (4 > iLocal_1828)
							{
								fVar12 = (fLocal_1266 - fLocal_878[iVar0]);
								fVar12 = (fVar12 * fLocal_929[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1603[iVar0], &cLocal_2549))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2995[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1603[iVar0], fVar12, &cLocal_2549) };
										if (((!func_23(Var3, Var9, 5f, fLocal_1277) && func_23(Var6, Var9, 5f, fLocal_1277)) && !iLocal_120) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 1))
											{
												func_19(&(iLocal_2995[iVar0]), iVar19, 1);
											}
											iLocal_1828++;
											iLocal_1654[iVar0]++;
										}
										else if (((!bLocal_137 || MISC::IS_BIT_SET(iLocal_1705[iVar0], 1)) || iLocal_120) || bParam2)
										{
											if (func_5(&(iLocal_2995[iVar0]), iLocal_1603[iVar0], fVar12, 1, 0, 0, bLocal_135, iLocal_134))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_2995[iVar0], (fParam1 * fLocal_929[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1705[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2995[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_2995[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2995[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2743[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2995[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 1))
												{
													func_19(&(iLocal_2995[iVar0]), iVar19, 1);
												}
												iLocal_1828++;
												iLocal_1654[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 1))
										{
											func_19(&(iLocal_2995[iVar0]), iVar19, 1);
										}
										iLocal_1828++;
										iLocal_1654[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 1))
								{
									func_19(&(iLocal_2995[iVar0]), iVar19, 1);
								}
								iLocal_1828++;
								iLocal_1654[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1705[iVar0], 1))
						{
							func_19(&(iLocal_2995[iVar0]), iVar19, 1);
						}
						iLocal_1828++;
						iLocal_1654[iVar0]++;
					}
				}
				else if (iLocal_1654[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2995[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2995[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_110 && !iLocal_107) && !bLocal_126) && (((!bLocal_135 && !iLocal_134) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2995[iVar0])) || func_18(iLocal_2995[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (iLocal_128)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_2995[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_2995[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_2995[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_14(iLocal_2995[iVar0]);
												iLocal_1654[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2995[iVar0], (fParam1 * fLocal_929[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2995[iVar0]);
							}
						}
						else
						{
							iLocal_1654[iVar0]++;
						}
					}
					else
					{
						iLocal_1654[iVar0]++;
					}
				}
				else if (iLocal_1654[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2995[iVar0]))
						{
							iLocal_1654[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2995[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2995[iVar0], (fParam1 * fLocal_929[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2995[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1603[iVar0], &cLocal_2549))
							{
								if (fLocal_1266 > (fLocal_878[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2995[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2995[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1654[iVar0]++;
					}
				}
				else if (iLocal_1654[iVar0] == 5)
				{
					if (!iLocal_2995[iVar0] == iLocal_3054)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2995[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_2995[iVar0]);
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
						if (!bLocal_118 && !bLocal_131)
						{
							if (iLocal_1603[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549);
							}
						}
						if (!bLocal_108)
						{
							if (!bLocal_136)
							{
								GlobalFunc_2210(iLocal_2995[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2995[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_2995[iVar0]));
						}
					}
					iLocal_1828 = (iLocal_1828 - 1);
					iLocal_1654[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1833 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_12();
	}
}

void func_12()//Position - 0x1FD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2995[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2995[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2995[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2995[iVar0]);
				}
			}
			func_13(iLocal_2995[iVar0]);
			GlobalFunc_2210(iLocal_2995[iVar0]);
		}
		iLocal_1654[iVar0] = 0;
		iLocal_1705[iVar0] = 0;
		if (!bLocal_118 && !bLocal_131)
		{
			if (iLocal_1603[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1603[iVar0], &cLocal_2549);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (!iLocal_2743[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2743[iVar0]);
		}
		iVar0++;
	}
	iLocal_1833 = 0;
}

void func_13(int iParam0)//Position - 0x20A2
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
				if (bLocal_139)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_14(int iParam0)//Position - 0x213B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_13(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_18(int iParam0)//Position - 0x229E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_132)
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

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0x22FB
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uLocal_2565);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_24(), -1, 0, 0);
				if (bLocal_138)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_24());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_139)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_137 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_21(int iParam0)//Position - 0x2407
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2795 >= -1 && iLocal_2796 >= -1)
	{
		while (iVar0 == iLocal_2795 || iVar0 == iLocal_2796)
		{
			iVar0++;
		}
	}
	else if (iLocal_2795 >= -1)
	{
		if (iVar0 == iLocal_2795)
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

void func_22(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x2580
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_119)
	{
		if (!func_23(Param0, Param3, fParam6, 200f))
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

int func_23(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x25F0
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_119)
		{
			if (!iLocal_106)
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

int func_24()//Position - 0x2637
{
	if (iLocal_2794 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2794;
}


float func_26(int iParam0)//Position - 0x2661
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2549);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2549))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2549);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2549);
	return uVar0;
}


void func_28(int iParam0)//Position - 0x2717
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
		iVar0 = iLocal_1832;
		while (iVar0 < 70)
		{
			switch (iLocal_1756[iVar0])
			{
				case 0:
					if (!iLocal_2672[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2160[iVar0 /*3*/], fLocal_1264, fLocal_1264, fLocal_1264, 0, 1, 0))
						{
							iLocal_1834++;
							iLocal_1756[iVar0]++;
						}
					}
					else
					{
						iLocal_1756[iVar0] = 99;
					}
					break;
				
				case 1:
					if (5 > iLocal_1829)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2924[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2672[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2672[iVar0]))
							{
								if ((iLocal_106 || iLocal_120) || (!bLocal_137 && !func_23(Local_2160[iVar0 /*3*/], Var1, 5f, fLocal_1277)))
								{
									if (iLocal_116)
									{
										func_22(Local_2160[iVar0 /*3*/], Var1, fLocal_1270);
									}
									iLocal_2924[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2672[iVar0], Local_2160[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_2672[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2924[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2924[iVar0], fLocal_980[iVar0], fLocal_1051[iVar0], fLocal_1122[iVar0], fLocal_1193[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2672[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2924[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_2924[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2672[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_2924[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_2924[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_2924[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2924[iVar0], 1);
									iLocal_1834 = (iLocal_1834 - 1);
									iLocal_1829++;
									iLocal_1756[iVar0]++;
									bLocal_137 = true;
								}
							}
						}
						else
						{
							iLocal_1834 = (iLocal_1834 - 1);
							iLocal_1829++;
							iLocal_1756[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2924[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2924[iVar0], 1) };
						}
						if (fLocal_1278 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1278 * fLocal_1278))
						{
							if (!GlobalFunc_5654(iLocal_2924[iVar0], iParam0, 0))
							{
								if (!bLocal_108)
								{
									GlobalFunc_2210(iLocal_2924[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_2924[iVar0]));
								}
								iLocal_1829 = (iLocal_1829 - 1);
								iLocal_1756[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1756[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1832 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_29();
	}
}

void func_29()//Position - 0x2A0D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2924[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2924[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2924[iVar0], 1, 0);
			}
			GlobalFunc_2210(iLocal_2924[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2672[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2672[iVar0]);
		}
		iVar0++;
	}
	iLocal_1832 = 0;
	iLocal_1829 = 0;
}



void func_32(int iParam0, float fParam1, int iParam2)//Position - 0x2AAA
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
			fLocal_1266 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1831;
		while (iVar0 < 105 && !bVar23)
		{
			if (iLocal_1391[iVar0] != 99)
			{
				if (iLocal_1391[iVar0] == 0)
				{
					if (iLocal_1285[iVar0] > 0 && iLocal_2566[iVar0] != 0)
					{
						if (!iLocal_106)
						{
							if (fLocal_1266 < (fLocal_564[iVar0] + 20000f))
							{
								if (fLocal_1266 >= (fLocal_564[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2566[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1497[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2566[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1497[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1497[iVar0]), 1);
									iLocal_1836++;
									iLocal_1391[iVar0]++;
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
								func_35(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1266 - fLocal_564[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_26(iLocal_1285[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2566[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1497[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2566[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1497[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1497[iVar0]), 1);
									iLocal_1836++;
									iLocal_1391[iVar0]++;
								}
								else
								{
									func_35(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_35(iVar0, 1090519040);
					}
				}
				else if (iLocal_1391[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1497[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_133 && ((!MISC::IS_BIT_SET(iLocal_1497[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1497[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_24());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_24());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2797[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2566[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2566[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1285[iVar0], &cLocal_2549)) && bVar17)
						{
							if (fLocal_1266 >= (fLocal_564[iVar0] - (fLocal_1279 * fParam1)))
							{
								if ((iLocal_120 || iParam2) || (!bLocal_137 && !func_23(Local_1844[iVar0 /*3*/], Var12, 5f, fLocal_1277)))
								{
									if (iLocal_116)
									{
										func_22(Local_1844[iVar0 /*3*/], Var12, fLocal_1270);
									}
									iLocal_2797[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2566[iVar0], Local_1844[iVar0 /*3*/], 0, 0, 0);
									if (iLocal_2566[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2797[iVar0], 0);
									}
									if (iLocal_129 && !MISC::IS_BIT_SET(iLocal_1497[iVar0], 0))
									{
										func_21(iLocal_2797[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2797[iVar0], Local_1844[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2797[iVar0], fLocal_140[iVar0], fLocal_246[iVar0], fLocal_352[iVar0], fLocal_458[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2566[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2566[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2797[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1497[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2797[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2797[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2797[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2797[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2797[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2566[iVar0]);
									iLocal_1836 = (iLocal_1836 - 1);
									iLocal_1391[iVar0]++;
									bLocal_137 = true;
								}
								else if (fLocal_1266 > fLocal_564[iVar0])
								{
									iLocal_1836 = (iLocal_1836 - 1);
									func_35(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1391[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1842 || iLocal_1842 == 0)) || iLocal_120) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1497[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_133 && ((!MISC::IS_BIT_SET(iLocal_1497[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1497[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_24());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_24());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2797[iVar0]))
							{
								if (!bLocal_137 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2797[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2797[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_120)
										{
											func_19(&(iLocal_2797[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1497[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2797[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549);
							if (fLocal_1266 >= fLocal_564[iVar0])
							{
								if (20 > iLocal_1827)
								{
									fVar15 = (fLocal_1266 - fLocal_564[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1285[iVar0], &cLocal_2549))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2797[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1285[iVar0], fVar15, &cLocal_2549) };
											if (!func_23(Var6, Var12, 5f, fLocal_1277) && func_23(Var9, Var12, 5f, fLocal_1277))
											{
												if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
												{
													func_19(&(iLocal_2797[iVar0]), iVar21, 0);
												}
												func_35(iVar0, 1090519040);
											}
											else if (((!bLocal_137 || MISC::IS_BIT_SET(iLocal_1497[iVar0], 1)) || iLocal_120) || iParam2)
											{
												if (func_5(&(iLocal_2797[iVar0]), iLocal_1285[iVar0], fVar15, 1, 0, 0, 1, iLocal_134))
												{
													if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
													{
														func_19(&(iLocal_2797[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2797[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2797[iVar0], fParam1);
													iLocal_1827++;
													iLocal_1391[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
											{
												func_19(&(iLocal_2797[iVar0]), iVar21, 0);
											}
											func_35(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549))
									{
										if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
										{
											func_19(&(iLocal_2797[iVar0]), iVar21, 0);
										}
										func_35(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
									{
										func_19(&(iLocal_2797[iVar0]), iVar21, 0);
									}
									func_35(iVar0, 1090519040);
								}
							}
							else if (iLocal_117 && !iLocal_125)
							{
								if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
								{
									func_19(&(iLocal_2797[iVar0]), iVar21, 0);
								}
								func_35(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1497[iVar0], 1))
							{
								func_19(&(iLocal_2797[iVar0]), iVar21, 0);
							}
							func_35(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1842 = iVar0;
					}
				}
				else if (iLocal_1391[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2797[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2797[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2797[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_115)
									{
										if ((!bLocal_110 && !iLocal_107) && func_18(iLocal_2797[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1841 || iLocal_1841 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2797[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2797[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1841 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_130 && !MISC::IS_BIT_SET(iLocal_1497[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1841 || iLocal_1841 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2797[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1841 = iVar0;
										}
									}
									if (bVar24)
									{
										func_14(iLocal_2797[iVar0]);
										iLocal_1391[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2797[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2797[iVar0]);
							}
						}
						else
						{
							iLocal_1391[iVar0]++;
						}
					}
					else
					{
						iLocal_1391[iVar0]++;
					}
				}
				else if (iLocal_1391[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2797[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2797[iVar0]))
						{
							iLocal_1391[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2797[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2797[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2797[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1285[iVar0], &cLocal_2549))
							{
								if (fLocal_1266 > (fLocal_564[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2797[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2797[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1391[iVar0]++;
					}
				}
				else if (iLocal_1391[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2797[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2797[iVar0]);
					}
					iLocal_1827 = (iLocal_1827 - 1);
					func_35(iVar0, fVar16);
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
			iLocal_1831 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1841 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1842 = 0;
		}
	}
	else
	{
		func_33();
	}
}

void func_33()//Position - 0x3610
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2797[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2797[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2797[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2797[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2797[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2797[iVar0]);
				}
			}
			func_13(iLocal_2797[iVar0]);
			GlobalFunc_2210(iLocal_2797[iVar0]);
		}
		iLocal_1391[iVar0] = 0;
		iLocal_1497[iVar0] = 0;
		if (!bLocal_118 && !bLocal_131)
		{
			if (iLocal_1285[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1285[iVar0], &cLocal_2549);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 105)
	{
		if (!iLocal_2566[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2566[iVar0]);
		}
		iVar0++;
	}
	iLocal_1831 = 0;
	iLocal_1827 = 0;
}


void func_35(int iParam0, float fParam1)//Position - 0x3761
{
	int iVar0;
	
	if (!iLocal_2566[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2566[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2797[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2797[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2797[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2797[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2797[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_139)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_108)
	{
		if (!bLocal_136)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_2210(iLocal_2797[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2797[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2797[iParam0]));
		}
	}
	if (!bLocal_118 && !bLocal_131)
	{
		if (iLocal_1285[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1285[iParam0], &cLocal_2549);
		}
	}
	iLocal_1391[iParam0] = 99;
}

void func_36(int iParam0, float fParam1, float fParam2)//Position - 0x38BA
{
	int iVar0;
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
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = SYSTEM::VMAG(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_22(Var1, Var10, fVar13);
		}
	}
}

void func_37(int iParam0, float fParam1)//Position - 0x393D
{
	if (!bLocal_119)
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

void func_38(int iParam0, float fParam1)//Position - 0x398A
{
	if (!bLocal_119)
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

void func_39(int iParam0, float fParam1)//Position - 0x39D7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1280 + 2000f);
		fVar2 = (fLocal_1281 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_1837 == 0)
				{
					Local_2537 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1280) };
					iLocal_1837++;
				}
				else if (iLocal_1837 == 1)
				{
					Local_2540 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_1837++;
				}
				else if (!bLocal_137)
				{
					if (Local_2537.x > Local_2540.x)
					{
						fVar3 = Local_2537.x;
						Local_2537.x = Local_2540.x;
						Local_2540.x = fVar3;
					}
					if (Local_2537.f_1 > Local_2540.f_1)
					{
						fVar3 = Local_2537.f_1;
						Local_2537.f_1 = Local_2540.f_1;
						Local_2540.f_1 = fVar3;
					}
					if (Local_2537.f_2 > Local_2540.f_2)
					{
						fVar3 = Local_2537.f_2;
						Local_2537.f_2 = Local_2540.f_2;
						Local_2540.f_2 = fVar3;
					}
					Local_2537 = { Local_2537 - Vector(fLocal_1284, fLocal_1284, fLocal_1284) };
					Local_2540 = { Local_2540 + Vector(fLocal_1284, fLocal_1284, fLocal_1284) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2537, Local_2540, 0, 0);
					fLocal_1280 = fVar1;
					iLocal_1837 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1840 == 0)
			{
				Local_2543 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1281) };
				iLocal_1840++;
			}
			else if (iLocal_1840 == 1)
			{
				Local_2546 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_1840++;
			}
			else if (!bLocal_137 && !bVar4)
			{
				if (Local_2543.x > Local_2546.x)
				{
					fVar3 = Local_2543.x;
					Local_2543.x = Local_2546.x;
					Local_2546.x = fVar3;
				}
				if (Local_2543.f_1 > Local_2546.f_1)
				{
					fVar3 = Local_2543.f_1;
					Local_2543.f_1 = Local_2546.f_1;
					Local_2546.f_1 = fVar3;
				}
				if (Local_2543.f_2 > Local_2546.f_2)
				{
					fVar3 = Local_2543.f_2;
					Local_2543.f_2 = Local_2546.f_2;
					Local_2546.f_2 = fVar3;
				}
				Local_2543 = { Local_2543 - Vector(fLocal_1284, fLocal_1284, fLocal_1284) };
				Local_2546 = { Local_2546 + Vector(fLocal_1284, fLocal_1284, fLocal_1284) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2543, Local_2546, 1);
				fLocal_1281 = fVar2;
				iLocal_1840 = 0;
			}
		}
	}
}




void func_43()//Position - 0x3D39
{
	iLocal_120 = 1;
}

void func_44()//Position - 0x3D44
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_3232) > 3)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_2995)
		{
			if (iLocal_1603[iVar0] > 0)
			{
				if (fLocal_3203 > (fLocal_878[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1603[iVar0], sLocal_3320);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2995[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2743[iVar0]);
					}
				}
				else if (fLocal_3203 > (fLocal_878[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2995[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1603[iVar0], sLocal_3320);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_2797)
		{
			if (iLocal_1285[iVar0] > 0)
			{
				if (fLocal_3203 > (fLocal_564[iVar0] - 5000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1285[iVar0], sLocal_3320);
				}
				else if (fLocal_3203 > (fLocal_564[iVar0] + 3000f))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2797[iVar0]))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1285[iVar0], sLocal_3320);
					}
				}
			}
			iVar0++;
		}
		iLocal_3232 = MISC::GET_GAME_TIMER();
	}
}

void func_45(int iParam0, float fParam1)//Position - 0x3E66
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_43();
			func_5(&iParam0, iLocal_1830, fParam1, 1, 0, 1, 0, 0);
			fLocal_1266 = fParam1;
			iVar0 = 0;
			while (iVar0 < 50)
			{
				if (iLocal_1654[iVar0] > 2 && iLocal_1654[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2995[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2995[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2995[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_878[iVar0]);
								fVar1 = (fVar1 * fLocal_929[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_26(iLocal_1603[iVar0]))
									{
										func_5(&(iLocal_2995[iVar0]), iLocal_1603[iVar0], fVar1, 1, 0, 1, bLocal_135, iLocal_134);
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
						iLocal_1654[iVar0] = 99;
						iLocal_1828 = (iLocal_1828 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 105)
			{
				if (iLocal_1391[iVar0] > 2 && iLocal_1391[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2797[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2797[iVar0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2797[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_564[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_26(iLocal_1285[iVar0]))
									{
										func_5(&(iLocal_2797[iVar0]), iLocal_1285[iVar0], fVar1, 1, 0, 1, 1, iLocal_134);
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
						iLocal_1391[iVar0] = 99;
						iLocal_1827 = (iLocal_1827 - 1);
					}
				}
				iVar0++;
			}
			iLocal_1831 = 0;
			iLocal_1833 = 0;
			iVar0 = 0;
			while (iVar0 < 70)
			{
				if (iLocal_1756[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2924[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_2924[iVar0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2924[iVar0], 1, 0);
							iLocal_1829++;
							iLocal_1756[iVar0] = 2;
						}
					}
					else
					{
						iLocal_1756[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_1832 = 0;
			iLocal_1837 = 0;
			iLocal_1840 = 0;
			fLocal_1281 = fParam1;
			fLocal_1280 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Local_2525 = { Var3 - Vector(100f, 100f, 100f) };
			Local_2528 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_2525, Local_2528, 0, 0);
		}
	}
}









void func_54(bool bParam0)//Position - 0x433D
{
	STREAMING::REQUEST_MODEL(Local_3564.f_10);
	STREAMING::REQUEST_MODEL(Local_3575.f_10);
	STREAMING::REQUEST_MODEL(Local_3507.f_1);
	STREAMING::REQUEST_MODEL(Local_3514.f_1);
	STREAMING::REQUEST_MODEL(Local_3535.f_1);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Pap1RP");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_01_A", 0);
	if (bParam0)
	{
		while ((((((!STREAMING::HAS_MODEL_LOADED(Local_3564.f_10) || !STREAMING::HAS_MODEL_LOADED(Local_3575.f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_3507.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3514.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3535.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Pap1RP")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_01_A", 0))
		{
			SYSTEM::WAIT(0);
		}
	}
}


void func_56(int iParam0, int iParam1, int iParam2)//Position - 0x4459
{
	int iVar0;
	
	if (GlobalFunc_115(iParam0) && GlobalFunc_4947(*iParam1))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, iParam2))
		{
			func_59(iParam0, *iParam1, iParam2);
		}
		else
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam1, iParam2);
			if (iVar0 != iParam0)
			{
				if (GlobalFunc_115(iVar0))
				{
					func_57(iVar0);
					func_56(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_57(int iParam0)//Position - 0x44BB
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


void func_59(int iParam0, int iParam1, int iParam2)//Position - 0x4560
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









void func_68(int iParam0, int iParam1, int iParam2)//Position - 0x46E2
{
	func_69(0, 0, iParam2, 1);
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

void func_69(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4716
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
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









void func_78(int iParam0)//Position - 0x49CC
{
	iLocal_3244 = 6;
	switch (iParam0)
	{
		case 2:
		case 3:
			while (!GlobalFunc_4613("PAP1_START", 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_4613("PAP1_BIKE", 0))
			{
				SYSTEM::WAIT(0);
			}
			if (iParam0 == 3)
			{
				while (!GlobalFunc_4613("PAP1_RIVAL", 0))
				{
					SYSTEM::WAIT(0);
				}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
			{
				AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_CHASE");
			}
			break;
		
		case 4:
			func_79(3);
			break;
		
		case 5:
			while (!GlobalFunc_4613("PAP1_FAIL", 0))
			{
				SYSTEM::WAIT(0);
			}
			break;
	}
}

void func_79(int iParam0)//Position - 0x4A74
{
	iLocal_3244 = iParam0;
	func_80();
}

void func_80()//Position - 0x4A85
{
	if (!GlobalFunc_188() && bLocal_3184)
	{
		switch (iLocal_3244)
		{
			case 0:
				if (GlobalFunc_4613("PAP1_START", 0))
				{
					iLocal_3244 = 6;
				}
				break;
			
			case 1:
				if (GlobalFunc_4613("PAP1_BIKE", 0))
				{
					iLocal_3244 = 6;
				}
				break;
			
			case 2:
				if (GlobalFunc_4613("PAP1_RIVAL", 0))
				{
					iLocal_3244 = 6;
				}
				break;
			
			case 3:
				if (GlobalFunc_4613("PAP1_STOP_TO_RADIO", 1))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					iLocal_3244 = 4;
					iLocal_3245 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 4:
				if (GlobalFunc_2311(iLocal_3245, 5000))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					iLocal_3244 = 6;
				}
				break;
			
			case 5:
				if (GlobalFunc_4613("PAP1_FAIL", 0))
				{
					iLocal_3244 = 6;
				}
				break;
			
			default:
				break;
			}
	}
}



void func_83(int iParam0)//Position - 0x4B93
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 1:
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3486, Local_3486.f_3, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_3486, Local_3486.f_6);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
					func_184("waive_comeback_f", 1000f, -8f, -1, 528384, 0.589f, 1, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3486, 0, 0);
				}
				break;
			
			case 3:
				if (GlobalFunc_4947(Local_3521))
				{
					GlobalFunc_5705(Local_3521, -1736.533f, -508.0815f, 37.98f, 192.1f, 0, 1);
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
					{
						func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
						{
							func_56(Local_3486, &Local_3521, 0);
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 1000f, -4f, -1, 17, 0, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3486, 0, 0);
						}
					}
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					SYSTEM::WAIT(0);
				}
				fLocal_3214 = 1f;
				fLocal_3202 = 10f;
				fLocal_3205 = 10f;
				if (GlobalFunc_4947(Local_3528))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3528, 1, sLocal_3320, 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_3528, fLocal_3214);
					}
					else
					{
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_3528);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_3528, 75250f);
					func_45(Local_3528, 75250f);
					iLocal_125 = 1;
					func_44();
					func_43();
					func_3(Local_3528, fLocal_3214);
				}
				if (GlobalFunc_4947(Local_3535))
				{
					func_183(&Local_3535, 1, "Pap1RP", (75250f - 60550f), 1, 0, 1, 0, 0);
					VEHICLE::SET_PLAYBACK_SPEED(Local_3535, fLocal_3214);
					iLocal_3264 = 1;
					iLocal_3234 = 4;
				}
				if (GlobalFunc_4947(Local_3521))
				{
					ENTITY::SET_ENTITY_QUATERNION(Local_3521, 0.2702f, 0.0882f, 0.8814f, -0.3772f);
					func_183(&Local_3521, 1, "Pap1PV", 250f, 1, 0, 1, 0, 0);
					VEHICLE::SET_PLAYBACK_SPEED(Local_3535, fLocal_3214);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
				break;
			
			case 4:
				GlobalFunc_5705(Local_3521, -1586.648f, -533.9604f, 34.4623f, 307.1855f, 0, 1);
				if (GlobalFunc_4947(Local_3521))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3521);
				}
				if (GlobalFunc_4947(Local_3521))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
					{
						func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
					}
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
						{
							func_56(Local_3486, &Local_3521, 0);
						}
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
						{
							TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 1000f, -2f, -1, 17, 0, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3486, 0, 0);
						}
					}
				}
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 35f, 1, 0, 0, 0, 0);
				SYSTEM::WAIT(0);
				fLocal_3202 = 10f;
				fLocal_3205 = 10f;
				break;
			
			case 5:
				GlobalFunc_5705(Local_3521, Local_3670, 221.0758f, 0, 1);
				GlobalFunc_9152(&cLocal_3643);
				func_90();
				while (!GlobalFunc_8027(1, 1093140480, 0))
				{
					GlobalFunc_9152(&cLocal_3643);
					func_90();
					SYSTEM::WAIT(0);
				}
				break;
		}
		if (iParam0 != 0 && iParam0 != 1)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				func_84();
			}
		}
	}
}

void func_84()//Position - 0x4F2A
{
	if (!PED::IS_PED_GROUP_MEMBER(Local_3486, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		PED::SET_PED_AS_GROUP_MEMBER(Local_3486, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	if (PED::IS_PED_IN_GROUP(Local_3486))
	{
		PED::SET_PED_CONFIG_FLAG(Local_3486, 167, 1);
		PED::SET_GROUP_FORMATION(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0);
		PED::SET_GROUP_FORMATION_SPACING(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 1.5f, -1082130432, -1082130432);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_3486, 0);
	}
}






void func_90()//Position - 0x5294
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_3196 = 1;
			}
			else
			{
				iLocal_3196 = 0;
			}
			GlobalFunc_11086(sLocal_3307, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 52);
		}
	}
	if (GlobalFunc_115(Local_3486))
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_3308, Local_3486, 0);
		}
	}
}





























































































int func_183(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x1C1FC
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam5)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, sParam2, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1838 && iParam1 != iLocal_1839)
						{
							if (bParam8)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 2 | 4, 0, 786603);
							}
							else if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam3);
						if (bParam6)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam3 - fVar0));
					if (!bParam4)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
					}
					if (bParam6)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, 1);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
					if (bParam5)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, sParam2, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1838 && iParam1 != iLocal_1839)
					{
						if (bParam8)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 2 | 4, 0, 786603);
						}
						else if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, sParam2, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, sParam2, 1);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam3);
					if (bParam6)
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

int func_184(char* sParam0, float fParam1, float fParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)//Position - 0x1C3D4
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, 3))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				if (iVar0 == 0)
				{
					sParam0 = "waive_comeback_b";
				}
				else if (iVar0 == 1)
				{
					sParam0 = "waive_comeback_f";
				}
				else if (iVar0 == 2)
				{
					sParam0 = "waive_help_a";
				}
				else if (iVar0 == 3)
				{
					sParam0 = "waive_help_b";
				}
			}
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) > 23)
			{
			}
			StringCopy(&cLocal_3631, sParam0, 24);
			TASK::TASK_PLAY_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, fParam1, fParam2, iParam3, iParam4, fParam5, iParam6, iParam7, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}




void func_188()//Position - 0x1C57D
{
	char* sVar0;
	var uVar1;
	bool bVar2;
	
	sVar0 = 0;
	func_80();
	switch (iLocal_3078)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_217();
			if (iLocal_3200 == 3)
			{
				iLocal_3166 = 0;
				StringCopy(&Local_3619, "PAP1_FAIL2", 24);
			}
			else if (iLocal_3200 == 8)
			{
				iLocal_3166 = 0;
				StringCopy(&Local_3619, "PAP1_FAIL2", 24);
			}
			else if (iLocal_3200 == 2 || iLocal_3200 == 6)
			{
				iLocal_3166 = 0;
				StringCopy(&Local_3619, "PAP1_FAIL1", 24);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
				{
					if (((iLocal_3200 == 7 || iLocal_3200 == 3) || iLocal_3200 == 8) || iLocal_3200 == 1)
					{
						if (PED::IS_PED_GROUP_MEMBER(Local_3486, GlobalFunc_468()))
						{
							if (!PED::IS_PED_RAGDOLL(Local_3486))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_3486);
							}
						}
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
						{
							if (GlobalFunc_115(Local_3542))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
								{
									ENTITY::DETACH_ENTITY(Local_3542, 1, 1);
									func_215(-8f);
								}
							}
						}
						PED::SET_PED_FLEE_ATTRIBUTES(Local_3486, 2, 0);
						TASK::TASK_SMART_FLEE_PED(Local_3486, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(Local_3486, 1);
					}
				}
				if (GlobalFunc_4947(Local_3528))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3528);
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_3493, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3493, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					PED::SET_PED_KEEP_TASK(Local_3493, 1);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3500))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3500, 2, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3500, 8, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3500, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3500, 32, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3500, 64, 0);
					if (GlobalFunc_4947(Local_3528) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3500, Local_3528))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_3528, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, 1);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3500, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3500, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					PED::SET_PED_KEEP_TASK(Local_3500, 1);
				}
				bVar2 = false;
				if (GlobalFunc_4947(Local_3535))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3535);
						bVar2 = true;
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
				{
					if (bVar2)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_3507.x, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_3507.x, uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
					}
					PED::SET_PED_KEEP_TASK(Local_3507.x, 1);
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
				{
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 2, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 8, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 32, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 64, 0);
					if (GlobalFunc_4947(Local_3535) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3514, Local_3535))
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_3535, PLAYER::PLAYER_PED_ID(), 8, 80f, 786468, 500f, -1f, 1);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3514, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_3514, uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					}
					PED::SET_PED_KEEP_TASK(Local_3514, 1);
				}
			}
			func_79(5);
			switch (iLocal_3200)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "PAP1_F1";
					break;
				
				case 2:
					sVar0 = "PAP1_F2";
					break;
				
				case 3:
					sVar0 = "PAP1_F7";
					break;
				
				case 4:
					sVar0 = "PAP1_F3";
					break;
				
				case 5:
					sVar0 = "PAP1_F4";
					break;
				
				case 6:
					sVar0 = "PAP1_F5";
					break;
				
				case 7:
					sVar0 = "PAP1_F6";
					break;
				
				case 8:
					sVar0 = "PAP1_F9";
					break;
			}
			if (iLocal_3200 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			iLocal_3078 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_202(1);
				func_634();
			}
			else if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				if (!iLocal_3166)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (iLocal_3200 == 8)
					{
						if (func_189(&uLocal_3321, "PAP2AUD", "PAP2_FLEE", 4, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3166 = 1;
						}
					}
					else if (func_189(&uLocal_3321, cLocal_3318, &Local_3619, 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3166 = 1;
					}
				}
				if (PED::IS_PED_GROUP_MEMBER(Local_3486, GlobalFunc_468()))
				{
					if (!PED::IS_PED_RAGDOLL(Local_3486))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_3486);
					}
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
				{
					PED::SET_PED_RESET_FLAG(Local_3486, 309, 1);
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486);
				}
				else
				{
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
				}
			}
			break;
	}
}

int func_189(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1CA92
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













void func_202(bool bParam0)//Position - 0x1D1FB
{
	GlobalFunc_5721(&Local_3586, bParam0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_3553))
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(Local_3553);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(Local_3542);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3564))
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(Local_3564);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3575))
	{
		OBJECT::_MARK_OBJECT_FOR_DELETION(Local_3575);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3260, 3);
	}
	GlobalFunc_5721(&iLocal_3260, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3261))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3261, 3);
	}
	GlobalFunc_5721(&iLocal_3261, 0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_3486, GlobalFunc_468()))
		{
			PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Local_3486, GlobalFunc_468(), 0);
			PED::SET_PED_NEVER_LEAVES_GROUP(Local_3486, 0);
			if (!PED::IS_PED_RAGDOLL(Local_3486))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_3486);
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(Local_3486, 0);
			}
		}
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3486, 0);
		PED::SET_PED_KEEP_TASK(Local_3486, 1);
	}
	func_206(&Local_3486, bParam0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3493, 0);
		PED::SET_PED_KEEP_TASK(Local_3493, 1);
	}
	func_206(&Local_3493, bParam0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3500))
	{
		PED::SET_PED_KEEP_TASK(Local_3500, 1);
	}
	func_206(&Local_3500, bParam0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3507.x, 0);
		PED::SET_PED_KEEP_TASK(Local_3507.x, 1);
	}
	func_206(&Local_3507, bParam0);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
	{
		PED::SET_PED_KEEP_TASK(Local_3514, 1);
	}
	func_206(&Local_3514, bParam0);
	if (GlobalFunc_4947(Local_3521))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3521, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3521, 1);
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3521, 0f);
		VEHICLE::SET_VEHICLE_STRONG(Local_3521, 0);
	}
	func_203(&Local_3521, bParam0);
	if (GlobalFunc_4947(Local_3528))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_3528, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3528, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3528, 1);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3528, 1);
	}
	func_203(&Local_3528, bParam0);
	if (GlobalFunc_4947(Local_3535))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3535, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3535, 1);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_3535, 1);
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3535, 0f);
	}
	func_203(&Local_3535, bParam0);
}

void func_203(int iParam0, bool bParam1)//Position - 0x1D405
{
	if (bParam1)
	{
		GlobalFunc_7089(iParam0);
	}
	else
	{
		GlobalFunc_131(iParam0);
	}
}



void func_206(int iParam0, bool bParam1)//Position - 0x1D4F4
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









void func_215(float fParam0)//Position - 0x1D6A4
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
	{
		TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "idle", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "dialog_pap", 3))
	{
		TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "dialog_pap", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_left_pap", 3))
	{
		TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "hurry_up_left_pap", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
	{
		TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "hurry_up_right_pap", fParam0);
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
	{
		TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, &Local_3597, fParam0);
	}
}


void func_217()//Position - 0x1D770
{
	GlobalFunc_846(&(Local_3493.f_2));
	GlobalFunc_846(&(Local_3528.f_2));
	GlobalFunc_846(&(Local_3507.f_2));
	GlobalFunc_846(&(Local_3535.f_2));
	GlobalFunc_846(&uLocal_3197);
}


void func_219()//Position - 0x1D7C3
{
	GlobalFunc_79(500, 1);
	GlobalFunc_9621(50, 1, 1);
	func_220(102, 1);
	func_634();
}

void func_220(int iParam0, bool bParam1)//Position - 0x1D7E6
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2365(&uVar1, GlobalFunc_8310());
	func_246();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}


























void func_246()//Position - 0x1EB58
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10915(iVar1, 14, iVar2))
				{
					func_247(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_247(int iParam0, int iParam1, int iParam2)//Position - 0x1EC19
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_247(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_247(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		func_249(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		func_249(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}


int func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1EE5E
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
		GlobalFunc_8308(iParam1);
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
			iVar7 = GlobalFunc_7980(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7980(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7980(iParam0, 2);
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
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_256(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_256(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar10, iVar0, GlobalFunc_11083(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 1))
							{
								func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_249(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_249(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_249(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_249(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_249(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10836(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_249(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_256(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_256(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_256(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_249(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11037(iParam0, iVar10, &iVar4, 0))
		{
			func_249(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11035(iParam0, iVar10, &iVar4))
		{
			func_249(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}







int func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1FF12
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_6669(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_6669(iParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7954(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7954(iParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7954(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7954(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11039(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7954(iParam0, 3, 176, 191) && !GlobalFunc_7954(iParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11039(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_6669(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_6669(iParam0, 11);
								iVar5 = GlobalFunc_11158(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_6669(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_6669(iParam0, 8);
								iVar8 = GlobalFunc_6669(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11158(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_6669(iParam0, 11);
								iVar0 = GlobalFunc_11158(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}











































































void func_331()//Position - 0x2C13A
{
	switch (iLocal_3078)
	{
		case 0:
			if (!bLocal_3184)
			{
				if (GlobalFunc_188())
				{
					if (GlobalFunc_115(Local_3521))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_3521, 1);
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
						{
							func_56(PLAYER::PLAYER_PED_ID(), &Local_3521, -1);
						}
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				iLocal_3078 = 2;
			}
			else
			{
				func_336();
				GlobalFunc_8316(1, 1, 0, 0);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				if (GlobalFunc_8027(1, 1093140480, 0))
				{
					if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_3253 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_3252 = PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
						bLocal_3194 = true;
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_3307, 0, 0, 0);
					if (GlobalFunc_115(Local_3542))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_3542))
						{
							ENTITY::DETACH_ENTITY(Local_3542, 1, 1);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3542, sLocal_3309, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_3486))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3486, sLocal_3308, 0, 0, 0);
					}
					if (GlobalFunc_115(Local_3521))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3521, sLocal_3311, 0, 0, 0);
					}
					RECORDING::_0x293220DA1B46CEBC(10f, 0f, 0);
					RECORDING::_0x48621C9FCA3EBD28(0);
					CUTSCENE::START_CUTSCENE(0);
					SYSTEM::WAIT(0);
					GlobalFunc_79(800, 0);
					func_333(Local_3670, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
					MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1493.301f, -198.5395f, 47.39753f, -1492.846f, -185.494f, 52.48193f, 6f, 1, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PEDS(Local_3670, 4f, 0);
					MISC::CLEAR_AREA(Local_3670, 4f, 1, 1, 0, 0);
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					CUTSCENE::_0x7F96F23FA9B73327(Local_3521.f_1);
					iLocal_3078 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_3521))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3307, 0))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, -1);
					}
					if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						if (bLocal_3194)
						{
							PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_3253, 1);
							PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), iLocal_3252);
							PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, iLocal_3252);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3311, 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3521);
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_3521, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (GlobalFunc_115(Local_3521))
				{
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_3521, 0);
				}
				iLocal_3078 = 2;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() >= 26500)
			{
				PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (bLocal_3184)
				{
					func_69(1, 1, 1, 1);
				}
				if (GlobalFunc_115(Local_3486))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3486, -1478.256f, -183.1669f, 47.8236f, 0, 0, 1);
					GlobalFunc_5721(&Local_3553, 1);
					GlobalFunc_5721(&Local_3542, 1);
					func_206(&Local_3486, 1);
				}
				if (GlobalFunc_115(Local_3521))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, -1);
					}
					VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_3521, 0);
				}
				GlobalFunc_52(1, 1);
				func_332(6);
			}
			break;
	}
}

void func_332(int iParam0)//Position - 0x2C472
{
	iLocal_3076 = iParam0;
	iLocal_3078 = 0;
}

void func_333(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2C483
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_9154(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_249(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_249(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_249(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_249(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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



void func_336()//Position - 0x2C688
{
	if (GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3670, 100f))
	{
		if (!GlobalFunc_2233())
		{
			CUTSCENE::REQUEST_CUTSCENE(&cLocal_3643, 8);
			func_90();
			iLocal_3195 = 1;
		}
	}
	else if (iLocal_3195)
	{
		if (!GlobalFunc_1986(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3670, 120f))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_3195 = 0;
				iLocal_3196 = 0;
			}
		}
		else
		{
			func_90();
		}
	}
	if (iLocal_3195)
	{
		if (iLocal_3196)
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_3195 = 0;
				iLocal_3196 = 0;
			}
		}
		if (GlobalFunc_2233())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_3195 = 0;
		}
	}
}



void func_339()//Position - 0x2C759
{
	func_80();
	func_336();
	switch (iLocal_3078)
	{
		case 0:
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_3486);
			}
			iLocal_3173 = 0;
			iLocal_3167 = 1;
			iLocal_3078 = 1;
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				fLocal_3204 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3486, 1));
				func_350();
				if (iLocal_3265 == 0)
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						iLocal_3078 = 2;
					}
				}
			}
			if (GlobalFunc_4947(Local_3528))
			{
				func_348();
			}
			func_342();
			func_341();
			break;
		
		case 2:
			if (GlobalFunc_663("PAP1_09", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PAP1_09");
			}
			GlobalFunc_4935();
			func_332(4);
			break;
	}
}


void func_341()//Position - 0x2C841
{
	if (!iLocal_3180)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3514))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3514, 0);
				if (ENTITY::GET_ENTITY_HEALTH(Local_3514) > 50)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_3514, 50);
				}
				PED::_0xEC4B4B3B9908052A(Local_3514, 30000f);
				iLocal_3180 = 1;
			}
		}
		else
		{
			iLocal_3180 = 1;
		}
	}
}

void func_342()//Position - 0x2C899
{
	int iVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
	{
		if (!bLocal_3178)
		{
			if (!iLocal_3176)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 3))
				{
					TASK::STOP_ANIM_TASK(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", -8f);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 3))
				{
					TASK::STOP_ANIM_TASK(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", -8f);
				}
				if (!PED::IS_PED_RAGDOLL(Local_3507.x))
				{
					TASK::CLEAR_PED_TASKS(Local_3507.x);
					PED::SET_PED_COMBAT_MOVEMENT(Local_3507.x, 3);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3507.x, 1, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3507.x, 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_3507.x, 64, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_3507.x, 5, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_3507.x, 17, 1);
					PED::SET_PED_CAN_BE_TARGETTED(Local_3507.x, 1);
					PED::SET_PED_AS_ENEMY(Local_3507.x, 1);
					if (ENTITY::GET_ENTITY_HEALTH(Local_3507.x) >= 137)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_3507.x, 136);
					}
					STREAMING::REQUEST_ANIM_DICT(&cLocal_3649);
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_3649))
					{
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_3507.x, 0, &cLocal_3649, "idle", 1090519040, 1);
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_3507.x, 1, &cLocal_3649, "walk", 1090519040, 1);
						PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_3507.x, 2, &cLocal_3649, "run", 1090519040, 1);
					}
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3507.x, 2f);
					TASK::TASK_REACT_AND_FLEE_PED(Local_3507.x, PLAYER::PLAYER_PED_ID());
					PED::SET_PED_KEEP_TASK(Local_3507.x, 1);
					iLocal_3221 = MISC::GET_GAME_TIMER();
					iLocal_3176 = 1;
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_3507.x, 2f);
				if (iLocal_3254 < 6)
				{
					if (GlobalFunc_775(Local_3507.x, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 25f))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_3507.x))
						{
							if (!PED::IS_PED_RAGDOLL(Local_3507.x))
							{
								iVar0 = 750;
								if (iLocal_3254 > 0)
								{
									MISC::GET_RANDOM_INT_IN_RANGE(2500, 4000);
								}
								if (GlobalFunc_2311(iLocal_3221, iVar0))
								{
									if (!iLocal_3177)
									{
										GlobalFunc_200(&uLocal_3321, 4);
										iLocal_3177 = 1;
									}
									func_343(&Local_3507, "PAP1_DQAA", "Paparazzo1RivalPap", 11);
									if (!PED::IS_PED_HEADTRACKING_PED(Local_3507.x, PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_3507.x, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
									}
									iLocal_3221 = MISC::GET_GAME_TIMER();
									iLocal_3254++;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_343(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2CA9F
{
	bool bVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(*iParam0))
	{
		bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(*iParam0);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*iParam0, 0);
		}
		GlobalFunc_6500(*iParam0, sParam1, sParam2, iParam3);
		if (bVar0)
		{
			AUDIO::STOP_PED_SPEAKING(*iParam0, 1);
		}
	}
}





void func_348()//Position - 0x2CD29
{
	if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3528, 120f))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Local_3528))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3493, 0);
			}
			func_206(&Local_3493, 1);
			func_206(&Local_3500, 1);
			func_203(&Local_3528, 1);
		}
	}
}


void func_350()//Position - 0x2CD99
{
	int iVar0;
	
	iVar0 = func_468();
	if (iVar0 != iLocal_3265)
	{
		func_465(iLocal_3265);
		iLocal_3265 = iVar0;
	}
	switch (iLocal_3265)
	{
		case 0:
			func_365();
			break;
		
		case 1:
			func_362();
			break;
		
		case 2:
			func_351();
			break;
	}
}

void func_351()//Position - 0x2CDEA
{
	float fVar0;
	
	if (!HUD::DOES_BLIP_EXIST(Local_3486.f_2))
	{
		Local_3486.f_2 = GlobalFunc_4955(Local_3486, 1, 1, 5);
	}
	if (!iLocal_3186)
	{
		if (func_360())
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_3486, GlobalFunc_468()))
			{
				if (!PED::IS_PED_RAGDOLL(Local_3486))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_3486);
				}
			}
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
			{
				TASK::CLEAR_PED_TASKS(Local_3486);
			}
			func_359(1);
			iLocal_3186 = 1;
		}
		else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(Local_3521);
			if (fVar0 < 1.75f && GlobalFunc_155(Local_3486, Local_3521, 8f))
			{
				if (!GlobalFunc_6964(Local_3486, -1794415470))
				{
					func_355();
				}
			}
			else if (GlobalFunc_6964(Local_3486, -1794415470))
			{
				if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
				{
					TASK::CLEAR_PED_TASKS(Local_3486);
				}
			}
			func_215(-1048576000);
			if ((iLocal_3076 == 1 || iLocal_3076 == 2) || iLocal_3076 == 3)
			{
				if (!GlobalFunc_6964(Local_3486, -1794415470))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_3486, 1.5f);
				}
				PED::SET_PED_RESET_FLAG(Local_3486, 237, 1);
			}
		}
	}
	else if (func_354())
	{
		TASK::CLEAR_PED_TASKS(Local_3486);
		func_84();
		if (!GlobalFunc_111())
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PRTB01", 7, GlobalFunc_4570(), 0, 0))
			{
			}
		}
		iLocal_3186 = 0;
	}
	else
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_3486, GlobalFunc_468()))
		{
			if (!PED::IS_PED_RAGDOLL(Local_3486))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_3486);
			}
		}
		if (!iLocal_3174)
		{
			GlobalFunc_164("PAP1_08", 7500, 1);
			iLocal_3174 = 1;
		}
		func_359(0);
		if (GlobalFunc_111())
		{
			iLocal_3224 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_3224) > 3000)
		{
			if (fLocal_3204 < 35f)
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_IG6", 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3224 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
	if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_3486))
	{
		TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3486, -1, 0, 2);
	}
	func_352();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486);
		PED::SET_PED_RESET_FLAG(Local_3486, 309, 1);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			TASK::STOP_ANIM_TASK(Local_3486, sLocal_3306, "cam_pos_hand_override", -1000f);
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			PED::RESET_PED_MOVEMENT_CLIPSET(Local_3486, 1048576000);
		}
	}
	else if (TASK::IS_PED_GETTING_UP(Local_3486) || PED::IS_PED_RAGDOLL(Local_3486))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 1000f, -1000f, -1, 49, 0, 0, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_3542))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3542, 0);
				}
			}
		}
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_3486, 1048576000);
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_3486, "cam_pos_hand_override", sLocal_3306, -8f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3542))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3542, 1);
				}
			}
		}
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
	}
}

void func_352()//Position - 0x2D18D
{
	if (((PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486) || PED::IS_PED_RAGDOLL(Local_3486)) || ENTITY::IS_ENTITY_IN_WATER(Local_3486)) || TASK::IS_PED_GETTING_UP(Local_3486))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, 3))
		{
			TASK::STOP_ANIM_TASK(Local_3486, &cLocal_3625, &cLocal_3631, -8f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
		{
			TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "idle", -8f);
		}
	}
}


int func_354()//Position - 0x2D227
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (fLocal_3204 > 8f)
	{
		return 0;
	}
	return 1;
}

void func_355()//Position - 0x2D26D
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	iVar1 = 131072;
	if (func_357(Local_3521, ENTITY::GET_ENTITY_COORDS(Local_3521, 0), ENTITY::GET_ENTITY_COORDS(Local_3486, 0)) == 1)
	{
		bVar0 = false;
		iVar1 = 262144;
	}
	if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_3486, Local_3521, 0, 1, bVar0))
	{
		STREAMING::REQUEST_CLIP_SET(func_356(bVar0));
		if (STREAMING::HAS_ANIM_SET_LOADED(func_356(bVar0)))
		{
			TASK::TASK_ENTER_VEHICLE(Local_3486, Local_3521, 20000, 0, 2f, iVar1, func_356(bVar0));
		}
	}
	else
	{
		if (bVar0)
		{
			bVar0 = false;
			iVar1 = 262144;
		}
		else
		{
			bVar0 = true;
			iVar1 = 131072;
		}
		if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(Local_3486, Local_3521, 0, 1, bVar0))
		{
			STREAMING::REQUEST_CLIP_SET(func_356(bVar0));
			if (STREAMING::HAS_ANIM_SET_LOADED(func_356(bVar0)))
			{
				TASK::TASK_ENTER_VEHICLE(Local_3486, Local_3521, 20000, 0, 2f, iVar1, func_356(bVar0));
			}
		}
	}
}

char* func_356(bool bParam0)//Position - 0x2D33D
{
	if (bParam0)
	{
		return "clipset@rcmpaparazzo1ig_1_ds";
	}
	return "clipset@rcmpaparazzo1ig_1_ps";
}

int func_357(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x2D355
{
	float fVar0;
	struct<3> Var1;
	
	Var1 = { GlobalFunc_107(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 3f, 0f, 0f) - Param1) };
	fVar0 = GlobalFunc_168(Param4 - Param1, Var1);
	if (fVar0 < 0f)
	{
		return 0;
	}
	else if (fVar0 > 0f)
	{
		return 1;
	}
	return -1;
}


void func_359(int iParam0)//Position - 0x2D3DF
{
	if (((!ENTITY::IS_ENTITY_IN_WATER(Local_3486) && !PED::IS_PED_RAGDOLL(Local_3486)) && !TASK::IS_PED_GETTING_UP(Local_3486)) && PED::IS_PED_ON_FOOT(Local_3486))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, 3))
		{
			if (!PED::IS_PED_FACING_PED(Local_3486, PLAYER::PLAYER_PED_ID(), 45f))
			{
				if (!GlobalFunc_6964(Local_3486, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1);
				}
			}
			else if (GlobalFunc_2311(iLocal_3242, 3000) || iParam0)
			{
				if (func_184(0, 1090519040, -1065353216, -1, 0, 0, 0, 0))
				{
					iLocal_3242 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_3242 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_360()//Position - 0x2D49A
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
	{
		return 1;
	}
	if (fLocal_3204 >= 20f)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}


void func_362()//Position - 0x2D534
{
	float fVar0;
	
	if (!HUD::DOES_BLIP_EXIST(Local_3521.f_2))
	{
		Local_3521.f_2 = GlobalFunc_5743(Local_3521, 1, 5);
	}
	if (!iLocal_3170)
	{
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, 1))
		{
		}
		else
		{
			GlobalFunc_164("PAP1_06", 7500, 1);
			iLocal_3170 = 1;
		}
	}
	else if (GlobalFunc_111())
	{
		iLocal_3223 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_3223) > 3000)
	{
		if (fLocal_3204 < 20f)
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_3076 == 1)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						if (func_189(&uLocal_3321, cLocal_3318, "PAP1_IG5", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3223 = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_FALL", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3223 = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CRASH", 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3223 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (!iLocal_3186)
	{
		if (func_360())
		{
			if (PED::IS_PED_GROUP_MEMBER(Local_3486, GlobalFunc_468()))
			{
				if (!PED::IS_PED_RAGDOLL(Local_3486))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_3486);
				}
			}
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
			{
				TASK::CLEAR_PED_TASKS(Local_3486);
			}
			func_359(1);
			iLocal_3186 = 1;
		}
		else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
		{
			if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, 1))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(Local_3521);
				if (fVar0 < 1.75f && GlobalFunc_155(Local_3486, Local_3521, 8f))
				{
					if (!GlobalFunc_6964(Local_3486, -1794415470))
					{
						func_355();
					}
				}
				else if (GlobalFunc_6964(Local_3486, -1794415470))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
					{
						TASK::CLEAR_PED_TASKS(Local_3486);
					}
				}
			}
			else if (GlobalFunc_6964(Local_3486, -1794415470))
			{
				TASK::CLEAR_PED_TASKS(Local_3486);
			}
			func_215(-1048576000);
			if ((iLocal_3076 == 1 || iLocal_3076 == 2) || iLocal_3076 == 3)
			{
				if (!GlobalFunc_6964(Local_3486, -1794415470))
				{
					if (!GlobalFunc_775(Local_3486, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 2f))
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_3486, 1.5f);
					}
				}
				PED::SET_PED_RESET_FLAG(Local_3486, 237, 1);
			}
		}
	}
	else if (func_354())
	{
		TASK::CLEAR_PED_TASKS(Local_3486);
		func_84();
		if (!GlobalFunc_111())
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PRTB01", 7, GlobalFunc_4570(), 0, 0))
			{
			}
		}
		iLocal_3186 = 0;
	}
	else
	{
		if (PED::IS_PED_IN_GROUP(Local_3486))
		{
			if (!PED::IS_PED_RAGDOLL(Local_3486))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_3486);
			}
		}
		func_359(0);
		if (GlobalFunc_111())
		{
			iLocal_3224 = MISC::GET_GAME_TIMER();
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_3224) > 3000)
		{
			if (fLocal_3204 < 30f)
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_IG6", 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3224 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	}
	GlobalFunc_502();
	if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_3486))
	{
		TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3486, -1, 0, 2);
	}
	func_352();
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
	{
		PED::SET_PED_RESET_FLAG(Local_3486, 309, 1);
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			TASK::STOP_ANIM_TASK(Local_3486, sLocal_3306, "cam_pos_hand_override", -1000f);
		}
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			PED::RESET_PED_MOVEMENT_CLIPSET(Local_3486, 1048576000);
		}
	}
	else if (TASK::IS_PED_GETTING_UP(Local_3486) || PED::IS_PED_RAGDOLL(Local_3486))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 1000f, -1000f, -1, 49, 0, 0, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_3542))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3542, 0);
				}
			}
		}
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_3486, 1048576000);
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_3486, "cam_pos_hand_override", sLocal_3306, -8f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3542))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3542, 1);
				}
			}
		}
		PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
	}
}



void func_365()//Position - 0x2DA8E
{
	var uVar0;
	int iVar8;
	int iVar9;
	int iVar10;
	
	switch (iLocal_3076)
	{
		case 1:
			if (!HUD::DOES_BLIP_EXIST(Local_3493.f_2))
			{
				Local_3493.f_2 = GlobalFunc_4955(Local_3493, 1, 1, 5);
				HUD::SET_BLIP_SCALE(Local_3493.f_2, 1f);
			}
			else
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3493))
				{
					HUD::SET_BLIP_SCALE(Local_3493.f_2, 1f);
				}
				GlobalFunc_2216(Local_3493.f_2, Local_3493, 225f, 0.68f, 0);
			}
			if (!iLocal_3154)
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
				{
					iLocal_3258 = MISC::GET_GAME_TIMER();
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
				else if (GlobalFunc_2311(iLocal_3258, 500))
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CHASE01", 7, 0, 0, 0))
					{
						iLocal_3142 = func_463(Local_3493);
						iLocal_3154 = 1;
					}
				}
			}
			else if (!iLocal_3171)
			{
				if (!GlobalFunc_111())
				{
					if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_3493))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3493, -1, 2, 2);
					}
					if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, Local_3493))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_3486, Local_3493, -1, 2, 2);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, &Local_3597, 3))
							{
								TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
						}
					}
					GlobalFunc_164("PAP1_01", 7500, 1);
					iLocal_3220 = MISC::GET_GAME_TIMER();
					iLocal_3171 = 1;
				}
				else
				{
					if (!iLocal_3142)
					{
						if (func_463(Local_3493))
						{
							iLocal_3142 = 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
						{
							if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, &Local_3597, 3))
							{
								TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
						}
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				}
			}
			else
			{
				func_452();
				func_449();
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_3493))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3493, -1, 2, 2);
				}
			}
			break;
		
		case 2:
			if (!HUD::DOES_BLIP_EXIST(Local_3493.f_2))
			{
				Local_3493.f_2 = GlobalFunc_4955(Local_3493, 1, 1, 5);
				HUD::SET_BLIP_SCALE(Local_3493.f_2, 1f);
			}
			else
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3493))
				{
					HUD::SET_BLIP_SCALE(Local_3493.f_2, 1f);
				}
				GlobalFunc_2216(Local_3493.f_2, Local_3493, 225f, 0.68f, 0);
			}
			if (!iLocal_3158[0])
			{
				if (fLocal_3215 > 1000f)
				{
					if (fLocal_3205 < 120f)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RP1", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3158[0] = 1;
						}
					}
				}
			}
			else if (!iLocal_3158[1])
			{
				if (!func_448("PAP1_RP1"))
				{
					if (fLocal_3215 > 1000f)
					{
						if (fLocal_3205 < 120f)
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_4956();
							}
							if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RP2", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(4f, 10f, 0);
								iLocal_3158[1] = 1;
							}
						}
					}
				}
			}
			else
			{
				MemCopy(&uVar0, {GlobalFunc_560()}, 8);
				if ((!iLocal_3141 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && MISC::ARE_STRINGS_EQUAL(&uVar0, "PAP1_RP2"))
				{
					if (func_463(Local_3507.x))
					{
						iLocal_3141 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
					{
						if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, &Local_3597, 3))
						{
							TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -4f, -1, 17, 0, 0, 0, 0);
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -4f, -1, 17, 0, 0, 0, 0);
					}
				}
				if (!GlobalFunc_111())
				{
					iLocal_3078 = 2;
				}
			}
			if (GlobalFunc_115(Local_3507.x))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_3507.x))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3507.x, -1, 2, 2);
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, Local_3507.x))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_3486, Local_3507.x, -1, 2, 2);
				}
			}
			break;
		
		case 3:
			if (!bLocal_3175)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_4947(Local_3535))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3535, 1);
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3514, Local_3535))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3514, 1);
							PED::SET_PED_CAN_BE_TARGETTED(Local_3514, 1);
							PED::SET_PED_AS_ENEMY(Local_3514, 1);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_3514, 1, 0);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3514, 3);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 61, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(Local_3514, 2, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_3514, 17, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_3514, 6, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_3514, 13, 0);
						}
						if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3507.x, Local_3535))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3507.x, 1);
							PED::SET_PED_CAN_BE_TARGETTED(Local_3507.x, 1);
							PED::SET_PED_AS_ENEMY(Local_3507.x, 1);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_3507.x, 1, 0);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 3);
						}
					}
					if (!GlobalFunc_188() && bLocal_3184)
					{
						func_79(2);
					}
					GlobalFunc_164("PAP1_03", 7500, 1);
					GlobalFunc_159("PAP1_H1", -1);
					GlobalFunc_Checkpoint5(1, "Stop the rival paparazzi", 0, 0, 0, 1);
					Global_Mission_Fail_State.f_12[0] = iLocal_3228;
					bLocal_3175 = true;
				}
			}
			else
			{
				func_379(Local_3486, Local_3535, 0);
				if (!iLocal_3158[2])
				{
					if ((fLocal_3202 < fLocal_3205 && GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Local_3507.x, 90f))
					{
						if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CONT", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3158[2] = 1;
						}
					}
					else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RPAP02", 7, 0, 0, 0))
					{
						iLocal_3158[2] = 1;
					}
				}
				else
				{
					if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						if (!iLocal_3183)
						{
							if (!GlobalFunc_74("PAP1_H1"))
							{
								STATS::STAT_GET_INT(joaat("sp1_special_ability"), &iVar8, -1);
								if (iVar8 > 0)
								{
									if (fLocal_3205 < 60f)
									{
										if (PAD::_IS_USING_KEYBOARD(0))
										{
											GlobalFunc_159("PAP1_H2_KM", -1);
										}
										else
										{
											GlobalFunc_159("PAP1_H2", -1);
										}
										iLocal_3183 = 1;
									}
								}
							}
						}
					}
					else
					{
						GlobalFunc_5716("PAP1_H2", 1);
						if (MISC::IS_PC_VERSION())
						{
							GlobalFunc_5716("PAP1_H2_KM", 1);
						}
						iLocal_3183 = 1;
					}
					func_374();
				}
			}
			if (bLocal_3175)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_3507.f_2))
				{
					Local_3507.f_2 = GlobalFunc_4955(Local_3507.x, 1, 0, 5);
					if (HUD::DOES_BLIP_EXIST(Local_3507.f_2))
					{
						HUD::SET_BLIP_SCALE(Local_3507.f_2, 1f);
					}
				}
				else
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3507.x))
					{
						HUD::SET_BLIP_SCALE(Local_3507.f_2, 1f);
					}
					GlobalFunc_2216(Local_3507.f_2, Local_3507.x, 220f, 0.65f, 0);
				}
				GlobalFunc_846(&(Local_3493.f_2));
			}
			else if (!HUD::DOES_BLIP_EXIST(Local_3493.f_2))
			{
				Local_3493.f_2 = GlobalFunc_4955(Local_3493, 1, 1, 5);
				if (HUD::DOES_BLIP_EXIST(Local_3493.f_2))
				{
					HUD::SET_BLIP_SCALE(Local_3493.f_2, 1f);
				}
			}
			else
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3493))
				{
					HUD::SET_BLIP_SCALE(Local_3493.f_2, 1f);
				}
				GlobalFunc_2216(Local_3493.f_2, Local_3493, 225f, 0.68f, 0);
			}
			if (GlobalFunc_115(Local_3507.x))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Local_3507.x))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3507.x, -1, 2, 2);
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, Local_3507.x))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_3486, Local_3507.x, -1, 2, 2);
				}
			}
			break;
		
		case 4:
			if (!iLocal_3157)
			{
				if (func_373())
				{
					iLocal_3157 = 1;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_3197))
				{
					uLocal_3197 = GlobalFunc_2324(Local_3670, 5, 1);
					Local_3719 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					GlobalFunc_5573(Local_3719, Local_3670, &Local_3713, &Local_3716, 1000);
				}
				else if (!GlobalFunc_537(Local_3719, 0f, 0f, 0f, 1056964608))
				{
					GlobalFunc_5573(Local_3719, Local_3670, &Local_3713, &Local_3716, 1000);
					if (GlobalFunc_1992(Local_3713, Local_3716))
					{
						Local_3719 = { 0f, 0f, 0f };
					}
				}
				if (!iLocal_3181)
				{
					if (!GlobalFunc_111())
					{
						iLocal_3181 = 1;
					}
				}
				else if (!iLocal_3169)
				{
					GlobalFunc_164("PAP1_05", 7500, 1);
					iLocal_3169 = 1;
				}
				else
				{
					func_366();
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, sLocal_3315, 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, sLocal_3315, 3))
				{
					TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, sLocal_3315, -4f);
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			else if (GlobalFunc_111())
			{
				iVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "dialog_pap", 2f, -2f, -1, 17, iVar9, 0, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 2f, -2f, -1, 17, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			break;
		
		case 7:
			if (!iLocal_3157)
			{
				if (func_373())
				{
					iLocal_3157 = 1;
				}
			}
			else if (!iLocal_3181)
			{
				if (!GlobalFunc_111())
				{
					iLocal_3181 = 1;
				}
			}
			else if (!iLocal_3156)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_LTC01", 7, 0, 0, 0))
				{
					iLocal_3156 = 1;
				}
			}
			else if (!func_448("PAP1_LTC01"))
			{
				if (!iLocal_3173)
				{
					GlobalFunc_164("PAP1_09", 7500, 1);
					iLocal_3222 = MISC::GET_GAME_TIMER();
					iLocal_3173 = 1;
				}
				else if (GlobalFunc_111())
				{
					iLocal_3222 = MISC::GET_GAME_TIMER();
				}
				else if (!iLocal_3167)
				{
					if (fLocal_3204 < 20f)
					{
						if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RESP", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3222 = MISC::GET_GAME_TIMER();
							iLocal_3167 = 1;
						}
					}
					else
					{
						iLocal_3167 = 1;
					}
				}
				else if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
				{
					if (!GlobalFunc_111())
					{
						if (func_189(&uLocal_3321, cLocal_3318, "PAP1_HITPED", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3222 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_3222) > 10000 && fLocal_3204 < 20f)
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_LTC02", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3222 = MISC::GET_GAME_TIMER();
						iLocal_3167 = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, sLocal_3315, 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, sLocal_3315, 3))
				{
					TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, sLocal_3315, -4f);
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			else if (GlobalFunc_111())
			{
				iVar10 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "dialog_pap", 2f, -2f, -1, 17, iVar10, 0, 0, 0);
				}
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "dialog_pap", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 2f, -2f, -1, 17, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			break;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_3542))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_3542, 1);
				}
			}
		}
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486);
		PED::SET_PED_RESET_FLAG(Local_3486, 309, 1);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
		{
			TASK::STOP_ANIM_TASK(Local_3486, sLocal_3306, "cam_pos_hand_override", -1000f);
		}
	}
}

void func_366()//Position - 0x2E6CA
{
	if (!iLocal_3151)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_3189)
			{
				if (func_367(&uLocal_3321, cLocal_3318, "PAP1_DROP", &Local_3613, 7, 0, 0))
				{
					iLocal_3189 = 0;
					iLocal_3151 = 1;
				}
			}
			else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_DROP", 7, 0, 0, 0))
			{
				iLocal_3151 = 1;
			}
		}
	}
	else if (!iLocal_3152)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_3189)
			{
				if (iLocal_3228 == -1)
				{
					if (func_367(&uLocal_3321, cLocal_3318, "PAP1_DOFF05", &Local_3613, 7, 0, 0))
					{
						iLocal_3189 = 0;
						iLocal_3152 = 1;
					}
				}
				else if (func_367(&uLocal_3321, cLocal_3318, "PAP1_DOFF04", &Local_3613, 7, 0, 0))
				{
					iLocal_3189 = 0;
					iLocal_3152 = 1;
				}
			}
			else if (iLocal_3228 == -1)
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_DOFF05", 7, 0, 0, 0))
				{
					iLocal_3152 = 1;
				}
			}
			else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_DOFF04", 7, 0, 0, 0))
			{
				iLocal_3152 = 1;
			}
		}
	}
	else if (!iLocal_3153)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_3189)
			{
				if (func_367(&uLocal_3321, cLocal_3318, "PAP1_DOFF02", &Local_3613, 7, 0, 0))
				{
					iLocal_3189 = 0;
					iLocal_3153 = 1;
				}
			}
			else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_DOFF02", 7, 0, 0, 0))
			{
				iLocal_3153 = 1;
			}
		}
	}
	else if (GlobalFunc_111())
	{
		iLocal_3225 = MISC::GET_GAME_TIMER();
	}
	else
	{
		if (!iLocal_3165)
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3521))
			{
				if (GlobalFunc_2311(iLocal_3247, 500))
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PPW1", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3165 = 1;
						iLocal_3167 = 1;
						iLocal_3225 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				iLocal_3247 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!func_448("PAP1_PPW1") && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3521))
		{
			iLocal_3165 = 0;
			iLocal_3247 = MISC::GET_GAME_TIMER();
		}
		if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
		{
			if (!GlobalFunc_111())
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_HITPED", 7, GlobalFunc_4570(), 0, 0))
				{
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_3225) > (10000 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2500)) && fLocal_3204 < 20f)
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_DOFF03", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_3225 = MISC::GET_GAME_TIMER();
			}
		}
		if (!func_448("PAP1_CRASH"))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_3521))
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CRASH", 7, GlobalFunc_4570(), 0, 0))
				{
				}
			}
		}
	}
}

int func_367(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2E95E
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
	if (GlobalFunc_10626(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}






int func_373()//Position - 0x2EB4F
{
	if (iLocal_3189)
	{
		if (func_367(&uLocal_3321, cLocal_3318, &Local_3637, &Local_3613, 7, 0, 0))
		{
			iLocal_3189 = 0;
			return 1;
		}
	}
	else if (!func_448("PAP1_PUNCH"))
	{
		if (iLocal_3259 != 4)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
			{
				iLocal_3191 = 0;
			}
			if (iLocal_3191)
			{
				StringCopy(&Local_3637, "PAP1_URP03", 24);
				if (func_189(&uLocal_3321, cLocal_3318, &Local_3637, 7, 0, 0, 0))
				{
					return 1;
				}
			}
			else
			{
				StringCopy(&Local_3637, "PAP1_URP02", 24);
				if (func_189(&uLocal_3321, cLocal_3318, &Local_3637, 7, 0, 0, 0))
				{
					return 1;
				}
			}
		}
		else if (iLocal_3228 == -1)
		{
			StringCopy(&Local_3637, "PAP1_URP01", 24);
			if (func_189(&uLocal_3321, cLocal_3318, &Local_3637, 7, 0, 0, 0))
			{
				return 1;
			}
		}
		else
		{
			StringCopy(&Local_3637, "PAP1_RPAP04", 24);
			if (func_189(&uLocal_3321, cLocal_3318, &Local_3637, 7, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_374()//Position - 0x2EC3F
{
	if (!iLocal_3164)
	{
		if (func_448("PAP1_PUNCH") || func_448("PAP1_RPAP05"))
		{
			iLocal_3164 = 1;
		}
		else
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PUNCH", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_3164 = 1;
			}
		}
	}
	if (!iLocal_3163)
	{
		if (!func_448("PAP1_PUNCH"))
		{
			if (func_448("PAP1_RPAP05"))
			{
				iLocal_3163 = 1;
			}
			else
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				if (!iLocal_3163)
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RPAP05", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3163 = 1;
					}
				}
			}
		}
	}
	if (!iLocal_3165)
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3521))
		{
			if (GlobalFunc_2311(iLocal_3247, 500))
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PPW1", 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3165 = 1;
					iLocal_3167 = 1;
					iLocal_3225 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			iLocal_3247 = MISC::GET_GAME_TIMER();
		}
	}
	else if (!func_448("PAP1_PPW1") && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3521))
	{
		iLocal_3165 = 0;
		iLocal_3247 = MISC::GET_GAME_TIMER();
	}
	if (!func_448("PAP1_CRASH"))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_3521))
		{
			if (GlobalFunc_4947(Local_3535) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_3535, Local_3521))
			{
				if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CRASH", 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3167 = 0;
				}
			}
		}
	}
	if (GlobalFunc_111())
	{
		iLocal_3221 = MISC::GET_GAME_TIMER();
	}
	else if (!iLocal_3167)
	{
		if (fLocal_3204 < 20f)
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RESP", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_3221 = MISC::GET_GAME_TIMER();
				iLocal_3167 = 1;
			}
		}
		else
		{
			iLocal_3167 = 1;
		}
	}
	else if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
	{
		if (!GlobalFunc_111())
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_HITPED", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_3221 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() - iLocal_3221) > (3000 + MISC::GET_RANDOM_INT_IN_RANGE(1, 2500))
	{
		if (fLocal_3205 < 12f)
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RIVAL", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_3221 = MISC::GET_GAME_TIMER();
			}
		}
		else if (fLocal_3205 < 25f)
		{
			if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RPAP08", 7, GlobalFunc_4570(), 0, 0))
			{
				iLocal_3221 = MISC::GET_GAME_TIMER();
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					iLocal_3167 = 0;
				}
			}
		}
		else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RPAP07", 7, GlobalFunc_4570(), 0, 0))
		{
			iLocal_3221 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_115(Local_3507.x))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
				{
					func_375(Local_3507.x);
				}
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iLocal_3167 = 0;
			}
		}
	}
}

void func_375(int iParam0)//Position - 0x2EF18
{
	int iVar0;
	char* sVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		if (GlobalFunc_115(iParam0))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_left_pap", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
			{
				if (GlobalFunc_171(Local_3486, iParam0, 85f))
				{
					iVar0 = func_357(Local_3521, ENTITY::GET_ENTITY_COORDS(Local_3521, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
					if (iVar0 == 1)
					{
						sVar1 = "hurry_up_right_pap";
					}
					else
					{
						sVar1 = "hurry_up_left_pap";
					}
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, sVar1, 4f, -2f, -1, 18, 0, 0, 0, 0);
				}
			}
		}
	}
}




void func_379(int iParam0, int iParam1, int iParam2)//Position - 0x2F023
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	struct<3> Var17;
	
	if (!func_387(iParam0))
	{
		iLocal_3259 = 0;
	}
	else if (GlobalFunc_4947(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		switch (iLocal_3259)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sLocal_3305, "idle", 3))
				{
					bVar7 = true;
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_left_pap", 3))
					{
						if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, "hurry_up_left_pap", 3))
						{
							bVar7 = false;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
					{
						if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
						{
							bVar7 = false;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
					{
						if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, &Local_3597, 3))
						{
							bVar7 = false;
						}
					}
					if (bVar7)
					{
						TASK::TASK_PLAY_ANIM(iParam0, sLocal_3305, "idle", 8f, -8f, -1, 17, 0, 0, 0, 0);
					}
				}
				iLocal_3230 = func_357(iParam1, Var3, Var0);
				if (func_386(iParam0, iParam1, 0.4f, &bLocal_3140))
				{
					if (bLocal_3140)
					{
						if (iLocal_3230 == 1)
						{
							iLocal_3229 = 0;
						}
						else if (iLocal_3230 == 0)
						{
							iLocal_3229 = 1;
						}
					}
					else
					{
						iLocal_3229 = iLocal_3230;
					}
					if (iLocal_3230 == -1)
					{
						return;
					}
					switch (iLocal_3229)
					{
						case 0:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
							{
								sLocal_3315 = "atk_punch_left_pap";
								fLocal_3211 = 1f;
								fLocal_3207 = 0.21f;
								fLocal_3206 = 0.4f;
								fLocal_3208 = 0.2f;
								fLocal_3209 = 1600f;
							}
							else
							{
								sLocal_3315 = "atk_swipe_left_pap";
								fLocal_3211 = 1f;
								fLocal_3207 = 0.235f;
								fLocal_3206 = 0.38f;
								fLocal_3208 = 0.25f;
								fLocal_3209 = 1933.333f;
							}
							break;
						
						case 1:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
							{
								sLocal_3315 = "atk_punch_right_pap";
								fLocal_3211 = 1f;
								fLocal_3207 = 0.27f;
								fLocal_3206 = 0.45f;
								fLocal_3208 = 0.25f;
								fLocal_3209 = 1366.667f;
							}
							else
							{
								sLocal_3315 = "atk_swipe_right_pap";
								fLocal_3211 = 1f;
								fLocal_3207 = 0.24f;
								fLocal_3206 = 0.38f;
								fLocal_3208 = 0.25f;
								fLocal_3209 = 1800f;
							}
							break;
						
						default:
							break;
					}
					fVar6 = func_385(fLocal_3207, fLocal_3209, fLocal_3211);
					fVar6 = (fVar6 / 1000f);
					if (func_384(iParam0, Var0, iParam1, Var3, fVar6))
					{
						fLocal_3213 = fLocal_3211;
						TASK::TASK_PLAY_ANIM(iParam0, sLocal_3305, sLocal_3315, 16f, -8f, -1, 50, 0, 0, 0, 0);
						iLocal_3164 = 0;
						iLocal_3182 = 0;
						iLocal_3259 = 2;
					}
					else
					{
						iLocal_3164 = 1;
					}
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sLocal_3305, sLocal_3315, 3))
				{
					bLocal_3190 = true;
					iLocal_3163 = 0;
					iLocal_3259 = 0;
				}
				else if (ENTITY::HAS_ENTITY_ANIM_FINISHED(iParam0, sLocal_3305, sLocal_3315, 3))
				{
					iLocal_3163 = 0;
					bLocal_3190 = true;
					iLocal_3259 = 0;
				}
				else
				{
					fVar8 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sLocal_3305, sLocal_3315);
					if (fVar8 >= 0f && fVar8 <= 1f)
					{
						fVar9 = ((fLocal_3207 + fLocal_3206) / 2f);
						if (fVar8 < fLocal_3206)
						{
							fVar10 = (fVar9 - fVar8);
							if (fVar8 > fVar9)
							{
								fVar10 = MISC::ABSF(fVar10);
							}
							fVar6 = func_385(fVar10, fLocal_3209, fLocal_3213);
							fVar11 = func_382(iParam0, Var0, iParam1, Var3, fVar6);
							if (fVar8 > fVar9)
							{
								if (fVar11 < 0f)
								{
									fVar11 = 1f;
								}
								else if (fVar11 > 0f)
								{
									fVar11 = -1f;
								}
							}
							if (fVar11 < 0f)
							{
								fVar12 = (fLocal_3213 * 0.9f);
							}
							else if (fVar11 > 0f)
							{
								fVar12 = (fLocal_3213 * 1.1f);
							}
							else
							{
								fVar12 = fLocal_3213;
							}
							if (fVar12 < (fLocal_3211 + 0.4f) && fVar12 > (fLocal_3211 - 0.4f))
							{
								fLocal_3213 = fVar12;
							}
						}
					}
					ENTITY::SET_ENTITY_ANIM_SPEED(iParam0, sLocal_3305, sLocal_3315, fLocal_3213);
					if (!iLocal_3182)
					{
						if (fVar8 >= fLocal_3208)
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PAPARAZZO_01_A", 0))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_3237, "SWING", Local_3486, sLocal_3319, 0, 0);
							}
							iLocal_3182 = 1;
						}
					}
					if (fVar8 >= fLocal_3207 && fVar8 <= fLocal_3206)
					{
						if (func_381(iParam0, Local_3521, iParam1, 1, iParam2))
						{
							if (func_386(iParam0, iParam1, 0.5f, &iVar13))
							{
								if (bLocal_3140 == iVar13)
								{
									iLocal_3259 = 3;
								}
							}
						}
					}
				}
				break;
			
			case 3:
				Var17 = { 0f, 0.21f, 0f };
				switch (iLocal_3230)
				{
					case 0:
						if (bLocal_3140)
						{
							Var14 = { 2f, 0f, -4f };
						}
						else
						{
							Var14 = { -2f, 0f, -4f };
						}
						break;
					
					case 1:
						if (bLocal_3140)
						{
							Var14 = { 2f, 0f, -4f };
						}
						else
						{
							Var14 = { -2f, 0f, -4f };
						}
						break;
					
					default:
						break;
				}
				if (PED::IS_PED_ON_ANY_BIKE(Local_3507.x))
				{
					if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3507.x))
					{
						PED::KNOCK_PED_OFF_VEHICLE(Local_3507.x);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_3507.x, 1, Var14, Var17, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_3507.x, 20), 1, 1, 1, 0, 1);
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
				{
					if (PED::IS_PED_ON_ANY_BIKE(Local_3514))
					{
						if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3514))
						{
							PED::KNOCK_PED_OFF_VEHICLE(Local_3514);
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_3514, 1, Var14, Var17, PED::GET_PED_RAGDOLL_BONE_INDEX(Local_3514, 20), 1, 1, 1, 0, 1);
						}
					}
				}
				if (!bLocal_3190)
				{
					GlobalFunc_553(798);
				}
				iLocal_3259 = 4;
				break;
			
			case 4:
				break;
			}
	}
}


int func_381(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2F5E4
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	
	if (!GlobalFunc_115(iParam0))
	{
		return 0;
	}
	if (!GlobalFunc_115(iParam1))
	{
		return 0;
	}
	if (!GlobalFunc_115(iParam2))
	{
		return 0;
	}
	if (iLocal_3229 == 1)
	{
		Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 60309, 0f, 0f, 0f) };
		Var3 = { PED::GET_PED_BONE_COORDS(iParam0, 61163, 0f, 0f, 0f) };
	}
	else if (iLocal_3229 == 0)
	{
		Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 28422, 0f, 0f, 0f) };
		Var3 = { PED::GET_PED_BONE_COORDS(iParam0, 28252, 0f, 0f, 0f) };
	}
	else
	{
		return 0;
	}
	Var9 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
	fVar12 = MISC::GET_FRAME_TIME();
	Var13 = { Var9 * Vector(fVar12, fVar12, fVar12) };
	Var0 = { Var0 + Var13 };
	Var3 = { Var3 + Var13 };
	fVar25 = 0.425f;
	fVar26 = 0.08f;
	fVar27 = 0.08f;
	fVar28 = 0.8f;
	Var16 = { 0f, 0.15f, 0.4f };
	Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Var16) };
	fVar24 = 0.6f;
	fVar22 = (Var19.f_2 + fVar24);
	fVar23 = Var19.f_2;
	if (GlobalFunc_115(iParam4))
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam4, 1) };
		Var6 = { Var6 + Var13 };
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var19, 0) < (fVar25 + fVar26))
	{
		if (Var0.f_2 <= fVar22)
		{
			if (Var0.f_2 >= fVar23)
			{
				return 1;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var19, 0) < (fVar25 + fVar27))
	{
		if (Var3.f_2 <= fVar22)
		{
			if (Var3.f_2 >= fVar23)
			{
				return 1;
			}
		}
	}
	if (GlobalFunc_115(iParam4))
	{
		if (GlobalFunc_775(iParam4, Var19, (fVar25 + fVar28)))
		{
			if (Var6.f_2 <= fVar22)
			{
				if (Var6.f_2 >= fVar23)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		Var16 = { 0f, -0.55f, 0.45f };
		Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Var16) };
		fVar24 = 0.85f;
		fVar22 = (Var19.f_2 + fVar24);
		fVar23 = Var19.f_2;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var19, 0) < (fVar25 + fVar26))
		{
			if (Var0.f_2 <= fVar22)
			{
				if (Var0.f_2 >= fVar23)
				{
					return 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var19, 0) < (fVar25 + fVar27))
		{
			if (Var3.f_2 <= fVar22)
			{
				if (Var3.f_2 >= fVar23)
				{
					return 1;
				}
			}
		}
		if (GlobalFunc_115(iParam4))
		{
			if (GlobalFunc_775(iParam4, Var19, (fVar25 + fVar28)))
			{
				if (Var6.f_2 <= fVar22)
				{
					if (Var6.f_2 >= fVar23)
					{
						return 1;
					}
				}
			}
		}
		Var16 = { 0f, -0.35f, 0.42f };
		Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Var16) };
		fVar24 = 0.85f;
		fVar22 = (Var19.f_2 + fVar24);
		fVar23 = Var19.f_2;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var19, 0) < (fVar25 + fVar26))
		{
			if (Var0.f_2 <= fVar22)
			{
				if (Var0.f_2 >= fVar23)
				{
					return 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var19, 0) < (fVar25 + fVar27))
		{
			if (Var3.f_2 <= fVar22)
			{
				if (Var3.f_2 >= fVar23)
				{
					return 1;
				}
			}
		}
		if (GlobalFunc_115(iParam4))
		{
			if (GlobalFunc_775(iParam4, Var19, (fVar25 + fVar28)))
			{
				if (Var6.f_2 <= fVar22)
				{
					if (Var6.f_2 >= fVar23)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_382(int iParam0, struct<3> Param1, int iParam4, struct<3> Param5, float fParam8)//Position - 0x2F92F
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	Var0 = { Param5 + ENTITY::GET_ENTITY_VELOCITY(iParam4) * Vector(fParam8, fParam8, fParam8) };
	Var3 = { Param1 + ENTITY::GET_ENTITY_VELOCITY(iParam0) * Vector(fParam8, fParam8, fParam8) };
	Var6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam4) };
	return func_383(Var6, Var0, Var3, bLocal_3140);
}

float func_383(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9)//Position - 0x2F97A
{
	float fVar0;
	
	fVar0 = GlobalFunc_168(Param6 - Param3, Param0);
	if (fVar0 < 0f)
	{
		if (bParam9)
		{
			return MISC::ABSF(fVar0);
		}
		else
		{
			return fVar0;
		}
	}
	else if (fVar0 > 0f)
	{
		if (bParam9)
		{
			return (fVar0 * -1f);
		}
		else
		{
			return fVar0;
		}
	}
	return 0f;
}

int func_384(int iParam0, struct<3> Param1, int iParam4, struct<3> Param5, float fParam8)//Position - 0x2F9D1
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	var uVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	
	Var0 = { Param5 + ENTITY::GET_ENTITY_VELOCITY(iParam4) * Vector(fParam8, fParam8, fParam8) };
	Var3 = { Param1 + ENTITY::GET_ENTITY_VELOCITY(iParam0) * Vector(fParam8, fParam8, fParam8) };
	fVar6 = ENTITY::GET_ENTITY_HEADING(iParam4);
	Var7 = { Local_3679[iLocal_3230 /*3*/] };
	Var10 = { Local_3686[iLocal_3230 /*3*/] };
	fVar13 = (Local_3679[iLocal_3230 /*3*/] / 2f);
	uVar14 = Local_3679[iLocal_3230 /*3*/].f_1;
	Var15 = { fVar13, uVar14, 0f };
	Var18 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param5, fVar6, Var15) };
	Var21 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam4) };
	fVar24 = func_383(Var21, Var18, Param1, bLocal_3140);
	if (fVar24 < ((fLocal_3210 / 2f) * -1f))
	{
		fVar25 = Var7.x;
		if (iLocal_3230 == 0)
		{
			fVar25 = MISC::ABSF(fVar25);
		}
		fVar24 = MISC::ABSF(fVar24);
		fVar25 = (fVar25 + ((fVar24 / fLocal_3212) * SYSTEM::TIMESTEP()));
		if (fVar25 > 7f)
		{
			fVar25 = 7f;
		}
		if (iLocal_3230 == 0)
		{
			fVar25 = (fVar25 * -1f);
		}
		Var7.x = fVar25;
	}
	Local_3676 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, Var10) };
	Local_3673 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, Var7) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, Local_3676, Local_3673, fLocal_3210, 0, 0))
	{
		return 1;
	}
	return 0;
}

float func_385(float fParam0, float fParam1, float fParam2)//Position - 0x2FB0D
{
	if (fParam0 < 0f || fParam0 > 1f)
	{
	}
	if (fParam2 < 0f)
	{
	}
	return ((fParam0 * fParam1) * fParam2);
}

int func_386(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x2FB35
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	
	fVar7 = 1f;
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) };
	fVar6 = GlobalFunc_168(Var0, Var3);
	if (fVar6 > 0f)
	{
		*iParam3 = 0;
	}
	else
	{
		*iParam3 = 1;
		fVar6 = MISC::ABSF(fVar6);
	}
	if (fVar6 > fParam2 && fVar6 < fVar7)
	{
		if (!*iParam3)
		{
		}
		return 1;
	}
	return 0;
}

int func_387(int iParam0)//Position - 0x2FB9A
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (GlobalFunc_116(0))
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_ANY_BIKE(iParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}





























































int func_448(char* sParam0)//Position - 0x34725
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, sParam0))
		{
			return 1;
		}
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
		{
			return 1;
		}
	}
	return 0;
}

void func_449()//Position - 0x3475B
{
	struct<2> Var0;
	struct<3> Var4;
	int iVar7;
	struct<3> Var8;
	
	if (iLocal_3262 == 4)
	{
		if (!iLocal_3144[iLocal_3228])
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_5105();
			}
			else if (!iLocal_3144[iLocal_3228])
			{
				if (iLocal_3228 < 5)
				{
					StringCopy(&Var0, "PAP1_SNAP", 16);
					switch (iLocal_3228)
					{
						case 0:
							StringConCat(&Var0, "01", 16);
							break;
						
						case 1:
							StringConCat(&Var0, "02", 16);
							break;
						
						case 2:
							StringConCat(&Var0, "05", 16);
							break;
						
						case 3:
							StringConCat(&Var0, "03", 16);
							break;
						
						case 4:
							StringConCat(&Var0, "04", 16);
							break;
					}
					if (func_189(&uLocal_3321, cLocal_3318, &Var0, 7, 0, 0, 0))
					{
						iLocal_3144[iLocal_3228] = 1;
					}
				}
				else
				{
					iLocal_3144[iLocal_3228] = 1;
				}
				iLocal_3167 = 1;
			}
		}
		iLocal_3220 = MISC::GET_GAME_TIMER();
	}
	else if (iLocal_3262 != 2)
	{
		if (!iLocal_3165)
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3521))
			{
				if (GlobalFunc_2311(iLocal_3247, 500))
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PPW1", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3167 = 1;
						iLocal_3165 = 1;
					}
				}
			}
			else
			{
				iLocal_3247 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!func_448("PAP1_PPW1") && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_3521))
		{
			iLocal_3247 = MISC::GET_GAME_TIMER();
			iLocal_3165 = 0;
		}
		if (!func_448("PAP1_CRASH") && !func_448("PAP1_CHASE02"))
		{
			if (!GlobalFunc_111())
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_3521))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_3528, Local_3521))
					{
						if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CHASE02", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3167 = 0;
						}
					}
					else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CRASH", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3167 = 0;
					}
				}
			}
		}
		if (GlobalFunc_111())
		{
			iLocal_3220 = MISC::GET_GAME_TIMER();
		}
		else if (iLocal_3262 == 0)
		{
			if (!iLocal_3167)
			{
				if (fLocal_3204 < 20f)
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_RESP", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3220 = MISC::GET_GAME_TIMER();
						iLocal_3167 = 1;
					}
				}
				else
				{
					iLocal_3167 = 1;
				}
			}
			else if (PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) >= 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_PED(PLAYER::PLAYER_ID()) < 500)
			{
				if (!GlobalFunc_111())
				{
					if (func_189(&uLocal_3321, cLocal_3318, "PAP1_HITPED", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3220 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (GlobalFunc_2311(iLocal_3220, 3000))
			{
				Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_3528, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				if (Var4.f_1 < 2f)
				{
					if (fLocal_3202 < 75f)
					{
						if (iLocal_3228 == -1)
						{
							if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CHASE06", 7, GlobalFunc_4570(), 0, 0))
							{
								iLocal_3220 = MISC::GET_GAME_TIMER();
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) == 0)
								{
									func_375(Local_3493);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) <= 1)
								{
									iLocal_3167 = 0;
								}
							}
						}
						else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CHASE08", 7, GlobalFunc_4570(), 0, 0))
						{
							iLocal_3220 = MISC::GET_GAME_TIMER();
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) == 0)
							{
								func_375(Local_3493);
							}
						}
					}
					else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_HURRY", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3220 = MISC::GET_GAME_TIMER();
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
						{
							func_375(Local_3493);
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) <= 4)
						{
							iLocal_3167 = 0;
						}
					}
				}
				else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_CHASE07", 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3220 = MISC::GET_GAME_TIMER();
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) <= 3)
					{
						iLocal_3167 = 0;
					}
				}
			}
		}
		else if (iLocal_3262 == 1)
		{
			if (GlobalFunc_2311(iLocal_3220, MISC::GET_RANDOM_INT_IN_RANGE(250, 750)))
			{
				iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iVar7 == 0)
				{
					StringCopy(&Var8, "PAP1_PHOTO", 24);
				}
				else if (iVar7 == 1)
				{
					StringCopy(&Var8, "PAP1_PHOTO2", 24);
				}
				else
				{
					StringCopy(&Var8, "PAP1_FIDGET", 24);
				}
				if (func_189(&uLocal_3321, cLocal_3318, &Var8, 7, GlobalFunc_4570(), 0, 0))
				{
					iLocal_3167 = 1;
					iLocal_3220 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}



void func_452()//Position - 0x34B92
{
	struct<3> Var0;
	bool bVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (!func_462())
	{
		iLocal_3262 = 0;
		iLocal_3248 = 0;
		iLocal_3249 = MISC::GET_RANDOM_INT_IN_RANGE(6, 11);
		iLocal_3250 = MISC::GET_RANDOM_INT_IN_RANGE(250, 750);
	}
	else if (GlobalFunc_4947(Local_3528))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3528, Local_3661) };
		switch (iLocal_3262)
		{
			case 0:
				bVar3 = true;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_left_pap", 3))
				{
					if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, "hurry_up_left_pap", 3))
					{
						bVar3 = false;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
				{
					if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
					{
						bVar3 = false;
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
				{
					if (!ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, &Local_3597, 3))
					{
						bVar3 = false;
					}
				}
				if (bVar3)
				{
					if (func_461())
					{
						fVar4 = 3f;
						TASK::TASK_SWEEP_AIM_POSITION(Local_3486, sLocal_3305, "sweep_low", "sweep_med", "sweep_high", -1, Var0, fVar4, 1048576000);
						func_460();
						if (func_448("PAP1_CHASE06"))
						{
							GlobalFunc_4956();
						}
						iLocal_3239 = MISC::GET_GAME_TIMER();
						iLocal_3262 = 1;
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
					}
				}
				if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, Local_3493))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_3486, Local_3493, -1, 2, 2);
				}
				break;
			
			case 1:
				if (!GlobalFunc_6964(Local_3486, 1226471469))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
					}
					iLocal_3262 = 0;
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3486, Var0);
					iVar5 = 750;
					if (GlobalFunc_2311(iLocal_3239, iVar5))
					{
						if (!func_461())
						{
							iVar6 = 1250;
							if (GlobalFunc_2311(iLocal_3239, iVar6))
							{
								if (iLocal_3248 >= iLocal_3249)
								{
									func_458();
									iLocal_3262 = 2;
								}
								else
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
									}
									iLocal_3262 = 0;
								}
							}
						}
						else
						{
							func_454(Var0);
							if (func_453(iLocal_3250))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_3542))
								{
									if (GlobalFunc_115(Local_3553))
									{
										GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_3553, Local_3658, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									}
									if (!AUDIO::HAS_SOUND_FINISHED(uLocal_3238))
									{
										AUDIO::STOP_SOUND(uLocal_3238);
									}
									if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_3317, 0))
									{
										AUDIO::PLAY_SOUND_FROM_COORD(uLocal_3238, "CAMERA", PED::GET_PED_BONE_COORDS(Local_3486, 28422, Local_3658), sLocal_3319, 0, 0, 0);
									}
								}
								iLocal_3219 = -1;
								iLocal_3227 = 0;
								iLocal_3250 = MISC::GET_RANDOM_INT_IN_RANGE(250, 750);
								iLocal_3248++;
								if (iLocal_3248 >= iLocal_3249)
								{
									RECORDING::_0x293220DA1B46CEBC(4f, 4f, 1);
									func_458();
									iLocal_3262 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_6964(Local_3486, 1226471469))
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3486, Var0);
				}
				iVar7 = 500;
				if (GlobalFunc_2311(iLocal_3239, iVar7))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
					}
					else
					{
						iVar8 = 1000;
						if (GlobalFunc_2311(iLocal_3239, iVar8))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_3486);
							TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "lookatcam_intro_pap", 8f, -8f, -1, 18, 0, 0, 0, 0);
							iLocal_3262 = 3;
						}
					}
				}
				break;
			
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "lookatcam_intro_pap", 3))
				{
					iLocal_3262 = 0;
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_3486, sLocal_3305, "lookatcam_intro_pap", 1.4f);
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, "lookatcam_intro_pap", 3))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_3486);
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "lookatcam_loop_pap", 8f, -8f, -1, 17, 0, 0, 0, 0);
						iLocal_3262 = 4;
					}
				}
				break;
			
			case 4:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "lookatcam_loop_pap", 3))
				{
					iLocal_3262 = 0;
				}
				else if (iLocal_3144[iLocal_3228])
				{
					if (!GlobalFunc_111())
					{
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "lookatcam_outro_pap", 8f, -2f, -1, 18, 0, 0, 0, 0);
						iLocal_3262 = 5;
					}
				}
				break;
			
			case 5:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "lookatcam_outro_pap", 3))
				{
					iLocal_3262 = 0;
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_3486, sLocal_3305, "lookatcam_outro_pap", 1.4f);
					if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3486, sLocal_3305, "lookatcam_outro_pap", 3))
					{
						TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
						iLocal_3262 = 0;
					}
				}
				break;
			}
	}
}

bool func_453(int iParam0)//Position - 0x35064
{
	if (iLocal_3219 == -1)
	{
		return 0;
	}
	return (MISC::GET_GAME_TIMER() - iLocal_3219) > iParam0;
}

int func_454(struct<3> Param0)//Position - 0x35082
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!GlobalFunc_115(Local_3542))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3542, Local_3655) };
	Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_3542) };
	Var3.x = (Var3.x * -1f);
	Var3.f_1 = (Var3.f_1 * -1f);
	Var3.f_2 = (Var3.f_2 * -1f);
	iVar6 = 0;
	fVar7 = 90f;
	bVar8 = func_456(iLocal_3235, Var0, Var3, Param0, fVar7);
	if (bVar8)
	{
		if (iLocal_3235 >= 3)
		{
			iLocal_3235 = 0;
		}
		else
		{
			iLocal_3235++;
		}
	}
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 <= 3)
	{
		if (func_455(iVar11, &iVar6))
		{
			iVar10++;
		}
		iVar11++;
	}
	if (!bVar8)
	{
		bVar8 = func_456(iLocal_3235, Var0, Var3, Param0, fVar7);
		if (bVar8)
		{
			if (iLocal_3235 >= 3)
			{
				iLocal_3235 = 0;
			}
			else
			{
				iLocal_3235++;
			}
		}
	}
	if (iVar10 > 0)
	{
		iVar9 = 1;
		if (iLocal_3219 == -1)
		{
			iLocal_3219 = MISC::GET_GAME_TIMER();
		}
		iLocal_3227 = 0;
	}
	else if (iLocal_3219 == -1)
	{
		iVar9 = 0;
	}
	else
	{
		iLocal_3227++;
		if (iLocal_3227 >= 8)
		{
			iLocal_3219 = -1;
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	return iVar9;
}

bool func_455(int iParam0, int iParam1)//Position - 0x351B8
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	var uVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	else if (!Local_3266[iParam0 /*8*/].f_7)
	{
		return 0;
	}
	iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_3266[iParam0 /*8*/], &iVar1, &Var2, &uVar5, &uVar8);
	if (iVar9 == 0)
	{
		Local_3266[iParam0 /*8*/] = 0;
		Local_3266[iParam0 /*8*/].f_7 = 0;
		return 0;
	}
	else if (iVar9 == 1)
	{
		return 0;
	}
	bVar10 = false;
	fVar11 = 1.3f;
	if (iVar1 > 0)
	{
		fVar12 = SYSTEM::VDIST2(Local_3266[iParam0 /*8*/].f_1, Var2);
		bVar10 = fVar12 <= (fVar11 * fVar11);
		iVar0 = MISC::GET_GAME_TIMER();
	}
	else
	{
		bVar10 = true;
		iVar0 = MISC::GET_GAME_TIMER();
	}
	Local_3266[iParam0 /*8*/] = 0;
	Local_3266[iParam0 /*8*/].f_7 = 0;
	if (bVar10)
	{
		*iParam1 = iVar0;
	}
	return bVar10;
}

int func_456(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10)//Position - 0x35286
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	struct<3> Var5;
	
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	else if (Local_3266[iParam0 /*8*/].f_7)
	{
		return 0;
	}
	fVar0 = (fParam10 / 2f);
	if (fParam10 > 0f)
	{
		Var1 = { GlobalFunc_107(Param7 - Param1) };
		fVar4 = GlobalFunc_168(Param4, Var1);
		if (fVar4 <= SYSTEM::COS(fVar0))
		{
			func_457(Param1, fVar4, fParam10);
			return 0;
		}
	}
	Var5 = { Param7 };
	Var5 = { Param7 - Param1 * Vector(1.25f, 1.25f, 1.25f) };
	Local_3266[iParam0 /*8*/] = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Param1 + Var5, 511, 0, 7);
	if (Local_3266[iParam0 /*8*/] == 0)
	{
		Local_3266[iParam0 /*8*/] = 0;
		Local_3266[iParam0 /*8*/].f_7 = 0;
	}
	else
	{
		Local_3266[iParam0 /*8*/].f_7 = 1;
		Local_3266[iParam0 /*8*/].f_1 = { Param7 };
		return 1;
	}
	return 0;
}

void func_457(struct<3> Param0, float fParam3, float fParam4)//Position - 0x35375
{
	fParam4 = (fParam4 / 2f);
	unk_0x6A3E157475DBFCD9(Param0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, (fParam3 + fParam4), 0f, 5f, 0f), 0, 0, 255, 255);
	unk_0x6A3E157475DBFCD9(Param0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, (fParam3 - fParam4), 0f, 5f, 0f), 0, 0, 255, 255);
}

void func_458()//Position - 0x353BD
{
	if (iLocal_3228 < 5)
	{
		iLocal_3228++;
	}
	GlobalFunc_565(799, 1, 0);
	GlobalFunc_4935();
	iLocal_3241 = MISC::GET_GAME_TIMER();
	iLocal_3239 = MISC::GET_GAME_TIMER();
	iLocal_3248 = 0;
	iLocal_3249 = MISC::GET_RANDOM_INT_IN_RANGE(6, 11);
	iLocal_3250 = MISC::GET_RANDOM_INT_IN_RANGE(250, 750);
}


void func_460()//Position - 0x354B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_3266[iVar0 /*8*/] = 0;
		Local_3266[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	iLocal_3227 = 0;
	iLocal_3235 = 0;
	iLocal_3219 = -1;
}

int func_461()//Position - 0x354EB
{
	float fVar0[2];
	
	Local_3699[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3528, Local_3706[0 /*3*/]) };
	fVar0[0] = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_3521, 1), Local_3699[0 /*3*/]);
	Local_3699[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3528, Local_3706[1 /*3*/]) };
	fVar0[1] = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_3521, 1), Local_3699[1 /*3*/]);
	if (fVar0[0] < 3.5f)
	{
		return 1;
	}
	else if (fVar0[1] < 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_462()//Position - 0x35580
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		if (PED::IS_PED_ON_ANY_BIKE(Local_3486) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
		{
			return 1;
		}
	}
	return 0;
}

int func_463(int iParam0)//Position - 0x355AD
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	char cVar8[64];
	struct<16> Var24;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486) && GlobalFunc_115(iParam0))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
		{
			Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_3486) };
			Var0 = { GlobalFunc_107(Var0) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) - ENTITY::GET_ENTITY_COORDS(Local_3486, 1) };
			Var3 = { GlobalFunc_107(Var3) };
			fVar6 = GlobalFunc_168(Var0, Var3);
			iVar7 = func_357(Local_3521, ENTITY::GET_ENTITY_COORDS(Local_3521, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1));
			if (iVar7 == 1)
			{
				StringCopy(&cVar8, "right_pap", 64);
			}
			else
			{
				StringCopy(&cVar8, "left_pap", 64);
			}
			if (fVar6 > 0.85f)
			{
				StringCopy(&Var24, "point_fwd_", 64);
			}
			else if (fVar6 > 0.2f)
			{
				StringCopy(&Var24, "point_45_", 64);
			}
			else if (fVar6 > -0.6f)
			{
				StringCopy(&Var24, "point_side_", 64);
			}
			else
			{
				StringCopy(&Var24, "point_bwd_", 64);
			}
			StringConCat(&Var24, &cVar8, 64);
			Local_3597 = { Var24 };
			TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, &Local_3597, 4f, -2f, -1, 18, 0, 0, 0, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_465(int iParam0)//Position - 0x35832
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_3076)
			{
				case 4:
					func_467("PAP1_05");
					GlobalFunc_846(&uLocal_3197);
					if (iLocal_3153)
					{
						if (func_448("PAP1_DOFF02"))
						{
							iLocal_3189 = 1;
							iLocal_3153 = 0;
							Local_3613 = { GlobalFunc_514() };
						}
					}
					else if (iLocal_3152)
					{
						if (func_448("PAP1_DOFF05") || func_448("PAP1_DOFF04"))
						{
							iLocal_3189 = 1;
							iLocal_3152 = 0;
							Local_3613 = { GlobalFunc_514() };
						}
					}
					else if (iLocal_3151)
					{
						if (func_448("PAP1_DROP"))
						{
							iLocal_3189 = 1;
							iLocal_3151 = 0;
							Local_3613 = { GlobalFunc_514() };
						}
					}
					else if (iLocal_3157)
					{
						if (func_448(&Local_3637))
						{
							iLocal_3189 = 1;
							iLocal_3157 = 0;
							Local_3613 = { GlobalFunc_514() };
						}
					}
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(Local_3486))
					{
						GlobalFunc_4956();
					}
					else
					{
						GlobalFunc_4935();
					}
					break;
				
				case 7:
					func_467("PAP1_09");
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(Local_3486))
					{
						GlobalFunc_4956();
					}
					else
					{
						GlobalFunc_4935();
					}
					break;
				
				default:
					iLocal_3262 = 0;
					if (GlobalFunc_6964(Local_3486, 1226471469))
					{
						TASK::CLEAR_PED_TASKS(Local_3486);
					}
					func_467("PAP1_01");
					GlobalFunc_846(&(Local_3493.f_2));
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(Local_3486))
					{
						GlobalFunc_4956();
					}
					else
					{
						GlobalFunc_4935();
					}
					iLocal_3163 = 1;
					iLocal_3164 = 1;
					if (iLocal_3076 == 2 || iLocal_3076 == 3)
					{
						GlobalFunc_846(&(Local_3493.f_2));
						GlobalFunc_846(&(Local_3507.f_2));
						func_467("PAP1_03");
						GlobalFunc_5716("PAP1_H1", 1);
					}
					break;
			}
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "dialog_pap", 3))
					{
						TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "dialog_pap", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_left_pap", 3))
					{
						TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "hurry_up_left_pap", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "hurry_up_right_pap", 3))
					{
						TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, "hurry_up_right_pap", -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, &Local_3597, 3))
					{
						TASK::STOP_ANIM_TASK(Local_3486, sLocal_3305, &Local_3597, -2f);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
					{
						PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486);
						TASK::STOP_ANIM_TASK(Local_3486, sLocal_3306, "cam_pos_hand_override", -1000f);
					}
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
				PED::SET_PED_RESET_FLAG(Local_3486, 309, 1);
			}
			else
			{
				func_215(-1048576000);
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_3486))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3306, "cam_pos_hand_override", 3))
					{
						PED::RESET_PED_MOVEMENT_CLIPSET(Local_3486, 1048576000);
					}
				}
				else
				{
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_3486);
			}
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			break;
		
		case 1:
			TASK::TASK_CLEAR_LOOK_AT(Local_3486);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			func_467("PAP1_06");
			func_467("PAP1_10");
			GlobalFunc_846(&(Local_3521.f_2));
			if ((func_448("PAP1_IG5") || func_448("PAP1_FALL")) || func_448("PAP1_CRASH"))
			{
				GlobalFunc_4956();
			}
			GlobalFunc_4935();
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			break;
		
		case 2:
			TASK::TASK_CLEAR_LOOK_AT(Local_3486);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			GlobalFunc_846(&(Local_3486.f_2));
			func_467("PAP1_08");
			GlobalFunc_4935();
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			break;
	}
}


void func_467(char* sParam0)//Position - 0x35D06
{
	if (GlobalFunc_663(sParam0, 0, 0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_468()//Position - 0x35D1F
{
	if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
	{
		return 1;
	}
	if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3486, Local_3521))
	{
		return 2;
	}
	return 0;
}

void func_469()//Position - 0x35D53
{
	func_80();
	func_336();
	switch (iLocal_3078)
	{
		case 0:
			GlobalFunc_Checkpoint5(2, "Drop Beverley off", 1, 0, 0, 1);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3507.x, 0);
			}
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_3486);
			}
			RECORDING::_0x293220DA1B46CEBC(4f, 4f, 0);
			iLocal_3167 = 1;
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.8f);
			Local_3719 = { 0f, 0f, 0f };
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 0);
			iLocal_3078 = 1;
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				fLocal_3204 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3486, 1));
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					iLocal_3078 = 2;
				}
				else
				{
					func_350();
					if (iLocal_3265 == 0)
					{
						if (iLocal_3157 && iLocal_3181)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3670, 4f, 4f, 2f, 1, 1, 2) && ENTITY::IS_ENTITY_AT_COORD(Local_3486, Local_3670, 4f, 4f, 2f, 0, 1, 0))
							{
								iLocal_3078 = 2;
							}
						}
					}
				}
			}
			if (GlobalFunc_4947(Local_3528))
			{
				func_348();
			}
			func_342();
			func_341();
			break;
		
		case 2:
			GlobalFunc_846(&uLocal_3197);
			GlobalFunc_846(&(Local_3486.f_2));
			GlobalFunc_846(&(Local_3521.f_2));
			if (GlobalFunc_663("PAP1_05", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PAP1_05");
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				GlobalFunc_4935();
				func_332(7);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				func_332(5);
			}
			break;
	}
}

void func_470()//Position - 0x35ED6
{
	struct<3> Var0;
	int iVar3;
	
	func_80();
	func_336();
	switch (iLocal_3078)
	{
		case 0:
			func_509(0, 0, 1065353216);
			iLocal_3167 = 1;
			if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
			{
				iLocal_3078 = 2;
			}
			else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3507.x))
			{
				iLocal_3078 = 2;
			}
			else
			{
				func_501();
				GlobalFunc_10365(&uLocal_19, Local_3507.x, 0, 0, 1, 1, 1);
				iLocal_3243 = MISC::GET_GAME_TIMER();
				iLocal_3078 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4947(Local_3521))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3521))
				{
					if (func_480() || GlobalFunc_2311(iLocal_3243, 2000))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3521);
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
					}
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				fLocal_3204 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3486, 1));
				if (GlobalFunc_4947(Local_3528))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
					{
						func_509(0, 0, 1065353216);
						if (!iLocal_3179)
						{
							if (fLocal_3203 >= 80132f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3528);
								func_474(0, 1);
								func_473();
								VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_3320);
								func_472();
								VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
								VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
								VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
								STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
								iLocal_3179 = 1;
							}
						}
					}
					else
					{
						if (GlobalFunc_115(Local_3528))
						{
							fLocal_3202 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3528, 1));
						}
						if (!iLocal_3179)
						{
							func_474(0, 1);
							func_473();
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_3320);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
							VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
							VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
							STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
							func_472();
							iLocal_3179 = 1;
						}
						else
						{
							func_348();
						}
					}
				}
				if (iLocal_3179)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
					VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.3f);
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.6f);
				}
				if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3507.x, PLAYER::PLAYER_PED_ID(), 0))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3507.x, 0, 2))
						{
							iLocal_3191 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3507.x);
						}
					}
					iLocal_3078 = 2;
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3507.x))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3507.x, PLAYER::PLAYER_PED_ID(), 0))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3507.x, 0, 2))
						{
							iLocal_3191 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3507.x);
							ENTITY::SET_ENTITY_HEALTH(Local_3507.x, 0);
						}
					}
					if (!iLocal_3191)
					{
						if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3514, PLAYER::PLAYER_PED_ID(), 0))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3514, 0, 2))
								{
									iLocal_3191 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3514);
								}
							}
						}
						else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3514))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3514, PLAYER::PLAYER_PED_ID(), 0))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3514, 0, 2))
								{
									iLocal_3191 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3514);
								}
							}
						}
					}
					iLocal_3078 = 2;
				}
				else
				{
					GlobalFunc_10365(&uLocal_19, Local_3507.x, 0, 0, 1, 1, 1);
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					fLocal_3205 = SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(Local_3507.x, 1));
					func_501();
					if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
					{
						if (PED::IS_PED_ON_ANY_BIKE(Local_3507.x))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3507.x))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_3507.x);
							}
						}
					}
					else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3514))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_3514, 0);
						if (PED::IS_PED_ON_ANY_BIKE(Local_3507.x))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3507.x))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_3507.x);
							}
						}
					}
				}
				func_350();
			}
			break;
		
		case 2:
			if (GlobalFunc_4947(Local_3521) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3521))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3521);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
			}
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3575))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_3575))
				{
					ENTITY::DETACH_ENTITY(Local_3575, 1, 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_3575, 3, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_3564))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_3564))
				{
					ENTITY::DETACH_ENTITY(Local_3564, 1, 1);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_3564, 3, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
				}
			}
			if (!iLocal_3179)
			{
				if (GlobalFunc_4947(Local_3528))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3528);
					}
					func_472();
					func_474(0, 1);
					func_473();
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_3320);
					iLocal_3179 = 1;
				}
			}
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3302[iVar3], 0);
				iVar3++;
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			func_501();
			GlobalFunc_846(&(Local_3493.f_2));
			GlobalFunc_846(&(Local_3507.f_2));
			GlobalFunc_846(&(Local_3486.f_2));
			GlobalFunc_846(&(Local_3521.f_2));
			GlobalFunc_4948(&uLocal_19, 0, 0);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
			{
				GlobalFunc_200(&uLocal_3321, 4);
			}
			if (GlobalFunc_663("PAP1_03", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("PAP1_03");
			}
			if (GlobalFunc_74("PAP1_H1"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!GlobalFunc_188() && bLocal_3184)
			{
				func_79(3);
			}
			if (GlobalFunc_115(Local_3528))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3528, 0);
			}
			if (GlobalFunc_115(Local_3535))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3535, 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
			{
				AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_CHASE");
			}
			func_332(4);
			break;
	}
}


void func_472()//Position - 0x364CC
{
	var uVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3500))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_3528, PLAYER::PLAYER_PED_ID(), 8, 80f, 262144, 500f, -1f, 1);
		TASK::SET_SEQUENCE_TO_REPEAT(uVar0, 1);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_3500, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		PED::SET_PED_KEEP_TASK(Local_3500, 1);
	}
}

void func_473()//Position - 0x36526
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iLocal_2797;
	iVar1 = iLocal_2995;
	iVar2 = 0;
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_3320);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_1285[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1285[iVar2], sLocal_3320);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_1603[iVar2] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1603[iVar2], sLocal_3320);
		}
		iVar2++;
	}
}

void func_474(bool bParam0, bool bParam1)//Position - 0x3659E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2549))
	{
		iLocal_122 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2565);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_138)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_24());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_33();
			func_29();
			func_12();
		}
		else
		{
			func_6();
			func_479();
		}
		if (bParam1)
		{
			GlobalFunc_9158(0);
		}
	}
}





void func_479()//Position - 0x36784
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 105)
	{
		iLocal_2797[iVar0] = 0;
		Local_1844[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_140[iVar0] = 0f;
		fLocal_246[iVar0] = 0f;
		fLocal_352[iVar0] = 0f;
		fLocal_458[iVar0] = 0f;
		iLocal_1285[iVar0] = 0;
		fLocal_564[iVar0] = 0f;
		iLocal_1391[iVar0] = 0;
		iLocal_2566[iVar0] = 0;
		iLocal_1497[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_2903[iVar0] = 0;
		iVar0++;
	}
	iLocal_1827 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_2924[iVar0] = 0;
		Local_2160[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_980[iVar0] = 0f;
		fLocal_1051[iVar0] = 0f;
		fLocal_1122[iVar0] = 0f;
		fLocal_1193[iVar0] = 0f;
		iLocal_1756[iVar0] = 0;
		iLocal_2672[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_3046[iVar0] = 0;
		iVar0++;
	}
	iLocal_1829 = 0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iLocal_2995[iVar0] = 0;
		Local_2371[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_674[iVar0] = 0f;
		fLocal_725[iVar0] = 0f;
		fLocal_776[iVar0] = 0f;
		fLocal_827[iVar0] = 0f;
		iLocal_1603[iVar0] = 0;
		fLocal_878[iVar0] = 0f;
		iLocal_1654[iVar0] = 0;
		iLocal_2743[iVar0] = 0;
		iLocal_1705[iVar0] = 0;
		iVar0++;
	}
	iLocal_1828 = 0;
	iLocal_1831 = 0;
	iLocal_1834 = 0;
	iLocal_1835 = 0;
	iLocal_1836 = 0;
}

int func_480()//Position - 0x36910
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (((((PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 278)) || PAD::IS_CONTROL_PRESSED(0, 279)) || PAD::IS_CONTROL_PRESSED(0, 59)) || PAD::IS_CONTROL_PRESSED(0, 60))
	{
		return 1;
	}
	GlobalFunc_612(&uVar0, &uVar1, &uVar2, &uVar3, 0);
	if (MISC::ABSI(uVar0) > 28 || MISC::ABSI(uVar1) > 28)
	{
		return 1;
	}
	return 0;
}





















void func_501()//Position - 0x377E3
{
	if ((((GlobalFunc_4947(Local_3535) && GlobalFunc_IsPedNotInjuredOrDead(Local_3514)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3514, Local_3535)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3507.x, Local_3535))
	{
		switch (iLocal_3264)
		{
			case 0:
				if (fLocal_3203 >= 60550f)
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3535, 1, "Pap1RP", 1);
						VEHICLE::SET_PLAYBACK_SPEED(Local_3535, fLocal_3214);
						func_507(fLocal_3215);
						Local_3719 = { 0f, 0f, 0f };
						iLocal_3264 = 1;
					}
				}
				break;
			
			case 1:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_3535, fLocal_3214);
					fLocal_3215 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3535);
					func_507(fLocal_3215);
					if (fLocal_3215 > 21000f)
					{
						GlobalFunc_5573(Local_3719, Local_3696, &Local_3713, &Local_3716, 1000);
						if (GlobalFunc_1992(Local_3713, Local_3716))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3535);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "pap1RP");
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3535, -8f);
							if (GlobalFunc_4947(Local_3521))
							{
								VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3521, 0f);
							}
							STREAMING::REMOVE_PTFX_ASSET();
							AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sLocal_3317);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_3514, Local_3535, Local_3696, 4, fLocal_3201, 34340900, -1f, -1f, 1);
							PED::SET_PED_KEEP_TASK(Local_3514, 1);
							iLocal_3226 = MISC::GET_GAME_TIMER();
							iLocal_3240 = MISC::GET_GAME_TIMER();
							if (!iLocal_3177)
							{
								GlobalFunc_200(&uLocal_3321, 4);
								iLocal_3177 = 1;
							}
							iLocal_3264 = 2;
						}
					}
					else if (fLocal_3215 > (21000f - 6000f))
					{
						if (GlobalFunc_537(Local_3719, 0f, 0f, 0f, 1056964608))
						{
							Local_3719 = { ENTITY::GET_ENTITY_COORDS(Local_3535, 1) };
						}
						GlobalFunc_5573(Local_3719, Local_3696, &Local_3713, &Local_3716, 1000);
					}
				}
				else
				{
					if (GlobalFunc_537(Local_3719, 0f, 0f, 0f, 1056964608))
					{
						Local_3719 = { ENTITY::GET_ENTITY_COORDS(Local_3535, 1) };
					}
					GlobalFunc_5573(Local_3719, Local_3696, &Local_3713, &Local_3716, 1000);
					if (GlobalFunc_1992(Local_3713, Local_3716))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "pap1RP");
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3535, -8f);
						if (GlobalFunc_4947(Local_3521))
						{
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3521, 0f);
						}
						STREAMING::REMOVE_PTFX_ASSET();
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sLocal_3317);
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Local_3514, Local_3535, Local_3696, 4, fLocal_3201, 34340900, -1f, -1f, 1);
						PED::SET_PED_KEEP_TASK(Local_3514, 1);
						iLocal_3226 = MISC::GET_GAME_TIMER();
						iLocal_3240 = MISC::GET_GAME_TIMER();
						if (!iLocal_3177)
						{
							GlobalFunc_200(&uLocal_3321, 4);
							iLocal_3177 = 1;
						}
						iLocal_3264 = 2;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_6964(Local_3514, -1273030092))
				{
					if (GlobalFunc_775(Local_3514, Local_3696, 65f))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(Local_3514, Local_3535, fLocal_3201, 34340900);
						iLocal_3264 = 3;
					}
				}
				else
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_3514, Local_3535, fLocal_3201, 34340900);
					iLocal_3264 = 3;
				}
				func_505();
				if (fLocal_3205 < 22f)
				{
					if (GlobalFunc_2311(iLocal_3240, MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000)))
					{
						if (fLocal_3205 > 4f)
						{
							if (func_504())
							{
								iLocal_3240 = MISC::GET_GAME_TIMER();
								if (GlobalFunc_2311(iLocal_3226, 500))
								{
									if (func_503())
									{
										iLocal_3226 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (GlobalFunc_2311(iLocal_3226, MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)))
					{
						if (func_503())
						{
							iLocal_3226 = MISC::GET_GAME_TIMER();
						}
					}
				}
				func_502();
				break;
			
			case 3:
				if (!GlobalFunc_6964(Local_3514, -258271821))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_3514, Local_3535, fLocal_3201, 34340900);
				}
				func_505();
				if (fLocal_3205 < 22f)
				{
					if (GlobalFunc_2311(iLocal_3240, MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000)))
					{
						if (fLocal_3205 > 4f)
						{
							if (func_504())
							{
								iLocal_3240 = MISC::GET_GAME_TIMER();
								if (GlobalFunc_2311(iLocal_3226, 500))
								{
									if (func_503())
									{
										iLocal_3226 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (GlobalFunc_2311(iLocal_3226, MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000)))
					{
						if (func_503())
						{
							iLocal_3226 = MISC::GET_GAME_TIMER();
						}
					}
				}
				func_502();
				break;
		}
	}
	else if (iLocal_3264 != 4)
	{
		if (GlobalFunc_4947(Local_3535))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3535))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_3535);
			}
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3535, -8f);
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "pap1RP");
		if (GlobalFunc_4947(Local_3521))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3521, 0f);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_3507.x))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_3507.x);
			}
		}
		STREAMING::REMOVE_PTFX_ASSET();
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sLocal_3317);
		if ((GlobalFunc_IsPedNotInjuredOrDead(Local_3514) && GlobalFunc_4947(Local_3535)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_3514, Local_3535))
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_3514, Local_3535, 55f, 34340900);
			PED::SET_PED_KEEP_TASK(Local_3514, 1);
		}
		iLocal_3264 = 4;
	}
}

void func_502()//Position - 0x37CB3
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 3))
		{
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 1.25f);
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 3))
		{
			if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 1.25f);
			}
		}
		else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
		{
			TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
		}
	}
}

int func_503()//Position - 0x37DA0
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_3507.x) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_3507.x))
		{
			func_343(&Local_3507, "PAP1_DIAA", "Paparazzo1RivalPap", 11);
			return 1;
		}
	}
	return 0;
}

int func_504()//Position - 0x37DE1
{
	int iVar0;
	char* sVar1;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 3))
		{
			if (!GlobalFunc_171(Local_3507.x, PLAYER::PLAYER_PED_ID(), 85f))
			{
				iVar0 = func_357(Local_3535, ENTITY::GET_ENTITY_COORDS(Local_3535, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				if (iVar0 == 1)
				{
					sVar1 = "gesture_behind_right_pap";
				}
				else
				{
					sVar1 = "gesture_behind_left_pap";
				}
				TASK::CLEAR_PED_SECONDARY_TASK(Local_3507.x);
				TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, sVar1, 8f, -2f, -1, 2, 0, 0, 0, 0);
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

void func_505()//Position - 0x37E8D
{
	if ((MISC::GET_GAME_TIMER() - iLocal_3216) > 0)
	{
		fLocal_3201 = func_506();
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_3514, fLocal_3201);
		iLocal_3216 = MISC::GET_GAME_TIMER();
	}
}

float func_506()//Position - 0x37EB9
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = 8f;
	fVar2 = 90f;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
	{
		fVar0 = 45f;
		return fVar0;
	}
	else if (iLocal_3259 == 2)
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(Local_3535);
		fVar0 = (fVar0 + 0.2f);
	}
	else if (fLocal_3205 < fVar1)
	{
		if (GlobalFunc_4947(Local_3521))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(Local_3521);
			if (fVar0 < 26f)
			{
				fVar0 = 26f;
			}
		}
	}
	else if (fLocal_3205 > (2f * (0.65f * 100f)))
	{
		fVar0 = 10f;
	}
	else if (fLocal_3205 > fVar2)
	{
		fVar0 = 18f;
	}
	else
	{
		fVar0 = 26f;
	}
	return fVar0;
}

void func_507(float fParam0)//Position - 0x37F82
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 3f;
	if (GlobalFunc_4947(Local_3528))
	{
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3528, Local_3661) };
	}
	switch (iLocal_3234)
	{
		case 0:
			if (fParam0 >= 0f)
			{
				if (!GlobalFunc_6964(Local_3507.x, 1226471469))
				{
					TASK::TASK_LOOK_AT_COORD(Local_3507.x, Var1, -1, 0, 2);
					iLocal_3233 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_3507.x, sLocal_3305, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 1048576000);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3507.x, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_3233) > 1000)
					{
						if (iLocal_3231 < 3)
						{
							if (GlobalFunc_115(Local_3507.x))
							{
								func_508();
								iLocal_3233 = (MISC::GET_GAME_TIMER() - 550);
								iLocal_3231++;
								if (iLocal_3231 >= 3)
								{
									iLocal_3231 = 0;
									iLocal_3233 = MISC::GET_GAME_TIMER();
									iLocal_3234++;
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_3233 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 3))
				{
					iLocal_3234++;
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_3507.x, sLocal_3305, "gesture_behind_left_pap", 1.25f);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 3))
			{
				if (ENTITY::HAS_ENTITY_ANIM_FINISHED(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 3))
				{
					iLocal_3234++;
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_ANIM_SPEED(Local_3507.x, sLocal_3305, "gesture_behind_right_pap", 1.25f);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_3233) > 1000)
			{
				func_504();
			}
			else if (!GlobalFunc_6964(Local_3507.x, 1226471469))
			{
				TASK::TASK_LOOK_AT_COORD(Local_3507.x, Var1, -1, 0, 2);
				iLocal_3233 = MISC::GET_GAME_TIMER();
				TASK::TASK_SWEEP_AIM_POSITION(Local_3507.x, sLocal_3305, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 1048576000);
			}
			else
			{
				TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3507.x, Var1);
			}
			break;
		
		case 2:
			if (fParam0 >= 4500f)
			{
				if (!GlobalFunc_6964(Local_3507.x, 1226471469))
				{
					TASK::TASK_LOOK_AT_COORD(Local_3507.x, Var1, -1, 0, 2);
					iLocal_3233 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_3507.x, sLocal_3305, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 1048576000);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3507.x, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_3233) > 1200)
					{
						if (iLocal_3231 < 4)
						{
							if (GlobalFunc_115(Local_3507.x))
							{
								func_508();
								iLocal_3233 = (MISC::GET_GAME_TIMER() - 500);
								iLocal_3231++;
								if (iLocal_3231 >= 4)
								{
									iLocal_3231 = 0;
									iLocal_3233 = MISC::GET_GAME_TIMER();
									iLocal_3234++;
									func_504();
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_3233 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (fParam0 >= 9000f)
			{
				if (!GlobalFunc_6964(Local_3507.x, 1226471469))
				{
					TASK::TASK_LOOK_AT_COORD(Local_3507.x, Var1, -1, 0, 2);
					iLocal_3233 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_3507.x, sLocal_3305, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 1048576000);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3507.x, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_3233) > 1200)
					{
						if (iLocal_3231 < 3)
						{
							if (GlobalFunc_115(Local_3507.x))
							{
								func_508();
								iLocal_3233 = (MISC::GET_GAME_TIMER() - 500);
								iLocal_3231++;
								if (iLocal_3231 >= 3)
								{
									iLocal_3231 = 0;
									iLocal_3233 = MISC::GET_GAME_TIMER();
									iLocal_3234++;
									func_504();
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_3233 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (fParam0 >= 17000f)
			{
				if (GlobalFunc_6964(Local_3507.x, 1226471469))
				{
					TASK::CLEAR_PED_TASKS(Local_3507.x);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
				iLocal_3234++;
			}
			else if (fParam0 >= 13000f)
			{
				if (!GlobalFunc_6964(Local_3507.x, 1226471469))
				{
					TASK::TASK_LOOK_AT_COORD(Local_3507.x, Var1, -1, 0, 2);
					iLocal_3233 = MISC::GET_GAME_TIMER();
					TASK::TASK_SWEEP_AIM_POSITION(Local_3507.x, sLocal_3305, "sweep_low", "sweep_med", "sweep_high", -1, Var1, fVar0, 1048576000);
				}
				else
				{
					TASK::UPDATE_TASK_SWEEP_AIM_POSITION(Local_3507.x, Var1);
					if ((MISC::GET_GAME_TIMER() - iLocal_3233) > 1200)
					{
						if (iLocal_3231 < 3)
						{
							if (GlobalFunc_115(Local_3507.x))
							{
								func_508();
								iLocal_3233 = (MISC::GET_GAME_TIMER() - 500);
								iLocal_3231++;
								if (iLocal_3231 >= 3)
								{
									iLocal_3231 = 0;
									iLocal_3233 = MISC::GET_GAME_TIMER();
									iLocal_3234++;
									func_504();
								}
							}
						}
					}
				}
			}
			else
			{
				iLocal_3233 = MISC::GET_GAME_TIMER();
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
				}
			}
			break;
		
		default:
			if (GlobalFunc_6964(Local_3507.x, 1226471469))
			{
				TASK::CLEAR_PED_TASKS(Local_3507.x);
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3507.x, sLocal_3305, "idle", 3))
			{
				TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 4f, -2f, -1, 1, 0, 0, 0, 0);
			}
			break;
	}
}

void func_508()//Position - 0x3855E
{
	if (GlobalFunc_115(Local_3507.x))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_3564))
		{
			if (GlobalFunc_115(Local_3575))
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_rcpap1_camera", Local_3575, Local_3658, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(uLocal_3238))
			{
				AUDIO::STOP_SOUND(uLocal_3238);
			}
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_3317, 0))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(uLocal_3238, "CAMERA", PED::GET_PED_BONE_COORDS(Local_3507.x, 28422, Local_3658), sLocal_3319, 0, 0, 0);
			}
		}
	}
}

void func_509(bool bParam0, bool bParam1, float fParam2)//Position - 0x385DF
{
	if (GlobalFunc_4947(Local_3528) && GlobalFunc_4947(Local_3521))
	{
		fLocal_3202 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3528, 1));
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
		{
			fLocal_3203 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_3528);
			if (bParam1)
			{
				fLocal_3214 = fParam2;
			}
			else if (bLocal_3192)
			{
				func_520(&fLocal_3214, fLocal_3202);
			}
			else
			{
				func_515(&fLocal_3214, fLocal_3202);
			}
			VEHICLE::SET_PLAYBACK_SPEED(Local_3528, fLocal_3214);
			func_44();
			iLocal_125 = 1;
			if (fLocal_3203 < 1500f)
			{
				func_43();
			}
			func_3(Local_3528, fLocal_3214);
			if (bParam0)
			{
				GlobalFunc_10692(&uLocal_19, Local_3528, 0, 0, 1, 1, 1);
			}
			func_511(fLocal_3202);
			func_510(fLocal_3203);
		}
	}
}

void func_510(float fParam0)//Position - 0x3869F
{
	int iVar0;
	
	switch (iLocal_3255)
	{
		case 0:
			uLocal_3302[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-332.5803f, 207.257f, 80f, -281.5836f, 257.8022f, 95f, 0, 1, 1, 1);
			uLocal_3302[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-501.9701f, 184.4495f, 75f, -390.584f, 241.0636f, 90f, 0, 1, 1, 1);
			iLocal_3255++;
			break;
		
		case 1:
			if (fParam0 > 15000f)
			{
				iVar0 = 0;
				while (iVar0 <= 1)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3302[iVar0], 0);
					iVar0++;
				}
				iLocal_3255++;
			}
			break;
	}
}

void func_511(float fParam0)//Position - 0x38752
{
	if (GlobalFunc_2311(iLocal_3217, iLocal_3218))
	{
		if (GlobalFunc_4947(Local_3521))
		{
			if (fParam0 < 4f || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_3528, Local_3521))
			{
				iLocal_3218 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 3500);
				VEHICLE::START_VEHICLE_HORN(Local_3528, iLocal_3218, MISC::GET_HASH_KEY("HELDDOWN"), 0);
				iLocal_3218 += 4000;
				iLocal_3217 = MISC::GET_GAME_TIMER();
				return;
			}
		}
		iLocal_3218 = 250;
		iLocal_3217 = MISC::GET_GAME_TIMER();
	}
}




void func_515(float fParam0, float fParam1)//Position - 0x3883B
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	
	fVar0 = *fParam0;
	fVar1 = 0f;
	fVar2 = 0.2f;
	fVar3 = 12f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0.7f;
	bVar7 = true;
	if (iLocal_3188 == 0)
	{
		fVar0 = 0.55f;
	}
	else if (fLocal_3203 > 53000f)
	{
		fVar1 = 9.5f;
		fVar2 = 18f;
		fVar3 = 32f;
		fVar4 = 1.3f;
		func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (iLocal_3265 != 0 || fParam1 > (2f * (0.68f * 100f)))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
		{
			fVar1 = 10f;
			fVar2 = 20f;
			fVar3 = 150f;
			fVar4 = 1.2f;
			func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
		}
		else
		{
			func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
			if (fParam1 > 100f)
			{
				fVar0 = 0.25f;
			}
			if (fParam1 > 40f)
			{
				if (fVar0 > 0.5f)
				{
					fVar0 = 0.5f;
				}
			}
		}
	}
	else if (iLocal_3143 && (MISC::GET_GAME_TIMER() - iLocal_3241) > 2500)
	{
		fVar4 = 1f;
		fVar2 = 0.6f;
		fVar3 = 18f;
		fVar5 = 5f;
		func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (fParam1 < 4f)
	{
		fVar0 = fVar0;
	}
	else if (fLocal_3203 < 11000f)
	{
		fVar5 = 2f;
		fVar6 = 0.6f;
		func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (fLocal_3203 < 15000f)
	{
		fVar5 = 1.66f;
		fVar6 = 0.633f;
		func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else if (fLocal_3203 < 20000f)
	{
		fVar5 = 1.33f;
		fVar6 = 0.666f;
		func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	else
	{
		func_516(Local_3528, PLAYER::PLAYER_PED_ID(), &fVar0, 0.93f, fVar1, fVar2, fVar3, fVar4, fVar5, fVar6, bVar7);
	}
	*fParam0 = fVar0;
}

void func_516(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x38AC4
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
	
	if (iLocal_122 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_122 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1275;
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
			iLocal_123 = 1;
		}
		else if (iLocal_123)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_123 = 0;
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
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1282 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1283 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
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
							fVar1 = (fVar1 * (fLocal_1273 - fLocal_1274));
							fVar1 = (fVar1 + fLocal_1274);
							fLocal_1272 = fVar1;
							if (fLocal_1272 < fLocal_1274)
							{
								fLocal_1272 = fLocal_1274;
							}
							if (fLocal_1272 > fLocal_1273)
							{
								fLocal_1272 = fLocal_1273;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1272);
						}
					}
				}
			}
		}
	}
}




void func_520(float fParam0, float fParam1)//Position - 0x38EE6
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = *fParam0;
	fVar1 = (2f * (0.68f * 100f));
	fVar2 = 0.1f;
	if (fLocal_3203 > 78000f)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 9.5f, 18f, 125f, (fVar1 + 50f), 50f, 0.93f, 0.85f, 0.7f, 1.25f, 1, MISC::ABSF(-8f), 15f, 1);
		fVar2 = 0.07f;
	}
	else if (fLocal_3203 > 54000f)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 9.5f, 17f, 32f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.25f, 1, (MISC::ABSF(-8f) + 5f), 20f, 1);
		fVar2 = 0.045f;
	}
	else if (fLocal_3203 > 52500f)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 6.5f, 12f, 32f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.15f, 1, (MISC::ABSF(-8f) + 2.5f), 20f, 1);
		fVar2 = 0.045f;
	}
	else if (fLocal_3203 > 51000f)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 3.5f, 6f, 32f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.05f, 1, MISC::ABSF(-8f), 18f, 1);
		fVar2 = 0.04f;
	}
	else if (fLocal_3203 < 7000f)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 3f, 8f, 22f, fVar1, 30f, 0.93f, 0.6f, 0.5f, 1.25f, 1, 0f, 10f, 1);
		fVar2 = 0.075f;
	}
	else if (iLocal_3265 != 0 || fParam1 > (2f * (0.68f * 100f)))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521))
		{
			func_522(&fVar0, &Local_3521, Local_3528, 10f, 20f, 150f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.2f, 1, MISC::ABSF(-8f), 20f, 1);
			fVar2 = 0.45f;
		}
		else
		{
			func_522(&fVar0, &Local_3521, Local_3528, 0f, 0.2f, 5f, fVar1, 30f, 0.93f, 0.6f, 0.5f, 1.2f, 1, MISC::ABSF(-8f), 20f, 1);
			fVar2 = 0.45f;
		}
	}
	else if (iLocal_3143 && (MISC::GET_GAME_TIMER() - iLocal_3241) > 2500)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 5f, 10f, 18f, fVar1, 30f, 0.93f, 0.6f, 0.4f, 1.2f, 1, MISC::ABSF(-8f), 15f, 1);
	}
	else if (fParam1 < 4f)
	{
		func_522(&fVar0, &Local_3521, Local_3528, 0f, 0.5f, 6f, fVar1, 50f, 0.93f, 0.6f, 0.4f, 1.1f, 1, MISC::ABSF(-8f), 15f, 1);
	}
	else
	{
		func_522(&fVar0, &Local_3521, Local_3528, 0f, 0.5f, 6f, fVar1, 30f, 0.93f, 0.7f, 0.5f, 1.1f, 1, MISC::ABSF(-8f), 15f, 1);
	}
	GlobalFunc_2218(fParam0, fVar0, fVar2);
}


void func_522(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)//Position - 0x392B4
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

void func_523()//Position - 0x39498
{
	struct<3> Var0;
	
	func_80();
	if (!iLocal_3168)
	{
		func_509(1, 0, 1065353216);
	}
	else
	{
		func_509(0, 0, 1065353216);
	}
	switch (iLocal_3078)
	{
		case 0:
			iLocal_3167 = 1;
			func_54(1);
			func_526();
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3486))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, sLocal_3305, "idle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_3486, sLocal_3305, "idle", 4f, -2f, -1, 17, 0, 0, 0, 0);
				}
			}
			iLocal_3078 = 1;
			break;
		
		case 1:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				fLocal_3204 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3486, 1));
				if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3507.x, PLAYER::PLAYER_PED_ID(), 0))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3507.x, 0, 2))
						{
							iLocal_3191 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3507.x);
						}
					}
					iLocal_3078 = 2;
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3507.x))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3507.x, PLAYER::PLAYER_PED_ID(), 0))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3507.x, 0, 2))
						{
							iLocal_3191 = 1;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3507.x);
							ENTITY::SET_ENTITY_HEALTH(Local_3507.x, 0);
						}
					}
					if (!iLocal_3191)
					{
						if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3514, PLAYER::PLAYER_PED_ID(), 0))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3514, 0, 2))
								{
									iLocal_3191 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3514);
								}
							}
						}
						else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3514))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3514, PLAYER::PLAYER_PED_ID(), 0))
							{
								if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3514, 0, 2))
								{
									iLocal_3191 = 1;
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3514);
								}
							}
						}
					}
					iLocal_3078 = 2;
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					fLocal_3205 = SYSTEM::VDIST(Var0, ENTITY::GET_ENTITY_COORDS(Local_3507.x, 1));
					func_501();
					if (fLocal_3203 >= 75250f)
					{
						iLocal_3078 = 2;
						return;
					}
					if (!GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
					{
						if (PED::IS_PED_ON_ANY_BIKE(Local_3507.x))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3507.x))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_3507.x);
							}
						}
					}
					else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3514))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_3514, 0);
						if (PED::IS_PED_ON_ANY_BIKE(Local_3507.x))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 2);
							if (PED::CAN_KNOCK_PED_OFF_VEHICLE(Local_3507.x))
							{
								PED::KNOCK_PED_OFF_VEHICLE(Local_3507.x);
							}
						}
					}
				}
				if (!iLocal_3168)
				{
					if (fLocal_3215 > 1000f)
					{
						GlobalFunc_4948(&uLocal_19, 0, 0);
						iLocal_3168 = 1;
					}
				}
				else
				{
					GlobalFunc_10693(&uLocal_19, Local_3507.x, 0, 0, 1, 1, 1);
				}
				func_350();
			}
			break;
		
		case 2:
			if (bLocal_3184)
			{
				func_501();
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
			{
				GlobalFunc_10365(&uLocal_19, Local_3507.x, 0, 0, 1, 1, 1);
			}
			func_332(3);
			break;
	}
}



void func_526()//Position - 0x3977E
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3535))
	{
		MISC::CLEAR_AREA(Local_3535.f_3, 2f, 1, 0, 0, 0);
		Local_3535 = VEHICLE::CREATE_VEHICLE(Local_3535.f_1, Local_3535.f_3, 0, 1, 1);
	}
	if (GlobalFunc_4947(Local_3535))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_3535, 0.0329f, -0.02f, 0.9542f, -0.2968f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3535, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_3535, 0, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3535, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3535, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3535, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3535.f_1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3535, "PAPARAZZO_1_PAP_BIKE_GROUP", 0);
		}
	}
	if (GlobalFunc_4947(Local_3535))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3514))
		{
			Local_3514 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3535, 26, Local_3514.f_1, -1, 1, 1);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3514))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3514, 1);
			PED::SET_PED_CAN_BE_TARGETTED(Local_3514, 0);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3514, 1);
			PED::SET_PED_HELMET(Local_3514, 1);
			PED::GIVE_PED_HELMET(Local_3514, 1, 4096, -1);
			PED::SET_PED_CONFIG_FLAG(Local_3514, 42, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3514.f_1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3507.x))
		{
			Local_3507.x = PED::CREATE_PED_INSIDE_VEHICLE(Local_3535, 26, Local_3507.f_1, 0, 1, 1);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
		{
			PED::SET_PED_HELMET(Local_3507.x, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3507.x, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3507.x, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3507.x, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3507.x, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_3507.x, 9, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3507.x, 1);
			PED::SET_PED_CAN_BE_TARGETTED(Local_3507.x, 0);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3507.x, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3507.x, 1);
			PED::SET_PED_CONFIG_FLAG(Local_3507.x, 42, 1);
			GlobalFunc_173(&uLocal_3321, 4, Local_3507.x, "Paparazzo1RivalPap", 0, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3564))
			{
				Local_3564 = OBJECT::CREATE_OBJECT(Local_3564.f_10, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3507.x, 0f, 0f, 2.5f), 1, 1, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3575))
			{
				Local_3575.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3507.x, 0f, 0f, 2.5f) };
				Local_3575 = OBJECT::CREATE_OBJECT(Local_3575.f_10, Local_3575.f_1, 1, 1, 0);
			}
			if (GlobalFunc_115(Local_3564))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3575, Local_3564))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3575, Local_3564, 0, Local_3575.f_4, Local_3575.f_7, 0, 0, 0, 0, 2, 1);
				}
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3564, Local_3507.x))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3564, Local_3507.x, PED::GET_PED_BONE_INDEX(Local_3507.x, 28422), Local_3564.f_4, Local_3564.f_7, 0, 0, 0, 0, 2, 1);
				}
			}
			TASK::TASK_PLAY_ANIM(Local_3507.x, sLocal_3305, "idle", 8f, -2f, -1, 1, 0, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3507.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3564.f_10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3575.f_10);
		}
	}
}


void func_528()//Position - 0x39ADC
{
	int iVar0;
	int iVar1;
	
	func_80();
	switch (iLocal_3078)
	{
		case 0:
			if ((GlobalFunc_4947(Local_3528) && GlobalFunc_IsPedNotInjuredOrDead(Local_3500)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-416.3528f, 222.0458f, 77.41096f, -284.3009f, 233.3254f, 89.96367f, 80f, 0, 0, 0, 0, 0);
				func_535(sLocal_3320, 1, 0, 1);
				func_534();
				func_533(1);
				func_532(joaat("a_m_m_bevhills_02"));
				iLocal_128 = 1;
				iLocal_134 = 1;
				fLocal_1276 = 285f;
				func_531(1, 0, -1);
				func_530(1);
				func_44();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_3528))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_3528, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_3528, 1, sLocal_3320, 1);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_3528, 1);
					func_43();
					fLocal_3214 = 0.5f;
					VEHICLE::SET_PLAYBACK_SPEED(Local_3528, fLocal_3214);
					func_3(Local_3528, fLocal_3214);
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_3493, 3, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_3493, 20, 1);
			}
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, 1);
			if (GlobalFunc_4947(Local_3521))
			{
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_3521, -8f);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_3528, "PAPARAZZO_1_LIMO_GROUP", 0);
			iLocal_3246 = MISC::GET_GAME_TIMER();
			STATS::STAT_GET_INT(joaat("sp1_special_ability"), &iVar0, -1);
			if (IntToFloat(iVar0) < 4.5f)
			{
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.2f, 1);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			if (!GlobalFunc_188() && bLocal_3184)
			{
				func_79(0);
			}
			GlobalFunc_52(0, 1);
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 0);
			iLocal_3078 = 1;
			break;
		
		case 1:
			if ((((GlobalFunc_4947(Local_3521) && GlobalFunc_4947(Local_3528)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3493)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3500)) && GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
			{
				if (GlobalFunc_775(Local_3528, Local_3535.f_3, 250f))
				{
					func_54(0);
				}
				fLocal_3204 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_3486, 1));
				func_509(1, 0, 1065353216);
				if (!iLocal_3188)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_3521.f_2))
					{
						Local_3521.f_2 = GlobalFunc_5743(Local_3521, 1, 5);
					}
					if (!bLocal_3155)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (GlobalFunc_2311(iLocal_3246, 500))
						{
							if (func_189(&uLocal_3321, cLocal_3318, "PAP1_BBF1", 7, 0, 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								bLocal_3155 = true;
							}
						}
					}
					else if (!iLocal_3172)
					{
						if (!GlobalFunc_111())
						{
							if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							}
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, 1) && Local_3521 != iVar1)
							{
								GlobalFunc_164("PAP1_10", 7500, 1);
							}
							iLocal_3223 = MISC::GET_GAME_TIMER();
							iLocal_3172 = 1;
						}
					}
					if (GlobalFunc_111())
					{
						iLocal_3223 = MISC::GET_GAME_TIMER();
					}
					else if (bLocal_3155)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_3223) > 1000)
						{
							if (fLocal_3204 < 20f)
							{
								if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, 0))
								{
									if (func_189(&uLocal_3321, cLocal_3318, "PAP1_IG5", 7, GlobalFunc_4570(), 0, 0))
									{
										iLocal_3223 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521) || (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_3521, 1)))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						GlobalFunc_846(&(Local_3521.f_2));
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, 3))
						{
							TASK::STOP_ANIM_TASK(Local_3486, &cLocal_3625, &cLocal_3631, -2f);
						}
						TASK::TASK_CLEAR_LOOK_AT(Local_3486);
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
						func_84();
						if (func_448("PAP1_IG5"))
						{
							GlobalFunc_5105();
						}
						if (!GlobalFunc_188() && bLocal_3184)
						{
							func_79(1);
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
						{
							AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_INTRO");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
						{
							if (!GlobalFunc_188() && bLocal_3184)
							{
								AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_CHASE");
							}
						}
						iLocal_3188 = 1;
					}
					else
					{
						if (!PED::IS_PED_HEADTRACKING_PED(Local_3486, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (GlobalFunc_155(Local_3486, PLAYER::PLAYER_PED_ID(), 4.5f))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, 3))
							{
							}
							else
							{
								if (!PED::IS_PED_FACING_PED(Local_3486, PLAYER::PLAYER_PED_ID(), 45f))
								{
									if (!GlobalFunc_6964(Local_3486, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1);
									}
								}
								PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
							}
						}
						else if (GlobalFunc_2311(iLocal_3246, 250))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3486, &cLocal_3625, &cLocal_3631, 3))
							{
								if (!PED::IS_PED_FACING_PED(Local_3486, PLAYER::PLAYER_PED_ID(), 45f))
								{
									if (!GlobalFunc_6964(Local_3486, -875674219))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_3486, PLAYER::PLAYER_PED_ID(), -1);
									}
								}
								else if (GlobalFunc_2311(iLocal_3242, 3000))
								{
									if (func_184("", 8f, -2f, -1, 0, 0, 0, 0))
									{
										iLocal_3242 = MISC::GET_GAME_TIMER();
									}
								}
								PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
							}
							else
							{
								iLocal_3242 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else
				{
					func_350();
				}
				func_529(Local_3493);
				if (fLocal_3203 >= 56000f)
				{
					iLocal_3078 = 2;
					return;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3693, 1) < 28f)
				{
					iLocal_3078 = 2;
				}
			}
			break;
		
		case 2:
			func_509(1, 0, 1065353216);
			STREAMING::REQUEST_MODEL(Local_3535.f_1);
			func_332(2);
			break;
	}
}

void func_529(int iParam0)//Position - 0x3A09A
{
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		switch (iLocal_3263)
		{
			case 0:
				STREAMING::REQUEST_MODEL(Local_3586.f_10);
				if (STREAMING::HAS_MODEL_LOADED(Local_3586.f_10))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_3586))
					{
						Local_3586.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 2.5f) };
						Local_3586 = OBJECT::CREATE_OBJECT(Local_3586.f_10, Local_3586.f_1, 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3586, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 28422), Local_3586.f_4, Local_3586.f_7, 0, 0, 0, 0, 2, 1);
					}
					if (GlobalFunc_115(Local_3586))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_3586, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_3586, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3586.f_10);
						STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo1ig_4");
						iLocal_3263 = 1;
					}
				}
				break;
			
			case 1:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", 3))
				{
					STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo1ig_4");
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo1ig_4"))
					{
						TASK::TASK_PLAY_ANIM(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", 8f, -8f, -1, 1, 0, 0, 0, 0);
						STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo1ig_4");
					}
				}
				break;
			
			case 2:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", 3))
				{
					TASK::STOP_ANIM_TASK(iParam0, "rcmpaparazzo1ig_4", "miranda_shooting_up", -8f);
				}
				STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo1ig_4");
				GlobalFunc_5721(&Local_3586, 0);
				break;
			}
	}
}

void func_530(bool bParam0)//Position - 0x3A1FC
{
	bLocal_139 = bParam0;
}

void func_531(bool bParam0, int iParam1, int iParam2)//Position - 0x3A208
{
	if (bParam0)
	{
		iLocal_129 = 1;
		iLocal_2795 = iParam1;
		iLocal_2796 = iParam2;
	}
}

void func_532(int iParam0)//Position - 0x3A222
{
	iLocal_2794 = iParam0;
}

void func_533(bool bParam0)//Position - 0x3A22F
{
	bLocal_133 = bParam0;
}

void func_534()//Position - 0x3A23B
{
	Local_1844[0 /*3*/] = { -269.2346f, 272.0872f, 90.3265f };
	fLocal_140[0] = -0.0287f;
	fLocal_246[0] = -0.0274f;
	fLocal_352[0] = 0.7214f;
	fLocal_458[0] = 0.6914f;
	iLocal_1285[0] = 3;
	fLocal_564[0] = 0f;
	iLocal_2566[0] = joaat("baller");
	Local_1844[1 /*3*/] = { -226.7559f, 292.0566f, 92.0173f };
	fLocal_140[1] = 0f;
	fLocal_246[1] = 0f;
	fLocal_352[1] = 0.9999f;
	fLocal_458[1] = 0.0119f;
	iLocal_1285[1] = 2;
	fLocal_564[1] = 500f;
	iLocal_2566[1] = joaat("baller");
	Local_1844[2 /*3*/] = { -318.0732f, 258.0473f, 86.6976f };
	fLocal_140[2] = -0.0322f;
	fLocal_246[2] = -0.0153f;
	fLocal_352[2] = 0.8131f;
	fLocal_458[2] = 0.581f;
	iLocal_1285[2] = 4;
	fLocal_564[2] = 500f;
	iLocal_2566[2] = joaat("ninef2");
	Local_1844[3 /*3*/] = { -382.6178f, 231.0619f, 83.6473f };
	fLocal_140[3] = 0.0066f;
	fLocal_246[3] = -0.008f;
	fLocal_352[3] = -0.6558f;
	fLocal_458[3] = 0.7548f;
	iLocal_1285[3] = 6;
	fLocal_564[3] = 6072f;
	iLocal_2566[3] = joaat("jackal");
	Local_1844[4 /*3*/] = { -472.6657f, 252.0544f, 82.8362f };
	fLocal_140[4] = 0.0018f;
	fLocal_246[4] = 0.0015f;
	fLocal_352[4] = 0.6633f;
	fLocal_458[4] = 0.7483f;
	iLocal_1285[4] = 7;
	fLocal_564[4] = 9108f;
	iLocal_2566[4] = joaat("buffalo");
	Local_1844[5 /*3*/] = { -538.8723f, 199.7826f, 75.3031f };
	fLocal_140[5] = 0.1322f;
	fLocal_246[5] = 0.0002f;
	fLocal_352[5] = -0.0192f;
	fLocal_458[5] = 0.991f;
	iLocal_1285[5] = 10;
	fLocal_564[5] = 11088f;
	iLocal_2566[5] = joaat("tornado");
	Local_1844[6 /*3*/] = { -539.8965f, 255.4054f, 82.4098f };
	fLocal_140[6] = -0.0007f;
	fLocal_246[6] = -0.0014f;
	fLocal_352[6] = 0.9581f;
	fLocal_458[6] = 0.2865f;
	iLocal_1285[6] = 9;
	fLocal_564[6] = 12750f;
	iLocal_2566[6] = joaat("sentinel");
	Local_1844[7 /*3*/] = { -539.5698f, 280.9452f, 82.5083f };
	fLocal_140[7] = -0.0001f;
	fLocal_246[7] = -0.0001f;
	fLocal_352[7] = 0.9992f;
	fLocal_458[7] = 0.0409f;
	iLocal_1285[7] = 11;
	fLocal_564[7] = 12850f;
	iLocal_2566[7] = joaat("serrano");
	Local_1844[8 /*3*/] = { -633.0772f, 271.1177f, 81.5183f };
	fLocal_140[8] = -0.0052f;
	fLocal_246[8] = -0.0044f;
	fLocal_352[8] = 0.6509f;
	fLocal_458[8] = 0.7591f;
	iLocal_1285[8] = 13;
	fLocal_564[8] = 13900f;
	iLocal_2566[8] = joaat("baller");
	Local_1844[9 /*3*/] = { -613.1815f, 267.2222f, 81.5335f };
	fLocal_140[9] = -0.0084f;
	fLocal_246[9] = -0.0079f;
	fLocal_352[9] = 0.5968f;
	fLocal_458[9] = 0.8023f;
	iLocal_1285[9] = 12;
	fLocal_564[9] = 14000f;
	iLocal_2566[9] = joaat("tornado");
	Local_1844[10 /*3*/] = { -667.2612f, 252.6343f, 81.1762f };
	fLocal_140[10] = 0.0074f;
	fLocal_246[10] = -0.0049f;
	fLocal_352[10] = -0.5581f;
	fLocal_458[10] = 0.8298f;
	iLocal_1285[10] = 14;
	fLocal_564[10] = 15048f;
	iLocal_2566[10] = joaat("tornado");
	Local_1844[11 /*3*/] = { -775.299f, 210.8092f, 75.4151f };
	fLocal_140[11] = -0.0047f;
	fLocal_246[11] = 0.0035f;
	fLocal_352[11] = -0.6623f;
	fLocal_458[11] = 0.7492f;
	iLocal_1285[11] = 16;
	fLocal_564[11] = 18810f;
	iLocal_2566[11] = joaat("serrano");
	Local_1844[12 /*3*/] = { -774.7975f, 206.4167f, 75.4047f };
	fLocal_140[12] = -0.0066f;
	fLocal_246[12] = 0.0056f;
	fLocal_352[12] = -0.6593f;
	fLocal_458[12] = 0.7518f;
	iLocal_1285[12] = 17;
	fLocal_564[12] = 18876f;
	iLocal_2566[12] = joaat("buffalo");
	Local_1844[13 /*3*/] = { -745.6793f, 217.5777f, 75.4614f };
	fLocal_140[13] = -0.0008f;
	fLocal_246[13] = 0.0004f;
	fLocal_352[13] = -0.58f;
	fLocal_458[13] = 0.8146f;
	iLocal_1285[13] = 18;
	fLocal_564[13] = 19074f;
	iLocal_2566[13] = joaat("tornado");
	Local_1844[14 /*3*/] = { -805.5899f, 219.7039f, 75.2721f };
	fLocal_140[14] = -0.0093f;
	fLocal_246[14] = -0.0083f;
	fLocal_352[14] = 0.6901f;
	fLocal_458[14] = 0.7236f;
	iLocal_1285[14] = 19;
	fLocal_564[14] = 20000f;
	iLocal_2566[14] = joaat("serrano");
	Local_1844[15 /*3*/] = { -839.769f, 218.3051f, 73.4582f };
	fLocal_140[15] = -0.0132f;
	fLocal_246[15] = -0.0118f;
	fLocal_352[15] = 0.6663f;
	fLocal_458[15] = 0.7455f;
	iLocal_1285[15] = 20;
	fLocal_564[15] = 20460f;
	iLocal_2566[15] = joaat("emperor");
	Local_1844[16 /*3*/] = { -856.8807f, 196.2786f, 72.608f };
	fLocal_140[16] = 0.1009f;
	fLocal_246[16] = -0.002f;
	fLocal_352[16] = -0.0453f;
	fLocal_458[16] = 0.9939f;
	iLocal_1285[16] = 21;
	fLocal_564[16] = 21400f;
	iLocal_2566[16] = joaat("tornado");
	Local_1844[17 /*3*/] = { -858.5552f, 173.0333f, 67.9306f };
	fLocal_140[17] = 0.1077f;
	fLocal_246[17] = 0.0013f;
	fLocal_352[17] = -0.0262f;
	fLocal_458[17] = 0.9938f;
	iLocal_1285[17] = 22;
	fLocal_564[17] = 21648f;
	iLocal_2566[17] = joaat("tornado");
	Local_1844[18 /*3*/] = { -867.54f, 233.63f, 73.38f };
	fLocal_140[18] = 0.0029f;
	fLocal_246[18] = 0.0017f;
	fLocal_352[18] = 0.7365f;
	fLocal_458[18] = 0.6764f;
	iLocal_1285[18] = 15;
	fLocal_564[18] = 22000f;
	iLocal_2566[18] = joaat("jackal");
	Local_1844[19 /*3*/] = { -885.0156f, 216.7224f, 72.9075f };
	fLocal_140[19] = -0.0254f;
	fLocal_246[19] = 0.0404f;
	fLocal_352[19] = 0.8137f;
	fLocal_458[19] = -0.5793f;
	iLocal_1285[19] = 24;
	fLocal_564[19] = 22242f;
	iLocal_2566[19] = joaat("tornado");
	Local_1844[20 /*3*/] = { -935.3688f, 242.8499f, 69.7386f };
	fLocal_140[20] = -0.0029f;
	fLocal_246[20] = 0.0039f;
	fLocal_352[20] = 0.8121f;
	fLocal_458[20] = -0.5835f;
	iLocal_1285[20] = 25;
	fLocal_564[20] = 23562f;
	iLocal_2566[20] = joaat("serrano");
	Local_1844[21 /*3*/] = { -1106.023f, 267.2069f, 63.9306f };
	fLocal_140[21] = 0.0322f;
	fLocal_246[21] = -0.0271f;
	fLocal_352[21] = 0.7282f;
	fLocal_458[21] = -0.6841f;
	iLocal_1285[21] = 26;
	fLocal_564[21] = 29367f;
	iLocal_2566[21] = joaat("f620");
	Local_1844[22 /*3*/] = { -1146.946f, 244.4222f, 66.2596f };
	fLocal_140[22] = -0.0129f;
	fLocal_246[22] = 0.0093f;
	fLocal_352[22] = -0.5717f;
	fLocal_458[22] = 0.8203f;
	iLocal_1285[22] = 27;
	fLocal_564[22] = 31149f;
	iLocal_2566[22] = joaat("ninef2");
	Local_1844[23 /*3*/] = { -1146.522f, 280.703f, 66.1987f };
	fLocal_140[23] = 0.0065f;
	fLocal_246[23] = -0.0253f;
	fLocal_352[23] = 0.9996f;
	fLocal_458[23] = -0.0069f;
	iLocal_1285[23] = 5;
	fLocal_564[23] = 31553f;
	iLocal_2566[23] = joaat("tornado");
	Local_1844[24 /*3*/] = { -1184.546f, 240.2789f, 67.3019f };
	fLocal_140[24] = 0.0027f;
	fLocal_246[24] = -0.0023f;
	fLocal_352[24] = -0.6313f;
	fLocal_458[24] = 0.7755f;
	iLocal_1285[24] = 28;
	fLocal_564[24] = 33000f;
	iLocal_2566[24] = joaat("rapidgt2");
	Local_1844[25 /*3*/] = { -1233.575f, 227.3869f, 64.6991f };
	fLocal_140[25] = 0.0322f;
	fLocal_246[25] = -0.0193f;
	fLocal_352[25] = -0.6721f;
	fLocal_458[25] = 0.7395f;
	iLocal_1285[25] = 29;
	fLocal_564[25] = 34317f;
	iLocal_2566[25] = joaat("rapidgt2");
	Local_1844[26 /*3*/] = { -1384.736f, 225.24f, 58.3821f };
	fLocal_140[26] = 0.0071f;
	fLocal_246[26] = -0.0076f;
	fLocal_352[26] = 0.9563f;
	fLocal_458[26] = 0.2922f;
	iLocal_1285[26] = 8;
	fLocal_564[26] = 40977f;
	iLocal_2566[26] = joaat("rapidgt2");
	Local_1844[27 /*3*/] = { -1428.758f, 129.0681f, 52.6718f };
	fLocal_140[27] = 0.0301f;
	fLocal_246[27] = -0.0057f;
	fLocal_352[27] = -0.1124f;
	fLocal_458[27] = 0.9932f;
	iLocal_1285[27] = 37;
	fLocal_564[27] = 44235f;
	iLocal_2566[27] = joaat("jackal");
	Local_1844[28 /*3*/] = { -1415.923f, -38.1466f, 52.6835f };
	fLocal_140[28] = -0.0344f;
	fLocal_246[28] = -0.0023f;
	fLocal_352[28] = 0.1209f;
	fLocal_458[28] = 0.9921f;
	iLocal_1285[28] = 38;
	fLocal_564[28] = 46875f;
	iLocal_2566[28] = joaat("jackal");
	Local_1844[29 /*3*/] = { -1461.872f, -1.2539f, 53.115f };
	fLocal_140[29] = -0.0285f;
	fLocal_246[29] = 0.0263f;
	fLocal_352[29] = -0.6578f;
	fLocal_458[29] = 0.7522f;
	iLocal_1285[29] = 30;
	fLocal_564[29] = 48436f;
	iLocal_2566[29] = joaat("f620");
	Local_1844[30 /*3*/] = { -1483.081f, -3.5968f, 54.859f };
	fLocal_140[30] = -0.0293f;
	fLocal_246[30] = 0.0225f;
	fLocal_352[30] = -0.6524f;
	fLocal_458[30] = 0.757f;
	iLocal_1285[30] = 32;
	fLocal_564[30] = 48700f;
	iLocal_2566[30] = joaat("f620");
	Local_1844[31 /*3*/] = { -1414.154f, -55.0295f, 52.6736f };
	fLocal_140[31] = -0.0002f;
	fLocal_246[31] = 0.0041f;
	fLocal_352[31] = 0.9726f;
	fLocal_458[31] = -0.2324f;
	iLocal_1285[31] = 34;
	fLocal_564[31] = 50284f;
	iLocal_2566[31] = joaat("rapidgt2");
	Local_1844[32 /*3*/] = { -1396.243f, -76.9218f, 52.4577f };
	fLocal_140[32] = 0.002f;
	fLocal_246[32] = 0.0013f;
	fLocal_352[32] = -0.3998f;
	fLocal_458[32] = 0.9166f;
	iLocal_1285[32] = 35;
	fLocal_564[32] = 51274f;
	iLocal_2566[32] = joaat("rapidgt2");
	Local_1844[33 /*3*/] = { -1493.368f, -117.2529f, 50.9595f };
	fLocal_140[33] = 0.0127f;
	fLocal_246[33] = 0.02f;
	fLocal_352[33] = 0.9109f;
	fLocal_458[33] = 0.412f;
	iLocal_1285[33] = 23;
	fLocal_564[33] = 55000f;
	iLocal_2566[33] = joaat("rapidgt2");
	Local_1844[34 /*3*/] = { -1540.304f, -198.9243f, 54.7733f };
	fLocal_140[34] = 0.029f;
	fLocal_246[34] = 0.0106f;
	fLocal_352[34] = 0.3732f;
	fLocal_458[34] = 0.9272f;
	iLocal_1285[34] = 39;
	fLocal_564[34] = 56554f;
	iLocal_2566[34] = joaat("f620");
	Local_1844[35 /*3*/] = { -1598.037f, -225.209f, 54.481f };
	fLocal_140[35] = 0.013f;
	fLocal_246[35] = -0.0017f;
	fLocal_352[35] = -0.2635f;
	fLocal_458[35] = 0.9646f;
	iLocal_1285[35] = 41;
	fLocal_564[35] = 59722f;
	iLocal_2566[35] = joaat("rapidgt2");
	Local_1844[36 /*3*/] = { -1659.984f, -349.6841f, 49.2819f };
	fLocal_140[36] = 0.0142f;
	fLocal_246[36] = -0.0097f;
	fLocal_352[36] = -0.4908f;
	fLocal_458[36] = 0.8711f;
	iLocal_1285[36] = 44;
	fLocal_564[36] = 63220f;
	iLocal_2566[36] = joaat("rocoto");
	Local_1844[37 /*3*/] = { -1597.304f, -303.3082f, 50.039f };
	fLocal_140[37] = 0.0527f;
	fLocal_246[37] = 0.0303f;
	fLocal_352[37] = 0.3903f;
	fLocal_458[37] = 0.9187f;
	iLocal_1285[37] = 31;
	fLocal_564[37] = 63577f;
	iLocal_2566[37] = joaat("rapidgt2");
	Local_1844[38 /*3*/] = { -1690.827f, -361.693f, 47.932f };
	fLocal_140[38] = 0.0122f;
	fLocal_246[38] = -0.0118f;
	fLocal_352[38] = -0.6151f;
	fLocal_458[38] = 0.7883f;
	iLocal_1285[38] = 47;
	fLocal_564[38] = 64012f;
	iLocal_2566[38] = joaat("rapidgt2");
	Local_1844[39 /*3*/] = { -1679.795f, -344.0163f, 48.5221f };
	fLocal_140[39] = -0.0063f;
	fLocal_246[39] = -0.0182f;
	fLocal_352[39] = 0.7411f;
	fLocal_458[39] = 0.6711f;
	iLocal_1285[39] = 45;
	fLocal_564[39] = 64150f;
	iLocal_2566[39] = joaat("f620");
	Local_1844[40 /*3*/] = { -1731.02f, -428.0725f, 43.3807f };
	fLocal_140[40] = 0.0134f;
	fLocal_246[40] = 0.0047f;
	fLocal_352[40] = -0.3262f;
	fLocal_458[40] = 0.9452f;
	iLocal_1285[40] = 55;
	fLocal_564[40] = 66572f;
	iLocal_2566[40] = joaat("rocoto");
	Local_1844[41 /*3*/] = { -1798.417f, -458.2988f, 41.0861f };
	fLocal_140[41] = -0.0036f;
	fLocal_246[41] = -0.0442f;
	fLocal_352[41] = 0.8837f;
	fLocal_458[41] = -0.466f;
	iLocal_1285[41] = 49;
	fLocal_564[41] = 68266f;
	iLocal_2566[41] = joaat("f620");
	Local_1844[42 /*3*/] = { -1718.554f, -516.9016f, 37.0122f };
	fLocal_140[42] = 0.0053f;
	fLocal_246[42] = 0.0289f;
	fLocal_352[42] = 0.3998f;
	fLocal_458[42] = 0.9161f;
	iLocal_1285[42] = 40;
	fLocal_564[42] = 69540f;
	iLocal_2566[42] = joaat("f620");
	Local_1844[43 /*3*/] = { -1667.685f, -555.511f, 34.1023f };
	fLocal_140[43] = 0.0205f;
	fLocal_246[43] = 0.0384f;
	fLocal_352[43] = 0.4254f;
	fLocal_458[43] = 0.904f;
	iLocal_1285[43] = 56;
	fLocal_564[43] = 73040f;
	iLocal_2566[43] = joaat("rocoto");
	Local_1844[44 /*3*/] = { -1647.086f, -565.3936f, 32.9925f };
	fLocal_140[44] = -0.0032f;
	fLocal_246[44] = -0.0033f;
	fLocal_352[44] = 0.9523f;
	fLocal_458[44] = 0.305f;
	iLocal_1285[44] = 50;
	fLocal_564[44] = 74836f;
	iLocal_2566[44] = joaat("rapidgt2");
	Local_1844[45 /*3*/] = { -1606.462f, -607.856f, 31.5569f };
	fLocal_140[45] = 0.022f;
	fLocal_246[45] = 0.0106f;
	fLocal_352[45] = 0.4308f;
	fLocal_458[45] = 0.9021f;
	iLocal_1285[45] = 51;
	fLocal_564[45] = 75166f;
	iLocal_2566[45] = joaat("rapidgt2");
	Local_1844[46 /*3*/] = { -1594.087f, -521.4292f, 34.9854f };
	fLocal_140[46] = -0.0077f;
	fLocal_246[46] = -0.0061f;
	fLocal_352[46] = 0.8805f;
	fLocal_458[46] = 0.4739f;
	iLocal_1285[46] = 33;
	fLocal_564[46] = 75476f;
	iLocal_2566[46] = joaat("rapidgt2");
	Local_1844[47 /*3*/] = { -1546.927f, -671.7556f, 28.4704f };
	fLocal_140[47] = 0.002f;
	fLocal_246[47] = -0.0044f;
	fLocal_352[47] = 0.9056f;
	fLocal_458[47] = -0.4241f;
	iLocal_1285[47] = 54;
	fLocal_564[47] = 78004f;
	iLocal_2566[47] = joaat("rapidgt2");
	Local_2160[0 /*3*/] = { -283.4568f, 251.5497f, 88.9099f };
	fLocal_980[0] = 0.0365f;
	fLocal_1051[0] = -0.0067f;
	fLocal_1122[0] = -0.6704f;
	fLocal_1193[0] = 0.7411f;
	iLocal_2672[0] = joaat("ninef2");
	Local_2160[1 /*3*/] = { -339.4699f, 293.5367f, 85.4549f };
	fLocal_980[1] = 0.0214f;
	fLocal_1051[1] = -0.0196f;
	fLocal_1122[1] = -0.6993f;
	fLocal_1193[1] = 0.7142f;
	iLocal_2672[1] = joaat("baller");
	Local_2160[2 /*3*/] = { -349.3771f, 286.2561f, 84.4616f };
	fLocal_980[2] = -0.0255f;
	fLocal_1051[2] = -0.0264f;
	fLocal_1122[2] = 0.698f;
	fLocal_1193[2] = 0.7152f;
	iLocal_2672[2] = joaat("emperor");
	Local_2160[3 /*3*/] = { -365.4896f, 231.2178f, 84.2379f };
	fLocal_980[3] = 0.0266f;
	fLocal_1051[3] = 0.0114f;
	fLocal_1122[3] = -0.6726f;
	fLocal_1193[3] = 0.7394f;
	iLocal_2672[3] = joaat("jackal");
	Local_2160[4 /*3*/] = { -438.549f, 254.1521f, 82.2881f };
	fLocal_980[4] = -0.0259f;
	fLocal_1051[4] = 0.0162f;
	fLocal_1122[4] = 0.6577f;
	fLocal_1193[4] = 0.7527f;
	iLocal_2672[4] = joaat("sentinel");
	Local_2160[5 /*3*/] = { -1501.324f, -686.0034f, 27.149f };
	fLocal_980[5] = 0.0131f;
	fLocal_1051[5] = 0.0418f;
	fLocal_1122[5] = 0.46f;
	fLocal_1193[5] = 0.8869f;
	iLocal_2672[5] = joaat("mesa");
	Local_2160[6 /*3*/] = { -501.7928f, 241.8177f, 82.6462f };
	fLocal_980[6] = -0.0166f;
	fLocal_1051[6] = -0.0207f;
	fLocal_1122[6] = 0.7367f;
	fLocal_1193[6] = -0.6758f;
	iLocal_2672[6] = joaat("jackal");
	Local_2160[7 /*3*/] = { -488.9706f, 270.0654f, 82.7035f };
	fLocal_980[7] = -0.0005f;
	fLocal_1051[7] = -0.0128f;
	fLocal_1122[7] = 0.7263f;
	fLocal_1193[7] = -0.6873f;
	iLocal_2672[7] = joaat("emperor");
	Local_2160[8 /*3*/] = { -573.4771f, 269.1175f, 82.3261f };
	fLocal_980[8] = -0.0337f;
	fLocal_1051[8] = 0.0059f;
	fLocal_1122[8] = 0.6577f;
	fLocal_1193[8] = 0.7525f;
	iLocal_2672[8] = joaat("rapidgt2");
	Local_2160[9 /*3*/] = { -608.2574f, 252.178f, 81.3708f };
	fLocal_980[9] = -0.0217f;
	fLocal_1051[9] = -0.0091f;
	fLocal_1122[9] = 0.7397f;
	fLocal_1193[9] = -0.6725f;
	iLocal_2672[9] = joaat("rapidgt2");
	Local_2160[10 /*3*/] = { -684.0115f, 237.1335f, 80.5793f };
	fLocal_980[10] = 0.0148f;
	fLocal_1051[10] = 0.014f;
	fLocal_1122[10] = -0.5278f;
	fLocal_1193[10] = 0.8491f;
	iLocal_2672[10] = joaat("jackal");
	Local_2160[11 /*3*/] = { -687.9144f, 293.193f, 82.1187f };
	fLocal_980[11] = 0.006f;
	fLocal_1051[11] = 0.0308f;
	fLocal_1122[11] = 0.6746f;
	fLocal_1193[11] = 0.7375f;
	iLocal_2672[11] = joaat("ninef2");
	Local_2160[12 /*3*/] = { -699.9624f, 258.1157f, 80.4591f };
	fLocal_980[12] = -0.0385f;
	fLocal_1051[12] = -0.0023f;
	fLocal_1122[12] = 0.8429f;
	fLocal_1193[12] = 0.5367f;
	iLocal_2672[12] = joaat("jackal");
	Local_2160[13 /*3*/] = { -707.4021f, 254.6637f, 80.0296f };
	fLocal_980[13] = -0.0446f;
	fLocal_1051[13] = 0.0053f;
	fLocal_1122[13] = 0.8525f;
	fLocal_1193[13] = 0.5207f;
	iLocal_2672[13] = joaat("ninef2");
	Local_2160[14 /*3*/] = { -726.7914f, 295.457f, 84.471f };
	fLocal_980[14] = -0.0084f;
	fLocal_1051[14] = 0.0234f;
	fLocal_1122[14] = 0.7017f;
	fLocal_1193[14] = 0.712f;
	iLocal_2672[14] = joaat("jackal");
	Local_2160[15 /*3*/] = { -727.1002f, 245.5221f, 77.8995f };
	fLocal_980[15] = -0.071f;
	fLocal_1051[15] = -0.0493f;
	fLocal_1122[15] = 0.8491f;
	fLocal_1193[15] = 0.521f;
	iLocal_2672[15] = joaat("rapidgt2");
	Local_2160[16 /*3*/] = { -1248.643f, 253.0192f, 63.5542f };
	fLocal_980[16] = -0.0102f;
	fLocal_1051[16] = -0.0354f;
	fLocal_1122[16] = 0.2844f;
	fLocal_1193[16] = 0.958f;
	iLocal_2672[16] = joaat("rapidgt2");
	Local_2160[17 /*3*/] = { -1480.416f, -610.0646f, 30.5239f };
	fLocal_980[17] = -0.026f;
	fLocal_1051[17] = 0.0011f;
	fLocal_1122[17] = 0.8868f;
	fLocal_1193[17] = 0.4614f;
	iLocal_2672[17] = joaat("rocoto");
	Local_2160[18 /*3*/] = { -1590.786f, -644.4308f, 29.8759f };
	fLocal_980[18] = -0.0146f;
	fLocal_1051[18] = -0.0321f;
	fLocal_1122[18] = 0.8915f;
	fLocal_1193[18] = -0.4517f;
	iLocal_2672[18] = joaat("rocoto");
	Local_2160[19 /*3*/] = { -1509.817f, -679.0406f, 27.7404f };
	fLocal_980[19] = 0.0124f;
	fLocal_1051[19] = 0.0412f;
	fLocal_1122[19] = 0.4361f;
	fLocal_1193[19] = 0.8989f;
	iLocal_2672[19] = joaat("mesa");
	Local_2160[20 /*3*/] = { -1288.866f, 266.9813f, 63.7359f };
	fLocal_980[20] = 0.0373f;
	fLocal_1051[20] = -0.0101f;
	fLocal_1122[20] = -0.2742f;
	fLocal_1193[20] = 0.9609f;
	iLocal_2672[20] = joaat("rapidgt2");
	Local_2160[21 /*3*/] = { -1608.512f, -630.4704f, 30.6462f };
	fLocal_980[21] = -0.0159f;
	fLocal_1051[21] = -0.032f;
	fLocal_1122[21] = 0.881f;
	fLocal_1193[21] = -0.4718f;
	iLocal_2672[21] = joaat("mesa");
	Local_2160[22 /*3*/] = { -1351.1f, 244.0114f, 59.8691f };
	fLocal_980[22] = -0.022f;
	fLocal_1051[22] = -0.0512f;
	fLocal_1122[22] = 0.9952f;
	fLocal_1193[22] = -0.081f;
	iLocal_2672[22] = joaat("rapidgt2");
	Local_2160[23 /*3*/] = { -1580.129f, -214.9907f, 54.3721f };
	fLocal_980[23] = 0.0235f;
	fLocal_1051[23] = 0.0162f;
	fLocal_1122[23] = -0.3399f;
	fLocal_1193[23] = 0.94f;
	iLocal_2672[23] = joaat("rapidgt2");
	Local_2160[24 /*3*/] = { -1584.412f, -220.3301f, 54.2076f };
	fLocal_980[24] = 0.0181f;
	fLocal_1051[24] = 0.0231f;
	fLocal_1122[24] = -0.3403f;
	fLocal_1193[24] = 0.9399f;
	iLocal_2672[24] = joaat("rapidgt2");
	Local_2160[25 /*3*/] = { -1644.841f, -347.85f, 49.4095f };
	fLocal_980[25] = 0.0212f;
	fLocal_1051[25] = 0.0147f;
	fLocal_1122[25] = -0.44f;
	fLocal_1193[25] = 0.8976f;
	iLocal_2672[25] = joaat("rapidgt2");
	Local_2160[26 /*3*/] = { -1684.964f, -570.7172f, 34.4679f };
	fLocal_980[26] = -0.0007f;
	fLocal_1051[26] = -0.0608f;
	fLocal_1122[26] = 0.8986f;
	fLocal_1193[26] = -0.4345f;
	iLocal_2672[26] = joaat("rocoto");
	Local_2160[27 /*3*/] = { -1706.158f, -408.2234f, 44.9785f };
	fLocal_980[27] = 0.0492f;
	fLocal_1051[27] = 0.0021f;
	fLocal_1122[27] = -0.3248f;
	fLocal_1193[27] = 0.9445f;
	iLocal_2672[27] = joaat("rapidgt2");
	Local_2160[28 /*3*/] = { -1785.54f, -505.2336f, 38.3513f };
	fLocal_980[28] = -0.0003f;
	fLocal_1051[28] = -0.0001f;
	fLocal_1122[28] = -0.4654f;
	fLocal_1193[28] = 0.8851f;
	iLocal_2672[28] = joaat("rapidgt2");
	Local_2160[29 /*3*/] = { -1775.093f, -516.8105f, 38.3838f };
	fLocal_980[29] = -0.0029f;
	fLocal_1051[29] = -0.0028f;
	fLocal_1122[29] = 0.8619f;
	fLocal_1193[29] = 0.507f;
	iLocal_2672[29] = joaat("rapidgt2");
	Local_2160[30 /*3*/] = { -1770.088f, -522.83f, 38.5967f };
	fLocal_980[30] = -0.0029f;
	fLocal_1051[30] = 0.0006f;
	fLocal_1122[30] = 0.8626f;
	fLocal_1193[30] = 0.5059f;
	iLocal_2672[30] = joaat("rocoto");
	Local_2160[31 /*3*/] = { -1700.482f, -560.2477f, 35.9312f };
	fLocal_980[31] = -0.0021f;
	fLocal_1051[31] = -0.0624f;
	fLocal_1122[31] = 0.8919f;
	fLocal_1193[31] = -0.4478f;
	iLocal_2672[31] = joaat("rocoto");
	Local_2160[32 /*3*/] = { -1690.104f, -567.152f, 34.994f };
	fLocal_980[32] = -0.0034f;
	fLocal_1051[32] = -0.0581f;
	fLocal_1122[32] = 0.8833f;
	fLocal_1193[32] = -0.4651f;
	iLocal_2672[32] = joaat("rocoto");
	Local_2371[0 /*3*/] = { -143.9162f, 258.2889f, 94.5251f };
	fLocal_674[0] = -0.0303f;
	fLocal_725[0] = -0.0223f;
	fLocal_776[0] = 0.6939f;
	fLocal_827[0] = 0.7191f;
	iLocal_1603[0] = 57;
	fLocal_878[0] = 0f;
	fLocal_929[0] = 0.93f;
	iLocal_2743[0] = joaat("buffalo");
	Local_2371[1 /*3*/] = { -219.1163f, 226.1757f, 88.5679f };
	fLocal_674[1] = 0.109f;
	fLocal_725[1] = 0.0087f;
	fLocal_776[1] = 0.0041f;
	fLocal_827[1] = 0.994f;
	iLocal_1603[1] = 59;
	fLocal_878[1] = 250f;
	fLocal_929[1] = 0.93f;
	iLocal_2743[1] = joaat("jackal");
	Local_2371[2 /*3*/] = { -277.7864f, 257.1765f, 89.5156f };
	fLocal_674[2] = 0.0246f;
	fLocal_725[2] = -0.0264f;
	fLocal_776[2] = -0.6748f;
	fLocal_827[2] = 0.7371f;
	iLocal_1603[2] = 58;
	fLocal_878[2] = 400f;
	fLocal_929[2] = 0.93f;
	iLocal_2743[2] = joaat("jackal");
	Local_2371[3 /*3*/] = { -1338.068f, 205.2171f, 58.2626f };
	fLocal_674[3] = 0.0094f;
	fLocal_725[3] = 0.0224f;
	fLocal_776[3] = -0.6916f;
	fLocal_827[3] = 0.7219f;
	iLocal_1603[3] = 36;
	fLocal_878[3] = 37978f;
	fLocal_929[3] = 0.93f;
	iLocal_2743[3] = joaat("jackal");
	Local_2371[4 /*3*/] = { -524.0712f, 250.765f, 82.5395f };
	fLocal_674[4] = -0.0022f;
	fLocal_725[4] = 0.0037f;
	fLocal_776[4] = 0.7477f;
	fLocal_827[4] = -0.6641f;
	iLocal_1603[4] = 42;
	fLocal_878[4] = 10151f;
	fLocal_929[4] = 0.93f;
	iLocal_2743[4] = joaat("buffalo");
	Local_2371[5 /*3*/] = { -640.2011f, 258.073f, 80.871f };
	fLocal_674[5] = -0.0265f;
	fLocal_725[5] = -0.002f;
	fLocal_776[5] = 0.7299f;
	fLocal_827[5] = -0.683f;
	iLocal_1603[5] = 43;
	fLocal_878[5] = 13517f;
	fLocal_929[5] = 0.93f;
	iLocal_2743[5] = joaat("buffalo");
	Local_2371[6 /*3*/] = { -1062.928f, 258.7392f, 63.7718f };
	fLocal_674[6] = -0.0022f;
	fLocal_725[6] = 0.006f;
	fLocal_776[6] = 0.7219f;
	fLocal_827[6] = -0.692f;
	iLocal_1603[6] = 46;
	fLocal_878[6] = 26981f;
	fLocal_929[6] = 0.93f;
	iLocal_2743[6] = joaat("jackal");
}

void func_535(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3C2B0
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2549, sParam0, 64);
	iLocal_116 = 1;
	iLocal_121 = 0;
	iLocal_1827 = 0;
	iLocal_1828 = 0;
	iLocal_1829 = 0;
	iLocal_1830 = iParam1;
	iLocal_1831 = 0;
	iLocal_1832 = 0;
	iLocal_1833 = 0;
	iLocal_1837 = 0;
	iLocal_1840 = 0;
	iLocal_1838 = -1;
	iLocal_1839 = -1;
	iLocal_1841 = 0;
	iLocal_1842 = 0;
	fLocal_1280 = 0f;
	fLocal_1281 = 0f;
	fLocal_1266 = 0f;
	iLocal_122 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2525.x = (Var0.x - 100f);
		Local_2525.f_1 = (Var0.f_1 - 100f);
		Local_2525.f_2 = (Var0.f_2 - 100f);
		Local_2528.x = (Var0.x + 100f);
		Local_2528.f_1 = (Var0.f_1 + 100f);
		Local_2528.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2525, Local_2528, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2565);
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
	func_479();
}

void func_536()//Position - 0x3C3D2
{
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	switch (iLocal_3078)
	{
		case 0:
			if (!bLocal_3184)
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -152.3902f, 279.5714f, 92.8134f, 106.6662f, 0, 0);
					if (iLocal_3185 == 0)
					{
						if (iLocal_3077 == 1)
						{
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
							{
								GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
								iLocal_3185 = 1;
							}
						}
					}
				}
				GlobalFunc_130(&(Local_3079.f_41[0]));
				GlobalFunc_881(&(Local_3079.f_28[0]));
				func_553();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
				{
					AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_INTRO");
				}
				func_551(1);
				func_550();
				func_549();
				if (!GlobalFunc_188())
				{
					if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
					{
						PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
						func_184("waive_comeback_f", 1000f, -8f, -1, 528384, 0.589f, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3486, 0, 0);
					}
				}
				if (!GlobalFunc_188())
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
				}
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3486, -1, 0, 2);
				if (!GlobalFunc_188())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(11.7337f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7.2753f, 1065353216);
				}
				iLocal_3078 = 2;
			}
			else
			{
				if (GlobalFunc_115(Local_3079.f_28[0]))
				{
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(sLocal_3308, Local_3079.f_28[0], 0);
					}
				}
				GlobalFunc_8535();
				if ((func_546() && func_545()) || func_544())
				{
					GlobalFunc_10538("PAP_1_RCM", 0);
					if (GlobalFunc_8027(1, 1093140480, 0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_3307, 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3486, sLocal_3308, 2, Local_3486.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3542, sLocal_3309, 2, Local_3542.f_10, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3553, sLocal_3310, 2, Local_3553.f_10, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3528, sLocal_3312, 2, Local_3528.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3493, sLocal_3313, 2, Local_3493.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_3500, sLocal_3314, 2, Local_3500.f_1, 0);
						GlobalFunc_79(800, 0);
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						GlobalFunc_130(&(Local_3079.f_41[0]));
						GlobalFunc_881(&(Local_3079.f_28[0]));
						GlobalFunc_9161();
						func_333(-149.75f, 285.81f, 93.67f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						func_553();
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
						{
							if (!GlobalFunc_188() && bLocal_3184)
							{
								AUDIO::START_AUDIO_SCENE("PAPARAZZO_01_INTRO");
							}
						}
						func_550();
						func_551(0);
						iLocal_3078 = 1;
					}
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE("PAP_1_RCM", 8);
					GlobalFunc_8316(1, 1, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3542))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3309, 0)))
				{
					Local_3542 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3309, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3553))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3310, 0)))
				{
					Local_3553 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3310, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3528))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3312, 0)))
				{
					Local_3528 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3312, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3493))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3313, 0)))
				{
					Local_3493 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3313, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3500))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3314, 0)))
				{
					Local_3500 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3314, 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_3486))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3308, 0)))
				{
					Local_3486 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_3308, 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3308, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_3486, Local_3486.f_3, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_3486, Local_3486.f_6);
					}
					if (GlobalFunc_115(Local_3553) && GlobalFunc_115(Local_3542))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3310, 0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3553, Local_3542, 0, Local_3553.f_4, Local_3553.f_7, 0, 0, 0, 0, 2, 1);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3309, 0))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3542, Local_3486, PED::GET_PED_BONE_INDEX(Local_3486, 28422), Local_3542.f_4, Local_3542.f_7, 0, 0, 0, 0, 2, 1);
						}
					}
					func_541();
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(Local_3486, sLocal_3316);
					func_184("waive_comeback_f", 1000f, -1065353216, -1, 0, 0, 0, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_3486, 0, 0);
				}
			}
			if (GlobalFunc_4947(Local_3528))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3313, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3493, Local_3528))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3493);
							PED::SET_PED_INTO_VEHICLE(Local_3493, Local_3528, 2);
						}
						func_540();
					}
				}
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_3500))
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3314, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_3500, Local_3528))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_3500);
							PED::SET_PED_INTO_VEHICLE(Local_3500, Local_3528, -1);
						}
						func_539();
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3312, 0))
				{
					func_538();
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_3307, 0))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3486, -1, 0, 2);
				}
				bLocal_3193 = true;
			}
			if (!bLocal_3193)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::IS_SCREEN_FADED_OUT())
			{
				RECORDING::_0x81CBAE94390F9F89();
				MISC::CLEAR_AREA_OF_VEHICLES(-162.4299f, 279.9136f, 92.71819f, 200f, 0, 0, 0, 0, 0);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_551(1);
				func_549();
				if (bLocal_3184)
				{
					GlobalFunc_79(500, 0);
				}
				iLocal_3078 = 2;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 102000)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3260, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3261))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3261, 2);
				}
				func_551(0);
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			else
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				if (bLocal_3184)
				{
					func_69(1, 1, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3260, 3);
				}
				GlobalFunc_5721(&iLocal_3260, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3261))
				{
					ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3261, 3);
				}
				GlobalFunc_5721(&iLocal_3261, 0);
				GlobalFunc_4923(&Local_3079, 0, 1);
				func_332(1);
			}
			break;
	}
}


void func_538()//Position - 0x3CB89
{
	if (GlobalFunc_4947(Local_3528))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_3528);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3528, 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_3528, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(Local_3528, 0, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_3528, 0);
		VEHICLE::SET_VEHICLE_STRONG(Local_3528, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3528, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_3528, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3528, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3528, 0);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3528, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_3528, 3, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_3528, 2, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_3528, 3, 0);
		ENTITY::SET_ENTITY_COORDS(Local_3528, Local_3528.f_3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_QUATERNION(Local_3528, -0.0362f, 0.0042f, 0.6776f, 0.7345f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_3528, 1);
	}
}

void func_539()//Position - 0x3CC45
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3500))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_3500, 0);
		PED::ADD_ARMOUR_TO_PED(Local_3500, 100);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_3500, 0);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_3500, 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_3500, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3500, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3500, 42, 1);
		if (PED::IS_PED_IN_GROUP(Local_3500))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_3500);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3500, iLocal_3300);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3500, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3500, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3500, 116, 0);
	}
}

void func_540()//Position - 0x3CCCB
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
	{
		PED::SET_PED_CAN_BE_TARGETTED(Local_3493, 0);
		PED::ADD_ARMOUR_TO_PED(Local_3493, 100);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3493, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_3493, 0);
		PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_3493, 0);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_3493, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3493, 32, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3493, 42, 1);
		if (PED::IS_PED_IN_GROUP(Local_3493))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_3493);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3493, iLocal_3300);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3493, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3493, 29, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3493, 116, 0);
	}
}

void func_541()//Position - 0x3CD59
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_3486, 9, 1, 0, 0);
		PED::SET_PED_HELMET(Local_3486, 0);
		ENTITY::SET_ENTITY_VISIBLE(Local_3486, 1);
		PED::SET_PED_CAN_BE_TARGETTED(Local_3486, 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_3486, 0);
		PED::ADD_ARMOUR_TO_PED(Local_3486, 100);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_3486, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_3486, 0);
		PED::SET_PED_CONFIG_FLAG(Local_3486, 42, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3486, 132, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3486, 118, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3486, 167, 1);
		PED::SET_PED_CONFIG_FLAG(Local_3486, 185, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_3486, 0);
		PED::SET_PED_DIES_IN_WATER(Local_3486, 1);
		PED::SET_PED_DIES_IN_SINKING_VEHICLE(Local_3486, 1);
		PED::SET_PED_MAX_TIME_IN_WATER(Local_3486, 2f);
		PED::SET_PED_MAX_TIME_UNDERWATER(Local_3486, 2f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_3486, 1);
		if (PED::IS_PED_IN_GROUP(Local_3486))
		{
			PED::REMOVE_PED_FROM_GROUP(Local_3486);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_3486, iLocal_3299);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_3486, 1);
		GlobalFunc_173(&uLocal_3321, 3, Local_3486, "BEVERLY", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_3486, 1);
	}
}



int func_544()//Position - 0x3CE85
{
	if (((GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0)) || GlobalFunc_188()) || !bLocal_3184)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -150.3629f, 287.136f, 91.13553f, -150.4198f, 282.0286f, 97.26382f, 6.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_545()//Position - 0x3CEED
{
	char* sVar0;
	float fVar1;
	
	sVar0 = "rcmpaparazzo1beckon";
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3079.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3079.f_28[0], sVar0, "pap_idle_01", 3))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3079.f_28[0], sVar0, "pap_idle_action_01", 3))
		{
			fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_3079.f_28[0], sVar0, "pap_idle_action_01");
			if (fVar1 < 0.198f || fVar1 > 0.957f)
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3079.f_28[0], sVar0, "pap_idle_02", 3))
		{
			return 1;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_3079.f_28[0], sVar0, "pap_idle_action_02", 3))
		{
			fVar1 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_3079.f_28[0], sVar0, "pap_idle_action_02");
			if (fVar1 < 0.027f || fVar1 > 0.942f)
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

int func_546()//Position - 0x3CFE4
{
	if (iLocal_3256 == 0)
	{
		if (GlobalFunc_115(Local_3079.f_28[0]))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_3079.f_28[0], 6.5f))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_3079.f_28[0], 0f, 0f, 0f, 1, -1, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.37f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.7f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0.1f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_FOV(35f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				iLocal_3257 = MISC::GET_GAME_TIMER();
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3079.f_28[0], 0);
				}
				iLocal_3257 = -1;
			}
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3079.f_28[0], 4000, 0, 2);
		}
		iLocal_3256++;
	}
	else if (iLocal_3256 == 1)
	{
		if (iLocal_3257 == -1 || (MISC::GET_GAME_TIMER() - iLocal_3257) > 3000)
		{
			return 1;
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	return 0;
}



void func_549()//Position - 0x3D147
{
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_3321, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), 1);
	}
	GlobalFunc_881(&(Local_3079.f_28[0]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3486))
	{
		Local_3486 = PED::CREATE_PED(26, Local_3486.f_1, Local_3486.f_3, Local_3486.f_6, 1, 1);
		func_541();
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
	{
		GlobalFunc_130(&(Local_3079.f_41[0]));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3542))
		{
			Local_3542.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3486, 0f, 0f, 2.5f) };
			Local_3542 = OBJECT::CREATE_OBJECT(Local_3542.f_10, Local_3542.f_1, 1, 1, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3553))
		{
			Local_3553.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_3486, 0f, 0f, 2.5f) };
			Local_3553 = OBJECT::CREATE_OBJECT(Local_3553.f_10, Local_3553.f_1, 1, 1, 0);
		}
		if (GlobalFunc_115(Local_3542))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3553, Local_3542))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3553, Local_3542, 0, Local_3553.f_4, Local_3553.f_7, 0, 0, 0, 0, 2, 1);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_3542, Local_3486))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_3542, Local_3486, PED::GET_PED_BONE_INDEX(Local_3486, 28422), Local_3542.f_4, Local_3542.f_7, 0, 0, 0, 0, 2, 1);
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_3542, 1);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3542.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3553.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3486.f_1);
	GlobalFunc_7089(&(Local_3079.f_35[1]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3528))
	{
		MISC::CLEAR_AREA(Local_3528.f_3, 2f, 1, 0, 0, 0);
		Local_3528 = VEHICLE::CREATE_VEHICLE(Local_3528.f_1, Local_3528.f_3, Local_3528.f_6, 1, 1);
		func_538();
	}
	if (GlobalFunc_4947(Local_3528))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3493))
		{
			Local_3493 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3528, 26, Local_3493.f_1, 2, 1, 1);
			func_540();
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_3500))
		{
			Local_3500 = PED::CREATE_PED_INSIDE_VEHICLE(Local_3528, 26, Local_3500.f_1, -1, 1, 1);
			func_539();
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3528.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3493.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3500.f_1);
	if (bLocal_3184)
	{
		if (bLocal_3187)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				GlobalFunc_79(800, 0);
			}
		}
	}
}

void func_550()//Position - 0x3D395
{
	Local_3521.f_1 = iLocal_92;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_3521))
	{
		MISC::CLEAR_AREA(Local_3521.f_3, 2f, 1, 0, 0, 0);
		STREAMING::REQUEST_MODEL(Local_3521.f_1);
		if (STREAMING::HAS_MODEL_LOADED(Local_3521.f_1))
		{
			Local_3521 = VEHICLE::CREATE_VEHICLE(Local_3521.f_1, Local_3521.f_3, Local_3521.f_6, 1, 1);
		}
	}
	GlobalFunc_7089(&(Local_3079.f_35[0]));
	if (GlobalFunc_4947(Local_3521))
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_3521);
		ENTITY::SET_ENTITY_COORDS(Local_3521, Local_3521.f_3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_3521, Local_3521.f_6);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_3521, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_3521);
		VEHICLE::SET_VEHICLE_COLOURS(Local_3521, 62, 62);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_3521, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_3521, 0);
		VEHICLE::SET_VEHICLE_STRONG(Local_3521, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_3521, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3521.f_1);
}

void func_551(bool bParam0)//Position - 0x3D46F
{
	HUD::REQUEST_ADDITIONAL_TEXT("PAP1", 0);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_3320);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_3317, 0);
	STREAMING::REQUEST_MODEL(Local_3486.f_1);
	STREAMING::REQUEST_MODEL(Local_3521.f_1);
	STREAMING::REQUEST_MODEL(Local_3493.f_1);
	STREAMING::REQUEST_MODEL(Local_3500.f_1);
	STREAMING::REQUEST_MODEL(Local_3528.f_1);
	STREAMING::REQUEST_MODEL(Local_3542.f_10);
	STREAMING::REQUEST_MODEL(Local_3553.f_10);
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_3521.f_1, 3);
	STREAMING::REQUEST_ANIM_DICT(sLocal_3305);
	STREAMING::REQUEST_ANIM_DICT(sLocal_3306);
	STREAMING::REQUEST_CLIP_SET(func_356(1));
	STREAMING::REQUEST_CLIP_SET(func_356(0));
	STREAMING::REQUEST_ANIM_DICT(&cLocal_3625);
	STREAMING::REQUEST_ANIM_SET(sLocal_3316);
	if (bParam0)
	{
		while (((((((((((((((((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_3320)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sLocal_3317, 0)) || !STREAMING::HAS_MODEL_LOADED(Local_3486.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3521.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3493.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3500.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3528.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_3542.f_10)) || !STREAMING::HAS_MODEL_LOADED(Local_3553.f_10)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_3521.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_3305)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_3306)) || !STREAMING::HAS_ANIM_SET_LOADED(func_356(1))) || !STREAMING::HAS_ANIM_SET_LOADED(func_356(0))) || !STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_3625)) || !STREAMING::HAS_ANIM_SET_LOADED(sLocal_3316))
		{
			if (bLocal_3184)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					GlobalFunc_2350(0, 1);
					bLocal_3187 = true;
				}
			}
			SYSTEM::WAIT(0);
		}
	}
}


void func_553()//Position - 0x3D66E
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	int iVar7;
	
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.0199f, 260.1082f, 85f, -131.572f, 285.8091f, 102f, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-190.0199f, 260.1082f, 85f, -131.572f, 285.8091f, 102f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-116.8204f, 261.0066f, 101.0282f, -206.292f, 266.3838f, 86.07926f, 15f, 1, 0, 1);
	PATHFIND::SET_ROADS_IN_AREA(-272.713f, 209.4729f, 75.91507f, -166.0086f, 270.9784f, 99.37162f, 0, 1);
	Var0 = { -139.92f, 276.95f, 94.1f };
	fVar3 = 178.24f;
	Var4 = { 4.5f, 11.5f, 20f };
	GlobalFunc_10063(-153.9174f, 283.6763f, 91.76382f, -147.1208f, 283.5989f, 96.90168f, 7f, Var0, fVar3, Var4, 1, 0, 1, 0, 0);
	GlobalFunc_10063(-180.0036f, 277.1432f, 91.16271f, -147.9601f, 276.253f, 96.1029f, 9f, Var0, fVar3, Var4, 1, 0, 1, 0, 0);
	GlobalFunc_10063(-204.189f, 271.3035f, 89.8865f, -170.884f, 267.5564f, 95.11768f, 12f, Var0, fVar3, Var4, 1, 0, 1, 0, 0);
	iVar7 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (GlobalFunc_4947(iVar7))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar7);
	}
	if (GlobalFunc_7091(Var4, 0))
	{
		func_554(Var0, fVar3, 0, 145);
	}
	PED::SET_PED_NON_CREATION_AREA(-191.42f, 269.87f, 91.1f, -135.91f, 296.2f, 100.42f);
	uLocal_3301 = PED::ADD_SCENARIO_BLOCKING_AREA(-191.42f, 269.87f, 91.1f, -135.91f, 296.2f, 100.42f, 0, 1, 1, 1);
	MISC::CLEAR_AREA_OF_PEDS(-151.66f, 285.51f, 92.76f, 20f, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-116.8204f, 261.0066f, 101.0282f, -206.292f, 266.3838f, 86.07926f, 15f, 0, 0, 0, 1, 1);
	MISC::CLEAR_AREA_OF_VEHICLES(-162.4299f, 279.9136f, 92.71819f, 26f, 0, 0, 0, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-221.8951f, 225.7715f, 87.77625f, 20f, 1, 0, 0, 0, 0);
	if (!bLocal_3184)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(-162.4299f, 279.9136f, 92.71819f, 200f, 1, 0, 0, 0, 0);
	}
	iLocal_3260 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-237.65f, 274.52f, 91f, 10f, joaat("prop_traffic_01a"), 1, 0, 1);
	iLocal_3261 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-205.82f, 248.14f, 91.01f, 10f, joaat("prop_traffic_01a"), 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3260, 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3261))
	{
		ENTITY::SET_ENTITY_TRAFFICLIGHT_OVERRIDE(iLocal_3261, 2);
	}
}

void func_554(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x3D95C
{
	struct<3> Var0;
	var uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_91351.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_91351.f_4, 0))
		{
			if (GlobalFunc_104(24) != Global_91351.f_4)
			{
				if (iParam4 == 1)
				{
					if (GlobalFunc_6683(ENTITY::GET_ENTITY_COORDS(Global_91351.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_555(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_555(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)//Position - 0x3D9D7
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
		GlobalFunc_8627(iParam5);
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
		GlobalFunc_8896(iParam5, Var0, Param1, fParam4, GlobalFunc_99(iParam0));
		func_556(iParam5, iParam0, 0);
	}
}

void func_556(int iParam0, int iParam1, int iParam2)//Position - 0x3DB02
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!GlobalFunc_7217(&(Global_67138.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 12) && !MISC::IS_BIT_SET(Global_67138.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67138.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_68045 != -1 && Global_68045 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_4249 = GlobalFunc_7732();
			}
			if (iParam1 != Global_67138.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = GlobalFunc_104(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						GlobalFunc_8626(iVar0, 145);
					}
				}
				Global_68044 = iParam1;
				Global_68045 = iParam0;
				Global_68046 = iParam2;
			}
		}
	}
}
































void func_588()//Position - 0x4093B
{
	if (!iLocal_3183)
	{
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
		{
			GlobalFunc_5716("PAP1_H2", 1);
			if (MISC::IS_PC_VERSION())
			{
				GlobalFunc_5716("PAP1_H2_KM", 1);
			}
			iLocal_3183 = 1;
		}
	}
}

void func_589()//Position - 0x40972
{
	if (bLocal_3184)
	{
		if (((iLocal_3076 != 8 && iLocal_3076 != 0) && iLocal_3076 != 5) && iLocal_3076 != 6)
		{
			func_590();
			if (iLocal_3200 != 0)
			{
				func_332(8);
			}
		}
	}
}

void func_590()//Position - 0x409B8
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_3486))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_3486) || PED::IS_PED_INJURED(Local_3486))
		{
			iLocal_3200 = 5;
			return;
		}
		else
		{
			if (iLocal_3200 == 8)
			{
				return;
			}
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_3486))
				{
					iLocal_3200 = 8;
					return;
				}
			}
			if (iLocal_3265 != 0)
			{
				func_596(Local_3486, &iLocal_3251, 1126825984);
				if (func_593(Local_3486, iLocal_3251, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 0, 1101004800, 0, 1090519040, 1097859072, 0))
				{
					iLocal_3200 = 8;
					return;
				}
			}
		}
	}
	if (iLocal_3200 == 1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_3528))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3528, 0))
		{
			VEHICLE::EXPLODE_VEHICLE(Local_3528, 1, 0);
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
			{
				PED::EXPLODE_PED_HEAD(Local_3493, joaat("weapon_sniperrifle"));
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3500))
			{
				PED::EXPLODE_PED_HEAD(Local_3500, joaat("weapon_sniperrifle"));
			}
			iLocal_3200 = 1;
			return;
		}
		else if (iLocal_3076 == 1 || iLocal_3076 == 4)
		{
			bVar0 = false;
			bVar1 = false;
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_3528, PLAYER::PLAYER_PED_ID(), 0))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_3528, 0, 2))
				{
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_3528);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_3528);
					bVar0 = true;
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_3528, 1) };
				if (MISC::IS_PROJECTILE_IN_AREA(Var2 - Vector(5f, 5f, 5f), Var2 + Vector(5f, 5f, 5f), 1))
				{
					bVar0 = true;
					bVar1 = true;
				}
			}
			if (bVar0)
			{
				if (!iLocal_3162)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
					if (bVar1)
					{
						if (func_591(&uLocal_3321, cLocal_3318, "PAP1_PSW", "PAP1_PSW_01", 7, GlobalFunc_4570(), 0))
						{
							iLocal_3162 = 1;
							iLocal_3167 = 1;
							iLocal_3262 = 0;
						}
					}
					else if (func_189(&uLocal_3321, cLocal_3318, "PAP1_PSW", 7, GlobalFunc_4570(), 0, 0))
					{
						iLocal_3167 = 1;
						iLocal_3162 = 1;
						iLocal_3262 = 0;
					}
				}
				else if (!func_448("PAP1_PSW"))
				{
					iLocal_3200 = 3;
					return;
				}
			}
		}
	}
	if (iLocal_3186)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_3486))
		{
			if (fLocal_3204 > 60f)
			{
				iLocal_3200 = 7;
				return;
			}
		}
	}
	if (iLocal_3076 > 0)
	{
		if (iLocal_3076 != 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_3521))
			{
				if ((ENTITY::IS_ENTITY_DEAD(Local_3521) || ENTITY::IS_ENTITY_IN_WATER(Local_3521)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3521, 0))
				{
					iLocal_3200 = 4;
					return;
				}
				if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3521, 6, 0))
				{
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_3521, 7, 0))
					{
						iLocal_3200 = 4;
					}
				}
			}
		}
	}
	if (iLocal_3200 == 2 || iLocal_3200 == 6)
	{
		return;
	}
	if ((iLocal_3076 == 1 || iLocal_3076 == 2) || iLocal_3076 == 3)
	{
		if (!bLocal_3175)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_3493))
			{
				if (fLocal_3202 > 225f)
				{
					iLocal_3200 = 2;
					return;
				}
			}
		}
		else if (GlobalFunc_IsPedNotInjuredOrDead(Local_3507.x))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_3507.x))
			{
				if (fLocal_3205 > 220f)
				{
					iLocal_3200 = 6;
					return;
				}
			}
		}
	}
}

int func_591(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x40CC1
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


int func_593(int iParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, float fParam7, bool bParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x40D52
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (MISC::IS_BULLET_IN_AREA(Var0, iParam9, 1))
		{
			return 1;
		}
		if (!GlobalFunc_2319(iParam1, 10))
		{
			if (GlobalFunc_775(iParam0, Param2, fParam7))
			{
				if (func_594(1, 1, 1))
				{
					if (bParam11)
					{
						if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RELOADING(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
						{
							return 1;
						}
						if (bParam8)
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iParam0, 45f))
							{
								return 1;
							}
						}
					}
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
				if (bParam6)
				{
					if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_775(iParam0, Param2, 1f))
						{
							return 1;
						}
					}
				}
				if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
		if (bParam5)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
				return 1;
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, fParam10))
		{
			return 1;
		}
		Var3 = { Var0 };
		Var6 = { Var3 };
		Var3.x = (Var3.x - fParam10);
		Var3.f_1 = (Var3.f_1 - fParam10);
		Var3.f_2 = (Var3.f_2 - fParam10);
		Var6.x = (Var6.x + fParam10);
		Var6.f_1 = (Var6.f_1 + fParam10);
		Var6.f_2 = (Var6.f_2 + fParam10);
		if (MISC::IS_PROJECTILE_IN_AREA(Var3, Var6, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_594(bool bParam0, bool bParam1, bool bParam2)//Position - 0x40EEC
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	switch (iVar0)
	{
		case joaat("weapon_pistol"):
		case joaat("weapon_combatpistol"):
		case joaat("weapon_appistol"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_microsmg"):
		case joaat("weapon_smg"):
		case joaat("weapon_assaultrifle"):
		case joaat("weapon_carbinerifle"):
		case joaat("weapon_specialcarbine"):
		case joaat("weapon_advancedrifle"):
		case joaat("weapon_mg"):
		case joaat("weapon_combatmg"):
		case joaat("weapon_pumpshotgun"):
		case joaat("weapon_sawnoffshotgun"):
		case joaat("weapon_assaultshotgun"):
		case joaat("weapon_sniperrifle"):
		case joaat("weapon_heavysniper"):
		case joaat("weapon_remotesniper"):
		case joaat("weapon_grenadelauncher"):
		case joaat("weapon_rpg"):
		case joaat("weapon_minigun"):
			return 1;
		
		default:
	}
	if (bParam0)
	{
		switch (iVar0)
		{
			case joaat("weapon_grenade"):
			case joaat("weapon_stickybomb"):
			case joaat("weapon_molotov"):
			case joaat("weapon_bzgas"):
				return 1;
			}
		
		default:
	}
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("weapon_knife"):
			case joaat("weapon_hammer"):
			case joaat("weapon_crowbar"):
			case joaat("weapon_petrolcan"):
			case joaat("weapon_bottle"):
				return 1;
			}
		
		default:
	}
	if (bParam2)
	{
		if (iVar0 == joaat("weapon_stungun"))
		{
			return 1;
		}
	}
	return 0;
}


void func_596(int iParam0, int iParam1, float fParam2)//Position - 0x41005
{
	if (GlobalFunc_115(iParam0))
	{
		if (func_597(iParam0, PLAYER::PLAYER_PED_ID(), fParam2, 1, 250, 7))
		{
			*iParam1 = MISC::GET_FRAME_COUNT();
		}
	}
}

bool func_597(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x41030
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_603(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_48[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_600();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_48[iVar4 /*4*/].f_1 = iParam0;
		Local_48[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6422(&(Local_48[iVar4 /*4*/]), Var1, iParam1, &(Local_48[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_48[iVar4 /*4*/].f_3) < iParam4);
}



int func_600()//Position - 0x412E2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if ((Local_48[iVar0 /*4*/] == 0 && Local_48[iVar0 /*4*/].f_1 == 0) && Local_48[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_603(int iParam0, int iParam1)//Position - 0x413D8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_48)
	{
		if (Local_48[iVar0 /*4*/].f_1 == iParam0 && Local_48[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_604(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x41417
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
















void func_620(int iParam0, bool bParam1)//Position - 0x41E52
{
	func_628(bParam1, 0);
	if (bParam1)
	{
		func_621();
	}
	iLocal_3077 = iParam0;
	bLocal_3184 = false;
	if (GlobalFunc_188())
	{
		iLocal_3185 = 1;
	}
	else
	{
		iLocal_3185 = 0;
	}
	if (!GlobalFunc_188())
	{
		if (iLocal_3077 == 0)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_6523(PLAYER::PLAYER_PED_ID(), -152.36f, 279.07f, 93.8134f, -30f, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				GlobalFunc_8533(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 13, 5000, 0, 0);
				iLocal_3185 = 1;
			}
		}
	}
	func_1(iLocal_3077);
}

void func_621()//Position - 0x41EF0
{
	if (!GlobalFunc_188())
	{
		func_57(PLAYER::PLAYER_PED_ID());
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!GlobalFunc_188() && bLocal_3184)
	{
		func_79(5);
	}
	func_622(1, 0);
	func_632();
	func_332(0);
}

void func_622(bool bParam0, bool bParam1)//Position - 0x41F40
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(0);
	}
	GlobalFunc_4935();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_7632(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	MISC::SET_TIME_SCALE(1f);
	func_69(1, 1, 1, 1);
	AUDIO::SET_AGGRESSIVE_HORNS(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("coach"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule2"), 0);
	GlobalFunc_563(0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3301, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3302[iVar0], 0);
		iVar0++;
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("ATTRACT_PAP", 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1514.624f, -211.5434f, 46.78619f, -1487.885f, -190.7549f, 59.4945f, 25f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3667, Local_3664, 1, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-116.8204f, 261.0066f, 101.0282f, -206.292f, 266.3838f, 86.07926f, 15f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-190.0199f, 260.1082f, 85f, -131.572f, 285.8091f, 102f, 1, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-272.713f, 209.4729f, 75.91507f, -166.0086f, 270.9784f, 99.37162f, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3199))
	{
		CAM::DESTROY_CAM(uLocal_3199, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3198))
	{
		CAM::DESTROY_CAM(uLocal_3198, 0);
	}
	if (GlobalFunc_115(Local_3528))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3528, 0);
	}
	if (GlobalFunc_115(Local_3535))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_3535, 0);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_INTRO"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_INTRO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PAPARAZZO_01_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("PAPARAZZO_01_CHASE");
	}
	if (!GlobalFunc_188() && bLocal_3184)
	{
		func_79(5);
	}
	AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
	func_624(1, 1, 1);
	GlobalFunc_52(1, 1);
	GlobalFunc_200(&uLocal_3321, 1);
	GlobalFunc_200(&uLocal_3321, 3);
	GlobalFunc_200(&uLocal_3321, 4);
	GlobalFunc_4948(&uLocal_19, 0, 0);
	func_217();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_3300);
	func_202(bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3521.f_1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3528.f_1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3535.f_1, 0);
	func_623(bParam1);
	BRAIN::_0x6D6840CEE8845831("act_cinema");
}

void func_623(bool bParam0)//Position - 0x421C1
{
	STREAMING::REMOVE_ANIM_DICT(sLocal_3305);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_3625);
	STREAMING::REMOVE_ANIM_DICT(sLocal_3306);
	STREAMING::REMOVE_ANIM_SET(func_356(1));
	STREAMING::REMOVE_ANIM_SET(func_356(0));
	STREAMING::REMOVE_ANIM_DICT(&cLocal_3649);
	STREAMING::REMOVE_ANIM_DICT("rcmpaparazzo1ig_4");
	STREAMING::REMOVE_ANIM_SET(sLocal_3316);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::RELEASE_SOUND_ID(uLocal_3236);
	AUDIO::RELEASE_SOUND_ID(uLocal_3237);
	AUDIO::RELEASE_SOUND_ID(uLocal_3238);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1RP");
	func_473();
	func_474(0, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Pap1PV");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3486.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3521.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3493.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3500.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3528.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3507.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3514.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3535.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3542.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3553.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3564.f_10);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_3575.f_10);
	VEHICLE::REMOVE_VEHICLE_ASSET(Local_3521.f_1);
	if (bParam0)
	{
		HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	}
}

void func_624(bool bParam0, int iParam1, int iParam2)//Position - 0x422C4
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
			func_69(iParam1, iParam2, 1, 1);
		}
	}
}




void func_628(bool bParam0, bool bParam1)//Position - 0x423DB
{
	if (bParam0)
	{
		func_624(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_333(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}




void func_632()//Position - 0x424F1
{
	func_633();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	AUDIO::SET_AGGRESSIVE_HORNS(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bus"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("coach"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mule2"), 1);
	GlobalFunc_563(1);
	TASK::SET_SCENARIO_GROUP_ENABLED("ATTRACT_PAP", 0);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1514.624f, -211.5434f, 46.78619f, -1487.885f, -190.7549f, 59.4945f, 25f, 0, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3667, Local_3664, 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_3667, Local_3664);
	MISC::CLEAR_AREA(Local_3670, 15f, 1, 0, 0, 0);
	MISC::CLEAR_AREA_OF_PEDS(Local_3670, 15f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_3670, 15f, 0, 0, 0, 0, 0);
}

void func_633()//Position - 0x425DB
{
	int iVar0;
	
	bLocal_3155 = false;
	iLocal_3143 = 0;
	iLocal_3176 = 0;
	bLocal_3178 = false;
	iLocal_3154 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iLocal_3144[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_3158[iVar0] = 0;
		iVar0++;
	}
	iLocal_3171 = 0;
	bLocal_3175 = false;
	iLocal_3169 = 0;
	iLocal_3174 = 0;
	iLocal_3170 = 0;
	iLocal_3172 = 0;
	iLocal_3173 = 0;
	iLocal_3177 = 0;
	iLocal_3151 = 0;
	iLocal_3157 = 0;
	iLocal_3152 = 0;
	iLocal_3153 = 0;
	iLocal_3156 = 0;
	iLocal_3181 = 0;
	iLocal_3179 = 0;
	iLocal_3168 = 0;
	iLocal_3162 = 0;
	iLocal_3163 = 1;
	iLocal_3164 = 1;
	iLocal_3165 = 0;
	iLocal_3166 = 1;
	iLocal_3167 = 1;
	iLocal_3186 = 0;
	iLocal_3189 = 0;
	bLocal_3190 = false;
	iLocal_3191 = 0;
	bLocal_3187 = false;
	iLocal_3180 = 0;
	iLocal_3182 = 0;
	bLocal_3140 = false;
	iLocal_3183 = 0;
	iLocal_3188 = 0;
	iLocal_3141 = 0;
	iLocal_3142 = 0;
	bLocal_3193 = false;
	bLocal_3194 = false;
	iLocal_3195 = 0;
	iLocal_3196 = 0;
	iLocal_3200 = 0;
	iLocal_3265 = 1;
	fLocal_3202 = 0f;
	fLocal_3201 = 45f;
	fLocal_3203 = 0f;
	fLocal_3214 = 1f;
	fLocal_3213 = 1f;
	fLocal_3211 = 1f;
	fLocal_3209 = 0f;
	fLocal_3215 = 0f;
	fLocal_3204 = 0f;
	fLocal_3210 = 1.6f;
	fLocal_3212 = 0.8f;
	iLocal_3217 = 0;
	iLocal_3218 = 0;
	iLocal_3228 = -1;
	iLocal_3216 = 0;
	iLocal_3241 = -1;
	iLocal_3231 = 0;
	iLocal_3234 = 0;
	iLocal_3233 = 0;
	iLocal_3230 = -1;
	iLocal_3229 = -1;
	iLocal_3232 = 0;
	uLocal_3236 = AUDIO::GET_SOUND_ID();
	uLocal_3237 = AUDIO::GET_SOUND_ID();
	uLocal_3238 = AUDIO::GET_SOUND_ID();
	iLocal_3223 = 0;
	iLocal_3224 = 0;
	iLocal_3225 = 0;
	iLocal_3226 = 0;
	iLocal_3221 = 0;
	iLocal_3220 = 0;
	iLocal_3222 = 0;
	iLocal_3243 = 0;
	iLocal_3244 = 6;
	iLocal_3245 = 0;
	iLocal_3242 = 0;
	iLocal_3219 = -1;
	iLocal_3235 = 0;
	iLocal_3227 = 0;
	iLocal_3239 = 0;
	iLocal_3240 = 0;
	iLocal_3246 = 0;
	iLocal_3247 = MISC::GET_GAME_TIMER();
	iLocal_3248 = 0;
	iLocal_3250 = 500;
	iLocal_3249 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7);
	iLocal_3251 = 0;
	iLocal_3252 = 0;
	iLocal_3253 = 0;
	iLocal_3254 = 0;
	iLocal_3255 = 0;
	iLocal_3256 = 0;
	iLocal_3257 = -1;
	iLocal_3258 = 0;
	iLocal_3259 = 0;
	iLocal_3262 = 0;
	iLocal_3263 = 0;
	iLocal_3264 = 0;
	StringCopy(&Local_3613, "", 24);
	StringCopy(&Local_3637, "", 24);
	StringCopy(&Local_3619, "", 24);
	Local_3655 = { 0.07f, -0.4f, 0f };
	Local_3661 = { 0f, -2.4f, 0.3f };
	Local_3706[0 /*3*/] = { 3f, -0.5f, 0f };
	Local_3706[1 /*3*/] = { -3f, -0.5f, 0f };
	Local_3699[0 /*3*/] = { 0f, 0f, 0f };
	Local_3699[1 /*3*/] = { 0f, 0f, 0f };
	Local_3713 = { 0f, 0f, 0f };
	Local_3716 = { 0f, 0f, 0f };
	Local_3719 = { 0f, 0f, 0f };
	Local_3679[0 /*3*/] = { -1.2f, 0.4f, 1.5f };
	Local_3679[1 /*3*/] = { 1.2f, 0.4f, 1.5f };
	Local_3686[0 /*3*/] = { 0f, 0.4f, -1f };
	Local_3686[1 /*3*/] = { 0f, 0.4f, -1f };
	Local_3673 = { 0f, 0f, 0f };
	Local_3676 = { 0f, 0f, 0f };
	Local_3693 = { -1467.11f, -103.44f, 49.87f };
	Local_3696 = { -924.012f, -142.9705f, 36.7612f };
	Local_3670 = { -1493.375f, -196.8841f, 49.39753f };
	Local_3658 = { -0.04f, -0.06f, 0f };
	Local_3667 = { -1525.48f, -223.51f, 45f };
	Local_3664 = { -1482.88f, -184.36f, 59f };
	StringCopy(&cLocal_3625, "rcmpaparazzo1ig_1_waive", 24);
	StringCopy(&cLocal_3631, "waive_comeback_f", 24);
	Local_3521.f_1 = joaat("pcj");
	Local_3521.f_3 = { -159.56f, 275.41f, 93.14f };
	Local_3521.f_6 = 102.75f;
	Local_3486.f_1 = GlobalFunc_4946(50);
	Local_3486.f_3 = { -159.49f, 276.85f, 93.66f };
	Local_3486.f_6 = -74.01f;
	Local_3528.f_1 = joaat("stretch");
	Local_3528.f_3 = { -177.4041f, 266.7269f, 92.40762f };
	Local_3528.f_6 = 85.4595f;
	Local_3493.f_1 = joaat("u_f_m_miranda");
	Local_3493.f_3 = { 0f, -170.05f, 284.88f };
	Local_3493.f_6 = -172.46f;
	Local_3500.f_1 = joaat("s_m_m_highsec_01");
	Local_3535.f_1 = joaat("pcj");
	Local_3535.f_3 = { -1585.914f, -133.9717f, 55.1026f };
	Local_3535.f_6 = 0f;
	Local_3507.f_1 = joaat("u_m_y_paparazzi");
	Local_3514.f_1 = joaat("u_m_m_rivalpap");
	Local_3542.f_10 = joaat("prop_pap_camera_01");
	Local_3542.f_4 = { 0f, 0f, 0f };
	Local_3542.f_7 = { 0f, 0f, 0f };
	Local_3542.f_1 = { 0f, 0f, 0f };
	Local_3553.f_10 = joaat("prop_flash_unit");
	Local_3553.f_4 = { 0.107f, 0.025f, 0.177f };
	Local_3553.f_7 = { 0f, 0f, 0f };
	Local_3553.f_1 = { 0f, 0f, 0f };
	Local_3564.f_10 = joaat("prop_pap_camera_01");
	Local_3564.f_4 = { 0f, 0f, 0f };
	Local_3564.f_7 = { 0f, 0f, 0f };
	Local_3575.f_10 = joaat("prop_flash_unit");
	Local_3575.f_4 = { 0.107f, 0.025f, 0.177f };
	Local_3575.f_7 = { 0f, 0f, 0f };
	Local_3575.f_1 = { 0f, 0f, 0f };
	Local_3586.f_10 = joaat("prop_syringe_01");
	Local_3586.f_4 = { 0f, 0f, 0f };
	Local_3586.f_7 = { 0f, 0f, 0f };
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_3300);
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_3299 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3300, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3300);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3300, iLocal_3299);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3299, iLocal_3300);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_3299, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_3299);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3521.f_1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3528.f_1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_3535.f_1, 1);
}

void func_634()//Position - 0x42B7B
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_622(0, 1);
	}
	GlobalFunc_9252(&Local_3079, 1, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}



























