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
	var uLocal_408 = 0;
	struct<414> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	int iLocal_839 = 0;
	struct<3> Local_840[1];
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	var uLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	bool bLocal_858 = 0;
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	struct<3> Local_867 = { 0, 0, 0 } ;
	struct<3> Local_870 = { 0, 0, 0 } ;
	struct<3> Local_873 = { 0, 0, 0 } ;
	struct<3> Local_876 = { 0, 0, 0 } ;
	struct<3> Local_879 = { 0, 0, 0 } ;
	struct<3> Local_882 = { 0, 0, 0 } ;
	struct<3> Local_885 = { 0, 0, 0 } ;
	struct<3> Local_888 = { 0, 0, 0 } ;
	struct<3> Local_891 = { 0, 0, 0 } ;
	float fLocal_894 = 0f;
	char cLocal_895[24] = "";
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	struct<6> Local_901 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_907[64] = "";
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	char cLocal_923[64] = "";
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	char cLocal_939[64] = "";
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	char cLocal_955[64] = "";
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	char cLocal_971[64] = "";
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	char cLocal_987[64] = "";
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	char cLocal_1003[64] = "";
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	char cLocal_1019[64] = "";
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
	bool bLocal_1037 = 0;
	struct<28> Local_1038 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 5;
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
	var uLocal_1112 = 1097859072;
	var uLocal_1113 = 1500;
	var uLocal_1114 = 45;
	var uLocal_1115 = 1103626240;
	var uLocal_1116 = 5;
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
	int iLocal_1127 = 0;
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
	iLocal_839 = joaat("g_m_y_mexgoon_03");
	iLocal_851 = 1;
	iLocal_852 = -1;
	iLocal_857 = -1;
	bLocal_858 = true;
	Local_867 = { -1612.235f, 189.1934f, 58.9435f };
	Local_870 = { -1612.457f, 184.5166f, 58.7712f };
	Local_873 = { 32.60266f, -1243.837f, 28.45076f };
	Local_876 = { 33.2419f, -1234.385f, 28.2953f };
	Local_879 = { -628.1456f, -760.3765f, 25.106f };
	Local_882 = { -584.7739f, -779.0701f, 24.0178f };
	Local_885 = { 47.56787f, -1234.685f, 28.29707f };
	Local_888 = { -21.32591f, -1235.549f, 32.47597f };
	Local_891 = { 37.51834f, -1239.021f, 28.40267f };
	fLocal_894 = 33.75f;
	StringCopy(&cLocal_907, "amb@world_human_hang_out_street@male_a@enter", 64);
	StringCopy(&cLocal_923, "amb@world_human_hang_out_street@male_a@base", 64);
	StringCopy(&cLocal_939, "amb@world_human_hang_out_street@male_a@idle_a", 64);
	StringCopy(&cLocal_955, "amb@world_human_hang_out_street@male_a@exit", 64);
	StringCopy(&cLocal_971, "amb@world_human_hang_out_street@female_arm_side@enter", 64);
	StringCopy(&cLocal_987, "amb@world_human_hang_out_street@female_arm_side@base", 64);
	StringCopy(&cLocal_1003, "amb@world_human_hang_out_street@female_arm_side@idle_a", 64);
	StringCopy(&cLocal_1019, "amb@world_human_hang_out_street@female_arm_side@exit", 64);
	if (GlobalFunc_100(Local_876, 0f, 0f, 0f))
	{
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		GlobalFunc_4670(2);
		func_410();
	}
	MISC::SET_MISSION_FLAG(1);
	func_397();
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_2))
		{
			func_8();
		}
		else
		{
			GlobalFunc_8923(&Local_409);
		}
		SYSTEM::WAIT(0);
	}
}








