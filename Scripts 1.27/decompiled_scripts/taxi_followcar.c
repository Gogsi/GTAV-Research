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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = -1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 1000;
	var uLocal_54 = 1000;
	var uLocal_55 = 0;
	int iLocal_56[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
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
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	bool bLocal_93 = 0;
	float fLocal_94 = 0f;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 1132396544;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 0;
	var uLocal_103 = -1082130432;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 8;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = -1;
	var uLocal_164 = 1092616192;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	struct<21> Local_168 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_189[15];
	int iLocal_340 = 0;
	float fLocal_341 = 0f;
	struct<2> Local_342 = { 0, 16 } ;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	struct<3> Local_408[1];
	int iLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416[3] = { 0, 0, 0 };
	int iLocal_420 = 0;
	var uLocal_421 = 0;
	struct<418> Local_422 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_840 = -1;
	var uLocal_841 = -1;
	var uLocal_842 = -1;
	var uLocal_843 = -1;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	struct<32> Local_852 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	var uLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	bool bLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	bool bLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	struct<3> Local_915 = { 0, 0, 0 } ;
	struct<3> Local_918 = { 0, 0, 0 } ;
	struct<3> Local_921 = { 0, 0, 0 } ;
	struct<3> Local_924 = { 0, 0, 0 } ;
	struct<3> Local_927 = { 0, 0, 0 } ;
	struct<3> Local_930 = { 0, 0, 0 } ;
	struct<3> Local_933 = { 0, 0, 0 } ;
	struct<3> Local_936 = { 0, 0, 0 } ;
	struct<3> Local_939 = { 0, 0, 0 } ;
	struct<3> Local_942 = { 0, 0, 0 } ;
	struct<3> Local_945 = { 0, 0, 0 } ;
	struct<3> Local_948 = { 0, 0, 0 } ;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	struct<3> Local_954 = { 0, 0, 0 } ;
	struct<3> Local_957 = { 0, 0, 0 } ;
	struct<3> Local_960 = { 0, 0, 0 } ;
	struct<3> Local_963 = { 0, 0, 0 } ;
	struct<3> Local_966 = { 0, 0, 0 } ;
	float fLocal_969 = 0f;
	float fLocal_970 = 0f;
	float fLocal_971 = 0f;
	float fLocal_972 = 0f;
	float fLocal_973 = 0f;
	int iLocal_974 = 0;
	char cLocal_975[16] = "";
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	char cLocal_979[64] = "";
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	char cLocal_995[64] = "";
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	char cLocal_1011[64] = "";
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	char cLocal_1027[64] = "";
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	struct<3> Local_1043 = { 0, 0, 0 } ;
	struct<3> Local_1046 = { 0, 0, 0 } ;
	float fLocal_1049 = 0f;
	bool bLocal_1050 = 0;
	struct<28> Local_1051 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 5;
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
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 1097859072;
	var uLocal_1127 = 1500;
	var uLocal_1128 = 45;
	var uLocal_1129 = 1103626240;
	var uLocal_1130 = 5;
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
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
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
	uLocal_76 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_77 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_82 = { 500f, 500f, 500f };
	iLocal_885 = joaat("a_f_y_genhot_01");
	iLocal_886 = joaat("a_f_y_bevhills_01");
	iLocal_887 = joaat("ambulance");
	iLocal_888 = joaat("bison");
	iLocal_895 = 1;
	iLocal_896 = 1000;
	Local_915 = { 1358.822f, -1547.396f, 53.7793f };
	Local_918 = { 1358.822f, -1547.396f, 53.7793f };
	Local_921 = { -694.2758f, -1119.447f, 13.525f };
	Local_924 = { -683.1272f, -1102.185f, 13.5257f };
	Local_927 = { 410.2629f, -1399.16f, 28.4017f };
	Local_930 = { 371.3834f, -1482.955f, 28.3418f };
	Local_933 = { 404.8026f, -1416.294f, 28.435f };
	Local_936 = { 406.612f, -1419.937f, 29.00375f };
	Local_939 = { -682.5392f, -1109.082f, 13.6729f };
	Local_942 = { -688.6727f, -1117.512f, 13.52498f };
	Local_945 = { -667.136f, -1046.06f, 15.9174f };
	Local_948 = { -703.1228f, -1142.432f, 9.8127f };
	Local_954 = { -701.2533f, -1080.285f, 12.2884f };
	Local_957 = { -687.8794f, -1108.073f, 13.5257f };
	Local_960 = { -703.0013f, -1084.073f, 12.1105f };
	fLocal_969 = 25.0227f;
	fLocal_970 = 226.3085f;
	fLocal_971 = -128.2329f;
	fLocal_972 = 238.4969f;
	fLocal_973 = 212.7682f;
	StringCopy(&cLocal_975, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_979, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_995, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_1011, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_1027, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	Local_1043 = { -727.111f, -1046.357f, 11.43926f };
	Local_1046 = { -642.6097f, -1085.538f, 28.42921f };
	fLocal_1049 = 76.75f;
	iLocal_1122 = 786468;
	iLocal_1123 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		GlobalFunc_4670(2);
		func_430();
	}
	MISC::SET_MISSION_FLAG(1);
	func_416();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_422.f_2))
		{
			func_8();
		}
		else
		{
			GlobalFunc_8923(&Local_422);
		}
		SYSTEM::WAIT(0);
	}
}








void func_8()//Position - 0x4B1
{
	if (GlobalFunc_4786(&Local_422))
	{
		GlobalFunc_4785(&Local_422);
		if (HUD::DOES_BLIP_EXIST(Local_852.f_4))
		{
			HUD::REMOVE_BLIP(&(Local_852.f_4));
		}
		if (func_413(&Local_422, 0))
		{
			func_411();
		}
	}
	else
	{
		func_410(&Local_422);
		if (Local_422.f_410 < 28)
		{
			func_376(&Local_422, &uLocal_1124);
			func_375(&Local_422);
			GlobalFunc_6615(&Local_422, &uLocal_897, 0);
		}
		if (Local_422.f_410 > 2)
		{
			if (!GlobalFunc_4783(&Local_422))
			{
				func_342();
			}
			else
			{
				func_333(&Local_422, "Taxi Not Driveable", GlobalFunc_4778(&Local_422));
			}
		}
		if (Local_422.f_410 >= 21 && !iLocal_904)
		{
			func_321();
		}
		if (iLocal_906)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		}
		if (Local_422.f_410 == 9 || Local_422.f_410 == 17)
		{
			func_297(&Local_422, 0, 0);
		}
		switch (Local_422.f_410)
		{
			case 0:
				func_294();
				GlobalFunc_8281(&Local_422, 16, 4f, 0);
				GlobalFunc_7575(&Local_422, Local_915, Local_918, "TaxiKeyla", iLocal_885, 41.1334f, 15f);
				GlobalFunc_8286(&Local_422);
				GlobalFunc_4773(&Local_422, 1);
				break;
			
			case 1:
				if (func_287())
				{
					func_286();
					func_266();
					GlobalFunc_4775(&(Local_408[0 /*3*/]), "TAXI_SC_BN_04", 100);
					GlobalFunc_4774(&Local_422, &Local_408);
					GlobalFunc_6595(&Local_422);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_927, Local_930, 0, 1);
					Local_422.f_14 = { Local_915 };
					GlobalFunc_4773(&Local_422, 3);
				}
				break;
			
			case 3:
				if (func_258(&Local_422, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_422.f_3))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_422.f_3, 0, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_422.f_3, 2, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_422.f_3, 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_422.f_3, 4, 1, 3, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_422.f_3, 8, 1, 0, 0);
					}
					GlobalFunc_8926(&Local_422, 1, 0);
					PED::ADD_RELATIONSHIP_GROUP("TAXI_Escapee", &(Local_852.f_30));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_852.f_30, Local_422.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_852.f_30, 1862763509);
					PATHFIND::SET_ROADS_IN_AREA(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					GlobalFunc_4773(&Local_422, 5);
				}
				break;
			
			case 5:
				if (func_238(&Local_422, 0, 1109393408))
				{
					func_237();
					GlobalFunc_4773(&Local_422, 6);
				}
				break;
			
			case 6:
				if (func_236(&Local_422))
				{
					GlobalFunc_9566(&Local_422, 9, 1, 0, 0);
					GlobalFunc_6590(&Local_422);
					Local_422.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_230();
					GlobalFunc_6583(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					GlobalFunc_4773(&Local_422, 17);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_422.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_422.f_2, Local_422.f_4, 0))
					{
						GlobalFunc_8284(&Local_422);
						GlobalFunc_4773(&Local_422, 5);
					}
				}
				break;
			
			case 17:
				func_226(&Local_422, &(Local_422.f_9));
				if (!ENTITY::DOES_ENTITY_EXIST(Local_852.f_3))
				{
					if (func_225())
					{
						func_224(&Local_852, Local_936, fLocal_971);
					}
				}
				else
				{
					func_223(&Local_422, &Local_852);
				}
				if (func_197(&Local_422, 9f, 1097859072, 1117782016))
				{
					if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_422.f_9))
					{
						HUD::SET_BLIP_ROUTE(Local_422.f_9, 0);
					}
					HUD::REMOVE_BLIP(&(Local_422.f_9));
					GlobalFunc_4773(&Local_422, 19);
				}
				break;
			
			case 19:
				if (func_190())
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_9566(&Local_422, 139, 1, 0, 0);
						iLocal_906 = 1;
						GlobalFunc_4773(&Local_422, 9);
					}
				}
				break;
			
			case 9:
				func_223(&Local_422, &Local_852);
				func_188();
				if (func_187(Local_852.f_2, Local_852.f_3))
				{
					GlobalFunc_6589(&Local_422, 2, 0);
					PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(Local_852.f_2, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 6, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 17, 1);
					GlobalFunc_8926(&Local_422, 1, 0);
					Local_852.f_5 = ENTITY::GET_ENTITY_HEALTH(Local_852.f_3);
					Local_852.f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_852.f_3);
					Local_852.f_16 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_852.f_3);
					GlobalFunc_8281(&Local_422, 13, 0f, 0);
					GlobalFunc_8281(&Local_422, 20, 0f, 0);
					PED::SET_PED_NON_CREATION_AREA(Local_945, Local_948);
					uLocal_893 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_945, Local_948, 0, 1, 1, 1);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
					GlobalFunc_4773(&Local_422, 13);
				}
				break;
			
			case 13:
				func_188();
				func_223(&Local_422, &Local_852);
				func_226(&Local_422, &(Local_852.f_4));
				if (GlobalFunc_4752(&Local_422))
				{
					if (func_184(Local_852.f_2, Local_852.f_4))
					{
						GlobalFunc_9566(&Local_422, 51, 1, 0, 0);
						GlobalFunc_4773(&Local_422, 25);
					}
					GlobalFunc_10826(&Local_422);
					func_177(Local_852.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1051, 2);
					if (func_145())
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_852.f_3))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_852.f_3);
							VEHICLE::REMOVE_VEHICLE_RECORDING(0, "taxi_oj_fc3");
						}
						GlobalFunc_4948(&uLocal_44, 0, 0);
						func_142();
						GlobalFunc_4773(&Local_422, 20);
					}
				}
				break;
			
			case 20:
				if (func_141())
				{
					if (func_120())
					{
						GlobalFunc_4773(&Local_422, 14);
					}
				}
				break;
			
			case 14:
				GlobalFunc_4751(&Local_422, &(Local_422.f_43));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_852.f_3, Local_921, 20f, 20f, 60f, true, 1, 0) && ENTITY::GET_ENTITY_SPEED(Local_852.f_3) < 5f) || Local_852.f_31 > 2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_889))
						{
							TASK::CLEAR_PED_TASKS(iLocal_889);
							ENTITY::SET_ENTITY_COORDS(iLocal_889, Local_942, 1, 0, 0, 1);
						}
						GlobalFunc_9566(&Local_422, 37, 1, 0, 0);
						GlobalFunc_4773(&Local_422, 21);
					}
				}
				break;
			
			case 21:
				GlobalFunc_4751(&Local_422, &(Local_422.f_43));
				func_118(&Local_422, Local_852.f_2, 1, 1);
				func_118(&Local_422, iLocal_889, 0, 0);
				func_226(&Local_422, &(Local_422.f_9));
				if (HUD::DOES_BLIP_EXIST(Local_852.f_4))
				{
					HUD::REMOVE_BLIP(&(Local_852.f_4));
					Local_422.f_17 = { Local_924 };
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_422.f_9))
				{
					Local_422.f_9 = GlobalFunc_5104(Local_422.f_17, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_422.f_4, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_422.f_2, Local_422.f_4, 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_422.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_422.f_140, 1, 0))
						{
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_422.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_422.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_422.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
							{
								iLocal_412 = 0;
							}
							else
							{
								iLocal_412 = 1;
							}
							Local_422.f_35 = 60f;
							Local_422.f_417 = 143;
							Local_422.f_416 = 143;
							iLocal_906 = 0;
							GlobalFunc_4773(&Local_422, 22);
						}
					}
				}
				break;
			
			case 22:
				func_118(&Local_422, Local_852.f_2, 0, 1);
				func_118(&Local_422, iLocal_889, 0, 0);
				if (!PED::IS_PED_INJURED(Local_422.f_3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_422.f_4, 0))
					{
						if (Local_852.f_31 != 6)
						{
							if (GlobalFunc_8283(&Local_422, 1, 3f))
							{
								iLocal_905 = 1;
								HUD::REMOVE_BLIP(&(Local_422.f_9));
								GlobalFunc_4773(&Local_422, 27);
							}
						}
						else
						{
							if (!HUD::DOES_BLIP_EXIST(Local_422.f_9))
							{
								Local_422.f_9 = GlobalFunc_5104(Local_422.f_17, 1);
							}
							if (func_197(&Local_422, 8f, 1097859072, 1117782016) || GlobalFunc_8283(&Local_422, 1, 1084227584))
							{
								HUD::REMOVE_BLIP(&(Local_422.f_9));
								GlobalFunc_4773(&Local_422, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_118(&Local_422, Local_852.f_2, 0, 1);
				func_118(&Local_422, iLocal_889, 0, 0);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
				{
					GlobalFunc_9566(&Local_422, 37, 1, 0, 0);
					GlobalFunc_4773(&Local_422, 27);
				}
				break;
			
			case 27:
				func_118(&Local_422, Local_852.f_2, 0, 1);
				func_118(&Local_422, iLocal_889, 0, 0);
				if (!PED::IS_PED_INJURED(Local_422.f_3))
				{
					if (HUD::DOES_BLIP_EXIST(Local_852.f_4))
					{
						HUD::REMOVE_BLIP(&(Local_852.f_4));
					}
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
					if (Local_852.f_9 > 2)
					{
						Local_422.f_56 = -10;
					}
					else if (Local_852.f_9 == 0)
					{
						Local_422.f_56 = 7;
						GlobalFunc_4748(&Local_422, 0);
					}
					else
					{
						Local_422.f_56 = 4;
					}
					func_110(&Local_422);
					GlobalFunc_10596(&Local_422);
					GlobalFunc_7558(&Local_422);
					GlobalFunc_4773(&Local_422, 29);
				}
				break;
			
			case 29:
				HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
				if (func_76(&Local_422, &uLocal_1131))
				{
					GlobalFunc_10595(&Local_422);
					GlobalFunc_4773(&Local_422, 28);
				}
				break;
			
			case 28:
				if (iLocal_904 || iLocal_903)
				{
					GlobalFunc_4773(&Local_422, 30);
				}
				break;
			
			case 30:
				HUD::CLEAR_THIS_PRINT("TAXI_OBJ_DRIVE");
				if ((!PED::IS_PED_INJURED(Local_422.f_3) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_889, Local_422.f_3, 1)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852.f_2, Local_422.f_3, 1))
				{
					if (iLocal_909 || SYSTEM::TIMERA() > 20000)
					{
						func_50(1, &Local_422, 1);
						func_430();
					}
					else
					{
						iLocal_420 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_939, 10f, joaat("ambulance"), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_420, 0))
						{
							iLocal_909 = 1;
						}
						iLocal_890 = PED::GET_RANDOM_PED_AT_COORD(Local_939, 5f, 5f, 5f, -1);
						if (!PED::IS_PED_INJURED(iLocal_890))
						{
							iLocal_909 = 1;
						}
						if (!iLocal_910)
						{
							if (MISC::CREATE_INCIDENT(5, Local_939, 1, 0f, &uLocal_894))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_910 = 1;
							}
						}
					}
				}
				if (GlobalFunc_5683(Local_939, 1) > 100f || GlobalFunc_4951(Local_422.f_3, PLAYER::PLAYER_PED_ID()) > 100f)
				{
					func_50(1, &Local_422, 1);
					func_430();
				}
				else if ((PED::IS_PED_INJURED(Local_422.f_3) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_889, PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852.f_2, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!PED::IS_PED_INJURED(Local_422.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_422.f_3, 1);
						TASK::CLEAR_PED_TASKS(Local_422.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_COWER(0, 2000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_422.f_17, 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(Local_422.f_3, uLocal_413);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						PED::SET_PED_KEEP_TASK(Local_422.f_3, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_889))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_889, 1);
						TASK::CLEAR_PED_TASKS(iLocal_889);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_COWER(0, 1000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_422.f_17, 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_889, uLocal_413);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						PED::SET_PED_KEEP_TASK(iLocal_889, 1);
					}
					if (!PED::IS_PED_INJURED(Local_852.f_2))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852.f_2, 1);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						if (bLocal_907)
						{
							TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_422.f_17, 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(Local_852.f_2, uLocal_413);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						PED::SET_PED_KEEP_TASK(Local_852.f_2, 1);
					}
					func_50(1, &Local_422, 1);
					func_430();
				}
				else if ((iLocal_903 && !GlobalFunc_111()) && (MISC::GET_GAME_TIMER() - iLocal_899) > 500)
				{
					if (!PED::IS_PED_INJURED(Local_422.f_3))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_422.f_3, 1);
						TASK::CLEAR_PED_TASKS(Local_422.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, -957453492);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(Local_422.f_3, uLocal_413);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						PED::SET_PED_KEEP_TASK(Local_422.f_3, 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_889))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_889, 1);
						TASK::CLEAR_PED_TASKS(iLocal_889);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_COWER(0, 1000);
						TASK::TASK_SMART_FLEE_COORD(0, Local_422.f_17, 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_889, uLocal_413);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						PED::SET_PED_KEEP_TASK(iLocal_889, 1);
					}
					if (!PED::IS_PED_INJURED(Local_852.f_2))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852.f_2, 1);
						TASK::CLEAR_PED_TASKS(Local_852.f_2);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_SMART_FLEE_COORD(0, Local_422.f_17, 1000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(Local_852.f_2, uLocal_413);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						PED::SET_PED_KEEP_TASK(Local_852.f_2, 1);
					}
					func_9(&Local_422, 1);
					func_430();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)//Position - 0x1249
{
	GlobalFunc_4785(uParam0);
	if (GlobalFunc_111())
	{
		GlobalFunc_4956();
	}
	GlobalFunc_5848();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_6685(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 0);
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	GlobalFunc_6584(uParam0->f_14, 1);
	GlobalFunc_6583(uParam0->f_14, 1, 1114636288);
	GlobalFunc_200(&(uParam0->f_244), 3);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	if (GlobalFunc_6582())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	GlobalFunc_8316(0, 1, 1, 0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	if (GlobalFunc_747(Global_SAVE_DATA.TAXI_iGenData, 4))
	{
		GlobalFunc_6581(&(Global_SAVE_DATA.TAXI_iGenData), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_561(), 0);
	}
	if (bParam1)
	{
		GlobalFunc_4741(uParam0);
	}
	GlobalFunc_4740(uParam0);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_14(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_4986(&uLocal_89) * 1000f)), 12, 0);
}





