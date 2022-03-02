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
	struct<414> Local_408 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = -1;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	struct<33> Local_838 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 4;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	struct<38> Local_880 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	int iLocal_922 = 0;
	int iLocal_923 = 0;
	struct<3> Local_924[1];
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934[3] = { 0, 0, 0 };
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940[2] = { 0, 0 };
	int iLocal_943 = 0;
	var uLocal_944 = 0;
	int iLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	var uLocal_957 = 0;
	int iLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	bool bLocal_970 = 0;
	int iLocal_971 = 0;
	bool bLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	struct<3> Local_977 = { 0, 0, 0 } ;
	struct<3> Local_980 = { 0, 0, 0 } ;
	struct<3> Local_983 = { 0, 0, 0 } ;
	struct<3> Local_986 = { 0, 0, 0 } ;
	struct<3> Local_989 = { 0, 0, 0 } ;
	struct<3> Local_992 = { 0, 0, 0 } ;
	struct<3> Local_995 = { 0, 0, 0 } ;
	struct<3> Local_998 = { 0, 0, 0 } ;
	struct<3> Local_1001 = { 0, 0, 0 } ;
	struct<3> Local_1004 = { 0, 0, 0 } ;
	char* sLocal_1007 = NULL;
	char cLocal_1008[24] = "";
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	char cLocal_1014[24] = "";
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	struct<6> Local_1020 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	bool bLocal_1032 = 0;
	struct<28> Local_1033 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 5;
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
	var uLocal_1106 = 1097859072;
	var uLocal_1107 = 1500;
	var uLocal_1108 = 45;
	var uLocal_1109 = 1103626240;
	var uLocal_1110 = 5;
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
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
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
	iLocal_928 = joaat("a_m_m_farmer_01");
	iLocal_929 = joaat("prop_box_wood04a");
	iLocal_930 = joaat("prop_cardbordbox_03a");
	iLocal_931 = joaat("prop_barrel_exp_01a");
	iLocal_949 = 1;
	iLocal_953 = 112;
	Local_977 = { 11.8607f, -1123.48f, 27.6801f };
	Local_980 = { 11.8607f, -1123.48f, 27.6801f };
	Local_983 = { 144.3291f, -3352.773f, 3.6651f };
	Local_986 = { 311.9527f, -3305.613f, 10.6651f };
	Local_989 = { 206.636f, -3322.673f, 4.6339f };
	Local_992 = { 0f, 0f, 24f };
	Local_995 = { 208.786f, -3319.823f, 4.6339f };
	Local_998 = { 0f, 0f, 47f };
	Local_1001 = { 199.5188f, -3326.201f, 4.78716f };
	Local_1004 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_1007 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_1008, "txm12_deal1_7", 24);
	StringCopy(&cLocal_1014, "txm12_deal1_7", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		GlobalFunc_4670(2);
		func_412();
	}
	MISC::SET_MISSION_FLAG(1);
	func_396();
	Local_408.f_102 = 1;
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_408.f_2))
		{
			func_8();
		}
		else
		{
			GlobalFunc_8923(&Local_408);
		}
		SYSTEM::WAIT(0);
	}
}








void func_8()//Position - 0x3CC
{
	if (GlobalFunc_4786(&Local_408))
	{
		GlobalFunc_4785(&Local_408);
		if (GlobalFunc_9568(&Local_408, 0))
		{
			func_391();
		}
	}
	else
	{
		GlobalFunc_7576(&Local_408);
		if (Local_408.f_410 >= 9)
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
			func_388();
		}
		func_354(&Local_408, &uLocal_1104);
		if (Local_408.f_410 < 22)
		{
			func_353(&Local_408);
		}
		GlobalFunc_6615(&Local_408, &uLocal_957, 0);
		if (Local_408.f_410 > 5 && !MISC::IS_BIT_SET(iLocal_958, 0))
		{
			Local_408.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			MISC::SET_BIT(&iLocal_958, 0);
		}
		if (Local_408.f_410 > 2)
		{
			if (!GlobalFunc_4783(&Local_408))
			{
				func_318();
			}
			else
			{
				func_309(&Local_408, "Taxi Not Driveable", GlobalFunc_4778(&Local_408));
			}
		}
		if (Local_408.f_410 == 9)
		{
			func_285(&Local_408, 0, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_408.f_3))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_408.f_3))
			{
				if (!GlobalFunc_6588(&Local_408, 0))
				{
					GlobalFunc_8925(&Local_408, 0);
				}
				if (Local_408.f_410 >= 22 || iLocal_932 >= 1)
				{
					iLocal_967 = 1;
				}
				func_282(&(Local_838.f_3));
				func_282(&(Local_880.f_3));
				func_281(&uLocal_940);
				func_309(&Local_408, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_408.f_410)
		{
			case 0:
				func_278();
				GlobalFunc_8281(&Local_408, 16, 4f, 0);
				GlobalFunc_7575(&Local_408, Local_977, Local_980, "TaxiWalter", iLocal_928, 202f, 35f);
				GlobalFunc_8286(&Local_408);
				GlobalFunc_4773(&Local_408, 1);
				break;
			
			case 1:
				if (func_270())
				{
					func_269();
					GlobalFunc_4775(&(Local_924[0 /*3*/]), "TAXI_SC_BN_12", 200);
					GlobalFunc_4774(&Local_408, &Local_924);
					func_247();
					GlobalFunc_6595(&Local_408);
					GlobalFunc_4773(&Local_408, 2);
				}
				break;
			
			case 2:
				Local_408.f_14 = { Local_977 };
				Local_408.f_17 = { Local_838 };
				GlobalFunc_4773(&Local_408, 3);
				break;
			
			case 3:
				if (func_241(&Local_408, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_408.f_3))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 4, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_408.f_3, 0, 0, 2, 0);
					}
					GlobalFunc_8926(&Local_408, 1, 0);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_922, Local_408.f_413);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_408.f_413, iLocal_922);
					PED::SET_PED_CAN_BE_TARGETTED(Local_408.f_3, 0);
					GlobalFunc_4773(&Local_408, 5);
				}
				break;
			
			case 5:
				if (func_214(&Local_408, 0, 1109393408))
				{
					GlobalFunc_4773(&Local_408, 15);
				}
				break;
			
			case 15:
				if (func_213(&Local_408))
				{
					GlobalFunc_9566(&Local_408, 9, 1, 0, 0);
					GlobalFunc_6590(&Local_408);
					GlobalFunc_4773(&Local_408, 7);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_408.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_408.f_2, Local_408.f_4, 0))
					{
						GlobalFunc_8284(&Local_408);
						GlobalFunc_4773(&Local_408, 5);
					}
				}
				break;
			
			case 7:
				if (MISC::IS_BIT_SET(iLocal_958, 0))
				{
					func_205();
					GlobalFunc_4773(&Local_408, 9);
				}
				break;
			
			case 9:
				func_189();
				if ((GlobalFunc_4710(Local_408.f_4, Local_408.f_17, 1) < 675f && !Local_408.f_140) && !iLocal_965)
				{
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_983, Local_986, 0, 1);
					PED::SET_PED_NON_CREATION_AREA(Local_983, Local_986);
					uLocal_946 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_983, Local_986, 0, 1, 1, 1);
					MISC::CLEAR_AREA_OF_PEDS(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_187(&Local_408);
					GlobalFunc_7559(&uLocal_1063);
					GlobalFunc_4749(&Local_1033, 3, 0);
					GlobalFunc_9566(&Local_408, 97, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_408.f_2, joaat("weapon_combatpistol"), 200, 1, 1);
					iLocal_965 = 1;
				}
				if (func_153(&Local_408, 16f, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_408.f_9));
					GlobalFunc_6594(&uLocal_1104, 4);
					GlobalFunc_6594(&uLocal_1104, 8);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					SYSTEM::SETTIMERA(0);
					GlobalFunc_4773(&Local_408, 22);
				}
				if (GlobalFunc_4710(Local_408.f_4, Local_408.f_17, 1) < 10f && GlobalFunc_156(Local_408.f_4, Local_838.f_3[1], 1) < 10f)
				{
					if (GlobalFunc_8283(&Local_408, 1, 1084227584))
					{
						HUD::REMOVE_BLIP(&(Local_408.f_9));
						func_146(1, 0);
						func_146(2, 0);
						func_146(3, 0);
						func_146(4, 0);
						func_146(5, 0);
						func_146(0, 1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
						SYSTEM::SETTIMERA(0);
						GlobalFunc_4773(&Local_408, 22);
					}
				}
				if (!iLocal_969)
				{
				}
				if (!iLocal_969)
				{
					if (bLocal_970)
					{
						if ((((((((((PED::IS_PED_INJURED(Local_838.f_3[0]) || PED::IS_PED_INJURED(Local_838.f_3[1])) || PED::IS_PED_INJURED(Local_838.f_3[2])) || PED::IS_PED_INJURED(Local_838.f_3[3])) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_838.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_838.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_838.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_838.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_838.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_838.f_3[2], 0, 2))) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_838.f_3[1], 1) < 6f)
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_838.f_3[0], iLocal_922);
							func_282(&(Local_838.f_3));
							func_281(&uLocal_940);
							func_309(&Local_408, "Aggro Heard Shot", 8);
							iLocal_969 = 1;
						}
					}
				}
				break;
			
			case 22:
				if (GlobalFunc_5682(Local_408.f_3, 1) < 250f)
				{
					if (func_111())
					{
						GlobalFunc_6581(&uLocal_1104, 1);
						GlobalFunc_6581(&uLocal_1104, 16);
						GlobalFunc_6581(&uLocal_1104, 32);
						GlobalFunc_9566(&Local_408, 100, 1, 0, 0);
						if (!PED::IS_PED_INJURED(Local_408.f_3) && !PED::IS_PED_INJURED(Local_408.f_2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_408.f_3);
							TASK::TASK_GO_TO_ENTITY(Local_408.f_3, Local_408.f_2, 20000, 6f, 1073741824, 1073741824, 0);
						}
						SYSTEM::SETTIMERA(0);
						Local_408.f_114 = 0;
						GlobalFunc_4773(&Local_408, 24);
					}
				}
				else
				{
					func_309(&Local_408, "Player abandoned passenger", 8);
				}
				break;
			
			case 24:
				if (GlobalFunc_5682(Local_408.f_2, 1) < 7f && SYSTEM::TIMERA() > 3000)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_408.f_3, Local_408.f_2, -1, 2048, 4);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_933);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_933);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_408.f_2, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_933);
					TASK::TASK_PERFORM_SEQUENCE(Local_408.f_3, uLocal_933);
					Local_408.f_56 = 50;
					func_107(&Local_408);
					GlobalFunc_10596(&Local_408);
					GlobalFunc_7558(&Local_408);
					if (iLocal_956 == 8)
					{
						GlobalFunc_4748(&Local_408, 0);
					}
					GlobalFunc_4773(&Local_408, 27);
				}
				else if (GlobalFunc_5682(Local_408.f_3, 1) > 100f)
				{
					func_309(&Local_408, "Player abandoned passenger", 8);
				}
				break;
			
			case 27:
				if ((!GlobalFunc_111() && !ENTITY::IS_ENTITY_DEAD(Local_408.f_3)) && GlobalFunc_8928(&Local_408, 19) > 2f)
				{
					GlobalFunc_6589(&Local_408, 19, 0);
					GlobalFunc_4773(&Local_408, 29);
					if (MISC::CREATE_INCIDENT(5, Local_1004, 1, 0f, &uLocal_947))
					{
						MISC::_SET_INCIDENT_UNK(uLocal_947, 200f);
						bLocal_972 = true;
					}
					if (MISC::CREATE_INCIDENT(7, Local_1004, 3, 0f, &uLocal_948))
					{
						bLocal_972 = true;
					}
				}
				break;
			
			case 29:
				if (func_70(&Local_408, &uLocal_1111))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_408.f_3))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_408.f_3))
						{
							TASK::CLEAR_PED_TASKS(Local_408.f_3);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_933);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_933);
							TASK::TASK_SMART_FLEE_COORD(0, Local_408.f_17, 500f, 30000, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 1048576000, 0, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 1048576000, 0, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 1048576000, 0, 1193033728);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_933);
							TASK::TASK_PERFORM_SEQUENCE(Local_408.f_3, uLocal_933);
							PED::SET_PED_KEEP_TASK(Local_408.f_3, 1);
						}
					}
					func_10(1, &Local_408, 0);
					SYSTEM::SETTIMERA(0);
					GlobalFunc_4773(&Local_408, 30);
				}
				break;
			
			case 30:
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_412();
				}
				else if (bLocal_972)
				{
					iLocal_945 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_1004, 40f, joaat("ambulance"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_945, 0))
					{
						iLocal_973 = 1;
					}
					iLocal_945 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Local_1004, 40f, joaat("police"), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_945, 0))
					{
						iLocal_973 = 1;
					}
					iLocal_943 = PED::GET_RANDOM_PED_AT_COORD(Local_1004, 10f, 10f, 5f, -1);
					if (!PED::IS_PED_INJURED(iLocal_943))
					{
						iLocal_973 = 1;
					}
					if (iLocal_973 || SYSTEM::TIMERA() > 30000)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						func_412();
					}
				}
				else
				{
					func_412();
				}
				break;
			}
	}
}