void func_8()//Position - 0x3FA
{
	if (GlobalFunc_4786(&Local_409))
	{
		GlobalFunc_4785(&Local_409);
		if (GlobalFunc_9568(&Local_409, 0))
		{
			func_392();
		}
	}
	else
	{
		GlobalFunc_7576(&Local_409);
		if ((Local_409.f_410 >= 5 && Local_409.f_410 <= 9) || Local_409.f_410 >= 22)
		{
			func_357(&Local_409, &uLocal_1110);
			func_356(&Local_409);
		}
		GlobalFunc_6615(&Local_409, &uLocal_854, 0);
		if (Local_409.f_410 > 5 && !MISC::IS_BIT_SET(uLocal_853, 0))
		{
			Local_409.f_17 = { Local_876 };
			MISC::SET_BIT(&iLocal_853, 0);
		}
		if (Local_409.f_410 >= 5 && Local_409.f_410 < 10)
		{
			func_354(&Local_409);
		}
		if (Local_409.f_410 >= 2)
		{
			if (!GlobalFunc_4783(&Local_409))
			{
				func_322();
			}
			else
			{
				func_314(&Local_409, "Taxi Not Driveable", GlobalFunc_4778(&Local_409));
			}
		}
		if (Local_409.f_410 >= 12 && Local_409.f_410 < 27)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_850))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_850))
				{
					func_314(&Local_409, "Player killed his new booty call", 9);
				}
			}
			if (func_313(&Local_409, iLocal_849, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_849))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_849, 1, 0);
					func_314(&Local_409, "Player exploded the broke down car", 9);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_850))
			{
				if (GlobalFunc_5682(iLocal_850, 1) > 50f)
				{
					func_314(&Local_409, "Player abandoned the girl", 9);
				}
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_288(&Local_409, 0, 1);
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_285();
				GlobalFunc_8281(&Local_409, 16, 4f, 0);
				GlobalFunc_7575(&Local_409, Local_867, Local_870, "TaxiAlonzo", iLocal_839, 196.3547f, 15f);
				GlobalFunc_8286(&Local_409);
				GlobalFunc_4773(&Local_409, 1);
				break;
			
			case 1:
				if (func_278())
				{
					func_277();
					GlobalFunc_4775(&(Local_840[0 /*3*/]), "TAXI_SC_KO", 100);
					GlobalFunc_4774(&Local_409, &Local_840);
					GlobalFunc_6595(&Local_409);
					func_254();
					Local_409.f_14 = { Local_867 };
					GlobalFunc_4773(&Local_409, 3);
				}
				break;
			
			case 3:
				if (func_247(&Local_409, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_409.f_3))
					{
						PED::SET_PED_MONEY(Local_409.f_3, 200);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 3, 1, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_409.f_3, 8, 0, 1, 0);
					}
					GlobalFunc_8926(&Local_409, 1, 0);
					GlobalFunc_4773(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_225(&Local_409, 0, 1109393408))
				{
					GlobalFunc_4773(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_224(&Local_409))
				{
					func_223();
					GlobalFunc_9566(&Local_409, 9, 1, 0, 0);
					GlobalFunc_6590(&Local_409);
					func_217();
					GlobalFunc_4773(&Local_409, 9);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_409.f_2, Local_409.f_4, 0))
					{
						GlobalFunc_8284(&Local_409);
						GlobalFunc_4773(&Local_409, 9);
					}
				}
				break;
			
			case 9:
				if (!iLocal_864)
				{
					if ((func_214(&Local_409, 0) || func_214(&Local_409, 1)) || func_213(&Local_409, 1))
					{
						iLocal_864 = 1;
					}
				}
				func_210();
				func_205();
				if (func_175(&Local_409, 9f, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_409.f_9));
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 0);
					PED::SET_CREATE_RANDOM_COPS(0);
					MISC::CLEAR_AREA_OF_COPS(GlobalFunc_271(PLAYER::PLAYER_ID()), 50f, 0);
					PED::SET_PED_CONFIG_FLAG(Local_409.f_3, 42, 1);
					GlobalFunc_4773(&Local_409, 10);
				}
				if (iLocal_852 >= 2)
				{
					if (!iLocal_862 && ((((((PED::IS_PED_INJURED(iLocal_850) || ENTITY::IS_ENTITY_DEAD(iLocal_849)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_850) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_850))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_849) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_849))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_850) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_850, 0, 2))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_849) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_849, 0, 2))) || ((!ENTITY::IS_ENTITY_DEAD(iLocal_850) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && GlobalFunc_5682(iLocal_850, 1) < 1f)))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(iLocal_849) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_849)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_849) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_849, 0, 2)))
						{
							VEHICLE::EXPLODE_VEHICLE(iLocal_849, 1, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_850))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_850, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_850, 1);
						}
						if ((!ENTITY::IS_ENTITY_DEAD(iLocal_850) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && GlobalFunc_5682(iLocal_850, 1) < 1f)
						{
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_850, uLocal_847);
							PED::SET_PED_KEEP_TASK(iLocal_850, 1);
						}
						func_314(&Local_409, "Aggro Heard Shot", 8);
						iLocal_862 = 1;
					}
				}
				break;
			
			case 10:
				if (func_156())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
					uLocal_1109 = GlobalFunc_5098(Local_409.f_3, 0, 0);
					GlobalFunc_8281(&Local_409, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_850))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_850);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_850, PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_HEALTH(iLocal_850, 115);
					}
					iLocal_855 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
					iLocal_856 = ENTITY::GET_ENTITY_HEALTH(Local_409.f_3);
					AUDIO::START_AUDIO_SCENE("TAXI_GOT_U_NOW");
					GlobalFunc_4773(&Local_409, 11);
				}
				break;
			
			case 11:
				PLAYER::_SWITCH_CRIME_TYPE(PLAYER::PLAYER_ID(), 11);
				if (ENTITY::IS_ENTITY_DEAD(Local_409.f_3) || ((!ENTITY::IS_ENTITY_DEAD(Local_409.f_3) && PED::IS_PED_FLEEING(Local_409.f_3)) && GlobalFunc_713(Local_409.f_3, Local_876, 1) > 25f))
				{
					HUD::CLEAR_THIS_PRINT("TAXI_OBJ_GYN");
					if (HUD::DOES_BLIP_EXIST(Local_409.f_9))
					{
						HUD::REMOVE_BLIP(&(Local_409.f_9));
					}
					if (HUD::DOES_BLIP_EXIST(Local_409.f_8))
					{
						HUD::REMOVE_BLIP(&(Local_409.f_8));
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_1109))
					{
						HUD::REMOVE_BLIP(&uLocal_1109);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_850))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
						{
							AUDIO::STOP_AUDIO_SCENE("TAXI_GOT_U_NOW");
							WEAPON::GET_CURRENT_PED_WEAPON(Local_409.f_2, &uLocal_848, 1);
							if (func_153(&uLocal_848) || !ENTITY::IS_ENTITY_DEAD(Local_409.f_3))
							{
								bLocal_858 = true;
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_850, uLocal_847);
								GlobalFunc_9566(&Local_409, 126, 1, 0, 0);
								Local_409.f_17 = { Local_879 };
								GlobalFunc_8281(&Local_409, 19, 0, 0);
								GlobalFunc_4773(&Local_409, 12);
							}
							else
							{
								bLocal_858 = false;
								TASK::TASK_SMART_FLEE_PED(iLocal_850, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_850, 1);
								GlobalFunc_9566(&Local_409, 127, 1, 0, 1);
								GlobalFunc_4773(&Local_409, 27);
							}
						}
					}
					else
					{
						GlobalFunc_4773(&Local_409, 27);
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_885, Local_888, fLocal_894, 0, 1, 0))
				{
					if ((ENTITY::GET_ENTITY_HEALTH(Local_409.f_3) == PED::GET_PED_MAX_HEALTH(Local_409.f_3) && !GlobalFunc_111()) && !iLocal_860)
					{
						GlobalFunc_9566(&Local_409, 123, 1, 0, 0);
						iLocal_860 = 1;
					}
					if (!iLocal_859 && GlobalFunc_8928(&Local_409, 0) > 1.5f)
					{
						func_149(&(Local_409.f_3));
						PED::SET_PED_CONFIG_FLAG(Local_409.f_3, 314, 0);
						iLocal_859 = 1;
					}
					if (GlobalFunc_8928(&Local_409, 0) > 10f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_850))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_850, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
							TASK::TASK_PLAY_ANIM(0, "misscommon@response", "give_me_a_break", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(0, "misscommon@response", "damn", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_850, uLocal_847);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_855 = (iLocal_855 - ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
								iLocal_856 = (iLocal_856 - ENTITY::GET_ENTITY_HEALTH(Local_409.f_3));
								if (iLocal_855 < iLocal_856)
								{
									GlobalFunc_9566(&Local_409, 125, 1, 0, 0);
								}
								else
								{
									GlobalFunc_9566(&Local_409, 124, 1, 0, 0);
								}
								iLocal_855 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
								iLocal_856 = ENTITY::GET_ENTITY_HEALTH(Local_409.f_3);
							}
						}
						else if (!iLocal_861)
						{
							GlobalFunc_4935();
							ENTITY::SET_ENTITY_HEALTH(Local_409.f_3, PED::GET_PED_MAX_HEALTH(Local_409.f_3));
							GlobalFunc_9566(&Local_409, 128, 1, 0, 0);
							iLocal_861 = 1;
							bLocal_858 = false;
						}
						GlobalFunc_8281(&Local_409, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
				}
				else if (!PED::IS_PED_FLEEING(Local_409.f_3))
				{
					if (iLocal_859)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_409.f_3);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
						if (PED::IS_PED_INJURED(iLocal_850))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_850, 0), 3f, 20000, 1193033728, 1056964608);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_850, 0), 0);
						}
						else
						{
							TASK::TASK_GO_TO_ENTITY(0, iLocal_850, 20000, 3.5f, 1f, 1073741824, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_850, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
						TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_847);
						if (!PED::IS_PED_INJURED(iLocal_850))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_850, Local_409.f_3, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_859 = 0;
					}
					if (!PED::IS_PED_INJURED(iLocal_850))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_409.f_3, 1), ENTITY::GET_ENTITY_COORDS(iLocal_850, 0)) < 25f && (TASK::GET_SCRIPT_TASK_STATUS(Local_409.f_3, 264387021) != 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_409.f_3, 264387021) != 0))
						{
							TASK::TASK_CHAT_TO_PED(iLocal_850, Local_409.f_3, 16, 0f, 0f, 0f, 0f, 0f);
							TASK::TASK_CHAT_TO_PED(Local_409.f_3, iLocal_850, 16, 0f, 0f, 0f, 0f, 0f);
						}
					}
					if (SYSTEM::TIMERA() > 30000)
					{
						func_314(&Local_409, "Player abandoned passenger", 8);
					}
				}
				if (GlobalFunc_6618(Local_409.f_17, 1) > 250f && HUD::DOES_BLIP_EXIST(uLocal_1109))
				{
					func_314(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			
			case 12:
				if (!GlobalFunc_111() && GlobalFunc_8928(&Local_409, 19) > 2f)
				{
					Local_409.f_8 = GlobalFunc_6783(iLocal_850, 0, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_409.f_8, "TX_BLIP_GYN_TG");
					GlobalFunc_9566(&Local_409, 11, 1, 0, 0);
					PED::SET_CREATE_RANDOM_COPS(1);
					GlobalFunc_8281(&Local_409, 19, 0, 0);
					GlobalFunc_4773(&Local_409, 18);
				}
				break;
			
			case 18:
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_850, 1) < 3f && !GlobalFunc_2289())
				{
					GlobalFunc_4956();
					Local_409.f_115 = 1;
					GlobalFunc_6581(&(Local_409.f_81), 67108864);
					GlobalFunc_4773(&Local_409, 19);
				}
				else if (!PED::IS_PED_INJURED(iLocal_850) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_850, PLAYER::PLAYER_PED_ID(), 0);
				}
				break;
			
			case 19:
				if (func_134())
				{
					if (HUD::DOES_BLIP_EXIST(Local_409.f_8))
					{
						HUD::REMOVE_BLIP(&(Local_409.f_8));
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_409.f_3));
					GlobalFunc_4773(&Local_409, 21);
				}
				break;
			
			case 21:
				if (!Local_409.f_141 && !GlobalFunc_100(Local_409.f_29, Local_882))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_850, 0) && !GlobalFunc_111())
					{
						Local_409.f_3 = iLocal_850;
						Local_409.f_29 = { Local_882 };
						Local_409.f_17 = { Local_879 };
						if (GlobalFunc_747(Local_409.f_98, 4))
						{
							GlobalFunc_6581(&(Local_409.f_98), 4);
						}
						if (GlobalFunc_747(Local_409.f_98, 8))
						{
							GlobalFunc_6581(&(Local_409.f_98), 8);
						}
						Local_409.f_86 = 0;
						GlobalFunc_9566(&Local_409, 130, 1, 0, 0);
					}
				}
				else if (Local_409.f_141)
				{
					Local_409.f_9 = GlobalFunc_5104(Local_879, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_409.f_9, "TX_BLIP_GYN_GF");
					func_129();
					GlobalFunc_6589(&Local_409, 2, 0);
					GlobalFunc_4756(&Local_1038, 5, -1);
					GlobalFunc_4773(&Local_409, 22);
				}
				break;
			
			case 22:
				if (func_175(&Local_409, 1086324736, 1097859072, 1117782016))
				{
					HUD::REMOVE_BLIP(&(Local_409.f_9));
					GlobalFunc_7559(&uLocal_1068);
					GlobalFunc_4749(&Local_1038, -1, 1);
					GlobalFunc_9566(&Local_409, 132, 1, 0, 0);
					GlobalFunc_4773(&Local_409, 27);
				}
				break;
			
			case 27:
				if ((GlobalFunc_8930(&Local_409, 1) || func_113(&iLocal_850, 1805844857)) || ENTITY::IS_ENTITY_DEAD(iLocal_850))
				{
					if (bLocal_858)
					{
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -612.6458f, -777.7148f, 24.27f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -608.3197f, -775.0622f, 24.0547f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -589.0419f, -775.1888f, 24.0172f, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_409.f_29, 1f, 20000, 1048576000, 0, 1193033728);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_850, uLocal_847);
						PED::SET_PED_KEEP_TASK(iLocal_850, 1);
						GlobalFunc_4748(&Local_409, 0);
						func_97(8, 1, -1);
					}
					func_95(&Local_409);
					func_94();
					GlobalFunc_4773(&Local_409, 29);
				}
				break;
			
			case 29:
				if (func_67(&Local_409, &uLocal_1117))
				{
					func_9(1, &Local_409, 1);
					GlobalFunc_4773(&Local_409, 30);
				}
				break;
			
			case 30:
				func_410();
				break;
			}
	}
}