void func_14(int iParam0)//Position - 0x1441
{
	var uVar0;
	
	if (iLocal_56[0] != 0)
	{
		MemCopy(&uVar0, {GlobalFunc_4739(iParam0)}, 6);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
		}
	}
}




































void func_50(bool bParam0, var uParam1, bool bParam2)//Position - 0x1CF9
{
	if (bParam0)
	{
		GlobalFunc_10595(uParam1);
		if (!PED::IS_PED_INJURED(uParam1->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		GlobalFunc_6585(1, 0);
	}
	func_9(uParam1, bParam2);
}


























int func_76(var uParam0, var uParam1)//Position - 0x2D66
{
	switch (iLocal_167)
	{
		case 0:
			if (!GlobalFunc_111() && GlobalFunc_8928(uParam0, 0) > 1f)
			{
				if (GlobalFunc_6582())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				func_102(uParam0);
				GlobalFunc_6581(&(Global_SAVE_DATA.TAXI_iGenData), 4096);
				GlobalFunc_8280(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, GlobalFunc_4744(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				GlobalFunc_778(1);
				iLocal_167 = 6;
			}
			break;
		
		case 6:
			if (!GlobalFunc_8254(uParam1, 0))
			{
				func_77(uParam0);
				GlobalFunc_8281(uParam0, 0, 0, 0);
				GlobalFunc_778(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_77(var uParam0)//Position - 0x2E38
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		GlobalFunc_10844(GlobalFunc_8315(), 21, iVar0, 0, 0);
		GlobalFunc_6585(10, iVar0);
		iLocal_56[0] = iVar0;
	}
}

























void func_102(var uParam0)//Position - 0x3F56
{
	int iVar0;
	
	Local_168.f_1 = SYSTEM::TO_FLOAT(uParam0->f_50);
	Local_168.f_2 = SYSTEM::TO_FLOAT(uParam0->f_56);
	GlobalFunc_6585(11, uParam0->f_56);
	GlobalFunc_6585(12, uParam0->f_56);
	iLocal_56[1] = uParam0->f_56;
	iLocal_56[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_168.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (MISC::IS_BIT_SET(Local_168.f_4[iVar0 /*3*/], 2))
		{
			Local_168.f_3 = (Local_168.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_168 = uParam0->f_411;
	Local_168.f_20 = ((Local_168.f_1 + Local_168.f_2) + Local_168.f_3);
}








void func_110(var uParam0)//Position - 0x417A
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = GlobalFunc_3339(fVar0);
	iLocal_56[4] = SYSTEM::CEIL(fVar0);
	iLocal_56[5] = SYSTEM::CEIL(fVar0);
	GlobalFunc_6585(4, SYSTEM::CEIL(fVar0));
	GlobalFunc_6585(5, SYSTEM::CEIL(fVar0));
	uParam0->f_50 = SYSTEM::CEIL((fVar0 * 100f));
}








void func_118(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x446A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (PED::IS_PED_BEING_JACKED(iParam1))
				{
					if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
					{
						if (Local_422.f_109 == 0)
						{
							func_333(&Local_422, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (PED::IS_PED_INJURED(iParam1))
		{
			if (bParam3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_889))
				{
					TASK::CLEAR_PED_TASKS(iLocal_889);
					TASK::TASK_SMART_FLEE_PED(iLocal_889, PLAYER::PLAYER_PED_ID(), 100f, 20000, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_889, 1);
				}
				func_333(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
				{
					TASK::CLEAR_PED_TASKS(Local_852.f_2);
					TASK::TASK_SMART_FLEE_PED(Local_852.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, 0, 0);
					PED::SET_PED_KEEP_TASK(Local_852.f_2, 1);
				}
				func_333(uParam0, "Mistress injured.", 14);
			}
		}
		else if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_889))
				{
					TASK::CLEAR_PED_TASKS(iLocal_889);
					TASK::TASK_SMART_FLEE_PED(iLocal_889, PLAYER::PLAYER_PED_ID(), 100f, 20000, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_889, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
				{
					TASK::CLEAR_PED_TASKS(Local_852.f_2);
					TASK::TASK_SMART_FLEE_PED(Local_852.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, 0, 0);
					PED::SET_PED_KEEP_TASK(Local_852.f_2, 1);
				}
				func_333(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}


int func_120()//Position - 0x461C
{
	struct<3> Var0;
	
	GlobalFunc_8285();
	if (iLocal_1142 < 3 && iLocal_1142 > 0)
	{
		if (GlobalFunc_7945(iLocal_896))
		{
			iLocal_1142 = 3;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_889))
	{
		if (!PED::IS_PED_INJURED(iLocal_889))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_889, 1) };
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if (GlobalFunc_552(1, 1, 1) && !Local_422.f_142)
			{
				iLocal_896 = MISC::GET_GAME_TIMER();
				GlobalFunc_7559(&uLocal_1081);
				GlobalFunc_4749(&Local_1051, -1, 1);
				GlobalFunc_6583(Local_957, 0, 15f);
				GlobalFunc_6583(Local_960, 0, 15f);
				GlobalFunc_4795(&Local_422, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_130();
				GlobalFunc_8281(&Local_422, 19, 0, 0);
				iLocal_1142 = 1;
			}
			else
			{
				GlobalFunc_2654("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_422.f_78), 1000);
			}
			break;
		
		case 1:
			if (GlobalFunc_8928(&Local_422, 19) > 0.5f)
			{
				GlobalFunc_9145(0, 0, 1);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_957, 30f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_960, 30f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_957, 30f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_960, 30f, 0);
				func_126(Local_957, 1114636288, 1);
				func_126(Local_960, 1114636288, 1);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_945, Local_948, 0, 1);
				GlobalFunc_9566(&Local_422, 35, 1, 1, 0);
				CAM::SET_CAM_COORD(Local_422, func_125(0));
				CAM::SET_CAM_ROT(Local_422, func_124(0), 2);
				CAM::SET_CAM_FOV(Local_422, 44.5167f);
				CAM::SHAKE_CAM(Local_422, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(Local_422, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_852.f_3, Local_954, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_852.f_3, fLocal_970);
					if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&cLocal_975, Local_954, &iLocal_898))
					{
					}
					if (TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_975, iLocal_898, &uLocal_951))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_852.f_2, Local_852.f_3, &cLocal_975, iLocal_1123, iLocal_898 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				GlobalFunc_8281(&Local_422, 19, 0, 0);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_8928(&Local_422, 19) > 5f)
			{
				GlobalFunc_8281(&Local_422, 19, 0, 0);
				iLocal_1142 = 4;
			}
			else if (GlobalFunc_8928(&Local_422, 19) > 4.7f)
			{
				if (GlobalFunc_1720())
				{
					if (!iLocal_914)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_914 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_852.f_3, Local_921, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_852.f_3, fLocal_973);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_852.f_3);
			}
			GlobalFunc_8281(&Local_422, 19, 0, 0);
			iLocal_1142 = 4;
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_422.f_4, 0))
			{
				Local_422.f_141 = 0;
				CAM::DO_SCREEN_FADE_IN(800);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_852.f_3, Local_921, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_852.f_3, fLocal_973);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_852.f_3);
					if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_852.f_2);
						ENTITY::SET_ENTITY_COORDS(Local_852.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_852.f_2, -49.27436f);
					}
				}
				CAM::DESTROY_CAM(Local_422, 0);
				CAM::DESTROY_CAM(uLocal_421, 0);
				GlobalFunc_9144(1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_6589(&Local_422, 19, 0);
				iLocal_1142 = 5;
				return 1;
			}
			break;
	}
	return 0;
}




Vector3 func_124(int iParam0)//Position - 0x4A93
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return Var0;
}

Vector3 func_125(int iParam0)//Position - 0x4ABE
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -686.0368f, -1073.22f, 16.1762f };
			break;
	}
	return Var0;
}

