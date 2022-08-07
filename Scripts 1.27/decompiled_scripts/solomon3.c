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
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	float fLocal_108[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_284[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_460[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_636[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_812[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_988 = 0f;
	float fLocal_989 = 0f;
	float fLocal_990 = 0f;
	float fLocal_991 = 0f;
	float fLocal_992[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1028[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1064[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1100[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1136[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1172[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1208[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1224[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1240[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1256[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	int iLocal_1293[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1469[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1645[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1821[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1857[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1893[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1929[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	struct<3> Local_1962[175];
	struct<3> Local_2488[15];
	struct<3> Local_2534[35];
	struct<3> Local_2640 = { 0, 0, 0 } ;
	struct<3> Local_2643 = { 0, 0, 0 } ;
	struct<3> Local_2646 = { 0, 0, 0 } ;
	struct<3> Local_2649 = { 0, 0, 0 } ;
	struct<3> Local_2652 = { 0, 0, 0 } ;
	struct<3> Local_2655 = { 0, 0, 0 } ;
	struct<3> Local_2658 = { 0, 0, 0 } ;
	struct<3> Local_2661 = { 0, 0, 0 } ;
	struct<3> Local_2664 = { 0, 0, 0 } ;
	char cLocal_2667[64] = "";
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	int iLocal_2683 = 0;
	int iLocal_2684[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2860[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2876[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2912 = 0;
	int iLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3091[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3104[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3120[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3156[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3163 = 0;
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	var uLocal_3166 = 12;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	int iLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	var uLocal_3183 = 0;
	int iLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	int iLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	var uLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222[4] = { 0, 0, 0, 0 };
	int iLocal_3227 = 0;
	var uLocal_3228[3] = { 0, 0, 0 };
	int iLocal_3232[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3244 = 0;
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250[2] = { 0, 0 };
	int iLocal_3253[2] = { 0, 0 };
	int iLocal_3256 = 0;
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259[2] = { 0, 0 };
	int iLocal_3262 = 0;
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267[2] = { 0, 0 };
	int iLocal_3270 = 0;
	int iLocal_3271[2] = { 0, 0 };
	int iLocal_3274 = 0;
	int iLocal_3275 = 0;
	int iLocal_3276 = 0;
	int iLocal_3277 = 0;
	int iLocal_3278[2] = { 0, 0 };
	int iLocal_3281 = 0;
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	struct<3> Local_3293 = { 0, 0, 0 } ;
	struct<3> Local_3296 = { 0, 0, 0 } ;
	struct<3> Local_3299 = { 0, 0, 0 } ;
	struct<3> Local_3302 = { 0, 0, 0 } ;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	struct<3> Local_3311 = { 0, 0, 0 } ;
	struct<3> Local_3314 = { 0, 0, 0 } ;
	struct<3> Local_3317 = { 0, 0, 0 } ;
	float fLocal_3320 = 0f;
	float fLocal_3321 = 0f;
	float fLocal_3322 = 0f;
	float fLocal_3323 = 0f;
	float fLocal_3324 = 0f;
	float fLocal_3325 = 0f;
	int iLocal_3326 = 0;
	int iLocal_3327 = 0;
	var uLocal_3328 = 0;
	int iLocal_3329 = 0;
	int iLocal_3330 = 0;
	int iLocal_3331 = 0;
	int iLocal_3332 = 0;
	int iLocal_3333 = 0;
	int iLocal_3334 = 0;
	int iLocal_3335 = 0;
	int iLocal_3336 = 0;
	int iLocal_3337 = 0;
	int iLocal_3338 = 0;
	int iLocal_3339 = 0;
	int iLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
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
	int iLocal_3364[3] = { 0, 0, 0 };
	int iLocal_3368[2] = { 0, 0 };
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
	var uLocal_3399 = 0;
	int iLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3429 = 0;
	int iLocal_3430 = 0;
	int iLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	int iLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	int iLocal_3444[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3464 = 0;
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479[2] = { 0, 0 };
	int iLocal_3482[2] = { 0, 0 };
	int iLocal_3485 = 0;
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3497[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515[3] = { 0, 0, 0 };
	int iLocal_3519[2] = { 0, 0 };
	int iLocal_3522 = 0;
	int iLocal_3523[4] = { 0, 0, 0, 0 };
	int iLocal_3528 = 0;
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	int iLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	int iLocal_3540 = 0;
	int iLocal_3541 = 0;
	int iLocal_3542[3] = { 0, 0, 0 };
	int iLocal_3546[3] = { 0, 0, 0 };
	int iLocal_3550 = 0;
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570[4] = { 0, 0, 0, 0 };
	int iLocal_3575 = 0;
	char* sLocal_3576 = NULL;
	var uLocal_3577 = 16;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 21;
	var uLocal_3750 = 6;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754[3] = { 0, 0, 0 };
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
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
	iLocal_54 = 3;
	fLocal_57 = 80f;
	fLocal_58 = 140f;
	fLocal_59 = 180f;
	iLocal_65 = 1;
	iLocal_66 = 65;
	iLocal_67 = 49;
	iLocal_68 = 64;
	uLocal_72 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_73 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	bLocal_77 = true;
	bLocal_84 = true;
	bLocal_106 = true;
	fLocal_1272 = 120f;
	fLocal_1273 = 0f;
	fLocal_1275 = 1f;
	fLocal_1276 = 0f;
	fLocal_1277 = 1f;
	fLocal_1278 = 30f;
	fLocal_1280 = 1f;
	fLocal_1281 = 5f;
	fLocal_1282 = 1f;
	fLocal_1283 = 1f;
	fLocal_1284 = 100f;
	fLocal_1285 = 100f;
	fLocal_1286 = 0f;
	fLocal_1287 = 7000f;
	fLocal_1288 = 0f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0.3f;
	fLocal_1291 = 0.5f;
	fLocal_1292 = 50f;
	iLocal_1948 = -1;
	iLocal_1956 = -1;
	iLocal_1957 = -1;
	Local_3293 = { -1024.1f, -485.3321f, 35.9816f };
	Local_3296 = { -428.0263f, -2153.577f, 9.2997f };
	Local_3299 = { -498.7f, -2136.5f, 8.4f };
	Local_3311 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_3320 = 209.7233f;
	fLocal_3321 = 90.947f;
	fLocal_3324 = 46.7161f;
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		GlobalFunc_7678(24, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5695(PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		GlobalFunc_10632();
		func_375();
	}
	GlobalFunc_563(1);
	MISC::SET_MISSION_FLAG(1);
	iLocal_3180 = 0;
	iLocal_3179 = 0;
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_LegalTrouble", 0);
		if (iLocal_3206 > MISC::GET_GAME_TIMER())
		{
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		}
		func_370();
		func_369();
		func_367();
		func_363();
		func_362();
		switch (iLocal_3179)
		{
			case 0:
				func_358();
				break;
			
			case 1:
				func_313();
				break;
			
			case 2:
				func_307();
				break;
			
			case 3:
				func_304();
				break;
			
			case 4:
				func_215();
				break;
			
			case 5:
				func_203();
				break;
			
			case 6:
				func_197();
				break;
			
			case 7:
				func_188();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()//Position - 0x287
{
	if (iLocal_3442 == 0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 476);
			iLocal_3442 = 1;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_3443 == 0)
			{
				iLocal_3274 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3274))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3274, 0))
					{
						GlobalFunc_503(iLocal_3274, -1);
						GlobalFunc_504(iLocal_3274, 479);
						iLocal_3443 = 1;
					}
				}
			}
		}
		else
		{
			GlobalFunc_504(0, 479);
			GlobalFunc_503(0, -1);
			if (iLocal_3443 == 1)
			{
				iLocal_3443 = 0;
			}
		}
	}
	if (iLocal_3444[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[0]))
		{
			if (PED::IS_PED_INJURED(uLocal_3228[0]))
			{
				iLocal_3190++;
				iLocal_3444[0] = 1;
			}
		}
	}
	if (iLocal_3444[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[1]))
		{
			if (PED::IS_PED_INJURED(uLocal_3228[1]))
			{
				iLocal_3190++;
				iLocal_3444[1] = 1;
			}
		}
	}
	if (iLocal_3444[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[2]))
		{
			if (PED::IS_PED_INJURED(uLocal_3228[2]))
			{
				iLocal_3190++;
				iLocal_3444[2] = 1;
			}
		}
	}
	if (iLocal_3444[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[0]))
			{
				iLocal_3190++;
				iLocal_3444[3] = 1;
			}
		}
	}
	if (iLocal_3444[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[1]))
			{
				iLocal_3190++;
				iLocal_3444[4] = 1;
			}
		}
	}
	if (iLocal_3444[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[2]))
			{
				iLocal_3190++;
				iLocal_3444[5] = 1;
			}
		}
	}
	if (iLocal_3444[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[3]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[3]))
			{
				iLocal_3190++;
				iLocal_3444[6] = 1;
			}
		}
	}
	if (iLocal_3444[7] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[4]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[4]))
			{
				iLocal_3190++;
				iLocal_3444[7] = 1;
			}
		}
	}
	if (iLocal_3444[8] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[5]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[5]))
			{
				iLocal_3190++;
				iLocal_3444[8] = 1;
			}
		}
	}
	if (iLocal_3444[9] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[6]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[6]))
			{
				iLocal_3190++;
				iLocal_3444[9] = 1;
			}
		}
	}
	if (iLocal_3444[10] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[7]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[7]))
			{
				iLocal_3190++;
				iLocal_3444[10] = 1;
			}
		}
	}
	if (iLocal_3444[11] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[8]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[8]))
			{
				iLocal_3190++;
				iLocal_3444[11] = 1;
			}
		}
	}
	if (iLocal_3444[12] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[9]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[9]))
			{
				iLocal_3190++;
				iLocal_3444[12] = 1;
			}
		}
	}
	if (iLocal_3444[13] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[10]))
		{
			if (PED::IS_PED_INJURED(iLocal_3232[10]))
			{
				iLocal_3190++;
				iLocal_3444[13] = 1;
			}
		}
	}
	if (iLocal_3444[14] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
		{
			if (PED::IS_PED_INJURED(iLocal_3247))
			{
				iLocal_3190++;
				iLocal_3444[14] = 1;
			}
		}
	}
	if (iLocal_3444[15] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
		{
			if (PED::IS_PED_INJURED(iLocal_3248))
			{
				iLocal_3190++;
				iLocal_3444[15] = 1;
			}
		}
	}
	if (iLocal_3444[16] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3249))
		{
			if (PED::IS_PED_INJURED(iLocal_3249))
			{
				iLocal_3190++;
				iLocal_3444[16] = 1;
			}
		}
	}
	if (iLocal_3444[17] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_3250[0]))
			{
				iLocal_3190++;
				iLocal_3444[17] = 1;
			}
		}
	}
	if (iLocal_3179 == 8)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (iLocal_3464 == 0)
			{
				GlobalFunc_574(482, 0);
				iLocal_3464 = 1;
			}
		}
	}
}




void func_5()//Position - 0x7AF
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3266, 0, 0, 1);
		}
	}
	if (iLocal_3180 > 0)
	{
		func_186();
	}
	if (iLocal_3180 == 0)
	{
		if (iLocal_3344 == 1)
		{
			func_104();
			iLocal_3344 = 0;
		}
		GlobalFunc_Checkpoint3(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3373 = 0;
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3345 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3429 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3468 = 0;
		iLocal_3469 = 0;
		iLocal_3473 = 0;
		iLocal_3476 = 0;
		iLocal_3184 = 0;
		STREAMING::REQUEST_ANIM_DICT("Misssolomon_3");
		STREAMING::REQUEST_MODEL(joaat("oracle2"));
		STREAMING::REQUEST_MODEL(joaat("baller2"));
		if (HUD::DOES_BLIP_EXIST(uLocal_3284))
		{
			HUD::REMOVE_BLIP(&uLocal_3284);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 1f, 1f);
			TASK::REMOVE_WAYPOINT_RECORDING("Trev4_5");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3258);
		}
		SYSTEM::SETTIMERA(0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(0, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
		{
			if (!PED::IS_PED_INJURED(iLocal_3227))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3227, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3227, 0);
			}
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
		}
		HUD::CLEAR_PRINTS();
		GlobalFunc_164("TRV4_END1", 7500, 1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (GlobalFunc_4547(2))
		{
			GlobalFunc_2434(2, 0);
		}
		uLocal_3220 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_3265, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3266, 0))
			{
				VEHICLE::SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(iLocal_3266, 0);
			}
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		if (iLocal_3468 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3278[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("oracle2")))
				{
					iLocal_3278[0] = VEHICLE::CREATE_VEHICLE(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3278[0], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3278[0]);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("oracle2"));
					iLocal_3468 = 1;
				}
			}
		}
		if (iLocal_3469 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3278[1]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("baller2")))
				{
					iLocal_3278[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3278[1], 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3278[1]);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3278[0], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3278[0], 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3278[0], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3278[0], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3278[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3278[1], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3278[1], 0))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3278[1], 1) > 200f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3278[1], 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3278[1]));
			}
		}
		if (iLocal_3429 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_3232[0]))
			{
				GlobalFunc_5122(iLocal_3232[0], "SURROUNDED", 24);
				iLocal_3429 = 1;
			}
		}
		if (iLocal_3373 == 0)
		{
			if (SYSTEM::TIMERA() > 8000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[0], 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3267[0], 68, "BB_Chase", 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_3267[0], 0f, 0f, 0.15f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[1], 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3267[1], 69, "BB_Chase", 1);
					VEHICLE::_0x796A877E459B99EA(iLocal_3267[1], 0f, 0f, 0.15f);
				}
				iLocal_3373 = 1;
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3267[0]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3267[0]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_3267[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3267[0]);
						}
					}
				}
				else if (iLocal_3374 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_3232[6]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[6], 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3232[7]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[7], 0);
					}
					iLocal_3374 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[1], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3267[1]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3267[1]) > 5000f)
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_3267[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3267[1]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_3232[8]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[8], 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_3232[9]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[9], 0);
					}
					iLocal_3375 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3473 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3266, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3266, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_JET_ENTERED");
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						RECORDING::_0x293220DA1B46CEBC(4f, 15f, 4);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3266);
						iLocal_3473 = 1;
					}
					else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3266, 1) > 200f)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3266);
					}
				}
			}
		}
		if (iLocal_3473 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3266, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3266, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
						{
							AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
						}
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_LOSE_COPS");
						iLocal_3473 = 0;
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_3476 == 0)
			{
				iLocal_3192 = MISC::GET_GAME_TIMER();
				iLocal_3476 = 1;
			}
		}
		if (iLocal_3476 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3192 + 3500)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("TRV4_COPS_LOST");
					GlobalFunc_571(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3476 = 0;
			}
		}
	}
}

void func_6()//Position - 0xE85
{
	GlobalFunc_565(481, iLocal_3190, 0);
	GlobalFunc_5103(0, 0);
	func_375();
}






void func_12()//Position - 0x112F
{
	iLocal_3188 = 0;
	while (iLocal_3188 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[iLocal_3188]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3232[iLocal_3188]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3232[iLocal_3188], 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3232[iLocal_3188]) > 200f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_3232[iLocal_3188]);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[iLocal_3188]));
						}
						else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3232[iLocal_3188]) > 20f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], -1207174364) != 0)
							{
								TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_3232[iLocal_3188], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, -687903391);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], 780511057) != 0)
						{
							TASK::TASK_COMBAT_PED(iLocal_3232[iLocal_3188], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3232[iLocal_3188], 50, 1);
						}
					}
					else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3232[iLocal_3188]) > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[iLocal_3188]));
					}
					else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3232[iLocal_3188]) > 5f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], -1207174364) != 0)
						{
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_3232[iLocal_3188], PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 2f, 1, 15f, 20f, 0, 0, -687903391);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3232[iLocal_3188], 780511057) != 0)
					{
						TASK::TASK_COMBAT_PED(iLocal_3232[iLocal_3188], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3232[iLocal_3188], 50, 1);
					}
				}
			}
		}
		iLocal_3188++;
	}
	if (iLocal_3373 == 1)
	{
		if (iLocal_3345 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3267[0]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[6]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3232[6]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[6], 0);
								TASK::CLEAR_PED_TASKS(iLocal_3232[6]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3267[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3232[6], uLocal_3291);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[7]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3232[7]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[7], 0);
								TASK::CLEAR_PED_TASKS(iLocal_3232[7]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3267[0], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3232[7], uLocal_3291);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
							}
						}
						iLocal_3345 = 1;
					}
				}
			}
		}
		else if (iLocal_3430 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[6]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3232[6]))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3232[6], iLocal_3267[0], 0))
							{
								if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3232[6]) < 20f)
								{
									GlobalFunc_5122(iLocal_3232[6], "DRAW_GUN", 24);
									iLocal_3430 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3346 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3267[1], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3267[1]))
					{
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[8]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3232[8]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[8], 0);
								TASK::CLEAR_PED_TASKS(iLocal_3232[8]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3267[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3232[8], uLocal_3291);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[9]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3232[9]))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[9], 0);
								TASK::CLEAR_PED_TASKS(iLocal_3232[9]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_3267[1], 256);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_3232[9], uLocal_3291);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3347 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[10]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3232[10]))
			{
				if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3232[10]) > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[iLocal_3188]));
					STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_3232[10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_3232[10]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
							TASK::TASK_PLAY_ANIM(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_3232[10], uLocal_3291);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
							iLocal_3347 = 1;
						}
					}
				}
			}
		}
	}
}




























































































void func_104()//Position - 0x8DA7
{
	MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
	func_185();
	func_157();
	func_106();
	if (!GlobalFunc_188())
	{
		func_105();
	}
	iLocal_3350 = 1;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_105()//Position - 0x8DD6
{
	switch (iLocal_3179)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3258, 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3258, 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3258, -1);
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_3258, 3000);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 178.466f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
			break;
		
		case 8:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.5016f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
			break;
	}
}