void func_10(bool bParam0, var uParam1, bool bParam2)//Position - 0xE0C
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
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)//Position - 0xE48
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
		func_16(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_4986(&uLocal_89) * 1000f)), 12, 0);
}





void func_16(int iParam0)//Position - 0x103F
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






















































int func_70(var uParam0, var uParam1)//Position - 0x28A3
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
				func_96(uParam0);
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
				func_71(uParam0);
				GlobalFunc_8281(uParam0, 0, 0, 0);
				GlobalFunc_778(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_71(var uParam0)//Position - 0x2975
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

























void func_96(var uParam0)//Position - 0x3A92
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











void func_107(var uParam0)//Position - 0x3D4D
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




int func_111()//Position - 0x3DD4
{
	int iVar0;
	
	if (iLocal_932 < 4 && ((((((((((PED::IS_PED_INJURED(Local_838.f_3[0]) || PED::IS_PED_INJURED(Local_838.f_3[1])) || PED::IS_PED_INJURED(Local_838.f_3[2])) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_838.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_838.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_838.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_838.f_3[0], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_838.f_3[1], 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_838.f_3[2], 0, 2))) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_838.f_3[1], 1) < 6f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, false, 1, 0) && ((((((!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_838.f_3[0])) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_838.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_838.f_3[2]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_838.f_3[0]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_838.f_3[1]))) || (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_838.f_3[2]))))))
	{
		Local_408.f_114 = 1;
		iLocal_932 = 4;
	}
	switch (iLocal_932)
	{
		case 0:
			GlobalFunc_9566(&Local_408, 90, 1, 0, 0);
			GlobalFunc_4749(&Local_1033, -1, 1);
			func_144();
			MISC::CLEAR_BIT(&iLocal_958, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_963))
			{
				if ((!PED::IS_PED_INJURED(Local_838.f_3[0]) && !PED::IS_PED_INJURED(Local_838.f_3[1])) && !PED::IS_PED_INJURED(Local_838.f_3[2]))
				{
					uLocal_963 = PED::CREATE_SYNCHRONIZED_SCENE(Local_995, Local_998, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_963, 1);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[0], uLocal_963, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[1], uLocal_963, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[2], uLocal_963, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
				}
			}
			iLocal_950 = MISC::GET_GAME_TIMER();
			iLocal_932 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111() && !MISC::IS_BIT_SET(iLocal_958, 10))
			{
				GlobalFunc_9566(&Local_408, 91, 1, 0, 0);
				MISC::SET_BIT(&iLocal_958, 10);
				GlobalFunc_7731(&uLocal_1026);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_950) > 4000)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					if (GlobalFunc_4752(&Local_408))
					{
						GlobalFunc_159("TAXI_VIEW", -1);
					}
					iLocal_966 = 1;
					if ((!PED::IS_PED_INJURED(Local_838.f_3[3]) && !PED::IS_PED_INJURED(uLocal_940[0])) && !PED::IS_PED_INJURED(uLocal_940[1]))
					{
						uLocal_960 = PED::CREATE_SYNCHRONIZED_SCENE(Local_989, Local_992, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[3], uLocal_960, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[0], uLocal_960, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[1], uLocal_960, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				}
			}
			if (GlobalFunc_74("TAXI_VIEW") && (PAD::IS_CONTROL_PRESSED(0, 80) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!PED::IS_PED_INJURED(Local_408.f_3) && (!GlobalFunc_111() || GlobalFunc_4986(&uLocal_1026) > 9f))
			{
				if ((ENTITY::IS_ENTITY_AT_COORD(Local_408.f_3, Local_1001, 1.5f, 1.5f, 2f, false, 1, 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_408.f_3, 242628503) == 7) && (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_963) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_963) > 0.995f))
				{
					if ((!PED::IS_PED_INJURED(Local_838.f_3[0]) && !PED::IS_PED_INJURED(Local_838.f_3[1])) && !PED::IS_PED_INJURED(Local_838.f_3[2]))
					{
						uLocal_964 = PED::CREATE_SYNCHRONIZED_SCENE(Local_995, Local_998, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[0], uLocal_964, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[1], uLocal_964, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[2], uLocal_964, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_964, 1);
					}
					TASK::TASK_PLAY_ANIM(Local_408.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -1056964608, -1, 0, 0, 0, 0, 0);
					iLocal_952 = MISC::GET_GAME_TIMER();
					iLocal_950 = MISC::GET_GAME_TIMER();
					iLocal_932 = 2;
				}
			}
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_950) > 2500 && !MISC::IS_BIT_SET(iLocal_958, 1))
			{
				GlobalFunc_9566(&Local_408, 89, 1, 1, 0);
				MISC::SET_BIT(&iLocal_958, 1);
			}
			if (((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_964) >= 0.838f && !PED::IS_PED_INJURED(Local_408.f_3)) && !PED::IS_PED_INJURED(Local_838.f_3[1])) && !MISC::IS_BIT_SET(iLocal_958, 6))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_838.f_3[1], joaat("weapon_pistol"), -1, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(Local_408.f_3, joaat("weapon_pistol"), -1, 1, 1);
				MISC::SET_BIT(&iLocal_958, 6);
			}
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_964) >= 0.853f && !PED::IS_PED_INJURED(Local_838.f_3[2])) && !MISC::IS_BIT_SET(iLocal_958, 7))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_838.f_3[2], joaat("weapon_pistol"), -1, 1, 1);
				MISC::SET_BIT(&iLocal_958, 7);
			}
			if (!MISC::IS_BIT_SET(iLocal_958, 3))
			{
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_960) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_960) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_960))
				{
					if ((!PED::IS_PED_INJURED(Local_838.f_3[3]) && !PED::IS_PED_INJURED(uLocal_940[0])) && !PED::IS_PED_INJURED(uLocal_940[1]))
					{
						uLocal_961 = PED::CREATE_SYNCHRONIZED_SCENE(Local_989, Local_992, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[3], uLocal_961, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[0], uLocal_961, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[1], uLocal_961, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_961, 1);
						MISC::SET_BIT(&iLocal_958, 3);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_958, 1))
			{
				Local_1020 = { GlobalFunc_2209() };
				if (MISC::ARE_STRINGS_EQUAL(&cLocal_1008, &Local_1020) || MISC::ARE_STRINGS_EQUAL(&cLocal_1014, &Local_1020))
				{
					if ((!PED::IS_PED_INJURED(Local_838.f_3[3]) && !PED::IS_PED_INJURED(uLocal_940[0])) && !PED::IS_PED_INJURED(uLocal_940[1]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_961))
						{
							uLocal_962 = PED::CREATE_SYNCHRONIZED_SCENE(Local_989, Local_992, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[3], uLocal_962, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[0], uLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[1], uLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_962, 1);
							iLocal_951 = MISC::GET_GAME_TIMER();
							iLocal_932 = 3;
						}
						else
						{
							uLocal_962 = PED::CREATE_SYNCHRONIZED_SCENE(Local_989, Local_992, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[3], uLocal_962, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[0], uLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[1], uLocal_962, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_962, 1);
							iLocal_951 = MISC::GET_GAME_TIMER();
							iLocal_932 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			switch (iLocal_954)
			{
				case 0:
					if (((MISC::GET_GAME_TIMER() - iLocal_951) > 850 && !PED::IS_PED_INJURED(Local_838.f_3[3])) && !MISC::IS_BIT_SET(iLocal_958, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_838.f_3[3], joaat("weapon_pistol"), -1, 1, 1);
						MISC::SET_BIT(&iLocal_958, 8);
					}
					if (((!PED::IS_PED_INJURED(Local_838.f_3[0]) && !PED::IS_PED_INJURED(Local_838.f_3[1])) && !PED::IS_PED_INJURED(Local_838.f_3[2])) && !PED::IS_PED_INJURED(Local_408.f_3))
					{
						PED::SET_PED_RESET_FLAG(Local_838.f_3[0], 156, 1);
						PED::SET_PED_RESET_FLAG(Local_838.f_3[1], 156, 1);
						PED::SET_PED_RESET_FLAG(Local_838.f_3[2], 156, 1);
						PED::SET_PED_RESET_FLAG(Local_408.f_3, 156, 1);
						if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_964) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_964) == 1f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_964)) || (MISC::GET_GAME_TIMER() - iLocal_952) > 27000)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_952) > 27000)
							{
							}
							iLocal_975 = 1;
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_838.f_3[0], Local_408.f_3, -1, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_838.f_3[1], Local_408.f_3, -1, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_838.f_3[2], Local_408.f_3, -1, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_408.f_3, Local_838.f_3[1], -1, 0);
							iLocal_950 = 0;
							iLocal_954++;
						}
					}
					break;
				
				case 1:
					if (((MISC::GET_GAME_TIMER() - iLocal_951) > 850 && !PED::IS_PED_INJURED(Local_838.f_3[3])) && !MISC::IS_BIT_SET(iLocal_958, 8))
					{
						WEAPON::GIVE_WEAPON_TO_PED(Local_838.f_3[3], joaat("weapon_pistol"), -1, 1, 1);
						MISC::SET_BIT(&iLocal_958, 8);
					}
					if (!PED::IS_PED_INJURED(Local_838.f_3[3]))
					{
						PED::SET_PED_RESET_FLAG(Local_838.f_3[3], 156, 1);
					}
					if (!MISC::IS_BIT_SET(iLocal_958, 4))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_962) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_962) == 1f)
						{
							if (((!PED::IS_PED_INJURED(Local_838.f_3[3]) && !PED::IS_PED_INJURED(uLocal_940[0])) && !PED::IS_PED_INJURED(uLocal_940[1])) && !PED::IS_PED_INJURED(Local_408.f_3))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_940[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_940[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								PED::FORCE_PED_MOTION_STATE(uLocal_940[0], -1115154469, 0, 0, 0);
								PED::FORCE_PED_MOTION_STATE(uLocal_940[1], -1115154469, 0, 0, 0);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_838.f_3[3], Local_408.f_3, -1, 1);
								MISC::SET_BIT(&iLocal_958, 4);
							}
						}
					}
					Local_1020 = { GlobalFunc_2209() };
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Local_1020) && iLocal_950 == 0)
					{
						iLocal_950 = MISC::GET_GAME_TIMER();
					}
					else if ((iLocal_950 > 0 && (MISC::GET_GAME_TIMER() - iLocal_950) > 1500) && !MISC::IS_BIT_SET(iLocal_958, 9))
					{
						GlobalFunc_4935();
						GlobalFunc_164("TAXI_OBJ_GYB", 4000, 0);
						func_137(&(Local_838.f_3), &(Local_838.f_11));
						iLocal_966 = 0;
						CAM::DESTROY_CAM(Local_408, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						iLocal_950 = MISC::GET_GAME_TIMER();
						iLocal_954 = 2;
						MISC::SET_BIT(&iLocal_958, 9);
					}
					else if (iLocal_950 > 0 && (MISC::GET_GAME_TIMER() - iLocal_950) > 1200)
					{
						if (GlobalFunc_1720() && CAM::IS_CAM_ACTIVE(Local_408))
						{
							if (!iLocal_976)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_976 = 1;
							}
						}
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_950) > 4000 && MISC::IS_BIT_SET(iLocal_958, 9))
					{
						GlobalFunc_10630(&(Local_408.f_244), Local_408.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_950 = MISC::GET_GAME_TIMER();
						MISC::CLEAR_BIT(&iLocal_958, 9);
					}
					if ((((!PED::IS_PED_INJURED(Local_408.f_3) && !PED::IS_PED_INJURED(Local_838.f_3[0])) && !PED::IS_PED_INJURED(Local_838.f_3[2])) && !MISC::IS_BIT_SET(iLocal_958, 9)) && (MISC::GET_GAME_TIMER() - iLocal_950) > 2000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_838.f_3[0], 115);
						ENTITY::SET_ENTITY_HEALTH(Local_838.f_3[2], 115);
						iLocal_950 = MISC::GET_GAME_TIMER();
						iLocal_954 = 8;
					}
					break;
				
				case 3:
					if (!GlobalFunc_111())
					{
						GlobalFunc_9566(&Local_408, 12, 1, 0, 0);
						GlobalFunc_8281(&Local_408, 19, 0, 0);
						iLocal_950 = MISC::GET_GAME_TIMER();
						iLocal_954++;
					}
					break;
				
				case 4:
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_8281(&Local_408, 19, 0, 0);
						GlobalFunc_9566(&Local_408, 116, 1, 0, 0);
						iLocal_954++;
					}
					break;
				
				case 5:
				case 6:
				case 7:
					if (GlobalFunc_8928(&Local_408, 19) > 2f)
					{
						GlobalFunc_8281(&Local_408, 19, 0, 0);
						GlobalFunc_9566(&Local_408, 116, 1, 0, 0);
						iLocal_954++;
					}
					break;
				
				case 8:
					if ((!PED::IS_PED_INJURED(Local_838.f_3[0]) && !PED::IS_PED_INJURED(Local_838.f_3[1])) && !PED::IS_PED_INJURED(Local_838.f_3[2]))
					{
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_922, Local_408.f_413);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_922, Local_408.f_413);
						PED::SET_PED_ACCURACY(Local_838.f_3[0], 100);
						PED::SET_PED_ACCURACY(Local_838.f_3[2], 100);
						TASK::TASK_SHOOT_AT_ENTITY(Local_838.f_3[0], Local_408.f_3, 5000, -957453492);
						TASK::TASK_SHOOT_AT_ENTITY(Local_838.f_3[1], Local_408.f_3, 5000, -687903391);
						TASK::TASK_SHOOT_AT_ENTITY(Local_838.f_3[2], Local_408.f_3, 5000, -957453492);
						iLocal_950 = MISC::GET_GAME_TIMER();
						iLocal_954++;
					}
					break;
				
				case 9:
					if ((MISC::GET_GAME_TIMER() - iLocal_950) > 5000)
					{
						iLocal_932 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (!Local_408.f_114)
			{
				Local_408.f_114 = 1;
			}
			GlobalFunc_6594(&uLocal_1104, 1);
			GlobalFunc_6594(&uLocal_1104, 16);
			GlobalFunc_6594(&uLocal_1104, 32);
			GlobalFunc_4935();
			func_123();
			func_122();
			func_282(&(Local_838.f_3));
			func_137(&(Local_838.f_3), &(Local_838.f_11));
			func_281(&uLocal_940);
			iLocal_950 = MISC::GET_GAME_TIMER();
			iLocal_932 = 5;
			break;
		
		case 5:
			if (iLocal_955 >= 2 && !GlobalFunc_6588(&Local_408, 8))
			{
				GlobalFunc_8925(&Local_408, 8);
			}
			else if (GlobalFunc_6588(&Local_408, 8) && GlobalFunc_8928(&Local_408, 8) > 3f)
			{
				func_120();
				func_117();
				iLocal_950 = MISC::GET_GAME_TIMER();
				iLocal_932 = 6;
			}
			else
			{
				iLocal_955 = 0;
			}
			func_115(&(Local_838.f_3), &(Local_838.f_11), &(Local_880.f_3), &(Local_880.f_11));
			break;
		
		case 6:
			if ((PED::IS_PED_INJURED(Local_880.f_3[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[0], 0)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_880.f_27[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_880.f_27[0]);
			}
			if ((((PED::IS_PED_INJURED(Local_880.f_3[2]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_880.f_3[2], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_880.f_3[2], Local_408.f_3, 1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[1], 0)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_880.f_27[1]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_880.f_27[1]);
			}
			if (HUD::DOES_BLIP_EXIST(Local_880.f_37[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[0], 0))
			{
				HUD::REMOVE_BLIP(&(Local_880.f_37[0]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_880.f_37[1]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[1], 0))
			{
				HUD::REMOVE_BLIP(&(Local_880.f_37[1]));
			}
			if (!iLocal_971 && ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[0], 0) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_880.f_27[0])) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[1], 0) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_880.f_27[1]))))
			{
				if (func_114(&(Local_880.f_3)))
				{
					func_137(&(Local_880.f_3), &(Local_880.f_11));
					func_113();
					iLocal_971 = 1;
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_958, 2))
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_950) > 5000)
				{
					func_282(&(Local_880.f_3));
					func_112(&(Local_838.f_3));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_922, Local_408.f_413);
					MISC::SET_BIT(&iLocal_958, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_880.f_3)
				{
					if (!PED::IS_PED_INJURED(Local_880.f_3[iVar0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_880.f_3[iVar0], -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_880.f_3[iVar0], -1442466670) != 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_880.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_408.f_3))
			{
				if (iLocal_974)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_9566(&Local_408, 140, 1, 0, 1);
					}
					iLocal_974 = 0;
				}
			}
			return func_115(&(Local_838.f_3), &(Local_838.f_11), &(Local_880.f_3), &(Local_880.f_11));
			break;
	}
	return 0;
}