void func_126(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x4AED
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { GlobalFunc_4722(Var1, func_127(fVar0), fParam3, fParam3, 5f) };
	Var7 = { GlobalFunc_4722(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		PATHFIND::SET_ROADS_IN_AREA(Var7, Var4, 0, 1);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var7, Var4, 1);
	}
}

float func_127(float fParam0)//Position - 0x4B76
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}



void func_130()//Position - 0x4C14
{
	var uVar0;
	
	iLocal_889 = PED::CREATE_PED(26, iLocal_886, Local_939, fLocal_969, 1, 1);
	PED::SET_PED_MAX_HEALTH(iLocal_889, 5);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_889, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_889, 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_889, 2, 1, 2, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_889, 20, 1);
	GlobalFunc_173(&(Local_422.f_244), 5, iLocal_889, "TaxiCarrie", 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_889))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_889, fLocal_969);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_STAND_STILL(0, 2500);
		TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_942, 1f, 0, 0, 786603, -1082130432);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_889, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}











int func_141()//Position - 0x4F73
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_886))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MOVE_DUCK_FOR_COVER"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_895, 1000);
		return 0;
	}
	return 1;
}

void func_142()//Position - 0x4FA9
{
	STREAMING::REQUEST_MODEL(iLocal_886);
	STREAMING::REQUEST_ANIM_DICT("MOVE_DUCK_FOR_COVER");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_979);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_995);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_1011);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_1027);
}



int func_145()//Position - 0x50CC
{
	if (GlobalFunc_8928(&Local_422, 20) > 2f)
	{
		if (!Local_422.f_142)
		{
			func_166(&Local_422, &Local_852, (MISC::GET_GAME_TIMER() - iLocal_974) > 15000, 0);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_422.f_4, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_422.f_4, Local_1043, Local_1046, fLocal_1049, 0, 1, 0))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_422.f_4, 5f, 1, 0);
				return 1;
			}
		}
		GlobalFunc_10365(&uLocal_44, Local_852.f_3, 0, 0, 1, 1, 1);
		GlobalFunc_4751(&Local_422, &(Local_422.f_43));
		if (!iLocal_902)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_852.f_3) && IntToFloat((MISC::GET_GAME_TIMER() - iLocal_974)) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(120, "txm_fc_h1_"))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_852.f_2, Local_852.f_3, Local_954, 28f, 0, Local_852.f_1, iLocal_1122, 13.75f, -1f);
					iLocal_902 = 1;
				}
			}
		}
	}
	return 0;
}





















void func_166(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x5F4B
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_2, PLAYER::PLAYER_PED_ID(), 0))
		{
			func_333(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_333(uParam0, "Followee died", 13);
	}
	if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0)) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
	{
		TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		PED::SET_PED_KEEP_TASK(uParam1->f_2, 1);
		func_333(uParam0, "Player went wanted", 4);
	}
	func_175(uParam0, uParam1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam3)
		{
			if (func_174(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_173(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, 1), func_172(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_171(&(uParam1->f_3)))
			{
				GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3) < uParam1->f_15 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), 1)) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam1->f_3) < uParam1->f_16)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), 0))
			{
				func_333(uParam0, "Taxi shot up the car", 12);
			}
			if (GlobalFunc_8928(uParam0, 13) > 5f)
			{
				func_170(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3);
				uParam1->f_5 = ENTITY::GET_ENTITY_HEALTH(uParam1->f_3);
				uParam1->f_16 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam1->f_3);
			}
		}
		if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				GlobalFunc_9566(uParam0, 143, 0, 0, 0);
				func_333(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((GlobalFunc_4765(&(uParam0->f_409), ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), ENTITY::GET_ENTITY_COORDS(uParam1->f_3, 1), 0) == -1 && GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) >= 150f) && GlobalFunc_8928(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					GlobalFunc_8281(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
						{
							TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							PED::SET_PED_KEEP_TASK(uParam1->f_2, 1);
						}
						func_333(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						GlobalFunc_4766(uParam0, 6, 1);
					}
					else
					{
						GlobalFunc_4766(uParam0, 1, 1);
					}
					GlobalFunc_9566(uParam0, 13, 1, 0, 0);
				}
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				GlobalFunc_8281(uParam0, 8, 0, 0);
			}
			else if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				GlobalFunc_9566(uParam0, 143, 0, 0, 0);
				func_333(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_174(&(uParam1->f_3))) || (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) < 13f && func_171(&(uParam1->f_3)))) || (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) < func_172(&(uParam1->f_3)) && func_173(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || GlobalFunc_6588(uParam0, 21))
			{
				if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0->f_4, uParam1->f_3, 17) && GlobalFunc_8928(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					GlobalFunc_8281(uParam0, 8, 0, 0);
					if (!GlobalFunc_6588(uParam0, 21))
					{
						GlobalFunc_8281(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!GlobalFunc_111())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
							{
								TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								PED::SET_PED_KEEP_TASK(uParam1->f_2, 1);
							}
							func_333(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							GlobalFunc_4935();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						GlobalFunc_4766(uParam0, 3, 1);
					}
					else
					{
						GlobalFunc_4766(uParam0, 2, 1);
					}
					if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_9566(uParam0, 143, 0, 0, 0);
							GlobalFunc_4956();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
							{
								TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								PED::SET_PED_KEEP_TASK(uParam1->f_2, 1);
							}
							func_333(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							GlobalFunc_4935();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						GlobalFunc_9566(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam1->f_3);
				}
			}
		}
		else
		{
			if (GlobalFunc_6588(uParam0, 21))
			{
				GlobalFunc_6589(uParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					GlobalFunc_8281(uParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) < 150f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					GlobalFunc_8281(uParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					GlobalFunc_4766(uParam0, 8, 1);
					GlobalFunc_9566(uParam0, 13, 1, 0, 0);
					GlobalFunc_8281(uParam0, 8, 0, 0);
				}
			}
			else
			{
				if (uParam0->f_80 > uParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (GlobalFunc_8928(uParam0, 8) > 15f && !GlobalFunc_111())
					{
						GlobalFunc_4766(uParam0, 9, 1);
						GlobalFunc_9566(uParam0, 13, 1, 0, 0);
						GlobalFunc_8281(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}




void func_170(var uParam0, var uParam1, bool bParam2)//Position - 0x6693
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!GlobalFunc_111())
		{
			GlobalFunc_8926(uParam0, 0, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2))
			{
				TASK::TASK_VEHICLE_MISSION(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				PED::SET_PED_KEEP_TASK(uParam1->f_2, 1);
			}
			func_333(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			GlobalFunc_4935();
		}
	}
	else
	{
		GlobalFunc_8281(uParam0, 13, 0, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam1->f_3);
		GlobalFunc_4766(uParam0, 10, 1);
		GlobalFunc_8926(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_171(var uParam0)//Position - 0x674D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(*uParam0) || ENTITY::GET_ENTITY_SPEED(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_172(var uParam0)//Position - 0x677E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_173(var uParam0)//Position - 0x67BF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 4f && ENTITY::GET_ENTITY_SPEED(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_174(var uParam0)//Position - 0x67F5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_175(var uParam0, var uParam1)//Position - 0x681D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (GlobalFunc_4755(uParam0) == 13)
				{
					GlobalFunc_5105();
				}
			}
		}
		if (GlobalFunc_156(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (GlobalFunc_4755(uParam0) == 13)
				{
					GlobalFunc_5105();
				}
			}
		}
	}
}


void func_177(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)//Position - 0x68C4
{
	if (!GlobalFunc_111())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (GlobalFunc_2264(iParam0, Param1, 1) < fParam4)
			{
				if (func_179(uParam5))
				{
					GlobalFunc_4756(uParam5, iParam6, -1);
				}
			}
		}
	}
}


bool func_179(var uParam0)//Position - 0x691A
{
	return *uParam0 == 0;
}





int func_184(int iParam0, var uParam1)//Position - 0x6BD9
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), 0);
					if (HUD::DOES_BLIP_EXIST(uParam1))
					{
						HUD::REMOVE_BLIP(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}



int func_187(int iParam0, int iParam1)//Position - 0x6CA9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_188()//Position - 0x6CCA
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 402.42f, -1457.19f, 28.82f };
	Var3 = { -701.25f, -1080.29f, 12.29f };
	if (Var3.x <= Var0.x)
	{
		Local_963.x = Var3.x;
		Local_966.x = Var0.x;
	}
	else
	{
		Local_963.x = Var0.x;
		Local_966.x = Var3.x;
	}
	if (Var3.f_1 <= Var0.f_1)
	{
		Local_963.f_1 = Var3.f_1;
		Local_966.f_1 = Var0.f_1;
	}
	else
	{
		Local_963.f_1 = Var0.f_1;
		Local_966.f_1 = Var3.f_1;
	}
	Local_963 = { Local_963 - Vector(20f, 20f, 20f) };
	Local_966 = { Local_966 + Vector(20f, 20f, 20f) };
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(Local_963.x, Local_963.f_1, Local_966.x, Local_966.f_1);
}


int func_190()//Position - 0x6DB5
{
	GlobalFunc_8285();
	if (iLocal_1143 < 9 && iLocal_1143 > 2)
	{
		if (GlobalFunc_7945(iLocal_896))
		{
			iLocal_1143 = 9;
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (GlobalFunc_552(1, 1, 1))
			{
				iLocal_896 = MISC::GET_GAME_TIMER();
				GlobalFunc_9145(256, 0, 1);
				GlobalFunc_7559(&uLocal_1081);
				GlobalFunc_4749(&Local_1051, 2, 0);
				if (func_196(&Local_852, Local_933, fLocal_972))
				{
					PATHFIND::SET_ROADS_IN_AREA(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					GlobalFunc_4795(&Local_422, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					GlobalFunc_9566(&Local_422, 138, 1, 0, 0);
					iLocal_1143 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_8928(&Local_422, 19) > 3f)
			{
				if (!PED::IS_PED_INJURED(Local_852.f_2))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852.f_2, 1);
					TASK::CLEAR_PED_TASKS(Local_852.f_2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
					{
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_ENTER_VEHICLE(0, Local_852.f_3, 20000, -1, 1f, 1, 0);
						TASK::TASK_PLAY_ANIM(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(Local_852.f_2, uLocal_413);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_852.f_3, 1);
					}
				}
				PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_422.f_17);
				CAM::SET_CAM_COORD(Local_422, func_195(0));
				CAM::SET_CAM_ROT(Local_422, func_194(0), 2);
				CAM::SET_CAM_FOV(Local_422, 17.2f);
				CAM::SHAKE_CAM(Local_422, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(Local_422, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				GlobalFunc_8281(&Local_422, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			uLocal_421 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			CAM::SET_CAM_COORD(uLocal_421, func_195(4));
			CAM::SET_CAM_ROT(uLocal_421, func_194(0), 2);
			CAM::SET_CAM_FOV(uLocal_421, 17.2f);
			CAM::SHAKE_CAM(uLocal_421, "HAND_SHAKE", 0.1f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_421, Local_422, 6000, 1, 1);
			GlobalFunc_8281(&Local_422, 19, 0, 0);
			iLocal_1143 = 3;
			break;
		
		case 3:
			if (GlobalFunc_8928(&Local_422, 19) > 7.85f && !iLocal_911)
			{
				if (GlobalFunc_4755(&Local_422) > 10)
				{
					func_191();
				}
				iLocal_911 = 1;
			}
			if (GlobalFunc_8928(&Local_422, 19) > 8f && iLocal_911)
			{
				CAM::SET_CAM_COORD(Local_422, func_195(2));
				CAM::POINT_CAM_AT_ENTITY(Local_422, Local_852.f_3, 0f, 0f, 0f, 1);
				CAM::SET_CAM_FOV(Local_422, 35f);
				CAM::SHAKE_CAM(Local_422, "HAND_SHAKE", 0.2f);
				CAM::SET_CAM_ACTIVE(Local_422, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				GlobalFunc_8281(&Local_422, 19, 0, 0);
				iLocal_1143 = 4;
			}
			break;
		
		case 4:
			CAM::SET_CAM_COORD(uLocal_421, func_195(2));
			CAM::POINT_CAM_AT_ENTITY(uLocal_421, Local_852.f_3, 0f, 0f, 0f, 1);
			CAM::SET_CAM_FOV(uLocal_421, 45f);
			CAM::SHAKE_CAM(uLocal_421, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_421, Local_422, 10000, 1, 1);
			GlobalFunc_8281(&Local_422, 19, 0, 0);
			iLocal_1143 = 11;
			break;
		
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2) && !ENTITY::IS_ENTITY_DEAD(Local_852.f_3))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_852.f_2, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_852.f_2, Local_852.f_3, -1);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_852.f_3, 10f);
				GlobalFunc_6715(&(Local_852.f_27));
				GlobalFunc_8281(&Local_422, 19, 2f, 0);
				iLocal_1143 = 11;
				if (!bLocal_900)
				{
					func_191();
				}
			}
			break;
		
		case 11:
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (GlobalFunc_8928(&Local_422, 19) > 4f)
			{
				CAM::DO_SCREEN_FADE_IN(800);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				GlobalFunc_6715(&(Local_852.f_27));
				CAM::DESTROY_CAM(Local_422, 0);
				CAM::DESTROY_CAM(uLocal_421, 0);
				GlobalFunc_9144(1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				GlobalFunc_6589(&Local_422, 19, 0);
				iLocal_1143 = 12;
			}
			else if (GlobalFunc_8928(&Local_422, 19) > 3.7f)
			{
				if (GlobalFunc_1720())
				{
					if (!iLocal_913)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_913 = 1;
					}
				}
			}
			break;
		
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_191()//Position - 0x7271
{
	bLocal_900 = true;
	if (!PED::IS_PED_INJURED(Local_852.f_2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_852.f_3, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_852.f_2, Local_852.f_3, 0))
			{
				ENTITY::SET_ENTITY_COORDS(Local_852.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_852.f_2, Local_852.f_30);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 1, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 6, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 17, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 3, 0);
				PED::SET_PED_SEEING_RANGE(Local_852.f_2, 500f);
				PED::SET_PED_HEARING_RANGE(Local_852.f_2, 500f);
				PED::SET_PED_ID_RANGE(Local_852.f_2, 500f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852.f_2, 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_852.f_3, 500);
				ENTITY::SET_ENTITY_LOD_DIST(Local_852.f_2, 500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_852.f_3, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_852.f_2, 1);
				if (!HUD::DOES_BLIP_EXIST(Local_852.f_4))
				{
					Local_852.f_4 = GlobalFunc_6783(Local_852.f_3, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852.f_2, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_852.f_3, 120, "txm_fc_h1_", 1);
				VEHICLE::SET_PLAYBACK_SPEED(Local_852.f_3, 0.8f);
				iLocal_974 = MISC::GET_GAME_TIMER();
			}
		}
	}
}



Vector3 func_194(int iParam0)//Position - 0x7463
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		
		case 1:
			Var0 = { 4.2328f, 0f, 165.0072f };
			break;
		
		case 2:
			Var0 = { -0.3221f, 0f, 68.7635f };
			break;
		
		case 3:
			Var0 = { -0.3614f, 0f, -145.1533f };
			break;
		
		case 4:
			Var0 = { -5.4284f, 0f, 1.8065f };
			break;
		
		case 5:
			Var0 = { 1.2038f, 0f, 68.7635f };
			break;
		
		case 6:
			Var0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return Var0;
}

Vector3 func_195(int iParam0)//Position - 0x7522
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 495.4f, -1416.8f, 30.2f };
			break;
		
		case 1:
			Var0 = { 429.6911f, -1385.415f, 29.7266f };
			break;
		
		case 2:
			Var0 = { 417.9f, -1419.4f, 30.6f };
			break;
		
		case 3:
			Var0 = { 426.754f, -1386.51f, 29.6201f };
			break;
		
		case 4:
			Var0 = { 493.7f, -1416.9f, 30.2f };
			break;
		
		case 5:
			Var0 = { 450.0146f, -1414.523f, 34.4507f };
			break;
		
		case 6:
			Var0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return Var0;
}