void func_106()//Position - 0x8EEC
{
	switch (iLocal_3179)
	{
		case 2:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				MISC::CLEAR_AREA(Local_3293, 5f, 1, 0, 0, 0);
				iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3293, fLocal_3320, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3258, 3000);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3258, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3275 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3275, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3275, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3275, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3275, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_3293, 5f, 1, 0, 0, 0);
					iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3276, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, 1);
				}
			}
			break;
		
		case 3:
			AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			func_154();
			MISC::CLEAR_AREA(Local_3296, 200f, 1, 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				iLocal_3257 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), Local_3296, fLocal_3321, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3257, 1, 1, 1, 1, 1, 0, 0, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3257, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3257, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				iLocal_3221 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3257, 26, joaat("ig_molly"), -1, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3221, 1, 1, 1, 1, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3221, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3221, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3221, 1862763509);
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (GlobalFunc_7698())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
						{
							iLocal_3258 = GlobalFunc_10065(Local_3311, fLocal_3324);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
						}
						else
						{
							iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3311, fLocal_3324, 1, 1);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
						}
					}
					else
					{
						iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3311, fLocal_3324, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_3258, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3258, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3311, fLocal_3324, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3258, 3000);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3258, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
			}
			break;
		
		case 5:
			iLocal_3351 = 0;
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("ig_molly"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			while (((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("BB_MOLLY_2")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms")) || !STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				iLocal_3221 = PED::CREATE_PED(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3221, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3221, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3221, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3221, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3221, 1862763509);
			}
			iLocal_3282 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3282, iLocal_3221, PED::GET_PED_BONE_INDEX(iLocal_3221, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
			{
				iLocal_3265 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3265, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3265, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3265, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3265, 500);
			}
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_7698())
				{
					GlobalFunc_8368();
					while (!GlobalFunc_8367())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (GlobalFunc_7698())
					{
						iLocal_3258 = GlobalFunc_10065(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
					}
					else
					{
						iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				iLocal_3257 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3257, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
			{
				iLocal_3262 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
			{
				iLocal_3247 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3247, joaat("weapon_pistol"), 1000, 1, 1);
				GlobalFunc_593(iLocal_3247, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			}
			SYSTEM::SETTIMERA(0);
			GlobalFunc_2427(2, 1);
			iLocal_3359 = 1;
			break;
		
		case 8:
			MISC::CLEAR_AREA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			SYSTEM::SETTIMERA(0);
			iLocal_3351 = 0;
			iLocal_3359 = 0;
			iLocal_3338 = 0;
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
			STREAMING::REQUEST_PTFX_ASSET();
			while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(68, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(69, "BB_Chase")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			func_109();
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_7698())
				{
					GlobalFunc_8368();
					while (!GlobalFunc_8367())
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (GlobalFunc_7698())
					{
						iLocal_3258 = GlobalFunc_10065(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
					}
					else
					{
						iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
					}
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				iLocal_3257 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3257, 27, 27);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
			{
				iLocal_3262 = VEHICLE::CREATE_VEHICLE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
			{
				iLocal_3247 = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3247, joaat("weapon_pistol"), 1000, 1, 1);
				GlobalFunc_593(iLocal_3247, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
			{
				iLocal_3281 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_3281, 0f, 0f, -121.5948f, 2, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3281, 0f, 0f, 0.8729f, -0.4879f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
			{
				iLocal_3265 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3265, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3265, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3265, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				uLocal_3762 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_3265, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3265, 500);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
			{
				iLocal_3227 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				GlobalFunc_173(&uLocal_3577, 4, iLocal_3227, "HangerWorker", 0, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3227, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3227, 1);
				TASK::TASK_SMART_FLEE_PED(iLocal_3227, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_3227, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3227, 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3227);
			}
			if (GlobalFunc_2284(0) == 0 || GlobalFunc_2284(0) == joaat("weapon_unarmed"))
			{
				func_107(1);
			}
			break;
	}
}

void func_107(int iParam0)//Position - 0x9C67
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, iParam0);
		}
	}
}


void func_109()//Position - 0x9CC6
{
	if (iLocal_3338 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3267[0]))
		{
			iLocal_3267[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_3267[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[0]))
		{
			iLocal_3232[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[0], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_3232[0], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[0], 1);
			TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_3232[0], PLAYER::PLAYER_PED_ID(), -1, 1);
			GlobalFunc_593(iLocal_3232[0], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			iLocal_3266 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3266);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
			ENTITY::SET_ENTITY_HEALTH(iLocal_3266, 2000);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3266, 0, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[6]))
		{
			iLocal_3232[6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3267[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[6], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_3232[6], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[6], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[6], 1);
			GlobalFunc_593(iLocal_3232[6], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[7]))
		{
			iLocal_3232[7] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3267[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[7], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_3232[7], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[7], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[7], 1);
			GlobalFunc_593(iLocal_3232[7], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3267[1]))
		{
			iLocal_3267[1] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1);
			VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iLocal_3267[1], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[8]))
		{
			iLocal_3232[8] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3267[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[8], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_3232[8], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[8], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[8], 1);
			GlobalFunc_593(iLocal_3232[8], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[9]))
		{
			iLocal_3232[9] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3267[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[9], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_3232[9], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[9], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[9], 1);
			GlobalFunc_593(iLocal_3232[9], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[10]))
		{
			iLocal_3232[10] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[10], joaat("weapon_pistol"), 1000, 1, 1);
			PED::SET_PED_ACCURACY(iLocal_3232[10], 20);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[10], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[10], 1);
			GlobalFunc_593(iLocal_3232[10], 0);
			PED::SET_PED_DUCKING(iLocal_3232[10], 1);
		}
		iLocal_3338 = 1;
	}
}













































void func_154()//Position - 0xD34A
{
	uLocal_3292 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
	STREAMING::REQUEST_MODEL(joaat("jet"));
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("bison"));
	STREAMING::REQUEST_MODEL(joaat("blista"));
	STREAMING::REQUEST_MODEL(joaat("ig_molly"));
	STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
	func_156(1, "BB_Chase");
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_7698())
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(GlobalFunc_622()))
			{
				GlobalFunc_8368();
				while (!GlobalFunc_8367())
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("jet")) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista"))) || !STREAMING::HAS_MODEL_LOADED(joaat("ig_molly"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio"))) || !STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")))
	{
		SYSTEM::WAIT(0);
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3292) || !func_155(1, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}

bool func_155(int iParam0, char* sParam1)//Position - 0xD51F
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_156(int iParam0, char* sParam1)//Position - 0xD52F
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

void func_157()//Position - 0xD53F
{
	GlobalFunc_4935();
	GlobalFunc_4956();
	HUD::CLEAR_PRINTS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3219))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3219);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_3220))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_3220);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 93.7701f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3258, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3258))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3258);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3257, 0);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3257);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3758))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3758, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3759))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3759, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3760))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3760, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3761))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3761, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3762))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3762, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3754[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[0], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3754[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[1], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3754[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[2], 0);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
	{
		PED::DELETE_PED(&iLocal_3221);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
	{
		PED::DELETE_PED(&iLocal_3227);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3244))
	{
		PED::DELETE_PED(&iLocal_3244);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
	{
		PED::DELETE_PED(&iLocal_3245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3246))
	{
		PED::DELETE_PED(&iLocal_3246);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
	{
		PED::DELETE_PED(&iLocal_3247);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
	{
		PED::DELETE_PED(&iLocal_3248);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3249))
	{
		PED::DELETE_PED(&iLocal_3249);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[0]))
	{
		PED::DELETE_PED(&(iLocal_3222[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[1]))
	{
		PED::DELETE_PED(&(iLocal_3222[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[2]))
	{
		PED::DELETE_PED(&(iLocal_3222[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[3]))
	{
		PED::DELETE_PED(&(iLocal_3222[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[0]))
	{
		PED::DELETE_PED(&(uLocal_3228[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[1]))
	{
		PED::DELETE_PED(&(uLocal_3228[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[2]))
	{
		PED::DELETE_PED(&(uLocal_3228[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[0]))
	{
		PED::DELETE_PED(&(iLocal_3232[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[1]))
	{
		PED::DELETE_PED(&(iLocal_3232[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[2]))
	{
		PED::DELETE_PED(&(iLocal_3232[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[3]))
	{
		PED::DELETE_PED(&(iLocal_3232[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[4]))
	{
		PED::DELETE_PED(&(iLocal_3232[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[5]))
	{
		PED::DELETE_PED(&(iLocal_3232[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[6]))
	{
		PED::DELETE_PED(&(iLocal_3232[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[7]))
	{
		PED::DELETE_PED(&(iLocal_3232[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[8]))
	{
		PED::DELETE_PED(&(iLocal_3232[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[9]))
	{
		PED::DELETE_PED(&(iLocal_3232[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[10]))
	{
		PED::DELETE_PED(&(iLocal_3232[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
	{
		PED::DELETE_PED(&(iLocal_3250[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[0]))
	{
		PED::DELETE_PED(&(iLocal_3253[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[1]))
	{
		PED::DELETE_PED(&(iLocal_3253[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3257);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3258))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3258, 1, 0);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_3258);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3270))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3274))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3274);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3278[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3278[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3259[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3259[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3278[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3278[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3267[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[1]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3267[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
	{
		VEHICLE::DELETE_VEHICLE(&(iLocal_3271[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3262);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3282);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3283);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_PLANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_PLANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS_VEHICLE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
	}
	AUDIO::STOP_SOUND(iLocal_3210);
	AUDIO::STOP_SOUND(iLocal_3212);
	AUDIO::STOP_SOUND(iLocal_3213);
	AUDIO::STOP_SOUND(iLocal_3214);
	AUDIO::STOP_SOUND(iLocal_3215);
	AUDIO::STOP_SOUND(iLocal_3216);
	AUDIO::STOP_SOUND(iLocal_3217);
	AUDIO::STOP_SOUND(iLocal_3218);
	AUDIO::STOP_SOUND(iLocal_3211);
	GlobalFunc_4948(&uLocal_27, 0, 0);
	if (CAM::DOES_CAM_EXIST(uLocal_3288))
	{
		CAM::DESTROY_CAM(uLocal_3288, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3289))
	{
		CAM::DESTROY_CAM(uLocal_3289, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_3290))
	{
		CAM::DESTROY_CAM(uLocal_3290, 0);
	}
	func_158(1, 1);
	STREAMING::REMOVE_ANIM_DICT("misssolomon_3");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_clipboard@male@base");
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(68, "BB_CHASE");
	VEHICLE::REMOVE_VEHICLE_RECORDING(69, "BB_Chase");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3292);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
}

void func_158(bool bParam0, bool bParam1)//Position - 0xDD0B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_2667))
	{
		iLocal_90 = 0;
		GlobalFunc_2214();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2683);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_106)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_177());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2213());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2212());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2211());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_173();
			func_172();
			func_169();
		}
		else
		{
			func_165();
			func_164();
		}
		if (bParam1)
		{
			GlobalFunc_9158(0);
		}
	}
}






void func_164()//Position - 0xDF1C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2915[iVar0] = 0;
		Local_1962[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_108[iVar0] = 0f;
		fLocal_284[iVar0] = 0f;
		fLocal_460[iVar0] = 0f;
		fLocal_636[iVar0] = 0f;
		iLocal_1293[iVar0] = 0;
		fLocal_812[iVar0] = 0f;
		iLocal_1469[iVar0] = 0;
		iLocal_2684[iVar0] = 0;
		iLocal_1645[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3091[iVar0] = 0;
		iVar0++;
	}
	iLocal_1945 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3104[iVar0] = 0;
		Local_2488[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1208[iVar0] = 0f;
		fLocal_1224[iVar0] = 0f;
		fLocal_1240[iVar0] = 0f;
		fLocal_1256[iVar0] = 0f;
		iLocal_1929[iVar0] = 0;
		iLocal_2860[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3156[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3120[iVar0] = 0;
		Local_2534[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_992[iVar0] = 0f;
		fLocal_1028[iVar0] = 0f;
		fLocal_1064[iVar0] = 0f;
		fLocal_1100[iVar0] = 0f;
		iLocal_1821[iVar0] = 0;
		fLocal_1136[iVar0] = 0f;
		iLocal_1857[iVar0] = 0;
		iLocal_2876[iVar0] = 0;
		iLocal_1893[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iLocal_1949 = 0;
	iLocal_1952 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
}

void func_165()//Position - 0xE0A9
{
	func_168();
	func_167();
	func_166();
}

void func_166()//Position - 0xE0BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3120[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3120[iVar0]));
			}
		}
		iLocal_1857[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1821[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2876[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2876[iVar0]);
		}
		iVar0++;
	}
}

void func_167()//Position - 0xE1B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3104[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_3104[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_3104[iVar0]));
			}
		}
		iLocal_1929[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2860[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2860[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1947 = 0;
}

void func_168()//Position - 0xE230
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2915[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2915[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2915[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2915[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2915[iVar0], -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_2915[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_2915[iVar0]));
			}
		}
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1293[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667);
			}
		}
		iLocal_1469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2684[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2684[iVar0]);
		}
		iVar0++;
	}
	iLocal_1949 = 0;
	iLocal_1945 = 0;
}

void func_169()//Position - 0xE32E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[iVar0]);
				}
			}
			func_171(iLocal_3120[iVar0]);
			GlobalFunc_3006(iLocal_3120[iVar0]);
		}
		iLocal_1857[iVar0] = 0;
		iLocal_1893[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1821[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2876[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2876[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
}


void func_171(int iParam0)//Position - 0xE412
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
				if (bLocal_107)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_172()//Position - 0xE4AB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3104[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3104[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_3104[iVar0], 1, 0);
			}
			GlobalFunc_3006(iLocal_3104[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2860[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2860[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1947 = 0;
}

void func_173()//Position - 0xE52E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2915[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2915[iVar0]))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_2915[iVar0], 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2915[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2915[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2915[iVar0]);
				}
			}
			func_171(iLocal_2915[iVar0]);
			GlobalFunc_3006(iLocal_2915[iVar0]);
		}
		iLocal_1469[iVar0] = 0;
		iLocal_1645[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1293[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2684[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2684[iVar0]);
		}
		iVar0++;
	}
	iLocal_1949 = 0;
	iLocal_1945 = 0;
}




int func_177()//Position - 0xE642
{
	if (iLocal_2912 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2912;
}








void func_185()//Position - 0xE811
{
	if (HUD::DOES_BLIP_EXIST(uLocal_3284))
	{
		HUD::REMOVE_BLIP(&uLocal_3284);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3285))
	{
		HUD::REMOVE_BLIP(&uLocal_3285);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3286))
	{
		HUD::REMOVE_BLIP(&uLocal_3286);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3287))
	{
		HUD::REMOVE_BLIP(&uLocal_3287);
	}
}

void func_186()//Position - 0xE85D
{
	if (iLocal_3569 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
		{
			if (!PED::IS_PED_INJURED(iLocal_3227))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_3227, PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3569 = 1;
				}
			}
		}
	}
	if (iLocal_3569 == 0)
	{
		if (iLocal_3533 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
			{
				if (!PED::IS_PED_INJURED(iLocal_3227))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
					{
						if (!PED::IS_PED_INJURED(iLocal_3221))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
							{
								if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3221) > 18)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3283))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3283))
										{
											ENTITY::DETACH_ENTITY(iLocal_3283, 1, 1);
										}
									}
									uLocal_3209 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3227, uLocal_3209, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_3227, PLAYER::PLAYER_PED_ID(), 9000, 1024, 3);
									iLocal_3533 = 1;
									iLocal_3534 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3533 == 1 && iLocal_3535 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
			{
				if (!PED::IS_PED_INJURED(iLocal_3227))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3209))
					{
						if (!iLocal_3534)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3209) > 0.25f)
							{
								GlobalFunc_173(&uLocal_3577, 4, iLocal_3227, "HangerWorker", 0, 1);
								GlobalFunc_5653(iLocal_3227, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3534 = 1;
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3209) > 0.99f)
						{
							uLocal_3209 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3227, uLocal_3209, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3535 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3535 == 1 && iLocal_3538 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
			{
				if (!PED::IS_PED_INJURED(iLocal_3227))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3209))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_3227, MISC::GET_HASH_KEY("ENDS_IN_RUN")))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
							TASK::TASK_FORCE_MOTION_STATE(0, -1115154469, 0);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_3227, uLocal_3291);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
							PED::FORCE_PED_MOTION_STATE(iLocal_3227, -1115154469, 0, 0, 0);
							iLocal_3538 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3538 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
		{
			if (!PED::IS_PED_INJURED(iLocal_3227))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_3227, uLocal_3291);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
				iLocal_3538 = 1;
			}
		}
	}
}


void func_188()//Position - 0xEB56
{
	if (iLocal_3180 == 0)
	{
		iLocal_3182 = 0;
		iLocal_3210 = AUDIO::GET_SOUND_ID();
		CUTSCENE::REQUEST_CUTSCENE("TRV_4_MCS_2", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 0.5f, 1f);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		switch (iLocal_3182)
		{
			case 0:
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3221, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_3227))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3227, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3265, "JET_TRV4", 0, joaat("jet"), 0);
				}
				GlobalFunc_8380(1, 1, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_SUCK_CS");
				CUTSCENE::START_CUTSCENE(0);
				iLocal_3182++;
				break;
			
			case 1:
				func_109();
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("JET_TRV4", joaat("jet")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3265))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3265, 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!PED::IS_PED_INJURED(iLocal_3227))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3227, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_3227, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3227, 0);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_3227, 1);
						ENTITY::SET_ENTITY_PROOFS(iLocal_3227, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					func_109();
					func_107(1);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					iLocal_3337 = 1;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3281 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							ENTITY::SET_ENTITY_ROTATION(iLocal_3281, 0f, 0f, -121.5948f, 2, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_3281, 0f, 0f, 0.8729f, -0.4879f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
						}
					}
					CUTSCENE::_0xC61B86C9F61EB404(0);
					GlobalFunc_8380(0, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 0, 2))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_smg"), 150, 1, 1);
					}
					iLocal_3180 = 2;
				}
				break;
			}
	}
	if (iLocal_3180 == 2)
	{
		iLocal_3180 = 0;
		iLocal_3179 = 8;
	}
}









void func_197()//Position - 0xEFDB
{
	if (iLocal_3510 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_3510 = 1;
		}
	}
	else if (iLocal_3514 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		}
		else
		{
			if (fLocal_3325 < 1f)
			{
				fLocal_3325 = 1f;
			}
			fLocal_3325 = (fLocal_3325 * 0.975f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_3325);
		}
	}
	if (iLocal_3180 > 0)
	{
		func_186();
	}
	if (iLocal_3180 == 0)
	{
		iLocal_3338 = 0;
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3343 = 0;
		iLocal_3359 = 0;
		iLocal_3470 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3478 = 0;
		iLocal_3511 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515[0] = 0;
		iLocal_3519[0] = 0;
		iLocal_3515[1] = 0;
		iLocal_3519[1] = 0;
		iLocal_3515[2] = 0;
		iLocal_3533 = 0;
		iLocal_3535 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3541 = 0;
		iLocal_3567 = 0;
		iLocal_3569 = 0;
		iLocal_3570[3] = 0;
		STREAMING::REQUEST_MODEL(joaat("prop_jet_bloodsplat_01"));
		INTERIOR::_0xAF348AFCB575A441("V_60_HangerRm");
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
		{
			if (!PED::IS_PED_INJURED(iLocal_3221))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3221, 3f, 1);
				}
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		if (iLocal_3478 == 0)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Trv_4_747", 0))
			{
				iLocal_3478 = 1;
			}
		}
		if (iLocal_3470 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3221) > 20)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
								{
									func_202(&iLocal_3265);
									AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3210, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3265, 1, 0);
									iLocal_3470 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3511 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
					{
						if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3221) > 23)
						{
							TASK::CLEAR_PED_TASKS(iLocal_3221);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ENGINE_DEATH_SCENE"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_3208 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_3208, iLocal_3265, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_3265, "chassis_Control"));
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3221, uLocal_3208, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3208, 1);
									iLocal_3511 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					if (iLocal_3511 == 1)
					{
						Local_3317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						if (Local_3317.f_1 < -2965f)
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_3221, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3221, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3221, 4000, 48, 4);
							iLocal_3512 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3513 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				CAM::STOP_GAMEPLAY_HINT(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3232[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_3232[0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[0], 0);
					}
				}
				iLocal_3513 = 1;
			}
		}
		if (iLocal_3472 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_3282, iLocal_3221))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3208) > 0.59f)
								{
									ENTITY::DETACH_ENTITY(iLocal_3282, 1, 1);
									if (HUD::DOES_BLIP_EXIST(uLocal_3284))
									{
										HUD::REMOVE_BLIP(&uLocal_3284);
									}
									if (!HUD::DOES_BLIP_EXIST(uLocal_3287))
									{
										GlobalFunc_5653(iLocal_3221, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
										{
											AUDIO::STOP_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
										}
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_LOSE_COPS"))
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_LOSE_COPS");
										}
										SYSTEM::SETTIMERB(0);
										iLocal_3472 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3514 == 0)
		{
			if (iLocal_3472 == 1 && SYSTEM::TIMERB() > 2500)
			{
				uLocal_3287 = func_199(iLocal_3282);
				GlobalFunc_164("SOL3_GOD1", 7500, -1);
				SYSTEM::SETTIMERB(0);
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3570[3] == 0)
		{
			if (iLocal_3514 == 1 && iLocal_3513 == 1)
			{
				if (SYSTEM::TIMERB() > 2500)
				{
					RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
					iLocal_3570[3] = 1;
				}
			}
		}
		if (iLocal_3471 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_3221))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3208) > 0.89f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
							{
								PED::DELETE_PED(&iLocal_3221);
								GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_blood_impact", iLocal_3265, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_3763 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_3265, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3211, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3191 = MISC::GET_GAME_TIMER();
								iLocal_3471 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (MISC::GET_GAME_TIMER() > iLocal_3191 + 574)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3281))
				{
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3281 = OBJECT::CREATE_OBJECT(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_3281, 0f, 0f, -121.5948f, 2, 1);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_3281, 0f, 0f, 0.8729f, -0.4879f);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3567 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev4_747_engine_debris", iLocal_3265, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3265, 0, 0);
							func_198();
							AUDIO::STOP_SOUND(iLocal_3210);
							iLocal_3567 = 1;
						}
					}
				}
			}
			if (iLocal_3515[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3191 + 300)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3763))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3763, 0);
					}
					iLocal_3515[0] = 1;
				}
			}
			else if (iLocal_3519[0] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3191 + 700)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
						{
							uLocal_3763 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_3265, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3519[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3515[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3191 + 1000)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3763))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3763, 0);
					}
					iLocal_3515[1] = 1;
				}
			}
			else if (iLocal_3519[1] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3191 + 1400)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
						{
							uLocal_3763 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_exhaust_plane_misfire", iLocal_3265, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_3762 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_damage", iLocal_3265, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_3519[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3515[2] == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3191 + 3500)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3763))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3763, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3265, 0))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_3265, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_3515[2] = 1;
				}
			}
		}
		if (iLocal_3536 == 0)
		{
			if (iLocal_3472 == 1)
			{
				if (iLocal_3537 == 0)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3282))
					{
						iLocal_3201 = MISC::GET_GAME_TIMER();
						iLocal_3537 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_3201 + 2000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3282, 1);
					iLocal_3536 = 1;
				}
			}
		}
		if (iLocal_3541 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3265, 0);
					iLocal_3541 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_3287))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3282, 1) < 1.5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					HUD::REMOVE_BLIP(&uLocal_3287);
					OBJECT::DELETE_OBJECT(&iLocal_3282);
					func_109();
					iLocal_3180 = 0;
					iLocal_3179 = 8;
				}
			}
		}
	}
}