void func_9(bool bParam0, var uParam1, bool bParam2)//Position - 0x1248
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
	func_10(uParam1, bParam2);
}

void func_10(var uParam0, bool bParam1)//Position - 0x1284
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
		func_15(uParam0->f_411);
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((GlobalFunc_4986(&uLocal_89) * 1000f)), 12, 0);
}





void func_15(int iParam0)//Position - 0x147C
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




















































int func_67(var uParam0, var uParam1)//Position - 0x2C9C
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
				func_93(uParam0);
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
				func_68(uParam0);
				GlobalFunc_8281(uParam0, 0, 0, 0);
				GlobalFunc_778(0);
				iLocal_167 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_68(var uParam0)//Position - 0x2D6E
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

























void func_93(var uParam0)//Position - 0x3E8C
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

void func_94()//Position - 0x3F3B
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_409.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_409.f_4) < 500f)
			{
				Local_409.f_50 = 250;
			}
			else
			{
				Local_409.f_50 = 100;
			}
		}
	}
	Local_409.f_56 = (PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()) - ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
	if (Local_409.f_56 <= 150)
	{
		Local_409.f_56 = 250;
	}
	else
	{
		Local_409.f_56 = 100;
	}
}

void func_95(var uParam0)//Position - 0x3FB0
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