void func_112(var uParam0)//Position - 0x5122
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_113()//Position - 0x5157
{
	if (HUD::DOES_BLIP_EXIST(Local_880.f_37[0]))
	{
		HUD::REMOVE_BLIP(&(Local_880.f_37[0]));
	}
	if (HUD::DOES_BLIP_EXIST(Local_880.f_37[1]))
	{
		HUD::REMOVE_BLIP(&(Local_880.f_37[1]));
	}
}

int func_114(var uParam0)//Position - 0x5195
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_115(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x51D3
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_956 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam1[iVar0]);
			}
			if (func_116(&Local_408, (*uParam0)[iVar0], 1))
			{
				iLocal_956++;
			}
			iLocal_955++;
		}
		else
		{
			iLocal_956 = 0;
			iVar1 = 0;
		}
		if (ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST((*uParam3)[iVar0]))
			{
				HUD::REMOVE_BLIP(uParam3[iVar0]);
				iLocal_974 = 1;
			}
			if (func_116(&Local_408, (*uParam2)[iVar0], 1))
			{
				iLocal_956++;
			}
		}
		else
		{
			iLocal_956 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_116(var uParam0, int iParam1, bool bParam2)//Position - 0x5290
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_117()//Position - 0x52EC
{
	if (!HUD::DOES_BLIP_EXIST(Local_880.f_37[0]) && !HUD::DOES_BLIP_EXIST(Local_880.f_37[1]))
	{
		Local_880.f_37[0] = GlobalFunc_5098(Local_880.f_27[0], 0, 0);
		Local_880.f_37[1] = GlobalFunc_5098(Local_880.f_27[1], 0, 0);
	}
}



void func_120()//Position - 0x53FD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[0], 0))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_880.f_27[0], iLocal_953, func_121(0), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_880.f_27[0], 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_880.f_27[1], 0))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_880.f_27[1], iLocal_953, func_121(1), 6, 1000, 786603);
		VEHICLE::SET_PLAYBACK_SPEED(Local_880.f_27[1], 1f);
	}
}