void func_198()//Position - 0xF8D6
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3758))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3758, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3759))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3759, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3760))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3760, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3761))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3761, 0);
	}
}

int func_199(int iParam0)//Position - 0xF926
{
	return GlobalFunc_5681(iParam0, 1, 0);
}



void func_202(int iParam0)//Position - 0xF9F1
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var3 = { 12.6349f, 7.89711f, -7.09742f };
		Var6 = { -22.5879f, -2.2931f, -6.22542f };
		Var9 = { -12.6675f, 8.15519f, -6.98833f };
		Var12 = { 180f, 0f, 0f };
		uLocal_3758 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var12, 1065353216, 0, 0, 0);
		uLocal_3759 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var12, 1065353216, 0, 0, 0);
		uLocal_3760 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var6, Var12, 1065353216, 0, 0, 0);
		uLocal_3761 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev4_747_engine_heathaze", *iParam0, Var9, Var12, 1065353216, 0, 0, 0);
	}
}

void func_203()//Position - 0xFAD3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
	{
		if (!PED::IS_PED_INJURED(iLocal_3221))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3221, 1) < 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3221, 3f, 1);
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3221, 1) < 22f && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3221, 1) > 17f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3221, 2f, 1);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3221))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3221, 1) > 22f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3221, 1f, 1);
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3221, 1) > 22f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3221, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3180 > 0)
	{
		if (iLocal_3510 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_3510 = 1;
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			if (fLocal_3325 < 1f)
			{
				fLocal_3325 = 1f;
			}
			fLocal_3325 = (fLocal_3325 * 0.98f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fLocal_3325);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
			{
				iLocal_3265 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3265, 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3265, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_3265, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_3265, 500);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
			STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
			STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
			if ((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01")))
			{
				iLocal_3227 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3227, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3227, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3227, 1);
				GlobalFunc_173(&uLocal_3577, 4, iLocal_3227, "HangerWorker", 0, 1);
				iLocal_3283 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3283, iLocal_3227, PED::GET_PED_BONE_INDEX(iLocal_3221, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				uLocal_3209 = PED::CREATE_SYNCHRONIZED_SCENE(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3227, uLocal_3209, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3232[0]))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
			{
				iLocal_3232[0] = PED::CREATE_PED(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3232[0], joaat("weapon_pistol"), 1000, 1, 1);
				PED::SET_PED_ACCURACY(iLocal_3232[0], 20);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3232[0], 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3232[0], 1);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_3232[0], PLAYER::PLAYER_PED_ID(), -1, 1);
				GlobalFunc_593(iLocal_3232[0], 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
			{
				iLocal_3266 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3266, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3266);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3266, 2000);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3266, 0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3266, 1) > 5f)
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3266, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_3180 == 0)
	{
		GlobalFunc_Checkpoint3(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3344 == 1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_104();
			GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			iLocal_3344 = 0;
		}
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3510 = 0;
		fLocal_3325 = 3f;
		iLocal_3184 = 0;
		func_158(0, 1);
		VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(61, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(63, "BB_CHASE");
		VEHICLE::REMOVE_VEHICLE_RECORDING(64, "BB_CHASE");
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3292);
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3257, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3257);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3270))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_3270);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[0]))
		{
			PED::DELETE_PED(&(iLocal_3253[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_3259[0]));
		}
		MISC::SET_FAKE_WANTED_LEVEL(0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		if (!PED::IS_PED_INJURED(iLocal_3221))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_3284))
			{
				uLocal_3284 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3221);
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_3284, 1);
			}
		}
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 1);
		if (iLocal_3364[2] == 1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_3218))
			{
				AUDIO::STOP_SOUND(iLocal_3218);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_3218);
			iLocal_3396 = 0;
			iLocal_3364[2] = 0;
		}
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_RUN");
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
		{
			STREAMING::REQUEST_MODEL(joaat("jet"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
		}
		STREAMING::REQUEST_MODEL(joaat("shamal"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(68, "BB_Chase");
		VEHICLE::REQUEST_VEHICLE_RECORDING(69, "BB_Chase");
		STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
		SYSTEM::SETTIMERA(0);
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 1, 1f, 1f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(0, -1, 1);
			GlobalFunc_164("TRV4_CHASE1", 7500, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		iLocal_3180 = 2;
	}
	if (iLocal_3180 == 2)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_204("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_204("TRV4_FAIL1");
		}
		if (SYSTEM::TIMERA() > 15000)
		{
			func_204("TRV4_FAIL1");
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_3221))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3221, "BB_MOLLY_2", 10, 4, -1);
					TASK::TASK_PLAY_ANIM(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			SYSTEM::SETTIMERA(0);
			iLocal_3180 = 3;
		}
	}
	if (iLocal_3180 == 3)
	{
		if (!PED::IS_PED_INJURED(iLocal_3221))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_3221))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_3221) > 18 && iLocal_3436 == 0)
				{
					iLocal_3351 = 0;
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_3221, 3f, 1);
					iLocal_3180 = 0;
					iLocal_3179 = 6;
				}
			}
		}
		if (SYSTEM::TIMERA() > 50000)
		{
			if (!PED::IS_PED_INJURED(iLocal_3221))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3221);
				ENTITY::SET_ENTITY_COORDS(iLocal_3221, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3221, "BB_MOLLY_2", 18, 4, -1);
				TASK::TASK_PLAY_ANIM(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3351 = 0;
				iLocal_3180 = 0;
				iLocal_3179 = 6;
			}
		}
	}
}

void func_204(char* sParam0)//Position - 0x10329
{
	if (iLocal_3436 == 0)
	{
		if (iLocal_3335)
		{
			GlobalFunc_702(0, 1, 1);
			CAM::SET_CAM_ACTIVE(uLocal_3288, 0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::STOP_SOUND(iLocal_3218);
			GlobalFunc_2242();
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
			iLocal_3364[2] = 0;
			iLocal_3335 = 0;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FAIL");
		sLocal_3576 = sParam0;
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
		GlobalFunc_4956();
		GlobalFunc_10835(sLocal_3576);
		iLocal_3436 = 1;
	}
}











void func_215()//Position - 0x111DF
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 30000f)
					{
						STREAMING::REQUEST_MODEL(joaat("jet"));
						if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
						{
							iLocal_3265 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_3265, 2);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3265, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3265, 1);
							ENTITY::SET_ENTITY_PROOFS(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
							ENTITY::SET_ENTITY_LOD_DIST(iLocal_3265, 500);
						}
					}
				}
			}
		}
	}
	func_303();
	if (HUD::DOES_BLIP_EXIST(uLocal_3284))
	{
		GlobalFunc_2216(uLocal_3284, iLocal_3221, 300f, 0.9f, 0);
	}
	if (iLocal_3180 == 0)
	{
		if (iLocal_3181 < 2)
		{
			PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), 0);
		}
		func_301();
		func_269();
		if (iLocal_3401 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[20]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[20], 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3120[20], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_3120[20]);
					iLocal_3401 = 1;
				}
			}
		}
		func_268();
		func_267();
		if (iLocal_3348 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						func_266(uLocal_3288, iLocal_3270, "BB_Chase", 1);
						iLocal_3348 = 1;
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
			{
				func_265(uLocal_3288, iLocal_3270, fLocal_3322);
				CAM::SET_CAM_FOV(uLocal_3288, 45f);
			}
		}
		if (iLocal_3336 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 125464f) && GlobalFunc_4953(1, 0, 0))
					{
						iLocal_3351 = 1;
						if (iLocal_3436 == 0)
						{
							HUD::CLEAR_HELP(1);
							GlobalFunc_159("TRV4_HELP1", -1);
							GlobalFunc_7632(1);
							GlobalFunc_4948(&uLocal_27, 0, 0);
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
							iLocal_3336 = 1;
						}
					}
				}
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_3292) && func_155(1, "BB_Chase"))
				{
					if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 15000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 125464f) && iLocal_3436 == 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_235();
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 125464f || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (iLocal_3335)
						{
							HUD::CLEAR_HELP(1);
							GlobalFunc_702(0, 1, 1);
							CAM::SET_CAM_ACTIVE(uLocal_3288, 0);
							CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
							HUD::DISPLAY_RADAR(1);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
							}
							AUDIO::STOP_SOUND(iLocal_3218);
							GlobalFunc_2242();
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
							iLocal_3364[2] = 0;
							iLocal_3335 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3181)
		{
			case 0:
				if (iLocal_3570[0] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 44255f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_3570[0] = 1;
							}
						}
					}
				}
				if (iLocal_3570[1] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 52875f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								RECORDING::_0x293220DA1B46CEBC(6f, 2f, 3);
								iLocal_3570[1] = 1;
							}
						}
					}
				}
				if (iLocal_3570[2] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 87085f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 2f, 3);
								iLocal_3570[2] = 1;
							}
						}
					}
				}
				func_234();
				func_233();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_PLANE_ON_FIRE"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 64280f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 72000f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1149.6f, -2323.7f, 22.5f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 130f)
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 72500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_JET_LANDING"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 78000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 85000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 85500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 100000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 107000f)
								{
									AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 107500f)
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 10000f)
							{
								func_232();
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 30000f)
						{
							func_231(iLocal_3257, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257));
						}
					}
				}
				if (iLocal_3439 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 22000f)
							{
								AUDIO::PREPARE_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
								iLocal_3439 = 1;
							}
						}
					}
				}
				else if (iLocal_3440 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
						iLocal_3440 = 1;
					}
				}
				if (iLocal_3342 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (GlobalFunc_156(iLocal_3257, PLAYER::PLAYER_PED_ID(), 1) < 170f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_3286))
							{
								HUD::REMOVE_BLIP(&uLocal_3286);
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
							{
								AUDIO::START_AUDIO_SCENE("SOL_3_MAIN_CHASE");
							}
							if (!HUD::DOES_BLIP_EXIST(uLocal_3284))
							{
								if (!PED::IS_PED_INJURED(iLocal_3221))
								{
									uLocal_3284 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3221);
									HUD::SET_BLIP_AS_FRIENDLY(uLocal_3284, 1);
								}
							}
							HUD::CLEAR_GPS_MULTI_ROUTE();
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_164("TRV4_CHASE2", 7500, 1);
								GlobalFunc_Checkpoint3(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
								iLocal_3342 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_3286))
						{
							HUD::REMOVE_BLIP(&uLocal_3286);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_3284))
						{
							if (!PED::IS_PED_INJURED(iLocal_3221))
							{
								uLocal_3284 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3221);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_3284, 1);
							}
						}
						HUD::CLEAR_GPS_MULTI_ROUTE();
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_164("TRV4_CHASE2", 7500, 1);
							GlobalFunc_Checkpoint3(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CHASE");
							iLocal_3342 = 1;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 15000f)
						{
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 18490f)
								{
									iLocal_3259[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3259[1], 2, "BB_Chase", 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3259[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3259[1]))
						{
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3259[1], fLocal_3322);
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3259[1]) > 20000f)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3259[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3259[1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3259[1]);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[1]))
									{
										PED::DELETE_PED(&(iLocal_3253[1]));
									}
									VEHICLE::DELETE_VEHICLE(&(iLocal_3259[1]));
									iLocal_3206 = MISC::GET_GAME_TIMER() + 1000;
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[1]))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3259[1]) > 31543f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3259[1]);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3259[1], 1);
								}
							}
						}
						else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3259[1], 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3259[1]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[1]))
							{
								PED::DELETE_PED(&(iLocal_3253[1]));
							}
							VEHICLE::DELETE_VEHICLE(&(iLocal_3259[1]));
							iLocal_3206 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
				if (iLocal_3486 == 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 23000f)
								{
									STREAMING::REQUEST_MODEL(joaat("tanker"));
									if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")))
									{
										iLocal_3264 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_3264, 57, 57);
										iLocal_3486 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[1], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[1]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3120[1]) > 13000f)
							{
								if (iLocal_3376 == 0)
								{
									fLocal_1172[1] = 0.5f;
									iLocal_3244 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[1], -1);
									iLocal_3376 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3333 == 0)
				{
					STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1325f, -2779f, 14f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[1]))
					{
						if (iLocal_3362 == 0)
						{
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_3120[1], 57, 57);
							iLocal_3362 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[1]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_3264))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[1]))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_3120[1], iLocal_3264, 1065353216);
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 41430f)
									{
										ENTITY::DETACH_ENTITY(iLocal_3264, 1, 1);
										iLocal_3333 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3379 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[1], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 42700f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3244))
									{
										if (!PED::IS_PED_INJURED(iLocal_3244))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_3244, 0);
										}
									}
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[1]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[1]);
										iLocal_3379 = 1;
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (iLocal_3550 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 38000f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[1], 0))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Horn", iLocal_3120[1], 0, 0, 0);
										iLocal_3550 = 1;
									}
								}
							}
							if (iLocal_3364[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 39000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_3364[1] = 1;
								}
							}
							if (iLocal_3434 == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 41611f)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_3264))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[7]))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[7]))
												{
													AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3264, 0, 0, 0);
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[7]);
													VEHICLE::EXPLODE_VEHICLE(iLocal_3120[7], 1, 0);
													VEHICLE::EXPLODE_VEHICLE(iLocal_3264, 1, 0);
													FIRE::ADD_EXPLOSION(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216);
													FIRE::ADD_EXPLOSION(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3264);
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3120[1]));
													iLocal_3434 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3368[1] == 0)
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 43204f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_EVENT_TANKER_CRASH"))
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_EVENT_TANKER_CRASH");
									}
									AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_PROOFS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_3368[1] = 1;
								}
							}
						}
					}
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_HELI_TAKEOFF"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[0], 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 40000f)
										{
											AUDIO::START_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[0], 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 43204f)
									{
										AUDIO::STOP_AUDIO_SCENE("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3326 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 60500f)
							{
								STREAMING::REQUEST_MODEL(joaat("jet"));
							}
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 66500f)
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("jet")))
								{
									iLocal_3259[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3259[0], 1);
									VEHICLE::SET_VEHICLE_LIVERY(iLocal_3259[0], 2);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3259[0], 35, "BB_Chase", 1);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3259[0], 3491f);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("jet"));
									iLocal_3326 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3259[0], 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3259[0]))
								{
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_3259[0], fLocal_3322);
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 80000f)
									{
										if (GlobalFunc_156(iLocal_3259[0], PLAYER::PLAYER_PED_ID(), 1) > 200f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3259[0]);
										}
									}
								}
								else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 80000f)
								{
									if (GlobalFunc_156(iLocal_3259[0], PLAYER::PLAYER_PED_ID(), 1) > 200f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3259[0]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[0]))
										{
											PED::DELETE_PED(&(iLocal_3253[0]));
										}
										VEHICLE::DELETE_VEHICLE(&(iLocal_3259[0]));
										iLocal_3206 = MISC::GET_GAME_TIMER() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3398 == 0)
				{
					if (iLocal_3397 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 50000f)
									{
										STREAMING::REQUEST_MODEL(joaat("s_m_y_airworker"));
										STREAMING::REQUEST_ANIM_DICT("misstrevor4");
										if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_airworker")))
										{
											iLocal_3245 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_3246 = PED::CREATE_PED(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3245, 1);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3246, 1);
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_airworker"));
											iLocal_3397 = 1;
										}
									}
								}
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 58000f)
								{
									if (!PED::IS_PED_INJURED(iLocal_3245))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3245, "misstrevor4", "dive_clear_goon1", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_3245, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_3246))
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4"))
										{
											if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3246, "misstrevor4", "dive_clear_goon2", 3))
											{
												TASK::TASK_PLAY_ANIM(iLocal_3246, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3398 = 1;
								}
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
				{
					if (!PED::IS_PED_INJURED(iLocal_3245))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3245, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3246))
							{
								if (!PED::IS_PED_INJURED(iLocal_3246))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3246, "misstrevor4", "dive_clear_goon2", 3))
									{
										STREAMING::REMOVE_ANIM_DICT("misstrevor4");
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3245);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3246);
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[8]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[8]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 50200f)
										{
											if (iLocal_3329 == 0)
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_3120[8], 1f);
												if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3120[8], 1) < 100f)
												{
													MISC::SET_TIME_SCALE(0.3f);
													iLocal_3372 = 0;
													if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
													{
														AUDIO::START_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
													}
													CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_3120[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3120[8], 1);
												VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_3120[8], 1, 0);
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3212, "Trevor_4_747_Flying_Car", iLocal_3120[8], 0, 0, 0);
												SYSTEM::SETTIMERB(0);
												iLocal_3329 = 1;
											}
										}
										if (iLocal_3329 == 1)
										{
											if (SYSTEM::TIMERB() > 662)
											{
												if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
												{
													AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
												}
												MISC::SET_TIME_SCALE(1f);
												iLocal_3372 = 1;
											}
											if (SYSTEM::TIMERB() > 1872)
											{
												VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[8]);
											}
										}
									}
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 50200f)
									{
										if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3120[8]))
										{
											if (iLocal_3384 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3212, "Trevor_4_747_Carsplosion", iLocal_3120[8], 0, 0, 0);
												VEHICLE::EXPLODE_VEHICLE(iLocal_3120[8], 1, 0);
												iLocal_3384 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3372 == 0)
					{
						if (iLocal_3329 == 1)
						{
							if (SYSTEM::TIMERB() > 662)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
								{
									AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
								}
								MISC::SET_TIME_SCALE(1f);
								iLocal_3372 = 1;
							}
						}
					}
				}
				else if (iLocal_3372 == 0)
				{
					if (iLocal_3329 == 1)
					{
						if (SYSTEM::TIMERB() > 662)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CAR_JET_ENGINE"))
							{
								AUDIO::STOP_AUDIO_SCENE("SOL_3_CAR_JET_ENGINE");
							}
							MISC::SET_TIME_SCALE(1f);
							iLocal_3372 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[11]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[11], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[11]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 82683f)
										{
											if (iLocal_3330 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3214, "Trevor_4_747_Flying_Car", iLocal_3120[11], 0, 0, 0);
												iLocal_3330 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3330 == 1)
											{
												if (SYSTEM::TIMERB() > 1872)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3120[11]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3330 == 1)
						{
							if (iLocal_3385 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3120[11]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3214, "Trevor_4_747_Carsplosion", iLocal_3120[11], 0, 0, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_3120[11], 1, 0);
									iLocal_3385 = 1;
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[12]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[12], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[12]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 82463f)
										{
											if (iLocal_3331 == 0)
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3120[12], 0, 0, 0);
												iLocal_3331 = 1;
												SYSTEM::SETTIMERB(0);
											}
											if (iLocal_3331 == 1)
											{
												if (SYSTEM::TIMERB() > 1000)
												{
													if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3120[12]))
													{
														VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3540 == 0)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[12]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3120[12]) > 22216f && GlobalFunc_156(iLocal_3258, iLocal_3120[12], 1) < 90f)
									{
										MISC::SET_TIME_SCALE(0.3f);
										CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_3120[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3202 = MISC::GET_GAME_TIMER();
										iLocal_3540 = 1;
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3120[12]))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3120[12], 0, 0, 0);
									VEHICLE::EXPLODE_VEHICLE(iLocal_3120[12], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3540 == 1)
				{
				}
				if (iLocal_3539 == 0 && iLocal_3540 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[12]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[12], 0))
						{
							Local_3314 = { ENTITY::GET_ENTITY_COORDS(iLocal_3120[12], 1) };
						}
					}
					Local_3317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (MISC::GET_GAME_TIMER() > iLocal_3202 + 1579 || Local_3317.f_1 < Local_3314.f_1)
					{
						MISC::SET_TIME_SCALE(1f);
						CAM::STOP_GAMEPLAY_HINT(0);
						iLocal_3539 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 105000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 113000f)
							{
								STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[13]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[13], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[13]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 108830f)
										{
											VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_3120[13], 0);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3120[13], 1);
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3120[13], 0);
											SYSTEM::SETTIMERA(0);
											iLocal_3485 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3485 == 1)
						{
							ENTITY::SET_ENTITY_HEALTH(iLocal_3120[13], 0);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_3120[13], 1);
							ENTITY::SET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[13], -1), 0);
						}
					}
				}
				if (iLocal_3477 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[5]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[5], 0))
						{
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_3120[5], 0);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3120[5], 1);
							iLocal_3477 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[15]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[15], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[15]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 104989f)
										{
											VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[15]);
											func_229(iLocal_3120[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_229(iLocal_3120[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											VEHICLE::EXPLODE_VEHICLE(iLocal_3120[15], 1, 0);
											RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
											AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Trevor_4_747_Carsplosion", iLocal_3120[15], 0, 0, 0);
											AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 112000f)
							{
								TASK::REQUEST_WAYPOINT_RECORDING("BB_MOLLY_2");
								STREAMING::REQUEST_ANIM_DICT("misssolomon_3");
								STREAMING::REQUEST_ANIM_DICT("move_f@film_reel_arms");
								iLocal_3181 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3507 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3507 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3271[0], 0))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3271[0], 0);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3271[0]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3250[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_3250[0]);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[0]));
					}
				}
				if (iLocal_3400 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 115000f)
								{
									TASK::REQUEST_WAYPOINT_RECORDING("Trev4_5");
									STREAMING::REQUEST_MODEL(joaat("prop_cs_film_reel_01"));
									if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
									{
										STREAMING::NEW_LOAD_SCENE_START_SPHERE(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3400 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3436 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 120000f)
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
									{
										AUDIO::START_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
									}
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3257);
								}
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 125513f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3257);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3257, 1);
									func_228();
									PED::CLEAR_PED_NON_CREATION_AREA();
									PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									AUDIO::STOP_AUDIO_SCENE("TREVOR_4_MAIN_CHASE");
									if (!CAM::DOES_CAM_EXIST(uLocal_3290))
									{
										uLocal_3290 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!CAM::DOES_CAM_EXIST(uLocal_3289))
									{
										uLocal_3289 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_3193 = MISC::GET_GAME_TIMER();
									CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
									MISC::SET_INSTANCE_PRIORITY_HINT(0);
									iLocal_3181 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_3317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3257);
				if (iLocal_3507 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3507 = 1;
					}
				}
				if (iLocal_3436 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3317, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3181 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
						{
							if (iLocal_3507 == 1)
							{
								iLocal_3181 = 3;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_3193 + 5000 && iLocal_3507 == 1)
					{
						iLocal_3181 = 3;
					}
				}
				break;
			
			case 3:
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3257);
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3465 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_3"))
								{
									if (!PED::IS_PED_INJURED(iLocal_3221))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
										{
											if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3282 = OBJECT::CREATE_OBJECT(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3282, iLocal_3221, PED::GET_PED_BONE_INDEX(iLocal_3221, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_3257, 0);
											uLocal_3207 = PED::CREATE_SYNCHRONIZED_SCENE(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_3257, uLocal_3207, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_3221, uLocal_3207, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_3207, 0);
											AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3465 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3467 == 0)
				{
					if (iLocal_3465 == 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_3221))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_3221, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3221, -1000f, 1);
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3221);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3221, 1);
								ENTITY::SET_ENTITY_COORDS(iLocal_3221, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iLocal_3221, 236.5739f);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3221, "BB_MOLLY_2", 1, 4, -1);
								if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
								{
									TASK::TASK_PLAY_ANIM(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_3467 = 1;
							}
						}
					}
				}
				if (iLocal_3436 == 0)
				{
					if (iLocal_3475 == 0)
					{
						if (iLocal_3474 == 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_3221))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3207) > 0.18f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3182 = 0;
										iLocal_3474 = 1;
									}
								}
							}
						}
						while (iLocal_3474 == 1)
						{
							RECORDING::_0x208784099002BC30("M_LegalTrouble", 0);
							switch (iLocal_3182)
							{
								case 0:
									CAM::SET_CAM_PARAMS(uLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									CAM::SET_CAM_PARAMS(uLocal_3289, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3289, uLocal_3290, 4000, 1, 1);
									HUD::DISPLAY_RADAR(0);
									HUD::DISPLAY_HUD(0);
									CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3270))
									{
										VEHICLE::DELETE_VEHICLE(&iLocal_3270);
									}
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 47.9465f);
									}
									else
									{
										ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 47.9465f);
									}
									if (!PED::IS_PED_INJURED(iLocal_3221))
									{
										GlobalFunc_173(&uLocal_3577, 2, iLocal_3221, "MOLLY", 0, 1);
										PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_3221, 1);
									}
									RECORDING::_0x293220DA1B46CEBC(4f, 0f, 3);
									RECORDING::_0x48621C9FCA3EBD28(4);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									iLocal_3528 = 0;
									iLocal_3182++;
									break;
								
								case 1:
									if (!PED::IS_PED_INJURED(iLocal_3221))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3528 == 0)
											{
												if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3207) > 0.3f)
												{
													if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(6f, 7f, 4);
														iLocal_3528 = 1;
													}
												}
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3207) > 0.5f)
											{
												CAM::SET_CAM_PARAMS(uLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												CAM::SET_CAM_PARAMS(uLocal_3289, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_3289, uLocal_3290, 4000, 1, 1);
												iLocal_3205 = MISC::GET_GAME_TIMER();
												iLocal_3182++;
											}
										}
									}
									break;
								
								case 2:
									if (!PED::IS_PED_INJURED(iLocal_3221))
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3205 != -1 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_3205) >= 2230)
											{
												GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
												AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3205 = -1;
											}
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3207) > 0.85f)
											{
												HUD::DISPLAY_HUD(1);
												HUD::DISPLAY_RADAR(1);
												CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
												CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
												iLocal_3219 = 346732587;
												OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_3219, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_3219, 1f, 0, 1);
												PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
													if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
													{
														PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
													}
												}
												PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_3221, 0);
												RECORDING::_0x81CBAE94390F9F89();
												RECORDING::_0x293220DA1B46CEBC(0f, 4f, 3);
												iLocal_3194 = MISC::GET_GAME_TIMER();
												iLocal_3474 = 0;
												iLocal_3475 = 1;
												iLocal_3182++;
											}
										}
									}
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
				if (iLocal_3475 == 1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_3219, 5, 0, 1);
					if (iLocal_3551 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
						{
							if (!PED::IS_PED_INJURED(iLocal_3221))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3221, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_3551 = 1;
								}
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_MAIN_CHASE"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_MAIN_CHASE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ARRIVE_AT_HANGAR"))
					{
						AUDIO::STOP_AUDIO_SCENE("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_ON_FOOT_CHASE"))
					{
						AUDIO::START_AUDIO_SCENE("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_216();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_3467 == 0)
					{
						if (!PED::IS_PED_INJURED(iLocal_3221))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_3221, -1000f, 1);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_3221);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3221, 1);
							ENTITY::SET_ENTITY_COORDS(iLocal_3221, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_3221, 236.5739f);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_3221, "BB_MOLLY_2", 1, 4, -1);
							if (STREAMING::HAS_ANIM_DICT_LOADED("move_f@film_reel_arms"))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3467 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_3265);
					}
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 5;
				}
				break;
			}
	}
}