void func_97(int iParam0, bool bParam1, int iParam2)//Position - 0x4013
{
	bool bVar0;
	int iVar1;
	
	if (iParam2 < 0)
	{
		iParam2 = func_110();
	}
	if (GlobalFunc_4721(iParam2) == 4)
	{
	}
	bVar0 = Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4;
	Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY[iParam2 /*53*/].f_2[iParam0 /*5*/].f_4 = bParam1;
	if (bParam1)
	{
		if (!bVar0)
		{
			func_108(iParam0, 0);
			GlobalFunc_9621(GlobalFunc_2445(iParam0), GlobalFunc_4721(iParam2), 1);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1800000, 2100000);
			switch (iParam2)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					MISC::SET_BIT(&(Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_650), iParam0);
					GlobalFunc_4989(15, 0);
					break;
			}
			GlobalFunc_2446(iVar1);
			GlobalFunc_2441(iParam0, iVar1);
			Global_96347.f_15[iParam0] = MISC::GET_GAME_TIMER();
		}
	}
	else if (bVar0)
	{
		GlobalFunc_495(GlobalFunc_2445(iParam0), GlobalFunc_4721(iParam2));
	}
}











void func_108(int iParam0, int iParam1)//Position - 0x4602
{
	Global_SAVE_DATA.STRIP_CLUB_SAVED_ARRAY[func_110() /*53*/].f_2[iParam0 /*5*/].f_1 = iParam1;
}


int func_110()//Position - 0x467C
{
	int iVar0;
	
	iVar0 = GlobalFunc_8315();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (GlobalFunc_4990(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}



int func_113(int iParam0, int iParam1)//Position - 0x476C
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, iParam1) == 1)
		{
			return 1;
		}
	}
	return 0;
}
















void func_129()//Position - 0x4D68
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_130(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_130(1));
	STREAMING::REMOVE_ANIM_SET("move_strafe_melee_unarmed");
	STREAMING::REMOVE_ANIM_DICT("oddjobs@taxi@gyn@");
	STREAMING::REMOVE_ANIM_DICT("melee@unarmed@streamed_taunts");
	STREAMING::REMOVE_ANIM_DICT("misscommon@response");
	STREAMING::REMOVE_ANIM_DICT(&cLocal_907);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_923);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_939);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_955);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_971);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_987);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_1003);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_1019);
	TASK::REMOVE_WAYPOINT_RECORDING("taxi_oj_gyn");
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
}

int func_130(int iParam0)//Position - 0x4DE6
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("gauntlet");
			break;
		
		case 1:
			iVar0 = joaat("a_f_y_eastsa_03");
			break;
	}
	return iVar0;
}




int func_134()//Position - 0x4E69
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_8285();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_850) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
	{
		switch (iLocal_1127)
		{
			case 0:
				if (GlobalFunc_552(1, 0, 1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_850, PLAYER::PLAYER_PED_ID(), -1, 2049, 3);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_850, -1, 2049, 3);
					GlobalFunc_7559(&uLocal_1068);
					GlobalFunc_4749(&Local_1038, -1, 1);
					iLocal_1127 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_8928(&Local_409, 19) > 2f)
				{
					GlobalFunc_9566(&Local_409, 129, 1, 0, 1);
					GlobalFunc_8281(&Local_409, 19, 0, 0);
					iLocal_1127 = 5;
				}
				break;
			
			case 5:
				Local_901 = { GlobalFunc_2209() };
				if (GlobalFunc_8928(&Local_409, 19) > 15f || MISC::ARE_STRINGS_EQUAL(&cLocal_895, &Local_901))
				{
					iVar0 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_409.f_4);
					if (ENTITY::GET_ENTITY_MODEL(Local_409.f_4) == joaat("sentinel2"))
					{
						iVar0 = 1;
					}
					if (iVar0 > 1)
					{
						iVar1 = 2;
					}
					else
					{
						iVar1 = 0;
					}
					TASK::TASK_ENTER_VEHICLE(iLocal_850, Local_409.f_4, 40000, iVar1, 1f, 1, 0);
					GlobalFunc_8281(&Local_409, 19, 0, 0);
					iLocal_1127 = 6;
				}
				else if ((MISC::GET_GAME_TIMER() % 1500) < 50)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_850, PLAYER::PLAYER_PED_ID(), 0);
				}
				break;
			
			case 6:
				if (GlobalFunc_8928(&Local_409, 19) > 20f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_850))
					{
						TASK::CLEAR_PED_TASKS(iLocal_850);
						TASK::TASK_WANDER_STANDARD(iLocal_850, 1193033728, 0);
					}
					func_314(&Local_409, "Player not letting the chick in the car", 20);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_850))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_850, 0))
						{
							iLocal_1127 = 8;
						}
						else if ((MISC::GET_GAME_TIMER() % 2500) < 50)
						{
						}
					}
				}
				break;
			
			case 7:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_850))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_850, 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_850, Local_409.f_4, 2);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_409.f_4, -1);
					}
				}
				GlobalFunc_8281(&Local_409, 19, 0, 0);
				iLocal_1127 = 8;
				break;
			
			case 8:
				GRAPHICS::DRAW_DEBUG_TEXT_2D("GYN_CS_END", 0.75f, 0.75f, 0f, 0, 0, 255, 255);
				Local_409.f_141 = 0;
				if (CAM::DOES_CAM_EXIST(Local_409))
				{
					CAM::DESTROY_CAM(Local_409, 0);
				}
				if (CAM::DOES_CAM_EXIST(Local_409.f_1))
				{
					CAM::DESTROY_CAM(Local_409.f_1, 0);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_1036))
				{
					CAM::DESTROY_CAM(uLocal_1036, 0);
				}
				GlobalFunc_6589(&Local_409, 19, 0);
				iLocal_1127 = 9;
				return 1;
				break;
		}
	}
	return 0;
}















void func_149(var uParam0)//Position - 0x540F
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, 1);
			PED::SET_PED_SEEING_RANGE(*uParam0, 300f);
			PED::SET_PED_HEARING_RANGE(*uParam0, 300f);
			PED::SET_PED_ID_RANGE(*uParam0, 300f);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
			PED::SET_PED_COMBAT_ABILITY(*uParam0, 2);
			PED::SET_PED_ACCURACY(*uParam0, 75);
			PED::SET_PED_COMBAT_RANGE(*uParam0, 1);
			PED::SET_COMBAT_FLOAT(*uParam0, 7, 1f);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, Local_409.f_413);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_409.f_413, 1862763509);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*uParam0, 100f, 0);
		}
	}
}