char* func_121(int iParam0)//Position - 0x5477
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_122()//Position - 0x54A6
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_408.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_408.f_3))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_408.f_8))
			{
				Local_408.f_8 = GlobalFunc_5098(Local_408.f_3, 1, 0);
			}
			WEAPON::GET_CURRENT_PED_WEAPON(Local_408.f_3, &iVar0, 1);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				WEAPON::GIVE_WEAPON_TO_PED(Local_408.f_3, joaat("weapon_combatpistol"), 100, 0, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 3, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 12, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 24, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 34, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_408.f_3, 37, 1);
			PED::SET_PED_SEEING_RANGE(Local_408.f_3, 300f);
			PED::SET_PED_HEARING_RANGE(Local_408.f_3, 300f);
			PED::SET_PED_ID_RANGE(Local_408.f_3, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(Local_408.f_3, 1);
			PED::SET_PED_CAN_EVASIVE_DIVE(Local_408.f_3, 1);
			PED::SET_PED_ACCURACY(Local_408.f_3, 80);
			PED::SET_PED_COMBAT_RANGE(Local_408.f_3, 2);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_408.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, 0, 0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_922, Local_408.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_408.f_413, iLocal_922);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_933);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_933);
			TASK::TASK_SEEK_COVER_FROM_POS(0, 201.9434f, -3324.029f, 4.7888f, 5000, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_933);
			TASK::TASK_PERFORM_SEQUENCE(Local_408.f_3, uLocal_933);
			PED::SET_PED_KEEP_TASK(Local_408.f_3, 1);
		}
	}
}