void func_216()//Position - 0x13698
{
	if (iLocal_3432 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[14], 0))
			{
				iLocal_3247 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[14], -1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3247, joaat("weapon_pistol"), 1000, 1, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3247, 1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3247, 1);
				PED::SET_PED_ACCURACY(iLocal_3247, 5);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3247, 150);
				GlobalFunc_173(&uLocal_3577, 3, iLocal_3247, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3432 = 1;
	}
	else if (iLocal_3431 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
		{
			if (!PED::IS_PED_INJURED(iLocal_3247))
			{
				TASK::CLEAR_PED_TASKS(iLocal_3247);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3247, ENTITY::GET_ENTITY_COORDS(iLocal_3247, 1), 5f, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_3291);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 1);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_3291);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_3247, uLocal_3291);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_3291);
				iLocal_3431 = 1;
			}
		}
	}
	else if (iLocal_3488 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
		{
			if (!PED::IS_PED_INJURED(iLocal_3247))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3247, 0) && GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3247) < 20f)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							GlobalFunc_173(&uLocal_3577, 4, iLocal_3247, "SOL3COP", 0, 1);
							if (GlobalFunc_10630(&uLocal_3577, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3488 = 1;
							}
						}
					}
				}
			}
		}
	}
}












void func_228()//Position - 0x13E9A
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3754[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[0], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3754[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[1], 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3754[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[2], 0);
	}
	if (iLocal_3387 == 1)
	{
		AUDIO::RELEASE_SOUND_ID(iLocal_3216);
		iLocal_3395 = 0;
	}
}

void func_229(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, bool bParam8)//Position - 0x13EFC
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
		}
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (bParam8)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var6 = { GlobalFunc_107(Var0 - Var3) };
		Var6 = { Var6 * Vector(fParam7, fParam7, fParam7) };
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var6, Param4, 0, 0, 1, 1, 0, 1);
	}
}


void func_231(int iParam0, float fParam1)//Position - 0x13FB7
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_1955 < 15)
	{
		if (iLocal_1955 == 0)
		{
			Local_2655 = { 99999.9f, 99999.9f, 99999.9f };
			Local_2658 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
				Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, (fParam1 + (SYSTEM::TO_FLOAT((iLocal_1955 - 1)) * 2000f))) };
				if (Var1.x < Local_2655.x)
				{
					Local_2655.x = Var1.x;
				}
				if (Var1.f_1 < Local_2655.f_1)
				{
					Local_2655.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_2655.f_2)
				{
					Local_2655.f_2 = Var1.f_2;
				}
				if (Var1.x > Local_2658.x)
				{
					Local_2658.x = Var1.x;
				}
				if (Var1.f_1 > Local_2658.f_1)
				{
					Local_2658.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_2658.f_2)
				{
					Local_2658.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_1955++;
	}
	else if (!bLocal_105)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_2655 = { Local_2655 + Vector((fLocal_1292 * -1f), (fLocal_1292 * -1f), (fLocal_1292 * -1f)) };
		Local_2658 = { Local_2658 + Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
		Local_2649 = { Local_2655 };
		Local_2652 = { Local_2658 };
		PATHFIND::SET_ROADS_IN_AREA(Local_2649, Local_2652, 0, 0);
		iLocal_1955 = 0;
	}
}

void func_232()//Position - 0x1412C
{
	iLocal_88 = 1;
}