int func_153(var uParam0)//Position - 0x552A
{
	if ((((*uParam0 == joaat("weapon_unarmed") || *uParam0 == joaat("weapon_smokegrenade")) || *uParam0 == joaat("weapon_fireextinguisher")) || *uParam0 == joaat("weapon_petrolcan")) || *uParam0 == -837150131)
	{
		return 1;
	}
	return 0;
}



int func_156()//Position - 0x565C
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	GlobalFunc_8285();
	if (iLocal_845 < 3 && iLocal_845 > 0)
	{
		if (GlobalFunc_7945(iLocal_87))
		{
			iLocal_845 = 7;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player INSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		else
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player OUTSIDE of vehicle", 0.5f, 0.2f, 0f, 0, 0, 255, 255);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player INSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
		else
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("Player OUTSIDE of vehicle adjusted", 0.5f, 0.25f, 0f, 0, 0, 255, 255);
		}
	}
	switch (iLocal_845)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				GlobalFunc_9145(0, 0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				GlobalFunc_4795(&Local_409, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				Var0 = { 30.8062f, -1242.612f, 29.1026f };
				Var3 = { 7.5623f, -0.0714f, 149.3929f };
				CAM::SET_CAM_COORD(Local_409, Var0);
				CAM::SET_CAM_ROT(Local_409, Var3, 2);
				CAM::SET_CAM_FOV(Local_409, 35f);
				CAM::SHAKE_CAM(Local_409, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE(Local_409, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (!PED::IS_PED_INJURED(Local_409.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_409.f_4))
				{
					ENTITY::SET_ENTITY_COORDS(Local_409.f_4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_849, 0f, 8.25f, 0f), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_409.f_4, 114.629f);
					TASK::TASK_LOOK_AT_ENTITY(Local_409.f_3, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
				}
				GlobalFunc_9566(&Local_409, 121, 1, 1, 0);
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				iLocal_845 = 1;
			}
			else
			{
				GlobalFunc_4935();
			}
			break;
		
		case 1:
			if (GlobalFunc_8928(&Local_409, 0) > 2f && !GlobalFunc_111())
			{
				if (!PED::IS_PED_INJURED(Local_409.f_3))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_ENTER_VEHICLE(0, Local_409.f_4, 20000, -1, 1f, 524296, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
					TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_847);
					GlobalFunc_10630(&(Local_409.f_244), Local_409.f_144, "txm9_figt1", "txm9_figt1_1", 8, 0, 0);
				}
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				if (GlobalFunc_1720())
				{
					if (!iLocal_866)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_866 = 1;
					}
				}
				iLocal_845 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_8928(&Local_409, 0) > 0.3f)
			{
				iLocal_845 = 3;
			}
			break;
		
		case 3:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			GlobalFunc_8281(&Local_409, 0, 0, 0);
			iLocal_845 = 4;
			break;
		
		case 4:
			if (!GlobalFunc_4752(&Local_409) && !PED::IS_PED_INJURED(Local_409.f_3))
			{
				PED::SET_PED_CONFIG_FLAG(Local_409.f_3, 314, 1);
				func_149(&(Local_409.f_3));
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				iLocal_845 = 5;
			}
			else if (!PED::IS_PED_INJURED(Local_409.f_3))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_409.f_3, 242628503) != 1)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_ENTER_VEHICLE(0, Local_409.f_4, 20000, -1, 1f, 524296, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
					TASK::TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_847);
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_8928(&Local_409, 0) > 0.5f && !GlobalFunc_111())
			{
				GlobalFunc_10630(&(Local_409.f_244), Local_409.f_144, "txm9_figt1", "txm9_figt1_2", 9, 0, 0);
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				iLocal_845 = 6;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(Local_409.f_3))
			{
				PED::SET_PED_RESET_FLAG(Local_409.f_3, 69, 1);
			}
			if (GlobalFunc_8928(&Local_409, 0) > 1f)
			{
				GlobalFunc_9566(&Local_409, 11, 1, 0, 0);
				GlobalFunc_9144(1, 1, 1);
				if (CAM::DOES_CAM_EXIST(Local_409))
				{
					CAM::DESTROY_CAM(Local_409, 0);
				}
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				return 1;
			}
			break;
		
		case 7:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_409.f_3)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_409.f_3);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				iLocal_845 = 8;
			}
			break;
		
		case 8:
			if (GlobalFunc_8928(&Local_409, 0) > 0.3f)
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(Local_409.f_3)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_409.f_3);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_409.f_4, 0, 1);
					Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_409.f_4, -1.6f, 0f, 0f) };
					Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_409.f_4, -4f, 2f, 0f) };
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var9, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS(Local_409.f_3, Var6, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_409.f_3, 1)));
					ENTITY::SET_ENTITY_HEADING(Local_409.f_3, GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(Local_409.f_3, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
					func_149(&(Local_409.f_3));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				if (CAM::DOES_CAM_EXIST(Local_409))
				{
					CAM::DESTROY_CAM(Local_409, 0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				iLocal_845 = 9;
			}
			break;
		
		case 9:
			if (!CAM::IS_SCREEN_FADING_IN() && GlobalFunc_8928(&Local_409, 0) > 1f)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				iLocal_845 = 10;
			}
			break;
		
		case 10:
			if (!GlobalFunc_4752(&Local_409))
			{
				GlobalFunc_9144(1, 1, 1);
				GlobalFunc_9566(&Local_409, 11, 1, 0, 0);
				GlobalFunc_8281(&Local_409, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}



















int func_175(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x63E4
{
	if ((((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_191(uParam0))
		{
			GlobalFunc_4751(uParam0, &(uParam0->f_43));
			GlobalFunc_10602(uParam0);
			GlobalFunc_10601(uParam0);
			GlobalFunc_10826(uParam0);
			func_178(uParam0, fParam2, fParam3);
			func_177(uParam0);
			return GlobalFunc_8931(uParam0, iParam1);
		}
	}
	return 0;
}


void func_177(var uParam0)//Position - 0x6533
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

void func_178(var uParam0, float fParam1, float fParam2)//Position - 0x6609
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
					func_314(uParam0, "Car not moving", 20);
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













int func_191(var uParam0)//Position - 0x6D05
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (!PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_314(uParam0, "Passenger left car.", 9);
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
				func_192(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_192(var uParam0, bool bParam1)//Position - 0x6D94
{
	func_200(uParam0, uParam0->f_3);
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
						func_314(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (GlobalFunc_8928(uParam0, 14) > 20f)
				{
					if (GlobalFunc_5682(uParam0->f_4, 1) > 40f)
					{
						func_314(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_314(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}








void func_200(var uParam0, int iParam1)//Position - 0x70A4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				if ((WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, joaat("weapon_stungun"), 0) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2)) || WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 1))
				{
					func_314(uParam0, "Passenger injured by player with weapon.", 14);
				}
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
}





void func_205()//Position - 0x71B4
{
	switch (iLocal_846)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0) && GlobalFunc_713(Local_409.f_4, Local_409.f_17, 1) < 300f)
			{
				func_209();
				iLocal_846 = 1;
			}
			break;
		
		case 1:
			if (func_207())
			{
				iLocal_846 = 2;
			}
			break;
		
		case 2:
			func_206();
			if (iLocal_852 > 1)
			{
				iLocal_846 = 3;
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0) && GlobalFunc_713(Local_409.f_4, Local_409.f_17, 1) > 350f)
			{
				func_129();
				iLocal_852 = -1;
				iLocal_846 = 0;
			}
			break;
	}
}

void func_206()//Position - 0x7268
{
	struct<3> Var0;
	
	switch (iLocal_852)
	{
		case -1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_849))
			{
				iLocal_849 = VEHICLE::CREATE_VEHICLE(func_130(0), 27.1498f, -1246.523f, 28.4013f, 297.629f, 1, 1);
				iLocal_852++;
			}
			break;
		
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_849))
			{
				AUDIO::SET_VEHICLE_RADIO_LOUD(iLocal_849, 1);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_849, 1);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_849, "SNAKEYES");
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_849, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_849, 10);
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_849, 0f, 3f, 0f) };
				iLocal_850 = PED::CREATE_PED(26, func_130(1), Var0, (ENTITY::GET_ENTITY_HEADING(iLocal_849) - 180f), 1, 1);
				iLocal_852++;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_850) && !ENTITY::IS_ENTITY_DEAD(iLocal_849))
			{
				GlobalFunc_173(&(Local_409.f_244), 5, iLocal_850, "TaxiLiz", 0, 1);
				AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_850, "TaxiLiz");
				PED::SET_PED_CONFIG_FLAG(iLocal_850, 317, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_850, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_850, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_850, 2, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_850, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_850, 0);
				PED::_0x46B05BCAE43856B0(iLocal_850, 1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_850, iLocal_849, -1, 2048, 4);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_847);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@taxi@gyn@", "idle_b_ped", 8f, -8f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_847);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_850, uLocal_847);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_847);
				iLocal_852++;
			}
			break;
	}
}