void func_123()//Position - 0x564A
{
	int iVar0;
	
	Local_880.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_880.f_32[0], func_125(1), func_124(1), 1, 1);
	Local_880.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_880.f_32[1], func_125(2), func_124(2), 1, 1);
	Local_880.f_3[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_880.f_27[0], 26, Local_880.f_19[0], -1, 1, 1);
	Local_880.f_3[1] = PED::CREATE_PED_INSIDE_VEHICLE(Local_880.f_27[0], 26, Local_880.f_19[0], 0, 1, 1);
	Local_880.f_3[2] = PED::CREATE_PED_INSIDE_VEHICLE(Local_880.f_27[1], 26, Local_880.f_19[0], -1, 1, 1);
	Local_880.f_3[3] = PED::CREATE_PED_INSIDE_VEHICLE(Local_880.f_27[1], 26, Local_880.f_19[0], 0, 1, 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_880.f_27[1], "LuisLopz");
	GlobalFunc_173(&(Local_408.f_244), 6, Local_880.f_3[0], "TaxiBruce", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_880.f_3[0], "TaxiBruce");
	WEAPON::GIVE_WEAPON_TO_PED(Local_880.f_3[0], joaat("weapon_smg"), 100, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_880.f_3[1], joaat("weapon_pistol"), 100, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_880.f_3[2], joaat("weapon_smg"), 100, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_880.f_3[3], joaat("weapon_pistol"), 100, 1, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_880.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(50, 100));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_880.f_3[iVar0], 2, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_880.f_3[iVar0], 13, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_880.f_3[iVar0], 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_880.f_3[iVar0], 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_880.f_3[iVar0], 37, 1);
		PED::SET_PED_CONFIG_FLAG(Local_880.f_3[iVar0], 42, 1);
		PED::SET_PED_SEEING_RANGE(Local_880.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_880.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_880.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_880.f_3[iVar0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_880.f_3[iVar0], iLocal_922);
		PED::SET_PED_ACCURACY(Local_880.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_124(int iParam0)//Position - 0x5888
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
			break;
		
		case 2:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_125(int iParam0)//Position - 0x58BA
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.66f, 4.8352f;
			break;
		
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}












void func_137(var uParam0, var uParam1)//Position - 0x5F7C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!HUD::DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = GlobalFunc_5098((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}







void func_144()//Position - 0x6088
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_408.f_3))
	{
		if (!PED::IS_PED_INJURED(Local_408.f_3))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_408.f_3, Local_408.f_413);
			TASK::TASK_LOOK_AT_ENTITY(Local_408.f_3, Local_838.f_3[1], -1, 2048, 4);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_933);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_933);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 262144);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1001, 1f, 30000, 1048576000, 0, 1193033728);
			TASK::TASK_ACHIEVE_HEADING(0, -30.3f, 0);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_933);
			TASK::TASK_PERFORM_SEQUENCE(Local_408.f_3, uLocal_933);
		}
	}
}


void func_146(int iParam0, bool bParam1)//Position - 0x613A
{
	if (iParam0 < Local_342 && iParam0 >= 0)
	{
		if (bParam1)
		{
			GlobalFunc_812(&(Local_342.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			GlobalFunc_811(&(Local_342.f_1[iParam0 /*4*/]), 2);
		}
	}
}







int func_153(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x6412
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_170(uParam0))
		{
			GlobalFunc_4751(uParam0, &(uParam0->f_43));
			GlobalFunc_10602(uParam0);
			GlobalFunc_10601(uParam0);
			GlobalFunc_10826(uParam0);
			func_159(uParam0, fParam2, fParam3);
			func_156(uParam0);
			return GlobalFunc_8931(uParam0, iParam1);
		}
	}
	return 0;
}



void func_156(var uParam0)//Position - 0x6641
{
	float fVar0;
	
	if ((GlobalFunc_4746(uParam0) && GlobalFunc_747(uParam0->f_81, 67108864)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_96) >= 10000)
		{
			fVar0 = GlobalFunc_6618(uParam0->f_17, 1);
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



void func_159(var uParam0, float fParam1, float fParam2)//Position - 0x6766
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
					func_309(uParam0, "Car not moving", 20);
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











int func_170(var uParam0)//Position - 0x6E3A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_309(uParam0, "Passenger left car.", 9);
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
				func_171(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_171(var uParam0, bool bParam1)//Position - 0x6EC9
{
	func_179(uParam0, uParam0->f_3);
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
						func_309(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (GlobalFunc_8928(uParam0, 14) > 20f)
				{
					if (GlobalFunc_5682(uParam0->f_4, 1) > 40f)
					{
						func_309(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_309(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}








void func_179(var uParam0, int iParam1)//Position - 0x71D9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_309(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}








void func_187(var uParam0)//Position - 0x7357
{
	uParam0->f_120 = 0;
}


void func_189()//Position - 0x738D
{
	switch (iLocal_923)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_408.f_4, 0) && GlobalFunc_713(Local_408.f_4, Local_408.f_17, 1) < 300f)
			{
				func_204();
				iLocal_923 = 1;
			}
			break;
		
		case 1:
			if (func_202())
			{
				iLocal_923 = 2;
			}
			break;
		
		case 2:
			if (!bLocal_970)
			{
				func_199();
				func_198();
				func_194();
				func_193();
				func_192();
				func_191();
				iLocal_923 = 3;
				bLocal_970 = true;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_408.f_4, 0) && GlobalFunc_713(Local_408.f_4, Local_408.f_17, 1) > 350f)
			{
				func_190();
				iLocal_923 = 0;
			}
			break;
	}
}

void func_190()//Position - 0x7455
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_929);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_930);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_931);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_838.f_19[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_838.f_19[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_838.f_32[0]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_838.f_32[1]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_838.f_32[2]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_838.f_32[3]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_880.f_32[1]);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_953, func_121(0));
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_953, func_121(1));
	STREAMING::REMOVE_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REMOVE_ANIM_DICT(sLocal_1007);
}