void func_233()//Position - 0x14137
{
	if (iLocal_3332 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 55000f)
				{
					STREAMING::REQUEST_MODEL(joaat("firetruk"));
					STREAMING::REQUEST_MODEL(joaat("s_m_y_fireman_01"));
					STREAMING::REQUEST_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
					if ((STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_fireman_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aig_lift_waitped_a"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
						{
							MISC::CLEAR_AREA(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_3263 = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1);
						}
						uLocal_3754[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_3387 == 0)
						{
							AUDIO::PLAY_SOUND_FROM_COORD(iLocal_3216, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3387 = 1;
						}
						uLocal_3754[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_3754[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222[0]))
						{
							iLocal_3222[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3263, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[0], 1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[0], 1);
							TASK::TASK_VEHICLE_SHOOT_AT_COORD(iLocal_3222[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222[1]))
						{
							iLocal_3222[1] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							TASK::TASK_PLAY_ANIM(iLocal_3222[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[1], 1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[1], 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222[2]))
						{
							iLocal_3222[2] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							TASK::TASK_PLAY_ANIM(iLocal_3222[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[2], 1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[2], 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3222[3]))
						{
							iLocal_3222[3] = PED::CREATE_PED(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							TASK::TASK_PLAY_ANIM(iLocal_3222[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[3], 1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[3], 1);
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_fireman_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
						iLocal_3332 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3332 == 1)
	{
		if (iLocal_3542[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222[1]))
				{
					if (iLocal_3546[0] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3222[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3546[0] = 1;
						}
					}
					if (iLocal_3546[0] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3222[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							TASK::TASK_COWER(iLocal_3222[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[1], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[1], 0);
							iLocal_3542[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3542[1] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222[2]))
				{
					if (iLocal_3546[1] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3222[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3546[1] = 1;
						}
					}
					if (iLocal_3546[1] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3222[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							TASK::TASK_COWER(iLocal_3222[2], -1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[2], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[2], 0);
							iLocal_3542[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3542[2] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[3]))
			{
				if (!PED::IS_PED_INJURED(iLocal_3222[3]))
				{
					if (iLocal_3546[2] == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3222[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3546[2] = 1;
						}
					}
					if (iLocal_3546[2] == 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3222[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							TASK::TASK_COWER(iLocal_3222[3], -1);
							PED::SET_PED_KEEP_TASK(iLocal_3222[3], 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3222[3], 0);
							iLocal_3542[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_234()//Position - 0x14617
{
	if (iLocal_3433 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_AIChase");
		if (STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01")))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 15500f)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						iLocal_3271[0] = VEHICLE::CREATE_VEHICLE(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1);
						iLocal_3250[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3271[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[0], 1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3271[0], "SOL_3_POLICE_CARS_Group", 0);
						GlobalFunc_593(iLocal_3250[0], 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3271[0], 1, 1);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3271[0], 1, "BB_AIChase", 1);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_3250[0], joaat("weapon_pistol"), 1000, 1, 1);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_3271[0], 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
						iLocal_3433 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3433 == 1)
	{
		if (iLocal_3479[0] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3271[0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3271[0]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3271[0], fLocal_3322);
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3271[0]) > 13000f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3271[0]);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3250[0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3250[0], 1);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								TASK::TASK_VEHICLE_CHASE(iLocal_3250[0], PLAYER::PLAYER_PED_ID());
								PED::SET_PED_KEEP_TASK(iLocal_3250[0], 1);
							}
							else
							{
								TASK::TASK_COMBAT_PED(iLocal_3250[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_3250[0], 1);
							}
							VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_AIChase");
							iLocal_3195 = MISC::GET_GAME_TIMER();
							iLocal_3479[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3482[0] == 0)
		{
			if (iLocal_3479[0] == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3195 + 500)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_3250[0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_3250[0], 16, 1);
								TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(iLocal_3250[0], 1, 1);
								iLocal_3482[0] = 1;
							}
							else
							{
								iLocal_3482[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_235()//Position - 0x148A0
{
	if (!iLocal_3334)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[20], 0))
		{
			uLocal_3288 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			CAM::SET_CAM_ACTIVE(uLocal_3288, 1);
			iLocal_3335 = 0;
			iLocal_3334 = 1;
		}
	}
	else if (GlobalFunc_7635(&uLocal_27, 1, 0, 0) && iLocal_3436 == 0)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		if (GlobalFunc_111())
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4956();
		}
		if (iLocal_3364[2] == 0)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
			}
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_3218, "Trevor_4_747_TV", 0, 1);
			iLocal_3364[2] = 1;
		}
		func_241(1, 1, 30, 5, 0);
		if (iLocal_3353 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_TEXT");
			GlobalFunc_726("TRV4_NEWS1");
			GlobalFunc_726("");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_3353 = 1;
		}
		if (iLocal_3354 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GlobalFunc_726("TRV4_NEWS2");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GlobalFunc_726("TRV4_NEWS6");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GlobalFunc_726("TRV4_NEWS7");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
			GlobalFunc_726("TRV4_NEWS8");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
			GlobalFunc_726("TRV4_NEWS9");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(4f);
			GlobalFunc_726("TRV4_NEWS10");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "DISPLAY_SCROLL_TEXT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_3200 = (MISC::GET_GAME_TIMER() - 5000);
			iLocal_3354 = 1;
		}
		if (MISC::GET_GAME_TIMER() > iLocal_3200 + 5000)
		{
			func_239();
			iLocal_3200 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_3355 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 25000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 50000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GlobalFunc_726("TRV4_NEWS5");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_3355 = 1;
					}
				}
			}
		}
		if (iLocal_3356 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 77600f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						GlobalFunc_726("TRV4_NEWS3");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(2f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 115000f)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "SET_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						GlobalFunc_726("TRV4_NEWS4");
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "DISPLAY_SCROLL_TEXT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(3f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						iLocal_3357 = 1;
					}
				}
			}
		}
		HUD::SET_TEXT_RENDER_ID(uLocal_3183);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_3292, 255, 255, 255, 0, 0);
		if (iLocal_3335 == 0)
		{
			GlobalFunc_702(1, 1, 1);
			CAM::SHAKE_CAM(uLocal_3288, "ROAD_VIBRATION_SHAKE", 1f);
			CAM::SET_CAM_ACTIVE(uLocal_3288, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			GlobalFunc_2243();
			iLocal_3335 = 1;
		}
		GlobalFunc_5077();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
	}
	else if (iLocal_3335)
	{
		GlobalFunc_702(0, 1, 1);
		CAM::SET_CAM_ACTIVE(uLocal_3288, 0);
		CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		HUD::DISPLAY_RADAR(1);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_CHOPPER_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("SOL_3_CHOPPER_CAM");
		}
		AUDIO::STOP_SOUND(iLocal_3218);
		GlobalFunc_2242();
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		iLocal_3364[2] = 0;
		iLocal_3335 = 0;
	}
}




void func_239()//Position - 0x14D08
{
	if (iLocal_3185 > 4)
	{
		iLocal_3185 = 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_3292, "DISPLAY_SCROLL_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_3185);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_3185++;
}


void func_241(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x14D51
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_49 <= 225 && iLocal_43 == 0)
			{
				iLocal_49 += 30;
				if (iLocal_49 >= 225)
				{
					iLocal_43 = 1;
				}
			}
			else if (iLocal_49 >= 30)
			{
				iLocal_49 = (iLocal_49 - 30);
				if (iLocal_49 <= 30)
				{
					iLocal_43 = 0;
				}
			}
		}
		func_248(1, 200);
		if (iLocal_47 <= iParam2 && iLocal_42 == 0)
		{
			iLocal_47++;
			func_245(1, iLocal_47);
			if (iLocal_47 == iParam2)
			{
				iLocal_42 = 1;
				iLocal_48 = MISC::GET_RANDOM_INT_IN_RANGE(iParam3, iParam2);
			}
		}
		else if (iLocal_47 > 0)
		{
			if (iLocal_47 > iLocal_48)
			{
				iLocal_47 = (iLocal_47 - 1);
				func_245(1, iLocal_47);
				if (iLocal_47 == iLocal_48)
				{
					iLocal_42 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_242(1, 40, 1, 1, 1);
		}
	}
}

void func_242(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x14E1F
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_244(0))
			{
				func_243(0);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz1", 0.5f, fLocal_50, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_50 < 1f)
			{
				fLocal_50 = (fLocal_50 + 0.01f);
			}
			else
			{
				fLocal_50 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_244(1))
			{
				func_243(1);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz2", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.02f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_244(2))
			{
				func_243(2);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscuzz3", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.028f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
	}
}

void func_243(int iParam0)//Position - 0x14F26
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&uLocal_53, iParam0);
	}
}

int func_244(int iParam0)//Position - 0x14F40
{
	if (MISC::IS_BIT_SET(uLocal_53, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_245(bool bParam0, int iParam1)//Position - 0x14F58
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		iLocal_45 = func_247(5);
		iLocal_44 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		while (iLocal_46 == iLocal_45)
		{
			iLocal_45 = func_247(5);
		}
		if (iLocal_45 == 0)
		{
			if (!func_244(3))
			{
				func_243(3);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_39)), (1f * GlobalFunc_4730(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 1)
		{
			if (!func_244(4))
			{
				func_243(4);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_39)), (1f * GlobalFunc_4730(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 2)
		{
			if (!func_244(5))
			{
				func_243(5);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_39)), (1f * GlobalFunc_4730(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 3)
		{
			if (!func_244(6))
			{
				func_243(6);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_39)), (1f * GlobalFunc_4730(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 4)
		{
			if (!func_244(7))
			{
				func_243(7);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * GlobalFunc_4730(bLocal_39)), (1f * GlobalFunc_4730(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}


int func_247(int iParam0)//Position - 0x15107
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_39 = true;
	}
	else
	{
		bLocal_39 = false;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, iParam0);
}

void func_248(bool bParam0, int iParam1)//Position - 0x15140
{
	if (!GlobalFunc_4500())
	{
		GlobalFunc_4500();
	}
	else if (bParam0)
	{
		if (iLocal_41)
		{
			if (!func_244(8))
			{
				func_243(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_41 = 0;
		}
		else
		{
			if (!func_244(8))
			{
				func_243(8);
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_41 = 1;
		}
	}
}

















void func_265(var uParam0, int iParam1, float fParam2)//Position - 0x15A5B
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
			Var3 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
			CAM::SET_CAM_COORD(uParam0, Var0);
			CAM::SET_CAM_ROT(uParam0, Var3, 2);
		}
	}
}

void func_266(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x15AA9
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, 0);
		ENTITY::SET_ENTITY_COLLISION(iParam1, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, 1);
		ENTITY::SET_ENTITY_PROOFS(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, 1);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		CAM::SET_CAM_COORD(uParam0, Var0);
		CAM::SET_CAM_ROT(uParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
	}
}

void func_267()//Position - 0x15B10
{
	if (iLocal_3217 != -1)
	{
		if (iLocal_3388 == 1)
		{
			if (iLocal_3380 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3217);
				iLocal_3390 = 0;
				iLocal_3380 = 1;
			}
		}
	}
	if (iLocal_3212 != -1)
	{
		if (iLocal_3384 == 1)
		{
			if (iLocal_3382 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3212);
				iLocal_3391 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3371 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3371 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3381 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3383 == 0)
			{
				AUDIO::RELEASE_SOUND_ID(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3383 = 1;
			}
		}
	}
}

void func_268()//Position - 0x15BCC
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[19]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[19]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[19]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[19], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[7]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[7]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[7]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[7], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[8]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[8]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[8]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[8], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[9]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[9]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[9]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[9], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[10]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[10]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[10]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[10], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[11]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[11]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[11]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[11], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[13]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[13]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[13]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[13], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[14]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[14]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[14]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[14], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[15]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[15]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[15]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[15], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[16]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[16]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[16]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[16], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[17]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[17]))
		{
			if (!VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_3120[17]))
			{
				VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[17], 1);
			}
		}
	}
}

void func_269()//Position - 0x15E38
{
	if (func_300())
	{
		fLocal_3323 = 0.5f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 40f)
		{
			fLocal_3323 = 0.85f;
		}
		else
		{
			fLocal_3323 = 0.9f;
		}
	}
	else
	{
		fLocal_3323 = 0.9f;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3257))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
			{
				if (iLocal_3358 == 0)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 10000f)
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3257, 1) < 100f || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
						{
							func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
					}
				}
				else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3257, 1) > 175f)
				{
					fLocal_3322 = 0.6f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
					func_270(iLocal_3257, fLocal_3322);
				}
				else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 10000f)
				{
					func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3323, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
					func_270(iLocal_3257, fLocal_3322);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 10000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 23000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
					{
						func_296(iLocal_3120[8], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3323, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
					else
					{
						func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3323, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 23000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 32000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0))
						{
							func_296(iLocal_3120[7], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[8]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
							{
								func_296(iLocal_3120[8], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3323, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
								func_270(iLocal_3257, fLocal_3322);
							}
							else
							{
								func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
								func_270(iLocal_3257, fLocal_3322);
							}
						}
						else
						{
							func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[8]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
						{
							func_296(iLocal_3120[8], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
					}
					else
					{
						func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 32000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 39000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[7]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0))
						{
							func_296(iLocal_3120[7], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3323, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3323, 1);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
					}
					else
					{
						func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3323, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 39000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 56000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
					{
						func_296(iLocal_3120[8], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
					else
					{
						func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3323, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 56000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 65000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[11], 0))
					{
						func_296(iLocal_3120[11], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3323, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
					else
					{
						func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3323, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 65000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 90000f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[13]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[13], 0))
						{
							func_296(iLocal_3120[13], PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3323, 0);
							VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
							func_270(iLocal_3257, fLocal_3322);
						}
					}
					else
					{
						func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3323, 0);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
						func_270(iLocal_3257, fLocal_3322);
					}
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 90000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 110000f)
				{
					func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3323, 1);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
					func_270(iLocal_3257, fLocal_3322);
				}
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 110000f)
				{
					func_296(iLocal_3257, PLAYER::PLAYER_PED_ID(), &fLocal_3322, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3323, 0);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3257, fLocal_3322);
					func_270(iLocal_3257, fLocal_3322);
				}
			}
		}
	}
}

void func_270(int iParam0, float fParam1)//Position - 0x166EE
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_105 = false;
	if (!bLocal_87)
	{
		if (bLocal_86)
		{
			GlobalFunc_2512();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				MISC::CLEAR_AREA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_87 = true;
		}
	}
	else if (!bLocal_86)
	{
		GlobalFunc_2214();
		bLocal_87 = false;
	}
	if (bLocal_86)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_80)
	{
		if (iLocal_75)
		{
			fLocal_1277 = 0f;
		}
		else
		{
			fLocal_1277 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (GlobalFunc_5657(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_85 = 1;
					}
					else
					{
						iLocal_85 = 0;
					}
				}
				fLocal_1274 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_1275) * fLocal_1277));
				if (bLocal_84)
				{
					func_293(iParam0, fLocal_1274);
					func_292(iParam0, fLocal_1284);
					if (fLocal_1279 > 1000f)
					{
						if (iLocal_1961 == 0)
						{
							func_291(iParam0, fLocal_1284);
						}
						fVar0 = ((fLocal_1274 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_1961) * 2000f));
						func_290(iParam0, fVar0, fLocal_1278);
						iLocal_1961++;
						if (iLocal_1961 > 2)
						{
							fLocal_1279 = 0f;
						}
					}
					else
					{
						iLocal_1961 = 0;
						fLocal_1279 = (fLocal_1279 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_1274 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_92)
		{
			if (!iLocal_74)
			{
				func_287(iParam0, ((fParam1 * fLocal_1275) * fLocal_1277), 0);
				if (!iLocal_95)
				{
				}
				iLocal_95 = 0;
			}
			if (bLocal_77)
			{
				func_286(iParam0);
			}
			if (!iLocal_74)
			{
				func_273(iParam0, ((fParam1 * fLocal_1275) * fLocal_1277), 0);
			}
		}
		if (iLocal_82)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_3163 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Local_2640 = { ENTITY::GET_ENTITY_COORDS(iLocal_3163, 1) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_3163, &fLocal_988, &fLocal_989, &fLocal_990, &fLocal_991);
				}
			}
			iLocal_82 = 0;
		}
		if (iLocal_81)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3163))
			{
				GlobalFunc_3006(iLocal_3164);
				iLocal_3164 = iLocal_3163;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3164, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_3164, Local_2640, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_3164, fLocal_988, fLocal_989, fLocal_990, fLocal_991);
			}
			fLocal_1273 = fLocal_1276;
			iLocal_74 = 1;
			iLocal_81 = 0;
		}
		if (iLocal_74)
		{
			while (!func_271(&iParam0, fLocal_1273))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_75 = 1;
		}
		if (iLocal_88)
		{
			iLocal_88 = 0;
		}
	}
}

int func_271(int iParam0, float fParam1)//Position - 0x16989
{
	if (!iLocal_89)
	{
		iLocal_74 = 1;
		func_165();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_1948 == -1)
			{
				while (!func_272(iParam0, iLocal_1948, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_79)
				{
					iLocal_75 = 1;
					fLocal_1277 = 0f;
					iLocal_1949 = 0;
					iLocal_1951 = 0;
					iLocal_1950 = 0;
					iLocal_1945 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1952 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
				}
			}
		}
		iLocal_89 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_1275) * fLocal_1277));
				func_272(iParam0, iLocal_1948, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1274 = fParam1;
		iLocal_1955 = 0;
		iLocal_1958 = 0;
		fLocal_1289 = 0f;
		fLocal_1288 = 0f;
		func_273(*iParam0, ((1f * fLocal_1275) * fLocal_1277), 1);
		func_287(*iParam0, ((1f * fLocal_1275) * fLocal_1277), 1);
		func_286(*iParam0);
		if ((iLocal_1952 == 0 && iLocal_1953 == 0) && iLocal_1954 == 0)
		{
			iLocal_75 = 0;
			iLocal_74 = 0;
			iLocal_89 = 0;
			return 1;
		}
	}
	return 0;
}

int func_272(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x16ABB
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2667);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_2667))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2667, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1956 && iParam1 != iLocal_1957)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2667, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2667, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2667, 1);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2667, 1);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_2667))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_2667);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_2667, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1956 && iParam1 != iLocal_1957)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2667, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_2667, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2667, 1);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_2667, 1);
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