int func_207()//Position - 0x7404
{
	if (!STREAMING::HAS_MODEL_LOADED(func_130(0)))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading Gaunlet ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(func_130(1)))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading A_F_Y_EastSA_03", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_SET_LOADED("move_strafe_melee_unarmed"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading move_strafe_melee_unarmed ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading misscommon@response ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_907))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sMaleChatEnter ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_923))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sMaleChatBase ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_955))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sMaleChatExit ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_939))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sMaleChatIdle ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_987))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sFemaleChatBase ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_971))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sFemaleChatEnter ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_1019))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sFemaleChatExit ", &iLocal_851, 1000);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_1003))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading sFemaleChatIdle ", &iLocal_851, 1000);
		return 0;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("taxi_oj_gyn"))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMING - Way point Recording Loading taxi_oj_gyn...", &iLocal_851, 1000);
		return 0;
	}
	return 1;
}


void func_209()//Position - 0x75AC
{
	STREAMING::REQUEST_MODEL(func_130(0));
	STREAMING::REQUEST_MODEL(func_130(1));
	STREAMING::REQUEST_ANIM_SET("move_strafe_melee_unarmed");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@taxi@gyn@");
	STREAMING::REQUEST_ANIM_DICT("misscommon@response");
	STREAMING::REQUEST_ANIM_DICT("melee@unarmed@streamed_taunts");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_907);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_923);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_939);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_955);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_971);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_987);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_1003);
	STREAMING::REQUEST_ANIM_DICT(&cLocal_1019);
	TASK::REQUEST_WAYPOINT_RECORDING("taxi_oj_gyn");
}

void func_210()//Position - 0x7626
{
	switch (iLocal_844)
	{
		case 0:
			if (!GlobalFunc_747(Local_409.f_82, 16384) && GlobalFunc_4755(&Local_409) != 35)
			{
				if (GlobalFunc_4746(&Local_409))
				{
					if (GlobalFunc_10900(&Local_409))
					{
						if (GlobalFunc_4710(Local_409.f_4, Local_409.f_17, 1) <= 85f && iLocal_852 > 1)
						{
							Local_409.f_17 = { Local_873 };
							HUD::SET_BLIP_COORDS(Local_409.f_9, Local_873);
							GlobalFunc_7559(&uLocal_1068);
							GlobalFunc_4749(&Local_1038, 3, 0);
							GlobalFunc_9566(&Local_409, 36, 1, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_849, 0))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_849, 4, 0, 0);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_849, 0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_849, 150f);
								VEHICLE::SET_VEHICLE_DAMAGE(iLocal_849, 0f, 0f, 0f, 1000f, 0f, 1);
							}
							ENTITY::CREATE_MODEL_HIDE(Local_891, 5f, joaat("prop_skid_chair_02"), 1);
							ENTITY::CREATE_MODEL_HIDE(Local_891, 5f, joaat("prop_rub_couch03"), 1);
							iLocal_844 = 1;
							if (bLocal_1037)
							{
							}
						}
					}
				}
			}
			break;
		
		case 1:
			func_211(&uLocal_1035, Local_873, 30f, 0);
			iLocal_844 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_211(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x7758
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { GlobalFunc_4722(Param1, 1f, -fParam4, -fParam4, -22f) };
	Var3 = { GlobalFunc_4722(Param1, 1f, fParam4, fParam4, 44f) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam5)
	{
		PED::SET_PED_NON_CREATION_AREA(Var0, Var3);
		*uParam0 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, 0, 1, 1, 1);
		MISC::CLEAR_AREA_OF_PEDS(Param1, fParam4, 0);
	}
	else
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, 0);
	}
}


int func_213(var uParam0, int iParam1)//Position - 0x77F6
{
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 355471868) != 1)
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(uParam0->f_3, uParam0->f_4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_214(var uParam0, int iParam1)//Position - 0x7849
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_4, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}