int func_196(var uParam0, struct<3> Param1, float fParam4)//Position - 0x75F9
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = PED::CREATE_PED(26, *uParam0, Param1, fParam4, 1, 1);
	}
	GlobalFunc_173(&(Local_422.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_2, "TaxiJames");
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_889))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_889, 20, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uParam0->f_2, 11, 0, 1, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_2, uParam0->f_30);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 6, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 17, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_2, 3, 0);
		PED::SET_PED_SEEING_RANGE(uParam0->f_2, 300f);
		PED::SET_PED_HEARING_RANGE(uParam0->f_2, 300f);
		PED::SET_PED_ID_RANGE(uParam0->f_2, 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, 1);
	}
	return 1;
}

int func_197(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x7707
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_209(uParam0))
		{
			GlobalFunc_4751(uParam0, &(uParam0->f_43));
			GlobalFunc_10602(uParam0);
			GlobalFunc_10601(uParam0);
			GlobalFunc_10826(uParam0);
			func_202(uParam0, fParam2, fParam3);
			func_200(uParam0);
			return GlobalFunc_8931(uParam0, iParam1);
		}
	}
	return 0;
}



void func_200(var uParam0)//Position - 0x788F
{
	float fVar0;
	
	if ((GlobalFunc_4746(uParam0) && GlobalFunc_747(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_96) >= 10000)
		{
			fVar0 = GlobalFunc_5683(uParam0->f_17, 1);
			if (fVar0 > fLocal_94)
			{
				iLocal_95++;
			}
			else
			{
				iLocal_95 = 0;
			}
			fLocal_94 = fVar0;
			iLocal_96 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_95 >= 2 && !GlobalFunc_111())
		{
			GlobalFunc_9566(uParam0, 136, 1, 0, 1);
			iLocal_95 = 0;
		}
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() % 4000) < 50)
		{
			if (!GlobalFunc_4746(uParam0))
			{
			}
			if (!GlobalFunc_747(uParam0->f_81, 67108864))
			{
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (iLocal_95 > 0)
			{
				iLocal_95 = 0;
			}
		}
	}
}


void func_202(var uParam0, float fParam1, float fParam2)//Position - 0x799A
{
	if (GlobalFunc_4746(uParam0) && GlobalFunc_747(uParam0->f_44, 4))
	{
		if ((VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4) || ENTITY::GET_ENTITY_SPEED(uParam0->f_4) < 3f) && GlobalFunc_4752(uParam0))
		{
			if (!GlobalFunc_6588(uParam0, 2))
			{
				GlobalFunc_8925(uParam0, 2);
			}
			else if (GlobalFunc_4746(uParam0))
			{
				if (GlobalFunc_8928(uParam0, 2) > fParam1 && !GlobalFunc_6588(uParam0, 14))
				{
					if (GlobalFunc_4742())
					{
						GlobalFunc_9566(uParam0, 48, 1, 0, 0);
					}
					else
					{
						GlobalFunc_9566(uParam0, 48, 1, 0, 0);
					}
					GlobalFunc_8281(uParam0, 2, 0, 0);
					if (GlobalFunc_6588(uParam0, 10))
					{
						GlobalFunc_8281(uParam0, 10, 0, 0);
					}
				}
				if (!GlobalFunc_6588(uParam0, 3))
				{
					GlobalFunc_8281(uParam0, 3, 0, 0);
				}
				else if (GlobalFunc_8928(uParam0, 3) >= fParam2)
				{
					GlobalFunc_6589(uParam0, 3, 0);
					func_333(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (GlobalFunc_6588(uParam0, 2))
			{
				GlobalFunc_6589(uParam0, 2, 0);
			}
			if (GlobalFunc_6588(uParam0, 3))
			{
				GlobalFunc_6589(uParam0, 3, 0);
			}
		}
	}
}







int func_209(var uParam0)//Position - 0x7DAF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_333(uParam0, "Passenger left car.", 9);
			}
			else if (GlobalFunc_10900(uParam0))
			{
				if (GlobalFunc_663("TAXI_OBJ_PICKUP", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((MISC::GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_210(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_210(var uParam0, bool bParam1)//Position - 0x7E3E
{
	func_218(uParam0, uParam0->f_3);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!GlobalFunc_6588(uParam0, 14))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_619(1);
				}
				GlobalFunc_4766(uParam0, 11, 1);
				GlobalFunc_10825(uParam0, 1);
				GlobalFunc_8281(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!GlobalFunc_4746(uParam0))
				{
					if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (GlobalFunc_8928(uParam0, 15) > 5f)
						{
							GlobalFunc_8281(uParam0, 15, 0f, 1);
						}
					}
					if (GlobalFunc_8928(uParam0, 14) > 20f)
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (GlobalFunc_8928(uParam0, 14) > 20f)
				{
					if (GlobalFunc_5682(uParam0->f_4, 1) > 40f)
					{
						func_333(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_333(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}








void func_218(var uParam0, int iParam1)//Position - 0x8154
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_333(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}





void func_223(var uParam0, var uParam1)//Position - 0x8264
{
	func_118(uParam0, uParam1->f_2, 1, 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1->f_3, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!GlobalFunc_111())
			{
				func_333(&Local_422, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				GlobalFunc_4935();
			}
		}
	}
	else if (!GlobalFunc_111())
	{
		func_333(&Local_422, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		GlobalFunc_4935();
	}
}

int func_224(var uParam0, struct<3> Param1, float fParam4)//Position - 0x82CE
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = VEHICLE::CREATE_VEHICLE(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(uParam0->f_1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1);
	uLocal_416[0] = VEHICLE::CREATE_VEHICLE(iLocal_887, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1);
	uLocal_416[1] = VEHICLE::CREATE_VEHICLE(iLocal_887, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1);
	uLocal_416[2] = VEHICLE::CREATE_VEHICLE(iLocal_888, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_416[0], 2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_416[1], 2);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_416[2], 2);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_416[0], "BRAVEST");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_416[1], "BOLDEST");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_416[2], "BADDEST");
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_3, 800);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_3, "PUSSYWAG");
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(uParam0->f_3, 1);
	VEHICLE::SET_VEHICLE_ALARM(uParam0->f_3, 1);
	uParam0->f_15 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_3);
	uParam0->f_31 = 1;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_3, 1);
	GlobalFunc_6583(Local_422.f_14, 1, 1114636288);
	GlobalFunc_6583(Local_957, 1, 15f);
	GlobalFunc_6583(Local_960, 1, 15f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_3, 2);
	return 1;
}

int func_225()//Position - 0x843F
{
	if (!STREAMING::HAS_MODEL_LOADED(Local_852))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_895, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_852.f_1))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_895, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_887))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_895, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_888))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_895, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(120, "txm_fc_h1_"))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_895, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(0, "taxi_oj_fc3"))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_895, 1000);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_975))
	{
		GlobalFunc_2654("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_895, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_226(var uParam0, var uParam1)//Position - 0x852D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!GlobalFunc_6588(uParam0, 14))
			{
				if (HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) > 0)
				{
					HUD::SET_BLIP_ALPHA(*uParam1, 0);
				}
				GlobalFunc_10597(uParam0, 0, 0);
				GlobalFunc_9566(uParam0, 2, 1, 0, 0);
			}
			else if (GlobalFunc_8928(uParam0, 14) > 20f)
			{
				func_333(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (GlobalFunc_6588(uParam0, 14))
			{
				GlobalFunc_8281(uParam0, 2, 0, 0);
				GlobalFunc_7561(uParam0);
			}
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
			if ((HUD::DOES_BLIP_EXIST(*uParam1) && HUD::GET_BLIP_ALPHA(*uParam1) < 255) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) < 1)
			{
				HUD::SET_BLIP_ALPHA(*uParam1, 255);
				HUD::SET_BLIP_ROUTE(*uParam1, 1);
			}
		}
	}
}




void func_230()//Position - 0x8712
{
	GlobalFunc_6594(&(Local_422.f_55), 2);
	GlobalFunc_6594(&(Local_422.f_55), 4);
	GlobalFunc_6594(&(Local_422.f_55), 16);
	GlobalFunc_6594(&(Local_422.f_55), 64);
	GlobalFunc_6594(&(Local_422.f_55), 256);
	GlobalFunc_6594(&(Local_422.f_55), 512);
	GlobalFunc_6594(&(Local_422.f_55), 1024);
	GlobalFunc_6594(&(Local_422.f_55), 2048);
	GlobalFunc_6594(&(Local_422.f_55), 1073741824);
	GlobalFunc_6594(&(Local_422.f_55), 8388608);
	GlobalFunc_6594(&(Local_422.f_55), 33554432);
	GlobalFunc_6594(&(Local_422.f_55), 16777216);
	GlobalFunc_6594(&(Local_422.f_55), 4096);
	GlobalFunc_6594(&(Local_422.f_100), 8);
	GlobalFunc_6594(&(Local_422.f_100), 2048);
	GlobalFunc_6594(&(Local_422.f_100), 256);
	GlobalFunc_6594(&uLocal_1124, 2);
}






int func_236(var uParam0)//Position - 0x88D4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (MISC::GET_GAME_TIMER() - iLocal_88) > 500) || PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_237()//Position - 0x8927
{
	STREAMING::REQUEST_MODEL(Local_852);
	STREAMING::REQUEST_MODEL(Local_852.f_1);
	STREAMING::REQUEST_MODEL(iLocal_887);
	STREAMING::REQUEST_MODEL(iLocal_888);
	VEHICLE::REQUEST_VEHICLE_RECORDING(120, "txm_fc_h1_");
	VEHICLE::REQUEST_VEHICLE_RECORDING(0, "taxi_oj_fc3");
	TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_975);
	STREAMING::REQUEST_ANIM_DICT("veh@truck@ds@base");
}