void func_191()//Position - 0x74ED
{
	uLocal_934[0] = OBJECT::CREATE_OBJECT(iLocal_929, 204.8445f, -3333.998f, 4.795367f, 1, 1, 0);
	ENTITY::SET_ENTITY_COORDS(uLocal_934[0], 204.8445f, -3333.998f, 4.795367f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(uLocal_934[0], -0.036243f, -0.00124f, 91.56063f, 2, 1);
	uLocal_934[1] = OBJECT::CREATE_OBJECT(iLocal_929, 212.67f, -3328.77f, 4.79f, 1, 1, 0);
	ENTITY::SET_ENTITY_COORDS(uLocal_934[1], 212.67f, -3328.77f, 4.79f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(uLocal_934[1], -0.04f, -0.01f, 86.36f, 2, 1);
	uLocal_934[2] = OBJECT::CREATE_OBJECT(iLocal_929, 204.8248f, -3328.631f, 4.7915f, 1, 1, 0);
	ENTITY::SET_ENTITY_COORDS(uLocal_934[2], 204.8248f, -3328.631f, 4.7915f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(uLocal_934[2], -0.0027f, -0.0374f, 0.1414f, 2, 1);
	uLocal_939 = OBJECT::CREATE_OBJECT(iLocal_930, 214.2505f, -3314.673f, 4.7883f, 1, 1, 0);
	ENTITY::SET_ENTITY_COORDS(uLocal_939, 214.2505f, -3314.673f, 4.7883f, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(uLocal_939, 0f, 0f, -17.399f, 2, 1);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_931))
	{
		uLocal_938 = OBJECT::CREATE_OBJECT(iLocal_931, 220.7266f, -3320.001f, 5.2749f, 1, 1, 0);
		ENTITY::SET_ENTITY_COORDS(uLocal_938, 220.7266f, -3320.001f, 5.2749f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(uLocal_938, 0f, 0f, 0f, 2, 1);
	}
}

void func_192()//Position - 0x768C
{
	if ((!PED::IS_PED_INJURED(uLocal_940[0]) && !PED::IS_PED_INJURED(uLocal_940[0])) && !PED::IS_PED_INJURED(Local_838.f_3[3]))
	{
		uLocal_959 = PED::CREATE_SYNCHRONIZED_SCENE(Local_989, Local_992, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_959, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[3], uLocal_959, sLocal_1007, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[0], uLocal_959, sLocal_1007, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_940[1], uLocal_959, sLocal_1007, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1148846080, 0);
	}
	if ((!PED::IS_PED_INJURED(Local_838.f_3[0]) && !PED::IS_PED_INJURED(Local_838.f_3[1])) && !PED::IS_PED_INJURED(Local_838.f_3[2]))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_838.f_3[0], joaat("weapon_pistol"), -1, 1, 1);
		uLocal_963 = PED::CREATE_SYNCHRONIZED_SCENE(Local_995, Local_998, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_963, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[0], uLocal_963, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[1], uLocal_963, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Local_838.f_3[2], uLocal_963, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
}

void func_193()//Position - 0x782C
{
	int iVar0;
	
	iVar0 = 0;
	GlobalFunc_173(&(Local_408.f_244), 4, Local_838.f_3[1], "TaxiDom", 0, 1);
	GlobalFunc_173(&(Local_408.f_244), 5, Local_838.f_3[3], "TaxiGangM", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_838.f_3[1], "TaxiDom");
	AUDIO::SET_AMBIENT_VOICE_NAME(Local_838.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		PED::SET_PED_MONEY(Local_838.f_3[iVar0], MISC::GET_RANDOM_INT_IN_RANGE(20, 50));
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_838.f_3[iVar0], 2, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_838.f_3[iVar0], 13, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_838.f_3[iVar0], 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_838.f_3[iVar0], 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_838.f_3[iVar0], 37, 1);
		PED::SET_PED_CONFIG_FLAG(Local_838.f_3[iVar0], 42, 1);
		PED::SET_PED_SEEING_RANGE(Local_838.f_3[iVar0], 300f);
		PED::SET_PED_HEARING_RANGE(Local_838.f_3[iVar0], 300f);
		PED::SET_PED_ID_RANGE(Local_838.f_3[iVar0], 300f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_838.f_3[iVar0], 0);
		PED::SET_PED_ACCURACY(Local_838.f_3[iVar0], 1);
		iVar0++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_838.f_3[0], iLocal_922);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_838.f_3[1], iLocal_922);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_838.f_3[2], iLocal_922);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_838.f_3[3], iLocal_922);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_940[iVar0], 42, 1);
		PED::SET_PED_SEEING_RANGE(uLocal_940[iVar0], 100f);
		PED::SET_PED_HEARING_RANGE(uLocal_940[iVar0], 100f);
		PED::SET_PED_ID_RANGE(uLocal_940[iVar0], 100f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_940[iVar0], 1);
		iVar0++;
	}
	GlobalFunc_173(&(Local_408.f_244), 7, uLocal_940[1], "TaxiGangGirl2", 0, 1);
	GlobalFunc_173(&(Local_408.f_244), 8, uLocal_940[0], "TaxiGangGirl1", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_940[1], "TaxiGangGirl2");
	AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_940[0], "TaxiGangGirl1");
}

void func_194()//Position - 0x7A3D
{
	Local_838.f_3[0] = PED::CREATE_PED(26, Local_838.f_19[0], func_197(1), func_196(1), 1, 1);
	Local_838.f_3[1] = PED::CREATE_PED(26, Local_838.f_19[0], func_195(2), 0f, 1, 1);
	Local_838.f_3[2] = PED::CREATE_PED(26, Local_838.f_19[0], func_197(3), func_196(3), 1, 1);
	Local_838.f_3[3] = PED::CREATE_PED(26, Local_838.f_19[0], func_197(4), func_196(4), 1, 1);
	PED::SET_PED_CONFIG_FLAG(Local_838.f_3[1], 20, 1);
	uLocal_940[0] = PED::CREATE_PED(26, Local_838.f_19[1], func_197(5), func_196(5), 1, 1);
	uLocal_940[1] = PED::CREATE_PED(26, Local_838.f_19[1], func_197(6), func_196(6), 1, 1);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_940[0], 0);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_940[1], 0);
	if (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[0], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[0], 3, 0, 5, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[0], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[0], 10, 0, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[1]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[1], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[1], 10, 0, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[2]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[2], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[2], 10, 1, 0, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_838.f_3[3]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[3], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[3], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[3], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_838.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_195(int iParam0)//Position - 0x7C72
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
			break;
		
		case 2:
			return 203.4f, -3323.22f, 5.79f;
			break;
		
		case 3:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_196(int iParam0)//Position - 0x7CD5
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
			break;
		
		case 2:
			return -129.32f;
			break;
		
		case 3:
			return 39.53f;
			break;
		
		case 4:
			return -139.98f;
			break;
		
		case 5:
			return 147.25f;
			break;
		
		case 6:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_197(int iParam0)//Position - 0x7D4B
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
			break;
		
		case 2:
			return 204.27f, -3321.77f, 5.79f;
			break;
		
		case 3:
			return 204.93f, -3322.56f, 4.79f;
			break;
		
		case 4:
			return 218.19f, -3323.58f, 5.8f;
			break;
		
		case 5:
			return 219.52f, -3324f, 5.8f;
			break;
		
		case 6:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_198()//Position - 0x7DFF
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_838.f_27[2], 5, 0, 0);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_838.f_27[3], 5, 0, 0);
}

void func_199()//Position - 0x7E25
{
	Local_838.f_27[0] = VEHICLE::CREATE_VEHICLE(Local_838.f_32[0], func_201(1), func_200(1), 1, 1);
	Local_838.f_27[1] = VEHICLE::CREATE_VEHICLE(Local_838.f_32[1], func_201(2), func_200(2), 1, 1);
	Local_838.f_27[2] = VEHICLE::CREATE_VEHICLE(Local_838.f_32[3], func_201(3), func_200(3), 1, 1);
	Local_838.f_27[3] = VEHICLE::CREATE_VEHICLE(Local_838.f_32[3], func_201(4), func_200(4), 1, 1);
	uLocal_944 = VEHICLE::CREATE_VEHICLE(Local_838.f_32[2], func_201(5), func_200(5), 1, 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_838.f_27[2], "NikoB");
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_838.f_27[3], "RomanB");
}

float func_200(int iParam0)//Position - 0x7EE8
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
			break;
		
		case 2:
			return 33.5561f;
			break;
		
		case 3:
			return 87.9127f;
			break;
		
		case 4:
			return 195.38f;
			break;
		
		case 5:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_201(int iParam0)//Position - 0x7F4D
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		
		case 2:
			return 202.0773f, -3320.393f, 4.7657f;
			break;
		
		case 3:
			return 216.1051f, -3318.837f, 4.7918f;
			break;
		
		case 4:
			return 221.6868f, -3324.747f, 5.3063f;
			break;
		
		case 5:
			return 200.1736f, -3320.666f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_202()//Position - 0x7FE6
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_929))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_930))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_838.f_19[0]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_838.f_19[1]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_838.f_32[0]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_838.f_32[1]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_838.f_32[2]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_838.f_32[3]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_880.f_32[1]))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_949, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_953, func_121(0)))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_949, 1000);
		return 0;
	}
	if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_953, func_121(1)))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1007))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_949, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_931))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_949, 1000);
	}
	return 1;
}


void func_204()//Position - 0x81D1
{
	STREAMING::REQUEST_MODEL(iLocal_929);
	STREAMING::REQUEST_MODEL(iLocal_930);
	STREAMING::REQUEST_MODEL(iLocal_931);
	STREAMING::REQUEST_MODEL(Local_838.f_19[0]);
	STREAMING::REQUEST_MODEL(Local_838.f_19[1]);
	STREAMING::REQUEST_MODEL(Local_838.f_32[0]);
	STREAMING::REQUEST_MODEL(Local_838.f_32[1]);
	STREAMING::REQUEST_MODEL(Local_838.f_32[2]);
	STREAMING::REQUEST_MODEL(Local_838.f_32[3]);
	STREAMING::REQUEST_MODEL(Local_880.f_32[1]);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_953, func_121(0));
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_953, func_121(1));
	STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
	STREAMING::REQUEST_ANIM_DICT(sLocal_1007);
}

void func_205()//Position - 0x8269
{
	GlobalFunc_6594(&(Local_408.f_55), 2);
	GlobalFunc_6594(&(Local_408.f_55), 4);
	GlobalFunc_6594(&(Local_408.f_55), 16);
	GlobalFunc_6594(&(Local_408.f_55), 64);
	GlobalFunc_6594(&(Local_408.f_55), 256);
	GlobalFunc_6594(&(Local_408.f_55), 512);
	GlobalFunc_6594(&(Local_408.f_55), 1024);
	GlobalFunc_6594(&(Local_408.f_55), 2048);
	GlobalFunc_6594(&(Local_408.f_55), 4096);
	GlobalFunc_6594(&(Local_408.f_55), 1073741824);
	GlobalFunc_6594(&(Local_408.f_100), 8);
	GlobalFunc_6594(&(Local_408.f_100), 2048);
	GlobalFunc_6594(&(Local_408.f_100), 256);
	GlobalFunc_6594(&uLocal_1104, 2);
}