void func_273(int iParam0, float fParam1, bool bParam2)//Position - 0x16CA1
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
		iVar0 = iLocal_1951;
		while (iVar0 < 35)
		{
			if (iLocal_1857[iVar0] != 99)
			{
				if (iLocal_1857[iVar0] == 0)
				{
					if (iLocal_1821[iVar0] > 0)
					{
						if (!iLocal_74)
						{
							if (fLocal_1274 > (fLocal_1136[iVar0] - (7000f * fParam1)))
							{
								if (GlobalFunc_2222(iLocal_2876[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1893[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2876[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_1893[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_1893[iVar0]), 1);
								iLocal_1857[iVar0]++;
								iLocal_1953++;
							}
						}
						else
						{
							fVar12 = (fLocal_1274 - fLocal_1136[iVar0]);
							fVar12 = (fVar12 * fLocal_1172[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_284(iLocal_1821[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2876[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1893[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2876[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1893[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1893[iVar0]), 1);
									iLocal_1857[iVar0]++;
									iLocal_1953++;
								}
								else
								{
									iLocal_1857[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1857[iVar0] = 99;
					}
				}
				else if (iLocal_1857[iVar0] == 1)
				{
					bVar14 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667);
					if (MISC::IS_BIT_SET(iLocal_1893[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
					}
					else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_1893[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1893[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_177());
						bVar14 = STREAMING::HAS_MODEL_LOADED(func_177());
					}
					if (bVar14)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3120[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2876[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2876[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1821[iVar0], &cLocal_2667))
							{
								if (fLocal_1274 >= (fLocal_1136[iVar0] - (fLocal_1287 * fParam1)))
								{
									if ((iLocal_88 || bParam2) || (!bLocal_105 && !func_283(Local_2534[iVar0 /*3*/], Var9, 5f, fLocal_1285)))
									{
										if (bLocal_84)
										{
											func_282(Local_2534[iVar0 /*3*/], Var9, fLocal_1278);
										}
										iLocal_3120[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2876[iVar0], Local_2534[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2876[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_3120[iVar0], 0);
										}
										if (uLocal_97 && !MISC::IS_BIT_SET(iLocal_1893[iVar0], 0))
										{
											func_281(iLocal_3120[iVar0]);
										}
										if (MISC::IS_BIT_SET(iLocal_1893[iVar0], 3))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3120[iVar0], 1);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3120[iVar0], Local_2534[iVar0 /*3*/], 0, 0, 1);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_3120[iVar0], fLocal_992[iVar0], fLocal_1028[iVar0], fLocal_1064[iVar0], fLocal_1100[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2876[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2876[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3120[iVar0]);
										}
										if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3120[iVar0], 1, 1);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3120[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_3120[iVar0], 1);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2876[iVar0]);
										iLocal_1953 = (iLocal_1953 - 1);
										iLocal_1857[iVar0]++;
										bLocal_105 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_3120[iVar0], Local_2534[iVar0 /*3*/], 0, 0, 1);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_3120[iVar0], fLocal_992[iVar0], fLocal_1028[iVar0], fLocal_1064[iVar0], fLocal_1100[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2876[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2876[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3120[iVar0]);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3120[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2876[iVar0]);
							iLocal_1953 = (iLocal_1953 - 1);
							iLocal_1857[iVar0]++;
						}
					}
				}
				else if (iLocal_1857[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667);
					if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 1))
					{
						bVar14 = false;
						if (MISC::IS_BIT_SET(iLocal_1893[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(GlobalFunc_2211());
							bVar14 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
							iVar19 = 2;
						}
						else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_1893[iVar0], 2) && uVar16) || (MISC::IS_BIT_SET(iLocal_1893[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_177());
							bVar14 = STREAMING::HAS_MODEL_LOADED(func_177());
							iVar19 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_3120[iVar0]))
						{
							if (!bLocal_105 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3120[iVar0], -1))
							{
								if (bVar14)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_3120[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_88)
									{
										func_279(&(iLocal_3120[iVar0]), iVar19, 1);
										MISC::SET_BIT(&(iLocal_1893[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
					{
						if (fLocal_1274 >= fLocal_1136[iVar0])
						{
							if (14 > iLocal_1946)
							{
								fVar12 = (fLocal_1274 - fLocal_1136[iVar0]);
								fVar12 = (fVar12 * fLocal_1172[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1821[iVar0], &cLocal_2667))
								{
									if (fVar12 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3120[iVar0], 1) };
										Var6 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1821[iVar0], fVar12, &cLocal_2667) };
										if (((!func_283(Var3, Var9, 5f, fLocal_1285) && func_283(Var6, Var9, 5f, fLocal_1285)) && !iLocal_88) && !bParam2)
										{
											if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 1))
											{
												func_279(&(iLocal_3120[iVar0]), iVar19, 1);
											}
											iLocal_1946++;
											iLocal_1857[iVar0]++;
										}
										else if (((!bLocal_105 || MISC::IS_BIT_SET(iLocal_1893[iVar0], 1)) || iLocal_88) || bParam2)
										{
											if (func_272(&(iLocal_3120[iVar0]), iLocal_1821[iVar0], fVar12, 1, 0, 0, bLocal_103, bLocal_102))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_3120[iVar0], (fParam1 * fLocal_1172[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
												{
													if (MISC::IS_BIT_SET(iLocal_1893[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3120[iVar0], 1, 1);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_3120[iVar0], 1);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_3120[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2876[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_3120[iVar0], 1);
														}
													}
												}
												if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 1))
												{
													func_279(&(iLocal_3120[iVar0]), iVar19, 1);
												}
												iLocal_1946++;
												iLocal_1857[iVar0]++;
											}
										}
									}
									else
									{
										if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 1))
										{
											func_279(&(iLocal_3120[iVar0]), iVar19, 1);
										}
										iLocal_1946++;
										iLocal_1857[iVar0]++;
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 1))
								{
									func_279(&(iLocal_3120[iVar0]), iVar19, 1);
								}
								iLocal_1946++;
								iLocal_1857[iVar0]++;
							}
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(iLocal_1893[iVar0], 1))
						{
							func_279(&(iLocal_3120[iVar0]), iVar19, 1);
						}
						iLocal_1946++;
						iLocal_1857[iVar0]++;
					}
				}
				else if (iLocal_1857[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_78 && !iLocal_75) && !bLocal_94) && (((!bLocal_103 && !bLocal_102) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3120[iVar0])) || func_278(iLocal_3120[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar14 = false;
											if (bLocal_96)
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
												else if (MISC::ABSF((fVar13 - ENTITY::GET_ENTITY_SPEED(iLocal_3120[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!GlobalFunc_5655(iLocal_3120[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (GlobalFunc_5654(iVar2, iLocal_3120[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_274(iLocal_3120[iVar0]);
												iLocal_1857[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_3120[iVar0], (fParam1 * fLocal_1172[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[iVar0]);
							}
						}
						else
						{
							iLocal_1857[iVar0]++;
						}
					}
					else
					{
						iLocal_1857[iVar0]++;
					}
				}
				else if (iLocal_1857[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[iVar0]))
						{
							iLocal_1857[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3120[iVar0], (fParam1 * fLocal_1172[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1821[iVar0], &cLocal_2667))
							{
								if (fLocal_1274 > (fLocal_1136[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1857[iVar0]++;
					}
				}
				else if (iLocal_1857[iVar0] == 5)
				{
					if (!iLocal_3120[iVar0] == iLocal_3165)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iVar0], 0))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3120[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar20 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = ENTITY::GET_ENTITY_SPEED(iLocal_3120[iVar0]);
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
						if (!bLocal_86 && !bLocal_99)
						{
							if (iLocal_1821[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1821[iVar0], &cLocal_2667);
							}
						}
						if (!bLocal_76)
						{
							if (!bLocal_104)
							{
								GlobalFunc_3006(iLocal_3120[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_3120[iVar0]));
						}
					}
					iLocal_1946 = (iLocal_1946 - 1);
					iLocal_1857[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1951 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_169();
	}
}

void func_274(int iParam0)//Position - 0x1789F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_171(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}




int func_278(var uParam0)//Position - 0x17A02
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_100)
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

int func_279(var uParam0, int iParam1, bool bParam2)//Position - 0x17A5F
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, GlobalFunc_2211(), -1, 0, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_2683);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_177(), -1, 0, 0);
				if (bLocal_106)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_177());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, 1);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, 0);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, 0);
			}
			if (bLocal_107)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
			GlobalFunc_2221(iVar0);
			bLocal_105 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}


void func_281(int iParam0)//Position - 0x17B6B
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_2913 >= -1 && iLocal_2914 >= -1)
	{
		while (iVar0 == iLocal_2913 || iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	else if (iLocal_2913 >= -1)
	{
		if (iVar0 == iLocal_2913)
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

void func_282(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x17CE4
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_87)
	{
		if (!func_283(Param0, Param3, fParam6, 200f))
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

int func_283(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)//Position - 0x17D54
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_87)
		{
			if (!iLocal_74)
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

float func_284(int iParam0)//Position - 0x17D9B
{
	var uVar0;
	
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_2667);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_2667))
	{
		SYSTEM::WAIT(0);
	}
	uVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_2667);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_2667);
	return uVar0;
}


void func_286(int iParam0)//Position - 0x17E51
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
		iVar0 = iLocal_1950;
		while (iVar0 < 15)
		{
			switch (iLocal_1929[iVar0])
			{
				case 0:
					if (!iLocal_2860[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_2488[iVar0 /*3*/], fLocal_1272, fLocal_1272, fLocal_1272, 0, 1, 0))
						{
							iLocal_1952++;
							iLocal_1929[iVar0]++;
						}
					}
					else
					{
						iLocal_1929[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1947)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3104[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_2860[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_2860[iVar0]))
							{
								if ((iLocal_74 || iLocal_88) || (!bLocal_105 && !func_283(Local_2488[iVar0 /*3*/], Var1, 5f, fLocal_1285)))
								{
									if (bLocal_84)
									{
										func_282(Local_2488[iVar0 /*3*/], Var1, fLocal_1278);
									}
									iLocal_3104[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2860[iVar0], Local_2488[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2860[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_3104[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_3104[iVar0], fLocal_1208[iVar0], fLocal_1224[iVar0], fLocal_1240[iVar0], fLocal_1256[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2860[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_3104[iVar0], GlobalFunc_2212()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_3104[iVar0], 1);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2860[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_3104[iVar0], 1);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_3104[iVar0], GlobalFunc_2213()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_3104[iVar0], 0, 0);
									}
									ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3104[iVar0], 1);
									iLocal_1952 = (iLocal_1952 - 1);
									iLocal_1947++;
									iLocal_1929[iVar0]++;
									bLocal_105 = true;
								}
							}
						}
						else
						{
							iLocal_1952 = (iLocal_1952 - 1);
							iLocal_1947++;
							iLocal_1929[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3104[iVar0], 0))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_3104[iVar0], 1) };
						}
						if (fLocal_1286 == 0f || SYSTEM::VDIST2(Var1, Var4) < (fLocal_1286 * fLocal_1286))
						{
							if (!GlobalFunc_5654(iLocal_3104[iVar0], iParam0, 0))
							{
								if (!bLocal_76)
								{
									GlobalFunc_3006(iLocal_3104[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_3104[iVar0]));
								}
								iLocal_1947 = (iLocal_1947 - 1);
								iLocal_1929[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1929[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1950 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_172();
	}
}

void func_287(int iParam0, float fParam1, int iParam2)//Position - 0x18149
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
			fLocal_1274 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1949;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1469[iVar0] != 99)
			{
				if (iLocal_1469[iVar0] == 0)
				{
					if (iLocal_1293[iVar0] > 0 && iLocal_2684[iVar0] != 0)
					{
						if (!iLocal_74)
						{
							if (fLocal_1274 < (fLocal_812[iVar0] + 20000f))
							{
								if (fLocal_1274 >= (fLocal_812[iVar0] - (7000f * fParam1)))
								{
									if (GlobalFunc_2222(iLocal_2684[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1645[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2684[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1645[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1645[iVar0]), 1);
									iLocal_1954++;
									iLocal_1469[iVar0]++;
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
								func_289(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1274 - fLocal_812[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_284(iLocal_1293[iVar0]))
								{
									if (GlobalFunc_2222(iLocal_2684[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1645[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2684[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_1645[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_1645[iVar0]), 1);
									iLocal_1954++;
									iLocal_1469[iVar0]++;
								}
								else
								{
									func_289(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_289(iVar0, 1090519040);
					}
				}
				else if (iLocal_1469[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667);
					bVar17 = false;
					if (MISC::IS_BIT_SET(iLocal_1645[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(GlobalFunc_2211());
						if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_1645[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1645[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_177());
						bVar17 = STREAMING::HAS_MODEL_LOADED(func_177());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2915[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_2684[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_2684[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1293[iVar0], &cLocal_2667)) && bVar17)
						{
							if (fLocal_1274 >= (fLocal_812[iVar0] - (fLocal_1287 * fParam1)))
							{
								if ((iLocal_88 || iParam2) || (!bLocal_105 && !func_283(Local_1962[iVar0 /*3*/], Var12, 5f, fLocal_1285)))
								{
									if (bLocal_84)
									{
										func_282(Local_1962[iVar0 /*3*/], Var12, fLocal_1278);
									}
									iLocal_2915[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_2684[iVar0], Local_1962[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2684[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_2915[iVar0], 0);
									}
									if (uLocal_97 && !MISC::IS_BIT_SET(iLocal_1645[iVar0], 0))
									{
										func_281(iLocal_2915[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2915[iVar0], Local_1962[iVar0 /*3*/], 0, 0, 1);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_2915[iVar0], fLocal_108[iVar0], fLocal_284[iVar0], fLocal_460[iVar0], fLocal_636[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_2684[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_2684[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2915[iVar0]);
									}
									if (MISC::IS_BIT_SET(iLocal_1645[iVar0], 3))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_2915[iVar0], 1);
									}
									if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2915[iVar0], 1, 1);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2915[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2915[iVar0], 1);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_2915[iVar0], 1);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2684[iVar0]);
									iLocal_1954 = (iLocal_1954 - 1);
									iLocal_1469[iVar0]++;
									bLocal_105 = true;
								}
								else if (fLocal_1274 > fLocal_812[iVar0])
								{
									iLocal_1954 = (iLocal_1954 - 1);
									func_289(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1469[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1960 || iLocal_1960 == 0)) || iLocal_88) || iParam2)
					{
						if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
						{
							if (MISC::IS_BIT_SET(iLocal_1645[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(GlobalFunc_2211());
								bVar17 = STREAMING::HAS_MODEL_LOADED(GlobalFunc_2211());
								iVar21 = 2;
							}
							else if (!bLocal_101 && ((!MISC::IS_BIT_SET(iLocal_1645[iVar0], 2) && uVar19) || (MISC::IS_BIT_SET(iLocal_1645[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_177());
								bVar17 = STREAMING::HAS_MODEL_LOADED(func_177());
								iVar21 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_2915[iVar0]))
							{
								if (!bLocal_105 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2915[iVar0], -1))
								{
									if (bVar17)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_2915[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_88)
										{
											func_279(&(iLocal_2915[iVar0]), iVar21, 0);
											MISC::SET_BIT(&(iLocal_1645[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2915[iVar0], 0))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667);
							if (fLocal_1274 >= fLocal_812[iVar0])
							{
								if (12 > iLocal_1945)
								{
									fVar15 = (fLocal_1274 - fLocal_812[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1293[iVar0], &cLocal_2667))
									{
										if (fVar15 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_2915[iVar0], 1) };
											Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_1293[iVar0], fVar15, &cLocal_2667) };
											if (!func_283(Var6, Var12, 5f, fLocal_1285) && func_283(Var9, Var12, 5f, fLocal_1285))
											{
												if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
												{
													func_279(&(iLocal_2915[iVar0]), iVar21, 0);
												}
												func_289(iVar0, 1090519040);
											}
											else if (((!bLocal_105 || MISC::IS_BIT_SET(iLocal_1645[iVar0], 1)) || iLocal_88) || iParam2)
											{
												if (func_272(&(iLocal_2915[iVar0]), iLocal_1293[iVar0], fVar15, 1, 0, 0, 1, bLocal_102))
												{
													if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
													{
														func_279(&(iLocal_2915[iVar0]), iVar21, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_2915[iVar0], 1, 0);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_2915[iVar0], fParam1);
													iLocal_1945++;
													iLocal_1469[iVar0]++;
												}
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
											{
												func_279(&(iLocal_2915[iVar0]), iVar21, 0);
											}
											func_289(iVar0, 1090519040);
										}
									}
									else if (fVar15 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667))
									{
										if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
										{
											func_279(&(iLocal_2915[iVar0]), iVar21, 0);
										}
										func_289(iVar0, 1090519040);
									}
								}
								else
								{
									if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
									{
										func_279(&(iLocal_2915[iVar0]), iVar21, 0);
									}
									func_289(iVar0, 1090519040);
								}
							}
							else if (iLocal_85 && !bLocal_93)
							{
								if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
								{
									func_279(&(iLocal_2915[iVar0]), iVar21, 0);
								}
								func_289(iVar0, 1090519040);
							}
						}
						else
						{
							if (!MISC::IS_BIT_SET(iLocal_1645[iVar0], 1))
							{
								func_279(&(iLocal_2915[iVar0]), iVar21, 0);
							}
							func_289(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1960 = iVar0;
					}
				}
				else if (iLocal_1469[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2915[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2915[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2915[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_83)
									{
										if ((!bLocal_78 && !iLocal_75) && func_278(iLocal_2915[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1959 || iLocal_1959 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5))
												{
													bVar17 = false;
													if (!GlobalFunc_5656(iLocal_2915[iVar0], iVar5) || GlobalFunc_5654(iVar5, iLocal_2915[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1959 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_98 && !MISC::IS_BIT_SET(iLocal_1645[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1959 || iLocal_1959 == 0))
										{
											Var25 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_2915[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (MISC::ABSF(Var25.f_1) > MISC::ABSF(Var25.x))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1959 = iVar0;
										}
									}
									if (bVar24)
									{
										func_274(iLocal_2915[iVar0]);
										iLocal_1469[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_2915[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2915[iVar0]);
							}
						}
						else
						{
							iLocal_1469[iVar0]++;
						}
					}
					else
					{
						iLocal_1469[iVar0]++;
					}
				}
				else if (iLocal_1469[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2915[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2915[iVar0]))
						{
							iLocal_1469[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2915[iVar0], -1);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_2915[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2915[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_1293[iVar0], &cLocal_2667))
							{
								if (fLocal_1274 > (fLocal_812[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_1293[iVar0], &cLocal_2667)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2915[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_2915[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1469[iVar0]++;
					}
				}
				else if (iLocal_1469[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2915[iVar0]))
					{
						fVar16 = ENTITY::GET_ENTITY_SPEED(iLocal_2915[iVar0]);
					}
					iLocal_1945 = (iLocal_1945 - 1);
					func_289(iVar0, fVar16);
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
			iLocal_1949 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1959 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1960 = 0;
		}
	}
	else
	{
		func_173();
	}
}


void func_289(int iParam0, float fParam1)//Position - 0x18D14
{
	int iVar0;
	
	if (!iLocal_2684[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2684[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2915[iParam0]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_2915[iParam0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2915[iParam0], 0);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_2915[iParam0], -1);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_2915[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, 1);
			if (bLocal_107)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_76)
	{
		if (!bLocal_104)
		{
			GlobalFunc_2221(iVar0);
			GlobalFunc_3006(iLocal_2915[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2915[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_2915[iParam0]));
		}
	}
	if (!bLocal_86 && !bLocal_99)
	{
		if (iLocal_1293[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_1293[iParam0], &cLocal_2667);
		}
	}
	iLocal_1469[iParam0] = 99;
}

void func_290(int iParam0, float fParam1, float fParam2)//Position - 0x18E6D
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
			func_282(Var1, Var10, fVar13);
		}
	}
}

void func_291(int iParam0, float fParam1)//Position - 0x18EF0
{
	if (!bLocal_87)
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

void func_292(int iParam0, float fParam1)//Position - 0x18F3D
{
	if (!bLocal_87)
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

void func_293(int iParam0, float fParam1)//Position - 0x18F8A
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_1288 + 2000f);
		fVar2 = (fLocal_1289 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0))
			{
				if (iLocal_1955 == 0)
				{
					Local_2655 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, fLocal_1288) };
					iLocal_1955++;
				}
				else if (iLocal_1955 == 1)
				{
					Local_2658 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_1955++;
				}
				else if (!bLocal_105)
				{
					if (Local_2655.x > Local_2658.x)
					{
						fVar3 = Local_2655.x;
						Local_2655.x = Local_2658.x;
						Local_2658.x = fVar3;
					}
					if (Local_2655.f_1 > Local_2658.f_1)
					{
						fVar3 = Local_2655.f_1;
						Local_2655.f_1 = Local_2658.f_1;
						Local_2658.f_1 = fVar3;
					}
					if (Local_2655.f_2 > Local_2658.f_2)
					{
						fVar3 = Local_2655.f_2;
						Local_2655.f_2 = Local_2658.f_2;
						Local_2658.f_2 = fVar3;
					}
					Local_2655 = { Local_2655 - Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
					Local_2658 = { Local_2658 + Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
					PATHFIND::SET_ROADS_IN_AREA(Local_2655, Local_2658, 0, 0);
					fLocal_1288 = fVar1;
					iLocal_1955 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_1958 == 0)
			{
				Local_2661 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_1289) };
				iLocal_1958++;
			}
			else if (iLocal_1958 == 1)
			{
				Local_2664 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_1958++;
			}
			else if (!bLocal_105 && !bVar4)
			{
				if (Local_2661.x > Local_2664.x)
				{
					fVar3 = Local_2661.x;
					Local_2661.x = Local_2664.x;
					Local_2664.x = fVar3;
				}
				if (Local_2661.f_1 > Local_2664.f_1)
				{
					fVar3 = Local_2661.f_1;
					Local_2661.f_1 = Local_2664.f_1;
					Local_2664.f_1 = fVar3;
				}
				if (Local_2661.f_2 > Local_2664.f_2)
				{
					fVar3 = Local_2661.f_2;
					Local_2661.f_2 = Local_2664.f_2;
					Local_2664.f_2 = fVar3;
				}
				Local_2661 = { Local_2661 - Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
				Local_2664 = { Local_2664 + Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_2661, Local_2664, 1);
				fLocal_1289 = fVar2;
				iLocal_1958 = 0;
			}
		}
	}
}



void func_296(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x192C2
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
	
	if (iLocal_90 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_90 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1283;
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
				fVar1 = GlobalFunc_3022(iParam0, iParam1);
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
			iLocal_91 = 1;
		}
		else if (iLocal_91)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_91 = 0;
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
		fVar8 = ((fLocal_1290 * fParam3) * fVar1);
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
		fVar8 = ((fLocal_1291 * fParam3) * fVar1);
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
							fVar1 = (fVar1 * (fLocal_1281 - fLocal_1282));
							fVar1 = (fVar1 + fLocal_1282);
							fLocal_1280 = fVar1;
							if (fLocal_1280 < fLocal_1282)
							{
								fLocal_1280 = fLocal_1282;
							}
							if (fLocal_1280 > fLocal_1281)
							{
								fLocal_1280 = fLocal_1281;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1280);
						}
					}
				}
			}
		}
	}
}




int func_300()//Position - 0x196E4
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
			{
				iLocal_3402 = 1;
			}
			else
			{
				iLocal_3402 = 0;
			}
		}
		else
		{
			iLocal_3402 = 1;
		}
	}
	else
	{
		iLocal_3402 = 1;
	}
	iLocal_3189 = 0;
	while (iLocal_3189 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[iLocal_3189]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[iLocal_3189], 0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[iLocal_3189]))
				{
					iLocal_3403[iLocal_3189] = 1;
				}
				else
				{
					iLocal_3403[iLocal_3189] = 0;
				}
			}
			else
			{
				iLocal_3403[iLocal_3189] = 1;
			}
		}
		else
		{
			iLocal_3403[iLocal_3189] = 1;
		}
		iLocal_3189++;
	}
	if (((((((((((((((((((((((((iLocal_3402 == 1 && iLocal_3403[0] == 1) && iLocal_3403[1] == 1) && iLocal_3403[2] == 1) && iLocal_3403[3] == 1) && iLocal_3403[4] == 1) && iLocal_3403[5] == 1) && iLocal_3403[6] == 1) && iLocal_3403[7] == 1) && iLocal_3403[8] == 1) && iLocal_3403[9] == 1) && iLocal_3403[10] == 1) && iLocal_3403[11] == 1) && iLocal_3403[12] == 1) && iLocal_3403[13] == 1) && iLocal_3403[14] == 1) && iLocal_3403[15] == 1) && iLocal_3403[16] == 1) && iLocal_3403[17] == 1) && iLocal_3403[18] == 1) && iLocal_3403[19] == 1) && iLocal_3403[20] == 1) && iLocal_3403[21] == 1) && iLocal_3403[22] == 1) && iLocal_3403[23] == 1) && iLocal_3403[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_301()//Position - 0x198FE
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[4]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[4], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[4]))
			{
				Local_3302 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3120[4], 1) };
				if (Local_3302.x < (Var3.x - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[4]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[4]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3120[4]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[3]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[3], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[3]))
			{
				Local_3302 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_3120[3], 1) };
				if (Local_3302.x < (Var0.x - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[3]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[3]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3120[3]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[21]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[21], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[21]))
			{
				Local_3302 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_3120[21], 1) };
				if (Local_3302.x < (Var6.x - 10f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[21]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[21]);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3120[21]));
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[0], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 50000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[0]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3120[0]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3120[0]);
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3120[0]));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3263, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 90000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3263))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[0], 0);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[1], 0);
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3754[2], 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[0]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[0]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[1]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[1]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[2]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[2]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[3]))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[3]));
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3263);
							STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}


void func_303()//Position - 0x19D26
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[2], 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 50530f)
						{
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3120[2]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3120[2], 1, 1);
							}
						}
						else if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3120[2]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3120[2], 0, 0);
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[5]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[5], 0))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3120[5]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3120[5], 1, 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3259[0], 0))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3259[0]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3259[0], 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3259[0], -1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3253[0]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_3253[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3259[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3259[1], 0))
		{
			if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_3259[1]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3259[1], 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_3259[1], -1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3253[1]))
				{
					STREAMING::REQUEST_MODEL(joaat("s_m_m_gentransport"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_gentransport")))
					{
						iLocal_3253[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3259[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_304()//Position - 0x19EF5
{
	if (iLocal_3180 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Cop_Cars", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Plane_Explosion", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\Trv_4_747_Tanker_Explosion", 0);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TV_Monitors", 0);
		if (iLocal_3391 == 0)
		{
			iLocal_3212 = AUDIO::GET_SOUND_ID();
			iLocal_3391 = 1;
		}
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = AUDIO::GET_SOUND_ID();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = AUDIO::GET_SOUND_ID();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = AUDIO::GET_SOUND_ID();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = AUDIO::GET_SOUND_ID();
			iLocal_3395 = 1;
		}
		if (iLocal_3390 == 0)
		{
			iLocal_3217 = AUDIO::GET_SOUND_ID();
			iLocal_3390 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3218 = AUDIO::GET_SOUND_ID();
			iLocal_3396 = 1;
		}
		if (iLocal_3344 == 1)
		{
			func_104();
			iLocal_3344 = 0;
		}
		if (!CAM::DOES_CAM_EXIST(uLocal_3288))
		{
			uLocal_3288 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			CAM::SET_CAM_FOV(uLocal_3288, 40f);
		}
		iLocal_3342 = 0;
		iLocal_3336 = 0;
		iLocal_3348 = 0;
		iLocal_3332 = 0;
		iLocal_3327 = 0;
		iLocal_3333 = 0;
		iLocal_3326 = 0;
		iLocal_3362 = 0;
		iLocal_3364[0] = 0;
		iLocal_3368[0] = 0;
		iLocal_3364[1] = 0;
		iLocal_3368[1] = 0;
		iLocal_3364[2] = 0;
		iLocal_3371 = 0;
		iLocal_3372 = 0;
		iLocal_3330 = 0;
		iLocal_3331 = 0;
		iLocal_3329 = 0;
		iLocal_3376 = 0;
		iLocal_3379 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3383 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3397 = 0;
		iLocal_3398 = 0;
		iLocal_3400 = 0;
		iLocal_3401 = 0;
		iLocal_3433 = 0;
		iLocal_3434 = 0;
		iLocal_3550 = 0;
		iLocal_3350 = 1;
		iLocal_3351 = 1;
		iLocal_3359 = 1;
		iLocal_3439 = 0;
		iLocal_3440 = 0;
		iLocal_3465 = 0;
		iLocal_3467 = 0;
		iLocal_3474 = 0;
		iLocal_3475 = 0;
		iLocal_3477 = 0;
		iLocal_3479[0] = 0;
		iLocal_3479[1] = 0;
		iLocal_3482[0] = 0;
		iLocal_3482[1] = 0;
		iLocal_3485 = 0;
		iLocal_3486 = 0;
		iLocal_3488 = 0;
		iLocal_3507 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3539 = 0;
		iLocal_3540 = 0;
		iLocal_3551 = 0;
		iLocal_3184 = 0;
		iLocal_3197 = 0;
		iLocal_3188 = 0;
		while (iLocal_3188 <= 2)
		{
			iLocal_3542[iLocal_3188] = 0;
			iLocal_3546[iLocal_3188] = 0;
			iLocal_3188++;
		}
		iLocal_3188 = 0;
		while (iLocal_3188 <= 2)
		{
			iLocal_3570[iLocal_3188] = 0;
			iLocal_3188++;
		}
		iLocal_3188 = 0;
		while (iLocal_3188 <= 6)
		{
			iLocal_3489[iLocal_3188] = 0;
			iLocal_3497[iLocal_3188] = 0;
			iLocal_3188++;
		}
		STREAMING::REQUEST_PTFX_ASSET();
		iLocal_88 = 1;
		bLocal_94 = true;
		GlobalFunc_4500();
		uLocal_3183 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
		MISC::CLEAR_AREA(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		PED::SET_PED_NON_CREATION_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		PATHFIND::SET_PED_PATHS_IN_AREA(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		GlobalFunc_2427(2, 1);
		func_306("BB_Chase", 45, 0, 1);
		PLAYER::SET_MAX_WANTED_LEVEL(3);
		GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(iLocal_3258, -1, 1);
		}
		iLocal_3181 = 0;
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		func_305();
		iLocal_3180 = 2;
	}
	if (iLocal_3180 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3270))
		{
			iLocal_3270 = VEHICLE::CREATE_VEHICLE(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1);
		}
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase"))
		{
			SYSTEM::WAIT(0);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3258, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3258, 1, 1);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3258, 30f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3257, 45, "BB_Chase", 1);
				SYSTEM::SETTIMERB(0);
				func_232();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3258, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3258);
					}
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_3180 = 0;
				iLocal_3179 = 4;
			}
		}
	}
}

void func_305()//Position - 0x1A32E
{
	Local_2488[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_1208[0] = -0.0003f;
	fLocal_1224[0] = -0.0085f;
	fLocal_1240[0] = 0.9998f;
	fLocal_1256[0] = 0.0158f;
	iLocal_2860[0] = joaat("blista");
	Local_1962[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_108[4] = 0.0004f;
	fLocal_284[4] = -0.0003f;
	fLocal_460[4] = -0.2526f;
	fLocal_636[4] = 0.9676f;
	iLocal_1293[4] = 50;
	fLocal_812[4] = 20310f;
	iLocal_2684[4] = joaat("manana");
	Local_2488[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_1208[1] = 0.0032f;
	fLocal_1224[1] = -0.0003f;
	fLocal_1240[1] = -0.0255f;
	fLocal_1256[1] = 0.9997f;
	iLocal_2860[1] = joaat("bison2");
	Local_2534[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_992[0] = 0.0018f;
	fLocal_1028[0] = 0.0123f;
	fLocal_1064[0] = 0.9644f;
	fLocal_1100[0] = 0.2642f;
	iLocal_1821[0] = 9;
	fLocal_1136[0] = 22357f;
	fLocal_1172[0] = 1f;
	iLocal_2876[0] = joaat("buzzard");
	Local_2534[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_992[1] = -0.0012f;
	fLocal_1028[1] = 0.0013f;
	fLocal_1064[1] = 0.8439f;
	fLocal_1100[1] = -0.5365f;
	iLocal_1821[1] = 10;
	fLocal_1136[1] = 27135f;
	fLocal_1172[1] = 1f;
	iLocal_2876[1] = joaat("packer");
	Local_2534[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_992[2] = 0.0057f;
	fLocal_1028[2] = -0.0014f;
	fLocal_1064[2] = -0.2451f;
	fLocal_1100[2] = 0.9695f;
	iLocal_1821[2] = 11;
	fLocal_1136[2] = 35135f;
	fLocal_1172[2] = 1f;
	iLocal_2876[2] = joaat("jet");
	Local_2534[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_992[3] = 0.0065f;
	fLocal_1028[3] = 0.0191f;
	fLocal_1064[3] = -0.2629f;
	fLocal_1100[3] = 0.9646f;
	iLocal_1821[3] = 3;
	fLocal_1136[3] = 6764f;
	fLocal_1172[3] = 1f;
	iLocal_2876[3] = joaat("bus");
	Local_2534[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_992[4] = 0.0043f;
	fLocal_1028[4] = 0.0331f;
	fLocal_1064[4] = -0.3125f;
	fLocal_1100[4] = 0.9493f;
	iLocal_1821[4] = 4;
	fLocal_1136[4] = 2102f;
	fLocal_1172[4] = 1f;
	iLocal_2876[4] = joaat("bison");
	Local_2534[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_992[5] = 0.0056f;
	fLocal_1028[5] = 0.0029f;
	fLocal_1064[5] = 0.4915f;
	fLocal_1100[5] = 0.8708f;
	iLocal_1821[5] = 21;
	fLocal_1136[5] = 92500f;
	fLocal_1172[5] = 1f;
	iLocal_2876[5] = joaat("jet");
	Local_2534[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_992[7] = 0.0072f;
	fLocal_1028[7] = 0.0176f;
	fLocal_1064[7] = 0.9739f;
	fLocal_1100[7] = -0.2263f;
	iLocal_1821[7] = 54;
	fLocal_1136[7] = 0f;
	fLocal_1172[7] = 1f;
	iLocal_2876[7] = joaat("police3");
	Local_2534[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_992[8] = -0.027f;
	fLocal_1028[8] = 0.0016f;
	fLocal_1064[8] = 0.9169f;
	fLocal_1100[8] = -0.3981f;
	iLocal_1821[8] = 108;
	fLocal_1136[8] = 150f;
	fLocal_1172[8] = 1f;
	iLocal_2876[8] = joaat("police3");
	Local_2534[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_992[11] = -0.0022f;
	fLocal_1028[11] = -0.0019f;
	fLocal_1064[11] = 0.928f;
	fLocal_1100[11] = -0.3726f;
	iLocal_1821[11] = 111;
	fLocal_1136[11] = 36000f;
	fLocal_1172[11] = 1f;
	iLocal_2876[11] = joaat("police3");
	Local_2534[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_992[12] = -0.0083f;
	fLocal_1028[12] = -0.0054f;
	fLocal_1064[12] = 0.55f;
	fLocal_1100[12] = 0.8351f;
	iLocal_1821[12] = 112;
	fLocal_1136[12] = 60000f;
	fLocal_1172[12] = 1f;
	iLocal_2876[12] = joaat("police3");
	Local_2534[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_992[13] = -0.0086f;
	fLocal_1028[13] = -0.005f;
	fLocal_1064[13] = 0.5052f;
	fLocal_1100[13] = 0.8629f;
	iLocal_1821[13] = 113;
	fLocal_1136[13] = 60000f;
	fLocal_1172[13] = 1f;
	iLocal_2876[13] = joaat("police3");
	Local_2534[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_992[14] = -0.0083f;
	fLocal_1028[14] = -0.0057f;
	fLocal_1064[14] = 0.6469f;
	fLocal_1100[14] = 0.7625f;
	iLocal_1821[14] = 61;
	fLocal_1136[14] = 80000f;
	fLocal_1172[14] = 1f;
	iLocal_2876[14] = joaat("police3");
	Local_2534[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_992[15] = -0.0041f;
	fLocal_1028[15] = -0.0091f;
	fLocal_1064[15] = 0.9133f;
	fLocal_1100[15] = 0.4072f;
	iLocal_1821[15] = 62;
	fLocal_1136[15] = 80000f;
	fLocal_1172[15] = 1f;
	iLocal_2876[15] = joaat("police3");
	Local_2534[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_992[19] = 0.0002f;
	fLocal_1028[19] = 0.0018f;
	fLocal_1064[19] = 0.9611f;
	fLocal_1100[19] = -0.2763f;
	iLocal_1821[19] = 66;
	fLocal_1136[19] = 55125f;
	fLocal_1172[19] = 1f;
	iLocal_2876[19] = joaat("firetruk");
	Local_2534[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_992[20] = -0.0005f;
	fLocal_1028[20] = 0.0018f;
	fLocal_1064[20] = 0.9559f;
	fLocal_1100[20] = 0.2938f;
	iLocal_1821[20] = 67;
	fLocal_1136[20] = 0f;
	fLocal_1172[20] = 1f;
	iLocal_2876[20] = joaat("maverick");
	Local_2534[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_992[21] = -0.0252f;
	fLocal_1028[21] = -0.0034f;
	fLocal_1064[21] = 0.9369f;
	fLocal_1100[21] = 0.3487f;
	iLocal_1821[21] = 5;
	fLocal_1136[21] = 3834f;
	fLocal_1172[21] = 1f;
	iLocal_2876[21] = joaat("blista");
	Local_2534[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_992[22] = 0.001f;
	fLocal_1028[22] = -0.0004f;
	fLocal_1064[22] = 0.8616f;
	fLocal_1100[22] = 0.5075f;
	iLocal_1821[22] = 6;
	fLocal_1136[22] = 20176f;
	fLocal_1172[22] = 1f;
	iLocal_2876[22] = joaat("airtug");
	Local_2534[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_992[23] = 0.001f;
	fLocal_1028[23] = -0.0001f;
	fLocal_1064[23] = 0.9749f;
	fLocal_1100[23] = -0.2228f;
	iLocal_1821[23] = 7;
	fLocal_1136[23] = 48538f;
	fLocal_1172[23] = 1f;
	iLocal_2876[23] = joaat("airtug");
	Local_2534[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_992[24] = -0.0001f;
	fLocal_1028[24] = 0.0018f;
	fLocal_1064[24] = 0.5344f;
	fLocal_1100[24] = 0.8452f;
	iLocal_1821[24] = 8;
	fLocal_1136[24] = 75112f;
	fLocal_1172[24] = 1f;
	iLocal_2876[24] = joaat("airtug");
}

void func_306(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1AC40
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2667, sParam0, 64);
	bLocal_84 = true;
	iLocal_89 = 0;
	iLocal_1945 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = iParam1;
	iLocal_1949 = 0;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1955 = 0;
	iLocal_1958 = 0;
	iLocal_1956 = -1;
	iLocal_1957 = -1;
	iLocal_1959 = 0;
	iLocal_1960 = 0;
	fLocal_1288 = 0f;
	fLocal_1289 = 0f;
	fLocal_1274 = 0f;
	iLocal_90 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Local_2643.x = (Var0.x - 100f);
		Local_2643.f_1 = (Var0.f_1 - 100f);
		Local_2643.f_2 = (Var0.f_2 - 100f);
		Local_2646.x = (Var0.x + 100f);
		Local_2646.f_1 = (Var0.f_1 + 100f);
		Local_2646.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_2643, Local_2646, 0, 0);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_2683);
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
	func_164();
}

void func_307()//Position - 0x1AD61
{
	if (iLocal_3180 == 0)
	{
		RECORDING::_0x293220DA1B46CEBC(0f, 14f, 4);
		if (iLocal_3344 == 1)
		{
			func_104();
			iLocal_3344 = 0;
		}
		iLocal_3358 = 0;
		iLocal_3359 = 0;
		iLocal_3361 = 0;
		iLocal_3363 = 0;
		iLocal_3378 = 0;
		iLocal_3326 = 0;
		iLocal_3327 = 0;
		iLocal_3330 = 0;
		iLocal_3332 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3342 = 0;
		iLocal_3351 = 0;
		iLocal_3349 = 0;
		iLocal_3438 = 0;
		iLocal_3441 = 0;
		iLocal_3522 = 0;
		iLocal_3377 = 0;
		iLocal_3350 = 1;
		iLocal_3184 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3360 = 1;
		}
		else
		{
			iLocal_3360 = 0;
		}
		GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
		PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_3187 = MISC::GET_GAME_TIMER();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_4967(0, -1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3258);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3275);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_3286))
		{
			uLocal_3286 = GlobalFunc_5104(Local_3299, 0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("TRV4_GAMEPLAY_START");
		Local_3317 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		if (iLocal_3349 == 0 && iLocal_3363 == 1)
		{
			if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				GlobalFunc_164("TRV4_GO1", 7500, 1);
				iLocal_3349 = 1;
			}
		}
		if (iLocal_3377 == 0 && !GlobalFunc_687())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3299, 1) < 800f)
			{
				iLocal_3186 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iLocal_3186 == 0)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_3377 = 1;
				}
				if (iLocal_3186 == 1)
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					RECORDING::_0x293220DA1B46CEBC(0f, 6f, 3);
					iLocal_3377 = 1;
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3299, 1) < 600f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				STREAMING::REQUEST_MODEL(joaat("cogcabrio"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("cogcabrio")))
				{
					iLocal_3257 = VEHICLE::CREATE_VEHICLE(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1);
					ENTITY::SET_ENTITY_PROOFS(iLocal_3257, 0, 1, 1, 1, 0, 0, 0, 0);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3257, 27, 27);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3257, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_molly"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_molly")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							iLocal_3221 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3257, 26, joaat("ig_molly"), -1, 1, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3221, 1);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_3221, 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cogcabrio"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_molly"));
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_3221, 1862763509);
							iLocal_3359 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				PED::DELETE_PED(&iLocal_3221);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_3257);
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_3299, 1) < 500f)
		{
			if (iLocal_3361 == 0)
			{
				uLocal_3292 = unk_0x67D02A194A2FC2BD("BREAKING_NEWS");
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("maverick"));
				STREAMING::REQUEST_MODEL(joaat("bison"));
				STREAMING::REQUEST_MODEL(joaat("blista"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(45, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(35, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(54, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(55, "BB_Chase");
				VEHICLE::REQUEST_VEHICLE_RECORDING(67, "BB_Chase");
				func_156(1, "BB_Chase");
				AUDIO::PREPARE_MUSIC_EVENT("TRV4_CHASE");
				iLocal_3361 = 1;
			}
		}
		else if (iLocal_3361 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			VEHICLE::REMOVE_VEHICLE_RECORDING(45, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(35, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(2, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(54, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(55, "BB_Chase");
			VEHICLE::REMOVE_VEHICLE_RECORDING(67, "BB_Chase");
			func_310(1, "BB_Chase");
			AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
			iLocal_3361 = 0;
		}
		if (iLocal_3378 == 0)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_3187 + 135000))
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_164("TRV4_WARN1", 7500, 1);
				iLocal_3187 = MISC::GET_GAME_TIMER();
				iLocal_3378 = 1;
			}
		}
		if (iLocal_3378 == 1)
		{
			if (MISC::GET_GAME_TIMER() > (iLocal_3187 + 135000))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SOL_3_DRIVE_TO_AIRPORT"))
			{
				AUDIO::START_AUDIO_SCENE("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3438 == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_CAR_ENTERED");
				iLocal_3438 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				iLocal_3258 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3258);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3258, 0))
			{
				if (iLocal_3360 == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_3258, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3360 = 1;
				}
				if (iLocal_3352 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3258);
					iLocal_3352 = 0;
				}
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3258, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3258);
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_3441 == 0)
			{
				HUD::START_GPS_MULTI_ROUTE(156, 1, 0);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-244f, -1842.74f, 28.48f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1.5f, -2014.4f, 11.5f);
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-498.7f, -2136.5f, 8.4f);
				HUD::SET_GPS_MULTI_ROUTE_RENDER(1);
				iLocal_3441 = 1;
			}
		}
		else if (iLocal_3441 == 1)
		{
			HUD::SET_GPS_MULTI_ROUTE_RENDER(0);
			iLocal_3441 = 0;
		}
		if ((iLocal_3361 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_3257)) && ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_3257, GlobalFunc_1535(PLAYER::PLAYER_PED_ID()), 0))
				{
					func_308();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_3257))
				{
					func_308();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_3257, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_3358 = 0;
					func_308();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_3358 = 1;
					func_308();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
					iLocal_3358 = 1;
					func_308();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
		}
	}
}

void func_308()//Position - 0x1B470
{
	while (((!STREAMING::HAS_MODEL_LOADED(joaat("police3")) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bison"))) || !STREAMING::HAS_MODEL_LOADED(joaat("blista")))
	{
		SYSTEM::WAIT(0);
	}
	while (((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(45, "BB_Chase") || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(54, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(55, "BB_Chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(67, "BB_Chase"))
	{
		SYSTEM::WAIT(0);
	}
}


void func_310(int iParam0, char* sParam1)//Position - 0x1B530
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}



void func_313()//Position - 0x1B591
{
	if (iLocal_3180 == 0)
	{
		iLocal_3337 = 1;
		iLocal_3466 = 0;
		iLocal_3487 = 0;
		iLocal_3505 = 0;
		while (iLocal_3337 == 1)
		{
			RECORDING::_0x208784099002BC30("M_LegalTrouble", 0);
			switch (iLocal_3182)
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("sol_3_int", 8);
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						while (!func_329(61, &uLocal_3742, 0, 1, 0, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_3437 = 0;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						GlobalFunc_8380(1, 1, 1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
								iLocal_3258 = Global_86864[0];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[1], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
								iLocal_3275 = Global_86864[1];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[2], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
								iLocal_3276 = Global_86864[2];
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_86864[3]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[3], 0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[3], 1, 1);
								iLocal_3277 = Global_86864[3];
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::_0x48621C9FCA3EBD28(4);
						GlobalFunc_2885();
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
						iLocal_3182++;
					}
					break;
				
				case 1:
					if (iLocal_3466 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (iLocal_3505 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3277))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3277, 0))
									{
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3277)))
										{
											VEHICLE::CONTROL_LANDING_GEAR(iLocal_3277, 2);
											ENTITY::SET_ENTITY_COORDS(iLocal_3277, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											ENTITY::SET_ENTITY_HEADING(iLocal_3277, 357.1288f);
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3277, 1);
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3277);
											func_318(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3505 = 1;
										}
										if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3277)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3277))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3277))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3277)))
										{
											if ((((((((ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("bus") && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("pounder")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("packer")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("airbus")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("ambulance")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("barracks")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("barracks2")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("benson")) && ENTITY::GET_ENTITY_MODEL(iLocal_3277) != joaat("biff"))
											{
												ENTITY::SET_ENTITY_COORDS(iLocal_3277, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												ENTITY::SET_ENTITY_HEADING(iLocal_3277, 207.7515f);
												VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3277);
												func_318(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3505 = 1;
											}
										}
										if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3277)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3277))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3277))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3277))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3277)))
										{
											VEHICLE::DELETE_VEHICLE(&iLocal_3277);
											iLocal_3505 = 1;
										}
									}
								}
							}
							GlobalFunc_9025(&uLocal_3742, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3466 = 1;
						}
					}
					if (iLocal_3437 == 0)
					{
						PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_3575);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3575);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3575, 1862763509);
						HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
						iLocal_3437 = 1;
					}
					if (iLocal_3487 == 0)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
							PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
							PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
							if (CUTSCENE::GET_CUTSCENE_TIME() > 120000)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START");
								iLocal_3487 = 1;
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 121.4087f);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						GlobalFunc_562(61);
						if (iLocal_3487 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_CS_SKIP");
							iLocal_3487 = 1;
						}
						RECORDING::_0x81CBAE94390F9F89();
						GlobalFunc_8380(0, 1, 1, 0);
						iLocal_3182++;
					}
					break;
				
				case 2:
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3258, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3258, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3258);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3275, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3275, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3275);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3276, 0))
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3276, 1))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3276);
							}
						}
					}
					GlobalFunc_657();
					iLocal_3337 = 0;
					iLocal_3182 = 0;
					iLocal_3180 = 0;
					iLocal_3179 = 2;
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}