int func_238(var uParam0, bool bParam1, float fParam2)//Position - 0x896F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((MISC::GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_210(uParam0, 1);
			if (GlobalFunc_6582())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_86 = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_255(uParam0);
			if (uParam0->f_48 > 1)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (GlobalFunc_6588(uParam0, 14))
			{
				GlobalFunc_7561(uParam0);
				GlobalFunc_10825(uParam0, 0);
			}
			if (GlobalFunc_6588(uParam0, 9))
			{
				GlobalFunc_6589(uParam0, 9, 0);
				HUD::CLEAR_PRINTS();
				if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
				{
					HUD::SET_BLIP_ALPHA(uParam0->f_8, 255);
					HUD::SET_BLIP_ROUTE(uParam0->f_8, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
			{
				fVar4 = ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && GlobalFunc_6592(uParam0, uParam0->f_3) > 300f)
				{
					func_333(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && GlobalFunc_713(uParam0->f_3, uParam0->f_11, 1) <= 28f) && GlobalFunc_713(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_251(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (GlobalFunc_9570(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_93)
							{
								uParam0->f_7 = GlobalFunc_4793(uParam0->f_4, uParam0->f_3);
								iVar0 = GlobalFunc_4764(uParam0, &iVar1);
								if (!ENTITY::IS_ENTITY_DEAD(iVar0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iVar2);
									}
									else
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!ENTITY::IS_ENTITY_DEAD(iVar0))
											{
												TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							TASK::CLEAR_PED_TASKS(uParam0->f_3);
							TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!GlobalFunc_4752(uParam0))
							{
								TASK::CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && GlobalFunc_6592(uParam0, uParam0->f_3) > 8f)
							{
								TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_93)
						{
							if (GlobalFunc_156(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!GlobalFunc_4763(uParam0, 1))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!GlobalFunc_4767(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_333(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_244(uParam0);
						if (GlobalFunc_6592(uParam0, uParam0->f_3) < fVar4 || GlobalFunc_6582())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_240(uParam0))
								{
									GlobalFunc_4761(uParam0);
									iLocal_88 = MISC::GET_GAME_TIMER();
									PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 26, 1);
									GlobalFunc_6589(uParam0, 5, 0);
									HUD::CLEAR_GPS_FLAGS();
									STATS::STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}


int func_240(var uParam0)//Position - 0x8EA3
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	GlobalFunc_2654("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		GlobalFunc_8285();
	}
	if (bLocal_93)
	{
		iLocal_85 = 10;
	}
	if ((iLocal_85 < 7 && iLocal_85 > 0) && !bLocal_93)
	{
		if (GlobalFunc_7945(iLocal_87))
		{
			iLocal_85 = 7;
		}
	}
	switch (iLocal_85)
	{
		case 0:
			if (GlobalFunc_8283(uParam0, 0, 1084227584) && GlobalFunc_552(1, 1, 1))
			{
				if (GlobalFunc_4763(uParam0, 1))
				{
					iLocal_87 = MISC::GET_GAME_TIMER();
					SYSTEM::SETTIMERA(0);
					iLocal_85 = 1;
				}
				else
				{
					func_333(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 500)
			{
				uParam0->f_7 = GlobalFunc_4793(uParam0->f_4, uParam0->f_3);
				iVar9 = GlobalFunc_4764(uParam0, &iVar10);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, iVar11);
					}
					else
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(iVar9))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iVar9, 0, 4096);
						}
					}
				}
				iLocal_85 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var6 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var6 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = GlobalFunc_4765(&(uParam0->f_409), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				GlobalFunc_9145(0, 0, 1);
				MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 3f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 25f, 0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_5105();
				GlobalFunc_8926(uParam0, 0, 0);
				Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var6) };
				ENTITY::SET_ENTITY_COORDS(uParam0->f_3, Var13, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_3, GlobalFunc_6619(uParam0));
				GlobalFunc_4795(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				CAM::SET_CAM_COORD(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var0));
				CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, Var3, 1);
				CAM::SET_CAM_ACTIVE(*uParam0, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, 0, 0);
				TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_85 = 5;
			}
			break;
		
		case 5:
			GlobalFunc_2654("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (SYSTEM::TIMERA() > 3500)
			{
				iLocal_85 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					PED::SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(uParam0->f_4, GlobalFunc_4794(uParam0->f_7), 1);
				}
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(*uParam0, 0);
				CAM::DESTROY_CAM(uParam0->f_1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::DO_SCREEN_FADE_IN(800);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_5105();
				GlobalFunc_8926(uParam0, 0, 0);
				iLocal_85 = 8;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				GlobalFunc_9144(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(*uParam0, 0);
			CAM::DESTROY_CAM(uParam0->f_1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			GlobalFunc_9144(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}




void func_244(var uParam0)//Position - 0x9463
{
	var uVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (GlobalFunc_5682(uParam0->f_3, 1) > 30f || GlobalFunc_9569(uParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK::TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
					func_333(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}







int func_251(var uParam0, float fParam1)//Position - 0x98A7
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar18) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, Var6) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x6A3E157475DBFCD9(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_86)
	{
		case 0:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
			iLocal_86 = 1;
			break;
		
		case 1:
			if ((GlobalFunc_156(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && MISC::ABSF((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_86 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::SET_SEQUENCE_TO_REPEAT(uParam0->f_243, 1);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!GlobalFunc_747(uParam0->f_44, 128))
				{
					GlobalFunc_9566(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				GlobalFunc_6604(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_3);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK::TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_86 = 3;
			break;
		
		case 3:
			iLocal_86 = 0;
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}




void func_255(var uParam0)//Position - 0x9DC0
{
	func_218(uParam0, uParam0->f_3);
	if (GlobalFunc_4752(uParam0))
	{
		if (GlobalFunc_6588(uParam0, 14))
		{
			GlobalFunc_7561(uParam0);
			if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!GlobalFunc_6588(uParam0, 9))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_8))
		{
			HUD::SET_BLIP_ALPHA(uParam0->f_8, 0);
			HUD::SET_BLIP_ROUTE(uParam0->f_8, 0);
		}
		GlobalFunc_8281(uParam0, 9, 0, 0);
		GlobalFunc_164("TAXI_OBJ_POL", 7500, 1);
	}
}



int func_258(var uParam0, int iParam1)//Position - 0x9E7C
{
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	GlobalFunc_2656(12);
	if (GlobalFunc_747(uParam0->f_44, 8))
	{
		if (!GlobalFunc_747(uParam0->f_44, 128))
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_747(uParam0->f_44, 256))
			{
				GlobalFunc_6594(&(uParam0->f_44), 256);
			}
			if (GlobalFunc_747(uParam0->f_44, 256) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_9566(uParam0, 135, 1, 0, 1);
				GlobalFunc_6594(&(uParam0->f_44), 128);
			}
		}
	}
	if (!GlobalFunc_7562(uParam0, iParam1))
	{
		if (GlobalFunc_5682(uParam0->f_3, 1) < 35f)
		{
			if (!GlobalFunc_747(uParam0->f_44, 8))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER::PLAYER_PED_ID(), 0);
				GlobalFunc_9566(uParam0, 133, 1, 0, 1);
				GlobalFunc_6594(&(uParam0->f_44), 8);
			}
		}
		if ((PED::IS_PED_INJURED(uParam0->f_3) || PED::IS_PED_FLEEING(uParam0->f_3)) || GlobalFunc_5682(uParam0->f_3, 1) > 400f)
		{
			func_333(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 1);
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == uParam0->f_2)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			GlobalFunc_6593(uParam0);
			GlobalFunc_6585(2, 0);
			bLocal_93 = true;
			GlobalFunc_7731(&uLocal_89);
			return 1;
		}
		else
		{
			func_333(uParam0, "No Taxi", 21);
			GlobalFunc_159("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}








void func_266()//Position - 0xA750
{
	Local_342 = 0;
	func_283(43779/*func_285*/, 43754/*func_284*/, 1);
	func_283(43515/*func_281*/, 43491/*func_280*/, 1);
	func_283(43430/*func_279*/, 43405/*func_278*/, 1);
	func_283(43334/*func_277*/, 43310/*func_276*/, 1);
	func_283(43200/*func_275*/, 43179/*func_274*/, 1);
	func_283(43126/*func_272*/, 43101/*func_271*/, 1);
	func_283(42959/*func_268*/, 42935/*func_267*/, 1);
}

int func_267(var uParam0, var uParam1)//Position - 0xA7B7
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 1);
	return 1;
}




int func_271(var uParam0, var uParam1)//Position - 0xA85D
{
	uParam1 = uParam1;
	func_333(uParam0, "Didn't lose police in time.", 9);
	return 1;
}





int func_276(var uParam0, var uParam1)//Position - 0xA92E
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Is Flipped", 0);
	return 1;
}


int func_278(var uParam0, var uParam1)//Position - 0xA98D
{
	uParam1 = uParam1;
	func_333(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}


int func_280(var uParam0, var uParam1)//Position - 0xA9E3
{
	uParam1 = uParam1;
	func_333(uParam0, "Taxi Not Driveable", 0);
	return 1;
}



void func_283(int iParam0, int iParam1, bool bParam2)//Position - 0xAA80
{
	if (Local_342 >= 16)
	{
		Local_342 = 16;
		return;
	}
	Local_342.f_1[Local_342 /*4*/] = 0;
	GlobalFunc_812(&(Local_342.f_1[Local_342 /*4*/]), 1);
	if (bParam2)
	{
		GlobalFunc_812(&(Local_342.f_1[Local_342 /*4*/]), 2);
	}
	Local_342.f_1[Local_342 /*4*/].f_2 = iParam0;
	Local_342.f_1[Local_342 /*4*/].f_3 = iParam1;
	Local_342++;
}

int func_284(var uParam0, var uParam1)//Position - 0xAAEA
{
	uParam1 = uParam1;
	func_333(uParam0, "Passenger injured.", 15);
	return 1;
}


void func_286()//Position - 0xAB42
{
	Local_189[5 /*10*/] = 5;
	Local_189[5 /*10*/].f_1 = 0;
	Local_189[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_189[5 /*10*/].f_9 = 78;
	Local_189[0 /*10*/] = 5;
	Local_189[0 /*10*/].f_1 = 0;
	Local_189[0 /*10*/].f_2 = "TX_AIR_N";
	Local_189[0 /*10*/].f_9 = 76;
	Local_189[2 /*10*/] = 5;
	Local_189[2 /*10*/].f_1 = 0;
	Local_189[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_189[2 /*10*/].f_9 = 21;
	Local_189[1 /*10*/] = 10;
	Local_189[1 /*10*/].f_1 = 0;
	Local_189[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_189[1 /*10*/].f_9 = 71;
	Local_189[4 /*10*/] = 10;
	Local_189[4 /*10*/].f_1 = 0;
	Local_189[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_189[4 /*10*/].f_9 = 79;
	Local_189[6 /*10*/] = 10;
	Local_189[6 /*10*/].f_1 = 0;
	Local_189[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_189[6 /*10*/].f_9 = 80;
	Local_189[9 /*10*/] = 15;
	Local_189[9 /*10*/].f_1 = 0;
	Local_189[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_189[9 /*10*/].f_9 = 82;
	Local_189[8 /*10*/] = 15;
	Local_189[8 /*10*/].f_1 = 0;
	Local_189[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_189[8 /*10*/].f_9 = 72;
	Local_189[7 /*10*/] = 15;
	Local_189[7 /*10*/].f_1 = 0;
	Local_189[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_189[7 /*10*/].f_9 = 74;
	Local_189[11 /*10*/] = 5;
	Local_189[11 /*10*/].f_1 = 0;
	Local_189[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_189[11 /*10*/].f_9 = 70;
	Local_189[12 /*10*/] = 5;
	Local_189[12 /*10*/].f_1 = 0;
	Local_189[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_189[12 /*10*/].f_9 = 69;
	Local_189[13 /*10*/] = 10;
	Local_189[13 /*10*/].f_1 = 0;
	Local_189[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_189[13 /*10*/].f_9 = 67;
	Local_189[14 /*10*/] = 10;
	Local_189[14 /*10*/].f_1 = 0;
	Local_189[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_189[14 /*10*/].f_9 = 75;
}

int func_287()//Position - 0xAD1A
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_885))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!GlobalFunc_6601(&iLocal_895, 0))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_895, 1000);
		return 0;
	}
	return 1;
}







void func_294()//Position - 0xB26C
{
	STREAMING::REQUEST_MODEL(iLocal_885);
	GlobalFunc_7563(0);
	uLocal_1131 = GlobalFunc_1455();
	STREAMING::REQUEST_ANIM_DICT("gestures@m@standing@casual");
}



void func_297(var uParam0, int iParam1, bool bParam2)//Position - 0xB2FB
{
	if (uParam0->f_411 == 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (GlobalFunc_8928(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						GlobalFunc_9566(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						GlobalFunc_9566(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					GlobalFunc_8281(uParam0, 10, 0f, 1);
				}
			}
			else if (GlobalFunc_8928(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					GlobalFunc_9566(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				GlobalFunc_8281(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (GlobalFunc_8928(uParam0, 10) > 30f)
		{
			if (!GlobalFunc_111())
			{
				if (uParam0->f_112)
				{
					GlobalFunc_9566(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				GlobalFunc_8281(uParam0, 10, 0f, 1);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 64))
	{
		if (!GlobalFunc_226(&(Local_189[5 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[5 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[5 /*10*/].f_6)) > 6f)
		{
			if (func_320(uParam0))
			{
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[5 /*10*/].f_9, 1, 0, 0);
				}
				GlobalFunc_4777(uParam0, 1);
				func_317(5, uParam0);
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 1))
	{
		if (!GlobalFunc_226(&(Local_189[0 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[0 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[0 /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(0, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 2))
	{
		if (!GlobalFunc_226(&(Local_189[1 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[1 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[1 /*10*/].f_6)) > 5f)
		{
			if (func_314(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(1, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 2048))
	{
		if (!GlobalFunc_226(&(Local_189[8 /*10*/].f_6)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
				GlobalFunc_7731(&(Local_189[8 /*10*/].f_6));
			}
		}
		else if (GlobalFunc_4981(&(Local_189[8 /*10*/].f_6)) > 7f || Local_189[8 /*10*/].f_1 == 0)
		{
			if (func_313(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(8, uParam0);
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 128))
	{
		if (!GlobalFunc_226(&(Local_189[6 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[6 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[6 /*10*/].f_6)) > 5f)
		{
			if (func_312(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(6, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 32))
	{
		if (!GlobalFunc_226(&(Local_189[4 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[4 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[4 /*10*/].f_6)) > 4f)
		{
			if (func_311(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(4, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 256))
	{
		if (!GlobalFunc_226(&(Local_189[7 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[7 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[7 /*10*/].f_6)) > 5f || Local_189[7 /*10*/].f_1 == 0)
		{
			if (func_310(uParam0))
			{
				func_317(7, uParam0);
				GlobalFunc_4777(uParam0, 1);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[7 /*10*/].f_9, 1, 0, 1);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 8))
	{
		if (!GlobalFunc_226(&(Local_189[9 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[9 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[9 /*10*/].f_6)) <= 7f)
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
		}
		else if (GlobalFunc_4981(&(Local_189[9 /*10*/].f_6)) > 7f || Local_189[9 /*10*/].f_1 == 0)
		{
			if (GlobalFunc_4776(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(9, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 16384))
	{
		if (!GlobalFunc_226(&(Local_189[13 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[13 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[13 /*10*/].f_6)) > 10f)
		{
			if (func_303(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(13, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 32768))
	{
		if (!GlobalFunc_226(&(Local_189[14 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[14 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[14 /*10*/].f_6)) > 7f)
		{
			if (func_302(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(14, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 4096))
	{
		if (!GlobalFunc_226(&(Local_189[11 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[11 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[11 /*10*/].f_6)) > 8f)
		{
			if (func_301(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(11, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 8192))
	{
		if (!GlobalFunc_226(&(Local_189[12 /*10*/].f_6)))
		{
			GlobalFunc_7731(&(Local_189[12 /*10*/].f_6));
		}
		else if (GlobalFunc_4981(&(Local_189[12 /*10*/].f_6)) > 5f)
		{
			if (func_300(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_317(12, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_316(uParam0);
			}
		}
	}
	if (GlobalFunc_747(uParam0->f_100, 4))
	{
		if (!GlobalFunc_226(&(Local_189[2 /*10*/].f_6)))
		{
			GlobalFunc_6844(&(Local_189[2 /*10*/].f_6), 0f);
		}
		else if (GlobalFunc_4981(&(Local_189[2 /*10*/].f_6)) > 5f)
		{
			if (func_298(uParam0))
			{
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[2 /*10*/].f_9, 1, 0, 0);
				}
				GlobalFunc_4777(uParam0, 1);
				func_317(2, uParam0);
				func_316(uParam0);
			}
		}
	}
}

int func_298(var uParam0)//Position - 0xBAF5
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(uParam0->f_2))
	{
		if ((!PED::IS_PED_STOPPED(uParam0->f_2) && !GlobalFunc_226(&(Local_189[0 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[1 /*10*/].f_3)))
		{
			if (!GlobalFunc_226(&(Local_189[2 /*10*/].f_3)))
			{
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					GlobalFunc_7731(&(Local_189[2 /*10*/].f_3));
				}
			}
			else if (GlobalFunc_4981(&(Local_189[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = ENTITY::GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				GlobalFunc_235(&(Local_189[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[2 /*10*/].f_3));
		}
	}
	return 0;
}


int func_300(var uParam0)//Position - 0xBBF2
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !GlobalFunc_226(&(Local_189[0 /*10*/].f_3)))
		{
			if (!GlobalFunc_226(&(Local_189[12 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[12 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[12 /*10*/].f_3)) > 5f)
			{
				GlobalFunc_235(&(Local_189[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_301(var uParam0)//Position - 0xBC81
{
	struct<3> Var0;
	
	if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !GlobalFunc_226(&(Local_189[0 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[1 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[5 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[9 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[7 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[8 /*10*/].f_3)))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 2.5f && !GlobalFunc_226(&(Local_189[0 /*10*/].f_3)))
		{
			if (!GlobalFunc_226(&(Local_189[11 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[11 /*10*/].f_3));
				uLocal_341 = Var0.x;
			}
			else if (GlobalFunc_4981(&(Local_189[11 /*10*/].f_3)) < 1.5f && (MISC::ABSF(uLocal_341) - MISC::ABSF(Var0.x)) < 0f)
			{
				GlobalFunc_235(&(Local_189[11 /*10*/].f_3));
				return 1;
			}
			else if (GlobalFunc_4981(&(Local_189[11 /*10*/].f_3)) >= 1.5f)
			{
				GlobalFunc_235(&(Local_189[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_302(var uParam0)//Position - 0xBDB1
{
	if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !GlobalFunc_226(&(Local_189[0 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[8 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[5 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[9 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[7 /*10*/].f_3)))
	{
		if (!GlobalFunc_226(&(Local_189[14 /*10*/].f_3)))
		{
			uParam0->f_5 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_4, 1), 10f, 0, 260);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f && GlobalFunc_156(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5) && !VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1)))
				{
					GlobalFunc_7731(&(Local_189[14 /*10*/].f_3));
				}
			}
		}
		else if ((GlobalFunc_4981(&(Local_189[14 /*10*/].f_3)) < 1.5f && GlobalFunc_156(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			GlobalFunc_235(&(Local_189[14 /*10*/].f_3));
			return 1;
		}
		else if (GlobalFunc_4981(&(Local_189[14 /*10*/].f_3)) >= 1.5f)
		{
			GlobalFunc_235(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			GlobalFunc_235(&(Local_189[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_303(var uParam0)//Position - 0xBF34
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !GlobalFunc_226(&(Local_189[9 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[7 /*10*/].f_3))) && !GlobalFunc_226(&(Local_189[4 /*10*/].f_3)))
	{
		if (!GlobalFunc_7564(uParam0->f_4) && ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!GlobalFunc_226(&(Local_189[13 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[13 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[13 /*10*/].f_3)) > 5f)
			{
				GlobalFunc_235(&(Local_189[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[13 /*10*/].f_3));
		}
	}
	return 0;
}







int func_310(var uParam0)//Position - 0xC2B4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1) == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_340)
				{
					if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= -145f || ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_340 = 1;
					}
				}
			}
			else if (iLocal_340)
			{
				if (ENTITY::GET_ENTITY_ROLL(uParam0->f_4) <= 35f && ENTITY::GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_340 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_311(var uParam0)//Position - 0xC349
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!GlobalFunc_226(&(Local_189[4 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[4 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[4 /*10*/].f_3)) > 2f)
			{
				GlobalFunc_235(&(Local_189[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_312(var uParam0)//Position - 0xC3BB
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER::PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!GlobalFunc_226(&(Local_189[6 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[6 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[6 /*10*/].f_3)) > 3.5f)
			{
				GlobalFunc_235(&(Local_189[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_313(var uParam0)//Position - 0xC431
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, 72, 1, 0, 1);
				}
				GlobalFunc_235(&(Local_189[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_314(var uParam0)//Position - 0xC4B2
{
	struct<3> Var0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (MISC::ABSF(Var0.x) > 3f && !GlobalFunc_226(&(Local_189[0 /*10*/].f_3)))
		{
			if (!GlobalFunc_226(&(Local_189[1 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[1 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[1 /*10*/].f_3)) > 1.2f)
			{
				GlobalFunc_235(&(Local_189[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_315(var uParam0)//Position - 0xC53E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!GlobalFunc_226(&(Local_189[0 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[0 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[0 /*10*/].f_3)) > 0.7f)
			{
				GlobalFunc_235(&(Local_189[0 /*10*/].f_3));
				GlobalFunc_6715(&(Local_189[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_316(var uParam0)//Position - 0xC5C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (GlobalFunc_226(&(Local_189[iVar0 /*10*/].f_6)))
		{
			GlobalFunc_6715(&(Local_189[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	GlobalFunc_8281(uParam0, 10, 0f, 1);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
}

void func_317(int iParam0, var uParam1)//Position - 0xC610
{
	Local_189[iParam0 /*10*/].f_1++;
	func_318(uParam1, iParam0);
	GlobalFunc_235(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_318(var uParam0, int iParam1)//Position - 0xC643
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}


int func_320(var uParam0)//Position - 0xC66D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!GlobalFunc_226(&(Local_189[5 /*10*/].f_3)))
			{
				GlobalFunc_7731(&(Local_189[5 /*10*/].f_3));
			}
			else if (GlobalFunc_4981(&(Local_189[5 /*10*/].f_3)) > 3.5f)
			{
				GlobalFunc_235(&(Local_189[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			GlobalFunc_235(&(Local_189[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_321()//Position - 0xC6E4
{
	struct<3> Var0;
	
	GlobalFunc_2654("UPDATE_FINAL_SCENE()", &iLocal_895, 1000);
	if ((Local_422.f_410 >= 28 && !iLocal_904) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_422.f_3, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_889, PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852.f_2, PLAYER::PLAYER_PED_ID(), 1)))
	{
		iLocal_904 = 1;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_422.f_3))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_852.f_2, Local_422.f_3, 1) && iLocal_1141 < 6)
		{
			iLocal_904 = 1;
		}
	}
	if (iLocal_1141 >= 4)
	{
		if (GlobalFunc_5682(Local_422.f_3, 1) < 3f && !iLocal_903)
		{
			if (!GlobalFunc_111())
			{
				GlobalFunc_10618(&(Local_422.f_244), Local_422.f_144, "txm4_aggro", 8, 0, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(Local_422.f_3, PLAYER::PLAYER_PED_ID(), -1, 0);
				iLocal_899 = MISC::GET_GAME_TIMER();
				iLocal_903 = 1;
			}
			else if (!iLocal_912)
			{
				GlobalFunc_4935();
				iLocal_912 = 1;
			}
		}
	}
	switch (iLocal_1141)
	{
		case 0:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_852.f_2) && !ENTITY::IS_ENTITY_DEAD(Local_422.f_3)) && !ENTITY::IS_ENTITY_DEAD(iLocal_889))
			{
				PED::ADD_RELATIONSHIP_GROUP("TAXI_Whore", &iLocal_892);
				iLocal_891 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_422.f_3);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_852.f_30, iLocal_892);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, Local_852.f_30, iLocal_891);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_852.f_2, Local_852.f_30);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_889, iLocal_892);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_852.f_2, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_852.f_2, 17, 1);
				ENTITY::SET_ENTITY_HEALTH(Local_852.f_2, 130);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_852.f_2, 1);
				PED::SET_PED_DIES_WHEN_INJURED(Local_852.f_2, 1);
				TASK::CLEAR_PED_TASKS(Local_852.f_2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_889, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_889, 17, 1);
				ENTITY::SET_ENTITY_HEALTH(iLocal_889, 130);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_889, 1);
				PED::SET_PED_DIES_WHEN_INJURED(iLocal_889, 1);
				TASK::CLEAR_PED_TASKS(iLocal_889);
				iLocal_1141 = 1;
			}
			break;
		
		case 1:
			if (((!ENTITY::IS_ENTITY_DEAD(Local_852.f_2) && !ENTITY::IS_ENTITY_DEAD(Local_422.f_3)) && !ENTITY::IS_ENTITY_DEAD(iLocal_889)) && !ENTITY::IS_ENTITY_DEAD(Local_852.f_3))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_889, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_979, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_995, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
				TASK::TASK_PERFORM_SEQUENCE(Local_852.f_2, uLocal_413);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_414);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_414);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_852.f_2, 0);
				TASK::TASK_PLAY_ANIM(0, &cLocal_1011, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_414);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_889, uLocal_414);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_414);
				iLocal_1141 = 2;
			}
			break;
		
		case 2:
			if (iLocal_905)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_889) && !ENTITY::IS_ENTITY_DEAD(Local_422.f_3))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_422.f_3, iLocal_891);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_422.f_3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_422.f_3, 13, 1);
					PED::SET_PED_SHOOT_RATE(Local_422.f_3, 100);
					PED::SET_PED_ACCURACY(Local_422.f_3, 100);
					ENTITY::SET_ENTITY_HEALTH(Local_422.f_3, 105);
					TASK::CLEAR_PED_TASKS(Local_422.f_3);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_415);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_415);
					TASK::TASK_STAND_STILL(0, 5000);
					func_323(&Local_422, -691.48f, -1113.31f, 13.53f);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_322(iLocal_412), iLocal_889, 3f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, iLocal_889, -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_415);
					TASK::TASK_PERFORM_SEQUENCE(Local_422.f_3, uLocal_415);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_415);
					iLocal_901 = 1;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					WEAPON::GIVE_WEAPON_TO_PED(Local_422.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1141 = 3;
				}
			}
			else if (!iLocal_908)
			{
				if (!PED::IS_PED_INJURED(Local_852.f_2) && !PED::IS_PED_INJURED(iLocal_889))
				{
					if (GlobalFunc_5682(Local_852.f_2, 1) < 2f || GlobalFunc_5682(iLocal_889, 1) < 2f)
					{
						TASK::CLEAR_PED_TASKS(Local_852.f_2);
						TASK::CLEAR_PED_TASKS(iLocal_889);
						TASK::TASK_LOOK_AT_ENTITY(Local_852.f_2, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
						TASK::TASK_PERFORM_SEQUENCE(Local_852.f_2, uLocal_413);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_889, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_414);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_414);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_414);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_889, uLocal_414);
						iLocal_908 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_INJURED(Local_852.f_2))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Local_852.f_2);
						TASK::TASK_SMART_FLEE_PED(Local_852.f_2, PLAYER::PLAYER_PED_ID(), 100f, 20000, 0, 0);
					}
					if (PED::IS_PED_INJURED(iLocal_889))
					{
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_889);
						TASK::TASK_SMART_FLEE_PED(iLocal_889, PLAYER::PLAYER_PED_ID(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			GlobalFunc_2654("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_895, 1000);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_422.f_3))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_422.f_3, 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(Local_422.f_3) > 0 && iLocal_901)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						iLocal_901 = 0;
					}
				}
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
			if (((!PED::IS_PED_INJURED(iLocal_889) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_889)) && !ENTITY::IS_ENTITY_DEAD(Local_852.f_2)) && !bLocal_907)
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_852.f_2, Local_422.f_3, -1, 2048, 4);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_413);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_413);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_422.f_3, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_413);
				TASK::TASK_PERFORM_SEQUENCE(Local_852.f_2, uLocal_413);
				bLocal_907 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_422.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
			{
				if (TASK::GET_SEQUENCE_PROGRESS(Local_422.f_3) > 2)
				{
					GlobalFunc_9566(&Local_422, 58, 1, 0, 0);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_415);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_415);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_852.f_2, 2000, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_415);
					TASK::TASK_PERFORM_SEQUENCE(Local_422.f_3, uLocal_415);
					iLocal_1141 = 4;
				}
			}
			break;
		
		case 4:
			GlobalFunc_2654("FINAL_SCENE_KILL_WOMAN", &iLocal_895, 1000);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_889))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_422.f_3))
					{
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_414);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_414);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -691.48f, -1113.31f, 13.53f, Local_852.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_852.f_2, -1, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_414);
						TASK::TASK_PERFORM_SEQUENCE(Local_422.f_3, uLocal_414);
					}
				}
				iLocal_1141 = 6;
			}
			break;
		
		case 6:
			GlobalFunc_2654("FINAL_SCENE_KILL_MAN", &iLocal_895, 1000);
			if (!GlobalFunc_111())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_422.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_852.f_2))
				{
					TASK::TASK_SHOOT_AT_ENTITY(Local_422.f_3, Local_852.f_2, -1, -957453492);
					iLocal_1141 = 7;
				}
			}
			break;
		
		case 7:
			GlobalFunc_2654("FINAL_SCENE_FLEE", &iLocal_895, 1000);
			if (ENTITY::IS_ENTITY_DEAD(Local_852.f_2) && !ENTITY::IS_ENTITY_DEAD(Local_422.f_3))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_852.f_2, 0) };
				TASK::OPEN_SEQUENCE_TASK(&uLocal_415);
				TASK::TASK_AIM_GUN_AT_COORD(0, Var0, 1000, 0, 0);
				TASK::TASK_SWAP_WEAPON(0, 0);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_SMART_FLEE_COORD(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_415);
				TASK::TASK_PERFORM_SEQUENCE(Local_422.f_3, uLocal_415);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_415);
				PED::SET_PED_KEEP_TASK(Local_422.f_3, 1);
				iLocal_904 = 1;
			}
			break;
	}
}

Vector3 func_322(int iParam0)//Position - 0xCF45
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		
		default:
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_323(var uParam0, struct<3> Param1)//Position - 0xCF93
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, 0) < MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 131584);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, 0) >= MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param1, 0) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 262656);
			}
			else
			{
				TASK::TASK_LEAVE_VEHICLE(0, uParam0->f_4, 512);
			}
		}
	}
}










void func_333(var uParam0, char* sParam1, int iParam2)//Position - 0xD67D
{
	struct<3> Var0;
	
	GlobalFunc_4935();
	GlobalFunc_4670(2);
	Var0 = { GlobalFunc_2209() };
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && GlobalFunc_111()) && !MISC::ARE_STRINGS_EQUAL(&Var0, "NULL"))
	{
	}
	else
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (!GlobalFunc_4746(uParam0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					TASK::STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		GlobalFunc_8281(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				GlobalFunc_10901(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				GlobalFunc_6604(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (GlobalFunc_4746(uParam0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_335(uParam0, 4096, 0);
				}
				else
				{
					func_335(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				GlobalFunc_10901(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				GlobalFunc_6604(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			GlobalFunc_10901(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			GlobalFunc_10901(uParam0, &Var0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			GlobalFunc_6585(8, 0);
			iLocal_56[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				GlobalFunc_10901(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				GlobalFunc_6604(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_335(uParam0, 0, 0);
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			GlobalFunc_6585(8, 0);
			iLocal_56[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				GlobalFunc_10901(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				GlobalFunc_6604(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			GlobalFunc_6585(8, 0);
			iLocal_56[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				GlobalFunc_10901(uParam0, &Var0);
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				GlobalFunc_6604(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			GlobalFunc_8282(&Var0);
			GlobalFunc_10618(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			GlobalFunc_10901(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					GlobalFunc_10901(uParam0, &Var0);
				}
			}
			else if (!PED::IS_PED_INJURED(uParam0->f_3))
			{
				GlobalFunc_6604(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			GlobalFunc_6585(3, 0);
		}
		GlobalFunc_8281(uParam0, 3, 0f, 1);
	}
}


void func_335(var uParam0, int iParam1, bool bParam2)//Position - 0xDC80
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, 1);
		TASK::CLEAR_PED_TASKS(uParam0->f_3);
		if ((GlobalFunc_2264(uParam0->f_3, uParam0->f_29, 1) <= 200f && !GlobalFunc_105(uParam0->f_29)) && !bParam2)
		{
			GlobalFunc_6603(uParam0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		PED::SET_PED_KEEP_TASK(uParam0->f_3, 1);
	}
}







void func_342()//Position - 0xE039
{
	GlobalFunc_7571(&Local_422);
	if (GlobalFunc_7570(&Local_422, &Local_1051))
	{
		switch (Local_1051.f_27)
		{
			case 0:
				if (Local_422.f_410 == 17)
				{
					if (!GlobalFunc_7560(&Local_422))
					{
						if (GlobalFunc_6612("TAXI_OBJ_FTC1") || HUD::DOES_BLIP_EXIST(Local_422.f_9))
						{
							Local_1051.f_27++;
						}
						else if (GlobalFunc_4755(&Local_422) != 10)
						{
							GlobalFunc_9566(&Local_422, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((GlobalFunc_4755(&Local_422) > 10 && GlobalFunc_4755(&Local_422) != 15) && !GlobalFunc_7560(&Local_422))
				{
					GlobalFunc_9566(&Local_422, 15, 1, 0, 0);
					GlobalFunc_8925(&Local_422, 7);
				}
				break;
			}
	}
	func_343(&Local_422, &uLocal_1081, &Local_1051, bLocal_1050);
}

int func_343(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xE116
{
	func_351(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !GlobalFunc_6588(uParam0, 2))
	{
		if (GlobalFunc_6608(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((MISC::GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!GlobalFunc_6607(uParam0))
				{
					uParam2->f_7 = { GlobalFunc_7567(uParam1) };
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_111())
				{
					uParam2->f_13 = { GlobalFunc_560() };
					if (MISC::ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					GlobalFunc_812(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					GlobalFunc_7566(uParam1);
					GlobalFunc_8281(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (GlobalFunc_4750(uParam0))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_8281(uParam0, 17, 0f, 1);
						uParam2->f_1 = { GlobalFunc_514() };
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (GlobalFunc_111())
				{
					uParam2->f_19 = { GlobalFunc_2209() };
				}
				else
				{
					GlobalFunc_812(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					GlobalFunc_7566(uParam1);
					GlobalFunc_8281(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!GlobalFunc_6588(uParam0, 14) && !GlobalFunc_111()) && !GlobalFunc_4750(uParam0)) && GlobalFunc_8928(uParam0, 18) > 1f)
				{
					GlobalFunc_8281(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_8928(uParam0, 18) > 1f)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							GlobalFunc_10626(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!GlobalFunc_111())
				{
					GlobalFunc_812(&(uParam2->f_26), SYSTEM::ROUND(SYSTEM::POW(2f, SYSTEM::TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					GlobalFunc_7566(uParam1);
					GlobalFunc_8281(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}








void func_351(var uParam0, var uParam1)//Position - 0xE7C6
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (GlobalFunc_6607(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (GlobalFunc_6588(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (GlobalFunc_4755(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_7569(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					GlobalFunc_8927(uParam0, Var0, GlobalFunc_4782(uParam0, 2));
				}
				if (GlobalFunc_747(uParam0->f_98, 4))
				{
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				GlobalFunc_10598(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (GlobalFunc_8928(uParam0, 16) > 1f)
				{
					GlobalFunc_619(1);
					if (uParam0->f_411 == 9)
					{
						GlobalFunc_164("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						GlobalFunc_164("TAXI_VIP_RETURN", 7500, 1);
					}
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10907(uParam0, &Var0, 0, 1, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					GlobalFunc_6604(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((GlobalFunc_8928(uParam0, 16) > GlobalFunc_512(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !GlobalFunc_111()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (GlobalFunc_4755(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				GlobalFunc_10907(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_7569(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					GlobalFunc_10618(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				GlobalFunc_9566(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_9566(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!GlobalFunc_747(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						GlobalFunc_6611(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
					}
				}
				GlobalFunc_8281(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					GlobalFunc_164("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					GlobalFunc_164("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = GlobalFunc_5104(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				GlobalFunc_9566(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				GlobalFunc_4762(&Var0);
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					GlobalFunc_6604(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = GlobalFunc_5104(uParam0->f_17, 1);
					}
					else if (HUD::GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						HUD::SET_BLIP_ALPHA(uParam0->f_9, 255);
						HUD::SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						HUD::SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				GlobalFunc_9566(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				GlobalFunc_10906(uParam0, 33554432, Var0, "", 1, 8);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_9566(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!GlobalFunc_111())
				{
					GlobalFunc_6610(uParam0, 0);
					GlobalFunc_6594(&(uParam0->f_44), 4);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_9566(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 11, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 15:
				if (GlobalFunc_8928(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						GlobalFunc_4762(&Var0);
					}
					GlobalFunc_7568(Var0, uParam1);
					GlobalFunc_6594(&(uParam0->f_81), 67108864);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_8281(uParam0, 11, 0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (GlobalFunc_8928(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							GlobalFunc_4762(&Var0);
						}
					}
					GlobalFunc_7568(Var0, uParam1);
					GlobalFunc_8281(uParam0, 11, 0, 0);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					GlobalFunc_4762(&Var0);
				}
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 11, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				GlobalFunc_6594(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					GlobalFunc_6609(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					GlobalFunc_6609(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_7569(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 6, 0f, 1);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					GlobalFunc_6609(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					GlobalFunc_6609(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_7569(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 6, 0f, 1);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 12:
				GlobalFunc_164("TAXI_OBJ_GYB", 3500, 1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					GlobalFunc_164("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					GlobalFunc_164("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					GlobalFunc_164("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!GlobalFunc_747(uParam0->f_98, 268435456))
				{
					GlobalFunc_164("TAXI_OBJ_CYI_01", 7500, 1);
					GlobalFunc_6594(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 33:
				GlobalFunc_164("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 34:
				if (!GlobalFunc_747(uParam0->f_82, 8192))
				{
					if (GlobalFunc_8928(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						GlobalFunc_4762(&Var0);
						if (uParam0->f_411 == 5)
						{
							GlobalFunc_7568(Var0, uParam1);
						}
						else
						{
							GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
						}
						GlobalFunc_6594(&(uParam0->f_82), 8192);
						GlobalFunc_8281(uParam0, 16, 0, 0);
						GlobalFunc_8281(uParam0, 11, 0, 0);
						GlobalFunc_8926(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!GlobalFunc_747(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
					GlobalFunc_6594(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!GlobalFunc_747(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
					GlobalFunc_6594(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 139:
				GlobalFunc_164("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				GlobalFunc_9566(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!GlobalFunc_747(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					GlobalFunc_6594(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!GlobalFunc_747(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					GlobalFunc_6594(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				GlobalFunc_164("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				GlobalFunc_8926(uParam0, 0, 0);
				GlobalFunc_9566(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!GlobalFunc_111())
				{
					GlobalFunc_164("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					GlobalFunc_8926(uParam0, 0, 0);
					GlobalFunc_9566(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				GlobalFunc_164("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 21:
				if (!GlobalFunc_747(uParam0->f_81, 1))
				{
					GlobalFunc_10905(uParam0, 1, Var0, "_sick1", 8);
					GlobalFunc_6581(&(uParam0->f_81), 2);
				}
				else if (!GlobalFunc_747(uParam0->f_81, 2))
				{
					GlobalFunc_10905(uParam0, 2, Var0, "_sick2", 8);
					GlobalFunc_6581(&(uParam0->f_81), 1);
				}
				GlobalFunc_7569(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 22:
				if (!GlobalFunc_747(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!GlobalFunc_747(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				GlobalFunc_6594(&(uParam0->f_81), 2097152);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_7569(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_7569(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_7569(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_7569(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!GlobalFunc_747(uParam0->f_81, 4))
				{
					GlobalFunc_10905(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!GlobalFunc_747(uParam0->f_81, 8))
				{
					GlobalFunc_10905(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					GlobalFunc_10905(uParam0, 8, Var0, "_turns3", 8);
					GlobalFunc_6581(&(uParam0->f_81), 4);
					GlobalFunc_6581(&(uParam0->f_81), 8);
				}
				GlobalFunc_7569(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 72:
				if (GlobalFunc_4779(uParam0))
				{
					GlobalFunc_8927(uParam0, Var0, GlobalFunc_4782(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						GlobalFunc_6604(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					GlobalFunc_6611(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						GlobalFunc_6611(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						GlobalFunc_6611(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				GlobalFunc_7569(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!GlobalFunc_747(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 128);
					GlobalFunc_6581(&(uParam0->f_83), 256);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 256);
					GlobalFunc_6581(&(uParam0->f_83), 512);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 512);
					GlobalFunc_6581(&(uParam0->f_83), 128);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!GlobalFunc_747(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						GlobalFunc_4762(&Var0);
					}
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 1);
					GlobalFunc_6581(&(uParam0->f_83), 2);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						GlobalFunc_4762(&Var0);
					}
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						GlobalFunc_6581(&(uParam0->f_83), 4);
					}
					else
					{
						GlobalFunc_6581(&(uParam0->f_83), 1);
					}
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						GlobalFunc_4762(&Var0);
					}
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 4);
					GlobalFunc_6581(&(uParam0->f_83), 1);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				GlobalFunc_7569(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!GlobalFunc_747(uParam0->f_81, 4096))
				{
					GlobalFunc_10906(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!GlobalFunc_747(uParam0->f_81, 8192))
				{
					GlobalFunc_10906(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				GlobalFunc_7569(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!GlobalFunc_747(uParam0->f_81, 16384))
				{
					GlobalFunc_10906(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!GlobalFunc_747(uParam0->f_81, 32768))
				{
					GlobalFunc_10906(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				GlobalFunc_7569(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!GlobalFunc_747(uParam0->f_82, 8))
					{
						GlobalFunc_10904(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!GlobalFunc_747(uParam0->f_82, 16))
					{
						GlobalFunc_10904(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!GlobalFunc_747(uParam0->f_82, 32))
					{
						GlobalFunc_10904(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					GlobalFunc_7569(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					GlobalFunc_6611(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					GlobalFunc_7569(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_7569(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_7569(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 81:
				if (!GlobalFunc_747(uParam0->f_81, 65536))
				{
					GlobalFunc_10906(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!GlobalFunc_747(uParam0->f_81, 131072))
				{
					GlobalFunc_10906(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 82:
				if (GlobalFunc_4779(uParam0))
				{
					GlobalFunc_8927(uParam0, Var0, GlobalFunc_4782(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						GlobalFunc_6604(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!GlobalFunc_747(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 8);
					GlobalFunc_6581(&(uParam0->f_83), 16);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 16);
					GlobalFunc_6581(&(uParam0->f_83), 32);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						GlobalFunc_6581(&(uParam0->f_83), 64);
					}
					else
					{
						GlobalFunc_6581(&(uParam0->f_83), 8);
					}
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					GlobalFunc_6594(&(uParam0->f_83), 64);
					GlobalFunc_6581(&(uParam0->f_83), 8);
					GlobalFunc_8281(uParam0, 16, 0, 0);
				}
				GlobalFunc_7569(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 65:
				if (!GlobalFunc_111())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					GlobalFunc_10907(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					GlobalFunc_8927(uParam0, Var0, GlobalFunc_4782(uParam0, 65));
					GlobalFunc_8926(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!GlobalFunc_111())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					GlobalFunc_10907(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					GlobalFunc_8927(uParam0, Var0, GlobalFunc_4782(uParam0, 66));
					GlobalFunc_8926(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !GlobalFunc_111())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
								GlobalFunc_7569(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
								GlobalFunc_7569(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								GlobalFunc_6611(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								GlobalFunc_7569(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								GlobalFunc_8281(uParam0, 16, 0, 0);
								GlobalFunc_8926(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_63)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
									GlobalFunc_8281(uParam0, 16, 0, 0);
									GlobalFunc_8281(uParam0, 11, 0, 0);
									GlobalFunc_8926(uParam0, 0, 0);
									if (!iLocal_65)
									{
										iLocal_63 = 1;
									}
								}
								else
								{
									if (!iLocal_64)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_64 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_65 = 1;
									}
									GlobalFunc_4762(&Var0);
									GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
									GlobalFunc_8281(uParam0, 16, 0, 0);
									GlobalFunc_8281(uParam0, 11, 0, 0);
									GlobalFunc_8926(uParam0, 0, 0);
									iLocal_63 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
								break;
						}
						GlobalFunc_9566(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_7569(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 25:
				if (!GlobalFunc_747(uParam0->f_82, 1))
				{
					GlobalFunc_10904(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_82, 2))
				{
					GlobalFunc_10904(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_82, 4))
				{
					GlobalFunc_10904(uParam0, 4, Var0, "_close3", 8, 0);
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					GlobalFunc_6604(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_7569(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 74:
				if (GlobalFunc_4779(uParam0))
				{
					GlobalFunc_8927(uParam0, Var0, GlobalFunc_4782(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						GlobalFunc_6604(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					GlobalFunc_10903(uParam0, Var0, 8);
				}
				GlobalFunc_7569(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 70:
				if (!GlobalFunc_747(uParam0->f_83, 1024))
				{
					GlobalFunc_6594(&(uParam0->f_83), 1024);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 2048))
				{
					GlobalFunc_6594(&(uParam0->f_83), 2048);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!GlobalFunc_747(uParam0->f_83, 4096))
				{
					GlobalFunc_6594(&(uParam0->f_83), 4096);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 69:
				if (!GlobalFunc_747(uParam0->f_82, 1024))
				{
					GlobalFunc_10904(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					GlobalFunc_6581(&(uParam0->f_82), 2048);
				}
				else if (!GlobalFunc_747(uParam0->f_82, 2048))
				{
					GlobalFunc_10904(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_7569(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				else if (!PED::IS_PED_INJURED(uParam0->f_3))
				{
					GlobalFunc_6604(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 51:
				if (GlobalFunc_4779(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
						GlobalFunc_9566(uParam0, 52, 1, 0, 0);
						GlobalFunc_8281(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar6 = { Var0 };
						GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
						GlobalFunc_8281(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					GlobalFunc_6611(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					GlobalFunc_8281(uParam0, 16, 0, 0);
					GlobalFunc_8926(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				GlobalFunc_7569(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8281(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) >= 1)
				{
					GlobalFunc_164("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!GlobalFunc_747(uParam0->f_81, 262144))
				{
					GlobalFunc_10906(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!GlobalFunc_747(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						GlobalFunc_10906(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						GlobalFunc_10906(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				GlobalFunc_7569(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 85:
				if (!GlobalFunc_747(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						GlobalFunc_10902(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!GlobalFunc_747(uParam0->f_82, 134217728))
				{
					GlobalFunc_10902(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				GlobalFunc_7569(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 100:
				GlobalFunc_164("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					GlobalFunc_4762(&Var0);
				}
				GlobalFunc_6594(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					GlobalFunc_4762(&Var0);
				}
				GlobalFunc_6594(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					GlobalFunc_4762(&Var0);
				}
				GlobalFunc_6594(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!GlobalFunc_747(uParam0->f_82, 65536))
				{
					if (GlobalFunc_8928(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						GlobalFunc_4762(&Var0);
						GlobalFunc_7568(Var0, uParam1);
						GlobalFunc_6594(&(uParam0->f_82), 65536);
						GlobalFunc_8281(uParam0, 16, 0, 0);
						GlobalFunc_8281(uParam0, 11, 0, 0);
						GlobalFunc_8926(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!GlobalFunc_747(uParam0->f_82, 131072))
				{
					if (GlobalFunc_8928(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						GlobalFunc_4762(&Var0);
						GlobalFunc_7568(Var0, uParam1);
						GlobalFunc_6594(&(uParam0->f_82), 131072);
						GlobalFunc_8281(uParam0, 16, 0, 0);
						GlobalFunc_8281(uParam0, 11, 0, 0);
						GlobalFunc_8926(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!GlobalFunc_747(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					GlobalFunc_6594(&(uParam0->f_82), 8388608);
				}
				else if (!GlobalFunc_747(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					GlobalFunc_6594(&(uParam0->f_82), 16777216);
				}
				else if (!GlobalFunc_747(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					GlobalFunc_6594(&(uParam0->f_82), 33554432);
				}
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					GlobalFunc_6611(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					GlobalFunc_4762(&Var0);
					GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				}
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 11, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 11, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 11, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				GlobalFunc_6611(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				GlobalFunc_10630(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_9566(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				GlobalFunc_6594(&(uParam0->f_81), 2097152);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_7568(Var0, uParam1);
				GlobalFunc_6594(&(uParam0->f_81), 67108864);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8281(uParam0, 11, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!GlobalFunc_747(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					GlobalFunc_10906(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!PED::IS_PED_INJURED(uParam0->f_3))
					{
						GlobalFunc_6604(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				GlobalFunc_9566(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 107:
				if (!GlobalFunc_747(uParam0->f_81, 268435456))
				{
					GlobalFunc_10906(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				GlobalFunc_9566(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				GlobalFunc_164("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 109:
				if (!GlobalFunc_747(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						GlobalFunc_10906(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!PED::IS_PED_INJURED(uParam0->f_3))
						{
							GlobalFunc_6604(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						GlobalFunc_10906(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				GlobalFunc_9566(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				GlobalFunc_164("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				GlobalFunc_10618(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				GlobalFunc_8281(uParam0, 16, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 141:
				if (!GlobalFunc_747(uParam0->f_81, 16777216))
				{
					GlobalFunc_10906(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 88:
				GlobalFunc_164("TAXI_TIEFLEE", 7500, 1);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 57:
				if (!GlobalFunc_747(uParam0->f_98, 536870912))
				{
					GlobalFunc_164("TAXI_OBJ_CYI_1B", 7500, 1);
					GlobalFunc_6594(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				GlobalFunc_4762(&Var0);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				GlobalFunc_10907(uParam0, &Var0, 0, 0, 8);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				GlobalFunc_10907(uParam0, &Var0, 1, 0, 8);
				GlobalFunc_9566(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				GlobalFunc_164("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				GlobalFunc_9566(uParam0, 0, 0, 0, 0);
				GlobalFunc_8926(uParam0, 0, 0);
				break;
			}
	}
}
























void func_375(var uParam0)//Position - 0x12C47
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_342 > 0 && !GlobalFunc_747(Local_342.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_342 - 1))
				{
					if (GlobalFunc_747(Local_342.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_342.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!GlobalFunc_747(Local_342.f_1[iVar0 /*4*/], 4))
							{
								GlobalFunc_812(&(Local_342.f_1[iVar0 /*4*/]), 4);
								Local_342.f_1[iVar0 /*4*/].f_1 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							GlobalFunc_811(&(Local_342.f_1[iVar0 /*4*/]), 12);
						}
						if (GlobalFunc_747(Local_342.f_1[iVar0 /*4*/], 4) && !GlobalFunc_747(Local_342.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_342.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_342.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								GlobalFunc_812(&(Local_342.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_333(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_376(var uParam0, var uParam1)//Position - 0x12D5A
{
	var uVar0;
	
	if (!GlobalFunc_6588(uParam0, 27))
	{
		GlobalFunc_8925(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && GlobalFunc_8928(uParam0, 27) > 5f)
	{
		if (func_403(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			GlobalFunc_8281(uParam0, 27, 0, 0);
			GlobalFunc_8281(uParam0, 10, 0, 0);
			func_401(uParam0, &uVar0, uParam1);
		}
		GlobalFunc_10908(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_377(uParam0);
	}
	if ((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && (CAM::DOES_CAM_EXIST(*uParam0) && !CAM::IS_CAM_ACTIVE(*uParam0))) && (CAM::DOES_CAM_EXIST(uParam0->f_1) && !CAM::IS_CAM_ACTIVE(uParam0->f_1))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !GlobalFunc_111())
	{
		if (GlobalFunc_8928(uParam0, 26) > 10f)
		{
			GlobalFunc_6589(uParam0, 26, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	else if (GlobalFunc_6588(uParam0, 26))
	{
		GlobalFunc_6589(uParam0, 26, 0);
	}
	return 0;
}

void func_377(var uParam0)//Position - 0x12E84
{
	if (!GlobalFunc_6710(uParam0->f_429))
	{
		uParam0->f_429 = GlobalFunc_7719();
		GlobalFunc_8328(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (GlobalFunc_8448(uParam0->f_429))
	{
		func_333(uParam0, "Player took too long to make pickup", 9);
	}
}
























void func_401(var uParam0, var uParam1, var uParam2)//Position - 0x136B1
{
	switch (*uParam1)
	{
		case 1:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (GlobalFunc_10600(uParam0, 0, 4))
			{
				func_333(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (GlobalFunc_10600(uParam0, 0, 8))
			{
				func_333(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (GlobalFunc_10600(uParam0, 1, 1))
			{
				func_333(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_333(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!GlobalFunc_747(*uParam2, 2) && GlobalFunc_4746(uParam0))
			{
				func_333(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}


int func_403(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x13808
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!GlobalFunc_747(*uParam2, 1))
		{
			if (GlobalFunc_7573(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 4))
		{
			if (GlobalFunc_7572(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 8))
		{
			if (GlobalFunc_4784(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !GlobalFunc_747(*uParam2, 128);
		if (bParam4)
		{
			if (func_404(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_404(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_404(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x13930
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_78)
		{
			iLocal_79 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_78 = true;
		}
		iLocal_80 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_81 = (iLocal_79 - iLocal_80);
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(uVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_78)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_81) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(uVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (GlobalFunc_2265(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && GlobalFunc_5682(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}






void func_410(var uParam0)//Position - 0x13E5F
{
	if (!GlobalFunc_747(uParam0->f_98, 2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (GlobalFunc_2264(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				GlobalFunc_6594(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_411()//Position - 0x13EB5
{
	func_412(&Local_422);
	GlobalFunc_4670(2);
	func_430();
}

void func_412(var uParam0)//Position - 0x13ECD
{
	func_50(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		GlobalFunc_4670(2);
	}
}

int func_413(var uParam0, bool bParam1)//Position - 0x13EEC
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!GlobalFunc_111() && GlobalFunc_8928(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (GlobalFunc_4743(uParam0) == 0 || GlobalFunc_747(uParam0->f_85, 32))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_335(uParam0, 4160, 0);
						}
						else
						{
							func_335(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_335(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_335(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_335(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}



void func_416()//Position - 0x1404E
{
	GlobalFunc_8929(&Local_422, 8);
	Local_422.f_410 = 0;
	GlobalFunc_4787(&Local_422, 3, 6);
	Local_422.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_422.f_33 = 114.1f;
	Local_422.f_26 = { Local_924 };
	Local_422.f_34 = 95.93f;
	func_417(&Local_422, &Local_852);
	Local_852 = joaat("s_m_m_doctor_01");
	Local_852.f_1 = joaat("bison");
}

void func_417(var uParam0, var uParam1)//Position - 0x140C1
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.TAXI_SAVED_STRUCT.TAXI_RUNS_ARRAY[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}













void func_430()//Position - 0x1467D
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_927, Local_930, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_945, Local_948, 1, 1);
	func_126(Local_957, 60f, 0);
	func_126(Local_960, 60f, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_893, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_892);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_891);
	TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_975);
	GlobalFunc_6583(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_433();
	func_432();
	func_431();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_852.f_1, 0);
	GlobalFunc_4948(&uLocal_44, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_431()//Position - 0x1471F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_886);
	STREAMING::REMOVE_ANIM_DICT("MOVE_DUCK_FOR_COVER");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_979);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_995);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_1011);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_1027);
}

void func_432()//Position - 0x14752
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_852);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_852.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_887);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_888);
	TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_975);
	STREAMING::REMOVE_ANIM_DICT("veh@truck@ds@base");
}

void func_433()//Position - 0x14787
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_885);
	STREAMING::REMOVE_ANIM_DICT("gestures@m@standing@casual");
}