int func_213(var uParam0)//Position - 0x8486
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

int func_214(var uParam0, bool bParam1, float fParam2)//Position - 0x84D9
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
			func_171(uParam0, 1);
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
			func_239(uParam0);
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
					func_309(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && GlobalFunc_713(uParam0->f_3, uParam0->f_11, 1) <= 28f) && GlobalFunc_713(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_235(uParam0, fParam2))
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
									func_309(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!GlobalFunc_4767(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_309(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_228(uParam0);
						if (GlobalFunc_6592(uParam0, uParam0->f_3) < fVar4 || GlobalFunc_6582())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_216(uParam0))
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


int func_216(var uParam0)//Position - 0x8A0C
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
					func_309(uParam0, "You had a dead body in your back seat.", 5);
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
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
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
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
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












void func_228(var uParam0)//Position - 0x91CC
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
					func_309(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}







int func_235(var uParam0, float fParam1)//Position - 0x9610
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




void func_239(var uParam0)//Position - 0x9B26
{
	func_179(uParam0, uParam0->f_3);
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


int func_241(var uParam0, int iParam1)//Position - 0x9BC9
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
			func_309(uParam0, "ped is fleeing or injured", 5);
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
			func_309(uParam0, "No Taxi", 21);
			GlobalFunc_159("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}






void func_247()//Position - 0xA40E
{
	Local_342 = 0;
	func_264(42943/*func_266*/, 42918/*func_265*/, 1);
	func_264(42679/*func_262*/, 42656/*func_261*/, 1);
	func_264(42595/*func_260*/, 42570/*func_259*/, 1);
	func_264(42499/*func_258*/, 42475/*func_257*/, 1);
	func_264(42365/*func_256*/, 42344/*func_255*/, 1);
	func_264(42291/*func_253*/, 42266/*func_252*/, 1);
	func_264(42124/*func_249*/, 42101/*func_248*/, 1);
}

int func_248(var uParam0, var uParam1)//Position - 0xA475
{
	uParam1 = uParam1;
	func_309(uParam0, "Taxi Not Driveable", 1);
	return 1;
}




int func_252(var uParam0, var uParam1)//Position - 0xA51A
{
	uParam1 = uParam1;
	func_309(uParam0, "Didn't lose police in time.", 9);
	return 1;
}





int func_257(var uParam0, var uParam1)//Position - 0xA5EB
{
	uParam1 = uParam1;
	func_309(uParam0, "Taxi Is Flipped", 0);
	return 1;
}


int func_259(var uParam0, var uParam1)//Position - 0xA64A
{
	uParam1 = uParam1;
	func_309(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}


int func_261(var uParam0, var uParam1)//Position - 0xA6A0
{
	uParam1 = uParam1;
	func_309(uParam0, "Taxi Not Driveable", 0);
	return 1;
}



void func_264(int iParam0, int iParam1, bool bParam2)//Position - 0xA73C
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

int func_265(var uParam0, var uParam1)//Position - 0xA7A6
{
	uParam1 = uParam1;
	func_309(uParam0, "Passenger injured.", 15);
	return 1;
}




void func_269()//Position - 0xA88D
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

int func_270()//Position - 0xAA65
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_928))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_949, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1111))
	{
		return 0;
	}
	if (!GlobalFunc_6601(&iLocal_949, 1))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_949, 1000);
		return 0;
	}
	return 1;
}








void func_278()//Position - 0xAFD6
{
	STREAMING::REQUEST_MODEL(iLocal_928);
	GlobalFunc_7563(1);
	uLocal_1111 = GlobalFunc_1455();
}