void func_318(struct<3> Param0, float fParam3, int iParam4, int iParam5)//Position - 0x1BCD8
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
				GlobalFunc_10013(Global_91351.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}











bool func_329(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1C327
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_330(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_330(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1C355
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			uVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				uVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			uVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, uVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, uVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, uVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9196(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}




























void func_358()//Position - 0x1E656
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			STREAMING::REQUEST_MODEL(joaat("rapidgt"));
			STREAMING::REQUEST_MODEL(joaat("surano"));
			STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) || !STREAMING::HAS_MODEL_LOADED(joaat("surano"))) || !STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
			{
				MISC::CLEAR_AREA(Local_3293, 5f, 1, 0, 0, 0);
				iLocal_3258 = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), Local_3293, fLocal_3320, 1, 1);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3258, 112, 112);
				ENTITY::SET_ENTITY_HEALTH(iLocal_3258, 3000);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_3258, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), 1);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_3258, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3258, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3275))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("surano")))
				{
					MISC::CLEAR_AREA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3275 = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3275, 0, 0);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3275, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3275, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3275, 1);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3276))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
				{
					MISC::CLEAR_AREA(Local_3293, 5f, 1, 0, 0, 0);
					iLocal_3276 = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOURS(iLocal_3276, 89, 89);
					ENTITY::SET_ENTITY_HEALTH(iLocal_3276, 3000);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_3276, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), 1);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3276, 1);
				}
			}
		}
		iLocal_3180 = 0;
		iLocal_3182 = 0;
		iLocal_3344 = 0;
		iLocal_3179 = 1;
	}
	else
	{
		PED::ADD_RELATIONSHIP_GROUP("SecGuards", &iLocal_3575);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_3575);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_3575, 1862763509);
		if (Global_84544 == 1)
		{
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
			{
				GlobalFunc_4972(Local_3311, fLocal_3324, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_3179 = 3;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
			{
				GlobalFunc_4972(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_3179 = 5;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 2)
			{
				GlobalFunc_4972(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_3179 = 8;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 3)
			{
				GlobalFunc_4972(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_359();
			}
		}
		else
		{
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
			{
				GlobalFunc_4972(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_3179 = 2;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
			{
				GlobalFunc_4972(Local_3311, fLocal_3324, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_START_RT");
				iLocal_3179 = 3;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 2)
			{
				GlobalFunc_4972(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
				iLocal_3179 = 5;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 3)
			{
				GlobalFunc_4972(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("TRV4_EVADE_RT");
				iLocal_3179 = 8;
			}
		}
		HUD::REQUEST_ADDITIONAL_TEXT("TREV4", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_359()//Position - 0x1EA3D
{
	if (iLocal_3180 == 0)
	{
		MISC::CLEAR_AREA(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		iLocal_3180++;
	}
	if (iLocal_3180 == 1)
	{
		STREAMING::LOAD_SCENE(-920.0547f, -2744.662f, 12.8434f);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			GlobalFunc_4967(0, -1, 1);
			CAM::DO_SCREEN_FADE_IN(800);
		}
		func_6();
	}
}



void func_362()//Position - 0x1EB76
{
	if (iLocal_3489[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[7]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[0] = 1;
			}
		}
	}
	if (iLocal_3497[0] == 0)
	{
		if (iLocal_3489[0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[7]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[7], 0);
					iLocal_3497[0] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[7], 0);
					iLocal_3497[0] = 1;
				}
			}
			else
			{
				iLocal_3497[0] = 1;
			}
		}
	}
	if (iLocal_3489[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[8]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[1] = 1;
			}
		}
	}
	if (iLocal_3497[1] == 0)
	{
		if (iLocal_3489[1] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[8]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[8], 0);
					iLocal_3497[1] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[8], 0);
					iLocal_3497[1] = 1;
				}
			}
			else
			{
				iLocal_3497[1] = 1;
			}
		}
	}
	if (iLocal_3489[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[11]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[11], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[2] = 1;
			}
		}
	}
	if (iLocal_3497[2] == 0)
	{
		if (iLocal_3489[2] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[11]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[11], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[11], 0);
					iLocal_3497[2] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[11], 0);
					iLocal_3497[2] = 1;
				}
			}
			else
			{
				iLocal_3497[2] = 1;
			}
		}
	}
	if (iLocal_3489[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[12]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[12], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[3] = 1;
			}
		}
	}
	if (iLocal_3497[3] == 0)
	{
		if (iLocal_3489[3] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[12]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[12], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[12], 0);
					iLocal_3497[3] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[12], 0);
					iLocal_3497[3] = 1;
				}
			}
			else
			{
				iLocal_3497[3] = 1;
			}
		}
	}
	if (iLocal_3489[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[13]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[13], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[4] = 1;
			}
		}
	}
	if (iLocal_3497[4] == 0)
	{
		if (iLocal_3489[4] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[13]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[13], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[13], 0);
					iLocal_3497[4] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[13], 0);
					iLocal_3497[4] = 1;
				}
			}
			else
			{
				iLocal_3497[4] = 1;
			}
		}
	}
	if (iLocal_3489[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[14]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[14], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[5] = 1;
			}
		}
	}
	if (iLocal_3497[5] == 0)
	{
		if (iLocal_3489[5] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[14]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[14], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[14], 0);
					iLocal_3497[5] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[14], 0);
					iLocal_3497[5] = 1;
				}
			}
			else
			{
				iLocal_3497[5] = 1;
			}
		}
	}
	if (iLocal_3489[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[15]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[15], 0))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3120[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[6] = 1;
			}
		}
	}
	if (iLocal_3497[6] == 0)
	{
		if (iLocal_3489[6] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[15]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[15], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[15], 0);
					iLocal_3497[6] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3120[15], 0);
					iLocal_3497[6] = 1;
				}
			}
			else
			{
				iLocal_3497[6] = 1;
			}
		}
	}
}