void func_217()//Position - 0x7910
{
	GlobalFunc_6594(&(Local_409.f_55), 2);
	GlobalFunc_6594(&(Local_409.f_55), 4);
	GlobalFunc_6594(&(Local_409.f_55), 16);
	GlobalFunc_6594(&(Local_409.f_55), 64);
	GlobalFunc_6594(&(Local_409.f_55), 256);
	GlobalFunc_6594(&(Local_409.f_55), 512);
	GlobalFunc_6594(&(Local_409.f_55), 1024);
	GlobalFunc_6594(&(Local_409.f_55), 2048);
	GlobalFunc_6594(&(Local_409.f_55), 4096);
	GlobalFunc_6594(&(Local_409.f_55), 1073741824);
	GlobalFunc_6594(&(Local_409.f_100), 8);
	GlobalFunc_6594(&(Local_409.f_100), 2048);
	GlobalFunc_6594(&(Local_409.f_100), 256);
	GlobalFunc_6594(&uLocal_1110, 2);
}






void func_223()//Position - 0x7AA9
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_839);
}

int func_224(var uParam0)//Position - 0x7AB8
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

int func_225(var uParam0, bool bParam1, float fParam2)//Position - 0x7B0B
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
			func_192(uParam0, 1);
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
			func_244(uParam0);
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
					func_314(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && GlobalFunc_713(uParam0->f_3, uParam0->f_11, 1) <= 28f) && GlobalFunc_713(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_240(uParam0, fParam2))
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
									func_314(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!GlobalFunc_4767(uParam0->f_4))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_314(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_233(uParam0);
						if (GlobalFunc_6592(uParam0, uParam0->f_3) < fVar4 || GlobalFunc_6582())
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_227(uParam0))
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


int func_227(var uParam0)//Position - 0x803F
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
					func_314(uParam0, "You had a dead body in your back seat.", 5);
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






void func_233(var uParam0)//Position - 0x8693
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
					func_314(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}







int func_240(var uParam0, float fParam1)//Position - 0x8AD7
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




void func_244(var uParam0)//Position - 0x8FF0
{
	func_200(uParam0, uParam0->f_3);
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



int func_247(var uParam0, int iParam1)//Position - 0x90AC
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
			func_314(uParam0, "ped is fleeing or injured", 5);
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
			func_314(uParam0, "No Taxi", 21);
			GlobalFunc_159("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}







void func_254()//Position - 0x98F6
{
	Local_342 = 0;
	func_271(40105/*func_273*/, 40080/*func_272*/, 1);
	func_271(39841/*func_269*/, 39817/*func_268*/, 1);
	func_271(39756/*func_267*/, 39731/*func_266*/, 1);
	func_271(39660/*func_265*/, 39636/*func_264*/, 1);
	func_271(39526/*func_263*/, 39505/*func_262*/, 1);
	func_271(39452/*func_260*/, 39427/*func_259*/, 1);
	func_271(39285/*func_256*/, 39261/*func_255*/, 1);
}

int func_255(var uParam0, var uParam1)//Position - 0x995D
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Not Driveable", 1);
	return 1;
}




int func_259(var uParam0, var uParam1)//Position - 0x9A03
{
	uParam1 = uParam1;
	func_314(uParam0, "Didn't lose police in time.", 9);
	return 1;
}





int func_264(var uParam0, var uParam1)//Position - 0x9AD4
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Is Flipped", 0);
	return 1;
}


int func_266(var uParam0, var uParam1)//Position - 0x9B33
{
	uParam1 = uParam1;
	func_314(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}


int func_268(var uParam0, var uParam1)//Position - 0x9B89
{
	uParam1 = uParam1;
	func_314(uParam0, "Taxi Not Driveable", 0);
	return 1;
}



void func_271(int iParam0, int iParam1, bool bParam2)//Position - 0x9C26
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

int func_272(var uParam0, var uParam1)//Position - 0x9C90
{
	uParam1 = uParam1;
	func_314(uParam0, "Passenger injured.", 15);
	return 1;
}





void func_277()//Position - 0x9D9C
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

int func_278()//Position - 0x9F74
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_839))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_851, 1000);
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_1117))
	{
		return 0;
	}
	if (!GlobalFunc_6601(&iLocal_851, 1))
	{
		GlobalFunc_2654("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_851, 1000);
		return 0;
	}
	return 1;
}







void func_285()//Position - 0xA4D3
{
	STREAMING::REQUEST_MODEL(iLocal_839);
	GlobalFunc_7563(1);
	uLocal_1117 = GlobalFunc_1455();
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\TREVOR_2_BIKER_RINGTONE", 0);
}