void func_281(var uParam0)//Position - 0xB05C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[iVar0]);
			PED::SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0], 13, 1);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_933);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_933);
			TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1, 1000));
			TASK::TASK_SMART_FLEE_PED(0, Local_408.f_3, 4000f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_933);
			TASK::TASK_PERFORM_SEQUENCE((*uParam0)[iVar0], uLocal_933);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_282(var uParam0)//Position - 0xB0E9
{
	int iVar0;
	int iVar1;
	
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_922, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_922, Local_408.f_413);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_922, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_922);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			TASK::CLEAR_PED_TASKS((*uParam0)[iVar0]);
			WEAPON::GET_CURRENT_PED_WEAPON((*uParam0)[iVar0], &iVar1, 1);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				WEAPON::GIVE_WEAPON_TO_PED((*uParam0)[iVar0], joaat("weapon_pistol"), -1, 0, 1);
			}
			PED::SET_PED_ACCURACY((*uParam0)[iVar0], 30);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam0)[iVar0], 1000f, 0);
			PED::SET_PED_KEEP_TASK((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}



void func_285(var uParam0, int iParam1, bool bParam2)//Position - 0xB1CB
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
			if (func_308(uParam0))
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
				func_305(5, uParam0);
				func_304(uParam0);
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
			if (func_303(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(0, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_302(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(1, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_301(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(8, uParam0);
				func_304(uParam0);
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
			if (func_300(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(6, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_299(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(4, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_298(uParam0))
			{
				func_305(7, uParam0);
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
				func_304(uParam0);
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
				func_305(9, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_304(uParam0);
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
			if (func_291(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(13, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_290(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(14, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_289(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(11, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_288(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_305(12, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_304(uParam0);
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
			if (func_286(uParam0))
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
				func_305(2, uParam0);
				func_304(uParam0);
			}
		}
	}
}

int func_286(var uParam0)//Position - 0xB9C5
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


int func_288(var uParam0)//Position - 0xBAC2
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

int func_289(var uParam0)//Position - 0xBB51
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

int func_290(var uParam0)//Position - 0xBC81
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

int func_291(var uParam0)//Position - 0xBE04
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







int func_298(var uParam0)//Position - 0xC180
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

int func_299(var uParam0)//Position - 0xC215
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

int func_300(var uParam0)//Position - 0xC287
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

int func_301(var uParam0)//Position - 0xC2FD
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

int func_302(var uParam0)//Position - 0xC37E
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

int func_303(var uParam0)//Position - 0xC40A
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

void func_304(var uParam0)//Position - 0xC494
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

void func_305(int iParam0, var uParam1)//Position - 0xC4DC
{
	Local_189[iParam0 /*10*/].f_1++;
	func_306(uParam1, iParam0);
	GlobalFunc_235(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_306(var uParam0, int iParam1)//Position - 0xC50F
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}


int func_308(var uParam0)//Position - 0xC539
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

void func_309(var uParam0, char* sParam1, int iParam2)//Position - 0xC5B0
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
					GlobalFunc_7565(uParam0, 4096, 0);
				}
				else
				{
					GlobalFunc_7565(uParam0, 0, 0);
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
			GlobalFunc_7565(uParam0, 0, 0);
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









void func_318()//Position - 0xCF71
{
	GlobalFunc_7571(&Local_408);
	if (GlobalFunc_7570(&Local_408, &Local_1033))
	{
		switch (Local_1033.f_27)
		{
			case 0:
				if (Local_408.f_410 == 9)
				{
					if (!GlobalFunc_7560(&Local_408))
					{
						if (GlobalFunc_6612("TX_OBJ_GYB_DO") || HUD::DOES_BLIP_EXIST(Local_408.f_9))
						{
							Local_1033.f_27++;
						}
						else if (GlobalFunc_4755(&Local_408) != 10)
						{
							GlobalFunc_9566(&Local_408, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((GlobalFunc_4755(&Local_408) > 10 && GlobalFunc_4755(&Local_408) != 15) && !GlobalFunc_7560(&Local_408))
				{
					GlobalFunc_9566(&Local_408, 15, 1, 0, 0);
					if (bLocal_1032)
					{
					}
					GlobalFunc_8925(&Local_408, 7);
				}
				break;
			
			case 2:
				if (((GlobalFunc_4755(&Local_408) != 16 && !GlobalFunc_7560(&Local_408)) && GlobalFunc_8928(&Local_408, 18) > 2f) && !GlobalFunc_111())
				{
					GlobalFunc_9566(&Local_408, 16, 1, 0, 0);
					if (bLocal_1032)
					{
					}
				}
				break;
			
			case 3:
				if (GlobalFunc_8928(&Local_408, 18) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 7f))
				{
					if (!GlobalFunc_4759(&Local_408))
					{
						func_345(&Local_408, 0);
						Local_1033.f_27++;
						if (bLocal_1032)
						{
						}
					}
				}
				break;
			}
	}
	func_319(&Local_408, &uLocal_1063, &Local_1033, bLocal_1032);
}

int func_319(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xD0E4
{
	func_327(uParam0, uParam1);
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








void func_327(var uParam0, var uParam1)//Position - 0xD794
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


















void func_345(var uParam0, bool bParam1)//Position - 0x11A97
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}








void func_353(var uParam0)//Position - 0x11C0A
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
			func_309(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_354(var uParam0, var uParam1)//Position - 0x11D1D
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
		if (func_381(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			GlobalFunc_8281(uParam0, 27, 0, 0);
			GlobalFunc_8281(uParam0, 10, 0, 0);
			func_379(uParam0, &uVar0, uParam1);
		}
		GlobalFunc_10908(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_355(uParam0);
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

void func_355(var uParam0)//Position - 0x11E47
{
	if (!GlobalFunc_6710(uParam0->f_429))
	{
		uParam0->f_429 = GlobalFunc_7719();
		GlobalFunc_8328(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (GlobalFunc_8448(uParam0->f_429))
	{
		func_309(uParam0, "Player took too long to make pickup", 9);
	}
}
























void func_379(var uParam0, var uParam1, var uParam2)//Position - 0x12674
{
	switch (*uParam1)
	{
		case 1:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_309(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (GlobalFunc_10600(uParam0, 0, 4))
			{
				func_309(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (GlobalFunc_10600(uParam0, 0, 8))
			{
				func_309(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (GlobalFunc_10600(uParam0, 1, 1))
			{
				func_309(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_309(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!GlobalFunc_747(*uParam2, 2) && GlobalFunc_4746(uParam0))
			{
				func_309(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}


int func_381(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x127CA
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
			if (func_382(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_382(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_382(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x128F2
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






void func_388()//Position - 0x12E21
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<6> Var7;
	
	Var7 = { GlobalFunc_2209() };
	if ((((iLocal_932 < 4 && GlobalFunc_5682(Local_408.f_3, 1) < 50f) && Local_408.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !iLocal_975)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 80))
		{
			if (CAM::DOES_CAM_EXIST(Local_408))
			{
				if (!CAM::IS_CAM_ACTIVE(Local_408))
				{
					iLocal_1123 = MISC::GET_GAME_TIMER();
					CAM::SET_CAM_ACTIVE(Local_408, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
	if ((((iLocal_932 < 4 && GlobalFunc_5682(Local_408.f_3, 1) < 50f) && Local_408.f_410 == 22) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !iLocal_975)
	{
		if (iLocal_966)
		{
			switch (iLocal_1121)
			{
				case 0:
					iLocal_1122 = MISC::GET_GAME_TIMER();
					Var0 = { 223.3f, -3326.3f, 6.4f };
					Var3 = { -4.1f, 0f, 78f };
					fVar6 = 24.3f;
					func_389(Var0, Var3, fVar6);
					iLocal_1121 = 1;
					break;
				
				case 1:
					if (MISC::ARE_STRINGS_EQUAL("txm12_ig1c_3", &Var7))
					{
						iLocal_1122 = MISC::GET_GAME_TIMER();
						Var0 = { 211.1f, -3326.1f, 5.8f };
						Var3 = { 4.1f, 0f, -81.2f };
						fVar6 = 24.3f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 2;
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_1122) > 5000)
					{
						iLocal_1122 = MISC::GET_GAME_TIMER();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 3;
					}
					break;
				
				case 3:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_3", &Var7))
					{
						iLocal_1122 = MISC::GET_GAME_TIMER();
						Var0 = { 194.7488f, -3328.101f, 5.9471f };
						Var3 = { -0.3369f, -0.0169f, -55.7257f };
						fVar6 = 24.5237f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 4;
					}
					break;
				
				case 4:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_5", &Var7))
					{
						iLocal_1122 = MISC::GET_GAME_TIMER();
						Var0 = { 202.0472f, -3314.83f, 5.9369f };
						Var3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 5;
					}
					break;
				
				case 5:
					if (MISC::ARE_STRINGS_EQUAL("txm12_deal1_7", &Var7))
					{
						iLocal_1122 = MISC::GET_GAME_TIMER();
						Var0 = { 194.1f, -3324.9f, 6.2f };
						Var3 = { -4.6f, 0f, -83.1f };
						fVar6 = 29f;
						func_389(Var0, Var3, fVar6);
						iLocal_1121 = 6;
					}
					break;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(0, 80) && (MISC::GET_GAME_TIMER() - iLocal_1123) > 500)
			{
				if (CAM::DOES_CAM_EXIST(Local_408))
				{
					CAM::SET_CAM_ACTIVE(Local_408, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
	else if (iLocal_966)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (CAM::DOES_CAM_EXIST(Local_408))
			{
				if (CAM::IS_CAM_ACTIVE(Local_408))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_CAM_ACTIVE(Local_408, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
		}
		if (iLocal_975)
		{
			if (!GlobalFunc_226(&uLocal_1029))
			{
				if (GlobalFunc_1720() && CAM::IS_CAM_ACTIVE(Local_408))
				{
					if (!iLocal_976)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_976 = 1;
					}
				}
				GlobalFunc_6715(&uLocal_1029);
			}
			else if (GlobalFunc_4981(&uLocal_1029) > 0.3f)
			{
				if (CAM::DOES_CAM_EXIST(Local_408))
				{
					if (CAM::IS_CAM_ACTIVE(Local_408))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(Local_408, 0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					}
				}
			}
		}
	}
	else
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
}

void func_389(struct<3> Param0, struct<3> Param3, float fParam6)//Position - 0x13232
{
	if (!CAM::DOES_CAM_EXIST(Local_408))
	{
		GlobalFunc_4795(&Local_408, 0f, 0f, 0f, 0f, 0f, 0f, fParam6);
	}
	CAM::SET_CAM_COORD(Local_408, Param0);
	CAM::SET_CAM_ROT(Local_408, Param3, 2);
	CAM::SHAKE_CAM(Local_408, "HAND_SHAKE", 0.3f);
}


void func_391()//Position - 0x132D1
{
	if (!iLocal_968)
	{
		func_392(&Local_408);
		iLocal_968 = 1;
	}
	GlobalFunc_4670(2);
	if (iLocal_967)
	{
		if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_408.f_17, 1) > 50f || func_115(&(Local_838.f_3), &(Local_838.f_11), &(Local_880.f_3), &(Local_880.f_11)))
		{
			func_412();
		}
	}
	else
	{
		func_412();
	}
}

void func_392(var uParam0)//Position - 0x13338
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		GlobalFunc_4670(2);
	}
}




void func_396()//Position - 0x134B7
{
	Local_408.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_408.f_33 = 88.9745f;
	Local_408.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_408.f_34 = 173.6662f;
	PED::ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &iLocal_922);
	func_411(1);
	GlobalFunc_8929(&Local_408, 3);
	Local_408.f_410 = 0;
	GlobalFunc_4787(&Local_408, 3, 6);
	func_397();
}

void func_397()//Position - 0x1352C
{
	func_398();
	Local_838 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_398()//Position - 0x1354C
{
	Local_838.f_19[0] = joaat("g_m_y_lost_01");
	Local_838.f_19[1] = joaat("s_f_y_hooker_01");
	Local_838.f_32[0] = joaat("gburrito");
	Local_838.f_32[1] = joaat("daemon");
	Local_838.f_32[2] = joaat("hexer");
	Local_838.f_32[3] = joaat("emperor");
	Local_880.f_19[0] = joaat("g_m_y_lost_01");
	Local_880.f_32[0] = joaat("gburrito");
	Local_880.f_32[1] = joaat("hexer");
}













void func_411(int iParam0)//Position - 0x13B27
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_922, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iLocal_922, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), iLocal_922);
}

void func_412()//Position - 0x13B59
{
	GlobalFunc_4741(&Local_408);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_983, Local_986, 1, 1);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_946, 0);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_944);
	func_413();
	func_190();
	if (CAM::DOES_CAM_EXIST(Local_408))
	{
		CAM::DESTROY_CAM(Local_408, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_413()//Position - 0x13BBF
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_928);
}