void func_363()//Position - 0x1F01D
{
	switch (iLocal_3179)
	{
		case 2:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3363 = 0;
					iLocal_3522 = 0;
					iLocal_3555 = 0;
					iLocal_3556 = 0;
					GlobalFunc_173(&uLocal_3577, 1, 0, "Devin", 0, 1);
					GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3363 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3317, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 2f)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3363 = 1;
								}
							}
						}
					}
					if (iLocal_3522 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_3317, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 100f)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (GlobalFunc_10664(&uLocal_3577, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									RECORDING::_0x293220DA1B46CEBC(4f, 10f, 4);
									iLocal_3522 = 1;
								}
							}
						}
					}
					if (iLocal_3555 == 0 && iLocal_3522 == 1)
					{
						if (GlobalFunc_1993())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3555 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3257, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												RECORDING::_0x293220DA1B46CEBC(3f, 12f, 4);
												iLocal_3556 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3180 >= 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3523[0] = 0;
					iLocal_3523[1] = 0;
					iLocal_3523[2] = 0;
					iLocal_3523[3] = 0;
					iLocal_3552 = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3557 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3198 = MISC::GET_GAME_TIMER();
					GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					GlobalFunc_173(&uLocal_3577, 4, 0, "SOL3COP", 0, 1);
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3556 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3257, 1) < 200f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3556 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
							{
								if (iLocal_3523[0] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 7000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 28000f)
										{
											if (!GlobalFunc_111())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3523[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3523[1] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 28000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 34500f)
										{
											if (!GlobalFunc_111())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_3523[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3523[2] == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[7], 0) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3120[8], 0))
									{
										if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 36000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 41000f)
										{
											if (!GlobalFunc_111())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(2f, 4f, 4);
														iLocal_3523[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 41000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 43500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3264))
										{
											if (!GlobalFunc_111())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
														iLocal_3553 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 50509f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 50872f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3264))
										{
											if (!GlobalFunc_111())
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3523[3] == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 58000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 68000f)
									{
										if (!GlobalFunc_111())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3523[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3557 == 0 && iLocal_3523[3] == 1)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 76000f)
									{
										if (!GlobalFunc_111())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3557 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3552 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 80000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 82000f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[0]))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3259[0], 0))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3259[0]))
												{
													if (!GlobalFunc_111())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
																iLocal_3552 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0)
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 82100f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 83500f)
									{
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[11]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[11]))
											{
												if (!GlobalFunc_111())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3558 = 1;
														}
													}
												}
											}
										}
										else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3120[12]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3120[12]))
											{
												if (!GlobalFunc_111())
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3558 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3561 == 0)
								{
									if ((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 101891f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 105000f) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3257))
									{
										if (!GlobalFunc_111())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													RECORDING::_0x293220DA1B46CEBC(3f, 10f, 4);
													iLocal_3561 = 1;
												}
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_3198 + 7000) && iLocal_3560 == 0)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3198 = MISC::GET_GAME_TIMER();
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (iLocal_3559 == 0 && iLocal_3560 == 1)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3559 = 1;
											}
										}
									}
								}
								if (((VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 105500f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 119000f) && MISC::GET_GAME_TIMER() > iLocal_3198 + 7000) && iLocal_3559 == 1)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3198 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3529 = 0;
					iLocal_3562 = 0;
					iLocal_3568 = 0;
					iLocal_3563 = 1;
					iLocal_3203 = MISC::GET_GAME_TIMER();
					GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_3221))
					{
						GlobalFunc_173(&uLocal_3577, 2, iLocal_3221, "MOLLY", 0, 1);
					}
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3568 == 0)
					{
						AUDIO::PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3568 = 1;
					}
					if (iLocal_3563 == 1)
					{
						if (iLocal_3529 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_3199 = MISC::GET_GAME_TIMER();
										iLocal_3529 = 1;
										iLocal_3562 = 1;
										iLocal_3563 = 0;
									}
								}
							}
						}
						if (MISC::GET_GAME_TIMER() > iLocal_3199 + 5000)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
										iLocal_3199 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					if (iLocal_3562 == 1 && MISC::GET_GAME_TIMER() > iLocal_3203 + 4000)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(4f, 6f, 4);
									iLocal_3203 = MISC::GET_GAME_TIMER();
									iLocal_3563 = 1;
									iLocal_3562 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3564 = 0;
					iLocal_3565 = 0;
					GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (!PED::IS_PED_INJURED(iLocal_3221))
					{
						GlobalFunc_173(&uLocal_3577, 2, iLocal_3221, "MOLLY", 0, 1);
					}
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3530 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3530 = 1;
								}
							}
						}
					}
					if (iLocal_3530 == 1 && iLocal_3532 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3532 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
						{
							if (!PED::IS_PED_INJURED(iLocal_3221))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_3208))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3208) > 0.65f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_3208) < 0.835f)
									{
										if (!GlobalFunc_111())
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
													iLocal_3531 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3564 == 0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3564 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3564 == 1 && iLocal_3565 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3565 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3566 = 0;
					iLocal_3204 = MISC::GET_GAME_TIMER();
					GlobalFunc_173(&uLocal_3577, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3566 == 0)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_3256 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3256))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3256, 1) < 40f)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3566 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3566 == 1 && MISC::GET_GAME_TIMER() > iLocal_3204 + 5000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_3256 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3256))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3256, 1) < 40f)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (GlobalFunc_10618(&uLocal_3577, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3204 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}




void func_367()//Position - 0x1FF9F
{
	if (((iLocal_3179 == 4 || iLocal_3179 == 5) || iLocal_3179 == 8) || iLocal_3179 == 6)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			}
		}
	}
	if (iLocal_3509 == 0)
	{
		if (iLocal_3179 == 4)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					iLocal_3509 = 1;
				}
			}
		}
	}
}


void func_369()//Position - 0x20D9C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3258 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}

void func_370()//Position - 0x20DC8
{
	if (iLocal_3350 == 1)
	{
		if (iLocal_3179 == 4)
		{
			if (iLocal_3181 > 1 && iLocal_3474 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_204("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3179 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3282))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_3287))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_3282, 1) > 100f)
					{
						func_204("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3179 == 4)
		{
			if (iLocal_3181 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_3193 + 7000 && iLocal_3507 == 0)
				{
					func_204("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3179 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 62000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 77000f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) < 200f && ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 125f)
									{
										if (iLocal_3506 == 0)
										{
											iLocal_3196 = MISC::GET_GAME_TIMER();
											iLocal_3506 = 1;
										}
										if (iLocal_3506 == 1 && MISC::GET_GAME_TIMER() > iLocal_3196 + 4000)
										{
											func_204("TRV4_FAIL1");
										}
									}
									else if (iLocal_3506 == 1)
									{
										iLocal_3506 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3179 == 5 || iLocal_3179 == 6)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -928.9f, -2935f, 13f, 1) < 5f && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (iLocal_3179 == 2 || iLocal_3179 == 4)
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 2, 200, 0))
				{
					func_204("TRV4_FAIL2");
				}
				else if (!GlobalFunc_74("TRV4_HELP3"))
				{
					GlobalFunc_Display_Help_Text("TRV4_HELP3");
				}
			}
			else if (GlobalFunc_74("TRV4_HELP3"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
				{
					if (!PED::IS_PED_INJURED(iLocal_3221))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3221, 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_3221, 0);
					}
				}
			}
		}
		if (iLocal_3359 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
			{
				if (PED::IS_PED_INJURED(iLocal_3221))
				{
					func_204("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3179 == 4)
		{
			if (iLocal_3351 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_3221))
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3221) > 300f)
					{
						if (iLocal_3435 == 1)
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164("TRV4_WARN1", 7500, 1);
							iLocal_3435 = 0;
						}
					}
					else if (iLocal_3435 == 0)
					{
						iLocal_3435 = 1;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) < 40000f)
							{
								if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3221) > 400f)
								{
									func_204("TRV4_FAIL1");
								}
							}
							else if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_3221) > 350f)
							{
								func_204("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3181 == 3)
			{
				if (iLocal_3475 == 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || MISC::GET_GAME_TIMER() > iLocal_3194 + 12000)
					{
						func_204("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3179 == 2 || iLocal_3179 == 4)
		{
			if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (iLocal_3179 == 4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3257, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3257))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 111509f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_204("TRV4_FAIL1");
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3257) > 122000f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (iLocal_3508 == 0)
								{
									iLocal_3197 = MISC::GET_GAME_TIMER();
									iLocal_3508 = 1;
								}
								if (iLocal_3508 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3197 + 4000)
									{
										func_204("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3508 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3179 == 2)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_204("TRV4_FAIL1");
			}
		}
		if (iLocal_3436 == 1)
		{
			if (GlobalFunc_145())
			{
				func_371();
			}
		}
	}
}

void func_371()//Position - 0x212D6
{
	GlobalFunc_5695(PLAYER::PLAYER_PED_ID(), 0);
	func_375();
}




void func_375()//Position - 0x2135A
{
	GlobalFunc_7678(24, 1);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	GlobalFunc_860();
	GlobalFunc_4948(&uLocal_27, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3270))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3270);
	}
	GlobalFunc_563(0);
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_3220))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_3220);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3221))
	{
		if (!PED::IS_PED_INJURED(iLocal_3221))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3221, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3221);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3227))
	{
		if (!PED::IS_PED_INJURED(iLocal_3227))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3227, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3227);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3244))
	{
		if (!PED::IS_PED_INJURED(iLocal_3244))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3244, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3244);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3245))
	{
		if (!PED::IS_PED_INJURED(iLocal_3245))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3245, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3245);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3246))
	{
		if (!PED::IS_PED_INJURED(iLocal_3246))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3246, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3246);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3247))
	{
		if (!PED::IS_PED_INJURED(iLocal_3247))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3247, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3247);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3248))
	{
		if (!PED::IS_PED_INJURED(iLocal_3248))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3248, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3248);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3249))
	{
		if (!PED::IS_PED_INJURED(iLocal_3249))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3249, 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3249);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3222[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3222[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3222[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3222[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3222[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3222[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3222[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3222[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3222[3], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3222[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3228[0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_3228[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3228[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3228[1]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_3228[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3228[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3228[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_3228[2]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_3228[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_3228[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[2]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[2], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[3]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[3]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[3], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[4]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[4]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[4], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[4]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[5]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[5], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[5]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[6]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[6]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[6], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[6]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[7]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[7], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[7]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[8]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[8]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[8], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[8]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[9]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[9]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[9], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[9]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3232[10]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3232[10]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3232[10], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3232[10]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3250[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3250[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3250[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3250[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3253[0]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3253[0], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3253[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3253[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_3253[1]))
		{
			PED::SET_PED_KEEP_TASK(iLocal_3253[1], 1);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3253[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3257))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3257);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3258))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3258, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3258);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3263))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3263);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3264))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3264);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3265))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3265);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3266))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3266);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3270))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3274))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_3274, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3274);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3278[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3278[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3259[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3259[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3259[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3278[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3278[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3278[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3267[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3267[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3267[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3271[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_3271[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3262))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3262);
	}
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_GAMEPLAY_START");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_CS_SKIP");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_START_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_FOOT_CHASE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_EVADE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CAR_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_AIRPORT_ENTERED");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_CHASE");
	AUDIO::CANCEL_MUSIC_EVENT("TRV4_JET_ENTERED");
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3219))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3219);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3762))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(uLocal_3762, 0);
	}
	HUD::CLEAR_GPS_MULTI_ROUTE();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_3292);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
	PATHFIND::SET_ROADS_IN_AREA(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Trev4_5"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Trev4_5", 0, 0.5f, 1f);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aig_lift_waitped_a");
	GlobalFunc_7632(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	if (GlobalFunc_4547(2))
	{
		GlobalFunc_2434(2, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}