void func_288(var uParam0, int iParam1, bool bParam2)//Position - 0xA564
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
			if (func_311(uParam0))
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
				func_308(5, uParam0);
				func_307(uParam0);
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
			if (func_306(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(0, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[0 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_305(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(1, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[1 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_304(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(8, uParam0);
				func_307(uParam0);
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
			if (func_303(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(6, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[6 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_302(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(4, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[4 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_301(uParam0))
			{
				func_308(7, uParam0);
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
				func_307(uParam0);
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
				func_308(9, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[9 /*10*/].f_9, 1, 0, 1);
				}
				func_307(uParam0);
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
			if (func_294(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(13, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[13 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_293(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(14, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[14 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_292(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(11, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[11 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_291(uParam0))
			{
				GlobalFunc_4777(uParam0, 1);
				func_308(12, uParam0);
				if (uParam0->f_113)
				{
					GlobalFunc_9566(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					GlobalFunc_9566(uParam0, Local_189[12 /*10*/].f_9, 1, 0, 0);
				}
				func_307(uParam0);
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
			if (func_289(uParam0))
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
				func_308(2, uParam0);
				func_307(uParam0);
			}
		}
	}
}

int func_289(var uParam0)//Position - 0xAD5E
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


int func_291(var uParam0)//Position - 0xAE5B
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

int func_292(var uParam0)//Position - 0xAEEA
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

int func_293(var uParam0)//Position - 0xB01A
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

int func_294(var uParam0)//Position - 0xB19D
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







int func_301(var uParam0)//Position - 0xB518
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

int func_302(var uParam0)//Position - 0xB5AD
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

int func_303(var uParam0)//Position - 0xB61F
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

int func_304(var uParam0)//Position - 0xB695
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

int func_305(var uParam0)//Position - 0xB716
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

int func_306(var uParam0)//Position - 0xB7A2
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

void func_307(var uParam0)//Position - 0xB82C
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

void func_308(int iParam0, var uParam1)//Position - 0xB874
{
	Local_189[iParam0 /*10*/].f_1++;
	func_309(uParam1, iParam0);
	GlobalFunc_235(&(Local_189[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_309(var uParam0, int iParam1)//Position - 0xB8A7
{
	uParam0->f_76 = (uParam0->f_76 + Local_189[iParam1 /*10*/]);
}


int func_311(var uParam0)//Position - 0xB8D1
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


int func_313(var uParam0, int iParam1, bool bParam2)//Position - 0xB960
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
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

void func_314(var uParam0, char* sParam1, int iParam2)//Position - 0xB9BC
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








void func_322()//Position - 0xC357
{
	GlobalFunc_7571(&Local_409);
	if (GlobalFunc_7570(&Local_409, &Local_1038))
	{
		switch (Local_1038.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!GlobalFunc_7560(&Local_409))
					{
						if (GlobalFunc_6612("TX_OBJ_GYN_DO") || HUD::DOES_BLIP_EXIST(Local_409.f_9))
						{
							Local_1038.f_27++;
						}
						else if (GlobalFunc_4755(&Local_409) != 10)
						{
							GlobalFunc_9566(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((GlobalFunc_4755(&Local_409) > 10 && GlobalFunc_4755(&Local_409) != 15) && !GlobalFunc_7560(&Local_409))
				{
					GlobalFunc_9566(&Local_409, 15, 1, 0, 0);
					if (bLocal_1037)
					{
					}
					GlobalFunc_8925(&Local_409, 7);
				}
				break;
			
			case 2:
				if (GlobalFunc_8928(&Local_409, 18) > 4f && !iLocal_863)
				{
					iLocal_857 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_857, "Biker_Ring_Tone", Local_409.f_4, "TREVOR_2_SOUNDS", 0, 0);
					iLocal_863 = 1;
				}
				else if (((GlobalFunc_8928(&Local_409, 18) > 7f && GlobalFunc_4755(&Local_409) != 16) && iLocal_863) && !iLocal_865)
				{
					GlobalFunc_894(&iLocal_857);
					if (!PED::IS_PED_INJURED(Local_409.f_3))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_409.f_3, 1, 1);
					}
					GlobalFunc_9566(&Local_409, 16, 1, 0, 0);
					if (bLocal_1037)
					{
					}
					iLocal_865 = 1;
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(Local_409.f_3))
				{
					TASK::TASK_USE_MOBILE_PHONE(Local_409.f_3, 0, 1);
				}
				Local_1038.f_27++;
				break;
			
			case 5:
				if (GlobalFunc_8928(&Local_409, 18) > 2f && GlobalFunc_4755(&Local_409) != 131)
				{
					GlobalFunc_9566(&Local_409, 131, 1, 0, 0);
					if (bLocal_1037)
					{
					}
					Local_1038.f_27++;
				}
				break;
			}
	}
	func_323(&Local_409, &uLocal_1068, &Local_1038, bLocal_1037);
}

int func_323(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xC552
{
	func_331(uParam0, uParam1);
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








void func_331(var uParam0, var uParam1)//Position - 0xCC02
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























void func_354(var uParam0)//Position - 0x10FC9
{
	if (!GlobalFunc_4752(uParam0))
	{
		if ((MISC::GET_GAME_TIMER() % 1000) < 50)
		{
		}
		func_192(uParam0, 1);
	}
	else if (GlobalFunc_6588(uParam0, 14))
	{
		GlobalFunc_7561(uParam0);
		GlobalFunc_10825(uParam0, 0);
	}
}


void func_356(var uParam0)//Position - 0x11090
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
			func_314(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_357(var uParam0, var uParam1)//Position - 0x111A3
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
		if (func_384(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			GlobalFunc_8281(uParam0, 27, 0, 0);
			GlobalFunc_8281(uParam0, 10, 0, 0);
			func_382(uParam0, &uVar0, uParam1);
		}
		GlobalFunc_10908(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_358(uParam0);
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

void func_358(var uParam0)//Position - 0x112CD
{
	if (!GlobalFunc_6710(uParam0->f_429))
	{
		uParam0->f_429 = GlobalFunc_7719();
		GlobalFunc_8328(&(uParam0->f_429), 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (GlobalFunc_8448(uParam0->f_429))
	{
		func_314(uParam0, "Player took too long to make pickup", 9);
	}
}
























void func_382(var uParam0, var uParam1, var uParam2)//Position - 0x11AFA
{
	switch (*uParam1)
	{
		case 1:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_314(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (GlobalFunc_10600(uParam0, 0, 4))
			{
				func_314(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (GlobalFunc_10600(uParam0, 0, 8))
			{
				func_314(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (GlobalFunc_10600(uParam0, 1, 1))
			{
				func_314(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (GlobalFunc_10600(uParam0, 0, 1))
			{
				func_314(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!GlobalFunc_747(*uParam2, 2) && GlobalFunc_4746(uParam0))
			{
				func_314(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}


int func_384(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x11C51
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
			if (func_385(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_385(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
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

int func_385(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x11D79
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







void func_392()//Position - 0x122FE
{
	func_393(&Local_409);
	func_410();
}

void func_393(var uParam0)//Position - 0x12311
{
	func_9(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		GlobalFunc_4670(2);
	}
}




void func_397()//Position - 0x12490
{
	int iVar0;
	
	Local_409.f_23 = { -1583.59f, 169.2662f, 57.6205f };
	Local_409.f_33 = 116f;
	Local_409.f_26 = { 49.0898f, -1178.923f, 28.2091f };
	Local_409.f_34 = 185.975f;
	GlobalFunc_8929(&Local_409, 6);
	Local_409.f_410 = 0;
	GlobalFunc_4787(&Local_409, 3, 6);
	iVar0 = GlobalFunc_6674(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		StringCopy(&cLocal_895, "txm9_gHelp1M_4", 24);
	}
	else if (iVar0 == 2)
	{
		StringCopy(&cLocal_895, "txm9_gHelp1T_4", 24);
	}
	else if (iVar0 == 1)
	{
		StringCopy(&cLocal_895, "txm9_gHelp1F_7", 24);
	}
}













void func_410()//Position - 0x12A8B
{
	func_211(&uLocal_1035, Local_873, 100f, 1);
	TASK::REMOVE_WAYPOINT_RECORDING("taxi_oj_gyn");
	PED::SET_CREATE_RANDOM_COPS(1);
	func_223();
	func_129();
	ENTITY::REMOVE_MODEL_HIDE(Local_891, 5f, joaat("prop_skid_chair_02"), 0);
	ENTITY::REMOVE_MODEL_HIDE(Local_891, 5f, joaat("prop_rub_couch03"), 0);
	AUDIO::STOP_AUDIO_SCENE("TAXI_GOT_U_NOW");
	SCRIPT::TERMINATE_THIS_THREAD();
}



